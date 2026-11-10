#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN* GameData_1f50948;

extern __int64 GameData_212bf68;

extern __int64 (*GameData_212e358[2])();

extern _UNKNOWN* GameData_212ea30;

extern __int64 GameData_21caab0;

extern _QWORD GameData_21fdd90[];

extern __int64 GameData_21fdde0;

extern __int64 GameData_21fdde8;

extern _UNKNOWN GameData_21fde98;

__int64 GameRoutine_112180(_QWORD, _QWORD);

__int64 GameRoutine_198d120(_QWORD, _QWORD);

__int64 GameRoutine_1a09c00(_QWORD);

__int64 GameRoutine_1a09c10(_QWORD);

__int64 GameRoutine_1a09c50(_QWORD);

__int64 GameRoutine_1a09c70(_QWORD);

__int64 GameRoutine_1a09cf0(_QWORD, _QWORD);

__int64 GameRoutine_1a09fd0(_QWORD);

__int64 GameRoutine_1a09fe0(_QWORD);

__int64 GameRoutine_1a0a4e0(_QWORD, long double);

float GameRoutine_1a0a550(float, float);

__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_2b0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_60a270(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD, long double);

__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD, long double);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_6b7f00(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_6b8990(_QWORD, _QWORD);

__int64 GameRoutine_7a86e0(_QWORD);

__int64 GameRoutine_827070(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_a2adb0(_QWORD, _QWORD, long double);

__int64 GameRoutine_a2fe30(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD);

__int64 GameRoutine_a5aca0(_QWORD);

__int64 GameRoutine_a690c0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_a691e0(_QWORD, _QWORD);

__int64 GameRoutine_a69620(_QWORD, _QWORD);

__int64 GameRoutine_a6a320(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_a6aa00(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);

__int64 GameRoutine_a6b310(_QWORD, _QWORD);

__int64 GameRoutine_ad7390(_QWORD);

__int64 GameRoutine_ae1bc0(void);

__int64 GameRoutine_ae1d00(_QWORD);

__int64 GameRoutine_b4a510(_QWORD, _QWORD);

__int64 GameRoutine_b50c60(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_b538b0(__int64, __int64, __int64, _QWORD*, __int64);

__int64 GameRoutine_b5a720(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_b91200(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_c32fa0(_QWORD, _QWORD);

__int64 GameRoutine_c4e300(_QWORD, _QWORD);

__int64 GameRoutine_ee140(_QWORD);

__int64 GameRoutine_fdf60(_QWORD, _QWORD);

__int64 GameHr_a2e6f0(__int64 a1, __int64 a2, char a3, char a4, char a5,
                      __int64 a6)
{
  __int64 v11;
  long double v12;
  __int64 result;
  __int64 v14;
  int v15;
  _DWORD v16[4];

  v16[0] = GameRoutine_fdf60(a2, 0);
  v11 = GameRoutine_ee140(v16);
  result = GameRoutine_a2adb0(a1, a6, v12);
  if (v11 != 0 && *(_QWORD*)(v11 + 48) != 0) {
    v14 = 0;
    v15 = 0x2000;
    GameRoutine_112180(&v14, a1 + 344);
    GameRoutine_a2fe30(a1, &v14, *(_QWORD*)(v11 + 48), a3 & 1, a4 & 1, a5 & 1,
                       a6, a6);
    return GameRoutine_112180(a1 + 344, v16);
  }
  return result;
}

bool GameHr_a4d420(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  long double v7;
  __int64 v8;
  _BOOL8 result;
  _QWORD v10[2];
  __int64 v11;
  __int64 v12;

  v1 = *(_QWORD**)(a1 + 24);
  if (v1 == nullptr) {
    return false;
  }
  v2 = GameData_212bf68;
  do {
    if ((v1[2] & 1) != 0) {
      GameRoutine_60a270(v10, v1[4], v1[3]);
    }
    else {
      v3 = v1[3];
      v4 = v1[4];
      v10[0] = v1[2];
      v10[1] = v3;
      v11 = v4;
    }
    v12 = v1[5];
    v5 = v12;
    GameRoutine_1a09c00(v12 + 696);
    v6 = *(_DWORD*)(v5 + 656);
    GameRoutine_1a09c10(v5 + 696);
    if ((v10[0] & 1) != 0 && v11 != 0) {
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
        v8 = 128;
      }
      else {
        v8 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v2 + v8, v7);
    }
    result = (v6 & 8) == 0;
    if ((v6 & 8) == 0) {
      break;
    }
    v1 = (_QWORD*)*v1;
  } while (v1 != nullptr);
  return result;
}

__int64 GameHr_a67be0(__int64 result, char* a2, __int64 a3, char a4)
{
  char* v7;
  char* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  int v12;
  int v13;
  char* v14;
  char* v15;
  int v16;
  char* v17;
  char* v18;
  int v19;
  int v20;
  char* v21;
  char* v22;
  int v23;
  int v24;
  char* v25;
  char* v26;
  int v27;
  int v28;
  char* v29;
  char* v30;
  char* v31;
  unsigned __int64 v32;
  __int64 v33;
  char* v34;
  char* v35;
  char* v36;
  int v37;
  char* v38;
  char* v39;
  int v40;
  unsigned __int64 v41;
  int v42;
  int v43;
  __int64 v44;
  char* v45;
  __int64 v46;
  char* v47;
  unsigned __int64 v48;
  char* v49;
  __int64 v50;
  __int64 v51;
  char v52;
  char* v53;
  unsigned __int64 v54;
  char* v55;
  int v56;
  char* v57;
  int v58;
  char* v59;
  char* v60;
  int v61;
  int v62;
  int v63;
  __int64 v64;
  char* v65;
  __int64 v66;
  char* v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64 v70;
  _DWORD* v71;
  char* v72;
  int v73;
  int v74;
  char* v75;
  _QWORD* v76;
  __int64 v77;
  char* v78;
  _QWORD* v79;
  char* v80;
  __int64 v81;
  char* v82;
  __int64 v83;
  __int64 v84;
  char* v85;
  __int64 v86;
  char* v87;
  char* v88;
  _QWORD* v89;
  char* v90;
  char* v91;
  _QWORD* v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  signed __int64 v96;
  signed __int64 v97;
  __int64 v98;
  char* v99;
  __int64 v100;
  char* v101;
  char* v102;
  __int64 v103;
  _QWORD* v104;
  char* v105;
  char* v106;
  __int64 v107;
  _QWORD* v108;
  __int64 v109;
  __int64 v110;
  unsigned __int64 v111;
  _QWORD* v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  bool v116;
  char* v117;
  char* v118;
  __int64 v119;
  char* v120;
  char* v121;
  char* v122;
  int v123;
  int v124;
  char* v125;
  unsigned __int64 v126;
  char* v127;
  char* v128;
  __int64 v129;
  char* v130;
  __int64 v131;
  char* v132;
  __int64 v133;
  __int64 v134;
  char* v135;
  char* v136;
  char* v137;
  __int64 v138;
  _BYTE* v139;
  __int64 v140;
  unsigned __int64 v141;
  unsigned __int64 v142;
  char* v143;
  char* v144;
  __int64 v145;
  _QWORD* v146;
  char* v147;
  char* v148;
  __int64 v149;
  _QWORD* v150;
  unsigned __int64 v151;
  _QWORD* v152;
  __int64 v153;
  char* v154;
  __int64 v155;
  _QWORD* v156;
  char** v157;
  _QWORD* v158;
  char* v159;
  char** v160;
  int v161;
  char* v162;
  char* v163;
  __int64 v164;
  char* v165;
  char* v166;
  char* v167;
  __int64 v168;
  __int64 v169;
  char* v170;
  unsigned __int64 v171;
  _BYTE v172[32];
  _BYTE* v173;
  unsigned __int64 v174;
  _BYTE v175[32];
  char* v176;

  v7 = (char*)result;
LABEL_2:
  v8 = v7;
  v170 = a2 - 64;
  while (1) {
    v7 = v8;
    v9 = (a2 - v8) >> 6;
    v10 = v9 - 2;
    if ((__int64)v9 <= 2) {
      if (v9 < 2) {
        return result;
      }
      if (v9 == 2) {
        if (*((_DWORD*)a2 - 15) >= *((_DWORD*)v8 + 1)) {
          return result;
        }
      LABEL_169:
        v75 = v8;
        return GameRoutine_a69620(v75, v170);
      }
      goto LABEL_10;
    }
    if (v9 == 3) {
      break;
    }
    if (v9 == 4) {
      return GameRoutine_a690c0(v8, v8 + 64, v8 + 128, v170);
    }
    if (v9 == 5) {
      result = GameRoutine_a690c0(v8, v8 + 64, v8 + 128, v8 + 192);
      if (*((_DWORD*)a2 - 15) < *((_DWORD*)v8 + 49)) {
        result = GameRoutine_a69620(v8 + 192, v170);
        if (*((_DWORD*)v8 + 49) < *((_DWORD*)v8 + 33)) {
          result = GameRoutine_a69620(v8 + 128, v8 + 192);
          if (*((_DWORD*)v8 + 33) < *((_DWORD*)v8 + 17)) {
            v71 = v8 + 64;
            v72 = v8 + 128;
          LABEL_357:
            result = GameRoutine_a69620(v71, v72);
            if (*((_DWORD*)v8 + 17) < *((_DWORD*)v8 + 1)) {
              return GameRoutine_a69620(v8, v8 + 64);
            }
          }
        }
      }
      return result;
    }
  LABEL_10:
    if ((__int64)v9 <= 23) {
      if ((a4 & 1) != 0) {
        if (v8 == a2) {
          return result;
        }
        v76 = v8 + 64;
        if (v8 + 64 == a2) {
          return result;
        }
        v77 = 0;
        v78 = v8;
      LABEL_178:
        v79 = v76;
        if (*((_DWORD*)v78 + 17) >= *((_DWORD*)v78 + 1)) {
          goto LABEL_177;
        }
        v80 = *((char**)v78 + 14);
        v174 = *v76;
        if (v80 != nullptr) {
          if (v80 == v78 + 80) {
            v176 = v175;
            (*(void (**)(char*, _BYTE*))(*(_QWORD*)v80 + 24LL))(v80, v175);
          }
          else {
            v176 = v80;
            *((_QWORD*)v78 + 14) = 0;
          }
        }
        else {
          v176 = nullptr;
        }
        v81 = v77;
        while (1) {
          v82 = &v7[v81];
          v83 = v81;
          v84 = *(_QWORD*)&v7[v81];
          v85 = *((char**)v82 + 14);
          *((_QWORD*)v82 + 14) = 0;
          *((_QWORD*)v82 + 8) = v84;
          if (v82 + 80 == v85) {
            v86 = 32;
          }
          else {
            if (v85 == nullptr) {
              goto LABEL_190;
            }
            v86 = 40;
          }
          (*(void (**)(void))(*(_QWORD*)v85 + v86))();
        LABEL_190:
          v87 = *(char**)&v7[v83 + 48];
          if (v87 != nullptr) {
            if (v82 + 16 == v87) {
              *((_QWORD*)v82 + 14) = v82 + 80;
              (*(void (**)(char*, _QWORD*))(*(_QWORD*)v87 + 24LL))(
                  v87, (_QWORD*)v82 + 10);
              if (v83 == 0) {
              LABEL_199:
                v90 = v7;
                v89 = v7 + 16;
              LABEL_200:
                v91 = &v7[v83];
                *(_QWORD*)v90 = v174;
                v92 = *((_QWORD**)v91 + 6);
                *((_QWORD*)v91 + 6) = 0;
                if (v92 == v89) {
                  v93 = 32;
                LABEL_204:
                  (*(void (**)(void))(*v92 + v93))();
                }
                else if (v92 != nullptr) {
                  v93 = 40;
                  goto LABEL_204;
                }
                result = (__int64)v176;
                if (v176 == nullptr) {
                  *((_QWORD*)v91 + 6) = 0;
                  goto LABEL_177;
                }
                if (v176 != v175) {
                  *((_QWORD*)v91 + 6) = v176;
                  goto LABEL_177;
                }
                *((_QWORD*)v91 + 6) = v89;
                (*(void (**)(__int64, _QWORD*))(*(_QWORD*)result + 24LL))(
                    result, v89);
                result = (__int64)v176;
                if (v176 == v175) {
                  v94 = 32;
                LABEL_212:
                  result = (*(__int64 (**)(void))(*(_QWORD*)v176 + v94))();
                }
                else if (v176 != nullptr) {
                  v94 = 40;
                  goto LABEL_212;
                }
              LABEL_177:
                v76 = v79 + 8;
                v77 += 64;
                v78 = (char*)v79;
                if (v79 + 8 == (_QWORD*)a2) {
                  return result;
                }
                goto LABEL_178;
              }
            }
            else {
              *((_QWORD*)v82 + 14) = v87;
              *(_QWORD*)&v7[v83 + 48] = 0;
              if (v83 == 0) {
                goto LABEL_199;
              }
            }
          }
          else {
            *((_QWORD*)v82 + 14) = 0;
            if (v83 == 0) {
              goto LABEL_199;
            }
          }
          v81 = v83 - 64;
          if (SHIDWORD(v174) >= *(_DWORD*)&v7[v83 - 60]) {
            v88 = &v7[v81];
            v89 = v88 + 80;
            v90 = v88 + 64;
            goto LABEL_200;
          }
        }
      }
      if (v8 == a2) {
        return result;
      }
      v156 = v8 + 64;
      if (v8 + 64 == a2) {
        return result;
      }
      v157 = (char**)(v8 + 112);
      while (2) {
        v158 = v156;
        if (*((_DWORD*)v7 + 17) >= *((_DWORD*)v7 + 1)) {
          goto LABEL_363;
        }
        v159 = *((char**)v7 + 14);
        v174 = *v156;
        if (v159 != nullptr) {
          if (v159 == v7 + 80) {
            v176 = v175;
            (*(void (**)(char*, _BYTE*))(*(_QWORD*)v159 + 24LL))(v159, v175);
          }
          else {
            v176 = v159;
            *((_QWORD*)v7 + 14) = 0;
          }
        }
        else {
          v176 = nullptr;
        }
        v160 = v157;
      LABEL_373:
        v162 = *(v160 - 14);
        v163 = *v160;
        *v160 = nullptr;
        *(v160 - 6) = v162;
        if (v160 - 4 == (char**)v163) {
          v164 = 32;
        LABEL_377:
          (*(void (**)(void))(*(_QWORD*)v163 + v164))();
        }
        else if (v163 != nullptr) {
          v164 = 40;
          goto LABEL_377;
        }
        v165 = *(v160 - 8);
        if (v165 != nullptr) {
          if (v160 - 12 == (char**)v165) {
            *v160 = (char*)(v160 - 4);
            (*(void (**)(char*, _QWORD**))(*(_QWORD*)v165 + 24LL))(
                v165, (_QWORD**)v160 - 4);
          }
          else {
            *v160 = v165;
            *(v160 - 8) = nullptr;
          }
        }
        else {
          *v160 = nullptr;
        }
        v161 = *((_DWORD*)v160 - 43);
        v160 -= 8;
        if (SHIDWORD(v174) >= v161) {
          v166 = (char*)v174;
          v167 = *v160;
          *v160 = nullptr;
          *(v160 - 6) = v166;
          if (v160 - 4 == (char**)v167) {
            v168 = 32;
          LABEL_386:
            (*(void (**)(void))(*(_QWORD*)v167 + v168))();
          }
          else if (v167 != nullptr) {
            v168 = 40;
            goto LABEL_386;
          }
          result = (__int64)v176;
          if (v176 == nullptr) {
            *v160 = nullptr;
            goto LABEL_363;
          }
          if (v176 != v175) {
            *v160 = v176;
            goto LABEL_363;
          }
          *v160 = (char*)(v160 - 4);
          (*(void (**)(__int64, _QWORD**))(*(_QWORD*)result + 24LL))(
              result, (_QWORD**)v160 - 4);
          result = (__int64)v176;
          if (v176 == v175) {
            v169 = 32;
          LABEL_394:
            result = (*(__int64 (**)(void))(*(_QWORD*)v176 + v169))();
          }
          else if (v176 != nullptr) {
            v169 = 40;
            goto LABEL_394;
          }
        LABEL_363:
          v156 = v158 + 8;
          v157 += 8;
          v7 = (char*)v158;
          if (v158 + 8 == (_QWORD*)a2) {
            return result;
          }
          continue;
        }
        goto LABEL_373;
      }
    }
    if (a3 == 0) {
      if (v8 == a2) {
        return result;
      }
      v95 = v10 >> 1;
      v96 = v10 >> 1;
      while (2) {
        v97 = v96;
        if (v95 < v96) {
          goto LABEL_216;
        }
        v98 = (2 * (v96 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
        v99 = &v7[64 * v98];
        if (2 * v96 + 2 < (__int64)v9) {
          v100 = 64;
          if (*((_DWORD*)v99 + 1) < *((_DWORD*)v99 + 17)) {
            v98 = 2 * v96 + 2;
          }
          else {
            v100 = 0;
          }
          v99 += v100;
        }
        v101 = &v7[64 * v96];
        if (*((_DWORD*)v99 + 1) < *((_DWORD*)v101 + 1)) {
          goto LABEL_216;
        }
        v174 = *(_QWORD*)v101;
        v102 = *((char**)v101 + 6);
        if (v102 != nullptr) {
          if (v102 == v101 + 16) {
            v176 = v175;
            (*(void (**)(char*))(*(_QWORD*)v102 + 24LL))(v102);
          }
          else {
            v176 = *((char**)v101 + 6);
            *((_QWORD*)v101 + 6) = 0;
          }
        }
        else {
          v176 = nullptr;
        }
      LABEL_230:
        v104 = v99 + 16;
        v103 = *(_QWORD*)v99;
        v105 = *((char**)v101 + 6);
        v106 = v99;
        *((_QWORD*)v101 + 6) = 0;
        *(_QWORD*)v101 = v103;
        if (v105 == v101 + 16) {
          v107 = 32;
        LABEL_234:
          (*(void (**)(void))(*(_QWORD*)v105 + v107))();
        }
        else if (v105 != nullptr) {
          v107 = 40;
          goto LABEL_234;
        }
        v108 = *((_QWORD**)v99 + 6);
        if (v108 != nullptr) {
          if (v108 == v104) {
            *((_QWORD*)v101 + 6) = v101 + 16;
            (*(void (**)(_QWORD, _QWORD*))(**((_QWORD**)v99 + 6) + 24LL))(
                *((_QWORD*)v99 + 6), (_QWORD*)v101 + 2);
            if (v95 < v98) {
              goto LABEL_247;
            }
          }
          else {
            *((_QWORD*)v101 + 6) = v108;
            *((_QWORD*)v99 + 6) = 0;
            if (v95 < v98) {
              goto LABEL_247;
            }
          }
        }
        else {
          *((_QWORD*)v101 + 6) = 0;
          if (v95 < v98) {
            goto LABEL_247;
          }
        }
        v109 = (2 * v98) | 1;
        v99 = &v7[64 * v109];
        if (2 * v98 + 2 < (__int64)v9) {
          v110 = 64;
          if (*((_DWORD*)v99 + 1) < *((_DWORD*)v99 + 17)) {
            v109 = 2 * v98 + 2;
          }
          else {
            v110 = 0;
          }
          v99 += v110;
        }
        v101 = v106;
        v98 = v109;
        if (*((_DWORD*)v99 + 1) < SHIDWORD(v174)) {
        LABEL_247:
          v111 = v174;
          v112 = *((_QWORD**)v106 + 6);
          *((_QWORD*)v106 + 6) = 0;
          *(_QWORD*)v106 = v111;
          if (v112 == v104) {
            v113 = 32;
          LABEL_251:
            (*(void (**)(void))(*v112 + v113))();
          }
          else if (v112 != nullptr) {
            v113 = 40;
            goto LABEL_251;
          }
          if (v176 != nullptr) {
            if (v176 == v175) {
              *((_QWORD*)v106 + 6) = v104;
              (*(void (**)(char*, _QWORD*))(*(_QWORD*)v176 + 24LL))(v176, v104);
              goto LABEL_256;
            }
            *((_QWORD*)v106 + 6) = v176;
          }
          else {
            *((_QWORD*)v106 + 6) = 0;
          LABEL_256:
            if (v176 == v175) {
              v114 = 32;
            }
            else {
              if (v176 == nullptr) {
                goto LABEL_216;
              }
              v114 = 40;
            }
            (*(void (**)(void))(*(_QWORD*)v176 + v114))();
          }
        LABEL_216:
          v96 = v97 - 1;
          if (v97 != 0) {
            continue;
          }
          while (2) {
            v117 = *((char**)v7 + 6);
            v118 = a2;
            v171 = *(_QWORD*)v7;
            if (v117 != nullptr) {
              if (v117 == v7 + 16) {
                v173 = v172;
                (*(void (**)(char*, _BYTE*))(*(_QWORD*)v117 + 24LL))(v117,
                                                                     v172);
              }
              else {
                v173 = *((_BYTE**)v7 + 6);
                *((_QWORD*)v7 + 6) = 0;
              }
            }
            else {
              v173 = nullptr;
            }
            v119 = 0;
            v120 = v7;
          LABEL_273:
            v121 = &v120[64 * v119];
            v122 = v120;
            v120 = v121 + 64;
            if (2 * v119 + 2 >= (__int64)v9) {
              v119 = (2 * v119) | 1;
            }
            else {
              v123 = *((_DWORD*)v121 + 17);
              v124 = *((_DWORD*)v121 + 33);
              v125 = v121 + 128;
              if (v123 >= v124) {
                v119 = (2 * v119) | 1;
              }
              else {
                v120 = v125;
                v119 = 2 * v119 + 2;
              }
            }
            v127 = v120 + 16;
            v126 = *(_QWORD*)v120;
            v128 = *((char**)v122 + 6);
            *((_QWORD*)v122 + 6) = 0;
            *(_QWORD*)v122 = v126;
            if (v128 == v122 + 16) {
              v129 = 32;
            LABEL_282:
              (*(void (**)(void))(*(_QWORD*)v128 + v129))();
            }
            else if (v128 != nullptr) {
              v129 = 40;
              goto LABEL_282;
            }
            v130 = *((char**)v120 + 6);
            if (v130 != nullptr) {
              if (v130 == v127) {
                *((_QWORD*)v122 + 6) = v122 + 16;
                (*(void (**)(_QWORD, _QWORD*))(**((_QWORD**)v120 + 6) + 24LL))(
                    *((_QWORD*)v120 + 6), (_QWORD*)v122 + 2);
              }
              else {
                *((_QWORD*)v122 + 6) = v130;
                *((_QWORD*)v120 + 6) = 0;
              }
            }
            else {
              *((_QWORD*)v122 + 6) = 0;
            }
            if (v119 > (__int64)((v9 - 2) >> 1)) {
              a2 -= 64;
              if (v120 == v118 - 64) {
                result = *((_QWORD*)v120 + 6);
                *((_QWORD*)v120 + 6) = 0;
                *(_QWORD*)v120 = v171;
                if ((char*)result == v127) {
                  v134 = 32;
                LABEL_317:
                  result = (*(__int64 (**)(void))(*(_QWORD*)result + v134))();
                }
                else if (result != 0) {
                  v134 = 40;
                  goto LABEL_317;
                }
                if (v173 == nullptr) {
                  *((_QWORD*)v120 + 6) = 0;
                  goto LABEL_352;
                }
                if (v173 == v172) {
                  *((_QWORD*)v120 + 6) = v127;
                  (*(void (**)(_BYTE*, char*))(*(_QWORD*)v173 + 24LL))(
                      v173, v120 + 16);
                  goto LABEL_352;
                }
                *((_QWORD*)v120 + 6) = v173;
                goto LABEL_264;
              }
              v131 = *((_QWORD*)v118 - 8);
              v132 = *((char**)v120 + 6);
              *((_QWORD*)v120 + 6) = 0;
              *(_QWORD*)v120 = v131;
              if (v132 == v127) {
                v133 = 32;
              LABEL_295:
                (*(void (**)(void))(*(_QWORD*)v132 + v133))();
              }
              else if (v132 != nullptr) {
                v133 = 40;
                goto LABEL_295;
              }
              v135 = *((char**)v118 - 2);
              v136 = v118 - 48;
              if (v135 != nullptr) {
                if (v135 != v136) {
                  *((_QWORD*)v120 + 6) = v135;
                  *(_QWORD*)a2 = v171;
                  goto LABEL_306;
                }
                *((_QWORD*)v120 + 6) = v127;
                (*(void (**)(_QWORD, char*))(**((_QWORD**)v118 - 2) + 24LL))(
                    *((_QWORD*)v118 - 2), v120 + 16);
              }
              else {
                *((_QWORD*)v120 + 6) = 0;
              }
              v137 = *((char**)v118 - 2);
              *((_QWORD*)v118 - 2) = 0;
              *((_QWORD*)v118 - 8) = v171;
              if (v137 == v136) {
                v138 = 32;
              LABEL_305:
                (*(void (**)(void))(*(_QWORD*)v137 + v138))();
              }
              else if (v137 != nullptr) {
                v138 = 40;
                goto LABEL_305;
              }
            LABEL_306:
              v139 = v173;
              if (v173 != nullptr) {
                if (v173 == v172) {
                  *((_QWORD*)v118 - 2) = v136;
                  (*(void (**)(_BYTE*, char*))(*(_QWORD*)v139 + 24LL))(
                      v139, v118 - 48);
                }
                else {
                  *((_QWORD*)v118 - 2) = v173;
                  v173 = nullptr;
                }
              }
              else {
                *((_QWORD*)v118 - 2) = 0;
              }
              v140 = (v120 + 64 - v7) >> 6;
              v116 = v140 < 2;
              v141 = v140 - 2;
              if (v116) {
                goto LABEL_352;
              }
              v142 = v141 >> 1;
              v143 = &v7[64 * (v141 >> 1)];
              if (*((_DWORD*)v143 + 1) >= *((_DWORD*)v120 + 1)) {
                goto LABEL_352;
              }
              v144 = *((char**)v120 + 6);
              v174 = *(_QWORD*)v120;
              if (v144 != nullptr) {
                if (v144 == v127) {
                  v176 = v175;
                  (*(void (**)(char*, _BYTE*))(*(_QWORD*)v144 + 24LL))(v144,
                                                                       v175);
                }
                else {
                  v176 = v144;
                  *((_QWORD*)v120 + 6) = 0;
                }
              }
              else {
                v176 = nullptr;
              }
              while (2) {
                v146 = v143 + 16;
                v145 = *(_QWORD*)v143;
                v147 = *((char**)v120 + 6);
                v148 = v143;
                *((_QWORD*)v120 + 6) = 0;
                *(_QWORD*)v120 = v145;
                if (v147 == v120 + 16) {
                  v149 = 32;
                LABEL_329:
                  (*(void (**)(void))(*(_QWORD*)v147 + v149))();
                }
                else if (v147 != nullptr) {
                  v149 = 40;
                  goto LABEL_329;
                }
                v150 = *((_QWORD**)v143 + 6);
                if (v150 != nullptr) {
                  if (v150 == v146) {
                    *((_QWORD*)v120 + 6) = v120 + 16;
                    (*(void (**)(_QWORD, char*))(**((_QWORD**)v143 + 6) +
                                                 24LL))(*((_QWORD*)v143 + 6),
                                                        v120 + 16);
                    if (v142 == 0) {
                      break;
                    }
                  }
                  else {
                    *((_QWORD*)v120 + 6) = v150;
                    *((_QWORD*)v143 + 6) = 0;
                    if (v142 == 0) {
                      break;
                    }
                  }
                }
                else {
                  *((_QWORD*)v120 + 6) = 0;
                  if (v142 == 0) {
                    break;
                  }
                }
                v120 = v143;
                v142 = (v142 - 1) >> 1;
                v143 = &v7[64 * v142];
                if (*((_DWORD*)v143 + 1) < SHIDWORD(v174)) {
                  continue;
                }
                break;
              }
              v151 = v174;
              v152 = *((_QWORD**)v148 + 6);
              *((_QWORD*)v148 + 6) = 0;
              *(_QWORD*)v148 = v151;
              if (v152 == v146) {
                v153 = 32;
              LABEL_342:
                (*(void (**)(void))(*v152 + v153))();
              }
              else if (v152 != nullptr) {
                v153 = 40;
                goto LABEL_342;
              }
              v154 = v176;
              if (v176 != nullptr) {
                if (v176 != v175) {
                  *((_QWORD*)v148 + 6) = v176;
                  goto LABEL_352;
                }
                *((_QWORD*)v148 + 6) = v146;
                (*(void (**)(char*, _QWORD*))(*(_QWORD*)v154 + 24LL))(v154,
                                                                      v146);
                if (v176 == v175) {
                  v155 = 32;
                LABEL_351:
                  (*(void (**)(void))(*(_QWORD*)v176 + v155))();
                }
                else if (v176 != nullptr) {
                  v155 = 40;
                  goto LABEL_351;
                }
              }
              else {
                *((_QWORD*)v148 + 6) = 0;
              }
            LABEL_352:
              result = (__int64)v173;
              if (v173 == v172) {
                v115 = 32;
                goto LABEL_263;
              }
              if (v173 != nullptr) {
                v115 = 40;
              LABEL_263:
                result = (*(__int64 (**)(void))(*(_QWORD*)v173 + v115))();
              }
            LABEL_264:
              v116 = (__int64)v9-- <= 2;
              if (v116) {
                return result;
              }
              continue;
            }
            goto LABEL_273;
          }
        }
        goto LABEL_230;
      }
    }
    v11 = &v8[64 * (v9 >> 1)];
    v12 = *((_DWORD*)a2 - 15);
    if (v9 >= 0x81) {
      v13 = *((_DWORD*)v11 + 1);
      if (v13 >= *((_DWORD*)v7 + 1)) {
        if (v12 < v13) {
          GameRoutine_a69620(&v7[64 * (v9 >> 1)], v170);
          if (*((_DWORD*)v11 + 1) < *((_DWORD*)v7 + 1)) {
            v14 = v7;
            v15 = &v7[64 * (v9 >> 1)];
            goto LABEL_26;
          }
        }
      }
      else {
        v14 = v7;
        if (v12 < v13) {
          goto LABEL_17;
        }
        GameRoutine_a69620(v7, &v7[64 * (v9 >> 1)]);
        if (*((_DWORD*)a2 - 15) < *((_DWORD*)v11 + 1)) {
          v14 = &v7[64 * (v9 >> 1)];
        LABEL_17:
          v15 = a2 - 64;
        LABEL_26:
          GameRoutine_a69620(v14, v15);
        }
      }
      v19 = *((_DWORD*)v11 - 15);
      v20 = *((_DWORD*)a2 - 31);
      if (v19 >= *((_DWORD*)v7 + 17)) {
        if (v20 < v19) {
          GameRoutine_a69620(v11 - 64, a2 - 128);
          if (*((_DWORD*)v11 - 15) < *((_DWORD*)v7 + 17)) {
            v21 = v7 + 64;
            v22 = v11 - 64;
            goto LABEL_38;
          }
        }
      }
      else {
        v21 = v7 + 64;
        if (v20 < v19) {
          goto LABEL_31;
        }
        GameRoutine_a69620(v21, v11 - 64);
        if (*((_DWORD*)a2 - 31) < *((_DWORD*)v11 - 15)) {
          v21 = v11 - 64;
        LABEL_31:
          v22 = a2 - 128;
        LABEL_38:
          GameRoutine_a69620(v21, v22);
        }
      }
      v23 = *((_DWORD*)v11 + 17);
      v24 = *((_DWORD*)a2 - 47);
      if (v23 >= *((_DWORD*)v7 + 33)) {
        if (v24 < v23) {
          GameRoutine_a69620(v11 + 64, a2 - 192);
          if (*((_DWORD*)v11 + 17) < *((_DWORD*)v7 + 33)) {
            v25 = v7 + 128;
            v26 = v11 + 64;
            goto LABEL_47;
          }
        }
      }
      else {
        v25 = v7 + 128;
        if (v24 < v23) {
          goto LABEL_43;
        }
        GameRoutine_a69620(v25, v11 + 64);
        if (*((_DWORD*)a2 - 47) < *((_DWORD*)v11 + 17)) {
          v25 = v11 + 64;
        LABEL_43:
          v26 = a2 - 192;
        LABEL_47:
          GameRoutine_a69620(v25, v26);
        }
      }
      v27 = *((_DWORD*)v11 + 1);
      v28 = *((_DWORD*)v11 + 17);
      if (v27 >= *((_DWORD*)v11 - 15)) {
        if (v28 < v27) {
          GameRoutine_a69620(v11, v11 + 64);
          if (*((_DWORD*)v11 + 1) < *((_DWORD*)v11 - 15)) {
            v30 = v11 - 64;
            v29 = v11;
            goto LABEL_56;
          }
        }
      }
      else {
        if (v28 < v27) {
          v29 = v11 + 64;
          v30 = v11 - 64;
          goto LABEL_56;
        }
        GameRoutine_a69620(v11 - 64, v11);
        if (*((_DWORD*)v11 + 17) < *((_DWORD*)v11 + 1)) {
          v29 = v11 + 64;
          v30 = v11;
        LABEL_56:
          GameRoutine_a69620(v30, v29);
        }
      }
      v17 = v7;
      v18 = v11;
      goto LABEL_58;
    }
    v16 = *((_DWORD*)v7 + 1);
    if (v16 >= *((_DWORD*)v11 + 1)) {
      if (v12 < v16) {
        GameRoutine_a69620(v7, v170);
        if (*((_DWORD*)v7 + 1) < *((_DWORD*)v11 + 1)) {
          v17 = &v7[64 * (v9 >> 1)];
          v18 = v7;
          goto LABEL_58;
        }
      }
    }
    else {
      v17 = &v7[64 * (v9 >> 1)];
      if (v12 < v16) {
        goto LABEL_22;
      }
      GameRoutine_a69620(v17, v7);
      if (*((_DWORD*)a2 - 15) < *((_DWORD*)v7 + 1)) {
        v17 = v7;
      LABEL_22:
        v18 = a2 - 64;
      LABEL_58:
        GameRoutine_a69620(v17, v18);
      }
    }
    --a3;
    if ((a4 & 1) != 0 || *((_DWORD*)v7 - 15) < *((_DWORD*)v7 + 1)) {
      v31 = *((char**)v7 + 6);
      v174 = *(_QWORD*)v7;
      v32 = HIDWORD(v174);
      if (v31 != nullptr) {
        if (v31 == v7 + 16) {
          v176 = v175;
          (*(void (**)(char*, _BYTE*))(*(_QWORD*)v31 + 24LL))(v31, v175);
          LODWORD(v32) = HIDWORD(v174);
        }
        else {
          v176 = v31;
          *((_QWORD*)v7 + 6) = 0;
        }
      }
      else {
        v176 = nullptr;
      }
      v33 = 0;
      do {
        v34 = &v7[v33];
        v33 += 64;
      } while (*((_DWORD*)v34 + 17) < (int)v32);
      v35 = &v7[v33];
      v36 = a2;
      if (v33 == 64) {
        v39 = a2;
        while (v35 < v39) {
          v40 = *((_DWORD*)v39 - 15);
          v38 = v39 - 64;
          v39 -= 64;
          if (v40 < (int)v32) {
            goto LABEL_76;
          }
        }
        v38 = v39;
      }
      else {
        do {
          v37 = *((_DWORD*)v36 - 15);
          v38 = v36 - 64;
          v36 -= 64;
        } while (v37 >= (int)v32);
      }
    LABEL_76:
      v8 = v35;
      if (v35 < v38) {
        v41 = (unsigned __int64)v38;
        do {
          GameRoutine_a69620(v8, v41);
          do {
            v42 = *((_DWORD*)v8 + 17);
            v8 += 64;
          } while (v42 < SHIDWORD(v174));
          do {
            v43 = *(_DWORD*)(v41 - 60);
            v41 -= 64LL;
          } while (v43 >= SHIDWORD(v174));
        } while ((unsigned __int64)v8 < v41);
      }
      if (v7 != v8 - 64) {
        v44 = *((_QWORD*)v8 - 8);
        v45 = *((char**)v7 + 6);
        *((_QWORD*)v7 + 6) = 0;
        *(_QWORD*)v7 = v44;
        if (v45 == v7 + 16) {
          v46 = 32;
        LABEL_87:
          (*(void (**)(void))(*(_QWORD*)v45 + v46))();
        }
        else if (v45 != nullptr) {
          v46 = 40;
          goto LABEL_87;
        }
        v47 = *((char**)v8 - 2);
        if (v47 != nullptr) {
          if (v47 == v8 - 48) {
            *((_QWORD*)v7 + 6) = v7 + 16;
            (*(void (**)(_QWORD, char*))(**((_QWORD**)v8 - 2) + 24LL))(
                *((_QWORD*)v8 - 2), v7 + 16);
          }
          else {
            *((_QWORD*)v7 + 6) = v47;
            *((_QWORD*)v8 - 2) = 0;
          }
        }
        else {
          *((_QWORD*)v7 + 6) = 0;
        }
      }
      v48 = v174;
      v49 = *((char**)v8 - 2);
      *((_QWORD*)v8 - 2) = 0;
      *((_QWORD*)v8 - 8) = v48;
      if (v49 == v8 - 48) {
        v50 = 32;
      }
      else {
        if (v49 == nullptr) {
          goto LABEL_98;
        }
        v50 = 40;
      }
      (*(void (**)(void))(*(_QWORD*)v49 + v50))();
    LABEL_98:
      if (v176 != nullptr) {
        if (v176 != v175) {
          *((_QWORD*)v8 - 2) = v176;
          goto LABEL_108;
        }
        *((_QWORD*)v8 - 2) = v8 - 48;
        (*(void (**)(char*, _DWORD*))(*(_QWORD*)v176 + 24LL))(v176,
                                                              (_DWORD*)v8 - 12);
      }
      else {
        *((_QWORD*)v8 - 2) = 0;
      }
      if (v176 == v175) {
        v51 = 32;
      }
      else {
        if (v176 == nullptr) {
          goto LABEL_108;
        }
        v51 = 40;
      }
      (*(void (**)(void))(*(_QWORD*)v176 + v51))();
    LABEL_108:
      if (v35 < v38) {
        goto LABEL_111;
      }
      v52 = GameRoutine_a691e0(v7, v8 - 64);
      result = GameRoutine_a691e0(v8, a2);
      if ((result & 1) != 0) {
        a2 = v8 - 64;
        if ((v52 & 1) != 0) {
          return result;
        }
        goto LABEL_2;
      }
      if ((v52 & 1) == 0) {
      LABEL_111:
        result = GameHr_a67be0(v7, v8 - 64, a3, a4 & 1);
        a4 = 0;
      }
    }
    else {
      v53 = *((char**)v7 + 6);
      v174 = *(_QWORD*)v7;
      v54 = HIDWORD(v174);
      if (v53 != nullptr) {
        if (v53 == v7 + 16) {
          v176 = v175;
          (*(void (**)(char*, _BYTE*))(*(_QWORD*)v53 + 24LL))(v53, v175);
          LODWORD(v54) = HIDWORD(v174);
        }
        else {
          v176 = v53;
          *((_QWORD*)v7 + 6) = 0;
        }
      }
      else {
        v176 = nullptr;
      }
      if ((int)v54 >= *((_DWORD*)a2 - 15)) {
        v57 = v7 + 64;
        do {
          v8 = v57;
          if (v57 >= a2) {
            break;
          }
          v58 = *((_DWORD*)v57 + 1);
          v57 += 64;
        } while ((int)v54 >= v58);
      }
      else {
        v55 = v7;
        do {
          v56 = *((_DWORD*)v55 + 17);
          v8 = v55 + 64;
          v55 += 64;
        } while ((int)v54 >= v56);
      }
      v59 = a2;
      if (v8 < a2) {
        v60 = a2;
        do {
          v61 = *((_DWORD*)v60 - 15);
          v59 = v60 - 64;
          v60 -= 64;
        } while ((int)v54 < v61);
      }
      while (v8 < v59) {
        GameRoutine_a69620(v8, v59);
        do {
          v62 = *((_DWORD*)v8 + 17);
          v8 += 64;
        } while (SHIDWORD(v174) >= v62);
        do {
          v63 = *((_DWORD*)v59 - 15);
          v59 -= 64;
        } while (SHIDWORD(v174) < v63);
      }
      if (v7 != v8 - 64) {
        v64 = *((_QWORD*)v8 - 8);
        v65 = *((char**)v7 + 6);
        *((_QWORD*)v7 + 6) = 0;
        *(_QWORD*)v7 = v64;
        if (v65 == v7 + 16) {
          v66 = 32;
        LABEL_137:
          (*(void (**)(void))(*(_QWORD*)v65 + v66))();
        }
        else if (v65 != nullptr) {
          v66 = 40;
          goto LABEL_137;
        }
        v67 = *((char**)v8 - 2);
        if (v67 != nullptr) {
          if (v67 == v8 - 48) {
            *((_QWORD*)v7 + 6) = v7 + 16;
            (*(void (**)(_QWORD, char*))(**((_QWORD**)v8 - 2) + 24LL))(
                *((_QWORD*)v8 - 2), v7 + 16);
          }
          else {
            *((_QWORD*)v7 + 6) = v67;
            *((_QWORD*)v8 - 2) = 0;
          }
        }
        else {
          *((_QWORD*)v7 + 6) = 0;
        }
      }
      v68 = v174;
      result = *((_QWORD*)v8 - 2);
      *((_QWORD*)v8 - 2) = 0;
      *((_QWORD*)v8 - 8) = v68;
      if ((char*)result == v8 - 48) {
        v69 = 32;
      }
      else {
        if (result == 0) {
          goto LABEL_148;
        }
        v69 = 40;
      }
      result = (*(__int64 (**)(void))(*(_QWORD*)result + v69))();
    LABEL_148:
      if (v176 == nullptr) {
        *((_QWORD*)v8 - 2) = 0;
        goto LABEL_153;
      }
      if (v176 == v175) {
        *((_QWORD*)v8 - 2) = v8 - 48;
        (*(void (**)(char*, _DWORD*))(*(_QWORD*)v176 + 24LL))(v176,
                                                              (_DWORD*)v8 - 12);
      LABEL_153:
        result = (__int64)v176;
        if (v176 == v175) {
          v70 = 32;
        }
        else {
          if (v176 == nullptr) {
            goto LABEL_158;
          }
          v70 = 40;
        }
        result = (*(__int64 (**)(void))(*(_QWORD*)v176 + v70))();
      LABEL_158:
        a4 = 0;
      }
      else {
        *((_QWORD*)v8 - 2) = v176;
        a4 = 0;
      }
    }
  }
  v73 = *((_DWORD*)v8 + 17);
  v74 = *((_DWORD*)a2 - 15);
  if (v73 < *((_DWORD*)v8 + 1)) {
    if (v74 < v73) {
      goto LABEL_169;
    }
    result = GameRoutine_a69620(v8, v8 + 64);
    if (*((_DWORD*)a2 - 15) >= *((_DWORD*)v8 + 17)) {
      return result;
    }
    v75 = v8 + 64;
    return GameRoutine_a69620(v75, v170);
  }
  if (v74 < v73) {
    v72 = a2 - 64;
    v71 = v8 + 64;
    goto LABEL_357;
  }
  return result;
}

__int64 GameHr_a69c80(__int64 result, __int64 a2, unsigned __int64 a3,
                      __int64 a4, signed __int64 a5)
{
  __int64 v6;
  int v7;
  int v8;
  bool v9;
  _BOOL4 v10;
  _BOOL4 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  int v24;
  _BOOL4 v25;
  _BOOL4 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  _BYTE* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64* v44;
  __int64 v45;
  __int64 v46;
  int v47;
  int v48;
  __int64* v49;
  __int64* v50;
  _BOOL4 v51;
  _BOOL4 v52;
  __int64 v53;
  int v54;
  __int64 v55;
  __int64 v56;
  int v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  int v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  int v66;
  __int64 v67;
  __int64 v68;
  __int64* v69;
  __int64 v70;
  __int64* v71;
  __int64 v72;
  _BYTE v73[12];
  _BYTE v74[32];
  _BYTE* v75;

  if (a3 < 2) {
    return result;
  }
  v6 = result;
  if (a3 == 2) {
    v7 = *(_DWORD*)(a2 - 56);
    v8 = *(_DWORD*)(result + 8);
    v9 = v7 == v8;
    v10 = v7 < v8;
    if (v9) {
      v11 = *(_DWORD*)(a2 - 60) < *(_DWORD*)(result + 4);
    }
    else {
      v11 = v10;
    }
    if (v11) {
      return GameRoutine_a6b310(result, a2 - 64);
    }
    return result;
  }
  v12 = a3;
  if ((__int64)a3 > 0) {
    v13 = a3 >> 1;
    v15 = a3 >> 1 << 6;
    v16 = a3 - (a3 >> 1);
    v17 = v15 + result;
    if ((__int64)a3 > a5) {
      GameHr_a69c80(result, v17, a3 >> 1, a4, a5);
      GameHr_a69c80(v15 + v6, a2, v16, a4, a5);
      return GameRoutine_a6aa00(v6, v15 + v6, a2, v13, v16, a4, a5);
    }
    GameRoutine_a6a320(result, v17, a3 >> 1, a4);
    v42 = a4 + v15;
    result = GameRoutine_a6a320(v15 + v6, a2, v12 - (v12 >> 1), a4 + v15);
    v43 = a4 + (v12 << 6);
    v44 = (__int64*)(v6 + 48);
    v45 = a4 + v15;
    v46 = a4;
    while (v45 != v43) {
      v47 = *(_DWORD*)(v45 + 8);
      v48 = *(_DWORD*)(v46 + 8);
      v49 = v44 - 6;
      v50 = v44 - 4;
      v51 = *(_DWORD*)(v45 + 4) < *(_DWORD*)(v46 + 4);
      v9 = v47 == v48;
      v52 = v47 < v48;
      if (!v9) {
        v51 = v52;
      }
      if (!v51) {
        v56 = *(_QWORD*)v46;
        v57 = *(_DWORD*)(v46 + 8);
        result = *v44;
        *v44 = 0;
        *((_DWORD*)v44 - 10) = v57;
        *v49 = v56;
        if (v50 == (__int64*)result) {
          v58 = 32;
        }
        else {
          if (result == 0) {
          LABEL_77:
            v60 = *(_QWORD*)(v46 + 48);
            if (v60 != 0) {
              if (v60 == v46 + 16) {
                *v44 = (__int64)v50;
                result = (*(__int64 (**)(_QWORD, __int64*))(
                    **(_QWORD**)(v46 + 48) + 24LL))(*(_QWORD*)(v46 + 48),
                                                    v44 - 4);
              }
              else {
                *v44 = v60;
                *(_QWORD*)(v46 + 48) = 0;
              }
            }
            else {
              *v44 = 0;
            }
            v46 += 64;
            goto LABEL_58;
          }
          v58 = 40;
        }
        result = (*(__int64 (**)(void))(*(_QWORD*)result + v58))();
        goto LABEL_77;
      }
      v53 = *(_QWORD*)v45;
      v54 = *(_DWORD*)(v45 + 8);
      result = *v44;
      *v44 = 0;
      *((_DWORD*)v44 - 10) = v54;
      *v49 = v53;
      if (v50 == (__int64*)result) {
        v55 = 32;
      }
      else {
        if (result == 0) {
          goto LABEL_71;
        }
        v55 = 40;
      }
      result = (*(__int64 (**)(void))(*(_QWORD*)result + v55))();
    LABEL_71:
      v59 = *(_QWORD*)(v45 + 48);
      if (v59 != 0) {
        if (v59 == v45 + 16) {
          *v44 = (__int64)v50;
          result = (*(__int64 (**)(_QWORD, __int64*))(
              **(_QWORD**)(v45 + 48) + 24LL))(*(_QWORD*)(v45 + 48), v44 - 4);
        }
        else {
          *v44 = v59;
          *(_QWORD*)(v45 + 48) = 0;
        }
        v45 += 64;
      }
      else {
        *v44 = 0;
        v45 += 64;
      }
    LABEL_58:
      v44 += 8;
      if (v46 == v42) {
        while (1) {
          if (v45 == v43) {
            goto LABEL_107;
          }
          v65 = *(_QWORD*)v45;
          v66 = *(_DWORD*)(v45 + 8);
          result = *v44;
          *v44 = 0;
          *((_DWORD*)v44 - 10) = v66;
          *(v44 - 6) = v65;
          if (v44 - 4 == (__int64*)result) {
            v67 = 32;
          }
          else {
            if (result == 0) {
              goto LABEL_103;
            }
            v67 = 40;
          }
          result = (*(__int64 (**)(void))(*(_QWORD*)result + v67))();
        LABEL_103:
          v68 = *(_QWORD*)(v45 + 48);
          if (v68 != 0) {
            if (v45 + 16 == v68) {
              *v44 = (__int64)(v44 - 4);
              result = (*(__int64 (**)(_QWORD, __int64*))(
                  **(_QWORD**)(v45 + 48) + 24LL))(*(_QWORD*)(v45 + 48),
                                                  v44 - 4);
            }
            else {
              *v44 = v68;
              *(_QWORD*)(v45 + 48) = 0;
            }
          }
          else {
            *v44 = 0;
          }
          v45 += 64;
          v44 += 8;
        }
      }
    }
    while (1) {
      if (v46 == v42) {
      LABEL_107:
        if (a4 == 0) {
          return result;
        }
        v69 = (__int64*)(a4 + 48);
        while (2) {
          v71 = v69 - 4;
          v72 = *v69;
          v69 += 8;
          result = v72;
          if (v71 != (__int64*)v72) {
            if (result != 0) {
              v70 = 40;
            LABEL_110:
              result = (*(__int64 (**)(void))(*(_QWORD*)result + v70))();
            }
            if (--v12 == 0) {
              return result;
            }
            continue;
          }
          break;
        }
        v70 = 32;
        goto LABEL_110;
      }
      v61 = *(_QWORD*)v46;
      v62 = *(_DWORD*)(v46 + 8);
      result = *v44;
      *v44 = 0;
      *((_DWORD*)v44 - 10) = v62;
      *(v44 - 6) = v61;
      if (v44 - 4 == (__int64*)result) {
        v63 = 32;
      }
      else {
        if (result == 0) {
          goto LABEL_91;
        }
        v63 = 40;
      }
      result = (*(__int64 (**)(void))(*(_QWORD*)result + v63))();
    LABEL_91:
      v64 = *(_QWORD*)(v46 + 48);
      if (v64 != 0) {
        if (v46 + 16 == v64) {
          *v44 = (__int64)(v44 - 4);
          result = (*(__int64 (**)(_QWORD, __int64*))(
              **(_QWORD**)(v46 + 48) + 24LL))(*(_QWORD*)(v46 + 48), v44 - 4);
        }
        else {
          *v44 = v64;
          *(_QWORD*)(v46 + 48) = 0;
        }
      }
      else {
        *v44 = 0;
      }
      v46 += 64;
      v44 += 8;
    }
  }
  if (result == a2) {
    return result;
  }
  v19 = result + 64;
  if (result + 64 == a2) {
    return result;
  }
  v20 = 0;
  v21 = result;
  while (2) {
    v22 = v19;
    v23 = *(_DWORD*)(v21 + 72);
    v24 = *(_DWORD*)(v21 + 8);
    v25 = *(_DWORD*)(v21 + 68) < *(_DWORD*)(v21 + 4);
    v9 = v23 == v24;
    v26 = v23 < v24;
    if (!v9) {
      v25 = v26;
    }
    if (!v25) {
      goto LABEL_16;
    }
    v27 = *(_QWORD*)(v21 + 112);
    *(_QWORD*)v73 = *(_QWORD*)v22;
    *(_DWORD*)&v73[8] = *(_DWORD*)(v22 + 8);
    if (v27 != 0) {
      if (v27 == v21 + 80) {
        v75 = v74;
        (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v27 + 24LL))(v27, v74);
      }
      else {
        v75 = *(_BYTE**)(v21 + 112);
        *(_QWORD*)(v21 + 112) = 0;
      }
    }
    else {
      v75 = nullptr;
    }
    v28 = v20;
    while (1) {
      v29 = v6 + v28;
      v30 = v28;
      v31 = *(_QWORD*)(v6 + v28);
      v32 = *(_QWORD**)(v29 + 112);
      *(_QWORD*)(v29 + 112) = 0;
      *(_QWORD*)(v29 + 64) = v31;
      *(_DWORD*)(v29 + 72) = *(_DWORD*)(v29 + 8);
      if ((_QWORD*)(v29 + 80) == v32) {
        v33 = 32;
      }
      else {
        if (v32 == nullptr) {
          goto LABEL_31;
        }
        v33 = 40;
      }
      (*(void (**)(void))(*v32 + v33))();
    LABEL_31:
      v34 = *(_QWORD*)(v6 + v30 + 48);
      if (v34 != 0) {
        break;
      }
      *(_QWORD*)(v29 + 112) = 0;
      if (v30 == 0) {
        goto LABEL_40;
      }
    LABEL_38:
      v28 = v30 - 64;
      if (*(__int64*)&v73[4] >= *(_QWORD*)(v6 + v30 - 60)) {
        v35 = v6 + v28;
        v36 = v35 + 80;
        v37 = v35 + 64;
        goto LABEL_41;
      }
    }
    if (v29 + 16 != v34) {
      *(_QWORD*)(v29 + 112) = v34;
      *(_QWORD*)(v6 + v30 + 48) = 0;
      if (v30 == 0) {
        goto LABEL_40;
      }
      goto LABEL_38;
    }
    *(_QWORD*)(v29 + 112) = v29 + 80;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v34 + 24LL))(v34, v29 + 80);
    if (v30 != 0) {
      goto LABEL_38;
    }
  LABEL_40:
    v37 = v6;
    v36 = v6 + 16;
  LABEL_41:
    v38 = v6 + v30;
    *(_QWORD*)v37 = *(_QWORD*)v73;
    *(_DWORD*)(v37 + 8) = *(_DWORD*)&v73[8];
    result = *(_QWORD*)(v38 + 48);
    *(_QWORD*)(v38 + 48) = 0;
    if (result == v36) {
      v39 = 32;
    LABEL_45:
      result = (*(__int64 (**)(void))(*(_QWORD*)result + v39))();
    }
    else if (result != 0) {
      v39 = 40;
      goto LABEL_45;
    }
    if (v75 != nullptr) {
      if (v75 == v74) {
        v40 = v75;
        *(_QWORD*)(v38 + 48) = v36;
        (*(void (**)(_BYTE*, __int64))(*(_QWORD*)v40 + 24LL))(v40, v36);
        goto LABEL_50;
      }
      *(_QWORD*)(v38 + 48) = v75;
    }
    else {
      *(_QWORD*)(v38 + 48) = 0;
    LABEL_50:
      result = (__int64)v75;
      if (v75 == v74) {
        v41 = 32;
      }
      else {
        if (v75 == nullptr) {
          goto LABEL_16;
        }
        v41 = 40;
      }
      result = (*(__int64 (**)(void))(*(_QWORD*)v75 + v41))();
    }
  LABEL_16:
    v19 = v22 + 64;
    v20 += 64;
    v21 = v22;
    if (v22 + 64 != a2) {
      continue;
    }
    return result;
  }
}

__int64 GameHr_ae1e30(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  long double v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  _QWORD* v11;
  long double v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;

  v2 = GameRoutine_ae1bc0();
  v3 = (_QWORD*)GameData_212bf68;
  if (v2 != 0) {
    v4 = GameData_21caab0;
    v19 = v2;
    v18 = GameRoutine_7a86e0(v2);
    v5 = (_QWORD*)GameRoutine_651b90(*v3, 16, 16, 0);
    *v5 = "OFF";
    v5[1] = "ON";
    v15 = v5;
    v16 = v5 + 2;
    v17 = v5 + 2;
    GameRoutine_827070(v4 + 40, 10, &v18, &v15, 0, 1);
    if (v15 != nullptr) {
      v7 = *v3;
      v16 = v15;
      v8 = 128;
      if (*(_QWORD*)(v7 + 200) == 0) {
        v8 = 56;
      }
      GameRoutine_1a0a4e0(v7 + v8, v6);
    }
  }
  result = GameRoutine_ae1d00(a1);
  if (result != 0) {
    v10 = GameData_21caab0;
    v19 = result;
    v18 = GameRoutine_7a86e0(result);
    v11 = (_QWORD*)GameRoutine_651b90(*v3, 16, 16, 0);
    *v11 = "OFF";
    v11[1] = "ON";
    v15 = v11;
    v16 = v11 + 2;
    v17 = v11 + 2;
    result = GameRoutine_827070(v10 + 40, 9, &v18, &v15, 0, 1);
    if (v15 != nullptr) {
      v13 = *v3;
      v16 = v15;
      v14 = 128;
      if (*(_QWORD*)(v13 + 200) == 0) {
        v14 = 56;
      }
      return GameRoutine_1a0a4e0(v13 + v14, v12);
    }
  }
  return result;
}

bool GameHr_ae3d80(__int64 a1)
{
  __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  _QWORD* v9;
  long double v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v14;
  _QWORD* v15;
  _QWORD* v16;
  _QWORD v17[2];

  v1 = *(_QWORD*)(a1 + 24);
  v2 = *(unsigned __int8*)(v1 + 96);
  if ((v2 & 1) != 0) {
    v3 = *(_QWORD*)(v1 + 104);
  }
  else {
    v3 = v2 >> 1;
  }
  if (v3 != 0) {
    v4 = GameData_21caab0;
    v5 = *(_QWORD*)(v1 + 112);
    v6 = v1 + 97;
    v7 = (v2 & 1) != 0 ? v5 : v6;
    v17[1] = v7;
    v17[0] = GameRoutine_7a86e0(v7);
    v8 = (__int64*)GameData_212bf68;
    v9 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 16, 16, 0);
    v14 = v9;
    *v9 = "OFF";
    v9[1] = "ON";
    v15 = v9 + 2;
    v16 = v9 + 2;
    GameRoutine_827070(v4 + 40, 9, v17, &v14, 0, 1);
    if (v14 != nullptr) {
      v11 = *v8;
      v15 = v14;
      v12 = 128;
      if (*(_QWORD*)(v11 + 200) == 0) {
        v12 = 56;
      }
      GameRoutine_1a0a4e0(v11 + v12, v10);
    }
  }
  return v3 != 0;
}

__int64 GameHr_b94170(__int64 a1, _QWORD* a2, __int64 a3)
{
  _QWORD* v3;
  int* v7;
  float v8;
  signed int v9;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 result;
  __int64* v18;
  __int64 v19;
  int v20;
  signed int v21;
  __int64 v22;
  char v23;
  int v24;

  v3 = *(_QWORD**)(a1 + 8);
  v7 = (int*)(*(_QWORD*)(*v3 + 16672LL) + 24LL);
  if (*(_BYTE*)(*v3 + 16700LL) == 0) {
    v7 = (int*)(*v3 + 13304LL);
  }
  v8 = (float)v7[1];
  v9 = ((int)(float)(v8 * 0.7) + 1) & 0xFFFFFFFE;
  v10 = (int)(float)((float)((float)*v7 / v8) * (float)v9);
  GameRoutine_b91200(&v19, a3, **(_QWORD**)(a1 + 16));
  GameRoutine_1a0b950(*a2, &v19, 144);
  v11 = **(_QWORD**)(a1 + 16);
  v12 = *(_DWORD*)(v3[9] + 4LL);
  v22 = 0x100000001LL;
  v23 = 1;
  v24 = 0;
  v20 = v10;
  v21 = v9;
  v19 = 0xD00000000LL;
  v13 = GameRoutine_b50c60(a3, "EftOffscreen", &v19);
  v14 = 8;
  v15 = v13;
  if (v12 == 1) {
    v14 = 24;
  }
  v16 = GameRoutine_b4a510(a3, *(_QWORD*)(v11 + v14));
  v22 = 0x100000001LL;
  v23 = 1;
  v24 = 0;
  v20 = v10;
  v21 = v9;
  v19 = 0x1500000000LL;
  result = GameRoutine_b5a720(a3, "OffscreenDepth", &v19);
  v18 = (__int64*)a2[1];
  *v18 = v15;
  v18[1] = 0;
  v18[2] = v16;
  v18[3] = result;
  v18[4] = 0;
  return result;
}

__int64 GameHr_bb5480(__int64 a1, __int64* a2, _QWORD* a3)
{
  __int64 v3;
  __int64 v4;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64* v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  char v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD v24[5];
  _QWORD v25[2];
  int v26;
  char v27;

  v3 = *(_QWORD*)(a1 + 8);
  v4 = a2[3];
  v25[0] = 0;
  v25[1] = 0;
  memset(&v24[2], 0, 24);
  v6 = *(_DWORD*)(v4 + 104);
  v24[0] = *(_QWORD*)v3;
  if (v6 >= 1) {
    v7 = *(_QWORD*)(v3 + 56);
    v8 = v6 & 7;
    if ((unsigned int)v6 < 8) {
      v9 = 0;
      if (v8 == 0) {
        goto LABEL_10;
      }
      goto LABEL_8;
    }
    v10 = (_QWORD*)(v7 + 64);
    v11 = 0;
    v12 = -(__int64)(v6 & 0x7FFFFFF8);
    v13 = v25;
    do {
      v11 -= 8;
      *(v13 - 3) = *(v10 - 8);
      *(v13 - 2) = *(v10 - 6);
      *(v13 - 1) = *(v10 - 4);
      *v13 = *(v10 - 2);
      v13[1] = *v10;
      v13[2] = v10[2];
      v13[3] = v10[4];
      v14 = v10[6];
      v10 += 16;
      v13[4] = v14;
      v13 += 8;
    } while (v12 != v11);
    v9 = -v11;
    if (v8 != 0) {
    LABEL_8:
      v15 = (__int64*)(v7 + 16 * v9);
      v16 = &v24[v9 + 2];
      do {
        v17 = *v15;
        v15 += 2;
        --v8;
        *v16++ = v17;
      } while (v8 != 0);
    }
  }
LABEL_10:
  v18 = *(_QWORD*)(v4 + 96);
  v19 = *(_BYTE*)(v4 + 124);
  v20 = *(_QWORD*)(v3 + 152);
  v24[1] = v18;
  LODWORD(v18) = *(_DWORD*)(v3 + 140);
  v22 = *a2;
  v21 = a2[1];
  v27 = v19;
  v26 = v18;
  return GameRoutine_b538b0(v20, v22, v21, a3, (__int64)v24);
}

__int64 GameHr_bd8160(__int64 result, __int64 a2, unsigned __int64 a3,
                      _BYTE* a4)
{
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  float v20;
  float v21;
  unsigned int v22;
  long double v23;
  float v24;
  float v25;
  unsigned int v26;

  LOBYTE(v7) = *a4;
  LOBYTE(v4) = a4[1];
  LOBYTE(v5) = a4[2];
  LOBYTE(v6) = a4[3];
  v8 = *(_QWORD*)(*(_QWORD*)(result + 240) + 24LL);
  v9 = *(__int64**)(v8 + 312);
  v10 = *(__int64**)(v8 + 320);
  if (v9 != v10) {
    while (1) {
      v13 = *v9;
      v14 = *(unsigned __int8*)(*v9 + 376);
      v15 = *(_QWORD*)(*v9 + 384);
      if ((v14 & 1) == 0) {
        v15 = v14 >> 1;
      }
      if (v15 >= a3) {
        v16 = v13 + 377;
        v17 = *(_QWORD*)(v13 + 392);
        v18 = (v14 & 1) != 0 ? v17 : v16;
        result = GameRoutine_1a09cf0(v18, a2);
        if ((_DWORD)result == 0) {
          break;
        }
      }
      v9 += 2;
      if (v9 == v10) {
        return result;
      }
    }
  }
  if (v9 != v10) {
    v19 = *v9;
    if (*v9 != 0) {
      v20 = (float)v6;
      v21 = *(float*)GameData_212ea30;
      *(float*)&v26 = v20 / 255.0;
      v25 = GameRoutine_1a0a550((float)v7 / 255.0, *(float*)GameData_212ea30);
      v24 = GameRoutine_1a0a550((float)v4 / 255.0, v21);
      *(float*)&v22 = GameRoutine_1a0a550((float)v5 / 255.0, v21);
      *(_QWORD*)&v23 = __PAIR64__(LODWORD(v24), LODWORD(v25));
      *((_QWORD*)&v23 + 1) = __PAIR64__(v26, v22);
      return (*(__int64 (**)(__int64, const char*, __int64, long double))(
          *(_QWORD*)v19 + 64LL))(v19, "ChangeColorR0", 13, v23);
    }
  }
  return result;
}

__int64 GameHr_bd8300(__int64 result, __int64 a2, unsigned __int64 a3,
                      _BYTE* a4)
{
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  float v20;
  float v21;
  unsigned int v22;
  long double v23;
  float v24;
  float v25;
  unsigned int v26;

  LOBYTE(v7) = *a4;
  LOBYTE(v4) = a4[1];
  LOBYTE(v5) = a4[2];
  LOBYTE(v6) = a4[3];
  v8 = *(_QWORD*)(*(_QWORD*)(result + 240) + 24LL);
  v9 = *(__int64**)(v8 + 312);
  v10 = *(__int64**)(v8 + 320);
  if (v9 != v10) {
    while (1) {
      v13 = *v9;
      v14 = *(unsigned __int8*)(*v9 + 376);
      v15 = *(_QWORD*)(*v9 + 384);
      if ((v14 & 1) == 0) {
        v15 = v14 >> 1;
      }
      if (v15 >= a3) {
        v16 = v13 + 377;
        v17 = *(_QWORD*)(v13 + 392);
        v18 = (v14 & 1) != 0 ? v17 : v16;
        result = GameRoutine_1a09cf0(v18, a2);
        if ((_DWORD)result == 0) {
          break;
        }
      }
      v9 += 2;
      if (v9 == v10) {
        return result;
      }
    }
  }
  if (v9 != v10) {
    v19 = *v9;
    if (*v9 != 0) {
      v20 = (float)v6;
      v21 = *(float*)GameData_212ea30;
      *(float*)&v26 = v20 / 255.0;
      v25 = GameRoutine_1a0a550((float)v7 / 255.0, *(float*)GameData_212ea30);
      v24 = GameRoutine_1a0a550((float)v4 / 255.0, v21);
      *(float*)&v22 = GameRoutine_1a0a550((float)v5 / 255.0, v21);
      *(_QWORD*)&v23 = __PAIR64__(LODWORD(v24), LODWORD(v25));
      *((_QWORD*)&v23 + 1) = __PAIR64__(v26, v22);
      return (*(__int64 (**)(__int64, const char*, __int64, long double))(
          *(_QWORD*)v19 + 64LL))(v19, "ChangeColorG0", 13, v23);
    }
  }
  return result;
}

__int64 GameHr_bd84a0(__int64 result, __int64 a2, unsigned __int64 a3,
                      _BYTE* a4)
{
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  float v20;
  float v21;
  unsigned int v22;
  long double v23;
  float v24;
  float v25;
  unsigned int v26;

  LOBYTE(v7) = *a4;
  LOBYTE(v4) = a4[1];
  LOBYTE(v5) = a4[2];
  LOBYTE(v6) = a4[3];
  v8 = *(_QWORD*)(*(_QWORD*)(result + 240) + 24LL);
  v9 = *(__int64**)(v8 + 312);
  v10 = *(__int64**)(v8 + 320);
  if (v9 != v10) {
    while (1) {
      v13 = *v9;
      v14 = *(unsigned __int8*)(*v9 + 376);
      v15 = *(_QWORD*)(*v9 + 384);
      if ((v14 & 1) == 0) {
        v15 = v14 >> 1;
      }
      if (v15 >= a3) {
        v16 = v13 + 377;
        v17 = *(_QWORD*)(v13 + 392);
        v18 = (v14 & 1) != 0 ? v17 : v16;
        result = GameRoutine_1a09cf0(v18, a2);
        if ((_DWORD)result == 0) {
          break;
        }
      }
      v9 += 2;
      if (v9 == v10) {
        return result;
      }
    }
  }
  if (v9 != v10) {
    v19 = *v9;
    if (*v9 != 0) {
      v20 = (float)v6;
      v21 = *(float*)GameData_212ea30;
      *(float*)&v26 = v20 / 255.0;
      v25 = GameRoutine_1a0a550((float)v7 / 255.0, *(float*)GameData_212ea30);
      v24 = GameRoutine_1a0a550((float)v4 / 255.0, v21);
      *(float*)&v22 = GameRoutine_1a0a550((float)v5 / 255.0, v21);
      *(_QWORD*)&v23 = __PAIR64__(LODWORD(v24), LODWORD(v25));
      *((_QWORD*)&v23 + 1) = __PAIR64__(v26, v22);
      return (*(__int64 (**)(__int64, const char*, __int64, long double))(
          *(_QWORD*)v19 + 64LL))(v19, "ChangeColorB0", 13, v23);
    }
  }
  return result;
}

__int64 GameHr_bd8640(__int64 result, __int64 a2, unsigned __int64 a3,
                      _BYTE* a4)
{
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  float v20;
  float v21;
  unsigned int v22;
  long double v23;
  float v24;
  float v25;
  unsigned int v26;

  LOBYTE(v7) = *a4;
  LOBYTE(v4) = a4[1];
  LOBYTE(v5) = a4[2];
  LOBYTE(v6) = a4[3];
  v8 = *(_QWORD*)(*(_QWORD*)(result + 240) + 24LL);
  v9 = *(__int64**)(v8 + 312);
  v10 = *(__int64**)(v8 + 320);
  if (v9 != v10) {
    while (1) {
      v13 = *v9;
      v14 = *(unsigned __int8*)(*v9 + 376);
      v15 = *(_QWORD*)(*v9 + 384);
      if ((v14 & 1) == 0) {
        v15 = v14 >> 1;
      }
      if (v15 >= a3) {
        v16 = v13 + 377;
        v17 = *(_QWORD*)(v13 + 392);
        v18 = (v14 & 1) != 0 ? v17 : v16;
        result = GameRoutine_1a09cf0(v18, a2);
        if ((_DWORD)result == 0) {
          break;
        }
      }
      v9 += 2;
      if (v9 == v10) {
        return result;
      }
    }
  }
  if (v9 != v10) {
    v19 = *v9;
    if (*v9 != 0) {
      v20 = (float)v6;
      v21 = *(float*)GameData_212ea30;
      *(float*)&v26 = v20 / 255.0;
      v25 = GameRoutine_1a0a550((float)v7 / 255.0, *(float*)GameData_212ea30);
      v24 = GameRoutine_1a0a550((float)v4 / 255.0, v21);
      *(float*)&v22 = GameRoutine_1a0a550((float)v5 / 255.0, v21);
      *(_QWORD*)&v23 = __PAIR64__(LODWORD(v24), LODWORD(v25));
      *((_QWORD*)&v23 + 1) = __PAIR64__(v26, v22);
      return (*(__int64 (**)(__int64, const char*, __int64, long double))(
          *(_QWORD*)v19 + 64LL))(v19, "BaseColorMultiplier0", 20, v23);
    }
  }
  return result;
}

__int64 GameHr_bd9120(__int64 result, __int64 a2, unsigned __int64 a3,
                      _BYTE* a4)
{
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  float v20;
  float v21;
  unsigned int v22;
  long double v23;
  float v24;
  float v25;
  unsigned int v26;

  LOBYTE(v7) = *a4;
  LOBYTE(v4) = a4[1];
  LOBYTE(v5) = a4[2];
  LOBYTE(v6) = a4[3];
  v8 = *(_QWORD*)(*(_QWORD*)(result + 240) + 24LL);
  v9 = *(__int64**)(v8 + 312);
  v10 = *(__int64**)(v8 + 320);
  if (v9 != v10) {
    while (1) {
      v13 = *v9;
      v14 = *(unsigned __int8*)(*v9 + 376);
      v15 = *(_QWORD*)(*v9 + 384);
      if ((v14 & 1) == 0) {
        v15 = v14 >> 1;
      }
      if (v15 >= a3) {
        v16 = v13 + 377;
        v17 = *(_QWORD*)(v13 + 392);
        v18 = (v14 & 1) != 0 ? v17 : v16;
        result = GameRoutine_1a09cf0(v18, a2);
        if ((_DWORD)result == 0) {
          break;
        }
      }
      v9 += 2;
      if (v9 == v10) {
        return result;
      }
    }
  }
  if (v9 != v10) {
    v19 = *v9;
    if (*v9 != 0) {
      v20 = (float)v6;
      v21 = *(float*)GameData_212ea30;
      *(float*)&v26 = v20 / 255.0;
      v25 = GameRoutine_1a0a550((float)v7 / 255.0, *(float*)GameData_212ea30);
      v24 = GameRoutine_1a0a550((float)v4 / 255.0, v21);
      *(float*)&v22 = GameRoutine_1a0a550((float)v5 / 255.0, v21);
      *(_QWORD*)&v23 = __PAIR64__(LODWORD(v24), LODWORD(v25));
      *((_QWORD*)&v23 + 1) = __PAIR64__(v26, v22);
      return (*(__int64 (**)(__int64, const char*, __int64, long double))(
          *(_QWORD*)v19 + 64LL))(v19, "ScarColor", 9, v23);
    }
  }
  return result;
}

__int64 GameHr_bd93a0(__int64 result, __int64 a2, unsigned __int64 a3,
                      _BYTE* a4)
{
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  float v20;
  float v21;
  unsigned int v22;
  long double v23;
  float v24;
  float v25;
  unsigned int v26;

  LOBYTE(v7) = *a4;
  LOBYTE(v4) = a4[1];
  LOBYTE(v5) = a4[2];
  LOBYTE(v6) = a4[3];
  v8 = *(_QWORD*)(*(_QWORD*)(result + 240) + 24LL);
  v9 = *(__int64**)(v8 + 312);
  v10 = *(__int64**)(v8 + 320);
  if (v9 != v10) {
    while (1) {
      v13 = *v9;
      v14 = *(unsigned __int8*)(*v9 + 376);
      v15 = *(_QWORD*)(*v9 + 384);
      if ((v14 & 1) == 0) {
        v15 = v14 >> 1;
      }
      if (v15 >= a3) {
        v16 = v13 + 377;
        v17 = *(_QWORD*)(v13 + 392);
        v18 = (v14 & 1) != 0 ? v17 : v16;
        result = GameRoutine_1a09cf0(v18, a2);
        if ((_DWORD)result == 0) {
          break;
        }
      }
      v9 += 2;
      if (v9 == v10) {
        return result;
      }
    }
  }
  if (v9 != v10) {
    v19 = *v9;
    if (*v9 != 0) {
      v20 = (float)v6;
      v21 = *(float*)GameData_212ea30;
      *(float*)&v26 = v20 / 255.0;
      v25 = GameRoutine_1a0a550((float)v7 / 255.0, *(float*)GameData_212ea30);
      v24 = GameRoutine_1a0a550((float)v4 / 255.0, v21);
      *(float*)&v22 = GameRoutine_1a0a550((float)v5 / 255.0, v21);
      *(_QWORD*)&v23 = __PAIR64__(LODWORD(v24), LODWORD(v25));
      *((_QWORD*)&v23 + 1) = __PAIR64__(v26, v22);
      return (*(__int64 (**)(__int64, const char*, __int64, long double))(
          *(_QWORD*)v19 + 64LL))(v19, "TattooColor", 11, v23);
    }
  }
  return result;
}

__int64 GameHr_c32aa0(__int64 result, _QWORD* a2, long double a3)
{
  __int64 v3;
  int v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64** v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64* v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  int v26;
  _QWORD v27[2];
  _QWORD v28[4];
  __int64 v29;

  v3 = *a2;
  v5 = *(_DWORD*)(*a2 + 320LL);
  if (v5 > 2) {
    if (v5 == 3) {
      if ((*(_BYTE*)(v3 + 48) & 1) != 0) {
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                                  memory_order_acquire) &
             1) == 0) {
          result = GameRoutine_1a09fd0(&GameData_21fde98);
          if ((_DWORD)result != 0) {
            GameRoutine_a5aca0(GameData_21fdd90);
            GameRoutine_2b0(GameData_212e358[0], GameData_21fdd90,
                            &GameData_1f50948);
            result = GameRoutine_1a09fe0(&GameData_21fde98);
          }
        }
        if (GameData_21fdde0 != GameData_21fdde8) {
          return result;
        }
        v3 = *a2;
      }
      v26 = 4;
    LABEL_45:
      *(_DWORD*)(v3 + 320) = v26;
      return result;
    }
    if (v5 == 4) {
      v11 = *(__int64***)(v3 + 312);
      if (v11 == nullptr || (v12 = *v11, v13 = v11[1], v12 == v13)) {
      LABEL_16:
        *(_DWORD*)(v3 + 320) = 5;
        v15 = *(_QWORD**)(*a2 + 312LL);
        *(_QWORD*)(*a2 + 312LL) = 0;
        if (v15 != nullptr) {
          v16 = GameData_212bf68;
          if (*v15 != 0) {
            v17 = *(_QWORD*)GameData_212bf68;
            v15[1] = *v15;
            v18 = 128;
            if (*(_QWORD*)(v17 + 200) == 0) {
              v18 = 56;
            }
            GameRoutine_1a0a4e0(v17 + v18, a3);
          }
          v19 = 128;
          if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
            v19 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)v16 + v19, a3);
        }
        v20 = *a2;
        v21 = *(__int64**)(*a2 + 288LL);
        v22 = *(__int64**)(*a2 + 296LL);
        if (v21 != v22) {
          do {
            v23 = *v21++;
            *(_BYTE*)(v23 + 289) = *(_BYTE*)(*a2 + 256LL);
          } while (v21 != v22);
          v20 = *a2;
        }
        result = *(_QWORD*)(v20 + 96);
        if (result != 0) {
          return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)result + 48LL))(
              result, v20 + 288);
        }
      }
      else {
        while (1) {
          v14 = *v12++;
          if (*(_QWORD*)(v14 + 64) != *(_QWORD*)(v14 + 72)) {
            break;
          }
          if (v12 == v13) {
            goto LABEL_16;
          }
        }
      }
    }
  }
  else {
    v6 = result;
    if (v5 == 1) {
      v24 = *(_QWORD**)(v3 + 280);
      if (*(_DWORD*)(*v24 + 32LL) == 0) {
        result = v24[1];
        if (*(_BYTE*)(result + 165) != 1) {
          return result;
        }
        result = GameRoutine_ad7390(result);
        if ((result & 1) == 0) {
          return result;
        }
        v3 = *a2;
      }
      v25 = a2[1];
      v27[0] = v3;
      v27[1] = v25;
      if (v25 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                                  memory_order_relaxed);
        result = GameRoutine_c32fa0(v6, v27);
        if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
          result = GameRoutine_1a09c50(v25);
        }
      }
      else {
        result = GameRoutine_c32fa0(v6, v27);
      }
      v3 = *a2;
      v26 = 2;
      goto LABEL_45;
    }
    if (v5 == 2 && **(_BYTE**)(*(_QWORD*)result + 272LL) == 1) {
      v7 = *(__int64**)(v3 + 288);
      v8 = *(__int64**)(v3 + 296);
      if (v7 != v8) {
        do {
          v9 = *(_QWORD*)(*(_QWORD*)v6 + 272LL);
          if (*(_BYTE*)(v9 + 64) == 1) {
            v10 = *v7;
            v29 = *(_QWORD*)v6;
            v28[2] = 0;
            v28[3] = 0x100000000LL;
            v28[0] = v9 + 24;
            v28[1] = v10;
            result = GameRoutine_198d120(&v29, v28);
          }
          ++v7;
        } while (v7 != v8);
        v3 = *a2;
      }
      v26 = 3;
      goto LABEL_45;
    }
  }
  return result;
}

