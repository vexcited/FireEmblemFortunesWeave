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
__int64 GameRoutine_7fa250(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_81a990(void);
__int64 GameRoutine_8c4ee0(_QWORD);
__int64 ProcUseItemSeq_8b2310(__int64 a1);
__int64 ProcUseItemSeq_8b24a0(__int64 a1);

__int64 ProcUseItemSeq_8b2310(__int64 a1)
{
  __int64 result;
  __int16 v3;
  char v4;

  result = GameRoutine_8c4ee0(a1 + 160);
  if ((result & 1) != 0) {
    v4 = 0;
    v3 = 0;
    *(_BYTE*)(a1 + 250) = 1;
    return GameRoutine_7fa250(a1, a1 + 160, &v3);
  }
  return result;
}

__int64 ProcUseItemSeq_8b24a0(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 264);
  if (result != 0) {
    return GameRoutine_81a990();
  }
  return result;
}

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
