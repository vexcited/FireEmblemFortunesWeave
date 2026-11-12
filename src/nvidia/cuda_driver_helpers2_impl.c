#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 CudaDriverRoutine_1218b0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_121c60(_QWORD);
__int64 CudaDriverRoutine_12e340(__int64 result);
__int64 CudaDriverRoutine_12e510(__int64, __int64);
__int64 CudaDriverRoutine_1e2ce0(__int64);
__int64 CudaDriverRoutine_1e6280(__int64, _DWORD*);
__int64 CudaDriverRoutine_1e8740(__int64, int, __int64);
__int64 CudaDriverRoutine_1e9390(__int64 result);
__int64 CudaDriverRoutine_633b0(_DWORD*, double*);
__int64 CudaDriverRoutine_97bc0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_9bad0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_9bd90(_QWORD);
__int64 CudaDriverStub_112b20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverStub_12e320(_QWORD);
__int64 CudaDriverStub_12e330(_QWORD);
__int64 close_plt(_QWORD);
__int64 cuda_driver_misc_helpers_ded50(_QWORD, _QWORD, _QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 strlen_plt(_QWORD);
bool CudaDriverRoutine_9aa30(__int64);
bool CudaDriverRoutine_9abb0(__int64);
bool CudaDriverRoutine_9ac50(__int64);
bool CudaDriverStub_9ab70(__int64);
extern _QWORD CudaDriverData_1422bb0;
extern _UNKNOWN CudaDriverData_14347a8;
extern __int64 (*CudaDriverData_1440748)(int*);
extern int CudaDriverData_1434ac0;
__int64 cuda_driver_helpers2_11af10(__int64 a1, __int64 a2,
                                    __int64 (**a3)(_QWORD, _QWORD));
__int64 cuda_driver_helpers2_1e3e20(__int64 a1);
__int64 cuda_driver_helpers2_1e4290(__int64 a1);
__int64 cuda_driver_helpers2_1e4300(__int64 a1, __int64 a2);
__int64 cuda_driver_helpers2_1e44c0(__int64 a1, __int64 a2);
__int64 cuda_driver_helpers2_1e4540(__int64 a1, __int64 a2);
__int64 cuda_driver_helpers2_1e4610(__int64 a1, __int64 a2, int a3);
__int64 cuda_driver_helpers2_1e4680(__int64 a1, __int64 a2, int a3);
long double cuda_driver_helpers2_1e46f0(__int64 a1, long double* a2);
__int64 cuda_driver_helpers2_1e4720(__int64 a1, int a2);
__int64 cuda_driver_helpers2_1e47a0(__int64 a1, __int64 a2);
__int64 cuda_driver_helpers2_1e4c20(__int64 a1, __int64 a2);
__int64 cuda_driver_helpers2_1e50c0(__int64 a1, __int64* a2);
__int64 cuda_driver_helpers2_238130(__int64 a1);
__int64 cuda_driver_helpers2_2381a0(__int64 a1);
__int64 cuda_driver_helpers2_238280(_QWORD* a1, unsigned int a2, int a3);
__int64 cuda_driver_helpers2_2383d0(__int64 a1);
__int64 cuda_driver_helpers2_238440(__int64 a1);

__int64 cuda_driver_helpers2_11af10(__int64 a1, __int64 a2,
                                    __int64 (**a3)(_QWORD, _QWORD))
{
  unsigned int v4;
  __int64 result;

  if ((*(_BYTE*)(a2 + 8) & 0x10) != 0) {
    v4 = *(_DWORD*)(a2 + 16);
    if (v4 - 8 >= 0xA && v4 >= 2) {
      return (*a3)(*(_QWORD*)a2, *(unsigned int*)(a2 + 12));
    }
  }
  return result;
}

__int64 cuda_driver_helpers2_1e3e20(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  int v14;
  bool v15;
  int v16;
  int v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  int v27;
  bool v28;
  __int64 v29;
  _BOOL8 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int* v34;
  int v35;
  unsigned int v36;
  __int64 v37;
  __int64 v38;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;
  unsigned int v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  bool v48;
  __int64 v49;
  __int64 result;
  int v51;
  int v52;
  _BYTE v53[20];
  unsigned int v54;

  v1 = *(_QWORD*)(a1 + 19824);
  v2 = a1 + 0x4000;
  v4 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 96) + 192LL) + 8LL);
  *(_DWORD*)(a1 + 3752) = v4;
  v5 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 96) + 192LL) + 4LL);
  *(_DWORD*)(a1 + 3748) = v5 * v4;
  if (v5 != 0) {
    v6 = a1 + 3548;
    v7 = a1 + 3484;
    if (v5 == 1) {
      v8 = 0;
      v9 = 0;
      v10 = 0;
    }
    else {
      v8 = 0;
      v9 = 0;
      v10 = 0;
      do {
        v19 = *(_QWORD*)(*(_QWORD*)(a1 + 19824) + 96LL);
        v20 = *(_QWORD*)(v19 + 200);
        v21 = *(_QWORD*)(*(_QWORD*)(v19 + 208) + 8 * v8);
        *(_DWORD*)(v7 + 4 * v8) = 0;
        v22 = 0;
        *(_DWORD*)(v6 + 4 * v8) = v21;
        if ((_DWORD)v21 != 0) {
          do {
            v22 += v21 & 1;
            v15 = (unsigned int)v21 > 1;
            LODWORD(v21) = (unsigned int)v21 >> 1;
          } while (v15);
          *(_DWORD*)(v7 + 4 * v8) = v22;
        }
        v23 = v8 | 1;
        v24 = *(_QWORD*)(*(_QWORD*)(a1 + 19824) + 96LL);
        v25 = *(_QWORD*)(v24 + 200);
        v26 = *(_QWORD*)(*(_QWORD*)(v24 + 208) + 8 * (v8 | 1));
        *(_DWORD*)(v7 + 4 * v23) = 0;
        v27 = 0;
        *(_DWORD*)(v6 + 4 * v23) = v26;
        if ((_DWORD)v26 != 0) {
          do {
            v27 += v26 & 1;
            v15 = (unsigned int)v26 > 1;
            LODWORD(v26) = (unsigned int)v26 >> 1;
          } while (v15);
          *(_DWORD*)(v7 + 4 * v23) = v27;
        }
        v18 = v20 >> v8;
        v8 += 2;
        v10 += v27 + v22;
        v9 += ((v25 >> v23) & 1) + (v18 & 1);
      } while (v8 != (v5 & 0xFFFFFFFE));
    }
    if ((v5 & 1) != 0) {
      v11 = *(_QWORD*)(*(_QWORD*)(a1 + 19824) + 96LL);
      v12 = *(_QWORD*)(v11 + 200);
      v13 = *(_QWORD*)(*(_QWORD*)(v11 + 208) + 8 * v8);
      *(_DWORD*)(v7 + 4 * v8) = 0;
      v9 += (v12 >> v8) & 1;
      *(_DWORD*)(v6 + 4 * v8) = v13;
      v14 = 0;
      if ((_DWORD)v13 != 0) {
        do {
          v14 += v13 & 1;
          v15 = (unsigned int)v13 > 1;
          LODWORD(v13) = (unsigned int)v13 >> 1;
        } while (v15);
        *(_DWORD*)(v7 + 4 * v8) = v14;
      }
      v10 += v14;
    }
    v1 = *(_QWORD*)(a1 + 19824);
  }
  else {
    v10 = 0;
    v9 = 0;
  }
  *(_DWORD*)(a1 + 4296) = v5;
  v16 = *(_DWORD*)(a1 + 3736);
  *(_DWORD*)(a1 + 3480) = v9;
  *(_DWORD*)(a1 + 3724) = v10;
  *(_DWORD*)(a1 + 3740) = v16;
  v17 = *(_DWORD*)(v2 + 592);
  if ((v17 & 4) != 0 && (*(_BYTE*)(*(_QWORD*)(v1 + 96) + 216LL) & 1) == 0) {
    *(_DWORD*)(v2 + 592) = v17 & 0xFFFFFFFB;
    *(_DWORD*)(a1 + 3440) = 1;
  }
  if (*(_DWORD*)(a1 + 14472) != *(_DWORD*)(v1 + 112)) {
    if (CudaDriverRoutine_9ac50(a1)) {
      v1 = *(_QWORD*)(a1 + 19824);
    }
    else {
      v28 = CudaDriverRoutine_9abb0(a1);
      v1 = *(_QWORD*)(a1 + 19824);
      if (!v28) {
        *(_DWORD*)(a1 + 14472) = *(_DWORD*)(v1 + 112);
      }
    }
  }
  *(_DWORD*)(v1 + 24) = *(_DWORD*)(*(_QWORD*)(v1 + 96) + 220LL);
  v29 = CudaDriverData_1422bb0;
  if (*(unsigned int*)((char*)((int*)0x4LL) + CudaDriverData_1422bb0) >= 5) {
    *(_DWORD*)(*(_QWORD*)(a1 + 19824) + 28LL) =
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 19824) + 96LL) + 392LL);
  }
  v30 = CudaDriverStub_9ab70(a1);
  v31 = *(_QWORD*)(a1 + 19824);
  if (v30) {
    v32 = *(_QWORD*)(v31 + 96);
    v33 = *(_QWORD*)(v32 + 52);
    if (v33 != 0) {
      v34 = *(int**)(v32 + 60);
      while (1) {
        v35 = *v34++;
        if (v35 == 0x10000) {
          break;
        }
        if (--v33 == 0) {
          goto LABEL_34;
        }
      }
      *(_DWORD*)(v31 + 24) = 0x10000;
      v40 = *(_DWORD*)(*(_QWORD*)(a1 + 19824) + 24LL);
      v37 = CudaDriverStub_12e320(v30);
      if (v40 <= (unsigned int)v37) {
        goto LABEL_37;
      }
    LABEL_35:
      v38 = *(_QWORD*)(a1 + 19824);
      v39 = *(_DWORD*)(v38 + 24);
      goto LABEL_38;
    }
  }
