#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_cmdbtl_anonymous_ProcMapSeqResultReliance_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcMapSeqResultReliance_Destructor(__int64 a1);
__int64 ProcMapSeqResultReliance_DeletingDestructor(__int64 a1);

__int64 ProcMapSeqResultReliance_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(a1 + 152);
  *(_QWORD*)a1 = game_cmdbtl_anonymous_ProcMapSeqResultReliance_vtable;
  if (v1 != 0) {
    v3 = *(_QWORD*)(a1 + 160);
    if (v1 == v3) {
      goto LABEL_9;
    }
    do {
      v4 = *(_QWORD*)(v3 - 8);
      if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak(v4);
      }
      v3 -= 16;
    } while (v3 != v1);
    v5 = *(_QWORD*)(a1 + 152);
    *(_QWORD*)(a1 + 160) = v1;
    v1 = v5;
    if (v5 != 0) {
    LABEL_9:
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6,
                                    v1);
    }
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcMapSeqResultReliance_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = *(_QWORD*)(a1 + 152);
  *(_QWORD*)a1 = game_cmdbtl_anonymous_ProcMapSeqResultReliance_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)(a1 + 160);
    if (v1 == v4) {
      goto LABEL_9;
    }
    do {
      v5 = *(_QWORD*)(v4 - 8);
      if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak(v5);
      }
      v4 -= 16;
    } while (v4 != v1);
    v6 = *(_QWORD*)(a1 + 152);
    *(_QWORD*)(a1 + 160) = v1;
    v1 = v6;
    if (v6 != 0) {
    LABEL_9:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7, v1);
    }
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8, a1);
}

#pragma GCC visibility pop
