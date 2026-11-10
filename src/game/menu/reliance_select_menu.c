#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 Alignment_56b600(void);
__int64 GameRoutine_10140c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1562060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_157d6f0(_QWORD, _QWORD);
__int64 GameRoutine_15dfde0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15dff80(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16e8d70(_QWORD);
__int64 GameRoutine_821090(_QWORD);
__int64 GameRoutine_8c77c0(_QWORD);
__int64 GameRoutine_8c9820(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8ca200(_QWORD);
__int64 GameRoutine_9e60d0(_QWORD);
__int64 _ZN4game4menu8GameMenu12Unknown16e9cd0Ev(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16dd9a0(_QWORD);
__int64 game_menu_BasicMenu_Unknown16defa0(_QWORD);
__int64 game_menu_BasicMenu_Unknown96(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212fcd8;
extern __int64 (*game_menu_anonymous_RelianceMenuItem_vtable[])();
extern __int64 GameData_21c9ac0;
extern __int64 GameData_21c9ac8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 RelianceSelectMenu_Unknown96(__int64 a1);
__int64 RelianceSelectMenu_Unknown88(__int64 a1);
const char* RelianceSelectMenu_Unknown140(__int64 a1);
const char* RelianceSelectMenu_184c270(__int64 a1);
const char* RelianceSelectMenu_Unknown141(__int64 a1);
const char* RelianceSelectMenu_184c2b0(__int64 a1);
__int64 RelianceSelectMenu_Unknown142(__int64 result, __int64* a2);
__int64 RelianceSelectMenu_Unknown30(__int64 a1, char a2);
__int64 RelianceSelectMenu_Unknown103(__int64 a1);
__int64 RelianceSelectMenu_Unknown105(__int64 a1);
const char* RelianceSelectMenu_Unknown43(__int64 a1, char a2);
__int64 RelianceSelectMenu_184d1f0(__int64 a1, __int64 a2);
bool RelianceSelectMenu_184e500(__int64 a1, __int64 a2);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_15b75f0(_QWORD, _QWORD);
__int64 GameRoutine_16dd280(_QWORD);
__int64 GameRoutine_184d360(__int64 result, __int64*);
__int64 GameRoutine_19ef790(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8ca350(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9d5920(_QWORD, _QWORD);
__int64 GameVariable_828700(_QWORD, _QWORD, _QWORD);
__int64 RelianceMenuItem_1851ae0(__int64*);
__int64 RelianceMenuItem_18537d0(_QWORD, _QWORD, _QWORD);
__int64 RelianceSelectMenu_184e500_alt1(_QWORD, _QWORD) __asm__(
    "RelianceSelectMenu_184e500");
__int64 RelianceSelectMenu_1852b80(_QWORD, _QWORD, _QWORD);
__int64 RelianceSelectMenu_1852da0_alt1(_QWORD) __asm__(
    "RelianceSelectMenu_1852da0");
__int64 game_HashString(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 game_anonymous_RuntimeTalk_GetCondition(_QWORD);
__int64 game_gameui_anonymous_ProcGameUIFade_In(_QWORD, _QWORD, _QWORD, _QWORD,
                                                _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
extern __int64 (*game_menu_anonymous_RelianceUnitGridMenuItem_vtable[])();
extern __int64 GameData_2259540;
extern __int64 fw_memory_g_heap_manager;
__int64 game_menu_RelianceSelectMenu_AddItemList_lambda1_Invoke(__int64 a1,
                                                                __int64 a2);
__int64 RelianceSelectMenu_1852650(__int64 result);
__int64 game_menu_RelianceSelectMenu_ZLCall_lambda0_Invoke(__int64 a1);
__int64 RelianceSelectMenu_1852da0(__int64 result);
__int64 game_menu_RelianceSelectMenu_AddItemList_lambda0_Invoke(__int64 result,
                                                                __int64* a2);
__int64 game_menu_RelianceSelectMenu_SortAndFilter_lambda0_Invoke(__int64 a1,
                                                                  _QWORD* a2,
                                                                  __int64* a3);
__int64 GameRoutine_184d360_alt1(_QWORD, _QWORD) __asm__("GameRoutine_184d360");
__int64 RelianceSelectMenu_184d1f0_alt1(_QWORD, _QWORD) __asm__(
    "RelianceSelectMenu_184d1f0");
__int64 RelianceSelectMenu_Unknown88_alt1(_QWORD) __asm__(
    "RelianceSelectMenu_Unknown88");
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
struct PseudoSret snd_play_ff2d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 double, float);
__int64 RelianceSelectMenu_Unknown112(__int64 a1);

__int64 RelianceSelectMenu_Unknown96(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;

  game_menu_BasicMenu_Unknown96(a1);
  if ((*(unsigned int (**)(__int64))(*(_QWORD*)a1 + 168LL))(a1)-8 <=
      0xFFFFFFF9) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 1056) + 96LL))(a1 + 1056);
  }
  v2 = *(_QWORD*)(a1 + 1072);
  *(_BYTE*)(a1 + 1080) = 0;
  if (v2 != 0) {
    v3 = *(_QWORD*)(v2 + 392);
    if (v3 != 0) {
      v4 = (__int64*)GameData_21c9ac0;
      v5 = GameData_21c9ac8;
      if (GameData_21c9ac0 != GameData_21c9ac8) {
        while (1) {
          v6 = *v4++;
          if ((unsigned int)RelianceSelectMenu_184d1f0(v3, v6) == 1) {
            break;
          }
          if (v4 == (__int64*)v5) {
            goto LABEL_10;
          }
        }
        *(_BYTE*)(a1 + 1080) = 1;
      }
    }
  }

LABEL_10:
  game_menu_BasicMenu_Unknown16dd9a0(a1);
  GameRoutine_16e8d70(a1 + 1056);
  return RelianceSelectMenu_Unknown88(a1);
}

__int64 RelianceSelectMenu_Unknown88(__int64 a1)
{
  int v1;
  __int64 v2;
  const char* v4;
  _BOOL4 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  bool v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _BOOL4 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  const char* v31;
  const char* v32;
  const char* v33;
  int v34;
  __int64 v35;
  unsigned int v36;
  __int64 v37;
  __int64 result;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  int v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  int v49;
  _QWORD v50[2];
  __int64 v51;
  __int64 v52;

  v1 = *(_DWORD*)(a1 + 1064);
  v2 = *(_QWORD*)(a1 + 336);
  if (v2 != 0) {
    v4 = "Face_Default";
    if (*(__int64 (***)())v2 == game_menu_anonymous_RelianceMenuItem_vtable) {
      v6 = *(_QWORD*)(v2 + 104);
      v7 = *(_QWORD*)(v2 + 88);
      v8 = *(unsigned __int8*)(v2 + 164);
      v5 = RelianceSelectMenu_184d1f0(v6, *(_QWORD*)(v2 + 112)) == 1;
      if (v8 != 0) {
        v4 = "Face_Unkown";
      }
    }
    else {
      v5 = false;
      v6 = 0;
      v7 = 0;
    }
  }
  else {
    v5 = false;
    v6 = 0;
    v7 = 0;
    v4 = "Face_Default";
  }
  v9 = *(_QWORD*)(a1 + 1072);
  ui_LayoutAccessor_SetPaneVisible(a1 + 848, "Face00", 0);
  v10 = ui_LayoutAccessor_FindPane(a1 + 848, "Face00");
  if (v10 != 0) {
    v11 = __dynamic_cast(v10, GameData_212d670[0], GameData_212d678[0], 0);
  }
  else {
    v11 = 0;
  }
  v48 = v9;
  v50[0] = 0;
  v50[1] = 0;
  v12 = *(_QWORD*)(a1 + 1088);
  v49 = 1;
  v13 = (__int64*)GameData_212fcd8;
  v14 = *(_QWORD*)GameData_212fcd8;
  v51 = 0;
  v52 = v14;
  GameRoutine_10140c0(v12, v11, 0, &v48, v50);
  ui_LayoutAccessor_SetPaneVisible(a1 + 848, "Face01", 0);
  v15 = ui_LayoutAccessor_FindPane(a1 + 848, "Face01");
  if (v7 != 0) {
    if (v15 != 0) {
      v16 = __dynamic_cast(v15, GameData_212d670[0], GameData_212d678[0], 0);
    }
    else {
      v16 = 0;
    }
    v48 = v7;
    v17 = 1;
  }
  else {
    if (v15 != 0) {
      v16 = __dynamic_cast(v15, GameData_212d670[0], GameData_212d678[0], 0);
    }
    else {
      v16 = 0;
    }
    v17 = 2;
    v48 = v6;
  }
  v49 = v17;
  v18 = *(_QWORD*)(a1 + 1096);
  v19 = *v13;
  v50[0] = 0;
  v50[1] = 0;
  v51 = 0;
  v52 = v19;
  GameRoutine_10140c0(v18, v16, 0, &v48, v50);
  GameRoutine_1562cf0(a1 + 848, v4);
  v20 = *(_QWORD*)(a1 + 336);
  if (v20 != 0 &&
      *(__int64 (***)())v20 == game_menu_anonymous_RelianceMenuItem_vtable) {
    GameRoutine_1560070(&v46, a1 + 848, "L_Reliance");
    if (v47 != 0) {
      v22 = std___1___shared_weak_count_lock(v47);
      if (v22 != 0) {
        v23 = v22;
        if (v46 != 0) {
          GameRoutine_157d6f0(v46, v20 + 104);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
          std___1___shared_weak_count___release_weak(v23);
        }
      }
      if (v47 != 0) {
        std___1___shared_weak_count___release_weak(v47);
      }
    }
    v21 = *(_BYTE*)(v20 + 164) == 0;
  }
  else {
    v21 = false;
  }
  v24 = ui_LayoutAccessor_FindPane(a1 + 848, "N_Reliance");
  if (v24 != 0) {
    *(_BYTE*)(v24 + 88) = *(_BYTE*)(v24 + 88) & 0xFE | v21;
  }
  ui_LayoutAccessor_SetPaneVisible(a1 + 848, "A_Annotation", 1);
  ui_LayoutAccessor_SetPaneVisible(a1 + 848, "N_Annotation00", 0);
  ui_LayoutAccessor_SetPaneVisible(a1 + 848, "N_Annotation01", 0);
  v25 = *(_QWORD*)(a1 + 336);
  if (v25 == 0 ||
      *(__int64 (***)())v25 != game_menu_anonymous_RelianceMenuItem_vtable ||
      *(_BYTE*)(v25 + 164) != 0) {
    goto LABEL_36;
  }
  v28 = GameRoutine_8ca200(v25 + 104);
  v26 = v28;
  if (v28 != 0) {
    if (*(_BYTE*)(v28 + 64) == 4 ||
        game_GameModeData_instance_ != 0 &&
            (v29 = game_GameVariableTable_Find(
                 *(_QWORD*)(game_GameModeData_instance_ + 48),
                 *(_QWORD*)(v28 + 24) + 40LL)) != 0 &&
            *(_DWORD*)(v29 + 32) != 0 ||
        (unsigned __int16)GameRoutine_8c77c0(v26) == 0) {
    LABEL_36:
      LODWORD(v26) = 0;
      goto LABEL_37;
    }
    v30 = GameRoutine_8c77c0(v26);
    if ((v30 & 4) != 0) {
      ui_LayoutAccessor_SetPaneVisible(a1 + 848, "N_Annotation00", 1);
      GameRoutine_1562060(a1 + 848, "T_Annotation00",
                          "MID_Menu_Cause_ShortageRelianceLv");
      v31 = "T_Annotation01";
      v32 = "N_Annotation01";
    }
    else {
      v31 = "T_Annotation00";
      v32 = "N_Annotation00";
    }
    if ((v30 & 0x10) != 0) {
      v34 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v34 = *(_DWORD*)(game_GameModeData_instance_ + 60);
      }
      v33 = "MID_Menu_Cause_NotPlayable_Part";
      if (v34 >= *(unsigned __int8*)(v26 + 65) &&
          v34 <= (unsigned int)*(unsigned __int8*)(v26 + 67)) {
        v33 = "MID_Menu_Cause_NotPlayable_Chapter";
      }
      goto LABEL_60;
    }
    if ((v30 & 0xFFFFFFEB) != 0) {
      v33 = "MID_Menu_Cause_NotPlayable";
    LABEL_60:
      LODWORD(v26) = 1;
      ui_LayoutAccessor_SetPaneVisible(a1 + 848, v32, 1);
      GameRoutine_1562060(a1 + 848, v31, v33);
      v27 = v1 == 0 && v5;
      goto LABEL_63;
    }
    LODWORD(v26) = (v30 & 4) != 0;
  }

LABEL_37:
  v27 = v1 == 0 && v5;
  if (!v27 && (_DWORD)v26 == 0) {
    GameRoutine_1562680(a1 + 848, "Help_Off", 1.0);
    goto LABEL_64;
  }

LABEL_63:
  GameRoutine_1562680(a1 + 848, "Help_On", 1.0);
  LODWORD(v26) = v27 & (v26 ^ 1);

LABEL_64:
  ui_LayoutAccessor_SetPaneVisible(a1 + 848, "N_Help00", (unsigned int)v26);
  ui_LayoutAccessor_SetPaneVisible(a1 + 848, "N_Help01", (unsigned int)v26);
  if (ui_LayoutAccessor_FindAlignment(a1 + 848, "A_Annotation") != 0) {
    Alignment_56b600();
  }
  v35 = *(_QWORD*)(a1 + 336);
  if (v35 != 0 &&
      *(__int64 (***)())v35 == game_menu_anonymous_RelianceMenuItem_vtable) {
    v39 = GameRoutine_821090(1);
    v36 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v40 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v39);
      v36 = 0;
      if (v40 != 0 && *(int*)(v40 + 32) >= 1 && *(_BYTE*)(v35 + 164) == 0) {
        v41 = GameRoutine_8ca200(v35 + 104);
        if (v41 != 0 && (v42 = *(unsigned __int8*)(v41 + 64)) != 4) {
          v42 = (game_GameModeData_instance_ == 0 ||
                 (v44 = v41,
                  v45 = game_GameVariableTable_Find(
                      *(_QWORD*)(game_GameModeData_instance_ + 48),
                      *(_QWORD*)(v41 + 24) + 40LL),
                  v41 = v44, v45 == 0) ||
                 *(_DWORD*)(v45 + 32) == 0) &&
                (unsigned __int16)GameRoutine_8c77c0(v41) == 0;
          v43 = 1;
        }
        else {
          v43 = 0;
        }
        v36 = v43 & v42;
      }
    }
  }
  else {
    v36 = 0;
  }
  if (v1 != 0) {
    v37 = 0;
  }
  else {
    v37 = v36;
  }
  ui_LayoutAccessor_SetPaneVisible(a1 + 848, "L_KeyHelp00", v37);
  ui_LayoutAccessor_SetPaneVisible(a1 + 848, "L_KeyHelp01", (unsigned int)v26);
  result = ui_LayoutAccessor_FindAlignment(a1 + 848, "A_KeyHelp");
  if (result != 0) {
    return Alignment_56b600();
  }
  return result;
}

