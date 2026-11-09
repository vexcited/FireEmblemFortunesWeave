#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_70e760(_QWORD, _QWORD);
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
__int64 ProcMainQuestSeq_Unknown18(__int64 result);

__int64 ProcMainQuestSeq_Unknown18(__int64 result)
{
  __int64 v1;
  __int16* v2;
  __int64 v3;
  int* v4;
  int v5;

  v1 = result;
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 2) {
    *(_DWORD*)(result + 152) = 3;
    return result;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v2 = (__int16*)(game_gmap_GmapClock_instance_ + 20);
  }
  else {
    v2 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  if (v2[1] * *v2 * v2[2] == 0) {
    v4 = (int*)(result + 152);
  LABEL_14:
    v5 = 2;
    goto LABEL_15;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v3 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v3 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  result = GameRoutine_70e760(v3, v2);
  v4 = (int*)(v1 + 152);
  if ((int)result < 1) {
    goto LABEL_14;
  }
  v5 = 4;

LABEL_15:
  *v4 = v5;
  return result;
}

#pragma GCC visibility pop
