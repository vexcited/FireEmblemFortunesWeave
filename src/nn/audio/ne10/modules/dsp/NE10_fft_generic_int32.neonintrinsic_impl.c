#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

float* ne10_radix_butterfly_int32_neon_5_true_false_true(float* result,
                                                         const float* a2,
                                                         int a3, int a4);
float* ne10_radix_butterfly_int32_neon_3_false_false_true(float* result,
                                                          const float* a2,
                                                          int a3, int a4);
__int64 ne10_radix_butterfly_int32_neon_4_false_false_true(
    __int64 result, __int64 a2, int32x2_t* a3, int a4, int a5, unsigned int a6);
float* ne10_radix_butterfly_int32_neon_5_true_false_false(float* result,
                                                          const float* a2,
                                                          int a3, int a4);
float* ne10_radix_butterfly_int32_neon_3_false_false_false(float* result,
                                                           const float* a2,
                                                           int a3, int a4);
__int64 ne10_radix_butterfly_int32_neon_4_false_false_false(
    __int64 result, __int64 a2, int32x2_t* a3, int a4, int a5, unsigned int a6);
__int64 ne10_radix_butterfly_int32_neon_4_false_true_true(
    __int64 result, __int64 a2, int32x2_t* a3, int a4, int a5, unsigned int a6);
float* ne10_radix_butterfly_int32_neon_5_true_true_false(float* result,
                                                         const float* a2,
                                                         int a3, int a4);
float* ne10_radix_butterfly_int32_neon_3_false_true_false(float* result,
                                                          const float* a2,
                                                          int a3, int a4);
__int64 ne10_radix_butterfly_int32_neon_4_false_true_false(
    __int64 result, __int64 a2, int32x2_t* a3, int a4, int a5, unsigned int a6);

float* ne10_radix_butterfly_int32_neon_5_true_false_true(float* result,
                                                         const float* a2,
                                                         int a3, int a4)
{
  int v4;
  int v5;
  __int64 v6;
  float32x4_t v7;
  const float* v8;
  int32x4_t v9;
  int32x4_t v10;
  int32x4_t v11;
  int32x4_t v12;
  int32x4_t v13;
  float* v14;
  float32x4_t v15;
  const float* v16;
  unsigned int v17;
  const float* v18;
  const float* v19;
  int32x4_t v20;
  float32x4_t v21;
  bool v22;
  int32x4_t v23;
  int32x4_t v24;
  int32x4_t v25;
  int32x4_t v26;
  int32x4_t v27;
  int32x4_t v28;
  float* v29;
  float32x4x2_t v30;
  float32x4x2_t v31;
  float32x4x2_t v32;
  float32x4x2_t v33;
  float32x4x2_t v34;
  float32x4x2_t v35;
  float32x4x2_t v36;
  float32x4x2_t v37;
  float32x4x2_t v38;
  float32x4x2_t v39;
  float32x4x2_t v40;

  v4 = a3 - 1;
  if (a3 >= 1) {
    v5 = a4 / 3;
    v6 = a4 / 3;
    if ((a3 & 1) != 0) {
      ((uint64_t*)&v7)[0] = 0xAAAAAAAAAAAAAAAALL;
      ((uint64_t*)&v7)[1] = 0xAAAAAAAAAAAAAAAALL;
      v8 = &a2[8 * v5];
      v30 = vld2q_f32(a2);
      a2 += 8;
      v31 = vld2q_f32(v8);
      v34 = vld2q_f32(&v8[8 * v5]);
      v9 = vnegq_f32(v7);
      v10 = vdupq_n_s32(0x9126145F);
      v11 = vqrdmulhq_s32(v34.val[0], v9);
      v34.val[0] = vqrdmulhq_s32(v34.val[1], v9);
      v34.val[1] = vqrdmulhq_s32(v31.val[0], v9);
      v31.val[0] = vqrdmulhq_s32(v31.val[1], v9);
      v31.val[1] = vqrdmulhq_s32(v30.val[0], v9);
      v30.val[0] = vqrdmulhq_s32(v30.val[1], v9);
      v30.val[1] = vaddq_s32(v34.val[1], v11);
      v12 = vaddq_s32(v31.val[0], v34.val[0]);
      v34.val[1] = vqrdmulhq_s32(v10, vsubq_s32(v34.val[1], v11));
      v31.val[0] = vqrdmulhq_s32(v10, vsubq_s32(v31.val[0], v34.val[0]));
      v39.val[0] = vaddq_s32(v31.val[1], v30.val[1]);
      v39.val[1] = vaddq_s32(v30.val[0], v12);
      v34.val[0] = vsubq_s32(v31.val[1], vshrq_n_s32(v30.val[1], 1u));
      v13 = vsubq_s32(v30.val[0], vshrq_n_s32(v12, 1u));
      vst2q_f32(result, v39);
      v30.val[0] = vaddq_s32(v31.val[0], v34.val[0]);
      v31.val[0] = vsubq_s32(v34.val[0], v31.val[0]);
      v31.val[1] = vaddq_s32(v34.val[1], v13);
      v30.val[1] = vsubq_s32(v13, v34.val[1]);
      vst2q_f32(result + 8, v31);
      v14 = result + 16;
      result += 24;
      vst2q_f32(v14, v30);
      if (a3 == 1) {
        return result;
      }
    }
    else {
      v4 = a3;
      if (a3 == 1) {
        return result;
      }
    }
    ((uint64_t*)&v15)[0] = 0xAAAAAAAAAAAAAAAALL;
    ((uint64_t*)&v15)[1] = 0xAAAAAAAAAAAAAAAALL;
    v16 = a2 + 8;
    v17 = v4 - 1;
    v18 = &a2[16 * v6 + 8];
    v19 = &a2[8 * v6 + 8];
    v20 = vdupq_n_s32(0x9126145F);
    v21 = vnegq_f32(v15);
    do {
      v22 = v17 >= 2;
      v17 -= 2;
      v32 = vld2q_f32(v16 - 8);
      v35 = vld2q_f32(v19 - 8);
      v37 = vld2q_f32(v18 - 8);
      v23 = vqrdmulhq_s32(v37.val[0], v21);
      v37.val[0] = vqrdmulhq_s32(v37.val[1], v21);
      v37.val[1] = vqrdmulhq_s32(v35.val[0], v21);
      v35.val[0] = vqrdmulhq_s32(v35.val[1], v21);
      v35.val[1] = vqrdmulhq_s32(v32.val[0], v21);
      v32.val[0] = vqrdmulhq_s32(v32.val[1], v21);
      v32.val[1] = vaddq_s32(v37.val[1], v23);
      v24 = vaddq_s32(v35.val[0], v37.val[0]);
      v37.val[1] = vqrdmulhq_s32(v20, vsubq_s32(v37.val[1], v23));
      v35.val[0] = vqrdmulhq_s32(v20, vsubq_s32(v35.val[0], v37.val[0]));
      v40.val[0] = vaddq_s32(v35.val[1], v32.val[1]);
      v40.val[1] = vaddq_s32(v32.val[0], v24);
      v37.val[0] = vsubq_s32(v35.val[1], vshrq_n_s32(v32.val[1], 1u));
      v25 = vsubq_s32(v32.val[0], vshrq_n_s32(v24, 1u));
      vst2q_f32(result, v40);
      v32.val[0] = vaddq_s32(v35.val[0], v37.val[0]);
      v35.val[0] = vsubq_s32(v37.val[0], v35.val[0]);
      v35.val[1] = vaddq_s32(v37.val[1], v25);
      v32.val[1] = vsubq_s32(v25, v37.val[1]);
      vst2q_f32(result + 8, v35);
      vst2q_f32(result + 16, v32);
      v36 = vld2q_f32(v19);
      v38 = vld2q_f32(v18);
      v33 = vld2q_f32(v16);
      v18 += 16;
      v19 += 16;
      v16 += 16;
      v26 = vqrdmulhq_s32(v38.val[0], v21);
      v38.val[0] = vqrdmulhq_s32(v38.val[1], v21);
      v38.val[1] = vqrdmulhq_s32(v36.val[0], v21);
      v36.val[0] = vqrdmulhq_s32(v36.val[1], v21);
      v36.val[1] = vqrdmulhq_s32(v33.val[0], v21);
      v33.val[0] = vqrdmulhq_s32(v33.val[1], v21);
      v33.val[1] = vaddq_s32(v38.val[1], v26);
      v27 = vaddq_s32(v36.val[0], v38.val[0]);
      v38.val[1] = vqrdmulhq_s32(v20, vsubq_s32(v38.val[1], v26));
      v36.val[0] = vqrdmulhq_s32(v20, vsubq_s32(v36.val[0], v38.val[0]));
      v40.val[0] = vaddq_s32(v36.val[1], v33.val[1]);
      v40.val[1] = vaddq_s32(v33.val[0], v27);
      v38.val[0] = vsubq_s32(v36.val[1], vshrq_n_s32(v33.val[1], 1u));
      v28 = vsubq_s32(v33.val[0], vshrq_n_s32(v27, 1u));
      vst2q_f32(result + 24, v40);
      v33.val[0] = vaddq_s32(v36.val[0], v38.val[0]);
      v36.val[0] = vsubq_s32(v38.val[0], v36.val[0]);
      v36.val[1] = vaddq_s32(v38.val[1], v28);
      v33.val[1] = vsubq_s32(v28, v38.val[1]);
      vst2q_f32(result + 32, v36);
      v29 = result + 40;
      result += 48;
      vst2q_f32(v29, v33);
    } while (v22);
  }
  return result;
}

