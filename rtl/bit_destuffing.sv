`timescale 1ns/1ps

module bit_destuffing(
    input logic clk,
    input logic rst_n,

    input logic bit_in,
    input logic valid_in,

    output logic bit_out,
    output logic valid_out,

    output logic stuff_error
);

logic [2:0] cnt;
logic prev;

typedef enum logic[1:0] {
    NORMAL,
    DISCARD
} state_t;

state_t state;

always_ff @(posedge clk or negedge rst_n)
begin
    if (!rst_n)
    begin
        bit_out <= 1'b0;
        valid_out <= 1'b0;
        cnt <= 3'b0;
        stuff_error <= 1'b0;
        prev <= 1'b0;
        state <= NORMAL;
    end
    else 
    begin
        valid_out <=1'b0;
        stuff_error <= 1'b0;
        case(state)
            NORMAL: begin
                if(valid_in)
                begin
                    valid_out <=1'b1;
                    bit_out <= bit_in;
                    if(prev == bit_in)
                        cnt <= cnt +1;
                    else 
                        cnt <= 3'd1;
                    // on the fifth cycle it self out will be delivered so we need to check on that cycle only
                    if((cnt == 3'd4) && (bit_in == prev)) 
                        state <= DISCARD;
                    prev <= bit_in;
                end
            end
            DISCARD: begin
                valid_out <= 1'b0;
                if (bit_in != ~ prev)
                    stuff_error <= 1'b1;
                cnt <= 3'b0;
                state <= NORMAL;
            end
            default: begin
                state <= NORMAL;
            end
        endcase
    end
    
end
endmodule