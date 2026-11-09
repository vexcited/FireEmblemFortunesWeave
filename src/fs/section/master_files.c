#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Files_Destructor(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*fs_Section_MasterFiles_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MasterFiles_Destructor(__int64 a1);
__int64 MasterFiles_DeletingDestructor(__int64 a1);

__int64 MasterFiles_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = fs_Section_MasterFiles_vtable;
  if ((*(_BYTE*)(a1 + 216) & 1) != 0 && *(_QWORD*)(a1 + 232) != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
  }
  if ((*(_BYTE*)(a1 + 192) & 1) != 0 && *(_QWORD*)(a1 + 208) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  v4 = *(_QWORD*)(a1 + 168);
  if (v4 != 0) {
    *(_QWORD*)(a1 + 176) = v4;
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
  }
  return Files_Destructor(a1);
}

__int64 MasterFiles_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *(_QWORD*)a1 = fs_Section_MasterFiles_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 216) & 1) != 0 && *(_QWORD*)(a1 + 232) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  if ((*(_BYTE*)(a1 + 192) & 1) != 0 && *(_QWORD*)(a1 + 208) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v4);
  }
  v5 = *(_QWORD*)(a1 + 168);
  if (v5 != 0) {
    v6 = *(_QWORD*)v2;
    *(_QWORD*)(a1 + 176) = v5;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(v6 + v7);
  }
  Files_Destructor(a1);
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v8);
}

#pragma GCC visibility pop
