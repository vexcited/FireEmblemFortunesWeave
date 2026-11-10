#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

extern void (*SdkData_e891f8[21])();
float cosf_plt(float);
float sinf_plt(float);
float cos_fitting_ComputeSumAndDerivativesLenSqAndDerivativesForPeriod_float(
    float* a1, float* a2, __int64 a3, unsigned __int64 a4, float a5);

float cos_fitting_ComputeSumAndDerivativesLenSqAndDerivativesForPeriod_float(
    float* a1, float* a2, __int64 a3, unsigned __int64 a4, float a5)
{
  float v10;
  float v11;
  float v12;
  float v13;
  unsigned __int64 v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float result;

  v10 = *(float*)SdkData_e891f8[0] + *(float*)SdkData_e891f8[0];
  v11 = v10 / a5;
  v12 = cosf_plt(v10 / a5);
  v13 = sinf_plt(v11);
  if (a4 != 0) {
    v14 = 0;
    v15 = (float)-v10 / (float)(a5 * a5);
    v16 = 0x1.0000000000000p+0f;
    v17 = 0x0.0p+0f;
    v18 = 0x0.0p+0f;
    v19 = 0x0.0p+0f;
    v20 = 0x0.0p+0f;
    v21 = 0x0.0p+0f;
    v22 = (float)(v10 * 0x1.0000000000000p-1f) / (float)(a5 * (float)(a5 * a5));
    v23 = 0x0.0p+0f;
    v24 = 0x0.0p+0f;
    do {
      v26 = *(float*)(a3 + 4 * v14);
      if (v26 != 0x0.0p+0f) {
        v27 = (float)(PSEUDO_UNFUSED(v21 * 0x0.0p+0f)) +
              (float)((float)v14 * v16);
        v28 = (float)(v15 * v15) * (float)v14;
        v29 = (float)(v16 * 0x0.0p+0f) -
              (float)(PSEUDO_UNFUSED(v21 * (float)v14));
        v18 = v18 + (float)(PSEUDO_UNFUSED(v16 * v26));
        v17 = v17 + (float)(PSEUDO_UNFUSED(v21 * v26));
        v20 = v20 + (float)(PSEUDO_UNFUSED((float)(v15 * v29) * v26));
        v19 = v19 + (float)(PSEUDO_UNFUSED((float)(v15 * v27) * v26));
        v24 =
            v24 +
            (float)(PSEUDO_UNFUSED((float)((float)(v22 * v29) -
                                           (float)(PSEUDO_UNFUSED(v27 * v28))) *
                                   v26));
        v23 =
            v23 +
            (float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED(v22 * v27)) +
                                           (float)(v28 * v29)) *
                                   v26));
      }
      v25 = v13 * v16;
      ++v14;
      v16 = (float)(PSEUDO_UNFUSED(v21 * (float)-v13)) + (float)(v16 * v12);
      v21 = v25 + (float)(v21 * v12);
    } while (a4 != v14);
  }
  else {
    v24 = 0x0.0p+0f;
    v23 = 0x0.0p+0f;
    v20 = 0x0.0p+0f;
    v19 = 0x0.0p+0f;
    v18 = 0x0.0p+0f;
    v17 = 0x0.0p+0f;
  }
  v30 = 0x1.0000000000000p+0f / (float)a4;
  v31 = v30 * v18;
  v32 = v30 * v17;
  v33 = v30 * v20;
  v34 = v30 * v19;
  v35 = v30 * v24;
  v36 = v30 * v23;
  a1[4] = v35;
  a1[5] = v36;
  *a1 = v31;
  a1[1] = v32;
  a1[2] = v33;
  a1[3] = v34;
  *a2 = (float)(PSEUDO_UNFUSED(v31 * v31)) + (float)(v32 * v32);
  a2[1] = (float)((float)(PSEUDO_UNFUSED(v33 * v31)) + (float)(v32 * v34)) +
          (float)((float)(PSEUDO_UNFUSED(v33 * v31)) + (float)(v32 * v34));
  result =
      (float)((float)((float)(PSEUDO_UNFUSED(v33 * v33)) + (float)(v34 * v34)) +
              (float)((float)(PSEUDO_UNFUSED(v35 * v31)) +
                      (float)(v32 * v36))) +
      (float)((float)((float)(PSEUDO_UNFUSED(v33 * v33)) + (float)(v34 * v34)) +
              (float)((float)(PSEUDO_UNFUSED(v35 * v31)) + (float)(v32 * v36)));
  a2[2] = result;
  return result;
}

#pragma GCC visibility pop
