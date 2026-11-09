#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_DataArrayRuntimeBuffer_vtable[])();
extern __int64 (*game_HubDataNameMap_vtable[])();
extern __int64 fw_memory_g_heap_manager;
_QWORD* DataArrayRuntimeBuffer_Destructor(_QWORD* result);
__int64 DataArrayRuntimeBuffer_DeletingDestructor(_QWORD* a1);

_QWORD* DataArrayRuntimeBuffer_Destructor(_QWORD* result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = (_QWORD*)result[4];
  v2 = result;
  *result = game_DataArrayRuntimeBuffer_vtable;
  for (result[1] = game_HubDataNameMap_vtable; v1 != nullptr;
       result = (_QWORD*)nn_mem_StandardAllocator_Free(
           fw_memory_g_heap_manager + v3)) {
    v4 = v1;
    v1 = (_QWORD*)*v1;
    if ((v4[2] & 1) != 0 && v4[4] != 0) {
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
        v5 = 128;
      }
      else {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v5);
    }
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
      v3 = 128;
    }
    else {
      v3 = 56;
    }
  }
  v6 = v2[2];
  v2[2] = 0;
  if (v6 != 0) {
    v7 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v7 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager +
                                                  v7);
  }
  return result;
}

__int64 DataArrayRuntimeBuffer_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = (_QWORD*)a1[4];
  *a1 = game_DataArrayRuntimeBuffer_vtable;
  a1[1] = game_HubDataNameMap_vtable;
  while (v1 != nullptr) {
    v4 = v1;
    v1 = (_QWORD*)*v1;
    if ((v4[2] & 1) != 0 && v4[4] != 0) {
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
        v5 = 128;
      }
      else {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v5);
    }
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
      v3 = 128;
    }
    else {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v3);
  }
  v6 = a1[2];
  a1[2] = 0;
  if (v6 != 0) {
    v7 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v7);
  }
  v8 = 128;
  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v8);
}

#pragma GCC visibility pop
