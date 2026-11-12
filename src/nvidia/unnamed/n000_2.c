#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 NgxData_2b89338;

extern __int64 NgxData_2b89548;

extern __int64 NgxData_2b89768;

extern __int64 NgxData_2b89978;

extern _UNKNOWN NgxData_2b89a90;

extern __int64 (*NgxData_94eb40[])();

extern __int64 (*NgxData_94ed60[])();

extern __int64 (*NgxData_94f0f0[])();

extern __int64 (*NgxData_94f188[])();

extern __int64 (*NgxData_94f220[])();

extern __int64 (*NgxData_94f2b8[])();

extern __int64* NgxData_951118;

extern _UNKNOWN* NgxData_951120;

extern __int64* NgxData_951130;

extern _UNKNOWN* NgxData_951138;

extern _UNKNOWN* NgxData_9512e8;

extern _UNKNOWN* NgxData_9512f0;

extern _UNKNOWN* NgxData_952228;

extern __int64 NgxData_9546a0;

extern __int64 NgxData_954720;

extern __int64* NgxData_954750;

void __attribute__((noreturn)) NgxRoutine_27cb0();

void __attribute__((noreturn)) NgxRoutine_27cf0();

__int64 NgxRoutine_2b0();

void __attribute__((noreturn)) NgxRoutine_33410();

__int64 NgxRoutine_420(__int64);

__int64 NgxRoutine_430(_QWORD, _QWORD);

_QWORD* NgxRoutine_a55e0(_QWORD* result, __int64, unsigned __int64);

__int64 NgxRoutine_b0d00(_QWORD, _QWORD);

__int64 NgxRoutine_b0e60(_QWORD, _QWORD);

__int64 NgxRoutine_b10c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 NgxRoutine_b1500(_QWORD, _QWORD);

__int64 NgxRoutine_b35d0(_QWORD);

__int64 NgxRoutine_b3620(_QWORD, _QWORD, _QWORD);

_QWORD* NgxRoutine_b3b40(__int64);

__int64 NgxRoutine_b3d80(_QWORD);

__int64 NgxRoutine_b9d60(__int64, __int64, unsigned __int64, __int64, __int64,
                         __int64, int, char);

__int64 NgxRoutine_baf10(_QWORD);

__int64 NgxRoutine_bafa0(_QWORD, _QWORD, _QWORD);

__int64 NgxRoutine_bb400();

void NgxRoutine_bb9a0();

__int64 NgxRoutine_bcd70(_QWORD);

__int64 NgxRoutine_bcf20(_QWORD, _QWORD);

__int64 NgxRoutine_bcf80(_QWORD);

__int64 NgxRoutine_bd650(_QWORD);

__int64 NgxRoutine_be660(_QWORD);

__int64 NgxRoutine_be740(void);

__int64 NgxRoutine_be820(_QWORD, _QWORD);

void __attribute__((noreturn)) NgxRoutine_bf0a0(_QWORD);

__int64 NgxRoutine_db160(_QWORD);

__int64 NgxRoutine_db210(_QWORD, _QWORD);

__int64 NgxRoutine_db240(_QWORD);

__int64 NgxRoutine_db310(_QWORD, _QWORD);

__int64 NgxRoutine_e2360(void);

__int64 NgxRoutine_e30f0(_QWORD);

__int64 NgxRoutine_e3100(_QWORD, _QWORD, _QWORD);

__int64 NgxRoutine_e3120(_QWORD, _QWORD, _QWORD);

__int64 NgxRoutine_e3180(_QWORD);

__int64 NgxRoutine_e3190(_QWORD);

__int64 NgxRoutine_e36b0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 NgxRoutine_e36e0(void);

__int64 NgxRoutine_e36f0(_QWORD);

__int64 NgxRoutine_e3720(_QWORD);

__int64 NgxRoutine_e3730(_QWORD);

__int64 NgxRoutine_e3740(_QWORD, _QWORD);

__int64 NgxRoutine_e3750(_QWORD);

__int64 NgxRoutine_e3760(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 NgxRoutine_e3770(_QWORD, _QWORD);

__int64 NgxRoutine_e3780(_QWORD);

__int64 NgxRoutine_e3790(_QWORD, _QWORD);

__int64 NgxHr_ae980(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  result = *(_QWORD*)(a1 + 8);
  if (result == 0) {
    goto LABEL_6;
  }
  result = NgxRoutine_430(result, a2);
  v4 = *(_QWORD*)(a1 + 16);
  if (v4 == a1 + 25) {
    if (*(_QWORD*)(a1 + 40) != 0) {
      return result;
    }
    goto LABEL_6;
  }
  v5 = 0;
  do {
    v6 = *(_QWORD*)(v4 + 56);
    NgxRoutine_b35d0(v4 + 32);
    NgxRoutine_b35d0(v4 + 16);
    NgxRoutine_b35d0(v4 + 8);
    result = NgxRoutine_430(v4, 64);
    ++v5;
    v4 = v6;
  } while (v6 != a1 + 25);
  if (v5 == *(_QWORD*)(a1 + 40)) {
  LABEL_6:
    *(_QWORD*)(a1 + 8) = 0;
    *(_QWORD*)(a1 + 16) = 0;
    *(_QWORD*)(a1 + 24) = 0;
    *(_QWORD*)(a1 + 40) = 0;
    *(_QWORD*)(a1 + 48) = 0;
    *(_DWORD*)(a1 + 32) = -1;
    *(_DWORD*)(a1 + 36) = -1;
  }
  return result;
}

__int64 NgxHr_b0640(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;

  result = NgxRoutine_b0d00(a1, a2);
  if (result != 0) {
    *(_DWORD*)result = 1;
    if ((*(_BYTE*)(result + 4) & 1) == 0) {
      *(_BYTE*)(result + 4) = *(_BYTE*)(a1 + 72);
    }
    *(_QWORD*)(result + 8) = a3;
  }
  return result;
}

__int64 NgxHr_b0690(__int64 a1, __int64 a2, float a3)
{
  __int64 result;

  result = NgxRoutine_b0d00(a1, a2);
  if (result != 0) {
    *(_DWORD*)result = 4;
    if ((*(_BYTE*)(result + 4) & 1) == 0) {
      *(_BYTE*)(result + 4) = *(_BYTE*)(a1 + 72);
    }
    *(float*)(result + 8) = a3;
  }
  return result;
}

__int64 NgxHr_b06e0(__int64 a1, __int64 a2, double a3)
{
  __int64 result;

  result = NgxRoutine_b0d00(a1, a2);
  if (result != 0) {
    *(_DWORD*)result = 5;
    if ((*(_BYTE*)(result + 4) & 1) == 0) {
      *(_BYTE*)(result + 4) = *(_BYTE*)(a1 + 72);
    }
    *(double*)(result + 8) = a3;
  }
  return result;
}

__int64 NgxHr_b0730(__int64 a1, __int64 a2, int a3)
{
  __int64 result;

  result = NgxRoutine_b0d00(a1, a2);
  if (result != 0) {
    *(_DWORD*)result = 3;
    if ((*(_BYTE*)(result + 4) & 1) == 0) {
      *(_BYTE*)(result + 4) = *(_BYTE*)(a1 + 72);
    }
    *(_DWORD*)(result + 8) = a3;
  }
  return result;
}

__int64 NgxHr_b0780(__int64 a1, __int64 a2, int a3)
{
  __int64 result;

  result = NgxRoutine_b0d00(a1, a2);
  if (result != 0) {
    *(_DWORD*)result = 2;
    if ((*(_BYTE*)(result + 4) & 1) == 0) {
      *(_BYTE*)(result + 4) = *(_BYTE*)(a1 + 72);
    }
    *(_DWORD*)(result + 8) = a3;
  }
  return result;
}

__int64 NgxHr_b07d0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;

  result = NgxRoutine_b0d00(a1, a2);
  if (result != 0) {
    *(_DWORD*)result = 7;
    if ((*(_BYTE*)(result + 4) & 1) == 0) {
      *(_BYTE*)(result + 4) = *(_BYTE*)(a1 + 72);
    }
    *(_QWORD*)(result + 8) = a3;
  }
  return result;
}

