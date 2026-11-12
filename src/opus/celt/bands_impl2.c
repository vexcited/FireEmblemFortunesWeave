#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 MovieRoutine_23220(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 celt_sqrt(_QWORD);
__int64 ec_dec_bits(_QWORD, _QWORD);
__int64 ec_enc_bits(_QWORD, _QWORD, _QWORD);
__int64 ec_tell_frac(__int64);
__int64 interleave_hadamard(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 quant_band_stereo(__int64, __int16*, __int16*, unsigned int, int,
                          unsigned int, __int64, unsigned int, _WORD*, __int64,
                          int);
__int64 quant_partition(_QWORD, _QWORD, _QWORD, _QWORD);
extern _UNKNOWN* MovieData_c09c8;
extern unsigned __int8 MovieData_a2220[16];
extern unsigned __int8 MovieData_a2250[16];
__int64 denormalise_bands(__int64 a1, __int64 a2, int* a3, __int64 a4, int a5,
                          int a6, int a7, int a8, int a9);
__int64 bands_20220(__int64 result, int a2, unsigned int a3);
__int64 quant_all_bands(unsigned int a1, __int64 a2, int a3, __int64 a4,
                        __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                        __int64 a9, int a10, int a11, int a12, unsigned int a13,
                        __int64 a14, int a15, int a16, __int64 a17,
                        unsigned int a18, unsigned int a19, unsigned int* a20,
                        int a21, int a22, int a23);
__int64 bands_21840(int* a1, __int16* a2, int a3, unsigned int a4, int a5,
                    __int64 a6, __int64 a7, _WORD* a8, __int64 a9, __int64 a10,
                    int a11);

__int64 denormalise_bands(__int64 a1, __int64 a2, int* a3, __int64 a4, int a5,
                          int a6, int a7, int a8, int a9)
{
  __int64 v9;
  int v11;
  int v14;
  int v15;
  int v16;
  int v18;
  __int64 v19;
  int v20;
  int* v21;
  __int16* v22;
  char* v23;
  int v24;
  __int64 v25;
  int v26;
  int v27;
  int v28;
  char v30;
  unsigned int v31;
  bool v32;
  char v33;
  int v34;
  int v35;
  int v36;
  __int64 v38;

  v9 = *(_QWORD*)(a1 + 24);
  v11 = a9;
  v14 = *(_DWORD*)(a1 + 40) * a7;
  v15 = v14 / a8;
  if (a7 * *(__int16*)(v9 + 2LL * a6) < v14 / a8) {
    v15 = a7 * *(__int16*)(v9 + 2LL * a6);
  }
  if (a8 == 1) {
    v16 = a7 * *(__int16*)(v9 + 2LL * a6);
  }
  else {
    v16 = v15;
  }
  if (a9 != 0) {
    a5 = 0;
  }
  if (a9 != 0) {
    v18 = 0;
  }
  else {
    v18 = a6;
  }
  v19 = a5;
  v20 = a7 * *(__int16*)(v9 + 2LL * a5);
  v21 = a3;
  if (v20 >= 1) {
    v38 = a2;
    memset_plt(a3, 0, 4LL * (unsigned int)v20);
    a2 = v38;
    v11 = a9;
    v21 = &a3[v20 - 1 + 1];
  }
  if ((int)v19 < v18) {
    v22 = (__int16*)(a2 + 2LL * v20);
    v23 = (char*)MovieData_c09c8;
    do {
      v24 = a7 * *(__int16*)(v9 + 2 * v19);
      v25 = v19 + 1;
      v26 = *(__int16*)(a4 + 2 * v19) + (v23[v19] << 6);
      v27 = a7 * *(__int16*)(v9 + 2 * (v19 + 1));
      if (v26 < 0x8000) {
        v28 = v26 >> 10;
        if (v26 < -32768 || v28 < -15) {
          v30 = 0;
          v31 = 0;
          goto LABEL_34;
        }
      }
      else {
        LOWORD(v26) = 0x7FFF;
        v28 = 31;
      }
      v31 =
          ((((((326528 * (v26 & 0x3FFu)) >> 16) + 14819) * 32 * (v26 & 0x3FF) +
             1494482944) >>
            16) *
               32 * (v26 & 0x3FF) +
           1073676288) >>
          16;
      if (v28 > 16) {
        v32 = v28 == 17;
        if (v28 == 17) {
          v33 = 1;
        }
        else {
          v33 = 2;
        }
        if (!v32) {
          v31 = 0x4000;
        }
        do {
          v34 = *v22++;
          ++v24;
          *v21++ = (v31 * v34) << v33;
        } while (v24 < v27);
        goto LABEL_16;
      }
      v30 = 16 - v28;
      do {
      LABEL_34:
        v35 = *v22++;
        ++v24;
        *v21++ = (int)(v31 * v35) >> v30;
      } while (v24 < v27);
    LABEL_16:
      ++v19;
    } while (v25 != v18);
  }
  if (v11 != 0) {
    v36 = 0;
  }
  else {
    v36 = v16;
  }
  return memset_plt(&a3[v36], 0, 4LL * (v14 - v36));
}

__int64 bands_20220(__int64 result, int a2, unsigned int a3)
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

__int64 quant_all_bands(unsigned int a1, __int64 a2, int a3, __int64 a4,
                        __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                        __int64 a9, int a10, int a11, int a12, unsigned int a13,
                        __int64 a14, int a15, int a16, __int64 a17,
                        unsigned int a18, unsigned int a19, unsigned int* a20,
                        int a21, int a22, int a23)
{
  int v27;
  __int64 v28;
  bool v29;
  _BOOL4 v30;
  _BOOL4 v31;
  int v32;
  int v33;
  __int16* v34;
  int v35;
  __int64 v36;
  int v37;
  __int64 v38;
  char* v39;
  __int64 result;
  unsigned int v41;
  int v42;
  __int64 v43;
  _BOOL4 v44;
  __int64 v45;
  char* v46;
  __int64 v48;
  __int16* v49;
  bool v50;
  int v51;
  __int64 v52;
  __int64 v53;
  int v54;
  unsigned int v55;
  int v56;
  int v57;
  __int64 v58;
  __int64 v59;
  int v60;
  int v61;
  __int64 v62;
  __int16* v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  bool v73;
  int v74;
  __int64 v75;
  __int16* v76;
  __int16* v77;
  int v78;
  int v79;
  int v80;
  __int64 v81;
  int v82;
  __int64 v83;
  __int64 v84;
  __int16* v85;
  __int16* v86;
  int v87;
  __int64 v88;
  int v89;
  bool v90;
  int v91;
  int v92;
  __int64 v93;
  int v94;
  __int64 v95;
  int v96;
  int v97;
  __int16* v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  __int64 v105;
  int v106;
  __int64 v107;
  char* v108;
  __int64 v109;
  unsigned int v110;
  int v111;
  __int64 v112;
  unsigned int v113;
  __int64 v114;
  int v115;
  __int64 v116;
  __int64 v117;
  char* v118;
  unsigned __int64 v119;
  __int16* v120;
  __int16* v121;
  __int64 v122;
  __int16* v123;
  char v124;
  __int16* v125;
  int* v126;
  int v127;
  int v128;
  __int64 v129;
  int v130;
  __int64 v131;
  int v132;
  int v133;
  int v134;
  __int64 v135;
  int v136;
  unsigned int v137;
  char v138;
  char v139;
  bool v140;
  unsigned __int64 v141;
  unsigned int v142;
  unsigned int v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  char* v147;
  __int64 v148;
  int v149;
  __int64 v150;
  __int16* v151;
  __int16* v152;
  __int64 v153;
  int v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  char* v158;
  __int64 v159;
  __int64 v160;
  char* v161;
  __int64 v162;
  __int16* v163;
  __int64 v164;
  __int16* v165;
  int v166;
  int v167;
  int v168;
  __int16* v169;
  char* v170;
  __int64 v171;
  int v172;
  int v173;
  int v174;
  __int64 v175;
  int v176;
  __int16* v177;
  __int16* v178;
  __int64 v179;
  int v180;
  int v181;
  int v182;
  __int16* v183;
  char* v184;
  int v185;
  int v186;
  int v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  int v194;
  int v195;
  __int64 v196;
  __int64 v197;
  __int64 v198;
  __int64 v199;
  __int16* v200;
  char* v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  unsigned __int64 v205;
  __int64 v206;
  __int64 v207;
  __int64 v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  __int16* v212;
  int v213;
  int v214;
  char* v215;
  unsigned int v216;
  __int16* v217;
  __int16* v218;
  __int64 v219;
  int v220;
  __int64 v221;
  unsigned __int64 v222;
  int v223;
  __int16* v224;
  __int64 v225;
  __int16* v226;
  int v227;
  int v228;
  int v229;
  __int16* v230;
  char* v231;
  __int64 v232;
  int v233;
  int v234;
  int v235;
  __int64 v236;
  int v237;
  __int16* v238;
  __int16* v239;
  __int64 v240;
  int v241;
  int v242;
  int v243;
  __int16* v244;
  char* v245;
  int v246;
  int v247;
  int v248;
  __int64 v249;
  _QWORD* v250;
  __int64 v251;
  char* v252;
  __int64 v253;
  __int64 v254;
  __int64 v255;
  __int64 v256;
  __int64 v257;
  __int64 v258;
  __int64 v259;
  __int64 v260;
  int v261;
  __int64 v262;
  __int64 v263;
  int v264;
  int v265;
  int v266;
  struct {
    char* v267;
    unsigned int* v268;
    __int16* v269;
    __int16* v270;
    char* v271;
    __int64 v272;
    __int64 v273;
    __int64 v274;
    char gap96_[4];
    unsigned int v275;
    __int64 v276;
    char* v277;
    char* v278;
    __int64 v279;
    int v280;
    int v281;
    __int64 v282;
    unsigned __int64 v283;
    __int64 v284;
    __int64 v285;
    __int64 v286;
    __int64 v287;
    __int64 v288;
    __int64 v289;
    char* v290;
    char* v291;
    char* v292;
    char gap232_[4];
    int v293;
    __int64 v294;
    __int64 v295;
    __int64 v296;
    __int64 v297;
    int v298;
    int v299;
    __int16* v300;
    char gap288_[4];
    int v301;
    __int64 v302;
    __int64 v303;
    __int64 v304;
    __int64 v305;
    __int64 v306;
    __int64 v307;
    __int64 v308;
    char gap352_[4];
    int v309;
    char* v310;
    __int64 v311;
    __int64 v312;
    int v313;
    int v314;
    int v315;
    _BOOL4 v316;
    int v317;
    int v318;
    __int64 v319;
    __int64 v320;
    __int64* v321;
    __int64 v322;
    __int16* v323;
    __int16* v324;
    __int64 v325;
    __int64 v326;
    __int64 v327;
    __int64 v328;
    __int16* v329;
    __int64 v330;
  } v267_;
  struct {
    char gap504_[5];
    _BYTE v331[1275];
    unsigned __int64 v332;
    __int64 v333;
    __int64 v334;
    __int64 v335;
    __int64 v336;
    __int64 v337;
    __int64 v338;
    unsigned __int64 v339;
    __int64 v340;
    __int64 v341;
    unsigned __int64 v342;
    __int64 v343;
    __int64 v344;
    __int64 v345;
    __int64 v346;
    __int64 v347;
    __int64 v348;
    unsigned __int64 v349;
    __int64 v350;
    __int64 v351;
    __int64 v352;
    __int64 v353;
    __int64 v354;
    __int64 v355;
    __int64 v356;
    __int64 v357;
    __int64 v358;
    __int64 v359;
    __int64 v360;
    __int64 v361;
    __int64 v362;
    __int64 v363;
  } v331_;
  struct {
    unsigned __int64 v364;
    __int64 v365;
    __int64 v366;
    __int64 v367;
    __int64 v368;
    __int64 v369;
    __int64 v370;
    unsigned __int64 v371;
    __int64 v372;
    __int64 v373;
  } v364_;

  if (a6 != 0) {
    v27 = 2;
  }
  else {
    v27 = 1;
  }
  v28 = *(_QWORD*)(a2 + 24);
  v364_.v372 = 0;
  v364_.v373 = 0;
  LODWORD(v267_.v327) = a23;
  v364_.v370 = 0;
  v364_.v371 = 0;
  v364_.v368 = 0;
  v364_.v369 = 0;
  v364_.v366 = 0;
  v364_.v367 = 0;
  v267_.v272 = a8;
  v267_.v328 = a4;
  v267_.v305 = a6;
  v267_.v313 = v27;
  v29 = a12 != 0 || a21 <= 7;
  LODWORD(v267_.v324) = a12;
  v267_.v320 = a2;
  v267_.v308 = v28;
  v30 = !v29 && a6 != 0;
  v267_.v314 = a6 != 0;
  v31 = a1 != 0 && v30;
  if (a1 == 0) {
    v30 = true;
  }
  LODWORD(v267_.v323) = a22;
  v267_.v316 = v30;
  v267_.v268 = a20;
  v267_.v321 = (__int64*)a17;
  v267_.v326 = a13;
  LODWORD(v267_.v325) = a11;
  if (a10 != 0) {
    v32 = 1 << a18;
  }
  else {
    v32 = 1;
  }
  v33 = *(__int16*)(v28 + 2LL * a3);
  v267_.v309 = v32;
  v34 = (__int16*)(v28 + 2LL * *(int*)(a2 + 8));
  v267_.v293 = v33;
  v35 = *(v34 - 1);
  v36 = 2LL * ((v35 - v33) << a18 << (a6 != 0));
  v267_.v329 =
      (__int16*)((char*)&v267_.v267 - ((v36 + 15) & 0xFFFFFFFFFFFFFFF0LL));
  memset_plt(v267_.v329, 0, v36);
  v37 = v35 << a18;
  v267_.v315 = v31;
  v267_.v304 = a5;
  v267_.v322 = v35 << a18;
  if (v31) {
    v38 = 2LL * ((*v34 - v35) << a18);
    v267_.v330 = (__int64)&v267_.v267 - ((v38 + 15) & 0xFFFFFFFFFFFFFFF0LL);
    memset_plt(v267_.v330, 0, v38);
  }
  else {
    v38 = 0;
    v267_.v330 = a5 + 2LL * v37;
  }
  v39 = (char*)&v267_.v267 - ((v38 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  memset_plt(v39, 0, v38);
  memset_plt(v39, 0, v38);
  v267_.v278 = v39;
  memset_plt(v39, 0, v38);
  v267_.v277 = v39;
  memset_plt(v39, 0, v38);
  v267_.v271 = v39;
  memset_plt(v39, 0, v38);
  v364_.v370 = v267_.v272;
  result = v267_.v328;
  v364_.v364 = __PAIR64__(v267_.v316, a1);
  HIDWORD(v364_.v366) = v267_.v326;
  LODWORD(v364_.v367) = v267_.v325;
  LODWORD(v364_.v372) = 0;
  v364_.v368 = (__int64)v267_.v321;
  v364_.v365 = v267_.v320;
  v41 = *v267_.v268;
  HIDWORD(v364_.v372) = v267_.v327;
  v364_.v371 = __PAIR64__((unsigned int)v267_.v323, v41);
  LODWORD(v364_.v373) = v267_.v309 > 1;
  if (a3 < (int)v267_.v328) {
    v42 = a3 + 1;
    v43 = a3;
    v44 = true;
    v45 = v267_.v308;
    v267_.v327 = 0;
    v267_.v290 = v39;
    v267_.v291 = v39;
    v267_.v302 = a14;
    v267_.v303 = a7;
    v46 = (char*)&v267_.v329[v37];
    v267_.v299 = ~(-1 << v267_.v309);
    v267_.v312 = a7 - 1;
    v48 = v267_.v293 << a18;
    v267_.v287 = v48;
    v267_.v288 = a19;
    v267_.v310 = &v46[-2 * v48];
    v267_.v311 = a9;
    v267_.v292 = (char*)&v267_.v329[-v48];
    v267_.v267 = &v267_.v310[-2 * v48];
    v267_.v297 = (int)a19;
    v267_.v306 = v42;
    v267_.v307 = (int)v267_.v326;
    if (v267_.v305 != 0) {
      v49 = v267_.v329;
    }
    else {
      v49 = nullptr;
    }
    v50 = (_DWORD)v267_.v325 == 3 && v267_.v309 <= 1;
    v267_.v300 = v49;
    v51 = !v50;
    v267_.v301 = a15;
    v267_.v298 = v51;
    v267_.v325 = (int)v267_.v328 - 1;
    v267_.v286 = v267_.v308 - 2;
    v52 = v267_.v322;
    v267_.v322 = v43;
    v267_.v295 = 2 * v52 - 2 * v48;
    v267_.v296 = (int)v267_.v328;
    v53 = v43;
    v267_.v269 = (__int16*)(v39 + 8);
    v267_.v270 = (__int16*)(v39 + 8);
    while (1) {
      LODWORD(v364_.v366) = v53;
      v61 = *(__int16*)(v45 + 2 * v53);
      v62 = 2LL * (v61 << a18);
      if (v267_.v305 != 0) {
        v63 = (__int16*)(v267_.v305 + v62);
      }
      else {
        v63 = nullptr;
      }
      v64 = *(__int16*)(v45 + 2 * (v53 + 1));
      v267_.v319 = v53 + 1;
      v65 = ec_tell_frac((__int64)v267_.v321);
      LODWORD(v267_.v326) = 0;
      v267_.v318 = v65;
      if (v53 == v267_.v322) {
        v66 = 0;
      }
      else {
        v66 = v65;
      }
      v67 = a16 - v66;
      v68 = v267_.v301 - v65;
      LODWORD(v364_.v369) = v267_.v301 - v65 - 1;
      if (v53 < v267_.v297) {
        v69 = v267_.v288 - v53;
        if ((int)v267_.v288 - (int)v53 >= 3) {
          v69 = 3;
        }
        v70 = *(_DWORD*)(v267_.v311 + 4 * v53) + v67 / v69;
        if (v68 >= v70) {
          v68 = v70;
        }
        v71 = v68 & ~(v68 >> 31);
        if (v71 >= 0x3FFF) {
          v71 = 0x3FFF;
        }
        LODWORD(v267_.v326) = v71;
      }
      v267_.v317 = v67;
      v72 = v64 - v61;
      if (v267_.v316) {
        v45 = v267_.v308;
        v73 = (*(__int16*)(v267_.v308 + 2 * v53) - v72) << a18 >=
                  *(__int16*)(v267_.v308 + 2 * v267_.v322) << a18 ||
              v53 == v267_.v306;
        v74 = v73;
        if ((v74 & (v44 || (_DWORD)v267_.v327 == 0)) != 0) {
          v75 = (unsigned int)v53;
        }
        else {
          v75 = (unsigned int)v267_.v327;
        }
        v267_.v327 = v75;
        v76 = v267_.v329;
        if (v53 != v267_.v306) {
          goto LABEL_64;
        }
      }
      else {
        v45 = v267_.v308;
        v76 = v267_.v329;
        if (v53 != v267_.v306) {
          goto LABEL_64;
        }
      }
      v77 = (__int16*)(*(_QWORD*)(v267_.v320 + 24) + 2 * v267_.v322);
      v78 = v77[1];
      v79 = (v78 - *v77) << a18;
      LODWORD(v77) = (v77[2] - v78) << a18;
      v80 = 2 * v79 - (_DWORD)v77;
      v81 = 2LL * ((int)v77 - v79);
      memcpy_plt(&v267_.v329[v79], &v267_.v329[v80], v81);
      v76 = v267_.v329;
      if ((_DWORD)v267_.v324 != 0) {
        memcpy_plt(&v267_.v310[2 * v79], &v267_.v310[2 * v80], v81);
        v76 = v267_.v329;
      }
    LABEL_64:
      v82 = v267_.v315;
      v83 = (unsigned int)(v72 << a18);
      v84 = v267_.v330;
      if (v53 >= *(int*)(v267_.v320 + 12)) {
        v85 = v76;
      }
      else {
        v85 = (__int16*)(v267_.v304 + v62);
      }
      if (v53 < *(int*)(v267_.v320 + 12)) {
        v86 = v63;
      }
      else {
        v84 = 0;
        v86 = v267_.v300;
      }
      v87 = -1;
      if (v53 != v267_.v325) {
        v82 = 1;
      }
      if (v82 != 0) {
        v88 = v84;
      }
      else {
        v88 = 0;
      }
      v89 = *(_DWORD*)(v267_.v302 + 4 * v53);
      v267_.v330 = v88;
      HIDWORD(v364_.v367) = v89;
      v90 = v89 < 0;
      v91 = v267_.v298;
      if (v90) {
        v91 = 1;
      }
      if ((_DWORD)v267_.v327 != 0) {
        v92 = v267_.v299;
        v93 = v267_.v303;
        v94 = v267_.v299;
        if (v91 != 0) {
          v95 = 2LL * (int)v267_.v327;
          v96 = (*(__int16*)(v45 + v95) - v267_.v293 - v72) << a18;
          v87 = v96 & ~(v96 >> 31);
          v97 = v87 + v267_.v287;
          v98 = (__int16*)(v267_.v286 + v95);
          v99 = v267_.v327;
          do {
            v100 = *v98--;
            --v99;
          } while (v100 << a18 > v97);
          v101 = v97 + v83;
          if ((int)v267_.v327 <= (int)v53) {
            v102 = v53;
          }
          else {
            v102 = v267_.v327;
          }
          v103 = v102 - 1;
          v104 = v267_.v327 - 2;
          v105 = (int)v267_.v327 - 1 + 1LL;
          while (v105 < v53) {
            v106 = *(__int16*)(v45 + 2 * v105);
            ++v104;
            ++v105;
            if (v106 << a18 >= v101) {
              goto LABEL_90;
            }
          }
          v104 = v103;
        LABEL_90:
          v94 = 0;
          v92 = 0;
          do {
            v107 = v99 << v267_.v314;
            v94 |= *(unsigned __int8*)(v267_.v303 + v107);
            v92 |= *(unsigned __int8*)(v267_.v312 + v107 + v267_.v313);
            v29 = v99++ < v104;
          } while (v29);
        }
        v108 = v267_.v310;
        v109 = v267_.v295;
        v110 = v267_.v326;
        v267_.v328 = v83;
        if ((_DWORD)v267_.v324 == 0) {
          goto LABEL_114;
        }
      }
      else {
        v92 = v267_.v299;
        v93 = v267_.v303;
        v94 = v267_.v299;
        v108 = v267_.v310;
        v109 = v267_.v295;
        v110 = v267_.v326;
        v267_.v328 = v83;
        if ((_DWORD)v267_.v324 == 0) {
          goto LABEL_114;
        }
      }
      if (v267_.v316 && v53 == v267_.v307) {
        v111 = (*(__int16*)(v45 + 2 * v53) - v267_.v293) << a18;
        if (v111 >= 1) {
          if ((unsigned int)v111 >= 8) {
            v119 = 0;
            v112 = 0;
            do {
              v120 = &v76[v119 / 2];
              v121 = (__int16*)&v108[v119];
              v112 += 8;
              v119 += 16LL;
              *v120 = (unsigned int)(*v121 + *v120) >> 1;
              v120[1] = (unsigned int)(v121[1] + v120[1]) >> 1;
              v120[2] = (unsigned int)(v121[2] + v120[2]) >> 1;
              v120[3] = (unsigned int)(v121[3] + v120[3]) >> 1;
              v120[4] = (unsigned int)(v121[4] + v120[4]) >> 1;
              v120[5] = (unsigned int)(v121[5] + v120[5]) >> 1;
              v120[6] = (unsigned int)(v121[6] + v120[6]) >> 1;
              v120[7] = (unsigned int)(v121[7] + v120[7]) >> 1;
            } while (((2 * v111) & 0xFFFFFFF0) != v119);
          }
          else {
            v112 = 0;
          }
          v122 = v111 & 7;
          if (v122 != 0) {
            v123 = &v76[v112];
            do {
              --v122;
              *v123 =
                  (unsigned int)(*(__int16*)((char*)v123 + v109) + *v123) >> 1;
              ++v123;
            } while (v122 != 0);
          }
        }
      }
      else if (v53 != v267_.v307) {
        v113 = v110 >> 1;
        v267_.v323 = v86;
        v267_.v285 = v87;
        LODWORD(v267_.v289) = v110 >> 1;
        if (v87 == -1) {
          v114 = 0;
        }
        else {
          v114 = (__int64)&v76[v87];
        }
        if (v53 == v267_.v325) {
          v265 = v94;
          v117 = v267_.v330;
          v115 = v267_.v309;
          LOWORD(v262) = 0x7FFF;
          LODWORD(v267_.v294) =
              bands_21840((int*)&v364_.v364, v85, v83, v113, v267_.v309, v114,
                          a18, nullptr, v262, v267_.v330, v265);
          v118 = nullptr;
          if (v87 == -1) {
            v116 = 0;
          }
          else {
            v116 = (__int64)&v267_.v310[2 * v267_.v285];
          }
        }
        else {
          v264 = v94;
          v115 = v267_.v309;
          LOWORD(v262) = 0x7FFF;
          LODWORD(v267_.v294) = bands_21840(
              (int*)&v364_.v364, v85, v83, v113, v267_.v309, v114, a18,
              &v267_.v292[2 * (*(__int16*)(v45 + 2 * v53) << a18)], v262, v84,
              v264);
          if (v87 == -1) {
            v116 = 0;
          }
          else {
            v116 = (__int64)&v267_.v310[2 * v267_.v285];
          }
          v117 = v267_.v330;
          v118 = &v267_.v267[2 * (*(__int16*)(v45 + 2 * v53) << a18)];
        }
        v266 = v92;
        v261 = v267_.v328;
        LOWORD(v263) = 0x7FFF;
        result =
            bands_21840((int*)&v364_.v364, v267_.v323, v267_.v328, v267_.v289,
                        v115, v116, a18, v118, v263, v117, v266);
        v157 = v267_.v312;
        v110 = v267_.v326;
        LOBYTE(v55) = v267_.v294;
        v54 = v261;
        goto LABEL_34;
      }
    LABEL_114:
      if (v86 != nullptr) {
        v124 = v267_.v315 ^ 1;
        if (v53 >= v267_.v307) {
          v124 = 1;
        }
        if ((v124 & 1) == 0) {
          v267_.v323 = v86;
          v331_.v357 = 0;
          v331_.v358 = 0;
          v125 = v85;
          v331_.v355 = 0;
          v331_.v356 = 0;
          v331_.v353 = 0;
          v331_.v354 = 0;
          v331_.v352 = 0;
          v331_.v340 = 0;
          v331_.v341 = 0;
          v331_.v338 = 0;
          v331_.v339 = 0;
          v331_.v336 = 0;
          v331_.v337 = 0;
          v331_.v334 = 0;
          v331_.v335 = 0;
          v331_.v332 = 0;
          v331_.v333 = 0;
          memset_plt(v331_.v331, 0, 1275);
          v267_.v324 = v125;
          v126 = (int*)(v267_.v272 + 4 * v53);
          v127 = *v126;
          v128 = v126[*(int*)(v267_.v320 + 8)];
          v267_.v280 = *((_DWORD*)v267_.v321 + 2);
          v129 = v267_.v321[5];
          v331_.v359 = v267_.v321[4];
          v331_.v360 = v129;
          if (v127 >= v128) {
            v130 = v128;
          }
          else {
            v130 = v127;
          }
          v131 = *v267_.v321;
          v331_.v361 = v267_.v321[6];
          v267_.v289 = v131;
          v132 = v130 / 3;
          v133 = v132 + v127;
          v134 = v132 + v128;
          v135 = *(__int64*)((char*)v267_.v321 + 20);
          v331_.v362 = *(__int64*)((char*)v267_.v321 + 12);
          v331_.v363 = v135;
          if (v133 <= v134) {
            v136 = v134;
          }
          else {
            v136 = v133;
          }
          v137 = v136 + 1;
          v331_.v342 = v364_.v364;
          v331_.v343 = v364_.v365;
          v331_.v346 = v364_.v368;
          v331_.v347 = v364_.v369;
          v138 = __clz(v137);
          v139 = v138 - 17;
          v138 = 17 - v138;
          v140 = v137 >> 15 == 0;
          LODWORD(v141) = v133 >> v138;
          v142 = v133 << v139;
          v143 = v134 >> v138;
          LODWORD(v144) = v134 << v139;
          v145 = *((unsigned int*)v267_.v321 + 7);
          if (v140) {
            v141 = v142;
          }
          else {
            v141 = (unsigned int)v141;
          }
          if (v140) {
            v144 = (unsigned int)v144;
          }
          else {
            v144 = v143;
          }
          v267_.v283 = v141;
          v267_.v285 = v144;
          v267_.v279 = v145;
          v331_.v344 = v364_.v366;
          v331_.v345 = v364_.v367;
          v331_.v350 = v364_.v372;
          v331_.v351 = v364_.v373;
          v331_.v348 = v364_.v370;
          v331_.v349 = v364_.v371;
          v146 = 2LL * (int)v267_.v328;
          memcpy_plt(v267_.v291, v125, v146);
          v267_.v294 = v146;
          memcpy_plt(v267_.v290, v267_.v323, v146);
          v147 = nullptr;
          LODWORD(v364_.v372) = -1;
          v45 = v267_.v308;
          if (v87 == -1) {
            v148 = 0;
          }
          else {
            v148 = (__int64)&v267_.v329[v87];
          }
          if (v53 != v267_.v325) {
            v147 = &v267_.v292[2 * (*(__int16*)(v267_.v308 + 2 * v53) << a18)];
          }
          v267_.v281 = v92 | v94;
          v149 = v267_.v328;
          v110 = v267_.v326;
          v267_.v284 = v148;
          v267_.v275 =
              quant_band_stereo((__int64)&v364_.v364, v267_.v324, v267_.v323,
                                v267_.v328, v267_.v326, v267_.v309, v148, a18,
                                v147, v267_.v330, v92 | (unsigned int)v94);
          v267_.v276 = (__int16)v267_.v283;
          if (v149 < 1) {
            v151 = v267_.v324;
            v150 = v267_.v294;
            v267_.v282 = 0;
            v267_.v283 = 0;
          }
          else {
            v150 = v267_.v294;
            if ((unsigned int)v149 >= 8) {
              v152 = v267_.v323;
              v151 = v267_.v324;
              v163 = v267_.v270;
              v164 = 0;
              v154 = 0;
              v165 = v267_.v324 + 4;
              do {
                v164 -= 8;
                v166 = v154 + *(v165 - 4) * *(v163 - 4) +
                       *(v165 - 3) * *(v163 - 3) + *(v165 - 2) * *(v163 - 2) +
                       *(v165 - 1) * *(v163 - 1) + *v165 * *v163 +
                       v165[1] * v163[1] + v165[2] * v163[2];
                v167 = v163[3];
                v168 = v165[3];
                v165 += 8;
                v163 += 8;
                v154 = v166 + v168 * v167;
              } while (-(__int64)(v149 & 0x7FFFFFF8) != v164);
              v153 = -v164;
              v155 = v149 & 7;
              if ((v149 & 7) != 0) {
                goto LABEL_154;
              }
            }
            else {
              v152 = v267_.v323;
              v151 = v267_.v324;
              v153 = 0;
              v154 = 0;
              v155 = v149 & 7;
              if ((v149 & 7) == 0) {
                goto LABEL_156;
              }
            LABEL_154:
              v169 = &v151[v153];
              v170 = &v267_.v291[2 * v153];
              v171 = v155;
              do {
                v173 = *(__int16*)v170;
                v170 += 2;
                v172 = v173;
                v174 = *v169++;
                --v171;
                v154 += v174 * v172;
              } while (v171 != 0);
            }
          LABEL_156:
            if ((unsigned int)v149 >= 8) {
              v177 = v267_.v269;
              v178 = v152 + 4;
              v179 = 0;
              v176 = 0;
              do {
                v179 -= 8;
                v180 = v176 + *(v178 - 4) * *(v177 - 4) +
                       *(v178 - 3) * *(v177 - 3) + *(v178 - 2) * *(v177 - 2) +
                       *(v178 - 1) * *(v177 - 1) + *v178 * *v177 +
                       v178[1] * v177[1] + v178[2] * v177[2];
                v181 = v177[3];
                v182 = v178[3];
                v178 += 8;
                v177 += 8;
                v176 = v180 + v182 * v181;
              } while (-(__int64)(v149 & 0x7FFFFFF8) != v179);
              v175 = -v179;
              if ((v149 & 7) != 0) {
                goto LABEL_162;
              }
            }
            else {
              v175 = 0;
              v176 = 0;
              if ((v149 & 7) == 0) {
                goto LABEL_164;
              }
            LABEL_162:
              v183 = &v152[v175];
              v184 = &v267_.v290[2 * v175];
              do {
                v186 = *(__int16*)v184;
                v184 += 2;
                v185 = v186;
                v187 = *v183++;
                --v155;
                v176 += v187 * v185;
              } while (v155 != 0);
            }
          LABEL_164:
            v267_.v282 = v176;
            v267_.v283 =
                (unsigned __int64)((__int16)v267_.v283 * (__int64)v154) >> 15;
          }
          v188 = v267_.v321[5];
          v189 = v267_.v321[6];
          v190 = *v267_.v321;
          v191 = v267_.v321[1];
          v331_.v356 = v267_.v321[4];
          v331_.v357 = v188;
          v193 = v267_.v321[2];
          v192 = v267_.v321[3];
          v331_.v358 = v189;
          v331_.v352 = v190;
          v331_.v353 = v191;
          v331_.v354 = v193;
          v331_.v355 = v192;
          v331_.v336 = v364_.v368;
          v331_.v337 = v364_.v369;
          v331_.v332 = v364_.v364;
          v331_.v333 = v364_.v365;
          v331_.v334 = v364_.v366;
          v331_.v335 = v364_.v367;
          v331_.v340 = v364_.v372;
          v331_.v341 = v364_.v373;
          v331_.v338 = v364_.v370;
          v331_.v339 = v364_.v371;
          memcpy_plt(v267_.v278, v151, v150);
          memcpy_plt(v267_.v277, v267_.v323, v150);
          if (v53 != v267_.v325) {
            memcpy_plt(v267_.v271,
                       &v267_.v292[2 * (*(__int16*)(v45 + 2 * v53) << a18)],
                       v150);
          }
          v194 = v267_.v279;
          v195 = v267_.v280;
          v196 = v267_.v289;
          v267_.v273 = v267_.v280 - (int)v267_.v279;
          v267_.v274 = (int)v267_.v279;
          memcpy_plt(v331_.v331, v267_.v289 + (int)v267_.v279, v267_.v273);
          v197 = (__int64)v267_.v321;
          v198 = v331_.v363;
          v199 = v331_.v361;
          v200 = v267_.v324;
          v201 = v267_.v291;
          *(__int64*)((char*)v267_.v321 + 12) = v331_.v362;
          v202 = v331_.v359;
          v203 = v331_.v360;
          *(_QWORD*)(v197 + 20) = v198;
          v205 = v331_.v342;
          v204 = v331_.v343;
          *(_QWORD*)(v197 + 32) = v202;
          *(_QWORD*)(v197 + 40) = v203;
          *(_QWORD*)v197 = v196;
          v206 = v267_.v294;
          v207 = v267_.v294;
          v364_.v364 = v205;
          v364_.v365 = v204;
          v208 = v331_.v344;
          v209 = v331_.v345;
          v210 = v331_.v346;
          v211 = v331_.v347;
          *(_DWORD*)(v197 + 8) = v195;
          *(_DWORD*)(v197 + 28) = v194;
          *(_QWORD*)(v197 + 48) = v199;
          v364_.v366 = v208;
          v364_.v367 = v209;
          v364_.v368 = v210;
          v364_.v369 = v211;
          v364_.v372 = v331_.v350;
          v364_.v373 = v331_.v351;
          v364_.v370 = v331_.v348;
          v364_.v371 = v331_.v349;
          memcpy_plt(v200, v201, v207);
          memcpy_plt(v267_.v323, v267_.v290, v206);
          if (v53 == v267_.v306) {
            v212 = (__int16*)(*(_QWORD*)(v267_.v320 + 24) + 2 * v267_.v322);
            v213 = v212[1];
            v214 = (v213 - *v212) << a18;
            LODWORD(v212) = (v212[2] - v213) << a18;
            memcpy_plt(&v267_.v329[v214], &v267_.v329[2 * v214 - (int)v212],
                       2LL * ((int)v212 - v214));
          }
          LODWORD(v364_.v372) = 1;
          if (v53 == v267_.v325) {
            v215 = nullptr;
          }
          else {
            v215 = &v267_.v292[2 * (*(__int16*)(v45 + 2 * v53) << a18)];
          }
          v157 = v267_.v312;
          v216 = quant_band_stereo((__int64)&v364_.v364, v267_.v324, v267_.v323,
                                   v267_.v328, v110, v267_.v309, v267_.v284,
                                   a18, v215, v267_.v330, v267_.v281);
          v54 = v267_.v328;
          v55 = v216;
          if ((int)v267_.v328 < 1) {
            v217 = v267_.v323;
            v218 = v267_.v324;
            LODWORD(v222) = 0;
            v223 = 0;
          }
          else {
            v217 = v267_.v323;
            if ((unsigned int)v267_.v328 >= 8) {
              v218 = v267_.v324;
              v224 = v267_.v270;
              v225 = 0;
              v220 = 0;
              v226 = v267_.v324 + 4;
              do {
                v225 -= 8;
                v227 = v220 + *(v226 - 4) * *(v224 - 4) +
                       *(v226 - 3) * *(v224 - 3) + *(v226 - 2) * *(v224 - 2) +
                       *(v226 - 1) * *(v224 - 1) + *v226 * *v224 +
                       v226[1] * v224[1] + v226[2] * v224[2];
                v228 = v224[3];
                v229 = v226[3];
                v226 += 8;
                v224 += 8;
                v220 = v227 + v229 * v228;
              } while (-(v267_.v328 & 0x7FFFFFF8) != v225);
              v219 = -v225;
              v221 = v267_.v328 & 7;
              if ((v267_.v328 & 7) != 0) {
                goto LABEL_180;
              }
            }
            else {
              v218 = v267_.v324;
              v219 = 0;
              v220 = 0;
              v221 = v267_.v328 & 7;
              if ((v267_.v328 & 7) == 0) {
                goto LABEL_182;
              }
            LABEL_180:
              v230 = &v218[v219];
              v231 = &v267_.v291[2 * v219];
              v232 = v221;
              do {
                v234 = *(__int16*)v231;
                v231 += 2;
                v233 = v234;
                v235 = *v230++;
                --v232;
                v220 += v235 * v233;
              } while (v232 != 0);
            }
          LABEL_182:
            if ((unsigned int)v267_.v328 >= 8) {
              v238 = v267_.v269;
              v239 = v267_.v323 + 4;
              v240 = 0;
              v237 = 0;
              do {
                v240 -= 8;
                v241 = v237 + *(v239 - 4) * *(v238 - 4) +
                       *(v239 - 3) * *(v238 - 3) + *(v239 - 2) * *(v238 - 2) +
                       *(v239 - 1) * *(v238 - 1) + *v239 * *v238 +
                       v239[1] * v238[1] + v239[2] * v238[2];
                v242 = v238[3];
                v243 = v239[3];
                v239 += 8;
                v238 += 8;
                v237 = v241 + v243 * v242;
              } while (-(v267_.v328 & 0x7FFFFFF8) != v240);
              v236 = -v240;
              if ((v267_.v328 & 7) != 0) {
                goto LABEL_188;
              }
            }
            else {
              v236 = 0;
              v237 = 0;
              if ((v267_.v328 & 7) == 0) {
                goto LABEL_190;
              }
            LABEL_188:
              v244 = &v267_.v323[v236];
              v245 = &v267_.v290[2 * v236];
              do {
                v247 = *(__int16*)v245;
                v245 += 2;
                v246 = v247;
                v248 = *v244++;
                --v221;
                v237 += v248 * v246;
              } while (v221 != 0);
            }
          LABEL_190:
            v223 = v237;
            v222 = (unsigned __int64)((int)v267_.v276 * (__int64)v220) >> 15;
          }
          if ((int)(v267_.v283 +
                    ((unsigned __int64)((__int16)v267_.v285 *
                                        (__int64)(int)v267_.v282) >>
                     15)) >=
              (int)(v222 +
                    ((unsigned __int64)((__int16)v267_.v285 * (__int64)v223) >>
                     15))) {
            v249 = v331_.v357;
            v250 = v267_.v321;
            v251 = v331_.v358;
            v252 = v267_.v278;
            v253 = v267_.v294;
            v254 = v267_.v294;
            v267_.v321[4] = v331_.v356;
            v250[5] = v249;
            v256 = v331_.v354;
            v255 = v331_.v355;
            v257 = v331_.v352;
            v258 = v331_.v353;
            v250[6] = v251;
            *v250 = v257;
            v250[1] = v258;
            v259 = v331_.v336;
            v260 = v331_.v337;
            v250[2] = v256;
            v250[3] = v255;
            v364_.v368 = v259;
            v364_.v369 = v260;
            v364_.v364 = v331_.v332;
            v364_.v365 = v331_.v333;
            v364_.v366 = v331_.v334;
            v364_.v367 = v331_.v335;
            v364_.v372 = v331_.v340;
            v364_.v373 = v331_.v341;
            v364_.v370 = v331_.v338;
            v364_.v371 = v331_.v339;
            memcpy_plt(v218, v252, v254);
            memcpy_plt(v217, v267_.v277, v253);
            if (v53 != v267_.v325) {
              memcpy_plt(&v267_.v292[2 * (*(__int16*)(v45 + 2 * v53) << a18)],
                         v267_.v271, v253);
            }
            memcpy_plt(v267_.v289 + v267_.v274, v331_.v331, v267_.v273);
            v55 = v267_.v275;
            v54 = v267_.v328;
          }
          LODWORD(v267_.v324) = 0;
          result = v55;
          goto LABEL_34;
        }
        v160 = (__int64)&v76[v87];
        v73 = v87 == -1;
        v157 = v267_.v312;
        v161 = nullptr;
        LODWORD(v364_.v372) = 0;
        if (v73) {
          v162 = 0;
        }
        else {
          v162 = v160;
        }
        if (v53 != v267_.v325) {
          v161 = &v267_.v292[2 * (*(__int16*)(v45 + 2 * v53) << a18)];
        }
        result = quant_band_stereo((__int64)&v364_.v364, v85, v86, v267_.v328,
                                   v110, v267_.v309, v162, a18, v161,
                                   v267_.v330, v92 | (unsigned int)v94);
      }
      else {
        v156 = (__int64)&v76[v87];
        v73 = v87 == -1;
        v157 = v267_.v312;
        v158 = nullptr;
        if (v73) {
          v159 = 0;
        }
        else {
          v159 = v156;
        }
        if (v53 != v267_.v325) {
          v158 = &v267_.v292[2 * (*(__int16*)(v45 + 2 * v53) << a18)];
        }
        LOWORD(v262) = 0x7FFF;
        result =
            bands_21840((int*)&v364_.v364, v85, v83, v110, v267_.v309, v159,
                        a18, v158, v262, v267_.v330, v92 | (unsigned int)v94);
      }
      v54 = v267_.v328;
      LOBYTE(v55) = result;
      LODWORD(v267_.v324) = 0;
    LABEL_34:
      v56 = v267_.v313;
      v57 = v267_.v317;
      v44 = (int)v110 > 8 * v54;
      LODWORD(v364_.v373) = 0;
      v58 = (int)((_DWORD)v53 << v267_.v314);
      *(_BYTE*)(v93 + v58) = v55;
      v59 = v58 + v56;
      v60 = v267_.v318;
      *(_BYTE*)(v157 + v59) = result;
      a16 = v57 + v60 + *(_DWORD*)(v267_.v311 + 4 * v53);
      v53 = v267_.v319;
      if (v267_.v319 == v267_.v296) {
        v41 = v364_.v371;
        break;
      }
    }
  }
  *v267_.v268 = v41;
  return result;
}

__int64 bands_21840(int* a1, __int16* a2, int a3, unsigned int a4, int a5,
                    __int64 a6, __int64 a7, _WORD* a8, __int64 a9, __int64 a10,
                    int a11)
{
  int v11;
  int* v13;
  __int64 v14;
  int v15;
  unsigned int v16;
  _WORD* v17;
  int* v18;
  __int16 v19;
  int v20;
  int v22;
  __int64 v23;
  int v24;
  __int64 i;
  int v26;
  char v27;
  __int64 v28;
  __int16* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  int v35;
  __int64 v36;
  __int64 v37;
  int v38;
  __int64 v39;
  __int64 v40;
  int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  int v50;
  int v51;
  int v52;
  char v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  int v60;
  int v61;
  __int64 v62;
  __int64 v63;
  int v64;
  __int64 v65;
  __int64 v66;
  int v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  int v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int16* v85;
  __int64 v86;
  __int64 v87;
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
  int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  __int16* v112;
  __int16* v113;
  __int64 v114;
  int v115;
  int v116;
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
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  int v139;
  int v140;
  int v141;
  int v142;
  int v143;
  int v144;
  int v145;
  int v146;
  __int64 v147;
  __int16* v148;
  __int16* v149;
  int v150;
  int v151;
  int v152;
  int v153;
  unsigned int v154;
  unsigned int v155;
  __int64 v156;
  int v157;
  __int64 v158;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int16* v165;
  __int64 v166;
  __int64 v167;
  unsigned __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
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
  int v184;
  int v185;
  int v186;
  int v187;
  int v188;
  int v189;
  int v190;
  int v191;
  __int64 v192;
  __int16* v193;
  __int16* v194;
  int v195;
  int v196;
  _WORD* v197;
  int* v198;
  int v199;
  _WORD* v201;
  int v202;
  __int64 v203;
  __int64 v204;
  unsigned int v205;
  __int64 v206;
  __int16* v207;
  __int64 v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  int v212;
  int v213;
  __int64 v214;
  __int64 v215;
  int v216;
  __int64 v217;
  __int64 v218;
  int v219;
  __int64 v220;
  __int64 v221;
  __int64 v222;
  int v223;
  __int64 v224;
  __int64 v225;
  __int64 v226;
  __int64 v227;
  int v228;
  int v229;
  __int16 v230;
  __int64 v231;
  __int64 v232;
  bool v233;
  _BOOL4 v234;
  _WORD* v235;
  __int16* v236;
  __int64 v237;
  int v238;
  _WORD* v239;
  __int16* v240;
  int v241;
  int v243;
  _WORD* v244;
  _BOOL4 v245;
  int v248;
  int v249;
  int v250;
  __int64 v251;
  int v252;
  char v253;
  int v254;
  __int64 v255;
  int v256;
  int v257;
  unsigned int v258;
  unsigned int v259;
  __int64 v260;
  __int64 v261;
  __int64 v262;
  __int64 v263;
  unsigned int v264;
  __int64 v265;
  __int64 v266;
  int v267;
  int v268;

  v11 = *a1;
  v13 = a1;
  if (a3 == 1) {
    v14 = *((_QWORD*)a1 + 4);
    v15 = v13[10];
    if (v11 != 0) {
      if (v15 < 8) {
        v19 = 0x4000;
      }
      else {
        v16 = (unsigned __int16)*a2;
        v17 = a8;
        v18 = v13;
        ec_enc_bits(v14, v16 >> 15, 1);
        v13 = v18;
        a8 = v17;
        v18[10] -= 8;
        v19 = v16 & 0x8000 | 0x4000;
      }
    }
    else {
      v19 = 0x4000;
      if (v15 >= 8) {
        v197 = a8;
        v198 = v13;
        v199 = ec_dec_bits(v14, 1);
        v13 = v198;
        a8 = v197;
        if (v199 != 0) {
          v19 = -16384;
        }
        else {
          v19 = 0x4000;
        }
        v198[10] -= 8;
      }
    }
    if (v13[1] != 0) {
      *a2 = v19;
    }
    if (a8 != nullptr) {
      *a8 = (unsigned int)*a2 >> 4;
    }
    return 1;
  }
  v20 = a3 / (unsigned int)a5;
  v245 = a5 == 1;
  v22 = a3;
  v244 = a8;
  v251 = (unsigned int)a1[7];
  v248 = v251 & ~((int)v251 >> 31);
  if (a6 != 0) {
    v23 = a10;
    if (a10 != 0) {
      if ((int)v251 <= 0) {
        v233 = (v20 & 1) != 0 || (_DWORD)v251 == 0;
        v234 = !v233;
        if (a5 <= 1 && !v234) {
          v243 = 0;
          goto LABEL_41;
        }
      }
      v24 = a5;
      memcpy_plt(a10, a6, 2LL * a3);
      a5 = v24;
      if ((int)v251 < 1) {
        goto LABEL_9;
      }
    LABEL_11:
      for (i = 0; i != v251; ++i) {
        if (v11 != 0 && i != 31) {
          v26 = v22 >> i >> 1;
          if (v26 >= 1) {
            v27 = i + 1;
            v28 = 0;
            do {
              v29 = &a2[v28];
              if ((unsigned int)v26 >= 4) {
                v31 = 7;
                v30 = 0;
                do {
                  v32 = v30 << v27;
                  v33 = 2 * ((v31 - 6) << i);
                  v34 = 23170 * v29[v32] + 0x4000;
                  v35 = 23170 * *(__int16*)((char*)v29 + v33);
                  v29[v32] = (unsigned int)(v34 + v35) >> 15;
                  *(__int16*)((char*)v29 + v33) =
                      (unsigned int)(v34 - v35) >> 15;
                  v36 = (v30 + 1) << v27;
                  v37 = (v31 - 4) << i;
                  LODWORD(v33) = 23170 * v29[v36] + 0x4000;
                  v38 = 23170 * v29[v37];
                  v29[v36] = (unsigned int)(v33 + v38) >> 15;
                  v29[v37] = (unsigned int)(v33 - v38) >> 15;
                  v39 = 2 * ((v30 + 2) << v27);
                  v40 = 2 * ((v31 - 2) << i);
                  v41 = 23170 * *(__int16*)((char*)v29 + v40);
                  LODWORD(v33) = 23170 * *(__int16*)((char*)v29 + v39) + 0x4000;
                  *(__int16*)((char*)v29 + v39) =
                      (unsigned int)(v33 + v41) >> 15;
                  LODWORD(v39) = v33 - v41;
                  v42 = v31 << i;
                  v31 += 8;
                  v42 *= 2;
                  *(__int16*)((char*)v29 + v40) = (unsigned int)v39 >> 15;
                  v43 = v30 + 3;
                  v30 += 4;
                  v44 = v43 << v27;
                  v45 = 23170 * *(__int16*)((char*)v29 + v42);
                  LODWORD(v40) = 23170 * v29[v44] + 0x4000;
                  v29[v44] = (unsigned int)(v40 + v45) >> 15;
                  *(__int16*)((char*)v29 + v42) =
                      (unsigned int)(v40 - v45) >> 15;
                } while (v30 != (v26 & 0x7FFFFFFC));
              }
              else {
                v30 = 0;
              }
              if ((v26 & 3) != 0) {
                v46 = (2 * v30) | 1;
                v47 = v26 & 3;
                do {
                  v48 = v30 << v27;
                  v49 = v46 << i;
                  ++v30;
                  v46 += 2;
                  --v47;
                  v48 *= 2;
                  v49 *= 2;
                  v50 = 23170 * *(__int16*)((char*)v29 + v49);
                  v51 = 23170 * *(__int16*)((char*)v29 + v48) + 0x4000;
                  *(__int16*)((char*)v29 + v48) =
                      (unsigned int)(v51 + v50) >> 15;
                  *(__int16*)((char*)v29 + v49) =
                      (unsigned int)(v51 - v50) >> 15;
                } while (v47 != 0);
              }
              ++v28;
            } while (v28 != 1 << i);
          }
        }
        if (v23 != 0 && i != 31) {
          v52 = v22 >> i >> 1;
          if (v52 >= 1) {
            v53 = i + 1;
            v54 = 0;
            do {
              v55 = v23 + 2 * v54;
              if ((unsigned int)v52 >= 4) {
                v57 = 7;
                v56 = 0;
                do {
                  v58 = 2 * (v56 << v53);
                  v59 = 2 * ((v57 - 6) << i);
                  v60 = 23170 * *(__int16*)(v55 + v58) + 0x4000;
                  v61 = 23170 * *(__int16*)(v55 + v59);
                  *(_WORD*)(v55 + v58) = (unsigned int)(v60 + v61) >> 15;
                  *(_WORD*)(v55 + v59) = (unsigned int)(v60 - v61) >> 15;
                  v62 = 2 * ((v56 + 1) << v53);
                  v63 = 2 * ((v57 - 4) << i);
                  LODWORD(v59) = 23170 * *(__int16*)(v55 + v62) + 0x4000;
                  v64 = 23170 * *(__int16*)(v55 + v63);
                  *(_WORD*)(v55 + v62) = (unsigned int)(v59 + v64) >> 15;
                  *(_WORD*)(v55 + v63) = (unsigned int)(v59 - v64) >> 15;
                  v65 = 2 * ((v56 + 2) << v53);
                  v66 = 2 * ((v57 - 2) << i);
                  v67 = 23170 * *(__int16*)(v55 + v66);
                  LODWORD(v59) = 23170 * *(__int16*)(v55 + v65) + 0x4000;
                  *(_WORD*)(v55 + v65) = (unsigned int)(v59 + v67) >> 15;
                  LODWORD(v65) = v59 - v67;
                  v68 = v57 << i;
                  v57 += 8;
                  v68 *= 2;
                  *(_WORD*)(v55 + v66) = (unsigned int)v65 >> 15;
                  v69 = v56 + 3;
                  v56 += 4;
                  v70 = 2 * (v69 << v53);
                  v71 = 23170 * *(__int16*)(v55 + v68);
                  LODWORD(v66) = 23170 * *(__int16*)(v55 + v70) + 0x4000;
                  *(_WORD*)(v55 + v70) = (unsigned int)(v66 + v71) >> 15;
                  *(_WORD*)(v55 + v68) = (unsigned int)(v66 - v71) >> 15;
                } while (v56 != (v52 & 0x7FFFFFFC));
              }
              else {
                v56 = 0;
              }
              if ((v52 & 3) != 0) {
                v72 = (2 * v56) | 1;
                v73 = v52 & 3;
                do {
                  v74 = v56 << v53;
                  v75 = v72 << i;
                  ++v56;
                  v72 += 2;
                  --v73;
                  v74 *= 2;
                  v75 *= 2;
                  v76 = 23170 * *(__int16*)(v55 + v75);
                  v77 = 23170 * *(__int16*)(v55 + v74) + 0x4000;
                  *(_WORD*)(v55 + v74) = (unsigned int)(v77 + v76) >> 15;
                  *(_WORD*)(v55 + v75) = (unsigned int)(v77 - v76) >> 15;
                } while (v73 != 0);
              }
              ++v54;
            } while (v54 != 1 << i);
          }
        }
        a11 = MovieData_a2250[a11 & 0xF] | (4 * MovieData_a2250[a11 >> 4]);
      }
      v243 = 1;
      goto LABEL_40;
    }
  }
  v23 = a6;
  if ((int)v251 >= 1) {
    goto LABEL_11;
  }
LABEL_9:
  v243 = 0;
LABEL_40:
  a6 = v23;
LABEL_41:
  v257 = 0;
  v78 = a5 >> v248;
  v79 = v20 << v248;
  v250 = v22;
  if (((v20 << v248) & 1) == 0) {
    v80 = v251;
    if ((v251 & 0x80000000) != 0) {
      v257 = 0;
      v249 = v11;
      while (1) {
        v252 = v80;
        v253 = v79;
        v81 = v79 >> 1;
        v254 = a11;
        v258 = v78;
        v255 = (unsigned int)(2 * v78);
        v267 = v79 >> 1;
        if (v11 != 0 && v78 >= 1 && v81 >= 1) {
          v82 = v81 & 0x7FFFFFFC;
          v83 = 0;
          v84 = 0;
          v85 = a2;
          v86 = 2LL * (unsigned int)v255;
          v262 = v81 & 3;
          v87 = 2LL * (unsigned int)v78;
          v88 = 16LL * (unsigned int)v78;
          v89 = 8LL * (unsigned int)(2 * v78);
          v90 = v88 - v87;
          v91 = 4LL * (unsigned int)v255;
          v92 = v86;
          v93 = 2 * (v86 + v255);
          v94 = 10LL * v258;
          v95 = 6LL * v258;
          do {
            v265 = v83;
            v96 = 0;
            if ((unsigned int)v81 >= 4) {
              v97 = v87;
              v98 = v95;
              v99 = v92;
              v100 = v94;
              v101 = v91;
              v102 = v90;
              v103 = v93;
              do {
                v96 += 4;
                v104 = 23170 * *(__int16*)((char*)a2 + v97);
                v105 = 23170 * *(__int16*)((char*)a2 + v83) + 0x4000;
                *(__int16*)((char*)a2 + v83) =
                    (unsigned int)(v105 + v104) >> 15;
                *(__int16*)((char*)a2 + v97) =
                    (unsigned int)(v105 - v104) >> 15;
                v97 += v88;
                v83 += v89;
                v106 = 23170 * *(__int16*)((char*)a2 + v98);
                v107 = 23170 * *(__int16*)((char*)a2 + v99) + 0x4000;
                *(__int16*)((char*)a2 + v99) =
                    (unsigned int)(v107 + v106) >> 15;
                *(__int16*)((char*)a2 + v98) =
                    (unsigned int)(v107 - v106) >> 15;
                v99 += v89;
                v98 += v88;
                v108 = 23170 * *(__int16*)((char*)a2 + v100);
                v109 = 23170 * *(__int16*)((char*)a2 + v101) + 0x4000;
                *(__int16*)((char*)a2 + v101) =
                    (unsigned int)(v109 + v108) >> 15;
                *(__int16*)((char*)a2 + v100) =
                    (unsigned int)(v109 - v108) >> 15;
                v101 += v89;
                v100 += v88;
                v110 = 23170 * *(__int16*)((char*)a2 + v102);
                v111 = 23170 * *(__int16*)((char*)a2 + v103) + 0x4000;
                *(__int16*)((char*)a2 + v103) =
                    (unsigned int)(v111 + v110) >> 15;
                *(__int16*)((char*)a2 + v102) =
                    (unsigned int)(v111 - v110) >> 15;
                v103 += v89;
                v102 += v88;
              } while (v82 != v96);
            }
            if (v262 != 0) {
              v112 = (__int16*)((char*)v85 + 2LL * v258 * ((2 * v96) | 1));
              v113 = (__int16*)((char*)v85 + v86 * v96);
              v114 = v262;
              do {
                --v114;
                v115 = 23170 * *v112;
                v116 = 23170 * *v113 + 0x4000;
                *v113 = (unsigned int)(v116 + v115) >> 15;
                *v112 = (unsigned int)(v116 - v115) >> 15;
                v112 += 2 * v258;
                v113 = (__int16*)((char*)v113 + v86);
              } while (v114 != 0);
            }
            v81 = v267;
            ++v84;
            v93 += 2;
            v90 += 2;
            v91 += 2;
            v94 += 2;
            v92 += 2;
            v95 += 2;
            v87 += 2;
            ++v85;
            v83 = v265 + 2;
          } while (v84 != v258);
        }
        if (a6 != 0 && (int)v258 >= 1 && v81 >= 1) {
          v117 = v81 & 0x7FFFFFFC;
          v118 = 0;
          v119 = 0;
          v120 = a6;
          v121 = 2LL * (unsigned int)v255;
          v263 = v81 & 3;
          v122 = 8LL * (unsigned int)v255;
          v123 = 4LL * (unsigned int)v255;
          v124 = 2 * (v121 + v255);
          v125 = 16LL * v258;
          v126 = 2LL * v258;
          v127 = v125 - v126;
          v128 = 10LL * v258;
          v129 = 6LL * v258;
          v130 = v121;
          do {
            v266 = v118;
            v131 = 0;
            if ((unsigned int)v81 >= 4) {
              v132 = v126;
              v133 = v129;
              v134 = v130;
              v135 = v128;
              v136 = v123;
              v137 = v127;
              v138 = v124;
              do {
                v131 += 4;
                v139 = 23170 * *(__int16*)(a6 + v132);
                v140 = 23170 * *(__int16*)(a6 + v118) + 0x4000;
                *(_WORD*)(a6 + v118) = (unsigned int)(v140 + v139) >> 15;
                v118 += v122;
                *(_WORD*)(a6 + v132) = (unsigned int)(v140 - v139) >> 15;
                v132 += v125;
                v141 = 23170 * *(__int16*)(a6 + v133);
                v142 = 23170 * *(__int16*)(a6 + v134) + 0x4000;
                *(_WORD*)(a6 + v134) = (unsigned int)(v142 + v141) >> 15;
                *(_WORD*)(a6 + v133) = (unsigned int)(v142 - v141) >> 15;
                v134 += v122;
                v133 += v125;
                v143 = 23170 * *(__int16*)(a6 + v135);
                v144 = 23170 * *(__int16*)(a6 + v136) + 0x4000;
                *(_WORD*)(a6 + v136) = (unsigned int)(v144 + v143) >> 15;
                *(_WORD*)(a6 + v135) = (unsigned int)(v144 - v143) >> 15;
                v136 += v122;
                v135 += v125;
                v145 = 23170 * *(__int16*)(a6 + v137);
                v146 = 23170 * *(__int16*)(a6 + v138) + 0x4000;
                *(_WORD*)(a6 + v138) = (unsigned int)(v146 + v145) >> 15;
                *(_WORD*)(a6 + v137) = (unsigned int)(v146 - v145) >> 15;
                v138 += v122;
                v137 += v125;
              } while (v117 != v131);
            }
            if (v263 != 0) {
              v147 = v263;
              v148 = (__int16*)(v120 + 2LL * v258 * ((2 * v131) | 1));
              v149 = (__int16*)(v120 + v121 * v131);
              do {
                --v147;
                v150 = 23170 * *v148;
                v151 = 23170 * *v149 + 0x4000;
                *v149 = (unsigned int)(v151 + v150) >> 15;
                *v148 = (unsigned int)(v151 - v150) >> 15;
                v148 += 2 * v258;
                v149 = (__int16*)((char*)v149 + v121);
              } while (v147 != 0);
            }
            v81 = v267;
            ++v119;
            v124 += 2;
            v127 += 2;
            v123 += 2;
            v128 += 2;
            v130 += 2;
            v129 += 2;
            v126 += 2;
            v120 += 2;
            v118 = v266 + 2;
          } while (v119 != v258);
        }
        v22 = v250;
        a11 = (v254 << v258) | v254;
        ++v257;
        if ((v253 & 2) != 0) {
          break;
        }
        v152 = v255;
        v11 = v249;
        v79 = v81;
        v78 = v255;
        v80 = v252 + 1;
        if (v252 >= -1) {
          v153 = v255;
          if ((int)v255 < 2) {
            goto LABEL_78;
          }
          goto LABEL_71;
        }
      }
      v11 = v249;
      v152 = v255;
      v153 = v255;
      if ((int)v255 >= 2) {
        goto LABEL_71;
      }
    LABEL_78:
      v259 = quant_partition(a1, a2, (unsigned int)v22, a4);
      if (a1[1] != 0) {
      LABEL_79:
        if (v257 != 0) {
          v157 = 0;
          do {
            v158 = (unsigned int)(v153 >> 1);
            v256 = v157;
            v268 = v81;
            v264 = (2 * v81) >> 1;
            if ((int)v158 >= 1 && (2 * v81) >> 1 >= 1) {
              v160 = 2LL * (unsigned int)(v153 >> 1);
              v161 = 4LL * (unsigned int)(v153 >> 1);
              v162 = 16LL * (unsigned int)(v153 >> 1);
              v163 = 0;
              v164 = 0;
              v165 = a2;
              v166 = v162 - v160;
              v260 = v160;
              v261 = (unsigned int)(v153 >> 1);
              v167 = 2 * (v161 + v158);
              v168 = (unsigned __int64)(unsigned int)v153 >> 1;
              v169 = 16 * v168;
              v170 = 8 * v168;
              v171 = 4 * v168;
              v172 = 12 * v168;
              v173 = 2 * (v160 + v158);
              v174 = 4 * v168;
              do {
                if (v264 >= 4) {
                  v175 = 0;
                  v176 = v163;
                  v177 = v160;
                  v178 = v173;
                  v179 = v174;
                  v180 = v167;
                  v181 = v170;
                  v182 = v166;
                  v183 = v172;
                  do {
                    v175 += 4;
                    v184 = 23170 * *(__int16*)((char*)a2 + v177);
                    v185 = 23170 * *(__int16*)((char*)a2 + v176) + 0x4000;
                    *(__int16*)((char*)a2 + v176) =
                        (unsigned int)(v185 + v184) >> 15;
                    *(__int16*)((char*)a2 + v177) =
                        (unsigned int)(v185 - v184) >> 15;
                    v177 += v162;
                    v176 += v169;
                    v186 = 23170 * *(__int16*)((char*)a2 + v178);
                    v187 = 23170 * *(__int16*)((char*)a2 + v179) + 0x4000;
                    *(__int16*)((char*)a2 + v179) =
                        (unsigned int)(v187 + v186) >> 15;
                    *(__int16*)((char*)a2 + v178) =
                        (unsigned int)(v187 - v186) >> 15;
                    v179 += v169;
                    v178 += v162;
                    v188 = 23170 * *(__int16*)((char*)a2 + v180);
                    v189 = 23170 * *(__int16*)((char*)a2 + v181) + 0x4000;
                    *(__int16*)((char*)a2 + v181) =
                        (unsigned int)(v189 + v188) >> 15;
                    *(__int16*)((char*)a2 + v180) =
                        (unsigned int)(v189 - v188) >> 15;
                    v181 += v169;
                    v180 += v162;
                    v190 = 23170 * *(__int16*)((char*)a2 + v182);
                    v191 = 23170 * *(__int16*)((char*)a2 + v183) + 0x4000;
                    *(__int16*)((char*)a2 + v183) =
                        (unsigned int)(v191 + v190) >> 15;
                    *(__int16*)((char*)a2 + v182) =
                        (unsigned int)(v191 - v190) >> 15;
                    v183 += v169;
                    v182 += v162;
                  } while ((v264 & 0x7FFFFFFC) != v175);
                }
                else {
                  v175 = 0;
                }
                if ((v264 & 3) != 0) {
                  v192 = v264 & 3;
                  v193 = (__int16*)((char*)v165 + v171 * v175);
                  v194 = (__int16*)((char*)v165 + v260 * ((2 * v175) | 1));
                  do {
                    --v192;
                    v195 = 23170 * *v194;
                    v196 = 23170 * *v193 + 0x4000;
                    *v193 = (unsigned int)(v196 + v195) >> 15;
                    *v194 = (unsigned int)(v196 - v195) >> 15;
                    v194 = (__int16*)((char*)v194 + v161);
                    v193 = (__int16*)((char*)v193 + v171);
                  } while (v192 != 0);
                }
                LODWORD(v158) = v261;
                ++v164;
                v172 += 2;
                v166 += 2;
                v170 += 2;
                v167 += 2;
                v174 += 2;
                v173 += 2;
                v160 += 2;
                v163 += 2;
                ++v165;
              } while (v164 != v261);
            }
            v153 = v158;
            v81 = 2 * v268;
            v259 |= v259 >> v158;
            v157 = v256 + 1;
          } while (v256 + 1 != v257);
        }
        else {
          LODWORD(v158) = v153;
        }
        if (v243 != 0) {
          v201 = v244;
          v202 = v250;
          v203 = 0;
          do {
            v259 = MovieData_a2220[v259];
            if (v203 == 31 || (int)(v205 = v250 >> v203 >> 1) <= 0) {
              v204 = v203 + 1;
            }
            else {
              v204 = v203 + 1;
              v206 = 0;
              do {
                v207 = &a2[v206];
                if (v205 >= 4) {
                  v209 = 7;
                  v208 = 0;
                  do {
                    v210 = v208 << v204;
                    v211 = 2 * ((v209 - 6) << v203);
                    v212 = 23170 * v207[v210] + 0x4000;
                    v213 = 23170 * *(__int16*)((char*)v207 + v211);
                    v207[v210] = (unsigned int)(v212 + v213) >> 15;
                    *(__int16*)((char*)v207 + v211) =
                        (unsigned int)(v212 - v213) >> 15;
                    v214 = (v208 + 1) << v204;
                    v215 = (v209 - 4) << v203;
                    LODWORD(v211) = 23170 * v207[v214] + 0x4000;
                    v216 = 23170 * v207[v215];
                    v207[v214] = (unsigned int)(v211 + v216) >> 15;
                    v207[v215] = (unsigned int)(v211 - v216) >> 15;
                    v217 = 2 * ((v208 + 2) << v204);
                    v218 = 2 * ((v209 - 2) << v203);
                    v219 = 23170 * *(__int16*)((char*)v207 + v218);
                    LODWORD(v211) =
                        23170 * *(__int16*)((char*)v207 + v217) + 0x4000;
                    *(__int16*)((char*)v207 + v217) =
                        (unsigned int)(v211 + v219) >> 15;
                    LODWORD(v217) = v211 - v219;
                    v220 = v209 << v203;
                    v209 += 8;
                    v220 *= 2;
                    *(__int16*)((char*)v207 + v218) = (unsigned int)v217 >> 15;
                    v221 = v208 + 3;
                    v208 += 4;
                    v222 = v221 << v204;
                    v223 = 23170 * *(__int16*)((char*)v207 + v220);
                    LODWORD(v218) = 23170 * v207[v222] + 0x4000;
                    v207[v222] = (unsigned int)(v218 + v223) >> 15;
                    *(__int16*)((char*)v207 + v220) =
                        (unsigned int)(v218 - v223) >> 15;
                  } while (v208 != (v205 & 0x7FFFFFFC));
                }
                else {
                  v208 = 0;
                }
                if ((v205 & 3) != 0) {
                  v224 = (2 * v208) | 1;
                  v225 = v205 & 3;
                  do {
                    v226 = v208 << v204;
                    v227 = v224 << v203;
                    ++v208;
                    v224 += 2;
                    --v225;
                    v226 *= 2;
                    v227 *= 2;
                    v228 = 23170 * *(__int16*)((char*)v207 + v227);
                    v229 = 23170 * *(__int16*)((char*)v207 + v226) + 0x4000;
                    *(__int16*)((char*)v207 + v226) =
                        (unsigned int)(v229 + v228) >> 15;
                    *(__int16*)((char*)v207 + v227) =
                        (unsigned int)(v229 - v228) >> 15;
                  } while (v225 != 0);
                }
                ++v206;
              } while (v206 != 1 << v203);
            }
            v203 = v204;
          } while (v204 != v251);
        }
        else {
          v201 = v244;
          v202 = v250;
        }
        if (v201 == nullptr) {
          return v259 & ~(-1 << ((_DWORD)v158 << v248));
        }
        v230 = celt_sqrt((unsigned int)(v202 << 22));
        if (v202 < 1) {
          return v259 & ~(-1 << ((_DWORD)v158 << v248));
        }
        v231 = v202 & 7;
        if ((unsigned int)v202 >= 8) {
          v235 = v201 + 4;
          v236 = a2 + 4;
          v237 = 0;
          do {
            v237 -= 8;
            *(v235 - 4) = (unsigned int)(v230 * *(v236 - 4)) >> 15;
            *(v235 - 3) = (unsigned int)(v230 * *(v236 - 3)) >> 15;
            *(v235 - 2) = (unsigned int)(v230 * *(v236 - 2)) >> 15;
            *(v235 - 1) = (unsigned int)(v230 * *(v236 - 1)) >> 15;
            *v235 = (unsigned int)(v230 * *v236) >> 15;
            v235[1] = (unsigned int)(v230 * v236[1]) >> 15;
            v235[2] = (unsigned int)(v230 * v236[2]) >> 15;
            v238 = v236[3];
            v236 += 8;
            v235[3] = (unsigned int)(v230 * v238) >> 15;
            v235 += 8;
          } while (-(__int64)(v202 & 0x7FFFFFF8) != v237);
          v232 = -v237;
          if ((v202 & 7) == 0) {
            return v259 & ~(-1 << ((_DWORD)v158 << v248));
          }
        }
        else {
          v232 = 0;
          if ((v202 & 7) == 0) {
            return v259 & ~(-1 << ((_DWORD)v158 << v248));
          }
        }
        v239 = &v201[v232];
        v240 = &a2[v232];
        do {
          v241 = *v240++;
          --v231;
          *v239++ = (unsigned int)(v230 * v241) >> 15;
        } while (v231 != 0);
        return v259 & ~(-1 << ((_DWORD)v158 << v248));
      }
      return v259;
    }
  }
  v152 = a5 >> v248;
  v81 = v20 << v248;
  v153 = v78;
  if (v78 < 2) {
    goto LABEL_78;
  }
LABEL_71:
  v154 = v81 >> v248;
  v155 = v152 << v248;
  if (v11 != 0) {
    v156 = a6;
    MovieRoutine_23220(a2, v154, v155, v245);
    a6 = v156;
  }
  if (a6 != 0) {
    MovieRoutine_23220(a6, v154, v155, v245);
  }
  v259 = quant_partition(a1, a2, (unsigned int)v22, a4);
  if (a1[1] != 0) {
    interleave_hadamard(a2, v154, v155, v245);
    goto LABEL_79;
  }
  return v259;
}

#pragma GCC visibility pop
