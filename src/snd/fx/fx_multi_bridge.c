#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_1679b0(_QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 snd_fnd_WeakHandle_reset(_QWORD);
extern __int64* GameData_21343a8[2];
extern __int64* snd_g_memory_ptr[2];
void GameRoutine_651250(void*, unsigned __int64);
__int64 FxMultiBridge_Destructor_178880(_QWORD* a1);
void FxMultiBridge_178a80(__int64 a1);
__int64 FxMultiBridge_mainUnlocked(__int64 a1);
__int64 FxMultiBridge_updateFx(__int64 a1, float a2);
__int64 FxMultiBridge_Unknown24(_QWORD* a1, __int64 a2);
__int64 FxMultiBridge_Unknown25(__int64 a1, __int64 a2);

__int64 FxMultiBridge_Destructor_178880(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  _QWORD* v4;
  __int64* v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v2 = GameData_21343a8[0];
  v3 = a1[710];
  *a1 = GameData_21343a8[0] + 2;
  a1[5] = v2 + 30;
  a1[699] = v2 + 171;
  v4 = a1 + 711;
  v5 = snd_g_memory_ptr[0];
  if (a1[711] != v3) {
    v6 = 0;
    v7 = 0;
    do {
      if ((snd_fnd_WeakHandle_isValid(v3 + v6) & 1) != 0) {
        v8 = snd_fnd_WeakHandle_get(a1[710] + v6);
        (**(void (***)(__int64))(v8 - 5592))(v8 - 5592);
        (*(void (**)(__int64, __int64))(*(_QWORD*)*v5 + 24LL))(*v5, v8 - 5592);
        snd_fnd_WeakHandle_reset(a1[710] + v6);
      }
      v3 = a1[710];
      ++v7;
      v6 += 16;
    } while (v7 < (a1[711] - v3) >> 4);
  }
  v9 = a1[712];
  a1[711] = v3;
  if (v9 != v3) {
    *v4 = 0;
    v4[1] = 0;
    a1[710] = 0;
    if (v3 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v5 + 24LL))(*v5);
    }
  }
  nn_os_FinalizeMutex(a1 + 713);
  v10 = a1[710];
  if (v10 != 0) {
    v11 = *v5;
    *v4 = v10;
    (*(void (**)(__int64))(*(_QWORD*)v11 + 24LL))(v11);
  }
  return GameRoutine_1679b0(a1);
}

void FxMultiBridge_178a80(__int64 a1)
{
  FxMultiBridge_Destructor_178880(a1 - 5592);
  GameRoutine_651250((void*)(a1 - 5592), 0x1668u);
}

__int64 FxMultiBridge_mainUnlocked(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;

  nn_os_LockMutex(a1 + 5704);
  v2 = *(_QWORD*)(a1 + 5680);
  if (*(_QWORD*)(a1 + 5688) != v2) {
    v3 = 0;
    v4 = 0;
    do {
      if ((snd_fnd_WeakHandle_isValid(v2 + v3) & 1) != 0) {
        v5 = snd_fnd_WeakHandle_get(*(_QWORD*)(a1 + 5680) + v3);
        (*(void (**)(__int64))(*(_QWORD*)(v5 - 5592) + 48LL))(v5 - 5592);
      }
      v2 = *(_QWORD*)(a1 + 5680);
      ++v4;
      v3 += 16;
    } while (v4 < (*(_QWORD*)(a1 + 5688) - v2) >> 4);
  }
  return nn_os_UnlockMutex(a1 + 5704);
}

__int64 FxMultiBridge_updateFx(__int64 a1, float a2)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;

  nn_os_LockMutex(a1 + 5704);
  v4 = *(_QWORD*)(a1 + 5680);
  if (*(_QWORD*)(a1 + 5688) != v4) {
    v5 = 0;
    v6 = 0;
    do {
      if ((snd_fnd_WeakHandle_isValid(v4 + v5) & 1) != 0) {
        v7 = snd_fnd_WeakHandle_get(*(_QWORD*)(a1 + 5680) + v5);
        (*(void (**)(__int64, float))(*(_QWORD*)(v7 - 5592) + 72LL))(v7 - 5592,
                                                                     a2);
      }
      v4 = *(_QWORD*)(a1 + 5680);
      ++v6;
      v5 += 16;
    } while (v6 < (*(_QWORD*)(a1 + 5688) - v4) >> 4);
  }
  return nn_os_UnlockMutex(a1 + 5704);
}

__int64 FxMultiBridge_Unknown24(_QWORD* a1, __int64 a2)
{
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned int v9;

  v4 = (*(__int64 (**)(_QWORD*))(*a1 + 136LL))(a1);
  v5 = snd_fnd_WeakHandle_get(a2);
  if (v4 == (*(unsigned int (**)(__int64))(*(_QWORD*)(v5 - 5592) + 136LL))(
                v5 - 5592)) {
    nn_os_LockMutex(a1 + 713);
    v6 = a1[710];
    if (a1[711] == v6) {
    LABEL_6:
      v9 = 0;
    }
    else {
      v7 = 0;
      v8 = 0;
      while ((snd_fnd_WeakHandle_isValid(v6 + v7) & 1) != 0) {
        v6 = a1[710];
        ++v8;
        v7 += 16;
        if (v8 >= (a1[711] - v6) >> 4) {
          goto LABEL_6;
        }
      }
      GameRoutine_112180(a1[710] + v7, a2);
      v9 = 1;
    }
    nn_os_UnlockMutex(a1 + 713);
  }
  else {
    return 0;
  }
  return v9;
}

__int64 FxMultiBridge_Unknown25(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;

  nn_os_LockMutex(a1 + 5704);
  v4 = *(_QWORD*)(a1 + 5680);
  if (*(_QWORD*)(a1 + 5688) == v4) {
  LABEL_10:
    v11 = 0;
  }
  else {
    v5 = 0;
    v6 = 0;
    while (1) {
      if ((snd_fnd_WeakHandle_isValid(v4 + v5) & 1) != 0) {
        v7 = snd_fnd_WeakHandle_get(*(_QWORD*)(a1 + 5680) + v5);
        if (snd_fnd_WeakHandle_get(a2) == v7) {
          break;
        }
      }
      v4 = *(_QWORD*)(a1 + 5680);
      ++v6;
      v5 += 16;
      if (v6 >= (*(_QWORD*)(a1 + 5688) - v4) >> 4) {
        goto LABEL_10;
      }
    }
    v8 = *(_QWORD*)(a1 + 5688);
    v9 = *(_QWORD*)(a1 + 5680);
    if (v6 < ((v8 - v9) >> 4) - 1) {
      v10 = v5 + 16;
      do {
        ++v6;
        GameRoutine_112180(v9 + v10 - 16, v9 + v10);
        v8 = *(_QWORD*)(a1 + 5688);
        v9 = *(_QWORD*)(a1 + 5680);
        v10 += 16;
      } while (v6 < ((v8 - v9) >> 4) - 1);
    }
    snd_fnd_WeakHandle_reset(v8 - 16);
    v11 = 1;
  }
  nn_os_UnlockMutex(a1 + 5704);
  return v11;
}

#pragma GCC visibility pop
