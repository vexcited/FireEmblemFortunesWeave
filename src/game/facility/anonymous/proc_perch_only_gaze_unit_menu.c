#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_928b80(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*game_facility_FacilityUnitMenuItem_vtable[])();
extern __int64 GameData_21f3ff8;
extern __int64 GameData_225b938;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64
game_facility_anonymous_ProcPerchOnlyGazeUnitMenu_OnUnitDecide_closure_Invoke(
    __int64 a1);
__int64
game_facility_anonymous_ProcPerchOnlyGazeUnitMenu_CreateBind_closure_Invoke(
    __int64 a1, __int64* a2);
__int64

game_facility_anonymous_ProcPerchOnlyGazeUnitMenu_OnUnitDecide_closure_Invoke(
    __int64 a1)
{
  __int64 v1;

  v1 = GameData_21f3ff8;
  *(_QWORD*)(GameData_21f3ff8 + 56) = *(_QWORD*)(GameData_21f3ff8 + 48);
  GameRoutine_928b80(v1, *(_QWORD*)(*(_QWORD*)(a1 + 8) + 88LL));
  if (GameData_225b938 != 0) {
    *(_DWORD*)(GameData_225b938 + 152) = 3;
  }
  return 4;
}

__int64

game_facility_anonymous_ProcPerchOnlyGazeUnitMenu_CreateBind_closure_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      104, 16, 0);
  *(_WORD*)(v4 + 16) = 0;
  *(_DWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 88) = v3;
  *(_WORD*)(v4 + 80) = 257;
  *(_BYTE*)(v4 + 82) = 1;
  *(_QWORD*)v4 = game_facility_FacilityUnitMenuItem_vtable;
  *(_QWORD*)(v4 + 8) = 0;
  *(_WORD*)(v4 + 96) = 3;
  return BasicMenuCursor_16e0c00(v2, v4);
}

#pragma GCC visibility pop
