#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 Alignment_56b600(void);
__int64 ControlCreator_13633c0(void);
__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1593d90(_QWORD, _QWORD);
__int64 GameRoutine_19fc5c0(_QWORD, _QWORD, float);
__int64 GameRoutine_763df0(_QWORD);
__int64 GameRoutine_871660(__int64, __int64);
__int64 Situation_763f30(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16dd9a0(_QWORD);
__int64 game_menu_BasicMenu_Unknown96(void);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212ce90[3];
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 MapSortieMenu_872680(_BYTE* a1);
__int64 MapSortieMenu_8728a0(__int64 a1);
__int64 MapSortieMenu_872a70(_QWORD* a1);
__int64 MapSortieMenu_Unknown143(__int64 a1, __int64* a2);
__int64 MapSortieMenu_Unknown112(__int64 a1);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_130dae0(_QWORD, _QWORD);
__int64 GameRoutine_156af20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16477d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a00ae0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_654050(_QWORD, _QWORD);
__int64 LayoutAccessor_1562b50(_QWORD, _QWORD);
__int64 MapSortieMenu_871860_alt1(_QWORD, _QWORD, _QWORD, _QWORD,
                                  _QWORD) __asm__("MapSortieMenu_871860");
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(_QWORD, _QWORD);
__int64 sprintf(_QWORD, const char*, ...);
extern _DWORD GameData_1b0b98c[3];
extern __int64 (*GameData_1fa5b00[])();
extern __int64 (*GameData_1fa5b80[])();
extern __int64 (*game_sound_PlayDecideSe_ptr[7])();
extern __int64 GameData_21ca310;
extern __int64 GameData_21eea38;
extern __int64 GameData_2240f10;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_gameui_MenuAnimator_instance_;
extern __int64* GameData_212d2b8;
void __attribute__((noreturn)) GameRoutine_874500(void);
__int64 game_map_MapSortieMenu_CreateBattleStartDialog(__int64 a1, __int64 a2);
__int64 MapSortieMenu_871860(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                             __int64 a5);
__int64 MapSortieMenu_871920(__int64 a1, __int64* a2);
__int64 MapSortieMenu_871d10(__int64 a1, __int64* a2);
__int64 MapSortieMenu_872fe0(__int64 a1);
__int64 game_map_MapSortieMenu_CreateBattleStartDialog_lambda1_Invoke();
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__int64 GameRoutine_1a006e0(__int64, __int64, __int64*, __int64*, float);
__int64 GameRoutine_60a020(__int64, __int64);
__int64 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1() __asm__(
    "std___1___shared_weak_count_lock");
char* LayoutAccessor_1562060(char* result, __int64, _BYTE*);
extern __int64 game_script_hub_g_frame_counter;
float GameRoutine_16df380(__int64);
char* MapSortieMenu_872770(__int64 a1);
__int64 MapSortieMenu_Unknown3(__int64 a1);

__int64 game_map_MapSortieMenu_CreateBattleStartDialog(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 (**v3)();
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD v10[4];
  _QWORD* v11;
  const char* v12;
  __int64 (*v13[4])();
  __int64 (**v14)();
  __int64 (*v15[4])();
  __int64 (**v16)();

  if (*(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556000LL) == 0) {
    return 0;
  }
  if (*(_QWORD*)(a2 + 32) == 0) {
    v15[0] = (__int64 (*)())GameData_1fa5b80;
    v16 = v15;
    v12 = "MID_Menu_StartBattle_Confirm";
    v13[0] = (__int64 (*)())GameData_1fa5b00;
    v14 = v13;
    v10[0] = GameData_1fa5b00;
    v11 = v10;
    v2 = MapSortieMenu_871860_alt1(a1, &v12, v15, v13, v10);
    if (v11 == v10) {
      v5 = 32;
    }
    else {
      if (v11 == nullptr) {
        goto LABEL_12;
      }
      v5 = 40;
    }
    (*(void (**)(__int64))(*v11 + v5))((__int64)v11);
  LABEL_12:
    v3 = v14;
    if (v14 != v13) {
      goto LABEL_4;
    }
  LABEL_13:
    v4 = 32;
    goto LABEL_14;
  }
  v10[0] = "MID_Menu_StartBattle_Confirm";
  v16 = v15;
  v14 = v13;
  v15[0] = (__int64 (*)())GameData_1fa5b00;
  v13[0] = (__int64 (*)())GameData_1fa5b00;
  v2 = MapSortieMenu_871860_alt1(a1, v10, a2, v15, v13);
  v3 = v14;
  if (v14 == v13) {
    goto LABEL_13;
  }
LABEL_4:
  if (v3 != nullptr) {
    v4 = 40;
  LABEL_14:
    (*(void (**)(__int64))((char*)*v3 + v4))((__int64)v3);
  }
  if (v16 == v15) {
    v6 = 32;
  }
  else {
    if (v16 == nullptr) {
      goto LABEL_20;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))((char*)*v16 + v6))((__int64)v16);
LABEL_20:
  v14 = v13;
  v16 = v15;
  v13[0] = (__int64 (*)())(GameData_212d2b8 + 2);
  v13[1] = game_sound_PlayDecideSe_ptr[0];
  v15[0] = (__int64 (*)())(GameData_212d2b8 + 2);
  v15[1] = game_sound_PlayDecideSe_ptr[0];
  GameRoutine_654050(v15, v2 + 1152);
  if (v16 == v15) {
    v7 = 32;
    goto LABEL_24;
  }
  if (v16 != nullptr) {
    v7 = 40;
  LABEL_24:
    (*(void (**)(__int64))((char*)*v16 + v7))((__int64)v16);
  }
  if (v14 == v13) {
    v8 = 32;
    goto LABEL_29;
  }
  if (v14 != nullptr) {
    v8 = 40;
  LABEL_29:
    (*(void (**)(__int64))((char*)*v14 + v8))((__int64)v14);
  }
  return v2;
}

