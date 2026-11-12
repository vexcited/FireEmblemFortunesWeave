#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_17e5830(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_17e68f0(_QWORD, _QWORD);
__int64 GameRoutine_579160(_QWORD, _QWORD);
__int64 GameRoutine_828800(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_887920(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_menu_BasicMenu_Destroy_BasicMenu(_QWORD);
__int64 game_menu_BasicMenu_Unknown16de4d0(_QWORD);
__int64 game_menu_PageTab_Move(_QWORD, _QWORD, _QWORD);
__int64 game_menu_PageTab_SetupLabel(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                     _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPartsLayout(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_206feb8[])();
extern __int64 (*GameData_206ff48[])();
extern __int64 (*GameData_206ffc8[])();
extern __int64 GameData_206fe90;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212e008[9];
extern __int64* GameData_2131a78[9];
extern __int64* GameData_2131a80[8];
extern char game_menu_TutorialMenu_unknown_225d650_;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 TutorialMenu_Destructor(_QWORD* a1);
__int64 TutorialMenu_DeletingDestructor(_QWORD* a1);
__int64 TutorialMenu_Unknown84(__int64 a1);
__int64 TutorialMenu_Unknown88(__int64 result);
__int64 TutorialMenu_Unknown101(_QWORD* a1);
__int64 TutorialMenu_Unknown108(__int64 a1, unsigned int a2);
__int64 TutorialMenu_Unknown110(__int64 a1, unsigned int a2);
__int64 game_menu_PageTab_Update(_QWORD);
extern __int64 GameData_21c6980;
bool game_menu_TutorialMenu_OnInit_lambda0_Invoke(__int64 a1, __int64 a2);
__int64 game_menu_TutorialMenu_OnInit_lambda1_Invoke(__int64 a1, __int64 a2);
bool game_menu_TutorialMenu_SortAndFilter_lambda0_Invoke(__int64 a1,
                                                         __int64* a2);
__int64 BasicMenu_16e1f40(__int64 result, __int64, __int64);
extern __int64 (*GameData_2070048[])();
__int64 game_menu_TutorialMenu_SortAndFilter(__int64 a1);
__int64 BasicMenu_16dd8b0(__int64, int, int);
__int64 GameHr_163e360(__int64 result, unsigned __int8*, __int64, char);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 memcpy(__int64, __int64, unsigned __int64);
char* GameRoutine_a4dbe0(__int64, const char*, char);
extern __int64 (*game_menu_anonymous_EmptyTutorialMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_TutorialMenuItem_vtable[])();
extern __int64* GameData_212c650[5];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_21ca0a8;
unsigned __int64 GameRoutine_887920_alt1(_QWORD*,
                                         __int64) __asm__("GameRoutine_887920");
void BasicMenuCursor_16e0c00(_QWORD*, __int64);
void __attribute__((noreturn)) GameRoutine_163df80();
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 TutorialMenu_Unknown128(_QWORD* a1);

__int64 TutorialMenu_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;

  v1 = a1[137];
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  v3 = a1[133];
  if (v3 != 0) {
    a1[134] = v3;
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                  v3);
  }
  return game_menu_BasicMenu_Destroy_BasicMenu(a1);
}

__int64 TutorialMenu_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = a1[137];
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  v3 = a1[133];
  v4 = fw_memory_g_heap_manager_ptr;
  if (v3 != 0) {
    v5 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[134] = v3;
    v6 = 128;
    if (*(_QWORD*)(v5 + 200) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(v5 + v6, v3);
  }
  game_menu_BasicMenu_Destroy_BasicMenu(a1);
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v7 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v7, a1);
}

__int64 TutorialMenu_Unknown84(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  char* v5;
  char* v6;
  unsigned __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  int v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  unsigned __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 result;
  __int64 v35;
  __int64 v36;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  _QWORD* v42;
  _QWORD* v43;
  _QWORD* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  _QWORD v48[4];
  _QWORD* v49;
  __int64 v50;

  v1 = *(_QWORD*)(a1 + 232);
  if (*(_QWORD*)(a1 + 240) == v1) {
    goto LABEL_13;
  }
  v3 = 0;
  while (1) {
    v4 = *(_QWORD*)(v1 + 8 * v3);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 48LL))(v4) & 1) != 0 &&
        ((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 40LL))(v4) & 1) != 0) {
      break;
    }
    v1 = *(_QWORD*)(a1 + 232);
    if (++v3 >= (unsigned __int64)((*(_QWORD*)(a1 + 240) - v1) >> 3)) {
      goto LABEL_13;
    }
  }
  v5 = *(char**)(a1 + 232);
  v6 = *(char**)(a1 + 240);
  if (v5 == v6) {
    goto LABEL_13;
  }
  v7 = v6 - v5 - 8;
  v8 = (v7 >> 3) + 1;
  if (v7 < 0x18) {
    v9 = 0;
  LABEL_9:
    v10 = v8 & 3;
    if (v10 != 0) {
      v11 = v9 - v3;
      while (v11 != 0) {
        v5 += 8;
        ++v11;
        if (--v10 == 0) {
          goto LABEL_13;
        }
      }
      goto LABEL_61;
    }
  LABEL_13:
    v12 = (__int64*)(a1 + 848);
    goto LABEL_14;
  }
  v35 = 0;
  while ((_DWORD)v3 != (_DWORD)v35) {
    if ((_DWORD)v3 == (_DWORD)v35 + 1) {
      v5 += 8;
      break;
    }
    if ((_DWORD)v3 == (_DWORD)v35 + 2) {
      v5 += 16;
      break;
    }
    if ((_DWORD)v3 == (_DWORD)v35 + 3) {
      v5 += 24;
      break;
    }
    v5 += 32;
    v35 += 4;
    v9 = v35;
    if ((v8 & 0x3FFFFFFFFFFFFFFCLL) == v35) {
      goto LABEL_9;
    }
  }

