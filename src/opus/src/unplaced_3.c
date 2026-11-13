#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* MovieRoutine_7ac60(_QWORD* result);
__int16* celt_encoder_2b1e0(__int16* result, __int64, int, int, int, __int16*,
                            int*, int);
__int64 MovieCalloc_plt(_QWORD, _QWORD);
__int64 MovieFree_plt(_QWORD);
__int64 MovieMalloc_plt(_QWORD);
__int64 MovieRoutine_694e0(int*, __int64, int, _BYTE*, int, int, __int64, int,
                           unsigned int, unsigned int, unsigned int, __int64,
                           int);
__int64 MovieRoutine_7a3b0(__int64);
__int64 MovieRoutine_7a3c0(__int64, int);
__int64 MovieRoutine_7b4c0(__int64, __int64, unsigned __int16);
__int64 MovieRoutine_7e1c0(__int64 result);
__int64 MovieRoutine_80560(__int64, __int64, __int64, __int64, unsigned int);
__int64 MovieRoutine_80920(__int64, __int64);
__int64 MovieRoutine_80960(int*, __int64);
__int64 MovieRoutine_80ce0(__int64*, _DWORD*, __int64, int, unsigned int);
__int64 MovieRoutine_81060(_QWORD*, __int64, __int64, int, unsigned int);
__int64 MovieRoutine_81160(_QWORD*, __int64, __int64, int, int);
__int64 MovieRoutine_812c0(__int64*, __int64, __int64, int, __int64, int,
                           unsigned int);
__int64 compute_band_energies(__int64 result, __int64, __int64, int, int, int);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 memset_plt_alt1(_QWORD, _QWORD, _QWORD) __asm__("memset_plt");
__int64 op_pvq_search_c(__int64 result, int, int, __int64, __int64, int);
__int64 opus_repacketizer_cat_plt(_QWORD, _QWORD, _QWORD);
__int64 opus_repacketizer_init_plt(_QWORD);
__int64 opus_repacketizer_out_range_impl(char*, unsigned int, int, _BYTE*, int,
                                         int, int);
__int64 opus_src_804b0_alt1(int, _DWORD*) __asm__("opus_src_804b0");
__int64 resampling_factor(int);
extern _DWORD MovieData_a2210[4];
extern _DWORD MovieData_b1590[256];
extern _DWORD MovieData_b3a84[129];
extern _QWORD MovieData_a2240[2];
extern _UNKNOWN* MovieData_c0bf0;
extern _UNKNOWN MovieData_a2400;
extern _UNKNOWN MovieData_b399e;
extern _UNKNOWN MovieData_b3a04;
extern _UNKNOWN MovieData_b3a44;
extern _UNKNOWN MovieData_b3c88;
extern _UNKNOWN MovieData_b3e90;
extern unsigned __int16 MovieData_a94e0[20];
extern unsigned __int16 MovieData_b3998[3];
unsigned __int64 MovieRoutine_39d00(__int64, __int64, _DWORD*, __int16*,
                                    __int64, int, int);
__int64 opus_src_6c400(int* a1, __int64 a2, int a3, int a4, _BYTE* a5, int a6,
                       int a7, int a8, int a9);
__int64 opus_src_76400(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                       __int64 a5, unsigned int a6, __int64 a7, int a8, int a9,
                       void (*a10)(__int16*, __int64, __int64, _QWORD, _QWORD,
                                   __int64, _QWORD));
__int64 opus_src_7ad00(__int64 a1, __int64 a2);
_DWORD* opus_src_7b9e0(__int64 a1, __int64 a2, _DWORD* a3);
__int64 opus_src_7bce0(_QWORD* a1, __int64 a2, _DWORD* a3, __int64 a4);
__int64 opus_src_7e220(__int64 a1, __int64 a2, __int64 a3);
__int64 opus_src_7e740(_QWORD* a1, __int64 a2, _QWORD* a3, __int64 a4, int a5);
__int64 opus_src_7fb50(unsigned int a1);
__int64 opus_src_7fb80(__int64 a1);
__int64 opus_src_7fca0(__int64 a1, int* a2);
__int64 opus_src_804b0(unsigned int a1, _DWORD* a2);
__int64 opus_src_80500(__int64 a1, unsigned int a2);
__int64 opus_src_80de0(__int64 a1, __int64 a2, __int64 a3, int a4);
__int64 opus_src_813e0(__int64 a1, __int64 a2, _DWORD* a3, __int64 a4,
                       __int64 a5, __int64 a6, int a7);
void* opus_src_81b40(__int64 a1, int a2, unsigned int a3, int* a4, __int64 a5,
                     int a6, int a7, int a8);
__int64 opus_src_82460(__int64 a1, __int64 a2);
__int64 opus_src_825a0(__int64 a1, int* a2, __int64 a3);

