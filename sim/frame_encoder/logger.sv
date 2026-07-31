class logger;
    integer fd;

    function new(string filename);
        fd = $fopen(filename, "w");
        if(fd == 0) begin
            $fatal("Failed to open log file: %s", filename);
        end
    endfunction

    task log(string msg);
        $fwrite(fd,"%0t : %s\n",$time,msg);
    endtask

    task separator(string title="");
        $fwrite(fd,"-----------------------------------------\n");
        if(title!="")
        $fwrite(fd,"%s\n",title);
        $fwrite(fd,"========================================\n");
    endtask
    
     task info(string msg);
        $fwrite(fd,"[INFO ] %0t : %s\n",$time,msg);
    endtask

     task warn(string msg);
        $fwrite(fd,"[WARN ] %0t : %s\n",$time,msg);
    endtask

    task error(string msg);
        $fwrite(fd,"[ERROR] %0t : %s\n",$time,msg);
    endtask

    function void close();
        $fclose(fd);
    endfunction


endclass
