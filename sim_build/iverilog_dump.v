module iverilog_dump();
initial begin
    $dumpfile("crc.fst");
    $dumpvars(0, crc);
end
endmodule