__int64 opus_src_6c400(int* a1, __int64 a2, int a3, int a4, _BYTE* a5, int a6,
                       int a7, int a8, int a9)
{
  unsigned __int64 v9;
  int v11;
  int v15;
  int v16;
  __int64 v17;
  unsigned __int64 v18;
  _BYTE* v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned int v30;
  int v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned int v35;
  __int64 result;
  int v37;
  int v38;
  char v39[496];
  struct {
    __int64 v40;
    int v41;
    int v42;
    int v43;
    int v44;
    _BYTE* v45;
    char gap576_[4];
    int v46;
    unsigned int v47;
    int v48;
    __int64 v49;
    char gap600_[4];
    int v50;
  } v40_;

  v9 = (unsigned int)(a3 - 1);
  v40_.v50 = a8;
  v11 = a6;
  v40_.v49 = a2;
  v40_.v45 = a5;
  v15 = 2 * v9 + 2;
  if (a3 == 2) {
    v15 = 3;
  }
  if (a1[37] == 0 && a1[41] != -1 &&
      3 * a1[40] / (24 * a1[36] / (a4 * a3)) < a6) {
    v11 = 3 * a1[40] / (24 * a1[36] / (a4 * a3));
  }
  v16 = (v11 - v15) / a3;
  if (v16 >= 1275) {
    v16 = 1275;
  }
  v17 = v16 + 1LL;
  v18 = (int)v17 * a3;
  v19 = (char*)&v40_.v40 - ((v18 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  memset_plt((__int64)v19, 0, v18);
  memset_plt((__int64)v39, 0, 0x1F0u);
  opus_repacketizer_init_plt(v39);
  v20 = a1[3556];
  v21 = a1[34];
  v22 = a1[32];
  v23 = a1[30];
  v24 = a1[17];
  v40_.v46 = v11;
  a1[34] = v20;
  v25 = a1[3560];
  v40_.v43 = v22;
  v40_.v44 = v21;
  v40_.v41 = v24;
  v40_.v42 = v23;
  a1[32] = v25;
  v26 = a1[3548];
  a1[30] = v26;
  if (v24 == 0) {
    a1[3558] = v26;
    v40_.v47 = a3;
    if (a3 < 1) {
      goto LABEL_25;
    }
  LABEL_13:
    v40_.v48 = a9;
    if (a7 != 0) {
      v27 = 0;
      v28 = 0;
      v29 = v40_.v47;
      while (1) {
        a1[17] = 0;
        a1[4053] = v28 < v9;
        if (v9 == v28) {
          a1[34] = 1002;
        }
        v30 = MovieRoutine_694e0(a1, v40_.v49 + 2LL * v27 * a1[28], a4, v19,
                                 v17, v40_.v50, 0, 0, 0, 0, 0, 0, v40_.v48);
        if ((v30 & 0x80000000) != 0 ||
            (opus_repacketizer_cat_plt(v39, v19, v30) & 0x80000000) != 0) {
          break;
        }
        ++v28;
        v19 += (int)v17;
        v27 += a4;
        if (v29 == v28) {
          goto LABEL_25;
        }
      }
    }
    else {
      v31 = 0;
      v32 = 0;
      v33 = v40_.v47;
      while (1) {
        v34 = v40_.v49;
        a1[17] = 0;
        a1[4053] = v32 < v9;
        v35 = MovieRoutine_694e0(a1, v34 + 2LL * v31 * a1[28], a4, v19, v17,
                                 v40_.v50, 0, 0, 0, 0, 0, 0, v40_.v48);
        if ((v35 & 0x80000000) != 0 ||
            (opus_repacketizer_cat_plt(v39, v19, v35) & 0x80000000) != 0) {
          break;
        }
        ++v32;
        v19 += v17;
        v31 += a4;
        if (v33 == v32) {
          goto LABEL_25;
        }
      }
    }
    return 4294967293LL;
  }
  a1[30] = 1;
  v40_.v47 = a3;
  if (a3 >= 1) {
    goto LABEL_13;
  }
LABEL_25:
  result = opus_repacketizer_out_range_impl(v39, 0, v40_.v47, v40_.v45,
                                            v40_.v46, 0, a1[37] == 0);
  if ((result & 0x80000000) == 0) {
    v37 = v40_.v43;
    a1[34] = v40_.v44;
    a1[32] = v37;
    v38 = v40_.v41;
    a1[30] = v40_.v42;
    a1[17] = v38;
    return result;
  }
  return 4294967293LL;
}

__int64 opus_src_76400(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                       __int64 a5, unsigned int a6, __int64 a7, int a8, int a9,
                       void (*a10)(__int16*, __int64, __int64, _QWORD, _QWORD,
                                   __int64, _QWORD))
{
  __int64 v12;
  __int64* v13;
  int v14;
  char* v15;
  int v16;
  __int64 v17;
  int v18;
  int v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  _DWORD* v23;
  int v24;
  char* v25;
  int v26;
  int v27;
  __int16 v28;
  unsigned int v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  _BYTE* v35;
  __int16* v36;
  signed int v37;
  _DWORD* v38;
  __int64 v39;
  unsigned int v40;
  unsigned int v41;
  unsigned int v42;
  unsigned int v43;
  unsigned int v44;
  unsigned int v45;
  unsigned int v46;
  unsigned int v47;
  unsigned int v48;
  unsigned int v49;
  unsigned int v50;
  unsigned int v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;
  unsigned int v56;
  unsigned int v57;
  unsigned int v58;
  unsigned int v59;
  int v60;
  __int16* v61;
  int v62;
  unsigned int v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  _DWORD* v67;
  int v68;
  int v69;
  int v70;
  int v71;
  _DWORD* v72;
  __int64 v73;
  __int16* v74;
  __int64 v75;
  unsigned int v76;
  __int16* v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  int v112;
  int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  int v118;
  int v119;
  int v120;
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
  __int64 v148;
  int v149;
  __int16* v150;
  __int64 i;
  signed int v152;
  int v153;
  bool v154;
  int v155;
  int v156;
  unsigned int v157;
  int v158;
  signed int v159;
  int v160;
  bool v161;
  int v162;
  int v163;
  unsigned int v164;
  int v165;
  __int64 v166;
  __int16* v167;
  unsigned __int64* v168;
  signed int v169;
  int v170;
  bool v171;
  int v172;
  int v173;
  signed int v174;
  int v175;
  bool v176;
  int v177;
  int v178;
  signed int v179;
  int v180;
  bool v181;
  int v182;
  int v183;
  __int16* v184;
  __int64 v185;
  signed int v186;
  int v187;
  bool v188;
  int v189;
  int v190;
  signed int v191;
  int v192;
  bool v193;
  int v194;
  int v195;
  signed int v196;
  int v197;
  bool v198;
  int v199;
  int v200;
  __int16 v201;
  __int16 v202;
  __int16 v203;
  __int16 v204;
  __int16 v205;
  __int16 v206;
  __int16 v207;
  __int16 v208;
  __int16 v209;
  __int16 v210;
  int v211;
  __int16 v212;
  __int16 v213;
  __int16 v214;
  __int16 v215;
  __int16 v216;
  __int16 v217;
  __int16 v218;
  __int16 v219;
  __int16 v220;
  __int16 v221;
  __int16 v222;
  __int16 v223;
  __int16 v224;
  __int16 v225;
  int v226;
  int v227;
  int v228;
  __int16 v229;
  int v230;
  int v231;
  __int16 v232;
  __int16 v233;
  int v234;
  signed int v235;
  __int16 v236;
  __int16 v237;
  __int16 v238;
  __int16 v239;
  __int16 v240;
  __int16 v241;
  __int16 v242;
  unsigned int v243;
  __int16 v244;
  __int16 v245;
  __int16 v246;
  __int16 v247;
  __int16 v248;
  __int16 v249;
  char v250;
  bool v251;
  char v252;
  unsigned int v253;
  int v254;
  int v255;
  unsigned int v256;
  __int64 result;
  __int64* v258;
  __int64 v259;
  __int64 v260;
  _WORD* v261;
  _WORD* v262;
  __int16 v263;
  __int16 v264;
  __int16 v265;
  int v266;
  __int16 v267;
  __int16 v268;
  __int16 v269;
  __int16 v270;
  __int16 v271;
  __int16 v272;
  __int16 v273;
  __int16 v274;
  __int16 v275;
  __int16 v276;
  __int16 v277;
  __int16 v278;
  __int16 v279;
  __int16 v280;
  int v281;
  __int16 v282;
  __int16 v283;
  __int16 v284;
  __int16 v285;
  __int16 v286;
  __int16 v287;
  __int16 v288;
  __int16 v289;
  __int16 v290;
  __int16 v291;
  __int16 v292;
  __int16 v293;
  __int16 v294;
  __int16 v295;
  __int16 v296;
  __int16 v297;
  __int16 v298;
  __int16 v299;
  __int16 v300;
  __int16 v301;
  __int16 v302;
  __int16 v303;
  __int16 v304;
  __int16 v305;
  __int16 v306;
  __int16 v307;
  __int16 v308;
  int v309;
  int v310;
  __int64 v311;
  struct {
    _BYTE v312[12];
    int v313;
    char* v314;
    unsigned __int64* v315;
    __int64 v316;
    char* v317;
    __int64 v318;
    _DWORD* v319;
    _BYTE* v320;
    __int64 v321;
    unsigned __int64 v322;
    __int64 v323;
    void (*v324)(__int16*, __int64, __int64, _QWORD, _QWORD, __int64, _QWORD);
    __int16* v325;
    __int64 v326;
    __int64 v327;
    __int64 v328;
    __int64 v329;
    char gap144_[4];
    int v330;
    __int64 v331;
    char gap160_[4];
    int v332;
    __int64 v333;
    __int64 v334;
    __int64 v335;
    __int64 v336;
    __int64 v337;
    __int64 v338;
    __int64 v339;
    _BYTE* v340;
  } v312_;
  struct {
    __int64 v341;
    __int64 v342;
    __int64 v343;
    __int64 v344;
    __int64 v345;
    __int64 v346;
    __int64 v347;
    __int64 v348;
    __int64 v349;
    __int64 v350;
    int v351;
  } v341_;
  struct {
    unsigned __int64 v352;
    unsigned __int64 v353;
    unsigned __int64 v354;
    unsigned __int64 v355;
    unsigned __int64 v356;
    unsigned __int64 v357;
    unsigned __int64 v358;
    unsigned __int64 v359;
    unsigned __int64 v360;
    unsigned __int64 v361;
  } v352_;
  unsigned __int64 v362;
  struct {
    unsigned __int64 v363;
    unsigned __int64 v364;
    unsigned __int64 v365;
    unsigned __int64 v366;
    int v367;
    __int16 v368;
  } v363_;
  struct {
    unsigned __int64 v369;
    unsigned __int64 v370;
    unsigned __int64 v371;
    unsigned __int64 v372;
    unsigned __int64 v373;
    unsigned __int64 v374;
    unsigned __int64 v375;
    unsigned __int64 v376;
    unsigned __int64 v377;
    unsigned __int64 v378;
    int v379;
  } v369_;
  __int64 v380;
  __int64 v381;
  __int64 v382;
  _QWORD v383[2];

  v312_.v338 = a7;
  v12 = a6;
  v312_.v327 = a5;
  v312_.v328 = a4;
  v13 = &v382;
  v312_.v335 = a3;
  v312_.v326 = a2;
  v382 = 0;
  v383[0] = 0;
  v380 = 0;
  v381 = 0;
  v369_.v379 = 0;
  v369_.v377 = 0;
  v369_.v378 = 0;
  v369_.v375 = 0;
  v369_.v376 = 0;
  v369_.v373 = 0;
  v369_.v374 = 0;
  v369_.v371 = 0;
  v369_.v372 = 0;
  v369_.v369 = 0;
  v369_.v370 = 0;
  v14 = resampling_factor(a9);
  v15 = (char*)&v382 + 4;
  v16 = v14;
  v312_.v329 = v12;
  v312_.v332 = v14 * v12;
  if (v14 * (int)v12 >= 960) {
    v17 = 960;
  }
  else {
    v17 = (unsigned int)(v14 * v12);
  }
  v312_.v331 = v17;
  v18 = *(_DWORD*)(a1 + 32);
  if (v18 < 1) {
    v19 = 0;
  }
  else {
    v19 = 0;
    while (*(_DWORD*)(a1 + 40) << v19 != v312_.v332) {
      if (v18 == ++v19) {
        v19 = *(_DWORD*)(a1 + 32);
        break;
      }
    }
  }
  v20 = 4LL * (v312_.v332 + (int)v312_.v338);
  v312_.v340 = &v312_.v312[-((v20 + 15) & 0xFFFFFFFFFFFFFFF0LL)];
  memset_plt((__int64)v312_.v340, 0, v20);
  v21 = 2LL * (int)v312_.v329;
  v312_.v325 = (__int16*)&v312_.v312[-((v21 + 15) & 0xFFFFFFFFFFFFFFF0LL)];
  memset_plt((__int64)v312_.v325, 0, v21);
  v22 = 4LL * (int)v312_.v331;
  v23 = &v312_.v312[-((v22 + 15) & 0xFFFFFFFFFFFFFFF0LL)];
  memset_plt((__int64)v23, 0, v22);
  if (a8 > 4) {
    if ((unsigned int)(a8 - 5) >= 2) {
      if (a8 == 7) {
        v26 = 2;
        v24 = 0;
        v380 = 0x200000001LL;
        v381 = 0x100000003LL;
        v27 = 3;
        v25 = (char*)&v382;
        v13 = (__int64*)((char*)&v382 + 4);
        v15 = (char*)v383;
      }
      else {
        if (a8 != 8) {
          goto LABEL_21;
        }
        v24 = 0;
        v25 = (char*)&v382 + 4;
        v15 = (char*)v383 + 4;
        v13 = v383;
        v380 = 0x200000001LL;
        v381 = 0x100000003LL;
        v26 = 3;
        v27 = 1;
        LODWORD(v382) = 3;
      }
      goto LABEL_20;
    }
  }
  else if (a8 != 3) {
    if (a8 == 4) {
      v26 = 1;
      v13 = &v381;
      v25 = (char*)&v380 + 4;
      v27 = 3;
      v15 = (char*)&v381 + 4;
      LODWORD(v380) = 1;
      v24 = 3;
    LABEL_20:
      *(_DWORD*)v25 = v27;
      *(_DWORD*)v13 = v26;
      *(_DWORD*)v15 = v24;
    }
  LABEL_21:
    v28 = -28672;
    v312_.v330 = a8;
    v363_.v368 = -28672;
    v352_.v352 = 0x9000900090009000LL;
    v352_.v353 = 0x9000900090009000LL;
    v352_.v354 = 0x9000900090009000LL;
    v352_.v355 = 0x9000900090009000LL;
    v352_.v356 = 0x9000900090009000LL;
    v352_.v357 = 0x9000900090009000LL;
    v352_.v358 = 0x9000900090009000LL;
    v352_.v359 = 0x9000900090009000LL;
    v352_.v360 = 0x9000900090009000LL;
    v352_.v361 = 0x9000900090009000LL;
    v362 = 0x9000900090009000LL;
    v363_.v363 = 0x9000900090009000LL;
    v363_.v364 = 0x9000900090009000LL;
    v363_.v365 = 0x9000900090009000LL;
    v363_.v366 = 0x9000900090009000LL;
    v363_.v367 = -1879011328;
    v312_.v313 = a8 - 1;
    if (a8 >= 1) {
      v29 = a8;
      v30 = 0;
      v31 = 0;
      v32 = 4LL * (int)v312_.v338;
      v33 = v312_.v328;
      v312_.v323 = (int)v312_.v338;
      v312_.v324 = a10;
      v312_.v322 = v32;
      v312_.v320 = &v312_.v340[4 * v312_.v332];
      v312_.v321 = v29;
      v312_.v319 = v23 + 4;
      v312_.v317 = (char*)&v362 + 6;
      v312_.v318 = v312_.v335 + 2;
      v312_.v314 = (char*)&v352_.v352 + 4;
      v312_.v315 = &v363_.v363;
      v312_.v316 = v312_.v335 + 4;
      v312_.v339 = (unsigned int)(v312_.v332 / (int)v312_.v331);
      while (1) {
        v312_.v336 = 2LL * (unsigned int)v30;
        v34 = v33 + 4 * v31 * v312_.v323;
        v35 = v312_.v340;
        v312_.v333 = v31 * v312_.v323;
        v312_.v334 = v30;
        memcpy_plt((__int64)v312_.v340, v34, v32);
        v36 = v312_.v325;
        v312_.v324(v312_.v325, 1, v312_.v326, (unsigned int)v312_.v330,
                   (unsigned int)v31, v312_.v329, 0);
        v312_.v337 = v31;
        celt_encoder_2b1e0(v36, (__int64)&v35[v32], v312_.v332, 1, v16,
                           (__int16*)(a1 + 16), (int*)(v312_.v327 + 4 * v31),
                           0);
        v37 = v312_.v331;
        v38 = v312_.v319;
        v369_.v379 = 0;
        v369_.v377 = 0;
        v369_.v378 = 0;
        v369_.v375 = 0;
        v369_.v376 = 0;
        v369_.v373 = 0;
        v369_.v374 = 0;
        v369_.v371 = 0;
        v369_.v372 = 0;
        v369_.v369 = 0;
        v369_.v370 = 0;
        if ((int)v312_.v339 >= 1) {
          break;
        }
      LABEL_82:
        v73 = v312_.v337;
        v74 = (__int16*)(v312_.v318 + v312_.v336);
        v75 = v312_.v335;
        v76 = 21 * v312_.v337;
        op_pvq_search_c(a1, 21, 21, (__int64)&v369_.v369,
                        v312_.v335 + 42 * v312_.v337, 1);
        v77 = (__int16*)(v75 + 2LL * v76);
        v78 = v77[1];
        if (*v77 - 1024 > v78) {
          v78 = *v77 - 1024;
        }
        v79 = v77[2];
        v77[1] = v78;
        v80 = v78 - 1024;
        if (v80 <= v79) {
          v80 = v79;
        }
        v81 = v77[3];
        v77[2] = v80;
        v82 = v80 - 1024;
        if (v82 <= v81) {
          v82 = v81;
        }
        v83 = v77[4];
        v77[3] = v82;
        v84 = v82 - 1024;
        if (v84 <= v83) {
          v84 = v83;
        }
        v85 = v77[5];
        v77[4] = v84;
        v86 = v84 - 1024;
        if (v86 <= v85) {
          v86 = v85;
        }
        v87 = v77[6];
        v77[5] = v86;
        v88 = v86 - 1024;
        if (v88 <= v87) {
          v88 = v87;
        }
        v89 = v77[7];
        v77[6] = v88;
        v90 = v88 - 1024;
        if (v90 <= v89) {
          v90 = v89;
        }
        v91 = v77[8];
        v77[7] = v90;
        v92 = v90 - 1024;
        if (v92 <= v91) {
          v92 = v91;
        }
        v93 = v77[9];
        v77[8] = v92;
        v94 = v92 - 1024;
        if (v94 <= v93) {
          v94 = v93;
        }
        v95 = v77[10];
        v77[9] = v94;
        v96 = v94 - 1024;
        if (v96 <= v95) {
          v96 = v95;
        }
        v97 = v77[11];
        v77[10] = v96;
        v98 = v96 - 1024;
        if (v98 <= v97) {
          v98 = v97;
        }
        v99 = v77[12];
        v77[11] = v98;
        v100 = v98 - 1024;
        if (v100 <= v99) {
          v100 = v99;
        }
        v101 = v77[13];
        v77[12] = v100;
        v102 = v100 - 1024;
        if (v102 <= v101) {
          v102 = v101;
        }
        v103 = v77[14];
        v77[13] = v102;
        v104 = v102 - 1024;
        if (v104 <= v103) {
          v104 = v103;
        }
        v105 = v77[15];
        v77[14] = v104;
        v106 = v104 - 1024;
        if (v106 <= v105) {
          v106 = v105;
        }
        v107 = v77[16];
        v77[15] = v106;
        if (v106 - 1024 > v107) {
          v107 = v106 - 1024;
        }
        v108 = v77[17];
        v77[16] = v107;
        if (v107 - 1024 > v108) {
          v108 = v107 - 1024;
        }
        v109 = v77[18];
        v77[17] = v108;
        if (v108 - 1024 > v109) {
          v109 = v108 - 1024;
        }
        v110 = v77[19];
        v77[18] = v109;
        if (v109 - 1024 > v110) {
          v110 = v109 - 1024;
        }
        v111 = v77[20];
        v77[19] = v110;
        if (v110 - 1024 > v111) {
          v111 = v110 - 1024;
        }
        v77[20] = v111;
        v112 = v111 - 2048;
        if (v112 > v110) {
          v110 = v112;
        }
        v77[19] = v110;
        v113 = v110 - 2048;
        if (v113 > v109) {
          v109 = v113;
        }
        v77[18] = v109;
        v114 = v109 - 2048;
        if (v114 > v108) {
          v108 = v114;
        }
        v77[17] = v108;
        v115 = v108 - 2048;
        if (v115 > v107) {
          v107 = v115;
        }
        v77[16] = v107;
        v116 = v107 - 2048;
        if (v116 > v106) {
          v106 = v116;
        }
        v117 = v77[14];
        v77[15] = v106;
        v118 = v106 - 2048;
        if (v118 <= v117) {
          v118 = v117;
        }
        v119 = v77[13];
        v77[14] = v118;
        v120 = v118 - 2048;
        if (v120 <= v119) {
          v120 = v119;
        }
        v121 = v77[12];
        v77[13] = v120;
        v122 = v120 - 2048;
        if (v122 <= v121) {
          v122 = v121;
        }
        v123 = v77[11];
        v77[12] = v122;
        v124 = v122 - 2048;
        if (v124 <= v123) {
          v124 = v123;
        }
        v125 = v77[10];
        v77[11] = v124;
        v126 = v124 - 2048;
        if (v126 <= v125) {
          v126 = v125;
        }
        v127 = v77[9];
        v77[10] = v126;
        v128 = v126 - 2048;
        if (v128 <= v127) {
          v128 = v127;
        }
        v129 = v77[8];
        v77[9] = v128;
        v130 = v128 - 2048;
        if (v130 <= v129) {
          v130 = v129;
        }
        v131 = v77[7];
        v77[8] = v130;
        v132 = v130 - 2048;
        if (v132 <= v131) {
          v132 = v131;
        }
        v133 = v77[6];
        v77[7] = v132;
        v134 = v132 - 2048;
        if (v134 <= v133) {
          v134 = v133;
        }
        v135 = v77[5];
        v77[6] = v134;
        v136 = v134 - 2048;
        if (v136 <= v135) {
          v136 = v135;
        }
        v137 = v77[4];
        v77[5] = v136;
        v138 = v136 - 2048;
        if (v138 <= v137) {
          v138 = v137;
        }
        v139 = v77[3];
        v77[4] = v138;
        v140 = v138 - 2048;
        if (v140 <= v139) {
          v140 = v139;
        }
        v141 = v77[2];
        v77[3] = v140;
        v142 = v140 - 2048;
        if (v142 <= v141) {
          v142 = v141;
        }
        v143 = v77[1];
        v77[2] = v142;
        v144 = v142 - 2048;
        if (v144 <= v143) {
          v144 = v143;
        }
        v145 = *v77;
        v77[1] = v144;
        v146 = v144 - 2048;
        if (v146 <= v145) {
          LOWORD(v146) = v145;
        }
        *v77 = v146;
        v147 = *((_DWORD*)&v380 + v73);
        if (v147 == 1) {
          v184 = (__int16*)v312_.v314;
          v148 = v312_.v333;
          v149 = v312_.v334;
          v185 = 21;
          v32 = v312_.v322;
          do {
            v186 = *(v184 - 2);
            v187 = *(v74 - 1);
            v189 = v186 - v187;
            v188 = v186 - v187 < 0;
            if (v186 <= v187) {
              LOWORD(v186) = *(v74 - 1);
            }
            if (v188) {
              v190 = -v189;
            }
            else {
              v190 = v189;
            }
            if (v190 < 0x2000) {
              v186 = MovieData_a94e0[v190 >> 9] + (unsigned __int16)v186 +
                     ((((v190 & 0x1FFu) << 6) *
                       (__int16)(MovieData_a94e0[(v190 >> 9) + 1] -
                                 MovieData_a94e0[v190 >> 9])) >>
                      15);
            }
            *(v184 - 2) = v186;
            v191 = *(v184 - 1);
            v192 = *v74;
            v194 = v191 - v192;
            v193 = v191 - v192 < 0;
            if (v191 <= v192) {
              LOWORD(v191) = *v74;
            }
            if (v193) {
              v195 = -v194;
            }
            else {
              v195 = v194;
            }
            if (v195 < 0x2000) {
              v191 = MovieData_a94e0[v195 >> 9] + (unsigned __int16)v191 +
                     ((((v195 & 0x1FFu) << 6) *
                       (__int16)(MovieData_a94e0[(v195 >> 9) + 1] -
                                 MovieData_a94e0[v195 >> 9])) >>
                      15);
            }
            *(v184 - 1) = v191;
            v196 = *v184;
            v197 = v74[1];
            v199 = v196 - v197;
            v198 = v196 - v197 < 0;
            if (v196 <= v197) {
              LOWORD(v196) = v74[1];
            }
            if (v198) {
              v200 = -v199;
            }
            else {
              v200 = v199;
            }
            if (v200 < 0x2000) {
              v196 = MovieData_a94e0[v200 >> 9] + (unsigned __int16)v196 +
                     ((((v200 & 0x1FFu) << 6) *
                       (__int16)(MovieData_a94e0[(v200 >> 9) + 1] -
                                 MovieData_a94e0[v200 >> 9])) >>
                      15);
            }
            v74 += 3;
            *v184 = v196;
            v184 += 3;
            v185 -= 3;
          } while (v185 != 0);
        }
        else {
          v148 = v312_.v333;
          v149 = v312_.v334;
          v32 = v312_.v322;
          if (v147 == 3) {
            v166 = 21;
            v167 = (__int16*)(v312_.v316 + v312_.v336);
            v168 = v312_.v315;
            do {
              v169 = *((__int16*)v168 - 2);
              v170 = *(v167 - 2);
              v172 = v169 - v170;
              v171 = v169 - v170 < 0;
              if (v169 <= v170) {
                LOWORD(v169) = *(v167 - 2);
              }
              if (v171) {
                v173 = -v172;
              }
              else {
                v173 = v172;
              }
              if (v173 < 0x2000) {
                v169 = MovieData_a94e0[v173 >> 9] + (unsigned __int16)v169 +
                       ((((v173 & 0x1FFu) << 6) *
                         (__int16)(MovieData_a94e0[(v173 >> 9) + 1] -
                                   MovieData_a94e0[v173 >> 9])) >>
                        15);
              }
              *((_WORD*)v168 - 2) = v169;
              v174 = *((__int16*)v168 - 1);
              v175 = *(v167 - 1);
              v177 = v174 - v175;
              v176 = v174 - v175 < 0;
              if (v174 <= v175) {
                LOWORD(v174) = *(v167 - 1);
              }
              if (v176) {
                v178 = -v177;
              }
              else {
                v178 = v177;
              }
              if (v178 < 0x2000) {
                v174 = MovieData_a94e0[v178 >> 9] + (unsigned __int16)v174 +
                       ((((v178 & 0x1FFu) << 6) *
                         (__int16)(MovieData_a94e0[(v178 >> 9) + 1] -
                                   MovieData_a94e0[v178 >> 9])) >>
                        15);
              }
              *((_WORD*)v168 - 1) = v174;
              v179 = *(__int16*)v168;
              v180 = *v167;
              v182 = v179 - v180;
              v181 = v179 - v180 < 0;
              if (v179 <= v180) {
                LOWORD(v179) = *v167;
              }
              if (v181) {
                v183 = -v182;
              }
              else {
                v183 = v182;
              }
              if (v183 < 0x2000) {
                v179 = MovieData_a94e0[v183 >> 9] + (unsigned __int16)v179 +
                       ((((v183 & 0x1FFu) << 6) *
                         (__int16)(MovieData_a94e0[(v183 >> 9) + 1] -
                                   MovieData_a94e0[v183 >> 9])) >>
                        15);
              }
              v167 += 3;
              *(_WORD*)v168 = v179;
              v168 = (unsigned __int64*)((char*)v168 + 6);
              v166 -= 3;
            } while (v166 != 0);
          }
          else if (v147 == 2) {
            v150 = (__int16*)v312_.v317;
            for (i = 20;; i -= 2) {
              v152 = *(v150 - 43);
              v153 = (__int16)(*(v74 - 1) - 512);
              v155 = v152 - v153;
              v154 = v152 - v153 < 0;
              if (v152 <= v153) {
                LOWORD(v152) = *(v74 - 1) - 512;
              }
              if (v154) {
                v155 = -v155;
              }
              if (v155 < 0x2000) {
                v152 = MovieData_a94e0[v155 >> 9] + (unsigned __int16)v152 +
                       ((((v155 & 0x1FFu) << 6) *
                         (__int16)(MovieData_a94e0[(v155 >> 9) + 1] -
                                   MovieData_a94e0[v155 >> 9])) >>
                        15);
              }
              v156 = *(v150 - 1);
              *(v150 - 43) = v152;
              if (v156 <= v153) {
                LOWORD(v157) = v153;
              }
              else {
                LOWORD(v157) = v156;
              }
              v158 = v156 - v153;
              if (v158 < 0) {
                v158 = -v158;
              }
              if (v158 < 0x2000) {
                v157 = MovieData_a94e0[v158 >> 9] + (unsigned __int16)v157 +
                       ((((v158 & 0x1FFu) << 6) *
                         (__int16)(MovieData_a94e0[(v158 >> 9) + 1] -
                                   MovieData_a94e0[v158 >> 9])) >>
                        15);
              }
              *(v150 - 1) = v157;
              if (i == 0) {
                break;
              }
              v159 = *(v150 - 42);
              v160 = (__int16)(*v74 - 512);
              v162 = v159 - v160;
              v161 = v159 - v160 < 0;
              if (v159 <= v160) {
                LOWORD(v159) = *v74 - 512;
              }
              if (v161) {
                v162 = -v162;
              }
              if (v162 < 0x2000) {
                v159 = MovieData_a94e0[v162 >> 9] + (unsigned __int16)v159 +
                       ((((v162 & 0x1FFu) << 6) *
                         (__int16)(MovieData_a94e0[(v162 >> 9) + 1] -
                                   MovieData_a94e0[v162 >> 9])) >>
                        15);
              }
              v163 = *v150;
              *(v150 - 42) = v159;
              if (v163 <= v160) {
                LOWORD(v164) = v160;
              }
              else {
                LOWORD(v164) = v163;
              }
              v165 = v163 - v160;
              if (v165 < 0) {
                v165 = -v165;
              }
              if (v165 < 0x2000) {
                v164 = MovieData_a94e0[v165 >> 9] + (unsigned __int16)v164 +
                       ((((v165 & 0x1FFu) << 6) *
                         (__int16)(MovieData_a94e0[(v165 >> 9) + 1] -
                                   MovieData_a94e0[v165 >> 9])) >>
                        15);
              }
              *v150 = v164;
              v150 += 2;
              v74 += 2;
            }
          }
        }
        v33 = v312_.v328;
        memcpy_plt(v312_.v328 + 4 * v148, (__int64)v312_.v320, v32);
        v30 = (unsigned int)(v149 + 21);
        v31 = v312_.v337 + 1;
        if (v312_.v337 + 1 == v312_.v321) {
          v201 = WORD2(v362);
          v202 = HIWORD(v362);
          v203 = v363_.v363;
          v204 = WORD1(v363_.v363);
          v205 = WORD2(v363_.v363);
          v206 = HIWORD(v363_.v363);
          v207 = v363_.v364;
          v208 = WORD1(v363_.v364);
          v209 = WORD2(v363_.v364);
          v210 = HIWORD(v363_.v364);
          LOWORD(v211) = v363_.v365;
          v212 = WORD1(v363_.v365);
          v213 = WORD2(v363_.v365);
          v214 = HIWORD(v363_.v365);
          v215 = WORD2(v352_.v355);
          v216 = v363_.v366;
          v217 = HIWORD(v352_.v355);
          v218 = WORD1(v363_.v366);
          v219 = v352_.v356;
          v28 = WORD2(v363_.v366);
          goto LABEL_242;
        }
      }
      v39 = 0;
      while (1) {
        v61 = *(__int16**)(a1 + 64);
        v341_.v351 = 0;
        v62 = *(_DWORD*)(a1 + 32);
        v341_.v349 = 0;
        v341_.v350 = 0;
        v341_.v347 = 0;
        v341_.v348 = 0;
        v341_.v345 = 0;
        v341_.v346 = 0;
        v341_.v343 = 0;
        v341_.v344 = 0;
        v341_.v341 = 0;
        v341_.v342 = 0;
        MovieRoutine_39d00(a1 + 72, (__int64)&v312_.v340[3840 * v39], v23, v61,
                           v312_.v338, v62 - v19, 1);
        if (v16 != 1) {
          break;
        }
      LABEL_26:
        compute_band_energies(a1, (__int64)v23, (__int64)&v341_.v341, 21, 1,
                              v19);
        v40 = v369_.v369;
        v41 = HIDWORD(v369_.v369);
        ++v39;
        if ((int)v369_.v369 <= (int)v341_.v341) {
          v40 = v341_.v341;
        }
        if (SHIDWORD(v369_.v369) <= SHIDWORD(v341_.v341)) {
          v41 = HIDWORD(v341_.v341);
        }
        v369_.v369 = __PAIR64__(v41, v40);
        v42 = v369_.v370;
        v43 = HIDWORD(v369_.v370);
        if ((int)v369_.v370 <= (int)v341_.v342) {
          v42 = v341_.v342;
        }
        if (SHIDWORD(v369_.v370) <= SHIDWORD(v341_.v342)) {
          v43 = HIDWORD(v341_.v342);
        }
        v369_.v370 = __PAIR64__(v43, v42);
        v44 = v369_.v371;
        v45 = HIDWORD(v369_.v371);
        if ((int)v369_.v371 <= (int)v341_.v343) {
          v44 = v341_.v343;
        }
        if (SHIDWORD(v369_.v371) <= SHIDWORD(v341_.v343)) {
          v45 = HIDWORD(v341_.v343);
        }
        v369_.v371 = __PAIR64__(v45, v44);
        v46 = v369_.v372;
        v47 = HIDWORD(v369_.v372);
        if ((int)v369_.v372 <= (int)v341_.v344) {
          v46 = v341_.v344;
        }
        if (SHIDWORD(v369_.v372) <= SHIDWORD(v341_.v344)) {
          v47 = HIDWORD(v341_.v344);
        }
        v369_.v372 = __PAIR64__(v47, v46);
        v48 = v369_.v373;
        v49 = HIDWORD(v369_.v373);
        if ((int)v369_.v373 <= (int)v341_.v345) {
          v48 = v341_.v345;
        }
        if (SHIDWORD(v369_.v373) <= SHIDWORD(v341_.v345)) {
          v49 = HIDWORD(v341_.v345);
        }
        v369_.v373 = __PAIR64__(v49, v48);
        v50 = v369_.v374;
        v51 = HIDWORD(v369_.v374);
        if ((int)v369_.v374 <= (int)v341_.v346) {
          v50 = v341_.v346;
        }
        if (SHIDWORD(v369_.v374) <= SHIDWORD(v341_.v346)) {
          v51 = HIDWORD(v341_.v346);
        }
        v369_.v374 = __PAIR64__(v51, v50);
        v52 = v369_.v375;
        v53 = HIDWORD(v369_.v375);
        if ((int)v369_.v375 <= (int)v341_.v347) {
          v52 = v341_.v347;
        }
        if (SHIDWORD(v369_.v375) <= SHIDWORD(v341_.v347)) {
          v53 = HIDWORD(v341_.v347);
        }
        v369_.v375 = __PAIR64__(v53, v52);
        v54 = v369_.v376;
        v55 = HIDWORD(v369_.v376);
        if ((int)v369_.v376 <= (int)v341_.v348) {
          v54 = v341_.v348;
        }
        if (SHIDWORD(v369_.v376) <= SHIDWORD(v341_.v348)) {
          v55 = HIDWORD(v341_.v348);
        }
        v369_.v376 = __PAIR64__(v55, v54);
        v56 = v369_.v377;
        v57 = HIDWORD(v369_.v377);
        if ((int)v369_.v377 <= (int)v341_.v349) {
          v56 = v341_.v349;
        }
        if (SHIDWORD(v369_.v377) <= SHIDWORD(v341_.v349)) {
          v57 = HIDWORD(v341_.v349);
        }
        v369_.v377 = __PAIR64__(v57, v56);
        v58 = v369_.v378;
        v59 = HIDWORD(v369_.v378);
        if ((int)v369_.v378 <= (int)v341_.v350) {
          v58 = v341_.v350;
        }
        if (SHIDWORD(v369_.v378) <= SHIDWORD(v341_.v350)) {
          v59 = HIDWORD(v341_.v350);
        }
        v369_.v378 = __PAIR64__(v59, v58);
        v60 = v369_.v379;
        if (v369_.v379 <= v341_.v351) {
          v60 = v341_.v351;
        }
        v369_.v379 = v60;
        if (v39 == v312_.v339) {
          goto LABEL_82;
        }
      }
      v63 = v37 / v16;
      if (v37 / v16 < 1) {
        v63 = 0;
        goto LABEL_80;
      }
      if (v63 >= 8) {
        v66 = 0;
        v67 = v38;
        do {
          v66 -= 8;
          v68 = *(v67 - 3) * v16;
          *(v67 - 4) *= v16;
          *(v67 - 3) = v68;
          v69 = *(v67 - 1) * v16;
          *(v67 - 2) *= v16;
          *(v67 - 1) = v69;
          v70 = v67[1] * v16;
          *v67 *= v16;
          v67[1] = v70;
          v71 = v67[3] * v16;
          v67[2] *= v16;
          v67[3] = v71;
          v67 += 8;
        } while (-(__int64)(v63 & 0x7FFFFFF8) != v66);
        v64 = -v66;
        v65 = v63 & 7;
        if ((v63 & 7) == 0) {
        LABEL_80:
          if ((int)v63 < v37) {
            memset_plt((__int64)&v23[v63], 0, 4LL * (v37 + ~v63) + 4);
          }
          goto LABEL_26;
        }
      }
      else {
        v64 = 0;
        v65 = v63 & 7;
        if ((v63 & 7) == 0) {
          goto LABEL_80;
        }
      }
      v72 = &v23[v64];
      do {
        --v65;
        *v72++ *= v16;
      } while (v65 != 0);
      goto LABEL_80;
    }
    v219 = -28672;
    v218 = -28672;
    v217 = -28672;
    v216 = -28672;
    v215 = -28672;
    v214 = -28672;
    v213 = -28672;
    v212 = -28672;
    LOWORD(v211) = -28672;
    v210 = -28672;
    v209 = -28672;
    v208 = -28672;
    v207 = -28672;
    v206 = -28672;
    v205 = -28672;
    v204 = -28672;
    v203 = -28672;
    v202 = -28672;
    v201 = -28672;
  LABEL_242:
    v220 = HIWORD(v352_.v352);
    v221 = v352_.v353;
    v222 = WORD1(v352_.v353);
    v223 = HIWORD(v352_.v353);
    v211 = (__int16)v211;
    if ((__int16)v352_.v352 < v201) {
      v201 = v352_.v352;
    }
    v224 = v363_.v368;
    WORD1(v352_.v357) = v201;
    if (SWORD1(v352_.v352) < v202) {
      v202 = WORD1(v352_.v352);
    }
    WORD2(v352_.v357) = v202;
    if (SWORD2(v352_.v352) < v203) {
      v203 = WORD2(v352_.v352);
    }
    if (SHIWORD(v352_.v352) < v204) {
      v204 = HIWORD(v352_.v352);
    }
    HIWORD(v352_.v357) = v203;
    LOWORD(v352_.v358) = v204;
    if ((__int16)v352_.v353 < v205) {
      v205 = v352_.v353;
    }
    LODWORD(v312_.v336) = WORD1(v352_.v354);
    WORD1(v352_.v358) = v205;
    if (SWORD1(v352_.v353) < v206) {
      v206 = WORD1(v352_.v353);
    }
    WORD2(v352_.v358) = v206;
    if (SWORD2(v352_.v353) < v207) {
      v207 = WORD2(v352_.v353);
    }
    HIWORD(v352_.v358) = v207;
    if (SHIWORD(v352_.v353) < v208) {
      v208 = HIWORD(v352_.v353);
    }
    LOWORD(v352_.v359) = v208;
    if ((__int16)v352_.v354 < v209) {
      v209 = v352_.v354;
    }
    WORD1(v352_.v359) = v209;
    if (SWORD1(v352_.v354) < v210) {
      v210 = WORD1(v352_.v354);
    }
    WORD2(v352_.v359) = v210;
    LODWORD(v312_.v334) = WORD2(v352_.v354);
    if (SWORD2(v352_.v354) < (__int16)v211) {
      v211 = SWORD2(v352_.v354);
    }
    v225 = v352_.v355;
    LODWORD(v312_.v340) = v211;
    v312_.v332 = HIWORD(v352_.v354);
    v226 = SHIWORD(v352_.v354);
    if (SHIWORD(v352_.v354) >= v212) {
      v226 = v212;
    }
    v227 = v213;
    v228 = v214;
    v229 = WORD2(v352_.v356);
    LODWORD(v312_.v339) = v226;
    v230 = (__int16)v352_.v355;
    if ((__int16)v352_.v355 >= v227) {
      v230 = v227;
    }
    LODWORD(v312_.v338) = v230;
    v231 = SWORD1(v352_.v355);
    LODWORD(v312_.v333) = WORD1(v352_.v355);
    if (SWORD1(v352_.v355) >= v228) {
      v231 = v228;
    }
    LODWORD(v312_.v337) = v231;
    if (v215 < v216) {
      v216 = v215;
    }
    if (v217 < v218) {
      v218 = v217;
    }
    if (v219 >= v28) {
      v219 = v28;
    }
    if (SWORD1(v352_.v356) >= SHIWORD(v363_.v366)) {
      v232 = HIWORD(v363_.v366);
    }
    else {
      v232 = WORD1(v352_.v356);
    }
    if (SWORD2(v352_.v356) >= (__int16)v363_.v367) {
      v233 = v363_.v367;
    }
    else {
      v233 = WORD2(v352_.v356);
    }
    if (SHIWORD(v352_.v356) >= SHIWORD(v363_.v367)) {
      v234 = SHIWORD(v363_.v367);
    }
    else {
      v234 = SHIWORD(v352_.v356);
    }
    if ((__int16)v352_.v357 < v363_.v368) {
      v224 = v352_.v357;
    }
    v235 = 0x8000 / v312_.v313;
    if (0x8000 / v312_.v313 != 0) {
      LODWORD(v312_.v329) = v234;
      v236 = v233;
      v237 = v219;
      v238 = v209;
      v239 = v207;
      v240 = v205;
      v241 = v203;
      v242 = v216;
      LODWORD(v312_.v331) = WORD1(v352_.v353);
      v243 = __clz(v235) ^ 0x1F;
      v244 = v232;
      v245 = v210;
      v246 = v208;
      v247 = v206;
      v248 = v204;
      v249 = v218;
      v250 = v243 - 15;
      v251 = v243 <= 0xF;
      v252 = 15 - v243;
      v253 = v243 << 10;
      v254 = v235 >> v250;
      v255 = v235 << v252;
      if (!v251) {
        v255 = v254;
      }
      v216 = v242;
      v203 = v241;
      v205 = v240;
      v207 = v239;
      v209 = v238;
      v218 = v249;
      v204 = v248;
      v206 = v247;
      v208 = v246;
      v210 = v245;
      v232 = v244;
      v220 = HIWORD(v352_.v352);
      v221 = v352_.v353;
      v223 = HIWORD(v352_.v353);
      v225 = v352_.v355;
      v229 = WORD2(v352_.v356);
      v222 = v312_.v331;
      v256 =
          v253 +
          (((unsigned __int16)(((unsigned int)((((unsigned __int16)(((unsigned int)(-2802 *
                                                                                    (((v255
                                                                                       << 16) +
                                                                                      0x40000000) >>
                                                                                     16)) >>
                                                                     16) +
                                                                    2545) *
                                                     (((v255 << 16) +
                                                       0x40000000) >>
                                                      15) -
                                                 341901312) >>
                                                16) *
                                               (((v255 << 16) + 0x40000000) >>
                                                16)) >>
                                15) +
                               15746) *
                (((v255 << 16) + 0x40000000) >> 15) -
            445186048) >>
           20);
      v219 = v237;
      v233 = v236;
      LOWORD(v234) = v312_.v329;
      result = (unsigned int)((__int16)(v256 - 13312) >> 1);
    }
    else {
      result = 49152;
    }
    HIWORD(v352_.v357) = v203 + result;
    HIWORD(v352_.v352) = v220 + result;
    LOWORD(v352_.v358) = v204 + result;
    LOWORD(v352_.v353) = v221 + result;
    WORD1(v352_.v358) = v205 + result;
    WORD1(v352_.v353) = v222 + result;
    WORD2(v352_.v358) = v206 + result;
    WORD2(v352_.v353) += result;
    HIWORD(v352_.v358) = v207 + result;
    HIWORD(v352_.v353) = v223 + result;
    LOWORD(v352_.v359) = v208 + result;
    LOWORD(v352_.v354) = v352_.v354 + result;
    WORD1(v352_.v359) = v209 + result;
    WORD1(v352_.v354) = v312_.v336 + result;
    WORD2(v352_.v359) = v210 + result;
    WORD2(v352_.v354) = v312_.v334 + result;
    HIWORD(v352_.v359) = (_WORD)v312_.v340 + result;
    HIWORD(v352_.v354) = v312_.v332 + result;
    LOWORD(v352_.v360) = v312_.v339 + result;
    WORD1(v352_.v355) = v312_.v333 + result;
    LOWORD(v352_.v352) = v352_.v352 + result;
    WORD1(v352_.v360) = v312_.v338 + result;
    WORD2(v352_.v355) += result;
    WORD1(v352_.v352) += result;
    WORD2(v352_.v360) = v312_.v337 + result;
    HIWORD(v352_.v360) = v216 + result;
    HIWORD(v352_.v355) += result;
    LOWORD(v352_.v361) = v218 + result;
    WORD2(v352_.v352) += result;
    WORD1(v352_.v361) = v219 + result;
    LOWORD(v352_.v355) = v225 + result;
    WORD2(v352_.v361) = v232 + result;
    HIWORD(v352_.v361) = v233 + result;
    LOWORD(v362) = v234 + result;
    LOWORD(v352_.v356) = v352_.v356 + result;
    WORD1(v362) = v224 + result;
    WORD1(v352_.v356) += result;
    WORD2(v352_.v356) = v229 + result;
    HIWORD(v352_.v356) += result;
    LOWORD(v352_.v357) = v352_.v357 + result;
    WORD2(v362) += result;
    WORD1(v352_.v357) += result;
    HIWORD(v362) += result;
    WORD2(v352_.v357) += result;
    LOWORD(v363_.v363) = v363_.v363 + result;
    WORD1(v363_.v363) += result;
    WORD2(v363_.v363) += result;
    HIWORD(v363_.v363) += result;
    LOWORD(v363_.v364) = v363_.v364 + result;
    WORD1(v363_.v364) += result;
    WORD2(v363_.v364) += result;
    HIWORD(v363_.v364) += result;
    LOWORD(v363_.v365) = v363_.v365 + result;
    WORD1(v363_.v365) += result;
    WORD2(v363_.v365) += result;
    HIWORD(v363_.v365) += result;
    LOWORD(v363_.v366) = v363_.v366 + result;
    WORD1(v363_.v366) += result;
    WORD2(v363_.v366) += result;
    HIWORD(v363_.v366) += result;
    LOWORD(v363_.v367) = v363_.v367 + result;
    HIWORD(v363_.v367) += result;
    v363_.v368 += result;
    if (v312_.v330 >= 1) {
      v258 = &v380;
      v259 = 0;
      v260 = 42LL * (unsigned int)v312_.v330;
      do {
        while (1) {
          v310 = *(_DWORD*)v258;
          v258 = (__int64*)((char*)v258 + 4);
          v309 = v310;
          if (v310 == 0) {
            break;
          }
          v261 = (_WORD*)&v352_.v352 + 21 * v309 - 21;
          v262 = (_WORD*)(v312_.v335 + v259);
          v263 = *(_WORD*)(v312_.v335 + v259 + 2);
          v264 = *(_WORD*)(v312_.v335 + v259 + 4);
          v265 = *(_WORD*)(v312_.v335 + v259 + 6);
          v266 = *(unsigned __int16*)(v312_.v335 + v259 + 8);
          v267 = *(_WORD*)(v312_.v335 + v259 + 10);
          v268 = *(_WORD*)(v312_.v335 + v259 + 12);
          v269 = *(_WORD*)(v312_.v335 + v259 + 14);
          v270 = *(_WORD*)(v312_.v335 + v259 + 16);
          v271 = v261[1];
          *v262 -= *v261;
          v272 = v262[9];
          v273 = v263 - v271;
          v274 = v261[2];
          v262[1] = v273;
          v275 = v264 - v274;
          v276 = v261[3];
          v277 = v272 - v261[9];
          v278 = v261[10];
          v262[2] = v275;
          v262[9] = v277;
          v279 = v262[10];
          v280 = v265 - v276;
          v281 = (unsigned __int16)v261[4];
          v262[3] = v280;
          v282 = v279 - v278;
          v283 = v261[11];
          v262[10] = v282;
          v284 = v262[11];
          result = (unsigned int)(v266 - v281);
          LOWORD(v281) = v261[5];
          v262[4] = result;
          v285 = v284 - v283;
          v286 = v261[12];
          v262[11] = v285;
          v287 = v262[12];
          v288 = v267 - v281;
          LOWORD(v281) = v261[6];
          v262[5] = v288;
          v289 = v287 - v286;
          v290 = v261[13];
          v291 = v268 - v281;
          LOWORD(v281) = v261[7];
          v262[12] = v289;
          v292 = v262[13];
          v262[6] = v291;
          v293 = v269 - v281;
          LOWORD(v281) = v261[8];
          v294 = v292 - v290;
          v295 = v261[14];
          v262[7] = v293;
          v262[13] = v294;
          v296 = v262[14];
          v262[8] = v270 - v281;
          v297 = v296 - v295;
          v298 = v261[15];
          v262[14] = v297;
          v299 = v262[15] - v298;
          v300 = v261[16];
          v262[15] = v299;
          v301 = v262[16] - v300;
          v302 = v261[17];
          v262[16] = v301;
          v303 = v262[17] - v302;
          v304 = v261[18];
          v262[17] = v303;
          v305 = v262[18] - v304;
          v306 = v261[19];
          LOWORD(v261) = v261[20];
          v262[18] = v305;
          v307 = v262[19] - v306;
          v308 = v262[20];
          v262[19] = v307;
          v262[20] = v308 - (_WORD)v261;
          v259 += 42;
          if (v260 == v259) {
            return result;
          }
        }
        v311 = v312_.v335 + (v259 & 0x1FFFFFFFELL);
        *(_WORD*)(v311 + 40) = 0;
        *(_QWORD*)(v311 + 24) = 0;
        *(_QWORD*)(v311 + 32) = 0;
        *(_QWORD*)(v311 + 8) = 0;
        *(_QWORD*)(v311 + 16) = 0;
        *(_QWORD*)v311 = 0;
        v259 += 42;
      } while (v260 != v259);
    }
    return result;
  }
  v24 = 0;
  v27 = 1;
  v25 = (char*)&v381 + 4;
  v380 = 0x200000001LL;
  v26 = 3;
  LODWORD(v381) = 3;
  goto LABEL_20;
}

__int64 opus_src_7ad00(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  int v5;
  __int64 v6;
  int v7;
  int v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  int v20;
  int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned int v27;
  unsigned __int8* v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;
  __int64 v33;
  unsigned __int8* v34;
  unsigned int v35;
  __int64 v36;
  int v37;
  __int64 v38;
  int v39;
  int v40;
  int v41;
  __int64 v42;
  unsigned __int16 v43;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned int v50;
  unsigned int v51;
  __int64 v52;
  unsigned int v53;
  char v54;
  char v55;
  unsigned __int16* v56;
  unsigned int v57;
  unsigned int v58;
  unsigned int v59;
  unsigned int v60;
  unsigned int v61;
  unsigned int v62;
  unsigned int v63;
  _BOOL4 v64;
  _BOOL4 v65;
  unsigned int v66;
  char v67;
  __int64 i;
  unsigned int v69;

  v2 = *(_QWORD*)(a1 + 48);
  v4 = MovieCalloc_plt(1, 64);
  v5 = MovieRoutine_7a3c0(a2, 5);
  *(_DWORD*)(v4 + 48) = v5;
  v6 = MovieMalloc_plt(v5);
  v7 = *(_DWORD*)(v4 + 48);
  *(_QWORD*)(v4 + 8) = v6;
  if (v7 < 1) {
    *(_QWORD*)v4 = MovieMalloc_plt(0);
  }
  else {
    v8 = -1;
    v9 = 0;
    do {
      *(_BYTE*)(*(_QWORD*)(v4 + 8) + v9) = MovieRoutine_7a3c0(a2, 4);
      v10 = *(unsigned __int8*)(*(_QWORD*)(v4 + 8) + v9++);
      if (v8 <= v10) {
        v8 = v10;
      }
    } while (v9 < *(int*)(v4 + 48));
    v11 = (unsigned int)(v8 + 1);
    *(_QWORD*)v4 = MovieMalloc_plt(11 * v11);
    if ((v8 & 0x80000000) == 0) {
      v12 = 3;
      v13 = 0;
      do {
        *(_BYTE*)(*(_QWORD*)v4 + 11 * v13) = MovieRoutine_7a3c0(a2, 3) + 1;
        *(_BYTE*)(*(_QWORD*)v4 + 11 * v13 + 1) = MovieRoutine_7a3c0(a2, 2);
        if ((MovieRoutine_7a3b0(a2) & 0x80000000) != 0) {
          goto LABEL_44;
        }
        v14 = *(_QWORD*)v4 + 11 * v13;
        if (*(_BYTE*)(v14 + 1) != 0) {
          *(_BYTE*)(*(_QWORD*)v4 + 11 * v13 + 2) = MovieRoutine_7a3c0(a2, 8);
        }
        else {
          *(_BYTE*)(v14 + 2) = 0;
        }
        v15 = *(_QWORD*)v4 + 11 * v13;
        if ((signed __int32)*(_DWORD*)(v2 + 32) <=
            (int)*(unsigned __int8*)(v15 + 2)) {
          goto LABEL_44;
        }
        if (*(_BYTE*)(v15 + 1) != 31) {
          v16 = 0;
          v17 = v12;
          do {
            *(_BYTE*)(*(_QWORD*)v4 + v17) = MovieRoutine_7a3c0(a2, 8) - 1;
            v18 = *(unsigned __int8*)(*(_QWORD*)v4 + v17);
            if (v18 != 255 && (signed __int32)*(_DWORD*)(v2 + 32) <= v18) {
              goto LABEL_44;
            }
            ++v16;
            ++v17;
          } while (v16 < 1 << *(_BYTE*)(*(_QWORD*)v4 + 11 * v13 + 1));
        }
        ++v13;
        v12 += 11;
      } while (v13 != v11);
    }
  }
  *(_DWORD*)(v4 + 56) = MovieRoutine_7a3c0(a2, 2) + 1;
  v20 = MovieRoutine_7a3c0(a2, 4);
  v21 = *(_DWORD*)(v4 + 48);
  v22 = v20;
  if (v21 < 1) {
    v27 = 0;
    goto LABEL_34;
  }
  v23 = *(_QWORD*)v4;
  v24 = *(_QWORD*)(v4 + 8);
  v25 = v21 & 7;
  if ((unsigned int)v21 < 8) {
    v26 = 0;
    v27 = 0;
    if ((v21 & 7) == 0) {
      goto LABEL_34;
    }
    goto LABEL_32;
  }
  v28 = (unsigned __int8*)(v24 + 3);
  v29 = 0;
  v27 = 0;
  v30 = -(__int64)(v21 & 0x7FFFFFF8);
  do {
    v29 -= 8;
    v31 = v27 + *(unsigned __int8*)(v23 + 11LL * *(v28 - 3)) +
          *(unsigned __int8*)(v23 + 11LL * *(v28 - 2)) +
          *(unsigned __int8*)(v23 + 11LL * *(v28 - 1)) +
          *(unsigned __int8*)(v23 + 11LL * *v28) +
          *(unsigned __int8*)(v23 + 11LL * v28[1]) +
          *(unsigned __int8*)(v23 + 11LL * v28[2]);
    v32 = 11LL * v28[3];
    v33 = v28[4];
    v28 += 8;
    v27 = v31 + *(unsigned __int8*)(v23 + v32) +
          *(unsigned __int8*)(v23 + 11 * v33);
  } while (v30 != v29);
  v26 = -v29;
  if (v25 != 0) {
  LABEL_32:
    v34 = (unsigned __int8*)(v24 + v26);
    do {
      v35 = *v34++;
      --v25;
      v27 += *(unsigned __int8*)(v23 + 11LL * v35);
    } while (v25 != 0);
  }
LABEL_34:
  *(_QWORD*)(v4 + 16) = MovieMalloc_plt(2LL * (v27 + 2));
  *(_QWORD*)(v4 + 24) = MovieMalloc_plt(v27 + 2);
  *(_QWORD*)(v4 + 40) = MovieMalloc_plt(v27);
  v36 = MovieMalloc_plt(v27);
  v37 = *(_DWORD*)(v4 + 48);
  *(_QWORD*)(v4 + 32) = v36;
  if (v37 >= 1) {
    v38 = 0;
    v39 = 0;
    v40 = 0;
    while (1) {
      v40 += *(unsigned __int8*)(*(_QWORD*)v4 +
                                 11LL * *(unsigned __int8*)(*(_QWORD*)(v4 + 8) +
                                                            v38));
      if (v39 < v40) {
        break;
      }
    LABEL_36:
      if (++v38 >= v37) {
        goto LABEL_43;
      }
    }
    v41 = v40 - v39;
    v42 = 2LL * v39 + 4;
    while (1) {
      v43 = MovieRoutine_7a3c0(a2, v22);
      *(_WORD*)(*(_QWORD*)(v4 + 16) + v42) = v43;
      if (1 << v22 <= v43) {
        break;
      }
      v42 += 2;
      if (--v41 == 0) {
        v37 = *(_DWORD*)(v4 + 48);
        v39 = v40;
        goto LABEL_36;
      }
    }
  LABEL_44:
    MovieRoutine_7ac60((_QWORD*)v4);
    return 0;
  }
  v40 = 0;
LABEL_43:
  if ((unsigned int)MovieRoutine_7a3b0(a2) != 0) {
    goto LABEL_44;
  }
  LOWORD(v45) = v40 + 2;
  **(_WORD**)(v4 + 16) = 0;
  *(_WORD*)(*(_QWORD*)(v4 + 16) + 2LL) = 1 << v22;
  *(_DWORD*)(v4 + 52) = v40 + 2;
  if (v40 >= -1) {
    v46 = 0;
    do {
      *(_BYTE*)(*(_QWORD*)(v4 + 24) + v46) = v46;
      ++v46;
      v45 = *(int*)(v4 + 52);
    } while (v46 < v45);
  }
  MovieRoutine_7b4c0(*(_QWORD*)(v4 + 24), *(_QWORD*)(v4 + 16), v45);
  if (*(int*)(v4 + 52) >= 3) {
    v47 = 2;
    v48 = 0;
    do {
      v49 = *(_QWORD*)(v4 + 16);
      v50 = *(unsigned __int16*)(v49 + 2);
      v51 = *(unsigned __int16*)(v49 + 2 * v48 + 4);
      if ((unsigned __int64)v48 >= 6) {
        v56 = (unsigned __int16*)(v49 + 8);
        v55 = 1;
        v52 = 0;
        v53 = 0;
        v54 = 0;
        do {
          v57 = *(v56 - 4);
          if (v53 < v57 && v57 < v51) {
            v54 = v52;
            v53 = *(v56 - 4);
          }
          if (v50 > v57 && v57 > v51) {
            v50 = *(v56 - 4);
            v55 = v52;
          }
          v58 = *(v56 - 3);
          if (v53 < v58 && v58 < v51) {
            v54 = v52 + 1;
            v53 = *(v56 - 3);
          }
          if (v50 > v58 && v58 > v51) {
            v50 = *(v56 - 3);
            v55 = v52 + 1;
          }
          v59 = *(v56 - 2);
          if (v53 < v59 && v59 < v51) {
            v54 = v52 + 2;
            v53 = *(v56 - 2);
          }
          if (v50 > v59 && v59 > v51) {
            v50 = *(v56 - 2);
            v55 = v52 + 2;
          }
          v60 = *(v56 - 1);
          if (v53 < v60 && v60 < v51) {
            v54 = v52 + 3;
            v53 = *(v56 - 1);
          }
          if (v50 > v60 && v60 > v51) {
            v50 = *(v56 - 1);
            v55 = v52 + 3;
          }
          v61 = *v56;
          if (v53 < v61 && v61 < v51) {
            v54 = v52 + 4;
            v53 = *v56;
          }
          if (v50 > v61 && v61 > v51) {
            v50 = *v56;
            v55 = v52 + 4;
          }
          v62 = v56[1];
          if (v53 < v62 && v62 < v51) {
            v54 = v52 + 5;
            v53 = v56[1];
          }
          if (v50 > v62 && v62 > v51) {
            v50 = v56[1];
            v55 = v52 + 5;
          }
          v63 = v56[2];
          v64 = v63 > v51;
          if (v53 < v63 && v63 < v51) {
            v54 = v52 + 6;
            v53 = v56[2];
          }
          v65 = v50 > v63;
          if (v65 && v64) {
            v50 = v56[2];
          }
          LOWORD(v66) = v56[3];
          if (v65 && v64) {
            v55 = v52 + 6;
          }
          v67 = v52 + 7;
          v52 += 8;
          v56 += 8;
          v66 = (unsigned __int16)v66;
          if (v53 < v66 && v66 < v51) {
            v54 = v67;
            v53 = (unsigned __int16)v66;
          }
          if (v50 > (unsigned __int16)v66 && (unsigned __int16)v66 > v51) {
            v55 = v67;
            v50 = (unsigned __int16)v66;
          }
        } while (v52 != (v47 & 0x7FFFFFFFFFFFFFF8LL));
      }
      else {
        v52 = 0;
        v53 = 0;
        v54 = 0;
        v55 = 1;
      }
      for (i = v47 & 7; i != 0; --i) {
        v69 = *(unsigned __int16*)(v49 + 2 * v52);
        if (v53 < v69 && v69 < v51) {
          v54 = v52;
          v53 = *(unsigned __int16*)(v49 + 2 * v52);
        }
        if (v50 > v69 && v69 > v51) {
          v55 = v52;
          v50 = *(unsigned __int16*)(v49 + 2 * v52);
        }
        ++v52;
      }
      ++v47;
      *(_BYTE*)(*(_QWORD*)(v4 + 40) + v48) = v54;
      *(_BYTE*)(*(_QWORD*)(v4 + 32) + v48++) = v55;
    } while (v48 < *(int*)(v4 + 52) - 2LL);
  }
  return v4;
}

_DWORD* opus_src_7b9e0(__int64 a1, __int64 a2, _DWORD* a3)
{
  __int64 v3;
  __int64 v6;
  int v7;
  unsigned int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  unsigned __int8* v12;
  __int64 v13;
  unsigned __int8 v14;
  int v15;
  __int64 v16;
  int v17;
  _DWORD* v18;
  int v19;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  int v26;
  int v27;
  bool v28;
  int v29;
  int v30;
  int v31;
  int v32;
  _DWORD* v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  __int64 v40;
  __int64 v41;
  int v42;
  __int64 v43;
  __int64 v44;
  unsigned int v45;

  v3 = a1 + 8;
  v6 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 48LL) + 80LL);
  v7 = MovieData_a2210[*(int*)(a2 + 56) - 1];
  if (MovieRoutine_7a3c0(a1 + 8, 1) != 1) {
    return nullptr;
  }
  v42 = v7;
  v8 = 32 - __clz(v7 - 1);
  if (v7 == 1) {
    v9 = 0;
  }
  else {
    v9 = v8;
  }
  *a3 = MovieRoutine_7a3c0(v3, v9);
  a3[1] = MovieRoutine_7a3c0(v3, v9);
  if (*(int*)(a2 + 48) >= 1) {
    v10 = 0;
    v45 = 2;
    do {
      v11 = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v10);
      v12 = (unsigned __int8*)(*(_QWORD*)a2 + 11 * v11);
      v13 = *v12;
      v14 = v12[1];
      if (v14 != 0) {
        v15 = MovieRoutine_80920(v6 + 104LL * v12[2], v3);
        if (v15 == -1) {
          return nullptr;
        }
        v43 = v10;
        v44 = v13;
        if ((_DWORD)v13 != 0) {
        LABEL_13:
          v16 = v44;
          v17 = ~(-1 << v14);
          v18 = &a3[v45];
          do {
            if (*(unsigned __int8*)(*(_QWORD*)a2 + 11 * v11 +
                                    (v15 & (unsigned int)v17) + 3) == 255) {
              *v18 = 0;
            }
            else {
              v19 = MovieRoutine_80920(
                  v6 + 104LL *
                           *(unsigned __int8*)(*(_QWORD*)a2 + 11 * v11 +
                                               (v15 & (unsigned int)v17) + 3),
                  v3);
              *v18 = v19;
              if (v19 == -1) {
                return nullptr;
              }
            }
            v15 >>= v14;
            ++v18;
            --v16;
          } while (v16 != 0);
        }
      }
      else {
        v15 = 0;
        v43 = v10;
        v44 = *v12;
        if (*v12 != 0) {
          goto LABEL_13;
        }
      }
      v10 = v43 + 1;
      v45 += v44;
    } while (v43 + 1 < *(int*)(a2 + 48));
  }
  if (*(int*)(a2 + 52) >= 3) {
    v21 = 0;
    do {
      while (1) {
        v22 = *(_QWORD*)(a2 + 16);
        v23 = *(unsigned __int8*)(*(_QWORD*)(a2 + 40) + v21);
        v24 = *(unsigned __int8*)(*(_QWORD*)(a2 + 32) + v21);
        v25 = *(unsigned __int16*)(v22 + 2 * v23);
        v26 = a3[v23] & 0x7FFF;
        v27 = *(unsigned __int16*)(v22 + 2 * v24) - v25;
        v29 = (a3[v24] & 0x7FFF) - v26;
        v28 = v29 < 0;
        v30 = *(unsigned __int16*)(v22 + 2 * v21 + 4) - v25;
        if (v29 < 0) {
          v29 = -v29;
        }
        v31 = v29 * v30 / v27;
        if (v28) {
          v31 = -v31;
        }
        v32 = v31 + v26;
        v33 = &a3[v21];
        v34 = v33[2];
        if (v34 != 0) {
          break;
        }
        v33[2] = v32 | 0x8000;
        if (++v21 + 2 >= *(int*)(a2 + 52)) {
          return a3;
        }
      }
      v35 = v42 - v32;
      v36 = v34 >> 1;
      if (v42 - v32 >= v32) {
        v37 = v32;
      }
      else {
        v37 = v42 - v32;
      }
      if ((v34 & 1) != 0) {
        v36 = -((v34 + 1) >> 1);
      }
      if (v35 > v32) {
        v38 = v34 - v32;
      }
      else {
        v38 = v35 + ~v34;
      }
      if (v34 >= 2 * v37) {
        v39 = v38;
      }
      else {
        v39 = v36;
      }
      v33[2] = v39 + v32;
      v40 = *(unsigned __int8*)(*(_QWORD*)(a2 + 40) + v21);
      a3[v40] &= 0x7FFFu;
      v41 = *(unsigned __int8*)(*(_QWORD*)(a2 + 32) + v21);
      a3[v41] &= 0x7FFFu;
      ++v21;
    } while (v21 + 2 < *(int*)(a2 + 52));
  }
  return a3;
}

