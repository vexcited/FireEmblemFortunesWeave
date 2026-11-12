#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 cos_plt(void* this_, double);
__int64 sin_plt(void* this_, double);
double __rem_pio2f(double*, float);
double sqrt_plt(double);
extern _UNKNOWN SdkData_bb1ea0;
extern _UNKNOWN SdkData_bb2e30;
extern _UNKNOWN SdkData_cdaa20;
extern _UNKNOWN SdkData_cdaa38;
extern _UNKNOWN SdkData_cdaa4c;
extern _UNKNOWN SdkData_cdaa64;
extern _UNKNOWN SdkData_cdaa78;
extern _UNKNOWN SdkData_cdaa90;
extern _UNKNOWN SdkData_cdaaa4;
extern _UNKNOWN SdkData_cdaabc;
extern _UNKNOWN SdkData_cdaad0;
extern _UNKNOWN SdkData_cdaae8;
extern _UNKNOWN SdkData_cdab00;
extern _UNKNOWN SdkData_cdab18;
extern _UNKNOWN SdkData_cdab30;
extern _UNKNOWN SdkData_cdab48;
extern _UNKNOWN SdkData_cdab60;
extern _UNKNOWN SdkData_cdab78;
extern _UNKNOWN SdkData_cdab90;
extern _UNKNOWN SdkData_cdabc0;
extern _UNKNOWN SdkData_cdabe8;
extern _UNKNOWN SdkData_cdac18;
extern _UNKNOWN SdkData_cdac40;
extern _UNKNOWN SdkData_cdac70;
extern _UNKNOWN SdkData_cdac98;
extern _UNKNOWN SdkData_cdacc8;
extern _UNKNOWN SdkData_cdacf0;
extern _UNKNOWN SdkData_cdad20;
extern _UNKNOWN SdkData_cdad50;
extern _UNKNOWN SdkData_cdad80;
extern _UNKNOWN SdkData_cdadb0;
extern _UNKNOWN SdkData_cdade0;
extern _UNKNOWN SdkData_cdae10;
extern _UNKNOWN SdkData_cdae40;
extern _UNKNOWN SdkData_cdae70;
extern _UNKNOWN SdkData_cdae88;
extern _UNKNOWN SdkData_cdae9c;
extern _UNKNOWN SdkData_cdaeb4;
extern _UNKNOWN SdkData_cdaec8;
extern _UNKNOWN SdkData_cdaee0;
extern _UNKNOWN SdkData_cdaef4;
extern _UNKNOWN SdkData_cdaf0c;
extern _UNKNOWN SdkData_cdaf20;
extern _UNKNOWN SdkData_cdaf38;
extern _UNKNOWN SdkData_cdaf50;
extern _UNKNOWN SdkData_cdaf68;
extern _UNKNOWN SdkData_cdaf80;
extern _UNKNOWN SdkData_cdaf98;
extern _UNKNOWN SdkData_cdafb0;
extern _UNKNOWN SdkData_cdafc8;
float __cosdf(double);
float __nnmusl_fsubf(float, float);
float __sindf(double);
float cosf_plt(float);
float sinf_plt(float);
float sqrtf_plt(float);
float musl_src_math_7ac150(unsigned int a1, int a2, float a3);
double musl_src_math_7ac7a0(void* a1, int a2, int a3, double a4);
float musl_src_math_7acd10(unsigned int a1, int a2, int a3, float a4);

