#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1030ce0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_8903a0(PSEUDO_X8, _QWORD);
__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_1845b60(_QWORD);
__int64 GameRoutine_1846260(_QWORD);
__int64 GameRoutine_1847710(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameSideStoryData_12b51c0(_QWORD, _QWORD);
__int64 GameSubquestData_125a300(_QWORD, _QWORD, _QWORD);
__int64 GuideBaseMenu_Unknown139(void);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_gameui_Help_SideStoryInfo_SideStoryInfo(_QWORD, _QWORD);
__int64 game_gmap_SpotMgr_FindSpot(_QWORD);
__int64 game_menu_BasicMenu_Destroy_BasicMenu(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
extern __int64 (*GameData_20e41b0[])();
extern __int64 (*game_gameui_Help_SideStoryInfo_GetIcon_ptr[])();
extern __int64 (*game_menu_anonymous_BaseQuestMenuItem_vtable)();
extern __int64 (*game_menu_anonymous_EmptyMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_MainquestMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_SideStoryMenuItem_vtable[])();
extern __int64 GameData_20e45c8;
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_212c7b8[10];
extern __int64 GameData_212efa8[4];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212d630[11];
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char GameData_1a9f09e;
extern char** msg_MessageManager_empty_text__ptr;
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 ProcQuestMenu_Destructor(__int64 a1);
__int64 ProcQuestMenu_Unknown102(__int64 a1);
__int64 ProcQuestMenu_Unknown128(_QWORD* a1);
__int64 ProcQuestMenu_Unknown139(__int64 a1, __int64* a2);
bool game_menu_anonymous_ProcQuestMenu_SortAndFilter_closure_Invoke(__int64 a1,
                                                                    __int64 a2);
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64 fw_memory_g_heap_manager;
extern char* game_menu_kRouteQuestLabels[4];
extern char* msg_MessageManager_empty_text_;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__attribute__((swiftcall)) void
game_menu_anonymous_ProcQuestMenu_OnInit_closure_Invoke(PSEUDO_X8 x8_,
                                                        __int64 unused_int0,
                                                        int* a1);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 Alignment_56b600(__int64 result);
__int64 ControlCreator_13633c0(__int64 result);
__int64 GameHr_1846260(__int64);
__int64 GameRoutine_15d4ba0(__int64, __int64*, char, unsigned __int8, char);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 game_menu_anonymous_1846100(__int64, __int64*, char);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64);
extern __int64 GameData_20e4358;
unsigned int* game_gmap_SpotMgr_FindSpot_alt1(unsigned int* result) __asm__(
    "game_gmap_SpotMgr_FindSpot");
void GameRoutine_1845b60_alt1(char*) __asm__("GameRoutine_1845b60");
__int64 ProcQuestMenu_Unknown88(__int64 a1);
__int64 game_gameui_1593d90(__int64*, __int64);
__int64 game_menu_PageTab_SetupLabel(__int64, __int64*, __int64, unsigned int,
                                     unsigned int, unsigned int);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
extern __int64 (*GameData_20e3eb8[])();
void game_gameui_159b580(__int64, _BYTE*, __int64, _DWORD*);
__int64 game_menu_anonymous_ProcQuestMenu_OnInit(__int64 a1);
__int64 ProcQuestMenu_Unknown85(__int64 a1);
__int64 game_menu_anonymous_ProcQuestMenu_ShowMap_closure_Invoke(__int64 a1,
                                                                 _BYTE* a2,
                                                                 __int64 a3,
                                                                 _DWORD* a4);
__int64 game_menu_anonymous_ProcQuestMenu_ShowMap_closure0_Invoke(__int64 a1,
                                                                  _BYTE* a2,
                                                                  __int64 a3,
                                                                  _DWORD* a4);
__int64 game_menu_anonymous_ProcQuestMenu_ShowMap_closure1_Invoke(__int64 a1,
                                                                  _BYTE* a2,
                                                                  __int64 a3,
                                                                  _DWORD* a4);
__attribute__((swiftcall)) void TimelineFile_8903a0(PSEUDO_X8, __int64);
__int64 BasicMenu_16dd280(_QWORD*);
__int64 GameHr_167f810(__int64, int, __int64, __int64, int, __int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
extern _UNKNOWN GameData_1aeeeee;
extern __int64 (*GameData_20e4610[])();
extern __int64 (*GameData_20e4690[])();
extern __int64 (*GameData_20e4c20[])();
extern __int64* GameData_212c780;
extern __int64 GameData_225e7a0;
void GameHr_167fca0(__int64, __int64, int, __int64);
void __attribute__((noreturn)) GameRoutine_12680d0();
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_menu_anonymous_ProcQuestMenu_ShowMap(_QWORD* a1);

__int64 ProcQuestMenu_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v1 = *(_QWORD*)(a1 + 1072);
  if (v1 != 0) {
    *(_QWORD*)(a1 + 1080) = v1;
    v2 = a1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                  v1);
    a1 = v2;
  }
  return game_menu_BasicMenu_Destroy_BasicMenu(a1);
}

__int64 game_menu_anonymous_ProcQuestMenu_OnInit(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64* v7;
  __int64 result;
  char* v9;
  const char* v10;
  char v11;
  __int64 v12;
  char v13;
  char** v14;
  __int64 v15[2];
  struct {
    __int64 v16;
    __int64 v17;
  } v16_;

  LayoutAccessor_1560070((void*)(&v16_.v16), (__int64*)(a1 + 848), "L_PageTab");
  v2 = v16_.v17;
  v15[0] = v16_.v16;
  v15[1] = v16_.v17;
  if (v16_.v17 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v16_.v17 + 16), 1u,
                              memory_order_relaxed);
  }
  v9 = (char*)GameData_20e3eb8;
  v14 = &v9;
  game_menu_PageTab_SetupLabel(a1 + 656, v15, (__int64)&v9, 3u, 0xEu, 0xFu);
  if (v14 == &v9) {
    v3 = 32;
  }
  else {
    if (v14 == nullptr) {
      goto LABEL_8;
    }
    v3 = 40;
  }
  (*(void (**)(void*)) & (*v14)[v3])(v14);
