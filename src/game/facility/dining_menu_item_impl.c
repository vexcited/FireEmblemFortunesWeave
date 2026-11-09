#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_15e7650(_QWORD* result, int, __int64);
__int64 GameRoutine_16ee370(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ee520(_QWORD);
__int64 GameRoutine_16ef100(_QWORD, _QWORD);
__int64 GameRoutine_16ef210(_QWORD, _QWORD);
__int64 GameRoutine_1789cf0(_QWORD, _QWORD);
__int64 GameRoutine_17b8f40(_QWORD, _QWORD);
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f369a0(_QWORD, _QWORD);
__int64 VolunteerArgs_947af0(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN* GameData_212c730;
extern __int64 (*GameData_20382c8[])();
extern __int64 (*GameData_2038448[])();
extern __int64 (*game_facility_anonymous_ProcDiningUnitMenu_vtable[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_UnitListSet_instance_;
extern __int64 game_hub_ProgressDisplayView_instance_;
extern __int64 game_hub_ProgressEventView_instance__ptr[6];
extern __int64* GameData_212dcd0;
extern __int64* GameData_212dff0[12];
extern __int64* GameData_212e030[4];
extern __int64* GameData_21312e0[10];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
_QWORD* DiningMenuItem_13fb2e0(__int64 a1);
__int64 DiningMenuItem_15f4610(__int64 a1);
__int64 DiningMenuItem_15f4790(__int64 a1);
__int64 DiningMenuItem_15f48a0(__int64 a1, __int64 a2, __int64 a3);
__int64 DiningMenuItem_15f4c60(_QWORD* a1);

_QWORD* DiningMenuItem_13fb2e0(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* result;
  __int64*** v11;
  __int64** v12;
  __int64** v13;
  __int64* v14;
  __int64* v15;
  _BOOL4 v16;
  __int64 v17;
  _QWORD v18[4];
  _QWORD* v19;
  __int64 v20;
  __int64 v21;

  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1216, 16, 0);
  GameRoutine_1789cf0(v2, "DiningUnitMenu");
  v3 = GameData_21312e0[0];
  *(_QWORD*)(v2 + 1184) = 0;
  *(_QWORD*)(v2 + 1192) = 0;
  *(_QWORD*)(v2 + 1200) = 0;
  *(_DWORD*)(v2 + 1208) = 0;
  *(_QWORD*)v2 = v3 + 2;
  *(_QWORD*)(v2 + 176) = v3 + 163;
  *(_QWORD*)(v2 + 1056) = v3 + 189;
  GameRoutine_f369a0(v2 + 1184, 3);
  v7 = *(_QWORD*)(v2 + 1184);
  v8 = *(_QWORD*)(v2 + 1192) - v7;
  if (v8 >= 1) {
    memset(v7, 0, v8, v4, v5, v6);
  }
  *(_QWORD*)v2 = game_facility_anonymous_ProcDiningUnitMenu_vtable;
  *(_QWORD*)(v2 + 176) = GameData_20382c8;
  *(_QWORD*)(v2 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr;
  *(_DWORD*)(*GameData_212dcd0 + 8) = -1;
  GameRoutine_657850(v2, GameData_212c730, "ProcDiningUnitMenu", 1, a1);
  v20 = v2;
  result = v18;
  v18[0] = GameData_2038448;
  v18[1] = &v20;
  v11 = *(__int64****)(game_UnitListSet_instance_ + 24);
  v19 = v18;
  v12 = *v11;
  v13 = v11[1];
  if (*v11 == v13) {
    goto LABEL_21;
  }
  do {
    v14 = *v12;
    v15 = v12[1];
    if (v15 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 1), 1u,
                                memory_order_relaxed);
    }
    if (v14 != nullptr) {
      v16 = (v14[6] & 0x20) == 0;
      if (v15 == nullptr) {
        goto LABEL_13;
      }
    }
    else {
      v16 = false;
      if (v15 == nullptr) {
        goto LABEL_13;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 1),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64*))(*v15 + 16))(v15);
      std___1___shared_weak_count___release_weak(v15);
      if (!v16) {
        goto LABEL_5;
      }
      goto LABEL_14;
    }
  LABEL_13:
    if (v16) {
    LABEL_14:
      v21 = **v12;
      if (v19 == nullptr) {
        GameRoutine_60a310(0, v9);
      }
      (*(void (**)(_QWORD*, __int64*))(*v19 + 48LL))(v19, &v21);
    }
  LABEL_5:
    v12 += 2;
  } while (v12 != v13);
  result = v19;
  if (v19 != v18) {
    if (v19 != nullptr) {
      v17 = 40;
      return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v17))(result,
                                                                         v9);
    }
    return result;
  }

