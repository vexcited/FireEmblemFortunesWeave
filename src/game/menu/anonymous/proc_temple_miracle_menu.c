#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
__int64 ProcTempleMiracleMenu_Unknown143_alt1(__int64 a1) __asm__(
    "ProcTempleMiracleMenu_Unknown143");
__int64 Manager_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ProcTempleMiracleMenu_Unknown6_alt1(__int64 a1) __asm__(
    "ProcTempleMiracleMenu_Unknown6");
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
__n128 GameRoutine_15940f0(__int64, unsigned int, unsigned int);
__n128 std___1___shared_weak_count___release_weak();
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
extern __int64 game_GameModeData_instance_;
void GameRoutine_156c5d0(__int64, __int64, char);
__n128 ProcTempleMiracleMenu_Unknown84_alt1(__int64 a1) __asm__(
    "ProcTempleMiracleMenu_Unknown84");
void GameHr_a51e10(__int64, unsigned int, unsigned int, int);
char* ProcTempleMiracleMenu_Unknown143(__int64 a1);
char* ProcTempleMiracleMenu_Unknown6(__int64 a1);
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__int64 CausationFile_9dbdc0(__int64 result);
__int64 GameRoutine_156c910(__int64 result, const char*, int, ...);
__int64 GameRoutine_9db9e0(unsigned int, unsigned int);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(__int64 result);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock(__int64);
__int64 strchr(const char*, int);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, const char*,
    char) __asm__("ui_LayoutAccessor_SetPaneVisible");
bool GameRoutine_90c9e0(__int64);
char* GameHr_6fbd80(__int64, int);
char* GameRoutine_60a020(char*, const char*);
char* game_util_Format(const char*, ...);
extern _UNKNOWN* GameData_212da30;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e008[9];
extern __int64 GameData_20403f0;
extern __int64 GameData_212d690;
extern __int64 ui_Manager_instance_;
extern char** msg_MessageManager_empty_text__ptr;
__int64 ProcTempleMiracleMenu_Unknown88(__int64 a1);
__int64 GameHr_15940f0(__int64, unsigned int, unsigned int);
__int64 ProcTempleMiracleMenu_Unknown84(__int64 a1);

__int64 ProcTempleMiracleMenu_Unknown84(__int64 a1)
{
  __int64 v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  _BYTE* v12;
  __int64 v13;
  __int64 v14;
  char v15;
  int v16;
  char v17;
  char* v18;
  char v19;
  __int64 result;
  struct {
    __int64 v21;
    __int64 v22;
    __int64* v23;
    unsigned __int64 v24;
    unsigned __int64 v25;
    unsigned __int64 v26;
    int v27;
    int v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
    __int64 v41;
  } v21_;

  ui_LayoutAccessor_SetPaneVisible(a1 + 848, (__int64)"L_Num", 1);
  ui_LayoutAccessor_SetPaneVisible(a1 + 952, (__int64)"L_Num/L_KeyHelp", 0);
  v21_.v29 = -1;
  v21_.v30 = -1;
  v21_.v31 = -1;
  v21_.v32 = -1;
  v2 = *msg_MessageManager_instance__ptr[0];
  v21_.v33 = -1;
  v21_.v34 = -1;
  v21_.v35 = -1;
  v21_.v36 = -1;
  v21_.v37 = -1;
  v21_.v38 = -1;
  v21_.v39 = -1;
  v21_.v40 = -1;
  v21_.v23 = GameData_212e348 + 2;
  v21_.v24 = 0xFFFF0001FFFF0000LL;
  v21_.v25 = 0xFFFF0004FFFF0002LL;
  v21_.v26 = 0xFFFF0006FFFF0005LL;
  v21_.v41 = 8;
  v21_.v27 = -65529;
  v21_.v28 = -65528;
  v3 = GameRoutine_a4dbe0_alt1(v2, "MID_MiracleEquipMenu_EquippedNum", 0);
  if (v3 != nullptr) {
    v4 = (__int64)v3;
    v5 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 848),
                                       (__int64)"L_Num/T_Txt");
    if (v5 != 0) {
      GameRoutine_156c5d0(v5, v4, 0);
    }
  }
  LayoutAccessor_1560070_alt1((void*)(&v21_.v21), (__int64*)(a1 + 848),
                              "L_Num");
  v6 = *(_QWORD*)(game_GameModeData_instance_ + 160);
  v7 = *(_QWORD*)(v6 + 8);
  v8 = *(_QWORD*)(v6 + 16) - v7;
  if ((int)(v8 >> 5) < 1) {
    v11 = 0;
    goto LABEL_14;
  }
  v9 = (unsigned __int8)v8 >> 5;
  if (((v8 >> 5) & 0x7FFFFFFF) - 1 >= 7) {
    v12 = (_BYTE*)(v7 + 136);
    v13 = 0;
    v11 = 0;
    v14 = -8LL * ((v8 >> 8) & 0xFFFFFFF);
    do {
      v13 -= 8;
      v15 = v12[96];
      v16 = v11 + (*(v12 - 128) & 1) + (*(v12 - 96) & 1) + (*(v12 - 64) & 1) +
            (*(v12 - 32) & 1) + (*v12 & 1) + (v12[32] & 1);
      v17 = v12[64];
      v12 += 256;
      v11 = v16 + (v17 & 1) + (v15 & 1);
    } while (v14 != v13);
    v10 = -v13;
    if (v9 == 0) {
      goto LABEL_14;
    }
    goto LABEL_12;
  }
  v10 = 0;
  v11 = 0;
  if ((unsigned __int8)v8 >> 5 != 0) {
  LABEL_12:
    v18 = (char*)(v7 + 32 * v10 + 8);
    do {
      v19 = *v18;
      v18 += 32;
      --v9;
      v11 += v19 & 1;
    } while (v9 != 0);
  }
