#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
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
  (*(void (**)(void))(*v15 + v23))();

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
  (*(void (**)(void))(*v26 + v32))();

LABEL_42:
  *(_BYTE*)(a1 + 1105) = 0;
  game_menu_BasicMenu_Unknown16de4d0(a1);

LABEL_43:
  GameRoutine_1560070(&v46, v12, "L_PageTab");
  v48[0] = GameData_206ffc8;
  v48[1] = a1;
  v49 = v48;
  game_menu_PageTab_SetupLabel(a1 + 656, &v46, v48, 3, 4, 5);
  if (v49 == v48) {
    v33 = 32;
  LABEL_47:
    (*(void (**)(void))(*v49 + v33))();
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

#pragma GCC visibility pop
