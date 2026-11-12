#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1866b00(void);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16de4d0(_QWORD);
__int64 game_menu_PageTab_Move(_QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern _UNKNOWN GameData_1aac088;
extern _UNKNOWN GameData_1ab8d4c;
extern __int64 (*GameData_20a4a80[])();
extern __int64 (*GameData_20a4b10[])();
extern __int64 (*game_facility_anonymous_ShopMenuItem_Trade_vtable[])();
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char* GameData_20a4b80[];
extern char* GameData_20a4bb8[];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void* ProcTradeItemSelectMenu_Unknown67(__int64 a1);
__int64 ProcTradeItemSelectMenu_Unknown85_alt1(__int64 a1) __asm__(
    "ProcTradeItemSelectMenu_Unknown85");
__int64 ProcTradeItemSelectMenu_Unknown148_alt1(
    _QWORD* a1, __int64 a2,
    char a3) __asm__("ProcTradeItemSelectMenu_Unknown148");
_QWORD* BasicMenuCursor_16e0c00(_QWORD* result, __int64);
__int64 GameRoutine_1842ee0(_QWORD);
__int64 GameRoutine_1843070(_QWORD, _QWORD);
__int64 GameRoutine_1866680(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_19ef8e0(_QWORD, _QWORD);
__int64 GameRoutine_8a1dc0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
extern __int64 (*GameData_20a4800[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c878[6];
__int64 game_facility_anonymous_ProcTradeItemSelectMenu_OnInit_closure_Invoke(
    __int64 a1, __int64* a2, int* a3);
_QWORD*
game_facility_anonymous_ProcTradeItemSelectMenu_AddItemList_closure_Invoke(
    __int64 a1, __int64 a2);
bool game_facility_anonymous_ProcTradeItemSelectMenu_SortAndFilter_closure_Invoke_17001a0(
    __int64 a1, _QWORD* a2);
__int64
game_facility_anonymous_ProcTradeItemSelectMenu_SortAndFilter_closure_Invoke_1700340_alt1(
    int a1, __int64* a2,
    __int64* a3) __asm__("game_facility_anonymous_ProcTradeItemSelectMenu_"
                         "SortAndFilter_closure_Invoke_1700340");
bool game_facility_anonymous_ProcTradeItemSelectMenu_SortAndFilter_closure0_Invoke(
    __int64 a1, _QWORD* a2);
__int64 game_facility_anonymous_ProcTradeItemSelectMenu_MoveToLR_closure_Invoke(
    __int64 a1, __int64 a2);
__int64
game_facility_anonymous_ProcTradeItemSelectMenu_MoveToLR_closure0_Invoke(
    __int64 a1, __int64 a2);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD,
                                                       _QWORD);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 Alignment_56b600(_QWORD);
__int64 BasicMenu_16e1f40(__int64 result, __int64, __int64);
__int64 ControlCreator_13633c0(_QWORD);
__int64 GameRoutine_187c5b0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8a29c0(__int64 result, __int64);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 LayoutAccessor_1572ac0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ProcTransitionAnim_156af20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                   _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_gameui_anonymous_15d2540(_QWORD, _QWORD, _QWORD);
__int64 game_menu_GameMenu_Unknown135(_QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 sprintf(_QWORD, const char*, ...);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
__n128 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_1b4d210;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_20a4880[])();
extern __int64 (*GameData_20a4900[])();
extern __int64 (*GameData_20a4980[])();
extern __int64 (*GameData_20a4a00[])();
extern __int64 (*game_facility_EmptyShopItemMenuItem_vtable[])();
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 game_gameui_MenuAnimator_instance_;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874500(void);
__n128 ProcTradeItemSelectMenu_Unknown88(__int64 a1, __n128 result);
__int64 game_facility_anonymous_ProcTradeItemSelectMenu_AddItemList(__int64 a1);
__int64
game_facility_anonymous_ProcTradeItemSelectMenu_SortAndFilter(__int64 a1);
__int64 ProcTradeItemSelectMenu_Unknown135(__int64 a1, __int64* a2);
__int64 GameRoutine_1866b00_alt1(__int64) __asm__("GameRoutine_1866b00");
__int64 GameRoutine_8a1dc0_alt1(__int64**) __asm__("GameRoutine_8a1dc0");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_menu_BasicMenu_Unknown16de4d0_alt1(__int64) __asm__(
    "game_menu_BasicMenu_Unknown16de4d0");
__int64 game_menu_PageTab_Move_alt1(int*, int,
                                    char) __asm__("game_menu_PageTab_Move");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
bool GameRoutine_19ef8e0_alt1(_QWORD*, _QWORD*) __asm__("GameRoutine_19ef8e0");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void ProcTradeItemSelectMenu_Unknown85(__int64 a1);
__int64 ProcTradeItemSelectMenu_Unknown148(__int64 a1, int a2, char a3);
bool game_facility_anonymous_ProcTradeItemSelectMenu_SortAndFilter_closure_Invoke_1700340(
    int a1, __int64* a2, __int64* a3);

void* ProcTradeItemSelectMenu_Unknown67(__int64 a1)
{
  __int64 v2;

  if ((*(_BYTE*)(a1 + 1152) & 1) != 0) {
    return nullptr;
  }
  v2 = *(_QWORD*)(a1 + 1064);
  if (v2 != 0 && *(_BYTE*)(*(_QWORD*)(v2 + 24) + 64LL) == 7) {
    return &GameData_1aac088;
  }
  else {
    return &GameData_1ab8d4c;
  }
}

void ProcTradeItemSelectMenu_Unknown85(__int64 a1)
{
  int v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  char** v6;
  char* v7;
  char* v8;
  __int64 v9;
  __int64 v10;

  v1 = *(_DWORD*)(a1 + 660);
  v2 = *(_QWORD*)(a1 + 672);
  if (v1 < (unsigned __int64)((*(_QWORD*)(a1 + 680) - v2) >> 2)) {
    v1 = *(_DWORD*)(v2 + 4LL * v1);
  }
  v4 = *(_QWORD*)(a1 + 1072);
  if (v4 == *(_QWORD*)(a1 + 1080) ||
      (LODWORD(v5) = *(_DWORD*)(v4 + 4LL * v1), (_DWORD)v5 == 0)) {
    v7 = "MID_Menu_All";
    goto LABEL_13;
  }
  if ((int)v5 > 7) {
    LOBYTE(v5) = v5 - 9;
    if ((unsigned __int8)v5 <= 4u) {
      v5 = (unsigned __int8)v5;
      v6 = GameData_20a4bb8;
      goto LABEL_11;
    }
  }
  else {
    LOBYTE(v5) = v5 - 1;
    if ((unsigned __int8)v5 <= 6u) {
      v5 = (unsigned __int8)v5;
      v6 = GameData_20a4b80;
    LABEL_11:
      v7 = v6[v5];
      goto LABEL_13;
    }
  }
  v7 = "MID_Menu_All";
LABEL_13:
  v8 = GameRoutine_a4dbe0_alt1(*msg_MessageManager_instance__ptr[0], v7, 0);
  if (v8 != nullptr) {
    v9 = (__int64)v8;
    v10 = ui_LayoutAccessor_FindTextBox_alt1((__int64*)(a1 + 848),
                                             (__int64)"T_Title");
    if (v10 != 0) {
      GameRoutine_156c5d0_alt1(v10, v9, 0);
    }
  }
}

__n128 ProcTradeItemSelectMenu_Unknown88(__int64 a1, __n128 result)
{
  __int64 v2;
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
  char v15;
  __int64** v16;
  __int64* v17;
  __int64* v18;
  __int64** v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 (*v26)(_QWORD);
  __int64 v27;
  _QWORD* v28;
  __int64* v29;
  __int64* v30;
  unsigned int v31;
  __int64* v32;
  __int64 i;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64* v42;
  unsigned int v43;
  int v44;
  unsigned int v45;
  int v46;
  unsigned int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  _QWORD* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  _QWORD* v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  char v63;
  char v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;

  v2 = *(_QWORD*)(a1 + 336);
  if (v2 != 0 && *(__int64 (***)())v2 ==
                     game_facility_anonymous_ShopMenuItem_Trade_vtable) {
    v4 = LayoutAccessor_155fbe0(a1 + 848, "L_InfoDetail");
    game_gameui_anonymous_15d2540(v4, v2 + 128, 0);
    v5 = game_util_Format("L_Item%02d", 0);
    v6 = LayoutAccessor_155fbe0(a1 + 848, "L_AccountMenu");
    ui_LayoutAccessor_SetPaneVisible(v6, v5, 0);
    v7 = game_util_Format("L_Item%02d", 1);
    v8 = LayoutAccessor_155fbe0(a1 + 848, "L_AccountMenu");
    ui_LayoutAccessor_SetPaneVisible(v8, v7, 0);
    v9 = game_util_Format("L_Item%02d", 2);
    v10 = LayoutAccessor_155fbe0(a1 + 848, "L_AccountMenu");
    ui_LayoutAccessor_SetPaneVisible(v10, v9, 0);
    v11 = game_util_Format("L_Item%02d", 3);
    v12 = LayoutAccessor_155fbe0(a1 + 848, "L_AccountMenu");
    ui_LayoutAccessor_SetPaneVisible(v12, v11, 0);
    v13 = game_util_Format("L_Item%02d", 4);
    v14 = LayoutAccessor_155fbe0(a1 + 848, "L_AccountMenu");
    ui_LayoutAccessor_SetPaneVisible(v14, v13, 0);
    v16 = *(__int64***)(v2 + 120);
    v17 = *v16;
    v18 = v16[1];
    if (*v16 == v18) {
      v19 = (__int64**)&GameData_1b4d210;
    }
    else {
      v19 = (__int64**)&GameData_1b4d210;
      while (2) {
        v20 = *v17;
        v21 = *(_QWORD**)(*v17 + 24);
        v22 = v21[6];
        v23 = v21[7];
        if (v23 == v22) {
        LABEL_20:
          v19 = (__int64**)(v21 + 15);
        }
        else {
          while (1) {
            if (*(_QWORD*)v22 != 0) {
              v24 = game_GameModeData_instance_;
              if (game_GameModeData_instance_ != 0) {
                v25 = game_GameVariableTable_Find(
                    *(_QWORD*)(game_GameModeData_instance_ + 48), v22);
                if (v25 != 0) {
                  v26 = *(__int64 (**)(_QWORD))(v25 + 72);
                  v27 = *(_QWORD*)(v25 + 80);
                  v28 = (_QWORD*)(v25 + (v27 >> 1));
                  if ((v27 & 1) != 0) {
                    v26 = *(__int64 (**)(_QWORD))((char*)v26 + *v28);
                  }
                  v15 = v26(v28);
                }
                else {
                  v15 = 1;
                }
              }
              if (*(_BYTE*)(v22 + 16) != ((v24 == 0) | v15 & 1)) {
                break;
              }
            }
            v22 += 24;
            if (v22 == v23) {
              v21 = *(_QWORD**)(v20 + 24);
              goto LABEL_20;
            }
          }
          if (++v17 != v18) {
            continue;
          }
        }
        break;
      }
    }
    v30 = *v19;
    v29 = v19[1];
    if (*v19 == v29) {
      v31 = 0;
    }
    else {
      v31 = 0;
      v32 = GameData_212c878[0];
      for (i = game_util_Format("L_Item%02d", 0);;
           i = game_util_Format("L_Item%02d", v31)) {
        v34 = i;
        v35 = LayoutAccessor_155fbe0(a1 + 848, "L_AccountMenu");
        v36 = LayoutAccessor_155fbe0(v35, v34);
        LayoutAccessor_155e830(v36, 1);
        v37 = *v30;
        v69 = 0;
        if (v37 != 0) {
          v38 = *v32;
          v39 = *(unsigned __int16*)(v37 + 16);
          HIDWORD(v69) = 1;
          v40 = *(_QWORD*)(v38 + 64);
          LOWORD(v69) = v39;
          if (*(_BYTE*)(*(_QWORD*)(v40 + 8 * v39) + 73LL) == 17) {
            nn_os_LockMutex(&game_g_random_mutex);
            v41 = v29;
            v42 = game_map_MapRandom_instance__ptr[0];
            v43 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                  (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
            v44 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((_UNKNOWN**)0x8LL));
            v45 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
            *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
            *((_DWORD*)v42 + 1) = v44;
            v46 = (v43 >> 8) ^ (v45 >> 19) ^ v43 ^ v45;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v42) = v45;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v42 + 4) = v46;
            nn_os_UnlockMutex(&game_g_random_mutex);
            v47 = v46 - 1000 * ((v46 & 0x7FFFFFFFu) / 0x3E8);
            v29 = v41;
            v32 = GameData_212c878[0];
            HIDWORD(v69) = HIDWORD(v69) & 0xFFFFC00F |
                           (16 * (((16 * v47 + 16) >> 4) & 0x3FF));
          }
        }
        GameRoutine_187c5b0(v36, &v69, *((unsigned int*)v30 + 2),
                            *(_QWORD*)(*(_QWORD*)(v2 + 8) + 336LL) == v2, 0);
        ++v31;
        v30 += 2;
        if (v30 == v29) {
          break;
        }
      }
    }
    v48 = LayoutAccessor_155fbe0(a1 + 848, "L_AccountMenu");
    if (v31 <= 3) {
      v49 = 3;
    }
    else {
      v49 = v31;
    }
    v50 = game_util_Format("Cost_%02d", v49);
    LayoutAccessor_1562cf0(v48, v50);
    v51 = (_QWORD*)LayoutAccessor_155fbe0(a1 + 848, "L_AccountMenu");
    v52 = v51[1];
    if (v52 != 0) {
      v53 = std___1___shared_weak_count_lock(v52);
      if (v53 != 0) {
        v54 = v53;
        if (*v51 != 0) {
          ControlCreator_13633c0(*v51);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v54 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v54 + 16LL))(v54);
          std___1___shared_weak_count___release_weak(v54);
        }
      }
    }
    v55 = (_QWORD*)LayoutAccessor_155fbe0(a1 + 848, "L_AccountMenu");
    v56 = ui_LayoutAccessor_FindAlignment(v55, "A_Cost");
    if (v56 != 0) {
      Alignment_56b600(v56);
      v57 = v55[1];
      if (v57 != 0) {
        v58 = std___1___shared_weak_count_lock(v57);
        if (v58 != 0) {
          v59 = v58;
          if (*v55 != 0) {
            ControlCreator_13633c0(*v55);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v59 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v59 + 16LL))(v59);
            std___1___shared_weak_count___release_weak(v59);
          }
        }
      }
    }
    LayoutAccessor_1560070((void*)(&v69), a1 + 848, "L_UnitInfo");
    if (v70 != 0) {
      v60 = std___1___shared_weak_count_lock(v70);
      v61 = v69;
      if (v70 != 0) {
        result = std___1___shared_weak_count___release_weak(v70);
      }
      if (v60 != 0 && v61 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v60 + 16), 1u,
                                  memory_order_relaxed);
        v62 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                         8LL * *(unsigned __int16*)(v2 + 128));
        v63 = *(_BYTE*)(v62 + 73);
        v64 = *(_BYTE*)(v62 + 72);
        v65 = std___1___shared_weak_count_lock(v60);
        if (v65 != 0) {
          v66 = v65;
          LayoutAccessor_1572ac0(v61, 0,
                                 (((0x10000000000LL << v64) | (1LL << v63)) &
                                  0xFFBFFFFFFFA39FFFLL) == 0,
                                 1);
          if (atomic_fetch_add((atomic_ullong* volatile)(v66 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v66 + 16LL))(v66);
            std___1___shared_weak_count___release_weak(v66);
          }
        }
        std___1___shared_weak_count___release_weak(v60);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v60 + 16), 1u,
                                  memory_order_relaxed);
        v67 = std___1___shared_weak_count_lock(v60);
        if (v67 != 0) {
          v68 = v67;
          LayoutAccessor_1562cf0(v61, "Simple00");
          if (atomic_fetch_add((atomic_ullong* volatile)(v68 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v68 + 16LL))(v68);
            std___1___shared_weak_count___release_weak(v68);
          }
        }
        result = std___1___shared_weak_count___release_weak(v60);
      }
      else if (v60 == 0) {
        return result;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v60 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v60 + 16LL))(
            v60, *(long double*)&result);
        return std___1___shared_weak_count___release_weak(v60);
      }
    }
  }
  return result;
}

