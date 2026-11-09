#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_80bdc0(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_anonymous_ProcFade_vtable[])();
extern __int64 GameData_224b6d8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcFadeView_instance_;
__int64 ProcFade_Destructor(__int64 a1);
__int64 ProcFade_DeletingDestructor(__int64 a1);

__int64 ProcFade_Destructor(__int64 a1)
{
  int v2;
  int v3;

  *(_QWORD*)a1 = game_anonymous_ProcFade_vtable;
  v2 = *(_DWORD*)(a1 + 536);
  if (v2 != 0) {
    v3 = GameData_224b6d8;
    *(_DWORD*)(a1 + 536) = v2 - 1;
    LODWORD(GameData_224b6d8) = v3 - 1;
  }
  GameRoutine_80bdc0(a1 + 488);
  game_ProcFadeView_instance_ = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcFade_DeletingDestructor(__int64 a1)
{
  int v2;
  int v3;
  __int64 v4;

  *(_QWORD*)a1 = game_anonymous_ProcFade_vtable;
  v2 = *(_DWORD*)(a1 + 536);
  if (v2 != 0) {
    v3 = GameData_224b6d8;
    *(_DWORD*)(a1 + 536) = v2 - 1;
    LODWORD(GameData_224b6d8) = v3 - 1;
  }
  GameRoutine_80bdc0(a1 + 488);
  game_ProcFadeView_instance_ = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, a1);
}

#pragma GCC visibility pop
