#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_1567590(_QWORD, _QWORD);
__int64 GameRoutine_1572ac0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1575c70(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15d2000(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15d2280(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15d2540(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16e1f40(_QWORD, _QWORD);
__int64 GameRoutine_1873720(__int64, __int64, char);
__int64 GameRoutine_1873c90(_BYTE*);
__int64 GameRoutine_1873d80(_QWORD*);
__int64 GameRoutine_1873eb0(__int64);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 game_menu_BasicMenu_Unknown16defa0(_QWORD);
extern __int64 (*GameData_20f83d8[])();
extern __int64 (*game_facility_anonymous_BlacksmithMenuItem_Refine_vtable[])();
extern __int64 GameData_20f9358;
extern __int64 game_g_game_setting;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212e008[9];
extern __int64* game_g_empty_item_ptr;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 ProcItemSelectMenu_Unknown84_1875fe0(__int64 a1);
__int64 ProcItemSelectMenu_Unknown85(__int64 a1);
__int64 ProcItemSelectMenu_Unknown129(__int64 a1);
__int64 ProcItemSelectMenu_Unknown157_18769a0(__int64 a1, __int16* a2);
__int64 ProcItemSelectMenu_Unknown84_1878db0(_BYTE* a1);
__int64 ProcItemSelectMenu_Unknown88(__int64* a1);
__int64 ProcItemSelectMenu_Unknown154_1879760(__int64 a1, __int64 a2);
__int64 ProcItemSelectMenu_Unknown155_18797a0(__int64 a1, int a2);
__int64 ProcItemSelectMenu_Unknown157_18797c0(__int64 a1, __int16* a2);
__int64 ProcItemSelectMenu_Unknown84_187a6d0(_BYTE* a1);
__int64 ProcItemSelectMenu_Unknown154_187b4c0(__int64 a1, __int64 a2);
__int64 ProcItemSelectMenu_Unknown155_187b500(__int64 a1, int a2);
__int64 ProcItemSelectMenu_Unknown157_187b520(__int64 a1, __int16* a2);
__int64 ItemShopSelectMenu_1874560(_QWORD, _QWORD, _QWORD);
__int64 ProcItemSelectMenu_Unknown10_1876a80(__int64 a1, __int64 a2);
__int64 ProcItemSelectMenu_Unknown10_18798a0(__int64 a1, __int64 a2);
__int64 ProcItemSelectMenu_Unknown10_187b600(__int64 a1, __int64 a2);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_20fa208[])();
extern __int64 (*game_facility_anonymous_BlacksmithMenuItem_Item_vtable[])();
extern __int64 (*game_facility_anonymous_BlacksmithMenuItem_Repair_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_TransporterConst_List_instance__ptr[6];
__int64
game_facility_anonymous_ProcItemSelectMenu_AddItemList_closure_Invoke_1879b60(
    __int64 a1, int* a2);
__int64
game_facility_anonymous_ProcItemSelectMenu_AddItemList_closure_Invoke_187c290(
    __int64 a1, int* a2);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 Alignment_56b600(void);
__int64 ControlCreator_13633c0(void);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_157cff0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_187c5b0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9db9e0(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ItemShopSelectMenu_1873d80(_QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 Manager_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 Pane_58f8a0(_QWORD);
__int64 ProcTransitionAnim_156af20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                   _QWORD);
__int64 game_gameui_anonymous_15d2000(_QWORD, _QWORD, _QWORD);
__int64 game_gameui_anonymous_15d2540(_QWORD, _QWORD, _QWORD);
__int64 game_menu_GameMenu_Unknown135(_QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 sprintf(_QWORD, const char*, ...);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212da30;
extern _UNKNOWN game_g_random_mutex;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 game_GameModeData_instance_;
extern __int64 game_gameui_MenuAnimator_instance_;
extern __int64 ui_Manager_instance_;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874500(void);
__int64 ProcItemSelectMenu_1877920(__int64* a1, __int64* a2, unsigned int a3);
__int64 ProcItemSelectMenu_Unknown135(__int64 result, __int64* a2);
__int64 ProcItemSelectMenu_Unknown88_187a9f0(__int64* a1);

__int64 ProcItemSelectMenu_Unknown155_1874a60(__int64 a1, unsigned int a2)
{
  return a2;
}

__int64 ProcItemSelectMenu_Unknown84_1875fe0(__int64 a1)
{
  __int64 (****v2)();
  __int64 (****v3)();
  __int64 result;
  __int64 (***v5)();
  __int64 v6;
  __int64 v7;
  int v8;
  _QWORD v9[4];
  _QWORD* v10;
  __int64 (***v11)();

  GameRoutine_1873c90((_BYTE*)a1);
  v2 = *(__int64 (*****)())(a1 + 232);
  v3 = *(__int64 (*****)())(a1 + 240);
  result = (__int64)v9;
  *(_BYTE*)(a1 + 1080) = 0;
  v9[0] = GameData_20f83d8;
  v10 = v9;
  if (v2 == v3) {
    v5 = nullptr;
  LABEL_14:
    v6 = 32;
    goto LABEL_15;
  }
  while (1) {
    v5 = *v2;
    if (*v2 != nullptr &&
        *v5 == game_facility_anonymous_BlacksmithMenuItem_Refine_vtable) {
      v11 = *v2;
      if (v10 == nullptr) {
        GameRoutine_60a310(0);
      }
      if (((*(__int64 (**)(_QWORD*, __int64 (****)()))(*v10 + 48LL))(v10,
                                                                     &v11) &
           1) != 0) {
        break;
      }
    }
    if (++v2 == v3) {
      v5 = nullptr;
      break;
    }
  }
  result = (__int64)v10;
  if (v10 == v9) {
    goto LABEL_14;
  }
  if (v10 != nullptr) {
    v6 = 40;
  LABEL_15:
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + v6))(result);
  }
  if (v5 != nullptr) {
    v7 = *(_QWORD*)(a1 + 336);
    if (v7 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 168LL))(v7);
    }
    *(_QWORD*)(a1 + 336) = v5;
    _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1, 1, 0, 0);
    result = *(_QWORD*)(a1 + 336);
    if (result != 0) {
      (*(void (**)(__int64))(*(_QWORD*)result + 160LL))(result);
      game_IsVibrationEnabled(game_g_game_setting + 712);
      result = *(_QWORD*)(a1 + 336);
      v8 = 4;
      if (result != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 120LL))(result);
        if ((result & 1) != 0) {
          v8 = 4;
        }
        else {
          v8 = 0;
        }
      }
    }
    else {
      v8 = 4;
    }
    *(_DWORD*)(a1 + 356) = *(_DWORD*)(a1 + 356) & 0xFFFFFFFB | v8;
  }
  return result;
}

