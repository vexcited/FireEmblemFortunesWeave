#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_menu_BasicMenu_Unknown16de2e0(void);
__int64 ProcMapMiracleMenu_Unknown93(__int64 result);

__int64 ProcMapMiracleMenu_Unknown93(__int64 result)
{
  if ((*(_BYTE*)(result + 1064) & 1) == 0) {
    *(_BYTE*)(result + 1064) = 1;
    *(_BYTE*)(result + 648) = 1;
    *(_DWORD*)(result + 356) &= ~2u;
    return game_menu_BasicMenu_Unknown16de2e0();
  }
  return result;
}

#pragma GCC visibility pop
