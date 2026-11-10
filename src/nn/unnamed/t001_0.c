#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 SdkData_103f1d0;

extern __int64 SdkData_10420c0;

extern _UNKNOWN** SdkData_e89c30;

extern _UNKNOWN* SdkData_e89c38;

extern _UNKNOWN SdkData_ea40a0;

extern __int64 SdkData_f72e70;

extern __int64 SdkData_f72e78;

extern __int64 SdkData_f72e80;

extern __int64 SdkData_f72e88;

extern __int64 SdkData_f72e90;

extern int SdkData_f72e98;

__int64 SdkRoutine_5f4280(_QWORD);

__int64 SdkRoutine_5f50f0(_QWORD, _QWORD);

_QWORD* SdkRoutine_64ac60(_QWORD* result, _QWORD*, unsigned int);

__int64 SdkRoutine_64b750(__int64 result, __int64, __int64);

__int64 SdkRoutine_6589a0(_QWORD);

__int64* SdkRoutine_67a390(__int64* result, __int64);

__int64 SdkRoutine_695200(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_698610(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_856130(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_85d9b0(_QWORD);

__int64 SdkRoutine_85d9c0(_QWORD);

__int64 SdkRoutine_875c00(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_876060(void);

__int64 SdkHr_5f1580(int* a1, unsigned __int64 a2)
{
  unsigned __int64 v4;
  unsigned int v5;
  unsigned __int64 v6;
  unsigned int v7;
  int v8;
  int* v9;
  __int64 v10;
  int* v11;
  unsigned __int64 v12;
  __int64 v13;
  int v14;
  unsigned __int64 v15;
  unsigned int v16;
  _QWORD* v17;
  _QWORD* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  int v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  _QWORD* v24;
  unsigned __int64 v26;
  int v27;
  unsigned int v28;
  char v29;
  unsigned int v30;
  int v31;
  unsigned int v32;
  int v33;
  unsigned int v34;
  unsigned int v35;
  __int64 v36;
  _QWORD* v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  _QWORD* v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  unsigned int v45;
  int v46;
  unsigned int v47;
  char v48;
  unsigned int v49;
  int v50;
  unsigned int v51;
  int v52;
  unsigned int v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  _QWORD* v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  bool v59;
  _QWORD* v60;
  int v61;
  unsigned int v62;
  char v63;
  unsigned int v64;
  int v65;
  unsigned int v66;
  int v67;
  unsigned int v68;
  unsigned int v69;
  int* v70;
  unsigned __int64 v71;
  _QWORD* v72;
  unsigned __int64 v73;
  unsigned __int64 v74;
  _QWORD* v75;
  unsigned __int64 v76;
  unsigned __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  int v81;
  __int64 v82;
  unsigned __int64 v83;
  _QWORD* v84;
  _QWORD* v85;
  _QWORD* v86;
  __int64 v87;
  _QWORD* v88;
  _QWORD* v89;
  _QWORD* v90;
  __int64 v91;
  unsigned __int64 v92;
  unsigned __int64 v93;
  unsigned __int64 v94;
  char* v95;
  int v96;
  __int64 v97;
  unsigned __int64 v98;
  char* v99;
  unsigned int v100;
  unsigned int v101;
  unsigned int v102;
  unsigned int v103;
  _QWORD* v104;
  int v105;
  _QWORD* v106;
  int v107;
  unsigned __int64 v108;
  unsigned __int64 v109;
  _QWORD* v110;
  unsigned __int64 v111;
  unsigned __int64 v112;
  unsigned __int64 v114;
  unsigned __int64 v115;
  unsigned __int64 v116;
  char* v117;
  _QWORD* v118;
  unsigned __int64 v119;
  __int64 v120;
  int v121;
  __int64 v122;
  unsigned __int64 v123;
  __int64 v124;
  unsigned __int64 v125;
  unsigned __int64 v126;
  unsigned __int64 v127;
  bool v128;
  unsigned __int64 v129;
  __int64 v130;
  __int64 v131;
  unsigned __int64 v132;
  unsigned __int64 v133;
  unsigned __int64 v134;
  unsigned __int64 v135;
  __int64 v136;
  _QWORD* v137;
  unsigned __int64 v138;
  unsigned __int64 v139;
  unsigned __int64 v140;
  unsigned __int64 v142;
  unsigned __int64 v143;
  unsigned __int64 v144;
  unsigned __int64 v145;
  unsigned __int64 v146;
  unsigned __int64 v147;
  unsigned __int64 v148;
  unsigned __int64 v149;
  int* v150;
  __int64 v151;
  unsigned __int64 v152;
  __int64 v153;
  __int64 v154;
  unsigned __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  unsigned __int64 v160;
  unsigned __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  unsigned __int64 v167;
  int* v168;
  unsigned __int64 v169;
  unsigned __int64* i;
  unsigned __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  unsigned __int64* v175;
  __int64 v176;
  unsigned __int64 v177;
  unsigned __int64 v178;
  unsigned __int64 v179;
  _QWORD* v180;
  unsigned __int64 v181;
  unsigned __int64 v182;
  int v183;
  __int64 v184;
  unsigned __int64 v185;
  unsigned int v186;
  unsigned int v187;
  unsigned int v188;
  unsigned int v189;
  int v190;
  unsigned __int64* v191;
  unsigned __int64 v192;
  int v193;
  unsigned __int64 v194;
  unsigned __int64 v195;
  unsigned __int64 v196;
  unsigned __int64* v197;
  unsigned __int64 v198;
  unsigned __int64 v199;
  unsigned __int64 v200;
  unsigned __int64 v201;
  unsigned __int64 v203;
  unsigned __int64 v204;
  unsigned __int64 v205;
  unsigned __int64 v206;
  __int64 v207;
  __int64 v208;
  _QWORD* v209;
  unsigned int v210;
  unsigned __int64 v211;
  _QWORD* v212;
  _QWORD* v213;
  unsigned __int64 v214;
  _QWORD* v215;

  if ((a1[220] & 2) != 0) {
    SdkRoutine_85d9b0(a1 + 222);
  }
  if (a2 <= 0xE8) {
    if (a2 >= 0x17) {
      v4 = ((_WORD)a2 + 23) & 0x1F0;
    }
    else {
      v4 = 32;
    }
    v5 = *a1;
    v6 = v4 >> 3;
    v7 = (unsigned int)*a1 >> (v4 >> 3);
    if ((v7 & 3) != 0) {
      v8 = (((unsigned int)*a1 >> (v4 >> 3)) & 1 | v6) ^ 1;
      v9 = &a1[4 * v8];
      v10 = *((_QWORD*)v9 + 11);
      v11 = v9 + 18;
      v13 = v10 + 16;
      v12 = *(_QWORD*)(v10 + 16);
      if (v11 == (int*)v12) {
        *a1 = v5 & ~(1 << v8);
      }
      else if (v12 >= *((_QWORD*)a1 + 3) && *(_QWORD*)(v12 + 24) == v10) {
        *(_QWORD*)(v12 + 24) = v11;
        *((_QWORD*)v11 + 2) = v12;
      }
      else {
        SdkRoutine_875c00(
            "D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
            "hos\\utils\\nvos\\hos\\dlmalloc.c",
            5557, 0);
      }
      v42 = (unsigned int)(8 * v8);
      v43 = v42 | 3;
      v41 = (_QWORD*)(v10 + v42);
      *(_QWORD*)(v10 + 8) = v43;
      goto LABEL_38;
    }
    if (v4 > *((_QWORD*)a1 + 1)) {
      if (v7 != 0) {
        v27 = (v7 << v6) & ((2 << v6) | -(2 << v6));
        v28 = (v27 - 1) & ~v27;
        v29 = (v28 >> 12) & 0x10;
        v30 = v28 >> v29;
        v31 = v29 & 0x10 | (v30 >> 5) & 0xF;
        v32 = v30 >> ((v30 >> 5) & 8);
        v33 = v31 & 0x18 | (v32 >> 2) & 7;
        v34 = v32 >> ((v32 >> 2) & 4);
        v35 =
            (v33 & 0xFFFFFFFC | (v34 >> 1) & 2 |
             (((v34 >> ((v34 >> 1) & 2)) & 2) != 0)) +
            (v34 >> ((v34 >> 1) & 2) >> (((v34 >> ((v34 >> 1) & 2)) & 2) != 0));
        v36 = (__int64)&a1[4 * v35 + 18];
        v37 = *(_QWORD**)(v36 + 16);
        v13 = (__int64)(v37 + 2);
        v38 = v37[2];
        if (v36 == v38) {
          *a1 = v5 & ~(1 << v35);
          v39 = 8 * v35;
          v40 = v39 - v4;
          if (v39 - v4 <= 0x1F) {
            goto LABEL_35;
          }
        }
        else if (v38 >= *((_QWORD*)a1 + 3) && *(_QWORD**)(v38 + 24) == v37) {
          *(_QWORD*)(v38 + 24) = v36;
          *(_QWORD*)(v36 + 16) = v38;
          v39 = 8 * v35;
          v40 = v39 - v4;
          if (v39 - v4 <= 0x1F) {
          LABEL_35:
            v37[1] = v39 | 3;
            v41 = &v37[v39 / 8];
          LABEL_38:
            v41[1] |= 1uLL;
            goto LABEL_201;
          }
        }
        else {
          v215 = *(_QWORD**)(v36 + 16);
          v210 = v35;
          SdkRoutine_875c00(
              "D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
              "hos\\utils\\nvos\\hos\\dlmalloc.c",
              5575, 0);
          v37 = v215;
          v39 = 8 * v210;
          v40 = v39 - v4;
          if (v39 - v4 <= 0x1F) {
            goto LABEL_35;
          }
        }
        v37[v39 / 8] = v40;
        v77 = *((_QWORD*)a1 + 1);
        v78 = v4 | 3;
        v79 = (__int64)v37 + v4;
        v37[1] = v78;
        *(_QWORD*)(v79 + 8) = v40 | 1;
        if (v77 == 0) {
          goto LABEL_107;
        }
        v80 = *((_QWORD*)a1 + 4);
        v81 = 1 << (v77 >> 3);
        v82 = (__int64)a1 + ((2 * v77) & 0x7FFFFFFF0LL) + 72;
        if ((*a1 & v81) != 0) {
          v83 = *(_QWORD*)(v82 + 16);
          if (v83 >= *((_QWORD*)a1 + 3)) {
          LABEL_106:
            *(_QWORD*)(v82 + 16) = v80;
            *(_QWORD*)(v83 + 24) = v80;
            *(_QWORD*)(v80 + 16) = v83;
            *(_QWORD*)(v80 + 24) = v82;
          LABEL_107:
            *((_QWORD*)a1 + 1) = v40;
            *((_QWORD*)a1 + 4) = v79;
            goto LABEL_201;
          }
          v207 = *((_QWORD*)a1 + 4);
          v215 = (_QWORD*)v40;
          SdkRoutine_875c00(
              "D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
              "hos\\utils\\nvos\\hos\\dlmalloc.c",
              5584, 0);
          v80 = v207;
          v40 = (unsigned __int64)v215;
        }
        else {
          *a1 |= v81;
        }
        v83 = v82;
        goto LABEL_106;
      }
      v61 = a1[1];
      if (v61 != 0) {
        v62 = (v61 - 1) & ~v61;
        v63 = (v62 >> 12) & 0x10;
        v64 = v62 >> v63;
        v65 = v63 & 0x10 | (v64 >> 5) & 0xF;
        v66 = v64 >> ((v64 >> 5) & 8);
        v67 = v65 & 0x18 | (v66 >> 2) & 7;
        v68 = v66 >> ((v66 >> 2) & 4);
        v69 =
            (v67 & 0xFFFFFFFC | (v68 >> 1) & 2 |
             (((v68 >> ((v68 >> 1) & 2)) & 2) != 0)) +
            (v68 >> ((v68 >> 1) & 2) >> (((v68 >> ((v68 >> 1) & 2)) & 2) != 0));
        v70 = a1 + 150;
        v20 = *(_QWORD*)&a1[2 * v69 + 150];
        v71 = v20;
        v15 = (*(_QWORD*)(v20 + 8) & 0xFFFFFFFFFFFFFFF8LL) - v4;
        while (1) {
          v72 = *(_QWORD**)(v71 + 32);
          if (v72 == nullptr) {
            v72 = *(_QWORD**)(v71 + 40);
            if (v72 == nullptr) {
              break;
            }
          }
          if ((v72[1] & 0xFFFFFFFFFFFFFFF8LL) - v4 < v15) {
            v15 = (v72[1] & 0xFFFFFFFFFFFFFFF8LL) - v4;
            v20 = (unsigned __int64)v72;
          }
          v71 = (unsigned __int64)v72;
        }
        v73 = *((_QWORD*)a1 + 3);
        if (v20 >= v73) {
          v74 = *(_QWORD*)(v20 + 48);
          v75 = *(_QWORD**)(v20 + 24);
          if (v75 == (_QWORD*)v20) {
            v88 = (_QWORD*)(v20 + 40);
            v89 = *(_QWORD**)(v20 + 40);
            if (v89 == nullptr) {
              v88 = (_QWORD*)(v20 + 32);
              v89 = *(_QWORD**)(v20 + 32);
              if (v89 == nullptr) {
                v75 = nullptr;
                goto LABEL_98;
              }
            }
            do {
              do {
                v75 = v89;
                v90 = v88;
                v88 = v89 + 5;
                v89 = (_QWORD*)v89[5];
              } while (v89 != nullptr);
              v88 = v75 + 4;
              v89 = (_QWORD*)v75[4];
            } while (v89 != nullptr);
            if ((unsigned __int64)v90 >= v73) {
              *v90 = 0;
              goto LABEL_98;
            }
          }
          else {
            v76 = *(_QWORD*)(v20 + 16);
            if (v76 >= v73 && *(_QWORD*)(v76 + 24) == v20 && v75[2] == v20) {
              *(_QWORD*)(v76 + 24) = v75;
              v75[2] = v76;
              goto LABEL_98;
            }
          }
          v211 = *(_QWORD*)(v20 + 48);
          v215 = v75;
          SdkRoutine_875c00(
              "D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
              "hos\\utils\\nvos\\hos\\dlmalloc.c",
              4561, 0);
          v74 = v211;
          v75 = v215;
          v70 = a1 + 150;
        LABEL_98:
          if (v74 == 0) {
            goto LABEL_153;
          }
          v91 = *(unsigned int*)(v20 + 56);
          if (v20 == *(_QWORD*)&v70[2 * v91]) {
            *(_QWORD*)&v70[2 * v91] = v75;
            if (v75 == nullptr) {
              a1[1] &= ~(1 << v91);
              goto LABEL_153;
            }
          }
          else if (v74 < *((_QWORD*)a1 + 3)) {
            v214 = v74;
            v215 = v75;
            SdkRoutine_875c00(
                "D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
                "hos\\utils\\nvos\\hos\\dlmalloc.c",
                4561, 0);
            v74 = v214;
            v75 = v215;
            if (v215 == nullptr) {
              goto LABEL_153;
            }
          }
          else if (*(_QWORD*)(v74 + 32) == v20) {
            *(_QWORD*)(v74 + 32) = v75;
            if (v75 == nullptr) {
              goto LABEL_153;
            }
          }
          else {
            *(_QWORD*)(v74 + 40) = v75;
            if (v75 == nullptr) {
              goto LABEL_153;
            }
          }
          v114 = *((_QWORD*)a1 + 3);
          if ((unsigned __int64)v75 < v114) {
          LABEL_282:
            SdkRoutine_875c00(
                "D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
                "hos\\utils\\nvos\\hos\\dlmalloc.c",
                4561, 0);
            goto LABEL_153;
          }
          v75[6] = v74;
          v115 = *(_QWORD*)(v20 + 32);
          if (v115 == 0) {
            goto LABEL_150;
          }
          if (v115 >= v114) {
            v75[4] = v115;
            *(_QWORD*)(v115 + 48) = v75;
          LABEL_150:
            v116 = *(_QWORD*)(v20 + 40);
            if (v116 == 0) {
              goto LABEL_153;
            }
          LABEL_151:
            if (v116 >= *((_QWORD*)a1 + 3)) {
              v75[5] = v116;
              *(_QWORD*)(v116 + 48) = v75;
              goto LABEL_153;
            }
            goto LABEL_282;
          }
          v215 = v75;
          SdkRoutine_875c00(
              "D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
              "hos\\utils\\nvos\\hos\\dlmalloc.c",
              4561, 0);
          v75 = v215;
          v116 = *(_QWORD*)(v20 + 40);
          if (v116 != 0) {
            goto LABEL_151;
          }
        LABEL_153:
          if (v15 <= 0x1F) {
            goto LABEL_154;
          }
          v118 = (_QWORD*)(v20 + v4);
          *(_QWORD*)(v20 + 8) = v4 | 3;
          *(_QWORD*)((char*)v118 + v15) = v15;
          v118[1] = v15 | 1;
          v119 = *((_QWORD*)a1 + 1);
          if (v119 == 0) {
            goto LABEL_162;
          }
          v120 = *((_QWORD*)a1 + 4);
          v121 = 1 << (v119 >> 3);
          v122 = (__int64)a1 + ((2 * v119) & 0x7FFFFFFF0LL) + 72;
          if ((*a1 & v121) != 0) {
            v123 = *(_QWORD*)(v122 + 16);
            if (v123 >= *((_QWORD*)a1 + 3)) {
            LABEL_161:
              *(_QWORD*)(v122 + 16) = v120;
              *(_QWORD*)(v123 + 24) = v120;
              *(_QWORD*)(v120 + 16) = v123;
              *(_QWORD*)(v120 + 24) = v122;
            LABEL_162:
              *((_QWORD*)a1 + 1) = v15;
              *((_QWORD*)a1 + 4) = v118;
              v13 = v20 + 16;
              goto LABEL_201;
            }
            v208 = v122;
            v215 = v118;
            SdkRoutine_875c00(
                "D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
                "hos\\utils\\nvos\\hos\\dlmalloc.c",
                4567, 0);
            v122 = v208;
            v118 = v215;
          }
          else {
            *a1 |= v121;
          }
          v123 = v122;
          goto LABEL_161;
        }
        v124 = 4573;
        goto LABEL_173;
      }
    }
  LABEL_174:
    v125 = *((_QWORD*)a1 + 1);
    v126 = v125 - v4;
    if (v125 >= v4) {
      v130 = *((_QWORD*)a1 + 4);
      if (v126 < 0x20) {
        v131 = 0;
        v126 = 0;
        *(_QWORD*)(v130 + 8) = v125 | 3;
        *(_QWORD*)(v130 + v125 + 8) |= 1uLL;
      }
      else {
        v131 = v130 + v4;
        *(_QWORD*)(v130 + v125) = v126;
        *(_QWORD*)(v130 + v4 + 8) = v126 | 1;
        *(_QWORD*)(v130 + 8) = v4 | 3;
      }
      *((_QWORD*)a1 + 4) = v131;
      *((_QWORD*)a1 + 1) = v126;
    }
    else {
      v127 = *((_QWORD*)a1 + 2);
      v128 = v127 > v4;
      v129 = v127 - v4;
      if (!v128) {
        if (SdkData_f72e70 == 0) {
          SdkRoutine_85d9b0(&SdkData_ea40a0);
          if (SdkData_f72e70 == 0) {
            SdkData_f72e78 = 4096;
            SdkData_f72e80 = 0x200000;
            SdkData_f72e88 = 0x200000;
            SdkData_f72e90 = 0x200000;
            SdkData_f72e98 = 7;
            SdkData_f72e70 = (unsigned __int64)&v215 ^ 0x55555558;
          }
          SdkRoutine_85d9c0(&SdkData_ea40a0);
        }
        if ((a1[220] & 1) != 0 && v4 >= SdkData_f72e88 &&
            *((_QWORD*)a1 + 2) != 0) {
          v132 = (v4 + SdkData_f72e80 + 62) & -SdkData_f72e80;
          v133 = *((_QWORD*)a1 + 109);
          if ((v133 == 0 || (v134 = *((_QWORD*)a1 + 107)) + v132 > v134 &&
                                v134 + v132 <= v133) &&
              v132 > v4) {
            v135 =
                SdkRoutine_5f50f0(*((_QWORD*)a1 + 119),
                                  (v4 + SdkData_f72e80 + 62) & -SdkData_f72e80);
            if (v135 != -1) {
              v136 = (-16 - (_BYTE)v135) & 0xF;
              v137 = (_QWORD*)(v135 + v136);
              *v137 = v136;
              v137[1] = v132 - v136 - 32;
              *(_QWORD*)(v135 + v132 - 32 + 8) = 11;
              *(_QWORD*)(v135 + v132 - 16) = 0;
              v138 = *((_QWORD*)a1 + 3);
              if (v138 == 0 || v135 < v138) {
                *((_QWORD*)a1 + 3) = v135;
              }
              v139 = *((_QWORD*)a1 + 108);
              v140 = *((_QWORD*)a1 + 107) + v132;
              *((_QWORD*)a1 + 107) = v140;
              if (v140 > v139) {
                *((_QWORD*)a1 + 108) = v140;
              }
              v13 = (__int64)(v137 + 2);
              goto LABEL_201;
            }
          }
        }
        v142 = (v4 + SdkData_f72e80 + 95) & -SdkData_f72e80;
        if (v142 <= v4) {
          goto LABEL_279;
        }
        v143 = *((_QWORD*)a1 + 109);
        if (v143 != 0) {
          v144 = *((_QWORD*)a1 + 107);
          v13 = 0;
          if (v144 + v142 <= v144 || v144 + v142 > v143) {
            goto LABEL_201;
          }
        }
        v145 = SdkRoutine_5f50f0(*((_QWORD*)a1 + 119),
                                 (v4 + SdkData_f72e80 + 95) & -SdkData_f72e80);
        v146 = v145 == -1 ? 0LL : v142;
        if (v145 == -1) {
          goto LABEL_279;
        }
        v147 = *((_QWORD*)a1 + 108);
        v148 = *((_QWORD*)a1 + 107) + v142;
        *((_QWORD*)a1 + 107) = v148;
        if (v148 > v147) {
          *((_QWORD*)a1 + 108) = v148;
        }
        v149 = *((_QWORD*)a1 + 5);
        if (v149 != 0) {
          v150 = a1 + 230;
          while (1) {
            v151 = *((_QWORD*)v150 + 1);
            if (v145 == *(_QWORD*)v150 + v151) {
              break;
            }
            v150 = *((int**)v150 + 2);
            if (v150 == nullptr) {
              goto LABEL_232;
            }
          }
          if (v149 < v145 && v149 >= *(_QWORD*)v150 && (v150[6] & 9) == 1) {
            *((_QWORD*)v150 + 1) = v151 + v146;
            v162 = *((_QWORD*)a1 + 2) + v146;
            v163 = (-16 - (_BYTE)v149) & 0xF;
            v164 = v149 + v163;
            v165 = v162 - v163;
            *((_QWORD*)a1 + 2) = v165;
            *(_QWORD*)(v164 + 8) = v165 | 1;
            *(_QWORD*)(v149 + v162 + 8) = 80;
            v166 = SdkData_f72e90;
            *((_QWORD*)a1 + 5) = v164;
            *((_QWORD*)a1 + 6) = v166;
            v167 = *((_QWORD*)a1 + 2);
            v128 = v167 > v4;
            v129 = v167 - v4;
            if (v128) {
              goto LABEL_177;
            }
            goto LABEL_279;
          }
        LABEL_232:
          if (v145 < *((_QWORD*)a1 + 3)) {
            *((_QWORD*)a1 + 3) = v145;
          }
          v168 = a1 + 230;
          while (*(_QWORD*)v168 != v145 + v146) {
            v168 = *((int**)v168 + 2);
            if (v168 == nullptr) {
              goto LABEL_240;
            }
          }
          if ((v168[6] & 9) == 1) {
            v169 = *((_QWORD*)v168 + 1) + v146;
            *(_QWORD*)v168 = v145;
            *((_QWORD*)v168 + 1) = v169;
            v13 = SdkRoutine_5f4280(a1);
            goto LABEL_201;
          }
        LABEL_240:
          for (i = (unsigned __int64*)(a1 + 230);;
               i = (unsigned __int64*)i[2]) {
            if (v149 >= *i) {
              v171 = *i + i[1];
              if (v149 < v171) {
                break;
              }
            }
          }
          v172 = (-16 - (_BYTE)v145) & 0xF;
          v173 = v145 + v172;
          v174 = v146 - 80 - v172;
          *((_QWORD*)a1 + 2) = v174;
          v175 = (unsigned __int64*)(v171 + ((79 - (_BYTE)v171) & 0xF) - 95);
          *(_QWORD*)(v173 + 8) = v174 | 1;
          *(_QWORD*)(v145 + v146 - 80 + 8) = 80;
          if ((unsigned __int64)v175 < v149 + 32) {
            v175 = (unsigned __int64*)v149;
          }
          v176 = SdkData_f72e90;
          *((_QWORD*)a1 + 5) = v173;
          *((_QWORD*)a1 + 6) = v176;
          v175[1] = 51;
          v177 = *((_QWORD*)a1 + 115);
          v178 = *((_QWORD*)a1 + 116);
          v179 = *((_QWORD*)a1 + 118);
          v175[4] = *((_QWORD*)a1 + 117);
          v175[5] = v179;
          v175[3] = v178;
          v175[2] = v177;
          *((_QWORD*)a1 + 116) = v146;
          a1[236] = v145 != -1;
          v180 = v175 + 7;
          *((_QWORD*)a1 + 115) = v145;
          *((_QWORD*)a1 + 117) = v175 + 2;
          do {
            *v180++ = 11;
          } while ((unsigned __int64)v180 < v171);
          v181 = (unsigned __int64)v175 - v149;
          if (v175 == (unsigned __int64*)v149) {
          LABEL_278:
            v203 = *((_QWORD*)a1 + 2);
            v128 = v203 > v4;
            v129 = v203 - v4;
            if (v128) {
              goto LABEL_177;
            }
            goto LABEL_279;
          }
          v182 = v175[1] & 0xFFFFFFFFFFFFFFFELL;
          *v175 = v181;
          v175[1] = v182;
          *(_QWORD*)(v149 + 8) = v181 | 1;
          if (v181 > 0xFF) {
            if (v181 >> 24 != 0) {
              v186 = 31;
            }
            else {
              v187 = (((unsigned int)(v181 >> 8) + 1048320) >> 16) & 8;
              v188 = (unsigned int)(v181 >> 8) << v187;
              v189 =
                  (v188 << (((v188 + 520192) >> 16) & 4)
                        << ((((v188 << (((v188 + 520192) >> 16) & 4)) +
                              245760) >>
                             16) &
                            2) >>
                   15) -
                  (((v188 + 520192) >> 16) & 4 | v187 |
                   (((v188 << (((v188 + 520192) >> 16) & 4)) + 245760) >> 16) &
                       2);
              v186 = ((v181 >> ((unsigned __int8)v189 + 21)) & 1 | (2 * v189)) +
                     28;
            }
            *(_QWORD*)(v149 + 32) = 0;
            *(_QWORD*)(v149 + 40) = 0;
            *(_DWORD*)(v149 + 56) = v186;
            v190 = a1[1];
            v191 = (unsigned __int64*)&a1[2 * v186 + 150];
            if ((v190 & (1 << v186)) != 0) {
              v192 = *v191;
              if (v186 == 31) {
                LOBYTE(v193) = 0;
              }
              else {
                v193 = 57 - (v186 >> 1);
              }
              v194 = v181 << v193;
              while (1) {
                v195 = v192;
                if ((*(_QWORD*)(v192 + 8) & 0xFFFFFFFFFFFFFFF8LL) == v181) {
                  break;
                }
                v196 = v194 >> 63;
                v194 *= 2LL;
                v192 = *(_QWORD*)(v192 + 32 + 8 * v196);
                if (v192 == 0) {
                  v197 = (unsigned __int64*)(v195 + 32 + 8 * v196);
                  if ((unsigned __int64)v197 >= *((_QWORD*)a1 + 3)) {
                    *v197 = v149;
                    *(_QWORD*)(v149 + 48) = v195;
                    goto LABEL_270;
                  }
                  goto LABEL_290;
                }
              }
              v200 = *((_QWORD*)a1 + 3);
              v201 = *(_QWORD*)(v195 + 16);
              if (v195 >= v200 && v201 >= v200) {
                *(_QWORD*)(v201 + 24) = v149;
                *(_QWORD*)(v195 + 16) = v149;
                *(_QWORD*)(v149 + 16) = v201;
                *(_QWORD*)(v149 + 24) = v195;
                *(_QWORD*)(v149 + 48) = 0;
                goto LABEL_278;
              }
            LABEL_290:
              SdkRoutine_875c00(
                  "D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
                  "hos\\utils\\nvos\\hos\\dlmalloc.c",
                  4063, 0);
              v204 = *((_QWORD*)a1 + 2);
              v128 = v204 > v4;
              v129 = v204 - v4;
              if (v128) {
                goto LABEL_177;
              }
            }
            else {
              a1[1] = v190 | (1 << v186);
              *v191 = v149;
              *(_QWORD*)(v149 + 48) = v191;
            LABEL_270:
              *(_QWORD*)(v149 + 16) = v149;
              *(_QWORD*)(v149 + 24) = v149;
              v199 = *((_QWORD*)a1 + 2);
              v128 = v199 > v4;
              v129 = v199 - v4;
              if (v128) {
                goto LABEL_177;
              }
            }
            goto LABEL_279;
          }
          v183 = 1 << (v181 >> 3);
          v184 = (__int64)&a1[4 * (v181 >> 3) + 18];
          if ((*a1 & v183) != 0) {
            v185 = *(_QWORD*)&a1[4 * (v181 >> 3) + 22];
            if (v185 >= *((_QWORD*)a1 + 3)) {
              goto LABEL_267;
            }
            SdkRoutine_875c00(
                "D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
                "hos\\utils\\nvos\\hos\\dlmalloc.c",
                4063, 0);
          }
          else {
            *a1 |= v183;
          }
          v185 = v184;
        LABEL_267:
          *(_QWORD*)(v184 + 16) = v149;
          *(_QWORD*)(v185 + 24) = v149;
          *(_QWORD*)(v149 + 16) = v185;
          *(_QWORD*)(v149 + 24) = v184;
          v198 = *((_QWORD*)a1 + 2);
          v128 = v198 > v4;
          v129 = v198 - v4;
          if (v128) {
            goto LABEL_177;
          }
          goto LABEL_279;
        }
        v152 = *((_QWORD*)a1 + 3);
        if (v152 == 0 || v145 < v152) {
          *((_QWORD*)a1 + 3) = v145;
        }
        *((_QWORD*)a1 + 115) = v145;
        *((_QWORD*)a1 + 116) = v142;
        a1[236] = 1;
        *((_QWORD*)a1 + 11) = a1 + 18;
        *((_QWORD*)a1 + 12) = a1 + 18;
        *((_QWORD*)a1 + 13) = a1 + 22;
        *((_QWORD*)a1 + 14) = a1 + 22;
        *((_QWORD*)a1 + 15) = a1 + 26;
        *((_QWORD*)a1 + 16) = a1 + 26;
        *((_QWORD*)a1 + 17) = a1 + 30;
        *((_QWORD*)a1 + 18) = a1 + 30;
        *((_QWORD*)a1 + 20) = a1 + 34;
        *((_QWORD*)a1 + 19) = a1 + 34;
        v153 = SdkData_f72e70;
        v154 = SdkData_f72e90;
        *((_QWORD*)a1 + 21) = a1 + 38;
        *((_QWORD*)a1 + 22) = a1 + 38;
        *((_QWORD*)a1 + 24) = a1 + 42;
        *((_QWORD*)a1 + 7) = 4095;
        *((_QWORD*)a1 + 8) = v153;
        *((_QWORD*)a1 + 23) = a1 + 42;
        *((_QWORD*)a1 + 25) = a1 + 46;
        *((_QWORD*)a1 + 26) = a1 + 46;
        *((_QWORD*)a1 + 27) = a1 + 50;
        *((_QWORD*)a1 + 28) = a1 + 50;
        *((_QWORD*)a1 + 29) = a1 + 54;
        *((_QWORD*)a1 + 30) = a1 + 54;
        *((_QWORD*)a1 + 31) = a1 + 58;
        *((_QWORD*)a1 + 32) = a1 + 58;
        *((_QWORD*)a1 + 33) = a1 + 62;
        *((_QWORD*)a1 + 34) = a1 + 62;
        *((_QWORD*)a1 + 35) = a1 + 66;
        *((_QWORD*)a1 + 36) = a1 + 66;
        *((_QWORD*)a1 + 37) = a1 + 70;
        *((_QWORD*)a1 + 38) = a1 + 70;
        *((_QWORD*)a1 + 39) = a1 + 74;
        *((_QWORD*)a1 + 40) = a1 + 74;
        *((_QWORD*)a1 + 41) = a1 + 78;
        *((_QWORD*)a1 + 42) = a1 + 78;
        *((_QWORD*)a1 + 43) = a1 + 82;
        *((_QWORD*)a1 + 44) = a1 + 82;
        *((_QWORD*)a1 + 45) = a1 + 86;
        *((_QWORD*)a1 + 46) = a1 + 86;
        *((_QWORD*)a1 + 47) = a1 + 90;
        *((_QWORD*)a1 + 48) = a1 + 90;
        *((_QWORD*)a1 + 49) = a1 + 94;
        *((_QWORD*)a1 + 50) = a1 + 94;
        *((_QWORD*)a1 + 51) = a1 + 98;
        *((_QWORD*)a1 + 52) = a1 + 98;
        *((_QWORD*)a1 + 53) = a1 + 102;
        *((_QWORD*)a1 + 54) = a1 + 102;
        *((_QWORD*)a1 + 55) = a1 + 106;
        *((_QWORD*)a1 + 56) = a1 + 106;
        *((_QWORD*)a1 + 57) = a1 + 110;
        *((_QWORD*)a1 + 58) = a1 + 110;
        *((_QWORD*)a1 + 59) = a1 + 114;
        *((_QWORD*)a1 + 63) = a1 + 122;
        *((_QWORD*)a1 + 64) = a1 + 122;
        *((_QWORD*)a1 + 60) = a1 + 114;
        *((_QWORD*)a1 + 61) = a1 + 118;
        *((_QWORD*)a1 + 62) = a1 + 118;
        *((_QWORD*)a1 + 68) = a1 + 130;
        *((_QWORD*)a1 + 67) = a1 + 130;
        *((_QWORD*)a1 + 70) = a1 + 134;
        *((_QWORD*)a1 + 69) = a1 + 134;
        *((_QWORD*)a1 + 66) = a1 + 126;
        *((_QWORD*)a1 + 65) = a1 + 126;
        *((_QWORD*)a1 + 72) = a1 + 138;
        *((_QWORD*)a1 + 71) = a1 + 138;
        v155 = *((_QWORD*)a1 - 1) & 0xFFFFFFFFFFFFFFF8LL;
        *((_QWORD*)a1 + 74) = a1 + 142;
        *((_QWORD*)a1 + 73) = a1 + 142;
        v156 = (__int64)a1 + v155 - 16;
        v157 = (-16 - (_BYTE)v156) & 0xF;
        v158 = v145 + v142 - v156 - v157;
        v159 = v156 + v157;
        v158 -= 80;
        *((_QWORD*)a1 + 5) = v159;
        *((_QWORD*)a1 + 6) = v154;
        *((_QWORD*)a1 + 2) = v158;
        *(_QWORD*)(v159 + 8) = v158 | 1;
        *(_QWORD*)(v145 + v142 - 72) = 80;
        v160 = *((_QWORD*)a1 + 2);
        v128 = v160 > v4;
        v129 = v160 - v4;
        if (!v128) {
        LABEL_279:
          v13 = 0;
          goto LABEL_201;
        }
      }
    LABEL_177:
      v130 = *((_QWORD*)a1 + 5);
      *((_QWORD*)a1 + 2) = v129;
      *(_QWORD*)(v130 + v4 + 8) = v129 | 1;
      *((_QWORD*)a1 + 5) = v130 + v4;
      *(_QWORD*)(v130 + 8) = v4 | 3;
    }
    v13 = v130 + 16;
    goto LABEL_201;
  }
  if (a2 > 0xFFFFFFFFFFFFFF7FLL) {
    v4 = -1;
    goto LABEL_174;
  }
  v14 = a1[1];
  v4 = (a2 + 23) & 0xFFFFFFFFFFFFFFF0LL;
  if (v14 == 0) {
    goto LABEL_174;
  }
  v15 = -(__int64)v4;
  if (a2 <= 0xFFFFE8) {
    v44 = (a2 + 23) >> 8;
    v45 = ((unsigned int)(v44 + 1048320) >> 16) & 8;
    LODWORD(v44) = (_DWORD)v44 << v45;
    LODWORD(v44) =
        ((_DWORD)v44
             << (((unsigned int)(v44 + 520192) >> 16) & 4)
             << (((unsigned int)(((_DWORD)v44
                                  << (((unsigned int)(v44 + 520192) >> 16) &
                                      4)) +
                                 245760) >>
                  16) &
                 2) >>
         15) -
        (((unsigned int)(v44 + 520192) >> 16) & 4 | v45 |
         ((unsigned int)(((_DWORD)v44
                          << (((unsigned int)(v44 + 520192) >> 16) & 4)) +
                         245760) >>
          16) &
             2);
    v16 = ((v4 >> ((unsigned __int8)v44 + 21)) & 1 | (2 * v44)) + 28;
    v17 = a1 + 150;
    v18 = *(_QWORD**)&a1[2 * v16 + 150];
    if (v18 != nullptr) {
    LABEL_17:
      v19 = 0;
      v20 = 0;
      v21 = 57 - (v16 >> 1);
      if (v16 == 31) {
        LOBYTE(v21) = 0;
      }
      v22 = v4 << v21;
      while (1) {
        v26 = (v18[1] & 0xFFFFFFFFFFFFFFF8LL) - v4;
        if (v26 < v15) {
          v15 = (v18[1] & 0xFFFFFFFFFFFFFFF8LL) - v4;
          v20 = (unsigned __int64)v18;
          if (v26 == 0) {
            break;
          }
        }
        v23 = v22 >> 63;
        v24 = (_QWORD*)v18[5];
        v22 *= 2LL;
        v18 = (_QWORD*)v18[v23 + 4];
        if (v24 != v18 && v24 != nullptr) {
          v19 = (unsigned __int64)v24;
        }
        if (v18 == nullptr) {
          goto LABEL_41;
        }
      }
      v19 = (unsigned __int64)v18;
      v20 = (unsigned __int64)v18;
      do {
      LABEL_54:
        v58 = (*(_QWORD*)(v19 + 8) & 0xFFFFFFFFFFFFFFF8LL) - v4;
        v59 = v58 >= v15;
        if (v58 < v15) {
          v15 = (*(_QWORD*)(v19 + 8) & 0xFFFFFFFFFFFFFFF8LL) - v4;
        }
        v60 = *(_QWORD**)(v19 + 32);
        if (!v59) {
          v20 = v19;
        }
        if (v60 == nullptr) {
          v60 = *(_QWORD**)(v19 + 40);
        }
        v19 = (unsigned __int64)v60;
      } while (v60 != nullptr);
      goto LABEL_45;
    }
  }
  else {
    v16 = 31;
    v17 = a1 + 150;
    v18 = *((_QWORD**)a1 + 106);
    if (v18 != nullptr) {
      goto LABEL_17;
    }
  }
  v19 = 0;
  v20 = 0;
LABEL_41:
  if ((v19 | v20) == 0) {
    v46 = ((2 << v16) | -(2 << v16)) & v14;
    if (v46 == 0) {
      goto LABEL_174;
    }
    v20 = 0;
    v47 = (v46 - 1) & ~v46;
    v48 = (v47 >> 12) & 0x10;
    v49 = v47 >> v48;
    v50 = v48 & 0x10 | (v49 >> 5) & 0xF;
    v51 = v49 >> ((v49 >> 5) & 8);
    v52 = v50 & 0x18 | (v51 >> 2) & 7;
    v53 = v51 >> ((v51 >> 2) & 4);
    v19 = v17[(v52 & 0xFFFFFFFC | (v53 >> 1) & 2 |
               (((v53 >> ((v53 >> 1) & 2)) & 2) != 0)) +
              (v53 >> ((v53 >> 1) & 2) >>
               (((v53 >> ((v53 >> 1) & 2)) & 2) != 0))];
  }
  if (v19 != 0) {
    goto LABEL_54;
  }
LABEL_45:
  if (v20 == 0 || v15 >= *((_QWORD*)a1 + 1) - v4) {
    goto LABEL_174;
  }
  v54 = *((_QWORD*)a1 + 3);
  if (v20 < v54) {
    v124 = 4534;
  LABEL_173:
    SdkRoutine_875c00("D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
                      "hos\\utils\\nvos\\hos\\dlmalloc.c",
                      v124, 0);
    goto LABEL_174;
  }
  v55 = *(_QWORD*)(v20 + 48);
  v56 = *(_QWORD**)(v20 + 24);
  if (v56 == (_QWORD*)v20) {
    v84 = (_QWORD*)(v20 + 40);
    v85 = *(_QWORD**)(v20 + 40);
    if (v85 == nullptr) {
      v84 = (_QWORD*)(v20 + 32);
      v85 = *(_QWORD**)(v20 + 32);
      if (v85 == nullptr) {
        v56 = nullptr;
        goto LABEL_84;
      }
    }
    do {
      do {
        v56 = v85;
        v86 = v84;
        v84 = v85 + 5;
        v85 = (_QWORD*)v85[5];
      } while (v85 != nullptr);
      v84 = v56 + 4;
      v85 = (_QWORD*)v56[4];
    } while (v85 != nullptr);
    if ((unsigned __int64)v86 >= v54) {
      *v86 = 0;
      goto LABEL_84;
    }
  }
  else {
    v57 = *(_QWORD*)(v20 + 16);
    if (v57 >= v54 && *(_QWORD*)(v57 + 24) == v20 && v56[2] == v20) {
      *(_QWORD*)(v57 + 24) = v56;
      v56[2] = v57;
      goto LABEL_84;
    }
  }
  v209 = v56;
  v215 = v17;
  v205 = v55;
  SdkRoutine_875c00("D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
                    "hos\\utils\\nvos\\hos\\dlmalloc.c",
                    4523, 0);
  v55 = v205;
  v56 = v209;
  v17 = v215;
LABEL_84:
  if (v55 == 0) {
    goto LABEL_116;
  }
  v87 = *(unsigned int*)(v20 + 56);
  if (v20 == v17[v87]) {
    v17[v87] = v56;
    if (v56 == nullptr) {
      a1[1] &= ~(1 << v87);
      goto LABEL_116;
    }
  }
  else if (v55 < *((_QWORD*)a1 + 3)) {
    v212 = v56;
    v215 = v17;
    v206 = v55;
    SdkRoutine_875c00("D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
                      "hos\\utils\\nvos\\hos\\dlmalloc.c",
                      4523, 0);
    v55 = v206;
    v56 = v212;
    v17 = v215;
    if (v212 == nullptr) {
      goto LABEL_116;
    }
  }
  else if (*(_QWORD*)(v55 + 32) == v20) {
    *(_QWORD*)(v55 + 32) = v56;
    if (v56 == nullptr) {
      goto LABEL_116;
    }
  }
  else {
    *(_QWORD*)(v55 + 40) = v56;
    if (v56 == nullptr) {
      goto LABEL_116;
    }
  }
  v92 = *((_QWORD*)a1 + 3);
  if ((unsigned __int64)v56 < v92) {
  LABEL_171:
    v215 = v17;
    SdkRoutine_875c00("D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
                      "hos\\utils\\nvos\\hos\\dlmalloc.c",
                      4523, 0);
    v17 = v215;
    goto LABEL_116;
  }
  v56[6] = v55;
  v93 = *(_QWORD*)(v20 + 32);
  if (v93 == 0) {
    goto LABEL_113;
  }
  if (v93 >= v92) {
    v56[4] = v93;
    *(_QWORD*)(v93 + 48) = v56;
  LABEL_113:
    v94 = *(_QWORD*)(v20 + 40);
    if (v94 == 0) {
      goto LABEL_116;
    }
  LABEL_114:
    if (v94 >= *((_QWORD*)a1 + 3)) {
      v56[5] = v94;
      *(_QWORD*)(v94 + 48) = v56;
      goto LABEL_116;
    }
    goto LABEL_171;
  }
  v213 = v56;
  v215 = v17;
  SdkRoutine_875c00("D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
                    "hos\\utils\\nvos\\hos\\dlmalloc.c",
                    4523, 0);
  v56 = v213;
  v17 = v215;
  v94 = *(_QWORD*)(v20 + 40);
  if (v94 != 0) {
    goto LABEL_114;
  }
LABEL_116:
  if (v15 <= 0x1F) {
  LABEL_154:
    v117 = (char*)(v20 + v15 + v4);
    *(_QWORD*)(v20 + 8) = (v15 + v4) | 3;
    v13 = v20 + 16;
    *((_QWORD*)v117 + 1) |= 1uLL;
    goto LABEL_201;
  }
  v95 = (char*)(v20 + v4);
  *(_QWORD*)(v20 + 8) = v4 | 3;
  *(_QWORD*)&v95[v15] = v15;
  *((_QWORD*)v95 + 1) = v15 | 1;
  if (v15 <= 0xFF) {
    v96 = 1 << (v15 >> 3);
    v97 = (__int64)&a1[4 * (v15 >> 3) + 18];
    if ((*a1 & v96) != 0) {
      v98 = *(_QWORD*)&a1[4 * (v15 >> 3) + 22];
      if (v98 >= *((_QWORD*)a1 + 3)) {
      LABEL_136:
        *(_QWORD*)(v97 + 16) = v95;
        *(_QWORD*)(v98 + 24) = v95;
        v13 = v20 + 16;
        *((_QWORD*)v95 + 2) = v98;
        *((_QWORD*)v95 + 3) = v97;
        goto LABEL_201;
      }
      v99 = v95;
      SdkRoutine_875c00("D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
                        "hos\\utils\\nvos\\hos\\dlmalloc.c",
                        4529, 0);
      v95 = v99;
    }
    else {
      *a1 |= v96;
    }
    v98 = v97;
    goto LABEL_136;
  }
  if (v15 >> 24 != 0) {
    v100 = 31;
  }
  else {
    v101 = (((unsigned int)(v15 >> 8) + 1048320) >> 16) & 8;
    v102 = (unsigned int)(v15 >> 8) << v101;
    v103 =
        (v102 << (((v102 + 520192) >> 16) & 4)
              << ((((v102 << (((v102 + 520192) >> 16) & 4)) + 245760) >> 16) &
                  2) >>
         15) -
        (((v102 + 520192) >> 16) & 4 | v101 |
         (((v102 << (((v102 + 520192) >> 16) & 4)) + 245760) >> 16) & 2);
    v100 = ((v15 >> ((unsigned __int8)v103 + 21)) & 1 | (2 * v103)) + 28;
  }
  *((_QWORD*)v95 + 4) = 0;
  *((_QWORD*)v95 + 5) = 0;
  v104 = &v17[v100];
  *((_DWORD*)v95 + 14) = v100;
  v105 = a1[1];
  if ((v105 & (1 << v100)) != 0) {
    v106 = (_QWORD*)*v104;
    v107 = 57 - (v100 >> 1);
    if (v100 == 31) {
      LOBYTE(v107) = 0;
    }
    v108 = v15 << v107;
    while (1) {
      v104 = v106;
      if ((v106[1] & 0xFFFFFFFFFFFFFFF8LL) == v15) {
        break;
      }
      v109 = v108 >> 63;
      v108 *= 2LL;
      v106 = (_QWORD*)v106[v109 + 4];
      if (v106 == nullptr) {
        v110 = &v104[v109 + 4];
        if ((unsigned __int64)v110 >= *((_QWORD*)a1 + 3)) {
          *v110 = v95;
          goto LABEL_138;
        }
        goto LABEL_287;
      }
    }
    v111 = *((_QWORD*)a1 + 3);
    v112 = v104[2];
    if ((unsigned __int64)v104 >= v111 && v112 >= v111) {
      *(_QWORD*)(v112 + 24) = v95;
      v104[2] = v95;
      v13 = v20 + 16;
      *((_QWORD*)v95 + 2) = v112;
      *((_QWORD*)v95 + 3) = v104;
      *((_QWORD*)v95 + 6) = 0;
      goto LABEL_201;
    }
  LABEL_287:
    SdkRoutine_875c00("D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
                      "hos\\utils\\nvos\\hos\\dlmalloc.c",
                      4529, 0);
    v13 = v20 + 16;
  }
  else {
    a1[1] = v105 | (1 << v100);
    *v104 = v95;
  LABEL_138:
    *((_QWORD*)v95 + 6) = v104;
    *((_QWORD*)v95 + 2) = v95;
    *((_QWORD*)v95 + 3) = v95;
    v13 = v20 + 16;
  }
LABEL_201:
  if ((a1[220] & 2) != 0) {
    SdkRoutine_85d9c0(a1 + 222);
  }
  return v13;
}

__int64 SdkHr_5feb50()
{
  __int64 result;

  result = SdkData_103f1d0;
  if (SdkData_103f1d0 != 0) {
    result = SdkRoutine_876060();
    SdkData_103f1d0 = 0;
  }
  return result;
}

__int64 SdkHr_655de0(unsigned __int64 a1)
{
  unsigned __int64 v2;
  __int64 v3;
  _UNKNOWN** v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 i;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v2 = atomic_load((unsigned __int64*)&SdkData_10420c0);
  if (v2 != a1) {
    v3 = 0;
    atomic_compare_exchange_strong((atomic_ullong* volatile)&SdkData_10420c0,
                                   (unsigned __int64*)&v3, a1);
    if (v3 != 0) {
      return 0;
    }
  }
  v4 = SdkData_e89c30;
  SdkRoutine_856130(SdkData_e89c30, SdkData_e89c38, 5880);
  v5 = v4 + 3;
  v6 = (_QWORD*)(a1 + 24);
  for (i = 735; i != 0; i -= 7) {
    v8 = *(v6 - 3);
    if (v8 != 0) {
      *(v5 - 3) = v8;
    }
    v9 = *(v6 - 2);
    if (v9 != 0) {
      *(v5 - 2) = v9;
    }
    v10 = *(v6 - 1);
    if (v10 != 0) {
      *(v5 - 1) = v10;
    }
    if (*v6 != 0) {
      *v5 = *v6;
    }
    v11 = v6[1];
    if (v11 != 0) {
      v5[1] = v11;
    }
    v12 = v6[2];
    if (v12 != 0) {
      v5[2] = v12;
    }
    v13 = v6[3];
    if (v13 != 0) {
      v5[3] = v13;
    }
    v5 += 7;
    v6 += 7;
  }
  return 1;
}

bool SdkHr_655ee0(__int64 a1)
{
  __int64 v1;
  _BOOL4 v2;

  v1 = a1;
  atomic_compare_exchange_strong((atomic_ullong* volatile)&SdkData_10420c0,
                                 (unsigned __int64*)&v1, 0);
  v2 = v1 == a1;
  if (v1 == a1) {
    SdkRoutine_856130(SdkData_e89c30, SdkData_e89c38, 5880);
  }
  return v2;
}

__int64 SdkHr_6671d0(__int64* a1, int a2, __int64 a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  _DWORD v9[8];

  SdkRoutine_698610(*(_QWORD*)(*a1 + 8), a3, v9);
  v5 = *a1;
  if (*(_DWORD*)*a1 == 0 && (*(_BYTE*)(v5 + 16) & 1) != 0) {
    v6 = 0;
  }
  else {
    v6 = *(_QWORD*)(v5 + 48);
  }
  v7 = v6 + a1[1];
  if (v6 == 0) {
    v7 = 0;
  }
  qmemcpy((void*)(v7 + 32LL * a2), v9, 32);
  result = *a1;
  if ((*(_BYTE*)(*a1 + 16) & 4) != 0) {
    return SdkRoutine_6589a0(result);
  }
  return result;
}

unsigned __int64* SdkHr_669f40(unsigned __int64* result, unsigned __int16 a2,
                               unsigned __int16 a3)
{
  *result =
      *result & 0xFFFFFFFF00000000LL | a2 | (a3 << 16) | 0x200000000000000LL;
  return result;
}

__int64 SdkHr_673180(__int64* a1, int* a2, _QWORD* a3, __int64** a4)
{
  __int64 v4;
  int v5;
  int v6;
  int v7;
  __int64 v8;
  int v9;
  __int64 v10;
  int v11;
  int v12;

  v4 = *a1;
  if (*a1 == 0) {
    v10 = 0;
    goto LABEL_17;
  }
  v5 = *a2;
  v6 = a2[1];
  v7 = a2[2];
  do {
    while (1) {
      v9 = *(_DWORD*)(v4 + 24);
      v10 = v4;
      if (v5 >= v9) {
        if (v5 > v9) {
          goto LABEL_6;
        }
        v11 = *(_DWORD*)(v4 + 28);
        if (v6 >= v11 && (v6 > v11 || v7 >= *(_DWORD*)(v4 + 32))) {
          break;
        }
      }
      v8 = 8;
      v4 = *(_QWORD*)(v4 + 8);
      if (v4 == 0) {
        goto LABEL_15;
      }
    }
    v12 = *(_DWORD*)(v4 + 28);
    if (v12 >= v6 && (v12 > v6 || *(_DWORD*)(v4 + 32) >= v7)) {
      return 0;
    }
  LABEL_6:
    v8 = 16;
    v4 = *(_QWORD*)(v4 + 16);
  } while (v4 != 0);
LABEL_15:
  a1 = (__int64*)(v10 + v8);
LABEL_17:
  *a3 = v10;
  *a4 = a1;
  return 1;
}

__int64 SdkHr_67a700(__int64 result, __int64 a2, int a3)
{
  unsigned int v3;
  __int64 v5;
  int v6;
  char* v8;
  char v9;
  unsigned int v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _OWORD* v19;
  __int128* v20;
  int* v21;
  _DWORD* v22;
  __int64 v23;
  __int128 v24;
  __int128 v25;
  __int64 v26;
  unsigned int v27;
  int v28;
  int v29;
  int v30;
  _DWORD* v31;
  __int64 v32;

  v3 = -1;
  v5 = result;
  if (a2 != 0 && a3 != 0) {
    v6 = *(_DWORD*)(a2 + 128);
    if ((v6 & 0x100) != 0) {
      result = (__int64)SdkRoutine_64ac60((_QWORD*)result, &v32, 0x10u);
      v8 = (char*)v32;
      v9 = 69;
      goto LABEL_10;
    }
    if ((a3 & v6 & 0x20) != 0) {
      if (*(_BYTE*)(result + 168) == 1) {
        result = (__int64)SdkRoutine_67a390((__int64*)result, a2);
      }
      if ((unsigned int)(*(_DWORD*)(v5 + 24) - 5) <= 0xFFFFFFFD) {
        result = (__int64)SdkRoutine_64ac60((_QWORD*)v5, &v32, 0x10u);
        v8 = (char*)v32;
        v9 = 8;
      LABEL_10:
        *v8 = v9;
        *(_QWORD*)(v32 + 8) = a2;
      }
    LABEL_11:
      v3 = ~*(_WORD*)(a2 + 128) | 0xFFFFFE00;
      goto LABEL_12;
    }
    v14 = *(_DWORD*)(a2 + 20);
    v15 = *(_QWORD*)result;
    v16 = *(_QWORD*)(a2 + 24);
    if (*(_QWORD*)result + 4 * (unsigned __int64)(v14 + 1) >
        *(_QWORD*)(result + 8)) {
      result = SdkRoutine_64b750(result, v15,
                                 4LL * (*(_DWORD*)(result + 104) + v14 + 1));
      v15 = *(_QWORD*)v5;
      v14 = *(_DWORD*)(a2 + 20);
    }
    if (v14 == 0) {
      v26 = 0;
    LABEL_34:
      v31 = (_DWORD*)(v15 + 4 * v26);
      if ((*(_DWORD*)(a2 + 132) & ~a3 & 0x1F) != 0) {
        *v31++ = -2147480002;
      }
      *(_QWORD*)v5 = v31;
      if ((*(_WORD*)(a2 + 129) & 0x3FE) == 0) {
        goto LABEL_11;
      }
      result = (__int64)SdkRoutine_64ac60((_QWORD*)v5, &v32, 0x10u);
      v8 = (char*)v32;
      v9 = 19;
      goto LABEL_10;
    }
    if (v14 < 8 || (unsigned __int64)(v15 - v16) < 0x20) {
      v21 = (int*)v16;
      v22 = (_DWORD*)v15;
    }
    else {
      v17 = v14;
      v18 = v14 & 0xFFFFFFF8;
      v19 = (_OWORD*)(v15 + 16);
      v20 = (__int128*)(v16 + 16);
      v21 = (int*)(v16 + 4 * v18);
      v22 = (_DWORD*)(v15 + 4 * v18);
      v14 -= v18;
      v23 = v18;
      do {
        v24 = *(v20 - 1);
        v25 = *v20;
        v20 += 2;
        v23 -= 8;
        *(v19 - 1) = v24;
        *v19 = v25;
        v19 += 2;
      } while (v23 != 0);
      if (v18 == v17) {
      LABEL_33:
        v26 = *(unsigned int*)(a2 + 20);
        goto LABEL_34;
      }
    }
    v27 = v14 - 1;
    v28 = v14 & 7;
    if ((v14 & 7) != 0) {
      v14 &= 0xFFFFFFF8;
      do {
        v29 = *v21++;
        --v28;
        *v22++ = v29;
      } while (v28 != 0);
    }
    if (v27 >= 7) {
      do {
        v14 -= 8;
        *v22 = *v21;
        v22[1] = v21[1];
        v22[2] = v21[2];
        v22[3] = v21[3];
        v22[4] = v21[4];
        v22[5] = v21[5];
        v22[6] = v21[6];
        v30 = v21[7];
        v21 += 8;
        v22[7] = v30;
        v22 += 8;
      } while (v14 != 0);
    }
    goto LABEL_33;
  }
LABEL_12:
  v10 = v3 & a3;
  if (v10 != 0) {
    v11 = *(_QWORD*)v5;
    v12 = *(_QWORD*)(v5 + 8);
    v13 = *(_QWORD*)v5 + 196LL;
    v32 = *(_QWORD*)v5;
    if (v13 > v12) {
      SdkRoutine_64b750(v5, v11,
                        4LL * (unsigned int)(*(_DWORD*)(v5 + 104) + 49));
      v32 = *(_QWORD*)v5;
    }
    result = SdkRoutine_695200(&v32, *(_QWORD*)(v5 + 112), v10);
    *(_QWORD*)v5 = v32;
  }
  return result;
}

#pragma GCC visibility pop
