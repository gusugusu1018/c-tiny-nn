; ModuleID = '/home/h-ninomiya/SDAccel_Examples/vision/forward_aligned/_xocc_compile_krnl_forward_krnl_forward.sw_emu.xilinx_kcu1500_4ddr-xpr_4_0.dir/impl/kernels/forward_kernel/forward_kernel/solution_OCL_REGION_0/.autopilot/db/a.cl.0.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v16:16:16-v24:32:32-v32:32:32-v48:64:64-v64:64:64-v96:128:128-v128:128:128-v192:256:256-v256:256:256-v512:512:512-v1024:1024:1024"
target triple = "spir64-unknown-linux-gnu"

%struct.__spir_rt_info_tT.1 = type { i32, [3 x i32], [3 x i32], [3 x i32], [3 x i32], [3 x i32], [3 x i32], [3 x i32], i8*, i1, i8*, i8*, i64 }
%class.sw_em_force_ftz = type { i32 }
%struct.forward_kernel_args_t = type { i64, i64, i64, i64, i64, i64, i64, i64 }
%struct.__spir_rt_info_tT = type { i32, [3 x i32], [3 x i32], [3 x i32], [3 x i32], [3 x i32], [3 x i32], [3 x i32], i8*, i8, i8*, i8*, i64 }

