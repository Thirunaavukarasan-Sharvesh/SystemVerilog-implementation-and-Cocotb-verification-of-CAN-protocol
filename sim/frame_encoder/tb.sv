`timescale 1ns/1ps

module frame_enc_tb;

    logic clk;
    logic rst_n;
    logic valid;

    logic bit_out;
    logic valid_out;

    logic tx_ready;

    can_frame_ip_t frame_in;

    integer bit_cnt;
    integer valid_cycles;
    integer fd;

    frame_encoder dut(
        .clk(clk),
        .rst_n(rst_n),
        .valid(valid),
        .bit_out(bit_out),
        .valid_out(valid_out),
        .frame_in(frame_in),
        .tx_ready(tx_ready)
    );

    always #5 clk = ~clk;

    initial begin

        clk          = 0;
        rst_n        = 0;
        valid        = 0;
        bit_cnt      = 0;
        valid_cycles = 0;
        

        fd = $fopen("frame_encoder.log","w");

        #10;
        rst_n = 1;
        #10;
        valid = 1;
        
        @(posedge clk);
        forever begin
            wait(tx_ready);
            frame_in.id   = 11'($urandom_range(0,2047));
            frame_in.rtr  = bit'($urandom_range(0,1));
            frame_in.ide  = bit'($urandom_range(0,1));
            frame_in.dlc  = 4'($urandom_range(0,8));
            frame_in.data = {$urandom(),$urandom()};

            $fwrite(fd,"\n");
            $fwrite(fd,"=====================================\n");
            $fwrite(fd,"INPUT FRAME\n");
            $fwrite(fd,"=====================================\n");

            $fwrite(fd,"ID   = %h\n",frame_in.id);
            $fwrite(fd,"RTR  = %0b\n",frame_in.rtr);
            $fwrite(fd,"IDE  = %0b\n",frame_in.ide);
            $fwrite(fd,"DLC  = %0d\n",frame_in.dlc);
            $fwrite(fd,"DATA = %h\n",frame_in.data);

            valid = 1;

            @(posedge clk);
            valid = 0;
            # 20000;
            $finish;
        end

    end

    always @(posedge clk) begin
        if(valid_out) begin
            valid_cycles++;
            case(bit_cnt)
                0  : $fwrite(fd,"\n--- SOF ---\n");
                1  : $fwrite(fd,"\n--- ID ---\n");
                12 : $fwrite(fd,"\n--- RTR ---\n");
                13 : $fwrite(fd,"\n--- IDE ---\n");
                14 : $fwrite(fd,"\n--- DLC ---\n");
                18 : $fwrite(fd,"\n--- DATA ---\n");
            endcase
            
           $fwrite(fd,"[%03d] state=%0d counter=%0d bit=%0b\n",bit_cnt,dut.state,dut.counter_b,bit_out);
            bit_cnt++;
        end
    end

    logic [1:0] prev_state;

    always @(posedge clk) begin

        if(dut.state != prev_state) begin

            case(dut.state)
                dut.IDLE:
                    $fwrite(fd,"\n========== IDLE ==========\n");
                dut.HEADER:
                    $fwrite(fd,"\n========== HEADER ==========\n");

                dut.CRC_STATE:
                    $fwrite(fd,"\n========== CRC ==========\n");

                dut.TRAILER:
                    $fwrite(fd,"\n========== TRAILER ==========\n");
            endcase

        end
    end

    always @(posedge clk or negedge rst_n) begin
        if(!rst_n)
            prev_state <= dut.IDLE;
        else
            prev_state <= dut.state;
    end

    //---------------------------------------
    // Assertion #1
    // valid_out must never be X
    //---------------------------------------

    always @(posedge clk) begin
        assert(valid_out !== 1'bx)
        else
            $fatal(1,"valid_out became X at %0t",$time);
    end

    //---------------------------------------
    // Assertion #2
    // bit_out must never be X
    //---------------------------------------

    always @(posedge clk) begin
        if(valid_out) begin
            assert(bit_out !== 1'bx)
            else
                $fatal(1,"bit_out became X at %0t",$time);
        end
    end

    //---------------------------------------
    // Assertion #3
    // First transmitted bit must be SOF=0
    //---------------------------------------

    always @(posedge clk) begin
        if(valid_out && dut.state==dut.HEADER && dut.counter_b==0) begin
            assert(bit_out==0)
            else
                $fatal(1,"SOF error. Expected 0 got %0b",bit_out);
        end
    end

    initial begin
        $dumpfile("frame_enc.vcd");
        $dumpvars(0,frame_enc_tb);
    end


    final begin
        $fwrite(fd,"\n");
        $fwrite(fd,"=====================================\n");
        $fwrite(fd,"SUMMARY\n");
        $fwrite(fd,"=====================================\n");
        $fwrite(fd,"\n");
        $fwrite(fd,"CRC GENERATED HEX = %h\n", dut.crc_value);
        $fwrite(fd,"CRC GENERATED = %015b\n", dut.crc_value);
        $fwrite(fd,"TOTAL BITS SENT   = %0d\n",bit_cnt);
        $fwrite(fd,"VALID CYCLES      = %0d\n",valid_cycles);
        assert(bit_cnt == 110)
            else
                $fatal(1,"Expected 110 bits got %0d",bit_cnt);
        $fclose(fd);
    end

endmodule