__int64 MapSortieMenu_871860(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                             __int64 a5)
{
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;

  v8 = game_menu_Dialog__CreateBind_game_menu_Dialog(a1, a2);
  if (v8 != 0) {
    v9 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         192, 16, 0);
    GameRoutine_16477d0(v10, "MID_Sys_Yes", a3, a5);
    BasicMenuCursor_16e0c00(v8, v10);
    v11 = fw_memory_HeapManager_Allocate(*v9, 192, 16, 0);
    GameRoutine_16477d0(v11, "MID_Sys_No", a4, a5);
    BasicMenuCursor_16e0c00(v8, v11);
  }
  return v8;
}

__int64 MapSortieMenu_871920(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v5;
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  const char* v15;
  const char* v16;
  unsigned __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64* v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  _BYTE v46[32];

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 168LL))(a1);
  v5 = game_gameui_MenuAnimator_instance_;
  if ((unsigned int)(result - 9) > 1) {
    if (game_gameui_MenuAnimator_instance_ == 0) {
      return result;
    }
    v15 = "In";
    if ((LayoutAccessor_1562b50(a1 + 848, "In") & 1) != 0) {
      v16 = "In";
    }
    else {
      v16 = "Open";
    }
    result = LayoutAccessor_1562b50(a1 + 848, v16);
    if ((result & 1) != 0) {
      result = GameRoutine_156af20(v5, 7, 2, a1 + 848, 0, v16);
      if (result != -1) {
        v18 = (__int64*)a2[1];
        v17 = a2[2];
        if ((unsigned __int64)v18 >= v17) {
          v20 = *a2;
          v21 = (__int64)v18 - *a2;
          v22 = (v21 >> 3) + 1;
          if (v22 >> 61 != 0) {
            goto LABEL_64;
          }
          v23 = v17 - v20;
          if (v23 >> 2 > v22) {
            v22 = v23 >> 2;
          }
          if ((unsigned __int64)v23 >= 0x7FFFFFFFFFFFFFF8LL) {
            v24 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v24 = v22;
          }
          if (v24 != 0) {
            if (v24 >> 61 != 0) {
              goto LABEL_65;
            }
            v25 = result;
            v26 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v24, 16, 0);
            result = v25;
          }
          else {
            v26 = 0;
          }
          v31 = v26 + 8 * v24;
          v32 = v26 + v21 - 8 * (v21 >> 3);
          *(_QWORD*)(v26 + v21) = result;
          v19 = v26 + v21 + 8;
          result = memcpy(v32, v20, v21);
          *a2 = v32;
          a2[1] = v19;
          a2[2] = v31;
          if (v20 != 0) {
            v33 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v33 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v20);
          }
        }
        else {
          *v18 = result;
          v19 = (__int64)(v18 + 1);
        }
        a2[1] = v19;
      }
    }
    v34 = game_gameui_MenuAnimator_instance_;
    if (game_gameui_MenuAnimator_instance_ != 0) {
      if ((LayoutAccessor_1562b50(a1 + 952, "In") & 1) == 0) {
        v15 = "Open";
      }
      result = LayoutAccessor_1562b50(a1 + 952, v15);
      if ((result & 1) != 0) {
        result = GameRoutine_156af20(v34, 7, 2, a1 + 952, 0, v15);
        if (result != -1) {
          v7 = (__int64*)a2[1];
          v35 = a2[2];
          if ((unsigned __int64)v7 >= v35) {
            v8 = *a2;
            v36 = (__int64)v7 - *a2;
            v37 = (v36 >> 3) + 1;
            if (v37 >> 61 == 0) {
              v38 = v35 - v8;
              v39 = (__int64*)fw_memory_g_heap_manager_ptr;
              if (v38 >> 2 > v37) {
                v37 = v38 >> 2;
              }
              if ((unsigned __int64)v38 >= 0x7FFFFFFFFFFFFFF8LL) {
                v40 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v40 = v37;
              }
              if (v40 != 0) {
                if (v40 >> 61 != 0) {
                  goto LABEL_65;
                }
                v41 = result;
                v42 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v40, 16, 0);
                result = v41;
              }
              else {
                v42 = 0;
              }
              v43 = v42 + 8 * v40;
              v44 = v42 + v36 - 8 * (v36 >> 3);
              *(_QWORD*)(v42 + v36) = result;
              v29 = v42 + v36 + 8;
              result = memcpy(v44, v8, v36);
              *a2 = v44;
              a2[1] = v29;
              a2[2] = v43;
              if (v8 != 0) {
                v30 = *v39;
                goto LABEL_59;
              }
            LABEL_62:
              a2[1] = v29;
              return result;
            }
          LABEL_64:
            GameRoutine_874500();
          }
        LABEL_46:
          *v7 = result;
          v29 = (__int64)(v7 + 1);
          goto LABEL_62;
        }
      }
    }
  }
  else if (game_gameui_MenuAnimator_instance_ != 0) {
    sprintf(v46, "%s%s", "Alpha", "In");
    result = GameRoutine_156af20(v5, 4, 0, a1 + 848, 0, v46);
    if (result != -1) {
      v7 = (__int64*)a2[1];
      v6 = a2[2];
      if ((unsigned __int64)v7 >= v6) {
        v8 = *a2;
        v9 = (__int64)v7 - *a2;
        v10 = (v9 >> 3) + 1;
        if (v10 >> 61 == 0) {
          v11 = v6 - v8;
          if (v11 >> 2 > v10) {
            v10 = v11 >> 2;
          }
          if ((unsigned __int64)v11 >= 0x7FFFFFFFFFFFFFF8LL) {
            v12 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v12 = v10;
          }
          if (v12 == 0) {
            v14 = 0;
          LABEL_32:
            v27 = v14 + 8 * v12;
            v28 = v14 + v9 - 8 * (v9 >> 3);
            *(_QWORD*)(v14 + v9) = result;
            v29 = v14 + v9 + 8;
            result = memcpy(v28, v8, v9);
            *a2 = v28;
            a2[1] = v29;
            a2[2] = v27;
            if (v8 != 0) {
              v30 = fw_memory_g_heap_manager;
            LABEL_59:
              v45 = 128;
              if (*(_QWORD*)(v30 + 200) == 0) {
                v45 = 56;
              }
              result = nn_mem_StandardAllocator_Free(v30 + v45, v8);
              goto LABEL_62;
            }
            goto LABEL_62;
          }
          if (v12 >> 61 == 0) {
            v13 = result;
            v14 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
            result = v13;
            goto LABEL_32;
          }
        LABEL_65:
          GameRoutine_60a210(result);
        }
        goto LABEL_64;
      }
      goto LABEL_46;
    }
  }
  return result;
}

