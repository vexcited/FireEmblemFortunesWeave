#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Alignment_56b600(_QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_97b2f0(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern __int64 GameData_225d4e8;
__int64 UnitConfirmSelectMenu_Unknown84(__int64 result);
__int64 UnitConfirmSelectMenu_Unknown100(__int64 a1);

__int64 UnitConfirmSelectMenu_Unknown84(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  if (GameData_225d4e8 != 0) {
    v1 = result;
    v2 = 880;
    if (*(_BYTE*)(GameData_225d4e8 + 276) == 1) {
      v2 = 712;
    }
    v3 = GameRoutine_97b2f0(*(_QWORD*)(GameData_225d4e8 + v2));
    if (v3 != 0) {
      v4 = v3;
      v5 = ui_LayoutAccessor_FindTextBox(v1 + 952, "T_Check00_UnitName");
      if (v5 != 0) {
        GameRoutine_156c5d0(v5, v4, 0);
      }
    }
    result = ui_LayoutAccessor_FindAlignment(v1 + 952, "A_Name");
    if (result != 0) {
      return Alignment_56b600(result);
    }
  }
  return result;
}

__int64 UnitConfirmSelectMenu_Unknown100(__int64 a1)
{
  __int64 v1;
  int v2;
  __int64 result;
  int v4;
  int v5;

  if (GameData_225d4e8 == 0) {
    return 0;
  }
  v1 = *(_QWORD*)(a1 + 336);
  if (v1 == 0) {
    return 0;
  }
  v2 = *(_DWORD*)(v1 + 40);
  result = 2;
  if (v2 == 1) {
    v4 = 0;
  }
  else {
    v4 = 7;
  }
  if (v2 == 2) {
    v5 = 5;
  }
  else {
    v5 = v4;
  }
  *(_DWORD*)(GameData_225d4e8 + 152) = v5;
  return result;
}

#pragma GCC visibility pop
