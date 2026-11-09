#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15e8430(_QWORD*);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 GameData_21c9d00;
extern __int64 GameData_21f3ff8;
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char* GameData_1fafca8[4];
__int64 ProcTheaterWatchUnitMenu_Unknown84(_QWORD* a1);
__int64 ProcTheaterWatchUnitMenu_Unknown160();

__int64 ProcTheaterWatchUnitMenu_Unknown84(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char* v6;

  result = GameRoutine_15e8430(a1);
  v3 = *(unsigned int*)(GameData_21f3ff8 + 8);
  if ((v3 & 0x80000000) == 0) {
    v4 = *(_QWORD*)(*(_QWORD*)(GameData_21c9d00 + 64) + 8 * v3);
    if (v4 != 0) {
      ui_LayoutAccessor_SetPaneVisible(a1 + 106, "N_HelpDetail", 1);
      GameRoutine_1562060(a1 + 106, "T_Txt", *(_QWORD*)(v4 + 48));
      v5 = *(unsigned __int8*)(v4 + 72);
      if (v5 == 4) {
        v6 = nullptr;
      }
      else {
        v6 = GameData_1fafca8[v5];
      }
      return GameRoutine_1562060(a1 + 106, "T_Genre", v6);
    }
  }
  return result;
}

__int64 ProcTheaterWatchUnitMenu_Unknown160()
{
  __int64* v0;
  __int64 v1;
  _QWORD v3[4];
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v0 = msg_MessageManager_instance__ptr[0];
  GameRoutine_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0, 2, 0);
  v1 = *v0;
  v6 = -1;
  v7 = -1;
  v8 = -1;
  v9 = -1;
  v10 = -1;
  v11 = -1;
  v12 = -1;
  v13 = -1;
  v14 = -1;
  v15 = -1;
  v16 = -1;
  v17 = -1;
  v3[0] = GameData_212e348 + 2;
  v3[1] = 0xFFFF0001FFFF0000LL;
  v3[2] = 0xFFFF0004FFFF0002LL;
  v3[3] = 0xFFFF0006FFFF0005LL;
  v18 = 8;
  v4 = -65529;
  v5 = -65528;
  return GameRoutine_a4dbe0(v1, "MID_Menu_Facility_UnitSelect_Help", 0, v3);
}

#pragma GCC visibility pop
