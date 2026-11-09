#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
__int64 ProcVolunteerUnitMenu_Unknown160();

__int64 ProcVolunteerUnitMenu_Unknown160()
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
  return GameRoutine_a4dbe0(v1, "MID_Menu_PlayerFacility_UnitSelect_Help", 0,
                            v3);
}

#pragma GCC visibility pop