LABEL_21:
  v17 = 32;
  return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v17))(result,
                                                                     v9);
}

__int64 DiningMenuItem_15f4610(__int64 a1)
{
  __int64 v1;
  _QWORD* v3;
  bool v4;
  __int64 v5;

  v1 = *(_QWORD*)(a1 + 8);
  v3 = (_QWORD*)game_hub_ProgressEventView_instance__ptr[0];
  if (*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] != 0) {
    GameRoutine_17b8f40(*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0],
                        1);
    v4 = *(_BYTE*)(*(_QWORD*)(a1 + 16) + 83LL) != 1 || *v3 == 0;
    if (!v4 && game_hub_ProgressDisplayView_instance_ != 0) {
      *(_BYTE*)(game_hub_ProgressDisplayView_instance_ + 153) = 1;
    }
  }
  v5 = *(_QWORD*)(v1 + 128);
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 48LL))(v5);
  }
  return 4;
}

__int64 DiningMenuItem_15f4790(__int64 a1)
{
  bool v1;

  v1 = *(_BYTE*)(*(_QWORD*)(a1 + 8) + 83LL) != 1 ||
       *(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] == 0;
  if (!v1 && game_hub_ProgressDisplayView_instance_ != 0) {
    *(_BYTE*)(game_hub_ProgressDisplayView_instance_ + 153) = 1;
  }
  return 3;
}

__int64 DiningMenuItem_15f48a0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;

  if ((*(_BYTE*)(a3 + 2) & 0x10) != 0) {
    return GameRoutine_16ef100(a2, "MID_Menu_Cause_Complete_Heal");
  }
  return result;
}

__int64 DiningMenuItem_15f4c60(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  const char* v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  _QWORD v11[2];
  char v12;
  int v13;
  int v14;
  char v15;
  __int64 v16;
  _QWORD v17[10];
  int v18;
  int v19;
  bool v20;
  char v21;

  v1 = a1[1];
  if (v1 != 0 && (v3 = __dynamic_cast(a1[1], GameData_212e030[0],
                                      GameData_212dff0[0], 0)) != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 1112LL))(v3);
  }
  else {
    v4 = v1 + 848;
  }
  v5 = "MID_HotelMenu_Individual_Help";
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v5 = "MID_HotelMenu_Individual_Part3_Help";
  }
  v6 = GameRoutine_16ee370(v17, v4, v5);
  v7 = VolunteerArgs_947af0(v6);
  v8 = (*(__int64 (**)(_QWORD*))(*a1 + 568LL))(a1);
  v16 = 0;
  v18 = 5;
  v19 = v8;
  v20 = (v7 & 4) != 0;
  v21 = 1;
  GameRoutine_15e7650(v17, v7, (__int64)v11);
  v9 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a1[1] + 192LL))(a1[1]);
  v12 = 1;
  v15 = 0;
  v16 = 0;
  v11[0] = "Tutorial";
  v11[1] = "MID_KeyHelp_Tutorial";
  v13 = 10;
  v14 = v9;
  GameRoutine_16ef210(v17, v11);
  return GameRoutine_16ee520(v17);
}

#pragma GCC visibility pop