__int64 game_facility_anonymous_ProcTradeItemSelectMenu_AddItemList(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;

  v2 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
  *(_QWORD*)(v2 + 72) = 0;
  *(_QWORD*)(v2 + 80) = 0;
  *(_QWORD*)(v2 + 16) = 0;
  *(_QWORD*)(v2 + 24) = 0;
  v3 = v2;
  *(_QWORD*)(v2 + 32) = 0;
  *(_QWORD*)(v2 + 40) = 0;
  *(_QWORD*)(v2 + 48) = 0;
  *(_QWORD*)(v2 + 56) = 0;
  *(_QWORD*)(v2 + 64) = 0;
  *(_WORD*)(v2 + 80) = 257;
  *(_BYTE*)(v2 + 82) = 1;
  *(_DWORD*)(v2 + 84) = 1;
  *(_QWORD*)(v2 + 88) = 0;
  *(_QWORD*)v2 = game_facility_EmptyShopItemMenuItem_vtable;
  *(_QWORD*)(v2 + 8) = 0;
  v4 = *(_QWORD*)(a1 + 344);
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = *(_QWORD*)(a1 + 1064);
  *(_QWORD*)(v3 + 8) = a1;
  *(_QWORD*)(a1 + 344) = v3;
  v8_.v8[0] = GameData_20a4880;
  v8_.v8[1] = a1;
  v8_.v9 = v8_.v8;
  GameRoutine_8a29c0(v5, (__int64)v8_.v8);
  result = (__int64)v8_.v9;
  if (v8_.v9 == v8_.v8) {
    v7 = 32;
  }
  else {
    if (v8_.v9 == nullptr) {
      return result;
    }
    v7 = 40;
  }
  return (*(__int64 (**)(__int64))(*v8_.v9 + v7))((__int64)v8_.v9);
}

