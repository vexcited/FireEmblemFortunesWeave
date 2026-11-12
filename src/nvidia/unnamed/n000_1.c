#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64* NgxData_952220;

extern __int64* NgxData_952a48;

__int64 NgxRoutine_27bf0(_DWORD*, __int64);

__int64 NgxRoutine_29cc0(_QWORD);

void __attribute__((noreturn)) NgxRoutine_2b250();

__int64 NgxRoutine_430(_QWORD, _QWORD);

__int64 NgxRoutine_6aed0(_QWORD, _QWORD);

__int64 NgxRoutine_a9430(_QWORD);

__int64 NgxRoutine_b4b90(_QWORD, _QWORD, _QWORD, const char*, ...);

__int64 NgxRoutine_baf70(_QWORD, _QWORD);

__int64 NgxRoutine_e30e0(_QWORD, _QWORD, _QWORD);

__int64 NgxRoutine_e30f0(_QWORD);

__int64 NgxRoutine_e3110(_QWORD, _QWORD);

__int64 NgxRoutine_e3130(_QWORD, _QWORD, _QWORD);

__int64 NgxHr_29ba0(__int64 a1, _DWORD** a2)
{
  NgxRoutine_27bf0(*a2, a1 + 8);
  NgxRoutine_27bf0(*a2, a1 + 104);
  NgxRoutine_27bf0(*a2, a1 + 152);
  NgxRoutine_27bf0(*a2, a1 + 200);
  return NgxRoutine_27bf0(*a2, a1 + 56);
}

__int64 NgxHr_29c00(__int64 a1)
{
  NgxRoutine_29cc0(a1 + 8);
  NgxRoutine_29cc0(a1 + 104);
  NgxRoutine_29cc0(a1 + 152);
  NgxRoutine_29cc0(a1 + 200);
  return NgxRoutine_29cc0(a1 + 56);
}

__int64 NgxHr_29ca0(__int64 result)
{
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_DWORD*)(result + 40) = 0;
  *(_DWORD*)result = -1;
  *(_QWORD*)(result + 24) = -1;
  *(_QWORD*)(result + 32) = -1;
  return result;
}

__int64 NgxHr_29cc0(__int64 a1, __int64 a2)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 8);
  if (result != 0) {
    result = NgxRoutine_430(result, a2);
    *(_QWORD*)(a1 + 8) = 0;
  }
  return result;
}

__int64* NgxHr_2b2a0(_QWORD* a1, unsigned __int8* a2)
{
  unsigned __int64 v2;
  unsigned __int64 v4;
  bool v7;
  unsigned __int64 v8;
  unsigned __int8* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64** v15;
  __int64* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64* v22;
  unsigned __int8* v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64* v29;
  unsigned __int8* v30;

  v2 = a1[1];
  if (v2 == 0 || a1[3] == 0) {
    return nullptr;
  }
  v4 = *a2;
  v7 = (v4 & 1) == 0;
  v8 = v4 >> 1;
  if (v7) {
    v9 = a2 + 1;
  }
  else {
    v9 = *((unsigned __int8**)a2 + 2);
  }
  if (v7) {
    v10 = v8;
  }
  else {
    v10 = *((_QWORD*)a2 + 1);
  }
  v11 = NgxRoutine_baf70(v9, v10);
  v12 = v2 - 1;
  v13 = v11;
  if ((v2 & (v2 - 1)) == 0) {
    v14 = v11 & v12;
    v15 = *(__int64***)(*a1 + 8 * (v11 & v12));
    if (v15 != nullptr) {
      goto LABEL_17;
    }
    return nullptr;
  }
  v14 = v11;
  if (v11 >= v2) {
    v14 = v11 % v2;
  }
  v15 = *(__int64***)(*a1 + 8 * v14);
  if (v15 == nullptr) {
    return nullptr;
  }
LABEL_17:
  v16 = *v15;
  if (*v15 != nullptr) {
    if ((v2 & v12) == 0) {
      while (1) {
        v24 = v16[1];
        if (v13 == v24) {
          v25 = *((unsigned __int8*)v16 + 16);
          if ((v25 & 1) != 0) {
            v26 = v16[3];
          }
          else {
            v26 = v25 >> 1;
          }
          v27 = *a2;
          v28 = *((_QWORD*)a2 + 1);
          if ((v27 & 1) == 0) {
            v28 = v27 >> 1;
          }
          if (v26 == v28) {
            v29 =
                (v25 & 1) != 0 ? (__int64*)v16[4] : (__int64*)((char*)v16 + 17);
            v30 = (v27 & 1) != 0 ? *((unsigned __int8**)a2 + 2) : a2 + 1;
            if ((unsigned int)NgxRoutine_e3110(v29, v30) == 0) {
              return v16;
            }
          }
        }
        else if ((v24 & v12) != v14) {
          return nullptr;
        }
        v16 = (__int64*)*v16;
        if (v16 == nullptr) {
          return v16;
        }
      }
    }
    do {
      v17 = v16[1];
      if (v13 == v17) {
        v18 = *((unsigned __int8*)v16 + 16);
        if ((v18 & 1) != 0) {
          v19 = v16[3];
        }
        else {
          v19 = v18 >> 1;
        }
        v20 = *a2;
        v21 = *((_QWORD*)a2 + 1);
        if ((v20 & 1) == 0) {
          v21 = v20 >> 1;
        }
        if (v19 == v21) {
          v22 = (v18 & 1) != 0 ? (__int64*)v16[4] : (__int64*)((char*)v16 + 17);
          v23 = (v20 & 1) != 0 ? *((unsigned __int8**)a2 + 2) : a2 + 1;
          if ((unsigned int)NgxRoutine_e3110(v22, v23) == 0) {
            return v16;
          }
        }
      }
      else {
        if (v17 >= v2) {
          v17 %= v2;
        }
        if (v17 != v14) {
          return nullptr;
        }
      }
      v16 = (__int64*)*v16;
    } while (v16 != nullptr);
  }
  return v16;
}

