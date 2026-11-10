#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2e9310();
__int64 PxGetFoundation();
__int64 physx_NpScene_fetchResultsPostContactCallbacks(__int64);
__int64 physx_Sc_BroadphaseManager_fireOutOfBoundsCallbacks(__int64*, __int64,
                                                            __int64);
__int64 physx_Sc_Scene_endSimulation(__int64);
__int64 physx_Sc_Scene_fireBrokenConstraintCallbacks(__int64 result);
__int64 physx_Sc_Scene_fireQueuedContactCallbacks(__int64 result);
__int64 physx_Sc_Scene_fireTriggerCallbacks(__int64 result);
bool GameRoutine_55bac0(__int64, unsigned int);
__int64 physx_NpScene_fetchResults(__int64 a1, int a2, _DWORD* a3);

__int64 physx_NpScene_fetchResults(__int64 a1, int a2, _DWORD* a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;

  if ((*(_BYTE*)(a1 + 1043) & 1) != 0) {
    return 1;
  }
  if (*(_DWORD*)(a1 + 5788) == 3) {
    if (GameRoutine_55bac0(*(_QWORD*)(a1 + 624), a2 << 31 >> 31)) {
      physx_Sc_Scene_endSimulation(a1 + 1120);
      v6 = *(_QWORD*)(a1 + 1440);
      v7 = *(_QWORD*)(a1 + 2360);
      *(_BYTE*)(a1 + 1001) = 0;
      if ((physx_Sc_BroadphaseManager_fireOutOfBoundsCallbacks(
               (__int64*)(a1 + 1136), v6, v7) &
           1) != 0) {
        GameRoutine_2e9310();
      }
      physx_Sc_Scene_fireBrokenConstraintCallbacks(a1 + 1120);
      physx_Sc_Scene_fireTriggerCallbacks(a1 + 1120);
      physx_Sc_Scene_fireQueuedContactCallbacks(a1 + 1120);
      physx_NpScene_fetchResultsPostContactCallbacks(a1);
      if (a3 == nullptr) {
        return 1;
      }
      *a3 = 0;
      return 1;
    }
    else {
      return 0;
    }
  }
  else {
    v8 = PxGetFoundation();
    return (*(__int64 (**)(__int64, __int64, const char*, __int64,
                           const char*))(*(_QWORD*)v8 + 88LL))(
        v8, 8,
        "/Inside/Lib/PhysX/O/physx/source/physx/src/NpSceneFetchResults.cpp",
        236,
        "PxScene::fetchResults: fetchResults() called illegally! It must be "
        "called after advance() or simulate()");
  }
}

#pragma GCC visibility pop