__int64 ProcItemSelectMenu_Unknown85(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;

  GameRoutine_1873eb0(a1);
  if (*(_QWORD*)(a1 + 1064) != 0) {
    GameRoutine_1562680(a1 + 848, "UnitInfoCost_On", 1.0);
    v2 = GameRoutine_155fbe0(a1 + 848, "L_UnitInfo");
    GameRoutine_1572ac0(v2, *(_QWORD*)(a1 + 1064), 0, 0);
    v3 = GameRoutine_155fbe0(a1 + 848, "L_UnitInfo");
    GameRoutine_1562cf0(v3, "Info00");
    v4 = GameRoutine_155fbe0(a1 + 848, "L_MasteryInfo");
    return GameRoutine_1575c70(v4, *(_QWORD*)(a1 + 1064), 0, 0, 0, 0);
  }
  else {
    GameRoutine_1562680(a1 + 848, "StockCost_On", 1.0);
    v6 = GameRoutine_155fbe0(a1 + 848, "L_UnitInfo");
    GameRoutine_1572ac0(v6, 0, 0, 0);
    v7 = GameRoutine_155fbe0(a1 + 848, "L_UnitInfo");
    return GameRoutine_1562cf0(v7, "Simple00");
  }
}

__int64 ProcItemSelectMenu_Unknown129(__int64 a1)
{
  __int64 result;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _BYTE v5[32];
  _BYTE* v6;

  v6 = nullptr;
  v4 = 0;
  GameRoutine_16e1f40(a1, v5);
  if (&v3 == nullptr) {
    (*(void (**)(void))(*(_QWORD*)v4 + 32LL))();
  }
  result = (__int64)v6;
  if (v6 == v5) {
    v2 = 32;
  }
  else {
    if (v6 == nullptr) {
      return result;
    }
    v2 = 40;
  }
  return (*(__int64 (**)(void))(*(_QWORD*)v6 + v2))();
}

__int64 ProcItemSelectMenu_Unknown157_18769a0(__int64 a1, __int16* a2)
{
  __int16 v2;
  __int64 v5;
  __int64 v6;

  v2 = *a2;
  *(_BYTE*)(a1 + 1074) = *((_BYTE*)a2 + 2);
  *(_WORD*)(a1 + 1072) = v2;
  *(_BYTE*)(a1 + 1075) = *((_BYTE*)a2 + 3);
  *(_DWORD*)(a1 + 1076) = *((_DWORD*)a2 + 1);
  v5 = GameRoutine_155fbe0(a1 + 848, "L_AfterInfoDetail");
  if (*(_BYTE*)(a1 + 1080) != 0) {
    v6 = *(_QWORD*)(a1 + 1064);
  }
  else {
    v6 = 0;
  }
  return GameRoutine_15d2280(v5, a2, a1 + 1108, v6);
}

__int64 ProcItemSelectMenu_Unknown10_1876a80(__int64 a1, __int64 a2)
{
  return ItemShopSelectMenu_1874560(a1 - 1056, a2, 1);
}

