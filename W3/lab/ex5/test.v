`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:35:37 09/09/2023
// Design Name:   Dem8bit1hz
// Module Name:   G:/HK7/IClab/W3/lab/ex5/test.v
// Project Name:  ex5
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Dem8bit1hz
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg clk50m;
	reg reset;
	reg mode;
	reg ss;

	// Outputs
	wire [7:0] led;

	// Instantiate the Unit Under Test (UUT)
	SHIFT_LR uut (
		.clk50m(clk50m), 
		.reset(reset), 
		.mode(mode), 
		.ss(ss), 
		.led(led)
	);

	always begin
    #5 clk50m = ~clk50m;
  end

  // Test Stimulus
  initial begin
    // Initialize Inputs
    reset = 1;
    mode = 0;
    ss = 0;
    clk50m = 0;
    
    // Release reset
    #10 reset = 0;

    // Add your test sequence here
    // For example:
    #100 mode = 1;         // Set mode to 1
    #100 ss = 1;           // Set ss to 1
    #100 clk50m = 1;       // Toggle clk50m
    #100 clk50m = 0;       // Toggle clk50m
    #100 mode = 1;         // Set mode to 0
    #100 ss = 1;           // Set ss to 1
    #100 clk50m = 1;       // Toggle clk50m
    #100 clk50m = 0;       // Toggle clk50m
end
      
endmodule

