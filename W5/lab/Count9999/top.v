`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:16:52 09/27/2023 
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
output wire clk,
 output wire stb,
 output wire dio
 );
wire clk_khz,clk_hz;
wire [7:0] q;
wire [3:0] ones,tens,hundreds ;
ClockDiv clock (clk_50M, clk_khz,clk_hz) ;
Counter counter (clk_hz,q ) ;
HexBcd hex_bcd (q,ones,tens,hundreds);
wire [3:0] seg [7:0];
TM1638 tm (8'b1,ones,tens,hundreds,15,15,15,15,15,
clk_khz,
 clk,
 stb,
 dio
 );
endmodule
