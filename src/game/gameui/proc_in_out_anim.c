#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_173fac0(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_gameui_ProcInOutAnim_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_frame_clock;
__int64 ProcInOutAnim_Unknown2(__int64 result);
__int64 ProcInOutAnim_Destructor(__int64 a1);

__int64 ProcInOutAnim_Unknown2(__int64 result)
{
  float v1;
  float v2;
  float v3;

  v1 = *(float*)(result + 168);
  if (v1 > 0.0) {
    v2 = 60.0 / (float)*(int*)(game_g_frame_clock + 476);
    if (v2 <= 0.0) {
      v2 = 1.0;
    }
    v3 = v1 - v2;
    *(float*)(result + 168) = v3;
    if (v3 <= 0.0) {
      return GameRoutine_173fac0(result, 0);
    }
  }
  return result;
}

__int64 ProcInOutAnim_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)a1 = game_gameui_ProcInOutAnim_vtable;
  if ((*(_BYTE*)(a1 + 248) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 264);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                    v2);
    }
  }
  if ((*(_BYTE*)(a1 + 224) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 240);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                    v4);
    }
  }
  if ((*(_BYTE*)(a1 + 200) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 216);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                    v6);
    }
  }
  if ((*(_BYTE*)(a1 + 176) & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 192);
    if (v8 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                    v8);
    }
  }
  if (*(_QWORD*)(a1 + 160) != 0) {
    std___1___shared_weak_count___release_weak();
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

#pragma GCC visibility pop
