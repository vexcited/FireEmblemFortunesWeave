#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern char GameData_1a9f09e;
extern __int64 (*GameData_1fb0e30[])();
extern __int64 GameData_212bf68;
extern _UNKNOWN* GameData_212c540;
extern __int64 GameData_212c638;
extern __int128 GameData_21a6120;
extern _UNKNOWN GameData_21a6130;
extern __int64 GameData_21c9f00;
extern __int64 GameData_21f2518;
extern __int64 GameData_21f2520;
extern __int64 GameData_21f2530;
extern __int64 GameData_21fe030;
extern __int64 GameData_21fe038;
extern __int64 GameData_21fe048;
extern __int64 GameData_22408e8;
extern __int64 GameData_2265ee0;
__int64 GameRoutine_12337e0(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_12343d0(void);
void __attribute__((noreturn)) GameRoutine_12343f0(void);
__int64 GameRoutine_1234420(void);
void __attribute__((noreturn)) GameRoutine_12352b0(void);
void __attribute__((noreturn)) GameRoutine_12352d0(void);
__int64 GameRoutine_132ffa0(_QWORD);
__int64 GameRoutine_13305c0(_QWORD);
__int64 GameRoutine_133f780(__int64 result, _DWORD*, char);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a09fd0(_QWORD);
__int64 GameRoutine_1a09fe0(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_65f710(_QWORD);
__int64 GameRoutine_6e5dc0(_QWORD);
__int64 GameRoutine_7a86e0(_QWORD);
__int64 GameRoutine_7a88a0(_QWORD);
__int64 GameRoutine_81ae00(_QWORD, long double);
__int64 GameRoutine_81aee0(_QWORD, double);
__int64 GameRoutine_81b040(_QWORD, double);
__int64 GameRoutine_8680c0(void);
void __attribute__((noreturn)) GameRoutine_8875e0(_QWORD);
void __attribute__((noreturn)) GameRoutine_888610(_QWORD);
__int64 GameRoutine_888970(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_971f60(_QWORD, _QWORD);
__int64 GameRoutine_9962a0(_QWORD, _QWORD);
__int64 GameRoutine_a85600(_QWORD);
_QWORD* GameRoutine_c21740(_QWORD* __return_ptr, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_c22ba0(_QWORD, _QWORD);
__int64 GameRoutine_c22d40(_QWORD, _QWORD);

__int64 GameHr_1232400(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 i;
  _BYTE* v17;
  unsigned int v18;
  _BYTE* v19;
  __int64 v20;
  __int64 v21;
  _BYTE* v22;
  _BYTE* v23;
  _BYTE* v24;
  __int64 v25;
  _BYTE* v26;
  __int64 v27;
  unsigned __int16 v28;
  int v29;
  __int64 v30;
  unsigned __int8* v31;
  __int64* v32;
  __int64* v33;
  __int64 v34;
  int v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  char* v44;
  __int64 v45;
  __int64 v46;
  _BYTE* v47;
  _WORD* v48;
  _WORD* j;
  _BYTE* v50;
  __int64 v51;
  _BYTE* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  _BYTE* v56;
  __int64 v57;
  _BYTE* v58;
  _BYTE* v59;
  char v60;
  __int64 v61;
  _QWORD* v62;
  _QWORD* v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned __int16 v67;
  __int64 v68;
  int v69;
  unsigned int v70;
  __int64 v71;
  int v72;
  __int64 v73;
  _BYTE* v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  signed __int64 v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  unsigned __int64 v87;
  __int64 v88;
  int v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  int v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  char v100;
  char v101;
  int v102;
  int v103;
  signed __int64 v104;
  unsigned __int64 v105;
  int v106;
  __int64 v107;
  __int64 v108;
  unsigned __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  int v115;
  __int64 v116;
  __int64 v117;
  int v118;
  __int64 v119;
  __int64 v120;
  int v121;
  __int64 v122;
  unsigned int v123;
  __int64 v124;
  int v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  int v129;
  __int64 v130;
  unsigned int v131;
  __int64 v132;
  int v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  int v137;
  int v138;
  __int64 v139;
  unsigned int v140;
  __int64 v141;
  int v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  int v148;
  char* v149;
  char v150;
  int v151;
  int v152;
  char v153;
  signed __int64 v154;
  unsigned __int64 v155;
  unsigned __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v162;
  _BYTE* v163;
  _BYTE* v164;
  _BYTE* v165;
  char v166;
  _QWORD* v167;
  unsigned __int64 v168;
  unsigned __int64 v169;
  int v170;
  _QWORD* v171;
  __int64 v172;
  unsigned __int64 v173;
  unsigned __int64 v174;
  unsigned __int64 v175;
  __int64 v176;
  unsigned __int64 v177;
  __int64 v178;
  unsigned __int64 v179;
  _QWORD* v180;
  unsigned __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  unsigned __int64* v190;
  __int64 v191;
  __int64 v192;
  _BYTE* v193;
  _BYTE* v194;
  __int64 v195;
  __int64 v196;
  __int64 v197;
  _QWORD* v198;
  unsigned __int64 v199;
  _BYTE* v200;
  _BYTE* v201;
  __int64 v202;
  unsigned int v203;
  _QWORD* v204;
  __int64 v205;
  _QWORD* v206;
  __int64 v207;
  _BYTE* v208;
  __int64 v209;
  __int64 v210;
  __int16 v211;
  __int64 v212;
  __int64 v213;
  int v214;
  unsigned __int64 v215;
  int v216;
  int v217;
  int v218;
  unsigned __int64 v219;
  unsigned __int64 v220;
  __int64 v221;
  int v222;
  int v223;
  unsigned __int64 v224;
  __int64 v225;
  int v226;
  __int64 v227;
  __int64 v228;
  _BYTE* v229;
  _BYTE* v230;
  __int64 v231;

  if (a2 == 0) {
    return result;
  }
  v4 = a2;
  v5 = (_QWORD*)result;
  v231 = 0;
  if (GameData_22408e8 != 0 && (v6 = *(_QWORD*)(GameData_22408e8 + 8)) != 0) {
    v7 = 9;
    do {
      v6 = *(_QWORD*)(v6 + 8);
      ++v7;
    } while (v6 != 0);
  }
  else {
    v7 = 9;
  }
  v8 = 5 * v7;
  v9 = (__int64*)GameData_212bf68;
  v10 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 40 * v7, 16, 0);
  v11 = v10 + 8 * v8;
  v229 = (_BYTE*)v10;
  v230 = (_BYTE*)v10;
  v12 = *v9;
  v231 = v11;
  v13 = GameRoutine_651b90(v12, 32, 16, 0);
  v14 = v13 + 32;
  v15 = v13;
  if (GameData_22408e8 != 0) {
    for (i = *(_QWORD*)(GameData_22408e8 + 8); i != 0; i = *(_QWORD*)(i + 8)) {
      v13 = GameRoutine_12337e0(&v229, i);
    }
  }
  v17 = (_BYTE*)v15;
  v204 = v5;
  v221 = a3;
  while (1) {
    v18 = *(unsigned __int8*)(v4 + 19);
    if (v18 <= 1) {
      break;
    }
    if (v18 == 2) {
      v48 = (_WORD*)v15;
      if ((_BYTE*)v15 != v17) {
        v48 = (_WORD*)v15;
        while (*(unsigned __int8*)v48 != *(unsigned __int8*)(v4 + 33)) {
          if (++v48 == (_WORD*)v17) {
            goto LABEL_91;
          }
        }
      }
      if (v48 != (_WORD*)v17) {
        for (j = v48 + 1; j != (_WORD*)v17; ++j) {
          if (*(unsigned __int8*)j != *(unsigned __int8*)(v4 + 33)) {
            *v48++ = *j;
          }
        }
        if (v48 != (_WORD*)v17) {
          v17 = v48;
        }
      }
    LABEL_91:
      v13 = GameRoutine_12337e0(&v229, v4);
    LABEL_92:
      if (v4 == a3) {
        goto LABEL_109;
      }
      goto LABEL_93;
    }
    if (v18 != 3) {
      goto LABEL_92;
    }
    v47 = v229;
    if (v229 != v230) {
      while (*(_BYTE*)(*(_QWORD*)v47 + 19LL) != 2 || (v47[32] & 1) != 0 ||
             *(unsigned __int8*)(*(_QWORD*)v47 + 33LL) !=
                 *(unsigned __int8*)(v4 + 22)) {
        v47 += 40;
        if (v47 == v230) {
          goto LABEL_84;
        }
      }
    }
    if (v47 == v230) {
    LABEL_84:
      if ((unsigned __int64)v17 >= v14) {
        v50 = &v17[-v15];
        v51 = (__int64)&v17[-v15] >> 1;
        if (v51 <= -2) {
        LABEL_289:
          GameRoutine_12343d0();
        }
        v52 = v17;
        if (v14 - v15 <= v51 + 1) {
          v53 = v51 + 1;
        }
        else {
          v53 = v14 - v15;
        }
        if (v14 - v15 >= 0x7FFFFFFFFFFFFFFELL) {
          v54 = 0x7FFFFFFFFFFFFFFFLL;
        }
        else {
          v54 = v53;
        }
        if (v54 < 0) {
          goto LABEL_287;
        }
        v55 = GameRoutine_651b90(*v9, 2 * v54, 16, 0);
        v56 = &v50[v55];
        v57 = (__int64)&v50[v55 + -2 * v51];
        *v56 = *(_BYTE*)(v4 + 22);
        v56[1] = *(_BYTE*)(v4 + 23);
        if ((_BYTE*)v15 != v52) {
          v58 = (_BYTE*)v15;
          v59 = (_BYTE*)v57;
          do {
            *v59 = *v58;
            v60 = v58[1];
            v58 += 2;
            v59[1] = v60;
            v59 += 2;
          } while (v58 != v52);
        }
        v14 = v55 + 2 * v54;
        v17 = v56 + 2;
        v61 = 128;
        if (*(_QWORD*)(*v9 + 200) == 0) {
          v61 = 56;
        }
        v13 = GameRoutine_1a0a4e0(*v9 + v61);
        v15 = v57;
        if (v4 == a3) {
          goto LABEL_109;
        }
      }
      else {
        *v17 = *(_BYTE*)(v4 + 22);
        v17[1] = *(_BYTE*)(v4 + 23);
        v17 += 2;
        if (v4 == a3) {
          goto LABEL_109;
        }
      }
    }
    else {
      v47[32] = 1;
      if (v4 == a3) {
        goto LABEL_109;
      }
    }
  LABEL_93:
    v4 = *(_QWORD*)(v4 + 8);
    if (v4 == 0) {
      goto LABEL_109;
    }
  }
  if (*(_BYTE*)(v4 + 19) == 0) {
    goto LABEL_91;
  }
  v227 = *(unsigned __int16*)(v4 + 22);
  if (*(_WORD*)(v4 + 22) == 0) {
    goto LABEL_92;
  }
  v224 = v14;
  v19 = v229;
  v200 = v17;
  v20 = 0;
  v207 = v15;
  do {
    v22 = v230;
    if (v19 == v230) {
      goto LABEL_18;
    }
    v23 = nullptr;
    v24 = v19;
    v25 = *(_QWORD*)(v4 + 24) + 24 * v20;
    do {
      v26 = v23;
      if ((v24[32] & 1) == 0) {
        v27 = *(_QWORD*)v24;
        v28 = (*(__int64 (**)(_QWORD))(**(_QWORD**)v24 + 32LL))(*(_QWORD*)v24);
        v13 = (*(__int64 (**)(__int64))(*(_QWORD*)v27 + 40LL))(v27);
        if (v28 != 0) {
          v29 = *(unsigned __int8*)(v25 + 8);
          v30 = v28;
          v31 = (unsigned __int8*)(v13 + 9);
          while (v29 != *(v31 - 1) ||
                 (v29 == 3 || *(_BYTE*)(v25 + 8) == 0) &&
                     *(unsigned __int8*)(v25 + 9) != *v31) {
            v31 += 12;
            if (--v30 == 0) {
              goto LABEL_21;
            }
          }
          if (*(_BYTE*)(*(_QWORD*)v24 + 19LL) != 4) {
            if (v23 != nullptr && *(_BYTE*)(*(_QWORD*)v23 + 19LL) == 4) {
              v23[32] = 1;
            }
            v23 = v24;
          LABEL_35:
            v33 = *((__int64**)v23 + 1);
            v32 = *((__int64**)v23 + 2);
            v34 = (char*)v32 - (char*)v33;
            if (v32 != v33) {
              v35 = *(unsigned __int8*)(v25 + 8);
              v36 = v34 >> 3;
              v37 = *((_QWORD*)v23 + 1);
              while (v35 != *(unsigned __int8*)(*(_QWORD*)v37 + 8LL) ||
                     (v35 == 3 || *(_BYTE*)(v25 + 8) == 0) &&
                         *(unsigned __int8*)(v25 + 9) !=
                             *(unsigned __int8*)(*(_QWORD*)v37 + 9LL)) {
                v37 += 8;
                if (--v36 == 0) {
                  goto LABEL_43;
                }
              }
              *(_QWORD*)v37 = v25;
              goto LABEL_18;
            }
          LABEL_43:
            v38 = *((_QWORD*)v23 + 3);
            if ((unsigned __int64)v32 < v38) {
              *v32 = v25;
              v21 = (__int64)(v32 + 1);
              goto LABEL_17;
            }
            v39 = (v34 >> 3) + 1;
            if (v39 >> 61 != 0) {
              GameRoutine_12343f0();
            }
            v40 = v38 - (_QWORD)v33;
            if (v40 >> 2 > v39) {
              v39 = v40 >> 2;
            }
            if ((unsigned __int64)v40 >= 0x7FFFFFFFFFFFFFF8LL) {
              v41 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v41 = v39;
            }
            if (v41 == 0) {
              v42 = 0;
              goto LABEL_58;
            }
            if (v41 >> 61 == 0) {
              v42 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v41, 16,
                                       0);
            LABEL_58:
              v43 = v42 + 8 * v41;
              v44 = (char*)((char*)v32 - (char*)v33);
              v45 = v42 + v34 - 8 * (v34 >> 3);
              *(_QWORD*)(v42 + v34) = v25;
              v21 = v42 + v34 + 8;
              v13 = GameRoutine_1a0b950(v45, v33, v44);
              *((_QWORD*)v23 + 1) = v45;
              *((_QWORD*)v23 + 2) = v21;
              *((_QWORD*)v23 + 3) = v43;
              if (v33 != nullptr) {
                v46 = 128;
                if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                  v46 = 56;
                }
                v13 = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v46);
              }
            LABEL_17:
              *((_QWORD*)v23 + 2) = v21;
              goto LABEL_18;
            }
          LABEL_287:
            GameRoutine_60a210(v13);
          }
          v23 = v24;
          if (v26 != nullptr) {
            v23 = v24;
            if (*(_BYTE*)(*(_QWORD*)v26 + 19LL) == 4) {
              v23 = v24;
              v26[32] = 1;
            }
          }
        }
      }
    LABEL_21:
      v24 += 40;
    } while (v24 != v22);
    if (v23 != nullptr) {
      goto LABEL_35;
    }
  LABEL_18:
    ++v20;
  } while (v20 != v227);
  v9 = &GameData_2265ee0;
  v15 = v207;
  v17 = v200;
  a3 = v221;
  v14 = v224;
  if (v4 != v221) {
    goto LABEL_93;
  }
LABEL_109:
  v63 = v229;
  v62 = v230;
  if (v229 != v230) {
    v208 = (_BYTE*)v15;
    v198 = v230;
    v199 = (unsigned __int64)&v17[-v15];
    v201 = v17;
    do {
      if ((v63[4] & 1) == 0 &&
          (*(__int64 (**)(_QWORD))(*(_QWORD*)*v63 + 16LL))(*v63) != 0) {
        if (v63[1] != v63[2]) {
          GameRoutine_1234420();
        }
        v65 = *v63;
        v66 = GameRoutine_651b90(*v9, 491520, 16, 0);
        (*(void (**)(__int64))(*(_QWORD*)v65 + 24LL))(v65);
        v228 = (*(__int64 (**)(__int64))(*(_QWORD*)v65 + 16LL))(v65);
        v203 = (*(__int64 (**)(__int64))(*(_QWORD*)v65 + 24LL))(v65);
        v67 = (*(__int64 (**)(__int64))(*(_QWORD*)v65 + 32LL))(v65);
        v202 = v65;
        v13 = (*(__int64 (**)(__int64))(*(_QWORD*)v65 + 40LL))(v65);
        v210 = v13;
        v212 = v67;
        if (v67 != 0) {
          v13 = GameRoutine_651b90(*v9, 12LL * v67, 16, 0);
          v215 = v13;
          v219 = v13 + 12LL * v67;
        }
        else {
          v215 = 0;
          v219 = 0;
        }
        v68 = v63[1];
        v205 = v66;
        v206 = v63;
        v209 = v63[2];
        if (v68 != v209) {
          v69 = 0;
          v70 = 0;
          v214 = 0;
          v71 = v66;
          v220 = v215;
          while (1) {
            if (v69 < (int)v212) {
              v73 = v212 - v69;
              v225 = v68;
              v74 = (_BYTE*)(v210 + 9 + 12LL * v69);
              do {
                v75 = (unsigned __int8)*(v74 - 1);
                v76 = *(unsigned __int8*)(*(_QWORD*)v225 + 8LL);
                if (v76 == v75) {
                  if (v76 != 3 && *(_BYTE*)(*(_QWORD*)v225 + 8LL) != 0) {
                    goto LABEL_151;
                  }
                  v77 = (unsigned __int8)*v74;
                  if (*(unsigned __int8*)(*(_QWORD*)v225 + 9LL) == v77) {
                    goto LABEL_151;
                  }
                }
                else {
                  LOBYTE(v77) = *v74;
                }
                v222 = v69;
                v78 = *(_DWORD*)(v74 - 9) + v214;
                v79 = *(_DWORD*)(v74 - 5);
                if (v220 >= v219) {
                  v80 = v220 - v215;
                  v81 =
                      1 - 0x5555555555555555LL * ((__int64)(v220 - v215) >> 2);
                  if (v81 > 0x1555555555555555LL) {
                    goto LABEL_286;
                  }
                  if (0x5555555555555556LL * ((__int64)(v219 - v215) >> 2) >
                      v81) {
                    v81 = 0x5555555555555556LL * ((__int64)(v219 - v215) >> 2);
                  }
                  if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v219 - v215) >> 2) >=
                      0xAAAAAAAAAAAAAAALL) {
                    v82 = 0x1555555555555555LL;
                  }
                  else {
                    v82 = v81;
                  }
                  if (v82 != 0) {
                    if (v82 > 0x1555555555555555LL) {
                      goto LABEL_287;
                    }
                    v83 = GameRoutine_651b90(GameData_2265ee0, 12 * v82, 16, 0);
                  }
                  else {
                    v83 = 0;
                  }
                  v84 = v83 + v80;
                  *(_BYTE*)(v84 + 8) = v75;
                  *(_DWORD*)v84 = v78;
                  *(_DWORD*)(v84 + 4) = v79;
                  *(_BYTE*)(v84 + 9) = v77;
                  v219 = v83 + 12 * v82;
                  v220 = v83 + v80 + 12;
                  v85 = v83 + v80 + 12 * (v80 / -12);
                  v13 = GameRoutine_1a0b950(v85, v215, v80);
                  if (v215 != 0) {
                    v86 = 128;
                    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                      v86 = 56;
                    }
                    v13 = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v86);
                  }
                  v215 = v85;
                }
                else {
                  *(_DWORD*)v220 = v78;
                  *(_DWORD*)(v220 + 4) = v79;
                  *(_BYTE*)(v220 + 8) = v75;
                  *(_BYTE*)(v220 + 9) = v77;
                  v220 += 12LL;
                }
                --v73;
                v74 += 12;
                v69 = v222 + 1;
              } while (v73 != 0);
              v69 = v212;
            LABEL_151:
              v68 = v225;
            }
            v223 = v69;
            v87 = *(unsigned __int16*)(*(_QWORD*)v68 + 12LL);
            if (*(_WORD*)(*(_QWORD*)v68 + 12LL) != 0) {
              v211 = *(_WORD*)(*(_QWORD*)v68 + 12LL);
              if ((unsigned int)v87 >= 4) {
                v111 = 0;
                v88 = 0;
                v226 = 0;
                v213 = 96 * (v87 >> 2);
                do {
                  v116 = *(_QWORD*)(*(_QWORD*)v68 + 16LL);
                  v117 = v116 + v111;
                  v118 = *(_DWORD*)(v116 + v111 + 4);
                  v119 = v118 - v70;
                  if (v118 != v70) {
                    v13 = GameRoutine_1a0b950(v71, v228 + v70, v119);
                    v71 += v119;
                  }
                  v120 = *(unsigned int*)(v117 + 12);
                  if ((_DWORD)v120 != 0) {
                    v13 = GameRoutine_1a0b950(v71, *(_QWORD*)(v116 + v111 + 16),
                                              v120);
                    v71 += *(unsigned int*)(v117 + 12);
                    v218 = *(_DWORD*)(v117 + 12);
                  }
                  else {
                    v218 = 0;
                  }
                  v121 = *(_DWORD*)(v116 + v111 + 8);
                  v122 = *(_QWORD*)(*(_QWORD*)v68 + 16LL);
                  v123 = *(_DWORD*)(v117 + 4) + v121;
                  v124 = v122 + v111;
                  v125 = *(_DWORD*)(v122 + v111 + 28);
                  v126 = v125 - v123;
                  if (v125 != v123) {
                    v13 = GameRoutine_1a0b950(v71, v228 + v123, v125 - v123);
                    v71 += v126;
                  }
                  v127 = *(unsigned int*)(v124 + 36);
                  v217 = v121;
                  if ((_DWORD)v127 != 0) {
                    v13 = GameRoutine_1a0b950(v71, *(_QWORD*)(v122 + v111 + 40),
                                              v127);
                    v113 = v71 + *(unsigned int*)(v124 + 36);
                    v216 = *(_DWORD*)(v124 + 36);
                  }
                  else {
                    v113 = v71;
                    v216 = 0;
                  }
                  v128 = v68;
                  v129 = *(_DWORD*)(v122 + v111 + 32);
                  v130 = *(_QWORD*)(*(_QWORD*)v68 + 16LL);
                  v131 = *(_DWORD*)(v124 + 28) + v129;
                  v132 = v130 + v111;
                  v133 = *(_DWORD*)(v130 + v111 + 52);
                  v134 = v133 - v131;
                  if (v133 != v131) {
                    v13 = GameRoutine_1a0b950(v113, v228 + v131, v133 - v131);
                    v113 += v134;
                  }
                  v135 = *(unsigned int*)(v132 + 60);
                  if ((_DWORD)v135 != 0) {
                    v13 = GameRoutine_1a0b950(
                        v113, *(_QWORD*)(v130 + v111 + 64), v135);
                    v136 = *(unsigned int*)(v132 + 60);
                    v113 += v136;
                  }
                  else {
                    LODWORD(v136) = 0;
                  }
                  v137 = *(_DWORD*)(v130 + v111 + 56);
                  v138 = *(_DWORD*)(v132 + 52);
                  v139 = *(_QWORD*)(*(_QWORD*)v128 + 16LL);
                  v140 = v138 + v137;
                  v141 = v139 + v111;
                  v142 = *(_DWORD*)(v139 + v111 + 76);
                  v143 = v142 - v140;
                  if (v142 != v140) {
                    v13 = GameRoutine_1a0b950(v113, v228 + v140, v142 - v140);
                    v113 += v143;
                  }
                  v144 = *(unsigned int*)(v141 + 84);
                  if ((_DWORD)v144 != 0) {
                    v13 = GameRoutine_1a0b950(
                        v113, *(_QWORD*)(v139 + v111 + 88), v144);
                    v112 = *(unsigned int*)(v141 + 84);
                    v113 += v112;
                  }
                  else {
                    LODWORD(v112) = 0;
                  }
                  v114 = v139 + v111;
                  v88 += 4;
                  v111 += 96;
                  LODWORD(v114) = *(_DWORD*)(v114 + 80);
                  v115 = v217 + v129 + v137;
                  v68 = v128;
                  v71 = v113;
                  v226 = v218 + v226 + v216 + v136 + v112 - v114 - v115;
                  v70 = *(_DWORD*)(v141 + 76) + v114;
                } while (v213 != v111);
              }
              else {
                v88 = 0;
                v226 = 0;
              }
              v89 = v226;
              v90 = v211 & 3;
              if ((v211 & 3) != 0) {
                v91 = 24 * v88;
                do {
                  v94 = *(_QWORD*)(*(_QWORD*)v68 + 16LL);
                  v95 = v94 + v91;
                  v96 = *(_DWORD*)(v94 + v91 + 4);
                  v97 = v96 - v70;
                  if (v96 != v70) {
                    v13 = GameRoutine_1a0b950(v71, v228 + v70, v97);
                    v71 += v97;
                  }
                  v98 = *(unsigned int*)(v95 + 12);
                  if ((_DWORD)v98 != 0) {
                    v13 = GameRoutine_1a0b950(v71, *(_QWORD*)(v94 + v91 + 16),
                                              v98);
                    v92 = *(unsigned int*)(v95 + 12);
                    v71 += v92;
                  }
                  else {
                    LODWORD(v92) = 0;
                  }
                  v93 = v94 + v91;
                  v91 += 24;
                  --v90;
                  LODWORD(v93) = *(_DWORD*)(v93 + 8);
                  v89 = v92 + v89 - v93;
                  v70 = *(_DWORD*)(v95 + 4) + v93;
                } while (v90 != 0);
              }
            }
            else {
              v89 = 0;
            }
            v99 = v210 + 12LL * v223;
            v100 = *(_BYTE*)(v99 + 8);
            v101 = *(_BYTE*)(v99 + 9);
            v102 = *(_DWORD*)v99 + v214;
            v103 = *(_DWORD*)(v99 + 4) + v89;
            if (v220 >= v219) {
              v104 = v220 - v215;
              v105 = 1 - 0x5555555555555555LL * ((__int64)(v220 - v215) >> 2);
              if (v105 > 0x1555555555555555LL) {
              LABEL_286:
                GameRoutine_12352b0();
              }
              v106 = v89;
              v107 = v71;
              v108 = v68;
              if (0x5555555555555556LL * ((__int64)(v219 - v215) >> 2) > v105) {
                v105 = 0x5555555555555556LL * ((__int64)(v219 - v215) >> 2);
              }
              if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v219 - v215) >> 2) >=
                  0xAAAAAAAAAAAAAAALL) {
                v109 = 0x1555555555555555LL;
              }
              else {
                v109 = v105;
              }
              if (v109 != 0) {
                if (v109 > 0x1555555555555555LL) {
                  goto LABEL_287;
                }
                v110 = GameRoutine_651b90(GameData_2265ee0, 12 * v109, 16, 0);
              }
              else {
                v110 = 0;
              }
              v145 = v110 + v104;
              *(_BYTE*)(v145 + 9) = v101;
              *(_DWORD*)v145 = v102;
              *(_DWORD*)(v145 + 4) = v103;
              *(_BYTE*)(v145 + 8) = v100;
              v219 = v110 + 12 * v109;
              v220 = v110 + v104 + 12;
              v146 = v110 + v104 + 12 * (v104 / -12);
              v13 = GameRoutine_1a0b950(v146, v215, v104);
              if (v215 != 0) {
                v147 = 128;
                if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                  v147 = 56;
                }
                v13 = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v147);
              }
              v72 = v223;
              v68 = v108;
              v71 = v107;
              v89 = v106;
              v215 = v146;
            }
            else {
              *(_BYTE*)(v220 + 8) = v100;
              v72 = v223;
              *(_DWORD*)v220 = v102;
              *(_DWORD*)(v220 + 4) = v103;
              *(_BYTE*)(v220 + 9) = v101;
              v220 += 12LL;
            }
            v69 = v72 + 1;
            v68 += 8;
            v214 += v89;
            if (v68 == v209) {
              goto LABEL_204;
            }
          }
        }
        v214 = 0;
        v70 = 0;
        v69 = 0;
        v71 = v66;
        v220 = v215;
      LABEL_204:
        if (v203 > v70) {
          v13 = GameRoutine_1a0b950(v71, v228 + v70, v203 - v70);
          LODWORD(v71) = v71 + v203 - v70;
          v148 = v212 - v69;
          if ((int)v212 > v69) {
            v9 = (__int64*)GameData_212bf68;
            v149 = (char*)(v210 + 12LL * v69 + 9);
            while (1) {
              v150 = *(v149 - 1);
              v151 = *(_DWORD*)(v149 - 9) + v214;
              v152 = *(_DWORD*)(v149 - 5);
              v153 = *v149;
              if (v220 >= v219) {
                v154 = v220 - v215;
                v155 = 1 - 0x5555555555555555LL * ((__int64)(v220 - v215) >> 2);
                if (v155 > 0x1555555555555555LL) {
                  goto LABEL_286;
                }
                if (0x5555555555555556LL * ((__int64)(v219 - v215) >> 2) >
                    v155) {
                  v155 = 0x5555555555555556LL * ((__int64)(v219 - v215) >> 2);
                }
                if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v219 - v215) >> 2) >=
                    0xAAAAAAAAAAAAAAALL) {
                  v156 = 0x1555555555555555LL;
                }
                else {
                  v156 = v155;
                }
                if (v156 != 0) {
                  if (v156 > 0x1555555555555555LL) {
                    goto LABEL_287;
                  }
                  v157 = GameRoutine_651b90(*v9, 12 * v156, 16, 0);
                }
                else {
                  v157 = 0;
                }
                v158 = v157 + v154;
                *(_BYTE*)(v158 + 8) = v150;
                *(_DWORD*)v158 = v151;
                *(_DWORD*)(v158 + 4) = v152;
                *(_BYTE*)(v158 + 9) = v153;
                v219 = v157 + 12 * v156;
                v220 = v157 + v154 + 12;
                v159 = v157 + v154 + 12 * (v154 / -12);
                v13 = GameRoutine_1a0b950(v159, v215, v154);
                if (v215 != 0) {
                  v160 = 128;
                  if (*(_QWORD*)(*v9 + 200) == 0) {
                    v160 = 56;
                  }
                  v13 = GameRoutine_1a0a4e0(*v9 + v160);
                }
                v215 = v159;
              }
              else {
                *(_DWORD*)v220 = v151;
                *(_DWORD*)(v220 + 4) = v152;
                *(_BYTE*)(v220 + 8) = v150;
                *(_BYTE*)(v220 + 9) = v153;
                v220 += 12LL;
              }
              v149 += 12;
              if (--v148 == 0) {
                goto LABEL_226;
              }
            }
          }
        }
        v9 = &GameData_2265ee0;
      LABEL_226:
        if (*(_BYTE*)(*v206 + 19LL) != 0 || v201 == v208) {
          v162 = 0;
          v163 = nullptr;
          v164 = nullptr;
        }
        else {
          if ((v199 & 0x8000000000000000LL) != 0) {
            goto LABEL_289;
          }
          v13 = GameRoutine_651b90(*v9, v199, 16, 0);
          v165 = v208;
          v162 = v13;
          v163 = (_BYTE*)v13;
          do {
            *v163 = *v165;
            v166 = v165[1];
            v165 += 2;
            v163[1] = v166;
            v163 += 2;
          } while (v165 != v201);
          v164 = (_BYTE*)(v13 + v199);
        }
        v167 = v204;
        v169 = v204[1];
        v168 = v204[2];
        v170 = v71 - v205;
        if (v169 < v168) {
          *(_QWORD*)(v169 + 48) = v162;
          *(_QWORD*)(v169 + 56) = v163;
          v64 = v169 + 72;
          v62 = v198;
          *(_DWORD*)(v169 + 40) = v170;
          *(_QWORD*)(v169 + 32) = v205;
          *(_QWORD*)(v169 + 64) = v164;
          *(_QWORD*)v169 = v202;
          *(_QWORD*)(v169 + 8) = v215;
          *(_QWORD*)(v169 + 16) = v220;
          *(_QWORD*)(v169 + 24) = v219;
        }
        else {
          v171 = (_QWORD*)*v204;
          v172 = v169 - *v204;
          v173 = 1 - 0x71C71C71C71C71C7LL * (v172 >> 3);
          if (v173 > 0x38E38E38E38E38ELL) {
            GameRoutine_12352d0();
          }
          v174 = 0x8E38E38E38E38E39LL * ((__int64)(v168 - (_QWORD)v171) >> 3);
          if (2 * v174 > v173) {
            v173 = 2 * v174;
          }
          if (v174 >= 0x1C71C71C71C71C7LL) {
            v175 = 0x38E38E38E38E38ELL;
          }
          else {
            v175 = v173;
          }
          if (v175 != 0) {
            if (v175 > 0x38E38E38E38E38ELL) {
              goto LABEL_287;
            }
            v176 = GameRoutine_651b90(*v9, 72 * v175, 16, 0);
            v171 = (_QWORD*)*v204;
            v169 = v204[1];
            v177 = v169 - *v204;
          }
          else {
            v176 = 0;
            v177 = v169 - *v204;
          }
          v178 = v176 + v172;
          *(_QWORD*)(v178 + 48) = v162;
          *(_QWORD*)(v178 + 56) = v163;
          v179 = v178 - v177;
          *(_DWORD*)(v178 + 40) = v170;
          *(_QWORD*)(v178 + 64) = v164;
          *(_QWORD*)v178 = v202;
          *(_QWORD*)(v178 + 8) = v215;
          *(_QWORD*)(v178 + 16) = v220;
          *(_QWORD*)(v178 + 24) = v219;
          *(_QWORD*)(v178 + 32) = v205;
          if (v171 == (_QWORD*)v169) {
            v190 = v204;
          }
          else {
            v180 = v171;
            v181 = v179;
            do {
              v182 = *v180;
              *(_QWORD*)(v181 + 16) = 0;
              *(_QWORD*)(v181 + 24) = 0;
              *(_QWORD*)v181 = v182;
              *(_QWORD*)(v181 + 8) = v180[1];
              *(_QWORD*)(v181 + 16) = v180[2];
              *(_QWORD*)(v181 + 24) = v180[3];
              v180[1] = 0;
              v180[2] = 0;
              v183 = v180[4];
              v180[3] = 0;
              v180[4] = 0;
              *(_QWORD*)(v181 + 32) = v183;
              LODWORD(v183) = *((_DWORD*)v180 + 10);
              *(_QWORD*)(v181 + 56) = 0;
              *(_QWORD*)(v181 + 64) = 0;
              *(_DWORD*)(v181 + 40) = v183;
              *(_QWORD*)(v181 + 48) = v180[6];
              *(_QWORD*)(v181 + 56) = v180[7];
              *(_QWORD*)(v181 + 64) = v180[8];
              v180[7] = 0;
              v180[8] = 0;
              v180[6] = 0;
              v180 += 9;
              v181 += 72LL;
            } while (v180 != (_QWORD*)v169);
            do {
              v184 = v171[6];
              if (v184 != 0) {
                v171[7] = v184;
                v185 = 128;
                if (*(_QWORD*)(*v9 + 200) == 0) {
                  v185 = 56;
                }
                GameRoutine_1a0a4e0(*v9 + v185);
              }
              v186 = v171[4];
              v171[4] = 0;
              if (v186 != 0) {
                v187 = 128;
                if (*(_QWORD*)(*v9 + 200) == 0) {
                  v187 = 56;
                }
                GameRoutine_1a0a4e0(*v9 + v187);
              }
              v188 = v171[1];
              if (v188 != 0) {
                v171[2] = v188;
                v189 = 128;
                if (*(_QWORD*)(*v9 + 200) == 0) {
                  v189 = 56;
                }
                GameRoutine_1a0a4e0(*v9 + v189);
              }
              v171 += 9;
            } while (v171 != (_QWORD*)v169);
            v190 = v204;
            v171 = (_QWORD*)*v204;
          }
          v64 = v178 + 72;
          *v190 = v179;
          v190[1] = v178 + 72;
          v190[2] = v176 + 72 * v175;
          if (v171 != nullptr) {
            v191 = 128;
            if (*(_QWORD*)(*v9 + 200) == 0) {
              v191 = 56;
            }
            GameRoutine_1a0a4e0(*v9 + v191);
          }
          v167 = v204;
          v62 = v198;
        }
        v167[1] = v64;
        v63 = v206;
      }
      v63 += 5;
    } while (v63 != v62);
  }
  v192 = 128;
  if (*(_QWORD*)(*v9 + 200) == 0) {
    v192 = 56;
  }
  result = GameRoutine_1a0a4e0(*v9 + v192);
  v193 = v229;
  if (v229 != nullptr) {
    v194 = v230;
    if (v229 != v230) {
      do {
        v195 = *((_QWORD*)v194 - 4);
        if (v195 != 0) {
          *((_QWORD*)v194 - 3) = v195;
          if (*(_QWORD*)(*v9 + 200) != 0) {
            v196 = 128;
          }
          else {
            v196 = 56;
          }
          GameRoutine_1a0a4e0(*v9 + v196);
        }
        v194 -= 40;
      } while (v194 != v193);
    }
    v197 = 128;
    if (*(_QWORD*)(*v9 + 200) == 0) {
      v197 = 56;
    }
    return GameRoutine_1a0a4e0(*v9 + v197);
  }
  return result;
}

