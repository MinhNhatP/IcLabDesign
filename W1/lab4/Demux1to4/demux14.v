`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:42:04 09/04/2023 
// Design Name: 
// Module Name:    demux14 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////


module demux14(
    input wire data,
    input wire [1:0] control,
    output reg [3:0] outputs
    );
always @(*) begin
    case(control)
		2'b00: begin
            outputs[0] = data;
            outputs[3:1] = 1'b0;
        end
      2'b01: begin
            outputs[0] = 1'b0;
            outputs[1] = data;
            outputs[3:2] = 1'b0;            
        end
      2'b10: begin
            outputs[1:0] = 1'b0;
            outputs[2] = data;
            outputs[3] = 1'b0;
        end
      2'b11: begin           
            outputs[2:0] = 1'b0;
            outputs[3] = data;
        end
	endcase
end

endmodule