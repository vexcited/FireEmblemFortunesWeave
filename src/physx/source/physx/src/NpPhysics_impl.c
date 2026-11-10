#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* physx_NpFactory_createMaterial(__int64, float, float, float);
__int64 GameRoutine_2bcc00(__int64 result);
__int64 PxGetFoundation();
__int64 physx_NpScene_addMaterial(__int64 result, __int64);
__int64 physx_Pxstrnicmp(_QWORD);
__n128 physx_PxGeometryQuery_computeGeomBounds(_QWORD);
extern __int64* GameData_21355a8;
__int64 physx_NpPhysics_addMaterial(__int64 a1, float a2, float a3, float a4);

__int64 physx_NpPhysics_addMaterial(__int64 a1, float a2, float a3, float a4)
{

#pragma clang fp contract(off)
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v14;
  unsigned int v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  v5 = physx_NpFactory_createMaterial(*GameData_21355a8, a2, a3, a4);
  v6 = a1;
  v7 = (__int64)v5;
  if (v5 != nullptr) {
    v8 = v6;
    physx_Pxstrnicmp(*(_QWORD*)(v6 + 160));
    v14 = *(_DWORD*)(v8 + 48);
    if (v14 != 0) {
      v15 = v14 - 1;
      v16 = *(_DWORD*)(*(_QWORD*)(v8 + 40) + 4LL * v15);
      *(_DWORD*)(v8 + 48) = v15;
      if (v16 <= 0xFFFE) {
      LABEL_4:
        if (*(_DWORD*)(v8 + 64) <= v16) {
          GameRoutine_2bcc00(v8 + 32);
        }
        v17 = *(_QWORD*)(v8 + 56);
        *(_WORD*)(v7 + 56) = v16;
        *(_QWORD*)(v17 + 8LL * v16) = v7;
        v18 = *(unsigned int*)(v8 + 16);
        if ((_DWORD)v18 != 0) {
          v19 = 8 * v18;
          v20 = 0;
          do {
            physx_NpScene_addMaterial(*(_QWORD*)(*(_QWORD*)(v8 + 8) + v20), v7);
            v20 += 8;
          } while (v19 != v20);
        }
        goto LABEL_12;
      }
    }
    else {
      v16 = *(_DWORD*)(v8 + 32);
      *(_DWORD*)(v8 + 32) = v16 + 1;
      if (v16 <= 0xFFFE) {
        goto LABEL_4;
      }
    }
    v21 = PxGetFoundation();
    (*(void (**)(__int64, __int64, const char*, __int64, const char*))(
        *(_QWORD*)v21 + 88LL))(
        v21, 4, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpPhysics.cpp", 632,
        "PxPhysics::createMaterial: limit of 64K materials reached.");
    (**(void (***)(__int64))v7)(v7);
    v7 = 0;
  LABEL_12:
    physx_PxGeometryQuery_computeGeomBounds(*(_QWORD*)(v8 + 160));
  }
  return v7;
}

#pragma GCC visibility pop