LABEL_8:
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  LayoutAccessor_1560070((void*)(&v9), (__int64*)(a1 + 848),
                         "L_Info/L_KeyHelp00");
  if (v10 != nullptr) {
    v4 = std___1___shared_weak_count_lock((__int64)v10);
    v5 = (__int64*)v9;
    if (v10 != nullptr) {
      std___1___shared_weak_count___release_weak_alt1((__int64)v10);
    }
    if (v4 != 0 && v5 != nullptr) {
      v13 = 0;
      v14 = nullptr;
      v9 = &GameData_1a9f09e;
      v10 = "MID_KeyHelp_FastTravel";
      v11 = 1;
      v12 = 0x300000000LL;
      game_gameui_1593d90(v5, (__int64)&v9);
      LayoutAccessor_1562cf0((__int64)v5, "Disable");
      LayoutAccessor_155e830((__int64)v5, 0);
    }
    else if (v4 == 0) {
      goto LABEL_19;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak_alt1(v4);
    }
  }
LABEL_19:
  LayoutAccessor_1560070((void*)(&v9), (__int64*)(a1 + 848),
                         "L_Info/L_KeyHelp01");
  if (v10 == nullptr) {
    goto LABEL_28;
  }
  v6 = std___1___shared_weak_count_lock((__int64)v10);
  v7 = (__int64*)v9;
  if (v10 != nullptr) {
    std___1___shared_weak_count___release_weak_alt1((__int64)v10);
  }
  if (v6 != 0 && v7 != nullptr) {
    v13 = 0;
    v14 = nullptr;
    v9 = "StatusChange";
    v10 = "MID_KeyHelp_StatusChange";
    v11 = 1;
    v12 = 0x300000002LL;
    game_gameui_1593d90(v7, (__int64)&v9);
    LayoutAccessor_1562cf0((__int64)v7, "Disable");
    LayoutAccessor_155e830((__int64)v7, 0);
  }
  else if (v6 == 0) {
    goto LABEL_28;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak_alt1(v6);
  }
LABEL_28:
  result = v16_.v17;
  if (v16_.v17 != 0) {
    return std___1___shared_weak_count___release_weak_alt1(v16_.v17);
  }
  return result;
}

__int64 ProcQuestMenu_Unknown85(__int64 a1)
{
  __int64 result;
  __int64 v2;
  __int64 v3;
  struct {
    __int64 v5;
    __int64 v6;
  } v5_;

  LayoutAccessor_1560070((void*)(&v5_.v5), (__int64*)(a1 + 848),
                         "L_Info/L_Img");
  result = v5_.v6;
  if (v5_.v6 != 0) {
    v2 = std___1___shared_weak_count_lock(v5_.v6);
    v3 = v5_.v5;
    result = v5_.v6;
    if (v5_.v6 != 0) {
      result = std___1___shared_weak_count___release_weak_alt1(v5_.v6);
    }
    if (v2 == 0 || v3 == 0) {
      if (v2 == 0) {
        return result;
      }
    }
    else {
      ui_LayoutAccessor_SetPaneVisible(v3, (__int64)"N_State", 0);
      result = LayoutAccessor_1562cf0(v3, "Img01");
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      return std___1___shared_weak_count___release_weak_alt1(v2);
    }
  }
  return result;
}

