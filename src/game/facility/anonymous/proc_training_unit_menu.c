#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
__int64 ProcTrainingUnitMenu_Unknown160_alt1() __asm__(
    "ProcTrainingUnitMenu_Unknown160");
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 Manager_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_facility_FacilityUnitMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212e008[9];
extern __int64* GameData_2131a40[2];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6c1f60(void);
__int64
ProcTrainingUnitMenu_Unknown6_alt1() __asm__("ProcTrainingUnitMenu_Unknown6");
__int64* ProcTrainingUnitMenu_15f9440(__int64* result, _QWORD* a2);
bool game_facility_anonymous_ProcTrainingUnitMenu_OnInit_closure_Invoke_15f9930(
    __int64 a1, __int64 a2);
__int64 game_facility_anonymous_ProcTrainingUnitMenu_CreateBind_closure_Invoke(
    __int64 a1, __int64* a2);
__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, float);
__int64 game_util_Format(const char*, ...);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64
game_facility_anonymous_ProcTrainingUnitMenu_OnInit_closure_Invoke_15f97a0(
    __int64 a1, __int64 a2, _DWORD* a3);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
void GameHr_a51e10(__int64, unsigned int, unsigned int, int);
char* ProcTrainingUnitMenu_Unknown160();
char* ProcTrainingUnitMenu_Unknown6();
__attribute__((swiftcall)) void game_941ce0(PSEUDO_X8, __int64);
__int64 FacilityUnitMenu_15e8f40(__int64*, _BYTE*);
__int64 FacilityUtil_948620(__int64, __int64**);
__int64 GameRoutine_156d580(__int64);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1562cf0(__int64 result, unsigned int*);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_facility_15e8430(__int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, const char*, char);
extern __int64 (*GameData_2064208[])();
extern __int64 (*GameData_2064288[])();
extern __int64 (*GameData_211cdf8[])();
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64 game_kVariableHubFacilityForced;
void LayoutAccessor_1562060(__int64*, const char*, const char*);
void ProcTrainingUnitMenu_15f9440_alt1(__int64*, _QWORD*) __asm__(
    "ProcTrainingUnitMenu_15f9440");
void __attribute__((noreturn)) GameRoutine_60a310();
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 (***ProcTrainingUnitMenu_Unknown84(__int64* a1))();

