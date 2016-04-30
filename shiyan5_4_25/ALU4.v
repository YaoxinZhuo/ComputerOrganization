`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:38:41 04/30/2016 
// Design Name: 
// Module Name:    ALU4 
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
module ALU4(input [31:0] AA, input [31:0] BB, input [2:0] ALU_OP, 
				output F
    );
	 reg [31:0] F;
	 reg ZF;
	 reg OF;
	 reg [31:0] A;
	 reg [31:0] B;
	 reg C32;
	always @(*)
		begin
			A = AA;
			B = BB;
			case(ALU_OP)
				3'b000:begin F = A&B;end
				3'b001:begin F = A | B;end
				3'b010:begin F = A ^ B;end
				3'b011:begin F = A ~^ B;end
				3'b100:begin {C32,F} = A + B;end
				3'b101:begin {C32,F} = A - B;end
				3'b110:begin
					if(A < B)
						begin
							F = 32'h0000_0001;
						end
					else
						begin
							F = 32'h0000_0000;
						end
				end
				3'b111:begin
							F = B<<A;
				end
				default:
				begin
				;
				end
			endcase
			if(F==32'h0000_0000)
				begin
					ZF = 1;
				end
			else
				begin
					ZF = 0;
				end
			if((A[31]+B[31])>1)
				begin
					//C32=1;
					OF = A[31]^B[31]^F[31]^C32;
				end
			else
				begin
					//C32=0;
					OF = A[31]^B[31]^F[31]^C32;
				end
		end
endmodule