_QWORD* GameHr_c47f40(_QWORD* result, __int64* a2, long double a3)
{
  unsigned __int64 v4;
  _QWORD* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  char v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  bool v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  long double v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  char* v27;
  char* v28;
  char* v29;
  char* v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  char* v35;
  __int64 v36;
  unsigned __int64 v37;
  char* v38;
  char** v39;
  char* v40;
  unsigned __int64 v41;
  char* v42;

  v4 = result[7] + result[6] - 1LL;
  if (*(_QWORD*)(*(_QWORD*)(result[3] + 8 * (v4 >> 9)) + 8 * (v4 & 0x1FF)) ==
      0) {
  LABEL_27:
    v19 = a2[3];
    if (*(_BYTE*)(v19 + 24) == 1) {
      if ((*(_BYTE*)v19 & 1) != 0 && *(_QWORD*)(v19 + 16) != 0) {
        v20 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v20 = 56;
        }
        result =
            (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v20, a3);
      }
      *(_BYTE*)(v19 + 24) = 0;
    }
    return result;
  }
  v5 = result;
  if ((*(_BYTE*)a2 & 1) != 0) {
    result = (_QWORD*)GameRoutine_60a270(&v36, a2[2], a2[1]);
  }
  else {
    v6 = a2[1];
    v36 = *a2;
    v37 = v6;
    v38 = (char*)a2[2];
  }
  if ((v36 & 1) != 0) {
    v7 = v37;
  }
  else {
    v7 = (unsigned __int64)(unsigned __int8)v36 >> 1;
  }
  if ((v36 & 1) != 0 && v38 != nullptr) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v8 = 56;
    }
    result = (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v8, a3);
  }
  v9 = *(_BYTE*)a2;
  if (v7 != 0) {
    v10 = v5[7] + v5[6] - 1LL;
    v11 = *(_QWORD*)(*(_QWORD*)(v5[3] + 8 * (v10 >> 9)) + 8 * (v10 & 0x1FF));
    if ((*(_BYTE*)a2 & 1) != 0) {
      result = (_QWORD*)GameRoutine_60a270(&v36, a2[2], a2[1]);
    }
    else {
      v12 = a2[1];
      v36 = *a2;
      v37 = v12;
      v38 = (char*)a2[2];
    }
    if ((*(_BYTE*)v11 & 0x7F) == 8) {
      if ((v36 & 1) != 0) {
        v13 = v38;
      }
      else {
        v13 = (char*)&v36 + 1;
      }
      v14 = GameRoutine_1a09c70(v13);
      v15 = *(_QWORD*)(v11 + 1);
      v40 = v13;
      v41 = v14;
      result = (_QWORD*)GameRoutine_6b7f00(v15, 0, v15,
                                           *(unsigned int*)(v15 + 4), &v40);
      v17 = v16 == *(unsigned int*)(v15 + 4);
      if ((v36 & 1) != 0) {
      LABEL_22:
        if (v38 != nullptr) {
          v18 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v18 = 56;
          }
          result = (_QWORD*)GameRoutine_1a0a4e0(
              *(_QWORD*)GameData_212bf68 + v18, a3);
        }
      }
    }
    else {
      v17 = true;
      if ((v36 & 1) != 0) {
        goto LABEL_22;
      }
    }
    if (v17) {
      goto LABEL_27;
    }
    v9 = *(_BYTE*)a2;
  }
  v41 = 0;
  v42 = nullptr;
  v40 = nullptr;
  if ((v9 & 1) != 0) {
    GameRoutine_60a270(&v33, a2[2], a2[1]);
    if ((v33 & 1) != 0) {
      goto LABEL_37;
    }
  LABEL_39:
    v36 = v33;
    v37 = v34;
    v38 = v35;
    goto LABEL_40;
  }
  v21 = a2[1];
  v33 = *a2;
  v34 = v21;
  v35 = (char*)a2[2];
  if ((v33 & 1) == 0) {
    goto LABEL_39;
  }