LABEL_61:
  v36 = *(_QWORD*)v5;
  v12 = (__int64*)(a1 + 848);
  if (v36 != 0 && v36 != *(_QWORD*)(a1 + 344)) {
    v38 = ui_LayoutAccessor_FindPartsLayout(a1 + 848, "L_Info");
    v39 = *(_QWORD*)(a1 + 856);
    if (v39 != 0) {
      v40 = std___1___shared_weak_count_lock(v39);
      if (v40 != 0) {
        v41 = *v12;
      }
      else {
        v41 = 0;
      }
    }
    else {
      v41 = 0;
      v40 = 0;
    }
    v42 = (_QWORD*)GameRoutine_579160(352, 16);
    v42[2] = 0;
    v43 = v42 + 4;
    v44 = v42;
    *v42 = GameData_2131a78[0] + 2;
    v42[1] = 0;
    GameRoutine_17e5830(v42 + 4, v38, v41, 0);
    v44[4] = GameData_2131a80[0] + 2;
    *(_QWORD*)(a1 + 1088) = v43;
    v45 = *(_QWORD*)(a1 + 1096);
    *(_QWORD*)(a1 + 1096) = v44;
    if (v45 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
      std___1___shared_weak_count___release_weak(v45);
    }
    if (v40 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
      std___1___shared_weak_count___release_weak(v40);
    }
    goto LABEL_15;
  }

LABEL_14:
  ui_LayoutAccessor_SetPaneVisible(v12, "L_Info", 0);

LABEL_15:
  if ((*(_BYTE*)(a1 + 1105) & 1) == 0) {
    goto LABEL_43;
  }
  v14 = *(_QWORD*)(a1 + 232);
  v13 = *(_QWORD*)(a1 + 240);
  v15 = v48;
  v48[0] = GameData_206feb8;
  v48[1] = a1;
  v49 = v48;
  if (v13 == v14) {
    goto LABEL_27;
  }
  v16 = 0;
  v17 = GameData_212e008[0];
  do {
    v18 = *(_QWORD*)(v14 + 8 * v16);
    if (v18 != 0) {
      v19 = __dynamic_cast(v18, v17, &GameData_206fe90, 0);
      if (v19 == 0) {
        goto LABEL_19;
      }
      v21 = v19;
      v22 = v49;
      v50 = v21;
      if (v49 == nullptr) {
      LABEL_76:
        GameRoutine_60a310(v22, v20);
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v49 + 48LL))(v49, &v50) & 1) !=
          0) {
        break;
      }
      v14 = *(_QWORD*)(a1 + 232);
      v13 = *(_QWORD*)(a1 + 240);
    }
  LABEL_19:
    ++v16;
  } while (v16 < (v13 - v14) >> 3);
  v15 = v49;
  if (v49 != v48) {
    if (v49 != nullptr) {
      v23 = 40;
      goto LABEL_28;
    }
    goto LABEL_29;
  }

LABEL_27:
  v23 = 32;

LABEL_28:
  (*(void (**)(void*))(*v15 + v23))(v15);

LABEL_29:
  v25 = *(_QWORD*)(a1 + 232);
  v24 = *(_QWORD*)(a1 + 240);
  v26 = v48;
  v48[0] = GameData_206ff48;
  v48[1] = a1;
  v49 = v48;
  if (v24 == v25) {
    goto LABEL_40;
  }
  v27 = 0;
  v28 = GameData_212e008[0];
  while (2) {
    v29 = *(_QWORD*)(v25 + 8 * v27);
    if (v29 == 0 ||
        (v30 = __dynamic_cast(v29, v28, &GameData_206fe90, 0)) == 0) {
    LABEL_32:
      if (++v27 >= (unsigned __int64)((v24 - v25) >> 3)) {
        goto LABEL_37;
      }
      continue;
    }
    break;
  }
  v31 = v30;
  v22 = v49;
  v50 = v31;
  if (v49 == nullptr) {
    goto LABEL_76;
  }
  if (((*(__int64 (**)(_QWORD*, __int64*))(*v49 + 48LL))(v49, &v50) & 1) == 0) {
    v25 = *(_QWORD*)(a1 + 232);
    v24 = *(_QWORD*)(a1 + 240);
    goto LABEL_32;
  }

LABEL_37:
  v26 = v49;
  if (v49 != v48) {
    if (v49 != nullptr) {
      v32 = 40;
      goto LABEL_41;
    }
    goto LABEL_42;
  }

LABEL_40:
  v32 = 32;

LABEL_41:
  (*(void (**)(void*))(*v26 + v32))(v26);

LABEL_42:
  *(_BYTE*)(a1 + 1105) = 0;
  game_menu_BasicMenu_Unknown16de4d0(a1);

LABEL_43:
  GameRoutine_1560070((void*)&v46, v12, "L_PageTab");
  v48[0] = GameData_206ffc8;
  v48[1] = a1;
  v49 = v48;
  game_menu_PageTab_SetupLabel(a1 + 656, &v46, v48, 3, 4, 5);
  if (v49 == v48) {
    v33 = 32;
  LABEL_47:
    (*(void (**)(void*))(*v49 + v33))(v49);
  }
  else if (v49 != nullptr) {
    v33 = 40;
    goto LABEL_47;
  }
  result = v47;
  if (v47 != 0) {
    return std___1___shared_weak_count___release_weak(v47);
  }
  return result;
}