__int64

game_facility_anonymous_ProcTradeItemSelectMenu_SortAndFilter(__int64 a1)
{
  int v3;
  __int64 v4;
  __int64 v5;
  int v6;
  char v7;
  __int16 v8;
  unsigned __int64 v9;
  __int16 v10;
  char v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  struct {
    _QWORD v15[4];
    _QWORD* v16;
  } v15_;
  struct {
    __int64 (**v17)();
    __int16 v18;
    char gap58_[22];
    __int64 (***v19)();
  } v17_;

  v3 = *(_DWORD*)(a1 + 660);
  v4 = *(_QWORD*)(a1 + 672);
  if (v3 < (unsigned __int64)((*(_QWORD*)(a1 + 680) - v4) >> 2)) {
    v3 = *(_DWORD*)(v4 + 4LL * v3);
  }
  v5 = *(_QWORD*)(a1 + 1072);
  if (v5 == *(_QWORD*)(a1 + 1080)) {
    LOBYTE(v9) = 32;
    v10 = 256;
  LABEL_16:
    v17_.v18 = v10 | (unsigned __int8)v9;
    v15_.v16 = v15_.v15;
    v17_.v19 = &v17_.v17;
    v17_.v17 = GameData_20a4a00;
    goto LABEL_17;
  }
  v6 = *(_DWORD*)(v5 + 4LL * v3);
  if (v6 > 7) {
    v11 = v6 - 9;
    if ((unsigned __int8)(v6 - 9) > 4u) {
      v10 = 0;
      LOBYTE(v9) = 32;
    }
    else {
      v10 = 0;
      v9 = 0x160E0D1413uLL >> (8 * (v11 & 0x1Fu));
    }
    goto LABEL_16;
  }
  v15_.v16 = v15_.v15;
  if ((unsigned __int8)v6 >= 7u) {
    v7 = 14;
  }
  else {
    v7 = 0xD040302010010uLL >> (8 * (unsigned __int8)v6);
  }
  if (v6 != 0) {
    v8 = 0;
  }
  else {
    v8 = 256;
  }
  v17_.v17 = GameData_20a4900;
  v17_.v18 = v8 & 0xFFE0 | v7 & 0x1F;
  v17_.v19 = &v17_.v17;
LABEL_17:
  v15_.v15[0] = GameData_20a4980;
  BasicMenu_16e1f40(a1, (__int64)&v17_.v17, (__int64)v15_.v15);
  if (v15_.v16 == v15_.v15) {
    v12 = 32;
  }
  else {
    if (v15_.v16 == nullptr) {
      goto LABEL_22;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v15_.v16 + v12))((__int64)v15_.v16);
LABEL_22:
  result = (__int64)v17_.v19;
  if (v17_.v19 == &v17_.v17) {
    v14 = 4;
  }
  else {
    if (v17_.v19 == nullptr) {
      return result;
    }
    v14 = 5;
  }
  return ((__int64 (*)(__int64))(*v17_.v19)[v14])((__int64)v17_.v19);
}

