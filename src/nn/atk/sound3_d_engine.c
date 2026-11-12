#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 Sound3DEngine_277510(__int64 a1, __int64 a2, __int64 a3,
                             unsigned int a4, __int64 a5);
__int64 Sound3DEngine_277550(__int64* a1, __int64 a2, __int64 a3,
                             unsigned int a4);
__int64 Sound3DEngine_2776b0_alt1(__int64, __int64, __int64, float32x4_t*,
                                  float32x2_t*,
                                  float*) __asm__("Sound3DEngine_2776b0");
float* GameRoutine_277830(float* result, float, __int64, float*);
float GameRoutine_2775e0(float*, _DWORD*, __int64, __int64, __int64, float);
float atan2f(void);
float cosf(float);
void Sound3DEngine_Unknown4(__int64 a1, float* a2, __int64 a3, float32x4_t* a4,
                            __int64 a5, char a6);
float Sound3DEngine_2776b0(float* a1, float* a2, __int64 a3, float32x4_t* a4,
                           float32x2_t* a5, float* a6);
float* Sound3DEngine_277730(float* result, __int64 a2, float32x4_t* a3,
                            float32x4_t* a4, float32x4_t* a5, float a6);
float Sound3DEngine_277870(float32x4_t* a1, float* a2, float* a3, float a4,
                           float a5, float a6, float a7, float a8, float a9);
float atan2f_alt1(float, float) __asm__("atan2f");

void Sound3DEngine_Unknown4(__int64 a1, float* a2, __int64 a3, float32x4_t* a4,
                            __int64 a5, char a6)
{

#pragma clang fp contract(off)
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  int v13;
  __int64 v14;
  char v15;
  char v16;
  int v17;
  int8x16_t v18;
  float32x4_t* v19;
  float v20;
  int v21;
  bool v22;
  float v23;
  float v24;
  float v26;
  __int64 v27;
  float32x4_t v28;

  if ((a6 & 2) != 0) {
    *((_DWORD*)a2 + 5) = -*(_DWORD*)(a3 + 64);
    if ((a6 & 0x10) == 0) {
    LABEL_3:
      v9 = a3 + 40;
      if ((a6 & 1) == 0) {
        goto LABEL_4;
      }
    LABEL_8:
      a2[8] = 0x0.0p+0f;
      v10 = *(_QWORD*)(a3 + 48);
      if (v10 == v9) {
        return;
      }
      goto LABEL_9;
    }
  }
  else if ((a6 & 0x10) == 0) {
    goto LABEL_3;
  }
  a2[3] = 0x0.0p+0f;
  v9 = a3 + 40;
  if ((a6 & 1) != 0) {
    goto LABEL_8;
  }
LABEL_4:
  v10 = *(_QWORD*)(a3 + 48);
  if (v10 != v9) {
  LABEL_9:
    v11 = 1;
    v12 = v10;
    do {
      v12 = *(_QWORD*)(v12 + 8);
      --v11;
    } while (v12 != v9);
    v22 = v11 == 0;
    v13 = 0;
    v14 = v10;
    if (v22) {
      v15 = a6;
    }
    else {
      v15 = a6 & 0xDF;
    }
    do {
      v16 = *(_DWORD*)(v14 - 16);
      v14 = *(_QWORD*)(v14 + 8);
      v13 += v16 & 1;
    } while (v14 != v9);
    do {
      v17 = *(_DWORD*)(v10 - 16);
      v28 = (__typeof__(v28)){0};
      if ((v15 & 0x33) != 0) {
        v28 = vsubq_f32(*a4, *(float32x4_t*)(v10 - 72));
        v18 = vmulq_f32(v28, v28);
        LANES128(v18).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v18, v18, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
                .n64_u64[0];
        v19 = (float32x4_t*)(v10 - 136);
        LODWORD(v26) =
            LANES64_OF(vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]))))
                .n64_u32[0];
        if ((v15 & 3) == 0) {
          goto LABEL_29;
        }
      }
      else {
        v19 = (float32x4_t*)(v10 - 136);
        v26 = 0x0.0p+0f;
        if ((v15 & 3) == 0) {
          goto LABEL_29;
        }
      }
      v27 = 0;
      GameRoutine_2775e0((float*)&v27 + 1, &v27, a3, (__int64)v19, (__int64)a4,
                         v26);
      if ((v15 & 1 & (unsigned __int8)v17) != 0) {
        v20 = a2[8];
        if (*((float*)&v27 + 1) >= v20) {
          v20 = *((float*)&v27 + 1);
        }
        a2[8] = v20;
      }
      if ((v15 & 2) != 0) {
        v21 = *((_DWORD*)a2 + 5);
        if ((int)v27 > v21) {
          v21 = v27;
        }
        *((_DWORD*)a2 + 5) = v21;
      }
    LABEL_29:
      if ((v15 & 0xC) != 0) {
        v22 = (v17 & 1) != 0 && v13 == 1;
        if (v22) {
          v27 = 0;
          Sound3DEngine_2776b0_alt1((__int64)&v27 + 4, (__int64)&v27, a3, v19,
                                    (float32x2_t*)a4, (float*)(a1 + 8));
          if ((v15 & 4) != 0) {
            a2[9] = *((float*)&v27 + 1);
          }
          if ((v15 & 8) != 0) {
            *((_DWORD*)a2 + 10) = v27;
          }
        }
      }
      if ((v15 & 0x20) != 0) {
        HIDWORD(v27) = 0;
        Sound3DEngine_277730((float*)&v27 + 1, a3, v19, a4, &v28, v26);
        a2[1] = *((float*)&v27 + 1);
        if ((v15 & 0x10) != 0) {
        LABEL_43:
          HIDWORD(v27) = 0;
          GameRoutine_277830((float*)&v27 + 1, v26, a3, (float*)v19);
          v23 = a2[3];
          v24 = *((float*)&v27 + 1);
          a2[4] = *(float*)(a3 + 76);
          if (v24 >= v23) {
            v23 = v24;
          }
          a2[3] = v23;
        }
      }
      else if ((v15 & 0x10) != 0) {
        goto LABEL_43;
      }
      v10 = *(_QWORD*)(v10 + 8);
    } while (v10 != v9);
  }
}

