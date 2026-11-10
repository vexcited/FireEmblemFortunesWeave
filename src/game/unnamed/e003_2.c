#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};

extern char GameData_1a9f09e;

extern char GameData_1aa4dd7[13];

extern __int64 GameData_212bf68;

extern __int64* GameData_212c010[3];

extern __int64* GameData_212c370;

extern __int64 GameData_212c638;

extern __int64 GameData_212cf60;

extern __int64 GameData_212dbc0[8];

extern int* GameData_212df08;

extern _UNKNOWN* GameData_212df10;

extern char* GameData_212f6f8[4];

extern char* GameData_212f700[3];

extern char* GameData_212f708[2];

extern char* GameData_212f710;

extern char** GameData_212fbf8;

extern __int64 GameData_21a6070;

extern __int64 GameData_21c9608;

extern __int64 GameData_21ee260;

extern __int64 GameData_21f3cd0;

extern __int64 GameData_21f3d00;

extern __int64 GameData_220d630;

extern __int64 GameData_2265ee0;

__int64 GameRoutine_10cb00(_QWORD, _QWORD);

__n128 GameRoutine_10cff0(_QWORD);

__int64 GameRoutine_143d560(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a09c70(_QWORD);

__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a09cf0(_QWORD, _QWORD);

__int64 GameRoutine_1a09d00(_QWORD);

__int64 GameRoutine_1a09d30(_QWORD, _QWORD);

__int64 GameRoutine_1a09fd0(_QWORD);

__int64 GameRoutine_1a09fe0(_QWORD);

__int64 GameRoutine_1a0a4e0(_QWORD, long double);

__int64 GameRoutine_1a0a760(_QWORD);

struct PseudoSret GameRoutine_1a0a790(_QWORD);

__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);

struct PseudoSret GameRoutine_540(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_5e5f00(_QWORD);

void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);

void __attribute__((noreturn)) GameRoutine_60a230(_QWORD);

__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD, long double);

__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD, long double);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_913f40(_QWORD, _QWORD);

void GameRoutine_a290c0(__int64, __int64, __int64, int, char, float);

void GameRoutine_a2e0c0(__int64, __int64, long double);

__int64 GameRoutine_a81a70(_QWORD, _QWORD);

