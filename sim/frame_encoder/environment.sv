class environment;

    // Components
    generator  gen;
    driver     drv;
    monitor    mon;
    collector  col;
    scoreboard sb;

    // Mailboxes
    mailbox #(transaction) gen_drv_mbx;
    mailbox #(transaction) mon_in_mbx;
    mailbox #(transaction) mon_out_mbx;

    // Virtual Interfaces
    virtual frame_if.DRIVER         drv_vif;
    virtual frame_if.INPUT_MONITOR  in_vif;
    virtual frame_if.OUTPUT_MONITOR out_vif;

    function new(virtual frame_if.DRIVER drv_vif,virtual frame_if.INPUT_MONITOR in_vif,virtual frame_if.OUTPUT_MONITOR out_vif);
        this.drv_vif = drv_vif;
        this.in_vif  = in_vif;
        this.out_vif = out_vif;

        gen_drv_mbx = new();
        mon_in_mbx  = new();
        mon_out_mbx = new();

        gen = new(gen_drv_mbx);
        drv = new(drv_vif,gen_drv_mbx);
        mon = new(in_vif,mon_in_mbx);
        col = new(out_vif,mon_out_mbx);
        sb = new(mon_in_mbx,mon_out_mbx);
    endfunction

    task run();
        fork
            gen.run();
            drv.drvdata();
            mon.monitor_input();
            col.run();
            sb.run();
        join
    endtask

endclass