__int64 ProcQuestMenu_Unknown88(__int64 a1)
{
  __int64 (***v1)();
  char v3;
  __int64 result;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  const char* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  const char* v30;
  __int64 v31;
  unsigned int* v32;
  unsigned int* v33;
  struct {
    __int64 v34;
    __int64 v35;
  } v34_;
  struct {
    __int64* v36;
    __int64 v37;
  } v36_;

  v1 = *(__int64 (****)())(a1 + 336);
  if (v1 == nullptr || *v1 != game_menu_anonymous_MainquestMenuItem_vtable) {
    GameHr_1846260(a1);
    v3 = 0;
    goto LABEL_4;
  }
  GameRoutine_1845b60_alt1((char*)a1);
  LayoutAccessor_1560070((void*)(&v36_.v36), (__int64*)(a1 + 848), "L_Info");
  if (v36_.v37 == 0) {
    goto LABEL_37;
  }
  v16 = std___1___shared_weak_count_lock(v36_.v37);
  v17 = v36_.v36;
  if (v36_.v37 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v36_.v37);
  }
  if (v16 != 0 && v17 != nullptr) {
    game_menu_anonymous_1846100((__int64)v1, v17, 0);
  }
  else if (v16 == 0) {
  LABEL_37:
    v3 = 1;
    goto LABEL_4;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    goto LABEL_37;
  }
  (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
  std___1___shared_weak_count___release_weak_alt1(v16);
  v3 = 1;
LABEL_4:
  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_20e4358, 0);
    if (result != 0) {
      v5 = result;
      LayoutAccessor_1560070((void*)(&v34_.v34), (__int64*)(a1 + 848),
                             "L_Info");
      v6 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v5 + 560LL))(v5);
      if (v34_.v35 != 0) {
        v7 = std___1___shared_weak_count_lock(v34_.v35);
        if (v7 != 0) {
          v8 = v7;
          if (v34_.v34 != 0) {
            GameRoutine_15d4ba0(v34_.v34, v6, v3, 0, 1);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
            std___1___shared_weak_count___release_weak_alt1(v8);
          }
        }
        if (v34_.v35 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v34_.v35);
        }
      }
      LayoutAccessor_1560070((void*)(&v36_.v36), (__int64*)(a1 + 848),
                             "L_Info");
      result = v36_.v37;
      if (v36_.v37 != 0) {
        v9 = std___1___shared_weak_count_lock(v36_.v37);
        v10 = v36_.v36;
        result = v36_.v37;
        if (v36_.v37 != 0) {
          result = std___1___shared_weak_count___release_weak_alt1(v36_.v37);
        }
        if (v9 == 0 || v10 == nullptr) {
          if (v9 == 0) {
            return result;
          }
          goto LABEL_87;
        }
        LayoutAccessor_1560070((void*)(&v36_.v36), v10, "L_KeyHelp00");
        if (v36_.v37 == 0) {
        LABEL_56:
          LayoutAccessor_1560070((void*)(&v36_.v36), v10, "L_KeyHelp01");
          if (v36_.v37 != 0) {
            v21 = std___1___shared_weak_count_lock(v36_.v37);
            v22 = (__int64)v36_.v36;
            if (v36_.v37 != 0) {
              std___1___shared_weak_count___release_weak_alt1(v36_.v37);
            }
            if (v21 != 0 && v22 != 0) {
              v23 = *(_QWORD*)(a1 + 336);
              if (v23 != 0) {
                v24 = __dynamic_cast(*(_QWORD*)(a1 + 336), GameData_212e008[0],
                                     &GameData_20e45c8, 0);
                if (v24 != 0) {
                  v25 = **(_QWORD**)(v24 + 152);
                  if (*(_WORD*)(v25 + 128) != 0 &&
                      game_gmap_SpotMgr_FindSpot_alt1(
                          *(unsigned int**)(*(_QWORD*)(v25 + 136) + 8LL)) !=
                          nullptr) {
                  LABEL_65:
                    v26 = 1;
                    goto LABEL_70;
                  }
                }
                else if (*(__int64 (***)(void))v23 ==
                         game_menu_anonymous_SideStoryMenuItem_vtable) {
                  v32 = *(unsigned int**)(**(_QWORD**)(v23 + 152) + 200LL);
                  if (v32 != nullptr &&
                      game_gmap_SpotMgr_FindSpot_alt1(v32) != nullptr) {
                    goto LABEL_65;
                  }
                }
              }
              v26 = 0;
            LABEL_70:
              LayoutAccessor_155e830(v22, v26);
              v27 = *(_QWORD*)(a1 + 336);
              if (v27 != 0) {
                v28 = __dynamic_cast(v27, GameData_212e008[0],
                                     &GameData_20e45c8, 0);
                if (v28 != 0) {
                  v29 = **(_QWORD**)(v28 + 152);
                  if (*(_WORD*)(v29 + 128) != 0 &&
                      game_gmap_SpotMgr_FindSpot_alt1(
                          *(unsigned int**)(*(_QWORD*)(v29 + 136) + 8LL)) !=
                          nullptr) {
                  LABEL_74:
                    v30 = "Default";
                  LABEL_77:
                    LayoutAccessor_1562cf0(v22, v30);
                  LABEL_78:
                    if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
                      std___1___shared_weak_count___release_weak_alt1(v21);
                    }
                    goto LABEL_80;
                  }
                }
                else if (*(__int64 (***)(void))v27 ==
                         game_menu_anonymous_SideStoryMenuItem_vtable) {
                  v33 = *(unsigned int**)(**(_QWORD**)(v27 + 152) + 200LL);
                  if (v33 != nullptr &&
                      game_gmap_SpotMgr_FindSpot_alt1(v33) != nullptr) {
                    goto LABEL_74;
                  }
                }
              }
              v30 = "Disable";
              goto LABEL_77;
            }
            if (v21 != 0) {
              goto LABEL_78;
            }
          }
        LABEL_80:
          result = ui_LayoutAccessor_FindAlignment(v10, (__int64)"A_KeyHelp");
          if (result != 0) {
            Alignment_56b600(result);
            result = v10[1];
            if (result != 0) {
              result = std___1___shared_weak_count_lock(result);
              if (result != 0) {
                v31 = result;
                result = *v10;
                if (*v10 != 0) {
                  result = ControlCreator_13633c0(result);
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
                  result = std___1___shared_weak_count___release_weak_alt1(v31);
                }
              }
            }
          }
        LABEL_87:
          if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
            return std___1___shared_weak_count___release_weak_alt1(v9);
          }
          return result;
        }
        v11 = std___1___shared_weak_count_lock(v36_.v37);
        v12 = (__int64)v36_.v36;
        if (v36_.v37 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v36_.v37);
        }
        if (v11 == 0 || v12 == 0) {
          if (v11 == 0) {
            goto LABEL_56;
          }
          goto LABEL_54;
        }
        v13 = *(_QWORD*)(a1 + 336);
        if (v13 == 0) {
          goto LABEL_45;
        }
        v14 = __dynamic_cast(*(_QWORD*)(a1 + 336), GameData_212e008[0],
                             &GameData_20e45c8, 0);
        if (v14 != 0) {
          v15 = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 568LL))(v14);
          goto LABEL_46;
        }
        if (*(__int64 (***)(void))v13 ==
                game_menu_anonymous_SideStoryMenuItem_vtable &&
            (*(_BYTE*)(*(_QWORD*)(v13 + 152) + 8LL) & 0xFE) != 4 &&
            (unsigned int)(*(_DWORD*)(v13 + 96) - 1) < 2) {
          v15 = 1;
        }
        else {
        LABEL_45:
          v15 = 0;
        }
      LABEL_46:
        LayoutAccessor_155e830(v12, v15 & 1);
        v18 = *(_QWORD*)(a1 + 336);
        if (v18 != 0) {
          v19 = __dynamic_cast(*(_QWORD*)(a1 + 336), GameData_212e008[0],
                               &GameData_20e45c8, 0);
          if (v19 != 0) {
            if (((*(__int64 (**)(__int64))(*(_QWORD*)v19 + 576LL))(v19) & 1) !=
                0) {
            LABEL_49:
              v20 = "Default";
            LABEL_53:
              LayoutAccessor_1562cf0(v12, v20);
            LABEL_54:
              if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
                std___1___shared_weak_count___release_weak_alt1(v11);
              }
              goto LABEL_56;
            }
          }
          else if (*(__int64 (***)(void))v18 ==
                       game_menu_anonymous_SideStoryMenuItem_vtable &&
                   *(_DWORD*)(v18 + 96) == 2) {
            goto LABEL_49;
          }
        }
        v20 = "Disable";
        goto LABEL_53;
      }
    }
  }
  return result;
}

