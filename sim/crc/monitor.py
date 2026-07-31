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
        
    def trx_sc(self,callback):
        self.callbacks.append(callback)
            
    async def monitor(self):
        while True:
            await RisingEdge(self.dut.clk)
            await ReadOnly()

            trx = { "rst_n" : self.safe_int(self.dut.rst_n.value),
                    "data_in" : self.safe_int(self.dut.data_in.value),
                    "data_valid" : self.safe_int(self.dut.data_valid.value),
                    "crc_init" : self.safe_int(self.dut.crc_init.value),
                    "crc_cap" : self.safe_int(self.dut.crc_cap.value),

                    "crc_out" : self.safe_int(self.dut.crc_out.value),
                    "crc_valid" : self.safe_int(self.dut.crc_valid.value),

                    "lfsr_out" : self.safe_int(self.dut.uut.lfsr_out.value)
            }
            self.log_file.write(f"[{self.cycle}]th value : {trx}\n\n")
            self.log_file.flush()
            self.cycle+=1

            for i in self.callbacks:
                i(trx)


