#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_hub_anonymous_ProcHubSeqTalkSelect_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcHubSeqTalkSelect_Destructor(__int64 a1, long double a2);
__int64 ProcHubSeqTalkSelect_DeletingDestructor(__int64 a1, long double a2);

__int64 ProcHubSeqTalkSelect_Destructor(__int64 a1, long double a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;

  v2 = *(_QWORD*)(a1 + 168);
  *(_QWORD*)a1 = game_hub_anonymous_ProcHubSeqTalkSelect_vtable;
  if (v2 != 0) {
    *(_QWORD*)(a1 + 176) = v2;
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                  a2);
  }
  v5 = *(_QWORD*)(a1 + 160);
  if (v5 != 0) {
    std___1___shared_weak_count___release_weak(v5);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcHubSeqTalkSelect_DeletingDestructor(__int64 a1, long double a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  long double v8;
  __int64 v9;

  v2 = *(_QWORD*)(a1 + 168);
  *(_QWORD*)a1 = game_hub_anonymous_ProcHubSeqTalkSelect_vtable;
  v4 = fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v5 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 176) = v2;
    v6 = 128;
    if (*(_QWORD*)(v5 + 200) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(v5 + v6, a2);
  }
  v7 = *(_QWORD*)(a1 + 160);
  if (v7 != 0) {
    std___1___shared_weak_count___release_weak(v7);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v9, v8);
}

#pragma GCC visibility pop
