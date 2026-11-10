#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};

extern char GameData_1a9f09e;

extern __int64 (*GameData_1fece38[])();

extern __int64 GameData_212bf68;

extern __int64 GameData_212c5c0[3];

extern __int64* GameData_212c890[3];

extern __int64* GameData_212d458[7];

extern __int64 GameData_212dbc0[8];

extern __int64* GameData_212dec0[4];

extern __int64* GameData_212ea58;

extern __int64* GameData_212ebc0[5];

extern __int64 GameData_212ebf8[2];

extern __int64* GameData_212ec10[3];

extern __int64* GameData_212ec50[3];

extern __int64 GameData_212f510[6];

extern __int64 GameData_21c9608;

extern __int64 GameData_21c9d20;

extern __int64 GameData_21ca3e0;

extern __int64 GameData_21caab0;

extern __int64 GameData_21ec7c0;

extern __int64 GameData_21f3d10;

extern __int64 GameData_21f4cc0;

extern _UNKNOWN GameData_2216780;

extern __int64 GameData_2216820;

extern char GameData_2216850;

extern char GameData_2216858;

extern __int64 GameData_2219068;

extern __int64 GameData_22190b8;

extern __int64 GameData_22190c0;

extern __int64 GameData_2265ee0;

extern __int64 GameData_2265ef8;

__int64 GameRoutine_1007270(_QWORD);

__int64 GameRoutine_17c8500(void);

__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);

__int64 GameRoutine_60a020(_QWORD, _QWORD);

__int64 GameRoutine_60a270(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_667c80(_QWORD);

__int64 GameRoutine_66cc20(_QWORD, _QWORD);

__int64 GameRoutine_6fa5d0(_QWORD);

__int64 GameRoutine_7a86e0(_QWORD);

void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD, long double);

__int64 GameRoutine_d783a0(_QWORD, float);

float GameRoutine_d78a40(_QWORD);

__int64 GameRoutine_d799f0(__int64);

__int64 GameRoutine_d9850(_QWORD);

__int64 GameRoutine_da5c00(_QWORD);

__int64 GameRoutine_dab80(_QWORD);

__int64 GameRoutine_e61c90(_QWORD, _QWORD);

__int64 GameRoutine_e9a800(_QWORD, _QWORD, long double);

struct PseudoSret GameRoutine_eb5940(_QWORD);

struct PseudoSret GameRoutine_eb68e0(_QWORD);

