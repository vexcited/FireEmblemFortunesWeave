#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 PxGetBroadcastAllocator(_BYTE*);
__int64 PxGetFoundation();
__int64 memset(__int64, int, unsigned __int64);
__int64 physx_Gu_EdgeList_Destroy_EdgeList(__int64 result);
__int64 physx_Gu_EdgeList_EdgeList(__int64 result);
__int64 physx_Gu_EdgeList_init(_QWORD*, unsigned int*);
extern char GameData_1a9f09e;
__int64 physx_TriangleMeshBuilder_createSharedEdgeData(__int64 result, char a2,
                                                       char a3);

__int64 physx_TriangleMeshBuilder_createSharedEdgeData(__int64 result, char a2,
                                                       char a3)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  const char* v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v19;
  unsigned __int64 i;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int* v26;
  int v27;
  __int64 v28;
  __int64 v29;
  unsigned int* v30;
  __int64 v31;
  int* v32;
  __int64 v33;
  __int64 v34;
  int v35;
  int v36;
  unsigned int v37;
  int* v38;
  int v39;
  int v40;
  bool v41;
  bool v42;
  int v43;
  int v45;
  int v47;
  int v50;
  unsigned int v51;
  int* v52;
  int v53;
  int v54;
  bool v55;
  bool v56;
  int v57;
  bool v58;
  bool v59;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  struct {
    unsigned int v65;
    char gap12_[4];
    __int64 v66;
    __int64 v67;
    __int16 v68;
    char gap34_[6];
    __int64 v69;
    int v70;
  } v65_;
  struct {
    char gap56_[4];
    _BYTE v71[4];
    __int64 vars0;
    __int64 vars8;
    char gap80_[16];
    __int64 vars20;
    __int64 vars28;
  } v71_;

  v4 = result;
  if ((a2 & 1) == 0 && (a3 & 1) == 0) {
    return result;
  }
  v5 = *(_QWORD*)(result + 24);
  v6 = *(unsigned int*)(v5 + 268);
  if ((unsigned int)v6 >> 30 != 0) {
    v71_.vars20 = v71_.vars0;
    v71_.vars28 = v71_.vars8;
    v64 = PxGetFoundation();
    return (*(__int64 (**)(__int64, __int64, const char*, __int64,
                           const char*))(*(_QWORD*)v64 + 88LL))(
        v64, 4,
        "/Inside/Lib/PhysX/O/physx/source/geomutils/src/cooking/"
        "GuCookingTriangleMesh.cpp",
        270, "TriangleMesh: mesh is too big for this algo!");
  }
  if ((_DWORD)v6 != 0) {
    v8 = PxGetBroadcastAllocator(nullptr);
    v9 = (*(__int64 (**)(__int64, unsigned __int64, char*, const char*,
                         __int64))(*(_QWORD*)v8 + 16LL))(
        v8, v6, &GameData_1a9f09e,
        "/Inside/Lib/PhysX/O/physx/source/geomutils/src/cooking/"
        "GuCookingTriangleMesh.cpp",
        274);
    *(_QWORD*)(*(_QWORD*)(v4 + 24) + 288LL) = v9;
    memset(v9, 0, v6);
    v5 = *(_QWORD*)(v4 + 24);
  }
  else {
    *(_QWORD*)(v5 + 288) = 0;
  }
  v10 = *(_QWORD*)(v5 + 272);
  v65_.v70 = 1036831949;
  v65_.v65 = *(_DWORD*)(v5 + 268);
  if ((*(_BYTE*)(v5 + 12) & 2) != 0) {
    v11 = 0;
  }
  else {
    v11 = v10;
  }
  if ((*(_BYTE*)(v5 + 12) & 2) != 0) {
    v12 = v10;
  }
  else {
    v12 = 0;
  }
  v65_.v66 = v11;
  v65_.v67 = v12;
  v65_.v68 = 257;
  v65_.v69 = *(_QWORD*)(v5 + 24);
  v13 = PxGetBroadcastAllocator(v71_.v71);
  if (v71_.v71[0] != 0) {
    v14 = "static const char "
          "*physx::PxReflectionAllocator<physx::Gu::EdgeList>::getName(bool) "
          "[T = physx::Gu::EdgeList]";
  }
  else {
    v14 = "<allocation names disabled>";
  }
  v15 = (*(__int64 (**)(__int64, __int64, const char*, const char*, __int64))(
      *(_QWORD*)v13 + 16LL))(v13, 48, v14,
                             "/Inside/Lib/PhysX/O/physx/source/geomutils/src/"
                             "cooking/GuCookingTriangleMesh.cpp",
                             243);
  physx_Gu_EdgeList_EdgeList(v15);
  result = physx_Gu_EdgeList_init((_QWORD*)v15, &v65_.v65);
  if ((result & 1) != 0) {
    v16 = *(_QWORD*)(v4 + 24);
    v17 = *(_DWORD*)(v15 + 16);
    *(_QWORD*)(v4 + 8) = v15;
    if (v17 == *(_DWORD*)(v16 + 268) && v17 != 0) {
      v19 = 0;
      for (i = 0; i < *(unsigned int*)(v15 + 16); ++i) {
        while (1) {
          v21 = *(_QWORD*)(v15 + 24);
          if ((*(_DWORD*)(v21 + v19) & 0x80000000) == 0) {
            break;
          }
          *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v4 + 24) + 288LL) + i) |= 8u;
          v22 = v21 + v19;
          if ((*(_DWORD*)(v22 + 4) & 0x80000000) != 0) {
            goto LABEL_24;
          }
        LABEL_30:
          if ((*(_DWORD*)(v22 + 8) & 0x80000000) == 0) {
            goto LABEL_25;
          }
        LABEL_31:
          *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v4 + 24) + 288LL) + i) |= 0x20u;
          v15 = *(_QWORD*)(v4 + 8);
          ++i;
          v19 += 12;
          if (i >= *(unsigned int*)(v15 + 16)) {
            goto LABEL_34;
          }
        }
        v22 = v21 + v19;
        if ((*(_DWORD*)(v22 + 4) & 0x80000000) == 0) {
          goto LABEL_30;
        }
      LABEL_24:
        *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v4 + 24) + 288LL) + i) |= 0x10u;
        if ((*(_DWORD*)(v22 + 8) & 0x80000000) != 0) {
          goto LABEL_31;
        }
      LABEL_25:
        v15 = *(_QWORD*)(v4 + 8);
        v19 += 12;
      }
    }
  }
  else {
    physx_Gu_EdgeList_Destroy_EdgeList(v15);
    v23 = PxGetBroadcastAllocator(nullptr);
    result =
        (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v23 + 24LL))(v23, v15);
    *(_QWORD*)(v4 + 8) = 0;
  }
