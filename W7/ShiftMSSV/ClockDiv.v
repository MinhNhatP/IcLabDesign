module ClockDiv(
		input wire clki,
output reg clk_hz
    );

wire [26:0] r_next;
reg [26:0] r_reg;
initial begin r_reg = 0; end
always @(posedge clki) begin
	r_reg = r_next;
	if(r_reg == 12500000) clk_hz = ~clk_hz;
	end
	assign r_next = {r_reg == 25000000} ? 0 : r_reg + 1;
	
endmodule