const char* RelianceSelectMenu_Unknown140(__int64 a1)
{
  if (*(_DWORD*)(a1 + 1064) != 0) {
    return "MID_SysMenu_Reliance";
  }
  else {
    return "MID_HotelMenu_Reliance";
  }
}

const char* RelianceSelectMenu_184c270(__int64 a1)
{
  if (*(_DWORD*)(a1 + 8) != 0) {
    return "MID_SysMenu_Reliance";
  }
  else {
    return "MID_HotelMenu_Reliance";
  }
}

const char* RelianceSelectMenu_Unknown141(__int64 a1)
{
  if (*(_DWORD*)(a1 + 1064) != 0) {
    return "MID_RelianceMenu_Help";
  }
  else {
    return "MID_RelianceMenu_Hotel_Help";
  }
}

const char* RelianceSelectMenu_184c2b0(__int64 a1)
{
  if (*(_DWORD*)(a1 + 8) != 0) {
    return "MID_RelianceMenu_Help";
  }
  else {
    return "MID_RelianceMenu_Hotel_Help";
  }
}

__int64 RelianceSelectMenu_Unknown142(__int64 result, __int64* a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;

  if (*(_DWORD*)(result + 1064) == 0 && (*(_BYTE*)(result + 1080) & 1) != 0) {
    v2 = a2[1];
    v3 = a2[2];
    if (v2 >= v3) {
      v6 = *a2;
      v7 = v2 - *a2;
      v8 = 1 - 0x3333333333333333LL * (v7 >> 3);
      if (v8 > 0x666666666666666LL) {
        GameRoutine_874520(result);
      }
      v9 = fw_memory_g_heap_manager_ptr;
      v10 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v3 - v6) >> 3);
      if (2 * v10 > v8) {
        v8 = 2 * v10;
      }
      if (v10 >= 0x333333333333333LL) {
        v11 = 0x666666666666666LL;
      }
      else {
        v11 = v8;
      }
      if (v11 != 0) {
        if (v11 > 0x666666666666666LL) {
          GameRoutine_60a210(result);
        }
        v12 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v11, 16, 0);
      }
      else {
        v12 = 0;
      }
      v13 = v12 + v7;
      *(_QWORD*)v13 = &GameData_1a9f09e;
      *(_QWORD*)(v13 + 8) = "MID_KeyHelp_AllRead";
      *(_BYTE*)(v13 + 28) = 0;
      *(_QWORD*)(v13 + 32) = 0;
      *(_BYTE*)(v13 + 16) = 1;
      v14 = v12 + 40 * v11;
      v5 = v12 + v7 + 40;
      *(_QWORD*)(v13 + 20) = 0x200000006LL;
      result = memcpy(v12, v6, v7);
      *a2 = v12;
      a2[1] = v5;
      a2[2] = v14;
      if (v6 != 0) {
        v15 = 128;
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
          v15 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v15, v6);
      }
    }
    else {
      *(_BYTE*)(v2 + 28) = 0;
      *(_QWORD*)(v2 + 32) = 0;
      *(_QWORD*)v2 = &GameData_1a9f09e;
      *(_QWORD*)(v2 + 8) = "MID_KeyHelp_AllRead";
      v5 = v2 + 40;
      *(_BYTE*)(v2 + 16) = 1;
      *(_QWORD*)(v2 + 20) = 0x200000006LL;
    }
    a2[1] = v5;
  }
  return result;
}

