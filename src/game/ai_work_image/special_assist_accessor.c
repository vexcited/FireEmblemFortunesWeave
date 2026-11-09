#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager;
extern __int64* GameData_2130938[2];
__int64 SpecialAssistAccessor_DeletingDestructor(_QWORD* a1);

__int64 SpecialAssistAccessor_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;

  *a1 = GameData_2130938[0] + 2;
  *(_BYTE*)(a1[1] + 0x2000LL) = 0;
  v1 = 128;
  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
    v1 = 56;
  }
  return nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v1);
}

#pragma GCC visibility pop
