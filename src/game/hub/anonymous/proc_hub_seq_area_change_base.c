#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_hub_anonymous_ProcHubSeqAreaChangeBase_vtable[])();
extern __int64 GameData_2212260;
__int64 ProcHubSeqAreaChangeBase_Destructor(__int64 a1);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 ProcHubSeqAreaChangeBase_DeletingDestructor(__int64 a1);

__int64 ProcHubSeqAreaChangeBase_Destructor(__int64 a1)
{
  *(_QWORD*)a1 = game_hub_anonymous_ProcHubSeqAreaChangeBase_vtable;
  if (*(_BYTE*)(GameData_2212260 + 12) == 1) {
    *(_BYTE*)(GameData_2212260 + 12) = 0;
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__n128 ProcHubSeqAreaChangeBase_DeletingDestructor(__int64 a1)
{
  __int64 v2;

  *(_QWORD*)a1 = game_hub_anonymous_ProcHubSeqAreaChangeBase_vtable;
  if (*(_BYTE*)(GameData_2212260 + 12) == 1) {
    *(_BYTE*)(GameData_2212260 + 12) = 0;
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
