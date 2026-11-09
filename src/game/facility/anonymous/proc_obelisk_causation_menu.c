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

__int64 ProcObeliskCausationMenu_Unknown88(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  __int64* v15;
  int v16;
  __int64 v17;
  int v18;
  __int64 v19;
  char v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64*** v24;
  __int64** v25;
  unsigned __int64 v26;
  __int64* v27;
  unsigned int v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  int v34;
  __int64 v35;
  int v36;
  __int64 v37;
  unsigned int v38;
  _QWORD* v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64*** v47;
  __int64** v48;
  unsigned __int64 v49;
  __int64* v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64** v53;
  __int64* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  _QWORD v59[2];
  unsigned __int64 v60;
  unsigned __int64 v61;
  int v62;
  int v63;
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
  __int64 v76;

  result = *(_QWORD*)(a1 + 336);
  if (result == 0) {
    return result;
  }
  result = __dynamic_cast(result, GameData_212e008[0], &GameData_2115758, 0);
  if (result == 0) {
    return result;
  }
  v3 = result;
  v4 = *(_QWORD*)(*(_QWORD*)(result + 88) + 48LL);
  if (v4 != 0) {
    v64 = -1;
    v65 = -1;
    v66 = -1;
    v67 = -1;
    v5 = *msg_MessageManager_instance__ptr[0];
    v68 = -1;
    v69 = -1;
    v70 = -1;
    v71 = -1;
    v72 = -1;
    v73 = -1;
    v74 = -1;
    v75 = -1;
    v59[0] = GameData_212e348 + 2;
    v59[1] = 0xFFFF0001FFFF0000LL;
    v60 = 0xFFFF0004FFFF0002LL;
    v61 = 0xFFFF0006FFFF0005LL;
    v76 = 8;
    v62 = -65529;
    v63 = -65528;
    v6 = GameRoutine_a4dbe0(v5, v4, 0, v59);
    if (v6 != 0) {
      v7 = v6;
      v8 = ui_LayoutAccessor_FindTextBox(a1 + 848, "T_Txt");
      if (v8 != 0) {
        GameRoutine_156c5d0(v8, v7, 0);
      }
    }
  }
  v9 = *(unsigned __int8*)(v3 + 96);
  v10 = (_QWORD*)(GameData_21f84a0 + 40LL * *(unsigned __int8*)(v3 + 96));
  if (*v10 != 0 && game_GameModeData_instance_ != 0 &&
      (v11 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v10)) != 0) {
    v12 = *(unsigned int*)(v11 + 32);
  }
  else {
    v12 = 0;
  }
  v13 = GameRoutine_9db8a0(v9, v12);
  if (v13 != 0) {
    v15 = *(__int64**)(*(_QWORD*)(v13 + 24) + 16LL);
    if (v15 == nullptr) {
      goto LABEL_44;
    }
    goto LABEL_14;
  }
  v20 = 1;
  if (GameData_21f8458 != 0 && GameData_21f8468 != 0) {
    v21 = *(unsigned __int8*)(v3 + 96);
    v22 = GameData_21f8458 - 1;
    if ((GameData_21f8458 & (GameData_21f8458 - 1)) != 0) {
      v23 = *(unsigned __int8*)(v3 + 96);
      if (GameData_21f8458 <= v21) {
        v23 = (unsigned int)v21 % (unsigned int)GameData_21f8458;
      }
    }
    else {
      v23 = ((_DWORD)GameData_21f8458 - 1) & (unsigned int)v21;
    }
    v24 = *(__int64****)(GameData_21f8450 + 8 * v23);
    if (v24 != nullptr) {
      v25 = *v24;
      if (v25 != nullptr) {
        if ((GameData_21f8458 & v22) == 0) {
          while (1) {
            v27 = v25[1];
            if (v27 == (__int64*)v21) {
              if (*((unsigned __int8*)v25 + 16) == (_DWORD)v21) {
                goto LABEL_43;
              }
            }
            else if (((unsigned __int64)v27 & v22) != v23) {
              goto LABEL_44;
            }
            v25 = (__int64**)*v25;
            if (v25 == nullptr) {
              goto LABEL_45;
            }
          }
        }
        do {
          v26 = (unsigned __int64)v25[1];
          if (v26 == v21) {
            if (*((unsigned __int8*)v25 + 16) == (_DWORD)v21) {
            LABEL_43:
              v15 = v25[3];
              if (v15 == nullptr) {
              LABEL_44:
                v20 = 1;
                break;
              }
            LABEL_14:
              v16 = *((unsigned __int8*)v15 + 59);
              if (*((_BYTE*)v15 + 59) != 0) {
                v17 = GameRoutine_82e4d0(1);
                v18 = game_GameModeData_instance_;
                if (game_GameModeData_instance_ != 0) {
                  v19 = game_GameVariableTable_Find(
                      *(_QWORD*)(game_GameModeData_instance_ + 48), v17);
                  if (v19 != 0) {
                    v18 = *(_DWORD*)(v19 + 32);
                  }
                  else {
                    v18 = 0;
                  }
                }
                v20 = 0;
                v14 = v18 >= v16;
              }
              else {
                v20 = 0;
                v14 = true;
              }
              break;
            }
          }
          else {
            if (v26 >= GameData_21f8458) {
              v26 %= (unsigned __int64)GameData_21f8458;
            }
            if (v26 != v23) {
              goto LABEL_44;
            }
          }
          v25 = (__int64**)*v25;
          v20 = 1;
        } while (v25 != nullptr);
      }
    }
  }

