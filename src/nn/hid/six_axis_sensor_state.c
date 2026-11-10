#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

extern __int128 SdkData_bb3580;
extern __int128 SdkData_bb42f0;
int8x16_t nn_hid_SixAxisSensorState_GetQuaternion(float32x2_t* a1,
                                                  int8x16_t* a2);

int8x16_t nn_hid_SixAxisSensorState_GetQuaternion(float32x2_t* a1,
                                                  int8x16_t* a2)
{
  float32x2_t v2;
  __int64 v3;
  float64x2_t v4;
  int8x16_t v5;
  float32x4_t v6;
  int32x4_t v7;
  float32x4_t v8;
  int8x16_t v9;
  int8x16_t v10;
  int8x16_t v11;
  int8x16_t v12;
  float32x4_t v13;
  int8x16_t v14;
  float32x4_t v15;
  float32x4_t v16;
  int8x16_t result;
  int8x16x2_t v18;

  PSEUDO_LOW_LANE64(v2, n64_u64, LANES64(a1[8]).n64_u64[0]);
  v3 = LANES64(v2).n64_u32[0];
  LANES128(v4).n128_u64[0] = 0xBF800000BF800000LL;
  LANES128(v4).n128_u64[1] = 0xBF800000BF800000LL;
  v5 = vmlaq_n_f32(
      vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, SdkData_bb42f0),
                                 LANES64(a1[6]).n64_f32[1]),
                     vnegq_f64(v4), v2, 1),
      COERCE_AS(float32x4_t, SdkData_bb3580), LANES64(a1[10]).n64_f32[1]);
  LANES128(v6).n128_u64[0] = 0x3F8000003F800000LL;
  LANES128(v6).n128_u64[1] = 0x3F8000003F800000LL;
  v7 = vaddq_f32(v5, v6);
  LANES128(v5).n128_u64[0] =
      LANES64(a1[7]).n64_u32[0] |
      ((unsigned __int64)LANES64(a1[9]).n64_u32[1] << 32);
  LANES128(v5).n128_u64[1] = LANES64(a1[9]).n64_u32[0];
  LANES128(v8).n128_u64[0] =
      v3 | ((unsigned __int64)LANES64(a1[7]).n64_u32[1] << 32);
  LANES128(v8).n128_u64[1] = LANES64(a1[10]).n64_u32[0];
  v18.val[0] = vaddq_f32(v8, v5);
  v18.val[1] = vsubq_f32(v5, v8);
  LANES128(v5).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v18, COERCE_AS(int8x8_t, 0x302010003020100LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v9).n128_i8[8] =
      vqtbl2_s8(v18, COERCE_AS(int8x8_t, 0x1B1A191807060504LL));
  LANES128(v9).n128_u64[0] =
      __PAIR64__(LANES128(v5).n128_u32[1], LANES128(v7).n128_u32[0]);
  *(int8x8_t*)&LANES128(v5).n128_i8[8] =
      vqtbl2_s8(v18, COERCE_AS(int8x8_t, 0x171615140B0A0908LL));
  LANES128(v8).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v18, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v5).n128_u32[1] = LANES128(v7).n128_u32[1];
  LANES128(v8).n128_u32[3] =
      LANES64_OF(vqtbl2_s8(v18, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
          .n64_u32[1];
  LANES128(v10).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v18, COERCE_AS(int8x8_t, 0x171615141B1A1918LL)))
          .n64_u64[0];
  LANES128(v8).n128_u32[2] = LANES128(v7).n128_u32[2];
  LANES128(v18.val[0]).n128_u32[0] =
      LANES64_OF(vqtbl2_s8(v18, COERCE_AS(int8x8_t, 0x302010013121110LL)))
          .n64_u32[0];
  v18.val[1] =
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v7).n128_u64[0]), 1);
  v11 = vdupq_laneq_s32(v7, 2);
  LANES128(v10).n128_u64[1] =
      __PAIR64__(LANES128(v7).n128_u32[3], LANES128(v18.val[0]).n128_u32[0]);
  v18.val[0] =
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v7).n128_u64[0]), 0);
  v12 = vcgeq_f32(v18.val[1], v18.val[0]);
  v18.val[0] = vbslq_s8(v12, v18.val[1], v18.val[0]);
  v18.val[1] = vcgeq_f32(v11, v18.val[0]);
  v13 = vbslq_s8(
      vcgeq_f32(vdupq_laneq_s32(v7, 3), vbslq_s8(v18.val[1], v11, v18.val[0])),
      v10, vbslq_s8(v18.val[1], v8, vbslq_s8(v12, v5, v9)));
  v14 = vmulq_f32(v13, v13);
  LANES128(v14).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v14, v14, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
          .n64_u64[0];
  LANES128(v14).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
          .n64_u64[0];
  LANES128(v14).n128_u64[1] = LANES128(v14).n128_u64[0];
  v15 = vrsqrteq_f32(v14);
  v16 = vmulq_f32(v15, vrsqrtsq_f32(v15, vmulq_f32(v14, v15)));
  result = vbicq_s8(
      vmulq_f32(v13, vmulq_f32(v16, vrsqrtsq_f32(v16, vmulq_f32(v14, v16)))),
      vceqzq_f32(v14));
  *a2 = result;
  return result;
}

#pragma GCC visibility pop
