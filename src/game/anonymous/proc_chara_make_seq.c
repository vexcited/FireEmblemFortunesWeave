#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_a867a0(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_UnitEdit_vtable[])();
extern __int64 (*game_anonymous_CharacterHolder_vtable[])();
extern __int64 (*game_anonymous_ProcCharaMakeSeq_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcCharaMakeSeq_Destructor(__int64 a1);

__int64 ProcCharaMakeSeq_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  char v4;
  __int64 v5;
  char v6;
  __int64 v7;

  *(_QWORD*)a1 = game_anonymous_ProcCharaMakeSeq_vtable;
  v2 = *(_QWORD*)(a1 + 256);
  *(_QWORD*)(a1 + 248) = game_anonymous_CharacterHolder_vtable;
  if (v2 != 0) {
    GameRoutine_a867a0(a1 + 256);
    *(_QWORD*)(a1 + 256) = 0;
  }
  v3 = *(_QWORD*)(a1 + 240);
  *(_QWORD*)(a1 + 232) = game_anonymous_CharacterHolder_vtable;
  if (v3 != 0) {
    GameRoutine_a867a0(a1 + 240);
    *(_QWORD*)(a1 + 240) = 0;
  }
  v4 = *(_BYTE*)(a1 + 200);
  *(_QWORD*)(a1 + 192) = game_UnitEdit_vtable;
  if ((v4 & 1) != 0 && *(_QWORD*)(a1 + 216) != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
  }
  v6 = *(_BYTE*)(a1 + 160);
  *(_QWORD*)(a1 + 152) = game_UnitEdit_vtable;
  if ((v6 & 1) != 0 && *(_QWORD*)(a1 + 176) != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

#pragma GCC visibility pop
