#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 anti_collapse(__int64 result, __int64, __int64, int, int, int, int, int,
                      __int64, __int64, __int64, __int64, int, unsigned int);
__int64 celt_decode_lost(__int64, unsigned int, int);
__int64 celt_synthesis(_DWORD*, __int64, _QWORD*, __int64, unsigned int,
                       unsigned int, int, int, int, int, unsigned int, int,
                       unsigned int);
__int64 comb_filter(__int64 result, __int64, int, int, int, unsigned __int16,
                    unsigned __int16, int, int, __int16*, unsigned int);
__int64 ec_dec_bits(__int64*, unsigned int);
__int64 ec_dec_icdf(__int64*, unsigned __int8*, char);
__int64 ec_dec_init(__int64 result, unsigned __int8*, unsigned int);
__int64 ec_dec_uint(__int64*, unsigned int);
__int64 ec_tell_frac(__int64);
__int64 init_caps(__int64 result, __int64, int, int);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memmove_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 opus_41040(char*, unsigned int, unsigned int, char*, __int64, int, int*,
                   _BOOL4*, int, unsigned int*, __int64, __int64, __int64, int,
                   int, __int64*, int, int, int);
__int64 opus_celt_29540(__int64 result, __int16*, int, int, int, __int16*,
                        _DWORD*, int);
__int64 quant_all_bands(unsigned int, __int64, int, __int64, __int64, __int64,
                        __int64, __int64, __int64, int, int, int, unsigned int,
                        __int64, int, int, __int64, unsigned int, unsigned int,
                        unsigned int*, int, int, int);
__int64 unquant_coarse_energy(__int64 result, int, int, __int64, int, __int64,
                              int, int);
__int64 unquant_energy_finalise(__int64 result, int, int, __int64, __int64,
                                __int64, int, __int64*, int);
__int64 unquant_fine_energy(__int64 result, int, int, __int64, __int64,
                            __int64*, int);
int ec_dec_bit_logp(__int64*, char);
extern char MovieData_a231a[34];
extern unsigned __int8 MovieData_a23e5[];
extern unsigned __int8 MovieData_a23e8[];
extern unsigned __int8 MovieData_a23ec[];
__int64 opus_celt_254a0(__int64 a1, unsigned __int8* a2, unsigned int a3,
                        __int16* a4, int a5, _QWORD* a6, int a7);