__int64 GameRoutine_eb8a90(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_eb8c40(_QWORD);

__int64 GameRoutine_eb8d80(_QWORD);

__int64 GameRoutine_eba740(_QWORD, _QWORD);

__int64 GameRoutine_eba910(_QWORD, _QWORD);

__int64 GameRoutine_ec0820(_QWORD);

__int64 GameRoutine_ec17d0(void);

__int64 GameRoutine_f5ec20(void);

void GameHr_da3f00(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  float v6;
  float v7;
  __int64 v8;
  int v9;
  __int64 v10;
  bool v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  __int64 v17;
  float v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  v2 = *(_QWORD*)(*GameData_212d458[0] + 24);
  v3 = *(_QWORD*)(*GameData_212d458[0] + 32);
  v4 = GameData_212c5c0[0];
  if (v2 != v3) {
    v5 = *(_QWORD*)GameData_212c5c0[0];
    do {
      v8 = *(_QWORD*)(*(_QWORD*)v2 + 24LL);
      *(_DWORD*)(v8 + 428) = 1065353216;
      v6 = *(float*)(v8 + 424);
      v9 = *(unsigned __int8*)(v8 + 448);
      v10 = *(_QWORD*)(v8 + 8);
      v11 = v9 == 0;
      v12 = *(_QWORD*)(v10 + 232);
      if (!v11) {
        v6 = 0.0f;
      }
      *(float*)(v10 + 148) = v6;
      if (v12 != 0) {
        *(float*)(*(_QWORD*)(v12 + 304) + 12LL) = v6;
        v13 = *(_QWORD*)(v10 + 232);
        if (v13 != 0) {
          v6 = *(float*)(*(_QWORD*)(v13 + 304) + 16LL) * 16.683f;
          v7 = 0.001f;
          goto LABEL_5;
        }
        v6 = *(float*)(v10 + 148);
      }
      v7 = (float)(*(float*)(v5 + 160) * 16.683f) / 1000.0f;
    LABEL_5:
      v2 += 16;
      *(float*)(v10 + 228) = v6 * v7;
    } while (v2 != v3);
  }
  if (*(_BYTE*)(a1 + 216) == 1) {
    v14 = *GameData_212ebc0[0];
    v15 = *(_DWORD*)(*GameData_212ebc0[0] + 176) - 1;
    *(_DWORD*)(*GameData_212ebc0[0] + 176) = v15;
    if (v15 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v14 + 168) + 8LL))(v14 + 168);
    }
    GameRoutine_d799f0(v14);
    v16 = *(_DWORD*)(v14 + 192) - 1;
    *(_DWORD*)(v14 + 192) = v16;
    if (v16 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v14 + 184) + 8LL))(v14 + 184);
    }
    GameRoutine_d799f0(v14);
    **(_DWORD**)(*(_QWORD*)GameData_212ebf8[0] + 16LL) = 1065353216;
    v17 = *GameData_212ec50[0];
    GameRoutine_d783a0(*(_QWORD*)(*GameData_212ec50[0] + 8), 0.0f);
    v18 = GameRoutine_d78a40(*(_QWORD*)(v17 + 8));
    if (v18 == 1.0f) {
      if (*(_BYTE*)(v17 + 16) != 1) {
      LABEL_20:
        *(_BYTE*)(a1 + 216) = 0;
        goto LABEL_21;
      }
    }
    else {
      *(_BYTE*)(v17 + 16) = 1;
    }
    *(float*)(*(_QWORD*)v4 + 156LL) = v18;
    goto LABEL_20;
  }
LABEL_21:
  v19 = *GameData_212ec10[0];
  if (*(_BYTE*)(*GameData_212ec10[0] + 64) == 1) {
    v20 = *(_QWORD*)(v19 + 24);
    if (v20 != 0) {
      *(_QWORD*)(v19 + 32) = v20;
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v21 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v21, v20);
    }
    *(_BYTE*)(v19 + 64) = 0;
  }
}

