#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_138a5a0(_QWORD);
__int64 GameRoutine_14869b0(_QWORD);
extern __int64 GameData_21f3d10;
extern __int64 GameData_21f4000;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
__int64 ProcPerchSceneGaze_14381a0();
void ProcPerchSceneGaze_14381d0();

__int64 ProcPerchSceneGaze_14381a0()
{
  __int64 v0;

  v0 = GameRoutine_138a5a0(GameData_21f4000);
  return GameRoutine_14869b0(v0);
}

void ProcPerchSceneGaze_14381d0()
{
  if (GameData_21f3d10 != 0 && *(int*)(GameData_21f3d10 + 152) >= 1) {
    *(_DWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 156LL) =
        1065353216;
  }
}

#pragma GCC visibility pop