__int64 ProcQuestMenu_Unknown102(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 result;

  v1 = *(_QWORD*)(a1 + 336);
  if (v1 == 0) {
    return 0;
  }
  v3 = __dynamic_cast(*(_QWORD*)(a1 + 336), GameData_212e008[0],
                      &GameData_20e45c8, 0);
  if (v3 == 0) {
    if (*(__int64 (***)())v1 == game_menu_anonymous_SideStoryMenuItem_vtable) {
      result = *(_QWORD*)(**(_QWORD**)(v1 + 152) + 200LL);
      if (result == 0) {
        return result;
      }
      goto LABEL_5;
    }
    return 0;
  }
  v4 = **(_QWORD**)(v3 + 152);
  if (*(_WORD*)(v4 + 128) == 0) {
    return 0;
  }
  result = *(_QWORD*)(*(_QWORD*)(v4 + 136) + 8LL);

LABEL_5:
  result = game_gmap_SpotMgr_FindSpot(result);
  if (result != 0) {
    if (*(_BYTE*)(a1 + 1096) == 1) {
      GameRoutine_1846260(a1);
    }
    else {
      GameRoutine_1845b60(a1);
    }
    return 13;
  }
  return result;
}

__int64 ProcQuestMenu_Unknown128(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64** v20;
  __int64* v21;
  __int64* v22;
  __int64** v23;
  __int64 v24;
  unsigned __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64* v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  __int64 result;
  _QWORD* v39;
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  _BYTE* v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  _QWORD* v48;
  _QWORD* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  unsigned int v56;
  __int128 v57;
  __int64 v58;
  __int64 v59;
  __int64* v60;
  __int64* v61;
  _QWORD* v62;
  _QWORD* v63;
  __int64 v64;
  __int64* v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  int v82;
  int v83;

  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      144, 16, 0);
  *(_WORD*)(v2 + 16) = 0;
  *(_QWORD*)(v2 + 48) = 0;
  *(_QWORD*)(v2 + 56) = 0;
  *(_QWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 72) = 0;
  *(_DWORD*)(v2 + 96) = 0;
  *(_QWORD*)(v2 + 104) = 0;
  *(_QWORD*)(v2 + 112) = 0;
  *(_QWORD*)(v2 + 136) = 0;
  *(_QWORD*)(v2 + 128) = 0;
  *(_WORD*)(v2 + 80) = 257;
  *(_BYTE*)(v2 + 82) = 1;
  *(_DWORD*)(v2 + 40) = -1;
  *(_QWORD*)v2 = game_menu_anonymous_EmptyMenuItem_vtable;
  *(_QWORD*)(v2 + 8) = 0;
  v3 = a1[43];
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  *(_QWORD*)(v2 + 8) = a1;
  a1[43] = v2;
  if (game_GameModeData_instance_ != 0) {
    v4 = *(_QWORD*)(game_GameModeData_instance_ + 24);
  }
  else {
    v4 = 0;
  }
  GameRoutine_8903a0((void*)&v65, v4);
  v5 = v65;
  v6 = v66;
  if ((__int64*)v66 == v65) {
    goto LABEL_30;
  }
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      176, 16, 0);
  v9 = *(_QWORD*)(v6 - 8);
  v8 = (__int64*)(v6 - 8);
  v10 = v7;
  v11 = *(_QWORD*)(v9 + 144);
  *(_QWORD*)(v7 + 8) = 0;
  v12 = strlen(v11);
  if (v12 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_70:
    GameRoutine_60a1d0(v12);
  }
  v13 = v12;
  if (v12 >= 0x17) {
    if ((v12 | 7) == 0x17) {
      v15 = 26;
    }
    else {
      v15 = (v12 | 7) + 1;
    }
    v14 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v15, 16, 0);
    *(_QWORD*)(v10 + 24) = v13;
    *(_QWORD*)(v10 + 32) = v14;
    *(_QWORD*)(v10 + 16) = v15 | 1;
    goto LABEL_15;
  }
  v14 = v10 + 17;
  *(_BYTE*)(v10 + 16) = 2 * v12;
  if (v12 != 0) {
  LABEL_15:
    memmove(v14, v11, v13);
  }
  *(_BYTE*)(v14 + v13) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_QWORD*)(v10 + 48) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  *(_DWORD*)(v10 + 96) = 0;
  *(_QWORD*)(v10 + 104) = 0;
  *(_QWORD*)(v10 + 112) = 0;
  *(_QWORD*)(v10 + 128) = 0;
  *(_QWORD*)(v10 + 136) = 0;
  *(_DWORD*)(v10 + 40) = 0;
  *(_WORD*)(v10 + 80) = 257;
  *(_BYTE*)(v10 + 82) = 1;
  *(_QWORD*)v10 = game_menu_anonymous_MainquestMenuItem_vtable;
  *(_BYTE*)(v10 + 160) = 1;
  *(_QWORD*)(v10 + 144) = GameData_20e41b0;
  v16 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v16 = *(_QWORD*)(game_GameModeData_instance_ + 24);
  }
  *(_QWORD*)(v10 + 152) = v16;
  GameRoutine_16e0c00(a1, v10);
  v5 = v65;
  if (v8 != v65) {
    v17 = GameData_212d630[0] + 2;
    do {
      v20 = (__int64**)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 176, 16, 0);
      v22 = (__int64*)*--v8;
      v21 = v22;
      v23 = v20;
      v24 = v22[18];
      *v20 = v17;
      v20[1] = nullptr;
      v12 = strlen(v24);
      if (v12 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_70;
      }
      v25 = v12;
      if (v12 >= 0x17) {
        if ((v12 | 7) == 0x17) {
          v18 = 26;
        }
        else {
          v18 = (v12 | 7) + 1;
        }
        v19 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v18, 16, 0);
        v23[3] = (__int64*)v25;
        v23[4] = (__int64*)v19;
        v23[2] = (__int64*)(v18 | 1);
      }
      else {
        v19 = (__int64)v23 + 17;
        *((_BYTE*)v23 + 16) = 2 * v12;
        if (v12 == 0) {
          goto LABEL_25;
        }
      }
      memmove(v19, v24, v25);
    LABEL_25:
      *(_BYTE*)(v19 + v25) = 0;
      v23[8] = nullptr;
      v23[9] = nullptr;
      v23[6] = nullptr;
      v23[7] = nullptr;
      *((_WORD*)v23 + 40) = 257;
      *((_DWORD*)v23 + 24) = 0;
      v23[13] = nullptr;
      v23[14] = nullptr;
      v23[16] = nullptr;
      v23[17] = nullptr;
      *((_DWORD*)v23 + 10) = 0;
      *v23 = (__int64*)game_menu_anonymous_MainquestMenuItem_vtable;
      *((_BYTE*)v23 + 82) = 1;
      *((_BYTE*)v23 + 160) = 0;
      v23[18] = (__int64*)GameData_20e41b0;
      v23[19] = v21;
      GameRoutine_16e0c00(a1, v23);
      v5 = v65;
    } while (v8 != v65);
  }

