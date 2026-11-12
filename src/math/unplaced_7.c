#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void math_620ce0(PSEUDO_X8 x8_, float32x4_t* result,
                                            float32x4_t* a2, float a4);
__attribute__((swiftcall)) void math_620ea0(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float32x4_t* a3,
                                            float a5);
__attribute__((swiftcall)) void math_620f80(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float a4,
                                            float a5);
__attribute__((swiftcall)) void math_6216d0(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float a4);
__attribute__((swiftcall)) void math_6218c0(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float32x4_t* a3,
                                            float a5);

__attribute__((swiftcall)) void math_620ce0(PSEUDO_X8 x8_, float32x4_t* result,
                                            float32x4_t* a2, float a4)
{
  float32x4_t* a3 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  float32x4_t v4;
  float32x4_t v5;
  double v6;
  float v7;
  float32x4_t v8;
  double v9;
  float v10;
  float32x4_t v11;

  LANES128(v4).n128_u64[0] = 0x3F0000003F000000LL;
  LANES128(v4).n128_u64[1] = 0x3F0000003F000000LL;
  v5 = vaddq_f32(vmulq_f32(*result, v4), vmulq_f32(*a2, v4));
  if (a4 >= 0x1.0000000000000p-1f) {
    v9 = (float)((float)(a4 + -0x1.0000000000000p-1f) +
                 (float)(a4 + -0x1.0000000000000p-1f));
    v10 = sqrt(0x1.0000000000000p+0 - v9 * v9);
    v11 = vsubq_f32(*a2, v5);
    *(float*)&v9 =
        sqrt(0x1.0000000000000p+0 -
             (v9 + -0x1.0000000000000p+0) * (v9 + -0x1.0000000000000p+0));
    v8 = vaddq_f32(v5,
                   vsubq_f32(vmulq_n_f32(v11, (float)(v10 + *(float*)&v9) +
                                                  -0x1.0000000000000p+0f),
                             vmulq_n_f32(v11, v10 + -0x1.0000000000000p+0f)));
  }
  else {
    v6 = (float)(a4 + a4);
    v7 = sqrt(0x1.0000000000000p+0 - v6 * v6);
    *(float*)&v6 =
        sqrt(0x1.0000000000000p+0 -
             (v6 + -0x1.0000000000000p+0) * (v6 + -0x1.0000000000000p+0));
    v8 = vsubq_f32(
        vmulq_n_f32(vsubq_f32(*result, *result),
                    (float)(v7 + *(float*)&v6) + -0x1.0000000000000p+0f),
        vmulq_n_f32(vsubq_f32(v5, *result), v7 + -0x1.0000000000000p+0f));
  }
  *a3 = v8;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_620ea0(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float32x4_t* a3,
                                            float a5)
{
  float32x4_t* a4 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  double v5;
  float v6;
  float32x4_t result;

  v5 = a5;
  v6 = sqrt(0x1.0000000000000p+0 - v5 * v5);
  *(float*)&v5 = sqrt(0x1.0000000000000p+0 - (v5 + -0x1.0000000000000p+0) *
                                                 (v5 + -0x1.0000000000000p+0));
  result =
      vsubq_f32(vmulq_n_f32(vsubq_f32(*a3, *a1), (float)(v6 + *(float*)&v5) +
                                                     -0x1.0000000000000p+0f),
                vmulq_n_f32(vsubq_f32(*a2, *a1), v6 + -0x1.0000000000000p+0f));
  *a4 = result;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_620f80(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float a4, float a5)
{
  float32x4_t* a3 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  float32x4_t v5;
  float32x4_t v6;
  float v7;
  float32x4_t result;
  float32x4_t v9;
  float v10;

  LANES128(v5).n128_u64[0] = 0x3F0000003F000000LL;
  LANES128(v5).n128_u64[1] = 0x3F0000003F000000LL;
  v6 = vaddq_f32(vmulq_f32(*a1, v5), vmulq_f32(*a2, v5));
  if (a4 >= 0x1.0000000000000p-1f) {
    v9 = vsubq_f32(*a2, v6);
    v10 = (float)(a4 + -0x1.0000000000000p-1f) +
          (float)(a4 + -0x1.0000000000000p-1f);
    result = vaddq_f32(
        v6,
        vmulq_n_f32(
            vaddq_f32(
                vmulq_n_f32(
                    v9,
                    v10 *
                        (float)(v10 +
                                (float)(a5 * (float)(v10 +
                                                     -0x1.0000000000000p+0f)))),
                vmulq_n_f32(
                    v9, (float)((float)(PSEUDO_UNFUSED(
                                    v10 * -0x1.8000000000000p+1f)) +
                                (float)(a5 *
                                        (float)(0x1.0000000000000p+0f - v10))) +
                            0x1.8000000000000p+1f)),
            v10));
  }
  else {
    v7 = a4 + a4;
    result = vmulq_n_f32(
        vaddq_f32(
            vmulq_n_f32(
                vsubq_f32(*a1, *a1),
                (float)((float)(PSEUDO_UNFUSED(v7 * -0x1.8000000000000p+1f)) +
                        (float)(a5 * (float)(0x1.0000000000000p+0f - v7))) +
                    0x1.8000000000000p+1f),
            vmulq_n_f32(
                vsubq_f32(v6, *a1),
                v7 * (float)(v7 +
                             (float)(a5 *
                                     (float)(v7 + -0x1.0000000000000p+0f))))),
        v7);
  }
  *a3 = result;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_6216d0(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float a4)
{
  float32x4_t* a3 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  float32x4_t v4;
  float32x4_t v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float32x4_t result;
  float v12;

  LANES128(v4).n128_u64[0] = 0x3F0000003F000000LL;
  LANES128(v4).n128_u64[1] = 0x3F0000003F000000LL;
  v5 = vaddq_f32(vmulq_f32(*a1, v4), vmulq_f32(*a2, v4));
  if (a4 >= 0x1.0000000000000p-1f) {
    v8 = (float)(a4 + -0x1.0000000000000p-1f) +
         (float)(a4 + -0x1.0000000000000p-1f);
    if (v8 >= 0x1.745d180000000p-2f) {
      v12 = (float)((float)((float)(v8 + -0x1.e8ba2e0000000p-1f) *
                            0x1.e400000000000p+2f) *
                    (float)(v8 + -0x1.e8ba2e0000000p-1f)) +
            0x1.f800000000000p-1f;
      if (v8 < 0x1.d1745e0000000p-1f) {
        v12 = (float)((float)((float)(v8 + -0x1.a2e8ba0000000p-1f) *
                              0x1.e400000000000p+2f) *
                      (float)(v8 + -0x1.a2e8ba0000000p-1f)) +
              0x1.e000000000000p-1f;
      }
      if (v8 < 0x1.745d180000000p-1f) {
        v9 = (float)((float)((float)(v8 + -0x1.1745d20000000p-1f) *
                             0x1.e400000000000p+2f) *
                     (float)(v8 + -0x1.1745d20000000p-1f)) +
             0x1.8000000000000p-1f;
      }
      else {
        v9 = v12;
      }
    }
    else {
      v9 = v8 * (float)(v8 * 0x1.e400000000000p+2f);
    }
    result = vaddq_f32(v5, vmulq_n_f32(vsubq_f32(*a2, v5), v9));
    *a3 = result;
  }
  else {
    v6 = 0x1.0000000000000p+0f - (float)(a4 + a4);
    if (v6 >= 0x1.745d180000000p-2f) {
      v10 = (float)((float)((float)(v6 + -0x1.e8ba2e0000000p-1f) *
                            0x1.e400000000000p+2f) *
                    (float)(v6 + -0x1.e8ba2e0000000p-1f)) +
            0x1.f800000000000p-1f;
      if (v6 < 0x1.d1745e0000000p-1f) {
        v10 = (float)((float)((float)(v6 + -0x1.a2e8ba0000000p-1f) *
                              0x1.e400000000000p+2f) *
                      (float)(v6 + -0x1.a2e8ba0000000p-1f)) +
              0x1.e000000000000p-1f;
      }
      if (v6 < 0x1.745d180000000p-1f) {
        v7 = (float)((float)((float)(v6 + -0x1.1745d20000000p-1f) *
                             0x1.e400000000000p+2f) *
                     (float)(v6 + -0x1.1745d20000000p-1f)) +
             0x1.8000000000000p-1f;
      }
      else {
        v7 = v10;
      }
    }
    else {
      v7 = v6 * (float)(v6 * 0x1.e400000000000p+2f);
    }
    result = vmulq_n_f32(vsubq_f32(v5, *a1), 0x1.0000000000000p+0f - v7);
    *a3 = result;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_6218c0(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float32x4_t* a3,
                                            float a5)
{
  float32x4_t* a4 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  float v5;
  float v6;
  float v7;
  float v8;
  bool v9;
  float v10;
  float32x4_t result;

  if (a5 >= 0x1.745d180000000p-2f) {
    v6 = (float)((float)((float)(a5 + -0x1.e8ba2e0000000p-1f) *
                         0x1.e400000000000p+2f) *
                 (float)(a5 + -0x1.e8ba2e0000000p-1f)) +
         0x1.f800000000000p-1f;
    if (a5 < 0x1.d1745e0000000p-1f) {
      v6 = (float)((float)((float)(a5 + -0x1.a2e8ba0000000p-1f) *
                           0x1.e400000000000p+2f) *
                   (float)(a5 + -0x1.a2e8ba0000000p-1f)) +
           0x1.e000000000000p-1f;
    }
    if (a5 < 0x1.745d180000000p-1f) {
      v5 = (float)((float)((float)(a5 + -0x1.1745d20000000p-1f) *
                           0x1.e400000000000p+2f) *
                   (float)(a5 + -0x1.1745d20000000p-1f)) +
           0x1.8000000000000p-1f;
    }
    else {
      v5 = v6;
    }
  }
  else {
    v5 = a5 * (float)(a5 * 0x1.e400000000000p+2f);
  }
  v7 = 0x1.0000000000000p+0f - a5;
  if (v7 >= 0x1.745d180000000p-2f) {
    if (v7 >= 0x1.745d180000000p-1f) {
      v9 = v7 < 0x1.d1745e0000000p-1f;
      v10 = (float)((float)((float)(v7 + -0x1.e8ba2e0000000p-1f) *
                            0x1.e400000000000p+2f) *
                    (float)(v7 + -0x1.e8ba2e0000000p-1f)) +
            0x1.f800000000000p-1f;
      v8 = (float)((float)((float)(v7 + -0x1.a2e8ba0000000p-1f) *
                           0x1.e400000000000p+2f) *
                   (float)(v7 + -0x1.a2e8ba0000000p-1f)) +
           0x1.e000000000000p-1f;
      if (!v9) {
        v8 = v10;
      }
    }
    else {
      v8 = (float)((float)((float)(v7 + -0x1.1745d20000000p-1f) *
                           0x1.e400000000000p+2f) *
                   (float)(v7 + -0x1.1745d20000000p-1f)) +
           0x1.8000000000000p-1f;
    }
  }
  else {
    v8 = v7 * (float)(v7 * 0x1.e400000000000p+2f);
  }
  result =
      vaddq_f32(vmulq_n_f32(vsubq_f32(*a2, *a1), 0x1.0000000000000p+0f - v8),
                vmulq_n_f32(vsubq_f32(*a3, *a1),
                            v5 - (float)(0x1.0000000000000p+0f - v8)));
  *a4 = result;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
