#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (*game_gameui_GaugeUtil_ExpChange_vtable[])();
extern __int64 (*game_gameui_GaugeUtil_MasteryExpChange_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MasteryExpChangeSmall_Unknown4_alt1(__int64 a1) __asm__(
    "MasteryExpChangeSmall_Unknown4");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void MasteryExpChangeSmall_Unknown4(__int64 a1);

void MasteryExpChangeSmall_Unknown4(__int64 a1)
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

  *(_QWORD*)a1 = game_gameui_GaugeUtil_MasteryExpChange_vtable;
  v2 = *(_QWORD*)(a1 + 136);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  *(_QWORD*)a1 = game_gameui_GaugeUtil_ExpChange_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 104) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 120);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  if ((*(_BYTE*)(a1 + 80) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 96);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v7, v6);
    }
  }
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 72);
    if (v8 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v9, v8);
    }
  }
  v10 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v10 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v10, a1);
}

#pragma GCC visibility pop
