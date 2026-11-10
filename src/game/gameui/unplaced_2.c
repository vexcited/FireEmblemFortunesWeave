#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
LayoutAccessor_1560070(__attribute__((swift_indirect_result)) void*, __int64*,
                       __int64);
__int64 Alignment_56b600(_QWORD, _QWORD);
__int64 ControlCreator_13633c0(void);
__int64 GameRoutine_1326a40(_QWORD);
__int64 GameRoutine_155f760(__int64, __int64, __int64);
__int64 GameRoutine_156c5d0(__int64, __int64, char);
__int64 GameRoutine_156c910(__int64 result, const char*, int, ...);
__int64 GameRoutine_174d580(_QWORD, _QWORD, _QWORD, long double);
__int64 GameRoutine_1841dc0(__int64 result, unsigned int, __int64);
__int64 GameRoutine_190a0c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameSubquestData_125b8e0(_QWORD*, const char*, unsigned __int8);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 LayoutAccessor_1562060(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(__int64 result, __int64);
__int64 LayoutAccessor_1562cf0_alt1(_QWORD,
                                    _QWORD) __asm__("LayoutAccessor_1562cf0");
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 Pane_58f8a0(_QWORD, _QWORD, _QWORD);
__int64 Pane_58fac0(_QWORD, _QWORD);
__int64 SpotMgr_132ffa0(_QWORD);
__int64 UnitItemList_710640(_QWORD);
__int64 UnitItemList_710b30(_QWORD);
__int64 Util_15792c0(__int64*, unsigned __int16*, char, unsigned __int8,
                     __int64, __int64, __int64, int);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HasActiveSkill_843420(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_util_Format(const char*, ...);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strchr(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
char* game_util_Format_alt1(__int64, __int64, __int64, __int64, __int64,
                            __int64, __int64, __int64,
                            char) __asm__("game_util_Format");
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212da30;
extern _UNKNOWN GameData_1a8efcc;
extern _UNKNOWN GameData_1a95031;
extern _UNKNOWN GameData_1ac6c8b;
extern _UNKNOWN game_g_random_mutex;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* game_g_empty_item_ptr;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_212d690;
extern __int64 GameData_2131918[18];
extern __int64 GameData_21ca240;
extern __int64 GameData_21ca248;
extern __int64 game_GameModeData_instance_;
extern __int64 ui_Manager_instance_;
extern char* GameData_204f2e8[12];
extern char GameData_1a9f09e;
extern const char GameData_1afaabd[];
float ui_LayoutAccessor_GetPaneTranslate(_QWORD, _QWORD);
void GameRoutine_156c240(__int64*);
void HelpQuestInfo_15d4a40(__int64, __int64);
void LayoutAccessor_155e830(__int64*, char);
__int64 game_gameui_1590440(__int64 result, __int64** a2);
__int64 game_gameui_1594340(__int64 a1, __int64 a2);
__int64 game_gameui_1596060(__int64 a1, unsigned int a2);
void game_gameui_1596140(__int64 a1, const char* a2);
void game_gameui_159b580(__int64 a1, _BYTE* a2, __int64 a3, _DWORD* a4);
void game_gameui_15d7960(_QWORD** a1, _QWORD* a2, __int64 a3, __int64 a4,
                         unsigned int a5);

__int64 game_gameui_1590440(__int64 result, __int64** a2)
{
  __int64* v2;
  __int64* v3;
  int v5;
  int v6;
  int v7;
  int v8;
  _DWORD* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  float v16;
  __int64* v17;
  __int64* i;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  long double v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD v29[2];
  __int64 v30;
  __int64 v31;
  __int64* v32;

  v3 = *a2;
  v2 = a2[1];
  if (v2 == *a2) {
    return result;
  }
  v32 = (__int64*)result;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = (_DWORD*)game_g_shared_system_skills_ptr;
  do {
    v10 = *v3;
    v11 = (unsigned int)*v9;
    v12 = *(_QWORD*)(*v3 + 1752);
    v13 = *(_QWORD*)(*v3 + 1744);
    LODWORD(v30) = *v9 & 0xFFF;
    if (((v11 >> 5) & 0x7F) + 1 > (v12 - v13) >> 2 ||
        ((*(_DWORD*)(v13 + 4 * ((v11 >> 5) & 0x7F)) >> v11) & 1) == 0 ||
        (game_HasActiveSkill_843420(&v30, v10 + 1744) & 1) == 0 ||
        ((v14 = *(_QWORD*)(v10 + 440)) == 0 ? (v15 = 9)
                                            : (v15 = *(_BYTE*)(v14 + 16)),
         ((1 << v15) & 0xF1) == 0)) {
      v6 += *(unsigned __int8*)(v10 + 498);
      v5 += UnitItemList_710640(v10 + 828);
      v8 += UnitItemList_710b30(v10 + 828);
      ++v7;
    }
    ++v3;
  } while (v3 != v2);
  if (v6 < 1) {
    v17 = *a2;
    for (i = a2[1]; v17 != i; ++v7) {
      v19 = *v17++;
      v6 += *(unsigned __int8*)(v19 + 498);
      v5 += UnitItemList_710640(v19 + 828);
      v8 += UnitItemList_710b30(v19 + 828);
    }
  }
  if (v7 >= 1) {
    v6 /= v7;
  }
  if (v8 < 1) {
    v16 = 0.0;
  }
  else {
    v16 = (float)v5 / (float)(unsigned int)v8;
    v5 = 100 * v5 / v8;
  }
  v20 = v32;
  v21 = ui_LayoutAccessor_FindPane(v32, "T_MagicNum");
  if (v21 != 0) {
    v22 = __dynamic_cast(v21, GameData_212d670[0], GameData_212d690, 0);
    if (v22 != 0) {
      GameRoutine_156c910(v22, "%d", 1, (unsigned int)v5);
    }
  }
  LayoutAccessor_1560070((void*)(&v30), v20, (__int64)"L_Gauge_Magic");
  if (v31 != 0) {
    v23 = std___1___shared_weak_count_lock(v31);
    if (v23 != 0) {
      v25 = v30;
    }
    else {
      v25 = 0;
    }
    if (v31 != 0) {
      std___1___shared_weak_count___release_weak(v31);
    }
    if (v25 != 0) {
      v29[0] = v25;
      v29[1] = v23;
      if (v23 != 0) {
        *(float*)&v24 = v16;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 16), 1u,
                                  memory_order_relaxed);
        GameRoutine_174d580(v29, "Gauge", 5, v24);
        std___1___shared_weak_count___release_weak(v23);
        goto LABEL_35;
      }
      *(float*)&v24 = v16;
      GameRoutine_174d580(v29, "Gauge", 5, v24);
    }
    else if (v23 != 0) {
    LABEL_35:
      if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
        std___1___shared_weak_count___release_weak(v23);
      }
    }
  }
  v26 = ui_LayoutAccessor_FindPane(v20, "T_LvNum");
  if (v26 != 0) {
    v27 = __dynamic_cast(v26, GameData_212d670[0], GameData_212d690, 0);
    if (v27 != 0) {
      GameRoutine_156c910(v27, "%d", 1, (unsigned int)v6);
    }
  }
  result = ui_LayoutAccessor_FindAlignment(v20, "A_LV");
  if (result != 0) {
    return Alignment_56b600(result, v28);
  }
  return result;
}