__int64 ProcItemSelectMenu_1877920(__int64* a1, __int64* a2, unsigned int a3)
{
  char v3;
  __int64* v5;
  bool v6;
  char* v7;
  __int64* v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64* v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  int v24;
  unsigned int v25;
  unsigned int v26;
  int v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  int v35;
  bool v36;
  void* v37;
  char* v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 result;
  __int64 v64;
  __int64* v65;
  __int64* v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  int v70;
  int v71;
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
  __int64 v82;
  __int64 v83;
  __int64 v84;

  v3 = a3;
  v5 = a1;
  LayoutAccessor_155e830(a1, a3);
  v6 = a2[3] == 0;
  v72 = -1;
  v73 = -1;
  if (v6) {
    v7 = &GameData_1a9f09e;
  }
  else {
    v7 = "MID_Shop_Consumption";
  }
  v8 = msg_MessageManager_instance__ptr[0];
  v74 = -1;
  v75 = -1;
  v76 = -1;
  v77 = -1;
  v9 = *msg_MessageManager_instance__ptr[0];
  v10 = GameData_212e348;
  v78 = -1;
  v79 = -1;
  v80 = -1;
  v81 = -1;
  v82 = -1;
  v83 = -1;
  v66 = GameData_212e348 + 2;
  v67 = 0xFFFF0001FFFF0000LL;
  v68 = 0xFFFF0004FFFF0002LL;
  v69 = 0xFFFF0006FFFF0005LL;
  v84 = 8;
  v70 = -65529;
  v71 = -65528;
  v11 = GameRoutine_a4dbe0(v9, v7, 0, &v66);
  if (v11 != 0) {
    v12 = v11;
    v13 = ui_LayoutAccessor_FindTextBox(v5, "T_CostTitle_Txt");
    if (v13 != 0) {
      GameRoutine_156c5d0(v13, v12, 0);
    }
  }
  v14 = *a2;
  v65 = v5;
  if (a2[1] == *a2) {
    LODWORD(v16) = 0;
  }
  else {
    v15 = 0;
    v16 = 0;
    do {
      v17 = (__int64*)(v14 + v15);
      v18 = *v17;
      v19 = *((_DWORD*)v17 + 2);
      v20 = game_util_Format("L_Item%02d", v16);
      v21 = LayoutAccessor_155fbe0(v5, v20);
      LayoutAccessor_155e830(v21, 1);
      LayoutAccessor_1562cf0(v21, "EnduranceOn");
      v66 = nullptr;
      if (v18 != 0) {
        v22 = *(unsigned __int16*)(v18 + 16);
        HIDWORD(v66) = 1;
        LOWORD(v66) = v22;
        if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                 8 * v22) +
                      73LL) == 17) {
          nn_os_LockMutex(&game_g_random_mutex);
          v23 = game_map_MapRandom_instance__ptr[0];
          v24 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL));
          v25 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
          v26 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
          *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
              *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
          *((_DWORD*)v23 + 1) = v24;
          v27 = (v26 >> 8) ^ (v25 >> 19) ^ v26 ^ v25;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v23) = v25;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v23 + 4) = v27;
          nn_os_UnlockMutex(&game_g_random_mutex);
          v5 = v65;
          HIDWORD(v66) =
              HIDWORD(v66) & 0xFFFFC00F |
              (16 *
               (((16 * (v27 - 1000 * ((v27 & 0x7FFFFFFFu) / 0x3E8)) + 16) >>
                 4) &
                0x3FF));
        }
      }
      GameRoutine_187c5b0(v21, &v66, v19, v3 & 1, 0);
      v14 = *a2;
      ++v16;
      v15 += 16;
    } while (v16 < (a2[1] - *a2) >> 4);
    v8 = msg_MessageManager_instance__ptr[0];
    v10 = GameData_212e348;
  }
  if ((int)GameRoutine_9db9e0(22, *((unsigned int*)a2 + 11)) > 0) {
    v28 = game_util_Format("L_Item%02d", v16);
    v29 = (_QWORD*)LayoutAccessor_155fbe0(v5, v28);
    LayoutAccessor_155e830(v29, 1);
    v30 = *v8;
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
    v82 = -1;
    v83 = -1;
    v66 = v10 + 2;
    v67 = 0xFFFF0001FFFF0000LL;
    v68 = 0xFFFF0004FFFF0002LL;
    v69 = 0xFFFF0006FFFF0005LL;
    v84 = 8;
    v70 = -65529;
    v71 = -65528;
    v31 = GameRoutine_a4dbe0(v30, "MID_Sys_Gold", 0, &v66);
    if (v31 != 0) {
      v32 = v31;
      v33 = ui_LayoutAccessor_FindTextBox(v29, "T_Txt");
      if (v33 != 0) {
        GameRoutine_156c5d0(v33, v32, 0);
      }
    }
    LayoutAccessor_1562cf0(v29, "Cost");
    v34 = GameRoutine_9db9e0(22, *((unsigned int*)a2 + 11));
    GameRoutine_157cff0(v29, "T_Num", v34, 0);
    if (game_GameModeData_instance_ != 0) {
      v35 = *(_DWORD*)(game_GameModeData_instance_ + 72);
    }
    else {
      v35 = 0;
    }
    v36 = v35 < (int)GameRoutine_9db9e0(22, *((unsigned int*)a2 + 11));
    v37 = GameData_212da30;
    v38 = (char*)GameData_212da30 + 60;
    if (!v36) {
      v38 = (char*)GameData_212da30 + 36;
    }
    v39 = *(_DWORD*)v38;
    v40 = ui_LayoutAccessor_FindTextBox(v29, "T_Num");
    if (v40 != 0) {
      v41 = Pane_58f8a0(v40);
      if (v41 != 0) {
        *(_DWORD*)(v41 + 12) = v39;
      }
    }
    v42 = LayoutAccessor_155fbe0(v29, "L_Icon");
    v43 = ui_LayoutAccessor_FindPane(v42, "Icon");
    if (v43 != 0) {
      v44 = __dynamic_cast(v43, GameData_212d670[0], GameData_212d678[0], 0);
      if (v44 != 0) {
        v45 = *(int*)((char*)((int*)0x24LL) + (_QWORD)v37);
        v46 = v44;
        v47 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v44 + 88LL))(v44, 0);
        if (v47 != 0) {
          *(_DWORD*)(v47 + 12) = v45;
        }
        Manager_136a920(ui_Manager_instance_ + 1264, v46, 0, 7,
                        "IconStock_Gold");
      }
    }
    ui_LayoutAccessor_SetPaneVisible(v42, "IconDamage", 0);
    ui_LayoutAccessor_SetPaneVisible(v42, "IconLock", 0);
    ui_LayoutAccessor_SetPaneVisible(v42, "IconDrop", 0);
    v5 = v65;
    if (ui_LayoutAccessor_FindAlignment(v29, "A_Num") != 0) {
      Alignment_56b600();
      v48 = v29[1];
      if (v48 != 0) {
        v49 = std___1___shared_weak_count_lock(v48);
        if (v49 != 0) {
          v50 = v49;
          if (*v29 != 0) {
            ControlCreator_13633c0();
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v50 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50);
            std___1___shared_weak_count___release_weak(v50);
          }
        }
      }
    }
    LODWORD(v16) = v16 + 1;
  }
  if ((int)v16 <= 3) {
    v51 = 3;
  }
  else {
    v51 = (unsigned int)v16;
  }
  v52 = game_util_Format("Cost_%02d", v51);
  LayoutAccessor_1562cf0(v5, v52);
  if ((unsigned int)v16 <= 4) {
    v53 = game_util_Format("L_Item%02d", v16);
    v54 = LayoutAccessor_155fbe0(v5, v53);
    LayoutAccessor_155e830(v54, 0);
    if ((unsigned int)v16 != 4) {
      v55 = game_util_Format("L_Item%02d", (int)v16 + 1);
      v56 = LayoutAccessor_155fbe0(v5, v55);
      LayoutAccessor_155e830(v56, 0);
      if ((unsigned int)v16 != 3) {
        v57 = game_util_Format("L_Item%02d", (int)v16 + 2);
        v58 = LayoutAccessor_155fbe0(v5, v57);
        LayoutAccessor_155e830(v58, 0);
        if ((unsigned int)v16 != 2) {
          v59 = game_util_Format("L_Item%02d", (int)v16 + 3);
          v60 = LayoutAccessor_155fbe0(v5, v59);
          LayoutAccessor_155e830(v60, 0);
          if ((unsigned int)v16 != 1) {
            v61 = game_util_Format("L_Item%02d", (int)v16 + 4);
            v62 = LayoutAccessor_155fbe0(v5, v61);
            LayoutAccessor_155e830(v62, 0);
          }
        }
      }
    }
  }
  result = ui_LayoutAccessor_FindAlignment(v5, "A_Cost");
  if (result != 0) {
    Alignment_56b600();
    result = v5[1];
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      if (result != 0) {
        v64 = result;
        result = *v5;
        if (*v5 != 0) {
          result = ControlCreator_13633c0();
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v64 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v64 + 16LL))(v64);
          return std___1___shared_weak_count___release_weak(v64);
        }
      }
    }
  }
  return result;
}