LABEL_30:
  v26 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v5 != nullptr) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v27,
                                  v5);
  }
  v66 = 0;
  v67 = 0;
  v65 = nullptr;
  GameSubquestData_125a300(*(_QWORD*)GameData_212c7b0[0], &v65, 1);
  v28 = v65;
  v29 = (__int64*)v66;
  if (v65 != (__int64*)v66) {
    do {
      v30 = *v28++;
      v31 = fw_memory_HeapManager_Allocate(*v26, 160, 16, 0);
      GameRoutine_1847710(v31, 1, v30);
      GameRoutine_16e0c00(a1, v31);
    } while (v28 != v29);
    v28 = v65;
  }
  if (v28 != nullptr) {
    v32 = *v26;
    v66 = (unsigned __int64)v28;
    v33 = 128;
    if (*(_QWORD*)(v32 + 200) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free(v32 + v33, v28);
  }
  v34 = (__int64*)a1[134];
  v35 = (__int64*)a1[135];
  while (v34 != v35) {
    v36 = *v34++;
    v37 = fw_memory_HeapManager_Allocate(*v26, 160, 16, 0);
    GameRoutine_1847710(v37, 3, v36);
    GameRoutine_16e0c00(a1, v37);
  }
  v63 = nullptr;
  v64 = 0;
  v62 = nullptr;
  result = GameSideStoryData_12b51c0(*(_QWORD*)GameData_212c7b8[0], &v62);
  v39 = v62;
  v40 = v63;
  if (v62 != v63) {
    v61 = GameData_212d630[0] + 2;
    v60 = GameData_212e348 + 2;
    while (1) {
      v41 = *v39;
      v42 = fw_memory_HeapManager_Allocate(*v26, 224, 16, 0);
      v43 = *(_BYTE**)(*(_QWORD*)v41 + 64LL);
      if (v43 != nullptr && *v43 != 0) {
        v44 = *msg_MessageManager_instance__ptr[0];
        v70 = -1;
        v71 = -1;
        v72 = -1;
        v73 = -1;
        v74 = -1;
        v75 = -1;
        v76 = -1;
        v77 = -1;
        v78 = -1;
        v79 = -1;
        v80 = -1;
        v81 = -1;
        v65 = v60;
        v66 = 0xFFFF0001FFFF0000LL;
        v67 = 0xFFFF0004FFFF0002LL;
        v68 = 0xFFFF0006FFFF0005LL;
        v82 = 8;
        v83 = 0;
        v69 = 0xFFFF0008FFFF0007LL;
        v45 = GameRoutine_a4dbe0(v44, v43, 0, &v65);
      }
      else {
        v45 = (__int64)*msg_MessageManager_empty_text__ptr;
      }
      *(_QWORD*)v42 = v61;
      *(_QWORD*)(v42 + 8) = 0;
      v12 = strlen(v45);
      if (v12 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_70;
      }
      v46 = v12;
      if (v12 >= 0x17) {
        v48 = a1;
        v49 = v40;
        if ((v12 | 7) == 0x17) {
          v50 = 26;
        }
        else {
          v50 = (v12 | 7) + 1;
        }
        v51 = fw_memory_HeapManager_Allocate(*v26, v50, 16, 0);
        v52 = v50 | 1;
        v47 = v51;
        *(_QWORD*)(v42 + 24) = v46;
        *(_QWORD*)(v42 + 32) = v51;
        v40 = v49;
        a1 = v48;
        *(_QWORD*)(v42 + 16) = v52;
      }
      else {
        v47 = v42 + 17;
        *(_BYTE*)(v42 + 16) = 2 * v12;
        if (v12 == 0) {
          goto LABEL_59;
        }
      }
      memmove(v47, v45, v46);
    LABEL_59:
      *(_BYTE*)(v47 + v46) = 0;
      *(_QWORD*)(v42 + 64) = 0;
      *(_QWORD*)(v42 + 72) = 0;
      *(_QWORD*)(v42 + 48) = 0;
      *(_QWORD*)(v42 + 56) = 0;
      *(_WORD*)(v42 + 80) = 257;
      *(_DWORD*)(v42 + 96) = 0;
      *(_QWORD*)(v42 + 104) = 0;
      *(_QWORD*)(v42 + 112) = 0;
      *(_QWORD*)(v42 + 128) = 0;
      *(_QWORD*)(v42 + 136) = 0;
      *(_BYTE*)(v42 + 82) = 1;
      *(_DWORD*)(v42 + 40) = 2;
      *(_QWORD*)v42 = &game_menu_anonymous_BaseQuestMenuItem_vtable;
      game_gameui_Help_SideStoryInfo_SideStoryInfo(v42 + 144, v41);
      *(_DWORD*)(v42 + 40) = 2;
      *(_QWORD*)v42 = game_menu_anonymous_SideStoryMenuItem_vtable;
      *(_QWORD*)(v42 + 144) = game_gameui_Help_SideStoryInfo_GetIcon_ptr;
      v26 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      if (*(_QWORD*)GameData_212efa8[0] != 0) {
        GameRoutine_1030ce0((void*)&v65, *(_QWORD*)GameData_212efa8[0],
                            *(_QWORD*)(v42 + 152));
        v53 = *(_QWORD*)(v42 + 112);
        *(_DWORD*)(v42 + 96) = (_DWORD)v65;
        v54 = v66;
        v55 = v67;
        v66 = 0;
        v67 = 0;
        *(_QWORD*)(v42 + 104) = v54;
        *(_QWORD*)(v42 + 112) = v55;
        if (v53 != 0) {
          std___1___shared_weak_count___release_weak(v53);
          v53 = v67;
        }
        v56 = v70;
        *(_QWORD*)(v42 + 128) = v69;
        v57 = *(_OWORD*)(v42 + 128);
        *((_QWORD*)&v57 + 1) = v56;
        *(_OWORD*)(v42 + 128) = v57;
        if (v53 != 0) {
          std___1___shared_weak_count___release_weak(v53);
        }
      }
      result = GameRoutine_16e0c00(a1, v42);
      if (++v39 == v40) {
        v39 = v62;
        break;
      }
    }
  }
  if (v39 != nullptr) {
    v58 = *v26;
    v63 = v39;
    v59 = 128;
    if (*(_QWORD*)(v58 + 200) == 0) {
      v59 = 56;
    }
    return nn_mem_StandardAllocator_Free(v58 + v59, v39);
  }
  return result;
}