__int64 RelianceSelectMenu_Unknown30(__int64 a1, char a2)
{
  int v2;
  __int64 v3;
  __int64 v5;
  char v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _BOOL4 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  _BOOL4 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  LOBYTE(v3) = a2;
  v5 = GameRoutine_155fbe0(a1 + 848, "L_KeyHelp00");
  if ((v3 & 1) != 0) {
    v6 = -1;
  }
  else {
    v6 = 40;
  }
  if (*(_QWORD*)(v5 + 16) == 0) {
    goto LABEL_22;
  }
  v7 = (__int64*)v5;
  v8 = *(_QWORD*)(v5 + 8);
  if (v8 == 0) {
    goto LABEL_22;
  }
  v9 = std___1___shared_weak_count_lock(v8);
  if (v9 == 0) {
    goto LABEL_14;
  }
  v10 = *v7;
  if (*v7 != 0) {
    v2 = *(unsigned __int8*)(v10 + 24);
    v11 = v10 + 152;
    if (v2 == 0) {
      v11 = 0;
    }
    v12 = v11 != v7[2];
  }
  else {
    v12 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v12) {
    LABEL_14:
      v13 = v7[1];
      if (v13 == 0 || *(_QWORD*)(v13 + 8) == -1) {
        goto LABEL_22;
      }
      goto LABEL_19;
    }
  }
  else {
    v3 = v9;
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v3);
    if (v12) {
      goto LABEL_14;
    }
  }
  if ((v2 & 1) == 0) {
    goto LABEL_22;
  }