__int64 GameRoutine_a8ee40(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_ad7390(_QWORD);

__int64 GameRoutine_c09f40(_QWORD, _QWORD);

__int64 GameRoutine_c0a320(_QWORD, _QWORD);

__int64 GameRoutine_c0ade0(_QWORD, _QWORD);

bool GameRoutine_c13be0(__int64, __int64, __int64, __int64, char);

__int64 GameRoutine_c69950(_QWORD);

__int64 GameRoutine_c69ba0(_QWORD);

__int64 GameRoutine_d6f600(void);

__int64 GameRoutine_d6f8d0(_QWORD);

__int64 GameRoutine_d85af0(_QWORD);

__int64 GameRoutine_e1c860(_QWORD, _QWORD);

__int64 GameRoutine_ffd760(_QWORD, _QWORD, _QWORD, _QWORD);

void GameHr_a2f880(__int64 a1, long double a2)
{
  char v3;
  unsigned __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  const char* v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  long double v13;
  _BYTE v14[200];

  if ((*(_BYTE*)(a1 + 3016) & 1) != 0) {
    v3 = *(_BYTE*)(a1 + 2896);
    v4 = *(unsigned __int8*)(a1 + 2992);
    v5 = (_QWORD*)(a1 + 2896);
    if ((v3 & 1) != 0) {
      v9 = (v4 & 1) == 0;
      v10 = v4 >> 1;
      if (v9) {
        v11 = a1 + 2993;
      }
      else {
        v11 = *(_QWORD*)(a1 + 3008);
      }
      if (v9) {
        v12 = v10;
      }
      else {
        v12 = *(_QWORD*)(a1 + 3000);
      }
      GameRoutine_64dde0(v5, v11, v12, a2);
    }
    else if ((v4 & 1) != 0) {
      GameRoutine_64df20(v5, *(_QWORD*)(a1 + 3008), *(_QWORD*)(a1 + 3000), a2);
    }
    else {
      v6 = *(_QWORD*)(a1 + 3000);
      v7 = *(_QWORD*)(a1 + 3008);
      *v5 = *(_QWORD*)(a1 + 2992);
      *(_QWORD*)(a1 + 2904) = v6;
      *(_QWORD*)(a1 + 2912) = v7;
    }
    v8 = "FadeTime_BGM_Dungeon_In";
  }
  else {
    v8 = "FadeTime_BGM_Hub_In";
  }
  GameRoutine_10cb00(v14, v8);
  GameRoutine_a2e0c0(a1, (__int64)v14, v13);
  GameRoutine_10cff0(v14);
  *(_BYTE*)(a1 + 3016) = 0;
}

void GameHr_a31100(__int64 a1, __int64 a2, long double a3)
{
  long double v4;
  char v5;
  unsigned __int64 v6;
  _QWORD* v7;
  __int64 v9;
  __int64 v10;
  bool v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  char v15;
  float v16;
  __int64 v17;
  __int64 v18;
  _BYTE v19[200];

  if (*(_BYTE*)(a1 + 3017) == 1) {
    GameRoutine_10cb00(v19, "FadeTime_BGM_Bmap_In_Next");
    GameRoutine_a2e0c0(a1, (__int64)v19, v4);
    GameRoutine_10cff0(v19);
  }
  else {
    v5 = *(_BYTE*)(a1 + 2824);
    v6 = *(unsigned __int8*)(a1 + 2896);
    v7 = (_QWORD*)(a1 + 2824);
    if ((v5 & 1) != 0) {
      v11 = (v6 & 1) == 0;
      v12 = v6 >> 1;
      if (v11) {
        v13 = a1 + 2897;
      }
      else {
        v13 = *(_QWORD*)(a1 + 2912);
      }
      if (v11) {
        v14 = v12;
      }
      else {
        v14 = *(_QWORD*)(a1 + 2904);
      }
      GameRoutine_64dde0(v7, v13, v14, a3);
    }
    else if ((v6 & 1) != 0) {
      GameRoutine_64df20(v7, *(_QWORD*)(a1 + 2912), *(_QWORD*)(a1 + 2904), a3);
    }
    else {
      v9 = *(_QWORD*)(a1 + 2904);
      v10 = *(_QWORD*)(a1 + 2912);
      *v7 = *(_QWORD*)(a1 + 2896);
      *(_QWORD*)(a1 + 2832) = v9;
      *(_QWORD*)(a1 + 2840) = v10;
    }
    v15 = *(_BYTE*)(a1 + 2824);
    v16 = *(float*)(a1 + 2892);
    v17 = *(_QWORD*)(a1 + 2840);
    *(_BYTE*)(a1 + 601) = 0;
    if ((v15 & 1) != 0) {
      v18 = v17;
    }
    else {
      v18 = a1 + 2825;
    }
    GameRoutine_a290c0(a1, v18, a2, (int)v16, 0, 0.0);
  }
}

unsigned __int64 GameHr_c06d00(unsigned __int64 result, __int64 a2, __int64 a3,
                               int a4, long double a5)
{
  unsigned __int64 v7;
  unsigned __int64 v9;
  int v10;
  int v11;
  unsigned int v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int8 explicit;
  int* v26;
  __int64 v27;
  __int64 v28;
  int v29;
  int v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  char* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  __int64 v46;
  bool v47;
  __int64 v48;
  __int64 v49;
  int v50;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  long double v58;
  unsigned __int64 v59;
  char* v60;
  unsigned __int64 v61;
  char* v62;
  unsigned __int64 v63;
  char* v64;
  __int64 v65;
  char v66;
  __int64 v67;
  __int64 v68;
  unsigned __int64 i;
  __int64 v70;
  __int64 v71;
  long double v72;
  unsigned __int64 v73;
  char* v74;
  __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  __int64 v78;
  char* v79;
  unsigned __int64 v80;
  int v81;
  unsigned __int64 v82;
  char* v83;
  unsigned __int64 v84;
  char* v85;
  char* v86;
  unsigned __int64 v87;
  unsigned int v88;
  unsigned __int64 v89;
  char* v90;
  __int64 v91;
  char v92;
  __int64 v93;
  char* v94;
  char v95;
  char* v96;
  unsigned __int64 v97;
  char* v98;
  unsigned __int64 v99;
  char* v100;
  __int64 v101;
  char* v102;
  __int64 v103;
  bool v104;
  unsigned __int64 v105;
  char* v106;
  unsigned __int64 v107;
  char* v108;
  __int64 v109;
  char v110;
  __int64 v111;
  bool v112;
  unsigned __int64 v113;
  char* v114;
  unsigned __int64 v115;
  long double v116;
  __int64 v117;
  __int64 v118;
  _QWORD* v119;
  int v120;
  __int64 v121;
  __int64 v122;
  unsigned __int64 v123;
  __int64 v124;
  unsigned __int64 v125;
  char* v126;
  __int64 v127;
  unsigned __int64 v128;
  char* v129;
  __int64 v130;
  unsigned __int64 v131;
  char* v132;

  *(_BYTE*)(result + 21) = 0;
  v7 = result;
  if (*(_BYTE*)(a3 + 165) == 1 &&
      ((result = GameRoutine_ad7390(a3)) & 1) != 0) {
    result = GameRoutine_5e5f00(*(_QWORD*)(*(_QWORD*)(a3 + 8) + 592LL));
    v9 = result;
  }
  else {
    v9 = 0;
  }
  v10 = *(unsigned __int16*)(v9 + 226);
  v11 = *(unsigned __int16*)(v9 + 230);
  v123 = v9;
  v12 = v11 + v10;
  if (*(_QWORD*)(v7 + 88) != 0) {
    v13 = *(_QWORD**)(v7 + 80);
    if (v13 != nullptr) {
      v14 = GameData_212bf68;
      do {
        v16 = v13;
        v13 = (_QWORD*)*v13;
        if ((v16[5] & 1) != 0 && v16[7] != 0) {
          if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
            v17 = 128;
          }
          else {
            v17 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)v14 + v17, a5);
        }
        if ((v16[2] & 1) != 0 && v16[4] != 0) {
          if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
            v18 = 128;
          }
          else {
            v18 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)v14 + v18, a5);
        }
        if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
          v15 = 128;
        }
        else {
          v15 = 56;
        }
        result = GameRoutine_1a0a4e0(*(_QWORD*)v14 + v15, a5);
      } while (v13 != nullptr);
    }
    v19 = *(_QWORD*)(v7 + 72);
    v9 = v123;
    *(_QWORD*)(v7 + 80) = 0;
    if (v19 != 0) {
      v20 = v19 & 7;
      if (v19 >= 8) {
        v22 = v19 & 0xFFFFFFFFFFFFFFF8LL;
        v21 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v7 + 64) + 8 * v21) = 0;
          *(_QWORD*)(*(_QWORD*)(v7 + 64) + 8 * v21 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v7 + 64) + 8 * v21 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v7 + 64) + 8 * v21 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v7 + 64) + 8 * v21 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v7 + 64) + 8 * v21 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v7 + 64) + 8 * v21 + 48) = 0;
          v23 = *(_QWORD*)(v7 + 64) + 8 * v21;
          v21 += 8;
          *(_QWORD*)(v23 + 56) = 0;
        } while (v22 != v21);
      }
      else {
        v21 = 0;
      }
      if (v20 != 0) {
        v24 = 8 * v21;
        do {
          --v20;
          *(_QWORD*)(*(_QWORD*)(v7 + 64) + v24) = 0;
          v24 += 8;
        } while (v20 != 0);
      }
    }
    *(_QWORD*)(v7 + 88) = 0;
  }
  if (v12 != 0) {
    v120 = a4;
    *(_BYTE*)(v7 + 21) = 1;
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                    memory_order_acquire);
    v26 = GameData_212df08;
    if ((explicit & 1) == 0 &&
        (unsigned int)GameRoutine_1a09fd0(GameData_212df10) != 0) {
      *v26 = (unsigned int)(*(struct PseudoSret*)(v119) =
                                GameRoutine_540(0, "ModelModule", 11),
                            (void*)(v119));
      GameRoutine_1a09fe0(GameData_212df10);
    }
    v27 = *(_QWORD*)(a2 + 512);
    v28 = v27;
    do {
      v29 = *(_DWORD*)(v28 - 16);
      v28 -= 16;
      v27 -= 16;
    } while (v29 != *v26);
    v130 = *(_QWORD*)(*(_QWORD*)(v27 + 8) + 24LL);
    result = GameRoutine_c09f40(a2, &v130);
    v30 = v120;
    v31 = vcvtps_u64_f32((float)v12 / *(float*)(v7 + 96));
    if (v31 == 1) {
      v31 = 2;
    }
    else if ((v31 & (v31 - 1)) != 0) {
      result = GameRoutine_1a09d00(v31);
      v31 = result;
    }
    v32 = *(_QWORD*)(v7 + 72);
    if (v31 > v32) {
      goto LABEL_42;
    }
    if (v31 < v32) {
      result = vcvtps_u64_f32((float)*(unsigned __int64*)(v7 + 88) /
                              *(float*)(v7 + 96));
      if (v32 < 3 || (v32 & (v32 - 1)) != 0) {
        result = GameRoutine_1a09d00(result);
      }
      else {
        v33 = 1LL << -(char)__clz(result - 1);
        if (result >= 2) {
          result = v33;
        }
      }
      if (v31 <= result) {
        v31 = result;
      }
      if (v31 < v32) {
      LABEL_42:
        result = GameRoutine_c0ade0(v7 + 64, v31);
      }
    }
    if (*(_WORD*)(v9 + 226) != 0) {
      v34 = 0;
      while (1) {
        v35 = *(_QWORD*)(v9 + 96);
        if (v35 != 0) {
          v36 = *(_QWORD*)(v35 + 16 * v34 + 32) + 2LL;
        }
        else {
          v36 = 0;
        }
        result = GameRoutine_1a09c70(v36);
        if (result >= 0xFFFFFFFFFFFFFFF7LL) {
        LABEL_228:
          GameRoutine_60a1d0(result);
        }
        v37 = result;
        if (result >= 0x17) {
          break;
        }
        v38 = (char*)&v130 + 1;
        LOBYTE(v130) = 2 * result;
        if (result != 0) {
          goto LABEL_67;
        }
      LABEL_68:
        v38[v37] = 0;
        v9 = v123;
        v40 = *(_QWORD*)(v123 + 88) + 80 * v34;
        v41 = *(_QWORD*)(v40 + 56);
        if (v41 != 0) {
          v42 = v41 + 8;
          v43 = *(unsigned __int16*)(v41 + 12);
          v44 = v41 + 8 + 16 * v43;
          v45 = *(_DWORD*)v44;
          if (*(_DWORD*)(v41 + 8) < *(_DWORD*)v44) {
            do {
              if ((unsigned int)(v45 >> 3) <= 0xB) {
                v46 = ((unsigned __int8)GameData_1aa4dd7[~(v45 >> 3) + 12] >>
                       (v45 & 7)) &
                      1;
              }
              else {
                v46 = 0;
              }
              v43 = *(unsigned __int16*)(v41 + 12 + 16 * v43 + 2 * v46);
              v47 = v45 < *(_DWORD*)(v42 + 16 * v43);
              v45 = *(_DWORD*)(v42 + 16 * v43);
            } while (v47);
            v44 = v42 + 16 * v43;
          }
          v48 = *(_QWORD*)(v44 + 8);
          if (*(_WORD*)v48 == 12) {
            v49 = *(_QWORD*)(v48 + 2);
            v50 = *(_DWORD*)(v48 + 10);
            if (v49 == 0x4C79616C70736944LL && v50 == 1919252833) {
              v52 = v44 - v41 - 24;
              if ((~v52 & 0xFFFFFFFF0LL) != 0) {
                v53 = *(_QWORD*)(v40 + 48);
                if (v53 != 0) {
                  v54 = v53 + ((__int64)(int)(v52 >> 4) << 6);
                  if (*(_BYTE*)(v54 + 20) == 2 && *(int*)(v54 + 16) >= 1) {
                    v55 = **(_QWORD**)(v54 + 8);
                    v56 = GameRoutine_1a09c70(v55 + 2);
                    v57 = v55 + 2;
                    v30 = v120;
                    result = GameRoutine_a81a70(v57, v56);
                    if ((_DWORD)result != v120) {
                      goto LABEL_115;
                    }
                    v59 = (unsigned __int64)(unsigned __int8)v130 >> 1;
                    if ((v130 & 1) != 0) {
                      v60 = v132;
                    }
                    else {
                      v60 = (char*)&v130 + 1;
                    }
                    if ((v130 & 1) != 0) {
                      v59 = v131;
                    }
                    v61 = v59;
                    do {
                      if (v61 == 0) {
                        goto LABEL_114;
                      }
                      v62 = &v60[v61--];
                    } while (*(v62 - 1) != 46);
                    if (v61 != -1) {
                      if (v59 >= v61) {
                        v63 = v61;
                      }
                      else {
                        v63 = v59;
                      }
                      if (v63 >= 0xFFFFFFFFFFFFFFF7LL) {
                        goto LABEL_228;
                      }
                      if (v63 >= 0x17) {
                        if ((v63 | 7) == 0x17) {
                          v65 = 26;
                        }
                        else {
                          v65 = (v63 | 7) + 1;
                        }
                        v122 = v65;
                        v64 = (char*)GameRoutine_651b90(
                            *(_QWORD*)GameData_212bf68, v65, 16, 0);
                        v128 = v63;
                        v129 = v64;
                        v127 = v122 | 1;
                      }
                      else {
                        v64 = (char*)&v127 + 1;
                        LOBYTE(v127) = 2 * v63;
                        if (v63 == 0) {
                        LABEL_108:
                          v66 = v130;
                          v64[v63] = 0;
                          if ((v66 & 1) != 0 && v132 != nullptr) {
                            v67 = 128;
                            if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 +
                                           200LL) == 0) {
                              v67 = 56;
                            }
                            GameRoutine_1a0a4e0(
                                *(_QWORD*)GameData_212bf68 + v67, v58);
                          }
                          v9 = v123;
                          v130 = v127;
                          v131 = v128;
                          v132 = v129;
                          goto LABEL_114;
                        }
                      }
                      GameRoutine_1a0b940(v64, v60, v63);
                      goto LABEL_108;
                    }
                  }
                }
              }
            }
          }
        }
      LABEL_114:
        result = GameRoutine_c0a320(v7, &v130);
        *(_QWORD*)(result + 24) = v40;
      LABEL_115:
        if ((v130 & 1) != 0 && v132 != nullptr) {
          v68 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v68 = 56;
          }
          result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v68, v58);
        }
        if (++v34 >= (unsigned __int64)*(unsigned __int16*)(v9 + 226)) {
          goto LABEL_120;
        }
      }
      if ((result | 7) == 0x17) {
        v39 = 26;
      }
      else {
        v39 = (result | 7) + 1;
      }
      v38 = (char*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v39, 16, 0);
      v131 = v37;
      v132 = v38;
      v130 = v39 | 1;
    LABEL_67:
      GameRoutine_1a0b940(v38, v36, v37);
      goto LABEL_68;
    }
  LABEL_120:
    if (*(_WORD*)(v9 + 230) != 0) {
      for (i = 0; i < *(unsigned __int16*)(v9 + 230); ++i) {
        v70 = *(_QWORD*)(v9 + 128);
        if (v70 != 0) {
          v71 = *(_QWORD*)(v70 + 16 * i + 32) + 2LL;
        }
        else {
          v71 = 0;
        }
        result = GameRoutine_1a09c70(v71);
        if (result >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_228;
        }
        v73 = result;
        if (result >= 0x17) {
          if ((result | 7) == 0x17) {
            v75 = 26;
          }
          else {
            v75 = (result | 7) + 1;
          }
          v74 =
              (char*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v75, 16, 0);
          v131 = v73;
          v132 = v74;
          v130 = v75 | 1;
        }
        else {
          v74 = (char*)&v130 + 1;
          LOBYTE(v130) = 2 * result;
          if (result == 0) {
            goto LABEL_135;
          }
        }
        result = GameRoutine_1a0b940(v74, v71, v73);
      LABEL_135:
        v74[v73] = 0;
        v9 = v123;
        v76 = -1;
        v77 = 0;
        LOWORD(v127) = 0;
        v78 = *(_QWORD*)(v123 + 120) + 96 * i;
        v80 = v131;
        v79 = v132;
        v81 = v130 & 1;
        v82 = (unsigned __int64)(unsigned __int8)v130 >> 1;
        if (v81 != 0) {
          v83 = v132;
        }
        else {
          v83 = (char*)&v130 + 1;
        }
        if ((v130 & 1) != 0) {
          v84 = v131;
        }
        else {
          v84 = (unsigned __int64)(unsigned __int8)v130 >> 1;
        }
        v85 = &v83[v84];
        do {
          if (v84 + v77 == 0) {
            goto LABEL_145;
          }
          v86 = &v85[v77--];
          ++v76;
        } while (*(v86 - 1) != 46);
        v87 = v84 + v77;
        if (v84 + v77 != -1) {
          v121 = *(_QWORD*)(v123 + 120) + 96 * i;
          if (v84 > v87) {
            if (v77 <= 8) {
              goto LABEL_228;
            }
            v89 = ~v77;
            if (~v77 >= 0x17) {
              if ((v89 | 7) == 0x17) {
                v91 = 26;
              }
              else {
                v91 = (v89 | 7) + 1;
              }
              v90 = (char*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v91,
                                              16, 0);
              v125 = ~v77;
              v126 = v90;
              v124 = v91 | 1;
            }
            else {
              v90 = (char*)&v124 + 1;
              LOBYTE(v124) = 2 * v89;
              if (v77 == -1) {
                goto LABEL_156;
              }
            }
            GameRoutine_1a0b940(v90, &v85[v77 + 1], ~v77);
          LABEL_156:
            v92 = v127;
            v90[v76] = 0;
            if ((v92 & 1) != 0 && v129 != nullptr) {
              v93 = 128;
              if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                v93 = 56;
              }
              GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v93, v72);
            }
            v127 = v124;
            v128 = v125;
            v129 = v126;
            if ((v124 & 1) != 0) {
              v94 = v126;
            }
            else {
              v94 = (char*)&v127 + 1;
            }
            result = GameRoutine_1a0a760((unsigned __int8)*v94);
            *v94 = result;
            v95 = v127;
            v96 = v129;
            if ((v127 & 1) != 0) {
              v97 = v128;
            }
            else {
              v97 = (unsigned __int64)(unsigned __int8)v127 >> 1;
            }
            if ((v127 & 1) != 0) {
              v98 = v129;
            }
            else {
              v98 = (char*)&v127 + 1;
            }
            v99 = v97 + 4;
            if (v97 + 4 >= 0xFFFFFFFFFFFFFFF7LL) {
              goto LABEL_228;
            }
            if (v99 >= 0x17) {
              if ((v99 | 7) == 0x17) {
                v101 = 26;
              }
              else {
                v101 = (v99 | 7) + 1;
              }
              v102 = (char*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v101,
                                               16, 0);
              v125 = v97 + 4;
              v126 = v102;
              v124 = v101 | 1;
              *(_DWORD*)v102 = 1601200461;
              v100 = v102 + 4;
            }
            else {
              v100 = (char*)&v124 + 5;
              v125 = 0;
              v126 = nullptr;
              v124 = (unsigned __int8)(2 * v99);
              *(_DWORD*)((char*)&v124 + 1) = 1601200461;
              if (v97 == 0) {
                goto LABEL_179;
              }
            }
            result = GameRoutine_1a0b940(v100, v98, v97);
          LABEL_179:
            v30 = v120;
            v100[v97] = 0;
            if ((v95 & 1) != 0 && v96 != nullptr) {
              v103 = 128;
              if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                v103 = 56;
              }
              result =
                  GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v103, v72);
            }
            v127 = v124;
            v128 = v125;
            v81 = v130 & 1;
            v82 = (unsigned __int64)(unsigned __int8)v130 >> 1;
            v129 = v126;
            v80 = v131;
            v79 = v132;
          }
          v104 = v81 == 0;
          if (v81 != 0) {
            v105 = v80;
          }
          else {
            v105 = v82;
          }
          if (v104) {
            v106 = (char*)&v130 + 1;
          }
          else {
            v106 = v79;
          }
          if (v105 >= v87) {
            v107 = v87;
          }
          else {
            v107 = v105;
          }
          if (v107 >= 0xFFFFFFFFFFFFFFF7LL) {
            goto LABEL_228;
          }
          if (v107 >= 0x17) {
            if ((v107 | 7) == 0x17) {
              v109 = 26;
            }
            else {
              v109 = (v107 | 7) + 1;
            }
            v108 = (char*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v109,
                                             16, 0);
            v125 = v107;
            v126 = v108;
            v124 = v109 | 1;
          }
          else {
            v108 = (char*)&v124 + 1;
            LOBYTE(v124) = 2 * v107;
            if (v107 == 0) {
            LABEL_203:
              v110 = v130;
              v108[v107] = 0;
              if ((v110 & 1) != 0 && v132 != nullptr) {
                v111 = 128;
                if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                  v111 = 56;
                }
                GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v111, v72);
              }
              v9 = v123;
              v78 = v121;
              v130 = v124;
              v131 = v125;
              v132 = v126;
              v88 = (unsigned __int8)v127;
              goto LABEL_209;
            }
          }
          GameRoutine_1a0b940(v108, v106, v107);
          goto LABEL_203;
        }
      LABEL_145:
        v88 = 0;
      LABEL_209:
        v112 = (v88 & 1) == 0;
        v113 = v88 >> 1;
        if (v112) {
          v114 = (char*)&v127 + 1;
        }
        else {
          v114 = v129;
        }
        if (v112) {
          v115 = v113;
        }
        else {
          v115 = v128;
        }
        result = GameRoutine_a81a70(v114, v115);
        if ((_DWORD)result == v30) {
          result = GameRoutine_c0a320(v7, &v130);
          *(_QWORD*)(result + 32) = v78;
        }
        if ((v127 & 1) != 0 && v129 != nullptr) {
          v117 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v117 = 56;
          }
          result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v117, v116);
        }
        if ((v130 & 1) != 0 && v132 != nullptr) {
          v118 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v118 = 56;
          }
          result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v118, v116);
        }
      }
    }
  }
  return result;
}

