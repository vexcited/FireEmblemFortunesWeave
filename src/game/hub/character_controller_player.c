#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_da9a80(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
extern _UNKNOWN GameData_22110b8;
extern __int64 GameData_22110ac;
__int64 CharacterControllerPlayer_10c8e20(__int64 result);

__int64 CharacterControllerPlayer_10c8e20(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD v15[2];
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char v21;
  char v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  if (*(_BYTE*)(result + 56) == 1) {
    v26 = v1;
    v27 = v2;
    v3 = *(_QWORD*)(result + 8);
    v4 = result;
    LOBYTE(v16) = 0;
    v5 = *(_QWORD*)(*(_QWORD*)(v3 + 24) + 32LL);
    v6 = *(_QWORD*)(v5 + 32);
    v7 = *(_QWORD*)(v5 + 40);
    v22 = 0;
    v15[0] = v6;
    v15[1] = v7;
    if (*(_BYTE*)(v5 + 112) == 1) {
      v8 = *(_QWORD*)(v5 + 56);
      v16 = *(_QWORD*)(v5 + 48);
      v17 = v8;
      v9 = *(_QWORD*)(v5 + 64);
      LOBYTE(v19) = 0;
      v21 = 0;
      v18 = v9;
      if (*(_BYTE*)(v5 + 96) == 1) {
        v10 = *(_QWORD*)(v5 + 88);
        v19 = *(_QWORD*)(v5 + 80);
        v20 = v10;
        v21 = 1;
      }
      v22 = 1;
    }
    v11 = *(_QWORD*)(v5 + 128);
    v12 = *(_QWORD*)(v5 + 136);
    v13 = *(_QWORD*)(v5 + 144);
    v23 = v11;
    v24 = v12;
    v25 = v13;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_22110b8) != 0) {
      GameData_22110ac = 0;
      __cxa_guard_release(&GameData_22110b8);
    }
    v14 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 24LL);
    v15[0] = GameData_22110ac;
    result = GameRoutine_da9a80(*(_QWORD*)(v14 + 32), v15);
    *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v4 + 8) + 24LL) + 449LL) = 0;
    if (*(_BYTE*)(v4 + 56) == 1) {
      *(_BYTE*)(v4 + 56) = 0;
    }
    *(_BYTE*)(v4 + 60) = 0;
  }
  return result;
}

#pragma GCC visibility pop