__int64 MapSortieMenu_871d10(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v5;
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  const char* v15;
  const char* v16;
  unsigned __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64* v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  _BYTE v46[32];

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 168LL))(a1);
  v5 = game_gameui_MenuAnimator_instance_;
  if ((unsigned int)(result - 9) > 1) {
    if (game_gameui_MenuAnimator_instance_ == 0) {
      return result;
    }
    v15 = "Out";
    if ((LayoutAccessor_1562b50(a1 + 848, "Out") & 1) != 0) {
      v16 = "Out";
    }
    else {
      v16 = "Close";
    }
    result = LayoutAccessor_1562b50(a1 + 848, v16);
    if ((result & 1) != 0) {
      result = GameRoutine_156af20(v5, 7, 2, a1 + 848, 0, v16);
      if (result != -1) {
        v18 = (__int64*)a2[1];
        v17 = a2[2];
        if ((unsigned __int64)v18 >= v17) {
          v20 = *a2;
          v21 = (__int64)v18 - *a2;
          v22 = (v21 >> 3) + 1;
          if (v22 >> 61 != 0) {
            goto LABEL_64;
          }
          v23 = v17 - v20;
          if (v23 >> 2 > v22) {
            v22 = v23 >> 2;
          }
          if ((unsigned __int64)v23 >= 0x7FFFFFFFFFFFFFF8LL) {
            v24 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v24 = v22;
          }
          if (v24 != 0) {
            if (v24 >> 61 != 0) {
              goto LABEL_65;
            }
            v25 = result;
            v26 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v24, 16, 0);
            result = v25;
          }
          else {
            v26 = 0;
          }
          v31 = v26 + 8 * v24;
          v32 = v26 + v21 - 8 * (v21 >> 3);
          *(_QWORD*)(v26 + v21) = result;
          v19 = v26 + v21 + 8;
          result = memcpy(v32, v20, v21);
          *a2 = v32;
          a2[1] = v19;
          a2[2] = v31;
          if (v20 != 0) {
            v33 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v33 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v20);
          }
        }
        else {
          *v18 = result;
          v19 = (__int64)(v18 + 1);
        }
        a2[1] = v19;
      }
    }
    v34 = game_gameui_MenuAnimator_instance_;
    if (game_gameui_MenuAnimator_instance_ != 0) {
      if ((LayoutAccessor_1562b50(a1 + 952, "Out") & 1) == 0) {
        v15 = "Close";
      }
      result = LayoutAccessor_1562b50(a1 + 952, v15);
      if ((result & 1) != 0) {
        result = GameRoutine_156af20(v34, 7, 2, a1 + 952, 0, v15);
        if (result != -1) {
          v7 = (__int64*)a2[1];
          v35 = a2[2];
          if ((unsigned __int64)v7 >= v35) {
            v8 = *a2;
            v36 = (__int64)v7 - *a2;
            v37 = (v36 >> 3) + 1;
            if (v37 >> 61 == 0) {
              v38 = v35 - v8;
              v39 = (__int64*)fw_memory_g_heap_manager_ptr;
              if (v38 >> 2 > v37) {
                v37 = v38 >> 2;
              }
              if ((unsigned __int64)v38 >= 0x7FFFFFFFFFFFFFF8LL) {
                v40 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v40 = v37;
              }
              if (v40 != 0) {
                if (v40 >> 61 != 0) {
                  goto LABEL_65;
                }
                v41 = result;
                v42 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v40, 16, 0);
                result = v41;
              }
              else {
                v42 = 0;
              }
              v43 = v42 + 8 * v40;
              v44 = v42 + v36 - 8 * (v36 >> 3);
              *(_QWORD*)(v42 + v36) = result;
              v29 = v42 + v36 + 8;
              result = memcpy(v44, v8, v36);
              *a2 = v44;
              a2[1] = v29;
              a2[2] = v43;
              if (v8 != 0) {
                v30 = *v39;
                goto LABEL_59;
              }
            LABEL_62:
              a2[1] = v29;
              return result;
            }
          LABEL_64:
            GameRoutine_874500();
          }
        LABEL_46:
          *v7 = result;
          v29 = (__int64)(v7 + 1);
          goto LABEL_62;
        }
      }
    }
  }
  else if (game_gameui_MenuAnimator_instance_ != 0) {
    sprintf(v46, "%s%s", "Alpha", "Out");
    result = GameRoutine_156af20(v5, 4, 1, a1 + 848, 0, v46);
    if (result != -1) {
      v7 = (__int64*)a2[1];
      v6 = a2[2];
      if ((unsigned __int64)v7 >= v6) {
        v8 = *a2;
        v9 = (__int64)v7 - *a2;
        v10 = (v9 >> 3) + 1;
        if (v10 >> 61 == 0) {
          v11 = v6 - v8;
          if (v11 >> 2 > v10) {
            v10 = v11 >> 2;
          }
          if ((unsigned __int64)v11 >= 0x7FFFFFFFFFFFFFF8LL) {
            v12 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v12 = v10;
          }
          if (v12 == 0) {
            v14 = 0;
          LABEL_32:
            v27 = v14 + 8 * v12;
            v28 = v14 + v9 - 8 * (v9 >> 3);
            *(_QWORD*)(v14 + v9) = result;
            v29 = v14 + v9 + 8;
            result = memcpy(v28, v8, v9);
            *a2 = v28;
            a2[1] = v29;
            a2[2] = v27;
            if (v8 != 0) {
              v30 = fw_memory_g_heap_manager;
            LABEL_59:
              v45 = 128;
              if (*(_QWORD*)(v30 + 200) == 0) {
                v45 = 56;
              }
              result = nn_mem_StandardAllocator_Free(v30 + v45, v8);
              goto LABEL_62;
            }
            goto LABEL_62;
          }
          if (v12 >> 61 == 0) {
            v13 = result;
            v14 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
            result = v13;
            goto LABEL_32;
          }
        LABEL_65:
          GameRoutine_60a210(result);
        }
        goto LABEL_64;
      }
      goto LABEL_46;
    }
  }
  return result;
}

