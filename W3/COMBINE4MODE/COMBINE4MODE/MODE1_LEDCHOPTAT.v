`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:30:34 09/09/2023 
// Design Name: 
// Module Name:    MODE1_LEDCHOPTAT 
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
module MODE1_LEDCHOPTAT(clk, reset, en, OUT);
	input clk;
	input reset;
	input en;
	output reg [7:0] OUT;
	always@(posedge clk)
	begin
		if (reset)
			OUT = 8'b0000_0000;
		else
			if (en)
				OUT = ~OUT;
			else
				OUT = OUT;
	end
endmodule
