#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

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

#pragma GCC visibility pop
