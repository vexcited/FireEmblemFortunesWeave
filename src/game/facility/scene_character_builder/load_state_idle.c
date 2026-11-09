#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1469730(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 LoadStateIdle_Unknown2(__int64 a1, __int64 a2);

bool LoadStateIdle_DeletingDestructor(__int64 a1, __int64 a2)
{
  return *(_QWORD*)(a2 + 40) != 0;
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
