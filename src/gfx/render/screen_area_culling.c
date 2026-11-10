#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

bool ScreenAreaCulling_Unknown3(float32x4_t* a1, float32x2_t* a2);

bool ScreenAreaCulling_Unknown3(float32x4_t* a1, float32x2_t* a2)
{
  float32x4_t v2;
  float32x4_t v3;
  float32x4_t v4;
  float32x4_t v5;
  float32x4_t v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  float32x2_t v9;
  float32x4_t v10;
  float32x2_t v11;
  float32x2_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x2_t v15;
  float32x2_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x2_t v19;
  float32x2_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;

  v2 = *(float32x4_t*)LANES64(a2[2]).n64_u64;
  v4 = a1[9];
  v3 = a1[10];
  v5 = a1[11];
  v6 = a1[12];
  v7 = HIDWORD(LANES64(*(a2)).n64_u64[0]);
  v8 = LANES128(v2).n128_u32[0] | ((unsigned __int64)(unsigned int)v7 << 32);
  LANES64(v9).n64_u64[0] =
      (unsigned int)*(_OWORD*)LANES64(*(a2)).n64_u64 | (v7 << 32);
  v10 = vaddq_f32(
      vmlaq_laneq_f32(
          vmlaq_lane_f32(
              vmulq_n_f32(v4, COERCE_FLOAT(*(_OWORD*)LANES64(*(a2)).n64_u64)),
              v3, COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]), 1),
          v5, *(float32x4_t*)LANES64(*(a2)).n64_u64, 2),
      v6);
  LANES128(v10).n128_u64[0] =
      LANES128_OF(vmulq_n_f32(v10, 1.0f / LANES128(v10).n128_f32[3]))
          .n128_u64[0];
  LANES64(v11).n64_u64[0] =
      LANES64_OF(vmin_f32(COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]),
                          vneg_f32(COERCE_AS(float32x2_t, 0x80000000800000LL))))
          .n64_u64[0];
  LANES64(v12).n64_u64[0] =
      LANES64_OF(vmax_f32(COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]),
                          COERCE_AS(float32x2_t, 0x80000000800000LL)))
          .n64_u64[0];
  v13 = vmlaq_lane_f32(vmulq_n_f32(v4, *(float*)&v8), v3,
                       COERCE_AS(float32x2_t, v8), 1);
  LANES128(v10).n128_u32[0] = LANES64(a2[1]).n64_u64[0];
  v14 = vaddq_f32(v6, vmlaq_n_f32(v13, v5, LANES128(v10).n128_f32[0]));
  LANES128(v14).n128_u64[0] =
      LANES128_OF(vmulq_n_f32(v14, 1.0f / LANES128(v14).n128_f32[3]))
          .n128_u64[0];
  LANES64(v15).n64_u64[0] =
      LANES64_OF(
          vmin_f32(v11, COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
          .n64_u64[0];
  LANES64(v16).n64_u64[0] =
      LANES64_OF(
          vmax_f32(v12, COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
          .n64_u64[0];
  v17 = vmlaq_lane_f32(
      vmulq_n_f32(v4, COERCE_FLOAT(*(_OWORD*)LANES64(*(a2)).n64_u64)), v3,
      COERCE_AS(float32x2_t,
                ((unsigned int)*(_OWORD*)LANES64(*(a2)).n64_u64 |
                 ((unsigned __int64)LANES128(v2).n128_u32[1] << 32))),
      1);
  v18 = vaddq_f32(v6, vmlaq_n_f32(v17, v5, LANES128(v10).n128_f32[0]));
  LANES128(v18).n128_u64[0] =
      LANES128_OF(vmulq_n_f32(v18, 1.0f / LANES128(v18).n128_f32[3]))
          .n128_u64[0];
  LANES64(v19).n64_u64[0] =
      LANES64_OF(
          vmin_f32(v15, COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
          .n64_u64[0];
  LANES64(v20).n64_u64[0] =
      LANES64_OF(
          vmax_f32(v16, COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
          .n64_u64[0];
  LANES128(v18).n128_u32[0] = LANES64(a2[3]).n64_u64[0];
  v21 = vaddq_f32(v6, vmlaq_n_f32(v17, v5, LANES128(v18).n128_f32[0]));
  v22 = vaddq_f32(v6, vmlaq_n_f32(v13, v5, LANES128(v18).n128_f32[0]));
  v23 = vaddq_f32(
      v6, vmlaq_n_f32(vmlaq_lane_f32(vmulq_n_f32(v4, LANES64(v9).n64_f32[0]),
                                     v3, v9, 1),
                      v5, LANES128(v18).n128_f32[0]));
  LANES128(v22).n128_u64[0] =
      LANES128_OF(vmulq_n_f32(v22, 1.0f / LANES128(v22).n128_f32[3]))
          .n128_u64[0];
  LANES128(v23).n128_u64[0] =
      LANES128_OF(vmulq_n_f32(v23, 1.0f / LANES128(v23).n128_f32[3]))
          .n128_u64[0];
  LANES128(v21).n128_u64[0] =
      LANES128_OF(vmulq_n_f32(v21, 1.0f / LANES128(v21).n128_f32[3]))
          .n128_u64[0];
  v24 = vaddq_f32(
      v6,
      vmlaq_n_f32(vmlaq_lane_f32(
                      vmulq_n_f32(v4, COERCE_FLOAT(LANES64(a2[2]).n64_u64[0])),
                      v3, a2[2], 1),
                  v5, LANES128(v10).n128_f32[0]));
  v25 = vaddq_f32(
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v4, LANES128(v2).n128_f32[0]), v3,
                         COERCE_AS(float32x2_t, LANES128(v2).n128_u64[0]), 1),
          v5, v2, 2),
      v6);
  LANES128(v24).n128_u64[0] =
      LANES128_OF(vmulq_n_f32(v24, 1.0f / LANES128(v24).n128_f32[3]))
          .n128_u64[0];
  LANES128(v25).n128_u64[0] =
      LANES128_OF(vmulq_n_f32(v25, 1.0f / LANES128(v25).n128_f32[3]))
          .n128_u64[0];
  LANES128(v25).n128_u64[0] =
      LANES64_OF(
          vsub_f32(
              vmax_f32(
                  vmax_f32(
                      vmax_f32(
                          vmax_f32(vmax_f32(v20, COERCE_AS(float32x2_t,
                                                           LANES128(v23)
                                                               .n128_u64[0])),
                                   COERCE_AS(float32x2_t,
                                             LANES128(v21).n128_u64[0])),
                          COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])),
                      COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0])),
                  COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])),
              vmin_f32(
                  vmin_f32(
                      vmin_f32(
                          vmin_f32(vmin_f32(v19, COERCE_AS(float32x2_t,
                                                           LANES128(v23)
                                                               .n128_u64[0])),
                                   COERCE_AS(float32x2_t,
                                             LANES128(v21).n128_u64[0])),
                          COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])),
                      COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0])),
                  COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0]))))
          .n64_u64[0];
  return (float)((float)((float)((float)LANES128(a1[13]).n128_i32[0] * 0.5f) *
                         LANES128(v25).n128_f32[0]) *
                 vmuls_lane_f32(
                     (float)LANES128(a1[13]).n128_i32[1] * 0.5f,
                     COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0]), 1)) >=
         (float)LANES128(a1[13]).n128_i32[2];
}

#pragma GCC visibility pop
