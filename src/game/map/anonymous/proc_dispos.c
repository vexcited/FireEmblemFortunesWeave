#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1f94bd8[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_map_anonymous_ProcDispos_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcDispos_Destructor(__int64 a1);

__int64 ProcDispos_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = *(_QWORD*)(a1 + 216);
  *(_QWORD*)a1 = game_map_anonymous_ProcDispos_vtable;
  *(_QWORD*)(a1 + 152) = GameData_1f94bd8;
  if (v1 != 0) {
    *(_QWORD*)(a1 + 224) = v1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                  v1);
  }
  if ((*(_BYTE*)(a1 + 184) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 200);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                    v4);
    }
  }
  if ((*(_BYTE*)(a1 + 160) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 176);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                    v6);
    }
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

#pragma GCC visibility pop