LABEL_14:
  GameHr_15940f0((__int64)&v21_.v21, v11, 4u);
  result = v21_.v22;
  if (v21_.v22 != 0) {
    return std___1___shared_weak_count___release_weak_alt1(v21_.v22);
  }
  return result;
}

__int64 ProcTempleMiracleMenu_Unknown88(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  _BYTE* v6;
  __int64* v7;
  __int64 v8;
  __int64* v9;
  char* v10;
  const char* v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _BYTE* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char* v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  unsigned int v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  int v35;
  _DWORD* v36;
  int v37;
  __int64 v41;
  const char* v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  _QWORD* v47;
  char* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  char* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64* v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  int v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  unsigned int v64;
  __int64 v65;
  __int64 v66;
  struct {
    __int64* v67;
    __int64 v68;
    unsigned __int64 v69;
    unsigned __int64 v70;
    int v71;
    int v72;
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
    __int64 v85;
  } v67_;

  result = *(_QWORD*)(a1 + 336);
  if (result == 0) {
    return result;
  }
  result = __dynamic_cast(result, GameData_212e008[0], &GameData_20403f0, 0);
  if (result == 0) {
    return result;
  }
  v3 = result;
  LayoutAccessor_1560070_alt1((void*)(&v67_.v67), (__int64*)(a1 + 848),
                              "L_Help");
  if (v67_.v68 != 0) {
    v4 = std___1___shared_weak_count_lock(v67_.v68);
    v5 = v67_.v67;
    if (v67_.v68 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v67_.v68);
    }
    if (v4 == 0 || v5 == nullptr) {
      goto LABEL_81;
    }
    v6 = *(_BYTE**)(*(_QWORD*)(*(_QWORD*)(v3 + 96) + 16LL) + 32LL);
    v67_.v73 = -1;
    v67_.v74 = -1;
    v67_.v75 = -1;
    v67_.v76 = -1;
    v7 = msg_MessageManager_instance__ptr[0];
    v67_.v77 = -1;
    v67_.v78 = -1;
    v67_.v79 = -1;
    v67_.v80 = -1;
    v67_.v81 = -1;
    v67_.v82 = -1;
    v8 = *msg_MessageManager_instance__ptr[0];
    v67_.v83 = -1;
    v67_.v84 = -1;
    v67_.v85 = 8;
    v67_.v71 = -65529;
    v67_.v72 = -65528;
    v9 = GameData_212e348 + 2;
    v67_.v67 = GameData_212e348 + 2;
    v67_.v68 = 0xFFFF0001FFFF0000LL;
    v67_.v69 = 0xFFFF0004FFFF0002LL;
    v67_.v70 = 0xFFFF0006FFFF0005LL;
    v10 = GameRoutine_a4dbe0_alt1(v8, v6, 0);
    if (v10 != nullptr) {
      v11 = v10;
    }
    else {
      v11 = *msg_MessageManager_empty_text__ptr;
    }
    GameRoutine_60a020((char*)(*v7 + 14704), v11);
    v12 = *v7;
    v67_.v73 = -1;
    v67_.v74 = -1;
    v67_.v75 = -1;
    v67_.v76 = -1;
    v67_.v77 = -1;
    v67_.v78 = -1;
    v67_.v79 = -1;
    v67_.v80 = -1;
    v67_.v81 = -1;
    v67_.v82 = -1;
    v67_.v83 = -1;
    v67_.v84 = -1;
    v67_.v85 = 8;
    v67_.v71 = -65529;
    v67_.v72 = -65528;
    v67_.v67 = v9;
    v67_.v68 = 0xFFFF0001FFFF0000LL;
    v67_.v69 = 0xFFFF0004FFFF0002LL;
    v67_.v70 = 0xFFFF0006FFFF0005LL;
    v13 = GameRoutine_a4dbe0_alt1(v12, "MID_MiracleMenu_Detail", 0);
    if (v13 != nullptr) {
      v14 = (__int64)v13;
      v15 = ui_LayoutAccessor_FindTextBox(v5, (__int64)"T_Txt");
      if (v15 != 0) {
        GameRoutine_156c5d0(v15, v14, 0);
      }
    }
    if (GameRoutine_90c9e0(*(_QWORD*)(v3 + 96))) {
      LayoutAccessor_1562cf0((__int64)v5, "Miracle_LvOff");
      v16 = *(_QWORD*)(*(_QWORD*)(v3 + 96) + 16LL);
      v17 = *(_QWORD*)(v16 + 8);
      if (v17 != 0) {
        v18 = strchr(*(const char**)(v16 + 8), 95);
        if (v18 != 0) {
          v19 = (_BYTE*)(v18 + 1);
        }
        else {
          v19 = (_BYTE*)v17;
        }
        if (*v19 == 62) {
          v17 = (__int64)(v19 + 1);
        }
        else if (v18 != 0) {
          v17 = v18 + 1;
        }
      }
      v43 = game_HashString(v17);
      v44 = *GameData_212c880[0];
      v45 = *(_QWORD*)(*GameData_212c880[0] + 96);
      if ((v45 & (v45 - 1)) != 0) {
        v46 = v43;
        if (v43 >= v45) {
          v46 = v43 % v45;
        }
        v47 = *(_QWORD**)(*(_QWORD*)(v44 + 88) + 8 * v46);
        do {
          do {
            v47 = (_QWORD*)*v47;
          } while (v47[1] != v43);
        } while (v47[2] != v43);
      }
      else {
        v47 = *(_QWORD**)(*(_QWORD*)(v44 + 88) + 8 * ((v45 - 1) & v43));
        do {
          do {
            v47 = (_QWORD*)*v47;
          } while (v47[1] != v43);
        } while (v47[2] != v43);
      }
      v48 = GameHr_6fbd80(v47[3], *(unsigned __int8*)(v47[3] + 304LL));
      if (v48 != nullptr) {
        v49 = (__int64)v48;
        v50 = ui_LayoutAccessor_FindTextBox(v5, (__int64)"L_Miracle_03/T_Txt");
        if (v50 != 0) {
          GameRoutine_156c5d0(v50, v49, 0);
        }
      }
      v51 = *msg_MessageManager_instance__ptr[0];
      v67_.v73 = -1;
      v67_.v74 = -1;
      v67_.v75 = -1;
      v67_.v76 = -1;
      v67_.v77 = -1;
      v67_.v78 = -1;
      v67_.v79 = -1;
      v67_.v80 = -1;
      v67_.v81 = -1;
      v67_.v82 = -1;
      v67_.v83 = -1;
      v67_.v84 = -1;
      v67_.v67 = GameData_212e348 + 2;
      v67_.v68 = 0xFFFF0001FFFF0000LL;
      v67_.v69 = 0xFFFF0004FFFF0002LL;
      v67_.v70 = 0xFFFF0006FFFF0005LL;
      v67_.v85 = 8;
      v67_.v71 = -65529;
      v67_.v72 = -65528;
      v52 = GameRoutine_a4dbe0_alt1(v51, "MID_Sys_Minus", 0);
      if (v52 != nullptr) {
        v53 = (__int64)v52;
        v54 =
            ui_LayoutAccessor_FindTextBox(v5, (__int64)"L_Miracle_03/T_LvNum");
        if (v54 != 0) {
          GameRoutine_156c5d0(v54, v53, 0);
        }
      }
      goto LABEL_80;
    }
    LayoutAccessor_1562cf0((__int64)v5, "Miracle_3");
    v20 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 96) + 16LL) + 24LL);
    if (*(int*)(v20 + 420) < 1) {
    LABEL_80:
      ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v5, "N_Annotation00", 0);
    LABEL_81:
      if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak_alt1(v4);
      }
      goto LABEL_84;
    }
    v21 = 0;
    while (1) {
      v22 = v20 + 4 * v21;
      v23 = v21 + 1;
      if ((*(_WORD*)(v22 + 4) & 0xFFF) != 0) {
        v24 = game_util_Format("L_Help/L_Miracle_0%d", v21);
        LayoutAccessor_1560070_alt1((void*)(&v67_.v67), (__int64*)(a1 + 848),
                                    v24);
        if (v67_.v68 != 0) {
          v25 = std___1___shared_weak_count_lock(v67_.v68);
          v26 = v67_.v67;
          if (v67_.v68 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v67_.v68);
          }
          if (v25 != 0 && v26 != nullptr) {
            v27 = ui_LayoutAccessor_FindPane(v26, (__int64)"T_LvNum");
            if (v27 != 0) {
              v28 =
                  __dynamic_cast(v27, GameData_212d670[0], GameData_212d690, 0);
              if (v28 != 0) {
                GameRoutine_156c910(v28, "%d", 1, (unsigned int)(v21 + 1));
              }
            }
            v29 = *(_DWORD*)(v22 + 4);
            if ((v29 & 0xFFF) != 0) {
              v30 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                               8LL * (v29 & 0xFFF));
              if (v30 != 0) {
                v31 = GameHr_6fbd80(v30, *(unsigned __int8*)(v30 + 304) -
                                             (HIBYTE(v29) & 0x1F));
                if (v31 != nullptr) {
                  v32 = (__int64)v31;
                  v33 = ui_LayoutAccessor_FindTextBox(v26, (__int64)"T_Txt");
                  if (v33 != 0) {
                    GameRoutine_156c5d0(v33, v32, 0);
                  }
                }
              }
            }
            v34 = *(_QWORD*)(v3 + 96);
            v35 = *(_DWORD*)(v34 + 4);
            v36 = *(_DWORD**)(*(_QWORD*)(v34 + 16) + 24LL);
            v37 = v36[105];
            if (v37 > 2 && (signed __int32)v36[103] <= v35) {
              v41 = 3;
            }
            else if (v37 > 1 && (signed __int32)v36[102] <= v35) {
              v41 = 2;
            }
            else if (v37 >= 1 && (signed __int32)v36[101] <= v35) {
              v41 = 1;
            }
            else {
              v41 = (int)v36[104];
            }
            if (v41 >= v23) {
              v42 = "EquipHelp";
            }
            else {
              v42 = "EquipHelpDisable";
            }
            LayoutAccessor_1562cf0((__int64)v26, v42);
          LABEL_60:
            if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
              std___1___shared_weak_count___release_weak_alt1(v25);
            }
            goto LABEL_23;
          }
          if (v25 != 0) {
            goto LABEL_60;
          }
        }
      }
    LABEL_23:
      v21 = v23;
      v20 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 96) + 16LL) + 24LL);
      if (v23 >= *(int*)(v20 + 420)) {
        goto LABEL_80;
      }
    }
  }
