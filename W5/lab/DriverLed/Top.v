`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:27:10 09/20/2023 
// Design Name: 
// Module Name:    Top 
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
module Top(
	input  clk_50M,
	output wire clk,
	output wire stb,
	output wire dio
    );
wire clko;
ClkDiv_781k clock(clk_50M, clko);
wire [3:0] seg[7:0];
TM1638 tm (8'b01010101,0,1,2,3,4,5,6,7,
		clko,
		clk,
		stb,
		dio);


endmodule
