#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern int GameData_21d92e0;
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__n128 GameRoutine_1094d60(__int64*);
extern _DWORD* GameData_212fe58;
extern __int64 (*GameData_2007bc0[])();
extern __int64 (*game_combat_ActionTick_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void game_combat_CombatASMBuilder_AddWaitTransition(_QWORD* a1);

void game_combat_CombatASMBuilder_AddWaitTransition(_QWORD* a1)
{
  __int64 v1;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;

  v1 = a1[1];
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 192, 16, 0);
  v4 = a1[6];
  v5 = a1[7];
  v3[2] = 0;
  v6 = v3;
  v3[8] = 0;
  v3[20] = 0;
  v7 = ((v5 - v4) << 6) - 1;
  if (v5 == v4) {
    v7 = 0;
  }
  *v3 = game_combat_ActionTick_vtable;
  v3[1] = v1;
  v3[10] = GameData_2007bc0;
  v3[14] = v3 + 10;
  v3[22] = "WaitTransition";
  v8 = a1[10] + a1[9];
  if (v7 == v8) {
    GameRoutine_1094d60(a1 + 5);
    v4 = a1[6];
    v8 = a1[10] + a1[9];
  }
  *(_QWORD*)(*(_QWORD*)(v4 + 8 * (v8 >> 9)) + 8 * (v8 & 0x1FF)) = v6;
  v9 = a1[10];
  v10 = v9 + 1;
  v11 = a1[9] + v9;
  a1[10] = v10;
  *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1[6] + 8 * (v11 >> 9)) +
                        8 * (v11 & 0x1FF)) +
             20LL) = *GameData_212fe58;
}

bool game_combat_CombatASMBuilder_AddWaitTransition_closure_Invoke()
{
  return GameData_21d92e0 != 3;
}

#pragma GCC visibility pop
