#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _DWORD* GameData_212c5b0;
extern _UNKNOWN* GameData_212c5a8;
extern __int128 GameData_1a82a50;
extern __int128 GameData_1a82c60;
extern __int128 GameData_1a82ff0;
extern __int128 GameData_1a83530;
extern char* GameData_1f8f060;
void scene_652240();
float scene_652ba0(float32x4_t* a1, float a2, float a3);

void scene_652240()
{
  _DWORD* v0;
  __int64 v1;
  _QWORD* v2;

  v0 = (_DWORD*)GameData_212c5b0;
  v1 = (int)*GameData_212c5b0;
  v2 = GameData_212c5a8;
  *((_QWORD*)GameData_212c5a8 + v1++) = &GameData_1f8f060;
  *(_DWORD*)v0 = v1;
  v2[v1] = 0;
}

float scene_652ba0(float32x4_t* a1, float a2, float a3)
{
  float32x4_t v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  int8x16_t v10;
  __int64 v11;
  int8x16_t v12;
  int8x16_t v13;
  int8x16_t v14;
  float result;

  v3 = *a1;
  {
    __typeof__(v4) z_ = (__typeof__(v4)){0};
    LODWORD(z_) = HIDWORD(LANES128(*(a1)).n128_u64[0]);
    v4 = z_;
  }
  {
    __typeof__(v5) z_ = (__typeof__(v5)){0};
    LODWORD(z_) = LANES128(*(a1)).n128_u64[1];
    v5 = z_;
  }
  if (COERCE_FLOAT(*a1) >= v4) {
    __typeof__(v6) z_ = (__typeof__(v6)){0};
    LODWORD(z_) = COERCE_AS(_DWORD, *(float32x4_t*)LANES128(*(a1)).n128_f32);
    v6 = z_;
  }
  else {
    __typeof__(v6) z_ = (__typeof__(v6)){0};
    LODWORD(z_) = HIDWORD(LANES128(*(a1)).n128_u64[0]);
    v6 = z_;
  }
  if (v6 >= v5) {
    v7 = v6;
  }
  else {
    __typeof__(v7) z_ = (__typeof__(v7)){0};
    LODWORD(z_) = LANES128(*(a1)).n128_u64[1];
    v7 = z_;
  }
  v8 = 0x0.0p+0f;
  if (v7 > 0x0.0p+0f) {
    if (v4 >= LANES128(v3).n128_f32[0]) {
      __typeof__(v9) z_ = (__typeof__(v9)){0};
      LODWORD(z_) = COERCE_AS(_DWORD, *(float32x4_t*)LANES128(*(a1)).n128_f32);
      v9 = z_;
    }
    else {
      __typeof__(v9) z_ = (__typeof__(v9)){0};
      LODWORD(z_) = HIDWORD(LANES128(*(a1)).n128_u64[0]);
      v9 = z_;
    }
    if (v5 < v9) {
      __typeof__(v9) z_ = (__typeof__(v9)){0};
      LODWORD(z_) = LANES128(*(a1)).n128_u64[1];
      v9 = z_;
    }
    v8 = (float)(v7 - v9) / v7;
  }
  v10 = vmulq_f32(v3, COERCE_AS(float32x4_t, GameData_1a82c60));
  LANES128(v10).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v10, v10, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
          .n64_u64[0];
  v11 = LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
            .n64_u32[0];
  v12 = vmulq_f32(v3, COERCE_AS(float32x4_t, GameData_1a82ff0));
  LANES128(v12).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v12, v12, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
          .n64_u64[0];
  LANES128(v12).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
          .n64_u32[0] |
      (unsigned __int64)(v11 << 32);
  v13 = vmulq_f32(v3, COERCE_AS(float32x4_t, GameData_1a83530));
  LANES128(v13).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v13, v13, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
          .n64_u64[0];
  LANES128(v12).n128_u64[1] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
          .n64_u32[0];
  v14 = vmulq_f32(
      vaddq_f32(
          v12,
          vmulq_n_f32(
              vsubq_f32(v3, v12),
              a2 * (float)(a3 + (float)((float)(v8 * v8) *
                                        (float)(0x1.0000000000000p+0f - a3))))),
      COERCE_AS(float32x4_t, GameData_1a82a50));
  LANES128(v14).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v14, v14, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
          .n64_u64[0];
  {
    __typeof__(result) z_ = (__typeof__(result)){0};
    LODWORD(z_) =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
            .n64_u32[0];
    result = z_;
  }
  return result;
}

#pragma GCC visibility pop
