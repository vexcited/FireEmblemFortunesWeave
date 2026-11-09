#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_21f3d10;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
void ProcDiningScene_92a210();

void ProcDiningScene_92a210()
{
  if (GameData_21f3d10 != 0 && *(int*)(GameData_21f3d10 + 152) >= 1) {
    *(_DWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 156LL) =
        1065353216;
  }
}

#pragma GCC visibility pop