__int64 GameHr_1343c40(__int64 a1, __int64* a2)
{
  __int64 v2;
  void (***v5)(_QWORD);
  void (***v6)(_QWORD);
  void (***v7)(_QWORD);
  void (***v8)(_QWORD);
  void (***v9)(_QWORD);
  void (***v10)(_QWORD);
  int v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned int v23;
  __int64 v24;
  unsigned __int64 v25;
  _QWORD* v26;
  _QWORD* v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  int v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  bool v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  int v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  unsigned __int64 v62;
  unsigned __int64 v63;
  _QWORD* v64;
  _QWORD* v65;
  unsigned __int64 v66;
  __int64 v67;
  _QWORD* v68;
  _QWORD* v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  int v74;
  __int64 v75;
  unsigned __int64 v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  __int64 v81;
  __int64 v82;
  unsigned __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  _QWORD* v86;
  __int64 v87;
  unsigned __int64 v88;
  __int64 v89;
  int v90;
  __int64 v91;
  int v92;
  char* v93;
  _DWORD* v94;
  __int64 v95;
  __int64 v96;
  int v97;
  char v98;
  char* v99;
  __int64* v100;
  unsigned __int64 v101;
  _QWORD* v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  int v106;
  __int64 v107;
  int v108;
  char* v109;
  __int64 v110;
  char* v111;
  __int64 v112;
  unsigned __int64 v113;
  unsigned __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  _QWORD* v119;
  _QWORD* v120;
  unsigned __int64 v121;
  __int64 v122;
  int v123;
  __int64 v124;
  __int64 v125;
  int v126;
  __int64 v127;
  int v128;
  _DWORD* v129;
  __int64 v130;
  __int64 v131;
  int v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  int v136;
  unsigned __int64 v137;
  __int64 v138;
  __int64 v139;
  int v140;
  int v141;
  int v142;
  char* v143;
  __int64 v144;
  unsigned __int64 v145;
  unsigned __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  signed __int64 v151;
  __int64 v152;
  char* v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  int v159;
  __int64 v160;
  int v161;
  __int64 v162;
  unsigned int v163;
  int v164;
  int v165;
  __int64 v166;
  __int64 v167;
  __int16 v168;
  __int16 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  unsigned __int8 v173;
  int v174;
  unsigned int v175;
  __int16 v176;
  __int16 v177;
  unsigned int v178;
  __int64 v179;
  int v180;
  __int64 v181;
  __int64 v182;
  int v183;
  int v184;
  int v185;
  int v186;
  int v187;
  int v188;
  int v189;
  int v190;
  int v191;
  int v192;
  int v193;
  __int128 v194;
  __int64 v195;
  __int64 v196;
  int v197;
  int v198;
  int v199;
  __int64 v200;
  __int64 v201;
  int v202;
  char v203;
  long double v204;
  __int64 v205;
  int v206;
  __int16 v207;
  __int16 v208;
  __int64 v209;
  int v210;
  __int16 v211;
  __int64 v212;
  __int64 v213;
  unsigned int v215;
  _QWORD v216[2];
  __int64 v217;
  char* v218;

  v2 = *a2;
  LODWORD(v217) = 0;
  (*(void (**)(__int64*, __int64*))(v2 + 16))(a2, &v217);
  v5 = *(void (****)(_QWORD))(a1 + 568);
  *(_QWORD*)a1 = 0;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_BYTE*)(a1 + 546) = 0;
  *(_QWORD*)(a1 + 80) = 0xFFFFFFFF00000000LL;
  *(_QWORD*)(a1 + 88) = 0;
  v6 = *(void (****)(_QWORD))(a1 + 576);
  if (v5 != v6) {
    v7 = v6 - 278;
    do {
      (**v7)(v7);
      v43 = v7 == v5;
      v7 -= 278;
    } while (!v43);
  }
  *(_QWORD*)(a1 + 576) = v5;
  v8 = *(void (****)(_QWORD))(a1 + 616);
  v9 = *(void (****)(_QWORD))(a1 + 608);
  *(_QWORD*)(a1 + 552) = 0;
  if (v9 != v8) {
    v10 = v8 - 278;
    do {
      (**v10)(v10);
      v43 = v10 == v9;
      v10 -= 278;
    } while (!v43);
  }
  v11 = *(unsigned __int8*)(a1 + 512);
  *(_QWORD*)(a1 + 616) = v9;
  *(_QWORD*)(a1 + 640) = 0;
  *(_DWORD*)(a1 + 648) = 0;
  if (v11 != 0) {
    *(_BYTE*)(a1 + 512) = 0;
  }
  *(_DWORD*)(a1 + 540) = 0;
  *(_WORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  v12 = *((int*)a2 + 5);
  v13 = a2[1];
  *((_DWORD*)a2 + 5) = v12 + 1;
  v14 = *(unsigned __int8*)(v13 + v12);
  *((_DWORD*)a2 + 5) = v12 + 2;
  v15 = *(unsigned __int8*)(v13 + v12 + 1);
  *((_DWORD*)a2 + 5) = v12 + 3;
  v16 = v15 | ((unsigned __int64)*(unsigned __int8*)(v13 + v12 + 2) << 8);
  *((_DWORD*)a2 + 5) = v12 + 4;
  v17 = v16 | ((unsigned __int64)*(unsigned __int8*)(v13 + v12 + 3) << 16);
  *((_DWORD*)a2 + 5) = v12 + 5;
  v18 = v17 | ((unsigned __int64)*(unsigned __int8*)(v13 + v12 + 4) << 24);
  *((_DWORD*)a2 + 5) = v12 + 6;
  v19 = v18 | ((unsigned __int64)*(unsigned __int8*)(v13 + v12 + 5) << 32);
  *((_DWORD*)a2 + 5) = v12 + 7;
  v20 = v19 | ((unsigned __int64)*(unsigned __int8*)(v13 + v12 + 6) << 40);
  *((_DWORD*)a2 + 5) = v12 + 8;
  v21 = *(unsigned __int8*)(v13 + v12 + 7);
  *((_DWORD*)a2 + 5) = v12 + 9;
  v22 = v20 | (v21 << 48) |
        ((unsigned __int64)*(unsigned __int8*)(v13 + v12 + 8) << 56);
  if (v22 == 0) {
    goto LABEL_36;
  }
  v23 = 0;
  if (GameData_21fe038 == 0 || GameData_21fe048 == 0) {
    goto LABEL_247;
  }
  v24 = GameData_21fe038 - 1;
  if ((GameData_21fe038 & (GameData_21fe038 - 1)) != 0) {
    v25 = v22;
    if (v22 >= GameData_21fe038) {
      v25 = v22 % GameData_21fe038;
    }
  }
  else {
    v25 = v24 & v22;
  }
  v26 = *(_QWORD**)(GameData_21fe030 + 8 * v25);
  if (v26 == nullptr) {
    goto LABEL_237;
  }
  v27 = (_QWORD*)*v26;
  if (v27 == nullptr) {
    goto LABEL_237;
  }
  if ((GameData_21fe038 & v24) == 0) {
    while (1) {
      v29 = v27[1];
      if (v29 == v22) {
        if (v27[2] == v22) {
          goto LABEL_34;
        }
      }
      else if ((v29 & v24) != v25) {
        goto LABEL_237;
      }
      v27 = (_QWORD*)*v27;
      v23 = 0;
      if (v27 == nullptr) {
        goto LABEL_247;
      }
    }
  }
  while (1) {
    v28 = v27[1];
    if (v28 == v22) {
      break;
    }
    if (v28 >= GameData_21fe038) {
      v28 %= (unsigned __int64)GameData_21fe038;
    }
    if (v28 != v25) {
      goto LABEL_237;
    }
  LABEL_23:
    v27 = (_QWORD*)*v27;
    if (v27 == nullptr) {
      goto LABEL_237;
    }
  }
  if (v27[2] != v22) {
    goto LABEL_23;
  }
LABEL_34:
  v30 = v27[3];
  if (v30 == 0) {
    goto LABEL_237;
  }
  *(_QWORD*)(a1 + 88) = v30;
  *(_QWORD*)(a1 + 96) = *(_QWORD*)(v30 + 40);
LABEL_36:
  if (v14 < 0x18) {
    v46 = *((_DWORD*)a2 + 5);
    v32 = a2[1];
    if (v14 < 5) {
      goto LABEL_97;
    }
    v47 = v46 + 3LL;
    v48 = v46 + 4LL;
    v49 = v46 + 5LL;
    v50 = v46 + 6LL;
    *((_DWORD*)a2 + 5) = v46 + 1;
    v51 = *(unsigned __int8*)(v32 + v46);
    *((_DWORD*)a2 + 5) = v46 + 2;
    v52 = v46 + 7LL;
    v53 = *(unsigned __int8*)(v32 + v46 + 1LL);
    *((_DWORD*)a2 + 5) = v47;
    v54 = *(unsigned __int8*)(v32 + v46 + 2LL);
    *((_DWORD*)a2 + 5) = v48;
    v55 = *(unsigned __int8*)(v32 + v47);
    *((_DWORD*)a2 + 5) = v49;
    v56 = *(unsigned __int8*)(v32 + v48);
    *((_DWORD*)a2 + 5) = v50;
    v57 = *(unsigned __int8*)(v32 + v49);
    *((_DWORD*)a2 + 5) = v52;
    v58 = *(unsigned __int8*)(v32 + v50);
    *((_DWORD*)a2 + 5) = v46 + 8;
    v59 = v51 | (v53 << 8) | (v54 << 16) | (v55 << 24) | (v56 << 32) |
          (v57 << 40) | (v58 << 48) |
          ((unsigned __int64)*(unsigned __int8*)(v32 + v52) << 56);
    if (v59 != 0) {
      v60 = *(_QWORD*)(GameData_21c9f00 + 96);
      if (v60 != 0 && *(_QWORD*)(GameData_21c9f00 + 112) != 0) {
        v62 = v60 - 1;
        if ((v60 & (v60 - 1)) != 0) {
          v63 = v59;
          if (v59 >= v60) {
            v63 = v59 % v60;
          }
        }
        else {
          v63 = v62 & v59;
        }
        v68 = *(_QWORD**)(*(_QWORD*)(GameData_21c9f00 + 88) + 8 * v63);
        if (v68 != nullptr) {
          v69 = (_QWORD*)*v68;
          if (v69 != nullptr) {
            if ((v60 & v62) == 0) {
              while (1) {
                v72 = v69[1];
                if (v72 == v59) {
                  if (v69[2] == v59) {
                    goto LABEL_239;
                  }
                }
                else if ((v72 & v62) != v63) {
                  goto LABEL_87;
                }
                v69 = (_QWORD*)*v69;
                v71 = 0;
                if (v69 == nullptr) {
                  goto LABEL_88;
                }
              }
            }
            do {
              v70 = v69[1];
              if (v70 == v59) {
                if (v69[2] == v59) {
                LABEL_239:
                  v71 = v69[3];
                  goto LABEL_88;
                }
              }
              else {
                if (v70 >= v60) {
                  v70 %= v60;
                }
                if (v70 != v63) {
                  break;
                }
              }
              v69 = (_QWORD*)*v69;
            } while (v69 != nullptr);
          }
        }
      }
    }
  LABEL_87:
    v71 = 0;
    goto LABEL_88;
  }
  v31 = *((int*)a2 + 5);
  v32 = a2[1];
  *((_DWORD*)a2 + 5) = v31 + 1;
  v33 = *(unsigned __int8*)(v32 + v31);
  *((_DWORD*)a2 + 5) = v31 + 2;
  v34 = v33 | ((unsigned __int64)*(unsigned __int8*)(v32 + v31 + 1) << 8);
  *((_DWORD*)a2 + 5) = v31 + 3;
  v35 = v34 | ((unsigned __int64)*(unsigned __int8*)(v32 + v31 + 2) << 16);
  *((_DWORD*)a2 + 5) = v31 + 4;
  v36 = v35 | ((unsigned __int64)*(unsigned __int8*)(v32 + v31 + 3) << 24);
  *((_DWORD*)a2 + 5) = v31 + 5;
  v37 = v36 | ((unsigned __int64)*(unsigned __int8*)(v32 + v31 + 4) << 32);
  *((_DWORD*)a2 + 5) = v31 + 6;
  v38 = v37 | ((unsigned __int64)*(unsigned __int8*)(v32 + v31 + 5) << 40);
  *((_DWORD*)a2 + 5) = v31 + 7;
  v39 = v38 | ((unsigned __int64)*(unsigned __int8*)(v32 + v31 + 6) << 48);
  v40 = v31 + 8;
  *((_DWORD*)a2 + 5) = v31 + 8;
  v41 = v39 | ((unsigned __int64)*(unsigned __int8*)(v32 + v31 + 7) << 56);
  if (v41 == 0) {
  LABEL_90:
    v73 = v40;
    v74 = v40 + 8;
    *((_DWORD*)a2 + 5) = v73 + 1;
    v75 = *(unsigned __int8*)(v32 + v73);
    *((_DWORD*)a2 + 5) = v73 + 2;
    v76 = v75 | ((unsigned __int64)*(unsigned __int8*)(v32 + v73 + 1) << 8);
    *((_DWORD*)a2 + 5) = v73 + 3;
    v77 = v76 | ((unsigned __int64)*(unsigned __int8*)(v32 + v73 + 2) << 16);
    *((_DWORD*)a2 + 5) = v73 + 4;
    v78 = v77 | ((unsigned __int64)*(unsigned __int8*)(v32 + v73 + 3) << 24);
    v79 = v73 + 5;
    *((_DWORD*)a2 + 5) = v73 + 5;
    v80 = v78 | ((unsigned __int64)*(unsigned __int8*)(v32 + v73 + 4) << 32);
    v81 = v73 + 6;
    v73 += 7;
    *((_DWORD*)a2 + 5) = v81;
    v82 = *(unsigned __int8*)(v32 + v79);
    *((_DWORD*)a2 + 5) = v73;
    v83 = v80 | (v82 << 40);
    v84 = *(unsigned __int8*)(v32 + v81);
    *((_DWORD*)a2 + 5) = v74;
    v85 = v83 | (v84 << 48) |
          ((unsigned __int64)*(unsigned __int8*)(v32 + v73) << 56);
    if (v85 != 0) {
      v86 = nullptr;
      if (GameData_21f2520 != 0 && GameData_21f2530 != 0) {
        v87 = GameData_21f2520 - 1;
        if ((GameData_21f2520 & (GameData_21f2520 - 1)) != 0) {
          v88 = v85;
          if (v85 >= GameData_21f2520) {
            v88 = v85 % GameData_21f2520;
          }
        }
        else {
          v88 = v87 & v85;
        }
        v119 = *(_QWORD**)(GameData_21f2518 + 8 * v88);
        if (v119 == nullptr || (v120 = (_QWORD*)*v119) == nullptr) {
        LABEL_143:
          v86 = nullptr;
          goto LABEL_144;
        }
        if ((GameData_21f2520 & v87) == 0) {
          while (1) {
            v122 = v120[1];
            if (v122 == v85) {
              if (v120[2] == v85) {
                goto LABEL_238;
              }
            }
            else if ((v122 & v87) != v88) {
              goto LABEL_143;
            }
            v120 = (_QWORD*)*v120;
            if (v120 == nullptr) {
              goto LABEL_143;
            }
          }
        }
        while (1) {
          v121 = v120[1];
          if (v121 == v85) {
            if (v120[2] == v85) {
            LABEL_238:
              v86 = v120 + 3;
              break;
            }
          }
          else {
            if (v121 >= GameData_21f2520) {
              v121 %= (unsigned __int64)GameData_21f2520;
            }
            if (v121 != v88) {
              goto LABEL_143;
            }
          }
          v120 = (_QWORD*)*v120;
          if (v120 == nullptr) {
            goto LABEL_143;
          }
        }
      }
    LABEL_144:
      *(_QWORD*)(a1 + 104) = v86;
      v74 = *((_DWORD*)a2 + 5);
      v32 = a2[1];
    }
    goto LABEL_145;
  }
  v42 = *(_QWORD*)(GameData_21c9f00 + 96);
  v43 = v42 == 0 || *(_QWORD*)(GameData_21c9f00 + 112) == 0;
  if (v43) {
    goto LABEL_237;
  }
  v44 = v42 - 1;
  if ((v42 & (v42 - 1)) != 0) {
    v45 = v41;
    if (v41 >= v42) {
      v45 = v41 % v42;
    }
  }
  else {
    v45 = v44 & v41;
  }
  v64 = *(_QWORD**)(*(_QWORD*)(GameData_21c9f00 + 88) + 8 * v45);
  if (v64 == nullptr || (v65 = (_QWORD*)*v64) == nullptr) {
  LABEL_237:
    v23 = 0;
    goto LABEL_247;
  }
  if ((v42 & v44) == 0) {
    while (1) {
      v67 = v65[1];
      if (v67 == v41) {
        if (v65[2] == v41) {
          goto LABEL_236;
        }
      }
      else if ((v67 & v44) != v45) {
        goto LABEL_237;
      }
      v65 = (_QWORD*)*v65;
      v23 = 0;
      if (v65 == nullptr) {
        goto LABEL_247;
      }
    }
  }
  while (1) {
    v66 = v65[1];
    if (v66 == v41) {
      break;
    }
    if (v66 >= v42) {
      v66 %= v42;
    }
    if (v66 != v45) {
      goto LABEL_237;
    }
  LABEL_60:
    v65 = (_QWORD*)*v65;
    v23 = 0;
    if (v65 == nullptr) {
      goto LABEL_247;
    }
  }
  if (v65[2] != v41) {
    goto LABEL_60;
  }
LABEL_236:
  v71 = v65[3];
  if (v71 == 0) {
    goto LABEL_237;
  }
LABEL_88:
  *(_QWORD*)(a1 + 96) = v71;
  if (v14 >= 0xE) {
    v40 = *((_DWORD*)a2 + 5);
    v32 = a2[1];
    goto LABEL_90;
  }
  v74 = *((_DWORD*)a2 + 5);
  v32 = a2[1];
  v46 = v74;
  if (v14 >= 7) {
  LABEL_145:
    v123 = v74 + 4;
    v217 = 0;
    v218 = &GameData_1a9f09e;
    v124 = v74 + 1LL;
    v125 = v74 + 2LL;
    *((_DWORD*)a2 + 5) = v124;
    v126 = *(unsigned __int8*)(v32 + v74);
    *((_DWORD*)a2 + 5) = v125;
    v127 = v74 + 3LL;
    LODWORD(v124) = *(unsigned __int8*)(v32 + v124);
    *((_DWORD*)a2 + 5) = v127;
    LODWORD(v124) = v126 | ((_DWORD)v124 << 8);
    v128 = *(unsigned __int8*)(v32 + v125);
    *((_DWORD*)a2 + 5) = v74 + 4;
    v217 = (unsigned int)v124 | (v128 << 16) |
           (*(unsigned __int8*)(v32 + v127) << 24);
    v129 = (_DWORD*)GameRoutine_132ffa0(&v217);
    if (v129 == nullptr) {
      if ((*(_QWORD*)(a1 + 96) | *(_QWORD*)(a1 + 552)) != 0) {
        goto LABEL_149;
      }
      v129 = (_DWORD*)GameRoutine_13305c0(0);
    }
    GameRoutine_133f780(a1, v129, 1);
    v123 = *((_DWORD*)a2 + 5);
    v32 = a2[1];
  LABEL_149:
    v216[0] = 0;
    v216[1] = &GameData_1a9f09e;
    v130 = v123 + 1LL;
    v131 = v123 + 2LL;
    *((_DWORD*)a2 + 5) = v130;
    v132 = *(unsigned __int8*)(v32 + v123);
    *((_DWORD*)a2 + 5) = v131;
    v133 = v123 + 3LL;
    LODWORD(v130) = *(unsigned __int8*)(v32 + v130);
    *((_DWORD*)a2 + 5) = v133;
    LODWORD(v130) =
        v132 | ((_DWORD)v130 << 8) | (*(unsigned __int8*)(v32 + v131) << 16);
    *((_DWORD*)a2 + 5) = v123 + 4;
    v216[0] = (unsigned int)v130 | (*(unsigned __int8*)(v32 + v133) << 24);
    *(_QWORD*)(a1 + 8) = GameRoutine_132ffa0(v216);
    v134 = *((int*)a2 + 5);
    *((_DWORD*)a2 + 5) = v134 + 1;
    v135 = a2[1];
    v136 = *(unsigned __int8*)(v135 + v134);
    if (*(_BYTE*)(v135 + v134) != 0) {
      v215 = v14;
      v98 = 0;
      v99 = nullptr;
      v100 = nullptr;
      v137 = 0;
      while (1) {
        v138 = *((int*)a2 + 5);
        v139 = a2[1];
        v218 = &GameData_1a9f09e;
        *((_DWORD*)a2 + 5) = v138 + 1;
        v140 = *(unsigned __int8*)(v139 + v138);
        *((_DWORD*)a2 + 5) = v138 + 2;
        v141 = v140 | (*(unsigned __int8*)(v139 + v138 + 1) << 8);
        *((_DWORD*)a2 + 5) = v138 + 3;
        v142 = *(unsigned __int8*)(v139 + v138 + 2);
        *((_DWORD*)a2 + 5) = v138 + 4;
        v217 =
            v141 | (v142 << 16) | (*(unsigned __int8*)(v139 + v138 + 3) << 24);
        v110 = GameRoutine_132ffa0(&v217);
        if (v110 != 0) {
          if ((unsigned __int64)v100 >= v137) {
            v143 = (char*)((char*)v100 - v99);
            v144 = ((char*)v100 - v99) >> 3;
            v145 = v144 + 1;
            if ((unsigned __int64)(v144 + 1) >> 61 != 0) {
              goto LABEL_248;
            }
            if ((__int64)(v137 - (_QWORD)v99) >> 2 > v145) {
              v145 = (__int64)(v137 - (_QWORD)v99) >> 2;
            }
            if (v137 - (unsigned __int64)v99 >= 0x7FFFFFFFFFFFFFF8LL) {
              v146 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v146 = v145;
            }
            if (v146 != 0) {
              if (v146 >> 61 != 0) {
                goto LABEL_249;
              }
              v147 = v110;
              v148 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v146,
                                        16, 0);
              v110 = v147;
            }
            else {
              v148 = 0;
            }
            v137 = v148 + 8 * v146;
            v149 = (__int64)&v143[v148 + -8 * v144];
            *(_QWORD*)&v143[v148] = v110;
            v100 = (__int64*)&v143[v148 + 8];
            v110 = GameRoutine_1a0b950(v149, v99, v143);
            if (v99 != nullptr) {
              v150 = 128;
              if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                v150 = 56;
              }
              v110 = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v150);
            }
            v99 = (char*)v149;
          }
          else {
            *v100++ = v110;
          }
        }
        else {
          v98 = 1;
        }
        if (--v136 == 0) {
          goto LABEL_171;
        }
      }
    }
    goto LABEL_184;
  }
