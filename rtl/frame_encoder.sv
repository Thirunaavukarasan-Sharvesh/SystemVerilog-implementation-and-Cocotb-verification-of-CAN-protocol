`timescale 1ns/1ps 
/* 
+----------------+----------------+----------------+----------------+ 
| SOF (1 bit) | Identifier | Control Field | Data Field | | | (11 or 29 bits)| (6 bits) | (0-8 bytes) | 
+----------------+----------------+----------------+----------------+
 | CRC (15 bits) | ACK (2 bits) | EOF (7 bits) | IFS (7 bits) | 
 +----------------+----------------+----------------+----------------+ 
 */ 
 /*
  Frame Struct
   ↓
 Frame Encoder 
    ↓ 
    CRC 
    ↓ 
Stuffing 
    ↓ 
    Bus
*/ 
import can_pkg::*;
////////////////////////////////////////////////// 
///////////////////////////////////////////////// 
//////////////////////////////////////////////// 

module frame_encoder ( 
    input can_frame_ip_t frame_in,
    input logic clk,
    input logic rst_n, 
    input logic valid, 
    output logic bit_out, 
    output logic valid_out,
    output logic tx_ready // to tell that it is ready to accept the inputs ie it have completed the execution of prev inputs
    ); 
    logic dvalid; 
    logic crc_init_sig;
    logic crc_cap_sig; 
    logic crc_valid_rsp; 
    logic [14:0] crc_value; 

    crc x1( 
        .clk(clk), 
        .rst_n(rst_n), 
        .data_in(bit_out), 
        .data_valid(dvalid), 

        .crc_init(crc_init_sig), 
        .crc_cap(crc_cap_sig), 

        .crc_out (crc_value),
        .crc_valid(crc_valid_rsp) 
        ); 
    
    typedef enum logic[1:0] { IDLE, HEADER, CRC_STATE, TRAILER } state_t; 

    state_t state,next_state; 
    //counter_b to regulate 
    logic [6:0] counter_b; 

    // with this the driver can understand that the dut is busy with the previous results
    can_frame_ip_t frame_reg;
    
    always_ff @(posedge clk or negedge rst_n) begin : STATE_REGISTER
        if(!rst_n) 
            state <= IDLE;
        else
            state <= next_state;        
    end


    always_ff @(posedge clk or negedge rst_n) begin : READY_LOGIC
        if(!rst_n)
            tx_ready <= 1'b1;

        else begin
            // Accepted a frame
            if(state == IDLE && valid)
                tx_ready <= 1'b0;

            // Transmission finished
            else if(state == TRAILER && counter_b == 12)
                tx_ready <= 1'b1;
        end
        /*
        $display("%0t READY=%0b STATE=%0d VALID=%0b",
         $time, tx_ready, state, valid);
         */
    end

    //The serializer is reading directly from frame_in.
    //Even if the driver changes frame_in later, the current transmission should not change.
    //The frame_reg fixes that.
    //frame_in gets from the driver this frame_reg decides when to give them to dut

    always_ff @(posedge clk or negedge rst_n) begin :FRAME_REG
        if(!rst_n)
            frame_reg <= '0;

        else if(state == IDLE && valid)
            frame_reg <= frame_in;
    end


    always_comb begin : NEXT_STATE

        next_state = state;

        case(state)

            IDLE:
                if(valid)
                    next_state = HEADER;

            HEADER:
                if(counter_b == 81)
                    next_state = CRC_STATE;

            CRC_STATE:
                if(counter_b == 14)
                    next_state = TRAILER;

            TRAILER:
                if(counter_b == 12)
                    next_state = IDLE;

            default:
                next_state = IDLE;
        endcase
    end


    always_comb begin : OUTPUT_LOGIC
        // Combinational output logic
        // No storage elements exist here (FF)
        // Every time an input changes, this block re-evaluates from top to bottom
        // Default assignments prevent inferred latches and are overridden
        // by the active state as needed. Therefore on entering each state remember to 
        // declare the stuff like valid ... etc things as needed.
        // DEFAULT VALUES
        bit_out      = 1'b1;
        valid_out    = 1'b0;

        dvalid       = 1'b0;
        crc_init_sig = 1'b0;
        crc_cap_sig  = 1'b0;

        case(state)

            IDLE: begin
                if(valid) 
                    crc_init_sig = 1'b1;                
            end

            HEADER: begin
                valid_out    = 1'b1;
                dvalid       = 1'b1;
                crc_init_sig = 1'b0;

                if(counter_b == 0)
                    bit_out = 1'b0; // SOF

                else if(counter_b >= 1 && counter_b <= 11)
                    bit_out = frame_reg.id[11-counter_b];

                else if(counter_b == 12)
                    bit_out = frame_reg.rtr;

                else if(counter_b == 13)
                    bit_out = frame_reg.ide;

                else if(counter_b >= 14 && counter_b <= 17)
                    bit_out = frame_reg.dlc[17-counter_b];

                else if(counter_b >= 18 && counter_b <= 81)
                        bit_out = frame_reg.data[81-counter_b];
                
                if(counter_b == 81) 
                    crc_cap_sig = 1'b1; 
            end

            CRC_STATE: begin
                valid_out = 1'b1;
                bit_out = crc_value[14-counter_b];
            end

            TRAILER: begin
                valid_out = 1'b1;
                bit_out = 1'b1;
            end

        endcase
    end


    always_ff @(posedge clk or negedge rst_n) begin : COUNTER_REGISTER
        if(!rst_n)
            counter_b <= 7'b0;
        else begin
            case(state)

                IDLE: 
                    counter_b <= 7'b0;

                HEADER: begin
                    if(counter_b == 81)
                        counter_b <= 7'b0;
                    else
                        counter_b <= counter_b+1;
                end

                CRC_STATE: begin
                    if(counter_b == 14)
                        counter_b <= 7'b0;
                    else
                        counter_b <= counter_b + 1;
                end

                TRAILER: begin
                    if(counter_b == 12)
                        counter_b <= 7'b0;
                    else
                        counter_b <= counter_b + 1;
                end
            endcase
        end 
    end
    
endmodule   