LABEL_34:
  v36 = *(_DWORD*)(v31 + 24);
  v37 = CudaDriverStub_12e320(v30);
  if (v36 > (unsigned int)v37) {
    goto LABEL_35;
  }
LABEL_37:
  v39 = CudaDriverStub_12e320(v37);
  v38 = *(_QWORD*)(a1 + 19824);
LABEL_38:
  v41 = *(_DWORD*)(v38 + 28);
  if (v39 > v41) {
    v41 = v39;
  }
  *(_DWORD*)(a1 + 14752) = v41;
  v42 = *(_DWORD*)(*(_QWORD*)(v38 + 96) + 224LL);
  *(_DWORD*)(a1 + 4204) = v42;
  if (v42 >= *(_DWORD*)(v38 + 128)) {
    v42 = *(_DWORD*)(v38 + 128);
  }
  *(_DWORD*)(v38 + 128) = v42;
  v43 = *(_QWORD*)(a1 + 19824);
  if (*(_BYTE*)(v43 + 124) == 0 && (*(_BYTE*)(v2 + 593) & 2) != 0 &&
      *(_BYTE*)(*(_QWORD*)(v43 + 96) + 268LL) != 0) {
    *(_DWORD*)(v2 + 668) = 1;
  }
  v44 = *(_QWORD*)(v43 + 80);
  *(_DWORD*)v53 = 20;
  *(_QWORD*)&v53[12] = &v54;
  *(_QWORD*)&v53[4] = v44;
  v45 = (*(__int64 (**)(_BYTE*))((char*)((_UNKNOWN*)0x154LL) + v29 + 4))(v53);
  if ((_DWORD)v45 != 0 && (unsigned int)CudaDriverRoutine_1e9390(v45) != 0) {
    *(_BYTE*)(*(_QWORD*)(a1 + 19824) + 125LL) = 0;
    v46 = *(_QWORD*)(a1 + 19824);
    v47 = *(_QWORD*)(v46 + 96);
    if ((*(_BYTE*)(v47 + 28) & 1) != 0) {
      goto LABEL_53;
    }
    goto LABEL_52;
  }
  close_plt(v54);
  v48 = CudaDriverRoutine_9aa30(a1);
  v49 = *(_QWORD*)(a1 + 19824);
  if (v48) {
    *(_BYTE*)(v49 + 125) = *(_BYTE*)(*(_QWORD*)(v49 + 96) + 270LL);
    v46 = *(_QWORD*)(a1 + 19824);
    v47 = *(_QWORD*)(v46 + 96);
    if ((*(_BYTE*)(v47 + 28) & 1) != 0) {
      goto LABEL_53;
    }
    goto LABEL_52;
  }
  *(_BYTE*)(v49 + 125) = 0;
  v46 = *(_QWORD*)(a1 + 19824);
  v47 = *(_QWORD*)(v46 + 96);
  if ((*(_BYTE*)(v47 + 28) & 1) == 0) {
  LABEL_52:
    *(_DWORD*)(a1 + 4120) = 0;
    v47 = *(_QWORD*)(v46 + 96);
  }