__int64 ProcItemSelectMenu_Unknown84_1878db0(_BYTE* a1)
{
  __int64 result;

  result = GameRoutine_1873c90(a1);
  a1[1080] = 0;
  return result;
}

__int64 ProcItemSelectMenu_Unknown88(__int64* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int16 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64* v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _BOOL8 v17;

  v2 = a1[42];
  if (v2 != 0 && (v3 = __dynamic_cast(v2, GameData_212e008[0],
                                      &GameData_20f9358, 0)) != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 560LL))(v3);
    v5 = *(_WORD*)v4;
    v6 = v4;
    *((_BYTE*)a1 + 1074) = *(_BYTE*)(v4 + 2);
    *((_WORD*)a1 + 536) = v5;
    *((_BYTE*)a1 + 1075) = *(_BYTE*)(v4 + 3);
    *((_DWORD*)a1 + 269) = *(_DWORD*)(v4 + 4);
    v7 = GameRoutine_155fbe0(a1 + 106, "L_BeforeInfoDetail");
    if (*((_BYTE*)a1 + 1080) != 0) {
      v8 = a1[133];
    }
    else {
      v8 = 0;
    }
    result = GameRoutine_15d2000(v7, v6, v8);
  }
  else {
    v10 = game_g_empty_item_ptr;
    v11 = *((_DWORD*)game_g_empty_item_ptr + 1);
    *((_DWORD*)a1 + 268) = *(_DWORD*)game_g_empty_item_ptr;
    v12 = *a1;
    *((_DWORD*)a1 + 269) = v11;
    v13 = (*(__int64 (**)(__int64*))(v12 + 1248))(a1);
    v14 = GameRoutine_155fbe0(a1 + 106, v13);
    if (*((_BYTE*)a1 + 1080) != 0) {
      v15 = a1[133];
    }
    else {
      v15 = 0;
    }
    result = GameRoutine_15d2540(v14, v10, v15);
  }
  if (*((_BYTE*)a1 + 1081) == 1) {
    v17 = true;
    if (a1[133] != 0 && (GameRoutine_1873d80(a1) & 1) != 0) {
      v16 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                       8LL * *((unsigned __int16*)a1 + 536));
      if (*(unsigned __int8*)(v16 + 72) < 8u || *(_BYTE*)(v16 + 73) == 16) {
        v17 = false;
      }
    }
    return GameRoutine_1567590("StatusChange", v17);
  }
  return result;
}

