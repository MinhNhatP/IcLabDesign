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
	
cnt = cnt + 1;
	
end 

endmodule



