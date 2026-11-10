#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int128 GameData_1a83750;
float cosf(float);
float sinf(float);
float tanf(float);
float32x4_t gfx_light_c53b70(float32x4_t* a1, __int64 a2);
__n128 gfx_light_c53c90(float32x4_t* a1, float32x4_t* a2);
__n128 gfx_light_c53e50(float32x4_t* a1, float32x4_t* a2);

float32x4_t gfx_light_c53b70(float32x4_t* a1, __int64 a2)
{

#pragma clang fp contract(off)
  _QWORD* v2;
  float32x4_t v3;
  int8x16_t v4;
  float v5;

  v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = *(_QWORD**)(a2 + 32);
  if (v2 != nullptr) {
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, float32x4_t*))(
        *v2 + 48LL))((void*)(v2), v2, a1 + 3),
        v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  else {
    v3 = a1[3];
  }
  v4 = vmulq_f32(v3, COERCE_AS(float32x4_t, GameData_1a83750));
  LANES128(v4).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v4, v4, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v4).n128_u64[0])))
          .n64_u64[0];
  v5 = LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v4).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v4).n128_u64[0])))
           .n64_f32[0];
  if (v5 < 0x1.0624de0000000p-10f) {
    v5 = 0x1.0624de0000000p-10f;
  }
  return vmulq_n_f32(v3, 0x1.0000000000000p+0f / v5);
}

__n128 gfx_light_c53c90(float32x4_t* a1, float32x4_t* a2)
{
  float v2;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float32x4_t v12;
  float32x2_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  int8x16_t v18;
  float32x4_t v19;
  int8x16_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  __n128 result;
  float v25;

  v2 = LANES128(a1[2]).n128_f32[0];
  v5 = LANES128(a1[17]).n128_f32[0] * 0x1.1df46a0000000p-6f;
  v6 = v5 * 0.5f;
  if (v5 >= 0x1.921fb60000000p+0f) {
    v10 = tanf(v5 * 0.5f);
    v11 = LANES128(a1[2]).n128_f32[0];
    LANES128(v12).n128_u32[1] = 0;
    LANES128(v12).n128_u32[3] = 0;
    LANES128(v12).n128_f32[0] = v2 * v10;
    LANES128(v12).n128_f32[2] = -v11;
    LANES64(v13).n64_u64[0] =
        LANES64_OF(
            vadd_f32(
                vmul_f32(COERCE_AS(float32x2_t, COERCE_UNSIGNED_INT(-v11)),
                         COERCE_AS(float32x2_t, COERCE_UNSIGNED_INT(-v11))),
                vmul_f32(
                    COERCE_AS(float32x2_t, COERCE_UNSIGNED_INT(v2 * v10)),
                    COERCE_AS(float32x2_t, COERCE_UNSIGNED_INT(v2 * v10)))))
            .n64_u64[0];
    LANES128(v14).n128_u64[0] = LANES64_OF(vpadd_f32(v13, v13)).n64_u64[0];
    LANES128(v14).n128_u64[1] = LANES128(v14).n128_u64[0];
    v15 = vrsqrteq_f32(v14);
    v16 = vmulq_f32(v15, vrsqrtsq_f32(v15, vmulq_f32(v14, v15)));
    v17 = vmulq_n_f32(
        vbicq_s8(vmulq_f32(v12, vmulq_f32(v16, vrsqrtsq_f32(
                                                   v16, vmulq_f32(v14, v16)))),
                 vceqzq_f32(v14)),
        v11);
    v18 = vmulq_f32(v17, v17);
    LANES128(v18).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v18, v18, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
            .n64_u64[0];
    v25 = LANES64_OF(vsqrt_f32(vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]))))
              .n64_f32[0];
    v9 = sinf(v6) * v25;
    v8 = cosf(v6) * v25;
  }
  else {
    v7 = cosf(v5 * 0.5f);
    v8 = v2 / (float)(v7 + v7);
    v9 = v8;
  }
  v19 = a1[16];
  v20 = vmulq_f32(v19, v19);
  LANES128(v20).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v20, v20, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0])))
          .n64_u64[0];
  LANES128(v20).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0])))
          .n64_u64[0];
  LANES128(v20).n128_u64[1] = LANES128(v20).n128_u64[0];
  v21 = vrsqrteq_f32(v20);
  v22 = vmulq_f32(v21, vrsqrtsq_f32(v21, vmulq_f32(v20, v21)));
  v23 = vaddq_f32(
      a1[1],
      vmulq_n_f32(
          vbicq_s8(
              vmulq_f32(v19,
                        vmulq_f32(v22, vrsqrtsq_f32(v22, vmulq_f32(v20, v22)))),
              vceqzq_f32(v20)),
          v8));
  if (a2 != nullptr) {
    v23 =
        vaddq_f32(vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(*a2, LANES128(v23).n128_f32[0]), a2[1],
                          COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]), 1),
                      a2[2], v23, 2),
                  a2[3]);
  }
  LANES128(result).n128_u64[0] = LANES128(v23).n128_u64[0];
  LANES128(result).n128_u64[1] =
      LANES128(v23).n128_u32[2] | ((unsigned __int64)LODWORD(v9) << 32);
  return result;
}

__n128 gfx_light_c53e50(float32x4_t* a1, float32x4_t* a2)
{
  float32x4_t v2;
  __n128 result;

  v2 = a1[1];
  if (a2 != nullptr) {
    v2 = vaddq_f32(
        vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(*a2, LANES128(v2).n128_f32[0]), a2[1],
                           COERCE_AS(float32x2_t, LANES128(v2).n128_u64[0]), 1),
            a2[2], v2, 2),
        a2[3]);
  }
  LANES128(result).n128_u64[0] = LANES128(v2).n128_u64[0];
  LANES128(result).n128_u64[1] =
      LANES128(v2).n128_u32[2] |
      ((unsigned __int64)LANES128(a1[2]).n128_u32[0] << 32);
  return result;
}

#pragma GCC visibility pop
