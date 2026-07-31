from cocotb.triggers import RisingEdge, ReadOnly
import os

class Monitor:
    def __init__(self,dut):
        self.dut = dut
        file = os.path.dirname(__file__)
        folder = os.path.join(file,"logs")
        os.makedirs(folder,exist_ok=True)
        self.log_file = open(os.path.join(folder,"monitor.log"),"w")
        self.cycle =0
        self.callbacks=[]
    
    def safe_int(self,value):
        try:
            return int(value)
        except ValueError:
            return "x"
    
    def dy_trx_sc(self,callback):
        self.callbacks.append(callback)
    
    async def monitor(self):
        while True:
            await RisingEdge(self.dut.clk)
            await ReadOnly()
            """"
            input logic clk,
            input logic rst_n,
            input logic bit_in,
            input logic valid_in,

            output logic bit_out,
            output logic valid_out,
            output logic ready_out
            """
            trx = { "rst_n" : self.safe_int(self.dut.rst_n.value),
                    "bit_in" : self.safe_int(self.dut.bit_in.value),
                    "valid_in" : self.safe_int(self.dut.valid_in.value),
                    "bit_out" : self.safe_int(self.dut.bit_out.value),
                    "valid_out" : self.safe_int(self.dut.valid_out.value),
                    "ready_out" : self.safe_int(self.dut.ready_out.value)
            }
            self.log_file.write(f"[{self.cycle}]th value : {trx}\n\n")
            self.log_file.flush()
            self.cycle+=1
           
           
            for i in self.callbacks:
                i(trx)