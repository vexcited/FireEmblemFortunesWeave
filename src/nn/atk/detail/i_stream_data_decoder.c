#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 PxGetFoundation(_QWORD);
__int64 physx_NpFactory_destroyInstance(_QWORD, _QWORD);
__int64 physx_PxGeometryQuery_computeGeomBounds(_QWORD);
__int64 physx_Pxstrnicmp(_QWORD);
extern __int64 GameData_21a35a8;
extern __int64 GameData_21a35b8;
extern __int64 GameData_21a3678;
extern int GameData_21a35b0;
__int64 IStreamDataDecoder_Unknown4(__int64 result, __int64 a2);
__int64 IStreamDataDecoder_2cbf90(__int64 a1);

__int64 IStreamDataDecoder_Unknown39()
{
  return *(unsigned int*)(GameData_21a35b8 + 596);
}

__int64 IStreamDataDecoder_Unknown4(__int64 result, __int64 a2)
{
  int v2;

  if (--GameData_21a35b0 == 0) {
    physx_NpFactory_destroyInstance(result, a2);
    if (GameData_21a35a8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21a35a8 + 8LL))(
          GameData_21a35a8);
      GameData_21a35a8 = 0;
    }
    result = GameData_21a3678;
    v2 = *(_DWORD*)(GameData_21a3678 + 408);
    if (v2 != 0) {
      *(_DWORD*)(GameData_21a3678 + 408) = v2 - 1;
    }
    else {
      return (*(__int64 (**)(__int64, __int64, const char*, __int64,
                             const char*))(*(_QWORD*)GameData_21a3678 + 88LL))(
          GameData_21a3678, 8,
          "/Inside/Lib/PhysX/O/physx/source/foundation/FdFoundation.cpp", 316,
          "Foundation: Invalid deregistration detected.");
    }
  }
  return result;
}

__int64 IStreamDataDecoder_2cbf90(__int64 a1)
{
  __int64 v1;

  v1 = PxGetFoundation(a1);
  return (*(__int64 (**)(__int64, __int64, const char*, __int64, const char*))(
      *(_QWORD*)v1 + 88LL))(
      v1, 8, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpConstraint.cpp", 148,
      "PxConstraint creation not allowed while simulation is running. Call "
      "will be ignored.");
}

#pragma GCC visibility pop