LABEL_97:
  v89 = v46 + 1LL;
  *((_DWORD*)a2 + 5) = v89;
  v90 = *(unsigned __int8*)(v32 + v46);
  v91 = v46 + 2LL;
  *((_DWORD*)a2 + 5) = v91;
  v92 = v90 | (*(unsigned __int8*)(v32 + v89) << 8);
  if (v92 != 0) {
    v93 = (char*)(v32 + v91);
    *((_DWORD*)a2 + 5) = v91 + v92;
  }
  else {
    v93 = nullptr;
  }
  v218 = v93;
  v217 = GameRoutine_7a86e0(v93);
  v94 = (_DWORD*)GameRoutine_132ffa0(&v217);
  if (v94 != nullptr) {
    GameRoutine_133f780(a1, v94, 1);
  }
  v95 = *((int*)a2 + 5);
  *((_DWORD*)a2 + 5) = v95 + 1;
  v96 = a2[1];
  v97 = *(unsigned __int8*)(v96 + v95);
  if (*(_BYTE*)(v96 + v95) != 0) {
    v215 = v14;
    v98 = 0;
    v99 = nullptr;
    v100 = nullptr;
    v101 = 0;
    v102 = (_QWORD*)GameData_212bf68;
    do {
      v103 = *((int*)a2 + 5);
      v104 = a2[1];
      v105 = v103 + 1;
      *((_DWORD*)a2 + 5) = v103 + 1;
      v106 = *(unsigned __int8*)(v104 + v103);
      v107 = v103 + 2;
      *((_DWORD*)a2 + 5) = v107;
      v108 = v106 | (*(unsigned __int8*)(v104 + v105) << 8);
      if (v108 != 0) {
        v109 = (char*)(v104 + v107);
        *((_DWORD*)a2 + 5) = v107 + v108;
      }
      else {
        v109 = nullptr;
      }
      v218 = v109;
      v217 = GameRoutine_7a86e0(v109);
      v110 = GameRoutine_132ffa0(&v217);
      if (v110 != 0) {
        if ((unsigned __int64)v100 >= v101) {
          v111 = (char*)((char*)v100 - v99);
          v112 = ((char*)v100 - v99) >> 3;
          v113 = v112 + 1;
          if ((unsigned __int64)(v112 + 1) >> 61 != 0) {
            goto LABEL_248;
          }
          if ((__int64)(v101 - (_QWORD)v99) >> 2 > v113) {
            v113 = (__int64)(v101 - (_QWORD)v99) >> 2;
          }
          if (v101 - (unsigned __int64)v99 >= 0x7FFFFFFFFFFFFFF8LL) {
            v114 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v114 = v113;
          }
          if (v114 != 0) {
            if (v114 >> 61 != 0) {
            LABEL_249:
              GameRoutine_60a210(v110);
            }
            v115 = v110;
            v116 = GameRoutine_651b90(*v102, 8 * v114, 16, 0);
            v110 = v115;
          }
          else {
            v116 = 0;
          }
          v101 = v116 + 8 * v114;
          v117 = (__int64)&v111[v116 + -8 * v112];
          *(_QWORD*)&v111[v116] = v110;
          v100 = (__int64*)&v111[v116 + 8];
          v110 = GameRoutine_1a0b950(v117, v99, v111);
          if (v99 != nullptr) {
            v118 = 128;
            if (*(_QWORD*)(*v102 + 200LL) == 0) {
              v118 = 56;
            }
            v110 = GameRoutine_1a0a4e0(*v102 + v118);
          }
          v99 = (char*)v117;
        }
        else {
          *v100++ = v110;
        }
      }
      else {
        v98 = 1;
      }
      --v97;
    } while (v97 != 0);
  LABEL_171:
    if ((v98 & 1) != 0 || (v151 = (char*)v100 - v99, v100 == (__int64*)v99)) {
      v14 = v215;
      v152 = 0;
      v153 = nullptr;
    }
    else {
      v14 = v215;
      if (v151 < 0) {
      LABEL_248:
        GameRoutine_8875e0(v110);
      }
      v152 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, (char*)v100 - v99,
                                16, 0);
      GameRoutine_1a0b950(v152, v99, (char*)v100 - v99);
      v153 = (char*)(v152 + v151);
    }
    GameRoutine_888970(a1 + 24, v152, v153, (__int64)&v153[-v152] >> 3);
    if (v152 != 0) {
      v154 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v154 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v154);
    }
    if (v99 != nullptr) {
      v155 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v155 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v155);
    }
  }