LABEL_45:
  ui_LayoutAccessor_SetPaneVisible(a1 + 848, "T_Annotation",
                                   (((unsigned __int8)v20 | v14) & 1) == 0);
  v28 = *(unsigned __int8*)(v3 + 96);
  v29 = (_QWORD*)(GameData_21f84a0 + 40LL * *(unsigned __int8*)(v3 + 96));
  if (*v29 != 0 && game_GameModeData_instance_ != 0 &&
      (v30 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v29)) != 0) {
    v31 = *(unsigned int*)(v30 + 32);
  }
  else {
    v31 = 0;
  }
  v32 = GameRoutine_9db8a0(v28, v31);
  if (v32 != 0) {
    v33 = *(__int64**)(*(_QWORD*)(v32 + 24) + 16LL);
    if (v33 != nullptr) {
      goto LABEL_52;
    }
    goto LABEL_104;
  }
  if (GameData_21f8458 == 0 || GameData_21f8468 == 0) {
    goto LABEL_104;
  }
  v42 = *(unsigned __int8*)(v3 + 96);
  v43 = GameData_21f8458 - 1;
  if ((GameData_21f8458 & (GameData_21f8458 - 1)) != 0) {
    v44 = *(unsigned __int8*)(v3 + 96);
    if (GameData_21f8458 <= v42) {
      v44 = (unsigned int)v42 % (unsigned int)GameData_21f8458;
    }
  }
  else {
    v44 = ((_DWORD)GameData_21f8458 - 1) & (unsigned int)v42;
  }
  v47 = *(__int64****)(GameData_21f8450 + 8 * v44);
  if (v47 == nullptr) {
    goto LABEL_104;
  }
  v48 = *v47;
  if (v48 == nullptr) {
    goto LABEL_104;
  }
  if ((GameData_21f8458 & v43) == 0) {
    while (1) {
      v50 = v48[1];
      if (v50 == (__int64*)v42) {
        if (*((unsigned __int8*)v48 + 16) == (_DWORD)v42) {
          goto LABEL_95;
        }
      }
      else if (((unsigned __int64)v50 & v43) != v44) {
        goto LABEL_104;
      }
      v48 = (__int64**)*v48;
      if (v48 == nullptr) {
        goto LABEL_104;
      }
    }
  }
  while (1) {
    v49 = (unsigned __int64)v48[1];
    if (v49 == v42) {
      break;
    }
    if (v49 >= GameData_21f8458) {
      v49 %= (unsigned __int64)GameData_21f8458;
    }
    if (v49 != v44) {
      goto LABEL_104;
    }
  LABEL_75:
    v48 = (__int64**)*v48;
    if (v48 == nullptr) {
      goto LABEL_104;
    }
  }
  if (*((unsigned __int8*)v48 + 16) != (_DWORD)v42) {
    goto LABEL_75;
  }

