#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MemoryOutputStream_DeletingDestructor_alt1(__int64 result) __asm__(
    "MemoryOutputStream_DeletingDestructor");
__int64 MemoryOutputStream_Unknown2_alt1(__int64 a1) __asm__(
    "MemoryOutputStream_Unknown2");
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 MemoryOutputStream_Destructor(__int64 a1, __int64 a2, unsigned int a3);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void MemoryOutputStream_DeletingDestructor(__int64 a1);
void MemoryOutputStream_Unknown2(__int64 a1);

void MemoryOutputStream_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 16) = 0;
  if (v1 != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, v1);
  }
}

void MemoryOutputStream_Unknown2(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 16) = 0;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v1);
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v5 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v5, a1);
}

__int64 MemoryOutputStream_Destructor(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3;
  int v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v3 = *(unsigned int*)(a1 + 8);
  v7 = v3 + a3;
  if ((unsigned int)v3 + a3 > *(_DWORD*)(a1 + 12)) {
    v8 = fw_memory_g_heap_manager_ptr;
    v9 = 1 << -(char)__clz(v7 - 1);
    v10 = v9 <= 0x1000 ? 4096LL : v9;
    v11 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v10, 4096, 0);
    memcpy_alt1(v11, *(_QWORD*)(a1 + 16), v3);
    v12 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = v11;
    *(_DWORD*)(a1 + 12) = v10;
    if (v12 != 0) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v8 + v13, v12);
    }
  }
  memcpy_alt1(*(_QWORD*)(a1 + 16) + v3, a2, a3);
  *(_DWORD*)(a1 + 8) = v7;
  return a3;
}

#pragma GCC visibility pop
