#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_70e760(_QWORD, _QWORD);
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
__int64 ProcSideStorySeq_Unknown18(__int64 result);

__int64 ProcSideStorySeq_Unknown18(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int* v3;
  int v4;

  if (*(_QWORD*)(result + 256) == 0 || (*(_BYTE*)(result + 276) & 1) == 0) {
    *(_DWORD*)(result + 152) = 2;
    return result;
  }
  if (*(__int16*)(result + 266) * *(__int16*)(result + 264) *
          *(__int16*)(result + 268) ==
      0) {
    v3 = (int*)(result + 152);
  LABEL_11:
    v4 = 2;
    goto LABEL_12;
  }
  v1 = result;
  if (game_gmap_GmapClock_instance_ != 0) {
    v2 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v2 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  result = GameRoutine_70e760(v2, result + 264);
  v3 = (int*)(v1 + 152);
  if ((int)result < 1) {
    goto LABEL_11;
  }
  v4 = 4;

LABEL_12:
  *v3 = v4;
  return result;
}

#pragma GCC visibility pop