__int64 NgxHr_b0820(__int64 a1, __int64 a2, unsigned __int64* a3)
{
  unsigned int v4;
  __int64 v5;
  int v6;
  unsigned __int64 v7;

  v4 = -1160773616;
  v5 = NgxRoutine_b0d00(a1, a2);
  if (v5 != 0) {
    v6 = *(_DWORD*)v5;
    if (*(int*)v5 <= 2) {
      if (v6 == 1) {
        v7 = *(_QWORD*)(v5 + 8);
        goto LABEL_13;
      }
      if (v6 == 2) {
        v7 = *(int*)(v5 + 8);
        goto LABEL_13;
      }
    }
    else {
      switch (v6) {
      case 3:
        v7 = *(unsigned int*)(v5 + 8);
        goto LABEL_13;
      case 5:
        v7 = (unsigned __int64)*(double*)(v5 + 8);
        goto LABEL_13;
      case 4:
        v7 = (unsigned __int64)*(float*)(v5 + 8);
      LABEL_13:
        v4 = 1;
        *a3 = v7;
        break;
      default:
        break;
      }
    }
  }
  return v4;
}

__int64 NgxHr_b08c0(__int64 a1, __int64 a2, float* a3)
{
  unsigned int v4;
  __int64 v5;
  int v6;
  float v7;

  v4 = -1160773616;
  v5 = NgxRoutine_b0d00(a1, a2);
  if (v5 != 0) {
    v6 = *(_DWORD*)v5;
    if (*(int*)v5 <= 2) {
      if (v6 == 1) {
        v7 = (float)*(unsigned __int64*)(v5 + 8);
        goto LABEL_13;
      }
      if (v6 == 2) {
        v7 = (float)*(int*)(v5 + 8);
        goto LABEL_13;
      }
    }
    else {
      switch (v6) {
      case 3:
        v7 = (float)*(unsigned int*)(v5 + 8);
        goto LABEL_13;
      case 5:
        v7 = *(double*)(v5 + 8);
        goto LABEL_13;
      case 4:
        v7 = *(float*)(v5 + 8);
      LABEL_13:
        v4 = 1;
        *a3 = v7;
        break;
      default:
        break;
      }
    }
  }
  return v4;
}

__int64 NgxHr_b0970(__int64 a1, __int64 a2, double* a3)
{
  unsigned int v4;
  __int64 v5;
  unsigned __int64 v6;
  int v7;
  double v8;

  v4 = -1160773616;
  v5 = NgxRoutine_b0d00(a1, a2);
  if (v5 == 0) {
    return v4;
  }
  v7 = *(_DWORD*)v5;
  if (*(int*)v5 > 2) {
    if (v7 != 3) {
      if (v7 == 5) {
        v8 = *(double*)(v5 + 8);
        goto LABEL_14;
      }
      if (v7 == 4) {
        v8 = *(float*)(v5 + 8);
      LABEL_14:
        v4 = 1;
        *a3 = v8;
        return v4;
      }
      return v4;
    }
    LODWORD(v6) = *(_DWORD*)(v5 + 8);
  LABEL_13:
    v8 = (double)v6;
    goto LABEL_14;
  }
  if (v7 == 1) {
    v6 = *(_QWORD*)(v5 + 8);
    goto LABEL_13;
  }
  if (v7 == 2) {
    v8 = (double)*(int*)(v5 + 8);
    goto LABEL_14;
  }
  return v4;
}

__int64 NgxHr_b0a10(__int64 a1, __int64 a2, unsigned int* a3)
{
  unsigned int v4;
  int* v5;
  int v6;
  unsigned int v7;

  v4 = -1160773616;
  v5 = (int*)NgxRoutine_b0d00(a1, a2);
  if (v5 == nullptr) {
    return v4;
  }
  v6 = *v5;
  if (*v5 <= 2) {
    if (v6 != 1 && v6 != 2) {
      return v4;
    }
  LABEL_9:
    v7 = v5[2];
    goto LABEL_11;
  }
  switch (v6) {
  case 3:
    goto LABEL_9;
  case 5:
    v7 = (unsigned int)*((double*)v5 + 1);
    goto LABEL_11;
  case 4:
    v7 = (unsigned int)*((float*)v5 + 2);
  LABEL_11:
    v4 = 1;
    *a3 = v7;
    break;
  default:
    break;
  }
  return v4;
}

__int64 NgxHr_b0aa0(__int64 a1, __int64 a2, int* a3)
{
  unsigned int v4;
  int* v5;
  int v6;
  int v7;

  v4 = -1160773616;
  v5 = (int*)NgxRoutine_b0d00(a1, a2);
  if (v5 == nullptr) {
    return v4;
  }
  v6 = *v5;
  if (*v5 <= 2) {
    if (v6 != 1 && v6 != 2) {
      return v4;
    }
  LABEL_9:
    v7 = v5[2];
    goto LABEL_11;
  }
  switch (v6) {
  case 3:
    goto LABEL_9;
  case 5:
    v7 = (int)*((double*)v5 + 1);
    goto LABEL_11;
  case 4:
    v7 = (int)*((float*)v5 + 2);
  LABEL_11:
    v4 = 1;
    *a3 = v7;
    break;
  default:
    break;
  }
  return v4;
}

