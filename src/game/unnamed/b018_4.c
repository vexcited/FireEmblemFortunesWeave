#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern __int64 (*GameData_203a380[])();
extern __int64 (*GameData_203a430[])();
extern __int64 GameData_212bf68;
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dce8;
extern __int64* GameData_2130240[8];
extern _DWORD* GameData_2130fb8;
extern __int64* GameData_2132488;
extern _UNKNOWN GameData_2166898;
extern __int64 GameData_21f4000;
extern char GameData_2243798;
extern __int64 GameData_22437a0;
extern __int64 GameData_22437a8;
extern __int64 GameData_22437b0;
extern int GameData_22437b8;
extern __int64 GameData_22437c0;
extern int GameData_22437c8;
extern __int64 GameData_22437d0;
extern char GameData_22437d8;
extern __int64 GameData_22437e0;
extern __int64 GameData_22437e8;
extern __int64 GameData_22437f0;
extern int GameData_22437f8;
extern __int64 GameData_2243800;
extern int GameData_2243808;
extern __int64 GameData_2243810;
extern char GameData_2243818;
extern __int64 GameData_2243820;
extern __int64 GameData_2243828;
extern __int64 GameData_2243830;
extern int GameData_2243838;
extern __int64 GameData_2243840;
extern int GameData_2243848;
extern __int64 GameData_2243850;
extern char GameData_2243858;
extern __int64 GameData_2243860;
extern __int64 GameData_2243868;
extern __int64 GameData_2243870;
extern int GameData_2243878;
extern __int64 GameData_2243880;
extern int GameData_2243888;
extern __int64 GameData_2243890;
extern char GameData_2243898;
extern __int64 GameData_22438a0;
extern __int64 GameData_22438a8;
extern __int64 GameData_22438b0;
extern int GameData_22438b8;
extern __int64 GameData_22438c0;
extern int GameData_22438c8;
extern __int64 GameData_22438d0;
extern char GameData_22438d8;
extern __int64 GameData_22438e0;
extern __int64 GameData_22438e8;
extern __int64 GameData_22438f0;
extern int GameData_22438f8;
extern __int64 GameData_2243900;
extern int GameData_2243908;
extern __int64 GameData_2243910;
extern char GameData_2243918;
extern __int64 GameData_2243920;
extern __int64 GameData_2243928;
extern __int64 GameData_2243930;
extern int GameData_2243938;
extern __int64 GameData_2243940;
extern int GameData_2243948;
extern __int64 GameData_2243950;
extern _UNKNOWN GameData_2243958;
extern __int64 GameData_2265ee0;
__int64 GameRoutine_13892a0(__int64);
__int64 GameRoutine_138e5e0(__int64);
__int64 GameRoutine_14107c0(_QWORD, _QWORD);
__int64 GameRoutine_14127e0(_QWORD, _QWORD);
void GameRoutine_1418aa0();
__int64 GameRoutine_141ff70();
__int64 GameRoutine_1420000();
__int64 GameRoutine_1420010();
__int64 GameRoutine_1a09b70(_QWORD);
__int64 GameRoutine_1a09b80(_QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a09fd0(_QWORD);
__int64 GameRoutine_1a09fe0(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
__int64 GameRoutine_60a270(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_65a7c0(_QWORD);
__int64 GameRoutine_7a8520(_QWORD);

__int64 GameHr_13dc340(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  float v7;
  int v8;
  __int16 v9;
  _BYTE* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  char* v13;
  __int64 v14;
  int v15;
  char v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  unsigned int v23;
  __int64 result;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;
  __int16 v30;
  __int64 v31;
  unsigned int v32;
  _BYTE* v33;
  unsigned __int64 v34;
  char* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  char v41;
  int v42;
  __int64 v43;
  __int64 v44;
  unsigned int v45;
  float v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  char* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  int v56;
  char v57;
  int v58;
  float v59;
  int v60;
  __int16 v61;
  char v62;
  _BYTE v63[7];
  _BYTE* v64;
  int v65;
  char v66;
  int v67;
  float v68;
  int v69;
  __int16 v70;
  _BYTE* v71;

  v71 = v63;
  v2 = GameRoutine_138e5e0(GameData_21f4000);
  if (v2 != 0) {
    v3 = v2;
    v4 = GameRoutine_651b90(GameData_2265ee0, 40, 16, 0);
    *(_BYTE*)(v4 + 38) = 0;
    v53 = 41;
    v54 = 38;
    v55 = v4;
    *(_QWORD*)(v4 + 16) = 0xB383E3A783E3B782LL;
    *(_QWORD*)(v4 + 24) = 0x5F94BCE6BA87E55FLL;
    *(_QWORD*)(v4 + 30) = 0x94BCE68B96E95F94LL;
    *(_QWORD*)v4 = 0x83E3A383E3AD82E3LL;
    *(_QWORD*)(v4 + 8) = 0xE3BC83E3A283E3A9LL;
    GameRoutine_14107c0(&v62, &v53);
    if ((v53 & 1) != 0 && v55 != 0) {
      v5 = 128;
      if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
        v5 = 56;
      }
      GameRoutine_1a0a4e0(GameData_2265ee0 + v5);
    }
    v6 = v67;
    v7 = v68;
    v8 = v69;
    v9 = v70;
    if ((v62 & 1) != 0) {
      v10 = v64;
    }
    else {
      v10 = v71;
    }
    v11 = GameRoutine_1a09c70(v10);
    if (v11 > 0xFFFFFFFFFFFFFFF6LL) {
    LABEL_92:
      GameRoutine_60a1d0(v11);
    }
    v12 = v11;
    if (v11 >= 0x17) {
      if ((v11 | 7) == 0x17) {
        v14 = 26;
      }
      else {
        v14 = (v11 | 7) + 1;
      }
      v13 = (char*)GameRoutine_651b90(GameData_2265ee0, v14, 16, 0);
      v51 = v12;
      v52 = v13;
      v50 = v14 | 1;
    }
    else {
      v13 = (char*)&v50 + 1;
      LOBYTE(v50) = 2 * v11;
      if (v11 == 0) {
      LABEL_19:
        v13[v12] = 0;
        v15 = v65;
        v16 = v66;
        if ((v50 & 1) != 0) {
          GameRoutine_60a270(&v53, v52, v51);
        }
        else {
          v53 = v50;
          v54 = v51;
          v55 = (__int64)v52;
        }
        v17 = *(_QWORD*)(v3 + 112);
        v18 = *(_QWORD*)(v3 + 120);
        v56 = v15;
        v57 = v16;
        v58 = v6;
        v59 = v7;
        v60 = v8;
        v61 = v9;
        if (v18 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                    memory_order_relaxed);
          GameRoutine_14127e0(v17, &v53);
          if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
            GameRoutine_1a09c50(v18);
          }
          if ((v53 & 1) == 0) {
            goto LABEL_32;
          }
        }
        else {
          GameRoutine_14127e0(v17, &v53);
          if ((v53 & 1) == 0) {
          LABEL_32:
            if ((v50 & 1) != 0 && v52 != nullptr) {
              v20 = 128;
              if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
                v20 = 56;
              }
              GameRoutine_1a0a4e0(GameData_2265ee0 + v20);
            }
            if ((v62 & 1) != 0 && v64 != nullptr) {
              v21 = 128;
              if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
                v21 = 56;
              }
              GameRoutine_1a0a4e0(GameData_2265ee0 + v21);
            }
            goto LABEL_42;
          }
        }
        if (v55 != 0) {
          v19 = 128;
          if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
            v19 = 56;
          }
          GameRoutine_1a0a4e0(GameData_2265ee0 + v19);
        }
        goto LABEL_32;
      }
    }
    GameRoutine_1a0b940(v13, v10, v12);
    goto LABEL_19;
  }