__int64 (***ProcTrainingUnitMenu_Unknown84(__int64* a1))()
{
  char* v2;
  __int64 v3;
  __int64* v4;
  char* v5;
  __int64 v6;
  __int64* v7;
  char* v8;
  __int64 v9;
  __int64* v10;
  char* v11;
  __int64 v12;
  __int64* v13;
  char* v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 i;
  char* v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  int v25;
  char* v26;
  int v27;
  __int64 v28;
  unsigned int v29;
  __int64 v30;
  const char* v31;
  char* v32;
  unsigned int* v33;
  __int64 v34;
  char* v35;
  __int64 v36;
  __int64 v37;
  char* v38;
  __int64 (***result)();
  __int64 v40;
  __int64 v41;
  _QWORD* v42;
  _QWORD* v43;
  __int64* v44;
  __int64* v45;
  __int64 v46;
  _BYTE* v47;
  __int64 v48;
  struct {
    __int64 (**v49)();
    __int64 v50;
  } v49_;
  struct {
    __int64 (**v51)();
    __int64 (***v52)();
    __int64 v53;
    int* v54;
    __int64** v55;
  } v51_;
  int v56;

  game_facility_15e8430((__int64)a1);
  v2 = game_util_Format_alt1("L_HelpItem%02d", 0);
  LayoutAccessor_1560070((void*)(&v51_.v51), a1 + 106, v2);
  if (v51_.v52 != nullptr) {
    v3 = std___1___shared_weak_count_lock_alt1((__int64)v51_.v52);
    v4 = (__int64*)v51_.v51;
    if (v51_.v52 != nullptr) {
      std___1___shared_weak_count___release_weak_alt1((__int64)v51_.v52);
    }
    if (v3 != 0 && v4 != nullptr) {
      LayoutAccessor_155e830((__int64)v4, 0);
    }
    else if (v3 == 0) {
      goto LABEL_10;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak_alt1(v3);
    }
  }
LABEL_10:
  v5 = game_util_Format_alt1("L_HelpItem%02d", 1);
  LayoutAccessor_1560070((void*)(&v51_.v51), a1 + 106, v5);
  if (v51_.v52 != nullptr) {
    v6 = std___1___shared_weak_count_lock_alt1((__int64)v51_.v52);
    v7 = (__int64*)v51_.v51;
    if (v51_.v52 != nullptr) {
      std___1___shared_weak_count___release_weak_alt1((__int64)v51_.v52);
    }
    if (v6 != 0 && v7 != nullptr) {
      LayoutAccessor_155e830((__int64)v7, 0);
    }
    else if (v6 == 0) {
      goto LABEL_19;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak_alt1(v6);
    }
  }
LABEL_19:
  v8 = game_util_Format_alt1("L_HelpItem%02d", 2);
  LayoutAccessor_1560070((void*)(&v51_.v51), a1 + 106, v8);
  if (v51_.v52 != nullptr) {
    v9 = std___1___shared_weak_count_lock_alt1((__int64)v51_.v52);
    v10 = (__int64*)v51_.v51;
    if (v51_.v52 != nullptr) {
      std___1___shared_weak_count___release_weak_alt1((__int64)v51_.v52);
    }
    if (v9 != 0 && v10 != nullptr) {
      LayoutAccessor_155e830((__int64)v10, 0);
    }
    else if (v9 == 0) {
      goto LABEL_28;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak_alt1(v9);
    }
  }
LABEL_28:
  v11 = game_util_Format_alt1("L_HelpItem%02d", 3);
  LayoutAccessor_1560070((void*)(&v51_.v51), a1 + 106, v11);
  if (v51_.v52 != nullptr) {
    v12 = std___1___shared_weak_count_lock_alt1((__int64)v51_.v52);
    v13 = (__int64*)v51_.v51;
    if (v51_.v52 != nullptr) {
      std___1___shared_weak_count___release_weak_alt1((__int64)v51_.v52);
    }
    if (v12 != 0 && v13 != nullptr) {
      LayoutAccessor_155e830((__int64)v13, 0);
    }
    else if (v12 == 0) {
      goto LABEL_37;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak_alt1(v12);
    }
  }
LABEL_37:
  v14 = game_util_Format_alt1("L_HelpItem%02d", 4);
  LayoutAccessor_1560070((void*)(&v51_.v51), a1 + 106, v14);
  if (v51_.v52 != nullptr) {
    v15 = std___1___shared_weak_count_lock_alt1((__int64)v51_.v52);
    v16 = (__int64*)v51_.v51;
    if (v51_.v52 != nullptr) {
      std___1___shared_weak_count___release_weak_alt1((__int64)v51_.v52);
    }
    if (v15 != 0 && v16 != nullptr) {
      LayoutAccessor_155e830((__int64)v16, 0);
    }
    else if (v15 == 0) {
      goto LABEL_46;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak_alt1(v15);
    }
  }
LABEL_46:
  if (game_gmap_GmapClock_instance_ != 0) {
    v17 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v17 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  game_941ce0((void*)((__int64*)&v49_.v49), v17);
  v18 = (__int64)v49_.v49;
  if ((__int64 (**)(void))v49_.v50 != v49_.v49) {
    for (i = 0; i < (v49_.v50 - (__int64)v49_.v49) >> 3; ++i) {
      v20 = game_util_Format_alt1("L_HelpItem%02d", i);
      LayoutAccessor_1560070((void*)(&v51_.v51), a1 + 106, v20);
      if (v51_.v52 != nullptr) {
        v21 = std___1___shared_weak_count_lock_alt1((__int64)v51_.v52);
        v22 = (__int64*)v51_.v51;
        if (v51_.v52 != nullptr) {
          std___1___shared_weak_count___release_weak_alt1((__int64)v51_.v52);
        }
        if (v21 != 0 && v22 != nullptr) {
          LayoutAccessor_155e830((__int64)v22, 1);
          LayoutAccessor_1562060(
              v22, "T_Txt", *(const char**)(*(_QWORD*)(v18 + 8 * i) + 32LL));
          v23 = *(_QWORD*)(v18 + 8 * i);
          v56 = 0;
          v51_.v55 = (__int64**)&v51_.v51;
          v51_.v51 = GameData_211cdf8;
          v51_.v52 = (__int64 (***)(void))v22;
          v51_.v53 = v23 + 90;
          v51_.v54 = &v56;
          GameRoutine_156d580((__int64)&v51_.v51);
          if (v51_.v55 == (__int64**)&v51_.v51) {
            v24 = 4;
          LABEL_63:
            ((void (*)(void*))(*v51_.v55)[v24])(v51_.v55);
          }
          else if (v51_.v55 != nullptr) {
            v24 = 5;
            goto LABEL_63;
          }
          v25 = v56;
          if (v56 <= 3) {
            do {
              v26 = game_util_Format_alt1("IconMastery%02d", v25);
              ui_LayoutAccessor_SetPaneVisible((__int64)v22, v26, 0);
              v27 = v56;
              v25 = ++v56;
            } while (v27 < 3);
          }
          v28 = *(_QWORD*)(v18 + 8 * i);
          ProcTrainingUnitMenu_15f9440_alt1((__int64*)&v51_.v51, a1);
          v29 = FacilityUtil_948620(v28, (__int64**)&v51_.v51);
          if (v51_.v51 != nullptr) {
            v30 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v30 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v30,
                (__int64)v51_.v51);
          }
          v31 = "Icon_NotRide";
          if ((v29 & 0x8000) == 0) {
            v31 = "Icon_Default";
          }
          if (v29 >= 0x10000) {
            v32 = "Disable";
          }
          else {
            v32 = "Enable";
          }
          if (v29 >= 0x10000) {
            v33 = (unsigned int*)"Icon_Disable";
          }
          else {
            v33 = (unsigned int*)v31;
          }
          LayoutAccessor_1562cf0((__int64)v22, (unsigned int*)v32);
          LayoutAccessor_1562cf0((__int64)v22, v33);
        LABEL_79:
          if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
            std___1___shared_weak_count___release_weak_alt1(v21);
          }
          goto LABEL_51;
        }
        if (v21 != 0) {
          goto LABEL_79;
        }
      }
    LABEL_51:
      v18 = (__int64)v49_.v49;
    }
  }
  if (v18 != 0) {
    v34 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v34 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v34, v18);
  }
  v35 = game_util_Format_alt1("L_UnitInfo%02d", 0);
  LayoutAccessor_1560070((void*)(&v51_.v51), a1 + 106, v35);
  v49_.v49 = nullptr;
  v49_.v50 = 0;
  if (v51_.v52 != nullptr) {
    v49_.v50 = std___1___shared_weak_count_lock_alt1((__int64)v51_.v52);
    if (v49_.v50 != 0) {
      v49_.v49 = v51_.v51;
    }
    if (v51_.v52 != nullptr) {
      std___1___shared_weak_count___release_weak_alt1((__int64)v51_.v52);
    }
    if (v49_.v49 != nullptr) {
      v51_.v51 = GameData_2064208;
      v51_.v52 = &v49_.v49;
      v51_.v55 = (__int64**)&v51_.v51;
      GameRoutine_156d580((__int64)&v51_.v51);
      if (v51_.v55 == (__int64**)&v51_.v51) {
        v36 = 4;
        goto LABEL_95;
      }
      if (v51_.v55 != nullptr) {
        v36 = 5;
      LABEL_95:
        ((void (*)(void*))(*v51_.v55)[v36])(v51_.v55);
      }
    }
  }
  v37 = v49_.v50;
  if (v49_.v50 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v49_.v50 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
    std___1___shared_weak_count___release_weak_alt1(v37);
  }
  v38 = game_util_Format_alt1("L_UnitInfo%02d", 1);
  LayoutAccessor_1560070((void*)(&v51_.v51), a1 + 106, v38);
  result = v51_.v52;
  v49_.v49 = nullptr;
  v49_.v50 = 0;
  if (v51_.v52 != nullptr) {
    v49_.v50 = std___1___shared_weak_count_lock_alt1((__int64)v51_.v52);
    if (v49_.v50 != 0) {
      v49_.v49 = v51_.v51;
    }
    result = v51_.v52;
    if (v51_.v52 != nullptr) {
      result =
          (__int64 (***)(void))std___1___shared_weak_count___release_weak_alt1(
              (__int64)v51_.v52);
    }
    if (v49_.v49 != nullptr) {
      v51_.v51 = GameData_2064208;
      v51_.v52 = &v49_.v49;
      v51_.v55 = (__int64**)&v51_.v51;
      GameRoutine_156d580((__int64)&v51_.v51);
      result = (__int64 (***)(void))v51_.v55;
      if (v51_.v55 == (__int64**)&v51_.v51) {
        v40 = 4;
        goto LABEL_109;
      }
      if (v51_.v55 != nullptr) {
        v40 = 5;
      LABEL_109:
        result = (__int64 (***)(void))((__int64 (*)(void*))(*v51_.v55)[v40])(
            v51_.v55);
      }
    }
  }
  v41 = v49_.v50;
  if (v49_.v50 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v49_.v50 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
    result = (__int64 (***)(
        void))std___1___shared_weak_count___release_weak_alt1(v41);
  }
  if (game_GameModeData_instance_ != 0) {
    result = (__int64 (***)(void))game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&game_kVariableHubFacilityForced);
    if (result != nullptr && *((_DWORD*)result + 8) != 0) {
      v42 = (_QWORD*)a1[29];
      v43 = (_QWORD*)a1[30];
      result = &v51_.v51;
      v51_.v51 = GameData_2064288;
      v51_.v55 = (__int64**)&v51_.v51;
      if (v42 == v43) {
        v47 = nullptr;
      }
      else {
        v44 = GameData_212e008[0];
        v45 = GameData_2131a40[0];
        while (1) {
          if (*v42 != 0) {
            v46 = __dynamic_cast(*v42, v44, v45, 0);
            if (v46 != 0) {
              v47 = (_BYTE*)v46;
              v49_.v49 = (__int64 (**)(void))v46;
              if (v51_.v55 == nullptr) {
                GameRoutine_60a310();
              }
              if ((((__int64 (*)(__int64**, __int64 (***)(void)))(
                       *v51_.v55)[6])(v51_.v55, &v49_.v49) &
                   1) != 0) {
                break;
              }
            }
          }
          if (++v42 == v43) {
            v47 = nullptr;
            break;
          }
        }
        result = (__int64 (***)(void))v51_.v55;
        if (v51_.v55 != (__int64**)&v51_.v51) {
          if (v51_.v55 != nullptr) {
            v48 = 5;
          LABEL_130:
            result = (__int64 (***)(void))(
                (__int64 (*)(__int64))(*result)[v48])((__int64)result);
          }
          if (v47 != nullptr) {
            return (__int64 (***)(void))FacilityUnitMenu_15e8f40(a1, v47);
          }
          return result;
        }
      }
      v48 = 4;
      goto LABEL_130;
    }
  }
  return result;
}