__int64 game_gameui_1594340(__int64 a1, __int64 a2)
{
  int v4;
  int v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64* v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
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
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned int v38;
  __int64 v39;
  __int64 v40;
  const char* v41;
  __int64 v42;
  __int64 v43;
  const char* v44;
  unsigned int v45;
  __int64 v46;
  __int64* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64* v51;
  __int64* v52;
  int v53;
  unsigned int v54;
  unsigned int v55;
  int v56;
  __int64 v57;
  __int64* v58;
  __int64* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64* v63;
  int v64;
  unsigned int v65;
  unsigned int v66;
  int v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  _QWORD v78[2];
  unsigned __int64 v79;
  unsigned __int64 v80;
  int v81;
  int v82;
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
  __int64 v94;
  __int64 v95;

  if (*(_BYTE*)(a2 + 274) != 0) {
    v4 = *(char*)(a2 + 273) + *(unsigned __int8*)(a2 + 274);
  }
  else {
    v5 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v5 = *(_DWORD*)(game_GameModeData_instance_ + 68);
    }
    v4 = v5 + *(char*)(a2 + 273);
  }
  if (v4 <= 1) {
    v4 = 1;
  }
  if (v4 >= 99) {
    v6 = 99;
  }
  else {
    v6 = v4;
  }
  v7 = ui_LayoutAccessor_FindPane(a1, "T_Lv");
  if (v7 != 0) {
    v8 = __dynamic_cast(v7, GameData_212d670[0], GameData_212d690, 0);
    if (v8 != 0) {
      GameRoutine_156c910(v8, "%d", 1, v6);
    }
  }
  v9 = msg_MessageManager_instance__ptr[0];
  v10 = GameData_212e348;
  if (*(_BYTE*)(a2 + 272) == 1) {
    v11 = (__int64*)GameData_21ca240;
    if (GameData_21ca240 == GameData_21ca248) {
      v12 = 0;
    }
    else {
      v12 = 0;
      do {
        v13 = *v11++;
        v12 += (*(_WORD*)(v13 + 50) & 0x20) != 0;
      } while (v11 != (__int64*)GameData_21ca248);
    }
    v18 = *msg_MessageManager_instance__ptr[0];
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
    v93 = -1;
    v94 = -1;
    v78[0] = GameData_212e348 + 2;
    v78[1] = 0xFFFF0001FFFF0000LL;
    v79 = 0xFFFF0004FFFF0002LL;
    v80 = 0xFFFF0006FFFF0005LL;
    v95 = 8;
    v81 = -65529;
    v82 = -65528;
    v19 = GameRoutine_a4dbe0(v18, "MID_BattleHintMenu_SortiePlayer", 0, v78);
    if (v19 != 0) {
      v20 = v19;
      v21 = ui_LayoutAccessor_FindTextBox(a1, "T_SortieUnit");
      if (v21 != 0) {
        GameRoutine_156c5d0(v21, v20, 0);
      }
    }
    v23 = GameData_21ca240;
    v22 = GameData_21ca248;
    v24 = ui_LayoutAccessor_FindPane(a1, "T_SortieUnitNum");
    if (v24 != 0) {
      v25 = __dynamic_cast(v24, GameData_212d670[0], GameData_212d690, 0);
      if (v25 != 0) {
        GameRoutine_156c910(v25, "%d", 1,
                            (unsigned int)((unsigned __int64)(v22 - v23) >> 3) -
                                v12);
      }
    }
    ui_LayoutAccessor_SetPaneVisible(a1, "T_GuestUnit", v12 > 0);
    ui_LayoutAccessor_SetPaneVisible(a1, "T_GuestUnitNum", v12 > 0);
    if (v12 >= 1) {
      v26 = *v9;
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
      v93 = -1;
      v94 = -1;
      v78[0] = v10 + 2;
      v78[1] = 0xFFFF0001FFFF0000LL;
      v79 = 0xFFFF0004FFFF0002LL;
      v80 = 0xFFFF0006FFFF0005LL;
      v95 = 8;
      v81 = -65529;
      v82 = -65528;
      v27 = GameRoutine_a4dbe0(v26, "MID_BattleHintMenu_SortieGuest", 0, v78);
      if (v27 != 0) {
        v28 = v27;
        v29 = ui_LayoutAccessor_FindTextBox(a1, "T_GuestUnit");
        if (v29 != 0) {
          GameRoutine_156c5d0(v29, v28, 0);
        }
      }
      v30 = ui_LayoutAccessor_FindPane(a1, "T_GuestUnitNum");
      if (v30 != 0) {
        v31 = __dynamic_cast(v30, GameData_212d670[0], GameData_212d690, 0);
        if (v31 != 0) {
          GameRoutine_156c910(v31, "%d", 1, (unsigned int)v12);
        }
      }
    }
    v32 = ui_LayoutAccessor_FindAlignment(a1, "A_SortieUnit");
    if (v32 != 0) {
      Alignment_56b600(v32, v33);
    }
    v34 = ui_LayoutAccessor_FindAlignment(a1, "A_GuestUnit");
    if (v34 != 0) {
      Alignment_56b600(v34, v35);
    }
    v36 = ui_LayoutAccessor_FindAlignment(a1, "A_Unit");
    if (v36 != 0) {
      Alignment_56b600(v36, v37);
    }
  }
  else {
    v14 = *msg_MessageManager_instance__ptr[0];
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
    v93 = -1;
    v94 = -1;
    v78[0] = GameData_212e348 + 2;
    v78[1] = 0xFFFF0001FFFF0000LL;
    v79 = 0xFFFF0004FFFF0002LL;
    v80 = 0xFFFF0006FFFF0005LL;
    v95 = 8;
    v81 = -65529;
    v82 = -65528;
    v15 = GameRoutine_a4dbe0(v14, "MID_Sys_ValueEmpty", 0, v78);
    if (v15 != 0) {
      v16 = v15;
      v17 = ui_LayoutAccessor_FindTextBox(a1, "T_SortieUnit");
      if (v17 != 0) {
        GameRoutine_156c5d0(v17, v16, 0);
      }
    }
  }
  LayoutAccessor_1562060(a1, "T_ClassRank", *(_QWORD*)(a2 + 280));
  LayoutAccessor_1562060(a1, "T_WeaponRank", *(_QWORD*)(a2 + 288));
  v38 = *(unsigned __int16*)(a2 + 304);
  v39 = game_util_Format("L_Class%02d", 0);
  v40 = LayoutAccessor_155fbe0(a1, v39);
  if (v38 != 0) {
    v41 = **(const char***)(a2 + 312);
  }
  else {
    v41 = "MID_Sys_ValueEmptyLong";
  }
  LayoutAccessor_1562060(v40, "T_Txt", v41);
  v42 = game_util_Format("L_Class%02d", 1);
  v43 = LayoutAccessor_155fbe0(a1, v42);
  if (v38 < 2) {
    v44 = "MID_Sys_ValueEmptyLong";
  }
  else {
    v44 = *(const char**)(*(_QWORD*)(a2 + 312) + 8LL);
  }
  LayoutAccessor_1562060(v43, "T_Txt", v44);
  v45 = *(unsigned __int16*)(a2 + 320);
  v46 = game_util_Format("L_Item%02d", 0);
  v47 = (__int64*)LayoutAccessor_155fbe0(a1, v46);
  if (v45 != 0) {
    v48 = *(_QWORD*)(a2 + 328);
    v78[0] = 0;
    v49 = *(_QWORD*)(v48 + 8);
    if (v49 != 0) {
      v50 = *(unsigned __int16*)(v49 + 16);
      HIDWORD(v78[0]) = 1;
      LOWORD(v78[0]) = v50;
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                               8 * v50) +
                    73LL) == 17) {
        v51 = v47;
        nn_os_LockMutex(&game_g_random_mutex);
        v52 = game_map_MapRandom_instance__ptr[0];
        v53 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL));
        v54 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
        v55 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
              (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
        *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
            *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
        *((_DWORD*)v52 + 1) = v53;
        v56 = (v55 >> 8) ^ (v54 >> 19) ^ v55 ^ v54;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v52) = v54;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v52 + 4) = v56;
        nn_os_UnlockMutex(&game_g_random_mutex);
        v47 = v51;
        HIDWORD(v78[0]) =
            (16 * ((_WORD)v56 -
                   1000 * (unsigned __int16)((v56 & 0x7FFFFFFFu) / 0x3E8)) +
             16) &
                0x3FF0 |
            1;
      }
    }
    Util_15792c0(v47, (unsigned __int16*)v78, 0, 1u, 0, (__int64)"L_Icon",
                 (__int64)"T_Txt", 1);
  }
  else {
    v73 = v47;
    Util_15792c0(v47, (unsigned __int16*)game_g_empty_item_ptr, 0, 1u, 0,
                 (__int64)"L_Icon", (__int64)"T_Txt", 1);
    ui_LayoutAccessor_SetPaneVisible(v73, "T_Txt", 1);
    v74 = *v9;
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
    v93 = -1;
    v94 = -1;
    v78[0] = v10 + 2;
    v78[1] = 0xFFFF0001FFFF0000LL;
    v79 = 0xFFFF0004FFFF0002LL;
    v80 = 0xFFFF0006FFFF0005LL;
    v95 = 8;
    v81 = -65529;
    v82 = -65528;
    v75 = GameRoutine_a4dbe0(v74, "MID_Sys_ValueEmptyLong", 0, v78);
    if (v75 != 0) {
      v76 = v75;
      v77 = ui_LayoutAccessor_FindTextBox(v73, "T_Txt");
      if (v77 != 0) {
        GameRoutine_156c5d0(v77, v76, 0);
      }
    }
  }
  v57 = game_util_Format("L_Item%02d", 1);
  v58 = (__int64*)LayoutAccessor_155fbe0(a1, v57);
  v59 = v58;
  if (v45 <= 1) {
    Util_15792c0(v58, (unsigned __int16*)game_g_empty_item_ptr, 0, 1u, 0,
                 (__int64)"L_Icon", (__int64)"T_Txt", 1);
    ui_LayoutAccessor_SetPaneVisible(v59, "T_Txt", 1);
    v68 = *v9;
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
    v93 = -1;
    v94 = -1;
    v78[0] = v10 + 2;
    v78[1] = 0xFFFF0001FFFF0000LL;
    v79 = 0xFFFF0004FFFF0002LL;
    v80 = 0xFFFF0006FFFF0005LL;
    v95 = 8;
    v81 = -65529;
    v82 = -65528;
    v69 = GameRoutine_a4dbe0(v68, "MID_Sys_ValueEmptyLong", 0, v78);
    if (v69 != 0) {
      v70 = v69;
      v71 = ui_LayoutAccessor_FindTextBox(v59, "T_Txt");
      if (v71 != 0) {
        GameRoutine_156c5d0(v71, v70, 0);
      }
    }
  }
  else {
    v60 = *(_QWORD*)(a2 + 328);
    v78[0] = 0;
    v61 = *(_QWORD*)(v60 + 24);
    if (v61 != 0) {
      v62 = *(unsigned __int16*)(v61 + 16);
      HIDWORD(v78[0]) = 1;
      LOWORD(v78[0]) = v62;
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                               8 * v62) +
                    73LL) == 17) {
        nn_os_LockMutex(&game_g_random_mutex);
        v63 = game_map_MapRandom_instance__ptr[0];
        v64 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL));
        v65 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
        v66 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
              (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
        *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
            *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
        *((_DWORD*)v63 + 1) = v64;
        v67 = (v66 >> 8) ^ (v65 >> 19) ^ v66 ^ v65;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v63) = v65;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v63 + 4) = v67;
        nn_os_UnlockMutex(&game_g_random_mutex);
        HIDWORD(v78[0]) =
            (16 * ((_WORD)v67 -
                   1000 * (unsigned __int16)((v67 & 0x7FFFFFFFu) / 0x3E8)) +
             16) &
                0x3FF0 |
            1;
      }
    }
    Util_15792c0(v59, (unsigned __int16*)v78, 0, 1u, 0, (__int64)"L_Icon",
                 (__int64)"T_Txt", 1);
  }
  return LayoutAccessor_1562060(a1, "T_Advice", *(_QWORD*)(a2 + 296));
}

