import can_pkg::*;

class scoreboard;
// mailbox from the input and output monitor to store and compare
// in = Input monitor, out = Output monitor
    mailbox #(transaction)mbx_in,mbx_act;
    transaction trx_in, trx_out;
    logger log;

    function new(mailbox #(transaction)mbx_in, mailbox #(transaction)mbx_act);
        this.mbx_in = mbx_in;
        this.mbx_act = mbx_act;
        this.log = new("logs/scoreboard.log");
    endfunction
    
    bit expected_queue[$]; // to get the expected output
    bit [FRAME_BITS-1:0] expected_vector;

    task run();
        forever begin
            mbx_in.get(trx_in);
            mbx_act.get(trx_out);
            predict();
            compare();
        end
    endtask

// predict Block
    task predict();

        expected_queue.delete();

        expected_queue.push_back(1'b0); // SOF

        for (int i = 10; i >= 0; i--) 
            expected_queue.push_back(trx_in.id[i]); //11 bit
        
        expected_queue.push_back(trx_in.rtr); //1 bit
        expected_queue.push_back(trx_in.ide); //1 bit

        for (int i = 3; i >= 0; i--) 
            expected_queue.push_back(trx_in.dlc[i]); //4 bit
        
        for (int i = 63; i >= 0; i--) 
            expected_queue.push_back(trx_in.data[i]); //64 bit
        
        crc_predict();
        expected_vector='0;

        for(int i=0;i<FRAME_BITS;i++)
            expected_vector[FRAME_BITS-1-i]=expected_queue[i];

    endtask

    task crc_predict();
        bit [14:0] crc;
        bit feedback;
        crc = 15'b0; // initial value

        for(int i=0;i<expected_queue.size();i++) begin
            feedback = expected_queue[i] ^ crc[14];
            crc = {crc[13:0],feedback};
            crc[14] ^= feedback;
            crc[10] ^= feedback;
            crc[8]  ^= feedback;
            crc[7]  ^= feedback;
            crc[4]  ^= feedback;
            crc[3]  ^= feedback;
        end
       
        for(int i=14;i>=0;i--)
            expected_queue.push_back(crc[i]);

        expected_queue.push_back(1'b1); // CRC Delimiter
        repeat(12)
            expected_queue.push_back(1'b1); // Trailer
    endtask


      task compare();

        bit pass;
        pass = 1;

        if(expected_vector[SOF_POS] !== trx_out.sof) begin
            pass = 0;
            log.error($sformatf("SOF Mismatch Expected=%0b Actual=%0b",expected_vector[SOF_POS],trx_out.sof));
        end

        if(expected_vector[ID_MSB:ID_LSB] !== trx_out.id) begin
            pass = 0;
            log.error($sformatf("ID Mismatch Expected=%03h Actual=%03h",expected_vector[ID_MSB:ID_LSB],trx_out.id));
        end

        if(expected_vector[RTR_POS] !== trx_out.rtr) begin
            pass = 0;
            log.error($sformatf("RTR Mismatch Expected=%0b Actual=%0b",expected_vector[RTR_POS],trx_out.rtr));
        end

        if(expected_vector[IDE_POS] !== trx_out.ide) begin
            pass = 0;
            log.error($sformatf("IDE Mismatch Expected=%0b Actual=%0b",expected_vector[IDE_POS],trx_out.ide));
        end

        if(expected_vector[DLC_MSB:DLC_LSB] !== trx_out.dlc) begin
            pass = 0;
            log.error($sformatf("DLC Mismatch Expected=%0d Actual=%0d",expected_vector[DLC_MSB:DLC_LSB],trx_out.dlc));
        end

        if(expected_vector[DATA_MSB:DATA_LSB] !== trx_out.data) begin
            pass = 0;
            log.error($sformatf("DATA Mismatch Expected=%016h Actual=%016h",expected_vector[DATA_MSB:DATA_LSB],trx_out.data));
        end

        if(expected_vector[CRC_MSB:CRC_LSB] !== trx_out.crc) begin
            pass = 0;
            log.error($sformatf("CRC mismatch Expected=%04h Actual=%04h",expected_vector[CRC_MSB:CRC_LSB],trx_out.crc));
        end

        if(expected_vector[CRC_DELIM_POS] !== trx_out.crc_delim) begin
            pass = 0;
            log.error($sformatf("CRC Delimiter Mismatch Expected=%0b Actual=%0b",expected_vector[CRC_DELIM_POS],trx_out.crc_delim));
        end

        if(expected_vector[TRAILER_MSB:TRAILER_LSB] !== trx_out.trailer) begin
            pass = 0;
            log.error($sformatf("Trailer Mismatch Expected=%0b Actual=%0b",expected_vector[TRAILER_MSB:TRAILER_LSB],trx_out.trailer));
        end

        if(pass) begin
            log.separator("Scoreboard");
            log.info("EXPECTED");
            log.info($sformatf("ID=%03h",expected_vector[ID_MSB:ID_LSB]));
            log.info($sformatf("DLC=%0d",expected_vector[DLC_MSB:DLC_LSB]));
            log.info($sformatf("CRC=%04h",expected_vector[CRC_MSB:CRC_LSB]));
            log.info("ACTUAL");
            log.info($sformatf("ID=%03h",trx_out.id));
            log.info($sformatf("DLC=%0d",trx_out.dlc));
            log.info($sformatf("CRC=%04h",trx_out.crc));
            log.log("FRAME PASS");
        end
        else begin
            log.separator("Scoreboard");
            log.log("CRC Mismatch");
            log.error($sformatf("Expected CRC=%04h",expected_vector[CRC_MSB:CRC_LSB]));
            log.error($sformatf("Actual CRC=%04h", trx_out.crc));
            log.log($sformatf("Expected %04h Actual %04h",expected_vector[CRC_MSB:CRC_LSB],trx_out.crc));
        end
    endtask
endclass