LABEL_37:
  GameRoutine_60a270(&v36, v35, v34);
LABEL_40:
  v39 = &v40;
  result = (_QWORD*)GameRoutine_6b8990(v5, &v36);
  if ((v36 & 1) != 0 && v38 != nullptr) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v23 = 56;
    }
    result =
        (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v23, v22);
  }
  if ((v33 & 1) != 0 && v35 != nullptr) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v24 = 56;
    }
    result =
        (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v24, v22);
  }
  v25 = a2[3];
  if (*(_BYTE*)(v25 + 24) != 1) {
    if (((unsigned __int8)v40 & 1) != 0) {
      result = (_QWORD*)GameRoutine_60a270(v25, v42, v41);
    }
    else {
      v28 = v40;
      v29 = v42;
      *(_QWORD*)(v25 + 8) = v41;
      *(_QWORD*)(v25 + 16) = v29;
      *(_QWORD*)v25 = v28;
    }
    *(_BYTE*)(v25 + 24) = 1;
    if (((unsigned __int8)v40 & 1) == 0) {
      return result;
    }
    goto LABEL_69;
  }
  if ((char**)v25 != &v40) {
    if ((*(_BYTE*)v25 & 1) == 0) {
      if (((unsigned __int8)v40 & 1) != 0) {
        result = (_QWORD*)GameRoutine_64df20(v25, v42, v41, v22);
        if (((unsigned __int8)v40 & 1) == 0) {
          return result;
        }
      }
      else {
        v26 = v40;
        v27 = v42;
        *(_QWORD*)(v25 + 8) = v41;
        *(_QWORD*)(v25 + 16) = v27;
        *(_QWORD*)v25 = v26;
        if (((unsigned __int8)v40 & 1) == 0) {
          return result;
        }
      }
      goto LABEL_69;
    }
    if (((unsigned __int8)v40 & 1) != 0) {
      v30 = v42;
    }
    else {
      v30 = (char*)&v40 + 1;
    }
    if (((unsigned __int8)v40 & 1) != 0) {
      v31 = v41;
    }
    else {
      v31 = (unsigned __int64)(unsigned __int8)v40 >> 1;
    }
    result = (_QWORD*)GameRoutine_64dde0(v25, v30, v31, v22);
  }
  if (((unsigned __int8)v40 & 1) == 0) {
    return result;
  }
