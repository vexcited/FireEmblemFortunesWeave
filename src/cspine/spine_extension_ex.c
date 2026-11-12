#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_19e10(void);
__int64 GameRoutine_634d80(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_mem_StandardAllocator_Reallocate(_QWORD);
__int64 spine_SpineExtension_SpineExtension(void);
__int64 strlen(_QWORD);
extern __int64 (*cspine_SpineExtensionEx_vtable[])();
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* game_g_frame_clock_ptr[3];
__int64 SpineExtensionEx_Unknown4(__int64 a1, __int64 a2, __int64 a3);
__int64
SpineExtensionEx_Unknown5_alt1(__int64 a1,
                               __int64 a2) __asm__("SpineExtensionEx_Unknown5");
__int64 SpineExtensionEx_Unknown6(__int64 a1, __int64 a2, _DWORD* a3);
_QWORD* SpineExtensionEx_190d360();
__n128 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__n128
SpineExtensionEx_Unknown3_alt1(__int64 a1,
                               __int64 a2) __asm__("SpineExtensionEx_Unknown3");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
__int64 SpineExtensionEx_Unknown3(__int64 a1, unsigned __int64 a2);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void SpineExtensionEx_Unknown5(__int64 a1, __int64 a2);

__int64 SpineExtensionEx_Unknown3(__int64 a1, unsigned __int64 a2)
{
  __int64 v3;

  v3 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, a2, 16, 0);
  return memset_alt1(v3, 0, a2);
}

__int64 SpineExtensionEx_Unknown4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;

  if (a2 == 0) {
    return fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, a3, 16, 0);
  }
  v3 = 128;
  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Reallocate(fw_memory_g_heap_manager + v3);
}

void SpineExtensionEx_Unknown5(__int64 a1, __int64 a2)
{
  __int64 v2;

  if (a2 != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a2);
  }
}

__int64 SpineExtensionEx_Unknown6(__int64 a1, __int64 a2, _DWORD* a3)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v4 = *(_QWORD*)(a2 + 16);
  v5 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13432);
  v6 = strlen(v4);
  v7 = (*(__int64 (**)(__int64, __int64, __int64, __int64))(
      *(_QWORD*)v5 + 56LL))(v5, v4, v6, 255);
  v8 = *(_QWORD*)(v7 + 576);
  v9 = v7;
  v10 = GameRoutine_19e10();
  v11 = (*(__int64 (**)(__int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v10 + 16LL))(v10, v8, 0, 0);
  memcpy(v11, *(_QWORD*)(v9 + 592), v8);
  GameRoutine_634d80(*(_QWORD*)(v9 + 8), v9);
  *a3 = v8;
  return v11;
}

_QWORD* SpineExtensionEx_190d360()
{
  _QWORD* v0;

  v0 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
  spine_SpineExtension_SpineExtension();
  *v0 = cspine_SpineExtensionEx_vtable;
  return v0;
}

#pragma GCC visibility pop
