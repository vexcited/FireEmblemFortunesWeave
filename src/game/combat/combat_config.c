#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
extern __int64 (*GameData_2007fb8[])();
extern __int64 (*game_combat_CombatConfig_vtable[])();
extern __int64 GameData_2235728;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_2235730;
__int64 CombatConfig_Destructor(__int64 result, long double a2);

__int64 CombatConfig_Destructor(__int64 result, long double a2)
{
  __int64 v2;
  __int64 v3;

  *(_QWORD*)result = game_combat_CombatConfig_vtable;
  if ((*(_BYTE*)(result + 56) & 1) != 0 && *(_QWORD*)(result + 72) != 0) {
    v2 = result;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                  a2);
    result = v2;
  }
  *(_QWORD*)result = GameData_2007fb8;
  if (GameData_2235728 == result) {
    GameData_2235728 = 0;
    GameData_2235730 = 0;
  }
  return result;
}

#pragma GCC visibility pop
