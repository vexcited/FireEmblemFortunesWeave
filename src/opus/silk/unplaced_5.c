#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* ec_enc_icdf(__int64* result, int, __int64, char);
__int64* silk_encode_indices(__int64, __int64*, int, int, int);
__int64* silk_stereo_encode_mid_only(__int64*, char);
__int64* silk_stereo_encode_pred(__int64*, char*);
__int64 MovieRoutine_54420(__int64*, __int64, unsigned int, __int64, int);
__int64 check_control_input(_DWORD*);
__int64 ec_enc_patch_initial_bits(__int64 result, int, char);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 opus_silk_4ee30(_DWORD*, int);
__int64 opus_silk_4f080(__int64, _DWORD*, int, int, int);
__int64 opus_silk_592e0(unsigned __int16*, __int16*, __int64, __int64, _BYTE*,
                        unsigned int*, int, int, int, int, int);
__int64 silk_HP_variable_cutoff(__int64 result);
__int64 silk_encode_do_VAD_FIX(__int64, int);
__int64 silk_encode_frame_FIX(_DWORD*, int*, __int64*, unsigned int, signed int,
                              int);
__int64 silk_init_encoder(_DWORD*, int);
__int64 silk_resampler(_DWORD*, __int64, __int64, int);
extern _UNKNOWN* MovieData_c09f0;
extern _UNKNOWN* MovieData_c0a48;
__int64 opus_silk_528e0(_DWORD* a1, _DWORD* a2, __int64 a3, int a4, __int64 a5,
                        int* a6, int a7, int a8);

