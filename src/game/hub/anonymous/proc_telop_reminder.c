#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_d8cf60(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_hub_anonymous_ProcTelopReminder_vtable[])();
extern __int64 GameData_21f3cb8;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcTelopReminder_Destructor(__int64 a1);
__int64 ProcTelopReminder_DeletingDestructor_alt1(__int64 a1) __asm__(
    "ProcTelopReminder_DeletingDestructor");
__int64 GameRoutine_d8cf60_alt1(__int64 result) __asm__("GameRoutine_d8cf60");
__int64 game_ProcInst_Unregister_alt1(__int64 result) __asm__(
    "game_ProcInst_Unregister");
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcTelopReminder_DeletingDestructor(__int64 a1);

__int64 ProcTelopReminder_Destructor(__int64 a1)
{
  *(_QWORD*)a1 = game_hub_anonymous_ProcTelopReminder_vtable;
  if (*(_BYTE*)(a1 + 152) == 1) {
    GameRoutine_d8cf60(GameData_21f3cb8);
    *(_BYTE*)(a1 + 152) = 0;
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

void ProcTelopReminder_DeletingDestructor(__int64 a1)
{
  __int64 v2;

  *(_QWORD*)a1 = game_hub_anonymous_ProcTelopReminder_vtable;
  if (*(_BYTE*)(a1 + 152) == 1) {
    GameRoutine_d8cf60_alt1(GameData_21f3cb8);
    *(_BYTE*)(a1 + 152) = 0;
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

#pragma GCC visibility pop