__int64 game_gameui_1596060(__int64 a1, unsigned int a2)
{
  __int64* v4;
  const char* v5;
  __int64 v6;

  *(_DWORD*)(a1 + 16) = 1;
  if (*(_DWORD*)(a1 + 8) == 0) {
    v4 = *(__int64**)a1;
    if (a2 >= 2) {
      v5 = "Default";
    }
    else {
      v5 = "MainQuest";
    }
    LayoutAccessor_1562cf0((__int64)v4, (__int64)v5);
  }
  v6 = ui_LayoutAccessor_FindPane_alt1(*(__int64**)a1, (__int64)"IconQuest");
  if (v6 != 0) {
    v6 = __dynamic_cast(v6, GameData_212d670[0], GameData_212d678[0], 0);
  }
  return GameRoutine_1841dc0(v6, a2, *(unsigned int*)(a1 + 8));
}

void game_gameui_1596140(__int64 a1, const char* a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  int v6;
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
  const char* v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  _QWORD v34[2];

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  *(_BYTE*)(a1 + 12) = 0;
  v3 = *(_QWORD**)GameData_212c7b0[0];
  if (game_GameModeData_instance_ != 0) {
    v4 = GameSubquestData_125b8e0(v3, a2,
                                  *(_BYTE*)(game_GameModeData_instance_ + 15)),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (v4 != 0) {
      goto LABEL_3;
    }
  LABEL_13:
    LayoutAccessor_155e830(*(__int64**)a1, 0),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    *(_BYTE*)(a1 + 12) = 1;
    return;
  }
  v4 = GameSubquestData_125b8e0(v3, a2, 0),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if (v4 == 0) {
    goto LABEL_13;
  }
LABEL_3:
  v5 = v4;
  v34[0] = GameData_2131918[0] + 16;
  v34[1] = v4;
  HelpQuestInfo_15d4a40(a1, (__int64)v34),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v6 = *(unsigned __int8*)(*(_QWORD*)v5 + 112LL);
  switch (v6) {
  case 7:
    *(_DWORD*)(a1 + 16) = 1;
    if (*(_DWORD*)(a1 + 8) == 0) {
      LayoutAccessor_1562cf0(*(_QWORD*)a1, (__int64)"Default"),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    v22 = ui_LayoutAccessor_FindPane_alt1(*(__int64**)a1, (__int64)"IconQuest"),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (v22 != 0) {
      v23 = __dynamic_cast(v22, GameData_212d670[0], GameData_212d678[0], 0),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if (v23 != 0) {
        v24 = *(unsigned int*)(a1 + 8);
        v16 = v23;
        if ((unsigned int)v24 > 3) {
          v18 = &GameData_1a9f09e;
          v17 = "Sub_Show";
        }
        else {
          v17 = "Sub_Show";
          v18 = GameData_204f2e8[v24];
        }
        goto LABEL_45;
      }
    }
    break;
  case 6:
    *(_DWORD*)(a1 + 16) = 1;
    if (*(_DWORD*)(a1 + 8) == 0) {
      LayoutAccessor_1562cf0(*(_QWORD*)a1, (__int64)"Default"),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    v19 = ui_LayoutAccessor_FindPane_alt1(*(__int64**)a1, (__int64)"IconQuest"),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (v19 != 0) {
      v20 = __dynamic_cast(v19, GameData_212d670[0], GameData_212d678[0], 0),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if (v20 != 0) {
        v21 = *(unsigned int*)(a1 + 8);
        v16 = v20;
        if ((unsigned int)v21 > 3) {
          v18 = &GameData_1a9f09e;
          v17 = "Sub_Procurement";
        }
        else {
          v17 = "Sub_Procurement";
          v18 = GameData_204f2e8[v21];
        }
        goto LABEL_45;
      }
    }
    break;
  case 5:
    *(_DWORD*)(a1 + 16) = 1;
    if (*(_DWORD*)(a1 + 8) == 0) {
      LayoutAccessor_1562cf0(*(_QWORD*)a1, (__int64)"Default"),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    v7 = ui_LayoutAccessor_FindPane_alt1(*(__int64**)a1, (__int64)"IconQuest"),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (v7 != 0) {
      v8 = __dynamic_cast(v7, GameData_212d670[0], GameData_212d678[0], 0),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if (v8 != 0) {
        v15 = *(unsigned int*)(a1 + 8);
        v16 = v8;
        if ((unsigned int)v15 > 3) {
          v18 = &GameData_1a9f09e;
          v17 = "Sub_Challenge";
        }
        else {
          v17 = "Sub_Challenge";
          v18 = GameData_204f2e8[v15];
        }
      LABEL_45:
        v33 = game_util_Format_alt1((__int64)v18, (__int64)v17, v9, v10, v11,
                                    v12, v13, v14, v34[0]),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        Manager_136a920(ui_Manager_instance_ + 1264, v16, 0, 7u, v33),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
    }
    break;
  default:
    v25 = *(unsigned __int8*)(*(_QWORD*)v5 + 113LL);
    *(_DWORD*)(a1 + 16) = 1;
    v26 = *(_DWORD*)(a1 + 8);
    if (v25 == 1) {
      if (v26 == 0) {
        LayoutAccessor_1562cf0(*(_QWORD*)a1, (__int64)"Default"),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      v27 =
          ui_LayoutAccessor_FindPane_alt1(*(__int64**)a1, (__int64)"IconQuest"),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if (v27 != 0) {
        v28 = __dynamic_cast(v27, GameData_212d670[0], GameData_212d678[0], 0),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        if (v28 != 0) {
          v29 = *(unsigned int*)(a1 + 8);
          v16 = v28;
          if ((unsigned int)v29 > 3) {
            v18 = &GameData_1a9f09e;
            v17 = "Sub_Kindness";
          }
          else {
            v17 = "Sub_Kindness";
            v18 = GameData_204f2e8[v29];
          }
          goto LABEL_45;
        }
      }
    }
    else {
      if (v26 == 0) {
        LayoutAccessor_1562cf0(*(_QWORD*)a1, (__int64)"Default"),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      v30 =
          ui_LayoutAccessor_FindPane_alt1(*(__int64**)a1, (__int64)"IconQuest"),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if (v30 != 0) {
        v31 = __dynamic_cast(v30, GameData_212d670[0], GameData_212d678[0], 0),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        if (v31 != 0) {
          v32 = *(unsigned int*)(a1 + 8);
          v16 = v31;
          if ((unsigned int)v32 > 3) {
            v18 = &GameData_1a9f09e;
          }
          else {
            v18 = GameData_204f2e8[v32];
          }
          v17 = "Sub";
          goto LABEL_45;
        }
      }
    }
    break;
  }
}

void game_gameui_159b580(__int64 a1, _BYTE* a2, __int64 a3, _DWORD* a4)
{
  int v4;
  __int64 v6;
  __int64 v10;
  int8x16_t v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  _BOOL4 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 i;
  __int64 v25;
  float v26;
  unsigned int v27;
  int v28;
  float32x4_t* v29;
  float32x4_t* v30;
  float32x4_t v31;
  unsigned __int64 v32;
  int v33;
  float v34;
  float v35;
  float32x2_t v36;
  unsigned __int32 v37;
  __int64 v38;
  float32x2_t v39;
  float v40;
  float32x2_t v41;
  float32x4_t v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _BOOL4 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  float32x2_t v52;
  float32x2_t v53;
  float32x4_t v54;
  float32x4_t v55;
  __int64 v56;
  void* v57;

  v6 = *(_QWORD*)(a1 + 8);
  if (v6 == 0 || (v10 = std___1___shared_weak_count_lock(v6)) == 0) {
    *a2 = 0;
    return;
  }
  v12 = *(__int64**)a1;
  v13 = v10;
  if (v12 == nullptr) {
    *a2 = 0;
    goto LABEL_59;
  }
  if (v12[2] == 0) {
    goto LABEL_37;
  }
  v14 = v12[1];
  if (v14 == 0) {
    goto LABEL_37;
  }
  v15 = std___1___shared_weak_count_lock(v14);
  if (v15 == 0) {
    goto LABEL_17;
  }
  v17 = *v12;
  if (*v12 != 0) {
    v4 = *(unsigned __int8*)(v17 + 24);
    v18 = v17 + 152;
    if (v4 == 0) {
      v18 = 0;
    }
    v19 = v18 != v12[2];
  }
  else {
    v19 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v20 = v15;
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak(v20);
  }
  if (!v19) {
    if ((v4 & 1) == 0) {
      goto LABEL_37;
    }
  }
  else {
  LABEL_17:
    v21 = v12[1];
    if (v21 == 0 || *(_QWORD*)(v21 + 8) == -1) {
      goto LABEL_37;
    }
  }
  v22 = v12[2];
  if (v22 == 0) {
    goto LABEL_37;
  }
  v23 = *(_QWORD*)(v22 + 24);
  if (v23 == 0) {
    goto LABEL_37;
  }
  for (i = v23; i != 0; i = *(_QWORD*)(i + 24)) {
    if ((*(_BYTE*)(i + 88) & 1) == 0) {
      LOBYTE(v28) = 0;
      goto LABEL_36;
    }
  }
  LOBYTE(v16) = *(_BYTE*)(v23 + 89);
  v25 = *(_QWORD*)(v23 + 24);
  v26 = (float)v16;
  if (v25 != 0) {
    while (1) {
      if ((*(_BYTE*)(v25 + 88) & 2) != 0) {
        v27 = *(unsigned __int8*)(v25 + 89);
        if (v27 == 255) {
          goto LABEL_28;
        }
        if (*(_BYTE*)(v25 + 89) == 0) {
          break;
        }
        v26 = v26 * (float)((float)v27 * 0x1.0101020000000p-8);
      }
    LABEL_28:
      v25 = *(_QWORD*)(v25 + 24);
      if (v25 == 0) {
        goto LABEL_35;
      }
    }
    v26 = 0.0;
  }
LABEL_35:
  v28 = (int)v26;
LABEL_36:
  *a2 = v28;
LABEL_37:
  v57 = &GameData_1a95031;
  v56 = game_HashString(&GameData_1a95031);
  v29 = (float32x4_t*)SpotMgr_132ffa0(&v56);
  v57 = &GameData_1a8efcc;
  v56 = game_HashString(&GameData_1a8efcc);
  v30 = (float32x4_t*)SpotMgr_132ffa0(&v56);
  if (v29 != nullptr && v30 != nullptr) {
    v31 = vsubq_f32(v29[2], v30[2]);
    v11 = vmulq_f32(v31, v31);
    LANES128(v11).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v11, v11, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0])))
            .n64_u64[0];
    LANES128(v11).n128_u64[0] =
        LANES64_OF(vsqrt_f32(vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0]))))
            .n64_u64[0];
    if (LANES128(v11).n128_f32[0] != 0.0) {
      LANES64(v53).n64_u64[0] = LANES128(v11).n128_u64[0];
      v54 = v29[2];
      *(float*)&v32 = ui_LayoutAccessor_GetPaneTranslate(v12, "N_Marker00");
      HIDWORD(v32) = v33;
      v35 = v34;
      LANES64(v52).n64_u64[0] = v32;
      LANES64(v36).n64_f32[0] =
          ui_LayoutAccessor_GetPaneTranslate(v12, "N_Marker01");
      LANES64(v36).n64_u32[1] = v37;
      v38 = 0;
      LANES64(v39).n64_u64[0] = LANES64_OF(vsub_f32(v52, v36)).n64_u64[0];
      LANES64(v41).n64_u64[0] =
          LANES64_OF(
              vadd_f32(
                  vmul_f32(
                      COERCE_AS(float32x2_t, COERCE_UNSIGNED_INT(v35 - v40)),
                      COERCE_AS(float32x2_t, COERCE_UNSIGNED_INT(v35 - v40))),
                  vmul_f32(v39, v39)))
              .n64_u64[0];
      LANES128(v11).n128_u64[0] =
          LANES64_OF(vdiv_f32(vsqrt_f32(vpadd_f32(v41, v41)), v53)).n64_u64[0];
      *a4 = LANES128(v11).n128_u32[0];
      LANES128(v11).n128_u64[1] = LANES128(v11).n128_u64[0];
      v42 = vmulq_f32(v54, v11);
      if (v12[2] != 0) {
        v43 = v12[1];
        if (v43 != 0) {
          v55 = v42;
          v44 = std___1___shared_weak_count_lock(v43);
          if (v44 == 0) {
            goto LABEL_51;
          }
          v45 = *v12;
          if (*v12 != 0) {
            LODWORD(v29) = *(unsigned __int8*)(v45 + 24);
            v46 = v45 + 152;
            if ((_DWORD)v29 == 0) {
              v46 = 0;
            }
            v47 = v46 != v12[2];
          }
          else {
            v47 = true;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v44 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v48 = v44;
            (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v44);
            std___1___shared_weak_count___release_weak(v48);
          }
          if (!v47) {
            v42 = v55;
            v38 = 0;
            if (((unsigned __int8)v29 & 1) == 0) {
              goto LABEL_58;
            }
          }
          else {
          LABEL_51:
            v42 = v55;
            v49 = v12[1];
            v38 = 0;
            if (v49 == 0 || *(_QWORD*)(v49 + 8) == -1) {
              goto LABEL_58;
            }
          }
          v50 = v12[2];
          if (v50 != 0) {
            v51 = GameRoutine_155f760((__int64)v12, v50, (__int64)"N_Marker00");
            v42 = v55;
            v38 = 0;
            if (v51 != 0) {
              v11 = *(int8x16_t*)(v51 + 112);
              LODWORD(v38) = LANES128_OF(vdupq_laneq_s32(v11, 3)).n128_u32[0];
              LANES128(v11).n128_u64[0] = *(_QWORD*)(v51 + 136);
              HIDWORD(v38) = LANES128(v11).n128_u32[1];
            }
          }
        }
      }
    LABEL_58:
      LANES128(v11).n128_f32[0] =
          (float)-*((float*)&v38 + 1) - LANES128(v42).n128_f32[2];
      *(float*)a3 = *(float*)&v38 - LANES128(v42).n128_f32[0];
      *(_DWORD*)(a3 + 4) = LANES128(v11).n128_u32[0];
    }
  }
