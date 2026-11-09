#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_anonymous_ProcModeSelect_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcModeSelect_Destructor(__int64 a1);
__int64 ProcModeSelect_DeletingDestructor(__int64 a1);

__int64 ProcModeSelect_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = game_anonymous_ProcModeSelect_vtable;
  GameRoutine_155e140(a1 + 176);
  v2 = *(_QWORD*)(a1 + 160);
  if (v2 != 0) {
    *(_BYTE*)(v2 + 2376) = 1;
  }
  GameRoutine_155e140(a1 + 176);
  v3 = *(_QWORD*)(a1 + 272);
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_1564060(a1 + 224);
  GameRoutine_1563f90(a1 + 200, *(_QWORD*)(a1 + 208));
  v4 = *(_QWORD*)(a1 + 184);
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = *(_QWORD*)(a1 + 168);
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcModeSelect_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *(_QWORD*)a1 = game_anonymous_ProcModeSelect_vtable;
  GameRoutine_155e140(a1 + 176);
  v2 = *(_QWORD*)(a1 + 160);
  if (v2 != 0) {
    *(_BYTE*)(v2 + 2376) = 1;
  }
  GameRoutine_155e140(a1 + 176);
  v3 = *(_QWORD*)(a1 + 272);
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_1564060(a1 + 224);
  GameRoutine_1563f90(a1 + 200, *(_QWORD*)(a1 + 208));
  v4 = *(_QWORD*)(a1 + 184);
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = *(_QWORD*)(a1 + 168);
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v6);
}

#pragma GCC visibility pop
