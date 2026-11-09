#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_1ff5f10[])();
extern __int64 (*game_zview_Cursor_vtable[])();
extern __int64 GameData_220f870;
extern int GameData_22230f8;
__int64 Cursor_Destructor_f565b0(_QWORD* a1);

__int64 Cursor_Destructor_f565b0(_QWORD* a1)
{
  __int64 result;

  result = a1[1];
  *a1 = game_zview_Cursor_vtable;
  a1[1] = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  *a1 = GameData_1ff5f10;
  if ((_QWORD*)GameData_220f870 == a1) {
    GameData_220f870 = 0;
    GameData_22230f8 = 0;
  }
  return result;
}

#pragma GCC visibility pop
