#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_SpineBuildCallbackForIconFace_vtable[])();
extern __int64 (*game_SpineBuildCallback_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 SpineBuildCallbackForIconFace_Unknown12(__int64 result, __int64 a2,
                                                int a3);
__int64 SpineBuildCallbackForIconFace_Destructor(__int64 result);
__int64 SpineBuildCallbackForIconFace_DeletingDestructor(__int64 a1);
__int64 SpineBuildCallbackForIconFace_Unknown3(__int64 result);
__int64 SpineBuildCallbackForIconFace_Unknown12(__int64 result, __int64 a2,
                                                int a3)
{
  *(_QWORD*)(result + 104) = a2;
  *(_DWORD*)(result + 112) = a3;
  return result;
}

__int64 SpineBuildCallbackForIconFace_Destructor(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  *(_QWORD*)result = game_SpineBuildCallbackForIconFace_vtable;
  if ((*(_BYTE*)(result + 120) & 1) != 0 && *(_QWORD*)(result + 136) != 0) {
    v1 = result;
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
    result = v1;
  }
  *(_QWORD*)result = game_SpineBuildCallback_vtable;
  if ((*(_BYTE*)(result + 56) & 1) != 0 && *(_QWORD*)(result + 72) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  return result;
}

__int64 SpineBuildCallbackForIconFace_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = game_SpineBuildCallbackForIconFace_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 120) & 1) != 0 && *(_QWORD*)(a1 + 136) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  *(_QWORD*)a1 = game_SpineBuildCallback_vtable;
  if ((*(_BYTE*)(a1 + 56) & 1) != 0 && *(_QWORD*)(a1 + 72) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v4);
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v5);
}

__int64 SpineBuildCallbackForIconFace_Unknown3(__int64 result)
{
  char v1;
  char v2;
  _BYTE* v3;

  v1 = *(_BYTE*)(result + 56);
  *(_DWORD*)(result + 47) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_BYTE*)(result + 24) = 0;
  if ((v1 & 1) != 0) {
    **(_BYTE**)(result + 72) = 0;
    *(_QWORD*)(result + 64) = 0;
  }
  else {
    *(_WORD*)(result + 56) = 0;
  }
  v2 = *(_BYTE*)(result + 120);
  *(_QWORD*)(result + 96) = 0;
  *(_QWORD*)(result + 104) = 0;
  if ((v2 & 1) != 0) {
    v3 = *(_BYTE**)(result + 136);
    *(_QWORD*)(result + 128) = 0;
    *v3 = 0;
  }
  else {
    *(_BYTE*)(result + 120) = 0;
    *(_BYTE*)(result + 121) = 0;
  }
  return result;
}

#pragma GCC visibility pop
