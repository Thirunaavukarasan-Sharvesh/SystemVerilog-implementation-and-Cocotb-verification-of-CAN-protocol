module iverilog_dump();
initial begin
    $dumpfile("bit_destuffing.fst");
    $dumpvars(0, bit_destuffing);
end
endmodule
