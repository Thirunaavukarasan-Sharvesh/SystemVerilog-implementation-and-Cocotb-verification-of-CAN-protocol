`timescale 1ns/1ps

package can_pkg;
    
    localparam int FRAME_BITS = 110;
    localparam int SOF_POS         = 109;
    localparam int ID_MSB          = 108;
    localparam int ID_LSB          = 98;
    localparam int RTR_POS         = 97;
    localparam int IDE_POS         = 96;
    localparam int DLC_MSB         = 95;
    localparam int DLC_LSB         = 92;
    localparam int DATA_MSB        = 91;
    localparam int DATA_LSB        = 28;
    localparam int CRC_MSB         = 27;
    localparam int CRC_LSB         = 13;
    localparam int CRC_DELIM_POS   = 12;
    localparam int TRAILER_MSB     = 11;
    localparam int TRAILER_LSB     = 0;
    
    
    typedef struct packed{ 
        logic [10:0] id; 
    // control field 6 bits Remote Transmission Request(RTR) -1 , Identifier Extension(ide) -1 
    // Data length code (dlc)-4 
        logic rtr; 
        logic ide; 
        logic [3:0]dlc; 
        logic [63:0] data; 
        }can_frame_ip_t; 
        
    typedef struct packed{ 
        logic sof; 
        logic [10:0] id; 
        logic rtr; 
        logic ide; 
        logic [3:0] dlc; 
        logic [63:0] data; 
        logic [14:0] crc; 
        logic crc_delim;
        logic [11:0] trailer;
        }can_frame_op_t; 
        
endpackage