`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:56:20 09/18/2023
// Design Name:   TOP
// Module Name:   G:/HK7/IClab/W3/lab/ex5/testBench.v
// Project Name:  ex5
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
	reg check;

	// Outputs
	wire [7:0] LED;

	// Instantiate the Unit Under Test (UUT)
	TOP uut (
		.clk(clk), 
		.reset(reset), 
		.check(check), 
		.LED(LED)
	);
always begin
    #5 clk = ~clk;
  end

  // Test Stimulus
  initial begin
    // Initialize Inputs
    reset = 1;
    
    check = 0;
    clk = 0;
		// Wait 100 ns for global reset to finish
		#10 reset = 0;
		#100;
        
		// Add stimulus here

	end
      
endmodule

