#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BaseNx_283db0(_QWORD);
__int64 GameRoutine_283dc0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_288600(_QWORD);
__int64* nn_atk_detail_283380(__int64* result, __int64 a2, __int64 a3, int* a4,
                              char a5);

__int64* nn_atk_detail_283380(__int64* result, __int64 a2, __int64 a3, int* a4,
                              char a5)
{
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;

  v6 = result;
  if (*a4 < 1) {
  LABEL_20:
    if (a4[2] >= 5) {
      goto LABEL_30;
    }
  LABEL_21:
    if (*((_BYTE*)a4 + 4) == 1) {
      goto LABEL_31;
    }
  LABEL_22:
    if (*((_BYTE*)a4 + 5) != 1) {
      return result;
    }
    goto LABEL_23;
  }
  *result = a2;
  v7 = a2 + 16;
  v8 = *a4;
  *(_QWORD*)a2 = a2 + 16;
  *(_DWORD*)(a2 + 8) = v8;
  v9 = a2 + 16 + 80 * v8;
  if ((_DWORD)v8 != 0) {
    v10 = 80 * v8 - 80;
    if ((~(v10 / 0x50) & 3) != 0) {
      v11 = a2 + 36;
      v12 = ((unsigned __int8)(v10 / 0x50) + 1) & 3;
      do {
        *(_DWORD*)(v11 + 4) = 1065353216;
        *(_QWORD*)(v11 - 4) = 0x3F8000003F800000LL;
        --v12;
        *(_QWORD*)(v11 - 12) = 0x3F8000003F800000LL;
        *(_DWORD*)(v11 + 32) = 1065353216;
        *(_QWORD*)(v11 + 16) = 0x3F8000003F800000LL;
        *(_QWORD*)(v11 + 24) = 0x3F8000003F800000LL;
        *(_QWORD*)(v11 + 8) = 0x3F8000003F800000LL;
        v11 += 80;
      } while (v12 != 0);
      v7 = v11 - 20;
    }
    if (v10 >= 0xF0) {
      do {
        *(_QWORD*)(v7 + 28) = 0x3F8000003F800000LL;
        *(_DWORD*)(v7 + 24) = 1065353216;
        *(_QWORD*)(v7 + 8) = 0x3F8000003F800000LL;
        *(_QWORD*)(v7 + 16) = 0x3F8000003F800000LL;
        *(_DWORD*)(v7 + 52) = 1065353216;
        *(_QWORD*)(v7 + 44) = 0x3F8000003F800000LL;
        *(_QWORD*)(v7 + 36) = 0x3F8000003F800000LL;
        *(_QWORD*)(v7 + 88) = 0x3F8000003F800000LL;
        *(_QWORD*)(v7 + 96) = 0x3F8000003F800000LL;
        *(_QWORD*)(v7 + 120) = 0x3F8000003F800000LL;
        *(_QWORD*)(v7 + 128) = 0x3F8000003F800000LL;
        *(_QWORD*)(v7 + 104) = 0x3F8000003F800000LL;
        *(_QWORD*)(v7 + 112) = 0x3F8000003F800000LL;
        *(_QWORD*)(v7 + 168) = 0x3F8000003F800000LL;
        *(_QWORD*)(v7 + 176) = 0x3F8000003F800000LL;
        *(_QWORD*)(v7 + 208) = 0x3F8000003F800000LL;
        *(_DWORD*)(v7 + 200) = 1065353216;
        *(_DWORD*)(v7 + 204) = 1065353216;
        *(_QWORD*)(v7 + 184) = 0x3F8000003F800000LL;
        *(_QWORD*)(v7 + 192) = 0x3F8000003F800000LL;
        *(_QWORD*)(v7 + 248) = 0x3F8000003F800000LL;
        *(_QWORD*)(v7 + 256) = 0x3F8000003F800000LL;
        *(_QWORD*)(v7 + 280) = 0x3F8000003F800000LL;
        *(_QWORD*)(v7 + 288) = 0x3F8000003F800000LL;
        *(_QWORD*)(v7 + 264) = 0x3F8000003F800000LL;
        *(_QWORD*)(v7 + 272) = 0x3F8000003F800000LL;
        v7 += 320;
      } while (v7 != v9);
    }
  }
  if ((a5 & 1) == 0) {
    a2 = v9;
    goto LABEL_20;
  }
  v13 = v9 + 32;
  result[1] = v9;
  result[2] = v9 + 16;
  v14 = *a4;
  *(_QWORD*)v9 = v9 + 32;
  *(_DWORD*)(v9 + 8) = v14;
  v15 = 24 * v14;
  v16 = v9 + 32 + 24 * v14;
  if ((_DWORD)v14 != 0) {
    v17 = (v15 - 24) / 0x18uLL;
    if ((~(_BYTE)v17 & 7) != 0) {
      v18 = ((_BYTE)v17 + 1) & 7;
      do {
        *(_DWORD*)v13 = 1065353216;
        *(_QWORD*)(v13 + 4) = 0;
        --v18;
        *(_QWORD*)(v13 + 12) = 0;
        *(_DWORD*)(v13 + 20) = 0;
        v13 += 24;
      } while (v18 != 0);
    }
    if ((unsigned __int64)(v15 - 24) >= 0xA8) {
      do {
        *(_DWORD*)v13 = 1065353216;
        *(_QWORD*)(v13 + 4) = 0;
        *(_QWORD*)(v13 + 12) = 0;
        *(_QWORD*)(v13 + 20) = 0x3F80000000000000LL;
        *(_QWORD*)(v13 + 28) = 0;
        *(_QWORD*)(v13 + 36) = 0;
        *(_QWORD*)(v13 + 44) = 0x3F80000000000000LL;
        *(_QWORD*)(v13 + 52) = 0;
        *(_QWORD*)(v13 + 60) = 0;
        *(_QWORD*)(v13 + 68) = 0x3F80000000000000LL;
        *(_QWORD*)(v13 + 76) = 0;
        *(_QWORD*)(v13 + 84) = 0;
        *(_QWORD*)(v13 + 92) = 0x3F80000000000000LL;
        *(_QWORD*)(v13 + 100) = 0;
        *(_QWORD*)(v13 + 108) = 0;
        *(_QWORD*)(v13 + 116) = 0x3F80000000000000LL;
        *(_QWORD*)(v13 + 124) = 0;
        *(_QWORD*)(v13 + 132) = 0;
        *(_DWORD*)(v13 + 140) = 0;
        *(_DWORD*)(v13 + 144) = 1065353216;
        *(_QWORD*)(v13 + 148) = 0;
        *(_QWORD*)(v13 + 156) = 0;
        *(_QWORD*)(v13 + 164) = 0x3F80000000000000LL;
        *(_QWORD*)(v13 + 172) = 0;
        *(_QWORD*)(v13 + 180) = 0;
        *(_DWORD*)(v13 + 188) = 0;
        v13 += 192;
      } while (v13 != v16);
    }
  }
  v19 = result[2];
  v20 = *a4;
  *(_QWORD*)v19 = v16;
  *(_DWORD*)(v19 + 8) = v20;
  if ((_DWORD)v20 != 0) {
    v21 = 3 * v20;
    v22 = 24 * v20 - 24;
    if ((~(v22 / 0x18) & 7) != 0) {
      v27 = ((unsigned __int8)(v22 / 0x18) + 1) & 7;
      v23 = v16;
      do {
        *(_DWORD*)v23 = 1065353216;
        *(_QWORD*)(v23 + 4) = 0;
        --v27;
        *(_QWORD*)(v23 + 12) = 0;
        *(_DWORD*)(v23 + 20) = 0;
        v23 += 24;
      } while (v27 != 0);
    }
    else {
      v23 = v16;
    }
    if (v22 >= 0xA8) {
      v28 = v16 + 8 * v21;
      do {
        *(_DWORD*)v23 = 1065353216;
        *(_QWORD*)(v23 + 4) = 0;
        *(_QWORD*)(v23 + 12) = 0;
        *(_QWORD*)(v23 + 20) = 0x3F80000000000000LL;
        *(_QWORD*)(v23 + 28) = 0;
        *(_QWORD*)(v23 + 36) = 0;
        *(_QWORD*)(v23 + 44) = 0x3F80000000000000LL;
        *(_QWORD*)(v23 + 52) = 0;
        *(_QWORD*)(v23 + 60) = 0;
        *(_QWORD*)(v23 + 68) = 0x3F80000000000000LL;
        *(_QWORD*)(v23 + 76) = 0;
        *(_QWORD*)(v23 + 84) = 0;
        *(_QWORD*)(v23 + 92) = 0x3F80000000000000LL;
        *(_QWORD*)(v23 + 100) = 0;
        *(_QWORD*)(v23 + 108) = 0;
        *(_QWORD*)(v23 + 116) = 0x3F80000000000000LL;
        *(_QWORD*)(v23 + 124) = 0;
        *(_QWORD*)(v23 + 132) = 0;
        *(_DWORD*)(v23 + 140) = 0;
        *(_DWORD*)(v23 + 144) = 1065353216;
        *(_QWORD*)(v23 + 148) = 0;
        *(_QWORD*)(v23 + 156) = 0;
        *(_QWORD*)(v23 + 164) = 0x3F80000000000000LL;
        *(_QWORD*)(v23 + 172) = 0;
        *(_QWORD*)(v23 + 180) = 0;
        *(_DWORD*)(v23 + 188) = 0;
        v23 += 192;
      } while (v23 != v28);
    }
  }
  a2 = v16 + v15;
  if (a4[2] < 5) {
    goto LABEL_21;
  }
LABEL_30:
  result[3] = a2;
  v29 = a4[2];
  *(_QWORD*)a2 = a2 + 16;
  v29 -= 4;
  *(_DWORD*)(a2 + 8) = v29;
  a2 += 16 + 4 * v29;
  if (*((_BYTE*)a4 + 4) != 1) {
    goto LABEL_22;
  }
LABEL_31:
  result[4] = a2;
  *(_BYTE*)(a2 + 192) = 0;
  v30 = a2 + 216;
  *(_QWORD*)(a2 + 200) = 0;
  v31 = BaseNx_283db0((unsigned int)a4[2]);
  result = (__int64*)GameRoutine_283dc0(v6[4], v30, v31, (unsigned int)a4[2]);
  a2 = v30 + v31;
  if (*((_BYTE*)a4 + 5) == 1) {
  LABEL_23:
    v6[5] = a2;
    *(_QWORD*)a2 = 0;
    v24 = a2;
    *(_DWORD*)(a2 + 8) = 0;
    *(_BYTE*)(a2 + 16) = 0;
    *(_DWORD*)(a2 + 20) = 1065353216;
    GameRoutine_288600((unsigned int)a4[2]);
    v25 = v6[5];
    v26 = a4[2];
    *(_QWORD*)v25 = v24 + 24;
    *(_DWORD*)(v25 + 8) = v26;
    return (_QWORD*)(((_UNKNOWN*)0x0LL) + 1);
  }
  return result;
}

#pragma GCC visibility pop
