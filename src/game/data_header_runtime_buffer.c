#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_DataHeaderRuntimeBuffer_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 DataHeaderRuntimeBuffer_Destructor_alt1(__int64 result) __asm__(
    "DataHeaderRuntimeBuffer_Destructor");
__int64 DataHeaderRuntimeBuffer_DeletingDestructor_alt1(__int64 a1) __asm__(
    "DataHeaderRuntimeBuffer_DeletingDestructor");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void DataHeaderRuntimeBuffer_Destructor(__int64 a1);
void DataHeaderRuntimeBuffer_DeletingDestructor(__int64 a1);

void DataHeaderRuntimeBuffer_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = game_DataHeaderRuntimeBuffer_vtable;
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v1 = *(_QWORD*)(a1 + 48);
    if (v1 != 0) {
      v2 = a1;
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v1);
      a1 = v2;
    }
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 24);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
}

void DataHeaderRuntimeBuffer_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = game_DataHeaderRuntimeBuffer_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 48);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v3);
    }
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 24);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v6, v5);
    }
  }
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v7 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v7, a1);
}

#pragma GCC visibility pop
