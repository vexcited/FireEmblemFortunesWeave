#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_15d2910(_QWORD, _QWORD);
__int64 GameRoutine_15e5fa0(void);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_208fa50;
extern __int64 game_GameModeData_instance_;
extern __int64 game_kVariableHubFacilityForced;
extern __int64* GameData_212dcd0;
extern __int64* GameData_212e008[9];
__int64 ProcStableBreedingFoodMenu_Unknown88(__int64 a1);
__int64 ProcStableBreedingFoodMenu_Unknown101(_QWORD* a1);

__int64 ProcStableBreedingFoodMenu_Unknown88(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_208fa50, 0);
    if (result != 0) {
      v3 = result;
      GameRoutine_1560070(&v7, a1 + 848, "L_InfoDetail");
      result = v8;
      if (v8 != 0) {
        v4 = std___1___shared_weak_count_lock(v8);
        v5 = v7;
        result = v8;
        if (v8 != 0) {
          result = std___1___shared_weak_count___release_weak(v8);
        }
        if (v4 != 0 && v5 != 0) {
          v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 560LL))(v3);
          result = GameRoutine_15d2910(v5, v6);
        }
        else if (v4 == 0) {
          return result;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          return std___1___shared_weak_count___release_weak(v4);
        }
      }
    }
  }
  return result;
}

__int64 ProcStableBreedingFoodMenu_Unknown101(_QWORD* a1)
{
  __int64 v2;
  __int64 result;

  if (game_GameModeData_instance_ != 0) {
    v2 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48),
        &game_kVariableHubFacilityForced);
    if (v2 != 0 && *(_DWORD*)(v2 + 32) != 0) {
      return 1;
    }
  }
  *(_DWORD*)(*GameData_212dcd0 + 20) = -1;
  if (a1[42] == 0) {
    return 3;
  }
  if (a1[133] != 0) {
    GameRoutine_15e5fa0();
  }
  (*(void (**)(_QWORD*))(a1[132] + 104LL))(a1 + 132);
  result = a1[42];
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 208LL))(result);
  }
  return result;
}

#pragma GCC visibility pop