LABEL_53:
  if (*(_DWORD*)(v47 + 336) != 0) {
    if (*(unsigned int*)((char*)((int*)0x4LL) + v29) < 4) {
      goto LABEL_63;
    }
  }
  else {
    *(_BYTE*)(v2 + 612) &= ~1u;
    if (*(unsigned int*)((char*)((int*)0x4LL) + v29) < 4) {
    LABEL_63:
      *(_QWORD*)v53 = 0;
      *(_QWORD*)&v53[8] = 0;
      v51 = CudaDriverRoutine_633b0((_DWORD*)a1, (double*)v53);
      v52 = *(_DWORD*)(a1 + 3736);
      *(_DWORD*)(a1 + 3728) = v51;
      *(_DWORD*)(a1 + 3732) = v52 * v51;
      return 0;
    }
  }
  result = CudaDriverRoutine_1e6280(a1, (_DWORD*)(a1 + 4384));
  if ((_DWORD)result == 0) {
    if (*(_DWORD*)(v2 + 476) == 0 || *(_DWORD*)(a1 + 4388) != 0) {
      goto LABEL_63;
    }
    return 999;
  }
  return result;
}

__int64 cuda_driver_helpers2_1e4290(__int64 a1)
{
  int8x8_t v1;
  int v2;
  int8x8_t v3;
  unsigned __int32 v4;
  int v5;

  PSEUDO_LOW_LANE64(
      v1, n64_u64,
      *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 19824) + 96LL) + 228LL));
  v2 = *(_DWORD*)(a1 + 4172);
  *(_DWORD*)(a1 + 4184) =
      ~((-1 << *(_DWORD*)(a1 + 4180)) | LANES64(v1).n64_u32[0]);
  LANES64(v3).n64_u64[0] = LANES64_OF(vcnt_s8(v1)).n64_u64[0];
  PSEUDO_LOW_LANE64(v3, n64_u8, vaddv_s8(v3));
  *(_DWORD*)(a1 + 4128) = LANES64(v3).n64_u32[0];
  v4 = v2 * LANES64(v3).n64_u32[0];
  v5 = *(_DWORD*)(a1 + 4168);
  *(_DWORD*)(a1 + 4188) = v4;
  *(_DWORD*)(a1 + 4176) = v5 * v4;
  return 0;
}

