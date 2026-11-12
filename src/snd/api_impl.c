#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_190200(_QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_fnd_WeakHandle_reset(_QWORD, long double);
extern __int64* snd_s_target_ptr;
extern char GameData_1a9f09e;
__int64 Api_1115e0(__int64 a1);
__int64 GameRoutine_190200_alt1(__int64, char*) __asm__("GameRoutine_190200");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64
snd_fnd_WeakHandle_reset_alt1(__int64) __asm__("snd_fnd_WeakHandle_reset");

__int64 Api_1115e0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;

  nn_os_LockMutex_alt1(a1 + 96);
  v3 = *(_QWORD*)(a1 + 32);
  v2 = *(_QWORD*)(a1 + 40);
  if (v2 != v3) {
    v4 = 0;
    v5 = 0;
    v6 = snd_s_target_ptr;
    do {
      v7 = v3 + v4;
      v8 = (_QWORD*)(v3 + v4 + 48);
      if (*v8 != 0) {
        v9 = *v6;
        *(_QWORD*)(v7 + 48) = 0;
        (*(void (**)(__int64))(*(_QWORD*)v9 + 400LL))(v9);
        GameRoutine_190200_alt1(v7, &GameData_1a9f09e);
        *(_DWORD*)(v7 + 24) = 0;
        snd_fnd_WeakHandle_reset_alt1(v7 + 32);
        *v8 = 0;
        v8[1] = 0;
        v3 = *(_QWORD*)(a1 + 32);
        v2 = *(_QWORD*)(a1 + 40);
      }
      ++v5;
      v4 += 64;
    } while (v5 < (v2 - v3) >> 6);
  }
  return nn_os_UnlockMutex_alt1(a1 + 96);
}

#pragma GCC visibility pop
