`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:20:33 09/04/2023 
// Design Name: 
// Module Name:    demux18 
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
module demux18(
    input wire data,
    input wire [2:0] control,
    output reg [7:0] outputs
    );
always @(*) begin
    case(control)
	 3'b000: begin
            outputs[0] = data;
            outputs[7:1] = 1'b0;
        end
        3'b001: begin
            outputs[0] = 1'b0;
				outputs[1] = data;
            outputs[7:2] = 1'b0;
        end
        3'b010: begin
            outputs[1:0] = 1'b0;
            outputs[2] = data;
            outputs[7:3] = 1'b0;
        end
        3'b011: begin
            outputs[2:0] = 1'b0;
            outputs[3] = data;
            outputs[7:4] = 1'b0;
        end
        3'b100: begin
            outputs[3:0] = 1'b0;
            outputs[4] = data;
            outputs[7:5] = 1'b0;
        end
        3'b101: begin
            outputs[4:0] = 1'b0;
            outputs[5] = data;
            outputs[7:6] = 1'b0;
        end
        3'b110: begin
            outputs[5:0] = 1'b0;
            outputs[6] = data;
            outputs[7] = 1'b0;
        end
        3'b111: begin
            outputs[6:0] = 1'b0;
            outputs[7] = data;
        end
	endcase
end

endmodule