#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

bool SphereCulling_Unknown4(float32x4_t* a1, float32x4_t* a2);
bool SphereCulling_Unknown3(float32x4_t* a1, __int128* a2);

bool SphereCulling_Unknown3(float32x4_t* a1, __int128* a2)
{

#pragma clang fp contract(off)
  float32x4_t v2;
  __int128 v3;
  float32x4_t v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float32x4_t v10;
  float32x4_t v11;
  int8x16_t v12;

  v2 = a1[1];
  v3 = *a2;
  v4 = COERCE_AS(float32x4_t, a2[1]);
  {
    __typeof__(v5) z_ = (__typeof__(v5)){0};
    LODWORD(z_) = HIDWORD(LANES128(a1[1]).n128_u64[0]);
    v5 = z_;
  }
  {
    __typeof__(v6) z_ = (__typeof__(v6)){0};
    LODWORD(z_) = HIDWORD(*(_QWORD*)a2);
    v6 = z_;
  }
  if ((LANES64_OF(vmovn_s32(vcgtq_f32(v2, v4))).n64_u8[0] & 1) != 0) {
    __typeof__(v7) z_ = (__typeof__(v7)){0};
    LODWORD(z_) = a2[1];
    v7 = z_;
  }
  else {
    __typeof__(v7) z_ = (__typeof__(v7)){0};
    LODWORD(z_) = *(_DWORD*)&(a1[1]);
    v7 = z_;
  }
  {
    __typeof__(v8) z_ = (__typeof__(v8)){0};
    LODWORD(z_) = *((_QWORD*)a2 + 3);
    v8 = z_;
  }
  if (*(float*)&v3 >= v7) {
    __typeof__(v7) z_ = (__typeof__(v7)){0};
    LODWORD(z_) = *a2;
    v7 = z_;
  }
  {
    __typeof__(v9) z_ = (__typeof__(v9)){0};
    LODWORD(z_) = *((_QWORD*)a2 + 1);
    v9 = z_;
  }
  if (COERCE_FLOAT(HIDWORD(*((_QWORD*)a2 + 2))) < v5) {
    __typeof__(v5) z_ = (__typeof__(v5)){0};
    LODWORD(z_) = HIDWORD(*((_QWORD*)a2 + 2));
    v5 = z_;
  }
  if (v6 < v5) {
    v6 = v5;
  }
  if (LANES128(v4).n128_f32[2] >= LANES128(v2).n128_f32[2]) {
    __typeof__(v8) z_ = (__typeof__(v8)){0};
    LODWORD(z_) = LANES128(a1[1]).n128_u64[1];
    v8 = z_;
  }
  if (*((float*)&v3 + 2) < v8) {
    v9 = v8;
  }
  LANES128(v10).n128_u64[0] = __PAIR64__(LODWORD(v6), LODWORD(v7));
  LANES128(v10).n128_u64[1] = LODWORD(v9);
  v11 = vsubq_f32(v10, v2);
  v12 = vmulq_f32(v11, v11);
  LANES128(v12).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v12, v12, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
          .n64_u64[0];
  return LANES64_OF(
             vpadd_f32(COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
             .n64_f32[0] <
         (float)(LANES128(a1[2]).n128_f32[0] * LANES128(a1[2]).n128_f32[0]);
}

bool SphereCulling_Unknown4(float32x4_t* a1, float32x4_t* a2)
{

#pragma clang fp contract(off)
  float32x4_t v2;
  int8x16_t v3;

  v2 = vsubq_f32(a1[1], *a2);
  v3 = vmulq_f32(v2, v2);
  LANES128(v3).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v3, v3, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v3).n128_u64[0])))
          .n64_u64[0];
  return LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v3).n128_u64[0]),
                              COERCE_AS(float32x2_t, LANES128(v3).n128_u64[0])))
             .n64_f32[0] < (float)((float)(LANES128(a1[2]).n128_f32[0] +
                                           LANES128(a2[1]).n128_f32[0]) *
                                   (float)(LANES128(a1[2]).n128_f32[0] +
                                           LANES128(a2[1]).n128_f32[0]));
}

#pragma GCC visibility pop
