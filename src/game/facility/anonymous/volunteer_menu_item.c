#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
_QWORD* GameRoutine_9591b0(_QWORD* __return_ptr, _QWORD);
__int64 Alignment_56b600(void);
__int64 GameRoutine_143f2e0(_QWORD);
__int64 GameRoutine_145e440(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1462780(_QWORD, _QWORD);
__int64 GameRoutine_1462ac0(void);
__int64 GameRoutine_1562060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1584200(_QWORD, _QWORD);
__int64 GameRoutine_15e7650(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_16eb960(_QWORD, _QWORD);
__int64 GameRoutine_16ee370(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ee520(_QWORD);
__int64 GameRoutine_16ef100(_QWORD, _QWORD);
__int64 GameRoutine_16ef210(_QWORD, _QWORD);
__int64 GameRoutine_1927480(_QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_90dc20(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_1aa0aa7;
extern __int64 (*game_facility_anonymous_VolunteerSubMenuItem_vtable[])();
extern __int64 GameData_212ddf8[2];
extern __int64 GameData_21f4340;
extern __int64 GameData_21f4348;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_UnitListSet_instance_;
extern __int64* GameData_212cc60[59];
extern __int64* GameData_212dcd0;
extern __int64* GameData_212dff0[12];
extern __int64* GameData_212e030[4];
extern char GameData_1a9f09e;
__int64 VolunteerMenuItem_Unknown25_9bbfc0(__int64 a1);
__int64 VolunteerMenuItem_RightCall(__int64 a1);
__int64 VolunteerMenuItem_Unknown75(__int64 a1, __int64 a2);
__int64 VolunteerMenuItem_Unknown76(__int64 a1, __int64 a2, int a3);
__int64 VolunteerMenuItem_Unknown25_19261a0(_QWORD* a1);
__int64 VolunteerMenuItem_Unknown72();
__int64 VolunteerMenuItem_Unknown73(__int64 a1);

__int64 VolunteerMenuItem_Unknown25_9bbfc0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  int v3;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  bool v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  int v20;
  _DWORD* v21;
  int v22;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;

  v3 = *(_DWORD*)(a1 + 84);
  result = 1;
  if (v3 == 0) {
    v31 = v1;
    v32 = v2;
    v6 = *(_QWORD*)(a1 + 8);
    v28 = a1;
    v29 = 1;
    v7 = *(_QWORD*)(v6 + 152);
    v30 = 0;
    if (v7 != 0) {
      v8 = v7;
    }
    else {
      v8 = v6;
    }
    v9 = GameRoutine_16eb960(v8, &v28);
    v10 = (__int64*)GameData_21f4340;
    v11 = GameData_21f4348;
    if (GameData_21f4340 != GameData_21f4348) {
      v12 = v9;
      v13 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      do {
        v15 = *v10;
        v16 = fw_memory_HeapManager_Allocate(*v13, 160, 16, 0);
        v14 = true;
        v17 = v16;
        *(_WORD*)(v16 + 16) = 0;
        *(_DWORD*)(v16 + 40) = 0;
        *(_QWORD*)(v16 + 48) = 0;
        *(_QWORD*)(v16 + 56) = 0;
        *(_QWORD*)(v16 + 64) = 0;
        *(_QWORD*)(v16 + 72) = 0;
        *(_WORD*)(v16 + 80) = 257;
        *(_QWORD*)(v16 + 128) = 0;
        *(_QWORD*)v16 = game_facility_anonymous_VolunteerSubMenuItem_vtable;
        *(_QWORD*)(v16 + 8) = 0;
        *(_QWORD*)(v16 + 144) = v15;
        *(_BYTE*)(v16 + 82) = 1;
        if (v15 != 0) {
          v18 = GameRoutine_90dc20(game_GameModeData_instance_ + 152,
                                   *(_QWORD*)(v15 + 112));
          if ((v18 & 0x80000000) != 0) {
            v14 = true;
          }
          else {
            v19 = *(_QWORD*)(*(_QWORD*)(game_GameModeData_instance_ + 160) +
                             8LL) +
                  32LL * v18;
            v20 = *(_DWORD*)(v19 + 4);
            v21 = *(_DWORD**)(*(_QWORD*)(v19 + 16) + 24LL);
            v22 = v21[105];
            if (v22 > 2 && v21[103] <= v20) {
              if ((unsigned int)v22 <= 3) {
                goto LABEL_32;
              }
              v27 = 4;
            }
            else if (v22 > 1 && v21[102] <= v20) {
              if ((unsigned int)v22 <= 2) {
                goto LABEL_32;
              }
              v27 = 3;
            }
            else if (v22 >= 1 && v21[101] <= v20) {
              if ((unsigned int)v22 <= 1) {
              LABEL_32:
                v14 = false;
                goto LABEL_8;
              }
              v27 = 2;
            }
            else {
              v26 = (int)v21[104];
              if ((int)v26 >= v22) {
                goto LABEL_32;
              }
              v27 = v26 + 1;
            }
            v14 = v21[v27 + 100] != 0;
          }
        }
      LABEL_8:
        *(_BYTE*)(v17 + 82) = v14;
        GameRoutine_16e0c00(v12, v17);
        ++v10;
      } while (v10 != (__int64*)v11);
    }
    return 10;
  }
  return result;
}

__int64 VolunteerMenuItem_RightCall(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  char v3;

  v1 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(v1 + 152) != 0) {
    v2 = *(_QWORD*)(v1 + 152);
  }
  else {
    v2 = *(_QWORD*)(a1 + 8);
  }
  v3 = GameRoutine_1462ac0();
  GameRoutine_1462780(v2, v3 & 1);
  return 9;
}

__int64 VolunteerMenuItem_Unknown75(__int64 a1, __int64 a2)
{
  int v3;
  _QWORD v5[2];
  char v6;
  int v7;
  int v8;
  char v9;
  __int64 v10;

  v3 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 192LL))(
      *(_QWORD*)(a1 + 8));
  v9 = 0;
  v10 = 0;
  v5[0] = &GameData_1a9f09e;
  v5[1] = "MID_TempleMenu_MiracleEquip";
  v6 = 1;
  v7 = 11;
  v8 = v3;
  return GameRoutine_16ef210(a2, v5);
}

__int64 VolunteerMenuItem_Unknown76(__int64 a1, __int64 a2, int a3)
{
  __int64 result;

  if ((a3 & 0x100000) != 0) {
    return GameRoutine_16ef100(a2, "MID_Menu_Cause_LvMaxVolunteer");
  }
  return result;
}

__int64 VolunteerMenuItem_Unknown25_19261a0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = a1[1];
  if (*(_QWORD*)(v2 + 152) != 0) {
    v3 = *(_QWORD*)(v2 + 152);
  }
  else {
    v3 = a1[1];
  }
  GameRoutine_1927480(v3);
  return 9;
}

