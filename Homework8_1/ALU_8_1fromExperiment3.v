`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:33:31 05/24/2016 
// Design Name: 
// Module Name:    ALU_8_1fromExperiment3 
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
module ALU_8_1fromExperiment3(
	 input [2:0] ALU_OP,
	 input [31:0] A,
	 input [31:0] B,
	 output reg [31:0]FOUT,
	 output reg COUT
    );
	 
	 always@(*)
		begin
			COUT = 0;
			case(ALU_OP)
				3'b000:FOUT[31:0] = A[31:0]&B[31:0];
				3'b001:FOUT[31:0] = A[31:0]|B[31:0];
				3'b010:FOUT[31:0] = A[31:0]^B[31:0];
				3'b011:FOUT[31:0] = ~(A[31:0]|B[31:0]);
				3'b100:
					begin
						{COUT,FOUT[31:0]} = A[31:0]+B[31:0];
					end
				3'b101:
					begin 
						{COUT,FOUT[31:0]} = A[31:0]-B[31:0];
					end
				3'b110:
					begin 
						if(A[31:0] < B[31:0]) 
							begin
								FOUT = 1; 
							end
						else 
							begin
								FOUT = 0;
							end
					end
				3'b111:FOUT[31:0] = B[31:0] << A[31:0];
		endcase
	 end
endmodule