__int64 cuda_driver_helpers2_1e4300(__int64 a1, __int64 a2)
{
  unsigned __int64 v2;
  int v3;

  if (*(_DWORD*)(a1 + 4180) != 0) {
    v2 = 0;
    v3 = -1 << *(_DWORD*)(a1 + 4172);
    do {
      *(_DWORD*)(a2 + 4 * v2) = ~(
          v3 | *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 19824) + 96LL) +
                                     236LL) +
                          8 * v2));
      ++v2;
    } while (v2 < *(unsigned int*)(a1 + 4180));
  }
  return 0;
}

__int64 cuda_driver_helpers2_1e44c0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  struct {
    char gap0_[4];
    int v5;
    __int64 v6;
    __int64 v7;
    int v8;
    int v9;
  } v5_;

  if (*(_DWORD*)(a1 + 17052) == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(a2 + 16128);
  v3 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 64) + 19824LL) + 88LL);
  v5_.v5 = 28;
  v5_.v6 = v3;
  v5_.v7 = v2 + 32;
  v5_.v8 = *(_DWORD*)(v2 + 33064);
  v5_.v9 = 3;
  result = CudaDriverData_1440748(&v5_.v5);
  if ((_DWORD)result != 0) {
    return CudaDriverRoutine_1e9390(result);
  }
  return result;
}

__int64 cuda_driver_helpers2_1e4540(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  struct {
    char gap0_[4];
    int v5;
    __int64 v6;
    __int64 v7;
    int v8;
    int v9;
  } v5_;

  if (*(_DWORD*)(a1 + 17052) == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(a2 + 16128);
  v3 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 64) + 19824LL) + 88LL);
  v5_.v5 = 28;
  v5_.v6 = v3;
  v5_.v7 = v2 + 32;
  v5_.v8 = *(_DWORD*)(v2 + 33064);
  v5_.v9 = 2;
  result = CudaDriverData_1440748(&v5_.v5);
  if ((_DWORD)result != 0) {
    return CudaDriverRoutine_1e9390(result);
  }
  return result;
}

__int64 cuda_driver_helpers2_1e4610(__int64 a1, __int64 a2, int a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;

  LODWORD(v3) = a3;
  v5 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 19824) + 96LL) + 88LL);
  v6 = strlen_plt(v5);
  if (v6 + 1 < (unsigned __int64)(unsigned int)v3) {
    v3 = v6 + 1;
  }
  else {
    v3 = (unsigned int)v3;
  }
  memcpy_plt(a2, v5, v3);
  *(_BYTE*)(a2 + v3 - 1) = 0;
  return 0;
}

__int64 cuda_driver_helpers2_1e4680(__int64 a1, __int64 a2, int a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;

  LODWORD(v3) = a3;
  v5 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 19824) + 96LL) + 96LL);
  v6 = strlen_plt(v5);
  if (v6 + 1 < (unsigned __int64)(unsigned int)v3) {
    v3 = v6 + 1;
  }
  else {
    v3 = (unsigned int)v3;
  }
  memcpy_plt(a2, v5, v3);
  *(_BYTE*)(a2 + v3 - 1) = 0;
  return 0;
}

long double cuda_driver_helpers2_1e46f0(__int64 a1, long double* a2)
{
  long double result;

  result =
      *(long double*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 19824) +
                                                       96LL) +
                                            292LL) +
                                 20LL) +
                      4LL);
  *a2 = result;
  return result;
}

__int64 cuda_driver_helpers2_1e4720(__int64 a1, int a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned int v6;

  if (a2 == *(_DWORD*)(a1 + 3404)) {
    return 0;
  }
  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 19824) + 96LL);
  v3 = *(_QWORD*)(v2 + 104);
  if (v3 == 0) {
    return 0;
  }
  v4 = *(_QWORD*)(v2 + 112);
  v5 = 0;
  v6 = 1;
  while (*(_DWORD*)(v4 + 4 * v5) != a2) {
    v5 = v6++;
    if (v3 <= v5) {
      return 0;
    }
  }
  return 1;
}

