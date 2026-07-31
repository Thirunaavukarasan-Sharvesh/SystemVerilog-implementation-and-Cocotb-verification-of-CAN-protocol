class transaction;

    rand bit [10:0] id;
    rand bit        rtr;
    rand bit        ide;
    rand bit [3:0]  dlc;
    rand bit [63:0] data;

    bit [14:0] crc;
    bit sof;
    bit crc_delim;
    bit [11:0] trailer;

endclass
