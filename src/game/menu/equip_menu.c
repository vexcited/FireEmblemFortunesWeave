#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_menu_EquipMenu_LCall_lambda0_Invoke(__int64 a1, _QWORD* a2);
__int64 game_menu_EquipMenu_RCall_lambda0_Invoke(__int64 a1, _QWORD* a2);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_gameui_UnitUtil_GetNext(__int64, char, _QWORD*, char);
extern __int64 (*GameData_2052880[])();
extern __int64* GameData_21319d8;
extern __int64* GameData_21319e8[10];
__int64 game_menu_EquipMenu_RCall(__int64 a1);

__int64 game_menu_EquipMenu_RCall(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  struct {
    _QWORD v7[4];
    _QWORD* v8;
  } v7_;

  result = *(_QWORD*)(a1 + 1056);
  if (result == 0) {
    return result;
  }
  result = __dynamic_cast(result, GameData_21319e8[0], GameData_21319d8, 0);
  if (result == 0) {
    return result;
  }
  v3 = result;
  if (((*(__int64 (**)(__int64))(*(_QWORD*)result + 368LL))(result) & 1) == 0) {
    return 0;
  }
  v4 = *(_QWORD*)(a1 + 1072);
  v7_.v7[0] = GameData_2052880;
  v7_.v7[1] = v3;
  v7_.v8 = v7_.v7;
  v5 = game_gameui_UnitUtil_GetNext(v4, 0, v7_.v7, 0);
  if (v7_.v8 == v7_.v7) {
    v6 = 32;
  }
  else {
    if (v7_.v8 == nullptr) {
      goto LABEL_10;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v7_.v8 + v6))((__int64)v7_.v8);
LABEL_10:
  result = 0;
  if (v5 != 0 && v5 != *(_QWORD*)(a1 + 1072)) {
    (*(void (**)(__int64, __int64))(*(_QWORD*)v3 + 384LL))(v3, v5);
    return 13;
  }
  return result;
}

__int64 game_menu_EquipMenu_LCall_lambda0_Invoke(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 376LL))(
      *(_QWORD*)(a1 + 8), *a2);
}

__int64 game_menu_EquipMenu_RCall_lambda0_Invoke(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 376LL))(
      *(_QWORD*)(a1 + 8), *a2);
}

#pragma GCC visibility pop
