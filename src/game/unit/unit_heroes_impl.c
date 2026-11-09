#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6c51e0(_QWORD);
__int64 GameRoutine_6c6da0(__int64);
__int64 GameRoutine_6c6ec0(__int64);
__int64 GameRoutine_6cc0a0(__int64);
__int64 GameRoutine_7fbb60(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 GameRoutine_930ee0(_QWORD, _QWORD);
__int64 GameRoutine_930fd0(_QWORD, _QWORD);
__int64 GameRoutine_975940(void);
__int64 GameRoutine_97b2f0(void);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GetHero(_QWORD);
__int64 game_HashString(_QWORD);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
__int64 game_Unit_Unknown6c8630(_QWORD);
extern _UNKNOWN GameData_1ad27dd;
extern __int64 GameData_21c9c70;
extern __int64 GameData_21d99a8;
extern __int64 GameData_21d99b0;
extern __int64 GameData_21f49b8;
extern __int64 game_GameModeData_instance_;
extern __int64 msg_MessageManager_instance_;
extern __int64* GameData_212e348;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_1288b50(void);
__int64 UnitHeroes_6828a0(__int64 a1);
__int64 UnitHeroes_6d2b90(__int64 a1, unsigned __int8* a2);
bool UnitHeroes_6d2c90(__int64 a1, __int64* a2);
unsigned __int64 UnitHeroes_6d3800(__int64 a1, int a2, int a3, char a4);
__int64 UnitHeroes_6d46e0(__int64 a1, unsigned __int8* a2);

__int64 UnitHeroes_6828a0(__int64 a1)
{
  __int64 result;
  _QWORD* v2;
  __int64 i;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  int v13;
  _QWORD v14[4];
  int v15;
  int v16;
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
  int v29;
  int v30;

  result = game_GetHero(a1);
  if (result == 0) {
    return result;
  }
  v2 = (_QWORD*)result;
  for (i = result; i != 0; i = *(_QWORD*)(i + 624)) {
    v4 = i;
  }
  if (*(_BYTE*)(v4 + 441) != 3) {
    goto LABEL_11;
  }
  v5 = *(_QWORD*)(result + 624);
  if (v5 == 0) {
    v5 = result;
  }
  v14[0] = v5;
  v13 = 241;
  v6 = game_UnitPool_Find_6ead60(v14, &v13);
  if (v6 != 0) {
    v7 = (__int64*)(v6 + 2104);
    goto LABEL_12;
  }
  v8 = *(_QWORD*)(game_GameModeData_instance_ + 176);
  if (*(_BYTE*)(v8 + 144) != 0) {
    v7 = (__int64*)(v8 + 112);
  }
  else {
  LABEL_11:
    v7 = &GameData_21f49b8;
  }

LABEL_12:
  if (*((_BYTE*)v7 + 32) != 0) {
    return GameRoutine_97b2f0();
  }
  v9 = msg_MessageManager_instance_;
  if (v2[36] == 0 || (v10 = GameRoutine_975940()) == 0 ||
      (v11 = *(char**)(v10 + 72)) == nullptr) {
    v11 = (char*)v2[4];
    if (v11 == nullptr) {
      v12 = v2[8];
      if (v12 != 0) {
        v11 = *(char**)(v12 + 32);
      }
      else {
        v11 = &GameData_1a9f09e;
      }
    }
  }
  v17 = -1;
  v18 = -1;
  v19 = -1;
  v20 = -1;
  v21 = -1;
  v22 = -1;
  v23 = -1;
  v24 = -1;
  v25 = -1;
  v26 = -1;
  v27 = -1;
  v28 = -1;
  v14[0] = GameData_212e348 + 2;
  v14[1] = 0xFFFF0001FFFF0000LL;
  v14[2] = 0xFFFF0004FFFF0002LL;
  v14[3] = 0xFFFF0006FFFF0005LL;
  v29 = 8;
  v30 = 0;
  v15 = -65529;
  v16 = -65528;
  return GameRoutine_a4dbe0(v9, v11, 0, v14);
}

__int64 UnitHeroes_6d2b90(__int64 a1, unsigned __int8* a2)
{
  unsigned __int8* v3;
  char v4;
  __int64 result;
  __int64 v6;
  int v7;

  if (*(unsigned __int8*)(a1 + 1880) != *a2 ||
      *(unsigned __int8*)(a1 + 1881) != a2[1] ||
      *(unsigned __int8*)(a1 + 1882) != a2[2] ||
      *(unsigned __int8*)(a1 + 1883) != a2[3] ||
      *(_DWORD*)(a1 + 1884) != *((_DWORD*)a2 + 1) ||
      *(_DWORD*)(a1 + 1888) != *((_DWORD*)a2 + 2) ||
      (v3 = a2, v4 = GameRoutine_930ee0(a1 + 1896, a2 + 16), a2 = v3,
       (v4 & 1) == 0) ||
      (result = GameRoutine_930fd0(a1 + 1920, v3 + 40), a2 = v3,
       (result & 1) == 0)) {
    GameRoutine_930b90(a1 + 1880, a2);
    v6 = *(_QWORD*)(a1 + 400);
    if (v6 != 0 && (*(_QWORD*)(v6 + 88) == 0 ||
                    *(_QWORD*)(*(_QWORD*)(v6 + 24) + 1112LL) != 0)) {
      v7 = *(_DWORD*)(a1 + 416);
      if ((v7 & 0x40000) != 0) {
        *(_DWORD*)(a1 + 416) = v7 & 0xFFFBFFFF;
        GameRoutine_6cc0a0(a1);
      }
    }
    result = game_Unit_Unknown6c8630(a1);
    *(_WORD*)(a1 + 20) |= 1u;
  }
  return result;
}

bool UnitHeroes_6d2c90(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  char v4;
  int v5;
  __int64 v6;

  v2 = *(_QWORD*)(a1 + 1944);
  v3 = *a2;
  if (v2 != *a2) {
    *(_WORD*)(a1 + 1944) = v3;
    *(_BYTE*)(a1 + 1946) = *((_BYTE*)a2 + 2);
    v4 = *((_BYTE*)a2 + 7);
    *(_DWORD*)(a1 + 1947) = *(_DWORD*)((char*)a2 + 3);
    v5 = *(_DWORD*)(a1 + 416);
    *(_BYTE*)(a1 + 1951) = v4;
    if ((v5 & 0x10000000) == 0) {
      v6 = a1;
      *(_DWORD*)(a1 + 416) = v5 | 0x10000000;
      GameRoutine_6c51e0(a1);
      GameRoutine_6c6da0(v6);
      GameRoutine_6c6ec0(v6);
      a1 = v6;
      *(_DWORD*)(v6 + 416) &= ~0x10000000u;
    }
    *(_WORD*)(a1 + 20) |= 1u;
  }
  return v2 != v3;
}

unsigned __int64 UnitHeroes_6d3800(__int64 a1, int a2, int a3, char a4)
{
  unsigned __int64 result;
  unsigned __int64 v9;
  unsigned __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int16 v18;
  _QWORD* v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  _QWORD* v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  _QWORD* v31;
  __int64 v32;
  _QWORD* v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  _QWORD* v37;
  __int64 v38;
  _QWORD* v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  _QWORD* v43;
  __int64 v44;
  _QWORD* v45;
  __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  _QWORD* v49;
  __int64 v50;
  _QWORD* v51;
  __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  _QWORD* v55;
  __int64 v56;
  _QWORD* v57;
  __int64 v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  __int64 v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  __int64 v78;
  unsigned __int64 v79;
  unsigned __int64 v80;
  __int64 v81;
  __int64 v82;
  unsigned __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  __int64 v86;
  unsigned __int64 v87;
  unsigned __int64 v88;
  __int64 v89;
  __int64 v90;
  unsigned int v91;
  __int16 v92;
  signed int* v93;
  unsigned __int64 v94;
  int v95;
  signed int v96;
  signed int v97;
  int v98;
  signed int v99;
  signed int v100;
  unsigned int v101;
  signed int v102;
  signed int* v103;
  unsigned __int64 v104;
  int v105;
  signed int v106;
  signed int v107;
  int v108;
  signed int v109;
  signed int v110;
  unsigned int v111;
  signed int v112;
  signed int* v113;
  unsigned __int64 v114;
  int v115;
  signed int v116;
  signed int v117;
  int v118;
  signed int v119;
  signed int v120;
  unsigned int v121;
  signed int v122;
  signed int* v123;
  unsigned __int64 v124;
  int v125;
  signed int v126;
  signed int v127;
  int v128;
  signed int v129;
  signed int v130;
  unsigned int v131;
  signed int v132;
  signed int* v133;
  unsigned __int64 v134;
  int v135;
  signed int v136;
  signed int v137;
  int v138;
  signed int v139;
  signed int v140;
  unsigned int v141;
  signed int v142;
  signed int* v143;
  unsigned __int64 v144;
  int v145;
  signed int v146;
  signed int v147;
  int v148;
  signed int v149;
  signed int v150;
  unsigned int v151;
  signed int v152;
  signed int* v153;
  unsigned __int64 v154;
  int v155;
  signed int v156;
  signed int v157;
  int v158;
  signed int v159;
  signed int v160;
  unsigned int v161;
  signed int v162;
  signed int* v163;
  unsigned __int64 v164;
  int v165;
  signed int v166;
  signed int v167;
  int v168;
  signed int v169;
  signed int v170;
  unsigned int v171;
  signed int v172;
  signed int* v173;
  unsigned __int64 v174;
  int v175;
  signed int v176;
  signed int v177;
  int v178;
  signed int v179;
  signed int v180;
  unsigned int v181;
  signed int v182;
  signed int* v183;
  unsigned __int64 v184;
  int v185;
  signed int v186;
  signed int v187;
  int v188;
  signed int v189;
  signed int v190;
  unsigned int v191;
  signed int v192;
  signed int* v193;
  unsigned __int64 v194;
  int v195;
  signed int v196;
  signed int v197;
  int v198;
  signed int v199;
  signed int v200;
  unsigned int v201;
  signed int v202;
  signed int* v203;
  unsigned __int64 v204;
  int v205;
  signed int v206;
  signed int v207;
  int v208;
  signed int v209;
  signed int v210;
  unsigned int v211;
  signed int v212;
  signed int* v213;
  unsigned __int64 v214;
  int v215;
  signed int v216;
  int v217;
  signed int v218;
  signed int v219;
  unsigned int v220;
  signed int v221;
  _BYTE v222[4];

  result = game_HashString(&GameData_1ad27dd);
  if (result == 0) {
    goto LABEL_25;
  }
  v9 = *(_QWORD*)(GameData_21c9c70 + 96);
  if (v9 == 0 || *(_QWORD*)(GameData_21c9c70 + 112) == 0) {
    goto LABEL_25;
  }
  v11 = v9 - 1;
  if ((v9 & (v9 - 1)) != 0) {
    v12 = result;
    if (result >= v9) {
      v12 = result % v9;
    }
  }
  else {
    v12 = v11 & result;
  }
  v13 = *(_QWORD**)(*(_QWORD*)(GameData_21c9c70 + 88) + 8 * v12);
  if (v13 != nullptr && (v14 = (_QWORD*)*v13) != nullptr) {
    if ((v9 & v11) == 0) {
      while (1) {
        v17 = v14[1];
        if (v17 == result) {
          if (v14[2] == result) {
            goto LABEL_399;
          }
        }
        else if ((v17 & v11) != v12) {
          goto LABEL_25;
        }
        v14 = (_QWORD*)*v14;
        v16 = 0;
        if (v14 == nullptr) {
          goto LABEL_96;
        }
      }
    }
    do {
      v15 = v14[1];
      if (v15 == result) {
        if (v14[2] == result) {
        LABEL_399:
          v16 = v14[3];
          if ((a4 & 1) != 0) {
            goto LABEL_97;
          }
          goto LABEL_26;
        }
      }
      else {
        if (v15 >= v9) {
          v15 %= v9;
        }
        if (v15 != v12) {
          goto LABEL_25;
        }
      }
      v14 = (_QWORD*)*v14;
    } while (v14 != nullptr);
    v16 = 0;
  LABEL_96:
    if ((a4 & 1) == 0) {
      goto LABEL_26;
    }
  }
  else {
  LABEL_25:
    v16 = 0;
    if ((a4 & 1) == 0) {
    LABEL_26:
      if (a2 < (unsigned int)a3) {
        while (1) {
          v18 = *(_WORD*)(*(_QWORD*)(a1 + 392) + 610LL);
          if ((v18 & 1) != 0) {
            v19 = *(_QWORD**)(v16 + 40);
            v222[0] = 0;
            v21 = v19;
            v20 = *v19;
            v22 = v21[1] - v20;
            v23 = (unsigned __int64)v22 >> 3;
            if (a2 < (int)((unsigned __int64)v22 >> 3)) {
              LODWORD(v23) = a2;
            }
            v24 = (int)v23 - 1;
            if (v24 >= v22 >> 3) {
              goto LABEL_94;
            }
            result = GameRoutine_7fbb60(
                a1 + 512, a1, v222,
                *(unsigned __int16*)(*(_QWORD*)(v20 + 8 * v24) + 34LL));
            v18 = *(_WORD*)(*(_QWORD*)(a1 + 392) + 610LL);
          }
          if ((v18 & 2) != 0) {
            v25 = *(_QWORD**)(v16 + 40);
            v222[0] = 1;
            v27 = v25;
            v26 = *v25;
            v28 = v27[1] - v26;
            v29 = (unsigned __int64)v28 >> 3;
            if (a2 < (int)((unsigned __int64)v28 >> 3)) {
              LODWORD(v29) = a2;
            }
            v30 = (int)v29 - 1;
            if (v30 >= v28 >> 3) {
              goto LABEL_94;
            }
            result = GameRoutine_7fbb60(
                a1 + 512, a1, v222,
                *(unsigned __int16*)(*(_QWORD*)(v26 + 8 * v30) + 34LL));
            v18 = *(_WORD*)(*(_QWORD*)(a1 + 392) + 610LL);
          }
          if ((v18 & 4) != 0) {
            v31 = *(_QWORD**)(v16 + 40);
            v222[0] = 2;
            v33 = v31;
            v32 = *v31;
            v34 = v33[1] - v32;
            v35 = (unsigned __int64)v34 >> 3;
            if (a2 < (int)((unsigned __int64)v34 >> 3)) {
              LODWORD(v35) = a2;
            }
            v36 = (int)v35 - 1;
            if (v36 >= v34 >> 3) {
              goto LABEL_94;
            }
            result = GameRoutine_7fbb60(
                a1 + 512, a1, v222,
                *(unsigned __int16*)(*(_QWORD*)(v32 + 8 * v36) + 34LL));
            v18 = *(_WORD*)(*(_QWORD*)(a1 + 392) + 610LL);
          }
          if ((v18 & 8) != 0) {
            v37 = *(_QWORD**)(v16 + 40);
            v222[0] = 3;
            v39 = v37;
            v38 = *v37;
            v40 = v39[1] - v38;
            v41 = (unsigned __int64)v40 >> 3;
            if (a2 < (int)((unsigned __int64)v40 >> 3)) {
              LODWORD(v41) = a2;
            }
            v42 = (int)v41 - 1;
            if (v42 >= v40 >> 3) {
              goto LABEL_94;
            }
            result = GameRoutine_7fbb60(
                a1 + 512, a1, v222,
                *(unsigned __int16*)(*(_QWORD*)(v38 + 8 * v42) + 34LL));
            v18 = *(_WORD*)(*(_QWORD*)(a1 + 392) + 610LL);
          }
          if ((v18 & 0x10) != 0) {
            v43 = *(_QWORD**)(v16 + 40);
            v222[0] = 4;
            v45 = v43;
            v44 = *v43;
            v46 = v45[1] - v44;
            v47 = (unsigned __int64)v46 >> 3;
            if (a2 < (int)((unsigned __int64)v46 >> 3)) {
              LODWORD(v47) = a2;
            }
            v48 = (int)v47 - 1;
            if (v48 >= v46 >> 3) {
              goto LABEL_94;
            }
            result = GameRoutine_7fbb60(
                a1 + 512, a1, v222,
                *(unsigned __int16*)(*(_QWORD*)(v44 + 8 * v48) + 34LL));
            v18 = *(_WORD*)(*(_QWORD*)(a1 + 392) + 610LL);
          }
          if ((v18 & 0x20) != 0) {
            v49 = *(_QWORD**)(v16 + 40);
            v222[0] = 5;
            v51 = v49;
            v50 = *v49;
            v52 = v51[1] - v50;
            v53 = (unsigned __int64)v52 >> 3;
            if (a2 < (int)((unsigned __int64)v52 >> 3)) {
              LODWORD(v53) = a2;
            }
            v54 = (int)v53 - 1;
            if (v54 >= v52 >> 3) {
              goto LABEL_94;
            }
            result = GameRoutine_7fbb60(
                a1 + 512, a1, v222,
                *(unsigned __int16*)(*(_QWORD*)(v50 + 8 * v54) + 34LL));
            v18 = *(_WORD*)(*(_QWORD*)(a1 + 392) + 610LL);
          }
          if ((v18 & 0x40) != 0) {
            v55 = *(_QWORD**)(v16 + 40);
            v222[0] = 6;
            v57 = v55;
            v56 = *v55;
            v58 = v57[1] - v56;
            v59 = (unsigned __int64)v58 >> 3;
            if (a2 < (int)((unsigned __int64)v58 >> 3)) {
              LODWORD(v59) = a2;
            }
            v60 = (int)v59 - 1;
            if (v60 >= v58 >> 3) {
              goto LABEL_94;
            }
            result = GameRoutine_7fbb60(
                a1 + 512, a1, v222,
                *(unsigned __int16*)(*(_QWORD*)(v56 + 8 * v60) + 34LL));
            v18 = *(_WORD*)(*(_QWORD*)(a1 + 392) + 610LL);
          }
          if ((v18 & 0x80) != 0) {
            v222[0] = 7;
            v61 = **(_QWORD**)(v16 + 40);
            v62 = *(_QWORD*)(*(_QWORD*)(v16 + 40) + 8LL) - v61;
            v63 = (unsigned __int64)v62 >> 3;
            if (a2 < (int)((unsigned __int64)v62 >> 3)) {
              LODWORD(v63) = a2;
            }
            v64 = (int)v63 - 1;
            if (v64 >= v62 >> 3) {
              goto LABEL_94;
            }
            result = GameRoutine_7fbb60(
                a1 + 512, a1, v222,
                *(unsigned __int16*)(*(_QWORD*)(v61 + 8 * v64) + 34LL));
            v18 = *(_WORD*)(*(_QWORD*)(a1 + 392) + 610LL);
          }
          if ((v18 & 0x100) != 0) {
            v222[0] = 8;
            v65 = **(_QWORD**)(v16 + 40);
            v66 = *(_QWORD*)(*(_QWORD*)(v16 + 40) + 8LL) - v65;
            v67 = (unsigned __int64)v66 >> 3;
            if (a2 < (int)((unsigned __int64)v66 >> 3)) {
              LODWORD(v67) = a2;
            }
            v68 = (int)v67 - 1;
            if (v68 >= v66 >> 3) {
              goto LABEL_94;
            }
            result = GameRoutine_7fbb60(
                a1 + 512, a1, v222,
                *(unsigned __int16*)(*(_QWORD*)(v65 + 8 * v68) + 34LL));
            v18 = *(_WORD*)(*(_QWORD*)(a1 + 392) + 610LL);
          }
          if ((v18 & 0x200) != 0) {
            v222[0] = 9;
            v69 = **(_QWORD**)(v16 + 40);
            v70 = *(_QWORD*)(*(_QWORD*)(v16 + 40) + 8LL) - v69;
            v71 = (unsigned __int64)v70 >> 3;
            if (a2 < (int)((unsigned __int64)v70 >> 3)) {
              LODWORD(v71) = a2;
            }
            v72 = (int)v71 - 1;
            if (v72 >= v70 >> 3) {
              goto LABEL_94;
            }
            result = GameRoutine_7fbb60(
                a1 + 512, a1, v222,
                *(unsigned __int16*)(*(_QWORD*)(v69 + 8 * v72) + 34LL));
            v18 = *(_WORD*)(*(_QWORD*)(a1 + 392) + 610LL);
          }
          if ((v18 & 0x400) != 0) {
            v222[0] = 10;
            v73 = **(_QWORD**)(v16 + 40);
            v74 = *(_QWORD*)(*(_QWORD*)(v16 + 40) + 8LL) - v73;
            v75 = (unsigned __int64)v74 >> 3;
            if (a2 < (int)((unsigned __int64)v74 >> 3)) {
              LODWORD(v75) = a2;
            }
            v76 = (int)v75 - 1;
            if (v76 >= v74 >> 3) {
              goto LABEL_94;
            }
            result = GameRoutine_7fbb60(
                a1 + 512, a1, v222,
                *(unsigned __int16*)(*(_QWORD*)(v73 + 8 * v76) + 34LL));
            v18 = *(_WORD*)(*(_QWORD*)(a1 + 392) + 610LL);
          }
          if ((v18 & 0x800) != 0) {
            v222[0] = 11;
            v77 = **(_QWORD**)(v16 + 40);
            v78 = *(_QWORD*)(*(_QWORD*)(v16 + 40) + 8LL) - v77;
            v79 = (unsigned __int64)v78 >> 3;
            if (a2 < (int)((unsigned __int64)v78 >> 3)) {
              LODWORD(v79) = a2;
            }
            v80 = (int)v79 - 1;
            if (v80 >= v78 >> 3) {
              goto LABEL_94;
            }
            result = GameRoutine_7fbb60(
                a1 + 512, a1, v222,
                *(unsigned __int16*)(*(_QWORD*)(v77 + 8 * v80) + 34LL));
            v18 = *(_WORD*)(*(_QWORD*)(a1 + 392) + 610LL);
          }
          if ((v18 & 0x1000) != 0) {
            v222[0] = 12;
            v81 = **(_QWORD**)(v16 + 40);
            v82 = *(_QWORD*)(*(_QWORD*)(v16 + 40) + 8LL) - v81;
            v83 = (unsigned __int64)v82 >> 3;
            if (a2 < (int)((unsigned __int64)v82 >> 3)) {
              LODWORD(v83) = a2;
            }
            v84 = (int)v83 - 1;
            if (v84 >= v82 >> 3) {
              goto LABEL_94;
            }
            result = GameRoutine_7fbb60(
                a1 + 512, a1, v222,
                *(unsigned __int16*)(*(_QWORD*)(v81 + 8 * v84) + 34LL));
          }
          if (a3 == ++a2) {
            return result;
          }
        }
      }
      return result;
    }
  }

LABEL_97:
  v85 = **(_QWORD**)(v16 + 40);
  v86 = *(_QWORD*)(*(_QWORD*)(v16 + 40) + 8LL) - v85;
  v87 = (unsigned __int64)v86 >> 3;
  if (a3 < (int)((unsigned __int64)v86 >> 3)) {
    LODWORD(v87) = a3;
  }
  v88 = (int)v87 - 1;
  if (v88 >= v86 >> 3) {
  LABEL_94:
    GameRoutine_1288b50();
  }
  v89 = *(_QWORD*)(v85 + 8 * v88);
  v90 = *(_QWORD*)(a1 + 392);
  v91 = *(unsigned __int16*)(v89 + 32);
  v92 = *(_WORD*)(v90 + 610);
  if ((v92 & 1) != 0 && v91 > *(unsigned __int16*)(a1 + 514)) {
    v93 = (signed int*)GameData_21d99a8;
    v94 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    if ((int)v94 >= 12) {
      v95 = 12;
    }
    else {
      v95 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    v96 = *(_DWORD*)(GameData_21d99a8 + 4LL * v95 - 4);
    if (v96 >= (int)v91) {
      v97 = v91;
    }
    else {
      v97 = v96;
    }
    *(_WORD*)(a1 + 514) = v97;
    if ((int)v94 < 1) {
      LOBYTE(v98) = 0;
    }
    else {
      v98 = 0;
      v99 = v93[(unsigned int)(v94 - 1)];
      if (v99 >= v97) {
        v99 = v97;
      }
      if (v97 >= *v93) {
        v100 = v99;
      }
      else {
        v100 = *v93;
      }
      while (1) {
        v101 = (unsigned int)(v98 + v94) >> 1;
        v102 = v93[v101];
        if (v100 == v102) {
          break;
        }
        if (v100 < v102) {
          LODWORD(v94) = (unsigned int)(v98 + v94) >> 1;
        }
        else {
          v98 = v101 + 1;
        }
        if (v98 >= (int)v94) {
          goto LABEL_122;
        }
      }
      LOBYTE(v98) = v101 + 1;
    }
  LABEL_122:
    *(_BYTE*)(a1 + 540) = v98;
    v92 = *(_WORD*)(v90 + 610);
  }
  if ((v92 & 2) != 0 && v91 > *(unsigned __int16*)(a1 + 516)) {
    v103 = (signed int*)GameData_21d99a8;
    v104 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    if ((int)v104 >= 12) {
      v105 = 12;
    }
    else {
      v105 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    v106 = *(_DWORD*)(GameData_21d99a8 + 4LL * v105 - 4);
    if (v106 >= (int)v91) {
      v107 = v91;
    }
    else {
      v107 = v106;
    }
    *(_WORD*)(a1 + 516) = v107;
    if ((int)v104 < 1) {
      LOBYTE(v108) = 0;
    }
    else {
      v108 = 0;
      v109 = v103[(unsigned int)(v104 - 1)];
      if (v109 >= v107) {
        v109 = v107;
      }
      if (v107 >= *v103) {
        v110 = v109;
      }
      else {
        v110 = *v103;
      }
      while (1) {
        v111 = (unsigned int)(v108 + v104) >> 1;
        v112 = v103[v111];
        if (v110 == v112) {
          break;
        }
        if (v110 < v112) {
          LODWORD(v104) = (unsigned int)(v108 + v104) >> 1;
        }
        else {
          v108 = v111 + 1;
        }
        if (v108 >= (int)v104) {
          goto LABEL_145;
        }
      }
      LOBYTE(v108) = v111 + 1;
    }
  LABEL_145:
    *(_BYTE*)(a1 + 541) = v108;
    v92 = *(_WORD*)(v90 + 610);
  }
  if ((v92 & 4) != 0 && v91 > *(unsigned __int16*)(a1 + 518)) {
    v113 = (signed int*)GameData_21d99a8;
    v114 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    if ((int)v114 >= 12) {
      v115 = 12;
    }
    else {
      v115 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    v116 = *(_DWORD*)(GameData_21d99a8 + 4LL * v115 - 4);
    if (v116 >= (int)v91) {
      v117 = v91;
    }
    else {
      v117 = v116;
    }
    *(_WORD*)(a1 + 518) = v117;
    if ((int)v114 < 1) {
      LOBYTE(v118) = 0;
    }
    else {
      v118 = 0;
      v119 = v113[(unsigned int)(v114 - 1)];
      if (v119 >= v117) {
        v119 = v117;
      }
      if (v117 >= *v113) {
        v120 = v119;
      }
      else {
        v120 = *v113;
      }
      while (1) {
        v121 = (unsigned int)(v118 + v114) >> 1;
        v122 = v113[v121];
        if (v120 == v122) {
          break;
        }
        if (v120 < v122) {
          LODWORD(v114) = (unsigned int)(v118 + v114) >> 1;
        }
        else {
          v118 = v121 + 1;
        }
        if (v118 >= (int)v114) {
          goto LABEL_168;
        }
      }
      LOBYTE(v118) = v121 + 1;
    }
  LABEL_168:
    *(_BYTE*)(a1 + 542) = v118;
    v92 = *(_WORD*)(v90 + 610);
  }
  if ((v92 & 8) != 0 && v91 > *(unsigned __int16*)(a1 + 520)) {
    v123 = (signed int*)GameData_21d99a8;
    v124 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    if ((int)v124 >= 12) {
      v125 = 12;
    }
    else {
      v125 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    v126 = *(_DWORD*)(GameData_21d99a8 + 4LL * v125 - 4);
    if (v126 >= (int)v91) {
      v127 = v91;
    }
    else {
      v127 = v126;
    }
    *(_WORD*)(a1 + 520) = v127;
    if ((int)v124 < 1) {
      LOBYTE(v128) = 0;
    }
    else {
      v128 = 0;
      v129 = v123[(unsigned int)(v124 - 1)];
      if (v129 >= v127) {
        v129 = v127;
      }
      if (v127 >= *v123) {
        v130 = v129;
      }
      else {
        v130 = *v123;
      }
      while (1) {
        v131 = (unsigned int)(v128 + v124) >> 1;
        v132 = v123[v131];
        if (v130 == v132) {
          break;
        }
        if (v130 < v132) {
          LODWORD(v124) = (unsigned int)(v128 + v124) >> 1;
        }
        else {
          v128 = v131 + 1;
        }
        if (v128 >= (int)v124) {
          goto LABEL_191;
        }
      }
      LOBYTE(v128) = v131 + 1;
    }
  LABEL_191:
    *(_BYTE*)(a1 + 543) = v128;
    v92 = *(_WORD*)(v90 + 610);
  }
  if ((v92 & 0x10) != 0 && v91 > *(unsigned __int16*)(a1 + 522)) {
    v133 = (signed int*)GameData_21d99a8;
    v134 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    if ((int)v134 >= 12) {
      v135 = 12;
    }
    else {
      v135 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    v136 = *(_DWORD*)(GameData_21d99a8 + 4LL * v135 - 4);
    if (v136 >= (int)v91) {
      v137 = v91;
    }
    else {
      v137 = v136;
    }
    *(_WORD*)(a1 + 522) = v137;
    if ((int)v134 < 1) {
      LOBYTE(v138) = 0;
    }
    else {
      v138 = 0;
      v139 = v133[(unsigned int)(v134 - 1)];
      if (v139 >= v137) {
        v139 = v137;
      }
      if (v137 >= *v133) {
        v140 = v139;
      }
      else {
        v140 = *v133;
      }
      while (1) {
        v141 = (unsigned int)(v138 + v134) >> 1;
        v142 = v133[v141];
        if (v140 == v142) {
          break;
        }
        if (v140 < v142) {
          LODWORD(v134) = (unsigned int)(v138 + v134) >> 1;
        }
        else {
          v138 = v141 + 1;
        }
        if (v138 >= (int)v134) {
          goto LABEL_214;
        }
      }
      LOBYTE(v138) = v141 + 1;
    }
  LABEL_214:
    *(_BYTE*)(a1 + 544) = v138;
    v92 = *(_WORD*)(v90 + 610);
  }
  if ((v92 & 0x20) != 0 && v91 > *(unsigned __int16*)(a1 + 524)) {
    v143 = (signed int*)GameData_21d99a8;
    v144 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    if ((int)v144 >= 12) {
      v145 = 12;
    }
    else {
      v145 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    v146 = *(_DWORD*)(GameData_21d99a8 + 4LL * v145 - 4);
    if (v146 >= (int)v91) {
      v147 = v91;
    }
    else {
      v147 = v146;
    }
    *(_WORD*)(a1 + 524) = v147;
    if ((int)v144 < 1) {
      LOBYTE(v148) = 0;
    }
    else {
      v148 = 0;
      v149 = v143[(unsigned int)(v144 - 1)];
      if (v149 >= v147) {
        v149 = v147;
      }
      if (v147 >= *v143) {
        v150 = v149;
      }
      else {
        v150 = *v143;
      }
      while (1) {
        v151 = (unsigned int)(v148 + v144) >> 1;
        v152 = v143[v151];
        if (v150 == v152) {
          break;
        }
        if (v150 < v152) {
          LODWORD(v144) = (unsigned int)(v148 + v144) >> 1;
        }
        else {
          v148 = v151 + 1;
        }
        if (v148 >= (int)v144) {
          goto LABEL_237;
        }
      }
      LOBYTE(v148) = v151 + 1;
    }
  LABEL_237:
    *(_BYTE*)(a1 + 545) = v148;
    v92 = *(_WORD*)(v90 + 610);
  }
  if ((v92 & 0x40) != 0 && v91 > *(unsigned __int16*)(a1 + 526)) {
    v153 = (signed int*)GameData_21d99a8;
    v154 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    if ((int)v154 >= 12) {
      v155 = 12;
    }
    else {
      v155 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    v156 = *(_DWORD*)(GameData_21d99a8 + 4LL * v155 - 4);
    if (v156 >= (int)v91) {
      v157 = v91;
    }
    else {
      v157 = v156;
    }
    *(_WORD*)(a1 + 526) = v157;
    if ((int)v154 < 1) {
      LOBYTE(v158) = 0;
    }
    else {
      v158 = 0;
      v159 = v153[(unsigned int)(v154 - 1)];
      if (v159 >= v157) {
        v159 = v157;
      }
      if (v157 >= *v153) {
        v160 = v159;
      }
      else {
        v160 = *v153;
      }
      while (1) {
        v161 = (unsigned int)(v158 + v154) >> 1;
        v162 = v153[v161];
        if (v160 == v162) {
          break;
        }
        if (v160 < v162) {
          LODWORD(v154) = (unsigned int)(v158 + v154) >> 1;
        }
        else {
          v158 = v161 + 1;
        }
        if (v158 >= (int)v154) {
          goto LABEL_260;
        }
      }
      LOBYTE(v158) = v161 + 1;
    }
  LABEL_260:
    *(_BYTE*)(a1 + 546) = v158;
    v92 = *(_WORD*)(v90 + 610);
  }
  if ((v92 & 0x80) != 0 && v91 > *(unsigned __int16*)(a1 + 528)) {
    v163 = (signed int*)GameData_21d99a8;
    v164 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    if ((int)v164 >= 12) {
      v165 = 12;
    }
    else {
      v165 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    v166 = *(_DWORD*)(GameData_21d99a8 + 4LL * v165 - 4);
    if (v166 >= (int)v91) {
      v167 = v91;
    }
    else {
      v167 = v166;
    }
    *(_WORD*)(a1 + 528) = v167;
    if ((int)v164 < 1) {
      LOBYTE(v168) = 0;
    }
    else {
      v168 = 0;
      v169 = v163[(unsigned int)(v164 - 1)];
      if (v169 >= v167) {
        v169 = v167;
      }
      if (v167 >= *v163) {
        v170 = v169;
      }
      else {
        v170 = *v163;
      }
      while (1) {
        v171 = (unsigned int)(v168 + v164) >> 1;
        v172 = v163[v171];
        if (v170 == v172) {
          break;
        }
        if (v170 < v172) {
          LODWORD(v164) = (unsigned int)(v168 + v164) >> 1;
        }
        else {
          v168 = v171 + 1;
        }
        if (v168 >= (int)v164) {
          goto LABEL_283;
        }
      }
      LOBYTE(v168) = v171 + 1;
    }
  LABEL_283:
    *(_BYTE*)(a1 + 547) = v168;
    v92 = *(_WORD*)(v90 + 610);
  }
  if ((v92 & 0x100) != 0 && v91 > *(unsigned __int16*)(a1 + 530)) {
    v173 = (signed int*)GameData_21d99a8;
    v174 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    if ((int)v174 >= 12) {
      v175 = 12;
    }
    else {
      v175 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    v176 = *(_DWORD*)(GameData_21d99a8 + 4LL * v175 - 4);
    if (v176 >= (int)v91) {
      v177 = v91;
    }
    else {
      v177 = v176;
    }
    *(_WORD*)(a1 + 530) = v177;
    if ((int)v174 < 1) {
      LOBYTE(v178) = 0;
    }
    else {
      v178 = 0;
      v179 = v173[(unsigned int)(v174 - 1)];
      if (v179 >= v177) {
        v179 = v177;
      }
      if (v177 >= *v173) {
        v180 = v179;
      }
      else {
        v180 = *v173;
      }
      while (1) {
        v181 = (unsigned int)(v178 + v174) >> 1;
        v182 = v173[v181];
        if (v180 == v182) {
          break;
        }
        if (v180 < v182) {
          LODWORD(v174) = (unsigned int)(v178 + v174) >> 1;
        }
        else {
          v178 = v181 + 1;
        }
        if (v178 >= (int)v174) {
          goto LABEL_306;
        }
      }
      LOBYTE(v178) = v181 + 1;
    }
  LABEL_306:
    *(_BYTE*)(a1 + 548) = v178;
    v92 = *(_WORD*)(v90 + 610);
  }
  if ((v92 & 0x200) != 0 && v91 > *(unsigned __int16*)(a1 + 532)) {
    v183 = (signed int*)GameData_21d99a8;
    v184 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    if ((int)v184 >= 12) {
      v185 = 12;
    }
    else {
      v185 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    v186 = *(_DWORD*)(GameData_21d99a8 + 4LL * v185 - 4);
    if (v186 >= (int)v91) {
      v187 = v91;
    }
    else {
      v187 = v186;
    }
    *(_WORD*)(a1 + 532) = v187;
    if ((int)v184 < 1) {
      LOBYTE(v188) = 0;
    }
    else {
      v188 = 0;
      v189 = v183[(unsigned int)(v184 - 1)];
      if (v189 >= v187) {
        v189 = v187;
      }
      if (v187 >= *v183) {
        v190 = v189;
      }
      else {
        v190 = *v183;
      }
      while (1) {
        v191 = (unsigned int)(v188 + v184) >> 1;
        v192 = v183[v191];
        if (v190 == v192) {
          break;
        }
        if (v190 < v192) {
          LODWORD(v184) = (unsigned int)(v188 + v184) >> 1;
        }
        else {
          v188 = v191 + 1;
        }
        if (v188 >= (int)v184) {
          goto LABEL_329;
        }
      }
      LOBYTE(v188) = v191 + 1;
    }
  LABEL_329:
    *(_BYTE*)(a1 + 549) = v188;
    v92 = *(_WORD*)(v90 + 610);
  }
  if ((v92 & 0x400) != 0 && v91 > *(unsigned __int16*)(a1 + 534)) {
    v193 = (signed int*)GameData_21d99a8;
    v194 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    if ((int)v194 >= 12) {
      v195 = 12;
    }
    else {
      v195 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    v196 = *(_DWORD*)(GameData_21d99a8 + 4LL * v195 - 4);
    if (v196 >= (int)v91) {
      v197 = v91;
    }
    else {
      v197 = v196;
    }
    *(_WORD*)(a1 + 534) = v197;
    if ((int)v194 < 1) {
      LOBYTE(v198) = 0;
    }
    else {
      v198 = 0;
      v199 = v193[(unsigned int)(v194 - 1)];
      if (v199 >= v197) {
        v199 = v197;
      }
      if (v197 >= *v193) {
        v200 = v199;
      }
      else {
        v200 = *v193;
      }
      while (1) {
        v201 = (unsigned int)(v198 + v194) >> 1;
        v202 = v193[v201];
        if (v200 == v202) {
          break;
        }
        if (v200 < v202) {
          LODWORD(v194) = (unsigned int)(v198 + v194) >> 1;
        }
        else {
          v198 = v201 + 1;
        }
        if (v198 >= (int)v194) {
          goto LABEL_352;
        }
      }
      LOBYTE(v198) = v201 + 1;
    }
  LABEL_352:
    *(_BYTE*)(a1 + 550) = v198;
    v92 = *(_WORD*)(v90 + 610);
  }
  if ((v92 & 0x800) != 0 && v91 > *(unsigned __int16*)(a1 + 536)) {
    v203 = (signed int*)GameData_21d99a8;
    v204 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    if ((int)v204 >= 12) {
      v205 = 12;
    }
    else {
      v205 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    v206 = *(_DWORD*)(GameData_21d99a8 + 4LL * v205 - 4);
    if (v206 >= (int)v91) {
      v207 = v91;
    }
    else {
      v207 = v206;
    }
    *(_WORD*)(a1 + 536) = v207;
    if ((int)v204 < 1) {
      LOBYTE(v208) = 0;
    }
    else {
      v208 = 0;
      v209 = v203[(unsigned int)(v204 - 1)];
      if (v209 >= v207) {
        v209 = v207;
      }
      if (v207 >= *v203) {
        v210 = v209;
      }
      else {
        v210 = *v203;
      }
      while (1) {
        v211 = (unsigned int)(v208 + v204) >> 1;
        v212 = v203[v211];
        if (v210 == v212) {
          break;
        }
        if (v210 < v212) {
          LODWORD(v204) = (unsigned int)(v208 + v204) >> 1;
        }
        else {
          v208 = v211 + 1;
        }
        if (v208 >= (int)v204) {
          goto LABEL_375;
        }
      }
      LOBYTE(v208) = v211 + 1;
    }
  LABEL_375:
    *(_BYTE*)(a1 + 551) = v208;
    v92 = *(_WORD*)(v90 + 610);
  }
  if ((v92 & 0x1000) != 0 && v91 > *(unsigned __int16*)(a1 + 538)) {
    v213 = (signed int*)GameData_21d99a8;
    v214 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    if ((int)v214 >= 12) {
      v215 = 12;
    }
    else {
      v215 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    v216 = *(_DWORD*)(GameData_21d99a8 + 4LL * v215 - 4);
    if (v216 >= (int)v91) {
      v216 = v91;
    }
    *(_WORD*)(a1 + 538) = v216;
    if ((int)v214 < 1) {
      LOBYTE(v217) = 0;
    }
    else {
      v217 = 0;
      v218 = v213[(unsigned int)(v214 - 1)];
      if (v218 >= v216) {
        v218 = v216;
      }
      if (v216 >= *v213) {
        v219 = v218;
      }
      else {
        v219 = *v213;
      }
      while (1) {
        v220 = (unsigned int)(v217 + v214) >> 1;
        v221 = v213[v220];
        if (v219 == v221) {
          break;
        }
        if (v219 < v221) {
          LODWORD(v214) = (unsigned int)(v217 + v214) >> 1;
        }
        else {
          v217 = v220 + 1;
        }
        if (v217 >= (int)v214) {
          goto LABEL_397;
        }
      }
      LOBYTE(v217) = v220 + 1;
    }
  LABEL_397:
    *(_BYTE*)(a1 + 552) = v217;
  }
  return result;
}

__int64 UnitHeroes_6d46e0(__int64 a1, unsigned __int8* a2)
{
  unsigned int v2;
  unsigned int v3;
  int* v4;
  unsigned __int64 v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  unsigned int v13;
  int v14;
  unsigned int v16;
  unsigned int v17;
  int* v18;
  unsigned __int64 v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  unsigned int v27;
  int v28;
  unsigned int v29;
  bool v30;
  unsigned int v31;
  unsigned int v32;
  int* v33;
  unsigned __int64 v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  unsigned int v42;
  int v43;
  unsigned int v44;
  unsigned int v45;
  int* v46;
  unsigned __int64 v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  unsigned int v55;
  int v56;
  unsigned int v57;
  unsigned int v58;
  int* v59;
  unsigned __int64 v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  unsigned int v68;
  int v69;
  unsigned int v70;
  unsigned int v71;
  int* v72;
  unsigned __int64 v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  unsigned int v81;
  int v82;
  unsigned int v83;
  unsigned int v84;
  int* v85;
  unsigned __int64 v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  unsigned int v94;
  int v95;
  unsigned int v96;
  unsigned int v97;
  int* v98;
  unsigned __int64 v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  unsigned int v107;
  int v108;
  unsigned int v109;
  unsigned int v110;
  int* v111;
  unsigned __int64 v112;
  int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  int v118;
  int v119;
  unsigned int v120;
  int v121;
  unsigned int v122;
  unsigned int v123;
  int* v124;
  unsigned __int64 v125;
  int v126;
  int v127;
  int v128;
  int v129;
  int v130;
  int v131;
  int v132;
  unsigned int v133;
  int v134;
  unsigned int v135;
  unsigned int v136;
  int* v137;
  unsigned __int64 v138;
  int v139;
  int v140;
  int v141;
  int v142;
  int v143;
  int v144;
  int v145;
  unsigned int v146;
  int v147;
  unsigned int v148;
  unsigned int v149;
  int* v150;
  unsigned __int64 v151;
  int v152;
  int v153;
  int v154;
  int v155;
  int v156;
  int v157;
  int v158;
  unsigned int v159;
  int v160;
  unsigned int v161;
  unsigned int v162;
  int* v163;
  unsigned __int64 v164;
  int v165;
  int v166;
  int v167;
  int v168;
  int v169;
  int v170;
  int v171;
  unsigned int v172;
  int v173;

  if (a2 == nullptr) {
    return 0;
  }
  v2 = a2[420];
  v3 = *(unsigned __int8*)(a1 + 540);
  if (v3 < v2) {
    v4 = (int*)GameData_21d99a8;
    v5 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    if ((int)v2 >= (int)v5) {
      v6 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    else {
      v6 = a2[420];
    }
    if ((int)v5 >= 12) {
      v7 = 12;
    }
    else {
      v7 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    v8 = *(_DWORD*)(GameData_21d99a8 + 4LL * v6 - 4);
    v9 = *(_DWORD*)(GameData_21d99a8 + 4LL * v7 - 4);
    if (v9 >= v8) {
      v9 = v8;
    }
    if (v8 < 0) {
      v9 = 0;
    }
    *(_WORD*)(a1 + 514) = v9;
    if ((int)v5 < 1) {
      LOBYTE(v10) = 0;
    }
    else {
      v10 = 0;
      v11 = v4[(unsigned int)(v5 - 1)];
      if (v11 >= v9) {
        v11 = v9;
      }
      if (v9 >= *v4) {
        v12 = v11;
      }
      else {
        v12 = *v4;
      }
      while (1) {
        v13 = (unsigned int)(v10 + v5) >> 1;
        v14 = v4[v13];
        if (v12 == v14) {
          break;
        }
        if (v12 < v14) {
          LODWORD(v5) = (unsigned int)(v10 + v5) >> 1;
        }
        else {
          v10 = v13 + 1;
        }
        if (v10 >= (int)v5) {
          goto LABEL_28;
        }
      }
      LOBYTE(v10) = v13 + 1;
    }
  LABEL_28:
    *(_BYTE*)(a1 + 540) = v10;
  }
  v16 = a2[421];
  v17 = *(unsigned __int8*)(a1 + 541);
  if (v17 < v16) {
    v18 = (int*)GameData_21d99a8;
    v19 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    if ((int)v16 >= (int)v19) {
      v20 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    else {
      v20 = a2[421];
    }
    if ((int)v19 >= 12) {
      v21 = 12;
    }
    else {
      v21 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    v22 = *(_DWORD*)(GameData_21d99a8 + 4LL * v20 - 4);
    v23 = *(_DWORD*)(GameData_21d99a8 + 4LL * v21 - 4);
    if (v23 >= v22) {
      v23 = v22;
    }
    if (v22 < 0) {
      v23 = 0;
    }
    *(_WORD*)(a1 + 516) = v23;
    if ((int)v19 < 1) {
      LOBYTE(v24) = 0;
    }
    else {
      v24 = 0;
      v25 = v18[(unsigned int)(v19 - 1)];
      if (v25 >= v23) {
        v25 = v23;
      }
      if (v23 >= *v18) {
        v26 = v25;
      }
      else {
        v26 = *v18;
      }
      while (1) {
        v27 = (unsigned int)(v24 + v19) >> 1;
        v28 = v18[v27];
        if (v26 == v28) {
          break;
        }
        if (v26 < v28) {
          LODWORD(v19) = (unsigned int)(v24 + v19) >> 1;
        }
        else {
          v24 = v27 + 1;
        }
        if (v24 >= (int)v19) {
          goto LABEL_54;
        }
      }
      LOBYTE(v24) = v27 + 1;
    }
  LABEL_54:
    *(_BYTE*)(a1 + 541) = v24;
  }
  v30 = v3 >= v2;
  v29 = a2[422];
  v30 = v30 && v17 >= v16;
  v31 = *(unsigned __int8*)(a1 + 542);
  v32 = !v30;
  if (v31 < v29) {
    v33 = (int*)GameData_21d99a8;
    v34 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    if ((int)v29 >= (int)v34) {
      v35 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    else {
      v35 = a2[422];
    }
    if ((int)v34 >= 12) {
      v36 = 12;
    }
    else {
      v36 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    v37 = *(_DWORD*)(GameData_21d99a8 + 4LL * v35 - 4);
    v38 = *(_DWORD*)(GameData_21d99a8 + 4LL * v36 - 4);
    if (v38 >= v37) {
      v38 = v37;
    }
    if (v37 < 0) {
      v38 = 0;
    }
    *(_WORD*)(a1 + 518) = v38;
    if ((int)v34 < 1) {
      LOBYTE(v39) = 0;
    }
    else {
      v39 = 0;
      v40 = v33[(unsigned int)(v34 - 1)];
      if (v40 >= v38) {
        v40 = v38;
      }
      if (v38 >= *v33) {
        v41 = v40;
      }
      else {
        v41 = *v33;
      }
      while (1) {
        v42 = (unsigned int)(v39 + v34) >> 1;
        v43 = v33[v42];
        if (v41 == v43) {
          break;
        }
        if (v41 < v43) {
          LODWORD(v34) = (unsigned int)(v39 + v34) >> 1;
        }
        else {
          v39 = v42 + 1;
        }
        if (v39 >= (int)v34) {
          goto LABEL_86;
        }
      }
      LOBYTE(v39) = v42 + 1;
    }
  LABEL_86:
    *(_BYTE*)(a1 + 542) = v39;
  }
  v30 = v31 >= v29;
  v44 = a2[423];
  v45 = *(unsigned __int8*)(a1 + 543);
  if (!v30) {
    v32 = 1;
  }
  if (v45 < v44) {
    v46 = (int*)GameData_21d99a8;
    v47 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    if ((int)v44 >= (int)v47) {
      v48 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    else {
      v48 = a2[423];
    }
    if ((int)v47 >= 12) {
      v49 = 12;
    }
    else {
      v49 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    v50 = *(_DWORD*)(GameData_21d99a8 + 4LL * v48 - 4);
    v51 = *(_DWORD*)(GameData_21d99a8 + 4LL * v49 - 4);
    if (v51 >= v50) {
      v51 = v50;
    }
    if (v50 < 0) {
      v51 = 0;
    }
    *(_WORD*)(a1 + 520) = v51;
    if ((int)v47 < 1) {
      LOBYTE(v52) = 0;
    }
    else {
      v52 = 0;
      v53 = v46[(unsigned int)(v47 - 1)];
      if (v53 >= v51) {
        v53 = v51;
      }
      if (v51 >= *v46) {
        v54 = v53;
      }
      else {
        v54 = *v46;
      }
      while (1) {
        v55 = (unsigned int)(v52 + v47) >> 1;
        v56 = v46[v55];
        if (v54 == v56) {
          break;
        }
        if (v54 < v56) {
          LODWORD(v47) = (unsigned int)(v52 + v47) >> 1;
        }
        else {
          v52 = v55 + 1;
        }
        if (v52 >= (int)v47) {
          goto LABEL_114;
        }
      }
      LOBYTE(v52) = v55 + 1;
    }
  LABEL_114:
    *(_BYTE*)(a1 + 543) = v52;
  }
  v30 = v45 >= v44;
  v57 = a2[424];
  v58 = *(unsigned __int8*)(a1 + 544);
  if (!v30) {
    v32 = 1;
  }
  if (v58 < v57) {
    v59 = (int*)GameData_21d99a8;
    v60 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    if ((int)v57 >= (int)v60) {
      v61 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    else {
      v61 = a2[424];
    }
    if ((int)v60 >= 12) {
      v62 = 12;
    }
    else {
      v62 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    v63 = *(_DWORD*)(GameData_21d99a8 + 4LL * v61 - 4);
    v64 = *(_DWORD*)(GameData_21d99a8 + 4LL * v62 - 4);
    if (v64 >= v63) {
      v64 = v63;
    }
    if (v63 < 0) {
      v64 = 0;
    }
    *(_WORD*)(a1 + 522) = v64;
    if ((int)v60 < 1) {
      LOBYTE(v65) = 0;
    }
    else {
      v65 = 0;
      v66 = v59[(unsigned int)(v60 - 1)];
      if (v66 >= v64) {
        v66 = v64;
      }
      if (v64 >= *v59) {
        v67 = v66;
      }
      else {
        v67 = *v59;
      }
      while (1) {
        v68 = (unsigned int)(v65 + v60) >> 1;
        v69 = v59[v68];
        if (v67 == v69) {
          break;
        }
        if (v67 < v69) {
          LODWORD(v60) = (unsigned int)(v65 + v60) >> 1;
        }
        else {
          v65 = v68 + 1;
        }
        if (v65 >= (int)v60) {
          goto LABEL_142;
        }
      }
      LOBYTE(v65) = v68 + 1;
    }
  LABEL_142:
    *(_BYTE*)(a1 + 544) = v65;
  }
  v30 = v58 >= v57;
  v70 = a2[425];
  v71 = *(unsigned __int8*)(a1 + 545);
  if (!v30) {
    v32 = 1;
  }
  if (v71 < v70) {
    v72 = (int*)GameData_21d99a8;
    v73 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    if ((int)v70 >= (int)v73) {
      v74 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    else {
      v74 = a2[425];
    }
    if ((int)v73 >= 12) {
      v75 = 12;
    }
    else {
      v75 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    v76 = *(_DWORD*)(GameData_21d99a8 + 4LL * v74 - 4);
    v77 = *(_DWORD*)(GameData_21d99a8 + 4LL * v75 - 4);
    if (v77 >= v76) {
      v77 = v76;
    }
    if (v76 < 0) {
      v77 = 0;
    }
    *(_WORD*)(a1 + 524) = v77;
    if ((int)v73 < 1) {
      LOBYTE(v78) = 0;
    }
    else {
      v78 = 0;
      v79 = v72[(unsigned int)(v73 - 1)];
      if (v79 >= v77) {
        v79 = v77;
      }
      if (v77 >= *v72) {
        v80 = v79;
      }
      else {
        v80 = *v72;
      }
      while (1) {
        v81 = (unsigned int)(v78 + v73) >> 1;
        v82 = v72[v81];
        if (v80 == v82) {
          break;
        }
        if (v80 < v82) {
          LODWORD(v73) = (unsigned int)(v78 + v73) >> 1;
        }
        else {
          v78 = v81 + 1;
        }
        if (v78 >= (int)v73) {
          goto LABEL_170;
        }
      }
      LOBYTE(v78) = v81 + 1;
    }
  LABEL_170:
    *(_BYTE*)(a1 + 545) = v78;
  }
  v30 = v71 >= v70;
  v83 = a2[426];
  v84 = *(unsigned __int8*)(a1 + 546);
  if (!v30) {
    v32 = 1;
  }
  if (v84 < v83) {
    v85 = (int*)GameData_21d99a8;
    v86 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    if ((int)v83 >= (int)v86) {
      v87 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    else {
      v87 = a2[426];
    }
    if ((int)v86 >= 12) {
      v88 = 12;
    }
    else {
      v88 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    v89 = *(_DWORD*)(GameData_21d99a8 + 4LL * v87 - 4);
    v90 = *(_DWORD*)(GameData_21d99a8 + 4LL * v88 - 4);
    if (v90 >= v89) {
      v90 = v89;
    }
    if (v89 < 0) {
      v90 = 0;
    }
    *(_WORD*)(a1 + 526) = v90;
    if ((int)v86 < 1) {
      LOBYTE(v91) = 0;
    }
    else {
      v91 = 0;
      v92 = v85[(unsigned int)(v86 - 1)];
      if (v92 >= v90) {
        v92 = v90;
      }
      if (v90 >= *v85) {
        v93 = v92;
      }
      else {
        v93 = *v85;
      }
      while (1) {
        v94 = (unsigned int)(v91 + v86) >> 1;
        v95 = v85[v94];
        if (v93 == v95) {
          break;
        }
        if (v93 < v95) {
          LODWORD(v86) = (unsigned int)(v91 + v86) >> 1;
        }
        else {
          v91 = v94 + 1;
        }
        if (v91 >= (int)v86) {
          goto LABEL_198;
        }
      }
      LOBYTE(v91) = v94 + 1;
    }
  LABEL_198:
    *(_BYTE*)(a1 + 546) = v91;
  }
  v30 = v84 >= v83;
  v96 = a2[427];
  v97 = *(unsigned __int8*)(a1 + 547);
  if (!v30) {
    v32 = 1;
  }
  if (v97 < v96) {
    v98 = (int*)GameData_21d99a8;
    v99 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    if ((int)v96 >= (int)v99) {
      v100 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    else {
      v100 = a2[427];
    }
    if ((int)v99 >= 12) {
      v101 = 12;
    }
    else {
      v101 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    v102 = *(_DWORD*)(GameData_21d99a8 + 4LL * v100 - 4);
    v103 = *(_DWORD*)(GameData_21d99a8 + 4LL * v101 - 4);
    if (v103 >= v102) {
      v103 = v102;
    }
    if (v102 < 0) {
      v103 = 0;
    }
    *(_WORD*)(a1 + 528) = v103;
    if ((int)v99 < 1) {
      LOBYTE(v104) = 0;
    }
    else {
      v104 = 0;
      v105 = v98[(unsigned int)(v99 - 1)];
      if (v105 >= v103) {
        v105 = v103;
      }
      if (v103 >= *v98) {
        v106 = v105;
      }
      else {
        v106 = *v98;
      }
      while (1) {
        v107 = (unsigned int)(v104 + v99) >> 1;
        v108 = v98[v107];
        if (v106 == v108) {
          break;
        }
        if (v106 < v108) {
          LODWORD(v99) = (unsigned int)(v104 + v99) >> 1;
        }
        else {
          v104 = v107 + 1;
        }
        if (v104 >= (int)v99) {
          goto LABEL_226;
        }
      }
      LOBYTE(v104) = v107 + 1;
    }
  LABEL_226:
    *(_BYTE*)(a1 + 547) = v104;
  }
  v30 = v97 >= v96;
  v109 = a2[428];
  v110 = *(unsigned __int8*)(a1 + 548);
  if (!v30) {
    v32 = 1;
  }
  if (v110 < v109) {
    v111 = (int*)GameData_21d99a8;
    v112 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    if ((int)v109 >= (int)v112) {
      v113 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    else {
      v113 = a2[428];
    }
    if ((int)v112 >= 12) {
      v114 = 12;
    }
    else {
      v114 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    v115 = *(_DWORD*)(GameData_21d99a8 + 4LL * v113 - 4);
    v116 = *(_DWORD*)(GameData_21d99a8 + 4LL * v114 - 4);
    if (v116 >= v115) {
      v116 = v115;
    }
    if (v115 < 0) {
      v116 = 0;
    }
    *(_WORD*)(a1 + 530) = v116;
    if ((int)v112 < 1) {
      LOBYTE(v117) = 0;
    }
    else {
      v117 = 0;
      v118 = v111[(unsigned int)(v112 - 1)];
      if (v118 >= v116) {
        v118 = v116;
      }
      if (v116 >= *v111) {
        v119 = v118;
      }
      else {
        v119 = *v111;
      }
      while (1) {
        v120 = (unsigned int)(v117 + v112) >> 1;
        v121 = v111[v120];
        if (v119 == v121) {
          break;
        }
        if (v119 < v121) {
          LODWORD(v112) = (unsigned int)(v117 + v112) >> 1;
        }
        else {
          v117 = v120 + 1;
        }
        if (v117 >= (int)v112) {
          goto LABEL_254;
        }
      }
      LOBYTE(v117) = v120 + 1;
    }
  LABEL_254:
    *(_BYTE*)(a1 + 548) = v117;
  }
  v30 = v110 >= v109;
  v122 = a2[429];
  v123 = *(unsigned __int8*)(a1 + 549);
  if (!v30) {
    v32 = 1;
  }
  if (v123 < v122) {
    v124 = (int*)GameData_21d99a8;
    v125 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    if ((int)v122 >= (int)v125) {
      v126 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    else {
      v126 = a2[429];
    }
    if ((int)v125 >= 12) {
      v127 = 12;
    }
    else {
      v127 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    v128 = *(_DWORD*)(GameData_21d99a8 + 4LL * v126 - 4);
    v129 = *(_DWORD*)(GameData_21d99a8 + 4LL * v127 - 4);
    if (v129 >= v128) {
      v129 = v128;
    }
    if (v128 < 0) {
      v129 = 0;
    }
    *(_WORD*)(a1 + 532) = v129;
    if ((int)v125 < 1) {
      LOBYTE(v130) = 0;
    }
    else {
      v130 = 0;
      v131 = v124[(unsigned int)(v125 - 1)];
      if (v131 >= v129) {
        v131 = v129;
      }
      if (v129 >= *v124) {
        v132 = v131;
      }
      else {
        v132 = *v124;
      }
      while (1) {
        v133 = (unsigned int)(v130 + v125) >> 1;
        v134 = v124[v133];
        if (v132 == v134) {
          break;
        }
        if (v132 < v134) {
          LODWORD(v125) = (unsigned int)(v130 + v125) >> 1;
        }
        else {
          v130 = v133 + 1;
        }
        if (v130 >= (int)v125) {
          goto LABEL_282;
        }
      }
      LOBYTE(v130) = v133 + 1;
    }
  LABEL_282:
    *(_BYTE*)(a1 + 549) = v130;
  }
  v30 = v123 >= v122;
  v135 = a2[430];
  v136 = *(unsigned __int8*)(a1 + 550);
  if (!v30) {
    v32 = 1;
  }
  if (v136 < v135) {
    v137 = (int*)GameData_21d99a8;
    v138 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    if ((int)v135 >= (int)v138) {
      v139 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    else {
      v139 = a2[430];
    }
    if ((int)v138 >= 12) {
      v140 = 12;
    }
    else {
      v140 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    v141 = *(_DWORD*)(GameData_21d99a8 + 4LL * v139 - 4);
    v142 = *(_DWORD*)(GameData_21d99a8 + 4LL * v140 - 4);
    if (v142 >= v141) {
      v142 = v141;
    }
    if (v141 < 0) {
      v142 = 0;
    }
    *(_WORD*)(a1 + 534) = v142;
    if ((int)v138 < 1) {
      LOBYTE(v143) = 0;
    }
    else {
      v143 = 0;
      v144 = v137[(unsigned int)(v138 - 1)];
      if (v144 >= v142) {
        v144 = v142;
      }
      if (v142 >= *v137) {
        v145 = v144;
      }
      else {
        v145 = *v137;
      }
      while (1) {
        v146 = (unsigned int)(v143 + v138) >> 1;
        v147 = v137[v146];
        if (v145 == v147) {
          break;
        }
        if (v145 < v147) {
          LODWORD(v138) = (unsigned int)(v143 + v138) >> 1;
        }
        else {
          v143 = v146 + 1;
        }
        if (v143 >= (int)v138) {
          goto LABEL_310;
        }
      }
      LOBYTE(v143) = v146 + 1;
    }
  LABEL_310:
    *(_BYTE*)(a1 + 550) = v143;
  }
  v30 = v136 >= v135;
  v148 = a2[431];
  v149 = *(unsigned __int8*)(a1 + 551);
  if (!v30) {
    v32 = 1;
  }
  if (v149 < v148) {
    v150 = (int*)GameData_21d99a8;
    v151 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    if ((int)v148 >= (int)v151) {
      v152 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    else {
      v152 = a2[431];
    }
    if ((int)v151 >= 12) {
      v153 = 12;
    }
    else {
      v153 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    v154 = *(_DWORD*)(GameData_21d99a8 + 4LL * v152 - 4);
    v155 = *(_DWORD*)(GameData_21d99a8 + 4LL * v153 - 4);
    if (v155 >= v154) {
      v155 = v154;
    }
    if (v154 < 0) {
      v155 = 0;
    }
    *(_WORD*)(a1 + 536) = v155;
    if ((int)v151 < 1) {
      LOBYTE(v156) = 0;
    }
    else {
      v156 = 0;
      v157 = v150[(unsigned int)(v151 - 1)];
      if (v157 >= v155) {
        v157 = v155;
      }
      if (v155 >= *v150) {
        v158 = v157;
      }
      else {
        v158 = *v150;
      }
      while (1) {
        v159 = (unsigned int)(v156 + v151) >> 1;
        v160 = v150[v159];
        if (v158 == v160) {
          break;
        }
        if (v158 < v160) {
          LODWORD(v151) = (unsigned int)(v156 + v151) >> 1;
        }
        else {
          v156 = v159 + 1;
        }
        if (v156 >= (int)v151) {
          goto LABEL_338;
        }
      }
      LOBYTE(v156) = v159 + 1;
    }
  LABEL_338:
    *(_BYTE*)(a1 + 551) = v156;
  }
  v30 = v149 >= v148;
  v161 = a2[432];
  v162 = *(unsigned __int8*)(a1 + 552);
  if (!v30) {
    v32 = 1;
  }
  if (v162 < v161) {
    v163 = (int*)GameData_21d99a8;
    v164 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    if ((int)v161 >= (int)v164) {
      v165 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    else {
      v165 = a2[432];
    }
    if ((int)v164 >= 12) {
      v166 = 12;
    }
    else {
      v166 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    v167 = *(_DWORD*)(GameData_21d99a8 + 4LL * v165 - 4);
    v168 = *(_DWORD*)(GameData_21d99a8 + 4LL * v166 - 4);
    if (v168 >= v167) {
      v168 = v167;
    }
    if (v167 < 0) {
      v168 = 0;
    }
    *(_WORD*)(a1 + 538) = v168;
    if ((int)v164 < 1) {
      LOBYTE(v169) = 0;
    }
    else {
      v169 = 0;
      v170 = v163[(unsigned int)(v164 - 1)];
      if (v170 >= v168) {
        v170 = v168;
      }
      if (v168 >= *v163) {
        v171 = v170;
      }
      else {
        v171 = *v163;
      }
      while (1) {
        v172 = (unsigned int)(v169 + v164) >> 1;
        v173 = v163[v172];
        if (v171 == v173) {
          break;
        }
        if (v171 < v173) {
          LODWORD(v164) = (unsigned int)(v169 + v164) >> 1;
        }
        else {
          v169 = v172 + 1;
        }
        if (v169 >= (int)v164) {
          goto LABEL_366;
        }
      }
      LOBYTE(v169) = v172 + 1;
    }
  LABEL_366:
    *(_BYTE*)(a1 + 552) = v169;
  }
  if (v162 < v161) {
    return 1;
  }
  else {
    return v32;
  }
}

#pragma GCC visibility pop
