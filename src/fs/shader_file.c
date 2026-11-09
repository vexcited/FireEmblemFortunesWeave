#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6315e0(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager;
__int64 ShaderFile_DeletingDestructor(__int64 a1);

__int64 ShaderFile_DeletingDestructor(__int64 a1)
{
  __int64 v2;

  GameRoutine_6315e0();
  v2 = 128;
  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v2, a1);
}

#pragma GCC visibility pop
