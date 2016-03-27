`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:54:05 03/27/2016 
// Design Name: 
// Module Name:    Register_Stack_1 
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
module Register_Stack_1(
	input [4:0] R_Addr_A,
	input [4:0] R_Addr_B,
	input [4:0] W_Addr,
	input [31:0] W_Data,
	input Write_Reg,
	input CLK,
	input Reset,
	output [31:0] R_Data_A,
	output [31:0] R_Data_B
    );
	 
	 reg[31:0]REG_Files[0:31];
	 
	 assign R_Data_A = REG_Files[R_Addr_A];
	 assign R_Data_B = REG_Files[R_Addr_B];
	 
	 //书上写的来
	 reg[5:0] count_flash;
	
	 always @ (posedge CLK or posedge Reset)
		begin
			if(Reset)//如果要重置，就全部重置为0
				begin
					for(k=000000;k<111111;k = k+1)
						begin
							REG_Files[k] <= 0;
						end
				end
			else//没有重置
				begin
					if(Write_Reg)//如果要写我就写
						begin
							REG_Files[W_Addr] <= W_Data;
						end
				end
		end
	 


endmodule