LABEL_59:
  if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v13 + 16LL))(
        v13, *(long double*)&v11);
    std___1___shared_weak_count___release_weak(v13);
  }
}

void game_gameui_15d7960(_QWORD** a1, _QWORD* a2, __int64 a3, __int64 a4,
                         unsigned int a5)
{
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  char v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;
  char v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  _BOOL8 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64* v44;
  __int64* v45;
  __int64 v46;
  __int64* v47;
  __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  __int128 v52;
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
  __int64 v63;
  _BYTE v64[4];
  _DWORD v65[2];

  LayoutAccessor_1562cf0_alt1(a2, "Spot");
  *(_QWORD*)&v52 = -1;
  *((_QWORD*)&v52 + 1) = -1;
  v53 = -1;
  v54 = -1;
  v9 = *msg_MessageManager_instance__ptr[0];
  v55 = -1;
  v56 = -1;
  v57 = -1;
  v58 = -1;
  v59 = -1;
  v60 = -1;
  v61 = -1;
  v62 = -1;
  v47 = GameData_212e348 + 2;
  v48 = 0xFFFF0001FFFF0000LL;
  v49 = 0xFFFF0004FFFF0002LL;
  v50 = 0xFFFF0006FFFF0005LL;
  v63 = 8;
  v51 = 0xFFFF0008FFFF0007LL;
  v10 = GameRoutine_a4dbe0(v9, "MID_QuestMenu_Destination", 0, &v47);
  if (v10 != 0) {
    v11 = v10;
    v12 = ui_LayoutAccessor_FindTextBox(a2, "T_Title");
    if (v12 != 0) {
      GameRoutine_156c5d0(v12, v11, 0);
    }
  }
  v13 = *(_DWORD*)((char*)((_UNKNOWN*)0x50LL) + (_QWORD)GameData_212da30);
  v14 = ui_LayoutAccessor_FindTextBox(a2, "T_Title");
  if (v14 != 0) {
    v17 = Pane_58f8a0(v14, v15, v16);
    if (v17 != 0) {
      *(_DWORD*)(v17 + 12) = v13;
    }
  }
  v18 = ui_LayoutAccessor_FindTextBox(a2, "T_Title");
  if (v18 != 0) {
    v19 = v18;
    v20 = ui_LayoutAccessor_FindTextBox(a2, "T_Title");
    if (v20 != 0) {
      GameRoutine_190a0c0(&v47, v65, v64, v20, *(_QWORD*)(v20 + 216));
      v21 = v65[0];
      v22 = v65[1];
    }
    else {
      v21 = 0;
      v22 = 0;
    }
    v23 = *(_BYTE*)(v19 + 88);
    *(_DWORD*)(v19 + 80) = v21;
    *(_DWORD*)(v19 + 84) = v22;
    *(_BYTE*)(v19 + 88) = v23 | 0x10;
  }
  if (a3 != 0) {
    v24 = ui_LayoutAccessor_FindTextBox(a2, "T_Spot");
    if (v24 != 0) {
      GameRoutine_156c5d0(v24, a3, 0);
    }
  }
  v25 = ui_LayoutAccessor_FindTextBox(a2, "T_Spot");
  if (v25 != 0) {
    v26 = v25;
    v27 = ui_LayoutAccessor_FindTextBox(a2, "T_Spot");
    if (v27 != 0) {
      GameRoutine_190a0c0(&v47, v65, v64, v27, *(_QWORD*)(v27 + 216));
      v28 = v65[0];
      v29 = v65[1];
    }
    else {
      v28 = 0;
      v29 = 0;
    }
    v30 = *(_BYTE*)(v26 + 88);
    *(_DWORD*)(v26 + 80) = v28;
    *(_DWORD*)(v26 + 84) = v29;
    *(_BYTE*)(v26 + 88) = v30 | 0x10;
  }
  v31 = (*(__int64 (**)(_QWORD, _QWORD))(*(_QWORD*)**a1 + 168LL))(**a1, a5);
  if (v31 == 0) {
    goto LABEL_30;
  }
  v32 = GameRoutine_1326a40(v31);
  if (v32 == 0) {
    goto LABEL_30;
  }
  v33 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v34 = *(_DWORD*)(game_GameModeData_instance_ + 60);
    v35 = *(_QWORD*)(v32 + 8);
    if (v35 == 0) {
      goto LABEL_28;
    }
  }
  else {
    v34 = 0;
    v35 = *(_QWORD*)(v32 + 8);
    if (v35 == 0) {
      goto LABEL_28;
    }
  }
  v36 = strchr(v35, 95);
  if (v36 != 0) {
    v35 = v36 + 1;
  }
