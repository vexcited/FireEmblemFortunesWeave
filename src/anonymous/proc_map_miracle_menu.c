#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_menu_BasicMenu_Unknown16de2e0(void);
__int64 ProcMapMiracleMenu_Unknown93(__int64 result);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* game_820d50(int);
__int64 CausationFile_9dbdc0(__int64 result);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 GameRoutine_9db9e0(unsigned int, unsigned int);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 Pane_58f8a0(__int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 strchr(const char*, int);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
bool GameRoutine_90c9e0(__int64);
bool Situation_763a00(__int64);
bool game_90cb60(__int64);
char* GameHr_6fbd80(__int64, int);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* LayoutAccessor_1562060(char* result, __int64, const char*);
char* game_util_Format(const char*, ...);
extern _UNKNOWN* GameData_212da30;
extern __int64 (*anonymous_MiracleMenuItem_Equip_vtable[])();
extern __int64* GameData_212c880[5];
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212d690;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 ui_Manager_instance_;
extern char** msg_MessageManager_empty_text__ptr;
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_156c910(__int64 result, const char*, int, ...);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 ProcMapMiracleMenu_Unknown88(__int64 result);

__int64 ProcMapMiracleMenu_Unknown88(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  const char* v5;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  char* v9;
  const char* v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _BYTE* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  char* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  _DWORD* v34;
  int v35;
  __int64 v39;
  const char* v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  _QWORD* v45;
  char* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  char* v50;
  __int64 v51;
  __int64 v52;
  _BOOL4 v53;
  _BOOL4 v54;
  _BOOL4 v55;
  __int64 v56;
  __int64* v57;
  __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  const char* v61;
  __int64 v62;
  __int64 v63;
  __int64* v64;
  __int64 v65;
  char* v66;
  __int64 v67;
  int v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  unsigned int v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  int v80;
  unsigned int v81;
  __int64 v82;
  __int64 v83;
  signed int v84;
  int v85;
  int* v86;
  int v87;
  struct {
    __int64* v88;
    __int64 v89;
    const char* v90;
    unsigned __int64 v91;
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
    __int64 v106;
  } v88_;

  v1 = *(_QWORD*)(result + 336);
  if (v1 == 0 ||
      *(__int64 (***)(void))v1 != anonymous_MiracleMenuItem_Equip_vtable) {
    return result;
  }
  v2 = result;
  LayoutAccessor_1560070((void*)(&v88_.v88), (__int64*)(result + 848),
                         "L_Help");
  if (v88_.v89 != 0) {
    v3 = std___1___shared_weak_count_lock(v88_.v89);
    v4 = v88_.v88;
    if (v88_.v89 != 0) {
      std___1___shared_weak_count___release_weak(v88_.v89);
    }
    if (v3 == 0 || v4 == nullptr) {
      goto LABEL_104;
    }
    v5 = *(const char**)(*(_QWORD*)(*(_QWORD*)(v1 + 96) + 16LL) + 32LL);
    v88_.v94 = -1;
    v88_.v95 = -1;
    v88_.v96 = -1;
    v88_.v97 = -1;
    v6 = msg_MessageManager_instance__ptr[0];
    v88_.v98 = -1;
    v88_.v99 = -1;
    v88_.v100 = -1;
    v88_.v101 = -1;
    v88_.v102 = -1;
    v88_.v103 = -1;
    v7 = *msg_MessageManager_instance__ptr[0];
    v88_.v104 = -1;
    v88_.v105 = -1;
    v88_.v106 = 8;
    v88_.v92 = -65529;
    v88_.v93 = -65528;
    v8 = GameData_212e348 + 2;
    v88_.v88 = GameData_212e348 + 2;
    v88_.v89 = 0xFFFF0001FFFF0000LL;
    v88_.v90 = (const char*)0xFFFF0004FFFF0002LL;
    v88_.v91 = 0xFFFF0006FFFF0005LL;
    v9 = GameRoutine_a4dbe0(v7, v5, 0);
    if (v9 != nullptr) {
      v10 = v9;
    }
    else {
      v10 = *msg_MessageManager_empty_text__ptr;
    }
    GameRoutine_60a020(*v6 + 14704, v10);
    v11 = *v6;
    v88_.v94 = -1;
    v88_.v95 = -1;
    v88_.v96 = -1;
    v88_.v97 = -1;
    v88_.v98 = -1;
    v88_.v99 = -1;
    v88_.v100 = -1;
    v88_.v101 = -1;
    v88_.v102 = -1;
    v88_.v103 = -1;
    v88_.v104 = -1;
    v88_.v105 = -1;
    v88_.v106 = 8;
    v88_.v92 = -65529;
    v88_.v93 = -65528;
    v88_.v88 = v8;
    v88_.v89 = 0xFFFF0001FFFF0000LL;
    v88_.v90 = (const char*)0xFFFF0004FFFF0002LL;
    v88_.v91 = 0xFFFF0006FFFF0005LL;
    v12 = GameRoutine_a4dbe0(v11, "MID_MiracleMenu_Detail", 0);
    if (v12 != nullptr) {
      v13 = (__int64)v12;
      v14 = ui_LayoutAccessor_FindTextBox(v4, (__int64)"T_Txt");
      if (v14 != 0) {
        GameRoutine_156c5d0(v14, v13, 0);
      }
    }
    if (GameRoutine_90c9e0(*(_QWORD*)(v1 + 96))) {
      LayoutAccessor_1562cf0((__int64)v4, "Lv_Off");
      LayoutAccessor_1562cf0((__int64)v4, "Miracle_LvOff");
      v15 = *(_QWORD*)(*(_QWORD*)(v1 + 96) + 16LL);
      v16 = *(_QWORD*)(v15 + 8);
      if (v16 != 0) {
        v17 = strchr(*(const char**)(v15 + 8), 95);
        if (v17 != 0) {
          v18 = (_BYTE*)(v17 + 1);
        }
        else {
          v18 = (_BYTE*)v16;
        }
        if (*v18 == 62) {
          v16 = (__int64)(v18 + 1);
        }
        else if (v17 != 0) {
          v16 = v17 + 1;
        }
      }
      v41 = game_HashString(v16);
      v42 = *GameData_212c880[0];
      v43 = *(_QWORD*)(*GameData_212c880[0] + 96);
      if ((v43 & (v43 - 1)) != 0) {
        v44 = v41;
        if (v41 >= v43) {
          v44 = v41 % v43;
        }
        v45 = *(_QWORD**)(*(_QWORD*)(v42 + 88) + 8 * v44);
        do {
          do {
            v45 = (_QWORD*)*v45;
          } while (v45[1] != v41);
        } while (v45[2] != v41);
      }
      else {
        v45 = *(_QWORD**)(*(_QWORD*)(v42 + 88) + 8 * ((v43 - 1) & v41));
        do {
          do {
            v45 = (_QWORD*)*v45;
          } while (v45[1] != v41);
        } while (v45[2] != v41);
      }
      v46 = GameHr_6fbd80(v45[3], *(unsigned __int8*)(v45[3] + 304LL));
      if (v46 != nullptr) {
        v47 = (__int64)v46;
        v48 = ui_LayoutAccessor_FindTextBox(v4, (__int64)"L_Miracle_03/T_Txt");
        if (v48 != 0) {
          GameRoutine_156c5d0(v48, v47, 0);
        }
      }
      v49 = *msg_MessageManager_instance__ptr[0];
      v88_.v94 = -1;
      v88_.v95 = -1;
      v88_.v96 = -1;
      v88_.v97 = -1;
      v88_.v98 = -1;
      v88_.v99 = -1;
      v88_.v100 = -1;
      v88_.v101 = -1;
      v88_.v102 = -1;
      v88_.v103 = -1;
      v88_.v104 = -1;
      v88_.v105 = -1;
      v88_.v88 = GameData_212e348 + 2;
      v88_.v89 = 0xFFFF0001FFFF0000LL;
      v88_.v90 = (const char*)0xFFFF0004FFFF0002LL;
      v88_.v91 = 0xFFFF0006FFFF0005LL;
      v88_.v106 = 8;
      v88_.v92 = -65529;
      v88_.v93 = -65528;
      v50 = GameRoutine_a4dbe0(v49, "MID_Sys_Minus", 0);
      if (v50 != nullptr) {
        v51 = (__int64)v50;
        v52 =
            ui_LayoutAccessor_FindTextBox(v4, (__int64)"L_Miracle_03/T_LvNum");
        if (v52 != 0) {
          GameRoutine_156c5d0(v52, v51, 0);
        }
      }
    LABEL_79:
      LOWORD(v88_.v88) = 0;
      v53 = GameRoutine_90c9e0(*(_QWORD*)(v1 + 96));
      v54 = game_90cb60(*(_QWORD*)(v1 + 96));
      if (v53 || !v54) {
        if (v53 && v54) {
        LABEL_93:
          if (((unsigned __int8)v88_.v88 & 1) != 0) {
            v60 = v88_.v89;
          }
          else {
            v60 = (unsigned __int64)(unsigned __int8)v88_.v88 >> 1;
          }
          ui_LayoutAccessor_SetPaneVisible((__int64)v4,
                                           (__int64)"N_Annotation00", v60 != 0);
          if (((unsigned __int8)v88_.v88 & 1) != 0) {
            v61 = v88_.v90;
          }
          else {
            v61 = (char*)&v88_.v88 + 1;
          }
          LayoutAccessor_1562060((char*)v4, (__int64)"T_Annotation00", v61);
          if (((unsigned __int8)v88_.v88 & 1) != 0 && v88_.v90 != nullptr) {
            v62 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v62 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v62,
                (__int64)v88_.v90);
          }
        LABEL_104:
          if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                          0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
            std___1___shared_weak_count___release_weak(v3);
          }
          goto LABEL_107;
        }
      }
      else {
        v55 = true;
        v56 = *GameData_212ce90[0];
        v57 = game_820d50(1);
        if (game_GameModeData_instance_ != 0) {
          v58 = game_GameVariableTable_Find(
              *(_QWORD**)(game_GameModeData_instance_ + 48),
              (unsigned __int64*)v57);
          if (v58 != 0) {
            v55 = *(_DWORD*)(v58 + 32) == 0;
          }
        }
        if (v55 && *(char*)(v56 + 28) < 0) {
          goto LABEL_93;
        }
      }
      if (!GameRoutine_90c9e0(*(_QWORD*)(v1 + 96))) {
        v59 = *GameData_212ce90[0];
        if ((*GameData_212ce90[0] == 0 ||
             **(_DWORD**)(v1 + 96) != *(char*)(v59 + 28)) &&
            !Situation_763a00(v59)) {
          GameRoutine_60a020((__int64)&v88_.v88,
                             "MID_MiracleMenu_Attention_Using");
        }
      }
      goto LABEL_93;
    }
    LayoutAccessor_1562cf0((__int64)v4, "Miracle_3");
    v19 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 96) + 16LL) + 24LL);
    if (*(int*)(v19 + 420) < 1) {
      goto LABEL_79;
    }
    v20 = 0;
    while (1) {
      v21 = v19 + 4 * v20;
      v22 = v20 + 1;
      if ((*(_WORD*)(v21 + 4) & 0xFFF) != 0) {
        v23 = game_util_Format("L_Help/L_Miracle_0%d", v20);
        LayoutAccessor_1560070((void*)(&v88_.v88), (__int64*)(v2 + 848), v23);
        if (v88_.v89 != 0) {
          v24 = std___1___shared_weak_count_lock(v88_.v89);
          v25 = v88_.v88;
          if (v88_.v89 != 0) {
            std___1___shared_weak_count___release_weak(v88_.v89);
          }
          if (v24 != 0 && v25 != nullptr) {
            v26 = ui_LayoutAccessor_FindPane(v25, (__int64)"T_LvNum");
            if (v26 != 0) {
              v27 =
                  __dynamic_cast(v26, GameData_212d670[0], GameData_212d690, 0);
              if (v27 != 0) {
                GameRoutine_156c910(v27, "%d", 1, (unsigned int)(v20 + 1));
              }
            }
            v28 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                             8LL * (*(_DWORD*)(v21 + 4) & 0xFFF));
            v29 = GameHr_6fbd80(v28, *(unsigned __int8*)(v28 + 304));
            if (v29 != nullptr) {
              v30 = (__int64)v29;
              v31 = ui_LayoutAccessor_FindTextBox(v25, (__int64)"T_Txt");
              if (v31 != 0) {
                GameRoutine_156c5d0(v31, v30, 0);
              }
            }
            v32 = *(_QWORD*)(v1 + 96);
            v33 = *(_DWORD*)(v32 + 4);
            v34 = *(_DWORD**)(*(_QWORD*)(v32 + 16) + 24LL);
            v35 = v34[105];
            if (v35 > 2 && (signed __int32)v34[103] <= v33) {
              v39 = 3;
            }
            else if (v35 > 1 && (signed __int32)v34[102] <= v33) {
              v39 = 2;
            }
            else if (v35 >= 1 && (signed __int32)v34[101] <= v33) {
              v39 = 1;
            }
            else {
              v39 = (int)v34[104];
            }
            if (v39 >= v22) {
              v40 = "EquipHelp";
            }
            else {
              v40 = "EquipHelpDisable";
            }
            LayoutAccessor_1562cf0((__int64)v25, v40);
          LABEL_59:
            if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
              std___1___shared_weak_count___release_weak(v24);
            }
            goto LABEL_24;
          }
          if (v24 != 0) {
            goto LABEL_59;
          }
        }
      }
    LABEL_24:
      v20 = v22;
      v19 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 96) + 16LL) + 24LL);
      if (v22 >= *(int*)(v19 + 420)) {
        goto LABEL_79;
      }
    }
  }
