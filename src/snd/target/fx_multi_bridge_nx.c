#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 FxMultiBridge_Unknown24(_QWORD, _QWORD);
__int64 FxMultiBridge_Unknown25(_QWORD, _QWORD);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_1794c0(_QWORD, _QWORD);
__int64 GameRoutine_179540(_QWORD, _QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD, float);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64
FxMultiBridgeNX_Unknown24_alt1(__int64 a1,
                               __int64 a2) __asm__("FxMultiBridgeNX_Unknown24");
__int64 FxMultiBridgeNX_Unknown25(__int64 a1, __int64 a2);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 FxMultiBridgeNx_1794c0(__int64 a1, __int64 a2);
__int64 FxMultiBridgeNx_179540(__int64 a1, __int64 a2);
__int64
FxMultiBridge_Unknown24_alt1(_QWORD*,
                             __int64) __asm__("FxMultiBridge_Unknown24");
__int64 GameRoutine_112180_alt1(__int64, __int64) __asm__("GameRoutine_112180");
__int64 snd_fnd_WeakHandle_get_alt1(__int64) __asm__("snd_fnd_WeakHandle_get");
__int64
snd_fnd_WeakHandle_isValid_alt1(__int64*) __asm__("snd_fnd_WeakHandle_isValid");
__int64 FxMultiBridgeNX_Unknown24(_QWORD* a1, __int64* a2);

__int64 FxMultiBridgeNX_Unknown24(_QWORD* a1, __int64* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  struct {
    __int64 v9;
    int v10;
  } v9_;

  if ((snd_fnd_WeakHandle_isValid_alt1(a2) & 1) == 0) {
    return 0;
  }
  v4 = snd_fnd_WeakHandle_get_alt1((__int64)a2);
  if (*(_QWORD*)((*(__int64 (**)(__int64))(*(_QWORD*)(v4 - 5592) + 144LL))(
                     v4 - 5592) +
                 8) != 0) {
    return 0;
  }
  v9_.v9 = 0;
  v9_.v10 = 0x2000;
  GameRoutine_112180_alt1((__int64)&v9_.v9, (__int64)a2);
  if ((FxMultiBridge_Unknown24_alt1(a1, (__int64)&v9_.v9) & 1) == 0) {
    return 0;
  }
  v5 = *(_QWORD*)(a1[703] + 16LL);
  v6 = snd_fnd_WeakHandle_get_alt1((__int64)a2);
  v7 = (*(__int64 (**)(__int64))(*(_QWORD*)(v6 - 5592) + 144LL))(v6 - 5592);
  return FxMultiBridgeNx_1794c0(v5, *(_QWORD*)(v7 + 16)) & 1;
}

__int64 FxMultiBridgeNX_Unknown25(__int64 a1, __int64 a2)
{
  float v4;
  __int64 v5;
  float v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v11;
  int v12;

  if ((snd_fnd_WeakHandle_isValid(a2) & 1) == 0) {
    return 0;
  }
  v5 = snd_fnd_WeakHandle_get(a2, v4);
  if (*(_QWORD*)((*(__int64 (**)(__int64))(*(_QWORD*)(v5 - 5592) + 144LL))(
                     v5 - 5592) +
                 8) != 0) {
    return 0;
  }
  v11 = 0;
  v12 = 0x2000;
  GameRoutine_112180(&v11, a2);
  if ((FxMultiBridge_Unknown25(a1, &v11) & 1) == 0) {
    return 0;
  }
  v7 = *(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL);
  v8 = snd_fnd_WeakHandle_get(a2, v6);
  v9 = (*(__int64 (**)(__int64))(*(_QWORD*)(v8 - 5592) + 144LL))(v8 - 5592);
  return GameRoutine_179540(v7, *(_QWORD*)(v9 + 16)) & 1;
}

__int64 FxMultiBridgeNx_1794c0(__int64 a1, __int64 a2)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;

  nn_os_LockMutex(a1 + 128);
  v4 = *(_QWORD**)(a1 + 104);
  v5 = *(_QWORD*)(a1 + 112) - (_QWORD)v4;
  if (v5 != 0) {
    v6 = v5 >> 3;
    while (*v4 != 0) {
      ++v4;
      if (--v6 == 0) {
        goto LABEL_5;
      }
    }
    *v4 = a2;
    v7 = 1;
  }
  else {
  LABEL_5:
    v7 = 0;
  }
  nn_os_UnlockMutex(a1 + 128);
  return v7;
}

__int64 FxMultiBridgeNx_179540(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned int v8;
  _QWORD* v9;

  nn_os_LockMutex(a1 + 128);
  v5 = *(_QWORD*)(a1 + 104);
  v4 = *(_QWORD*)(a1 + 112);
  if (v4 == v5) {
  LABEL_5:
    v8 = 0;
  }
  else {
    v6 = (v4 - v5) >> 3;
    v7 = 0;
    while (*(_QWORD*)(v5 + 8 * v7) != a2) {
      if (v6 == ++v7) {
        goto LABEL_5;
      }
    }
    while (v7 < v6 - 1) {
      v9 = (_QWORD*)(v5 + 8 * v7++);
      *v9 = v9[1];
      v5 = *(_QWORD*)(a1 + 104);
      v4 = *(_QWORD*)(a1 + 112);
      v6 = (v4 - v5) >> 3;
    }
    *(_QWORD*)(v4 - 8) = 0;
    v8 = 1;
  }
  nn_os_UnlockMutex(a1 + 128);
  return v8;
}

#pragma GCC visibility pop
