#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562680(_QWORD, _QWORD, long double);
__int64 GameRoutine_82e7c0(_QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 game_GameModeData_instance_;
__int64 UnitMenuItem_Unknown64(__int64 a1);

__int64 UnitMenuItem_Unknown64(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  unsigned __int8 v6;
  long double v7;
  __int64 v8;
  __int64 v9;
  const char* v10;

  result = *(_QWORD*)(a1 + 56);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = *(_QWORD*)(a1 + 48);
      v4 = result;
      if (v3 != 0) {
        v5 = (__int64*)GameRoutine_82e7c0(*(unsigned __int8*)(a1 + 83), 2);
        v8 = *v5;
        if (*v5 != 0) {
          v6 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ != 0) {
            v9 = game_GameVariableTable_Find(
                *(_QWORD*)(game_GameModeData_instance_ + 48), v5);
            v6 = v9 != 0 && *(_DWORD*)(v9 + 32) != 0;
          }
        }
        LODWORD(v7) = 1.0;
        if (((v8 != 0) & v6) != 0) {
          v10 = "Select_Clear_On";
        }
        else {
          v10 = "Select_Clear_Off";
        }
        result = GameRoutine_1562680(v3, v10, v7);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return std___1___shared_weak_count___release_weak(v4);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