__int64 NgxHr_b0b30(__int64 a1, __int64 a2, _QWORD* a3)
{
  unsigned int v4;
  __int64 v5;

  v4 = -1160773616;
  v5 = NgxRoutine_b0d00(a1, a2);
  if (v5 != 0 && (*(_DWORD*)v5 & 0xFFFFFFFE) == 6) {
    v4 = 1;
    *a3 = *(_QWORD*)(v5 + 8);
  }
  return v4;
}

_QWORD* NgxHr_b0b80(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  unsigned int v3;
  unsigned __int64 v4;
  __int64 v5;
  _QWORD* i;
  __int64 v7;

  v2 = result[1];
  v1 = result[2];
  if (v1 != v2) {
    v3 = 1;
    v4 = 0;
    do {
      v5 = *(_QWORD*)(v2 + 16 * v4);
      if ((*(_BYTE*)(v5 + 4) & 1) == 0) {
        *(_QWORD*)(v5 + 5) = 0;
        *(_DWORD*)(v5 + 12) = 0;
        v2 = result[1];
        v1 = result[2];
        *(_DWORD*)v5 = 0;
        *(_BYTE*)(v5 + 4) = 0;
      }
      v4 = v3++;
    } while (v4 < (v1 - v2) >> 4);
  }
  for (i = (_QWORD*)result[6]; i != nullptr; i = (_QWORD*)*i) {
    v7 = i[5];
    if ((*(_BYTE*)(v7 + 4) & 1) == 0) {
      *(_DWORD*)v7 = 0;
      *(_BYTE*)(v7 + 4) = 0;
      *(_QWORD*)(v7 + 5) = 0;
      *(_DWORD*)(v7 + 12) = 0;
    }
  }
  return result;
}

_QWORD* NgxHr_b0c20(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;
  char* v4;
  char* v5;
  signed __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;

  v2 = (_QWORD*)NgxRoutine_420(88);
  v3 = NgxData_9546a0;
  v4 = (char*)a1[1];
  v5 = (char*)a1[2];
  v2[2] = 0;
  v2[3] = 0;
  v6 = v5 - v4;
  *v2 = v3 + 16;
  v2[1] = 0;
  if (v5 != v4) {
    if (v6 < 0) {
      NgxRoutine_33410();
    }
    v7 = (_QWORD*)NgxRoutine_420(v5 - v4);
    v2[1] = v7;
    v2[3] = (char*)v7 + v6;
    do {
      v8 = *((_QWORD*)v4 + 1);
      *v7 = *(_QWORD*)v4;
      v7[1] = v8;
      if (v8 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                  memory_order_relaxed);
      }
      v4 += 16;
      v7 += 2;
    } while (v4 != v5);
    v2[2] = v7;
  }
  NgxRoutine_b1500(v2 + 4, a1 + 4);
  v9 = a1[10];
  v2[9] = a1[9];
  v2[10] = v9;
  *v2 = NgxData_94eb40;
  NgxRoutine_b3d80(v2);
  return v2;
}

__int64 NgxHr_b0d00(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 result;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  _QWORD v15[2];
  char* v16;
  char v17;
  _QWORD* v18;

  if (a2 == 0) {
    return 0;
  }
  if (*(_BYTE*)a2 == 35) {
    v3 = *(_QWORD*)(a1 + 8);
    v4 = (__int64*)(a1 + 8);
    v5 = *(unsigned __int16*)(a2 + 1);
    v6 = (*(_QWORD*)(a1 + 16) - v3) >> 4;
    if (v6 <= v5) {
      NgxRoutine_b0e60(v4, v5 - v6 + 1);
      v3 = *v4;
    }
    return *(_QWORD*)(v3 + 16 * v5);
  }
  v9 = NgxRoutine_e30f0(a2);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    NgxRoutine_27cb0();
  }
  v10 = v9;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v9 | 7) + 1;
    }
    v12 = (char*)NgxRoutine_420(v13);
    v15[1] = v10;
    v16 = v12;
    v11 = a2;
    v15[0] = v13 | 1;
    goto LABEL_15;
  }
  v11 = a2;
  LOBYTE(v15[0]) = 2 * v9;
  v12 = (char*)v15 + 1;
  if (v9 != 0) {
  LABEL_15:
    NgxRoutine_e3100(v12, v11, v10);
  }
  v12[v10] = 0;
  v18 = v15;
  result = *(
      _QWORD*)(NgxRoutine_b10c0(a1 + 32, v15, NgxData_952228, &v18, &v17) + 40);
  if ((v15[0] & 1) != 0) {
    v14 = result;
    NgxRoutine_430(v16, v15[0] & 0xFFFFFFFFFFFFFFFELL);
    return v14;
  }
  return result;
}

__int64* NgxHr_b0e60(__int64* result, unsigned __int64 a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64* v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  _QWORD* v18;
  unsigned __int64 v19;
  _QWORD* v20;
  _QWORD* v21;
  _QWORD* v22;
  _QWORD* v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  v3 = (_QWORD*)result[1];
  v2 = result[2];
  v4 = result;
  if (a2 <= (v2 - (__int64)v3) >> 4) {
    if (a2 != 0) {
      v11 = &v3[2 * a2];
      v12 = NgxData_954720 + 16;
      do {
        v13 = (_QWORD*)NgxRoutine_420(16);
        *v13 = 0;
        v13[1] = 0;
        *v3 = v13;
        result = (__int64*)NgxRoutine_420(32);
        v3[1] = result;
        v3 += 2;
        *result = v12;
        result[1] = 0;
        result[2] = 0;
        result[3] = (__int64)v13;
      } while (v3 != v11);
      v3 = v11;
    }
    v4[1] = (__int64)v3;
  }
  else {
    v5 = (__int64)v3 - *result;
    v6 = a2 + (v5 >> 4);
    if (v6 >> 60 != 0) {
      NgxRoutine_33410();
    }
    v7 = v2 - *result;
    if (v7 >> 3 > v6) {
      v6 = v7 >> 3;
    }
    if ((unsigned __int64)v7 >= 0x7FFFFFFFFFFFFFF0LL) {
      v8 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v8 = v6;
    }
    if (v8 != 0) {
      if (v8 >> 60 != 0) {
        NgxRoutine_27cf0();
      }
      v9 = a2;
      v10 = NgxRoutine_420(16 * v8);
      a2 = v9;
    }
    else {
      v10 = 0;
    }
    v14 = v10 + v5;
    v15 = v10 + v5 + 16 * a2;
    v16 = (_QWORD*)(v10 + v5);
    v17 = NgxData_954720 + 16;
    do {
      v18 = (_QWORD*)NgxRoutine_420(16);
      *v18 = 0;
      v18[1] = 0;
      *v16 = v18;
      result = (__int64*)NgxRoutine_420(32);
      v16[1] = result;
      v16 += 2;
      *result = v17;
      result[1] = 0;
      result[2] = 0;
      result[3] = (__int64)v18;
    } while (v16 != (_QWORD*)v15);
    v19 = v10 + 16 * v8;
    v20 = (_QWORD*)*v4;
    v21 = (_QWORD*)v4[1];
    v22 = (_QWORD*)(v14 + *v4 - (_QWORD)v21);
    if (v21 != (_QWORD*)*v4) {
      v23 = (_QWORD*)*v4;
      v24 = v22;
      do {
        v25 = v23[1];
        *v24 = *v23;
        v24[1] = v25;
        v24 += 2;
        *v23 = 0;
        v23[1] = 0;
        v23 += 2;
      } while (v23 != v21);
      do {
        v26 = v20[1];
        if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
          result = (__int64*)NgxRoutine_baf10(v26);
        }
        v20 += 2;
      } while (v20 != v21);
      v20 = (_QWORD*)*v4;
    }
    v27 = v4[2];
    *v4 = (__int64)v22;
    v4[1] = v15;
    v4[2] = v19;
    if (v20 != nullptr) {
      return (__int64*)NgxRoutine_430(v20, v27 - (_QWORD)v20);
    }
  }
  return result;
}