__int64 MapSortieMenu_872680(_BYTE* a1)
{
  __int64 v2;
  int v3;
  const char* v4;
  _QWORD v6[2];
  char v7;
  int v8;
  int v9;
  char v10;
  __int64 v11;

  if ((a1[1296] & 1) != 0) {
    GameRoutine_1562680(a1 + 848, "Sortie_HintOn", 1.0);
    v2 = GameRoutine_155fbe0(a1 + 848, "L_KeyHelp");
    v3 = (*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 192LL))(a1);
    v4 = "MID_KeyHelp_BattleRule";
  }
  else {
    GameRoutine_1562680(a1 + 848, "Sortie_RuleOn", 1.0);
    v2 = GameRoutine_155fbe0(a1 + 848, "L_KeyHelp");
    v3 = (*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 192LL))(a1);
    v4 = "MID_KeyHelp_BattleHint";
  }
  v6[0] = &GameData_1a9f09e;
  v6[1] = v4;
  v10 = 0;
  v11 = 0;
  v7 = 1;
  v8 = 6;
  v9 = v3;
  return GameRoutine_1593d90(v2, v6);
}

char* MapSortieMenu_872770(__int64 a1)
{
  const char* v2;
  __int64 v3;
  int v4;
  unsigned __int64 v5;
  char* v6;
  char* v7;
  char* result;
  __int64 v9;
  struct {
    __int16 v10;
    char gap10_[6];
    __int64 v11;
    char* v12;
  } v10_;

  v10_.v10 = 0;
  if (game_GameModeData_instance_ != 0) {
    if ((*(_DWORD*)(game_GameModeData_instance_ + 92) & 0x102) == 2) {
      v2 = "MID_BattleTitle_Encount";
    LABEL_6:
      GameRoutine_60a020((__int64)&v10_.v10, (__int64)v2);
      goto LABEL_7;
    }
    v3 = *(_QWORD*)(game_GameModeData_instance_ + 16);
    if (v3 != 0) {
      v2 = *(const char**)(v3 + 80);
      if (v2 != nullptr) {
        goto LABEL_6;
      }
    }
  }
LABEL_7:
  v4 = v10_.v10 & 1;
  v5 = (unsigned __int64)(unsigned __int8)v10_.v10 >> 1;
  if (v4 != 0) {
    v5 = v10_.v11;
  }
  if (v5 == 0) {
    if (v4 != 0) {
      v10_.v11 = 22;
      v6 = v10_.v12;
    }
    else {
      LOBYTE(v10_.v10) = 44;
      v6 = (char*)&v10_.v10 + 1;
    }
    strcpy(v6, "MID_Sys_ValueEmptyLong");
    v4 = v10_.v10 & 1;
  }
  if (v4 != 0) {
    v7 = v10_.v12;
  }
  else {
    v7 = (char*)&v10_.v10 + 1;
  }
  result =
      LayoutAccessor_1562060((char*)(a1 + 848), (__int64)"T_TitleBattle", v7);
  if ((v10_.v10 & 1) != 0 && v10_.v12 != nullptr) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    return (char*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v10_.v12);
  }
  return result;
}