__int64 ProcItemSelectMenu_Unknown135(__int64 result, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _BYTE v21[200];

  if (*(_DWORD*)(result + 352) != 9) {
    return game_menu_GameMenu_Unknown135(result, a2);
  }
  v2 = game_gameui_MenuAnimator_instance_;
  if (game_gameui_MenuAnimator_instance_ != 0) {
    v3 = result;
    sprintf(v21, "%s%s", "Right", "In");
    result = ProcTransitionAnim_156af20(v2, 3, 0, v3 + 848, "Right", v21);
    if (result != -1) {
      v6 = (__int64*)a2[1];
      v5 = a2[2];
      v7 = a2;
      if ((unsigned __int64)v6 >= v5) {
        v9 = *a2;
        v10 = (__int64)v6 - *a2;
        v11 = (v10 >> 3) + 1;
        if (v11 >> 61 != 0) {
          GameRoutine_874500();
        }
        v12 = v5 - v9;
        v13 = fw_memory_g_heap_manager_ptr;
        if (v12 >> 2 > v11) {
          v11 = v12 >> 2;
        }
        if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
          v14 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v14 = v11;
        }
        if (v14 != 0) {
          if (v14 >> 61 != 0) {
            GameRoutine_60a210(result);
          }
          v15 = result;
          v16 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0);
          result = v15;
        }
        else {
          v16 = 0;
        }
        v17 = v16 + 8 * v14;
        v18 = v16 + v10 - 8 * (v10 >> 3);
        *(_QWORD*)(v16 + v10) = result;
        v8 = v16 + v10 + 8;
        memcpy(v18, v9, v10);
        *a2 = v18;
        a2[1] = v8;
        a2[2] = v17;
        if (v9 != 0) {
          v19 = 128;
          if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
            v19 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v19);
        }
        v7 = a2;
      }
      else {
        *v6 = result;
        v8 = (__int64)(v6 + 1);
      }
      v7[1] = v8;
      snd_Fade_Fade_10c830(v21, 0.0f);
      snd_play_ff2d0((void*)(&v20), "SE_SYS_Window_Open", "SE_SYS_Window_Open",
                     v21, 0, 65537, 0, 0.0f, 1.0f);
      return snd_Fade_Destroy_Fade(v21);
    }
  }
  return result;
}

__int64 ProcItemSelectMenu_Unknown154_1879760(__int64 a1, __int64 a2)
{
  *(_QWORD*)(a1 + 1064) = a2;
  GameRoutine_1873720(a1, a2, 0);
  return game_menu_BasicMenu_Unknown16defa0(a1);
}

__int64 ProcItemSelectMenu_Unknown155_18797a0(__int64 a1, int a2)
{
  if (a2 <= 5) {
    return (unsigned int)a2;
  }
  else {
    return 0;
  }
}

__int64 ProcItemSelectMenu_Unknown157_18797c0(__int64 a1, __int16* a2)
{
  __int16 v2;
  __int64 v5;
  __int64 v6;

  v2 = *a2;
  *(_BYTE*)(a1 + 1074) = *((_BYTE*)a2 + 2);
  *(_WORD*)(a1 + 1072) = v2;
  *(_BYTE*)(a1 + 1075) = *((_BYTE*)a2 + 3);
  *(_DWORD*)(a1 + 1076) = *((_DWORD*)a2 + 1);
  v5 = GameRoutine_155fbe0(a1 + 848, "L_BeforeInfoDetail");
  if (*(_BYTE*)(a1 + 1080) != 0) {
    v6 = *(_QWORD*)(a1 + 1064);
  }
  else {
    v6 = 0;
  }
  return GameRoutine_15d2000(v5, a2, v6);
}

__int64 ProcItemSelectMenu_Unknown10_18798a0(__int64 a1, __int64 a2)
{
  return ItemShopSelectMenu_1874560(a1 - 1056, a2, 1);
}

__int64

game_facility_anonymous_ProcItemSelectMenu_AddItemList_closure_Invoke_1879b60(
    __int64 a1, int* a2)
{
  _QWORD* v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v2 = *(_QWORD**)(a1 + 8);
  v3 = *a2;
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      120, 16, 0);
  v5 = v2[133];
  *(_QWORD*)(v4 + 8) = 0;
  *(_WORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_BYTE*)(v4 + 88) = 0;
  *(_WORD*)(v4 + 80) = 257;
  *(_BYTE*)(v4 + 82) = 1;
  *(_DWORD*)(v4 + 84) = 1;
  v6 = v2[137];
  v7 = v2[136];
  *(_DWORD*)(v4 + 40) = v3;
  *(_QWORD*)(v4 + 112) = v5;
  *(_QWORD*)(v4 + 96) = v7;
  *(_QWORD*)(v4 + 104) = v6;
  *(_QWORD*)v4 = game_facility_anonymous_BlacksmithMenuItem_Item_vtable;
  return BasicMenuCursor_16e0c00(v2, v4);
}