char* ProcTrainingUnitMenu_Unknown160()
{
  __int64* v0;

  v0 = msg_MessageManager_instance__ptr[0];
  GameHr_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0, 2u, 0);
  return GameRoutine_a4dbe0_alt1(*v0, "MID_Menu_PlayerFacility_UnitSelect_Help",
                                 0);
}

char* ProcTrainingUnitMenu_Unknown6()
{
  __int64* v0;

  v0 = msg_MessageManager_instance__ptr[0];
  GameHr_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0, 2u, 0);
  return GameRoutine_a4dbe0_alt1(*v0, "MID_Menu_PlayerFacility_UnitSelect_Help",
                                 0);
}

__int64* ProcTrainingUnitMenu_15f9440(__int64* result, _QWORD* a2)
{
  __int64* v2;
  __int64* v3;
  __int64* v4;
  __int64* v5;
  _QWORD* v6;
  __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  unsigned __int64 v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  char* v30;
  __int64 v31;
  __int64 v32;

  v2 = (__int64*)a2[148];
  v3 = (__int64*)a2[149];
  v4 = result;
  result[1] = 0;
  result[2] = 0;
  *result = 0;
  if (v2 != v3) {
    v5 = nullptr;
    v6 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    while (1) {
      v7 = *v2;
      if (*v2 != 0) {
        v8 = v4[2];
        if ((unsigned __int64)v5 < v8) {
          *v5++ = v7;
        }
        else {
          v9 = (_QWORD*)*v4;
          v10 = (__int64)v5 - *v4;
          v11 = (v10 >> 3) + 1;
          if (v11 >> 61 != 0) {
            goto LABEL_50;
          }
          v12 = v8 - (_QWORD)v9;
          if (v12 >> 2 > v11) {
            v11 = v12 >> 2;
          }
          if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
            v13 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v13 = v11;
          }
          if (v13 != 0) {
            if (v13 >> 61 != 0) {
              goto LABEL_51;
            }
            v14 = fw_memory_HeapManager_Allocate(*v6, 8 * v13, 16, 0);
          }
          else {
            v14 = 0;
          }
          v15 = v14 + 8 * v13;
          v16 = v14 + v10 - 8 * (v10 >> 3);
          *(_QWORD*)(v14 + v10) = v7;
          v5 = (__int64*)(v14 + v10 + 8);
          result = (__int64*)memcpy(v16, v9, v10);
          *v4 = v16;
          v4[2] = v15;
          if (v9 != nullptr) {
            v17 = 128;
            if (*(_QWORD*)(*v6 + 200LL) == 0) {
              v17 = 56;
            }
            result = (__int64*)nn_mem_StandardAllocator_Free(*v6 + v17, v9);
          }
        }
        v4[1] = (__int64)v5;
      }
      if (++v2 == v3) {
        goto LABEL_23;
      }
    }
  }
  v5 = nullptr;
