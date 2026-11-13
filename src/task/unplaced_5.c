#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

extern __int128 GameData_1a82a50;
extern __int128 GameData_1a82c60;
extern __int128 GameData_1a82ff0;
extern __int128 GameData_1a83530;
extern __int128 GameData_1a83620;
float task_649d50(__int64 a1, float32x4_t* a2);

float task_649d50(__int64 a1, float32x4_t* a2)
{
  int v2;
  float32x4_t v3;
  float v4;
  float v5;
  float v6;
  int8x16_t v7;
  float32x2_t v8;
  __int64 v9;
  int8x16_t v10;
  int8x16_t v11;
  int8x16_t v12;
  unsigned __int32 v13;
  float32x4_t v14;
  int8x16_t v15;

  v2 = *(_DWORD*)(a1 + 13240);
  if ((unsigned int)(v2 - 3) > 3) {
    v14 = *a2;
  }
  else {
    v3 = *a2;
    if ((unsigned int)(v2 - 5) > 1) {
      v15 = vmulq_f32(v3, COERCE_AS(float32x4_t, GameData_1a83620));
      LANES128(v15).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v15, v15, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
              .n64_u64[0];
      v13 = LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
                .n64_u32[0];
    }
    else {
      {
        __typeof__(v4) z_ = (__typeof__(v4)){0};
        LODWORD(z_) = HIDWORD(LANES128(*(a2)).n128_u64[0]);
        v4 = z_;
      }
      if (LANES128(v3).n128_f32[0] >= LANES128(v3).n128_f32[1]) {
        __typeof__(v5) z_ = (__typeof__(v5)){0};
        LODWORD(z_) =
            COERCE_AS(_DWORD, *(float32x4_t*)LANES128(*(a2)).n128_f32);
        v5 = z_;
      }
      else {
        __typeof__(v5) z_ = (__typeof__(v5)){0};
        LODWORD(z_) = HIDWORD(LANES128(*(a2)).n128_u64[0]);
        v5 = z_;
      }
      if (v5 < LANES128(v3).n128_f32[2]) {
        __typeof__(v5) z_ = (__typeof__(v5)){0};
        LODWORD(z_) = LANES128(*(a2)).n128_u64[1];
        v5 = z_;
      }
      if (LANES128(v3).n128_f32[1] >= LANES128(v3).n128_f32[0]) {
        __typeof__(v4) z_ = (__typeof__(v4)){0};
        LODWORD(z_) =
            COERCE_AS(_DWORD, *(float32x4_t*)LANES128(*(a2)).n128_f32);
        v4 = z_;
      }
      if (LANES128(v3).n128_f32[2] < v4) {
        __typeof__(v4) z_ = (__typeof__(v4)){0};
        LODWORD(z_) = LANES128(*(a2)).n128_u64[1];
        v4 = z_;
      }
      v6 = (float)(v5 - v4) / v5;
      v7 = vmulq_f32(v3, COERCE_AS(float32x4_t, GameData_1a82c60));
      LANES64(v8).n64_u64[0] =
          LANES64_OF(
              vadd_f32(COERCE_AS(float32x2_t,
                                 LANES128_OF(vextq_s8(v7, v7, 8u)).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0])))
              .n64_u64[0];
      if (v5 <= 0x0.0p+0f) {
        v6 = 0x0.0p+0f;
      }
      v9 = LANES64_OF(vpadd_f32(v8, v8)).n64_u32[0];
      v10 = vmulq_f32(v3, COERCE_AS(float32x4_t, GameData_1a82ff0));
      LANES128(v10).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v10, v10, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
              .n64_u64[0];
      LANES128(v10).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
              .n64_u32[0] |
          (unsigned __int64)(v9 << 32);
      v11 = vmulq_f32(v3, COERCE_AS(float32x4_t, GameData_1a83530));
      LANES128(v11).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v11, v11, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0])))
              .n64_u64[0];
      LANES128(v10).n128_u64[1] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0])))
              .n64_u32[0];
      v12 = vmulq_f32(
          vaddq_f32(v10, vmulq_n_f32(vsubq_f32(v3, v10),
                                     (float)((float)(v6 * v6) * 0x0.0p+0f) +
                                         0x1.0000000000000p+0f)),
          COERCE_AS(float32x4_t, GameData_1a82a50));
      LANES128(v12).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v12, v12, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
              .n64_u64[0];
      v13 = LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
                .n64_u32[0];
    }
    PSEUDO_LOW_LANE128(v14, n128_u32, v13);
  }
  return LANES128(v14).n128_f32[0];
}

#pragma GCC visibility pop