__int64 ProcTradeItemSelectMenu_Unknown135(__int64 a1, __int64* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _BYTE v34[208];

  v3 = a1;
  if (*(_BYTE*)(a1 + 1152) != 1) {
    return game_menu_GameMenu_Unknown135(a1, a2);
  }
  v4 = game_gameui_MenuAnimator_instance_;
  if (game_gameui_MenuAnimator_instance_ != 0) {
    sprintf(v34, "%s%s", "Alpha", "In");
    a1 = ProcTransitionAnim_156af20(v4, 4, 0, v3 + 848, "Left", v34);
    v5 = a1;
  }
  else {
    v5 = -1;
  }
  v8 = (__int64*)a2[1];
  v7 = a2[2];
  if ((unsigned __int64)v8 >= v7) {
    v10 = *a2;
    v11 = (__int64)v8 - *a2;
    v12 = (v11 >> 3) + 1;
    if (v12 >> 61 != 0) {
      goto LABEL_42;
    }
    v13 = v7 - v10;
    v14 = fw_memory_g_heap_manager_ptr;
    if (v13 >> 2 > v12) {
      v12 = v13 >> 2;
    }
    if ((unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFF8LL) {
      v15 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v15 = v12;
    }
    if (v15 != 0) {
      if (v15 >> 61 != 0) {
        goto LABEL_43;
      }
      v16 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v15, 16, 0);
    }
    else {
      v16 = 0;
    }
    v17 = v16 + 8 * v15;
    v18 = v16 + v11 - 8 * (v11 >> 3);
    *(_QWORD*)(v16 + v11) = v5;
    v9 = (__int64*)(v16 + v11 + 8);
    a1 = memcpy(v18, v10, v11);
    *a2 = v18;
    a2[1] = (__int64)v9;
    a2[2] = v17;
    if (v10 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v19 = 56;
      }
      a1 = nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v19);
    }
  }
  else {
    *v8 = v5;
    v9 = v8 + 1;
  }
  v20 = game_gameui_MenuAnimator_instance_;
  a2[1] = (__int64)v9;
  if (v20 != 0) {
    sprintf(v34, "%s%s", "Alpha", "In");
    a1 = ProcTransitionAnim_156af20(v20, 4, 0, v3 + 848, "Right", v34);
    v9 = (__int64*)a2[1];
    v21 = a1;
  }
  else {
    v21 = -1;
  }
  v22 = a2[2];
  if ((unsigned __int64)v9 >= v22) {
    v24 = *a2;
    v25 = (__int64)v9 - *a2;
    v26 = (v25 >> 3) + 1;
    if (v26 >> 61 == 0) {
      v27 = v22 - v24;
      if (v27 >> 2 > v26) {
        v26 = v27 >> 2;
      }
      if ((unsigned __int64)v27 >= 0x7FFFFFFFFFFFFFF8LL) {
        v28 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v28 = v26;
      }
      if (v28 == 0) {
        v29 = 0;
      LABEL_37:
        v30 = v29 + 8 * v28;
        v31 = v29 + v25 - 8 * (v25 >> 3);
        *(_QWORD*)(v29 + v25) = v21;
        v23 = v29 + v25 + 8;
        memcpy(v31, v24, v25);
        *a2 = v31;
        a2[1] = v23;
        a2[2] = v30;
        if (v24 != 0) {
          v32 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v32 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v32);
        }
        goto LABEL_41;
      }
      if (v28 >> 61 == 0) {
        v29 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v28, 16, 0);
        goto LABEL_37;
      }
    LABEL_43:
      GameRoutine_60a210(a1);
    }
  LABEL_42:
    GameRoutine_874500();
  }
  *v9 = v21;
  v23 = (__int64)(v9 + 1);
