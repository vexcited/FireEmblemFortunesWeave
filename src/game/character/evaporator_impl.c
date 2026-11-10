#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_character_EvaporatorImpl_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 EvaporatorImpl_Destructor(__int64 a1);
__int64 EvaporatorImpl_DeletingDestructor(__int64 a1);

__int64 EvaporatorImpl_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = *(_QWORD*)(a1 + 184);
  *(_QWORD*)a1 = game_character_EvaporatorImpl_vtable;
  if (v1 == 0) {
    goto LABEL_14;
  }
  v3 = *(_QWORD*)(a1 + 192);
  if (v1 == v3) {
  LABEL_11:
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
    goto LABEL_14;
  }
  do {
    v5 = *(_QWORD**)(v3 - 16);
    if ((_QWORD*)(v3 - 48) == v5) {
      v4 = 32;
    LABEL_5:
      (*(void (**)(__int64))(*v5 + v4))((__int64)v5);
      goto LABEL_6;
    }
    if (v5 != nullptr) {
      v4 = 40;
      goto LABEL_5;
    }
  LABEL_6:
    v3 -= 64;
  } while (v3 != v1);
  v6 = *(_QWORD*)(a1 + 184);
  *(_QWORD*)(a1 + 192) = v1;
  if (v6 != 0) {
    goto LABEL_11;
  }
LABEL_14:
  v8 = *(_QWORD*)(a1 + 160);
  if (v8 != 0) {
    std___1___shared_weak_count___release_weak(v8);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 EvaporatorImpl_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = *(_QWORD*)(a1 + 184);
  *(_QWORD*)a1 = game_character_EvaporatorImpl_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 == 0) {
    goto LABEL_14;
  }
  v4 = *(_QWORD*)(a1 + 192);
  if (v1 == v4) {
  LABEL_11:
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8);
    goto LABEL_14;
  }
  do {
    v6 = *(_QWORD**)(v4 - 16);
    if ((_QWORD*)(v4 - 48) == v6) {
      v5 = 32;
    LABEL_5:
      (*(void (**)(__int64))(*v6 + v5))((__int64)v6);
      goto LABEL_6;
    }
    if (v6 != nullptr) {
      v5 = 40;
      goto LABEL_5;
    }
  LABEL_6:
    v4 -= 64;
  } while (v4 != v1);
  v7 = *(_QWORD*)(a1 + 184);
  *(_QWORD*)(a1 + 192) = v1;
  if (v7 != 0) {
    goto LABEL_11;
  }
LABEL_14:
  v9 = *(_QWORD*)(a1 + 160);
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak(v9);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v10 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v10 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10);
}

#pragma GCC visibility pop