__int64 NgxHr_b1dc0(__int64* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 result;

  v1 = a1[2];
  if (v1 != 0) {
    while (1) {
      v3 = *(_QWORD*)v1;
      v4 = *(_QWORD*)(v1 + 48);
      if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        break;
      }
      if ((*(_BYTE*)(v1 + 16) & 1) != 0) {
        goto LABEL_7;
      }
    LABEL_3:
      NgxRoutine_430(v1, 56);
      v1 = v3;
      if (v3 == 0) {
        goto LABEL_10;
      }
    }
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    NgxRoutine_baf10(v4);
    if ((*(_BYTE*)(v1 + 16) & 1) == 0) {
      goto LABEL_3;
    }
  LABEL_7:
    NgxRoutine_430(*(_QWORD*)(v1 + 32),
                   *(_QWORD*)(v1 + 16) & 0xFFFFFFFFFFFFFFFELL);
    goto LABEL_3;
  }
LABEL_10:
  result = *a1;
  *a1 = 0;
  if (result != 0) {
    return NgxRoutine_430(result, 8 * a1[1]);
  }
  return result;
}

__int64 NgxHr_b3550(_QWORD* a1, __int64 a2)
{
  _QWORD* v4;
  __int64* v5;
  __int64 v6;

  *a1 = 0;
  v4 = (_QWORD*)NgxRoutine_420(48);
  v5 = NgxData_954750;
  v4[2] = 0;
  v4[3] = 0;
  *a1 = v4;
  *v4 = v5 + 2;
  v4[1] = 0;
  v4[4] = 0;
  v4[5] = 32;
  v6 = NgxRoutine_e30f0(a2);
  return NgxRoutine_b3620(v4, a2, v6 + 1);
}

__int64 NgxHr_b35d0(__int64* a1)
{
  __int64 result;

  result = *a1;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  *a1 = 0;
  return result;
}

__int64 NgxHr_b3a80(_QWORD* a1, __int64 a2)
{
  __int64 result;

  *a1 = NgxData_954750 + 2;
  result = a1[1];
  if (result != 0) {
    result = NgxRoutine_430(result, a2);
    a1[1] = 0;
    a1[3] = 0;
    a1[4] = 0;
  }
  return result;
}

__int64 NgxHr_b3ad0(_QWORD* a1, __int64 a2)
{
  _QWORD* v2;

  *a1 = NgxData_94ed60;
  if (a1[1] != 0) {
    v2 = a1;
    NgxRoutine_430(a1[1], a2);
    a1 = v2;
    v2[1] = 0;
    v2[3] = 0;
    v2[4] = 0;
  }
  return NgxRoutine_430(a1, 48);
}

_QWORD* NgxHr_b3d80(_QWORD* a1)
{
  __int64 v1;
  unsigned int v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;

  v1 = a1[1];
  if (a1[2] != v1) {
    v3 = 1;
    v4 = 0;
    v5 = NgxData_954720 + 16;
    do {
      v6 = v1 + 16 * v4;
      v7 = (_QWORD*)NgxRoutine_420(16);
      v8 = *(_QWORD*)(*(_QWORD*)v6 + 8LL);
      *v7 = **(_QWORD**)v6;
      v7[1] = v8;
      v9 = (__int64*)NgxRoutine_420(32);
      v10 = *(_QWORD*)(v6 + 8);
      *v9 = v5;
      v9[1] = 0;
      v9[2] = 0;
      v9[3] = (__int64)v7;
      *(_QWORD*)v6 = v7;
      *(_QWORD*)(v6 + 8) = v9;
      if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        NgxRoutine_baf10(v10);
      }
      v1 = a1[1];
      v4 = v3++;
    } while (v4 < (a1[2] - v1) >> 4);
  }
  v11 = (_QWORD*)a1[6];
  if (v11 != nullptr) {
    v12 = NgxData_954720 + 16;
    do {
      v13 = (_QWORD*)NgxRoutine_420(16);
      v14 = *(_QWORD*)(v11[5] + 8LL);
      *v13 = *(_QWORD*)v11[5];
      v13[1] = v14;
      v15 = (__int64*)NgxRoutine_420(32);
      v16 = v11[6];
      *v15 = v12;
      v15[1] = 0;
      v15[2] = 0;
      v15[3] = (__int64)v13;
      v11[5] = v13;
      v11[6] = v15;
      if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
        NgxRoutine_baf10(v16);
      }
      v11 = (_QWORD*)*v11;
    } while (v11 != nullptr);
  }
  return NgxRoutine_b3b40((__int64)a1);
}

__int64 NgxHr_b3ef0(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 result;

  v3 = NgxData_9546a0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_BYTE*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = a2;
  *(_QWORD*)a1 = v3 + 16;
  *(_QWORD*)(a1 + 8) = 0;
  *(_DWORD*)(a1 + 64) = 1065353216;
  NgxRoutine_b3b40(a1);
  *(_BYTE*)(a1 + 72) = 1;
  (*(void (**)(__int64, const char*, _QWORD))(*(_QWORD*)a1 + 32LL))(
      a1, "Internal_DLAA_Text", 0);
  (*(void (**)(__int64, const char*, _QWORD))(*(_QWORD*)a1 + 32LL))(
      a1, "Internal_DLAA_History_0", 0);
  result = (*(__int64 (**)(__int64, const char*, _QWORD))(*(_QWORD*)a1 + 32LL))(
      a1, "Internal_DLAA_History_1", 0);
  *(_BYTE*)(a1 + 72) = 0;
  return result;
}

__int64 NgxHr_b9f90(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4,
                    int a5, char a6, float a7, float a8, float a9, float a10)
{
  return NgxRoutine_b9d60(
      a1, a2, a3, LODWORD(a7) | ((unsigned __int64)LODWORD(a8) << 32),
      LODWORD(a9) | ((unsigned __int64)LODWORD(a10) << 32), a4, a5, a6);
}

