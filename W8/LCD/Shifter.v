`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:19:24 10/07/2023 
// Design Name: 
// Module Name:    Shifter 
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
module Shifter(
		input wire clk,  
		output wire [31:0] out);
			
		reg [63:0] shifter;	
		initial
			begin
				shifter = 64'hffff_2011_9147_ffff;
			end
			
		always @(posedge clk)
			begin
				shifter = {shifter[59:0], shifter[63:60]};
			end
	assign out = shifter[63:32];
endmodule