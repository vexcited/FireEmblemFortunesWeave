#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Alignment_56b600(void);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_82e4d0(_QWORD);
__int64 GameRoutine_9db8a0(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 GameData_2115758;
extern __int64 GameData_21f8450;
extern __int64 GameData_21f8458;
extern __int64 GameData_21f8468;
extern __int64 GameData_21f84a0;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
__int64 ProcObeliskCausationMenu_Unknown88(__int64 a1);
__int64* GameRoutine_9db8a0_alt1(unsigned __int8,
                                 int) __asm__("GameRoutine_9db8a0");
__int64* GameVariable_82e4d0(int);
__int64 Alignment_56b600_alt1(__int64 result) __asm__("Alignment_56b600");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 ui_LayoutAccessor_FindAlignment_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindAlignment");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
char* GameRoutine_a4dbe0_alt1(__int64, const char*,
                              char) __asm__("GameRoutine_a4dbe0");
void GameHr_a51e10(__int64, unsigned int, int, int);
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");

__int64 ProcObeliskCausationMenu_Unknown88(__int64 a1)
{
  __int64 result;
  __int64 v3;
  const char* v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  unsigned __int8 v8;
  unsigned __int64* v9;
  __int64 v10;
  int v11;
  __int64* v12;
  bool v13;
  __int64* v14;
  int v15;
  __int64* v16;
  int v17;
  __int64 v18;
  char v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64*** v23;
  __int64** v24;
  unsigned __int64 v25;
  __int64* v26;
  unsigned __int8 v27;
  unsigned __int64* v28;
  __int64 v29;
  int v30;
  __int64* v31;
  __int64* v32;
  int v33;
  __int64* v34;
  int v35;
  __int64 v36;
  unsigned __int8 v37;
  unsigned __int64* v38;
  __int64 v39;
  int v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64* v44;
  __int64 v45;
  __int64*** v46;
  __int64** v47;
  unsigned __int64 v48;
  __int64* v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64** v52;
  __int64* v53;
  char* v54;
  __int64 v55;
  __int64 v56;

  result = *(_QWORD*)(a1 + 336);
  if (result == 0) {
    return result;
  }
  result = __dynamic_cast(result, GameData_212e008[0], &GameData_2115758, 0);
  if (result == 0) {
    return result;
  }
  v3 = result;
  v4 = *(const char**)(*(_QWORD*)(result + 88) + 48LL);
  if (v4 != nullptr) {
    v5 = GameRoutine_a4dbe0_alt1(*msg_MessageManager_instance__ptr[0], v4, 0);
    if (v5 != nullptr) {
      v6 = (__int64)v5;
      v7 = ui_LayoutAccessor_FindTextBox_alt1((__int64*)(a1 + 848),
                                              (__int64)"T_Txt");
      if (v7 != 0) {
        GameRoutine_156c5d0_alt1(v7, v6, 0);
      }
    }
  }
  v8 = *(_BYTE*)(v3 + 96);
  v9 = (unsigned __int64*)(GameData_21f84a0 + 40LL * v8);
  if (*v9 != 0 && game_GameModeData_instance_ != 0 &&
      (v10 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48), v9)) != 0) {
    v11 = *(_DWORD*)(v10 + 32);
  }
  else {
    v11 = 0;
  }
  v12 = GameRoutine_9db8a0_alt1(v8, v11);
  if (v12 != nullptr) {
    v14 = *(__int64**)(v12[3] + 16);
    if (v14 == nullptr) {
      goto LABEL_44;
    }
    goto LABEL_14;
  }
  v19 = 1;
  if (GameData_21f8458 != 0 && GameData_21f8468 != 0) {
    v20 = *(unsigned __int8*)(v3 + 96);
    v21 = GameData_21f8458 - 1;
    if ((GameData_21f8458 & (GameData_21f8458 - 1)) != 0) {
      v22 = *(unsigned __int8*)(v3 + 96);
      if (GameData_21f8458 <= v20) {
        v22 = (unsigned int)v20 % (unsigned int)GameData_21f8458;
      }
    }
    else {
      v22 = ((_DWORD)GameData_21f8458 - 1) & (unsigned int)v20;
    }
    v23 = *(__int64****)(GameData_21f8450 + 8 * v22);
    if (v23 != nullptr) {
      v24 = *v23;
      if (v24 != nullptr) {
        if ((GameData_21f8458 & v21) == 0) {
          while (1) {
            v26 = v24[1];
            if (v26 == (__int64*)v20) {
              if (*((unsigned __int8*)v24 + 16) == (_DWORD)v20) {
                goto LABEL_43;
              }
            }
            else if (((unsigned __int64)v26 & v21) != v22) {
              goto LABEL_44;
            }
            v24 = (__int64**)*v24;
            if (v24 == nullptr) {
              goto LABEL_45;
            }
          }
        }
        do {
          v25 = (unsigned __int64)v24[1];
          if (v25 == v20) {
            if (*((unsigned __int8*)v24 + 16) == (_DWORD)v20) {
            LABEL_43:
              v14 = v24[3];
              if (v14 == nullptr) {
              LABEL_44:
                v19 = 1;
                break;
              }
            LABEL_14:
              v15 = *((unsigned __int8*)v14 + 59);
              if (*((_BYTE*)v14 + 59) != 0) {
                v16 = GameVariable_82e4d0(1);
                v17 = game_GameModeData_instance_;
                if (game_GameModeData_instance_ != 0) {
                  v18 = game_GameVariableTable_Find_alt1(
                      *(_QWORD**)(game_GameModeData_instance_ + 48),
                      (unsigned __int64*)v16);
                  if (v18 != 0) {
                    v17 = *(_DWORD*)(v18 + 32);
                  }
                  else {
                    v17 = 0;
                  }
                }
                v19 = 0;
                v13 = v17 >= v15;
              }
              else {
                v19 = 0;
                v13 = true;
              }
              break;
            }
          }
          else {
            if (v25 >= GameData_21f8458) {
              v25 %= (unsigned __int64)GameData_21f8458;
            }
            if (v25 != v22) {
              goto LABEL_44;
            }
          }
          v24 = (__int64**)*v24;
          v19 = 1;
        } while (v24 != nullptr);
      }
    }
  }
