#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_18ce740(__int64, int, int);
__int64 nn_diag_detail_AbortImpl_1a0a590(_QWORD);
extern __int64 GameData_1c1a2bc;
extern __int64 GameData_1c1a3bc;
__int64* MovieVideoRenderer_18cf080(__int64 a1, int a2, int a3, int a4);
__int64 MovieVideoRenderer_18cf220(__int64 a1, unsigned __int64 a2,
                                   unsigned __int64 a3);
void omovie_MovieVideoRenderer_Initialize_lambda0_Invoke(__int64 a1, _WORD* a2);

__int64* MovieVideoRenderer_18cf080(__int64 a1, int a2, int a3, int a4)
{
  unsigned int v4;
  _DWORD* v5;
  __int64* result;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v4 = atomic_load((unsigned int*)(a1 + 12));
  if (v4 != 1) {
    a1 = nn_diag_detail_AbortImpl_1a0a590(a1);
  }
  else if ((unsigned int)(a2 - 1) < 8) {
    if ((unsigned int)(a3 - 1) >= 2) {
    LABEL_19:
      a1 = nn_diag_detail_AbortImpl_1a0a590(a1);
    LABEL_20:
      nn_diag_detail_AbortImpl_1a0a590(a1);
      __udf(0);
    }
    if ((unsigned int)(a4 - 1) >= 8) {
      goto LABEL_20;
    }
    v5 = (_DWORD*)a1;
    *(_DWORD*)a1 = a2;
    *(_DWORD*)(a1 + 4) = a3;
    *(_DWORD*)(a1 + 8) = a4;
    result = (__int64*)(*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 176) + 56LL))(
        *(_QWORD*)(a1 + 176));
    if ((unsigned int)(*v5 - 3) >= 2) {
      if (*v5 == 1) {
        if (v5[1] != 2) {
          v8 = 0x3F00808100000000LL;
          result[6] = 0x3FED844D3F800000LL;
          result[7] = 0;
          result[4] = 0xBE3FD1EF3F800000LL;
          result[5] = 3203378684LL;
          v10 = 1065353216;
          v9 = 1070174988;
          goto LABEL_15;
        }
        v8 = 0x3F0080813D808081LL;
        result[6] = 0x400731993F950A81LL;
        result[7] = 0;
        result[4] = 0xBE5A5DDA3F950A81LL;
        result[5] = 3205000384LL;
        v9 = 1072003213;
        goto LABEL_14;
      }
      v7 = &GameData_1c1a3bc;
    LABEL_13:
      v11 = v7[6];
      v12 = v7[4];
      v8 = *v7;
      result[6] = v11;
      result[7] = 0;
      result[4] = v12;
      result[5] = 3209698984LL;
      v9 = 1070353053;
    LABEL_14:
      v10 = 1066732161;
      goto LABEL_15;
    }
    if (v5[1] == 2) {
      v7 = &GameData_1c1a2bc;
      goto LABEL_13;
    }
    v8 = 0x3F00808100000000LL;
    result[6] = 0x3FE2D0E53F800000LL;
    result[7] = 0;
    result[4] = 0xBEB032A23F800000LL;
    result[5] = 3208040867LL;
    v10 = 1065353216;
    v9 = 1068725436;
  LABEL_15:
    result[2] = v10;
    result[3] = v9;
    *result = v8;
    result[1] = 1056997505;
    return result;
  }
  a1 = nn_diag_detail_AbortImpl_1a0a590(a1);
  goto LABEL_19;
}

__int64 MovieVideoRenderer_18cf220(__int64 a1, unsigned __int64 a2,
                                   unsigned __int64 a3)
{
  unsigned int v3;
  __int64 v6;
  __int64 result;

  v3 = atomic_load((unsigned int*)(a1 + 12));
  if (v3 != 1) {
    a1 = nn_diag_detail_AbortImpl_1a0a590(a1);
  }
  else if (a2 < 0xF01) {
    if (a3 >= 0x871) {
      goto LABEL_7;
    }
    v6 = a1;
    result = GameRoutine_18ce740(a1, a2, a3);
    *(_QWORD*)(v6 + 16) = a2;
    *(_QWORD*)(v6 + 24) = a3;
    return result;
  }
  a1 = nn_diag_detail_AbortImpl_1a0a590(a1);
LABEL_7:
  nn_diag_detail_AbortImpl_1a0a590(a1);
  __udf(0);
}

void omovie_MovieVideoRenderer_Initialize_lambda0_Invoke(__int64 a1, _WORD* a2)
{
  a2[3] = 42;
  *a2 = 514;
}

#pragma GCC visibility pop
