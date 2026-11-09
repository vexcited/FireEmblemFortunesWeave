#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 game_GameModeData_instance_;
__int64 SelectMenuItem_Unknown6(__int64 a1);

__int64 SelectMenuItem_Unknown6(__int64 a1)
{
  char v1;
  int v2;
  int v3;

  v1 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0) {
    return v1 & 1;
  }
  v2 = *(_DWORD*)(game_GameModeData_instance_ + 60);
  if (v2 == 0) {
    return 0;
  }
  if (v2 != 3) {
    if (v2 == 1) {
      v3 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
      if ((unsigned int)(v3 - 1) >= 3) {
        if (v3 == 4 && *(int*)(game_GameModeData_instance_ + 64) < 4) {
          return 0;
        }
      }
      else if (*(int*)(game_GameModeData_instance_ + 64) < 3) {
        return 0;
      }
    }
    goto LABEL_12;
  }
  if (*(int*)(game_GameModeData_instance_ + 64) < 2) {
    return 0;
  }

LABEL_12:
  v1 = *(_BYTE*)(a1 + 81);
  return v1 & 1;
}

#pragma GCC visibility pop
