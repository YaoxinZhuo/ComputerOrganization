`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:00:25 05/29/2016
// Design Name:   Expetiment8_1_DigitalOutput
// Module Name:   C:/ComputerOrganazationHomework/Homework8_1/UPUP_8_1_test2.v
// Project Name:  Homework8_1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Expetiment8_1_DigitalOutput
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module UPUP_8_1_test2;

	// Inputs
	reg Up_clk;
	reg Up_reset;
	reg [1:0] Choose_light;

	// Outputs
	reg [7:0] Digital_light;

	// Instantiate the Unit Under Test (UUT)
	Expetiment8_1_DigitalOutput uut (
		.Up_clk(Up_clk), 
		.Up_reset(Up_reset), 
		.Choose_light(Choose_light), 
		.Digital_light(Digital_light)
	);

	initial begin
		// Initialize Inputs
		Up_clk = 0;
		Up_reset = 0;
		Choose_light = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#100;
		Up_reset = 1;
		
		#100;
		Up_reset = 0;
		
		#50;
		Up_clk = 1;
		#50;
		Up_clk = 0;
		#50;
		Up_clk = 1;
		#50;
		Up_clk = 0;
		#50;
		Up_clk = 1;
		#50;
		Up_clk = 0;
		
		#100;
		Choose_light = 1;
		
		#100;
		Choose_light = 2;
		
		#100;
		Choose_light = 3;
		
	end
      
endmodule

