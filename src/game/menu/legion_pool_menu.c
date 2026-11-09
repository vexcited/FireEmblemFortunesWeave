#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_15d32c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_185c940(_QWORD*);
__int64 GameRoutine_18ae960(_QWORD, _QWORD);
__int64 GameRoutine_18aee60(_QWORD, _QWORD);
__int64 GameRoutine_820d50(_QWORD);
__int64 GameRoutine_822320(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HasActiveSkill_843420(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_20eea68;
extern __int64 GameData_212cf80[5];
extern __int64 GameData_21f1e08;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212ceb0;
extern __int64* GameData_212e008[9];
extern int game_g_shared_system_skills;
__int64 LegionPoolMenu_Unknown139(_QWORD* a1);
__int64 LegionPoolMenu_Unknown93(__int64 result);
bool LegionPoolMenu_Unknown144(__int64 a1, _QWORD* a2);

__int64 LegionPoolMenu_Unknown139(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  GameRoutine_185c940(a1);
  result = a1[42];
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_20eea68, 0);
    if (result != 0) {
      v3 = *(unsigned int*)(result + 40);
      v4 = GameData_212ceb0;
      if ((int)v3 >= 0) {
        v4 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] +
                                              8LL) +
                                   48LL) +
                        8 * v3);
      }
      GameRoutine_1560070(&v8, a1 + 106, "L_Help");
      result = v9;
      if (v9 != 0) {
        v5 = a1[133];
        v6 = std___1___shared_weak_count_lock(v9);
        if (v6 != 0) {
          v7 = v6;
          if (v8 != 0) {
            GameRoutine_15d32c0(v8, v4, v5);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
            std___1___shared_weak_count___release_weak(v7);
          }
        }
        result = v9;
        if (v9 != 0) {
          return std___1___shared_weak_count___release_weak(v9);
        }
      }
    }
  }
  return result;
}

__int64 LegionPoolMenu_Unknown93(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = GameData_21f1e08;
  if (GameData_21f1e08 != 0) {
    v2 = result + 848;
    v3 = result;
    v4 = GameData_21f1e08;
    *(_BYTE*)(GameData_21f1e08 + 256) = 1;
    GameRoutine_18aee60(v4, v2);
    GameRoutine_18ae960(v1, 1);
    result = *(_QWORD*)(v1 + 240);
    *(_QWORD*)(v1 + 232) = 0;
    *(_QWORD*)(v1 + 240) = 0;
    if (result != 0) {
      result = std___1___shared_weak_count___release_weak(result);
    }
    *(_QWORD*)(v1 + 160) = v3;
    *(_BYTE*)(v1 + 257) = 0;
    *(_DWORD*)(v1 + 248) = -1;
    v5 = GameData_21f1e08;
    if (GameData_21f1e08 != 0) {
      *(_QWORD*)(GameData_21f1e08 + 268) = 0x44048000C46D8000LL;
      *(_QWORD*)(v5 + 276) = 0xC4048000446D8000LL;
    }
  }
  return result;
}

bool LegionPoolMenu_Unknown144(__int64 a1, _QWORD* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  unsigned int v11;
  bool v12;
  int v13;
  int v16;

  if (a2 == nullptr) {
    return false;
  }
  v3 = GameRoutine_820d50(7);
  if (game_GameModeData_instance_ != 0) {
    v4 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v3);
    if (v4 != 0 && *(_DWORD*)(v4 + 32) != 0) {
      return false;
    }
  }
  if ((GameRoutine_822320(3) & 1) == 0) {
    return false;
  }
  v5 = a2[218];
  v6 = a2[219] - v5;
  v16 = game_g_shared_system_skills & 0xFFF;
  v7 =
      ((unsigned __int64)(unsigned int)game_g_shared_system_skills >> 5) & 0x7F;
  if (v7 + 1 <= v6 >> 2 &&
      ((*(_DWORD*)(v5 + 4LL * (unsigned int)v7) >>
        game_g_shared_system_skills) &
       1) != 0 &&
      (game_HasActiveSkill_843420(&v16, a2 + 218) & 1) != 0) {
    v8 = a2[55];
    v9 = v8 != 0 ? *(_BYTE*)(v8 + 16) : 9;
    if (((1 << v9) & 0xF1) != 0) {
      return false;
    }
  }
  v10 = a2[55];
  if (v10 == 0) {
    return false;
  }
  v11 = *(unsigned __int8*)(v10 + 16);
  v12 = v11 > 7;
  v13 = (1 << v11) & 0x91;
  return !v12 && v13 != 0 && *(_BYTE*)(a2[50] + 96LL) == 1;
}

#pragma GCC visibility pop
