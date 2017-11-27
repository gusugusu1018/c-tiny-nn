
set TopModule "forward_kernel"
set ClockPeriod "3.333330"
set ClockList {ap_clk}
set multiClockList {}
set PortClockMap {}
set CombLogicFlag 0
set PipelineFlag 0
set DataflowTaskPipelineFlag  1
set TrivialPipelineFlag 0
set noPortSwitchingFlag 0
set FloatingPointFlag 1
set FftOrFirFlag 0
set NbRWValue 0
set intNbAccess 0
set NewDSPMapping 1
set HasDSPModule 1
set ResetLevelFlag 0
set ResetStyle "control"
set ResetSyncFlag 1
set ResetRegisterFlag 1
set ResetVariableFlag 0
set fsmEncStyle "onehot"
set maxFanout "0"
set RtlPrefix ""
set ExtraCCFlags ""
set ExtraCLdFlags ""
set SynCheckOptions ""
set PresynOptions ""
set PreprocOptions ""
set SchedOptions ""
set BindOptions ""
set RtlGenOptions ""
set RtlWriterOptions ""
set CbcGenFlag ""
set CasGenFlag ""
set CasMonitorFlag ""
set AutoSimOptions {}
set ExportMCPathFlag "0"
set SCTraceFileName "mytrace"
set SCTraceFileFormat "vcd"
set SCTraceOption "all"
set TargetInfo "xcku115:-flvb2104:-2-e"
set SourceFiles {sc {} c /home/h-ninomiya/SDAccel_Examples/vision/forward_aligned/src/krnl_forward.cl}
set SourceFlags {sc {} c -I/home/h-ninomiya/SDAccel_Examples/vision/forward_aligned/src}
set DirectiveFile {}
set TBFiles {bc {} c {} sc {} cas {} vhdl {} verilog {}}
set SpecLanguage "OpenCL"
set TVInFiles {bc {} c {} sc {} cas {} vhdl {} verilog {}}
set TVOutFiles {bc {} c {} sc {} cas {} vhdl {} verilog {}}
set TBTops {bc "" c "" sc "" cas "" vhdl "" verilog ""}
set TBInstNames {bc "" c "" sc "" cas "" vhdl "" verilog ""}
set XDCFiles {}
set ExtraGlobalOptions {"area_timing" 1 "clock_gate" 1 "impl_flow" map "power_gate" 0}
set PlatformFiles {{DefaultPlatform {xilinx/kintexu/kintexu xilinx/kintexu/kintexu_fpv7}}}
set DefaultPlatform "DefaultPlatform"
set TBTVFileNotFound ""
set AppFile "../vivado_hls.app"
set ApsFile "solution_OCL_REGION_0.aps"
set AvePath "../.."
set HPFPO "0"
