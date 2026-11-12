#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_DataArrayRuntimeBuffer_vtable[])();
extern __int64 (*game_HubDataNameMap_vtable[])();
extern __int64 fw_memory_g_heap_manager;
_QWORD* DataArrayRuntimeBuffer_Destructor_alt1(_QWORD* result) __asm__(
    "DataArrayRuntimeBuffer_Destructor");
__int64 DataArrayRuntimeBuffer_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "DataArrayRuntimeBuffer_DeletingDestructor");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void DataArrayRuntimeBuffer_Destructor(_QWORD* a1);
void DataArrayRuntimeBuffer_DeletingDestructor(_QWORD* a1);

void DataArrayRuntimeBuffer_Destructor(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = (_QWORD*)a1[4];
  *a1 = game_DataArrayRuntimeBuffer_vtable;
  a1[1] = game_HubDataNameMap_vtable;
  while (v1 != nullptr) {
    v4 = (__int64)v1;
    v1 = (_QWORD*)*v1;
    if ((*(_BYTE*)(v4 + 16) & 1) != 0 && *(_QWORD*)(v4 + 32) != 0) {
      v5 = v4;
      v6 = *(_QWORD*)(v4 + 32);
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
        v7 = 128;
      }
      else {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v7, v6);
      v4 = v5;
    }
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
      v3 = 128;
    }
    else {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v3, v4);
  }
  v8 = a1[2];
  a1[2] = 0;
  if (v8 != 0) {
    v9 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v9, v8);
  }
}

void DataArrayRuntimeBuffer_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = (_QWORD*)a1[4];
  *a1 = game_DataArrayRuntimeBuffer_vtable;
  a1[1] = game_HubDataNameMap_vtable;
  while (v1 != nullptr) {
    v4 = (__int64)v1;
    v1 = (_QWORD*)*v1;
    if ((*(_BYTE*)(v4 + 16) & 1) != 0 && *(_QWORD*)(v4 + 32) != 0) {
      v5 = v4;
      v6 = *(_QWORD*)(v4 + 32);
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
        v7 = 128;
      }
      else {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v7, v6);
      v4 = v5;
    }
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
      v3 = 128;
    }
    else {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v3, v4);
  }
  v8 = a1[2];
  a1[2] = 0;
  if (v8 != 0) {
    v9 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v9, v8);
  }
  v10 = 128;
  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
    v10 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v10,
                                     (__int64)a1);
}

#pragma GCC visibility pop
