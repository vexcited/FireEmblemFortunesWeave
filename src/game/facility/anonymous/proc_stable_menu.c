#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_menu_BasicMenu_Unknown16dd9a0(_QWORD);
__int64 game_menu_BasicMenu_Unknown96(void);
__int64 ProcStableMenu_Unknown96(_QWORD* a1);

__int64 ProcStableMenu_Unknown96(_QWORD* a1)
{
  game_menu_BasicMenu_Unknown96();
  if ((*(unsigned int (**)(_QWORD*))(*a1 + 168LL))(a1)-8 <= 0xFFFFFFF9) {
    (*(void (**)(_QWORD*))(a1[132] + 96LL))(a1 + 132);
  }
  return game_menu_BasicMenu_Unknown16dd9a0(a1);
}

#pragma GCC visibility pop
