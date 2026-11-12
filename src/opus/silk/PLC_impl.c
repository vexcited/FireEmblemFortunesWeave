#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 MovieRoutine_4be00(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 silk_PLC(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int a5);

__int64 silk_PLC(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int a5)
{
  int v5;
  int v7;
  __int64 result;
  int v9;
  int v10;
  __int64 v11;
  int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  int v18;
  int v19;
  int v20;
  __int16* v21;
  int v22;
  __int64* v23;
  __int64 v24;
  bool v25;
  unsigned int v26;
  __int64 v28;

  v5 = *(_DWORD*)(a1 + 2316);
  if (v5 != *(_DWORD*)(a1 + 4276)) {
    v7 = *(_DWORD*)(a1 + 2328);
    *(_DWORD*)(a1 + 4276) = v5;
    *(_DWORD*)(a1 + 4196) = v7 << 7;
    *(_QWORD*)(a1 + 4268) = 0x1000000010000LL;
    *(_QWORD*)(a1 + 4280) = 0x1400000002LL;
  }
  if (a4 != 0) {
    result = MovieRoutine_4be00(a1, a2, a3, a5);
    ++*(_DWORD*)(a1 + 4184);
    return result;
  }
  v9 = *(char*)(a1 + 2789);
  *(_DWORD*)(a1 + 4188) = v9;
  if (v9 == 2) {
    v10 = *(_DWORD*)(a1 + 2332);
    v11 = *(int*)(a1 + 2324);
    if ((_DWORD)v11 != 0 && (v12 = *(_DWORD*)(a2 + 4 * (v11 - 1))) > 0) {
      v13 = 0;
      v14 = v10;
      v15 = a2 + 96;
      v16 = (_QWORD*)(a1 + 4200);
      v17 = 1LL - (unsigned int)v11;
      v18 = v11 - 1;
      v19 = ((_DWORD)v11 << 16) - 0x10000;
      v20 = 5 * v11 - 5;
      do {
        v21 = (__int16*)(v15 + 2LL * v20);
        v22 = v21[1] + *v21 + v21[2] + v21[3] + v21[4];
        if (v22 > v13) {
          v23 = (__int64*)(v15 + 10LL * (v19 >> 16));
          v24 = *v23;
          *(_WORD*)(a1 + 4208) = *((_WORD*)v23 + 4);
          *v16 = v24;
          *(_DWORD*)(a1 + 4196) = *(_DWORD*)(a2 + 4LL * v18) << 8;
          v13 = v22;
          v12 = *(_DWORD*)(a2 + 4 * (v11 - 1));
        }
        if (v17 == 0) {
          break;
        }
        ++v17;
        --v18;
        v19 -= 0x10000;
        v20 -= 5;
        v25 = v14 < v12;
        v14 += v10;
      } while (v25);
      *(_WORD*)(a1 + 4208) = 0;
      *v16 = 0;
      *(_WORD*)(a1 + 4204) = v13;
      if (v13 > 11468) {
        if ((unsigned int)v13 >= 0x3CCE) {
          *(_WORD*)(a1 + 4204) = (0xF334000u / v13 * (__int16)v13) >> 14;
        }
        goto LABEL_22;
      }
    }
    else {
      v13 = 0;
      *(_DWORD*)(a1 + 4200) = 0;
    }
    *(_DWORD*)(a1 + 4200) = 0;
    if (v13 <= 1) {
      v26 = 1;
    }
    else {
      v26 = v13;
    }
    *(_WORD*)(a1 + 4204) =
        (unsigned int)((__int16)(0xB33400 / v26) * (__int16)v13) >> 10;
    *(_DWORD*)(a1 + 4206) = 0;
    goto LABEL_22;
  }
  LODWORD(v11) = *(_DWORD*)(a1 + 2324);
  v10 = *(_DWORD*)(a1 + 2332);
  *(_QWORD*)(a1 + 4200) = 0;
  *(_WORD*)(a1 + 4208) = 0;
  *(_DWORD*)(a1 + 4196) = 4608 * (__int16)v5;
LABEL_22:
  result = memcpy_plt(a1 + 4210, a2 + 64, 2LL * *(int*)(a1 + 2340));
  *(_WORD*)(a1 + 4264) = *(_DWORD*)(a2 + 136);
  v28 = *(_QWORD*)(a2 + 4LL * (int)v11 + 8);
  *(_DWORD*)(a1 + 4284) = v10;
  *(_DWORD*)(a1 + 4280) = v11;
  *(_QWORD*)(a1 + 4268) = v28;
  return result;
}

#pragma GCC visibility pop