__int64 TutorialMenu_Unknown88(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  char* v5;
  char* v6;
  unsigned __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  int i;
  __int64 v12;
  __int64 v13;
  __int64 v15;

  v1 = *(_QWORD*)(result + 232);
  if (*(_QWORD*)(result + 240) != v1) {
    v2 = (_QWORD*)result;
    v3 = 0;
    while (1) {
      v4 = *(_QWORD*)(v1 + 8 * v3);
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 48LL))(v4);
      if ((result & 1) != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 40LL))(v4);
        if ((result & 1) != 0) {
          break;
        }
      }
      v1 = v2[29];
      if (++v3 >= (unsigned __int64)((v2[30] - v1) >> 3)) {
        return result;
      }
    }
    v5 = (char*)v2[29];
    v6 = (char*)v2[30];
    if (v5 != v6) {
      v7 = v6 - v5 - 8;
      v8 = (v7 >> 3) + 1;
      if (v7 >= 0x18) {
        v12 = 0;
        while ((_DWORD)v3 != (_DWORD)v12) {
          if ((_DWORD)v3 == (_DWORD)v12 + 1) {
            v5 += 8;
            goto LABEL_24;
          }
          if ((_DWORD)v3 == (_DWORD)v12 + 2) {
            v5 += 16;
            goto LABEL_24;
          }
          if ((_DWORD)v3 == (_DWORD)v12 + 3) {
            v5 += 24;
            goto LABEL_24;
          }
          v5 += 32;
          v12 += 4;
          v9 = v12;
          if ((v8 & 0x3FFFFFFFFFFFFFFCLL) == v12) {
            goto LABEL_9;
          }
        }
        goto LABEL_24;
      }
      v9 = 0;
    LABEL_9:
      v10 = v8 & 3;
      if (v10 != 0) {
        for (i = v9 - v3; i != 0; ++i) {
          v5 += 8;
          if (--v10 == 0) {
            return result;
          }
        }
      LABEL_24:
        v13 = *(_QWORD*)v5;
        if (v13 != 0 && v13 != v2[43]) {
          result = v2[42];
          if (result != 0) {
            result = __dynamic_cast(result, GameData_212e008[0],
                                    &GameData_206fe90, 0);
            if (result != 0) {
              v15 = *(_QWORD*)(result + 88);
              if (v15 != 0) {
                result = v2[136];
                if (result != 0) {
                  return GameRoutine_17e68f0(result, v15);
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 TutorialMenu_Unknown128(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  unsigned __int64* v8;
  char* v9;
  __int64 v10;
  __int64** v11;
  __int64* v12;
  __int64* v13;
  int v14;
  __int64 v15;
  const char* v16;
  __int64 v17;
  char* v18;
  __int64* v19;
  __int64 v20;
  int v21;
  unsigned __int64* v22;
  __int64 v23;
  __int64 v24;
  unsigned __int8* v25;
  unsigned __int8* v26;
  __int64 v27;
  int v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  char* v34;
  unsigned __int64 v35;
  __int64 v36;
  char* v37;
  char v38;
  unsigned __int64 v39;
  _BYTE* v40;
  char* v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  char v46;
  __int64 v47;
  __int64 v48;
  char* v49;
  unsigned __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  bool v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  char* v58;
  char* v59;
  char* v60;
  char* v61;
  char* v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  unsigned __int8* v66;
  __int64 v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  __int64* v72;
  __int64 v73;
  __int64 v74;
  unsigned __int64 v75;
  __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  __int64* v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v88;
  __int64 v89;
  int v90;
  struct {
    unsigned __int64* v91[4];
    int v92;
    int v93;
    __int64 v94;
    __int64 v95;
    __int64 v96;
    __int64 v97;
    __int64 v98;
    __int64 v99;
    __int64 v100;
    __int64 v101;
    __int64 v102;
    __int64 v103;
    __int64 v104;
    __int64 v105;
    int v106;
    int v107;
  } v91_;

  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      88, 16, 0);
  *(_QWORD*)(v3 + 80) = 0;
  v4 = v3;
  *(_QWORD*)(v3 + 16) = 0;
  *(_QWORD*)(v3 + 24) = 0;
  *(_QWORD*)(v3 + 32) = 0;
  *(_QWORD*)(v3 + 40) = 0;
  *(_QWORD*)(v3 + 48) = 0;
  *(_QWORD*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_QWORD*)(v3 + 72) = 0;
  *(_WORD*)(v3 + 80) = 257;
  *(_BYTE*)(v3 + 82) = 1;
  *(_QWORD*)v3 = game_menu_anonymous_EmptyTutorialMenuItem_vtable;
  *(_QWORD*)(v3 + 8) = 0;
  v5 = a1[43];
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  *(_QWORD*)(v4 + 8) = a1;
  a1[43] = v4;
  v6 = *(__int64**)(GameData_21ca0a8 + 64);
  v7 = *(__int64**)(GameData_21ca0a8 + 72);
  if (v6 != v7) {
    v8 = (unsigned __int64*)(GameData_212e348 + 2);
    do {
      GameRoutine_887920_alt1(v91_.v91, *(_QWORD*)(*v6 + 8));
      if (v91_.v91[0] == nullptr) {
        goto LABEL_7;
      }
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_7;
      }
      v10 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48), v91_.v91[0]);
      if (v10 == 0) {
        goto LABEL_7;
      }
      if (*(_BYTE*)(v10 + 32) == 0) {
        goto LABEL_7;
      }
      v11 = *(__int64***)(*v6 + 40);
      v12 = *v11;
      v13 = v11[1];
      if (*v11 == v13) {
        goto LABEL_7;
      }
      v14 = 0;
      do {
        v15 = *v12++;
        v16 = *(const char**)(v15 + 48);
        if (v16 == nullptr) {
          break;
        }
        v91_.v94 = -1;
        v91_.v95 = -1;
        v91_.v96 = -1;
        v91_.v97 = -1;
        v91_.v98 = -1;
        v91_.v99 = -1;
        v91_.v100 = -1;
        v91_.v101 = -1;
        v17 = *msg_MessageManager_instance__ptr[0];
        v91_.v102 = -1;
        v91_.v103 = -1;
        v91_.v104 = -1;
        v91_.v105 = -1;
        v91_.v91[0] = v8;
        v91_.v91[1] = (unsigned __int64*)0xFFFF0001FFFF0000LL;
        v91_.v91[2] = (unsigned __int64*)0xFFFF0004FFFF0002LL;
        v91_.v91[3] = (unsigned __int64*)0xFFFF0006FFFF0005LL;
        v91_.v106 = 8;
        v91_.v107 = 0;
        v91_.v92 = -65529;
        v91_.v93 = -65528;
        v18 = GameRoutine_a4dbe0(v17, v16, 0);
        if (v18 == nullptr || *v18 == 0) {
          break;
        }
        --v14;
      } while (v12 != v13);
      if (v14 == 0) {
        goto LABEL_7;
      }
      v19 = **(__int64***)(*v6 + 40);
      if ((int)((*(_QWORD*)(*(_QWORD*)(*v6 + 40) + 8LL) - (_QWORD)v19) >> 3) >=
              1 &&
          (v20 = *v19) != 0) {
        v21 = *(unsigned __int8*)(v20 + 32);
        v22 = *(unsigned __int64**)(v20 + 24);
        if (*v22 == 0) {
          goto LABEL_36;
        }
      }
      else {
        v21 = 0;
        v22 = (unsigned __int64*)GameData_212c650[0];
        if (*GameData_212c650[0] == 0) {
          goto LABEL_36;
        }
      }
      if (game_GameModeData_instance_ == 0 ||
          (v23 = game_GameVariableTable_Find_alt1(
               *(_QWORD**)(game_GameModeData_instance_ + 48), v22)) == 0 ||
          *(_DWORD*)(v23 + 32) == 0) {
      LABEL_36:
        if (v21 == 6) {
          goto LABEL_7;
        }
        goto LABEL_37;
      }
      v24 = a1[133];
      v25 = (unsigned __int8*)a1[134];
      if ((unsigned __int8*)v24 != v25) {
        v26 = (unsigned __int8*)a1[133];
        v27 = (unsigned __int64)&v25[-v24] & 3;
        if (v27 != 0) {
          v26 = (unsigned __int8*)a1[133];
          do {
            v28 = *v26++;
            if (v28 == 0) {
              goto LABEL_37;
            }
          } while (--v27 != 0);
        }
        if ((unsigned __int64)&v25[-v24] >= 4) {
          while (*v26 != 0 && v26[1] != 0 && v26[2] != 0 && v26[3] != 0) {
            v26 += 4;
            if (v26 == v25) {
              goto LABEL_34;
            }
          }
          goto LABEL_37;
        }
      }
    LABEL_34:
      v29 = a1[135];
      if ((unsigned __int64)v25 >= v29) {
        v90 = v21;
        v50 = (unsigned __int64)&v25[-v24];
        v51 = (__int64)&v25[-v24 + 1];
        if (v51 < 0) {
          goto LABEL_220;
        }
        v52 = v29 - v24;
        if (2 * v52 > v51) {
          v51 = 2 * v52;
        }
        v53 = v52 >= 0x3FFFFFFFFFFFFFFFLL;
        v54 = 0x7FFFFFFFFFFFFFFFLL;
        if (!v53) {
          v54 = v51;
        }
        if (v54 != 0) {
          v55 = v54;
          v56 = fw_memory_HeapManager_Allocate(*v2, v54, 16, 0);
          v54 = v55;
          v57 = v56;
        }
        else {
          v57 = 0;
        }
        v88 = v57 + v54;
        *(_BYTE*)(v57 + v50) = 0;
        v30 = v57 + v50 + 1;
        memcpy(v57, v24, v50);
        a1[133] = v57;
        a1[134] = v30;
        a1[135] = v88;
        v2 = (__int64*)fw_memory_g_heap_manager_ptr;
        if (v24 != 0) {
          v65 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v65 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v65, v24);
        }
        v21 = v90;
      }
      else {
        *v25 = 0;
        v30 = (__int64)(v25 + 1);
      }
      a1[134] = v30;
    LABEL_37:
      v31 = fw_memory_HeapManager_Allocate(*v2, 96, 16, 0);
      v32 = *v6;
      *(_WORD*)(v31 + 16) = 0;
      *(_DWORD*)(v31 + 40) = 0;
      *(_QWORD*)(v31 + 64) = 0;
      *(_QWORD*)(v31 + 72) = 0;
      *(_QWORD*)(v31 + 48) = 0;
      *(_QWORD*)(v31 + 56) = 0;
      *(_WORD*)(v31 + 80) = 257;
      *(_BYTE*)(v31 + 82) = 1;
      *(_QWORD*)v31 = game_menu_anonymous_TutorialMenuItem_vtable;
      *(_QWORD*)(v31 + 8) = 0;
      *(_QWORD*)(v31 + 88) = v32;
      BasicMenuCursor_16e0c00(a1, v31);
      v33 = (char*)a1[133];
      v34 = (char*)a1[134];
      v9 = v33;
      if (v33 == v34) {
        goto LABEL_6;
      }
      v35 = v34 - v33;
      v36 = (v34 - v33) & 3;
      if (v21 <= 3) {
        switch (v21) {
        case 1:
          v9 = (char*)a1[133];
          if (v36 == 0) {
          LABEL_112:
            if (v35 < 4) {
              goto LABEL_5;
            }
            v9 += 3;
            while (*(v9 - 3) != 2) {
              if (*(v9 - 2) == 2) {
              LABEL_176:
                v9 -= 2;
                goto LABEL_6;
              }
              if (*(v9 - 1) == 2) {
              LABEL_177:
                --v9;
                goto LABEL_6;
              }
              if (*v9 == 2) {
                goto LABEL_6;
              }
              v58 = v9 + 1;
              v9 += 4;
              if (v58 == v34) {
                goto LABEL_5;
              }
            }
            goto LABEL_175;
          }
          v9 = (char*)a1[133];
          while (*v9 != 2) {
            ++v9;
            if (--v36 == 0) {
              goto LABEL_112;
            }
          }
          break;
        case 2:
          v9 = (char*)a1[133];
          if (v36 == 0) {
          LABEL_160:
            if (v35 < 4) {
            LABEL_5:
              v9 = (char*)a1[134];
              break;
            }
            v9 += 3;
            while (*(v9 - 3) != 3) {
              if (*(v9 - 2) == 3) {
                goto LABEL_176;
              }
              if (*(v9 - 1) == 3) {
                goto LABEL_177;
              }
              if (*v9 == 3) {
                goto LABEL_6;
              }
              v62 = v9 + 1;
              v9 += 4;
              if (v62 == v34) {
                goto LABEL_5;
              }
            }
            goto LABEL_175;
          }
          v9 = (char*)a1[133];
          while (*v9 != 3) {
            ++v9;
            if (--v36 == 0) {
              goto LABEL_160;
            }
          }
          break;
        case 3:
          v9 = (char*)a1[133];
          if (v36 == 0) {
          LABEL_71:
            if (v35 < 4) {
              goto LABEL_5;
            }
            v9 += 3;
            while (*(v9 - 3) != 4) {
              if (*(v9 - 2) == 4) {
                goto LABEL_176;
              }
              if (*(v9 - 1) == 4) {
                goto LABEL_177;
              }
              if (*v9 == 4) {
                goto LABEL_6;
              }
              v41 = v9 + 1;
              v9 += 4;
              if (v41 == v34) {
                goto LABEL_5;
              }
            }
            goto LABEL_175;
          }
          v9 = (char*)a1[133];
          while (*v9 != 4) {
            ++v9;
            if (--v36 == 0) {
              goto LABEL_71;
            }
          }
          break;
        default:
          goto LABEL_120;
        }
      }
      else if (v21 > 5) {
        if (v21 == 7) {
          v9 = (char*)a1[133];
          if (v36 == 0) {
          LABEL_148:
            if (v35 < 4) {
              goto LABEL_5;
            }
            v9 += 3;
            while (*(v9 - 3) != 7) {
              if (*(v9 - 2) == 7) {
                goto LABEL_176;
              }
              if (*(v9 - 1) == 7) {
                goto LABEL_177;
              }
              if (*v9 == 7) {
                goto LABEL_6;
              }
              v61 = v9 + 1;
              v9 += 4;
              if (v61 == v34) {
                goto LABEL_5;
              }
            }
            goto LABEL_175;
          }
          v9 = (char*)a1[133];
          while (*v9 != 7) {
            ++v9;
            if (--v36 == 0) {
              goto LABEL_148;
            }
          }
          goto LABEL_6;
        }
        if (v21 != 6) {
        LABEL_120:
          v9 = (char*)a1[133];
          if (v36 == 0) {
          LABEL_124:
            if (v35 < 4) {
              goto LABEL_5;
            }
            v9 += 3;
            while (*(v9 - 3) != 1) {
              if (*(v9 - 2) == 1) {
                goto LABEL_176;
              }
              if (*(v9 - 1) == 1) {
                goto LABEL_177;
              }
              if (*v9 == 1) {
                goto LABEL_6;
              }
              v59 = v9 + 1;
              v9 += 4;
              if (v59 == v34) {
                goto LABEL_5;
              }
            }
            goto LABEL_175;
          }
          v9 = (char*)a1[133];
          while (*v9 != 1) {
            ++v9;
            if (--v36 == 0) {
              goto LABEL_124;
            }
          }
          goto LABEL_6;
        }
        v9 = (char*)a1[133];
        if (v36 == 0) {
        LABEL_93:
          if (v35 < 4) {
            goto LABEL_5;
          }
          v9 += 3;
          while (*(v9 - 3) != 0) {
            if (*(v9 - 2) == 0) {
              goto LABEL_176;
            }
            if (*(v9 - 1) == 0) {
              goto LABEL_177;
            }
            if (*v9 == 0) {
              goto LABEL_6;
            }
            v49 = v9 + 1;
            v9 += 4;
            if (v49 == v34) {
              goto LABEL_5;
            }
          }
          goto LABEL_175;
        }
        v9 = (char*)a1[133];
        while (*v9 != 0) {
          ++v9;
          if (--v36 == 0) {
            goto LABEL_93;
          }
        }
      }
      else if (v21 == 4) {
        v9 = (char*)a1[133];
        if (v36 == 0) {
        LABEL_136:
          if (v35 < 4) {
            goto LABEL_5;
          }
          v9 += 3;
          while (*(v9 - 3) != 5) {
            if (*(v9 - 2) == 5) {
              goto LABEL_176;
            }
            if (*(v9 - 1) == 5) {
              goto LABEL_177;
            }
            if (*v9 == 5) {
              goto LABEL_6;
            }
            v60 = v9 + 1;
            v9 += 4;
            if (v60 == v34) {
              goto LABEL_5;
            }
          }
          goto LABEL_175;
        }
        v9 = (char*)a1[133];
        while (*v9 != 5) {
          ++v9;
          if (--v36 == 0) {
            goto LABEL_136;
          }
        }
      }
      else {
        v9 = (char*)a1[133];
        if (v36 == 0) {
        LABEL_45:
          if (v35 < 4) {
            goto LABEL_5;
          }
          v9 += 3;
          while (*(v9 - 3) != 6) {
            if (*(v9 - 2) == 6) {
              goto LABEL_176;
            }
            if (*(v9 - 1) == 6) {
              goto LABEL_177;
            }
            if (*v9 == 6) {
              goto LABEL_6;
            }
            v37 = v9 + 1;
            v9 += 4;
            if (v37 == v34) {
              goto LABEL_5;
            }
          }
        LABEL_175:
          v9 -= 3;
          goto LABEL_6;
        }
        v9 = (char*)a1[133];
        while (*v9 != 6) {
          ++v9;
          if (--v36 == 0) {
            goto LABEL_45;
          }
        }
      }
    LABEL_6:
      if (v9 == v34) {
        if ((unsigned int)v21 >= 8) {
          v38 = 1;
        }
        else {
          v38 = 0x700060504030201uLL >> (8 * (unsigned __int8)v21);
        }
        v39 = a1[135];
        if ((unsigned __int64)v34 >= v39) {
          v42 = v34 - v33;
          v43 = v34 - v33 + 1;
          if (v43 < 0) {
            goto LABEL_220;
          }
          v44 = v39 - (_QWORD)v33;
          v89 = a1[133];
          if (2 * v44 > v43) {
            v43 = 2 * v44;
          }
          if (v44 >= 0x3FFFFFFFFFFFFFFFLL) {
            v45 = 0x7FFFFFFFFFFFFFFFLL;
          }
          else {
            v45 = v43;
          }
          if (v45 != 0) {
            v46 = v38;
            v47 = fw_memory_HeapManager_Allocate(*v2, v45, 16, 0);
            v38 = v46;
            v48 = v47;
          }
          else {
            v48 = 0;
          }
          *(_BYTE*)(v48 + v42) = v38;
          v63 = v48 + v42 + 1;
          memcpy(v48, v89, v42);
          a1[133] = v48;
          a1[134] = v63;
          a1[135] = v48 + v45;
          v2 = (__int64*)fw_memory_g_heap_manager_ptr;
          if (v89 != 0) {
            v64 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v64 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v64, v89);
          }
          v40 = (_BYTE*)v63;
        }
        else {
          *v34 = v38;
          v40 = v34 + 1;
        }
        a1[134] = v40;
      }
    LABEL_7:
      ++v6;
    } while (v6 != v7);
  }
  v66 = (unsigned __int8*)a1[134];
  v67 = a1[133];
  v68 = (unsigned __int64)&v66[-v67];
  if ((unsigned __int64)&v66[-v67] > 1) {
    v69 = a1[135];
    if ((unsigned __int64)v66 >= v69) {
      v70 = v68 + 1;
      if ((__int64)(v68 + 1) < 0) {
      LABEL_220:
        GameRoutine_163df80();
      }
      v71 = v69 - v67;
      v72 = v2;
      if (2 * v71 > v70) {
        v70 = 2 * v71;
      }
      if (v71 >= 0x3FFFFFFFFFFFFFFFLL) {
        v73 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else {
        v73 = v70;
      }
      if (v73 != 0) {
        v74 = fw_memory_HeapManager_Allocate(*v72, v73, 16, 0);
      }
      else {
        v74 = 0;
      }
      v75 = (unsigned __int64)&v66[-v67];
      *(_BYTE*)(v74 + v68) = 1;
      v66 = (unsigned __int8*)(v74 + v68 + 1);
      memcpy(v74, v67, v75);
      a1[133] = v74;
      a1[134] = v66;
      a1[135] = v74 + v73;
      if (v67 != 0) {
        v2 = v72;
        v76 = 128;
        if (*(_QWORD*)(*v72 + 200) == 0) {
          v76 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v72 + v76, v67);
      }
      else {
        v2 = v72;
      }
    }
    else {
      *v66++ = 1;
    }
    v67 = a1[133];
    a1[134] = v66;
    v68 = (unsigned __int64)&v66[-v67];
  }
  if (v66 != (unsigned __int8*)v67) {
    goto LABEL_204;
  }
  v78 = a1[135];
  if ((unsigned __int64)v66 >= v78) {
    v80 = v78 - v67;
    v81 = v2;
    v82 = *v2;
    if (2 * v80 <= v68 + 1) {
      v83 = v68 + 1;
    }
    else {
      v83 = 2 * v80;
    }
    if (v80 >= 0x3FFFFFFFFFFFFFFFLL) {
      v84 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else {
      v84 = v83;
    }
    v85 = fw_memory_HeapManager_Allocate(v82, v84, 16, 0);
    *(_BYTE*)(v85 + v68) = 1;
    v79 = v85 + v68 + 1;
    memcpy(v85, v67, v68);
    a1[133] = v85;
    a1[134] = v79;
    a1[135] = v85 + v84;
    if (v66 != nullptr) {
      v86 = 128;
      if (*(_QWORD*)(*v81 + 200) == 0) {
        v86 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v81 + v86, v67);
    }
  }
  else {
    *v66 = 1;
    v79 = (__int64)(v66 + 1);
  }
  v67 = a1[133];
  a1[134] = v79;
  v66 = (unsigned __int8*)v79;
  if (v67 == v79) {
    LODWORD(v77) = v79;
  }
  else {
  LABEL_204:
    GameHr_163e360(v67, v66, (2 * __clz((unsigned __int64)&v66[-v67])) ^ 0x7E,
                   1);
    v77 = a1[134];
    v66 = (unsigned __int8*)a1[133];
  }
  return BasicMenu_16dd8b0((__int64)a1, (int)v77 - (int)v66, 0);
}

__int64 game_menu_TutorialMenu_SortAndFilter(__int64 a1)
{
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  struct {
    _BYTE v9[32];
    _BYTE* v10;
  } v9_;
  struct {
    _QWORD v11[4];
    _QWORD* v12;
  } v11_;

  v3 = *(_QWORD*)(a1 + 672);
  v4 = *(int*)(a1 + 660);
  if (v4 < (*(_QWORD*)(a1 + 680) - v3) >> 2) {
    v4 = *(int*)(v3 + 4 * v4);
  }
  v5 = *(unsigned __int8*)(*(_QWORD*)(a1 + 1064) + v4);
  v11_.v11[2] = a1;
  v9_.v10 = nullptr;
  v11_.v11[0] = GameData_2070048;
  v11_.v11[1] = v5;
  v11_.v12 = v11_.v11;
  BasicMenu_16e1f40(a1, (__int64)v11_.v11, (__int64)v9_.v9);
  if (v9_.v10 == v9_.v9) {
    v6 = 32;
  }
  else {
    if (v9_.v10 == nullptr) {
      goto LABEL_8;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v9_.v10 + v6))((__int64)v9_.v10);
LABEL_8:
  result = (__int64)v11_.v12;
  if (v11_.v12 == v11_.v11) {
    v8 = 32;
  }
  else {
    if (v11_.v12 == nullptr) {
      return result;
    }
    v8 = 40;
  }
  return (*(__int64 (**)(__int64))(*v11_.v12 + v8))((__int64)v11_.v12);
}

__int64 TutorialMenu_Unknown101(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  char* v5;
  char* v6;
  unsigned __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  int v11;
  __int64 result;
  __int64 v13;
  __int64 v14;

  v1 = a1[29];
  if (a1[30] == v1) {
    return 3;
  }
  v3 = 0;
  while (1) {
    v4 = *(_QWORD*)(v1 + 8 * v3);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 48LL))(v4) & 1) != 0 &&
        ((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 40LL))(v4) & 1) != 0) {
      break;
    }
    v1 = a1[29];
    if (++v3 >= (unsigned __int64)((a1[30] - v1) >> 3)) {
      return 3;
    }
  }
  v5 = (char*)a1[29];
  v6 = (char*)a1[30];
  if (v5 == v6) {
    return 3;
  }
  v7 = v6 - v5 - 8;
  v8 = (v7 >> 3) + 1;
  if (v7 >= 0x18) {
    v13 = 0;
    while ((_DWORD)v3 != (_DWORD)v13) {
      if ((_DWORD)v3 == (_DWORD)v13 + 1) {
        v5 += 8;
        break;
      }
      if ((_DWORD)v3 == (_DWORD)v13 + 2) {
        v5 += 16;
        break;
      }
      if ((_DWORD)v3 == (_DWORD)v13 + 3) {
        v5 += 24;
        break;
      }
      v5 += 32;
      v13 += 4;
      v9 = v13;
      if ((v8 & 0x3FFFFFFFFFFFFFFCLL) == v13) {
        goto LABEL_9;
      }
    }
  }
  else {
    v9 = 0;
  LABEL_9:
    v10 = v8 & 3;
    if (v10 == 0) {
      return 3;
    }
    v11 = v9 - v3;
    result = 3;
    while (v11 != 0) {
      v5 += 8;
      ++v11;
      if (--v10 == 0) {
        return result;
      }
    }
  }
  v14 = *(_QWORD*)v5;
  if (v14 == 0 || v14 == a1[43]) {
    return 3;
  }
  result = a1[42];
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 208LL))(result);
  }
  return result;
}

