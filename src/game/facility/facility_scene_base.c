#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 game_script_hub_g_frame_counter_ptr[3];
__int64 FacilitySceneBase_1958ea0(__int64 result);

__int64 FacilitySceneBase_1958ea0(__int64 result)
{
  float v1;

  v1 = 1.0;
  if ((result & 1) != 0) {
    v1 = 0.0;
  }
  *(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 156LL) = v1;
  return result;
}

#pragma GCC visibility pop
