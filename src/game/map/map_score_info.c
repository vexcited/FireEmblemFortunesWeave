#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_19aa980(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 (*GameData_211f3e8[])();
extern __int64 (*GameData_211f480[])();
extern __int64 (*game_map_MapScoreInfo_vtable[])();
extern __int64 GameData_212d690;
extern __int64 GameData_21ca2f8;
extern __int64 GameData_21d1f10;
extern __int64 GameData_21ed088;
extern __int64 game_GameModeData_instance_;
extern __int64 game_map_kVariableEnemyScore;
extern __int64 game_map_kVariablePlayerScore;
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212d670[3];
extern int GameData_2272244;
__int64 MapScoreInfo_Destructor(_QWORD* a1);
__int64 MapScoreInfo_19aa850(__int64 result);
__int64 MapScoreInfo_19aad80(__int64 result);
__int64 MapScoreInfo_Unknown5(__int64 result);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 MapScoreInfo_DeletingDestructor(__int64 result);

__int64 MapScoreInfo_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;

  *a1 = game_map_MapScoreInfo_vtable;
  a1[1] = GameData_211f3e8;
  v2 = a1[3];
  if (v2 != 0) {
    *(_BYTE*)(v2 + 2376) = 1;
  }
  v3 = a1[4];
  a1[3] = 0;
  a1[4] = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_155e140(a1 + 5);
  GameRoutine_155e140(a1 + 5);
  v4 = a1[17];
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  GameRoutine_1564060(a1 + 11);
  GameRoutine_1563f90(a1 + 8, a1[9]);
  result = a1[6];
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  v6 = a1[4];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    result = std___1___shared_weak_count___release_weak(v6);
  }
  *a1 = GameData_211f480;
  if ((_QWORD*)GameData_21ed088 == a1) {
    GameData_21ed088 = 0;
    GameData_2272244 = 0;
  }
  return result;
}

__int64 MapScoreInfo_19aa850(__int64 result)
{
  __int64 v1;
  unsigned int v2;
  __int64 v3;
  unsigned int v4;

  if (GameData_21ca2f8 == 0) {
    return result;
  }
  v1 = result;
  if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21d1f10);
    if (result != 0 && *(_BYTE*)(result + 32) != 0) {
      result = GameRoutine_19aa980(v1, *(unsigned __int8*)(result + 32) == 2);
    }
    if (game_GameModeData_instance_ != 0) {
      result = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48),
          &game_map_kVariablePlayerScore);
      if (result != 0) {
        v2 = *(_DWORD*)(result + 32);
        v3 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_11;
        }
      }
      else {
        v2 = 0;
        v3 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_11;
        }
      }
      result = game_GameVariableTable_Find(*(_QWORD*)(v3 + 48),
                                           &game_map_kVariableEnemyScore);
      if (result != 0) {
        v4 = *(_DWORD*)(result + 32);
        if ((v2 & 0x80000000) != 0) {
          return result;
        }
        goto LABEL_12;
      }
    LABEL_11:
      v4 = 0;
      if ((v2 & 0x80000000) != 0) {
        return result;
      }
    LABEL_12:
      if (GameData_21ca2f8 != 0) {
        game_VariableManager_SetFlag(&game_map_kVariablePlayerScore, v2);
        if ((*(_BYTE*)(v1 + 144) & 1) == 0) {
          game_VariableManager_SetFlag(&game_map_kVariableEnemyScore, v4);
        }
        return MapScoreInfo_19aad80(v1);
      }
      return result;
    }
  }
  v2 = 0;
  goto LABEL_11;
}

__int64 MapScoreInfo_19aad80(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  const char* v4;

  if (*GameData_212ce90[0] != 0) {
    v1 = *(unsigned __int8*)(result + 144);
    v2 = result;
    v3 = result + 40;
    if (v1 != 0) {
      v4 = "Forces_1";
    }
    else {
      v4 = "Forces_2";
    }
    GameRoutine_1562680(v3, v4, 1.0);
    if (game_GameModeData_instance_ != 0) {
      game_GameVariableTable_Find(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                  &game_map_kVariablePlayerScore);
    }
    result = ui_LayoutAccessor_FindPane(v2 + 40, "T_Num_00");
    if (result != 0) {
      result = __dynamic_cast(result, GameData_212d670[0], GameData_212d690, 0);
      if (result != 0) {
        result = GameRoutine_156c910(result, "%d", 1);
      }
    }
    if ((*(_BYTE*)(v2 + 144) & 1) == 0) {
      if (game_GameModeData_instance_ != 0) {
        game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48),
            &game_map_kVariableEnemyScore);
      }
      result = ui_LayoutAccessor_FindPane(v2 + 40, "T_Num_01");
      if (result != 0) {
        result =
            __dynamic_cast(result, GameData_212d670[0], GameData_212d690, 0);
        if (result != 0) {
          return GameRoutine_156c910(result, "%d", 1);
        }
      }
    }
  }
  return result;
}

__int64 MapScoreInfo_Unknown5(__int64 result)
{
  __int64 v1;
  int v2;

  if (GameData_21ed088 == 0 || *(int*)(GameData_21ed088 + 16) <= 0) {
    if (GameData_21ca2f8 == 0) {
      return GameRoutine_155e830(result + 40, 1);
    }
    if (game_GameModeData_instance_ != 0) {
      v1 = result;
      result = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21d1f10);
      if (result != 0) {
        v2 = *(unsigned __int8*)(result + 32);
        result = v1;
        if (v2 != 0) {
          return GameRoutine_155e830(result + 40, 1);
        }
      }
    }
  }
  return result;
}

__int64 MapScoreInfo_DeletingDestructor(__int64 result)
{
  __int64 v1;
  int v2;

  if (GameData_21ed088 == 0 || *(int*)(GameData_21ed088 + 16) <= 0) {
    if (GameData_21ca2f8 == 0) {
      return LayoutAccessor_155e830(result + 32, 1);
    }
    if (game_GameModeData_instance_ != 0) {
      v1 = result;
      result = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21d1f10);
      if (result != 0) {
        v2 = *(unsigned __int8*)(result + 32);
        result = v1;
        if (v2 != 0) {
          return LayoutAccessor_155e830(result + 32, 1);
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
