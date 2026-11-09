#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BattleSide_Destructor(_QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_cmdbtl_anonymous_ProcUnitBlazeOn_vtable[])();
extern __int64 (*game_map_BattleArea_vtable[])();
extern __int64 (*game_map_BattleInfo_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d258[2];
__int64 ProcUnitBlazeOn_Destructor_f33f10(__int64 a1);
__int64 ProcUnitBlazeOn_DeletingDestructor_f33fe0(__int64 a1);

__int64 ProcUnitBlazeOn_Destructor_f33f10(__int64 a1)
{
  __int64 v2;

  *(_QWORD*)a1 = game_cmdbtl_anonymous_ProcUnitBlazeOn_vtable;
  *(_QWORD*)(a1 + 168) = game_map_BattleInfo_vtable;
  *(_QWORD*)(a1 + 11464) = game_map_BattleArea_vtable;
  v2 = *(_QWORD*)(a1 + 11472);
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    *(_QWORD*)(a1 + 11472) = 0;
  }
  *(_QWORD*)(a1 + 176) = GameData_212d258[0] + 2;
  BattleSide_Destructor(a1 + 2464);
  BattleSide_Destructor(a1 + 1704);
  BattleSide_Destructor(a1 + 944);
  BattleSide_Destructor(a1 + 184);
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcUnitBlazeOn_DeletingDestructor_f33fe0(__int64 a1)
{
  __int64 v2;
  __int64 v3;

  *(_QWORD*)a1 = game_cmdbtl_anonymous_ProcUnitBlazeOn_vtable;
  *(_QWORD*)(a1 + 168) = game_map_BattleInfo_vtable;
  *(_QWORD*)(a1 + 11464) = game_map_BattleArea_vtable;
  v2 = *(_QWORD*)(a1 + 11472);
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    *(_QWORD*)(a1 + 11472) = 0;
  }
  *(_QWORD*)(a1 + 176) = GameData_212d258[0] + 2;
  BattleSide_Destructor(a1 + 2464);
  BattleSide_Destructor(a1 + 1704);
  BattleSide_Destructor(a1 + 944);
  BattleSide_Destructor(a1 + 184);
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, a1);
}

#pragma GCC visibility pop
