`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:04:14 03/19/2016 
// Design Name: 
// Module Name:    TopALU1test1 
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
module TopALU1test1(input [31:0] TA,input [31:0] TB,input [2:0] OP,output reg ZF,output reg OF,input CLK,input SEL,output AN,output SEG
    );
	reg[31:0] FF;
	
	//module TopALU1(input [31:0] AA, input [31:0] BB, input [2:0] ALU_OP, output reg [31:0] F, output reg ZF,output OF, 
	//				input CLK,input Sel,output An,output Seg 
	TopALU1 TopAlu1(.AA(TA),.BB(TB),.ALU_OP(OP),.F(FF),.ZF(ZF),.OF(OF),.CLK(CLK),.Sel(SEL),.An(AN),.Seg(SEG));
	always @ (*)
	begin
		case(OP)
			3'b000:begin TA = 32'h0000_0000;TB = 32'h0000_0000;end
			3'b001:begin TA = 32'h0000_0003;TB=32'h0000_0607;end
			3'b010:begin TA = 32'h8000_0000;TB=32'h8000_0000;end
			3'b011:begin TA = 32'h7FFF_FFFF;TB=32'h7FFF_FFFF;end
			3'b100:begin TA = 32'hFFFF_FFFF;TB=32'hFFFF_FFFF;end
			3'b101:begin TA = 32'h8000_0000;TB=32'hFFFF_FFFF;end
			3'b110:begin TA = 32'h1234_5678;TB=32'h3333_2222;end
			3'b111:begin TA = 32'h9ABC_DEF0;TB=32'h1111_2222;end
		endcase
	end
	
	
endmodule
