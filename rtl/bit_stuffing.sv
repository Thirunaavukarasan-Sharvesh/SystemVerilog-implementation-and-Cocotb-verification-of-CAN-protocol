`timescale 1ns/1ps

module bit_stuffing(
    input logic clk,
    input logic rst_n,
    input logic bit_in,
    input logic valid_in,

    output logic bit_out,
    output logic valid_out,
    output logic ready_out
    // ready_out - to ensure no other inputs is received during the Stuffing state
);

logic prev_bit;
logic [2:0] count;

parameter NORMAL = 1'b0;
parameter STUFF  = 1'b1;

logic state;

assign ready_out = (state == NORMAL);

always @(posedge clk or negedge rst_n) begin

    if (!rst_n) begin
        valid_out <= 1'b0;
        bit_out   <= 1'b0;
        prev_bit  <= 1'b0;
        count     <= 3'b0;
        state     <= NORMAL;
    end

    else begin

        valid_out <= 1'b0;

        case(state)

            NORMAL: begin

                if(valid_in && ready_out) begin

                    valid_out <= 1'b1;
                    bit_out   <= bit_in;

                    if(bit_in == prev_bit)
                        count <= count + 1;
                    else
                        count <= 3'b1;

                    if((bit_in == prev_bit) && (count == 3'd4))
                        state <= STUFF;

                    prev_bit <= bit_in;

                end

            end

            STUFF: begin

                valid_out <= 1'b1;
                bit_out   <= ~prev_bit;

                prev_bit  <= ~prev_bit;

                count <= 3'b1;

                state <= NORMAL;

            end

            default: begin
                state <= NORMAL;
            end

        endcase

    end

end

endmodule
