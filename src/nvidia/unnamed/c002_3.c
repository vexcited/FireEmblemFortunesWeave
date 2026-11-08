#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern __int64 CudaDriverData_14230e0;
extern __int64 CudaDriverData_1423360;
extern __int64 CudaDriverData_1423370;
extern int CudaDriverData_14302f8;
extern __int64 (*CudaDriverData_1432e40)(__int64, __int64, __int64);
extern __int64 (*CudaDriverData_1432e48)(__int64, __int64);
extern __int64 (*CudaDriverData_1432e50)(__int64, __int64, __int64);
extern __int64 CudaDriverData_1432e58;
extern _UNKNOWN CudaDriverData_143bd90;
extern __int64 CudaDriverData_143bd98;
__int64 CudaDriverRoutine_107f60(_QWORD);
__int64 CudaDriverRoutine_107f90(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_108070(_QWORD);
__int64 CudaDriverRoutine_108520(__int64);
__int64 CudaDriverRoutine_1085d0(__int64 result);
__int64 CudaDriverRoutine_108740(__int64 result, unsigned __int64*);
__int64 CudaDriverRoutine_1089c0(__int64 result, __int64);
__int64 CudaDriverRoutine_10ce40(_QWORD);
__int64 CudaDriverRoutine_10d1b0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_10da00(__int64 result, char);
__int64 CudaDriverRoutine_10eae0(__int64*, __int64, __int64, _QWORD*, _QWORD*);
__int64 CudaDriverRoutine_113ee0(__int64, char);
__int64 CudaDriverRoutine_115e00(__int64);
__int64 CudaDriverRoutine_115f80(__int64, char);
__int64 CudaDriverRoutine_126a10(_QWORD*, __int64, __int64);
void CudaDriverRoutine_127550(__int64, __int64, __int64);
__int64 CudaDriverRoutine_127720();
__int64 CudaDriverRoutine_127760();
__int64 CudaDriverRoutine_127d40(void);
__int64 CudaDriverRoutine_127eb0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_127fa0();
__int64 CudaDriverRoutine_129930(__int64, __int64, __int64, __int16, _QWORD*);
__int64 CudaDriverRoutine_129b40(__int64, _QWORD*, int,
                                 __int64 (*)(_QWORD*, __int64), __int64);
__int64 CudaDriverRoutine_12a5e0();
__int64 CudaDriverRoutine_12a640();
__int64 CudaDriverRoutine_12a820();
long double CudaDriverRoutine_12b300(__int64*);
__int64 CudaDriverRoutine_12df20(_QWORD);
__int64 CudaDriverRoutine_12df40(_QWORD, _QWORD);
__int64 CudaDriverRoutine_12e330(_QWORD);
__int64 CudaDriverRoutine_12e340(_QWORD);
__int64 CudaDriverRoutine_1a2300(_QWORD);
__int64 CudaDriverRoutine_1a24d0(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1a2560(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1a2800(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1a2980(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1a2b00(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1a4580(_QWORD);
__int64 CudaDriverRoutine_1a47a0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1a4c70(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1a4c80(void);
__int64 CudaDriverRoutine_1bace0(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1d9f90(_QWORD);
__int64 CudaDriverRoutine_1db190(_QWORD);
__int64 CudaDriverRoutine_1dbab0(_QWORD);
__int64 CudaDriverRoutine_1dbb80(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1dbf50(_QWORD);
__int64 CudaDriverRoutine_1dbf90(_QWORD);
__int64 CudaDriverRoutine_1fc4a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1fc5a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_25cf10(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_25cf30(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_25d850(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_3a0();
__int64 CudaDriverRoutine_8a8a0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_98190(_QWORD, _QWORD);
__int64 CudaDriverRoutine_98340(_QWORD);
__int64 CudaDriverRoutine_9ac80(_QWORD);
__int64 CudaDriverRoutine_9ae50(_QWORD);
__int64 CudaDriverRoutine_9b050(_QWORD);
__int64 CudaDriverRoutine_b4720(void);
__int64 CudaDriverRoutine_ded50(__int64, __int64*, unsigned int);
__int64 CudaDriverRoutine_deeb0(__int64, char);
__int64 CudaDriverRoutine_ed630(__int64, __int64, const char*, ...);
__int64 CudaDriverRoutine_f6490(int*, _QWORD*, char);
__int64 CudaDriverRoutine_f8620(int*, __int64, int, __int64, __int64, __int64,
                                __int64, __int64, __int64, __int64,
                                unsigned __int64, unsigned __int64,
                                unsigned __int64*, __int64, unsigned __int8);
__int64 CudaDriverRoutine_f8f30(__int64, __int64);

__int64 CudaDriverHr_f8550(_QWORD* a1, _QWORD* a2, _QWORD* a3, _QWORD* a4)
{
  if (*a3 != 0) {
    if (*a3 < *a2) {
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          "Pitch must be greater than copy width in bytes\n");
      return 1;
    }
  }
  else {
    *a3 = *a2 + *a1;
  }
  if (*a4 != 0) {
    if (*a4 >= a2[1]) {
      return 0;
    }
    else {
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          "Operand height must be greater than copy extent height\n");
      return 1;
    }
  }
  else {
    *a4 = a2[1] + a1[1];
    return 0;
  }
}

__int64 CudaDriverHr_f8f30(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v6;

  if (*(_DWORD*)a2 != 1) {
    if (*(_DWORD*)a2 != 3) {
      return 0;
    }
    v2 = 80;
    v3 = 72;
    v4 = *(_QWORD*)(a2 + 72);
    if (v4 != 0) {
      goto LABEL_4;
    }
  LABEL_7:
    *(_QWORD*)(a2 + v3) = *(_QWORD*)(a1 + 400) + *(_QWORD*)(a2 + 176);
    goto LABEL_8;
  }
  v2 = 56;
  v3 = 48;
  v4 = *(_QWORD*)(a2 + 48);
  if (v4 == 0) {
    goto LABEL_7;
  }
LABEL_4:
  if (v4 < *(_QWORD*)(a1 + 400)) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            "Pitch must be greater than copy width in bytes\n");
    return 1;
  }
LABEL_8:
  v6 = *(_QWORD*)(a2 + v2);
  if (v6 != 0) {
    if (v6 < *(_QWORD*)(a1 + 408)) {
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          "Operand height must be greater than copy extent height\n");
      return 1;
    }
    return 0;
  }
  *(_QWORD*)(a2 + v2) = *(_QWORD*)(a1 + 408) + *(_QWORD*)(a2 + 184);
  return 0;
}

__int64 CudaDriverHr_fd5c0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           unsigned __int8 a5)
{
  unsigned __int64* v5;
  int* v6;
  __int128 v12;
  unsigned int v13;
  const char* v14;
  unsigned int v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;

  if (a1 == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            "Memcpy parameters cannot be NULL\n");
    return 1;
  }
  if (*(_QWORD*)(a1 + 176) == 0 || *(_QWORD*)(a1 + 184) == 0 ||
      *(_QWORD*)(a1 + 192) == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            "0 byte memcopy is not supported\n");
    return 1;
  }
  *(_QWORD*)(a2 + 464) = 0;
  v5 = (unsigned __int64*)(a2 + 400);
  v6 = (int*)(a2 + 200);
  *(_OWORD*)(a2 + 16) = 0u;
  *(_OWORD*)(a2 + 32) = 0u;
  *(_OWORD*)(a2 + 48) = 0u;
  *(_OWORD*)(a2 + 64) = 0u;
  *(_OWORD*)a2 = 0u;
  *(_OWORD*)(a2 + 80) = 0u;
  *(_OWORD*)(a2 + 96) = 0u;
  *(_OWORD*)(a2 + 112) = 0u;
  *(_OWORD*)(a2 + 128) = 0u;
  *(_OWORD*)(a2 + 144) = 0u;
  *(_OWORD*)(a2 + 160) = 0u;
  *(_DWORD*)(a2 + 164) = -2;
  *(_OWORD*)(a2 + 176) = 0u;
  *(_OWORD*)(a2 + 192) = 0u;
  *(_OWORD*)(a2 + 208) = 0u;
  *(_OWORD*)(a2 + 224) = 0u;
  *(_OWORD*)(a2 + 240) = 0u;
  *(_OWORD*)(a2 + 256) = 0u;
  *(_OWORD*)(a2 + 272) = 0u;
  *(_OWORD*)(a2 + 288) = 0u;
  *(_OWORD*)(a2 + 304) = 0u;
  *(_OWORD*)(a2 + 320) = 0u;
  *(_OWORD*)(a2 + 336) = 0u;
  *(_OWORD*)(a2 + 352) = 0u;
  *(_DWORD*)(a2 + 364) = -2;
  *(_OWORD*)(a2 + 368) = 0u;
  *(_OWORD*)(a2 + 384) = 0u;
  *(_OWORD*)(a2 + 400) = 0u;
  *(_OWORD*)(a2 + 416) = 0u;
  *(_OWORD*)(a2 + 432) = 0u;
  *(_OWORD*)(a2 + 448) = 0u;
  v12 = *(_OWORD*)(a1 + 176);
  *(_QWORD*)(a2 + 416) = *(_QWORD*)(a1 + 192);
  *(_OWORD*)(a2 + 400) = v12;
  v13 = CudaDriverRoutine_f8620(
      (int*)(a2 + 200), a3, *(_DWORD*)(a1 + 120), *(_QWORD*)(a1 + 128),
      *(_QWORD*)(a1 + 136), *(_QWORD*)(a1 + 144), *(_QWORD*)(a1 + 88),
      *(_QWORD*)(a1 + 96), *(_QWORD*)(a1 + 104), *(_QWORD*)(a1 + 112),
      *(_QWORD*)(a1 + 160), *(_QWORD*)(a1 + 168), (unsigned __int64*)(a2 + 400),
      a4, a5);
  if (v13 != 0) {
    v14 = "Error identifying destination operand\n";
  LABEL_13:
    v16 = v13;
    CudaDriverRoutine_ed630((__int64)"CUDA", 0, v14);
    return v16;
  }
  v13 = CudaDriverRoutine_f8620(
      (int*)a2, a3, *(_DWORD*)(a1 + 32), *(_QWORD*)(a1 + 40),
      *(_QWORD*)(a1 + 48), *(_QWORD*)(a1 + 56), *(_QWORD*)a1,
      *(_QWORD*)(a1 + 8), *(_QWORD*)(a1 + 16), *(_QWORD*)(a1 + 24),
      *(_QWORD*)(a1 + 72), *(_QWORD*)(a1 + 80), v5, a4, a5);
  if (v13 != 0) {
    v14 = "Error identifying soruce operand\n";
    goto LABEL_13;
  }
  if (*v6 == 1) {
    v18 = 14;
    v19 = 12;
    v17 = (_QWORD*)a2;
    goto LABEL_18;
  }
  v17 = (_QWORD*)a2;
  if (*v6 == 3) {
    v18 = 20;
    v19 = 18;
  LABEL_18:
    v20 = *(_QWORD*)&v6[v19];
    if (v20 != 0) {
      if (v20 < *v5) {
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            "Pitch must be greater than copy width in bytes\n");
      LABEL_25:
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            "Invalid destination dimensions given extent\n");
        return 1;
      }
    }
    else {
      *(_QWORD*)&v6[v19] = v17[50] + v17[47];
    }
    v21 = *(_QWORD*)&v6[v18];
    if (v21 != 0) {
      if (v21 < v17[51]) {
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            "Operand height must be greater than copy extent height\n");
        goto LABEL_25;
      }
    }
    else {
      *(_QWORD*)&v6[v18] = v17[51] + v17[48];
    }
  }
  if ((unsigned int)CudaDriverRoutine_f8f30((__int64)v17, (__int64)v17) != 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            "Invalid source dimensions given extent\n");
  }
  else if ((unsigned int)CudaDriverRoutine_f6490(v6, v5, 0) == 0) {
    return CudaDriverRoutine_f6490((int*)a2, v5, 4);
  }
  return 1;
}

