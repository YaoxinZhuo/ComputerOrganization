`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   06:37:41 06/07/2016
// Design Name:   cpu
// Module Name:   C:/ComputerOrganazationHomework/homework10_final/cputest.v
// Project Name:  homework10_final
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: cpu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////
module cputest;

	// Inputs
	reg clk;
	reg clk_100m;
	reg rst;

	// Outputs
	wire ZF;
	wire OF;
	wire [31:0] f;
	wire [31:0] M_R_Data;
	wire [31:0] PC;

	// Instantiate the Unit Under Test (UUT)
	cpu uut (
		.clk(clk), 
		.clk_100m(clk_100m), 
		.rst(rst), 
		.f(f), 
		.M_R_Data(M_R_Data), 
		.PC(PC), 
		.ZF(ZF), 
		.OF(OF)
	);
	always
	begin
		#1;
		clk_100m=1;
		#1;
		clk_100m=0;
	end
	
	always
	begin
		#10;
		clk=1;
		#10;
		clk=0;
	end
	
	initial begin
		// Initialize Inputs	
		rst = 1;		
		#10;
		rst = 0;
		
	end
      
endmodule