__int64 cuda_driver_helpers2_1e47a0(__int64 a1, __int64 a2)
{
  int v2;
  __int64 v3;
  __int64 v6;
  unsigned int v7;
  unsigned int v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  int* v16;
  __int64 v17;
  char v18;
  int v19;
  int v20;
  char v21;
  int v22;
  char v23;
  int v24;
  char v25;
  int v26;
  _DWORD* v27;
  _DWORD* v28;
  char v29;
  int v30;
  int v31;
  __int64 v32;
  __int64 v33;
  int v34;

  v2 = *(_DWORD*)(a2 + 20);
  v3 = *(_QWORD*)(a2 + 24);
  v6 = CudaDriverRoutine_12e510(v2, 44);
  v7 = CudaDriverRoutine_1e8740(v6, *(_DWORD*)(a2 + 20), v3);
  if (v7 == 0) {
    v10 = CudaDriverRoutine_1e2ce0(a1);
    v31 = 24;
    if (v10 == 0) {
      v8 = 999;
      goto LABEL_3;
    }
    v32 = v6;
    v33 = v10;
    v34 = v2;
    v11 = (*(__int64 (**)(int*))((char*)((__int64*)0x38LL) +
                                 CudaDriverData_1422bb0))(&v31);
    if ((_DWORD)v11 == 0 || (v7 = CudaDriverRoutine_1e9390(v11)) == 0) {
      if (v2 < 1) {
        v8 = 0;
        goto LABEL_3;
      }
      v12 = v2 & 3;
      if ((unsigned int)v2 < 4) {
        v13 = 0;
        v14 = 0;
        goto LABEL_71;
      }
      v15 = v3 + 66;
      v16 = (int*)(v6 + 96);
      v17 = 0;
      v13 = 0;
      do {
        v20 = *(v16 - 22);
        if (v20 > 3) {
          if (v20 == 4) {
            v20 = 1;
            v21 = 4;
            goto LABEL_29;
          }
          if (v20 != 8) {
            if (v20 == 16) {
              v20 = 1;
              v21 = 16;
              goto LABEL_29;
            }
            goto LABEL_26;
          }
          v20 = 1;
          v21 = 8;
        }
        else {
          if (v20 == 0) {
            v21 = 0;
            v20 = v13;
            goto LABEL_29;
          }
          if (v20 != 1) {
            if (v20 == 2) {
              v20 = 1;
              v21 = 2;
              goto LABEL_29;
            }
          LABEL_26:
            v20 = 1;
            v21 = -1;
            goto LABEL_29;
          }
          v21 = 1;
        }
      LABEL_29:
        *(_BYTE*)(v15 - 64) = v21;
        *(_DWORD*)(v15 - 46) = *(v16 - 16);
        *(_DWORD*)(v15 - 50) = *(v16 - 17);
        v22 = *(v16 - 11);
        if (v22 > 3) {
          if (v22 == 4) {
            v22 = 1;
            v23 = 4;
            goto LABEL_43;
          }
          if (v22 != 8) {
            if (v22 == 16) {
              v22 = 1;
              v23 = 16;
              goto LABEL_43;
            }
            goto LABEL_40;
          }
          v22 = 1;
          v23 = 8;
        }
        else {
          if (v22 == 0) {
            v23 = 0;
            v22 = v20;
            goto LABEL_43;
          }
          if (v22 != 1) {
            if (v22 == 2) {
              v22 = 1;
              v23 = 2;
              goto LABEL_43;
            }
          LABEL_40:
            v22 = 1;
            v23 = -1;
            goto LABEL_43;
          }
          v23 = 1;
        }
      LABEL_43:
        *(_BYTE*)(v15 - 32) = v23;
        *(_DWORD*)(v15 - 14) = *(v16 - 5);
        *(_DWORD*)(v15 - 18) = *(v16 - 6);
        v24 = *v16;
        if (*v16 > 3) {
          if (v24 == 4) {
            v24 = 1;
            v25 = 4;
            goto LABEL_57;
          }
          if (v24 != 8) {
            if (v24 == 16) {
              v24 = 1;
              v25 = 16;
              goto LABEL_57;
            }
            goto LABEL_54;
          }
          v24 = 1;
          v25 = 8;
        }
        else {
          if (v24 == 0) {
            v25 = 0;
            v24 = v22;
            goto LABEL_57;
          }
          if (v24 != 1) {
            if (v24 == 2) {
              v24 = 1;
              v25 = 2;
              goto LABEL_57;
            }
          LABEL_54:
            v24 = 1;
            v25 = -1;
            goto LABEL_57;
          }
          v25 = 1;
        }
      LABEL_57:
        *(_BYTE*)v15 = v25;
        *(_DWORD*)(v15 + 18) = v16[6];
        *(_DWORD*)(v15 + 14) = v16[5];
        v13 = v16[11];
        if (v13 > 3) {
          if (v13 == 4) {
            v13 = 1;
            v18 = 4;
            goto LABEL_14;
          }
          if (v13 != 8) {
            if (v13 == 16) {
              v13 = 1;
              v18 = 16;
              goto LABEL_14;
            }
            goto LABEL_67;
          }
          v13 = 1;
          v18 = 8;
        }
        else {
          if (v13 == 0) {
            v18 = 0;
            v13 = v24;
            goto LABEL_14;
          }
          if (v13 != 1) {
            if (v13 == 2) {
              v13 = 1;
              v18 = 2;
              goto LABEL_14;
            }
          LABEL_67:
            v13 = 1;
            v18 = -1;
            goto LABEL_14;
          }
          v18 = 1;
        }
      LABEL_14:
        *(_BYTE*)(v15 + 32) = v18;
        v17 -= 4;
        *(_DWORD*)(v15 + 50) = v16[17];
        v19 = v16[16];
        v16 += 44;
        *(_DWORD*)(v15 + 46) = v19;
        v15 += 128;
      } while (-(__int64)(v2 & 0x7FFFFFFC) != v17);
      v14 = -v17;
    LABEL_71:
      v26 = v13;
      if ((v2 & 3) != 0) {
        v27 = (_DWORD*)(v3 + 32 * v14 + 20);
        v28 = (_DWORD*)(v6 + 44 * v14 + 32);
        do {
          v26 = *(v28 - 6);
          if (v26 > 3) {
            switch (v26) {
            case 4:
              v26 = 1;
              v29 = 4;
              break;
            case 8:
              v26 = 1;
              v29 = 8;
              break;
            case 16:
              v26 = 1;
              v29 = 16;
              break;
            default:
              goto LABEL_85;
            }
          }
          else if (v26 != 0) {
            if (v26 == 1) {
              v29 = 1;
              goto LABEL_74;
            }
            if (v26 != 2) {
            LABEL_85:
              v26 = 1;
              v29 = -1;
              goto LABEL_74;
            }
            v26 = 1;
            v29 = 2;
          }
          else {
            v29 = 0;
            v26 = v13;
          }
        LABEL_74:
          *((_BYTE*)v27 - 18) = v29;
          --v12;
          v13 = v26;
          *v27 = *v28;
          v30 = *(v28 - 1);
          v28 += 11;
          *(v27 - 1) = v30;
          v27 += 8;
        } while (v12 != 0);
      }
      if (v26 != 0) {
        v8 = 999;
      }
      else {
        v8 = 0;
      }
    LABEL_3:
      CudaDriverRoutine_12e340(v6);
      return v8;
    }
  }
  v8 = v7;
  goto LABEL_3;
}