LABEL_19:
  v14 = v7[2];
  if (v14 != 0) {
    v15 = *(_QWORD*)(v14 + 24);
    if (v15 != 0) {
      *(_BYTE*)(v15 + 89) = v6;
    }
  }

LABEL_22:
  result = GameRoutine_155fbe0(a1 + 848, "L_KeyHelp01");
  if (*(_QWORD*)(result + 16) == 0) {
    return result;
  }
  v17 = (__int64*)result;
  result = *(_QWORD*)(result + 8);
  if (result == 0) {
    return result;
  }
  result = std___1___shared_weak_count_lock(result);
  if (result == 0) {
    goto LABEL_32;
  }
  v18 = *v17;
  if (*v17 != 0) {
    LODWORD(v3) = *(unsigned __int8*)(v18 + 24);
    v19 = v18 + 152;
    if ((_DWORD)v3 == 0) {
      v19 = 0;
    }
    v20 = v19 != v17[2];
  }
  else {
    v20 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v20) {
    LABEL_32:
      v21 = v17[1];
      if (v21 == 0 || *(_QWORD*)(v21 + 8) == -1) {
        return result;
      }
      goto LABEL_37;
    }
  }
  else {
    v22 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    result = std___1___shared_weak_count___release_weak(v22);
    if (v20) {
      goto LABEL_32;
    }
  }
  if ((v3 & 1) == 0) {
    return result;
  }

LABEL_37:
  v23 = v17[2];
  if (v23 != 0) {
    v24 = *(_QWORD*)(v23 + 24);
    if (v24 != 0) {
      *(_BYTE*)(v24 + 89) = v6;
    }
  }
  return result;
}

__int64 RelianceSelectMenu_Unknown103(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  _BYTE v6[32];
  _BYTE* v7;

  v1 = *(_QWORD*)(a1 + 1072);
  v7 = nullptr;
  v3 = GameRoutine_15dff80(v1, 0, v6, 0);
  *(_QWORD*)(a1 + 1072) = v3;
  if (v7 == v6) {
    v4 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(void))(*(_QWORD*)v7 + v4))();
  v3 = *(_QWORD*)(a1 + 1072);

LABEL_6:
  if (v3 == v1) {
    return 0;
  }
  _ZN4game4menu8GameMenu12Unknown16e9cd0Ev(a1);
  game_menu_BasicMenu_Unknown16defa0(a1);
  return 13;
}

__int64 RelianceSelectMenu_Unknown105(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  _BYTE v6[32];
  _BYTE* v7;

  v1 = *(_QWORD*)(a1 + 1072);
  v7 = nullptr;
  v3 = GameRoutine_15dfde0(v1, 0, v6, 0);
  *(_QWORD*)(a1 + 1072) = v3;
  if (v7 == v6) {
    v4 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(void))(*(_QWORD*)v7 + v4))();
  v3 = *(_QWORD*)(a1 + 1072);

LABEL_6:
  if (v3 == v1) {
    return 0;
  }
  _ZN4game4menu8GameMenu12Unknown16e9cd0Ev(a1);
  game_menu_BasicMenu_Unknown16defa0(a1);
  return 13;
}

const char* RelianceSelectMenu_Unknown43(__int64 a1, char a2)
{
  const char* v2;

  v2 = "MID_Menu_Default";
  if (a2 == 1) {
    v2 = "MID_Sys_RelianceLv";
  }
  if (a2 == 2) {
    return "MID_HotelMenu_Reliance";
  }
  else {
    return v2;
  }
}

