#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameReliance_8e17a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1760e40(_QWORD, _QWORD);
__int64 GameRoutine_1840740(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1840a20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1841190(_QWORD, _QWORD);
__int64 GameRoutine_1841470(_QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, long double);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 TelopParts_17cbd60(_QWORD, long double);
__int64 TelopParts_17cd840(_QWORD, _QWORD);
__int64 TelopParts_17cdaa0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__n128 GameRoutine_1763490(__int64, __int64, __int64);
__n128 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212da30;
extern _UNKNOWN GameData_1a90b0d;
extern _UNKNOWN GameData_1ac1a12;
extern __int64 (***GameData_212dae8)();
extern __int64 (**game_GameReliance_Impl_Data_vtable_ptr)();
extern __int64* GameData_212c890[3];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 game_GameModeData_instance_;
extern char GameData_2166cf2;
__n128 game_telop_1764a60(__int64 a1, __int64 a2);
void game_telop_1766040(__int64 a1, int* a2, _BYTE* a3);
__int64 game_telop_17cc240(__int64 a1, __int64 a2, __int64 a3, int a4, char a5,
                           char a6, char a7);

__n128 game_telop_1764a60(__int64 a1, __int64 a2)
{
  int v2;
  int v5;
  __int64 v6;
  const char* v7;
  __int64 v8;
  __int64 v9;
  long double v10;
  __int64 v11;
  __int64 v12;
  const char* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v17;
  unsigned __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char v25;
  __n128 result;
  __int64 v27;
  __int64 v28;
  char v29;
  __int64* v30;
  void* v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  int v34;
  int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;

  v2 = *(_DWORD*)(a2 + 108);
  v31 = &GameData_1ac1a12;
  v30 = (__int64*)game_HashString(&GameData_1ac1a12);
  v5 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v6 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v30);
    if (v6 != 0) {
      v5 = *(_DWORD*)(v6 + 32);
    }
    else {
      v5 = 0;
    }
  }
  v36 = -1;
  v37 = -1;
  if (v2 >= v5) {
    v7 = "MID_Sys_Result_Msg_Reliance_EXP_Up_Big_Perch";
  }
  else {
    v7 = "MID_Sys_Result_Msg_Reliance_EXP_Up_Perch";
  }
  v38 = -1;
  v39 = -1;
  v8 = *msg_MessageManager_instance__ptr[0];
  v40 = -1;
  v41 = -1;
  v42 = -1;
  v43 = -1;
  v44 = -1;
  v45 = -1;
  v46 = -1;
  v47 = -1;
  v30 = GameData_212e348 + 2;
  v31 = (void*)0xFFFF0001FFFF0000LL;
  v32 = 0xFFFF0004FFFF0002LL;
  v33 = 0xFFFF0006FFFF0005LL;
  v48 = 8;
  v34 = -65529;
  v35 = -65528;
  v9 = GameRoutine_a4dbe0(v8, v7, 0, &v30);
  if (v9 != 0) {
    v11 = v9;
    v12 = ui_LayoutAccessor_FindTextBox(a1, "T_Txt");
    if (v12 != 0) {
      GameRoutine_156c5d0(v12, v11, 0);
    }
  }
  LODWORD(v10) = 1.0;
  if (*(_QWORD*)(a2 + 8) != 0) {
    v13 = "Select2";
  }
  else {
    v13 = "Select1";
  }
  LayoutAccessor_1562680(a1, v13, v10);
  LayoutAccessor_1562cf0(a1, "Reliance2");
  v14 = game_HashString(&GameData_1a90b0d);
  if (v14 == 0) {
    goto LABEL_38;
  }
  v15 = *(_QWORD*)(*GameData_212c890[0] + 96);
  if (v15 == 0 || *(_QWORD*)(*GameData_212c890[0] + 112) == 0) {
    goto LABEL_38;
  }
  v17 = v15 - 1;
  if ((v15 & (v15 - 1)) != 0) {
    v18 = v14;
    if (v14 >= v15) {
      v18 = v14 % v15;
    }
  }
  else {
    v18 = v17 & v14;
  }
  v19 = *(_QWORD**)(*(_QWORD*)(*GameData_212c890[0] + 88) + 8 * v18);
  if (v19 == nullptr || (v20 = (_QWORD*)*v19) == nullptr) {
  LABEL_38:
    v22 = 0;
    goto LABEL_39;
  }
  if ((v15 & v17) == 0) {
    while (1) {
      v23 = v20[1];
      if (v23 == v14) {
        if (v20[2] == v14) {
          goto LABEL_46;
        }
      }
      else if ((v23 & v17) != v18) {
        goto LABEL_38;
      }
      v20 = (_QWORD*)*v20;
      v22 = 0;
      if (v20 == nullptr) {
        goto LABEL_39;
      }
    }
  }
  while (1) {
    v21 = v20[1];
    if (v21 == v14) {
      break;
    }
    if (v21 >= v15) {
      v21 %= v15;
    }
    if (v21 != v18) {
      goto LABEL_38;
    }
  LABEL_28:
    v20 = (_QWORD*)*v20;
    if (v20 == nullptr) {
      goto LABEL_38;
    }
  }
  if (v20[2] != v14) {
    goto LABEL_28;
  }
