#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CudaDriverRoutine_1077c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_108520(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1085d0(_QWORD);
__int64 CudaDriverRoutine_108620(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_108900(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_10e3a0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_11acc0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD);
__int64 CudaDriverRoutine_121c60(__int64*);
__int64
    CudaDriverRoutine_121c60_alt1(_QWORD) __asm__("CudaDriverRoutine_121c60");
__int64 CudaDriverRoutine_121e20(_QWORD);
__int64 CudaDriverRoutine_1da030(_QWORD);
__int64 CudaDriverRoutine_1db1b0(_QWORD);
__int64 CudaDriverRoutine_1dba10(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1dbe40(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1dc340(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1dd0b0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_36bb0(_QWORD*, __int64, unsigned int);
__int64 CudaDriverRoutine_874c0(_QWORD);
__int64 CudaDriverRoutine_877f0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_87a10(_QWORD);
__int64 CudaDriverRoutine_87c60(_QWORD);
__int64 CudaDriverRoutine_87c90(_QWORD);
__int64 CudaDriverRoutine_8c330(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_ed630(__int64, __int64, __int64, ...);
__int64 CudaDriverRoutine_ed630_alt1(_QWORD, _QWORD, const char*,
                                     ...) __asm__("CudaDriverRoutine_ed630");
__int64 CudaDriverRoutine_eeb70(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverStub_102e00(_QWORD);
__int64 CudaDriverStub_1dbf90(_QWORD);
__int64 CudaDriverStub_1dbff0(_QWORD);
__int64 cuda_driver_misc_helpers_ded50(__int64, __int64*, unsigned int);
__int64 cuda_driver_misc_helpers_ded50_alt1(_QWORD, _QWORD, _QWORD) __asm__(
    "cuda_driver_misc_helpers_ded50");
__int64 cuda_driver_predicates_10e3d0(_QWORD, _QWORD);
__int64 cuda_driver_query_36eb0(_QWORD* a1, __int64* a2, __int64 a3, __int64 a4,
                                unsigned int a5, unsigned int a6);
__int64 cuda_driver_query_38e00(unsigned __int64 a1, __int64* a2, __int64 a3,
                                unsigned int a4);
__int64 cuda_driver_query_39040(__int64* a1, unsigned __int64* a2,
                                unsigned int a3);
__int64 cuda_driver_query_457c0(unsigned __int64 a1, unsigned __int64 a2,
                                __int64 a3, const char* a4, unsigned int a5);
__int64 cuda_driver_query_4a0c0(__int64 a1, __int64 a2, unsigned int* a3,
                                __int64 a4);

__int64 cuda_driver_query_36eb0(_QWORD* a1, __int64* a2, __int64 a3, __int64 a4,
                                unsigned int a5, unsigned int a6)
{
  __int64 result;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v18 = 0;
  v19 = 0;
  result = CudaDriverRoutine_121c60(&v19);
  if ((_DWORD)result != 0) {
    return result;
  }
  result = cuda_driver_misc_helpers_ded50(v19, &v18, a6);
  if ((_DWORD)result != 0) {
    return result;
  }
  if (a1 == nullptr) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Parameter pdptr cannot be NULL");
    return 1;
  }
  if (a2 == nullptr) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Parameter pPitch cannot be NULL");
    return 1;
  }
  if (a5 > 0x10 || ((1 << a5) & 0x10110) == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Parameter ElementSizeBytes is invalid\n");
    return 1;
  }
  if (a3 == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Parameter WidthInBytes cannot be 0");
    return 1;
  }
  if (a4 == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Parameter Height cannot be 0");
    return 1;
  }
  LODWORD(v13) = 16 * a5;
  v14 = *(_QWORD*)(v18 + 64);
  v15 = *(_DWORD*)(v14 + 3920);
  v16 = *(_DWORD*)(v14 + 3936);
  if (16 * a5 <= v15) {
    LODWORD(v13) = v15;
  }
  if ((unsigned int)v13 <= v16) {
    v13 = v16;
  }
  else {
    v13 = (unsigned int)v13;
  }
  v17 = (a3 + v13 - 1) & -v13;
  *a2 = v17;
  return CudaDriverRoutine_36bb0(a1, v17 * a4, a6);
}

__int64 cuda_driver_query_38e00(unsigned __int64 a1, __int64* a2, __int64 a3,
                                unsigned int a4)
{
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v13 = 0;
  v14 = 0;
  if ((a1 | (unsigned __int64)a2) == 0) {
    return 0;
  }
  result = CudaDriverRoutine_121c60_alt1(&v14);
  if ((_DWORD)result == 0) {
    result = cuda_driver_misc_helpers_ded50_alt1(v14, &v13, a4);
    if ((_DWORD)result == 0) {
      v9 = CudaDriverRoutine_1dba10(*(_QWORD*)(v13 + 80), a3);
      if (v9 == 0) {
        v9 = CudaDriverRoutine_1dd0b0(v13, a3);
        if (v9 == 0) {
          v12 = CudaDriverRoutine_1dbe40(0, a3, 0);
          if (v12 == 0) {
            return 500;
          }
          v9 = CudaDriverRoutine_1dc340(v12, *(_QWORD*)(v13 + 80));
          if (v9 == 0) {
            return 500;
          }
        }
      }
      v10 = v9;
      if ((unsigned __int8)CudaDriverStub_1dbff0(v9) == 0 &&
          (CudaDriverRoutine_1db1b0(v10) & 0x7C0000000000000LL) == 0) {
        return 500;
      }
      if (a1 != 0) {
        *(_QWORD*)a1 = CudaDriverStub_102e00(v10);
      }
      if (a2 != nullptr) {
        v11 = CudaDriverStub_1dbf90(v10);
        *a2 = v11;
        return 0;
      }
      return 0;
    }
  }
  return result;
}

__int64 cuda_driver_query_39040(__int64* a1, unsigned __int64* a2,
                                unsigned int a3)
{
  __int64 result;
  char v7;
  __int64 v8;
  char v10;
  __int64 v11;
  char v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;

  v17 = 0;
  v16 = 0;
  v14 = 0;
  v15 = 0;
  result = CudaDriverRoutine_121c60_alt1(&v17);
  if ((_DWORD)result == 0) {
    result = cuda_driver_misc_helpers_ded50_alt1(v17, &v14, a3);
    if ((_DWORD)result == 0) {
      if (a1 != nullptr) {
        result = CudaDriverRoutine_eeb70(v14, &v16, &v15);
        if ((_DWORD)result != 0) {
          return result;
        }
        v7 = CudaDriverRoutine_1da030(*(_QWORD*)(v14 + 80));
        v8 = v16;
        if (v7 != 0 && HIDWORD(v16) != 0) {
          v8 = 0xFFFFFFFFLL;
          v16 = 0xFFFFFFFFLL;
        }
        *a1 = v8;
      }
      else {
        result = CudaDriverRoutine_eeb70(v14, 0, &v15);
        if ((_DWORD)result != 0) {
          return result;
        }
      }
      if (a2 != nullptr) {
        v10 = CudaDriverRoutine_1da030(*(_QWORD*)(v14 + 80));
        v11 = 0xFFFFFFFFLL;
        v12 = v10;
        result = 0;
        if (v15 < 0xFFFFFFFF) {
          v11 = v15;
        }
        if (v12 != 0) {
          v13 = v11;
        }
        else {
          v13 = v15;
        }
        *a2 = v13;
      }
      else {
        return 0;
      }
    }
  }
  return result;
}

__int64 cuda_driver_query_457c0(unsigned __int64 a1, unsigned __int64 a2,
                                __int64 a3, const char* a4, unsigned int a5)
{
  __int64 result;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v16 = 0;
  v15 = 0;
  v14 = 0;
  result = CudaDriverRoutine_121c60_alt1(&v16);
  if ((_DWORD)result == 0) {
    result = CudaDriverRoutine_1077c0(v16, &v15, a3, a5);
    if ((_DWORD)result == 0) {
      if (a4 == nullptr) {
        CudaDriverRoutine_ed630_alt1("CUDA", 0, "name cannot be NULL\n");
        return 1;
      }
      if (*a4 == 0) {
        CudaDriverRoutine_ed630_alt1("CUDA", 0, "name cannot be empty\n");
        return 1;
      }
      if ((a1 | a2) == 0) {
        CudaDriverRoutine_ed630_alt1("CUDA", 0,
                                     "dptr and bytes cannot be NULL\n");
        return 1;
      }
      CudaDriverRoutine_108520(v15 + 24, 0, 0, 0);
      v11 = CudaDriverRoutine_11acc0(a3 + 40, a4, 0, 0, &v13, &v12, &v14);
      CudaDriverRoutine_1085d0(v15 + 24);
      if (v11 != 0) {
        return v11;
      }
      CudaDriverRoutine_1dba10(*(_QWORD*)(v15 + 80), v13);
      if (v14 == 0) {
        CudaDriverRoutine_ed630_alt1(
            "CUDA", 0, "Global host symbol (%s) not tracked by CUDA\n", a4);
        return 1;
      }
      if ((CudaDriverRoutine_1db1b0(v14) & 0x7C0000000000000LL) != 0) {
        if (a1 != 0) {
          *(_QWORD*)a1 = v13;
        }
        result = 0;
        if (a2 != 0) {
          *(_QWORD*)a2 = v12;
        }
      }
      else {
        return 500;
      }
    }
  }
  return result;
}

__int64 cuda_driver_query_4a0c0(__int64 a1, __int64 a2, unsigned int* a3,
                                __int64 a4)
{
  __int64 result;
  __int64 v9;
  int v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  int v19;
  unsigned int v20;
  _DWORD* v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  int v24;
  char v25;
  __int64 v26;
  __int64 v27;
  unsigned int* v28;
  unsigned int v29;
  unsigned int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  __int64 v35;
  unsigned int v36;
  int v37;
  __int64 v38;
  __int64 v39;

  v39 = 0;
  v38 = 0;
  result = CudaDriverRoutine_121c60_alt1(&v39);
  if ((_DWORD)result != 0) {
    return result;
  }
  result = cuda_driver_misc_helpers_ded50_alt1(v39, &v38, 2);
  if ((_DWORD)result != 0) {
    return result;
  }
  result = CudaDriverRoutine_121e20(v39);
  if ((_DWORD)result != 0) {
    return result;
  }
  result = 1;
  if (a1 == 0 || a2 == 0 || *(_DWORD*)(a2 + 136) != 0) {
    return result;
  }
  v9 = v38;
  v10 = *(_DWORD*)a2;
  if (*(int*)a2 > 1) {
    if (v10 == 2) {
      v16 = *(_QWORD*)(a2 + 8);
      v12 = *(_DWORD*)(a2 + 16);
      v13 = *(_DWORD*)(a2 + 20);
      v20 = 1;
      v15 = 0;
      v19 = 0;
      v17 = nullptr;
      v14 = *(_QWORD*)(a2 + 24);
    }
    else {
      if (v10 != 3) {
        return result;
      }
      v21 = *(_DWORD**)(v38 + 64);
      if (*(_QWORD*)(a2 + 24) > (unsigned __int64)(unsigned int)v21[989]) {
        return result;
      }
      if (*(_QWORD*)(a2 + 32) > (unsigned __int64)(unsigned int)v21[990]) {
        return result;
      }
      v22 = *(_QWORD*)(a2 + 40);
      if (v22 > (unsigned int)v21[991] || (unsigned int)v22 % v21[985] != 0) {
        return result;
      }
      v16 = *(_QWORD*)(a2 + 8);
      v12 = *(_DWORD*)(a2 + 16);
      v13 = *(_DWORD*)(a2 + 20);
      v14 = 0;
      v15 = 0;
      v19 = 0;
      v17 = nullptr;
      v20 = 2;
    }
  }
  else if (v10 != 0) {
    if (v10 != 1) {
      return result;
    }
    v11 = *(_QWORD*)(a2 + 8);
    if (v11 == 0) {
      return result;
    }
    if (a4 != 0 && (unsigned int)CudaDriverRoutine_877f0(
                       a4, **(_QWORD**)(v11 + 64)) != 0) {
      return 1;
    }
    v12 = *(_DWORD*)(v11 + 20);
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = nullptr;
    v18 = **(_QWORD**)(v11 + 64);
    v19 = *(_DWORD*)(v18 + 8);
    v20 = *(_DWORD*)(v18 + 104);
  }
  else {
    v17 = *(__int64**)(a2 + 8);
    if (v17 == nullptr) {
      return result;
    }
    if (a4 != 0 &&
        (unsigned int)CudaDriverRoutine_877f0(a4, *(_QWORD*)(a2 + 8)) != 0) {
      return 1;
    }
    v15 = v17[10];
    if (v15 == 0) {
      return 1;
    }
    v12 = *((_DWORD*)v17 + 6);
    v19 = *((_DWORD*)v17 + 2);
    v20 = *((_DWORD*)v17 + 26);
    v13 = 0;
    v14 = 0;
    v16 = 0;
    v9 = *v17;
  }
  if ((*(_DWORD*)a2 & 0xFFFFFFFE) != 2) {
    goto LABEL_39;
  }
  if (v16 == 0 ||
      ((unsigned int)v16 & (*(_DWORD*)(*(_QWORD*)(v38 + 64) + 3936LL) - 1)) !=
          0 ||
      (v12 > 0x20 || ((1LL << v12) & 0x10001070ELL) == 0) && v12 != 80) {
    return 1;
  }
  result = 1;
  if (v13 <= 4 && ((1 << v13) & 0x16) != 0) {
    if (*(_DWORD*)a2 == 2) {
      v37 = v19;
      v36 = CudaDriverRoutine_87a10(v12);
      v23 = (*(__int64 (**)(void))(*(_QWORD*)(v38 + 64) + 19768LL))();
      result = 1;
      if (a3 == nullptr) {
        return result;
      }
      v19 = v37;
      if (v14 / v36 > v23) {
        return result;
      }
    LABEL_40:
      v24 = v19;
      if ((unsigned __int8)CudaDriverRoutine_87c60(v12) == 0 &&
          ((unsigned __int8)CudaDriverRoutine_87c90(v12) == 0 ||
           (a3[4] & 0x10) != 0)) {
        v25 = CudaDriverRoutine_874c0(v12);
        if ((a4 == 0 || v25 == 0) &&
            (v17 == nullptr || (v26 = v17[26]) == 0 ||
             *(unsigned __int8*)(v26 + 24) != 176 || *a3 == 1 && a3[1] == 1)) {
          if (v20 != 0) {
            v27 = v20;
            v28 = a3;
            do {
              v29 = *v28++;
              if (v29 >= 4) {
                return 1;
              }
            } while (--v27 != 0);
          }
          if (a3[3] <= 1 && a3[6] <= 1) {
            v30 = a3[4];
            if (v30 <= 0x7F && ((v24 & 0xFFFFFFFE) == 6 || v30 <= 0x3F) &&
                a3[14] == 0 && a3[15] == 0 && a3[16] == 0 && a3[17] == 0 &&
                a3[18] == 0 && a3[19] == 0 && a3[20] == 0 && a3[21] == 0 &&
                a3[22] == 0 && a3[23] == 0 && a3[24] == 0 && a3[25] == 0) {
              if (v38 != 0) {
                v31 = v38 + 24;
              }
              else {
                v31 = 0;
              }
              if (v9 != 0) {
                v32 = v9 + 24;
              }
              else {
                v32 = 0;
              }
              CudaDriverRoutine_108620(v31, v32, 0, 0, 0);
              if (v15 != 0 && (unsigned __int8)cuda_driver_predicates_10e3d0(
                                  v15, *(_QWORD*)(v38 + 64)) == 0) {
                v34 = 801;
              }
              else {
                v33 = v38;
                if (v38 != v9) {
                  if ((unsigned __int8)CudaDriverRoutine_10e3a0(v38, v9) == 0) {
                    v34 = 705;
                    goto LABEL_88;
                  }
                  v33 = v38;
                }
                v34 = CudaDriverRoutine_8c330(v33, a2, a3, a4, a1);
              }
            LABEL_88:
              if (v38 != 0) {
                v35 = v38 + 24;
              }
              else {
                v35 = 0;
              }
              CudaDriverRoutine_108900(v35, v32, 0);
              return v34;
            }
          }
        }
      }
      return 1;
    }
  LABEL_39:
    if (a3 == nullptr) {
      return 1;
    }
    goto LABEL_40;
  }
  return result;
}

#pragma GCC visibility pop