__int64 ProcItemSelectMenu_Unknown84_187a6d0(_BYTE* a1)
{
  __int64 result;

  result = GameRoutine_1873c90(a1);
  a1[1080] = 0;
  return result;
}

__int64 ProcItemSelectMenu_Unknown88_187a9f0(__int64* a1)
{
  __int64 v1;
  __int64* v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  _BOOL8 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int16 v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned int v31;
  __int64 v32;
  __int64* v33;
  int v34;
  unsigned int v35;
  unsigned int v36;
  int v37;
  unsigned int v38;
  unsigned int v39;
  __int64 v40;
  _QWORD* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned int v46;
  int v47;
  bool v48;
  void* v49;
  char* v50;
  int v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  int v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  int v79;
  int v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;

  v1 = a1[42];
  if (v1 != 0 && *(__int64 (***)())v1 ==
                     game_facility_anonymous_BlacksmithMenuItem_Repair_vtable) {
    v15 = *(_QWORD*)(v1 + 104);
    v16 = *(int*)(v1 + 40);
    if (v15 != 0) {
      v17 = v15 + 8 * v16 + 828;
    }
    else {
      v17 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                      game_TransporterConst_List_instance__ptr
                                          [0] +
                                  8LL) +
                       8LL) +
            12LL * (int)v16 + 4;
    }
    v18 = *(_WORD*)v17;
    v19 = *(__int64**)(v1 + 112);
    *((_BYTE*)a1 + 1074) = *(_BYTE*)(v17 + 2);
    *((_WORD*)a1 + 536) = v18;
    *((_BYTE*)a1 + 1075) = *(_BYTE*)(v17 + 3);
    *((_DWORD*)a1 + 269) = *(_DWORD*)(v17 + 4);
    v20 = LayoutAccessor_155fbe0(a1 + 106, "L_BeforeInfoDetail");
    if (*((_BYTE*)a1 + 1080) != 0) {
      v21 = a1[133];
    }
    else {
      v21 = 0;
    }
    game_gameui_anonymous_15d2000(v20, v17, v21);
    v22 = LayoutAccessor_155fbe0(a1 + 106, "L_Cost");
    LayoutAccessor_155e830(v22, 1);
    v23 = (__int64*)LayoutAccessor_155fbe0(a1 + 106, "L_AccountMenu");
    LayoutAccessor_155e830(v23, 1);
    v24 = msg_MessageManager_instance__ptr[0];
    v81 = -1;
    v82 = -1;
    v83 = -1;
    v84 = -1;
    v25 = *msg_MessageManager_instance__ptr[0];
    v26 = GameData_212e348;
    v85 = -1;
    v86 = -1;
    v87 = -1;
    v88 = -1;
    v89 = -1;
    v90 = -1;
    v91 = -1;
    v92 = -1;
    v75 = (__int64)(GameData_212e348 + 2);
    v76 = 0xFFFF0001FFFF0000LL;
    v77 = 0xFFFF0004FFFF0002LL;
    v78 = 0xFFFF0006FFFF0005LL;
    v93 = 8;
    v79 = -65529;
    v80 = -65528;
    v27 = GameRoutine_a4dbe0(v25, "MID_Shop_Consumption", 0, &v75);
    if (v27 != 0) {
      v28 = v27;
      v29 = ui_LayoutAccessor_FindTextBox(v23, "T_CostTitle_Txt");
      if (v29 != 0) {
        GameRoutine_156c5d0(v29, v28, 0);
      }
    }
    v30 = *v19;
    if (*v19 != 0) {
      v31 = *((_DWORD*)v19 + 2);
      v32 = LayoutAccessor_155fbe0(v23, "L_Item00");
      LayoutAccessor_1562cf0(v32, "EnduranceOn");
      v75 = 0x100000000LL;
      LOWORD(v75) = *(_WORD*)(v30 + 16);
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                               8LL * (unsigned __int16)v75) +
                    73LL) == 17) {
        nn_os_LockMutex(&game_g_random_mutex);
        v33 = game_map_MapRandom_instance__ptr[0];
        v34 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL));
        v35 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
        v36 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
              (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
        *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
            *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
        *((_DWORD*)v33 + 1) = v34;
        v37 = (v36 >> 8) ^ (v35 >> 19) ^ v36 ^ v35;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v33) = v35;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v33 + 4) = v37;
        nn_os_UnlockMutex(&game_g_random_mutex);
        v38 = v37 - 1000 * ((v37 & 0x7FFFFFFFu) / 0x3E8);
        v24 = msg_MessageManager_instance__ptr[0];
        HIDWORD(v75) =
            HIDWORD(v75) & 0xFFFFC00F | (16 * (((16 * v38 + 16) >> 4) & 0x3FF));
      }
      GameRoutine_187c5b0(v32, &v75, v31,
                          *(_QWORD*)(*(_QWORD*)(v1 + 8) + 336LL) == v1, 0);
      v39 = 1;
    }
    else {
      v39 = 0;
    }
    if ((int)GameRoutine_9db9e0(22, *((unsigned int*)v19 + 3)) >= 1) {
      v40 = game_util_Format("L_Item%02d", v39);
      v41 = (_QWORD*)LayoutAccessor_155fbe0(v23, v40);
      LayoutAccessor_155e830(v41, 1);
      v42 = *v24;
      v81 = -1;
      v82 = -1;
      v83 = -1;
      v84 = -1;
      v85 = -1;
      v86 = -1;
      v87 = -1;
      v88 = -1;
      v89 = -1;
      v90 = -1;
      v91 = -1;
      v92 = -1;
      v75 = (__int64)(v26 + 2);
      v76 = 0xFFFF0001FFFF0000LL;
      v77 = 0xFFFF0004FFFF0002LL;
      v78 = 0xFFFF0006FFFF0005LL;
      v93 = 8;
      v79 = -65529;
      v80 = -65528;
      v43 = GameRoutine_a4dbe0(v42, "MID_Sys_Gold", 0, &v75);
      if (v43 != 0) {
        v44 = v43;
        v45 = ui_LayoutAccessor_FindTextBox(v41, "T_Txt");
        if (v45 != 0) {
          GameRoutine_156c5d0(v45, v44, 0);
        }
      }
      LayoutAccessor_1562cf0(v41, "Cost");
      v46 = GameRoutine_9db9e0(22, *((unsigned int*)v19 + 3));
      GameRoutine_157cff0(v41, "T_Num", v46, 0);
      if (game_GameModeData_instance_ != 0) {
        v47 = *(_DWORD*)(game_GameModeData_instance_ + 72);
      }
      else {
        v47 = 0;
      }
      v48 = v47 < (int)GameRoutine_9db9e0(22, *((unsigned int*)v19 + 3));
      v49 = GameData_212da30;
      v50 = (char*)GameData_212da30 + 60;
      if (!v48) {
        v50 = (char*)GameData_212da30 + 36;
      }
      v51 = *(_DWORD*)v50;
      v52 = ui_LayoutAccessor_FindTextBox(v41, "T_Num");
      if (v52 != 0) {
        v53 = Pane_58f8a0(v52);
        if (v53 != 0) {
          *(_DWORD*)(v53 + 12) = v51;
        }
      }
      v54 = LayoutAccessor_155fbe0(v41, "L_Icon");
      v55 = ui_LayoutAccessor_FindPane(v54, "Icon");
      if (v55 != 0) {
        v56 = __dynamic_cast(v55, GameData_212d670[0], GameData_212d678[0], 0);
        if (v56 != 0) {
          v57 = *(int*)((char*)((int*)0x24LL) + (_QWORD)v49);
          v58 = v56;
          v59 =
              (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v56 + 88LL))(v56, 0);
          if (v59 != 0) {
            *(_DWORD*)(v59 + 12) = v57;
          }
          Manager_136a920(ui_Manager_instance_ + 1264, v58, 0, 7,
                          "IconStock_Gold");
        }
      }
      ui_LayoutAccessor_SetPaneVisible(v54, "IconDamage", 0);
      ui_LayoutAccessor_SetPaneVisible(v54, "IconLock", 0);
      ui_LayoutAccessor_SetPaneVisible(v54, "IconDrop", 0);
      ui_LayoutAccessor_SetPaneVisible(v54, "IconLock",
                                       (*(_BYTE*)(v17 + 3) & 0x10) != 0);
      if (ui_LayoutAccessor_FindAlignment(v41, "A_Num") != 0) {
        Alignment_56b600();
        v60 = v41[1];
        if (v60 != 0) {
          v61 = std___1___shared_weak_count_lock(v60);
          if (v61 != 0) {
            v62 = v61;
            if (*v41 != 0) {
              ControlCreator_13633c0();
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v62 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v62 + 16LL))(v62);
              std___1___shared_weak_count___release_weak(v62);
            }
          }
        }
      }
      ++v39;
    }
    v63 = game_util_Format("Cost_%02d", 3);
    LayoutAccessor_1562cf0(v23, v63);
    v64 = game_util_Format("L_Item%02d", v39);
    v65 = LayoutAccessor_155fbe0(v23, v64);
    LayoutAccessor_155e830(v65, 0);
    if (v39 != 4) {
      v66 = game_util_Format("L_Item%02d", v39 + 1);
      v67 = LayoutAccessor_155fbe0(v23, v66);
      LayoutAccessor_155e830(v67, 0);
      if (v39 != 3) {
        v68 = game_util_Format("L_Item%02d", v39 + 2);
        v69 = LayoutAccessor_155fbe0(v23, v68);
        LayoutAccessor_155e830(v69, 0);
        if (v39 != 2) {
          v70 = game_util_Format("L_Item%02d", v39 + 3);
          v71 = LayoutAccessor_155fbe0(v23, v70);
          LayoutAccessor_155e830(v71, 0);
          if ((v39 | 4LL) != 5) {
            v72 = game_util_Format("L_Item%02d", v39 | 4);
            v73 = LayoutAccessor_155fbe0(v23, v72);
            LayoutAccessor_155e830(v73, 0);
          }
        }
      }
    }
    result = ui_LayoutAccessor_FindAlignment(v23, "A_Cost");
    if (result != 0) {
      Alignment_56b600();
      result = v23[1];
      if (result != 0) {
        result = std___1___shared_weak_count_lock(result);
        if (result != 0) {
          v74 = result;
          result = *v23;
          if (*v23 != 0) {
            result = ControlCreator_13633c0();
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v74 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v74 + 16LL))(v74);
            result = std___1___shared_weak_count___release_weak(v74);
          }
        }
      }
    }
  }
  else {
    v3 = game_g_empty_item_ptr;
    v4 = *((_DWORD*)game_g_empty_item_ptr + 1);
    *((_DWORD*)a1 + 268) = *(_DWORD*)game_g_empty_item_ptr;
    v5 = *a1;
    *((_DWORD*)a1 + 269) = v4;
    v6 = (*(__int64 (**)(__int64*))(v5 + 1248))(a1);
    v7 = LayoutAccessor_155fbe0(a1 + 106, v6);
    if (*((_BYTE*)a1 + 1080) != 0) {
      v8 = a1[133];
    }
    else {
      v8 = 0;
    }
    game_gameui_anonymous_15d2540(v7, v3, v8);
    v9 = LayoutAccessor_155fbe0(a1 + 106, "L_AfterInfoDetail");
    LayoutAccessor_155e830(v9, 0);
    v10 = LayoutAccessor_155fbe0(a1 + 106, "L_Cost");
    LayoutAccessor_155e830(v10, 0);
    v11 = LayoutAccessor_155fbe0(a1 + 106, "L_AccountMenu");
    result = LayoutAccessor_155e830(v11, 0);
  }
  if (*((_BYTE*)a1 + 1081) == 1) {
    v14 = true;
    if (a1[133] != 0 && (ItemShopSelectMenu_1873d80(a1) & 1) != 0) {
      v13 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                       8LL * *((unsigned __int16*)a1 + 536));
      if (*(unsigned __int8*)(v13 + 72) < 8u || *(_BYTE*)(v13 + 73) == 16) {
        v14 = false;
      }
    }
    return GameRoutine_1567590("StatusChange", v14);
  }
  return result;
}

