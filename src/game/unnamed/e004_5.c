#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};

extern __int64 (*GameData_1fe7160[])();

extern __int64 (*GameData_1fe7220[])();

extern __int64 (*GameData_1fe7300[])();

extern __int64 GameData_212bf68;

extern __int64 GameData_212c608[2];

extern __int64* GameData_212d6d0;

extern __int64 GameData_21eea40;

extern _UNKNOWN GameData_2216780;

extern __int64 GameData_2216828;

extern __int64 GameData_2216830;

extern char GameData_2216850;

extern char GameData_2216858;

extern __int64 GameData_2219068;

extern __int64 GameData_2265ee0;

__int64 GameRoutine_1070c00(_QWORD, _QWORD);

__int64 GameRoutine_1084940(_QWORD, _QWORD, double);

__int64 GameRoutine_108cfd0(_QWORD);

__n128 GameRoutine_1a09c50(_QWORD);

__int64 GameRoutine_1a09c70(_QWORD);

__int64 GameRoutine_1a09cf0(_QWORD, _QWORD, _QWORD);

__n128 GameRoutine_1a0a4e0(_QWORD, _QWORD);

__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);

__int64 GameRoutine_60a270(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_60abc0(_QWORD, _QWORD);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_658c00(_QWORD);

__int64 GameRoutine_65a940(_QWORD);

__int64 GameRoutine_667c80(_QWORD);

__int64 GameRoutine_7a8220(_QWORD, _QWORD);

__int64 GameRoutine_876a40(_QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_a78a90(_QWORD);

__int64 GameRoutine_d71160(__int64**, __int64, __int64, int);

__int64 GameRoutine_e273d0(_QWORD);

__int64 GameRoutine_e28380(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_e291a0(_QWORD, _QWORD);

__int64 GameRoutine_e29460(_QWORD, _QWORD);

__int64 GameRoutine_e299e0(_QWORD, _QWORD);

__int64 GameRoutine_e665e0(__int64 result);

__int64 GameRoutine_e7da80(double);

__int64 GameRoutine_ff7720(_QWORD, _QWORD);

__int64 GameHr_e27700(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, _QWORD* a6, _DWORD* a7)
{
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64* v26;
  char* v27;
  unsigned __int64 v28;
  char* v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  char v37;
  __int64 v38;
  __int64 v39;
  __int64* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  _QWORD* v46;
  unsigned __int64 v47;
  unsigned int v48;
  __int64 v49;
  _QWORD* v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  bool v58;
  unsigned __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  char* v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  unsigned __int64 v73;
  char* v74;
  __int64 v75;
  _QWORD* v76;
  __int64 v77;
  _QWORD* v78;
  int v79;
  char* v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  bool v83;
  unsigned __int64 v84;
  unsigned __int64 v85;
  __int64 v86;
  unsigned __int64 v87;
  int v88;
  int v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  _QWORD* v93;
  _QWORD* v94;
  __int64 v95;
  _QWORD* v96;
  _QWORD* v97;
  char* v98;
  __int64 v99;
  __int64 v100;
  unsigned __int8* v101;
  unsigned __int8* v102;
  unsigned __int8* v103;
  unsigned __int8* v104;
  unsigned __int64 v105;
  unsigned __int64 v106;
  unsigned __int8* v107;
  unsigned __int64 v108;
  __int64 v109;
  char* v110;
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
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  char v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  _BYTE* v145;
  __int64 v146;
  char v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  _QWORD* v152;
  _QWORD* v153;
  __int64 v154;
  unsigned __int64 v155;
  __int64 v156;
  __int64 v157;
  _QWORD* v158;
  __int64 v159;
  unsigned __int64 v160;
  char* v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  _QWORD v175[2];
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  _QWORD v192[2];
  unsigned __int8 v193;
  __int64 v194;
  _QWORD* v195;
  char* v196;

  v195 = nullptr;
  v196 = nullptr;
  v194 = 0;
  *a7 = 0;
  if (a3 == a5 && (unsigned int)GameRoutine_1a09cf0(a2, a4, a3) == 0) {
    v24 = GameRoutine_1a09c70(a2);
    if (v24 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_256;
    }
    v28 = v24;
    if (v24 >= 0x17) {
      if ((v24 | 7) == 0x17) {
        v35 = 26;
      }
      else {
        v35 = (v24 | 7) + 1;
      }
      v29 = (char*)GameRoutine_651b90(GameData_2265ee0, v35, 16, 0);
      v160 = v28;
      v161 = v29;
      v159 = v35 | 1;
    }
    else {
      LOBYTE(v159) = 2 * v24;
      v29 = (char*)&v159 + 1;
      if (v24 == 0) {
        goto LABEL_52;
      }
    }
    GameRoutine_1a0b940(v29, a2, v28);
  LABEL_52:
    v29[v28] = 0;
    GameRoutine_7a8220(&v194, &v159);
    if ((v159 & 1) != 0 && v161 != nullptr) {
      v36 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v36 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v36, v161);
    }
    goto LABEL_63;
  }
  v15 = *(_QWORD*)(a1 + 224);
  v14 = *(_QWORD*)(a1 + 232);
  v16 = v15;
  if (v15 != v14) {
    v16 = *(_QWORD*)(a1 + 224);
    while (1) {
      v17 = *(unsigned __int8*)(v16 + 56);
      v18 = *(_QWORD*)(v16 + 64);
      if ((v17 & 1) == 0) {
        v18 = v17 >> 1;
      }
      if (a3 == v18) {
        v19 = (v17 & 1) != 0 ? *(_QWORD*)(v16 + 72) : v16 + 57;
        if ((unsigned int)GameRoutine_1a09cf0(a2, v19, a3) == 0) {
          break;
        }
      }
      v16 += 80;
      if (v16 == v14) {
        v20 = 0;
        if (v15 != v14) {
          goto LABEL_21;
        }
        goto LABEL_28;
      }
    }
  }
  if (v16 == v14) {
    v20 = 0;
  }
  else {
    v20 = v16;
  }
  if (v15 != v14) {
    while (1) {
    LABEL_21:
      v21 = *(unsigned __int8*)(v15 + 56);
      v22 = *(_QWORD*)(v15 + 64);
      if ((v21 & 1) == 0) {
        v22 = v21 >> 1;
      }
      if (a5 == v22) {
        v23 = (v21 & 1) != 0 ? *(_QWORD*)(v15 + 72) : v15 + 57;
        if ((unsigned int)GameRoutine_1a09cf0(a4, v23, a5) == 0) {
          break;
        }
      }
      v15 += 80;
      if (v15 == v14) {
        goto LABEL_63;
      }
    }
  }
LABEL_28:
  if (v20 != 0 && v15 != v14 && v15 != 0) {
    GameRoutine_d71160((__int64**)(a1 + 32), v20, v15, 0);
    v24 = GameRoutine_1a09c70(a4);
    if (v24 < 0xFFFFFFFFFFFFFFF7LL) {
      v25 = v24;
      v26 = (__int64*)GameData_212bf68;
      if (v24 >= 0x17) {
        if ((v24 | 7) == 0x17) {
          v30 = 26;
        }
        else {
          v30 = (v24 | 7) + 1;
        }
        v27 = (char*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v30, 16, 0);
        v160 = v25;
        v161 = v27;
        v159 = v30 | 1;
      }
      else {
        LOBYTE(v159) = 2 * v24;
        v27 = (char*)&v159 + 1;
        if (v24 == 0) {
        LABEL_44:
          v31 = *v26;
          v27[v25] = 0;
          v32 = (__int64*)GameRoutine_651b90(v31, 24, 16, 0);
          v33 = v160;
          v194 = (__int64)v32;
          v195 = v32 + 3;
          v196 = (char*)(v32 + 3);
          *v32 = v159;
          v32[1] = v33;
          v32[2] = (__int64)v161;
          v34 = *(_QWORD*)(v15 + 8);
          if (v34 != 0) {
            do {
              GameRoutine_e28380(&v194, v194, v34 + 56);
              v34 = *(_QWORD*)(v34 + 8);
            } while (v34 != 0);
            *a7 = *(_DWORD*)v15;
          }
          else {
            v37 = *(_BYTE*)v32;
            *a7 = *(_DWORD*)v15;
            if ((v37 & 1) != 0) {
              v38 = v32[2];
              if (v38 != 0) {
                v39 = *v26;
                v40 = v32;
                v41 = 128;
                if (*(_QWORD*)(v39 + 200) == 0) {
                  v41 = 56;
                }
                GameRoutine_1a0a4e0(v39 + v41, v38);
                v32 = v40;
              }
            }
            v195 = v32;
          }
          goto LABEL_63;
        }
      }
      GameRoutine_1a0b940(v27, a4, v25);
      goto LABEL_44;
    }
  LABEL_256:
    GameRoutine_60a1d0(v24);
  }
LABEL_63:
  v42 = v194;
  v152 = v195;
  v44 = *a6;
  v43 = a6[1];
  if (*a6 != v43) {
    do {
      v45 = v43 - 296;
      GameRoutine_e273d0(v43 - 152);
      GameRoutine_e273d0(v45);
      v43 = v45;
    } while (v45 != v44);
  }
  v46 = v152;
  a6[1] = v44;
  v47 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v152 - v42) >> 3);
  if (v47 == 0) {
    v48 = 0;
    if (v42 == 0) {
      return v48;
    }
    goto LABEL_70;
  }
  v155 = v47 - 1;
  if (v47 != 1) {
    v49 = 0;
    v158 = (_QWORD*)(a1 + 208);
    v50 = (_QWORD*)GameData_212bf68;
    v153 = a6;
    v154 = v42;
    v156 = a1;
    while (1) {
      v51 = v42 + 24 * v49;
      v52 = *(unsigned __int8*)(v51 + 24);
      if ((*(_BYTE*)v51 & 1) != 0) {
        v53 = *(_QWORD*)(v51 + 16);
      }
      else {
        v53 = v51 + 1;
      }
      v54 = v51 + 25;
      v57 = v51 + 32;
      v55 = *(_QWORD*)(v51 + 32);
      v56 = *(_QWORD*)(v57 + 8);
      v58 = (v52 & 1) == 0;
      v59 = v52 >> 1;
      if (v58) {
        v60 = v54;
      }
      else {
        v60 = v56;
      }
      if (v58) {
        v61 = v59;
      }
      else {
        v61 = v55;
      }
      v24 = GameRoutine_1a09c70(v53);
      if (v24 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_256;
      }
      v62 = v24;
      if (v24 >= 0x17) {
        if ((v24 | 7) == 0x17) {
          v64 = 26;
        }
        else {
          v64 = (v24 | 7) + 1;
        }
        v65 = GameRoutine_651b90(*v50, v64, 16, 0);
        v66 = v64 | 1;
        a1 = v156;
        v63 = (char*)v65;
        v195 = (_QWORD*)v62;
        v196 = (char*)v65;
        v194 = v66;
      }
      else {
        v63 = (char*)&v194 + 1;
        LOBYTE(v194) = 2 * v24;
        if (v24 == 0) {
          goto LABEL_92;
        }
      }
      GameRoutine_1a0b940(v63, v53, v62);
    LABEL_92:
      v63[v62] = 0;
      v67 = GameRoutine_e299e0(a1 + 200, &v194);
      v50 = (_QWORD*)GameData_212bf68;
      if ((v194 & 1) != 0 && v196 != nullptr) {
        v71 = v67;
        v72 = 56;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) != 0) {
          v72 = 128;
        }
        GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v72, v196);
        v67 = v71;
      }
      if (v158 == (_QWORD*)v67) {
        GameRoutine_1a0ba50(&v159, 0, 296, v68, v69, v70);
        v42 = v154;
        goto LABEL_157;
      }
      v24 = GameRoutine_1a09c70(v53);
      if (v24 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_256;
      }
      v73 = v24;
      v157 = v49;
      if (v24 >= 0x17) {
        if ((v24 | 7) == 0x17) {
          v75 = 26;
        }
        else {
          v75 = (v24 | 7) + 1;
        }
        v74 = (char*)GameRoutine_651b90(*v50, v75, 16, 0);
        v195 = (_QWORD*)v73;
        v196 = v74;
        v194 = v75 | 1;
      }
      else {
        v74 = (char*)&v194 + 1;
        LOBYTE(v194) = 2 * v24;
        if (v24 == 0) {
          goto LABEL_108;
        }
      }
      GameRoutine_1a0b940(v74, v53, v73);
    LABEL_108:
      v76 = v158;
      v74[v73] = 0;
      v77 = *v158;
      v78 = v158;
      if (*v158 == 0) {
      LABEL_135:
        v93 = v76;
        v94 =
            (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 80, 16, 0);
        v95 = v194;
        v96 = v195;
        a1 = v156;
        v76 = v94;
        v97 = v94;
        v194 = 0;
        v195 = nullptr;
        v94[8] = 0;
        v94[9] = 0;
        *v94 = 0;
        v94[1] = 0;
        v94[2] = v93;
        v94[4] = v95;
        v94[5] = v96;
        v98 = v196;
        v196 = nullptr;
        a6 = v153;
        v42 = v154;
        v94[6] = v98;
        v94[7] = 0;
        *v78 = v94;
        v99 = **(_QWORD**)(v156 + 200);
        if (v99 != 0) {
          *(_QWORD*)(v156 + 200) = v99;
          v97 = (_QWORD*)*v78;
        }
        GameRoutine_60abc0(*(_QWORD*)(v156 + 208), v97);
        ++*(_QWORD*)(v156 + 216);
        v79 = v194 & 1;
        goto LABEL_139;
      }
      v79 = v194 & 1;
      if (v79 != 0) {
        v80 = v196;
      }
      else {
        v80 = (char*)&v194 + 1;
      }
      if ((v194 & 1) != 0) {
        v81 = (unsigned __int64)v195;
      }
      else {
        v81 = (unsigned __int64)(unsigned __int8)v194 >> 1;
      }
      while (1) {
        while (1) {
          v76 = (_QWORD*)v77;
          v82 = *(unsigned __int8*)(v77 + 32);
          v83 = (v82 & 1) == 0;
          v84 = v82 >> 1;
          v85 = v83 ? v84 : v76[5];
          v86 = v83 ? (__int64)v76 + 33 : v76[6];
          v87 = v85 >= v81 ? v81 : v85;
          v88 = GameRoutine_1a09cf0(v80, v86, v87);
          if (v88 != 0) {
            break;
          }
          if (v81 >= v85) {
            goto LABEL_129;
          }
        LABEL_115:
          v77 = *v76;
          v78 = v76;
          if (*v76 == 0) {
            goto LABEL_135;
          }
        }
        if (v88 < 0) {
          goto LABEL_115;
        }
      LABEL_129:
        v89 = GameRoutine_1a09cf0(v86, v80, v87);
        if (v89 == 0) {
          break;
        }
        if ((v89 & 0x80000000) == 0) {
          goto LABEL_138;
        }
      LABEL_133:
        v77 = v76[1];
        if (v77 == 0) {
          v78 = v76 + 1;
          goto LABEL_135;
        }
      }
      if (v85 < v81) {
        goto LABEL_133;
      }
    LABEL_138:
      a6 = v153;
      v42 = v154;
      a1 = v156;
    LABEL_139:
      v50 = (_QWORD*)GameData_212bf68;
      if (v79 != 0 && v196 != nullptr) {
        v100 = 56;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) != 0) {
          v100 = 128;
        }
        GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v100, v196);
      }
      v101 = (unsigned __int8*)v76[7];
      v102 = (unsigned __int8*)v76[8];
      v49 = v157;
      if (v101 == v102) {
      LABEL_156:
        GameRoutine_1a0ba50(&v159, 0, 296, v90, v91, v92);
      }
      else {
        v103 = v101 + 144;
        while (1) {
          if (v103[144] == 1) {
            v105 = *v103;
            v106 = *((_QWORD*)v103 + 1);
            if ((v105 & 1) == 0) {
              v106 = v105 >> 1;
            }
            if (v61 == v106) {
              v107 =
                  (v105 & 1) != 0 ? *((unsigned __int8**)v103 + 2) : v103 + 1;
              if ((unsigned int)GameRoutine_1a09cf0(v60, v107, v61) == 0) {
                break;
              }
            }
          }
          v104 = v103 + 152;
          v103 += 296;
          if (v104 == v102) {
            goto LABEL_156;
          }
        }
        GameRoutine_e29460(&v159, v103 - 144);
        GameRoutine_e29460(&v176, v103);
        v193 = v103[144];
      }
    LABEL_157:
      v108 = a6[1];
      if (v108 >= a6[2]) {
        v111 = GameRoutine_e291a0(a6, &v159);
      }
      else {
        if ((v159 & 1) != 0) {
          GameRoutine_60a270(a6[1], v161, v160);
          if ((v162 & 1) == 0) {
            goto LABEL_166;
          }
        LABEL_160:
          GameRoutine_60a270(v108 + 24, v164, v163);
          if ((v165 & 1) != 0) {
            goto LABEL_161;
          }
        LABEL_167:
          v114 = v165;
          v115 = v167;
          *(_QWORD*)(v108 + 56) = v166;
          *(_QWORD*)(v108 + 64) = v115;
          *(_QWORD*)(v108 + 48) = v114;
          if ((v168 & 1) == 0) {
            goto LABEL_168;
          }
        LABEL_162:
          GameRoutine_60a270(v108 + 72, v170, v169);
          if ((v171 & 1) != 0) {
            goto LABEL_163;
          }
        LABEL_169:
          v118 = v171;
          v119 = v173;
          *(_QWORD*)(v108 + 104) = v172;
          *(_QWORD*)(v108 + 112) = v119;
          *(_QWORD*)(v108 + 96) = v118;
        }
        else {
          v109 = v159;
          v110 = v161;
          *(_QWORD*)(v108 + 8) = v160;
          *(_QWORD*)(v108 + 16) = v110;
          *(_QWORD*)v108 = v109;
          if ((v162 & 1) != 0) {
            goto LABEL_160;
          }
        LABEL_166:
          v112 = v162;
          v113 = v164;
          *(_QWORD*)(v108 + 32) = v163;
          *(_QWORD*)(v108 + 40) = v113;
          *(_QWORD*)(v108 + 24) = v112;
          if ((v165 & 1) == 0) {
            goto LABEL_167;
          }
        LABEL_161:
          GameRoutine_60a270(v108 + 48, v167, v166);
          if ((v168 & 1) != 0) {
            goto LABEL_162;
          }
        LABEL_168:
          v116 = v168;
          v117 = v170;
          *(_QWORD*)(v108 + 80) = v169;
          *(_QWORD*)(v108 + 88) = v117;
          *(_QWORD*)(v108 + 72) = v116;
          if ((v171 & 1) == 0) {
            goto LABEL_169;
          }
        LABEL_163:
          GameRoutine_60a270(v108 + 96, v173, v172);
        }
        v120 = v174;
        v121 = v175[0];
        *(_DWORD*)(v108 + 135) = *(_DWORD*)((char*)v175 + 7);
        *(_QWORD*)(v108 + 120) = v120;
        *(_QWORD*)(v108 + 128) = v121;
        if ((v176 & 1) != 0) {
          GameRoutine_60a270(v108 + 144, v178, v177);
          if ((v179 & 1) == 0) {
            goto LABEL_177;
          }
        LABEL_172:
          GameRoutine_60a270(v108 + 168, v181, v180);
          if ((v182 & 1) != 0) {
            goto LABEL_173;
          }
        LABEL_178:
          v126 = v182;
          v127 = v184;
          *(_QWORD*)(v108 + 200) = v183;
          *(_QWORD*)(v108 + 208) = v127;
          *(_QWORD*)(v108 + 192) = v126;
          if ((v185 & 1) == 0) {
            goto LABEL_179;
          }
        LABEL_174:
          GameRoutine_60a270(v108 + 216, v187, v186);
          if ((v188 & 1) != 0) {
            goto LABEL_175;
          }
        LABEL_180:
          v130 = v188;
          v131 = v190;
          *(_QWORD*)(v108 + 248) = v189;
          *(_QWORD*)(v108 + 256) = v131;
          *(_QWORD*)(v108 + 240) = v130;
        }
        else {
          v122 = v176;
          v123 = v178;
          *(_QWORD*)(v108 + 152) = v177;
          *(_QWORD*)(v108 + 160) = v123;
          *(_QWORD*)(v108 + 144) = v122;
          if ((v179 & 1) != 0) {
            goto LABEL_172;
          }
        LABEL_177:
          v124 = v179;
          v125 = v181;
          *(_QWORD*)(v108 + 176) = v180;
          *(_QWORD*)(v108 + 184) = v125;
          *(_QWORD*)(v108 + 168) = v124;
          if ((v182 & 1) == 0) {
            goto LABEL_178;
          }
        LABEL_173:
          GameRoutine_60a270(v108 + 192, v184, v183);
          if ((v185 & 1) != 0) {
            goto LABEL_174;
          }
        LABEL_179:
          v128 = v185;
          v129 = v187;
          *(_QWORD*)(v108 + 224) = v186;
          *(_QWORD*)(v108 + 232) = v129;
          *(_QWORD*)(v108 + 216) = v128;
          if ((v188 & 1) == 0) {
            goto LABEL_180;
          }
        LABEL_175:
          GameRoutine_60a270(v108 + 240, v190, v189);
        }
        v111 = v108 + 296;
        v132 = v191;
        v133 = v192[0];
        *(_DWORD*)(v108 + 279) = *(_DWORD*)((char*)v192 + 7);
        *(_QWORD*)(v108 + 264) = v132;
        *(_QWORD*)(v108 + 272) = v133;
        *(_BYTE*)(v108 + 288) = v193;
      }
      v134 = v188;
      a6[1] = v111;
      if ((v134 & 1) != 0 && v190 != 0) {
        if (*(_QWORD*)(*v50 + 200LL) != 0) {
          v135 = 128;
        }
        else {
          v135 = 56;
        }
        GameRoutine_1a0a4e0(*v50 + v135, v190);
      }
      if ((v185 & 1) != 0 && v187 != 0) {
        if (*(_QWORD*)(*v50 + 200LL) != 0) {
          v136 = 128;
        }
        else {
          v136 = 56;
        }
        GameRoutine_1a0a4e0(*v50 + v136, v187);
      }
      if ((v182 & 1) != 0 && v184 != 0) {
        if (*(_QWORD*)(*v50 + 200LL) != 0) {
          v137 = 128;
        }
        else {
          v137 = 56;
        }
        GameRoutine_1a0a4e0(*v50 + v137, v184);
      }
      if ((v179 & 1) != 0 && v181 != 0) {
        if (*(_QWORD*)(*v50 + 200LL) != 0) {
          v138 = 128;
        }
        else {
          v138 = 56;
        }
        GameRoutine_1a0a4e0(*v50 + v138, v181);
      }
      if ((v176 & 1) != 0 && v178 != 0) {
        if (*(_QWORD*)(*v50 + 200LL) != 0) {
          v139 = 128;
        }
        else {
          v139 = 56;
        }
        GameRoutine_1a0a4e0(*v50 + v139, v178);
      }
      if ((v171 & 1) != 0 && v173 != 0) {
        if (*(_QWORD*)(*v50 + 200LL) != 0) {
          v140 = 128;
        }
        else {
          v140 = 56;
        }
        GameRoutine_1a0a4e0(*v50 + v140, v173);
      }
      if ((v168 & 1) != 0 && v170 != 0) {
        if (*(_QWORD*)(*v50 + 200LL) != 0) {
          v141 = 128;
        }
        else {
          v141 = 56;
        }
        GameRoutine_1a0a4e0(*v50 + v141, v170);
      }
      if ((v165 & 1) != 0 && v167 != 0) {
        if (*(_QWORD*)(*v50 + 200LL) != 0) {
          v142 = 128;
        }
        else {
          v142 = 56;
        }
        GameRoutine_1a0a4e0(*v50 + v142, v167);
      }
      if ((v162 & 1) != 0 && v164 != 0) {
        if (*(_QWORD*)(*v50 + 200LL) != 0) {
          v143 = 128;
        }
        else {
          v143 = 56;
        }
        GameRoutine_1a0a4e0(*v50 + v143, v164);
      }
      if ((v159 & 1) != 0 && v161 != nullptr) {
        if (*(_QWORD*)(*v50 + 200LL) != 0) {
          v144 = 128;
        }
        else {
          v144 = 56;
        }
        GameRoutine_1a0a4e0(*v50 + v144, v161);
      }
      if (++v49 == v155) {
        v46 = v152;
        v48 = 2;
        if ((_QWORD*)v42 != v152) {
          goto LABEL_243;
        }
        goto LABEL_251;
      }
    }
  }
  v48 = 1;
  if (v42 == 0) {
    return v48;
  }
