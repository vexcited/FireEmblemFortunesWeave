#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern _UNKNOWN GameData_1a8718c;
extern _UNKNOWN GameData_1ab1a04;
extern _UNKNOWN GameData_1aef152;
extern _UNKNOWN GameData_1af2e0a;
extern __int64 (*GameData_1fec818[])();
extern __int64 (*GameData_205b2e0[])();
extern __int64 GameData_212bf68;
extern __int64* GameData_212c018[2];
extern __int64 (***GameData_212c3c8)();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212cea0;
extern __int64* GameData_212ea58;
extern __int64 GameData_21a60d8;
extern __int64 GameData_21caab0;
extern __int64 GameData_2203490;
extern __int64 GameData_2265ee0;
__int64 GameRoutine_13381e0(_QWORD);
void __attribute__((noreturn)) GameRoutine_135bf80(long double, long double);
float GameRoutine_13e2420(_QWORD);
__int64 GameRoutine_1486c20(float);
void __attribute__((noreturn)) GameRoutine_14cfad0(long double);
void __attribute__((noreturn)) GameRoutine_14cfaf0(void);
__int64 GameRoutine_158d440(__int64 result, __int64*, __int64, char);
__int64 GameRoutine_158dbc0(__int64 result, _WORD*, __int64, char);
__int64 GameRoutine_15de630(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 GameRoutine_60a270(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 GameRoutine_634d80(_QWORD);
void __attribute__((noreturn)) GameRoutine_64aa00(void);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6544c0(_QWORD, _QWORD);
__int64 GameRoutine_65c580(_QWORD, _QWORD);
__int64 GameRoutine_6e8bc0(_QWORD, _QWORD);
__int64 GameRoutine_7a86e0(_QWORD);
void __attribute__((noreturn)) GameRoutine_cdcc10(_QWORD);
__int64 GameRoutine_e6cfa0(void);
__int64 GameRoutine_e7d890(void);
__int64 GameRoutine_e9a800(_QWORD, _QWORD);
__int64 GameRoutine_edb740(_QWORD);
__int64 GameRoutine_f47000(_QWORD);
__int64 GameRoutine_f47100(_QWORD);
__int64 GameRoutine_f47270(_QWORD);

__int64 GameHr_14ce840(__int64* a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  long double v5;
  long double v6;
  unsigned __int8* v7;
  char* v8;
  unsigned __int64 v9;
  unsigned int v10;
  char* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  int v24;
  __int64 v25;
  int v26;
  __int64 v27;
  unsigned __int8* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 (***v32)();
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  char* v39;
  __int64 v40;
  __int64 v41;
  int v42;
  __int64 v43;
  __int64 v44;
  char* v45;
  __int64 v46;
  __int64 v47;
  unsigned __int8* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 (***v52)();
  unsigned __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  __int64 v60;
  char* v61;
  char* v62;
  __int64 v63;
  char* v64;
  _QWORD* v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64* v71;
  unsigned __int64 v72;
  __int64 v73;
  char* v74;
  unsigned __int64 v75;
  char* v76;
  unsigned __int64 v77;
  __int64 v78;
  __int64 v79;
  char* v80;
  _QWORD* v81;
  __int64 v82;
  int v83;
  int v84;
  int v85;
  int v86;
  __int64 v87;
  __int64 v88;
  int v89;
  unsigned __int8* v90;
  unsigned __int64 v91;
  char* v92;
  char* v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 (***v98)();
  __int64 v99;
  char* v100;
  unsigned __int64 v101;
  unsigned __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 (***v106)();
  __int64 v107;
  __int64 v108;
  unsigned __int8* v109;
  __int64 v110;
  int v111;
  unsigned __int64 v112;
  long double* v113;
  int v114;
  long double* v115;
  unsigned int v116;
  __int64 v117;
  unsigned __int64 v118;
  unsigned __int64 v119;
  __int64 v120;
  long double* v121;
  long double* v122;
  __int128 v123;
  long double* v124;
  long double* v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  long double* v129;
  long double* v130;
  long double* v131;
  __int64 v132;
  int v133;
  unsigned __int64 v134;
  int v135;
  long double* v136;
  unsigned __int8* v137;
  __int64 v138;
  unsigned __int64 v139;
  __int64 v140;
  __int64 v141;
  long double* v142;
  long double* v143;
  long double* v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  char* v149;
  _QWORD* v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  signed __int64 v154;
  __int64 v155;
  char* v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  signed __int64 v160;
  __int64 v161;
  long double* v162;
  __int64 v163;
  _QWORD* v164;
  __int64 v165;
  char* v166;
  __int64 v167;
  __int64* v168;
  __int64* v169;
  unsigned __int64 v170;
  _QWORD* v171;
  int v172;
  int v173;
  __int64 v174;
  char* v175;
  unsigned __int64 v176;
  unsigned __int64 v177;
  __int64 v178;
  char* v179;
  char* v180;
  char* v181;
  char* v182;
  char* v183;
  char* v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  char* v188;
  char v189;
  __int64 v190;
  __int64 v192;
  int v193;
  __int64 v194;
  int v195;
  char* v196;
  int v197;
  unsigned int v198;
  __int64* v199;
  int v200;
  __int64 v201;
  long double v202;
  __int64 v203;
  __int64 v204;
  unsigned __int8* v205;
  unsigned int v206;
  long double v207;
  long double* v208;
  long double v209;
  int v210;
  unsigned __int8* v211;
  unsigned int v212;
  int v213;
  long double* v214;
  unsigned int v215;
  unsigned __int8* v216;
  __int64 v217;
  __int64 v218;
  char* v219;
  __int64 v220;
  __int64 v221;
  char* v222;
  __int64 v223;
  __int64 v224;
  __int64 (***v225)();
  int v226;

  v3 = *GameData_212c018[0];
  v223 = a2;
  v224 = GameRoutine_1a09c70(a2);
  v226 = 0;
  v225 = GameData_212c3c8;
  v4 = GameRoutine_6544c0(v3, &v223);
  v7 = *(unsigned __int8**)(v4 + 592);
  v192 = v4;
  if (v7 != nullptr) {
    v8 = (char*)*a1;
    v9 = *(unsigned __int16*)(v7 + 1);
    v10 = *v7;
    v213 = *(unsigned __int16*)(v7 + 1);
    if (v9 > (a1[2] - *a1) >> 6) {
      v11 = (char*)a1[1];
      v4 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v9 << 6, 16, 0);
      v12 = v4 + (v9 << 6);
      v13 = v4;
      v14 = v4 + v11 - v8;
      if (v11 != v8) {
        v15 = v8;
        v16 = (_QWORD*)v4;
        do {
          v17 = *(_QWORD*)v15;
          v18 = *((_QWORD*)v15 + 2);
          v16[1] = *((_QWORD*)v15 + 1);
          v16[2] = v18;
          *v16 = v17;
          *((_QWORD*)v15 + 1) = 0;
          *((_QWORD*)v15 + 2) = 0;
          *(_QWORD*)v15 = 0;
          v19 = *((_QWORD*)v15 + 5);
          v16[4] = *((_QWORD*)v15 + 4);
          v16[5] = v19;
          v20 = *((_QWORD*)v15 + 6);
          v15 += 64;
          v16[6] = v20;
          v16 += 8;
        } while (v15 != v11);
        do {
          if ((*v8 & 1) != 0 && *((_QWORD*)v8 + 2) != 0) {
            if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
              v21 = 128;
            }
            else {
              v21 = 56;
            }
            v4 = GameRoutine_1a0a4e0(GameData_2265ee0 + v21);
          }
          v8 += 64;
        } while (v8 != v11);
        v8 = (char*)*a1;
      }
      *a1 = v13;
      a1[1] = v14;
      a1[2] = v12;
      if (v8 != nullptr) {
        v22 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v22 = 56;
        }
        v4 = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v22);
      }
    }
    v199 = a1;
    v216 = v7;
    v198 = v10;
    v205 = v7 + 2;
    if ((_DWORD)v9 != 0) {
      v23 = 3;
      v24 = 0;
      v211 = v7 + 8;
      while (1) {
        v27 = v23;
        v28 = &v7[v23];
        v29 = *(unsigned int*)v28;
        v30 = *((int*)v28 + 1);
        v31 = *(unsigned __int16*)&v7[v30];
        if (*(_WORD*)&v7[v30] != 0) {
          if ((unsigned int)v31 >= 0x17) {
            if ((v31 | 7) == 0x17) {
              v33 = 26;
            }
            else {
              v33 = (v31 | 7) + 1;
            }
            v32 = (__int64 (***)())GameRoutine_651b90(GameData_2265ee0, v33, 16,
                                                      0);
            v224 = v31;
            v225 = v32;
            v223 = v33 | 1;
          }
          else {
            v32 = (__int64 (***)())((char*)&v223 + 1);
            LOBYTE(v223) = 2 * v31;
          }
          v4 = GameRoutine_1a0b940(v32, &v205[v30], v31);
          *((_BYTE*)v32 + v31) = 0;
        }
        else {
          v224 = 0;
          v225 = nullptr;
          v223 = 0;
        }
        v34 = v211[v27];
        if (v10 != 0) {
          LODWORD(v35) = v27 + 9;
          if (v10 != 1) {
            goto LABEL_50;
          }
        }
        else {
          LODWORD(v35) = v27 + 10;
        }
        v36 = (int)v35;
        v37 = *(int*)&v7[(int)v35];
        v38 = *(unsigned __int16*)&v7[v37];
        if (*(_WORD*)&v7[v37] != 0) {
          if ((unsigned int)v38 >= 0x17) {
            if ((v38 | 7) == 0x17) {
              v40 = 26;
            }
            else {
              v40 = (v38 | 7) + 1;
            }
            v39 = (char*)GameRoutine_651b90(GameData_2265ee0, v40, 16, 0);
            v221 = v38;
            v222 = v39;
            v220 = v40 | 1;
          }
          else {
            v39 = (char*)&v220 + 1;
            LOBYTE(v220) = 2 * v38;
          }
          v4 = GameRoutine_1a0b940(v39, &v205[v37], v38);
          v39[v38] = 0;
          if ((v220 & 1) != 0 && v222 != nullptr) {
            v41 = 128;
            if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
              v41 = 56;
            }
            v4 = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v41);
          }
        }
        else {
          v221 = 0;
          v222 = nullptr;
          v220 = 0;
        }
        v35 = v36 + 4;
        if (v10 == 0) {
          v43 = *(int*)&v7[v35];
          v44 = *(unsigned __int16*)&v7[v43];
          if (*(_WORD*)&v7[v43] != 0) {
            if ((unsigned int)v44 >= 0x17) {
              if ((v44 | 7) == 0x17) {
                v46 = 26;
              }
              else {
                v46 = (v44 | 7) + 1;
              }
              v45 = (char*)GameRoutine_651b90(GameData_2265ee0, v46, 16, 0);
              v218 = v44;
              v219 = v45;
              v217 = v46 | 1;
            }
            else {
              v45 = (char*)&v217 + 1;
              LOBYTE(v217) = 2 * v44;
            }
            v4 = GameRoutine_1a0b940(v45, &v205[v43], v44);
            v45[v44] = 0;
            if ((v217 & 1) != 0 && v219 != nullptr) {
              v47 = 128;
              if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                v47 = 56;
              }
              v4 = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v47);
            }
          }
          else {
            v218 = 0;
            v219 = nullptr;
            v217 = 0;
          }
          LODWORD(v35) = v36 + 8;
          v42 = v36 + 16;
          goto LABEL_65;
        }
      LABEL_50:
        v42 = v35 + 4;
      LABEL_65:
        LODWORD(v5) = *(_DWORD*)&v7[(int)v35];
        v48 = &v7[v42];
        v49 = v29 | (v34 << 32);
        a1 = v199;
        v50 = v223;
        v51 = v224;
        v52 = v225;
        DWORD2(v5) = *(_DWORD*)v48;
        v53 = v199[1];
        v54 = v199[2];
        if (v53 < v54) {
          *(_QWORD*)v53 = v223;
          *(_QWORD*)(v53 + 8) = v51;
          v7 = v216;
          v10 = v198;
          v25 = v53 + 64;
          v26 = v213;
          *(_QWORD*)(v53 + 16) = v52;
          *(long double*)(v53 + 32) = v5;
          *(_QWORD*)(v53 + 48) = v49;
        }
        else {
          v55 = v53 - *v199;
          v56 = (v55 >> 6) + 1;
          if (v56 >> 58 != 0) {
            GameRoutine_14cfad0(v5);
          }
          v57 = v54 - *v199;
          v209 = v5;
          if (v57 >> 5 > v56) {
            v56 = v57 >> 5;
          }
          if ((unsigned __int64)v57 >= 0x7FFFFFFFFFFFFFC0LL) {
            v56 = 0x3FFFFFFFFFFFFFFLL;
          }
          if (v56 >> 58 != 0) {
          LABEL_239:
            GameRoutine_60a210(v4);
          }
          v58 = v56 << 6;
          v4 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v56 << 6, 16, 0);
          v59 = v4 + v55;
          v5 = v209;
          v60 = v4;
          *(_QWORD*)(v59 + 16) = v52;
          *(_QWORD*)(v59 + 48) = v49;
          v61 = (char*)*v199;
          v62 = (char*)v199[1];
          *(_QWORD*)v59 = v50;
          *(_QWORD*)(v59 + 8) = v51;
          *(long double*)(v59 + 32) = v209;
          v63 = v59 + v61 - v62;
          if (v61 == v62) {
            v71 = v199;
            v7 = v216;
            v10 = v198;
          }
          else {
            v7 = v216;
            v10 = v198;
            v64 = v61;
            v65 = (_QWORD*)(v59 + v61 - v62);
            do {
              v66 = *(_QWORD*)v64;
              v67 = *((_QWORD*)v64 + 2);
              v65[1] = *((_QWORD*)v64 + 1);
              v65[2] = v67;
              *v65 = v66;
              *((_QWORD*)v64 + 1) = 0;
              *((_QWORD*)v64 + 2) = 0;
              *(_QWORD*)v64 = 0;
              v68 = *((_QWORD*)v64 + 5);
              v65[4] = *((_QWORD*)v64 + 4);
              v65[5] = v68;
              v69 = *((_QWORD*)v64 + 6);
              v64 += 64;
              v65[6] = v69;
              v65 += 8;
            } while (v64 != v62);
            do {
              if ((*v61 & 1) != 0 && *((_QWORD*)v61 + 2) != 0) {
                v70 = 128;
                if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                  v70 = 56;
                }
                v4 = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v70);
              }
              v61 += 64;
            } while (v61 != v62);
            v71 = v199;
            v61 = (char*)*v199;
          }
          v72 = v60 + v58;
          v26 = v213;
          v25 = v59 + 64;
          *v71 = v63;
          v71[1] = v25;
          v71[2] = v72;
          a1 = v71;
          if (v61 != nullptr) {
            v73 = 128;
            if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
              v73 = 56;
            }
            v4 = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v73);
          }
        }
        v23 = v42 + 4;
        ++v24;
        a1[1] = v25;
        if (v24 == v26) {
          goto LABEL_89;
        }
      }
    }
    v23 = 3;
  LABEL_89:
    v74 = (char*)a1[3];
    v75 = *(unsigned __int16*)&v7[v23];
    if (0x8E38E38E38E38E39LL * ((a1[5] - (__int64)v74) >> 3) < v75) {
      v76 = (char*)a1[4];
      v4 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 72 * v75, 16, 0);
      v77 = v4 + 72 * v75;
      v78 = v4;
      v79 = v4 + v76 - v74;
      if (v76 != v74) {
        v80 = v74;
        v81 = (_QWORD*)v4;
        do {
          *v81 = *(_QWORD*)v80;
          v81[1] = *((_QWORD*)v80 + 1);
          v81[2] = *((_QWORD*)v80 + 2);
          *((_QWORD*)v80 + 1) = 0;
          *((_QWORD*)v80 + 2) = 0;
          *(_QWORD*)v80 = 0;
          v81[3] = *((_QWORD*)v80 + 3);
          v81[4] = *((_QWORD*)v80 + 4);
          v81[5] = *((_QWORD*)v80 + 5);
          *((_QWORD*)v80 + 4) = 0;
          *((_QWORD*)v80 + 5) = 0;
          *((_QWORD*)v80 + 3) = 0;
          v81[6] = *((_QWORD*)v80 + 6);
          v81[7] = *((_QWORD*)v80 + 7);
          v81[8] = *((_QWORD*)v80 + 8);
          *((_QWORD*)v80 + 7) = 0;
          *((_QWORD*)v80 + 8) = 0;
          *((_QWORD*)v80 + 6) = 0;
          v80 += 72;
          v81 += 9;
        } while (v80 != v76);
        do {
          v4 = GameRoutine_13381e0(v74);
          v74 += 72;
        } while (v74 != v76);
        v74 = (char*)a1[3];
      }
      a1[3] = v78;
      a1[4] = v79;
      a1[5] = v77;
      if (v74 != nullptr) {
        v82 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v82 = 56;
        }
        v4 = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v82);
      }
    }
    if ((_DWORD)v75 != 0) {
      v83 = v23 + 2;
      v84 = 0;
      v195 = v75;
      if (v198 != 0) {
        v85 = 4;
      }
      else {
        v85 = 8;
      }
      v212 = v85;
      v210 = v85 + 4;
      if (v198 != 0) {
        v86 = 8;
      }
      else {
        v86 = 12;
      }
      v193 = v86;
      do {
        v88 = *(unsigned __int16*)&v7[v83];
        v89 = v83 + 2;
        v197 = v84;
        if (v88 != 0) {
          v4 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 24 * v88, 16, 0);
          v90 = &v7[v89];
          v91 = v4 + 24 * v88;
          v92 = (char*)v4;
          v93 = (char*)v4;
          while (1) {
            v96 = *(int*)v90;
            v90 += 4;
            v95 = v96;
            v97 = *(unsigned __int16*)&v216[v96];
            if (*(_WORD*)&v216[v96] != 0) {
              if ((unsigned int)v97 >= 0x17) {
                if ((v97 | 7) == 0x17) {
                  v99 = 26;
                }
                else {
                  v99 = (v97 | 7) + 1;
                }
                v98 = (__int64 (***)())GameRoutine_651b90(GameData_2265ee0, v99,
                                                          16, 0);
                v224 = v97;
                v225 = v98;
                v223 = v99 | 1;
              }
              else {
                v98 = (__int64 (***)())((char*)&v223 + 1);
                LOBYTE(v223) = 2 * v97;
              }
              v4 = GameRoutine_1a0b940(v98, &v205[v95], v97);
              *((_BYTE*)v98 + v97) = 0;
              if ((unsigned __int64)v93 < v91) {
              LABEL_113:
                v94 = v224;
                *(_QWORD*)v93 = v223;
                *((_QWORD*)v93 + 1) = v94;
                *((_QWORD*)v93 + 2) = v225;
                goto LABEL_114;
              }
            }
            else {
              v224 = 0;
              v225 = nullptr;
              v223 = 0;
              if ((unsigned __int64)v93 < v91) {
                goto LABEL_113;
              }
            }
            v100 = (char*)(v93 - v92);
            v101 = 1 - 0x5555555555555555LL * ((v93 - v92) >> 3);
            if (v101 > 0xAAAAAAAAAAAAAAALL) {
              goto LABEL_240;
            }
            if (0x5555555555555556LL * ((__int64)(v91 - (_QWORD)v92) >> 3) >
                v101) {
              v101 = 0x5555555555555556LL * ((__int64)(v91 - (_QWORD)v92) >> 3);
            }
            if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v91 - (_QWORD)v92) >> 3) >=
                0x555555555555555LL) {
              v102 = 0xAAAAAAAAAAAAAAALL;
            }
            else {
              v102 = v101;
            }
            if (v102 != 0) {
              if (v102 > 0xAAAAAAAAAAAAAAALL) {
                goto LABEL_239;
              }
              v103 = GameRoutine_651b90(GameData_2265ee0, 24 * v102, 16, 0);
            }
            else {
              v103 = 0;
            }
            v104 = v223;
            v105 = v224;
            v93 = &v100[v103];
            v223 = 0;
            v224 = 0;
            *(_QWORD*)v93 = v104;
            *((_QWORD*)v93 + 1) = v105;
            v106 = v225;
            v225 = nullptr;
            *((_QWORD*)v93 + 2) = v106;
            v91 = v103 + 24 * v102;
            v4 = GameRoutine_1a0b950(v103, v92, v100);
            if (v92 != nullptr) {
              v107 = 128;
              if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                v107 = 56;
              }
              v4 = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v107);
              if ((v223 & 1) != 0 && v225 != nullptr) {
                v108 = 128;
                if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                  v108 = 56;
                }
                v4 = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v108);
              }
            }
            v92 = (char*)v103;
          LABEL_114:
            v93 += 24;
            v89 += 4;
            LODWORD(v88) = v88 - 1;
            if ((_DWORD)v88 == 0) {
              goto LABEL_145;
            }
          }
        }
        v93 = nullptr;
        v92 = nullptr;
      LABEL_145:
        v109 = v216;
        v110 = *(unsigned __int16*)&v216[v89];
        v111 = v89 + 2;
        if (v110 != 0) {
          v4 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 16 * v110, 16, 0);
          v112 = v4 + 16 * v110;
          v113 = (long double*)v4;
          v114 = 0;
          v115 = (long double*)v4;
          while (1) {
            v116 = *(_DWORD*)&v109[v111];
            LODWORD(v6) = *(_DWORD*)&v109[v111 + (unsigned __int64)v212];
            if ((unsigned __int64)v113 < v112) {
              v214 = v115;
              *(_QWORD*)&v5 = v116;
              *((_QWORD*)&v5 + 1) = LODWORD(v6);
              *v113 = v5;
            }
            else {
              v117 = v113 - v115;
              v118 = v117 + 1;
              if ((unsigned __int64)(v117 + 1) >> 60 != 0) {
                goto LABEL_241;
              }
              v206 = v116;
              v215 = LODWORD(v6);
              if ((__int64)(v112 - (_QWORD)v115) >> 3 > v118) {
                v118 = (__int64)(v112 - (_QWORD)v115) >> 3;
              }
              if (v112 - (unsigned __int64)v115 >= 0x7FFFFFFFFFFFFFF0LL) {
                v119 = 0xFFFFFFFFFFFFFFFLL;
              }
              else {
                v119 = v118;
              }
              if (v119 >> 60 != 0) {
                goto LABEL_239;
              }
              v120 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 16 * v119,
                                        16, 0);
              v121 = (long double*)(v120 + (char*)v113 - (char*)v115);
              v122 = &v121[-v117];
              *(_QWORD*)&v123 = v206;
              *((_QWORD*)&v123 + 1) = v215;
              *(_OWORD*)v121 = v123;
              if (v115 != v113) {
                v124 = v115;
                v125 = v122;
                do {
                  *((_QWORD*)v125 + 1) = *((_QWORD*)v124 + 1);
                  v126 = *(_QWORD*)v124++;
                  *(_QWORD*)v125++ = v126;
                } while (v124 != v113);
              }
              v112 = v120 + 16 * v119;
              v127 = 128;
              if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                v127 = 56;
              }
              v4 = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v127);
              v214 = v122;
              v115 = v122;
              v109 = v216;
              v113 = v121;
            }
            ++v113;
            ++v114;
            v111 += v210;
            if (v114 == (_DWORD)v110) {
              goto LABEL_164;
            }
          }
        }
        v214 = nullptr;
        v113 = nullptr;
      LABEL_164:
        v128 = *(unsigned __int16*)&v109[v111];
        v83 = v111 + 2;
        if (v198 >= 3) {
          v129 = v214;
          if ((_DWORD)v128 != 0) {
            v132 = 32 * v128;
            v200 = v128;
            v4 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 32 * v128, 16,
                                    0);
            v133 = v200;
            v134 = v4 + v132;
            v131 = (long double*)v4;
            v135 = 0;
            v136 = (long double*)v4;
            while (1) {
              DWORD1(v5) = 0;
              HIDWORD(v5) = 0;
              v137 = &v216[v83];
              LODWORD(v5) = *(_DWORD*)v137;
              LODWORD(v6) = *((_DWORD*)v137 + 2);
              DWORD2(v5) = *((_DWORD*)v137 + 1);
              DWORD2(v6) = *((_DWORD*)v137 + 3);
              if ((unsigned __int64)v131 < v134) {
                *v131 = v5;
                v131[1] = v6;
                v130 = v136;
              }
              else {
                v138 = ((char*)v131 - (char*)v136) >> 5;
                v139 = v138 + 1;
                if ((unsigned __int64)(v138 + 1) >> 59 != 0) {
                  goto LABEL_242;
                }
                v202 = v6;
                v207 = v5;
                if ((__int64)(v134 - (_QWORD)v136) >> 4 > v139) {
                  v139 = (__int64)(v134 - (_QWORD)v136) >> 4;
                }
                if (v134 - (unsigned __int64)v136 >= 0x7FFFFFFFFFFFFFE0LL) {
                  v139 = 0x7FFFFFFFFFFFFFFLL;
                }
                if (v139 >> 59 != 0) {
                  goto LABEL_239;
                }
                v140 = 32 * v139;
                v141 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 32 * v139,
                                          16, 0);
                v142 = (long double*)(v141 + (char*)v131 - (char*)v136);
                v130 = &v142[-2 * v138];
                *v142 = v207;
                v142[1] = v202;
                if (v136 != v131) {
                  v143 = v136;
                  v144 = v130;
                  do {
                    *((_QWORD*)v144 + 1) = *((_QWORD*)v143 + 1);
                    *(_QWORD*)v144 = *(_QWORD*)v143;
                    *((_QWORD*)v144 + 3) = *((_QWORD*)v143 + 3);
                    v145 = *((_QWORD*)v143 + 2);
                    v143 += 2;
                    *((_QWORD*)v144 + 2) = v145;
                    v144 += 2;
                  } while (v143 != v131);
                }
                v134 = v141 + v140;
                v146 = 128;
                if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                  v146 = 56;
                }
                v4 = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v146);
                v131 = v142;
                v129 = v214;
                v133 = v200;
                v136 = v130;
              }
              v83 += 16;
              v131 += 2;
              if (++v135 == v133) {
                goto LABEL_185;
              }
            }
          }
          v130 = nullptr;
          v131 = nullptr;
        }
        else {
          v129 = v214;
          v130 = nullptr;
          v131 = nullptr;
          if ((_DWORD)v128 != 0) {
            v83 += v193 * v128;
          }
        }
      LABEL_185:
        v208 = v130;
        v147 = v93 - v92;
        if (v93 == v92) {
          v148 = 0;
          v150 = nullptr;
          v153 = 0;
          v154 = (char*)v113 - (char*)v129;
          if (v113 == v129) {
            goto LABEL_196;
          }
        }
        else {
          if (0xAAAAAAAAAAAAAAABLL * (v147 >> 3) > 0xAAAAAAAAAAAAAAALL) {
          LABEL_240:
            GameRoutine_64aa00();
          }
          v4 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v93 - v92, 16, 0);
          v148 = v4;
          v149 = v92;
          v150 = (_QWORD*)v4;
          do {
            if ((*v149 & 1) != 0) {
              v4 = GameRoutine_60a270(v150, *((_QWORD*)v149 + 2));
            }
            else {
              v151 = *(_QWORD*)v149;
              v152 = *((_QWORD*)v149 + 2);
              v150[1] = *((_QWORD*)v149 + 1);
              v150[2] = v152;
              *v150 = v151;
            }
            v149 += 24;
            v150 += 3;
          } while (v149 != v93);
          v129 = v214;
          v153 = v148 + v147;
          v154 = (char*)v113 - (char*)v214;
          if (v113 == v214) {
          LABEL_196:
            v201 = 0;
            v159 = 0;
            v196 = nullptr;
            goto LABEL_197;
          }
        }
        if (v154 < 0) {
        LABEL_241:
          GameRoutine_cdcc10(v4);
        }
        v155 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v154, 16, 0);
        v156 = (char*)(v155 + v154);
        v157 = v154 & 0x7FFFFFFFFFFFFFF0LL;
        v158 = v155;
        v196 = v156;
        v4 = GameRoutine_1a0b950(v155, v129, v157);
        v159 = v158 + v157;
        v201 = v158;
      LABEL_197:
        v203 = v153;
        v160 = (char*)v131 - (char*)v208;
        if (v131 == v208) {
          v167 = v159;
          v161 = v148;
          v163 = 0;
          v164 = nullptr;
          v166 = nullptr;
        }
        else {
          if (v160 < 0) {
          LABEL_242:
            GameRoutine_135bf80(v5, v6);
          }
          v161 = v148;
          v4 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68,
                                  (char*)v131 - (char*)v208, 16, 0);
          v162 = v208;
          v163 = v4;
          v164 = (_QWORD*)v4;
          do {
            v164[1] = *((_QWORD*)v162 + 1);
            *v164 = *(_QWORD*)v162;
            v164[3] = *((_QWORD*)v162 + 3);
            v165 = *((_QWORD*)v162 + 2);
            v162 += 2;
            v164[2] = v165;
            v164 += 4;
          } while (v162 != v131);
          v166 = (char*)(v4 + v160);
          v167 = v159;
        }
        v168 = v199;
        v169 = (__int64*)v199[4];
        v170 = v199[5];
        if ((unsigned __int64)v169 >= v170) {
          v174 = v199[3];
          v175 = (char*)v169 - v174;
          v176 = 1 - 0x71C71C71C71C71C7LL * (((__int64)v169 - v174) >> 3);
          if (v176 > 0x38E38E38E38E38ELL) {
            GameRoutine_14cfaf0();
          }
          v177 = 0x8E38E38E38E38E39LL * ((__int64)(v170 - v174) >> 3);
          if (2 * v177 > v176) {
            v176 = 2 * v177;
          }
          if (v177 >= 0x1C71C71C71C71C7LL) {
            v176 = 0x38E38E38E38E38ELL;
          }
          if (v176 > 0x38E38E38E38E38ELL) {
            goto LABEL_239;
          }
          v178 = v167;
          v194 = 9 * v176;
          v4 = GameRoutine_651b90(GameData_2265ee0, 72 * v176, 16, 0);
          v179 = &v175[v4];
          *(_QWORD*)v179 = v161;
          *((_QWORD*)v179 + 1) = v150;
          *((_QWORD*)v179 + 8) = v166;
          *((_QWORD*)v179 + 6) = v163;
          *((_QWORD*)v179 + 7) = v164;
          *((_QWORD*)v179 + 2) = v203;
          *((_QWORD*)v179 + 3) = v201;
          *((_QWORD*)v179 + 4) = v178;
          *((_QWORD*)v179 + 5) = v196;
          v168 = v199;
          v180 = (char*)v199[3];
          v181 = (char*)v199[4];
          v182 = &v179[v180 - v181];
          if (v180 == v181) {
            v7 = v216;
            v173 = v197;
          }
          else {
            v7 = v216;
            v173 = v197;
            v204 = v4;
            v183 = (char*)v199[3];
            v184 = &v179[v180 - v181];
            do {
              *(_QWORD*)v184 = *(_QWORD*)v183;
              *((_QWORD*)v184 + 1) = *((_QWORD*)v183 + 1);
              *((_QWORD*)v184 + 2) = *((_QWORD*)v183 + 2);
              *((_QWORD*)v183 + 1) = 0;
              *((_QWORD*)v183 + 2) = 0;
              *(_QWORD*)v183 = 0;
              *((_QWORD*)v184 + 3) = *((_QWORD*)v183 + 3);
              *((_QWORD*)v184 + 4) = *((_QWORD*)v183 + 4);
              *((_QWORD*)v184 + 5) = *((_QWORD*)v183 + 5);
              *((_QWORD*)v183 + 4) = 0;
              *((_QWORD*)v183 + 5) = 0;
              *((_QWORD*)v183 + 3) = 0;
              *((_QWORD*)v184 + 6) = *((_QWORD*)v183 + 6);
              *((_QWORD*)v184 + 7) = *((_QWORD*)v183 + 7);
              *((_QWORD*)v184 + 8) = *((_QWORD*)v183 + 8);
              *((_QWORD*)v183 + 7) = 0;
              *((_QWORD*)v183 + 8) = 0;
              *((_QWORD*)v183 + 6) = 0;
              v183 += 72;
              v184 += 72;
            } while (v183 != v181);
            do {
              GameRoutine_13381e0(v180);
              v180 += 72;
            } while (v180 != v181);
            v180 = (char*)v199[3];
            v4 = v204;
          }
          v172 = v195;
          v171 = v179 + 72;
          v199[3] = (__int64)v182;
          v199[4] = (__int64)v171;
          v199[5] = v4 + 8 * v194;
          if (v180 != nullptr) {
            v185 = 128;
            if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
              v185 = 56;
            }
            v4 = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v185);
          }
        }
        else {
          *v169 = v161;
          v169[1] = (__int64)v150;
          v171 = v169 + 9;
          v169[6] = v163;
          v169[7] = (__int64)v164;
          v169[8] = (__int64)v166;
          v7 = v216;
          v172 = v195;
          v173 = v197;
          v169[2] = v203;
          v169[3] = v201;
          v169[4] = v167;
          v169[5] = (__int64)v196;
        }
        v168[4] = (__int64)v171;
        if (v208 != nullptr) {
          v186 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v186 = 56;
          }
          v4 = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v186);
        }
        if (v214 != nullptr) {
          v187 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v187 = 56;
          }
          v4 = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v187);
        }
        if (v92 != nullptr) {
          if (v93 != v92) {
            v188 = v93;
            do {
              v189 = *(v188 - 24);
              v188 -= 24;
              if ((v189 & 1) != 0 && *((_QWORD*)v93 - 1) != 0) {
                v190 = 128;
                if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                  v190 = 56;
                }
                GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v190);
              }
              v93 = v188;
            } while (v188 != v92);
          }
          v87 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v87 = 56;
          }
          v4 = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v87);
        }
        v84 = v173 + 1;
      } while (v84 != v172);
    }
  }
  return GameRoutine_634d80(*(_QWORD*)(v192 + 8));
}

