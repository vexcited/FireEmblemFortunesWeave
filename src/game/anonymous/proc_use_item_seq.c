#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_anonymous_ProcUseItemSeq_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcUseItemSeq_Destructor(__int64 a1);
__int64 ProcUseItemSeq_DeletingDestructor(__int64 a1);

__int64 ProcUseItemSeq_Destructor(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;

  *(_QWORD*)a1 = game_anonymous_ProcUseItemSeq_vtable;
  v2 = (_QWORD*)(a1 + 288);
  v3 = *(_QWORD**)(a1 + 320);
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);

LABEL_6:
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcUseItemSeq_DeletingDestructor(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = game_anonymous_ProcUseItemSeq_vtable;
  v2 = (_QWORD*)(a1 + 288);
  v3 = *(_QWORD**)(a1 + 320);
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);

LABEL_6:
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, a1);
}

#pragma GCC visibility pop
