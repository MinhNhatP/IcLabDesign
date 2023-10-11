`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:00:02 10/11/2023 
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
input wire [7:0]cnt,

input wire [1:0]s,


output reg [7:0]out0,out1,out2,out3
 );



always@(posedge clk)
case(s)
0: begin 
		out0 = cnt;
		out1 = 0;
		out1 = 0;
		out1 = 0;
	end
1: begin
		out0 = 0;
		out1 = cnt;
		out1 = 0;
		out1 = 0;
	end
2: begin 
		out0 = 0;
		out1 = 0;
		out1 = cnt;
		out1 = 0;
	end
3: begin
		out0 = 0;
		out1 = 0;
		out1 = 0;
		out1 = cnt;
	end
endcase


endmodule