float* ne10_radix_butterfly_int32_neon_3_false_false_true(float* result,
                                                          const float* a2,
                                                          int a3, int a4)
{
  float32x4_t v4;
  int32x4_t v5;
  int32x4_t v6;
  float32x4_t v7;
  unsigned int v8;
  int32x4_t v9;
  __int64 v10;
  int32x4_t v11;
  const float* v12;
  const float* v13;
  const float* v14;
  int32x4_t v15;
  int32x4_t v16;
  int32x4_t v17;
  int32x4_t v18;
  int32x4_t v19;
  int32x4_t v20;
  int32x4_t v21;
  float* v22;
  float32x4x2_t v23;
  float32x4x2_t v24;
  float32x4x2_t v25;
  float32x4x2_t v26;
  float32x4x2_t v27;
  float32x4x2_t v28;
  float32x4x2_t v29;
  float32x4x2_t v30;
  float32x4x2_t v31;
  float32x4x2_t v32;

  if (a3 >= 1) {
    ((uint64_t*)&v4)[0] = 0x9999999999999999LL;
    ((uint64_t*)&v4)[1] = 0x9999999999999999LL;
    v5 = vdupq_n_s32(0x278DDE6Eu);
    v6 = vdupq_n_s32(0x98722192);
    v7 = vnegq_f32(v4);
    v8 = a3 + 1;
    v9 = vdupq_n_s32(0x8643C7B3);
    v10 = 8LL * (a4 / 5);
    v11 = vdupq_n_s32(0xB4C373EE);
    do {
      v12 = &a2[v10];
      v26 = vld2q_f32(a2);
      a2 += 8;
      --v8;
      v27 = vld2q_f32(v12);
      v13 = &v12[v10];
      v28 = vld2q_f32(v13);
      v14 = &v13[v10];
      v29 = vld2q_f32(v14);
      v30 = vld2q_f32(&v14[v10]);
      v15 = vqrdmulhq_s32(v30.val[0], v7);
      v30.val[0] = vqrdmulhq_s32(v30.val[1], v7);
      v30.val[1] = vqrdmulhq_s32(v29.val[0], v7);
      v29.val[0] = vqrdmulhq_s32(v29.val[1], v7);
      v29.val[1] = vqrdmulhq_s32(v28.val[0], v7);
      v28.val[0] = vqrdmulhq_s32(v28.val[1], v7);
      v28.val[1] = vqrdmulhq_s32(v27.val[0], v7);
      v27.val[0] = vqrdmulhq_s32(v27.val[1], v7);
      v27.val[1] = vqrdmulhq_s32(v26.val[0], v7);
      v26.val[0] = vqrdmulhq_s32(v26.val[1], v7);
      v26.val[1] = vaddq_s32(v28.val[1], v15);
      v16 = vsubq_s32(v28.val[1], v15);
      v28.val[1] = vaddq_s32(v29.val[1], v30.val[1]);
      v17 = vaddq_s32(v27.val[0], v30.val[0]);
      v27.val[0] = vsubq_s32(v27.val[0], v30.val[0]);
      v30.val[0] = vaddq_s32(v28.val[0], v29.val[0]);
      v28.val[0] = vsubq_s32(v28.val[0], v29.val[0]);
      v29.val[1] = vsubq_s32(v29.val[1], v30.val[1]);
      v30.val[1] = vqrdmulhq_s32(v5, v26.val[1]);
      v31.val[0] = vaddq_s32(v26.val[1], vaddq_s32(v28.val[1], v27.val[1]));
      v18 = vaddq_s32(v26.val[0], vqrdmulhq_s32(v6, v30.val[0]));
      v19 = vaddq_s32(vqrdmulhq_s32(v11, v28.val[0]),
                      vqrdmulhq_s32(v9, v27.val[0]));
      v31.val[1] = vaddq_s32(v17, vaddq_s32(v30.val[0], v26.val[0]));
      vst2q_f32(result, v31);
      v26.val[1] =
          vaddq_s32(vqrdmulhq_s32(v6, v26.val[1]),
                    vaddq_s32(v27.val[1], vqrdmulhq_s32(v5, v28.val[1])));
      v29.val[0] = vaddq_s32(
          v30.val[1], vaddq_s32(v27.val[1], vqrdmulhq_s32(v6, v28.val[1])));
      v26.val[0] =
          vaddq_s32(vqrdmulhq_s32(v6, v17),
                    vaddq_s32(v26.val[0], vqrdmulhq_s32(v5, v30.val[0])));
      v30.val[1] = vaddq_s32(vqrdmulhq_s32(v5, v17), v18);
      v20 = vaddq_s32(vqrdmulhq_s32(v11, v29.val[1]), vqrdmulhq_s32(v9, v16));
      v32.val[0] = vsubq_s32(v29.val[0], v19);
      v27.val[0] = vsubq_s32(vqrdmulhq_s32(v9, v28.val[0]),
                             vqrdmulhq_s32(v11, v27.val[0]));
      v32.val[1] = vaddq_s32(v20, v30.val[1]);
      v21 = vsubq_s32(vqrdmulhq_s32(v11, v16), vqrdmulhq_s32(v9, v29.val[1]));
      vst2q_f32(result + 8, v32);
      v23.val[0] = vaddq_s32(v27.val[0], v26.val[1]);
      v23.val[1] = vaddq_s32(v21, v26.val[0]);
      vst2q_f32(result + 16, v23);
      v24.val[0] = vsubq_s32(v26.val[1], v27.val[0]);
      v24.val[1] = vsubq_s32(v26.val[0], v21);
      vst2q_f32(result + 24, v24);
      v22 = result + 32;
      result += 40;
      v25.val[0] = vaddq_s32(v19, v29.val[0]);
      v25.val[1] = vsubq_s32(v30.val[1], v20);
      vst2q_f32(v22, v25);
    } while (v8 > 1);
  }
  return result;
}

