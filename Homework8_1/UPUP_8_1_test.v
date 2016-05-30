`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   07:46:59 05/30/2016
// Design Name:   Expetiment8_1_DigitalOutput
// Module Name:   C:/ComputerOrganazationHomework/Homework8_1/UPUP_8_1_test.v
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

module UPUP_8_1_test;

	// Inputs
	reg Up_clk;
	reg Up_reset;
	reg [2:0] Choose_light;

	// Outputs
	wire [7:0] Digital_light;

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
		#50;
		Up_reset = 1;
		#50;
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
	end
      
endmodule