__int64 NgxHr_2ca80(unsigned __int8* a1, unsigned __int8* a2,
                    unsigned __int64 a3)
{
  unsigned __int64 v3;
  bool v6;
  unsigned __int64 v7;
  unsigned __int8* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int8* v13;
  unsigned __int8* v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;

  v3 = *a1;
  v6 = (v3 & 1) == 0;
  v7 = v3 >> 1;
  if (v6) {
    v8 = a1 + 1;
  }
  else {
    v8 = *((unsigned __int8**)a1 + 2);
  }
  if (v6) {
    v9 = v7;
  }
  else {
    v9 = *((_QWORD*)a1 + 1);
  }
  v10 = NgxRoutine_e30f0(a2);
  v11 = v9 - a3;
  if (v9 < a3) {
    return -1;
  }
  v12 = v10;
  if (v10 != 0) {
    v13 = &v8[v9];
    if (v11 >= v10) {
      v14 = &v8[a3];
      v15 = *a2;
      do {
        v16 = NgxRoutine_e3130(v14, v15, v11 - v12 + 1);
        if (v16 == 0) {
          break;
        }
        v17 = v16;
        if ((unsigned int)NgxRoutine_e3110(v16, a2) == 0) {
          goto LABEL_16;
        }
        v14 = (unsigned __int8*)(v17 + 1);
        v11 = (__int64)&v13[-v17 - 1];
      } while (v11 >= v12);
    }
    v17 = (__int64)v13;
  LABEL_16:
    if ((unsigned __int8*)v17 == v13) {
      return -1;
    }
    else {
      return v17 - (_QWORD)v8;
    }
  }
  return a3;
}

bool NgxHr_2cc20(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v4 = NgxRoutine_e30f0(a2);
  v5 = *(_BYTE*)a1 >> 1;
  if ((*(_BYTE*)a1 & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 8);
  }
  if (v4 != v5) {
    return false;
  }
  if (v4 == -1) {
    NgxRoutine_2b250();
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 16);
  }
  else {
    v6 = a1 + 1;
  }
  return (unsigned int)NgxRoutine_e3110(v6, a2) == 0;
}

