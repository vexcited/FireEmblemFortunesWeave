#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

void __attribute__((noreturn)) NgxRoutine_33410(_QWORD);
__int64 NgxRoutine_420(_QWORD);
__int64 NgxRoutine_430(_QWORD, _QWORD);
__int64 NgxRoutine_76570(_QWORD);
__int64 NgxRoutine_97540(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 NgxHr_941e0(__int64 a1, __int64* a2, _QWORD* a3, __int64* a4)
{
  unsigned __int64 v7;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 result;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  _WORD* v24;
  int v25;
  __int64 v26;
  _WORD* v27;
  __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int16 v36;
  _QWORD v37[3];
  __int64 v38;

  v7 = **(_QWORD**)(a1 + 8);
  *a3 = *(_QWORD*)a1;
  if (a3 == (_QWORD*)a1) {
    a3[4] = *(_QWORD*)(a1 + 32);
  }
  else {
    NgxRoutine_76570(a3 + 1);
    a3[4] = *(_QWORD*)(a1 + 32);
    NgxRoutine_76570(a3 + 5);
  }
  v37[0] = v7 >> 5;
  v37[1] = 32;
  v37[2] = 64;
  v9 = NgxRoutine_97540(a3 + 1, v37, &v38, 3);
  v11 = *a2;
  v10 = a2[1];
  v12 = v10 - *a2;
  if (v10 == *a2) {
    v14 = nullptr;
    v16 = 0;
    result = *a4;
    if (*a4 != 0) {
    LABEL_12:
      v19 = a4[2];
      a4[1] = result;
      result = NgxRoutine_430(result, v19 - result);
    }
  }
  else {
    if (v12 < 0) {
      NgxRoutine_33410(v9);
    }
    v13 = NgxRoutine_420(v10 - *a2);
    v14 = (_QWORD*)(v13 + v12);
    v15 = v12 & 7;
    v16 = v13;
    v17 = (_QWORD*)v13;
    if ((v12 & 7) != 0) {
      v17 = (_QWORD*)v13;
      do {
        *(_BYTE*)v17 = 0;
        v17 = (_QWORD*)((char*)v17 + 1);
        // Keeps clang from turning the loops into memset calls.
        __asm__ volatile("" : "+r"(v17));
        --v15;
      } while (v15 != 0);
    }
    if ((unsigned __int64)(v11 - v10) <= 0xFFFFFFFFFFFFFFF8LL) {
      do {
        *v17++ = 0;
        __asm__ volatile("" : "+r"(v17));
      } while (v17 != v14);
    }
    result = *a4;
    if (*a4 != 0) {
      goto LABEL_12;
    }
  }
  *a4 = v16;
  a4[1] = (__int64)v14;
  a4[2] = (__int64)v14;
  if (v7 >= 0x20) {
    v20 = 0;
    v21 = 0;
    v22 = *a2 + 8;
    do {
      v23 = 0;
      v24 = (_WORD*)v22;
      do {
        v25 = 0;
        v26 = 0;
        v27 = v24;
        result = (4 * (v23 & 7)) | 1;
        do {
          v28 = (unsigned int)v26 >> 4;
          v29 = v25 & 4;
          v26 += 8;
          v25 += 4;
          v30 = v16 + 2 * v20 + ((v28 | (v23 >> 2) & 4) << 9);
          v31 = v29 | (unsigned int)(v23 & 8);
          v32 = v30 + 64 * (v23 & 7);
          *(_WORD*)(v32 + v31) = *(v27 - 4);
          *(_WORD*)(v32 + v31 + 2) = *(v27 - 3);
          v33 = v30 + 16 * result;
          *(_WORD*)(v33 + v31) = *(v27 - 2);
          *(_WORD*)(v33 + v31 + 2) = *(v27 - 1);
          v34 = v30 + 16 * ((4 * (v23 & 7)) | 2);
          v35 = v30 + 16 * ((4 * (v23 & 7)) | 3);
          *(_WORD*)(v34 + v31) = *v27;
          *(_WORD*)(v34 + v31 + 2) = v27[1];
          *(_WORD*)(v35 + v31) = v27[2];
          v36 = v27[3];
          v27 += 8;
          *(_WORD*)(v35 + v31 + 2) = v36;
        } while (v26 != 64);
        ++v23;
        v24 += 64;
      } while (v23 != 32);
      v20 += 2048;
      ++v21;
      v22 += 4096;
    } while (v21 != v7 >> 5);
  }
  return result;
}

#pragma GCC visibility pop