LABEL_41:
  a2[1] = v23;
  snd_Fade_Fade_10c830(v34, 0.0f);
  snd_play_ff2d0((void*)(&v33), "SE_SYS_Window_Open", "SE_SYS_Window_Open", v34,
                 0, 65537, 0, 0.0f, 1.0f);
  return snd_Fade_Destroy_Fade(v34);
}

__int64 ProcTradeItemSelectMenu_Unknown148(__int64 a1, int a2, char a3)
{
  __int64 (***v4)();
  int v5;
  char v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 i;
  __int64 (***v11)();
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 (***v18)();
  __int64 v19;
  struct {
    _QWORD v20[4];
    _QWORD* v21;
  } v20_;
  __int64 v22;

  v4 = *(__int64 (****)())(a1 + 336);
  if (v4 != nullptr &&
      *v4 == game_facility_anonymous_ShopMenuItem_Trade_vtable) {
    v5 = a2;
    v6 = a3;
    GameRoutine_1866b00_alt1((__int64)v4);
    a3 = v6;
    a2 = v5;
  }
  if ((game_menu_PageTab_Move_alt1((int*)(a1 + 656), a2, a3 & 1) & 1) == 0) {
    return 0;
  }
  v7 = v20_.v20;
  v20_.v20[0] = GameData_20a4a80;
  v9 = *(_QWORD*)(a1 + 256);
  v8 = *(_QWORD*)(a1 + 264);
  v20_.v21 = v20_.v20;
  if (v8 == v9) {
    goto LABEL_17;
  }
  for (i = 0; i < (v8 - v9) >> 3; ++i) {
    v11 = *(__int64 (****)())(v9 + 8 * i);
    if (v11 == nullptr ||
        *v11 != game_facility_anonymous_ShopMenuItem_Trade_vtable) {
      continue;
    }
    v22 = *(_QWORD*)(v9 + 8 * i);
    if (v20_.v21 == nullptr) {
    LABEL_34:
      GameRoutine_60a310_alt1();
    }
    if (((*(__int64 (**)(_QWORD*, __int64*))(*v20_.v21 + 48LL))(v20_.v21,
                                                                &v22) &
         1) != 0) {
      break;
    }
    v9 = *(_QWORD*)(a1 + 256);
    v8 = *(_QWORD*)(a1 + 264);
  }
  v7 = v20_.v21;
  if (v20_.v21 != v20_.v20) {
    if (v20_.v21 != nullptr) {
      v13 = 40;
      goto LABEL_18;
    }
    goto LABEL_19;
  }
LABEL_17:
  v13 = 32;
LABEL_18:
  (*(void (**)(_QWORD*))(*v7 + v13))(v7);
LABEL_19:
  game_menu_BasicMenu_Unknown16de4d0_alt1(a1);
  v14 = v20_.v20;
  v20_.v20[0] = GameData_20a4b10;
  v16 = *(_QWORD*)(a1 + 256);
  v15 = *(_QWORD*)(a1 + 264);
  v20_.v21 = v20_.v20;
  if (v15 == v16) {
    goto LABEL_30;
  }
  v17 = 0;
  while (2) {
    v18 = *(__int64 (****)())(v16 + 8 * v17);
    if (v18 == nullptr ||
        *v18 != game_facility_anonymous_ShopMenuItem_Trade_vtable) {
    LABEL_22:
      if (++v17 >= (unsigned __int64)((v15 - v16) >> 3)) {
        goto LABEL_27;
      }
      continue;
    }
    break;
  }
  v22 = *(_QWORD*)(v16 + 8 * v17);
  if (v20_.v21 == nullptr) {
    goto LABEL_34;
  }
  if (((*(__int64 (**)(_QWORD*, __int64*))(*v20_.v21 + 48LL))(v20_.v21, &v22) &
       1) == 0) {
    v16 = *(_QWORD*)(a1 + 256);
    v15 = *(_QWORD*)(a1 + 264);
    goto LABEL_22;
  }
LABEL_27:
  v14 = v20_.v21;
  if (v20_.v21 != v20_.v20) {
    if (v20_.v21 != nullptr) {
      v19 = 40;
      goto LABEL_31;
    }
    return 13;
  }
LABEL_30:
  v19 = 32;
LABEL_31:
  (*(void (**)(_QWORD*))(*v14 + v19))(v14);
  return 13;
}