__int64 VolunteerMenuItem_Unknown72()
{
  _QWORD v1[2];

  v1[1] = &GameData_1aa0aa7;
  v1[0] = game_HashString(&GameData_1aa0aa7);
  return GameRoutine_143f2e0(v1);
}

__int64 VolunteerMenuItem_Unknown73(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  bool v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  int v21;
  _BYTE v23[32];
  _QWORD v24[10];
  char v25;
  int v26;
  int v27;
  bool v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  const char* v32;
  char* v33;
  int v34;
  char v35;
  __int64* v36;
  int v37;

  ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)(a1 + 8) + 848LL, "N_HelpDetail",
                                   1);
  GameRoutine_1562680(*(_QWORD*)(a1 + 8) + 848LL, "Type_Volunteer", 1.0);
  GameRoutine_1562680(*(_QWORD*)(a1 + 8) + 848LL, "State_Default", 1.0);
  if (ui_LayoutAccessor_FindAlignment(*(_QWORD*)(a1 + 8) + 848LL, "A_Title") !=
      0) {
    Alignment_56b600();
  }
  v2 = GameData_212dcd0;
  if (*GameData_212dcd0 != 0 &&
      ((v3 = *(unsigned int*)(*GameData_212dcd0 + 8)) & 0x80000000) == 0 &&
      (v4 = *(_QWORD*)(*(_QWORD*)(*GameData_212cc60[0] + 64) + 8 * v3)) != 0) {
    v5 = *(_QWORD*)(v4 + 88);
  }
  else {
    v5 = 0;
  }
  GameRoutine_1562060(*(_QWORD*)(a1 + 8) + 848LL, "T_Txt", v5);
  GameRoutine_1560070(&v29, *(_QWORD*)(a1 + 8) + 848LL, "L_MiracleLv");
  GameRoutine_1584200(&v29, *(_QWORD*)(a1 + 88));
  if (v30 != 0) {
    std___1___shared_weak_count___release_weak(v30);
  }
  v6 = *(_QWORD*)(a1 + 8);
  if (v6 != 0 && (v7 = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                                      GameData_212dff0[0], 0)) != 0) {
    v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 1112LL))(v7);
    v9 = *v2;
    if (*v2 == 0) {
      goto LABEL_18;
    }
  }
  else {
    v8 = v6 + 848;
    v9 = *v2;
    if (*v2 == 0) {
      goto LABEL_18;
    }
  }
  v10 = *(unsigned int*)(v9 + 8);
  if ((v10 & 0x80000000) == 0) {
    v11 = *(_QWORD*)(*(_QWORD*)(*GameData_212cc60[0] + 64) + 8 * v10);
    if (v11 != 0) {
      v12 = *(_QWORD*)(v11 + 96);
      goto LABEL_19;
    }
  }

