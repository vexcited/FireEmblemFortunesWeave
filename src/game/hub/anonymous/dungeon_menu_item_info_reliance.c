#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_184ef30(_QWORD);
__int64 GameRoutine_184ff20(_QWORD, _QWORD);
extern __int64 game_GameModeData_instance_;
extern __int64 game_script_map_effect_g_sequence;
__int64 DungeonMenuItem_Info_Reliance_ACall(__int64 a1);

__int64 DungeonMenuItem_Info_Reliance_ACall(__int64 a1)
{
  __int64 v2;
  __int64 v3;

  if (game_script_map_effect_g_sequence == 0) {
    if ((GameRoutine_184ef30(1) & 1) != 0) {
      goto LABEL_6;
    }
    return 1;
  }
  if (game_GameModeData_instance_ == 0) {
    if ((GameRoutine_184ef30(3) & 1) != 0) {
      goto LABEL_6;
    }
    return 1;
  }
  if ((GameRoutine_184ef30(*(_DWORD*)(game_GameModeData_instance_ + 92) & 1 ^
                           3u) &
       1) == 0) {
    return 1;
  }

LABEL_6:
  v2 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(v2 + 152) != 0) {
    v3 = *(_QWORD*)(v2 + 152);
  }
  else {
    v3 = *(_QWORD*)(a1 + 8);
  }
  GameRoutine_184ff20(v3, a1 + 144);
  return 9;
}

#pragma GCC visibility pop