LABEL_28:
  v48 = game_util_Format(GameData_1afaabd, v34, v35);
  v47 = (__int64*)game_HashString(v48);
  v37 = game_GameVariableTable_Find(*(_QWORD*)(v33 + 48), &v47);
  if (v37 == 0) {
  LABEL_30:
    v38 = false;
    goto LABEL_31;
  }
  v38 = *(_DWORD*)(v37 + 32) != 0;
LABEL_31:
  ui_LayoutAccessor_SetPaneVisible(a2, "IconState", v38);
  v39 = ui_LayoutAccessor_FindAlignment(a2, "A_Info");
  if (v39 != 0) {
    Alignment_56b600(v39, v40);
    v41 = a2[1];
    if (v41 != 0) {
      v42 = std___1___shared_weak_count_lock(v41);
      if (v42 != 0) {
        v43 = v42;
        if (*a2 != 0) {
          ControlCreator_13633c0();
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
          std___1___shared_weak_count___release_weak(v43);
        }
      }
    }
  }
  v44 = (__int64*)ui_LayoutAccessor_FindPane(a2, &GameData_1ac6c8b);
  if (v44 != nullptr) {
    *(_QWORD*)((char*)&v52 + 5) = 0;
    v51 = 0;
    *(_QWORD*)&v52 = 0;
    v45 = v44;
    v49 = 0;
    v50 = 0;
    v47 = v44;
    v48 = ui_LayoutAccessor_FindPane(a2, "A_Info");
    WORD4(v52) = 256;
    LODWORD(v51) = 1105199104;
    v46 = Pane_58fac0(v45, "Margin_Width");
    if (v46 != 0) {
      *(float*)&v51 = (float)*(int*)(v46 + *(unsigned int*)(v46 + 4));
    }
    GameRoutine_156c240((__int64*)&v47);
  }
}

#pragma GCC visibility pop
