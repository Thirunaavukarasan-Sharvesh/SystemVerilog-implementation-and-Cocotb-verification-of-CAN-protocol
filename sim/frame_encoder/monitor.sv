import can_pkg::*;

class monitor;

    mailbox #(transaction)mbx_in;
    virtual frame_if.INPUT_MONITOR vif_in;
    //virtual frame_if.OUTPUT_MONITOR vif_out;
    //virtual frame_if vif;
    logger log;

    function new(virtual frame_if.INPUT_MONITOR vif_in,mailbox #(transaction)mbx_in);
        this.vif_in = vif_in;
        //this.vif_out = vif_out;
        //this.vif = vif;
        this.mbx_in = mbx_in;
        this.log = new("logs/monitor.log");
    endfunction

    //bit bit_queue[$];
    //bit bit_array[FRAME_BITS];
    //int bit_index = 0;
    //bit [FRAME_BITS-1:0] bit_vector;

    task monitor_input();
        transaction monTrx_in;
        forever begin
            @(posedge vif_in.clk);
                if(vif_in.valid) begin
                    log.separator("Input Monitor");
                    monTrx_in = new();
                    monTrx_in.id  = vif_in.frame_in.id;
                    monTrx_in.rtr = vif_in.frame_in.rtr;
                    monTrx_in.ide = vif_in.frame_in.ide;
                    monTrx_in.dlc = vif_in.frame_in.dlc;
                    monTrx_in.data= vif_in.frame_in.data;
                    mbx_in.put(monTrx_in);
                    log.info($sformatf("Captured ID=%03h",monTrx_in.id));
                    log.info($sformatf("Captured RTR=%0b",monTrx_in.rtr));
                    log.info($sformatf("Captured IDE=%0b",monTrx_in.ide));
                    log.info($sformatf("DLC=%0d",monTrx_in.dlc));
                    log.info($sformatf("DATA=%016h",monTrx_in.data));
                end
        end
    endtask

    /*
    bit b;
    task monitor_output();
        transaction monTrx_out;
        forever begin
            @(posedge vif_out.clk);
                if(vif_out.valid_out) begin
                    $display("bit=%0b",vif.bit_out);
                    //b=vif_out.bit_out;
                    //$display("okay" );
                end
            

            /*
                if(vif_out.valid_out) begin
                    //bit_queue.push_back(vif_out.bit_out);
                    if(bit_index < FRAME_BITS) begin
                        bit_array[bit_index] = vif_out.bit_out;
                        bit_index++;
                    end
                
                    if(bit_index >= FRAME_BITS)begin
                        monTrx_out = new();
                        log.separator("Output Monitor");
                        bit_vector = '0;
                        for (int i = 0; i < FRAME_BITS; i++)
                            bit_vector[FRAME_BITS-1-i] = bit_array[i];

                        monTrx_out.sof = bit_vector[SOF_POS];
                        monTrx_out.id  = bit_vector[ID_MSB:ID_LSB];
                        monTrx_out.rtr = bit_vector[RTR_POS];
                        monTrx_out.ide = bit_vector[IDE_POS];
                        monTrx_out.dlc = bit_vector[DLC_MSB:DLC_LSB];
                        monTrx_out.data= bit_vector[DATA_MSB:DATA_LSB];
                        monTrx_out.crc = bit_vector[CRC_MSB:CRC_LSB];
                        monTrx_out.crc_delim = bit_vector[CRC_DELIM_POS];
                        monTrx_out.trailer = bit_vector[TRAILER_MSB:TRAILER_LSB];

                        bit_index =0;
                        log.info($sformatf("SOF=%0b",monTrx_out.sof));
                        log.info($sformatf("ID=%03h",monTrx_out.id));
                        log.info($sformatf("RTR=%0b",monTrx_out.rtr));
                        log.info($sformatf("IDE=%0b",monTrx_out.ide));
                        log.info($sformatf("DLC=%0d",monTrx_out.dlc));
                        log.info($sformatf("DATA=%016h",monTrx_out.data));
                        log.info($sformatf("CRC=%04h",monTrx_out.crc));
                        log.info($sformatf("Trailer=%012b",monTrx_out.trailer));                    
                        mbx_out.put(monTrx_out);
                    end
                end
                */
            /*
                if(vif_out.valid_out) begin
                    bit_queue.push_back(vif_out.bit_out);
                end
                if(bit_queue.size() >= FRAME_BITS) begin
                    monTrx_out = new();
                    log.separator("Output Monitor");
                    bit_vector = '0;
                    for (int i = 0; i < FRAME_BITS; i++)
                        bit_vector[FRAME_BITS-1-i] = bit_queue[i];

                    monTrx_out.sof = bit_vector[SOF_POS];
                    monTrx_out.id  = bit_vector[ID_MSB:ID_LSB];
                    monTrx_out.rtr = bit_vector[RTR_POS];
                    monTrx_out.ide = bit_vector[IDE_POS];
                    monTrx_out.dlc = bit_vector[DLC_MSB:DLC_LSB];
                    monTrx_out.data= bit_vector[DATA_MSB:DATA_LSB];
                    monTrx_out.crc = bit_vector[CRC_MSB:CRC_LSB];
                    monTrx_out.crc_delim = bit_vector[CRC_DELIM_POS];
                    monTrx_out.trailer = bit_vector[TRAILER_MSB:TRAILER_LSB];

                    bit_queue.delete();
                    log.info($sformatf("SOF=%0b",monTrx_out.sof));
                    log.info($sformatf("ID=%03h",monTrx_out.id));
                    log.info($sformatf("RTR=%0b",monTrx_out.rtr));
                    log.info($sformatf("IDE=%0b",monTrx_out.ide));
                    log.info($sformatf("DLC=%0d",monTrx_out.dlc));
                    log.info($sformatf("DATA=%016h",monTrx_out.data));
                    log.info($sformatf("CRC=%04h",monTrx_out.crc));
                    log.info($sformatf("Trailer=%012b",monTrx_out.trailer));                    
                    mbx_out.put(monTrx_out);
                end
                */
        /*        
        
        end
    endtask
    */
    /*
    task run();
        fork
            monitor_input();
            monitor_output();
        join
    endtask
    */
endclass