__int64 game_facility_anonymous_ProcTradeItemSelectMenu_OnInit_closure_Invoke(
    __int64 a1, __int64* a2, int* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v8;

  v3 = *(_QWORD*)(a1 + 8);
  v4 = *a2;
  v5 = *(_QWORD*)(v3 + 1072);
  if (v5 == *(_QWORD*)(v3 + 1080)) {
    v8 = 0;
  }
  else {
    v6 = *(_DWORD*)(v5 + 4LL * *a3);
    if (v6 <= 7) {
      return GameRoutine_1842ee0(v4);
    }
    v8 = (unsigned int)(v6 - 8);
  }
  return GameRoutine_1843070(v4, v8);
}

_QWORD*

game_facility_anonymous_ProcTradeItemSelectMenu_AddItemList_closure_Invoke(
    __int64 a1, __int64 a2)
{
  __int64 v2;
  _QWORD* v4;

  v2 = *(_QWORD*)(a1 + 8);
  v4 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 144, 16, 0);
  GameRoutine_1866680(v4, 0, *(_QWORD*)(v2 + 1064), a2,
                      *(unsigned __int8*)(v2 + 1152));
  *v4 = game_facility_anonymous_ShopMenuItem_Trade_vtable;
  v4[12] = GameData_20a4800;
  return BasicMenuCursor_16e0c00((_QWORD*)v2, (__int64)v4);
}

