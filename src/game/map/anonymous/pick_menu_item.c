#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_21eea38;
extern __int64 game_GameModeData_instance_;
__int64 PickMenuItem_Unknown6(__int64 a1);
__int64 PickMenuItem_Unknown25();

__int64 PickMenuItem_Unknown6(__int64 a1)
{
  char v1;
  int v2;
  int v3;

  v1 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0) {
    return v1 & 1;
  }
  v2 = *(_DWORD*)(game_GameModeData_instance_ + 60);
  switch (v2) {
  case 0:
    return 0;
  case 3:
    goto LABEL_8;
  case 1:
    v3 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
    if ((unsigned int)(v3 - 3) < 2) {
      goto LABEL_8;
    }
    if (v3 == 2) {
      if (*(int*)(game_GameModeData_instance_ + 64) < 3) {
        return 0;
      }
    }
    else if (v3 == 1) {
    LABEL_8:
      if (*(int*)(game_GameModeData_instance_ + 64) < 2) {
        return 0;
      }
    }
    break;
  default:
    break;
  }
  v1 = *(_BYTE*)(a1 + 81);
  return v1 & 1;
}

__int64 PickMenuItem_Unknown25()
{
  if (GameData_21eea38 != 0) {
    *(_DWORD*)(GameData_21eea38 + 152) = 2;
  }
  return 2;
}

#pragma GCC visibility pop