__int64 GameHr_15c51b0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;

  if ((*(_BYTE*)(*(_QWORD*)a2 + 96LL) & 1) != 0) {
    GameRoutine_60a270(&v12, *(_QWORD*)(*(_QWORD*)a2 + 112LL));
  }
  else {
    v2 = *(_QWORD*)(*(_QWORD*)a2 + 104LL);
    v3 = *(__int64**)(*(_QWORD*)a2 + 112LL);
    v12 = *(_QWORD*)(*(_QWORD*)a2 + 96LL);
    v13 = v2;
    v14 = v3;
  }
  v4 = v13;
  if ((v12 & 1) == 0) {
    v4 = (unsigned __int8)v12 >> 1;
  }
  if (v4 != 16) {
    result = 0;
    if ((v12 & 1) == 0) {
      return result;
    }
    goto LABEL_18;
  }
  v5 = v14;
  if ((v12 & 1) == 0) {
    v5 = (__int64*)((char*)&v12 + 1);
  }
  v7 = *v5;
  v6 = v5[1];
  result = v7 == 0x4D7379535F44494DLL && v6 == 0x6D6574495F756E65LL;
  if ((v12 & 1) != 0) {
  LABEL_18:
    if (v14 != nullptr) {
      v10 = result;
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v11 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v11);
      return v10;
    }
  }
  return result;
}