__int64 TutorialMenu_Unknown108(__int64 a1, unsigned int a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;

  if ((game_menu_PageTab_Move(a1 + 656, 0xFFFFFFFFLL, a2) & 1) == 0) {
    return 0;
  }
  v3 = *(_QWORD*)(a1 + 336);
  if (v3 != 0) {
    v4 = __dynamic_cast(v3, GameData_212e008[0], &GameData_206fe90, 0);
    if (v4 != 0 && (game_menu_TutorialMenu_unknown_225d650_ & 1) == 0) {
      v5 = v4;
      GameRoutine_887920(&v10, *(_QWORD*)(*(_QWORD*)(v4 + 88) + 8LL));
      v6 = v10;
      if (v10 == 0 || game_GameModeData_instance_ == 0) {
        goto LABEL_16;
      }
      v7 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v10);
      if (v7 != 0) {
        v8 = game_GameModeData_instance_;
        if ((*(_BYTE*)(v7 + 32) & 0xFE) != 0) {
          goto LABEL_14;
        }
      }
      else {
        v8 = game_GameModeData_instance_;
      }
      if (v8 == 0) {
      LABEL_16:
        (*(void (**)(__int64))(*(_QWORD*)v5 + 440LL))(v5);
        goto LABEL_17;
      }
      GameRoutine_828800(v8 + 40, v6, 2);
      v8 = game_GameModeData_instance_;
    LABEL_14:
      if (v8 != 0) {
        game_GameVariableTable_Find(*(_QWORD*)(v8 + 48), v6);
      }
      goto LABEL_16;
    }
  }

