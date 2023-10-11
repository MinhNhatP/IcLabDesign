`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:20:19 09/09/2023
// Design Name:   BLYNK
// Module Name:   G:/HK7/IClab/W3/lab/ex7/testBlynk.v
// Project Name:  ex7
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: BLYNK
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testBlynk;

	// Inputs
	reg clk;
	reg reset;

	// Outputs
	wire [7:0] out;

	// Instantiate the Unit Under Test (UUT)
	BLYNK uut (
		.clk(clk), 
		.reset(reset), 
		.out(out)
	);
	always begin
    #5 clk = ~clk;
  end
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

