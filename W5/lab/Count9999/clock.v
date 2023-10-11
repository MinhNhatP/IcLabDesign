`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:17:32 09/27/2023 
// Design Name: 
// Module Name:    clock 
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
module ClockDiv(
input wire clki,
output wire clk_khz,
output reg clk_hz
 );
wire [30:0] r_next ;
reg [30:0] r_reg;
integer counter;
initial begin r_reg =0 ;counter =0;clk_hz=0;end
always @(posedge clki)
begin
r_reg = r_next;
counter = counter+1;
if (counter == 50000000) counter = 0; 
clk_hz=(counter==25000000)?~clk_hz:clk_hz;
end
assign r_next =(r_reg==50000000)?0: r_reg + 1 ;
assign clk_khz=r_reg[4]; /*781.250 Khz*/
//assign clk_hz=(counter==25000000)?~clk_hz:clk_hz;
//assign clk_hz=r_reg[24];
endmodule