__int64 NgxHr_6ac30(__int64 a1, unsigned int a2, __int64 a3, __int64 a4,
                    _DWORD* a5)
{
  __int64* v9;
  _BOOL4 v10;
  float v11;
  float v12;
  _BOOL4 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 result;
  char v21;
  __int64 v22;
  __int64* v23;
  _BYTE v24[656];

  v9 = NgxData_952220;
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 360LL))(
      *(_QWORD*)(a1 + 8), *NgxData_952220,
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 120LL) + 64LL), 0);
  v10 = false;
  v11 = (float)(int)a5[42];
  v12 = (float)*(int*)(a4 + 512);
  if ((float)(v11 * 1.7) <= v12) {
    v10 = (float)((float)(int)a5[43] * 1.7) <= (float)*(int*)(a4 + 516);
  }
  if ((float)(v11 * 1.5) <= v12) {
    v13 = (float)((float)(int)a5[43] * 1.5) <= (float)*(int*)(a4 + 516);
    if (a5[27] != 0) {
      v10 = false;
      v13 = false;
    }
    if (!v10) {
      goto LABEL_13;
    }
  }
  else {
    if (a5[27] != 0) {
      v10 = false;
    }
    v13 = false;
    if (!v10) {
      goto LABEL_13;
    }
  }
  v14 = a1 + 48LL * a2;
  v15 = *(_QWORD*)(v14 + 624);
  if (v15 != 0) {
    v16 = v14 + 616;
    goto LABEL_17;
  }
LABEL_13:
  if (v13 && (v17 = a1 + 48LL * a2, (v15 = *(_QWORD*)(v17 + 640)) != 0)) {
    v16 = v17 + 632;
  }
  else {
    v18 = a1 + 48LL * a2;
    v15 = *(_QWORD*)(v18 + 608);
    v16 = v18 + 600;
  }
