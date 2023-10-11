`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:31:59 09/27/2023 
// Design Name: 
// Module Name:    top 
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
module top(input clk_50M,
input reset,
output wire clk,
 output wire stb,
 output wire dio
 );
wire clk_khz,clk_hz;
wire [7:0] q;

ClockDiv clock (clk_50M, clk_khz,clk_hz) ;
SHIFT_8LED shiftled(clk_hz,reset,q);

TM1638 tm (q,15,15,15,15,15,15,15,15,
clk_khz,
 clk,
 stb,
 dio
 );
endmodule