__int64 opus_silk_528e0(_DWORD* a1, _DWORD* a2, __int64 a3, int a4, __int64 a5,
                        int* a6, int a7, int a8)
{
  int v8;
  _DWORD* v12;
  __int64 v13;
  __int64 result;
  _DWORD* v15;
  int v16;
  bool v17;
  int v18;
  int v19;
  int v20;
  int v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  _DWORD* v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  _DWORD* v32;
  __int64 v33;
  int v34;
  __int64 v35;
  _DWORD* v36;
  int v37;
  __int64 v38;
  __int64 v39;
  int v40;
  _DWORD* v41;
  __int64 v42;
  int v43;
  int v44;
  unsigned __int64 v45;
  char* v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  int v60;
  int v61;
  int v62;
  int v63;
  _DWORD* v64;
  int v65;
  int v66;
  int v67;
  __int64 v68;
  __int64 v69;
  int* v70;
  __int64 v71;
  _QWORD* v72;
  __int64 v73;
  int v74;
  __int64 v75;
  int v76;
  int* v77;
  char v78;
  int v79;
  char v80;
  int v81;
  int v82;
  __int64 i;
  int v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  char* v88;
  char* v89;
  int v90;
  __int64 v91;
  __int64 v92;
  char* v93;
  __int64 v94;
  int v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  int v101;
  int v102;
  int v103;
  __int64 v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  char* v111;
  __int64 v112;
  unsigned int v113;
  int v114;
  int v115;
  int v116;
  bool v117;
  int v118;
  int v119;
  signed int v120;
  _QWORD* v121;
  _BYTE* v122;
  __int64 v123;
  __int64 v124;
  int v125;
  __int64 v126;
  __int64 v127;
  _BOOL4 v129;
  int v130;
  unsigned int v131;
  int v132;
  __int64 v133;
  _DWORD* v134;
  __int64 v135;
  unsigned int v136;
  int v137;
  signed int v138;
  int v139;
  int v140;
  _BOOL4 v142;
  __int64 v143;
  __int64 v144;
  char* v145;
  __int64 v146;
  int v147;
  __int64 v148;
  __int64 v149;
  int v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  char* v154;
  int v155;
  int v156;
  char* v157;
  int v158;
  unsigned int v159;
  int v160;
  __int64 v161;
  int v162;
  int v163;
  __int64 v164;
  char* v165;
  _WORD* v166;
  __int16 v167;
  char* v168;
  __int16* v169;
  __int16 v170;
  _DWORD* v171;
  int v172;
  __int64 v174;
  int v175;
  int v176;
  int v177;
  int v178;
  int v179;
  int v180;
  __int64 v181;
  int v182;
  int v183;
  int v184;
  int v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  char* v189;
  _WORD* v190;
  __int16 v191;
  char* v192;
  __int16* v193;
  __int16 v194;
  __int64 v195;
  __int64 v196;
  char* v197;
  __int16* v198;
  unsigned int v199;
  unsigned int v200;
  unsigned int v201;
  unsigned int v202;
  unsigned int v203;
  unsigned int v204;
  unsigned int v205;
  int v206;
  int v207;
  char* v208;
  __int16* v209;
  int v210;
  int v211;
  int v212;
  __int64 v213;
  int v214;
  int v215;
  int v216;
  __int64 v217;
  __int64 v218;
  int v219;
  __int64 v220;
  int v221;
  int v222;
  int v223;
  int v224;
  _BOOL4 v225;
  int v226;
  __int64 v227;
  _DWORD* v228;
  char* v229;
  struct {
    int v230;
    int v231;
    _QWORD* v232;
    _BYTE* v233;
    char* v234;
    char gap64_[4];
    int v235;
    __int64 v236;
    char gap80_[4];
    int v237;
    __int64 v238;
    __int64 v239;
    __int64 v240;
    __int64 v241;
    char gap120_[4];
    int v242;
    __int64 v243;
    char* v244;
    char* v245;
    _DWORD* v246;
    char gap160_[4];
    int v247;
    __int64 v248;
    char gap176_[4];
    unsigned int v249;
    int v250;
    int v251;
    char* v252;
    __int64 v253;
    __int64 v254;
    char gap216_[4];
    int v255;
    _DWORD* v256;
    __int64 v257;
    __int64 v258;
    __int64 v259;
    __int64 v260;
    char gap264_[4];
    unsigned int v261;
    _DWORD* v262;
    int* v263;
    char gap288_[4];
    int v264;
    __int64 v265;
    char gap304_[4];
    int v266;
    _DWORD* v267;
  } v230_;
  __int16 v268;
  struct {
    __int64 v269;
    __int64 v270;
  } v269_;

  v8 = a2[17];
  v230_.v247 = a8;
  v230_.v263 = a6;
  v12 = a2;
  v13 = (__int64)a1;
  v230_.v258 = a3;
  if (v8 != 0) {
    a1[1166] = 1;
    a1[3330] = 1;
  }
  a1[3605] = 0;
  a1[1441] = 0;
  result = check_control_input(a2);
  if ((_DWORD)result != 0) {
    return result;
  }
  v12[22] = 0;
  v230_.v265 = v13;
  v15 = (_DWORD*)(v13 + 17312);
  if ((signed __int32)v12[1] > (signed __int32)*(_DWORD*)(v13 + 17380)) {
    LODWORD(result) =
        silk_init_encoder((_DWORD*)(v13 + 8656), *(_DWORD*)(v13 + 5108));
    *v15 = 0;
    *(_QWORD*)(v13 + 17320) = 0;
    *(_QWORD*)(v13 + 17328) = 1;
    *(_QWORD*)(v13 + 17336) = 0x400000000001LL;
    if (*(_DWORD*)(v13 + 17376) == 2) {
      v16 = result;
      memcpy_plt(v230_.v265 + 14448, v230_.v265 + 5792, 0x130u);
      LODWORD(result) = v16;
      v13 = v230_.v265;
      *(_QWORD*)(v230_.v265 + 8656) = *(_QWORD*)v230_.v265;
    }
  }
  v17 = v12[6] != *(_DWORD*)(v13 + 4612) || v15[17] != v12[1];
  v18 = *v12;
  v230_.v267 = v12;
  v230_.v251 = a7;
  v230_.v262 = v15;
  v230_.v255 = a4;
  v15[16] = v18;
  v19 = v12[1];
  v15[17] = v19;
  v20 = v12[2];
  v21 = 100 * a4 / v20;
  if (v21 <= 2) {
    v22 = 2;
  }
  else {
    v22 = 100 * a4 / v20;
  }
  if (a7 == 0) {
    v31 = result;
    result = 4294967195LL;
    if (a4 < 0 || v21 * v20 != 100 * a4 || 1000 * v230_.v255 > v12[6] * v20) {
      return result;
    }
    LODWORD(result) = v31;
    v230_.v231 = 0;
    v230_.v230 = 0;
    if (v19 < 1) {
      goto LABEL_49;
    }
    goto LABEL_37;
  }
  if (v21 != 1) {
    return 4294967195LL;
  }
  if (a7 == 2) {
    v23 = *(_QWORD*)(v13 + 24);
    v269_.v269 = *(_QWORD*)(v13 + 16);
    v269_.v270 = v23;
    if (v19 >= 1) {
      v24 = v13;
      v25 = v12;
      v26 = *(_DWORD*)(v13 + 4576);
      v27 = 0;
      do {
        LODWORD(result) =
            silk_init_encoder((_DWORD*)v24, *(_DWORD*)(v24 + 5108));
        v29 = v269_.v269;
        v28 = v269_.v270;
        *(_DWORD*)(v24 + 32) = v26;
        ++v27;
        *(_QWORD*)(v24 + 16) = v29;
        *(_QWORD*)(v24 + 24) = v28;
        v24 += 8656;
        v30 = (int)v25[1];
      } while (v27 < v30);
      a7 = v230_.v251;
      goto LABEL_30;
    }
  }
  else if (v19 >= 1) {
    v32 = (_DWORD*)v13;
    v33 = 0;
    do {
      LODWORD(result) = silk_init_encoder(v32, v32[1277]);
      v30 = (int)v12[1];
      ++v33;
      v32 += 2164;
    } while (v33 < v30);
  LABEL_30:
    v12 = v230_.v267;
    v13 = v230_.v265;
    v230_.v231 = v230_.v267[6];
    v230_.v267[6] = 10;
    v34 = v12[9];
    v12[9] = 0;
    v230_.v230 = v34;
    if ((int)v30 >= 1) {
      v35 = 0;
      v36 = (_DWORD*)(v13 + 4680);
      do {
        *(v36 - 3) = 0;
        *v36 = 1;
        ++v35;
        v36 += 2164;
      } while (v35 < (int)v12[1]);
      LODWORD(v30) = v12[1];
    }
    if ((int)v30 < 1) {
      goto LABEL_49;
    }
  LABEL_37:
    v38 = 0;
    v39 = v13 + 4740;
    do {
      if (v38 == 1) {
        v40 = *(_DWORD*)(v13 + 4576);
      }
      else {
        v40 = 0;
      }
      v41 = (_DWORD*)(v13 + 8656 * v38);
      result =
          opus_silk_4f080((__int64)v41, v230_.v267, v230_.v262[20], v38, v40);
      if ((_DWORD)result != 0) {
        return result;
      }
      if ((v41[1166] != 0 || v17) && *(int*)(v13 + 5760) >= 1) {
        v42 = 0;
        do {
          *(_DWORD*)(v39 + 4 * v42++) = 0;
        } while (v42 < *(int*)(v13 + 5760));
      }
      ++v38;
      v39 += 8656;
      v41[1525] = v41[1524];
    } while (v38 < (int)v230_.v267[1]);
    v12 = v230_.v267;
    a7 = v230_.v251;
    LODWORD(result) = 0;
    goto LABEL_49;
  }
  v230_.v231 = v12[6];
  v12[6] = 10;
  v37 = v12[9];
  v12[9] = 0;
  v230_.v230 = v37;
LABEL_49:
  v269_.v269 = 0;
  v230_.v244 = (char*)(v13 + 4739);
  v43 = *(_DWORD*)(v13 + 4576);
  v230_.v235 = 10 * v21;
  v44 = *(_DWORD*)(v13 + 4556);
  v230_.v242 = v43 * 10 * v21;
  v45 = 2LL * (v230_.v242 * v44 / (1000 * v43));
  v46 = (char*)&v230_.v230 - ((v45 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v47 = result;
  memset_plt((__int64)v46, 0, v45);
  v48 = 0;
  v230_.v261 = v22 >> 1;
  LODWORD(result) = v47;
  v230_.v253 = v13 + 5112;
  v230_.v240 = v13 + 13768;
  v230_.v260 = v13 + 17346;
  v230_.v245 = v46;
  v230_.v246 = (_DWORD*)(v13 + 13396);
  v230_.v252 = (char*)(v13 + 17364);
  v230_.v241 = v13 + 13392;
  v230_.v233 = (_BYTE*)(v13 + 13197);
  v230_.v232 = (_QWORD*)(v13 + 15848);
  v230_.v266 = (v22 >> 1) - 1;
  v230_.v237 = v22 & 0x7FFFFFFE;
  v230_.v259 = v13 + 4740;
  v230_.v248 = v13 + 6120;
  v230_.v257 = v13 + 6228;
  v230_.v234 = v46 + 8;
  v230_.v239 = v13 + 4768;
  v230_.v256 = (_DWORD*)(v13 + 8656);
  v230_.v243 = v13 + 14884;
  v230_.v238 = v13 + 14806;
  v230_.v236 = v13 + 4736;
  while (1) {
    v50 = *(_DWORD*)(v13 + 5756);
    v51 = *(_DWORD*)(v13 + 4584) - v50;
    v230_.v264 = v48;
    if (v51 >= v230_.v242) {
      v52 = v230_.v242;
    }
    else {
      v52 = v51;
    }
    v53 = v52 * *(_DWORD*)(v13 + 4556) / (1000 * *(_DWORD*)(v13 + 4576));
    v54 = *v12;
    v230_.v254 = (unsigned int)v53;
    if (v54 != 2) {
    LABEL_63:
      v59 = (__int64)v230_.v245;
      v60 = result;
      memcpy_plt((__int64)v230_.v245, v230_.v258, 2LL * v53);
      v61 = silk_resampler((_DWORD*)(v230_.v265 + 5792),
                           v230_.v253 + 2LL * v50 + 4, v59, v53);
      v62 = v60;
      v13 = v230_.v265;
      result = (unsigned int)(v61 + v62);
      v63 = *(_DWORD*)(v230_.v265 + 5756) + v52;
      *(_DWORD*)(v230_.v265 + 5756) = v63;
      goto LABEL_64;
    }
    v55 = v12[1];
    if (v55 == 1) {
      break;
    }
    if (v55 != 2) {
      goto LABEL_63;
    }
    v56 = v230_.v253;
    if (v53 >= 1) {
      if ((unsigned int)v53 >= 8) {
        v164 = 0;
        v165 = v230_.v234;
        v166 = (_WORD*)(v230_.v258 + 16);
        do {
          v164 -= 8;
          *((_WORD*)v165 - 4) = *(v166 - 8);
          *((_WORD*)v165 - 3) = *(v166 - 6);
          *((_WORD*)v165 - 2) = *(v166 - 4);
          *((_WORD*)v165 - 1) = *(v166 - 2);
          *(_WORD*)v165 = *v166;
          *((_WORD*)v165 + 1) = v166[2];
          *((_WORD*)v165 + 2) = v166[4];
          v167 = v166[6];
          v166 += 16;
          *((_WORD*)v165 + 3) = v167;
          v165 += 16;
        } while (-(__int64)(v53 & 0x7FFFFFF8) != v164);
        v57 = -v164;
        v58 = v53 & 7;
        if ((v53 & 7) == 0) {
          goto LABEL_237;
        }
      LABEL_235:
        v168 = &v230_.v245[2 * v57];
        v169 = (__int16*)(v230_.v258 + 4 * v57);
        do {
          v170 = *v169;
          v169 += 2;
          --v58;
          *(_WORD*)v168 = v170;
          v168 += 2;
        } while (v58 != 0);
        goto LABEL_237;
      }
      v57 = 0;
      v58 = v53 & 7;
      if ((v53 & 7) != 0) {
        goto LABEL_235;
      }
    }
  LABEL_237:
    v171 = (_DWORD*)v230_.v265;
    v172 = result;
    if (v230_.v262[18] == 1 && *(_DWORD*)(v230_.v265 + 5764) == 0) {
      memcpy_plt(v230_.v265 + 14448, v230_.v265 + 5792, 0x130u);
      v56 = v230_.v253;
    }
    v174 = v56 + 2LL * v50;
    v175 = v230_.v254;
    v176 =
        silk_resampler(v171 + 1448, v174 + 4, (__int64)v230_.v245, v230_.v254);
    v177 = v171[3308];
    v178 = v171[3310];
    v179 = v175;
    v180 = v230_.v235;
    v181 = v230_.v240;
    v171[1439] += v52;
    v182 = v171[3603];
    v183 = v177 * v180;
    v184 = v178 - v182;
    if (v184 >= v183) {
      v185 = v183;
    }
    else {
      v185 = v184;
    }
    if (v175 < 1) {
      goto LABEL_255;
    }
    if ((unsigned int)v175 >= 8) {
      v188 = 0;
      v189 = v230_.v234;
      v190 = (_WORD*)(v230_.v258 + 18);
      do {
        v188 -= 8;
        *((_WORD*)v189 - 4) = *(v190 - 8);
        *((_WORD*)v189 - 3) = *(v190 - 6);
        *((_WORD*)v189 - 2) = *(v190 - 4);
        *((_WORD*)v189 - 1) = *(v190 - 2);
        *(_WORD*)v189 = *v190;
        *((_WORD*)v189 + 1) = v190[2];
        *((_WORD*)v189 + 2) = v190[4];
        v191 = v190[6];
        v190 += 16;
        *((_WORD*)v189 + 3) = v191;
        v189 += 16;
      } while (-(__int64)(v175 & 0x7FFFFFF8) != v188);
      v186 = -v188;
      v187 = v175 & 7;
      if ((v175 & 7) == 0) {
        goto LABEL_255;
      }
    LABEL_253:
      v192 = &v230_.v245[2 * v186];
      v193 = (__int16*)(v230_.v258 + 4 * v186 + 2);
      do {
        v194 = *v193;
        v193 += 2;
        --v187;
        *(_WORD*)v192 = v194;
        v192 += 2;
      } while (v187 != 0);
      goto LABEL_255;
    }
    v186 = 0;
    v187 = v175 & 7;
    if ((v175 & 7) != 0) {
      goto LABEL_253;
    }
  LABEL_255:
    v195 = v230_.v265;
    result = v176 + v172 +
             (unsigned int)silk_resampler((_DWORD*)(v230_.v265 + 14448),
                                          v181 + 2LL * v182 + 4,
                                          (__int64)v230_.v245, v179);
    v13 = v195;
    *(_DWORD*)(v195 + 14412) += v185;
    v63 = *(_DWORD*)(v195 + 5756);
  LABEL_64:
    v64 = v230_.v262;
    v65 = *v12;
    v66 = *(_DWORD*)(v13 + 4584);
    v230_.v262[20] = 0;
    if (v63 < v66) {
      goto LABEL_267;
    }
  LABEL_65:
    v67 = *(_DWORD*)(v13 + 5764);
    v230_.v249 = result;
    v230_.v250 = v65;
    if ((v67 | a7) == 0) {
      v268 = (unsigned __int8)-(0x100u >>
                                (v12[1] + v12[1] * *(_DWORD*)(v13 + 5760)));
      ec_enc_icdf((__int64*)a5, 0, (__int64)&v268, 8);
      LODWORD(v68) = v12[1];
      if ((int)v68 >= 1) {
        v69 = v230_.v259;
        v70 = (int*)v230_.v239;
        v71 = 0;
        v72 = MovieData_c0a48;
        do {
          v73 = v13 + 8656 * v71;
          v74 = *(_DWORD*)(v73 + 5760);
          if (v74 < 1) {
            v76 = 0;
          }
          else {
            if ((unsigned int)v74 >= 8) {
              v75 = 0;
              v76 = 0;
              v77 = v70;
              do {
                v78 = v75 + 7;
                v79 = (*(v77 - 2) << (v75 + 5)) | (*(v77 - 3) << (v75 + 4)) |
                      (*(v77 - 4) << (v75 + 3)) | (*(v77 - 5) << (v75 + 2)) |
                      (*(v77 - 6) << (v75 + 1)) | (*(v77 - 7) << v75) | v76;
                v80 = v75 + 6;
                v75 += 8;
                v81 = *(v77 - 1) << v80;
                v82 = *v77;
                v77 += 8;
                v76 = (v82 << v78) | v81 | v79;
              } while (v75 != (v74 & 0x7FFFFFF8));
            }
            else {
              v75 = 0;
              v76 = 0;
            }
            for (i = v74 & 7; i != 0; v76 |= v84) {
              --i;
              v84 = *(_DWORD*)(v69 + 4 * v75) << v75;
              ++v75;
            }
          }
          *(_BYTE*)(v73 + 4739) = v76 > 0;
          if (v76 != 0 && v74 >= 2) {
            ec_enc_icdf((__int64*)a5, v76 - 1, v72[v74 - 2], 8);
          }
          v68 = (int)v12[1];
          ++v71;
          v70 += 2164;
          v69 += 8656;
        } while (v71 < v68);
      }
      if (*(int*)(v13 + 5760) >= 1) {
        v85 = v230_.v243;
        v86 = 0;
        v87 = 0;
        v88 = (char*)v230_.v238;
        do {
          if ((int)v68 >= 1) {
            v89 = (char*)(v230_.v260 + 6 * v87);
            if (v87 != 0) {
              if (*(_DWORD*)(v230_.v259 + 4 * v87) != 0) {
                if ((_DWORD)v68 == 2) {
                  silk_stereo_encode_pred((__int64*)a5, v89);
                  if (v230_.v246[v87] == 0) {
                    silk_stereo_encode_mid_only((__int64*)a5, v230_.v252[v87]);
                  }
                }
                if (*(_DWORD*)(v230_.v259 + 4 * (v87 - 1)) != 0) {
                  v90 = 2;
                }
                else {
                  v90 = 0;
                }
                silk_encode_indices(v13, (__int64*)a5, v87, 1, v90);
                MovieRoutine_54420(
                    (__int64*)a5,
                    (unsigned int)*(char*)(v230_.v248 + 36 * v87 + 29),
                    *(char*)(v230_.v248 + 36 * v87 + 30),
                    v230_.v257 + 320 * v87, *(_DWORD*)(v13 + 4584));
                LODWORD(v68) = v230_.v267[1];
              }
              if ((int)v68 >= 2) {
                v91 = (__int64)v230_.v256;
                v92 = 1;
                v93 = v88;
                v94 = v85;
                do {
                  if (*(_DWORD*)(v91 + v86 + 4740) != 0) {
                    if (*(_DWORD*)(v91 + v86 + 4736) != 0) {
                      v95 = 2;
                    }
                    else {
                      v95 = 0;
                    }
                    silk_encode_indices(v91, (__int64*)a5, v87, 1, v95);
                    MovieRoutine_54420((__int64*)a5, (unsigned int)*(v93 - 1),
                                       *v93, v94, *(_DWORD*)(v91 + 4584));
                    LODWORD(v68) = v230_.v267[1];
                  }
                  ++v92;
                  v91 += 8656;
                  v94 += 8656;
                  v93 += 8656;
                } while (v92 < (int)v68);
              }
            }
            else {
              if (*(_DWORD*)(v13 + 4740) != 0) {
                if ((_DWORD)v68 == 2) {
                  silk_stereo_encode_pred((__int64*)a5, v89);
                  if (*v230_.v246 == 0) {
                    silk_stereo_encode_mid_only((__int64*)a5, *v230_.v252);
                  }
                }
                silk_encode_indices(v13, (__int64*)a5, 0, 1, 0);
                MovieRoutine_54420((__int64*)a5, (unsigned int)v230_.v244[1410],
                                   v230_.v244[1411], v230_.v257,
                                   *(_DWORD*)(v13 + 4584));
                LODWORD(v68) = v230_.v267[1];
              }
              if ((int)v68 >= 2) {
                v96 = (__int64)v230_.v256;
                v97 = v230_.v243;
                v98 = 1;
                do {
                  if (*(_DWORD*)(v96 + 4740) != 0) {
                    silk_encode_indices(v96, (__int64*)a5, 0, 1, 0);
                    MovieRoutine_54420(
                        (__int64*)a5, (unsigned int)*(char*)(v97 - 79),
                        *(char*)(v97 - 78), v97, *(_DWORD*)(v97 - 1644));
                    LODWORD(v68) = v230_.v267[1];
                  }
                  ++v98;
                  v97 += 8656;
                  v96 += 8656;
                } while (v98 < (int)v68);
              }
            }
          }
          v13 = v230_.v265;
          ++v87;
          v85 += 320;
          v88 += 36;
          v86 += 4;
        } while (v87 < *(int*)(v230_.v265 + 5760));
      }
      v12 = v230_.v267;
      if ((int)v68 >= 1) {
        v99 = v230_.v259;
        v100 = 0;
        do {
          *(_DWORD*)(v99 + 8) = 0;
          *(_QWORD*)v99 = 0;
          ++v100;
          v99 += 8656;
        } while (v100 < (int)v12[1]);
      }
      v64 = v230_.v262;
      a7 = v230_.v251;
      v230_.v262[14] = *(_DWORD*)(a5 + 24) + __clz(*(_DWORD*)(a5 + 32)) - 32;
    }
    silk_HP_variable_cutoff(v13);
    v102 = v12[6];
    v101 = v12[7];
    v103 = v102 * v101 / 1000;
    if (a7 == 0) {
      v103 -= v64[14];
    }
    v104 = v230_.v253;
    if (v102 == 10) {
      v105 = 100;
    }
    else {
      v105 = 50;
    }
    v106 = v103 / (signed __int32)*(_DWORD*)(v13 + 5760);
    v107 = (__int16)v106 * v105 - 2 * v64[15];
    if (a7 == 0) {
      v108 = *(_DWORD*)(v13 + 5764);
      if (v108 >= 1) {
        v107 += 2 * (v64[14] + v108 * v106 -
                     (*(_DWORD*)(a5 + 24) + __clz(*(_DWORD*)(a5 + 32)))) +
                64;
      }
    }
    if (v101 <= 5000) {
      v109 = 5000;
    }
    else {
      v109 = v12[7];
    }
    if (v101 >= 5000) {
      v101 = 5000;
    }
    if (v107 > v101) {
      v101 = v107;
    }
    if (v107 <= v109) {
      v110 = v101;
    }
    else {
      v110 = v109;
    }
    if (v12[1] != 2) {
      v113 = v230_.v261;
      *(_DWORD*)(v13 + 5112) = v64[1];
      v64[1] = *(_DWORD*)(v104 + 2LL * *(int*)(v13 + 4584));
      goto LABEL_138;
    }
    v111 = v230_.v252;
    opus_silk_592e0((unsigned __int16*)(v13 + 17312), (__int16*)(v13 + 5116),
                    v13 + 13772, v230_.v260 + 6LL * *(int*)(v13 + 5764),
                    &v230_.v252[*(int*)(v13 + 5764)],
                    (unsigned int*)&v269_.v269, v110, *(_DWORD*)(v13 + 4532),
                    v12[15], *(_DWORD*)(v13 + 4576), *(_DWORD*)(v13 + 4584));
    v112 = *(int*)(v13 + 5764);
    if (v111[v112] != 0) {
      *(_BYTE*)(v230_.v241 + v112) = 0;
      v113 = v230_.v261;
      if (v230_.v251 != 0) {
        goto LABEL_138;
      }
    LABEL_157:
      silk_stereo_encode_pred((__int64*)a5,
                              (char*)(v230_.v260 + 6LL * *(int*)(v13 + 5764)));
      v123 = *(int*)(v13 + 5764);
      if (*(_BYTE*)(v230_.v241 + v123) == 0) {
        silk_stereo_encode_mid_only((__int64*)a5, v230_.v252[v123]);
      }
      goto LABEL_138;
    }
    if (v64[21] == 1) {
      *(_QWORD*)(v13 + 8672) = 0;
      v121 = v230_.v232;
      *v230_.v232 = 0;
      v121[1] = 0;
      memset_plt(v13 + 8804, 0, 0x1120u);
      *(_DWORD*)(v13 + 13200) = 100;
      *(_DWORD*)(v13 + 13132) = 100;
      v122 = v230_.v233;
      v230_.v233[2651] = 10;
      *v122 = 0;
      *(_DWORD*)(v13 + 13148) = 0x10000;
      *(_DWORD*)(v13 + 13320) = 1;
    }
    silk_encode_do_VAD_FIX(v13 + 8656, v230_.v247);
    v113 = v230_.v261;
    if (v230_.v251 == 0) {
      goto LABEL_157;
    }
  LABEL_138:
    silk_encode_do_VAD_FIX(v13, v230_.v247);
    v114 = v12[1];
    if (v114 < 1) {
      result = v230_.v249;
      v115 = v230_.v264;
      goto LABEL_205;
    }
    v115 = v230_.v264;
    v116 = v12[14];
    result = v230_.v249;
    v117 = v113 == 2 && v230_.v264 == 0;
    v118 = v117;
    if (v117) {
      v119 = 3 * v116;
    LABEL_148:
      v120 = v119 / 5;
      goto LABEL_164;
    }
    if (v113 == 3) {
      if (v230_.v264 == 0) {
        v119 = 2 * v116;
        goto LABEL_148;
      }
      v120 = v12[14];
      if (v230_.v264 == 1) {
        v120 = 3 * v116 / 4;
      }
    }
    else {
      v120 = v12[14];
    }
  LABEL_164:
    v129 = v12[13] != 0 && v230_.v264 == v230_.v266;
    if (v114 == 1) {
      v130 = v110;
    }
    else {
      v130 = v269_.v269;
      if (SHIDWORD(v269_.v269) >= 1) {
        v129 = false;
        v120 -= v116 / v230_.v237;
      }
    }
    if (v130 >= 1) {
      opus_silk_4ee30((_DWORD*)v13, v130);
      if (*(int*)(v13 + 5764) <= 0) {
        v131 = 0;
      }
      else {
        v131 = 2;
      }
      result = silk_encode_frame_FIX((_DWORD*)v13, v230_.v263, (__int64*)a5,
                                     v131, v120, v129);
      v115 = v230_.v264;
    }
    v132 = *(_DWORD*)(v13 + 5764);
    *(_DWORD*)(v13 + 4668) = 0;
    *(_DWORD*)(v13 + 5756) = 0;
    *(_DWORD*)(v13 + 5764) = v132 + 1;
    LODWORD(v133) = v12[1];
    if ((int)v133 > 1) {
      v134 = v230_.v256;
      v135 = 1;
      do {
        v138 = v12[14];
        if (v118 != 0) {
          v139 = 3 * v138;
        }
        else {
          if (v230_.v261 != 3) {
            goto LABEL_193;
          }
          if (v115 != 0) {
            if (v115 == 1) {
              v138 = 3 * v138 / 4;
            }
            goto LABEL_193;
          }
          v139 = 2 * v138;
        }
        v138 = v139 / 5;
      LABEL_193:
        v140 = v110;
        v142 = v12[13] != 0 && v115 == v230_.v266;
        if ((_DWORD)v133 != 1) {
          v140 = *((_DWORD*)&v269_.v269 + v135);
        }
        if (v140 >= 1) {
          opus_silk_4ee30(v134, v140);
          if (v135 < *(int*)(v13 + 5764)) {
            if (v230_.v262[21] != 0) {
              v136 = 1;
            }
            else {
              v136 = 2;
            }
          }
          else {
            v136 = 0;
          }
          result = silk_encode_frame_FIX(v134, v230_.v263, (__int64*)a5, v136,
                                         v138, v142);
          v115 = v230_.v264;
        }
        v137 = v134[1441];
        v134[1167] = 0;
        v134[1439] = 0;
        ++v135;
        v134[1441] = v137 + 1;
        v134 += 2164;
        v133 = (int)v12[1];
      } while (v135 < v133);
    }
  LABEL_205:
    v143 = *(int*)(v13 + 5764);
    v64 = v230_.v262;
    a7 = v230_.v251;
    v230_.v262[21] = v230_.v252[v143 - 1];
    if (*v230_.v263 >= 1 && (_DWORD)v143 == *(_DWORD*)(v13 + 5760)) {
      v144 = (unsigned int)v12[1];
      if ((int)v144 >= 1) {
        v145 = v230_.v244;
        v146 = 0;
        v147 = 0;
        v148 = v230_.v236;
        while (1) {
          v149 = v13 + 8656 * v146;
          v150 = *(_DWORD*)(v149 + 5760);
          if (v150 >= 1) {
            if ((unsigned int)v150 >= 8) {
              v153 = 0;
              v154 = v145;
              do {
                v153 -= 8;
                v155 = (4 * ((4 * ((4 * ((4 * v147) | (2 * *(v154 - 3)) |
                                         *(v154 - 2))) |
                                   (2 * *(v154 - 1)) | *v154)) |
                             (2 * v154[1]) | v154[2])) |
                       (2 * v154[3]);
                v156 = v154[4];
                v154 += 8;
                v147 = v155 | v156;
              } while (-(__int64)(v150 & 0x7FFFFFF8) != v153);
              v151 = -v153;
              v152 = v150 & 7;
              if (v152 == 0) {
                goto LABEL_209;
              }
            LABEL_217:
              v157 = (char*)(v148 + v151);
              do {
                v158 = *v157++;
                --v152;
                v147 = v158 | (2 * v147);
              } while (v152 != 0);
              goto LABEL_209;
            }
            v151 = 0;
            v152 = v150 & 7;
            if (v152 != 0) {
              goto LABEL_217;
            }
          }
        LABEL_209:
          ++v146;
          v145 += 8656;
          v148 += 8656;
          v147 = *(char*)(v149 + 4739) | (2 * v147);
          if (v146 == v144) {
            goto LABEL_221;
          }
        }
      }
      v147 = 0;
    LABEL_221:
      if (a7 == 0) {
        v159 = result;
        ec_enc_patch_initial_bits(a5, v147, v144 + v144 * v143);
        v115 = v230_.v264;
        result = v159;
        v13 = v230_.v265;
      }
      if (*(_DWORD*)(v13 + 6100) != 0 &&
          (v12[1] == 1 || *(_DWORD*)(v13 + 14756) != 0)) {
        *v230_.v263 = 0;
      }
      v160 = v64[15] + 8 * *v230_.v263;
      v64[15] = v160;
      v161 = (-274877907LL * v12[6] * v12[7]) >> 38;
      v162 = (v161 + ((unsigned int)v161 >> 31) + v160) &
             ~((int)(v161 + ((unsigned int)v161 >> 31) + v160) >> 31);
      if (v162 >= 10000) {
        v162 = 10000;
      }
      v64[15] = v162;
      v163 = v64[19];
      if ((signed __int32)*(_DWORD*)(v13 + 4532) >=
          (signed int)(((unsigned __int64)(3188LL * (__int16)v163) >> 16) +
                       13)) {
        v64[20] = 0;
        v49 = v12[6] + v163;
      }
      else {
        v49 = 0;
        v64[20] = 1;
      }
      v64[19] = v49;
    }
    v48 = v115 + 1;
    v230_.v258 += 2LL * v230_.v250 * (int)v230_.v254;
    v230_.v255 -= v230_.v254;
    if (v230_.v255 == 0) {
      v226 = v64[20];
      v224 = v12[1];
      v64[18] = v224;
      v12[19] = v226;
      if (*(_DWORD*)(v13 + 4576) != 16) {
        goto LABEL_270;
      }
    LABEL_268:
      v225 = *(_DWORD*)(v13 + 28) == 0;
      goto LABEL_271;
    }
  }
  v124 = v230_.v253;
  v125 = result;
  if (v53 >= 1) {
    if ((unsigned int)v53 >= 8) {
      v196 = 0;
      v197 = v230_.v234;
      v198 = (__int16*)(v230_.v258 + 16);
      do {
        v196 -= 8;
        v199 = *(v198 - 7) + *(v198 - 8);
        v200 = *(v198 - 5) + *(v198 - 6);
        v201 = *(v198 - 3) + *(v198 - 4);
        v202 = *(v198 - 1) + *(v198 - 2);
        v203 = v198[1] + *v198;
        v204 = v198[3] + v198[2];
        v205 = v198[5] + v198[4];
        *((_WORD*)v197 - 4) = (v199 & 1) + (v199 >> 1);
        *((_WORD*)v197 - 3) = (v200 & 1) + (v200 >> 1);
        *((_WORD*)v197 - 2) = (v201 & 1) + (v201 >> 1);
        *((_WORD*)v197 + 2) = (v205 & 1) + (v205 >> 1);
        v206 = v198[6];
        *((_WORD*)v197 - 1) = (v202 & 1) + (v202 >> 1);
        *(_WORD*)v197 = (v203 & 1) + (v203 >> 1);
        v207 = v198[7];
        v198 += 16;
        *((_WORD*)v197 + 1) = (v204 & 1) + (v204 >> 1);
        *((_WORD*)v197 + 3) =
            ((v207 + v206) & 1) + ((unsigned int)(v207 + v206) >> 1);
        v197 += 16;
      } while (-(__int64)(v53 & 0x7FFFFFF8) != v196);
      v126 = -v196;
      v127 = v53 & 7;
      if ((v53 & 7) != 0) {
        goto LABEL_259;
      }
    }
    else {
      v126 = 0;
      v127 = v53 & 7;
      if ((v53 & 7) == 0) {
        goto LABEL_261;
      }
    LABEL_259:
      v208 = &v230_.v245[2 * v126];
      v209 = (__int16*)(v230_.v258 + 4 * v126 + 2);
      do {
        v210 = *(v209 - 1);
        v211 = *v209;
        v209 += 2;
        --v127;
        *(_WORD*)v208 =
            ((v211 + v210) & 1) + ((unsigned int)(v211 + v210) >> 1);
        v208 += 2;
      } while (v127 != 0);
    }
  }
LABEL_261:
  v212 = silk_resampler((_DWORD*)(v13 + 5792), v124 + 2LL * v50 + 4,
                        (__int64)v230_.v245, v53);
  v64 = v230_.v262;
  result = (unsigned int)(v212 + v125);
  if (v230_.v262[18] == 2 && *(_DWORD*)(v13 + 5764) == 0) {
    v213 = *(int*)(v13 + 14412);
    v214 = result;
    v215 =
        silk_resampler((_DWORD*)(v230_.v265 + 14448), v230_.v240 + 2 * v213 + 4,
                       (__int64)v230_.v245, v230_.v254);
    v216 = v214;
    v13 = v230_.v265;
    result = (unsigned int)(v215 + v216);
    if (*(int*)(v230_.v265 + 4584) >= 1) {
      v217 = v230_.v253;
      v218 = v230_.v240;
      v219 = 2;
      do {
        v220 = 2LL * (v219 + *(_DWORD*)(v13 + 5756));
        *(_WORD*)(v217 + v220) =
            (unsigned int)(*(__int16*)(v218 +
                                       2LL * (v219 + *(_DWORD*)(v13 + 14412))) +
                           *(__int16*)(v217 + v220)) >>
            1;
        v221 = v219++ - 1;
      } while (v221 < (signed __int32)*(_DWORD*)(v13 + 4584));
    }
  }
  v222 = *(_DWORD*)(v13 + 5756) + v52;
  *(_DWORD*)(v13 + 5756) = v222;
  v65 = *v12;
  v223 = *(_DWORD*)(v13 + 4584);
  v64[20] = 0;
  if (v222 >= v223) {
    goto LABEL_65;
  }
LABEL_267:
  v224 = v12[1];
  v64[18] = v224;
  v12[19] = 0;
  if (*(_DWORD*)(v13 + 4576) == 16) {
    goto LABEL_268;
  }
LABEL_270:
  v225 = false;
LABEL_271:
  v12[20] = v225;
  v12[18] = 1000 * *(__int16*)(v13 + 4576);
  if (v12[15] != 0) {
    v12[21] = 0;
    if (a7 == 0) {
      goto LABEL_278;
    }
  }
  else {
    v12[21] = *((__int16*)v64 + 14);
    if (a7 == 0) {
      goto LABEL_278;
    }
  }
  v12[6] = v230_.v231;
  v12[9] = v230_.v230;
  if (v224 >= 1) {
    v227 = 0;
    v228 = (_DWORD*)(v13 + 4680);
    do {
      *(v228 - 3) = 0;
      *v228 = 0;
      ++v227;
      v228 += 2164;
    } while (v227 < (int)v12[1]);
  }
LABEL_278:
  v229 = v230_.v244;
  v12[23] = v230_.v244[42];
  v12[24] = *((__int16*)MovieData_c09f0 + 2 * (v229[42] >> 1) + v229[43]);
  return result;
}

#pragma GCC visibility pop
