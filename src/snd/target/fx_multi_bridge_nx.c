#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 FxMultiBridge_Unknown24(_QWORD, _QWORD);
__int64 FxMultiBridge_Unknown25(_QWORD, _QWORD);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_1794c0(_QWORD, _QWORD);
__int64 GameRoutine_179540(_QWORD, _QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD, float);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 FxMultiBridgeNX_Unknown24(__int64 a1, __int64 a2);
__int64 FxMultiBridgeNX_Unknown25(__int64 a1, __int64 a2);

__int64 FxMultiBridgeNX_Unknown24(__int64 a1, __int64 a2)
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
  if ((FxMultiBridge_Unknown24(a1, &v11) & 1) == 0) {
    return 0;
  }
  v7 = *(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL);
  v8 = snd_fnd_WeakHandle_get(a2, v6);
  v9 = (*(__int64 (**)(__int64))(*(_QWORD*)(v8 - 5592) + 144LL))(v8 - 5592);
  return GameRoutine_1794c0(v7, *(_QWORD*)(v9 + 16)) & 1;
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

#pragma GCC visibility pop