bool game_facility_anonymous_ProcTradeItemSelectMenu_SortAndFilter_closure_Invoke_17001a0(
    __int64 a1, _QWORD* a2)
{
  __int64 v3;
  unsigned __int16* v5;
  __int64* v6;
  __int64 v7;
  int v8;

  if ((*(_BYTE*)(a1 + 9) & 1) != 0) {
    return true;
  }
  v3 = *a2;
  v5 = (unsigned __int16*)(*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2);
  v6 = GameData_212c878[0];
  v7 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v5);
  if ((((0x10000000000LL << *(_BYTE*)(v7 + 72)) | (1LL << *(_BYTE*)(v7 + 73))) &
       0xFFBFFFFFFFA39FFFLL) == 0) {
    return false;
  }
  v8 = *(unsigned __int8*)(a1 + 8);
  return v8 ==
         *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v6 + 64) +
                                        8LL * *(unsigned __int16*)(*(
                                                  __int64 (**)(__int64))(
                                                  *(_QWORD*)v3 + 560LL))(v3)) +
                             72LL);
}

bool game_facility_anonymous_ProcTradeItemSelectMenu_SortAndFilter_closure_Invoke_1700340(
    int a1, __int64* a2, __int64* a3)
{
  __int64** v3;
  __int64** v4;
  __int64* v5;
  __int64* v6;
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 (*v15)(_QWORD);
  __int64 v16;
  _QWORD* v17;
  _BOOL4 v18;
  __int64* v19;
  __int64* v20;
  int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 (*v29)(_QWORD);
  __int64 v30;
  _QWORD* v31;
  _BOOL4 v32;
  __int64 v34;
  __int64 v35;
  __int64** v36;
  struct {
    _QWORD v37[2];
    int v38;
    _BOOL4 v39;
    char v40;
  } v37_;
  struct {
    _QWORD v41[2];
    int v42;
    _BOOL4 v43;
    char v44;
  } v41_;

  v3 = *(__int64***)(*a2 + 120);
  v34 = *a3;
  v35 = *a2;
  v4 = *(__int64***)(*a3 + 120);
  v6 = *v3;
  v5 = v3[1];
  v36 = v4;
  if (v5 == *v3) {
    v18 = true;
  }
  else {
    v7 = 1;
    v8 = 0;
    do {
      v9 = *v6;
      v10 = *(_QWORD*)(*v6 + 24);
      v11 = *(_QWORD*)(v10 + 48);
      v12 = *(_QWORD*)(v10 + 56);
      if (v12 == v11) {
      LABEL_6:
        if (*(_BYTE*)(v9 + 107) != 0) {
          v8 += *(unsigned __int8*)(v9 + 107);
        }
        else {
          v7 = 0;
        }
      }
      else {
        while (1) {
          if (*(_QWORD*)v11 != 0) {
            v13 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v14 = game_GameVariableTable_Find_alt1(
                  *(_QWORD**)(game_GameModeData_instance_ + 48),
                  (unsigned __int64*)v11);
              if (v14 != 0) {
                v15 = *(__int64 (**)(_QWORD))(v14 + 72);
                v16 = *(_QWORD*)(v14 + 80);
                v17 = (_QWORD*)(v14 + (v16 >> 1));
                if ((v16 & 1) != 0) {
                  v15 = *(__int64 (**)(_QWORD))((char*)v15 + *v17);
                }
                LOBYTE(a1) = v15(v17);
              }
              else {
                LOBYTE(a1) = 1;
              }
            }
            if (*(_BYTE*)(v11 + 16) != ((v13 == 0) | a1 & 1)) {
              break;
            }
          }
          v11 += 24;
          if (v11 == v12) {
            goto LABEL_6;
          }
        }
      }
      ++v6;
    } while (v6 != v5);
    if (v8 * v7 < 1) {
      v18 = true;
    }
    else {
      a1 = GameRoutine_8a1dc0_alt1(v3);
      v18 = a1 > 0;
    }
    v4 = v36;
  }
  v20 = *v4;
  v19 = v4[1];
  if (v19 == *v4) {
    v32 = true;
  }
  else {
    v21 = 1;
    v22 = 0;
    do {
      v23 = *v20;
      v24 = *(_QWORD*)(*v20 + 24);
      v25 = *(_QWORD*)(v24 + 48);
      v26 = *(_QWORD*)(v24 + 56);
      if (v26 == v25) {
      LABEL_27:
        if (*(_BYTE*)(v23 + 107) != 0) {
          v22 += *(unsigned __int8*)(v23 + 107);
        }
        else {
          v21 = 0;
        }
      }
      else {
        while (1) {
          if (*(_QWORD*)v25 != 0) {
            v27 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v28 = game_GameVariableTable_Find_alt1(
                  *(_QWORD**)(game_GameModeData_instance_ + 48),
                  (unsigned __int64*)v25);
              if (v28 != 0) {
                v29 = *(__int64 (**)(_QWORD))(v28 + 72);
                v30 = *(_QWORD*)(v28 + 80);
                v31 = (_QWORD*)(v28 + (v30 >> 1));
                if ((v30 & 1) != 0) {
                  v29 = *(__int64 (**)(_QWORD))((char*)v29 + *v31);
                }
                LOBYTE(a1) = v29(v31);
              }
              else {
                LOBYTE(a1) = 1;
              }
            }
            if (*(_BYTE*)(v25 + 16) != ((v27 == 0) | a1 & 1)) {
              break;
            }
          }
          v25 += 24;
          if (v25 == v26) {
            goto LABEL_27;
          }
        }
      }
      ++v20;
    } while (v20 != v19);
    v32 = v22 * v21 < 1 || (int)GameRoutine_8a1dc0_alt1(v36) > 0;
  }
  v41_.v42 = 0;
  v41_.v43 = v18;
  v41_.v44 = 1;
  v37_.v38 = 0;
  v37_.v39 = v32;
  v37_.v40 = 1;
  v41_.v41[0] = v35 + 128;
  v41_.v41[1] = 0;
  v37_.v37[0] = v34 + 128;
  v37_.v37[1] = 0;
  return GameRoutine_19ef8e0_alt1(v41_.v41, v37_.v37);
}