__int64 CudaDriverHr_103d70(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v6;

  v1 = *(_QWORD*)(a1 + 16);
  if (v1 == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(a1 + 32);
  if (v2 == 0) {
    return 0;
  }
  v3 = *(unsigned int*)(a1 + 12);
  v4 = (unsigned int)(v3 - 1);
  if ((*(_QWORD*)a1 & v4) != 0) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        "Device pointer must be %u-byte aligned to match elementSize\n", v3);
    return 1;
  }
  if (v2 == 1) {
    return 0;
  }
  v6 = *(_QWORD*)(a1 + 24);
  if (v6 >= v1 * v3) {
    if ((v6 & v4) == 0) {
      return 0;
    }
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        "Pitch must be %u-byte aligned to match elementSize\n", v3);
    return 1;
  }
  else {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        "Pitch must be greater than width (in bytes) of fill\n");
    return 1;
  }
}

__int64 CudaDriverHr_104e80(__int64* a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;

  if (a1 == nullptr) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            "memsetParams must not be NULL\n");
    return 1;
  }
  if (a1[3] == 0 || a1[4] == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0, "0 byte memset not allowed\n");
    return 1;
  }
  *(_OWORD*)(a2 + 16) = 0u;
  *(_OWORD*)(a2 + 32) = 0u;
  *(_OWORD*)a2 = 0u;
  v2 = *a1;
  *(_QWORD*)a2 = *a1;
  *(_DWORD*)(a2 + 8) = *((_DWORD*)a1 + 4);
  v3 = a1[3];
  *(_QWORD*)(a2 + 16) = v3;
  v4 = a1[4];
  *(_QWORD*)(a2 + 32) = v4;
  v5 = a1[1];
  *(_DWORD*)(a2 + 40) = 0;
  *(_QWORD*)(a2 + 24) = v5;
  v6 = *((unsigned int*)a1 + 5);
  if ((unsigned int)v6 > 4 || ((1 << v6) & 0x16) == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            "element size must be 1, 2 or 4\n");
    return 1;
  }
  result = 0;
  *(_DWORD*)(a2 + 12) = v6;
  if (v3 != 0 && v4 != 0) {
    v8 = (unsigned int)(v6 - 1);
    if ((v2 & v8) == 0) {
      if (v4 != 1) {
        if (v5 < v3 * v6) {
          CudaDriverRoutine_ed630(
              (__int64)"CUDA", 0,
              "Pitch must be greater than width (in bytes) of fill\n");
          return 1;
        }
        if ((v5 & v8) != 0) {
          CudaDriverRoutine_ed630(
              (__int64)"CUDA", 0,
              "Pitch must be %u-byte aligned to match elementSize\n");
          return 1;
        }
      }
      return 0;
    }
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        "Device pointer must be %u-byte aligned to match elementSize\n");
    return 1;
  }
  return result;
}