__int64 GameHr_c687a0(__int64 a1, char a2)
{
  __int64 v2;
  _QWORD* v3;
  unsigned __int64 v4;
  bool v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  char* v11;
  __int64 v12;
  unsigned __int64 v13;
  char* v14;
  long double v15;
  __int64 v16;
  unsigned __int64 v17;
  bool v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  char* v23;
  __int64 v24;
  unsigned __int64 v25;
  char* v26;
  long double v27;
  __int64 v28;
  unsigned __int64 v29;
  bool v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  char* v35;
  __int64 v36;
  char* v37;
  unsigned __int64 v38;
  __int64* v39;
  long double v40;
  __int64 v41;
  unsigned __int64 v42;
  bool v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  char* v48;
  __int64 v49;
  __int64* v50;
  char* v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  char* v54;
  long double v55;
  __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  bool v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  bool v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  unsigned __int64 v68;
  bool v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  unsigned __int64 v73;
  bool v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  char* v79;
  __int64 v80;
  unsigned __int64 v81;
  char* v82;
  long double v83;
  __int64 v84;
  unsigned __int64 v85;
  bool v86;
  unsigned __int64 v87;
  unsigned __int64 v88;
  __int64 v89;
  unsigned __int64 v90;
  char* v91;
  __int64 v92;
  unsigned __int64 v93;
  char* v94;
  long double v95;
  __int64 v96;
  unsigned __int64 v97;
  bool v98;
  unsigned __int64 v99;
  unsigned __int64 v100;
  __int64 v101;
  unsigned __int64 v102;
  _QWORD* v103;
  char* v104;
  __int64 v105;
  unsigned __int64 v106;
  char* v107;
  long double v108;
  __int64 v109;
  unsigned __int64 v110;
  bool v111;
  unsigned __int64 v112;
  unsigned __int64 v113;
  __int64 v114;
  unsigned __int64 v115;
  char* v116;
  __int64 v117;
  unsigned __int64 v118;
  char* v119;
  long double v120;
  __int64 v121;
  unsigned __int64 v122;
  bool v123;
  unsigned __int64 v124;
  unsigned __int64 v125;
  __int64 v126;
  unsigned __int64 v127;
  char* v128;
  __int64 v129;
  unsigned __int64 v130;
  char* v131;
  long double v132;
  __int64 v133;
  unsigned __int64 v134;
  bool v135;
  unsigned __int64 v136;
  unsigned __int64 v137;
  __int64 v138;
  unsigned __int64 v139;
  char* v140;
  __int64 v141;
  unsigned __int64 v142;
  char* v143;
  long double v144;
  __int64 v145;
  unsigned __int64 v146;
  bool v147;
  unsigned __int64 v148;
  unsigned __int64 v149;
  __int64 v150;
  unsigned __int64 v151;
  char* v152;
  __int64 v153;
  unsigned __int64 v154;
  char* v155;
  long double v156;
  __int64 v157;
  unsigned __int64 v158;
  bool v159;
  unsigned __int64 v160;
  unsigned __int64 v161;
  __int64 v162;
  unsigned __int64 v163;
  char* v164;
  __int64 v165;
  unsigned __int64 v166;
  char* v167;
  long double v168;
  __int64 v169;
  unsigned int v170;
  char** v171;
  __int64 v172;
  unsigned __int64 v173;
  bool v174;
  char v175;
  unsigned __int64 v176;
  char* v177;
  unsigned __int64 v178;
  unsigned __int64 v179;
  unsigned __int64 v180;
  unsigned __int64 v181;
  char* v182;
  unsigned __int64 v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  long double v188;
  __int64 v189;
  char* v190;
  bool v191;
  unsigned __int64 v192;
  unsigned __int64 v193;
  unsigned __int64 v194;
  char* v195;
  bool v196;
  unsigned __int64 v197;
  unsigned __int64 v198;
  char* v199;
  long double v200;
  __int64 v201;
  __int64 v202;
  __int64 result;
  _BYTE* v204;
  _BYTE* v205;
  _BYTE* v206;
  _BYTE* v207;
  _BYTE* v208;
  __int64 v209;
  char** v211;
  unsigned int v212;
  __int64 v213;
  unsigned __int64 v214;
  char* v215;
  __int64 v216;
  unsigned __int64 v217;
  char* v218;

  v2 = a1;
  v3 = (_QWORD*)GameRoutine_c69950(a1);
  v4 = *(unsigned __int8*)(v2 + 64);
  v5 = (v4 & 1) == 0;
  v6 = v4 >> 1;
  if (v5) {
    v7 = v6;
  }
  else {
    v7 = *(_QWORD*)(v2 + 72);
  }
  if (v5) {
    v8 = v2 + 65;
  }
  else {
    v8 = *(_QWORD*)(v2 + 80);
  }
  v9 = v7 + 9;
  if (v7 + 9 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_427;
  }
  v10 = (_QWORD*)GameData_212bf68;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v12 = 26;
    }
    else {
      v12 = (v9 | 7) + 1;
    }
    v11 = (char*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v12, 16, 0);
    v217 = v7 + 9;
    v218 = v11;
    v216 = v12 | 1;
    goto LABEL_15;
  }
  v217 = 0;
  v218 = nullptr;
  v216 = (unsigned __int8)(2 * v9);
  v11 = (char*)&v216 + 1;
  if (v7 != 0) {
  LABEL_15:
    GameRoutine_1a0b940(v11, v8, v7);
  }
  strcpy(&v11[v7], "_Keyframe");
  if ((v216 & 1) != 0) {
    v13 = v217;
  }
  else {
    v13 = (unsigned __int64)(unsigned __int8)v216 >> 1;
  }
  if ((v216 & 1) != 0) {
    v14 = v218;
  }
  else {
    v14 = (char*)&v216 + 1;
  }
  v3 = (_QWORD*)GameRoutine_a8ee40(*(_QWORD*)(*GameData_212c010[0] + 13224),
                                   v14, v13);
  if ((v216 & 1) != 0 && v218 != nullptr) {
    v16 = 128;
    if (*(_QWORD*)(*v10 + 200LL) == 0) {
      v16 = 56;
    }
    v3 = (_QWORD*)GameRoutine_1a0a4e0(*v10 + v16, v15);
  }
  v17 = *(unsigned __int8*)(v2 + 88);
  v18 = (v17 & 1) == 0;
  v19 = v17 >> 1;
  if (v18) {
    v20 = v19;
  }
  else {
    v20 = *(_QWORD*)(v2 + 96);
  }
  if (v18) {
    v21 = v2 + 89;
  }
  else {
    v21 = *(_QWORD*)(v2 + 104);
  }
  v22 = v20 + 9;
  if (v20 + 9 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_427:
    GameRoutine_60a1d0(v3);
  }
  if (v22 >= 0x17) {
    if ((v22 | 7) == 0x17) {
      v24 = 26;
    }
    else {
      v24 = (v22 | 7) + 1;
    }
    v23 = (char*)GameRoutine_651b90(*v10, v24, 16, 0);
    v217 = v20 + 9;
    v218 = v23;
    v216 = v24 | 1;
    goto LABEL_41;
  }
  v217 = 0;
  v218 = nullptr;
  v216 = (unsigned __int8)(2 * v22);
  v23 = (char*)&v216 + 1;
  if (v20 != 0) {
  LABEL_41:
    GameRoutine_1a0b940(v23, v21, v20);
  }
  strcpy(&v23[v20], "_Keyframe");
  if ((v216 & 1) != 0) {
    v25 = v217;
  }
  else {
    v25 = (unsigned __int64)(unsigned __int8)v216 >> 1;
  }
  if ((v216 & 1) != 0) {
    v26 = v218;
  }
  else {
    v26 = (char*)&v216 + 1;
  }
  v3 = (_QWORD*)GameRoutine_a8ee40(*(_QWORD*)(*GameData_212c010[0] + 13224),
                                   v26, v25);
  if ((v216 & 1) != 0 && v218 != nullptr) {
    v28 = 128;
    if (*(_QWORD*)(*v10 + 200LL) == 0) {
      v28 = 56;
    }
    v3 = (_QWORD*)GameRoutine_1a0a4e0(*v10 + v28, v27);
  }
  v29 = *(unsigned __int8*)(v2 + 112);
  v30 = (v29 & 1) == 0;
  v31 = v29 >> 1;
  if (v30) {
    v32 = v31;
  }
  else {
    v32 = *(_QWORD*)(v2 + 120);
  }
  if (v30) {
    v33 = v2 + 113;
  }
  else {
    v33 = *(_QWORD*)(v2 + 128);
  }
  v34 = v32 + 9;
  if (v32 + 9 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_427;
  }
  if (v34 >= 0x17) {
    if ((v34 | 7) == 0x17) {
      v36 = 26;
    }
    else {
      v36 = (v34 | 7) + 1;
    }
    v35 = (char*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v36, 16, 0);
    v217 = v32 + 9;
    v218 = v35;
    v216 = v36 | 1;
    goto LABEL_67;
  }
  v217 = 0;
  v218 = nullptr;
  v216 = (unsigned __int8)(2 * v34);
  v35 = (char*)&v216 + 1;
  if (v32 != 0) {
  LABEL_67:
    GameRoutine_1a0b940(v35, v33, v32);
  }
  strcpy(&v35[v32], "_Keyframe");
  if ((v216 & 1) != 0) {
    v37 = v218;
  }
  else {
    v37 = (char*)&v216 + 1;
  }
  if ((v216 & 1) != 0) {
    v38 = v217;
  }
  else {
    v38 = (unsigned __int64)(unsigned __int8)v216 >> 1;
  }
  v39 = GameData_212c010[0];
  v3 = (_QWORD*)GameRoutine_a8ee40(*(_QWORD*)(*GameData_212c010[0] + 13224),
                                   v37, v38);
  if ((v216 & 1) != 0 && v218 != nullptr) {
    v41 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v41 = 56;
    }
    v3 = (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v41, v40);
  }
  v42 = *(unsigned __int8*)(v2 + 88);
  v43 = (v42 & 1) == 0;
  v44 = v42 >> 1;
  if (v43) {
    v45 = v44;
  }
  else {
    v45 = *(_QWORD*)(v2 + 96);
  }
  if (v43) {
    v46 = v2 + 89;
  }
  else {
    v46 = *(_QWORD*)(v2 + 104);
  }
  v47 = v45 + 5;
  if (v45 + 5 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_427;
  }
  if (v47 >= 0x17) {
    if ((v47 | 7) == 0x17) {
      v49 = 26;
    }
    else {
      v49 = (v47 | 7) + 1;
    }
    v48 = (char*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v49, 16, 0);
    v214 = v45 + 5;
    v215 = v48;
    v213 = v49 | 1;
    goto LABEL_93;
  }
  v214 = 0;
  v215 = nullptr;
  v213 = (unsigned __int8)(2 * v47);
  v48 = (char*)&v213 + 1;
  if (v45 != 0) {
  LABEL_93:
    GameRoutine_1a0b940(v48, v46, v45);
  }
  strcpy(&v48[v45], "_Bmap");
  v50 = (__int64*)GameRoutine_1a09ce0(&v213, "_Keyframe", 9);
  v52 = v50[1];
  v51 = (char*)v50[2];
  v216 = *v50;
  v217 = v52;
  v218 = v51;
  v50[1] = 0;
  v50[2] = 0;
  *v50 = 0;
  if ((v216 & 1) != 0) {
    v53 = v217;
  }
  else {
    v53 = (unsigned __int64)(unsigned __int8)v216 >> 1;
  }
  if ((v216 & 1) != 0) {
    v54 = v218;
  }
  else {
    v54 = (char*)&v216 + 1;
  }
  GameRoutine_a8ee40(*(_QWORD*)(*v39 + 13224), v54, v53);
  if ((v216 & 1) != 0 && v218 != nullptr) {
    v56 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v56 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v56, v55);
  }
  if ((v213 & 1) != 0 && v215 != nullptr) {
    v57 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v57 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v57, v55);
  }
  v58 = *(unsigned __int8*)(v2 + 64);
  v59 = (v58 & 1) == 0;
  v60 = v58 >> 1;
  if (v59) {
    v61 = v60;
  }
  else {
    v61 = *(_QWORD*)(v2 + 72);
  }
  if (v59) {
    v62 = v2 + 65;
  }
  else {
    v62 = *(_QWORD*)(v2 + 80);
  }
  GameRoutine_a8ee40(*(_QWORD*)(*v39 + 13224), v62, v61);
  v63 = *(unsigned __int8*)(v2 + 88);
  v64 = (v63 & 1) == 0;
  v65 = v63 >> 1;
  if (v64) {
    v66 = v65;
  }
  else {
    v66 = *(_QWORD*)(v2 + 96);
  }
  if (v64) {
    v67 = v2 + 89;
  }
  else {
    v67 = *(_QWORD*)(v2 + 104);
  }
  GameRoutine_a8ee40(*(_QWORD*)(*v39 + 13224), v67, v66);
  v68 = *(unsigned __int8*)(v2 + 112);
  v69 = (v68 & 1) == 0;
  v70 = v68 >> 1;
  if (v69) {
    v71 = v70;
  }
  else {
    v71 = *(_QWORD*)(v2 + 120);
  }
  if (v69) {
    v72 = v2 + 113;
  }
  else {
    v72 = *(_QWORD*)(v2 + 128);
  }
  v3 = (_QWORD*)GameRoutine_a8ee40(*(_QWORD*)(*v39 + 13224), v72, v71);
  v73 = *(unsigned __int8*)(v2 + 64);
  v74 = (v73 & 1) == 0;
  v75 = v73 >> 1;
  if (v74) {
    v76 = v75;
  }
  else {
    v76 = *(_QWORD*)(v2 + 72);
  }
  if (v74) {
    v77 = v2 + 65;
  }
  else {
    v77 = *(_QWORD*)(v2 + 80);
  }
  v78 = v76 + 5;
  if (v76 + 5 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_427;
  }
  if (v78 >= 0x17) {
    if ((v78 | 7) == 0x17) {
      v80 = 26;
    }
    else {
      v80 = (v78 | 7) + 1;
    }
    v79 = (char*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v80, 16, 0);
    v217 = v76 + 5;
    v218 = v79;
    v216 = v80 | 1;
    goto LABEL_142;
  }
  v217 = 0;
  v218 = nullptr;
  v216 = (unsigned __int8)(2 * v78);
  v79 = (char*)&v216 + 1;
  if (v76 != 0) {
  LABEL_142:
    GameRoutine_1a0b940(v79, v77, v76);
  }
  strcpy(&v79[v76], "_Bmap");
  if ((v216 & 1) != 0) {
    v81 = v217;
  }
  else {
    v81 = (unsigned __int64)(unsigned __int8)v216 >> 1;
  }
  if ((v216 & 1) != 0) {
    v82 = v218;
  }
  else {
    v82 = (char*)&v216 + 1;
  }
  v3 = (_QWORD*)GameRoutine_a8ee40(*(_QWORD*)(*v39 + 13224), v82, v81);
  if ((v216 & 1) != 0 && v218 != nullptr) {
    v84 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v84 = 56;
    }
    v3 = (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v84, v83);
  }
  v85 = *(unsigned __int8*)(v2 + 88);
  v86 = (v85 & 1) == 0;
  v87 = v85 >> 1;
  if (v86) {
    v88 = v87;
  }
  else {
    v88 = *(_QWORD*)(v2 + 96);
  }
  if (v86) {
    v89 = v2 + 89;
  }
  else {
    v89 = *(_QWORD*)(v2 + 104);
  }
  v90 = v88 + 5;
  if (v88 + 5 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_427;
  }
  if (v90 >= 0x17) {
    if ((v90 | 7) == 0x17) {
      v92 = 26;
    }
    else {
      v92 = (v90 | 7) + 1;
    }
    v91 = (char*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v92, 16, 0);
    v217 = v88 + 5;
    v218 = v91;
    v216 = v92 | 1;
    goto LABEL_168;
  }
  v217 = 0;
  v218 = nullptr;
  v216 = (unsigned __int8)(2 * v90);
  v91 = (char*)&v216 + 1;
  if (v88 != 0) {
  LABEL_168:
    GameRoutine_1a0b940(v91, v89, v88);
  }
  strcpy(&v91[v88], "_Bmap");
  if ((v216 & 1) != 0) {
    v93 = v217;
  }
  else {
    v93 = (unsigned __int64)(unsigned __int8)v216 >> 1;
  }
  if ((v216 & 1) != 0) {
    v94 = v218;
  }
  else {
    v94 = (char*)&v216 + 1;
  }
  v3 = (_QWORD*)GameRoutine_a8ee40(*(_QWORD*)(*v39 + 13224), v94, v93);
  if ((v216 & 1) != 0 && v218 != nullptr) {
    v96 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v96 = 56;
    }
    v3 = (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v96, v95);
  }
  v97 = *(unsigned __int8*)(v2 + 112);
  v98 = (v97 & 1) == 0;
  v99 = v97 >> 1;
  if (v98) {
    v100 = v99;
  }
  else {
    v100 = *(_QWORD*)(v2 + 120);
  }
  if (v98) {
    v101 = v2 + 113;
  }
  else {
    v101 = *(_QWORD*)(v2 + 128);
  }
  v102 = v100 + 5;
  if (v100 + 5 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_427;
  }
  v103 = (_QWORD*)GameData_212bf68;
  if (v102 >= 0x17) {
    if ((v102 | 7) == 0x17) {
      v105 = 26;
    }
    else {
      v105 = (v102 | 7) + 1;
    }
    v104 = (char*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v105, 16, 0);
    v217 = v100 + 5;
    v218 = v104;
    v216 = v105 | 1;
    goto LABEL_194;
  }
  v217 = 0;
  v218 = nullptr;
  v216 = (unsigned __int8)(2 * v102);
  v104 = (char*)&v216 + 1;
  if (v100 != 0) {
  LABEL_194:
    GameRoutine_1a0b940(v104, v101, v100);
  }
  strcpy(&v104[v100], "_Bmap");
  if ((v216 & 1) != 0) {
    v106 = v217;
  }
  else {
    v106 = (unsigned __int64)(unsigned __int8)v216 >> 1;
  }
  if ((v216 & 1) != 0) {
    v107 = v218;
  }
  else {
    v107 = (char*)&v216 + 1;
  }
  v3 = (_QWORD*)GameRoutine_a8ee40(*(_QWORD*)(*v39 + 13224), v107, v106);
  if ((v216 & 1) != 0 && v218 != nullptr) {
    v109 = 128;
    if (*(_QWORD*)(*v103 + 200LL) == 0) {
      v109 = 56;
    }
    v3 = (_QWORD*)GameRoutine_1a0a4e0(*v103 + v109, v108);
  }
  v110 = *(unsigned __int8*)(v2 + 64);
  v111 = (v110 & 1) == 0;
  v112 = v110 >> 1;
  if (v111) {
    v113 = v112;
  }
  else {
    v113 = *(_QWORD*)(v2 + 72);
  }
  if (v111) {
    v114 = v2 + 65;
  }
  else {
    v114 = *(_QWORD*)(v2 + 80);
  }
  v115 = v113 + 7;
  if (v113 + 7 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_427;
  }
  if (v115 >= 0x17) {
    if ((v115 | 7) == 0x17) {
      v117 = 26;
    }
    else {
      v117 = (v115 | 7) + 1;
    }
    v116 = (char*)GameRoutine_651b90(*v103, v117, 16, 0);
    v217 = v113 + 7;
    v218 = v116;
    v216 = v117 | 1;
    goto LABEL_220;
  }
  v217 = 0;
  v218 = nullptr;
  v216 = (unsigned __int8)(2 * v115);
  v116 = (char*)&v216 + 1;
  if (v113 != 0) {
  LABEL_220:
    GameRoutine_1a0b940(v116, v114, v113);
  }
  strcpy(&v116[v113], "_Combat");
  if ((v216 & 1) != 0) {
    v118 = v217;
  }
  else {
    v118 = (unsigned __int64)(unsigned __int8)v216 >> 1;
  }
  if ((v216 & 1) != 0) {
    v119 = v218;
  }
  else {
    v119 = (char*)&v216 + 1;
  }
  v3 = (_QWORD*)GameRoutine_a8ee40(*(_QWORD*)(*v39 + 13224), v119, v118);
  if ((v216 & 1) != 0 && v218 != nullptr) {
    v121 = 128;
    if (*(_QWORD*)(*v103 + 200LL) == 0) {
      v121 = 56;
    }
    v3 = (_QWORD*)GameRoutine_1a0a4e0(*v103 + v121, v120);
  }
  v122 = *(unsigned __int8*)(v2 + 64);
  v123 = (v122 & 1) == 0;
  v124 = v122 >> 1;
  if (v123) {
    v125 = v124;
  }
  else {
    v125 = *(_QWORD*)(v2 + 72);
  }
  if (v123) {
    v126 = v2 + 65;
  }
  else {
    v126 = *(_QWORD*)(v2 + 80);
  }
  v127 = v125 + 2;
  if (v125 + 2 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_427;
  }
  if (v127 >= 0x17) {
    if ((v127 | 7) == 0x17) {
      v129 = 26;
    }
    else {
      v129 = (v127 | 7) + 1;
    }
    v128 = (char*)GameRoutine_651b90(*v103, v129, 16, 0);
    v217 = v125 + 2;
    v218 = v128;
    v216 = v129 | 1;
    goto LABEL_246;
  }
  v217 = 0;
  v218 = nullptr;
  v216 = (unsigned __int8)(2 * v127);
  v128 = (char*)&v216 + 1;
  if (v125 != 0) {
  LABEL_246:
    GameRoutine_1a0b940(v128, v126, v125);
  }
  strcpy(&v128[v125], "Ex");
  if ((v216 & 1) != 0) {
    v130 = v217;
  }
  else {
    v130 = (unsigned __int64)(unsigned __int8)v216 >> 1;
  }
  if ((v216 & 1) != 0) {
    v131 = v218;
  }
  else {
    v131 = (char*)&v216 + 1;
  }
  v3 = (_QWORD*)GameRoutine_a8ee40(*(_QWORD*)(*v39 + 13224), v131, v130);
  if ((v216 & 1) != 0 && v218 != nullptr) {
    v133 = 128;
    if (*(_QWORD*)(*v103 + 200LL) == 0) {
      v133 = 56;
    }
    v3 = (_QWORD*)GameRoutine_1a0a4e0(*v103 + v133, v132);
  }
  v134 = *(unsigned __int8*)(v2 + 88);
  v135 = (v134 & 1) == 0;
  v136 = v134 >> 1;
  if (v135) {
    v137 = v136;
  }
  else {
    v137 = *(_QWORD*)(v2 + 96);
  }
  if (v135) {
    v138 = v2 + 89;
  }
  else {
    v138 = *(_QWORD*)(v2 + 104);
  }
  v139 = v137 + 2;
  if (v137 + 2 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_427;
  }
  if (v139 >= 0x17) {
    if ((v139 | 7) == 0x17) {
      v141 = 26;
    }
    else {
      v141 = (v139 | 7) + 1;
    }
    v140 = (char*)GameRoutine_651b90(*v103, v141, 16, 0);
    v217 = v137 + 2;
    v218 = v140;
    v216 = v141 | 1;
    goto LABEL_272;
  }
  v217 = 0;
  v218 = nullptr;
  v216 = (unsigned __int8)(2 * v139);
  v140 = (char*)&v216 + 1;
  if (v137 != 0) {
  LABEL_272:
    GameRoutine_1a0b940(v140, v138, v137);
  }
  strcpy(&v140[v137], "Ex");
  if ((v216 & 1) != 0) {
    v142 = v217;
  }
  else {
    v142 = (unsigned __int64)(unsigned __int8)v216 >> 1;
  }
  if ((v216 & 1) != 0) {
    v143 = v218;
  }
  else {
    v143 = (char*)&v216 + 1;
  }
  v3 = (_QWORD*)GameRoutine_a8ee40(*(_QWORD*)(*v39 + 13224), v143, v142);
  if ((v216 & 1) != 0 && v218 != nullptr) {
    v145 = 128;
    if (*(_QWORD*)(*v103 + 200LL) == 0) {
      v145 = 56;
    }
    v3 = (_QWORD*)GameRoutine_1a0a4e0(*v103 + v145, v144);
  }
  v146 = *(unsigned __int8*)(v2 + 64);
  v147 = (v146 & 1) == 0;
  v148 = v146 >> 1;
  if (v147) {
    v149 = v148;
  }
  else {
    v149 = *(_QWORD*)(v2 + 72);
  }
  if (v147) {
    v150 = v2 + 65;
  }
  else {
    v150 = *(_QWORD*)(v2 + 80);
  }
  v151 = v149 + 7;
  if (v149 + 7 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_427;
  }
  if (v151 >= 0x17) {
    if ((v151 | 7) == 0x17) {
      v153 = 26;
    }
    else {
      v153 = (v151 | 7) + 1;
    }
    v152 = (char*)GameRoutine_651b90(*v103, v153, 16, 0);
    v217 = v149 + 7;
    v218 = v152;
    v216 = v153 | 1;
    goto LABEL_298;
  }
  v217 = 0;
  v218 = nullptr;
  v216 = (unsigned __int8)(2 * v151);
  v152 = (char*)&v216 + 1;
  if (v149 != 0) {
  LABEL_298:
    GameRoutine_1a0b940(v152, v150, v149);
  }
  strcpy(&v152[v149], "Ex_Bmap");
  if ((v216 & 1) != 0) {
    v154 = v217;
  }
  else {
    v154 = (unsigned __int64)(unsigned __int8)v216 >> 1;
  }
  if ((v216 & 1) != 0) {
    v155 = v218;
  }
  else {
    v155 = (char*)&v216 + 1;
  }
  v3 = (_QWORD*)GameRoutine_a8ee40(*(_QWORD*)(*v39 + 13224), v155, v154);
  if ((v216 & 1) != 0 && v218 != nullptr) {
    v157 = 128;
    if (*(_QWORD*)(*v103 + 200LL) == 0) {
      v157 = 56;
    }
    v3 = (_QWORD*)GameRoutine_1a0a4e0(*v103 + v157, v156);
  }
  v158 = *(unsigned __int8*)(v2 + 88);
  v159 = (v158 & 1) == 0;
  v160 = v158 >> 1;
  if (v159) {
    v161 = v160;
  }
  else {
    v161 = *(_QWORD*)(v2 + 96);
  }
  if (v159) {
    v162 = v2 + 89;
  }
  else {
    v162 = *(_QWORD*)(v2 + 104);
  }
  v163 = v161 + 7;
  if (v161 + 7 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_427;
  }
  if (v163 >= 0x17) {
    if ((v163 | 7) == 0x17) {
      v165 = 26;
    }
    else {
      v165 = (v163 | 7) + 1;
    }
    v164 = (char*)GameRoutine_651b90(*v103, v165, 16, 0);
    v217 = v161 + 7;
    v218 = v164;
    v216 = v165 | 1;
    goto LABEL_324;
  }
  v217 = 0;
  v218 = nullptr;
  v216 = (unsigned __int8)(2 * v163);
  v164 = (char*)&v216 + 1;
  if (v161 != 0) {
  LABEL_324:
    GameRoutine_1a0b940(v164, v162, v161);
  }
  strcpy(&v164[v161], "Ex_Bmap");
  if ((v216 & 1) != 0) {
    v166 = v217;
  }
  else {
    v166 = (unsigned __int64)(unsigned __int8)v216 >> 1;
  }
  if ((v216 & 1) != 0) {
    v167 = v218;
  }
  else {
    v167 = (char*)&v216 + 1;
  }
  GameRoutine_a8ee40(*(_QWORD*)(*v39 + 13224), v167, v166);
  if ((v216 & 1) != 0 && v218 != nullptr) {
    v169 = 128;
    if (*(_QWORD*)(*v103 + 200LL) == 0) {
      v169 = 56;
    }
    GameRoutine_1a0a4e0(*v103 + v169, v168);
  }
  if (*(int*)(v2 + 352) >= 1) {
    v170 = 0;
    v209 = v2;
    v211 = (char**)(v2 + 392);
    do {
      v171 = v211;
      v172 = 5;
      v212 = v170;
      do {
        v3 = (*(struct PseudoSret*)(&v213) = GameRoutine_1a0a790(v170),
              (void*)(&v213));
        v173 = *((unsigned __int8*)v171 - 16);
        v174 = (v173 & 1) == 0;
        v175 = v213;
        v176 = v173 >> 1;
        if (v174) {
          v177 = (char*)v171 - 15;
        }
        else {
          v177 = *v171;
        }
        if (v174) {
          v178 = v176;
        }
        else {
          v178 = (unsigned __int64)*(v171 - 1);
        }
        if ((v213 & 1) != 0) {
          v179 = v214;
        }
        else {
          v179 = (unsigned __int64)(unsigned __int8)v213 >> 1;
        }
        v180 = 22;
        if ((v213 & 1) != 0) {
          v180 = (v213 & 0xFFFFFFFFFFFFFFFELL) - 1;
        }
        if (v180 - v179 >= v178) {
          if (v178 != 0) {
            if ((v213 & 1) != 0) {
              v190 = v215;
            }
            else {
              v190 = (char*)&v213 + 1;
            }
            if (v179 != 0) {
              v191 = v177 < &v190[v179] && v177 >= v190;
              if (v191) {
                v192 = v178;
              }
              else {
                v192 = 0;
              }
              v177 += v192;
              GameRoutine_1a0b940(&v190[v178], v190, v179);
            }
            GameRoutine_1a0b940(v190, v177, v178);
            v193 = v179 + v178;
            if ((v213 & 1) != 0) {
              v214 = v179 + v178;
            }
            else {
              LOBYTE(v213) = 2 * v193;
            }
            v190[v193] = 0;
          }
        }
        else {
          v181 = v179 + v178;
          if (v179 + v178 - v180 > -10LL - v180) {
            goto LABEL_427;
          }
          if ((v213 & 1) != 0) {
            v182 = v215;
          }
          else {
            v182 = (char*)&v213 + 1;
          }
          v183 = 2 * v180;
          if (v181 > 2 * v180) {
            v183 = v179 + v178;
          }
          if ((v183 | 7) == 0x17) {
            v184 = 26;
          }
          else {
            v184 = (v183 | 7) + 1;
          }
          v191 = v183 >= 0x17;
          v185 = 23;
          if (v191) {
            v185 = v184;
          }
          if (v180 <= 0x7FFFFFFFFFFFFFF2LL) {
            v186 = v185;
          }
          else {
            v186 = -9;
          }
          v187 = GameRoutine_651b90(*v103, v186, 16, 0);
          GameRoutine_1a0b950(v187, v177, v178);
          if (v179 != 0) {
            GameRoutine_1a0b940(v187 + v178, v182, v179);
          }
          if ((v175 & 1) != 0 && v182 != nullptr) {
            v189 = 128;
            if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
              v189 = 56;
            }
            GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v189, v188);
          }
          v214 = v179 + v178;
          v215 = (char*)v187;
          *(_BYTE*)(v187 + v181) = 0;
          v213 = v186 | 1;
          v103 = (_QWORD*)GameData_212bf68;
          v39 = GameData_212c010[0];
          v170 = v212;
        }
        v194 = v214;
        v195 = v215;
        v196 = (v213 & 1) == 0;
        v216 = v213;
        v217 = v214;
        v197 = (unsigned __int8)v213 >> 1;
        v218 = v215;
        v213 = 0;
        v214 = 0;
        v215 = nullptr;
        if (v196) {
          v198 = v197;
        }
        else {
          v198 = v194;
        }
        if (v196) {
          v199 = (char*)&v216 + 1;
        }
        else {
          v199 = v195;
        }
        GameRoutine_a8ee40(*(_QWORD*)(*v39 + 13224), v199, v198);
        if ((v216 & 1) != 0 && v218 != nullptr) {
          v201 = 128;
          if (*(_QWORD*)(*v103 + 200LL) == 0) {
            v201 = 56;
          }
          GameRoutine_1a0a4e0(*v103 + v201, v200);
        }
        if ((v213 & 1) != 0 && v215 != nullptr) {
          v202 = 128;
          if (*(_QWORD*)(*v103 + 200LL) == 0) {
            v202 = 56;
          }
          GameRoutine_1a0a4e0(*v103 + v202, v200);
        }
        v171 += 3;
        --v172;
      } while (v172 != 0);
      ++v170;
    } while (v170 != 4);
    v2 = v209;
    *(_QWORD*)(v209 + 496) = -1;
    *(_QWORD*)(v209 + 504) = -1;
  }
  GameRoutine_a8ee40(*(_QWORD*)(*v39 + 13224), "SubOverride", 11);
  *(_QWORD*)(v2 + 520) = 0;
  *(_DWORD*)(v2 + 528) = 0;
  *(_QWORD*)(v2 + 512) = -1;
  result = GameRoutine_c69ba0(v2);
  *(_BYTE*)(v2 + 24) = 1;
  if ((a2 & 1) != 0) {
    if ((*(_BYTE*)(v2 + 136) & 1) != 0) {
      v204 = *(_BYTE**)(v2 + 152);
      *(_QWORD*)(v2 + 144) = 0;
    }
    else {
      v204 = (_BYTE*)(v2 + 137);
      *(_BYTE*)(v2 + 136) = 0;
    }
    *v204 = 0;
    if ((*(_BYTE*)(v2 + 160) & 1) != 0) {
      v205 = *(_BYTE**)(v2 + 176);
      *(_QWORD*)(v2 + 168) = 0;
    }
    else {
      v205 = (_BYTE*)(v2 + 161);
      *(_BYTE*)(v2 + 160) = 0;
    }
    *v205 = 0;
    if ((*(_BYTE*)(v2 + 184) & 1) != 0) {
      v206 = *(_BYTE**)(v2 + 200);
      *(_QWORD*)(v2 + 192) = 0;
    }
    else {
      v206 = (_BYTE*)(v2 + 185);
      *(_BYTE*)(v2 + 184) = 0;
    }
    *v206 = 0;
    if ((*(_BYTE*)(v2 + 208) & 1) != 0) {
      v207 = *(_BYTE**)(v2 + 224);
      *(_QWORD*)(v2 + 216) = 0;
    }
    else {
      v207 = (_BYTE*)(v2 + 209);
      *(_BYTE*)(v2 + 208) = 0;
    }
    *v207 = 0;
    if ((*(_BYTE*)(v2 + 232) & 1) != 0) {
      v208 = *(_BYTE**)(v2 + 248);
      *(_QWORD*)(v2 + 240) = 0;
    }
    else {
      v208 = (_BYTE*)(v2 + 233);
      *(_BYTE*)(v2 + 232) = 0;
    }
    *v208 = 0;
    *(_BYTE*)(v2 + 360) = 0;
    *(_QWORD*)(v2 + 352) = 0;
    *(_QWORD*)(v2 + 364) = 0x3F8000003F800000LL;
  }
  return result;
}

