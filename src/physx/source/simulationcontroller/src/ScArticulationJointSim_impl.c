#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 physx_Sc_ActorSim_registerInteractionInActor(__int64, __int64);
__int64 physx_Sc_ArticulationSim_addBody(__int64*, __int64, __int64, __int64);
__int64 physx_Sc_Interaction_Interaction(__int64 result, __int64, __int64, char,
                                         char);
__int64 physx_Sc_ArticulationJointSim_ArticulationJointSim(__int64 a1,
                                                           __int64 a2,
                                                           __int64 a3,
                                                           __int64 a4);

__int64 physx_Sc_ArticulationJointSim_ArticulationJointSim(__int64 a1,
                                                           __int64 a2,
                                                           __int64 a3,
                                                           __int64 a4)
{
  __int64 v8;
  __int64 result;

  physx_Sc_Interaction_Interaction(a1, a3, a4, 5, 0);
  v8 = *(_QWORD*)a1;
  *(_QWORD*)(a1 + 32) = a2;
  if (*(_DWORD*)(v8 + 88) <= 0xFFFFFFFD &&
      *(_DWORD*)(*(_QWORD*)(a1 + 8) + 88LL) <= 0xFFFFFFFD) {
    *(_BYTE*)(a1 + 29) |= 0x20u;
  }
  physx_Sc_ActorSim_registerInteractionInActor(v8, a1);
  physx_Sc_ActorSim_registerInteractionInActor(*(_QWORD*)(a1 + 8), a1);
  result = physx_Sc_ArticulationSim_addBody(*(__int64**)(a3 + 208), a4, a3, a1);
  *(_QWORD*)(*(_QWORD*)(a1 + 32) + 352LL) = a1;
  return result;
}

#pragma GCC visibility pop