__int64 CudaDriverHr_1077c0(__int64 a1, __int64* a2, __int64 a3, char a4)
{
  __int64 result;
  __int64 v8;

  result = CudaDriverRoutine_ded50(a1, nullptr, 0);
  if ((_DWORD)result != 0) {
    return result;
  }
  if (a3 == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0, "CUmodule cannot be NULL\n");
    return 400;
  }
  if (*(_DWORD*)a3 != 1) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            "module is of wrong type, expected CUmodule\n");
    return 400;
  }
  v8 = *(_QWORD*)(a3 + 24);
  result = CudaDriverRoutine_deeb0(v8, a4);
  if ((_DWORD)result == 0) {
    result = 0;
    if (a2 != nullptr) {
      *a2 = v8;
    }
  }
  return result;
}

__int64 CudaDriverHr_10bda0(__int64 a1, int a2, int a3)
{
  if (((a3 + 3) & 0xFFFFFFFC) + a2 <=
      4 * *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 24LL) + 64LL) +
                     3792LL)) {
    return 0;
  }
  CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                          "Size of parameters for %s exceeds device limit\n",
                          *(const char**)(a1 + 8));
  return 1;
}

__int64 CudaDriverHr_10be00(__int64 a1, int a2)
{
  if (((a2 + 3) & 0xFFFFFFFC) <=
      4 * *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 24LL) + 64LL) +
                     3792LL)) {
    *(_DWORD*)(a1 + 640) = a2;
    return 0;
  }
  else {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            "Size of parameters for %s exceeds device limit\n",
                            *(const char**)(a1 + 8));
    return 1;
  }
}

__int64 CudaDriverHr_10be60(__int64 a1, unsigned int a2, __int64 a3,
                            unsigned int a4)
{
  if (((a4 + 3) & 0xFFFFFFFC) + a2 <=
      4 * *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 24LL) + 64LL) +
                     3792LL)) {
    CudaDriverRoutine_25cf30(*(_QWORD*)(a1 + 648) + a2, a3, a4);
    return 0;
  }
  else {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            "Size of parameters for %s exceeds device limit\n",
                            *(const char**)(a1 + 8));
    return 1;
  }
}

