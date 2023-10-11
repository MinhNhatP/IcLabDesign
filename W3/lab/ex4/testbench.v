`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:40:28 09/09/2023
// Design Name:   TOP
// Module Name:   G:/HK7/IClab/W3/lab/ex4/testbench.v
// Project Name:  ex4
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

module testbench;

	// Inputs
	reg clk;
	reg reset;
	reg [1:0] control;
	reg UD;

	// Outputs
	wire [7:0] LED;

	// Instantiate the Unit Under Test (UUT)
	TOP uut (
		.clk(clk), 
		.reset(reset), 
		.control(control), 
		.UD(UD), 
		.LED(LED)
	);

	always begin
    #5 clk = ~clk;
  end

  // Test Stimulus
  initial begin
    // Initialize Inputs
    reset = 1;
    control = 2'b00; // Example: Set your desired control values
    UD = 0;
    clk = 0;
    
    // Release reset
    #10 reset = 0;

    // Add your test sequence here
    // For example:
    #100 control = 2'b00; // Change control
    #100 UD = 1;          // Change UD
    #100 reset = 1;       // Assert reset
    #100 reset = 0;       // Release reset

    // Continue your test sequence...

    // End simulation after a certain duration
    //#5000 $finish;
  end
      
endmodule

