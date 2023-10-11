`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:29:59 10/04/2023 
// Design Name: 
// Module Name:    TOP 
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
module TOP(
input wire clk,
output wire clko,stb,dio
    );
wire clk_hz;
wire [31:0] sseg;
Clock_Div div(clk, clk_hz);
Shifter shift0(clk_hz, sseg);
TM1638 tm0(
	8'b01010101,
	sseg[3:0],sseg[7:4],sseg[11:8],sseg[15:12],sseg[19:16],sseg[23:20],sseg[27:24],sseg[31:28],
	clk,
	clko,
	sto,
	dio
);


endmodule
