#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void SdkRoutine_87a270(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void SdkRoutine_87a2e0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void SdkRoutine_87a2f0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void math_71ec60(PSEUDO_X8, __int64, _QWORD*,
                                            __int64, unsigned __int64);
__attribute__((swiftcall)) void math_726720(PSEUDO_X8, _QWORD);
__int64 SdkRoutine_7264c0(_QWORD*, __int64);
__int64 SdkRoutine_87a260(__int64);
__int64 SdkRoutine_87a2d0(_QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memcpy_plt_alt1(__int64, __int64,
                        unsigned __int64) __asm__("memcpy_plt");
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 memset_plt_alt1(__int64, int, unsigned __int64) __asm__("memset_plt");
__int64 nerd_gyro_pointing_GyroPointingKalmanFilter_ApplyCorrection_plt(_QWORD,
                                                                        _QWORD);
__int64 nerd_gyro_pointing_GyroPointingKalmanFilter_UpdateBoxConstraints_plt(
    _QWORD, _QWORD);
float atan2f_plt(float, float);
unsigned __int64* fw_math_LookupStateIndex(unsigned __int64*, __int64*);
unsigned __int64* math_731360(unsigned __int64*, unsigned __int64*);
unsigned __int64 math_7312c0(unsigned __int64*, unsigned __int64*);
__attribute__((swiftcall)) void math_702080(PSEUDO_X8 x8_, __int64 a1,
                                            __int64* a2, __int64* a3,
                                            unsigned __int64 a4);
__int64 math_711380(__int64* a1, __int64 a2, __int64 a3, unsigned __int64 a4);
float math_712760(float* a1, float* a2, long double a3, double a4, double a5,
                  long double a6);
_QWORD* math_717820(unsigned __int64* a1, __int64* a2);
__attribute__((swiftcall)) void math_71d560(PSEUDO_X8 x8_, _QWORD* a1,
                                            unsigned __int64* a2);
__attribute__((swiftcall)) void math_728730(PSEUDO_X8 x8_, float* a1);
unsigned __int64 math_730ec0(unsigned __int64* a1, unsigned __int64 a2,
                             unsigned __int64 a3, unsigned __int64 a4);
unsigned __int64 math_731120(unsigned __int64 result, __int64 a2, __int64 a3,
                             unsigned __int64 a4);

__attribute__((swiftcall)) void math_702080(PSEUDO_X8 x8_, __int64 a1,
                                            __int64* a2, __int64* a3,
                                            unsigned __int64 a4)
{
  __int64 a5 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  _DWORD* v62;
  __int64 v65;
  struct {
    char gap16_[4];
    _BYTE v66[2924];
    char gap2944_[8];
    __int64 v67;
  } v66_;

  memset_plt((void*)v66_.v66, nullptr, 2916, a4);
  v8 = a3[1];
  v9 = a3[2];
  v10 = a3[3];
  v11 = 0;
  v66_.v67 = *a3;
  v12 = a3[4];
  v13 = a3[5];
  v14 = a3[6];
  v15 = a3[7];
  v16 = a3[8];
  v17 = a3[9];
  v18 = a3[10];
  v19 = a3[11];
  v20 = a3[12];
  v21 = a3[13];
  v65 = v8;
  v22 = a3[14];
  v23 = a3[15];
  v24 = a3[16];
  v25 = a3[17];
  v26 = a3[18];
  v27 = a3[19];
  v28 = a3[20];
  v29 = a3[21];
  v30 = a3[22];
  v31 = a3[23];
  v32 = a3[24];
  v33 = a3[25];
  v34 = a3[26];
  do {
    v35 = *a2++;
    v36 = *(_DWORD*)(a1 + 4 * (27 * v35 + v65));
    v37 = *(_DWORD*)(a1 + 4 * (27 * v35 + v9));
    v38 = *(_DWORD*)(a1 + 4 * (27 * v35 + v10));
    v39 = *(_DWORD*)(a1 + 4 * (27 * v35 + v12));
    v40 = *(_DWORD*)(a1 + 4 * (27 * v35 + v13));
    v41 = *(_DWORD*)(a1 + 4 * (27 * v35 + v14));
    v42 = *(_DWORD*)(a1 + 4 * (27 * v35 + v15));
    v43 = *(_DWORD*)(a1 + 4 * (27 * v35 + v16));
    v44 = *(_DWORD*)(a1 + 4 * (27 * v35 + v17));
    v45 = *(_DWORD*)(a1 + 4 * (27 * v35 + v18));
    v46 = *(_DWORD*)(a1 + 4 * (27 * v35 + v19));
    v47 = *(_DWORD*)(a1 + 4 * (27 * v35 + v20));
    v48 = *(_DWORD*)(a1 + 4 * (27 * v35 + v21));
    v49 = *(_DWORD*)(a1 + 4 * (27 * v35 + v22));
    v50 = *(_DWORD*)(a1 + 4 * (27 * v35 + v23));
    v51 = *(_DWORD*)(a1 + 4 * (27 * v35 + v24));
    v52 = *(_DWORD*)(a1 + 4 * (27 * v35 + v25));
    v53 = *(_DWORD*)(a1 + 4 * (27 * v35 + v26));
    v54 = *(_DWORD*)(a1 + 4 * (27 * v35 + v27));
    v55 = *(_DWORD*)(a1 + 4 * (27 * v35 + v28));
    v56 = *(_DWORD*)(a1 + 4 * (27 * v35 + v29));
    v57 = *(_DWORD*)(a1 + 4 * (27 * v35 + v30));
    v58 = *(_DWORD*)(a1 + 4 * (27 * v35 + v31));
    v59 = *(_DWORD*)(a1 + 4 * (27 * v35 + v32));
    v60 = *(_DWORD*)(a1 + 4 * (27 * v35 + v33));
    v61 = *(_DWORD*)(a1 + 4 * (27 * v35 + v34));
    v62 = &v66_.v66[v11];
    v11 += 108;
    *v62 = *(_DWORD*)(a1 + 4 * (27 * v35 + v66_.v67));
    v62[1] = v36;
    v62[2] = v37;
    v62[3] = v38;
    v62[4] = v39;
    v62[5] = v40;
    v62[6] = v41;
    v62[7] = v42;
    v62[8] = v43;
    v62[9] = v44;
    v62[10] = v45;
    v62[11] = v46;
    v62[12] = v47;
    v62[13] = v48;
    v62[14] = v49;
    v62[15] = v50;
    v62[16] = v51;
    v62[17] = v52;
    v62[18] = v53;
    v62[19] = v54;
    v62[20] = v55;
    v62[21] = v56;
    v62[22] = v57;
    v62[23] = v58;
    v62[24] = v59;
    v62[25] = v60;
    v62[26] = v61;
  } while (v11 != 2916);
  {
    memcpy_plt(a5, v66_.v66, 2916);
    return;
  }
}

__int64 math_711380(__int64* a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _BYTE* v8;
  unsigned __int64 v9;
  _QWORD* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 result;
  __int64 v15;
  float* v16;
  __int64 v17;
  char v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  struct {
    _BYTE v23[136];
    __int64 v24;
  } v23_;
  struct {
    _BYTE v25[136];
    __int64 v26;
    __int64* v27;
  } v25_;
  struct {
    __int64 v28;
    char gap312_[32];
    __int64 v29;
  } v28_;
  struct {
    _QWORD v30[17];
    __int64 v31;
  } v30_;
  struct {
    _BYTE v32[136];
    unsigned __int64 v33;
  } v32_;
  _QWORD v34[19];
  struct {
    _QWORD v35[17];
    __int64 v36;
  } v35_;
  _QWORD v37[4];
  _QWORD v38[91];
  _QWORD v39[566];

  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  memset_plt((void*)v32_.v32, nullptr, 288, a4),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v5 = a1[970];
  v32_.v33 = v5;
  if (v5 != 0) {
    v6 = v5 & 7;
    if ((v5 & 7) != 0) {
      v7 = v5 & 0xFFFFFFFFFFFFFFF8LL;
      v8 = v32_.v32;
      do {
        *(_DWORD*)v8 = -8388608;
        v8 += 4;
        --v6;
      } while (v6 != 0);
      if (v5 < 8) {
      LABEL_9:
        v9 = v5 & 7;
        v34[17] = v5;
        v10 = v34;
        if ((v5 & 7) != 0) {
          v11 = v5 & 0xFFFFFFFFFFFFFFF8LL;
          do {
            *(_DWORD*)v10 = 2139095040;
            v10 = (_QWORD*)((char*)v10 + 4);
            --v9;
          } while (v9 != 0);
          if (v5 < 8) {
            goto LABEL_16;
          }
        }
        else {
          v11 = v5;
          if (v5 < 8) {
            goto LABEL_16;
          }
        }
        do {
          *v10 = 0x7F8000007F800000LL;
          v10[1] = 0x7F8000007F800000LL;
          v10[2] = 0x7F8000007F800000LL;
          v10[3] = 0x7F8000007F800000LL;
          v10 += 4;
          v11 -= 8LL;
        } while (v11 != 0);
        goto LABEL_16;
      }
    }
    else {
      v8 = v32_.v32;
      v7 = v5;
      if (v5 < 8) {
        goto LABEL_9;
      }
    }
    do {
      *(_QWORD*)v8 = 0xFF800000FF800000LL;
      *((_QWORD*)v8 + 1) = 0xFF800000FF800000LL;
      *((_QWORD*)v8 + 2) = 0xFF800000FF800000LL;
      *((_QWORD*)v8 + 3) = 0xFF800000FF800000LL;
      v8 += 32;
      v7 -= 8LL;
    } while (v7 != 0);
    goto LABEL_9;
  }
LABEL_16:
  v34[18] = a1 + 548;
  nerd_gyro_pointing_GyroPointingKalmanFilter_UpdateBoxConstraints_plt(
      a1, v32_.v32),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v13 = *a1;
  memset(v30_.v30, 0, sizeof(v30_.v30));
  v30_.v31 = v13;
  if (v13 != 0) {
    result = memset_plt((void*)v30_.v30, nullptr, 4 * (int)v13, v12),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    v15 = v30_.v31;
    if (v30_.v31 != 0) {
      v16 = (float*)v32_.v32;
      v17 = v30_.v31;
      while (*v16 < v16[36]) {
        ++v16;
        if (--v17 == 0) {
          v18 = 0;
          goto LABEL_24;
        }
      }
      return result;
    }
  }
  else {
    v15 = 0;
  }
  v18 = 1;
LABEL_24:
  memset_plt((void*)v38, nullptr, 5248, v12),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v37[0] = a1;
  v37[3] = v34;
  v38[33] = v15;
  v37[1] = v30_.v30;
  v37[2] = v32_.v32;
  if ((v18 & 1) == 0) {
    memset_plt((void*)v38, (char*)((_UNKNOWN*)0xFCLL) + 3, 8 * v15, v19),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  v38[67] = 0;
  v38[73] = 0;
  v39[565] = 0;
  memset_plt((void*)v39, nullptr, 4380, v19),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  result = SdkRoutine_7264c0(v37, v15),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if ((result & 1) != 0) {
    v35_.v36 = 0;
    memset(v35_.v35, 0, sizeof(v35_.v35));
    math_726720((void*)(v35_.v35), v37),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    v20 = v35_.v36;
    if (v35_.v36 != 0) {
      memcpy_plt(v30_.v30, v35_.v35, 4 * v35_.v36),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      v30_.v31 = v20;
      v23_.v24 = v20;
      memcpy_plt(v23_.v23, v30_.v30, 4 * v20),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      v21 = v23_.v24;
      v25_.v26 = v23_.v24;
      if (v23_.v24 != 0) {
        memcpy_plt(v25_.v25, v23_.v23, 4 * v23_.v24),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v22 = COERCE_AS(__typeof__(v22),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        v25_.v27 = a1 + 548;
        v28_.v29 = v21;
        memset_plt((void*)&v28_.v28, nullptr, v21, v22),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v22 = COERCE_AS(__typeof__(v22),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        return nerd_gyro_pointing_GyroPointingKalmanFilter_ApplyCorrection_plt(
            a1, v25_.v25);
      }
    }
    else {
      v30_.v31 = 0;
      v25_.v26 = 0;
    }
    v25_.v27 = a1 + 548;
    v28_.v29 = 0;
    return nerd_gyro_pointing_GyroPointingKalmanFilter_ApplyCorrection_plt(
        a1, v25_.v25);
  }
  return result;
}

float math_712760(float* a1, float* a2, long double a3, double a4, double a5,
                  long double a6)
{
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  int8x16_t v17;
  float v18;

  v7 = a2[1];
  v6 = a2[2];
  DWORD1(a3) = 0;
  v9 = a1[1];
  v8 = a1[2];
  v10 = (float)((float)((float)(*a1 * *a2) + 0x0.0p+0f) + (float)(v9 * v7)) +
        (float)(v8 * v6);
  v11 = sqrtf((float)((float)(PSEUDO_UNFUSED(v6 * v6)) +
                      (float)((float)(PSEUDO_UNFUSED(v7 * v7)) +
                              (float)(PSEUDO_UNFUSED(*a2 * *a2)))) *
              (float)((float)(PSEUDO_UNFUSED(v8 * v8)) +
                      (float)((float)(PSEUDO_UNFUSED(v9 * v9)) +
                              (float)(PSEUDO_UNFUSED(*a1 * *a1)))));
  *(float*)&a3 = (float)(v9 * v6) - (float)(PSEUDO_UNFUSED(v7 * v8));
  v12 = (float)(v8 * *a2) - (float)(PSEUDO_UNFUSED(v6 * *a1));
  v13 = (float)(*a1 * v7) - (float)(PSEUDO_UNFUSED(*a2 * v9));
  if (v10 <= 0x0.0p+0f) {
    *(float*)&a6 =
        (float)(PSEUDO_UNFUSED(v13 * v13)) +
        (float)((float)(PSEUDO_UNFUSED(*(float*)&a3 * *(float*)&a3)) +
                (float)(PSEUDO_UNFUSED(v12 * v12)));
    if (*(float*)&a6 == 0x0.0p+0f) {
      v16 = a1[1];
      v15 = a1[2];
      if (v16 == 0x0.0p+0f) {
        LANES128(v17).n128_u64[0] = 0x8000000080000000LL;
        LANES128(v17).n128_u64[1] = 0x8000000080000000LL;
        *(float*)&a3 = -v16;
        *(_QWORD*)&a6 = 0;
        *(float*)&a3 =
            LANES128_OF(vbslq_s8(v17, *(int8x16_t*)&a6, *(int8x16_t*)&a3))
                .n128_f32[0] +
            v15;
        v13 = -(float)(*a1 - (float)(v16 * 0x0.0p+0f));
        v12 = (float)(PSEUDO_UNFUSED(v15 * -0x0.0p+0f)) +
              (float)(*a1 * 0x0.0p+0f);
      }
      else {
        LODWORD(a6) = 0;
        *(float*)&a3 = (float)(PSEUDO_UNFUSED(v16 * -0x0.0p+0f)) +
                       (float)(v15 * 0x0.0p+0f);
        v12 = -(float)(v15 - (float)(*a1 * 0x0.0p+0f));
        v13 = v16 + (float)(PSEUDO_UNFUSED(*a1 * -0x0.0p+0f));
      }
    }
    else {
      v14 = v11 - v10;
      *(float*)&a3 = *(float*)&a3 * v14;
      v12 = v12 * v14;
      v13 = v13 * v14;
    }
  }
  else {
    *(float*)&a6 = v11 + v10;
  }
  v18 = (float)(PSEUDO_UNFUSED(*(float*)&a6 * *(float*)&a6)) +
        (float)((float)(PSEUDO_UNFUSED(v13 * v13)) +
                (float)((float)(PSEUDO_UNFUSED(v12 * v12)) +
                        (float)(PSEUDO_UNFUSED(*(float*)&a3 * *(float*)&a3))));
  if (v18 != 0x0.0p+0f) {
    *(float*)&a3 = *(float*)&a3 * (float)(0x1.0000000000000p+0f / sqrtf(v18));
  }
  return *(float*)&a3;
}

_QWORD* math_717820(unsigned __int64* a1, __int64* a2)
{
  unsigned __int64 v2;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char* v13;
  char* v14;
  char* v15;
  unsigned __int64* v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  float* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  float v28;
  __int64 v29;
  float* v30;
  float* v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  __int64 v37;
  float* v38;
  unsigned __int64 v39;
  float v40;
  float v41;
  float* v42;
  __int64 v43;
  float* v44;
  __int64 v45;
  float v46;
  __int64 v47;
  float* v48;
  float* v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  __int64 v55;
  float* v56;
  unsigned __int64 v57;
  float v58;
  float v59;
  float* v60;
  __int64 v61;
  float* v62;
  __int64 v63;
  float v64;
  __int64 v65;
  float* v66;
  float* v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  __int64 v73;
  float* v74;
  unsigned __int64 v75;
  float v76;
  float v77;
  __int64 v78;
  _DWORD* v79;
  __int64* v80;
  int v81;
  int v82;
  int v83;
  __int64 v84;
  __int64 v85;
  int v86;
  int v87;
  __int64 v88;
  __int64 v89;
  int v90;
  int v91;
  char* v92;
  __int64* v93;
  _DWORD* v94;
  __int64 v95;
  __int64 v96;
  unsigned __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64* v100;
  int* v101;
  int v102;
  int v103;
  int v104;
  __int64 v105;
  __int64 v106;
  int v107;
  int v108;
  __int64 v109;
  __int64 v110;
  int v111;
  int v112;
  char* v113;
  __int64* v114;
  _DWORD* v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64* v120;
  int* v121;
  int v122;
  int v123;
  int v124;
  __int64 v125;
  __int64 v126;
  int v127;
  int v128;
  __int64 v129;
  __int64 v130;
  int v131;
  int v132;
  char* v133;
  __int64* v134;
  unsigned __int64 v135;
  _DWORD* v136;
  __int64 v137;
  _QWORD* v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64* v144;
  _DWORD* v145;
  int v146;
  int v147;
  int v148;
  __int64 v149;
  __int64 v150;
  int v151;
  int v152;
  __int64 v153;
  __int64 v154;
  int v155;
  int v156;
  __int64 v157;
  __int64* v158;
  unsigned __int64 v159;
  _DWORD* v160;
  __int64 v161;
  unsigned __int64 v162;
  unsigned __int64 v163;
  __int64 v164;
  __int64 v165;
  _DWORD* v166;
  __int64* v167;
  __int64 v168;
  int v169;
  int v170;
  int v171;
  __int64 v172;
  int v173;
  int v174;
  int v175;
  __int64 v176;
  __int64 v177;
  int v178;
  int v179;
  int v180;
  int v181;
  int v182;
  _DWORD* v183;
  __int64* v184;
  __int64 v185;
  int v186;
  char v188;
  _BYTE v189[3616];
  struct {
    char v190[8];
    unsigned __int64 v191;
  } v190_;
  _QWORD v192[2];
  _BYTE v193[136];
  _BYTE v194[120];
  int v195;
  _BYTE v196[368];
  _QWORD v197[2];
  _QWORD v198[2];
  struct {
    _QWORD v199[26];
    unsigned __int64 v200;
  } v199_;
  unsigned __int64 v201;
  unsigned __int64 v202;
  unsigned __int64 v203;
  struct {
    unsigned __int64 v204;
    unsigned __int64 v205;
    __int64 v206;
    _QWORD v207[13];
    __int64 v208;
    char gap8744_[20];
    int v209;
    char gap8768_[88];
    __int64 v210;
    char gap8864_[20];
    int v211;
  } v204_;

  v2 = a2[1];
  v201 = *a2;
  v4 = a2[2];
  v202 = v2;
  v203 = v4;
  v201 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v201);
  v202 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v202);
  v5 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v203);
  v6 = v201;
  v7 = v202;
  v8 = *a1;
  v204_.v207[0] = 0;
  v204_.v206 = 0;
  v204_.v205 = 0;
  v204_.v204 = 0;
  v204_.v207[1] = 0;
  v203 = v5;
  v204_.v207[2] = v8;
  if (v8 != 0) {
    memset_plt_alt1((__int64)&v204_.v204, 0, v8);
  }
  v197[0] = 0;
  v197[1] = 0;
  v198[0] = 0;
  v198[1] = 0;
  memset(v199_.v199, 0, 136);
  *((_BYTE*)&v204_.v204 + v6) = 1;
  *((_BYTE*)&v204_.v204 + v7) = 1;
  *((_BYTE*)&v204_.v204 + v5) = 1;
  memset(&v199_.v199[17], 0, 72);
  v199_.v200 = v8 - 3;
  if (v8 != 3) {
    memset_plt_alt1((__int64)v197, 0, 8 * (v8 - 3));
    if (v8 == 0) {
      goto LABEL_32;
    }
  }
  v9 = v8 & 7;
  if (v8 - 1 >= 7) {
    v12 = 3;
    v11 = 0;
    while (1) {
      v13 = (char*)&v204_.v204 + v12;
      if ((*((_BYTE*)&v203 + v12 + 5) & 1) != 0) {
        if ((*(v13 - 2) & 1) != 0) {
          goto LABEL_12;
        }
      }
      else {
        v197[v11++] = v12 - 3;
        if ((*(v13 - 2) & 1) != 0) {
        LABEL_12:
          if ((*((_BYTE*)&v204_.v204 + v12 - 1) & 1) != 0) {
            goto LABEL_13;
          }
          goto LABEL_21;
        }
      }
      v197[v11++] = v12 - 2;
      if ((*((_BYTE*)&v204_.v204 + v12 - 1) & 1) != 0) {
      LABEL_13:
        if ((*((_BYTE*)&v204_.v204 + v12) & 1) != 0) {
          goto LABEL_14;
        }
        goto LABEL_22;
      }
    LABEL_21:
      v197[v11++] = v12 - 1;
      if ((*((_BYTE*)&v204_.v204 + v12) & 1) != 0) {
      LABEL_14:
        v14 = (char*)&v204_.v204 + v12;
        if ((*((_BYTE*)&v204_.v204 + v12 + 1) & 1) != 0) {
          goto LABEL_15;
        }
        goto LABEL_23;
      }
    LABEL_22:
      v197[v11++] = v12;
      v14 = (char*)&v204_.v204 + v12;
      if ((*((_BYTE*)&v204_.v204 + v12 + 1) & 1) != 0) {
      LABEL_15:
        if ((v14[2] & 1) != 0) {
          goto LABEL_16;
        }
        goto LABEL_24;
      }
    LABEL_23:
      v197[v11++] = v12 + 1;
      if ((v14[2] & 1) != 0) {
      LABEL_16:
        v15 = (char*)&v204_.v204 + v12;
        if ((*((_BYTE*)&v204_.v204 + v12 + 3) & 1) != 0) {
          goto LABEL_17;
        }
        goto LABEL_25;
      }
    LABEL_24:
      v197[v11++] = v12 + 2;
      v15 = (char*)&v204_.v204 + v12;
      if ((*((_BYTE*)&v204_.v204 + v12 + 3) & 1) != 0) {
      LABEL_17:
        if ((v15[4] & 1) == 0) {
          goto LABEL_26;
        }
        goto LABEL_9;
      }
    LABEL_25:
      v197[v11++] = v12 + 3;
      if ((v15[4] & 1) == 0) {
      LABEL_26:
        v197[v11++] = v12 + 4;
      }
    LABEL_9:
      v12 += 8;
      if (v12 - (v8 & 0xFFFFFFFFFFFFFFF8LL) == 3) {
        v10 = v12 - 3;
        if ((v8 & 7) != 0) {
          goto LABEL_30;
        }
        goto LABEL_32;
      }
    }
  }
  v10 = 0;
  v11 = 0;
  if ((v8 & 7) != 0) {
    do {
    LABEL_30:
      if ((*((_BYTE*)&v204_.v204 + v10) & 1) == 0) {
        v197[v11++] = v10;
      }
      ++v10;
      --v9;
    } while (v9 != 0);
  }
LABEL_32:
  v16 = a1 + 2;
  v17 = v199_.v200;
  v204_.v204 = v199_.v200;
  memset_plt_alt1((__int64)&v204_.v205, 0, 0x168u);
  if (v17 != 0) {
    v18 = 33 * v6;
    v19 = v17 & 7;
    if (v17 >= 8) {
      v78 = 0;
      v79 = (_DWORD*)&v204_.v206 + 1;
      v80 = v199_.v199;
      do {
        v78 -= 8;
        v81 = *((_DWORD*)v16 + *(v80 - 3) + v18);
        v82 = *((_DWORD*)v16 + *(v80 - 2) + v18);
        v83 = *((_DWORD*)v16 + *(v80 - 1) + v18);
        v84 = *v80;
        v85 = v80[1];
        *(v79 - 3) = *((_DWORD*)v16 + *(v80 - 4) + v18);
        *(v79 - 2) = v81;
        v86 = *((_DWORD*)v16 + v84 + v18);
        v87 = *((_DWORD*)v16 + v85 + v18);
        v88 = v80[2];
        v89 = v80[3];
        *(v79 - 1) = v82;
        *v79 = v83;
        v80 += 8;
        v90 = *((_DWORD*)v16 + v88 + v18);
        v79[1] = v86;
        v79[2] = v87;
        v91 = *((_DWORD*)v16 + v89 + v18);
        v79[3] = v90;
        v79[4] = v91;
        v79 += 8;
      } while (-(__int64)(v17 & 0xFFFFFFFFFFFFFFF8LL) != v78);
      v20 = -v78;
      if ((v17 & 7) == 0) {
      LABEL_77:
        v96 = 33 * v7;
        v97 = v17 & 7;
        if (v17 >= 8) {
          v99 = 0;
          v100 = v199_.v199;
          v101 = &v204_.v209;
          do {
            v99 -= 8;
            v102 = *((_DWORD*)v16 + *(v100 - 3) + v96);
            v103 = *((_DWORD*)v16 + *(v100 - 2) + v96);
            v104 = *((_DWORD*)v16 + *(v100 - 1) + v96);
            v105 = *v100;
            v106 = v100[1];
            *(v101 - 7) = *((_DWORD*)v16 + *(v100 - 4) + v96);
            *(v101 - 6) = v102;
            v107 = *((_DWORD*)v16 + v105 + v96);
            v108 = *((_DWORD*)v16 + v106 + v96);
            v109 = v100[2];
            v110 = v100[3];
            *(v101 - 5) = v103;
            *(v101 - 4) = v104;
            v100 += 8;
            v111 = *((_DWORD*)v16 + v109 + v96);
            *(v101 - 3) = v107;
            *(v101 - 2) = v108;
            v112 = *((_DWORD*)v16 + v110 + v96);
            *(v101 - 1) = v111;
            *v101 = v112;
            v101 += 8;
          } while (-(__int64)(v17 & 0xFFFFFFFFFFFFFFF8LL) != v99);
          v98 = -v99;
          if ((v17 & 7) == 0) {
          LABEL_85:
            v117 = 33 * v5;
            if (v17 >= 8) {
              v119 = 0;
              v120 = v199_.v199;
              v121 = &v204_.v211;
              do {
                v119 -= 8;
                v122 = *((_DWORD*)v16 + *(v120 - 3) + v117);
                v123 = *((_DWORD*)v16 + *(v120 - 2) + v117);
                v124 = *((_DWORD*)v16 + *(v120 - 1) + v117);
                v125 = *v120;
                v126 = v120[1];
                *(v121 - 7) = *((_DWORD*)v16 + *(v120 - 4) + v117);
                *(v121 - 6) = v122;
                v127 = *((_DWORD*)v16 + v125 + v117);
                v128 = *((_DWORD*)v16 + v126 + v117);
                v129 = v120[2];
                v130 = v120[3];
                *(v121 - 5) = v123;
                *(v121 - 4) = v124;
                v120 += 8;
                v131 = *((_DWORD*)v16 + v129 + v117);
                *(v121 - 3) = v127;
                *(v121 - 2) = v128;
                v132 = *((_DWORD*)v16 + v130 + v117);
                *(v121 - 1) = v131;
                *v121 = v132;
                v121 += 8;
              } while (-(__int64)(v17 & 0xFFFFFFFFFFFFFFF8LL) != v119);
              v118 = -v119;
              if ((v17 & 7) == 0) {
                goto LABEL_93;
              }
            }
            else {
              v118 = 0;
              if ((v17 & 7) == 0) {
              LABEL_93:
                memcpy_plt_alt1((__int64)v192, (__int64)&v204_.v204, 0x170u);
                v204_.v204 = v17;
                v204_.v205 = v17;
                memset_plt_alt1((__int64)&v204_.v206, 0, 0xE10u);
                v138 = v204_.v207;
                v139 = 0;
                v140 = 0;
                while (1) {
                  v141 = 33LL * v197[v140];
                  if (v17 >= 8) {
                    break;
                  }
                  v142 = 0;
                  if ((v17 & 7) != 0) {
                    goto LABEL_101;
                  }
                LABEL_94:
                  ++v140;
                  v138 += 15;
                  v139 += 30;
                  if (v140 == v17) {
                    goto LABEL_37;
                  }
                }
                v143 = 0;
                v144 = v199_.v199;
                v145 = v138;
                do {
                  v143 -= 8;
                  v146 = *((_DWORD*)v16 + *(v144 - 3) + v141);
                  v147 = *((_DWORD*)v16 + *(v144 - 2) + v141);
                  v148 = *((_DWORD*)v16 + *(v144 - 1) + v141);
                  v149 = *v144;
                  v150 = v144[1];
                  *(v145 - 2) = *((_DWORD*)v16 + *(v144 - 4) + v141);
                  *(v145 - 1) = v146;
                  v151 = *((_DWORD*)v16 + v149 + v141);
                  v152 = *((_DWORD*)v16 + v150 + v141);
                  v153 = v144[2];
                  v154 = v144[3];
                  *v145 = v147;
                  v145[1] = v148;
                  v144 += 8;
                  v155 = *((_DWORD*)v16 + v153 + v141);
                  v145[2] = v151;
                  v145[3] = v152;
                  v156 = *((_DWORD*)v16 + v154 + v141);
                  v145[4] = v155;
                  v145[5] = v156;
                  v145 += 8;
                } while (-(__int64)(v17 & 0xFFFFFFFFFFFFFFF8LL) != v143);
                v142 = -v143;
                if ((v17 & 7) == 0) {
                  goto LABEL_94;
                }
              LABEL_101:
                v157 = v142 + v139;
                v158 = &v197[v142];
                v159 = v17 & 7;
                v160 = (_DWORD*)&v204_.v207[-1] + v157;
                do {
                  v161 = *v158++;
                  --v159;
                  *v160++ = *((_DWORD*)v16 + v161 + v141);
                } while (v159 != 0);
                goto LABEL_94;
              }
            }
            v133 = (char*)&v204_.v204 + 4 * v118;
            v134 = &v197[v118];
            v135 = v17 & 7;
            v136 = v133 + 248;
            do {
              v137 = *v134++;
              --v135;
              *v136++ = *((_DWORD*)v16 + v137 + v117);
            } while (v135 != 0);
            goto LABEL_93;
          }
        }
        else {
          v98 = 0;
          if ((v17 & 7) == 0) {
            goto LABEL_85;
          }
        }
        v113 = (char*)&v204_.v204 + 4 * v98;
        v114 = &v197[v98];
        v115 = v113 + 128;
        do {
          v116 = *v114++;
          --v97;
          *v115++ = *((_DWORD*)v16 + v116 + v96);
        } while (v97 != 0);
        goto LABEL_85;
      }
    }
    else {
      v20 = 0;
      if ((v17 & 7) == 0) {
        goto LABEL_77;
      }
    }
    v92 = (char*)&v204_.v204 + 4 * v20;
    v93 = &v197[v20];
    v94 = v92 + 8;
    do {
      v95 = *v93++;
      --v19;
      *v94++ = *((_DWORD*)v16 + v95 + v18);
    } while (v19 != 0);
    goto LABEL_77;
  }
  memcpy_plt_alt1((__int64)v192, (__int64)&v204_.v204, 0x170u);
  memset_plt_alt1((__int64)&v204_.v204, 0, 0xE20u);
LABEL_37:
  memcpy_plt_alt1((__int64)v189, (__int64)&v204_.v204, 0xE20u);
  SdkRoutine_87a260((__int64)v189);
  memcpy_plt_alt1((__int64)v190_.v190, (__int64)v189, 0xE20u);
  v21 = v190_.v191;
  v204_.v204 = v190_.v191;
  memset_plt_alt1((__int64)&v204_.v205, 0, 0x168u);
  if (v21 != 0) {
    v22 = v192[0];
    if (v192[0] != 0) {
      v23 = v192[0] & 7;
      v24 = (float*)v190_.v190;
      v25 = 0;
      v26 = -(__int64)(v192[0] & 0xFFFFFFFFFFFFFFF8LL);
      while (v22 < 8) {
        v27 = 0;
        v28 = 0x0.0p+0f;
        if (v23 != 0) {
          goto LABEL_47;
        }
      LABEL_40:
        *((float*)&v204_.v205 + v25++) = v28;
        ++v24;
        if (v25 == v21) {
          v42 = (float*)v190_.v190;
          v43 = 0;
          while (v22 < 8) {
            v45 = 0;
            v46 = 0x0.0p+0f;
            if ((v22 & 7) != 0) {
              goto LABEL_58;
            }
          LABEL_51:
            v44 = (float*)&v204_.v205 + v43++;
            ++v42;
            v44[30] = v46;
            if (v43 == v21) {
              v60 = (float*)v190_.v190;
              v61 = 0;
              while (v22 < 8) {
                v63 = 0;
                v64 = 0x0.0p+0f;
                if ((v22 & 7) != 0) {
                  goto LABEL_69;
                }
              LABEL_62:
                v62 = (float*)&v204_.v205 + v61++;
                ++v60;
                v62[60] = v64;
                if (v61 == v21) {
                  goto LABEL_105;
                }
              }
              v64 = 0x0.0p+0f;
              v65 = 0;
              v66 = (float*)&v195;
              v67 = v60;
              do {
                v65 -= 8;
                v68 =
                    (float)((float)((float)((float)((float)(v64 +
                                                            (float)(*(v66 - 7) *
                                                                    v67[4])) +
                                                    (float)(*(v66 - 6) *
                                                            v67[34])) +
                                            (float)(*(v66 - 5) * v67[64])) +
                                    (float)(*(v66 - 4) * v67[94])) +
                            (float)(*(v66 - 3) * v67[124])) +
                    (float)(*(v66 - 2) * v67[154]);
                v69 = *(v66 - 1);
                v70 = *v66;
                v66 += 8;
                v71 = v68 + (float)(v69 * v67[184]);
                v72 = v67[214];
                v67 += 240;
                v64 = v71 + (float)(v70 * v72);
              } while (-(__int64)(v22 & 0xFFFFFFFFFFFFFFF8LL) != v65);
              v63 = -v65;
              if ((v22 & 7) == 0) {
                goto LABEL_62;
              }
            LABEL_69:
              v73 = 120 * v63 + 16;
              v74 = (float*)&v194[4 * v63 + 92];
              v75 = v22 & 7;
              do {
                v76 = *v74++;
                v77 = *(float*)((char*)v60 + v73);
                v73 += 120;
                --v75;
                v64 = v64 + (float)(v76 * v77);
              } while (v75 != 0);
              goto LABEL_62;
            }
          }
          v46 = 0x0.0p+0f;
          v47 = 0;
          v48 = (float*)v194;
          v49 = v42;
          do {
            v47 -= 8;
            v50 =
                (float)((float)((float)((float)((float)(v46 +
                                                        (float)(*(v48 - 7) *
                                                                v49[4])) +
                                                (float)(*(v48 - 6) * v49[34])) +
                                        (float)(*(v48 - 5) * v49[64])) +
                                (float)(*(v48 - 4) * v49[94])) +
                        (float)(*(v48 - 3) * v49[124])) +
                (float)(*(v48 - 2) * v49[154]);
            v51 = *(v48 - 1);
            v52 = *v48;
            v48 += 8;
            v53 = v50 + (float)(v51 * v49[184]);
            v54 = v49[214];
            v49 += 240;
            v46 = v53 + (float)(v52 * v54);
          } while (-(__int64)(v22 & 0xFFFFFFFFFFFFFFF8LL) != v47);
          v45 = -v47;
          if ((v22 & 7) == 0) {
            goto LABEL_51;
          }
        LABEL_58:
          v55 = 120 * v45 + 16;
          v56 = (float*)&v193[4 * v45 + 108];
          v57 = v22 & 7;
          do {
            v58 = *v56++;
            v59 = *(float*)((char*)v42 + v55);
            v55 += 120;
            --v57;
            v46 = v46 + (float)(v58 * v59);
          } while (v57 != 0);
          goto LABEL_51;
        }
      }
      v28 = 0x0.0p+0f;
      v29 = 0;
      v30 = (float*)v193;
      v31 = v24;
      do {
        v29 -= 8;
        v32 = (float)((float)((float)((float)((float)(v28 + (float)(*(v30 - 3) *
                                                                    v31[4])) +
                                              (float)(*(v30 - 2) * v31[34])) +
                                      (float)(*(v30 - 1) * v31[64])) +
                              (float)(*v30 * v31[94])) +
                      (float)(v30[1] * v31[124])) +
              (float)(v30[2] * v31[154]);
        v33 = v30[3];
        v34 = v30[4];
        v30 += 8;
        v35 = v32 + (float)(v33 * v31[184]);
        v36 = v31[214];
        v31 += 240;
        v28 = v35 + (float)(v34 * v36);
      } while (v26 != v29);
      v27 = -v29;
      if (v23 == 0) {
        goto LABEL_40;
      }
    LABEL_47:
      v37 = 120 * v27 + 16;
      v38 = (float*)&v192[1] + v27;
      v39 = v22 & 7;
      do {
        v40 = *v38++;
        v41 = *(float*)((char*)v24 + v37);
        v37 += 120;
        --v39;
        v28 = v28 + (float)(v40 * v41);
      } while (v39 != 0);
      goto LABEL_40;
    }
    v162 = 4 * v21;
    memset_plt_alt1((__int64)&v204_.v205, 0, v162);
    memset_plt_alt1((__int64)&v204_.v208, 0, v162);
    memset_plt_alt1((__int64)&v204_.v210, 0, v162);
  }
LABEL_105:
  memcpy_plt_alt1((__int64)v196, (__int64)&v204_.v204, 0x170u);
  v204_.v204 = v17;
  memset_plt_alt1((__int64)&v204_.v205, 0, 0x168u);
  if (v17 != 0) {
    v163 = v17 & 3;
    if (v17 < 4) {
      v164 = 0;
      if ((v17 & 3) == 0) {
        goto LABEL_114;
      }
      goto LABEL_112;
    }
    v165 = 0;
    v166 = (_DWORD*)v204_.v207 + 1;
    v167 = v198;
    do {
      v165 -= 4;
      v168 = 33 * *(v167 - 2);
      v169 = *((_DWORD*)v16 + v168 + v6);
      v170 = *((_DWORD*)v16 + v168 + v7);
      v171 = *((_DWORD*)v16 + v168 + v5);
      v172 = 33 * *(v167 - 1);
      *(v166 - 5) = v169;
      *(v166 - 4) = v170;
      v173 = *((_DWORD*)v16 + v172 + v6);
      v174 = *((_DWORD*)v16 + v172 + v7);
      v175 = *((_DWORD*)v16 + v172 + v5);
      v176 = *v167;
      v177 = v167[1];
      v167 += 4;
      v176 *= 33;
      *(v166 - 3) = v171;
      *(v166 - 2) = v173;
      *(v166 - 1) = v174;
      *v166 = v175;
      v178 = *((_DWORD*)v16 + v176 + v5);
      v179 = *((_DWORD*)v16 + v176 + v7);
      v180 = *((_DWORD*)v16 + 33 * v177 + v6);
      v166[1] = *((_DWORD*)v16 + v176 + v6);
      v166[2] = v179;
      v181 = *((_DWORD*)v16 + 33 * v177 + v7);
      v166[3] = v178;
      v166[4] = v180;
      v182 = *((_DWORD*)v16 + 33 * v177 + v5);
      v166[5] = v181;
      v166[6] = v182;
      v166 += 12;
    } while (-(__int64)(v17 & 0xFFFFFFFFFFFFFFFCLL) != v165);
    v164 = -v165;
    if ((v17 & 3) != 0) {
    LABEL_112:
      v183 = (_DWORD*)&v204_.v207[-1] + 3 * v164;
      v184 = &v197[v164];
      do {
        v185 = *v184++;
        --v163;
        v186 = *((_DWORD*)v16 + 33 * v185 + v7);
        *(v183 - 2) = *((_DWORD*)v16 + 33 * v185 + v6);
        *(v183 - 1) = v186;
        *v183 = *((_DWORD*)v16 + 33 * v185 + v5);
        v183 += 3;
      } while (v163 != 0);
    }
  }
LABEL_114:
  memcpy_plt_alt1((__int64)&v188, (__int64)&v204_.v204, 0x170u);
  return X8CALL_X0(void*, SdkRoutine_87a270((void*)(&v204_.v204), v196, &v188));
}

__attribute__((swiftcall)) void math_71d560(PSEUDO_X8 x8_, _QWORD* a1,
                                            unsigned __int64* a2)
{

#pragma clang fp contract(off)
  float* a3 = (float*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  char* v22;
  char* v23;
  _QWORD* v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  _DWORD* v40;
  int v41;
  int v42;
  int v43;
  __int64 v44;
  __int64 v45;
  int v46;
  int v47;
  __int64 v48;
  __int64 v49;
  int v50;
  int v51;
  __int64 v52;
  __int64* v53;
  unsigned __int64 v54;
  _DWORD* v55;
  __int64 v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64* v67;
  float* v68;
  __int64 v69;
  __int64 v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  _DWORD* v81;
  __int64 v82;
  int v83;
  int v84;
  int v85;
  _QWORD* result;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  _BYTE v92[656];
  _BYTE v93[2936];
  _QWORD v94[82];
  _QWORD v95[82];
  __int64 v96;
  _QWORD v97[3];
  struct {
    _QWORD v98[23];
    unsigned __int64 v99;
  } v98_;
  unsigned __int64 v100;
  unsigned __int64 v101;
  unsigned __int64 v102;
  unsigned __int64 v103;
  unsigned __int64 v104;
  unsigned __int64 v105;
  struct {
    unsigned __int64 v106;
    unsigned __int64 v107;
    unsigned __int64 v108;
    unsigned __int64 v109;
    unsigned __int64 v110;
    unsigned __int64 v111;
  } v106_;
  struct {
    unsigned __int64 v112;
    unsigned __int64 v113;
    __int64 v114;
    _QWORD v115[364];
    unsigned __int64 v116;
    _QWORD v117[2];
    char gap8200_[4];
    float v118[157];
  } v112_;

  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v58 = COERCE_AS(__typeof__(v58),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v4 = a2[3];
  v102 = a2[2];
  v103 = v4;
  v6 = a2[5];
  v104 = a2[4];
  v105 = v6;
  v7 = a2[1];
  v100 = *a2;
  v101 = v7;
  v100 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v100),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v58 = COERCE_AS(__typeof__(v58),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v101 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v101),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v58 = COERCE_AS(__typeof__(v58),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v102 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v102),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v58 = COERCE_AS(__typeof__(v58),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v103 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v103),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v58 = COERCE_AS(__typeof__(v58),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v104 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v104),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v58 = COERCE_AS(__typeof__(v58),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v9 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v105),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v58 = COERCE_AS(__typeof__(v58),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v10 = *a1;
  v112_.v115[0] = 0;
  v112_.v114 = 0;
  v112_.v113 = 0;
  v112_.v112 = 0;
  v112_.v115[1] = 0;
  v106_.v107 = v101;
  v106_.v106 = v100;
  v105 = v9;
  v106_.v111 = v9;
  v112_.v115[2] = v10;
  v106_.v110 = v104;
  v106_.v108 = v102;
  v106_.v109 = v103;
  if (v10 != 0) {
    memset_plt((void*)&v112_.v112, nullptr, v10, v8),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v58 = COERCE_AS(__typeof__(v58),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  v11 = v106_.v106;
  v12 = v106_.v107;
  v13 = v106_.v108;
  v14 = v106_.v109;
  v15 = v106_.v110;
  v16 = v106_.v111;
  v96 = 0;
  memset(v97, 0, sizeof(v97));
  memset(v98_.v98, 0, sizeof(v98_.v98));
  *((_BYTE*)&v112_.v112 + v106_.v106) = 1;
  *((_BYTE*)&v112_.v112 + v12) = 1;
  *((_BYTE*)&v112_.v112 + v13) = 1;
  *((_BYTE*)&v112_.v112 + v14) = 1;
  *((_BYTE*)&v112_.v112 + v15) = 1;
  *((_BYTE*)&v112_.v112 + v16) = 1;
  v98_.v99 = v10 - 6;
  if (v10 != 6) {
    memset_plt((void*)&v96, nullptr, 8 * (v10 - 6), v8),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v58 = COERCE_AS(__typeof__(v58),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    if (v10 == 0) {
      goto LABEL_32;
    }
  }
  v17 = v10 & 7;
  if ((unsigned __int64)(v10 - 1) >= 7) {
    v20 = 3;
    v19 = 0;
    while (1) {
      v21 = (char*)&v112_.v112 + v20;
      if ((*((_BYTE*)&v106_.v111 + v20 + 5) & 1) != 0) {
        if ((*(v21 - 2) & 1) != 0) {
          goto LABEL_12;
        }
      }
      else {
        v97[v19++ - 1] = v20 - 3;
        if ((*(v21 - 2) & 1) != 0) {
        LABEL_12:
          if ((*((_BYTE*)&v112_.v112 + v20 - 1) & 1) != 0) {
            goto LABEL_13;
          }
          goto LABEL_21;
        }
      }
      v97[v19++ - 1] = v20 - 2;
      if ((*((_BYTE*)&v112_.v112 + v20 - 1) & 1) != 0) {
      LABEL_13:
        if ((*((_BYTE*)&v112_.v112 + v20) & 1) != 0) {
          goto LABEL_14;
        }
        goto LABEL_22;
      }
    LABEL_21:
      v97[v19++ - 1] = v20 - 1;
      if ((*((_BYTE*)&v112_.v112 + v20) & 1) != 0) {
      LABEL_14:
        v22 = (char*)&v112_.v112 + v20;
        if ((*((_BYTE*)&v112_.v112 + v20 + 1) & 1) != 0) {
          goto LABEL_15;
        }
        goto LABEL_23;
      }
    LABEL_22:
      v97[v19++ - 1] = v20;
      v22 = (char*)&v112_.v112 + v20;
      if ((*((_BYTE*)&v112_.v112 + v20 + 1) & 1) != 0) {
      LABEL_15:
        if ((v22[2] & 1) != 0) {
          goto LABEL_16;
        }
        goto LABEL_24;
      }
    LABEL_23:
      v97[v19++ - 1] = v20 + 1;
      if ((v22[2] & 1) != 0) {
      LABEL_16:
        v23 = (char*)&v112_.v112 + v20;
        if ((*((_BYTE*)&v112_.v112 + v20 + 3) & 1) != 0) {
          goto LABEL_17;
        }
        goto LABEL_25;
      }
    LABEL_24:
      v97[v19++ - 1] = v20 + 2;
      v23 = (char*)&v112_.v112 + v20;
      if ((*((_BYTE*)&v112_.v112 + v20 + 3) & 1) != 0) {
      LABEL_17:
        if ((v23[4] & 1) == 0) {
          goto LABEL_26;
        }
        goto LABEL_9;
      }
    LABEL_25:
      v97[v19++ - 1] = v20 + 3;
      if ((v23[4] & 1) == 0) {
      LABEL_26:
        v97[v19++ - 1] = v20 + 4;
      }
    LABEL_9:
      v20 += 8;
      if (v20 - (v10 & 0xFFFFFFFFFFFFFFF8LL) == 3) {
        v18 = v20 - 3;
        if ((v10 & 7) != 0) {
          goto LABEL_30;
        }
        goto LABEL_32;
      }
    }
  }
  v18 = 0;
  v19 = 0;
  if ((v10 & 7) != 0) {
    do {
    LABEL_30:
      if ((*((_BYTE*)&v112_.v112 + v18) & 1) == 0) {
        v97[v19++ - 1] = v18;
      }
      ++v18;
      --v17;
    } while (v17 != 0);
  }
LABEL_32:
  v24 = a1 + 2;
  v25 = *(float*)&a1[17 * v11 + 2];
  v26 = *(float*)&a1[17 * v12 + 2];
  v27 = *(float*)&a1[17 * v13 + 2];
  v28 = *(float*)&a1[17 * v14 + 2];
  v29 = *(float*)&a1[17 * v15 + 2];
  v30 = *(float*)&a1[17 * v16 + 2];
  math_71ec60((void*)((__int64)v94), (__int64)a1, &v106_.v106, (__int64)&v96,
              v8),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v31 = v98_.v99;
  v112_.v115[363] = 0;
  v112_.v112 = v98_.v99;
  v112_.v113 = v98_.v99;
  memset_plt((void*)&v112_.v114, nullptr, 2916, v32),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if (v31 != 0) {
    v33 = v112_.v115;
    v34 = 0;
    v35 = 0;
    while (1) {
      v36 = 33 * v97[v35 - 1];
      if (v31 >= 8) {
        break;
      }
      v37 = 0;
      if ((v31 & 7) != 0) {
        goto LABEL_41;
      }
    LABEL_34:
      ++v35;
      v33 = (_QWORD*)((char*)v33 + 108);
      v34 += 27;
      if (v35 == v31) {
        goto LABEL_44;
      }
    }
    v38 = 0;
    v39 = v98_.v98;
    v40 = v33;
    do {
      v38 -= 8;
      v41 = *((_DWORD*)v24 + *(v39 - 3) + v36);
      v42 = *((_DWORD*)v24 + *(v39 - 2) + v36);
      v43 = *((_DWORD*)v24 + *(v39 - 1) + v36);
      v45 = *v39;
      v44 = v39[1];
      *(v40 - 2) = *((_DWORD*)v24 + *(v39 - 4) + v36);
      *(v40 - 1) = v41;
      v46 = *((_DWORD*)v24 + v45 + v36);
      v47 = *((_DWORD*)v24 + v44 + v36);
      v49 = v39[2];
      v48 = v39[3];
      *v40 = v42;
      v40[1] = v43;
      v39 += 8;
      v50 = *((_DWORD*)v24 + v49 + v36);
      v40[2] = v46;
      v40[3] = v47;
      v51 = *((_DWORD*)v24 + v48 + v36);
      v40[4] = v50;
      v40[5] = v51;
      v40 += 8;
    } while (-(__int64)(v31 & 0xFFFFFFFFFFFFFFF8LL) != v38);
    v37 = -v38;
    if ((v31 & 7) == 0) {
      goto LABEL_34;
    }
  LABEL_41:
    v52 = v37 + v34;
    v53 = &v97[v37 - 1];
    v54 = v31 & 7;
    v55 = (_DWORD*)&v112_.v115[-1] + v52;
    do {
      v56 = *v53++;
      --v54;
      *v55++ = *((_DWORD*)v24 + v56 + v36);
    } while (v54 != 0);
    goto LABEL_34;
  }
LABEL_44:
  memcpy_plt(v93, &v112_.v112, 2936),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  SdkRoutine_87a2d0(v93),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  memcpy_plt(&v112_.v112, v93, 2936),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  SdkRoutine_87a2e0((void*)(v95), v94, &v112_.v112),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v57 = v98_.v99;
  v112_.v116 = v98_.v99;
  memset_plt((void*)v112_.v117, nullptr, 648, v58),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if (v57 != 0) {
    v59 = v106_.v106;
    v60 = v106_.v107;
    v61 = v106_.v108;
    v62 = v106_.v109;
    v63 = v106_.v110;
    v64 = v106_.v111;
    if (v57 == 1) {
      v65 = 0;
    LABEL_50:
      v81 = &v112_.v117[3 * v65];
      v82 = 33 * v97[v65 - 1];
      v83 = *((_DWORD*)v24 + v82 + v60);
      *v81 = *((_DWORD*)v24 + v82 + v59);
      v81[1] = v83;
      v84 = *((_DWORD*)v24 + v82 + v62);
      v81[2] = *((_DWORD*)v24 + v82 + v61);
      v81[3] = v84;
      v85 = *((_DWORD*)v24 + v82 + v64);
      v81[4] = *((_DWORD*)v24 + v82 + v63);
      v81[5] = v85;
      goto LABEL_51;
    }
    v66 = 0;
    v67 = v97;
    v68 = v112_.v118;
    do {
      v70 = *(v67 - 1);
      v69 = *v67;
      v66 -= 2;
      v67 += 2;
      v70 *= 33;
      v71 = *((_DWORD*)v24 + v70 + v61);
      v72 = *((_DWORD*)v24 + v70 + v60);
      v73 = *((_DWORD*)v24 + v70 + v62);
      v74 = *((_DWORD*)v24 + v70 + v63);
      *(v68 - 5) = *((float*)v24 + v70 + v59);
      *((_DWORD*)v68 - 4) = v72;
      v75 = *((_DWORD*)v24 + v70 + v64);
      *((_DWORD*)v68 - 3) = v71;
      *((_DWORD*)v68 - 2) = v73;
      *((_DWORD*)v68 - 1) = v74;
      *(_DWORD*)v68 = v75;
      v76 = *((_DWORD*)v24 + 33 * v69 + v60);
      v77 = *((_DWORD*)v24 + 33 * v69 + v61);
      v78 = *((_DWORD*)v24 + 33 * v69 + v62);
      v68[1] = *((float*)v24 + 33 * v69 + v59);
      *((_DWORD*)v68 + 2) = v76;
      v79 = *((_DWORD*)v24 + 33 * v69 + v63);
      v80 = *((_DWORD*)v24 + 33 * v69 + v64);
      *((_DWORD*)v68 + 3) = v77;
      *((_DWORD*)v68 + 4) = v78;
      *((_DWORD*)v68 + 5) = v79;
      *((_DWORD*)v68 + 6) = v80;
      v68 += 12;
    } while (-(__int64)(v57 & 0xFFFFFFFFFFFFFFFELL) != v66);
    v65 = -v66;
    if ((v57 & 1) != 0) {
      goto LABEL_50;
    }
  }
LABEL_51:
  memcpy_plt(v92, &v112_.v116, 656),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  result = X8CALL_X0(void*, SdkRoutine_87a2f0((void*)(&v112_.v116), v95, v92)),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v58 = COERCE_AS(__typeof__(v58),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v87 = sqrtf(v26 - v112_.v118[0]);
  v88 = sqrtf(v27 - v112_.v118[7]);
  v89 = sqrtf(v28 - v112_.v118[14]);
  v90 = sqrtf(v29 - v112_.v118[21]);
  v91 = sqrtf(v30 - v112_.v118[28]);
  *a3 = sqrtf(v25 - *(float*)&v112_.v116);
  a3[1] = v87;
  a3[2] = v88;
  a3[3] = v89;
  a3[4] = v90;
  a3[5] = v91;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_728730(PSEUDO_X8 x8_, float* a1)
{

#pragma clang fp contract(off)
  float* a2 = (float*)PSEUDO_X8_VALUE(x8_);
  float v2;
  float v3;
  float v4;
  float v5;
  float v6;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
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
  float result;
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
  float v37;
  float v38;

  v2 = a1[12];
  v4 = *a1;
  v3 = a1[1];
  v5 = a1[2];
  v6 = a1[3];
  v9 = a1[4];
  v8 = a1[5];
  v10 = a1[6];
  v11 = a1[7];
  v12 = a1[8];
  v13 = a1[9];
  v15 = a1[10];
  v14 = a1[11];
  if (v2 >= 0x0.0p+0f) {
    v34 = a1[14];
    v35 = a1[15];
    v30 = a1[13];
  }
  else {
    v4 = -v4;
    v3 = -v3;
    v5 = -v5;
    v6 = -v6;
    v9 = -v9;
    v8 = -v8;
    v10 = -v10;
    v11 = -v11;
    v12 = -v12;
    v13 = -v13;
    v15 = -v15;
    v14 = -v14;
    v2 = -v2;
    v30 = -a1[13];
    v34 = -a1[14];
    v35 = -a1[15];
  }
  v32 = v3;
  v33 = v5;
  v31 = v6;
  v37 = v8;
  v38 = v10;
  v36 = v11;
  v27 = v13;
  v28 = v15;
  v29 = v14;
  v16 = sqrtf((float)((float)(v12 * v12) +
                      (float)((float)(v9 * v9) + (float)(v4 * v4))) +
              0x1.0000000000000p-126f);
  v17 = (float)((float)((float)(v13 * v12) + (float)(v13 * v12)) +
                (float)((float)((float)(v8 * v9) + (float)(v8 * v9)) +
                        (float)((float)((float)(v3 * v4) + (float)(v3 * v4)) +
                                0x0.0p+0f))) /
        (float)(v16 + v16);
  v18 = (float)((float)((float)(v14 * v12) + (float)(v14 * v12)) +
                (float)((float)((float)(v11 * v9) + (float)(v11 * v9)) +
                        (float)((float)((float)(v6 * v4) + (float)(v6 * v4)) +
                                0x0.0p+0f))) /
        (float)(v16 + v16);
  v19 = (float)((float)((float)(v15 * v12) + (float)(v15 * v12)) +
                (float)((float)((float)(v10 * v9) + (float)(v10 * v9)) +
                        (float)((float)((float)(v5 * v4) + (float)(v5 * v4)) +
                                0x0.0p+0f))) /
        (float)(v16 + v16);
  v20 = atan2f_plt(v16, v2);
  v21 = (float)(v2 * v2) + (float)(v16 * v16);
  v22 = v20 + v20;
  v23 = (float)((float)((float)(v2 * v17) - (float)(v30 * v16)) / v21) +
        (float)((float)((float)(v2 * v17) - (float)(v30 * v16)) / v21);
  v24 = (float)((float)((float)(v2 * v19) - (float)(v34 * v16)) / v21) +
        (float)((float)((float)(v2 * v19) - (float)(v34 * v16)) / v21);
  v25 = (float)((float)((float)(v2 * v18) - (float)(v35 * v16)) / v21) +
        (float)((float)((float)(v2 * v18) - (float)(v35 * v16)) / v21);
  *a2 = v22 * (float)(v4 / v16);
  a2[1] =
      (float)(v22 * (float)((float)((float)(v32 * v16) - (float)(v4 * v17)) /
                            (float)(v16 * v16))) +
      (float)((float)(v4 / v16) * v23);
  a2[2] =
      (float)(v22 * (float)((float)((float)(v33 * v16) - (float)(v4 * v19)) /
                            (float)(v16 * v16))) +
      (float)((float)(v4 / v16) * v24);
  a2[3] =
      (float)(v22 * (float)((float)((float)(v31 * v16) - (float)(v4 * v18)) /
                            (float)(v16 * v16))) +
      (float)((float)(v4 / v16) * v25);
  a2[4] = v22 * (float)(v9 / v16);
  a2[5] =
      (float)(v22 * (float)((float)((float)(v37 * v16) - (float)(v9 * v17)) /
                            (float)(v16 * v16))) +
      (float)((float)(v9 / v16) * v23);
  a2[6] =
      (float)(v22 * (float)((float)((float)(v38 * v16) - (float)(v9 * v19)) /
                            (float)(v16 * v16))) +
      (float)((float)(v9 / v16) * v24);
  a2[7] =
      (float)(v22 * (float)((float)((float)(v36 * v16) - (float)(v9 * v18)) /
                            (float)(v16 * v16))) +
      (float)((float)(v9 / v16) * v25);
  result =
      (float)(v22 * (float)((float)((float)(v29 * v16) - (float)(v12 * v18)) /
                            (float)(v16 * v16))) +
      (float)((float)(v12 / v16) * v25);
  a2[8] = v22 * (float)(v12 / v16);
  a2[9] =
      (float)(v22 * (float)((float)((float)(v27 * v16) - (float)(v12 * v17)) /
                            (float)(v16 * v16))) +
      (float)((float)(v12 / v16) * v23);
  a2[10] =
      (float)(v22 * (float)((float)((float)(v28 * v16) - (float)(v12 * v19)) /
                            (float)(v16 * v16))) +
      (float)((float)(v12 / v16) * v24);
  a2[11] = result;
  {
    result;
    return;
  }
}

unsigned __int64 math_730ec0(unsigned __int64* a1, unsigned __int64 a2,
                             unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v7;
  unsigned __int64* v8;
  unsigned __int64 v9;
  unsigned __int64* v10;
  unsigned __int64 v11;
  unsigned __int64* v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  char v18;
  unsigned __int64 v19;
  unsigned __int8 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  bool v23;
  unsigned __int64 v24;
  struct {
    unsigned __int64 v26[387];
    unsigned __int64 v27;
    __int64 v28;
  } v26_;

  v7 = a1[387];
  if (2 * a1[388] + 2 > v7) {
    v8 = v26_.v26;
    memset_plt((void*)v26_.v26, nullptr, 3112, a4);
    v9 = 0;
    v26_.v27 = 128;
    do {
      *v8 = 0;
      v8 += 3;
      ++v9;
    } while (v9 < v26_.v27);
    v26_.v26[3 * v26_.v27] = -1;
    math_7312c0(v26_.v26, a1);
    math_731360(a1, v26_.v26);
    if (v26_.v28 != 0) {
      v10 = v26_.v26;
      if (v26_.v26[0] == 0) {
        v10 = v26_.v26;
        do {
          v11 = v10[3];
          v10 += 3;
        } while (v11 == 0);
      }
      v12 = &v26_.v26[3 * v26_.v27];
      if (*v12 == 0) {
        do {
          v13 = v12[3];
          v12 += 3;
        } while (v13 == 0);
      }
      while (v10 != v12) {
        *v10 = 0;
        do {
          v14 = v10[3];
          v10 += 3;
        } while (v14 == 0);
      }
    }
    v7 = a1[387];
  }
  v15 = &a1[3 * ((v7 - 1) & a2)];
  v16 = *v15;
  if (*v15 != 0) {
    v17 = 1;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    do {
      if (v16 == v17) {
        if (v15[1] == a2) {
          if ((v18 & 1) == 0) {
            v20 = (unsigned __int8)v15;
            v19 = (unsigned __int64)v15 >> 8;
          }
          return v20 | (v19 << 8);
        }
      }
      else if (v16 >= v17) {
        v16 = v17;
      }
      else {
        v21 = v15[1];
        v22 = v15[2];
        v23 = (v18 & 1) == 0;
        *v15 = v17;
        v15[1] = a2;
        v18 = 1;
        if (v23) {
          v20 = (unsigned __int8)v15;
        }
        if (v23) {
          v19 = (unsigned __int64)v15 >> 8;
        }
        v15[2] = a3;
        a3 = v22;
        a2 = v21;
      }
      v15 += 3;
      v17 = v16 + 1;
      if (v15 == &a1[3 * a1[387]]) {
        v15 = a1;
      }
      v16 = *v15;
    } while (*v15 != 0);
    *v15 = v17;
    v15[1] = a2;
    v15[2] = a3;
    ++a1[388];
    if ((v18 & 1) == 0) {
      goto LABEL_34;
    }
  }
  else {
    v15[2] = a3;
    *v15 = 1;
    v15[1] = a2;
    ++a1[388];
  LABEL_34:
    if (*v15 == 0) {
      do {
        v24 = v15[3];
        v15 += 3;
      } while (v24 == 0);
    }
    v19 = (unsigned __int64)v15 >> 8;
    v20 = (unsigned __int8)v15;
  }
  return v20 | (v19 << 8);
}

unsigned __int64 math_731120(unsigned __int64 result, __int64 a2, __int64 a3,
                             unsigned __int64 a4)
{
  unsigned __int64* v6;
  unsigned __int64* v7;
  unsigned __int64 v8;
  unsigned __int64* v9;
  unsigned __int64 v10;
  unsigned __int64* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64* v14;
  unsigned __int64 v15;
  unsigned __int64* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  struct {
    unsigned __int64 v19[387];
    unsigned __int64 v20;
    __int64 v21;
  } v19_;

  if (*(_QWORD*)(result + 3096) < (unsigned __int64)(2 * a2)) {
    v6 = (unsigned __int64*)result;
    v7 = v19_.v19;
    memset_plt((void*)v19_.v19, nullptr, 3112, a4);
    v8 = 0;
    v19_.v20 = 128;
    do {
      *v7 = 0;
      v7 += 3;
      ++v8;
    } while (v8 < v19_.v20);
    v19_.v19[3 * v19_.v20] = -1;
    math_7312c0(v19_.v19, v6);
    if (v6[388] != 0) {
      v9 = v6;
      if (*v6 == 0) {
        v9 = v6;
        do {
          v10 = v9[3];
          v9 += 3;
        } while (v10 == 0);
      }
      v11 = &v6[3 * v6[387]];
      if (*v11 == 0) {
        do {
          v12 = v11[3];
          v11 += 3;
        } while (v12 == 0);
      }
      while (v9 != v11) {
        *v9 = 0;
        do {
          v13 = v9[3];
          v9 += 3;
        } while (v13 == 0);
      }
      v6[388] = 0;
    }
    result = math_7312c0(v6, v19_.v19);
    if (v19_.v21 != 0) {
      v14 = v19_.v19;
      if (v19_.v19[0] == 0) {
        v14 = v19_.v19;
        do {
          v15 = v14[3];
          v14 += 3;
        } while (v15 == 0);
      }
      v16 = &v19_.v19[3 * v19_.v20];
      if (*v16 == 0) {
        do {
          v17 = v16[3];
          v16 += 3;
        } while (v17 == 0);
      }
      while (v14 != v16) {
        *v14 = 0;
        do {
          v18 = v14[3];
          v14 += 3;
        } while (v18 == 0);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
