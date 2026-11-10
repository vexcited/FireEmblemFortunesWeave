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
__int64 GameRoutine_1789cf0(_QWORD, _QWORD);
__int64 GameRoutine_f369a0(_QWORD, _QWORD);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__n128 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN* GameData_212c730;
extern __int64 (*GameData_2112be0[])();
extern __int64 (*GameData_2112e60[])();
extern __int64 (*game_facility_anonymous_ProcVolunteerUnitMenu_vtable[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr[])();
extern __int64* GameData_212cc60[59];
extern __int64* GameData_212dcd0;
extern __int64* GameData_21312e0[10];
extern __int64 game_UnitListSet_instance_;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
_QWORD* game_facility_anonymous_ProcVolunteerUnitMenu_CreateBind(__int64 a1);

_QWORD* game_facility_anonymous_ProcVolunteerUnitMenu_CreateBind(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* result;
  __int64*** v15;
  __int64** v16;
  __int64** v17;
  __int64* v18;
  __int64* v19;
  _BOOL4 v20;
  __int64 v21;
  _QWORD v22[4];
  _QWORD* v23;
  __int64 v24;

  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1216, 16, 0);
  GameRoutine_1789cf0(v2, "VolunteerUnitMenu");
  v3 = GameData_21312e0[0];
  *(_QWORD*)(v2 + 1184) = 0;
  *(_QWORD*)(v2 + 1192) = 0;
  *(_QWORD*)(v2 + 1200) = 0;
  *(_DWORD*)(v2 + 1208) = 0;
  *(_QWORD*)v2 = v3 + 2;
  *(_QWORD*)(v2 + 176) = v3 + 163;
  *(_QWORD*)(v2 + 1056) = v3 + 189;
  GameRoutine_f369a0(v2 + 1184, 2);
  v7 = *(_QWORD*)(v2 + 1184);
  v8 = *(_QWORD*)(v2 + 1192) - v7;
  if (v8 >= 1) {
    memset(v7, 0, v8, v4, v5, v6);
  }
  *(_QWORD*)v2 = game_facility_anonymous_ProcVolunteerUnitMenu_vtable;
  *(_QWORD*)(v2 + 176) = GameData_2112be0;
  *(_QWORD*)(v2 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr;
  v9 = GameData_212dcd0;
  *(_QWORD*)(*GameData_212dcd0 + 56) = *(_QWORD*)(*GameData_212dcd0 + 48);
  ProcInst_657850(v2, GameData_212c730, "ProcVolunteerUnitMenu", 1, a1);
  v12 = *(unsigned int*)(*v9 + 8);
  if ((v12 & 0x80000000) != 0) {
    v13 = 0;
  }
  else {
    v13 = *(_QWORD*)(*(_QWORD*)(*GameData_212cc60[0] + 64) + 8 * v12);
  }
  result = v22;
  v22[2] = v13;
  v22[0] = GameData_2112e60;
  v22[1] = v2;
  v15 = *(__int64****)(game_UnitListSet_instance_ + 24);
  v23 = v22;
  v16 = *v15;
  v17 = v15[1];
  if (*v15 == v17) {
    goto LABEL_24;
  }
  do {
    v18 = *v16;
    v19 = v16[1];
    if (v19 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 1), 1u,
                                memory_order_relaxed);
    }
    if (v18 != nullptr) {
      v20 = (v18[6] & 0x20) == 0;
      if (v19 == nullptr) {
        goto LABEL_16;
      }
    }
    else {
      v20 = false;
      if (v19 == nullptr) {
        goto LABEL_16;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 1),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64*))(*v19 + 16))(v19);
      std___1___shared_weak_count___release_weak(v19);
      if (!v20) {
        goto LABEL_8;
      }
      goto LABEL_17;
    }
  LABEL_16:
    if (v20) {
    LABEL_17:
      v24 = **v16;
      if (v23 == nullptr) {
        GameRoutine_60a310(0);
      }
      (*(void (**)(_QWORD*, __int64*))(*v23 + 48LL))(v23, &v24);
    }
  LABEL_8:
    v16 += 2;
  } while (v16 != v17);
  result = v23;
  if (v23 != v22) {
    if (v23 != nullptr) {
      v21 = 40;
      return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, __int64))(
          *result + v21))(result, v10, v11);
    }
    return result;
  }
LABEL_24:
  v21 = 32;
  return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, __int64))(*result + v21))(
      result, v10, v11);
}

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
