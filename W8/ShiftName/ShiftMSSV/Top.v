`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:30:10 10/07/2023 
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
clk,
lcd_rs, lcd_rw, lcd_e, lcd_4, lcd_5, lcd_6, lcd_7
);

input clk; // for 50Mhz Clock
output lcd_rs, lcd_rw, lcd_e, lcd_4, lcd_5, lcd_6, lcd_7;
wire lcd_rs, lcd_rw, lcd_e, lcd_4, lcd_5, lcd_6, lcd_7;
wire [256:0] chars; 
wire [127:0] outs;

wire clk_hz;

 
Clock_Div clock (.clk(clk),.clk_hz(clk_hz));
COUNTER counter(.clk(clk_hz),.out(outs));

	 
LCD lcd( clk,
chars,
lcd_rs, lcd_rw, lcd_e, lcd_4, lcd_5, lcd_6, lcd_7);

assign chars[255:128] = {outs[127:0]};
assign chars[127:0] = " 11 - 10 - 2023 ";

endmodule