__int64 GameHr_15d20e0(__int64 a1, __int64* a2, __int64 a3)
{
  __int64 v3;
  _QWORD* v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v13[4];
  _QWORD* v14;
  __int64 v15;

  v3 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                  8LL * *(unsigned __int16*)a2);
  if (*(_BYTE*)(v3 + 73) == 16) {
    v5 = v13;
    v7 = *(_QWORD*)(v3 + 24);
    v14 = v13;
    v15 = *GameData_212cea0;
    v13[0] = GameData_205b2e0;
    v13[1] = &v15;
    v8 = *(_QWORD*)(v7 + 328);
    if ((int)((unsigned __int64)(*(_QWORD*)(v7 + 336) - v8) >> 2) < 1) {
      goto LABEL_13;
    }
    v9 = 0;
    v10 = 0;
    do {
      if (v14 == nullptr) {
        GameRoutine_60a310(0, a2);
      }
      (*(void (**)(_QWORD*, __int64))(*v14 + 48LL))(v14, v8 + v9);
      v8 = *(_QWORD*)(v7 + 328);
      ++v10;
      v9 += 4;
    } while (v10 < (int)((unsigned __int64)(*(_QWORD*)(v7 + 336) - v8) >> 2));
    v5 = v14;
    if (v14 == v13) {
    LABEL_13:
      v11 = 32;
    }
    else {
      if (v14 == nullptr) {
        goto LABEL_15;
      }
      v11 = 40;
    }
    (*(void (**)(_QWORD*, __int64*))(*v5 + v11))(v5, a2);
  LABEL_15:
    if (a3 != 0) {
      return GameRoutine_158d440(a1, &v15, a3, 0);
    }
    else {
      return GameRoutine_158dbc0(a1, &v15, 0, 0);
    }
  }
  if (a3 != 0 && *(unsigned __int8*)(v3 + 72) <= 7u) {
    return GameRoutine_158d440(a1, a2, a3, 0);
  }
  else {
    return GameRoutine_158dbc0(a1, a2, 0, 0);
  }
}

