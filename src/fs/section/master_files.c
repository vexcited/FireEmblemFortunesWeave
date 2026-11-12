#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Files_Destructor(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*fs_Section_MasterFiles_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64
MasterFiles_Destructor_alt1(__int64 a1) __asm__("MasterFiles_Destructor");
__int64 MasterFiles_DeletingDestructor_alt1(__int64 a1) __asm__(
    "MasterFiles_DeletingDestructor");
void Files_Destructor_alt1(_QWORD*) __asm__("Files_Destructor");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void MasterFiles_Destructor(__int64 a1);
void MasterFiles_DeletingDestructor(__int64 a1);

void MasterFiles_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = fs_Section_MasterFiles_vtable;
  if ((*(_BYTE*)(a1 + 216) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 232);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v2);
    }
  }
  if ((*(_BYTE*)(a1 + 192) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 208);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  v6 = *(_QWORD*)(a1 + 168);
  if (v6 != 0) {
    *(_QWORD*)(a1 + 176) = v6;
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v6);
  }
  Files_Destructor_alt1((_QWORD*)a1);
}

void MasterFiles_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  *(_QWORD*)a1 = fs_Section_MasterFiles_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 216) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 232);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v3);
    }
  }
  if ((*(_BYTE*)(a1 + 192) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 208);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v6, v5);
    }
  }
  v7 = *(_QWORD*)(a1 + 168);
  if (v7 != 0) {
    v8 = *(_QWORD*)v2;
    *(_QWORD*)(a1 + 176) = v7;
    v9 = 128;
    if (*(_QWORD*)(v8 + 200) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v8 + v9, v7);
  }
  Files_Destructor_alt1((_QWORD*)a1);
  v10 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v10 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v10, a1);
}

#pragma GCC visibility pop