bool game_facility_anonymous_ProcTradeItemSelectMenu_SortAndFilter_closure0_Invoke(
    __int64 a1, _QWORD* a2)
{
  __int64 v3;
  unsigned __int16* v5;
  __int64* v6;
  __int64 v7;
  int v8;

  if ((*(_BYTE*)(a1 + 9) & 1) != 0) {
    return true;
  }
  v3 = *a2;
  v5 = (unsigned __int16*)(*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2);
  v6 = GameData_212c878[0];
  v7 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v5);
  if ((((0x10000000000LL << *(_BYTE*)(v7 + 72)) | (1LL << *(_BYTE*)(v7 + 73))) &
       0xFFBFFFFFFFA39FFFLL) != 0) {
    return false;
  }
  v8 = *(unsigned __int8*)(a1 + 8);
  return v8 ==
         *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v6 + 64) +
                                        8LL * *(unsigned __int16*)(*(
                                                  __int64 (**)(__int64))(
                                                  *(_QWORD*)v3 + 560LL))(v3)) +
                             73LL);
}

__int64 game_facility_anonymous_ProcTradeItemSelectMenu_MoveToLR_closure_Invoke(
    __int64 a1, __int64 a2)
{
  *(_BYTE*)(*(_QWORD*)a2 + 137LL) = 1;
  return 0;
}

__int64

game_facility_anonymous_ProcTradeItemSelectMenu_MoveToLR_closure0_Invoke(
    __int64 a1, __int64 a2)
{
  *(_BYTE*)(*(_QWORD*)a2 + 137LL) = 0;
  return 0;
}

#pragma GCC visibility pop
