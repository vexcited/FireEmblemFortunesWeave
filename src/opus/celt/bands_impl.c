#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* ec_enc_bits(__int64* result, int, int);
__int64 celt_sqrt(__int64 result);
__int64 deinterleave_hadamard(_WORD*, int, int, unsigned __int64);
__int64 ec_dec_bits(__int64*, unsigned int);
__int64 interleave_hadamard(__int64, int, int, unsigned __int64);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 quant_partition(int*, void*, int, int, int, _WORD*, int, unsigned int,
                        int);
extern int* SdkData_e877c0;
extern unsigned __int8 SdkData_bb1850[16];
extern unsigned __int8 SdkData_bb32f0[16];
__int64 bands_2c9e60(__int64 result, int a2, unsigned int a3);
__int64 bands_2cb1e0(__int64 a1, void* a2, unsigned int a3, int a4, int a5,
                     _WORD* a6, int a7, _WORD* a8, unsigned __int16 a9,
                     _WORD* a10, int a11);

__int64 bands_2c9e60(__int64 result, int a2, unsigned int a3)
{
  __int64 v3;
  __int64 v4;
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
  __int64 v15;
  __int64 v16;
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
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  __int16* v36;
  __int64 v37;
  __int64 v38;
  __int16* v39;
  int v40;
  int v41;
  __int64 v42;
  __int64 v43;
  unsigned int v44;

  if ((int)a3 >= 1) {
    v44 = a2 >> 1;
    if (a2 >> 1 >= 1) {
      v3 = 2 * a3;
      v4 = a3;
      v5 = 16LL * a3;
      v6 = 2LL * a3;
      v7 = 4LL * a3;
      v8 = 0;
      v9 = 0;
      v10 = result;
      v42 = v6;
      v43 = v4;
      v11 = 2LL * (unsigned int)v3;
      v12 = 8LL * (unsigned int)v3;
      v13 = 4LL * (unsigned int)v3;
      v14 = v5 - v6;
      v15 = v11;
      v16 = 2 * (v7 + v4);
      v17 = 2 * (v11 + v3);
      v18 = 2 * (v6 + v4);
      do {
        if (v44 >= 4) {
          v19 = 0;
          v20 = v8;
          v21 = v6;
          v22 = v18;
          v23 = v15;
          v24 = v16;
          v25 = v13;
          v26 = v14;
          v27 = v17;
          do {
            v19 += 4;
            v28 = 23170 * *(__int16*)(result + v21);
            v29 = 23170 * *(__int16*)(result + v20) + 0x4000;
            *(_WORD*)(result + v20) = (unsigned int)(v29 + v28) >> 15;
            *(_WORD*)(result + v21) = (unsigned int)(v29 - v28) >> 15;
            v21 += v5;
            v20 += v12;
            v30 = 23170 * *(__int16*)(result + v22);
            v31 = 23170 * *(__int16*)(result + v23) + 0x4000;
            *(_WORD*)(result + v23) = (unsigned int)(v31 + v30) >> 15;
            *(_WORD*)(result + v22) = (unsigned int)(v31 - v30) >> 15;
            v23 += v12;
            v22 += v5;
            v32 = 23170 * *(__int16*)(result + v24);
            v33 = 23170 * *(__int16*)(result + v25) + 0x4000;
            *(_WORD*)(result + v25) = (unsigned int)(v33 + v32) >> 15;
            *(_WORD*)(result + v24) = (unsigned int)(v33 - v32) >> 15;
            v25 += v12;
            v24 += v5;
            v34 = 23170 * *(__int16*)(result + v26);
            v35 = 23170 * *(__int16*)(result + v27) + 0x4000;
            *(_WORD*)(result + v27) = (unsigned int)(v35 + v34) >> 15;
            *(_WORD*)(result + v26) = (unsigned int)(v35 - v34) >> 15;
            v27 += v12;
            v26 += v5;
          } while ((v44 & 0x7FFFFFFC) != v19);
        }
        else {
          v19 = 0;
        }
        if ((v44 & 3) != 0) {
          v36 = (__int16*)(v10 + v11 * v19);
          v37 = (2 * v19) | 1;
          v38 = v44 & 3;
          v39 = (__int16*)(v10 + v42 * v37);
          do {
            --v38;
            v40 = 23170 * *v39;
            v41 = 23170 * *v36 + 0x4000;
            *v36 = (unsigned int)(v41 + v40) >> 15;
            *v39 = (unsigned int)(v41 - v40) >> 15;
            v39 = (__int16*)((char*)v39 + v7);
            v36 = (__int16*)((char*)v36 + v11);
          } while (v38 != 0);
        }
        ++v9;
        v17 += 2;
        v14 += 2;
        v13 += 2;
        v16 += 2;
        v15 += 2;
        v18 += 2;
        v6 += 2;
        v8 += 2;
        v10 += 2;
      } while (v9 != v43);
    }
  }
  return result;
}

