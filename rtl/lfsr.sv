`timescale 1ns/1ps

module lfsr(
    input logic clk,
    input logic rst_n,
    input logic data_in,
    input logic en,
    input logic init,
    output logic [14:0] lfsr_out
);

//14, 10, 8, 7, 4, 3, 0
logic feedback;
assign feedback = data_in ^ lfsr_out[14];
logic [14:0] next_crc;

always_comb begin
    next_crc = {lfsr_out[13:0],feedback};
    next_crc[14] ^= feedback;
    next_crc[10] ^= feedback;
    next_crc[8]  ^= feedback;
    next_crc[7]  ^= feedback;
    next_crc[4]  ^= feedback;
    next_crc[3]  ^= feedback;
end
always_ff @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
        lfsr_out <= 0;
    else if(init)
        lfsr_out <= 15'b0;

    else if(en) 
        lfsr_out <= next_crc;
end

endmodule
