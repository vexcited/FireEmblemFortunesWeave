#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_SpineBuildCallbackForIconFace_vtable[])();
extern __int64 (*game_SpineBuildCallback_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 SpineBuildCallbackForIconFace_Unknown12(__int64 result, __int64 a2,
                                                int a3);
__int64 SpineBuildCallbackForIconFace_Destructor_alt1(__int64 result) __asm__(
    "SpineBuildCallbackForIconFace_Destructor");
__int64 SpineBuildCallbackForIconFace_DeletingDestructor_alt1(
    __int64 a1) __asm__("SpineBuildCallbackForIconFace_DeletingDestructor");
__int64 SpineBuildCallbackForIconFace_Unknown3(__int64 result);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void SpineBuildCallbackForIconFace_Destructor(__int64 a1);
void SpineBuildCallbackForIconFace_DeletingDestructor(__int64 a1);

__int64 SpineBuildCallbackForIconFace_Unknown12(__int64 result, __int64 a2,
                                                int a3)
{
  *(_QWORD*)(result + 104) = a2;
  *(_DWORD*)(result + 112) = a3;
  return result;
}

void SpineBuildCallbackForIconFace_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = game_SpineBuildCallbackForIconFace_vtable;
  if ((*(_BYTE*)(a1 + 120) & 1) != 0) {
    v1 = *(_QWORD*)(a1 + 136);
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
  *(_QWORD*)a1 = game_SpineBuildCallback_vtable;
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 72);
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

void SpineBuildCallbackForIconFace_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = game_SpineBuildCallbackForIconFace_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 120) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 136);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v3);
    }
  }
  *(_QWORD*)a1 = game_SpineBuildCallback_vtable;
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 72);
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
