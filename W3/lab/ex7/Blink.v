`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:08:46 09/09/2023 
// Design Name: 
// Module Name:    Blink 
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
module BLINK(clk, reset, out);
	input clk, reset;
	output reg [7:0] out;
	
	initial out = 8'b0000_0000;
	
	always@(posedge clk, reset)
	begin
		if (reset)
				out = 8'b0000_0000;			
		else
			out =~out;
	end
	
endmodule