_QWORD* GameHr_cbf650(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* result;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  v2 = GameData_212c370;
  v3 = *GameData_212c370;
  v4 = *(
      _QWORD*)(v3 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 472LL))(v4);
  v6 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v5 + 24) + 456LL))(
      *(_QWORD*)(v5 + 24));
  v7 = GameData_212dbc0[0];
  if ((v6 & 1) != 0) {
    if ((*(_BYTE*)a1 & 1) != 0) {
      v8 = *(_QWORD*)(a1 + 16);
    }
    else {
      v8 = a1 + 1;
    }
    if ((unsigned int)GameRoutine_1a09d30(GameData_212f6f8[0], v8) != 0) {
      if ((unsigned int)GameRoutine_1a09d30(GameData_212f700[0], v8) != 0) {
        if ((unsigned int)GameRoutine_1a09d30(GameData_212f708[0], v8) != 0) {
          if ((unsigned int)GameRoutine_1a09d30(GameData_212f710, v8) != 0) {
            v9 = 0;
          }
          else {
            v9 = 3;
          }
        }
        else {
          v9 = 2;
        }
      }
      else {
        v9 = 1;
      }
    }
    else {
      v9 = 0;
    }
    v10 = *(_QWORD*)v7;
    *(_DWORD*)(v10 + 100) = v9;
    *(_BYTE*)(v10 + 104) = 1;
    v6 = GameRoutine_d6f600();
  }
  if ((GameRoutine_d85af0(v6) & 1) != 0) {
    goto LABEL_16;
  }
  v15 = *(_QWORD*)v7;
  v16 = *(unsigned __int8*)(*(_QWORD*)v7 + 112LL);
  if ((v16 & 1) != 0) {
    v17 = *(_QWORD*)(*(_QWORD*)v7 + 120LL);
  }
  else {
    v17 = v16 >> 1;
  }
  if (v17 != 0) {
    v18 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
                                8LL) +
                     64LL);
    v19 = *(_QWORD*)(v18 + 96);
    if (v19 != 0) {
      v20 = (v16 & 1) != 0 ? *(_QWORD*)(v15 + 128) : v15 + 113;
      if (!GameRoutine_c13be0(v19, v20, v17, *(_QWORD*)(v18 + 152), 0)) {
      LABEL_16:
        v11 = *v2;
        v12 = *(_QWORD*)(v11 +
                         8LL * (*(unsigned int (**)(__int64))(
                                   *(_QWORD*)GameData_21a6070 + 72LL))(
                                   GameData_21a6070) +
                         4384);
        v13 = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 472LL))(v12);
        return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
            **(_QWORD**)(v13 + 24) + 448LL))(*(_QWORD*)(v13 + 24), 0);
      }
    }
    GameRoutine_d6f8d0(v15);
  }
  v21 = *v2;
  v22 = *(
      _QWORD*)(v21 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v22 != 0) {
    v23 = (*(__int64 (**)(__int64))(*(_QWORD*)v22 + 472LL))(v22);
  }
  else {
    v23 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v23 + 24) + 448LL))(
      *(_QWORD*)(v23 + 24), 1);
  result = *(_QWORD**)(v23 + 2240);
  *(_QWORD*)(v23 + 2240) = 0;
  if (result == (_QWORD*)(v23 + 2208)) {
    v24 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v24 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v24))((__int64)result);
}

