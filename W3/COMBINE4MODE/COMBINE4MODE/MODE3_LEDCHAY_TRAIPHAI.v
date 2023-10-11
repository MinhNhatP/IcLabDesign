`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:54:10 09/09/2023 
// Design Name: 
// Module Name:    MODE3_LEDCHAY_TRAIPHAI 
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
module MODE3_LEDCHAY_TRAIPHAI(clk, reset, en, OUT);
	input clk;
	input reset;
	input en;
	output reg [7:0] OUT;
	
	reg direction;
	//direction == 1: right to left
	//direction == 0: left to right
	always@(posedge clk)
	begin
		if (reset)
		begin
			OUT = 8'b0000_0001;
			direction = 1;
		end
		else
			if (en)
			begin
				if (direction == 1)
					OUT = OUT << 1;
				else
					OUT = OUT >> 1;
				if (OUT[7] == 1 || OUT[0] == 1)
					direction = ~direction;
			end
			else
				OUT = OUT;
		end
endmodule
