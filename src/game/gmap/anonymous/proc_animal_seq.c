#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_ProcInst_Unregister(__int64 result);
__n128 GameRoutine_658c00(_QWORD*);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_2046a78[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 ProcAnimalSeq_14d41c0(__int64 a1);
__n128 ProcAnimalSeq_DeletingDestructor_alt1(__int64 a1) __asm__(
    "ProcAnimalSeq_DeletingDestructor");
extern __int64 (*ProcAnimalSeq_14d41c0_ptr[])();
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcAnimalSeq_DeletingDestructor(__int64 a1);

__n128 ProcAnimalSeq_14d41c0(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;

  *(_QWORD*)a1 = GameData_2046a78;
  v2 = (_QWORD*)(a1 + 160);
  v3 = *(_QWORD**)(a1 + 192);
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
  return GameRoutine_658c00((_QWORD*)(a1 + 88));
}

void ProcAnimalSeq_DeletingDestructor(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = ProcAnimalSeq_14d41c0_ptr;
  v2 = (_QWORD*)(a1 + 160);
  v3 = *(_QWORD**)(a1 + 192);
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
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, a1);
}

#pragma GCC visibility pop
