#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

bool ScreenAreaCulling_Unknown3(float32x4_t* a1, float32x2_t* a2);
float32x4_t ScreenAreaCulling_Unknown2(__int64 a1, __int64 a2);

float32x4_t ScreenAreaCulling_Unknown2(__int64 a1, __int64 a2)
{
  __int128 v4;
  __int128 v5;
  __int128 v6;
  long double v7;
  float32x4_t v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t result;

  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(__n128, "v3", "=w"));
  *(long double*)(a1 + 16) =
      ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)a2 + 16LL))(a2),
                       v12 = COERCE_AS(__typeof__(v12),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                       v13 = COERCE_AS(__typeof__(v13),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                       v14 = COERCE_AS(__typeof__(v14),
                                       PSEUDO_REGISTER(__n128, "v3", "=w")),
                       v4 = COERCE_AS(__typeof__(v4),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                       v5 = COERCE_AS(__typeof__(v5),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                       v6 = COERCE_AS(__typeof__(v6),
                                      PSEUDO_REGISTER(__n128, "v3", "=w"));
  *(_OWORD*)(a1 + 32) = v4;
  *(_OWORD*)(a1 + 48) = v5;
  *(_OWORD*)(a1 + 64) = v6;
  v7 = ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)a2 + 24LL))(a2),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v8 = *(float32x4_t*)(a1 + 16);
  v9 = *(float32x4_t*)(a1 + 32);
  v10 = *(float32x4_t*)(a1 + 48);
  v11 = *(float32x4_t*)(a1 + 64);
  *(long double*)(a1 + 80) = v7;
  *(float32x4_t*)(a1 + 96) = v12;
  *(float32x4_t*)(a1 + 112) = v13;
  *(float32x4_t*)(a1 + 128) = v14;
  v15 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t*)&v7, LANES128(v8).n128_f32[0]),
                     v12, COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0]), 1),
      v13, v8, 2);
  v16 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t*)&v7, LANES128(v9).n128_f32[0]),
                     v12, COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0]), 1),
      v13, v9, 2);
  v17 = vmulq_n_f32(*(float32x4_t*)&v7, LANES128(v10).n128_f32[0]);
  *(float32x4_t*)(a1 + 144) = v15;
  *(float32x4_t*)(a1 + 160) = v16;
  result = vaddq_f32(
      v14, vmlaq_laneq_f32(
               vmlaq_lane_f32(
                   vmulq_n_f32(*(float32x4_t*)&v7, LANES128(v11).n128_f32[0]),
                   v12, COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0]), 1),
               v13, v11, 2));
  *(float32x4_t*)(a1 + 176) = vmlaq_laneq_f32(
      vmlaq_lane_f32(v17, v12,
                     COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]), 1),
      v13, v10, 2);
  *(float32x4_t*)(a1 + 192) = result;
  return result;
}

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
