#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_d8cf60(_QWORD, long double);
__int64 game_ProcInst_Unregister(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_20003a0[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_hub_ProcHubSeqDngBunquet_vtable[])();
extern __int64 GameData_21f3cb8;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcHubSeqDngBunquet_Destructor(__int64 a1, long double a2);
__n128 ProcHubSeqDngBunquet_DeletingDestructor_alt1(
    __int64 a1,
    long double a2) __asm__("ProcHubSeqDngBunquet_DeletingDestructor");
__int64 game_ProcInst_Unregister_alt1(__int64 result) __asm__(
    "game_ProcInst_Unregister");
__int64 game_d8cf60(__int64 result);
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcHubSeqDngBunquet_DeletingDestructor(__int64 a1);

__int64 ProcHubSeqDngBunquet_Destructor(__int64 a1, long double a2)
{
  _QWORD* v3;
  __int64 v4;

  *(_QWORD*)a1 = game_hub_ProcHubSeqDngBunquet_vtable;
  if (*(_BYTE*)(a1 + 208) != 0) {
    *(_BYTE*)(a1 + 208) = 0;
    if (GameData_21f3cb8 != 0) {
      GameRoutine_d8cf60(GameData_21f3cb8, a2);
    }
  }
  v3 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_20003a0;
  if (v3 == (_QWORD*)(a1 + 160)) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_9;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_9:
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

void ProcHubSeqDngBunquet_DeletingDestructor(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;

  *(_QWORD*)a1 = game_hub_ProcHubSeqDngBunquet_vtable;
  if (*(_BYTE*)(a1 + 208) != 0) {
    *(_BYTE*)(a1 + 208) = 0;
    if (GameData_21f3cb8 != 0) {
      game_d8cf60(GameData_21f3cb8);
    }
  }
  v2 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_20003a0;
  if (v2 == (_QWORD*)(a1 + 160)) {
    v3 = 32;
  }
  else {
    if (v2 == nullptr) {
      goto LABEL_9;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v2 + v3))((__int64)v2);
LABEL_9:
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, a1);
}

#pragma GCC visibility pop