__int64 CudaDriverHr_10c9e0(unsigned int** a1)
{
  unsigned int* v1;
  _QWORD* v3;
  __int64 v4;
  unsigned int* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  unsigned __int64* v9;
  __int64 v10;
  int v11;
  __int64 v12;
  unsigned int v13;
  unsigned int* v14;
  __int64 v15;
  unsigned int v16;
  _QWORD* v17;
  unsigned int v19;
  unsigned int v20;
  __int64 v21;
  const char* v22;
  __int64 i;
  char v24[4];

  v1 = a1[1];
  v3 = (_QWORD*)CudaDriverData_14230e0;
  CudaDriverRoutine_107f90(*(_QWORD*)CudaDriverData_14230e0, 0, 0);
  v4 = *v3;
  a1[22] = *(unsigned int**)(*v3 + 16LL);
  *(_QWORD*)(v4 + 16) = a1;
  v5 = a1[22];
  if (v5 != nullptr) {
    *((_QWORD*)v5 + 21) = a1;
  }
  *((_BYTE*)a1 + 160) = 1;
  if (*((_BYTE*)a1 + 161) != 0) {
    if ((unsigned __int8)CudaDriverRoutine_1d9f90(a1) == 0) {
      goto LABEL_31;
    }
  }
  else {
    v6 = v4 + 4LL * **a1;
    ++*(_DWORD*)(v6 + 48);
    if ((unsigned __int8)CudaDriverRoutine_1d9f90(a1) == 0) {
      goto LABEL_31;
    }
  }
  if ((unsigned __int8)CudaDriverRoutine_127d40() == 0) {
    goto LABEL_31;
  }
  v7 = *(_QWORD*)(*v3 + 16LL);
  if (v7 == 0) {
  LABEL_32:
    v9 = nullptr;
    goto LABEL_33;
  }
  v8 = 0;
  do {
    if ((unsigned int**)v7 != a1 && *(_QWORD*)(v7 + 8) != 0 &&
        (unsigned __int8)CudaDriverRoutine_1d9f90(v7) != 0 &&
        (unsigned __int8)CudaDriverRoutine_9ac80(
            *(_QWORD*)(*(_QWORD*)(v7 + 8) + 64LL)) == 0) {
      ++v8;
    }
    v7 = *(_QWORD*)(v7 + 176);
  } while (v7 != 0);
  if (v8 == 0) {
  LABEL_31:
    LODWORD(v7) = 0;
    goto LABEL_32;
  }
  if (a1[1] != nullptr) {
    LODWORD(v7) = v8 + 1;
  }
  else {
    LODWORD(v7) = v8;
  }
  v9 = (unsigned __int64*)CudaDriverRoutine_12e330(8LL * (unsigned int)v7);
  if (v9 == nullptr) {
    LODWORD(v7) = 0;
  LABEL_63:
    v16 = 2;
    goto LABEL_64;
  }
  v10 = *(_QWORD*)(*v3 + 16LL);
  if (v10 != 0) {
    v11 = 0;
    do {
      if ((unsigned int**)v10 == a1 ||
          *(_QWORD*)(v10 + 8) != 0 &&
              (unsigned __int8)CudaDriverRoutine_1d9f90(v10) != 0 &&
              (unsigned __int8)CudaDriverRoutine_9ac80(
                  *(_QWORD*)(*(_QWORD*)(v10 + 8) + 64LL)) == 0) {
        v9[v11++] = *(_QWORD*)(v10 + 8) + 24LL;
      }
      v10 = *(_QWORD*)(v10 + 176);
    } while (v10 != 0);
  }
  CudaDriverRoutine_108740((unsigned int)v7, v9);
  for (i = *(_QWORD*)(*v3 + 16LL); i != 0; i = *(_QWORD*)(i + 176)) {
    if ((unsigned int**)i != a1 && *(_QWORD*)(i + 8) != 0 &&
        (unsigned __int8)CudaDriverRoutine_1d9f90(i) != 0 &&
        (unsigned __int8)CudaDriverRoutine_9ac80(
            *(_QWORD*)(*(_QWORD*)(i + 8) + 64LL)) == 0) {
      v13 = CudaDriverRoutine_98190(*(_QWORD*)(i + 8), 0);
      if (v13 != 0) {
        goto LABEL_40;
      }
    }
  }
LABEL_33:
  v12 = *(_QWORD*)(*v3 + 24LL);
  if (v12 != 0) {
    while (1) {
      v13 = CudaDriverRoutine_10d1b0(v12, a1);
      if (v13 != 0) {
        break;
      }
      v14 = *a1;
      if (*(_DWORD*)(*v3 + 4LL * **a1 + 48) == 1 &&
          *((_BYTE*)v14 + 16936) != 0) {
        v15 = CudaDriverRoutine_9b050(v14);
        v13 = CudaDriverRoutine_10d1b0(v12, v15);
        if (v13 != 0) {
          break;
        }
      }
      v12 = *(_QWORD*)(v12 + 344);
      if (v12 == 0) {
        goto LABEL_41;
      }
    }
  LABEL_40:
    v16 = v13;
    goto LABEL_64;
  }
LABEL_41:
  if (v1 == nullptr ||
      (unsigned __int8)CudaDriverRoutine_9ac80(*((_QWORD*)v1 + 8)) == 0 ||
      *(_QWORD*)(*v3 + 304LL) == 0 ||
      (v17 = *(_QWORD**)(*v3 + 16LL)) == nullptr) {
  LABEL_45:
    CudaDriverRoutine_1089c0((unsigned int)v7, (__int64)v9);
    CudaDriverRoutine_12e340(v9);
    CudaDriverRoutine_108070(*v3);
    return 0;
  }
  while (1) {
    if ((unsigned __int8)CudaDriverRoutine_127eb0(v17, a1) != 0) {
      if ((unsigned int)CudaDriverRoutine_1fc4a0(a1 + 23, v17, 1, v24) == 0) {
        goto LABEL_63;
      }
      if (v24[0] != 0) {
        v19 = (*(__int64 (**)(void))(*v17 + 21048LL))();
        if (v19 != 0) {
          break;
        }
      }
    }
    v17 = (_QWORD*)v17[22];
    if (v17 == nullptr) {
      goto LABEL_45;
    }
  }
  v20 = v19;
  v21 = CudaDriverRoutine_b4720();
  if (v21 != 0) {
    v22 = *(const char**)(v21 + 8);
  }
  else {
    v22 = "UNRECOGNIZED_ERROR";
  }
  CudaDriverRoutine_ed630(
      (__int64)"CUDA", 0,
      "Failed to enable peer mapping in the OS abstraction layer: %s\n", v22);
  CudaDriverRoutine_1fc5a0(a1 + 23, v17, 1, 0);
  v16 = v20;
LABEL_64:
  CudaDriverRoutine_1089c0((unsigned int)v7, (__int64)v9);
  CudaDriverRoutine_12e340(v9);
  CudaDriverRoutine_108070(*v3);
  CudaDriverRoutine_10ce40(a1);
  return v16;
}