__int64 RelianceSelectMenu_Unknown112(__int64 a1)
{
  int v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD v28[2];
  char v29;
  _QWORD v30[2];
  _BYTE v31[16];
  _QWORD v32[23];

  v2 = *(_DWORD*)(a1 + 1064);
  result = 0;
  if (v2 == 0 && (*(_BYTE*)(a1 + 1080) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 1072);
    if (v4 != 0 && (v5 = *(_QWORD*)(a1 + 336)) != 0 &&
        *(__int64 (***)())v5 == game_menu_anonymous_RelianceMenuItem_vtable &&
        (unsigned int)RelianceSelectMenu_184d1f0_alt1(
            *(_QWORD*)(v4 + 392), *(_QWORD*)(v5 + 104)) == 1) {
      v6 = *(_QWORD*)(a1 + 1072);
      v7 = *(_QWORD*)(v5 + 104);
      v29 = 0;
      v8 = *(_QWORD*)(v6 + 392);
      v28[0] = v8;
      v28[1] = v7;
      v9 = 0;
      if ((unsigned int)RelianceSelectMenu_184d1f0_alt1(v8, v7) == 1) {
        v25 = v8;
        v30[0] = v7;
        GameRoutine_8ca350(v31, &v25, v30);
        v10 = GameRoutine_8ca200(v31);
        if (v10 != 0 && (v11 = v10, *(_BYTE*)(v10 + 64) != 4) &&
            (GameRoutine_9e60d0(*(_QWORD*)(v10 + 24)) & 1) != 0 &&
            ((unsigned __int16)game_anonymous_RuntimeTalk_GetCondition(v11) ==
                 0 ||
             (unsigned int)game_anonymous_RuntimeTalk_GetCondition(v11) ==
                 256)) {
          v9 = *(unsigned __int8*)(v11 + 64);
          v29 = *(_BYTE*)(v11 + 64);
        }
        else {
          v9 = 0;
        }
      }
      v26 = 0;
      v27 = 0;
      v25 = 0;
      GameRoutine_184d360_alt1(v28, &v25);
      if (v9 != 0 && v8 != 0 && v7 != 0) {
        v12 = v32;
        v32[0] = GameRoutine_8c9820(v8, v7, 0);
        v32[1] = GameRoutine_8c9820(v8, v7, 1);
        v32[2] = GameRoutine_8c9820(v8, v7, 2);
        v32[3] = GameRoutine_8c9820(v8, v7, 3);
        v13 = GameRoutine_8c9820(v8, v7, 4);
        v14 = v9 + 1LL;
        v32[4] = v13;
        do {
          v16 = *v12++;
          v15 = v16;
          if (v16 != 0) {
            game_VariableManager_SetFlag(*(_QWORD*)(v15 + 24) + 40LL, 1);
            v17 = *(_QWORD*)(v15 + 128);
            if (v17 != 0) {
              v30[1] = *(_QWORD*)(v15 + 128);
              v30[0] = game_HashString(v17);
              if (game_GameModeData_instance_ != 0) {
                GameVariable_828700(game_GameModeData_instance_ + 40, v30, 1);
              }
            }
          }
          --v14;
        } while (v14 != 0);
      }
      v18 = v25;
      if (v25 != v26) {
        GameRoutine_9d5920(a1, &v25);
      }
      v19 = *(_QWORD*)(a1 + 1072);
      *(_BYTE*)(a1 + 1080) = 0;
      if (v19 != 0) {
        v20 = *(_QWORD*)(v19 + 392);
        if (v20 != 0) {
          v21 = (__int64*)GameData_21c9ac0;
          v22 = GameData_21c9ac8;
          if (GameData_21c9ac0 != GameData_21c9ac8) {
            while (1) {
              v23 = *v21++;
              if ((unsigned int)RelianceSelectMenu_184d1f0_alt1(v20, v23) ==
                  1) {
                break;
              }
              if (v21 == (__int64*)v22) {
                goto LABEL_35;
              }
            }
            *(_BYTE*)(a1 + 1080) = 1;
          }
        }
      }
    LABEL_35:
      game_menu_BasicMenu_Unknown16dd9a0(a1);
      GameRoutine_16e8d70(a1 + 1056);
      RelianceSelectMenu_Unknown88_alt1(a1);
      snd_Fade_Fade_10c830(v31, 0.0f);
      *(struct PseudoSret*)(v30) = snd_play_ff2d0(
          "SE_SYS_RelianceTalk_MarkRead", "SE_SYS_RelianceTalk_MarkRead", v31,
          0, 65537, 0, 0.0f, 1.0f);
      snd_Fade_Destroy_Fade(v31);
      if (v18 != 0) {
        v24 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v24 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v24);
      }
      return 13;
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 RelianceSelectMenu_184d1f0(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  _BOOL4 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  _QWORD v11[7];

  result = 0;
  if (a1 != 0 && a2 != 0) {
    v11[0] = a1;
    v11[1] = a2;
    v11[2] = GameRoutine_8c9820(a1, a2, 0);
    v11[3] = GameRoutine_8c9820(a1, a2, 1);
    v11[4] = GameRoutine_8c9820(a1, a2, 2);
    v11[5] = GameRoutine_8c9820(a1, a2, 3);
    v11[6] = GameRoutine_8c9820(a1, a2, 4);
    result = GameRoutine_8ca200(v11);
    if (result != 0) {
      v5 = result;
      if (*(_BYTE*)(result + 64) == 4) {
        return 0;
      }
      if (game_GameModeData_instance_ != 0 &&
          (v6 = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48),
               *(_QWORD*)(result + 24) + 40LL)) != 0 &&
          *(_DWORD*)(v6 + 32) != 0) {
        v7 = false;
        v8 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_15;
        }
      }
      else {
        v7 = (unsigned __int16)GameRoutine_8c77c0(v5) == 0;
        v8 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_15;
        }
      }
      v9 = game_GameVariableTable_Find(*(_QWORD*)(v8 + 48),
                                       *(_QWORD*)(v5 + 24) + 40LL);
      if (v9 != 0 && *(_DWORD*)(v9 + 32) != 0) {
        v10 = 2;
      LABEL_18:
        if (v7) {
          return v10;
        }
        else {
          return 0;
        }
      }
    LABEL_15:
      if ((GameRoutine_9e60d0(*(_QWORD*)(v5 + 24)) & 1) != 0) {
        v10 = 1;
      }
      else {
        v10 = 2;
      }
      goto LABEL_18;
    }
  }
  return result;
}

bool RelianceSelectMenu_184e500(__int64 a1, __int64 a2)
{
  _BOOL8 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  result = false;
  if (a1 != 0 && a2 != 0) {
    v5 = GameRoutine_8c9820(a1, a2, 0);
    v6 = GameRoutine_8c9820(a1, a2, 1);
    v7 = GameRoutine_8c9820(a1, a2, 2);
    v8 = GameRoutine_8c9820(a1, a2, 3);
    v9 = GameRoutine_8c9820(a1, a2, 4);
    return v5 != 0 && *(_BYTE*)(v5 + 64) != 4 ||
           v6 != 0 && *(_BYTE*)(v6 + 64) != 4 ||
           v7 != 0 && *(_BYTE*)(v7 + 64) != 4 ||
           v8 != 0 && *(_BYTE*)(v8 + 64) != 4 ||
           v9 != 0 && *(_BYTE*)(v9 + 64) != 4;
  }
  return result;
}