__int64 ProcQuestMenu_Unknown139(__int64 a1, __int64* a2)
{
  __int64 result;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;

  result = GuideBaseMenu_Unknown139();
  if (*(_BYTE*)(a1 + 1068) == 1) {
    v5 = a2[1];
    v6 = a2[2];
    if (v5 >= v6) {
      v8 = *a2;
      v9 = v5 - *a2;
      v10 = 1 - 0x3333333333333333LL * (v9 >> 3);
      if (v10 > 0x666666666666666LL) {
        GameRoutine_874520(result);
      }
      v11 = fw_memory_g_heap_manager_ptr;
      v12 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v6 - v8) >> 3);
      if (2 * v12 > v10) {
        v10 = 2 * v12;
      }
      if (v12 >= 0x333333333333333LL) {
        v13 = 0x666666666666666LL;
      }
      else {
        v13 = v10;
      }
      if (v13 != 0) {
        if (v13 > 0x666666666666666LL) {
          GameRoutine_60a210(result);
        }
        v14 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v13, 16, 0);
      }
      else {
        v14 = 0;
      }
      v15 = v14 + v9;
      *(_QWORD*)v15 = &GameData_1a9f09e;
      *(_QWORD*)(v15 + 8) = "MID_KeyHelp_Cancel";
      *(_BYTE*)(v15 + 28) = 0;
      *(_QWORD*)(v15 + 32) = 0;
      *(_BYTE*)(v15 + 16) = 1;
      v16 = v14 + 40 * v13;
      v7 = v14 + v9 + 40;
      *(_QWORD*)(v15 + 20) = 0x300000001LL;
      result = memcpy(v14, v8, v9);
      *a2 = v14;
      a2[1] = v7;
      a2[2] = v16;
      if (v8 != 0) {
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
          v17 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v17, v8);
      }
    }
    else {
      *(_BYTE*)(v5 + 28) = 0;
      *(_QWORD*)(v5 + 32) = 0;
      *(_QWORD*)v5 = &GameData_1a9f09e;
      *(_QWORD*)(v5 + 8) = "MID_KeyHelp_Cancel";
      v7 = v5 + 40;
      *(_BYTE*)(v5 + 16) = 1;
      *(_QWORD*)(v5 + 20) = 0x300000001LL;
    }
    a2[1] = v7;
  }
  return result;
}

__attribute__((swiftcall)) void

game_menu_anonymous_ProcQuestMenu_OnInit_closure_Invoke(PSEUDO_X8 x8_,
                                                        __int64 unused_int0,
                                                        int* a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  int v3;
  const char* v4;
  const char* v5;
  __int64 v6;
  char* v7;
  unsigned __int64 result;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  _QWORD v13[4];
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;

  v3 = *a1;
  if (*a1 == 3) {
    if (game_GameModeData_instance_ != 0 &&
        (unsigned __int8)(*(_BYTE*)(game_GameModeData_instance_ + 15) - 1) <=
            3u) {
      v5 = game_menu_kRouteQuestLabels[(
          unsigned __int8)(*(_BYTE*)(game_GameModeData_instance_ + 15) - 1)];
    }
    else {
      v5 = "MID_QuestMenu_RouteQuest";
    }
  }
  else {
    v4 = "MID_QuestMenu_MaineQuest";
    if (v3 == 1) {
      v4 = "MID_QuestMenu_SubQuest";
    }
    if (v3 == 2) {
      v5 = "MID_QuestMenu_SideStoryQuest";
    }
    else {
      v5 = v4;
    }
  }
  if (*v5 != 0) {
    v16 = -1;
    v17 = -1;
    v18 = -1;
    v19 = -1;
    v6 = *msg_MessageManager_instance__ptr[0];
    v20 = -1;
    v21 = -1;
    v22 = -1;
    v23 = -1;
    v24 = -1;
    v25 = -1;
    v26 = -1;
    v27 = -1;
    v13[0] = msg_TagSelector_vtable;
    v13[1] = 0xFFFF0001FFFF0000LL;
    v13[2] = 0xFFFF0004FFFF0002LL;
    v13[3] = 0xFFFF0006FFFF0005LL;
    v28 = 8;
    v14 = -65529;
    v15 = -65528;
    v7 = (char*)GameRoutine_a4dbe0(v6, v5, 0, v13);
  }
  else {
    v7 = msg_MessageManager_empty_text_;
  }
  result = strlen(v7);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(result);
  }
  v9 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (result | 7) + 1;
    }
    v12 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v11, 16, 0);
    a2[1] = v9;
    a2[2] = v12;
    *a2 = v11 | 1;
    v10 = (char*)v12;
  }
  else {
    *(_BYTE*)a2 = 2 * result;
    v10 = (char*)a2 + 1;
    if (result == 0) {
      goto LABEL_19;
    }
  }
  result = memmove(v10, v7, v9);
LABEL_19:
  v10[v9] = 0;
  {
    result;
    return;
  }
}

