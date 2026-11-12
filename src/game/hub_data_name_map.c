#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_HubDataNameMap_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* HubDataNameMap_Destructor_alt1(_QWORD* result) __asm__(
    "HubDataNameMap_Destructor");
__int64 HubDataNameMap_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "HubDataNameMap_DeletingDestructor");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void HubDataNameMap_Destructor(_QWORD* a1);
void HubDataNameMap_DeletingDestructor(_QWORD* a1);

void HubDataNameMap_Destructor(_QWORD* a1)
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

  v1 = (_QWORD*)a1[3];
  *a1 = game_HubDataNameMap_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  while (v1 != nullptr) {
    v5 = (__int64)v1;
    v1 = (_QWORD*)*v1;
    if ((*(_BYTE*)(v5 + 16) & 1) != 0 && *(_QWORD*)(v5 + 32) != 0) {
      v6 = v5;
      v7 = *(_QWORD*)(v5 + 32);
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v8 = 128;
      }
      else {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v8, v7);
      v5 = v6;
    }
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
      v4 = 128;
    }
    else {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v4, v5);
  }
  v9 = a1[1];
  a1[1] = 0;
  if (v9 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v10, v9);
  }
}

void HubDataNameMap_DeletingDestructor(_QWORD* a1)
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
  __int64 v11;

  v1 = (_QWORD*)a1[3];
  *a1 = game_HubDataNameMap_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  while (v1 != nullptr) {
    v5 = (__int64)v1;
    v1 = (_QWORD*)*v1;
    if ((*(_BYTE*)(v5 + 16) & 1) != 0 && *(_QWORD*)(v5 + 32) != 0) {
      v6 = v5;
      v7 = *(_QWORD*)(v5 + 32);
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v8 = 128;
      }
      else {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v8, v7);
      v5 = v6;
    }
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
      v4 = 128;
    }
    else {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v4, v5);
  }
  v9 = a1[1];
  a1[1] = 0;
  if (v9 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v10, v9);
  }
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v11 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v11, (__int64)a1);
}

#pragma GCC visibility pop
