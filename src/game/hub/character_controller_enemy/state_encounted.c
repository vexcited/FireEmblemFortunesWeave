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
__int64 CharacterInputPlayer_da9a80(__int64 result, __int64);
__int64 HitboxModule_d4e240(__int64, __int64);
__int64 HubCharacterNatives_cf66e0(__int64);
__int64 WaitRelease_cfa2a0(__int64 result);
__int64 game_d523c0(__int64);
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __attribute__((noreturn))
GameRoutine_8123d0_alt1() __asm__("GameRoutine_8123d0");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");

__int64 StateEncounted_Unknown3(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
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
  struct {
    _QWORD v22[2];
    __int64 v23;
    __int64 v24;
    __int64 v25;
    char gap40_[8];
    __int64 v26;
    __int64 v27;
    char v28;
    char gap65_[15];
    char v29;
    char gap81_[15];
    __int64 v30;
    __int64 v31;
    __int64 v32;
  } v22_;

  v1 = *(_QWORD*)(a1 + 8);
  if ((*(_BYTE*)(v1 + 244) & 1) == 0) {
    *(_BYTE*)(v1 + 244) = 1;
    if (*(_BYTE*)(v1 + 256) == 1) {
      v3 = HubCharacterNatives_cf66e0(
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 8) + 24LL) + 8LL));
      if (v3 != 0) {
        if ((*(_BYTE*)(v1 + 256) & 1) == 0) {
          GameRoutine_8123d0_alt1();
        }
        HitboxModule_d4e240(v3, *(_QWORD*)(v1 + 248));
      }
      if (*(_BYTE*)(v1 + 256) == 1) {
        *(_BYTE*)(v1 + 256) = 0;
      }
    }
  }
  v4 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 24LL) +
                  16LL);
  if ((*(_QWORD*)(v4 + 24) & 0x1FFFFFFFFLL) == 0x100000001LL &&
      (*(_BYTE*)(v4 + 848) & 1) == 0) {
    v5 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 32LL) != 0 ? 5 : 0;
    *(_DWORD*)(v4 + 32) = v5;
    *(_BYTE*)(v4 + 36) = 1;
    if ((*(_BYTE*)(v4 + 112) & 1) == 0 && (*(_BYTE*)(v4 + 113) & 1) != 0) {
      WaitRelease_cfa2a0(v4 + 16);
    }
  }
  v6 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(v6 + 36) = 1;
  v7 = *(_QWORD*)(v6 + 8);
  if (*(_DWORD*)(v7 + 748) != 2) {
    v8 = *(_QWORD*)(*(_QWORD*)(v7 + 24) + 24LL);
    *(_QWORD*)(v8 + 32) = 0;
    *(_QWORD*)(v8 + 37) = 0;
    *(_BYTE*)(v8 + 96) = 1;
    *(_BYTE*)(v8 + 37) = 1;
    v9 = *(_QWORD*)(v8 + 16);
    *(_BYTE*)(v8 + 25) = 0;
    *(_BYTE*)(v8 + 48) = 0;
    *(_BYTE*)(v8 + 64) = 0;
    *(_QWORD*)(v8 + 80) = 0;
    *(_DWORD*)(v8 + 32) = 1086918619;
    game_d523c0(*(_QWORD*)(v9 + 488));
  }
  v10 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
  LOBYTE(v22_.v23) = 0;
  v11 = *(_QWORD*)(*(_QWORD*)(v10 + 24) + 32LL);
  v12 = *(_QWORD*)(v11 + 32);
  v13 = *(_QWORD*)(v11 + 40);
  v22_.v29 = 0;
  v22_.v22[0] = v12;
  v22_.v22[1] = v13;
  if (*(_BYTE*)(v11 + 112) == 1) {
    v14 = *(_QWORD*)(v11 + 56);
    v22_.v23 = *(_QWORD*)(v11 + 48);
    v22_.v24 = v14;
    v15 = *(_QWORD*)(v11 + 64);
    LOBYTE(v22_.v26) = 0;
    v22_.v28 = 0;
    v22_.v25 = v15;
    if (*(_BYTE*)(v11 + 96) == 1) {
      v16 = *(_QWORD*)(v11 + 88);
      v22_.v26 = *(_QWORD*)(v11 + 80);
      v22_.v27 = v16;
      v22_.v28 = 1;
    }
    v22_.v29 = 1;
  }
  v17 = *(_QWORD*)(v11 + 128);
  v18 = *(_QWORD*)(v11 + 136);
  v19 = *(_QWORD*)(v11 + 144);
  v22_.v30 = v17;
  v22_.v31 = v18;
  v22_.v32 = v19;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_22110b8) != 0) {
    GameData_22110ac = 0;
    __cxa_guard_release_alt1((__int64)&GameData_22110b8);
  }
  BYTE1(v22_.v22[1]) = 1;
  v20 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
  v22_.v22[0] = GameData_22110ac;
  return CharacterInputPlayer_da9a80(*(_QWORD*)(*(_QWORD*)(v20 + 24) + 32LL),
                                     (__int64)v22_.v22);
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
