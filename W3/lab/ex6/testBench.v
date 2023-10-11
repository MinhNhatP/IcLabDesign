`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:52:39 09/13/2023
// Design Name:   TOP
// Module Name:   G:/HK7/IClab/W3/lab/ex6/testBench.v
// Project Name:  ex6
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

module testBench;

	// Inputs
	reg clk;
	reg reset;

	// Outputs
	wire [7:0] LED;

	// Instantiate the Unit Under Test (UUT)
	TOP uut (
		.clk(clk), 
		.reset(reset), 
		.LED(LED)
	);
always begin
    #5 clk = ~clk;
  end

  // Test Stimulus
  initial begin
    // Initialize Inputs
    reset = 1;
    clk = 0;
    
    // Release reset
    #10 reset = 0;

    // Add your test sequence here
    // For example:
    
          // Toggle clk50m
end
      
      
endmodule

