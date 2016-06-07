`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    06:36:23 06/07/2016 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
	 input [2:0] ALU_OP,
	 input [31:0] A,
	 input [31:0] B,
	 output reg [31:0]f,
	 output reg COUT,
	 output ZF,
	 output reg OF
    );
	 
	 assign ZF=(f>0)?0:1;
	 
	 always@(*)
	 begin
		COUT = 0;
		case(ALU_OP)
		3'b000:begin f[31:0] = A[31:0] & B[31:0];OF=0; end
		3'b001:begin f[31:0] = A[31:0] | B[31:0];OF=0; end
		3'b010:begin f[31:0] = A[31:0] ^ B[31:0];OF=0; end
		3'b011:begin f[31:0] = ~(A[31:0] | B[31:0]); OF=0; end
		3'b100:begin {COUT,f[31:0]} = A[31:0] + B[31:0];OF=A[31]^B[31]^f[31]^COUT; end
		3'b101:begin {COUT,f[31:0]} = A[31:0] - B[31:0];OF=A[31]^B[31]^f[31]^COUT; end
		3'b110:
		begin 
			if(A[31:0] < B[31:0]) f = 1; 
			else f = 0;
		end
		3'b111:f[31:0] = B[31:0] << A[31:0];
		endcase
	 end


endmodule
