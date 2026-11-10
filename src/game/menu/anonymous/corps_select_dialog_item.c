#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1591700(_QWORD, _QWORD, _QWORD);
__int64 UnitItemList_710640(_QWORD);
__int64 UnitItemList_710b30(_QWORD);
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
__int64 game_menu_anonymous_CorpsSelectDialogItem_UpdateHelpImpl_closure_Invoke(
    __int64 a1, __int64* a2);

__int64 game_menu_anonymous_CorpsSelectDialogItem_UpdateHelpImpl_closure_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  _DWORD* v3;
  _BYTE v6[4];

  v2 = *a2;
  v3 = *(_DWORD**)(a1 + 8);
  v6[0] = 0;
  *v3 += *(__int16*)(v2 + 492);
  **(_DWORD**)(a1 + 16) += game_Unit_GetParam(v2, v6, 1);
  **(_DWORD**)(a1 + 24) += *(unsigned __int8*)(v2 + 498);
  **(_DWORD**)(a1 + 32) += UnitItemList_710640(v2 + 828);
  **(_DWORD**)(a1 + 40) += UnitItemList_710b30(v2 + 828);
  return GameRoutine_1591700(*(_QWORD*)(a1 + 48), v2, 0);
}

#pragma GCC visibility pop
