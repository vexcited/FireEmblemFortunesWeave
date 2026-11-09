#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_826320(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_GameVariable_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* GameVariable_Destructor(_QWORD* result);

_QWORD* GameVariable_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;

  v1 = result[1];
  *result = game_GameVariable_vtable;
  if (v1 != 0) {
    v2 = result;
    GameRoutine_826320(v1);
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v1);
    v2[1] = 0;
  }
  return result;
}

#pragma GCC visibility pop