__int64 GameHr_15e0120(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 result;
  int v7;
  __int64 v8;
  void* v9;

  *(_BYTE*)a1 = 0;
  *(_DWORD*)(a1 + 16) = 0;
  *(_DWORD*)(a1 + 4) = 1;
  *(_QWORD*)(a1 + 8) = 1;
  v2 = GameData_21caab0;
  if (GameData_21caab0 != 0) {
    *(_DWORD*)(a1 + 4) = *(_DWORD*)(GameData_21caab0 + 60);
    LODWORD(v2) = *(_DWORD*)(v2 + 64);
  }
  else {
    *(_DWORD*)(a1 + 4) = 0;
  }
  *(_DWORD*)(a1 + 8) = v2;
  v9 = &GameData_1a8718c;
  v3 = GameRoutine_7a86e0(&GameData_1a8718c);
  v4 = GameData_21caab0;
  v8 = v3;
  if (GameData_21caab0 != 0) {
    v5 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), &v8);
    if (v5 != 0) {
      v4 = *(_DWORD*)(v5 + 32);
    }
    else {
      v4 = 0;
    }
  }
  *(_DWORD*)(a1 + 12) = v4;
  v9 = &GameData_1aef152;
  result = GameRoutine_7a86e0(&GameData_1aef152);
  v7 = GameData_21caab0;
  v8 = result;
  if (GameData_21caab0 != 0) {
    result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), &v8);
    if (result != 0) {
      v7 = *(_DWORD*)(result + 32);
    }
    else {
      v7 = 0;
    }
  }
  *(_DWORD*)(a1 + 16) = v7;
  return result;
}

