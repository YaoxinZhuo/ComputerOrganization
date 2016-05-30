`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:29:52 05/29/2016
// Design Name:   Integration_8_1
// Module Name:   C:/ComputerOrganazationHomework/Homework8_1/integeration8_1_test1.v
// Project Name:  Homework8_1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Integration_8_1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module integeration8_1_test1;

	// Inputs
	reg clk;
	reg rst;

	// Outputs
	wire [31:0] FOUT;
	wire ZF;
	wire OF;

	// Instantiate the Unit Under Test (UUT)
	Integration_8_1 uut (
		.clk(clk), 
		.rst(rst), 
		.FOUT(FOUT), 
		.ZF(ZF), 
		.OF(OF)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#100;
		rst = 1;
		
		#100;
		clk = 0;
		rst = 0;
		
		#100;
		clk = 1;
		
		#100;
		clk = 0;
		
		#100;
		clk = 1;
		
		#100;
		clk = 0;
		
		#100;
		clk = 1;
		
		#100;
		clk = 0;

		#100;
		clk = 1;
		
		#100;
		clk = 0;
		
		#100;
		clk = 1;
		
		#100;
		clk = 0;
		
		#100;
		clk = 1;
		
		#100;
		clk = 0;
		
		#100;
		clk = 1;
		
		#100;
		clk = 0;
		
		#100;
		clk = 1;
		
		#100;
		clk = 0;
		
		#100;
		clk = 1;
		
		#100;
		clk = 0;
		
		#100;
		clk = 1;
		
		#100;
		clk = 0;
		
		#100;
		clk = 1;
		
		#100;
		clk = 0;
		
		#100;
		clk = 1;
		
		#100;
		clk = 0;
		
		#100;
		clk = 1;
		
		#100;
		clk = 0;
		
		#100;
		clk = 1;
		
		#100;
		clk = 0;
		
		#100;
		clk = 1;
		
		#100;
		clk = 0;
		
		#100;
		clk = 1;
		
		#100;
		clk = 0;
		
		#100;
		clk = 1;
		
		#100;
		clk = 0;
		
		#100;
		clk = 1;
		
		#100;
		clk = 0;
		
		
	end
      
endmodule

