#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 celt_rcp(_QWORD);
__int64 celt_sqrt(_QWORD);
__int64 ec_dec_bit_logp(_QWORD, _QWORD);
__int64 ec_dec_uint(_QWORD, _QWORD);
__int64 ec_enc_bit_logp(_QWORD, _QWORD, _QWORD);
__int64 ec_enc_uint(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
extern unsigned __int8 MovieData_a5d6c[24];
__int64 opus_40c20(__int64 a1, __int64 a2, int a3, int a4);
__int64 opus_41040(char* a1, unsigned int a2, unsigned int a3, char* a4,
                   __int64 a5, int a6, int* a7, _DWORD* a8, int a9,
                   unsigned int* a10, __int64 a11, __int64 a12, __int64 a13,
                   int a14, int a15, __int64 a16, int a17, int a18, int a19);
__int64 opus_651a0(__int64 result, __int64 a2, int a3, int a4);
__int64 opus_652a0(__int64 a1, __int64 a2, int a3);
__int64 opus_653a0(__int64 a1, __int64 a2, int a3);

__int64 opus_40c20(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int16* v11;
  __int16* v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  int v17;
  unsigned int v18;
  int v19;
  int v20;
  int v21;
  unsigned int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  __int16* v30;
  __int16* v31;
  int v32;
  int v33;
  int v34;
  int v35;
  __int16* v36;
  __int64 v37;
  int v38;
  int v39;
  __int16* v40;
  __int64 v41;
  int v42;
  __int64 v43;
  int v44;
  __int16* v45;
  __int64 v46;
  int v47;
  int v48;
  __int16* v49;
  int v50;
  __int16 v51;
  __int16 v52;
  unsigned int v53;
  unsigned int v54;
  int v55;
  char v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;

  if (a3 == 0) {
    if (a4 < 1) {
      goto LABEL_10;
    }
    v8 = a4 & 7;
    if ((unsigned int)a4 >= 8) {
      v36 = (__int16*)(a1 + 8);
      v37 = 0;
      v10 = 0;
      do {
        v37 -= 8;
        v38 = v10 + *(v36 - 4) * *(v36 - 4) + *(v36 - 3) * *(v36 - 3) +
              *(v36 - 2) * *(v36 - 2) + *(v36 - 1) * *(v36 - 1) + *v36 * *v36 +
              v36[1] * v36[1] + v36[2] * v36[2];
        v39 = v36[3];
        v36 += 8;
        v10 = v38 + v39 * v39;
      } while (-(__int64)(a4 & 0x7FFFFFF8) != v37);
      v9 = -v37;
      if ((a4 & 7) == 0) {
      LABEL_22:
        if ((unsigned int)a4 >= 8) {
          v45 = (__int16*)(a2 + 8);
          v46 = 0;
          v44 = 0;
          do {
            v46 -= 8;
            v47 = v44 + *(v45 - 4) * *(v45 - 4) + *(v45 - 3) * *(v45 - 3) +
                  *(v45 - 2) * *(v45 - 2) + *(v45 - 1) * *(v45 - 1) +
                  *v45 * *v45 + v45[1] * v45[1] + v45[2] * v45[2];
            v48 = v45[3];
            v45 += 8;
            v44 = v47 + v48 * v48;
          } while (-(__int64)(a4 & 0x7FFFFFF8) != v46);
          v43 = -v46;
          if ((a4 & 7) == 0) {
            goto LABEL_30;
          }
        }
        else {
          v43 = 0;
          v44 = 0;
          if ((a4 & 7) == 0) {
          LABEL_30:
            v7 = v10 + 1;
            v6 = v44 + 1;
            goto LABEL_31;
          }
        }
        v49 = (__int16*)(a2 + 2 * v43);
        do {
          v50 = *v49++;
          --v8;
          v44 += v50 * v50;
        } while (v8 != 0);
        goto LABEL_30;
      }
    }
    else {
      v9 = 0;
      v10 = 0;
      if ((a4 & 7) == 0) {
        goto LABEL_22;
      }
    }
    v40 = (__int16*)(a1 + 2 * v9);
    v41 = a4 & 7;
    do {
      v42 = *v40++;
      --v41;
      v10 += v42 * v42;
    } while (v41 != 0);
    goto LABEL_22;
  }
  if (a4 < 1) {
  LABEL_10:
    v7 = 1;
    v6 = 1;
    goto LABEL_31;
  }
  v4 = a4 & 3;
  if ((unsigned int)a4 < 4) {
    v5 = 0;
    v6 = 1;
    v7 = 1;
    if ((a4 & 3) == 0) {
      goto LABEL_31;
    }
    goto LABEL_14;
  }
  v11 = (__int16*)(a1 + 4);
  v12 = (__int16*)(a2 + 4);
  v6 = 1;
  v13 = 0;
  v7 = 1;
  do {
    v13 -= 4;
    v14 = *(v11 - 2) >> 1;
    v15 = *(v12 - 2) >> 1;
    v16 = v15 + v14;
    v17 = v14 - v15;
    v18 = v7 + v16 * v16;
    v19 = *(v11 - 1) >> 1;
    v20 = *(v12 - 1) >> 1;
    v21 = v6 + v17 * v17 + (v19 - v20) * (v19 - v20);
    v22 = v18 + (v20 + v19) * (v20 + v19);
    v23 = *v12 >> 1;
    v24 = *v11 >> 1;
    v25 = v23 + v24;
    v26 = v24 - v23;
    v27 = v12[1];
    v12 += 4;
    v28 = v21 + v26 * v26;
    v29 = v11[1];
    v11 += 4;
    v27 >>= 1;
    v29 >>= 1;
    v7 = v22 + v25 * v25 + (v27 + v29) * (v27 + v29);
    v6 = v28 + (v29 - v27) * (v29 - v27);
  } while (-(__int64)(a4 & 0x7FFFFFFC) != v13);
  v5 = -v13;
  if ((a4 & 3) != 0) {
  LABEL_14:
    v30 = (__int16*)(a2 + 2 * v5);
    v31 = (__int16*)(a1 + 2 * v5);
    do {
      v33 = *v31++;
      v32 = v33;
      v34 = *v30++;
      --v4;
      v32 >>= 1;
      v35 = v34 >> 1;
      v7 += (v35 + v32) * (v35 + v32);
      v6 += (v32 - v35) * (v32 - v35);
    } while (v4 != 0);
  }
LABEL_31:
  v51 = celt_sqrt(v7);
  v52 = celt_sqrt(v6);
  v53 = v52;
  if (v52 >= v51) {
    v61 = v51 >> 1;
    v62 = v61 * ((int)celt_rcp((unsigned int)v52) >> 16);
    v63 = (((unsigned __int16)celt_rcp(v53) * v61) >> 15) + 2 * v62;
    v64 = v63 + ((((int)celt_rcp(v53) >> 16) * ((v51 & 1) << 15)) >> 15);
    if (v64 >= 0x7FFF) {
      LOWORD(v64) = 0x7FFF;
    }
    v60 = 25736 - ((__int16)((((((((9872 * (__int16)v64 - 782663680) >> 16) *
                                      2 * (__int16)v64 -
                                  1343488) >>
                                 16) *
                                    2 * (__int16)v64 +
                                2147450880) >>
                               16) *
                                  (__int16)v64 +
                              0x4000) >>
                             15) >>
                   1);
  }
  else {
    v54 = v51;
    v55 = v52 >> 1;
    v56 = v52;
    v57 = v55 * ((int)celt_rcp(v54) >> 16);
    v58 = (((unsigned __int16)celt_rcp(v54) * v55) >> 15) + 2 * v57;
    v59 = v58 + ((((int)celt_rcp(v54) >> 16) * ((v56 & 1) << 15)) >> 15);
    if (v59 >= 0x7FFF) {
      LOWORD(v59) = 0x7FFF;
    }
    v60 =
        (__int16)((unsigned int)(((((((9872 * (__int16)v59 - 782663680) >> 16) *
                                         2 * (__int16)v59 -
                                     1343488) >>
                                    16) *
                                       2 * (__int16)v59 +
                                   2147450880) >>
                                  16) *
                                     (__int16)v59 +
                                 0x4000) >>
                  15) >>
        1;
  }
  return (unsigned int)((20861 * (__int16)v60) >> 15);
}

__int64 opus_41040(char* a1, unsigned int a2, unsigned int a3, char* a4,
                   __int64 a5, int a6, int* a7, _DWORD* a8, int a9,
                   unsigned int* a10, __int64 a11, __int64 a12, __int64 a13,
                   int a14, int a15, __int64 a16, int a17, int a18, int a19)
{
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  int v23;
  int v24;
  int v25;
  signed int v26;
  int v27;
  unsigned __int64 v28;
  char* v29;
  int v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  __int64 v35;
  char* v36;
  int v37;
  char v38;
  __int16 v39;
  __int64 v40;
  __int64 v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  __int64 v47;
  __int64 v48;
  __int16* v49;
  int v50;
  int v51;
  int v52;
  int* v53;
  char* v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  __int64 v74;
  char* v75;
  int v76;
  __int64 v77;
  int v78;
  int v79;
  __int64 v80;
  int v81;
  __int64 v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  char* v88;
  char* v89;
  __int64 v90;
  __int64 v91;
  int v92;
  char* v93;
  __int64 v94;
  __int16* v95;
  __int64 v96;
  __int64 v97;
  __int16 v98;
  _WORD* v99;
  __int16 v100;
  __int64 v101;
  char* v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  char* v112;
  int v113;
  int v114;
  char* v115;
  __int64 v116;
  int v117;
  int v118;
  int v119;
  int v120;
  unsigned int v121;
  __int64 v122;
  int v123;
  int v124;
  int v125;
  int v126;
  int v127;
  int v128;
  bool v129;
  unsigned int v130;
  __int64 v131;
  int v132;
  int v133;
  bool v134;
  int v135;
  int v136;
  unsigned int v137;
  __int64 v138;
  int v139;
  int v140;
  int v141;
  int v142;
  __int64 v143;
  int v144;
  int v145;
  bool v146;
  int v147;
  int v148;
  unsigned int v149;
  unsigned int v150;
  __int64 v151;
  unsigned int v152;
  int v153;
  int v154;
  char v155;
  unsigned int v156;
  __int64 v157;
  int v158;
  int v159;
  int v160;
  __int64 v161;
  int v162;
  __int64 v163;
  int v164;
  int v165;
  __int64 v166;
  int v167;
  int v168;
  unsigned int v169;
  int v170;
  int v171;
  int v172;
  int v173;
  int v174;
  int v175;
  int v176;
  int v177;
  int v178;
  __int64 v179;
  __int64 v180;
  int* v181;
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
  int v194;
  char v195;
  __int64 v196;
  int v197;
  __int64 v198;
  int v199;
  unsigned int v200;
  __int64 v201;
  unsigned int v202;
  int v203;
  char v204;
  int v205;
  __int64 v206;
  unsigned __int64 v207;
  __int64 v208;
  _DWORD* v209;
  __int64 v210;
  int v211;
  _DWORD* v212;
  int v213;
  int v214;
  __int64 v215;
  int v216;
  __int64 v217;
  __int64 v218;
  __int64 v219;
  int v220;
  _DWORD* v221;
  int v222;
  int v223;
  int v224;
  int v225;
  int v226;
  int v227;
  int v228;
  int v229;
  __int64 v230;
  int v231;
  unsigned int v232;
  char v233;
  __int64 v234;
  int v235;
  unsigned int v236;
  int v237;
  int v238;
  int v239;
  int v240;
  int v241;
  int v242;
  _BOOL4 v243;
  int v244;
  unsigned int v245;
  unsigned int v246;
  int v247;
  int v248;
  int v249;
  int v250;
  int v251;
  int v252;
  int v253;
  int v254;
  int v255;
  __int64 v256;
  __int64 v257;
  __int64 v258;
  __int64 v259;
  _DWORD* v260;
  int* v261;
  int* v262;
  int v263;
  __int64 v265;
  int v266;
  _BOOL4 v267;
  unsigned __int64 v268;
  unsigned int* v269;
  __int64 v270;
  __int64 v271;
  _DWORD* v272;
  __int64 v273;
  __int64 v274;
  __int64 v275;
  int v276;
  int* v277;
  int v278;
  __int64 v279;
  char* v280;
  char* v281;
  int v282;
  __int64 v283;
  __int64 v284;
  __int64 v285;
  __int64 v286;
  char* v287;
  int v288;

  v19 = *((int*)a1 + 2);
  v20 = a3;
  v21 = a2;
  v22 = a1;
  v277 = a7;
  LODWORD(v285) = a6;
  v272 = a8;
  v273 = a5;
  v280 = a4;
  if (a9 >= 8) {
    v24 = 8;
  }
  else {
    v24 = 0;
  }
  v23 = a9 & ~(a9 >> 31);
  v25 = v23 - v24;
  v266 = v24;
  if (a14 == 2) {
    v26 = MovieData_a5d6c[a3 - a2];
    if (v25 - v26 >= 8) {
      v27 = 8;
    }
    else {
      v27 = 0;
    }
    if (v25 >= v26) {
      v25 = v25 - v26 - v27;
    }
    else {
      v26 = 0;
      v27 = 0;
    }
    v268 = __PAIR64__(v27, v26);
    v288 = v25;
  }
  else {
    v288 = v23 - v24;
    v268 = 0;
  }
  v283 = a16;
  v270 = a13;
  v271 = a12;
  v286 = a11;
  v269 = a10;
  v28 = (4 * v19 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  v279 = (__int64)&v265 - v28;
  memset_plt((char*)&v265 - v28, 0, 4 * v19);
  v281 = (char*)&v265 - v28;
  memset_plt((char*)&v265 - v28, 0, 4 * v19);
  v287 = (char*)&v265 - v28;
  memset_plt((char*)&v265 - v28, 0, 4 * v19);
  v29 = (char*)&v265 - v28;
  memset_plt((char*)&v265 - v28, 0, 4 * v19);
  v30 = 8 * a14;
  v31 = v21;
  if ((int)v21 >= (int)v20) {
    v41 = v286;
    v33 = v288;
    v36 = v280;
    v35 = (int)v20;
    v34 = (int)v31;
    goto LABEL_36;
  }
  v32 = *((_QWORD*)v22 + 3);
  v33 = v288;
  v34 = (int)v31;
  v35 = (int)v20;
  v36 = v280;
  v37 = v285 - a15 - 5;
  v38 = a15 + 3;
  if ((((_DWORD)v20 - (_DWORD)v31) & 1) == 0) {
    v39 = *(_WORD*)(v32 + 2LL * (int)v31);
    v40 = (int)v31;
    v41 = v286;
    if ((int)v20 - 1LL == (int)v31) {
      goto LABEL_36;
    }
    goto LABEL_24;
  }
  v40 = (int)v31 + 1LL;
  v42 = *(__int16*)(v32 + 2 * v40) - *(__int16*)(v32 + 2LL * (int)v31);
  v39 = *(_WORD*)(v32 + 2 * v40);
  v43 = (8 * ((3 * v42) << a15)) >> 4;
  if (v30 > v43) {
    v43 = 8 * a14;
  }
  *(_DWORD*)&v287[4 * (int)v31] = v43;
  v44 = (v37 * a14 * ((_DWORD)v20 + ~(_DWORD)v31) * v42) << v38;
  if (v42 << a15 == 1) {
    v45 = 8 * a14;
  }
  else {
    v45 = 0;
  }
  *(_DWORD*)&v29[4 * (int)v31] = (v44 >> 6) - v45;
  v41 = v286;
  if ((int)v20 - 1LL != (int)v31) {
  LABEL_24:
    v46 = a14 * v37;
    v47 = (int)v20 - v40;
    v48 = 4 * v40 + 4;
    v49 = (__int16*)(v32 + 2 * v40 + 4);
    v50 = a14 * v37 * (v20 - v40 - 1);
    v51 = v46 * (v20 - v40 - 2);
    v52 = 2 * v46;
    v53 = (int*)&v287[v48];
    v54 = &v29[v48];
    do {
      v55 = *(v49 - 1);
      v56 = *v49;
      v47 -= 2;
      v49 += 2;
      v57 = v55 - v39;
      v58 = 3 * v57;
      v59 = v50 * v57;
      v60 = v57 << a15;
      v50 -= v52;
      v61 = (8 * (v58 << a15)) >> 4;
      v62 = v59 << v38 >> 6;
      if (v30 > v61) {
        v61 = 8 * a14;
      }
      if (v60 == 1) {
        v63 = 8 * a14;
      }
      else {
        v63 = 0;
      }
      v64 = v62 - v63;
      v65 = v51 * (v56 - v55);
      v66 = (v56 - v55) << a15;
      v51 -= v52;
      v67 = (8 * ((3 * (v56 - v55)) << a15)) >> 4;
      v68 = v65 << v38 >> 6;
      if (v30 > v67) {
        v67 = 8 * a14;
      }
      if (v66 == 1) {
        v69 = 8 * a14;
      }
      else {
        v69 = 0;
      }
      *(v53 - 1) = v61;
      *v53 = v67;
      v53 += 2;
      v70 = v68 - v69;
      v39 = v56;
      *((_DWORD*)v54 - 1) = v64;
      *(_DWORD*)v54 = v70;
      v54 += 8;
    } while (v47 != 0);
  }
LABEL_36:
  v71 = *((_DWORD*)v22 + 11);
  v72 = 1;
  v73 = v71 - 1;
  v278 = a18;
  v74 = v273 - 4;
  v274 = v20;
  v284 = v31;
  v285 = v35;
  v282 = a17;
  v75 = v287 - 4;
  do {
    while (1) {
      v76 = (v72 + v73) >> 1;
      if ((int)v31 < (int)v20) {
        break;
      }
      if (v33 >= 0) {
        v72 = v76 + 1;
      }
      else {
        v73 = v76 - 1;
      }
      if (v72 > v73) {
        v111 = 0;
        v103 = v31;
        goto LABEL_174;
      }
    }
    v77 = *((_QWORD*)v22 + 3);
    v78 = 0;
    v79 = 0;
    v80 = v35;
    LOWORD(v81) = *(_WORD*)(v77 + 2 * v35);
    v82 = v77 - 2;
    do {
      while (1) {
        v84 = (__int16)v81;
        v81 = *(__int16*)(v82 + 2 * v80);
        v85 = ((v84 - v81) * a14 *
               *(unsigned __int8*)(*((_QWORD*)v22 + 6) +
                                   (int)v19 * (__int64)v76 - 1 + v80))
                  << a15 >>
              2;
        if (v85 >= 1) {
          v85 = (*(_DWORD*)&v29[4 * v80 - 4] + v85) &
                ~((*(_DWORD*)&v29[4 * v80 - 4] + v85) >> 31);
        }
        v83 = *(_DWORD*)&v36[4 * v80 - 4] + v85;
        if (v79 != 0 || v83 >= *(_DWORD*)&v75[4 * v80]) {
          break;
        }
        v79 = 0;
        if (v83 >= v30) {
          v86 = 8 * a14;
        }
        else {
          v86 = 0;
        }
        --v80;
        v78 += v86;
        if (v80 <= v34) {
          goto LABEL_54;
        }
      }
      if (v83 >= *(_DWORD*)(v74 + 4 * v80)) {
        v83 = *(_DWORD*)(v74 + 4 * v80);
      }
      v79 = 1;
      --v80;
      v78 += v83;
    } while (v80 > v34);
  LABEL_54:
    if (v78 <= v33) {
      v72 = v76 + 1;
    }
    else {
      v73 = v76 - 1;
    }
  } while (v72 <= v73);
  v87 = v72 * v19;
  v88 = &v29[4 * v34];
  v89 = &v36[4 * v34];
  v90 = v34 - v35;
  v91 = 0;
  v92 = (v72 - 1) * v19;
  v93 = (char*)v279;
  v94 = *((_QWORD*)v22 + 6) + v34;
  v95 = (__int16*)(*((_QWORD*)v22 + 3) + 2 * v34);
  v96 = v94 + v87;
  v97 = v94 + v92;
  v100 = *v95;
  v99 = v95 + 1;
  v98 = v100;
  v101 = v273 + 4 * v34;
  v102 = &v281[4 * v34];
  v103 = v31;
  do {
    v108 = ((__int16)v99[v91] - v98) * a14;
    if (v72 >= v71) {
      v109 = *(_DWORD*)(v101 + 4 * v91);
      v110 = (v108 * *(unsigned __int8*)(v97 + v91)) << a15 >> 2;
      if (v110 < 1) {
        goto LABEL_70;
      }
    LABEL_69:
      v110 = (*(_DWORD*)&v88[4 * v91] + v110) &
             ~((*(_DWORD*)&v88[4 * v91] + v110) >> 31);
      goto LABEL_70;
    }
    v109 = (v108 * *(unsigned __int8*)(v96 + v91)) << a15 >> 2;
    v110 = (v108 * *(unsigned __int8*)(v97 + v91)) << a15 >> 2;
    if (v110 >= 1) {
      goto LABEL_69;
    }
  LABEL_70:
    if (v109 >= 1) {
      v109 = (*(_DWORD*)&v88[4 * v91] + v109) &
             ~((*(_DWORD*)&v88[4 * v91] + v109) >> 31);
    }
    v98 = v99[v91];
    v104 = *(_DWORD*)&v89[4 * v91];
    if (v72 <= 1) {
      v105 = 0;
    }
    else {
      v105 = *(_DWORD*)&v89[4 * v91];
    }
    v106 = v110 + v105;
    v107 = v109 - v106;
    if (v104 > 0) {
      v103 = v34 + v91;
    }
    *(_DWORD*)&v93[4 * v34 + 4 * v91] = v106;
    *(_DWORD*)&v102[4 * v91++] = (v107 + v104) & ~((v107 + v104) >> 31);
  } while (v90 + v91 != 0);
  v35 = v285;
  v112 = v93 - 4;
  v113 = 0;
  v114 = 0;
  v115 = v281 - 4;
  v116 = v285;
  do {
    while (1) {
      v117 = *(_DWORD*)&v112[4 * v116] + (*(int*)&v115[4 * v116] >> 1);
      if (v114 != 0 || v117 >= *(_DWORD*)&v75[4 * v116]) {
        break;
      }
      v114 = 0;
      if (v117 >= v30) {
        v118 = 8 * a14;
      }
      else {
        v118 = 0;
      }
      --v116;
      v113 += v118;
      if (v116 <= v34) {
        goto LABEL_83;
      }
    }
    if (v117 >= *(_DWORD*)(v74 + 4 * v116)) {
      v117 = *(_DWORD*)(v74 + 4 * v116);
    }
    v114 = 1;
    --v116;
    v113 += v117;
  } while (v116 > v34);
LABEL_83:
  v119 = 0;
  v120 = 0;
  if (v113 <= v33) {
    v121 = 48;
  }
  else {
    v121 = 16;
  }
  v122 = v285;
  do {
    while (1) {
      v123 = *(_DWORD*)&v112[4 * v122] +
             ((int)(*(_DWORD*)&v115[4 * v122] * v121) >> 6);
      if (v120 != 0 || v123 >= *(_DWORD*)&v75[4 * v122]) {
        break;
      }
      v120 = 0;
      if (v123 >= v30) {
        v124 = 8 * a14;
      }
      else {
        v124 = 0;
      }
      --v122;
      v119 += v124;
      if (v122 <= v34) {
        goto LABEL_96;
      }
    }
    if (v123 >= *(_DWORD*)(v74 + 4 * v122)) {
      v123 = *(_DWORD*)(v74 + 4 * v122);
    }
    v120 = 1;
    --v122;
    v119 += v123;
  } while (v122 > v34);
LABEL_96:
  LODWORD(v31) = v284;
  v125 = 0;
  v126 = 0;
  if (v113 <= v33) {
    v127 = 32;
  }
  else {
    v127 = 0;
  }
  if (v113 <= v33) {
    v128 = 64;
  }
  else {
    v128 = 32;
  }
  v129 = v119 <= v33;
  if (v119 <= v33) {
    v130 = v121;
  }
  else {
    v130 = v127;
  }
  if (v129) {
    v121 = v128;
  }
  v131 = v285;
  do {
    while (1) {
      v132 = *(_DWORD*)&v112[4 * v131] +
             ((int)(*(_DWORD*)&v115[4 * v131] * ((v121 + v130) >> 1)) >> 6);
      if (v126 != 0 || v132 >= *(_DWORD*)&v75[4 * v131]) {
        break;
      }
      v126 = 0;
      if (v132 >= v30) {
        v133 = 8 * a14;
      }
      else {
        v133 = 0;
      }
      --v131;
      v125 += v133;
      if (v131 <= v34) {
        goto LABEL_118;
      }
    }
    if (v132 >= *(_DWORD*)(v74 + 4 * v131)) {
      v132 = *(_DWORD*)(v74 + 4 * v131);
    }
    v126 = 1;
    --v131;
    v125 += v132;
  } while (v131 > v34);
LABEL_118:
  v134 = v125 <= v33;
  v135 = 0;
  v136 = 0;
  if (v125 <= v33) {
    v137 = (v121 + v130) >> 1;
  }
  else {
    v137 = v130;
  }
  if (!v134) {
    v121 = (v121 + v130) >> 1;
  }
  v138 = v285;
  do {
    while (1) {
      v139 = *(_DWORD*)&v112[4 * v138] +
             ((int)(*(_DWORD*)&v115[4 * v138] * ((v121 + v137) >> 1)) >> 6);
      if (v136 != 0 || v139 >= *(_DWORD*)&v75[4 * v138]) {
        break;
      }
      v136 = 0;
      if (v139 >= v30) {
        v140 = 8 * a14;
      }
      else {
        v140 = 0;
      }
      --v138;
      v135 += v140;
      if (v138 <= v34) {
        goto LABEL_133;
      }
    }
    if (v139 >= *(_DWORD*)(v74 + 4 * v138)) {
      v139 = *(_DWORD*)(v74 + 4 * v138);
    }
    v136 = 1;
    --v138;
    v135 += v139;
  } while (v138 > v34);
LABEL_133:
  v141 = 0;
  v142 = 0;
  if (v135 > v33) {
    v121 = (v121 + v137) >> 1;
  }
  else {
    v137 = (v121 + v137) >> 1;
  }
  v143 = v285;
  do {
    while (1) {
      v144 = *(_DWORD*)&v112[4 * v143] +
             ((int)(*(_DWORD*)&v115[4 * v143] * ((v121 + v137) >> 1)) >> 6);
      if (v142 != 0 || v144 >= *(_DWORD*)&v75[4 * v143]) {
        break;
      }
      v142 = 0;
      if (v144 >= v30) {
        v145 = 8 * a14;
      }
      else {
        v145 = 0;
      }
      --v143;
      v141 += v145;
      if (v143 <= v34) {
        goto LABEL_146;
      }
    }
    if (v144 >= *(_DWORD*)(v74 + 4 * v143)) {
      v144 = *(_DWORD*)(v74 + 4 * v143);
    }
    v142 = 1;
    --v143;
    v141 += v144;
  } while (v143 > v34);
LABEL_146:
  v146 = v141 <= v33;
  v147 = 0;
  v148 = 0;
  if (v141 <= v33) {
    v149 = (v121 + v137) >> 1;
  }
  else {
    v149 = v137;
  }
  if (v146) {
    v150 = v121;
  }
  else {
    v150 = (v121 + v137) >> 1;
  }
  v151 = v285;
  v152 = (v150 + v149) >> 1;
  do {
    while (1) {
      v153 = *(_DWORD*)&v112[4 * v151] +
             ((int)(*(_DWORD*)&v115[4 * v151] * v152) >> 6);
      if (v148 != 0 || v153 >= *(_DWORD*)&v75[4 * v151]) {
        break;
      }
      v148 = 0;
      if (v153 >= v30) {
        v154 = 8 * a14;
      }
      else {
        v154 = 0;
      }
      --v151;
      v147 += v154;
      if (v151 <= v34) {
        goto LABEL_162;
      }
    }
    if (v153 >= *(_DWORD*)(v74 + 4 * v151)) {
      v153 = *(_DWORD*)(v74 + 4 * v151);
    }
    v148 = 1;
    --v151;
    v147 += v153;
  } while (v151 > v34);
LABEL_162:
  v111 = 0;
  v155 = 0;
  if (v147 <= v33) {
    v156 = v152;
  }
  else {
    v156 = v149;
  }
  v157 = v285;
  do {
    v158 = *(_DWORD*)&v112[4 * v157] +
           ((int)(*(_DWORD*)&v115[4 * v157] * v156) >> 6);
    v155 |= v158 >= *(_DWORD*)&v75[4 * v157];
    if (v158 >= v30) {
      v159 = 8 * a14;
    }
    else {
      v159 = 0;
    }
    if ((v155 & 1) == 0) {
      v158 = v159;
    }
    if (v158 >= *(_DWORD*)(v74 + 4 * v157)) {
      v158 = *(_DWORD*)(v74 + 4 * v157);
    }
    *(_DWORD*)(v41 - 4 + 4 * v157--) = v158;
    v111 += v158;
  } while (v157 > v34);
LABEL_174:
  v160 = v268;
  v281 = v22;
  v267 = a14 > 1;
  if ((int)v274 - 1 <= v103) {
    v162 = v274;
    v178 = v268;
  LABEL_199:
    v288 += v266;
    v180 = v270;
    v179 = v271;
    if (v178 > 0) {
      goto LABEL_200;
    }
  LABEL_217:
    v185 = 0;
    *v277 = 0;
    if ((int)v31 < 0) {
      v186 = 0;
    }
    else {
      v186 = HIDWORD(v268);
    }
    if (HIDWORD(v268) != 0) {
      goto LABEL_221;
    }
    goto LABEL_229;
  }
  v161 = (int)v274 - 1;
  v162 = v274;
  v275 = a19;
  v163 = v103;
  v276 = v31 + 2;
  v279 = v103;
  v280 = (char*)&MovieData_a5d6c[-v34];
  while (1) {
    v166 = *((_QWORD*)v22 + 3);
    v167 = *(__int16*)(v166 + 2LL * v162);
    v168 = *(__int16*)(v166 + 2 * v34);
    LODWORD(v166) = *(__int16*)(v166 + 2 * v161);
    v169 = (v288 - v111) / (unsigned int)(v167 - v168);
    v170 = (v288 - v111 + v168 - v166 + (v168 - v167) * v169) &
           ~((int)(v288 - v111 + v168 - v166 + (v168 - v167) * v169) >> 31);
    v171 = v167 - v166;
    v172 = *(_DWORD*)(v41 + 4 * v161);
    v173 = v172 + v171 * v169 + v170;
    v174 = *(_DWORD*)&v287[4 * v161];
    if (v174 <= v30 + 8) {
      v174 = v30 + 8;
    }
    if (v173 >= v174) {
      break;
    }
  LABEL_193:
    if (v160 != 0) {
      v178 = (unsigned __int8)v280[v161];
      if (v173 < v30) {
        goto LABEL_197;
      }
    }
    else {
      v178 = 0;
      if (v173 < v30) {
      LABEL_197:
        v164 = 0;
        goto LABEL_177;
      }
    }
    v164 = 8 * a14;
  LABEL_177:
    v165 = v111 - v160;
    *(_DWORD*)(v41 + 4 * v161--) = v164;
    --v162;
    v160 = v178;
    v111 = v165 - v172 + v164 + v178;
    if (v161 <= v163) {
      goto LABEL_199;
    }
  }
  if (v282 == 0) {
    v177 = v162;
    v175 = v160;
    if ((unsigned int)ec_dec_bit_logp(v283, 1) == 0) {
      goto LABEL_192;
    }
    v35 = v285;
    v41 = v286;
    v180 = v270;
    v179 = v271;
    v162 = v177;
    LODWORD(v31) = v284;
    v22 = v281;
    if (v175 <= 0) {
      goto LABEL_217;
    }
    goto LABEL_211;
  }
  v175 = v160;
  if (v162 > v276) {
    if (v162 <= v278) {
      v176 = 7;
    }
    else {
      v176 = 9;
    }
    if (v162 <= 17) {
      v176 = 0;
    }
    if (v161 > v275 || v173 <= (8 * ((v171 * v176) << a15)) >> 4) {
      v177 = v162;
      ec_enc_bit_logp(v283, 0, 1);
    LABEL_192:
      v35 = v285;
      v41 = v286;
      LODWORD(v31) = v284;
      v162 = v177;
      v111 += 8;
      v173 -= 8;
      v160 = v175;
      v22 = v281;
      v163 = v279;
      v172 = *(_DWORD*)(v286 + 4 * v161);
      goto LABEL_193;
    }
  }
  v187 = v162;
  ec_enc_bit_logp(v283, 1, 1);
  v35 = v285;
  v41 = v286;
  LODWORD(v31) = v284;
  v162 = v187;
  v180 = v270;
  v179 = v271;
  if (v175 <= 0) {
    goto LABEL_217;
  }
LABEL_200:
  if (v282 == 0) {
  LABEL_211:
    v188 = v162;
    v189 = ec_dec_uint(v283, (unsigned int)(v162 - v31 + 1));
    LODWORD(v31) = v284;
    v190 = v189 + v284;
    *v277 = v189 + v284;
    if (v190 > (int)v31) {
      v186 = 0;
    }
    else {
      v186 = HIDWORD(v268);
    }
    if (HIDWORD(v268) == 0) {
      v35 = v285;
      v41 = v286;
      v162 = v188;
      v22 = v281;
      goto LABEL_229;
    }
    v35 = v285;
    v41 = v286;
    v162 = v188;
    v22 = v281;
    if (v190 > (int)v31) {
      goto LABEL_225;
    }
  LABEL_229:
    *v272 = 0;
    if ((int)v31 < v162) {
      goto LABEL_230;
    }
    goto LABEL_226;
  }
  v181 = v277;
  v182 = v283;
  v183 = v162;
  v184 = *v277;
  if (*v277 >= v162) {
    v184 = v162;
  }
  *v277 = v184;
  ec_enc_uint(v182, (unsigned int)(v184 - v31), (unsigned int)(v162 - v31 + 1));
  v162 = v183;
  v22 = v281;
  LODWORD(v31) = v284;
  v35 = v285;
  v41 = v286;
  v185 = *v181;
  if (*v181 > (int)v284) {
    v186 = 0;
  }
  else {
    v186 = HIDWORD(v268);
  }
  if (HIDWORD(v268) == 0) {
    goto LABEL_229;
  }
LABEL_221:
  if (v185 <= (int)v31) {
    goto LABEL_229;
  }
  if (v282 == 0) {
  LABEL_225:
    v192 = v162;
    v193 = ec_dec_bit_logp(v283, 1);
    v162 = v192;
    v22 = v281;
    LODWORD(v31) = v284;
    v35 = v285;
    v41 = v286;
    *v272 = v193;
    if ((int)v31 < v162) {
      goto LABEL_230;
    }
    goto LABEL_226;
  }
  v191 = v162;
  ec_enc_bit_logp(v283, (unsigned int)*v272, 1);
  v162 = v191;
  v22 = v281;
  LODWORD(v31) = v284;
  v35 = v285;
  v41 = v286;
  if ((int)v284 < v162) {
  LABEL_230:
    v196 = *((_QWORD*)v22 + 3);
    v197 = v162;
    v198 = v34;
    v199 = *(__int16*)(v196 + 2LL * v162);
    LODWORD(v196) = *(__int16*)(v196 + 2 * v34);
    v200 = v288 - v111 + v186;
    v201 = v162;
    v202 = v199 - v196;
    v203 = v196 - v199;
    v204 = v162 - v34;
    v205 = v200 / v202;
    v206 = ((_BYTE)v162 - (_BYTE)v34) & 3;
    v207 = ~v34 + v201;
    if ((v204 & 3) != 0) {
      v208 = v34;
      do {
        v198 = v208 + 1;
        --v206;
        *(_DWORD*)(v41 + 4 * v208) +=
            (*(__int16*)(*((_QWORD*)v22 + 3) + 2 * v208 + 2) -
             *(__int16*)(*((_QWORD*)v22 + 3) + 2 * v208)) *
            v205;
        ++v208;
      } while (v206 != 0);
    }
    v209 = v272;
    v210 = v273;
    v211 = v200 + v203 * v205;
    if (v207 >= 3) {
      v212 = (_DWORD*)(v41 + 4 * v198 + 8);
      do {
        v213 = *(v212 - 1);
        *(v212 - 2) += (*(__int16*)(*((_QWORD*)v22 + 3) + 2 * v198 + 2) -
                        *(__int16*)(*((_QWORD*)v22 + 3) + 2 * v198)) *
                       v205;
        *(v212 - 1) = v213 + (*(__int16*)(*((_QWORD*)v22 + 3) + 2 * v198 + 4) -
                              *(__int16*)(*((_QWORD*)v22 + 3) + 2 * v198 + 2)) *
                                 v205;
        v214 = v212[1];
        *v212 += (*(__int16*)(*((_QWORD*)v22 + 3) + 2 * v198 + 6) -
                  *(__int16*)(*((_QWORD*)v22 + 3) + 2 * v198 + 4)) *
                 v205;
        v215 = *((_QWORD*)v22 + 3) + 2 * v198;
        v198 += 4;
        v212[1] = v214 + (*(__int16*)(v215 + 8) - *(__int16*)(v215 + 6)) * v205;
        v212 += 4;
      } while (v201 != v198);
    }
    v216 = v274;
    v195 = v267;
    v217 = v204 & 3;
    if ((v204 & 3) != 0) {
      v218 = v34;
      do {
        v219 = v218 + 1;
        v220 = *(__int16*)(*((_QWORD*)v22 + 3) + 2 * v218 + 2) -
               *(__int16*)(*((_QWORD*)v22 + 3) + 2 * v218);
        if (v211 < v220) {
          v220 = v211;
        }
        --v217;
        v211 -= v220;
        *(_DWORD*)(v41 + 4 * v218++) += v220;
      } while (v217 != 0);
      if (v207 < 3) {
      LABEL_254:
        v232 = 0;
        if (a14 <= 1) {
          v233 = 3;
        }
        else {
          v233 = 4;
        }
        v234 = 2 * v34 + 2;
        while (1) {
          while (1) {
            v240 = (*(__int16*)(*((_QWORD*)v22 + 3) + v234) -
                    *(__int16*)(*((_QWORD*)v22 + 3) + v234 - 2))
                   << a15;
            v241 = *(_DWORD*)(v41 + 4 * v34) + v232;
            if (v240 >= 2) {
              break;
            }
            v245 = (v241 - v30) & ~((v241 - v30) >> 31);
            if (v241 >= v30) {
              v241 = 8 * a14;
            }
            *(_DWORD*)(v41 + 4 * v34) = v241;
            *(_DWORD*)(v179 + 4 * v34) = 0;
            *(_DWORD*)(v180 + 4 * v34) = 1;
            if (v245 == 0) {
              goto LABEL_285;
            }
          LABEL_258:
            v235 = *(_DWORD*)(v179 + 4 * v34);
            v236 = v245 >> v233;
            v237 = v245 - v232;
            if ((int)(v245 >> v233) >= 8 - v235) {
              v236 = 8 - v235;
            }
            v238 = v236 + v235;
            v239 = v236 * v30;
            *(_DWORD*)(v179 + 4 * v34) = v238;
            *(_DWORD*)(v180 + 4 * v34) = v239 >= v237;
            v232 = v245 - v239;
            ++v34;
            v234 += 2;
            if (v201 == v34) {
            LABEL_286:
              v35 = v285;
              v162 = v197;
              LODWORD(v31) = v197;
              *v269 = v232;
              if (v197 >= v216) {
                return (unsigned int)v162;
              }
            LABEL_287:
              if ((((_BYTE)v35 - (_BYTE)v31) & 3) != 0) {
                v256 = 4LL * (((_BYTE)v35 - (_BYTE)v31) & 3);
                v257 = (int)v31;
                do {
                  *(_DWORD*)(v179 + 4 * v257) =
                      *(int*)(v41 + 4 * v257) >> v195 >> 3;
                  *(_DWORD*)(v41 + 4 * v257) = 0;
                  v256 -= 4;
                  *(_DWORD*)(v180 + 4 * v257) = *(_DWORD*)(v179 + 4 * v257) < 1;
                  ++v257;
                } while (v256 != 0);
                if ((unsigned __int64)((int)v31 - v35) > 0xFFFFFFFFFFFFFFFCLL) {
                  return (unsigned int)v162;
                }
              }
              else {
                v257 = (int)v31;
                if ((unsigned __int64)((int)v31 - v35) > 0xFFFFFFFFFFFFFFFCLL) {
                  return (unsigned int)v162;
                }
              }
              v258 = v35 - v257;
              v259 = 4 * v257 + 8;
              v260 = (_DWORD*)(v180 + v259);
              v261 = (int*)(v179 + v259);
              v262 = (int*)(v41 + v259);
              do {
                *(v261 - 2) = *(v262 - 2) >> v195 >> 3;
                *(v262 - 2) = 0;
                *(v260 - 2) = *(v261 - 2) < 1;
                *(v261 - 1) = *(v262 - 1) >> v195 >> 3;
                *(v262 - 1) = 0;
                *(v260 - 1) = *(v261 - 1) < 1;
                *v261 = *v262 >> v195 >> 3;
                *v262 = 0;
                *v260 = *v261 < 1;
                v261[1] = v262[1] >> v195 >> 3;
                v262[1] = 0;
                v262 += 4;
                v263 = v261[1];
                v261 += 4;
                v258 -= 4;
                v260[1] = v263 < 1;
                v260 += 4;
              } while (v258 != 0);
              return (unsigned int)v162;
            }
          }
          v242 = *(_DWORD*)(v210 + 4 * v34);
          v243 = false;
          v244 = v241 - v242;
          if (v241 >= v242) {
            v241 = *(_DWORD*)(v210 + 4 * v34);
          }
          *(_DWORD*)(v41 + 4 * v34) = v241;
          if (a14 == 2 && v240 != 2) {
            v243 = *v209 == 0 && v34 < *v277;
          }
          v245 = v244 & ~(v244 >> 31);
          v246 = v243 + v240 * a14;
          if (v240 == 2) {
            v247 = (int)(8 * v246) >> 2;
          }
          else {
            v247 = 0;
          }
          v248 = (8 * a15 + *(__int16*)(*((_QWORD*)v22 + 7) + 2 * v34)) * v246;
          v249 = v247 - 21 * v246 + (v248 >> 1);
          v250 = v249 + v241;
          v251 = v241 + 4 * v246;
          v252 = v249 + (v248 >> 3);
          if (v250 >= (int)(24 * v246)) {
            v252 = v249;
          }
          v253 = v249 + (v248 >> 2);
          if (v250 >= (int)(16 * v246)) {
            v253 = v252;
          }
          v254 =
              (((v251 + v253) & (unsigned int)~((v251 + v253) >> 31)) / v246) >>
              3;
          *(_DWORD*)(v179 + 4 * v34) = v254;
          v255 = *(_DWORD*)(v41 + 4 * v34);
          if (v254 * a14 > v255 >> 3) {
            v254 = v255 >> v195 >> 3;
          }
          if (v254 >= 8) {
            v254 = 8;
          }
          *(_DWORD*)(v179 + 4 * v34) = v254;
          *(_DWORD*)(v180 + 4 * v34) =
              (int)(v254 * 8 * v246) >= *(_DWORD*)(v41 + 4 * v34) + v253;
          *(_DWORD*)(v41 + 4 * v34) -= *(_DWORD*)(v179 + 4 * v34) * v30;
          if (v245 != 0) {
            goto LABEL_258;
          }
        LABEL_285:
          v232 = 0;
          ++v34;
          v234 += 2;
          if (v201 == v34) {
            goto LABEL_286;
          }
        }
      }
    }
    else {
      v219 = v34;
      if (v207 < 3) {
        goto LABEL_254;
      }
    }
    v221 = (_DWORD*)(v41 + 4 * v219 + 8);
    do {
      v222 = *(__int16*)(*((_QWORD*)v22 + 3) + 2 * v219 + 2) -
             *(__int16*)(*((_QWORD*)v22 + 3) + 2 * v219);
      v223 = *(v221 - 1);
      if (v211 < v222) {
        v222 = v211;
      }
      v224 = v211 - v222;
      *(v221 - 2) += v222;
      v225 = *(__int16*)(*((_QWORD*)v22 + 3) + 2 * v219 + 4) -
             *(__int16*)(*((_QWORD*)v22 + 3) + 2 * v219 + 2);
      if (v224 < v225) {
        v225 = v224;
      }
      v226 = v224 - v225;
      *(v221 - 1) = v225 + v223;
      v227 = *(__int16*)(*((_QWORD*)v22 + 3) + 2 * v219 + 6) -
             *(__int16*)(*((_QWORD*)v22 + 3) + 2 * v219 + 4);
      v228 = v221[1];
      if (v226 < v227) {
        v227 = v226;
      }
      v229 = v226 - v227;
      *v221 += v227;
      v230 = *((_QWORD*)v22 + 3) + 2 * v219;
      v219 += 4;
      v231 = *(__int16*)(v230 + 8) - *(__int16*)(v230 + 6);
      if (v229 < v231) {
        v231 = v229;
      }
      v211 = v229 - v231;
      v221[1] = v231 + v228;
      v221 += 4;
    } while (v201 != v219);
    goto LABEL_254;
  }
LABEL_226:
  v194 = v274;
  v195 = v267;
  *v269 = 0;
  if ((int)v31 < v194) {
    goto LABEL_287;
  }
  return (unsigned int)v162;
}

__int64 opus_651a0(__int64 result, __int64 a2, int a3, int a4)
{
  __int64 v4;
  __int64 v5;
  _WORD* v6;
  __int16* v7;
  __int64 v8;
  int v9;
  _WORD* v10;
  __int16* v11;
  int v12;

  if (a4 >= 1) {
    v4 = a4 & 7;
    if ((unsigned int)a4 < 8) {
      v5 = 0;
      if ((a4 & 7) == 0) {
        return result;
      }
      goto LABEL_8;
    }
    v6 = (_WORD*)(result + 8);
    v7 = (__int16*)(a2 + 8);
    v8 = 0;
    do {
      v8 -= 8;
      *(v6 - 4) = (unsigned int)(a3 * *(v7 - 4)) >> 16;
      *(v6 - 3) = (unsigned int)(a3 * *(v7 - 3)) >> 16;
      *(v6 - 2) = (unsigned int)(a3 * *(v7 - 2)) >> 16;
      *(v6 - 1) = (unsigned int)(a3 * *(v7 - 1)) >> 16;
      *v6 = (unsigned int)(a3 * *v7) >> 16;
      v6[1] = (unsigned int)(a3 * v7[1]) >> 16;
      v6[2] = (unsigned int)(a3 * v7[2]) >> 16;
      v9 = v7[3];
      v7 += 8;
      v6[3] = (unsigned int)(a3 * v9) >> 16;
      v6 += 8;
    } while (-(__int64)(a4 & 0x7FFFFFF8) != v8);
    v5 = -v8;
    if ((a4 & 7) != 0) {
    LABEL_8:
      v10 = (_WORD*)(result + 2 * v5);
      v11 = (__int16*)(a2 + 2 * v5);
      do {
        v12 = *v11++;
        --v4;
        *v10++ = (unsigned int)(a3 * v12) >> 16;
      } while (v4 != 0);
    }
  }
  return result;
}

__int64 opus_652a0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  __int16* v7;
  __int16* v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  __int16* v13;
  __int16* v14;
  int v15;
  int v16;
  int v17;

  if (a3 >= 1) {
    v3 = a3 & 7;
    if ((unsigned int)a3 >= 8) {
      v7 = (__int16*)(a2 + 8);
      v8 = (__int16*)(a1 + 8);
      v9 = 0;
      v5 = 0;
      do {
        v9 -= 8;
        v10 = v5 + *(v7 - 4) * *(v8 - 4) + *(v7 - 3) * *(v8 - 3) +
              *(v7 - 2) * *(v8 - 2) + *(v7 - 1) * *(v8 - 1) + *v7 * *v8 +
              v7[1] * v8[1] + v7[2] * v8[2];
        v11 = v8[3];
        v12 = v7[3];
        v7 += 8;
        v8 += 8;
        v5 = v10 + v12 * v11;
      } while (-(__int64)(a3 & 0x7FFFFFF8) != v9);
      v4 = -v9;
      if ((a3 & 7) == 0) {
        return v5;
      }
    }
    else {
      v4 = 0;
      v5 = 0;
      if ((a3 & 7) == 0) {
        return v5;
      }
    }
    v13 = (__int16*)(a2 + 2 * v4);
    v14 = (__int16*)(a1 + 2 * v4);
    do {
      v16 = *v14++;
      v15 = v16;
      v17 = *v13++;
      --v3;
      v5 += v17 * v15;
    } while (v3 != 0);
    return v5;
  }
  return 0;
}

__int64 opus_653a0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int16* v7;
  __int16* v8;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  __int16* v13;
  __int16* v14;
  int v15;
  int v16;
  int v17;

  if (a3 >= 1) {
    v3 = a3 & 7;
    if ((unsigned int)a3 >= 8) {
      v7 = (__int16*)(a2 + 8);
      v8 = (__int16*)(a1 + 8);
      v9 = 0;
      v5 = 0;
      do {
        v9 -= 8;
        v10 = v5 + *(v7 - 4) * (__int64)*(v8 - 4) +
              *(v7 - 3) * (__int64)*(v8 - 3) + *(v7 - 2) * (__int64)*(v8 - 2) +
              *(v7 - 1) * (__int64)*(v8 - 1) + *v7 * (__int64)*v8 +
              v7[1] * (__int64)v8[1] + v7[2] * (__int64)v8[2];
        v11 = v8[3];
        v12 = v7[3];
        v7 += 8;
        v8 += 8;
        v5 = v10 + v12 * (__int64)v11;
      } while (-(__int64)(a3 & 0x7FFFFFF8) != v9);
      v4 = -v9;
      if ((a3 & 7) == 0) {
        return v5;
      }
    }
    else {
      v4 = 0;
      v5 = 0;
      if ((a3 & 7) == 0) {
        return v5;
      }
    }
    v13 = (__int16*)(a2 + 2 * v4);
    v14 = (__int16*)(a1 + 2 * v4);
    do {
      v16 = *v14++;
      v15 = v16;
      v17 = *v13++;
      --v3;
      v5 += v17 * (__int64)v15;
    } while (v3 != 0);
    return v5;
  }
  return 0;
}

#pragma GCC visibility pop