LABEL_84:
  LayoutAccessor_1560070_alt1((void*)(&v67_.v67), (__int64*)(a1 + 848),
                              "L_Help/L_Cost");
  result = v67_.v68;
  if (v67_.v68 == 0) {
    return result;
  }
  v55 = std___1___shared_weak_count_lock(v67_.v68);
  v56 = v67_.v67;
  result = v67_.v68;
  if (v67_.v68 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v67_.v68);
  }
  if (v55 != 0 && v56 != nullptr) {
    v57 = ui_LayoutAccessor_FindPane(v56, (__int64)"Icon");
    if (v57 != 0) {
      v58 = __dynamic_cast(v57, GameData_212d670[0], GameData_212d678[0], 0);
      if (v58 != 0) {
        v59 = v58;
        v60 = *(int*)((char*)((int*)0x24LL) + (_QWORD)GameData_212da30);
        v61 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v58 + 88LL))(v58, 0);
        if (v61 != 0) {
          *(_DWORD*)(v61 + 12) = v60;
        }
        Manager_136a920(ui_Manager_instance_ + 1264, v59, 0, 7u,
                        "IconStock_Miracle");
      }
    }
    v62 = *(_QWORD*)(v3 + 96);
    v63 = *(_QWORD*)(v62 + 16);
    if (v63 != 0) {
      v64 = CausationFile_9dbdc0(*(_QWORD*)(v62 + 16));
      if (game_GameModeData_instance_ != 0) {
        v65 = 90;
        if (*(_BYTE*)(game_GameModeData_instance_ + 13) == 0) {
          v65 = 88;
        }
        v66 = 92;
        if (*(_BYTE*)(game_GameModeData_instance_ + 13) != 2) {
          v66 = v65;
        }
      }
      else {
        v66 = 88;
      }
      LODWORD(v63) = *(unsigned __int16*)(v63 + v66);
      if ((_BYTE)v64 != 0) {
        LODWORD(v63) = GameRoutine_9db9e0(v64, v63);
      }
    }
    result = ui_LayoutAccessor_FindPane(v56, (__int64)"T_Num");
    if (result != 0) {
      result = __dynamic_cast(result, GameData_212d670[0], GameData_212d690, 0);
      if (result != 0) {
        result = GameRoutine_156c910(result, "%d", 1, (unsigned int)v63);
      }
    }
  }
  else if (v55 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v55 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55);
    return std___1___shared_weak_count___release_weak_alt1(v55);
  }
  return result;
}

