#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 PxGetFoundation();
__int64 physx_ConvexMeshBuilder_computeGaussMaps(__int64*);
__int64 physx_ConvexMeshBuilder_computeSDF(__int64*, __int64);
__int64 physx_ConvexMeshBuilder_loadConvexHull(__int64, __int64*, __int64);
__int64 physx_PxSDFDesc_isValid(__int64);
float physx_ConvexMeshBuilder_computeInternalObjects(__int64);
float physx_Gu_computeBoundsAroundVertices(__int64, int, __int64);
__int64 physx_ConvexMeshBuilder_build(__int64 a1, __int64 a2, unsigned int a3,
                                      char a4, __int64 a5);

__int64 physx_ConvexMeshBuilder_build(__int64 a1, __int64 a2, unsigned int a3,
                                      char a4, __int64 a5)
{

#pragma clang fp contract(off)
  unsigned int v5;
  __int16 v7;
  unsigned int v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  char v12;
  unsigned int v13;
  __int64 v14;
  char v15;
  char v16;
  unsigned int v17;
  char v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  __int64 v27;
  struct {
    float v29[2];
    float v30;
    float v31;
    float v32;
    float v33;
    __int64 v34;
    __int64 v35;
    char gap48_[32];
    __int64 vars10;
    __int64 vars18;
  } v29_;

  v5 = *(_DWORD*)(a2 + 12);
  if (v5 < 3 || v5 >= 0x10000 && (*(_WORD*)(a2 + 48) & 1) != 0) {
    goto LABEL_9;
  }
  if (*(_QWORD*)a2 == 0) {
    goto LABEL_9;
  }
  if (*(_DWORD*)(a2 + 8) < 0xCu || *(unsigned __int16*)(a2 + 54) < 4u) {
    goto LABEL_9;
  }
  if (*(_QWORD*)(a2 + 16) != 0) {
    if (*(_DWORD*)(a2 + 28) < 4u || *(_QWORD*)(a2 + 32) == 0) {
      goto LABEL_9;
    }
    v7 = *(_WORD*)(a2 + 48);
    v8 = (v7 & 1) != 0 ? 2 : 4;
    if (*(_DWORD*)(a2 + 40) < v8 || *(_DWORD*)(a2 + 24) <= 0x13u) {
      goto LABEL_9;
    }
  }
  else {
    v7 = *(_WORD*)(a2 + 48);
    if ((v7 & 2) == 0) {
    LABEL_9:
      v29_.vars10 = v29_.v34;
      v29_.vars18 = v29_.v35;
      v27 = PxGetFoundation();
      return (*(__int64 (**)(__int64, __int64, const char*, __int64,
                             const char*))(*(_QWORD*)v27 + 88LL))(
          v27, 4,
          "/Inside/Lib/PhysX/O/physx/source/geomutils/src/cooking/"
          "GuCookingConvexMeshBuilder.cpp",
          66, "Gu::ConvexMesh::loadFromDesc: desc.isValid() failed!");
    }
  }
  if ((v7 & 0x20) != 0) {
    v9 = 65284;
  }
  else {
    v9 = 65288;
  }
  if (v9 > (unsigned __int16)(*(_WORD*)(a2 + 50) - 256)) {
    goto LABEL_9;
  }
  if ((unsigned int)*(unsigned __int16*)(a2 + 52) - 256 < 0xFFFFFF04) {
    goto LABEL_9;
  }
  if (*(_QWORD*)(a2 + 56) != 0) {
    v10 = a1;
    v11 = a2;
    v12 = a4;
    v13 = a3;
    v14 = a5;
    v15 = physx_PxSDFDesc_isValid(*(_QWORD*)(a2 + 56));
    a5 = v14;
    a3 = v13;
    a4 = v12;
    a2 = v11;
    v16 = v15;
    a1 = v10;
    if ((v16 & 1) == 0) {
      goto LABEL_9;
    }
  }
  v17 = a3;
  v18 = a4;
  v19 = a1;
  v20 = a2;
  if ((physx_ConvexMeshBuilder_loadConvexHull(a1, (__int64*)a2, a5) & 1) == 0) {
    return 0;
  }
  physx_Gu_computeBoundsAroundVertices(
      (__int64)v29_.v29, *(unsigned __int8*)(v19 + 118), *(_QWORD*)v19);
  v21 = *(unsigned __int8*)(v19 + 118);
  v22 = (float)(v29_.v29[1] + v29_.v32) * 0x1.0000000000000p-1f;
  v23 = (float)(v29_.v30 + v29_.v33) * 0x1.0000000000000p-1f;
  v24 = (float)(v29_.v31 - v29_.v29[0]) * 0x1.0000000000000p-1f;
  v25 = (float)(v29_.v32 - v29_.v29[1]) * 0x1.0000000000000p-1f;
  v26 = (float)(v29_.v33 - v29_.v30) * 0x1.0000000000000p-1f;
  *(float*)(v19 + 80) = (float)(v29_.v29[0] + v29_.v31) * 0x1.0000000000000p-1f;
  *(float*)(v19 + 84) = v22;
  *(float*)(v19 + 88) = v23;
  *(float*)(v19 + 92) = v24;
  *(float*)(v19 + 96) = v25;
  *(float*)(v19 + 100) = v26;
  if (v21 > v17) {
    physx_ConvexMeshBuilder_computeGaussMaps((__int64*)v19);
  }
  if ((v18 & 1) == 0) {
    physx_ConvexMeshBuilder_computeInternalObjects(v19);
    if (*(_QWORD*)(v20 + 56) != 0) {
      physx_ConvexMeshBuilder_computeSDF((__int64*)v19, v20);
    }
  }
  return 1;
}

#pragma GCC visibility pop
