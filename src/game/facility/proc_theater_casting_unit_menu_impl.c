#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Registration_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
__int64 ProcTheaterCastingUnitMenu_1929880(__int64 a1);

__int64 ProcTheaterCastingUnitMenu_1929880(__int64 a1)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  _QWORD v5[4];
  int v6;
  int v7;
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
  __int64 v19;
  __int64 v20;

  v1 = msg_MessageManager_instance__ptr[0];
  if (*(_BYTE*)(*(_QWORD*)(a1 + 160) + 72LL) == 3) {
    v2 = 5;
  }
  else {
    v2 = 3;
  }
  Registration_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0, v2, 0);
  v3 = *v1;
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
  v18 = -1;
  v19 = -1;
  v5[0] = GameData_212e348 + 2;
  v5[1] = 0xFFFF0001FFFF0000LL;
  v5[2] = 0xFFFF0004FFFF0002LL;
  v5[3] = 0xFFFF0006FFFF0005LL;
  v20 = 8;
  v6 = -65529;
  v7 = -65528;
  return GameRoutine_a4dbe0(v3, "MID_Menu_PlayerFacility_UnitSelect_Help", 0,
                            v5);
}

#pragma GCC visibility pop