LABEL_184:
  v156 = *((int*)a2 + 5);
  *((_DWORD*)a2 + 5) = v156 + 1;
  *(_DWORD*)(a1 + 80) = *(unsigned __int8*)(a2[1] + v156);
  v157 = *((int*)a2 + 5);
  if (v14 < 0x17) {
    ++v157;
  }
  *((_DWORD*)a2 + 5) = v157 + 1;
  *(_BYTE*)(a1 + 672) = *(_BYTE*)(a2[1] + v157) != 0;
  v158 = *((int*)a2 + 5);
  *((_DWORD*)a2 + 5) = v158 + 1;
  *(_BYTE*)(a1 + 673) = *(_BYTE*)(a2[1] + v158) != 0;
  v159 = *((_DWORD*)a2 + 5);
  if (v14 <= 0x15) {
    *((_DWORD*)a2 + 5) = ++v159;
    if (v14 == 0) {
      goto LABEL_246;
    }
  }
  *((_DWORD*)a2 + 5) = v159 + 1;
  *(_DWORD*)(a1 + 84) = *(char*)(a2[1] + v159);
  if (v14 - 8 <= 0xC) {
    v160 = *((int*)a2 + 5);
    v161 = v160 + 3;
    v162 = a2[1] + v160;
    *((_DWORD*)a2 + 5) = v161;
    v163 = *(unsigned __int8*)(v162 + 2);
    if (*(_BYTE*)(v162 + 2) != 0) {
      v164 = v163 & 7;
      if (v163 >= 8) {
        v165 = v163 & 0xF8;
        v161 += 8 * (v165 - 8) + 64;
        do {
          v165 -= 8;
        } while (v165 != 0);
      }
      if (v164 != 0) {
        v161 += 8 * (v164 - 1) + 8;
        do {
          --v164;
        } while (v164 != 0);
      }
      *((_DWORD*)a2 + 5) = v161;
    }
  }
  if (v14 >= 0x13) {
    v166 = *((int*)a2 + 5);
    v167 = a2[1];
    *((_DWORD*)a2 + 5) = v166 + 1;
    v168 = *(unsigned __int8*)(v167 + v166);
    *((_DWORD*)a2 + 5) = v166 + 2;
    v169 = v168 | (*(unsigned __int8*)(v167 + v166 + 1) << 8);
    goto LABEL_201;
  }
  if (v14 >= 0xD) {
    v170 = *((int*)a2 + 5);
    *((_DWORD*)a2 + 5) = v170 + 1;
    v169 = *(unsigned __int8*)(a2[1] + v170);
    goto LABEL_201;
  }
  if (v14 >= 0xA) {
    v205 = *((int*)a2 + 5);
    *((_DWORD*)a2 + 5) = v205 + 1;
    v206 = *(unsigned __int8*)(a2[1] + v205);
    v207 = *(_WORD*)(a1 + 544);
    if (v206 != 0) {
      if ((v207 & 8) == 0) {
        v208 = v207 | 8;
        goto LABEL_222;
      }
    }
    else if ((v207 & 8) != 0) {
      v208 = v207 & 0xFFF7;
    LABEL_222:
      *(_WORD*)(a1 + 544) = v208;
    }
  }
  if (v14 == 3) {
    v212 = a1 + 560;
    *((_DWORD*)a2 + 5) += 4;
    goto LABEL_229;
  }
  if (v14 != 12) {
    if (v14 > 5) {
      goto LABEL_202;
    }
    if (v14 < 2) {
      goto LABEL_246;
    }
    GameRoutine_9962a0(a1 + 560, a2);
    if (v14 < 4) {
      goto LABEL_246;
    }
    v212 = a1 + 600;
  LABEL_229:
    GameRoutine_9962a0(v212, a2);
    goto LABEL_246;
  }
  v209 = *((int*)a2 + 5);
  *((_DWORD*)a2 + 5) = v209 + 1;
  v210 = *(unsigned __int8*)(a2[1] + v209);
  v211 = *(_WORD*)(a1 + 544);
  if (v210 != 0) {
    if ((v211 & 4) == 0) {
      v169 = v211 | 4;
      goto LABEL_201;
    }
  }
  else if ((v211 & 4) != 0) {
    v169 = v211 & 0xFFFB;
  LABEL_201:
    *(_WORD*)(a1 + 544) = v169;
  }
