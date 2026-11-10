#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern _DWORD CudaDriverData_13b4f74[14];
extern _UNKNOWN CudaDriverData_14347a8;
extern int CudaDriverData_1434ac0;
__int64 CudaDriverRoutine_105ae0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD);
__int64 CudaDriverRoutine_105c00(void);
__int64 CudaDriverRoutine_105c20(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_105dd0(_QWORD);
__int64 CudaDriverRoutine_107130(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1077a0(_QWORD);
__int64 CudaDriverRoutine_107e20(_QWORD);
__int64 CudaDriverRoutine_107f90(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_108070(_QWORD);
__int64 CudaDriverRoutine_108520(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1085d0(_QWORD);
__int64 CudaDriverRoutine_10ac30(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD);
__int64 CudaDriverRoutine_10b5f0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_10b6e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD);
__int64 CudaDriverRoutine_10f750(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD);
__int64 CudaDriverRoutine_10fe00(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD);
__int64 CudaDriverRoutine_110820(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD);
__int64 CudaDriverRoutine_11acc0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD);
__int64 CudaDriverRoutine_11ce20(_QWORD, _QWORD);
__int64 CudaDriverRoutine_11d180(_QWORD);
__int64 CudaDriverRoutine_11d2c0(_QWORD);
__int64 CudaDriverRoutine_1216a0(_QWORD);
__int64 CudaDriverRoutine_121c60(_QWORD);
__int64 CudaDriverRoutine_127d00(_QWORD);
__int64 CudaDriverRoutine_12e330(_QWORD);
__int64 CudaDriverRoutine_12e340(_QWORD);
__int64 CudaDriverRoutine_12e550(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1a2800(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1b8de0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1fe530(__int64 result);
__int64 CudaDriverRoutine_1fe550(__int64, int**, __int64, unsigned int*,
                                 _DWORD*);
__int64 CudaDriverRoutine_1fe840(__int64, int**, __int64, unsigned int*,
                                 __int64, unsigned int*);
void CudaDriverRoutine_1febc0();
__int64 CudaDriverRoutine_205fa0(int, __int64, __int64*, __int64*);
__int64 CudaDriverRoutine_206060(__int64, __int64);
__int64 CudaDriverRoutine_2080d0(__int64 result, unsigned int, int, _QWORD*);
__int64 CudaDriverRoutine_2083e0(__int64, int, __int64, _DWORD*);
__int64 CudaDriverRoutine_21bff0(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_21d380(__int64, unsigned int*);
__int64 CudaDriverRoutine_21f5d0();
__int64 CudaDriverRoutine_21fb80(__int64, __int64, int, char, _DWORD*, int);
__int64 CudaDriverRoutine_25cf30(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_25cf50(_QWORD);
__int64 CudaDriverRoutine_25cf70(_QWORD, _QWORD, const char*, ...);
__int64 CudaDriverRoutine_4f840(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_811a0(_QWORD);
__int64 CudaDriverRoutine_935f0(_QWORD);
__int64 CudaDriverRoutine_98340(_QWORD);
__int64 CudaDriverRoutine_98c30(void);
__int64 CudaDriverRoutine_9e4a0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_b9300(_QWORD);
__int64 CudaDriverRoutine_b9580(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_bae90(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_bbd70(_QWORD, _QWORD);
__int64 CudaDriverRoutine_bbd90(_QWORD, _QWORD);
__int64 CudaDriverRoutine_bbda0(_QWORD);
__int64 CudaDriverRoutine_d6740(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_ded50(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_deeb0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_e3830(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                _QWORD);
__int64 CudaDriverRoutine_f1460(_QWORD);
__int64 CudaDriverRoutine_fd5c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 CudaDriverHr_2085d0(_QWORD* a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v17;
  __int64 v18;

  if (*((_DWORD*)a1 + 22) >= 0x1000u) {
    v4 = a1[17];
    if (*(_DWORD*)(v4 + 192) != -1) {
      if (a1[18] == v4) {
        a1[18] = *(_QWORD*)(v4 + 200);
      }
      v5 = *(_QWORD*)(v4 + 208);
      a1[17] = v5;
      if (v5 != 0) {
        *(_QWORD*)(v5 + 200) = 0;
      }
      *(_QWORD*)(v4 + 200) = 0;
      *(_QWORD*)(v4 + 208) = 0;
      CudaDriverRoutine_2080d0(a1[14], *(_DWORD*)(v4 + 192), 2, &v18);
      *(_DWORD*)(v4 + 192) = -1;
      *(_BYTE*)(v4 + 196) = 1;
      --*((_DWORD*)a1 + 22);
    }
  }
  if (*(_DWORD*)(a2 + 192) != -1) {
    v6 = a1[17];
    if (a1[18] == a2) {
      a1[18] = *(_QWORD*)(a2 + 200);
      if (v6 != a2) {
      LABEL_11:
        v7 = *(_QWORD*)(a2 + 208);
        *(_QWORD*)(*(_QWORD*)(a2 + 200) + 208LL) = v7;
        if (v7 != 0) {
          v8 = *(_QWORD*)(a2 + 200);
        LABEL_16:
          *(_QWORD*)(v7 + 200) = v8;
          goto LABEL_17;
        }
        goto LABEL_17;
      }
    }
    else if (v6 != a2) {
      goto LABEL_11;
    }
    v7 = *(_QWORD*)(a2 + 208);
    a1[17] = v7;
    if (v7 != 0) {
      v8 = 0;
      goto LABEL_16;
    }
  LABEL_17:
    *(_QWORD*)(a2 + 200) = 0;
    *(_QWORD*)(a2 + 208) = 0;
    CudaDriverRoutine_2080d0(a1[14], *(_DWORD*)(a2 + 192), 2, &v18);
    *(_DWORD*)(a2 + 192) = -1;
    *(_BYTE*)(a2 + 196) = 1;
    --*((_DWORD*)a1 + 22);
  }
  CudaDriverRoutine_2083e0(a1[14], 2, a2, (_DWORD*)(a2 + 192));
  ++*((_DWORD*)a1 + 22);
  v9 = a1[18];
  if (v9 != 0) {
    *(_QWORD*)(a2 + 200) = v9;
    v10 = *(_QWORD*)(a1[18] + 208LL);
    *(_QWORD*)(a2 + 208) = v10;
    if (v10 != 0) {
      *(_QWORD*)(v10 + 200) = a2;
    }
    *(_QWORD*)(a1[18] + 208LL) = a2;
  }
  else {
    *(_QWORD*)(a2 + 208) = a1[17];
    a1[17] = a2;
    v11 = *(_QWORD*)(a2 + 208);
    if (v11 != 0) {
      *(_QWORD*)(v11 + 200) = a2;
    }
  }
  a1[18] = a2;
  v18 = 0;
  v12 = *(_DWORD*)(a2 + 192);
  *((_BYTE*)a1 + 208) = 1;
  v13 = *a1;
  v17 = 0;
  CudaDriverRoutine_205fa0(0, *(_QWORD*)(v13 + 760), &v18, &v17);
  v14 = (*(__int64 (**)(__int64, _QWORD, _QWORD, __int64))(
      *(_QWORD*)(*a1 + 64LL) + 19248LL))(
      v18, *a1, a1[25] + a1[22] + (unsigned int)(*((_DWORD*)a1 + 63) * v12),
      a2 + 56);
  v15 = *a1;
  v18 = v14;
  CudaDriverRoutine_206060(*(_QWORD*)(v15 + 760), v14);
  *(_BYTE*)(a2 + 196) = 0;
  return 0;
}

__int64 CudaDriverHr_2088c0(_QWORD* a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v19;
  __int64 v20;

  if (*((_DWORD*)a1 + 23) >= 0x1000u) {
    v4 = a1[19];
    if (*(_DWORD*)(v4 + 512) != -1) {
      if (a1[20] == v4) {
        a1[20] = *(_QWORD*)(v4 + 536);
      }
      v5 = *(_QWORD*)(v4 + 544);
      a1[19] = v5;
      if (v5 != 0) {
        *(_QWORD*)(v5 + 536) = 0;
      }
      v6 = *(_DWORD*)(v4 + 512);
      *(_OWORD*)(v4 + 536) = 0u;
      CudaDriverRoutine_2080d0(a1[13], v6, 3, &v20);
      *(_DWORD*)(v4 + 512) = -1;
      *(_BYTE*)(v4 + 516) = 1;
      --*((_DWORD*)a1 + 23);
    }
  }
  if (*(_DWORD*)(a2 + 512) != -1) {
    v7 = a1[19];
    if (a1[20] == a2) {
      a1[20] = *(_QWORD*)(a2 + 536);
      if (v7 != a2) {
      LABEL_11:
        v8 = *(_QWORD*)(a2 + 544);
        *(_QWORD*)(*(_QWORD*)(a2 + 536) + 544LL) = v8;
        if (v8 != 0) {
          v9 = *(_QWORD*)(a2 + 536);
        LABEL_16:
          *(_QWORD*)(v8 + 536) = v9;
          goto LABEL_17;
        }
        goto LABEL_17;
      }
    }
    else if (v7 != a2) {
      goto LABEL_11;
    }
    v8 = *(_QWORD*)(a2 + 544);
    a1[19] = v8;
    if (v8 != 0) {
      v9 = 0;
      goto LABEL_16;
    }
  LABEL_17:
    v10 = *(_DWORD*)(a2 + 512);
    *(_OWORD*)(a2 + 536) = 0u;
    CudaDriverRoutine_2080d0(a1[13], v10, 3, &v20);
    *(_DWORD*)(a2 + 512) = -1;
    *(_BYTE*)(a2 + 516) = 1;
    --*((_DWORD*)a1 + 23);
  }
  CudaDriverRoutine_2083e0(a1[13], 3, a2, (_DWORD*)(a2 + 512));
  ++*((_DWORD*)a1 + 23);
  v11 = a1[20];
  if (v11 != 0) {
    *(_QWORD*)(a2 + 536) = v11;
    v12 = *(_QWORD*)(a1[20] + 544LL);
    *(_QWORD*)(a2 + 544) = v12;
    if (v12 != 0) {
      *(_QWORD*)(v12 + 536) = a2;
    }
    *(_QWORD*)(a1[20] + 544LL) = a2;
  }
  else {
    *(_QWORD*)(a2 + 544) = a1[19];
    a1[19] = a2;
    v13 = *(_QWORD*)(a2 + 544);
    if (v13 != 0) {
      *(_QWORD*)(v13 + 536) = a2;
    }
  }
  a1[20] = a2;
  v20 = 0;
  v14 = *(_DWORD*)(a2 + 512);
  *((_BYTE*)a1 + 208) = 1;
  v15 = *a1;
  v19 = 0;
  CudaDriverRoutine_205fa0(0, *(_QWORD*)(v15 + 760), &v20, &v19);
  v16 = (*(__int64 (**)(__int64, _QWORD, _QWORD, __int64))(
      *(_QWORD*)(*a1 + 64LL) + 19248LL))(
      v20, *a1, a1[24] + a1[22] + (unsigned int)(*((_DWORD*)a1 + 62) * v14),
      a2 + 208);
  v17 = *a1;
  v20 = v16;
  CudaDriverRoutine_206060(*(_QWORD*)(v17 + 760), v16);
  *(_BYTE*)(a2 + 516) = 0;
  return 0;
}

__int64 CudaDriverHr_216470(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _BYTE v9[472];

  result = 1;
  v8 = 0;
  if (a1 != 0 && a2 != 0 && *(_DWORD*)(a1 + 4) == 1) {
    result = CudaDriverRoutine_121c60(&v8);
    if ((_DWORD)result == 0) {
      result = CudaDriverRoutine_ded50(v8, 0, 0);
      if ((_DWORD)result == 0) {
        v5 = CudaDriverRoutine_1216a0(v8);
        v6 = v5;
        if (v5 != 0) {
          result = CudaDriverRoutine_deeb0(v5, 0);
          if ((_DWORD)result != 0) {
            return result;
          }
          v7 = CudaDriverRoutine_98340(v6);
        }
        else {
          v7 = 0;
        }
        result = CudaDriverRoutine_fd5c0(a2, v9, v7, *(_QWORD*)(a1 + 24), 1);
        if ((_DWORD)result == 0) {
          CudaDriverRoutine_d6740(a1, v9, a2, v6);
          return 0;
        }
      }
    }
  }
  return result;
}

__int64 CudaDriverHr_21b1d0(_DWORD* a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  __int64 result;
  char v8;
  _QWORD v9[3];

  if (a1 == nullptr || *a1 != 0) {
    return 201;
  }
  result = 1;
  if (a4 != 0) {
    v9[1] = v4;
    v9[2] = v5;
    v9[0] = 0x10000000008LL;
    if (a3 != 0) {
      v8 = 2;
    }
    else {
      v8 = 1;
    }
    BYTE4(v9[0]) = v8;
    return CudaDriverRoutine_21bff0(a1, a2, v9);
  }
  return result;
}

__int64 CudaDriverHr_21be90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result;
  __int64 v7;
  __int64 v8;

  if (a1 == 0 || *(_DWORD*)a1 != 0) {
    return 201;
  }
  result = 1;
  if (a3 != 0 && a4 != 0) {
    if ((*(_WORD*)(*(_QWORD*)(a1 + 64) + 16848LL) & 0x20) != 0) {
      v7 = a1;
      result = CudaDriverRoutine_127d00(1);
      if ((_DWORD)result == 0) {
        v8 = 0x10300000008LL;
        return CudaDriverRoutine_21bff0(v7, a2, &v8);
      }
    }
    else {
      return 801;
    }
  }
  return result;
}

__int64 CudaDriverHr_21cc60(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4;

  if (a1 != 0 && a3 != 0 && a4 != 0 && (v4 = *(_QWORD*)(a3 + 96)) != 0 &&
      (unsigned __int8)CudaDriverRoutine_f1460(*(_QWORD*)(a3 + 96)) == 0) {
    return CudaDriverRoutine_1b8de0(a1, a2, v4, a4, *(_QWORD*)(a4 + 16));
  }
  else {
    return 1;
  }
}

__int64 CudaDriverHr_21df00(__int64 a1, _QWORD* a2)
{
  __int64 result;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    *a2 = *(unsigned int*)(a1 + 616);
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21dfe0(__int64 a1, __int64 a2, _QWORD* a3)
{
  __int64 result;
  __int64 v5;
  __int64 v7;

  result = 1;
  if (a1 != 0 && a2 != 0 && a3 != nullptr) {
    v5 = *(_QWORD*)(a1 + 2360);
    if (v5 != 0) {
      result = CudaDriverRoutine_bae90(v5, a2, &v7);
      if ((_DWORD)result == 0) {
        if (v7 != 0) {
          result = 0;
          *a3 = *(_QWORD*)(v7 + 96);
        }
        else {
          return 1;
        }
      }
    }
    else {
      return 1;
    }
  }
  return result;
}

__int64 CudaDriverHr_21e070(_QWORD* a1, __int64 a2)
{
  __int64 v2;
  __int64 result;
  _QWORD* v5;

  if (a2 == 0) {
    return 999;
  }
  v2 = *(_QWORD*)(a2 + 992);
  result = 0;
  if (v2 != 0) {
    v5 = (_QWORD*)(v2 + 32);
  }
  else {
    v5 = (_QWORD*)(a2 + 88);
  }
  *a1 = *v5;
  return result;
}

__int64 CudaDriverHr_21e0b0(__int64 a1, __int64 a2)
{
  CudaDriverRoutine_bbd70(a1, a2);
  return 0;
}

__int64 CudaDriverHr_21e0e0(__int64 a1, __int64 a2, _DWORD* a3)
{
  __int64 result;
  int v5;

  result = 1;
  if (a1 != 0 && a2 != 0 && a3 != nullptr) {
    v5 = *(_DWORD*)(a2 + 880);
    if ((unsigned int)(v5 - 1) > 1) {
      return 999;
    }
    else {
      result = 0;
      *a3 = v5;
    }
  }
  return result;
}

__int64 CudaDriverHr_21e120(__int64 a1, __int64 a2,
                            void (*a3)(__int64, __int64), __int64 a4)
{
  __int64 result;
  __int64 i;

  result = 1;
  if (a1 != 0 && a2 != 0 && a3 != nullptr) {
    result = CudaDriverRoutine_107e20(a2);
    if ((_DWORD)result == 0) {
      for (i = *(_QWORD*)(a2 + 224); i != 0; i = *(_QWORD*)(i + 1144)) {
        a3(a4, i);
      }
      return 0;
    }
  }
  return result;
}

__int64 CudaDriverHr_21e1a0(__int64 a1, _DWORD* a2)
{
  __int64 result;
  int v5;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    *a2 = 0;
    v5 = (unsigned __int8)CudaDriverRoutine_105dd0(a1);
    result = 0;
    if (v5 == 1) {
      *a2 = 1;
      return 0;
    }
  }
  return result;
}

__int64 CudaDriverHr_21e200(__int64 a1, _DWORD* a2)
{
  __int64 result;
  int v5;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    *a2 = 0;
    v5 = (unsigned __int8)CudaDriverRoutine_b9300(a1);
    result = 0;
    if (v5 == 1) {
      *a2 = 1;
      return 0;
    }
  }
  return result;
}

__int64 CudaDriverHr_21e260(__int64 a1, _DWORD* a2)
{
  __int64 result;
  int v5;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    *a2 = 0;
    v5 = (unsigned __int8)CudaDriverRoutine_bbda0(a1);
    result = 0;
    if (v5 == 1) {
      *a2 = 1;
      return 0;
    }
  }
  return result;
}

__int64 CudaDriverHr_21e2c0(__int64 a1, unsigned int* a2)
{
  __int64 result;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    if ((unsigned int)CudaDriverRoutine_21d380(a1, a2) != 0) {
      return 1;
    }
    else {
      CudaDriverRoutine_108520(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 24LL) + 24LL, 0,
                               0, 0);
      CudaDriverRoutine_935f0(a1);
      CudaDriverRoutine_1085d0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 24LL) + 24LL);
      return 0;
    }
  }
  return result;
}

__int64 CudaDriverHr_21e340(__int64 a1, __int64 a2)
{
  if (a1 == 0) {
    return 1;
  }
  CudaDriverRoutine_108520(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 24LL) + 24LL, 0, 0,
                           0);
  LODWORD(a2) = CudaDriverRoutine_bbd90(a1, a2);
  CudaDriverRoutine_1085d0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 24LL) + 24LL);
  return (unsigned int)a2;
}

__int64 CudaDriverHr_21e3b0(__int64 a1, __int64 a2)
{
  __int64 v2;

  if (a1 == 0) {
    return 1;
  }
  v2 = *(_QWORD*)(a1 + 992);
  if (v2 != 0) {
    *(_QWORD*)(v2 + 32) = a2;
  }
  *(_QWORD*)(a1 + 88) = a2;
  return 0;
}

__int64 CudaDriverHr_21e3e0(__int64 a1, _QWORD* a2)
{
  __int64 result;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    *a2 = *(_QWORD*)(a1 + 2360);
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21e400(__int64 a1, _QWORD* a2)
{
  __int64 result;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    *a2 = *(_QWORD*)(a1 + 104);
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21e420(__int64 a1, __int64 a2, int* a3, _QWORD* a4,
                            _DWORD* a5, _DWORD* a6)
{
  __int64 result;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;

  result = 1;
  v17 = 0;
  v15 = 0;
  v16 = 0;
  if (a1 == 0 || a2 == 0) {
    return result;
  }
  v12 = a1;
  if ((unsigned int)CudaDriverRoutine_11acc0(a1 + 40, a2, &v18, &v17, 0, &v16,
                                             &v15) != 0) {
    return 1;
  }
  if (a3 != nullptr) {
    v13 = -1;
    if (v18 > 0x11) {
      goto LABEL_10;
    }
    result = 1;
    if (((1 << v18) & 0x30020) != 0) {
      return result;
    }
    if (((1 << v18) & 0x18) != 0) {
      if ((*(_WORD*)(v12 + 36) & 0x80) == 0) {
        v13 = -1;
        goto LABEL_19;
      }
      v14 = *(_QWORD*)(*(_QWORD*)(v12 + 24) + 64LL);
      goto LABEL_18;
    }
    if (((1 << v18) & 0x300) == 0) {
    LABEL_10:
      if (v18 >= 2) {
        if (v18 != 2) {
          return 999;
        }
        v14 = *(_QWORD*)(*(_QWORD*)(v12 + 24) + 64LL);
        if ((*(_WORD*)(v12 + 36) & 0x80) == 0) {
          v13 = *(_DWORD*)(v14 + 11700);
          goto LABEL_19;
        }
      LABEL_18:
        v13 = *(_DWORD*)(v14 + 11736);
      }
    }
  LABEL_19:
    *a3 = v13;
  }
  if (a4 != nullptr) {
    *a4 = v15;
  }
  if (a5 != nullptr) {
    *a5 = v17;
  }
  result = 0;
  if (a6 != nullptr) {
    *a6 = v16;
  }
  return result;
}

__int64 CudaDriverHr_21e580(__int64 a1, _DWORD* a2)
{
  __int64 result;
  int v5;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    *a2 = 0;
    v5 = (unsigned __int8)CudaDriverRoutine_1077a0(a1);
    result = 0;
    if (v5 == 1) {
      *a2 = 1;
      return 0;
    }
  }
  return result;
}

__int64 CudaDriverHr_21e5e0(__int64 a1, _DWORD* a2)
{
  __int64 result;
  int v4;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    v4 = *(_DWORD*)(a1 + 116);
    if (v4 == 0) {
      v4 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 24LL) + 16096LL);
    }
    *a2 = v4;
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21e610(__int64 a1, unsigned int* a2)
{
  __int64 result;
  unsigned int v4;
  _WORD* v5;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    v4 = *a2;
    if (*a2 != 0) {
      if (v4 < 8) {
        return 0;
      }
      v5 = (_WORD*)(a1 + 977);
      a2[1] = (*v5 & 8) != 0;
      if (v4 < 0xC) {
        return 0;
      }
      a2[2] = (*v5 & 0x10) != 0;
      if (v4 < 0x10) {
        return 0;
      }
      else {
        result = 0;
        a2[3] = (*v5 & 0x20) != 0;
      }
    }
  }
  return result;
}

