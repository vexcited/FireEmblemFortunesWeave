#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 peak_detector_FindPeakPeriod_plt(_QWORD, _QWORD, _QWORD);
__int64 peak_detector_FindPeakPeriod(__int64 result, __int64 a2,
                                     unsigned int* a3);
__int64* peak_detector_FindPeaks(__int64* result, __int64* a2, unsigned int a3,
                                 unsigned int a4);

__int64 peak_detector_FindPeakPeriod(__int64 result, __int64 a2,
                                     unsigned int* a3)
{
  int v3;
  unsigned __int64 v4;
  unsigned int v5;
  unsigned int v6;
  float v9;
  unsigned int v10;
  float v11;
  float v12;
  float v13;
  float v14;
  _BOOL4 v16;
  unsigned int v17;
  float v18;
  float v19;
  float v20;
  float v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  float v28[7];
  _BOOL4 v29;

  v3 = *(_DWORD*)result;
  v4 = *(unsigned int*)(result + 4);
  v5 = *(_DWORD*)(result + 16);
  v6 = *(_DWORD*)(result + 20);
  v9 = *(float*)(result + 24);
  v10 = *(_DWORD*)(result + 8);
  v11 = *(float*)(result + 12);
  v12 = (float)(unsigned int)(v4 - 1);
  v13 = (float)((float)(1.0 / v12) * (float)v6) -
        (float)((float)((float)(1.0 / v12) * (float)v5) *
                (float)((float)(1.0 / v12) * (float)v5));
  v14 = sqrtf(v13);
  v16 = v13 <= 0.0 || v4 < 3;
  v29 = v16;
  while (1) {
    v19 = v11;
    if ((unsigned int)v4 >= a3[2]) {
      v20 = 0.0;
      if (!v29) {
        v20 = v14;
      }
      v21 = (float)(v20 * v12) / v9;
      if (v21 < *(float*)(a2 + 52)) {
        *(_DWORD*)(a2 + 24) = v3;
        *(_DWORD*)(a2 + 28) = v4;
        *(_DWORD*)(a2 + 32) = v10;
        *(float*)(a2 + 36) = v11;
        *(_DWORD*)(a2 + 40) = v5;
        *(_DWORD*)(a2 + 44) = v6;
        *(float*)(a2 + 48) = v9;
        *(float*)(a2 + 52) = v21;
      }
    }
    v22 = *(__int64**)(a2 + 8);
    v23 = v22[1];
    if (v23 == LODWORD(v11) || v4 - LODWORD(v11) + v23 < a3[2]) {
      return result;
    }
    ++LODWORD(v11);
    if ((_DWORD)v4 == 0) {
      v17 = 0;
      v18 = 0.0;
      goto LABEL_9;
    }
    v24 = *v22;
    v25 = *(unsigned int*)(*v22 + 4LL * v10);
    v26 = *(unsigned int*)(v24 + 4LL * LODWORD(v19));
    v17 = *(_DWORD*)(**(_QWORD**)(a2 + 16) + 4 * v26) -
          *(_DWORD*)(**(_QWORD**)(a2 + 16) + 4 * v25);
    if (v17 >= *a3 && v17 <= a3[1]) {
      v18 = fmaxf(
          (float)(*(float*)(**(_QWORD**)a2 + 4 * v25) +
                  (float)((float)((float)(*(float*)(**(_QWORD**)a2 + 4 * v26) -
                                          *(float*)(**(_QWORD**)a2 + 4 * v25)) *
                                  (float)(v17 >> 1)) /
                          (float)v17)) -
              *(float*)(**(_QWORD**)a2 +
                        4 * ((unsigned __int64)(v26 + v25) >> 1)),
          0.0);
    LABEL_9:
      v28[2] = v19;
      v28[3] = v11;
      LODWORD(v28[0]) = (1 << SLOBYTE(v19)) | v3;
      LODWORD(v28[1]) = v4 + 1;
      v28[6] = v9 + v18;
      LODWORD(v28[4]) = v17 + v5;
      LODWORD(v28[5]) = v6 + v17 * v17;
      result = peak_detector_FindPeakPeriod_plt(v28, a2, a3);
    }
  }
}

__int64* peak_detector_FindPeaks(__int64* result, __int64* a2, unsigned int a3,
                                 unsigned int a4)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  unsigned int v9;
  float v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned int v13;
  float v14;
  float v15;
  float v16;
  unsigned __int64 v17;
  float v18;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  float* v24;
  float v25;
  unsigned __int64 v26;
  float v27;

  result[1] = 0;
  v4 = 2 * a3;
  v5 = a2[1];
  if (v5 > v4) {
    v6 = *result;
    v7 = a3 + 1;
    v8 = 0;
    v9 = a3;
    v10 = (float)a3 * 0.001;
    v11 = (unsigned __int64)(float)(60000000.0 / (float)((float)a4 * 220.0));
    do {
      v12 = *a2;
      v13 = v7;
      v14 = *(float*)(*a2 + 4LL * v9);
      v15 = *(float*)(*a2 + 4 * v4);
      v16 = *(float*)(*a2 + 4LL * (v9 - 1));
      v17 = v9 + 1;
      v18 = *(float*)(*a2 + 4LL * (unsigned int)v17);
      if (v16 >= v14) {
        if (v16 > v14 || v18 >= v14) {
          goto LABEL_3;
        }
      }
      else if (v18 > v14) {
        goto LABEL_3;
      }
      v20 = v9;
      v21 = v11 + v9;
      if (v5 < v21) {
        v21 = v5;
      }
      if (v21 <= v17) {
      LABEL_18:
        v26 = v9 - v11;
        if (v9 >= v11 && v26 != 0 && v26 < v5) {
          if (v5 < v9) {
            v20 = v5;
          }
          while (v14 >= *(float*)(v12 + 4 * v26)) {
            if (++v26 >= v20) {
              goto LABEL_25;
            }
          }
        }
        else {
        LABEL_25:
          v27 = v10 + v15;
          if (v14 > (float)(v10 + *(float*)(*a2 + 4LL * (v9 - a3))) &&
              v14 > v27) {
            if (v8 == result[2]) {
              return result;
            }
            *(_DWORD*)(v6 + 4 * v8++) = v9;
            result[1] = v8;
            v5 = a2[1];
          }
        }
      }
      else {
        v22 = 4LL * v7;
        v23 = v21 - v7;
        v24 = (float*)(v12 + v22);
        while (1) {
          v25 = *v24++;
          if (v14 < v25) {
            break;
          }
          if (--v23 == 0) {
            goto LABEL_18;
          }
        }
      }
    LABEL_3:
      v4 = (unsigned int)v17 + a3;
      v7 = v13 + 1;
      ++v9;
    } while (v5 > v4);
  }
  return result;
}

#pragma GCC visibility pop
