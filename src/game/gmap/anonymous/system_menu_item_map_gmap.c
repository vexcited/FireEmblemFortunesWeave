#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_167b840(_QWORD, _QWORD, _QWORD);
extern __int64 GameData_21f1658;
extern __int64 game_GameModeData_instance_;
__int64 SystemMenuItem_Map_Gmap_Unknown6(__int64 a1);
__int64 SystemMenuItem_Map_Gmap_Unknown25(__int64 a1);

__int64 SystemMenuItem_Map_Gmap_Unknown6(__int64 a1)
{
  int v1;
  int v2;
  bool v3;
  int v4;

  if (game_GameModeData_instance_ == 0) {
    v3 = false;
    return v3 & *(_BYTE*)(a1 + 81);
  }
  v2 = *(_DWORD*)(game_GameModeData_instance_ + 60);
  v1 = *(_DWORD*)(game_GameModeData_instance_ + 64);
  v3 = false;
  if (v2 > 1) {
    if (v2 == 2) {
      return v3 & *(_BYTE*)(a1 + 81);
    }
    if (v2 == 3) {
      v3 = v1 > 1;
      return v3 & *(_BYTE*)(a1 + 81);
    }
    goto LABEL_13;
  }
  if (v2 != 0) {
    if (v2 == 1) {
      v4 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
      if ((unsigned int)(v4 - 2) < 3) {
        v3 = v1 > 3;
        return v3 & *(_BYTE*)(a1 + 81);
      }
      if (v4 == 1) {
        v3 = v1 > 2;
        return v3 & *(_BYTE*)(a1 + 81);
      }
    }
  LABEL_13:
    v3 = true;
  }
  return v3 & *(_BYTE*)(a1 + 81);
}

__int64 SystemMenuItem_Map_Gmap_Unknown25(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(v1 + 152) != 0) {
    v2 = *(_QWORD*)(v1 + 152);
  }
  else {
    v2 = *(_QWORD*)(a1 + 8);
  }
  GameRoutine_167b840(v2, *(_QWORD*)(*(_QWORD*)(GameData_21f1658 + 16) + 96LL),
                      1);
  return 9;
}

#pragma GCC visibility pop
