from cocotb_test.simulator import run

run(
    verilog_sources= [
    "../rtl/bit_destuffing.sv",],
    toplevel="bit_destuffing",
    module="bit_destuffing.tb",
    simulator="icarus",
    compile_args=["-g2012"],
    waves=True,
)
#nl -ba /workspaces/CAN_Bus_cocotb/rtl/bit_stuffing.sv | sed -n '45,60p'
