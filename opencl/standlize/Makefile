# Affine Application
COMMON_REPO =../../

include $(COMMON_REPO)/utility/boards.mk
include $(COMMON_REPO)/libs/xcl2/xcl2.mk
include $(COMMON_REPO)/libs/opencl/opencl.mk

# Affine Host Application
standlize_SRCS=./src/standlize.cpp $(bitmap_SRCS) $(xcl2_SRCS)
standlize_HDRS=$(bitmap_HDRS) $(xcl2_HDRS)
standlize_CXXFLAGS=-I./src/ $(xcl2_CXXFLAGS) $(opencl_CXXFLAGS) $(bitmap_CXXFLAGS) 
standlize_LDFLAGS=$(opencl_LDFLAGS) -Wall -std=c++0x -lrt 

EXES=standlize

# Affine Kernel
krnl_standlize_SRCS=./src/krnl_standlize.cl

XOS=krnl_standlize

# Affine xclbin
krnl_standlize_XOS=krnl_standlize
krnl_standlize_NDEVICES=xilinx:adm-pcie-ku3:2ddr-xpr xilinx:xil-accel-rd-vu9p:4ddr-xpr xilinx:adm-pcie-7v3:1ddr
XCLBINS=krnl_standlize

# check
check_EXE=standlize
check_XCLBINS=krnl_standlize
check_NDEVICES=xilinx:adm-pcie-ku3:2ddr-xpr xilinx:xil-accel-rd-vu9p:4ddr-xpr xilinx:adm-pcie-7v3:1ddr
check_ARGS=./data/CT-MONO2-16-brain.raw

CHECKS=check

include $(COMMON_REPO)/utility/rules.mk

