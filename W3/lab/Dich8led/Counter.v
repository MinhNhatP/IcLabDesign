`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:29:27 09/27/2023 
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
module Counter(
input wire clk,
output wire [7:0] q
 );
wire [7:0] r_next ;
reg [7:0] r_reg;
initial r_reg =0 ;
always @(posedge clk)
r_reg = r_next;
assign r_next = r_reg + 1 ;
assign q=r_reg;
endmodule