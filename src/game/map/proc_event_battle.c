#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_75d120(_QWORD, _QWORD);
__int64 GameRoutine_822180(void);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_map_ProcEventBattle_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcEventBattle_Destructor(__int64 a1);
__int64 ProcEventBattle_DeletingDestructor(__int64 a1);
__int64 ProcEventBattle_Unknown2(__int64 a1);

__int64 ProcEventBattle_Destructor(__int64 a1)
{
  *(_QWORD*)a1 = game_map_ProcEventBattle_vtable;
  GameRoutine_822180();
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcEventBattle_DeletingDestructor(__int64 a1)
{
  __int64 v2;

  *(_QWORD*)a1 = game_map_ProcEventBattle_vtable;
  GameRoutine_822180();
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

__int64 ProcEventBattle_Unknown2(__int64 a1)
{
  __int64 result;
  unsigned __int8* v3;
  unsigned int v4;
  bool v5;
  int v6;
  bool v7;

  result = GameRoutine_75d120(a1, 1);
  v3 = *(unsigned __int8**)(a1 + 16);
  if (v3 != nullptr) {
    v4 = *v3;
    v5 = v4 >= 0x10;
    v7 = v4 == 16;
    v6 = (1 << v4) & 0x1CE00;
    v7 = !v7 && v5 || v6 == 0;
    if (!v7) {
      *(_WORD*)(a1 + 136) |= 0x80u;
    }
  }
  *(_WORD*)(a1 + 136) |= 8u;
  return result;
}

#pragma GCC visibility pop