LABEL_17:
  if (v15 == 0) {
    a2 = 0;
  }
  if ((*(unsigned int (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 240LL))(
          *(_QWORD*)(a1 + 8)) != 0) {
    v19 = (*(unsigned int (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 240LL))(
        *(_QWORD*)(a1 + 8), *(_QWORD*)(v16 + 8));
    NgxRoutine_b4b90(
        "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
        "rel/source/features/dlaa/dltss_network.cpp",
        993, "Dispatch", "Error: NVAPI failed %d", v19);
    return 0;
  }
  v23 = NgxData_952a48 + 2;
  NgxRoutine_e30e0(v24, 0, 656);
  v21 = NgxRoutine_6aed0(a1, v24);
  result = 0;
  if ((v21 & 1) != 0) {
    if ((*(unsigned int (**)(_QWORD, __int64**, __int64, _QWORD, _QWORD,
                             _QWORD))(**(_QWORD**)(a1 + 8) + 344LL))(
            *(_QWORD*)(a1 + 8), &v23, *v9, *(unsigned int*)(a1 + 404),
            *(unsigned int*)(a1 + 408), *(unsigned int*)(a1 + 412)) != 0) {
      v22 = (*(unsigned int (**)(_QWORD, __int64**, __int64, _QWORD, _QWORD,
                                 _QWORD))(**(_QWORD**)(a1 + 8) + 344LL))(
          *(_QWORD*)(a1 + 8), &v23, *v9, *(unsigned int*)(a1 + 404),
          *(unsigned int*)(a1 + 408), *(unsigned int*)(a1 + 412));
      NgxRoutine_b4b90(
          "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
          "rel/source/features/dlaa/dltss_network.cpp",
          1007, "Dispatch", "Error: NVAPI failed %d", v22);
      return 0;
    }
    *(_DWORD*)(a1 + 112) = *(_DWORD*)(a1 + 4LL * a2 + 384);
    return 1;
  }
  return result;
}

__int64 NgxHr_76440(__int64 a1, unsigned __int8* a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int8* v4;
  __int64 v6;
  unsigned __int64 v7;
  bool v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  bool v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int8* v16;
  int v17;
  int v18;
  bool v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int8* v22;
  bool v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int8* v27;
  bool v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  int v32;

  v2 = a1 + 8;
  v3 = *(_QWORD*)(a1 + 8);
  if (v3 != 0) {
    v4 = a2 + 1;
    v6 = a1 + 8;
    do {
      v7 = *(unsigned __int8*)(v3 + 32);
      v8 = (v7 & 1) == 0;
      v9 = v7 >> 1;
      if (v8) {
        v10 = v9;
      }
      else {
        v10 = *(_QWORD*)(v3 + 40);
      }
      v11 = *a2;
      if (v8) {
        v12 = v3 + 33;
      }
      else {
        v12 = *(_QWORD*)(v3 + 48);
      }
      v13 = (v11 & 1) == 0;
      v14 = v11 >> 1;
      if (v13) {
        v15 = v14;
      }
      else {
        v15 = *((_QWORD*)a2 + 1);
      }
      if (v13) {
        v16 = v4;
      }
      else {
        v16 = *((unsigned __int8**)a2 + 2);
      }
      v17 = NgxRoutine_e3110(v12, v16);
      if (v10 < v15) {
        v18 = -1;
      }
      else {
        v18 = 1;
      }
      if (v10 == v15) {
        v18 = 0;
      }
      if (v17 != 0) {
        v18 = v17;
      }
      v19 = v18 < 0;
      if (v18 >= 0) {
        v20 = 0;
      }
      else {
        v20 = 8;
      }
      if (!v19) {
        v6 = v3;
      }
      v3 = *(_QWORD*)(v3 + v20);
    } while (v3 != 0);
    if (v6 != v2) {
      v21 = *a2;
      v22 = *((unsigned __int8**)a2 + 2);
      v23 = (v21 & 1) == 0;
      v24 = v21 >> 1;
      if (v23) {
        v25 = v24;
      }
      else {
        v25 = *((_QWORD*)a2 + 1);
      }
      v26 = *(unsigned __int8*)(v6 + 32);
      if (v23) {
        v27 = v4;
      }
      else {
        v27 = v22;
      }
      v28 = (v26 & 1) == 0;
      v29 = v26 >> 1;
      if (v28) {
        v30 = v29;
      }
      else {
        v30 = *(_QWORD*)(v6 + 40);
      }
      if (v28) {
        v31 = v6 + 33;
      }
      else {
        v31 = *(_QWORD*)(v6 + 48);
      }
      v32 = NgxRoutine_e3110(v27, v31);
      if (v32 != 0) {
        if (v32 >= 0) {
          return v6;
        }
      }
      else if (v25 >= v30) {
        return v6;
      }
    }
  }
  return v2;
}

__int64* NgxHr_a30a0(__int64 a1, _QWORD* a2, unsigned __int8* a3)
{
  __int64* v3;
  __int64* v4;
  unsigned __int8* v6;
  __int64* v8;
  unsigned __int64 v9;
  bool v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int8* v14;
  bool v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  int v19;
  unsigned __int64 v20;
  bool v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  bool v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int8* v29;
  int v30;

  v4 = (__int64*)(a1 + 8);
  v3 = *(__int64**)(a1 + 8);
  if (v3 != nullptr) {
    v6 = a3 + 1;
    while (1) {
      v8 = v3;
      v9 = *a3;
      v10 = (v9 & 1) == 0;
      v11 = v9 >> 1;
      if (v10) {
        v12 = v11;
      }
      else {
        v12 = *((_QWORD*)a3 + 1);
      }
      v13 = *((unsigned __int8*)v8 + 32);
      if (v10) {
        v14 = v6;
      }
      else {
        v14 = *((unsigned __int8**)a3 + 2);
      }
      v15 = (v13 & 1) == 0;
      v16 = v13 >> 1;
      if (v15) {
        v17 = v16;
      }
      else {
        v17 = v8[5];
      }
      if (v15) {
        v18 = (__int64)v8 + 33;
      }
      else {
        v18 = v8[6];
      }
      v19 = NgxRoutine_e3110(v14, v18);
      if (v19 != 0) {
        if ((v19 & 0x80000000) == 0) {
          goto LABEL_20;
        }
      LABEL_3:
        v3 = (__int64*)*v8;
        v4 = v8;
        if (*v8 == 0) {
          goto LABEL_39;
        }
      }
      else {
        if (v12 < v17) {
          goto LABEL_3;
        }
      LABEL_20:
        v20 = *((unsigned __int8*)v8 + 32);
        v21 = (v20 & 1) == 0;
        v22 = v20 >> 1;
        if (v21) {
          v23 = (__int64)v8 + 33;
        }
        else {
          v23 = v8[6];
        }
        if (v21) {
          v24 = v22;
        }
        else {
          v24 = v8[5];
        }
        v25 = *a3;
        v26 = (v25 & 1) == 0;
        v27 = v25 >> 1;
        if (v26) {
          v28 = v27;
        }
        else {
          v28 = *((_QWORD*)a3 + 1);
        }
        if (v26) {
          v29 = v6;
        }
        else {
          v29 = *((unsigned __int8**)a3 + 2);
        }
        v30 = NgxRoutine_e3110(v23, v29);
        if (v30 != 0) {
          if ((v30 & 0x80000000) == 0) {
            goto LABEL_39;
          }
        }
        else if (v24 >= v28) {
          goto LABEL_39;
        }
        v4 = v8 + 1;
        v3 = (__int64*)v8[1];
        if (v3 == nullptr) {
          goto LABEL_39;
        }
      }
    }
  }
  v8 = (__int64*)(a1 + 8);
LABEL_39:
  *a2 = v8;
  return v4;
}

bool NgxHr_a4b40(__int64 a1, _DWORD* a2, __int64 a3)
{
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;

  if (*(_DWORD*)a1 != *a2 || *(_DWORD*)(a1 + 4) != a2[1] ||
      *(_DWORD*)(a1 + 16) != a2[4] || *(_DWORD*)(a1 + 8) != a2[2] ||
      *(_DWORD*)(a1 + 12) != a2[3] || *(_DWORD*)(a1 + 24) != a2[6] ||
      *(_DWORD*)(a1 + 28) != a2[7] || *(_DWORD*)(a1 + 32) != a2[8] ||
      (*(_BYTE*)(a1 + 48) & 2) == 0) {
    return false;
  }
  v6 = NgxRoutine_e30f0(a3);
  if (v6 == -1) {
    NgxRoutine_2b250();
  }
  v7 = *(unsigned __int8*)(a1 + 72);
  v8 = v6;
  if ((v7 & 1) != 0) {
    v9 = *(_QWORD*)(a1 + 80);
  }
  else {
    v9 = v7 >> 1;
  }
  if ((v7 & 1) != 0) {
    v10 = *(_QWORD*)(a1 + 88);
  }
  else {
    v10 = a1 + 73;
  }
  return (unsigned int)NgxRoutine_e3110(v10, a3) == 0 && v9 == v8;
}

__int64 NgxHr_a8ee0(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v3;
  unsigned int v4;
  __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  bool v20;
  unsigned __int64 v21;
  int v22;

  v3 = *(_QWORD*)(result + 8);
  if (*(_QWORD*)(result + 16) == v3) {
    return result;
  }
  v4 = 1;
  v7 = result;
  v8 = 0;
  v9 = nullptr;
  v10 = 0;
  while (1) {
    if (v10 == 0) {
      v11 = *(_QWORD*)(v3 + 8 * v8);
      result = NgxRoutine_e30f0(a2);
      v12 = *(_BYTE*)v11 >> 1;
      if ((*(_BYTE*)v11 & 1) != 0) {
        v12 = *(_QWORD*)(v11 + 8);
      }
      if (result == v12) {
        if (result == -1) {
          goto LABEL_36;
        }
        v13 = (*(_BYTE*)v11 & 1) != 0 ? *(_QWORD*)(v11 + 16) : v11 + 1;
        result = NgxRoutine_e3110(v13, a2);
        if ((_DWORD)result == 0) {
          break;
        }
      }
    }
    if (v9 != nullptr) {
      goto LABEL_4;
    }
    v14 = *(_QWORD*)(*(_QWORD*)(v7 + 8) + 8 * v8);
  LABEL_16:
    result = NgxRoutine_e30f0(a3);
    v15 = *(_BYTE*)v14 >> 1;
    if ((*(_BYTE*)v14 & 1) != 0) {
      v15 = *(_QWORD*)(v14 + 8);
    }
    if (result != v15) {
      goto LABEL_3;
    }
    if (result == -1) {
    LABEL_36:
      NgxRoutine_2b250();
    }
    v16 = (*(_BYTE*)v14 & 1) != 0 ? *(_QWORD*)(v14 + 16) : v14 + 1;
    result = NgxRoutine_e3110(v16, a3);
    if ((_DWORD)result != 0) {
    LABEL_3:
      v9 = nullptr;
    }
    else {
      v9 = *(_QWORD**)(*(_QWORD*)(v7 + 8) + 8 * v8);
      if (v10 != 0) {
        v14 = v10;
        v17 = v9[10];
        if (v17 != v10) {
          goto LABEL_28;
        }
      LABEL_33:
        v14 = v17;
        goto LABEL_34;
      }
    }
  LABEL_4:
    v3 = *(_QWORD*)(v7 + 8);
    v8 = v4++;
    if (v8 >= (*(_QWORD*)(v7 + 16) - v3) >> 3) {
      return result;
    }
  }
  v14 = *(_QWORD*)(*(_QWORD*)(v7 + 8) + 8 * v8);
  v10 = v14;
  if (v9 == nullptr) {
    goto LABEL_16;
  }
  v17 = v9[10];
  if (v17 == v14) {
    goto LABEL_33;
  }
LABEL_28:
  v18 = v9[4];
  v19 = *(_QWORD*)(v14 + 40);
  v20 = v19 >= v18;
  v21 = v19 - v18;
  if (v20) {
    *(_QWORD*)(v14 + 40) = v21;
  }
  v22 = *(_DWORD*)(v14 + 72);
  v9[10] = v14;
  *(_DWORD*)(v14 + 72) = v22 + 1;
LABEL_34:
  v9[8] = *(_QWORD*)(v14 + 64);
  return result;
}

__int64 NgxHr_a9260(__int64 result, __int64 a2, __int64 a3)
{
  unsigned int v3;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64* v11;
  __int64 v12;
  bool v13;
  unsigned int v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned int v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned int v20;
  unsigned __int64 v21;
  __int64 v22;

  v3 = *(_DWORD*)(result + 32);
  v6 = result;
  v7 = *(_DWORD*)(result + 36) + 2;
  *(_DWORD*)(result + 36) = v7;
  if (v7 < v3) {
    v9 = *(_QWORD*)(result + 8);
    v8 = *(_QWORD*)(result + 16);
    if (v8 == v9) {
      return result;
    }
    goto LABEL_8;
  }
  v9 = *(_QWORD*)(result + 8);
  v8 = *(_QWORD*)(result + 16);
  if (v8 != v9) {
    v10 = 1;
    v11 = *(__int64**)(result + 8);
    do {
      v12 = *v11++;
      v13 = (v8 - v9) >> 3 > (unsigned __int64)v10++;
      *(_DWORD*)(v12 + 56) = 0;
    } while (v13);
  }
  v7 = 2;
  *(_DWORD*)(result + 36) = 2;
  if (v8 != v9) {
  LABEL_8:
    if (a2 != 0) {
      v14 = 1;
      v15 = 0;
      do {
        v16 = *(_QWORD*)(v9 + 8 * v15);
        if (*(_QWORD*)(v16 + 80) == 0) {
          if (a2 == v16) {
            result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a3 + 16LL))(
                a3, v16);
            v7 = *(_DWORD*)(v6 + 36);
            v9 = *(_QWORD*)(v6 + 8);
            v8 = *(_QWORD*)(v6 + 16);
            *(_DWORD*)(v16 + 56) = v7;
          }
          else {
            *(_DWORD*)(v16 + 56) = v7 - 1;
          }
        }
        v15 = v14++;
      } while (v15 < (v8 - v9) >> 3);
    }
    else {
      v17 = 1;
      v18 = 0;
      do {
        v19 = *(_QWORD*)(v9 + 8 * v18);
        if (*(_QWORD*)(v19 + 80) == 0) {
          result =
              (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a3 + 16LL))(a3, v19);
          *(_DWORD*)(v19 + 56) = *(_DWORD*)(v6 + 36);
          v9 = *(_QWORD*)(v6 + 8);
          v8 = *(_QWORD*)(v6 + 16);
        }
        v18 = v17++;
      } while (v18 < (v8 - v9) >> 3);
    }
    if (v8 != v9) {
      v20 = 1;
      v21 = 0;
      do {
        v22 = *(_QWORD*)(v9 + 8 * v21);
        if (*(_DWORD*)(v22 + 56) <= (unsigned int)(*(_DWORD*)(v6 + 36) - 2) &&
            *(_DWORD*)(v22 + 72) == 0 && *(_QWORD*)(v22 + 80) != 0) {
          result = NgxRoutine_a9430(v6);
          v9 = *(_QWORD*)(v6 + 8);
          v8 = *(_QWORD*)(v6 + 16);
        }
        v21 = v20++;
      } while (v21 < (v8 - v9) >> 3);
    }
  }
  return result;
}

#pragma GCC visibility pop