__int64 NgxHr_b9fd0(_QWORD* a1, __int64 a2, unsigned __int64 a3,
                    unsigned int a4)
{
  NgxRoutine_a55e0(a1, a2, a3);
  if (a3 == 0 || *(_DWORD*)(a3 + 48) != 1) {
    return 4294967291LL;
  }
  NgxRoutine_e36b0(a2, *(_QWORD*)a3, 0, -1, a4);
  return 0;
}

__int64 NgxHr_ba1a0(__int64 result, __int64* a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 (*v5)(__int64, int*);
  __int64 v6;
  int v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  if (*((_DWORD*)a2 + 12) == 1) {
    v5 = *(__int64 (**)(__int64, int*))(result + 872);
    if (v5 != nullptr) {
      v12 = v3;
      v13 = v4;
      v6 = *(_QWORD*)(result + 840);
      v8 = 0;
      v7 = 1000128000;
      v9 = 9;
      v10 = *a2;
      v11 = a3;
      return v5(v6, &v7);
    }
  }
  return result;
}

__int64 NgxHr_ba200(__int64 result, __int64* a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  void (*v5)(_QWORD, int*);
  __int64 v7;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  if (*((_DWORD*)a2 + 12) == 0) {
    v5 = *(void (**)(_QWORD, int*))(result + 872);
    if (v5 != nullptr) {
      v17 = v3;
      v18 = v4;
      v13 = 0;
      v7 = result;
      v14 = 14;
      v9 = *a2;
      v12 = 1000128000;
      v15 = v9;
      v16 = a3;
      v5(*(_QWORD*)(result + 840), &v12);
      v10 = a2[1];
      v11 = *(_QWORD*)(v7 + 840);
      v12 = 1000128000;
      v13 = 0;
      v14 = 10;
      v15 = v10;
      v16 = a3;
      return (*(__int64 (**)(__int64, int*))(v7 + 872))(v11, &v12);
    }
  }
  return result;
}

__int64 NgxHr_baf10(__int64 result)
{
  if (atomic_load_explicit((atomic_ullong* volatile)(result + 16),
                           memory_order_acquire) == 0 ||
      atomic_fetch_add((atomic_ullong* volatile)(result + 16),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 32LL))(result);
  }
  return result;
}

void __attribute__((noreturn)) NgxHr_baf40()
{
  __int64 v0;

  v0 = NgxRoutine_e36e0();
  NgxRoutine_e36f0(v0);
  __udf(0);
}

__int64 NgxHr_baf70(__int64 a1, __int64 a2)
{
  char v3;

  return NgxRoutine_bafa0(&v3, a1, a2);
}

__int64 NgxHr_bb710(__int64 a1, __int64 a2)
{
  __int64 v4;
  char* v5;
  __int64 result;
  _BYTE v7[8];

  *(_QWORD*)(a1 + 168) = NgxData_951118 + 2;
  v4 = a1 + 168;
  *(_QWORD*)(a1 + 272) = 0;
  NgxRoutine_db160(a1 + 176);
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 32) = 0;
  *(_QWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 24) = 0;
  *(_QWORD*)(v4 + 64) = a2;
  *(_QWORD*)(v4 + 80) = v4 + 104;
  *(_BYTE*)(v4 + 96) = 0;
  *(_QWORD*)v4 = NgxData_94f0f0;
  *(_DWORD*)(v4 + 92) = -1;
  NgxRoutine_db210(v7, v4 + 8);
  (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 16LL))(v4, v7);
  NgxRoutine_db240(v7);
  v5 = (char*)NgxData_951120;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 16) = v5 + 64;
  *(_QWORD*)a1 = v5 + 24;
  *(_QWORD*)(a1 + 8) = 0;
  result = NgxRoutine_be820(a1 + 16, v4);
  *(_QWORD*)(a1 + 152) = 0;
  *(_DWORD*)(a1 + 160) = -1;
  return result;
}

__int64 NgxHr_bb830(__int64 a1, __int64 a2)
{
  __int64 v4;
  char* v5;
  __int64 result;
  _BYTE v7[8];

  *(_QWORD*)(a1 + 168) = NgxData_951130 + 2;
  v4 = a1 + 168;
  *(_QWORD*)(a1 + 272) = 0;
  NgxRoutine_db160(a1 + 176);
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 32) = 0;
  *(_QWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 24) = 0;
  *(_QWORD*)(v4 + 64) = a2;
  *(_QWORD*)(v4 + 80) = v4 + 104;
  *(_BYTE*)(v4 + 96) = 0;
  *(_QWORD*)v4 = NgxData_94f220;
  *(_DWORD*)(v4 + 92) = -1;
  NgxRoutine_db210(v7, v4 + 8);
  (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 16LL))(v4, v7);
  NgxRoutine_db240(v7);
  v5 = (char*)NgxData_951138;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 16) = v5 + 64;
  *(_QWORD*)a1 = v5 + 24;
  *(_QWORD*)(a1 + 8) = 0;
  result = NgxRoutine_be820(a1 + 16, v4);
  *(_QWORD*)(a1 + 152) = 0;
  *(_DWORD*)(a1 + 160) = -1;
  return result;
}

__int64 NgxHr_bb950()
{
  NgxRoutine_bcd70(&NgxData_2b89338);
  NgxRoutine_bcd70(&NgxData_2b89548);
  NgxRoutine_bd650(&NgxData_2b89768);
  return NgxRoutine_bd650(&NgxData_2b89978);
}

void NgxHr_bb9a0()
{
  if ((atomic_load_explicit((atomic_uchar* volatile)&NgxData_2b89a90,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)NgxRoutine_e3180(&NgxData_2b89a90) != 0) {
    NgxRoutine_bb400();
    NgxRoutine_2b0();
    NgxRoutine_e3190(&NgxData_2b89a90);
  }
}

void __attribute__((noreturn)) NgxHr_bba14(__int64 a1)
{
  NgxRoutine_e3730(&NgxData_2b89a90);
  NgxRoutine_e3720(a1);
  __udf(0);
}

__int64 NgxHr_bba30(_QWORD* a1)
{
  *a1 = NgxData_951118 + 2;
  NgxRoutine_db240(a1 + 1);
  return NgxRoutine_430(a1, 104);
}

__int64 NgxHr_bba70(__int64 a1, __int64 a2)
{
  __int64* v3;
  __int64 v4;
  __int64 result;

  v3 = (__int64*)NgxRoutine_db310(a2, NgxData_9512e8);
  v4 = *v3;
  *(_QWORD*)(a1 + 72) = v3;
  *(_DWORD*)(a1 + 88) = (*(__int64 (**)(void*))(v4 + 48))((void*)v3);
  result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 72) + 56LL))(
      *(_QWORD*)(a1 + 72));
  *(_BYTE*)(a1 + 97) = result & 1;
  if (*(int*)(a1 + 88) >= 9) {
    NgxRoutine_bf0a0("unsupported locale for standard input");
  }
  return result;
}