LABEL_17:
  game_menu_TutorialMenu_unknown_225d650_ = 1;
  game_menu_BasicMenu_Unknown16de4d0(a1);
  game_menu_TutorialMenu_unknown_225d650_ = 0;
  return 13;
}

__int64 TutorialMenu_Unknown110(__int64 a1, unsigned int a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;

  if ((game_menu_PageTab_Move(a1 + 656, 1, a2) & 1) == 0) {
    return 0;
  }
  v3 = *(_QWORD*)(a1 + 336);
  if (v3 != 0) {
    v4 = __dynamic_cast(v3, GameData_212e008[0], &GameData_206fe90, 0);
    if (v4 != 0 && (game_menu_TutorialMenu_unknown_225d650_ & 1) == 0) {
      v5 = v4;
      GameRoutine_887920(&v10, *(_QWORD*)(*(_QWORD*)(v4 + 88) + 8LL));
      v6 = v10;
      if (v10 == 0 || game_GameModeData_instance_ == 0) {
        goto LABEL_16;
      }
      v7 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v10);
      if (v7 != 0) {
        v8 = game_GameModeData_instance_;
        if ((*(_BYTE*)(v7 + 32) & 0xFE) != 0) {
          goto LABEL_14;
        }
      }
      else {
        v8 = game_GameModeData_instance_;
      }
      if (v8 == 0) {
      LABEL_16:
        (*(void (**)(__int64))(*(_QWORD*)v5 + 440LL))(v5);
        goto LABEL_17;
      }
      GameRoutine_828800(v8 + 40, v6, 2);
      v8 = game_GameModeData_instance_;
    LABEL_14:
      if (v8 != 0) {
        game_GameVariableTable_Find(*(_QWORD*)(v8 + 48), v6);
      }
      goto LABEL_16;
    }
  }