char* ProcTempleMiracleMenu_Unknown143(__int64 a1)
{
  int v1;
  __int64* v2;
  __int64 v3;
  char* v4;

  v1 = *(unsigned __int8*)(a1 + 1064);
  v2 = msg_MessageManager_instance__ptr[0];
  v3 = *msg_MessageManager_instance__ptr[0];
  if (v1 == 1) {
    v4 = "MID_MiracleEquipMenu_Info_Help";
  }
  else {
    GameHr_a51e10(v3 + 14704, 0, 4u, 0);
    v3 = *v2;
    v4 = "MID_MiracleEquipMenu_Help";
  }
  return GameRoutine_a4dbe0_alt1(v3, v4, 0);
}

char* ProcTempleMiracleMenu_Unknown6(__int64 a1)
{
  int v1;
  __int64* v2;
  __int64 v3;
  char* v4;

  v1 = *(unsigned __int8*)(a1 + 8);
  v2 = msg_MessageManager_instance__ptr[0];
  v3 = *msg_MessageManager_instance__ptr[0];
  if (v1 == 1) {
    v4 = "MID_MiracleEquipMenu_Info_Help";
  }
  else {
    GameHr_a51e10(v3 + 14704, 0, 4u, 0);
    v3 = *v2;
    v4 = "MID_MiracleEquipMenu_Help";
  }
  return GameRoutine_a4dbe0_alt1(v3, v4, 0);
}

#pragma GCC visibility pop
