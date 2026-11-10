#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_5340f0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_534140(_QWORD, _QWORD);
__int64 PxGetFoundation(_QWORD);
__int64 physx_ConvexMeshBuilder_build(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 physx_ConvexMeshBuilder_checkExtentRadiusRatio(_QWORD);
__int64 physx_PxSDFDesc_isValid(_QWORD);
__int64 cookConvexMeshInternal(__int64 a1, __int64* a2, __int64 a3, __int64 a4,
                               _DWORD* a5);

__int64 cookConvexMeshInternal(__int64 a1, __int64* a2, __int64 a3, __int64 a4,
                               _DWORD* a5)
{
  unsigned int v5;
  __int16 v6;
  unsigned int v7;
  __int64* v8;
  unsigned __int16 v9;
  __int64 v10;
  _DWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  char v15;
  char v16;
  const char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int16 v22;
  __int64 v23;
  _BOOL4 v24;
  __int64 v25;
  __int64 v26;
  _DWORD* v27;
  __int64 v28;
  int v29;
  char v30;
  int* v31;
  __int64 v32;
  __int64 v33;
  int v34;
  __int64 v35;
  __int64 v36;
  const char* v37;
  unsigned int v38;
  __int64 v39;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int16 v47;
  _BYTE v48[14];
  __int64 vars0;
  __int64 vars8;
  __int64 vars20;
  __int64 vars28;

  if (a5 != nullptr) {
    *a5 = 3;
  }
  v5 = *((_DWORD*)a2 + 3);
  if (v5 < 3 || v5 >= 0x10000 && (a2[6] & 1) != 0 || *a2 == 0 ||
      *((_DWORD*)a2 + 2) < 0xCu || *((unsigned __int16*)a2 + 27) < 4u) {
    goto LABEL_29;
  }
  if (a2[2] != 0) {
    if (*((_DWORD*)a2 + 7) < 4u || a2[4] == 0) {
      goto LABEL_29;
    }
    v6 = *((_WORD*)a2 + 24);
    v7 = (v6 & 1) != 0 ? 2 : 4;
    if (*((_DWORD*)a2 + 10) < v7 || *((_DWORD*)a2 + 6) <= 0x13u) {
      goto LABEL_29;
    }
  }
  else {
    v6 = *((_WORD*)a2 + 24);
    if ((v6 & 2) == 0) {
      goto LABEL_29;
    }
  }
  v8 = (__int64*)((char*)a2 + 50);
  v9 = *((_WORD*)a2 + 25) - 256;
  if ((v6 & 0x20) == 0) {
    if (v9 >= 0xFF08u) {
      goto LABEL_23;
    }
  LABEL_29:
    v17 = "Cooking::cookConvexMesh: user-provided convex mesh descriptor is "
          "invalid!";
    v18 = 53;
    goto LABEL_30;
  }
  if (v9 < 0xFF04u) {
    goto LABEL_29;
  }
LABEL_23:
  if ((unsigned int)*((unsigned __int16*)a2 + 26) - 256 < 0xFFFFFF04) {
    goto LABEL_29;
  }
  if (a2[7] != 0) {
    v10 = a1;
    v11 = a5;
    v12 = a3;
    v13 = a4;
    v14 = a2;
    v15 = physx_PxSDFDesc_isValid(a2[7]);
    a2 = v14;
    a4 = v13;
    a3 = v12;
    a5 = v11;
    v16 = v15;
    a1 = v10;
    if ((v16 & 1) == 0) {
      goto LABEL_29;
    }
  }
  if (*(float*)a1 <= 0.0f) {
    v17 = "Cooking::cookConvexMesh: provided cooking parameter areaTestEpsilon "
          "is invalid!";
    v18 = 56;
    goto LABEL_30;
  }
  if (*(float*)(a1 + 4) < 0.0f) {
    v17 = "Cooking::cookConvexMesh: provided cooking parameter planeTolerance "
          "is invalid!";
    v18 = 59;
  LABEL_30:
    vars20 = vars0;
    vars28 = vars8;
    v37 = v17;
    v38 = v18;
    v39 = PxGetFoundation(v18);
    return (*(__int64 (**)(__int64, __int64, const char*, _QWORD, const char*))(
        *(_QWORD*)v39 + 88LL))(v39, 4,
                               "/Inside/Lib/PhysX/O/physx/source/geomutils/src/"
                               "cooking/GuCookingConvexMesh.cpp",
                               v38, v37);
  }
  v19 = a2[3];
  v43 = a2[2];
  v44 = v19;
  v20 = a2[5];
  v45 = a2[4];
  v46 = v20;
  v21 = a2[1];
  v41 = *a2;
  v42 = v21;
  v22 = *((_WORD*)a2 + 24);
  *(_QWORD*)&v48[6] = *(__int64*)((char*)v8 + 6);
  v23 = *v8;
  v47 = v22;
  *(_QWORD*)v48 = v23;
  if ((v22 & 2) != 0) {
    v45 = 0;
    v46 = 0;
    v43 = 0;
    v44 = 0;
    v25 = a1;
    v26 = a3;
    v27 = a5;
    v28 = a4;
    v47 = v22 & 0xFFFE;
    v29 = (*(__int64 (**)(__int64))(*(_QWORD*)a4 + 16LL))(a4);
    if ((v29 | 2) == 2) {
      v24 = v29 == 2;
      (*(void (**)(__int64, __int64*))(*(_QWORD*)v28 + 24LL))(v28, &v41);
      a4 = v28;
      a5 = v27;
      a3 = v26;
      a1 = v25;
    }
    else {
      v24 = false;
      a5 = v27;
      if (v27 != nullptr) {
        a3 = v26;
        a1 = v25;
        a4 = v28;
        if (v29 == 1) {
          v30 = 0;
          *v27 = 1;
          return v30 & 1;
        }
      }
      else {
        a3 = v26;
        a1 = v25;
        a4 = v28;
      }
    }
    if ((v29 | 2) != 2) {
      goto LABEL_59;
    }
  }
  else {
    v24 = false;
  }
  if (HIDWORD(v42) < 0x100) {
    if (HIDWORD(v44) >= 0x100) {
      v30 = GameRoutine_5340f0(101,
                               "Cooking::cookConvexMesh: user-provided hull "
                               "must have less than 256 faces!",
                               a3, a4, a5);
      return v30 & 1;
    }
    if (*(_BYTE*)(a1 + 14) == 1) {
      if (HIDWORD(v42) >= 0x41) {
        v30 = GameRoutine_5340f0(
            106,
            "Cooking::cookConvexMesh: GPU-compatible user-provided hull must "
            "have less than 65 vertices!",
            a3, a4, a5);
        return v30 & 1;
      }
      if (HIDWORD(v44) >= 0x41) {
        v30 = GameRoutine_5340f0(
            109,
            "Cooking::cookConvexMesh: GPU-compatible user-provided hull must "
            "have less than 65 faces!",
            a3, a4, a5);
        return v30 & 1;
      }
    }
    v31 = a5;
    v32 = a1;
    v33 = a3;
    if ((physx_ConvexMeshBuilder_build(a3, &v41, *(unsigned int*)(a1 + 56), 0,
                                       a4) &
         1) != 0) {
      if (v24) {
        v34 = 2;
      }
      else {
        v34 = 0;
      }
      if (*(_BYTE*)(v32 + 14) == 1) {
        v35 = physx_ConvexMeshBuilder_checkExtentRadiusRatio(v33);
        if ((v35 & 1) == 0) {
          GameRoutine_534140(v35, v36);
          v34 = 4;
        }
      }
      if (v31 != nullptr) {
        *v31 = v34;
      }
      v30 = 1;
      return v30 & 1;
    }
  LABEL_59:
    v30 = 0;
    return v30 & 1;
  }
  v30 = GameRoutine_5340f0(98,
                           "Cooking::cookConvexMesh: user-provided hull must "
                           "have less than 256 vertices!",
                           a3, a4, a5);
  return v30 & 1;
}

#pragma GCC visibility pop
