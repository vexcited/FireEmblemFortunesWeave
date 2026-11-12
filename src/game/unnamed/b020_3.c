#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern char GameData_1a9f09e;
extern _UNKNOWN GameData_1ac6c8b;
extern __int64 (*GameData_204eb98[])();
extern __int64 (*GameData_204eca8[])();
extern __int64* GameData_212c738[2];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64 GameData_212d690;
extern __int64 GameData_212dbb8[9];
extern __int64* GameData_212e348;
extern __int64* GameData_212ea58;
extern __int64* GameData_212fc70[2];
extern __int64 GameData_21ca310;
extern __int64 GameData_21caab0;
extern __int64 GameData_22416f0;
__int64 GameRoutine_13633c0(_QWORD);
__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_136afb0(_QWORD, _QWORD);
__int64 GameRoutine_155f480(_QWORD, _QWORD);
__int64 GameRoutine_1560ec0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1561a90(_QWORD, _QWORD, float, float);
__int64 GameRoutine_15621a0(_QWORD, _QWORD);
__int64 GameRoutine_1563e00(_QWORD, _QWORD);
float GameRoutine_156c160(__int64, char);
void GameRoutine_156c240(__int64*);
__int64 GameRoutine_156c5d0(__int64, __int64, char);
__int64 GameRoutine_156c910(__int64 result, const char*, int, ...);
__int64 GameRoutine_159d8d0(_QWORD*);
__int64 GameRoutine_15b59e0(_QWORD);
__int64 GameRoutine_15b5f20(_QWORD);
__int64 GameRoutine_1840740(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1840e20(_QWORD, _QWORD);
__int64 GameRoutine_18422d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_190a0c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a0a0c0(_QWORD);
__int64 GameRoutine_1a0a6c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_56b600(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD);
__int64 GameRoutine_58fac0(_QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD);
__int64 GameRoutine_67ed20(_QWORD);
__int64 GameRoutine_6c8300(_QWORD, _QWORD);
__int64 GameRoutine_6ea9d0(_QWORD);
__int64 GameRoutine_97b2f0(_QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Alignment_56b600(__int64 result);
__int64 ControlCreator_13633c0(__int64 result);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneSize(__int64 result, __int64, float, float);
const char* Pane_58fac0(__int64, const char*);
float game_156c160(__int64);
void GameRoutine_156c910_alt1(__int64, const char*, int,
                              ...) __asm__("GameRoutine_156c910");
__int64 GameHr_15940f0(__int64 a1, unsigned int a2, unsigned int a3);
__int64 GameHr_159d8d0(__int64* a1);

__int64 GameHr_1590b40(__int64 result, char a2, __int64** a3, char a4)
{
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64** v21;
  __int64 v22;
  __int64 v23;
  char v24;
  __int64 v25;
  _BYTE* v26;
  __int64** v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned int v36;
  unsigned int v37;
  __int64 v38;
  __int64 v39;
  __int64* v40;
  __int64* v41;
  const char* v42;
  int v43;
  __int64* v44;
  __int64 v45;
  __int64* v46;
  __int64 v47;
  __int64 v48;
  __int64* v49;
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
  _QWORD v63[2];
  unsigned __int64 v64;
  unsigned __int64 v65;
  _QWORD* v66;
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
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;

  v6 = *a3;
  if (a3[1] == *a3) {
    return result;
  }
  v80 = v4;
  v81 = v5;
  v9 = result;
  if (GameData_21caab0 == 0 || *(_DWORD*)(GameData_21caab0 + 60) != 3) {
    v13 = *v6;
    goto LABEL_12;
  }
  v10 = (__int64*)GameData_212dbb8[0];
  v11 = *(_QWORD*)GameData_212dbb8[0];
  if (*(_QWORD*)GameData_212dbb8[0] == 0 || *(_BYTE*)(v11 + 9) != 1) {
    if (*GameData_212ea58 != 0) {
      goto LABEL_46;
    }
  LABEL_25:
    v21 = a3;
    v82 = 0;
    v63[0] = GameData_204eca8;
    v63[1] = &v82;
    v66 = v63;
    GameRoutine_15b5f20(v63);
    if (v66 == v63) {
      v22 = 32;
    }
    else {
      if (v66 == nullptr) {
        goto LABEL_45;
      }
      v22 = 40;
    }
    (*(void (**)(void*))(*v66 + v22))(v66);
  LABEL_45:
    a3 = v21;
    if (v82 != 0) {
      goto LABEL_46;
    }
    v38 = *v10;
    if (*v10 == 0 || *(_BYTE*)(v38 + 9) != 1 || *(_DWORD*)(v38 + 136) != 1) {
      goto LABEL_86;
    }
    v82 = 0;
    v63[0] = GameData_204eb98;
    v63[1] = &v82;
    v66 = v63;
    GameRoutine_15b59e0(v63);
    if (v66 == v63) {
      v39 = 32;
    }
    else {
      if (v66 == nullptr) {
        goto LABEL_85;
      }
      v39 = 40;
    }
    (*(void (**)(void*))(*v66 + v39))(v66);
  LABEL_85:
    a3 = v21;
    if (v82 == 0) {
      goto LABEL_86;
    }
    goto LABEL_46;
  }
  if (*(_DWORD*)(v11 + 136) != 1 && *GameData_212ea58 == 0) {
    goto LABEL_25;
  }
LABEL_46:
  v27 = a3;
  LODWORD(v63[0]) = 16;
  v28 = GameRoutine_6ea9d0(v63);
  a3 = v27;
  if (v28 != 0) {
    v29 = *(_QWORD*)(v28 + 432);
    if (v29 == 0) {
      v30 = *(_QWORD*)(v28 + 440);
      if (v30 != 0 &&
          (unsigned int)(v31 = *(unsigned __int8*)(v30 + 16)) <= 8) {
        v43 = v31 - 3;
        while (1) {
          if (v43 == 0) {
            v29 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
            if (v29 != 0) {
              break;
            }
          }
          if (++v43 == 6) {
            goto LABEL_50;
          }
        }
      }
      else {
      LABEL_50:
        v29 = 0;
      }
    }
    v32 = -1;
    while (1) {
    LABEL_53:
      v33 = v29;
      if (GameData_21caab0 != 0) {
        v34 = *(_QWORD*)(GameData_21caab0 + 96);
      }
      else {
        v34 = 0;
      }
      if (*(_QWORD*)(v28 + 392) == v34 || (*(_BYTE*)(v28 + 418) & 0x10) == 0) {
        goto LABEL_60;
      }
      if ((v32 & 0x80000000) == 0) {
        break;
      }
      v32 = *(unsigned __int8*)(v28 + 501);
      if (v33 == 0) {
        goto LABEL_86;
      }
    LABEL_61:
      v29 = *(_QWORD*)(v33 + 432);
      v28 = v33;
      if (v29 == 0) {
        v35 = *(_QWORD*)(v33 + 440);
        v28 = v33;
        if (v35 != 0) {
          v36 = *(unsigned __int8*)(v35 + 16);
          v29 = 0;
          v28 = v33;
          if (v36 <= 8) {
            v37 = v36 - 3;
            while (1) {
              if (v37 == 0) {
                v29 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                if (v29 != 0) {
                  break;
                }
              }
              if (++v37 == 6) {
                v29 = 0;
                v28 = v33;
                goto LABEL_53;
              }
            }
            v28 = v33;
          }
        }
      }
    }
    if (v32 != *(unsigned __int8*)(v28 + 501)) {
      v40 = *v27;
      v41 = v27[1];
      v42 = "MID_CorpsMenu_CorpsGroupName";
      goto LABEL_90;
    }
  LABEL_60:
    if (v33 == 0) {
      goto LABEL_86;
    }
    goto LABEL_61;
  }
LABEL_86:
  v40 = *a3;
  v41 = a3[1];
  v42 = "MID_CorpsMenu_CorpsName";
  if (*a3 == v41) {
  LABEL_90:
    if (v40 == v41) {
    LABEL_97:
      v13 = *v40;
    }
    else {
      v46 = v40;
      while (1) {
        v47 = GameData_21caab0 != 0 ? *(_QWORD*)(GameData_21caab0 + 96) : 0LL;
        v48 = *v46++;
        v13 = v48;
        if (*(_QWORD*)(v48 + 392) == v47) {
          break;
        }
        if (v46 == v41) {
          goto LABEL_97;
        }
      }
    }
    if (GameData_21caab0 != 0 && *(_DWORD*)(GameData_21caab0 + 60) == 3) {
      if (*(_BYTE*)(v13 + 2136) == 0) {
      LABEL_105:
        GameRoutine_67ed20(*(_QWORD*)(v13 + 392));
      LABEL_106:
        v49 = GameData_212c738[0];
        GameRoutine_60a020(*GameData_212c738[0] + 14704);
        v50 = *v49;
        v67 = -1;
        v68 = -1;
        v69 = -1;
        v70 = -1;
        v71 = -1;
        v72 = -1;
        v73 = -1;
        v74 = -1;
        v75 = -1;
        v76 = -1;
        v77 = -1;
        v78 = -1;
        v63[0] = GameData_212e348 + 2;
        v63[1] = 0xFFFF0001FFFF0000LL;
        v64 = 0xFFFF0004FFFF0002LL;
        v65 = 0xFFFF0006FFFF0005LL;
        v79 = 8;
        v66 = (_QWORD*)0xFFFF0008FFFF0007LL;
        v51 = GameRoutine_a4dbe0(v50, v42, 0, v63);
        if (v51 != 0) {
          v52 = v51;
          v53 = GameRoutine_15621a0(v9, "T_Name");
          if (v53 != 0) {
            GameRoutine_156c5d0(v53, v52, 0);
          }
        }
        if ((*(_BYTE*)(v13 + 418) & 0x10) != 0) {
          v54 = GameRoutine_155f480(v9, "IconNum");
          if (v54 != 0) {
            v54 = GameRoutine_1a0a6c0(v54, GameData_212d670[0],
                                      GameData_212d678[0], 0);
          }
          GameRoutine_18422d0(
              v54,
              (*(unsigned __int8*)(v13 + 501) + 1) &
                  (unsigned int)((int)(*(_DWORD*)(v13 + 416) << 11) >> 31),
              2);
        }
        v55 = GameRoutine_1563e00(v9, "A_Name");
        if (v55 != 0) {
          GameRoutine_56b600(v55, v56, v57, v58, v59, v60, v61, v62);
        }
        goto LABEL_18;
      }
    LABEL_101:
      GameRoutine_97b2f0(v13 + 2104);
      goto LABEL_106;
    }
  }
  else {
    v44 = *a3;
    while (1) {
      v45 = *v44++;
      v13 = v45;
      if ((*(_BYTE*)(v45 + 418) & 8) != 0) {
        break;
      }
      if (v44 == v41) {
        goto LABEL_90;
      }
    }
    if (GameData_21caab0 != 0 && *(_DWORD*)(GameData_21caab0 + 60) == 3) {
      v42 = "MID_CorpsMenu_CorpsName";
      if (*(_BYTE*)(v13 + 2136) == 0) {
        goto LABEL_105;
      }
      goto LABEL_101;
    }
  }
LABEL_12:
  v14 = *(_QWORD*)(GameRoutine_6c8300(v13, 0) + 32);
  if (v14 == 0) {
    v16 = &GameData_1a9f09e;
  LABEL_16:
    v17 = GameRoutine_15621a0(v9, "T_Name");
    if (v17 != 0) {
      GameRoutine_156c5d0(v17, (__int64)v16, 0);
    }
    goto LABEL_18;
  }
  v67 = -1;
  v68 = -1;
  v69 = -1;
  v70 = -1;
  v15 = *GameData_212c738[0];
  v71 = -1;
  v72 = -1;
  v73 = -1;
  v74 = -1;
  v75 = -1;
  v76 = -1;
  v77 = -1;
  v78 = -1;
  v63[0] = GameData_212e348 + 2;
  v63[1] = 0xFFFF0001FFFF0000LL;
  v64 = 0xFFFF0004FFFF0002LL;
  v65 = 0xFFFF0006FFFF0005LL;
  v79 = 8;
  v66 = (_QWORD*)0xFFFF0008FFFF0007LL;
  v16 = (char*)GameRoutine_a4dbe0(v15, v14, 0, v63);
  if (v16 != nullptr) {
    goto LABEL_16;
  }
LABEL_18:
  if ((a2 & 1) == 0) {
    v18 = GameRoutine_155f480(v9, "IconClan");
    if ((a4 & 1) != 0) {
      if (v18 != 0) {
        v19 = GameRoutine_1a0a6c0(v18, GameData_212d670[0], GameData_212d678[0],
                                  0);
      }
      else {
        v19 = 0;
      }
      v23 = GameRoutine_6c8300(v13, 0);
      v24 = GameRoutine_1840e20(v19, v23);
    }
    else {
      if (v18 != 0) {
        v20 = GameRoutine_1a0a6c0(v18, GameData_212d670[0], GameData_212d678[0],
                                  0);
      }
      else {
        v20 = 0;
      }
      v25 = GameRoutine_6c8300(v13, 0);
      v24 = 0;
      if (v20 != 0 && v25 != 0) {
        v26 = *(_BYTE**)(v25 + 48);
        if (v26 != nullptr && *v26 != 0 &&
            (GameRoutine_136afb0(GameData_22416f0 + 1264, 5) & 1) != 0) {
          v24 = GameRoutine_136a920(GameData_22416f0 + 1264, v20, 0, 5,
                                    *(_QWORD*)(v25 + 48));
        }
        else {
          v24 = 0;
        }
      }
    }
    GameRoutine_1560ec0(v9, "IconClan", v24 & 1);
  }
  result = GameRoutine_155f480(v9, "Face");
  if (result != 0) {
    result = GameRoutine_1a0a6c0(result, GameData_212d670[0],
                                 GameData_212d678[0], 0);
    if (result != 0) {
      return GameRoutine_1840740(result, 0, v13, 6, 1);
    }
  }
  return result;
}

__int64 GameHr_15940f0(__int64 a1, unsigned int a2, unsigned int a3)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  float v20;
  float v21;
  int v22;
  float v23;
  const char* v24;
  float v25;
  float v26;
  char v27;

  result = *(_QWORD*)(a1 + 8);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v7 = *(__int64**)a1;
      v8 = result;
      if (v7 != nullptr) {
        v9 = ui_LayoutAccessor_FindPane(v7, (__int64)"T_Num");
        if (v9 != 0) {
          v10 = __dynamic_cast(v9, GameData_212d670[0], GameData_212d690, 0);
          if (v10 != 0) {
            GameRoutine_156c910_alt1(v10, "%d", 1, a2);
          }
        }
        v11 = ui_LayoutAccessor_FindPane(v7, (__int64)"T_MaxNum");
        if (v11 != 0) {
          v12 = __dynamic_cast(v11, GameData_212d670[0], GameData_212d690, 0);
          if (v12 != 0) {
            GameRoutine_156c910_alt1(v12, "%d", 1, a3);
          }
        }
        v13 = ui_LayoutAccessor_FindAlignment(v7, (__int64)"A_Num");
        if (v13 != 0) {
          Alignment_56b600(v13);
        }
        result = ui_LayoutAccessor_FindPane(v7, (__int64)&GameData_1ac6c8b);
        if (result != 0) {
          v14 = result;
          v15 = ui_LayoutAccessor_FindAlignment(v7, (__int64)"A_Txt");
          if (v15 != 0) {
            Alignment_56b600(v15);
            v16 = v7[1];
            if (v16 != 0) {
              v17 = std___1___shared_weak_count_lock(v16);
              if (v17 != 0) {
                v18 = v17;
                if (*v7 != 0) {
                  ControlCreator_13633c0(*v7);
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
                  std___1___shared_weak_count___release_weak(v18);
                }
              }
            }
          }
          v19 = ui_LayoutAccessor_FindPane(v7, (__int64)"A_Txt");
          v20 = game_156c160(v19);
          v21 = *(float*)(v14 + 80);
          v22 = *(_DWORD*)(v14 + 84);
          v23 = v20;
          v24 = Pane_58fac0(v14, "Min_Width");
          if (v24 != nullptr) {
            v21 = (float)*(int*)&v24[*((unsigned int*)v24 + 1)];
          }
          result = (__int64)Pane_58fac0(v14, "Margin_Width");
          if (result != 0) {
            v25 = (float)*(int*)(result + *(unsigned int*)(result + 4));
          }
          else {
            v25 = 0x0.0p+0f;
          }
          v26 = v23 + v25;
          v27 = *(_BYTE*)(v14 + 88);
          *(_DWORD*)(v14 + 84) = v22;
          if (v26 < v21) {
            v26 = v21;
          }
          *(_BYTE*)(v14 + 88) = v27 | 0x10;
          *(float*)(v14 + 80) = v26;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        return std___1___shared_weak_count___release_weak(v8);
      }
    }
  }
  return result;
}

