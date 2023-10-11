`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:46:22 09/07/2023 
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
    input clk,
    input reset,
    input [1:0] control,
    input UD,
    output [7:0] LED
);

wire q_intermediate; // Intermediate wire to connect modules

// Instantiate the dived2f module
dived2f d2f_inst (
    .control(control),
    .reset(reset),
    .clk(clk),
    .q(q_intermediate)
);

// Instantiate the COUNTER module
COUNTER counter_inst (
    .clk(q_intermediate),
    .reset(reset),
    .UD(UD),
    .LED(LED)
);

// Assign q directly


endmodule
