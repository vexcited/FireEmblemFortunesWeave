#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_19350e0(__int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 GameData_21168b8;
extern __int64* GameData_21319e8[10];
__int64 IndividualDecideMenu_Unknown30(__int64 a1, char a2);
__int64 IndividualDecideMenu_Unknown100(__int64 a1);

__int64 IndividualDecideMenu_Unknown30(__int64 a1, char a2)
{
  __int64 result;
  char v4;

  result = ui_LayoutAccessor_FindPane(a1 + 952, "L_MenuItem00");
  if (result != 0) {
    if ((a2 & 1) != 0) {
      v4 = -1;
    }
    else {
      v4 = 40;
    }
    *(_BYTE*)(result + 89) = v4;
  }
  return result;
}

__int64 IndividualDecideMenu_Unknown100(__int64 a1)
{
  __int64 v1;

  v1 = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                      &GameData_21168b8, 0);
  GameRoutine_19350e0(v1);
  return 12;
}

#pragma GCC visibility pop
