#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void physx_NpScene_getFlags(PSEUDO_X8, _QWORD);
__int64 GameRoutine_2d0970(_QWORD, _QWORD);
__int64 GameRoutine_2d18c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 PxGetFoundation(_QWORD);
__int64 physx_Sc_BodyCore_isSleeping(_QWORD, long double);
__int64 physx_Sc_BodyCore_setWakeCounter(_QWORD, _QWORD, long double);
__int64 physx_NpRigidDynamic_addForce(__int64 a1, _DWORD* a2, unsigned int a3,
                                      int a4);

__int64 physx_NpRigidDynamic_addForce(__int64 a1, _DWORD* a2, unsigned int a3,
                                      int a4)
{
  __int64 v4;
  __int64 v9;
  __int64 result;
  long double v11;
  _BOOL4 v12;
  float v13;
  float v14;
  long double v15;
  __int64 v16;
  __int64 v17;
  _DWORD var14[17];

  v4 = *(_QWORD*)(a1 + 24);
  if (v4 != 0) {
    if (*(_BYTE*)(v4 + 1002) == 1 && *(_DWORD*)(v4 + 5788) != 2) {
      v16 = PxGetFoundation(a1);
      return (*(__int64 (**)(__int64, __int64, const char*, __int64,
                             const char*))(*(_QWORD*)v16 + 88LL))(
          v16, 8,
          "/Inside/Lib/PhysX/O/physx/source/physx/src/NpRigidDynamic.cpp", 303,
          "PxRigidDynamic::addForce() not allowed while simulation is running. "
          "Call will be ignored.");
    }
    if ((*(_WORD*)(a1 + 124) & 1) == 0) {
      v9 = a1 + 80;
      physx_NpScene_getFlags((void*)(var14), *(_QWORD*)(a1 + 24));
      if ((var14[0] & 0x20000) != 0 && *(_BYTE*)(v4 + 6009) == 1) {
        return GameRoutine_2d0970(
            313, "PxRigidDynamic::addForce(): it is illegal to call this "
                 "method if PxSceneFlag::eENABLE_DIRECT_GPU_API is enabled!");
      }
      goto LABEL_10;
    }
  LABEL_20:
    *(_QWORD*)&var14[13] = *(_QWORD*)&var14[5];
    *(_QWORD*)&var14[15] = *(_QWORD*)&var14[7];
    v17 = PxGetFoundation(307);
    return (*(__int64 (**)(__int64, __int64, const char*, __int64,
                           const char*))(*(_QWORD*)v17 + 88LL))(
        v17, 4, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpRigidDynamic.cpp",
        307, "PxRigidDynamic::addForce: Body must be non-kinematic!");
  }
  if ((*(_WORD*)(a1 + 124) & 1) != 0) {
    goto LABEL_20;
  }
  v9 = a1 + 80;
LABEL_10:
  GameRoutine_2d18c0(a1, a2, 0, a3);
  LODWORD(v11) = *a2;
  v12 = true;
  if (*(float*)a2 == 0.0) {
    LODWORD(v11) = a2[1];
    if (*(float*)&v11 == 0.0) {
      LODWORD(v11) = a2[2];
      v12 = *(float*)&v11 != 0.0;
    }
  }
  v13 = *(float*)(a1 + 236);
  v14 = *(float*)(*(_QWORD*)(a1 + 24) + 6056LL);
  result = physx_Sc_BodyCore_isSleeping(v9, v11);
  if (((v13 < v14) & (unsigned __int8)a4) != 0 ||
      ((v12 | a4) & (unsigned int)result & 1) != 0) {
    if (((v13 < v14) & (unsigned __int8)a4) != 0) {
      *(float*)&v15 = v14;
    }
    else {
      *(float*)&v15 = v13;
    }
    return physx_Sc_BodyCore_setWakeCounter(v9, 1, v15);
  }
  return result;
}

#pragma GCC visibility pop