__int64 opus_celt_254a0(__int64 a1, unsigned __int8* a2, unsigned int a3,
                        __int16* a4, int a5, _QWORD* a6, int a7)
{
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  signed int v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 result;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64 v37;
  _QWORD* v38;
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
  __int64* v53;
  _QWORD* v54;
  __int64 v55;
  __int64 v56;
  int v57;
  __int64 v58;
  __int64 v59;
  __int64 v62;
  __int64 v63;
  __int16* v64;
  _WORD* v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  __int16* v75;
  int v76;
  unsigned int v77;
  int v78;
  unsigned int v79;
  int v80;
  _QWORD* v81;
  _BOOL4 v82;
  int v83;
  int v84;
  int v85;
  __int64* v86;
  int v87;
  int v88;
  signed int v89;
  _BOOL8 v90;
  unsigned int v91;
  int v92;
  _BOOL4 v93;
  int v94;
  __int64* v95;
  int v96;
  int v97;
  int v98;
  unsigned int v99;
  unsigned int v100;
  int v101;
  bool v102;
  int v103;
  unsigned int v104;
  int v105;
  __int64 v106;
  int v107;
  __int64 v108;
  int v109;
  int v110;
  __int64 v111;
  int v112;
  int v113;
  int v114;
  _DWORD* v115;
  __int64 v116;
  _BOOL4 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  int* v121;
  int v122;
  int v123;
  int v124;
  int v125;
  unsigned __int64 v126;
  unsigned __int64 v127;
  char* v128;
  unsigned int v129;
  int v130;
  __int64 v131;
  int v132;
  __int64 v133;
  int v134;
  signed int v135;
  __int64 v136;
  int v137;
  int v138;
  int v139;
  _BOOL4 v140;
  signed int v141;
  int v142;
  int v143;
  __int64* v144;
  _BOOL4 v145;
  int v146;
  int v147;
  signed int v148;
  int v149;
  int v150;
  unsigned int v151;
  int v152;
  unsigned int v153;
  _BOOL4 v154;
  int v155;
  int v156;
  int v157;
  unsigned __int64 v158;
  char* v159;
  char* v159b;
  int v160;
  __int64 v161;
  char* v162;
  __int64* v163;
  unsigned __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64* v170;
  int v171;
  __int64* v172;
  __int64 v173;
  int v174;
  __int64 v175;
  int v176;
  char* v177;
  unsigned __int64 v178;
  char* v179;
  __int64 v180;
  char* v181;
  __int64* v182;
  int v183;
  int v184;
  __int64* v185;
  int v186;
  unsigned int v187;
  int v188;
  unsigned int v189;
  char* v190;
  int v191;
  int v192;
  int v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  __int64 v197;
  __int64 v198;
  _WORD* v199;
  unsigned __int64 v200;
  __int64 v201;
  __int64 v202;
  unsigned __int16 v203;
  unsigned __int16 v204;
  int v205;
  int v206;
  int v207;
  int v208;
  int v209;
  int v210;
  int v211;
  __int16 v212;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  __int64* v216;
  __int16* v217;
  __int64 v218;
  __int64 v219;
  __int64 v220;
  int v221;
  int v222;
  __int64 v223;
  __int64 v224;
  unsigned __int64 v225;
  int v226;
  int v227;
  __int64 v228;
  __int64 v229;
  __int64 v230;
  __int64 v231;
  __int16* v232;
  __int16* v233;
  int v234;
  int v235;
  int v236;
  int v237;
  int v238;
  int v239;
  int v240;
  int v241;
  int v242;
  __int16* v243;
  int v244;
  __int64 v245;
  __int64 v246;
  __int16* v247;
  __int16* v248;
  int v249;
  int v250;
  int v251;
  int v252;
  int v253;
  int v254;
  int v255;
  int v256;
  int v257;
  __int16* v258;
  int v259;
  __int64 v260;
  __int64 v261;
  __int64 v262;
  __int64 v263;
  _WORD* v264;
  _WORD* v265;
  _WORD* v266;
  __int64 v267;
  __int64 v268;
  __int64 v269;
  __int64 v270;
  __int64 v271;
  __int64 v272;
  __int64 v273;
  __int64 v274;
  _WORD* v275;
  _WORD* v276;
  _WORD* v277;
  __int64 v278;
  __int64 v279;
  __int64 v280;
  __int64 v281;
  __int64 v282;
  __int64 v283;
  __int64 v284;
  __int64 v285;
  _WORD* v286;
  _WORD* v287;
  _WORD* v288;
  __int64 v289;
  __int64 v290;
  __int64 v291;
  __int64 v292;
  __int64 v293;
  __int64 v294;
  __int64 v295;
  __int64 v296;
  __int64 v297;
  __int64 v298;
  __int64 v299;
  __int64 v300;
  __int64 v301;
  __int64 v302;
  __int64 v303;
  _WORD* v304;
  _WORD* v305;
  _WORD* v306;
  __int64* v307;
  unsigned int v308;
  int v309;
  int v310;
  int v311;
  int v312;
  int v313;
  struct {
    int v314;
    int v315;
    unsigned __int64 v316;
    int v317;
    int v318;
    unsigned int v319;
    int v320;
    __int64 v321;
    __int64 v322;
    __int64 v323;
    __int16* v324;
    int v325;
    unsigned int v326;
    __int64 v327;
    __int64 v328;
    __int64 v329;
    __int64 v330;
    __int64 v331;
    __int64 v332;
    unsigned __int64 v333;
    char gap256_[4];
    int v334;
    __int64 v335;
    __int64 v336;
    __int64 v337;
    char* v338;
    char gap296_[4];
    int v339;
    _BOOL8 v340;
    __int64 v341;
    char gap320_[4];
    signed int v342;
    char* v343;
    char gap336_[4];
    int v344;
    __int64 v345;
    __int64 v346;
    char* v347;
    __int64* v348;
    __int64 v349;
    __int64 v350;
    __int64 v351;
    int v352;
    int v353;
    __int64 v354;
  } v314_;
  int v355;
  __int64 v356;
  _QWORD v357[2];
  _QWORD v358[2];
  _QWORD v359[2];
  _QWORD v360[5];

  v7 = *(_QWORD*)a1;
  v8 = *(_DWORD*)(a1 + 12);
  v359[1] = 0;
  memset(v360, 0, sizeof(v360));
  v359[0] = 0;
  v9 = *(_DWORD*)(v7 + 32);
  v356 = 0;
  if (v9 < 0) {
    return 0xFFFFFFFFLL;
  }
  v10 = v7;
  v11 = *(_DWORD*)(v7 + 4);
  v12 = *(unsigned int*)(v7 + 8);
  v13 = *(_QWORD*)(v7 + 24);
  v14 = v9 + 1;
  v16 = a1;
  v17 = 0;
  v18 = 0;
  v19 = (int)v12;
  v20 = *(int*)(a1 + 24);
  v21 = *(int*)(a1 + 28);
  v314_.v342 = v11;
  v314_.v347 = (char*)v10;
  v314_.v349 = v20;
  v22 = *(_DWORD*)(a1 + 16);
  v23 = (unsigned int)(*(_DWORD*)(a1 + 20) * a5);
  v24 = (v11 + 2048) * v8;
  v25 = 24 * v8;
  v26 = 2 * (int)v12;
  v27 = a1 + 4 * v24 + 2 * v25 + 92 + 2 * v26;
  v314_.v345 = a1 + 4 * v24 + 2 * v25 + 92;
  v314_.v346 = v21;
  while (*(_DWORD*)(v10 + 40) << v18 != (_DWORD)v23) {
    ++v18;
    v17 += 8;
    if (v14 == v18) {
      return 0xFFFFFFFFLL;
    }
  }
  result = 0xFFFFFFFFLL;
  v314_.v341 = v13;
  if (a3 <= 0x4FB && a4 != nullptr) {
    v29 = v11 + 2048;
    v30 = 0;
    v358[0] = 0;
    v358[1] = 0;
    v357[0] = 0;
    v357[1] = 0;
    if (v8 <= 1) {
      v31 = 1;
    }
    else {
      v31 = (unsigned int)v8;
    }
    v314_.v329 = v27 + 2 * v26;
    v314_.v330 = v27;
    v314_.v336 = (int)v23;
    v314_.v335 = v31;
    v32 = v31 & 7;
    v33 = 4 * v29;
    if (v8 >= 8) {
      v34 = 0;
      v35 = v16;
      v36 = v360;
      v37 = 8284 - 4 * v314_.v336;
      v38 = v359;
      v39 = -(__int64)((unsigned int)v314_.v335 & 0xFFFFFFF8);
      do {
        v40 = v35 + 92;
        v41 = v35 + v37;
        v34 -= 8;
        v35 += 32 * v29;
        v42 = v40 + v33;
        *(v36 - 4) = v40;
        *(v36 - 3) = v40 + v33;
        v43 = v41 + v33;
        *(v38 - 4) = v41;
        *(v38 - 3) = v41 + v33;
        v44 = v42 + v33;
        v45 = v43 + v33;
        v46 = v42 + v33 + v33;
        *(v36 - 2) = v44;
        *(v36 - 1) = v46;
        v47 = v45 + v33;
        *(v38 - 2) = v45;
        *(v38 - 1) = v45 + v33;
        v48 = v46 + v33;
        v49 = v47 + v33;
        v50 = v46 + v33 + v33;
        *v36 = v48;
        v36[1] = v50;
        *v38 = v49;
        v38[1] = v49 + v33;
        v51 = v49 + v33 + v33;
        v36[2] = v50 + v33;
        v36[3] = v50 + v33 + v33;
        v36 += 8;
        v38[2] = v51;
        v38[3] = v51 + v33;
        v38 += 8;
      } while (v39 != v34);
      v30 = -v34;
    }
    if (v32 != 0) {
      v52 = v314_.v336;
      v53 = &v357[v30];
      v54 = &v358[v30];
      v55 = v16 + 4 * v30 * v29;
      do {
        --v32;
        *v54++ = v55 + 92;
        v56 = v55 + 8284 - 4 * v52;
        v55 += v33;
        *v53++ = v56;
      } while (v32 != 0);
    }
    v355 = 0;
    v57 = *((_DWORD*)v314_.v347 + 3);
    if ((int)v314_.v346 < v57) {
      v57 = v314_.v346;
    }
    if (a2 == nullptr || a3 <= 1) {
      celt_decode_lost(v16, v23, v18);
      opus_celt_29540((__int64)v357, a4, v23, v8, *(_DWORD*)(v16 + 20),
                      (__int16*)v314_.v347 + 8, (_DWORD*)(v16 + 84), a7);
      return (unsigned int)((int)v23 / (signed __int32)*(_DWORD*)(v16 + 20));
    }
    v314_.v344 = v22;
    v314_.v319 = v57;
    *(_DWORD*)(v16 + 60) = *(_DWORD*)(v16 + 56) != 0;
    v314_.v320 = a7;
    v314_.v324 = a4;
    v314_.v323 = 2 * (int)v12;
    v314_.v327 = 24 * v8;
    if (a6 == nullptr) {
      ec_dec_init((__int64)v359, a2, a3);
      v22 = v314_.v344;
      a6 = v359;
      v25 = v314_.v327;
    }
    if (v22 == 1 && (int)v12 >= 1) {
      v58 = v12 & 7;
      if ((unsigned int)v12 >= 8) {
        v59 = 0;
        v62 = 4 * v24 + 2 * v25 + v16;
        v63 = v62 + 2 * v12;
        v64 = (__int16*)(v62 + 106);
        do {
          v65 = (_WORD*)(v63 + 2 * v59);
          v66 = *(v64 - 7);
          v59 += 8;
          if (v66 <= (__int16)v65[46]) {
            LOWORD(v66) = v65[46];
          }
          *(v64 - 7) = v66;
          v67 = *(v64 - 6);
          if (v67 <= (__int16)v65[47]) {
            LOWORD(v67) = v65[47];
          }
          *(v64 - 6) = v67;
          v68 = *(v64 - 5);
          if (v68 <= (__int16)v65[48]) {
            LOWORD(v68) = v65[48];
          }
          *(v64 - 5) = v68;
          v69 = *(v64 - 4);
          if (v69 <= (__int16)v65[49]) {
            LOWORD(v69) = v65[49];
          }
          *(v64 - 4) = v69;
          v70 = *(v64 - 3);
          if (v70 <= (__int16)v65[50]) {
            LOWORD(v70) = v65[50];
          }
          *(v64 - 3) = v70;
          v71 = *(v64 - 2);
          if (v71 <= (__int16)v65[51]) {
            LOWORD(v71) = v65[51];
          }
          *(v64 - 2) = v71;
          v72 = *(v64 - 1);
          if (v72 <= (__int16)v65[52]) {
            LOWORD(v72) = v65[52];
          }
          *(v64 - 1) = v72;
          v73 = *v64;
          v74 = (__int16)v65[53];
          if (v73 <= v74) {
            LOWORD(v73) = v74;
          }
          *v64 = v73;
          v64 += 8;
        } while ((v12 & 0x7FFFFFF8) != v59);
      }
      else {
        v59 = 0;
      }
      if ((v12 & 7) != 0) {
        v75 = (__int16*)(4 * v24 + 2 * v59 + 2 * v25 + v16 + 92);
        do {
          v76 = *v75;
          if (v76 <= v75[v12]) {
            LOWORD(v76) = v75[v12];
          }
          --v58;
          *v75++ = v76;
        } while (v58 != 0);
      }
    }
    v77 = *((_DWORD*)a6 + 8);
    v314_.v337 = v21;
    v314_.v339 = 8 * a3;
    v78 = *((_DWORD*)a6 + 6);
    v314_.v321 = v24;
    v79 = __clz(v77);
    v80 = v78 + v79 - 32;
    if (v80 < (int)(8 * a3)) {
      if (v80 == 1) {
        v81 = a6;
        v82 = ec_dec_bit_logp(a6, 15);
        if (v82) {
          v314_.v314 = v82;
          a6 = v81;
          v79 = __clz(*((_DWORD*)v81 + 8));
        LABEL_58:
          v83 = v314_.v339;
          v314_.v315 = 0;
          *((_DWORD*)a6 + 6) = v314_.v339 - v79 + 32;
          v80 = v83;
          goto LABEL_61;
        }
        v314_.v314 = 0;
        v80 = 1;
        a6 = v81;
        v314_.v315 = 1;
      }
      else {
        v314_.v314 = 0;
        v314_.v315 = 1;
      }
    LABEL_61:
      v314_.v348 = a6;
      v314_.v354 = v23;
      v314_.v325 = 0;
      if ((_DWORD)v314_.v349 != 0) {
        v84 = 0;
        v85 = 0;
      }
      else {
        v84 = 0;
        v85 = 0;
        if (v80 + 16 <= v314_.v339) {
          v86 = a6;
          v85 = ec_dec_bit_logp(a6, 1);
          if (v85 != 0) {
            v87 = ec_dec_uint(v86, 6u);
            v86 = v314_.v348;
            v314_.v325 = ec_dec_bits(v314_.v348, v87 + 4) + (16 << v87) - 1;
            v88 = ec_dec_bits(v314_.v348, 3u);
            if ((int)(*((_DWORD*)v86 + 6) + __clz(*((_DWORD*)v86 + 8)) - 30) <=
                v314_.v339) {
              v85 = ec_dec_icdf(v314_.v348, MovieData_a23e5, 2);
            }
            else {
              v85 = 0;
            }
            v84 = 3072 * v88 + 3072;
          }
          else {
            v84 = 0;
            v314_.v325 = 0;
          }
          v80 = *((_DWORD*)v86 + 6) + __clz(*((_DWORD*)v86 + 8)) - 32;
        }
      }
      v89 = v80 + 3;
      v314_.v352 = v84;
      v314_.v353 = v85;
      v314_.v340 = false;
      v314_.v332 = (int)v12;
      if (v18 != 0 && v89 <= v314_.v339) {
        v90 = ec_dec_bit_logp(v314_.v348, 3);
        v91 = *((_DWORD*)v314_.v348 + 8);
        v92 = *((_DWORD*)v314_.v348 + 6);
        v314_.v340 = v90;
        v19 = v314_.v332;
        v89 = v92 + __clz(v91) - 29;
      }
      v93 = false;
      v314_.v322 = v12;
      v314_.v334 = v8;
      v314_.v331 = v16;
      if (v314_.v340) {
        v94 = 1 << v18;
      }
      else {
        v94 = 0;
      }
      v95 = v314_.v348;
      v314_.v318 = v94;
      if (v89 <= v314_.v339) {
        v93 = ec_dec_bit_logp(v314_.v348, 3);
      }
      v96 = v314_.v346;
      v97 = v314_.v349;
      unquant_coarse_energy((__int64)v314_.v347, v314_.v349, v314_.v346,
                            v314_.v345, v93, (__int64)v314_.v348, v314_.v344,
                            v18);
      v314_.v328 =
          (__int64)__builtin_alloca((4 * v19 + 15) & 0xFFFFFFFFFFFFFFF0LL);
      v314_.v333 = 4 * v19;
      memset_plt(v314_.v328, 0, 4 * v19);
      v98 = 0;
      v99 = 8 * *((_DWORD*)v95 + 2);
      v100 = *((_DWORD*)v95 + 6) + __clz(*((_DWORD*)v95 + 8)) - 32;
      if (v314_.v340) {
        v101 = 2;
      }
      else {
        v101 = 4;
      }
      v102 = v18 == 0 || v100 + v101 + 1 > v99;
      v103 = !v102;
      LODWORD(v314_.v351) = v103;
      if (v97 < v96) {
        v104 = v99 - v314_.v351;
        v105 = v314_.v340 ? 4 : 5;
        if (v100 + v101 <= v104) {
          v98 = ec_dec_bit_logp(v95, v101);
          v100 = *((_DWORD*)v95 + 6) + __clz(*((_DWORD*)v95 + 8)) - 32;
        }
        else {
          v98 = 0;
        }
        v106 = v314_.v349;
        v107 = v314_.v346;
        v108 = v314_.v328;
        v109 = v314_.v349 + 1;
        *(_DWORD*)(v314_.v328 + 4 * v314_.v349) = v98;
        if (v107 != v109) {
          v113 = v98;
          v114 = ~(_DWORD)v106 + v107;
          v115 = (_DWORD*)(v108 + 4 * v106 + 4);
          do {
            if (v100 + v105 <= v104) {
              v113 ^= ec_dec_bit_logp(v95, v105);
              v98 |= v113;
              v100 = *((_DWORD*)v95 + 6) + __clz(*((_DWORD*)v95 + 8)) - 32;
            }
            *v115++ = v113;
            --v114;
          } while (v114 != 0);
        }
      }
      v110 = v314_.v351;
      if ((_DWORD)v314_.v351 != 0) {
        v111 = v314_.v337;
        v112 = v314_.v346;
        if (MovieData_a231a[v98 + (__int64)(4 * (int)v314_.v340) + v17] ==
            MovieData_a231a[4 * v314_.v340 + 2 + v98 + v17]) {
          v110 = 0;
          if ((int)v314_.v349 >= (int)v314_.v346) {
            goto LABEL_113;
          }
        }
        else {
          v110 = 2 * ec_dec_bit_logp(v95, 1);
          if ((int)v314_.v349 >= v112) {
            goto LABEL_113;
          }
        }
      }
      else {
        v111 = v314_.v337;
        v112 = v314_.v346;
        if ((int)v314_.v349 >= (int)v314_.v346) {
          goto LABEL_113;
        }
      }
      v116 = v314_.v328;
      v117 = v110 + 4 * v314_.v340;
      v118 = v314_.v349;
      v119 = ((_BYTE)v112 - (_BYTE)v314_.v349) & 7;
      if ((((_BYTE)v112 - (_BYTE)v314_.v349) & 7) != 0) {
        v118 = v314_.v349;
        do {
          --v119;
          *(_DWORD*)(v116 + 4 * v118) =
              MovieData_a231a[*(int*)(v116 + 4 * v118) + (__int64)v117 + v17];
          ++v118;
        } while (v119 != 0);
      }
      if ((unsigned __int64)(v314_.v349 - v111) <= 0xFFFFFFFFFFFFFFF8LL) {
        v120 = v111 - v118;
        v121 = (int*)(v314_.v328 + 4 * v118 + 16);
        do {
          v120 -= 8;
          v122 = MovieData_a231a[v117 + (__int64)*(v121 - 3) + v17];
          *(v121 - 4) = MovieData_a231a[v117 + (__int64)*(v121 - 4) + v17];
          *(v121 - 3) = v122;
          v123 = MovieData_a231a[v117 + (__int64)*(v121 - 1) + v17];
          *(v121 - 2) = MovieData_a231a[v117 + (__int64)*(v121 - 2) + v17];
          *(v121 - 1) = v123;
          v124 = MovieData_a231a[v117 + (__int64)v121[1] + v17];
          *v121 = MovieData_a231a[v117 + (__int64)*v121 + v17];
          v121[1] = v124;
          v125 = MovieData_a231a[v117 + (__int64)v121[3] + v17];
          v121[2] = MovieData_a231a[v117 + (__int64)v121[2] + v17];
          v121[3] = v125;
          v121 += 8;
        } while (v120 != 0);
      }
    LABEL_113:
      if ((int)(*((_DWORD*)v95 + 6) + __clz(*((_DWORD*)v95 + 8)) - 28) <=
          v314_.v339) {
        v314_.v317 = ec_dec_icdf(v95, MovieData_a23e8, 5);
      }
      else {
        v314_.v317 = 2;
      }
      v126 = v314_.v333;
      v127 = (v314_.v333 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      v314_.v351 = (__int64)__builtin_alloca(v127);
      memset_plt(v314_.v351, 0, v314_.v333);
      init_caps((__int64)v314_.v347, v314_.v351, v18, v314_.v344);
      v128 = (char*)__builtin_alloca(v127);
      v314_.v316 = v127;
      memset_plt((__int64)v128, 0, v126);
      v129 = a3 << 6;
      v130 = ec_tell_frac((__int64)v95);
      v131 = v314_.v349;
      v132 = v130;
      v314_.v338 = v128;
      v314_.v326 = v129;
      if ((int)v314_.v349 < v112) {
        v133 = v314_.v341;
        v134 = 6;
        v135 = v129;
        while (1) {
          v136 = v131 + 1;
          v137 = ((*(__int16*)(v133 + 2 * (v131 + 1)) -
                   *(__int16*)(v133 + 2 * v131)) *
                  v314_.v344)
                 << v18;
          v138 = 8 * v137;
          if (v137 <= 48) {
            v137 = 48;
          }
          if (v138 >= v137) {
            v139 = v137;
          }
          else {
            v139 = v138;
          }
          if (v132 + 8 * v134 >= v135 || *(int*)(v314_.v351 + 4 * v131) < 1) {
            goto LABEL_119;
          }
          LODWORD(v314_.v350) = v135;
          LODWORD(v314_.v343) = v134;
          v140 = ec_dec_bit_logp(v95, v134);
          v132 = ec_tell_frac((__int64)v95);
          if (v140) {
            v141 = v314_.v350 - v139;
            if (v132 + 8 >= (int)v314_.v350 - v139 ||
                v139 >= (signed __int32)*(_DWORD*)(v314_.v351 + 4 * v131)) {
              v143 = v139;
            }
            else {
              v142 = -2 * v139;
              v143 = v139;
              do {
                v144 = v314_.v348;
                v145 = ec_dec_bit_logp(v314_.v348, 1);
                v132 = ec_tell_frac((__int64)v144);
                if (!v145) {
                  break;
                }
                if (v132 + 8 >= (int)v314_.v350 + v142) {
                  v143 = -v142;
                  v141 = v314_.v350 + v142;
                  break;
                }
                v143 += v139;
                v141 -= v139;
                v142 -= v139;
              } while (v143 <
                       (signed __int32)*(_DWORD*)(v314_.v351 + 4 * v131));
            }
            v134 = (int)v314_.v343;
            v128 = v314_.v338;
            v95 = v314_.v348;
            v135 = v141;
            *(_DWORD*)&v314_.v338[4 * v131] = v143;
            v133 = v314_.v341;
            if (v134 <= 3) {
              v146 = 3;
            }
            else {
              v146 = v134;
            }
            v102 = v143 <= 0;
            v111 = v314_.v337;
            v147 = v146 - 1;
            if (!v102) {
              v134 = v147;
            }
            ++v131;
            if (v136 == v314_.v337) {
              goto LABEL_145;
            }
          }
          else {
            v133 = v314_.v341;
            v128 = v314_.v338;
            v134 = (int)v314_.v343;
            v135 = v314_.v350;
          LABEL_119:
            *(_DWORD*)&v128[4 * v131++] = 0;
            if (v136 == v111) {
              goto LABEL_145;
            }
          }
        }
      }
      v135 = v129;
    LABEL_145:
      v314_.v350 = (__int64)__builtin_alloca(v314_.v316);
      v148 = v135;
      memset_plt(v314_.v350, 0, v314_.v333);
      if (v132 + 48 <= v148) {
        v149 = ec_dec_icdf(v95, MovieData_a23ec, 7);
      }
      else {
        v149 = 5;
      }
      v150 = v314_.v354;
      v151 = v314_.v326;
      v152 = ec_tell_frac((__int64)v95);
      v153 = v314_.v346;
      v154 = false;
      v155 = v151 + ~v152;
      if (v314_.v340) {
        v156 = 0;
        if (v18 >= 2) {
          v154 = v155 >= (int)v17 + 16;
          if (v155 < (int)v17 + 16) {
            v156 = 0;
          }
          else {
            v156 = 8;
          }
        }
      }
      else {
        v156 = 0;
      }
      LODWORD(v314_.v341) = v154;
      v157 = v155 - v156;
      LODWORD(v314_.v316) = v156;
      v158 = v314_.v333;
      v159 = (char*)__builtin_alloca((v314_.v333 + 15) & 0xFFFFFFFFFFFFFFF0LL);
      memset_plt((__int64)v159, 0, v314_.v333);
      v159b = (char*)__builtin_alloca((v158 + 15) & 0xFFFFFFFFFFFFFFF0LL);
      memset_plt((__int64)v159b, 0, v158);
      v160 = v314_.v344;
      v314_.v343 = v159b;
      LODWORD(v158) = v314_.v349;
      v161 = v314_.v350;
      v162 = v314_.v347;
      v313 = v157;
      v163 = v314_.v348;
      LODWORD(v314_.v351) =
          opus_41040(v314_.v347, v314_.v349, v153, v314_.v338, v314_.v351, v149,
                     (int*)&v356 + 1, (_BOOL4*)&v356, v313,
                     (unsigned int*)&v355, (__int64)v159, v314_.v350,
                     (__int64)v159b, v314_.v344, v18, v314_.v348, 0, 0, 0);
      unquant_fine_energy((__int64)v162, v158, v153, v314_.v345, v161, v163,
                          v160);
      v164 = 4LL * (v314_.v342 / 2 - v150 + 2048);
      v165 = v314_.v335 & 7;
      if (v314_.v334 >= 8) {
        v166 = v314_.v336;
        v168 = 0;
        v169 = -(__int64)((unsigned int)v314_.v335 & 0xFFFFFFF8);
        v170 = v360;
        do {
          memmove_plt(*(v170 - 4), *(v170 - 4) + 4 * v166, v164);
          memmove_plt(*(v170 - 3), *(v170 - 3) + 4 * v166, v164);
          memmove_plt(*(v170 - 2), *(v170 - 2) + 4 * v166, v164);
          memmove_plt(*(v170 - 1), *(v170 - 1) + 4 * v166, v164);
          memmove_plt(*v170, *v170 + 4 * v166, v164);
          memmove_plt(v170[1], v170[1] + 4 * v166, v164);
          memmove_plt(v170[2], v170[2] + 4 * v166, v164);
          memmove_plt(v170[3], v170[3] + 4 * v166, v164);
          v168 -= 8;
          v170 += 8;
        } while (v169 != v168);
        v167 = -v168;
        v153 = v314_.v346;
      }
      else {
        v166 = v314_.v336;
        v167 = 0;
      }
      v171 = v314_.v332;
      if (v165 != 0) {
        v172 = &v358[v167];
        do {
          v173 = *v172++;
          memmove_plt(v173, v173 + 4 * v166, v164);
          --v165;
        } while (v165 != 0);
      }
      v174 = v314_.v344;
      v175 = v166;
      v176 = v171 * v314_.v344;
      v177 = (char*)__builtin_alloca((v176 + 15LL) & 0xFFFFFFFFFFFFFFF0LL);
      memset_plt((__int64)v177, 0, v176);
      v178 = 2LL * (int)v314_.v354 * v174;
      v179 = (char*)__builtin_alloca((v178 + 15) & 0xFFFFFFFFFFFFFFF0LL);
      memset_plt((__int64)v179, 0, v178);
      if (v174 == 2) {
        v180 = (__int64)&v179[2 * v175];
      }
      else {
        v180 = 0;
      }
      v181 = v314_.v347;
      v182 = v314_.v348;
      v183 = v314_.v349;
      quant_all_bands(0, (__int64)v314_.v347, v314_.v349, v153, (__int64)v179,
                      v180, (__int64)v177, 0, (__int64)v159, v314_.v318,
                      v314_.v317, v356, HIDWORD(v356), v314_.v328,
                      v314_.v326 - v314_.v316, v355, (__int64)v314_.v348, v18,
                      v314_.v351, (unsigned int*)(v314_.v331 + 44), 0,
                      *(_DWORD*)(v314_.v331 + 40), *(_DWORD*)(v314_.v331 + 36));
      if ((_DWORD)v314_.v341 != 0) {
        v184 = ec_dec_bits(v182, 1u);
        v185 = v182;
        v186 = *((_DWORD*)v182 + 6);
        v187 = *((_DWORD*)v182 + 8);
        v188 = v184;
        unquant_energy_finalise((__int64)v181, v183, v153, v314_.v345,
                                v314_.v350, (__int64)v314_.v343,
                                v314_.v339 - v186 - __clz(v187) + 32, v185,
                                v314_.v344);
        if (v188 != 0) {
          anti_collapse((__int64)v314_.v347, (__int64)v179, (__int64)v177, v18,
                        v314_.v344, v314_.v354, v314_.v349, v153, v314_.v345,
                        v314_.v330, v314_.v329, (__int64)v159,
                        *(_DWORD*)(v314_.v331 + 44),
                        *(_DWORD*)(v314_.v331 + 40));
        }
        v189 = v314_.v342;
        if ((v314_.v315 & 1) != 0) {
          goto LABEL_169;
        }
      }
      else {
        unquant_energy_finalise((__int64)v181, v183, v153, v314_.v345,
                                v314_.v350, (__int64)v314_.v343,
                                v314_.v339 - *((_DWORD*)v182 + 6) -
                                    __clz(*((_DWORD*)v182 + 8)) + 32,
                                v182, v314_.v344);
        v189 = v314_.v342;
        if ((v314_.v315 & 1) != 0) {
        LABEL_169:
          v190 = v314_.v347;
          v191 = 0;
          v16 = v314_.v331;
          v192 = v314_.v334;
          v193 = v314_.v325;
        LABEL_181:
          celt_synthesis(v190, (__int64)v179, v357, v314_.v345, v314_.v349,
                         v314_.v319, v314_.v344, v192, v314_.v340, v18,
                         *(_DWORD*)(v16 + 20), v191, *(_DWORD*)(v16 + 40));
          v200 = 0;
          v201 = 8 * v314_.v335;
          do {
            v202 = v357[v200 / 8];
            v203 = *(_WORD*)(v16 + 72);
            v204 = *(_WORD*)(v16 + 74);
            if (*(int*)(v16 + 64) <= 15) {
              v205 = 15;
            }
            else {
              v205 = *(_DWORD*)(v16 + 64);
            }
            v207 = *(_DWORD*)(v16 + 76);
            v206 = *(_DWORD*)(v16 + 80);
            if (*(int*)(v16 + 68) <= 15) {
              v208 = 15;
            }
            else {
              v208 = *(_DWORD*)(v16 + 68);
            }
            *(_DWORD*)(v16 + 64) = v205;
            *(_DWORD*)(v16 + 68) = v208;
            comb_filter(v202, v202, v208, v205, *((_DWORD*)v190 + 10), v204,
                        v203, v206, v207, *((__int16**)v190 + 8), v189);
            if (v18 != 0) {
              comb_filter(v202 + 4LL * *((int*)v190 + 10),
                          v202 + 4LL * *((int*)v190 + 10), *(_DWORD*)(v16 + 64),
                          v193, v314_.v354 - *((_DWORD*)v190 + 10),
                          *(_WORD*)(v16 + 72), v314_.v352, *(_DWORD*)(v16 + 76),
                          v314_.v353, *((__int16**)v190 + 8), v189);
            }
            v200 += 8LL;
          } while (v201 != v200);
          v209 = *(_DWORD*)(v16 + 64);
          v210 = *(_DWORD*)(v16 + 76);
          *(_WORD*)(v16 + 74) = *(_WORD*)(v16 + 72);
          *(_DWORD*)(v16 + 64) = v193;
          *(_DWORD*)(v16 + 68) = v209;
          v212 = v314_.v352;
          v211 = v314_.v353;
          *(_WORD*)(v16 + 72) = v314_.v352;
          *(_DWORD*)(v16 + 76) = v211;
          *(_DWORD*)(v16 + 80) = v210;
          if (v18 != 0) {
            *(_DWORD*)(v16 + 68) = v193;
            *(_WORD*)(v16 + 74) = v212;
            *(_DWORD*)(v16 + 80) = v211;
          }
          LODWORD(v23) = v314_.v354;
          v213 = v314_.v346;
          v214 = v314_.v332;
          v215 = v314_.v321;
          if (v314_.v344 == 1) {
            memcpy_plt(v314_.v345 + 2 * v314_.v332, v314_.v345, 2 * v314_.v332);
          }
          v216 = v314_.v348;
          v217 = v314_.v324;
          v218 = v314_.v323;
          v219 = v314_.v327;
          v220 = v314_.v330;
          if (v314_.v340) {
            v221 = v314_.v349;
            if ((int)v214 >= 1) {
              if ((int)v314_.v323 <= 1) {
                v222 = 1;
              }
              else {
                v222 = v314_.v323;
              }
              v223 = v222 & 7;
              if ((int)v314_.v323 >= 8) {
                v230 = 0;
                v231 = -(__int64)(v222 & 0xFFFFFFF8);
                v232 = (__int16*)(4 * v215 + 2 * v314_.v327 + v16 + 106);
                v233 = &v232[v314_.v323];
                do {
                  v234 = *(v233 - 7);
                  v230 -= 8;
                  if (v234 >= *(v232 - 7)) {
                    LOWORD(v234) = *(v232 - 7);
                  }
                  *(v233 - 7) = v234;
                  v235 = *(v233 - 6);
                  if (v235 >= *(v232 - 6)) {
                    LOWORD(v235) = *(v232 - 6);
                  }
                  *(v233 - 6) = v235;
                  v236 = *(v233 - 5);
                  if (v236 >= *(v232 - 5)) {
                    LOWORD(v236) = *(v232 - 5);
                  }
                  *(v233 - 5) = v236;
                  v237 = *(v233 - 4);
                  if (v237 >= *(v232 - 4)) {
                    LOWORD(v237) = *(v232 - 4);
                  }
                  *(v233 - 4) = v237;
                  v238 = *(v233 - 3);
                  if (v238 >= *(v232 - 3)) {
                    LOWORD(v238) = *(v232 - 3);
                  }
                  *(v233 - 3) = v238;
                  v239 = *(v233 - 2);
                  if (v239 >= *(v232 - 2)) {
                    LOWORD(v239) = *(v232 - 2);
                  }
                  *(v233 - 2) = v239;
                  v240 = *(v233 - 1);
                  if (v240 >= *(v232 - 1)) {
                    LOWORD(v240) = *(v232 - 1);
                  }
                  *(v233 - 1) = v240;
                  v241 = *v233;
                  v242 = *v232;
                  v232 += 8;
                  if (v241 >= v242) {
                    LOWORD(v241) = v242;
                  }
                  *v233 = v241;
                  v233 += 8;
                } while (v231 != v230);
                v224 = -v230;
              }
              else {
                v224 = 0;
              }
              if (v223 != 0) {
                v243 = (__int16*)(4 * v215 + 2 * v224 + 2 * v219 + v16 + 92);
                do {
                  v244 = v243[v218];
                  if (v244 >= *v243) {
                    LOWORD(v244) = *v243;
                  }
                  --v223;
                  v243[v218] = v244;
                  ++v243;
                } while (v223 != 0);
              }
            }
          }
          else {
            v225 = 2 * v314_.v323;
            memcpy_plt(v314_.v329, v314_.v330, 2 * v314_.v323);
            memcpy_plt(v220, v314_.v345, v225);
            v221 = v314_.v349;
            v219 = v314_.v327;
            v218 = v314_.v323;
            v217 = v314_.v324;
            if (*(int*)(v16 + 56) >= 10) {
              v226 = 1024;
            }
            else {
              v226 = 0x10000 << v18 >> 16;
            }
            if ((int)v314_.v322 >= 1) {
              if ((int)v314_.v323 <= 1) {
                v227 = 1;
              }
              else {
                v227 = v314_.v323;
              }
              v228 = v227 & 7;
              if ((int)v314_.v323 >= 8) {
                v245 = 0;
                v246 = -(__int64)(v227 & 0xFFFFFFF8);
                v247 = (__int16*)(4 * v215 + 2 * v314_.v327 + v16 + 106);
                v248 = &v247[3 * (int)v314_.v323];
                do {
                  v245 -= 8;
                  v249 = v226 + *(v248 - 7);
                  if (v249 >= *(v247 - 7)) {
                    LOWORD(v249) = *(v247 - 7);
                  }
                  *(v248 - 7) = v249;
                  v250 = v226 + *(v248 - 6);
                  if (v250 >= *(v247 - 6)) {
                    LOWORD(v250) = *(v247 - 6);
                  }
                  *(v248 - 6) = v250;
                  v251 = v226 + *(v248 - 5);
                  if (v251 >= *(v247 - 5)) {
                    LOWORD(v251) = *(v247 - 5);
                  }
                  *(v248 - 5) = v251;
                  v252 = v226 + *(v248 - 4);
                  if (v252 >= *(v247 - 4)) {
                    LOWORD(v252) = *(v247 - 4);
                  }
                  *(v248 - 4) = v252;
                  v253 = v226 + *(v248 - 3);
                  if (v253 >= *(v247 - 3)) {
                    LOWORD(v253) = *(v247 - 3);
                  }
                  *(v248 - 3) = v253;
                  v254 = v226 + *(v248 - 2);
                  if (v254 >= *(v247 - 2)) {
                    LOWORD(v254) = *(v247 - 2);
                  }
                  *(v248 - 2) = v254;
                  v255 = v226 + *(v248 - 1);
                  if (v255 >= *(v247 - 1)) {
                    LOWORD(v255) = *(v247 - 1);
                  }
                  *(v248 - 1) = v255;
                  v256 = *v247;
                  v247 += 8;
                  v257 = v226 + *v248;
                  if (v257 >= v256) {
                    LOWORD(v257) = v256;
                  }
                  *v248 = v257;
                  v248 += 8;
                } while (v246 != v245);
                v229 = -v245;
              }
              else {
                v229 = 0;
              }
              if (v228 != 0) {
                v258 = (__int16*)(4 * v215 + 2 * v229 + 2 * v219 + v16 + 92);
                do {
                  v259 = v226 + v258[3 * v218];
                  if (v259 >= *v258) {
                    LOWORD(v259) = *v258;
                  }
                  --v228;
                  v258[3 * v218] = v259;
                  ++v258;
                } while (v228 != 0);
              }
            }
          }
          if (v221 >= 1) {
            if ((unsigned int)v221 >= 8) {
              v260 = 0;
              v261 = 4 * v215 + 2 * v219 + v16;
              v262 = v261 + 4 * v218;
              v263 = v261 + 2 * v218;
              v264 = (_WORD*)(v261 + 106);
              do {
                v265 = (_WORD*)(v262 + 2 * v260);
                v266 = (_WORD*)(v263 + 2 * v260);
                *(v264 - 7) = 0;
                v260 += 8;
                v265[46] = -28672;
                v266[46] = -28672;
                *(v264 - 6) = 0;
                v265[47] = -28672;
                v266[47] = -28672;
                *(v264 - 5) = 0;
                v265[48] = -28672;
                v266[48] = -28672;
                *(v264 - 4) = 0;
                v265[49] = -28672;
                v266[49] = -28672;
                *(v264 - 3) = 0;
                v265[50] = -28672;
                v266[50] = -28672;
                *(v264 - 2) = 0;
                v265[51] = -28672;
                v266[51] = -28672;
                *(v264 - 1) = 0;
                v265[52] = -28672;
                v266[52] = -28672;
                *v264 = 0;
                v264 += 8;
                v265[53] = -28672;
                v266[53] = -28672;
              } while ((v221 & 0x7FFFFFF8) != v260);
            }
            else {
              v260 = 0;
            }
            if ((v221 & 7) != 0) {
              v267 = 0;
              v268 = 4 * v215 + 2 * v260 + 2 * v219 + v16 + 92;
              do {
                *(_WORD*)(v268 + v267) = 0;
                *(_WORD*)(v268 + 4 * v218 + v267) = -28672;
                *(_WORD*)(v268 + 2 * v218 + v267) = -28672;
                v267 += 2;
              } while (2LL * (v221 & 7) != v267);
            }
          }
          if ((int)v213 < (int)v214) {
            v269 = v314_.v337;
            v270 = v213;
            if ((((_BYTE)v214 - (_BYTE)v213) & 7) != 0) {
              v271 = 0;
              v272 = 4 * v215 + 2 * v314_.v337 + 2 * v219 + v16 + 92;
              do {
                v273 = 2 * v271++;
                *(_WORD*)(v272 + v273) = 0;
                *(_WORD*)(v272 + 4 * v218 + v273) = -28672;
                *(_WORD*)(v272 + 2 * v218 + v273) = -28672;
              } while ((((_BYTE)v214 - (_BYTE)v213) & 7) != v271);
              v269 = v314_.v337;
              v270 = v314_.v337 + v271;
            }
            if ((unsigned __int64)(v269 - v214) <= 0xFFFFFFFFFFFFFFF8LL) {
              v274 = v214 - v270;
              v275 = (_WORD*)(4 * v215 + 2 * v270 + 2 * v219 + v16 + 106);
              v276 = &v275[v218];
              v277 = &v275[2 * v218];
              do {
                *(v275 - 7) = 0;
                *(v277 - 7) = -28672;
                v274 -= 8;
                *(v276 - 7) = -28672;
                *(v275 - 6) = 0;
                *(v277 - 6) = -28672;
                *(v276 - 6) = -28672;
                *(v275 - 5) = 0;
                *(v277 - 5) = -28672;
                *(v276 - 5) = -28672;
                *(v275 - 4) = 0;
                *(v277 - 4) = -28672;
                *(v276 - 4) = -28672;
                *(v275 - 3) = 0;
                *(v277 - 3) = -28672;
                *(v276 - 3) = -28672;
                *(v275 - 2) = 0;
                *(v277 - 2) = -28672;
                *(v276 - 2) = -28672;
                *(v275 - 1) = 0;
                *(v277 - 1) = -28672;
                *(v276 - 1) = -28672;
                *v275 = 0;
                v275 += 8;
                *v277 = -28672;
                v277 += 8;
                *v276 = -28672;
                v276 += 8;
              } while (v274 != 0);
            }
          }
          if (v221 >= 1) {
            v278 = v221 & 7;
            if ((unsigned int)v221 >= 8) {
              v280 = 0;
              v279 = 0;
              v281 = (2 * v221) & 0xFFFFFFF0;
              v282 = 4 * v215 + 2 * v214 + 2 * v219;
              v283 = v16 + v282;
              v284 = v282 + 4 * v218 + v16 + 92;
              v285 = v282 + 2 * v218 + v16 + 92;
              do {
                v286 = (_WORD*)(v283 + v280);
                v287 = (_WORD*)(v284 + v280);
                v288 = (_WORD*)(v285 + v280);
                v279 += 8;
                v286[46] = 0;
                v280 += 16;
                *v287 = -28672;
                *v288 = -28672;
                v286[47] = 0;
                v287[1] = -28672;
                v288[1] = -28672;
                v286[48] = 0;
                v287[2] = -28672;
                v288[2] = -28672;
                v286[49] = 0;
                v287[3] = -28672;
                v288[3] = -28672;
                v286[50] = 0;
                v287[4] = -28672;
                v288[4] = -28672;
                v286[51] = 0;
                v287[5] = -28672;
                v288[5] = -28672;
                v286[52] = 0;
                v287[6] = -28672;
                v288[6] = -28672;
                v286[53] = 0;
                v287[7] = -28672;
                v288[7] = -28672;
              } while (v281 != v280);
            }
            else {
              v279 = 0;
            }
            if (v278 != 0) {
              v289 = 2 * v278;
              v290 = 0;
              v291 = 4 * v215 + 2 * (v279 + v214) + 2 * v219 + v16 + 92;
              do {
                *(_WORD*)(v291 + v290) = 0;
                *(_WORD*)(v291 + 4 * v218 + v290) = -28672;
                *(_WORD*)(v291 + 2 * v218 + v290) = -28672;
                v290 += 2;
              } while (v289 != v290);
            }
          }
          if ((int)v213 < (int)v314_.v322) {
            v292 = v314_.v337;
            if ((((_BYTE)v214 - (_BYTE)v213) & 7) != 0) {
              v293 = 0;
              v294 = 4 * v215 + 2 * (v314_.v337 + v214) + 2 * v219 + v16 + 92;
              do {
                v295 = 2 * v293++;
                *(_WORD*)(v294 + v295) = 0;
                *(_WORD*)(v294 + 4 * v218 + v295) = -28672;
                *(_WORD*)(v294 + 2 * v218 + v295) = -28672;
              } while ((((_BYTE)v214 - (_BYTE)v213) & 7) != v293);
              v292 = v314_.v337;
              v213 = v314_.v337 + v293;
            }
            if ((unsigned __int64)(v292 - v214) <= 0xFFFFFFFFFFFFFFF8LL) {
              v296 = v214 - v213;
              v297 = v213 + v214 + v219;
              v298 = 4 * v215 + 2 * (v213 + v214) + 2 * v219 + 92;
              v299 = 4 * (v215 + v218) + 2 * v297 + 94;
              v300 = v298 + 4 * v218;
              v301 = v298 + 2 * v218;
              v302 = 4 * v215 + 2 * (v297 + v218) + 94;
              v303 = 4 * v215 + 2 * v297 + 94;
              do {
                *(_WORD*)(v16 + v298) = 0;
                *(_WORD*)(v16 + v300) = -28672;
                v304 = (_WORD*)(v16 + v303);
                v305 = (_WORD*)(v16 + v299);
                v306 = (_WORD*)(v16 + v302);
                *(_WORD*)(v16 + v301) = -28672;
                v298 += 16;
                *v304 = 0;
                v300 += 16;
                v301 += 16;
                *v305 = -28672;
                v296 -= 8;
                v302 += 16;
                *v306 = -28672;
                v299 += 16;
                v303 += 16;
                v304[1] = 0;
                v305[1] = -28672;
                v306[1] = -28672;
                v304[2] = 0;
                v305[2] = -28672;
                v306[2] = -28672;
                v304[3] = 0;
                v305[3] = -28672;
                v306[3] = -28672;
                v304[4] = 0;
                v305[4] = -28672;
                v306[4] = -28672;
                v304[5] = 0;
                v305[5] = -28672;
                v306[5] = -28672;
                v304[6] = 0;
                v305[6] = -28672;
                v306[6] = -28672;
              } while (v296 != 0);
            }
          }
          v307 = v216;
          v308 = *((_DWORD*)v216 + 8);
          v309 = *(_DWORD*)(v16 + 20);
          v310 = v314_.v334;
          v311 = v314_.v320;
          *(_DWORD*)(v16 + 44) = v308;
          opus_celt_29540((__int64)v357, v217, v23, v310, v309,
                          (__int16*)v190 + 8, (_DWORD*)(v16 + 84), v311);
          v312 = *((_DWORD*)v307 + 6);
          *(_DWORD*)(v16 + 56) = 0;
          if ((int)(v312 + __clz(v308) - 32) > v314_.v339) {
            return 4294967293LL;
          }
          if (*((_DWORD*)v307 + 12) != 0) {
            *(_DWORD*)(v16 + 48) = 1;
          }
          return (unsigned int)((int)v23 /
                                (signed __int32)*(_DWORD*)(v16 + 20));
        }
      }
      v16 = v314_.v331;
      v192 = v314_.v334;
      v193 = v314_.v325;
      if (v176 < 1) {
        v190 = v314_.v347;
        v191 = v314_.v314;
      }
      else {
        v194 = v176 & 7;
        v191 = v314_.v314;
        v195 = 0;
        if ((unsigned int)v176 >= 8) {
          v196 = v314_.v321;
          v197 = v314_.v327;
          v198 = v314_.v345 + 14;
          do {
            *(_QWORD*)(v198 - 14) = 0x9000900090009000LL;
            *(_QWORD*)(v198 - 6) = 0x9000900090009000LL;
            v195 -= 8;
            v198 += 16;
          } while (-(__int64)(v176 & 0x7FFFFFF8) != v195);
          v190 = v314_.v347;
          v195 = -v195;
        }
        else {
          v190 = v314_.v347;
          v196 = v314_.v321;
          v197 = v314_.v327;
        }
        if (v194 != 0) {
          v199 = (_WORD*)(4 * v196 + 2 * v195 + 2 * v197 + v16 + 92);
          do {
            *v199++ = -28672;
            --v194;
          } while (v194 != 0);
        }
      }
      goto LABEL_181;
    }
    v314_.v314 = 1;
    goto LABEL_58;
  }
  return result;
}

#pragma GCC visibility pop
