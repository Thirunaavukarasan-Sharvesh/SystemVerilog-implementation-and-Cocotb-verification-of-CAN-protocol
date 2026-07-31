    `timescale 1ns/1ps

    module top;
        /*
        mailbox #(transaction) mbx;
        mailbox #(transaction) mon_in_mbx;
        mailbox #(transaction) mon_out_mbx;

        //frame_if.OUTPUT_MONITOR vif_out;

        driver drv;
        generator gen;
        monitor mon;
        collector col;
        */

        logic clk;
        //
        logic [109:0] next_frame;
        logic [109:0] raw_frame;
        int raw_idx;
        //

        initial begin
            clk = 0;
            forever #5 clk = ~clk;
        end
    
        frame_if vif(clk);

        frame_encoder dut(

            .clk       (clk),
            .rst_n     (vif.rst_n),

            .valid     (vif.valid),
            .frame_in  (vif.frame_in),

            .bit_out   (vif.bit_out),
            .valid_out (vif.valid_out),
            .tx_ready     (vif.tx_ready)
        );

        output_monitor out_mon(
            .vif_out(vif.OUTPUT_MONITOR)
        );

        always @(posedge clk) begin
            if(vif.valid_out) begin
                next_frame = {raw_frame[108:0], vif.bit_out};
                raw_frame <= next_frame;

                if(raw_idx == 109) begin
                    $display("--------------------------------");
                    $display("TOP DUT");
                    $display("ID   = %03h", next_frame[108:98]);
                    $display("RTR  = %0b", next_frame[97]);
                    $display("IDE  = %0b", next_frame[96]);
                    $display("DLC  = %0d", next_frame[95:92]);
                    $display("DATA = %016h", next_frame[91:28]);
                    $display("CRC  = %04h", next_frame[27:13]);
                    raw_idx <= 0;
                end
                else
                    raw_idx <= raw_idx + 1;
            end
        end
        
        always @(posedge clk)
        $display("%0t  state=%0d  ready=%0b  valid=%0b",
                $time,
                dut.state,
                vif.tx_ready,
                vif.valid);
        //always @(posedge clk)
        //    if(vif.valid_out)
        //        $display("TOP bit=%0b", vif.bit_out);

    /*
        initial begin
            vif.rst_n = 0;
            vif.valid    = 0;
            vif.frame_in = '0;

            mbx = new();
            mon_in_mbx  = new();
            mon_out_mbx = new();
            mon = new(vif.INPUT_MONITOR,mon_in_mbx,mon_out_mbx);
            col = new (vif.OUTPUT_MONITOR,mon_out_mbx);
            gen = new(mbx);
            drv = new(vif.DRIVER,mbx);

            repeat(5)
            @(posedge clk);
                vif.rst_n = 1;
            
            fork
                gen.run();
                drv.drvdata();
                mon.monitor_input();
                col.run();
            join_none

            // 100 x 110 x 10 [no. inps x bits x clk]
            #150000;
            $finish;
        end
    */
    
        environment env;

        initial begin
        
            vif.rst_n = 0;
            repeat(5)
                @(posedge clk);
            vif.rst_n = 1;
            env = new(vif.DRIVER,vif.INPUT_MONITOR,vif.OUTPUT_MONITOR);
            env.run();
        end

        initial begin
           // #250000;
           #3000;
            $finish;
        end

    endmodule