float musl_src_math_7ac150(unsigned int a1, int a2, float a3)
{
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float* v13;
  float v14;
  float v15;
  float* v16;
  float* v17;
  float* v18;
  float* v19;
  float* v20;
  float* v21;
  unsigned int v22;
  float* v23;
  float* v24;
  float* v25;

  v6 = sinf_plt(a3);
  v7 = cosf_plt(a3);
  if (a2 != 0) {
    v8 = -v7;
  }
  else {
    v8 = v7;
  }
  v9 = v6 + v8;
  if (HIBYTE(a1) <= 0x7Eu) {
    v10 = -cosf_plt(a3 + a3);
    if ((float)(v6 * v8) >= 0x0.0p+0f) {
      v11 = v10 / v9;
      if (a1 >> 23 > 0xB0) {
        return (float)(v9 * 0x1.20dd760000000p-1f) / sqrtf_plt(a3);
      }
    }
    else {
      v11 = v6 - v8;
      v9 = v10 / (float)(v6 - v8);
      if (a1 >> 23 > 0xB0) {
        return (float)(v9 * 0x1.20dd760000000p-1f) / sqrtf_plt(a3);
      }
    }
    v12 = -v11;
    v13 = (float*)&SdkData_cdaabc;
    if (a2 == 0) {
      v12 = v11;
    }
    v14 = fabs(a3);
    if (fabs(a3) > 0x1.6db22c0000000p+1f) {
      v13 = (float*)&SdkData_cdaa90;
    }
    v16 = (float*)&SdkData_cdaaa4;
    v17 = (float*)&SdkData_cdaa4c;
    v18 = (float*)&SdkData_cdaa64;
    if (LODWORD(v14) > 0x4036D916) {
      v16 = (float*)&SdkData_cdaa78;
    }
    v19 = (float*)&SdkData_cdaa20;
    if (LODWORD(v14) <= 0x409173EA) {
      v18 = v13;
      v17 = v16;
    }
    v20 = (float*)&SdkData_cdab78;
    if ((HIBYTE(LODWORD(a3)) & 0x7Fu) > 0x40) {
      v21 = (float*)&SdkData_cdaa38;
    }
    else {
      v19 = v17;
      v21 = v18;
    }
    v22 = HIBYTE(LODWORD(v14));
    if (LODWORD(v14) <= 0x4036D916) {
      v23 = (float*)&SdkData_cdab60;
    }
    else {
      v20 = (float*)&SdkData_cdab48;
      v23 = (float*)&SdkData_cdab30;
    }
    if (LODWORD(v14) <= 0x409173EA) {
      v24 = v20;
    }
    else {
      v24 = (float*)&SdkData_cdab18;
    }
    if (LODWORD(v14) <= 0x409173EA) {
      v25 = v23;
    }
    else {
      v25 = (float*)&SdkData_cdab00;
    }
    if (v22 > 0x40) {
      v24 = (float*)&SdkData_cdaae8;
      v25 = (float*)&SdkData_cdaad0;
    }
    v15 = 0x1.0000000000000p+0f / (float)(a3 * a3);
    v9 =
        __nnmusl_fsubf(v9 * (float)((
                                        float)((float)(*v19 +
                                                       (float)(v15 * (float)(v19[1] + (float)(v15 * (float)(v19[2] + (float)(v15 * (float)(v19[3] + (float)(v15 * (float)(v19[4] + (float)(v15 * v19[5])))))))))) /
                                               (float)((
                                                           float)(v15 * (float)(*v21 + (float)(v15 * (float)(v21[1] + (float)(v15 *
                                                                                                                              (float)(v21[2] + (float)(v15 * (float)(v21[3] + (float)(v15 * v21[4]))))))))) +
                                                       0x1.0000000000000p+0f)) +
                                    0x1.0000000000000p+0f),
                       v12 *
                           (float)((
                                       float)((
                                                  float)((float)(*v25 +
                                                                 (float)(v15 * (float)(v25[1] +
                                                                                       (float)(v15 * (float)(v25[2] + (float)(v15 * (float)(v25[3] + (float)(v15 * (float)(v25[4] + (float)(v15 * v25[5])))))))))) /
                                                         (float)((float)(v15 *
                                                                         (float)(*v24 + (float)(v15 * (float)(v24[1] + (float)(v15 * (float)(v24[2] + (float)(v15 * (float)(v24[3] + (float)(v15 * (float)(v24[4] + (float)(v15 * v24[5]))))))))))) +
                                                                 0x1.0000000000000p+0f)) +
                                              -0x1.0000000000000p-3f) /
                                   a3));
  }
  return (float)(v9 * 0x1.20dd760000000p-1f) / sqrtf_plt(a3);
}