__int64 ne10_radix_butterfly_int32_neon_4_false_false_true(
    __int64 result, __int64 a2, int32x2_t* a3, int a4, int a5, unsigned int a6)
{

#pragma clang fp contract(off)
  int32x4_t v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  __int64 v10;
  int v11;
  int32x4_t v12;
  int32x2_t v13;
  float* v14;
  int v15;
  __int64 v16;
  const float* v17;
  const float* v18;
  float* v19;
  float* v20;
  int32x4_t v21;
  int32x4_t v22;
  int32x4_t v23;
  int32x4_t v24;
  float32x4x2_t v25;
  float32x4x2_t v26;
  float32x4x2_t v27;
  float32x4x2_t v28;
  float32x4x2_t v29;
  float32x4x2_t v30;
  float32x4x2_t v31;
  float32x4x2_t v32;
  float32x4x2_t v33;
  float32x4x2_t v34;
  float32x4x2_t v35;
  float32x4x2_t v36;
  float32x4x2_t v37;
  float32x4x2_t v38;
  float32x4x2_t v39;

  if (a4 >= 1 && a5 >= 1) {
    LANES128(v6).n128_u64[0] = 0x4000000040000000LL;
    LANES128(v6).n128_u64[1] = 0x4000000040000000LL;
    v7 = 32LL * a5;
    v8 = 32 * ((__int64)(int)(a6 + (a6 >> 31)) >> 1);
    while ((a5 & 3) == 0) {
      v11 = a5;
      if ((unsigned int)a5 >= 4) {
        goto LABEL_11;
      }
    LABEL_4:
      result += 32LL * a5;
      a3 -= a5;
      v9 = __OFSUB__(a4--, 1);
      if ((a4 < 0) ^ v9 | (a4 == 0)) {
        return result;
      }
    }
    v10 = 0;
    v11 = a5;
    do {
      --v11;
      v26 = vld2q_f32((const float*)(a2 + v10));
      v31 = vld2q_f32((const float*)(a2 + v8 + v10));
      v12 = vqrdmulhq_s32(v31.val[0], v6);
      v31.val[0] = vqrdmulhq_s32(v31.val[1], v6);
      v31.val[1] = vqrdmulhq_s32(v26.val[0], v6);
      v26.val[0] = vqrdmulhq_s32(v26.val[1], v6);
      PSEUDO_LOW_LANE64(v13, n64_u64, LANES64(*(a3)).n64_u64[0]);
      ++a3;
      v26.val[1] = vsubq_s32(vqrdmulhq_lane_s32(v12, v13, 0),
                             vqrdmulhq_lane_s32(v31.val[0], v13, 1));
      v31.val[0] = vaddq_s32(vqrdmulhq_lane_s32(v31.val[0], v13, 0),
                             vqrdmulhq_lane_s32(v12, v13, 1));
      v36.val[0] = vaddq_s32(v26.val[1], v31.val[1]);
      v36.val[1] = vaddq_s32(v31.val[0], v26.val[0]);
      v38.val[0] = vsubq_s32(v31.val[1], v26.val[1]);
      v38.val[1] = vsubq_s32(v26.val[0], v31.val[0]);
      vst2q_f32((float*)(result + v10), v36);
      v14 = (float*)(result + v7 + v10);
      v10 += 32;
      vst2q_f32(v14, v38);
    } while (32 * (a5 & 3) != (_DWORD)v10);
    result += v10;
    a2 += v10;
    if ((unsigned int)a5 < 4) {
      goto LABEL_4;
    }
  LABEL_11:
    v15 = v11 + 4;
    v16 = 0;
    do {
      v17 = (const float*)(a2 + v16);
      v18 = (const float*)(a2 + v8 + v16);
      v19 = (float*)(result + v16);
      v20 = (float*)(result + v7 + v16);
      v15 -= 4;
      v16 += 128;
      v27 = vld2q_f32(v17);
      v32 = vld2q_f32(v18);
      v21 = vqrdmulhq_s32(v32.val[0], v6);
      v32.val[0] = vqrdmulhq_s32(v32.val[1], v6);
      v32.val[1] = vqrdmulhq_s32(v27.val[0], v6);
      v27.val[0] = vqrdmulhq_s32(v27.val[1], v6);
      v27.val[1] = vsubq_s32(
          vqrdmulhq_lane_s32(
              v21, COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]), 0),
          vqrdmulhq_lane_s32(
              v32.val[0], COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]), 1));
      v32.val[0] = vaddq_s32(
          vqrdmulhq_lane_s32(
              v32.val[0], COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]), 0),
          vqrdmulhq_lane_s32(
              v21, COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]), 1));
      v37.val[0] = vaddq_s32(v27.val[1], v32.val[1]);
      v37.val[1] = vaddq_s32(v32.val[0], v27.val[0]);
      v39.val[0] = vsubq_s32(v32.val[1], v27.val[1]);
      v39.val[1] = vsubq_s32(v27.val[0], v32.val[0]);
      vst2q_f32(v19, v37);
      vst2q_f32(v20, v39);
      v28 = vld2q_f32(v17 + 8);
      v33 = vld2q_f32(v18 + 8);
      v37.val[0] = vqrdmulhq_s32(v33.val[0], v6);
      v33.val[0] = vqrdmulhq_s32(v33.val[1], v6);
      v33.val[1] = vqrdmulhq_s32(v28.val[0], v6);
      v28.val[0] = vqrdmulhq_s32(v28.val[1], v6);
      PSEUDO_LOW_LANE128(v28.val[1], n128_u64, LANES64(a3[1]).n64_u64[0]);
      v37.val[1] = vqrdmulhq_lane_s32(
          v37.val[0], COERCE_AS(int32x2_t, LANES128(v28.val[1]).n128_u64[0]),
          0);
      v37.val[0] = vqrdmulhq_lane_s32(
          v37.val[0], COERCE_AS(int32x2_t, LANES128(v28.val[1]).n128_u64[0]),
          1);
      v22 = vqrdmulhq_lane_s32(
          v33.val[0], COERCE_AS(int32x2_t, LANES128(v28.val[1]).n128_u64[0]),
          0);
      v28.val[1] = vsubq_s32(
          v37.val[1],
          vqrdmulhq_lane_s32(
              v33.val[0],
              COERCE_AS(int32x2_t, LANES128(v28.val[1]).n128_u64[0]), 1));
      v33.val[0] = vaddq_s32(v22, v37.val[0]);
      v37.val[0] = vaddq_s32(v28.val[1], v33.val[1]);
      v37.val[1] = vaddq_s32(v33.val[0], v28.val[0]);
      vst2q_f32(v19 + 8, v37);
      v25.val[0] = vsubq_s32(v33.val[1], v28.val[1]);
      v25.val[1] = vsubq_s32(v28.val[0], v33.val[0]);
      vst2q_f32(v20 + 8, v25);
      v29 = vld2q_f32(v17 + 16);
      v34 = vld2q_f32(v18 + 16);
      v37.val[0] = vqrdmulhq_s32(v34.val[0], v6);
      v34.val[0] = vqrdmulhq_s32(v34.val[1], v6);
      v34.val[1] = vqrdmulhq_s32(v29.val[0], v6);
      v29.val[0] = vqrdmulhq_s32(v29.val[1], v6);
      PSEUDO_LOW_LANE128(v29.val[1], n128_u64, LANES64(a3[2]).n64_u64[0]);
      v37.val[1] = vqrdmulhq_lane_s32(
          v37.val[0], COERCE_AS(int32x2_t, LANES128(v29.val[1]).n128_u64[0]),
          0);
      v37.val[0] = vqrdmulhq_lane_s32(
          v37.val[0], COERCE_AS(int32x2_t, LANES128(v29.val[1]).n128_u64[0]),
          1);
      v23 = vqrdmulhq_lane_s32(
          v34.val[0], COERCE_AS(int32x2_t, LANES128(v29.val[1]).n128_u64[0]),
          0);
      v29.val[1] = vsubq_s32(
          v37.val[1],
          vqrdmulhq_lane_s32(
              v34.val[0],
              COERCE_AS(int32x2_t, LANES128(v29.val[1]).n128_u64[0]), 1));
      v34.val[0] = vaddq_s32(v23, v37.val[0]);
      v37.val[0] = vaddq_s32(v29.val[1], v34.val[1]);
      v37.val[1] = vaddq_s32(v34.val[0], v29.val[0]);
      v39.val[0] = vsubq_s32(v34.val[1], v29.val[1]);
      v39.val[1] = vsubq_s32(v29.val[0], v34.val[0]);
      vst2q_f32(v19 + 16, v37);
      vst2q_f32(v20 + 16, v39);
      v35 = vld2q_f32(v18 + 24);
      v30 = vld2q_f32(v17 + 24);
      v37.val[0] = vqrdmulhq_s32(v35.val[0], v6);
      v35.val[0] = vqrdmulhq_s32(v35.val[1], v6);
      PSEUDO_LOW_LANE128(v35.val[1], n128_u64, LANES64(a3[3]).n64_u64[0]);
      a3 += 4;
      v37.val[1] = vqrdmulhq_lane_s32(
          v37.val[0], COERCE_AS(int32x2_t, LANES128(v35.val[1]).n128_u64[0]),
          0);
      v37.val[0] = vqrdmulhq_lane_s32(
          v37.val[0], COERCE_AS(int32x2_t, LANES128(v35.val[1]).n128_u64[0]),
          1);
      v24 = vqrdmulhq_lane_s32(
          v35.val[0], COERCE_AS(int32x2_t, LANES128(v35.val[1]).n128_u64[0]),
          0);
      v35.val[0] = vqrdmulhq_lane_s32(
          v35.val[0], COERCE_AS(int32x2_t, LANES128(v35.val[1]).n128_u64[0]),
          1);
      v35.val[1] = vqrdmulhq_s32(v30.val[0], v6);
      v30.val[0] = vqrdmulhq_s32(v30.val[1], v6);
      v30.val[1] = vsubq_s32(v37.val[1], v35.val[0]);
      v35.val[0] = vaddq_s32(v24, v37.val[0]);
      v37.val[0] = vaddq_s32(v30.val[1], v35.val[1]);
      v37.val[1] = vaddq_s32(v35.val[0], v30.val[0]);
      v39.val[0] = vsubq_s32(v35.val[1], v30.val[1]);
      v39.val[1] = vsubq_s32(v30.val[0], v35.val[0]);
      vst2q_f32(v19 + 24, v37);
      vst2q_f32(v20 + 24, v39);
    } while (v15 > 4);
    result += v16;
    a2 += v16;
    goto LABEL_4;
  }
  return result;
}

