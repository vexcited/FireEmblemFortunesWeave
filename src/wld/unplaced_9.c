#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

double cos(double);
double sin(double);
void wld_a8c210(float32x4_t* a1, float32x4_t* a2);

void wld_a8c210(float32x4_t* a1, float32x4_t* a2)
{
  float32x4_t v2;
  int8x16_t v3;
  float32x4_t v5;
  float v6;
  float v7;
  double v8;
  double v9;
  double v10;
  double v11;
  double v12;
  double v13;
  double v14;
  double v15;
  double v16;
  float v17;
  float v18;
  float v19;
  float v20;
  unsigned __int32 v24;

  v2 = vsubq_f32(a1[20], *a2);
  v3 = vmulq_f32(v2, v2);
  LANES128(v3).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v3, v3, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v3).n128_u64[0])))
          .n64_u64[0];
  if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v3).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v3).n128_u64[0])))
          .n64_f32[0] != 0x0.0p+0f) {
    LANES128(a1[20]).n128_u32[0] = *(unsigned __int32*)&(*a2);
    LANES128(a1[20]).n128_u32[1] = LANES128(*(a2)).n128_u32[1];
    v5 = a1[20];
    LANES128(v5).n128_u64[1] = LANES128(*(a2)).n128_u32[2];
    a1[20] = v5;
    v6 = LANES128(*(a2)).n128_f32[1];
    v7 = LANES128(*(a2)).n128_f32[0];
    v8 = LANES128(*(a2)).n128_f32[2] * 0x1.0000000000000p-1;
    v9 = cos(v8);
    v10 = sin(v8);
    v11 = v7 * 0x1.0000000000000p-1;
    v12 = cos(v11);
    v13 = sin(v11);
    v14 = v6 * 0x1.0000000000000p-1;
    v15 = cos(v14);
    v16 = sin(v14);
    v17 = v9 * v13 * v15 - PSEUDO_UNFUSED(v16 * (v10 * v12));
    v18 = PSEUDO_UNFUSED(v10 * v13 * v15) + PSEUDO_UNFUSED(v9 * v12) * v16;
    v19 = PSEUDO_UNFUSED(v10 * v13 * v16) + PSEUDO_UNFUSED(v9 * v12) * v15;
    v20 = v10 * v12 * v15 - PSEUDO_UNFUSED(v16 * (v9 * v13));
    if (COERCE_FLOAT(*(_OWORD*)&a1[21]) != v17 ||
        COERCE_FLOAT(HIDWORD(LANES128(a1[21]).n128_u64[0])) != v18 ||
        COERCE_FLOAT(LANES128(a1[21]).n128_u64[1]) != v20 ||
        COERCE_FLOAT(HIDWORD(*(_OWORD*)&a1[21])) != v19) {
      v24 = LANES128(a1[18]).n128_u32[2];
      LANES128(a1[21]).n128_f32[0] = v17;
      LANES128(a1[21]).n128_f32[1] = v18;
      LANES128(a1[21]).n128_f32[2] = v20;
      LANES128(a1[21]).n128_f32[3] = v19;
      LANES128(a1[18]).n128_u32[2] = v24 | 1;
    }
  }
}

#pragma GCC visibility pop