__int64 GameHr_159d8d0(__int64* a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  const char* v8;
  struct {
    __int64 v9[4];
    __int64 v10;
    __int64 v11;
    _BYTE v12[5];
  } v9_;

  v2 = ui_LayoutAccessor_FindAlignment(a1, (__int64)"A_Key");
  if (v2 != 0) {
    Alignment_56b600(v2);
    v3 = a1[1];
    if (v3 != 0) {
      v4 = std___1___shared_weak_count_lock(v3);
      if (v4 != 0) {
        v5 = v4;
        if (*a1 != 0) {
          ControlCreator_13633c0(*a1);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          std___1___shared_weak_count___release_weak(v5);
        }
      }
    }
  }
  result = ui_LayoutAccessor_FindPane(a1, (__int64)"Wdw");
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212fc70[0], 0);
    if (result != 0) {
      v7 = result;
      *(_DWORD*)&v9_.v12[1] = 0;
      v9_.v11 = 0;
      v9_.v9[2] = 0;
      v9_.v9[3] = 0;
      v9_.v9[0] = result;
      v9_.v9[1] = ui_LayoutAccessor_FindPane(a1, (__int64)"A_Key");
      *(_WORD*)v9_.v12 = 257;
      v9_.v10 = 1120403456;
      v8 = Pane_58fac0(v7, "Margin_Width");
      if (v8 != nullptr) {
        *(float*)&v9_.v10 = (float)*(int*)&v8[*((unsigned int*)v8 + 1)];
      }
      GameRoutine_156c240(v9_.v9);
      return ui_LayoutAccessor_SetPaneSize((__int64)a1, (__int64)"Overlay",
                                           *(float*)(v7 + 80),
                                           *(float*)(v7 + 84));
    }
  }
  return result;
}

