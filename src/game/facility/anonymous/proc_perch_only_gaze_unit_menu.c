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
__int64 ScoutBaseProc_f6c060(__int64, _BYTE**, __int64, __int64, __int64,
                             __int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
char* GameRoutine_67ed20(_QWORD*);
extern __int64 (*GameData_20608e8[])();
extern __int64 (*GameData_2060968[])();
extern __int64* GameData_212e008[9];
extern __int64* GameData_2131a40[2];
void* game_97b2f0(__int64);
__int64
game_facility_anonymous_ProcPerchOnlyGazeUnitMenu_OnUnitDecide(__int64 a1);
__int64

game_facility_anonymous_ProcPerchOnlyGazeUnitMenu_OnUnitDecide(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  void* v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  struct {
    _QWORD v11[4];
    _QWORD* v12;
  } v11_;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;
  struct {
    _QWORD v15[4];
    _QWORD* v16;
  } v15_;
  const char* v17;

  v2 = *(_QWORD*)(a1 + 336);
  if (v2 == 0) {
    return 1;
  }
  v3 = __dynamic_cast(v2, GameData_212e008[0], GameData_2131a40[0], 0);
  if (v3 == 0) {
    return 1;
  }
  v4 = v3;
  v17 = "MID_PerchMenu_Part3_Confirm";
  v5 = *(_QWORD*)(v3 + 88);
  if (*(_BYTE*)(v5 + 2136) != 0) {
    v6 = game_97b2f0(v5 + 2104);
  }
  else {
    v6 = GameRoutine_67ed20(*(_QWORD**)(v5 + 392));
  }
  v15_.v15[0] = GameData_20608e8;
  v15_.v15[1] = v4;
  v13_.v14 = v13_.v13;
  v15_.v16 = v15_.v15;
  v11_.v12 = v11_.v11;
  v13_.v13[0] = GameData_2060968;
  v11_.v11[0] = GameData_2060968;
  ScoutBaseProc_f6c060(a1, (_BYTE**)&v17, (__int64)v6, (__int64)v15_.v15,
                       (__int64)v13_.v13, (__int64)v11_.v11);
  if (v11_.v12 == v11_.v11) {
    v8 = 32;
  }
  else {
    if (v11_.v12 == nullptr) {
      goto LABEL_12;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v11_.v12 + v8))((__int64)v11_.v12);
LABEL_12:
  if (v13_.v14 == v13_.v13) {
    v9 = 32;
  }
  else {
    if (v13_.v14 == nullptr) {
      goto LABEL_17;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v13_.v14 + v9))((__int64)v13_.v14);
LABEL_17:
  if (v15_.v16 == v15_.v15) {
    v10 = 32;
    goto LABEL_21;
  }
  if (v15_.v16 != nullptr) {
    v10 = 40;
  LABEL_21:
    (*(void (**)(__int64))(*v15_.v16 + v10))((__int64)v15_.v16);
  }
  return 12;
}

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
