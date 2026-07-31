`timescale 1ns/1ps
import can_pkg::*;

module output_monitor(frame_if.OUTPUT_MONITOR vif_out);

    logic [FRAME_BITS-1:0] bit_vector;
    logic [FRAME_BITS-1:0] next_vector; // why next_vector works??
    int bit_index = 0;

    always_ff @(posedge vif_out.clk) begin

        vif_out.frame_done <= 1'b0;
        
        if(vif_out.valid_out) begin
            
            next_vector = {bit_vector[FRAME_BITS-2:0], vif_out.bit_out};
            bit_vector <= next_vector;

            if(bit_index == FRAME_BITS-1) begin
                bit_index <= 0;
            /*
                $display("================================");
                $display("FRAME COMPLETE @ %0t", $time);
                $display("RAW VECTOR = %b", next_vector);
                $display("ID         = %03h", next_vector[ID_MSB:ID_LSB]);
                $display("RTR        = %0b",  next_vector[RTR_POS]);
                $display("IDE        = %0b",  next_vector[IDE_POS]);
                $display("DLC        = %0d",  next_vector[DLC_MSB:DLC_LSB]);
                $display("DATA       = %016h", next_vector[DATA_MSB:DATA_LSB]);
                $display("CRC        = %04h", next_vector[CRC_MSB:CRC_LSB]);
            */
                vif_out.frame.sof       <= next_vector[SOF_POS];
                vif_out.frame.id        <= next_vector[ID_MSB:ID_LSB];
                vif_out.frame.rtr       <= next_vector[RTR_POS];
                vif_out.frame.ide       <= next_vector[IDE_POS];
                vif_out.frame.dlc       <= next_vector[DLC_MSB:DLC_LSB];
                vif_out.frame.data      <= next_vector[DATA_MSB:DATA_LSB];
                vif_out.frame.crc       <= next_vector[CRC_MSB:CRC_LSB];
                vif_out.frame.crc_delim <= next_vector[CRC_DELIM_POS];
                vif_out.frame.trailer   <= next_vector[TRAILER_MSB:TRAILER_LSB];

                vif_out.frame_done <= 1'b1;
            end
            else begin
                bit_index <= bit_index + 1;
                //vif_out.frame_done <= 1'b0;
            end
        end
        /*
        $display("%0t valid_out=%0b bit_index=%0d frame_done=%0b bit=%0b",
         $time,
         vif_out.valid_out,
         bit_index,
         vif_out.frame_done,
         vif_out.bit_out);
         if(vif_out.valid_out)
    $display("%0t  bit=%0b  idx=%0d",
             $time,
             vif_out.bit_out,
             bit_index);
             */
    end
endmodule
