#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/h-ninomiya/SDAccel_Examples/vision/forward_aligned/_xocc_compile_krnl_forward_krnl_forward.sw_emu.xilinx_kcu1500_4ddr-xpr_4_0.dir/impl/kernels/forward_kernel/forward_kernel/solution_OCL_REGION_0/.autopilot/db/a.g.bc ${1+"$@"}
