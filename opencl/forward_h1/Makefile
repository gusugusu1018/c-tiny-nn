# Affine Application
COMMON_REPO =../../

include $(COMMON_REPO)/utility/boards.mk
include $(COMMON_REPO)/libs/xcl2/xcl2.mk
include $(COMMON_REPO)/libs/opencl/opencl.mk

# Affine Host Application
forward_h1_SRCS=./src/forward_h1.cpp $(xcl2_SRCS)
forward_h1_HDRS=./src/network.h $(xcl2_HDRS)
forward_h1_CXXFLAGS=-I./src/ $(xcl2_CXXFLAGS) $(opencl_CXXFLAGS) 
forward_h1_LDFLAGS=$(opencl_LDFLAGS) -Wall -std=c++0x -lrt 

EXES=forward_h1

# Affine Kernel
krnl_forward_h1_SRCS=./src/krnl_forward_h1.cl
krnl_forward_h1_CLFLAGS=--kernel forward_h1_kernel -I./src/

XOS=krnl_forward_h1

# Affine xclbin
krnl_forward_h1_XOS=krnl_forward_h1
krnl_forward_h1_NDEVICES=xilinx:adm-pcie-ku3:2ddr-xpr xilinx:xil-accel-rd-vu9p:4ddr-xpr xilinx:adm-pcie-7v3:1ddr
XCLBINS=krnl_forward_h1

# check
check_EXE=forward_h1
check_XCLBINS=krnl_forward_h1
check_NDEVICES=xilinx:adm-pcie-ku3:2ddr-xpr xilinx:xil-accel-rd-vu9p:4ddr-xpr xilinx:adm-pcie-7v3:1ddr
check_ARGS=./data/CT-MONO2-16-brain.raw

CHECKS=check

include $(COMMON_REPO)/utility/rules.mk

