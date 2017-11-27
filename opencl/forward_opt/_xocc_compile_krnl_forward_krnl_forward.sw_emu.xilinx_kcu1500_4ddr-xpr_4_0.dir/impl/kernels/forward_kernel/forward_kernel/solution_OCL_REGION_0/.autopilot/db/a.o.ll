; ModuleID = '/home/h-ninomiya/SDAccel_Examples/vision/forward_aligned/_xocc_compile_krnl_forward_krnl_forward.sw_emu.xilinx_kcu1500_4ddr-xpr_4_0.dir/impl/kernels/forward_kernel/forward_kernel/solution_OCL_REGION_0/.autopilot/db/a.o.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v16:16:16-v24:32:32-v32:32:32-v48:64:64-v64:64:64-v96:128:128-v128:128:128-v192:256:256-v256:256:256-v512:512:512-v1024:1024:1024"
target triple = "spir64-unknown-linux-gnu"

@.str = private addrspace(2) unnamed_addr constant [8 x i8] c"LOOP_H1\00", align 1 ; [#uses=1 type=[8 x i8] addrspace(2)*]
@.str1 = private addrspace(2) unnamed_addr constant [8 x i8] c"LOOP_H2\00", align 1 ; [#uses=1 type=[8 x i8] addrspace(2)*]
@.str2 = private addrspace(2) unnamed_addr constant [8 x i8] c"LOOP_H3\00", align 1 ; [#uses=1 type=[8 x i8] addrspace(2)*]
@.str3 = private addrspace(2) unnamed_addr constant [15 x i8] c"LOOP_SERCH_MAX\00", align 1 ; [#uses=1 type=[15 x i8] addrspace(2)*]
@.str4 = private addrspace(2) unnamed_addr constant [9 x i8] c"LOOP_EXP\00", align 1 ; [#uses=1 type=[9 x i8] addrspace(2)*]
@.str5 = private addrspace(2) unnamed_addr constant [13 x i8] c"LOOP_SOFTMAX\00", align 1 ; [#uses=1 type=[13 x i8] addrspace(2)*]

; [#uses=2]
define spir_func float @_Z4reluf(float %a) nounwind {
  %1 = alloca float, align 4                      ; [#uses=3 type=float*]
  store float %a, float* %1, align 4
  call void @llvm.dbg.declare(metadata !{float* %1}, metadata !27), !dbg !28 ; [debug line = 2:18] [debug variable = a]
  %2 = load float* %1, align 4, !dbg !29          ; [#uses=1 type=float] [debug line = 3:2]
  %3 = fcmp ogt float %2, 0.000000e+00, !dbg !29  ; [#uses=1 type=i1] [debug line = 3:2]
  br i1 %3, label %4, label %6, !dbg !29          ; [debug line = 3:2]

; <label>:4                                       ; preds = %0
  %5 = load float* %1, align 4, !dbg !29          ; [#uses=1 type=float] [debug line = 3:2]
  br label %7, !dbg !29                           ; [debug line = 3:2]

; <label>:6                                       ; preds = %0
  br label %7, !dbg !29                           ; [debug line = 3:2]

; <label>:7                                       ; preds = %6, %4
  %8 = phi float [ %5, %4 ], [ 0.000000e+00, %6 ], !dbg !29 ; [#uses=1 type=float] [debug line = 3:2]
  ret float %8, !dbg !29                          ; [debug line = 3:2]
}

; [#uses=27]
declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

; [#uses=0]
define spir_func float @_Z9diff_reluf(float %a) nounwind {
  %1 = alloca float, align 4                      ; [#uses=2 type=float*]
  store float %a, float* %1, align 4
  call void @llvm.dbg.declare(metadata !{float* %1}, metadata !31), !dbg !32 ; [debug line = 6:23] [debug variable = a]
  %2 = load float* %1, align 4, !dbg !33          ; [#uses=1 type=float] [debug line = 7:2]
  %3 = fcmp ogt float %2, 0.000000e+00, !dbg !33  ; [#uses=1 type=i1] [debug line = 7:2]
  %4 = select i1 %3, float 1.000000e+00, float 0.000000e+00, !dbg !33 ; [#uses=1 type=float] [debug line = 7:2]
  ret float %4, !dbg !33                          ; [debug line = 7:2]
}

; [#uses=0]
define spir_kernel void @forward_kernel(i8 addrspace(1)* %src_data, float addrspace(1)* %dst_data, float addrspace(1)* %w01, float addrspace(1)* %b1, float addrspace(1)* %w12, float addrspace(1)* %b2, float addrspace(1)* %w23, float addrspace(1)* %b3) nounwind {
  %1 = alloca i8 addrspace(1)*, align 8           ; [#uses=2 type=i8 addrspace(1)**]
  %2 = alloca float addrspace(1)*, align 8        ; [#uses=2 type=float addrspace(1)**]
  %3 = alloca float addrspace(1)*, align 8        ; [#uses=2 type=float addrspace(1)**]
  %4 = alloca float addrspace(1)*, align 8        ; [#uses=2 type=float addrspace(1)**]
  %5 = alloca float addrspace(1)*, align 8        ; [#uses=2 type=float addrspace(1)**]
  %6 = alloca float addrspace(1)*, align 8        ; [#uses=2 type=float addrspace(1)**]
  %7 = alloca float addrspace(1)*, align 8        ; [#uses=2 type=float addrspace(1)**]
  %8 = alloca float addrspace(1)*, align 8        ; [#uses=2 type=float addrspace(1)**]
  %z1 = alloca [1024 x float], align 4            ; [#uses=4 type=[1024 x float]*]
  %a1 = alloca [1024 x float], align 4            ; [#uses=2 type=[1024 x float]*]
  %j = alloca i32, align 4                        ; [#uses=11 type=i32*]
  %i = alloca i32, align 4                        ; [#uses=6 type=i32*]
  %z2 = alloca [1024 x float], align 4            ; [#uses=4 type=[1024 x float]*]
  %a2 = alloca [1024 x float], align 4            ; [#uses=2 type=[1024 x float]*]
  %j1 = alloca i32, align 4                       ; [#uses=11 type=i32*]
  %i2 = alloca i32, align 4                       ; [#uses=6 type=i32*]
  %z3 = alloca [10 x float], align 4              ; [#uses=6 type=[10 x float]*]
  %a3 = alloca [10 x float], align 4              ; [#uses=3 type=[10 x float]*]
  %j3 = alloca i32, align 4                       ; [#uses=9 type=i32*]
  %i4 = alloca i32, align 4                       ; [#uses=6 type=i32*]
  %max = alloca float, align 4                    ; [#uses=4 type=float*]
  %sum = alloca float, align 4                    ; [#uses=4 type=float*]
  %i5 = alloca i32, align 4                       ; [#uses=6 type=i32*]
  %i6 = alloca i32, align 4                       ; [#uses=7 type=i32*]
  %i7 = alloca i32, align 4                       ; [#uses=6 type=i32*]
  store i8 addrspace(1)* %src_data, i8 addrspace(1)** %1, align 8
  call void @llvm.dbg.declare(metadata !{i8 addrspace(1)** %1}, metadata !35), !dbg !36 ; [debug line = 11:49] [debug variable = src_data]
  store float addrspace(1)* %dst_data, float addrspace(1)** %2, align 8
  call void @llvm.dbg.declare(metadata !{float addrspace(1)** %2}, metadata !37), !dbg !38 ; [debug line = 12:31] [debug variable = dst_data]
  store float addrspace(1)* %w01, float addrspace(1)** %3, align 8
  call void @llvm.dbg.declare(metadata !{float addrspace(1)** %3}, metadata !39), !dbg !40 ; [debug line = 13:31] [debug variable = w01]
  store float addrspace(1)* %b1, float addrspace(1)** %4, align 8
  call void @llvm.dbg.declare(metadata !{float addrspace(1)** %4}, metadata !41), !dbg !42 ; [debug line = 14:31] [debug variable = b1]
  store float addrspace(1)* %w12, float addrspace(1)** %5, align 8
  call void @llvm.dbg.declare(metadata !{float addrspace(1)** %5}, metadata !43), !dbg !44 ; [debug line = 15:31] [debug variable = w12]
  store float addrspace(1)* %b2, float addrspace(1)** %6, align 8
  call void @llvm.dbg.declare(metadata !{float addrspace(1)** %6}, metadata !45), !dbg !46 ; [debug line = 16:31] [debug variable = b2]
  store float addrspace(1)* %w23, float addrspace(1)** %7, align 8
  call void @llvm.dbg.declare(metadata !{float addrspace(1)** %7}, metadata !47), !dbg !48 ; [debug line = 17:31] [debug variable = w23]
  store float addrspace(1)* %b3, float addrspace(1)** %8, align 8
  call void @llvm.dbg.declare(metadata !{float addrspace(1)** %8}, metadata !49), !dbg !50 ; [debug line = 18:31] [debug variable = b3]
  call void @llvm.dbg.declare(metadata !{[1024 x float]* %z1}, metadata !51), !dbg !56 ; [debug line = 21:8] [debug variable = z1]
  call void @llvm.dbg.declare(metadata !{[1024 x float]* %a1}, metadata !57), !dbg !58 ; [debug line = 22:8] [debug variable = a1]
  br label %9, !dbg !59                           ; [debug line = 22:16]

; <label>:9                                       ; preds = %0
  call void @llvm.dbg.declare(metadata !{i32* %j}, metadata !60), !dbg !63 ; [debug line = 25:19] [debug variable = j]
  store i32 0, i32* %j, align 4, !dbg !64         ; [debug line = 25:22]
  br label %10, !dbg !64                          ; [debug line = 25:22]

; <label>:10                                      ; preds = %65, %9
  %11 = load i32* %j, align 4, !dbg !64           ; [#uses=1 type=i32] [debug line = 25:22]
  %12 = icmp slt i32 %11, 1024, !dbg !64          ; [#uses=1 type=i1] [debug line = 25:22]
  br i1 %12, label %13, label %68, !dbg !64       ; [debug line = 25:22]

; <label>:13                                      ; preds = %10
  call spir_func void (...)* @_Z21_ssdm_op_SpecLoopNamez(i8* bitcast ([8 x i8] addrspace(2)* @.str to i8*)) nounwind, !dbg !65 ; [debug line = 25:36]
  call spir_func void (...)* @_Z17_ssdm_RegionBeginz(i8* bitcast ([8 x i8] addrspace(2)* @.str to i8*)) nounwind, !dbg !65 ; [debug line = 25:36]
  %14 = load i32* %j, align 4, !dbg !67           ; [#uses=1 type=i32] [debug line = 27:3]
  %15 = sext i32 %14 to i64, !dbg !67             ; [#uses=1 type=i64] [debug line = 27:3]
  %16 = getelementptr inbounds [1024 x float]* %z1, i32 0, i64 %15, !dbg !67 ; [#uses=1 type=float*] [debug line = 27:3]
  store float 0.000000e+00, float* %16, align 4, !dbg !67 ; [debug line = 27:3]
  call void @llvm.dbg.declare(metadata !{i32* %i}, metadata !68), !dbg !70 ; [debug line = 28:12] [debug variable = i]
  store i32 0, i32* %i, align 4, !dbg !71         ; [debug line = 28:15]
  br label %17, !dbg !71                          ; [debug line = 28:15]

; <label>:17                                      ; preds = %43, %13
  %18 = load i32* %i, align 4, !dbg !71           ; [#uses=1 type=i32] [debug line = 28:15]
  %19 = icmp slt i32 %18, 784, !dbg !71           ; [#uses=1 type=i1] [debug line = 28:15]
  br i1 %19, label %20, label %46, !dbg !71       ; [debug line = 28:15]

; <label>:20                                      ; preds = %17
  %21 = load i32* %i, align 4, !dbg !72           ; [#uses=1 type=i32] [debug line = 32:4]
  %22 = mul nsw i32 %21, 1024, !dbg !72           ; [#uses=1 type=i32] [debug line = 32:4]
  %23 = load i32* %j, align 4, !dbg !72           ; [#uses=1 type=i32] [debug line = 32:4]
  %24 = add nsw i32 %22, %23, !dbg !72            ; [#uses=1 type=i32] [debug line = 32:4]
  %25 = sext i32 %24 to i64, !dbg !72             ; [#uses=1 type=i64] [debug line = 32:4]
  %26 = load float addrspace(1)** %3, align 8, !dbg !72 ; [#uses=1 type=float addrspace(1)*] [debug line = 32:4]
  %27 = getelementptr inbounds float addrspace(1)* %26, i64 %25, !dbg !72 ; [#uses=1 type=float addrspace(1)*] [debug line = 32:4]
  %28 = load float addrspace(1)* %27, align 4, !dbg !72 ; [#uses=1 type=float] [debug line = 32:4]
  %29 = load i32* %i, align 4, !dbg !72           ; [#uses=1 type=i32] [debug line = 32:4]
  %30 = sext i32 %29 to i64, !dbg !72             ; [#uses=1 type=i64] [debug line = 32:4]
  %31 = load i8 addrspace(1)** %1, align 8, !dbg !72 ; [#uses=1 type=i8 addrspace(1)*] [debug line = 32:4]
  %32 = getelementptr inbounds i8 addrspace(1)* %31, i64 %30, !dbg !72 ; [#uses=1 type=i8 addrspace(1)*] [debug line = 32:4]
  %33 = load i8 addrspace(1)* %32, align 1, !dbg !72 ; [#uses=1 type=i8] [debug line = 32:4]
  %34 = zext i8 %33 to i32, !dbg !72              ; [#uses=1 type=i32] [debug line = 32:4]
  %35 = sitofp i32 %34 to float, !dbg !72         ; [#uses=1 type=float] [debug line = 32:4]
  %36 = fmul float %28, %35, !dbg !72             ; [#uses=1 type=float] [debug line = 32:4]
  %37 = fdiv float %36, 2.550000e+02, !dbg !72, !fpmath !74 ; [#uses=1 type=float] [debug line = 32:4]
  %38 = load i32* %j, align 4, !dbg !72           ; [#uses=1 type=i32] [debug line = 32:4]
  %39 = sext i32 %38 to i64, !dbg !72             ; [#uses=1 type=i64] [debug line = 32:4]
  %40 = getelementptr inbounds [1024 x float]* %z1, i32 0, i64 %39, !dbg !72 ; [#uses=2 type=float*] [debug line = 32:4]
  %41 = load float* %40, align 4, !dbg !72        ; [#uses=1 type=float] [debug line = 32:4]
  %42 = fadd float %41, %37, !dbg !72             ; [#uses=1 type=float] [debug line = 32:4]
  store float %42, float* %40, align 4, !dbg !72  ; [debug line = 32:4]
  br label %43, !dbg !75                          ; [debug line = 33:3]

; <label>:43                                      ; preds = %20
  %44 = load i32* %i, align 4, !dbg !76           ; [#uses=1 type=i32] [debug line = 28:26]
  %45 = add nsw i32 %44, 1, !dbg !76              ; [#uses=1 type=i32] [debug line = 28:26]
  store i32 %45, i32* %i, align 4, !dbg !76       ; [debug line = 28:26]
  br label %17, !dbg !76                          ; [debug line = 28:26]

; <label>:46                                      ; preds = %17
  %47 = load i32* %j, align 4, !dbg !77           ; [#uses=1 type=i32] [debug line = 35:3]
  %48 = sext i32 %47 to i64, !dbg !77             ; [#uses=1 type=i64] [debug line = 35:3]
  %49 = load float addrspace(1)** %4, align 8, !dbg !77 ; [#uses=1 type=float addrspace(1)*] [debug line = 35:3]
  %50 = getelementptr inbounds float addrspace(1)* %49, i64 %48, !dbg !77 ; [#uses=1 type=float addrspace(1)*] [debug line = 35:3]
  %51 = load float addrspace(1)* %50, align 4, !dbg !77 ; [#uses=1 type=float] [debug line = 35:3]
  %52 = load i32* %j, align 4, !dbg !77           ; [#uses=1 type=i32] [debug line = 35:3]
  %53 = sext i32 %52 to i64, !dbg !77             ; [#uses=1 type=i64] [debug line = 35:3]
  %54 = getelementptr inbounds [1024 x float]* %z1, i32 0, i64 %53, !dbg !77 ; [#uses=2 type=float*] [debug line = 35:3]
  %55 = load float* %54, align 4, !dbg !77        ; [#uses=1 type=float] [debug line = 35:3]
  %56 = fadd float %55, %51, !dbg !77             ; [#uses=1 type=float] [debug line = 35:3]
  store float %56, float* %54, align 4, !dbg !77  ; [debug line = 35:3]
  %57 = load i32* %j, align 4, !dbg !78           ; [#uses=1 type=i32] [debug line = 38:9]
  %58 = sext i32 %57 to i64, !dbg !78             ; [#uses=1 type=i64] [debug line = 38:9]
  %59 = getelementptr inbounds [1024 x float]* %z1, i32 0, i64 %58, !dbg !78 ; [#uses=1 type=float*] [debug line = 38:9]
  %60 = load float* %59, align 4, !dbg !78        ; [#uses=1 type=float] [debug line = 38:9]
  %61 = call spir_func float @_Z4reluf(float %60), !dbg !78 ; [#uses=1 type=float] [debug line = 38:9]
  %62 = load i32* %j, align 4, !dbg !78           ; [#uses=1 type=i32] [debug line = 38:9]
  %63 = sext i32 %62 to i64, !dbg !78             ; [#uses=1 type=i64] [debug line = 38:9]
  %64 = getelementptr inbounds [1024 x float]* %a1, i32 0, i64 %63, !dbg !78 ; [#uses=1 type=float*] [debug line = 38:9]
  store float %61, float* %64, align 4, !dbg !78  ; [debug line = 38:9]
  call spir_func void (...)* @_Z15_ssdm_RegionEndz(i8* bitcast ([8 x i8] addrspace(2)* @.str to i8*)) nounwind, !dbg !79 ; [debug line = 39:2]
  br label %65, !dbg !79                          ; [debug line = 39:2]

; <label>:65                                      ; preds = %46
  %66 = load i32* %j, align 4, !dbg !80           ; [#uses=1 type=i32] [debug line = 25:30]
  %67 = add nsw i32 %66, 1, !dbg !80              ; [#uses=1 type=i32] [debug line = 25:30]
  store i32 %67, i32* %j, align 4, !dbg !80       ; [debug line = 25:30]
  br label %10, !dbg !80                          ; [debug line = 25:30]

; <label>:68                                      ; preds = %10
  call void @llvm.dbg.declare(metadata !{[1024 x float]* %z2}, metadata !81), !dbg !82 ; [debug line = 41:8] [debug variable = z2]
  call void @llvm.dbg.declare(metadata !{[1024 x float]* %a2}, metadata !83), !dbg !84 ; [debug line = 42:8] [debug variable = a2]
  br label %69, !dbg !85                          ; [debug line = 42:16]

; <label>:69                                      ; preds = %68
  call void @llvm.dbg.declare(metadata !{i32* %j1}, metadata !86), !dbg !88 ; [debug line = 44:19] [debug variable = j]
  store i32 0, i32* %j1, align 4, !dbg !89        ; [debug line = 44:22]
  br label %70, !dbg !89                          ; [debug line = 44:22]

; <label>:70                                      ; preds = %121, %69
  %71 = load i32* %j1, align 4, !dbg !89          ; [#uses=1 type=i32] [debug line = 44:22]
  %72 = icmp slt i32 %71, 1024, !dbg !89          ; [#uses=1 type=i1] [debug line = 44:22]
  br i1 %72, label %73, label %124, !dbg !89      ; [debug line = 44:22]

; <label>:73                                      ; preds = %70
  call spir_func void (...)* @_Z21_ssdm_op_SpecLoopNamez(i8* bitcast ([8 x i8] addrspace(2)* @.str1 to i8*)) nounwind, !dbg !90 ; [debug line = 44:36]
  call spir_func void (...)* @_Z17_ssdm_RegionBeginz(i8* bitcast ([8 x i8] addrspace(2)* @.str1 to i8*)) nounwind, !dbg !90 ; [debug line = 44:36]
  %74 = load i32* %j1, align 4, !dbg !92          ; [#uses=1 type=i32] [debug line = 46:3]
  %75 = sext i32 %74 to i64, !dbg !92             ; [#uses=1 type=i64] [debug line = 46:3]
  %76 = getelementptr inbounds [1024 x float]* %z2, i32 0, i64 %75, !dbg !92 ; [#uses=1 type=float*] [debug line = 46:3]
  store float 0.000000e+00, float* %76, align 4, !dbg !92 ; [debug line = 46:3]
  call void @llvm.dbg.declare(metadata !{i32* %i2}, metadata !93), !dbg !95 ; [debug line = 47:12] [debug variable = i]
  store i32 0, i32* %i2, align 4, !dbg !96        ; [debug line = 47:15]
  br label %77, !dbg !96                          ; [debug line = 47:15]

; <label>:77                                      ; preds = %99, %73
  %78 = load i32* %i2, align 4, !dbg !96          ; [#uses=1 type=i32] [debug line = 47:15]
  %79 = icmp slt i32 %78, 1024, !dbg !96          ; [#uses=1 type=i1] [debug line = 47:15]
  br i1 %79, label %80, label %102, !dbg !96      ; [debug line = 47:15]

; <label>:80                                      ; preds = %77
  %81 = load i32* %i2, align 4, !dbg !97          ; [#uses=1 type=i32] [debug line = 50:4]
  %82 = mul nsw i32 %81, 1024, !dbg !97           ; [#uses=1 type=i32] [debug line = 50:4]
  %83 = load i32* %j1, align 4, !dbg !97          ; [#uses=1 type=i32] [debug line = 50:4]
  %84 = add nsw i32 %82, %83, !dbg !97            ; [#uses=1 type=i32] [debug line = 50:4]
  %85 = sext i32 %84 to i64, !dbg !97             ; [#uses=1 type=i64] [debug line = 50:4]
  %86 = load float addrspace(1)** %5, align 8, !dbg !97 ; [#uses=1 type=float addrspace(1)*] [debug line = 50:4]
  %87 = getelementptr inbounds float addrspace(1)* %86, i64 %85, !dbg !97 ; [#uses=1 type=float addrspace(1)*] [debug line = 50:4]
  %88 = load float addrspace(1)* %87, align 4, !dbg !97 ; [#uses=1 type=float] [debug line = 50:4]
  %89 = load i32* %i2, align 4, !dbg !97          ; [#uses=1 type=i32] [debug line = 50:4]
  %90 = sext i32 %89 to i64, !dbg !97             ; [#uses=1 type=i64] [debug line = 50:4]
  %91 = getelementptr inbounds [1024 x float]* %a1, i32 0, i64 %90, !dbg !97 ; [#uses=1 type=float*] [debug line = 50:4]
  %92 = load float* %91, align 4, !dbg !97        ; [#uses=1 type=float] [debug line = 50:4]
  %93 = fmul float %88, %92, !dbg !97             ; [#uses=1 type=float] [debug line = 50:4]
  %94 = load i32* %j1, align 4, !dbg !97          ; [#uses=1 type=i32] [debug line = 50:4]
  %95 = sext i32 %94 to i64, !dbg !97             ; [#uses=1 type=i64] [debug line = 50:4]
  %96 = getelementptr inbounds [1024 x float]* %z2, i32 0, i64 %95, !dbg !97 ; [#uses=2 type=float*] [debug line = 50:4]
  %97 = load float* %96, align 4, !dbg !97        ; [#uses=1 type=float] [debug line = 50:4]
  %98 = fadd float %97, %93, !dbg !97             ; [#uses=1 type=float] [debug line = 50:4]
  store float %98, float* %96, align 4, !dbg !97  ; [debug line = 50:4]
  br label %99, !dbg !99                          ; [debug line = 51:3]

; <label>:99                                      ; preds = %80
  %100 = load i32* %i2, align 4, !dbg !100        ; [#uses=1 type=i32] [debug line = 47:23]
  %101 = add nsw i32 %100, 1, !dbg !100           ; [#uses=1 type=i32] [debug line = 47:23]
  store i32 %101, i32* %i2, align 4, !dbg !100    ; [debug line = 47:23]
  br label %77, !dbg !100                         ; [debug line = 47:23]

; <label>:102                                     ; preds = %77
  %103 = load i32* %j1, align 4, !dbg !101        ; [#uses=1 type=i32] [debug line = 53:3]
  %104 = sext i32 %103 to i64, !dbg !101          ; [#uses=1 type=i64] [debug line = 53:3]
  %105 = load float addrspace(1)** %6, align 8, !dbg !101 ; [#uses=1 type=float addrspace(1)*] [debug line = 53:3]
  %106 = getelementptr inbounds float addrspace(1)* %105, i64 %104, !dbg !101 ; [#uses=1 type=float addrspace(1)*] [debug line = 53:3]
  %107 = load float addrspace(1)* %106, align 4, !dbg !101 ; [#uses=1 type=float] [debug line = 53:3]
  %108 = load i32* %j1, align 4, !dbg !101        ; [#uses=1 type=i32] [debug line = 53:3]
  %109 = sext i32 %108 to i64, !dbg !101          ; [#uses=1 type=i64] [debug line = 53:3]
  %110 = getelementptr inbounds [1024 x float]* %z2, i32 0, i64 %109, !dbg !101 ; [#uses=2 type=float*] [debug line = 53:3]
  %111 = load float* %110, align 4, !dbg !101     ; [#uses=1 type=float] [debug line = 53:3]
  %112 = fadd float %111, %107, !dbg !101         ; [#uses=1 type=float] [debug line = 53:3]
  store float %112, float* %110, align 4, !dbg !101 ; [debug line = 53:3]
  %113 = load i32* %j1, align 4, !dbg !102        ; [#uses=1 type=i32] [debug line = 56:9]
  %114 = sext i32 %113 to i64, !dbg !102          ; [#uses=1 type=i64] [debug line = 56:9]
  %115 = getelementptr inbounds [1024 x float]* %z2, i32 0, i64 %114, !dbg !102 ; [#uses=1 type=float*] [debug line = 56:9]
  %116 = load float* %115, align 4, !dbg !102     ; [#uses=1 type=float] [debug line = 56:9]
  %117 = call spir_func float @_Z4reluf(float %116), !dbg !102 ; [#uses=1 type=float] [debug line = 56:9]
  %118 = load i32* %j1, align 4, !dbg !102        ; [#uses=1 type=i32] [debug line = 56:9]
  %119 = sext i32 %118 to i64, !dbg !102          ; [#uses=1 type=i64] [debug line = 56:9]
  %120 = getelementptr inbounds [1024 x float]* %a2, i32 0, i64 %119, !dbg !102 ; [#uses=1 type=float*] [debug line = 56:9]
  store float %117, float* %120, align 4, !dbg !102 ; [debug line = 56:9]
  call spir_func void (...)* @_Z15_ssdm_RegionEndz(i8* bitcast ([8 x i8] addrspace(2)* @.str1 to i8*)) nounwind, !dbg !103 ; [debug line = 57:2]
  br label %121, !dbg !103                        ; [debug line = 57:2]

; <label>:121                                     ; preds = %102
  %122 = load i32* %j1, align 4, !dbg !104        ; [#uses=1 type=i32] [debug line = 44:30]
  %123 = add nsw i32 %122, 1, !dbg !104           ; [#uses=1 type=i32] [debug line = 44:30]
  store i32 %123, i32* %j1, align 4, !dbg !104    ; [debug line = 44:30]
  br label %70, !dbg !104                         ; [debug line = 44:30]

; <label>:124                                     ; preds = %70
  call void @llvm.dbg.declare(metadata !{[10 x float]* %z3}, metadata !105), !dbg !109 ; [debug line = 58:8] [debug variable = z3]
  call void @llvm.dbg.declare(metadata !{[10 x float]* %a3}, metadata !110), !dbg !111 ; [debug line = 59:8] [debug variable = a3]
  br label %125, !dbg !112                        ; [debug line = 59:20]

; <label>:125                                     ; preds = %124
  call void @llvm.dbg.declare(metadata !{i32* %j3}, metadata !113), !dbg !115 ; [debug line = 61:19] [debug variable = j]
  store i32 0, i32* %j3, align 4, !dbg !116       ; [debug line = 61:22]
  br label %126, !dbg !116                        ; [debug line = 61:22]

; <label>:126                                     ; preds = %169, %125
  %127 = load i32* %j3, align 4, !dbg !116        ; [#uses=1 type=i32] [debug line = 61:22]
  %128 = icmp slt i32 %127, 10, !dbg !116         ; [#uses=1 type=i1] [debug line = 61:22]
  br i1 %128, label %129, label %172, !dbg !116   ; [debug line = 61:22]

; <label>:129                                     ; preds = %126
  call spir_func void (...)* @_Z21_ssdm_op_SpecLoopNamez(i8* bitcast ([8 x i8] addrspace(2)* @.str2 to i8*)) nounwind, !dbg !117 ; [debug line = 61:40]
  call spir_func void (...)* @_Z17_ssdm_RegionBeginz(i8* bitcast ([8 x i8] addrspace(2)* @.str2 to i8*)) nounwind, !dbg !117 ; [debug line = 61:40]
  %130 = load i32* %j3, align 4, !dbg !119        ; [#uses=1 type=i32] [debug line = 63:3]
  %131 = sext i32 %130 to i64, !dbg !119          ; [#uses=1 type=i64] [debug line = 63:3]
  %132 = getelementptr inbounds [10 x float]* %z3, i32 0, i64 %131, !dbg !119 ; [#uses=1 type=float*] [debug line = 63:3]
  store float 0.000000e+00, float* %132, align 4, !dbg !119 ; [debug line = 63:3]
  call void @llvm.dbg.declare(metadata !{i32* %i4}, metadata !120), !dbg !122 ; [debug line = 64:12] [debug variable = i]
  store i32 0, i32* %i4, align 4, !dbg !123       ; [debug line = 64:15]
  br label %133, !dbg !123                        ; [debug line = 64:15]

; <label>:133                                     ; preds = %155, %129
  %134 = load i32* %i4, align 4, !dbg !123        ; [#uses=1 type=i32] [debug line = 64:15]
  %135 = icmp slt i32 %134, 1024, !dbg !123       ; [#uses=1 type=i1] [debug line = 64:15]
  br i1 %135, label %136, label %158, !dbg !123   ; [debug line = 64:15]

; <label>:136                                     ; preds = %133
  %137 = load i32* %i4, align 4, !dbg !124        ; [#uses=1 type=i32] [debug line = 67:4]
  %138 = mul nsw i32 %137, 10, !dbg !124          ; [#uses=1 type=i32] [debug line = 67:4]
  %139 = load i32* %j3, align 4, !dbg !124        ; [#uses=1 type=i32] [debug line = 67:4]
  %140 = add nsw i32 %138, %139, !dbg !124        ; [#uses=1 type=i32] [debug line = 67:4]
  %141 = sext i32 %140 to i64, !dbg !124          ; [#uses=1 type=i64] [debug line = 67:4]
  %142 = load float addrspace(1)** %7, align 8, !dbg !124 ; [#uses=1 type=float addrspace(1)*] [debug line = 67:4]
  %143 = getelementptr inbounds float addrspace(1)* %142, i64 %141, !dbg !124 ; [#uses=1 type=float addrspace(1)*] [debug line = 67:4]
  %144 = load float addrspace(1)* %143, align 4, !dbg !124 ; [#uses=1 type=float] [debug line = 67:4]
  %145 = load i32* %i4, align 4, !dbg !124        ; [#uses=1 type=i32] [debug line = 67:4]
  %146 = sext i32 %145 to i64, !dbg !124          ; [#uses=1 type=i64] [debug line = 67:4]
  %147 = getelementptr inbounds [1024 x float]* %a2, i32 0, i64 %146, !dbg !124 ; [#uses=1 type=float*] [debug line = 67:4]
  %148 = load float* %147, align 4, !dbg !124     ; [#uses=1 type=float] [debug line = 67:4]
  %149 = fmul float %144, %148, !dbg !124         ; [#uses=1 type=float] [debug line = 67:4]
  %150 = load i32* %j3, align 4, !dbg !124        ; [#uses=1 type=i32] [debug line = 67:4]
  %151 = sext i32 %150 to i64, !dbg !124          ; [#uses=1 type=i64] [debug line = 67:4]
  %152 = getelementptr inbounds [10 x float]* %z3, i32 0, i64 %151, !dbg !124 ; [#uses=2 type=float*] [debug line = 67:4]
  %153 = load float* %152, align 4, !dbg !124     ; [#uses=1 type=float] [debug line = 67:4]
  %154 = fadd float %153, %149, !dbg !124         ; [#uses=1 type=float] [debug line = 67:4]
  store float %154, float* %152, align 4, !dbg !124 ; [debug line = 67:4]
  br label %155, !dbg !126                        ; [debug line = 68:3]

; <label>:155                                     ; preds = %136
  %156 = load i32* %i4, align 4, !dbg !127        ; [#uses=1 type=i32] [debug line = 64:23]
  %157 = add nsw i32 %156, 1, !dbg !127           ; [#uses=1 type=i32] [debug line = 64:23]
  store i32 %157, i32* %i4, align 4, !dbg !127    ; [debug line = 64:23]
  br label %133, !dbg !127                        ; [debug line = 64:23]

; <label>:158                                     ; preds = %133
  %159 = load i32* %j3, align 4, !dbg !128        ; [#uses=1 type=i32] [debug line = 70:3]
  %160 = sext i32 %159 to i64, !dbg !128          ; [#uses=1 type=i64] [debug line = 70:3]
  %161 = load float addrspace(1)** %8, align 8, !dbg !128 ; [#uses=1 type=float addrspace(1)*] [debug line = 70:3]
  %162 = getelementptr inbounds float addrspace(1)* %161, i64 %160, !dbg !128 ; [#uses=1 type=float addrspace(1)*] [debug line = 70:3]
  %163 = load float addrspace(1)* %162, align 4, !dbg !128 ; [#uses=1 type=float] [debug line = 70:3]
  %164 = load i32* %j3, align 4, !dbg !128        ; [#uses=1 type=i32] [debug line = 70:3]
  %165 = sext i32 %164 to i64, !dbg !128          ; [#uses=1 type=i64] [debug line = 70:3]
  %166 = getelementptr inbounds [10 x float]* %z3, i32 0, i64 %165, !dbg !128 ; [#uses=2 type=float*] [debug line = 70:3]
  %167 = load float* %166, align 4, !dbg !128     ; [#uses=1 type=float] [debug line = 70:3]
  %168 = fadd float %167, %163, !dbg !128         ; [#uses=1 type=float] [debug line = 70:3]
  store float %168, float* %166, align 4, !dbg !128 ; [debug line = 70:3]
  call spir_func void (...)* @_Z15_ssdm_RegionEndz(i8* bitcast ([8 x i8] addrspace(2)* @.str2 to i8*)) nounwind, !dbg !129 ; [debug line = 71:2]
  br label %169, !dbg !129                        ; [debug line = 71:2]

; <label>:169                                     ; preds = %158
  %170 = load i32* %j3, align 4, !dbg !130        ; [#uses=1 type=i32] [debug line = 61:34]
  %171 = add nsw i32 %170, 1, !dbg !130           ; [#uses=1 type=i32] [debug line = 61:34]
  store i32 %171, i32* %j3, align 4, !dbg !130    ; [debug line = 61:34]
  br label %126, !dbg !130                        ; [debug line = 61:34]

; <label>:172                                     ; preds = %126
  call void @llvm.dbg.declare(metadata !{float* %max}, metadata !131), !dbg !132 ; [debug line = 75:8] [debug variable = max]
  store float 0.000000e+00, float* %max, align 4, !dbg !133 ; [debug line = 75:18]
  call void @llvm.dbg.declare(metadata !{float* %sum}, metadata !134), !dbg !135 ; [debug line = 76:8] [debug variable = sum]
  store float 0.000000e+00, float* %sum, align 4, !dbg !136 ; [debug line = 76:18]
  br label %173, !dbg !136                        ; [debug line = 76:18]

; <label>:173                                     ; preds = %172
  call void @llvm.dbg.declare(metadata !{i32* %i5}, metadata !137), !dbg !139 ; [debug line = 78:26] [debug variable = i]
  store i32 0, i32* %i5, align 4, !dbg !140       ; [debug line = 78:29]
  br label %174, !dbg !140                        ; [debug line = 78:29]

; <label>:174                                     ; preds = %190, %173
  %175 = load i32* %i5, align 4, !dbg !140        ; [#uses=1 type=i32] [debug line = 78:29]
  %176 = icmp slt i32 %175, 10, !dbg !140         ; [#uses=1 type=i1] [debug line = 78:29]
  br i1 %176, label %177, label %193, !dbg !140   ; [debug line = 78:29]

; <label>:177                                     ; preds = %174
  call spir_func void (...)* @_Z21_ssdm_op_SpecLoopNamez(i8* bitcast ([15 x i8] addrspace(2)* @.str3 to i8*)) nounwind, !dbg !141 ; [debug line = 78:48]
  call spir_func void (...)* @_Z17_ssdm_RegionBeginz(i8* bitcast ([15 x i8] addrspace(2)* @.str3 to i8*)) nounwind, !dbg !141 ; [debug line = 78:48]
  %178 = load float* %max, align 4, !dbg !141     ; [#uses=1 type=float] [debug line = 78:48]
  %179 = load i32* %i5, align 4, !dbg !141        ; [#uses=1 type=i32] [debug line = 78:48]
  %180 = sext i32 %179 to i64, !dbg !141          ; [#uses=1 type=i64] [debug line = 78:48]
  %181 = getelementptr inbounds [10 x float]* %z3, i32 0, i64 %180, !dbg !141 ; [#uses=1 type=float*] [debug line = 78:48]
  %182 = load float* %181, align 4, !dbg !141     ; [#uses=1 type=float] [debug line = 78:48]
  %183 = fcmp olt float %178, %182, !dbg !141     ; [#uses=1 type=i1] [debug line = 78:48]
  br i1 %183, label %184, label %189, !dbg !141   ; [debug line = 78:48]

; <label>:184                                     ; preds = %177
  %185 = load i32* %i5, align 4, !dbg !143        ; [#uses=1 type=i32] [debug line = 78:64]
  %186 = sext i32 %185 to i64, !dbg !143          ; [#uses=1 type=i64] [debug line = 78:64]
  %187 = getelementptr inbounds [10 x float]* %z3, i32 0, i64 %186, !dbg !143 ; [#uses=1 type=float*] [debug line = 78:64]
  %188 = load float* %187, align 4, !dbg !143     ; [#uses=1 type=float] [debug line = 78:64]
  store float %188, float* %max, align 4, !dbg !143 ; [debug line = 78:64]
  br label %189, !dbg !143                        ; [debug line = 78:64]

; <label>:189                                     ; preds = %184, %177
  call spir_func void (...)* @_Z15_ssdm_RegionEndz(i8* bitcast ([15 x i8] addrspace(2)* @.str3 to i8*)) nounwind, !dbg !144 ; [debug line = 78:74]
  br label %190, !dbg !144                        ; [debug line = 78:74]

; <label>:190                                     ; preds = %189
  %191 = load i32* %i5, align 4, !dbg !145        ; [#uses=1 type=i32] [debug line = 78:43]
  %192 = add nsw i32 %191, 1, !dbg !145           ; [#uses=1 type=i32] [debug line = 78:43]
  store i32 %192, i32* %i5, align 4, !dbg !145    ; [debug line = 78:43]
  br label %174, !dbg !145                        ; [debug line = 78:43]

; <label>:193                                     ; preds = %174
  br label %194, !dbg !146                        ; [debug line = 78:74]

; <label>:194                                     ; preds = %193
  call void @llvm.dbg.declare(metadata !{i32* %i6}, metadata !147), !dbg !149 ; [debug line = 79:20] [debug variable = i]
  store i32 0, i32* %i6, align 4, !dbg !150       ; [debug line = 79:23]
  br label %195, !dbg !150                        ; [debug line = 79:23]

; <label>:195                                     ; preds = %215, %194
  %196 = load i32* %i6, align 4, !dbg !150        ; [#uses=1 type=i32] [debug line = 79:23]
  %197 = icmp slt i32 %196, 10, !dbg !150         ; [#uses=1 type=i1] [debug line = 79:23]
  br i1 %197, label %198, label %218, !dbg !150   ; [debug line = 79:23]

; <label>:198                                     ; preds = %195
  call spir_func void (...)* @_Z21_ssdm_op_SpecLoopNamez(i8* bitcast ([9 x i8] addrspace(2)* @.str4 to i8*)) nounwind, !dbg !151 ; [debug line = 79:43]
  call spir_func void (...)* @_Z17_ssdm_RegionBeginz(i8* bitcast ([9 x i8] addrspace(2)* @.str4 to i8*)) nounwind, !dbg !151 ; [debug line = 79:43]
  %199 = load i32* %i6, align 4, !dbg !153        ; [#uses=1 type=i32] [debug line = 80:11]
  %200 = sext i32 %199 to i64, !dbg !153          ; [#uses=1 type=i64] [debug line = 80:11]
  %201 = getelementptr inbounds [10 x float]* %z3, i32 0, i64 %200, !dbg !153 ; [#uses=1 type=float*] [debug line = 80:11]
  %202 = load float* %201, align 4, !dbg !153     ; [#uses=1 type=float] [debug line = 80:11]
  %203 = load float* %max, align 4, !dbg !153     ; [#uses=1 type=float] [debug line = 80:11]
  %204 = fsub float %202, %203, !dbg !153         ; [#uses=1 type=float] [debug line = 80:11]
  %205 = call spir_func float @_Z3expf(float %204), !dbg !153 ; [#uses=1 type=float] [debug line = 80:11]
  %206 = load i32* %i6, align 4, !dbg !153        ; [#uses=1 type=i32] [debug line = 80:11]
  %207 = sext i32 %206 to i64, !dbg !153          ; [#uses=1 type=i64] [debug line = 80:11]
  %208 = getelementptr inbounds [10 x float]* %a3, i32 0, i64 %207, !dbg !153 ; [#uses=1 type=float*] [debug line = 80:11]
  store float %205, float* %208, align 4, !dbg !153 ; [debug line = 80:11]
  %209 = load i32* %i6, align 4, !dbg !154        ; [#uses=1 type=i32] [debug line = 81:3]
  %210 = sext i32 %209 to i64, !dbg !154          ; [#uses=1 type=i64] [debug line = 81:3]
  %211 = getelementptr inbounds [10 x float]* %a3, i32 0, i64 %210, !dbg !154 ; [#uses=1 type=float*] [debug line = 81:3]
  %212 = load float* %211, align 4, !dbg !154     ; [#uses=1 type=float] [debug line = 81:3]
  %213 = load float* %sum, align 4, !dbg !154     ; [#uses=1 type=float] [debug line = 81:3]
  %214 = fadd float %213, %212, !dbg !154         ; [#uses=1 type=float] [debug line = 81:3]
  store float %214, float* %sum, align 4, !dbg !154 ; [debug line = 81:3]
  call spir_func void (...)* @_Z15_ssdm_RegionEndz(i8* bitcast ([9 x i8] addrspace(2)* @.str4 to i8*)) nounwind, !dbg !155 ; [debug line = 82:2]
  br label %215, !dbg !155                        ; [debug line = 82:2]

; <label>:215                                     ; preds = %198
  %216 = load i32* %i6, align 4, !dbg !156        ; [#uses=1 type=i32] [debug line = 79:37]
  %217 = add nsw i32 %216, 1, !dbg !156           ; [#uses=1 type=i32] [debug line = 79:37]
  store i32 %217, i32* %i6, align 4, !dbg !156    ; [debug line = 79:37]
  br label %195, !dbg !156                        ; [debug line = 79:37]

; <label>:218                                     ; preds = %195
  br label %219, !dbg !157                        ; [debug line = 82:2]

; <label>:219                                     ; preds = %218
  call void @llvm.dbg.declare(metadata !{i32* %i7}, metadata !158), !dbg !160 ; [debug line = 85:24] [debug variable = i]
  store i32 0, i32* %i7, align 4, !dbg !161       ; [debug line = 85:27]
  br label %220, !dbg !161                        ; [debug line = 85:27]

; <label>:220                                     ; preds = %234, %219
  %221 = load i32* %i7, align 4, !dbg !161        ; [#uses=1 type=i32] [debug line = 85:27]
  %222 = icmp slt i32 %221, 10, !dbg !161         ; [#uses=1 type=i1] [debug line = 85:27]
  br i1 %222, label %223, label %237, !dbg !161   ; [debug line = 85:27]

; <label>:223                                     ; preds = %220
  call spir_func void (...)* @_Z21_ssdm_op_SpecLoopNamez(i8* bitcast ([13 x i8] addrspace(2)* @.str5 to i8*)) nounwind, !dbg !162 ; [debug line = 85:46]
  call spir_func void (...)* @_Z17_ssdm_RegionBeginz(i8* bitcast ([13 x i8] addrspace(2)* @.str5 to i8*)) nounwind, !dbg !162 ; [debug line = 85:46]
  %224 = load i32* %i7, align 4, !dbg !162        ; [#uses=1 type=i32] [debug line = 85:46]
  %225 = sext i32 %224 to i64, !dbg !162          ; [#uses=1 type=i64] [debug line = 85:46]
  %226 = getelementptr inbounds [10 x float]* %a3, i32 0, i64 %225, !dbg !162 ; [#uses=1 type=float*] [debug line = 85:46]
  %227 = load float* %226, align 4, !dbg !162     ; [#uses=1 type=float] [debug line = 85:46]
  %228 = load float* %sum, align 4, !dbg !162     ; [#uses=1 type=float] [debug line = 85:46]
  %229 = fdiv float %227, %228, !dbg !162, !fpmath !74 ; [#uses=1 type=float] [debug line = 85:46]
  %230 = load i32* %i7, align 4, !dbg !162        ; [#uses=1 type=i32] [debug line = 85:46]
  %231 = sext i32 %230 to i64, !dbg !162          ; [#uses=1 type=i64] [debug line = 85:46]
  %232 = load float addrspace(1)** %2, align 8, !dbg !162 ; [#uses=1 type=float addrspace(1)*] [debug line = 85:46]
  %233 = getelementptr inbounds float addrspace(1)* %232, i64 %231, !dbg !162 ; [#uses=1 type=float addrspace(1)*] [debug line = 85:46]
  store float %229, float addrspace(1)* %233, align 4, !dbg !162 ; [debug line = 85:46]
  call spir_func void (...)* @_Z15_ssdm_RegionEndz(i8* bitcast ([13 x i8] addrspace(2)* @.str5 to i8*)) nounwind, !dbg !164 ; [debug line = 85:66]
  br label %234, !dbg !164                        ; [debug line = 85:66]

; <label>:234                                     ; preds = %223
  %235 = load i32* %i7, align 4, !dbg !165        ; [#uses=1 type=i32] [debug line = 85:41]
  %236 = add nsw i32 %235, 1, !dbg !165           ; [#uses=1 type=i32] [debug line = 85:41]
  store i32 %236, i32* %i7, align 4, !dbg !165    ; [debug line = 85:41]
  br label %220, !dbg !165                        ; [debug line = 85:41]

; <label>:237                                     ; preds = %220
  ret void, !dbg !166                             ; [debug line = 86:1]
}

; [#uses=6]
declare spir_func void @_Z21_ssdm_op_SpecLoopNamez(...) nounwind

; [#uses=6]
declare spir_func void @_Z17_ssdm_RegionBeginz(...) nounwind

; [#uses=6]
declare spir_func void @_Z15_ssdm_RegionEndz(...) nounwind

; [#uses=1]
declare spir_func float @_Z3expf(float)

!llvm.dbg.cu = !{!0}
!opencl.kernels = !{!20}
!hls.encrypted.func = !{}

!0 = metadata !{i32 786449, i32 0, i32 12, metadata !"/home/h-ninomiya/SDAccel_Examples/vision/forward_aligned/src/krnl_forward.cl", metadata !"/home/h-ninomiya/SDAccel_Examples/vision/forward_aligned/_xocc_compile_krnl_forward_krnl_forward.sw_emu.xilinx_kcu1500_4ddr-xpr_4_0.dir/impl/kernels/forward_kernel", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !3, metadata !1} ; [ DW_TAG_compile_unit ]
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !5, metadata !12, metadata !13}
!5 = metadata !{i32 786478, i32 0, metadata !6, metadata !"relu", metadata !"relu", metadata !"_Z4reluf", metadata !6, i32 2, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, float (float)* @_Z4reluf, null, null, metadata !10, i32 2} ; [ DW_TAG_subprogram ]
!6 = metadata !{i32 786473, metadata !"/home/h-ninomiya/SDAccel_Examples/vision/forward_aligned/src/krnl_forward.cl", metadata !"/home/h-ninomiya/SDAccel_Examples/vision/forward_aligned/_xocc_compile_krnl_forward_krnl_forward.sw_emu.xilinx_kcu1500_4ddr-xpr_4_0.dir/impl/kernels/forward_kernel", null} ; [ DW_TAG_file_type ]
!7 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !8, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!8 = metadata !{metadata !9, metadata !9}
!9 = metadata !{i32 786468, null, metadata !"float", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 4} ; [ DW_TAG_base_type ]
!10 = metadata !{metadata !11}
!11 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!12 = metadata !{i32 786478, i32 0, metadata !6, metadata !"diff_relu", metadata !"diff_relu", metadata !"_Z9diff_reluf", metadata !6, i32 6, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, float (float)* @_Z9diff_reluf, null, null, metadata !10, i32 6} ; [ DW_TAG_subprogram ]
!13 = metadata !{i32 786478, i32 0, metadata !6, metadata !"forward_kernel", metadata !"forward_kernel", metadata !"", metadata !6, i32 11, metadata !14, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void (i8 addrspace(1)*, float addrspace(1)*, float addrspace(1)*, float addrspace(1)*, float addrspace(1)*, float addrspace(1)*, float addrspace(1)*, float addrspace(1)*)* @forward_kernel, null, null, metadata !10, i32 20} ; [ DW_TAG_subprogram ]
!14 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !15, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!15 = metadata !{null, metadata !16, metadata !19, metadata !19, metadata !19, metadata !19, metadata !19, metadata !19, metadata !19}
!16 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !17} ; [ DW_TAG_pointer_type ]
!17 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !18} ; [ DW_TAG_const_type ]
!18 = metadata !{i32 786468, null, metadata !"unsigned char", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 8} ; [ DW_TAG_base_type ]
!19 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !9} ; [ DW_TAG_pointer_type ]
!20 = metadata !{void (i8 addrspace(1)*, float addrspace(1)*, float addrspace(1)*, float addrspace(1)*, float addrspace(1)*, float addrspace(1)*, float addrspace(1)*, float addrspace(1)*)* @forward_kernel, metadata !21, metadata !22, metadata !23, metadata !24, metadata !25, metadata !26}
!21 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1, i32 1, i32 1, i32 1, i32 1, i32 1, i32 1}
!22 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none", metadata !"none", metadata !"none", metadata !"none", metadata !"none", metadata !"none"}
!23 = metadata !{metadata !"kernel_arg_type", metadata !"uchar*", metadata !"float*", metadata !"float*", metadata !"float*", metadata !"float*", metadata !"float*", metadata !"float*", metadata !"float*"}
!24 = metadata !{metadata !"kernel_arg_type_qual", metadata !"const", metadata !"", metadata !"", metadata !"", metadata !"", metadata !"", metadata !"", metadata !""}
!25 = metadata !{metadata !"kernel_arg_name", metadata !"src_data", metadata !"dst_data", metadata !"w01", metadata !"b1", metadata !"w12", metadata !"b2", metadata !"w23", metadata !"b3"}
!26 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!27 = metadata !{i32 786689, metadata !5, metadata !"a", metadata !6, i32 16777218, metadata !9, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!28 = metadata !{i32 2, i32 18, metadata !5, null}
!29 = metadata !{i32 3, i32 2, metadata !30, null}
!30 = metadata !{i32 786443, metadata !5, i32 2, i32 21, metadata !6, i32 0} ; [ DW_TAG_lexical_block ]
!31 = metadata !{i32 786689, metadata !12, metadata !"a", metadata !6, i32 16777222, metadata !9, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!32 = metadata !{i32 6, i32 23, metadata !12, null}
!33 = metadata !{i32 7, i32 2, metadata !34, null}
!34 = metadata !{i32 786443, metadata !12, i32 6, i32 26, metadata !6, i32 1} ; [ DW_TAG_lexical_block ]
!35 = metadata !{i32 786689, metadata !13, metadata !"src_data", metadata !6, i32 16777227, metadata !16, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!36 = metadata !{i32 11, i32 49, metadata !13, null}
!37 = metadata !{i32 786689, metadata !13, metadata !"dst_data", metadata !6, i32 33554444, metadata !19, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!38 = metadata !{i32 12, i32 31, metadata !13, null}
!39 = metadata !{i32 786689, metadata !13, metadata !"w01", metadata !6, i32 50331661, metadata !19, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!40 = metadata !{i32 13, i32 31, metadata !13, null}
!41 = metadata !{i32 786689, metadata !13, metadata !"b1", metadata !6, i32 67108878, metadata !19, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!42 = metadata !{i32 14, i32 31, metadata !13, null}
!43 = metadata !{i32 786689, metadata !13, metadata !"w12", metadata !6, i32 83886095, metadata !19, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!44 = metadata !{i32 15, i32 31, metadata !13, null}
!45 = metadata !{i32 786689, metadata !13, metadata !"b2", metadata !6, i32 100663312, metadata !19, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!46 = metadata !{i32 16, i32 31, metadata !13, null}
!47 = metadata !{i32 786689, metadata !13, metadata !"w23", metadata !6, i32 117440529, metadata !19, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!48 = metadata !{i32 17, i32 31, metadata !13, null}
!49 = metadata !{i32 786689, metadata !13, metadata !"b3", metadata !6, i32 134217746, metadata !19, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!50 = metadata !{i32 18, i32 31, metadata !13, null}
!51 = metadata !{i32 786688, metadata !52, metadata !"z1", metadata !6, i32 21, metadata !53, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!52 = metadata !{i32 786443, metadata !13, i32 20, i32 1, metadata !6, i32 2} ; [ DW_TAG_lexical_block ]
!53 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 32768, i64 32, i32 0, i32 0, metadata !9, metadata !54, i32 0, i32 0} ; [ DW_TAG_array_type ]
!54 = metadata !{metadata !55}
!55 = metadata !{i32 786465, i64 0, i64 1023}     ; [ DW_TAG_subrange_type ]
!56 = metadata !{i32 21, i32 8, metadata !52, null}
!57 = metadata !{i32 786688, metadata !52, metadata !"a1", metadata !6, i32 22, metadata !53, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!58 = metadata !{i32 22, i32 8, metadata !52, null}
!59 = metadata !{i32 22, i32 16, metadata !52, null}
!60 = metadata !{i32 786688, metadata !61, metadata !"j", metadata !6, i32 25, metadata !62, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!61 = metadata !{i32 786443, metadata !52, i32 25, i32 10, metadata !6, i32 3} ; [ DW_TAG_lexical_block ]
!62 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!63 = metadata !{i32 25, i32 19, metadata !61, null}
!64 = metadata !{i32 25, i32 22, metadata !61, null}
!65 = metadata !{i32 25, i32 36, metadata !66, null}
!66 = metadata !{i32 786443, metadata !61, i32 25, i32 35, metadata !6, i32 4} ; [ DW_TAG_lexical_block ]
!67 = metadata !{i32 27, i32 3, metadata !66, null}
!68 = metadata !{i32 786688, metadata !69, metadata !"i", metadata !6, i32 28, metadata !62, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!69 = metadata !{i32 786443, metadata !66, i32 28, i32 3, metadata !6, i32 5} ; [ DW_TAG_lexical_block ]
!70 = metadata !{i32 28, i32 12, metadata !69, null}
!71 = metadata !{i32 28, i32 15, metadata !69, null}
!72 = metadata !{i32 32, i32 4, metadata !73, null}
!73 = metadata !{i32 786443, metadata !69, i32 28, i32 31, metadata !6, i32 6} ; [ DW_TAG_lexical_block ]
!74 = metadata !{float 2.500000e+00}
!75 = metadata !{i32 33, i32 3, metadata !73, null}
!76 = metadata !{i32 28, i32 26, metadata !69, null}
!77 = metadata !{i32 35, i32 3, metadata !66, null}
!78 = metadata !{i32 38, i32 9, metadata !66, null}
!79 = metadata !{i32 39, i32 2, metadata !66, null}
!80 = metadata !{i32 25, i32 30, metadata !61, null}
!81 = metadata !{i32 786688, metadata !52, metadata !"z2", metadata !6, i32 41, metadata !53, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!82 = metadata !{i32 41, i32 8, metadata !52, null}
!83 = metadata !{i32 786688, metadata !52, metadata !"a2", metadata !6, i32 42, metadata !53, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!84 = metadata !{i32 42, i32 8, metadata !52, null}
!85 = metadata !{i32 42, i32 16, metadata !52, null}
!86 = metadata !{i32 786688, metadata !87, metadata !"j", metadata !6, i32 44, metadata !62, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!87 = metadata !{i32 786443, metadata !52, i32 44, i32 10, metadata !6, i32 7} ; [ DW_TAG_lexical_block ]
!88 = metadata !{i32 44, i32 19, metadata !87, null}
!89 = metadata !{i32 44, i32 22, metadata !87, null}
!90 = metadata !{i32 44, i32 36, metadata !91, null}
!91 = metadata !{i32 786443, metadata !87, i32 44, i32 35, metadata !6, i32 8} ; [ DW_TAG_lexical_block ]
!92 = metadata !{i32 46, i32 3, metadata !91, null}
!93 = metadata !{i32 786688, metadata !94, metadata !"i", metadata !6, i32 47, metadata !62, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!94 = metadata !{i32 786443, metadata !91, i32 47, i32 3, metadata !6, i32 9} ; [ DW_TAG_lexical_block ]
!95 = metadata !{i32 47, i32 12, metadata !94, null}
!96 = metadata !{i32 47, i32 15, metadata !94, null}
!97 = metadata !{i32 50, i32 4, metadata !98, null}
!98 = metadata !{i32 786443, metadata !94, i32 47, i32 28, metadata !6, i32 10} ; [ DW_TAG_lexical_block ]
!99 = metadata !{i32 51, i32 3, metadata !98, null}
!100 = metadata !{i32 47, i32 23, metadata !94, null}
!101 = metadata !{i32 53, i32 3, metadata !91, null}
!102 = metadata !{i32 56, i32 9, metadata !91, null}
!103 = metadata !{i32 57, i32 2, metadata !91, null}
!104 = metadata !{i32 44, i32 30, metadata !87, null}
!105 = metadata !{i32 786688, metadata !52, metadata !"z3", metadata !6, i32 58, metadata !106, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!106 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 320, i64 32, i32 0, i32 0, metadata !9, metadata !107, i32 0, i32 0} ; [ DW_TAG_array_type ]
!107 = metadata !{metadata !108}
!108 = metadata !{i32 786465, i64 0, i64 9}       ; [ DW_TAG_subrange_type ]
!109 = metadata !{i32 58, i32 8, metadata !52, null}
!110 = metadata !{i32 786688, metadata !52, metadata !"a3", metadata !6, i32 59, metadata !106, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!111 = metadata !{i32 59, i32 8, metadata !52, null}
!112 = metadata !{i32 59, i32 20, metadata !52, null}
!113 = metadata !{i32 786688, metadata !114, metadata !"j", metadata !6, i32 61, metadata !62, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!114 = metadata !{i32 786443, metadata !52, i32 61, i32 10, metadata !6, i32 11} ; [ DW_TAG_lexical_block ]
!115 = metadata !{i32 61, i32 19, metadata !114, null}
!116 = metadata !{i32 61, i32 22, metadata !114, null}
!117 = metadata !{i32 61, i32 40, metadata !118, null}
!118 = metadata !{i32 786443, metadata !114, i32 61, i32 39, metadata !6, i32 12} ; [ DW_TAG_lexical_block ]
!119 = metadata !{i32 63, i32 3, metadata !118, null}
!120 = metadata !{i32 786688, metadata !121, metadata !"i", metadata !6, i32 64, metadata !62, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!121 = metadata !{i32 786443, metadata !118, i32 64, i32 3, metadata !6, i32 13} ; [ DW_TAG_lexical_block ]
!122 = metadata !{i32 64, i32 12, metadata !121, null}
!123 = metadata !{i32 64, i32 15, metadata !121, null}
!124 = metadata !{i32 67, i32 4, metadata !125, null}
!125 = metadata !{i32 786443, metadata !121, i32 64, i32 28, metadata !6, i32 14} ; [ DW_TAG_lexical_block ]
!126 = metadata !{i32 68, i32 3, metadata !125, null}
!127 = metadata !{i32 64, i32 23, metadata !121, null}
!128 = metadata !{i32 70, i32 3, metadata !118, null}
!129 = metadata !{i32 71, i32 2, metadata !118, null}
!130 = metadata !{i32 61, i32 34, metadata !114, null}
!131 = metadata !{i32 786688, metadata !52, metadata !"max", metadata !6, i32 75, metadata !9, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!132 = metadata !{i32 75, i32 8, metadata !52, null}
!133 = metadata !{i32 75, i32 18, metadata !52, null}
!134 = metadata !{i32 786688, metadata !52, metadata !"sum", metadata !6, i32 76, metadata !9, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!135 = metadata !{i32 76, i32 8, metadata !52, null}
!136 = metadata !{i32 76, i32 18, metadata !52, null}
!137 = metadata !{i32 786688, metadata !138, metadata !"i", metadata !6, i32 78, metadata !62, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!138 = metadata !{i32 786443, metadata !52, i32 78, i32 17, metadata !6, i32 15} ; [ DW_TAG_lexical_block ]
!139 = metadata !{i32 78, i32 26, metadata !138, null}
!140 = metadata !{i32 78, i32 29, metadata !138, null}
!141 = metadata !{i32 78, i32 48, metadata !142, null}
!142 = metadata !{i32 786443, metadata !138, i32 78, i32 48, metadata !6, i32 16} ; [ DW_TAG_lexical_block ]
!143 = metadata !{i32 78, i32 64, metadata !142, null}
!144 = metadata !{i32 78, i32 74, metadata !142, null}
!145 = metadata !{i32 78, i32 43, metadata !138, null}
!146 = metadata !{i32 78, i32 74, metadata !138, null}
!147 = metadata !{i32 786688, metadata !148, metadata !"i", metadata !6, i32 79, metadata !62, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!148 = metadata !{i32 786443, metadata !52, i32 79, i32 11, metadata !6, i32 17} ; [ DW_TAG_lexical_block ]
!149 = metadata !{i32 79, i32 20, metadata !148, null}
!150 = metadata !{i32 79, i32 23, metadata !148, null}
!151 = metadata !{i32 79, i32 43, metadata !152, null}
!152 = metadata !{i32 786443, metadata !148, i32 79, i32 42, metadata !6, i32 18} ; [ DW_TAG_lexical_block ]
!153 = metadata !{i32 80, i32 11, metadata !152, null}
!154 = metadata !{i32 81, i32 3, metadata !152, null}
!155 = metadata !{i32 82, i32 2, metadata !152, null}
!156 = metadata !{i32 79, i32 37, metadata !148, null}
!157 = metadata !{i32 82, i32 2, metadata !148, null}
!158 = metadata !{i32 786688, metadata !159, metadata !"i", metadata !6, i32 85, metadata !62, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!159 = metadata !{i32 786443, metadata !52, i32 85, i32 15, metadata !6, i32 19} ; [ DW_TAG_lexical_block ]
!160 = metadata !{i32 85, i32 24, metadata !159, null}
!161 = metadata !{i32 85, i32 27, metadata !159, null}
!162 = metadata !{i32 85, i32 46, metadata !163, null}
!163 = metadata !{i32 786443, metadata !159, i32 85, i32 46, metadata !6, i32 20} ; [ DW_TAG_lexical_block ]
!164 = metadata !{i32 85, i32 66, metadata !163, null}
!165 = metadata !{i32 85, i32 41, metadata !159, null}
!166 = metadata !{i32 86, i32 1, metadata !52, null}
