#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 PxGetBroadcastAllocator(_QWORD);
__int64 PxGetFoundation(_QWORD);
__int64 physx_Gu_AABBTreeBounds_release(_QWORD);
__int64 physx_Gu_AABBTreeUpdateMap_initMap(_QWORD, _QWORD, _QWORD);
__int64 physx_Gu_AABBTreeUpdateMap_invalidate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 physx_Gu_AABBTree_AABBTree(void);
__int64 physx_Gu_AABBTree_Destroy_AABBTree(_QWORD);
__int64 physx_Gu_AABBTree_build(_QWORD, _QWORD, _QWORD);
__int64 physx_Gu_BVHPartialRefitData_markNodeForRefit(_QWORD, _QWORD);
__int64 physx_Gu_BVHPartialRefitData_refitMarkedNodes(_QWORD, _QWORD);
__int64 physx_Gu_ExtendedBucketPruner_refitMarkedNodes(_QWORD, _QWORD);
__int64 physx_Gu_ExtendedBucketPruner_removeMarkedObjects(_QWORD, _QWORD);
__int64 physx_Gu_NodeAllocator_release(_QWORD);
__int64 physx_Gu_AABBPruner_commit(__int64 result);

__int64 physx_Gu_AABBPruner_commit(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  unsigned int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  unsigned int v11;
  __int64 v12;
  unsigned int* v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned int v27;
  __int64 v28;
  const char* v29;
  __int64 v30;
  unsigned int v31;
  char v32;
  __int64 v33;
  char v34;
  __int64 v35;
  unsigned int v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;
  __int64 v42;
  __int64 v43;

  v1 = *(_DWORD*)(result + 280);
  v2 = result;
  if ((*(_BYTE*)(result + 417) & 1) == 0 && v1 != 6) {
    return result;
  }
  v3 = *(_QWORD*)(result + 40);
  *(_BYTE*)(result + 417) = 0;
  if (v3 != 0) {
    if ((*(_BYTE*)(result + 416) & 1) != 0) {
      if (v1 != 6) {
        if (*(_DWORD*)(result + 304) != 0) {
          physx_Gu_ExtendedBucketPruner_refitMarkedNodes(
              result + 128, *(_QWORD*)(result + 312));
          physx_Gu_BVHPartialRefitData_refitMarkedNodes(v3,
                                                        *(_QWORD*)(v2 + 312));
        }
        goto LABEL_39;
      }
      physx_Gu_AABBTree_Destroy_AABBTree(v3);
      v4 = PxGetBroadcastAllocator(0);
      (*(void (**)(__int64, __int64))(*(_QWORD*)v4 + 24LL))(v4, v3);
      *(_QWORD*)(v2 + 40) = 0;
      physx_Gu_AABBTreeBounds_release(v2 + 96);
      v5 = *(_DWORD*)(v2 + 116);
      v6 = *(_DWORD*)(v2 + 284);
      *(_DWORD*)(v2 + 280) = 0;
      if (v5 <= v6) {
        if (v5 >= v6) {
        LABEL_16:
          v9 = *(_QWORD*)(v2 + 88);
          *(_QWORD*)(v2 + 88) = 0;
          *(_QWORD*)(v2 + 40) = v9;
          physx_Gu_NodeAllocator_release(v2 + 8);
          v10 = *(_DWORD*)(v2 + 304);
          v11 = *(_DWORD*)(v2 + 112);
          if (v10 <= v11) {
            v12 = v11;
          }
          else {
            v12 = v10;
          }
          physx_Gu_AABBTreeUpdateMap_initMap(v2 + 384, v12,
                                             *(_QWORD*)(v2 + 40));
          if (*(_DWORD*)(v2 + 432) != 0) {
            v13 = *(unsigned int**)(v2 + 424);
            do {
              v14 = *v13;
              if (*(_DWORD*)(v2 + 392) > (unsigned int)v14) {
                v15 =
                    *(_DWORD*)(*(_QWORD*)(v2 + 384) + 4LL * (unsigned int)v14);
                if (v15 != -1) {
                  physx_Gu_BVHPartialRefitData_markNodeForRefit(
                      *(_QWORD*)(v2 + 40), v15);
                  v14 = *v13;
                }
              }
              physx_Gu_AABBTreeUpdateMap_invalidate(v2 + 384, v14, v13[1],
                                                    *(_QWORD*)(v2 + 40));
              v13 += 2;
            } while ((unsigned __int64)v13 <
                     *(_QWORD*)(v2 + 424) +
                         8 * (unsigned __int64)*(unsigned int*)(v2 + 432));
          }
          v16 = *(unsigned int*)(v2 + 448);
          *(_DWORD*)(v2 + 432) = 0;
          if ((_DWORD)v16 != 0) {
            v17 = 4 * v16;
            v18 = 0;
            do {
              v19 = *(unsigned int*)(*(_QWORD*)(v2 + 440) + v18);
              if (*(_DWORD*)(v2 + 392) > (unsigned int)v19) {
                v20 = *(unsigned int*)(*(_QWORD*)(v2 + 384) + 4 * v19);
                if ((_DWORD)v20 != -1) {
                  physx_Gu_BVHPartialRefitData_markNodeForRefit(
                      *(_QWORD*)(v2 + 40), v20);
                }
              }
              v18 += 4;
            } while (v17 != v18);
          }
          v21 = *(_QWORD*)(v2 + 40);
          v22 = *(_DWORD*)(v2 + 304);
          *(_DWORD*)(v2 + 448) = 0;
          if (v21 != 0 && v22 != 0) {
            physx_Gu_ExtendedBucketPruner_refitMarkedNodes(
                v2 + 128, *(_QWORD*)(v2 + 312));
            physx_Gu_BVHPartialRefitData_refitMarkedNodes(v21,
                                                          *(_QWORD*)(v2 + 312));
          }
          physx_Gu_ExtendedBucketPruner_removeMarkedObjects(
              v2 + 128, (unsigned int)(*(_DWORD*)(v2 + 120) - 1));
          v24 = *(_QWORD*)(v2 + 128);
          if (v24 != 0) {
            LODWORD(v24) =
                (*(__int64 (**)(__int64))(*(_QWORD*)v24 + 80LL))(v24);
          }
          *(_BYTE*)(v2 + 418) = (_DWORD)v24 + *(_DWORD*)(v2 + 196) != 0;
        LABEL_39:
          result = *(_QWORD*)(v2 + 128);
          if (result != 0) {
            return (*(__int64 (**)(__int64))(*(_QWORD*)result + 72LL))(result);
          }
          return result;
        }
        v7 = -1;
      }
      else {
        v7 = 1;
      }
      *(_DWORD*)(v2 + 292) += v7;
      goto LABEL_16;
    }
    v8 = PxGetFoundation(result);
    (*(void (**)(__int64, __int64, const char*, __int64, const char*))(
        *(_QWORD*)v8 + 88LL))(
        v8, 128,
        "/Inside/Lib/PhysX/O/physx/source/geomutils/src/GuAABBPruner.cpp", 343,
        "SceneQuery static AABB Tree rebuilt, because a shape attached to a "
        "static actor was added, removed or moved, and P"
        "xSceneQueryDesc::staticStructure is set to eSTATIC_AABB_TREE.");
  }
  v43 = v42;
  v25 = *(_QWORD*)(v2 + 40);
  if (v25 != 0) {
    physx_Gu_AABBTree_Destroy_AABBTree(*(_QWORD*)(v2 + 40));
    v26 = PxGetBroadcastAllocator(0);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v26 + 24LL))(v26, v25);
    *(_QWORD*)(v2 + 40) = 0;
  }
  v27 = *(_DWORD*)(v2 + 304);
  if (v27 != 0) {
    v28 = PxGetBroadcastAllocator(&v38);
    if ((_BYTE)v38 != 0) {
      v29 = "static const char "
            "*physx::PxReflectionAllocator<physx::Gu::AABBTree>::getName(bool) "
            "[T = physx::Gu::AABBTree]";
    }
    else {
      v29 = "<allocation names disabled>";
    }
    v30 = (*(__int64 (**)(__int64, __int64, const char*, const char*, __int64))(
        *(_QWORD*)v28 + 16LL))(
        v28, 72, v29,
        "/Inside/Lib/PhysX/O/physx/source/geomutils/src/GuAABBPruner.cpp", 663);
    physx_Gu_AABBTree_AABBTree();
    v31 = *(_DWORD*)(v2 + 296);
    *(_QWORD*)(v2 + 40) = v30;
    v39 = v2 + 312;
    v40 = 0;
    v38 = __PAIR64__(v27, v31);
    v41 = *(_DWORD*)(v2 + 300);
    v32 = physx_Gu_AABBTree_build(v30, &v38, v2 + 8);
    v33 = v40;
    v34 = v32;
    v38 = 0;
    v39 = 0;
    if (v40 != 0) {
      v35 = PxGetBroadcastAllocator(0);
      (*(void (**)(__int64, __int64))(*(_QWORD*)v35 + 24LL))(v35, v33);
    }
    if (*(_BYTE*)(v2 + 416) == 1) {
      v36 = *(_DWORD*)(v2 + 112);
      if (v27 <= v36) {
        v37 = v36;
      }
      else {
        v37 = v27;
      }
      physx_Gu_AABBTreeUpdateMap_initMap(v2 + 384, v37, *(_QWORD*)(v2 + 40));
    }
  }
  else {
    v34 = 1;
  }
  return v34 & 1;
}

#pragma GCC visibility pop
