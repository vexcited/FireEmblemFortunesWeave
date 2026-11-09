#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1951760(__int64 result, unsigned __int8);
__int64 GameRoutine_1951fc0(_QWORD);
extern __int64 (*GameData_2118f90[])();
extern __int64 (*game_facility_SceneEffectManager_Impl_vtable[])();
extern __int64 GameData_226bb88;
extern int GameData_226bb90;
__int64 Impl_Destructor_1951e00(_QWORD* a1);

__int64 Impl_Destructor_1951e00(_QWORD* a1)
{
  __int64 result;

  *a1 = game_facility_SceneEffectManager_Impl_vtable;
  GameRoutine_1951760((__int64)a1, 0);
  GameRoutine_1951760((__int64)a1, 1u);
  result = GameRoutine_1951fc0(a1 + 1);
  *a1 = GameData_2118f90;
  if ((_QWORD*)GameData_226bb88 == a1) {
    GameData_226bb88 = 0;
    GameData_226bb90 = 0;
  }
  return result;
}

#pragma GCC visibility pop