__int64 GameHr_cc2210(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  __int64 result;
  long double v14;
  __int64 v15;
  _QWORD v16[2];
  char* v17;

  v2 = *GameData_212c370;
  v3 = *(
      _QWORD*)(v2 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v3 != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 472LL))(v3);
  }
  else {
    v4 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v4 + 24) + 448LL))(
      *(_QWORD*)(v4 + 24), 1);
  v5 = *(_QWORD**)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (v5 == (_QWORD*)(v4 + 2208)) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_9;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
LABEL_9:
  v7 = GameData_21f3cd0;
  if ((*(_BYTE*)a1 & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 16);
  }
  else {
    v8 = a1 + 1;
  }
  v9 = GameRoutine_1a09c70(v8);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(v9);
  }
  v10 = v9;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v12 = 26;
    }
    else {
      v12 = (v9 | 7) + 1;
    }
    v11 = (char*)GameRoutine_651b90(GameData_2265ee0, v12, 16, 0);
    v16[1] = v10;
    v17 = v11;
    v16[0] = v12 | 1;
  }
  else {
    LOBYTE(v16[0]) = 2 * v9;
    v11 = (char*)v16 + 1;
    if (v9 == 0) {
      goto LABEL_21;
    }
  }
  GameRoutine_1a0b940(v11, v8, v10);
