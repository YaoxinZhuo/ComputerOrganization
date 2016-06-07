`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    06:36:05 06/07/2016 
// Design Name: 
// Module Name:    translate 
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
module InsTrans(
	input [5:0] OP,
	input [5:0] func,
	input ZF,
	output reg Write_Reg,
	output reg [2:0] ALU_OP,
	output reg [1:0] w_r_s,
	output reg imm_s,
	output reg rt_imm_s,
	output reg [1:0] wr_data_s,
	output reg Mem_Write,
	output reg [1:0] PC_S   
	
    );
	 
	always@(*)
	begin
		if(OP == 6'b000000)
		begin
		
			if(func == 6'b001000) //jr
			begin
				Write_Reg = 0;
				Mem_Write = 0;
				PC_S = 2'b01;
			end
			
			else
			begin
				w_r_s = 2'b00;  //rd
				rt_imm_s=0; 
				wr_data_s = 2'b00;
				Write_Reg = 1;
				Mem_Write = 0;
				PC_S = 2'b00;
			
				case(func)
				6'b100000:ALU_OP = 3'b100;		//+
				6'b100010:ALU_OP = 3'b101;		//-
				6'b100100:ALU_OP = 3'b000;		//&
				6'b100101:ALU_OP = 3'b001;		//|
				6'b100110:ALU_OP = 3'b010;		//^
				6'b100111:ALU_OP = 3'b011;		//~|	
				6'b101011:ALU_OP = 3'b110;		//if(rs < rt)rd=1?else?rd=0
				6'b000100:ALU_OP = 3'b111;		//(rt << rs)¡úrd				
				endcase
			end
		end
		
		else if(OP == 6'b001000)	//addi
		begin
			w_r_s = 2'b01;  
			imm_s = 1;	
			rt_imm_s=1; 
			wr_data_s = 2'b00;
			ALU_OP = 3'b100;	
			Write_Reg = 1;
			Mem_Write = 0;
			PC_S = 2'b00;
		end
		
		else if(OP == 6'b001100)	//andi
		begin
			w_r_s = 1;  
			imm_s = 0;	
			rt_imm_s=1; 
			wr_data_s = 0;
			ALU_OP = 3'b000;	
			Write_Reg = 1;
			Mem_Write = 0;
			PC_S = 0;
		end
		
		else if(OP == 6'b001110)	//xori
		begin
			w_r_s = 1;  
			imm_s = 0;	
			rt_imm_s=1; 
			wr_data_s = 0;
			ALU_OP = 3'b010;	
			Write_Reg = 1;
			Mem_Write = 0;
			PC_S = 0;
		end
		
		else if(OP == 6'b001011)	//sltiu
		begin
			w_r_s = 1;  
			imm_s = 0;	
			rt_imm_s=1; 
			wr_data_s = 0;
			ALU_OP = 3'b110;	
			Write_Reg = 1;
			Mem_Write = 0;
			PC_S = 0;
		end
		
		else if(OP == 6'b100011)  //lw
		begin
			
			w_r_s = 1;  
			imm_s = 1;	
			rt_imm_s=1; 
			wr_data_s = 1;
			//ALU_OP = 3'b100;	
			Write_Reg = 1;
			Mem_Write = 0;
			PC_S = 0;			
		end
		
		else if(OP == 6'b101011)  //sw
		begin
		
			imm_s = 1;	
			rt_imm_s=1; 
			Write_Reg = 0;
			Mem_Write = 1;
			PC_S = 0;
		end
		
		else if(OP == 6'b000100)  //beq 
		begin
			imm_s = 1;	
			rt_imm_s=0; 
			ALU_OP = 3'b101;	
			Write_Reg = 0;
			Mem_Write = 0;
			PC_S = {ZF,1'b0};; 		
		end
		
		else if(OP == 6'b000101)  //bne
		begin
			imm_s = 1;	
			rt_imm_s=0; 
			ALU_OP = 3'b101;	
			Write_Reg = 0;
			Mem_Write = 0;
			PC_S = {~ZF,1'b0}; 
		end
		
		else if(OP == 6'b000010)  //j 
		begin	
			Write_Reg = 0;
			Mem_Write = 0;
			PC_S = 2'b11; 		
		end
		
		else if(OP == 6'b000011)  //jal
		begin
			w_r_s = 2'b1x;  
			wr_data_s = 2'b1x;	
			Write_Reg = 1;
			Mem_Write = 0;
			PC_S = 2'b11; 
		end
		
		else begin end
		
	end
	

endmodule
