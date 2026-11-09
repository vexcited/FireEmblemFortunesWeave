#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_HubDataNameMap_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* HubDataNameMap_Destructor(_QWORD* result);
__int64 HubDataNameMap_DeletingDestructor(_QWORD* a1);

_QWORD* HubDataNameMap_Destructor(_QWORD* result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 i;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = (_QWORD*)result[3];
  v2 = result;
  *result = game_HubDataNameMap_vtable;
  for (i = fw_memory_g_heap_manager_ptr; v1 != nullptr;
       result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)i + v4)) {
    v5 = v1;
    v1 = (_QWORD*)*v1;
    if ((v5[2] & 1) != 0 && v5[4] != 0) {
      if (*(_QWORD*)(*(_QWORD*)i + 200LL) != 0) {
        v6 = 128;
      }
      else {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)i + v6);
    }
    if (*(_QWORD*)(*(_QWORD*)i + 200LL) != 0) {
      v4 = 128;
    }
    else {
      v4 = 56;
    }
  }
  v7 = v2[1];
  v2[1] = 0;
  if (v7 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)i + 200LL) == 0) {
      v8 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)i + v8);
  }
  return result;
}

__int64 HubDataNameMap_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = (_QWORD*)a1[3];
  *a1 = game_HubDataNameMap_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  while (v1 != nullptr) {
    v5 = v1;
    v1 = (_QWORD*)*v1;
    if ((v5[2] & 1) != 0 && v5[4] != 0) {
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v6 = 128;
      }
      else {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6);
    }
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
      v4 = 128;
    }
    else {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v4);
  }
  v7 = a1[1];
  a1[1] = 0;
  if (v7 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8);
  }
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9);
}

#pragma GCC visibility pop