__int64 MapSortieMenu_8728a0(__int64 a1)
{
  __int64* v2;
  __int64* v3;
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
  __int64 v14;
  __int64 v15;
  __int64 result;
  __int64 v17;

  v2 = (__int64*)(a1 + 848);
  v3 = GameData_212ce90[0];
  v4 = GameRoutine_763df0(*GameData_212ce90[0]);
  if (v4 != 0) {
    v5 = v4;
    v6 = ui_LayoutAccessor_FindTextBox(v2, "T_Win");
    if (v6 != 0) {
      GameRoutine_156c5d0(v6, v5, 0);
    }
  }
  if (ui_LayoutAccessor_FindAlignment(v2, "A_Win") != 0) {
    Alignment_56b600();
    v7 = *(_QWORD*)(a1 + 856);
    if (v7 != 0) {
      v8 = std___1___shared_weak_count_lock(v7);
      if (v8 != 0) {
        v9 = v8;
        if (*v2 != 0) {
          ControlCreator_13633c0();
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          std___1___shared_weak_count___release_weak(v9);
        }
      }
    }
  }
  v10 = Situation_763f30(*v3);
  if (v10 != 0) {
    v11 = v10;
    v12 = ui_LayoutAccessor_FindTextBox(v2, "T_Lose");
    if (v12 != 0) {
      GameRoutine_156c5d0(v12, v11, 0);
    }
  }
  if (ui_LayoutAccessor_FindAlignment(v2, "A_Lose") != 0) {
    Alignment_56b600();
    v13 = *(_QWORD*)(a1 + 856);
    if (v13 != 0) {
      v14 = std___1___shared_weak_count_lock(v13);
      if (v14 != 0) {
        v15 = v14;
        if (*v2 != 0) {
          ControlCreator_13633c0();
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
          std___1___shared_weak_count___release_weak(v15);
        }
      }
    }
  }
  result = ui_LayoutAccessor_FindAlignment(v2, "A_Rule");
  if (result != 0) {
    Alignment_56b600();
    result = *(_QWORD*)(a1 + 856);
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      if (result != 0) {
        v17 = result;
        result = *v2;
        if (*v2 != 0) {
          result = ControlCreator_13633c0();
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
          return std___1___shared_weak_count___release_weak(v17);
        }
      }
    }
  }
  return result;
}

