#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_10f59e0(_QWORD);
__int64 GameRoutine_14a1390(_QWORD, _QWORD);
__int64 GameRoutine_14a16a0(_QWORD, _QWORD, float);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_22365f0;
extern int GameData_22365e8;
void game_character_CharacterAura_Cleanup_lambda0_Invoke(__int64 a1,
                                                         __int64 a2);
void game_character_CharacterAura_Fade_lambda0_Invoke(__int64 a1, __int64 a2);

void game_character_CharacterAura_Cleanup_lambda0_Invoke(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 i;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 j;
  __int64 v11;
  __int64 v12;
  int v13;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22365f0,
                            memory_order_acquire) &
       1) == 0) {
    v12 = a2;
    v13 = __cxa_guard_acquire(&GameData_22365f0);
    a2 = v12;
    if (v13 != 0) {
      GameData_22365e8 = wld_Crc32(0, "AuraModule", 10);
      __cxa_guard_release(&GameData_22365f0);
      a2 = v12;
    }
  }
  v2 = *(_QWORD*)(a2 + 512);
  for (i = v2; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v4 = *(_DWORD*)(i - 16);
    v2 -= 16;
    if (v4 == GameData_22365e8) {
      if (*(_QWORD*)(a2 + 512) != v2) {
        v5 = *(_QWORD*)(v2 + 8);
        if (v5 != 0) {
          v6 = *(_QWORD*)(v5 + 112);
          v7 = *(_QWORD*)(v5 + 120);
          if (v6 != v7) {
            do {
              GameRoutine_14a1390(v6, 1);
              v6 += 16;
            } while (v6 != v7);
            v6 = *(_QWORD*)(v5 + 112);
            v7 = *(_QWORD*)(v5 + 120);
          }
          for (; v7 != v6; v7 -= 16) {
            v8 = *(_QWORD*)(v7 - 8);
            if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                            0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
              std___1___shared_weak_count___release_weak(v8);
            }
          }
          *(_QWORD*)(v5 + 120) = v6;
          *(_DWORD*)(v5 + 24) = 0;
          GameRoutine_10f59e0(v5 + 32);
          GameRoutine_10f59e0(v5 + 72);
          v9 = *(_QWORD*)(v5 + 112);
          for (j = *(_QWORD*)(v5 + 120); j != v9; j -= 16) {
            v11 = *(_QWORD*)(j - 8);
            if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
              std___1___shared_weak_count___release_weak(v11);
            }
          }
          *(_QWORD*)(v5 + 120) = v9;
        }
      }
      return;
    }
  }
}

void game_character_CharacterAura_Fade_lambda0_Invoke(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 i;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  float v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22365f0,
                            memory_order_acquire) &
       1) == 0) {
    v10 = a1;
    v11 = a2;
    v12 = __cxa_guard_acquire(&GameData_22365f0);
    a2 = v11;
    v13 = v12;
    a1 = v10;
    if (v13 != 0) {
      GameData_22365e8 = wld_Crc32(0, "AuraModule", 10);
      __cxa_guard_release(&GameData_22365f0);
      a2 = v11;
      a1 = v10;
    }
  }
  v2 = *(_QWORD*)(a2 + 512);
  for (i = v2; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v4 = *(_DWORD*)(i - 16);
    v2 -= 16;
    if (v4 == GameData_22365e8) {
      if (*(_QWORD*)(a2 + 512) != v2) {
        v5 = *(_QWORD*)(v2 + 8);
        if (v5 != 0) {
          v6 = *(_QWORD*)(v5 + 112);
          v7 = *(_QWORD*)(v5 + 120);
          if (v6 != v7) {
            v8 = *(float*)(a1 + 8) * 60.0f;
            do {
              GameRoutine_14a16a0(v6, 1, v8);
              v6 += 16;
            } while (v6 != v7);
            v6 = *(_QWORD*)(v5 + 112);
            v7 = *(_QWORD*)(v5 + 120);
          }
          for (; v7 != v6; v7 -= 16) {
            v9 = *(_QWORD*)(v7 - 8);
            if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                            0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
              std___1___shared_weak_count___release_weak(v9);
            }
          }
          *(_QWORD*)(v5 + 120) = v6;
        }
      }
      return;
    }
  }
}

#pragma GCC visibility pop
