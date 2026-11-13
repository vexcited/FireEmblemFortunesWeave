#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern _UNKNOWN GameData_1a90b0d;
extern __int64 (*GameData_2120b00[])();
extern __int64 (*GameData_2120b50[])();
extern __int64 (*GameData_2120ba0[])();
extern __int64 GameData_212bf68;
extern __int64 GameData_212c608[2];
extern __int64* GameData_212c890[3];
extern __int64* GameData_212cdf0[9];
extern __int64* GameData_212cdf8[8];
extern __int64 (***GameData_212dae8)();
extern char GameData_21c67a8;
extern __int64 GameData_21c67b0;
extern __int64 GameData_21c67b8;
extern __int64 GameData_21c67c0;
extern int GameData_21c67c8;
extern __int64 GameData_21c67d0;
extern int GameData_21c67d8;
extern __int64 GameData_21c67e0;
extern char GameData_21c67e8;
extern __int64 GameData_21c67f0;
extern __int64 GameData_21c67f8;
extern __int64 GameData_21c6800;
extern int GameData_21c6808;
extern __int64 GameData_21c6810;
extern int GameData_21c6818;
extern __int64 GameData_21c6820;
extern char GameData_21c6828;
extern __int64 GameData_21c6830;
extern __int64 GameData_21c6838;
extern __int64 GameData_21c6840;
extern int GameData_21c6848;
extern __int64 GameData_21c6850;
extern int GameData_21c6858;
extern __int64 GameData_21c6860;
extern _UNKNOWN GameData_21c6868;
extern __int64 GameData_21ca310;
extern __int64 GameData_21caab0;
extern __int64 GameData_22730f0;
__int64 GameRoutine_1553130(_QWORD);
__int64 GameRoutine_19b9520(_QWORD);
__int64 GameRoutine_19bac40(_QWORD);
__int64 GameRoutine_19bbbe0();
__int64 GameRoutine_19bbcb0(_QWORD);
__int64 GameRoutine_19bbe20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_19bc420(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a09d30(_QWORD, _QWORD);
__int64 GameRoutine_1a09fd0(_QWORD);
__int64 GameRoutine_1a09fe0(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_65a7c0(_QWORD);
__int64 GameRoutine_65c580(_QWORD, _QWORD);
__int64 GameRoutine_682bc0(_QWORD, _QWORD);
__int64 GameRoutine_7a8520(void);
__int64 GameRoutine_7a86e0(_QWORD);
__int64 GameRoutine_8c9820(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8e17a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8e7ca0(_QWORD, _QWORD);

__int64 GameHr_19b6b20(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  atomic_ullong* v11;
  __int64 (**v12)();
  _QWORD* v13;
  __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 (*v20)();
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
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v35;
  unsigned __int64 v36;
  _QWORD* v37;
  _QWORD* v38;
  unsigned __int64 v39;
  __int64 (*v40)();
  __int64 v41;
  unsigned __int64* v42;
  _QWORD* v43;
  unsigned __int64 v44;
  unsigned __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  _QWORD* v50;
  _QWORD* v51;
  unsigned __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  _QWORD* v55;
  __int64 (*v56)();
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  _QWORD* v67;
  __int64 v68;
  __int64* v69;
  __int64 v70;
  __int64 v71;
  __int64* v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  unsigned __int64 v80;
  unsigned __int64 v81;
  _QWORD* v82;
  _QWORD* v83;
  unsigned __int64 v84;
  __int64 (*v85)();
  __int64 v86;
  unsigned __int64 v87;
  unsigned __int64 v88;
  unsigned __int64 v90;
  unsigned __int64 v91;
  _QWORD* v92;
  _QWORD* v93;
  unsigned __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  unsigned __int64 v123;
  unsigned __int64 v124;
  unsigned __int64 v126;
  unsigned __int64 v127;
  _QWORD* v128;
  _QWORD* v129;
  unsigned __int64 v130;
  __int64 v131;
  __int64 v132;
  unsigned __int64 v133;
  unsigned __int64 v134;
  unsigned __int64 v136;
  unsigned __int64 v137;
  _QWORD* v138;
  _QWORD* v139;
  unsigned __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  bool v150;
  __int64 v151;
  unsigned int v152;
  __int64 (***v153)();
  __int64 v154;
  _QWORD* v155;
  _QWORD* v156;
  __int64 v157;
  _QWORD* v158;
  __int64 v159;
  _QWORD* v160;
  _QWORD* i;
  __int64* v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  _QWORD* v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  _QWORD* v173;
  _QWORD* v174;
  __int64 v175;
  _QWORD* v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  __int64 result;
  __int64 v183;
  __int64 v184;
  _QWORD* v185;
  _QWORD* v187;
  _QWORD* v188;
  __int64 v189;
  _QWORD v190[3];
  __int64 (*v191)();
  __int64 (*v192)();
  __int64 (*v193)();
  __int64 v194;
  __int64 v195;
  __int64 v196;
  __int64 v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  __int64 v201;

  v185 = a1 + 20;
  v1 = (_QWORD*)GameData_212bf68;
  if (a1[22] != 0) {
    v2 = (_QWORD*)a1[21];
    v3 = *(_QWORD**)(a1[20] + 8LL);
    *(_QWORD*)(*v2 + 8LL) = v3;
    *v3 = *v2;
    a1[22] = 0;
    if (v2 != v185) {
      do {
        v5 = (_QWORD*)v2[1];
        v6 = v2[3];
        if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
          GameRoutine_1a09c50(v6);
        }
        if (*(_QWORD*)(*v1 + 200LL) != 0) {
          v4 = 128;
        }
        else {
          v4 = 56;
        }
        GameRoutine_1a0a4e0(*v1 + v4, (_QWORD)(v2));
        v2 = v5;
      } while (v5 != v185);
    }
  }
  v7 = *(_QWORD*)(*GameData_212cdf0[0] + 72) -
       *(_QWORD*)(*GameData_212cdf0[0] + 64);
  if ((int)(v7 >> 3) >= 1) {
    v8 = 0;
    v184 = (v7 >> 3) & 0x7FFFFFFF;
    do {
      v9 = *(_QWORD*)(*(_QWORD*)(*GameData_212cdf0[0] + 64) + 8 * v8);
      v10 = GameRoutine_651b90(*v1, 224, 16, 0);
      *(_QWORD*)(v10 + 8) = 0;
      v11 = (atomic_ullong*)(v10 + 8);
      *(_QWORD*)(v10 + 24) = 0;
      v12 = (__int64 (**)())(v10 + 24);
      *(_QWORD*)v10 = GameData_2120b00;
      *(_WORD*)(v10 + 72) = 0;
      v13 = (_QWORD*)(v10 + 72);
      v14 = v10;
      *(_QWORD*)(v10 + 96) = 0;
      v15 = (_QWORD*)(v10 + 96);
      *(_QWORD*)(v10 + 112) = 0;
      v16 = (_QWORD*)(v10 + 112);
      *(_QWORD*)(v10 + 184) = 0;
      v17 = (_QWORD*)(v10 + 184);
      *(_QWORD*)(v10 + 200) = 0;
      v18 = v10 + 200;
      *(_QWORD*)(v10 + 16) = 0;
      *(_QWORD*)(v10 + 32) = 0;
      *(_QWORD*)(v10 + 40) = 0;
      *(_WORD*)(v10 + 48) = 0;
      *(_WORD*)(v10 + 160) = 0;
      *(_QWORD*)(v10 + 104) = 0;
      *(_QWORD*)(v10 + 120) = 0;
      *(_QWORD*)(v10 + 128) = 0;
      *(_WORD*)(v10 + 136) = 0;
      *(_QWORD*)(v10 + 192) = 0;
      *(_QWORD*)(v10 + 208) = 0;
      *(_QWORD*)(v10 + 216) = 0;
      LOWORD(v197) = 0;
      v191 = nullptr;
      v192 = nullptr;
      v193 = nullptr;
      LOWORD(v194) = 0;
      v200 = 0;
      v201 = 0;
      if (v9 == 0) {
        *(_QWORD*)(v10 + 32) = 0;
        *(_QWORD*)(v10 + 40) = 0;
        *v12 = nullptr;
        goto LABEL_126;
      }
      v19 = *(_QWORD*)(v9 + 32);
      v191 = (__int64 (*)())v9;
      GameRoutine_682bc0(v190, v19);
      if (v190[0] != 0) {
        v20 = *(__int64 (**)())(GameData_21ca310 + 56);
        if (v20 != nullptr) {
          v21 = 250;
          while (1) {
            v22 = *((_QWORD*)v20 + 55);
            if (v22 != 0 && *(_BYTE*)(v22 + 16) != 9 &&
                *((_QWORD*)v20 + 49) == v190[0]) {
              break;
            }
            v23 = *((_QWORD*)v20 + 333);
            if (v23 != 0 && *(_BYTE*)(v23 + 16) != 9 &&
                *((_QWORD*)v20 + 327) == v190[0]) {
              v20 = (__int64 (*)())((char*)v20 + 2224);
              break;
            }
            v24 = *((_QWORD*)v20 + 611);
            if (v24 != 0 && *(_BYTE*)(v24 + 16) != 9 &&
                *((_QWORD*)v20 + 605) == v190[0]) {
              v20 = (__int64 (*)())((char*)v20 + 4448);
              break;
            }
            v25 = *((_QWORD*)v20 + 889);
            if (v25 != 0 && *(_BYTE*)(v25 + 16) != 9 &&
                *((_QWORD*)v20 + 883) == v190[0]) {
              v20 = (__int64 (*)())((char*)v20 + 6672);
              break;
            }
            v26 = *((_QWORD*)v20 + 1167);
            if (v26 != 0 && *(_BYTE*)(v26 + 16) != 9 &&
                *((_QWORD*)v20 + 1161) == v190[0]) {
              v20 = (__int64 (*)())((char*)v20 + 8896);
              break;
            }
            v27 = *((_QWORD*)v20 + 1445);
            if (v27 != 0 && *(_BYTE*)(v27 + 16) != 9 &&
                *((_QWORD*)v20 + 1439) == v190[0]) {
              v20 = (__int64 (*)())((char*)v20 + 11120);
              break;
            }
            v28 = *((_QWORD*)v20 + 1723);
            if (v28 != 0 && *(_BYTE*)(v28 + 16) != 9 &&
                *((_QWORD*)v20 + 1717) == v190[0]) {
              v20 = (__int64 (*)())((char*)v20 + 13344);
              break;
            }
            v29 = *((_QWORD*)v20 + 2001);
            if (v29 != 0 && *(_BYTE*)(v29 + 16) != 9 &&
                *((_QWORD*)v20 + 1995) == v190[0]) {
              v20 = (__int64 (*)())((char*)v20 + 15568);
              break;
            }
            v30 = *((_QWORD*)v20 + 2279);
            if (v30 != 0 && *(_BYTE*)(v30 + 16) != 9 &&
                *((_QWORD*)v20 + 2273) == v190[0]) {
              v20 = (__int64 (*)())((char*)v20 + 17792);
              break;
            }
            v31 = *((_QWORD*)v20 + 2557);
            if (v31 != 0 && *(_BYTE*)(v31 + 16) != 9 &&
                *((_QWORD*)v20 + 2551) == v190[0]) {
              v20 = (__int64 (*)())((char*)v20 + 20016);
              break;
            }
            v21 -= 10;
            v20 = (__int64 (*)())((char*)v20 + 22240);
            if (v21 == 0) {
              goto LABEL_53;
            }
          }
        }
      }
      else {
      LABEL_53:
        v20 = nullptr;
      }
      v193 = v20;
      v183 = GameData_22730f0;
      v32 = GameRoutine_7a86e0(*(_QWORD*)(v9 + 32));
      if (v32 == 0) {
        goto LABEL_124;
      }
      v33 = *(_QWORD*)(*GameData_212c890[0] + 96);
      if (v33 == 0 || *(_QWORD*)(*GameData_212c890[0] + 112) == 0) {
        goto LABEL_124;
      }
      v35 = v33 - 1;
      if ((v33 & (v33 - 1)) != 0) {
        v36 = v32;
        if (v32 >= v33) {
          v36 = v32 % v33;
        }
      }
      else {
        v36 = v35 & v32;
      }
      v37 = *(_QWORD**)(*(_QWORD*)(*GameData_212c890[0] + 88) + 8 * v36);
      if (v37 == nullptr) {
        goto LABEL_124;
      }
      v38 = (_QWORD*)*v37;
      if (v38 == nullptr) {
        goto LABEL_124;
      }
      if ((v33 & v35) == 0) {
        while (1) {
          v41 = v38[1];
          if (v41 == v32) {
            if (v38[2] == v32) {
              goto LABEL_80;
            }
          }
          else if ((v41 & v35) != v36) {
            goto LABEL_124;
          }
          v38 = (_QWORD*)*v38;
          v40 = nullptr;
          if (v38 == nullptr) {
            goto LABEL_125;
          }
        }
      }
      while (1) {
        v39 = v38[1];
        if (v39 != v32) {
          if (v39 >= v33) {
            v39 %= v33;
          }
          if (v39 != v36) {
            goto LABEL_124;
          }
          goto LABEL_68;
        }
        if (v38[2] == v32) {
          break;
        }
      LABEL_68:
        v38 = (_QWORD*)*v38;
        if (v38 == nullptr) {
          goto LABEL_124;
        }
      }
    LABEL_80:
      v42 = (unsigned __int64*)v38[3];
      if (v42 == nullptr) {
        goto LABEL_124;
      }
      v43 = *(_QWORD**)(*(_QWORD*)(v183 + 200) + 8LL);
      v44 = v43[6];
      if (v44 == 0 || v43[8] == 0) {
        goto LABEL_124;
      }
      v46 = *v42;
      v47 = v44 - 1;
      if ((v44 & (v44 - 1)) != 0) {
        v48 = v46;
        if (v46 >= v44) {
          v48 = v46 % v44;
        }
      }
      else {
        v48 = v47 & v46;
      }
      v49 = v43[5];
      v50 = *(_QWORD**)(v49 + 8 * v48);
      if (v50 == nullptr) {
        goto LABEL_124;
      }
      v51 = (_QWORD*)*v50;
      if (v51 == nullptr) {
        goto LABEL_124;
      }
      if ((v44 & v47) == 0) {
        while (1) {
          v53 = v51[1];
          if (v46 == v53) {
            if (v51[2] == v46) {
              goto LABEL_112;
            }
          }
          else if ((v53 & v47) != v48) {
            goto LABEL_124;
          }
          v51 = (_QWORD*)*v51;
          if (v51 == nullptr) {
            goto LABEL_124;
          }
        }
      }
      while (2) {
        v52 = v51[1];
        if (v46 != v52) {
          if (v52 >= v44) {
            v52 %= v44;
          }
          if (v52 != v48) {
            goto LABEL_124;
          }
        }
        else if (v51[2] == v46) {
          break;
        }
        v51 = (_QWORD*)*v51;
        if (v51 == nullptr) {
          goto LABEL_124;
        }
        continue;
      }
    LABEL_112:
      if ((v44 & v47) != 0) {
        v54 = v46;
        if (v46 >= v44) {
          v54 = v46 % v44;
        }
        v55 = *(_QWORD**)(v49 + 8 * v54);
        do {
          do {
            v55 = (_QWORD*)*v55;
          } while (v46 != v55[1]);
        } while (v55[2] != v46);
      }
      else {
        v55 = *(_QWORD**)(v49 + 8 * (v47 & v46));
        do {
          do {
            v55 = (_QWORD*)*v55;
          } while (v46 != v55[1]);
        } while (v55[2] != v46);
      }
      if (v55[5] != 0) {
        v40 = (__int64 (*)())(v55 + 3);
        goto LABEL_125;
      }
    LABEL_124:
      v40 = nullptr;
    LABEL_125:
      v192 = v40;
      GameRoutine_19bac40(&v191);
      v56 = v192;
      *v12 = v191;
      v12[1] = v56;
      v12[2] = v193;
    LABEL_126:
      *(_QWORD*)(v14 + 160) = 0;
      *v17 = 0;
      v17[1] = 0;
      v57 = v194;
      v58 = v195;
      *v16 = 0;
      v16[1] = 0;
      v16[2] = 0;
      v16[3] = 0;
      *(_QWORD*)(v14 + 48) = v57;
      *(_QWORD*)(v14 + 56) = v58;
      v59 = v197;
      *(_QWORD*)(v14 + 64) = v196;
      v60 = v198;
      v61 = v199;
      *v13 = v59;
      v13[1] = v60;
      v62 = v200;
      v63 = v201;
      v13[2] = v61;
      *v15 = v62;
      v15[1] = v63;
      v64 = GameRoutine_19b9520(v12);
      GameRoutine_60a020(v18, v64);
      v65 = *(_QWORD*)(v14 + 24);
      v1 = (_QWORD*)GameData_212bf68;
      if (v65 != 0) {
        v66 = GameData_21caab0;
        GameRoutine_682bc0(&v191, *(_QWORD*)(v65 + 32));
        if (((GameRoutine_8e7ca0(*(_QWORD*)(v66 + 176), v191) & 1) == 0 ||
             *(_QWORD*)(v14 + 40) != 0) &&
            *(_OWORD*)(v14 + 32) != 0) {
          v67 = (_QWORD*)GameRoutine_651b90(*v1, 32, 16, 0);
          v67[2] = v12;
          v67[3] = v14;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                    memory_order_relaxed);
          v68 = a1[20];
          *v67 = v68;
          v67[1] = v185;
          *(_QWORD*)(v68 + 8) = v67;
          a1[20] = v67;
          ++a1[22];
        }
      }
      if (atomic_fetch_add(v11, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
        GameRoutine_1a09c50(v14);
      }
      ++v8;
    } while (v8 != v184);
  }
  v189 = 0;
  v187 = &v187;
  v188 = &v187;
  v69 = GameData_212cdf8[0];
  v70 = *(_QWORD*)(*GameData_212cdf8[0] + 64);
  if ((int)((unsigned __int64)(*(_QWORD*)(*GameData_212cdf8[0] + 72) - v70) >>
            3) >= 1) {
    v71 = 0;
    v72 = GameData_212c890[0];
    while (1) {
      v73 = *(_QWORD*)(v70 + 8 * v71);
      v74 = *(_QWORD*)(v73 + 32);
      v75 = *(_QWORD*)(v73 + 40);
      v76 = GameRoutine_651b90(*v1, 48, 16, 0);
      *(_QWORD*)(v76 + 8) = 0;
      *(_QWORD*)(v76 + 16) = 0;
      *(_QWORD*)(v76 + 24) = v74;
      *(_QWORD*)(v76 + 32) = v75;
      *(_QWORD*)v76 = GameData_2120b50;
      v77 = GameRoutine_7a86e0(v74);
      if (v77 == 0) {
        goto LABEL_158;
      }
      v78 = *(_QWORD*)(*v72 + 96);
      if (v78 == 0 || *(_QWORD*)(*v72 + 112) == 0) {
        goto LABEL_158;
      }
      v80 = v78 - 1;
      if ((v78 & (v78 - 1)) != 0) {
        v81 = v77;
        if (v77 >= v78) {
          v81 = v77 % v78;
        }
      }
      else {
        v81 = v80 & v77;
      }
      v82 = *(_QWORD**)(*(_QWORD*)(*v72 + 88) + 8 * v81);
      if (v82 == nullptr || (v83 = (_QWORD*)*v82) == nullptr) {
      LABEL_158:
        v85 = nullptr;
        goto LABEL_159;
      }
      if ((v78 & v80) == 0) {
        while (1) {
          v86 = v83[1];
          if (v86 == v77) {
            if (v83[2] == v77) {
              goto LABEL_222;
            }
          }
          else if ((v86 & v80) != v81) {
            goto LABEL_158;
          }
          v83 = (_QWORD*)*v83;
          v85 = nullptr;
          if (v83 == nullptr) {
            goto LABEL_159;
          }
        }
      }
      while (1) {
        v84 = v83[1];
        if (v84 == v77) {
          break;
        }
        if (v84 >= v78) {
          v84 %= v78;
        }
        if (v84 != v81) {
          goto LABEL_158;
        }
      LABEL_148:
        v83 = (_QWORD*)*v83;
        if (v83 == nullptr) {
          goto LABEL_158;
        }
      }
      if (v83[2] != v77) {
        goto LABEL_148;
      }
    LABEL_222:
      v85 = (__int64 (*)())v83[3];
    LABEL_159:
      v87 = GameRoutine_7a86e0(v75);
      if (v87 == 0) {
        goto LABEL_183;
      }
      v88 = *(_QWORD*)(*v72 + 96);
      if (v88 == 0 || *(_QWORD*)(*v72 + 112) == 0) {
        goto LABEL_183;
      }
      v90 = v88 - 1;
      if ((v88 & (v88 - 1)) != 0) {
        v91 = v87;
        if (v87 >= v88) {
          v91 = v87 % v88;
        }
      }
      else {
        v91 = v90 & v87;
      }
      v92 = *(_QWORD**)(*(_QWORD*)(*v72 + 88) + 8 * v91);
      if (v92 != nullptr && (v93 = (_QWORD*)*v92) != nullptr) {
        if ((v88 & v90) == 0) {
          while (1) {
            v96 = v93[1];
            if (v96 == v87) {
              if (v93[2] == v87) {
                goto LABEL_223;
              }
            }
            else if ((v96 & v90) != v91) {
              goto LABEL_183;
            }
            v93 = (_QWORD*)*v93;
            v95 = 0;
            if (v93 == nullptr) {
              goto LABEL_186;
            }
          }
        }
        do {
          v94 = v93[1];
          if (v94 == v87) {
            if (v93[2] == v87) {
            LABEL_223:
              v95 = v93[3];
              if (v85 == nullptr) {
                goto LABEL_351;
              }
              goto LABEL_187;
            }
          }
          else {
            if (v94 >= v88) {
              v94 %= v88;
            }
            if (v94 != v91) {
              goto LABEL_183;
            }
          }
          v93 = (_QWORD*)*v93;
        } while (v93 != nullptr);
        v95 = 0;
      LABEL_186:
        if (v85 == nullptr) {
          goto LABEL_351;
        }
      }
      else {
      LABEL_183:
        v95 = 0;
        if (v85 == nullptr) {
          goto LABEL_351;
        }
      }
    LABEL_187:
      v97 = *(_QWORD*)(GameData_21ca310 + 56);
      if (v97 == 0) {
        goto LABEL_351;
      }
      v98 = 250;
      v99 = *(_QWORD*)(GameData_21ca310 + 56);
      while (1) {
        v100 = *(_QWORD*)(v99 + 440);
        if (v100 != 0 && *(_BYTE*)(v100 + 16) != 9 &&
            *(__int64 (**)())(v99 + 392) == v85) {
          break;
        }
        v101 = *(_QWORD*)(v99 + 2664);
        if (v101 != 0 && *(_BYTE*)(v101 + 16) != 9 &&
            *(__int64 (**)())(v99 + 2616) == v85) {
          v99 += 2224;
          break;
        }
        v102 = *(_QWORD*)(v99 + 4888);
        if (v102 != 0 && *(_BYTE*)(v102 + 16) != 9 &&
            *(__int64 (**)())(v99 + 4840) == v85) {
          v110 = 4448;
          goto LABEL_232;
        }
        v103 = *(_QWORD*)(v99 + 7112);
        if (v103 != 0 && *(_BYTE*)(v103 + 16) != 9 &&
            *(__int64 (**)())(v99 + 7064) == v85) {
          v110 = 6672;
          goto LABEL_232;
        }
        v104 = *(_QWORD*)(v99 + 9336);
        if (v104 != 0 && *(_BYTE*)(v104 + 16) != 9 &&
            *(__int64 (**)())(v99 + 9288) == v85) {
          v110 = 8896;
          goto LABEL_232;
        }
        v105 = *(_QWORD*)(v99 + 11560);
        if (v105 != 0 && *(_BYTE*)(v105 + 16) != 9 &&
            *(__int64 (**)())(v99 + 11512) == v85) {
          v110 = 11120;
          goto LABEL_232;
        }
        v106 = *(_QWORD*)(v99 + 13784);
        if (v106 != 0 && *(_BYTE*)(v106 + 16) != 9 &&
            *(__int64 (**)())(v99 + 13736) == v85) {
          v110 = 13344;
          goto LABEL_232;
        }
        v107 = *(_QWORD*)(v99 + 16008);
        if (v107 != 0 && *(_BYTE*)(v107 + 16) != 9 &&
            *(__int64 (**)())(v99 + 15960) == v85) {
          v110 = 15568;
          goto LABEL_232;
        }
        v108 = *(_QWORD*)(v99 + 18232);
        if (v108 != 0 && *(_BYTE*)(v108 + 16) != 9 &&
            *(__int64 (**)())(v99 + 18184) == v85) {
          v110 = 17792;
          goto LABEL_232;
        }
        v109 = *(_QWORD*)(v99 + 20456);
        if (v109 != 0 && *(_BYTE*)(v109 + 16) != 9 &&
            *(__int64 (**)())(v99 + 20408) == v85) {
          v110 = 20016;
        LABEL_232:
          v99 += v110;
          break;
        }
        v99 += 22240;
        v98 -= 10;
        if (v98 == 0) {
          goto LABEL_352;
        }
      }
      v98 = 0;
      if ((*(_BYTE*)(v99 + 416) & 8) != 0 || v95 == 0) {
        goto LABEL_352;
      }
      v111 = 250;
      while (1) {
        v112 = *(_QWORD*)(v97 + 440);
        if (v112 != 0 && *(_BYTE*)(v112 + 16) != 9 &&
            *(_QWORD*)(v97 + 392) == v95) {
          goto LABEL_276;
        }
        v113 = *(_QWORD*)(v97 + 2664);
        if (v113 != 0 && *(_BYTE*)(v113 + 16) != 9 &&
            *(_QWORD*)(v97 + 2616) == v95) {
          if ((*(_BYTE*)(v97 + 2640) & 8) != 0) {
            goto LABEL_351;
          }
          goto LABEL_280;
        }
        v114 = *(_QWORD*)(v97 + 4888);
        if (v114 != 0 && *(_BYTE*)(v114 + 16) != 9 &&
            *(_QWORD*)(v97 + 4840) == v95) {
          v122 = 4448;
          goto LABEL_279;
        }
        v115 = *(_QWORD*)(v97 + 7112);
        if (v115 != 0 && *(_BYTE*)(v115 + 16) != 9 &&
            *(_QWORD*)(v97 + 7064) == v95) {
          v122 = 6672;
          goto LABEL_279;
        }
        v116 = *(_QWORD*)(v97 + 9336);
        if (v116 != 0 && *(_BYTE*)(v116 + 16) != 9 &&
            *(_QWORD*)(v97 + 9288) == v95) {
          v122 = 8896;
          goto LABEL_279;
        }
        v117 = *(_QWORD*)(v97 + 11560);
        if (v117 != 0 && *(_BYTE*)(v117 + 16) != 9 &&
            *(_QWORD*)(v97 + 11512) == v95) {
          v122 = 11120;
          goto LABEL_279;
        }
        v118 = *(_QWORD*)(v97 + 13784);
        if (v118 != 0 && *(_BYTE*)(v118 + 16) != 9 &&
            *(_QWORD*)(v97 + 13736) == v95) {
          v122 = 13344;
          goto LABEL_279;
        }
        v119 = *(_QWORD*)(v97 + 16008);
        if (v119 != 0 && *(_BYTE*)(v119 + 16) != 9 &&
            *(_QWORD*)(v97 + 15960) == v95) {
          break;
        }
        v120 = *(_QWORD*)(v97 + 18232);
        if (v120 != 0 && *(_BYTE*)(v120 + 16) != 9 &&
            *(_QWORD*)(v97 + 18184) == v95) {
          v122 = 17792;
        LABEL_279:
          if ((*(_BYTE*)(v97 + v122 + 416) & 8) != 0) {
            goto LABEL_351;
          }
          goto LABEL_280;
        }
        v121 = *(_QWORD*)(v97 + 20456);
        if (v121 != 0 && *(_BYTE*)(v121 + 16) != 9 &&
            *(_QWORD*)(v97 + 20408) == v95) {
          v122 = 20016;
          goto LABEL_279;
        }
        v97 += 22240;
        v111 -= 10;
        if (v111 == 0) {
          goto LABEL_351;
        }
      }
      v97 += 15568;
    LABEL_276:
      if ((*(_BYTE*)(v97 + 416) & 8) != 0) {
        goto LABEL_351;
      }
    LABEL_280:
      if ((GameRoutine_19bbcb0(v85) & 1) != 0 ||
          (GameRoutine_19bbcb0(v95) & 1) != 0) {
        goto LABEL_351;
      }
      v123 = GameRoutine_7a86e0(&GameData_1a90b0d);
      if (v123 != 0) {
        v124 = *(_QWORD*)(*v72 + 96);
        if (v124 != 0 && *(_QWORD*)(*v72 + 112) != 0) {
          v126 = v124 - 1;
          if ((v124 & (v124 - 1)) != 0) {
            v127 = v123;
            if (v123 >= v124) {
              v127 = v123 % v124;
            }
          }
          else {
            v127 = v126 & v123;
          }
          v128 = *(_QWORD**)(*(_QWORD*)(*v72 + 88) + 8 * v127);
          if (v128 != nullptr) {
            v129 = (_QWORD*)*v128;
            if (v129 != nullptr) {
              if ((v124 & v126) == 0) {
                while (1) {
                  v131 = v129[1];
                  if (v131 == v123) {
                    if (v129[2] == v123) {
                      goto LABEL_307;
                    }
                  }
                  else if ((v131 & v126) != v127) {
                    goto LABEL_309;
                  }
                  v129 = (_QWORD*)*v129;
                  if (v129 == nullptr) {
                    goto LABEL_309;
                  }
                }
              }
              do {
                v130 = v129[1];
                if (v130 == v123) {
                  if (v129[2] == v123) {
                  LABEL_307:
                    v132 = v129[3];
                    if (v132 == 0 ||
                        *(_QWORD*)(*((_QWORD*)v85 + 3) + 1672LL) !=
                            *(_QWORD*)(*(_QWORD*)(v132 + 24) + 1672LL)) {
                      break;
                    }
                  LABEL_336:
                    v143 = GameRoutine_8c9820(v85, v95, 4);
                    if (v143 != 0 && GameData_21caab0 != 0) {
                      v144 =
                          GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                             *(_QWORD*)(v143 + 24) + 40LL);
                      if (v144 != 0 && *(_DWORD*)(v144 + 32) != 0) {
                        v98 = 1000000000;
                        goto LABEL_352;
                      }
                    }
                  LABEL_351:
                    v98 = 0;
                    goto LABEL_352;
                  }
                }
                else {
                  if (v130 >= v124) {
                    v130 %= v124;
                  }
                  if (v130 != v127) {
                    break;
                  }
                }
                v129 = (_QWORD*)*v129;
              } while (v129 != nullptr);
            }
          }
        }
      }
    LABEL_309:
      v133 = GameRoutine_7a86e0(&GameData_1a90b0d);
      if (v133 == 0) {
        goto LABEL_341;
      }
      v134 = *(_QWORD*)(*v72 + 96);
      if (v134 == 0 || *(_QWORD*)(*v72 + 112) == 0) {
        goto LABEL_341;
      }
      v136 = v134 - 1;
      if ((v134 & (v134 - 1)) != 0) {
        v137 = v133;
        if (v133 >= v134) {
          v137 = v133 % v134;
        }
      }
      else {
        v137 = v136 & v133;
      }
      v138 = *(_QWORD**)(*(_QWORD*)(*v72 + 88) + 8 * v137);
      if (v138 == nullptr) {
        goto LABEL_341;
      }
      v139 = (_QWORD*)*v138;
      if (v139 == nullptr) {
        goto LABEL_341;
      }
      if ((v134 & v136) == 0) {
        while (1) {
          v141 = v139[1];
          if (v141 == v133) {
            if (v139[2] == v133) {
              goto LABEL_334;
            }
          }
          else if ((v141 & v136) != v137) {
            goto LABEL_341;
          }
          v139 = (_QWORD*)*v139;
          if (v139 == nullptr) {
            goto LABEL_341;
          }
        }
      }
      while (2) {
        v140 = v139[1];
        if (v140 != v133) {
          if (v140 >= v134) {
            v140 %= v134;
          }
          if (v140 != v137) {
            goto LABEL_341;
          }
        }
        else if (v139[2] == v133) {
          break;
        }
        v139 = (_QWORD*)*v139;
        if (v139 == nullptr) {
          goto LABEL_341;
        }
        continue;
      }
    LABEL_334:
      v142 = v139[3];
      if (v142 != 0 && *(_QWORD*)(*(_QWORD*)(v95 + 24) + 1672LL) ==
                           *(_QWORD*)(*(_QWORD*)(v142 + 24) + 1672LL)) {
        goto LABEL_336;
      }
    LABEL_341:
      v145 = GameRoutine_8c9820(v85, v95, 3);
      if (v145 == 0) {
        goto LABEL_351;
      }
      if (GameData_21caab0 == 0) {
        goto LABEL_351;
      }
      v146 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                *(_QWORD*)(v145 + 24) + 40LL);
      if (v146 == 0 || *(_DWORD*)(v146 + 32) == 0) {
        goto LABEL_351;
      }
      v147 = *((_QWORD*)v85 + 3);
      v148 = *(_QWORD*)(v95 + 24);
      v191 = nullptr;
      v192 = v85;
      v190[0] = 0;
      v190[1] = v95;
      v149 = *(_QWORD*)(*(_QWORD*)(v148 + 1784) + 272LL);
      v193 = *(__int64 (**)())(*(_QWORD*)(v147 + 1784) + 272LL);
      v190[2] = v149;
      v150 = v193 == nullptr || v149 == 0;
      if (v150 || (v151 = *(_QWORD*)(GameData_21caab0 + 128),
                   ((v152 = GameRoutine_8e17a0(v151, &v191, v190)) &
                    0x80000000) != 0)) {
        v153 = GameData_212dae8;
      }
      else {
        v153 = (__int64 (***)())(*(_QWORD*)(v151 + 8) + 56LL * v152);
      }
      if (*((_BYTE*)v153 + 10) != 0) {
        v157 = 10000LL * *((unsigned __int16*)v153 + 6) + 100000000;
      }
      else {
        v157 = 100000000;
      }
      v98 = v157 + *((unsigned int*)v153 + 4);
    LABEL_352:
      v154 = *v1;
      *(_QWORD*)(v76 + 40) = v98;
      v155 = (_QWORD*)GameRoutine_651b90(v154, 32, 16, 0);
      v155[2] = v76 + 24;
      v155[3] = v76;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v76 + 8), 1u,
                                memory_order_relaxed);
      v156 = v187;
      v187 = v155;
      *v155 = v156;
      v155[1] = &v187;
      v156[1] = v155;
      ++v189;
      if (atomic_fetch_add((atomic_ullong* volatile)(v76 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v76 + 16LL))(v76);
        GameRoutine_1a09c50(v76);
      }
      ++v71;
      v70 = *(_QWORD*)(*v69 + 64);
      if (v71 >= (int)((unsigned __int64)(*(_QWORD*)(*v69 + 72) - v70) >> 3)) {
        v158 = v188;
        v159 = v189;
        goto LABEL_361;
      }
    }
  }
  v159 = 0;
  v158 = &v187;
