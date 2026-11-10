#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 PxGetFoundation();
__int64 physx_NpShapeManager_detachShape(__int64*, __int64, __int64, char);
__int64 physx_Sq_PruningStructure_invalidate(__int64 result, __int64);
__int64 physx_NpRigidActorTemplate_detachShape(_QWORD* a1, __int64 a2, char a3);

__int64 physx_NpRigidActorTemplate_detachShape(_QWORD* a1, __int64 a2, char a3)
{
  __int64 v3;
  __int64 v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  --*(_DWORD*)(a1[32] + 128LL);
  v3 = a1[3];
  if (v3 != 0 && *(_BYTE*)(v3 + 1002) == 1) {
    v6 = PxGetFoundation();
    return (*(__int64 (**)(__int64, __int64, const char*, __int64,
                           const char*))(*(_QWORD*)v6 + 88LL))(
        v6, 8,
        "/Inside/Lib/PhysX/O/physx/source/physx/src\\NpRigidActorTemplate.h",
        250,
        "PxRigidActor::detachShape() not allowed while simulation is running. "
        "Call will be ignored.");
  }
  else {
    if (a1[9] != 0) {
      v8 = a2;
      v9 = PxGetFoundation();
      (*(void (**)(__int64, __int64, const char*, __int64, const char*))(
          *(_QWORD*)v9 + 88LL))(
          v9, 8,
          "/Inside/Lib/PhysX/O/physx/source/physx/src\\NpRigidActorTemplate.h",
          256,
          "PxRigidActor::detachShape: Actor is part of a pruning structure, "
          "pruning structure is now invalid!");
      physx_Sq_PruningStructure_invalidate(a1[9], (__int64)a1);
      a2 = v8;
    }
    result = physx_NpShapeManager_detachShape(a1 + 7, a2, (__int64)a1, a3 & 1);
    if ((result & 1) == 0) {
      v10 = PxGetFoundation();
      return (*(__int64 (**)(__int64, __int64, const char*, __int64,
                             const char*))(*(_QWORD*)v10 + 88LL))(
          v10, 8,
          "/Inside/Lib/PhysX/O/physx/source/physx/src\\NpRigidActorTemplate.h",
          262,
          "PxRigidActor::detachShape: shape is not attached to this actor!");
    }
  }
  return result;
}

#pragma GCC visibility pop