__int64 opus_src_7bce0(_QWORD* a1, __int64 a2, _DWORD* a3, __int64 a4)
{
  __int64 v4;
  int v5;
  int v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  unsigned int v10;
  char* v11;
  __int64 v12;
  unsigned int v13;
  int v14;
  int v15;
  bool v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  unsigned int v22;
  int v23;
  bool v24;
  int v25;
  char* v26;
  unsigned int* v27;
  __int64 v28;
  int i;
  int v30;
  char* v31;
  __int64 v32;
  unsigned int v33;
  _DWORD* v34;
  __int64 v35;
  unsigned int v36;
  int v37;
  char v38;
  int v39;
  char* v40;
  int v41;
  int v42;
  __int64 v43;
  int* v44;
  char v45;
  int v46;
  int v47;
  int* v48;
  unsigned int v49;
  unsigned int v50;
  unsigned int v51;
  int v52;
  int v53;
  __int64 v54;
  int* v55;
  char v56;
  int v57;
  int v58;
  int* v59;
  int v60;
  int v61;
  __int64 v62;
  int* v63;
  bool v64;
  int v65;
  int v66;
  int* v67;
  int v68;
  int v69;
  __int64 v70;
  int* v71;
  int v72;
  int v73;
  int* v74;
  int v75;
  __int64 v76;
  int* v77;
  int v78;
  int v79;
  int* v80;
  int v81;
  __int64 v82;
  _DWORD* v83;
  int v84;
  int v85;
  _DWORD* v86;
  int v87;
  __int64 v88;
  _DWORD* v89;
  int v90;
  int v91;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  _DWORD* v97;
  int v98;
  int v99;
  int v100;
  int v101;

  v4 = (signed __int64)*(_QWORD*)(*(_QWORD*)(*a1 + 48LL) + 8LL * a1[11]) / 2LL;
  if (a3 != nullptr) {
    v5 = *(_DWORD*)(a2 + 52);
    v6 = *(_DWORD*)(a2 + 56) * *a3;
    if (v5 < 2) {
      LODWORD(v9) = 0;
    }
    else {
      v7 = 1;
      v8 = 0;
      LODWORD(v9) = 0;
      v10 = *(_DWORD*)(a2 + 56) * *a3;
      v11 = (char*)MovieData_c0bf0;
      do {
        while (1) {
          v12 = *(unsigned __int8*)(*(_QWORD*)(a2 + 24) + v7);
          v13 = a3[v12];
          if (v13 >> 15 == 0) {
            break;
          }
          v6 = v10;
          if (++v7 >= v5) {
            goto LABEL_81;
          }
        }
        v6 = *(_DWORD*)(a2 + 56) * v13;
        LODWORD(v9) = *(unsigned __int16*)(*(_QWORD*)(a2 + 16) + 2 * v12);
        if ((int)v4 >= (int)v9) {
          v14 = *(unsigned __int16*)(*(_QWORD*)(a2 + 16) + 2 * v12);
        }
        else {
          v14 = v4;
        }
        v15 = v14 - v8;
        v16 = (v6 | v10) > 0xFF || v15 < 1;
        if (!v16) {
          v17 = v6 - v10;
          v18 = v9 - v8;
          v19 = (int)(v6 - v10) / (int)(v9 - v8);
          v20 = v19 * (v9 - v8);
          if (v20 >= 0) {
            v21 = v19 * (v9 - v8);
          }
          else {
            v21 = -v20;
          }
          if (v17 >= 0) {
            v22 = v6 - v10;
          }
          else {
            v22 = v10 - v6;
          }
          if (v17 >= 0) {
            v23 = v9 - v8 - 1;
          }
          else {
            v23 = 0;
          }
          v24 = v17 < 0;
          v25 = v22 - v21;
          v26 = &v11[4 * v10];
          v27 = (unsigned int*)(a4 + 4LL * v8);
          v28 = v19 + (v17 >> 31);
          if (v24) {
            v25 = v18 - v25;
          }
          for (i = v15 & 7; i != 0; v26 = &v31[v32]) {
            v30 = *(_DWORD*)v26;
            v16 = v23 < v25;
            v31 = &v26[4 * v28];
            --v15;
            *v27 = ((__int64)(int)v30 * (int)*v27) >> 15;
            ++v27;
            v23 = (v18 & ((v23 - v25) >> 31)) + v23 - v25;
            if (v16) {
              v32 = 4;
            }
            else {
              v32 = 0;
            }
            --i;
          }
          if (v8 - v14 <= 0xFFFFFFF8) {
            v33 = v15 - 1;
            do {
              v36 = v27[1];
              v37 = *(_DWORD*)v26;
              v64 = __OFSUB__(v23, v25);
              v39 = v23 - v25;
              v38 = (v39 < 0) ^ v64;
              v40 = &v26[4 * v28];
              *v27 = ((__int64)(int)v37 * (int)*v27) >> 15;
              if (v39 >= 0) {
                v41 = 0;
              }
              else {
                v41 = v18;
              }
              v42 = v41 + v39;
              if (v38) {
                v43 = 4;
              }
              else {
                v43 = 0;
              }
              v44 = (int*)&v40[v43];
              v64 = __OFSUB__(v42, v25);
              v46 = v42 - v25;
              v45 = (v46 < 0) ^ v64;
              v47 = *v44;
              v48 = &v44[v28];
              v49 = ((__int64)(int)v47 * (int)v36) >> 15;
              v50 = v27[2];
              v51 = v27[3];
              v27[1] = v49;
              if (v46 >= 0) {
                v52 = 0;
              }
              else {
                v52 = v18;
              }
              v53 = v52 + v46;
              if (v45) {
                v54 = 1;
              }
              else {
                v54 = 0;
              }
              v55 = &v48[v54];
              v64 = __OFSUB__(v53, v25);
              v57 = v53 - v25;
              v56 = (v57 < 0) ^ v64;
              v58 = *v55;
              v59 = &v55[v28];
              v27[2] = ((__int64)(int)v58 * (int)v50) >> 15;
              if (v57 >= 0) {
                v60 = 0;
              }
              else {
                v60 = v18;
              }
              v61 = v60 + v57;
              if (v56) {
                v62 = 1;
              }
              else {
                v62 = 0;
              }
              v63 = &v59[v62];
              v64 = __OFSUB__(v61, v25);
              v65 = v61 - v25;
              v66 = *v63;
              v67 = &v63[v28];
              v27[3] = ((__int64)(int)v66 * (int)v51) >> 15;
              if (v65 >= 0) {
                v68 = 0;
              }
              else {
                v68 = v18;
              }
              v69 = v68 + v65;
              v70 = v65 < 0 != v64;
              v71 = &v67[v70];
              v27[4] = ((__int64)(int)*v71 * (int)v27[4]) >> 15;
              v72 = v69 - v25;
              v24 = v69 - v25 < 0;
              v73 = v18;
              if (!v24) {
                v73 = 0;
              }
              v74 = &v71[v28];
              v75 = v73 + v72;
              v76 = v72 < 0;
              v77 = &v74[v76];
              v27[5] = ((__int64)(int)*v77 * (int)v27[5]) >> 15;
              v78 = v75 - v25;
              v24 = v75 - v25 < 0;
              v79 = v18;
              if (!v24) {
                v79 = 0;
              }
              v80 = &v77[v28];
              v81 = v79 + v78;
              v82 = v78 < 0;
              v83 = &v80[v82];
              v27[6] = ((__int64)(int)*v83 * (int)v27[6]) >> 15;
              v84 = v81 - v25;
              v24 = v81 - v25 < 0;
              v85 = v18;
              if (!v24) {
                v85 = 0;
              }
              v86 = &v83[v28];
              v87 = v85 + v84;
              v88 = v84 < 0;
              v89 = &v86[v88];
              v27[7] = ((__int64)(int)*v89 * (int)v27[7]) >> 15;
              v90 = v87 - v25;
              v24 = v87 - v25 < 0;
              v91 = v18;
              if (!v24) {
                v91 = 0;
              }
              v34 = &v89[v28];
              v23 = v91 + v90;
              v33 -= 8;
              v27 += 8;
              v35 = v90 < 0;
              v26 = (char*)&v34[v35];
            } while (v33 < 0xFFFFFFFE);
          }
          v5 = *(_DWORD*)(a2 + 52);
        }
        v8 = v9;
        ++v7;
        v10 = v6;
      } while (v7 < v5);
    }
  LABEL_81:
    if ((int)v9 < (int)v4) {
      v93 = (unsigned int)v4;
      v94 = (unsigned int)v9;
      v9 = (unsigned int)v9;
      v95 = ((_BYTE)v4 - (_BYTE)v9) & 7;
      if (v95 != 0) {
        v9 = (unsigned int)v9;
        do {
          --v95;
          *(_DWORD*)(a4 + 4 * v9++) *= v6;
        } while (v95 != 0);
      }
      if ((unsigned __int64)(v94 - v93) <= 0xFFFFFFFFFFFFFFF8LL) {
        v96 = v93 - v9;
        v97 = (_DWORD*)(a4 + 4 * v9 + 16);
        do {
          v96 -= 8;
          v98 = *(v97 - 3) * v6;
          *(v97 - 4) *= v6;
          *(v97 - 3) = v98;
          v99 = *(v97 - 1) * v6;
          *(v97 - 2) *= v6;
          *(v97 - 1) = v99;
          v100 = v97[1] * v6;
          *v97 *= v6;
          v97[1] = v100;
          v101 = v97[3] * v6;
          v97[2] *= v6;
          v97[3] = v101;
          v97 += 8;
        } while (v96 != 0);
      }
    }
    return 1;
  }
  else {
    memset_plt_alt1(a4, 0, 4LL * (int)v4);
    return 0;
  }
}