__int64 CudaDriverHr_10e2a0(__int64 a1)
{
  __int64 v2;
  __int64 i;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;

  v2 = CudaDriverData_14230e0;
  for (i = *(_QWORD*)(*(_QWORD*)CudaDriverData_14230e0 + 16LL); i != 0;
       i = *(_QWORD*)(i + 176)) {
    if (*(_BYTE*)(i + 161) == 0) {
      v8 = CudaDriverRoutine_98340(*(_QWORD*)(i + 8));
      CudaDriverRoutine_108520(v8 + 24);
      if (*(_DWORD*)(a1 + 40) != 0) {
        v9 = 0;
        do {
          CudaDriverRoutine_8a8a0(*(_QWORD*)(*(_QWORD*)(a1 + 64) + 8 * v9++),
                                  *(_QWORD*)(i + 8));
        } while (v9 < *(unsigned int*)(a1 + 40));
      }
      v7 = CudaDriverRoutine_98340(*(_QWORD*)(i + 8));
      CudaDriverRoutine_1085d0(v7 + 24);
    }
  }
  result = CudaDriverRoutine_10da00(*(_QWORD*)(a1 + 88), 1);
  if (*(_QWORD*)(*(_QWORD*)v2 + 40LL) == a1) {
    v5 = *(_QWORD*)(a1 + 144);
    *(_QWORD*)(*(_QWORD*)v2 + 40LL) = v5;
    if (v5 != 0) {
      v6 = 0;
      goto LABEL_14;
    }
  }
  else {
    v5 = *(_QWORD*)(a1 + 144);
    *(_QWORD*)(*(_QWORD*)(a1 + 136) + 144LL) = v5;
    if (v5 != 0) {
      v6 = *(_QWORD*)(a1 + 136);
    LABEL_14:
      *(_QWORD*)(v5 + 136) = v6;
    }
  }
  *(_BYTE*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  return result;
}

__int64 CudaDriverHr_116120(__int64 a1, char a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v11;
  int v12;

  CudaDriverRoutine_107f90(a1 + 8, 0, 0);
  if (*(_BYTE*)(a1 + 24) == 0) {
    v4 = *(_QWORD*)(a1 + 40);
    if (a2 != 0) {
      if (v4 != 0) {
        do {
          v5 = *(_QWORD*)(v4 + 584);
          v6 = *(_QWORD*)(v4 + 320);
          v12 = 2;
          if ((unsigned int)CudaDriverRoutine_1bace0(&v12, v5, 1) != 0) {
            break;
          }
          if (v12 == 5) {
            CudaDriverRoutine_115e00(v4);
          }
          v4 = v6;
        } while (v6 != 0);
      }
    }
    else if (v4 != 0) {
      do {
        CudaDriverRoutine_113ee0(v4, 1);
        v4 = *(_QWORD*)(v4 + 320);
      } while (v4 != 0);
      v7 = *(_QWORD*)(a1 + 40);
      if (v7 != 0) {
        do {
          v8 = *(_QWORD*)(v7 + 584);
          v9 = *(_QWORD*)(v7 + 320);
          v11 = 2;
          if ((unsigned int)CudaDriverRoutine_1bace0(&v11, v8, 1) != 0) {
            break;
          }
          if (v11 == 5) {
            CudaDriverRoutine_115e00(v7);
          }
          v7 = v9;
        } while (v9 != 0);
      }
    }
    if (*(int*)(a1 + 64) >= 1) {
      do {
        CudaDriverRoutine_115f80(*(_QWORD*)(a1 + 56), 1);
      } while (*(int*)(a1 + 64) > 0);
    }
  }
  return CudaDriverRoutine_108070(a1 + 8);
}

__int64 CudaDriverHr_117620(__int64 a1, __int64 a2)
{
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  float v6;
  char v9;
  const void* v10;
  unsigned __int64 v11;

  if (*(_DWORD*)(a2 + 24) == 2) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        "Cache miss property cannot be set to CU_ACCESS_PROPERTY_PERSISTING\n");
    return 1;
  }
  else {
    v3 = *(_QWORD*)(a1 + 64);
    v4 = *(_QWORD*)(a2 + 8);
    v5 = *(unsigned int*)(v3 + 4228);
    if (v4 <= v5) {
      v6 = *(float*)(a2 + 16);
      if (v6 >= 0.0 && v6 <= 1.0) {
        v9 = CudaDriverRoutine_9ae50(v3);
        v10 = *(const void**)a2;
        if (v9 != 0) {
          v11 = 0x200000000000000LL;
        }
        else {
          v11 = 0x2000000000000LL;
        }
        if (v11 <= (unsigned __int64)v10) {
          CudaDriverRoutine_ed630(
              (__int64)"CUDA", 0,
              "Window base address %p exceeds VA range limit %llx\n", v10, v11);
          return 1;
        }
        else {
          return 0;
        }
      }
      else {
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            "Hit ratio %f is outside of valid range [0,1]\n", v6);
        return 1;
      }
    }
    else {
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          "Access policy window size %llu > max supported %u\n", v4, v5);
      return 1;
    }
  }
}

__int64 CudaDriverHr_117740(__int64 a1, unsigned __int8* a2)
{
  unsigned int v3;

  v3 = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 64) + 18424LL))(44);
  if (*a2 >= v3) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            "Invalid mem sync domain map: default domain maps "
                            "to %u which is beyond the device limit %u");
  }
  else {
    if (a2[1] < v3) {
      return 0;
    }
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            "Invalid mem sync domain map: remote domain maps "
                            "to %u which is beyond the device limit %u");
  }
  return 1;
}

__int64 CudaDriverHr_1177d0(unsigned int a1)
{
  if (a1 < 2) {
    return 0;
  }
  CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                          "Invalid CUlaunchMemSyncDomain value %d", a1);
  return 1;
}

__int64 CudaDriverHr_117980(__int64 a1, _WORD* a2, unsigned __int8* a3)
{
  unsigned int v5;

  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 64) + 18424LL))(44);
  if (*a3 >= v5) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            "Invalid mem sync domain map: default domain maps "
                            "to %u which is beyond the device limit %u");
  }
  else {
    if (a3[1] < v5) {
      *a2 = *(_WORD*)a3;
      return 0;
    }
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            "Invalid mem sync domain map: remote domain maps "
                            "to %u which is beyond the device limit %u");
  }
  return 1;
}

__int64 CudaDriverHr_117a20(unsigned int* a1, unsigned int a2)
{
  if (a2 >= 2) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            "Invalid CUlaunchMemSyncDomain value %d", a2);
    return 1;
  }
  else {
    *a1 = a2;
    return 0;
  }
}

__int64 CudaDriverHr_11feb0(__int64 a1, __int64 a2, _OWORD* a3)
{
  __int128 v3;
  _QWORD v5[4];
  char v6[256];

  v3 = a3[1];
  *(_OWORD*)v5 = *a3;
  *(_OWORD*)&v5[2] = v3;
  CudaDriverRoutine_25d850(v6, 256, a2, v5);
  return CudaDriverRoutine_ed630((__int64)"CUDA", 0, v6);
}