__int64 NgxHr_bbe20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64* v6;
  __int64 v7;
  __int64 result;
  _BYTE v9[8];

  *(_QWORD*)a1 = NgxData_951118 + 2;
  NgxRoutine_db160(a1 + 8);
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 64) = a2;
  *(_QWORD*)a1 = NgxData_94f188;
  NgxRoutine_db210(v9, a1 + 8);
  v6 = (__int64*)NgxRoutine_db310(v9, NgxData_9512e8);
  NgxRoutine_db240(v9);
  v7 = *v6;
  *(_QWORD*)(a1 + 72) = v6;
  *(_QWORD*)(a1 + 80) = a3;
  result = (*(__int64 (**)(__int64*))(v7 + 56))(v6);
  *(_BYTE*)(a1 + 88) = result & 1;
  return result;
}

void __attribute__((noreturn)) NgxHr_bbecc(__int64 a1, __int64 a2, __int64 a3,
                                           __int64 a4, __int64 a5, __int64 a6,
                                           __int64 a7, __int64 a8, __int64 a9,
                                           char a10)
{
  _QWORD* v10;
  __int64 v11;

  NgxRoutine_db240(&a10);
  *v10 = v11;
  NgxRoutine_db240(v10 + 1);
  NgxRoutine_e3720(a1);
  __udf(0);
}

__int64 NgxHr_bbef0(_QWORD* a1)
{
  *a1 = NgxData_951118 + 2;
  NgxRoutine_db240(a1 + 1);
  return NgxRoutine_430(a1, 96);
}

__int64 NgxHr_bbf30(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  __int64 result;

  (*(void (**)(__int64))(*(_QWORD*)a1 + 48LL))(a1);
  v4 = (__int64*)NgxRoutine_db310(a2, NgxData_9512e8);
  v5 = *v4;
  *(_QWORD*)(a1 + 72) = v4;
  result = (*(__int64 (**)(void*))(v5 + 56))((void*)v4);
  *(_BYTE*)(a1 + 88) = result & 1;
  return result;
}

__int64 NgxHr_bc060(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v7;

  if ((*(_BYTE*)(a1 + 88) & 1) != 0) {
    return NgxRoutine_e3760(a2, 1, a3, *(_QWORD*)(a1 + 64));
  }
  if (a3 < 1) {
    return 0;
  }
  v7 = 0;
  while ((*(unsigned int (**)(__int64, _QWORD))(*(_QWORD*)a1 + 104LL))(
             a1, *(unsigned __int8*)(a2 + v7)) != -1) {
    if (a3 == ++v7) {
      return a3;
    }
  }
  return v7;
}

__int64 NgxHr_bc120(__int64 a1, unsigned int a2)
{
  int v2;
  unsigned int v3;
  __int64 v5;
  char* v6;
  unsigned int v7;
  unsigned int v8;
  __int64 v9;
  char* v11;
  _BYTE* v12;
  char v13;
  _BYTE v14[3];
  _BYTE v15[8];
  __int64 vars0;

  if (a2 == -1) {
    return 0;
  }
  else {
    v2 = *(unsigned __int8*)(a1 + 88);
    v3 = a2;
    v13 = a2;
    if (v2 == 1) {
      v5 = *(_QWORD*)(a1 + 64);
      v15[0] = a2;
      if (NgxRoutine_e3760(v15, 1, 1, v5) != 1) {
        return (unsigned int)-1;
      }
    }
    else {
      v6 = &v13;
      v12 = v15;
      while (1) {
        v7 = (*(__int64 (**)(_QWORD, _QWORD, char*, _BYTE*, char**, _BYTE*,
                             __int64*, _BYTE**))(**(_QWORD**)(a1 + 72) + 24LL))(
            *(_QWORD*)(a1 + 72), *(_QWORD*)(a1 + 80), v6, v14, &v11, v15,
            &vars0, &v12);
        if (v11 == v6) {
          break;
        }
        v8 = v7;
        if (v7 == 3) {
          if (NgxRoutine_e3760(v6, 1, 1, *(_QWORD*)(a1 + 64)) == 1) {
            return v3;
          }
          return (unsigned int)-1;
        }
        if (v7 > 1) {
          return (unsigned int)-1;
        }
        v9 = v12 - v15;
        if (NgxRoutine_e3760(v15, 1, v12 - v15, *(_QWORD*)(a1 + 64)) != v9) {
          return (unsigned int)-1;
        }
        v6 = v11;
        if (v8 != 1) {
          return v3;
        }
      }
      return (unsigned int)-1;
    }
  }
  return v3;
}

__int64 NgxHr_bc260(_QWORD* a1)
{
  *a1 = NgxData_951130 + 2;
  NgxRoutine_db240(a1 + 1);
  return NgxRoutine_430(a1, 104);
}

__int64 NgxHr_bc2a0(__int64 a1, __int64 a2)
{
  __int64* v3;
  __int64 v4;
  __int64 result;

  v3 = (__int64*)NgxRoutine_db310(a2, NgxData_9512f0);
  v4 = *v3;
  *(_QWORD*)(a1 + 72) = v3;
  *(_DWORD*)(a1 + 88) = (*(__int64 (**)(void*))(v4 + 48))((void*)v3);
  result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 72) + 56LL))(
      *(_QWORD*)(a1 + 72));
  *(_BYTE*)(a1 + 97) = result & 1;
  if (*(int*)(a1 + 88) >= 9) {
    NgxRoutine_bf0a0("unsupported locale for standard input");
  }
  return result;
}

