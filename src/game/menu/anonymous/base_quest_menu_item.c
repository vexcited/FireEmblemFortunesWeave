#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_ee2760(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64* GameData_212ec18[2];
__int64
game_menu_anonymous_BaseQuestMenuItem_JumpCall_closure_Invoke(__int64 a1);
__int64

game_menu_anonymous_BaseQuestMenuItem_JumpCall_closure_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD v10[2];
  char v11;

  v1 = *(_QWORD*)(a1 + 8);
  if (*(_DWORD*)(v1 + 96) != 2) {
    return 3;
  }
  v2 = *(_QWORD*)(v1 + 112);
  if (v2 == 0) {
    return 3;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    return 3;
  }
  v4 = *(_QWORD*)(v1 + 104);
  v5 = v3;
  if (v4 != 0) {
    v6 = *(_QWORD*)(v1 + 104);
    v7 = *GameData_212ec18[0];
    v8 = *(_QWORD*)(v1 + 136);
    v10[0] = *(_QWORD*)(v1 + 128);
    v10[1] = v8;
    v11 = 1;
    GameRoutine_ee2760(v7, v6, v10);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  if (v4 != 0) {
    return 4;
  }
  else {
    return 3;
  }
}

#pragma GCC visibility pop
