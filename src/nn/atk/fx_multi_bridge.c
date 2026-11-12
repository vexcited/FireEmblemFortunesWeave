#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2af380(_QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
extern __int64 GameData_2134768[14];
extern __int64* snd_g_memory_ptr[2];
__int64 FxMultiBridge_Destructor_179330(_QWORD* a1);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
void nn_diag_detail_AbortImpl_1a0a590();
__int64 FxMultiBridge_Unknown5(__int64 a1, __int64 a2, _DWORD* a3);

__int64 FxMultiBridge_Destructor_179330(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;

  v2 = a1[15];
  *a1 = GameData_2134768[0] + 16;
  v3 = a1[13];
  a1[14] = v3;
  v4 = snd_g_memory_ptr[0];
  if (v2 != v3) {
    a1[14] = 0;
    a1[15] = 0;
    a1[13] = 0;
    if (v3 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
    }
  }
  nn_os_FinalizeMutex(a1 + 16);
  v5 = a1[13];
  if (v5 != 0) {
    v6 = *v4;
    a1[14] = v5;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6);
  }
  return GameRoutine_2af380(a1);
}

__int64 FxMultiBridge_Unknown5(__int64 a1, __int64 a2, _DWORD* a3)
{
  int v3;
  int v4;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;

  v3 = a3[4];
  v4 = a3[3] * *a3;
  if (v3 % v4 != 0) {
    nn_diag_detail_AbortImpl_1a0a590();
  }
  if (v3 / v4 > (signed __int32)a3[2]) {
    nn_diag_detail_AbortImpl_1a0a590();
  }
  nn_os_LockMutex(a1 + 128);
  v9 = *(_QWORD*)(a1 + 104);
  v8 = *(_QWORD*)(a1 + 112);
  if (v8 != v9) {
    v10 = 0;
    do {
      v11 = *(_QWORD*)(v9 + 8 * v10);
      if (v11 != 0) {
        (*(void (**)(__int64, __int64, _DWORD*))(*(_QWORD*)v11 + 40LL))(v11, a2,
                                                                        a3);
        v9 = *(_QWORD*)(a1 + 104);
        v8 = *(_QWORD*)(a1 + 112);
      }
      ++v10;
    } while (v10 < (v8 - v9) >> 3);
  }
  return nn_os_UnlockMutex(a1 + 128);
}

#pragma GCC visibility pop