float* ne10_radix_butterfly_int32_neon_5_true_false_false(float* result,
                                                          const float* a2,
                                                          int a3, int a4)
{
  int v4;
  int v5;
  __int64 v6;
  const float* v7;
  int32x4_t v8;
  int32x4_t v9;
  int32x4_t v10;
  int32x4_t v11;
  int32x4_t v12;
  float* v13;
  const float* v14;
  unsigned int v15;
  const float* v16;
  const float* v17;
  int32x4_t v18;
  bool v19;
  int32x4_t v20;
  int32x4_t v21;
  int32x4_t v22;
  int32x4_t v23;
  int32x4_t v24;
  float* v25;
  float32x4x2_t v26;
  float32x4x2_t v27;
  float32x4x2_t v28;
  float32x4x2_t v29;
  float32x4x2_t v30;
  float32x4x2_t v31;
  float32x4x2_t v32;
  float32x4x2_t v33;
  float32x4x2_t v34;
  float32x4x2_t v35;
  float32x4x2_t v36;

  v4 = a3 - 1;
  if (a3 >= 1) {
    v5 = a4 / 3;
    v6 = a4 / 3;
    if ((a3 & 1) != 0) {
      v7 = &a2[8 * v5];
      v27 = vld2q_f32(a2);
      a2 += 8;
      v30 = vld2q_f32(v7);
      v33 = vld2q_f32(&v7[8 * v5]);
      v8 = vaddq_s32(v33.val[0], v30.val[0]);
      v9 = vaddq_s32(v33.val[1], v30.val[1]);
      v10 = vsubq_s32(v30.val[0], v33.val[0]);
      v30.val[0] = vsubq_s32(v30.val[1], v33.val[1]);
      v33.val[1] = vdupq_n_s32(0x9126145F);
      v30.val[1] = vshrq_n_s32(v8, 1u);
      v11 = vqrdmulhq_s32(v33.val[1], v10);
      v30.val[0] = vqrdmulhq_s32(v33.val[1], v30.val[0]);
      v33.val[1] = vaddq_s32(v8, v27.val[0]);
      v12 = vaddq_s32(v9, v27.val[1]);
      v30.val[1] = vsubq_s32(v27.val[0], v30.val[1]);
      v33.val[0] = vsubq_s32(v27.val[1], vshrq_n_s32(v9, 1u));
      v27.val[0] = vaddq_s32(v30.val[0], v30.val[1]);
      v30.val[0] = vsubq_s32(v30.val[1], v30.val[0]);
      v30.val[1] = vaddq_s32(v11, v33.val[0]);
      v27.val[1] = vsubq_s32(v33.val[0], v11);
      v26.val[0] = v33.val[1];
      v26.val[1] = v12;
      vst2q_f32(result, v26);
      vst2q_f32(result + 8, v30);
      v13 = result + 16;
      result += 24;
      vst2q_f32(v13, v27);
      if (a3 == 1) {
        return result;
      }
    }
    else {
      v4 = a3;
      if (a3 == 1) {
        return result;
      }
    }
    v14 = a2 + 8;
    v15 = v4 - 1;
    v16 = &a2[16 * v6 + 8];
    v17 = &a2[8 * v6 + 8];
    v18 = vdupq_n_s32(0x9126145F);
    do {
      v19 = v15 >= 2;
      v15 -= 2;
      v28 = vld2q_f32(v14 - 8);
      v31 = vld2q_f32(v17 - 8);
      v34 = vld2q_f32(v16 - 8);
      v20 = vaddq_s32(v34.val[0], v31.val[0]);
      v21 = vaddq_s32(v34.val[1], v31.val[1]);
      v22 = vsubq_s32(v31.val[0], v34.val[0]);
      v31.val[0] = vsubq_s32(v31.val[1], v34.val[1]);
      v34.val[1] = vqrdmulhq_s32(v18, v22);
      v31.val[0] = vqrdmulhq_s32(v18, v31.val[0]);
      v36.val[0] = vaddq_s32(v20, v28.val[0]);
      v36.val[1] = vaddq_s32(v21, v28.val[1]);
      v31.val[1] = vsubq_s32(v28.val[0], vshrq_n_s32(v20, 1u));
      v34.val[0] = vsubq_s32(v28.val[1], vshrq_n_s32(v21, 1u));
      vst2q_f32(result, v36);
      v28.val[0] = vaddq_s32(v31.val[0], v31.val[1]);
      v31.val[0] = vsubq_s32(v31.val[1], v31.val[0]);
      v31.val[1] = vaddq_s32(v34.val[1], v34.val[0]);
      v28.val[1] = vsubq_s32(v34.val[0], v34.val[1]);
      vst2q_f32(result + 8, v31);
      vst2q_f32(result + 16, v28);
      v32 = vld2q_f32(v17);
      v35 = vld2q_f32(v16);
      v29 = vld2q_f32(v14);
      v16 += 16;
      v17 += 16;
      v14 += 16;
      v23 = vaddq_s32(v35.val[0], v32.val[0]);
      v24 = vaddq_s32(v35.val[1], v32.val[1]);
      v36.val[0] = vsubq_s32(v32.val[0], v35.val[0]);
      v32.val[0] = vsubq_s32(v32.val[1], v35.val[1]);
      v35.val[1] = vqrdmulhq_s32(v18, v36.val[0]);
      v32.val[0] = vqrdmulhq_s32(v18, v32.val[0]);
      v36.val[0] = vaddq_s32(v23, v29.val[0]);
      v36.val[1] = vaddq_s32(v24, v29.val[1]);
      v32.val[1] = vsubq_s32(v29.val[0], vshrq_n_s32(v23, 1u));
      v35.val[0] = vsubq_s32(v29.val[1], vshrq_n_s32(v24, 1u));
      vst2q_f32(result + 24, v36);
      v29.val[0] = vaddq_s32(v32.val[0], v32.val[1]);
      v32.val[0] = vsubq_s32(v32.val[1], v32.val[0]);
      v32.val[1] = vaddq_s32(v35.val[1], v35.val[0]);
      v29.val[1] = vsubq_s32(v35.val[0], v35.val[1]);
      vst2q_f32(result + 32, v32);
      v25 = result + 40;
      result += 48;
      vst2q_f32(v25, v29);
    } while (v19);
  }
  return result;
}

float* ne10_radix_butterfly_int32_neon_3_false_false_false(float* result,
                                                           const float* a2,
                                                           int a3, int a4)
{
  int32x4_t v4;
  int32x4_t v5;
  unsigned int v6;
  int32x4_t v7;
  __int64 v8;
  int32x4_t v9;
  const float* v10;
  const float* v11;
  const float* v12;
  int32x4_t v13;
  int32x4_t v14;
  int32x4_t v15;
  int32x4_t v16;
  int32x4_t v17;
  int32x4_t v18;
  int32x4_t v19;
  float* v20;
  float32x4x2_t v21;
  float32x4x2_t v22;
  float32x4x2_t v23;
  float32x4x2_t v24;
  float32x4x2_t v25;
  float32x4x2_t v26;
  float32x4x2_t v27;
  float32x4x2_t v28;
  float32x4x2_t v29;

  if (a3 >= 1) {
    v4 = vdupq_n_s32(0x278DDE6Eu);
    v5 = vdupq_n_s32(0x98722192);
    v6 = a3 + 1;
    v7 = vdupq_n_s32(0x8643C7B3);
    v8 = 8LL * (a4 / 5);
    v9 = vdupq_n_s32(0xB4C373EE);
    do {
      v10 = &a2[v8];
      v24 = vld2q_f32(a2);
      a2 += 8;
      --v6;
      v25 = vld2q_f32(v10);
      v11 = &v10[v8];
      v26 = vld2q_f32(v11);
      v12 = &v11[v8];
      v27 = vld2q_f32(v12);
      v28 = vld2q_f32(&v12[v8]);
      v13 = vaddq_s32(v28.val[0], v25.val[0]);
      v14 = vaddq_s32(v28.val[1], v25.val[1]);
      v15 = vsubq_s32(v25.val[0], v28.val[0]);
      v25.val[0] = vsubq_s32(v25.val[1], v28.val[1]);
      v25.val[1] = vaddq_s32(v27.val[0], v26.val[0]);
      v28.val[0] = vaddq_s32(v27.val[1], v26.val[1]);
      v28.val[1] = vsubq_s32(v26.val[0], v27.val[0]);
      v26.val[0] = vsubq_s32(v26.val[1], v27.val[1]);
      v26.val[1] = vaddq_s32(vaddq_s32(v25.val[1], v24.val[0]), v13);
      v16 = vaddq_s32(v24.val[1], vqrdmulhq_s32(v5, v28.val[0]));
      v17 = vaddq_s32(vqrdmulhq_s32(v9, v26.val[0]),
                      vqrdmulhq_s32(v7, v25.val[0]));
      v27.val[1] = vaddq_s32(v24.val[0], vqrdmulhq_s32(v5, v25.val[1]));
      v25.val[1] = vaddq_s32(v24.val[0], vqrdmulhq_s32(v4, v25.val[1]));
      v24.val[0] = vaddq_s32(v24.val[1], vqrdmulhq_s32(v4, v28.val[0]));
      v21.val[0] = v26.val[1];
      v21.val[1] = vaddq_s32(vaddq_s32(v28.val[0], v24.val[1]), v14);
      vst2q_f32(result, v21);
      v27.val[1] = vaddq_s32(vqrdmulhq_s32(v4, v13), v27.val[1]);
      v25.val[1] = vaddq_s32(vqrdmulhq_s32(v5, v13), v25.val[1]);
      v24.val[1] = vsubq_s32(vqrdmulhq_s32(v7, v26.val[0]),
                             vqrdmulhq_s32(v9, v25.val[0]));
      v18 = vaddq_s32(vqrdmulhq_s32(v4, v14), v16);
      v19 = vaddq_s32(vqrdmulhq_s32(v9, v28.val[1]), vqrdmulhq_s32(v7, v15));
      v24.val[0] = vaddq_s32(vqrdmulhq_s32(v5, v14), v24.val[0]);
      v25.val[0] =
          vsubq_s32(vqrdmulhq_s32(v9, v15), vqrdmulhq_s32(v7, v28.val[1]));
      v29.val[0] = vsubq_s32(v27.val[1], v17);
      v26.val[0] = vsubq_s32(v25.val[1], v24.val[1]);
      v29.val[1] = vaddq_s32(v19, v18);
      v26.val[1] = vsubq_s32(v24.val[0], v25.val[0]);
      vst2q_f32(result + 8, v29);
      v22.val[0] = vaddq_s32(v24.val[1], v25.val[1]);
      v22.val[1] = vaddq_s32(v25.val[0], v24.val[0]);
      vst2q_f32(result + 16, v22);
      vst2q_f32(result + 24, v26);
      v20 = result + 32;
      result += 40;
      v23.val[0] = vaddq_s32(v17, v27.val[1]);
      v23.val[1] = vsubq_s32(v18, v19);
      vst2q_f32(v20, v23);
    } while (v6 > 1);
  }
  return result;
}