__int64 opus_src_7e220(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  unsigned int v7;
  unsigned __int8 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  unsigned __int64 v13;
  char v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int8 v17;
  unsigned __int8 v18;
  unsigned __int8 v19;
  unsigned __int8 v20;
  unsigned __int8 v21;
  unsigned __int8 v22;
  unsigned __int8 v23;
  unsigned __int8 v24;
  __int64 v25;
  __int64 v26;
  __int64 result;
  __int64 v28;
  __int64 v29;

  v3 = *(_QWORD*)(a2 + 48);
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)a1 = 0;
  *(_QWORD*)(a1 + 8) = 0;
  v7 = MovieRoutine_7a3c0(a3, 16);
  *(_DWORD*)a1 = v7;
  if (v7 >= 3 || (*(_QWORD*)(a1 + 24) = MovieRoutine_7a3c0(a3, 24),
                  *(_QWORD*)(a1 + 32) = MovieRoutine_7a3c0(a3, 24),
                  *(_DWORD*)(a1 + 40) = MovieRoutine_7a3c0(a3, 24) + 1,
                  *(_BYTE*)(a1 + 44) = MovieRoutine_7a3c0(a3, 6) + 1,
                  v8 = MovieRoutine_7a3c0(a3, 8), *(_BYTE*)(a1 + 45) = v8,
                  (signed __int32)*(_DWORD*)(v3 + 32) <= (int)v8)) {
  LABEL_52:
    v25 = *(_QWORD*)(a1 + 8);
    if (v25 != 0) {
      MovieFree_plt(v25);
    }
    v26 = *(_QWORD*)(a1 + 16);
    if (v26 != 0) {
      MovieFree_plt(v26);
    }
    *(_QWORD*)(a1 + 32) = 0;
    *(_QWORD*)(a1 + 40) = 0;
    *(_QWORD*)(a1 + 16) = 0;
    *(_QWORD*)(a1 + 24) = 0;
    result = 1;
    *(_QWORD*)a1 = 0;
    *(_QWORD*)(a1 + 8) = 0;
  }
  else {
    v9 = MovieMalloc_plt(*(unsigned __int8*)(a1 + 44));
    v10 = *(unsigned __int8*)(a1 + 44);
    *(_QWORD*)(a1 + 8) = v9;
    v11 = MovieMalloc_plt(8 * v10);
    v12 = *(unsigned __int8*)(a1 + 44);
    *(_QWORD*)(a1 + 16) = v11;
    if (v12 != 0) {
      v13 = 0;
      do {
        v14 = MovieRoutine_7a3c0(a3, 3);
        if (MovieRoutine_7a3c0(a3, 1) != 0) {
          v14 |= 8 * (unsigned __int8)MovieRoutine_7a3c0(a3, 5);
        }
        *(_BYTE*)(*(_QWORD*)(a1 + 8) + v13++) = v14;
      } while (v13 < *(unsigned __int8*)(a1 + 44));
      if (*(_BYTE*)(a1 + 44) != 0) {
        v15 = 0;
        v16 = 7;
        do {
          if ((*(_BYTE*)(*(_QWORD*)(a1 + 8) + v15) & 1) != 0) {
            v17 = MovieRoutine_7a3c0(a3, 8);
            if ((signed __int32)*(_DWORD*)(v3 + 32) <= (int)v17) {
              goto LABEL_52;
            }
            *(_BYTE*)(*(_QWORD*)(a1 + 16) + v16 - 7) = v17;
            if (*(_BYTE*)(a1 + 46) != 0) {
              if ((*(_BYTE*)(*(_QWORD*)(a1 + 8) + v15) & 2) == 0) {
                goto LABEL_18;
              }
            }
            else {
              *(_BYTE*)(a1 + 46) = 1;
              if ((*(_BYTE*)(*(_QWORD*)(a1 + 8) + v15) & 2) == 0) {
              LABEL_18:
                *(_BYTE*)(*(_QWORD*)(a1 + 16) + v16 - 6) = -1;
                goto LABEL_23;
              }
            }
          }
          else {
            *(_BYTE*)(*(_QWORD*)(a1 + 16) + v16 - 7) = -1;
            if ((*(_BYTE*)(*(_QWORD*)(a1 + 8) + v15) & 2) == 0) {
              goto LABEL_18;
            }
          }
          v18 = MovieRoutine_7a3c0(a3, 8);
          if ((signed __int32)*(_DWORD*)(v3 + 32) <= (int)v18) {
            goto LABEL_52;
          }
          *(_BYTE*)(*(_QWORD*)(a1 + 16) + v16 - 6) = v18;
          if (*(unsigned __int8*)(a1 + 46) <= 1u) {
            *(_BYTE*)(a1 + 46) = 2;
          }
        LABEL_23:
          if ((*(_BYTE*)(*(_QWORD*)(a1 + 8) + v15) & 4) != 0) {
            v19 = MovieRoutine_7a3c0(a3, 8);
            if ((signed __int32)*(_DWORD*)(v3 + 32) <= (int)v19) {
              goto LABEL_52;
            }
            *(_BYTE*)(*(_QWORD*)(a1 + 16) + v16 - 5) = v19;
            if (*(unsigned __int8*)(a1 + 46) <= 2u) {
              *(_BYTE*)(a1 + 46) = 3;
            }
          }
          else {
            *(_BYTE*)(*(_QWORD*)(a1 + 16) + v16 - 5) = -1;
          }
          if ((*(_BYTE*)(*(_QWORD*)(a1 + 8) + v15) & 8) != 0) {
            v20 = MovieRoutine_7a3c0(a3, 8);
            if ((signed __int32)*(_DWORD*)(v3 + 32) <= (int)v20) {
              goto LABEL_52;
            }
            *(_BYTE*)(*(_QWORD*)(a1 + 16) + v16 - 4) = v20;
            if (*(unsigned __int8*)(a1 + 46) <= 3u) {
              *(_BYTE*)(a1 + 46) = 4;
            }
          }
          else {
            *(_BYTE*)(*(_QWORD*)(a1 + 16) + v16 - 4) = -1;
          }
          if ((*(_BYTE*)(*(_QWORD*)(a1 + 8) + v15) & 0x10) != 0) {
            v21 = MovieRoutine_7a3c0(a3, 8);
            if ((signed __int32)*(_DWORD*)(v3 + 32) <= (int)v21) {
              goto LABEL_52;
            }
            *(_BYTE*)(*(_QWORD*)(a1 + 16) + v16 - 3) = v21;
            if (*(unsigned __int8*)(a1 + 46) <= 4u) {
              *(_BYTE*)(a1 + 46) = 5;
            }
          }
          else {
            *(_BYTE*)(*(_QWORD*)(a1 + 16) + v16 - 3) = -1;
          }
          if ((*(_BYTE*)(*(_QWORD*)(a1 + 8) + v15) & 0x20) != 0) {
            v22 = MovieRoutine_7a3c0(a3, 8);
            if ((signed __int32)*(_DWORD*)(v3 + 32) <= (int)v22) {
              goto LABEL_52;
            }
            *(_BYTE*)(*(_QWORD*)(a1 + 16) + v16 - 2) = v22;
            if (*(unsigned __int8*)(a1 + 46) <= 5u) {
              *(_BYTE*)(a1 + 46) = 6;
            }
          }
          else {
            *(_BYTE*)(*(_QWORD*)(a1 + 16) + v16 - 2) = -1;
          }
          if ((*(_BYTE*)(*(_QWORD*)(a1 + 8) + v15) & 0x40) != 0) {
            v23 = MovieRoutine_7a3c0(a3, 8);
            if ((signed __int32)*(_DWORD*)(v3 + 32) <= (int)v23) {
              goto LABEL_52;
            }
            *(_BYTE*)(*(_QWORD*)(a1 + 16) + v16 - 1) = v23;
            if (*(unsigned __int8*)(a1 + 46) <= 6u) {
              *(_BYTE*)(a1 + 46) = 7;
            }
          }
          else {
            *(_BYTE*)(*(_QWORD*)(a1 + 16) + v16 - 1) = -1;
          }
          if (*(char*)(*(_QWORD*)(a1 + 8) + v15) < 0) {
            v24 = MovieRoutine_7a3c0(a3, 8);
            if ((signed __int32)*(_DWORD*)(v3 + 32) <= (int)v24) {
              goto LABEL_52;
            }
            *(_BYTE*)(*(_QWORD*)(a1 + 16) + v16) = v24;
            if (*(unsigned __int8*)(a1 + 46) <= 7u) {
              *(_BYTE*)(a1 + 46) = 8;
            }
          }
          else {
            *(_BYTE*)(*(_QWORD*)(a1 + 16) + v16) = -1;
          }
          ++v15;
          v16 += 8;
        } while (v15 < *(unsigned __int8*)(a1 + 44));
      }
    }
    if ((unsigned int)MovieRoutine_7a3b0(a3) != 0) {
      goto LABEL_64;
    }
    if (*(_DWORD*)a1 == 2) {
      v28 = *(int*)(a2 + 4);
      v29 = *(_QWORD*)(a1 + 32);
      if ((signed __int64)*(_QWORD*)(a1 + 24) > v29) {
        goto LABEL_64;
      }
    }
    else {
      v28 = 1;
      v29 = *(_QWORD*)(a1 + 32);
      if ((signed __int64)*(_QWORD*)(a1 + 24) > v29) {
      LABEL_64:
        MovieRoutine_7e1c0(a1);
        return 1;
      }
    }
    if (v29 > (int)(*(_QWORD*)(v3 + 8) * v28 / 2)) {
      goto LABEL_64;
    }
    return 0;
  }
  return result;
}