LABEL_21:
  v11[v10] = 0;
  result = GameRoutine_913f40(v7, v16);
  if ((v16[0] & 1) != 0 && v17 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v15 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v15, v14);
  }
  return result;
}

__int64 GameHr_cc4040(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  char** v16;
  char* v17;
  unsigned __int64 v18;
  char* v19;
  char* v20;
  __int64 v21;
  long double v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  char* v30;

  v4 = *GameData_212c370;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  v7 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v7 == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_9;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_9:
  if ((*(_BYTE*)a1 & 1) != 0) {
    v9 = *(_QWORD*)(a1 + 16);
  }
  else {
    v9 = a1 + 1;
  }
  v10 = GameRoutine_1a09c70(v9);
  if (v10 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(v10);
  }
  v11 = v10;
  if (v10 >= 0x17) {
    if ((v10 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v10 | 7) + 1;
    }
    v12 = (char*)GameRoutine_651b90(GameData_2265ee0, v13, 16, 0);
    v29 = v11;
    v30 = v12;
    v28 = v13 | 1;
  }
  else {
    LOBYTE(v28) = 2 * v10;
    v12 = (char*)&v28 + 1;
    if (v10 == 0) {
      goto LABEL_21;
    }
  }
  GameRoutine_1a0b940(v12, v9, v11);
LABEL_21:
  v12[v11] = 0;
  v14 = 0;
  v15 = v30;
  v16 = GameData_212fbf8;
  if ((v28 & 1) != 0) {
    v17 = v30;
  }
  else {
    v17 = (char*)&v28 + 1;
  }
  if ((v28 & 1) != 0) {
    v18 = v29;
  }
  else {
    v18 = (unsigned __int8)v28 >> 1;
  }
  do {
    v20 = *v16;
    v16 += 2;
    v19 = v20;
    v21 = GameRoutine_1a09c70(v20);
    if (v21 == v18) {
      if (v21 == -1) {
        GameRoutine_60a230(-1);
      }
      if ((unsigned int)GameRoutine_1a09cf0(v17, v19) == 0) {
        v23 = 0x100000000LL - v14;
        if ((v28 & 1) == 0) {
          goto LABEL_38;
        }
        goto LABEL_34;
      }
    }
    --v14;
  } while (v14 != -32);
  v23 = 0;
  if ((v28 & 1) != 0) {
  LABEL_34:
    if (v15 != nullptr) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v24 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v24, v22);
    }
  }
