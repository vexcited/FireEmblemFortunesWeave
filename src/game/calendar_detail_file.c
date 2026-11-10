#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_12d65a0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned __int64 GameRoutine_12c7260(unsigned __int64 result);
unsigned __int64 CalendarDetailFile_Unknown4(__int64 a1);
unsigned __int64 CalendarDetailFile_12c8890(__int64 a1);
__int64 CalendarDetailFile_Unknown5(__int64 result);
__int64 CalendarDetailFile_12d65a0(_QWORD);
__int64 CalendarDetailFile_Unknown6(__int64 result);

unsigned __int64 CalendarDetailFile_Unknown4(__int64 a1)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 result;
  __int64 v8;
  __int64 v9;

  v2 = fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      928, 16, 0);
  *(_QWORD*)v3 = 0;
  *(_QWORD*)(v3 + 8) = 0;
  *(_QWORD*)(v3 + 16) = 0;
  *(_QWORD*)(v3 + 24) = 0;
  *(_DWORD*)(v3 + 32) = 1065353216;
  memset(v3 + 40, 0, 888, v4, v5, v6);
  result = GameRoutine_12c7260(v3);
  v8 = *(_QWORD*)(a1 + 264);
  *(_QWORD*)(a1 + 264) = v3;
  if (v8 != 0) {
    GameRoutine_12d65a0(v8);
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v9 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v9);
  }
  return result;
}

unsigned __int64 CalendarDetailFile_12c8890(__int64 a1)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 result;
  __int64 v8;
  __int64 v9;

  v2 = fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      928, 16, 0);
  *(_QWORD*)v3 = 0;
  *(_QWORD*)(v3 + 8) = 0;
  *(_QWORD*)(v3 + 16) = 0;
  *(_QWORD*)(v3 + 24) = 0;
  *(_DWORD*)(v3 + 32) = 1065353216;
  memset(v3 + 40, 0, 888, v4, v5, v6);
  result = GameRoutine_12c7260(v3);
  v8 = *(_QWORD*)(a1 + 256);
  *(_QWORD*)(a1 + 256) = v3;
  if (v8 != 0) {
    GameRoutine_12d65a0(v8);
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v9 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v9);
  }
  return result;
}

__int64 CalendarDetailFile_Unknown5(__int64 result)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(result + 264);
  *(_QWORD*)(result + 264) = 0;
  if (v1 != 0) {
    GameRoutine_12d65a0(v1);
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
  }
  return result;
}

__int64 CalendarDetailFile_Unknown6(__int64 result)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(result + 256);
  *(_QWORD*)(result + 256) = 0;
  if (v1 != 0) {
    CalendarDetailFile_12d65a0(v1);
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
  }
  return result;
}

#pragma GCC visibility pop
