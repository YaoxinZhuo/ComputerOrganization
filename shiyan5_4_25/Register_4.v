`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:33:58 04/30/2016 
// Design Name: 
// Module Name:    Register_4 
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
//寄存器
module Register_4(
	input [4:0] R_Addr_A,
	input [4:0] R_Addr_B,
	input [4:0] W_Addr,
	input [31:0] W_Data,
	input Write_Reg,
	input Reset,
	output [31:0] R_Data_A,
	output [31:0] R_Data_B
    );
	 
	 reg[31:0]REG_Files[0:31];
	 
	 assign R_Data_A = REG_Files[R_Addr_A];
	 assign R_Data_B = REG_Files[R_Addr_B];
	 
	 //书上写的来
	 reg[5:0] count;
	
	 always @ (posedge Reset)
		begin
			if(Reset)//如果要重置，就全部重置为0
				begin
					for(count = 0;count <32;count = count + 1)
						begin
							REG_Files[count] <= 0;
						end
				end
			else//没有重置
				begin
					if(Write_Reg)//如果要写我就写
						begin
							if(W_Addr==0)
								begin
									REG_Files[W_Addr] <= 0;
								end
							else
								begin
									REG_Files[W_Addr] <= W_Data;
								end
						end
				end
		end
endmodule