__int64 ne10_radix_butterfly_int32_neon_4_false_false_false(
    __int64 result, __int64 a2, int32x2_t* a3, int a4, int a5, unsigned int a6)
{

#pragma clang fp contract(off)
  __int64 v6;
  __int64 v7;
  bool v8;
  __int64 v9;
  int v10;
  int32x2_t v11;
  int32x4_t v12;
  float* v13;
  int v14;
  __int64 v15;
  const float* v16;
  const float* v17;
  float* v18;
  float* v19;
  int32x4_t v20;
  float32x4x2_t v21;
  float32x4x2_t v22;
  float32x4x2_t v23;
  float32x4x2_t v24;
  float32x4x2_t v25;
  float32x4x2_t v26;
  float32x4x2_t v27;
  float32x4x2_t v28;
  float32x4x2_t v29;
  float32x4x2_t v30;
  float32x4x2_t v31;
  float32x4x2_t v32;
  float32x4x2_t v33;
  float32x4x2_t v34;

  if (a4 >= 1 && a5 >= 1) {
    v6 = 32LL * a5;
    v7 = 32 * ((__int64)(int)(a6 + (a6 >> 31)) >> 1);
    while ((a5 & 3) == 0) {
      v10 = a5;
      if ((unsigned int)a5 >= 4) {
        goto LABEL_11;
      }
    LABEL_4:
      result += 32LL * a5;
      a3 -= a5;
      v8 = __OFSUB__(a4--, 1);
      if ((a4 < 0) ^ v8 | (a4 == 0)) {
        return result;
      }
    }
    v9 = 0;
    v10 = a5;
    do {
      PSEUDO_LOW_LANE64(v11, n64_u64, LANES64(*(a3)).n64_u64[0]);
      ++a3;
      --v10;
      v21 = vld2q_f32((const float*)(a2 + v9));
      v26 = vld2q_f32((const float*)(a2 + v7 + v9));
      v12 = vqrdmulhq_lane_s32(v26.val[0], v11, 1);
      v26.val[0] = vsubq_s32(vqrdmulhq_lane_s32(v26.val[0], v11, 0),
                             vqrdmulhq_lane_s32(v26.val[1], v11, 1));
      v26.val[1] = vaddq_s32(vqrdmulhq_lane_s32(v26.val[1], v11, 0), v12);
      v31.val[0] = vaddq_s32(v26.val[0], v21.val[0]);
      v31.val[1] = vaddq_s32(v26.val[1], v21.val[1]);
      v33.val[0] = vsubq_s32(v21.val[0], v26.val[0]);
      v33.val[1] = vsubq_s32(v21.val[1], v26.val[1]);
      vst2q_f32((float*)(result + v9), v31);
      v13 = (float*)(result + v6 + v9);
      v9 += 32;
      vst2q_f32(v13, v33);
    } while (32 * (a5 & 3) != (_DWORD)v9);
    result += v9;
    a2 += v9;
    if ((unsigned int)a5 < 4) {
      goto LABEL_4;
    }
  LABEL_11:
    v14 = v10 + 4;
    v15 = 0;
    do {
      v16 = (const float*)(a2 + v15);
      v17 = (const float*)(a2 + v7 + v15);
      v18 = (float*)(result + v15);
      v19 = (float*)(result + v6 + v15);
      v14 -= 4;
      v15 += 128;
      v22 = vld2q_f32(v16);
      v27 = vld2q_f32(v17);
      v20 = vqrdmulhq_lane_s32(
          v27.val[0], COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]), 1);
      v27.val[0] = vsubq_s32(
          vqrdmulhq_lane_s32(
              v27.val[0], COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]), 0),
          vqrdmulhq_lane_s32(
              v27.val[1], COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]), 1));
      v27.val[1] = vaddq_s32(
          vqrdmulhq_lane_s32(
              v27.val[1], COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]), 0),
          v20);
      v32.val[0] = vaddq_s32(v27.val[0], v22.val[0]);
      v32.val[1] = vaddq_s32(v27.val[1], v22.val[1]);
      v34.val[0] = vsubq_s32(v22.val[0], v27.val[0]);
      v34.val[1] = vsubq_s32(v22.val[1], v27.val[1]);
      vst2q_f32(v18, v32);
      vst2q_f32(v19, v34);
      v28 = vld2q_f32(v17 + 8);
      PSEUDO_LOW_LANE128(v32.val[0], n128_u64, LANES64(a3[1]).n64_u64[0]);
      v23 = vld2q_f32(v16 + 8);
      v34.val[0] = vqrdmulhq_lane_s32(
          v28.val[0], COERCE_AS(int32x2_t, LANES128(v32.val[0]).n128_u64[0]),
          1);
      v28.val[0] = vsubq_s32(
          vqrdmulhq_lane_s32(
              v28.val[0],
              COERCE_AS(int32x2_t, LANES128(v32.val[0]).n128_u64[0]), 0),
          vqrdmulhq_lane_s32(
              v28.val[1],
              COERCE_AS(int32x2_t, LANES128(v32.val[0]).n128_u64[0]), 1));
      v28.val[1] = vaddq_s32(
          vqrdmulhq_lane_s32(
              v28.val[1],
              COERCE_AS(int32x2_t, LANES128(v32.val[0]).n128_u64[0]), 0),
          v34.val[0]);
      v32.val[0] = vaddq_s32(v28.val[0], v23.val[0]);
      v32.val[1] = vaddq_s32(v28.val[1], v23.val[1]);
      vst2q_f32(v18 + 8, v32);
      v32.val[0] = vsubq_s32(v23.val[0], v28.val[0]);
      v32.val[1] = vsubq_s32(v23.val[1], v28.val[1]);
      vst2q_f32(v19 + 8, v32);
      v29 = vld2q_f32(v17 + 16);
      PSEUDO_LOW_LANE128(v32.val[0], n128_u64, LANES64(a3[2]).n64_u64[0]);
      v24 = vld2q_f32(v16 + 16);
      v34.val[0] = vqrdmulhq_lane_s32(
          v29.val[0], COERCE_AS(int32x2_t, LANES128(v32.val[0]).n128_u64[0]),
          1);
      v29.val[0] = vsubq_s32(
          vqrdmulhq_lane_s32(
              v29.val[0],
              COERCE_AS(int32x2_t, LANES128(v32.val[0]).n128_u64[0]), 0),
          vqrdmulhq_lane_s32(
              v29.val[1],
              COERCE_AS(int32x2_t, LANES128(v32.val[0]).n128_u64[0]), 1));
      v29.val[1] = vaddq_s32(
          vqrdmulhq_lane_s32(
              v29.val[1],
              COERCE_AS(int32x2_t, LANES128(v32.val[0]).n128_u64[0]), 0),
          v34.val[0]);
      v32.val[0] = vaddq_s32(v29.val[0], v24.val[0]);
      v32.val[1] = vaddq_s32(v29.val[1], v24.val[1]);
      v34.val[0] = vsubq_s32(v24.val[0], v29.val[0]);
      v34.val[1] = vsubq_s32(v24.val[1], v29.val[1]);
      vst2q_f32(v18 + 16, v32);
      vst2q_f32(v19 + 16, v34);
      v30 = vld2q_f32(v17 + 24);
      PSEUDO_LOW_LANE128(v32.val[0], n128_u64, LANES64(a3[3]).n64_u64[0]);
      v25 = vld2q_f32(v16 + 24);
      a3 += 4;
      v34.val[0] = vqrdmulhq_lane_s32(
          v30.val[0], COERCE_AS(int32x2_t, LANES128(v32.val[0]).n128_u64[0]),
          1);
      v30.val[0] = vsubq_s32(
          vqrdmulhq_lane_s32(
              v30.val[0],
              COERCE_AS(int32x2_t, LANES128(v32.val[0]).n128_u64[0]), 0),
          vqrdmulhq_lane_s32(
              v30.val[1],
              COERCE_AS(int32x2_t, LANES128(v32.val[0]).n128_u64[0]), 1));
      v30.val[1] = vaddq_s32(
          vqrdmulhq_lane_s32(
              v30.val[1],
              COERCE_AS(int32x2_t, LANES128(v32.val[0]).n128_u64[0]), 0),
          v34.val[0]);
      v32.val[0] = vaddq_s32(v30.val[0], v25.val[0]);
      v32.val[1] = vaddq_s32(v30.val[1], v25.val[1]);
      v34.val[0] = vsubq_s32(v25.val[0], v30.val[0]);
      v34.val[1] = vsubq_s32(v25.val[1], v30.val[1]);
      vst2q_f32(v18 + 24, v32);
      vst2q_f32(v19 + 24, v34);
    } while (v14 > 4);
    result += v15;
    a2 += v15;
    goto LABEL_4;
  }
  return result;
}