__int64 CudaDriverHr_121030(__int64 a1, _OWORD* a2)
{
  __int128 v2;
  _QWORD v4[4];
  char v5[256];

  v2 = a2[1];
  *(_OWORD*)v4 = *a2;
  *(_OWORD*)&v4[2] = v2;
  CudaDriverRoutine_25d850(v5, 256, a1, v4);
  return CudaDriverRoutine_ed630((__int64)"CUDA", 0, v5);
}

__int64 CudaDriverHr_126b40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;

  v4 = *(_QWORD*)(a3 + 24);
  if ((unsigned int)CudaDriverRoutine_126a10(*(_QWORD**)a3, *(_QWORD*)(a3 + 8),
                                             *(_QWORD*)(a3 + 16)) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)CudaDriverData_1423360 + 424LL))(v4);
  }
  return CudaDriverRoutine_12e340(a3);
}

__int64 CudaDriverHr_1275c0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  char v4;

  if (result != 0) {
    v1 = result;
    v2 = *(_QWORD*)(result + 40);
    if (v2 != 0) {
      v3 = 0;
      v4 = 1;
      CudaDriverRoutine_1a2800(v2, CudaDriverRoutine_127550, &v3);
      CudaDriverRoutine_1a2300(*(_QWORD*)(v1 + 40));
      *(_QWORD*)(v1 + 40) = 0;
    }
    CudaDriverRoutine_107f60(v1);
    return CudaDriverRoutine_12e340(v1);
  }
  return result;
}

__int64 CudaDriverHr_127670(__int64 result)
{
  __int64 v1;
  unsigned int v2;

  v2 = 0;
  if (result != 0) {
    if (*(_BYTE*)(result + 24) != 0) {
      return 0;
    }
    else {
      v1 = result;
      CudaDriverRoutine_1a2800(*(_QWORD*)(result + 40),
                               CudaDriverRoutine_127720, &v2);
      if (v2 != 0) {
        CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                                "Failed to setup managed variables\n");
        CudaDriverRoutine_1a2800(*(_QWORD*)(v1 + 40), CudaDriverRoutine_127760,
                                 0);
        return v2;
      }
      else {
        *(_BYTE*)(v1 + 24) = 1;
        return 0;
      }
    }
  }
  return result;
}

__int64 CudaDriverHr_127830(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;

  v3 = a1;
  v4 = CudaDriverRoutine_1dbf90(a1);
  v5 = CudaDriverRoutine_1dbab0(v3);
  if (a2 != 0) {
    CudaDriverRoutine_25cf30(v5, a2, v4);
  }
  else {
    CudaDriverRoutine_25cf10(v5, 0, v4);
  }
  v6 = (_QWORD*)CudaDriverData_1423360;
  CudaDriverRoutine_107f90(*(_QWORD*)CudaDriverData_1423360, 0, 0);
  v7 = *(_QWORD*)(v3 + 416);
  if (v7 != 0) {
    CudaDriverRoutine_12df20(v7 + 936);
    v8 = *(_QWORD*)(v3 + 408);
    if (v8 != 3) {
      if (v8 != 2) {
        v9 = (_QWORD*)(v7 + 928);
        if (*(_QWORD*)(v7 + 928) == v3) {
          goto LABEL_17;
        }
      LABEL_14:
        v11 = *(_QWORD*)(v3 + 456);
        *(_QWORD*)(*(_QWORD*)(v3 + 448) + 456LL) = v11;
        if (v11 == 0) {
          goto LABEL_20;
        }
        v12 = *(_QWORD*)(v3 + 448);
        goto LABEL_19;
      }
    LABEL_11:
      v9 = (_QWORD*)(*v6 + 24LL);
      if (*v9 == v3) {
        goto LABEL_17;
      }
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  v10 = *(_QWORD*)(v3 + 408);
  if (v10 == 3) {
  LABEL_13:
    v9 = (_QWORD*)(*v6 + 32LL);
    if (*v9 != v3) {
      goto LABEL_14;
    }
    goto LABEL_17;
  }
  if (v10 == 2) {
    goto LABEL_11;
  }
  v9 = (_QWORD*)CudaDriverRoutine_3a0;
  if (*(_QWORD*)CudaDriverRoutine_3a0 != v3) {
    goto LABEL_14;
  }
LABEL_17:
  v11 = *(_QWORD*)(v3 + 456);
  *v9 = v11;
  if (v11 != 0) {
    v12 = 0;
  LABEL_19:
    *(_QWORD*)(v11 + 448) = v12;
  }
LABEL_20:
  v13 = *v6;
  *(_QWORD*)(v3 + 408) = 0;
  *(_QWORD*)(v3 + 416) = 0;
  *(_QWORD*)(v3 + 448) = 0;
  *(_QWORD*)(v3 + 456) = 0;
  *(_QWORD*)(v3 + 456) = *(_QWORD*)(v13 + 24);
  *(_QWORD*)(v13 + 24) = v3;
  v14 = *(_QWORD*)(v3 + 456);
  if (v14 != 0) {
    *(_QWORD*)(v14 + 448) = v3;
  }
  *(_QWORD*)(v3 + 408) = 2;
  *(_QWORD*)(v3 + 416) = 0;
  v15 = (*(__int64 (**)(__int64))(v13 + 264))(v3);
  if (v15 != 0) {
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        "Failed to make managed allocation GPU accessible\n");
  }
  else {
    CudaDriverRoutine_108070(*v6);
    if ((*(_BYTE*)(v3 + 400) & 1) == 0) {
      v3 = CudaDriverRoutine_1dbf50(v3);
    }
    CudaDriverRoutine_107f90(*v6, 0, 0);
    *(_QWORD*)(v3 + 432) = 2;
  }
  CudaDriverRoutine_108070(*v6);
  return v15;
}

__int64 CudaDriverHr_127b30(_QWORD* a1, const char* a2, __int64 a3, __int64 a4,
                            __int64* a5, _BYTE* a6)
{
  __int64 v6;
  __int64 result;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  v6 = a1[46];
  if ((unsigned int)CudaDriverRoutine_12df40(&CudaDriverData_143bd90,
                                             CudaDriverRoutine_127fa0) != 0) {
    result = 304;
  }
  else {
    result = (unsigned int)CudaDriverData_14302f8;
  }
  if ((_DWORD)result == 0) {
    if (a1[1] == *(_QWORD*)(v6 + 32)) {
      *a6 = 0;
      v21 = 0;
      v14 = a1[46];
      v15 = *(__int64**)(a1[3] + 80LL);
      v22 = CudaDriverRoutine_1a2560(*(_QWORD*)(v14 + 40), a2);
      if (v22 != 0) {
        return 999;
      }
      result = CudaDriverRoutine_10eae0(v15, a4, a3, &v22, &v21);
      if ((_DWORD)result != 0 ||
          (_DWORD)(result = CudaDriverRoutine_1a24d0(*(_QWORD*)(v14 + 40), a2,
                                                     v21)) != 0) {
        if (v22 != 0) {
          v19 = result;
          CudaDriverRoutine_1db190(&v22);
          CudaDriverRoutine_1db190(&v21);
          return v19;
        }
        return result;
      }
      v18 = v22;
    }
    else {
      *a6 = 1;
      v16 = CudaDriverRoutine_1a2560(*(_QWORD*)(a1[46] + 40LL), a2);
      if (v16 == 0) {
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            "Managed variable '%s' not found on all UVM-enabled devices\n", a2);
        return 200;
      }
      v17 = v16;
      if (a3 != CudaDriverRoutine_1dbf90(v16)) {
        v20 = CudaDriverRoutine_1dbf90(v17);
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            "Size of the managed variable '%s' does not match on all "
            "UVM-enabled devices %lld != %lld\n",
            a2, a3, v20);
        return 200;
      }
      v18 = CudaDriverRoutine_1dbb80(v17, *(_QWORD*)(a1[3] + 80LL));
      result = 0;
    }
    *a5 = v18;
  }
  return result;
}

