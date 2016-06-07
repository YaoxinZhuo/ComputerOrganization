`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    06:36:42 06/07/2016 
// Design Name: 
// Module Name:    register 
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
module register(
	 input [4:0] R_Addr_A,
	 input [4:0] R_Addr_B,
	 input [4:0] W_Addr,
	 input [31:0] W_Data,
	 input Write_Reg,
	 input CLK,
	 input RST,
	 output [31:0] R_Data_A,
	 output [31:0] R_Data_B
    );
	 
	 reg [31:0] REG_Files[0:31];
    reg [5:0] k;
	 
	 assign R_Data_A = REG_Files[R_Addr_A];
	 
	 always @(negedge CLK or posedge RST )
		begin
				REG_Files[k] <= 0;
		end
		
		begin
			begin
				REG_Files[W_Addr] <= W_Data;
			end 
		end
endmodule