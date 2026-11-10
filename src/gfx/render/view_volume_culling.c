#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

bool ViewVolumeCulling_Unknown4(float32x4_t* a1, float32x4_t* a2);

bool ViewVolumeCulling_Unknown4(float32x4_t* a1, float32x4_t* a2)
{
  __int64 v2;
  float32x4_t v3;
  float v4;
  int8x16_t v5;
  _BOOL8 result;
  int8x16_t v7;
  float* v8;
  __int64 v9;
  float32x4_t v10;
  float v11;
  int8x16_t v12;
  int8x16_t v13;
  int8x16_t v14;
  __int64 v15;
  float* v16;
  bool v18;
  int8x16_t v19;
  float v20;

  v2 = LANES128(a1[15]).n128_u32[0];
  if ((int)v2 < 1) {
    return true;
  }
  v3 = *a2;
  v4 = LANES128(a2[1]).n128_f32[0];
  if (LANES128(a1[16]).n128_u8[0] != 1) {
    v7 = vmulq_f32(v3, a1[3]);
    LANES128(v7).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v7, v7, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0])))
            .n64_u64[0];
    if ((float)(LANES64_OF(
                    vpadd_f32(COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0]),
                              COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0])))
                    .n64_f32[0] +
                LANES128(a1[4]).n128_f32[0]) <= v4) {
      v8 = (float*)&a1[6];
      v9 = (unsigned int)(v2 - 1) + 1LL;
      do {
        result = --v9 == 0;
        if (v9 == 0) {
          break;
        }
        v10 = *(float32x4_t*)(v8 - 4);
        v11 = *v8;
        v8 += 8;
        v12 = vmulq_f32(v3, v10);
        LANES128(v12).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v12, v12, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
                .n64_u64[0];
      } while (
          (float)(LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
                      .n64_f32[0] +
                  v11) <= v4);
      return result;
    }
    return false;
  }
  v5 = vmulq_f32(v3, a1[3]);
  LANES128(v5).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v5, v5, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0])))
          .n64_u64[0];
  if ((float)(LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0])))
                  .n64_f32[0] +
              LANES128(a1[4]).n128_f32[0]) > v4) {
    return false;
  }
  if ((_DWORD)v2 == 1) {
    return true;
  }
  v13 = vmulq_f32(v3, a1[5]);
  LANES128(v13).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v13, v13, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
          .n64_u64[0];
  if ((float)(LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
                  .n64_f32[0] +
              LANES128(a1[6]).n128_f32[0]) > v4) {
    return false;
  }
  if ((_DWORD)v2 == 2) {
    return true;
  }
  v14 = vmulq_f32(v3, a1[7]);
  LANES128(v14).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v14, v14, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
          .n64_u64[0];
  if ((float)(LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
                  .n64_f32[0] +
              LANES128(a1[8]).n128_f32[0]) > v4) {
    return false;
  }
  if ((unsigned int)(v2 - 3) < 2) {
    return true;
  }
  v15 = v2 - 5;
  v16 = (float*)&a1[12];
  do {
    v18 = v15-- != 0;
    v19 = vmulq_f32(v3, *(float32x4_t*)(v16 - 4));
    LANES128(v19).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v19, v19, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0])))
            .n64_u64[0];
    v20 = *v16;
    v16 += 8;
    LANES128(v19).n128_f32[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0])))
            .n64_f32[0] +
        v20;
    result = LANES128(v19).n128_f32[0] <= v4;
  } while (LANES128(v19).n128_f32[0] <= v4 && v18);
  return result;
}

#pragma GCC visibility pop