LABEL_202:
  *(_QWORD*)(a1 + 552) = GameRoutine_6e5dc0(a2);
  GameRoutine_9962a0(a1 + 560, a2);
  GameRoutine_9962a0(a1 + 600, a2);
  if (v14 >= 9) {
    v171 = *((int*)a2 + 5);
    v172 = a2[1];
    *((_DWORD*)a2 + 5) = v171 + 1;
    v173 = *(_BYTE*)(v172 + v171);
    *((_DWORD*)a2 + 5) = v171 + 2;
    v174 = *(unsigned __int8*)(v172 + v171 + 1);
    *((_DWORD*)a2 + 5) = v171 + 3;
    v175 = *(unsigned __int8*)(v172 + v171 + 2);
    *((_DWORD*)a2 + 5) = v171 + 4;
    v176 = *(unsigned __int8*)(v172 + v171 + 3);
    *((_DWORD*)a2 + 5) = v171 + 5;
    v177 = *(unsigned __int8*)(v172 + v171 + 4);
    *((_DWORD*)a2 + 5) = v171 + 6;
    LOWORD(v172) = *(unsigned __int8*)(v172 + v171 + 5);
    *((_DWORD*)a2 + 5) = v171 + 8;
    v178 = v173 | ((unsigned __int8)v174 << 8);
    *(_WORD*)(a1 + 644) = v175 >> 2;
    *(_WORD*)(a1 + 642) = v176;
    *(_WORD*)(a1 + 646) = (((v174 << 8) | (v175 << 16)) >> 12) & 0x3F;
    *(_WORD*)(a1 + 648) = (v178 >> 6) & 0x3F;
    *(_WORD*)(a1 + 640) = v177 | ((_WORD)v172 << 8);
    *(_WORD*)(a1 + 650) = v178 & 0x3F;
    if (v14 >= 0xB) {
      v179 = *((int*)a2 + 5);
      *((_DWORD*)a2 + 5) = v179 + 1;
      v180 = *(unsigned __int8*)(a2[1] + v179);
      if (*(unsigned __int8*)(a1 + 512) != v180) {
        *(_BYTE*)(a1 + 512) = v180;
      }
      if (v14 >= 0xF) {
        v181 = *((int*)a2 + 5);
        v182 = a2[1];
        *((_DWORD*)a2 + 5) = v181 + 1;
        v183 = *(unsigned __int8*)(v182 + v181);
        *((_DWORD*)a2 + 5) = v181 + 2;
        v184 = v183 | (*(unsigned __int8*)(v182 + v181 + 1) << 8);
        *((_DWORD*)a2 + 5) = v181 + 3;
        v185 = v184 | (*(unsigned __int8*)(v182 + v181 + 2) << 16);
        *((_DWORD*)a2 + 5) = v181 + 4;
        v186 = v185 | (*(unsigned __int8*)(v182 + v181 + 3) << 24);
        *((_DWORD*)a2 + 5) = v181 + 5;
        v187 = *(unsigned __int8*)(v182 + v181 + 4);
        *((_DWORD*)a2 + 5) = v181 + 6;
        v188 = v187 | (*(unsigned __int8*)(v182 + v181 + 5) << 8);
        *((_DWORD*)a2 + 5) = v181 + 7;
        v189 = v188 | (*(unsigned __int8*)(v182 + v181 + 6) << 16);
        *((_DWORD*)a2 + 5) = v181 + 8;
        v190 = v189 | (*(unsigned __int8*)(v182 + v181 + 7) << 24);
        *((_DWORD*)a2 + 5) = v181 + 9;
        v191 = *(unsigned __int8*)(v182 + v181 + 8);
        *((_DWORD*)a2 + 5) = v181 + 10;
        v192 = v191 | (*(unsigned __int8*)(v182 + v181 + 9) << 8);
        *((_DWORD*)a2 + 5) = v181 + 11;
        v193 = *(unsigned __int8*)(v182 + v181 + 10);
        *((_DWORD*)a2 + 5) = v181 + 12;
        LODWORD(v181) = *(unsigned __int8*)(v182 + v181 + 11);
        *(_DWORD*)(a1 + 64) = v186;
        *(_DWORD*)(a1 + 68) = v190;
        v194 = *(_OWORD*)(a1 + 64);
        *((_QWORD*)&v194 + 1) =
            v192 | (unsigned int)(v193 << 16) | ((_DWORD)v181 << 24);
        *(_OWORD*)(a1 + 64) = v194;
        if (v14 != 15) {
          v195 = a2[1];
          v218 = &GameData_1a9f09e;
          v196 = *((int*)a2 + 5);
          *((_DWORD*)a2 + 5) = v196 + 1;
          v197 = *(unsigned __int8*)(v195 + v196);
          *((_DWORD*)a2 + 5) = v196 + 2;
          v198 = v197 | (*(unsigned __int8*)(v195 + v196 + 1) << 8);
          *((_DWORD*)a2 + 5) = v196 + 3;
          v199 = *(unsigned __int8*)(v195 + v196 + 2);
          *((_DWORD*)a2 + 5) = v196 + 4;
          v217 = v198 | (v199 << 16) |
                 (*(unsigned __int8*)(v195 + v196 + 3) << 24);
          v200 = GameRoutine_132ffa0(&v217);
          if (v200 != 0) {
            *(_QWORD*)(a1 + 16) = v200;
          }
          if (v14 - 17 <= 2) {
            ++*((_DWORD*)a2 + 5);
          }
          if (v14 >= 0x12) {
            v201 = *((int*)a2 + 5);
            *((_DWORD*)a2 + 5) = v201 + 1;
            v202 = *(unsigned __int8*)(a2[1] + v201);
            *(_BYTE*)(a1 + 546) = v202;
            v203 = GameRoutine_8680c0();
            if (v202 != 0) {
              if ((v203 & 1) != 0) {
                *(_QWORD*)&v204 = 0;
                goto LABEL_242;
              }
              GameRoutine_81b040(a1 + 112, 0.0);
            }
            else if ((v203 & 1) != 0) {
              LODWORD(v204) = 1.0;
            LABEL_242:
              GameRoutine_81ae00(a1 + 112, v204);
            }
            else {
              GameRoutine_81aee0(a1 + 112, 0.0);
            }
            v213 = GameRoutine_65f710(a2);
            *(_WORD*)(a1 + 528) = WORD2(v213);
            *(_WORD*)(a1 + 530) = BYTE3(v213);
            *(_WORD*)(a1 + 532) = ((unsigned int)v213 >> 18) & 0x3F;
            *(_WORD*)(a1 + 534) = ((unsigned int)v213 >> 12) & 0x3F;
            *(_WORD*)(a1 + 536) = ((unsigned int)v213 >> 6) & 0x3F;
            *(_WORD*)(a1 + 538) = v213 & 0x3F;
          }
        }
      }
    }
  }