LABEL_17:
  game_menu_TutorialMenu_unknown_225d650_ = 1;
  game_menu_BasicMenu_Unknown16de4d0(a1);
  game_menu_TutorialMenu_unknown_225d650_ = 0;
  return 13;
}

bool game_menu_TutorialMenu_OnInit_lambda0_Invoke(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  int v5;
  unsigned __int64 v6;
  int v7;
  unsigned __int8* v8;
  unsigned __int8* v9;
  unsigned __int8* v10;
  __int64 v11;
  unsigned __int8* v12;
  int v13;
  int v14;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = **(__int64***)(*(_QWORD*)(*(_QWORD*)a2 + 88LL) + 40LL);
  if ((int)((*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + 88LL) + 40LL) +
                        8LL) -
             (_QWORD)v3) >>
            3) >= 1 &&
      (v4 = *v3) != 0 &&
      (unsigned int)(v5 = *(unsigned __int8*)(v4 + 32)) <= 7) {
    v6 = (0x700060504030201uLL >> (8 * (unsigned __int8)v5)) & 7;
  }
  else {
    LODWORD(v6) = 1;
  }
  v7 = *(unsigned __int8*)(v2 + 1104);
  if ((_DWORD)v6 == v7) {
    v8 = *(unsigned __int8**)(v2 + 1064);
    v9 = *(unsigned __int8**)(v2 + 1072);
    if (v8 == v9) {
      v9 = *(unsigned __int8**)(v2 + 1064);
    }
    else {
      v10 = *(unsigned __int8**)(v2 + 1064);
      v11 = (v9 - v8) & 3;
      if (v11 != 0) {
        v10 = *(unsigned __int8**)(v2 + 1064);
        while (*v10 != (_DWORD)v6) {
          ++v10;
          if (--v11 == 0) {
            goto LABEL_12;
          }
        }
      }
      else {
      LABEL_12:
        if ((unsigned __int64)(v9 - v8) < 4) {
          goto LABEL_25;
        }
        v10 += 3;
        while (1) {
          if (*(v10 - 3) == (_DWORD)v6) {
            LODWORD(v10) = (_DWORD)v10 - 3;
            goto LABEL_24;
          }
          if (*(v10 - 2) == (_DWORD)v6) {
            LODWORD(v10) = (_DWORD)v10 - 2;
            goto LABEL_24;
          }
          if (*(v10 - 1) == (_DWORD)v6) {
            break;
          }
          if (*v10 == (_DWORD)v6) {
            goto LABEL_24;
          }
          v12 = v10 + 1;
          v10 += 4;
          if (v12 == v9) {
            v10 = *(unsigned __int8**)(v2 + 1072);
            goto LABEL_24;
          }
        }
        LODWORD(v10) = (_DWORD)v10 - 1;
      }
    LABEL_24:
      LODWORD(v9) = (_DWORD)v10;
    }
  LABEL_25:
    v13 = *(_DWORD*)(v2 + 660);
    v14 = (_DWORD)v9 - (_DWORD)v8;
    if (v13 != v14) {
      *(_DWORD*)(v2 + 664) = v13;
      *(_DWORD*)(v2 + 660) = v14;
      game_menu_PageTab_Update(v2 + 656);
    }
  }
  return (_DWORD)v6 == v7;
}

