`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:22:03 10/04/2023 
// Design Name: 
// Module Name:    shift 
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
output [31:0]out);

reg [95:0] shifter;
initial
begin
	shifter = 96'hffff_ffff_1234_5678_ffff_ffff;
end
always @(posedge clk)
begin
	shifter = {shifter[91:0], shifter[95:92]};	
end
assign out = shifter[95:64];


endmodule
