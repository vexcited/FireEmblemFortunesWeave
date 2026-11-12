#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CudaDriverRoutine_1084c0(__int64 result);
__int64 CudaDriverRoutine_108520(__int64);
__int64 CudaDriverRoutine_1085b0(__int64);
__int64 CudaDriverRoutine_1085d0(__int64 result);
__int64 CudaDriverRoutine_1128f0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_116fa0(__int64);
__int64 CudaDriverRoutine_121c60(_QWORD);
__int64
CudaDriverRoutine_121c60_alt1(__int64*) __asm__("CudaDriverRoutine_121c60");
__int64 CudaDriverRoutine_121e20(_QWORD);
__int64 CudaDriverRoutine_12df40(_DWORD*, void (*)(void));
__int64 CudaDriverRoutine_12e340(__int64 result);
__int64 CudaDriverRoutine_1a2980(int*, unsigned __int64);
__int64 CudaDriverRoutine_1b46b0(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1b4700(_QWORD);
__int64 CudaDriverRoutine_1b4750(_QWORD);
__int64 CudaDriverRoutine_1db1b0(__int64);
__int64 CudaDriverRoutine_1dbac0(__int64);
__int64 CudaDriverRoutine_1dd0b0(__int64, unsigned __int64);
__int64 CudaDriverRoutine_1ffda0(__int64**, unsigned int);
__int64 CudaDriverRoutine_2d560(unsigned __int64, __int64, __int64, int,
                                __int64*, _QWORD*);
__int64 CudaDriverRoutine_37c10(__int64, __int64, unsigned int,
                                unsigned __int64);
__int64 CudaDriverRoutine_dabb0(__int64, __int64, __int64, int);
__int64 CudaDriverRoutine_dafc0(__int64, __int64, __int64, __int64, int);
__int64 CudaDriverRoutine_df0b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_df0b0_alt1(__int64, unsigned __int64,
                                     unsigned __int64,
                                     char) __asm__("CudaDriverRoutine_df0b0");
__int64 CudaDriverRoutine_ed630(__int64, __int64, __int64, ...);
__int64 CudaDriverStub_102e00(_QWORD);
__int64 CudaDriverStub_112b30(_QWORD);
__int64 CudaDriverStub_116790(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverStub_12db60(_QWORD);
__int64 CudaDriverStub_12db70(_QWORD);
__int64 CudaDriverStub_12db80(_QWORD);
__int64 cuda_driver_misc_helpers_ded50(_QWORD, _QWORD, _QWORD);
__int64 cuda_driver_misc_helpers_ded50_alt1(
    __int64, __int64*, unsigned int) __asm__("cuda_driver_misc_helpers_ded50");
__int64 cuda_driver_misc_helpers_deeb0(_QWORD, _QWORD);
bool CudaDriverRoutine_d47e0(__int64);
extern _DWORD CudaDriverData_1432ddc;
extern _UNKNOWN* CudaDriverData_1422118;
extern __int64 (*CudaDriverData_1423270[3])();
extern __int64 (*CudaDriverData_1434738)(__int64, _QWORD*);
extern int CudaDriverData_1434ac0;
extern int CudaDriverData_14358d0;
void CudaDriverRoutine_41b0();
void CudaDriverRoutine_7370();
void CudaDriverRoutine_7378();
void CudaDriverRoutine_74e8();
void CudaDriverRoutine_74f0();
void CudaDriverRoutine_74f8();
__int64 cuda_driver_misc_2a850(_QWORD* a1, _QWORD* a2, unsigned int a3,
                               __int64 a4, unsigned int a5);
__int64 cuda_driver_misc_2daf0(unsigned __int64 a1, __int64 a2, __int64 a3);
__int64 cuda_driver_misc_33180(_QWORD* a1, _QWORD* a2, _QWORD* a3,
                               unsigned int a4);
__int64 cuda_driver_misc_36a30(__int64 a1);
__int64 cuda_driver_misc_37e80(__int64 a1, __int64 a2, unsigned int a3,
                               __int64 a4);
__int64 cuda_driver_misc_39220(unsigned __int64* a1, unsigned __int64 a2,
                               int a3, unsigned int a4);
__int64 cuda_driver_misc_47600(_QWORD* a1, __int64 a2);

__int64 cuda_driver_misc_2a850(_QWORD* a1, _QWORD* a2, unsigned int a3,
                               __int64 a4, unsigned int a5)
{
  __int64 result;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  v22 = 0;
  v20 = 0;
  v21 = 0;
  v19 = nullptr;
  v18 = 0;
  result = CudaDriverRoutine_121c60(&v22);
  if ((_DWORD)result == 0) {
    result = CudaDriverRoutine_df0b0(v22, &v21, &v20, a5);
    if ((_DWORD)result == 0) {
      if (v20 != 0) {
        return 201;
      }
      else {
        result = CudaDriverRoutine_121e20(v22);
        if ((_DWORD)result == 0) {
          result = CudaDriverRoutine_1128f0(v22, v21, a4, 2, &v18);
          if ((_DWORD)result == 0) {
            if (**(_DWORD**)(v18 + 16) == 1) {
              return 400;
            }
            else {
              result =
                  CudaDriverRoutine_1b46b0(&v19, *(_QWORD*)(v21 + 15976), a3);
              if (v19 != nullptr) {
                v11 = *v19;
                CudaDriverRoutine_1b4700(*v19);
                v12 = *(_QWORD*)(v11 + 48);
                v16 = 0;
                v17 = 0;
                v15 = 0;
                v13 =
                    (*(__int64 (**)(__int64, __int64, _QWORD**, __int64,
                                    __int64))(v12 + 16))(v11, 1, &v19, v18, 1);
                if (v13 == 0) {
                  v13 = (*(__int64 (**)(__int64, __int64*, __int64*, __int64*,
                                        _QWORD*))(*(_QWORD*)(v11 + 48) + 56LL))(
                      v11, &v17, &v16, &v15, v19);
                  v14 = CudaDriverStub_102e00(v17);
                  *a1 = v16 + v14;
                  *a2 = v15;
                }
                CudaDriverRoutine_1b4750(v11);
                return v13;
              }
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 cuda_driver_misc_2daf0(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  __int64 v7;
  __int64 v8;
  void* v9;
  __int64 v11;
  __int64 v12;
  _BYTE v13[8];
  __int64 v14;

  if (a3 == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"The source graph pointer is NULL");
  LABEL_7:
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"hChildGraph is not a valid source graph");
    return 1;
  }
  if (*(_DWORD*)(a3 + 4) != 1) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"The source graph pointer is invalid");
    goto LABEL_7;
  }
  if (CudaDriverRoutine_d47e0(a3)) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"A child graph with memory allocation or free nodes can only "
                 "be updated via cuGraphExecUpdate");
    return 910;
  }
  v7 = CudaDriverRoutine_2d560(a1, a2, a3, 4, nullptr, nullptr);
  if (v7 == 0) {
    return 1;
  }
  v8 = *(_QWORD*)(v7 + 48);
  result = CudaDriverRoutine_dabb0(v8, a3, (__int64)v13, 1);
  if ((_DWORD)result == 0) {
    if (a1 != 0) {
      v9 = CudaDriverData_1422118;
      CudaDriverRoutine_1084c0((__int64)&CudaDriverRoutine_7378 +
                               (_QWORD)CudaDriverData_1422118);
      v11 = CudaDriverRoutine_1a2980(
          *(int**)((char*)&CudaDriverRoutine_7370 + (_QWORD)v9), a1);
      CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_7378 + (_QWORD)v9);
      v12 = v11;
      if (v11 == 0) {
        if (*(_DWORD*)(a1 + 4) == 2) {
          v12 = a1;
        }
        else {
          v12 = 0;
        }
      }
    }
    else {
      v12 = 0;
    }
    return CudaDriverRoutine_dafc0(v12, v8, a3, (__int64)&v14, 1);
  }
  return result;
}

__int64 cuda_driver_misc_33180(_QWORD* a1, _QWORD* a2, _QWORD* a3,
                               unsigned int a4)
{
  __int64 result;
  _QWORD* v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v15 = 0;
  v14 = 0;
  v12 = 0;
  v13 = 0;
  result = CudaDriverRoutine_121c60(&v15);
  if ((_DWORD)result == 0) {
    result = cuda_driver_misc_helpers_ded50(v15, 0, 0);
    if ((_DWORD)result == 0) {
      if (a3 == nullptr) {
        return 400;
      }
      v9 = (_QWORD*)*a3;
      if (*a3 == 0) {
        return 400;
      }
      result = cuda_driver_misc_helpers_deeb0(*v9, a4);
      if ((_DWORD)result != 0) {
        return result;
      }
      if (v9[6] != 0) {
        CudaDriverRoutine_1b4700(v9);
        v10 = (*(__int64 (**)(_QWORD*, __int64*, __int64*, __int64*, _QWORD*))(
            v9[6] + 56LL))(v9, &v14, &v13, &v12, a3);
        CudaDriverRoutine_1b4750(v9);
        if (v10 != 0) {
          return v10;
        }
        else {
          v11 = CudaDriverStub_102e00(v14);
          *a1 = v13 + v11;
          *a2 = v12;
          return 0;
        }
      }
      else {
        return 400;
      }
    }
  }
  return result;
}

__int64 cuda_driver_misc_36a30(__int64 a1)
{
  void* v3;
  __int64 v4;
  __int64 v5;

  if (a1 == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Callback handle cannot be NULL\n");
    return 1;
  }
  CudaDriverRoutine_12df40(&CudaDriverData_1432ddc,
                           (void (*)(void))CudaDriverData_1423270[0]);
  v3 = CudaDriverData_1422118;
  CudaDriverStub_12db60((char*)&CudaDriverRoutine_74e8 +
                        (_QWORD)CudaDriverData_1422118);
  if (*(_QWORD*)((char*)&CudaDriverRoutine_74f8 + (_QWORD)v3) == a1) {
    *(_QWORD*)((char*)&CudaDriverRoutine_74f8 + (_QWORD)v3) =
        *(_QWORD*)(a1 + 16);
    if (*(_QWORD*)((char*)&CudaDriverRoutine_74f0 + (_QWORD)v3) != a1) {
    LABEL_5:
      v4 = *(_QWORD*)(a1 + 24);
      *(_QWORD*)(*(_QWORD*)(a1 + 16) + 24LL) = v4;
      if (v4 != 0) {
        v5 = *(_QWORD*)(a1 + 16);
      LABEL_10:
        *(_QWORD*)(v4 + 16) = v5;
        goto LABEL_11;
      }
      goto LABEL_11;
    }
  }
  else if (*(_QWORD*)((char*)&CudaDriverRoutine_74f0 + (_QWORD)v3) != a1) {
    goto LABEL_5;
  }
  v4 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)((char*)&CudaDriverRoutine_74f0 + (_QWORD)v3) = v4;
  if (v4 != 0) {
    v5 = 0;
    goto LABEL_10;
  }
LABEL_11:
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  CudaDriverStub_12db80((char*)&CudaDriverRoutine_74e8 + (_QWORD)v3);
  CudaDriverRoutine_12e340(a1);
  return 0;
}

__int64 cuda_driver_misc_37e80(__int64 a1, __int64 a2, unsigned int a3,
                               __int64 a4)
{
  unsigned __int64 v4;

  if (a3 > 6) {
    return 1;
  }
  if (((1 << a3) & 0x16) != 0) {
    if ((unsigned int)(a4 - 3) >= 2) {
      if ((_DWORD)a4 != 2) {
        if ((_DWORD)a4 != 1) {
          return 1;
        }
        goto LABEL_24;
      }
      goto LABEL_16;
    }
    return 0;
  }
  if (((1 << a3) & 0x60) == 0) {
    if (a3 != 3) {
      return 1;
    }
    if ((int)a4 <= 2) {
      if ((_DWORD)a4 == 1) {
        if (a4 < 0) {
          return 1;
        }
        goto LABEL_23;
      }
      if ((_DWORD)a4 != 2) {
        return 1;
      }
    LABEL_16:
      v4 = 0xFFFFFFFF00000002LL;
      return CudaDriverRoutine_37c10(a1, a2, a3, v4);
    }
    if ((_DWORD)a4 != 4) {
      if ((_DWORD)a4 == 3) {
        return (unsigned int)CudaDriverStub_12db70(a4 >> 32) == 0;
      }
      return 1;
    }
    return 0;
  }
  if ((unsigned int)(a4 - 3) < 0xFFFFFFFE) {
    return 1;
  }
  if ((_DWORD)a4 != 1) {
    goto LABEL_16;
  }
  if (a4 < 0) {
    return 1;
  }
LABEL_23:
  if (CudaDriverData_1434ac0 > SHIDWORD(a4)) {
  LABEL_24:
    v4 = a4 & 0xFFFFFFFF00000000LL | 1;
    return CudaDriverRoutine_37c10(a1, a2, a3, v4);
  }
  return 1;
}

__int64 cuda_driver_misc_39220(unsigned __int64* a1, unsigned __int64 a2,
                               int a3, unsigned int a4)
{
  __int64 result;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v16 = 0;
  v15 = 0;
  result = CudaDriverRoutine_121c60_alt1(&v16);
  if ((_DWORD)result == 0) {
    result = cuda_driver_misc_helpers_ded50_alt1(v16, &v15, a4);
    if ((_DWORD)result == 0) {
      result = 1;
      if (a1 != nullptr && a3 == 0) {
        v9 = CudaDriverRoutine_1dbac0(*(_QWORD*)(v15 + 80));
        if (v9 != 0 || (v9 = CudaDriverRoutine_1dd0b0(v15, a2)) != 0) {
          v10 = v9;
          v11 = CudaDriverRoutine_1db1b0(v9);
          if ((v11 & 0x78000000) != 0x8000000 &&
              ((v11 >> 26) & 0x1F) - 9 < 0xFFFFFFFE) {
            a2 = 0;
            result = 1;
          LABEL_16:
            *a1 = a2;
            return result;
          }
          v13 = ((unsigned __int64)CudaDriverRoutine_1db1b0(v10) >> 54) & 0x1F;
          result = 1;
          if ((unsigned int)v13 <= 0xF &&
              (((1 << v13) & 0x8330) != 0 ||
               ((1 << v13) & 0x1800) != 0 &&
                   (unsigned int)CudaDriverData_14358d0 >= 2 &&
                   (*(_BYTE*)(*(_QWORD*)(v15 + 64) + 17068LL) & 2) != 0)) {
            v14 = CudaDriverStub_102e00(v10);
            result = 0;
            a2 = v14;
            goto LABEL_16;
          }
        }
        else {
          if ((*((_BYTE*)((_UNKNOWN*)0x1860LL) +
                 (_QWORD)CudaDriverData_1422118) &
               1) != 0) {
            result = 0;
            goto LABEL_16;
          }
          return 1;
        }
      }
    }
  }
  return result;
}

__int64 cuda_driver_misc_47600(_QWORD* a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  unsigned int v10;
  _QWORD v11[2];
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v15 = 0;
  v13 = 0;
  v14 = 0;
  v12 = 0;
  if (a1 == nullptr) {
    return 1;
  }
  *a1 = -1;
  result = CudaDriverRoutine_121c60_alt1(&v12);
  if ((_DWORD)result == 0) {
    result = CudaDriverRoutine_df0b0_alt1(v12, (unsigned __int64)&v14,
                                          (unsigned __int64)&v13, 0);
    if ((_DWORD)result == 0) {
      CudaDriverRoutine_108520(v14 + 24);
      v5 = v13;
      if (v13 != 0) {
        if ((*(_WORD*)((_BYTE*)&CudaDriverRoutine_41b0 +
                       (_QWORD)CudaDriverData_1422118) &
             2) == 0) {
          *(_DWORD*)(a2 + 4) |= 8u;
        }
      }
      else {
        v5 = v14;
      }
      v6 = CudaDriverStub_116790(&v15, v5, a2);
      if (v6 != 0 || CudaDriverData_1434738 == nullptr) {
        v8 = v6;
        CudaDriverRoutine_1085d0(v14 + 24);
        if (v8 != 0) {
          v9 = v15;
          result = v8;
        LABEL_18:
          if (v9 != 0) {
            v10 = result;
            if (CudaDriverData_1434738 != nullptr) {
              v11[0] = *(_QWORD*)(v9 + 48);
              v11[1] = 0;
              CudaDriverData_1434738(3, v11);
              v9 = v15;
            }
            CudaDriverRoutine_116fa0(v9);
            return v10;
          }
          return result;
        }
      }
      else {
        v7 = v15;
        if (v15 != 0) {
          v7 = *(_QWORD*)(v15 + 48);
        }
        v11[0] = v7;
        v11[1] = 0;
        CudaDriverData_1434738(2, v11);
        CudaDriverRoutine_1085d0(v14 + 24);
      }
      result = CudaDriverRoutine_1ffda0((__int64**)(v15 + 88), 8u);
      v9 = v15;
      if ((_DWORD)result == 0) {
        *a1 = CudaDriverStub_112b30(v15);
        return 0;
      }
      goto LABEL_18;
    }
  }
  return result;
}

#pragma GCC visibility pop
