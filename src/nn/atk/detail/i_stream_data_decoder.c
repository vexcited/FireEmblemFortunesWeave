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
__int64 IStreamDataDecoder_2bc200(__int64 result, __int64 a2, __int64 a3,
                                  unsigned int a4);
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

__int64 IStreamDataDecoder_2bc200(__int64 result, __int64 a2, __int64 a3,
                                  unsigned int a4)
{
  __int64 v4;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned int v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  if (*(_BYTE*)(result + 152) == 1) {
    v4 = result;
    physx_Pxstrnicmp(*(_QWORD*)(result + 80));
    v8 = *(unsigned int*)(v4 + 140);
    if ((_DWORD)v8 != 0) {
      v9 = *(_QWORD*)(v4 + 96);
      v10 = 0;
      v11 = (~(a2 << 32) + a2) ^ ((unsigned __int64)(~(a2 << 32) + a2) >> 22);
      v12 = 9 * ((v11 + ~(v11 << 13)) ^ ((v11 + ~(v11 << 13)) >> 8));
      v13 = (v12 ^ (v12 >> 15)) + ~((v12 ^ (v12 >> 15)) << 27);
      v14 = (v13 >> 31) ^ v13;
      do {
        v15 = (_QWORD*)(v9 + 16 * v10);
        v16 = v15[1];
        if ((*(_BYTE*)(v16 + 56) & (unsigned __int8)a4) != 0) {
          if (*(_BYTE*)(v16 + 57) == 1) {
            if (*(_DWORD*)(v16 + 52) == 0) {
              goto LABEL_5;
            }
            v17 = *(unsigned int*)(*(_QWORD*)(v16 + 24) +
                                   4LL * ((*(_DWORD*)(v16 + 36) - 1) & v14));
            if ((_DWORD)v17 == -1) {
              goto LABEL_5;
            }
            v19 = *(_QWORD*)(v16 + 8);
            v18 = *(_QWORD*)(v16 + 16);
            while (*(_QWORD*)(v19 + 8 * v17) != a2) {
              v17 = *(unsigned int*)(v18 + 4 * v17);
              if ((_DWORD)v17 == -1) {
                goto LABEL_5;
              }
            }
          }
          (**(void (***)(_QWORD, __int64, __int64, _QWORD))*v15)(*v15, a2, a3,
                                                                 a4);
        }
      LABEL_5:
        ++v10;
      } while (v10 != v8);
    }
    return physx_PxGeometryQuery_computeGeomBounds(*(_QWORD*)(v4 + 80));
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
