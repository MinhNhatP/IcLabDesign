`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   05:57:36 09/11/2023
// Design Name:   TOP
// Module Name:   /home/ise/COMBINE4MODE/TEST_TOP.v
// Project Name:  COMBINE4MODE
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: TOP
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TEST_TOP;

	// Inputs
	reg [1:0] freq_sel;
	reg [1:0] mode_sel;
	reg reset;
	reg clk;

	// Outputs
	wire [7:0] OUT;

	// Instantiate the Unit Under Test (UUT)
	TOP uut (
		.freq_sel(freq_sel), 
		.mode_sel(mode_sel), 
		.reset(reset), 
		.clk(clk), 
		.OUT(OUT)
	);
	always begin #1;clk=~clk; end
	initial begin
		// Initialize Inputs
		freq_sel = 3;
		mode_sel = 0;
		reset = 0;
		clk = 0;
		#100;
		reset = 1;
		#100;
		reset = 0;
		#100;
		
		//change mode: 1-2-3-4
		mode_sel = 0;
		#100000;
		mode_sel = 1;
		#100000;
		mode_sel = 2;
		#100000;
		mode_sel = 3;
		#100000;
		
        
		// change frequency
		freq_sel = 2;
		#100000;
		freq_sel = 1;
		#100000;
		freq_sel = 0;
		#100000;

	end
      
endmodule

