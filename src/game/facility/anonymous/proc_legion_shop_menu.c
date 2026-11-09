#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameSubquestData_125d3e0(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16dd9a0(_QWORD);
__int64 game_menu_BasicMenu_Unknown96(_QWORD);
extern __int64 GameData_212c610;
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_2130f48;
extern __int64 GameData_2131c18[55];
__int64 ProcLegionShopMenu_Unknown92(__int64 a1);
__int64 ProcLegionShopMenu_Unknown96(_QWORD* a1);

__int64 ProcLegionShopMenu_Unknown92(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;

  v2 = a1;
  v3 = a1;
  v4 = GameData_212c610;
  v5 = GameData_2131c18[0];
  do {
    v6 = __dynamic_cast(v3, v4, v5, 0);
    v3 = *(_QWORD*)(v3 + 32);
    if (v6 != 0) {
      v2 = v6;
    }
  } while (v3 != 0);
  if (v2 == a1) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 1056) + 104LL))(a1 + 1056);
  }
  result = GameSubquestData_125d3e0(*(_QWORD*)GameData_212c7b0[0]);
  if (*(_QWORD*)GameData_2130f48 != 0) {
    *(_BYTE*)(*(_QWORD*)GameData_2130f48 + 1688LL) = 1;
  }
  return result;
}

__int64 ProcLegionShopMenu_Unknown96(_QWORD* a1)
{
  game_menu_BasicMenu_Unknown96(a1);
  if ((*(unsigned int (**)(_QWORD*))(*a1 + 168LL))(a1)-8 <= 0xFFFFFFF9) {
    (*(void (**)(_QWORD*))(a1[132] + 96LL))(a1 + 132);
  }
  return game_menu_BasicMenu_Unknown16dd9a0(a1);
}

#pragma GCC visibility pop
