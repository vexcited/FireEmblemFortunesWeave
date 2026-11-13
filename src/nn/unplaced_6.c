#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern __int128 GameData_1a82940;
extern __int128 GameData_1a83510;
long double nn_5b4190(__int64 a1);

long double nn_5b4190(__int64 a1)
{
  unsigned int v1;
  float* v2;
  unsigned int v3;
  float v4;
  float v5;
  unsigned int v6;
  unsigned int v7;
  float v8;
  float v9;
  unsigned int v10;
  unsigned int v11;
  float v12;
  float v13;
  unsigned int v14;
  unsigned int v15;
  float32x4_t v16;
  float v17;
  float v18;
  unsigned int v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  long double result;
  float v26;
  int8x16_t v27;
  int8x16_t v28;
  int8x16_t v29;
  int8x16_t v30;
  int8x16_t v31;
  int8x16_t v32;
  int32x4_t v33;
  int8x16_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  int32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  int8x16_t v47;
  int8x16_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  float32x4_t v52;

  {
    v1 = *(_DWORD*)(a1 + 172);
    __asm__ volatile("" ::"r"(v1));
  }
  {
    v2 = *(float**)(a1 + 160);
    __asm__ volatile("" ::"r"(v2));
  }
  v3 = 1103515245 * v1 + 12345;
  v4 = vcvts_n_f32_u32(v1, 0x20u);
  {
    v5 = v2[482];
    __asm__ volatile("" ::"w"(v5));
  }
  *(_DWORD*)(a1 + 172) = v3;
  v6 = 1103515245 * v3 + 12345;
  *(float*)&v7 = v5 + (float)((float)((float)(v4 * 0x1.0000000000000p+1f) +
                                      -0x1.0000000000000p+0f) *
                              v2[485]);
  v8 = vcvts_n_f32_u32(v3, 0x20u);
  {
    v9 = v2[483];
    __asm__ volatile("" ::"w"(v9));
  }
  *(_DWORD*)(a1 + 172) = v6;
  v10 = 1103515245 * v6 + 12345;
  *(float*)&v11 = v9 + (float)((float)((float)(v8 * 0x1.0000000000000p+1f) +
                                       -0x1.0000000000000p+0f) *
                               v2[486]);
  v12 = vcvts_n_f32_u32(v6, 0x20u);
  {
    v13 = v2[484];
    __asm__ volatile("" ::"w"(v13));
  }
  *(_DWORD*)(a1 + 172) = v10;
  v14 = 1103515245 * v10 + 12345;
  *(float*)&v15 = v13 + (float)((float)((float)(v12 * 0x1.0000000000000p+1f) +
                                        -0x1.0000000000000p+0f) *
                                v2[487]);
  HIDWORD(result) = 0;
  LANES128(v16).n128_u64[0] = __PAIR64__(v11, v7);
  {
    v17 = v2[476];
    __asm__ volatile("" ::"w"(v17));
  }
  *(_DWORD*)(a1 + 172) = v14;
  v18 = vcvts_n_f32_u32(v10, 0x20u);
  v19 = 1103515245 * v14 + 12345;
  LANES128(v16).n128_u64[1] = v15;
  {
    v20 = v17 + (float)((float)((float)(v18 * 0x1.0000000000000p+1f) +
                                -0x1.0000000000000p+0f) *
                        v2[479]);
    __asm__ volatile("" ::"w"(v20));
  }
  {
    v21 = v2[477];
    __asm__ volatile("" ::"w"(v21));
  }
  *(_DWORD*)(a1 + 172) = v19;
  *(float*)&result = v20;
  v22 = v21 + (float)((float)((float)(vcvts_n_f32_u32(v14, 0x20u) *
                                      0x1.0000000000000p+1f) +
                              -0x1.0000000000000p+0f) *
                      v2[480]);
  {
    v23 = v2[478];
    __asm__ volatile("" ::"w"(v23));
  }
  *(_DWORD*)(a1 + 172) = 1103515245 * v19 + 12345;
  {
    v24 = v2[490];
    __asm__ volatile("" ::"w"(v24));
  }
  *((float*)&result + 1) = v22;
  *((float*)&result + 2) =
      v23 + (float)((float)((float)(vcvts_n_f32_u32(v19, 0x20u) *
                                    0x1.0000000000000p+1f) +
                            -0x1.0000000000000p+0f) *
                    v2[481]);
  {
    v26 = v2[489];
    __asm__ volatile("" ::"w"(v26));
  }
  v27 = vmlaq_f32(v16, vdupq_n_s32(0xC0C90FDB),
                  vrndnq_f32(vmulq_f32(v16, vdupq_n_s32(0x3E22F983u))));
  v28 = vcgtq_f32(v27, vdupq_n_s32(0x3FC90FDBu));
  v29 = vmvnq_s8(v28);
  v30 = vbslq_s8(v28, vsubq_f32(vdupq_n_s32(0x40490FDBu), v27), v27);
  v31 = vcgtq_f32(vdupq_n_s32(0xBFC90FDB), v30);
  v32 = vsubq_f32(vdupq_n_s32(0xC0490FDB), v30);
  {
    v33 = *(int32x4_t*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c190);
    __asm__ volatile("" ::"w"(v33));
  }
  v34 = vbicq_s8(v29, v31);
  v35 = vbslq_s8(v31, v32, v30);
  PSEUDO_LOW_LANE128(v32, n128_u32, *(_DWORD*)GameData_212c190);
  v36 = vmulq_f32(v35, v35);
  v37 = vmlsq_lane_f32(
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v33).n128_u64[0]), 0), v36,
      COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0]), 0);
  PSEUDO_LOW_LANE128(
      v32, n128_f32,
      -COERCE_FLOAT(HIDWORD(
          *(_QWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c190))));
  v38 = vmlaq_f32(
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v32).n128_u64[0]), 0), v36,
      v37);
  v39 = vmlaq_f32(vdupq_laneq_s32(v33, 2), v36, v38);
  LANES128(v33).n128_u64[0] = 0x3F8000003F800000LL;
  LANES128(v33).n128_u64[1] = 0x3F8000003F800000LL;
  PSEUDO_LOW_LANE128(
      v38, n128_f32,
      -COERCE_FLOAT(HIDWORD(
          *(_OWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c190))));
  v40 = vmlaq_f32(
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v38).n128_u64[0]), 0), v36,
      v39);
  v41 = vmlaq_f32(v33, v36, v40);
  PSEUDO_LOW_LANE128(v40, n128_u32, *(_DWORD*)GameData_212c188);
  v42 = vmulq_f32(v35, v41);
  {
    v43 = *(int32x4_t*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c188);
    __asm__ volatile("" ::"w"(v43));
  }
  v44 = vmlsq_lane_f32(
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v43).n128_u64[0]), 0), v36,
      COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0]), 0);
  PSEUDO_LOW_LANE128(
      v40, n128_f32,
      -COERCE_FLOAT(HIDWORD(
          *(_QWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c188))));
  v45 = vmlaq_f32(
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v40).n128_u64[0]), 0), v36,
      v44);
  v46 = vmlaq_f32(vdupq_laneq_s32(v43, 2), v36, v45);
  PSEUDO_LOW_LANE128(v45, n128_f32, -LANES128(v43).n128_f32[3]);
  v47 = vmlaq_f32(
      v33, v36,
      vmlaq_f32(
          vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v45).n128_u64[0]), 0),
          v36, v46));
  v48 = vbslq_s8(v34, v47, vnegq_f32(v47));
  LANES128(v36).n128_u64[0] =
      LANES128(v48).n128_u32[2] |
      ((unsigned __int64)LANES128(v42).n128_u32[2] << 32);
  LANES128(v43).n128_u64[0] =
      LANES128(v48).n128_u32[1] |
      ((unsigned __int64)LANES128(v48).n128_u32[1] << 32);
  LANES128(v43).n128_u64[1] = 3212836864LL;
  LANES128(v47).n128_u64[0] = LANES128(v36).n128_u64[0];
  LANES128(v47).n128_u64[1] = LANES128(v42).n128_u32[1];
  v49 = vmulq_f32(v47, v43);
  LANES128(v47).n128_u64[0] =
      LANES128(v42).n128_u32[1] |
      ((unsigned __int64)LANES128(v42).n128_u32[1] << 32);
  LANES128(v47).n128_u64[1] = LANES128(v48).n128_u32[1];
  LANES128(v36).n128_u64[1] = 1065353216;
  v50 = vmulq_f32(v47, v36);
  LANES128(v47).n128_u64[0] =
      __ROR8__(LANES128(v48).n128_u32[2] |
                   ((unsigned __int64)LANES128(v42).n128_u32[2] << 32),
               32);
  v51 = vaddq_f32(vmulq_n_f32(v50, LANES128(v42).n128_f32[0]),
                  vmulq_f32(vmulq_n_f32(v47, LANES128(v48).n128_f32[0]),
                            COERCE_AS(float32x4_t, GameData_1a82940)));
  v52 = vaddq_f32(vmulq_n_f32(v50, LANES128(v48).n128_f32[0]),
                  vmulq_f32(vmulq_n_f32(v47, LANES128(v42).n128_f32[0]),
                            COERCE_AS(float32x4_t, GameData_1a83510)));
  *(float32x4_t*)(a1 + 704) = vmulq_n_f32(v49, v2[488]);
  *(float32x4_t*)(a1 + 720) = vmulq_n_f32(v51, v26);
  *(float32x4_t*)(a1 + 736) = vmulq_n_f32(v52, v24);
  *(long double*)(a1 + 752) = result;
  *(float32x4_t*)(a1 + 768) = v49;
  *(float32x4_t*)(a1 + 784) = v51;
  *(float32x4_t*)(a1 + 800) = v52;
  *(long double*)(a1 + 816) = result;
  return result;
}

#pragma GCC visibility pop
