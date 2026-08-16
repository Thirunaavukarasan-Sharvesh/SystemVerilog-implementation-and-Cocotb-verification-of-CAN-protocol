# SystemVerilog implementation and Cocotb verification of CAN protocol

SystemVerilog implementation and Cocotb-based verification of CAN protocol building blocks.

## Overview

This project explores the implementation and verification of key components used in the Controller Area Network (CAN) protocol.

The RTL is written in SystemVerilog and the verification environment uses Cocotb with Python-based drivers, monitors, stimulus generation, and scoreboards.

## Implemented Components

* **CRC / LFSR** — CRC generation and LFSR-based processing
* **Bit Stuffing** — CAN bit-stuffing logic
* **Bit Destuffing** — CAN bit-destuffing and stuff-error detection
* **Bit Timing Synchronization** — CAN bit timing and synchronization logic
* **Frame Encoder** — CAN frame encoding
* **Verification Environment** — Cocotb-based driver, monitor, scoreboard, and stimulus generation

## Repository Structure

```text
rtl/
├── bit_stuffing.sv
├── bit_destuffing.sv
├── bit_timing_sync.sv
├── crc.sv
├── lfsr.sv
└── frame_encoder.sv

sim/
├── bit_stuffing/
├── bit_destuffing/
├── bit_timing_sync/
├── crc/
├── frame_encoder/
└── lfsr/
```

Each major RTL component has its own simulation and verification environment where applicable.

## Verification

The Cocotb environments include:

* Python-based stimulus generation
* DUT drivers
* Output monitors
* Scoreboards
* Directed test patterns
* Simulation logging

The verification work is being developed incrementally as the CAN protocol components are implemented.

## Tools

* SystemVerilog
* Cocotb
* Python
* Icarus Verilog / Verilator
* GTKWave

## Project Status

**Work in Progress**

The current implementation focuses on individual CAN protocol building blocks and their verification. Integration into a complete CAN controller is ongoing.
