`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:05:09 09/04/2023 
// Design Name: 
// Module Name:    decode38 
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
module decode38(
    input wire [2:0] w,
    output reg [7:0] y
    );
always @(w)
case (w)
0: y = 8'b10000000;
1: y = 8'b01000000;
2: y = 8'b00100000;
3: y = 8'b00010000;
4: y = 8'b00001000;
5: y = 8'b00000100;
6: y = 8'b00000010;
7: y = 8'b00000001;
endcase

endmodule