__int64 MapSortieMenu_872a70(_QWORD* a1)
{
  _QWORD* v2;
  __int64* v3;
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
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 result;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;

  game_menu_BasicMenu_Unknown96();
  if ((*(unsigned int (**)(_QWORD*))(*a1 + 168LL))(a1)-8 <= 0xFFFFFFF9) {
    (*(void (**)(_QWORD*))(a1[132] + 96LL))(a1 + 132);
  }
  v2 = a1 + 106;
  v3 = GameData_212ce90[0];
  v4 = GameRoutine_763df0(*GameData_212ce90[0]);
  if (v4 != 0) {
    v5 = v4;
    v6 = ui_LayoutAccessor_FindTextBox(a1 + 106, "T_Win");
    if (v6 != 0) {
      GameRoutine_156c5d0(v6, v5, 0);
    }
  }
  if (ui_LayoutAccessor_FindAlignment(a1 + 106, "A_Win") != 0) {
    Alignment_56b600();
    v7 = a1[107];
    if (v7 != 0) {
      v8 = std___1___shared_weak_count_lock(v7);
      if (v8 != 0) {
        v9 = v8;
        if (*v2 != 0) {
          ControlCreator_13633c0();
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          std___1___shared_weak_count___release_weak(v9);
        }
      }
    }
  }
  v10 = Situation_763f30(*v3);
  if (v10 != 0) {
    v11 = v10;
    v12 = ui_LayoutAccessor_FindTextBox(a1 + 106, "T_Lose");
    if (v12 != 0) {
      GameRoutine_156c5d0(v12, v11, 0);
    }
  }
  if (ui_LayoutAccessor_FindAlignment(a1 + 106, "A_Lose") != 0) {
    Alignment_56b600();
    v13 = a1[107];
    if (v13 != 0) {
      v14 = std___1___shared_weak_count_lock(v13);
      if (v14 != 0) {
        v15 = v14;
        if (*v2 != 0) {
          ControlCreator_13633c0();
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
          std___1___shared_weak_count___release_weak(v15);
        }
      }
    }
  }
  if (ui_LayoutAccessor_FindAlignment(a1 + 106, "A_Rule") != 0) {
    Alignment_56b600();
    v16 = a1[107];
    if (v16 != 0) {
      v17 = std___1___shared_weak_count_lock(v16);
      if (v17 != 0) {
        v18 = v17;
        if (*v2 != 0) {
          ControlCreator_13633c0();
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
          std___1___shared_weak_count___release_weak(v18);
        }
      }
    }
  }
  game_menu_BasicMenu_Unknown16dd9a0(a1);
  result = (*(__int64 (**)(_QWORD*))(*a1 + 168LL))(a1);
  if ((unsigned int)result > 0xC || ((1 << result) & 0x1D00) == 0) {
    *((_DWORD*)a1 + 325) = 0;
    if (game_GameModeData_instance_ != 0) {
      v20 = *(_QWORD*)(game_GameModeData_instance_ + 16);
      if (v20 != 0) {
        GameRoutine_1560070(&v22, a1 + 106, "L_Minimap");
        LOWORD(v21) = *(_WORD*)(v20 + 134);
        GameRoutine_19fc5c0(a1 + 134, &v22, (float)v21);
        result = v23;
        if (v23 != 0) {
          return std___1___shared_weak_count___release_weak(v23);
        }
      }
    }
  }
  return result;
}