__int64 CudaDriverHr_129e70(__int64 a1, _QWORD* a2)
{
  __int64 v4;
  unsigned int v5;
  _QWORD* v7;

  v7 = nullptr;
  if (CudaDriverData_143bd98 == 0) {
    return 0;
  }
  CudaDriverRoutine_107f90(CudaDriverData_143bd98, 0, 0);
  v4 = CudaDriverRoutine_1a2980(*(_QWORD*)(CudaDriverData_143bd98 + 16),
                                *(_QWORD*)(a1 + 952));
  v5 = CudaDriverRoutine_129930(CudaDriverData_143bd98, v4, a1, 2, &v7);
  if (v5 == 0) {
    *a2 = *v7;
  }
  CudaDriverRoutine_108070(CudaDriverData_143bd98);
  return v5;
}

__int64 CudaDriverHr_129f20(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v9;

  v9 = 0;
  if (CudaDriverData_143bd98 == 0) {
    return 0;
  }
  CudaDriverRoutine_107f90(CudaDriverData_143bd98, 0, 0);
  v4 = CudaDriverRoutine_1a2980(*(_QWORD*)(CudaDriverData_143bd98 + 16), a2);
  v5 = CudaDriverRoutine_1a2980(*(_QWORD*)(CudaDriverData_143bd98 + 16),
                                *(_QWORD*)(a1 + 952));
  if (v4 != 0) {
    v6 = CudaDriverRoutine_129930(CudaDriverData_143bd98, v5, a1, 4, &v9);
    if (v6 == 0) {
      v7 = v9;
      *(_QWORD*)(v9 + 72) = *(_QWORD*)(v4 + 72);
      *(_QWORD*)(v4 + 72) = v7;
      *(_QWORD*)(v7 + 80) = v4;
    }
  }
  else {
    v6 = 0;
  }
  CudaDriverRoutine_108070(CudaDriverData_143bd98);
  return v6;
}

__int64 CudaDriverHr_129ff0(__int64 a1, __int64 a2, _BYTE* a3)
{
  __int64 result;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;

  *a3 = 0;
  v11 = 0;
  v12 = nullptr;
  result = CudaDriverData_143bd98;
  if (CudaDriverData_143bd98 != 0) {
    CudaDriverRoutine_107f90(CudaDriverData_143bd98, 0, 0);
    v7 = CudaDriverRoutine_1a2980(*(_QWORD*)(CudaDriverData_143bd98 + 16),
                                  *(_QWORD*)(a1 + 952));
    result = CudaDriverRoutine_129930(CudaDriverData_143bd98, v7, a1, 1, &v12);
    if ((_DWORD)result == 0) {
      v9 = v12;
      result = CudaDriverRoutine_129930(CudaDriverData_143bd98, (__int64)v12,
                                        a1, 16, &v11);
      v10 = v11;
      if ((_DWORD)result == 0) {
        *(_QWORD*)(a2 + 328) = *v9;
        *(_QWORD*)(a2 + 336) = *(_QWORD*)v10;
        *a3 = 1;
        return result;
      }
      if (v11 != 0) {
        *(_QWORD*)(v11 + 80) = 0;
        *(_QWORD*)(v10 + 88) = 0;
        *(_QWORD*)(v10 + 72) = 0;
        *(_BYTE*)(v10 + 56) = 1;
      }
    }
    v8 = (__int64)v12;
    if (v12 != nullptr) {
      v12[10] = 0;
      *(_QWORD*)(v8 + 88) = 0;
      *(_QWORD*)(v8 + 72) = 0;
      *(_BYTE*)(v8 + 56) = 1;
    }
  }
  return result;
}

__int64 CudaDriverHr_12a1d0(unsigned __int64 a1)
{
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  __int64 v6;
  unsigned int v7;
  _QWORD v9[2];

  if (CudaDriverData_143bd98 != 0) {
    CudaDriverRoutine_107f90(CudaDriverData_143bd98, 0, 0);
    v2 = CudaDriverRoutine_1a2980(*(_QWORD*)(CudaDriverData_143bd98 + 16), a1);
    v3 = CudaDriverData_143bd98;
    if (v2 != 0) {
      if (*(_BYTE*)(v2 + 56) == 16 && *(_QWORD*)v2 <= a1) {
        v6 = CudaDriverData_143bd98;
        v4 = CudaDriverRoutine_129b40(
            CudaDriverData_143bd98, (_QWORD*)v2, 1,
            (__int64 (*)(_QWORD*, __int64))CudaDriverRoutine_12a5e0, 0);
        v3 = v6;
      }
      else {
        v4 = 0;
      }
      v9[0] = v3;
      v9[1] = a1;
      v7 = CudaDriverRoutine_129b40(
          v3, (_QWORD*)v2, 0,
          (__int64 (*)(_QWORD*, __int64))CudaDriverRoutine_12a640, (__int64)v9);
      if (v4 != 0) {
        v5 = v4;
      }
      else {
        v5 = v7;
      }
      v3 = CudaDriverData_143bd98;
    }
    else {
      v5 = 0;
    }
    CudaDriverRoutine_108070(v3);
  }
  else {
    return 0;
  }
  return v5;
}

