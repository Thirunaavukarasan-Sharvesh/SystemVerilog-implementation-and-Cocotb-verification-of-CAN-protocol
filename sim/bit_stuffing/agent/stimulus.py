import random

class Stimulus:
    def all_zeros(self):
        while(True):
            yield{"rst_n": 1, "valid_in": 1, "bit_in": 0}

    def all_ones(self):
        while(True):
            yield{"rst_n": 1, "valid_in": 1, "bit_in": 1}

    def alternating_bits(self):
        bit =0
        while(True):
            bit^=1
            yield{"rst_n": 1, "valid_in": 1, "bit_in": bit}

    def walking_1(self,width):
        while True:
            for i in range(width):
                word = 1<<i
                for bit in reversed(range(width)):
                    yield {"rst_n": 1, "valid_in": 1, "bit_in": (word >> bit) & 1}

    def walking_0(self,width):
        while True:
            for i in range(width):
                # 1 1 1 0 -> 1 1 0 1 -> 1 0 1 1 -> 0 1 1 1
                word = ~(1 << i) & ((1 << width)-1)
                for bit in reversed(range(width)):
                    yield {"rst_n": 1, "valid_in": 1, "bit_in": (word >> bit) & 1}

    def step_up_1(self,width):
        while True:
            for i in range(width):
                # 0 0 0 1 -> 0 0 1 1 -> 0 1 1 1 -> 1 1 1 1
                #   1            3          7            15 
                #   2-1         4 -1       8 -1         16-1
                word = (1 << (i+1))-1
                for bit in reversed(range(width)):
                    yield {"rst_n": 1, "valid_in": 1, "bit_in": (word >> bit) & 1}

    def step_down_1(self,width):
        while True:
            for i in range(width):
                # 1 1 1 0 -> 1 1 0 0 -> 1 0 0 0 -> 0 0 0 0
                #   14           12         8            0
                #   16-2        16-4      16-8         16-16
                word = ((1 << width) - 1) & ~((1 << (i + 1)) - 1)
                for bit in reversed(range(width)):
                    yield {"rst_n": 1, "valid_in": 1, "bit_in": (word >> bit) & 1}
                    
    def checkerboard(self,width):
        # 1010 0101 1010
        mask = (1 << width)-1
        x=0
        for i in range (width):
            # need to shift in even times 
            # i =0 - x = 0001 - 
            # i =1 - x = 0001
            # i =2 - x = 0101
            # i =3 - x = 0101
            if i% 2 == 0:
                x |= (1<<i) & mask
            y = ~(x) & mask
            while True:
                for word in [x,y]:
                    for bit in reversed(range(width)):
                        yield {"rst_n": 1, "valid_in": 1, "bit_in": (word >> bit) & 1}

    def random_bit(self):
        while True:
            yield {"rst_n":1, "valid_in": 1, "bit_in": random.randint(0,1)}

    def random_valid_in(self):
        while True:
            yield {"rst_n":1, "valid_in": random.randint(0,1), "bit_in": random.randint(0,1)}

    def random_rst(self):
        while True:
            yield {"rst_n":random.randint(0,1), "valid_in": 1, "bit_in": random.randint(0,1)}