__int64 ne10_radix_butterfly_int32_neon_4_false_true_true(
    __int64 result, __int64 a2, int32x2_t* a3, int a4, int a5, unsigned int a6)
{

#pragma clang fp contract(off)
  int32x4_t v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  __int64 v10;
  int v11;
  int32x2_t v12;
  int32x4_t v13;
  float* v14;
  int v15;
  __int64 v16;
  const float* v17;
  const float* v18;
  float* v19;
  float* v20;
  int32x4_t v21;
  int32x2_t v22;
  int32x2_t v23;
  int32x2_t v24;
  float32x4x2_t v25;
  float32x4x2_t v26;
  float32x4x2_t v27;
  float32x4x2_t v28;
  float32x4x2_t v29;
  float32x4x2_t v30;
  float32x4x2_t v31;
  float32x4x2_t v32;
  float32x4x2_t v33;
  float32x4x2_t v34;
  float32x4x2_t v35;
  float32x4x2_t v36;
  float32x4x2_t v37;
  float32x4x2_t v38;
  float32x4x2_t v39;
  float32x4x2_t v40;
  float32x4x2_t v41;
  float32x4x2_t v42;
  float32x4x2_t v43;
  float32x4x2_t v44;

  if (a4 >= 1 && a5 >= 1) {
    LANES128(v6).n128_u64[0] = 0x4000000040000000LL;
    LANES128(v6).n128_u64[1] = 0x4000000040000000LL;
    v7 = 32LL * a5;
    v8 = 32 * ((__int64)(int)(a6 + (a6 >> 31)) >> 1);
    while ((a5 & 3) == 0) {
      v11 = a5;
      if ((unsigned int)a5 >= 4) {
        goto LABEL_11;
      }
    LABEL_4:
      result += 32LL * a5;
      a3 -= a5;
      v9 = __OFSUB__(a4--, 1);
      if ((a4 < 0) ^ v9 | (a4 == 0)) {
        return result;
      }
    }
    v10 = 0;
    v11 = a5;
    do {
      --v11;
      v31 = vld2q_f32((const float*)(a2 + v10));
      v36 = vld2q_f32((const float*)(a2 + v8 + v10));
      v31.val[0] = vqrdmulhq_s32(v31.val[0], v6);
      v36.val[0] = vqrdmulhq_s32(v36.val[0], v6);
      v31.val[1] = vqrdmulhq_s32(vnegq_s32(v31.val[1]), v6);
      v36.val[1] = vqrdmulhq_s32(vnegq_s32(v36.val[1]), v6);
      PSEUDO_LOW_LANE64(v12, n64_u64, LANES64(*(a3)).n64_u64[0]);
      ++a3;
      v13 = vqrdmulhq_lane_s32(v36.val[0], v12, 0);
      v36.val[0] = vaddq_s32(vqrdmulhq_lane_s32(v36.val[1], v12, 0),
                             vqrdmulhq_lane_s32(v36.val[0], v12, 1));
      v36.val[1] = vsubq_s32(v13, vqrdmulhq_lane_s32(v36.val[1], v12, 1));
      v41.val[0] = vaddq_s32(v36.val[1], v31.val[0]);
      v43.val[0] = vsubq_s32(v31.val[0], v36.val[1]);
      v43.val[1] = vsubq_s32(v36.val[0], v31.val[1]);
      v41.val[1] = vnegq_s32(vaddq_s32(v31.val[1], v36.val[0]));
      vst2q_f32((float*)(result + v10), v41);
      v14 = (float*)(result + v7 + v10);
      v10 += 32;
      vst2q_f32(v14, v43);
    } while (32 * (a5 & 3) != (_DWORD)v10);
    result += v10;
    a2 += v10;
    if ((unsigned int)a5 < 4) {
      goto LABEL_4;
    }
  LABEL_11:
    v15 = v11 + 4;
    v16 = 0;
    do {
      v17 = (const float*)(a2 + v16);
      v18 = (const float*)(a2 + v8 + v16);
      v19 = (float*)(result + v16);
      v20 = (float*)(result + v7 + v16);
      v15 -= 4;
      v16 += 128;
      v32 = vld2q_f32(v17);
      v37 = vld2q_f32(v18);
      v32.val[0] = vqrdmulhq_s32(v32.val[0], v6);
      v37.val[0] = vqrdmulhq_s32(v37.val[0], v6);
      v32.val[1] = vqrdmulhq_s32(vnegq_s32(v32.val[1]), v6);
      v37.val[1] = vqrdmulhq_s32(vnegq_s32(v37.val[1]), v6);
      v21 = vqrdmulhq_lane_s32(
          v37.val[0], COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]), 0);
      v37.val[0] = vaddq_s32(
          vqrdmulhq_lane_s32(
              v37.val[1], COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]), 0),
          vqrdmulhq_lane_s32(
              v37.val[0], COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]), 1));
      v37.val[1] = vsubq_s32(
          v21,
          vqrdmulhq_lane_s32(
              v37.val[1], COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]), 1));
      v42.val[0] = vaddq_s32(v37.val[1], v32.val[0]);
      v42.val[1] = vnegq_s32(vaddq_s32(v32.val[1], v37.val[0]));
      vst2q_f32(v19, v42);
      v25.val[0] = vsubq_s32(v32.val[0], v37.val[1]);
      v25.val[1] = vsubq_s32(v37.val[0], v32.val[1]);
      vst2q_f32(v20, v25);
      v33 = vld2q_f32(v17 + 8);
      v38 = vld2q_f32(v18 + 8);
      v33.val[0] = vqrdmulhq_s32(v33.val[0], v6);
      v38.val[0] = vqrdmulhq_s32(v38.val[0], v6);
      v33.val[1] = vqrdmulhq_s32(vnegq_s32(v33.val[1]), v6);
      PSEUDO_LOW_LANE64(v22, n64_u64, LANES64(a3[1]).n64_u64[0]);
      v38.val[1] = vqrdmulhq_s32(vnegq_s32(v38.val[1]), v6);
      v42.val[1] = vqrdmulhq_lane_s32(v38.val[1], v22, 0);
      v38.val[1] = vsubq_s32(vqrdmulhq_lane_s32(v38.val[0], v22, 0),
                             vqrdmulhq_lane_s32(v38.val[1], v22, 1));
      v38.val[0] =
          vaddq_s32(v42.val[1], vqrdmulhq_lane_s32(v38.val[0], v22, 1));
      v26.val[0] = vsubq_s32(v33.val[0], v38.val[1]);
      v26.val[1] = vsubq_s32(v38.val[0], v33.val[1]);
      vst2q_f32(v20 + 8, v26);
      v27.val[0] = vaddq_s32(v38.val[1], v33.val[0]);
      v27.val[1] = vnegq_s32(vaddq_s32(v33.val[1], v38.val[0]));
      vst2q_f32(v19 + 8, v27);
      v34 = vld2q_f32(v17 + 16);
      v39 = vld2q_f32(v18 + 16);
      v34.val[0] = vqrdmulhq_s32(v34.val[0], v6);
      v39.val[0] = vqrdmulhq_s32(v39.val[0], v6);
      v34.val[1] = vqrdmulhq_s32(vnegq_s32(v34.val[1]), v6);
      PSEUDO_LOW_LANE64(v23, n64_u64, LANES64(a3[2]).n64_u64[0]);
      v39.val[1] = vqrdmulhq_s32(vnegq_s32(v39.val[1]), v6);
      v42.val[0] = vqrdmulhq_lane_s32(v39.val[0], v23, 1);
      v39.val[0] = vsubq_s32(vqrdmulhq_lane_s32(v39.val[0], v23, 0),
                             vqrdmulhq_lane_s32(v39.val[1], v23, 1));
      v39.val[1] =
          vaddq_s32(vqrdmulhq_lane_s32(v39.val[1], v23, 0), v42.val[0]);
      v44.val[0] = vsubq_s32(v34.val[0], v39.val[0]);
      v44.val[1] = vsubq_s32(v39.val[1], v34.val[1]);
      vst2q_f32(v20 + 16, v44);
      v28.val[0] = vaddq_s32(v39.val[0], v34.val[0]);
      v28.val[1] = vnegq_s32(vaddq_s32(v34.val[1], v39.val[1]));
      vst2q_f32(v19 + 16, v28);
      v40 = vld2q_f32(v17 + 24);
      v35 = vld2q_f32(v18 + 24);
      v40.val[0] = vqrdmulhq_s32(v40.val[0], v6);
      v35.val[0] = vqrdmulhq_s32(v35.val[0], v6);
      v40.val[1] = vqrdmulhq_s32(vnegq_s32(v40.val[1]), v6);
      PSEUDO_LOW_LANE64(v24, n64_u64, LANES64(a3[3]).n64_u64[0]);
      v35.val[1] = vqrdmulhq_s32(vnegq_s32(v35.val[1]), v6);
      a3 += 4;
      v42.val[0] = vqrdmulhq_lane_s32(v35.val[0], v24, 0);
      v35.val[0] = vaddq_s32(vqrdmulhq_lane_s32(v35.val[1], v24, 0),
                             vqrdmulhq_lane_s32(v35.val[0], v24, 1));
      v35.val[1] =
          vsubq_s32(v42.val[0], vqrdmulhq_lane_s32(v35.val[1], v24, 1));
      v29.val[0] = vsubq_s32(v40.val[0], v35.val[1]);
      v29.val[1] = vsubq_s32(v35.val[0], v40.val[1]);
      vst2q_f32(v20 + 24, v29);
      v30.val[0] = vaddq_s32(v35.val[1], v40.val[0]);
      v30.val[1] = vnegq_s32(vaddq_s32(v40.val[1], v35.val[0]));
      vst2q_f32(v19 + 24, v30);
    } while (v15 > 4);
    result += v16;
    a2 += v16;
    goto LABEL_4;
  }
  return result;
}