void game_menu_anonymous_ProcQuestMenu_ShowMap(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  unsigned int** v12;
  __int64 i;
  unsigned int* v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned int* v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 (***v28)();
  __int64 v29;
  __int64 v30;
  unsigned int* v31;
  unsigned int* v32;
  __int64 v33;
  int v34;
  __int64 v35;
  __int64 (***v36)();
  __int64 v37;
  _QWORD* v38;
  unsigned int* v39;
  int v40;
  __int64 v41;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  unsigned int* v45;
  __int64 v46;
  __int64 v47;
  int v48;
  __int64 v49;
  _QWORD* v50;
  struct {
    __int64 (**v51)();
    void* v52;
    char gap32_[16];
    unsigned __int64* v53;
  } v51_;
  struct {
    char* v54;
    unsigned int** v55;
    char* v56;
  } v54_;

  *((_BYTE*)a1 + 1096) = 1;
  LayoutAccessor_1560070((void*)(&v51_.v51), a1 + 106, "L_Info");
  if (v51_.v52 != nullptr) {
    v2 = std___1___shared_weak_count_lock((__int64)v51_.v52);
    v3 = (__int64)v51_.v51;
    if (v51_.v52 != nullptr) {
      std___1___shared_weak_count___release_weak_alt1((__int64)v51_.v52);
    }
    if (v2 == 0 || v3 == 0) {
      if (v2 == 0) {
        goto LABEL_12;
      }
    }
    else {
      LayoutAccessor_1562cf0(v3, "Img");
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      std___1___shared_weak_count___release_weak_alt1(v2);
    }
  }
LABEL_12:
  LayoutAccessor_1560070((void*)(&v51_.v51), a1 + 106, "L_Info/L_Stamp");
  if (v51_.v52 == nullptr) {
    goto LABEL_20;
  }
  v5 = std___1___shared_weak_count_lock((__int64)v51_.v52);
  v6 = (__int64)v51_.v51;
  if (v51_.v52 != nullptr) {
    std___1___shared_weak_count___release_weak_alt1((__int64)v51_.v52);
  }
  if (v5 != 0 && v6 != 0) {
    LayoutAccessor_155e830(v6, 0);
  }
  else if (v5 == 0) {
    goto LABEL_20;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak_alt1(v5);
    v7 = a1[42];
    if (v7 == 0) {
      return;
    }
    goto LABEL_21;
  }
LABEL_20:
  v7 = a1[42];
  if (v7 == 0) {
    return;
  }
LABEL_21:
  v8 = __dynamic_cast(v7, GameData_212e008[0], &GameData_20e45c8, 0);
  if (v8 != 0) {
    v9 = *(_QWORD*)(v8 + 152);
    v50 = a1;
    v10 = (*(__int64 (**)(__int64))(*(_QWORD*)(v8 + 144) + 160LL))(v8 + 144);
    v54_.v55 = nullptr;
    v54_.v56 = nullptr;
    v54_.v54 = nullptr;
    if (v10 >= 1) {
      v11 = 8;
      v12 = nullptr;
      for (i = (unsigned int)v10; i != 0; --i) {
        v14 = game_gmap_SpotMgr_FindSpot_alt1(
            *(unsigned int**)(*(_QWORD*)(*(_QWORD*)v9 + 136LL) + v11));
        if (v12 < (unsigned int**)v54_.v56) {
          *v12++ = v14;
        }
        else {
          v15 = (__int64)v54_.v54;
          v16 = (char*)v12 - v54_.v54;
          v17 = ((char*)v12 - v54_.v54) >> 3;
          v18 = v17 + 1;
          if ((unsigned __int64)(v17 + 1) >> 61 != 0) {
            GameRoutine_12680d0();
          }
          v19 = v54_.v56 - v54_.v54;
          if ((v54_.v56 - v54_.v54) >> 2 > v18) {
            v18 = v19 >> 2;
          }
          if ((unsigned __int64)v19 >= 0x7FFFFFFFFFFFFFF8LL) {
            v20 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v20 = v18;
          }
          if (v20 != 0) {
            if (v20 >> 61 != 0) {
              GameRoutine_60a210_alt1();
            }
            v21 = v14;
            v22 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v20, 16, 0);
            v14 = v21;
          }
          else {
            v22 = 0;
          }
          v23 = v22 + 8 * v20;
          v24 = v22 + v16 - 8 * v17;
          *(_QWORD*)(v22 + v16) = v14;
          v12 = (unsigned int**)(v22 + v16 + 8);
          memcpy_alt1(v24, v15, v16);
          v54_.v54 = (char*)v24;
          v54_.v56 = (char*)v23;
          if (v15 != 0) {
            v25 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v25 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v15);
          }
        }
        v11 += 16;
        v54_.v55 = v12;
      }
    }
    v26 = BasicMenu_16dd280(v50);
    v51_.v51 = GameData_20e4610;
    v51_.v52 = v50;
    v51_.v53 = (unsigned __int64*)&v51_.v51;
    if (GameData_225e7a0 != 0) {
      v27 = 4;
      v28 = &v51_.v51;
    }
    else {
      GameHr_167f810((__int64)v50, 3, (__int64)&v54_.v54, v9, v26,
                     (__int64)&v51_.v51);
      v28 = (__int64 (***)(void))v51_.v53;
      if (v51_.v53 == (unsigned __int64*)&v51_.v51) {
        v27 = 4;
      }
      else {
        if (v51_.v53 == nullptr) {
        LABEL_44:
          v29 = (__int64)v54_.v54;
          if (v54_.v54 == nullptr) {
            return;
          }
          goto LABEL_45;
        }
        v27 = 5;
      }
    }
    ((__int64 (*)(__int64))(*v28)[v27])((__int64)v28);
    goto LABEL_44;
  }
  if (*(__int64 (***)(void))v7 !=
      game_menu_anonymous_MainquestMenuItem_vtable) {
    if (*(__int64 (***)(void))v7 !=
        game_menu_anonymous_SideStoryMenuItem_vtable) {
      return;
    }
    v31 = *(unsigned int**)(**(_QWORD**)(v7 + 152) + 200LL);
    if (v31 != nullptr) {
      v32 = game_gmap_SpotMgr_FindSpot_alt1(v31);
    }
    else {
      v32 = nullptr;
    }
    v34 = BasicMenu_16dd280(a1);
    v51_.v51 = GameData_20e4c20;
    v51_.v52 = a1;
    v51_.v53 = (unsigned __int64*)&v51_.v51;
    if (GameData_225e7a0 != 0) {
      v35 = 4;
      v36 = &v51_.v51;
    }
    else {
      v40 = v34;
      v41 = fw_memory_g_heap_manager_ptr;
      v42 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
      *v42 = v32;
      v43 = (__int64)v42;
      v54_.v54 = (char*)v42;
      v54_.v55 = (unsigned int**)(v42 + 1);
      v54_.v56 = (char*)(v42 + 1);
      GameHr_167f810((__int64)a1, 4, (__int64)&v54_.v54, 0, v40,
                     (__int64)&v51_.v51);
      v44 = 128;
      if (*(_QWORD*)(*(_QWORD*)v41 + 200LL) == 0) {
        v44 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v41 + v44, v43);
      v36 = (__int64 (***)(void))v51_.v53;
      if (v51_.v53 == (unsigned __int64*)&v51_.v51) {
        v35 = 4;
      }
      else {
        if (v51_.v53 == nullptr) {
          return;
        }
        v35 = 5;
      }
    }
    ((__int64 (*)(__int64))(*v36)[v35])((__int64)v36);
    return;
  }
  if (*GameData_212c780 == 0) {
    return;
  }
  if (game_GameModeData_instance_ != 0) {
    v33 = *(_QWORD*)(game_GameModeData_instance_ + 24);
  }
  else {
    v33 = 0;
  }
  TimelineFile_8903a0((void*)((__int64*)&v54_.v54), v33);
  v37 = (__int64)v54_.v54;
  if (v54_.v55 != (unsigned int**)v54_.v54) {
    v38 = *(_QWORD**)(v7 + 152);
    v39 = (unsigned int*)v38[25];
    if (v39 == nullptr) {
      while (1) {
        v39 = (unsigned int*)v38[15];
        if (v39 != nullptr) {
          break;
        }
        v38 = *(_QWORD**)(v38[3] + 8LL);
        if (v38 == nullptr) {
          v39 = nullptr;
          break;
        }
      }
    }
    v45 = game_gmap_SpotMgr_FindSpot_alt1(v39);
    if (v45 != nullptr) {
      v46 = (__int64)v45;
      if (*(_BYTE*)(v7 + 160) == 1) {
        v51_.v52 = &GameData_1aeeeee;
        v51_.v51 =
            (__int64 (**)(void))game_HashString((__int64)&GameData_1aeeeee);
        if (game_GameModeData_instance_ != 0) {
          v47 = game_GameVariableTable_Find(
              *(_QWORD**)(game_GameModeData_instance_ + 48),
              (unsigned __int64*)&v51_.v51);
          if (v47 != 0 && *(_DWORD*)(v47 + 32) != 0) {
            v46 = 0;
          }
        }
      }
      v48 = BasicMenu_16dd280(a1);
      v51_.v51 = GameData_20e4690;
      v51_.v52 = a1;
      v51_.v53 = (unsigned __int64*)&v51_.v51;
      GameHr_167fca0((__int64)a1, v46, v48, (__int64)&v51_.v51);
      if (v51_.v53 == (unsigned __int64*)&v51_.v51) {
        v49 = 32;
        goto LABEL_89;
      }
      if (v51_.v53 != nullptr) {
        v49 = 40;
      LABEL_89:
        (*(void (**)(__int64))(*v51_.v53 + v49))((__int64)v51_.v53);
      }
    }
  }
  if (v37 == 0) {
    return;
  }
  v29 = v37;