__int64 NgxHr_bc480(__int64 a1, char a2)
{
  __int64 result;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  int v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _BYTE v16[12];
  unsigned int v17;
  _BYTE v18[8];

  if (*(_BYTE*)(a1 + 96) == 1) {
    result = *(unsigned int*)(a1 + 92);
    if ((a2 & 1) != 0) {
      *(_BYTE*)(a1 + 96) = 0;
      *(_DWORD*)(a1 + 92) = -1;
    }
  }
  else if (*(_BYTE*)(a1 + 97) == 1) {
    result = NgxRoutine_e3780(*(_QWORD*)(a1 + 64));
    if ((_DWORD)result != -1) {
      if ((a2 & 1) != 0) {
        *(_DWORD*)(a1 + 92) = result;
      }
      else {
        v11 = *(_QWORD*)(a1 + 64);
        v12 = result;
        if ((unsigned int)NgxRoutine_e3770(result, v11) == -1) {
          return 0xFFFFFFFFLL;
        }
        else {
          return v12;
        }
      }
    }
  }
  else {
    v5 = *(_DWORD*)(a1 + 88);
    v6 = 0;
    if (v5 <= 1) {
      v7 = 1;
    }
    else {
      v7 = (unsigned int)v5;
    }
    while (1) {
      result = NgxRoutine_e3750(*(_QWORD*)(a1 + 64));
      if ((_DWORD)result == -1) {
        break;
      }
      v18[v6++] = result;
      if (v7 == v6) {
        while (1) {
          v8 = *(__int64**)(a1 + 80);
          v9 = *v8;
          v10 = (*(__int64 (**)(_QWORD, __int64*, _BYTE*, _BYTE*, _BYTE*,
                                unsigned int*, _BYTE*, __int64*))(
              **(_QWORD**)(a1 + 72) + 32LL))(*(_QWORD*)(a1 + 72), v8, v18,
                                             &v18[v7], v16, &v17, v18, &v15);
          if (v10 != 1) {
            break;
          }
          **(_QWORD**)(a1 + 80) = v9;
          if (v7 == 8) {
            return 0xFFFFFFFFLL;
          }
          result = NgxRoutine_e3750(*(_QWORD*)(a1 + 64));
          if ((_DWORD)result == -1) {
            return result;
          }
          v18[v7++] = result;
        }
        if (v10 == 2) {
          return 0xFFFFFFFFLL;
        }
        if (v10 == 3) {
          v17 = v18[0];
        }
        if ((a2 & 1) != 0) {
          result = v17;
          *(_DWORD*)(a1 + 92) = v17;
        }
        else {
          v13 = (unsigned int)v7;
          while (1) {
            v14 = v13 - 1;
            if (v13 < 1) {
              break;
            }
            result = NgxRoutine_e3740((unsigned __int8)v18[v13 - 1],
                                      *(_QWORD*)(a1 + 64));
            v13 = v14;
            if ((_DWORD)result == -1) {
              return result;
            }
          }
          return v17;
        }
        return result;
      }
    }
  }
  return result;
}

__int64 NgxHr_bc630(__int64 a1, __int64 a2, __int64 a3)
{
  __int64* v6;
  __int64 v7;
  __int64 result;
  _BYTE v9[8];

  *(_QWORD*)a1 = NgxData_951130 + 2;
  NgxRoutine_db160(a1 + 8);
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 64) = a2;
  *(_QWORD*)a1 = NgxData_94f2b8;
  NgxRoutine_db210(v9, a1 + 8);
  v6 = (__int64*)NgxRoutine_db310(v9, NgxData_9512f0);
  NgxRoutine_db240(v9);
  v7 = *v6;
  *(_QWORD*)(a1 + 72) = v6;
  *(_QWORD*)(a1 + 80) = a3;
  result = (*(__int64 (**)(__int64*))(v7 + 56))(v6);
  *(_BYTE*)(a1 + 88) = result & 1;
  return result;
}

void __attribute__((noreturn)) NgxHr_bc6dc(__int64 a1, __int64 a2, __int64 a3,
                                           __int64 a4, __int64 a5, __int64 a6,
                                           __int64 a7, __int64 a8, __int64 a9,
                                           char a10)
{
  _QWORD* v10;
  __int64 v11;

  NgxRoutine_db240(&a10);
  *v10 = v11;
  NgxRoutine_db240(v10 + 1);
  NgxRoutine_e3720(a1);
  __udf(0);
}

__int64 NgxHr_bc700(_QWORD* a1)
{
  *a1 = NgxData_951130 + 2;
  NgxRoutine_db240(a1 + 1);
  return NgxRoutine_430(a1, 96);
}

__int64 NgxHr_bc740(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  __int64 result;

  (*(void (**)(__int64))(*(_QWORD*)a1 + 48LL))(a1);
  v4 = (__int64*)NgxRoutine_db310(a2, NgxData_9512f0);
  v5 = *v4;
  *(_QWORD*)(a1 + 72) = v4;
  result = (*(__int64 (**)(void*))(v5 + 56))((void*)v4);
  *(_BYTE*)(a1 + 88) = result & 1;
  return result;
}

__int64 NgxHr_bc7a0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v7;

  if ((*(_BYTE*)(a1 + 88) & 1) != 0) {
    return NgxRoutine_e3760(a2, 4, a3, *(_QWORD*)(a1 + 64));
  }
  if (a3 < 1) {
    return 0;
  }
  v7 = 0;
  while ((*(unsigned int (**)(__int64, _QWORD))(*(_QWORD*)a1 + 104LL))(
             a1, *(unsigned int*)(a2 + 4 * v7)) != -1) {
    if (a3 == ++v7) {
      return a3;
    }
  }
  return v7;
}

__int64 NgxHr_bc860(__int64 a1, unsigned int a2)
{
  int v2;
  unsigned int v3;
  int* v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  int* v10;
  _BYTE* v11;
  unsigned int v12;
  _BYTE v13[8];
  __int64 vars0;

  if (a2 == -1) {
    return 0;
  }
  else {
    v2 = *(unsigned __int8*)(a1 + 88);
    v3 = a2;
    v12 = a2;
    if (v2 == 1) {
      if ((unsigned int)NgxRoutine_e3790(a2, *(_QWORD*)(a1 + 64)) == -1) {
        return (unsigned int)-1;
      }
    }
    else {
      v5 = (int*)&v12;
      v11 = v13;
      while (1) {
        v6 = (*(__int64 (**)(_QWORD, _QWORD, int*, _BYTE*, int**, _BYTE*,
                             __int64*, _BYTE**))(**(_QWORD**)(a1 + 72) + 24LL))(
            *(_QWORD*)(a1 + 72), *(_QWORD*)(a1 + 80), v5, v13, &v10, v13,
            &vars0, &v11);
        if (v10 == v5) {
          break;
        }
        v7 = v6;
        if (v6 == 3) {
          if (NgxRoutine_e3760(v5, 1, 1, *(_QWORD*)(a1 + 64)) == 1) {
            return v3;
          }
          return (unsigned int)-1;
        }
        if (v6 > 1) {
          return (unsigned int)-1;
        }
        v8 = v11 - v13;
        if (NgxRoutine_e3760(v13, 1, v11 - v13, *(_QWORD*)(a1 + 64)) != v8) {
          return (unsigned int)-1;
        }
        v5 = v10;
        if (v7 != 1) {
          return v3;
        }
      }
      return (unsigned int)-1;
    }
  }
  return v3;
}

__int64 NgxHr_bc990()
{
  NgxRoutine_bb9a0();
  return NgxRoutine_2b0();
}

