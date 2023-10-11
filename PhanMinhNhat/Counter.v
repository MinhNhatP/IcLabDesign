`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:25:01 10/03/2023 
// Design Name: 
// Module Name:    Counter 
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

output reg [7:0]out0
 );
reg [7:0]cnt;
initial
begin
	cnt = 0;
end

always@(posedge clk)
begin
	if(s0)
		cnt = cnt;
	else
		if(s1)
			cnt = cnt + 1;
		else
			cnt = cnt - 1;
	out0 = cnt;
end 

endmodule





