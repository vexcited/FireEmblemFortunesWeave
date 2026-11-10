#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

bool SphereCulling_Unknown4(float32x4_t* a1, float32x4_t* a2);

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