LABEL_45:
  ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 848, (__int64)"T_Annotation",
                                        (((unsigned __int8)v19 | v13) & 1) ==
                                            0);
  v27 = *(_BYTE*)(v3 + 96);
  v28 = (unsigned __int64*)(GameData_21f84a0 + 40LL * v27);
  if (*v28 != 0 && game_GameModeData_instance_ != 0 &&
      (v29 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48), v28)) != 0) {
    v30 = *(_DWORD*)(v29 + 32);
  }
  else {
    v30 = 0;
  }
  v31 = GameRoutine_9db8a0_alt1(v27, v30);
  if (v31 != nullptr) {
    v32 = *(__int64**)(v31[3] + 16);
    if (v32 != nullptr) {
      goto LABEL_52;
    }
    goto LABEL_104;
  }
  if (GameData_21f8458 == 0 || GameData_21f8468 == 0) {
    goto LABEL_104;
  }
  v41 = *(unsigned __int8*)(v3 + 96);
  v42 = GameData_21f8458 - 1;
  if ((GameData_21f8458 & (GameData_21f8458 - 1)) != 0) {
    v43 = *(unsigned __int8*)(v3 + 96);
    if (GameData_21f8458 <= v41) {
      v43 = (unsigned int)v41 % (unsigned int)GameData_21f8458;
    }
  }
  else {
    v43 = ((_DWORD)GameData_21f8458 - 1) & (unsigned int)v41;
  }
  v46 = *(__int64****)(GameData_21f8450 + 8 * v43);
  if (v46 == nullptr) {
    goto LABEL_104;
  }
  v47 = *v46;
  if (v47 == nullptr) {
    goto LABEL_104;
  }
  if ((GameData_21f8458 & v42) == 0) {
    while (1) {
      v49 = v47[1];
      if (v49 == (__int64*)v41) {
        if (*((unsigned __int8*)v47 + 16) == (_DWORD)v41) {
          goto LABEL_95;
        }
      }
      else if (((unsigned __int64)v49 & v42) != v43) {
        goto LABEL_104;
      }
      v47 = (__int64**)*v47;
      if (v47 == nullptr) {
        goto LABEL_104;
      }
    }
  }
  while (1) {
    v48 = (unsigned __int64)v47[1];
    if (v48 == v41) {
      break;
    }
    if (v48 >= GameData_21f8458) {
      v48 %= (unsigned __int64)GameData_21f8458;
    }
    if (v48 != v43) {
      goto LABEL_104;
    }
  LABEL_75:
    v47 = (__int64**)*v47;
    if (v47 == nullptr) {
      goto LABEL_104;
    }
  }
  if (*((unsigned __int8*)v47 + 16) != (_DWORD)v41) {
    goto LABEL_75;
  }