LABEL_18:
  v12 = 0;

LABEL_19:
  GameRoutine_16ee370(v23, v8, v12);
  v13 = *(unsigned int*)(a1 + 84);
  v36 = nullptr;
  GameRoutine_15e7650(v23, v13, &v31);
  v37 = 0;
  v14 = *(_DWORD*)(a1 + 84);
  v15 = *(_QWORD*)(game_UnitListSet_instance_ + 24);
  v36 = &v31;
  v31 = GameData_212ddf8[0] + 16;
  v32 = (const char*)&v37;
  GameRoutine_145e440(v15, &v31, 2);
  if (v36 == &v31) {
    v16 = 32;
  }
  else {
    if (v36 == nullptr) {
      goto LABEL_24;
    }
    v16 = 40;
  }
  (*(void (**)(void))(*v36 + v16))();

LABEL_24:
  if ((v14 & 0x40) != 0) {
    v26 = v37;
    v27 = 2;
  }
  GameRoutine_9591b0(&v31, *(_QWORD*)(a1 + 88));
  v17 = (*(_DWORD*)(a1 + 84) & 0x70000) != 0;
  if ((v31 & 1) != 0) {
    v18 = v33;
  }
  else {
    v18 = (char*)&v31 + 1;
  }
  GameRoutine_60a020(v24, v18);
  v28 = v17;
  if ((v31 & 1) != 0 && v33 != nullptr) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v19);
  }
  v20 = *(_QWORD*)(a1 + 8);
  v25 = 0;
  v24[9] = 0x100000006LL;
  v21 = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 192LL))(v20);
  v35 = 0;
  v36 = nullptr;
  v31 = (__int64)"Tutorial";
  v32 = "MID_KeyHelp_Tutorial";
  LOBYTE(v33) = 1;
  HIDWORD(v33) = 10;
  v34 = v21;
  GameRoutine_16ef210(v23, &v31);
  return GameRoutine_16ee520(v23);
}

#pragma GCC visibility pop
