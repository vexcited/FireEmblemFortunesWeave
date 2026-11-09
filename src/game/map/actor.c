#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_1fb0550[])();
extern __int64 (*game_map_Actor_vtable[])();
extern __int64 GameData_21cd0d0;
extern int GameData_21f4958;
__int64 Actor_Destructor(_QWORD* a1);

__int64 Actor_Destructor(_QWORD* a1)
{
  __int64 result;

  *a1 = game_map_Actor_vtable;
  result = a1[1];
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 24LL))(result);
    a1[1] = 0;
  }
  *a1 = GameData_1fb0550;
  if ((_QWORD*)GameData_21cd0d0 == a1) {
    GameData_21cd0d0 = 0;
    GameData_21f4958 = 0;
  }
  return result;
}

#pragma GCC visibility pop