__int64 opus_src_7e740(_QWORD* a1, __int64 a2, _QWORD* a3, __int64 a4, int a5)
{
  __int64 v5;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v22;
  __int64* v23;
  int v24;
  __int64 v25;
  _DWORD* v26;
  _QWORD* v27;
  __int64 v28;
  _QWORD* v29;
  int* v30;
  int v31;
  __int64 v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  unsigned int v36;
  int v37;
  unsigned int v38;
  __int64 v39;
  int v40;
  __int64 v41;
  _QWORD* v42;
  __int64* v43;
  __int64 v44;
  __int64 v45;
  __int64* v46;
  _DWORD* v47;
  __int64 v48;
  __int64 v49;
  bool v50;
  _BYTE* v51;
  int v52;
  __int64 j;
  __int64* v54;
  __int64 v55;
  __int64 v56;
  unsigned int v57;
  int v58;
  __int64 v59;
  unsigned int v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  unsigned int v66;
  int v67;
  int v68;
  int v69;
  __int64 v70;
  __int64 v71;
  unsigned int v72;
  int v73;
  unsigned __int8* v74;
  unsigned int v75;
  unsigned int v76;
  int v77;
  __int64 v78;
  unsigned int v79;
  unsigned int v80;
  int v81;
  __int64 v82;
  __int64 v83;
  unsigned int v84;
  unsigned int v85;
  int v86;
  __int64 v87;
  unsigned int v88;
  unsigned int v89;
  int v90;
  __int64 v91;
  unsigned int v92;
  unsigned int v93;
  int v94;
  __int64 v95;
  unsigned int v96;
  unsigned int v97;
  int v98;
  __int64 v99;
  unsigned int v100;
  unsigned int v101;
  __int64 i;
  __int64 v103;
  unsigned int v104;
  int v105;
  __int64 v106;
  __int64 v107;
  int v108;
  unsigned int v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  _BYTE* v115;
  int v116;
  unsigned int v117;
  __int64 v118;
  __int64 v119;
  unsigned __int8* v120;
  unsigned int v121;
  int v122;
  unsigned int v123;
  int v124;
  unsigned int v125;
  unsigned int v126;
  int v127;
  unsigned int v128;
  int v129;
  unsigned int v130;
  int v131;
  unsigned int v132;
  int v133;
  unsigned int v134;
  int v135;
  unsigned int v136;
  int v137;
  __int64 v138;
  _BYTE* v139;
  unsigned int v140;
  int v141;
  int v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v147;
  unsigned int v148;
  __int64 v149;
  _QWORD* v150;
  __int64 v151;
  __int64 v152;
  unsigned __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  unsigned int v159;
  __int64 v160;
  __int64 v161;
  unsigned int v162;
  int v163;
  __int64 v164;
  __int64 v166;

  v5 = *(int*)(a2 + 40);
  v9 = *(_QWORD*)(*a1 + 48LL);
  v164 = v9;
  v10 = *(_QWORD*)(v9 + 80) + 104LL * *(unsigned __int8*)(a2 + 45);
  v166 = *(_QWORD*)(v10 + 32);
  v11 = *(_QWORD*)(v9 + 8LL * a1[11]);
  if (*(int*)a2 > 1) {
    v17 = *(_QWORD*)(a2 + 24);
    v18 = (__int64)(a5 * (int)v11) >> 1;
    if ((signed __int64)*(_QWORD*)(a2 + 32) < v18) {
      v18 = *(_QWORD*)(a2 + 32);
    }
    v19 = v18 - v17;
    if (v19 < 1) {
      return 0;
    }
    v20 = (unsigned int)(v19 / (int)v5);
    v22 = MovieMalloc_plt(((int)v20 + (int)v166 - 1) / (int)v166 * (int)v166);
    if (v22 == 0) {
      return 0;
    }
    v23 = (__int64*)v22;
    if (a5 < 1) {
      v24 = v166;
      LODWORD(v25) = 0;
    }
    else {
      v24 = v166;
      v25 = 0;
      while (*(_DWORD*)(a4 + 4 * v25) == 0) {
        if (a5 == ++v25) {
          goto LABEL_188;
        }
      }
    }
    if ((_DWORD)v25 == a5 || *(_BYTE*)(a2 + 46) == 0 || (int)v20 < 1) {
    LABEL_188:
      MovieFree_plt(v23);
      return 0;
    }
    v104 = 0;
    v158 = v10;
    v160 = v22 - 1;
    v163 = (int)v5 / a5;
    v105 = (int)v5 / a5;
    v156 = (int)(v17 / a5);
    v106 = v24 - 2;
    v153 = (v24 & 0x7FFFFFFF) - 1LL;
    v155 = v24 & 7;
    v152 = v22 + v106;
    v149 = v106 + 1;
    v151 = v22 + v106 + 1;
    v147 = -(__int64)(v24 & 0x7FFFFFF8);
    while (1) {
      v162 = v104;
      if (v104 == 0) {
        break;
      }
      LODWORD(v107) = 0;
      v108 = 1 << v104;
      do {
        if ((int)v107 < (int)v20) {
          v109 = 1;
          v110 = v156 + v105 * (__int64)(int)v107;
          v107 = (int)v107;
          do {
            v111 = *((unsigned __int8*)v23 + v107);
            if ((unsigned int)v111 < *(unsigned __int8*)(a2 + 44) &&
                ((unsigned __int8)v108 &
                 *(_BYTE*)(*(_QWORD*)(a2 + 8) +
                           *((unsigned __int8*)v23 + v107))) != 0) {
              v112 = MovieRoutine_812c0(
                  (__int64*)(*(_QWORD*)(v164 + 80) +
                             104LL * *(unsigned __int8*)(*(_QWORD*)(a2 + 16) +
                                                         8 * v111 + v162)),
                  (__int64)a3, v110, a5, (__int64)(a1 + 1), v163, 0xFFFFFFF8);
              v24 = v166;
              if (v112 == -1) {
                goto LABEL_188;
              }
            }
            ++v107;
            if (v109 >= v24) {
              break;
            }
            v110 += v163;
            ++v109;
          } while (v107 < v20);
        }
      } while ((int)v107 < (int)v20);
    LABEL_187:
      v104 = v162 + 1;
      if (v162 + 1 >= *(unsigned __int8*)(a2 + 46)) {
        goto LABEL_188;
      }
    }
    LODWORD(v113) = 0;
  LABEL_146:
    *(_BYTE*)(v160 + (int)v113 + (__int64)v24) = 1;
    if (v24 >= 2) {
      v114 = v149;
      v115 = (_BYTE*)(v152 + (int)v113);
      v116 = *(unsigned __int8*)(v151 + (int)v113);
      do {
        v50 = v114-- <= 1;
        v116 *= *(unsigned __int8*)(a2 + 44);
        *v115-- = v116;
      } while (!v50);
    }
    v117 = MovieRoutine_80920(v158, (__int64)(a1 + 1));
    if (v117 == -1) {
      goto LABEL_188;
    }
    if ((int)v166 < 1) {
    LABEL_144:
      v24 = v166;
      goto LABEL_145;
    }
    if (v153 < 7) {
      v118 = 0;
      goto LABEL_174;
    }
    v119 = 0;
    v120 = (unsigned __int8*)v23 + (int)v113 + 3;
    while (1) {
      v123 = *(v120 - 3);
      if (*(v120 - 3) != 0) {
        v124 = (unsigned __int8)(v117 / v123);
        *(v120 - 3) = v124;
        v125 = v117 - v124 * v123;
        v126 = *(v120 - 2);
        if (*(v120 - 2) != 0) {
          goto LABEL_159;
        }
      LABEL_166:
        v128 = *(v120 - 1);
        *(v120 - 2) = 0;
        if (v128 == 0) {
          goto LABEL_167;
        }
      LABEL_160:
        v129 = (unsigned __int8)(v125 / v128);
        v125 -= v129 * v128;
        v130 = *v120;
        *(v120 - 1) = v129;
        if (v130 != 0) {
          goto LABEL_161;
        }
      LABEL_168:
        v132 = v120[1];
        *v120 = 0;
        if (v132 == 0) {
          goto LABEL_169;
        }
      LABEL_162:
        v133 = (unsigned __int8)(v125 / v132);
        v125 -= v133 * v132;
        v134 = v120[2];
        v120[1] = v133;
        if (v134 != 0) {
          goto LABEL_163;
        }
      LABEL_170:
        v136 = v120[3];
        v120[2] = 0;
        if (v136 == 0) {
          goto LABEL_155;
        }
      LABEL_171:
        v137 = (unsigned __int8)(v125 / v136);
        v125 -= v137 * v136;
        v121 = v120[4];
        v120[3] = v137;
        if (v121 != 0) {
          goto LABEL_156;
        }
      LABEL_172:
        v117 = v125;
        v120[4] = 0;
        v119 -= 8;
        v120 += 8;
        if (v147 == v119) {
        LABEL_173:
          v118 = -v119;
        LABEL_174:
          if (v155 != 0) {
            v138 = v155;
            v139 = (char*)v23 + v118 + (int)v113;
            do {
              while (1) {
                v140 = (unsigned __int8)*v139;
                if (*v139 != 0) {
                  break;
                }
                *v139++ = 0;
                if (--v138 == 0) {
                  goto LABEL_179;
                }
              }
              v141 = (unsigned __int8)(v117 / v140);
              v117 -= v141 * v140;
              *v139++ = v141;
              --v138;
            } while (v138 != 0);
          }
        LABEL_179:
          if ((int)v113 >= (int)v20) {
            goto LABEL_144;
          }
          v24 = v166;
          v113 = (int)v113;
          v142 = 1;
          v143 = v156 + v105 * (__int64)(int)v113;
          do {
            v144 = *((unsigned __int8*)v23 + v113);
            if ((unsigned int)v144 < *(unsigned __int8*)(a2 + 44) &&
                (*(_BYTE*)(*(_QWORD*)(a2 + 8) + v144) & 1) != 0) {
              v145 = MovieRoutine_812c0(
                  (__int64*)(*(_QWORD*)(v164 + 80) +
                             104LL * *(unsigned __int8*)(*(_QWORD*)(a2 + 16) +
                                                         8 * v144)),
                  (__int64)a3, v143, a5, (__int64)(a1 + 1), v163, 0xFFFFFFF8);
              v24 = v166;
              if (v145 == -1) {
                goto LABEL_188;
              }
            }
            ++v113;
            if (v142 >= v24) {
              break;
            }
            v143 += v163;
            ++v142;
          } while (v113 < v20);
        LABEL_145:
          if ((int)v113 >= (int)v20) {
            goto LABEL_187;
          }
          goto LABEL_146;
        }
      }
      else {
        *(v120 - 3) = 0;
        v125 = v117;
        v126 = *(v120 - 2);
        if (*(v120 - 2) == 0) {
          goto LABEL_166;
        }
      LABEL_159:
        v127 = (unsigned __int8)(v125 / v126);
        v125 -= v127 * v126;
        v128 = *(v120 - 1);
        *(v120 - 2) = v127;
        if (v128 != 0) {
          goto LABEL_160;
        }
      LABEL_167:
        v130 = *v120;
        *(v120 - 1) = 0;
        if (v130 == 0) {
          goto LABEL_168;
        }
      LABEL_161:
        v131 = (unsigned __int8)(v125 / v130);
        v125 -= v131 * v130;
        v132 = v120[1];
        *v120 = v131;
        if (v132 != 0) {
          goto LABEL_162;
        }
      LABEL_169:
        v134 = v120[2];
        v120[1] = 0;
        if (v134 == 0) {
          goto LABEL_170;
        }
      LABEL_163:
        v135 = (unsigned __int8)(v125 / v134);
        v125 -= v135 * v134;
        v136 = v120[3];
        v120[2] = v135;
        if (v136 != 0) {
          goto LABEL_171;
        }
      LABEL_155:
        v121 = v120[4];
        v120[3] = 0;
        if (v121 == 0) {
          goto LABEL_172;
        }
      LABEL_156:
        v122 = (unsigned __int8)(v125 / v121);
        v117 = v125 - v122 * v121;
        v120[4] = v122;
        v119 -= 8;
        v120 += 8;
        if (v147 == v119) {
          goto LABEL_173;
        }
      }
    }
  }
  v12 = (__int64)(int)v11 >> 1;
  if ((signed __int64)*(_QWORD*)(a2 + 32) < v12) {
    v12 = *(_QWORD*)(a2 + 32);
  }
  v13 = v12 - *(_DWORD*)(a2 + 24);
  if (v13 < 1 || a5 < 1) {
    return 0;
  }
  v14 = a5 & 3;
  if ((unsigned int)a5 < 4) {
    v15 = 0;
    v16 = 0;
    if ((a5 & 3) == 0) {
      goto LABEL_33;
    }
    goto LABEL_29;
  }
  v26 = (_DWORD*)(a4 + 8);
  v27 = a3 + 2;
  v28 = 0;
  v16 = 0;
  do {
    if (*(v26 - 2) != 0) {
      a3[v16++] = *(v27 - 2);
    }
    if (*(v26 - 1) != 0) {
      a3[v16++] = *(v27 - 1);
    }
    if (*v26 != 0) {
      a3[v16++] = *v27;
    }
    if (v26[1] != 0) {
      a3[v16++] = v27[1];
    }
    v28 -= 4;
    v26 += 4;
    v27 += 4;
  } while (-(__int64)(a5 & 0x7FFFFFFC) != v28);
  v15 = -v28;
  if ((a5 & 3) != 0) {
  LABEL_29:
    v29 = &a3[v15];
    v30 = (int*)(a4 + 4 * v15);
    do {
      v31 = *v30++;
      if (v31 != 0) {
        a3[v16++] = *v29;
      }
      ++v29;
      --v14;
    } while (v14 != 0);
  }
LABEL_33:
  if (v16 != 0) {
    v32 = MovieCalloc_plt(v16, 8);
    if (v32 != 0) {
      v23 = (__int64*)v32;
      v157 = v10;
      v150 = a3;
      v161 = v5;
      v154 = (unsigned int)(v13 / (int)v5);
      if (v16 >= 1) {
        v33 = (unsigned int)v16;
        v34 = (_QWORD*)v32;
        do {
          v35 = MovieMalloc_plt(((int)v154 + (int)v166 - 1) / (int)v166 *
                                (int)v166);
          *v34 = v35;
          if (v35 == 0) {
            goto LABEL_122;
          }
          ++v34;
          --v33;
        } while (v33 != 0);
      }
      if (*(_BYTE*)(a2 + 46) == 0 || (int)v154 < 1) {
        goto LABEL_122;
      }
      v159 = 0;
      v148 = v166 - 1;
    LABEL_42:
      v36 = v159;
      v37 = 0;
      while (v36 != 0) {
      LABEL_48:
        if ((int)v166 >= 1 && v37 < (int)v154) {
          if (v16 > 0) {
            v39 = v37;
            v40 = 0;
            do {
              v41 = (unsigned int)v16;
              v42 = v150;
              v43 = v23;
              do {
                v44 = *v43++;
                v45 = *(unsigned __int8*)(v44 + v39);
                if ((unsigned int)v45 < *(unsigned __int8*)(a2 + 44) &&
                    ((1 << v159) & *(unsigned __int8*)(*(_QWORD*)(a2 + 8) +
                                                       (unsigned int)v45)) !=
                        0) {
                  v46 = (__int64*)(*(_QWORD*)(v164 + 80) +
                                   104LL *
                                       *(unsigned __int8*)(*(_QWORD*)(a2 + 16) +
                                                           8 * v45 + v159));
                  v47 = (_DWORD*)(*v42 + 4LL * *(_QWORD*)(a2 + 24) +
                                  4 * v39 * v161);
                  if (*(_DWORD*)a2 != 0) {
                    if (MovieRoutine_81060(v46, (__int64)v47, (__int64)(a1 + 1),
                                           v161, 0xFFFFFFF8) == -1) {
                      goto LABEL_122;
                    }
                  }
                  else if (MovieRoutine_80ce0(v46, v47, (__int64)(a1 + 1), v161,
                                              0xFFFFFFF8) == -1) {
                    goto LABEL_122;
                  }
                }
                ++v42;
                --v41;
              } while (v41 != 0);
              ++v40;
              ++v39;
            } while (v40 < (int)v166 && v39 < v154);
            v37 = v39;
            goto LABEL_46;
          }
          goto LABEL_43;
        }
      LABEL_46:
        v36 = v159;
        if (v37 >= (int)v154) {
          ++v159;
          if (v36 + 1 < *(unsigned __int8*)(a2 + 46)) {
            goto LABEL_42;
          }
        LABEL_122:
          if (v16 >= 1) {
            for (i = 0; i != v16; ++i) {
              v103 = v23[i];
              if (v103 != 0) {
                MovieFree_plt(v103);
              }
            }
          }
          goto LABEL_188;
        }
      }
      *(_BYTE*)(*v23 + v37 + (__int64)(int)v166 - 1) = 1;
      if ((int)v166 >= 2) {
        v48 = (int)v166 - 2 + 1LL;
        v49 = (int)v166 - 2 + (__int64)v37;
        do {
          v50 = v48-- <= 1;
          v51 = (_BYTE*)(*v23 + v49--);
          *v51 = *(_BYTE*)(a2 + 44) * v51[1];
        } while (!v50);
      }
      if (v16 > 1) {
        v52 = v16;
        if ((int)v166 < 1) {
          goto LABEL_82;
        }
        for (j = 1; j != v16; ++j) {
          v54 = &v23[j];
          v55 = (int)v166;
          if ((v166 & 7) != 0) {
            v56 = v166 & 7;
            v57 = v148 + v37;
            do {
              --v56;
              *(_BYTE*)(*v54 + (int)v57) = *(_BYTE*)(*(v54 - 1) + (int)v57);
              --v57;
            } while (v56 != 0);
            v55 = (int)v166 - (unsigned __int64)(v166 & 7);
          }
          if ((unsigned __int64)((int)v166 - 1LL) >= 7) {
            do {
              *(_BYTE*)(*v54 + v37 - 1 + (int)v55) =
                  *(_BYTE*)(*(v54 - 1) + v37 - 1 + (int)v55);
              *(_BYTE*)(*v54 + v37 - 2 + (int)v55) =
                  *(_BYTE*)(*(v54 - 1) + v37 - 2 + (int)v55);
              *(_BYTE*)(*v54 + v37 - 3 + (int)v55) =
                  *(_BYTE*)(*(v54 - 1) + v37 - 3 + (int)v55);
              *(_BYTE*)(*v54 + v37 - 4 + (int)v55) =
                  *(_BYTE*)(*(v54 - 1) + v37 - 4 + (int)v55);
              *(_BYTE*)(*v54 + v37 - 5 + (int)v55) =
                  *(_BYTE*)(*(v54 - 1) + v37 - 5 + (int)v55);
              *(_BYTE*)(*v54 + v37 - 6 + (int)v55) =
                  *(_BYTE*)(*(v54 - 1) + v37 - 6 + (int)v55);
              *(_BYTE*)(*v54 + v37 - 7 + (int)v55) =
                  *(_BYTE*)(*(v54 - 1) + v37 - 7 + (int)v55);
              v58 = v37 - 8 + v55;
              v50 = v55 <= 8;
              v55 -= 8;
              *(_BYTE*)(*v54 + v58) = *(_BYTE*)(*(v54 - 1) + v58);
            } while (!v50);
          }
        }
      }
      if (v16 >= 1) {
        v52 = v16;
        if ((int)v166 <= 0) {
        LABEL_82:
          while ((unsigned int)MovieRoutine_80920(v157, (__int64)(a1 + 1)) !=
                 -1) {
            if (--v52 == 0) {
              goto LABEL_48;
            }
          }
        }
        else {
          v59 = 0;
          while (1) {
            v60 = MovieRoutine_80920(v157, (__int64)(a1 + 1));
            if (v60 == -1) {
              break;
            }
            v61 = v23[v59];
            if ((unsigned __int64)(v166 & 0x7FFFFFFF) - 1 >= 7) {
              v62 = v166 & 7;
              v63 = 0;
              do {
                v71 = v61 + v37;
                v72 = *(unsigned __int8*)(v71 + v63);
                if (*(_BYTE*)(v71 + v63) != 0) {
                  v73 = v60 / v72;
                }
                else {
                  LOBYTE(v73) = 0;
                }
                *(_BYTE*)(v71 + v63) = v73;
                v74 = (unsigned __int8*)(v23[v59] + v37 + v63);
                v75 = v60 - *v74 * v72;
                v76 = v74[1];
                if (v74[1] != 0) {
                  v77 = v75 / v76;
                }
                else {
                  LOBYTE(v77) = 0;
                }
                v74[1] = v77;
                v78 = v23[v59] + v37 + v63;
                v79 = v75 - *(unsigned __int8*)(v78 + 1) * v76;
                v80 = *(unsigned __int8*)(v78 + 2);
                if (*(_BYTE*)(v78 + 2) != 0) {
                  v81 = v79 / v80;
                }
                else {
                  LOBYTE(v81) = 0;
                }
                *(_BYTE*)(v78 + 2) = v81;
                v82 = v37 + v63;
                v83 = v23[v59] + v82;
                v84 = v79 - *(unsigned __int8*)(v83 + 2) * v80;
                v85 = *(unsigned __int8*)(v83 + 3);
                if (*(_BYTE*)(v83 + 3) != 0) {
                  v86 = v84 / v85;
                }
                else {
                  LOBYTE(v86) = 0;
                }
                *(_BYTE*)(v83 + 3) = v86;
                v87 = v23[v59] + v82;
                v88 = v84 - *(unsigned __int8*)(v87 + 3) * v85;
                v89 = *(unsigned __int8*)(v87 + 4);
                v90 = v88 / v89;
                if (*(_BYTE*)(v87 + 4) == 0) {
                  LOBYTE(v90) = 0;
                }
                *(_BYTE*)(v87 + 4) = v90;
                v91 = v23[v59] + v82;
                v92 = v88 - *(unsigned __int8*)(v91 + 4) * v89;
                v93 = *(unsigned __int8*)(v91 + 5);
                v94 = v92 / v93;
                if (*(_BYTE*)(v91 + 5) == 0) {
                  LOBYTE(v94) = 0;
                }
                *(_BYTE*)(v91 + 5) = v94;
                v95 = v23[v59] + v82;
                v96 = v92 - *(unsigned __int8*)(v95 + 5) * v93;
                v97 = *(unsigned __int8*)(v95 + 6);
                v98 = v96 / v97;
                if (*(_BYTE*)(v95 + 6) == 0) {
                  LOBYTE(v98) = 0;
                }
                *(_BYTE*)(v95 + 6) = v98;
                v99 = v23[v59] + v82;
                v100 = v96 - *(unsigned __int8*)(v99 + 6) * v97;
                v101 = *(unsigned __int8*)(v99 + 7);
                if (*(_BYTE*)(v99 + 7) != 0) {
                  v69 = v100 / v101;
                }
                else {
                  LOBYTE(v69) = 0;
                }
                *(_BYTE*)(v99 + 7) = v69;
                v70 = v37 + v63;
                v63 += 8;
                v61 = v23[v59];
                v60 = v100 - *(unsigned __int8*)(v61 + v70 + 7) * v101;
              } while ((v166 & 0x7FFFFFF8) != v63);
            }
            else {
              v62 = v166 & 7;
              v63 = 0;
            }
            if (v62 != 0) {
              v64 = v37 + v63;
              v65 = v62;
              do {
                v66 = *(unsigned __int8*)(v61 + v64);
                v67 = v60 / v66;
                if (*(_BYTE*)(v61 + v64) == 0) {
                  LOBYTE(v67) = 0;
                }
                --v65;
                *(_BYTE*)(v61 + v64) = v67;
                v61 = v23[v59];
                v68 = *(unsigned __int8*)(v61 + v64++);
                v60 -= v68 * v66;
              } while (v65 != 0);
            }
            if (++v59 == v16) {
              goto LABEL_48;
            }
          }
        }
        goto LABEL_122;
      }
      if ((int)v166 < 1 || v37 >= (int)v154) {
        goto LABEL_46;
      }
    LABEL_43:
      v38 = v154 + ~v37;
      if (v38 >= v148) {
        v38 = v166 - 1;
      }
      v37 += v38 + 1;
      goto LABEL_46;
    }
  }
  return 0;
}

