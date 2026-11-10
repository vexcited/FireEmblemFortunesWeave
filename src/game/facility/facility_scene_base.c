#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 game_script_hub_g_frame_counter_ptr[3];
__int64 FacilitySceneBase_1958ea0(__int64 result);
__int64
game_facility_FacilitySceneBase_PushState_lambda0_Invoke(__int64 a1,
                                                         unsigned __int8* a2);
__int64 game_facility_FacilitySceneBase_CreateBindInitialLoad_lambda0_Invoke(
    __int64 a1);

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

__int64

game_facility_FacilitySceneBase_PushState_lambda0_Invoke(__int64 a1,
                                                         unsigned __int8* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 48LL))(
      *(_QWORD*)(a1 + 8), *a2);
}

__int64

game_facility_FacilitySceneBase_CreateBindInitialLoad_lambda0_Invoke(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 32LL))(
      *(_QWORD*)(a1 + 8));
}

#pragma GCC visibility pop