LABEL_34:
  if ((a2 & 1) != 0) {
    if ((_DWORD)v6 != 0) {
      v24 = PxGetBroadcastAllocator(nullptr);
      v25 = (*(__int64 (**)(__int64, unsigned __int64, char*, const char*,
                            __int64))(*(_QWORD*)v24 + 16LL))(
          v24, 12 * v6, &GameData_1a9f09e,
          "/Inside/Lib/PhysX/O/physx/source/geomutils/src/cooking/"
          "GuCookingTriangleMesh.cpp",
          303);
    }
    else {
      v25 = 0;
    }
    *(_QWORD*)(*(_QWORD*)(v4 + 24) + 280LL) = v25;
    result = memset(v25, -1, 12 * v6);
    v26 = *(int**)(v4 + 8);
    v27 = *v26;
    if (*v26 != 0) {
      v28 = *((_QWORD*)v26 + 1);
      v29 = *((_QWORD*)v26 + 5);
      v30 = (unsigned int*)(*((_QWORD*)v26 + 4) + 4LL);
      v31 = *(_QWORD*)(v4 + 24);
      v32 = (int*)(v28 + 4);
      do {
        if (*((unsigned __int16*)v30 - 1) >= 2u) {
          v34 = *v30;
          v35 = *(v32 - 1);
          v36 = *v32;
          v37 = *(_DWORD*)(v29 + 4 * v34);
          v38 = (int*)(v10 + 12LL * v37);
          v40 = *v38;
          v39 = v38[1];
          v41 = *v38 == v35 && v39 == v36;
          if (v41 || (v40 == v36 ? (v42 = v39 == v35) : (v42 = false), v42)) {
            v50 = 0;
          }
          else {
            v43 = v38[2];
            if (v43 == v35 && v39 == v36) {
              v45 = 1;
            }
            else {
              v45 = 255;
            }
            if (v39 == v35 && v43 == v36) {
              v47 = 1;
            }
            else {
              v47 = v45;
            }
            if (v40 == v36 && v43 == v35) {
              v47 = 2;
            }
            if (v40 == v35 && v43 == v36) {
              v50 = 2;
            }
            else {
              v50 = v47;
            }
          }
          v51 = *(_DWORD*)(v29 + 4LL * (unsigned int)(v34 + 1));
          v52 = (int*)(v10 + 12LL * v51);
          v54 = *v52;
          v53 = v52[1];
          v55 = *v52 == v35 && v53 == v36;
          if (v55 || (v54 == v36 ? (v56 = v53 == v35) : (v56 = false), v56)) {
            result = 0;
          }
          else {
            v57 = v52[2];
            v58 = v54 == v35 && v57 == v36;
            if (v58 || (v54 == v36 ? (v59 = v57 == v35) : (v59 = false), v59)) {
              result = 2;
            }
            else if (v53 == v35 && v57 == v36) {
              result = 1;
            }
            else if (v57 == v35 && v53 == v36) {
              result = 1;
            }
            else {
              result = 255;
            }
          }
          v33 = *(_QWORD*)(v31 + 280);
          *(_DWORD*)(v33 + 4LL * (v50 + 3 * v37)) = v51;
          *(_DWORD*)(v33 + 4LL * ((unsigned int)result + 3 * v51)) = v37;
        }
        --v27;
        v30 += 2;
        v32 += 2;
      } while (v27 != 0);
    }
  }
  if ((a3 & 1) == 0) {
    v62 = *(_QWORD*)(*(_QWORD*)(v4 + 24) + 288LL);
    if (v62 != 0) {
      v63 = PxGetBroadcastAllocator(nullptr);
      result =
          (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v63 + 24LL))(v63, v62);
      *(_QWORD*)(*(_QWORD*)(v4 + 24) + 288LL) = 0;
    }
  }
  return result;
}

#pragma GCC visibility pop