LABEL_95:
  v33 = v48[3];
  if (v33 == nullptr) {
    goto LABEL_104;
  }

LABEL_52:
  v34 = *((unsigned __int8*)v33 + 59);
  if (*((_BYTE*)v33 + 59) != 0) {
    v35 = GameRoutine_82e4d0(1);
    v36 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_56;
    }
    v37 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v35);
    if (v37 != 0) {
      v36 = *(_DWORD*)(v37 + 32);
    LABEL_56:
      if (v36 < v34) {
      LABEL_57:
        v38 = *(unsigned __int8*)(v3 + 96);
        v39 = (_QWORD*)(GameData_21f84a0 + 40LL * *(unsigned __int8*)(v3 + 96));
        if (*v39 != 0 && game_GameModeData_instance_ != 0 &&
            (v40 = game_GameVariableTable_Find(
                 *(_QWORD*)(game_GameModeData_instance_ + 48), v39)) != 0) {
          v41 = *(unsigned int*)(v40 + 32);
        }
        else {
          v41 = 0;
        }
        v45 = GameRoutine_9db8a0(v38, v41);
        if (v45 != 0) {
          v46 = *(_QWORD*)(v45 + 24) + 16LL;
        }
        else {
          v51 = *(unsigned __int8*)(v3 + 96);
          if ((GameData_21f8458 & (GameData_21f8458 - 1)) != 0) {
            v52 = *(unsigned __int8*)(v3 + 96);
            if (GameData_21f8458 <= v51) {
              v52 = (unsigned int)v51 % (unsigned int)GameData_21f8458;
            }
            v53 = *(__int64***)(GameData_21f8450 + 8 * v52);
            do {
              do {
                v53 = (__int64**)*v53;
              } while (v53[1] != (__int64*)v51);
            } while (*((unsigned __int8*)v53 + 16) != (_DWORD)v51);
          }
          else {
            v53 = *(__int64***)(GameData_21f8450 +
                                8LL * (((_DWORD)GameData_21f8458 - 1) &
                                       (unsigned int)v51));
            do {
              do {
                v53 = (__int64**)*v53;
              } while (v53[1] != (__int64*)v51);
            } while (*((unsigned __int8*)v53 + 16) != (_DWORD)v51);
          }
          v46 = (__int64)(v53 + 3);
        }
        v54 = msg_MessageManager_instance__ptr[0];
        GameRoutine_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0,
                           *(unsigned __int8*)(*(_QWORD*)v46 + 59LL), 0);
        v55 = *v54;
        v64 = -1;
        v65 = -1;
        v66 = -1;
        v67 = -1;
        v68 = -1;
        v69 = -1;
        v70 = -1;
        v71 = -1;
        v72 = -1;
        v73 = -1;
        v74 = -1;
        v75 = -1;
        v59[0] = GameData_212e348 + 2;
        v59[1] = 0xFFFF0001FFFF0000LL;
        v60 = 0xFFFF0004FFFF0002LL;
        v61 = 0xFFFF0006FFFF0005LL;
        v76 = 8;
        v62 = -65529;
        v63 = -65528;
        v56 = GameRoutine_a4dbe0(v55, "MID_CausationMenu_Condition_Message", 0,
                                 v59);
        if (v56 != 0) {
          v57 = v56;
          v58 = ui_LayoutAccessor_FindTextBox(a1 + 848, "T_Annotation");
          if (v58 != 0) {
            GameRoutine_156c5d0(v58, v57, 0);
          }
        }
      }
    }
    else if (v34 > 0) {
      goto LABEL_57;
    }
  }

LABEL_104:
  result = ui_LayoutAccessor_FindAlignment(a1 + 848, "A_Txt");
  if (result != 0) {
    return Alignment_56b600();
  }
  return result;
}

#pragma GCC visibility pop