__int64 game_menu_RelianceSelectMenu_AddItemList_lambda1_Invoke(__int64 a1,
                                                                __int64 a2)
{
  __int64 v2;
  __int64 v3;

  v2 = *(_QWORD*)(*(_QWORD*)a2 + 104LL);
  if (v2 != 0) {
    v3 = *(_QWORD*)(a1 + 16);
    if (v3 != 0 && *(_QWORD*)(*(_QWORD*)(v2 + 24) + 1672LL) ==
                       *(_QWORD*)(*(_QWORD*)(v3 + 24) + 1672LL)) {
      **(_BYTE**)(a1 + 8) = 1;
    }
  }
  return **(unsigned __int8**)(a1 + 8);
}

__int64 RelianceSelectMenu_1852650(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;
  unsigned int v4;
  unsigned int v5;

  v1 = GameData_2259540;
  if (GameData_2259540 != 0) {
    v2 = *(_QWORD*)(result + 8);
    v3 = GameRoutine_16dd280(v2);
    v4 = v3 - (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 224LL))(v2);
    v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 496LL))(v2);
    return game_gameui_anonymous_ProcGameUIFade_In(v1, v4, 0, v5, 1, v2);
  }
  return result;
}

__int64 game_menu_RelianceSelectMenu_ZLCall_lambda0_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD v34[5];
  _QWORD v35[2];

  v1 = *(_QWORD*)(a1 + 8);
  v32 = 0;
  v33 = 0;
  v30 = 0;
  v31 = 0;
  v2 = *(_QWORD*)(v1 + 1072);
  v28 = nullptr;
  v29 = nullptr;
  if (v2 != 0) {
    v3 = (__int64*)GameData_21c9ac0;
    v4 = GameData_21c9ac8;
    while (v3 != (__int64*)v4) {
      v5 = *v3++;
      RelianceSelectMenu_1852b80(&v28,
                                 *(_QWORD*)(*(_QWORD*)(v1 + 1072) + 392LL), v5);
    }
  }
  RelianceSelectMenu_1852da0_alt1(&v28);
  v6 = v28;
  v7 = v29;
  if (v28 != v29) {
    v8 = v28;
    do {
      if (*((_BYTE*)v8 + 16) != 0) {
        v9 = *v8;
        v10 = v8[1];
        if (*v8 != 0 && v10 != 0) {
          v34[0] = GameRoutine_8c9820(*v8, v8[1], 0);
          v34[1] = GameRoutine_8c9820(v9, v10, 1);
          v34[2] = GameRoutine_8c9820(v9, v10, 2);
          v34[3] = GameRoutine_8c9820(v9, v10, 3);
          v12 = GameRoutine_8c9820(v9, v10, 4);
          v13 = *((unsigned __int8*)v8 + 16);
          v34[4] = v12;
          v14 = v34;
          v15 = v13 + 1;
          do {
            v17 = *v14++;
            v16 = v17;
            if (v17 != 0) {
              game_VariableManager_SetFlag(*(_QWORD*)(v16 + 24) + 40LL, 1);
              v18 = *(_QWORD*)(v16 + 128);
              if (v18 != 0) {
                v35[1] = *(_QWORD*)(v16 + 128);
                v35[0] = game_HashString(v18);
                if (game_GameModeData_instance_ != 0) {
                  GameVariable_828700(game_GameModeData_instance_ + 40, v35, 1);
                }
              }
            }
            --v15;
          } while (v15 != 0);
        }
      }
      v8 += 3;
    } while (v8 != v7);
  }
  v19 = v31;
  if (v31 != v32) {
    GameRoutine_9d5920(v1, &v31);
  }
  v20 = *(_QWORD*)(v1 + 1072);
  *(_BYTE*)(v1 + 1080) = 0;
  if (v20 != 0) {
    v21 = *(_QWORD*)(v20 + 392);
    if (v21 != 0) {
      v23 = (__int64*)GameData_21c9ac0;
      v22 = GameData_21c9ac8;
      if (GameData_21c9ac0 != GameData_21c9ac8) {
        while (1) {
          v24 = *v23++;
          if ((unsigned int)RelianceSelectMenu_184d1f0(v21, v24) == 1) {
            break;
          }
          if (v23 == (__int64*)v22) {
            goto LABEL_27;
          }
        }
        *(_BYTE*)(v1 + 1080) = 1;
      }
    }
  }
LABEL_27:
  game_menu_BasicMenu_Unknown16dd9a0(v1);
  GameRoutine_16e8d70(v1 + 1056);
  RelianceSelectMenu_Unknown88(v1);
  if (v19 != 0) {
    v25 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v25, v19);
  }
  if (v6 != nullptr) {
    v26 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v26, v6);
  }
  return 2;
}