__int64 ProcItemSelectMenu_Unknown154_187b4c0(__int64 a1, __int64 a2)
{
  *(_QWORD*)(a1 + 1064) = a2;
  GameRoutine_1873720(a1, a2, 0);
  return game_menu_BasicMenu_Unknown16defa0(a1);
}

__int64 ProcItemSelectMenu_Unknown155_187b500(__int64 a1, int a2)
{
  if (a2 <= 5) {
    return (unsigned int)a2;
  }
  else {
    return 0;
  }
}

__int64 ProcItemSelectMenu_Unknown157_187b520(__int64 a1, __int16* a2)
{
  __int16 v2;
  __int64 v5;
  __int64 v6;

  v2 = *a2;
  *(_BYTE*)(a1 + 1074) = *((_BYTE*)a2 + 2);
  *(_WORD*)(a1 + 1072) = v2;
  *(_BYTE*)(a1 + 1075) = *((_BYTE*)a2 + 3);
  *(_DWORD*)(a1 + 1076) = *((_DWORD*)a2 + 1);
  v5 = GameRoutine_155fbe0(a1 + 848, "L_BeforeInfoDetail");
  if (*(_BYTE*)(a1 + 1080) != 0) {
    v6 = *(_QWORD*)(a1 + 1064);
  }
  else {
    v6 = 0;
  }
  return GameRoutine_15d2000(v5, a2, v6);
}