LABEL_42:
  v22 = 1;
  do {
    result = GameRoutine_138e5e0(*(_QWORD*)GameData_212dce8);
    if (result == 0) {
      goto LABEL_43;
    }
    v25 = result;
    v26 = GameRoutine_651b90(GameData_2265ee0, 40, 16, 0);
    *(_BYTE*)(v26 + 38) = 0;
    v53 = 41;
    v54 = 38;
    v55 = v26;
    *(_QWORD*)(v26 + 16) = 0xB383E3A783E3B782LL;
    *(_QWORD*)(v26 + 24) = 0x5F94BCE6BA87E55FLL;
    *(_QWORD*)(v26 + 30) = 0x94BCE68B96E95F94LL;
    *(_QWORD*)v26 = 0x83E3A383E3AD82E3LL;
    *(_QWORD*)(v26 + 8) = 0xE3BC83E3A283E3A9LL;
    GameRoutine_14107c0(&v62, &v53);
    if ((v53 & 1) != 0 && v55 != 0) {
      v27 = 128;
      if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
        v27 = 56;
      }
      GameRoutine_1a0a4e0(GameData_2265ee0 + v27);
    }
    v28 = v67;
    v29 = v69;
    v30 = v70;
    if ((*(_BYTE*)(v25 + 72) & 1) != 0) {
      v31 = *(_QWORD*)(v25 + 88);
    }
    else {
      v31 = v25 + 73;
    }
    v32 = GameRoutine_7a8520(v31);
    GameRoutine_1a09b70(&GameData_2166898);
    GameRoutine_1a09b80(&GameData_2166898);
    GameRoutine_1a09b70(&GameData_2166898);
    GameRoutine_1a09b80(&GameData_2166898);
    if ((v62 & 1) != 0) {
      v33 = v64;
    }
    else {
      v33 = v71;
    }
    v11 = GameRoutine_1a09c70(v33);
    if (v11 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_92;
    }
    v34 = v11;
    if (v11 >= 0x17) {
      v36 = a1;
      if ((v11 | 7) == 0x17) {
        v37 = 26;
      }
      else {
        v37 = (v11 | 7) + 1;
      }
      v38 = GameRoutine_651b90(GameData_2265ee0, v37, 16, 0);
      v39 = v37 | 1;
      v35 = (char*)v38;
      v51 = v34;
      v52 = (char*)v38;
      a1 = v36;
      v50 = v39;
    LABEL_67:
      GameRoutine_1a0b940(v35, v33, v34);
      goto LABEL_68;
    }
    v35 = (char*)&v50 + 1;
    LOBYTE(v50) = 2 * v11;
    if (v11 != 0) {
      goto LABEL_67;
    }
  LABEL_68:
    v35[v34] = 0;
    v40 = v65;
    v41 = v66;
    if ((v50 & 1) != 0) {
      GameRoutine_60a270(&v53, v52, v51);
    }
    else {
      v53 = v50;
      v54 = v51;
      v55 = (__int64)v52;
    }
    v42 = v32 ^ (v32 >> 30);
    v43 = *(_QWORD*)(v25 + 112);
    v44 = *(_QWORD*)(v25 + 120);
    v56 = v40;
    v57 = v41;
    v60 = v29;
    v61 = v30;
    v45 = 1812433253 *
              ((1812433253 * ((1812433253 * v42) ^
                              ((unsigned int)(1812433253 * v42) >> 30)) +
                1) ^
               ((1812433253 * ((1812433253 * v42) ^
                               ((unsigned int)(1812433253 * v42) >> 30)) +
                 1) >>
                30)) +
          2;
    v46 = (float)(unsigned __int16)((((1011558400 * v42) ^
                                      (unsigned int)(1812433253 * v42)) >>
                                     8) ^
                                    ((1812433253 * (v45 ^ (v45 >> 30)) + 3) >>
                                     19) ^
                                    (10240 * v42) ^ (-30363 * v42) ^
                                    (-30363 * (v45 ^ (v45 >> 30)) + 3));
    v58 = v28;
    v59 = (float)(v46 / 65535.0) + (float)(v46 / 65535.0);
    if (v44 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v44 + 8), 1u,
                                memory_order_relaxed);
      result = GameRoutine_14127e0(v43, &v53);
      if (atomic_fetch_add((atomic_ullong* volatile)(v44 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v44);
        result = GameRoutine_1a09c50(v44);
      }
      if ((v53 & 1) == 0) {
        goto LABEL_81;
      }
    LABEL_77:
      if (v55 != 0) {
        v47 = 128;
        if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
          v47 = 56;
        }
        result = GameRoutine_1a0a4e0(GameData_2265ee0 + v47);
      }
      goto LABEL_81;
    }
    result = GameRoutine_14127e0(v43, &v53);
    if ((v53 & 1) != 0) {
      goto LABEL_77;
    }
  LABEL_81:
    if ((v50 & 1) != 0 && v52 != nullptr) {
      v48 = 128;
      if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
        v48 = 56;
      }
      result = GameRoutine_1a0a4e0(GameData_2265ee0 + v48);
    }
    if ((v62 & 1) != 0 && v64 != nullptr) {
      v49 = 128;
      if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
        v49 = 56;
      }
      result = GameRoutine_1a0a4e0(GameData_2265ee0 + v49);
    }
  LABEL_43:
    ++v22;
    if (*(_BYTE*)(*(_QWORD*)(a1 + 208) + 72LL) == 3) {
      v23 = 5;
    }
    else {
      v23 = 3;
    }
  } while (v22 < v23);
  return result;
}

