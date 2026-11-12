#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

double exp2(double);
__attribute__((swiftcall)) void math_620890(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float a4);

__attribute__((swiftcall)) void math_620890(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float a4)
{
  float32x4_t* a3 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  float32x4_t v4;
  float32x4_t v5;
  float32x4_t v6;
  float32x4_t v8;
  float v9;
  double v10;
  double v11;
  double v12;
  float v13;
  double v14;
  double v15;
  double v16;
  double v17;
  double v18;
  double v19;
  double v20;
  float32x4_t v21;
  float v22;
  float v23;
  float32x4_t v24;
  float32x4_t v25;
  float v26;
  float v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;

  v4 = *a1;
  v5 = *a2;
  LANES128(v6).n128_u64[0] = 0x3F0000003F000000LL;
  LANES128(v6).n128_u64[1] = 0x3F0000003F000000LL;
  v8 = vaddq_f32(vmulq_f32(*a1, v6), vmulq_f32(*a2, v6));
  if (a4 >= 0x1.0000000000000p-1f) {
    v13 = (float)(a4 + -0x1.0000000000000p-1f) +
          (float)(a4 + -0x1.0000000000000p-1f);
    v14 = v13;
    v15 = 0x1.0000000000000p+0 - v13;
    if (v13 == 0x0.0p+0f) {
      v16 = 0x1.0000000000000p-10;
    }
    else {
      v29 = *a2;
      v33 = v8;
      v19 = exp2(v15 * -0x1.4000000000000p+3);
      v5 = v29;
      v8 = v33;
      v16 = v19;
    }
    if (v13 == 0x1.0000000000000p+0f) {
      v20 = 0x1.0000000000000p-10;
    }
    else {
      v31 = v5;
      v35 = v8;
      v20 = exp2(v14 * -0x1.4000000000000p+3);
      v5 = v31;
      v8 = v35;
    }
    v25 = vsubq_f32(v5, v8);
    v26 = v20 - v14 * 0x1.0000000000000p-10;
    v27 = v16 - v15 * 0x1.0000000000000p-10;
    v24 = vaddq_f32(
        v8, vaddq_f32(
                vmulq_n_f32(v25, v27),
                vmulq_n_f32(v25, (float)(0x1.0000000000000p+0f - v26) - v27)));
  }
  else {
    v9 = a4 + a4;
    v10 = (float)(a4 + a4);
    v11 = 0x1.0000000000000p+0 - v10;
    if ((float)(a4 + a4) == 0x0.0p+0f) {
      v12 = 0x1.0000000000000p-10;
    }
    else {
      v28 = *a1;
      v32 = v8;
      v17 = exp2(v11 * -0x1.4000000000000p+3);
      v4 = v28;
      v8 = v32;
      v12 = v17;
    }
    if (v9 == 0x1.0000000000000p+0f) {
      v18 = 0x1.0000000000000p-10;
    }
    else {
      v30 = v4;
      v34 = v8;
      v18 = exp2(v10 * -0x1.4000000000000p+3);
      v4 = v30;
      v8 = v34;
    }
    v21 = vsubq_f32(v8, v4);
    v22 = v18 - v10 * 0x1.0000000000000p-10;
    v23 = v12 - v11 * 0x1.0000000000000p-10;
    v24 = vaddq_f32(vmulq_n_f32(v21, v23),
                    vmulq_n_f32(vsubq_f32(v4, v4),
                                (float)(0x1.0000000000000p+0f - v22) - v23));
  }
  *a3 = v24;
}

#pragma GCC visibility pop