LABEL_246:
  v23 = 1;
LABEL_247:
  (*(void (**)(__int64*, _QWORD))(*a2 + 24))(a2, 0);
  return v23;
}

__int64 GameHr_1354d40(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v5;
  __int64* v6;
  unsigned __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD v20[4];
  _QWORD* v21;
  int v22;

  v2 = *a2;
  v22 = 0;
  result = *(unsigned int*)(v2 + 84);
  if ((result & 0x80000000) == 0) {
    v20[0] = GameData_1fb0e30;
    v20[1] = &v22;
    v21 = v20;
    GameRoutine_971f60(result, v20);
    result = (__int64)v21;
    if (v21 == v20) {
      v5 = 32;
    }
    else {
      if (v21 == nullptr) {
        goto LABEL_7;
      }
      v5 = 40;
    }
    result = (*(__int64 (**)(void))(*v21 + v5))();
  LABEL_7:
    if (v22 != 0) {
      return result;
    }
  }
  v6 = *(__int64**)(a1 + 8);
  v8 = (_QWORD*)v6[1];
  v7 = v6[2];
  if ((unsigned __int64)v8 >= v7) {
    v10 = *v6;
    v11 = (__int64)v8 - *v6;
    v12 = (v11 >> 3) + 1;
    if (v12 >> 61 != 0) {
      GameRoutine_888610(result);
    }
    v13 = v7 - v10;
    v14 = GameData_212bf68;
    if (v13 >> 2 > v12) {
      v12 = v13 >> 2;
    }
    if ((unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFF8LL) {
      v15 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v15 = v12;
    }
    if (v15 != 0) {
      if (v15 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v16 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v15, 16, 0);
    }
    else {
      v16 = 0;
    }
    v17 = v16 + 8 * v15;
    v18 = v16 + v11 - 8 * (v11 >> 3);
    *(_QWORD*)(v16 + v11) = v2;
    v9 = v16 + v11 + 8;
    result = GameRoutine_1a0b950(v18, v10, v11);
    *v6 = v18;
    v6[1] = v9;
    v6[2] = v17;
    if (v10 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v19 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)v14 + v19);
    }
  }
  else {
    *v8 = v2;
    v9 = (__int64)(v8 + 1);
  }
  v6[1] = v9;
  return result;
}