__int64 MapSortieMenu_Unknown3(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  float v4;
  bool v5;
  float v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  struct {
    __int64 v11;
    __int64 v12;
  } v11_;

  LayoutAccessor_1560070((void*)(&v11_.v11), (__int64*)(a1 + 848),
                         (__int64)"L_Minimap");
  if (v11_.v12 == 0) {
    goto LABEL_21;
  }
  v2 = std___1___shared_weak_count_lock_alt1();
  if (v2 != 0) {
    v3 = v11_.v11;
  }
  else {
    v3 = 0;
  }
  if (v11_.v12 != 0) {
    std___1___shared_weak_count___release_weak_alt1();
  }
  if (v3 != 0) {
    if (v2 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                memory_order_relaxed);
    }
    if (*(_DWORD*)(a1 + 1300) != 2) {
      goto LABEL_16;
    }
    v4 =
        *(float*)(game_script_hub_g_frame_counter + 104) + *(float*)(a1 + 1272);
    v5 = v4 < 0x1.e000000000000p+4f;
    if (v4 >= 0x1.e000000000000p+4f) {
      v4 = 0x0.0p+0f;
    }
    *(float*)(a1 + 1272) = v4;
    if (v5) {
    LABEL_16:
      if (v2 == 0) {
        goto LABEL_21;
      }
    }
    else {
      v11_.v11 = v3;
      v11_.v12 = v2;
      if (v2 == 0) {
        GameRoutine_1a006e0(a1 + 1072, (__int64)&v11_.v11,
                            (__int64*)(a1 + 1248), (__int64*)(a1 + 1224),
                            *(float*)(a1 + 1280));
        goto LABEL_21;
      }
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_1a006e0(a1 + 1072, (__int64)&v11_.v11, (__int64*)(a1 + 1248),
                          (__int64*)(a1 + 1224), *(float*)(a1 + 1280));
      std___1___shared_weak_count___release_weak_alt1();
    }
    std___1___shared_weak_count___release_weak_alt1();
  }
  else if (v2 == 0) {
    goto LABEL_21;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak_alt1();
  }
LABEL_21:
  v6 = GameRoutine_16df380(a1);
  (*(void (**)(__int64, float))(*(_QWORD*)a1 + 712LL))(a1, v6);
  v7 = *(_QWORD**)(a1 + 232);
  v8 = *(_QWORD**)(a1 + 240);
  while (v7 != v8) {
    v9 = *v7;
    if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v7 + 48LL))(*v7) & 1) != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 144LL))(v9);
    }
    ++v7;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 720LL))(a1);
}