__int64 CudaDriverHr_12a2c0(__int64 a1, unsigned __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  _QWORD v14[3];
  char v15;
  _BYTE v16[7];
  unsigned int v17;

  v4 = CudaDriverRoutine_98340(*(_QWORD*)(a1 + 16));
  if (CudaDriverData_143bd98 != 0) {
    CudaDriverRoutine_107f90(CudaDriverData_143bd98, 0, 0);
    if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
      v10 = *(_QWORD*)(v4 + 2080);
      v17 = 0;
      memset(v16, 0, sizeof(v16));
      v14[0] = CudaDriverData_143bd98;
      v14[1] = a2;
      v14[2] = &v17;
      v15 = 1;
      CudaDriverRoutine_1a2b00(v10, CudaDriverRoutine_12a820, v14);
      v9 = v17;
    }
    else {
      v5 = CudaDriverRoutine_1a2980(*(_QWORD*)(CudaDriverData_143bd98 + 16),
                                    *(_QWORD*)(a1 + 952));
      if (v5 != 0) {
        v6 = v5;
        v7 = CudaDriverData_143bd98;
        if (*(_BYTE*)(v6 + 56) == 16 && *(_QWORD*)v6 <= a2) {
          v11 = CudaDriverData_143bd98;
          v8 = CudaDriverRoutine_129b40(
              CudaDriverData_143bd98, (_QWORD*)v6, 1,
              (__int64 (*)(_QWORD*, __int64))CudaDriverRoutine_12a5e0, 0);
          v7 = v11;
        }
        else {
          v8 = 0;
        }
        v14[0] = v7;
        v14[1] = a2;
        v12 = CudaDriverRoutine_129b40(
            v7, (_QWORD*)v6, 0,
            (__int64 (*)(_QWORD*, __int64))CudaDriverRoutine_12a640,
            (__int64)v14);
        if (v8 != 0) {
          v9 = v8;
        }
        else {
          v9 = v12;
        }
      }
      else {
        v9 = 0;
      }
    }
    CudaDriverRoutine_108070(CudaDriverData_143bd98);
  }
  else {
    return 0;
  }
  return v9;
}

__int64 CudaDriverHr_12bb60(unsigned __int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int64 v15;

  v2 = CudaDriverData_1423370;
  CudaDriverRoutine_107f90(*(_QWORD*)CudaDriverData_1423370 + 152LL, 0, 0);
  v3 = *(_QWORD*)v2;
  v4 = *(unsigned int*)(*(_QWORD*)v2 + 16LL);
  if ((_DWORD)v4 == 0) {
  LABEL_8:
    v5 = nullptr;
    v6 = *(unsigned int*)(v3 + 32);
    if ((_DWORD)v6 == 0) {
      goto LABEL_14;
    }
    goto LABEL_9;
  }
  v5 = *(__int64**)(v3 + 24);
  while (*v5 > a1 || a1 >= v5[1]) {
    --v4;
    v5 += 8;
    if (v4 == 0) {
      goto LABEL_8;
    }
  }
  v6 = *(unsigned int*)(v3 + 32);
  if ((_DWORD)v6 != 0) {
  LABEL_9:
    v7 = *(__int64**)(v3 + 40);
    while (*v7 > a1 || a1 >= v7[1]) {
      --v6;
      v7 += 8;
      if (v6 == 0) {
        goto LABEL_14;
      }
    }
    v5 = v7;
  }
LABEL_14:
  v8 = *(unsigned int*)(v3 + 48);
  if ((_DWORD)v8 != 0) {
    v9 = *(__int64**)(v3 + 56);
    while (*v9 > a1 || a1 >= v9[1]) {
      --v8;
      v9 += 8;
      if (v8 == 0) {
        goto LABEL_20;
      }
    }
    v5 = v9;
  }
  else {
  LABEL_20:
    if (v5 == nullptr) {
    LABEL_24:
      v13 = 1;
      goto LABEL_25;
    }
  }
  v10 = CudaDriverRoutine_1a47a0(v5[3], a1);
  if (v10 == 0) {
    goto LABEL_24;
  }
  v11 = v10;
  v12 = CudaDriverRoutine_1a4c80();
  if (v12 == 1) {
    CudaDriverRoutine_1a4580(v11);
    v15 = v5[2] - 1;
    v5[2] = v15;
    if (v15 != 0) {
      v13 = 0;
    }
    else {
      CudaDriverRoutine_12b300(v5);
      v13 = 0;
      **(_QWORD**)v2 += *v5 - v5[1];
      --*(_DWORD*)(*(_QWORD*)v2 + 8LL);
    }
  }
  else {
    CudaDriverRoutine_1a4c70(v11, v12 - 1);
    v13 = 0;
  }
LABEL_25:
  CudaDriverRoutine_108070(*(_QWORD*)v2 + 152LL);
  return v13;
}

__int64 CudaDriverHr_12e750(__int64 a1, __int64 a2)
{
  return CudaDriverData_1432e40(a2, 16, CudaDriverData_1432e58);
}

__int64 CudaDriverHr_12e770(__int64 a1, __int64 a2, __int64 a3)
{
  return CudaDriverData_1432e40(a3, a2, CudaDriverData_1432e58);
}

__int64 CudaDriverHr_12e790(__int64 a1, __int64 a2)
{
  return CudaDriverData_1432e48(a2, CudaDriverData_1432e58);
}

__int64 CudaDriverHr_12e7b0(__int64 a1, __int64 a2, __int64 a3)
{
  return CudaDriverData_1432e50(a2, a3, CudaDriverData_1432e58);
}

#pragma GCC visibility pop