LABEL_361:
  v160 = a1;
  v191 = GameRoutine_19bbbe0;
  GameRoutine_19bbe20(v158, &v187, v159, &v191);
  for (i = v188; i != &v187; i = (_QWORD*)i[1]) {
    v162 = (__int64*)i[2];
    v163 = i[3];
    if (v163 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v163 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v162[2] != 0 && v185 != (_QWORD*)v160[21]) {
      v165 = *v162;
      v164 = v162[1];
      v166 = v185;
      while (1) {
        v167 = *(_QWORD*)(*v166 + 16LL);
        if (*(_QWORD*)v167 == 0) {
          break;
        }
        v168 = GameData_21caab0;
        GameRoutine_682bc0(&v191, *(_QWORD*)(*(_QWORD*)v167 + 32LL));
        if ((GameRoutine_8e7ca0(*(_QWORD*)(v168 + 176), v191) & 1) != 0 &&
                *(_QWORD*)(v167 + 16) == 0 ||
            *(_OWORD*)(v167 + 8) == 0 || (v169 = *(_QWORD*)(v167 + 88)) == 0 ||
            (v170 = GameData_21caab0,
             GameRoutine_682bc0(&v191, *(_QWORD*)(v169 + 32)),
             (GameRoutine_8e7ca0(*(_QWORD*)(v170 + 176), v191) & 1) != 0) &&
                *(_QWORD*)(v167 + 104) == 0 ||
            *(_OWORD*)(v167 + 96) == 0) {
          if (*(_QWORD*)v167 == 0) {
            goto LABEL_383;
          }
          v171 = *(_QWORD*)(*(_QWORD*)v167 + 32LL);
          if ((unsigned int)GameRoutine_1a09d30(v171, v165) == 0) {
            goto LABEL_383;
          }
          if ((unsigned int)GameRoutine_1a09d30(v171, v164) == 0) {
            v164 = v165;
          LABEL_383:
            v160 = a1;
            break;
          }
        }
        v160 = a1;
        v166 = (_QWORD*)*v166;
        if (v166 == (_QWORD*)a1[21]) {
          goto LABEL_385;
        }
      }
      GameRoutine_19bc420(v160, v167, v164);
    }
  LABEL_385:
    if (v163 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v163 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v163 + 16LL))(v163);
      GameRoutine_1a09c50(v163);
    }
  }
  v172 = GameData_212bf68;
  if (v189 != 0) {
    v173 = v188;
    v174 = (_QWORD*)v187[1];
    *(_QWORD*)(*v188 + 8LL) = v174;
    *v174 = *v173;
    v189 = 0;
    if (v173 != &v187) {
      do {
        v176 = (_QWORD*)v173[1];
        v177 = v173[3];
        if (v177 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v177 + 8),
                                          0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v177 + 16LL))(v177);
          GameRoutine_1a09c50(v177);
          v172 = GameData_212bf68;
        }
        if (*(_QWORD*)(*(_QWORD*)v172 + 200LL) != 0) {
          v175 = 128;
        }
        else {
          v175 = 56;
        }
        GameRoutine_1a0a4e0(*(_QWORD*)v172 + v175, (_QWORD)(v173));
        v173 = v176;
      } while (v176 != &v187);
    }
  }
  v178 = *(_QWORD*)v172;
  a1[23] = a1[21];
  v179 = GameRoutine_651b90(v178, 152, 16, 0);
  v180 = GameData_212c608[0];
  *(_QWORD*)(v179 + 96) = 0;
  *(_QWORD*)(v179 + 104) = 0;
  *(_QWORD*)(v179 + 112) = 0;
  *(_QWORD*)(v179 + 120) = 0;
  *(_QWORD*)(v179 + 128) = 0;
  *(_WORD*)(v179 + 136) = 0;
  *(_QWORD*)(v179 + 16) = 0;
  *(_QWORD*)(v179 + 24) = "NULL";
  *(_QWORD*)(v179 + 138) = 0;
  *(_QWORD*)(v179 + 144) = 0;
  *(_QWORD*)(v179 + 32) = 0;
  *(_QWORD*)(v179 + 40) = 0;
  *(_QWORD*)(v179 + 48) = 0;
  *(_QWORD*)(v179 + 56) = 0;
  *(_QWORD*)(v179 + 64) = 0;
  *(_QWORD*)(v179 + 72) = 0;
  *(_QWORD*)(v179 + 80) = 0;
  *(_QWORD*)(v179 + 88) = 0;
  *(_QWORD*)v179 = v180 + 16;
  *(_QWORD*)(v179 + 8) = 0;
  GameRoutine_65a7c0(v179);
  *(_QWORD*)v179 = GameData_2120ba0;
  GameRoutine_1553130(19);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)GameRoutine_1a09fd0(&GameData_21c6868) != 0) {
    GameData_21c67d0 = 0;
    GameData_21c67d8 = 0;
    GameData_21c67e0 = 0;
    GameData_21c67b0 = 0;
    GameData_21c67b8 = 0;
    GameData_21c67c0 = 0;
    GameData_21c67c8 = 0;
    GameData_21c6808 = 0;
    GameData_21c6810 = 0;
    GameData_21c6818 = 0;
    GameData_21c67a8 = 3;
    GameData_21c6820 = 0;
    GameData_21c6828 = 0;
    GameData_21c6850 = 0;
    GameData_21c6858 = 0;
    GameData_21c6860 = 0;
    GameData_21c6848 = 0;
    GameData_21c6838 = 0;
    GameData_21c6840 = 0;
    GameData_21c6830 = 0;
    GameData_21c67e8 = 14;
    GameData_21c67f0 = 0;
    GameData_21c67f8 = 16;
    GameData_21c6800 = 1;
    GameRoutine_1a09fe0(&GameData_21c6868);
  }
  v181 = a1[5];
  if (v181 != 0) {
    *(_QWORD*)(v181 + 48) = v179;
    *(_QWORD*)(v179 + 56) = a1[5];
  }
  a1[5] = v179;
  *(_QWORD*)(v179 + 24) = "ProcTalkMouseMode";
  *(_QWORD*)(v179 + 32) = a1;
  *(_DWORD*)(v179 + 140) = GameRoutine_7a8520();
  *(_QWORD*)(v179 + 8) = &GameData_21c67a8;
  *(_QWORD*)(v179 + 16) = &GameData_21c67a8;
  *(_QWORD*)(v179 + 64) = 0;
  *(_QWORD*)(v179 + 72) = 24;
  *(_QWORD*)(v179 + 80) = 1;
  (*(void (**)(__int64))(*(_QWORD*)v179 + 32LL))(v179);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v179 + 136LL))(v179);
  if ((result & 1) != 0 && (*(_WORD*)(v179 + 136) & 0x100) == 0) {
    *(_WORD*)(v179 + 136) |= 0x100u;
  }
  return result;
}

#pragma GCC visibility pop
