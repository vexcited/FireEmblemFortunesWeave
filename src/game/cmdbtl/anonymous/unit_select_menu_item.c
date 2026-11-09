#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_18fdde0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_210ba90;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212e030[4];
__int64 UnitSelectMenuItem_Unknown6(__int64 a1);
__int64 UnitSelectMenuItem_Unknown25(__int64 a1);

__int64 UnitSelectMenuItem_Unknown6(__int64 a1)
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

__int64 UnitSelectMenuItem_Unknown25(__int64 a1)
{
  __int64 v1;
  __int64 result;
  __int64 v3;

  v1 = *(_QWORD*)(a1 + 8);
  if (v1 == 0) {
    return 0;
  }
  result = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                          &GameData_210ba90, 0);
  if (result != 0) {
    v3 = *(_QWORD*)(v1 + 152);
    if (v3 == 0) {
      v3 = v1;
    }
    GameRoutine_18fdde0(v3, result + 1080, *(unsigned __int8*)(result + 1072),
                        0);
    return 9;
  }
  return result;
}

#pragma GCC visibility pop