__int64 Sound3DEngine_277510(__int64 a1, __int64 a2, __int64 a3,
                             unsigned int a4, __int64 a5)
{
  __int64 v5;

  if (*(_BYTE*)(a3 + 49) != 0) {
    v5 = *(_DWORD*)(a3 + 32) & 0x1F | 0x20u;
  }
  else {
    v5 = *(_DWORD*)(a3 + 32) & 0x1F;
  }
  return (*(__int64 (**)(__int64, __int64, __int64, __int64, _QWORD, __int64))(
      *(_QWORD*)a1 + 32LL))(a1, a5, a2, a3, a4, v5);
}

__int64 Sound3DEngine_277550(__int64* a1, __int64 a2, __int64 a3,
                             unsigned int a4)
{
  char v4;
  __int64 v5;
  _QWORD v7[2];
  __int64 v8;
  unsigned __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;

  v4 = *(_DWORD*)(a3 + 32);
  v14 = 0;
  v11 = 0;
  v7[0] = 0x3F8000003F800000LL;
  v7[1] = 0;
  v8 = 0xFFFFFFFFLL;
  v9 = 0xFFFFFFFF00000000LL;
  v10 = 1065353216;
  v5 = *a1;
  v12 = 0;
  v13 = 0;
  (*(void (**)(__int64*, _QWORD*, __int64, __int64, _QWORD, _QWORD))(v5 + 32))(
      a1, v7, a2, a3, a4, v4 & 2 | 0x1000000u);
  return HIDWORD(v8);
}

float Sound3DEngine_2776b0(float* a1, float* a2, __int64 a3, float32x4_t* a4,
                           float32x2_t* a5, float* a6)
{
  float v6;
  float v7;
  float v8;
  float v9;
  int8x16_t v10;
  float32x4_t v12;

  v6 = a6[3];
  v7 = *(float*)(a3 + 68);
  v8 = a6[1];
  v9 = a6[2];
  v12 = vaddq_f32(
      vmlaq_laneq_f32(
          vmlaq_lane_f32(
              vmulq_n_f32(*a4, COERCE_FLOAT(*(_OWORD*)LANES64(*(a5)).n64_u64)),
              a4[1], COERCE_AS(float32x2_t, LANES64(*(a5)).n64_u64[0]), 1),
          a4[2], *(float32x4_t*)LANES64(*(a5)).n64_u64, 2),
      a4[3]);
  v10 = vmulq_f32(v12, v12);
  LANES128(v10).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v10, v10, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
          .n64_u64[0];
  return Sound3DEngine_277870(
      &v12, a1, a2, LANES128(a4[6]).n128_f32[0],
      LANES64_OF(vsqrt_f32(vpadd_f32(
                     COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]))))
          .n64_f32[0],
      v7, v8, v9, v6);
}