__int64 opus_src_7fb50(unsigned int a1)
{
  unsigned int v1;

  v1 = 32 - __clz(a1);
  if (a1 != 0) {
    return v1;
  }
  else {
    return 0;
  }
}

__int64 opus_src_7fb80(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  signed int v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = *(_QWORD*)(a1 + 96);
  v2 = *(_QWORD*)(a1 + 32);
  v3 = __clz(v1) ^ 0x1F;
  if ((_DWORD)v1 == 0) {
    v3 = -1;
  }
  v4 = v1 >> ((v2 - 1) * v3 / v2);
  while (1) {
    result = (int)v4;
    LODWORD(v4) = v4 + 1;
    v6 = 1;
    v7 = 1;
    v8 = v2;
    do {
      if (v7 > v1 / result) {
        goto LABEL_4;
      }
      if (v6 <= 0x7FFFFFFFFFFFFFFFLL / (int)v4) {
        v6 *= (int)v4;
      }
      else {
        v6 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v7 *= result;
      --v8;
    } while (v8 != 0);
    if (v7 <= v1 && v6 > v1) {
      return result;
    }
    if (v7 > v1) {
    LABEL_4:
      LODWORD(v4) = result - 1;
      continue;
    }
  }
}

__int64 opus_src_7fca0(__int64 a1, int* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  signed __int64 v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 i;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  bool v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  unsigned int v39;
  unsigned int v40;
  signed int v41;
  signed int v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned int v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  bool v53;
  __int64 v54;
  __int64 v55;
  int v56;
  __int64 v57;
  __int64 m;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  int v66;
  int v67;
  __int64 v68;
  unsigned int v69;
  signed int v70;
  signed int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  __int64 v77;
  __int64 v78;
  int v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 k;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  unsigned __int64 v87;
  unsigned __int64 v88;
  int v89;
  int v90;
  __int64 v91;
  __int64 j;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  int v98;
  int v99;
  __int64 v100;
  int v101;
  int v102;

  *((_QWORD*)a2 + 11) = 0;
  *((_QWORD*)a2 + 12) = 0;
  *((_QWORD*)a2 + 9) = 0;
  *((_QWORD*)a2 + 10) = 0;
  *((_QWORD*)a2 + 7) = 0;
  *((_QWORD*)a2 + 8) = 0;
  *((_QWORD*)a2 + 5) = 0;
  *((_QWORD*)a2 + 6) = 0;
  *((_QWORD*)a2 + 3) = 0;
  *((_QWORD*)a2 + 4) = 0;
  *((_QWORD*)a2 + 1) = 0;
  *((_QWORD*)a2 + 2) = 0;
  *(_QWORD*)a2 = 0;
  if (MovieRoutine_7a3c0(a1, 24) == 5653314) {
    v4 = MovieRoutine_7a3c0(a1, 16);
    *((_QWORD*)a2 + 4) = v4;
    v5 = MovieMalloc_plt(4 * v4);
    *((_QWORD*)a2 + 10) = v5;
    if (v5 != 0) {
      v6 = MovieRoutine_7a3c0(a1, 24);
      *((_QWORD*)a2 + 12) = v6;
      if (v6 >= 1) {
        v7 = *((_QWORD*)a2 + 4);
        if (v7 >= 1) {
          v8 = 32 - __clz((unsigned int)v7);
          v9 = 32 - __clz((unsigned int)v6);
          if ((_DWORD)v7 == 0) {
            v8 = 0;
          }
          if ((_DWORD)v6 == 0) {
            v9 = 0;
          }
          if (v8 + v9 <= 0x18 && v7 <= 0x7FFFFFFFuLL / v6) {
            v10 = MovieRoutine_7a3c0(a1, 1);
            if (v10 == 1) {
              v21 = MovieRoutine_7a3c0(a1, 5);
              v22 = *((_QWORD*)a2 + 12);
              *((_QWORD*)a2 + 9) = v22;
              v11 = MovieCalloc_plt(v22, 1);
              if (v11 == 0) {
                goto LABEL_18;
              }
              v23 = *((_QWORD*)a2 + 12);
              if (v23 >= 1) {
                v24 = 0;
                while (1) {
                  v26 = v23 - v24;
                  v25 = v26 == 0;
                  v27 = 32 - __clz(v26);
                  v28 = v25 ? 0 : v27;
                  v29 = MovieRoutine_7a3c0(a1, v28);
                  if (v29 < 0) {
                    goto LABEL_18;
                  }
                  ++v21;
                  if (v29 != 0) {
                    v30 = v29 + v24;
                    while (v24 < (signed __int64)*((_QWORD*)a2 + 12)) {
                      *(_BYTE*)(v11 + v24++) = v21;
                      if (--v29 == 0) {
                        v24 = v30;
                        break;
                      }
                    }
                  }
                  v23 = *((_QWORD*)a2 + 12);
                  *a2 = v21;
                  if (v24 >= v23) {
                    goto LABEL_51;
                  }
                }
              }
              goto LABEL_51;
            }
            if (v10 == 0) {
              v11 = MovieCalloc_plt(*((_QWORD*)a2 + 12), 1);
              if (v11 == 0) {
                goto LABEL_18;
              }
              v12 = MovieRoutine_7a3c0(a1, 1);
              v13 = *((_QWORD*)a2 + 12);
              if (v12 != 0) {
                if (v13 >= 1) {
                  for (i = 0; i < (signed __int64)*((_QWORD*)a2 + 12); ++i) {
                    if (MovieRoutine_7a3c0(a1, 1) != 0) {
                      v20 = MovieRoutine_7a3c0(a1, 5);
                      if (v20 == -1) {
                        goto LABEL_18;
                      }
                      *(_BYTE*)(v11 + i) = v20 + 1;
                      ++*((_QWORD*)a2 + 9);
                      if (v20 >= *a2) {
                        *a2 = v20 + 1;
                      }
                    }
                    else {
                      *(_BYTE*)(v11 + i) = 0;
                    }
                  }
                }
              }
              else {
                *((_QWORD*)a2 + 9) = v13;
                if (v13 >= 1) {
                  v31 = 0;
                  do {
                    v32 = MovieRoutine_7a3c0(a1, 5);
                    if (v32 == -1) {
                      goto LABEL_18;
                    }
                    *(_BYTE*)(v11 + v31) = v32 + 1;
                    if (v32 >= *a2) {
                      *a2 = v32 + 1;
                    }
                  } while (++v31 < (signed __int64)*((_QWORD*)a2 + 12));
                }
              }
            LABEL_51:
              v33 = MovieRoutine_7a3c0(a1, 4);
              if (v33 >= 1) {
                v34 = MovieRoutine_7a3c0(a1, 32);
                a2[13] = opus_src_804b0_alt1(v34, a2 + 11);
                v35 = MovieRoutine_7a3c0(a1, 32);
                a2[12] = opus_src_804b0_alt1(v35, a2 + 10);
                a2[6] = MovieRoutine_7a3c0(a1, 4) + 1;
                v36 = MovieRoutine_7a3c0(a1, 1);
                v37 = a2[6];
                v38 = a2[12];
                a2[14] = v36;
                a2[12] = v38 >> v37;
                a2[10] += v37;
              }
              switch (v33) {
              case 2:
                v59 = *((_QWORD*)a2 + 4);
                v60 = v59 * *((_QWORD*)a2 + 12);
                v61 = v59 * a2[6];
                if (v61 > 31) {
                  v68 = *((_QWORD*)a2 + 9);
                  a2[5] = 3;
                  v69 = (32 - __clz((unsigned int)(v68 - 1))) >> 3;
                  if ((_DWORD)v68 == 1) {
                    v70 = 1;
                  }
                  else {
                    v70 = v69 + 1;
                  }
                  v71 = opus_src_80500(v68, v70);
                  if (v70 <= v71) {
                    v72 = 1;
                  }
                  else {
                    v72 = 2;
                  }
                  a2[22] = v71;
                  a2[23] = v72;
                  if ((unsigned int)MovieRoutine_80560((__int64)a2, v11,
                                                       (int)v60, a1, 2u) != 0) {
                    goto LABEL_18;
                  }
                  v73 = a2[6];
                  v74 = v73 + 7;
                  v53 = v73 < -7;
                  v75 = v73 + 14;
                  if (!v53) {
                    v75 = v74;
                  }
                  v76 = (v75 >> 3) * a2[8];
                  v77 = *((_QWORD*)a2 + 9);
                  a2[15] = v76;
                  v78 = MovieMalloc_plt(v77 * v76);
                  v79 = a2[6];
                  v80 = *((_QWORD*)a2 + 4) * *((_QWORD*)a2 + 9);
                  *((_QWORD*)a2 + 8) = v78;
                  if (v79 >= 9) {
                    if (v80 >= 1) {
                      v100 = 0;
                      do {
                        *(_WORD*)(*((_QWORD*)a2 + 8) + 2 * v100++) =
                            MovieRoutine_7a3c0(a1, a2[6]);
                      } while (v100 < (signed __int64)(*((_QWORD*)a2 + 4) *
                                                       *((_QWORD*)a2 + 9)));
                    }
                  }
                  else if (v80 >= 1) {
                    v81 = 0;
                    do {
                      *(_BYTE*)(*((_QWORD*)a2 + 8) + v81++) =
                          MovieRoutine_7a3c0(a1, a2[6]);
                    } while (v81 < (signed __int64)(*((_QWORD*)a2 + 4) *
                                                    *((_QWORD*)a2 + 9)));
                  }
                }
                else {
                  v62 = *((_QWORD*)a2 + 9);
                  v63 = v61 + 8;
                  v53 = v61 < -8;
                  v64 = v61 + 15;
                  if (!v53) {
                    v64 = v63;
                  }
                  a2[5] = 1;
                  v65 = v64 >> 3;
                  v66 = opus_src_80500(v62, v64 >> 3);
                  if (v66 >= (int)v65) {
                    v67 = 1;
                  }
                  else {
                    v67 = 2;
                  }
                  a2[22] = v66;
                  a2[23] = v67;
                  if ((unsigned int)MovieRoutine_80560((__int64)a2, v11,
                                                       (int)v60, a1, 2u) != 0) {
                    goto LABEL_18;
                  }
                }
                break;
              case 1:
                v44 = opus_src_7fb80((__int64)a2);
                v45 = a2[6];
                v46 = *((_QWORD*)a2 + 4);
                v47 = v46 * v45 + 8;
                if (v46 * v45 < -8) {
                  v47 = v46 * v45 + 15;
                }
                if (v46 > 2147483639 / (int)v45) {
                  goto LABEL_18;
                }
                v48 = v44;
                v49 = 32 - __clz((unsigned int)(v44 - 1));
                if ((_DWORD)v44 == 1) {
                  v50 = 0;
                }
                else {
                  v50 = v49;
                }
                if (v46 * v45 > 31) {
                  goto LABEL_76;
                }
                v51 = v46 * v50;
                v52 = v47 >> 3;
                v54 = v51 + 8;
                v53 = v51 < -8;
                v55 = v51 + 15;
                if (!v53) {
                  v55 = v54;
                }
                v56 = v45 + 7;
                if ((int)v45 < -7) {
                  v56 = v45 + 14;
                }
                if (v52 <= (v55 >> 3) + (v56 >> 3)) {
                  v91 = MovieCalloc_plt(2, v44);
                  *((_QWORD*)a2 + 8) = v91;
                  if (v91 == 0) {
                    goto LABEL_18;
                  }
                  if (v48 >= 1) {
                    for (j = 0; j != v48; ++j) {
                      *(_WORD*)(*((_QWORD*)a2 + 8) + 2 * j) =
                          MovieRoutine_7a3c0(a1, a2[6]);
                    }
                  }
                  if ((unsigned int)MovieRoutine_7a3b0(a1) != 0) {
                    goto LABEL_18;
                  }
                  v93 = *((_QWORD*)a2 + 9);
                  v94 = *((_QWORD*)a2 + 4) * a2[6];
                  a2[5] = 1;
                  v95 = v94 + 8;
                  v53 = v94 < -8;
                  v96 = v94 + 15;
                  if (!v53) {
                    v96 = v95;
                  }
                  v97 = v96 >> 3;
                  v98 = opus_src_80500(v93, v96 >> 3);
                  v99 = v98 >= (int)v97 ? 1 : 2;
                  a2[22] = v98;
                  a2[23] = v99;
                  if ((unsigned int)MovieRoutine_80560((__int64)a2, v11, v48,
                                                       a1, 1u) != 0) {
                    goto LABEL_18;
                  }
                  MovieFree_plt(*((_QWORD*)a2 + 8));
                  *((_QWORD*)a2 + 8) = 0;
                }
                else {
                LABEL_76:
                  if ((int)v45 > 8) {
                    v82 = MovieMalloc_plt(2 * (int)v44);
                    *((_QWORD*)a2 + 8) = v82;
                    if (v82 == 0) {
                      goto LABEL_18;
                    }
                    if (v48 >= 1) {
                      for (k = 0; k != v48; ++k) {
                        *(_WORD*)(*((_QWORD*)a2 + 8) + 2 * k) =
                            MovieRoutine_7a3c0(a1, a2[6]);
                      }
                    }
                  }
                  else {
                    v57 = MovieMalloc_plt(v44);
                    *((_QWORD*)a2 + 8) = v57;
                    if (v57 == 0) {
                      goto LABEL_18;
                    }
                    if (v48 >= 1) {
                      for (m = 0; m != v48; ++m) {
                        *(_BYTE*)(*((_QWORD*)a2 + 8) + m) =
                            MovieRoutine_7a3c0(a1, a2[6]);
                      }
                    }
                  }
                  if ((unsigned int)MovieRoutine_7a3b0(a1) != 0) {
                    goto LABEL_18;
                  }
                  v84 = *((_QWORD*)a2 + 9);
                  a2[15] = v50;
                  a2[5] = 2;
                  v85 = *((_QWORD*)a2 + 4) * v50;
                  v86 = v85 + 8;
                  v53 = v85 < -8;
                  v87 = v85 + 15;
                  if (!v53) {
                    v87 = v86;
                  }
                  v88 = v87 >> 3;
                  v89 = opus_src_80500(v84, v87 >> 3);
                  v90 = v89 >= (int)v88 ? 1 : 2;
                  a2[22] = v89;
                  a2[23] = v90;
                  if ((unsigned int)MovieRoutine_80560((__int64)a2, v11, v48,
                                                       a1, 1u) != 0) {
                    goto LABEL_18;
                  }
                }
                break;
              case 0:
                v39 = a2[24];
                v40 = (32 - __clz(v39)) >> 3;
                v41 = v39 != 0 ? v40 + 1 : 1;
                v42 = opus_src_80500(*((_QWORD*)a2 + 9), v41);
                a2[5] = 0;
                v43 = v41 <= v42 ? 1 : 2;
                a2[22] = v42;
                a2[23] = v43;
                if ((unsigned int)MovieRoutine_80560((__int64)a2, v11, 0, a1,
                                                     0) != 0) {
                  goto LABEL_18;
                }
                break;
              default:
                goto LABEL_18;
              }
              v101 = a2[22];
              if (v101 == 2) {
                if (a2[23] == 1) {
                  v102 = 2;
                }
                else {
                  v102 = 3;
                }
              }
              else if (v101 == 1) {
                if (a2[23] == 1) {
                  a2[4] = 0;
                  goto LABEL_141;
                }
                v102 = 1;
              }
              else {
                v102 = 4;
              }
              a2[4] = v102;
            LABEL_141:
              if ((unsigned int)MovieRoutine_7a3b0(a1) == 0) {
                v18 = 0;
                goto LABEL_25;
              }
            LABEL_18:
              v15 = *((_QWORD*)a2 + 8);
              if (v15 != 0) {
                MovieFree_plt(v15);
              }
              v16 = *((_QWORD*)a2 + 1);
              if (v16 != 0) {
                MovieFree_plt(v16);
              }
              v17 = *((_QWORD*)a2 + 10);
              if (v17 != 0) {
                MovieFree_plt(v17);
              }
              *((_QWORD*)a2 + 11) = 0;
              *((_QWORD*)a2 + 12) = 0;
              *((_QWORD*)a2 + 9) = 0;
              *((_QWORD*)a2 + 10) = 0;
              *((_QWORD*)a2 + 7) = 0;
              *((_QWORD*)a2 + 8) = 0;
              *((_QWORD*)a2 + 5) = 0;
              *((_QWORD*)a2 + 6) = 0;
              *((_QWORD*)a2 + 3) = 0;
              *((_QWORD*)a2 + 4) = 0;
              *((_QWORD*)a2 + 1) = 0;
              *((_QWORD*)a2 + 2) = 0;
              *(_QWORD*)a2 = 0;
              MovieFree_plt(v11);
              v11 = *((_QWORD*)a2 + 8);
              v18 = -1;
            LABEL_25:
              MovieFree_plt(v11);
              return v18;
            }
          }
        }
      }
    }
  }
  v11 = 0;
  goto LABEL_18;
}

__int64 opus_src_804b0(unsigned int a1, _DWORD* a2)
{
  unsigned __int64 v2;
  int v3;
  unsigned int v4;

  v2 = *(_QWORD*)&a1 & 0x1FFFFFLL;
  if ((*(_QWORD*)&a1 & 0x1FFFFFLL) != 0) {
    v3 = __clz(v2);
    v4 = (_DWORD)v2 << (30 - (v3 ^ 0x3F));
    *a2 = ((a1 >> 21) & 0x3FF) - v3 - 755;
    if ((int)a1 > -1) {
      return v4;
    }
    else {
      return -v4;
    }
  }
  else {
    *a2 = -9999;
    return 0;
  }
}

__int64 opus_src_80500(__int64 a1, unsigned int a2)
{
  __int64 result;
  int v4;
  bool v5;
  unsigned int v6;
  signed int v7;

  result = 4;
  if (a1 >= 2) {
    v4 = 3 * a1;
    if (a2 == 3) {
      result = 4;
    }
    else {
      result = a2;
    }
    v6 = v4 - 6;
    v5 = v6 == 0;
    v7 = 32 - __clz(v6);
    if (v5) {
      v7 = 0;
    }
    if (v7 < 4 * (int)result) {
      if ((unsigned int)(result + 1) >= 3) {
        return (unsigned int)((int)result / 2);
      }
      else {
        return 1;
      }
    }
  }
  return result;
}

__int64 opus_src_80de0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v8;
  __int64 result;
  int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  int v15;
  int v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  __int64 j;
  __int64 i;
  int v22;
  int v23;
  bool v24;
  char v25;
  int v26;
  int v27;
  int v28;
  __int64 v29;
  int v30;
  int v31;
  char v32;
  int v33;
  int v34;
  __int64 v35;
  int v36;
  __int64 v37;
  _DWORD* v38;
  __int64 v39;
  int v40;

  v8 = MovieRoutine_80960((int*)a1, a2);
  if ((unsigned int)MovieRoutine_7a3b0(a2) != 0) {
    return 0xFFFFFFFFLL;
  }
  v10 = *(_DWORD*)(a1 + 20);
  switch (v10) {
  case 3:
    v19 = *(_QWORD*)(a1 + 64) + *(_DWORD*)(a1 + 60) * v8;
    v11 = *(_QWORD*)(a1 + 32);
    if (*(int*)(a1 + 24) >= 9) {
      if (v11 >= 1) {
        for (i = 0; i < v11; ++i) {
          *(_DWORD*)(a3 + 4 * i) = *(unsigned __int16*)(v19 + 2 * i);
          v11 = *(_QWORD*)(a1 + 32);
        }
      }
    }
    else if (v11 >= 1) {
      for (j = 0; j < v11; ++j) {
        *(_DWORD*)(a3 + 4 * j) = *(unsigned __int8*)(v19 + j);
        v11 = *(_QWORD*)(a1 + 32);
      }
    }
    break;
  case 2:
    v11 = *(_QWORD*)(a1 + 32);
    if (v11 >= 1) {
      v14 = 0;
      v15 = ~(-1 << *(_DWORD*)(a1 + 60));
      do {
        v17 = *(_QWORD*)(a1 + 64);
        v18 = v8 & v15;
        if (*(int*)(a1 + 24) > 8) {
          v16 = *(unsigned __int16*)(v17 + 2LL * v18);
        }
        else {
          v16 = *(unsigned __int8*)(v17 + v18);
        }
        *(_DWORD*)(a3 + 4 * v14++) = v16;
        v8 >>= *(_DWORD*)(a1 + 60);
        v11 = *(_QWORD*)(a1 + 32);
      } while (v11 > v14);
    }
    break;
  case 1:
    v11 = *(_QWORD*)(a1 + 32);
    if (v11 >= 1) {
      v12 = 0;
      v13 = ~(-1 << *(_DWORD*)(a1 + 24));
      do {
        *(_DWORD*)(a3 + 4 * v12++) = v8 & v13;
        v8 >>= *(_DWORD*)(a1 + 24);
        v11 = *(_QWORD*)(a1 + 32);
      } while (v11 > v12);
    }
    break;
  default:
    return 0xFFFFFFFFLL;
  }
  v22 = *(_DWORD*)(a1 + 44);
  v23 = *(_DWORD*)(a1 + 52);
  v24 = __OFSUB__(a4, v22);
  v26 = a4 - v22;
  v25 = (v26 < 0) ^ v24 | (v26 == 0);
  v27 = v23 >> v26;
  v28 = v23 << (-(char)v26 & 31);
  if (v25) {
    v27 = v28;
  }
  if (v11 < 1) {
    return 0;
  }
  v29 = 0;
  v30 = a4 - *(_DWORD*)(a1 + 40);
  v31 = v30 >> 31;
  v32 = v30 & ~(unsigned __int8)(v30 >> 31);
  v33 = *(_DWORD*)(a1 + 48) << (v31 & (*(_BYTE*)(a1 + 40) - a4));
  v34 = v27 << v32;
  while (1) {
    v35 = *(int*)(a3 + 4 * v29) * (__int64)v33;
    if (v35 != (int)v35) {
      break;
    }
    v24 = __OFADD__((_DWORD)v35, v34);
    v36 = v35 + v34;
    if (v24) {
      break;
    }
    *(_DWORD*)(a3 + 4 * v29++) = v36 >> v32;
    v37 = *(_QWORD*)(a1 + 32);
    if (v37 <= v29) {
      result = 0;
      if (*(_DWORD*)(a1 + 56) == 0 || v37 < 2) {
        return result;
      }
      v38 = (_DWORD*)(a3 + 4);
      v39 = 1;
      while (1) {
        v40 = *(v38 - 1);
        v24 = __OFADD__(*v38, v40);
        *v38++ += v40;
        if (v24) {
          break;
        }
        ++v39;
        result = 0;
        if ((signed __int64)*(_QWORD*)(a1 + 32) <= v39) {
          return result;
        }
      }
      return 0xFFFFFFFFLL;
    }
  }
  return 0xFFFFFFFFLL;
}

