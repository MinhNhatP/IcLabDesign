`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:17:45 09/09/2023
// Design Name:   MODE4_SANGDON
// Module Name:   /home/ise/COMBINE4MODE/TEST_MODE4.v
// Project Name:  COMBINE4MODE
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MODE4_SANGDON
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TEST_MODE4;

	// Inputs
	reg clk;
	reg reset;
	reg en;

	// Outputs
	wire [7:0] OUT;

	// Instantiate the Unit Under Test (UUT)
	MODE4_SANGDON uut (
		.clk(clk), 
		.reset(reset), 
		.en(en), 
		.OUT(OUT)
	);
	always 
	begin #10;clk=~clk; end
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
		#100;
		en = 1;
		reset = 1;
		#10;
		reset = 0;
		// Add stimulus here

	end
      
endmodule

