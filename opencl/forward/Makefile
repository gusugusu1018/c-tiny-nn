# Affine Application
COMMON_REPO =../../

include $(COMMON_REPO)/utility/boards.mk
include $(COMMON_REPO)/libs/xcl2/xcl2.mk
include $(COMMON_REPO)/libs/opencl/opencl.mk

# Affine Host Application
forward_SRCS=./src/forward.cpp $(xcl2_SRCS)
forward_HDRS=./src/network.h $(xcl2_HDRS)
forward_CXXFLAGS=-I./src/ $(xcl2_CXXFLAGS) $(opencl_CXXFLAGS) 
forward_LDFLAGS=$(opencl_LDFLAGS) -Wall -std=c++0x -lrt 

EXES=forward

# Affine Kernel
krnl_forward_SRCS=./src/krnl_forward.cl
krnl_forward_CLFLAGS=--kernel forward_kernel -I./src/

XOS=krnl_forward

# Affine xclbin
krnl_forward_XOS=krnl_forward
krnl_forward_NDEVICES=xilinx:adm-pcie-ku3:2ddr-xpr xilinx:xil-accel-rd-vu9p:4ddr-xpr xilinx:adm-pcie-7v3:1ddr
XCLBINS=krnl_forward

# check
check_EXE=forward
check_XCLBINS=krnl_forward
check_NDEVICES=xilinx:adm-pcie-ku3:2ddr-xpr xilinx:xil-accel-rd-vu9p:4ddr-xpr xilinx:adm-pcie-7v3:1ddr
check_ARGS=./data/CT-MONO2-16-brain.raw

CHECKS=check

include $(COMMON_REPO)/utility/rules.mk