__int64 opus_src_813e0(__int64 a1, __int64 a2, _DWORD* a3, __int64 a4,
                       __int64 a5, __int64 a6, int a7)
{
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _DWORD* v27;
  __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  int v32;
  __int64 v33;
  __int64 v34;
  char v35;
  int v36;
  __int64 v37;
  __int64 v38;
  unsigned int v39;
  __int64 v40;
  int v41;
  __int64 v42;
  unsigned int v43;
  __int64 v44;
  char v45;
  __int64 v46;
  int v47;
  int v48;
  int v49;
  int v50;
  __int64 v51;
  __int64 v52;
  int v53;
  __int64 v54;
  int v55;
  __int64 v56;
  int v57;
  __int64 v58;
  char v59;
  __int64 v60;
  int v61;
  unsigned int v62;
  int v63;
  _DWORD* v64;
  __int64 v65;
  __int64 v66;
  unsigned int* v67;
  _DWORD* v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  struct {
    __int64 v76;
    __int64 v77;
    __int64 v78;
    __int64 v79;
    __int64 v80;
    __int64 v81;
    __int64 v82;
    __int64 v83;
    __int64 v84;
    __int64 v85;
    __int64 v86;
    __int64 v87;
    __int64 v88;
    __int64 v89;
    __int64 v90;
    __int64 v91;
    int v92;
  } v76_;

  v75 = a6;
  if (a2 < 1) {
    return 1;
  }
  v76_.v92 = 0;
  v76_.v90 = 0;
  v76_.v91 = 0;
  v76_.v88 = 0;
  v76_.v89 = 0;
  v76_.v86 = 0;
  v76_.v87 = 0;
  v76_.v84 = 0;
  v76_.v85 = 0;
  v76_.v82 = 0;
  v76_.v83 = 0;
  v76_.v80 = 0;
  v76_.v81 = 0;
  v76_.v78 = 0;
  v76_.v79 = 0;
  v76_.v76 = 0;
  v76_.v77 = 0;
  if (a2 == 1) {
    *a3 = 0x80000000;
    goto LABEL_4;
  }
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v71 = a1;
  v72 = a2;
  v14 = (2 * a2) | 1;
  v69 = a3 + 1;
  v70 = v14;
  while (2) {
    v15 = *(unsigned __int8*)(a1 + v11);
    if (*(_BYTE*)(a1 + v11) == 0) {
      goto LABEL_7;
    }
    if ((unsigned int)v15 > 0x20) {
      return 1;
    }
    v16 = *((_DWORD*)&v76_.v76 + v15);
    if (v13 != 0 && v16 == 0) {
      return 0xFFFFFFFFLL;
    }
    if ((_DWORD)v15 == 1) {
      v17 = 0;
      LOBYTE(v73) = -1;
      if (v12 > 0) {
        goto LABEL_15;
      }
      goto LABEL_14;
    }
    v25 = v15 - 1;
    v17 = 0;
    do {
      v26 = (v16 >> v25) & 1;
      if (v17 >= v12) {
        *(_QWORD*)&a3[2 * v17] = (unsigned int)++v12;
        v27 = &a3[2 * v17];
        v17 = (unsigned int)v27[v26];
        if ((_DWORD)v17 != 0) {
          goto LABEL_29;
        }
      LABEL_28:
        v17 = (unsigned int)v12;
        v27[v26] = v12;
        goto LABEL_29;
      }
      if ((v26 | (unsigned __int64)(2 * v17)) > v14) {
        return 1;
      }
      v27 = &a3[2 * v17];
      v17 = (unsigned int)v27[v26];
      if ((_DWORD)v17 == 0) {
        goto LABEL_28;
      }
    LABEL_29:
      if (a2 <= v17) {
        return 1;
      }
      --v25;
    } while (v25 != 0);
    v73 = -v15;
    if (v17 >= v12) {
    LABEL_14:
      ++v12;
      v69[2 * v17] = 0;
    }
  LABEL_15:
    v18 = *(_DWORD*)(a5 + 20);
    v19 = 0;
    v74 = v13;
    if (v18 > 1) {
      if (v18 == 3) {
        v19 = v13;
      }
      else if (v18 == 2) {
        v28 = *(_QWORD*)(a5 + 32);
        if (v28 >= 1) {
          v29 = *(_DWORD*)(a5 + 60);
          if ((unsigned __int64)v28 >= 8) {
            v36 = 0;
            v30 = 0;
            v19 = 0;
            v31 = v11;
            do {
              v30 += 8;
              v37 = v31 / a4 / a4 / a4;
              v38 = v37 / a4;
              v39 = ((unsigned int)(v37 % a4) << (3 * v29 + v36)) |
                    ((unsigned int)(v31 / a4 / a4 % a4) << (2 * v29 + v36)) |
                    ((unsigned int)(v31 / a4 % a4) << (v29 + v36)) |
                    ((unsigned int)(v31 % a4) << v36) | v19;
              v40 = v37 / a4 / a4;
              v41 = (((_DWORD)v38 - (_DWORD)v40 * (_DWORD)a4)
                     << (4 * v29 + v36)) |
                    v39;
              v42 = v40 / a4;
              v43 = ((unsigned int)(v40 % a4) << (5 * v29 + v36)) | v41;
              v44 = v40 / a4 / a4;
              LODWORD(v42) = ((_DWORD)v42 - (_DWORD)v44 * (_DWORD)a4)
                             << (6 * v29 + v36);
              v45 = 7 * v29 + v36;
              v36 += 8 * v29;
              LODWORD(v42) = v42 | v43;
              v31 = v44 / a4;
              v19 = ((unsigned int)(v44 % a4) << v45) | v42;
            } while ((v28 & 0x7FFFFFFFFFFFFFF8LL) != v30);
          }
          else {
            LODWORD(v30) = 0;
            v19 = 0;
            v31 = v11;
          }
          v46 = *(_QWORD*)(a5 + 32) & 7LL;
          if (v46 != 0) {
            v47 = v29 * v30;
            do {
              --v46;
              v48 = v31 % a4;
              v31 /= a4;
              v49 = v48 << v47;
              v47 += v29;
              v19 |= v49;
            } while (v46 != 0);
          }
          goto LABEL_56;
        }
        goto LABEL_44;
      }
    }
    else if (v18 != 0) {
      if (v18 == 1) {
        v20 = *(_QWORD*)(a5 + 32);
        if (a7 == 1) {
          if (v20 >= 1) {
            v21 = *(_QWORD*)(a5 + 64);
            v22 = *(_DWORD*)(a5 + 24);
            if ((unsigned __int64)v20 >= 8) {
              v50 = 0;
              v23 = 0;
              v19 = 0;
              v24 = v11;
              do {
                v23 += 8;
                v51 = v24 / a4 / a4 / a4;
                v52 = v51 / a4;
                v53 =
                    (*(unsigned __int16*)(v21 + 2LL * (unsigned int)(v51 % a4))
                     << (3 * v22 + v50)) |
                    (*(unsigned __int16*)(v21 + 2LL * (unsigned int)(v24 / a4 /
                                                                     a4 % a4))
                     << (2 * v22 + v50)) |
                    (*(unsigned __int16*)(v21 +
                                          2LL * (unsigned int)(v24 / a4 % a4))
                     << (v22 + v50)) |
                    (*(unsigned __int16*)(v21 + 2LL * (unsigned int)(v24 % a4))
                     << v50) |
                    v19;
                v54 = v51 / a4 / a4;
                v55 =
                    (*(unsigned __int16*)(v21 +
                                          2LL * (unsigned int)(v52 - v54 * a4))
                     << (4 * v22 + v50)) |
                    v53;
                v56 = v54 / a4;
                v57 =
                    (*(unsigned __int16*)(v21 + 2LL * (unsigned int)(v54 % a4))
                     << (5 * v22 + v50)) |
                    v55;
                v58 = v54 / a4 / a4;
                LODWORD(v56) =
                    *(unsigned __int16*)(v21 +
                                         2LL * (unsigned int)(v56 - v58 * a4))
                    << (6 * v22 + v50);
                v59 = 7 * v22 + v50;
                v50 += 8 * v22;
                LODWORD(v56) = v56 | v57;
                v24 = v58 / a4;
                v19 =
                    (*(unsigned __int16*)(v21 + 2LL * (unsigned int)(v58 % a4))
                     << v59) |
                    v56;
              } while ((v20 & 0x7FFFFFFFFFFFFFF8LL) != v23);
            }
            else {
              LODWORD(v23) = 0;
              v19 = 0;
              v24 = v11;
            }
            v60 = *(_QWORD*)(a5 + 32) & 7LL;
            if (v60 != 0) {
              v61 = v22 * v23;
              do {
                --v60;
                v62 = v24 % a4;
                v24 /= a4;
                v63 = *(unsigned __int16*)(v21 + 2LL * v62) << v61;
                v61 += v22;
                v19 |= v63;
              } while (v60 != 0);
            }
            goto LABEL_56;
          }
        LABEL_44:
          v19 = 0;
        }
        else {
          if (v20 < 1) {
            goto LABEL_44;
          }
          v32 = *(_DWORD*)(a5 + 24);
          v33 = 0;
          v19 = 0;
          do {
            v34 = MovieRoutine_7a3c0(v75, v32);
            v32 = *(_DWORD*)(a5 + 24);
            v35 = v32 * v33++;
            v19 |= v34 << v35;
          } while ((signed __int64)*(_QWORD*)(a5 + 32) > v33);
        }
      }
    }
    else {
      v19 = v11;
    }
  LABEL_56:
    a1 = v71;
    a2 = v72;
    v14 = v70;
    v13 = v74 + 1;
    a3[2 * v17 + ((v16 >> (v73 + v15)) & 1)] = v19 | 0x80000000;
    v64 = (_DWORD*)&v76_.v76 + v15;
    v65 = v15 + 1;
    while ((*v64 & 1) == 0) {
      --v65;
      *v64-- |= 1u;
      if (v65 <= 1) {
        if ((_DWORD)v15 == 32) {
          goto LABEL_7;
        }
        goto LABEL_62;
      }
    }
    *v64 = 2 * *(v64 - 1);
    if ((_DWORD)v15 != 32) {
    LABEL_62:
      v66 = 32 - v15;
      v67 = (unsigned int*)&v76_.v76 + v15 + 1;
      do {
        if (v16 != *v67 >> 1) {
          break;
        }
        --v66;
        v16 = *v67;
        *v67 = 2 * *(v67 - 1);
        ++v67;
      } while (v66 != 0);
    }
  LABEL_7:
    if (++v11 != a2) {
      continue;
    }
    break;
  }
LABEL_4:
  if (*(_QWORD*)(a5 + 72) == 1) {
    return 0;
  }
  return (v76_.v76 & 0x100000000LL) != 0 || (v76_.v77 & 3) != 0 ||
         (v76_.v77 & 0x700000000LL) != 0 || (v76_.v78 & 0xF) != 0 ||
         (v76_.v78 & 0x1F00000000LL) != 0 || (v76_.v79 & 0x3F) != 0 ||
         (v76_.v79 & 0x7F00000000LL) != 0 || (_BYTE)v76_.v80 != 0 ||
         (v76_.v80 & 0x1FF00000000LL) != 0 || (v76_.v81 & 0x3FF) != 0 ||
         (v76_.v81 & 0x7FF00000000LL) != 0 || (v76_.v82 & 0xFFF) != 0 ||
         (v76_.v82 & 0x1FFF00000000LL) != 0 || (v76_.v83 & 0x3FFF) != 0 ||
         (v76_.v83 & 0x7FFF00000000LL) != 0 || (_WORD)v76_.v84 != 0 ||
         (v76_.v84 & 0x1FFFF00000000LL) != 0 || (v76_.v85 & 0x3FFFF) != 0 ||
         (v76_.v85 & 0x7FFFF00000000LL) != 0 || (v76_.v86 & 0xFFFFF) != 0 ||
         (v76_.v86 & 0x1FFFFF00000000LL) != 0 || (v76_.v87 & 0x3FFFFF) != 0 ||
         (v76_.v87 & 0x7FFFFF00000000LL) != 0 || (v76_.v88 & 0xFFFFFF) != 0 ||
         (v76_.v88 & 0x1FFFFFF00000000LL) != 0 || (v76_.v89 & 0x3FFFFFF) != 0 ||
         (v76_.v89 & 0x7FFFFFF00000000LL) != 0 || (v76_.v90 & 0xFFFFFFF) != 0 ||
         (v76_.v90 & 0x1FFFFFFF00000000LL) != 0 ||
         (v76_.v91 & 0x3FFFFFFF) != 0 ||
         (HIDWORD(v76_.v91) & 0x7FFFFFFF | v76_.v92) != 0;
}

