#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_17cbd60(__int64 result);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_gameui_GaugeUtil_ExpChange_vtable[])();
extern __int64 (*game_gameui_GaugeUtil_RelianceExpChange_vtable[])();
extern __int64 (*game_telop_SimpleTelopImpl_TelopParts_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 TelopParts_Destructor(__int64 a1);

__int64 TelopParts_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)a1 = game_telop_SimpleTelopImpl_TelopParts_vtable;
  *(_QWORD*)(a1 + 264) = game_gameui_GaugeUtil_RelianceExpChange_vtable;
  v2 = *(_QWORD*)(a1 + 432);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  v3 = *(_QWORD*)(a1 + 416);
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak(v3);
  }
  *(_QWORD*)(a1 + 264) = game_gameui_GaugeUtil_ExpChange_vtable;
  if ((*(_BYTE*)(a1 + 368) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 384);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                    v4);
    }
  }
  if ((*(_BYTE*)(a1 + 344) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 360);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                    v6);
    }
  }
  if ((*(_BYTE*)(a1 + 320) & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 336);
    if (v8 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                    v8);
    }
  }
  return GameRoutine_17cbd60(a1 + 16);
}

#pragma GCC visibility pop
