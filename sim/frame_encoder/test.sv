`timescale 1ns/1ps
import can_pkg::*;

module frame_enc_tb;

    logic clk;
    logic rst_n;
    logic valid;

    logic bit_out;
    logic valid_out;
    logic tx_ready;

    can_frame_ip_t frame_in;

    integer fd;
    integer bit_cnt;

    frame_encoder dut(
        .clk(clk),
        .rst_n(rst_n),
        .valid(valid),
        .frame_in(frame_in),
        .bit_out(bit_out),
        .valid_out(valid_out),
        .tx_ready(tx_ready)
    );

    always #5 clk = ~clk;

    initial begin
        clk   = 0;
        rst_n = 0;
        valid = 0;
        bit_cnt = 0;

        fd = $fopen("frame_encoder.log","w");

        repeat(5)
            @(posedge clk);

        rst_n = 1;
        wait(tx_ready);
        frame_in.id   = 11'h7C7;
        frame_in.rtr  = 0;
        frame_in.ide  = 0;
        frame_in.dlc  = 8;
        frame_in.data = 64'hBC047F5C67986ADF;

        $display("Driving Frame");
        $display("ID   = %03h",frame_in.id);
        $display("RTR  = %0b",frame_in.rtr);
        $display("IDE  = %0b",frame_in.ide);
        $display("DLC  = %0d",frame_in.dlc);
        $display("DATA = %016h",frame_in.data);

        valid = 1;

        @(posedge clk);

        valid = 0;
        wait(tx_ready);

        #20;

        $finish;
    end


    always @(posedge clk) begin

        if(valid_out) begin
            $fwrite(fd,"%03d  state=%0d counter=%02d bit=%0b\n",bit_cnt,dut.state,dut.counter_b,bit_out);
            bit_cnt++;
        end
    end

    final begin

        $display("--------------------------------");
        $display("TOTAL BITS = %0d",bit_cnt);
        $display("--------------------------------");
        $fclose(fd);
    end
endmodule