void GameHr_15eea60()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  float v4;
  float v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v0 = *(_QWORD*)(GameData_21a60d8 + 13224);
  v2 = *(_QWORD*)(v0 + 48);
  v1 = *(_QWORD*)(v0 + 56);
  if (v1 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
      GameRoutine_1a09c50(v1);
    }
    v3 = *(_QWORD*)(*(_QWORD*)(v2 + 8) + 128LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
      GameRoutine_1a09c50(v1);
    }
  }
  else {
    v3 = *(_QWORD*)(*(_QWORD*)(v2 + 8) + 128LL);
  }
  *(_DWORD*)(v3 + 92) = 1;
  *(_BYTE*)(v3 + 96) = 1;
  v4 = GameRoutine_13e2420(&GameData_1af2e0a);
  GameRoutine_1486c20(v4);
  v5 = GameRoutine_13e2420(&GameData_1ab1a04);
  v6 = *(_QWORD*)(GameData_21a60d8 + 13224);
  v8 = *(_QWORD*)(v6 + 48);
  v7 = *(_QWORD*)(v6 + 56);
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      GameRoutine_1a09c50(v7);
    }
    v9 = *(_QWORD*)(*(_QWORD*)(v8 + 8) + 128LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      GameRoutine_1a09c50(v7);
    }
  }
  else {
    v9 = *(_QWORD*)(*(_QWORD*)(v8 + 8) + 128LL);
  }
  *(float*)(v9 + 172) = v5;
  *(_BYTE*)(v9 + 176) = 1;
  v10 = *(_QWORD*)(GameData_21a60d8 + 13224);
  v12 = *(_QWORD*)(v10 + 48);
  v11 = *(_QWORD*)(v10 + 56);
  if (v11 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      GameRoutine_1a09c50(v11);
    }
    v13 = *(_QWORD*)(*(_QWORD*)(v12 + 8) + 128LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      GameRoutine_1a09c50(v11);
    }
  }
  else {
    v13 = *(_QWORD*)(*(_QWORD*)(v12 + 8) + 128LL);
  }
  *(_WORD*)(v13 + 329) = 256;
}

