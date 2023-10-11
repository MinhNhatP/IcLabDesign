`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:35:22 09/09/2023
// Design Name:   MODE1_LEDCHOPTAT
// Module Name:   /home/ise/COMBINE4MODE/TEST_MODE1.v
// Project Name:  COMBINE4MODE
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MODE1_LEDCHOPTAT
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TEST_MODE1;

	// Inputs
	reg clk;
	reg reset;
	reg en;

	// Outputs
	wire [7:0] OUT;

	// Instantiate the Unit Under Test (UUT)
	MODE1_LEDCHOPTAT uut (
		.clk(clk), 
		.reset(reset), 
		.en(en), 
		.OUT(OUT)
	);
	always
	begin 
		#10;
		clk = ~clk;
	end
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		en = 0;
		#10;
		reset = 1;
		#10;
		reset = 0;
		en = 1;
		
		// Wait 100 ns for global reset to finish
		#100;
      en = 0;
		#50;
		reset = 1;
		#50;
		// Add stimulus here

	end
      
endmodule