LABEL_46:
  v22 = v20[3];
LABEL_39:
  v24 = ui_LayoutAccessor_FindPane(a1, "UnitA_Face");
  if (v24 != 0) {
    v24 = __dynamic_cast(v24, GameData_212d670[0], GameData_212d678[0], 0);
  }
  v25 = GameRoutine_1840a20(v24, 0, v22, 6, 1);
  result = ui_LayoutAccessor_SetPaneVisible(a1, "UnitA_Face", v25 & 1);
  v27 = *(_QWORD*)(a2 + 8);
  if (v27 != 0) {
    v28 = ui_LayoutAccessor_FindPane(a1, "UnitB_Face");
    if (v28 != 0) {
      v28 = __dynamic_cast(v28, GameData_212d670[0], GameData_212d678[0], 0);
    }
    v29 = GameRoutine_1840740(v28, 0, v27, 6, 1);
    return ui_LayoutAccessor_SetPaneVisible(a1, "UnitB_Face", v29 & 1);
  }
  return result;
}

void game_telop_1766040(__int64 a1, int* a2, _BYTE* a3)
{
  __int64 v3;
  bool v4;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  bool v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;

  v3 = *(_QWORD*)(a1 + 1176);
  v4 = *(_QWORD*)(a1 + 1184) != v3 && *a2 <= 5;
  if (v4 && (*a3 & 1) == 0) {
    v8 = 0;
    v9 = 0;
    do {
      v10 = *(_QWORD*)(v3 + 8 * v8);
      if (*(_BYTE*)(v10 + 34) != 0) {
        v11 = GameRoutine_1760e40(a1, 3);
        v12 = *(_QWORD*)(a1 + 1176);
        v13 = v11;
        v14 = v9 + 1;
        v15 = (*(_QWORD*)(a1 + 1184) - v12) >> 3;
        v4 = v15 > v14;
        v16 = v15 - v14;
        if (v4) {
          v17 = 8 * v14;
          while (1) {
            v18 = *(_QWORD*)(v12 + v17);
            if (*(unsigned __int8*)(v10 + 34) ==
                    *(unsigned __int8*)(v18 + 34) &&
                *(unsigned __int8*)(v10 + 33) ==
                    *(unsigned __int8*)(v18 + 33)) {
              break;
            }
            v17 += 8;
            if (--v16 == 0) {
              goto LABEL_17;
            }
          }
          LayoutAccessor_1562cf0(v11, "MasterySkillNum2");
          if (*a2 < 5) {
            v30 = ui_LayoutAccessor_FindPane(v13, "Icon00");
            if (v30 != 0) {
              v30 = __dynamic_cast(v30, GameData_212d670[0],
                                   GameData_212d678[0], 0);
            }
            GameRoutine_1841190(v30, *(unsigned __int8*)(v10 + 33));
            v31 = ui_LayoutAccessor_FindPane(v13, "Icon01");
            if (v31 != 0) {
              v32 = __dynamic_cast(v31, GameData_212d670[0],
                                   GameData_212d678[0], 0);
              v33 = *(unsigned __int8*)(v10 + 34);
              v34 = v32;
              if (v32 != 0) {
                v43 = *(int*)((char*)((int*)0x24LL) + (_QWORD)GameData_212da30);
                v35 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v32 + 88LL))(
                    v32, 0);
                if (v35 != 0) {
                  *(_DWORD*)(v35 + 12) = v43;
                }
              }
            }
            else {
              v33 = *(unsigned __int8*)(v10 + 34);
              v34 = 0;
            }
            GameRoutine_1841470(v34, v33);
            GameRoutine_1763490(v13, (__int64)"L_Skill00",
                                *(_QWORD*)(v10 + 48));
            GameRoutine_1763490(v13, (__int64)"L_Skill01",
                                *(_QWORD*)(v18 + 48));
            v36 = *(_QWORD*)(a1 + 1176);
            v37 = *(_QWORD*)(a1 + 1184);
            v38 = v36 + 8LL * v9;
            if (v37 != v38 + 8) {
              memmove(v36 + 8LL * v9, v38 + 8, v37 - (v38 + 8));
              v36 = *(_QWORD*)(a1 + 1176);
            }
            v39 = v36 + v17;
            v40 = v37 - v36 - v17;
            v41 = v39 - 8;
            *(_QWORD*)(a1 + 1184) = v37 - 8;
            v42 = v40 - 8;
            if (v39 != v37 - 8) {
              memmove(v39 - 8, v39, v40 - 8);
            }
            --v9;
            *(_QWORD*)(a1 + 1184) = v41 + v42;
            v28 = *a2 + 2;
            goto LABEL_29;
          }
          *a3 = 1;
        }
        else {
        LABEL_17:
          if ((*a3 & 1) == 0) {
            LayoutAccessor_1562cf0(v11, "MasterySkillNum1");
            v19 = ui_LayoutAccessor_FindPane(v13, "Icon00");
            if (v19 != 0) {
              v19 = __dynamic_cast(v19, GameData_212d670[0],
                                   GameData_212d678[0], 0);
            }
            GameRoutine_1841190(v19, *(unsigned __int8*)(v10 + 33));
            v20 = ui_LayoutAccessor_FindPane(v13, "Icon01");
            if (v20 != 0) {
              v20 = __dynamic_cast(v20, GameData_212d670[0],
                                   GameData_212d678[0], 0);
              v21 = *(unsigned __int8*)(v10 + 34);
              if (v20 != 0) {
                v22 = v20;
                v23 = *(int*)((char*)((int*)0x24LL) + (_QWORD)GameData_212da30);
                v24 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v20 + 88LL))(
                    v20, 0);
                if (v24 != 0) {
                  *(_DWORD*)(v24 + 12) = v23;
                }
                v20 = v22;
              }
            }
            else {
              v21 = *(unsigned __int8*)(v10 + 34);
            }
            GameRoutine_1841470(v20, v21);
            GameRoutine_1763490(v13, (__int64)"L_Skill00",
                                *(_QWORD*)(v10 + 48));
            v25 = *(_QWORD*)(a1 + 1176) + 8LL * v9;
            v26 = *(_QWORD*)(a1 + 1184);
            v27 = v26 - (v25 + 8);
            if (v26 != v25 + 8) {
              memmove(*(_QWORD*)(a1 + 1176) + 8LL * v9, v25 + 8,
                      v26 - (v25 + 8));
            }
            --v9;
            *(_QWORD*)(a1 + 1184) = v25 + v27;
            v28 = *a2 + 1;
          LABEL_29:
            *a2 = v28;
          }
        }
      }
      v3 = *(_QWORD*)(a1 + 1176);
      v8 = ++v9;
      v29 = v9 < (unsigned __int64)((*(_QWORD*)(a1 + 1184) - v3) >> 3) &&
            *a2 <= 5;
    } while (v29 && (*a3 & 1) == 0);
  }
}