__int64 cuda_driver_helpers2_1e4c20(__int64 a1, __int64 a2)
{
  int v2;
  __int64 v3;
  __int64 v6;
  unsigned int v7;
  unsigned int v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  int* v16;
  __int64 v17;
  char v18;
  int v19;
  int v20;
  char v21;
  int v22;
  char v23;
  int v24;
  char v25;
  int v26;
  _DWORD* v27;
  _DWORD* v28;
  char v29;
  int v30;
  int v31;
  __int64 v32;
  __int64 v33;
  int v34;

  v2 = *(_DWORD*)(a2 + 20);
  v3 = *(_QWORD*)(a2 + 24);
  v6 = CudaDriverRoutine_12e510(v2, 44);
  v7 = CudaDriverRoutine_1e8740(v6, *(_DWORD*)(a2 + 20), v3);
  if (v7 == 0) {
    v10 = *(_QWORD*)(*(_QWORD*)(a1 + 19824) + 64LL);
    v31 = 24;
    if (v10 == 0) {
      v8 = 999;
      goto LABEL_3;
    }
    v32 = v6;
    v33 = v10;
    v34 = v2;
    v11 = (*(__int64 (**)(int*))((char*)((__int64*)0x38LL) +
                                 CudaDriverData_1422bb0))(&v31);
    if ((_DWORD)v11 == 0 || (v7 = CudaDriverRoutine_1e9390(v11)) == 0) {
      if (v2 < 1) {
        v8 = 0;
        goto LABEL_3;
      }
      v12 = v2 & 3;
      if ((unsigned int)v2 < 4) {
        v13 = 0;
        v14 = 0;
        goto LABEL_71;
      }
      v15 = v3 + 66;
      v16 = (int*)(v6 + 96);
      v17 = 0;
      v13 = 0;
      do {
        v20 = *(v16 - 22);
        if (v20 > 3) {
          if (v20 == 4) {
            v20 = 1;
            v21 = 4;
            goto LABEL_29;
          }
          if (v20 != 8) {
            if (v20 == 16) {
              v20 = 1;
              v21 = 16;
              goto LABEL_29;
            }
            goto LABEL_26;
          }
          v20 = 1;
          v21 = 8;
        }
        else {
          if (v20 == 0) {
            v21 = 0;
            v20 = v13;
            goto LABEL_29;
          }
          if (v20 != 1) {
            if (v20 == 2) {
              v20 = 1;
              v21 = 2;
              goto LABEL_29;
            }
          LABEL_26:
            v20 = 1;
            v21 = -1;
            goto LABEL_29;
          }
          v21 = 1;
        }
      LABEL_29:
        *(_BYTE*)(v15 - 64) = v21;
        *(_DWORD*)(v15 - 46) = *(v16 - 16);
        *(_DWORD*)(v15 - 50) = *(v16 - 17);
        v22 = *(v16 - 11);
        if (v22 > 3) {
          if (v22 == 4) {
            v22 = 1;
            v23 = 4;
            goto LABEL_43;
          }
          if (v22 != 8) {
            if (v22 == 16) {
              v22 = 1;
              v23 = 16;
              goto LABEL_43;
            }
            goto LABEL_40;
          }
          v22 = 1;
          v23 = 8;
        }
        else {
          if (v22 == 0) {
            v23 = 0;
            v22 = v20;
            goto LABEL_43;
          }
          if (v22 != 1) {
            if (v22 == 2) {
              v22 = 1;
              v23 = 2;
              goto LABEL_43;
            }
          LABEL_40:
            v22 = 1;
            v23 = -1;
            goto LABEL_43;
          }
          v23 = 1;
        }
      LABEL_43:
        *(_BYTE*)(v15 - 32) = v23;
        *(_DWORD*)(v15 - 14) = *(v16 - 5);
        *(_DWORD*)(v15 - 18) = *(v16 - 6);
        v24 = *v16;
        if (*v16 > 3) {
          if (v24 == 4) {
            v24 = 1;
            v25 = 4;
            goto LABEL_57;
          }
          if (v24 != 8) {
            if (v24 == 16) {
              v24 = 1;
              v25 = 16;
              goto LABEL_57;
            }
            goto LABEL_54;
          }
          v24 = 1;
          v25 = 8;
        }
        else {
          if (v24 == 0) {
            v25 = 0;
            v24 = v22;
            goto LABEL_57;
          }
          if (v24 != 1) {
            if (v24 == 2) {
              v24 = 1;
              v25 = 2;
              goto LABEL_57;
            }
          LABEL_54:
            v24 = 1;
            v25 = -1;
            goto LABEL_57;
          }
          v25 = 1;
        }
      LABEL_57:
        *(_BYTE*)v15 = v25;
        *(_DWORD*)(v15 + 18) = v16[6];
        *(_DWORD*)(v15 + 14) = v16[5];
        v13 = v16[11];
        if (v13 > 3) {
          if (v13 == 4) {
            v13 = 1;
            v18 = 4;
            goto LABEL_14;
          }
          if (v13 != 8) {
            if (v13 == 16) {
              v13 = 1;
              v18 = 16;
              goto LABEL_14;
            }
            goto LABEL_67;
          }
          v13 = 1;
          v18 = 8;
        }
        else {
          if (v13 == 0) {
            v18 = 0;
            v13 = v24;
            goto LABEL_14;
          }
          if (v13 != 1) {
            if (v13 == 2) {
              v13 = 1;
              v18 = 2;
              goto LABEL_14;
            }
          LABEL_67:
            v13 = 1;
            v18 = -1;
            goto LABEL_14;
          }
          v18 = 1;
        }
      LABEL_14:
        *(_BYTE*)(v15 + 32) = v18;
        v17 -= 4;
        *(_DWORD*)(v15 + 50) = v16[17];
        v19 = v16[16];
        v16 += 44;
        *(_DWORD*)(v15 + 46) = v19;
        v15 += 128;
      } while (-(__int64)(v2 & 0x7FFFFFFC) != v17);
      v14 = -v17;
    LABEL_71:
      v26 = v13;
      if ((v2 & 3) != 0) {
        v27 = (_DWORD*)(v3 + 32 * v14 + 20);
        v28 = (_DWORD*)(v6 + 44 * v14 + 32);
        do {
          v26 = *(v28 - 6);
          if (v26 > 3) {
            switch (v26) {
            case 4:
              v26 = 1;
              v29 = 4;
              break;
            case 8:
              v26 = 1;
              v29 = 8;
              break;
            case 16:
              v26 = 1;
              v29 = 16;
              break;
            default:
              goto LABEL_85;
            }
          }
          else if (v26 != 0) {
            if (v26 == 1) {
              v29 = 1;
              goto LABEL_74;
            }
            if (v26 != 2) {
            LABEL_85:
              v26 = 1;
              v29 = -1;
              goto LABEL_74;
            }
            v26 = 1;
            v29 = 2;
          }
          else {
            v29 = 0;
            v26 = v13;
          }
        LABEL_74:
          *((_BYTE*)v27 - 18) = v29;
          --v12;
          v13 = v26;
          *v27 = *v28;
          v30 = *(v28 - 1);
          v28 += 11;
          *(v27 - 1) = v30;
          v27 += 8;
        } while (v12 != 0);
      }
      if (v26 != 0) {
        v8 = 999;
      }
      else {
        v8 = 0;
      }
    LABEL_3:
      CudaDriverRoutine_12e340(v6);
      return v8;
    }
  }
  v8 = v7;
  goto LABEL_3;
}

