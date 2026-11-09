#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_anonymous_RuntimeBuffer_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 RuntimeBuffer_Destructor(__int64 result);

__int64 RuntimeBuffer_Destructor(__int64 result)
{
  __int64 v1;
  __int64 v2;

  *(_QWORD*)result = game_anonymous_RuntimeBuffer_vtable;
  if ((*(_BYTE*)(result + 8) & 1) != 0) {
    v1 = *(_QWORD*)(result + 24);
    if (v1 != 0) {
      v2 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v2 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, v1);
    }
  }
  return result;
}

#pragma GCC visibility pop
