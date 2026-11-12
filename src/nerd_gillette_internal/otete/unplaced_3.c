#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_87adc0(_QWORD);
__int64 SdkRoutine_87ade0(_QWORD);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 nerd_gillette_internal_otete_74dc40(__int64* a1, __int64* a2, float a3);
__int64 nerd_gillette_internal_otete_74eb00(__int64* a1, __int64* a2, float a3);
__int64 nerd_gillette_internal_otete_750780(__int64* a1, __int64* a2,
                                            __int64 a3, float a4);

__int64 nerd_gillette_internal_otete_74dc40(__int64* a1, __int64* a2, float a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v9;
  __int64 v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  __int64 v15;
  unsigned __int64 v16;
  char v17;
  unsigned __int64 v18;
  char v19;
  unsigned __int64 v20;
  char v21;
  unsigned __int64 v22;
  char v23;
  unsigned __int64 v24;
  char v25;
  unsigned __int64 v26;
  char v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 i;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  char v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
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
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  int v66;
  unsigned int v67;
  int v68;
  unsigned __int8 v69;
  unsigned int v70;
  __int16 v71;
  __int16 v72;
  _WORD* v73;
  unsigned __int64 v74;
  unsigned __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  __int64 v78;
  unsigned int v79;
  unsigned int v80;
  unsigned int v81;
  unsigned int v82;
  unsigned int v83;
  unsigned int v84;
  unsigned __int64 v85;
  char v86;
  unsigned __int64 v87;
  char v88;
  unsigned __int64 v89;
  char v90;
  unsigned __int64 v91;
  char v92;
  unsigned __int64 v93;
  char v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 j;
  __int64 v101;
  __int64 v102;
  int v103;
  unsigned __int64 v104;
  unsigned __int64 v105;
  __int64 v106;
  unsigned __int64 v107;
  __int64 v108;
  unsigned int v109;
  unsigned int v110;
  unsigned int v111;
  unsigned int v112;
  unsigned int v113;
  unsigned int v114;
  unsigned int v115;
  int v116;
  unsigned __int64 v117;
  char v118;
  unsigned __int64 v119;
  char v120;
  unsigned __int64 v121;
  char v122;
  unsigned __int64 v123;
  char v124;
  unsigned __int64 v125;
  char v126;
  unsigned __int64 v127;
  char v128;
  unsigned int v129;
  unsigned __int8 v130;
  unsigned int v131;
  __int16 v132;
  _WORD* v133;
  float v134;
  __int64 v135;
  unsigned int v136;
  __int64 v137;
  __int64 v138;
  float v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  _WORD* v144;
  float v145;
  float v146;
  unsigned int v147;
  int v148;
  int v149;
  float v150;
  float v151;
  float v152;
  unsigned int v153;
  int v154;
  int v155;
  float v156;
  float v157;
  float v158;
  unsigned int v159;
  int v160;
  int v161;
  float v162;
  float v163;
  float v164;
  unsigned int v165;
  int v166;
  int v167;
  float v168;
  float v169;
  float v170;
  unsigned int v171;
  int v172;
  int v173;
  float v174;
  float v175;
  float v176;
  unsigned int v177;
  int v178;
  int v179;
  float v180;
  float v181;
  float v182;
  unsigned int v183;
  int v184;
  int v185;
  float v186;
  float v187;
  float v188;
  int v189;
  _WORD* v190;
  __int64 v191;
  float v192;
  float v193;
  int v194;
  unsigned int v196;
  unsigned int v197;
  unsigned int v198;
  unsigned int v199;
  int v200;
  unsigned int v201;
  unsigned int v202;
  unsigned int v203;
  __int64 v204;
  struct {
    __int64 v205;
    __int16 v206;
    char gap58_[14];
    __int64 v207;
  } v205_;

  v3 = a2[1];
  v4 = a2[2];
  v5 = *a2;
  if (v3 >= v4) {
    v11 = 0;
  LABEL_3:
    v12 = 0;
    if (v3 >= v4) {
      goto LABEL_4;
    }
    goto LABEL_13;
  }
  v9 = v3 >> 3;
  v10 = a2[1] & 7;
  ++v3;
  LODWORD(v9) = *(unsigned __int8*)(v5 + v9);
  a2[1] = v3;
  v11 = 2 * (((unsigned int)v9 >> v10) & 1);
  if (v3 >= v4) {
    goto LABEL_3;
  }
  v16 = v3 >> 3;
  v17 = v3++ & 7;
  LODWORD(v16) = *(unsigned __int8*)(v5 + v16);
  a2[1] = v3;
  v12 = ((unsigned int)v16 >> v17) & 1;
  if (v3 >= v4) {
  LABEL_4:
    v13 = 0;
    if (v3 >= v4) {
      goto LABEL_5;
    }
    goto LABEL_14;
  }
LABEL_13:
  v18 = v3 >> 3;
  v19 = v3++ & 7;
  LODWORD(v18) = *(unsigned __int8*)(v5 + v18);
  a2[1] = v3;
  v13 = 2 * (((unsigned int)v18 >> v19) & 1);
  if (v3 >= v4) {
  LABEL_5:
    v14 = 0;
    if (v3 >= v4) {
      goto LABEL_6;
    }
    goto LABEL_15;
  }
LABEL_14:
  v20 = v3 >> 3;
  v21 = v3++ & 7;
  LODWORD(v20) = *(unsigned __int8*)(v5 + v20);
  a2[1] = v3;
  v14 = ((unsigned int)v20 >> v21) & 1;
  if (v3 >= v4) {
  LABEL_6:
    v203 = 0;
    if (v3 >= v4) {
      goto LABEL_7;
    }
    goto LABEL_16;
  }
LABEL_15:
  v22 = v3 >> 3;
  v23 = v3++ & 7;
  LODWORD(v22) = *(unsigned __int8*)(v5 + v22);
  a2[1] = v3;
  v203 = 2 * (((unsigned int)v22 >> v23) & 1);
  if (v3 >= v4) {
  LABEL_7:
    v202 = 0;
    if (v3 >= v4) {
      goto LABEL_8;
    }
    goto LABEL_17;
  }
LABEL_16:
  v24 = v3 >> 3;
  v25 = v3++ & 7;
  LODWORD(v24) = *(unsigned __int8*)(v5 + v24);
  a2[1] = v3;
  v202 = ((unsigned int)v24 >> v25) & 1;
  if (v3 >= v4) {
  LABEL_8:
    v201 = 0;
    if (v3 >= v4) {
      goto LABEL_9;
    }
    goto LABEL_18;
  }
LABEL_17:
  v26 = v3 >> 3;
  v27 = v3++ & 7;
  LODWORD(v26) = *(unsigned __int8*)(v5 + v26);
  a2[1] = v3;
  v201 = 2 * (((unsigned int)v26 >> v27) & 1);
  if (v3 >= v4) {
  LABEL_9:
    v200 = 0;
    v15 = *((unsigned int*)a1 + 3);
    if ((_DWORD)v15 == 0) {
      goto LABEL_106;
    }
    goto LABEL_19;
  }
LABEL_18:
  v28 = *(unsigned __int8*)(v5 + (v3 >> 3));
  a2[1] = v3 + 1;
  v200 = (v28 >> (v3 & 7)) & 1;
  v15 = *((unsigned int*)a1 + 3);
  if ((_DWORD)v15 == 0) {
    goto LABEL_106;
  }
LABEL_19:
  v29 = *((unsigned int*)a1 + 2);
  v198 = v13;
  v199 = v12;
  v197 = v14;
  v30 = (unsigned int)v29 & 0xFFFFFFFC;
  if ((v29 & 0xFFFFFFFC) == 0) {
    if ((_DWORD)v30 != (_DWORD)v29) {
      v34 = 2 * v29;
      v35 = v15 & 7;
      if ((unsigned int)v15 >= 8) {
        v54 = 0;
        v36 = 0;
        v55 = (2 * v15) & 0x1FFFFFFF0LL;
        do {
          memset_plt(*a1 + v54 * *((unsigned int*)a1 + 4), 0, v34);
          memset_plt(*a1 + (v54 + 2) * *((unsigned int*)a1 + 4), 0, v34);
          memset_plt(*a1 + (v54 + 4) * *((unsigned int*)a1 + 4), 0, v34);
          memset_plt(*a1 + (v54 + 6) * *((unsigned int*)a1 + 4), 0, v34);
          memset_plt(*a1 + (v54 + 8) * *((unsigned int*)a1 + 4), 0, v34);
          memset_plt(*a1 + (v54 + 10) * *((unsigned int*)a1 + 4), 0, v34);
          memset_plt(*a1 + (v54 + 12) * *((unsigned int*)a1 + 4), 0, v34);
          memset_plt(*a1 + (v54 + 14) * *((unsigned int*)a1 + 4), 0, v34);
          v36 += 8;
          v54 += 16;
        } while (v55 != v54);
      }
      else {
        v36 = 0;
      }
      if (v35 != 0) {
        v56 = 2 * v36;
        do {
          memset_plt(*a1 + v56 * *((unsigned int*)a1 + 4), 0, v34);
          v56 += 2;
          --v35;
        } while (v35 != 0);
      }
    }
    goto LABEL_45;
  }
  v31 = (2 * v30 - 2) & 0xFFFFFFFFFFFFFFF8LL;
  if ((_DWORD)v30 != (_DWORD)v29) {
    v37 = 2 * v29;
    v38 = v15 & 3;
    v196 = v11;
    v205_.v207 = (2 * v29) & 0x1FFFFFFF8LL;
    if ((unsigned int)v15 >= 4) {
      v42 = 6;
      v39 = 0;
      v204 = (unsigned int)v15 & 0xFFFFFFFC;
      do {
        v43 = *((unsigned int*)a1 + 4);
        v44 = *a1;
        memset_plt(*a1 + 2 * v39 * v43, 0, v31 + 8);
        memset_plt(v44 + v205_.v207 + (v42 - 6) * v43, 0, v37 & 6);
        v45 = *((unsigned int*)a1 + 4);
        v46 = *a1;
        memset_plt(*a1 + 2 * (v45 + v45 * v39), 0, v31 + 8);
        memset_plt(v46 + v205_.v207 + (v42 - 4) * v45, 0, v37 & 6);
        v47 = *((unsigned int*)a1 + 4);
        v48 = *a1;
        memset_plt(*a1 + 2 * (v39 + 2) * v47, 0, v31 + 8);
        memset_plt(v48 + v205_.v207 + (v42 - 2) * v47, 0, v37 & 6);
        v49 = *((unsigned int*)a1 + 4);
        v50 = *a1;
        memset_plt(*a1 + 2 * (v39 + 3) * v49, 0, v31 + 8);
        memset_plt(v50 + v205_.v207 + v42 * v49, 0, v37 & 6);
        v39 += 4;
        v42 += 8;
      } while (v204 != v39);
    }
    else {
      v39 = 0;
    }
    v11 = v196;
    if (v38 != 0) {
      v51 = 2 * v39;
      do {
        v52 = *((unsigned int*)a1 + 4);
        v53 = *a1;
        memset_plt(*a1 + 2 * v39 * v52, 0, v31 + 8);
        memset_plt(v53 + v205_.v207 + v51 * v52, 0, v37 & 6);
        ++v39;
        v51 += 2;
        --v38;
      } while (v38 != 0);
    }
    goto LABEL_45;
  }
  v32 = v15 & 7;
  if ((unsigned int)v15 < 8) {
    i = 0;
    if ((v15 & 7) == 0) {
      goto LABEL_45;
    }
    goto LABEL_32;
  }
  v40 = 7;
  v41 = -(__int64)((unsigned int)v15 & 0xFFFFFFF8);
  do {
    memset_plt(*a1 + 2 * (v40 - 7) * *((unsigned int*)a1 + 4), 0, v31 + 8);
    memset_plt(*a1 + 2 * (v40 - 6) * *((unsigned int*)a1 + 4), 0, v31 + 8);
    memset_plt(*a1 + 2 * (v40 - 5) * *((unsigned int*)a1 + 4), 0, v31 + 8);
    memset_plt(*a1 + 2 * (v40 - 4) * *((unsigned int*)a1 + 4), 0, v31 + 8);
    memset_plt(*a1 + 2 * (v40 - 3) * *((unsigned int*)a1 + 4), 0, v31 + 8);
    memset_plt(*a1 + 2 * (v40 - 2) * *((unsigned int*)a1 + 4), 0, v31 + 8);
    memset_plt(*a1 + 2 * (v40 - 1) * *((unsigned int*)a1 + 4), 0, v31 + 8);
    memset_plt(*a1 + 2 * v40 * *((unsigned int*)a1 + 4), 0, v31 + 8);
    v40 += 8;
  } while (v41 + v40 != 7);
  for (i = v40 - 7; v32 != 0; --v32) {
  LABEL_32:
    memset_plt(*a1 + 2 * i * *((unsigned int*)a1 + 4), 0, v31 + 8);
    ++i;
  }
LABEL_45:
  v58 = *((unsigned int*)a1 + 2);
  v57 = *((unsigned int*)a1 + 3);
  v13 = v198;
  v12 = v199;
  v14 = v197;
  WORD2(v205_.v205) = 0;
  LODWORD(v205_.v205) = 0;
  if ((_DWORD)v57 != 0 && (_DWORD)v58 != 0) {
    v60 = 2 * v58;
    v61 = 3;
    v62 = 0;
    v63 = 0;
    do {
      v64 = 0;
      v65 = *a1 + v62 * *((unsigned int*)a1 + 4);
      v66 = v63;
      do {
        while ((v66 & 1) == 0) {
          if (v61 == 3) {
            v74 = a2[1];
            v75 = a2[2];
            v76 = *a2;
            if (v74 >= v75) {
              LOBYTE(v79) = 0;
            LABEL_61:
              LOBYTE(v80) = 0;
              if (v74 >= v75) {
                goto LABEL_62;
              }
            LABEL_71:
              v87 = v74 >> 3;
              v88 = v74++ & 7;
              LODWORD(v87) = *(unsigned __int8*)(v76 + v87);
              a2[1] = v74;
              v81 = 2 * (((unsigned int)v87 >> v88) & 1);
              if (v74 < v75) {
                goto LABEL_72;
              }
            LABEL_63:
              LOBYTE(v82) = 0;
              if (v74 >= v75) {
                goto LABEL_64;
              }
            LABEL_73:
              v91 = v74 >> 3;
              v92 = v74++ & 7;
              LODWORD(v91) = *(unsigned __int8*)(v76 + v91);
              a2[1] = v74;
              v83 = 2 * (((unsigned int)v91 >> v92) & 1);
              if (v74 < v75) {
                goto LABEL_74;
              }
            LABEL_65:
              LOBYTE(v84) = 0;
              if (v74 < v75) {
                goto LABEL_52;
              }
            LABEL_75:
              LOBYTE(v68) = 0;
            }
            else {
              v77 = v74 >> 3;
              v78 = a2[1] & 7;
              ++v74;
              LODWORD(v77) = *(unsigned __int8*)(v76 + v77);
              a2[1] = v74;
              v79 = 2 * (((unsigned int)v77 >> v78) & 1);
              if (v74 >= v75) {
                goto LABEL_61;
              }
              v85 = v74 >> 3;
              v86 = v74++ & 7;
              LODWORD(v85) = *(unsigned __int8*)(v76 + v85);
              a2[1] = v74;
              v80 = ((unsigned int)v85 >> v86) & 1;
              if (v74 < v75) {
                goto LABEL_71;
              }
            LABEL_62:
              LOBYTE(v81) = 0;
              if (v74 >= v75) {
                goto LABEL_63;
              }
            LABEL_72:
              v89 = v74 >> 3;
              v90 = v74++ & 7;
              LODWORD(v89) = *(unsigned __int8*)(v76 + v89);
              a2[1] = v74;
              v82 = ((unsigned int)v89 >> v90) & 1;
              if (v74 < v75) {
                goto LABEL_73;
              }
            LABEL_64:
              LOBYTE(v83) = 0;
              if (v74 >= v75) {
                goto LABEL_65;
              }
            LABEL_74:
              v93 = v74 >> 3;
              v94 = v74++ & 7;
              LODWORD(v93) = *(unsigned __int8*)(v76 + v93);
              a2[1] = v74;
              v84 = ((unsigned int)v93 >> v94) & 1;
              if (v74 >= v75) {
                goto LABEL_75;
              }
            LABEL_52:
              v67 = *(unsigned __int8*)(v76 + (v74 >> 3));
              a2[1] = v74 + 1;
              v68 = (v67 >> (v74 & 7)) & 1;
            }
            v61 = 0;
            v69 =
                v68 | (2 * (v83 | (4 * (v81 | (4 * (v80 | v79)) | v82)) | v84));
            v70 = v69;
            v71 = v69 / 5u;
            LOWORD(v205_.v205) = v69 % 5u;
            v72 = v69 / 0x19u;
            WORD1(v205_.v205) =
                (unsigned __int8)(v71 -
                                  5 * ((unsigned __int16)(52 * v71) >> 8));
            if (v70 >= 0x7D) {
              v72 -= 5;
            }
            WORD2(v205_.v205) = v72;
          }
          v73 = (_WORD*)&v205_.v205 + v61++;
          ++v66;
          *(_WORD*)(v65 + v64) = *v73;
          v64 += 2;
          if (v60 == v64) {
            goto LABEL_50;
          }
        }
        ++v66;
        *(_WORD*)(v65 + v64) =
            *(_WORD*)(*a1 + v62 * *((unsigned int*)a1 + 4) + v64);
        v64 += 2;
      } while (v60 != v64);
    LABEL_50:
      ++v63;
      v62 += 2;
    } while (v63 != v57);
    v96 = *((unsigned int*)a1 + 2);
    v95 = *((unsigned int*)a1 + 3);
    v205_.v206 = 0;
    v205_.v205 = 0;
    if ((_DWORD)v95 != 0 && (_DWORD)v96 != 0) {
      v97 = 2 * v96;
      v98 = 5;
      v99 = 0;
      for (j = 0; j != v95; ++j) {
        v101 = 0;
        v102 = *a1 + v99 * *((unsigned int*)a1 + 4);
        v103 = j;
        do {
          while ((v103 & 1) == 0) {
            ++v103;
            *(_WORD*)(v102 + v101) =
                *(_WORD*)(*a1 + v99 * *((unsigned int*)a1 + 4) + v101);
            v101 += 2;
            if (v97 == v101) {
              goto LABEL_79;
            }
          }
          if (v98 == 5) {
            v104 = a2[1];
            v105 = a2[2];
            v106 = *a2;
            if (v104 >= v105) {
              LOBYTE(v109) = 0;
            LABEL_86:
              LOBYTE(v110) = 0;
              if (v104 >= v105) {
                goto LABEL_87;
              }
            LABEL_95:
              v119 = v104 >> 3;
              v120 = v104++ & 7;
              LODWORD(v119) = *(unsigned __int8*)(v106 + v119);
              a2[1] = v104;
              v111 = 2 * (((unsigned int)v119 >> v120) & 1);
              if (v104 < v105) {
                goto LABEL_96;
              }
            LABEL_88:
              LOBYTE(v112) = 0;
              if (v104 >= v105) {
                goto LABEL_89;
              }
            LABEL_97:
              v123 = v104 >> 3;
              v124 = v104++ & 7;
              LODWORD(v123) = *(unsigned __int8*)(v106 + v123);
              a2[1] = v104;
              v113 = 2 * (((unsigned int)v123 >> v124) & 1);
              if (v104 < v105) {
                goto LABEL_98;
              }
            LABEL_90:
              LOBYTE(v114) = 0;
              if (v104 >= v105) {
                goto LABEL_91;
              }
            LABEL_99:
              v127 = v104 >> 3;
              v128 = v104++ & 7;
              LODWORD(v127) = *(unsigned __int8*)(v106 + v127);
              a2[1] = v104;
              v115 = 2 * (((unsigned int)v127 >> v128) & 1);
              if (v104 < v105) {
                goto LABEL_100;
              }
            LABEL_92:
              LOBYTE(v116) = 0;
            }
            else {
              v107 = v104 >> 3;
              v108 = a2[1] & 7;
              ++v104;
              LODWORD(v107) = *(unsigned __int8*)(v106 + v107);
              a2[1] = v104;
              v109 = 2 * (((unsigned int)v107 >> v108) & 1);
              if (v104 >= v105) {
                goto LABEL_86;
              }
              v117 = v104 >> 3;
              v118 = v104++ & 7;
              LODWORD(v117) = *(unsigned __int8*)(v106 + v117);
              a2[1] = v104;
              v110 = ((unsigned int)v117 >> v118) & 1;
              if (v104 < v105) {
                goto LABEL_95;
              }
            LABEL_87:
              LOBYTE(v111) = 0;
              if (v104 >= v105) {
                goto LABEL_88;
              }
            LABEL_96:
              v121 = v104 >> 3;
              v122 = v104++ & 7;
              LODWORD(v121) = *(unsigned __int8*)(v106 + v121);
              a2[1] = v104;
              v112 = ((unsigned int)v121 >> v122) & 1;
              if (v104 < v105) {
                goto LABEL_97;
              }
            LABEL_89:
              LOBYTE(v113) = 0;
              if (v104 >= v105) {
                goto LABEL_90;
              }
            LABEL_98:
              v125 = v104 >> 3;
              v126 = v104++ & 7;
              LODWORD(v125) = *(unsigned __int8*)(v106 + v125);
              a2[1] = v104;
              v114 = ((unsigned int)v125 >> v126) & 1;
              if (v104 < v105) {
                goto LABEL_99;
              }
            LABEL_91:
              LOBYTE(v115) = 0;
              if (v104 >= v105) {
                goto LABEL_92;
              }
            LABEL_100:
              v129 = *(unsigned __int8*)(v106 + (v104 >> 3));
              a2[1] = v104 + 1;
              v116 = (v129 >> (v104 & 7)) & 1;
            }
            v98 = 0;
            v130 = v115 |
                   (4 *
                    (v113 | (4 * (v111 | (4 * (v110 | v109)) | v112)) | v114)) |
                   v116;
            v131 = v130;
            LOWORD(v205_.v205) = v130 % 3u;
            WORD1(v205_.v205) =
                (unsigned __int8)(v130 / 3u -
                                  3 * ((unsigned __int16)(86 * (v130 / 3u)) >>
                                       8));
            WORD2(v205_.v205) =
                (unsigned __int8)(v130 / 9u -
                                  3 * ((unsigned __int16)(86 * (v130 / 9u)) >>
                                       8));
            HIWORD(v205_.v205) =
                (unsigned __int8)(v130 / 0x1Bu -
                                  3 * ((unsigned __int16)(86 *
                                                          (v130 / 0x1Bu)) >>
                                       8));
            v132 = v130 / 0x51u;
            if (v131 > 0xF2) {
              v132 -= 3;
            }
            v205_.v206 = v132;
          }
          v133 = (_WORD*)&v205_.v205 + v98++;
          ++v103;
          *(_WORD*)(v102 + v101) = *v133;
          v101 += 2;
        } while (v97 != v101);
      LABEL_79:
        v99 += 2;
      }
    }
  }
LABEL_106:
  SdkRoutine_87adc0(a1);
  v135 = *((unsigned int*)a1 + 3);
  if ((_DWORD)v135 != 0) {
    v136 = *((_DWORD*)a1 + 2);
    if (v136 != 0) {
      v137 = 0;
      v138 = 0;
      v139 =
          (float)(a3 * (float)(v200 | v201 |
                               (4 * (v202 | v203 |
                                     (4 * (v14 | v13 | (4 * (v12 | v11)))))))) *
          0x1.0101020000000p-8f;
      while (1) {
        v140 = *a1;
        v141 = *((unsigned int*)a1 + 4);
        if (v136 >= 8) {
          break;
        }
        v142 = 0;
        if ((v136 & 7) != 0) {
          goto LABEL_156;
        }
      LABEL_109:
        ++v138;
        v137 += 2;
        if (v138 == v135) {
          return 1;
        }
      }
      v143 = 0;
      v144 = (_WORD*)(v140 + v137 * v141 + 8);
      do {
        LOWORD(v134) = *(v144 - 4);
        v143 -= 8;
        v145 = v139 * (float)LODWORD(v134);
        if (v145 <= 0x0.0p+0f) {
          v146 = -0x1.0000000000000p-1f;
        }
        else {
          v146 = 0x1.0000000000000p-1f;
        }
        *(float*)&v147 = v145 + v146;
        v148 = (int)*(float*)&v147;
        LOWORD(v147) = *(v144 - 3);
        v149 = v148 & ~(v148 >> 31);
        v150 = (float)v147;
        if (v149 >= 0xFFFF) {
          LOWORD(v149) = -1;
        }
        *(v144 - 4) = v149;
        v151 = v139 * v150;
        if (v151 <= 0x0.0p+0f) {
          v152 = -0x1.0000000000000p-1f;
        }
        else {
          v152 = 0x1.0000000000000p-1f;
        }
        *(float*)&v153 = v151 + v152;
        v154 = (int)*(float*)&v153;
        LOWORD(v153) = *(v144 - 2);
        v155 = v154 & ~(v154 >> 31);
        v156 = (float)v153;
        if (v155 >= 0xFFFF) {
          LOWORD(v155) = -1;
        }
        *(v144 - 3) = v155;
        v157 = v139 * v156;
        if (v157 <= 0x0.0p+0f) {
          v158 = -0x1.0000000000000p-1f;
        }
        else {
          v158 = 0x1.0000000000000p-1f;
        }
        *(float*)&v159 = v157 + v158;
        v160 = (int)*(float*)&v159;
        LOWORD(v159) = *(v144 - 1);
        v161 = v160 & ~(v160 >> 31);
        v162 = (float)v159;
        if (v161 >= 0xFFFF) {
          LOWORD(v161) = -1;
        }
        *(v144 - 2) = v161;
        v163 = v139 * v162;
        if (v163 <= 0x0.0p+0f) {
          v164 = -0x1.0000000000000p-1f;
        }
        else {
          v164 = 0x1.0000000000000p-1f;
        }
        *(float*)&v165 = v163 + v164;
        v166 = (int)*(float*)&v165;
        LOWORD(v165) = *v144;
        v167 = v166 & ~(v166 >> 31);
        v168 = (float)v165;
        if (v167 >= 0xFFFF) {
          LOWORD(v167) = -1;
        }
        *(v144 - 1) = v167;
        v169 = v139 * v168;
        if (v169 <= 0x0.0p+0f) {
          v170 = -0x1.0000000000000p-1f;
        }
        else {
          v170 = 0x1.0000000000000p-1f;
        }
        *(float*)&v171 = v169 + v170;
        v172 = (int)*(float*)&v171;
        LOWORD(v171) = v144[1];
        v173 = v172 & ~(v172 >> 31);
        v174 = (float)v171;
        if (v173 >= 0xFFFF) {
          LOWORD(v173) = -1;
        }
        *v144 = v173;
        v175 = v139 * v174;
        if (v175 <= 0x0.0p+0f) {
          v176 = -0x1.0000000000000p-1f;
        }
        else {
          v176 = 0x1.0000000000000p-1f;
        }
        *(float*)&v177 = v175 + v176;
        v178 = (int)*(float*)&v177;
        LOWORD(v177) = v144[2];
        v179 = v178 & ~(v178 >> 31);
        v180 = (float)v177;
        if (v179 >= 0xFFFF) {
          LOWORD(v179) = -1;
        }
        v144[1] = v179;
        v181 = v139 * v180;
        if (v181 <= 0x0.0p+0f) {
          v182 = -0x1.0000000000000p-1f;
        }
        else {
          v182 = 0x1.0000000000000p-1f;
        }
        *(float*)&v183 = v181 + v182;
        v184 = (int)*(float*)&v183;
        LOWORD(v183) = v144[3];
        v185 = v184 & ~(v184 >> 31);
        v186 = (float)v183;
        if (v185 >= 0xFFFF) {
          LOWORD(v185) = -1;
        }
        v144[2] = v185;
        v187 = v139 * v186;
        if (v187 <= 0x0.0p+0f) {
          v188 = -0x1.0000000000000p-1f;
        }
        else {
          v188 = 0x1.0000000000000p-1f;
        }
        v134 = v187 + v188;
        v189 = (int)v134 & ~((int)v134 >> 31);
        if (v189 >= 0xFFFF) {
          LOWORD(v189) = -1;
        }
        v144[3] = v189;
        v144 += 8;
      } while (-(__int64)(v136 & 0xFFFFFFF8) != v143);
      v142 = -v143;
      if ((v136 & 7) == 0) {
        goto LABEL_109;
      }
    LABEL_156:
      v190 = (_WORD*)(v140 + v137 * v141 + 2 * v142);
      v191 = v136 & 7;
      do {
        LOWORD(v134) = *v190;
        v192 = v139 * (float)LODWORD(v134);
        if (v192 <= 0x0.0p+0f) {
          v193 = -0x1.0000000000000p-1f;
        }
        else {
          v193 = 0x1.0000000000000p-1f;
        }
        v134 = v192 + v193;
        v194 = (int)v134 & ~((int)v134 >> 31);
        if (v194 >= 0xFFFF) {
          LOWORD(v194) = -1;
        }
        --v191;
        *v190++ = v194;
      } while (v191 != 0);
      goto LABEL_109;
    }
  }
  return 1;
}