float* Sound3DEngine_277730(float* result, __int64 a2, float32x4_t* a3,
                            float32x4_t* a4, float32x4_t* a5, float a6)
{

#pragma clang fp contract(off)
  float v6;
  float v7;
  float32x4_t v8;
  int8x16_t v9;
  int8x16_t v10;
  float v11;
  float v12;
  float v13;
  int8x16_t v14;
  int8x16_t v15;
  float v16;

  v6 = *(float*)(a2 + 72);
  v7 = 0x1.0000000000000p+0f;
  if (v6 == 0x0.0p+0f) {
    goto LABEL_2;
  }
  if (a6 <= 0x0.0p+0f) {
    v14 = vmulq_f32(a4[1], a4[1]);
    LANES128(v14).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v14, v14, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
            .n64_u64[0];
    v15 = vmulq_f32(a3[5], a3[5]);
    LANES128(v15).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v15, v15, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
            .n64_u64[0];
    v11 = -LANES64_OF(vsqrt_f32(vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]))))
               .n64_f32[0];
    v12 = vcvts_n_f32_u32(LANES128(a4[3]).n128_u8[1], 5u);
    v13 = LANES64_OF(vsqrt_f32(vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0]))))
              .n64_f32[0] *
          v12;
    v7 = 0x0.0p+0f;
    if (v13 <= v6) {
      goto LABEL_7;
    }
  LABEL_2:
    *result = v7;
    return result;
  }
  v8 = vmulq_n_f32(*a5, 0x1.0000000000000p+0f / a6);
  v9 = vmulq_f32(v8, a4[1]);
  LANES128(v9).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v9, v9, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
          .n64_u64[0];
  v10 = vmulq_f32(v8, a3[5]);
  v11 = -LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0]),
                              COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
             .n64_f32[0];
  LANES128(v10).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v10, v10, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
          .n64_u64[0];
  v12 = vcvts_n_f32_u32(LANES128(a4[3]).n128_u8[1], 5u);
  v13 = (float)-LANES64_OF(
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
            .n64_f32[0] *
        v12;
  v7 = 0x0.0p+0f;
  if (v13 > v6) {
    goto LABEL_2;
  }
LABEL_7:
  v16 = v11 * v12;
  if (v16 >= v6) {
    *result = 0x1.fffe000000000p+15f;
  }
  else {
    *result = (float)(v6 - v13) / (float)(v6 - v16);
  }
  return result;
}

