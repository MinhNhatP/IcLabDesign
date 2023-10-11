`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:46:50 09/27/2023 
// Design Name: 
// Module Name:    counter 
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
module COUNTER(
input wire clk,
output wire [127:0]out
 );
 
reg [255:0] shifter;	
initial
	begin
		shifter = "        20119147                ";
	end
always@(posedge clk)
	begin
			shifter = {shifter[247:0], shifter[255:248]};
	end
	assign out = shifter[255:128];
endmodule









