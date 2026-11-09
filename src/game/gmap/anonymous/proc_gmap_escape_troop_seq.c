#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_gmap_anonymous_ProcGmapEscapeTroopSeq_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcGmapEscapeTroopSeq_Destructor(__int64 a1);
__int64 ProcGmapEscapeTroopSeq_DeletingDestructor(__int64 a1);

__int64 ProcGmapEscapeTroopSeq_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;

  v1 = *(_QWORD*)(a1 + 152);
  *(_QWORD*)a1 = game_gmap_anonymous_ProcGmapEscapeTroopSeq_vtable;
  if (v1 != 0) {
    *(_QWORD*)(a1 + 160) = v1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcGmapEscapeTroopSeq_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(a1 + 152);
  *(_QWORD*)a1 = game_gmap_anonymous_ProcGmapEscapeTroopSeq_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 160) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
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
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6);
}

#pragma GCC visibility pop
