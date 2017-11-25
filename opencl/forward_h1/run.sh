make clean
make all TARGETS=sw_emu
emconfigutil --platform xilinx_kcu1500_4ddr-xpr_4_0
export XCL_EMULATION_MODE=sw_emu 
