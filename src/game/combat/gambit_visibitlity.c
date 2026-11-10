#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e51940(_QWORD, _QWORD);
__int64 GameRoutine_ea3620(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (*GameData_1fe6540[])();
__int64 game_combat_GambitVisibitlity_Run(__int64 a1);
__int64 game_combat_GambitVisibitlity_Run_lambda0_Invoke(__int64 a1,
                                                         __int64 a2);

__int64 game_combat_GambitVisibitlity_Run(__int64 a1)
{
  __int64 result;
  __int64 v2;
  _QWORD v3[4];
  _QWORD* v4;

  v3[0] = GameData_1fe6540;
  v3[1] = a1;
  v4 = v3;
  GameRoutine_e51940(a1, v3);
  result = (__int64)v4;
  if (v4 == v3) {
    v2 = 32;
  }
  else {
    if (v4 == nullptr) {
      return result;
    }
    v2 = 40;
  }
  return (*(__int64 (**)(__int64))(*v4 + v2))((__int64)v4);
}

__int64 game_combat_GambitVisibitlity_Run_lambda0_Invoke(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(*(_QWORD*)a2 + 136LL);
  v4 = *(_QWORD*)(*(_QWORD*)a2 + 144LL);
  if (v4 == 0) {
    return GameRoutine_ea3620(*(_QWORD*)(v3 + 40), *(unsigned __int8*)(v2 + 56),
                              2);
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                            memory_order_relaxed);
  result =
      GameRoutine_ea3620(*(_QWORD*)(v3 + 40), *(unsigned __int8*)(v2 + 56), 2);
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    return std___1___shared_weak_count___release_weak();
  }
  return result;
}

#pragma GCC visibility pop
