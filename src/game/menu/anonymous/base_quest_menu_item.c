#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_ee2760(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64* GameData_212ec18[2];
__int64
game_menu_anonymous_BaseQuestMenuItem_JumpCall_closure_Invoke(__int64 a1);
__int64 GameRoutine_ee2760_alt1(__int64, _QWORD*,
                                __int128*) __asm__("GameRoutine_ee2760");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64

game_menu_anonymous_BaseQuestMenuItem_JumpCall_closure_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  struct {
    __int128 v10;
    char v11;
  } v10_;

  v1 = *(_QWORD*)(a1 + 8);
  if (*(_DWORD*)(v1 + 96) != 2) {
    return 3;
  }
  v2 = *(_QWORD*)(v1 + 112);
  if (v2 == 0) {
    return 3;
  }
  v3 = std___1___shared_weak_count_lock_alt1(v2);
  if (v3 == 0) {
    return 3;
  }
  v4 = *(_QWORD*)(v1 + 104);
  v5 = v3;
  if (v4 != 0) {
    v6 = *(_QWORD**)(v1 + 104);
    v7 = *GameData_212ec18[0];
    v8 = *(_QWORD*)(v1 + 136);
    *(_QWORD*)&v10_.v10 = *(_QWORD*)(v1 + 128);
    *((_QWORD*)&v10_.v10 + 1) = v8;
    v10_.v11 = 1;
    GameRoutine_ee2760_alt1(v7, v6, &v10_.v10);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak_alt1(v5);
  }
  if (v4 != 0) {
    return 4;
  }
  else {
    return 3;
  }
}

#pragma GCC visibility pop
