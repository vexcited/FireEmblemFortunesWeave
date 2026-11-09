#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a06510(_QWORD, _QWORD);
__int64 GameRoutine_1a071f0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_80e330(_QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
extern __int64 game_GameModeData_instance_;
__int64 ObeliskDestinyMenuItem_Unknown25(_QWORD* a1);
bool ObeliskDestinyMenuItem_Unknown58(__int64 a1);

__int64 ObeliskDestinyMenuItem_Unknown25(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  if (game_GameModeData_instance_ == 0) {
    return 1;
  }
  v2 = game_GameVariableTable_Find(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                   *(_QWORD*)(a1[11] + 24LL) + 32LL);
  if (v2 == 0 || (unsigned int)*(unsigned __int8*)(v2 + 32) - 1 > 2) {
    return 1;
  }
  if (game_GameModeData_instance_ != 0) {
    v3 = a1[11];
    v4 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48),
        *(_QWORD*)(v3 + 24) + 32LL);
    if (v4 != 0 && (unsigned int)*(unsigned __int8*)(v4 + 32) - 1 <= 2) {
      if (game_GameModeData_instance_ != 0) {
        v5 = *(_DWORD*)(game_GameModeData_instance_ + 80) +
             *(unsigned __int16*)(v3 + 64);
        v6 = v5 & ~(v5 >> 31);
        if (v6 >= 99999) {
          v6 = 99999;
        }
        *(_DWORD*)(game_GameModeData_instance_ + 80) = v6;
      }
      game_VariableManager_SetFlag(*(_QWORD*)(v3 + 24) + 32LL, 4);
    }
  }
  (*(void (**)(_QWORD*))(*a1 + 96LL))(a1);
  v7 = a1[1];
  if (*(_QWORD*)(v7 + 152) != 0) {
    v8 = *(_QWORD*)(v7 + 152);
  }
  else {
    v8 = a1[1];
  }
  v9 = GameRoutine_1a071f0(v8, "MID_AchieveMenu_Receive_Result", a1[11]);
  GameRoutine_1a06510(v9 + 824, *(unsigned __int16*)(a1[11] + 64LL));
  GameRoutine_80e330(v9, "FF_Positive1");
  return 12;
}

bool ObeliskDestinyMenuItem_Unknown58(__int64 a1)
{
  __int64 v1;

  if (game_GameModeData_instance_ == 0) {
    return true;
  }
  v1 = game_GameVariableTable_Find(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                   *(_QWORD*)(*(_QWORD*)(a1 + 88) + 24LL) +
                                       32LL);
  return v1 == 0 || *(_BYTE*)(v1 + 32) != 4;
}

#pragma GCC visibility pop
