`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   05:35:28 09/11/2023
// Design Name:   DIV_CLK_4_MODE
// Module Name:   /home/ise/COMBINE4MODE/TEST_DIV_CLK.v
// Project Name:  COMBINE4MODE
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DIV_CLK_4_MODE
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TEST_DIV_CLK;

	// Inputs
	reg clk;
	reg [1:0] mode;

	// Outputs
	wire OUT;

	// Instantiate the Unit Under Test (UUT)
	DIV_CLK_4_MODE uut (
		.clk(clk), 
		.mode(mode), 
		.OUT(OUT)
	);
	always begin #1;clk=~clk;end
	initial begin
		// Initialize Inputs
		clk = 0;
		mode = 0;

		// Wait 100 ns for global reset to finish
		#10000;
      mode = 1;
		#10000;
		mode = 2;
		#10000;
		mode = 3;
		#10000;
		// Add stimulus here

	end
      
endmodule