__int64 game_telop_17cc240(__int64 a1, __int64 a2, __int64 a3, int a4, char a5,
                           char a6, char a7)
{
  const char* v12;
  __int64 v13;
  __int64 v14;
  __int64 (***v15)();
  __int64 v16;
  unsigned int v17;
  int v18;
  unsigned __int64 v19;
  long double v20;
  __int64 v21;
  _QWORD v23[3];
  _QWORD v24[3];
  int v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int16 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  int v35;
  char v36;
  char v37;
  char v38;
  __int16 v39;
  __int16 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  _BYTE v46[11];
  int v47;
  __int16 v48;
  int v49;
  _WORD v50[12];

  v29 = a2;
  v30 = a3;
  v28 = 0;
  v26 = 0;
  v27 = 0;
  v31 = 15;
  v25 = 3;
  if ((a5 & 1) != 0) {
    v12 = "SE_SYS_Heart_Up_H";
  }
  else {
    v12 = "SE_SYS_Heart_Up";
  }
  v47 = -1;
  v39 = 0;
  v40 = 0;
  v32 = 0;
  v33 = 0;
  v38 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  *(_QWORD*)v46 = 0;
  *(_DWORD*)&v46[7] = 0x10000;
  v48 = 0;
  v49 = 0;
  v50[0] = 0;
  v36 = a5;
  v37 = a6;
  v35 = a4;
  GameRoutine_60a020(v50, v12);
  v34 = 0;
  v24[0] = 0;
  v24[1] = a2;
  if (a2 != 0) {
    v13 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 24) + 1784LL) + 272LL);
  }
  else {
    v13 = 0;
  }
  v24[2] = v13;
  v23[0] = 0;
  v23[1] = a3;
  if (a3 == 0) {
    v15 = &game_GameReliance_Impl_Data_vtable_ptr;
    goto LABEL_14;
  }
  v14 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a3 + 24) + 1784LL) + 272LL);
  v23[2] = v14;
  v15 = GameData_212dae8;
  if (v13 == 0 || v14 == 0) {
  LABEL_14:
    if (*((_BYTE*)((_UNKNOWN**)0x8LL) + (_QWORD)v15 + 2) == 0) {
      goto LABEL_18;
    }
    goto LABEL_15;
  }
  v16 = *(_QWORD*)(game_GameModeData_instance_ + 128);
  v17 = GameReliance_8e17a0(v16, v24, v23);
  if ((v17 & 0x80000000) == 0) {
    v15 = (__int64 (***)())(*(_QWORD*)(v16 + 8) + 56LL * v17);
    if (*((_BYTE*)v15 + 10) == 0) {
      goto LABEL_18;
    }
  LABEL_15:
    v18 = *((unsigned __int16*)v15 + 6);
    if ((a7 & 1) != 0) {
      LODWORD(v34) = *((unsigned __int16*)v15 + 6);
      HIDWORD(v34) = v18;
      v35 = 0;
    }
    else {
      LODWORD(v34) = v18 - a4;
      HIDWORD(v34) = v18 - a4;
    }
    goto LABEL_18;
  }
  v15 = &game_GameReliance_Impl_Data_vtable_ptr;
  if (GameData_2166cf2 != 0) {
    goto LABEL_15;
  }
LABEL_18:
  v19 = *(_QWORD*)(a1 + 1648);
  if (v19 >= *(_QWORD*)(a1 + 1656)) {
    v21 = TelopParts_17cd840(a1 + 1640, &v25);
  }
  else {
    TelopParts_17cdaa0(*(_QWORD*)(a1 + 1648), &v25);
    v21 = v19 + 248;
  }
  *(_QWORD*)(a1 + 1648) = v21;
  return TelopParts_17cbd60(&v25, v20);
}

#pragma GCC visibility pop
