#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_d9fc90(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
extern _UNKNOWN GameData_1adebe5;
extern __int64 GameData_1ad2a61;
extern __int64 GameData_21c9608;
extern __int64 GameData_21f3ce8;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
__int64 HubMenuItem_ExitGmap_Unknown6(__int64 a1);
bool HubMenuItem_ExitGmap_Unknown58();

__int64 HubMenuItem_ExitGmap_Unknown6(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  char v5;
  int v6;
  bool v7;
  int v8;
  int v9;
  bool v10;
  int v11;
  __int64 v13;
  __int64* v14;

  v14 = &GameData_1ad2a61;
  v2 = game_HashString(&GameData_1ad2a61);
  v13 = v2;
  if (game_GameModeData_instance_ != 0) {
    v2 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v13);
    if (v2 != 0 && *(_DWORD*)(v2 + 32) != 0) {
      goto LABEL_38;
    }
  }
  v3 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_38;
  }
  v4 = *(_DWORD*)(game_GameModeData_instance_ + 60);
  v5 = 0;
  if (v4 > 1) {
    if (v4 != 2) {
      if (v4 != 3 || *(int*)(game_GameModeData_instance_ + 64) >= 2) {
        goto LABEL_37;
      }
      goto LABEL_38;
    }
  }
  else if (v4 != 0) {
    if (v4 != 1) {
      goto LABEL_37;
    }
    if (GameData_21f3ce8 != 0 && *(_BYTE*)(GameData_21c9608 + 304) == 1) {
      if (game_gmap_GmapClock_instance_ == 0 ||
          *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                  *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                  *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
              0) {
        v14 = (__int64*)&GameData_1adebe5;
        v2 = game_HashString(&GameData_1adebe5);
        v3 = game_GameModeData_instance_;
        v13 = v2;
        if (game_GameModeData_instance_ == 0 ||
            (v2 = game_GameVariableTable_Find(
                 *(_QWORD*)(game_GameModeData_instance_ + 48), &v13),
             v3 = game_GameModeData_instance_, v2 == 0) ||
            *(_DWORD*)(v2 + 32) == 0) {
          if (v3 == 0) {
            goto LABEL_37;
          }
          goto LABEL_28;
        }
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_37;
        }
      }
      v6 = *(_DWORD*)(v3 + 60);
      v7 = v6 == 1 && *(_BYTE*)(v3 + 15) == 5;
      if (!v7 && v6 != 2) {
        goto LABEL_37;
      }
    }
  LABEL_28:
    v8 = *(unsigned __int8*)(v3 + 15);
    if ((unsigned int)(v8 - 2) < 3) {
      v9 = *(_DWORD*)(v3 + 64);
      v10 = v9 == 4;
      if (v9 < 4) {
        goto LABEL_38;
      }
      goto LABEL_33;
    }
    if (v8 == 1) {
      v11 = *(_DWORD*)(v3 + 64);
      v10 = v11 == 3;
      if (v11 >= 3) {
      LABEL_33:
        if (!v10 ||
            GameData_21f3ce8 != 0 && (GameRoutine_d9fc90(v2) & 1) != 0) {
          goto LABEL_37;
        }
      }
    LABEL_38:
      v5 = 0;
      return v5 & 1;
    }
  LABEL_37:
    v5 = *(_BYTE*)(a1 + 81);
  }
  return v5 & 1;
}

bool HubMenuItem_ExitGmap_Unknown58()
{
  __int64 v0;
  int v1;
  _QWORD v5[2];

  if (GameData_21f3ce8 == 0) {
    return false;
  }
  if (*(_BYTE*)(GameData_21c9608 + 304) != 1) {
    return false;
  }
  if (game_gmap_GmapClock_instance_ == 0 ||
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
          0) {
    v5[1] = &GameData_1adebe5;
    v5[0] = game_HashString(&GameData_1adebe5);
    if (game_GameModeData_instance_ == 0) {
      return false;
    }
    v0 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v5);
    if (v0 == 0 || *(_DWORD*)(v0 + 32) == 0) {
      return false;
    }
  }
  if (game_GameModeData_instance_ == 0) {
    return true;
  }
  v1 = *(_DWORD*)(game_GameModeData_instance_ + 60);
  return (*(_BYTE*)(game_GameModeData_instance_ + 15) != 5 || v1 != 1) &&
         v1 != 2;
}

#pragma GCC visibility pop
