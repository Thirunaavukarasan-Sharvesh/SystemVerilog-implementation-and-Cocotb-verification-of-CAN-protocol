from collections import deque

class Scoreboard:

    def __init__(self,log_file):
        self.log_file = log_file
        self.count = 0
        self.prev_bit =None
        self.prev_cnt = 0
        self.passed = 0
        self.fail =0
        self.cycle = 0

        self.stuff_error_act = 0
        self.stuff_error_exp = 0    

        self.ip_queue = []

        self.act_queue = deque()
        self.act_stream =[]

        self.exp_stream = []
        self.exp_queue = deque()
        self.flag = False

    def separator(self,trx):
        if (trx["valid_in"]==1 and trx["bit_in"] != "x"):
            self.ip_queue.append(trx["bit_in"])
            self.prediction(trx["bit_in"])
        if(trx["valid_out"]==1 and trx["bit_out"]!="x"):
            self.act_queue.append(trx["bit_out"])
            self.act_stream.append(trx["bit_out"])
        if trx["stuff_error"]:
            self.stuff_error_act += 1
        self.check_queues()

    def prediction(self,bit):
        self.cycle+=1
        if self.flag:
            if (bit == self.prev_bit):
                self.stuff_error_exp +=1
            self.prev_cnt =0
            self.prev_bit = None
            self.flag = False
            return 
        
        self.exp_queue.append(bit)
        self.exp_stream.append(bit)
        #self.check_queues()

        if (bit == self.prev_bit):
            self.prev_cnt +=1
        else:
            self.prev_cnt = 1
        self.prev_bit = bit

        if (self.prev_cnt == 5):
            self.flag = True

    def check_queues(self):
        while (self.act_queue and self.exp_queue):
            exp=self.exp_queue.popleft()
            act= self.act_queue.popleft()
            self.compare(exp,act)

    def compare(self,exp,act):
        self.count +=1
        passed = (exp == act)
        if (not passed):
            self.fail +=1
            self.log_file.write(f"FAILED!\n")
            x = []
            y =[]
            z=[]
            for i,j,h in zip(self.ip_queue[-10:], self.act_stream[-10:], self.exp_stream[-10:]):
                x.append(i)
                y.append(j)
                z.append(h)
            self.log_file.write(f"Last Inputs\n{''.join(map(str,x))}\n")
            self.log_file.write(f"Last Output\n{''.join(map(str,y))}\n")
            self.log_file.write(f"Last Expect\n{''.join(map(str,z))}\n")
            self.log_file.flush()
            x.clear()
            y.clear()
            z.clear()
        else:
            self.passed +=1
            self.log_file.write(
                f"[CMP {self.count}] "
                f"EXP={exp} ACT={act}\n\n")
            self.log_file.flush()


    def clear(self):
        self.count = 0
        self.prev_bit =None
        self.prev_cnt =0
        self.passed = 0
        self.fail =0
        self.cycle = 0

        self.ip_queue.clear()

        self.act_queue.clear()
        self.act_stream.clear()

        self.exp_queue.clear()
        self.exp_stream.clear()

        self.stuff_error_act=0
        self.stuff_error_exp=0

    
    def prints(self,Test_name):
        self.log_file.write("\n")
        self.log_file.write("=" * 60 + "\n")
        self.log_file.write(f"Test Name:      {Test_name}\n")
        self.log_file.write(f"INP STREAM:\n"f"{' '.join(map(str,self.ip_queue))}\n\n") 
        self.log_file.write(f"ACT STREAM:\n"f"{' '.join(map(str,self.act_stream))}\n\n")
        self.log_file.write(f"EXP STREAM:\n"f"{' '.join(map(str,self.exp_stream))}\n\n")
        self.log_file.write(f"ERR_ACT : {self.stuff_error_act}\n")
        self.log_file.write(f"ERR_EXP : {self.stuff_error_exp}\n\n")


    def summary(self,Test_name):
        #include coverage too 
        txt = Test_name
        self.prints(txt) 
        #Coverage prints
        self.log_file.write(f"COMPARES  : {self.count}\n")
        self.log_file.write(f"FAILURES  : {self.fail}\n")
        #self.log_file.write(f"STATUS    : {status}\n")
        self.log_file.write(
                    f"STUFF ERRORS : EXP={self.stuff_error_exp} "
                    f"ACT={self.stuff_error_act}\n")
        self.log_file.write("=" * 60 + "\n\n")
        self.log_file.flush()        