`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:54:13 09/09/2023
// Design Name:   Shift1Led
// Module Name:   G:/HK7/IClab/W3/lab/ex6/test.v
// Project Name:  ex6
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Shift1Led
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

	// Outputs
	wire [7:0] led;

	// Instantiate the Unit Under Test (UUT)
	Shift1Led uut (
		.clk50m(clk50m), 
		.reset(reset), 
		.led(led)
	);

	always begin
    #5 clk50m = ~clk50m;
  end

  // Test Stimulus
  initial begin
    // Initialize Inputs
    reset = 1;
    clk50m = 0;
    
    // Release reset
    #10 reset = 0;

    // Add your test sequence here
    // For example:
    
    #100 clk50m = 1;       // Toggle clk50m
    #100 clk50m = 0;       // Toggle clk50m
end
      
endmodule

