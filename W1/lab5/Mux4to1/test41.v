`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:42:07 09/05/2023
// Design Name:   mux41
// Module Name:   G:/HK7/IClab/W1/lab5/Mux4to1/test41.v
// Project Name:  Mux4to1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux41
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test41;

	// Inputs
	reg [1:0] control;
	reg [3:0] in;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	mux41 uut (
		.control(control), 
		.in(in), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		in[3:0] = 4'b0000;
		#5;
		
		
		control = 0;
		#5
		in[0] = 1'b1;
		#5;
      in[1] = 1'b1;
		#5;
      in[2] = 1'b1;
		#5;
      in[3] = 1'b1;
		#10;
		in[3:0] = 4'b0000;
		
		control = 1;
		#5
		in[0] = 1'b1;
		#5;
      in[1] = 1'b1;
		#5;
      in[2] = 1'b1;
		#5;
      in[3] = 1'b1;
		#10;
		in[3:0] = 4'b0000;
		
		control = 2;
		#5
		in[0] = 1'b1;
		#5;
      in[1] = 1'b1;
		#5;
      in[2] = 1'b1;
		#5;
      in[3] = 1'b1;
		#10;
		in[3:0] = 4'b0000;
		
		control = 3;
		#5
		in[0] = 1'b1;
		#5;
      in[1] = 1'b1;
		#5;
      in[2] = 1'b1;
		#5;
      in[3] = 1'b1;
		#10;
		in[3:0] = 4'b0000;
		// Add stimulus here

	end
      
endmodule

