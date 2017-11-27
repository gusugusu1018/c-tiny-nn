set xmlPath "/home/h-ninomiya/SDAccel_Examples/vision/forward_aligned/_xocc_compile_krnl_forward_krnl_forward.sw_emu.xilinx_kcu1500_4ddr-xpr_4_0.dir/impl/kernels/forward_kernel/forward_kernel/kernel.xml"
transform "/home/h-ninomiya/SDAccel_Examples/vision/forward_aligned/_xocc_compile_krnl_forward_krnl_forward.sw_emu.xilinx_kcu1500_4ddr-xpr_4_0.dir/impl/kernels/forward_kernel/forward_kernel/forward_kernel.clc.00.bc" -hls -top=forward_kernel -xcl-xmlinfo=$xmlPath -xcl-flatten -spir-runtime-support -xcl-ports-metadata -spir-link-builtins -kernelxml -f -o /dev/null
exit