__int64 bands_2cb1e0(__int64 a1, void* a2, unsigned int a3, int a4, int a5,
                     _WORD* a6, int a7, _WORD* a8, unsigned __int16 a9,
                     _WORD* a10, int a11)
{
  int v11;
  __int64 v13;
  int v14;
  int v15;
  _WORD* v17;
  int v18;
  char v19;
  unsigned __int64 v20;
  __int64* v21;
  int v22;
  unsigned int v23;
  _WORD* v24;
  __int64 v25;
  __int16 v26;
  __int64 i;
  int v28;
  char v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  int v37;
  __int64 v38;
  __int64 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  int v52;
  int v53;
  int v54;
  char v55;
  __int64 v56;
  _WORD* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  int v62;
  int v63;
  __int64 v64;
  __int64 v65;
  int v66;
  __int64 v67;
  __int64 v68;
  int v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  int v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  void* v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
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
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  int v112;
  int v113;
  __int16* v114;
  __int16* v115;
  __int64 v116;
  int v117;
  int v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  _WORD* v122;
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
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  int v141;
  int v142;
  int v143;
  int v144;
  int v145;
  int v146;
  int v147;
  int v148;
  __int64 v149;
  __int16* v150;
  __int16* v151;
  int v152;
  int v153;
  int v154;
  int v155;
  int v156;
  int v157;
  _WORD* v158;
  _WORD* v159;
  int v160;
  __int64 v161;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  void* v168;
  __int64 v169;
  __int64 v170;
  unsigned __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
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
  int v187;
  int v188;
  int v189;
  int v190;
  int v191;
  int v192;
  int v193;
  int v194;
  __int64 v195;
  __int16* v196;
  __int16* v197;
  int v198;
  int v199;
  _WORD* v200;
  __int64 v201;
  int v202;
  _WORD* v204;
  int v205;
  __int64 v206;
  __int64 v207;
  unsigned int v208;
  __int64 v209;
  char* v210;
  __int64 v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  int v215;
  int v216;
  __int64 v217;
  __int64 v218;
  int v219;
  __int64 v220;
  __int64 v221;
  int v222;
  __int64 v223;
  __int64 v224;
  __int64 v225;
  int v226;
  __int64 v227;
  __int64 v228;
  __int64 v229;
  __int64 v230;
  int v231;
  int v232;
  __int16 v233;
  __int64 v234;
  __int64 v235;
  bool v236;
  _BOOL4 v237;
  _WORD* v238;
  __int16* v239;
  __int64 v240;
  int v241;
  _WORD* v242;
  __int16* v243;
  int v244;
  int v246;
  _WORD* v247;
  _BOOL4 v249;
  int v252;
  int v253;
  int v254;
  __int64 v255;
  int v256;
  char v257;
  int v258;
  __int64 v259;
  int v260;
  int v261;
  unsigned int v262;
  unsigned int v263;
  __int64 v264;
  __int64 v265;
  __int64 v266;
  __int64 v267;
  unsigned int v268;
  __int64 v269;
  __int64 v270;
  int v271;
  int v272;

  v11 = a3;
  v13 = a1;
  v249 = a5 == 1;
  if ((unsigned int)a5 >= 0x101) {
    v14 = a3 / a5;
    v15 = *(_DWORD*)a1;
    if (a3 != 1) {
      goto LABEL_3;
    }
  LABEL_12:
    v21 = *(__int64**)(a1 + 32);
    v22 = *(_DWORD*)(v13 + 40);
    if (v15 != 0) {
      if (v22 < 8) {
        v26 = 0x4000;
      }
      else {
        v23 = *(unsigned __int16*)a2;
        v24 = a8;
        v25 = v13;
        ec_enc_bits(v21, v23 >> 15, 1);
        v13 = v25;
        a8 = v24;
        *(_DWORD*)(v25 + 40) -= 8;
        v26 = v23 & 0x8000 | 0x4000;
      }
    }
    else {
      v26 = 0x4000;
      if (v22 >= 8) {
        v200 = a8;
        v201 = v13;
        v202 = ec_dec_bits(v21, 1u);
        v13 = v201;
        a8 = v200;
        if (v202 != 0) {
          v26 = -16384;
        }
        else {
          v26 = 0x4000;
        }
        *(_DWORD*)(v201 + 40) -= 8;
      }
    }
    if (*(_DWORD*)(v13 + 4) != 0) {
      *(_WORD*)a2 = v26;
    }
    if (a8 != nullptr) {
      *a8 = (unsigned int)*(__int16*)a2 >> 4;
    }
    return 1;
  }
  v19 = __clz(a5 & -a5);
  v20 = ((unsigned int)SdkData_e877c0[(unsigned int)a5 >> -v19] *
         (unsigned __int64)(a3 >> ~v19)) >>
        32;
  if (a3 - a5 * (_DWORD)v20 < a5) {
    v14 = v20;
  }
  else {
    v14 = v20 + 1;
  }
  v15 = *(_DWORD*)a1;
  if (a3 == 1) {
    goto LABEL_12;
  }
LABEL_3:
  v247 = a8;
  v255 = *(unsigned int*)(a1 + 28);
  v252 = v255 & ~((int)v255 >> 31);
  if (a6 != nullptr) {
    v17 = a10;
    if (a10 != nullptr) {
      if ((int)v255 <= 0) {
        v236 = (v14 & 1) != 0 || (_DWORD)v255 == 0;
        v237 = !v236;
        if (a5 <= 1 && !v237) {
          v246 = 0;
          goto LABEL_46;
        }
      }
      v18 = a5;
      memcpy_plt(a10, a6, 2LL * (int)a3);
      a5 = v18;
      if ((int)v255 < 1) {
        goto LABEL_7;
      }
    LABEL_16:
      for (i = 0; i != v255; ++i) {
        if (v15 != 0 && i != 31) {
          v28 = v11 >> i >> 1;
          if (v28 >= 1) {
            v29 = i + 1;
            v30 = 0;
            do {
              v31 = (char*)a2 + 2 * v30;
              if ((unsigned int)v28 >= 4) {
                v33 = 7;
                v32 = 0;
                do {
                  v34 = 2 * (v32 << v29);
                  v35 = 2 * ((v33 - 6) << i);
                  v36 = 23170 * *(__int16*)&v31[v34] + 0x4000;
                  v37 = 23170 * *(__int16*)&v31[v35];
                  *(_WORD*)&v31[v34] = (unsigned int)(v36 + v37) >> 15;
                  *(_WORD*)&v31[v35] = (unsigned int)(v36 - v37) >> 15;
                  v38 = 2 * ((v32 + 1) << v29);
                  v39 = 2 * ((v33 - 4) << i);
                  LODWORD(v35) = 23170 * *(__int16*)&v31[v38] + 0x4000;
                  v40 = 23170 * *(__int16*)&v31[v39];
                  *(_WORD*)&v31[v38] = (unsigned int)(v35 + v40) >> 15;
                  *(_WORD*)&v31[v39] = (unsigned int)(v35 - v40) >> 15;
                  v41 = 2 * ((v32 + 2) << v29);
                  v42 = 2 * ((v33 - 2) << i);
                  v43 = 23170 * *(__int16*)&v31[v42];
                  LODWORD(v35) = 23170 * *(__int16*)&v31[v41] + 0x4000;
                  *(_WORD*)&v31[v41] = (unsigned int)(v35 + v43) >> 15;
                  LODWORD(v41) = v35 - v43;
                  v44 = v33 << i;
                  v33 += 8;
                  v44 *= 2;
                  *(_WORD*)&v31[v42] = (unsigned int)v41 >> 15;
                  v45 = v32 + 3;
                  v32 += 4;
                  v46 = 2 * (v45 << v29);
                  v47 = 23170 * *(__int16*)&v31[v44];
                  LODWORD(v42) = 23170 * *(__int16*)&v31[v46] + 0x4000;
                  *(_WORD*)&v31[v46] = (unsigned int)(v42 + v47) >> 15;
                  *(_WORD*)&v31[v44] = (unsigned int)(v42 - v47) >> 15;
                } while (v32 != (v28 & 0x7FFFFFFC));
              }
              else {
                v32 = 0;
              }
              if ((v28 & 3) != 0) {
                v48 = (2 * v32) | 1;
                v49 = v28 & 3;
                do {
                  v50 = v32 << v29;
                  v51 = v48 << i;
                  ++v32;
                  v48 += 2;
                  --v49;
                  v50 *= 2;
                  v51 *= 2;
                  v52 = 23170 * *(__int16*)&v31[v51];
                  v53 = 23170 * *(__int16*)&v31[v50] + 0x4000;
                  *(_WORD*)&v31[v50] = (unsigned int)(v53 + v52) >> 15;
                  *(_WORD*)&v31[v51] = (unsigned int)(v53 - v52) >> 15;
                } while (v49 != 0);
              }
              ++v30;
            } while (v30 != 1 << i);
          }
        }
        if (v17 != nullptr && i != 31) {
          v54 = v11 >> i >> 1;
          if (v54 >= 1) {
            v55 = i + 1;
            v56 = 0;
            do {
              v57 = &v17[v56];
              if ((unsigned int)v54 >= 4) {
                v59 = 7;
                v58 = 0;
                do {
                  v60 = v58 << v55;
                  v61 = 2 * ((v59 - 6) << i);
                  v62 = 23170 * (__int16)v57[v60] + 0x4000;
                  v63 = 23170 * *(__int16*)((char*)v57 + v61);
                  v57[v60] = (unsigned int)(v62 + v63) >> 15;
                  *(_WORD*)((char*)v57 + v61) = (unsigned int)(v62 - v63) >> 15;
                  v64 = (v58 + 1) << v55;
                  v65 = (v59 - 4) << i;
                  LODWORD(v61) = 23170 * (__int16)v57[v64] + 0x4000;
                  v66 = 23170 * (__int16)v57[v65];
                  v57[v64] = (unsigned int)(v61 + v66) >> 15;
                  v57[v65] = (unsigned int)(v61 - v66) >> 15;
                  v67 = 2 * ((v58 + 2) << v55);
                  v68 = 2 * ((v59 - 2) << i);
                  v69 = 23170 * *(__int16*)((char*)v57 + v68);
                  LODWORD(v61) = 23170 * *(__int16*)((char*)v57 + v67) + 0x4000;
                  *(_WORD*)((char*)v57 + v67) = (unsigned int)(v61 + v69) >> 15;
                  LODWORD(v67) = v61 - v69;
                  v70 = v59 << i;
                  v59 += 8;
                  v70 *= 2;
                  *(_WORD*)((char*)v57 + v68) = (unsigned int)v67 >> 15;
                  v71 = v58 + 3;
                  v58 += 4;
                  v72 = v71 << v55;
                  v73 = 23170 * *(__int16*)((char*)v57 + v70);
                  LODWORD(v68) = 23170 * (__int16)v57[v72] + 0x4000;
                  v57[v72] = (unsigned int)(v68 + v73) >> 15;
                  *(_WORD*)((char*)v57 + v70) = (unsigned int)(v68 - v73) >> 15;
                } while (v58 != (v54 & 0x7FFFFFFC));
              }
              else {
                v58 = 0;
              }
              if ((v54 & 3) != 0) {
                v74 = (2 * v58) | 1;
                v75 = v54 & 3;
                do {
                  v76 = v58 << v55;
                  v77 = v74 << i;
                  ++v58;
                  v74 += 2;
                  --v75;
                  v76 *= 2;
                  v77 *= 2;
                  v78 = 23170 * *(__int16*)((char*)v57 + v77);
                  v79 = 23170 * *(__int16*)((char*)v57 + v76) + 0x4000;
                  *(_WORD*)((char*)v57 + v76) = (unsigned int)(v79 + v78) >> 15;
                  *(_WORD*)((char*)v57 + v77) = (unsigned int)(v79 - v78) >> 15;
                } while (v75 != 0);
              }
              ++v56;
            } while (v56 != 1 << i);
          }
        }
        a11 = SdkData_bb32f0[a11 & 0xF] | (4 * SdkData_bb32f0[a11 >> 4]);
      }
      v246 = 1;
      goto LABEL_45;
    }
  }
  v17 = a6;
  if ((int)v255 >= 1) {
    goto LABEL_16;
  }
LABEL_7:
  v246 = 0;
LABEL_45:
  a6 = v17;
LABEL_46:
  v261 = 0;
  v80 = a5 >> v252;
  v81 = v14 << v252;
  v254 = v11;
  if (((v14 << v252) & 1) == 0) {
    v82 = v255;
    if ((v255 & 0x80000000) != 0) {
      v261 = 0;
      v253 = v15;
      while (1) {
        v256 = v82;
        v83 = v81 >> 1;
        v257 = v81;
        v262 = v80;
        v258 = a11;
        v259 = (unsigned int)(2 * v80);
        v271 = v81 >> 1;
        if (v15 != 0 && v80 >= 1 && v83 >= 1) {
          v84 = v83 & 0x7FFFFFFC;
          v85 = 0;
          v86 = 0;
          v87 = a2;
          v88 = 2LL * (unsigned int)v259;
          v266 = v83 & 3;
          v89 = 2LL * (unsigned int)v80;
          v90 = 16LL * (unsigned int)v80;
          v91 = 8LL * (unsigned int)(2 * v80);
          v92 = v90 - v89;
          v93 = 4LL * (unsigned int)v259;
          v94 = v88;
          v95 = 2 * (v88 + v259);
          v96 = 10LL * v262;
          v97 = 6LL * v262;
          do {
            v269 = v85;
            v98 = 0;
            if ((unsigned int)v83 >= 4) {
              v99 = v89;
              v100 = v97;
              v101 = v94;
              v102 = v96;
              v103 = v93;
              v104 = v92;
              v105 = v95;
              do {
                v98 += 4;
                v106 = 23170 * *(__int16*)((char*)a2 + v99);
                v107 = 23170 * *(__int16*)((char*)a2 + v85) + 0x4000;
                *(_WORD*)((char*)a2 + v85) = (unsigned int)(v107 + v106) >> 15;
                *(_WORD*)((char*)a2 + v99) = (unsigned int)(v107 - v106) >> 15;
                v99 += v90;
                v85 += v91;
                v108 = 23170 * *(__int16*)((char*)a2 + v100);
                v109 = 23170 * *(__int16*)((char*)a2 + v101) + 0x4000;
                *(_WORD*)((char*)a2 + v101) = (unsigned int)(v109 + v108) >> 15;
                *(_WORD*)((char*)a2 + v100) = (unsigned int)(v109 - v108) >> 15;
                v101 += v91;
                v100 += v90;
                v110 = 23170 * *(__int16*)((char*)a2 + v102);
                v111 = 23170 * *(__int16*)((char*)a2 + v103) + 0x4000;
                *(_WORD*)((char*)a2 + v103) = (unsigned int)(v111 + v110) >> 15;
                *(_WORD*)((char*)a2 + v102) = (unsigned int)(v111 - v110) >> 15;
                v103 += v91;
                v102 += v90;
                v112 = 23170 * *(__int16*)((char*)a2 + v104);
                v113 = 23170 * *(__int16*)((char*)a2 + v105) + 0x4000;
                *(_WORD*)((char*)a2 + v105) = (unsigned int)(v113 + v112) >> 15;
                *(_WORD*)((char*)a2 + v104) = (unsigned int)(v113 - v112) >> 15;
                v105 += v91;
                v104 += v90;
              } while (v84 != v98);
            }
            if (v266 != 0) {
              v114 = (__int16*)((char*)v87 + 2LL * v262 * ((2 * v98) | 1));
              v115 = (__int16*)((char*)v87 + v88 * v98);
              v116 = v266;
              do {
                --v116;
                v117 = 23170 * *v114;
                v118 = 23170 * *v115 + 0x4000;
                *v115 = (unsigned int)(v118 + v117) >> 15;
                *v114 = (unsigned int)(v118 - v117) >> 15;
                v114 += 2 * v262;
                v115 = (__int16*)((char*)v115 + v88);
              } while (v116 != 0);
            }
            v83 = v271;
            ++v86;
            v95 += 2;
            v92 += 2;
            v93 += 2;
            v96 += 2;
            v94 += 2;
            v97 += 2;
            v89 += 2;
            v87 = (void*)((char*)v87 + 2);
            v85 = v269 + 2;
          } while (v86 != v262);
        }
        if (a6 != nullptr && (int)v262 >= 1 && v83 >= 1) {
          v119 = v83 & 0x7FFFFFFC;
          v120 = 0;
          v121 = 0;
          v122 = a6;
          v123 = 2LL * (unsigned int)v259;
          v267 = v83 & 3;
          v124 = 8LL * (unsigned int)v259;
          v125 = 4LL * (unsigned int)v259;
          v126 = 2 * (v123 + v259);
          v127 = 16LL * v262;
          v128 = 2LL * v262;
          v129 = v127 - v128;
          v130 = 10LL * v262;
          v131 = 6LL * v262;
          v132 = v123;
          do {
            v270 = v120;
            v133 = 0;
            if ((unsigned int)v83 >= 4) {
              v134 = v128;
              v135 = v131;
              v136 = v132;
              v137 = v130;
              v138 = v125;
              v139 = v129;
              v140 = v126;
              do {
                v133 += 4;
                v141 = 23170 * *(__int16*)((char*)a6 + v134);
                v142 = 23170 * *(__int16*)((char*)a6 + v120) + 0x4000;
                *(_WORD*)((char*)a6 + v120) = (unsigned int)(v142 + v141) >> 15;
                v120 += v124;
                *(_WORD*)((char*)a6 + v134) = (unsigned int)(v142 - v141) >> 15;
                v134 += v127;
                v143 = 23170 * *(__int16*)((char*)a6 + v135);
                v144 = 23170 * *(__int16*)((char*)a6 + v136) + 0x4000;
                *(_WORD*)((char*)a6 + v136) = (unsigned int)(v144 + v143) >> 15;
                *(_WORD*)((char*)a6 + v135) = (unsigned int)(v144 - v143) >> 15;
                v136 += v124;
                v135 += v127;
                v145 = 23170 * *(__int16*)((char*)a6 + v137);
                v146 = 23170 * *(__int16*)((char*)a6 + v138) + 0x4000;
                *(_WORD*)((char*)a6 + v138) = (unsigned int)(v146 + v145) >> 15;
                *(_WORD*)((char*)a6 + v137) = (unsigned int)(v146 - v145) >> 15;
                v138 += v124;
                v137 += v127;
                v147 = 23170 * *(__int16*)((char*)a6 + v139);
                v148 = 23170 * *(__int16*)((char*)a6 + v140) + 0x4000;
                *(_WORD*)((char*)a6 + v140) = (unsigned int)(v148 + v147) >> 15;
                *(_WORD*)((char*)a6 + v139) = (unsigned int)(v148 - v147) >> 15;
                v140 += v124;
                v139 += v127;
              } while (v119 != v133);
            }
            if (v267 != 0) {
              v149 = v267;
              v150 = (_WORD*)((char*)v122 + 2LL * v262 * ((2 * v133) | 1));
              v151 = (_WORD*)((char*)v122 + v123 * v133);
              do {
                --v149;
                v152 = 23170 * *v150;
                v153 = 23170 * *v151 + 0x4000;
                *v151 = (unsigned int)(v153 + v152) >> 15;
                *v150 = (unsigned int)(v153 - v152) >> 15;
                v150 += 2 * v262;
                v151 = (__int16*)((char*)v151 + v123);
              } while (v149 != 0);
            }
            v83 = v271;
            ++v121;
            v126 += 2;
            v129 += 2;
            v125 += 2;
            v130 += 2;
            v132 += 2;
            v131 += 2;
            v128 += 2;
            ++v122;
            v120 = v270 + 2;
          } while (v121 != v262);
        }
        v11 = v254;
        a11 = (v258 << v262) | v258;
        ++v261;
        if ((v257 & 2) != 0) {
          break;
        }
        v154 = v259;
        v15 = v253;
        v81 = v83;
        v80 = v259;
        v82 = v256 + 1;
        if (v256 >= -1) {
          v155 = v259;
          if ((int)v259 < 2) {
            goto LABEL_83;
          }
          goto LABEL_76;
        }
      }
      v15 = v253;
      v154 = v259;
      v155 = v259;
      if ((int)v259 >= 2) {
        goto LABEL_76;
      }
    LABEL_83:
      v263 = quant_partition((int*)a1, a2, v11, a4, v154, a6, a7, a9, a11);
      if (*(_DWORD*)(a1 + 4) != 0) {
      LABEL_84:
        if (v261 != 0) {
          v160 = 0;
          do {
            v161 = (unsigned int)(v155 >> 1);
            v260 = v160;
            v272 = v83;
            v268 = (2 * v83) >> 1;
            if ((int)v161 >= 1 && (2 * v83) >> 1 >= 1) {
              v163 = 2LL * (unsigned int)(v155 >> 1);
              v164 = 4LL * (unsigned int)(v155 >> 1);
              v165 = 16LL * (unsigned int)(v155 >> 1);
              v166 = 0;
              v167 = 0;
              v168 = a2;
              v169 = v165 - v163;
              v264 = v163;
              v265 = (unsigned int)(v155 >> 1);
              v170 = 2 * (v164 + v161);
              v171 = (unsigned __int64)(unsigned int)v155 >> 1;
              v172 = 16 * v171;
              v173 = 8 * v171;
              v174 = 4 * v171;
              v175 = 12 * v171;
              v176 = 2 * (v163 + v161);
              v177 = 4 * v171;
              do {
                if (v268 >= 4) {
                  v178 = 0;
                  v179 = v166;
                  v180 = v163;
                  v181 = v176;
                  v182 = v177;
                  v183 = v170;
                  v184 = v173;
                  v185 = v169;
                  v186 = v175;
                  do {
                    v178 += 4;
                    v187 = 23170 * *(__int16*)((char*)a2 + v180);
                    v188 = 23170 * *(__int16*)((char*)a2 + v179) + 0x4000;
                    *(_WORD*)((char*)a2 + v179) =
                        (unsigned int)(v188 + v187) >> 15;
                    *(_WORD*)((char*)a2 + v180) =
                        (unsigned int)(v188 - v187) >> 15;
                    v180 += v165;
                    v179 += v172;
                    v189 = 23170 * *(__int16*)((char*)a2 + v181);
                    v190 = 23170 * *(__int16*)((char*)a2 + v182) + 0x4000;
                    *(_WORD*)((char*)a2 + v182) =
                        (unsigned int)(v190 + v189) >> 15;
                    *(_WORD*)((char*)a2 + v181) =
                        (unsigned int)(v190 - v189) >> 15;
                    v182 += v172;
                    v181 += v165;
                    v191 = 23170 * *(__int16*)((char*)a2 + v183);
                    v192 = 23170 * *(__int16*)((char*)a2 + v184) + 0x4000;
                    *(_WORD*)((char*)a2 + v184) =
                        (unsigned int)(v192 + v191) >> 15;
                    *(_WORD*)((char*)a2 + v183) =
                        (unsigned int)(v192 - v191) >> 15;
                    v184 += v172;
                    v183 += v165;
                    v193 = 23170 * *(__int16*)((char*)a2 + v185);
                    v194 = 23170 * *(__int16*)((char*)a2 + v186) + 0x4000;
                    *(_WORD*)((char*)a2 + v186) =
                        (unsigned int)(v194 + v193) >> 15;
                    *(_WORD*)((char*)a2 + v185) =
                        (unsigned int)(v194 - v193) >> 15;
                    v186 += v172;
                    v185 += v165;
                  } while ((v268 & 0x7FFFFFFC) != v178);
                }
                else {
                  v178 = 0;
                }
                if ((v268 & 3) != 0) {
                  v195 = v268 & 3;
                  v196 = (__int16*)((char*)v168 + v174 * v178);
                  v197 = (__int16*)((char*)v168 + v264 * ((2 * v178) | 1));
                  do {
                    --v195;
                    v198 = 23170 * *v197;
                    v199 = 23170 * *v196 + 0x4000;
                    *v196 = (unsigned int)(v199 + v198) >> 15;
                    *v197 = (unsigned int)(v199 - v198) >> 15;
                    v197 = (__int16*)((char*)v197 + v164);
                    v196 = (__int16*)((char*)v196 + v174);
                  } while (v195 != 0);
                }
                LODWORD(v161) = v265;
                ++v167;
                v175 += 2;
                v169 += 2;
                v173 += 2;
                v170 += 2;
                v177 += 2;
                v176 += 2;
                v163 += 2;
                v166 += 2;
                v168 = (void*)((char*)v168 + 2);
              } while (v167 != v265);
            }
            v155 = v161;
            v83 = 2 * v272;
            v263 |= v263 >> v161;
            v160 = v260 + 1;
          } while (v260 + 1 != v261);
        }
        else {
          LODWORD(v161) = v155;
        }
        if (v246 != 0) {
          v204 = v247;
          v205 = v254;
          v206 = 0;
          do {
            v263 = SdkData_bb1850[v263];
            if (v206 == 31 || (int)(v208 = v254 >> v206 >> 1) <= 0) {
              v207 = v206 + 1;
            }
            else {
              v207 = v206 + 1;
              v209 = 0;
              do {
                v210 = (char*)a2 + 2 * v209;
                if (v208 >= 4) {
                  v212 = 7;
                  v211 = 0;
                  do {
                    v213 = 2 * (v211 << v207);
                    v214 = 2 * ((v212 - 6) << v206);
                    v215 = 23170 * *(__int16*)&v210[v213] + 0x4000;
                    v216 = 23170 * *(__int16*)&v210[v214];
                    *(_WORD*)&v210[v213] = (unsigned int)(v215 + v216) >> 15;
                    *(_WORD*)&v210[v214] = (unsigned int)(v215 - v216) >> 15;
                    v217 = 2 * ((v211 + 1) << v207);
                    v218 = 2 * ((v212 - 4) << v206);
                    LODWORD(v214) = 23170 * *(__int16*)&v210[v217] + 0x4000;
                    v219 = 23170 * *(__int16*)&v210[v218];
                    *(_WORD*)&v210[v217] = (unsigned int)(v214 + v219) >> 15;
                    *(_WORD*)&v210[v218] = (unsigned int)(v214 - v219) >> 15;
                    v220 = 2 * ((v211 + 2) << v207);
                    v221 = 2 * ((v212 - 2) << v206);
                    v222 = 23170 * *(__int16*)&v210[v221];
                    LODWORD(v214) = 23170 * *(__int16*)&v210[v220] + 0x4000;
                    *(_WORD*)&v210[v220] = (unsigned int)(v214 + v222) >> 15;
                    LODWORD(v220) = v214 - v222;
                    v223 = v212 << v206;
                    v212 += 8;
                    v223 *= 2;
                    *(_WORD*)&v210[v221] = (unsigned int)v220 >> 15;
                    v224 = v211 + 3;
                    v211 += 4;
                    v225 = 2 * (v224 << v207);
                    v226 = 23170 * *(__int16*)&v210[v223];
                    LODWORD(v221) = 23170 * *(__int16*)&v210[v225] + 0x4000;
                    *(_WORD*)&v210[v225] = (unsigned int)(v221 + v226) >> 15;
                    *(_WORD*)&v210[v223] = (unsigned int)(v221 - v226) >> 15;
                  } while (v211 != (v208 & 0x7FFFFFFC));
                }
                else {
                  v211 = 0;
                }
                if ((v208 & 3) != 0) {
                  v227 = (2 * v211) | 1;
                  v228 = v208 & 3;
                  do {
                    v229 = v211 << v207;
                    v230 = v227 << v206;
                    ++v211;
                    v227 += 2;
                    --v228;
                    v229 *= 2;
                    v230 *= 2;
                    v231 = 23170 * *(__int16*)&v210[v230];
                    v232 = 23170 * *(__int16*)&v210[v229] + 0x4000;
                    *(_WORD*)&v210[v229] = (unsigned int)(v232 + v231) >> 15;
                    *(_WORD*)&v210[v230] = (unsigned int)(v232 - v231) >> 15;
                  } while (v228 != 0);
                }
                ++v209;
              } while (v209 != 1 << v206);
            }
            v206 = v207;
          } while (v207 != v255);
        }
        else {
          v204 = v247;
          v205 = v254;
        }
        if (v204 == nullptr) {
          return v263 & ~(-1 << ((_DWORD)v161 << v252));
        }
        v233 = celt_sqrt((unsigned int)(v205 << 22));
        if (v205 < 1) {
          return v263 & ~(-1 << ((_DWORD)v161 << v252));
        }
        v234 = v205 & 7;
        if ((unsigned int)v205 >= 8) {
          v238 = v204 + 4;
          v239 = (__int16*)((char*)a2 + 8);
          v240 = 0;
          do {
            v240 -= 8;
            *(v238 - 4) = (unsigned int)(v233 * *(v239 - 4)) >> 15;
            *(v238 - 3) = (unsigned int)(v233 * *(v239 - 3)) >> 15;
            *(v238 - 2) = (unsigned int)(v233 * *(v239 - 2)) >> 15;
            *(v238 - 1) = (unsigned int)(v233 * *(v239 - 1)) >> 15;
            *v238 = (unsigned int)(v233 * *v239) >> 15;
            v238[1] = (unsigned int)(v233 * v239[1]) >> 15;
            v238[2] = (unsigned int)(v233 * v239[2]) >> 15;
            v241 = v239[3];
            v239 += 8;
            v238[3] = (unsigned int)(v233 * v241) >> 15;
            v238 += 8;
          } while (-(__int64)(v205 & 0x7FFFFFF8) != v240);
          v235 = -v240;
          if ((v205 & 7) == 0) {
            return v263 & ~(-1 << ((_DWORD)v161 << v252));
          }
        }
        else {
          v235 = 0;
          if ((v205 & 7) == 0) {
            return v263 & ~(-1 << ((_DWORD)v161 << v252));
          }
        }
        v242 = &v204[v235];
        v243 = (__int16*)((char*)a2 + 2 * v235);
        do {
          v244 = *v243++;
          --v234;
          *v242++ = (unsigned int)(v233 * v244) >> 15;
        } while (v234 != 0);
        return v263 & ~(-1 << ((_DWORD)v161 << v252));
      }
      return v263;
    }
  }
  v154 = a5 >> v252;
  v83 = v14 << v252;
  v155 = v80;
  if (v80 < 2) {
    goto LABEL_83;
  }
LABEL_76:
  v156 = v83 >> v252;
  v157 = v154 << v252;
  if (v15 != 0) {
    v158 = a6;
    deinterleave_hadamard(a2, v156, v157, v249);
    v154 = v155;
    a6 = v158;
  }
  if (a6 != nullptr) {
    v159 = a6;
    deinterleave_hadamard(a6, v156, v157, v249);
    v154 = v155;
    a6 = v159;
  }
  v263 = quant_partition((int*)a1, a2, v11, a4, v154, a6, a7, a9, a11);
  if (*(_DWORD*)(a1 + 4) != 0) {
    interleave_hadamard((__int64)a2, v156, v157, v249);
    goto LABEL_84;
  }
  return v263;
}

#pragma GCC visibility pop
