#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
__int64 ProcTempleMiracleMenu_Unknown143(__int64 a1);
__int64 Manager_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ProcTempleMiracleMenu_Unknown6(__int64 a1);

__int64 ProcTempleMiracleMenu_Unknown143(__int64 a1)
{
  int v1;
  __int64* v2;
  __int64 v3;
  const char* v4;
  _QWORD v6[4];
  int v7;
  int v8;
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
  __int64 v21;

  v1 = *(unsigned __int8*)(a1 + 1064);
  v2 = msg_MessageManager_instance__ptr[0];
  v3 = *msg_MessageManager_instance__ptr[0];
  if (v1 == 1) {
    v4 = "MID_MiracleEquipMenu_Info_Help";
  }
  else {
    GameRoutine_a51e10(v3 + 14704, 0, 4, 0);
    v3 = *v2;
    v4 = "MID_MiracleEquipMenu_Help";
  }
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
  v20 = -1;
  v6[0] = GameData_212e348 + 2;
  v6[1] = 0xFFFF0001FFFF0000LL;
  v6[2] = 0xFFFF0004FFFF0002LL;
  v6[3] = 0xFFFF0006FFFF0005LL;
  v21 = 8;
  v7 = -65529;
  v8 = -65528;
  return GameRoutine_a4dbe0(v3, v4, 0, v6);
}

__int64 ProcTempleMiracleMenu_Unknown6(__int64 a1)
{
  int v1;
  __int64* v2;
  __int64 v3;
  const char* v4;
  _QWORD v6[4];
  int v7;
  int v8;
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
  __int64 v21;

  v1 = *(unsigned __int8*)(a1 + 8);
  v2 = msg_MessageManager_instance__ptr[0];
  v3 = *msg_MessageManager_instance__ptr[0];
  if (v1 == 1) {
    v4 = "MID_MiracleEquipMenu_Info_Help";
  }
  else {
    Manager_a51e10(v3 + 14704, 0, 4, 0);
    v3 = *v2;
    v4 = "MID_MiracleEquipMenu_Help";
  }
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
  v20 = -1;
  v6[0] = GameData_212e348 + 2;
  v6[1] = 0xFFFF0001FFFF0000LL;
  v6[2] = 0xFFFF0004FFFF0002LL;
  v6[3] = 0xFFFF0006FFFF0005LL;
  v21 = 8;
  v7 = -65529;
  v8 = -65528;
  return GameRoutine_a4dbe0(v3, v4, 0, v6);
}

#pragma GCC visibility pop
