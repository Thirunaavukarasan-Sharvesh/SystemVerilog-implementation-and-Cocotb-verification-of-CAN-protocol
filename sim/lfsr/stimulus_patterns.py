import random

class stimulusPatterns:
    def all_zeros(self):
        while True:
            yield (1,1,0) # rst_n=1, en=1, data_in=0
    
    def all_ones(self):
        while True:
            yield (1,1,1) 
    
    def alternating_bits(self):
        bit = 0
        while True:
            bit ^=1
            yield (1,1,bit)
    
    def walking_1(self,width):
        while True:
            for i in range(width):
                word = 1 << i

                # serialize word MSB→LSB 
                for bit in reversed(range(width)):
                    yield (1,1,(word >> bit) & 1)

    def walking_0(self,width):
        while True:
            for i in range(width):
                 word = ~(1 << i) & ((1 << width) - 1) # Ensure word is width bits with masked to width

                 for bit in reversed(range(width)):
                    yield (1,1,(word >> bit) & 1)

    def random_pattern_val(self):
        while True:
            yield(1,1,random.randint(0, 1))
    
    def random_pattern_en(self):
        while True:
            yield (1,random.randint(0, 1),random.randint(0, 1))
    
    def random_pattern_rst(self):
            while True:
                yield (random.randint(0, 1),1,random.randint(0, 1))   