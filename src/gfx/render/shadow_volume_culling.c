#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

bool ShadowVolumeCulling_Unknown4(float32x4_t* a1, float32x4_t* a2);

bool ShadowVolumeCulling_Unknown4(float32x4_t* a1, float32x4_t* a2)
{
  float32x4_t v2;
  float v3;
  int8x16_t v4;
  int8x16_t v5;
  float32x4_t v7;
  float32x4_t v8;
  int8x16_t v9;
  float32x4_t v10;
  int8x16_t v11;

  if ((LANES128(a1[11]).n128_u8[0] & 1) != 0) {
    LANES128(v2).n128_u64[0] = LANES128(*(a2)).n128_u64[0];
    LANES128(v2).n128_u64[1] =
        LANES128(*(a2)).n128_u32[2] | 0x3F80000000000000LL;
    v3 = LANES128(a2[1]).n128_f32[0];
    v4 = vmulq_f32(a1[7], v2);
    LANES128(v4).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v4, v4, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v4).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v4).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v4).n128_u64[0])))
            .n64_f32[0] > v3) {
      return false;
    }
    v5 = vmulq_f32(v2, a1[8]);
    LANES128(v5).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v5, v5, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0])))
            .n64_f32[0] > v3) {
      return false;
    }
  }
  else {
    v3 = LANES128(a2[1]).n128_f32[0];
  }
  v7 = a1[5];
  v8 = vsubq_f32(*a2, a1[6]);
  v9 = vmulq_f32(v8, v7);
  LANES128(v9).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v9, v9, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
          .n64_u64[0];
  v10 = vsubq_f32(
      v8,
      vmulq_n_f32(
          v7, LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
                  .n64_f32[0]));
  v11 = vmulq_f32(v10, v10);
  LANES128(v11).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v11, v11, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0])))
          .n64_u64[0];
  return LANES64_OF(
             vpadd_f32(COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0])))
             .n64_f32[0] <= (float)((float)(v3 + LANES128(a1[10]).n128_f32[3]) *
                                    (float)(v3 + LANES128(a1[10]).n128_f32[3]));
}

#pragma GCC visibility pop
