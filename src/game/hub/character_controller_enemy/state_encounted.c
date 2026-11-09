#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_cf66e0(_QWORD);
__int64 GameRoutine_cfa2a0(_QWORD);
__int64 GameRoutine_d4e240(_QWORD, _QWORD);
__int64 GameRoutine_d523c0(_QWORD);
__int64 GameRoutine_da9a80(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
extern _UNKNOWN GameData_22110b8;
extern __int64 GameData_22110ac;
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD, _QWORD);
__int64 StateEncounted_Unknown3(__int64 a1);
__int64 StateEncounted_Unknown5(__int64 result);

__int64 StateEncounted_Unknown3(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD v23[2];
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  char v29;
  char v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;

  v1 = *(_QWORD*)(a1 + 8);
  if ((*(_BYTE*)(v1 + 244) & 1) == 0) {
    *(_BYTE*)(v1 + 244) = 1;
    if (*(_BYTE*)(v1 + 256) == 1) {
      v3 = GameRoutine_cf66e0(
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 8) + 24LL) + 8LL));
      if (v3 != 0) {
        if ((*(_BYTE*)(v1 + 256) & 1) == 0) {
          GameRoutine_8123d0(v3, v4);
        }
        GameRoutine_d4e240(v3, *(_QWORD*)(v1 + 248));
      }
      if (*(_BYTE*)(v1 + 256) == 1) {
        *(_BYTE*)(v1 + 256) = 0;
      }
    }
  }
  v5 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 24LL) +
                  16LL);
  if ((*(_QWORD*)(v5 + 24) & 0x1FFFFFFFFLL) == 0x100000001LL &&
      (*(_BYTE*)(v5 + 848) & 1) == 0) {
    v6 = *(_QWORD*)(*(_QWORD*)(v5 + 8) + 32LL) != 0 ? 5 : 0;
    *(_DWORD*)(v5 + 32) = v6;
    *(_BYTE*)(v5 + 36) = 1;
    if ((*(_BYTE*)(v5 + 112) & 1) == 0 && (*(_BYTE*)(v5 + 113) & 1) != 0) {
      GameRoutine_cfa2a0(v5 + 16);
    }
  }
  v7 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(v7 + 36) = 1;
  v8 = *(_QWORD*)(v7 + 8);
  if (*(_DWORD*)(v8 + 748) != 2) {
    v9 = *(_QWORD*)(*(_QWORD*)(v8 + 24) + 24LL);
    *(_QWORD*)(v9 + 32) = 0;
    *(_QWORD*)(v9 + 37) = 0;
    *(_BYTE*)(v9 + 96) = 1;
    *(_BYTE*)(v9 + 37) = 1;
    v10 = *(_QWORD*)(v9 + 16);
    *(_BYTE*)(v9 + 25) = 0;
    *(_BYTE*)(v9 + 48) = 0;
    *(_BYTE*)(v9 + 64) = 0;
    *(_QWORD*)(v9 + 80) = 0;
    *(_DWORD*)(v9 + 32) = 1086918619;
    GameRoutine_d523c0(*(_QWORD*)(v10 + 488));
  }
  v11 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
  LOBYTE(v24) = 0;
  v12 = *(_QWORD*)(*(_QWORD*)(v11 + 24) + 32LL);
  v13 = *(_QWORD*)(v12 + 32);
  v14 = *(_QWORD*)(v12 + 40);
  v30 = 0;
  v23[0] = v13;
  v23[1] = v14;
  if (*(_BYTE*)(v12 + 112) == 1) {
    v15 = *(_QWORD*)(v12 + 56);
    v24 = *(_QWORD*)(v12 + 48);
    v25 = v15;
    v16 = *(_QWORD*)(v12 + 64);
    LOBYTE(v27) = 0;
    v29 = 0;
    v26 = v16;
    if (*(_BYTE*)(v12 + 96) == 1) {
      v17 = *(_QWORD*)(v12 + 88);
      v27 = *(_QWORD*)(v12 + 80);
      v28 = v17;
      v29 = 1;
    }
    v30 = 1;
  }
  v18 = *(_QWORD*)(v12 + 128);
  v19 = *(_QWORD*)(v12 + 136);
  v20 = *(_QWORD*)(v12 + 144);
  v31 = v18;
  v32 = v19;
  v33 = v20;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_22110b8) != 0) {
    GameData_22110ac = 0;
    __cxa_guard_release(&GameData_22110b8);
  }
  BYTE1(v23[1]) = 1;
  v21 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
  v23[0] = GameData_22110ac;
  return GameRoutine_da9a80(*(_QWORD*)(*(_QWORD*)(v21 + 24) + 32LL), v23);
}

__int64 StateEncounted_Unknown5(__int64 result)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(result + 8);
  *(_BYTE*)(v1 + 36) = 0;
  v2 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 8) + 24LL) + 24LL);
  if (*(_BYTE*)(v2 + 96) == 1) {
    *(_BYTE*)(v2 + 96) = 0;
  }
  *(_BYTE*)(v2 + 25) = 0;
  return result;
}

#pragma GCC visibility pop