__int64 GameHr_159dcc0(__int64 result, __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  char v10;
  _BYTE v11[4];
  _DWORD v12[2];
  _BYTE v13[8];

  if (a2 != 0) {
    v2 = (_QWORD*)result;
    GameRoutine_1560ec0(result, "T_Txt", 1);
    v4 = GameRoutine_15621a0(v2, "T_Txt");
    if (v4 != 0) {
      GameRoutine_156c5d0(v4, a2, 0);
    }
    v5 = GameRoutine_15621a0(v2, "T_Txt");
    if (v5 != 0) {
      v6 = v5;
      v7 = GameRoutine_15621a0(v2, "T_Txt");
      if (v7 != 0) {
        GameRoutine_190a0c0(v13, v12, v11, v7, *(_QWORD*)(v7 + 216));
        v8 = v12[0];
        v9 = v12[1];
      }
      else {
        v8 = 0;
        v9 = 0;
      }
      v10 = *(_BYTE*)(v6 + 88);
      *(_DWORD*)(v6 + 80) = v8;
      *(_DWORD*)(v6 + 84) = v9;
      *(_BYTE*)(v6 + 88) = v10 | 0x10;
    }
    return GameRoutine_159d8d0(v2);
  }
  return result;
}

#pragma GCC visibility pop