__int64 ProcItemSelectMenu_Unknown10_187b600(__int64 a1, __int64 a2)
{
  return ItemShopSelectMenu_1874560(a1 - 1056, a2, 1);
}

__int64

game_facility_anonymous_ProcItemSelectMenu_AddItemList_closure_Invoke_187c290(
    __int64 a1, int* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int16* v6;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      120, 16, 0);
  v5 = *(_QWORD*)(v2 + 1064);
  *(_WORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_BYTE*)(v4 + 88) = 0;
  *(_DWORD*)(v4 + 40) = v3;
  *(_WORD*)(v4 + 80) = 257;
  *(_BYTE*)(v4 + 82) = 1;
  *(_DWORD*)(v4 + 84) = 1;
  *(_QWORD*)v4 = game_facility_anonymous_BlacksmithMenuItem_Repair_vtable;
  *(_QWORD*)(v4 + 8) = 0;
  *(_QWORD*)(v4 + 96) = GameData_20fa208;
  *(_QWORD*)(v4 + 104) = v5;
  if (v5 != 0) {
    v6 = (unsigned __int16*)(v5 + 8 * v3 + 828);
  }
  else {
    v6 =
        (unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                      game_TransporterConst_List_instance__ptr
                                                          [0] +
                                                  8LL) +
                                       8LL) +
                            12LL * (int)v3 + 4);
  }
  *(_QWORD*)(v4 + 112) =
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v6) +
                 24LL) +
      512LL;
  return BasicMenuCursor_16e0c00(v2, v4);
}

#pragma GCC visibility pop
