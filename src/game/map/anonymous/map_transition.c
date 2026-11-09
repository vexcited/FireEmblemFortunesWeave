#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_823980(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_map_anonymous_MapTransition_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MapTransition_Destructor(_QWORD* a1);
__int64 MapTransition_DeletingDestructor(_QWORD* a1);
__int64 MapTransition_823980(__int64 result, _QWORD* a2);

__int64 MapTransition_Destructor(_QWORD* a1)
{
  __int64 v1;

  v1 = a1[2];
  *a1 = game_map_anonymous_MapTransition_vtable;
  return GameRoutine_823980(a1 + 1, v1);
}

__int64 MapTransition_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;

  v1 = a1[2];
  *a1 = game_map_anonymous_MapTransition_vtable;
  GameRoutine_823980(a1 + 1, v1);
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, a1);
}

__int64 MapTransition_823980(__int64 result, _QWORD* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  if (a2 != nullptr) {
    v3 = result;
    MapTransition_823980(result, *a2);
    MapTransition_823980(v3, a2[1]);
    v4 = a2[5];
    v5 = fw_memory_g_heap_manager_ptr;
    if (v4 != 0) {
      v6 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
      a2[6] = v4;
      v7 = 128;
      if (*(_QWORD*)(v6 + 200) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(v6 + v7, v4);
    }
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v8 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v8, a2);
  }
  return result;
}

#pragma GCC visibility pop