__int64 GameHr_16218a0(__int64 a1)
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
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _BYTE* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v20;
  __int64 v21;
  _QWORD v22[4];
  _QWORD* v23;
  __int64 v24;

  if ((GameRoutine_6e8bc0(*(_QWORD*)(a1 + 88) + 8LL * *(int*)(a1 + 40) + 828,
                          *(_QWORD*)(a1 + 88)) &
       1) == 0) {
    v5 = GameData_2203490;
    v6 = *(_QWORD*)(GameData_2203490 + 640);
    v7 = *(_QWORD*)(GameData_2203490 + 648);
    if (v7 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8),
                                              1u, memory_order_relaxed),
                    atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0)) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      GameRoutine_1a09c50(v7);
      if (v6 != 0) {
        goto LABEL_9;
      }
    }
    else if (v6 != 0) {
    LABEL_9:
      *(_DWORD*)(v6 + 16) = *(_DWORD*)(a1 + 40);
      return GameRoutine_e6cfa0();
    }
    v6 = *(_QWORD*)(v5 + 656);
    v8 = *(_QWORD*)(v5 + 664);
    if (v8 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        GameRoutine_1a09c50(v8);
      }
    }
    goto LABEL_9;
  }
  if ((GameRoutine_15de630(1, *(_QWORD*)(a1 + 88), *(unsigned int*)(a1 + 40)) &
       1) == 0) {
    goto LABEL_21;
  }
  v2 = *(_QWORD*)(a1 + 88);
  v20 = 0;
  v21 = 0;
  v23 = v22;
  v3 = *GameData_212ea58;
  v24 = v2;
  v22[0] = GameData_1fec818;
  v22[1] = &v24;
  v22[2] = &v20;
  GameRoutine_e9a800(v3, v22);
  if (v23 == v22) {
    v4 = 32;
    goto LABEL_15;
  }
  if (v23 != nullptr) {
    v4 = 40;
  LABEL_15:
    (*(void (**)(void))(*v23 + v4))();
  }
  if (v20 != 0) {
    GameRoutine_e7d890();
  }
  v9 = v21;
  if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    GameRoutine_1a09c50(v9);
  }
