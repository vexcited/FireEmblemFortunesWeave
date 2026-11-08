#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern _UNKNOWN CudaDriverData_1432cc0;
extern __int64 CudaDriverData_1432cc8;
extern _UNKNOWN CudaDriverData_1432cd0;
extern _UNKNOWN CudaDriverData_14347a8;
extern int CudaDriverData_1434ac0;
extern __int64 (*CudaDriverData_1439618)(__int64, __int64, _QWORD);
extern _UNKNOWN* CudaDriverData_1439620;
__int64 CudaDriverRoutine_103390(_QWORD, _QWORD);
__int64 CudaDriverRoutine_107f90(void*);
__int64 CudaDriverRoutine_108070(void*);
__int64 CudaDriverRoutine_12df40(_QWORD, _QWORD);
__int64 CudaDriverRoutine_12e340(_QWORD);
__int64 CudaDriverRoutine_12e510(_QWORD, _QWORD);
__int64 CudaDriverRoutine_12ea30(_QWORD);
__int64 CudaDriverRoutine_12ea60(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1a2cc0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1a2cd0(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1a2d50(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1d87a0(_QWORD);
__int64 CudaDriverRoutine_b7020(__int64 result, char);
__int64 CudaDriverRoutine_b7500();
__int64 CudaDriverRoutine_b8100(_QWORD);
__int64 CudaDriverRoutine_b8180();
__int64 CudaDriverRoutine_b83c0(_QWORD);
__int64 CudaDriverRoutine_efe40(_QWORD);
__int64 CudaDriverRoutine_ff020(_QWORD, _QWORD);

__int64 CudaDriverHr_b7020(__int64 result, char a2)
{
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 i;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 j;

  if (result != 0) {
    v2 = result;
    if (atomic_fetch_add((atomic_ullong* volatile)(result + 48),
                         0xFFFFFFFFFFFFFFFFLL) == 1) {
      if (a2 != 0) {
        CudaDriverRoutine_107f90(&CudaDriverData_1432cd0);
        if (atomic_fetch_or((atomic_ullong* volatile)(v2 + 48), 0) != 0) {
          return CudaDriverRoutine_108070(&CudaDriverData_1432cd0);
        }
        CudaDriverRoutine_1a2d50(CudaDriverData_1432cc8, v2 + 72, 24);
        CudaDriverRoutine_108070(&CudaDriverData_1432cd0);
      }
      if (*(_QWORD*)(v2 + 16) != 0) {
        v3 = *(unsigned int*)(v2 + 144);
        if ((_DWORD)v3 != 0) {
          for (i = 0; i < v3; ++i) {
            v6 = *(_QWORD*)(v2 + 16);
            v7 = *(_QWORD*)(v6 + 8 * i);
            if (v7 != 0) {
              v8 = *(_QWORD*)(v7 + 32);
              for (j = v8; v8 != 0; j = v8) {
                v9 = *(_QWORD*)(v8 + 632);
                CudaDriverRoutine_107f90(v9 + 128);
                CudaDriverRoutine_1d87a0(&j);
                CudaDriverRoutine_108070(v9 + 128);
                v6 = *(_QWORD*)(v2 + 16);
                v8 = *(_QWORD*)(*(_QWORD*)(v6 + 8 * i) + 32LL);
              }
              v5 = *(_QWORD*)(*(_QWORD*)(v6 + 8 * i) + 632LL);
              CudaDriverRoutine_107f90(v5 + 128);
              CudaDriverRoutine_1d87a0(*(_QWORD*)(v2 + 16) + 8 * i);
              CudaDriverRoutine_108070(v5 + 128);
              v3 = *(unsigned int*)(v2 + 144);
            }
          }
        }
      }
      if (*(_QWORD*)(v2 + 184) != 0 && *(_DWORD*)(v2 + 172) != 0) {
        v10 = 0;
        v11 = 0;
        do {
          CudaDriverRoutine_b83c0(*(_QWORD*)(v2 + 184) + v10);
          ++v11;
          v10 += 8;
        } while (v11 < *(unsigned int*)(v2 + 172));
      }
      if (CudaDriverData_1434ac0 != 0) {
        v12 = 0;
        do {
          if ((unsigned __int8)CudaDriverRoutine_103390(
                  v2 + 104, (unsigned int)v12) != 0 &&
              v12 != **(_DWORD**)(v2 + 104)) {
            CudaDriverRoutine_ff020(
                *(_QWORD*)(*((_QWORD*)&CudaDriverData_14347a8 + v12 + 35) +
                           16928LL),
                *(_QWORD*)(v2 + 112));
          }
          ++v12;
        } while (v12 < (unsigned int)CudaDriverData_1434ac0);
      }
      if ((unsigned int)CudaDriverRoutine_12ea30(v2 + 256) != 0) {
        CudaDriverRoutine_b8100(v2);
      }
      if (CudaDriverData_1439620 != nullptr) {
        ((void (*)(__int64))CudaDriverData_1439620)(v2);
      }
      *(_QWORD*)(v2 + 256) = 0;
      *(_OWORD*)v2 = 0u;
      *(_OWORD*)(v2 + 16) = 0u;
      *(_OWORD*)(v2 + 32) = 0u;
      *(_OWORD*)(v2 + 48) = 0u;
      *(_OWORD*)(v2 + 64) = 0u;
      *(_OWORD*)(v2 + 80) = 0u;
      *(_OWORD*)(v2 + 96) = 0u;
      *(_OWORD*)(v2 + 112) = 0u;
      *(_OWORD*)(v2 + 128) = 0u;
      *(_OWORD*)(v2 + 144) = 0u;
      *(_OWORD*)(v2 + 160) = 0u;
      *(_OWORD*)(v2 + 176) = 0u;
      *(_OWORD*)(v2 + 192) = 0u;
      *(_OWORD*)(v2 + 208) = 0u;
      *(_OWORD*)(v2 + 224) = 0u;
      *(_OWORD*)(v2 + 240) = 0u;
      return CudaDriverRoutine_12e340(v2);
    }
  }
  return result;
}

__int64 CudaDriverHr_b7390(__int64* a1, __int64 a2, unsigned int a3)
{
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  char v10;
  __int64 v11;
  __int64 v12;

  if (CudaDriverData_1439618 != nullptr) {
    CudaDriverRoutine_12df40(&CudaDriverData_1432cc0, CudaDriverRoutine_b8180);
    v6 = CudaDriverRoutine_12e510(264, 1);
    v7 = v6;
    if (v6 != 0) {
      *(_QWORD*)(v6 + 48) = 1;
      v8 = CudaDriverData_1439618(v6, a2, a3);
      if (v8 != 0) {
        v9 = v8;
        v10 = 0;
      }
      else {
        CudaDriverRoutine_efe40(*(_QWORD*)(v7 + 104));
        CudaDriverRoutine_107f90(&CudaDriverData_1432cd0);
        v11 = CudaDriverRoutine_1a2cd0(CudaDriverData_1432cc8, v7 + 72, 24);
        if (v11 != 0) {
          v12 = v11;
          atomic_fetch_add((atomic_ullong* volatile)(v11 + 48), 1u);
          CudaDriverRoutine_108070(&CudaDriverData_1432cd0);
          CudaDriverRoutine_b7020(v7, 0);
          v7 = v12;
        }
        else {
          CudaDriverRoutine_1a2cc0(CudaDriverData_1432cc8, v7 + 72, 24, v7);
          CudaDriverRoutine_108070(&CudaDriverData_1432cd0);
        }
        v9 = CudaDriverRoutine_12ea60(v7 + 256, CudaDriverRoutine_b7500, v7);
        if (v9 == 0) {
          *a1 = v7;
          return v9;
        }
        v10 = 1;
      }
    }
    else {
      v10 = 0;
      v9 = 2;
    }
  }
  else {
    v10 = 0;
    v7 = 0;
    v9 = 801;
  }
  CudaDriverRoutine_b7020(v7, v10);
  return v9;
}

#pragma GCC visibility pop
