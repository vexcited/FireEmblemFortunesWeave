#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_dct_IV_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_scaleValuesWithFactor(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_codec_imdct_block(__int64* a1, _DWORD* a2, __int64 a3, __int64 a4,
                             int a5, int a6, signed int a7, __int64 a8,
                             unsigned int a9, __int64 a10, int a11, int a12);

__int64 nn_codec_imdct_block(__int64* a1, _DWORD* a2, __int64 a3, __int64 a4,
                             int a5, int a6, signed int a7, __int64 a8,
                             unsigned int a9, __int64 a10, int a11, int a12)
{
  int v12;
  __int64 v13;
  _DWORD* v14;
  __int64* v15;
  unsigned int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 i;
  int v32;
  int* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  _DWORD* v42;
  __int64 v43;
  __int64 v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned int v51;
  int* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  int v56;
  int* v57;
  __int64 v58;
  int v59;
  int v60;
  int v61;
  __int64 v62;
  int* v63;
  __int64 v64;
  int* v65;
  __int64 v66;
  char v67;
  int* v68;
  __int64 v69;
  unsigned __int64 v70;
  int* v71;
  int* v72;
  int v73;
  _DWORD* v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  int v78;
  __int64 v79;
  int v80;
  __int64 v81;
  int v82;
  __int64 v83;
  int v84;
  __int64 v85;
  int v86;
  __int64 v87;
  int v88;
  __int64 v89;
  __int64 v90;
  int* v91;
  __int64 v92;
  __int64 v93;
  int v94;
  __int64 v95;
  int v96;
  __int64 v97;
  int* v98;
  int v99;
  __int64 v100;
  _DWORD* v101;
  _DWORD* v102;
  int v103;
  __int64 v104;
  int v105;
  _DWORD* v106;
  int* v107;
  int v108;
  int v109;
  int* v110;
  int v111;
  int v112;
  int* v113;
  int v114;
  unsigned int v115;
  int v116;
  int v117;
  int* v118;
  int v119;
  unsigned int v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;
  int v126;
  int v127;
  int v128;
  int v129;
  int v130;
  int v131;
  int v132;
  int v133;
  int v134;
  int v135;
  int v136;
  int v137;
  int v138;
  int v139;
  int v140;
  int v141;
  int v142;
  int v143;
  int v144;
  int v145;
  int v146;
  int v147;
  int v148;
  int v149;
  int v150;
  int v151;
  int v152;
  int v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  _DWORD* v160;
  _DWORD* v161;
  int v162;
  __int64 v163;
  _DWORD* v164;
  int* v165;
  int v166;
  int v168;
  int v169;
  int v170;
  unsigned int v171;
  int v172;
  unsigned int v173;
  int v174;
  __int64 v175;
  unsigned int v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  int v185;
  int v186;
  unsigned int v187;
  unsigned int v188;
  unsigned int v191;
  int v192;
  __int64 v193;
  __int64 v194;
  _DWORD* v195;
  __int64 v196;
  __int64 v197;
  unsigned int v198[3];

  v12 = a12;
  v13 = *((unsigned int*)a1 + 6);
  v14 = a2;
  v15 = a1;
  v16 = __clz(a7);
  v17 = a7 >> (29 - v16);
  if (a12 != 0) {
    v18 = ((unsigned __int64)(1431655765LL * a12) >> 31) & 0xFFFFFFFE;
  }
  else {
    v18 = 1431655765;
  }
  if (a12 != 0) {
    v19 = ((unsigned __int64)(1145324672LL * a12) >> 31) & 0xFFFFFFFE;
  }
  else {
    v19 = 1145324672;
  }
  if (v17 == 7) {
    v12 = v19;
  }
  if (v17 == 6) {
    v20 = v18;
  }
  else {
    v20 = v12;
  }
  if ((_DWORD)v13 == a9) {
    v192 = (int)(a7 - a9) >> 1;
    v13 = a9;
    goto LABEL_26;
  }
  if (*((_DWORD*)a1 + 4) != 0) {
    v21 = *((_DWORD*)a1 + 5);
    v22 = 0;
  }
  else {
    v22 = 1;
    a1[1] = a8;
    *((_DWORD*)a1 + 6) = a9;
    *((_DWORD*)a1 + 7) = 0;
    v13 = a9;
    v21 = (int)(a6 - a9) >> 1;
    *((_DWORD*)a1 + 4) = a6;
    *((_DWORD*)a1 + 5) = v21;
  }
  v23 = (int)(v13 - a9) >> 1;
  v24 = v23 + v21;
  v25 = ((int)(a7 - a9) >> 1) - v23;
  v192 = v25;
  if (v24 >= 1) {
    v22 = 1;
  }
  if (v25 < 1 || v22 == 0) {
    if (v22 == 0) {
      goto LABEL_26;
    }
  }
  else if ((int)v13 > (int)a9) {
  LABEL_26:
    v27 = *a1;
    v28 = *((int*)a1 + 8);
    if (a6 >= 1) {
      v29 = *((unsigned int*)a1 + 7);
      if ((int)v29 >= 1) {
        v30 = 0;
        for (i = 0; i < v29; ++i) {
          ++v30;
          a2[i] = *(_DWORD*)(*a1 + 4 * i);
          v29 = *((int*)a1 + 7);
        }
        v14 = &a2[v30];
      }
      *((_DWORD*)a1 + 7) = 0;
      v32 = a7 + ((unsigned int)a7 >> 31);
      if (a5 > 0) {
        goto LABEL_32;
      }
    LABEL_107:
      v153 = v32 >> 1;
      if (a7 >= 2) {
        goto LABEL_108;
      }
      return (unsigned int)v29;
    }
    v29 = 0;
    v32 = a7 + ((unsigned int)a7 >> 31);
    if (a5 <= 0) {
      goto LABEL_107;
    }
  LABEL_32:
    v33 = (int*)(v27 + 4 * v28);
    v188 = v20;
    v34 = a7;
    v35 = a1[1];
    v36 = 0;
    v187 = v16 - 48;
    v174 = a7 & 3;
    v37 = (__int64)(int)(v13 + ((unsigned int)v13 >> 31)) >> 1;
    v191 = a7;
    v178 = (int)v13;
    v186 = (int)v13 / 2 + v192;
    v185 = (a7 - a11) >> 1;
    v177 = (int)v13 / -2;
    v175 = -v37;
    v168 = v32 >> 1;
    v169 = a5;
    v184 = (__int64)v32 >> 1;
    v183 = (unsigned int)a5;
    v172 = (a7 >> 2) & 7;
    v173 = (a7 >> 2) - 1;
    v180 = ((int)v13 / 2) & 3LL;
    v176 = (int)v13 / 2 - 1;
    v38 = 4LL * a7;
    v170 = a7 >> 2;
    v171 = (a7 >> 2) & 0xFFFFFFF8;
    v182 = v38;
    v39 = (4 * ((int)v13 / 2)) & 0xFFFFFFF0;
    v40 = a3 + v38 + 4 * v177;
    v179 = 4LL * ((int)v13 / 2);
    v41 = a3 + v38 - v179;
    v42 = (_DWORD*)(v41 - 16);
    do {
      v193 = v35;
      v43 = v13;
      v44 = v29;
      v45 = a6;
      v46 = v36;
      v194 = v40;
      v195 = v42;
      v47 = v39;
      v48 = v37;
      v196 = v41;
      v49 = v34;
      v198[0] = v187;
      v50 = v36 * v34;
      v51 = a7;
      v52 = (int*)(a3 + 4 * v50);
      nn_codec_dct_IV_plt(v52, (unsigned int)a7, v198);
      v197 = v46;
      v53 = v198[0] + *(__int16*)(a4 + 2 * v46);
      if (v188 != 0) {
        nn_codec_scaleValuesWithFactor(v52, v188, v51, v53);
        a6 = v45;
        v29 = v44;
        v13 = v43;
        v34 = v49;
        v37 = v48;
        v39 = v47;
        v55 = v193;
        v54 = v194;
        v15 = a1;
        goto LABEL_36;
      }
      a6 = v45;
      v29 = v44;
      v13 = v43;
      v34 = v49;
      v37 = v48;
      v39 = v47;
      v55 = v193;
      v54 = v194;
      v15 = a1;
      if ((_DWORD)v53 == 0) {
        goto LABEL_36;
      }
      if ((int)v53 >= 1) {
        if ((unsigned int)v53 >= 0x1F) {
          v67 = 31;
        }
        else {
          v67 = v53;
        }
        if (v174 != 0) {
          *v52 <<= v67;
          v68 = v52 + 1;
          if (v174 != 1) {
            v52[1] <<= v67;
            if (v174 == 2) {
              v68 = v52 + 2;
              if (v191 < 4) {
                goto LABEL_36;
              }
            }
            else {
              v68 = v52 + 3;
              v52[2] <<= v67;
              if (v191 < 4) {
                goto LABEL_36;
              }
            }
            goto LABEL_84;
          }
        }
        else {
          v68 = v52;
        }
        if (v191 < 4) {
          goto LABEL_36;
        }
      LABEL_84:
        v111 = v172;
        if (v172 == 0) {
          v115 = v170;
          if (v173 < 7) {
            goto LABEL_36;
          }
          do {
          LABEL_95:
            v115 -= 8;
            v121 = v68[1] << v67;
            *v68 <<= v67;
            v68[1] = v121;
            v122 = v68[3] << v67;
            v68[2] <<= v67;
            v68[3] = v122;
            v123 = v68[5] << v67;
            v68[4] <<= v67;
            v68[5] = v123;
            v124 = v68[7] << v67;
            v68[6] <<= v67;
            v68[7] = v124;
            v125 = v68[9] << v67;
            v68[8] <<= v67;
            v68[9] = v125;
            v126 = v68[11] << v67;
            v68[10] <<= v67;
            v68[11] = v126;
            v127 = v68[13] << v67;
            v68[12] <<= v67;
            v68[13] = v127;
            v128 = v68[15] << v67;
            v68[14] <<= v67;
            v68[15] = v128;
            v129 = v68[17] << v67;
            v68[16] <<= v67;
            v68[17] = v129;
            v130 = v68[19] << v67;
            v68[18] <<= v67;
            v68[19] = v130;
            v131 = v68[21] << v67;
            v68[20] <<= v67;
            v68[21] = v131;
            v132 = v68[23] << v67;
            v68[22] <<= v67;
            v68[23] = v132;
            v133 = v68[25] << v67;
            v68[24] <<= v67;
            v68[25] = v133;
            v134 = v68[27] << v67;
            v68[26] <<= v67;
            v68[27] = v134;
            v135 = v68[29] << v67;
            v68[28] <<= v67;
            v68[29] = v135;
            v136 = v68[31] << v67;
            v68[30] <<= v67;
            v68[31] = v136;
            v68 += 32;
          } while (v115 != 0);
          goto LABEL_36;
        }
        do {
          --v111;
          v112 = v68[1] << v67;
          *v68 <<= v67;
          v68[1] = v112;
          v113 = v68 + 4;
          v114 = v68[3] << v67;
          v68[2] <<= v67;
          v68[3] = v114;
          v68 += 4;
        } while (v111 != 0);
        v115 = v171;
        v68 = v113;
        if (v173 >= 7) {
          goto LABEL_95;
        }
        goto LABEL_36;
      }
      if ((unsigned int)-(int)v53 < 0x1F) {
        v109 = -(int)v53;
      }
      else {
        LOBYTE(v109) = 31;
      }
      if (v174 != 0) {
        *v52 >>= v109;
        v110 = v52 + 1;
        if (v174 != 1) {
          v52[1] >>= v109;
          if (v174 == 2) {
            v110 = v52 + 2;
            if (v191 < 4) {
              goto LABEL_36;
            }
          }
          else {
            v110 = v52 + 3;
            v52[2] >>= v109;
            if (v191 < 4) {
              goto LABEL_36;
            }
          }
          goto LABEL_90;
        }
      }
      else {
        v110 = v52;
      }
      if (v191 < 4) {
        goto LABEL_36;
      }
    LABEL_90:
      v116 = v172;
      if (v172 == 0) {
        v120 = v170;
        if (v173 < 7) {
          goto LABEL_36;
        }
        do {
        LABEL_100:
          v120 -= 8;
          v137 = v110[1] >> v109;
          *v110 >>= v109;
          v110[1] = v137;
          v138 = v110[3] >> v109;
          v110[2] >>= v109;
          v110[3] = v138;
          v139 = v110[5] >> v109;
          v110[4] >>= v109;
          v110[5] = v139;
          v140 = v110[7] >> v109;
          v110[6] >>= v109;
          v110[7] = v140;
          v141 = v110[9] >> v109;
          v110[8] >>= v109;
          v110[9] = v141;
          v142 = v110[11] >> v109;
          v110[10] >>= v109;
          v110[11] = v142;
          v143 = v110[13] >> v109;
          v110[12] >>= v109;
          v110[13] = v143;
          v144 = v110[15] >> v109;
          v110[14] >>= v109;
          v110[15] = v144;
          v145 = v110[17] >> v109;
          v110[16] >>= v109;
          v110[17] = v145;
          v146 = v110[19] >> v109;
          v110[18] >>= v109;
          v110[19] = v146;
          v147 = v110[21] >> v109;
          v110[20] >>= v109;
          v110[21] = v147;
          v148 = v110[23] >> v109;
          v110[22] >>= v109;
          v110[23] = v148;
          v149 = v110[25] >> v109;
          v110[24] >>= v109;
          v110[25] = v149;
          v150 = v110[27] >> v109;
          v110[26] >>= v109;
          v110[27] = v150;
          v151 = v110[29] >> v109;
          v110[28] >>= v109;
          v110[29] = v151;
          v152 = v110[31] >> v109;
          v110[30] >>= v109;
          v110[31] = v152;
          v110 += 32;
        } while (v120 != 0);
        goto LABEL_36;
      }
      do {
        --v116;
        v117 = v110[1] >> v109;
        *v110 >>= v109;
        v110[1] = v117;
        v118 = v110 + 4;
        v119 = v110[3] >> v109;
        v110[2] >>= v109;
        v110[3] = v119;
        v110 += 4;
      } while (v116 != 0);
      v120 = v171;
      v110 = v118;
      if (v173 >= 7) {
        goto LABEL_100;
      }
    LABEL_36:
      if (a6 <= (int)v29) {
        v58 = *((int*)v15 + 7);
        v14 = (_DWORD*)(*v15 + 4 * v58);
        v59 = *((_DWORD*)v15 + 5);
        *((_DWORD*)v15 + 7) = v58 + v37 + v59;
        a7 = v191;
        v57 = v33 - 1;
        if (v59 < 1) {
          goto LABEL_42;
        }
      }
      else {
        v56 = *((_DWORD*)v15 + 5);
        v29 = (unsigned int)(v29 + v37 + v56);
        a7 = v191;
        v57 = v33 - 1;
        if (v56 < 1) {
          goto LABEL_42;
        }
      }
      v60 = 0;
      do {
        v61 = *v57--;
        ++v60;
        *v14++ = -v61;
      } while (v60 < *((_DWORD*)v15 + 5));
    LABEL_42:
      if (a6 <= (int)v29) {
        v64 = *((int*)v15 + 7);
        v62 = *v15 + 4 * v64 + 4 * v37;
        *((_DWORD*)v15 + 7) = v186 + v64;
        v63 = &v52[v34];
        if ((int)v13 <= 1) {
          goto LABEL_64;
        }
      }
      else {
        v62 = (__int64)&v14[v178];
        v29 = (unsigned int)(v186 + v29);
        v63 = &v52[v34];
        if ((int)v13 <= 1) {
          goto LABEL_64;
        }
      }
      v65 = &v63[v177];
      if (v176 < 3) {
        v66 = 0;
        if (v180 == 0) {
          goto LABEL_64;
        }
      LABEL_62:
        v90 = v180;
        v91 = (int*)(v55 + 4 * v66);
        do {
          v93 = *v91++;
          v92 = v93;
          LODWORD(v93) = *v65++;
          v94 = v93;
          v95 = *v57--;
          --v90;
          v96 = (_DWORD)v92 << 16;
          v92 &= 0xFFFFFFFFFFFF0000LL;
          *v14++ = (((unsigned __int64)((int)v92 * (__int64)v94) >> 31) &
                    0xFFFFFFFE) +
                   (((unsigned __int64)-(v95 * v96) >> 31) & 0xFFFFFFFE);
          *(_DWORD*)(v62 - 4) =
              (((unsigned __int64)-(v95 * v92) >> 31) & 0xFFFFFFFE) -
              (((unsigned __int64)(v94 * (__int64)v96) >> 31) & 0xFFFFFFFE);
          v62 -= 4;
        } while (v90 != 0);
        goto LABEL_64;
      }
      v69 = 0;
      v70 = 0;
      v66 = 0;
      do {
        v71 = (int*)(v55 + v70);
        v72 = &v57[v69];
        v73 = *(_DWORD*)(v54 + v70);
        v74 = &v14[v70 / 4];
        v75 = v62 + v69 * 4;
        v76 = *(int*)(v55 + v70);
        v77 = v57[v69];
        v66 += 4;
        v70 += 16LL;
        v69 -= 4;
        v78 = (_DWORD)v76 << 16;
        v76 &= 0xFFFFFFFFFFFF0000LL;
        *v74 =
            (((unsigned __int64)((int)v76 * (__int64)v73) >> 31) & 0xFFFFFFFE) +
            (((unsigned __int64)-(v77 * v78) >> 31) & 0xFFFFFFFE);
        *(_DWORD*)(v75 - 4) =
            (((unsigned __int64)-(v77 * v76) >> 31) & 0xFFFFFFFE) -
            (((unsigned __int64)(v73 * (__int64)v78) >> 31) & 0xFFFFFFFE);
        v79 = v71[1];
        v80 = v65[1];
        v81 = *(v72 - 1);
        v82 = (_DWORD)v79 << 16;
        v79 &= 0xFFFFFFFFFFFF0000LL;
        v74[1] =
            (((unsigned __int64)((int)v79 * (__int64)v80) >> 31) & 0xFFFFFFFE) +
            (((unsigned __int64)-(v81 * v82) >> 31) & 0xFFFFFFFE);
        *(_DWORD*)(v75 - 8) =
            (((unsigned __int64)-(v81 * v79) >> 31) & 0xFFFFFFFE) -
            (((unsigned __int64)(v80 * (__int64)v82) >> 31) & 0xFFFFFFFE);
        v83 = v71[2];
        v84 = v65[2];
        v85 = *(v72 - 2);
        v86 = (_DWORD)v83 << 16;
        v83 &= 0xFFFFFFFFFFFF0000LL;
        v74[2] =
            (((unsigned __int64)((int)v83 * (__int64)v84) >> 31) & 0xFFFFFFFE) +
            (((unsigned __int64)-(v85 * v86) >> 31) & 0xFFFFFFFE);
        *(_DWORD*)(v75 - 12) =
            (((unsigned __int64)-(v85 * v83) >> 31) & 0xFFFFFFFE) -
            (((unsigned __int64)(v84 * (__int64)v86) >> 31) & 0xFFFFFFFE);
        v87 = v71[3];
        v88 = v65[3];
        v89 = *(v72 - 3);
        v65 += 4;
        LODWORD(v85) = (_DWORD)v87 << 16;
        v87 &= 0xFFFFFFFFFFFF0000LL;
        v74[3] =
            (((unsigned __int64)((int)v87 * (__int64)v88) >> 31) & 0xFFFFFFFE) +
            (((unsigned __int64)-(v89 * (int)v85) >> 31) & 0xFFFFFFFE);
        *(_DWORD*)(v75 - 16) =
            (((unsigned __int64)-(v89 * v87) >> 31) & 0xFFFFFFFE) -
            (((unsigned __int64)(v88 * (__int64)(int)v85) >> 31) & 0xFFFFFFFE);
      } while (v39 != v70);
      v65 = (int*)(v54 + v70);
      v62 -= v70;
      v14 = (_DWORD*)((char*)v14 + v70);
      v57 = (int*)((char*)v57 - v70);
      if (v180 != 0) {
        goto LABEL_62;
      }
    LABEL_64:
      if (v192 < 1) {
        goto LABEL_33;
      }
      if ((unsigned int)v192 < 8) {
        v97 = v62 + 4 * v37 - 4;
        v98 = &v63[v175];
        if ((v192 & 7) == 0) {
          goto LABEL_33;
        }
      LABEL_71:
        v105 = v192 & 7;
        v106 = (_DWORD*)(v97 + 4);
        v107 = v98 - 1;
        do {
          v108 = *v107--;
          --v105;
          *v106++ = -v108;
        } while (v105 != 0);
        goto LABEL_33;
      }
      v99 = v192 & 0x7FFFFFF8;
      v100 = 0;
      v101 = v195;
      do {
        v102 = (_DWORD*)(v62 + v179 + v100);
        v100 += 32;
        v99 -= 8;
        *v102 = -v101[3];
        v102[1] = -v101[2];
        v102[2] = -v101[1];
        v102[3] = -*v101;
        v102[4] = -*(v101 - 1);
        v102[5] = -*(v101 - 2);
        v102[6] = -*(v101 - 3);
        v103 = *(v101 - 4);
        v101 -= 8;
        v102[7] = -v103;
      } while (v99 != 0);
      v104 = v62 + v179 + v100;
      v98 = (int*)(v196 - v100);
      v97 = v104 - 4;
      if ((v192 & 7) != 0) {
        goto LABEL_71;
      }
    LABEL_33:
      v14 += v37;
      v33 = &v52[v184];
      v35 = a10;
      v36 = v197 + 1;
      v40 = v54 + v182;
      v42 = (_DWORD*)((char*)v195 + v182);
      v41 = v196 + v182;
      *((_DWORD*)v15 + 4) = a7;
      v15[1] = a10;
      *((_DWORD*)v15 + 5) = v185;
      *((_DWORD*)v15 + 6) = a11;
    } while (v197 + 1 != v183);
    v153 = v168;
    a5 = v169;
    if (a7 < 2) {
      return (unsigned int)v29;
    }
  LABEL_108:
    v154 = *v15;
    v155 = *((int*)v15 + 8);
    v156 = a7 * (a5 - 1);
    v157 = v153 & 7;
    if ((unsigned int)(v153 - 1) >= 7) {
      v159 = 0;
      v160 = (_DWORD*)(v154 - 4LL * v153 + 4 * v155 + 16);
      v161 = (_DWORD*)(a3 + 4 * v156 + 16);
      do {
        v159 -= 8;
        *(v160 - 4) = *(v161 - 4);
        *(v160 - 3) = *(v161 - 3);
        *(v160 - 2) = *(v161 - 2);
        *(v160 - 1) = *(v161 - 1);
        *v160 = *v161;
        v160[1] = v161[1];
        v160[2] = v161[2];
        v162 = v161[3];
        v161 += 8;
        v160[3] = v162;
        v160 += 8;
      } while (-(__int64)(v153 & 0xFFFFFFF8) != v159);
      v158 = -v159;
      if ((v153 & 7) != 0) {
        goto LABEL_116;
      }
    }
    else {
      v158 = 0;
      if ((v153 & 7) == 0) {
        return (unsigned int)v29;
      }
    LABEL_116:
      v163 = 4 * v158;
      v164 = (_DWORD*)(v154 + v163 + 4 * v155 - 4LL * v153);
      v165 = (int*)(a3 + v163 + 4 * v156);
      do {
        v166 = *v165++;
        --v157;
        *v164++ = v166;
      } while (v157 != 0);
    }
    return (unsigned int)v29;
  }
  *((_DWORD*)a1 + 5) = v24;
  *((_DWORD*)a1 + 6) = a9;
  v192 = (int)(a7 - a9) >> 1;
  v13 = a9;
  a1[1] = a8;
  goto LABEL_26;
}

#pragma GCC visibility pop
