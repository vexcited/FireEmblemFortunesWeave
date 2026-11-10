#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 nndetailImageJpeg_jdiv_round_up_plt(_QWORD, _QWORD);
__int64 jdinput_44900(__int64 a1);

__int64 jdinput_44900(__int64 a1)
{
  int v1;
  __int64 v3;
  unsigned int v4;
  int v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  int v12;
  __int64 v13;
  unsigned int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  _DWORD* v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  __int64 v26;
  unsigned int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 result;

  v1 = *(_DWORD*)(a1 + 448);
  if (v1 != 1) {
    if ((unsigned int)(v1 - 5) <= 0xFFFFFFFB) {
      *(_DWORD*)(*(_QWORD*)a1 + 40LL) = 27;
      *(_DWORD*)(*(_QWORD*)a1 + 44LL) = *(_DWORD*)(a1 + 448);
      *(_DWORD*)(*(_QWORD*)a1 + 48LL) = 4;
      (**(void (***)(__int64))a1)(a1);
    }
    v12 = nndetailImageJpeg_jdiv_round_up_plt(*(unsigned int*)(a1 + 56),
                                              8LL * *(int*)(a1 + 416));
    v13 = *(int*)(a1 + 420);
    *(_DWORD*)(a1 + 488) = v12;
    v14 =
        nndetailImageJpeg_jdiv_round_up_plt(*(unsigned int*)(a1 + 60), 8 * v13);
    v15 = *(_DWORD*)(a1 + 448);
    *(_QWORD*)(a1 + 492) = v14;
    if (v15 < 1) {
      goto LABEL_35;
    }
    v16 = a1 + 500;
    v17 = 0;
    while (1) {
      v18 = *(_DWORD**)(a1 + 456 + 8 * v17);
      v19 = v18[2];
      v20 = v18[3];
      v21 = v18[8];
      v22 = v20 * v19;
      v23 = v18[9] * v19;
      v18[14] = v19;
      v18[15] = v20;
      v18[16] = v20 * v19;
      v18[17] = v23;
      if (v18[7] % v19 != 0) {
        v19 = v18[7] % v19;
      }
      if (v21 % v20 != 0) {
        v20 = v21 % v20;
      }
      v18[18] = v19;
      v18[19] = v20;
      if (*(_DWORD*)(a1 + 496) + v22 >= 11) {
        *(_DWORD*)(*(_QWORD*)a1 + 40LL) = 14;
        (**(void (***)(__int64))a1)(a1);
      }
      if (v22 >= 1) {
        v24 = v22 & 7;
        if ((v22 & 7) != 0) {
          break;
        }
        v25 = v22;
        if ((unsigned int)v22 >= 8) {
          goto LABEL_32;
        }
      }
    LABEL_18:
      v3 = *(int*)(a1 + 448);
      if (++v17 >= v3) {
        goto LABEL_5;
      }
    }
    v25 = v22 & 0x7FFFFFF8;
    do {
      v26 = *(int*)(a1 + 496);
      --v24;
      *(_DWORD*)(a1 + 496) = v26 + 1;
      *(_DWORD*)(v16 + 4 * v26) = v17;
    } while (v24 != 0);
    if ((unsigned int)v22 < 8) {
      goto LABEL_18;
    }
  LABEL_32:
    v27 = v25 - 1;
    do {
      v28 = *(int*)(a1 + 496);
      v27 -= 8;
      *(_DWORD*)(a1 + 496) = v28 + 1;
      *(_DWORD*)(v16 + 4 * v28) = v17;
      v29 = *(int*)(a1 + 496);
      *(_DWORD*)(a1 + 496) = v29 + 1;
      *(_DWORD*)(v16 + 4 * v29) = v17;
      v30 = *(int*)(a1 + 496);
      *(_DWORD*)(a1 + 496) = v30 + 1;
      *(_DWORD*)(v16 + 4 * v30) = v17;
      v31 = *(int*)(a1 + 496);
      *(_DWORD*)(a1 + 496) = v31 + 1;
      *(_DWORD*)(v16 + 4 * v31) = v17;
      v32 = *(int*)(a1 + 496);
      *(_DWORD*)(a1 + 496) = v32 + 1;
      *(_DWORD*)(v16 + 4 * v32) = v17;
      v33 = *(int*)(a1 + 496);
      *(_DWORD*)(a1 + 496) = v33 + 1;
      *(_DWORD*)(v16 + 4 * v33) = v17;
      v34 = *(int*)(a1 + 496);
      *(_DWORD*)(a1 + 496) = v34 + 1;
      *(_DWORD*)(v16 + 4 * v34) = v17;
      v35 = *(int*)(a1 + 496);
      *(_DWORD*)(a1 + 496) = v35 + 1;
      *(_DWORD*)(v16 + 4 * v35) = v17;
    } while (v27 < 0xFFFFFFFE);
    goto LABEL_18;
  }
  v3 = *(_QWORD*)(a1 + 456);
  *(_DWORD*)(a1 + 488) = *(_DWORD*)(v3 + 28);
  v4 = *(_DWORD*)(v3 + 32);
  *(_DWORD*)(a1 + 492) = v4;
  *(_QWORD*)(v3 + 56) = 0x100000001LL;
  v5 = *(_DWORD*)(v3 + 36);
  *(_DWORD*)(v3 + 64) = 1;
  *(_DWORD*)(v3 + 68) = v5;
  v6 = v4 % *(_DWORD*)(v3 + 12);
  if (v6 == 0) {
    v6 = *(_DWORD*)(v3 + 12);
  }
  *(_DWORD*)(v3 + 72) = 1;
  *(_DWORD*)(v3 + 76) = v6;
  *(_QWORD*)(a1 + 496) = 1;
  LODWORD(v3) = *(_DWORD*)(a1 + 448);
LABEL_5:
  if ((int)v3 >= 1) {
    v7 = a1 + 208;
    v8 = 0;
    do {
      v10 = *(_QWORD*)(a1 + 8 * v8 + 456);
      if (*(_QWORD*)(v10 + 80) == 0) {
        v11 = *(_DWORD*)(v10 + 16);
        if (v11 > 3 || *(_QWORD*)(v7 + 8LL * v11) == 0) {
          *(_DWORD*)(*(_QWORD*)a1 + 40LL) = 54;
          *(_DWORD*)(*(_QWORD*)a1 + 44LL) = v11;
          (**(void (***)(__int64))a1)(a1);
        }
        v9 = (**(__int64 (***)(__int64, __int64, __int64))(a1 + 8))(a1, 1, 132);
        memcpy_plt(v9, *(_QWORD*)(v7 + 8LL * (int)v11), 132);
        *(_QWORD*)(v10 + 80) = v9;
        LODWORD(v3) = *(_DWORD*)(a1 + 448);
      }
      ++v8;
    } while (v8 < (int)v3);
  }
LABEL_35:
  (**(void (***)(__int64))(a1 + 624))(a1);
  result = (**(__int64 (***)(__int64))(a1 + 592))(a1);
  **(_QWORD**)(a1 + 608) = *(_QWORD*)(*(_QWORD*)(a1 + 592) + 8LL);
  return result;
}

#pragma GCC visibility pop
