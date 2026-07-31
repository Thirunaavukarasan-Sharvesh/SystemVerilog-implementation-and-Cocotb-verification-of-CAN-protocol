`timescale 1ns/1ps

module crc(
    input logic clk,
    input logic rst_n,

    input logic data_in,

    input logic data_valid, // input data valid signal from top module 
    input logic crc_init, // initialize crc
    input logic crc_cap, // latch final crc result

    output logic [14:0] crc_out,
    output logic crc_valid
);
/*
data_in : serial input data stream and will sample to crc only when data_valid is high [1]

data_valid : Indicates current data_in bit participates in CRC calculation.
             When asserted, CRC/LFSR updates on next clock edge.
             When deasserted, CRC state is held.(dont update crc state)

crc_init : Initializes CRC engine for a new frame calculation.
           Clears/seeds CRC register.
           Typically asserted for one clock cycle at start-of-frame.

crc_cap : Captures/finalizes current CRC remainder into crc_out.
          Used after all frame bits have been processed.

crc_out : final computed CRC value after processing input data stream.

*/
parameter IDLE =2'b00;
parameter RUN =2'b01;
parameter DONE =2'b10;

logic [1:0] state;
logic [14:0] lfsr_out_int;

lfsr uut(
    .clk(clk),
    .rst_n(rst_n),
    .data_in(data_in),
    .en(data_valid),
    .init(crc_init),
    .lfsr_out(lfsr_out_int)
);

always_ff @(posedge clk or negedge rst_n)
begin
    if(!rst_n)begin
        crc_out<=15'b0;
        crc_valid <= 1'b0;
        state <= IDLE;
    end
    else begin
        crc_valid <=1'b0;
        case(state)
            IDLE:begin
                crc_valid <= 1'b0;
                //crc_out <= 15'b0;
                if(crc_init)
                    state <= RUN;
            end
 
            RUN:begin
                if (crc_cap) begin
                    crc_out <= lfsr_out_int;
                    crc_valid <= 1'b1;
                    state <= DONE;
                end
            end
            DONE:begin
                crc_valid <= 1'b0;
                state <=IDLE;
            end
            default : state <= IDLE;
        endcase
    end
end
endmodule