__int64 game_menu_TutorialMenu_OnInit_lambda1_Invoke(__int64 a1, __int64 a2)
{
  __int64* v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  _BYTE* v8;
  _BYTE* v9;
  __int64 v10;
  _BYTE* v11;
  int v12;
  int v13;

  v2 = **(__int64***)(*(_QWORD*)(*(_QWORD*)a2 + 88LL) + 40LL);
  if ((int)((*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + 88LL) + 40LL) +
                        8LL) -
             (_QWORD)v2) >>
            3) >= 1 &&
      (v3 = *v2) != 0) {
    v4 = *(__int64**)(v3 + 24);
  }
  else {
    v4 = &GameData_21c6980;
  }
  if (*v4 != 0 && game_GameModeData_instance_ != 0) {
    v5 = *(_QWORD*)(a1 + 8);
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v4);
    if (result == 0) {
      return result;
    }
    if (*(_DWORD*)(result + 32) != 0) {
      v7 = *(_QWORD*)(v5 + 1064);
      v8 = *(_BYTE**)(v5 + 1072);
      if ((_BYTE*)v7 == v8) {
        v8 = *(_BYTE**)(v5 + 1064);
      }
      else {
        v9 = *(_BYTE**)(v5 + 1064);
        v10 = (unsigned __int64)&v8[-v7] & 3;
        if (v10 != 0) {
          v9 = *(_BYTE**)(v5 + 1064);
          while (*v9 != 0) {
            ++v9;
            if (--v10 == 0) {
              goto LABEL_14;
            }
          }
          goto LABEL_28;
        }
      LABEL_14:
        if ((unsigned __int64)&v8[-v7] >= 4) {
          v9 += 3;
          while (1) {
            if (*(v9 - 3) == 0) {
              LODWORD(v9) = (_DWORD)v9 - 3;
              goto LABEL_28;
            }
            if (*(v9 - 2) == 0) {
              LODWORD(v9) = (_DWORD)v9 - 2;
              goto LABEL_28;
            }
            if (*(v9 - 1) == 0) {
              break;
            }
            if (*v9 == 0) {
              goto LABEL_28;
            }
            v11 = v9 + 1;
            v9 += 4;
            if (v11 == v8) {
              v9 = *(_BYTE**)(v5 + 1072);
              goto LABEL_28;
            }
          }
          LODWORD(v9) = (_DWORD)v9 - 1;
        LABEL_28:
          LODWORD(v8) = (_DWORD)v9;
        }
      }
      v12 = *(_DWORD*)(v5 + 660);
      v13 = (_DWORD)v8 - v7;
      if (v12 != v13) {
        *(_DWORD*)(v5 + 664) = v12;
        *(_DWORD*)(v5 + 660) = v13;
        game_menu_PageTab_Update(v5 + 656);
      }
      return 1;
    }
  }
  return 0;
}

