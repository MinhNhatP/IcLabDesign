`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:30:50 10/06/2023 
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
input wire clk,
output wire clko, stb, dio
    );
	
wire clk_hz;
wire [31:0]seg;

ClockDiv clk0(clk, clk_hz);
Shifter shift(clk_hz, seg);




TM1638 tm0(
    8'b01010101,  
	 seg[3:0],seg[7:4],seg[11:8],seg[15:12],seg[19:16],seg[23:20],seg[27:24],seg[31:28],
	 
	 clk,
    clko,
    stb,
    dio
    );
endmodule