LABEL_38:
  if (HIDWORD(v23) == 0) {
    return 0;
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v26 = *(_QWORD*)(a2 + 16);
  }
  else {
    v26 = a2 + 1;
  }
  v27 = GameRoutine_1a09c70(v26);
  return GameRoutine_ffd760((unsigned int)v23, v26, v27, 1);
}

bool GameHr_cc42c0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  char* v13;
  char** v14;
  char* v15;
  unsigned __int64 v16;
  char* v17;
  char* v18;
  __int64 v19;
  long double v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  _BOOL8 result;
  __int64 v25;
  unsigned __int64 v26;
  char* v27;

  v2 = *GameData_212c370;
  v3 = *(
      _QWORD*)(v2 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v3 != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 472LL))(v3);
  }
  else {
    v4 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v4 + 24) + 448LL))(
      *(_QWORD*)(v4 + 24), 1);
  v5 = *(_QWORD**)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (v5 == (_QWORD*)(v4 + 2208)) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_9;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
LABEL_9:
  if ((*(_BYTE*)a1 & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 16);
  }
  else {
    v7 = a1 + 1;
  }
  v8 = GameRoutine_1a09c70(v7);
  if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(v8);
  }
  v9 = v8;
  if (v8 >= 0x17) {
    if ((v8 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (v8 | 7) + 1;
    }
    v10 = (char*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v11, 16, 0);
    v26 = v9;
    v27 = v10;
    v25 = v11 | 1;
  }
  else {
    LOBYTE(v25) = 2 * v8;
    v10 = (char*)&v25 + 1;
    if (v8 == 0) {
      goto LABEL_21;
    }
  }
  GameRoutine_1a0b940(v10, v7, v9);
LABEL_21:
  v10[v9] = 0;
  v12 = 0;
  v13 = v27;
  v14 = GameData_212fbf8;
  if ((v25 & 1) != 0) {
    v15 = v27;
  }
  else {
    v15 = (char*)&v25 + 1;
  }
  if ((v25 & 1) != 0) {
    v16 = v26;
  }
  else {
    v16 = (unsigned __int8)v25 >> 1;
  }
  do {
    v18 = *v14;
    v14 += 2;
    v17 = v18;
    v19 = GameRoutine_1a09c70(v18);
    if (v19 == v16) {
      if (v19 == -1) {
        GameRoutine_60a230(-1);
      }
      if ((unsigned int)GameRoutine_1a09cf0(v15, v17) == 0) {
        v21 = 0x100000000LL - v12;
        if ((v25 & 1) == 0) {
          goto LABEL_38;
        }
        goto LABEL_34;
      }
    }
    --v12;
  } while (v12 != -32);
  v21 = 0;
  if ((v25 & 1) != 0) {
  LABEL_34:
    if (v13 != nullptr) {
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v22 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v22, v20);
    }
  }
