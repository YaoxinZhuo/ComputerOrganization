`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:34:52 05/24/2016 
// Design Name: 
// Module Name:    translateInstructAndFunction 
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
module translateInstructAndFunction(//÷∏¡Ó“Î¬Î∆˜
	input [5:0] OP,
	input [5:0] Function,
	output reg Write_Reg,
	output reg [2:0] ALU_OP
    );
	 
	always@(*)
	begin
		if(OP == 6'b000000)
			begin
				Write_Reg = 1;
				case(Function)
					6'b100000:ALU_OP = 3'b100;		//+
					6'b100010:ALU_OP = 3'b101;		//-
					6'b100100:ALU_OP = 3'b000;		//&
					6'b100101:ALU_OP = 3'b001;		//|
					6'b100110:ALU_OP = 3'b010;		//^
					6'b100111:ALU_OP = 3'b011;		//~|	
					6'b101011:ALU_OP = 3'b110;		//if(rs < rt)rd=1?else?rd=0
					6'b000100:ALU_OP = 3'b111;		//(rt << rs)°˙rd	
				endcase
		end
		
		else
			begin
				Write_Reg = 0;
			end
	end
endmodule