LABEL_23:
  result = (__int64*)a2[42];
  if (result != nullptr) {
    result = (__int64*)__dynamic_cast(result, GameData_212e008[0],
                                      GameData_2131a40[0], 0);
    if (result != nullptr) {
      v18 = result[11];
      if (v18 != 0) {
        v19 = *v4;
        if ((__int64*)*v4 == v5) {
          goto LABEL_32;
        }
        v20 = (__int64*)*v4;
        while (*v20 != v18) {
          if (++v20 == v5) {
            goto LABEL_32;
          }
        }
        if (v20 == v5) {
        LABEL_32:
          v21 = v4[2];
          if ((unsigned __int64)v5 >= v21) {
            v23 = (char*)v5 - v19;
            v24 = ((__int64)v5 - v19) >> 3;
            v25 = v24 + 1;
            if ((unsigned __int64)(v24 + 1) >> 61 != 0) {
            LABEL_50:
              GameRoutine_6c1f60();
            }
            v26 = v21 - v19;
            if (v26 >> 2 > v25) {
              v25 = v26 >> 2;
            }
            if ((unsigned __int64)v26 >= 0x7FFFFFFFFFFFFFF8LL) {
              v27 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v27 = v25;
            }
            if (v27 != 0) {
              if (v27 >> 61 != 0) {
              LABEL_51:
                GameRoutine_60a210(result);
              }
              v28 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v27, 16, 0);
            }
            else {
              v28 = 0;
            }
            v29 = v28 + 8 * v27;
            v30 = (char*)v5 - v19;
            v31 = (__int64)&v23[v28 + -8 * v24];
            *(_QWORD*)&v23[v28] = v18;
            v22 = (__int64)&v23[v28 + 8];
            result = (__int64*)memcpy(v31, v19, v30);
            *v4 = v31;
            v4[2] = v29;
            if (v19 != 0) {
              v32 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v32 = 56;
              }
              result = (__int64*)nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v19);
            }
          }
          else {
            *v5 = v18;
            v22 = (__int64)(v5 + 1);
          }
          v4[1] = v22;
        }
      }
    }
  }
  return result;
}

