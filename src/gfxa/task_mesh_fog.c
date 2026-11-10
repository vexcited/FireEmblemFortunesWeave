#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a738c0(__int64, __int64, int);
__int64 GameRoutine_a73d40(__int64 result, __int64);
__int64 gxc_NvnStateCache_BindBlendState(__int64 result, int);
__int64 gxc_NvnStateCache_ClearCommandList(_QWORD);
__int64 gxc_NvnStateCache_LockBlendState(__int64 result);
__int64 gxc_NvnStateCache_LockDepthStencilState(__int64 result);
__int64 gxc_NvnStateCache_Reset(__int64 result);
__int64 gxc_NvnStateCache_SetCommandList(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_UnlockBlendState(__int64 result);
__int64 gxc_NvnStateCache_UnlockDepthStencilState(__int64 result);
extern _UNKNOWN** GameData_212e770[3];
extern __int64 (*GameData_1fc7010[])();
extern int GameData_21fdee4;
__int64 gfxa_TaskMeshFog_Impl_Execute(_DWORD* a1, _QWORD* a2, _QWORD* a3,
                                      __int64* a4, int* a5);

__int64 gfxa_TaskMeshFog_Impl_Execute(_DWORD* a1, _QWORD* a2, _QWORD* a3,
                                      __int64* a4, int* a5)
{
  int32x4_t v10;
  int32x4_t v11;
  int32x4_t v12;
  int32x4_t v13;
  int32x4_t v14;
  int32x4_t v15;
  int32x4_t v16;
  int32x4_t v17;
  float32x4_t v18;
  unsigned __int64 v19;
  int8x16_t v20;
  int8x16_t v21;
  int8x16_t v22;
  float32x4_t v23;
  __int64 v24;
  float32x4_t v25;
  int8x16_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  unsigned __int64 v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  int8x16_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  float32x4_t v52;
  int8x16_t v53;
  float32x4_t v54;
  __int64 v55;
  char v56;
  float v57;
  float v58;
  int v59;
  bool v60;
  int v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  int v65;
  __int64 v66;
  __int64 v67;
  int v68;
  int v69;
  __int64 v70;
  int v71;
  int v72;
  __int64 v73;
  int v74;
  int v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  _DWORD* v91;
  _DWORD* v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  unsigned int v96;
  __int64 v97;
  int v98;
  unsigned int v99;
  __int64 v100;
  struct {
    _QWORD v102[4];
    _QWORD* v103;
    char gap40_[16];
    int v104;
    int v105;
  } v102_;
  float32x4x4_t v106;

  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v80 = COERCE_AS(__typeof__(v80),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v96 = COERCE_AS(__typeof__(v96),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(long double*)&v10 = ((long double (*)(_QWORD)) *
                         (_QWORD*)(**(_QWORD**)a5 + 24LL))(*(_QWORD*)a5),
         v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
         v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
         v80 = COERCE_AS(__typeof__(v80),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
         v84 = COERCE_AS(__typeof__(v84),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
         v96 = COERCE_AS(__typeof__(v96),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v12 = vzip1q_s32(v10, v11);
  v15 = vzip1q_s32(v13, v14);
  v16 = vzip2q_s32(v10, v11);
  v17 = vzip2q_s32(v13, v14);
  v18 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v10).n128_u64[0]), 0);
  v19 = LANES64_OF(vdup_laneq_s32(v13, 2)).n64_u64[0];
  v20 = vzip1q_s32(v12, v15);
  v21 = vzip1q_s32(v16, v17);
  v22 = vzip2q_s32(v16, v17);
  LANES128(v18).n128_u32[0] = LANES128(v13).n128_u32[0];
  LANES128(v23).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  LANES128(v17).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v22, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  v24 = *(_QWORD*)&a1[2 * a1[38] + 34];
  *(int32x2_t*)&LANES128(v23).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v13).n128_u64[0]), 0);
  LANES128(v25).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v25).n128_i8[8] =
      vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  v26 = vzip2q_s32(v12, v15);
  v27 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v10).n128_u64[0]), 1);
  LANES128(v27).n128_u32[0] = LANES128(v13).n128_u32[1];
  LANES128(v15).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  LANES128(v28).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v15).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v13).n128_u64[0]), 1);
  LANES128(v29).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v28).n128_i8[8] =
      vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  v30 = vdupq_laneq_s32(v10, 2);
  v31 = LANES64_OF(vdup_laneq_s32(v13, 3)).n64_u64[0];
  LANES128(v30).n128_u32[0] = LANES128(v13).n128_u32[2];
  v32 = vextq_s8(v13, vdupq_laneq_s32(v10, 3), 0xCu);
  LANES128(v13).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v22, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v17).n128_u64[1] = v31;
  LANES128(v29).n128_u64[1] = v19;
  LANES128(v33).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v13).n128_i8[8] =
      vqtbl1_s8(v22, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  *(int8x8_t*)&LANES128(v33).n128_i8[8] =
      vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  LANES128(v21).n128_u64[0] = 0x3F8000003F800000LL;
  LANES128(v21).n128_u64[1] = 0x3F8000003F800000LL;
  v34 = vnegq_f64(v21);
  v35 = vsubq_f32(vmulq_f32(v29, v13), vmulq_f32(v17, v33));
  v36 = vsubq_f32(vmulq_f32(v30, v13), vmulq_f32(v32, v33));
  v37 = vsubq_f32(vmulq_f32(v30, v17), vmulq_f32(v32, v29));
  v38 = vmlsq_f32(vmulq_f32(v27, v35), v36, v15);
  v39 = vmlsq_f32(vmulq_f32(v18, v35), v36, v23);
  LANES128(v36).n128_u64[0] = 0xBF800000BF800000LL;
  LANES128(v36).n128_u64[1] = 0xBF800000BF800000LL;
  v40 = vmlaq_f32(v38, v37, v28);
  v41 = vmlaq_f32(v39, v37, v25);
  v42 = vnegq_f64(v36);
  v43 = vsubq_f32(vmulq_f32(v23, v28), vmulq_f32(v15, v25));
  v44 = vsubq_f32(vmulq_f32(v18, v28), vmulq_f32(v27, v25));
  v45 = vsubq_f32(vmulq_f32(v18, v15), vmulq_f32(v23, v27));
  v46 = vmulq_f32(v40, v34);
  v47 = vmulq_f32(v20, v46);
  v48 = vmlaq_f32(vmlsq_f32(vmulq_f32(v32, v43), v44, v17), v45, v13);
  LANES128(v47).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v47, v47, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0])))
          .n64_u64[0];
  v49 = vmulq_f32(vmlaq_f32(vmlsq_f32(vmulq_f32(v30, v43), v44, v29), v45, v33),
                  v42);
  LANES128(v47).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0])))
          .n64_u64[0];
  LANES128(v47).n128_u64[1] = LANES128(v47).n128_u64[0];
  v50 = vrecpeq_f32(v47);
  v51 = vmulq_f32(v50, vrecpsq_f32(v50, v47));
  v52 = vrecpsq_f32(v51, v47);
  v53 = vceqzq_f32(v47);
  v54 = vmulq_f32(v51, v52);
  v106.val[0] = vbicq_s8(vmulq_f32(v54, v46), v53);
  v106.val[1] = vbicq_s8(vmulq_f32(v54, vmulq_f32(v41, v42)), v53);
  v106.val[2] = vbicq_s8(vmulq_f32(vmulq_f32(v48, v34), v54), v53);
  v106.val[3] = vbicq_s8(vmulq_f32(v49, v54), v53);
  vst4q_f32((float*)v102_.v102, v106);
  v55 = (*(__int64 (**)(__int64))(*(_QWORD*)v24 + 56LL))(v24),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v80 = COERCE_AS(__typeof__(v80),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v96 = COERCE_AS(__typeof__(v96),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v56 = (*(__int64 (**)(_QWORD))(**(_QWORD**)a5 + 48LL))(*(_QWORD*)a5),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v80 = COERCE_AS(__typeof__(v80),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v96 = COERCE_AS(__typeof__(v96),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v57 = 0x0.0p+0f;
  if ((v56 & 1) != 0) {
    v58 = (*(float (**)(_QWORD, double))(**(_QWORD**)a5 + 56LL))(*(_QWORD*)a5,
                                                                 0x0.0p+0),
    v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v80 = COERCE_AS(__typeof__(v80),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v84 = COERCE_AS(__typeof__(v84),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v96 = COERCE_AS(__typeof__(v96),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v57 = v58 / (*(float (**)(_QWORD))(**(_QWORD**)a5 + 64LL))(*(_QWORD*)a5),
    v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v80 = COERCE_AS(__typeof__(v80),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v84 = COERCE_AS(__typeof__(v84),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v96 = COERCE_AS(__typeof__(v96),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  *(float*)(v55 + 8) = v57;
  *(_DWORD*)v55 = v102_.v104;
  *(_DWORD*)(v55 + 4) = v102_.v105;
  (*(void (**)(__int64))(*(_QWORD*)v24 + 64LL))(v24),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v59 = a1[52];
  v60 = v59 < -1;
  v61 = ((_BYTE)v59 + 1) & 1;
  if (v60) {
    v61 = -v61;
  }
  a1[52] = v61;
  v62 = *(_QWORD*)&a1[2 * v61 + 48];
  v63 = (*(__int64 (**)(__int64))(*(_QWORD*)v62 + 56LL))(v62),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v80 = COERCE_AS(__typeof__(v80),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v96 = COERCE_AS(__typeof__(v96),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v64 = *((_QWORD*)a5 + 1);
  v65 = *(_DWORD*)(v64 + 16);
  v66 = *(_QWORD*)(v64 + 8);
  *(_DWORD*)(v63 + 12) = 0;
  *(_QWORD*)v63 = v66;
  *(_DWORD*)(v63 + 8) = v65;
  v67 = *((_QWORD*)a5 + 1);
  v68 = *(_DWORD*)(v67 + 28);
  v69 = *(_DWORD*)(v67 + 56);
  *(_QWORD*)(v63 + 16) = *(_QWORD*)(v67 + 20);
  *(_DWORD*)(v63 + 24) = v68;
  *(_DWORD*)(v63 + 28) = v69;
  v70 = *((_QWORD*)a5 + 1);
  v71 = *(_DWORD*)(v70 + 40);
  v72 = *(_DWORD*)(v70 + 60);
  *(_QWORD*)(v63 + 32) = *(_QWORD*)(v70 + 32);
  *(_DWORD*)(v63 + 40) = v71;
  *(_DWORD*)(v63 + 44) = v72;
  v73 = *((_QWORD*)a5 + 1);
  v74 = *(_DWORD*)(v73 + 52);
  v75 = *(_DWORD*)(v73 + 64);
  v76 = *(_QWORD*)(v73 + 44);
  *(_DWORD*)(v63 + 64) = 1077936128;
  *(_QWORD*)(v63 + 48) = v76;
  *(_DWORD*)(v63 + 56) = v74;
  *(_DWORD*)(v63 + 60) = v75;
  *(_DWORD*)(v63 + 68) = *(_DWORD*)(*((_QWORD*)a5 + 1) + 4LL);
  (*(void (**)(__int64))(*(_QWORD*)v62 + 64LL))(v62),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_Reset(a4[1]),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_SetCommandList(a4[1], *a4),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v77 = a4[1];
  gxc_NvnStateCache_LockDepthStencilState(v77),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindBlendState(v77, GameData_21fdee4),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_LockBlendState(v77),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_ClearCommandList(a4[1]),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _DWORD*))GameData_212e770[0])(*a4 + 8, a1 + 62),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64))(*(_QWORD*)*a4 + 168LL))(*a4, 1),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v78 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v80 = COERCE_AS(__typeof__(v80),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v96 = COERCE_AS(__typeof__(v96),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v79 = (*(__int64 (**)(__int64))(*(_QWORD*)v78 + 32LL))(v78),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v80 = COERCE_AS(__typeof__(v80),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v96 = COERCE_AS(__typeof__(v96),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v81 = v80;
  v82 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[3] + 16LL))(a2[3]),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v80 = COERCE_AS(__typeof__(v80),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v96 = COERCE_AS(__typeof__(v96),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v83 = (*(__int64 (**)(__int64))(*(_QWORD*)v82 + 32LL))(v82),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v80 = COERCE_AS(__typeof__(v80),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v96 = COERCE_AS(__typeof__(v96),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64, __int64, __int64))(
      *(_QWORD*)*a4 + 104LL))(*a4, v79, v81, v83, v84),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, (unsigned int)a5[4], (unsigned int)a5[5]),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, (unsigned int)a5[4], (unsigned int)a5[5]),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v85 = *a4;
  v86 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v80 = COERCE_AS(__typeof__(v80),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v96 = COERCE_AS(__typeof__(v96),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v87 = v86 + 16LL * *(int*)(v86 + 16);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)v85 + 224LL))(v85, 3, 0, *(_QWORD*)(v87 + 24),
                              *(_QWORD*)(v87 + 32)),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v88 = *a4;
  v89 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[1] + 16LL))(a2[1]),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v80 = COERCE_AS(__typeof__(v80),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v96 = COERCE_AS(__typeof__(v96),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v90 = v89 + 16LL * *(int*)(v89 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v88 + 224LL))(v88, 3, 1, *(_QWORD*)(v90 + 24),
                              *(_QWORD*)(v90 + 32)),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v91 = &a1[4 * a1[38]];
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 3, *((_QWORD*)v91 + 20),
                              *((_QWORD*)v91 + 21)),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v92 = &a1[4 * a1[52]];
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 4, *((_QWORD*)v92 + 27),
                              *((_QWORD*)v92 + 28)),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v93 = *a4;
  v94 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[3] + 16LL))(a2[3]),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v80 = COERCE_AS(__typeof__(v80),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v96 = COERCE_AS(__typeof__(v96),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v95 = (*(__int64 (**)(__int64))(*(_QWORD*)v94 + 40LL))(v94),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v80 = COERCE_AS(__typeof__(v80),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v96 = COERCE_AS(__typeof__(v96),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v93 + 248LL))(v93, 3, 0, v95, v96, (unsigned int)a1[32]),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v97 = *((_QWORD*)a5 + 3);
  v98 = a5[8];
  v102_.v103 = v102_.v102;
  v102_.v102[0] = GameData_1fc7010;
  v102_.v102[1] = a2;
  v99 = GameRoutine_a738c0(v97, (__int64)v102_.v102, v98),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v80 = COERCE_AS(__typeof__(v80),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v96 = COERCE_AS(__typeof__(v96),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v102_.v103 == v102_.v102) {
    v100 = 32;
    goto LABEL_9;
  }
  if (v102_.v103 != nullptr) {
    v100 = 40;
  LABEL_9:
    (*(void (**)(__int64))(*v102_.v103 + v100))((__int64)v102_.v103),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  GameRoutine_a73d40(*((_QWORD*)a5 + 3), (__int64)a4),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_UnlockBlendState(a4[1]),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_UnlockDepthStencilState(a4[1]),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)*a4 + 168LL))(*a4, 0),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return v99;
}

#pragma GCC visibility pop