__int64 cuda_driver_helpers2_1e50c0(__int64 a1, __int64* a2)
{
  __int64 v3;

  v3 = CudaDriverStub_12e330(1044);
  memset_plt(v3, 0, 1044);
  *a2 = v3;
  return 0;
}

__int64 cuda_driver_helpers2_238130(__int64 a1)
{
  __int64 result;
  __int64 v2;
  __int64 v3;

  v2 = 0;
  v3 = 0;
  result = CudaDriverStub_112b20(0, a1, 2, &v2, &v3);
  if ((_DWORD)result == 0) {
    if (*(_DWORD*)(*(_QWORD*)(v3 + 64) + 21864LL) == 1) {
      return 0;
    }
    else {
      return 101;
    }
  }
  return result;
}

__int64 cuda_driver_helpers2_2381a0(__int64 a1)
{
  __int64 result;
  __int64 v2;
  __int64 v3;

  v2 = 0;
  v3 = 0;
  result = CudaDriverStub_112b20(0, a1, 2, &v2, &v3);
  if ((_DWORD)result == 0) {
    if (*(_DWORD*)(*(_QWORD*)(v3 + 64) + 21864LL) == 1) {
      return 0;
    }
    else {
      return 101;
    }
  }
  return result;
}

__int64 cuda_driver_helpers2_238280(_QWORD* a1, unsigned int a2, int a3)
{
  __int64 result;
  unsigned int v7;
  _QWORD v8[8];
  __int128 v9;
  __int128 v10;
  __int128 v11;
  __int128 v12;
  __int128 v13;
  __int128 v14;
  __int128 v15;
  __int128 v16;
  __int128 v17;
  __int128 v18;
  __int128 v19;
  __int128 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  v22 = 0;
  v23 = 0;
  v21 = 0;
  memset(v8, 0, sizeof(v8));
  v9 = 0u;
  v10 = 0u;
  v11 = 0u;
  v12 = 0u;
  v13 = 0u;
  v14 = 0u;
  v15 = 0u;
  v16 = 0u;
  v17 = 0u;
  v18 = 0u;
  v19 = 0u;
  v20 = 0u;
  result = CudaDriverRoutine_121c60(&v23);
  if ((_DWORD)result == 0) {
    result = cuda_driver_misc_helpers_ded50(v23, 0, 0);
    if ((_DWORD)result == 0) {
      result = 101;
      if ((a3 & 0x80000000) == 0 && a3 < CudaDriverData_1434ac0) {
        if (a1 != nullptr) {
          result = CudaDriverRoutine_97bc0(
              v8, *((_QWORD*)&CudaDriverData_14347a8 + (unsigned int)a3 + 35),
              a2, 1);
          if ((_DWORD)result == 0) {
            BYTE1(v9) = 1;
            HIDWORD(v8[2]) = 3020;
            result = CudaDriverRoutine_9bad0(&v22, v8);
            if ((_DWORD)result == 0) {
              result = CudaDriverRoutine_1218b0(v23, v22);
              if ((_DWORD)result != 0) {
                v7 = result;
                CudaDriverRoutine_9bd90(v22);
                return v7;
              }
              else {
                *a1 = v22;
              }
            }
          }
        }
        else {
          return 1;
        }
      }
    }
  }
  return result;
}

__int64 cuda_driver_helpers2_2383d0(__int64 a1)
{
  __int64 result;
  __int64 v2;
  __int64 v3;

  v2 = 0;
  v3 = 0;
  result = CudaDriverStub_112b20(0, a1, 2, &v2, &v3);
  if ((_DWORD)result == 0) {
    if (*(_DWORD*)(*(_QWORD*)(v3 + 64) + 21864LL) == 1) {
      return 0;
    }
    else {
      return 101;
    }
  }
  return result;
}

__int64 cuda_driver_helpers2_238440(__int64 a1)
{
  __int64 result;
  __int64 v2;
  __int64 v3;

  v2 = 0;
  v3 = 0;
  result = CudaDriverStub_112b20(0, a1, 2, &v2, &v3);
  if ((_DWORD)result == 0) {
    if (*(_DWORD*)(*(_QWORD*)(v3 + 64) + 21864LL) == 1) {
      return 0;
    }
    else {
      return 101;
    }
  }
  return result;
}

#pragma GCC visibility pop
