""""
monitor
callback
transaction classes
logging framework
reorder depth
coverage inside scoreboard

total checks

passed checks

failed checks

pass percentage
"""
"""class LFSRScoreboard:

    def __init__(self, width, seed):
        ...

    def reset(self):
        ...

    def predict(self, data_in):
        ...

    def step(self, data_in, actual, rst_n, en):
        ...



        clock thread
reset thread
driver thread
monitor thread
coverage thread
scoreboard thread
watchdog thread

          TEST
            │
     ┌──────┴──────┐
     │ Environment │
     └──────┬──────┘
   Agent(s) │
 ┌──────────┴──────────┐
 Driver   Monitor   Coverage
   │         │
   │     Scoreboard
   │         │
  DUT <------┘


run 5000 cycles
random enable
random reset
walking 1/0 tests
add 3 assertions
add coverage counters


all zeros stream

all ones stream

walking 1

walking 0

alternating bits

random enable

reset during operation

long run (10k cycles)

    """
import cocotb
from cocotb.triggers import RisingEdge
from tb_logger import get_tb_logger
from monitor_lfsr import Monitor_lfsr_Logs

#from sim.Monitor_logs import MonitorLogs

class scoreboard_lfsr:
    def __init__ (self, width, seed):
        self.width = width             # storage for the width of the lfsr register
        self.seed = seed               # initial reset value  
        self.mask = (1 << width) - 1   # to keep python integers limited to the register width
        self.state = seed & self.mask  # which state the vlaue is in lfsr value 
        self.expected_next = self.state          # to store the expected next value of the lfsr based on the current state and input
        self.firstSample = True          # to handle the first sample after reset where we dont have a valid expected_next value
        self.errors = 0 
        self.total_checks = 0
        self.passed_checks = 0

        self.logger = get_tb_logger()

        # self.logger = logging.getLogger("Scoreboard")
        # self.logger.setLevel(logging.INFO)
        # self.logger.propagate = False

        # if not self.logger.handlers:
        #     fh = logging.FileHandler("scoreboard.log", mode="w")
        #     formatter = logging.Formatter(
        #         "%(asctime)s - %(message)s"
        #     )
        #     fh.setFormatter(formatter)
        #     self.logger.addHandler(fh)
    
    def reset(self):
        self.state = self.seed & self.mask
# 14,10,8,7,4,3,0
    def reset_stats(self):
        self.errors = 0
        self.total_checks = 0
        self.passed_checks = 0
        
    def predict (self,data_in):
        state = self.state
        msb = (state >> (self.width -1)) & 1
        feedback = data_in ^ msb  # python dont have bit indexing so we have to shift and mask to get the bit value
        # feedback = data_in ^ ((state >> (self.width -1)) & 1)  # python dont have bit indexing so we have to shift and mask to get the bit value
        # # (state >> (self.width -1)) & 1 gives us the value of MSB ie state[14] 
        # next_state = ((state << 1) | feedback)  # shift left and insert feedback at LSB
        # if feedback:  # if feedback is 0 then x ^ 0 = x so we can skip the XOR operations
        #     next_state ^= (1<<14)
        #     next_state ^= (1<<10)
        #     next_state ^= (1<<8)
        #     next_state ^= (1<<7)
        #     next_state ^= (1<<4)
        #     next_state ^= (1<<3)
            
        # next_state &= self.mask
        # return next_state
        next_state = (state << 1) | feedback
        # shifted = ((state & 0x3FFF) << 1) | feedback
        # next_state = shifted
        if feedback:
            next_state ^= (1 << 14)
            next_state ^= (1 << 10)
            next_state ^= (1 << 8)
            next_state ^= (1 << 7)
            next_state ^= (1 << 4)
            next_state ^= (1 << 3)

        next_state &= self.mask

        return next_state
    

    def step (self,txn):

        data_in = txn["data_in"]
        actual  = txn["lfsr_out"]
        rst_n   = txn["rst_n"]
        en      = txn["en"]

        if not rst_n:
            self.reset()
            #self.firstSample = True
            self.expected_next = None
            return 

        if self.firstSample:
            self.firstSample = False
            self.state = actual
            self.expected_next = self.state
            return
        
        if not en:
            return
        
         # --------- COMPARE OLD PREDICTION ----------
        if self.expected_next is not None:
            self.total_checks += 1

            if self.expected_next != actual:
                self.errors += 1
                self.logger.info(
                    f"MISMATCH expected={self.expected_next} got={actual}"
                )
            else:
                self.passed_checks += 1
        else:
            self.state = actual
        # ------------------------------------------

        # compute next expected
        print("SB RX:", txn)
        self.expected_next = self.predict(data_in)

        # update model state
        self.state = self.expected_next
    def report(self):
        if self.total_checks == 0:
            self.logger.info("No checks performed")
            return 
        pass_percentage = (self.passed_checks / self.total_checks) * 100
        self.logger.info("===== SCOREBOARD REPORT =====")
        self.logger.info(f"Total Checks     : {self.total_checks}")
        self.logger.info(f"Passed Checks    : {self.passed_checks}")
        self.logger.info(f"Failed Checks    : {self.errors}")
        self.logger.info(f"Pass Percentage  : {pass_percentage:.2f}%")
        self.logger.info("======End of Report ==========")

"""
        if self.firstSample:
            self.firstSample = False
            self.state = actual
            return
        
        predicted = self.predict(data_in)
        self.total_checks += 1

        
        if predicted!= actual:
            self.errors +=1
            self.logger.info( f"MISMATCH expected={predicted} got={actual}")
        else:
            self.passed_checks += 1
            self.logger.info(f"Expected={predicted} Actual={actual}")
        
        self.state = self.predict(data_in)
        #self.state = predicted
        #self.expected_next = predicted

        working one pa
    """    

   