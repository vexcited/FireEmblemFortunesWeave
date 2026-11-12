#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_308180(_QWORD);
__int64 PxGetBroadcastAllocator(_QWORD);
__int64 physx_Gu_IncrementalAABBTree_IncrementalAABBTree(void);
__int64 physx_Gu_IncrementalAABBTree_build(_QWORD, _QWORD, _QWORD);
__int64 physx_Gu_IncrementalAABBPruner_fullRebuildAABBTree(__int64 result);
__int64 GameRoutine_308180_alt1(__int64 result,
                                unsigned int) __asm__("GameRoutine_308180");
__int64 PxGetBroadcastAllocator_alt1(_BYTE*) __asm__("PxGetBroadcastAllocator");
__int64 physx_Gu_IncrementalAABBTree_IncrementalAABBTree_alt1(__int64) __asm__(
    "physx_Gu_IncrementalAABBTree_IncrementalAABBTree");
bool physx_Gu_IncrementalAABBTree_build_alt1(__int64, __int64, __int64) __asm__(
    "physx_Gu_IncrementalAABBTree_build");

__int64 physx_Gu_IncrementalAABBPruner_fullRebuildAABBTree(__int64 result)
{
  unsigned int v3;
  __int64 v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  const char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  struct {
    __int64 v13;
    __int64 v14;
    __int64 v15;
    int v16;
  } v13_;

  if (*(_QWORD*)(result + 8) == 0) {
    v3 = *(_DWORD*)(result + 16);
    if (v3 != 0) {
      v4 = result;
      v5 = v3 | (v3 >> 1) | ((v3 | (v3 >> 1)) >> 2);
      v6 = v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8);
      v7 = (v6 | HIWORD(v6)) + 1;
      if (v7 > *(_DWORD*)(result + 104)) {
        GameRoutine_308180_alt1(result + 96, v7);
      }
      v8 = PxGetBroadcastAllocator_alt1(&v13_.v13);
      if ((_BYTE)v13_.v13 != 0) {
        v9 = "static const char "
             "*physx::PxReflectionAllocator<physx::Gu::IncrementalAABBTree>::"
             "getName(bool) [T = physx::"
             "Gu::IncrementalAABBTree]";
      }
      else {
        v9 = "<allocation names disabled>";
      }
      v10 =
          (*(__int64 (**)(__int64, __int64, const char*, const char*, __int64))(
              *(_QWORD*)v8 + 16LL))(v8, 144, v9,
                                    "/Inside/Lib/PhysX/O/physx/source/"
                                    "geomutils/src/GuIncrementalAABBPruner.cpp",
                                    319);
      physx_Gu_IncrementalAABBTree_IncrementalAABBTree_alt1(v10);
      *(_QWORD*)(v4 + 8) = v10;
      v13_.v16 = 0;
      LODWORD(v13_.v13) = 4;
      HIDWORD(v13_.v13) = v3;
      v13_.v14 = v4 + 24;
      v13_.v15 = 0;
      result = physx_Gu_IncrementalAABBTree_build_alt1(v10, (__int64)&v13_.v13,
                                                       v4 + 96);
      v11 = v13_.v15;
      v13_.v13 = 0;
      v13_.v14 = 0;
      if (v13_.v15 != 0) {
        v12 = PxGetBroadcastAllocator_alt1(nullptr);
        return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v12 + 24LL))(v12,
                                                                         v11);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