__int64 RelianceSelectMenu_1852da0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v1 = *(_QWORD*)result;
  v2 = *(_QWORD*)(result + 8);
  v3 = (__int64*)result;
  if (*(_QWORD*)result == v2) {
    goto LABEL_69;
  }
  do {
    v5 = *(_QWORD*)v1;
    v6 = *(_QWORD*)(v1 + 8);
    *(_BYTE*)(v1 + 16) = 0;
    result = RelianceSelectMenu_184d1f0(v5, v6);
    if ((_DWORD)result != 1) {
      goto LABEL_5;
    }
    v7 = *(_QWORD*)v1;
    v8 = *(_QWORD*)(v1 + 8);
    if (*(_QWORD*)v1 == 0 || v8 == 0) {
      goto LABEL_5;
    }
    v10 = GameRoutine_8c9820(*(_QWORD*)v1, *(_QWORD*)(v1 + 8), 0);
    v4 = GameRoutine_8c9820(v7, v8, 1);
    v11 = GameRoutine_8c9820(v7, v8, 2);
    v12 = GameRoutine_8c9820(v7, v8, 3);
    result = GameRoutine_8c9820(v7, v8, 4);
    v13 = result;
    if (v10 == 0) {
      goto LABEL_17;
    }
    if (game_GameModeData_instance_ != 0) {
      result = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48),
          *(_QWORD*)(v10 + 24) + 40LL);
      if (result != 0 && *(_DWORD*)(result + 32) != 0) {
        goto LABEL_16;
      }
    }
    if (*(_BYTE*)(v10 + 64) == 4) {
      goto LABEL_16;
    }
    result = GameRoutine_9e60d0(*(_QWORD*)(v10 + 24));
    if ((result & 1) == 0) {
      goto LABEL_5;
    }
    result = GameRoutine_9e60d0(*(_QWORD*)(v10 + 24));
    if ((result & 1) == 0 ||
        (_WORD)(result = game_anonymous_RuntimeTalk_GetCondition(v10)) != 0 &&
            (_DWORD)(result = game_anonymous_RuntimeTalk_GetCondition(v10)) !=
                256) {
    LABEL_16:
      LODWORD(v10) = 0;
    LABEL_17:
      if (v4 == 0) {
        goto LABEL_23;
      }
      goto LABEL_18;
    }
    LODWORD(v10) = 1;
    if (v4 != 0) {
    LABEL_18:
      if (game_GameModeData_instance_ != 0) {
        result = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48),
            *(_QWORD*)(v4 + 24) + 40LL);
        if (result != 0 && *(_DWORD*)(result + 32) != 0) {
          goto LABEL_22;
        }
      }
      if (*(_BYTE*)(v4 + 64) == 4) {
        goto LABEL_22;
      }
      result = GameRoutine_9e60d0(*(_QWORD*)(v4 + 24));
      if ((result & 1) == 0) {
        LOBYTE(v4) = 0;
        goto LABEL_65;
      }
      result = GameRoutine_9e60d0(*(_QWORD*)(v4 + 24));
      if ((result & 1) == 0 ||
          (_WORD)(result = game_anonymous_RuntimeTalk_GetCondition(v4)) != 0 &&
              (_DWORD)(result = game_anonymous_RuntimeTalk_GetCondition(v4)) !=
                  256) {
      LABEL_22:
        LOBYTE(v4) = 0;
      }
      else {
        LODWORD(v10) = 1;
        LOBYTE(v4) = 1;
      }
    }
  LABEL_23:
    if (v11 != 0 &&
        (game_GameModeData_instance_ == 0 ||
         (result = game_GameVariableTable_Find(
              *(_QWORD*)(game_GameModeData_instance_ + 48),
              *(_QWORD*)(v11 + 24) + 40LL)) == 0 ||
         *(_DWORD*)(result + 32) == 0) &&
        *(_BYTE*)(v11 + 64) != 4) {
      result = GameRoutine_9e60d0(*(_QWORD*)(v11 + 24));
      if ((result & 1) == 0) {
        goto LABEL_65;
      }
      result = GameRoutine_9e60d0(*(_QWORD*)(v11 + 24));
      if ((result & 1) != 0) {
        result = game_anonymous_RuntimeTalk_GetCondition(v11);
        if ((_WORD)result == 0 ||
            (_DWORD)(result = game_anonymous_RuntimeTalk_GetCondition(v11)) ==
                256) {
          LOBYTE(v4) = 2;
          LODWORD(v10) = 1;
        }
      }
    }
    if (v12 == 0) {
      goto LABEL_33;
    }
    if (game_GameModeData_instance_ != 0) {
      result = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48),
          *(_QWORD*)(v12 + 24) + 40LL);
      if (result != 0 && *(_DWORD*)(result + 32) != 0) {
        goto LABEL_33;
      }
    }
    if (*(_BYTE*)(v12 + 64) == 4) {
      goto LABEL_33;
    }
    result = GameRoutine_9e60d0(*(_QWORD*)(v12 + 24));
    if ((result & 1) != 0) {
      result = GameRoutine_9e60d0(*(_QWORD*)(v12 + 24));
      if ((result & 1) != 0) {
        result = game_anonymous_RuntimeTalk_GetCondition(v12);
        if ((_WORD)result == 0 ||
            (_DWORD)(result = game_anonymous_RuntimeTalk_GetCondition(v12)) ==
                256) {
          LOBYTE(v4) = 3;
          LODWORD(v10) = 1;
        }
      }
    LABEL_33:
      if (v13 != 0 &&
          (game_GameModeData_instance_ == 0 ||
           (result = game_GameVariableTable_Find(
                *(_QWORD*)(game_GameModeData_instance_ + 48),
                *(_QWORD*)(v13 + 24) + 40LL)) == 0 ||
           *(_DWORD*)(result + 32) == 0) &&
          *(_BYTE*)(v13 + 64) != 4) {
        result = GameRoutine_9e60d0(*(_QWORD*)(v13 + 24));
        if ((result & 1) != 0) {
          result = GameRoutine_9e60d0(*(_QWORD*)(v13 + 24));
          if ((result & 1) != 0) {
            result = game_anonymous_RuntimeTalk_GetCondition(v13);
            if ((_WORD)result == 0 ||
                (_DWORD)(result = game_anonymous_RuntimeTalk_GetCondition(
                             v13)) == 256) {
              LOBYTE(v4) = 4;
            LABEL_4:
              *(_BYTE*)(v1 + 16) = v4;
              goto LABEL_5;
            }
          }
        }
      }
    }
  LABEL_65:
    if ((_DWORD)v10 != 0) {
      goto LABEL_4;
    }
  LABEL_5:
    v1 += 24;
  } while (v1 != v2);
  v1 = *v3;
  v2 = v3[1];
LABEL_69:
  while (v1 != v2) {
    result = GameRoutine_184d360(v1, v3 + 3);
    v1 += 24;
  }
  return result;
}

