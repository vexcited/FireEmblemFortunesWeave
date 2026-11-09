#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_70e760(_QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
extern _UNKNOWN GameData_1adfa87;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
__int64 ProcMainQuestPart3Seq_Unknown18(__int64 a1);

__int64 ProcMainQuestPart3Seq_Unknown18(__int64 a1)
{
  __int64 result;
  __int16* v3;
  __int64 v4;
  int* v5;
  int v6;
  _QWORD v7[2];

  v7[1] = &GameData_1adfa87;
  result = game_HashString(&GameData_1adfa87);
  v7[0] = result;
  if (game_GameModeData_instance_ != 0 &&
          (result = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48), v7)) != 0 &&
          *(_DWORD*)(result + 32) != 0 ||
      *(_BYTE*)(a1 + 248) == 1) {
    *(_DWORD*)(a1 + 152) = 2;
    return result;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v3 = (__int16*)(game_gmap_GmapClock_instance_ + 20);
  }
  else {
    v3 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  if (v3[1] * *v3 * v3[2] == 0) {
    v5 = (int*)(a1 + 152);
  LABEL_16:
    v6 = 2;
    goto LABEL_17;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v4 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v4 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  result = GameRoutine_70e760(v4, v3);
  v5 = (int*)(a1 + 152);
  if ((int)result < 1) {
    goto LABEL_16;
  }
  v6 = 4;

LABEL_17:
  *v5 = v6;
  return result;
}

#pragma GCC visibility pop
