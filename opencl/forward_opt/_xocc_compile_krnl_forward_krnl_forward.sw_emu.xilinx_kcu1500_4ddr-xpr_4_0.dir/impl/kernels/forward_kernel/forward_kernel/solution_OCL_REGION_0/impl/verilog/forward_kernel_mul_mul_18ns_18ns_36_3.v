
`timescale 1 ns / 1 ps

  module forward_kernel_mul_mul_18ns_18ns_36_3_DSP48_1(clk, rst, ce, a, b, p);
input clk;
input rst;
input ce;
input [18 - 1 : 0] a; // synthesis attribute keep a "true"
input [18 - 1 : 0] b; // synthesis attribute keep b "true"
output [36 - 1 : 0] p; // synthesis attribute keep p "true"

reg [36 - 1 : 0] p_reg; 

reg [18 - 1 : 0] a_reg; 
reg [18 - 1 : 0] b_reg; 

always @ (posedge clk) begin
    if (ce) begin
        a_reg <= a;
        b_reg <= b;
        p_reg <= $unsigned (a_reg) * $unsigned (b_reg);
    end
end

assign p = p_reg;

endmodule

`timescale 1 ns / 1 ps
module forward_kernel_mul_mul_18ns_18ns_36_3(
    clk,
    reset,
    ce,
    din0,
    din1,
    dout);

parameter ID = 32'd1;
parameter NUM_STAGE = 32'd1;
parameter din0_WIDTH = 32'd1;
parameter din1_WIDTH = 32'd1;
parameter dout_WIDTH = 32'd1;
input clk;
input reset;
input ce;
input[din0_WIDTH - 1:0] din0;
input[din1_WIDTH - 1:0] din1;
output[dout_WIDTH - 1:0] dout;



forward_kernel_mul_mul_18ns_18ns_36_3_DSP48_1 forward_kernel_mul_mul_18ns_18ns_36_3_DSP48_1_U(
    .clk( clk ),
    .rst( reset ),
    .ce( ce ),
    .a( din0 ),
    .b( din1 ),
    .p( dout ));

endmodule
