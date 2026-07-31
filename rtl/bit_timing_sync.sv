`timescale 1ns/1ps

module bit_timing_sync (
    input logic          sys_clk,
    input logic          rst_n,
    input logic          bus_lvl,
    input logic          en,

    output logic        sample_pulse,  // Sample point pulse
    output logic        bit_bdy_pulse, // Bit boundary pulse
    output logic [4:0]  tq_counter,   // Time Quantum counter  
    // TQ = (BRP/f_clk), BRP is Baud Rate Prescaler
    output logic  [2:0] seg_state,
    output logic        bit_time_tick
);
    parameter SYNC = 3'b001;
    parameter PROP = 3'b010;
    parameter PHASE1 = 3'b011; 
    parameter PHASE2 = 3'b100;
    parameter PHASE_ERR = 3'b101;
    parameter SJW_LIMIT = 3'b110;
    parameter IDLE = 3'b111;
    parameter PROP_TQ_CFG = 2;
    parameter PHASE1_TQ_CFG = 3;
    parameter PHASE2_TQ_CFG = 2;

    logic [4:0] prop_tq = 0;
    logic [4:0] phase1_tq =0; 
    logic [4:0] phase2_tq =0;

    always_ff @(posedge sys_clk or negedge rst_n) begin
        if(!rst_n || !en) begin
            sample_pulse <= 1'b0;
            bit_bdy_pulse <= 1'b0;
            bit_time_tick <= 1'b0;
            tq_counter <= 5'b0;
            prop_tq <= 5'b0;
            phase1_tq <= 5'b0;  
            phase2_tq <= 5'b0;
            seg_state <= IDLE;
            end

            else begin
                
                sample_pulse <= 1'b0;
                bit_bdy_pulse <= 1'b0;
                bit_time_tick <= 1'b0;

                case (seg_state)
                    IDLE: begin
                        // Idle state logic
                        prop_tq <= 5'b0;
                        phase1_tq <= 5'b0;  
                        phase2_tq <= 5'b0;

                        sample_pulse <= 1'b0;
                        bit_bdy_pulse <= 1'b0;
                        bit_time_tick <= 1'b0;

                        if(bus_lvl == 1'b0) begin
                            seg_state <= SYNC;
                        end
                    end

                    SYNC: begin
                        // Synchronization segment logic
                        tq_counter <= 5'b0;
                        prop_tq <= 5'b0;
                        phase1_tq <= 5'b0;  
                        phase2_tq <= 5'b0;
                        seg_state <= PROP;
                        end
                    
                    PROP: begin
                        prop_tq <= prop_tq + 5'b1;
                        if(prop_tq == PROP_TQ_CFG - 1 ) begin
                            seg_state <= PHASE1;
                            prop_tq <= 5'b0;
                        end
                    end

                    PHASE1: begin
                        phase1_tq <= phase1_tq + 5'b1;
                        if(phase1_tq == PHASE1_TQ_CFG - 1) begin
                            phase1_tq <= 5'b0;
                            sample_pulse <= 1'b1;    // samples here point
                            seg_state <= PHASE2;
                        end
                    end

                    PHASE2: begin
                        phase2_tq <= phase2_tq + 5'b1;
                        if(phase2_tq == PHASE2_TQ_CFG - 1) begin
                            phase2_tq <= 5'b0;
                            bit_bdy_pulse <= 1'b1;   // bit boundary pulse
                            bit_time_tick <= 1'b1;
                            seg_state <= SYNC;
                        end
                    end

                    default : begin
                        seg_state <= IDLE;
                    end
                endcase
            end
        end
endmodule