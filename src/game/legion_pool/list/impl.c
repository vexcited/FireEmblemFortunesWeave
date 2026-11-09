#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_LegionPool_List_Impl_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* Impl_Destructor_938800(_QWORD* result);

_QWORD* Impl_Destructor_938800(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v1 = result[13];
  v2 = result;
  *result = game_LegionPool_List_Impl_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    result[14] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = v2[10];
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    v2[11] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v7 + v8);
  }
  v9 = v2[6];
  if (v9 != 0) {
    v10 = *(_QWORD*)v3;
    v2[7] = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v10 + v11);
  }
  v12 = (_QWORD*)v2[3];
  if (v12 != nullptr) {
    do {
      v13 = (_QWORD*)*v12;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v14 = 128;
      }
      else {
        v14 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v14);
      v12 = v13;
    } while (v13 != nullptr);
  }
  v15 = v2[1];
  v2[1] = 0;
  if (v15 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v16 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v16);
  }
  return result;
}

#pragma GCC visibility pop
