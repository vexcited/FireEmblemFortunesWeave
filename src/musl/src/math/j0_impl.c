#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 cos_plt(void* this_, double);
__int64 sin_plt(void* this_, double);
double sqrt_plt(double);
extern _UNKNOWN SdkData_cda740;
extern _UNKNOWN SdkData_cda770;
extern _UNKNOWN SdkData_cda798;
extern _UNKNOWN SdkData_cda7c8;
extern _UNKNOWN SdkData_cda7f0;
extern _UNKNOWN SdkData_cda820;
extern _UNKNOWN SdkData_cda848;
extern _UNKNOWN SdkData_cda878;
extern _UNKNOWN SdkData_cda8a0;
extern _UNKNOWN SdkData_cda8d0;
extern _UNKNOWN SdkData_cda900;
extern _UNKNOWN SdkData_cda930;
extern _UNKNOWN SdkData_cda960;
extern _UNKNOWN SdkData_cda990;
extern _UNKNOWN SdkData_cda9c0;
extern _UNKNOWN SdkData_cda9f0;
double common(void* a1, int a2, double a3);

double common(void* a1, int a2, double a3)
{
  unsigned int v5;
  void* v6;
  double v7;
  double v8;
  void* v9;
  double v10;
  double v11;
  double v12;
  double v13;
  double v14;
  double v15;
  double* v16;
  double v17;
  __int64 v18;
  double* v19;
  double* v20;
  double* v21;
  double* v22;
  unsigned int v23;
  double* v24;
  double* v25;
  double* v26;
  double* v27;
  double* v28;

  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(double, "d0", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(double, "d0", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(double, "d0", "=w"));
  v5 = (unsigned int)a1;
  v6 = (void*)sin_plt(a1, a3),
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(double, "d0", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(double, "d0", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(double, "d0", "=w"));
  v8 = v7;
  v9 = (void*)cos_plt(v6, a3),
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(double, "d0", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(double, "d0", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(double, "d0", "=w"));
  if (a2 != 0) {
    v11 = -v10;
  }
  else {
    v11 = v10;
  }
  v12 = v8 + v11;
  if (v5 >> 21 <= 0x3FE) {
    cos_plt(v9, a3 + a3),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(double, "d0", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(double, "d0", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(double, "d0", "=w"));
    v14 = -v13;
    if (v8 * v11 >= 0x0.0p+0) {
      v15 = v14 / v12;
      if (v5 >> 27 > 8) {
        return v12 * 0x1.20dd750429b6dp-1 / sqrt_plt(a3);
      }
    }
    else {
      v15 = v8 - v11;
      v12 = v14 / (v8 - v11);
      if (v5 >> 27 > 8) {
        return v12 * 0x1.20dd750429b6dp-1 / sqrt_plt(a3);
      }
    }
    v16 = (double*)&SdkData_cda878;
    v18 = HIDWORD(*(_QWORD*)&a3) & 0x7FFFFFFFLL;
    v19 = (double*)&SdkData_cda798;
    v20 = (double*)&SdkData_cda7c8;
    v21 = (double*)&SdkData_cda740;
    if ((unsigned int)v18 > 0x4006DB6C) {
      v16 = (double*)&SdkData_cda820;
    }
    v22 = (double*)&SdkData_cda848;
    if ((unsigned int)v18 > 0x4006DB6C) {
      v22 = (double*)&SdkData_cda7f0;
    }
    if ((unsigned int)v18 <= 0x40122E8A) {
      v20 = v16;
      v19 = v22;
    }
    v23 = (unsigned int)v18 >> 21;
    if (((HIDWORD(a3) >> 21) & 0x3FF) > 0x200) {
      v24 = (double*)&SdkData_cda770;
    }
    else {
      v21 = v19;
      v24 = v20;
    }
    v25 = (double*)&SdkData_cda9f0;
    if ((unsigned int)v18 > 0x4006DB6C) {
      v25 = (double*)&SdkData_cda990;
    }
    v26 = (double*)&SdkData_cda9c0;
    if ((unsigned int)v18 > 0x4006DB6C) {
      v26 = (double*)&SdkData_cda960;
    }
    if ((unsigned int)v18 <= 0x40122E8A) {
      v27 = v25;
    }
    else {
      v27 = (double*)&SdkData_cda930;
    }
    if ((unsigned int)v18 <= 0x40122E8A) {
      v28 = v26;
    }
    else {
      v28 = (double*)&SdkData_cda900;
    }
    if (v23 > 0x200) {
      v27 = (double*)&SdkData_cda8d0;
      v28 = (double*)&SdkData_cda8a0;
    }
    if (a2 == 0) {
      v15 = -v15;
    }
    v17 = 0x1.0000000000000p+0 / (a3 * a3);
    v12 =
        PSEUDO_UNFUSED(
            v15 *
            (((*v28 +
               v17 * (v28[1] +
                      v17 * (v28[2] +
                             v17 * (v28[3] + v17 * (v28[4] + v17 * v28[5]))))) /
                  (v17 * (*v27 + v17 * (v27[1] +
                                        v17 * (v27[2] +
                                               v17 * (v27[3] +
                                                      v17 * (v27[4] +
                                                             v17 * v27[5]))))) +
                   0x1.0000000000000p+0) +
              -0x1.0000000000000p-3) /
             a3)) +
        ((*v21 +
          v17 * (v21[1] +
                 v17 * (v21[2] +
                        v17 * (v21[3] + v17 * (v21[4] + v17 * v21[5]))))) /
             (v17 * (*v24 +
                     v17 * (v24[1] +
                            v17 * (v24[2] + v17 * (v24[3] + v17 * v24[4])))) +
              0x1.0000000000000p+0) +
         0x1.0000000000000p+0) *
            v12;
  }
  return v12 * 0x1.20dd750429b6dp-1 / sqrt_plt(a3);
}

#pragma GCC visibility pop
