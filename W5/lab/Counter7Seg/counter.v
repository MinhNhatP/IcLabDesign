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
input wire s0,
input wire s1,
input wire s2,
output reg [7:0]out0,
output reg [7:0]out1
 );
reg [7:0]cnt;
initial
begin
	cnt = 0;
end

always@(posedge clk)
begin
	if(s1)
		cnt = cnt;
	else
		if(s0)
			cnt = cnt + 1;
		else
			cnt = cnt - 1;
end 
always@(posedge clk)
case(s2)
0: begin 
		out0 = cnt;
		out1 = 0;
	end
1: begin
		out1 = cnt;
		out0 = 0;
	end
endcase
endmodule









