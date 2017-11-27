#!/bin/sh

# 
# xocc(TM)
# runme.sh: a xocc-generated Runs Script for UNIX
# Copyright 1986-2017 Xilinx, Inc. All Rights Reserved.
# 

if [ -z "$PATH" ]; then
  PATH=/home/opt/Xilinx/SDx/2017.2/SDK/bin:/home/opt/Xilinx/SDx/2017.2/bin
else
  PATH=/home/opt/Xilinx/SDx/2017.2/SDK/bin:/home/opt/Xilinx/SDx/2017.2/bin:$PATH
fi
export PATH

if [ -z "$LD_LIBRARY_PATH" ]; then
  LD_LIBRARY_PATH=
else
  LD_LIBRARY_PATH=:$LD_LIBRARY_PATH
fi
export LD_LIBRARY_PATH

HD_PWD='/home/h-ninomiya/SDAccel_Examples/vision/forward_aligned/_xocc_compile_krnl_forward_krnl_forward.sw_emu.xilinx_kcu1500_4ddr-xpr_4_0.dir/impl/kernels/forward_kernel'
cd "$HD_PWD"

HD_LOG=runme.log
/bin/touch $HD_LOG

ISEStep="./ISEWrap.sh"
EAStep()
{
     $ISEStep $HD_LOG "$@" >> $HD_LOG 2>&1
     if [ $? -ne 0 ]
     then
         exit
     fi
}

EAStep vivado_hls -f forward_kernel.tcl -messageDb vivado_hls.pb