float* ne10_radix_butterfly_int32_neon_5_true_true_false(float* result,
                                                         const float* a2,
                                                         int a3, int a4)
{
  int v4;
  int v5;
  __int64 v6;
  const float* v7;
  int32x4_t v8;
  int32x4_t v9;
  int32x4_t v10;
  float* v11;
  const float* v12;
  unsigned int v13;
  const float* v14;
  const float* v15;
  int32x4_t v16;
  bool v17;
  int32x4_t v18;
  int32x4_t v19;
  int32x4_t v20;
  int32x4_t v21;
  int32x4_t v22;
  int32x4_t v23;
  int32x4_t v24;
  float* v25;
  float32x4x2_t v26;
  float32x4x2_t v27;
  float32x4x2_t v28;
  float32x4x2_t v29;
  float32x4x2_t v30;
  float32x4x2_t v31;
  float32x4x2_t v32;
  float32x4x2_t v33;
  float32x4x2_t v34;
  float32x4x2_t v35;
  float32x4x2_t v36;
  float32x4x2_t v37;
  float32x4x2_t v38;
  float32x4x2_t v39;

  v4 = a3 - 1;
  if (a3 >= 1) {
    v5 = a4 / 3;
    v6 = a4 / 3;
    if ((a3 & 1) != 0) {
      v7 = &a2[8 * v5];
      v28 = vld2q_f32(a2);
      a2 += 8;
      v31 = vld2q_f32(v7);
      v34 = vld2q_f32(&v7[8 * v5]);
      v8 = vaddq_s32(v34.val[1], v31.val[1]);
      v9 = vaddq_s32(v34.val[0], v31.val[0]);
      v10 = vsubq_s32(v31.val[0], v34.val[0]);
      v31.val[0] = vsubq_s32(v34.val[1], v31.val[1]);
      v34.val[0] = vdupq_n_s32(0x9126145F);
      v34.val[1] = vqrdmulhq_s32(v34.val[0], v10);
      v31.val[0] = vqrdmulhq_s32(v34.val[0], v31.val[0]);
      v39.val[0] = vaddq_s32(v9, v28.val[0]);
      v39.val[1] = vaddq_s32(v8, v28.val[1]);
      v31.val[1] = vsubq_s32(v28.val[0], vshrq_n_s32(v9, 1u));
      v28.val[1] = vsraq_n_s32(v28.val[1], vnegq_s32(v8), 1u);
      v37.val[0] = vaddq_s32(v31.val[0], v31.val[1]);
      v31.val[0] = vsubq_s32(v31.val[1], v31.val[0]);
      vst2q_f32(result, v39);
      v31.val[1] = vsubq_s32(v28.val[1], v34.val[1]);
      v37.val[1] = vaddq_s32(v28.val[1], v34.val[1]);
      vst2q_f32(result + 8, v31);
      v11 = result + 16;
      result += 24;
      vst2q_f32(v11, v37);
      if (a3 == 1) {
        return result;
      }
    }
    else {
      v4 = a3;
      if (a3 == 1) {
        return result;
      }
    }
    v12 = a2 + 8;
    v13 = v4 - 1;
    v14 = &a2[16 * v6 + 8];
    v15 = &a2[8 * v6 + 8];
    v16 = vdupq_n_s32(0x9126145F);
    do {
      v17 = v13 >= 2;
      v13 -= 2;
      v29 = vld2q_f32(v12 - 8);
      v32 = vld2q_f32(v15 - 8);
      v35 = vld2q_f32(v14 - 8);
      v18 = vaddq_s32(v35.val[1], v32.val[1]);
      v19 = vaddq_s32(v35.val[0], v32.val[0]);
      v20 = vsubq_s32(v32.val[0], v35.val[0]);
      v32.val[0] = vsubq_s32(v35.val[1], v32.val[1]);
      v32.val[1] = vshrq_n_s32(v19, 1u);
      v35.val[0] = vqrdmulhq_s32(v16, v20);
      v32.val[0] = vqrdmulhq_s32(v16, v32.val[0]);
      v35.val[1] = vaddq_s32(v19, v29.val[0]);
      v21 = vaddq_s32(v18, v29.val[1]);
      v32.val[1] = vsubq_s32(v29.val[0], v32.val[1]);
      v29.val[1] = vsraq_n_s32(v29.val[1], vnegq_s32(v18), 1u);
      v26.val[0] = v35.val[1];
      v26.val[1] = v21;
      vst2q_f32(result, v26);
      v38.val[0] = vaddq_s32(v32.val[0], v32.val[1]);
      v32.val[0] = vsubq_s32(v32.val[1], v32.val[0]);
      v32.val[1] = vsubq_s32(v29.val[1], v35.val[0]);
      v38.val[1] = vaddq_s32(v29.val[1], v35.val[0]);
      vst2q_f32(result + 8, v32);
      vst2q_f32(result + 16, v38);
      v33 = vld2q_f32(v15);
      v36 = vld2q_f32(v14);
      v30 = vld2q_f32(v12);
      v14 += 16;
      v15 += 16;
      v12 += 16;
      v38.val[0] = vaddq_s32(v36.val[1], v33.val[1]);
      v22 = vaddq_s32(v36.val[0], v33.val[0]);
      v23 = vsubq_s32(v33.val[0], v36.val[0]);
      v33.val[0] = vsubq_s32(v36.val[1], v33.val[1]);
      v33.val[1] = vshrq_n_s32(v22, 1u);
      v36.val[0] = vqrdmulhq_s32(v16, v23);
      v33.val[0] = vqrdmulhq_s32(v16, v33.val[0]);
      v36.val[1] = vaddq_s32(v22, v30.val[0]);
      v24 = vaddq_s32(v38.val[0], v30.val[1]);
      v33.val[1] = vsubq_s32(v30.val[0], v33.val[1]);
      v30.val[1] = vsraq_n_s32(v30.val[1], vnegq_s32(v38.val[0]), 1u);
      v27.val[0] = v36.val[1];
      v27.val[1] = v24;
      vst2q_f32(result + 24, v27);
      v38.val[0] = vaddq_s32(v33.val[0], v33.val[1]);
      v33.val[0] = vsubq_s32(v33.val[1], v33.val[0]);
      v33.val[1] = vsubq_s32(v30.val[1], v36.val[0]);
      v38.val[1] = vaddq_s32(v30.val[1], v36.val[0]);
      vst2q_f32(result + 32, v33);
      v25 = result + 40;
      result += 48;
      vst2q_f32(v25, v38);
    } while (v17);
  }
  return result;
}

float* ne10_radix_butterfly_int32_neon_3_false_true_false(float* result,
                                                          const float* a2,
                                                          int a3, int a4)
{
  int32x4_t v4;
  int32x4_t v5;
  unsigned int v6;
  int32x4_t v7;
  __int64 v8;
  int32x4_t v9;
  const float* v10;
  const float* v11;
  const float* v12;
  int32x4_t v13;
  int32x4_t v14;
  int32x4_t v15;
  int32x4_t v16;
  int32x4_t v17;
  int32x4_t v18;
  int32x4_t v19;
  float* v20;
  float32x4x2_t v21;
  float32x4x2_t v22;
  float32x4x2_t v23;
  float32x4x2_t v24;
  float32x4x2_t v25;
  float32x4x2_t v26;
  float32x4x2_t v27;
  float32x4x2_t v28;
  float32x4x2_t v29;
  float32x4x2_t v30;

  if (a3 >= 1) {
    v4 = vdupq_n_s32(0x278DDE6Eu);
    v5 = vdupq_n_s32(0x98722192);
    v6 = a3 + 1;
    v7 = vdupq_n_s32(0x8643C7B3);
    v8 = 8LL * (a4 / 5);
    v9 = vdupq_n_s32(0xB4C373EE);
    do {
      v10 = &a2[v8];
      v23 = vld2q_f32(a2);
      a2 += 8;
      --v6;
      v24 = vld2q_f32(v10);
      v11 = &v10[v8];
      v26 = vld2q_f32(v11);
      v12 = &v11[v8];
      v27 = vld2q_f32(v12);
      v13 = vsubq_s32(v26.val[0], v27.val[0]);
      v28 = vld2q_f32(&v12[v8]);
      v14 = vaddq_s32(v28.val[0], v24.val[0]);
      v15 = vaddq_s32(v28.val[1], v24.val[1]);
      v16 = vsubq_s32(v24.val[0], v28.val[0]);
      v24.val[0] = vsubq_s32(v28.val[1], v24.val[1]);
      v28.val[0] = vaddq_s32(v27.val[0], v26.val[0]);
      v28.val[1] = vaddq_s32(v27.val[1], v26.val[1]);
      v26.val[0] = vsubq_s32(v27.val[1], v26.val[1]);
      v17 = vnegq_s32(v28.val[1]);
      v27.val[1] = vaddq_s32(v28.val[1], v23.val[1]);
      v28.val[1] = vqrdmulhq_s32(v5, v28.val[0]);
      v24.val[1] = vnegq_s32(v15);
      v26.val[1] = vaddq_s32(vaddq_s32(v28.val[0], v23.val[0]), v14);
      v27.val[0] = vaddq_s32(v27.val[1], v15);
      v28.val[0] = vaddq_s32(v23.val[0], vqrdmulhq_s32(v4, v28.val[0]));
      v18 = vaddq_s32(vqrdmulhq_s32(v9, v26.val[0]),
                      vqrdmulhq_s32(v7, v24.val[0]));
      v27.val[1] =
          vaddq_s32(vqrdmulhq_s32(v4, v14), vaddq_s32(v23.val[0], v28.val[1]));
      v19 = vaddq_s32(vqrdmulhq_s32(v9, v13), vqrdmulhq_s32(v7, v16));
      v21.val[0] = v26.val[1];
      v21.val[1] = v27.val[0];
      vst2q_f32(result, v21);
      v30.val[0] = vsubq_s32(v27.val[1], v18);
      v25.val[0] = vaddq_s32(v18, v27.val[1]);
      v23.val[0] =
          vaddq_s32(vsubq_s32(vqrdmulhq_s32(v5, v24.val[1]), v23.val[1]),
                    vqrdmulhq_s32(v4, v17));
      v28.val[1] =
          vaddq_s32(vsubq_s32(vqrdmulhq_s32(v4, v24.val[1]), v23.val[1]),
                    vqrdmulhq_s32(v5, v17));
      v27.val[1] = vaddq_s32(vqrdmulhq_s32(v5, v14), v28.val[0]);
      v23.val[1] = vsubq_s32(vqrdmulhq_s32(v7, v26.val[0]),
                             vqrdmulhq_s32(v9, v24.val[0]));
      v25.val[1] = vsubq_s32(v19, v28.val[1]);
      v24.val[0] = vsubq_s32(vqrdmulhq_s32(v9, v16), vqrdmulhq_s32(v7, v13));
      v30.val[1] = vnegq_s32(vaddq_s32(v28.val[1], v19));
      v29.val[0] = vaddq_s32(v23.val[1], v27.val[1]);
      vst2q_f32(result + 8, v30);
      v29.val[1] = vnegq_s32(vaddq_s32(v23.val[0], v24.val[0]));
      vst2q_f32(result + 16, v29);
      v22.val[0] = vsubq_s32(v27.val[1], v23.val[1]);
      v22.val[1] = vsubq_s32(v24.val[0], v23.val[0]);
      vst2q_f32(result + 24, v22);
      v20 = result + 32;
      result += 40;
      vst2q_f32(v20, v25);
    } while (v6 > 1);
  }
  return result;
}