__int64 GameHr_da51e0(__int64 a1, long double a2)
{
  __int64* v2;
  __int64 v3;
  __int64* v4;
  char* v5;
  char* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  __int64* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  unsigned __int64 v27;
  __int64* v28;
  char* v29;
  unsigned __int64 v30;
  char* v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  _QWORD* v38;
  int v39;
  __int64* v40;
  __int64* v41;
  __int64* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  char* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64* v51;
  __int64* v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64* v62;
  __int64 v63;
  _QWORD* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v71;
  unsigned __int64 v72;
  _QWORD* v73;
  _QWORD* v74;
  unsigned __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  _QWORD* v81;
  __int64* v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v90;
  __int64 v91;
  unsigned __int64 v92;
  char* v93;
  _QWORD v94[3];
  int v95;
  char v96;
  char v97;
  __int64 v98;
  __int64 v99;
  unsigned __int64 v100;
  unsigned __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  _QWORD* v106;
  unsigned __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  char v113;
  __int64* v114;
  __int64* v115;
  char* v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  char v121;
  char v122;
  __int64 v123;
  __int64 v124;
  int v125;
  __int64 v126;
  unsigned __int64 v127;
  char* v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  unsigned __int64 v133;
  char* v134;

  v96 = 0;
  v97 = 0;
  v91 = 0;
  v92 = 0;
  v93 = nullptr;
  memset(v94, 0, sizeof(v94));
  v113 = 0;
  v99 = 0;
  v100 = 0;
  v101 = 0;
  v102 = 0;
  v103 = 0;
  v104 = 0;
  v105 = 0;
  v106 = nullptr;
  v107 = 0;
  v108 = 0;
  v98 = 0x500000005LL;
  v2 = GameData_212ec10[0];
  v3 = *GameData_212ec10[0];
  v109 = 0;
  v110 = 0;
  LOBYTE(v111) = 0;
  LOBYTE(v95) = 0;
  if ((*(_BYTE*)(v3 + 64) & 1) == 0) {
    GameRoutine_8123d0(a1, a2);
  }
  if (*(_QWORD*)(v3 + 32) == *(_QWORD*)(v3 + 24)) {
    goto LABEL_198;
  }
  LOWORD(v132) = 0;
  v90 = v3;
  if ((*(_BYTE*)(GameData_21f3d10 + 40) & 1) != 0) {
    GameRoutine_60a270(&v114, *(_QWORD*)(GameData_21f3d10 + 56),
                       *(_QWORD*)(GameData_21f3d10 + 48));
  }
  else {
    v4 = *(__int64**)(GameData_21f3d10 + 48);
    v5 = *(char**)(GameData_21f3d10 + 56);
    v114 = *(__int64**)(GameData_21f3d10 + 40);
    v115 = v4;
    v116 = v5;
  }
  if (((unsigned __int8)v114 & 1) != 0) {
    v6 = v116;
  }
  else {
    v6 = (char*)&v114 + 1;
  }
  v7 = GameRoutine_7a86e0(v6);
  if (v7 != 0) {
    v8 = *(_QWORD*)(GameData_21c9d20 + 96);
    if (v8 != 0 && *(_QWORD*)(GameData_21c9d20 + 112) != 0) {
      v9 = v8 - 1;
      if ((v8 & (v8 - 1)) != 0) {
        v10 = v7;
        if (v7 >= v8) {
          v10 = v7 % v8;
        }
      }
      else {
        v10 = v9 & v7;
      }
      v11 = *(_QWORD**)(*(_QWORD*)(GameData_21c9d20 + 88) + 8 * v10);
      if (v11 != nullptr) {
        v12 = (_QWORD*)*v11;
        if (v12 != nullptr) {
          if ((v8 & v9) == 0) {
            while (1) {
              v14 = v12[1];
              if (v14 == v7) {
                if (v12[2] == v7) {
                  goto LABEL_32;
                }
              }
              else if ((v14 & v9) != v10) {
                goto LABEL_35;
              }
              v12 = (_QWORD*)*v12;
              if (v12 == nullptr) {
                goto LABEL_35;
              }
            }
          }
          do {
            v13 = v12[1];
            if (v13 == v7) {
              if (v12[2] == v7) {
              LABEL_32:
                v15 = v12[3];
                if (v15 != 0 && *(_WORD*)(v15 + 32) != 0) {
                  v16 = GameRoutine_6fa5d0(&GameData_21ca3e0);
                  GameRoutine_60a020(
                      &v132, *(_QWORD*)(*(_QWORD*)(v15 + 40) + 8LL * v16));
                }
                break;
              }
            }
            else {
              if (v13 >= v8) {
                v13 %= v8;
              }
              if (v13 != v10) {
                break;
              }
            }
            v12 = (_QWORD*)*v12;
          } while (v12 != nullptr);
        }
      }
    }
  }
LABEL_35:
  v17 = *v2;
  v18 = (__int64*)(*v2 + 80);
  v19 = *(unsigned __int8*)v18;
  v20 = v19 >> 1;
  if ((v19 & 1) != 0) {
    v20 = *(_QWORD*)(*v2 + 88);
  }
  if (&v132 != v18 && v20 != 0) {
    if ((v132 & 1) != 0) {
      v23 = *(_QWORD*)(v17 + 96);
      v24 = v17 + 81;
      if ((v19 & 1) != 0) {
        v25 = v23;
      }
      else {
        v25 = v24;
      }
      GameRoutine_64dde0(&v132, v25, v20);
    }
    else if ((v19 & 1) != 0) {
      GameRoutine_64df20(&v132, *(_QWORD*)(v17 + 96), *(_QWORD*)(*v2 + 88));
    }
    else {
      v22 = *(_QWORD*)(*v2 + 88);
      v132 = *v18;
      v133 = v22;
      v134 = (char*)v18[2];
    }
  }
  v129 = 0x5F646C6569460CLL;
  if ((v132 & 1) != 0) {
    v26 = v134;
  }
  else {
    v26 = (char*)&v132 + 1;
  }
  if ((v132 & 1) != 0) {
    v27 = v133;
  }
  else {
    v27 = (unsigned __int64)(unsigned __int8)v132 >> 1;
  }
  v28 = (__int64*)GameRoutine_1a09ce0(&v129, v26, v27);
  v30 = v28[1];
  v29 = (char*)v28[2];
  v126 = *v28;
  v127 = v30;
  v128 = v29;
  v28[1] = 0;
  v28[2] = 0;
  *v28 = 0;
  if ((v91 & 1) != 0) {
    if ((v126 & 1) != 0) {
      v31 = v128;
    }
    else {
      v31 = (char*)&v126 + 1;
    }
    if ((v126 & 1) != 0) {
      v32 = v127;
    }
    else {
      v32 = (unsigned __int64)(unsigned __int8)v126 >> 1;
    }
    GameRoutine_64dde0(&v91, v31, v32);
    if ((v126 & 1) == 0) {
      goto LABEL_71;
    }
    goto LABEL_67;
  }
  if ((v126 & 1) == 0) {
    v91 = v126;
    v92 = v127;
    v93 = v128;
    goto LABEL_71;
  }
  GameRoutine_64df20(&v91, v128, v127);
  if ((v126 & 1) != 0) {
  LABEL_67:
    if (v128 != nullptr) {
      v33 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v33 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v33, v128);
    }
  }