LABEL_21:
  v10 = *(_QWORD*)(GameData_2203490 + 640);
  GameRoutine_edb740(v10);
  v11 = *(_QWORD**)(v10 + 88);
  v11[3] = v11[2];
  v11[6] = v11[5];
  GameRoutine_f47000(v11);
  GameRoutine_f47100(v11);
  GameRoutine_f47270(v11);
  v12 = GameData_2203490;
  v13 = *(_QWORD*)(GameData_2203490 + 640);
  v14 = *(_QWORD*)(GameData_2203490 + 648);
  if (v14 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8),
                                             1u, memory_order_relaxed),
                   atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    GameRoutine_1a09c50(v14);
    if (v13 != 0) {
      goto LABEL_24;
    }
  }
  else if (v13 != 0) {
    goto LABEL_24;
  }
  v13 = *(_QWORD*)(v12 + 656);
  v18 = *(_QWORD*)(v12 + 664);
  if (v18 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
      GameRoutine_1a09c50(v18);
    }
  }
LABEL_24:
  v15 = (_BYTE*)(*(_QWORD*)(a1 + 88) + 847LL);
  v16 = 2;
  v17 = *GameData_212c878[0];
  while (1) {
    if (*(_WORD*)(v15 - 19) != 0 && (*(v15 - 16) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v17 + 64) +
                                       8LL * *(unsigned __int16*)(v15 - 19)) +
                            72LL) < 8u) {
      LODWORD(v16) = v16 - 2;
      goto LABEL_43;
    }
    if (*(_WORD*)(v15 - 11) != 0 && (*(v15 - 8) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v17 + 64) +
                                       8LL * *(unsigned __int16*)(v15 - 11)) +
                            72LL) < 8u) {
      break;
    }
    if (*(_WORD*)(v15 - 3) != 0 && (*v15 & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v17 + 64) +
                                       8LL * *(unsigned __int16*)(v15 - 3)) +
                            72LL) < 8u) {
      goto LABEL_43;
    }
    v16 += 3;
    v15 += 24;
    if (v16 == 32) {
      LODWORD(v16) = -1;
      goto LABEL_43;
    }
  }
  LODWORD(v16) = v16 - 1;
LABEL_43:
  *(_DWORD*)(v13 + 16) = v16;
  return GameRoutine_e6cfa0();
}

#pragma GCC visibility pop