__int64 game_menu_RelianceSelectMenu_AddItemList_lambda0_Invoke(__int64 result,
                                                                __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v2 = *(_QWORD*)(result + 8);
  v3 = *a2;
  v4 = *(_QWORD*)(v2 + 1072);
  if (*a2 != v4) {
    v5 = *(_DWORD*)(result + 16);
    if (v5 != 0) {
      goto LABEL_5;
    }
    v6 = result;
    result = RelianceSelectMenu_184e500_alt1(*(_QWORD*)(v3 + 392),
                                             *(_QWORD*)(v4 + 392));
    if ((result & 1) != 0) {
      v5 = *(_DWORD*)(v6 + 16);
    LABEL_5:
      v7 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 168, 16, 0);
      v8 = *(_QWORD*)(v2 + 1072);
      v9 = (_QWORD*)v7;
      *(_WORD*)(v7 + 16) = 0;
      *(_DWORD*)(v7 + 40) = 0;
      *(_QWORD*)(v7 + 64) = 0;
      *(_QWORD*)(v7 + 72) = 0;
      *(_QWORD*)(v7 + 48) = 0;
      *(_QWORD*)(v7 + 56) = 0;
      *(_QWORD*)(v7 + 88) = v3;
      *(_DWORD*)(v7 + 96) = v5;
      *(_DWORD*)(v7 + 100) = 0;
      *(_WORD*)(v7 + 80) = 257;
      *(_BYTE*)(v7 + 82) = 1;
      *(_QWORD*)v7 = game_menu_anonymous_RelianceUnitGridMenuItem_vtable;
      *(_QWORD*)(v7 + 8) = 0;
      RelianceMenuItem_1851ae0((__int64*)v7);
      v9[13] = 0;
      v9[14] = 0;
      v9[15] = 0;
      v9[16] = 0;
      v9[17] = 0;
      v9[18] = 0;
      v9[19] = 0;
      *(_QWORD*)((char*)v9 + 157) = 0;
      *v9 = game_menu_anonymous_RelianceMenuItem_vtable;
      if (v3 != 0) {
        v12 = *(_QWORD*)(v3 + 392);
        if (v8 != 0) {
        LABEL_7:
          v10 = *(_QWORD*)(v8 + 392);
        LABEL_11:
          v11 = v10;
          GameRoutine_8ca350(v9 + 13, &v12, &v11);
          return BasicMenuCursor_16e0c00(v2, v9);
        }
      }
      else {
        v12 = 0;
        if (v8 != 0) {
          goto LABEL_7;
        }
      }
      v10 = 0;
      goto LABEL_11;
    }
  }
  return result;
}

__int64 game_menu_RelianceSelectMenu_SortAndFilter_lambda0_Invoke(__int64 a1,
                                                                  _QWORD* a2,
                                                                  __int64* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64* v15;
  unsigned __int64* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  bool v20;
  char v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  __int64 v25;
  unsigned __int64* v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64* v29;
  unsigned __int64* v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  bool v34;
  __int64 v35;
  __int64 v36;
  _QWORD v38[3];
  unsigned __int64* v39;
  __int64 v40;
  __int64 v41;

  v3 = *a2;
  v4 = *a3;
  if (*(_QWORD*)(*a2 + 88LL) == 0 || *(_QWORD*)(*a3 + 88) == 0) {
    v6 = *(unsigned __int8*)(v3 + 164);
    v7 = *(_QWORD*)(v4 + 104);
    v8 = *(_QWORD*)(v3 + 104);
    v40 = 0;
    v41 = 0;
    v39 = nullptr;
    GameRoutine_19ef790(&v39, v6, 8);
    GameRoutine_19ef790(&v39, *(unsigned __int16*)(v8 + 16) | 0x80000000LL, 32);
    v9 = *(unsigned __int8*)(v4 + 164);
    v10 = v39;
    v11 = v40;
    v40 = 0;
    v41 = 0;
    v39 = nullptr;
    GameRoutine_19ef790(&v39, v9, 8);
    GameRoutine_19ef790(&v39, *(unsigned __int16*)(v7 + 16) | 0x80000000LL, 32);
    v12 = (v11 - (__int64)v10) >> 3;
    v13 = (v40 - (__int64)v39) >> 3;
    if (v13 >= v12) {
      v14 = (v11 - (__int64)v10) >> 3;
    }
    else {
      v14 = (v40 - (__int64)v39) >> 3;
    }
    if (v14 < 1) {
    LABEL_13:
      v21 = v12 < v13;
      if (v39 == nullptr) {
      LABEL_17:
        if (v10 == nullptr) {
          return v21 & 1;
        }
        v23 = fw_memory_g_heap_manager;
        goto LABEL_44;
      }
    }
    else {
      v15 = v10;
      v16 = v39;
      while (1) {
        v18 = *v15++;
        v17 = v18;
        v19 = *v16++;
        v20 = v17 >= v19;
        if (v17 != v19) {
          break;
        }
        if (--v14 == 0) {
          goto LABEL_13;
        }
      }
      v21 = !v20;
      if (v39 == nullptr) {
        goto LABEL_17;
      }
    }
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v22,
                                  v39);
    goto LABEL_17;
  }
  v24 = *(unsigned __int8*)(a1 + 8);
  RelianceMenuItem_18537d0(&v39, *(unsigned __int8*)(a1 + 8), *a2);
  RelianceMenuItem_18537d0(v38, v24, v4);
  v10 = v39;
  v25 = v40 - (_QWORD)v39;
  v26 = (unsigned __int64*)v38[0];
  v27 = v38[1] - v38[0];
  if (v40 - (_QWORD)v39 == v38[1] - v38[0] &&
      (unsigned int)memcmp(v39, v38[0], v40 - (_QWORD)v39) == 0) {
    v21 = GameRoutine_15b75f0(v3, v4);
  }
  else {
    if (v27 >> 3 >= v25 >> 3) {
      v28 = v25 >> 3;
    }
    else {
      v28 = v27 >> 3;
    }
    if (v28 < 1) {
    LABEL_28:
      v21 = v25 >> 3 < v27 >> 3;
    }
    else {
      v29 = v10;
      v30 = v26;
      while (1) {
        v32 = *v29++;
        v31 = v32;
        v33 = *v30++;
        v34 = v31 >= v33;
        if (v31 != v33) {
          break;
        }
        if (--v28 == 0) {
          goto LABEL_28;
        }
      }
      v21 = !v34;
    }
  }
  if (v26 != nullptr) {
    v35 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v35 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v35, v26);
  }
  if (v10 != nullptr) {
    v23 = fw_memory_g_heap_manager;
  LABEL_44:
    v36 = 128;
    if (*(_QWORD*)(v23 + 200) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free(v23 + v36, v10);
  }
  return v21 & 1;
}

#pragma GCC visibility pop