__int64 CudaDriverHr_21e680(__int64 a1, _QWORD* a2)
{
  __int64 result;

  result = 999;
  if (a1 != 0 && a2 != nullptr) {
    *a2 = *(unsigned int*)(a1 + 16);
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21e6c0(__int64 a1, _DWORD* a2)
{
  __int64 result;

  result = 999;
  if (a1 != 0 && a2 != nullptr) {
    *a2 = *(_DWORD*)(a1 + 1312);
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21e6e0(__int64 a1, unsigned int a2)
{
  __int64 v3;

  if (a1 == 0) {
    return 999;
  }
  v3 = CudaDriverRoutine_98340(a1);
  CudaDriverRoutine_9e4a0(v3, a2);
  return 0;
}

__int64 CudaDriverHr_21e720(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6)
{
  __int64 result;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;

  if (a1 == 0) {
    return 201;
  }
  if (a2 == 0) {
    return 1;
  }
  result = CudaDriverRoutine_98c30();
  if ((_DWORD)result == 0) {
    v13 = CudaDriverRoutine_98340(a1);
    CudaDriverRoutine_108520(v13 + 24, 0, 0, 0);
    v14 = CudaDriverRoutine_98340(a1);
    v15 = CudaDriverRoutine_b9580(v14, a3, a4, a5, a6, a2);
    v16 = CudaDriverRoutine_98340(a1);
    CudaDriverRoutine_1085d0(v16 + 24);
    return v15;
  }
  return result;
}

__int64 CudaDriverHr_21e810(__int64 a1, _QWORD* a2)
{
  __int64 result;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    *a2 = *(unsigned int*)(a1 + 60);
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21e830(__int64 a1)
{
  if (a1 == 0) {
    return 999;
  }
  CudaDriverRoutine_105c00();
  return 0;
}

__int64 CudaDriverHr_21e860(__int64 a1, __int64* a2, __int64 a3)
{
  __int64 result;
  __int64 v6;

  result = 1;
  if (a1 != 0 && a2 != nullptr && a3 != 0) {
    v6 = CudaDriverRoutine_107130(a1, a3);
    *a2 = v6;
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21e8b0(__int64 a1, _QWORD* a2)
{
  __int64 result;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    *a2 = *(_QWORD*)(a1 + 24);
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21e8d0(__int64 a1, bool* a2)
{
  __int64 result;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    *a2 = (*(_WORD*)(a1 + 977) & 0x800) != 0;
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21e900(__int64 a1, _DWORD* a2)
{
  __int64 result;
  __int64 v4;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    v4 = *(unsigned int*)(a1 + 364);
    if ((unsigned int)v4 <= 0xD && ((0x3BFFu >> v4) & 1) != 0) {
      *a2 = CudaDriverData_13b4f74[v4];
      return 0;
    }
  }
  return result;
}

__int64 CudaDriverHr_21ead0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            unsigned __int64 a5)
{
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v11;

  v5 = 1;
  if (a1 != 0 && a2 != 0 && a3 != 0 && a4 != 0 && a5 != 0) {
    if (a5 <= *(unsigned __int16*)(a3 + 912)) {
      v6 = *(_QWORD*)(a3 + 904);
    }
    else {
      if (a5 >
          *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 32) + 24LL) +
                                      64LL) +
                           11748LL)) {
        return 1;
      }
      v7 = a1;
      v8 = a4;
      v9 = a5;
      v11 = CudaDriverRoutine_12e550(*(_QWORD*)(a3 + 904), a5);
      *(_QWORD*)(a3 + 904) = v11;
      if (v11 == 0) {
        return 2;
      }
      v6 = v11;
      a5 = v9;
      *(_WORD*)(a3 + 912) = v9;
      a4 = v8;
      a1 = v7;
    }
    *(_QWORD*)(a1 + 456) = v6;
    *(_WORD*)(a1 + 450) = a5;
    CudaDriverRoutine_25cf30(v6, a4, a5);
    return 0;
  }
  return v5;
}

__int64 CudaDriverHr_21ebb0(__int64 a1, _QWORD* a2)
{
  __int64 result;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    *a2 = *(_QWORD*)(a1 + 368);
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21eeb0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;

  result = 1;
  if (a1 != 0 && a2 != 0 && a3 != 0) {
    if ((unsigned int)CudaDriverRoutine_811a0(a1) != 0) {
      return 999;
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 CudaDriverHr_21eef0(__int64 a1, int* a2)
{
  __int64 result;
  int v4;
  int v5;
  int v6;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    v4 = *(_DWORD*)(a1 + 1000);
    result = 0;
    if (v4 == 2) {
      v5 = 2;
    }
    else {
      v5 = 1;
    }
    if (v4 != 0) {
      v6 = v5;
    }
    else {
      v6 = 0;
    }
    *a2 = v6;
  }
  return result;
}

__int64 CudaDriverHr_21ef60(__int64 a1, __int64 a2,
                            void (*a3)(__int64, __int64), __int64 a4)
{
  __int64 result;
  __int64 i;

  result = 1;
  if (a1 != 0 && a2 != 0 && a3 != nullptr) {
    for (i = *(_QWORD*)(a2 + 224); i != 0; i = *(_QWORD*)(i + 1144)) {
      a3(a4, i);
    }
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21efd0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  _QWORD v5[2];
  __int64 v6;

  v3 = *(_QWORD*)(a1 + 4144);
  v5[1] = a3;
  v6 = 0;
  v5[0] = a2;
  CudaDriverRoutine_1a2800(v3, CudaDriverRoutine_21f5d0, v5);
  return (unsigned int)v6;
}

__int64 CudaDriverHr_21f0d0(__int64 a1, int* a2)
{
  __int64 result;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    *a2 = *(_BYTE*)(a1 + 480) & 1;
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21f100(__int64 a1, __int64 a2, __int64 a3)
{
  if (a1 == 0 || a2 == 0 || a3 == 0) {
    return 1;
  }
  if ((*(_BYTE*)(a1 + 480) & 1) != 0) {
    return CudaDriverRoutine_11d2c0(*(_QWORD*)(a1 + 24));
  }
  return CudaDriverRoutine_11d180(*(_QWORD*)(a1 + 24));
}

__int64 CudaDriverHr_21f160(__int64 a1, __int64 a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(a1 + 296);
  *(_QWORD*)(a1 + 288) |= *(_QWORD*)(a2 + 848);
  *(_QWORD*)(a1 + 296) = v2 | *(_QWORD*)(a2 + 856);
  return 0;
}

__int64 CudaDriverHr_21f190(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v9;

  v4 = CudaDriverRoutine_98340(a1);
  CudaDriverRoutine_108520(v4 + 24, 0, 0, 0);
  v5 = CudaDriverRoutine_98340(a1);
  v6 = CudaDriverRoutine_105c20(v5, a2, a2 + 400);
  v7 = CudaDriverRoutine_98340(a1);
  CudaDriverRoutine_1085d0(v7 + 24);
  if (v6 != 0) {
    return v6;
  }
  v9 = CudaDriverRoutine_98340(a1);
  return CudaDriverRoutine_11ce20(v9, a2);
}

__int64 CudaDriverHr_21f230(__int64 a1, _DWORD* a2)
{
  __int64 result;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    *a2 = *(_DWORD*)(a1 + 80);
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21f250(__int64 a1, _DWORD* a2)
{
  __int64 result;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    *a2 = *(_DWORD*)(a1 + 60);
    if (*(_QWORD*)(a1 + 1104) != 0) {
      result = 0;
      *a2 = *(_DWORD*)(a1 + 84);
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 CudaDriverHr_21f290(__int64 a1, _QWORD* a2, _QWORD* a3)
{
  __int64 result;

  result = 1;
  if (a1 != 0 && a2 != nullptr && a3 != nullptr) {
    *a2 = *(_QWORD*)(a1 + 1096);
    *a3 = *(_QWORD*)(a1 + 1104);
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21f2c0(__int64 a1, int* a2)
{
  __int64 result;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    *a2 = *(_BYTE*)(a1 + 979) & 1;
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21f2f0(_DWORD* a1, _BOOL4* a2, _DWORD* a3, _BOOL4* a4,
                            _DWORD* a5)
{
  unsigned int v5;
  _BOOL4 v6;
  _BOOL4 v7;

  v5 = 1;
  if (a1 != nullptr && a2 != nullptr && a3 != nullptr && a4 != nullptr &&
      a5 != nullptr) {
    v6 = a1[107] != 0 || a1[108] != 0 || a1[109] != 0;
    *a2 = v6;
    *a3 = a1[107];
    a3[1] = a1[108];
    a3[2] = a1[109];
    v7 = a1[111] != 0 || a1[112] != 0 || a1[113] != 0;
    *a4 = v7;
    v5 = 0;
    *a5 = a1[111];
    a5[1] = a1[112];
    a5[2] = a1[113];
  }
  return v5;
}

__int64 CudaDriverHr_21f3a0(__int64 a1, _QWORD* a2)
{
  __int64 result;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    *a2 = (*(_QWORD*)(a1 + 872) & 7LL) != 0;
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21f3d0(__int64 result, __int64 a2, int a3, __int64 a4,
                            __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                            __int64 a9, __int64 a10)
{
  __int64 (*v10)(__int64, _QWORD*);
  __int64 v11;
  _QWORD v12[6];

  ++*(_DWORD*)(a10 + 16);
  if (a3 != 5) {
    v10 = *(__int64 (**)(__int64, _QWORD*))a10;
    if (*(_QWORD*)a10 != 0) {
      v12[1] = result;
      v12[2] = a5;
      v11 = *(_QWORD*)(a10 + 8);
      v12[3] = a6;
      return v10(v11, v12);
    }
  }
  return result;
}

__int64 CudaDriverHr_21f420(__int64 a1, __int64 a2, __int64 a3, unsigned int a4,
                            __int64 a5, __int64 a6, const char* a7,
                            unsigned __int8 a8)
{
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  const char* v21;
  int v22;
  __int64 v23;
  __int64 v24;
  const char* v26;
  _QWORD v27[6];
  __int64 v28;
  _QWORD v29[22];
  __int64 v30;

  v30 = 0;
  v28 = 0;
  v26 = nullptr;
  memset(v27, 0, sizeof(v27));
  memset(v29, 0, sizeof(v29));
  v16 = CudaDriverRoutine_98340(a1);
  CudaDriverRoutine_108520(v16 + 24, 0, 0, 0);
  v17 = CudaDriverRoutine_e3830(*(_QWORD*)(a1 + 64), a5, a6, a4, 0, v29, &v26);
  if (a7 != nullptr) {
    v18 = CudaDriverRoutine_25cf50(v26);
    v19 = v18 + CudaDriverRoutine_25cf50(a7) + 2;
    v20 = CudaDriverRoutine_12e330(v19);
    if (v20 != 0) {
      v21 = (const char*)v20;
      v22 = CudaDriverRoutine_25cf70(v20, v19, "%s %s", v26, a7);
      CudaDriverRoutine_12e340(v26);
      v26 = v21;
      if (v19 > v22) {
        goto LABEL_4;
      }
      v17 = 999;
    }
    else {
      v17 = 2;
    }
    LODWORD(v27[1]) = 5;
    LOWORD(v27[0]) = a8;
    goto LABEL_9;
  }
LABEL_4:
  LODWORD(v27[1]) = 5;
  LOWORD(v27[0]) = a8;
  if (v17 == 0) {
    v23 = CudaDriverRoutine_98340(a1);
    v17 = CudaDriverRoutine_105ae0(v23, a2, a3, v26, v29, v27, 1);
  }
LABEL_9:
  CudaDriverRoutine_12e340(v26);
  v24 = CudaDriverRoutine_98340(a1);
  CudaDriverRoutine_1085d0(v24 + 24);
  return v17;
}

__int64 CudaDriverHr_21f5d0(__int64 result, __int64 a2, __int64 a3)
{
  __int64 (*v3)(_QWORD, __int64, __int64);

  v3 = *(__int64 (**)(_QWORD, __int64, __int64))a3;
  ++*(_DWORD*)(a3 + 16);
  if (v3 != nullptr) {
    return v3(*(_QWORD*)(a3 + 8), a2, result);
  }
  return result;
}

__int64 CudaDriverHr_21f600(int a1, __int64 a2, __int64 a3)
{
  __int64 result;
  char v6;

  if (a2 == 0) {
    return 1;
  }
  result = 999;
  if ((a1 & 0x80000000) == 0 && a1 < CudaDriverData_1434ac0 &&
      *((_QWORD*)&CudaDriverData_14347a8 + (unsigned int)a1 + 35) != 0) {
    v6 = CudaDriverRoutine_4f840(999, a2, a3);
    *(_DWORD*)(a2 + 4) = 0;
    if (v6 != 0) {
      *(_WORD*)(a2 + 4) = 1;
    }
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21f970(__int64 a1, unsigned int a2, __int64 a3,
                            unsigned int a4, _DWORD* a5)
{
  __int64 result;
  __int64 v9;
  int v10;
  unsigned int v11;

  result = 1;
  v10 = 0;
  if (a1 != 0 && a5 != nullptr) {
    v9 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 24LL);
    result = CudaDriverRoutine_10ac30(v9, a1, a2, &v11, a3, 0);
    if ((_DWORD)result == 0) {
      result = CudaDriverRoutine_10b5f0(a1, v9, v11, a4, &v10);
      *a5 = v10;
    }
  }
  return result;
}

__int64 CudaDriverHr_21fa20(__int64 a1, unsigned int a2, __int64 a3, __int64 a4,
                            unsigned int a5, _DWORD* a6)
{
  __int64 result;
  __int64 v11;
  int v12;
  unsigned int v13;

  result = 1;
  v12 = 0;
  if (a1 != 0 && a6 != nullptr) {
    v11 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 24LL);
    result = CudaDriverRoutine_10ac30(v11, a1, a3, &v13, a4, 0);
    if ((_DWORD)result == 0) {
      CudaDriverRoutine_10b6e0(a1, v11, v13, a5, a2, &v12);
      *a6 = v12;
      return 0;
    }
  }
  return result;
}

__int64 CudaDriverHr_21fb80(__int64 a1, __int64 a2, int a3, char a4, _DWORD* a5,
                            int a6)
{
  int v6;
  __int64 result;

  v6 = *(_DWORD*)(a1 + 21864);
  if (v6 == 2) {
    return 0;
  }
  if (v6 == 4) {
    *a5 = 0;
    if (a3 != 0) {
      if ((a4 & 3) == 1 && a6 == 1) {
        return (*(__int64 (**)(__int64, __int64))(a1 + 20672))(a1, 1);
      }
      else {
        result = 1;
        if ((a4 & 3) == 3 && a6 == 2) {
          return (*(__int64 (**)(__int64, _QWORD))(a1 + 20672))(a1, 0);
        }
      }
    }
    else {
      return 1;
    }
  }
  else {
    result = 1;
    if (a3 != 0 && (unsigned int)(a6 - 1) <= 1) {
      result = (*(__int64 (**)(__int64))(a1 + 20768))(a1);
      *a5 = 0;
      if ((int)result > 499) {
        switch ((_DWORD)result) {
        case 0x1F4:
          return 18;
        case 0x320:
          return 7;
        case 0x321:
          return 18;
        default:
          break;
        }
      }
      else {
        if ((unsigned int)result < 2) {
          return result;
        }
        if ((_DWORD)result == 5) {
          return 19;
        }
        if ((_DWORD)result == 210) {
          return 17;
        }
      }
      return 999;
    }
  }
  return result;
}

__int64 CudaDriverHr_21fea0()
{
  CudaDriverRoutine_1febc0();
  return 0;
}

__int64 CudaDriverHr_21fee0(_DWORD* a1, int a2, unsigned int* a3)
{
  __int64 result;
  unsigned int v7;
  __int64 v8;
  _DWORD* v9;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  __int64 v25;

  if (a1 == nullptr || *a1 != 0) {
    return 3;
  }
  if ((unsigned int)CudaDriverRoutine_deeb0(a1, 0) != 0) {
    return 3;
  }
  if (a3 == nullptr) {
    return 1;
  }
  v7 = a3[1];
  if (v7 == 0 || *((_QWORD*)a3 + 1) == 0 || *((_QWORD*)a3 + 3) == 0) {
    return 1;
  }
  result = 1;
  if (v7 != 4 && *a3 != 0) {
    v8 = CudaDriverRoutine_98340(a1);
    CudaDriverRoutine_108520(v8 + 24, 0, 0, 0);
    if (a2 == 3) {
      v20 = a3[1];
      v21 = CudaDriverRoutine_98340(a1);
      if (v20 == 3) {
        v22 = *((_QWORD*)a3 + 4);
      }
      else {
        v22 = 0;
      }
      v12 = CudaDriverRoutine_10f750(v21, a3[1], *a3, *((_QWORD*)a3 + 1),
                                     *((_QWORD*)a3 + 3), v22);
      goto LABEL_32;
    }
    v9 = a1;
    if (a2 == 2) {
      if (*((_QWORD*)a3 + 2) != 0) {
        if (a3[1] == 3) {
          if (*((_QWORD*)a3 + 4) == 0) {
            goto LABEL_26;
          }
          v13 = CudaDriverRoutine_98340(a1);
          v15 = *a3;
          v14 = a3[1];
          v16 = *((_QWORD*)a3 + 1);
          v17 = *((_QWORD*)a3 + 2);
          v18 = *((_QWORD*)a3 + 3);
          v19 = *((_QWORD*)a3 + 4);
        }
        else {
          v13 = CudaDriverRoutine_98340(a1);
          v15 = *a3;
          v14 = a3[1];
          v17 = *((_QWORD*)a3 + 2);
          v18 = *((_QWORD*)a3 + 3);
          v19 = 0;
          v16 = *((_QWORD*)a3 + 1);
        }
        v12 = CudaDriverRoutine_110820(v13, v14, v15, v16, v18, v17, v19);
        goto LABEL_32;
      }
    }
    else {
      v10 = 0;
      if (a2 != 1) {
      LABEL_33:
        v24 = v10;
        v25 = CudaDriverRoutine_98340(v9);
        CudaDriverRoutine_1085d0(v25 + 24);
        return v24;
      }
      if (a3[1] != 3) {
        v23 = CudaDriverRoutine_98340(a1);
        v12 = CudaDriverRoutine_10fe00(v23, a3[1], *a3, *((_QWORD*)a3 + 1),
                                       *((_QWORD*)a3 + 3), 0);
        goto LABEL_32;
      }
      if (*((_QWORD*)a3 + 4) != 0) {
        v11 = CudaDriverRoutine_98340(a1);
        v12 = CudaDriverRoutine_10fe00(v11, a3[1], *a3, *((_QWORD*)a3 + 1),
                                       *((_QWORD*)a3 + 3), *((_QWORD*)a3 + 4));
      LABEL_32:
        v10 = v12;
        v9 = a1;
        goto LABEL_33;
      }
    }
  LABEL_26:
    v10 = 1;
    goto LABEL_33;
  }
  return result;
}

__int64 CudaDriverHr_2200c0(int a1, _DWORD* a2, __int64 a3, int a4)
{
  __int64 result;
  __int64 v6;

  result = 2;
  if (a1 < 0) {
    return result;
  }
  if (a1 >= CudaDriverData_1434ac0) {
    return result;
  }
  v6 = *((_QWORD*)&CudaDriverData_14347a8 + (unsigned int)a1 + 35);
  if (v6 == 0) {
    return result;
  }
  if (a2 != nullptr) {
    if (*a2 != 0) {
      return 3;
    }
    result = 1;
    if (a3 == 0 || (unsigned int)(a4 - 1) > 1) {
      return result;
    }
    result = (*(__int64 (**)(__int64))(v6 + 20744))(v6);
    if ((int)result <= 499) {
      if ((unsigned int)result >= 2) {
        if ((_DWORD)result != 5) {
          if ((_DWORD)result == 210) {
            return 17;
          }
          return 999;
        }
        return 19;
      }
      return result;
    }
    if ((_DWORD)result == 500) {
      return 18;
    }
    if ((_DWORD)result != 800) {
      if ((_DWORD)result != 801) {
        return 999;
      }
      return 18;
    }
    return 7;
  }
  if (a3 == 0) {
    return 1;
  }
  if (a4 != 1) {
    if (a4 == 2) {
      return 3;
    }
    return 1;
  }
  result = (*(__int64 (**)(__int64, _QWORD))(v6 + 20744))(v6, 0);
  if ((int)result > 499) {
    if ((_DWORD)result == 500) {
      return 18;
    }
    if ((_DWORD)result != 800) {
      if ((_DWORD)result != 801) {
        return 999;
      }
      return 18;
    }
    return 7;
  }
  if ((unsigned int)result >= 2) {
    if ((_DWORD)result != 5) {
      if ((_DWORD)result == 210) {
        return 17;
      }
      return 999;
    }
    return 19;
  }
  return result;
}

__int64 CudaDriverHr_220230(int a1, _DWORD* a2, __int64 a3)
{
  __int64 result;
  __int64 v5;

  result = 2;
  if (a1 < 0 || a1 >= CudaDriverData_1434ac0) {
    return result;
  }
  v5 = *((_QWORD*)&CudaDriverData_14347a8 + (unsigned int)a1 + 35);
  if (v5 == 0) {
    return 2;
  }
  if (a2 == nullptr) {
    if (a3 != 0) {
      result = (*(__int64 (**)(__int64, _QWORD))(v5 + 20752))(v5, 0);
      if ((int)result <= 499) {
        if ((unsigned int)result < 2) {
          return result;
        }
        if ((_DWORD)result == 5) {
          return 19;
        }
        if ((_DWORD)result == 210) {
          return 17;
        }
        return 999;
      }
      if ((_DWORD)result != 500) {
        if ((_DWORD)result == 800) {
          return 7;
        }
        if ((_DWORD)result != 801) {
          return 999;
        }
      }
      return 18;
    }
    return 1;
  }
  if (*a2 != 0) {
    return 3;
  }
  if (a3 == 0) {
    return 1;
  }
  result = (*(__int64 (**)(void))(v5 + 20752))();
  if ((int)result > 499) {
    if ((_DWORD)result != 500) {
      if ((_DWORD)result != 800) {
        if ((_DWORD)result == 801) {
          return 18;
        }
        return 999;
      }
      return 7;
    }
    return 18;
  }
  if ((unsigned int)result >= 2) {
    if ((_DWORD)result != 5) {
      if ((_DWORD)result == 210) {
        return 17;
      }
      return 999;
    }
    return 19;
  }
  return result;
}

__int64 CudaDriverHr_220370(int a1, _DWORD* a2, int a3, int a4)
{
  __int64 result;
  __int64 v6;

  result = 2;
  if (a1 < 0) {
    return result;
  }
  if (a1 >= CudaDriverData_1434ac0) {
    return result;
  }
  v6 = *((_QWORD*)&CudaDriverData_14347a8 + (unsigned int)a1 + 35);
  if (v6 == 0) {
    return result;
  }
  if (a2 == nullptr) {
    if (*(_DWORD*)(v6 + 21864) == 2) {
      return 0;
    }
    result = 1;
    if (a3 == 0 || (unsigned int)(a4 - 1) > 1) {
      return result;
    }
    result = (*(__int64 (**)(__int64, _QWORD))(v6 + 20760))(v6, 0);
    if ((int)result <= 499) {
      if ((unsigned int)result < 2) {
        return result;
      }
      if ((_DWORD)result == 5) {
        return 19;
      }
      if ((_DWORD)result == 210) {
        return 17;
      }
      return 999;
    }
    if ((_DWORD)result != 500) {
      if ((_DWORD)result == 800) {
        return 7;
      }
      if ((_DWORD)result != 801) {
        return 999;
      }
    }
    return 18;
  }
  if (*a2 != 0) {
    return 3;
  }
  if (*(_DWORD*)(v6 + 21864) == 2) {
    return 0;
  }
  result = 1;
  if (a3 == 0 || (unsigned int)(a4 - 1) > 1) {
    return result;
  }
  result = (*(__int64 (**)(__int64))(v6 + 20760))(v6);
  if ((int)result > 499) {
    if ((_DWORD)result != 500) {
      if ((_DWORD)result != 800) {
        if ((_DWORD)result == 801) {
          return 18;
        }
        return 999;
      }
      return 7;
    }
    return 18;
  }
  if ((unsigned int)result >= 2) {
    if ((_DWORD)result != 5) {
      if ((_DWORD)result == 210) {
        return 17;
      }
      return 999;
    }
    return 19;
  }
  return result;
}

__int64 CudaDriverHr_220500(int a1, _DWORD* a2, int a3, __int64 a4, int* a5,
                            int a6)
{
  __int64 result;
  __int64 v8;
  int v9;
  int v10;
  int v13;
  int v14;

  result = 2;
  if (a1 < 0) {
    return result;
  }
  if (a1 >= CudaDriverData_1434ac0) {
    return result;
  }
  v8 = *((_QWORD*)&CudaDriverData_14347a8 + (unsigned int)a1 + 35);
  if (v8 == 0) {
    return result;
  }
  if (a2 == nullptr) {
    v9 = *(_DWORD*)(v8 + 21864);
    if (v9 != 2) {
      if (v9 == 4) {
        if (a3 == 0) {
          return 1;
        }
      LABEL_11:
        *a5 = 0;
        return 0;
      }
      result = 1;
      v13 = 0;
      if (a3 == 0 || (unsigned int)(a6 - 1) > 1) {
        return result;
      }
      result = (*(__int64 (**)(__int64, _QWORD))(v8 + 20768))(v8, 0);
      *a5 = v13 & 0x3F;
      if ((int)result <= 499) {
        if ((unsigned int)result < 2) {
          return result;
        }
        if ((_DWORD)result == 5) {
          return 19;
        }
        if ((_DWORD)result == 210) {
          return 17;
        }
        return 999;
      }
      if ((_DWORD)result != 500) {
        if ((_DWORD)result == 800) {
          return 7;
        }
        if ((_DWORD)result != 801) {
          return 999;
        }
      }
      return 18;
    }
    return 0;
  }
  if (*a2 != 0) {
    return 3;
  }
  v10 = *(_DWORD*)(v8 + 21864);
  if (v10 == 2) {
    return 0;
  }
  if (v10 == 4) {
    if (a3 == 0) {
      return 1;
    }
    goto LABEL_11;
  }
  result = 1;
  v14 = 0;
  if (a3 == 0 || (unsigned int)(a6 - 1) > 1) {
    return result;
  }
  result = (*(__int64 (**)(__int64))(v8 + 20768))(v8);
  *a5 = v14 & 0x3F;
  if ((int)result > 499) {
    if ((_DWORD)result != 500) {
      if ((_DWORD)result != 800) {
        if ((_DWORD)result == 801) {
          return 18;
        }
        return 999;
      }
      return 7;
    }
    return 18;
  }
  if ((unsigned int)result >= 2) {
    if ((_DWORD)result != 5) {
      if ((_DWORD)result == 210) {
        return 17;
      }
      return 999;
    }
    return 19;
  }
  return result;
}

__int64 CudaDriverHr_220720(int a1, _DWORD* a2, int a3, char a4, _DWORD* a5,
                            int a6)
{
  __int64 result;
  __int64 v8;

  result = 2;
  if ((a1 & 0x80000000) == 0 && a1 < CudaDriverData_1434ac0) {
    v8 = *((_QWORD*)&CudaDriverData_14347a8 + (unsigned int)a1 + 35);
    if (v8 != 0) {
      if (a2 != nullptr && *a2 != 0) {
        return 3;
      }
      else {
        return CudaDriverRoutine_21fb80(v8, (__int64)a2, a3, a4, a5, a6);
      }
    }
    else {
      return 2;
    }
  }
  return result;
}

__int64 CudaDriverHr_220770(int a1, _DWORD* a2, int a3, __int64 a4, int* a5,
                            int a6)
{
  __int64 result;
  __int64 v8;
  int v9;
  int v11;
  unsigned int v13;
  unsigned int v14;

  result = 2;
  if (a1 < 0) {
    return result;
  }
  if (a1 >= CudaDriverData_1434ac0) {
    return result;
  }
  v8 = *((_QWORD*)&CudaDriverData_14347a8 + (unsigned int)a1 + 35);
  if (v8 == 0) {
    return result;
  }
  if (a2 == nullptr) {
    v9 = *(_DWORD*)(v8 + 21864);
    if (v9 != 2) {
      if (v9 == 4) {
      LABEL_19:
        *a5 = 0;
        return a3 == 0;
      }
      result = 1;
      v13 = 0;
      if (a3 == 0 || (unsigned int)(a6 - 1) > 1) {
        return result;
      }
      result = (*(__int64 (**)(__int64, _QWORD))(v8 + 20768))(v8, 0);
      *a5 = (v13 >> 8) & 3;
      if ((int)result <= 499) {
        if ((unsigned int)result < 2) {
          return result;
        }
        if ((_DWORD)result == 5) {
          return 19;
        }
        if ((_DWORD)result == 210) {
          return 17;
        }
        return 999;
      }
      if ((_DWORD)result != 500) {
        if ((_DWORD)result == 800) {
          return 7;
        }
        if ((_DWORD)result != 801) {
          return 999;
        }
      }
      return 18;
    }
    return 0;
  }
  if (*a2 != 0) {
    return 3;
  }
  v11 = *(_DWORD*)(v8 + 21864);
  if (v11 == 2) {
    return 0;
  }
  if (v11 == 4) {
    goto LABEL_19;
  }
  result = 1;
  v14 = 0;
  if (a3 == 0 || (unsigned int)(a6 - 1) > 1) {
    return result;
  }
  result = (*(__int64 (**)(__int64))(v8 + 20768))(v8);
  *a5 = (v14 >> 8) & 3;
  if ((int)result > 499) {
    if ((_DWORD)result != 500) {
      if ((_DWORD)result != 800) {
        if ((_DWORD)result == 801) {
          return 18;
        }
        return 999;
      }
      return 7;
    }
    return 18;
  }
  if ((unsigned int)result >= 2) {
    if ((_DWORD)result != 5) {
      if ((_DWORD)result == 210) {
        return 17;
      }
      return 999;
    }
    return 19;
  }
  return result;
}

__int64 CudaDriverHr_220b00(int a1, _DWORD* a2, int a3, __int64 a4, int* a5,
                            int a6)
{
  __int64 result;
  __int64 v8;
  int v9;
  int v11;
  int v13;
  int v14;

  result = 2;
  if (a1 < 0) {
    return result;
  }
  if (a1 >= CudaDriverData_1434ac0) {
    return result;
  }
  v8 = *((_QWORD*)&CudaDriverData_14347a8 + (unsigned int)a1 + 35);
  if (v8 == 0) {
    return result;
  }
  if (a2 == nullptr) {
    v9 = *(_DWORD*)(v8 + 21864);
    if (v9 != 2) {
      if (v9 == 4) {
      LABEL_19:
        *a5 = 0;
        return a3 == 0;
      }
      result = 1;
      v13 = 0;
      if (a3 == 0 || (unsigned int)(a6 - 1) > 1) {
        return result;
      }
      result = (*(__int64 (**)(__int64, _QWORD))(v8 + 20768))(v8, 0);
      *a5 = v13 & 0xC00;
      if ((int)result <= 499) {
        if ((unsigned int)result < 2) {
          return result;
        }
        if ((_DWORD)result == 5) {
          return 19;
        }
        if ((_DWORD)result == 210) {
          return 17;
        }
        return 999;
      }
      if ((_DWORD)result != 500) {
        if ((_DWORD)result == 800) {
          return 7;
        }
        if ((_DWORD)result != 801) {
          return 999;
        }
      }
      return 18;
    }
    return 0;
  }
  if (*a2 != 0) {
    return 3;
  }
  v11 = *(_DWORD*)(v8 + 21864);
  if (v11 == 2) {
    return 0;
  }
  if (v11 == 4) {
    goto LABEL_19;
  }
  result = 1;
  v14 = 0;
  if (a3 == 0 || (unsigned int)(a6 - 1) > 1) {
    return result;
  }
  result = (*(__int64 (**)(__int64))(v8 + 20768))(v8);
  *a5 = v14 & 0xC00;
  if ((int)result > 499) {
    if ((_DWORD)result != 500) {
      if ((_DWORD)result != 800) {
        if ((_DWORD)result == 801) {
          return 18;
        }
        return 999;
      }
      return 7;
    }
    return 18;
  }
  if ((unsigned int)result >= 2) {
    if ((_DWORD)result != 5) {
      if ((_DWORD)result == 210) {
        return 17;
      }
      return 999;
    }
    return 19;
  }
  return result;
}

__int64 CudaDriverHr_220d70(int a1, _BYTE* a2)
{
  __int64 result;
  __int64 v4;

  result = 101;
  if ((a1 & 0x80000000) == 0 && a1 < CudaDriverData_1434ac0) {
    v4 = *((_QWORD*)&CudaDriverData_14347a8 + (unsigned int)a1 + 35);
    if (v4 != 0) {
      result = 0;
      if (a2 != nullptr) {
        *a2 = *(_BYTE*)(v4 + 17044);
      }
    }
  }
  return result;
}

__int64 CudaDriverHr_220e10(__int64 a1)
{
  if (a1 == 0) {
    return 999;
  }
  if (*(_DWORD*)a1 != 0) {
    return 201;
  }
  return (*(__int64 (**)(void*))(*(_QWORD*)(*(_QWORD*)(a1 + 72) + 33160LL) +
                                 136LL))(
      *(void**)(*(_QWORD*)(a1 + 72) + 33160LL));
}

__int64 CudaDriverHr_220e60(int a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v6;
  unsigned int v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int* v14;
  __int64 v15;
  __int64 v16;
  int* v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int* v29;
  _DWORD* v30;
  int v31;
  unsigned __int64 v32;
  unsigned int* v33;
  __int64 v34;
  unsigned int v35;
  _DWORD v36[4];
  int v37;
  _DWORD v38[1829];
  __int64 v39;
  __int64 v40;

  result = 101;
  if ((a1 & 0x80000000) == 0 && a1 < CudaDriverData_1434ac0) {
    v39 = v2;
    v40 = v3;
    v6 = *((_QWORD*)&CudaDriverData_14347a8 + (unsigned int)a1 + 35);
    if (v6 == 0) {
      return 101;
    }
    if (a2 != 0) {
      result = (*(__int64 (**)(__int64, _DWORD*))(v6 + 21256))(v6, v38);
      if ((_DWORD)result != 0) {
        return result;
      }
      v8 = v38[0];
      v9 = *(_QWORD*)(a2 + 16);
      *(_DWORD*)(a2 + 8) = v38[0];
      if (v9 == 0) {
        return 0;
      }
      if (*(_DWORD*)(a2 + 12) < v8) {
        return 2;
      }
      v10 = *(_DWORD*)(v6 + 3480);
      if (v10 != 0) {
        v11 = v10 & 7;
        if (v10 >= 8) {
          v14 = (int*)(v6 + 3512);
          v15 = 0;
          v13 = 0;
          v16 = -(__int64)(v10 & 0xFFFFFFF8);
          v17 = &v37;
          do {
            v18 = *(v14 - 6);
            v15 -= 8;
            v19 = *(v14 - 7) + v13;
            *(v17 - 4) = v13;
            *(v17 - 3) = v19;
            v20 = v18 + v19;
            v21 = *(v14 - 4);
            v22 = *(v14 - 5) + v20;
            *(v17 - 2) = v20;
            *(v17 - 1) = v22;
            v23 = v21 + v22;
            v24 = *(v14 - 2);
            v25 = *(v14 - 3) + v23;
            *v17 = v23;
            v17[1] = v25;
            v26 = v24 + v25;
            v27 = *(v14 - 1) + v24 + v25;
            v17[2] = v26;
            v17[3] = v27;
            v28 = *v14;
            v14 += 8;
            v17 += 8;
            v13 = v28 + v27;
          } while (v16 != v15);
          v12 = -v15;
        }
        else {
          v12 = 0;
          v13 = 0;
        }
        if (v11 != 0) {
          v29 = (int*)(v6 + 4 * v12 + 3484);
          v30 = &v36[v12];
          do {
            v31 = *v29++;
            *v30++ = v13;
            --v11;
            v13 += v31;
          } while (v11 != 0);
        }
      }
      if (v8 == 0) {
        return 0;
      }
      v32 = 0;
      while (1) {
        v33 = &v38[v32];
        v34 = v33[20];
        if (*(_DWORD*)(v6 + 3480) <= (unsigned int)v34) {
          break;
        }
        v35 = *(_DWORD*)(a2 + 4) * v32++;
        *(_DWORD*)(*(_QWORD*)(a2 + 16) + v35) =
            v33[532] + (v33[276] + v36[v34]) * *(_DWORD*)(v6 + 3736);
        if (v32 >= v38[0]) {
          return 0;
        }
      }
    }
    return 1;
  }
  return result;
}

__int64 CudaDriverHr_2210c0(_DWORD* a1, _DWORD* a2)
{
  __int64 v5;
  __int64 v6;

  if (a1 == nullptr || *a1 != 0) {
    return 201;
  }
  if ((unsigned int)CudaDriverRoutine_deeb0(a1, 2) != 0) {
    return 201;
  }
  v5 = CudaDriverRoutine_98340(a1);
  CudaDriverRoutine_108520(v5 + 24, 0, 0, 0);
  CudaDriverRoutine_107f90(a1 + 3964, 0, 0);
  *a2 = CudaDriverRoutine_1fe530((__int64)(a1 + 1134));
  CudaDriverRoutine_108070(a1 + 3964);
  v6 = CudaDriverRoutine_98340(a1);
  CudaDriverRoutine_1085d0(v6 + 24);
  return 0;
}

__int64 CudaDriverHr_221180(__int64 a1, unsigned int* a2, _DWORD* a3)
{
  __int64 v7;
  unsigned int v8;
  __int64 v9;

  if (a1 == 0 || *(_DWORD*)a1 != 0 ||
      (unsigned int)CudaDriverRoutine_deeb0(a1, 2) != 0) {
    return 201;
  }
  v7 = CudaDriverRoutine_98340(a1);
  CudaDriverRoutine_108520(v7 + 24, 0, 0, 0);
  CudaDriverRoutine_107f90(a1 + 15856, 0, 0);
  v8 = CudaDriverRoutine_1fe550(*(_QWORD*)(a1 + 2360), (int**)(a1 + 4536),
                                a1 + 13800, a2, a3);
  CudaDriverRoutine_108070(a1 + 15856);
  v9 = CudaDriverRoutine_98340(a1);
  CudaDriverRoutine_1085d0(v9 + 24);
  return v8;
}

__int64 CudaDriverHr_221260(__int64 a1, __int64 a2, unsigned int* a3,
                            __int64 a4, unsigned int* a5)
{
  __int64 v11;
  unsigned int v12;
  __int64 v13;

  if (a1 == 0 || *(_DWORD*)a1 != 0 ||
      (unsigned int)CudaDriverRoutine_deeb0(a1, 2) != 0) {
    return 201;
  }
  v11 = CudaDriverRoutine_98340(a1);
  CudaDriverRoutine_108520(v11 + 24, 0, 0, 0);
  CudaDriverRoutine_107f90(a1 + 15856, 0, 0);
  v12 = CudaDriverRoutine_1fe840(*(_QWORD*)(a1 + 2360), (int**)(a1 + 4536), a2,
                                 a3, a4, a5);
  CudaDriverRoutine_108070(a1 + 15856);
  v13 = CudaDriverRoutine_98340(a1);
  CudaDriverRoutine_1085d0(v13 + 24);
  return v12;
}

__int64 CudaDriverHr_221340(__int64 a1, __int64 a2, __int64 a3)
{
  if (a2 != 0) {
    return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)(a2 + 64) + 18648LL))(
        a1, a3);
  }
  else {
    return 1;
  }
}

__int64 CudaDriverHr_221360(__int64 a1, __int64 a2, unsigned int a3)
{
  if (a2 != 0) {
    return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)(a2 + 64) + 18656LL))(
        a1, a3);
  }
  else {
    return 1;
  }
}

__int64 CudaDriverHr_221380(_QWORD* a1, __int64 a2)
{
  if (a2 == 0) {
    return 1;
  }
  *a1 = (*(__int64 (**)(_QWORD, __int64))(*(_QWORD*)(a2 + 64) + 18984LL))(*a1,
                                                                          127);
  return 0;
}

__int64 CudaDriverHr_2213d0(_QWORD* a1, __int64 a2)
{
  if (a2 == 0) {
    return 1;
  }
  *a1 =
      (*(__int64 (**)(_QWORD, __int64))(*(_QWORD*)(a2 + 64) + 18992LL))(*a1, 1);
  return 0;
}

__int64 CudaDriverHr_221500(__int64* a1, __int64 a2, unsigned int a3)
{
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _OWORD* v7;
  __int128* v8;
  __int64 v9;
  __int128 v10;
  __int128 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _DWORD* v16;
  _DWORD* v17;
  int v18;

  v3 = 1;
  if (a1 != nullptr && a2 != 0) {
    v4 = *a1;
    if (a3 != 0) {
      v5 = 0;
      v6 = a3;
      if (a3 < 8) {
        goto LABEL_9;
      }
      if ((unsigned __int64)(v4 - a2) < 0x20) {
        goto LABEL_9;
      }
      v5 = a3 & 0xFFFFFFF8;
      v7 = (_OWORD*)(v4 + 16);
      v8 = (__int128*)(a2 + 16);
      v9 = v5;
      do {
        v10 = *(v8 - 1);
        v11 = *v8;
        v9 -= 8;
        v8 += 2;
        *(v7 - 1) = v10;
        *v7 = v11;
        v7 += 2;
      } while (v9 != 0);
      if (v5 != a3) {
      LABEL_9:
        v12 = a3 & 7;
        v13 = v5;
        if (v12 != 0) {
          v13 = v5;
          do {
            --v12;
            *(_DWORD*)(v4 + 4 * v13) = *(_DWORD*)(a2 + 4 * v13);
            ++v13;
          } while (v12 != 0);
        }
        if (v5 - (unsigned __int64)a3 <= 0xFFFFFFFFFFFFFFF8LL) {
          v14 = a3 - v13;
          v15 = 4 * v13 + 16;
          v16 = (_DWORD*)(v4 + v15);
          v17 = (_DWORD*)(a2 + v15);
          do {
            v14 -= 8;
            *(v16 - 4) = *(v17 - 4);
            *(v16 - 3) = *(v17 - 3);
            *(v16 - 2) = *(v17 - 2);
            *(v16 - 1) = *(v17 - 1);
            *v16 = *v17;
            v16[1] = v17[1];
            v16[2] = v17[2];
            v18 = v17[3];
            v17 += 8;
            v16[3] = v18;
            v16 += 8;
          } while (v14 != 0);
        }
      }
    }
    else {
      v6 = 0;
    }
    v3 = 0;
    *a1 = v4 + 4 * v6;
  }
  return v3;
}

__int64 CudaDriverHr_221630(_DWORD* a1)
{
  if (a1 == nullptr) {
    return 1;
  }
  *a1 = 2;
  return 0;
}

__int64 CudaDriverHr_221650(_QWORD* a1, __int64 a2)
{
  if (a2 == 0) {
    return 1;
  }
  *a1 = (*(__int64 (**)(_QWORD))(*(_QWORD*)(a2 + 64) + 19008LL))(*a1);
  return 0;
}

__int64 CudaDriverHr_2216a0(_QWORD* a1, __int64 a2)
{
  if (a2 == 0) {
    return 1;
  }
  *a1 = (*(__int64 (**)(_QWORD))(*(_QWORD*)(a2 + 64) + 19184LL))(*a1);
  *a1 = (*(__int64 (**)(void))(*(_QWORD*)(a2 + 64) + 19176LL))();
  return 0;
}

__int64 CudaDriverHr_221700(_QWORD* a1, __int64 a2)
{
  if (a2 == 0) {
    return 1;
  }
  *a1 = (*(__int64 (**)(_QWORD))(*(_QWORD*)(a2 + 64) + 19184LL))(*a1);
  return 0;
}

__int64 CudaDriverHr_221770(_QWORD* a1, __int64 a2)
{
  if (a2 == 0) {
    return 1;
  }
  *a1 =
      (*(__int64 (**)(_QWORD, __int64))(*(_QWORD*)(a2 + 64) + 18992LL))(*a1, 2);
  return 0;
}

__int64 CudaDriverHr_2217c0(__int64* a1, __int64 a2, int a3)
{
  __int64 v3;
  __int64 v5;

  if (a2 == 0) {
    return 1;
  }
  v3 = 18984;
  v5 = *a1;
  if (a3 == 0) {
    v3 = 18992;
  }
  *a1 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)(a2 + 64) + v3))(v5, 64);
  return 0;
}

__int64 CudaDriverHr_221820(_QWORD* a1, __int64 a2)
{
  if (a2 == 0) {
    return 201;
  }
  *a1 = (*(__int64 (**)(_QWORD))(*(_QWORD*)(a2 + 64) + 18912LL))(*a1);
  return 0;
}

__int64 CudaDriverHr_221870(_QWORD* a1, __int64 a2, __int64 a3, unsigned int a4,
                            int a5)
{
  __int64 v6;
  unsigned int v7;
  __int64 result;

  v6 = a5 & 8;
  v7 = a5 & 0xFFFFFFF7;
  result = 1;
  if ((int)(a5 & 0xFFFFFFF7) <= 2) {
    if (v7 < 2) {
    LABEL_10:
      *a1 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64, _QWORD,
                            __int64))(*(_QWORD*)(a2 + 64) + 19112LL))(
          *a1, 0, 0, a2, a3, a4, v6);
      return 0;
    }
    if (v7 != 2) {
      return result;
    }
  LABEL_9:
    v6 = (unsigned int)result | (unsigned int)v6;
    goto LABEL_10;
  }
  if (v7 == 4) {
    LODWORD(result) = 3;
    goto LABEL_9;
  }
  if (v7 == 3) {
    LODWORD(result) = 2;
    goto LABEL_9;
  }
  return result;
}

__int64 CudaDriverHr_221910(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                            int a5)
{
  __int64 v6;
  unsigned int v7;
  __int64 result;

  v6 = a5 & 8;
  v7 = a5 & 0xFFFFFFF7;
  result = 1;
  if ((int)(a5 & 0xFFFFFFF7) <= 2) {
    if (v7 < 2) {
    LABEL_10:
      *a1 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64, __int64,
                            __int64))(*(_QWORD*)(a2 + 64) + 19120LL))(
          *a1, 0, 0, a2, a3, a4, v6);
      return 0;
    }
    if (v7 != 2) {
      return result;
    }
  LABEL_9:
    v6 = (unsigned int)result | (unsigned int)v6;
    goto LABEL_10;
  }
  if (v7 == 4) {
    LODWORD(result) = 3;
    goto LABEL_9;
  }
  if (v7 == 3) {
    LODWORD(result) = 2;
    goto LABEL_9;
  }
  return result;
}

#pragma GCC visibility pop