LABEL_45:
  v30 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v30 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, v29);
}

__int64 game_menu_anonymous_ProcQuestMenu_ShowMap_closure_Invoke(__int64 a1,
                                                                 _BYTE* a2,
                                                                 __int64 a3,
                                                                 _DWORD* a4)
{
  __int64 result;
  struct {
    __int64 v8;
    __int64 v9;
  } v8_;

  LayoutAccessor_1560070(
      (void*)(&v8_.v8), (__int64*)(*(_QWORD*)(a1 + 8) + 848LL), "L_Info/L_Img");
  game_gameui_159b580((__int64)&v8_.v8, a2, a3, a4);
  result = v8_.v9;
  if (v8_.v9 != 0) {
    return std___1___shared_weak_count___release_weak_alt1(v8_.v9);
  }
  return result;
}

__int64 game_menu_anonymous_ProcQuestMenu_ShowMap_closure0_Invoke(__int64 a1,
                                                                  _BYTE* a2,
                                                                  __int64 a3,
                                                                  _DWORD* a4)
{
  __int64 result;
  struct {
    __int64 v8;
    __int64 v9;
  } v8_;

  LayoutAccessor_1560070(
      (void*)(&v8_.v8), (__int64*)(*(_QWORD*)(a1 + 8) + 848LL), "L_Info/L_Img");
  game_gameui_159b580((__int64)&v8_.v8, a2, a3, a4);
  result = v8_.v9;
  if (v8_.v9 != 0) {
    return std___1___shared_weak_count___release_weak_alt1(v8_.v9);
  }
  return result;
}

__int64 game_menu_anonymous_ProcQuestMenu_ShowMap_closure1_Invoke(__int64 a1,
                                                                  _BYTE* a2,
                                                                  __int64 a3,
                                                                  _DWORD* a4)
{
  __int64 result;
  struct {
    __int64 v8;
    __int64 v9;
  } v8_;

  LayoutAccessor_1560070(
      (void*)(&v8_.v8), (__int64*)(*(_QWORD*)(a1 + 8) + 848LL), "L_Info/L_Img");
  game_gameui_159b580((__int64)&v8_.v8, a2, a3, a4);
  result = v8_.v9;
  if (v8_.v9 != 0) {
    return std___1___shared_weak_count___release_weak_alt1(v8_.v9);
  }
  return result;
}

bool game_menu_anonymous_ProcQuestMenu_SortAndFilter_closure_Invoke(__int64 a1,
                                                                    __int64 a2)
{
  return *(_DWORD*)(*(_QWORD*)a2 + 40LL) == *(_DWORD*)(a1 + 8);
}

#pragma GCC visibility pop
