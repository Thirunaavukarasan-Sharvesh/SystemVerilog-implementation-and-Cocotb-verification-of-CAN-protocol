`timescale 1ns/1ps
import can_pkg::*;

interface frame_if(input logic clk);
    logic rst_n;
    logic valid;

    can_frame_ip_t frame_in;

    logic bit_out;
    logic valid_out;
    logic tx_ready;

    can_frame_op_t frame;
    logic frame_done;

    modport DRIVER (
        input clk,
        input tx_ready,
        output rst_n,
        output valid,
        output frame_in
    );

    modport INPUT_MONITOR (
        input clk,
        input rst_n,
        input valid,
        input frame_in
    );

    modport OUTPUT_MONITOR (
        input clk,
        input bit_out,
        input valid_out,
        output frame,
        output frame_done
    );
    
endinterface 