LABEL_107:
  LayoutAccessor_1560070((void*)(&v88_.v88), (__int64*)(v2 + 848),
                         "L_Help/L_Cost");
  result = v88_.v89;
  if (v88_.v89 == 0) {
    return result;
  }
  v63 = std___1___shared_weak_count_lock(v88_.v89);
  v64 = v88_.v88;
  result = v88_.v89;
  if (v88_.v89 != 0) {
    result = std___1___shared_weak_count___release_weak(v88_.v89);
  }
  if (v63 != 0 && v64 != nullptr) {
    v65 = ui_LayoutAccessor_FindPane(v64, (__int64)"Icon");
    v66 = (char*)GameData_212da30;
    if (v65 != 0) {
      v67 = __dynamic_cast(v65, GameData_212d670[0], GameData_212d678[0], 0);
      if (v67 != 0) {
        v68 = *(int*)((char*)((int*)0x24LL) + (_QWORD)v66);
        v69 = v67;
        v70 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v67 + 88LL))(v67, 0);
        if (v70 != 0) {
          *(_DWORD*)(v70 + 12) = v68;
        }
        Manager_136a920(ui_Manager_instance_ + 1264, v69, 0, 7u,
                        "IconStock_Miracle");
      }
    }
    v71 = *(_QWORD*)(v1 + 96);
    v72 = *(_QWORD*)(v71 + 16);
    if (v72 != 0) {
      v73 = CausationFile_9dbdc0(*(_QWORD*)(v71 + 16));
      if (game_GameModeData_instance_ != 0) {
        v74 = 90;
        if (*(_BYTE*)(game_GameModeData_instance_ + 13) == 0) {
          v74 = 88;
        }
        v75 = 92;
        if (*(_BYTE*)(game_GameModeData_instance_ + 13) != 2) {
          v75 = v74;
        }
      }
      else {
        v75 = 88;
      }
      LODWORD(v72) = *(unsigned __int16*)(v72 + v75);
      if ((_BYTE)v73 != 0) {
        LODWORD(v72) = GameRoutine_9db9e0(v73, v72);
      }
    }
    v76 = ui_LayoutAccessor_FindPane(v64, (__int64)"T_Num");
    if (v76 != 0) {
      v77 = __dynamic_cast(v76, GameData_212d670[0], GameData_212d690, 0);
      if (v77 != 0) {
        GameRoutine_156c910(v77, "%d", 1, (unsigned int)v72);
      }
    }
    v78 = *(_QWORD*)(v1 + 96);
    v79 = *(_QWORD*)(v78 + 16);
    if (v79 == 0) {
      goto LABEL_144;
    }
    v80 = *(_DWORD*)(*(_QWORD*)(game_GameModeData_instance_ + 160) + 104LL) -
          *(_DWORD*)(*(_QWORD*)(game_GameModeData_instance_ + 160) + 108LL);
    v81 = CausationFile_9dbdc0(*(_QWORD*)(v78 + 16));
    if (game_GameModeData_instance_ != 0) {
      v82 = 90;
      if (*(_BYTE*)(game_GameModeData_instance_ + 13) == 0) {
        v82 = 88;
      }
      v83 = 92;
      if (*(_BYTE*)(game_GameModeData_instance_ + 13) != 2) {
        v83 = v82;
      }
    }
    else {
      v83 = 88;
    }
    v84 = *(unsigned __int16*)(v79 + v83);
    v85 = v80 & ~(v80 >> 31);
    if ((_BYTE)v81 != 0) {
      v84 = GameRoutine_9db9e0(v81, v84);
    }
    if (v85 < v84) {
      v86 = (int*)(v66 + 60);
    }
    else {
    LABEL_144:
      v86 = (int*)(v66 + 36);
    }
    v87 = *v86;
    result = ui_LayoutAccessor_FindTextBox(v64, (__int64)"T_Num");
    if (result != 0) {
      result = Pane_58f8a0(result);
      if (result != 0) {
        *(_DWORD*)(result + 12) = v87;
      }
    }
  }
  else if (v63 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v63 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v63 + 16LL))(v63);
    return std___1___shared_weak_count___release_weak(v63);
  }
  return result;
}

__int64 ProcMapMiracleMenu_Unknown93(__int64 result)
{
  if ((*(_BYTE*)(result + 1064) & 1) == 0) {
    *(_BYTE*)(result + 1064) = 1;
    *(_BYTE*)(result + 648) = 1;
    *(_DWORD*)(result + 356) &= ~2u;
    return game_menu_BasicMenu_Unknown16de2e0();
  }
  return result;
}

#pragma GCC visibility pop