__int64 GameHr_141fb90(__int64 a1)
{
  int v1;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64* v7;
  __int64* v8;
  __int64** v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  _BYTE* v14;
  char v15;

  v1 = *(_DWORD*)(a1 + 224);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2243958,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)GameRoutine_1a09fd0(&GameData_2243958) != 0) {
    GameData_22437a0 = 0;
    GameData_22437a8 = 0;
    GameData_22437b0 = 0;
    GameData_22437c0 = 0;
    GameData_22437d0 = 0;
    GameData_22437d8 = 13;
    GameData_22437e0 = 0;
    GameData_22437e8 = (__int64)GameRoutine_141ff70;
    GameData_2243858 = 13;
    GameData_2243798 = 4;
    GameData_22437b8 = 1;
    GameData_22437c8 = 250;
    GameData_22437f0 = 0;
    GameData_22437f8 = 0;
    GameData_2243800 = 0;
    GameData_2243818 = 3;
    GameData_2243860 = 0;
    GameData_2243868 = (__int64)GameRoutine_1420000;
    GameData_2243808 = 0;
    GameData_2243810 = 0;
    GameData_2243840 = 0;
    GameData_2243848 = 0;
    GameData_2243850 = 0;
    GameData_2243838 = 0;
    GameData_2243828 = 0;
    GameData_2243830 = 0;
    GameData_2243820 = 0;
    GameData_2243870 = 0;
    GameData_2243878 = 0;
    GameData_2243880 = 0;
    GameData_2243888 = 0;
    GameData_2243890 = 0;
    GameData_2243898 = 15;
    GameData_22438a0 = 0;
    GameData_22438a8 = (__int64)GameRoutine_1420010;
    GameData_22438b0 = 0;
    GameData_22438b8 = 0;
    GameData_22438c0 = 0;
    GameData_22438c8 = 0;
    GameData_22438d0 = 0;
    GameData_22438d8 = 4;
    GameData_22438e8 = 0;
    GameData_22438f0 = 0;
    GameData_22438e0 = 0;
    GameData_22438f8 = 1;
    GameData_2243900 = 0;
    GameData_2243908 = 250;
    GameData_2243910 = 0;
    GameData_2243918 = 0;
    GameData_2243940 = 0;
    GameData_2243948 = 0;
    GameData_2243950 = 0;
    GameData_2243920 = 0;
    GameData_2243928 = 0;
    GameData_2243930 = 0;
    GameData_2243938 = 0;
    GameRoutine_1a09fe0(&GameData_2243958);
  }
  v3 = (_QWORD*)GameData_212bf68;
  v4 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 192, 16, 0);
  v5 = GameData_212c608[0];
  *(_QWORD*)(v4 + 88) = 0;
  *(_QWORD*)(v4 + 96) = 0;
  *(_QWORD*)(v4 + 104) = 0;
  *(_QWORD*)(v4 + 112) = 0;
  *(_QWORD*)(v4 + 120) = 0;
  *(_QWORD*)(v4 + 128) = 0;
  *(_WORD*)(v4 + 136) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 24) = "NULL";
  *(_QWORD*)(v4 + 32) = 0;
  v6 = (_QWORD*)(v4 + 32);
  *(_QWORD*)(v4 + 138) = 0;
  *(_QWORD*)(v4 + 144) = 0;
  *(_QWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 80) = 0;
  *(_QWORD*)v4 = v5 + 16;
  *(_QWORD*)(v4 + 8) = 0;
  GameRoutine_65a7c0(v4);
  v7 = GameData_2132488;
  *(_BYTE*)(v4 + 160) = 0;
  *(_BYTE*)(v4 + 164) = 0;
  *(_QWORD*)(v4 + 152) = v7 + 2;
  v8 = GameData_2130240[0];
  *(_BYTE*)(v4 + 176) = 0;
  *(_BYTE*)(v4 + 180) = 0;
  *(_QWORD*)(v4 + 168) = v8 + 2;
  GameRoutine_1418aa0();
  v9 = (__int64**)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0) {
    ++*GameData_2130fb8;
  }
  else {
    v10 = (__int64*)GameRoutine_651b90(*v3, 336, 16, 0);
    GameRoutine_13892a0((__int64)v10);
    v11 = *v10;
    *v9 = v10;
    (*(void (**)(__int64*))(v11 + 16))(v10);
  }
  *(_DWORD*)(v4 + 184) = v1;
  *(_QWORD*)v4 = GameData_203a380;
  *(_QWORD*)(v4 + 152) = GameData_203a430;
  v12 = *(_QWORD*)(a1 + 40);
  if (v12 != 0) {
    *(_QWORD*)(v12 + 48) = v4;
    *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v4;
  *(_QWORD*)(v4 + 24) = "ProcStayScene";
  *(_QWORD*)(v4 + 32) = a1;
  *(_DWORD*)(v4 + 140) = GameRoutine_7a8520("ProcStayScene");
  *(_QWORD*)(v4 + 8) = &GameData_2243798;
  *(_QWORD*)(v4 + 16) = &GameData_2243798;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 24;
  *(_QWORD*)(v4 + 80) = 1;
  (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4);
  if ((result & 1) != 0 && (*(_WORD*)(v4 + 136) & 0x100) == 0) {
    *(_WORD*)(v4 + 136) |= 0x100u;
  }
  v14 = (_BYTE*)*v6;
  v15 = *(_BYTE*)(*v6 + 138LL);
  if (v15 == 0) {
    result = (*(__int64 (**)(_QWORD))(*(_QWORD*)v14 + 64LL))(*v6);
    v15 = v14[138];
  }
  v14[138] = v15 + 1;
  *(_WORD*)(v4 + 136) |= 2u;
  return result;
}

#pragma GCC visibility pop