LABEL_70:
  if ((_QWORD*)v42 != v152) {
  LABEL_243:
    v145 = v46;
    v146 = GameData_212bf68;
    do {
      v147 = *(v145 - 24);
      v145 -= 24;
      if ((v147 & 1) != 0) {
        v148 = *(v46 - 1);
        if (v148 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v146 + 200LL) != 0) {
            v149 = 128;
          }
          else {
            v149 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)v146 + v149, v148);
        }
      }
      v46 = v145;
    } while (v145 != (_BYTE*)v42);
  }
LABEL_251:
  if (v42 != 0) {
    v150 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v150 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v150, v42);
  }
  return v48;
}

void GameHr_e330c0(__int64 a1, unsigned int a2)
{
  char v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v4 = GameRoutine_108cfd0(a2);
  v5 = *(_QWORD*)(*(_QWORD*)(a1 + 176) + 56LL);
  v6 = *(_QWORD*)(v5 + 392);
  v7 = *(_QWORD*)(v5 + 400);
  if ((v4 & 1) != 0) {
    if (v7 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                memory_order_relaxed);
    }
    v8 = GameRoutine_1070c00(*(_QWORD*)(v6 + 11608), a2);
    v10 = *(_QWORD*)(v8 + 40);
    v9 = *(_QWORD*)(v8 + 48);
    v11 = v9 - v10;
    v12 = GameData_212bf68;
    if (v9 == v10) {
      v13 = 0;
      if (v7 == 0) {
      LABEL_14:
        if (v13 != 0) {
          v14 = 128;
          if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
            v14 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)v12 + v14, v13);
        }
        return;
      }
    }
    else {
      if (v11 < 0) {
        GameRoutine_a78a90(v8);
      }
      v13 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v9 - v10, 16, 0);
      GameRoutine_1a0b950(v13, v10, v11);
      if (v7 == 0) {
        goto LABEL_14;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      GameRoutine_1a09c50(v7);
    }
    goto LABEL_14;
  }
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      GameRoutine_1a09c50(v7);
    }
  }
}