__int64 ne10_radix_butterfly_int32_neon_4_false_true_false(
    __int64 result, __int64 a2, int32x2_t* a3, int a4, int a5, unsigned int a6)
{

#pragma clang fp contract(off)
  __int64 v6;
  __int64 v7;
  bool v8;
  __int64 v9;
  int v10;
  int32x2_t v11;
  int32x4_t v12;
  int32x4_t v13;
  float* v14;
  int v15;
  __int64 v16;
  const float* v17;
  const float* v18;
  float* v19;
  float* v20;
  int32x4_t v21;
  int32x4_t v22;
  int32x4_t v23;
  int32x4_t v24;
  int32x4_t v25;
  int32x4_t v26;
  int32x4_t v27;
  int32x4_t v28;
  float32x4x2_t v29;
  float32x4x2_t v30;
  float32x4x2_t v31;
  float32x4x2_t v32;
  float32x4x2_t v33;
  float32x4x2_t v34;
  float32x4x2_t v35;
  float32x4x2_t v36;
  float32x4x2_t v37;
  float32x4x2_t v38;
  float32x4x2_t v39;
  float32x4x2_t v40;
  float32x4x2_t v41;
  float32x4x2_t v42;
  float32x4x2_t v43;
  float32x4x2_t v44;
  float32x4x2_t v45;

  if (a4 >= 1 && a5 >= 1) {
    v6 = 32LL * a5;
    v7 = 32 * ((__int64)(int)(a6 + (a6 >> 31)) >> 1);
    while ((a5 & 3) == 0) {
      v10 = a5;
      if ((unsigned int)a5 >= 4) {
        goto LABEL_11;
      }
    LABEL_4:
      result += 32LL * a5;
      a3 -= a5;
      v8 = __OFSUB__(a4--, 1);
      if ((a4 < 0) ^ v8 | (a4 == 0)) {
        return result;
      }
    }
    v9 = 0;
    v10 = a5;
    do {
      PSEUDO_LOW_LANE64(v11, n64_u64, LANES64(*(a3)).n64_u64[0]);
      ++a3;
      --v10;
      v34 = vld2q_f32((const float*)(a2 + v9));
      v39 = vld2q_f32((const float*)(a2 + v7 + v9));
      v12 = vnegq_s32(v39.val[1]);
      v39.val[1] = vqrdmulhq_lane_s32(v12, v11, 0);
      v13 = vsubq_s32(vqrdmulhq_lane_s32(v39.val[0], v11, 0),
                      vqrdmulhq_lane_s32(v12, v11, 1));
      v39.val[0] =
          vaddq_s32(v39.val[1], vqrdmulhq_lane_s32(v39.val[0], v11, 1));
      v44.val[0] = vaddq_s32(v13, v34.val[0]);
      v44.val[1] = vsubq_s32(v34.val[1], v39.val[0]);
      vst2q_f32((float*)(result + v9), v44);
      v14 = (float*)(result + v6 + v9);
      v9 += 32;
      v29.val[0] = vsubq_s32(v34.val[0], v13);
      v29.val[1] = vaddq_s32(v39.val[0], v34.val[1]);
      vst2q_f32(v14, v29);
    } while (32 * (a5 & 3) != (_DWORD)v9);
    result += v9;
    a2 += v9;
    if ((unsigned int)a5 < 4) {
      goto LABEL_4;
    }
  LABEL_11:
    v15 = v10 + 4;
    v16 = 0;
    do {
      v17 = (const float*)(a2 + v16);
      v18 = (const float*)(a2 + v7 + v16);
      v19 = (float*)(result + v16);
      v20 = (float*)(result + v6 + v16);
      v15 -= 4;
      v16 += 128;
      v35 = vld2q_f32(v17);
      v40 = vld2q_f32(v18);
      v21 = vnegq_s32(v40.val[1]);
      v40.val[1] = vqrdmulhq_lane_s32(
          v21, COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]), 0);
      v22 = vsubq_s32(
          vqrdmulhq_lane_s32(
              v40.val[0], COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]), 0),
          vqrdmulhq_lane_s32(
              v21, COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]), 1));
      v40.val[0] = vaddq_s32(
          v40.val[1],
          vqrdmulhq_lane_s32(
              v40.val[0], COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]), 1));
      v45.val[0] = vaddq_s32(v22, v35.val[0]);
      v45.val[1] = vsubq_s32(v35.val[1], v40.val[0]);
      vst2q_f32(v19, v45);
      v30.val[0] = vsubq_s32(v35.val[0], v22);
      v30.val[1] = vaddq_s32(v40.val[0], v35.val[1]);
      vst2q_f32(v20, v30);
      v41 = vld2q_f32(v18 + 8);
      PSEUDO_LOW_LANE128(v45.val[0], n128_u64, LANES64(a3[1]).n64_u64[0]);
      v36 = vld2q_f32(v17 + 8);
      v23 = vnegq_s32(v41.val[1]);
      v41.val[1] = vqrdmulhq_lane_s32(
          v23, COERCE_AS(int32x2_t, LANES128(v45.val[0]).n128_u64[0]), 0);
      v24 = vsubq_s32(
          vqrdmulhq_lane_s32(
              v41.val[0],
              COERCE_AS(int32x2_t, LANES128(v45.val[0]).n128_u64[0]), 0),
          vqrdmulhq_lane_s32(
              v23, COERCE_AS(int32x2_t, LANES128(v45.val[0]).n128_u64[0]), 1));
      v41.val[0] = vaddq_s32(
          v41.val[1],
          vqrdmulhq_lane_s32(
              v41.val[0],
              COERCE_AS(int32x2_t, LANES128(v45.val[0]).n128_u64[0]), 1));
      v45.val[0] = vaddq_s32(v24, v36.val[0]);
      v45.val[1] = vsubq_s32(v36.val[1], v41.val[0]);
      vst2q_f32(v19 + 8, v45);
      v31.val[0] = vsubq_s32(v36.val[0], v24);
      v31.val[1] = vaddq_s32(v41.val[0], v36.val[1]);
      vst2q_f32(v20 + 8, v31);
      v42 = vld2q_f32(v18 + 16);
      PSEUDO_LOW_LANE128(v45.val[0], n128_u64, LANES64(a3[2]).n64_u64[0]);
      v37 = vld2q_f32(v17 + 16);
      v25 = vnegq_s32(v42.val[1]);
      v42.val[1] = vqrdmulhq_lane_s32(
          v25, COERCE_AS(int32x2_t, LANES128(v45.val[0]).n128_u64[0]), 0);
      v26 = vsubq_s32(
          vqrdmulhq_lane_s32(
              v42.val[0],
              COERCE_AS(int32x2_t, LANES128(v45.val[0]).n128_u64[0]), 0),
          vqrdmulhq_lane_s32(
              v25, COERCE_AS(int32x2_t, LANES128(v45.val[0]).n128_u64[0]), 1));
      v42.val[0] = vaddq_s32(
          v42.val[1],
          vqrdmulhq_lane_s32(
              v42.val[0],
              COERCE_AS(int32x2_t, LANES128(v45.val[0]).n128_u64[0]), 1));
      v45.val[0] = vaddq_s32(v26, v37.val[0]);
      v45.val[1] = vsubq_s32(v37.val[1], v42.val[0]);
      vst2q_f32(v19 + 16, v45);
      v32.val[0] = vsubq_s32(v37.val[0], v26);
      v32.val[1] = vaddq_s32(v42.val[0], v37.val[1]);
      vst2q_f32(v20 + 16, v32);
      v43 = vld2q_f32(v18 + 24);
      PSEUDO_LOW_LANE128(v45.val[0], n128_u64, LANES64(a3[3]).n64_u64[0]);
      v38 = vld2q_f32(v17 + 24);
      a3 += 4;
      v27 = vnegq_s32(v43.val[1]);
      v43.val[1] = vqrdmulhq_lane_s32(
          v27, COERCE_AS(int32x2_t, LANES128(v45.val[0]).n128_u64[0]), 0);
      v28 = vsubq_s32(
          vqrdmulhq_lane_s32(
              v43.val[0],
              COERCE_AS(int32x2_t, LANES128(v45.val[0]).n128_u64[0]), 0),
          vqrdmulhq_lane_s32(
              v27, COERCE_AS(int32x2_t, LANES128(v45.val[0]).n128_u64[0]), 1));
      v43.val[0] = vaddq_s32(
          v43.val[1],
          vqrdmulhq_lane_s32(
              v43.val[0],
              COERCE_AS(int32x2_t, LANES128(v45.val[0]).n128_u64[0]), 1));
      v45.val[0] = vaddq_s32(v28, v38.val[0]);
      v45.val[1] = vsubq_s32(v38.val[1], v43.val[0]);
      vst2q_f32(v19 + 24, v45);
      v33.val[0] = vsubq_s32(v38.val[0], v28);
      v33.val[1] = vaddq_s32(v43.val[0], v38.val[1]);
      vst2q_f32(v20 + 24, v33);
    } while (v15 > 4);
    result += v16;
    a2 += v16;
    goto LABEL_4;
  }
  return result;
}

#pragma GCC visibility pop
