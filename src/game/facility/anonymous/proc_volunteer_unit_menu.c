#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
__int64 ProcVolunteerUnitMenu_Unknown160();
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*game_facility_anonymous_VolunteerUnitMenuItem_vtable[])();
extern __int64 GameData_2243f70;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64
game_facility_anonymous_ProcVolunteerUnitMenu_OnUnitDecide_closure_Invoke();
__int64 game_facility_anonymous_ProcVolunteerUnitMenu_CreateBind_closure_Invoke(
    __int64 a1, __int64* a2);

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

__int64

game_facility_anonymous_ProcVolunteerUnitMenu_OnUnitDecide_closure_Invoke()
{
  if (GameData_2243f70 != 0) {
    *(_DWORD*)(GameData_2243f70 + 152) = 2;
  }
  return 4;
}

__int64 game_facility_anonymous_ProcVolunteerUnitMenu_CreateBind_closure_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      112, 16, 0);
  *(_WORD*)(v5 + 16) = 0;
  *(_DWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 88) = v4;
  *(_QWORD*)(v5 + 104) = v3;
  *(_WORD*)(v5 + 80) = 257;
  *(_BYTE*)(v5 + 82) = 1;
  *(_WORD*)(v5 + 96) = 259;
  *(_QWORD*)v5 = game_facility_anonymous_VolunteerUnitMenuItem_vtable;
  *(_QWORD*)(v5 + 8) = 0;
  return BasicMenuCursor_16e0c00(v2, v5);
}

#pragma GCC visibility pop
