class generator;
    mailbox #(transaction)mbx; // only allow trx in the mailbox

    function new (mailbox #(transaction) mbx);
      this.mbx = mbx;
    endfunction

    task run();
            integer fd;
            logic [80:0] packet;
            transaction trx;
            fd = $fopen("transaction.hex","r");
            if(fd==0)
                $fatal(1,"Cannot open/find transaction.hex file");
            // feof -> File End Of File
            while(!$feof(fd)) begin
                trx = new();
                void'($fscanf(fd,"%h",packet));
                trx.id  = packet[10:0];
                trx.rtr = packet[11];
                trx.ide = packet[12];
                trx.dlc = packet[16:13];
                trx.data = packet[80:17];
                mbx.put(trx);
            end
            $fclose(fd);
    endtask
    
endclass
