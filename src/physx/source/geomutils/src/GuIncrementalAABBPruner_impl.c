#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_308180(_QWORD);
__int64 PxGetBroadcastAllocator(_QWORD);
__int64 physx_Gu_IncrementalAABBTree_IncrementalAABBTree(void);
__int64 physx_Gu_IncrementalAABBTree_build(_QWORD, _QWORD, _QWORD);
__int64 physx_Gu_IncrementalAABBPruner_fullRebuildAABBTree(__int64 result);

__int64 physx_Gu_IncrementalAABBPruner_fullRebuildAABBTree(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  unsigned int v5;
  unsigned int v6;
  __int64 v7;
  const char* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;

  if (*(_QWORD*)(result + 8) == 0) {
    v16 = v1;
    v17 = v2;
    v3 = *(_DWORD*)(result + 16);
    if (v3 != 0) {
      v4 = result;
      v5 = v3 | (v3 >> 1) | ((v3 | (v3 >> 1)) >> 2);
      v6 = v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8);
      if ((v6 | HIWORD(v6)) + 1 > *(_DWORD*)(result + 104)) {
        GameRoutine_308180(result + 96);
      }
      v7 = PxGetBroadcastAllocator(&v12);
      if ((_BYTE)v12 != 0) {
        v8 = "static const char "
             "*physx::PxReflectionAllocator<physx::Gu::IncrementalAABBTree>::"
             "getName(bool) [T = physx::"
             "Gu::IncrementalAABBTree]";
      }
      else {
        v8 = "<allocation names disabled>";
      }
      v9 =
          (*(__int64 (**)(__int64, __int64, const char*, const char*, __int64))(
              *(_QWORD*)v7 + 16LL))(v7, 144, v8,
                                    "/Inside/Lib/PhysX/O/physx/source/"
                                    "geomutils/src/GuIncrementalAABBPruner.cpp",
                                    319);
      physx_Gu_IncrementalAABBTree_IncrementalAABBTree();
      *(_QWORD*)(v4 + 8) = v9;
      v15 = 0;
      LODWORD(v12) = 4;
      HIDWORD(v12) = v3;
      v13 = v4 + 24;
      v14 = 0;
      result = physx_Gu_IncrementalAABBTree_build(v9, &v12, v4 + 96);
      v10 = v14;
      v12 = 0;
      v13 = 0;
      if (v14 != 0) {
        v11 = PxGetBroadcastAllocator(0);
        return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v11 + 24LL))(v11,
                                                                         v10);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