double musl_src_math_7ac7a0(void* a1, int a2, int a3, double a4)
{
  unsigned int v7;
  void* v8;
  double v9;
  double v10;
  void* v11;
  double v12;
  double v13;
  double v14;
  double v15;
  double v16;
  double* v17;
  double v18;
  __int64 v19;
  double* v20;
  double* v21;
  double* v22;
  double* v23;
  unsigned int v24;
  double* v25;
  double* v26;
  double* v27;
  double* v28;
  double* v29;
  double v30;

  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(double, "d0", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d0", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(double, "d0", "=w"));
  v7 = (unsigned int)a1;
  v8 = (void*)sin_plt(a1, a4),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(double, "d0", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d0", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(double, "d0", "=w"));
  if (a2 != 0) {
    v10 = -v9;
  }
  else {
    v10 = v9;
  }
  v11 = (void*)cos_plt(v8, a4),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(double, "d0", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d0", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(double, "d0", "=w"));
  v13 = v10 - v12;
  if (v7 >> 21 <= 0x3FE) {
    v14 = v12;
    cos_plt(v11, a4 + a4),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(double, "d0", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d0", "=w")),
        v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(double, "d0", "=w"));
    if (v10 * v14 <= 0x0.0p+0) {
      v16 = v15 / v13;
      if (v7 >> 27 > 8) {
        goto LABEL_33;
      }
    }
    else {
      v16 = -v10 - v14;
      v13 = v15 / v16;
      if (v7 >> 27 > 8) {
        goto LABEL_33;
      }
    }
    v17 = (double*)&SdkData_cdacc8;
    v19 = HIDWORD(*(_QWORD*)&a4) & 0x7FFFFFFFLL;
    v20 = (double*)&SdkData_cdabe8;
    v21 = (double*)&SdkData_cdac18;
    v22 = (double*)&SdkData_cdab90;
    if ((unsigned int)v19 > 0x4006DB6C) {
      v17 = (double*)&SdkData_cdac70;
    }
    v23 = (double*)&SdkData_cdac98;
    if ((unsigned int)v19 > 0x4006DB6C) {
      v23 = (double*)&SdkData_cdac40;
    }
    if ((unsigned int)v19 <= 0x40122E8A) {
      v21 = v17;
      v20 = v23;
    }
    v24 = (unsigned int)v19 >> 21;
    if (((HIDWORD(a4) >> 21) & 0x3FF) > 0x200) {
      v25 = (double*)&SdkData_cdabc0;
    }
    else {
      v22 = v20;
      v25 = v21;
    }
    v26 = (double*)&SdkData_cdae40;
    if ((unsigned int)v19 > 0x4006DB6C) {
      v26 = (double*)&SdkData_cdade0;
    }
    v27 = (double*)&SdkData_cdae10;
    if ((unsigned int)v19 > 0x4006DB6C) {
      v27 = (double*)&SdkData_cdadb0;
    }
    if ((unsigned int)v19 <= 0x40122E8A) {
      v28 = v26;
    }
    else {
      v28 = (double*)&SdkData_cdad80;
    }
    if ((unsigned int)v19 <= 0x40122E8A) {
      v29 = v27;
    }
    else {
      v29 = (double*)&SdkData_cdad50;
    }
    if (v24 > 0x200) {
      v28 = (double*)&SdkData_cdad20;
      v29 = (double*)&SdkData_cdacf0;
    }
    if (a2 == 0) {
      v16 = -v16;
    }
    v18 = 0x1.0000000000000p+0 / (a4 * a4);
    v13 =
        PSEUDO_UNFUSED(
            v16 *
            (((*v29 +
               v18 * (v29[1] +
                      v18 * (v29[2] +
                             v18 * (v29[3] + v18 * (v29[4] + v18 * v29[5]))))) /
                  (v18 * (*v28 + v18 * (v28[1] +
                                        v18 * (v28[2] +
                                               v18 * (v28[3] +
                                                      v18 * (v28[4] +
                                                             v18 * v28[5]))))) +
                   0x1.0000000000000p+0) +
              0x1.8000000000000p-2) /
             a4)) +
        ((*v22 +
          v18 * (v22[1] +
                 v18 * (v22[2] +
                        v18 * (v22[3] + v18 * (v22[4] + v18 * v22[5]))))) /
             (v18 * (*v25 +
                     v18 * (v25[1] +
                            v18 * (v25[2] + v18 * (v25[3] + v18 * v25[4])))) +
              0x1.0000000000000p+0) +
         0x1.0000000000000p+0) *
            v13;
  }
LABEL_33:
  v30 = -v13;
  if (a3 == 0) {
    v30 = v13;
  }
  return v30 * 0x1.20dd750429b6dp-1 / sqrt_plt(a4);
}

float musl_src_math_7acd10(unsigned int a1, int a2, int a3, float a4)
{
  double v8;
  float v9;
  double v10;
  float v11;
  double v12;
  __int64 v13;
  double v14;
  double v15;
  __int64 v16;
  char v17;
  double v18;
  double v19;
  double v20;
  double v21;
  float* v22;
  float v23;
  float* v24;
  unsigned int v25;
  float* v26;
  float* v27;
  float* v28;
  float* v29;
  float* v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float* v36;
  float* v37;
  float* v38;
  float* v39;
  float v40;
  float v41;
  double v42;
  double v44;

  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v8 = sinf_plt(a4),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v9 = fabs(a4);
  if (a2 != 0) {
    v10 = -v8;
  }
  else {
    v10 = v8;
  }
  if (LODWORD(v9) <= 0x3F490FDA) {
    if (LODWORD(v9) >> 23 > 0x72) {
      v11 = __cosdf(a4),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
    else {
      v11 = 0x1.0000000000000p+0f;
    }
    goto LABEL_34;
  }
  if (LODWORD(v9) <= 0x407B53D1) {
    v12 = a4;
    if (LODWORD(v9) >= 0x4016CBE4) {
      v13 = 8;
      if (a4 >= 0.0) {
        v13 = 0;
      }
      v14 = *(double*)((char*)&SdkData_bb2e30 + v13) + v12;
      goto LABEL_12;
    }
    if ((LODWORD(a4) & 0x80000000) != 0) {
      v14 = v12 + 0x1.921fb54442d18p+0;
    }
    else {
      v14 = 0x1.921fb54442d18p+0 - v12;
    }
    goto LABEL_33;
  }
  if (LODWORD(v9) > 0x40E231D5) {
    if ((LODWORD(a4) & 0x7FFFFFFFu) >> 23 == 255) {
      v11 = a4 - a4;
      goto LABEL_34;
    }
    __rem_pio2f(&v44, a4),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v14 = v44;
    if ((v17 & 3u) > 1) {
      if ((v17 & 3) == 2) {
      LABEL_12:
        v11 = -__cosdf(v14),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        goto LABEL_34;
      }
    }
    else {
      if ((v17 & 3) == 0) {
        v11 = __cosdf(v44),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        goto LABEL_34;
      }
      v14 = -v44;
    }
  LABEL_33:
    v11 = __sindf(v14),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    goto LABEL_34;
  }
  v15 = a4;
  if (LODWORD(v9) < 0x40AFEDE0) {
    if ((LODWORD(a4) & 0x80000000) != 0) {
      v14 = -0x1.2d97c7f3321d2p+2 - v15;
    }
    else {
      v14 = v15 + -0x1.2d97c7f3321d2p+2;
    }
    goto LABEL_33;
  }
  v16 = 8;
  if (a4 >= 0.0) {
    v16 = 0;
  }
  v11 = __cosdf(*(double*)((char*)&SdkData_bb1ea0 + v16) + v15),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
LABEL_34:
  v18 = v11;
  v19 = v10 - v11;
  if (HIBYTE(a1) > 0x7Eu) {
    goto LABEL_65;
  }
  v20 = cosf_plt(a4 + a4),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v10 * v18 <= 0x0.0p+0) {
    v21 = v20 / v19;
    if (a1 >> 23 > 0xB0) {
      goto LABEL_65;
    }
  }
  else {
    v21 = -v10 - v18;
    v19 = v20 / v21;
    if (a1 >> 23 > 0xB0) {
      goto LABEL_65;
    }
  }
  v22 = (float*)&SdkData_cdaf0c;
  if (a2 != 0) {
    v21 = -v21;
  }
  v23 = 0x1.0000000000000p+0f / (float)(a4 * a4);
  if (LODWORD(v9) > 0x4036D916) {
    v22 = (float*)&SdkData_cdaee0;
  }
  v24 = (float*)&SdkData_cdaef4;
  v25 = HIBYTE(LODWORD(v9));
  v26 = (float*)&SdkData_cdae9c;
  v27 = (float*)&SdkData_cdaeb4;
  if (LODWORD(v9) > 0x4036D916) {
    v24 = (float*)&SdkData_cdaec8;
  }
  v28 = (float*)&SdkData_cdae70;
  v29 = (float*)&SdkData_cdae88;
  if (LODWORD(v9) <= 0x409173EA) {
    v27 = v22;
    v26 = v24;
  }
  v30 = (float*)&SdkData_cdafc8;
  if (v25 <= 0x40) {
    v28 = v26;
  }
  v31 = v28[2];
  v32 = v28[3];
  v33 = *v28;
  v34 = v28[1];
  v35 = v28[4] + (float)(v23 * v28[5]);
  if (v25 <= 0x40) {
    v29 = v27;
  }
  if (LODWORD(v9) > 0x4036D916) {
    v30 = (float*)&SdkData_cdaf98;
  }
  v36 = (float*)&SdkData_cdafb0;
  v37 = (float*)&SdkData_cdaf50;
  if (LODWORD(v9) > 0x4036D916) {
    v36 = (float*)&SdkData_cdaf80;
  }
  v38 = (float*)&SdkData_cdaf20;
  if (LODWORD(v9) <= 0x409173EA) {
    v39 = v30;
  }
  else {
    v39 = (float*)&SdkData_cdaf68;
  }
  if (LODWORD(v9) <= 0x409173EA) {
    v37 = v36;
  }
  v40 = v32 + (float)(v23 * v35);
  if (v25 <= 0x40) {
    v38 = v37;
  }
  v41 =
      v33 +
      (float)(v23 *
              (float)(v34 + (float)(v23 * (float)(v31 + (float)(v23 * v40)))));
  if (v25 > 0x40) {
    v39 = (float*)&SdkData_cdaf38;
  }
  v19 = (float)((float)(v41 / (float)((float)(v23 * (float)(*v29 + (float)(v23 * (float)(v29[1] + (float)(v23 * (float)(v29[2] + (float)(v23 * (float)(v29[3] + (float)(v23 * v29[4]))))))))) + 0x1.0000000000000p+0f)) + 0x1.0000000000000p+0f) * v19 - PSEUDO_UNFUSED(
                                                                                                                                                                                                                                                             (float)((
                                                                                                                                                                                                                                                                         float)((
                                                                                                                                                                                                                                                                                    float)((
                                                                                                                                                                                                                                                                                               float)(*v38 + (float)(v23 * (float)(v38[1] + (float)(v23 *
                                                                                                                                                                                                                                                                                                                                                    (float)(v38[2] +
                                                                                                                                                                                                                                                                                                                                                            (float)(v23 * (float)(v38[3] +
                                                                                                                                                                                                                                                                                                                                                                                  (float)(v23 *
                                                                                                                                                                                                                                                                                                                                                                                          (float)(v38[4] + (float)(v23 * v38[5])))))))))) /
                                                                                                                                                                                                                                                                                           (float)((
                                                                                                                                                                                                                                                                                                       float)(v23 *
                                                                                                                                                                                                                                                                                                              (float)(*v39 +
                                                                                                                                                                                                                                                                                                                      (float)(v23 * (float)(v39[1] + (float)(v23 *
                                                                                                                                                                                                                                                                                                                                                             (float)(v39[2] +
                                                                                                                                                                                                                                                                                                                                                                     (float)(v23 *
                                                                                                                                                                                                                                                                                                                                                                             (float)(v39[3] + (float)(v23 * (float)(v39[4] + (float)(v23 * v39[5]))))))))))) +
                                                                                                                                                                                                                                                                                                   0x1.0000000000000p+0f)) +
                                                                                                                                                                                                                                                                                0x1.8000000000000p-2f) /
                                                                                                                                                                                                                                                                     a4) *
                                                                                                                                                                                                                                                             v21);
LABEL_65:
  v42 = -v19;
  if (a3 == 0) {
    v42 = v19;
  }
  return v42 * 0x1.20dd760000000p-1 / sqrtf_plt(a4);
}

#pragma GCC visibility pop
