#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_65a640(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_hub_anonymous_ProcHubSeqEncounterBase_vtable[])();
extern __int64 (*game_hub_anonymous_ProcHubSeqEncounterBegin_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcHubSeqEncounterBegin_Destructor(__int64 a1);
__int64 ProcHubSeqEncounterBegin_DeletingDestructor(__int64 a1);

__int64 ProcHubSeqEncounterBegin_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;

  *(_QWORD*)a1 = game_hub_anonymous_ProcHubSeqEncounterBegin_vtable;
  if (*(_BYTE*)(a1 + 192) == 1) {
    GameRoutine_65a640(a1);
    *(_BYTE*)(a1 + 192) = 0;
  }
  v2 = *(_QWORD*)(a1 + 152);
  *(_QWORD*)a1 = game_hub_anonymous_ProcHubSeqEncounterBase_vtable;
  if (v2 != 0) {
    *(_QWORD*)(a1 + 160) = v2;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                  v2);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcHubSeqEncounterBegin_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *(_QWORD*)a1 = game_hub_anonymous_ProcHubSeqEncounterBegin_vtable;
  if (*(_BYTE*)(a1 + 192) == 1) {
    GameRoutine_65a640(a1);
    *(_BYTE*)(a1 + 192) = 0;
  }
  v2 = *(_QWORD*)(a1 + 152);
  *(_QWORD*)a1 = game_hub_anonymous_ProcHubSeqEncounterBase_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 160) = v2;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v2);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6, a1);
}

#pragma GCC visibility pop
