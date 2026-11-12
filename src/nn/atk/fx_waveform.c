#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2af380(_QWORD);
__int64 nn_diag_detail_AbortImpl_1a0a590(_QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
extern __int64 GameData_21347c0[3];
__int64 FxWaveform_Destructor(_QWORD* a1);
__int64 FxWaveform_Unknown5(__int64 a1, __int64 a2, int* a3);
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
void nn_diag_detail_AbortImpl_1a0a590_alt1() __asm__(
    "nn_diag_detail_AbortImpl_1a0a590");

__int64 FxWaveform_Destructor(_QWORD* a1)
{
  *a1 = GameData_21347c0[0] + 16;
  nn_os_FinalizeMutex(a1 + 49166);
  return GameRoutine_2af380(a1);
}

__int64 FxWaveform_Unknown5(__int64 a1, __int64 a2, int* a3)
{
  int v3;
  int v4;
  int v5;
  int v9;
  unsigned int v10;
  __int64 v11;
  int v12;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;

  v3 = a3[4];
  v4 = a3[3] * *a3;
  v5 = v3 / v4;
  if (v3 % v4 != 0) {
    nn_diag_detail_AbortImpl_1a0a590_alt1();
  }
  if (v5 > a3[2]) {
    nn_diag_detail_AbortImpl_1a0a590_alt1();
  }
  nn_os_LockMutex_alt1(a1 + 393328);
  if (v5 >= 1) {
    v9 = 0;
    v10 = *(_DWORD*)(a1 + 393320);
    do {
      LODWORD(v11) = *a3;
      v10 += *a3;
      if (v10 >> 14 != 0) {
        break;
      }
      v12 = a3[3];
      if (v12 >= 1 && (int)v11 >= 1) {
        v14 = 0;
        v15 = a2 + 4LL * v12 * (int)v11 * v9;
        do {
          if ((int)v11 >= 1) {
            v16 = 0;
            v17 = v15 + 4LL * (int)v11 * (int)v14;
            do {
              v18 = *(_DWORD*)(v17 + 4 * v16);
              v19 = v16 + *(int*)(a1 + 393320);
              ++v16;
              *(_DWORD*)(a1 + 104 + (v14 << 16) + 4 * v19) = v18;
              v11 = *a3;
            } while (v16 < v11);
            v12 = a3[3];
          }
          ++v14;
        } while (v14 < v12);
        v10 = *(_DWORD*)(a1 + 393320) + v11;
      }
      ++v9;
      *(_DWORD*)(a1 + 393320) = v10;
    } while (v9 != v5);
  }
  return nn_os_UnlockMutex_alt1(a1 + 393328);
}

#pragma GCC visibility pop