void* opus_src_81b40(__int64 a1, int a2, unsigned int a3, int* a4, __int64 a5,
                     int a6, int a7, int a8)
{
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v16;
  unsigned __int16* v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  __int64 v24;
  void* result;
  int v26;
  unsigned int v27;
  unsigned __int64 v28;
  int v29;
  int v30;
  _DWORD* v31;
  __int64 v32;
  int v33;
  unsigned __int64 v34;
  int v35;
  int v36;
  __int64 v37;
  int v38;
  int v39;
  unsigned __int64 v40;
  int v41;
  int v42;
  int v43;
  __int64 v44;
  _DWORD* v45;
  int v46;
  int v47;
  unsigned int v48;
  int v49;
  unsigned int v50;
  int v51;
  __int64 v52;
  __int64 v53;
  _DWORD* v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned __int8* v58;
  int v59;
  int v60;
  unsigned int v61;
  int v62;
  unsigned int v63;
  unsigned int v64;
  int v65;
  unsigned int v66;
  __int64 v67;
  __int64 v68;
  unsigned __int8* v69;
  int v70;
  int v71;
  unsigned int v72;
  int v73;
  unsigned int v74;
  int v75;
  int v76;
  unsigned int v77;
  __int64 v78;
  __int64 v79;
  bool v80;
  unsigned __int8* v81;
  unsigned __int8* v82;
  int v83;
  int v84;
  unsigned int v85;
  int v86;
  unsigned int v87;
  int v88;
  int v89;
  unsigned int v90;
  __int64 v91;
  __int64 v92;
  unsigned __int8* v93;
  unsigned __int8* v94;
  int v95;
  int v96;
  unsigned int v97;
  unsigned int v98;
  int v99;
  int v100;
  unsigned __int64 v101;
  int* v102;
  __int64 v103;
  __int64 v104;
  unsigned __int8* v105;
  int v106;
  int v107;
  int v108;
  int v109;
  unsigned int v110;
  int v111;
  __int64 v112;
  __int64 v113;
  unsigned __int8* v114;
  unsigned __int8* v115;
  int v116;
  unsigned int v117;
  unsigned int v118;
  unsigned int v119;
  int v120;
  int v121;
  unsigned int v122;
  unsigned int v123;
  __int64 v124;
  __int64 v125;
  unsigned __int8* v126;
  int v127;
  __int16 v128;
  int v129;
  int v130;
  int v131;
  int v132;
  int v133;
  int v134;
  __int64 v135;
  int v136;
  int v137;
  unsigned __int64 v138;
  int v139;
  struct {
    __int64 v140;
    _DWORD* v141;
    unsigned __int64 v142;
    int v143;
    int v144;
    unsigned __int64 v145;
    char gap40_[4];
    int v146;
    _DWORD* v147;
    _DWORD* v148;
    unsigned __int64 v149;
    __int64 v150;
    int v151;
    int v152;
    int v153;
    int v154;
    unsigned __int64 v155;
    __int64 v156;
  } v140_;

  v8 = a3;
  v9 = 4LL * (int)a5;
  v10 = a7 << 12;
  v11 = (int)a5;
  v140_.v154 = a6;
  v140_.v148 =
      (_DWORD*)__builtin_alloca((v9 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v16 = (int)v8;
  v17 = (unsigned __int16*)&MovieData_b399e;
  v18 = 0;
  v19 = (unsigned int)a2;
  v20 = 6;
  v21 = 1769472;
  v140_.v155 = 0x80000000uLL / (int)v8;
  v140_.v156 = a5;
  while (1) {
    if (a8 >= *(v17 - 3) && a8 < (unsigned int)*(v17 - 2)) {
      v23 = v20 - 6;
      v22 = v20 - 5;
      goto LABEL_21;
    }
    if (a8 >= *(v17 - 2) && a8 < (unsigned int)*(v17 - 1)) {
      v23 = v20 - 5;
      v22 = v20 - 4;
      goto LABEL_21;
    }
    v22 = v18 + 3;
    if (a8 >= *(v17 - 1) && a8 < (unsigned int)*v17) {
      v23 = v18 + 2;
      goto LABEL_21;
    }
    if (a8 >= *v17 && a8 < (unsigned int)v17[1]) {
      v23 = v18 + 3;
      v22 = v18 + 4;
      goto LABEL_21;
    }
    v22 = v18 + 5;
    if (a8 >= v17[1] && a8 < (unsigned int)v17[2]) {
      break;
    }
    v18 += 6;
    if (a8 >= v17[2] && a8 < (unsigned int)v17[3]) {
      v23 = v22;
      v22 = v18;
      goto LABEL_21;
    }
    v20 += 6;
    v17 += 6;
    if (v20 == 60) {
      goto LABEL_22;
    }
  }
  v23 = v18 + 4;
LABEL_21:
  v24 = MovieData_b3998[v23];
  v21 = (((0x80000000 / ((unsigned __int64)MovieData_b3998[v22] - v24) *
           (a8 - v24)) >>
          16) &
         0xFFFFFFFE) +
        (v23 << 15);
LABEL_22:
  result = (void*)memset_plt_alt1(v140_.v148, 0, v9);
  v26 = v140_.v156;
  v27 = (unsigned int)v140_.v155 >> 1;
  v28 =
      (unsigned __int64)(v21 * (__int64)((unsigned int)v140_.v155 >> 1)) >> 31;
  v29 = MovieData_b3998[(unsigned int)v28 >> 14];
  v30 = MovieData_b3998[((unsigned int)v28 >> 14) + 1];
  if ((int)v140_.v156 < 1) {
  LABEL_26:
    if (a2 < 1) {
      return result;
    }
    v35 = a8 / a2;
    v140_.v146 = -7 * v26;
    v36 = 0;
    LODWORD(v37) = 0;
    v38 = 0;
    v39 = 0;
    v140_.v150 = v26 | 1u;
    v140_.v145 = v11 - 4;
    v140_.v147 = v140_.v148 - 1;
    v140_.v144 = -7 * (v26 + 1);
    v40 = ((unsigned __int64)(v11 - 4) >> 1) + 1;
    v41 = v29 + (((v30 - v29) * (v28 & 0x3FFE)) >> 14);
    v42 = a8 % a2;
    v140_.v149 = v40 & 3;
    v140_.v142 = v40 & 0xFFFFFFFFFFFFFFFCLL;
    v43 = *v140_.v148;
    v140_.v152 = v140_.v148[1];
    v140_.v153 = v8 - 1;
    v140_.v143 = v43;
    v140_.v141 = v140_.v148 + 5;
    v140_.v151 = -v10;
    while (1) {
      v44 = v8;
      v45 = &MovieData_b3a84[(unsigned int)(v36 * v140_.v155) >> 24];
      v46 = (int)((v45[1] - *v45) *
                      (((unsigned int)(v36 * v140_.v155) >> 15) & 0x1FF) +
                  (*v45 << 9)) >>
            9;
      v47 = v43 - v46;
      if (v43 - v46 < 0) {
        v47 = v46 - v43;
      }
      v48 = 46341 * v47;
      v49 = v140_.v152 - v46;
      if (v140_.v152 - v46 < 0) {
        v49 = v46 - v140_.v152;
      }
      v50 = 46341 * v49;
      if (v26 < 4) {
        v51 = 0;
        v53 = 3;
      }
      else {
        if (v140_.v145 >= 6) {
          v54 = v140_.v141;
          v55 = v140_.v142;
          v52 = 3;
          v51 = 0;
          do {
            v56 = (v48 | v50) >> 25;
            v57 = (v48 | v50) >> 19;
            v52 += 8;
            if ((_DWORD)v57 != 0) {
              v58 = (unsigned __int8*)&MovieData_b3a44 + v57;
            }
            else {
              v58 = (unsigned __int8*)&MovieData_a2400 + ((v48 | v50) >> 16);
            }
            if ((_DWORD)v56 != 0) {
              v58 = (unsigned __int8*)&MovieData_b3a04 + v56;
            }
            v59 = *v58;
            v60 = *(v54 - 3) - v46;
            v61 = v48 >> v59;
            if (v60 < 0) {
              v60 = v46 - *(v54 - 3);
            }
            v62 = *(v54 - 2) - v46;
            v63 = v60 * v61;
            v64 = v50 >> v59;
            if (v62 < 0) {
              v62 = v46 - *(v54 - 2);
            }
            v65 = v51 + v59;
            v66 = v62 * v64;
            v67 = (v63 | v66) >> 25;
            v68 = (v63 | v66) >> 19;
            v69 = (unsigned __int8*)&MovieData_a2400 + ((v63 | v66) >> 16);
            if ((_DWORD)v68 != 0) {
              v69 = (unsigned __int8*)&MovieData_b3a44 + v68;
            }
            if ((_DWORD)v67 != 0) {
              v69 = (unsigned __int8*)&MovieData_b3a04 + v67;
            }
            v70 = *v69;
            v71 = *(v54 - 1) - v46;
            if (v71 < 0) {
              v71 = v46 - *(v54 - 1);
            }
            v72 = v66 >> v70;
            v73 = v65 + v70;
            v74 = v71 * (v63 >> v70);
            v75 = v54[1];
            v76 = *v54 - v46;
            if (v76 < 0) {
              v76 = v46 - *v54;
            }
            v77 = v76 * v72;
            v78 = (v74 | v77) >> 25;
            v79 = (v74 | v77) >> 19;
            v80 = (_DWORD)v79 == 0;
            v81 = (unsigned __int8*)&MovieData_b3a44 + v79;
            v82 = (unsigned __int8*)&MovieData_a2400 + ((v74 | v77) >> 16);
            if (!v80) {
              v82 = v81;
            }
            if ((_DWORD)v78 != 0) {
              v82 = (unsigned __int8*)&MovieData_b3a04 + v78;
            }
            v83 = v75 - v46;
            v84 = *v82;
            if (v75 - v46 < 0) {
              v83 = v46 - v75;
            }
            v85 = v77 >> v84;
            v86 = v73 + v84;
            v87 = v83 * (v74 >> v84);
            v88 = v54[3];
            v89 = v54[2] - v46;
            if (v89 < 0) {
              v89 = v46 - v54[2];
            }
            v90 = v89 * v85;
            v91 = (v87 | v90) >> 25;
            v92 = (v87 | v90) >> 19;
            v80 = (_DWORD)v92 == 0;
            v93 = (unsigned __int8*)&MovieData_b3a44 + v92;
            v94 = (unsigned __int8*)&MovieData_a2400 + ((v87 | v90) >> 16);
            if (!v80) {
              v94 = v93;
            }
            if ((_DWORD)v91 != 0) {
              v94 = (unsigned __int8*)&MovieData_b3a04 + v91;
            }
            v95 = v88 - v46;
            v96 = *v94;
            if (v88 - v46 < 0) {
              v95 = v46 - v88;
            }
            v97 = v87 >> v96;
            v98 = v90 >> v96;
            v51 = v86 + v96;
            v48 = v95 * v97;
            v99 = v54[4];
            v54 += 8;
            v100 = v99 - v46;
            if (v100 < 0) {
              v100 = -v100;
            }
            v55 -= 4LL;
            v50 = v100 * v98;
          } while (v55 != 0);
        }
        else {
          v51 = 0;
          v52 = 3;
        }
        v53 = v140_.v150;
        v43 = v140_.v143;
        if (v140_.v149 != 0) {
          v101 = v140_.v149;
          v102 = &v140_.v148[v52];
          do {
            v103 = (v48 | v50) >> 25;
            v104 = (v48 | v50) >> 19;
            v105 = (unsigned __int8*)&MovieData_a2400 + ((v48 | v50) >> 16);
            if ((_DWORD)v104 != 0) {
              v105 = (unsigned __int8*)&MovieData_b3a44 + v104;
            }
            if ((_DWORD)v103 != 0) {
              v105 = (unsigned __int8*)&MovieData_b3a04 + v103;
            }
            v106 = *v105;
            v107 = *(v102 - 1);
            v108 = *v102;
            v102 += 2;
            v109 = v107 - v46;
            v110 = v48 >> v106;
            if (v109 < 0) {
              v109 = -v109;
            }
            v111 = v108 - v46;
            v51 += v106;
            v48 = v109 * v110;
            if (v111 < 0) {
              v111 = -v111;
            }
            --v101;
            v50 = v111 * (v50 >> v106);
          } while (v101 != 0);
          v53 = v140_.v150;
        }
      }
      v112 = (v48 | v50) >> 25;
      v113 = (v48 | v50) >> 19;
      v114 = (unsigned __int8*)&MovieData_b3a44 + v113;
      v115 = (unsigned __int8*)&MovieData_a2400 + ((v48 | v50) >> 16);
      v80 = (_DWORD)v113 == 0;
      v26 = v140_.v156;
      if (!v80) {
        v115 = v114;
      }
      if ((_DWORD)v112 != 0) {
        v115 = (unsigned __int8*)&MovieData_b3a04 + v112;
      }
      v116 = *v115;
      v117 = v50 >> v116;
      v118 = v48 >> v116;
      if ((v140_.v156 & 1) != 0) {
        v121 = v140_.v147[v53] - v46;
        v122 = v46 * v46;
        if (v121 < 0) {
          v121 = -v121;
        }
        v123 = v121 * v118;
        v124 = (v123 | (v117 << 14)) >> 25;
        v125 = (v123 | (v117 << 14)) >> 19;
        v126 =
            (unsigned __int8*)&MovieData_a2400 + ((v123 | (v117 << 14)) >> 16);
        if ((_DWORD)v125 != 0) {
          v126 = (unsigned __int8*)&MovieData_b3a44 + v125;
        }
        if ((_DWORD)v124 != 0) {
          v126 = (unsigned __int8*)&MovieData_b3a04 + v124;
        }
        v26 = v140_.v156;
        v127 = *v126;
        v119 = (((((v117 << 14 >> v127) * (v117 << 14 >> v127)) >> 16) *
                 (0x4000 - (v122 >> 14))) >>
                14) +
               (((v123 >> v127) * (v123 >> v127)) >> 16);
        v120 = v140_.v156 + 2 * (v51 + v140_.v144 + v116 + v127);
        v8 = v44;
        if (HIWORD(v119) == 0) {
        LABEL_104:
          if (v119 - 1 <= 0x7FFE) {
            do {
              v128 = v119;
              v119 *= 2;
              --v120;
            } while (v119 != 0 && (v128 & 0x4000) == 0);
          }
          goto LABEL_107;
        }
      }
      else {
        v119 = (((v117 * v117) >> 16) * (0x4000 - v46) +
                ((v118 * v118) >> 16) * (v46 + 0x4000)) >>
               14;
        v120 = v140_.v156 + 2 * (v51 + v140_.v146 + v116);
        v8 = v44;
        if (HIWORD(v119) == 0) {
          goto LABEL_104;
        }
      }
      v119 >>= 1;
      ++v120;
    LABEL_107:
      result = &MovieData_b3e90;
      v129 =
          v140_.v151 +
          v140_.v154 * (((*(_QWORD*)((char*)&MovieData_b3c88 +
                                     (((unsigned __int64)v119 >> 6) & 0x1F8)) -
                          ((__int64)(*(_QWORD*)((char*)&MovieData_b3e90 +
                                                (((unsigned __int64)v119 >> 6) &
                                                 0x1F8)) *
                                     (v119 & 0x3FF)) >>
                           10)) *
                         MovieData_a2240[v120 & 1]) >>
                        ((unsigned __int8)((__int64)v120 >> 1) + 21));
      if (v129 <= 0) {
        if (v129 >= -573440) {
          v130 = MovieData_b1590[(unsigned __int64)(467LL * v129 + 267796480) >>
                                 20];
        }
        else {
          v130 = 0;
        }
      }
      else {
        v130 = 0x7FFFFFFF;
      }
      *(_DWORD*)(a1 + 4LL * (int)v37) =
          (unsigned int)(v130 * *(_DWORD*)(a1 + 4LL * (int)v37)) >> 15;
      LODWORD(v37) = v37 + 1;
      if ((int)v37 < a2) {
        v37 = (int)v37;
        while (1) {
          v131 = v38 + v42;
          v39 += v35;
          if (v131 < a2) {
            v132 = 0;
          }
          else {
            v132 = a2;
          }
          if (v131 >= a2) {
            ++v39;
          }
          v38 = v131 - v132;
          if (v39 >= v41) {
            break;
          }
          *(_DWORD*)(a1 + 4 * v37) =
              (unsigned int)(v130 * *(_DWORD*)(a1 + 4 * v37)) >> 15;
          if (v19 == ++v37) {
            LODWORD(v37) = v19;
            break;
          }
        }
      }
      v133 = v36 + 2;
      v134 = v36;
      v135 = v36 + 2LL;
      if ((int)v8 > v133) {
        v133 = v8;
      }
      v136 = v133 - 1;
      do {
        if (v135 >= v16) {
          v41 = 9999999;
          goto LABEL_29;
        }
        v137 = v134 + 2;
        ++v134;
        ++v135;
        v138 = (unsigned __int64)(v21 * (__int64)(int)(v27 * v137)) >> 31;
        v139 = MovieData_b3998[(unsigned int)v138 >> 14];
        v41 =
            v139 + (((MovieData_b3998[((unsigned int)v138 >> 14) + 1] - v139) *
                     (v138 & 0x3FFE)) >>
                    14);
      } while (v39 > v41);
      v136 = v134;
    LABEL_29:
      if (v136 >= v140_.v153) {
        v36 = v140_.v153;
      }
      else {
        v36 = v136;
      }
      if (v136 >= (int)v8) {
        v41 = 9999999;
      }
      if ((int)v37 >= a2) {
        return result;
      }
    }
  }
  v31 = v140_.v148;
  v32 = (unsigned int)v140_.v156;
  while (1) {
    v33 = *a4++;
    v34 = 5340354LL * v33;
    if (HIWORD(v34) != 0) {
      return (void*)memset_plt_alt1(a1, 0, 4LL * a2);
    }
    --v32;
    *v31++ = MovieData_b3a84[v34 >> 41] -
             (((MovieData_b3a84[v34 >> 41] - MovieData_b3a84[(v34 >> 41) + 1]) *
               (WORD2(v34) & 0x1FF)) >>
              9);
    if (v32 == 0) {
      goto LABEL_26;
    }
  }
}

__int64 opus_src_82460(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  unsigned __int8 v7;

  v2 = *(_QWORD*)(a1 + 48);
  v4 = MovieMalloc_plt(56);
  *(_DWORD*)v4 = MovieRoutine_7a3c0(a2, 8);
  *(_QWORD*)(v4 + 8) = MovieRoutine_7a3c0(a2, 16);
  *(_QWORD*)(v4 + 16) = MovieRoutine_7a3c0(a2, 16);
  *(_DWORD*)(v4 + 24) = MovieRoutine_7a3c0(a2, 6);
  *(_DWORD*)(v4 + 28) = MovieRoutine_7a3c0(a2, 8);
  v5 = MovieRoutine_7a3c0(a2, 4);
  *(_DWORD*)(v4 + 32) = v5 + 1;
  if (*(int*)v4 < 1 || *(__int64*)(v4 + 8) < 1 || *(__int64*)(v4 + 16) < 1) {
    goto LABEL_9;
  }
  if (v5 <= 0x7FFFFFFE) {
    v6 = 0;
    do {
      v7 = MovieRoutine_7a3c0(a2, 8);
      *(_BYTE*)(v4 + 36 + v6) = v7;
      if ((signed __int32)*(_DWORD*)(v2 + 32) <= (int)v7) {
        goto LABEL_9;
      }
    } while (++v6 < *(int*)(v4 + 32));
  }
  if ((unsigned int)MovieRoutine_7a3b0(a2) != 0) {
  LABEL_9:
    MovieFree_plt(v4);
    return 0;
  }
  return v4;
}

__int64 opus_src_825a0(__int64 a1, int* a2, __int64 a3)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  int v16;
  int v17;
  __int64 v19;
  __int64 v20;
  int v21;

  v6 = MovieRoutine_7a3c0(a1 + 8, a2[6]);
  if (v6 < 1) {
    return 0;
  }
  v7 = v6;
  v9 = a2[6];
  v8 = a2[7];
  v10 = opus_src_7fb50(a2[8]);
  v11 = MovieRoutine_7a3c0(a1 + 8, v10);
  if (v11 == -1) {
    return 0;
  }
  if (a2[8] <= v11) {
    return 0;
  }
  v12 = *a2;
  v13 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 48LL) + 80LL) +
        104LL * *((unsigned __int8*)a2 + v11 + 36);
  if ((signed __int64)*(_QWORD*)(v13 + 32) > v12 + 1 ||
      MovieRoutine_81160(
          (_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 48LL) + 80LL) +
                    104LL * *((unsigned __int8*)a2 + v11 + 36)),
          a3, a1 + 8, v12, -24) == -1) {
    return 0;
  }
  v14 = *a2;
  if (*a2 >= 1) {
    v15 = *(_QWORD*)(v13 + 32);
    v16 = 0;
    v17 = 0;
    do {
      if (v15 >= 1) {
        v14 = *a2;
        v19 = v17;
        if (v17 < *a2) {
          v20 = 1;
          while (1) {
            v21 = v19;
            *(_DWORD*)(a3 + 4 * v19++) += v16;
            v15 = *(_QWORD*)(v13 + 32);
            v14 = *a2;
            if (v15 <= v20) {
              break;
            }
            ++v20;
            if (v19 >= v14) {
              LODWORD(v19) = v21 + 1;
              break;
            }
          }
        }
        v17 = v19;
      }
      v16 = *(_DWORD*)(a3 - 4 + 4LL * v17);
    } while (v17 < v14);
  }
  *(_DWORD*)(a3 + 4LL * v14) = 16 * v7 * v8 / ~(-1 << v9);
  return a3;
}

#pragma GCC visibility pop
