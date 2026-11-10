#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_157b780(_QWORD, _QWORD);
__int64 game_menu_EquipUnitSelectMenu_UpdateEquipList_lambda1_Invoke(__int64 a1,
                                                                     int* a2);

__int64 game_menu_EquipUnitSelectMenu_UpdateEquipList_lambda1_Invoke(__int64 a1,
                                                                     int* a2)
{
  __int64 v2;
  int v4;

  v2 = **(_QWORD**)(a1 + 8);
  v4 = *a2;
  return GameRoutine_157b780(v2, &v4) & 1;
}

#pragma GCC visibility pop
