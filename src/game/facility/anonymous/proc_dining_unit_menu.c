#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
__int64
ProcDiningUnitMenu_Unknown160_alt1() __asm__("ProcDiningUnitMenu_Unknown160");
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 Manager_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*game_facility_FacilityUnitMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager;
__int64
ProcDiningUnitMenu_Unknown6_alt1() __asm__("ProcDiningUnitMenu_Unknown6");
__int64 game_facility_anonymous_ProcDiningUnitMenu_CreateBind_closure_Invoke(
    __int64 a1, __int64* a2);
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
void GameHr_a51e10(__int64, unsigned int, unsigned int, int);
char* ProcDiningUnitMenu_Unknown160();
char* ProcDiningUnitMenu_Unknown6();

char* ProcDiningUnitMenu_Unknown160()
{
  __int64* v0;

  v0 = msg_MessageManager_instance__ptr[0];
  GameHr_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0, 3u, 0);
  return GameRoutine_a4dbe0_alt1(*v0, "MID_Menu_Facility_UnitSelect_Help", 0);
}

char* ProcDiningUnitMenu_Unknown6()
{
  __int64* v0;

  v0 = msg_MessageManager_instance__ptr[0];
  GameHr_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0, 3u, 0);
  return GameRoutine_a4dbe0_alt1(*v0, "MID_Menu_Facility_UnitSelect_Help", 0);
}

__int64 game_facility_anonymous_ProcDiningUnitMenu_CreateBind_closure_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v2 = *a2;
  v3 = **(_QWORD**)(a1 + 8);
  v4 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 104, 16, 0);
  *(_WORD*)(v4 + 16) = 0;
  *(_DWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 88) = v2;
  *(_WORD*)(v4 + 80) = 257;
  *(_BYTE*)(v4 + 82) = 1;
  *(_QWORD*)v4 = game_facility_FacilityUnitMenuItem_vtable;
  *(_QWORD*)(v4 + 8) = 0;
  *(_WORD*)(v4 + 96) = 259;
  return BasicMenuCursor_16e0c00(v3, v4);
}

#pragma GCC visibility pop