__int64 GameHr_1389860(__int64 result)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  _BYTE* v6;
  _BYTE* v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  _QWORD* v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  char* v18;
  char* v19;
  __int64 v20;
  char* v21;
  unsigned __int64 v22;
  __int64 v23;
  char* v24;
  signed __int64 v25;
  __int64 v26;
  char v27;
  __int64 v28;
  __int64 v29;
  char* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _BYTE* v35;
  _BYTE* v36;
  _BYTE* v37;
  _BYTE* v38;
  unsigned int v39;
  __int64 v40;
  __int64 v41;
  __int128 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  char* v48;
  __int64 v49;
  __int64 v50;
  _QWORD v51[2];

  v1 = *(unsigned __int8*)(result + 8);
  if ((v1 & 1) != 0) {
    v2 = *(_QWORD*)(result + 16);
  }
  else {
    v2 = v1 >> 1;
  }
  if (v2 != 0) {
    v3 = *(_QWORD*)(result + 104);
    v4 = result;
    v5 = (_QWORD*)GameData_212c638;
    if (v3 == 0) {
      goto LABEL_54;
    }
    v6 = *(_BYTE**)(v3 + 96);
    if (v6 != nullptr && *v6 != 0 && (v7 = *(_BYTE**)(v3 + 104)) != nullptr &&
        *v7 != 0) {
      v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
                                 8LL) +
                      64LL);
      v9 = GameRoutine_1a09c70(v7);
      GameRoutine_c21740(&v49, v8, v7, v9);
      if (v49 != 0) {
        v10 = *(__int64**)(v49 + 88);
        v11 = *(__int64**)(v49 + 96);
        if (v10 != v11) {
          v12 = (_QWORD*)GameData_212bf68;
          while (1) {
            v13 = *v10;
            v14 = GameRoutine_1a09c70(*v10 + 16);
            if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
              GameRoutine_60a1d0(v14);
            }
            v15 = v14;
            if (v14 >= 0x17) {
              break;
            }
            v16 = (char*)&v46 + 1;
            LOBYTE(v46) = 2 * v14;
            if (v14 != 0) {
              goto LABEL_22;
            }
          LABEL_23:
            v16[v15] = 0;
            v18 = *(char**)(v4 + 232);
            if (v18 != *(char**)(v4 + 240)) {
              v19 = v18 + 8;
              while (1) {
                v20 = (*(_BYTE*)(*(_QWORD*)v18 + 24LL) & 1) != 0
                          ? *(_QWORD*)(*(_QWORD*)v18 + 40LL)
                          : *(_QWORD*)v18 + 25LL;
                v21 = v48;
                v22 = (unsigned __int64)(unsigned __int8)v46 >> 1;
                if ((v46 & 1) != 0) {
                  v22 = v47;
                }
                else {
                  v21 = (char*)&v46 + 1;
                }
                v51[0] = v21;
                v51[1] = v22;
                v23 = GameRoutine_7a86e0(v20);
                if (v23 == GameRoutine_7a88a0(v51)) {
                  break;
                }
                v18 += 8;
                v19 += 8;
                if (v18 == *(char**)(v4 + 240)) {
                  goto LABEL_33;
                }
              }
              if (*(_QWORD*)v18 != 0) {
                (*(void (**)(_QWORD))(**(_QWORD**)v18 + 8LL))(*(_QWORD*)v18);
                *(_QWORD*)v18 = 0;
              }
              v24 = *(char**)(v4 + 240);
              v25 = v24 - v19;
              if (v24 != v19) {
                GameRoutine_1a0b940(v19 - 8, v19, v24 - v19);
              }
              *(_QWORD*)(v4 + 240) = &v19[v25 - 8];
              if ((v46 & 1) == 0) {
                goto LABEL_13;
              }
            LABEL_40:
              if (v48 != nullptr) {
                v26 = 128;
                if (*(_QWORD*)(*v12 + 200LL) == 0) {
                  v26 = 56;
                }
                GameRoutine_1a0a4e0(*v12 + v26);
              }
              goto LABEL_13;
            }
          LABEL_33:
            if ((v46 & 1) != 0) {
              goto LABEL_40;
            }
          LABEL_13:
            if (++v10 == v11) {
              goto LABEL_76;
            }
          }
          if ((v14 | 7) == 0x17) {
            v17 = 26;
          }
          else {
            v17 = (v14 | 7) + 1;
          }
          v16 = (char*)GameRoutine_651b90(*v12, v17, 16, 0);
          v47 = v15;
          v48 = v16;
          v46 = v17 | 1;
        LABEL_22:
          GameRoutine_1a0b940(v16, v13 + 16, v15);
          goto LABEL_23;
        }
      LABEL_76:
        v27 = 0;
        v28 = v50;
        if (v50 == 0) {
          goto LABEL_48;
        }
        goto LABEL_46;
      }
    }
    else {
      v49 = 0;
      v50 = 0;
    }
    v27 = 1;
    v28 = v50;
    if (v50 == 0) {
    LABEL_48:
      if ((v27 & 1) == 0) {
        v29 = *v5;
        v30 = *(_QWORD*)(*(_QWORD*)(v4 + 104) + 104LL) != 0
                  ? *(char**)(*(_QWORD*)(v4 + 104) + 104LL)
                  : &GameData_1a9f09e;
        v31 = GameRoutine_1a09c70(v30);
        v32 = *(_QWORD*)(*(_QWORD*)(v29 + 32) - 8LL);
        v46 = (__int64)v30;
        v47 = v31;
        v33 = *(_QWORD*)(v32 + 64);
        v34 = GameRoutine_c22ba0(v33 + 104, &v46);
        if (v34 != 0) {
          GameRoutine_c22d40(v33 + 104, v34);
        }
      }
    LABEL_54:
      result = GameRoutine_a85600(*v5);
      if ((*(_BYTE*)(v4 + 8) & 1) != 0) {
        v35 = *(_BYTE**)(v4 + 24);
        *(_QWORD*)(v4 + 16) = 0;
      }
      else {
        v35 = (_BYTE*)(v4 + 9);
        *(_BYTE*)(v4 + 8) = 0;
      }
      *v35 = 0;
      if ((*(_BYTE*)(v4 + 32) & 1) != 0) {
        v36 = *(_BYTE**)(v4 + 48);
        *(_QWORD*)(v4 + 40) = 0;
      }
      else {
        v36 = (_BYTE*)(v4 + 33);
        *(_BYTE*)(v4 + 32) = 0;
      }
      *v36 = 0;
      if ((*(_BYTE*)(v4 + 56) & 1) != 0) {
        v37 = *(_BYTE**)(v4 + 72);
        *(_QWORD*)(v4 + 64) = 0;
      }
      else {
        v37 = (_BYTE*)(v4 + 57);
        *(_BYTE*)(v4 + 56) = 0;
      }
      *v37 = 0;
      if ((*(_BYTE*)(v4 + 80) & 1) != 0) {
        v38 = *(_BYTE**)(v4 + 96);
        *(_QWORD*)(v4 + 88) = 0;
      }
      else {
        v38 = (_BYTE*)(v4 + 81);
        *(_BYTE*)(v4 + 80) = 0;
      }
      *v38 = 0;
      *(_QWORD*)(v4 + 104) = 0;
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                memory_order_acquire) &
           1) == 0) {
        result = GameRoutine_1a09fd0(&GameData_21a6130);
        if ((_DWORD)result != 0) {
          v45 = *((_QWORD*)GameData_212c540 + 1);
          *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
          *((_QWORD*)&GameData_21a6120 + 1) = v45;
          result = GameRoutine_1a09fe0(&GameData_21a6130);
        }
      }
      *(_DWORD*)(v4 + 128) = 0;
      v39 = DWORD2(GameData_21a6120);
      v41 = *(_QWORD*)(v4 + 136);
      v40 = *(_QWORD*)(v4 + 144);
      *(_QWORD*)(v4 + 112) = GameData_21a6120;
      v42 = *(_OWORD*)(v4 + 112);
      *((_QWORD*)&v42 + 1) = v39;
      *(_OWORD*)(v4 + 112) = v42;
      if (v41 == v40) {
      LABEL_68:
        *(_QWORD*)(v4 + 144) = v41;
        return result;
      }
      while (1) {
        result = *(_QWORD*)(v40 - 16);
        v44 = v40 - 48;
        if (v40 - 48 == result) {
          v43 = 32;
        }
        else {
          if (result == 0) {
            goto LABEL_72;
          }
          v43 = 40;
        }
        result = (*(__int64 (**)(void))(*(_QWORD*)result + v43))();
      LABEL_72:
        v40 = v44;
        if (v44 == v41) {
          goto LABEL_68;
        }
      }
    }
  LABEL_46:
    if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
      GameRoutine_1a09c50(v28);
    }
    goto LABEL_48;
  }
  return result;
}

#pragma GCC visibility pop