LABEL_95:
  v32 = v47[3];
  if (v32 == nullptr) {
    goto LABEL_104;
  }
LABEL_52:
  v33 = *((unsigned __int8*)v32 + 59);
  if (*((_BYTE*)v32 + 59) != 0) {
    v34 = GameVariable_82e4d0(1);
    v35 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_56;
    }
    v36 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v34);
    if (v36 != 0) {
      v35 = *(_DWORD*)(v36 + 32);
    LABEL_56:
      if (v35 < v33) {
      LABEL_57:
        v37 = *(_BYTE*)(v3 + 96);
        v38 = (unsigned __int64*)(GameData_21f84a0 + 40LL * v37);
        if (*v38 != 0 && game_GameModeData_instance_ != 0 &&
            (v39 = game_GameVariableTable_Find_alt1(
                 *(_QWORD**)(game_GameModeData_instance_ + 48), v38)) != 0) {
          v40 = *(_DWORD*)(v39 + 32);
        }
        else {
          v40 = 0;
        }
        v44 = GameRoutine_9db8a0_alt1(v37, v40);
        if (v44 != nullptr) {
          v45 = v44[3] + 16;
        }
        else {
          v50 = *(unsigned __int8*)(v3 + 96);
          if ((GameData_21f8458 & (GameData_21f8458 - 1)) != 0) {
            v51 = *(unsigned __int8*)(v3 + 96);
            if (GameData_21f8458 <= v50) {
              v51 = (unsigned int)v50 % (unsigned int)GameData_21f8458;
            }
            v52 = *(__int64***)(GameData_21f8450 + 8 * v51);
            do {
              do {
                v52 = (__int64**)*v52;
              } while (v52[1] != (__int64*)v50);
            } while (*((unsigned __int8*)v52 + 16) != (_DWORD)v50);
          }
          else {
            v52 = *(__int64***)(GameData_21f8450 +
                                8LL * (((_DWORD)GameData_21f8458 - 1) &
                                       (unsigned int)v50));
            do {
              do {
                v52 = (__int64**)*v52;
              } while (v52[1] != (__int64*)v50);
            } while (*((unsigned __int8*)v52 + 16) != (_DWORD)v50);
          }
          v45 = (__int64)(v52 + 3);
        }
        v53 = msg_MessageManager_instance__ptr[0];
        GameHr_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0,
                      *(unsigned __int8*)(*(_QWORD*)v45 + 59LL), 0);
        v54 = GameRoutine_a4dbe0_alt1(*v53,
                                      "MID_CausationMenu_Condition_Message", 0);
        if (v54 != nullptr) {
          v55 = (__int64)v54;
          v56 = ui_LayoutAccessor_FindTextBox_alt1((__int64*)(a1 + 848),
                                                   (__int64)"T_Annotation");
          if (v56 != 0) {
            GameRoutine_156c5d0_alt1(v56, v55, 0);
          }
        }
      }
    }
    else if (v33 > 0) {
      goto LABEL_57;
    }
  }
LABEL_104:
  result = ui_LayoutAccessor_FindAlignment_alt1((__int64*)(a1 + 848),
                                                (__int64)"A_Txt");
  if (result != 0) {
    return Alignment_56b600_alt1(result);
  }
  return result;
}

#pragma GCC visibility pop