__int64 GameHr_e66fa0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v9;

  *(_QWORD*)a1 = GameData_1fe7160;
  *(_QWORD*)(a1 + 208) = GameData_1fe7220;
  v2 = a1 + 208;
  GameRoutine_e665e0(a1);
  if (GameData_2216858 == 1) {
    if (GameData_2216850 == 1 && GameData_2216828 != 0) {
      GameData_2216830 = GameData_2216828;
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v3 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v3, GameData_2216828);
    }
    GameRoutine_667c80(&GameData_2216780);
    GameData_2216858 = 0;
  }
  if ((*(_BYTE*)(a1 + 224) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 240);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v5 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v5, v4);
    }
  }
  v9 = v2;
  *(_QWORD*)(a1 + 208) = GameData_212d6d0 + 2;
  GameRoutine_876a40(&GameData_21eea40, &v9);
  v6 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_1fe7300;
  if (v6 == (_QWORD*)(a1 + 160)) {
    v7 = 32;
  }
  else {
    if (v6 == nullptr) {
      goto LABEL_18;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
LABEL_18:
  GameData_2219068 = 0;
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  GameRoutine_65a940(a1);
  return GameRoutine_658c00(a1 + 88);
}

void GameHr_e7aab0(__int64 a1, char a2, __n128 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  bool v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  int v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  bool v25;
  float v26;
  float v27;
  bool v28;
  float v29;
  float v30;
  __int64 v31;
  _QWORD v32[2];
  __int64 v33;

  v3 = *(_QWORD*)(a1 + 216);
  if ((a2 & 1) != 0) {
    v4 = *(_QWORD*)(v3 + 32);
    *(_DWORD*)(v3 + 56) = 0;
    *(_QWORD*)(v3 + 24) = 0;
    *(_QWORD*)(v3 + 32) = 0;
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      v5 = a1;
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      GameRoutine_1a09c50(v4);
      a1 = v5;
    }
    v6 = *(__int64**)(*(_QWORD*)(a1 + 216) + 40LL);
    v7 = *((_DWORD*)v6 + 5);
    *((_DWORD*)v6 + 5) = v7 | 8;
    if (v7 != (v7 | 8)) {
      v8 = *v6;
      v9 = *(_QWORD*)(v8 + 8);
      if (v9 != 0) {
        v10 = *(_QWORD*)(v8 + 16);
        v11 = *(_QWORD*)(v9 + 8) == -1 || v10 == 0;
        if (!v11 && *(_QWORD*)(v9 + 8) != -1 && (*(_BYTE*)(v8 + 61) & 1) == 0 &&
            *(_DWORD*)(v8 + 64) != 1 && (*(_BYTE*)(v10 + 342) & 1) != 0) {
          v12 = a1;
          GameRoutine_1084940(v10, 0, 0.0f);
          a1 = v12;
          *(_BYTE*)(*(_QWORD*)(v10 + 8) + 289LL) = 0;
        }
      }
    }
    if (*(_DWORD*)(a1 + 200) == 2) {
      v13 = (_QWORD*)a1;
      v32[0] = "MindLayer";
      v32[1] = 9;
      GameRoutine_ff7720(a1 + 344, v32);
      v14 = v13[27];
      v15 = v13[28];
      v16 = v13;
      if (v15 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (v14 != 0) {
        *(_BYTE*)(v14 + 60) = v13[44] != v13[43];
      }
      if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
        GameRoutine_1a09c50(v15);
        v16 = v13;
      }
      *((_DWORD*)v16 + 50) = 0;
    }
  }
  else {
    v17 = *(_QWORD*)(v3 + 32);
    *(_QWORD*)(v3 + 24) = 0;
    *(_QWORD*)(v3 + 32) = 0;
    *(_DWORD*)(v3 + 56) = 2;
    if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      v18 = a1;
      (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
      a3 = GameRoutine_1a09c50(v17);
      a1 = v18;
    }
    v19 = *(__int64**)(*(_QWORD*)(a1 + 216) + 40LL);
    v20 = *((_DWORD*)v19 + 5);
    v21 = v20 & 0xFFFFFFF7;
    *((_DWORD*)v19 + 5) = v20 & 0xFFFFFFF7;
    if (v20 != (v20 & 0xFFFFFFF7)) {
      v22 = *v19;
      v23 = *(_QWORD*)(*v19 + 8);
      if (v23 != 0) {
        v24 = *(_QWORD*)(v22 + 16);
        v25 = *(_QWORD*)(v23 + 8) == -1 || v24 == 0;
        if (!v25 && *(_QWORD*)(v23 + 8) != -1 &&
            (*(_BYTE*)(v22 + 61) & 1) == 0 && *(_DWORD*)(v22 + 64) != 1 &&
            (*(_BYTE*)(v24 + 342) & 1) != 0) {
          v26 = *((float*)v19 + 9) * *((float*)v19 + 2);
          v27 = fminf(fmaxf(v26, 0.0f), 1.0f);
          v28 = v26 >= 1.0f || v26 <= 0.0f;
          v29 = (float)(v27 * 0.6f) + 0.2f;
          if (!v28) {
            v26 = v29;
          }
          if (v21 != 0) {
            v30 = 0.0f;
          }
          else {
            v30 = v26;
          }
          ((float*)&a3)[0] = v30;
          GameRoutine_1084940(v24, 0, ((double*)&a3)[0]);
          *(_BYTE*)(*(_QWORD*)(v24 + 8) + 289LL) = v30 > 0.0f;
        }
      }
    }
  }
  LOWORD(v32[0]) = 0;
  GameRoutine_e7da80(0.0f);
  if ((v32[0] & 1) != 0 && v33 != 0) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v31 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v31, v33);
  }
}

#pragma GCC visibility pop