__int64 nerd_gillette_internal_otete_74eb00(__int64* a1, __int64* a2, float a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v9;
  __int64 v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  unsigned int v19;
  unsigned __int64 v20;
  char v21;
  unsigned __int64 v22;
  char v23;
  unsigned __int64 v24;
  char v25;
  unsigned __int64 v26;
  char v27;
  unsigned __int64 v28;
  char v29;
  unsigned __int64 v30;
  char v31;
  unsigned int v32;
  unsigned __int64 v33;
  unsigned int v34;
  __int64 v35;
  unsigned int v36;
  unsigned int v37;
  unsigned int v38;
  __int64 i;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned int v49;
  int v50;
  unsigned __int8 v51;
  unsigned int v52;
  __int16 v53;
  char v54;
  _BYTE* v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  unsigned int v61;
  unsigned int v62;
  unsigned int v63;
  unsigned int v64;
  unsigned int v65;
  unsigned int v66;
  unsigned __int64 v67;
  char v68;
  unsigned __int64 v69;
  char v70;
  unsigned __int64 v71;
  char v72;
  unsigned __int64 v73;
  char v74;
  unsigned __int64 v75;
  char v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 j;
  __int64 v81;
  __int64 v82;
  unsigned __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  unsigned __int64 v86;
  __int64 v87;
  unsigned int v88;
  unsigned int v89;
  unsigned int v90;
  unsigned int v91;
  unsigned int v92;
  unsigned int v93;
  unsigned int v94;
  int v95;
  unsigned __int64 v96;
  char v97;
  unsigned __int64 v98;
  char v99;
  unsigned __int64 v100;
  char v101;
  unsigned __int64 v102;
  char v103;
  unsigned __int64 v104;
  char v105;
  unsigned __int64 v106;
  char v107;
  unsigned int v108;
  unsigned __int8 v109;
  unsigned int v110;
  char v111;
  _BYTE* v112;
  float v113;
  __int64 v114;
  unsigned int v115;
  __int64 v116;
  float v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  _BYTE* v122;
  float v123;
  float v124;
  unsigned int v125;
  int v126;
  int v127;
  float v128;
  float v129;
  float v130;
  unsigned int v131;
  int v132;
  int v133;
  float v134;
  float v135;
  float v136;
  unsigned int v137;
  int v138;
  int v139;
  float v140;
  float v141;
  float v142;
  unsigned int v143;
  int v144;
  int v145;
  float v146;
  float v147;
  float v148;
  unsigned int v149;
  int v150;
  int v151;
  float v152;
  float v153;
  float v154;
  unsigned int v155;
  int v156;
  int v157;
  float v158;
  float v159;
  float v160;
  unsigned int v161;
  int v162;
  int v163;
  float v164;
  float v165;
  float v166;
  int v167;
  _BYTE* v168;
  __int64 v169;
  float v170;
  float v171;
  int v172;
  unsigned int v174;
  int v175;
  unsigned int v176;
  unsigned int v177;
  struct {
    __int16 v178;
    char v179;
    char gap31_[9];
    int v180;
    char v181;
  } v178_;

  v3 = a2[1];
  v4 = a2[2];
  v5 = *a2;
  if (v3 >= v4) {
    v11 = 0;
  LABEL_3:
    v12 = 0;
    if (v3 >= v4) {
      goto LABEL_4;
    }
    goto LABEL_13;
  }
  v9 = v3 >> 3;
  v10 = a2[1] & 7;
  ++v3;
  LODWORD(v9) = *(unsigned __int8*)(v5 + v9);
  a2[1] = v3;
  v11 = 2 * (((unsigned int)v9 >> v10) & 1);
  if (v3 >= v4) {
    goto LABEL_3;
  }
  v20 = v3 >> 3;
  v21 = v3++ & 7;
  LODWORD(v20) = *(unsigned __int8*)(v5 + v20);
  a2[1] = v3;
  v12 = ((unsigned int)v20 >> v21) & 1;
  if (v3 >= v4) {
  LABEL_4:
    v13 = 0;
    if (v3 >= v4) {
      goto LABEL_5;
    }
    goto LABEL_14;
  }
LABEL_13:
  v22 = v3 >> 3;
  v23 = v3++ & 7;
  LODWORD(v22) = *(unsigned __int8*)(v5 + v22);
  a2[1] = v3;
  v13 = 2 * (((unsigned int)v22 >> v23) & 1);
  if (v3 >= v4) {
  LABEL_5:
    v14 = 0;
    if (v3 >= v4) {
      goto LABEL_6;
    }
    goto LABEL_15;
  }
LABEL_14:
  v24 = v3 >> 3;
  v25 = v3++ & 7;
  LODWORD(v24) = *(unsigned __int8*)(v5 + v24);
  a2[1] = v3;
  v14 = ((unsigned int)v24 >> v25) & 1;
  if (v3 >= v4) {
  LABEL_6:
    v15 = 0;
    if (v3 >= v4) {
      goto LABEL_7;
    }
    goto LABEL_16;
  }
LABEL_15:
  v26 = v3 >> 3;
  v27 = v3++ & 7;
  LODWORD(v26) = *(unsigned __int8*)(v5 + v26);
  a2[1] = v3;
  v15 = 2 * (((unsigned int)v26 >> v27) & 1);
  if (v3 >= v4) {
  LABEL_7:
    v16 = 0;
    if (v3 >= v4) {
      goto LABEL_8;
    }
    goto LABEL_17;
  }
LABEL_16:
  v28 = v3 >> 3;
  v29 = v3++ & 7;
  LODWORD(v28) = *(unsigned __int8*)(v5 + v28);
  a2[1] = v3;
  v16 = ((unsigned int)v28 >> v29) & 1;
  if (v3 >= v4) {
  LABEL_8:
    v17 = 0;
    if (v3 >= v4) {
      goto LABEL_9;
    }
    goto LABEL_18;
  }
LABEL_17:
  v30 = v3 >> 3;
  v31 = v3++ & 7;
  LODWORD(v30) = *(unsigned __int8*)(v5 + v30);
  a2[1] = v3;
  v17 = 2 * (((unsigned int)v30 >> v31) & 1);
  if (v3 >= v4) {
  LABEL_9:
    v18 = 0;
    v19 = *((_DWORD*)a1 + 3);
    v176 = v14;
    v177 = v15;
    if (v19 == 0) {
      goto LABEL_87;
    }
    goto LABEL_19;
  }
LABEL_18:
  v32 = *(unsigned __int8*)(v5 + (v3 >> 3));
  a2[1] = v3 + 1;
  v18 = (v32 >> (v3 & 7)) & 1;
  v19 = *((_DWORD*)a1 + 3);
  v176 = v14;
  v177 = v15;
  if (v19 == 0) {
    goto LABEL_87;
  }
LABEL_19:
  v33 = *((unsigned int*)a1 + 2);
  v34 = v16;
  v35 = v19 & 7;
  v175 = v18;
  if (v19 < 8) {
    v36 = v13;
    v37 = v12;
    v38 = v11;
    i = 0;
    if ((v19 & 7) == 0) {
      goto LABEL_26;
    }
    goto LABEL_25;
  }
  v174 = v13;
  v37 = v12;
  v38 = v11;
  v40 = 7;
  v41 = -(__int64)(v19 & 0xFFFFFFF8);
  do {
    memset_plt(*a1 + (v40 - 7) * *((unsigned int*)a1 + 4), 0, v33);
    memset_plt(*a1 + (v40 - 6) * *((unsigned int*)a1 + 4), 0, v33);
    memset_plt(*a1 + (v40 - 5) * *((unsigned int*)a1 + 4), 0, v33);
    memset_plt(*a1 + (v40 - 4) * *((unsigned int*)a1 + 4), 0, v33);
    memset_plt(*a1 + (v40 - 3) * *((unsigned int*)a1 + 4), 0, v33);
    memset_plt(*a1 + (v40 - 2) * *((unsigned int*)a1 + 4), 0, v33);
    memset_plt(*a1 + (v40 - 1) * *((unsigned int*)a1 + 4), 0, v33);
    memset_plt(*a1 + v40 * *((unsigned int*)a1 + 4), 0, v33);
    v40 += 8;
  } while (v41 + v40 != 7);
  v36 = v174;
  for (i = v40 - 7; v35 != 0; --v35) {
  LABEL_25:
    memset_plt(*a1 + i * *((unsigned int*)a1 + 4), 0, v33);
    ++i;
  }
LABEL_26:
  v43 = *((unsigned int*)a1 + 2);
  v42 = *((unsigned int*)a1 + 3);
  v11 = v38;
  v12 = v37;
  v13 = v36;
  v18 = v175;
  v16 = v34;
  v178_.v179 = 0;
  v178_.v178 = 0;
  if ((_DWORD)v42 != 0 && (_DWORD)v43 != 0) {
    v45 = 3;
    v46 = 0;
    do {
      v47 = 0;
      v48 = *a1 + v46 * *((unsigned int*)a1 + 4);
      do {
        while ((((_DWORD)v46 + (_DWORD)v47) & 1) == 0) {
          if (v45 == 3) {
            v57 = a2[1];
            v56 = a2[2];
            v58 = *a2;
            if (v57 >= v56) {
              LOBYTE(v61) = 0;
            LABEL_42:
              LOBYTE(v62) = 0;
              if (v57 >= v56) {
                goto LABEL_43;
              }
            LABEL_52:
              v69 = v57 >> 3;
              v70 = v57++ & 7;
              LODWORD(v69) = *(unsigned __int8*)(v58 + v69);
              a2[1] = v57;
              v63 = 2 * (((unsigned int)v69 >> v70) & 1);
              if (v57 < v56) {
                goto LABEL_53;
              }
            LABEL_44:
              LOBYTE(v64) = 0;
              if (v57 >= v56) {
                goto LABEL_45;
              }
            LABEL_54:
              v73 = v57 >> 3;
              v74 = v57++ & 7;
              LODWORD(v73) = *(unsigned __int8*)(v58 + v73);
              a2[1] = v57;
              v65 = 2 * (((unsigned int)v73 >> v74) & 1);
              if (v57 < v56) {
                goto LABEL_55;
              }
            LABEL_46:
              LOBYTE(v66) = 0;
              if (v57 < v56) {
                goto LABEL_33;
              }
            LABEL_56:
              LOBYTE(v50) = 0;
            }
            else {
              v59 = v57 >> 3;
              v60 = a2[1] & 7;
              ++v57;
              LODWORD(v59) = *(unsigned __int8*)(v58 + v59);
              a2[1] = v57;
              v61 = 2 * (((unsigned int)v59 >> v60) & 1);
              if (v57 >= v56) {
                goto LABEL_42;
              }
              v67 = v57 >> 3;
              v68 = v57++ & 7;
              LODWORD(v67) = *(unsigned __int8*)(v58 + v67);
              a2[1] = v57;
              v62 = ((unsigned int)v67 >> v68) & 1;
              if (v57 < v56) {
                goto LABEL_52;
              }
            LABEL_43:
              LOBYTE(v63) = 0;
              if (v57 >= v56) {
                goto LABEL_44;
              }
            LABEL_53:
              v71 = v57 >> 3;
              v72 = v57++ & 7;
              LODWORD(v71) = *(unsigned __int8*)(v58 + v71);
              a2[1] = v57;
              v64 = ((unsigned int)v71 >> v72) & 1;
              if (v57 < v56) {
                goto LABEL_54;
              }
            LABEL_45:
              LOBYTE(v65) = 0;
              if (v57 >= v56) {
                goto LABEL_46;
              }
            LABEL_55:
              v75 = v57 >> 3;
              v76 = v57++ & 7;
              LODWORD(v75) = *(unsigned __int8*)(v58 + v75);
              a2[1] = v57;
              v66 = ((unsigned int)v75 >> v76) & 1;
              if (v57 >= v56) {
                goto LABEL_56;
              }
            LABEL_33:
              v49 = *(unsigned __int8*)(v58 + (v57 >> 3));
              a2[1] = v57 + 1;
              v50 = (v49 >> (v57 & 7)) & 1;
            }
            v45 = 0;
            v51 =
                v50 | (2 * (v65 | (4 * (v63 | (4 * (v62 | v61)) | v64)) | v66));
            v52 = v51;
            v53 = v51 / 5u;
            LOBYTE(v178_.v178) = v51 % 5u;
            v54 = v51 / 0x19u;
            HIBYTE(v178_.v178) = v53 - 5 * ((unsigned __int16)(52 * v53) >> 8);
            if (v52 >= 0x7D) {
              v54 -= 5;
            }
            v178_.v179 = v54;
          }
          v55 = (char*)&v178_.v178 + v45++;
          *(_BYTE*)(v48 + v47++) = *v55;
          if (v43 == v47) {
            goto LABEL_31;
          }
        }
        *(_BYTE*)(v48 + v47) =
            *(_BYTE*)(*a1 + v46 * *((unsigned int*)a1 + 4) + v47);
        ++v47;
      } while (v43 != v47);
    LABEL_31:
      ++v46;
    } while (v46 != v42);
    v78 = *((unsigned int*)a1 + 2);
    v77 = *((unsigned int*)a1 + 3);
    v178_.v181 = 0;
    v178_.v180 = 0;
    if ((_DWORD)v77 != 0 && (_DWORD)v78 != 0) {
      v79 = 5;
      for (j = 0; j != v77; ++j) {
        v81 = 0;
        v82 = *a1 + j * *((unsigned int*)a1 + 4);
        do {
          while ((((_DWORD)j + (_DWORD)v81) & 1) == 0) {
            *(_BYTE*)(v82 + v81) =
                *(_BYTE*)(*a1 + j * *((unsigned int*)a1 + 4) + v81);
            if (v78 == ++v81) {
              goto LABEL_60;
            }
          }
          if (v79 == 5) {
            v84 = a2[1];
            v83 = a2[2];
            v85 = *a2;
            if (v84 >= v83) {
              LOBYTE(v88) = 0;
            LABEL_67:
              LOBYTE(v89) = 0;
              if (v84 >= v83) {
                goto LABEL_68;
              }
            LABEL_76:
              v98 = v84 >> 3;
              v99 = v84++ & 7;
              LODWORD(v98) = *(unsigned __int8*)(v85 + v98);
              a2[1] = v84;
              v90 = 2 * (((unsigned int)v98 >> v99) & 1);
              if (v84 < v83) {
                goto LABEL_77;
              }
            LABEL_69:
              LOBYTE(v91) = 0;
              if (v84 >= v83) {
                goto LABEL_70;
              }
            LABEL_78:
              v102 = v84 >> 3;
              v103 = v84++ & 7;
              LODWORD(v102) = *(unsigned __int8*)(v85 + v102);
              a2[1] = v84;
              v92 = 2 * (((unsigned int)v102 >> v103) & 1);
              if (v84 < v83) {
                goto LABEL_79;
              }
            LABEL_71:
              LOBYTE(v93) = 0;
              if (v84 >= v83) {
                goto LABEL_72;
              }
            LABEL_80:
              v106 = v84 >> 3;
              v107 = v84++ & 7;
              LODWORD(v106) = *(unsigned __int8*)(v85 + v106);
              a2[1] = v84;
              v94 = 2 * (((unsigned int)v106 >> v107) & 1);
              if (v84 < v83) {
                goto LABEL_81;
              }
            LABEL_73:
              LOBYTE(v95) = 0;
            }
            else {
              v86 = v84 >> 3;
              v87 = a2[1] & 7;
              ++v84;
              LODWORD(v86) = *(unsigned __int8*)(v85 + v86);
              a2[1] = v84;
              v88 = 2 * (((unsigned int)v86 >> v87) & 1);
              if (v84 >= v83) {
                goto LABEL_67;
              }
              v96 = v84 >> 3;
              v97 = v84++ & 7;
              LODWORD(v96) = *(unsigned __int8*)(v85 + v96);
              a2[1] = v84;
              v89 = ((unsigned int)v96 >> v97) & 1;
              if (v84 < v83) {
                goto LABEL_76;
              }
            LABEL_68:
              LOBYTE(v90) = 0;
              if (v84 >= v83) {
                goto LABEL_69;
              }
            LABEL_77:
              v100 = v84 >> 3;
              v101 = v84++ & 7;
              LODWORD(v100) = *(unsigned __int8*)(v85 + v100);
              a2[1] = v84;
              v91 = ((unsigned int)v100 >> v101) & 1;
              if (v84 < v83) {
                goto LABEL_78;
              }
            LABEL_70:
              LOBYTE(v92) = 0;
              if (v84 >= v83) {
                goto LABEL_71;
              }
            LABEL_79:
              v104 = v84 >> 3;
              v105 = v84++ & 7;
              LODWORD(v104) = *(unsigned __int8*)(v85 + v104);
              a2[1] = v84;
              v93 = ((unsigned int)v104 >> v105) & 1;
              if (v84 < v83) {
                goto LABEL_80;
              }
            LABEL_72:
              LOBYTE(v94) = 0;
              if (v84 >= v83) {
                goto LABEL_73;
              }
            LABEL_81:
              v108 = *(unsigned __int8*)(v85 + (v84 >> 3));
              a2[1] = v84 + 1;
              v95 = (v108 >> (v84 & 7)) & 1;
            }
            v79 = 0;
            v109 = v94 |
                   (4 * (v92 | (4 * (v90 | (4 * (v89 | v88)) | v91)) | v93)) |
                   v95;
            v110 = v109;
            LOBYTE(v178_.v180) = v109 % 3u;
            BYTE1(v178_.v180) =
                v109 / 3u - 3 * ((unsigned __int16)(86 * (v109 / 3u)) >> 8);
            BYTE2(v178_.v180) =
                v109 / 9u - 3 * ((unsigned __int16)(86 * (v109 / 9u)) >> 8);
            HIBYTE(v178_.v180) =
                v109 / 0x1Bu -
                3 * ((unsigned __int16)(86 * (v109 / 0x1Bu)) >> 8);
            v111 = v109 / 0x51u;
            if (v110 > 0xF2) {
              v111 -= 3;
            }
            v178_.v181 = v111;
          }
          v112 = (char*)&v178_.v180 + v79++;
          *(_BYTE*)(v82 + v81++) = *v112;
        } while (v78 != v81);
      LABEL_60:;
      }
    }
  }
LABEL_87:
  SdkRoutine_87ade0(a1);
  v114 = *((unsigned int*)a1 + 3);
  if ((_DWORD)v114 != 0) {
    v115 = *((_DWORD*)a1 + 2);
    if (v115 != 0) {
      v116 = 0;
      v117 = (float)(a3 *
                     (float)(v18 | v17 |
                             (4 * (v16 | v177 |
                                   (4 * (v176 | v13 | (4 * (v12 | v11)))))))) *
             0x1.0101020000000p-8f;
      while (1) {
        v118 = *a1;
        v119 = *((unsigned int*)a1 + 4);
        if (v115 >= 8) {
          break;
        }
        v120 = 0;
        if ((v115 & 7) != 0) {
          goto LABEL_137;
        }
      LABEL_90:
        if (++v116 == v114) {
          return 1;
        }
      }
      v121 = 0;
      v122 = (_BYTE*)(v118 + v116 * v119 + 3);
      do {
        LOBYTE(v113) = *(v122 - 3);
        v121 -= 8;
        v123 = v117 * (float)LODWORD(v113);
        if (v123 <= 0x0.0p+0f) {
          v124 = -0x1.0000000000000p-1f;
        }
        else {
          v124 = 0x1.0000000000000p-1f;
        }
        *(float*)&v125 = v123 + v124;
        v126 = (int)*(float*)&v125;
        LOBYTE(v125) = *(v122 - 2);
        v127 = v126 & ~(v126 >> 31);
        v128 = (float)v125;
        if (v127 >= 255) {
          LOBYTE(v127) = -1;
        }
        *(v122 - 3) = v127;
        v129 = v117 * v128;
        if (v129 <= 0x0.0p+0f) {
          v130 = -0x1.0000000000000p-1f;
        }
        else {
          v130 = 0x1.0000000000000p-1f;
        }
        *(float*)&v131 = v129 + v130;
        v132 = (int)*(float*)&v131;
        LOBYTE(v131) = *(v122 - 1);
        v133 = v132 & ~(v132 >> 31);
        v134 = (float)v131;
        if (v133 >= 255) {
          LOBYTE(v133) = -1;
        }
        *(v122 - 2) = v133;
        v135 = v117 * v134;
        if (v135 <= 0x0.0p+0f) {
          v136 = -0x1.0000000000000p-1f;
        }
        else {
          v136 = 0x1.0000000000000p-1f;
        }
        *(float*)&v137 = v135 + v136;
        v138 = (int)*(float*)&v137;
        LOBYTE(v137) = *v122;
        v139 = v138 & ~(v138 >> 31);
        v140 = (float)v137;
        if (v139 >= 255) {
          LOBYTE(v139) = -1;
        }
        *(v122 - 1) = v139;
        v141 = v117 * v140;
        if (v141 <= 0x0.0p+0f) {
          v142 = -0x1.0000000000000p-1f;
        }
        else {
          v142 = 0x1.0000000000000p-1f;
        }
        *(float*)&v143 = v141 + v142;
        v144 = (int)*(float*)&v143;
        LOBYTE(v143) = v122[1];
        v145 = v144 & ~(v144 >> 31);
        v146 = (float)v143;
        if (v145 >= 255) {
          LOBYTE(v145) = -1;
        }
        *v122 = v145;
        v147 = v117 * v146;
        if (v147 <= 0x0.0p+0f) {
          v148 = -0x1.0000000000000p-1f;
        }
        else {
          v148 = 0x1.0000000000000p-1f;
        }
        *(float*)&v149 = v147 + v148;
        v150 = (int)*(float*)&v149;
        LOBYTE(v149) = v122[2];
        v151 = v150 & ~(v150 >> 31);
        v152 = (float)v149;
        if (v151 >= 255) {
          LOBYTE(v151) = -1;
        }
        v122[1] = v151;
        v153 = v117 * v152;
        if (v153 <= 0x0.0p+0f) {
          v154 = -0x1.0000000000000p-1f;
        }
        else {
          v154 = 0x1.0000000000000p-1f;
        }
        *(float*)&v155 = v153 + v154;
        v156 = (int)*(float*)&v155;
        LOBYTE(v155) = v122[3];
        v157 = v156 & ~(v156 >> 31);
        v158 = (float)v155;
        if (v157 >= 255) {
          LOBYTE(v157) = -1;
        }
        v122[2] = v157;
        v159 = v117 * v158;
        if (v159 <= 0x0.0p+0f) {
          v160 = -0x1.0000000000000p-1f;
        }
        else {
          v160 = 0x1.0000000000000p-1f;
        }
        *(float*)&v161 = v159 + v160;
        v162 = (int)*(float*)&v161;
        LOBYTE(v161) = v122[4];
        v163 = v162 & ~(v162 >> 31);
        v164 = (float)v161;
        if (v163 >= 255) {
          LOBYTE(v163) = -1;
        }
        v122[3] = v163;
        v165 = v117 * v164;
        if (v165 <= 0x0.0p+0f) {
          v166 = -0x1.0000000000000p-1f;
        }
        else {
          v166 = 0x1.0000000000000p-1f;
        }
        v113 = v165 + v166;
        v167 = (int)v113 & ~((int)v113 >> 31);
        if (v167 >= 255) {
          LOBYTE(v167) = -1;
        }
        v122[4] = v167;
        v122 += 8;
      } while (-(__int64)(v115 & 0xFFFFFFF8) != v121);
      v120 = -v121;
      if ((v115 & 7) == 0) {
        goto LABEL_90;
      }
    LABEL_137:
      v168 = (_BYTE*)(v118 + v120 + v116 * v119);
      v169 = v115 & 7;
      do {
        LOBYTE(v113) = *v168;
        v170 = v117 * (float)LODWORD(v113);
        if (v170 <= 0x0.0p+0f) {
          v171 = -0x1.0000000000000p-1f;
        }
        else {
          v171 = 0x1.0000000000000p-1f;
        }
        v113 = v170 + v171;
        v172 = (int)v113 & ~((int)v113 >> 31);
        if (v172 >= 255) {
          LOBYTE(v172) = -1;
        }
        --v169;
        *v168++ = v172;
      } while (v169 != 0);
      goto LABEL_90;
    }
  }
  return 1;
}