LABEL_38:
  result = false;
  if (HIDWORD(v21) != 0 &&
      (GameRoutine_ffd760((unsigned int)v21, &GameData_1a9f09e, 0, 1) & 1) !=
          0) {
    v23 = GameData_21ee260 != 0 ? GameData_21ee260 + 8 : GameData_212cf60;
    if ((GameRoutine_143d560((unsigned int)v21, &GameData_1a9f09e, 0, v23) &
         1) == 0) {
      return true;
    }
  }
  return result;
}

_BYTE* GameHr_cc51f0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  unsigned __int64 v9;
  long double v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  _BYTE* result;
  char v15;
  unsigned __int64 v16;
  char* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  char* v22;

  v2 = *GameData_212c370;
  v3 = *(
      _QWORD*)(v2 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v3 != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 472LL))(v3);
  }
  else {
    v4 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v4 + 24) + 448LL))(
      *(_QWORD*)(v4 + 24), 1);
  v5 = *(_QWORD**)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (v5 == (_QWORD*)(v4 + 2208)) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_9;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
LABEL_9:
  v7 = (_QWORD*)GameData_21c9608;
  if ((*(_BYTE*)a1 & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 16);
  }
  else {
    v8 = a1 + 1;
  }
  v9 = GameRoutine_1a09c70(v8);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(v9);
  }
  v11 = v9;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v9 | 7) + 1;
    }
    v12 = (char*)GameRoutine_651b90(GameData_2265ee0, v13, 16, 0);
    v21 = v11;
    v22 = v12;
    v20 = v13 | 1;
    goto LABEL_20;
  }
  LOBYTE(v20) = 2 * v9;
  v12 = (char*)&v20 + 1;
  if (v9 != 0) {
  LABEL_20:
    GameRoutine_1a0b940(v12, v8, v11);
  }
  v12[v11] = 0;
  result = v7 + 35;
  v15 = v20;
  if (v7 + 35 == &v20) {
    goto LABEL_32;
  }
  if ((*result & 1) != 0) {
    if ((v20 & 1) != 0) {
      v17 = v22;
    }
    else {
      v17 = (char*)&v20 + 1;
    }
    if ((v20 & 1) != 0) {
      v18 = v21;
    }
    else {
      v18 = (unsigned __int64)(unsigned __int8)v20 >> 1;
    }
    result = (_BYTE*)GameRoutine_64dde0(result, v17, v18, v10);
    v15 = v20;
  LABEL_32:
    if ((v15 & 1) == 0) {
      return result;
    }
    goto LABEL_33;
  }
  if ((v20 & 1) == 0) {
    v16 = v21;
    *(_QWORD*)result = v20;
    v7[36] = v16;
    v7[37] = v22;
    return result;
  }
  result = (_BYTE*)GameRoutine_64df20(result, v22, v21, v10);
LABEL_33:
  if (v22 != nullptr) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v19 = 56;
    }
    return (_BYTE*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v19, v10);
  }
  return result;
}

_BYTE* GameHr_cc8bf0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  unsigned __int64 v9;
  long double v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  _BYTE* result;
  char v15;
  unsigned __int64 v16;
  char* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  char* v22;

  v2 = *GameData_212c370;
  v3 = *(
      _QWORD*)(v2 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v3 != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 472LL))(v3);
  }
  else {
    v4 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v4 + 24) + 448LL))(
      *(_QWORD*)(v4 + 24), 1);
  v5 = *(_QWORD**)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (v5 == (_QWORD*)(v4 + 2208)) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_9;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
LABEL_9:
  v7 = (_QWORD*)GameData_220d630;
  if ((*(_BYTE*)a1 & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 16);
  }
  else {
    v8 = a1 + 1;
  }
  v9 = GameRoutine_1a09c70(v8);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(v9);
  }
  v11 = v9;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v9 | 7) + 1;
    }
    v12 = (char*)GameRoutine_651b90(GameData_2265ee0, v13, 16, 0);
    v21 = v11;
    v22 = v12;
    v20 = v13 | 1;
    goto LABEL_20;
  }
  LOBYTE(v20) = 2 * v9;
  v12 = (char*)&v20 + 1;
  if (v9 != 0) {
  LABEL_20:
    GameRoutine_1a0b940(v12, v8, v11);
  }
  v12[v11] = 0;
  result = v7 + 10;
  v15 = v20;
  if (v7 + 10 == &v20) {
    goto LABEL_32;
  }
  if ((*result & 1) != 0) {
    if ((v20 & 1) != 0) {
      v17 = v22;
    }
    else {
      v17 = (char*)&v20 + 1;
    }
    if ((v20 & 1) != 0) {
      v18 = v21;
    }
    else {
      v18 = (unsigned __int64)(unsigned __int8)v20 >> 1;
    }
    result = (_BYTE*)GameRoutine_64dde0(result, v17, v18, v10);
    v15 = v20;
  LABEL_32:
    if ((v15 & 1) == 0) {
      return result;
    }
    goto LABEL_33;
  }
  if ((v20 & 1) == 0) {
    v16 = v21;
    *(_QWORD*)result = v20;
    v7[11] = v16;
    v7[12] = v22;
    return result;
  }
  result = (_BYTE*)GameRoutine_64df20(result, v22, v21, v10);
LABEL_33:
  if (v22 != nullptr) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v19 = 56;
    }
    return (_BYTE*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v19, v10);
  }
  return result;
}

__int64 GameHr_cc9b40(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  __int64 result;
  long double v14;
  __int64 v15;
  _QWORD v16[2];
  char* v17;

  v2 = *GameData_212c370;
  v3 = *(
      _QWORD*)(v2 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v3 != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 472LL))(v3);
  }
  else {
    v4 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v4 + 24) + 448LL))(
      *(_QWORD*)(v4 + 24), 1);
  v5 = *(_QWORD**)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (v5 == (_QWORD*)(v4 + 2208)) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_9;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
LABEL_9:
  v7 = GameData_21f3d00;
  if ((*(_BYTE*)a1 & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 16);
  }
  else {
    v8 = a1 + 1;
  }
  v9 = GameRoutine_1a09c70(v8);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(v9);
  }
  v10 = v9;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v12 = 26;
    }
    else {
      v12 = (v9 | 7) + 1;
    }
    v11 = (char*)GameRoutine_651b90(GameData_2265ee0, v12, 16, 0);
    v16[1] = v10;
    v17 = v11;
    v16[0] = v12 | 1;
  }
  else {
    LOBYTE(v16[0]) = 2 * v9;
    v11 = (char*)v16 + 1;
    if (v9 == 0) {
      goto LABEL_21;
    }
  }
  GameRoutine_1a0b940(v11, v8, v10);
LABEL_21:
  v11[v10] = 0;
  result = GameRoutine_e1c860(v7, v16);
  if ((v16[0] & 1) != 0 && v17 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v15 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v15, v14);
  }
  return result;
}

#pragma GCC visibility pop