float Sound3DEngine_277870(float32x4_t* a1, float* a2, float* a3, float a4,
                           float a5, float a6, float a7, float a8, float a9)
{
  float32x4_t v10;
  float32x4_t v17;
  float32x4_t v18;
  int8x16_t v19;
  float v20;
  float v21;
  float v22;
  int8x16_t v23;
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
  int8x16_t v34;
  float v35;
  float v36;
  float v37;
  float result;
  float32x4_t v39;

  v10 = (__typeof__(v10)){0};
  if (a5 != 0x0.0p+0f) {
    v17 = *a1;
    v18 = *a1;
    LANES128(v18).n128_u32[1] = 0;
    v19 = vmulq_f32(v18, v18);
    LANES128(v19).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v19, v19, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0])))
            .n64_u64[0];
    v20 = LANES64_OF(vsqrt_f32(vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]))))
              .n64_f32[0];
    if (v20 <= a4) {
      LODWORD(v22) = LANES128(*(a1)).n128_u64[1];
    }
    else {
      v21 = a4 / v20;
      LODWORD(v22) = LANES128(*(a1)).n128_u64[1];
      LANES128(v18).n128_f32[0] = LANES128(v17).n128_f32[0] * v21;
      LANES128(v18).n128_u64[1] =
          COERCE_UNSIGNED_INT(vmuls_lane_f32(v21, v17, 2));
      v23 = vmulq_f32(v18, v18);
      LANES128(v23).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v23, v23, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0])))
              .n64_u64[0];
      LODWORD(v20) =
          LANES64_OF(vsqrt_f32(vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]))))
              .n64_u32[0];
    }
    LANES128(v10).n128_u32[1] = 0;
    LANES128(v10).n128_u32[3] = 0;
    LANES128(v10).n128_f32[0] = (float)(LANES128(v17).n128_f32[0] * v20) / a5;
    LANES128(v10).n128_f32[2] = (float)(v22 * v20) / a5;
  }
  v39 = v10;
  v24 = atan2f_alt1(LANES128(v10).n128_f32[0], -LANES128(v10).n128_f32[2]);
  if (v24 >= (float)-a8) {
    if (v24 >= -0x1.921fb60000000p+0f) {
      if (v24 >= (float)-a7) {
        if (v24 >= a7) {
          if (v24 >= 0x1.921fb60000000p+0f) {
            v32 = 0x1.0000000000000p-1f;
            v33 = (float)((float)((float)(a8 * 0x0.0p+0f) +
                                  -0x1.921fb60000000p+1f) /
                          (float)(a8 + -0x1.921fb60000000p+1f)) +
                  (float)(v24 / (float)(a8 + -0x1.921fb60000000p+1f));
            if (a8 == 0x1.921fb60000000p+1f) {
              v33 = 0x1.0000000000000p-1f;
            }
            if (a8 != 0x1.921fb60000000p+0f) {
              v32 = (float)((float)((float)(PSEUDO_UNFUSED(a8 * -0x0.0p+0f)) +
                                    0x1.921fb60000000p+0f) /
                            (float)(0x1.921fb60000000p+0f - a8)) -
                    (float)(v24 / (float)(0x1.921fb60000000p+0f - a8));
            }
            if (v24 < a8) {
              v25 = v32;
            }
            else {
              v25 = 0x1.0000000000000p+0f;
            }
            if (v24 < a8) {
              v27 = 0x1.0000000000000p+0f;
            }
            else {
              v27 = v33;
            }
          }
          else {
            v27 = 0x1.0000000000000p+0f;
            v31 = (float)((float)((float)(a7 * 0x0.0p+0f) +
                                  0x1.921fb60000000p+0f) /
                          (float)(a7 + -0x1.921fb60000000p+0f)) -
                  (float)(v24 / (float)(a7 + -0x1.921fb60000000p+0f));
            if (a7 == 0x1.921fb60000000p+0f) {
              v25 = -0x1.0000000000000p-1f;
            }
            else {
              v25 = v31;
            }
          }
        }
        else {
          v25 = -0x1.0000000000000p+0f;
          v30 = (float)((float)(a7 - a7) / (float)((float)-a7 - a7)) -
                (float)((float)(v24 + v24) / (float)((float)-a7 - a7));
          if (a7 == 0x0.0p+0f) {
            v27 = 0x0.0p+0f;
          }
          else {
            v27 = v30;
          }
        }
      }
      else {
        v27 = -0x1.0000000000000p+0f;
        v29 = (float)((float)((float)(PSEUDO_UNFUSED(a7 * 0x0.0p+0f)) +
                              0x1.921fb60000000p+0f) /
                      (float)(a7 + -0x1.921fb60000000p+0f)) +
              (float)(v24 / (float)(a7 + -0x1.921fb60000000p+0f));
        if (a7 == 0x1.921fb60000000p+0f) {
          v25 = -0x1.0000000000000p-1f;
        }
        else {
          v25 = v29;
        }
      }
    }
    else {
      v27 = -0x1.0000000000000p+0f;
      v28 = (float)((float)((float)((float)-a8 * 0x0.0p+0f) +
                            0x1.921fb60000000p+0f) /
                    (float)(0x1.921fb60000000p+0f - a8)) +
            (float)(v24 / (float)(0x1.921fb60000000p+0f - a8));
      if (a8 == 0x1.921fb60000000p+0f) {
        v25 = 0x1.0000000000000p-1f;
      }
      else {
        v25 = v28;
      }
    }
  }
  else {
    v25 = 0x1.0000000000000p+0f;
    v26 = (float)((float)((float)(PSEUDO_UNFUSED(a8 * 0x0.0p+0f)) +
                          0x1.921fb60000000p+1f) /
                  (float)(a8 + -0x1.921fb60000000p+1f)) +
          (float)(v24 / (float)(a8 + -0x1.921fb60000000p+1f));
    if (a8 == 0x1.921fb60000000p+1f) {
      v27 = -0x1.0000000000000p-1f;
    }
    else {
      v27 = v26;
    }
  }
  v34 = vmulq_f32(v39, v39);
  LANES128(v34).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v34, v34, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0])))
          .n64_u64[0];
  v35 = LANES64_OF(vsqrt_f32(vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0]))))
            .n64_f32[0] /
        a4;
  v36 = cosf(a7);
  v37 = cosf(a8);
  *a2 = (float)(PSEUDO_UNFUSED((float)(0x1.0000000000000p+0f - v35) *
                               0x0.0p+0f)) +
        (float)((float)(a6 * v27) * v35);
  result =
      a9 + (float)((float)((float)(PSEUDO_UNFUSED(
                               (float)(0x1.0000000000000p+0f - v35) *
                               (float)((float)((float)(v36 + v37) *
                                               0x1.0000000000000p-1f) /
                                       (float)((float)(PSEUDO_UNFUSED(
                                                   (float)(v36 + v37) *
                                                   0x1.0000000000000p-1f)) -
                                               v37)))) +
                           (float)((float)(a6 * v25) * v35)) +
                   0x1.0000000000000p+0f);
  *a3 = result;
  return result;
}

#pragma GCC visibility pop