__int64

game_facility_anonymous_ProcTrainingUnitMenu_OnInit_closure_Invoke_15f97a0(
    __int64 a1, __int64 a2, _DWORD* a3)
{
  __int64* v3;
  char* v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  struct {
    __int64 v8;
    __int64 v9;
  } v8_;

  v3 = **(__int64***)(a1 + 8);
  v4 = game_util_Format_alt1("L_MasteryInfoItem%02d", *a3);
  LayoutAccessor_1560070((void*)(&v8_.v8), v3, v4);
  result = v8_.v9;
  if (v8_.v9 != 0) {
    v6 = std___1___shared_weak_count_lock_alt1(v8_.v9);
    v7 = v8_.v8;
    result = v8_.v9;
    if (v8_.v9 != 0) {
      result = std___1___shared_weak_count___release_weak_alt1(v8_.v9);
    }
    if (v6 != 0 && v7 != 0) {
      result = GameHr_1562680(v7, "Accent_Off", 0x1.0000000000000p+0f);
    }
    else if (v6 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      return std___1___shared_weak_count___release_weak_alt1(v6);
    }
  }
  return result;
}

bool game_facility_anonymous_ProcTrainingUnitMenu_OnInit_closure_Invoke_15f9930(
    __int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  int v5;
  __int64 v6;

  v2 = *(_QWORD*)(*(_QWORD*)a2 + 88LL);
  v3 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v3 = *(_QWORD*)(game_GameModeData_instance_ + 96);
  }
  v6 = v3;
  v5 = 241;
  return v2 == game_UnitPool_Find_6ead60(&v6, &v5);
}

__int64 game_facility_anonymous_ProcTrainingUnitMenu_CreateBind_closure_Invoke(
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
  *(_WORD*)(v4 + 96) = 259;
  return BasicMenuCursor_16e0c00(v2, v4);
}

#pragma GCC visibility pop