__int64 NgxHr_bcaa0(_QWORD* a1, _BYTE* a2, __int64 a3)
{
  __int64 i;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;

  if (a3 < 1) {
    return 0;
  }
  for (i = 0; i < a3; i += v10) {
    while (1) {
      v7 = a1[3];
      v8 = a1[4];
      if (v7 < v8) {
        break;
      }
      v11 = (*(__int64 (**)(_QWORD*))(*a1 + 80LL))(a1);
      if (v11 != -1) {
        *a2++ = v11;
        if (++i < a3) {
          continue;
        }
      }
      return i;
    }
    v9 = v8 - v7;
    if (a3 - i < v9) {
      v9 = a3 - i;
    }
    if (v9 >= 0x7FFFFFFF) {
      v10 = 0x7FFFFFFF;
    }
    else {
      v10 = v9;
    }
    if (v9 != 0) {
      NgxRoutine_e3120(a2, v7, v10);
      v7 = a1[3];
    }
    a2 += v10;
    a1[3] = v7 + (int)v10;
  }
  return i;
}

__int64 NgxHr_bcba0(_QWORD* a1)
{
  __int64 result;
  unsigned __int8* v3;

  result = (*(__int64 (**)(_QWORD*))(*a1 + 72LL))(a1);
  if ((_DWORD)result != -1) {
    v3 = (unsigned __int8*)a1[3];
    result = *v3;
    a1[3] = v3 + 1;
  }
  return result;
}

__int64 NgxHr_bcbe0(_QWORD* a1, unsigned __int8* a2, __int64 a3)
{
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;

  if (a3 < 1) {
    return 0;
  }
  v6 = 0;
  do {
    while (1) {
      v7 = a1[6];
      v8 = a1[7];
      if (v7 < v8) {
        break;
      }
      v11 = *a2++;
      if ((*(unsigned int (**)(_QWORD*, _QWORD))(*a1 + 104LL))(a1, v11) != -1 &&
          ++v6 < a3) {
        continue;
      }
      return v6;
    }
    v9 = v8 - v7;
    if (a3 - v6 >= v9) {
      v10 = v9;
    }
    else {
      v10 = a3 - v6;
    }
    if (v10 != 0) {
      NgxRoutine_e3120(v7, a2, v10);
      v7 = a1[6];
    }
    a2 += v10;
    v6 += v10;
    a1[6] = v7 + v10;
  } while (v6 < a3);
  return v6;
}

__int64 NgxHr_bccf0(__int64 a1)
{
  NgxRoutine_be660(a1 + 16);
  return NgxRoutine_430(a1, 168);
}

__int64 NgxHr_bcd30(_QWORD* a1)
{
  char* v1;

  v1 = (char*)a1 + *(_QWORD*)(*a1 - 24LL);
  NgxRoutine_be660(v1 + 16);
  return NgxRoutine_430(v1, 168);
}

_QWORD* NgxHr_bcd70(_QWORD* a1)
{
  __int64 v2;
  _BYTE v4[16];

  if (*(_QWORD*)((char*)a1 + *(_QWORD*)(*a1 - 24LL) + 40) != 0) {
    NgxRoutine_bcf20(v4, a1);
    if (v4[0] == 1) {
      v2 = *(_QWORD*)((char*)a1 + *(_QWORD*)(*a1 - 24LL) + 40);
      if ((*(unsigned int (**)(__int64))(*(_QWORD*)v2 + 48LL))(v2) == -1) {
        NgxRoutine_be740();
      }
    }
    NgxRoutine_bcf80(v4);
  }
  return a1;
}

__int64 NgxHr_bcea0(__int64 a1)
{
  NgxRoutine_be660(a1 + 8);
  return NgxRoutine_430(a1, 160);
}

__int64 NgxHr_bcee0(_QWORD* a1)
{
  char* v1;

  v1 = (char*)a1 + *(_QWORD*)(*a1 - 24LL);
  NgxRoutine_be660(v1 + 8);
  return NgxRoutine_430(v1, 160);
}

__int64 NgxHr_bcf80(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v1 = *(_QWORD*)(result + 8) + *(_QWORD*)(**(_QWORD**)(result + 8) - 24LL);
  if (*(_QWORD*)(v1 + 40) != 0 && *(_DWORD*)(v1 + 32) == 0 &&
      (*(_BYTE*)(v1 + 9) & 0x20) != 0) {
    v2 = result;
    result = NgxRoutine_e2360();
    if ((_DWORD)result == 0) {
      v3 = *(_QWORD*)(*(_QWORD*)(v2 + 8) +
                      *(_QWORD*)(**(_QWORD**)(v2 + 8) - 24LL) + 40LL);
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 48LL))(v3);
      if ((_DWORD)result == -1) {
        return NgxRoutine_be740();
      }
    }
  }
  return result;
}

__int64 NgxHr_bd310(__int64 a1)
{
  NgxRoutine_be660(a1 + 24);
  return NgxRoutine_430(a1, 176);
}

__int64 NgxHr_bd350(__int64 a1)
{
  __int64 v1;

  v1 = a1 - 16;
  NgxRoutine_be660(a1 + 8);
  return NgxRoutine_430(v1, 176);
}

__int64 NgxHr_bd390(_QWORD* a1)
{
  char* v1;

  v1 = (char*)a1 + *(_QWORD*)(*a1 - 24LL);
  NgxRoutine_be660(v1 + 24);
  return NgxRoutine_430(v1, 176);
}

__int64 NgxHr_bd420(_QWORD* a1, _DWORD* a2, __int64 a3)
{
  __int64 i;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;

  if (a3 < 1) {
    return 0;
  }
  for (i = 0; i < a3; i += v10) {
    while (1) {
      v7 = a1[3];
      v8 = a1[4];
      if (v7 < v8) {
        break;
      }
      v11 = (*(__int64 (**)(_QWORD*))(*a1 + 80LL))(a1);
      if (v11 != -1) {
        *a2++ = v11;
        if (++i < a3) {
          continue;
        }
      }
      return i;
    }
    v9 = (__int64)(v8 - v7) >> 2;
    if (a3 - i < v9) {
      v9 = a3 - i;
    }
    if (v9 >= 0x7FFFFFFF) {
      v10 = 0x7FFFFFFF;
    }
    else {
      v10 = v9;
    }
    if (v9 != 0) {
      NgxRoutine_e3120(a2, v7, 4 * v10);
      v7 = a1[3];
    }
    a2 += v10;
    a1[3] = v7 + 4LL * (int)v10;
  }
  return i;
}

__int64 NgxHr_bd510(_QWORD* a1)
{
  __int64 result;
  unsigned int* v3;

  result = (*(__int64 (**)(_QWORD*))(*a1 + 72LL))(a1);
  if ((_DWORD)result != -1) {
    v3 = (unsigned int*)a1[3];
    result = *v3;
    a1[3] = v3 + 1;
  }
  return result;
}

#pragma GCC visibility pop
