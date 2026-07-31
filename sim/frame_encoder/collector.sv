import can_pkg::*;

class collector;

    mailbox #(transaction) mbx;
    virtual frame_if.OUTPUT_MONITOR vif;
    logger log;

    function new(virtual frame_if.OUTPUT_MONITOR vif,mailbox #(transaction) mbx);
        this.vif = vif;
        this.mbx = mbx;
        log = new("logs/output_monitor.log");
    endfunction


    task run();
        transaction trx;
        forever begin
            @(posedge vif.clk);
            if(vif.frame_done) begin

                trx = new();

                trx.sof        = vif.frame.sof;
                trx.id         = vif.frame.id;
                trx.rtr        = vif.frame.rtr;
                trx.ide        = vif.frame.ide;
                trx.dlc        = vif.frame.dlc;
                trx.data       = vif.frame.data;
                trx.crc        = vif.frame.crc;
                trx.crc_delim  = vif.frame.crc_delim;
                trx.trailer    = vif.frame.trailer;

                log.separator("Output Monitor");

                log.info($sformatf("SOF=%0b",trx.sof));
                log.info($sformatf("ID=%03h",trx.id));
                log.info($sformatf("RTR=%0b",trx.rtr));
                log.info($sformatf("IDE=%0b",trx.ide));
                log.info($sformatf("DLC=%0d",trx.dlc));
                log.info($sformatf("DATA=%016h",trx.data));
                log.info($sformatf("CRC=%04h",trx.crc));
                log.info($sformatf("CRC_DELIM=%0b",trx.crc_delim));
                log.info($sformatf("TRAILER=%012b",trx.trailer));

                mbx.put(trx);

            end
        end
    endtask
endclass
