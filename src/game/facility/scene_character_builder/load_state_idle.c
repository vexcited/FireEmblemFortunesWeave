#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1469730(_QWORD, _QWORD);
__int64 GameRoutine_14877f0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 GameHr_14ae940(__int64 result);
__int64 LoadStateIdle_Unknown2(__int64 a1, __int64 a2);

bool LoadStateIdle_DeletingDestructor(__int64 a1, __int64 a2)
{
  return *(_QWORD*)(a2 + 40) != 0;
}

__int64 GameHr_1470b90() { return GameRoutine_14877f0(0, 0x13F000000LL); }

__int64 GameHr_1470e10() { return GameRoutine_14877f0(0, 0x13F000000LL); }

void __attribute__((noreturn))

SceneCameraCharaViewerController_DeletingDestructor()
{
  __udf(0x8002u);
}

void __attribute__((noreturn)) IProcFacilitySceneCombat_DeletingDestructor()
{
  __udf(0x8002u);
}

void __attribute__((noreturn)) RigidActor_DeletingDestructor()
{
  __udf(0x8002u);
}

__int64 GameHr_14ae940(__int64 result)
{
  *(_DWORD*)(result + 152) = *(_DWORD*)(result + 212);
  return result;
}

__int64 LoadStateIdle_Unknown2(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 result;

  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      16, 16, 0);
  result = GameRoutine_1469730(v3, a2);
  *(_QWORD*)(a2 + 16) = v3;
  return result;
}

#pragma GCC visibility pop
