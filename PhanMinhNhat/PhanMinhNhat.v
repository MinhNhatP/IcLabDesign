`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:23:12 10/03/2023 
// Design Name: 
// Module Name:    PhanMinhNhat 
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
module PhanMinhNhat(
	input wire s0,
	input wire s1,
	input wire clki,
	output wire clko,
	output wire stb,
	output wire dio
    );
wire [7:0] led0;	 

wire clk_hz;
wire [3:0] one0,ten0;
wire [7:0] out0;
Clock_Div clock (.clk(clki),.clk_hz(clk_hz),.clk_khz(clk_khz));
COUNTER counter (.clk(clk_hz),.s0(s0),.s1(s1),.out0(out0));
HEX_BCD hex_out0 (.hex(out0),.ones(one0),.tens(ten0));


TM1638 tm (.led(out0),.seg6(ten0),.seg7(one0),
	.clkinput(clk_khz),
	.clk(clko),
	.stb(stb),
	.dio(dio)
 );


endmodule
