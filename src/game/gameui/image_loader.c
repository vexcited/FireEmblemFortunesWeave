#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_634d80(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_gameui_ImageLoader_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* ImageLoader_Destructor(_QWORD* result);
__int64 ImageLoader_DeletingDestructor(_QWORD* a1);

_QWORD* ImageLoader_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;

  v1 = result[1];
  *result = game_gameui_ImageLoader_vtable;
  if (v1 != 0) {
    v2 = result;
    result = (_QWORD*)GameRoutine_634d80(*(_QWORD*)(v1 + 8), v1);
    v2[1] = 0;
  }
  return result;
}

__int64 ImageLoader_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;

  v1 = a1[1];
  *a1 = game_gameui_ImageLoader_vtable;
  if (v1 != 0) {
    GameRoutine_634d80(*(_QWORD*)(v1 + 8), v1);
    a1[1] = 0;
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v3);
}

#pragma GCC visibility pop