__int64 nerd_gillette_internal_otete_750780(__int64* a1, __int64* a2,
                                            __int64 a3, float a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v11;
  __int64 v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  int v20;
  unsigned int v21;
  unsigned __int64 v22;
  char v23;
  unsigned __int64 v24;
  char v25;
  unsigned __int64 v26;
  char v27;
  unsigned __int64 v28;
  char v29;
  unsigned __int64 v30;
  char v31;
  unsigned __int64 v32;
  char v33;
  unsigned int v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned int v48;
  int v49;
  unsigned __int8 v50;
  unsigned int v51;
  __int16 v52;
  char v53;
  _BYTE* v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  unsigned int v60;
  unsigned int v61;
  unsigned int v62;
  unsigned int v63;
  unsigned int v64;
  unsigned int v65;
  unsigned __int64 v66;
  char v67;
  unsigned __int64 v68;
  char v69;
  unsigned __int64 v70;
  char v71;
  unsigned __int64 v72;
  char v73;
  unsigned __int64 v74;
  char v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 i;
  __int64 v80;
  __int64 v81;
  unsigned int v82;
  int v83;
  unsigned __int8 v84;
  unsigned int v85;
  char v86;
  _BYTE* v87;
  unsigned __int64 v88;
  unsigned __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  __int64 v92;
  unsigned int v93;
  unsigned int v94;
  unsigned int v95;
  unsigned int v96;
  unsigned int v97;
  unsigned int v98;
  unsigned int v99;
  unsigned __int64 v100;
  char v101;
  unsigned __int64 v102;
  char v103;
  unsigned __int64 v104;
  char v105;
  unsigned __int64 v106;
  char v107;
  unsigned __int64 v108;
  char v109;
  unsigned __int64 v110;
  char v111;
  float v112;
  __int64 v113;
  unsigned int v114;
  __int64 v115;
  float v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  _BYTE* v121;
  float v122;
  float v123;
  unsigned int v124;
  int v125;
  int v126;
  float v127;
  float v128;
  float v129;
  unsigned int v130;
  int v131;
  int v132;
  float v133;
  float v134;
  float v135;
  unsigned int v136;
  int v137;
  int v138;
  float v139;
  float v140;
  float v141;
  unsigned int v142;
  int v143;
  int v144;
  float v145;
  float v146;
  float v147;
  unsigned int v148;
  int v149;
  int v150;
  float v151;
  float v152;
  float v153;
  unsigned int v154;
  int v155;
  int v156;
  float v157;
  float v158;
  float v159;
  unsigned int v160;
  int v161;
  int v162;
  float v163;
  float v164;
  float v165;
  int v166;
  _BYTE* v167;
  __int64 v168;
  float v169;
  float v170;
  int v171;
  unsigned int v172;
  __int64 v173;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  unsigned int v181;
  unsigned int v182;
  unsigned int v183;
  unsigned int v184;
  unsigned int v185;
  unsigned int v186;
  struct {
    __int16 v187;
    char v188;
    char gap31_[9];
    int v189;
    char v190;
  } v187_;

  v4 = a2[1];
  v5 = a2[2];
  v6 = *a2;
  if (v4 >= v5) {
    v13 = 0;
  LABEL_3:
    v14 = 0;
    if (v4 >= v5) {
      goto LABEL_4;
    }
    goto LABEL_13;
  }
  v11 = v4 >> 3;
  v12 = a2[1] & 7;
  ++v4;
  LODWORD(v11) = *(unsigned __int8*)(v6 + v11);
  a2[1] = v4;
  v13 = 2 * (((unsigned int)v11 >> v12) & 1);
  if (v4 >= v5) {
    goto LABEL_3;
  }
  v22 = v4 >> 3;
  v23 = v4++ & 7;
  LODWORD(v22) = *(unsigned __int8*)(v6 + v22);
  a2[1] = v4;
  v14 = ((unsigned int)v22 >> v23) & 1;
  if (v4 >= v5) {
  LABEL_4:
    v15 = 0;
    if (v4 >= v5) {
      goto LABEL_5;
    }
    goto LABEL_14;
  }
LABEL_13:
  v24 = v4 >> 3;
  v25 = v4++ & 7;
  LODWORD(v24) = *(unsigned __int8*)(v6 + v24);
  a2[1] = v4;
  v15 = 2 * (((unsigned int)v24 >> v25) & 1);
  if (v4 >= v5) {
  LABEL_5:
    v16 = 0;
    if (v4 >= v5) {
      goto LABEL_6;
    }
    goto LABEL_15;
  }
LABEL_14:
  v26 = v4 >> 3;
  v27 = v4++ & 7;
  LODWORD(v26) = *(unsigned __int8*)(v6 + v26);
  a2[1] = v4;
  v16 = ((unsigned int)v26 >> v27) & 1;
  if (v4 >= v5) {
  LABEL_6:
    v17 = 0;
    if (v4 >= v5) {
      goto LABEL_7;
    }
    goto LABEL_16;
  }
LABEL_15:
  v28 = v4 >> 3;
  v29 = v4++ & 7;
  LODWORD(v28) = *(unsigned __int8*)(v6 + v28);
  a2[1] = v4;
  v17 = 2 * (((unsigned int)v28 >> v29) & 1);
  if (v4 >= v5) {
  LABEL_7:
    v18 = 0;
    if (v4 >= v5) {
      goto LABEL_8;
    }
    goto LABEL_17;
  }
LABEL_16:
  v30 = v4 >> 3;
  v31 = v4++ & 7;
  LODWORD(v30) = *(unsigned __int8*)(v6 + v30);
  a2[1] = v4;
  v18 = ((unsigned int)v30 >> v31) & 1;
  if (v4 >= v5) {
  LABEL_8:
    v19 = 0;
    if (v4 >= v5) {
      goto LABEL_9;
    }
  LABEL_18:
    v34 = *(unsigned __int8*)(v6 + (v4 >> 3));
    a2[1] = v4 + 1;
    v20 = (v34 >> (v4 & 7)) & 1;
    v21 = *((_DWORD*)a1 + 3);
    v185 = v14;
    v186 = v16;
    v184 = v13;
    if (v21 == 0) {
      goto LABEL_88;
    }
    goto LABEL_19;
  }
LABEL_17:
  v32 = v4 >> 3;
  v33 = v4++ & 7;
  LODWORD(v32) = *(unsigned __int8*)(v6 + v32);
  a2[1] = v4;
  v19 = 2 * (((unsigned int)v32 >> v33) & 1);
  if (v4 < v5) {
    goto LABEL_18;
  }
LABEL_9:
  v20 = 0;
  v21 = *((_DWORD*)a1 + 3);
  v185 = v14;
  v186 = v16;
  v184 = v13;
  if (v21 == 0) {
    goto LABEL_88;
  }
LABEL_19:
  v35 = *((unsigned int*)a1 + 2);
  v182 = v17;
  v36 = v21 & 7;
  v183 = v19;
  if (v21 >= 8) {
    v181 = v15;
    v39 = 7;
    v40 = -(__int64)(v21 & 0xFFFFFFF8);
    do {
      memset_plt(*a1 + (v39 - 7) * *((unsigned int*)a1 + 4), 0, v35);
      memset_plt(*a1 + (v39 - 6) * *((unsigned int*)a1 + 4), 0, v35);
      memset_plt(*a1 + (v39 - 5) * *((unsigned int*)a1 + 4), 0, v35);
      memset_plt(*a1 + (v39 - 4) * *((unsigned int*)a1 + 4), 0, v35);
      memset_plt(*a1 + (v39 - 3) * *((unsigned int*)a1 + 4), 0, v35);
      memset_plt(*a1 + (v39 - 2) * *((unsigned int*)a1 + 4), 0, v35);
      memset_plt(*a1 + (v39 - 1) * *((unsigned int*)a1 + 4), 0, v35);
      memset_plt(*a1 + v39 * *((unsigned int*)a1 + 4), 0, v35);
      v39 += 8;
    } while (v40 + v39 != 7);
    v37 = v181;
    v38 = v39 - 7;
    if (v36 == 0) {
      goto LABEL_26;
    }
    goto LABEL_25;
  }
  v37 = v15;
  v38 = 0;
  if ((v21 & 7) != 0) {
    do {
    LABEL_25:
      memset_plt(*a1 + v38 * *((unsigned int*)a1 + 4), 0, v35);
      ++v38;
      --v36;
    } while (v36 != 0);
  }
LABEL_26:
  v42 = *((unsigned int*)a1 + 2);
  v41 = *((unsigned int*)a1 + 3);
  v17 = v182;
  v15 = v37;
  v19 = v183;
  v187_.v188 = 0;
  v187_.v187 = 0;
  if ((_DWORD)v41 == 0 || (_DWORD)v42 == 0) {
    goto LABEL_88;
  }
  v44 = 3;
  v45 = 0;
  while (2) {
    v46 = 0;
    v47 = *a1 + v45 * *((unsigned int*)a1 + 4);
    do {
      while (*(_BYTE*)(*(_QWORD*)a3 + v45 * *(unsigned int*)(a3 + 16) + v46) ==
             5) {
        if (v44 == 3) {
          v56 = a2[1];
          v55 = a2[2];
          v57 = *a2;
          if (v56 >= v55) {
            LOBYTE(v60) = 0;
          }
          else {
            v58 = v56 >> 3;
            v59 = a2[1] & 7;
            ++v56;
            LODWORD(v58) = *(unsigned __int8*)(v57 + v58);
            a2[1] = v56;
            v60 = 2 * (((unsigned int)v58 >> v59) & 1);
            if (v56 < v55) {
              v66 = v56 >> 3;
              v67 = v56++ & 7;
              LODWORD(v66) = *(unsigned __int8*)(v57 + v66);
              a2[1] = v56;
              v61 = ((unsigned int)v66 >> v67) & 1;
              if (v56 >= v55) {
              LABEL_43:
                LOBYTE(v62) = 0;
                if (v56 >= v55) {
                  goto LABEL_44;
                }
                goto LABEL_53;
              }
            LABEL_52:
              v68 = v56 >> 3;
              v69 = v56++ & 7;
              LODWORD(v68) = *(unsigned __int8*)(v57 + v68);
              a2[1] = v56;
              v62 = 2 * (((unsigned int)v68 >> v69) & 1);
              if (v56 >= v55) {
              LABEL_44:
                LOBYTE(v63) = 0;
                if (v56 >= v55) {
                  goto LABEL_45;
                }
                goto LABEL_54;
              }
            LABEL_53:
              v70 = v56 >> 3;
              v71 = v56++ & 7;
              LODWORD(v70) = *(unsigned __int8*)(v57 + v70);
              a2[1] = v56;
              v63 = ((unsigned int)v70 >> v71) & 1;
              if (v56 >= v55) {
              LABEL_45:
                LOBYTE(v64) = 0;
                if (v56 >= v55) {
                  goto LABEL_46;
                }
                goto LABEL_55;
              }
            LABEL_54:
              v72 = v56 >> 3;
              v73 = v56++ & 7;
              LODWORD(v72) = *(unsigned __int8*)(v57 + v72);
              a2[1] = v56;
              v64 = 2 * (((unsigned int)v72 >> v73) & 1);
              if (v56 >= v55) {
              LABEL_46:
                LOBYTE(v65) = 0;
                if (v56 >= v55) {
                  goto LABEL_56;
                }
                goto LABEL_33;
              }
            LABEL_55:
              v74 = v56 >> 3;
              v75 = v56++ & 7;
              LODWORD(v74) = *(unsigned __int8*)(v57 + v74);
              a2[1] = v56;
              v65 = ((unsigned int)v74 >> v75) & 1;
              if (v56 >= v55) {
              LABEL_56:
                LOBYTE(v49) = 0;
                goto LABEL_34;
              }
            LABEL_33:
              v48 = *(unsigned __int8*)(v57 + (v56 >> 3));
              a2[1] = v56 + 1;
              v49 = (v48 >> (v56 & 7)) & 1;
            LABEL_34:
              v44 = 0;
              v50 = v49 |
                    (2 * (v64 | (4 * (v62 | (4 * (v61 | v60)) | v63)) | v65));
              v51 = v50;
              v52 = v50 / 5u;
              LOBYTE(v187_.v187) = v50 % 5u;
              v53 = v50 / 0x19u;
              HIBYTE(v187_.v187) =
                  v52 - 5 * ((unsigned __int16)(52 * v52) >> 8);
              if (v51 >= 0x7D) {
                v53 -= 5;
              }
              v187_.v188 = v53;
              goto LABEL_37;
            }
          }
          LOBYTE(v61) = 0;
          if (v56 >= v55) {
            goto LABEL_43;
          }
          goto LABEL_52;
        }
      LABEL_37:
        v54 = (char*)&v187_.v187 + v44++;
        *(_BYTE*)(v47 + v46++) = *v54;
        if (v42 == v46) {
          goto LABEL_31;
        }
      }
      *(_BYTE*)(v47 + v46) =
          *(_BYTE*)(*a1 + v45 * *((unsigned int*)a1 + 4) + v46);
      ++v46;
    } while (v42 != v46);
  LABEL_31:
    if (++v45 != v41) {
      continue;
    }
    break;
  }
  v77 = *((unsigned int*)a1 + 2);
  v76 = *((unsigned int*)a1 + 3);
  v187_.v190 = 0;
  v187_.v189 = 0;
  if ((_DWORD)v76 != 0 && (_DWORD)v77 != 0) {
    v78 = 5;
    for (i = 0; i != v76; ++i) {
      v80 = 0;
      v81 = *a1 + i * *((unsigned int*)a1 + 4);
      do {
        while (*(_BYTE*)(*(_QWORD*)a3 + i * *(unsigned int*)(a3 + 16) + v80) ==
               3) {
          if (v78 == 5) {
            v89 = a2[1];
            v88 = a2[2];
            v90 = *a2;
            if (v89 >= v88) {
              LOBYTE(v93) = 0;
            LABEL_71:
              LOBYTE(v94) = 0;
              if (v89 >= v88) {
                goto LABEL_72;
              }
            LABEL_82:
              v102 = v89 >> 3;
              v103 = v89++ & 7;
              LODWORD(v102) = *(unsigned __int8*)(v90 + v102);
              a2[1] = v89;
              v95 = 2 * (((unsigned int)v102 >> v103) & 1);
              if (v89 < v88) {
                goto LABEL_83;
              }
            LABEL_73:
              LOBYTE(v96) = 0;
              if (v89 >= v88) {
                goto LABEL_74;
              }
            LABEL_84:
              v106 = v89 >> 3;
              v107 = v89++ & 7;
              LODWORD(v106) = *(unsigned __int8*)(v90 + v106);
              a2[1] = v89;
              v97 = 2 * (((unsigned int)v106 >> v107) & 1);
              if (v89 < v88) {
                goto LABEL_85;
              }
            LABEL_75:
              LOBYTE(v98) = 0;
              if (v89 >= v88) {
                goto LABEL_76;
              }
            LABEL_86:
              v110 = v89 >> 3;
              v111 = v89++ & 7;
              LODWORD(v110) = *(unsigned __int8*)(v90 + v110);
              a2[1] = v89;
              v99 = 2 * (((unsigned int)v110 >> v111) & 1);
              if (v89 < v88) {
                goto LABEL_62;
              }
            LABEL_87:
              LOBYTE(v83) = 0;
            }
            else {
              v91 = v89 >> 3;
              v92 = a2[1] & 7;
              ++v89;
              LODWORD(v91) = *(unsigned __int8*)(v90 + v91);
              a2[1] = v89;
              v93 = 2 * (((unsigned int)v91 >> v92) & 1);
              if (v89 >= v88) {
                goto LABEL_71;
              }
              v100 = v89 >> 3;
              v101 = v89++ & 7;
              LODWORD(v100) = *(unsigned __int8*)(v90 + v100);
              a2[1] = v89;
              v94 = ((unsigned int)v100 >> v101) & 1;
              if (v89 < v88) {
                goto LABEL_82;
              }
            LABEL_72:
              LOBYTE(v95) = 0;
              if (v89 >= v88) {
                goto LABEL_73;
              }
            LABEL_83:
              v104 = v89 >> 3;
              v105 = v89++ & 7;
              LODWORD(v104) = *(unsigned __int8*)(v90 + v104);
              a2[1] = v89;
              v96 = ((unsigned int)v104 >> v105) & 1;
              if (v89 < v88) {
                goto LABEL_84;
              }
            LABEL_74:
              LOBYTE(v97) = 0;
              if (v89 >= v88) {
                goto LABEL_75;
              }
            LABEL_85:
              v108 = v89 >> 3;
              v109 = v89++ & 7;
              LODWORD(v108) = *(unsigned __int8*)(v90 + v108);
              a2[1] = v89;
              v98 = ((unsigned int)v108 >> v109) & 1;
              if (v89 < v88) {
                goto LABEL_86;
              }
            LABEL_76:
              LOBYTE(v99) = 0;
              if (v89 >= v88) {
                goto LABEL_87;
              }
            LABEL_62:
              v82 = *(unsigned __int8*)(v90 + (v89 >> 3));
              a2[1] = v89 + 1;
              v83 = (v82 >> (v89 & 7)) & 1;
            }
            v78 = 0;
            v84 = v99 |
                  (4 * (v97 | (4 * (v95 | (4 * (v94 | v93)) | v96)) | v98)) |
                  v83;
            v85 = v84;
            LOBYTE(v187_.v189) = v84 % 3u;
            BYTE1(v187_.v189) =
                v84 / 3u - 3 * ((unsigned __int16)(86 * (v84 / 3u)) >> 8);
            BYTE2(v187_.v189) =
                v84 / 9u - 3 * ((unsigned __int16)(86 * (v84 / 9u)) >> 8);
            HIBYTE(v187_.v189) =
                v84 / 0x1Bu - 3 * ((unsigned __int16)(86 * (v84 / 0x1Bu)) >> 8);
            v86 = v84 / 0x51u;
            if (v85 > 0xF2) {
              v86 -= 3;
            }
            v187_.v190 = v86;
          }
          v87 = (char*)&v187_.v189 + v78++;
          *(_BYTE*)(v81 + v80++) = *v87;
          if (v77 == v80) {
            goto LABEL_60;
          }
        }
        *(_BYTE*)(v81 + v80) =
            *(_BYTE*)(*a1 + i * *((unsigned int*)a1 + 4) + v80);
        ++v80;
      } while (v77 != v80);
    LABEL_60:;
    }
  }
LABEL_88:
  SdkRoutine_87ade0(a1);
  v113 = *((unsigned int*)a1 + 3);
  if ((_DWORD)v113 == 0) {
    return 1;
  }
  v114 = *((_DWORD*)a1 + 2);
  if (v114 == 0) {
    return 1;
  }
  v115 = 0;
  v116 =
      (float)(a4 * (float)(v20 | v19 |
                           (4 * (v18 | v17 |
                                 (4 * (v186 | v15 | (4 * (v185 | v184)))))))) *
      0x1.0101020000000p-8f;
  do {
    v117 = *a1;
    v118 = *((unsigned int*)a1 + 4);
    if (v114 < 8) {
      v119 = 0;
      if ((v114 & 7) == 0) {
        goto LABEL_91;
      }
    LABEL_138:
      v167 = (_BYTE*)(v117 + v119 + v115 * v118);
      v168 = v114 & 7;
      do {
        LOBYTE(v112) = *v167;
        v169 = v116 * (float)LODWORD(v112);
        if (v169 <= 0x0.0p+0f) {
          v170 = -0x1.0000000000000p-1f;
        }
        else {
          v170 = 0x1.0000000000000p-1f;
        }
        v112 = v169 + v170;
        v171 = (int)v112 & ~((int)v112 >> 31);
        if (v171 >= 255) {
          LOBYTE(v171) = -1;
        }
        --v168;
        *v167++ = v171;
      } while (v168 != 0);
      goto LABEL_91;
    }
    v120 = 0;
    v121 = (_BYTE*)(v117 + v115 * v118 + 3);
    do {
      LOBYTE(v112) = *(v121 - 3);
      v120 -= 8;
      v122 = v116 * (float)LODWORD(v112);
      if (v122 <= 0x0.0p+0f) {
        v123 = -0x1.0000000000000p-1f;
      }
      else {
        v123 = 0x1.0000000000000p-1f;
      }
      *(float*)&v124 = v122 + v123;
      v125 = (int)*(float*)&v124;
      LOBYTE(v124) = *(v121 - 2);
      v126 = v125 & ~(v125 >> 31);
      v127 = (float)v124;
      if (v126 >= 255) {
        LOBYTE(v126) = -1;
      }
      *(v121 - 3) = v126;
      v128 = v116 * v127;
      if (v128 <= 0x0.0p+0f) {
        v129 = -0x1.0000000000000p-1f;
      }
      else {
        v129 = 0x1.0000000000000p-1f;
      }
      *(float*)&v130 = v128 + v129;
      v131 = (int)*(float*)&v130;
      LOBYTE(v130) = *(v121 - 1);
      v132 = v131 & ~(v131 >> 31);
      v133 = (float)v130;
      if (v132 >= 255) {
        LOBYTE(v132) = -1;
      }
      *(v121 - 2) = v132;
      v134 = v116 * v133;
      if (v134 <= 0x0.0p+0f) {
        v135 = -0x1.0000000000000p-1f;
      }
      else {
        v135 = 0x1.0000000000000p-1f;
      }
      *(float*)&v136 = v134 + v135;
      v137 = (int)*(float*)&v136;
      LOBYTE(v136) = *v121;
      v138 = v137 & ~(v137 >> 31);
      v139 = (float)v136;
      if (v138 >= 255) {
        LOBYTE(v138) = -1;
      }
      *(v121 - 1) = v138;
      v140 = v116 * v139;
      if (v140 <= 0x0.0p+0f) {
        v141 = -0x1.0000000000000p-1f;
      }
      else {
        v141 = 0x1.0000000000000p-1f;
      }
      *(float*)&v142 = v140 + v141;
      v143 = (int)*(float*)&v142;
      LOBYTE(v142) = v121[1];
      v144 = v143 & ~(v143 >> 31);
      v145 = (float)v142;
      if (v144 >= 255) {
        LOBYTE(v144) = -1;
      }
      *v121 = v144;
      v146 = v116 * v145;
      if (v146 <= 0x0.0p+0f) {
        v147 = -0x1.0000000000000p-1f;
      }
      else {
        v147 = 0x1.0000000000000p-1f;
      }
      *(float*)&v148 = v146 + v147;
      v149 = (int)*(float*)&v148;
      LOBYTE(v148) = v121[2];
      v150 = v149 & ~(v149 >> 31);
      v151 = (float)v148;
      if (v150 >= 255) {
        LOBYTE(v150) = -1;
      }
      v121[1] = v150;
      v152 = v116 * v151;
      if (v152 <= 0x0.0p+0f) {
        v153 = -0x1.0000000000000p-1f;
      }
      else {
        v153 = 0x1.0000000000000p-1f;
      }
      *(float*)&v154 = v152 + v153;
      v155 = (int)*(float*)&v154;
      LOBYTE(v154) = v121[3];
      v156 = v155 & ~(v155 >> 31);
      v157 = (float)v154;
      if (v156 >= 255) {
        LOBYTE(v156) = -1;
      }
      v121[2] = v156;
      v158 = v116 * v157;
      if (v158 <= 0x0.0p+0f) {
        v159 = -0x1.0000000000000p-1f;
      }
      else {
        v159 = 0x1.0000000000000p-1f;
      }
      *(float*)&v160 = v158 + v159;
      v161 = (int)*(float*)&v160;
      LOBYTE(v160) = v121[4];
      v162 = v161 & ~(v161 >> 31);
      v163 = (float)v160;
      if (v162 >= 255) {
        LOBYTE(v162) = -1;
      }
      v121[3] = v162;
      v164 = v116 * v163;
      if (v164 <= 0x0.0p+0f) {
        v165 = -0x1.0000000000000p-1f;
      }
      else {
        v165 = 0x1.0000000000000p-1f;
      }
      v112 = v164 + v165;
      v166 = (int)v112 & ~((int)v112 >> 31);
      if (v166 >= 255) {
        LOBYTE(v166) = -1;
      }
      v121[4] = v166;
      v121 += 8;
    } while (-(__int64)(v114 & 0xFFFFFFF8) != v120);
    v119 = -v120;
    if ((v114 & 7) != 0) {
      goto LABEL_138;
    }
  LABEL_91:
    ++v115;
  } while (v115 != v113);
  v172 = *((_DWORD*)a1 + 2);
  v173 = *((unsigned int*)a1 + 3);
  if ((_DWORD)v173 != 0 && v172 != 0) {
    v176 = 0;
    while (1) {
      v177 = *a1 + v176 * *((unsigned int*)a1 + 4);
      if (v172 >= 8) {
        break;
      }
      v178 = 0;
      if ((v172 & 7) != 0) {
      LABEL_176:
        v180 = v172 & 7;
        do {
          if (*(_BYTE*)(*(_QWORD*)a3 + v176 * *(unsigned int*)(a3 + 16) +
                        v178) == 0) {
            *(_BYTE*)(v177 + v178) = 0;
          }
          ++v178;
          --v180;
        } while (v180 != 0);
      }
    LABEL_152:
      if (++v176 == v173) {
        return 1;
      }
    }
    v179 = 7;
    while (2) {
      if (*(_BYTE*)(*(_QWORD*)a3 + v176 * *(unsigned int*)(a3 + 16) + v179 -
                    7) != 0) {
        if (*(_BYTE*)(*(_QWORD*)a3 + v176 * *(unsigned int*)(a3 + 16) + v179 -
                      6) != 0) {
          goto LABEL_160;
        }
      LABEL_168:
        *(_BYTE*)(v177 + v179 - 6) = 0;
        if (*(_BYTE*)(*(_QWORD*)a3 + v176 * *(unsigned int*)(a3 + 16) + v179 -
                      5) == 0) {
          goto LABEL_169;
        }
      LABEL_161:
        if (*(_BYTE*)(*(_QWORD*)a3 + v176 * *(unsigned int*)(a3 + 16) + v179 -
                      4) != 0) {
          goto LABEL_162;
        }
      LABEL_170:
        *(_BYTE*)(v177 + v179 - 4) = 0;
        if (*(_BYTE*)(*(_QWORD*)a3 + v176 * *(unsigned int*)(a3 + 16) + v179 -
                      3) == 0) {
          goto LABEL_171;
        }
      LABEL_163:
        if (*(_BYTE*)(*(_QWORD*)a3 + v176 * *(unsigned int*)(a3 + 16) + v179 -
                      2) != 0) {
          goto LABEL_164;
        }
      LABEL_172:
        *(_BYTE*)(v177 + v179 - 2) = 0;
        if (*(_BYTE*)(*(_QWORD*)a3 + v176 * *(unsigned int*)(a3 + 16) + v179 -
                      1) == 0) {
          goto LABEL_173;
        }
      LABEL_165:
        if (*(_BYTE*)(*(_QWORD*)a3 + v176 * *(unsigned int*)(a3 + 16) + v179) ==
            0) {
          goto LABEL_174;
        }
      }
      else {
        *(_BYTE*)(v177 + v179 - 7) = 0;
        if (*(_BYTE*)(*(_QWORD*)a3 + v176 * *(unsigned int*)(a3 + 16) + v179 -
                      6) == 0) {
          goto LABEL_168;
        }
      LABEL_160:
        if (*(_BYTE*)(*(_QWORD*)a3 + v176 * *(unsigned int*)(a3 + 16) + v179 -
                      5) != 0) {
          goto LABEL_161;
        }
      LABEL_169:
        *(_BYTE*)(v177 + v179 - 5) = 0;
        if (*(_BYTE*)(*(_QWORD*)a3 + v176 * *(unsigned int*)(a3 + 16) + v179 -
                      4) == 0) {
          goto LABEL_170;
        }
      LABEL_162:
        if (*(_BYTE*)(*(_QWORD*)a3 + v176 * *(unsigned int*)(a3 + 16) + v179 -
                      3) != 0) {
          goto LABEL_163;
        }
      LABEL_171:
        *(_BYTE*)(v177 + v179 - 3) = 0;
        if (*(_BYTE*)(*(_QWORD*)a3 + v176 * *(unsigned int*)(a3 + 16) + v179 -
                      2) == 0) {
          goto LABEL_172;
        }
      LABEL_164:
        if (*(_BYTE*)(*(_QWORD*)a3 + v176 * *(unsigned int*)(a3 + 16) + v179 -
                      1) != 0) {
          goto LABEL_165;
        }
      LABEL_173:
        *(_BYTE*)(v177 + v179 - 1) = 0;
        if (*(_BYTE*)(*(_QWORD*)a3 + v176 * *(unsigned int*)(a3 + 16) + v179) ==
            0) {
        LABEL_174:
          *(_BYTE*)(v177 + v179) = 0;
        }
      }
      v179 += 8;
      if (v179 - (v172 & 0xFFFFFFF8) == 7) {
        v178 = v179 - 7;
        if ((v172 & 7) != 0) {
          goto LABEL_176;
        }
        goto LABEL_152;
      }
      continue;
    }
  }
  return 1;
}

#pragma GCC visibility pop
