#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_d8cf60(void);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_hub_anonymous_ProcHubSeqObeliskBase_vtable[])();
extern __int64 GameData_21f3cb8;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcHubSeqObeliskTower_DeletingDestructor(__int64 a1);

__int64 ProcHubSeqObeliskTower_DeletingDestructor(__int64 a1)
{
  __int64 v2;

  *(_QWORD*)a1 = game_hub_anonymous_ProcHubSeqObeliskBase_vtable;
  if (GameData_21f3cb8 != 0) {
    GameRoutine_d8cf60();
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v2);
}

#pragma GCC visibility pop