LABEL_71:
  if ((v129 & 1) != 0 && v131 != 0) {
    v34 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v34 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v34, v131);
  }
  if (((unsigned __int8)v114 & 1) != 0 && v116 != nullptr) {
    v35 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v35 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v35, v116);
  }
  if (*(_QWORD*)(GameData_21f3d10 + 200) != 0) {
    v36 = GameRoutine_f5ec20();
    v95 = v36;
    v96 = BYTE4(v36);
  }
  if ((*(_QWORD*)(GameData_21c9608 + 328) & 4LL) != 0) {
    v37 = 1;
  }
  else {
    v37 = *(unsigned int*)(GameData_21c9608 + 308);
  }
  v38 =
      (*(struct PseudoSret*)(&v126) = GameRoutine_eb68e0(v37), (void*)(&v126));
  v39 = v126;
  if ((int)v126 <= 1) {
    v39 = 1;
  }
  if (v39 >= (int)v98) {
    v39 = v98;
  }
  if (v39 >= 5) {
    v39 = 5;
  }
  HIDWORD(v98) = v39;
  *(struct PseudoSret*)(&v114) = GameRoutine_eb5940(v38);
  v40 = v114;
  v41 = v115;
  if (v114 != v115) {
    v42 = v114;
    do {
      v43 = *v42++;
      GameRoutine_eb8a90(&v91, v43, 0);
    } while (v42 != v41);
  }
  if (v40 != nullptr) {
    v44 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v44 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v44, v40);
  }
  if (GameData_21caab0 != 0 && *(_DWORD*)(GameData_21caab0 + 60) == 1) {
    GameRoutine_eb8d80(&v91);
  }
  if ((*(_BYTE*)(GameData_21c9608 + 328) & 1) != 0) {
    v45 = *(_QWORD*)(GameData_2265ef8 + 8);
    if (v45 != 0 &&
        (GameRoutine_d9850(*(_QWORD*)(GameData_2265ef8 + 8)) & 1) != 0) {
      v46 = GameRoutine_dab80(v45);
    }
    else {
      v46 = 0;
    }
    if (v46 != 0) {
      v47 = (char*)v46;
    }
    else {
      v47 = &GameData_1a9f09e;
    }
    GameRoutine_60a020(v94, v47);
    v110 |= 0x20uLL;
  }
  if (*(_DWORD*)(*(_QWORD*)GameData_212dbc0[0] + 160LL) == 1) {
    v48 = v110 | 0x200;
  }
  else {
    v48 = v110;
  }
  v110 = v48 | 0x809800;
  v49 = *(_QWORD*)(GameData_21ec7c0 + 24);
  v50 = *(_QWORD*)(GameData_21ec7c0 + 32);
  if (v49 != v50) {
    v51 = (__int64*)GameData_212bf68;
    do {
      if ((*(_BYTE*)(*(_QWORD*)v49 + 184LL) & 4) != 0) {
        v52 = *(__int64**)(*(_QWORD*)v49 + 16LL);
        v122 = 0;
        v115 = nullptr;
        v116 = nullptr;
        v117 = 0;
        v118 = 0;
        v119 = 0;
        v120 = 0;
        v121 = 0;
        v124 = 0x8A00000000LL;
        v125 = 0;
        v123 = 0;
        v114 = v52;
        v53 = v100;
        if (v100 >= v101) {
          v54 = GameRoutine_eba740(&v99, &v114);
        }
        else {
          GameRoutine_eba910(v100, &v114);
          v54 = v53 + 88;
        }
        v100 = v54;
        GameRoutine_eb8c40(&v91);
        if (v118 != 0) {
          v55 = *v51;
          v119 = v118;
          if (*(_QWORD*)(v55 + 200) != 0) {
            v56 = 128;
          }
          else {
            v56 = 56;
          }
          GameRoutine_1a0a4e0(v55 + v56, v118);
        }
        if (v115 != nullptr) {
          v57 = *v51;
          v116 = (char*)v115;
          if (*(_QWORD*)(v57 + 200) != 0) {
            v58 = 128;
          }
          else {
            v58 = 56;
          }
          GameRoutine_1a0a4e0(v57 + v58, v115);
        }
      }
      v49 += 16;
    } while (v49 != v50);
  }
  GameRoutine_da5c00(&v129);
  v59 = v129;
  if (v130 != v129) {
    v60 = (v130 - v129) >> 3;
    v61 = 0;
    v62 = GameData_212c890[0];
    do {
      v64 = *(_QWORD**)(v59 + 8 * v61);
      v65 = v64[90];
      v66 = v64[91];
      if (v65 != v66) {
        do {
          if ((*(_BYTE*)v65 & 1) != 0) {
            v67 = *(_QWORD*)(v65 + 16);
          }
          else {
            v67 = v65 + 1;
          }
          v68 = GameRoutine_7a86e0(v67);
          if (v68 != 0) {
            v69 = *(_QWORD*)(*v62 + 96);
            if (v69 != 0 && *(_QWORD*)(*v62 + 112) != 0) {
              v71 = v69 - 1;
              if ((v69 & (v69 - 1)) != 0) {
                v72 = v68;
                if (v68 >= v69) {
                  v72 = v68 % v69;
                }
              }
              else {
                v72 = v71 & v68;
              }
              v73 = *(_QWORD**)(*(_QWORD*)(*v62 + 88) + 8 * v72);
              if (v73 != nullptr) {
                v74 = (_QWORD*)*v73;
                if (v74 != nullptr) {
                  if ((v69 & v71) == 0) {
                    while (1) {
                      v76 = v74[1];
                      if (v76 == v68) {
                        if (v74[2] == v68) {
                          goto LABEL_166;
                        }
                      }
                      else if ((v76 & v71) != v72) {
                        goto LABEL_137;
                      }
                      v74 = (_QWORD*)*v74;
                      if (v74 == nullptr) {
                        goto LABEL_137;
                      }
                    }
                  }
                  do {
                    v75 = v74[1];
                    if (v75 == v68) {
                      if (v74[2] == v68) {
                      LABEL_166:
                        if (v74[3] != 0) {
                          v114 = (__int64*)v74[3];
                          v77 = v100;
                          v122 = 0;
                          v115 = nullptr;
                          v116 = nullptr;
                          v117 = 0;
                          v118 = 0;
                          v119 = 0;
                          v120 = 0;
                          v121 = 0;
                          v124 = 0;
                          v125 = 0;
                          LODWORD(v123) = 1;
                          HIDWORD(v123) = v61;
                          if (v100 >= v101) {
                            v78 = GameRoutine_eba740(&v99, &v114);
                          }
                          else {
                            GameRoutine_eba910(v100, &v114);
                            v78 = v77 + 88;
                          }
                          v100 = v78;
                          GameRoutine_eb8c40(&v91);
                          if (v118 != 0) {
                            v119 = v118;
                            v79 = 128;
                            if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
                              v79 = 56;
                            }
                            GameRoutine_1a0a4e0(GameData_2265ee0 + v79, v118);
                          }
                          if (v115 != nullptr) {
                            v116 = (char*)v115;
                            v80 = 128;
                            if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
                              v80 = 56;
                            }
                            GameRoutine_1a0a4e0(GameData_2265ee0 + v80, v115);
                          }
                        }
                        break;
                      }
                    }
                    else {
                      if (v75 >= v69) {
                        v75 %= v69;
                      }
                      if (v75 != v72) {
                        break;
                      }
                    }
                    v74 = (_QWORD*)*v74;
                  } while (v74 != nullptr);
                }
              }
            }
          }
        LABEL_137:
          v65 += 24;
        } while (v65 != v66);
        v64 = *(_QWORD**)(v59 + 8 * v61);
      }
      v81 = v106;
      v82 = v64 + 87;
      if ((unsigned __int64)v106 >= v107) {
        v63 = GameRoutine_66cc20(&v105, v82);
      }
      else if ((*(_BYTE*)v82 & 1) != 0) {
        GameRoutine_60a270(v106, v64[89], v64[88]);
        v63 = (__int64)(v81 + 3);
      }
      else {
        v83 = *v82;
        v84 = v82[2];
        v63 = (__int64)(v106 + 3);
        v106[1] = v82[1];
        v81[2] = v84;
        *v81 = v83;
      }
      ++v61;
      v106 = (_QWORD*)v63;
    } while (v61 != v60);
  }
  if (*(_DWORD*)(v90 + 16) == 1) {
    v110 |= 2uLL;
  }
  if (v59 != 0) {
    v85 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v85 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v85, v59);
  }
  if (v127 != 0) {
    v86 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v86 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v86, v127);
  }
  if ((v132 & 1) != 0 && v134 != nullptr) {
    v87 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v87 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v87, v134);
  }