bool game_menu_TutorialMenu_SortAndFilter_lambda0_Invoke(__int64 a1,
                                                         __int64* a2)
{
  int v2;
  __int64 v3;
  _QWORD* v4;
  __int64* v5;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;

  v2 = *(unsigned __int8*)(a1 + 8);
  if (v2 == 1) {
    return true;
  }
  v3 = *a2;
  if (*(_BYTE*)(a1 + 8) != 0) {
    v8 = *(_QWORD*)(*(_QWORD*)(v3 + 88) + 40LL);
    v7 = *(__int64**)v8;
    if ((int)((*(_QWORD*)(v8 + 8) - *(_QWORD*)v8) >> 3) >= 1 &&
        (v9 = *v7) != 0 &&
        (unsigned int)(v10 = *(unsigned __int8*)(v9 + 32)) <= 7) {
      v11 = (0x700060504030201uLL >> (8 * (unsigned __int8)v10)) & 7;
    }
    else {
      LODWORD(v11) = 1;
    }
    return (_DWORD)v11 == v2;
  }
  else {
    v4 = **(_QWORD***)(*(_QWORD*)(v3 + 88) + 40LL);
    if ((int)((*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 88) + 40LL) + 8LL) -
               (_QWORD)v4) >>
              3) >= 1 &&
        (v4 = (_QWORD*)*v4) != nullptr) {
      v5 = (__int64*)v4[3];
    }
    else {
      v5 = &GameData_21c6980;
    }
    v12 = *v5;
    if (*v5 != 0) {
      LOBYTE(v4) = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v13 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), v5);
        LOBYTE(v4) = v13 != 0 && *(_DWORD*)(v13 + 32) != 0;
      }
    }
    return (v12 != 0) & (unsigned __int8)v4;
  }
}

#pragma GCC visibility pop