@.str = private constant [8 x i8] c"LOOP_H1\00"   ; [#uses=1 type=[8 x i8]*]
@0 = private addrspace(2) unnamed_addr constant [8 x i8] c"LOOP_H1\00", align 1 ; [#uses=0 type=[8 x i8] addrspace(2)*]
@.str1 = private constant [8 x i8] c"LOOP_H2\00"  ; [#uses=1 type=[8 x i8]*]
@1 = private addrspace(2) unnamed_addr constant [8 x i8] c"LOOP_H2\00", align 1 ; [#uses=0 type=[8 x i8] addrspace(2)*]
@.str2 = private constant [8 x i8] c"LOOP_H3\00"  ; [#uses=1 type=[8 x i8]*]
@2 = private addrspace(2) unnamed_addr constant [8 x i8] c"LOOP_H3\00", align 1 ; [#uses=0 type=[8 x i8] addrspace(2)*]
@.str3 = private constant [15 x i8] c"LOOP_SERCH_MAX\00" ; [#uses=1 type=[15 x i8]*]
@3 = private addrspace(2) unnamed_addr constant [15 x i8] c"LOOP_SERCH_MAX\00", align 1 ; [#uses=0 type=[15 x i8] addrspace(2)*]
@.str4 = private constant [9 x i8] c"LOOP_EXP\00" ; [#uses=1 type=[9 x i8]*]
@4 = private addrspace(2) unnamed_addr constant [9 x i8] c"LOOP_EXP\00", align 1 ; [#uses=0 type=[9 x i8] addrspace(2)*]
@.str5 = private constant [13 x i8] c"LOOP_SOFTMAX\00" ; [#uses=1 type=[13 x i8]*]
@5 = private addrspace(2) unnamed_addr constant [13 x i8] c"LOOP_SOFTMAX\00", align 1 ; [#uses=0 type=[13 x i8] addrspace(2)*]
@_ZZL10hls_cordicE6angles = internal global [64 x i64] zeroinitializer, align 8 ; [#uses=0 type=[64 x i64]*]
@_ZZL22hls_payne_hanek_hyperbfPiE4iln2 = internal constant [4 x i16] [i16 -3909, i16 23575, i16 15145, i16 -18262], align 2 ; [#uses=0 type=[4 x i16]*]
@_ZZL22hls_payne_hanek_hyperbfPiE3ln2 = internal constant [4 x i16] [i16 -17195, i16 -5913, i16 3067, i16 22713], align 2 ; [#uses=0 type=[4 x i16]*]
@_ZZL13hls_exp2_fracE3pos = internal global [47 x i64] zeroinitializer, align 8 ; [#uses=0 type=[47 x i64]*]
@_ZZL13hls_log2_fracE3pos = internal global [47 x i64] zeroinitializer, align 8 ; [#uses=0 type=[47 x i64]*]
@.str6 = private unnamed_addr constant [6 x i8] c"m_axi\00", align 1 ; [#uses=1 type=[6 x i8]*]
@.str17 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=1 type=[1 x i8]*]
@.str28 = private unnamed_addr constant [10 x i8] c"s_axilite\00", align 1 ; [#uses=1 type=[10 x i8]*]
@.str39 = private unnamed_addr constant [8 x i8] c"control\00", align 1 ; [#uses=1 type=[8 x i8]*]
@rt_info = internal global %struct.__spir_rt_info_tT.1 zeroinitializer, align 8 ; [#uses=35 type=%struct.__spir_rt_info_tT.1*]
@.str410 = private unnamed_addr constant [12 x i8] c"member_name\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str511 = private unnamed_addr constant [9 x i8] c"src_data\00", align 1 ; [#uses=1 type=[9 x i8]*]
@.str612 = private unnamed_addr constant [9 x i8] c"dst_data\00", align 1 ; [#uses=1 type=[9 x i8]*]
@.str7 = private unnamed_addr constant [4 x i8] c"w01\00", align 1 ; [#uses=1 type=[4 x i8]*]
@.str8 = private unnamed_addr constant [3 x i8] c"b1\00", align 1 ; [#uses=1 type=[3 x i8]*]
@.str9 = private unnamed_addr constant [4 x i8] c"w12\00", align 1 ; [#uses=1 type=[4 x i8]*]
@.str10 = private unnamed_addr constant [3 x i8] c"b2\00", align 1 ; [#uses=1 type=[3 x i8]*]
@.str11 = private unnamed_addr constant [4 x i8] c"w23\00", align 1 ; [#uses=1 type=[4 x i8]*]
@.str12 = private unnamed_addr constant [3 x i8] c"b3\00", align 1 ; [#uses=1 type=[3 x i8]*]

; [#uses=6]
declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

; [#uses=6]
declare spir_func void @_Z21_ssdm_op_SpecLoopNamez(...) nounwind

; [#uses=6]
declare spir_func void @_Z17_ssdm_RegionBeginz(...) nounwind

; [#uses=6]
declare spir_func void @_Z15_ssdm_RegionEndz(...) nounwind

; [#uses=0]
define linkonce_odr spir_func void @_ZN15sw_em_force_ftzC1Ev(%class.sw_em_force_ftz* %this) unnamed_addr align 2 {
  call spir_func void @_ZN15sw_em_force_ftzC2Ev(%class.sw_em_force_ftz* %this)
  ret void
}

; [#uses=0]
declare i32 @__gxx_personality_v0(...)

; [#uses=0]
define linkonce_odr spir_func void @_ZN15sw_em_force_ftzD1Ev(%class.sw_em_force_ftz* %this) unnamed_addr align 2 {
  call spir_func void @_ZN15sw_em_force_ftzD2Ev(%class.sw_em_force_ftz* %this)
  ret void
}

; [#uses=1]
define linkonce_odr spir_func void @_ZN15sw_em_force_ftzD2Ev(%class.sw_em_force_ftz* %this) unnamed_addr nounwind align 2 {
  ret void
}

; [#uses=1]
define linkonce_odr spir_func void @_ZN15sw_em_force_ftzC2Ev(%class.sw_em_force_ftz* %this) unnamed_addr nounwind align 2 {
  %1 = getelementptr inbounds %class.sw_em_force_ftz* %this, i64 0, i32 0 ; [#uses=1 type=i32*]
  store i32 0, i32* %1, align 4
  ret void
}

; [#uses=1]
declare spir_func float @expf(float) nounwind

; [#uses=1]
declare i32 @_ssdm_op_PartSelect.i32.i32.i32.i32(i32, i32, i32) nounwind readnone

; [#uses=3]
declare spir_func void @_ssdm_op_SpecInterface(...) nounwind

; [#uses=0]
declare spir_func void @_ssdm_InlineRegion(...) nounwind

; [#uses=8]
declare spir_func void @_ssdm_op_SpecExt(...) nounwind

; [#uses=0]
define spir_func void @forward_kernel(i32 addrspace(1)* %gmem, %struct.forward_kernel_args_t* %args) {
  %z1.i.i = alloca [1024 x float], align 4        ; [#uses=6 type=[1024 x float]*]
  %a1.i.i = alloca [1024 x float], align 4        ; [#uses=4 type=[1024 x float]*]
  %z2.i.i = alloca [1024 x float], align 4        ; [#uses=6 type=[1024 x float]*]
  %a2.i.i = alloca [1024 x float], align 4        ; [#uses=4 type=[1024 x float]*]
  %z3.i.i = alloca [10 x float], align 4          ; [#uses=8 type=[10 x float]*]
  %a3.i.i = alloca [10 x float], align 4          ; [#uses=5 type=[10 x float]*]
  %.cast.i = alloca %struct.__spir_rt_info_tT     ; [#uses=15 type=%struct.__spir_rt_info_tT*]
  call void @llvm.dbg.value(metadata !{i32 addrspace(1)* %gmem}, i64 0, metadata !99), !dbg !100 ; [debug line = 65:84] [debug variable = gmem]
  call void @llvm.dbg.value(metadata !{%struct.forward_kernel_args_t* %args}, i64 0, metadata !101), !dbg !102 ; [debug line = 65:113] [debug variable = args]
  call void @llvm.dbg.value(metadata !{%struct.forward_kernel_args_t* %args}, i64 0, metadata !103), !dbg !104 ; [debug line = 32:48@70:1] [debug variable = args]
  %1 = getelementptr inbounds %struct.forward_kernel_args_t* %args, i32 0, i32 0, !dbg !107 ; [#uses=1 type=i64*] [debug line = 33:5@70:1]
  call spir_func void (...)* @_ssdm_op_SpecExt(i8* getelementptr inbounds ([12 x i8]* @.str410, i32 0, i32 0), i8* getelementptr inbounds ([9 x i8]* @.str511, i32 0, i32 0), i64* %1) nounwind, !dbg !107 ; [debug line = 33:5@70:1]
  %2 = getelementptr inbounds %struct.forward_kernel_args_t* %args, i32 0, i32 1, !dbg !109 ; [#uses=1 type=i64*] [debug line = 34:5@70:1]
  call spir_func void (...)* @_ssdm_op_SpecExt(i8* getelementptr inbounds ([12 x i8]* @.str410, i32 0, i32 0), i8* getelementptr inbounds ([9 x i8]* @.str612, i32 0, i32 0), i64* %2) nounwind, !dbg !109 ; [debug line = 34:5@70:1]
  %3 = getelementptr inbounds %struct.forward_kernel_args_t* %args, i32 0, i32 2, !dbg !110 ; [#uses=1 type=i64*] [debug line = 35:5@70:1]
  call spir_func void (...)* @_ssdm_op_SpecExt(i8* getelementptr inbounds ([12 x i8]* @.str410, i32 0, i32 0), i8* getelementptr inbounds ([4 x i8]* @.str7, i32 0, i32 0), i64* %3) nounwind, !dbg !110 ; [debug line = 35:5@70:1]
  %4 = getelementptr inbounds %struct.forward_kernel_args_t* %args, i32 0, i32 3, !dbg !111 ; [#uses=1 type=i64*] [debug line = 36:5@70:1]
  call spir_func void (...)* @_ssdm_op_SpecExt(i8* getelementptr inbounds ([12 x i8]* @.str410, i32 0, i32 0), i8* getelementptr inbounds ([3 x i8]* @.str8, i32 0, i32 0), i64* %4) nounwind, !dbg !111 ; [debug line = 36:5@70:1]
  %5 = getelementptr inbounds %struct.forward_kernel_args_t* %args, i32 0, i32 4, !dbg !112 ; [#uses=1 type=i64*] [debug line = 37:5@70:1]
  call spir_func void (...)* @_ssdm_op_SpecExt(i8* getelementptr inbounds ([12 x i8]* @.str410, i32 0, i32 0), i8* getelementptr inbounds ([4 x i8]* @.str9, i32 0, i32 0), i64* %5) nounwind, !dbg !112 ; [debug line = 37:5@70:1]
  %6 = getelementptr inbounds %struct.forward_kernel_args_t* %args, i32 0, i32 5, !dbg !113 ; [#uses=1 type=i64*] [debug line = 38:5@70:1]
  call spir_func void (...)* @_ssdm_op_SpecExt(i8* getelementptr inbounds ([12 x i8]* @.str410, i32 0, i32 0), i8* getelementptr inbounds ([3 x i8]* @.str10, i32 0, i32 0), i64* %6) nounwind, !dbg !113 ; [debug line = 38:5@70:1]
  %7 = getelementptr inbounds %struct.forward_kernel_args_t* %args, i32 0, i32 6, !dbg !114 ; [#uses=1 type=i64*] [debug line = 39:5@70:1]
  call spir_func void (...)* @_ssdm_op_SpecExt(i8* getelementptr inbounds ([12 x i8]* @.str410, i32 0, i32 0), i8* getelementptr inbounds ([4 x i8]* @.str11, i32 0, i32 0), i64* %7) nounwind, !dbg !114 ; [debug line = 39:5@70:1]
  %8 = getelementptr inbounds %struct.forward_kernel_args_t* %args, i32 0, i32 7, !dbg !115 ; [#uses=1 type=i64*] [debug line = 40:5@70:1]
  call spir_func void (...)* @_ssdm_op_SpecExt(i8* getelementptr inbounds ([12 x i8]* @.str410, i32 0, i32 0), i8* getelementptr inbounds ([3 x i8]* @.str12, i32 0, i32 0), i64* %8) nounwind, !dbg !115 ; [debug line = 40:5@70:1]
  call spir_func void (...)* @_ssdm_op_SpecInterface(i32 addrspace(1)* %gmem, i8* getelementptr inbounds ([6 x i8]* @.str6, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str17, i32 0, i32 0), i32 128, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str17, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str17, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str17, i32 0, i32 0), i32 16, i32 16, i32 16, i32 16, i8* getelementptr inbounds ([1 x i8]* @.str17, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str17, i32 0, i32 0)) nounwind, !dbg !116 ; [debug line = 71:1]
  call spir_func void (...)* @_ssdm_op_SpecInterface(i32 0, i8* getelementptr inbounds ([10 x i8]* @.str28, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str17, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([8 x i8]* @.str39, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str17, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str17, i32 0, i32 0), i32 0, i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str17, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str17, i32 0, i32 0)) nounwind, !dbg !117 ; [debug line = 72:1]
  call spir_func void (...)* @_ssdm_op_SpecInterface(%struct.forward_kernel_args_t* %args, i8* getelementptr inbounds ([10 x i8]* @.str28, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str17, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([8 x i8]* @.str39, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str17, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str17, i32 0, i32 0), i32 0, i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str17, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str17, i32 0, i32 0)) nounwind, !dbg !118 ; [debug line = 73:1]
  store i32 0, i32* getelementptr inbounds (%struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 0), align 4, !dbg !119 ; [debug line = 54:3]
  store i32 0, i32* getelementptr inbounds (%struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 1, i64 0), align 4, !dbg !121 ; [debug line = 63:3]
  store i32 0, i32* getelementptr inbounds (%struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 1, i64 1), align 4, !dbg !122 ; [debug line = 64:3]
  store i32 0, i32* getelementptr inbounds (%struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 1, i64 2), align 4, !dbg !123 ; [debug line = 65:3]
  store i32 1, i32* getelementptr inbounds (%struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 3, i64 0), align 4, !dbg !124 ; [debug line = 70:3]
  store i32 1, i32* getelementptr inbounds (%struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 3, i64 1), align 4, !dbg !125 ; [debug line = 79:3]
  store i32 1, i32* getelementptr inbounds (%struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 3, i64 2), align 4, !dbg !126 ; [debug line = 88:3]
  store i32 0, i32* getelementptr inbounds (%struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 4, i64 0), align 4, !dbg !127 ; [debug line = 103:3]
  store i32 0, i32* getelementptr inbounds (%struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 4, i64 1), align 4, !dbg !128 ; [debug line = 104:3]
  store i32 0, i32* getelementptr inbounds (%struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 4, i64 2), align 4, !dbg !129 ; [debug line = 105:3]
  store i32 0, i32* getelementptr inbounds (%struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 5, i64 0), align 4, !dbg !130 ; [debug line = 114:3]
  store i32 0, i32* getelementptr inbounds (%struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 5, i64 1), align 4, !dbg !131 ; [debug line = 115:3]
  store i32 0, i32* getelementptr inbounds (%struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 5, i64 2), align 4, !dbg !132 ; [debug line = 116:3]
  store i32 0, i32* getelementptr inbounds (%struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 6, i64 0), align 4, !dbg !133 ; [debug line = 125:3]
  store i32 0, i32* getelementptr inbounds (%struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 6, i64 1), align 4, !dbg !134 ; [debug line = 126:3]
  store i32 0, i32* getelementptr inbounds (%struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 6, i64 2), align 4, !dbg !135 ; [debug line = 127:3]
  store i32 0, i32* getelementptr inbounds (%struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 7, i64 0), align 4, !dbg !136 ; [debug line = 136:3]
  store i32 0, i32* getelementptr inbounds (%struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 7, i64 1), align 4, !dbg !137 ; [debug line = 137:3]
  store i32 0, i32* getelementptr inbounds (%struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 7, i64 2), align 4, !dbg !138 ; [debug line = 138:3]
  %9 = load i32* getelementptr inbounds (%struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 6, i64 0), align 4, !dbg !139 ; [#uses=1 type=i32] [debug line = 147:3]
  %10 = load i32* getelementptr inbounds (%struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 3, i64 0), align 4, !dbg !139 ; [#uses=1 type=i32] [debug line = 147:3]
  %11 = mul i32 %9, %10, !dbg !139                ; [#uses=1 type=i32] [debug line = 147:3]
  %12 = load i32* getelementptr inbounds (%struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 7, i64 0), align 4, !dbg !139 ; [#uses=1 type=i32] [debug line = 147:3]
  %13 = add i32 %11, %12, !dbg !139               ; [#uses=1 type=i32] [debug line = 147:3]
  store i32 %13, i32* getelementptr inbounds (%struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 2, i64 0), align 4, !dbg !139 ; [debug line = 147:3]
  %14 = load i32* getelementptr inbounds (%struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 6, i64 1), align 4, !dbg !140 ; [#uses=1 type=i32] [debug line = 148:3]
  %15 = load i32* getelementptr inbounds (%struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 3, i64 1), align 4, !dbg !140 ; [#uses=1 type=i32] [debug line = 148:3]
  %16 = mul i32 %14, %15, !dbg !140               ; [#uses=1 type=i32] [debug line = 148:3]
  %17 = load i32* getelementptr inbounds (%struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 7, i64 1), align 4, !dbg !140 ; [#uses=1 type=i32] [debug line = 148:3]
  %18 = add i32 %16, %17, !dbg !140               ; [#uses=1 type=i32] [debug line = 148:3]
  store i32 %18, i32* getelementptr inbounds (%struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 2, i64 1), align 4, !dbg !140 ; [debug line = 148:3]
  %19 = load i32* getelementptr inbounds (%struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 6, i64 2), align 4, !dbg !141 ; [#uses=1 type=i32] [debug line = 149:3]
  %20 = load i32* getelementptr inbounds (%struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 3, i64 2), align 4, !dbg !141 ; [#uses=1 type=i32] [debug line = 149:3]
  %21 = mul i32 %19, %20, !dbg !141               ; [#uses=1 type=i32] [debug line = 149:3]
  %22 = load i32* getelementptr inbounds (%struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 7, i64 2), align 4, !dbg !141 ; [#uses=1 type=i32] [debug line = 149:3]
  %23 = add i32 %21, %22, !dbg !141               ; [#uses=1 type=i32] [debug line = 149:3]
  store i32 %23, i32* getelementptr inbounds (%struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 2, i64 2), align 4, !dbg !141 ; [debug line = 149:3]
  %24 = bitcast %struct.__spir_rt_info_tT* %.cast.i to i8* ; [#uses=0 type=i8*]
  call void @llvm.dbg.value(metadata !{i32 addrspace(1)* %gmem}, i64 0, metadata !142), !dbg !143 ; [debug line = 50:90] [debug variable = gmem]
  call void @llvm.dbg.value(metadata !144, i64 0, metadata !145), !dbg !146 ; [debug line = 50:114] [debug variable = rt_info]
  call void @llvm.dbg.value(metadata !{%struct.forward_kernel_args_t* %args}, i64 0, metadata !147), !dbg !148 ; [debug line = 50:146] [debug variable = args]
  %25 = getelementptr inbounds %struct.forward_kernel_args_t* %args, i32 0, i32 0, !dbg !149 ; [#uses=1 type=i64*] [debug line = 52:124]
  %26 = load i64* %25, align 8, !dbg !149         ; [#uses=1 type=i64] [debug line = 52:124]
  %27 = lshr i64 %26, 2, !dbg !149                ; [#uses=1 type=i64] [debug line = 52:124]
  %arg_src_data.i.0 = getelementptr inbounds i32 addrspace(1)* %gmem, i64 %27, !dbg !149 ; [#uses=1 type=i32 addrspace(1)*] [debug line = 52:124]
  call void @llvm.dbg.value(metadata !{i32 addrspace(1)* %arg_src_data.i.0}, i64 0, metadata !151), !dbg !149 ; [debug line = 52:124] [debug variable = arg_src_data]
  %28 = getelementptr inbounds %struct.forward_kernel_args_t* %args, i32 0, i32 1, !dbg !152 ; [#uses=1 type=i64*] [debug line = 53:124]
  %29 = load i64* %28, align 8, !dbg !152         ; [#uses=1 type=i64] [debug line = 53:124]
  %30 = lshr i64 %29, 2, !dbg !152                ; [#uses=1 type=i64] [debug line = 53:124]
  %arg_dst_data.i.0 = getelementptr inbounds i32 addrspace(1)* %gmem, i64 %30, !dbg !152 ; [#uses=1 type=i32 addrspace(1)*] [debug line = 53:124]
  call void @llvm.dbg.value(metadata !{i32 addrspace(1)* %arg_dst_data.i.0}, i64 0, metadata !153), !dbg !152 ; [debug line = 53:124] [debug variable = arg_dst_data]
  %31 = getelementptr inbounds %struct.forward_kernel_args_t* %args, i32 0, i32 2, !dbg !154 ; [#uses=1 type=i64*] [debug line = 54:114]
  %32 = load i64* %31, align 8, !dbg !154         ; [#uses=1 type=i64] [debug line = 54:114]
  %33 = lshr i64 %32, 2, !dbg !154                ; [#uses=1 type=i64] [debug line = 54:114]
  %arg_w01.i.0 = getelementptr inbounds i32 addrspace(1)* %gmem, i64 %33, !dbg !154 ; [#uses=1 type=i32 addrspace(1)*] [debug line = 54:114]
  call void @llvm.dbg.value(metadata !{i32 addrspace(1)* %arg_w01.i.0}, i64 0, metadata !155), !dbg !154 ; [debug line = 54:114] [debug variable = arg_w01]
  %34 = getelementptr inbounds %struct.forward_kernel_args_t* %args, i32 0, i32 3, !dbg !156 ; [#uses=1 type=i64*] [debug line = 55:112]
  %35 = load i64* %34, align 8, !dbg !156         ; [#uses=1 type=i64] [debug line = 55:112]
  %36 = lshr i64 %35, 2, !dbg !156                ; [#uses=1 type=i64] [debug line = 55:112]
  %arg_b1.i.0 = getelementptr inbounds i32 addrspace(1)* %gmem, i64 %36, !dbg !156 ; [#uses=1 type=i32 addrspace(1)*] [debug line = 55:112]
  call void @llvm.dbg.value(metadata !{i32 addrspace(1)* %arg_b1.i.0}, i64 0, metadata !157), !dbg !156 ; [debug line = 55:112] [debug variable = arg_b1]
  %37 = getelementptr inbounds %struct.forward_kernel_args_t* %args, i32 0, i32 4, !dbg !158 ; [#uses=1 type=i64*] [debug line = 56:114]
  %38 = load i64* %37, align 8, !dbg !158         ; [#uses=1 type=i64] [debug line = 56:114]
  %39 = lshr i64 %38, 2, !dbg !158                ; [#uses=1 type=i64] [debug line = 56:114]
  %arg_w12.i.0 = getelementptr inbounds i32 addrspace(1)* %gmem, i64 %39, !dbg !158 ; [#uses=1 type=i32 addrspace(1)*] [debug line = 56:114]
  call void @llvm.dbg.value(metadata !{i32 addrspace(1)* %arg_w12.i.0}, i64 0, metadata !159), !dbg !158 ; [debug line = 56:114] [debug variable = arg_w12]
  %40 = getelementptr inbounds %struct.forward_kernel_args_t* %args, i32 0, i32 5, !dbg !160 ; [#uses=1 type=i64*] [debug line = 57:112]
  %41 = load i64* %40, align 8, !dbg !160         ; [#uses=1 type=i64] [debug line = 57:112]
  %42 = lshr i64 %41, 2, !dbg !160                ; [#uses=1 type=i64] [debug line = 57:112]
  %arg_b2.i.0 = getelementptr inbounds i32 addrspace(1)* %gmem, i64 %42, !dbg !160 ; [#uses=1 type=i32 addrspace(1)*] [debug line = 57:112]
  call void @llvm.dbg.value(metadata !{i32 addrspace(1)* %arg_b2.i.0}, i64 0, metadata !161), !dbg !160 ; [debug line = 57:112] [debug variable = arg_b2]
  %43 = getelementptr inbounds %struct.forward_kernel_args_t* %args, i32 0, i32 6, !dbg !162 ; [#uses=1 type=i64*] [debug line = 58:114]
  %44 = load i64* %43, align 8, !dbg !162         ; [#uses=1 type=i64] [debug line = 58:114]
  %45 = lshr i64 %44, 2, !dbg !162                ; [#uses=1 type=i64] [debug line = 58:114]
  %arg_w23.i.0 = getelementptr inbounds i32 addrspace(1)* %gmem, i64 %45, !dbg !162 ; [#uses=1 type=i32 addrspace(1)*] [debug line = 58:114]
  call void @llvm.dbg.value(metadata !{i32 addrspace(1)* %arg_w23.i.0}, i64 0, metadata !163), !dbg !162 ; [debug line = 58:114] [debug variable = arg_w23]
  %46 = getelementptr inbounds %struct.forward_kernel_args_t* %args, i32 0, i32 7, !dbg !164 ; [#uses=1 type=i64*] [debug line = 59:112]
  %47 = load i64* %46, align 8, !dbg !164         ; [#uses=1 type=i64] [debug line = 59:112]
  %48 = lshr i64 %47, 2, !dbg !164                ; [#uses=1 type=i64] [debug line = 59:112]
  %arg_b3.i.0 = getelementptr inbounds i32 addrspace(1)* %gmem, i64 %48, !dbg !164 ; [#uses=1 type=i32 addrspace(1)*] [debug line = 59:112]
  call void @llvm.dbg.value(metadata !{i32 addrspace(1)* %arg_b3.i.0}, i64 0, metadata !165), !dbg !164 ; [debug line = 59:112] [debug variable = arg_b3]
  %49 = getelementptr %struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 0 ; [#uses=1 type=i32*]
  %50 = getelementptr %struct.__spir_rt_info_tT* %.cast.i, i32 0, i32 0 ; [#uses=1 type=i32*]
  %51 = load i32* %49                             ; [#uses=1 type=i32]
  %52 = bitcast i32 %51 to i32                    ; [#uses=1 type=i32]
  store volatile i32 %52, i32* %50
  %53 = getelementptr %struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 1 ; [#uses=3 type=[3 x i32]*]
  %54 = getelementptr %struct.__spir_rt_info_tT* %.cast.i, i32 0, i32 1 ; [#uses=3 type=[3 x i32]*]
  %55 = getelementptr [3 x i32]* %53, i32 0, i32 0 ; [#uses=1 type=i32*]
  %56 = getelementptr [3 x i32]* %54, i32 0, i32 0 ; [#uses=1 type=i32*]
  %57 = load i32* %55                             ; [#uses=1 type=i32]
  store volatile i32 %57, i32* %56
  %58 = getelementptr [3 x i32]* %53, i32 0, i32 1 ; [#uses=1 type=i32*]
  %59 = getelementptr [3 x i32]* %54, i32 0, i32 1 ; [#uses=1 type=i32*]
  %60 = load i32* %58                             ; [#uses=1 type=i32]
  store volatile i32 %60, i32* %59
  %61 = getelementptr [3 x i32]* %53, i32 0, i32 2 ; [#uses=1 type=i32*]
  %62 = getelementptr [3 x i32]* %54, i32 0, i32 2 ; [#uses=1 type=i32*]
  %63 = load i32* %61                             ; [#uses=1 type=i32]
  store volatile i32 %63, i32* %62
  %64 = getelementptr %struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 2 ; [#uses=3 type=[3 x i32]*]
  %65 = getelementptr %struct.__spir_rt_info_tT* %.cast.i, i32 0, i32 2 ; [#uses=3 type=[3 x i32]*]
  %66 = getelementptr [3 x i32]* %64, i32 0, i32 0 ; [#uses=1 type=i32*]
  %67 = getelementptr [3 x i32]* %65, i32 0, i32 0 ; [#uses=1 type=i32*]
  %68 = load i32* %66                             ; [#uses=1 type=i32]
  store volatile i32 %68, i32* %67
  %69 = getelementptr [3 x i32]* %64, i32 0, i32 1 ; [#uses=1 type=i32*]
  %70 = getelementptr [3 x i32]* %65, i32 0, i32 1 ; [#uses=1 type=i32*]
  %71 = load i32* %69                             ; [#uses=1 type=i32]
  store volatile i32 %71, i32* %70
  %72 = getelementptr [3 x i32]* %64, i32 0, i32 2 ; [#uses=1 type=i32*]
  %73 = getelementptr [3 x i32]* %65, i32 0, i32 2 ; [#uses=1 type=i32*]
  %74 = load i32* %72                             ; [#uses=1 type=i32]
  store volatile i32 %74, i32* %73
  %75 = getelementptr %struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 3 ; [#uses=3 type=[3 x i32]*]
  %76 = getelementptr %struct.__spir_rt_info_tT* %.cast.i, i32 0, i32 3 ; [#uses=3 type=[3 x i32]*]
  %77 = getelementptr [3 x i32]* %75, i32 0, i32 0 ; [#uses=1 type=i32*]
  %78 = getelementptr [3 x i32]* %76, i32 0, i32 0 ; [#uses=1 type=i32*]
  %79 = load i32* %77                             ; [#uses=1 type=i32]
  store volatile i32 %79, i32* %78
  %80 = getelementptr [3 x i32]* %75, i32 0, i32 1 ; [#uses=1 type=i32*]
  %81 = getelementptr [3 x i32]* %76, i32 0, i32 1 ; [#uses=1 type=i32*]
  %82 = load i32* %80                             ; [#uses=1 type=i32]
  store volatile i32 %82, i32* %81
  %83 = getelementptr [3 x i32]* %75, i32 0, i32 2 ; [#uses=1 type=i32*]
  %84 = getelementptr [3 x i32]* %76, i32 0, i32 2 ; [#uses=1 type=i32*]
  %85 = load i32* %83                             ; [#uses=1 type=i32]
  store volatile i32 %85, i32* %84
  %86 = getelementptr %struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 4 ; [#uses=3 type=[3 x i32]*]
  %87 = getelementptr %struct.__spir_rt_info_tT* %.cast.i, i32 0, i32 4 ; [#uses=3 type=[3 x i32]*]
  %88 = getelementptr [3 x i32]* %86, i32 0, i32 0 ; [#uses=1 type=i32*]
  %89 = getelementptr [3 x i32]* %87, i32 0, i32 0 ; [#uses=1 type=i32*]
  %90 = load i32* %88                             ; [#uses=1 type=i32]
  store volatile i32 %90, i32* %89
  %91 = getelementptr [3 x i32]* %86, i32 0, i32 1 ; [#uses=1 type=i32*]
  %92 = getelementptr [3 x i32]* %87, i32 0, i32 1 ; [#uses=1 type=i32*]
  %93 = load i32* %91                             ; [#uses=1 type=i32]
  store volatile i32 %93, i32* %92
  %94 = getelementptr [3 x i32]* %86, i32 0, i32 2 ; [#uses=1 type=i32*]
  %95 = getelementptr [3 x i32]* %87, i32 0, i32 2 ; [#uses=1 type=i32*]
  %96 = load i32* %94                             ; [#uses=1 type=i32]
  store volatile i32 %96, i32* %95
  %97 = getelementptr %struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 5 ; [#uses=3 type=[3 x i32]*]
  %98 = getelementptr %struct.__spir_rt_info_tT* %.cast.i, i32 0, i32 5 ; [#uses=3 type=[3 x i32]*]
  %99 = getelementptr [3 x i32]* %97, i32 0, i32 0 ; [#uses=1 type=i32*]
  %100 = getelementptr [3 x i32]* %98, i32 0, i32 0 ; [#uses=1 type=i32*]
  %101 = load i32* %99                            ; [#uses=1 type=i32]
  store volatile i32 %101, i32* %100
  %102 = getelementptr [3 x i32]* %97, i32 0, i32 1 ; [#uses=1 type=i32*]
  %103 = getelementptr [3 x i32]* %98, i32 0, i32 1 ; [#uses=1 type=i32*]
  %104 = load i32* %102                           ; [#uses=1 type=i32]
  store volatile i32 %104, i32* %103
  %105 = getelementptr [3 x i32]* %97, i32 0, i32 2 ; [#uses=1 type=i32*]
  %106 = getelementptr [3 x i32]* %98, i32 0, i32 2 ; [#uses=1 type=i32*]
  %107 = load i32* %105                           ; [#uses=1 type=i32]
  store volatile i32 %107, i32* %106
  %108 = getelementptr %struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 6 ; [#uses=3 type=[3 x i32]*]
  %109 = getelementptr %struct.__spir_rt_info_tT* %.cast.i, i32 0, i32 6 ; [#uses=3 type=[3 x i32]*]
  %110 = getelementptr [3 x i32]* %108, i32 0, i32 0 ; [#uses=1 type=i32*]
  %111 = getelementptr [3 x i32]* %109, i32 0, i32 0 ; [#uses=1 type=i32*]
  %112 = load i32* %110                           ; [#uses=1 type=i32]
  store volatile i32 %112, i32* %111
  %113 = getelementptr [3 x i32]* %108, i32 0, i32 1 ; [#uses=1 type=i32*]
  %114 = getelementptr [3 x i32]* %109, i32 0, i32 1 ; [#uses=1 type=i32*]
  %115 = load i32* %113                           ; [#uses=1 type=i32]
  store volatile i32 %115, i32* %114
  %116 = getelementptr [3 x i32]* %108, i32 0, i32 2 ; [#uses=1 type=i32*]
  %117 = getelementptr [3 x i32]* %109, i32 0, i32 2 ; [#uses=1 type=i32*]
  %118 = load i32* %116                           ; [#uses=1 type=i32]
  store volatile i32 %118, i32* %117
  %119 = getelementptr %struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 7 ; [#uses=3 type=[3 x i32]*]
  %120 = getelementptr %struct.__spir_rt_info_tT* %.cast.i, i32 0, i32 7 ; [#uses=3 type=[3 x i32]*]
  %121 = getelementptr [3 x i32]* %119, i32 0, i32 0 ; [#uses=1 type=i32*]
  %122 = getelementptr [3 x i32]* %120, i32 0, i32 0 ; [#uses=1 type=i32*]
  %123 = load i32* %121                           ; [#uses=1 type=i32]
  store volatile i32 %123, i32* %122
  %124 = getelementptr [3 x i32]* %119, i32 0, i32 1 ; [#uses=1 type=i32*]
  %125 = getelementptr [3 x i32]* %120, i32 0, i32 1 ; [#uses=1 type=i32*]
  %126 = load i32* %124                           ; [#uses=1 type=i32]
  store volatile i32 %126, i32* %125
  %127 = getelementptr [3 x i32]* %119, i32 0, i32 2 ; [#uses=1 type=i32*]
  %128 = getelementptr [3 x i32]* %120, i32 0, i32 2 ; [#uses=1 type=i32*]
  %129 = load i32* %127                           ; [#uses=1 type=i32]
  store volatile i32 %129, i32* %128
  %130 = getelementptr %struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 8 ; [#uses=1 type=i8**]
  %131 = getelementptr %struct.__spir_rt_info_tT* %.cast.i, i32 0, i32 8 ; [#uses=1 type=i8**]
  %132 = load i8** %130                           ; [#uses=1 type=i8*]
  %133 = bitcast i8* %132 to i8*                  ; [#uses=1 type=i8*]
  store volatile i8* %133, i8** %131
  %134 = getelementptr %struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 9 ; [#uses=1 type=i1*]
  %135 = getelementptr %struct.__spir_rt_info_tT* %.cast.i, i32 0, i32 9 ; [#uses=1 type=i8*]
  %136 = load i1* %134                            ; [#uses=1 type=i1]
  %137 = zext i1 %136 to i8                       ; [#uses=1 type=i8]
  store volatile i8 %137, i8* %135
  %138 = getelementptr %struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 10 ; [#uses=1 type=i8**]
  %139 = getelementptr %struct.__spir_rt_info_tT* %.cast.i, i32 0, i32 10 ; [#uses=1 type=i8**]
  %140 = load i8** %138                           ; [#uses=1 type=i8*]
  %141 = bitcast i8* %140 to i8*                  ; [#uses=1 type=i8*]
  store volatile i8* %141, i8** %139
  %142 = getelementptr %struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 11 ; [#uses=1 type=i8**]
  %143 = getelementptr %struct.__spir_rt_info_tT* %.cast.i, i32 0, i32 11 ; [#uses=1 type=i8**]
  %144 = load i8** %142                           ; [#uses=1 type=i8*]
  %145 = bitcast i8* %144 to i8*                  ; [#uses=1 type=i8*]
  store volatile i8* %145, i8** %143
  %146 = getelementptr %struct.__spir_rt_info_tT.1* @rt_info, i32 0, i32 12 ; [#uses=1 type=i64*]
  %147 = getelementptr %struct.__spir_rt_info_tT* %.cast.i, i32 0, i32 12 ; [#uses=1 type=i64*]
  %148 = load i64* %146                           ; [#uses=1 type=i64]
  %149 = bitcast i64 %148 to i64                  ; [#uses=1 type=i64]
  store volatile i64 %149, i64* %147
  %150 = bitcast [1024 x float]* %z1.i.i to i8*, !dbg !166 ; [#uses=0 type=i8*] [debug line = 41:8]
  %151 = bitcast [1024 x float]* %a1.i.i to i8*, !dbg !166 ; [#uses=0 type=i8*] [debug line = 41:8]
  %152 = bitcast [1024 x float]* %z2.i.i to i8*, !dbg !166 ; [#uses=0 type=i8*] [debug line = 41:8]
  %153 = bitcast [1024 x float]* %a2.i.i to i8*, !dbg !166 ; [#uses=0 type=i8*] [debug line = 41:8]
  %154 = bitcast [10 x float]* %z3.i.i to i8*, !dbg !166 ; [#uses=0 type=i8*] [debug line = 41:8]
  %155 = bitcast [10 x float]* %a3.i.i to i8*, !dbg !166 ; [#uses=0 type=i8*] [debug line = 41:8]
  call spir_func void @llvm.dbg.declare(metadata !{[1024 x float]* %z2.i.i}, metadata !168) nounwind, !dbg !166 ; [debug line = 41:8] [debug variable = z2]
  call spir_func void @llvm.dbg.declare(metadata !{[1024 x float]* %a2.i.i}, metadata !172) nounwind, !dbg !173 ; [debug line = 42:8] [debug variable = a2]
  call spir_func void @llvm.dbg.declare(metadata !{[10 x float]* %z3.i.i}, metadata !174) nounwind, !dbg !178 ; [debug line = 58:8] [debug variable = z3]
  call spir_func void @llvm.dbg.declare(metadata !{[10 x float]* %a3.i.i}, metadata !179) nounwind, !dbg !180 ; [debug line = 59:8] [debug variable = a3]
  call spir_func void @llvm.dbg.declare(metadata !{[1024 x float]* %z1.i.i}, metadata !181) nounwind, !dbg !182 ; [debug line = 21:8] [debug variable = z1]
  call spir_func void @llvm.dbg.declare(metadata !{[1024 x float]* %a1.i.i}, metadata !183) nounwind, !dbg !184 ; [debug line = 22:8] [debug variable = a1]
  br label %156, !dbg !185                        ; [debug line = 25:22]

; <label>:156                                     ; preds = %_Z4reluf.exit.i.i, %0
  %j.0.reg2mem102.0.i.i = phi i32 [ 0, %0 ], [ %.reg2mem63.0.i.i, %_Z4reluf.exit.i.i ] ; [#uses=9 type=i32]
  %157 = icmp slt i32 %j.0.reg2mem102.0.i.i, 1024, !dbg !185 ; [#uses=1 type=i1] [debug line = 25:22]
  br i1 %157, label %158, label %195, !dbg !185   ; [debug line = 25:22]

; <label>:158                                     ; preds = %156
  call spir_func void (...)* @_Z21_ssdm_op_SpecLoopNamez(i8* getelementptr inbounds ([8 x i8]* @.str, i64 0, i64 0)) nounwind, !dbg !187 ; [debug line = 25:36]
  call spir_func void (...)* @_Z17_ssdm_RegionBeginz(i8* getelementptr inbounds ([8 x i8]* @.str, i64 0, i64 0)) nounwind, !dbg !187 ; [debug line = 25:36]
  %159 = sext i32 %j.0.reg2mem102.0.i.i to i64, !dbg !189 ; [#uses=1 type=i64] [debug line = 27:3]
  %160 = getelementptr inbounds [1024 x float]* %z1.i.i, i64 0, i64 %159, !dbg !189 ; [#uses=1 type=float*] [debug line = 27:3]
  store float 0.000000e+00, float* %160, align 4, !dbg !189 ; [debug line = 27:3]
  br label %161, !dbg !190                        ; [debug line = 28:15]

; <label>:161                                     ; preds = %163, %158
  %i.0.reg2mem100.0.i.i = phi i32 [ 0, %158 ], [ %.reg2mem66.0.i.i, %163 ] ; [#uses=5 type=i32]
  %162 = icmp slt i32 %i.0.reg2mem100.0.i.i, 784, !dbg !190 ; [#uses=1 type=i1] [debug line = 28:15]
  br i1 %162, label %163, label %_Z4reluf.exit.i.i, !dbg !190 ; [debug line = 28:15]

; <label>:163                                     ; preds = %161
  %164 = shl nsw i32 %i.0.reg2mem100.0.i.i, 10, !dbg !192 ; [#uses=1 type=i32] [debug line = 32:4]
  %165 = add nsw i32 %164, %j.0.reg2mem102.0.i.i, !dbg !192 ; [#uses=1 type=i32] [debug line = 32:4]
  %166 = sext i32 %165 to i64, !dbg !192          ; [#uses=1 type=i64] [debug line = 32:4]
  %gep_idx60.i.i = and i64 %166, 4611686018427387903 ; [#uses=1 type=i64]
  %167 = getelementptr i32 addrspace(1)* %arg_w01.i.0, i64 %gep_idx60.i.i ; [#uses=1 type=i32 addrspace(1)*]
  %168 = load i32 addrspace(1)* %167, align 4     ; [#uses=1 type=i32]
  %169 = bitcast i32 %168 to float                ; [#uses=1 type=float]
  %170 = sext i32 %i.0.reg2mem100.0.i.i to i64, !dbg !192 ; [#uses=1 type=i64] [debug line = 32:4]
  %bus_addr70.i.i = lshr i64 %170, 2              ; [#uses=1 type=i64]
  %171 = getelementptr i32 addrspace(1)* %arg_src_data.i.0, i64 %bus_addr70.i.i ; [#uses=1 type=i32 addrspace(1)*]
  %172 = load i32 addrspace(1)* %171, align 1     ; [#uses=1 type=i32]
  %offset71.i.i = shl i32 %i.0.reg2mem100.0.i.i, 3 ; [#uses=1 type=i32]
  %start.i.i = and i32 %offset71.i.i, 24          ; [#uses=2 type=i32]
  %stop12.i.i = or i32 %start.i.i, 7              ; [#uses=1 type=i32]
  %.part.i.i = call spir_func i32 @_ssdm_op_PartSelect.i32.i32.i32.i32(i32 %172, i32 %start.i.i, i32 %stop12.i.i) nounwind ; [#uses=1 type=i32]
  %173 = trunc i32 %.part.i.i to i8               ; [#uses=1 type=i8]
  %174 = zext i8 %173 to i32, !dbg !192           ; [#uses=1 type=i32] [debug line = 32:4]
  %175 = sitofp i32 %174 to float, !dbg !192      ; [#uses=1 type=float] [debug line = 32:4]
  %176 = fmul float %169, %175, !dbg !192         ; [#uses=1 type=float] [debug line = 32:4]
  %177 = fdiv float %176, 2.550000e+02, !dbg !192, !fpmath !194 ; [#uses=1 type=float] [debug line = 32:4]
  %178 = sext i32 %j.0.reg2mem102.0.i.i to i64, !dbg !192 ; [#uses=1 type=i64] [debug line = 32:4]
  %179 = getelementptr inbounds [1024 x float]* %z1.i.i, i64 0, i64 %178, !dbg !192 ; [#uses=2 type=float*] [debug line = 32:4]
  %180 = load float* %179, align 4, !dbg !192     ; [#uses=1 type=float] [debug line = 32:4]
  %181 = fadd float %180, %177, !dbg !192         ; [#uses=1 type=float] [debug line = 32:4]
  store float %181, float* %179, align 4, !dbg !192 ; [debug line = 32:4]
  %.reg2mem66.0.i.i = add nsw i32 %i.0.reg2mem100.0.i.i, 1, !dbg !195 ; [#uses=1 type=i32] [debug line = 28:26]
  br label %161, !dbg !195                        ; [debug line = 28:26]

_Z4reluf.exit.i.i:                                ; preds = %161
  %182 = sext i32 %j.0.reg2mem102.0.i.i to i64, !dbg !196 ; [#uses=1 type=i64] [debug line = 35:3]
  %gep_idx52.i.i = and i64 %182, 4611686018427387903 ; [#uses=1 type=i64]
  %183 = getelementptr i32 addrspace(1)* %arg_b1.i.0, i64 %gep_idx52.i.i ; [#uses=1 type=i32 addrspace(1)*]
  %184 = load i32 addrspace(1)* %183, align 4     ; [#uses=1 type=i32]
  %185 = bitcast i32 %184 to float                ; [#uses=1 type=float]
  %186 = sext i32 %j.0.reg2mem102.0.i.i to i64, !dbg !196 ; [#uses=1 type=i64] [debug line = 35:3]
  %187 = getelementptr inbounds [1024 x float]* %z1.i.i, i64 0, i64 %186, !dbg !196 ; [#uses=2 type=float*] [debug line = 35:3]
  %188 = load float* %187, align 4, !dbg !196     ; [#uses=1 type=float] [debug line = 35:3]
  %189 = fadd float %188, %185, !dbg !196         ; [#uses=1 type=float] [debug line = 35:3]
  store float %189, float* %187, align 4, !dbg !196 ; [debug line = 35:3]
  %190 = sext i32 %j.0.reg2mem102.0.i.i to i64, !dbg !197 ; [#uses=1 type=i64] [debug line = 38:9]
  %191 = getelementptr inbounds [1024 x float]* %z1.i.i, i64 0, i64 %190, !dbg !197 ; [#uses=1 type=float*] [debug line = 38:9]
  %.08.reg2mem.0.i.i = load float* %191, align 4, !dbg !197 ; [#uses=2 type=float] [debug line = 38:9]
  %192 = fcmp ogt float %.08.reg2mem.0.i.i, 0.000000e+00, !dbg !198 ; [#uses=1 type=i1] [debug line = 3:2@38:9]
  %.reg2mem5.0.reg2mem.0.i.i = select i1 %192, float %.08.reg2mem.0.i.i, float 0.000000e+00, !dbg !198 ; [#uses=1 type=float] [debug line = 3:2@38:9]
  %193 = sext i32 %j.0.reg2mem102.0.i.i to i64, !dbg !197 ; [#uses=1 type=i64] [debug line = 38:9]
  %194 = getelementptr inbounds [1024 x float]* %a1.i.i, i64 0, i64 %193, !dbg !197 ; [#uses=1 type=float*] [debug line = 38:9]
  store float %.reg2mem5.0.reg2mem.0.i.i, float* %194, align 4, !dbg !197 ; [debug line = 38:9]
  call spir_func void (...)* @_Z15_ssdm_RegionEndz(i8* getelementptr inbounds ([8 x i8]* @.str, i64 0, i64 0)) nounwind, !dbg !200 ; [debug line = 39:2]
  %.reg2mem63.0.i.i = add nsw i32 %j.0.reg2mem102.0.i.i, 1, !dbg !201 ; [#uses=1 type=i32] [debug line = 25:30]
  br label %156, !dbg !201                        ; [debug line = 25:30]

; <label>:195                                     ; preds = %_Z4reluf.exit1.i.i, %156
  %j1.0.reg2mem98.0.i.i = phi i32 [ %.reg2mem47.0.i.i, %_Z4reluf.exit1.i.i ], [ 0, %156 ] ; [#uses=9 type=i32]
  %196 = icmp slt i32 %j1.0.reg2mem98.0.i.i, 1024, !dbg !202 ; [#uses=1 type=i1] [debug line = 44:22]
  br i1 %196, label %197, label %230, !dbg !202   ; [debug line = 44:22]

; <label>:197                                     ; preds = %195
  call spir_func void (...)* @_Z21_ssdm_op_SpecLoopNamez(i8* getelementptr inbounds ([8 x i8]* @.str1, i64 0, i64 0)) nounwind, !dbg !204 ; [debug line = 44:36]
  call spir_func void (...)* @_Z17_ssdm_RegionBeginz(i8* getelementptr inbounds ([8 x i8]* @.str1, i64 0, i64 0)) nounwind, !dbg !204 ; [debug line = 44:36]
  %198 = sext i32 %j1.0.reg2mem98.0.i.i to i64, !dbg !206 ; [#uses=1 type=i64] [debug line = 46:3]
  %199 = getelementptr inbounds [1024 x float]* %z2.i.i, i64 0, i64 %198, !dbg !206 ; [#uses=1 type=float*] [debug line = 46:3]
  store float 0.000000e+00, float* %199, align 4, !dbg !206 ; [debug line = 46:3]
  br label %200, !dbg !207                        ; [debug line = 47:15]

; <label>:200                                     ; preds = %202, %197
  %i2.0.reg2mem96.0.i.i = phi i32 [ 0, %197 ], [ %.reg2mem50.0.i.i, %202 ] ; [#uses=4 type=i32]
  %201 = icmp slt i32 %i2.0.reg2mem96.0.i.i, 1024, !dbg !207 ; [#uses=1 type=i1] [debug line = 47:15]
  br i1 %201, label %202, label %_Z4reluf.exit1.i.i, !dbg !207 ; [debug line = 47:15]

; <label>:202                                     ; preds = %200
  %203 = shl nsw i32 %i2.0.reg2mem96.0.i.i, 10, !dbg !209 ; [#uses=1 type=i32] [debug line = 50:4]
  %204 = add nsw i32 %203, %j1.0.reg2mem98.0.i.i, !dbg !209 ; [#uses=1 type=i32] [debug line = 50:4]
  %205 = sext i32 %204 to i64, !dbg !209          ; [#uses=1 type=i64] [debug line = 50:4]
  %gep_idx44.i.i = and i64 %205, 4611686018427387903 ; [#uses=1 type=i64]
  %206 = getelementptr i32 addrspace(1)* %arg_w12.i.0, i64 %gep_idx44.i.i ; [#uses=1 type=i32 addrspace(1)*]
  %207 = load i32 addrspace(1)* %206, align 4     ; [#uses=1 type=i32]
  %208 = bitcast i32 %207 to float                ; [#uses=1 type=float]
  %209 = sext i32 %i2.0.reg2mem96.0.i.i to i64, !dbg !209 ; [#uses=1 type=i64] [debug line = 50:4]
  %210 = getelementptr inbounds [1024 x float]* %a1.i.i, i64 0, i64 %209, !dbg !209 ; [#uses=1 type=float*] [debug line = 50:4]
  %211 = load float* %210, align 4, !dbg !209     ; [#uses=1 type=float] [debug line = 50:4]
  %212 = fmul float %208, %211, !dbg !209         ; [#uses=1 type=float] [debug line = 50:4]
  %213 = sext i32 %j1.0.reg2mem98.0.i.i to i64, !dbg !209 ; [#uses=1 type=i64] [debug line = 50:4]
  %214 = getelementptr inbounds [1024 x float]* %z2.i.i, i64 0, i64 %213, !dbg !209 ; [#uses=2 type=float*] [debug line = 50:4]
  %215 = load float* %214, align 4, !dbg !209     ; [#uses=1 type=float] [debug line = 50:4]
  %216 = fadd float %215, %212, !dbg !209         ; [#uses=1 type=float] [debug line = 50:4]
  store float %216, float* %214, align 4, !dbg !209 ; [debug line = 50:4]
  %.reg2mem50.0.i.i = add nsw i32 %i2.0.reg2mem96.0.i.i, 1, !dbg !211 ; [#uses=1 type=i32] [debug line = 47:23]
  br label %200, !dbg !211                        ; [debug line = 47:23]

_Z4reluf.exit1.i.i:                               ; preds = %200
  %217 = sext i32 %j1.0.reg2mem98.0.i.i to i64, !dbg !212 ; [#uses=1 type=i64] [debug line = 53:3]
  %gep_idx36.i.i = and i64 %217, 4611686018427387903 ; [#uses=1 type=i64]
  %218 = getelementptr i32 addrspace(1)* %arg_b2.i.0, i64 %gep_idx36.i.i ; [#uses=1 type=i32 addrspace(1)*]
  %219 = load i32 addrspace(1)* %218, align 4     ; [#uses=1 type=i32]
  %220 = bitcast i32 %219 to float                ; [#uses=1 type=float]
  %221 = sext i32 %j1.0.reg2mem98.0.i.i to i64, !dbg !212 ; [#uses=1 type=i64] [debug line = 53:3]
  %222 = getelementptr inbounds [1024 x float]* %z2.i.i, i64 0, i64 %221, !dbg !212 ; [#uses=2 type=float*] [debug line = 53:3]
  %223 = load float* %222, align 4, !dbg !212     ; [#uses=1 type=float] [debug line = 53:3]
  %224 = fadd float %223, %220, !dbg !212         ; [#uses=1 type=float] [debug line = 53:3]
  store float %224, float* %222, align 4, !dbg !212 ; [debug line = 53:3]
  %225 = sext i32 %j1.0.reg2mem98.0.i.i to i64, !dbg !213 ; [#uses=1 type=i64] [debug line = 56:9]
  %226 = getelementptr inbounds [1024 x float]* %z2.i.i, i64 0, i64 %225, !dbg !213 ; [#uses=1 type=float*] [debug line = 56:9]
  %.09.reg2mem.0.i.i = load float* %226, align 4, !dbg !213 ; [#uses=2 type=float] [debug line = 56:9]
  %227 = fcmp ogt float %.09.reg2mem.0.i.i, 0.000000e+00, !dbg !214 ; [#uses=1 type=i1] [debug line = 3:2@56:9]
  %.reg2mem3.0.reg2mem.0.i.i = select i1 %227, float %.09.reg2mem.0.i.i, float 0.000000e+00, !dbg !214 ; [#uses=1 type=float] [debug line = 3:2@56:9]
  %228 = sext i32 %j1.0.reg2mem98.0.i.i to i64, !dbg !213 ; [#uses=1 type=i64] [debug line = 56:9]
  %229 = getelementptr inbounds [1024 x float]* %a2.i.i, i64 0, i64 %228, !dbg !213 ; [#uses=1 type=float*] [debug line = 56:9]
  store float %.reg2mem3.0.reg2mem.0.i.i, float* %229, align 4, !dbg !213 ; [debug line = 56:9]
  call spir_func void (...)* @_Z15_ssdm_RegionEndz(i8* getelementptr inbounds ([8 x i8]* @.str1, i64 0, i64 0)) nounwind, !dbg !215 ; [debug line = 57:2]
  %.reg2mem47.0.i.i = add nsw i32 %j1.0.reg2mem98.0.i.i, 1, !dbg !216 ; [#uses=1 type=i32] [debug line = 44:30]
  br label %195, !dbg !216                        ; [debug line = 44:30]

; <label>:230                                     ; preds = %252, %195
  %j3.0.reg2mem94.0.i.i = phi i32 [ %.reg2mem34.0.i.i, %252 ], [ 0, %195 ] ; [#uses=7 type=i32]
  %231 = icmp slt i32 %j3.0.reg2mem94.0.i.i, 10, !dbg !217 ; [#uses=1 type=i1] [debug line = 61:22]
  br i1 %231, label %232, label %261, !dbg !217   ; [debug line = 61:22]

; <label>:232                                     ; preds = %230
  call spir_func void (...)* @_Z21_ssdm_op_SpecLoopNamez(i8* getelementptr inbounds ([8 x i8]* @.str2, i64 0, i64 0)) nounwind, !dbg !219 ; [debug line = 61:40]
  call spir_func void (...)* @_Z17_ssdm_RegionBeginz(i8* getelementptr inbounds ([8 x i8]* @.str2, i64 0, i64 0)) nounwind, !dbg !219 ; [debug line = 61:40]
  %233 = sext i32 %j3.0.reg2mem94.0.i.i to i64, !dbg !221 ; [#uses=1 type=i64] [debug line = 63:3]
  %234 = getelementptr inbounds [10 x float]* %z3.i.i, i64 0, i64 %233, !dbg !221 ; [#uses=1 type=float*] [debug line = 63:3]
  store float 0.000000e+00, float* %234, align 4, !dbg !221 ; [debug line = 63:3]
  br label %235, !dbg !222                        ; [debug line = 64:15]

; <label>:235                                     ; preds = %237, %232
  %i4.0.reg2mem92.0.i.i = phi i32 [ 0, %232 ], [ %.reg2mem36.0.i.i, %237 ] ; [#uses=4 type=i32]
  %236 = icmp slt i32 %i4.0.reg2mem92.0.i.i, 1024, !dbg !222 ; [#uses=1 type=i1] [debug line = 64:15]
  br i1 %236, label %237, label %252, !dbg !222   ; [debug line = 64:15]

; <label>:237                                     ; preds = %235
  %238 = mul nsw i32 %i4.0.reg2mem92.0.i.i, 10, !dbg !224 ; [#uses=1 type=i32] [debug line = 67:4]
  %239 = add nsw i32 %238, %j3.0.reg2mem94.0.i.i, !dbg !224 ; [#uses=1 type=i32] [debug line = 67:4]
  %240 = sext i32 %239 to i64, !dbg !224          ; [#uses=1 type=i64] [debug line = 67:4]
  %gep_idx28.i.i = and i64 %240, 4611686018427387903 ; [#uses=1 type=i64]
  %241 = getelementptr i32 addrspace(1)* %arg_w23.i.0, i64 %gep_idx28.i.i ; [#uses=1 type=i32 addrspace(1)*]
  %242 = load i32 addrspace(1)* %241, align 4     ; [#uses=1 type=i32]
  %243 = bitcast i32 %242 to float                ; [#uses=1 type=float]
  %244 = sext i32 %i4.0.reg2mem92.0.i.i to i64, !dbg !224 ; [#uses=1 type=i64] [debug line = 67:4]
  %245 = getelementptr inbounds [1024 x float]* %a2.i.i, i64 0, i64 %244, !dbg !224 ; [#uses=1 type=float*] [debug line = 67:4]
  %246 = load float* %245, align 4, !dbg !224     ; [#uses=1 type=float] [debug line = 67:4]
  %247 = fmul float %243, %246, !dbg !224         ; [#uses=1 type=float] [debug line = 67:4]
  %248 = sext i32 %j3.0.reg2mem94.0.i.i to i64, !dbg !224 ; [#uses=1 type=i64] [debug line = 67:4]
  %249 = getelementptr inbounds [10 x float]* %z3.i.i, i64 0, i64 %248, !dbg !224 ; [#uses=2 type=float*] [debug line = 67:4]
  %250 = load float* %249, align 4, !dbg !224     ; [#uses=1 type=float] [debug line = 67:4]
  %251 = fadd float %250, %247, !dbg !224         ; [#uses=1 type=float] [debug line = 67:4]
  store float %251, float* %249, align 4, !dbg !224 ; [debug line = 67:4]
  %.reg2mem36.0.i.i = add nsw i32 %i4.0.reg2mem92.0.i.i, 1, !dbg !226 ; [#uses=1 type=i32] [debug line = 64:23]
  br label %235, !dbg !226                        ; [debug line = 64:23]

; <label>:252                                     ; preds = %235
  %253 = sext i32 %j3.0.reg2mem94.0.i.i to i64, !dbg !227 ; [#uses=1 type=i64] [debug line = 70:3]
  %gep_idx20.i.i = and i64 %253, 4611686018427387903 ; [#uses=1 type=i64]
  %254 = getelementptr i32 addrspace(1)* %arg_b3.i.0, i64 %gep_idx20.i.i ; [#uses=1 type=i32 addrspace(1)*]
  %255 = load i32 addrspace(1)* %254, align 4     ; [#uses=1 type=i32]
  %256 = bitcast i32 %255 to float                ; [#uses=1 type=float]
  %257 = sext i32 %j3.0.reg2mem94.0.i.i to i64, !dbg !227 ; [#uses=1 type=i64] [debug line = 70:3]
  %258 = getelementptr inbounds [10 x float]* %z3.i.i, i64 0, i64 %257, !dbg !227 ; [#uses=2 type=float*] [debug line = 70:3]
  %259 = load float* %258, align 4, !dbg !227     ; [#uses=1 type=float] [debug line = 70:3]
  %260 = fadd float %259, %256, !dbg !227         ; [#uses=1 type=float] [debug line = 70:3]
  store float %260, float* %258, align 4, !dbg !227 ; [debug line = 70:3]
  call spir_func void (...)* @_Z15_ssdm_RegionEndz(i8* getelementptr inbounds ([8 x i8]* @.str2, i64 0, i64 0)) nounwind, !dbg !228 ; [debug line = 71:2]
  %.reg2mem34.0.i.i = add nsw i32 %j3.0.reg2mem94.0.i.i, 1, !dbg !229 ; [#uses=1 type=i32] [debug line = 61:34]
  br label %230, !dbg !229                        ; [debug line = 61:34]

; <label>:261                                     ; preds = %._crit_edge.i.i, %230
  %i5.0.reg2mem88.0.i.i = phi i32 [ %.reg2mem25.0.i.i, %._crit_edge.i.i ], [ 0, %230 ] ; [#uses=4 type=i32]
  %max.0.reg2mem90.0.i.i = phi float [ %max.1.reg2mem86.0.i.i, %._crit_edge.i.i ], [ 0.000000e+00, %230 ] ; [#uses=3 type=float]
  %262 = icmp slt i32 %i5.0.reg2mem88.0.i.i, 10, !dbg !230 ; [#uses=1 type=i1] [debug line = 78:29]
  br i1 %262, label %263, label %271, !dbg !230   ; [debug line = 78:29]

; <label>:263                                     ; preds = %261
  call spir_func void (...)* @_Z21_ssdm_op_SpecLoopNamez(i8* getelementptr inbounds ([15 x i8]* @.str3, i64 0, i64 0)) nounwind, !dbg !232 ; [debug line = 78:48]
  call spir_func void (...)* @_Z17_ssdm_RegionBeginz(i8* getelementptr inbounds ([15 x i8]* @.str3, i64 0, i64 0)) nounwind, !dbg !232 ; [debug line = 78:48]
  %264 = sext i32 %i5.0.reg2mem88.0.i.i to i64, !dbg !232 ; [#uses=1 type=i64] [debug line = 78:48]
  %265 = getelementptr inbounds [10 x float]* %z3.i.i, i64 0, i64 %264, !dbg !232 ; [#uses=1 type=float*] [debug line = 78:48]
  %266 = load float* %265, align 4, !dbg !232     ; [#uses=1 type=float] [debug line = 78:48]
  %267 = fcmp olt float %max.0.reg2mem90.0.i.i, %266, !dbg !232 ; [#uses=1 type=i1] [debug line = 78:48]
  br i1 %267, label %268, label %._crit_edge.i.i, !dbg !232 ; [debug line = 78:48]

; <label>:268                                     ; preds = %263
  %269 = sext i32 %i5.0.reg2mem88.0.i.i to i64, !dbg !234 ; [#uses=1 type=i64] [debug line = 78:64]
  %270 = getelementptr inbounds [10 x float]* %z3.i.i, i64 0, i64 %269, !dbg !234 ; [#uses=1 type=float*] [debug line = 78:64]
  %.reg2mem27.0.i.i = load float* %270, align 4, !dbg !234 ; [#uses=1 type=float] [debug line = 78:64]
  br label %._crit_edge.i.i, !dbg !234            ; [debug line = 78:64]

._crit_edge.i.i:                                  ; preds = %268, %263
  %max.1.reg2mem86.0.i.i = phi float [ %.reg2mem27.0.i.i, %268 ], [ %max.0.reg2mem90.0.i.i, %263 ] ; [#uses=1 type=float]
  call spir_func void (...)* @_Z15_ssdm_RegionEndz(i8* getelementptr inbounds ([15 x i8]* @.str3, i64 0, i64 0)) nounwind, !dbg !235 ; [debug line = 78:74]
  %.reg2mem25.0.i.i = add nsw i32 %i5.0.reg2mem88.0.i.i, 1, !dbg !236 ; [#uses=1 type=i32] [debug line = 78:43]
  br label %261, !dbg !236                        ; [debug line = 78:43]

; <label>:271                                     ; preds = %273, %261
  %i6.0.reg2mem82.0.i.i = phi i32 [ %.reg2mem16.0.i.i, %273 ], [ 0, %261 ] ; [#uses=5 type=i32]
  %sum.0.reg2mem84.0.i.i = phi float [ %.reg2mem18.0.i.i, %273 ], [ 0.000000e+00, %261 ] ; [#uses=2 type=float]
  %272 = icmp slt i32 %i6.0.reg2mem82.0.i.i, 10, !dbg !237 ; [#uses=1 type=i1] [debug line = 79:23]
  br i1 %272, label %273, label %282, !dbg !237   ; [debug line = 79:23]

; <label>:273                                     ; preds = %271
  call spir_func void (...)* @_Z21_ssdm_op_SpecLoopNamez(i8* getelementptr inbounds ([9 x i8]* @.str4, i64 0, i64 0)) nounwind, !dbg !239 ; [debug line = 79:43]
  call spir_func void (...)* @_Z17_ssdm_RegionBeginz(i8* getelementptr inbounds ([9 x i8]* @.str4, i64 0, i64 0)) nounwind, !dbg !239 ; [debug line = 79:43]
  %274 = sext i32 %i6.0.reg2mem82.0.i.i to i64, !dbg !241 ; [#uses=1 type=i64] [debug line = 80:11]
  %275 = getelementptr inbounds [10 x float]* %z3.i.i, i64 0, i64 %274, !dbg !241 ; [#uses=1 type=float*] [debug line = 80:11]
  %276 = load float* %275, align 4, !dbg !241     ; [#uses=1 type=float] [debug line = 80:11]
  %.011.i.i = fsub float %276, %max.0.reg2mem90.0.i.i, !dbg !241 ; [#uses=1 type=float] [debug line = 80:11]
  %out.i.0.i.i = call spir_func float @expf(float %.011.i.i) nounwind ; [#uses=1 type=float]
  %277 = sext i32 %i6.0.reg2mem82.0.i.i to i64, !dbg !241 ; [#uses=1 type=i64] [debug line = 80:11]
  %278 = getelementptr inbounds [10 x float]* %a3.i.i, i64 0, i64 %277, !dbg !241 ; [#uses=1 type=float*] [debug line = 80:11]
  store float %out.i.0.i.i, float* %278, align 4, !dbg !241 ; [debug line = 80:11]
  %279 = sext i32 %i6.0.reg2mem82.0.i.i to i64, !dbg !242 ; [#uses=1 type=i64] [debug line = 81:3]
  %280 = getelementptr inbounds [10 x float]* %a3.i.i, i64 0, i64 %279, !dbg !242 ; [#uses=1 type=float*] [debug line = 81:3]
  %281 = load float* %280, align 4, !dbg !242     ; [#uses=1 type=float] [debug line = 81:3]
  %.reg2mem18.0.i.i = fadd float %sum.0.reg2mem84.0.i.i, %281, !dbg !242 ; [#uses=1 type=float] [debug line = 81:3]
  call spir_func void (...)* @_Z15_ssdm_RegionEndz(i8* getelementptr inbounds ([9 x i8]* @.str4, i64 0, i64 0)) nounwind, !dbg !243 ; [debug line = 82:2]
  %.reg2mem16.0.i.i = add nsw i32 %i6.0.reg2mem82.0.i.i, 1, !dbg !244 ; [#uses=1 type=i32] [debug line = 79:37]
  br label %271, !dbg !244                        ; [debug line = 79:37]

; <label>:282                                     ; preds = %284, %271
  %i7.0.reg2mem80.0.i.i = phi i32 [ %.reg2mem.0.i.i, %284 ], [ 0, %271 ] ; [#uses=4 type=i32]
  %283 = icmp slt i32 %i7.0.reg2mem80.0.i.i, 10, !dbg !245 ; [#uses=1 type=i1] [debug line = 85:27]
  br i1 %283, label %284, label %__AESL_call_work_item_NA13.exit, !dbg !245 ; [debug line = 85:27]

; <label>:284                                     ; preds = %282
  call spir_func void (...)* @_Z21_ssdm_op_SpecLoopNamez(i8* getelementptr inbounds ([13 x i8]* @.str5, i64 0, i64 0)) nounwind, !dbg !247 ; [debug line = 85:46]
  call spir_func void (...)* @_Z17_ssdm_RegionBeginz(i8* getelementptr inbounds ([13 x i8]* @.str5, i64 0, i64 0)) nounwind, !dbg !247 ; [debug line = 85:46]
  %285 = sext i32 %i7.0.reg2mem80.0.i.i to i64, !dbg !247 ; [#uses=1 type=i64] [debug line = 85:46]
  %286 = getelementptr inbounds [10 x float]* %a3.i.i, i64 0, i64 %285, !dbg !247 ; [#uses=1 type=float*] [debug line = 85:46]
  %287 = load float* %286, align 4, !dbg !247     ; [#uses=1 type=float] [debug line = 85:46]
  %288 = fdiv float %287, %sum.0.reg2mem84.0.i.i, !dbg !247, !fpmath !194 ; [#uses=1 type=float] [debug line = 85:46]
  %289 = sext i32 %i7.0.reg2mem80.0.i.i to i64, !dbg !247 ; [#uses=1 type=i64] [debug line = 85:46]
  %gep_idx.i.i = and i64 %289, 4611686018427387903 ; [#uses=1 type=i64]
  %290 = getelementptr i32 addrspace(1)* %arg_dst_data.i.0, i64 %gep_idx.i.i ; [#uses=1 type=i32 addrspace(1)*]
  %val.i.i = bitcast float %288 to i32            ; [#uses=1 type=i32]
  store i32 %val.i.i, i32 addrspace(1)* %290, align 4
  call spir_func void (...)* @_Z15_ssdm_RegionEndz(i8* getelementptr inbounds ([13 x i8]* @.str5, i64 0, i64 0)) nounwind, !dbg !249 ; [debug line = 85:66]
  %.reg2mem.0.i.i = add nsw i32 %i7.0.reg2mem80.0.i.i, 1, !dbg !250 ; [#uses=1 type=i32] [debug line = 85:41]
  br label %282, !dbg !250                        ; [debug line = 85:41]

__AESL_call_work_item_NA13.exit:                  ; preds = %282
  %291 = bitcast [1024 x float]* %z1.i.i to i8*, !dbg !251 ; [#uses=0 type=i8*] [debug line = 86:1]
  %292 = bitcast [1024 x float]* %a1.i.i to i8*, !dbg !251 ; [#uses=0 type=i8*] [debug line = 86:1]
  %293 = bitcast [1024 x float]* %z2.i.i to i8*, !dbg !251 ; [#uses=0 type=i8*] [debug line = 86:1]
  %294 = bitcast [1024 x float]* %a2.i.i to i8*, !dbg !251 ; [#uses=0 type=i8*] [debug line = 86:1]
  %295 = bitcast [10 x float]* %z3.i.i to i8*, !dbg !251 ; [#uses=0 type=i8*] [debug line = 86:1]
  %296 = bitcast [10 x float]* %a3.i.i to i8*, !dbg !251 ; [#uses=0 type=i8*] [debug line = 86:1]
  %297 = bitcast %struct.__spir_rt_info_tT* %.cast.i to i8*, !dbg !252 ; [#uses=0 type=i8*] [debug line = 61:3]
  ret void, !dbg !253                             ; [debug line = 78:1]
}

; [#uses=14]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

!llvm.dbg.cu = !{!0, !20}
!hls.encrypted.func = !{}
!xcl.libspir = !{!86}
!xcl.reqd_rt_info = !{!87}
!xcl.portmap = !{!88, !90, !91, !92, !93, !94, !95, !96}
!axi4.master.portmap = !{!97}
!xcl.portlist = !{!89, !98}
!xcl.lmem_info = !{}
!xcl.progvar_info = !{}

!0 = metadata !{i32 786449, i32 0, i32 12, metadata !"/home/h-ninomiya/SDAccel_Examples/vision/forward_aligned/src/krnl_forward.cl", metadata !"/home/h-ninomiya/SDAccel_Examples/vision/forward_aligned/_xocc_compile_krnl_forward_krnl_forward.sw_emu.xilinx_kcu1500_4ddr-xpr_4_0.dir/impl/kernels/forward_kernel", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !3, metadata !1} ; [ DW_TAG_compile_unit ]
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !5, metadata !12, metadata !13}
!5 = metadata !{i32 786478, i32 0, metadata !6, metadata !"relu", metadata !"relu", metadata !"_Z4reluf", metadata !6, i32 2, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !10, i32 2} ; [ DW_TAG_subprogram ]
!6 = metadata !{i32 786473, metadata !"/home/h-ninomiya/SDAccel_Examples/vision/forward_aligned/src/krnl_forward.cl", metadata !"/home/h-ninomiya/SDAccel_Examples/vision/forward_aligned/_xocc_compile_krnl_forward_krnl_forward.sw_emu.xilinx_kcu1500_4ddr-xpr_4_0.dir/impl/kernels/forward_kernel", null} ; [ DW_TAG_file_type ]
!7 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !8, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!8 = metadata !{metadata !9, metadata !9}
!9 = metadata !{i32 786468, null, metadata !"float", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 4} ; [ DW_TAG_base_type ]
!10 = metadata !{metadata !11}
!11 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!12 = metadata !{i32 786478, i32 0, metadata !6, metadata !"diff_relu", metadata !"diff_relu", metadata !"_Z9diff_reluf", metadata !6, i32 6, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !10, i32 6} ; [ DW_TAG_subprogram ]
!13 = metadata !{i32 786478, i32 0, metadata !6, metadata !"forward_kernel", metadata !"forward_kernel", metadata !"", metadata !6, i32 11, metadata !14, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !10, i32 20} ; [ DW_TAG_subprogram ]
!14 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !15, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!15 = metadata !{null, metadata !16, metadata !19, metadata !19, metadata !19, metadata !19, metadata !19, metadata !19, metadata !19}
!16 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !17} ; [ DW_TAG_pointer_type ]
!17 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !18} ; [ DW_TAG_const_type ]
!18 = metadata !{i32 786468, null, metadata !"unsigned char", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 8} ; [ DW_TAG_base_type ]
!19 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !9} ; [ DW_TAG_pointer_type ]
!20 = metadata !{i32 786449, i32 0, i32 4, metadata !"aesl_gen-tmpA.cpp", metadata !"/home/h-ninomiya/SDAccel_Examples/vision/forward_aligned/_xocc_compile_krnl_forward_krnl_forward.sw_emu.xilinx_kcu1500_4ddr-xpr_4_0.dir/impl/kernels/forward_kernel/forward_kernel/solution_OCL_REGION_0/.autopilot/db", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !21, metadata !82} ; [ DW_TAG_compile_unit ]
!21 = metadata !{metadata !22}
!22 = metadata !{metadata !23, metadata !78, metadata !81}
!23 = metadata !{i32 786478, i32 0, metadata !24, metadata !"__AESL_call_work_item_NA", metadata !"__AESL_call_work_item_NA", metadata !"", metadata !24, i32 50, metadata !25, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !10, i32 51} ; [ DW_TAG_subprogram ]
!24 = metadata !{i32 786473, metadata !"forward_kernel_compute_unit", metadata !"/home/h-ninomiya/SDAccel_Examples/vision/forward_aligned/_xocc_compile_krnl_forward_krnl_forward.sw_emu.xilinx_kcu1500_4ddr-xpr_4_0.dir/impl/kernels/forward_kernel/forward_kernel/solution_OCL_REGION_0/.autopilot/db", null} ; [ DW_TAG_file_type ]
!25 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !26, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!26 = metadata !{null, metadata !27, metadata !30, metadata !59}
!27 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !28} ; [ DW_TAG_pointer_type ]
!28 = metadata !{i32 786485, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !29} ; [ DW_TAG_volatile_type ]
!29 = metadata !{i32 786468, null, metadata !"unsigned int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!30 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !31} ; [ DW_TAG_pointer_type ]
!31 = metadata !{i32 786454, null, metadata !"__spir_rt_info_t", metadata !24, i32 143, i64 0, i64 0, i64 0, i32 0, metadata !32} ; [ DW_TAG_typedef ]
!32 = metadata !{i32 786434, null, metadata !"__spir_rt_info_tT", metadata !33, i32 120, i64 1024, i64 64, i32 0, i32 0, null, metadata !34, i32 0, null, null} ; [ DW_TAG_class_type ]
!33 = metadata !{i32 786473, metadata !"/home/opt/Xilinx/SDx/2017.2/Vivado_HLS/common/technology/autopilot/opencl/libspir_types.h", metadata !"/home/h-ninomiya/SDAccel_Examples/vision/forward_aligned/_xocc_compile_krnl_forward_krnl_forward.sw_emu.xilinx_kcu1500_4ddr-xpr_4_0.dir/impl/kernels/forward_kernel/forward_kernel/solution_OCL_REGION_0/.autopilot/db", null} ; [ DW_TAG_file_type ]
!34 = metadata !{metadata !35, metadata !36, metadata !40, metadata !41, metadata !42, metadata !43, metadata !44, metadata !45, metadata !46, metadata !48, metadata !51, metadata !52, metadata !53, metadata !55}
!35 = metadata !{i32 786445, metadata !32, metadata !"work_dim", metadata !33, i32 122, i64 32, i64 32, i64 0, i32 0, metadata !29} ; [ DW_TAG_member ]
!36 = metadata !{i32 786445, metadata !32, metadata !"global_size", metadata !33, i32 124, i64 96, i64 32, i64 32, i32 0, metadata !37} ; [ DW_TAG_member ]
!37 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 96, i64 32, i32 0, i32 0, metadata !29, metadata !38, i32 0, i32 0} ; [ DW_TAG_array_type ]
!38 = metadata !{metadata !39}
!39 = metadata !{i32 786465, i64 0, i64 2}        ; [ DW_TAG_subrange_type ]
!40 = metadata !{i32 786445, metadata !32, metadata !"global_id", metadata !33, i32 125, i64 96, i64 32, i64 128, i32 0, metadata !37} ; [ DW_TAG_member ]
!41 = metadata !{i32 786445, metadata !32, metadata !"local_size", metadata !33, i32 127, i64 96, i64 32, i64 224, i32 0, metadata !37} ; [ DW_TAG_member ]
!42 = metadata !{i32 786445, metadata !32, metadata !"local_id", metadata !33, i32 128, i64 96, i64 32, i64 320, i32 0, metadata !37} ; [ DW_TAG_member ]
!43 = metadata !{i32 786445, metadata !32, metadata !"num_groups", metadata !33, i32 130, i64 96, i64 32, i64 416, i32 0, metadata !37} ; [ DW_TAG_member ]
!44 = metadata !{i32 786445, metadata !32, metadata !"group_id", metadata !33, i32 131, i64 96, i64 32, i64 512, i32 0, metadata !37} ; [ DW_TAG_member ]
!45 = metadata !{i32 786445, metadata !32, metadata !"global_offset", metadata !33, i32 132, i64 96, i64 32, i64 608, i32 0, metadata !37} ; [ DW_TAG_member ]
!46 = metadata !{i32 786445, metadata !32, metadata !"pthread_barrier", metadata !33, i32 135, i64 64, i64 64, i64 704, i32 0, metadata !47} ; [ DW_TAG_member ]
!47 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, null} ; [ DW_TAG_pointer_type ]
!48 = metadata !{i32 786445, metadata !32, metadata !"barriertoscheduler", metadata !33, i32 138, i64 8, i64 8, i64 768, i32 0, metadata !49} ; [ DW_TAG_member ]
!49 = metadata !{i32 786485, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !50} ; [ DW_TAG_volatile_type ]
!50 = metadata !{i32 786468, null, metadata !"bool", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 2} ; [ DW_TAG_base_type ]
!51 = metadata !{i32 786445, metadata !32, metadata !"scheduler_context", metadata !33, i32 139, i64 64, i64 64, i64 832, i32 0, metadata !47} ; [ DW_TAG_member ]
!52 = metadata !{i32 786445, metadata !32, metadata !"pe_context", metadata !33, i32 140, i64 64, i64 64, i64 896, i32 0, metadata !47} ; [ DW_TAG_member ]
!53 = metadata !{i32 786445, metadata !32, metadata !"printf_buffer", metadata !33, i32 142, i64 64, i64 64, i64 960, i32 0, metadata !54} ; [ DW_TAG_member ]
!54 = metadata !{i32 786468, null, metadata !"long long unsigned int", null, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!55 = metadata !{i32 786478, i32 0, metadata !32, metadata !"__spir_rt_info_tT", metadata !"__spir_rt_info_tT", metadata !"", metadata !33, i32 120, metadata !56, i1 false, i1 false, i32 0, i32 0, null, i32 320, i1 false, null, null, i32 0, metadata !10, i32 120} ; [ DW_TAG_subprogram ]
!56 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !57, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!57 = metadata !{null, metadata !58}
!58 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !32} ; [ DW_TAG_pointer_type ]
!59 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !60} ; [ DW_TAG_pointer_type ]
!60 = metadata !{i32 786454, null, metadata !"forward_kernel_args_t", metadata !24, i32 27, i64 0, i64 0, i64 0, i32 0, metadata !61} ; [ DW_TAG_typedef ]
!61 = metadata !{i32 786434, null, metadata !"", metadata !24, i32 17, i64 512, i64 64, i32 0, i32 0, null, metadata !62, i32 0, null, null} ; [ DW_TAG_class_type ]
!62 = metadata !{metadata !63, metadata !65, metadata !66, metadata !67, metadata !68, metadata !69, metadata !70, metadata !71, metadata !72}
!63 = metadata !{i32 786445, metadata !61, metadata !"src_data", metadata !24, i32 18, i64 64, i64 64, i64 0, i32 0, metadata !64} ; [ DW_TAG_member ]
!64 = metadata !{i32 786454, null, metadata !"__spir_size_t", metadata !24, i32 110, i64 0, i64 0, i64 0, i32 0, metadata !54} ; [ DW_TAG_typedef ]
!65 = metadata !{i32 786445, metadata !61, metadata !"dst_data", metadata !24, i32 19, i64 64, i64 64, i64 64, i32 0, metadata !64} ; [ DW_TAG_member ]
!66 = metadata !{i32 786445, metadata !61, metadata !"w01", metadata !24, i32 20, i64 64, i64 64, i64 128, i32 0, metadata !64} ; [ DW_TAG_member ]
!67 = metadata !{i32 786445, metadata !61, metadata !"b1", metadata !24, i32 21, i64 64, i64 64, i64 192, i32 0, metadata !64} ; [ DW_TAG_member ]
!68 = metadata !{i32 786445, metadata !61, metadata !"w12", metadata !24, i32 22, i64 64, i64 64, i64 256, i32 0, metadata !64} ; [ DW_TAG_member ]
!69 = metadata !{i32 786445, metadata !61, metadata !"b2", metadata !24, i32 23, i64 64, i64 64, i64 320, i32 0, metadata !64} ; [ DW_TAG_member ]
!70 = metadata !{i32 786445, metadata !61, metadata !"w23", metadata !24, i32 24, i64 64, i64 64, i64 384, i32 0, metadata !64} ; [ DW_TAG_member ]
!71 = metadata !{i32 786445, metadata !61, metadata !"b3", metadata !24, i32 25, i64 64, i64 64, i64 448, i32 0, metadata !64} ; [ DW_TAG_member ]
!72 = metadata !{i32 786474, metadata !61, null, metadata !24, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !73} ; [ DW_TAG_friend ]
!73 = metadata !{i32 786434, null, metadata !"aesl_keep_name_class", metadata !24, i32 29, i64 8, i64 8, i32 0, i32 0, null, metadata !74, i32 0, null, null} ; [ DW_TAG_class_type ]
!74 = metadata !{metadata !75}
!75 = metadata !{i32 786478, i32 0, metadata !73, metadata !"aesl_keep_name_0_args", metadata !"aesl_keep_name_0_args", metadata !"_ZN20aesl_keep_name_class21aesl_keep_name_0_argsEP21forward_kernel_args_t", metadata !24, i32 32, metadata !76, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !10, i32 32} ; [ DW_TAG_subprogram ]
!76 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !77, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!77 = metadata !{null, metadata !59}
!78 = metadata !{i32 786478, i32 0, metadata !24, metadata !"__AESL_work_groupA", metadata !"__AESL_work_groupA", metadata !"", metadata !24, i32 65, metadata !79, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !10, i32 66} ; [ DW_TAG_subprogram ]
!79 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !80, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!80 = metadata !{null, metadata !27, metadata !59}
!81 = metadata !{i32 786478, i32 0, null, metadata !"aesl_keep_name_0_args", metadata !"aesl_keep_name_0_args", metadata !"_ZN20aesl_keep_name_class21aesl_keep_name_0_argsEP21forward_kernel_args_t", metadata !24, i32 32, metadata !76, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !75, metadata !10, i32 32} ; [ DW_TAG_subprogram ]
!82 = metadata !{metadata !83}
!83 = metadata !{metadata !84}
!84 = metadata !{i32 786484, i32 0, metadata !78, metadata !"rt_info", metadata !"rt_info", metadata !"", metadata !85, i32 49, metadata !31, i32 1, i32 1, %struct.__spir_rt_info_tT.1* @rt_info} ; [ DW_TAG_variable ]
!85 = metadata !{i32 786473, metadata !"/home/opt/Xilinx/SDx/2017.2/Vivado_HLS/common/technology/autopilot/opencl/aesl_gen_cu_body.inc", metadata !"/home/h-ninomiya/SDAccel_Examples/vision/forward_aligned/_xocc_compile_krnl_forward_krnl_forward.sw_emu.xilinx_kcu1500_4ddr-xpr_4_0.dir/impl/kernels/forward_kernel/forward_kernel/solution_OCL_REGION_0/.autopilot/db", null} ; [ DW_TAG_file_type ]
!86 = metadata !{metadata !"/home/opt/Xilinx/SDx/2017.2/Vivado_HLS/lnx64/lib/libspir64-hls.a"}
!87 = metadata !{metadata !"forward_kernel"}
!88 = metadata !{metadata !"forward_kernel", i32 0, metadata !89}
!89 = metadata !{metadata !"forward_kernel", metadata !"gmem", metadata !"addressable", metadata !"master", i32 32}
!90 = metadata !{metadata !"forward_kernel", i32 1, metadata !89}
!91 = metadata !{metadata !"forward_kernel", i32 2, metadata !89}
!92 = metadata !{metadata !"forward_kernel", i32 3, metadata !89}
!93 = metadata !{metadata !"forward_kernel", i32 4, metadata !89}
!94 = metadata !{metadata !"forward_kernel", i32 5, metadata !89}
!95 = metadata !{metadata !"forward_kernel", i32 6, metadata !89}
!96 = metadata !{metadata !"forward_kernel", i32 7, metadata !89}
!97 = metadata !{metadata !"gmem", metadata !"src_data", metadata !"", metadata !"dst_data", metadata !"", metadata !"w01", metadata !"", metadata !"b1", metadata !"", metadata !"w12", metadata !"", metadata !"b2", metadata !"", metadata !"w23", metadata !"", metadata !"b3", metadata !""}
!98 = metadata !{metadata !"forward_kernel", metadata !"control", metadata !"addressable", metadata !"slave", i32 32}
!99 = metadata !{i32 786689, metadata !78, metadata !"gmem", metadata !24, i32 16777281, metadata !27, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!100 = metadata !{i32 65, i32 84, metadata !78, null}
!101 = metadata !{i32 786689, metadata !78, metadata !"args", metadata !24, i32 33554497, metadata !59, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!102 = metadata !{i32 65, i32 113, metadata !78, null}
!103 = metadata !{i32 786689, metadata !81, metadata !"args", metadata !24, i32 16777248, metadata !59, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!104 = metadata !{i32 32, i32 48, metadata !81, metadata !105}
!105 = metadata !{i32 70, i32 1, metadata !106, null}
!106 = metadata !{i32 786443, metadata !78, i32 66, i32 1, metadata !24, i32 1} ; [ DW_TAG_lexical_block ]
!107 = metadata !{i32 33, i32 5, metadata !108, metadata !105}
!108 = metadata !{i32 786443, metadata !81, i32 32, i32 54, metadata !24, i32 2} ; [ DW_TAG_lexical_block ]
!109 = metadata !{i32 34, i32 5, metadata !108, metadata !105}
!110 = metadata !{i32 35, i32 5, metadata !108, metadata !105}
!111 = metadata !{i32 36, i32 5, metadata !108, metadata !105}
!112 = metadata !{i32 37, i32 5, metadata !108, metadata !105}
!113 = metadata !{i32 38, i32 5, metadata !108, metadata !105}
!114 = metadata !{i32 39, i32 5, metadata !108, metadata !105}
!115 = metadata !{i32 40, i32 5, metadata !108, metadata !105}
!116 = metadata !{i32 71, i32 1, metadata !106, null}
!117 = metadata !{i32 72, i32 1, metadata !106, null}
!118 = metadata !{i32 73, i32 1, metadata !106, null}
!119 = metadata !{i32 54, i32 3, metadata !120, null}
!120 = metadata !{i32 786443, metadata !106, metadata !85} ; [ DW_TAG_lexical_block ]
!121 = metadata !{i32 63, i32 3, metadata !120, null}
!122 = metadata !{i32 64, i32 3, metadata !120, null}
!123 = metadata !{i32 65, i32 3, metadata !120, null}
!124 = metadata !{i32 70, i32 3, metadata !120, null}
!125 = metadata !{i32 79, i32 3, metadata !120, null}
!126 = metadata !{i32 88, i32 3, metadata !120, null}
!127 = metadata !{i32 103, i32 3, metadata !120, null}
!128 = metadata !{i32 104, i32 3, metadata !120, null}
!129 = metadata !{i32 105, i32 3, metadata !120, null}
!130 = metadata !{i32 114, i32 3, metadata !120, null}
!131 = metadata !{i32 115, i32 3, metadata !120, null}
!132 = metadata !{i32 116, i32 3, metadata !120, null}
!133 = metadata !{i32 125, i32 3, metadata !120, null}
!134 = metadata !{i32 126, i32 3, metadata !120, null}
!135 = metadata !{i32 127, i32 3, metadata !120, null}
!136 = metadata !{i32 136, i32 3, metadata !120, null}
!137 = metadata !{i32 137, i32 3, metadata !120, null}
!138 = metadata !{i32 138, i32 3, metadata !120, null}
!139 = metadata !{i32 147, i32 3, metadata !120, null}
!140 = metadata !{i32 148, i32 3, metadata !120, null}
!141 = metadata !{i32 149, i32 3, metadata !120, null}
!142 = metadata !{i32 786689, metadata !23, metadata !"gmem", metadata !24, i32 16777266, metadata !27, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!143 = metadata !{i32 50, i32 90, metadata !23, null}
!144 = metadata !{%struct.__spir_rt_info_tT.1* @rt_info}
!145 = metadata !{i32 786689, metadata !23, metadata !"rt_info", metadata !24, i32 33554482, metadata !30, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!146 = metadata !{i32 50, i32 114, metadata !23, null}
!147 = metadata !{i32 786689, metadata !23, metadata !"args", metadata !24, i32 50331698, metadata !59, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!148 = metadata !{i32 50, i32 146, metadata !23, null}
!149 = metadata !{i32 52, i32 124, metadata !150, null}
!150 = metadata !{i32 786443, metadata !23, i32 51, i32 1, metadata !24, i32 0} ; [ DW_TAG_lexical_block ]
!151 = metadata !{i32 786688, metadata !150, metadata !"arg_src_data", metadata !24, i32 52, metadata !27, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!152 = metadata !{i32 53, i32 124, metadata !150, null}
!153 = metadata !{i32 786688, metadata !150, metadata !"arg_dst_data", metadata !24, i32 53, metadata !27, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!154 = metadata !{i32 54, i32 114, metadata !150, null}
!155 = metadata !{i32 786688, metadata !150, metadata !"arg_w01", metadata !24, i32 54, metadata !27, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!156 = metadata !{i32 55, i32 112, metadata !150, null}
!157 = metadata !{i32 786688, metadata !150, metadata !"arg_b1", metadata !24, i32 55, metadata !27, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!158 = metadata !{i32 56, i32 114, metadata !150, null}
!159 = metadata !{i32 786688, metadata !150, metadata !"arg_w12", metadata !24, i32 56, metadata !27, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!160 = metadata !{i32 57, i32 112, metadata !150, null}
!161 = metadata !{i32 786688, metadata !150, metadata !"arg_b2", metadata !24, i32 57, metadata !27, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!162 = metadata !{i32 58, i32 114, metadata !150, null}
!163 = metadata !{i32 786688, metadata !150, metadata !"arg_w23", metadata !24, i32 58, metadata !27, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!164 = metadata !{i32 59, i32 112, metadata !150, null}
!165 = metadata !{i32 786688, metadata !150, metadata !"arg_b3", metadata !24, i32 59, metadata !27, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!166 = metadata !{i32 41, i32 8, metadata !167, null}
!167 = metadata !{i32 786443, metadata !13, i32 20, i32 1, metadata !6, i32 2} ; [ DW_TAG_lexical_block ]
!168 = metadata !{i32 786688, metadata !167, metadata !"z2", metadata !6, i32 41, metadata !169, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!169 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 32768, i64 32, i32 0, i32 0, metadata !9, metadata !170, i32 0, i32 0} ; [ DW_TAG_array_type ]
!170 = metadata !{metadata !171}
!171 = metadata !{i32 786465, i64 0, i64 1023}    ; [ DW_TAG_subrange_type ]
!172 = metadata !{i32 786688, metadata !167, metadata !"a2", metadata !6, i32 42, metadata !169, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!173 = metadata !{i32 42, i32 8, metadata !167, null}
!174 = metadata !{i32 786688, metadata !167, metadata !"z3", metadata !6, i32 58, metadata !175, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!175 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 320, i64 32, i32 0, i32 0, metadata !9, metadata !176, i32 0, i32 0} ; [ DW_TAG_array_type ]
!176 = metadata !{metadata !177}
!177 = metadata !{i32 786465, i64 0, i64 9}       ; [ DW_TAG_subrange_type ]
!178 = metadata !{i32 58, i32 8, metadata !167, null}
!179 = metadata !{i32 786688, metadata !167, metadata !"a3", metadata !6, i32 59, metadata !175, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!180 = metadata !{i32 59, i32 8, metadata !167, null}
!181 = metadata !{i32 786688, metadata !167, metadata !"z1", metadata !6, i32 21, metadata !169, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!182 = metadata !{i32 21, i32 8, metadata !167, null}
!183 = metadata !{i32 786688, metadata !167, metadata !"a1", metadata !6, i32 22, metadata !169, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!184 = metadata !{i32 22, i32 8, metadata !167, null}
!185 = metadata !{i32 25, i32 22, metadata !186, null}
!186 = metadata !{i32 786443, metadata !167, i32 25, i32 10, metadata !6, i32 3} ; [ DW_TAG_lexical_block ]
!187 = metadata !{i32 25, i32 36, metadata !188, null}
!188 = metadata !{i32 786443, metadata !186, i32 25, i32 35, metadata !6, i32 4} ; [ DW_TAG_lexical_block ]
!189 = metadata !{i32 27, i32 3, metadata !188, null}
!190 = metadata !{i32 28, i32 15, metadata !191, null}
!191 = metadata !{i32 786443, metadata !188, i32 28, i32 3, metadata !6, i32 5} ; [ DW_TAG_lexical_block ]
!192 = metadata !{i32 32, i32 4, metadata !193, null}
!193 = metadata !{i32 786443, metadata !191, i32 28, i32 31, metadata !6, i32 6} ; [ DW_TAG_lexical_block ]
!194 = metadata !{float 2.500000e+00}
!195 = metadata !{i32 28, i32 26, metadata !191, null}
!196 = metadata !{i32 35, i32 3, metadata !188, null}
!197 = metadata !{i32 38, i32 9, metadata !188, null}
!198 = metadata !{i32 3, i32 2, metadata !199, metadata !197}
!199 = metadata !{i32 786443, metadata !5, i32 2, i32 21, metadata !6, i32 0} ; [ DW_TAG_lexical_block ]
!200 = metadata !{i32 39, i32 2, metadata !188, null}
!201 = metadata !{i32 25, i32 30, metadata !186, null}
!202 = metadata !{i32 44, i32 22, metadata !203, null}
!203 = metadata !{i32 786443, metadata !167, i32 44, i32 10, metadata !6, i32 7} ; [ DW_TAG_lexical_block ]
!204 = metadata !{i32 44, i32 36, metadata !205, null}
!205 = metadata !{i32 786443, metadata !203, i32 44, i32 35, metadata !6, i32 8} ; [ DW_TAG_lexical_block ]
!206 = metadata !{i32 46, i32 3, metadata !205, null}
!207 = metadata !{i32 47, i32 15, metadata !208, null}
!208 = metadata !{i32 786443, metadata !205, i32 47, i32 3, metadata !6, i32 9} ; [ DW_TAG_lexical_block ]
!209 = metadata !{i32 50, i32 4, metadata !210, null}
!210 = metadata !{i32 786443, metadata !208, i32 47, i32 28, metadata !6, i32 10} ; [ DW_TAG_lexical_block ]
!211 = metadata !{i32 47, i32 23, metadata !208, null}
!212 = metadata !{i32 53, i32 3, metadata !205, null}
!213 = metadata !{i32 56, i32 9, metadata !205, null}
!214 = metadata !{i32 3, i32 2, metadata !199, metadata !213}
!215 = metadata !{i32 57, i32 2, metadata !205, null}
!216 = metadata !{i32 44, i32 30, metadata !203, null}
!217 = metadata !{i32 61, i32 22, metadata !218, null}
!218 = metadata !{i32 786443, metadata !167, i32 61, i32 10, metadata !6, i32 11} ; [ DW_TAG_lexical_block ]
!219 = metadata !{i32 61, i32 40, metadata !220, null}
!220 = metadata !{i32 786443, metadata !218, i32 61, i32 39, metadata !6, i32 12} ; [ DW_TAG_lexical_block ]
!221 = metadata !{i32 63, i32 3, metadata !220, null}
!222 = metadata !{i32 64, i32 15, metadata !223, null}
!223 = metadata !{i32 786443, metadata !220, i32 64, i32 3, metadata !6, i32 13} ; [ DW_TAG_lexical_block ]
!224 = metadata !{i32 67, i32 4, metadata !225, null}
!225 = metadata !{i32 786443, metadata !223, i32 64, i32 28, metadata !6, i32 14} ; [ DW_TAG_lexical_block ]
!226 = metadata !{i32 64, i32 23, metadata !223, null}
!227 = metadata !{i32 70, i32 3, metadata !220, null}
!228 = metadata !{i32 71, i32 2, metadata !220, null}
!229 = metadata !{i32 61, i32 34, metadata !218, null}
!230 = metadata !{i32 78, i32 29, metadata !231, null}
!231 = metadata !{i32 786443, metadata !167, i32 78, i32 17, metadata !6, i32 15} ; [ DW_TAG_lexical_block ]
!232 = metadata !{i32 78, i32 48, metadata !233, null}
!233 = metadata !{i32 786443, metadata !231, i32 78, i32 48, metadata !6, i32 16} ; [ DW_TAG_lexical_block ]
!234 = metadata !{i32 78, i32 64, metadata !233, null}
!235 = metadata !{i32 78, i32 74, metadata !233, null}
!236 = metadata !{i32 78, i32 43, metadata !231, null}
!237 = metadata !{i32 79, i32 23, metadata !238, null}
!238 = metadata !{i32 786443, metadata !167, i32 79, i32 11, metadata !6, i32 17} ; [ DW_TAG_lexical_block ]
!239 = metadata !{i32 79, i32 43, metadata !240, null}
!240 = metadata !{i32 786443, metadata !238, i32 79, i32 42, metadata !6, i32 18} ; [ DW_TAG_lexical_block ]
!241 = metadata !{i32 80, i32 11, metadata !240, null}
!242 = metadata !{i32 81, i32 3, metadata !240, null}
!243 = metadata !{i32 82, i32 2, metadata !240, null}
!244 = metadata !{i32 79, i32 37, metadata !238, null}
!245 = metadata !{i32 85, i32 27, metadata !246, null}
!246 = metadata !{i32 786443, metadata !167, i32 85, i32 15, metadata !6, i32 19} ; [ DW_TAG_lexical_block ]
!247 = metadata !{i32 85, i32 46, metadata !248, null}
!248 = metadata !{i32 786443, metadata !246, i32 85, i32 46, metadata !6, i32 20} ; [ DW_TAG_lexical_block ]
!249 = metadata !{i32 85, i32 66, metadata !248, null}
!250 = metadata !{i32 85, i32 41, metadata !246, null}
!251 = metadata !{i32 86, i32 1, metadata !167, null}
!252 = metadata !{i32 61, i32 3, metadata !150, null}
!253 = metadata !{i32 78, i32 1, metadata !254, null}
!254 = metadata !{i32 786443, metadata !106, metadata !24} ; [ DW_TAG_lexical_block ]