__int64 MapSortieMenu_872fe0(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = *(unsigned int*)(a1 + 1300);
  if ((unsigned int)v1 <= 2) {
    *(_DWORD*)(a1 + 1300) = GameData_1b0b98c[v1];
  }
  GameRoutine_1560070(&v8, a1 + 848, "L_Minimap");
  if (v9 != 0) {
    v3 = std___1___shared_weak_count_lock(v9);
    if (v3 != 0) {
      v4 = v8;
    }
    else {
      v4 = 0;
    }
    if (v9 != 0) {
      std___1___shared_weak_count___release_weak(v9);
    }
    if (v4 != 0) {
      v6 = v4;
      v7 = v3;
      if (v3 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                                  memory_order_relaxed);
      }
      GameRoutine_1a00ae0(a1 + 1072, &v6, *(unsigned int*)(a1 + 1300));
      if (v7 != 0) {
        std___1___shared_weak_count___release_weak(v7);
      }
    }
    if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
    }
  }
  return 13;
}

__int64 MapSortieMenu_Unknown143(__int64 a1, __int64* a2)
{
  __int64 result;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v4 = a2[1];
  v5 = a2[2];
  if (v4 >= v5) {
    v7 = *a2;
    v8 = v4 - *a2;
    v9 = 1 - 0x3333333333333333LL * (v8 >> 3);
    if (v9 > 0x666666666666666LL) {
      GameRoutine_874520(result);
    }
    v10 = fw_memory_g_heap_manager_ptr;
    v11 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v5 - v7) >> 3);
    if (2 * v11 > v9) {
      v9 = 2 * v11;
    }
    if (v11 >= 0x333333333333333LL) {
      v12 = 0x666666666666666LL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 > 0x666666666666666LL) {
        GameRoutine_60a210(result);
      }
      v13 = result;
      v14 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v12, 16, 0);
      LODWORD(result) = v13;
    }
    else {
      v14 = 0;
    }
    v15 = v14 + v8;
    *(_QWORD*)v15 = &GameData_1a9f09e;
    *(_QWORD*)(v15 + 8) = "MID_SysMenu_StartBattle";
    *(_QWORD*)(v15 + 32) = 0;
    *(_BYTE*)(v15 + 16) = 1;
    v16 = v14 + 40 * v12;
    v6 = v14 + v8 + 40;
    *(_DWORD*)(v15 + 20) = 11;
    *(_DWORD*)(v15 + 24) = result;
    *(_BYTE*)(v15 + 28) = 3;
    result = memcpy(v14, v7, v8);
    *a2 = v14;
    a2[1] = v6;
    a2[2] = v16;
    if (v7 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v17 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v17, v7);
    }
  }
  else {
    *(_QWORD*)(v4 + 32) = 0;
    *(_QWORD*)v4 = &GameData_1a9f09e;
    *(_QWORD*)(v4 + 8) = "MID_SysMenu_StartBattle";
    v6 = v4 + 40;
    *(_BYTE*)(v4 + 16) = 1;
    *(_DWORD*)(v4 + 20) = 11;
    *(_DWORD*)(v4 + 24) = result;
    *(_BYTE*)(v4 + 28) = 3;
  }
  a2[1] = v6;
  return result;
}

__int64 MapSortieMenu_Unknown112(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  _BYTE v4[32];
  _BYTE* v5;

  v5 = nullptr;
  v1 = GameRoutine_871660(a1, (__int64)v4);
  if (v5 == v4) {
    v2 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_6;
    }
    v2 = 40;
  }
  (*(void (**)(void))(*(_QWORD*)v5 + v2))();

LABEL_6:
  if (v1 != 0) {
    return 12;
  }
  else {
    return 1;
  }
}

__int64 game_map_MapSortieMenu_CreateBattleStartDialog_lambda1_Invoke()
{
  int v1;
  __int16 v2;
  char v3;
  __int64 v4;

  if (GameData_2240f10 != 0) {
    v4 = 0;
    v1 = 1;
    v2 = 13;
    v3 = 1;
    GameRoutine_130dae0(GameData_2240f10, &v1);
  }
  if (GameData_21eea38 != 0) {
    *(_DWORD*)(GameData_21eea38 + 152) = 4;
  }
  return 4;
}

#pragma GCC visibility pop
