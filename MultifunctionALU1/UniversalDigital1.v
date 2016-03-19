`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:39:45 03/19/2016 
// Design Name: 
// Module Name:    UniversalDigital1 
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
module tongyongshumaguan(
	 input CLK_S,                 //在顶层分频
    input [31:0] Data,
	 input Sel,
    output reg [3:0] AN,
    output reg [7:0] Seg
    );
	 reg [3:0] led_data;
	 reg [1:0] Bit_Sel;
	 
	 always@(posedge CLK_S)
	 begin
		Bit_Sel <= Bit_Sel + 1;
	 end
	 
	 always@(Bit_Sel or Data or Sel)
	 begin
		if (Sel == 0)
		begin
		case(Bit_Sel)
			2'b00: 
			begin
			AN = 4'b0111;
			led_data = Data[31:28];
			end
		
			2'b01: 
			begin 
			AN = 4'b1011;
			led_data = Data[27:24];
			end
			
			2'b10:
			begin 
			AN = 4'b1101;
			led_data = Data[23:20];
			end
			
			2'b11: 
			begin 
			AN = 4'b1110;
			led_data = Data[19:16];
			end
		endcase
		end
		
		else  //低四位
		begin
		case(Bit_Sel)
			2'b00: 
			begin
			AN = 4'b0111;
			led_data = Data[15:12];
			end
		
			2'b01: 
			begin 
			AN = 4'b1011;
			led_data = Data[11:8];
			end
			
			2'b10:
			begin 
			AN = 4'b1101;
			led_data = Data[7:4];
			end
			
			2'b11: 
			begin 
			AN = 4'b1110;
			led_data = Data[3:0];
			end
		endcase
		end
		
	 end
	 
	 always@(led_data or AN or Sel)
	 begin
		case(led_data)
		4'b0000: Seg = 8'b00000011;
		4'b0001: Seg = 8'b10011111;
		4'b0010: Seg = 8'b00100101;
		4'b0011: Seg = 8'b00001101;
		4'b0100: Seg = 8'b10011001;
		4'b0101: Seg = 8'b01001001;
		4'b0110: Seg = 8'b01000001;
		4'b0111: Seg = 8'b00011111;
		4'b1000: Seg = 8'b00000001;
		4'b1001: Seg = 8'b00001001; //9
		4'b1010: Seg = 8'b00010001;
		4'b1011: Seg = 8'b11000001;
		4'b1100: Seg = 8'b01100011;
		4'b1101: Seg = 8'b10000101;
		4'b1110: Seg = 8'b01100001;
		4'b1111: Seg = 8'b01110001;
		endcase
	end


endmodule