LABEL_198:
  GameRoutine_e61c90(&GameData_2216780, &v91);
  if (v113 == 1 && v111 != 0) {
    v112 = v111;
    v88 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v88 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v88, v111);
  }
  return GameRoutine_667c80(&v91);
}

__int64 GameHr_e618a0(long double a1)
{
  __int64* v1;
  __int64 result;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;

  v1 = GameData_212dec0[0];
  result = *GameData_212dec0[0];
  if ((*(_BYTE*)(*GameData_212dec0[0] + 9) & 1) == 0 &&
      (*(_BYTE*)(*GameData_212dec0[0] + 10) & 1) == 0 &&
      *(_BYTE*)(*GameData_212dec0[0] + 11) == 0) {
    goto LABEL_4;
  }
  if (*(_BYTE*)(*GameData_212dec0[0] + 10) != 0) {
    v5 = 3;
  }
  else {
    v5 = 2;
  }
  if (*(_BYTE*)(result + 12) != 0) {
    v5 = 4;
  }
  if ((((unsigned __int8)(*(_BYTE*)(result + 12) |
                          *(_BYTE*)(*GameData_212dec0[0] + 9)) |
        *(_BYTE*)(*GameData_212dec0[0] + 10)) &
       1) == 0) {
    v5 = 5;
    if ((*(_BYTE*)(*GameData_212dec0[0] + 11) & 1) == 0) {
      v5 = *(unsigned __int8*)(result + 8);
    }
  }
  if ((unsigned int)(v5 - 2) >= 2) {
    if (v5 != 5) {
    LABEL_4:
      if ((*(_BYTE*)(result + 13) & 1) != 0) {
        goto LABEL_7;
      }
      if ((GameData_2216858 & 1) != 0) {
        if ((GameData_2216820 & 8) == 0) {
        LABEL_7:
          *(_BYTE*)(*(_QWORD*)GameData_212f510[0] + 11LL) = 1;
          v3 = GameData_2219068;
          if (GameData_2219068 == 0) {
            return result;
          }
          result = *(_QWORD*)(GameData_2219068 + 192);
          *(_QWORD*)(GameData_2219068 + 152) = 0;
          *(_QWORD*)(v3 + 192) = 0;
          if (result == v3 + 160) {
            v4 = 32;
          }
          else {
            if (result == 0) {
              goto LABEL_31;
            }
            v4 = 40;
          }
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + v4))(
              (__int64)result);
        LABEL_31:
          v8 = *(_QWORD*)(v3 + 8);
          if (v8 != 0) {
            while (1) {
              if (*(_BYTE*)v8 == 2) {
                if (*(_DWORD*)(v8 + 32) == 12) {
                  goto LABEL_98;
                }
              }
              else if (*(_BYTE*)v8 == 0) {
                return result;
              }
              v8 += 64;
            }
          }
          return result;
        }
        result = GameRoutine_ec17d0();
        if ((result & 1) != 0) {
          result = GameRoutine_ec0820(*v1);
          *(_BYTE*)(*(_QWORD*)GameData_212f510[0] + 11LL) = 1;
          v3 = GameData_2219068;
          if (GameData_2219068 == 0) {
            return result;
          }
          result = *(_QWORD*)(GameData_2219068 + 192);
          *(_QWORD*)(GameData_2219068 + 152) = 0;
          *(_QWORD*)(v3 + 192) = 0;
          if (result == v3 + 160) {
            v9 = 32;
          }
          else {
            if (result == 0) {
              goto LABEL_73;
            }
            v9 = 40;
          }
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + v9))(
              (__int64)result);
        LABEL_73:
          v8 = *(_QWORD*)(v3 + 8);
          if (v8 != 0) {
            while (1) {
              if (*(_BYTE*)v8 == 2) {
                if (*(_DWORD*)(v8 + 32) == 17) {
                  goto LABEL_98;
                }
              }
              else if (*(_BYTE*)v8 == 0) {
                return result;
              }
              v8 += 64;
            }
          }
          return result;
        }
        if ((GameData_2216858 & 1) != 0) {
          v10 = (unsigned __int8)GameData_2216850;
          *(_BYTE*)(*(_QWORD*)GameData_212f510[0] + 11LL) = 1;
          v3 = GameData_2219068;
          if (v10 == 1) {
            if (GameData_2219068 == 0) {
              return result;
            }
            result = *(_QWORD*)(GameData_2219068 + 192);
            *(_QWORD*)(GameData_2219068 + 152) = 0;
            *(_QWORD*)(v3 + 192) = 0;
            if (result == v3 + 160) {
              v11 = 32;
            }
            else {
              if (result == 0) {
                goto LABEL_82;
              }
              v11 = 40;
            }
            result = (*(__int64 (**)(__int64))(*(_QWORD*)result + v11))(
                (__int64)result);
          LABEL_82:
            v8 = *(_QWORD*)(v3 + 8);
            if (v8 != 0) {
              while (1) {
                if (*(_BYTE*)v8 == 2) {
                  if (*(_DWORD*)(v8 + 32) == 16) {
                    goto LABEL_98;
                  }
                }
                else if (*(_BYTE*)v8 == 0) {
                  return result;
                }
                v8 += 64;
              }
            }
            return result;
          }
          if (GameData_2219068 == 0) {
            return result;
          }
          result = *(_QWORD*)(GameData_2219068 + 192);
          *(_QWORD*)(GameData_2219068 + 152) = 0;
          *(_QWORD*)(v3 + 192) = 0;
          if (result == v3 + 160) {
            v12 = 32;
          }
          else {
            if (result == 0) {
              goto LABEL_91;
            }
            v12 = 40;
          }
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + v12))(
              (__int64)result);
        LABEL_91:
          v8 = *(_QWORD*)(v3 + 8);
          if (v8 != 0) {
            while (1) {
              if (*(_BYTE*)v8 == 2) {
                if (*(_DWORD*)(v8 + 32) == 15) {
                  goto LABEL_98;
                }
              }
              else if (*(_BYTE*)v8 == 0) {
                return result;
              }
              v8 += 64;
            }
          }
          return result;
        }
      }
      GameRoutine_8123d0(result, a1);
    }
    *(_BYTE*)(*(_QWORD*)GameData_212f510[0] + 11LL) = 1;
    v3 = GameData_2219068;
    if (GameData_2219068 == 0) {
      return result;
    }
    result = *(_QWORD*)(GameData_2219068 + 192);
    *(_QWORD*)(GameData_2219068 + 152) = 0;
    *(_QWORD*)(v3 + 192) = 0;
    if (result == v3 + 160) {
      v7 = 32;
    }
    else {
      if (result == 0) {
        goto LABEL_60;
      }
      v7 = 40;
    }
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + v7))((__int64)result);
  LABEL_60:
    v8 = *(_QWORD*)(v3 + 8);
    if (v8 == 0) {
      return result;
    }
    while (1) {
      if (*(_BYTE*)v8 == 2) {
        if (*(_DWORD*)(v8 + 32) == 14) {
        LABEL_98:
          *(_QWORD*)(v3 + 16) = v8;
          *(_WORD*)(v3 + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v8 == 0) {
        return result;
      }
      v8 += 64;
    }
  }
  *(_BYTE*)(*(_QWORD*)GameData_212f510[0] + 11LL) = 1;
  v3 = GameData_2219068;
  if (GameData_2219068 == 0) {
    return result;
  }
  result = *(_QWORD*)(GameData_2219068 + 192);
  *(_QWORD*)(GameData_2219068 + 152) = 0;
  *(_QWORD*)(v3 + 192) = 0;
  if (result == v3 + 160) {
    v6 = 32;
  }
  else {
    if (result == 0) {
      goto LABEL_45;
    }
    v6 = 40;
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)result + v6))((__int64)result);
LABEL_45:
  v8 = *(_QWORD*)(v3 + 8);
  if (v8 != 0) {
    while (1) {
      if (*(_BYTE*)v8 == 2) {
        if (*(_DWORD*)(v8 + 32) == 13) {
          goto LABEL_98;
        }
      }
      else if (*(_BYTE*)v8 == 0) {
        return result;
      }
      v8 += 64;
    }
  }
  return result;
}

__int64 GameHr_e697e0(long double a1)
{
  __int64 v1;
  __int64 v2;
  __int64 result;
  _QWORD v4[4];
  _QWORD* v5;

  v5 = v4;
  v1 = *GameData_212ea58;
  v4[0] = GameData_1fece38;
  GameRoutine_e9a800(v1, v4, a1);
  if (v5 == v4) {
    v2 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_6;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v5 + v2))((__int64)v5);
LABEL_6:
  result = GameRoutine_1007270(GameData_22190c0);
  if ((*(_BYTE*)(GameData_21f4cc0 + 12) & 1) == 0) {
    result = GameData_22190b8;
    if (GameData_22190b8 != 0) {
      return GameRoutine_17c8500();
    }
  }
  return result;
}

#pragma GCC visibility pop