LABEL_69:
  if (v42 != nullptr) {
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v32 = 56;
    }
    return (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v32, v22);
  }
  return result;
}

float GameHr_c4e160(__int64 a1, char* a2)
{
  __int128 v4;
  char v5;
  __int64 v6;
  __int64* v7;
  long double v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int128 v12;
  float result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  unsigned int v22;
  _QWORD v23[2];
  __int64 v24;
  __int64* v25;

  v4 = *(_OWORD*)*((_QWORD*)a2 + 3);
  v22 = *(_QWORD*)(*((_QWORD*)a2 + 3) + 8LL);
  v5 = *a2;
  v21 = v4;
  if ((v5 & 1) != 0) {
    GameRoutine_60a270(&v14, *((_QWORD*)a2 + 2), *((_QWORD*)a2 + 1));
    if ((v14 & 1) != 0) {
      goto LABEL_3;
    }
  }
  else {
    v6 = *((_QWORD*)a2 + 1);
    v14 = *(_QWORD*)a2;
    v15 = v6;
    v16 = *((_QWORD*)a2 + 2);
    if ((v14 & 1) != 0) {
    LABEL_3:
      GameRoutine_60a270(&v17, v16, v15);
      goto LABEL_6;
    }
  }
  v17 = v14;
  v18 = v15;
  v19 = v16;
LABEL_6:
  v20 = &v21;
  if ((v17 & 1) != 0) {
    GameRoutine_60a270(v23, v19, v18);
    v7 = v20;
  }
  else {
    v7 = &v21;
    v23[0] = v17;
    v23[1] = v18;
    v24 = v19;
  }
  v25 = v7;
  GameRoutine_c4e300(a1, v23);
  if ((v23[0] & 1) != 0 && v24 != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v9 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v9, v8);
  }
  if ((v17 & 1) != 0 && v19 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v10 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v10, v8);
  }
  if ((v14 & 1) != 0 && v16 != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v11 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v11, v8);
  }
  *(_QWORD*)&v12 = v21;
  *((_QWORD*)&v12 + 1) = v22;
  *(_OWORD*)*((_QWORD*)a2 + 3) = v12;
  LODWORD(result) = v12;
  return result;
}

#pragma GCC visibility pop
