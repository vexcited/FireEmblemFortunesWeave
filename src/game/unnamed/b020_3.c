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
    (*(void (**)(void))(*v66 + v22))();
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
    (*(void (**)(void))(*v66 + v39))();
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

__int64 GameHr_15940f0(_QWORD* a1, unsigned int a2, unsigned int a3)
{
  __int64 result;
  _QWORD* v7;
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
  float v34;
  float v35;
  int v36;
  float v37;
  __int64 v38;
  float v39;
  float v40;
  char v41;

  result = a1[1];
  if (result != 0) {
    result = GameRoutine_1a0a0c0(result);
    if (result != 0) {
      v7 = (_QWORD*)*a1;
      v8 = result;
      if (v7 != nullptr) {
        v9 = GameRoutine_155f480(v7, "T_Num");
        if (v9 != 0) {
          v10 =
              GameRoutine_1a0a6c0(v9, GameData_212d670[0], GameData_212d690, 0);
          if (v10 != 0) {
            GameRoutine_156c910(v10, "%d", 1, a2);
          }
        }
        v11 = GameRoutine_155f480(v7, "T_MaxNum");
        if (v11 != 0) {
          v12 = GameRoutine_1a0a6c0(v11, GameData_212d670[0], GameData_212d690,
                                    0);
          if (v12 != 0) {
            GameRoutine_156c910(v12, "%d", 1, a3);
          }
        }
        v13 = GameRoutine_1563e00(v7, "A_Num");
        if (v13 != 0) {
          GameRoutine_56b600(v13, v14, v15, v16, v17, v18, v19, v20);
        }
        result = GameRoutine_155f480(v7, &GameData_1ac6c8b);
        if (result != 0) {
          v21 = result;
          v22 = GameRoutine_1563e00(v7, "A_Txt");
          if (v22 != 0) {
            GameRoutine_56b600(v22, v23, v24, v25, v26, v27, v28, v29);
            v30 = v7[1];
            if (v30 != 0) {
              v31 = GameRoutine_1a0a0c0(v30);
              if (v31 != 0) {
                v32 = v31;
                if (*v7 != 0) {
                  GameRoutine_13633c0(*v7);
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
                  GameRoutine_1a09c50(v32);
                }
              }
            }
          }
          v33 = GameRoutine_155f480(v7, "A_Txt");
          v34 = GameRoutine_156c160(v33, 0);
          v35 = *(float*)(v21 + 80);
          v36 = *(_DWORD*)(v21 + 84);
          v37 = v34;
          v38 = GameRoutine_58fac0(v21, "Min_Width");
          if (v38 != 0) {
            v35 = (float)*(int*)(v38 + *(unsigned int*)(v38 + 4));
          }
          result = GameRoutine_58fac0(v21, "Margin_Width");
          if (result != 0) {
            v39 = (float)*(int*)(result + *(unsigned int*)(result + 4));
          }
          else {
            v39 = 0.0;
          }
          v40 = v37 + v39;
          v41 = *(_BYTE*)(v21 + 88);
          *(_DWORD*)(v21 + 84) = v36;
          if (v40 < v35) {
            v40 = v35;
          }
          *(_BYTE*)(v21 + 88) = v41 | 0x10;
          *(float*)(v21 + 80) = v40;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        return GameRoutine_1a09c50(v8);
      }
    }
  }
  return result;
}

__int64 GameHr_159d8d0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16[4];
  __int64 v17;
  __int64 v18;
  _BYTE v19[5];

  v2 = GameRoutine_1563e00(a1, "A_Key");
  if (v2 != 0) {
    GameRoutine_56b600(v2, v3, v4, v5, v6, v7, v8, v9);
    v10 = a1[1];
    if (v10 != 0) {
      v11 = GameRoutine_1a0a0c0(v10);
      if (v11 != 0) {
        v12 = v11;
        if (*a1 != 0) {
          GameRoutine_13633c0(*a1);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
          GameRoutine_1a09c50(v12);
        }
      }
    }
  }
  result = GameRoutine_155f480(a1, "Wdw");
  if (result != 0) {
    result = GameRoutine_1a0a6c0(result, GameData_212d670[0],
                                 GameData_212fc70[0], 0);
    if (result != 0) {
      v14 = result;
      *(_DWORD*)&v19[1] = 0;
      v18 = 0;
      v16[2] = 0;
      v16[3] = 0;
      v16[0] = result;
      v16[1] = GameRoutine_155f480(a1, "A_Key");
      *(_WORD*)v19 = 257;
      v17 = 1120403456;
      v15 = GameRoutine_58fac0(v14, "Margin_Width");
      if (v15 != 0) {
        *(float*)&v17 = (float)*(int*)(v15 + *(unsigned int*)(v15 + 4));
      }
      GameRoutine_156c240(v16);
      return GameRoutine_1561a90(a1, "Overlay", *(float*)(v14 + 80),
                                 *(float*)(v14 + 84));
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
