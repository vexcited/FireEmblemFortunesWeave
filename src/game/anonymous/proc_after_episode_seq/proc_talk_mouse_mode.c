#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1553220(_QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (
    *game_anonymous_ProcAfterEpisodeSeq_ProcTalkMouseMode_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcTalkMouseMode_Destructor(__int64 a1);
__int64 ProcTalkMouseMode_DeletingDestructor_alt1(__int64 a1) __asm__(
    "ProcTalkMouseMode_DeletingDestructor");
__int64 GameRoutine_1553220_alt1(__int64 result) __asm__("GameRoutine_1553220");
__int64 game_ProcInst_Unregister_alt1(__int64 result) __asm__(
    "game_ProcInst_Unregister");
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcTalkMouseMode_DeletingDestructor(__int64 a1);

__int64 ProcTalkMouseMode_Destructor(__int64 a1)
{
  *(_QWORD*)a1 = game_anonymous_ProcAfterEpisodeSeq_ProcTalkMouseMode_vtable;
  GameRoutine_1553220(19);
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

void ProcTalkMouseMode_DeletingDestructor(__int64 a1)
{
  __int64 v2;

  *(_QWORD*)a1 = game_anonymous_ProcAfterEpisodeSeq_ProcTalkMouseMode_vtable;
  GameRoutine_1553220_alt1(19);
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
