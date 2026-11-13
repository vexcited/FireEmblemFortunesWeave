#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_DWORD* opus_70140(_DWORD*, __int64, __int64, int, int, unsigned int,
                   unsigned int, unsigned int, int, int, __int64, __int64);
__int16* opus_encoder_6d020(__int16* result, __int16*, __int16, __int16, int,
                            unsigned int, int, __int16*, int);
__int64* ec_enc_bit_logp(__int64* result, int, char);
__int64 MovieRoutine_6caf0(int, int, int, int, int, int);
__int64 celt_encode_with_ec(__int64, _BYTE*, int, __int64, int, __int64);
__int64 celt_exp2(__int16);
__int64 compute_redundancy_bytes(int, int, int, int);
__int64 compute_stereo_width(__int64, int, int, __int64);
__int64 decide_dtx_mode(_DWORD*, int, __int64, int, int, _BOOL4, float);
__int64 ec_enc_done(__int64 result);
__int64 ec_enc_init(__int64 result, __int64, int);
__int64 ec_enc_shrink(__int64, unsigned int);
__int64 ec_enc_uint(__int64*, __int64, unsigned int);
__int64 gen_toc(int, int, int, int);
__int64 hp_cutoff(__int64, __int16, __int64, __int64, unsigned int, int, int);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memmove_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 opus_6fad0(__int64);
__int64 opus_custom_encoder_ctl(__int64, int, ...);
__int64 opus_encoder_6c8a0(__int64 result, __int64, __int64, unsigned int,
                           unsigned int, int);
__int64 opus_encoder_6cc20(__int64 result, __int64, __int16, __int16, int, int,
                           int, __int16*, int);
__int64 opus_packet_pad_plt(_QWORD);
__int64 opus_silk_528e0(_DWORD*, _DWORD*, __int64, int, __int64, int*, int,
                        int);
__int64 opus_src_6c400(_DWORD*, __int64, int, unsigned int, __int64, int, int,
                       unsigned int, int);
__int64 silk_InitEncoder(__int64, int, _DWORD*);
__int64 silk_lin2log(unsigned int);
__int64 silk_log2lin(unsigned int);
extern float MovieData_a7d90[1447];
extern int MovieData_a78d0[10];
extern unsigned int MovieData_a2270[4];
__int64 opus_src_694e0(int* a1, __int64 a2, int a3, _BYTE* a4, int a5, int a6,
                       __int64 a7, int a8, unsigned int a9, unsigned int a10,
                       unsigned int a11, __int64 a12, int a13);
__int64* opus_src_73f80(__int64* result, __int64 a2, __int64 a3);

__int64 opus_src_694e0(int* a1, __int64 a2, int a3, _BYTE* a4, int a5, int a6,
                       __int64 a7, int a8, unsigned int a9, unsigned int a10,
                       unsigned int a11, __int64 a12, int a13)
{

#pragma clang fp contract(off)
  unsigned int v14;
  int v15;
  __int64 v20;
  int v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  int v28;
  int v29;
  __int64 v30;
  int v31;
  __int64 v32;
  __int64 v33;
  int v34;
  int v35;
  __int16* v36;
  __int64 v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  _BYTE* v46;
  __int16* v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  __int64 v55;
  __int64 v56;
  int v57;
  int v58;
  int v59;
  bool v60;
  unsigned __int64 v61;
  signed int v62;
  __int64 v63;
  __int64 v64;
  int v65;
  int v66;
  __int16 v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  unsigned int v85;
  int v86;
  int v87;
  unsigned int v88;
  int v89;
  char v90;
  int v91;
  int v92;
  unsigned int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  bool v101;
  int v102;
  int v103;
  bool v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  int v112;
  char v113;
  int v114;
  int v115;
  int v116;
  int v117;
  char* v118;
  int v119;
  unsigned int v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;
  int v126;
  char v127;
  char v129;
  char v130;
  char v131;
  char v132;
  char v133;
  char v134;
  char v135;
  int v136;
  unsigned int v137;
  int v138;
  int v139;
  int v140;
  int v141;
  unsigned int v142;
  int v143;
  int v144;
  char v145;
  __int16* v146;
  int v147;
  int v148;
  int v149;
  int v150;
  int v151;
  int v152;
  int v153;
  int v154;
  __int16* v155;
  int v156;
  int v157;
  unsigned int v158;
  unsigned int v159;
  unsigned int v160;
  bool v161;
  char v162;
  char v163;
  __int64 v164;
  __int64 v165;
  unsigned int v166;
  unsigned int v167;
  int v168;
  __int16* v169;
  __int64 v170;
  int v171;
  unsigned int v172;
  int v173;
  __int16* v174;
  __int64 v175;
  int v176;
  __int64 v177;
  int v178;
  int v179;
  int v180;
  int v181;
  __int16* v182;
  __int64 v183;
  int v184;
  int v185;
  int v186;
  int v187;
  int v188;
  int v189;
  int v190;
  int v191;
  __int16* v192;
  int v193;
  int v194;
  unsigned int v195;
  char v196;
  __int64 v197;
  __int64 v198;
  signed int v199;
  __int16* v200;
  __int64 v201;
  int v202;
  unsigned int v203;
  int v204;
  __int16* v205;
  int v206;
  char v207;
  char v208;
  int v209;
  int v210;
  int v211;
  int v212;
  int v213;
  char v214;
  int v215;
  int v216;
  char v218;
  _BOOL4 v219;
  int v220;
  int v221;
  int v222;
  __int64 v223;
  int v224;
  int v225;
  int v226;
  int v227;
  __int64 v228;
  int v229;
  int v230;
  int v231;
  int v232;
  int v233;
  __int64 v234;
  int v235;
  int v236;
  __int64 v237;
  unsigned __int64 v238;
  int v239;
  int v240;
  int v241;
  int v242;
  unsigned __int64 v243;
  int v244;
  int v245;
  int v246;
  int v247;
  signed int v248;
  int v249;
  int v251;
  int v252;
  int v253;
  int v254;
  _BOOL4 v255;
  int v256;
  int v257;
  unsigned __int64 v258;
  __int16* v259;
  int v260;
  unsigned int v261;
  int v262;
  __int16 v263;
  unsigned int v264;
  int v265;
  int v266;
  int v267;
  __int16 v268;
  unsigned int v269;
  __int64 v270;
  int v271;
  int v272;
  int v273;
  int v274;
  __int64 v275;
  int v276;
  int v277;
  unsigned int v278;
  int v279;
  int v280;
  int v281;
  __int64 v282;
  int v283;
  unsigned __int16* v284;
  unsigned __int16* v285;
  __int64 v286;
  int v287;
  __int64 v288;
  unsigned __int16* v289;
  unsigned __int16* v290;
  unsigned __int16* v291;
  __int16 v292;
  int v293;
  unsigned __int16 v294;
  __int16 v295;
  __int16 v296;
  __int16 v297;
  int v298;
  int v299;
  unsigned __int16 v300;
  __int16 v301;
  __int16 v302;
  int v303;
  int v304;
  unsigned __int16 v305;
  __int16 v306;
  __int16 v307;
  int v308;
  int v309;
  unsigned __int16 v310;
  __int16 v311;
  __int16 v312;
  int v313;
  int v314;
  unsigned __int16 v315;
  __int16 v316;
  signed __int16 v317;
  int v318;
  int v319;
  unsigned __int16 v320;
  __int16 v321;
  signed __int16 v322;
  int v323;
  int v324;
  unsigned int v325;
  unsigned __int16 v326;
  __int16 v327;
  unsigned __int16 v328;
  unsigned int v329;
  int v330;
  int v331;
  unsigned int v332;
  unsigned __int16 v333;
  __int16 v334;
  unsigned int v335;
  __int64 v336;
  unsigned __int16 v337;
  int v338;
  unsigned int v339;
  unsigned __int16 v340;
  __int16 v341;
  unsigned int v342;
  __int16 v343;
  unsigned int v344;
  int v345;
  int v346;
  int v347;
  int v348;
  unsigned int v349;
  int v350;
  bool v351;
  signed int v352;
  int v353;
  int v354;
  char v355;
  int v356;
  int v357;
  bool v358;
  int v359;
  int v360;
  unsigned __int64 v361;
  int v362;
  __int16* v363;
  int v364;
  __int64 v365;
  __int64 v366;
  _DWORD* v367;
  int v368;
  int v369;
  int v370;
  int v371;
  int v372;
  int v373;
  int v374;
  __int64 v375;
  __int64 v376;
  __int64 v377;
  int v378;
  __int64 v379;
  __int64 v380;
  int v381;
  unsigned __int64 v382;
  int v383;
  int v384;
  int v385;
  int v386;
  __int16 v387;
  __int64 v388;
  int v389;
  __int64 v390;
  __int64 v391;
  unsigned __int64 v392;
  __int16* v393;
  int v394;
  _BOOL4 v395;
  unsigned int v396;
  int v397;
  int v398;
  __int16 v399;
  __int16 v400;
  int v401;
  int v402;
  int v403;
  int v404;
  int v405;
  unsigned int v406;
  char v407;
  unsigned int v408;
  int v409;
  signed int v410;
  __int64 v411;
  int v412;
  int v413;
  __int64 v414;
  int v415;
  __int64 v416;
  __int64 v417;
  __int64 v418;
  signed int v419;
  char v420;
  int v421;
  int v422;
  __int64 v423;
  int v424;
  int v425;
  __int64 v426;
  __int16* v427;
  __int64 v428;
  __int16* v429;
  char v430;
  unsigned int v431;
  int v432;
  int v433;
  int v434;
  int v435;
  int v436;
  int v437;
  char v438;
  int v439;
  struct {
    int v441;
    int v442;
    int v443;
    int v444;
    _BYTE* v445;
    _BYTE* v446;
    int* v447;
    char gap72_[4];
    int v448;
    int v449;
    int v450;
    _BOOL4 v451;
    int v452;
    _BYTE* v453;
    int v454;
    int v455;
    _DWORD* v456;
    __int16* v457;
    int v458;
    int v459;
    int* v460;
    __int64 v461;
    __int64 v462;
  } v441_;
  struct {
    _QWORD v463[12];
    int v464;
  } v463_;
  struct {
    _QWORD v465[4];
    __int64 v466;
    __int64 v467;
    __int64 v468;
    __int64 v469;
    __int64 v470;
    _BYTE v471[4];
    int v472;
    __int64 v473[2];
    __int64 v474;
    __int64 v475;
    __int64 v476;
    __int64 v477;
    __int64 v478;
    char gap400_[4];
    int v479;
  } v465_;

  v14 = -1;
  v465_.v472 = 0;
  a1[4054] = 0;
  if (a5 >= 1276) {
    v15 = 1276;
  }
  else {
    v15 = a5;
  }
  if (a3 < 1 || a5 < 1) {
    return v14;
  }
  if (a5 == 1 && a1[36] == 10 * a3) {
    return (unsigned int)-2;
  }
  {
    v20 = *a1;
    __asm__ volatile("" ::"r"(v20));
  }
  if (a1[27] == 2051) {
    v441_.v458 = 0;
  }
  else {
    v441_.v458 = a1[29];
  }
  {
    v23 = a1[42];
    __asm__ volatile("" ::"r"(v23));
  }
  {
    v24 = a1[1];
    __asm__ volatile("" ::"r"(v24));
  }
  v25 = (__int64)a1 + v20;
  v465_.v479 = 0;
  v465_.v473[0] = 0;
  v465_.v473[1] = 0;
  v465_.v474 = 0;
  v465_.v475 = 0;
  v465_.v476 = 0;
  v465_.v477 = 0;
  v465_.v478 = 0;
  v465_.v469 = 0;
  v465_.v470 = 0;
  memset(v465_.v465, 0, sizeof(v465_.v465));
  v465_.v466 = 0;
  v465_.v467 = 0;
  v465_.v468 = 0;
  if (a6 >= v23) {
    v26 = v23;
  }
  else {
    v26 = a6;
  }
  v441_.v461 = v20;
  opus_custom_encoder_ctl(v25, 10015, &v465_.v470);
  {
    v27 = a1[11];
    __asm__ volatile("" ::"r"(v27));
  }
  LODWORD(v465_.v465[0]) = 0;
  v441_.v462 = a2;
  if (v27 < 10 || (v28 = a1[36]) < 16000) {
    if (a1[1912] != 0) {
      opus_6fad0((__int64)(a1 + 47));
    }
    v51 = -1;
    v441_.v459 = -1;
  LABEL_65:
    v52 = 0;
    a1[35] = -1;
    {
      v53 = v465_.v465[0];
      __asm__ volatile("" ::"r"(v53));
    }
    a1[4050] = 0;
    if (v53 == 0) {
      goto LABEL_96;
    }
    goto LABEL_66;
  }
  {
    v29 = a1[28] * a3;
    __asm__ volatile("" ::"r"(v29));
  }
  if (v29 < 1) {
    v46 = a4;
    v50 = 0;
    v34 = 0;
    v31 = a8;
    v32 = a7;
  }
  else {
    v30 = v29 & 7;
    v31 = a8;
    v32 = a7;
    v33 = 0;
    LOWORD(v34) = 0;
    LOWORD(v35) = 0;
    if ((unsigned int)v29 >= 8) {
      v36 = (__int16*)(a2 + 8);
      v37 = -(__int64)(v29 & 0x7FFFFFF8);
      do {
        {
          v38 = *(v36 - 4);
          __asm__ volatile("" ::"r"(v38));
        }
        v35 = (__int16)v35;
        v34 = (__int16)v34;
        v33 -= 8;
        if ((__int16)v35 <= v38) {
          v35 = *(v36 - 4);
          __asm__ volatile("" ::"r"(v35));
        }
        if ((__int16)v34 >= v38) {
          v34 = *(v36 - 4);
          __asm__ volatile("" ::"r"(v34));
        }
        {
          v39 = *(v36 - 3);
          __asm__ volatile("" ::"r"(v39));
        }
        if (v35 <= v39) {
          v35 = *(v36 - 3);
          __asm__ volatile("" ::"r"(v35));
        }
        if (v34 >= v39) {
          v34 = *(v36 - 3);
          __asm__ volatile("" ::"r"(v34));
        }
        {
          v40 = *(v36 - 2);
          __asm__ volatile("" ::"r"(v40));
        }
        if (v35 <= v40) {
          v35 = *(v36 - 2);
          __asm__ volatile("" ::"r"(v35));
        }
        if (v34 >= v40) {
          v34 = *(v36 - 2);
          __asm__ volatile("" ::"r"(v34));
        }
        {
          v41 = *(v36 - 1);
          __asm__ volatile("" ::"r"(v41));
        }
        if (v35 <= v41) {
          v35 = *(v36 - 1);
          __asm__ volatile("" ::"r"(v35));
        }
        if (v34 >= v41) {
          v34 = *(v36 - 1);
          __asm__ volatile("" ::"r"(v34));
        }
        {
          v42 = *v36;
          __asm__ volatile("" ::"r"(v42));
        }
        if (v35 <= v42) {
          v35 = *v36;
          __asm__ volatile("" ::"r"(v35));
        }
        if (v34 >= v42) {
          v34 = *v36;
          __asm__ volatile("" ::"r"(v34));
        }
        {
          v43 = v36[1];
          __asm__ volatile("" ::"r"(v43));
        }
        if (v35 <= v43) {
          v35 = v36[1];
          __asm__ volatile("" ::"r"(v35));
        }
        if (v34 >= v43) {
          v34 = v36[1];
          __asm__ volatile("" ::"r"(v34));
        }
        {
          v44 = v36[2];
          __asm__ volatile("" ::"r"(v44));
        }
        if (v35 <= v44) {
          v35 = v36[2];
          __asm__ volatile("" ::"r"(v35));
        }
        if (v34 >= v44) {
          v34 = v36[2];
          __asm__ volatile("" ::"r"(v34));
        }
        {
          v45 = v36[3];
          __asm__ volatile("" ::"r"(v45));
        }
        v36 += 8;
        if (v35 <= v45) {
          LOWORD(v35) = v45;
        }
        if (v34 >= v45) {
          LOWORD(v34) = v45;
        }
      } while (v37 != v33);
      v33 = -v33;
    }
    v46 = a4;
    if (v30 != 0) {
      v47 = (__int16*)(v441_.v462 + 2 * v33);
      do {
        {
          v49 = *v47++;
          __asm__ volatile("" ::"r"(v49));
        }
        v48 = v49;
        if ((__int16)v35 <= v49) {
          LOWORD(v35) = v48;
        }
        if ((__int16)v34 >= v48) {
          LOWORD(v34) = v48;
        }
        --v30;
      } while (v30 != 0);
    }
    v50 = (unsigned __int16)v35;
    v34 = (__int16)v34;
  }
  {
    v51 = a1[1910];
    __asm__ volatile("" ::"r"(v51));
  }
  {
    v58 = a1[1909];
    __asm__ volatile("" ::"r"(v58));
  }
  if ((v50 + v34 < 0) ^ __OFADD__(v50, v34) | (v50 + v34 == 0)) {
    v59 = -v34;
  }
  else {
    v59 = v50;
  }
  opus_70140(a1 + 47, v465_.v470, v32, v31, a3, a9, a10, a11, v28, v26, a12,
             (__int64)v465_.v465);
  v441_.v459 = v58;
  {
    v60 = v59 == 0 || *((float*)&v465_.v466 + 1) <= 0x1.99999a0000000p-4f;
    __asm__ volatile("" ::"r"(v60));
  }
  if (!v60) {
    {
      v61 = (unsigned __int64)(32735LL * a1[4052]) >> 15;
      __asm__ volatile("" ::"r"(v61));
    }
    {
      v62 = a1[28] * a3;
      __asm__ volatile("" ::"r"(v62));
    }
    if (v62 < 1) {
      a4 = v46;
      v137 = 0;
      v65 = 0;
      a2 = v441_.v462;
    }
    else {
      v63 = v62 & 7;
      a4 = v46;
      v64 = 0;
      LOWORD(v65) = 0;
      LOWORD(v66) = 0;
      if ((unsigned int)v62 >= 8) {
        a2 = v441_.v462;
        v146 = (__int16*)(v441_.v462 + 8);
        do {
          {
            v147 = *(v146 - 4);
            __asm__ volatile("" ::"r"(v147));
          }
          v66 = (__int16)v66;
          v65 = (__int16)v65;
          v64 -= 8;
          if ((__int16)v66 <= v147) {
            v66 = *(v146 - 4);
            __asm__ volatile("" ::"r"(v66));
          }
          if ((__int16)v65 >= v147) {
            v65 = *(v146 - 4);
            __asm__ volatile("" ::"r"(v65));
          }
          {
            v148 = *(v146 - 3);
            __asm__ volatile("" ::"r"(v148));
          }
          if (v66 <= v148) {
            v66 = *(v146 - 3);
            __asm__ volatile("" ::"r"(v66));
          }
          if (v65 >= v148) {
            v65 = *(v146 - 3);
            __asm__ volatile("" ::"r"(v65));
          }
          {
            v149 = *(v146 - 2);
            __asm__ volatile("" ::"r"(v149));
          }
          if (v66 <= v149) {
            v66 = *(v146 - 2);
            __asm__ volatile("" ::"r"(v66));
          }
          if (v65 >= v149) {
            v65 = *(v146 - 2);
            __asm__ volatile("" ::"r"(v65));
          }
          {
            v150 = *(v146 - 1);
            __asm__ volatile("" ::"r"(v150));
          }
          if (v66 <= v150) {
            v66 = *(v146 - 1);
            __asm__ volatile("" ::"r"(v66));
          }
          if (v65 >= v150) {
            v65 = *(v146 - 1);
            __asm__ volatile("" ::"r"(v65));
          }
          {
            v151 = *v146;
            __asm__ volatile("" ::"r"(v151));
          }
          if (v66 <= v151) {
            v66 = *v146;
            __asm__ volatile("" ::"r"(v66));
          }
          if (v65 >= v151) {
            v65 = *v146;
            __asm__ volatile("" ::"r"(v65));
          }
          {
            v152 = v146[1];
            __asm__ volatile("" ::"r"(v152));
          }
          if (v66 <= v152) {
            v66 = v146[1];
            __asm__ volatile("" ::"r"(v66));
          }
          if (v65 >= v152) {
            v65 = v146[1];
            __asm__ volatile("" ::"r"(v65));
          }
          {
            v153 = v146[2];
            __asm__ volatile("" ::"r"(v153));
          }
          if (v66 <= v153) {
            v66 = v146[2];
            __asm__ volatile("" ::"r"(v66));
          }
          if (v65 >= v153) {
            v65 = v146[2];
            __asm__ volatile("" ::"r"(v65));
          }
          {
            v154 = v146[3];
            __asm__ volatile("" ::"r"(v154));
          }
          v146 += 8;
          if (v66 <= v154) {
            LOWORD(v66) = v154;
          }
          if (v65 >= v154) {
            LOWORD(v65) = v154;
          }
        } while (-(__int64)(v62 & 0x7FFFFFF8) != v64);
        v64 = -v64;
      }
      else {
        a2 = v441_.v462;
      }
      if ((v62 & 7) != 0) {
        v155 = (__int16*)(a2 + 2 * v64);
        do {
          {
            v157 = *v155++;
            __asm__ volatile("" ::"r"(v157));
          }
          v156 = v157;
          if ((__int16)v66 <= v157) {
            LOWORD(v66) = v156;
          }
          if ((__int16)v65 >= v156) {
            LOWORD(v65) = v156;
          }
          --v63;
        } while (v63 != 0);
      }
      v137 = (unsigned __int16)v66;
      v65 = (__int16)v65;
    }
    if (((int)(v137 + v65) < 0) ^ __OFADD__(v137, v65) | (v137 + v65 == 0)) {
      v158 = -v65;
    }
    else {
      v158 = v137;
    }
    v159 = __clz((unsigned int)(v62));
    v160 = v159 + 2 * __clz((unsigned int)(v158));
    v161 = v160 <= 0x41;
    v162 = 65 - v160;
    if (v161) {
      v163 = v162;
    }
    else {
      v163 = 0;
    }
    if (v62 < 1) {
      if ((int)v61 > 0) {
      LABEL_441:
        a1[4052] = v61;
        goto LABEL_65;
      }
      v167 = 0;
      v168 = 0;
    }
    else {
      v164 = v62 & 7;
      if ((unsigned int)v62 >= 8) {
        v169 = (__int16*)(a2 + 8);
        v170 = 0;
        v166 = 0;
        do {
          v170 -= 8;
          {
            v171 = v169[3];
            __asm__ volatile("" ::"r"(v171));
          }
          v172 = ((unsigned int)(v169[1] * v169[1]) >> v163) +
                 ((unsigned int)(*v169 * *v169) >> v163) +
                 ((unsigned int)(*(v169 - 1) * *(v169 - 1)) >> v163) +
                 ((unsigned int)(*(v169 - 2) * *(v169 - 2)) >> v163) +
                 ((unsigned int)(*(v169 - 3) * *(v169 - 3)) >> v163) +
                 ((unsigned int)(*(v169 - 4) * *(v169 - 4)) >> v163) + v166;
          {
            v173 = v169[2];
            __asm__ volatile("" ::"r"(v173));
          }
          v169 += 8;
          v166 = ((unsigned int)(v171 * v171) >> v163) +
                 ((unsigned int)(v173 * v173) >> v163) + v172;
        } while (-(__int64)(v62 & 0x7FFFFFF8) != v170);
        v165 = -v170;
      }
      else {
        v165 = 0;
        v166 = 0;
      }
      if ((v62 & 7) != 0) {
        v174 = (__int16*)(a2 + 2 * v165);
        v175 = v62 & 7;
        do {
          {
            v176 = *v174++;
            __asm__ volatile("" ::"r"(v176));
          }
          --v175;
          v166 += (unsigned int)(v176 * v176) >> v163;
        } while (v175 != 0);
      }
      if ((int)((v166 / v62) << v163) < (int)v61) {
        goto LABEL_441;
      }
      if ((unsigned int)v62 >= 8) {
        v182 = (__int16*)(a2 + 8);
        v183 = 0;
        LOWORD(v178) = 0;
        LOWORD(v179) = 0;
        do {
          {
            v184 = *(v182 - 4);
            __asm__ volatile("" ::"r"(v184));
          }
          v179 = (__int16)v179;
          v178 = (__int16)v178;
          v183 -= 8;
          if ((__int16)v179 <= v184) {
            v179 = *(v182 - 4);
            __asm__ volatile("" ::"r"(v179));
          }
          if ((__int16)v178 >= v184) {
            v178 = *(v182 - 4);
            __asm__ volatile("" ::"r"(v178));
          }
          {
            v185 = *(v182 - 3);
            __asm__ volatile("" ::"r"(v185));
          }
          if (v179 <= v185) {
            v179 = *(v182 - 3);
            __asm__ volatile("" ::"r"(v179));
          }
          if (v178 >= v185) {
            v178 = *(v182 - 3);
            __asm__ volatile("" ::"r"(v178));
          }
          {
            v186 = *(v182 - 2);
            __asm__ volatile("" ::"r"(v186));
          }
          if (v179 <= v186) {
            v179 = *(v182 - 2);
            __asm__ volatile("" ::"r"(v179));
          }
          if (v178 >= v186) {
            v178 = *(v182 - 2);
            __asm__ volatile("" ::"r"(v178));
          }
          {
            v187 = *(v182 - 1);
            __asm__ volatile("" ::"r"(v187));
          }
          if (v179 <= v187) {
            v179 = *(v182 - 1);
            __asm__ volatile("" ::"r"(v179));
          }
          if (v178 >= v187) {
            v178 = *(v182 - 1);
            __asm__ volatile("" ::"r"(v178));
          }
          {
            v188 = *v182;
            __asm__ volatile("" ::"r"(v188));
          }
          if (v179 <= v188) {
            v179 = *v182;
            __asm__ volatile("" ::"r"(v179));
          }
          if (v178 >= v188) {
            v178 = *v182;
            __asm__ volatile("" ::"r"(v178));
          }
          {
            v189 = v182[1];
            __asm__ volatile("" ::"r"(v189));
          }
          if (v179 <= v189) {
            v179 = v182[1];
            __asm__ volatile("" ::"r"(v179));
          }
          if (v178 >= v189) {
            v178 = v182[1];
            __asm__ volatile("" ::"r"(v178));
          }
          {
            v190 = v182[2];
            __asm__ volatile("" ::"r"(v190));
          }
          if (v179 <= v190) {
            v179 = v182[2];
            __asm__ volatile("" ::"r"(v179));
          }
          if (v178 >= v190) {
            v178 = v182[2];
            __asm__ volatile("" ::"r"(v178));
          }
          {
            v191 = v182[3];
            __asm__ volatile("" ::"r"(v191));
          }
          v182 += 8;
          if (v179 <= v191) {
            LOWORD(v179) = v191;
          }
          if (v178 >= v191) {
            LOWORD(v178) = v191;
          }
        } while (-(__int64)(v62 & 0x7FFFFFF8) != v183);
        v177 = -v183;
      }
      else {
        v177 = 0;
        LOWORD(v178) = 0;
        LOWORD(v179) = 0;
      }
      if ((v62 & 7) != 0) {
        v192 = (__int16*)(a2 + 2 * v177);
        do {
          {
            v194 = *v192++;
            __asm__ volatile("" ::"r"(v194));
          }
          v193 = v194;
          if ((__int16)v179 <= v194) {
            LOWORD(v179) = v193;
          }
          if ((__int16)v178 >= v193) {
            LOWORD(v178) = v193;
          }
          --v164;
        } while (v164 != 0);
      }
      v167 = (unsigned __int16)v179;
      v168 = (__int16)v178;
    }
    if (((int)(v167 + v168) < 0) ^ __OFADD__(v167, v168) | (v167 + v168 == 0)) {
      v167 = -v168;
    }
    v195 = v159 + 2 * __clz((unsigned int)(v167));
    v161 = v195 <= 0x41;
    v196 = 65 - v195;
    if (!v161) {
      v196 = 0;
    }
    if (v62 < 1) {
      v199 = 0;
    }
    else {
      v197 = v62 & 7;
      if ((unsigned int)v62 >= 8) {
        v200 = (__int16*)(a2 + 8);
        v201 = 0;
        v199 = 0;
        do {
          v201 -= 8;
          {
            v202 = v200[3];
            __asm__ volatile("" ::"r"(v202));
          }
          v203 = ((unsigned int)(v200[1] * v200[1]) >> v196) +
                 ((unsigned int)(*v200 * *v200) >> v196) +
                 ((unsigned int)(*(v200 - 1) * *(v200 - 1)) >> v196) +
                 ((unsigned int)(*(v200 - 2) * *(v200 - 2)) >> v196) +
                 ((unsigned int)(*(v200 - 3) * *(v200 - 3)) >> v196) +
                 ((unsigned int)(*(v200 - 4) * *(v200 - 4)) >> v196) + v199;
          {
            v204 = v200[2];
            __asm__ volatile("" ::"r"(v204));
          }
          v200 += 8;
          v199 = ((unsigned int)(v202 * v202) >> v196) +
                 ((unsigned int)(v204 * v204) >> v196) + v203;
        } while (-(__int64)(v62 & 0x7FFFFFF8) != v201);
        v198 = -v201;
      }
      else {
        v198 = 0;
        v199 = 0;
      }
      if ((v62 & 7) != 0) {
        v205 = (__int16*)(a2 + 2 * v198);
        do {
          {
            v206 = *v205++;
            __asm__ volatile("" ::"r"(v206));
          }
          --v197;
          v199 += (unsigned int)(v206 * v206) >> v196;
        } while (v197 != 0);
      }
    }
    LODWORD(v61) = (v199 / v62) << v196;
    goto LABEL_441;
  }
  if (v59 != 0) {
    a4 = v46;
    a2 = v441_.v462;
    goto LABEL_65;
  }
  a4 = v46;
  v52 = 1;
  a2 = v441_.v462;
  {
    v136 = v465_.v465[0];
    __asm__ volatile("" ::"r"(v136));
  }
  a1[4050] = 0;
  if (v136 == 0) {
    goto LABEL_96;
  }
LABEL_66:
  if (a1[31] == -1000) {
    {
      v54 = a1[3557];
      __asm__ volatile("" ::"r"(v54));
    }
    v55 = 24;
    if (v54 == 1002) {
      v55 = 28;
    }
    v101 = v54 == 0;
    v56 = 20;
    if (!v101) {
      v56 = v55;
    }
    a1[35] =
        vcvtmd_s32_f64((float)((float)(0x1.0000000000000p+0f -
                                       *(float*)((char*)v465_.v465 + v56)) *
                               0x1.9000000000000p+6f) +
                       0x1.0000000000000p-1);
  }
  if ((int)v465_.v466 >= 13) {
    if ((unsigned int)v465_.v466 >= 0xF) {
      if ((unsigned int)v465_.v466 >= 0x11) {
        if ((unsigned int)v465_.v466 < 0x13) {
          v57 = 1104;
        }
        else {
          v57 = 1105;
        }
      }
      else {
        v57 = 1103;
      }
    }
    else {
      v57 = 1102;
    }
  }
  else {
    v57 = 1101;
  }
  a1[4050] = v57;
LABEL_96:
  if (a1[28] != 2 || a1[30] == 1) {
    v67 = 0;
    {
      v68 = a1[41];
      __asm__ volatile("" ::"r"(v68));
    }
    if (v68 != -1000) {
      goto LABEL_99;
    }
  LABEL_144:
    {
      v70 = a1[36];
      __asm__ volatile("" ::"r"(v70));
    }
    {
      v69 = a1[37];
      __asm__ volatile("" ::"r"(v69));
    }
    {
      v68 = 60 * v70 / a3 + a1[28] * v70;
      __asm__ volatile("" ::"r"(v68));
    }
    a1[40] = v68;
    if (v69 != 0) {
      goto LABEL_108;
    }
    goto LABEL_101;
  }
  v67 = compute_stereo_width(a2, a3, a1[36], (__int64)(a1 + 3566));
  {
    v68 = a1[41];
    __asm__ volatile("" ::"r"(v68));
  }
  if (v68 == -1000) {
    goto LABEL_144;
  }
LABEL_99:
  if (v68 == -1) {
    {
      v70 = a1[36];
      __asm__ volatile("" ::"r"(v70));
    }
    {
      v69 = a1[37];
      __asm__ volatile("" ::"r"(v69));
    }
    v68 = 8 * v15 * v70 / a3;
    a1[40] = v68;
    if (v69 != 0) {
      goto LABEL_108;
    }
  }
  else {
    {
      v70 = a1[36];
      __asm__ volatile("" ::"r"(v70));
    }
    {
      v69 = a1[37];
      __asm__ volatile("" ::"r"(v69));
    }
    a1[40] = v68;
    if (v69 != 0) {
      goto LABEL_108;
    }
  }
LABEL_101:
  v71 = 12 * v70 / a3;
  v72 = (v71 / 2 + 12 * v68 / 8) / v71;
  if (v72 >= v15) {
    v73 = v15;
  }
  else {
    v73 = v72;
  }
  v74 = v71 * v73;
  if (v73 <= 1) {
    v15 = 1;
  }
  else {
    v15 = v73;
  }
  v68 = 8 * v74 / 12;
  a1[40] = v68;
LABEL_108:
  v75 = v70 / a3;
  if (v15 < 3 || v68 < 24 * v75) {
    goto LABEL_115;
  }
  v76 = v15 * v75;
  if (v75 <= 49) {
    if (v76 >= 300 && v68 >= 2400) {
      {
        v77 = a1[28];
        __asm__ volatile("" ::"r"(v77));
      }
      {
        v78 = a1[10];
        __asm__ volatile("" ::"r"(v78));
      }
      {
        v79 = a1[11];
        __asm__ volatile("" ::"r"(v79));
      }
      v80 = 0;
      v81 = v68;
      if (v69 != 0) {
        goto LABEL_151;
      }
      goto LABEL_150;
    }
  LABEL_115:
    {
      v82 = a1[3556];
      __asm__ volatile("" ::"r"(v82));
    }
    if (a1[3560] != 0) {
      v83 = a1[3560];
      __asm__ volatile("" ::"r"(v83));
    }
    else {
      v83 = 1101;
    }
    if (v82 == 0) {
      v82 = 1000;
    }
    if (v75 <= 100) {
      v84 = v82;
    }
    else {
      v84 = 1002;
    }
    v85 = v75 == 25 && v84 != 1000;
    if (v75 == 25 && v84 != 1000) {
      v86 = 50;
    }
    else {
      v86 = v70 / a3;
    }
    if (v86 > 16) {
      LOBYTE(v87) = 0;
      v88 = v86;
      if (v83 < 1104) {
        goto LABEL_247;
      }
    }
    else if (a5 == 1 || v84 == 1000 && v86 != 10) {
      LOBYTE(v87) = 0;
      v85 = v86 < 13;
      if (v86 == 12) {
        v88 = 25;
      }
      else {
        v88 = 16;
      }
      v84 = 1000;
      if (v83 < 1104) {
        goto LABEL_247;
      }
    }
    else {
      v88 = 50;
      v85 = 3;
      v87 = 50 / v86;
      if (v83 < 1104) {
        goto LABEL_247;
      }
    }
    if (v84 == 1000) {
      v83 = 1103;
      {
        v89 = a1[3548];
        __asm__ volatile("" ::"r"(v89));
      }
      if (v88 > 0x18F) {
      LABEL_257:
        v90 = 0;
      LABEL_258:
        if (v83 <= 1102) {
          v129 = 78;
        }
        else {
          v129 = v83;
        }
        v130 = v90 | (32 * (v129 & 3)) ^ 0xC0;
        v131 = v90 - 16;
        v132 = v131 | (16 * v83) | 0x60;
        v133 = v131 | (32 * v83 + 96);
        if (v84 != 1000) {
          v133 = v132;
        }
        if (v84 == 1002) {
          v134 = v130;
        }
        else {
          v134 = v133;
        }
        if (v89 == 2) {
          v135 = 4;
        }
        else {
          v135 = 0;
        }
        *a4 = v135 | v85 | v134;
        if (v85 < 2) {
          v14 = 1;
        }
        else {
          v14 = 2;
        }
        if (v15 <= (int)v14) {
          v15 = v14;
        }
        if (v85 == 3) {
          a4[1] = v87;
        }
        if (a1[37] == 0) {
          goto LABEL_277;
        }
        return v14;
      }
    LABEL_140:
      v90 = 0;
      do {
        v88 *= 2;
        v90 += 8;
      } while ((int)v88 < 400);
      goto LABEL_258;
    }
  LABEL_247:
    if (v83 == 1102 && v84 == 1002) {
      v83 = 1101;
      {
        v89 = a1[3548];
        __asm__ volatile("" ::"r"(v89));
      }
      if (v88 > 0x18F) {
        goto LABEL_257;
      }
    }
    else {
      if (v84 == 1001 && v83 < 1105) {
        v83 = 1104;
      }
      {
        v89 = a1[3548];
        __asm__ volatile("" ::"r"(v89));
      }
      if (v88 > 0x18F) {
        goto LABEL_257;
      }
    }
    goto LABEL_140;
  }
  {
    v77 = a1[28];
    __asm__ volatile("" ::"r"(v77));
  }
  {
    v78 = a1[10];
    __asm__ volatile("" ::"r"(v78));
  }
  {
    v79 = a1[11];
    __asm__ volatile("" ::"r"(v79));
  }
  if (v75 == 50) {
    v80 = 0;
    v81 = v68;
    if (v69 != 0) {
      goto LABEL_151;
    }
  }
  else {
    v80 = 1;
    v81 = v68 + (-40 * v77 - 20) * (v75 - 50);
    if (v69 != 0) {
      goto LABEL_151;
    }
  }
LABEL_150:
  v81 += v81 / -12;
LABEL_151:
  {
    v91 = a1[31];
    __asm__ volatile("" ::"r"(v91));
  }
  LODWORD(v441_.v457) = v26;
  v92 = v51;
  if (v91 == 3001) {
    v93 = 127;
    v94 = 12 * v78 + 20;
    {
      v95 = a1[30];
      __asm__ volatile("" ::"r"(v95));
    }
    v96 = v79 + 90;
    if (v95 != -1000) {
      goto LABEL_162;
    }
    goto LABEL_154;
  }
  if (v91 != 3002) {
    {
      v119 = a1[35];
      __asm__ volatile("" ::"r"(v119));
    }
    if (v119 < 0) {
      if (a1[27] == 2048) {
        v93 = 115;
      }
      else {
        v93 = 48;
      }
      v94 = 12 * v78 + 20;
      {
        v95 = a1[30];
        __asm__ volatile("" ::"r"(v95));
      }
      v96 = v79 + 90;
      if (v95 != -1000) {
        goto LABEL_162;
      }
    }
    else {
      v120 = (unsigned int)(327 * v119) >> 8;
      if (v120 >= 0x73) {
        v121 = 115;
      }
      else {
        v121 = v120;
      }
      if (a1[27] == 2049) {
        v93 = v121;
      }
      else {
        v93 = v120;
      }
      v94 = 12 * v78 + 20;
      {
        v95 = a1[30];
        __asm__ volatile("" ::"r"(v95));
      }
      v96 = v79 + 90;
      if (v95 != -1000) {
        goto LABEL_162;
      }
    }
  LABEL_154:
    if (v77 == 2) {
      v97 = v81 * v96 / 100 - v81 * v96 / 100 * v78 / v94;
      if (a1[3548] == 2) {
        v98 = 16000;
      }
      else {
        v98 = 18000;
      }
      if (v97 <= (int)(v98 + ((2000 * v93 * v93) >> 14))) {
        v77 = 1;
      }
      else {
        v77 = 2;
      }
    }
    goto LABEL_164;
  }
  v93 = 0;
  v94 = 12 * v78 + 20;
  {
    v95 = a1[30];
    __asm__ volatile("" ::"r"(v95));
  }
  v96 = v79 + 90;
  if (v95 == -1000) {
    goto LABEL_154;
  }
LABEL_162:
  if (v77 == 2) {
    a1[3548] = v95;
    v77 = v95;
    goto LABEL_165;
  }
LABEL_164:
  a1[3548] = v77;
LABEL_165:
  v99 = v68;
  if (v80 != 0) {
    v99 = v68 + (-40 * v77 - 20) * (v75 - 50);
  }
  if (v69 == 0) {
    v99 += v99 / -12;
  }
  {
    v100 = a1[27];
    __asm__ volatile("" ::"r"(v100));
  }
  {
    v101 = a1[46] != 0 && (LODWORD(v465_.v465[0]) | v52) == 0;
    __asm__ volatile("" ::"r"(v101));
  }
  v102 = v101;
  a1[14] = v102;
  if (v100 != 2051) {
    {
      v103 = a1[34];
      __asm__ volatile("" ::"r"(v103));
    }
    if (v103 == -1000) {
      v105 = v99 * v96 / 100 - v99 * v96 / 100 * v78 / v94;
      v106 = ((unsigned __int64)(64000LL * (v67 ^ 0x7FFF)) >> 15) +
             ((unsigned __int64)(44000LL * v67) >> 15);
      v107 = ((unsigned __int64)(10000LL * (v67 ^ 0x7FFF)) >> 15) +
             ((unsigned __int64)(10000LL * v67) >> 15);
      v108 = v107 + ((int)(v93 * v93 * (v106 - v107)) >> 14);
      if (v100 == 2048) {
        v109 = v108 + 8000;
      }
      else {
        v109 = v108;
      }
      {
        v110 = a1[3557];
        __asm__ volatile("" ::"r"(v110));
      }
      v111 = v109 - 4000;
      if (v110 > 0) {
        v109 += 4000;
      }
      if (v110 == 1002) {
        v109 = v111;
      }
      if (v105 >= v109) {
        v103 = 1002;
      }
      else {
        v103 = 1000;
      }
      {
        v112 = a1[12];
        __asm__ volatile("" ::"r"(v112));
      }
      a1[3556] = v103;
      if (v112 != 0 && v78 > (int)(128 - v93) >> 4) {
        v103 = 1000;
        a1[3556] = 1000;
      }
      if (v93 > 0x64) {
        v113 = v102;
      }
      else {
        v113 = 0;
      }
      if (v80 != 0) {
        v114 = 9000;
      }
      else {
        v114 = 6000;
      }
      v115 = v114 * a3 / (8 * v70);
      if ((v113 & 1) == 0 && v15 >= v115) {
        goto LABEL_203;
      }
      if (v15 >= v115) {
        v103 = 1000;
      }
      else {
        v103 = 1002;
      }
    }
    a1[3556] = v103;
  LABEL_203:
    v441_.v460 = a1 + 3556;
    v116 = v70 / 100;
    v104 = a3 < v116;
    if (v103 != 1002 && a3 < v116) {
      v103 = 1002;
      *v441_.v460 = 1002;
    }
    goto LABEL_206;
  }
  v441_.v460 = a1 + 3556;
  v103 = 1002;
  a1[3556] = 1002;
  v104 = a3 < v70 / 100;
LABEL_206:
  if (a1[44] != 0) {
    v103 = 1002;
    *v441_.v460 = 1002;
  }
  {
    v117 = a1[3557];
    __asm__ volatile("" ::"r"(v117));
  }
  if (v117 >= 1) {
    if (v117 == 1002 && v103 != 1002) {
      v441_.v455 = 0;
      v441_.v451 = true;
      v441_.v454 = 1;
      v118 = v465_.v471;
    LABEL_225:
      *((_DWORD*)v118 - 64) = 1;
      goto LABEL_226;
    }
    if (v103 == 1002) {
      if (v117 != 1002 && !v104) {
        v118 = (char*)&v465_.v474 + 4;
        v441_.v454 = 0;
        v441_.v449 = 0;
        *v441_.v460 = v117;
        v441_.v451 = true;
        v103 = v117;
        goto LABEL_225;
      }
      v441_.v451 = false;
      v441_.v454 = 0;
      v441_.v455 = 0;
      v441_.v449 = 1;
      v103 = 1002;
    LABEL_226:
      if (v77 != 1 || a1[3558] != 2 || a1[17] != 0 || v117 == 1002 ||
          v103 == 1002) {
        a1[17] = 0;
        v122 = -40 * v77 - 20;
      }
      else {
        a1[17] = 1;
        a1[3548] = 2;
        v122 = -100;
      }
      v441_.v456 = (int*)((char*)a1 + v24);
      v123 = v122 * (v75 - 50);
      if (v80 == 0) {
        v123 = 0;
      }
      v124 = v68 + v123;
      if (v69 == 0) {
        v124 += v124 / -12;
      }
      v125 = v124 * v96 / 100;
      v441_.v452 = v15 * v75;
      v441_.v448 = v80;
      if ((v103 & 0xFFFFFFFE) == 0x3E8) {
        if (v79 <= 1) {
          v125 = 4 * v125 / 5;
        }
        v125 -= v125 * v78 / (6 * v78 + 10);
        if (v117 == 1002) {
        LABEL_238:
          {
            v126 = a1[45];
            __asm__ volatile("" ::"r"(v126));
          }
          v463_.v464 = 0;
          memset(v463_.v463, 0, sizeof(v463_.v463));
          silk_InitEncoder((__int64)v441_.v456, v126, v463_.v463);
          {
            v103 = a1[3556];
            __asm__ volatile("" ::"r"(v103));
          }
          LODWORD(v441_.v453) = 1;
          if (v103 == 1002) {
            v127 = 1;
            v76 = v441_.v452;
            goto LABEL_287;
          }
          v76 = v441_.v452;
          if (a1[3563] != 0) {
            goto LABEL_282;
          }
          goto LABEL_281;
        }
      LABEL_244:
        LODWORD(v441_.v453) = 0;
        if (a1[3563] != 0) {
        LABEL_282:
          v127 = 0;
          goto LABEL_287;
        }
      LABEL_281:
        if (a1[21] == 0) {
          {
            v143 = a1[3560];
            __asm__ volatile("" ::"r"(v143));
          }
          v141 = v92;
          v127 = 0;
          v142 = (unsigned int)v441_.v457;
          goto LABEL_456;
        }
        goto LABEL_282;
      }
      if (v103 != 1002) {
        v125 -= v125 * v78 / v94;
        if (v117 == 1002) {
          goto LABEL_238;
        }
        goto LABEL_244;
      }
      LODWORD(v441_.v453) = 0;
      if (v79 <= 4) {
        v125 = 9 * v125 / 10;
      }
      v103 = 1002;
      v127 = 1;
    LABEL_287:
      v138 = ((int)(2500 * v93 * v93) >> 14) + 11000;
      v139 = ((int)(2000 * v93 * v93) >> 14) + 12000;
      {
        v140 = a1[3563];
        __asm__ volatile("" ::"r"(v140));
      }
      if (v140 != 0) {
        v141 = v92;
        v142 = (unsigned int)v441_.v457;
        if (v125 >= v139) {
          v143 = 1105;
          a1[3561] = 1105;
        LABEL_455:
          a1[3560] = v143;
          goto LABEL_456;
        }
      }
      else {
        v141 = v92;
        if (a1[3561] < 1105) {
          v144 = 2000;
        }
        else {
          v144 = -2000;
        }
        if (v125 >= v139 + v144) {
          v143 = 1105;
          v145 = 1;
          v142 = (unsigned int)v441_.v457;
          goto LABEL_447;
        }
        v142 = (unsigned int)v441_.v457;
        if (a1[3561] < 1104) {
          v138 += 1000;
        }
        else {
          v138 -= 1000;
        }
      }
      if (v125 >= v138) {
        v143 = 1104;
        v145 = 1;
      }
      else {
        v180 = 9000;
        if (v140 != 0) {
          if (v125 >= 9000) {
            v143 = 1103;
            a1[3561] = 1103;
            goto LABEL_455;
          }
        }
        else {
          if (a1[3561] < 1103) {
            v181 = 700;
          }
          else {
            v181 = -700;
          }
          if (v125 >= v181 + 9000) {
            v145 = 0;
            v143 = 1103;
            goto LABEL_447;
          }
          if (a1[3561] >= 1102) {
            v180 = 8300;
          }
          else {
            v180 = 9700;
          }
        }
        v145 = 0;
        if (v125 >= v180) {
          v143 = 1103;
        }
        else {
          v143 = 1101;
        }
      }
    LABEL_447:
      a1[3561] = v143;
      a1[3560] = v143;
      if (v140 != 0) {
        v207 = 1;
      }
      else {
        v207 = v127;
      }
      if ((v207 & 1) == 0) {
        v208 = v145 ^ 1;
        if (a1[22] != 0) {
          v208 = 1;
        }
        if ((v208 & 1) == 0) {
          v143 = 1103;
          goto LABEL_455;
        }
      }
    LABEL_456:
      {
        v209 = a1[33];
        __asm__ volatile("" ::"r"(v209));
      }
      if (v143 <= v209) {
        {
          v210 = a1[32];
          __asm__ volatile("" ::"r"(v210));
        }
        if (v210 == -1000) {
        LABEL_458:
          if (v103 == 1002) {
            goto LABEL_466;
          }
          goto LABEL_462;
        }
      }
      else {
        a1[3560] = v209;
        v143 = v209;
        {
          v210 = a1[32];
          __asm__ volatile("" ::"r"(v210));
        }
        if (v210 == -1000) {
          goto LABEL_458;
        }
      }
      a1[3560] = v210;
      v143 = v210;
      if (v103 != 1002) {
      LABEL_462:
        if (v76 <= 1874) {
          if (v143 >= 1103) {
            v143 = 1103;
          }
          a1[3560] = v143;
        }
      }
    LABEL_466:
      {
        v211 = a1[36];
        __asm__ volatile("" ::"r"(v211));
      }
      if (v211 > 24000) {
        goto LABEL_479;
      }
      if (v143 > 1104) {
        v143 = 1104;
        a1[3560] = 1104;
        if (v211 >= 16001) {
          goto LABEL_479;
        }
      LABEL_472:
        v143 = 1103;
        a1[3560] = 1103;
        if (v211 >= 12001) {
          goto LABEL_479;
        }
        goto LABEL_473;
      }
      if (v211 >= 16001) {
        goto LABEL_479;
      }
      if (v143 == 1104) {
        goto LABEL_472;
      }
      if (v211 < 12001) {
        if (v143 <= 1102) {
          if (v211 <= 8000 && v143 == 1102) {
            goto LABEL_474;
          }
          goto LABEL_479;
        }
      LABEL_473:
        v143 = 1102;
        a1[3560] = 1102;
        if (v211 <= 8000) {
        LABEL_474:
          v143 = 1101;
          a1[3560] = 1101;
        }
      }
    LABEL_479:
      if (v210 != -1000) {
        goto LABEL_499;
      }
      {
        v212 = a1[4050];
        __asm__ volatile("" ::"r"(v212));
      }
      if (v212 == 0) {
        goto LABEL_499;
      }
      {
        v213 = a1[3548];
        __asm__ volatile("" ::"r"(v213));
      }
      if (v125 <= 18000 * v213) {
        if ((v127 & 1) != 0) {
          v215 = 1101;
          goto LABEL_494;
        }
      LABEL_489:
        if (v125 <= 30000 * v213) {
          v215 = 1103;
        }
        else if (v125 <= 44000 * v213) {
          v215 = 1104;
        }
        else {
          v215 = 1105;
        }
        goto LABEL_494;
      }
      if (v125 <= 24000 * v213) {
        v214 = v127;
      }
      else {
        v214 = 0;
      }
      if ((v214 & 1) == 0) {
        goto LABEL_489;
      }
      v215 = 1102;
    LABEL_494:
      if (v212 <= v215) {
        v212 = v215;
      }
      a1[4050] = v212;
      if (v143 >= v212) {
        v143 = v212;
      }
      a1[3560] = v143;
    LABEL_499:
      {
        v216 = a1[10];
        __asm__ volatile("" ::"r"(v216));
      }
      if (a1[12] == 0 || v216 == 0) {
        v218 = 1;
      }
      else {
        v218 = v127;
      }
      if ((v218 & 1) != 0) {
        v219 = false;
        goto LABEL_539;
      }
      v220 = 2 * v143;
      {
        v221 = a1[13];
        __asm__ volatile("" ::"r"(v221));
      }
      if (v216 >= 25) {
        v222 = 25;
      }
      else {
        v222 = a1[10];
        __asm__ volatile("" ::"r"(v222));
      }
      v223 = 125LL - v222;
      {
        v224 = MovieData_a78d0[v220 - 2202];
        __asm__ volatile("" ::"r"(v224));
      }
      if (v216 > 5) {
        if (v221 == 1) {
          if (v125 <=
              (int)((unsigned __int64)(655LL *
                                       (v224 - MovieData_a78d0[v220 - 2201]) *
                                       (int)v223) >>
                    16)) {
            v228 = v143;
            v229 = v220 - 2204;
            v230 = v143 - 1;
            while (v228 >= 1102) {
              a1[3560] = v230;
              --v228;
              --v230;
              {
                v231 = MovieData_a78d0[v229];
                __asm__ volatile("" ::"r"(v231));
              }
              {
                v232 = MovieData_a78d0[v229 + 1];
                __asm__ volatile("" ::"r"(v232));
              }
              v229 -= 2;
              if (v125 >
                  (int)((unsigned __int64)(655LL * (v231 - v232) * (int)v223) >>
                        16)) {
                goto LABEL_528;
              }
            }
          LABEL_538:
            v219 = false;
            a1[3560] = v143;
            goto LABEL_539;
          }
        }
        else {
          if (v221 != 0) {
            v233 = 0;
          }
          else {
            v233 = MovieData_a78d0[v220 - 2201];
            __asm__ volatile("" ::"r"(v233));
          }
          if (v125 <=
              (int)((unsigned __int64)(655LL * (v233 + v224) * (int)v223) >>
                    16)) {
            v234 = v143;
            if (v221 != 0) {
              v235 = v220 - 2204;
              v236 = v143 - 1;
              while (v234 > 1101) {
                a1[3560] = v236;
                --v234;
                --v236;
                {
                  v237 = MovieData_a78d0[v235];
                  __asm__ volatile("" ::"r"(v237));
                }
                v235 -= 2;
                v238 = (unsigned __int64)(655 * v237 * v223) >> 16;
                v219 = true;
                if (v125 > (int)v238) {
                  goto LABEL_539;
                }
              }
            }
            else {
              v239 = v220 - 2204;
              v240 = v143 - 1;
              while (v234 >= 1102) {
                a1[3560] = v240;
                --v234;
                --v240;
                {
                  v241 = MovieData_a78d0[v239];
                  __asm__ volatile("" ::"r"(v241));
                }
                {
                  v242 = MovieData_a78d0[v239 + 1];
                  __asm__ volatile("" ::"r"(v242));
                }
                v239 -= 2;
                v243 =
                    (unsigned __int64)(655LL * (v242 + v241) * (int)v223) >> 16;
                v219 = true;
                if (v125 > (int)v243) {
                  goto LABEL_539;
                }
              }
            }
            goto LABEL_538;
          }
        }
      LABEL_528:
        v219 = true;
        goto LABEL_539;
      }
      if (v221 == 1) {
        v225 = MovieData_a78d0[v220 - 2201];
        __asm__ volatile("" ::"r"(v225));
      }
      else {
        v225 = 0;
      }
      v226 = v224 - v225;
      if (v221 != 0) {
        v227 = 0;
      }
      else {
        v227 = MovieData_a78d0[v220 - 2201];
        __asm__ volatile("" ::"r"(v227));
      }
      v219 = v125 >
             (int)((unsigned __int64)(655LL * (v226 + v227) * (int)v223) >> 16);
    LABEL_539:
      a1[13] = v219;
      opus_custom_encoder_ctl((__int64)a1 + v441_.v461, 4036, v142);
      {
        v244 = a1[3556];
        __asm__ volatile("" ::"r"(v244));
      }
      if (v244 == 1002 && a1[3560] == 1102) {
        a1[3560] = 1103;
      }
      {
        v245 = a1[44];
        __asm__ volatile("" ::"r"(v245));
      }
      v441_.v450 = v52;
      if (v245 != 0) {
        v246 = 1101;
        a1[3560] = 1101;
        goto LABEL_544;
      }
      {
        v246 = a1[3560];
        __asm__ volatile("" ::"r"(v246));
      }
      if (v244 != 1000 || v246 <= 1103) {
      LABEL_544:
        if (v244 == 1001 && v246 <= 1103) {
          v244 = 1000;
          *v441_.v460 = 1000;
        }
        {
          v247 = a1[36];
          __asm__ volatile("" ::"r"(v247));
        }
        v248 = v247 / 50;
        if (a3 > v247 / 50 && v244 != 1000) {
          goto LABEL_562;
        }
        v249 = 3 * v247 / 50;
        if (a3 > v249) {
          if (a3 != 3 * v247 / 25) {
            v249 = v247 / 50;
          }
          if (a3 == 2 * v247 / 25) {
            v249 = v247 / 25;
          }
          if (v244 == 1000) {
            v248 = v249;
          }
          goto LABEL_562;
        }
        goto LABEL_566;
      }
      {
        v247 = a1[36];
        __asm__ volatile("" ::"r"(v247));
      }
      a1[3556] = 1001;
      v248 = v247 / 50;
      if (a3 > v247 / 50 || a3 > 3 * v247 / 50) {
      LABEL_562:
        if (v441_.v459 != -1) {
          a1[1909] = v441_.v459;
          a1[1910] = v141;
        }
        return (unsigned int)opus_src_6c400(a1, v441_.v462, a3 / v248, v248,
                                            (__int64)a4, a5, v441_.v455, v142,
                                            a13);
      }
      v244 = 1001;
    LABEL_566:
      v251 = v441_.v458;
      v252 = v441_.v451;
      if (a1[3562] != 0) {
        v252 = 1;
        a1[3562] = 0;
        LODWORD(v441_.v453) = 2;
        v441_.v454 = 1;
      }
      {
        v253 = a1[40];
        __asm__ volatile("" ::"r"(v253));
      }
      v254 = 0;
      v441_.v459 = v246;
      v255 = false;
      if (v252 != 0 && v244 != 1002) {
        v254 = compute_redundancy_bytes(v15, v253, v75, a1[3548]);
        v255 = v254 != 0;
      }
      v441_.v451 = v255;
      v441_.v444 = v254;
      if (v15 - v254 >= v253 * a3 / (8 * v247)) {
        v256 = v253 * a3 / (8 * v247);
      }
      else {
        v256 = v15 - v254;
      }
      v441_.v446 = a4;
      v441_.v445 = a4 + 1;
      v441_.v455 = v15 - 1;
      ec_enc_init((__int64)v465_.v473, (__int64)(a4 + 1), v15 - 1);
      {
        v257 = a1[28];
        __asm__ volatile("" ::"r"(v257));
      }
      v441_.v443 = v251 + a3;
      v258 = 2LL * v257 * (v251 + a3);
      v259 =
          (__int16*)((char*)&v441_.v441 - ((v258 + 15) & 0xFFFFFFFFFFFFFFF0LL));
      memset_plt((__int64)v259, 0, v258);
      {
        v260 = a1[43];
        __asm__ volatile("" ::"r"(v260));
      }
      v441_.v447 = a1 + 3570;
      memcpy_plt((__int64)v259, (__int64)a1 + 2 * (v260 - v251) * v257 + 14280,
                 2LL * v257 * v251);
      if (a1[3556] == 1002) {
        v261 = (unsigned int)silk_lin2log(0x3Cu) << 8;
      }
      else {
        v261 = v441_.v456[2];
        __asm__ volatile("" ::"r"(v261));
      }
      {
        v262 = a1[3550] +
               ((unsigned __int64)(983LL * (int)(v261 - a1[3550])) >> 16);
        __asm__ volatile("" ::"r"(v262));
      }
      a1[3550] = v262;
      v263 = silk_log2lin(v262 >> 8);
      {
        v264 = a1[28];
        __asm__ volatile("" ::"r"(v264));
      }
      {
        v265 = a1[36];
        __asm__ volatile("" ::"r"(v265));
      }
      if (a1[27] == 2048) {
        hp_cutoff(v441_.v462, v263, (__int64)&v259[v264 * v251],
                  (__int64)(a1 + 3552), a3, v264, v265);
      }
      else {
        opus_encoder_6c8a0(v441_.v462, (__int64)&v259[v264 * v251],
                           (__int64)(a1 + 3552), a3, v264, v265);
      }
      {
        v266 = *v441_.v460;
        __asm__ volatile("" ::"r"(v266));
      }
      v267 = v441_.v459;
      v441_.v457 = v259;
      if (v266 != 1002) {
        if (LODWORD(v465_.v465[0]) != 0) {
          v272 = *((float*)&v465_.v466 + 1) >= 0x1.99999a0000000p-4f;
          __asm__ volatile("" ::"r"(v272));
        }
        else {
          v272 = -1;
        }
        v271 = 8 * v256 - 8;
        v273 = v271 * v75;
        if (v266 == 1001) {
          v274 = MovieRoutine_6caf0(v273, v441_.v459, a1[36] == 50 * a3, a1[37],
                                    a1[13], a1[3548]);
          {
            v275 = *((_QWORD*)a1 + 1782);
            __asm__ volatile("" ::"r"(v275));
          }
          v276 = v274;
          a1[9] = v274;
          if (v275 == 0) {
            v277 = v274;
            v278 = celt_exp2((unsigned __int16)v274 - (unsigned __int16)v273);
            v276 = v277;
            v441_.v441 = (v278 >> 1) ^ 0x7FFF;
          LABEL_662:
            v267 = v441_.v459;
          LABEL_663:
            {
              v346 = a1[36];
              __asm__ volatile("" ::"r"(v346));
            }
            {
              v347 = a1[28];
              __asm__ volatile("" ::"r"(v347));
            }
            {
              v348 = a1[3548];
              __asm__ volatile("" ::"r"(v348));
            }
            if (v267 == 1102) {
              v349 = 12000;
            }
            else {
              v349 = 16000;
            }
            if (v267 == 1101) {
              v349 = 8000;
            }
            a1[2] = v347;
            a1[3] = v348;
            a1[7] = v349;
            a1[8] = 1000 * a3 / v346;
            if (v266 == 1001) {
              *(_QWORD*)(a1 + 5) = 0x3E8000003E80LL;
              v350 = v441_.v444;
              v351 = v441_.v451;
            }
            else {
              *(_QWORD*)(a1 + 5) = 0x1F4000003E80LL;
              v350 = v441_.v444;
              v351 = v441_.v451;
              if (v266 == 1000) {
                v352 = v441_.v448 != 0 ? 16 * v441_.v452 / 3u : 8 * v441_.v452;
                if (v352 <= 7999) {
                  a1[5] = 12000;
                  if (v349 >= 0x2EE0) {
                    v349 = 12000;
                  }
                  a1[7] = v349;
                  if (v352 <= 6999) {
                    a1[5] = 8000;
                    a1[7] = 8000;
                  }
                }
              }
            }
            {
              v353 = a1[37];
              __asm__ volatile("" ::"r"(v353));
            }
            v354 = 8 * v441_.v455;
            a1[15] = v353 == 0;
            a1[16] = v354;
            v355 = !v351;
            if (v350 < 2) {
              v355 = 1;
            }
            if ((v355 & 1) == 0) {
              v356 = v354 + ~(8 * v350);
              a1[16] = v356;
              v101 = v266 == 1001;
              v357 = (int)v441_.v453;
              if (!v101) {
                goto LABEL_695;
              }
              v354 = v356 - 20;
              a1[16] = v354;
              if (v353 == 0) {
                goto LABEL_692;
              }
            LABEL_689:
              v354 = (int)(MovieRoutine_6caf0(v354 * v346 / a3, v441_.v459,
                                              v346 == 50 * a3, v353, a1[13],
                                              v348) *
                           a3) /
                     v346;
            LABEL_694:
              a1[16] = v354;
              goto LABEL_695;
            }
            v358 = v266 == 1001;
            if (v353 != 0) {
              v357 = (int)v441_.v453;
              if (v358) {
                goto LABEL_689;
              }
            }
            else {
              v357 = (int)v441_.v453;
              if (v358) {
              LABEL_692:
                if (v354 >= v276 * a3 / v346) {
                  v354 = v276 * a3 / v346;
                }
                goto LABEL_694;
              }
            }
          LABEL_695:
            if (v357 != 0) {
              {
                v359 = a1[43];
                __asm__ volatile("" ::"r"(v359));
              }
              {
                v360 = a1[29];
                __asm__ volatile("" ::"r"(v360));
              }
              LODWORD(v463_.v463[0]) = 0;
              v361 = 2LL * (v359 - v360 - v346 / 400) * v347;
              {
                v362 = *(_DWORD*)(v465_.v470 + 4);
                __asm__ volatile("" ::"r"(v362));
              }
              {
                v363 = *(__int16**)(v465_.v470 + 64);
                __asm__ volatile("" ::"r"(v363));
              }
              LODWORD(v441_.v453) = v357;
              v364 = v272;
              v365 = (__int64)v441_.v447;
              opus_encoder_6cc20((__int64)v441_.v447 + v361,
                                 (__int64)v441_.v447 + v361, 0, 0x7FFF, v362,
                                 v346 / 400, v347, v363, v346);
              memset_plt(v365, 0, v361);
              v366 = v365;
              v272 = v364;
              v367 = v441_.v456;
              opus_silk_528e0(v441_.v456, a1 + 2, v366, a1[43], 0,
                              (int*)v463_.v463, (int)v441_.v453, v364);
              {
                v347 = a1[28];
                __asm__ volatile("" ::"r"(v347));
              }
              a1[18] = 0;
            }
            else {
              v367 = v441_.v456;
            }
            if ((unsigned int)opus_silk_528e0(
                    v367, a1 + 2, (__int64)&v441_.v457[v347 * v441_.v458], a3,
                    (__int64)v465_.v473, &v465_.v479, 0, v272) != 0) {
              return (unsigned int)-3;
            }
            {
              v368 = *v441_.v460;
              __asm__ volatile("" ::"r"(v368));
            }
            if (*v441_.v460 == 1000) {
              {
                v369 = a1[20];
                __asm__ volatile("" ::"r"(v369));
              }
              v370 = v441_.v459;
              a4 = v441_.v446;
              switch (v369) {
              case 8000:
                v370 = 1101;
                break;
              case 16000:
                v370 = 1103;
                break;
              case 12000:
                v370 = 1102;
                break;
              default:
                break;
              }
            }
            else {
              v370 = v441_.v459;
              a4 = v441_.v446;
            }
            if (a1[24] != 0) {
              {
                v371 = a1[4053];
                __asm__ volatile("" ::"r"(v371));
              }
              a1[18] = v371 == 0;
              if (v465_.v479 != 0) {
                if (v371 == 0) {
                  v372 = v370;
                  v373 = compute_redundancy_bytes(v15, a1[40], v75, a1[3548]);
                  v370 = v372;
                  v441_.v454 = 0;
                  v441_.v444 = v373;
                  v441_.v451 = v373 != 0;
                  a1[3562] = 1;
                }
              LABEL_710:
                v268 = v441_.v441;
                v269 = v370 - 1101;
                v441_.v459 = v370;
                if ((unsigned int)(v370 - 1101) <= 3) {
                  goto LABEL_582;
                }
                goto LABEL_711;
              }
            }
            else {
              v374 = v465_.v479;
              a1[18] = 0;
              if (v374 != 0) {
                goto LABEL_710;
              }
            }
            {
              v439 = a1[36];
              __asm__ volatile("" ::"r"(v439));
            }
            v437 = v370;
            {
              v435 = a1[3548];
              __asm__ volatile("" ::"r"(v435));
            }
            a1[4054] = 0;
            v436 = v439 / a3;
            goto LABEL_830;
          }
          v267 = v441_.v459;
        }
        else {
          {
            v275 = *((_QWORD*)a1 + 1782);
            __asm__ volatile("" ::"r"(v275));
          }
          a1[9] = v273;
          if (v275 == 0) {
            v276 = v271 * v75;
            v441_.v441 = 0x7FFF;
            goto LABEL_663;
          }
          v276 = v271 * v75;
        }
        if (a1[37] == 0 || a1[44] != 0) {
          v441_.v441 = 0x7FFF;
          goto LABEL_663;
        }
        {
          v279 = a1[3560];
          __asm__ volatile("" ::"r"(v279));
        }
        if (v279 == 1101) {
          v280 = 8000;
          v281 = 13;
        }
        else if (v279 == 1102) {
          v280 = 12000;
          v281 = 15;
        }
        else {
          v280 = 16000;
          v281 = 17;
        }
        {
          v282 = (unsigned int)a1[28];
          __asm__ volatile("" ::"r"(v282));
        }
        v283 = v272;
        if ((int)v282 < 1) {
          v287 = 0;
        }
        else {
          v284 = (unsigned __int16*)(v275 + 8);
          v285 = (unsigned __int16*)(v275 + 16);
          v286 = 0;
          v287 = 0;
          do {
            v288 = 0;
            v289 = v285;
            v290 = v284;
            do {
              v291 = v289;
              {
                v292 = *(v290 - 4);
                __asm__ volatile("" ::"r"(v292));
              }
              v288 -= 8;
              v293 = v292;
              v294 = v292 - 512;
              if (v293 <= -2048) {
                v295 = -2048;
              }
              else {
                v295 = 256;
              }
              if (v294 >= 0xF601u) {
                v296 = *(v290 - 4) >> (v293 > 0);
                __asm__ volatile("" ::"r"(v296));
              }
              else {
                v296 = v295;
              }
              {
                v297 = *(v290 - 3);
                __asm__ volatile("" ::"r"(v297));
              }
              v298 = v287 + v296;
              v299 = v297;
              v300 = v297 - 512;
              if (v299 <= -2048) {
                v301 = -2048;
              }
              else {
                v301 = 256;
              }
              v60 = v300 < 0xF601u;
              {
                v302 = *(v290 - 2);
                __asm__ volatile("" ::"r"(v302));
              }
              if (!v60) {
                v301 = *(v290 - 3) >> (v299 > 0);
                __asm__ volatile("" ::"r"(v301));
              }
              v303 = v298 + v301;
              v304 = v302;
              v305 = v302 - 512;
              if (v304 <= -2048) {
                v306 = -2048;
              }
              else {
                v306 = 256;
              }
              v60 = v305 < 0xF601u;
              {
                v307 = *(v290 - 1);
                __asm__ volatile("" ::"r"(v307));
              }
              if (!v60) {
                v306 = *(v290 - 2) >> (v304 > 0);
                __asm__ volatile("" ::"r"(v306));
              }
              v308 = v303 + v306;
              v309 = v307;
              v310 = v307 - 512;
              if (v309 <= -2048) {
                v311 = -2048;
              }
              else {
                v311 = 256;
              }
              v60 = v310 < 0xF601u;
              {
                v312 = *v290;
                __asm__ volatile("" ::"r"(v312));
              }
              if (!v60) {
                v311 = *(v290 - 1) >> (v309 > 0);
                __asm__ volatile("" ::"r"(v311));
              }
              v313 = v308 + v311;
              v314 = v312;
              v315 = v312 - 512;
              if (v314 <= -2048) {
                v316 = -2048;
              }
              else {
                v316 = 256;
              }
              v60 = v315 < 0xF601u;
              {
                v317 = v290[1];
                __asm__ volatile("" ::"r"(v317));
              }
              if (!v60) {
                v316 = *v290 >> (v314 > 0);
                __asm__ volatile("" ::"r"(v316));
              }
              v318 = v313 + v316;
              v319 = v317;
              v320 = v317 - 512;
              if (v319 <= -2048) {
                v321 = -2048;
              }
              else {
                v321 = 256;
              }
              v60 = v320 < 0xF601u;
              {
                v322 = v290[2];
                __asm__ volatile("" ::"r"(v322));
              }
              if (!v60) {
                v321 = v290[1] >> (v319 > 0);
                __asm__ volatile("" ::"r"(v321));
              }
              v323 = v318 + v321;
              v324 = v322;
              {
                v325 = v290[2];
                __asm__ volatile("" ::"r"(v325));
              }
              v326 = v322 - 512;
              if (v324 <= -2048) {
                v327 = -2048;
              }
              else {
                v327 = 256;
              }
              v60 = v326 < 0xF601u;
              {
                v328 = v290[3];
                __asm__ volatile("" ::"r"(v328));
              }
              v290 += 8;
              v329 = v325 >> (v324 > 0);
              if (!v60) {
                v327 = v329;
              }
              v330 = v323 + v327;
              v331 = (__int16)v328;
              v332 = v328;
              v333 = v328 - 512;
              if (v331 <= -2048) {
                v334 = -2048;
              }
              else {
                v334 = 256;
              }
              v335 = v332 >> (v331 > 0);
              if (v333 >= 0xF601u) {
                v334 = v335;
              }
              v287 = v330 + v334;
              v289 = v291 + 8;
            } while (-(__int64)(v281 & 0x18) != v288);
            v336 = v281 & 7;
            do {
              {
                v337 = *v291++;
                __asm__ volatile("" ::"r"(v337));
              }
              v338 = (__int16)v337;
              v339 = v337;
              v340 = v337 - 512;
              if ((__int16)v337 <= -2048) {
                v341 = -2048;
              }
              else {
                v341 = 256;
              }
              v342 = v339 >> (v338 > 0);
              if (v340 >= 0xF601u) {
                v343 = v342;
              }
              else {
                v343 = v341;
              }
              --v336;
              v287 += v343;
            } while (v336 != 0);
            ++v286;
            v284 += 21;
            v285 += 21;
          } while (v286 != v282);
        }
        v344 = v279 & 0xFFFFFFFE;
        v345 =
            ((((((int)v282 * (v287 / v281)) << 16) + 13434880) >> 16) * v280 +
             512) >>
            10;
        if (v345 <= -2 * v276 / 3) {
          v345 = -2 * v276 / 3;
        }
        if (v344 == 1104) {
          v345 = 3 * v345 / 5;
        }
        v276 += v345;
        v272 = v283;
        v441_.v441 = 0x7FFF;
        a1[9] = v276;
        goto LABEL_662;
      }
      v268 = 0x7FFF;
      v269 = v441_.v459 - 1101;
      if ((unsigned int)(v441_.v459 - 1101) <= 3) {
      LABEL_582:
        {
          v270 = MovieData_a2270[v269];
          __asm__ volatile("" ::"r"(v270));
        }
        goto LABEL_712;
      }
    LABEL_711:
      v270 = 21;
    LABEL_712:
      v375 = v441_.v461;
      opus_custom_encoder_ctl((__int64)a1 + v441_.v461, 10012, v270);
      opus_custom_encoder_ctl((__int64)a1 + v375, 10008,
                              (unsigned int)a1[3548]);
      opus_custom_encoder_ctl((__int64)a1 + v375, 4002, 0xFFFFFFFFLL);
      if (a1[3556] != 1000) {
        v376 = v441_.v461;
        opus_custom_encoder_ctl((__int64)a1 + v441_.v461, 4006, 0);
        if (a1[19] != 0) {
          v377 = 0;
        }
        else {
          v377 = 2;
        }
        opus_custom_encoder_ctl((__int64)a1 + v376, 10002, v377);
        {
          v378 = a1[37];
          __asm__ volatile("" ::"r"(v378));
        }
        if (a1[3556] == 1001) {
          if (v378 != 0) {
            v379 = v441_.v461;
            opus_custom_encoder_ctl((__int64)a1 + v441_.v461, 4002,
                                    (unsigned int)(a1[40] - a1[9]));
            opus_custom_encoder_ctl((__int64)a1 + v379, 4020, 0);
          }
        }
        else if (v378 != 0) {
          v380 = v441_.v461;
          opus_custom_encoder_ctl((__int64)a1 + v441_.v461, 4006, 1);
          opus_custom_encoder_ctl((__int64)a1 + v380, 4020,
                                  (unsigned int)a1[38]);
          opus_custom_encoder_ctl((__int64)a1 + v380, 4002,
                                  (unsigned int)a1[40]);
        }
      }
      {
        v381 = a1[28];
        __asm__ volatile("" ::"r"(v381));
      }
      LODWORD(v441_.v456) = a1[36];
      v382 = 2LL * ((int)v441_.v456 * v381 / 400);
      memset_plt((__int64)&v441_.v441 - ((v382 + 15) & 0xFFFFFFFFFFFFFFF0LL), 0,
                 v382);
      {
        v383 = a1[3556];
        __asm__ volatile("" ::"r"(v383));
      }
      v441_.v453 = (char*)&v441_.v441 - ((v382 + 15) & 0xFFFFFFFFFFFFFFF0LL);
      if (v383 == 1000) {
        {
          v384 = a1[43];
          __asm__ volatile("" ::"r"(v384));
        }
      }
      else {
        {
          v385 = a1[3557];
          __asm__ volatile("" ::"r"(v385));
        }
        {
          v384 = a1[43];
          __asm__ volatile("" ::"r"(v384));
        }
        if (v383 != v385 && v385 >= 1) {
          memcpy_plt(
              (__int64)&v441_.v441 - ((v382 + 15) & 0xFFFFFFFFFFFFFFF0LL),
              (__int64)v441_.v447 +
                  2 * ((int)v441_.v456 / -400 - v441_.v458 + v384) * v381,
              v382);
        }
      }
      v441_.v442 = v15;
      v386 = (v384 - v441_.v443) * v381;
      if (v386 < 1) {
        {
          v393 = &v441_.v457[(v441_.v443 - v384) * v381];
          __asm__ volatile("" ::"r"(v393));
        }
        v392 = 2LL * v384 * v381;
        v391 = (__int64)v441_.v447;
      }
      else {
        v387 = v268;
        v388 = 2LL * (unsigned int)((v384 - v441_.v443) * v381);
        v389 = v441_.v443;
        v390 = (__int64)v441_.v447;
        memmove_plt((__int64)v441_.v447, (__int64)v441_.v447 + 2 * v381 * a3,
                    2LL * (unsigned int)v386);
        v391 = v390 + v388;
        v268 = v387;
        v392 = 2LL * v381 * v389;
        v393 = v441_.v457;
      }
      memcpy_plt(v391, (__int64)v393, v392);
      {
        v394 = *((unsigned __int16*)a1 + 7102);
        __asm__ volatile("" ::"r"(v394));
      }
      if (v394 != 0x7FFF || v268 != 0x7FFF) {
        opus_encoder_6cc20((__int64)v441_.v457, (__int64)v441_.v457, v394, v268,
                           *(_DWORD*)(v465_.v470 + 4), a3, v381,
                           *(__int16**)(v465_.v470 + 64), (int)v441_.v456);
      }
      *((_WORD*)a1 + 7102) = v268;
      v395 = v441_.v451;
      if (v383 != 1001 || a1[3548] == 1) {
        if (v125 <= 32000) {
          if (v125 >= 16000) {
            v396 = 0x4000 -
                   (65536000 - (v125 << 11)) / (unsigned int)(v125 - 14000);
          }
          else {
            v396 = 0;
          }
        }
        else {
          v396 = 0x4000;
        }
        a1[23] = v396;
      }
      if (*((_QWORD*)a1 + 1782) == 0 && v381 == 2) {
        {
          v397 = *((__int16*)a1 + 7098);
          __asm__ volatile("" ::"r"(v397));
        }
        {
          v398 = a1[23];
          __asm__ volatile("" ::"r"(v398));
        }
        if (v397 < 0x4000 || v398 < 0x4000) {
          if (v397 == 0x4000) {
            v399 = 0x7FFF;
          }
          else {
            v399 = 2 * v397;
          }
          if ((unsigned __int16)a1[23] == 0x4000) {
            v400 = 0x7FFF;
          }
          else {
            v400 = 2 * v398;
          }
          opus_encoder_6d020(v441_.v457, v441_.v457, v399, v400,
                             *(_DWORD*)(v465_.v470 + 4), a3, 2,
                             *(__int16**)(v465_.v470 + 64), (int)v441_.v456);
          v395 = v441_.v451;
          *((_WORD*)a1 + 7098) = v398;
        }
      }
      a4 = v441_.v446;
      if (v383 == 1002) {
        goto LABEL_772;
      }
      v401 = v383 == 1001 ? 5 : -15;
      if ((int)(v401 + v465_.v475 + __clz((unsigned int)(v465_.v476))) >
          8 * v441_.v455) {
        goto LABEL_772;
      }
      if (v383 == 1001) {
        ec_enc_bit_logp(v465_.v473, v441_.v451, 12);
        v395 = v441_.v451;
      }
      if (!v395) {
      LABEL_772:
        v407 = 1;
        v402 = 0;
        v406 = 0;
        a1[3562] = 0;
      }
      else {
        v402 = 1;
        ec_enc_bit_logp(v465_.v473, v441_.v454, 1);
        v403 = v465_.v475 + __clz((unsigned int)(v465_.v476));
        if (*v441_.v460 == 1001) {
          v404 = -14;
        }
        else {
          v404 = -25;
        }
        v405 = v441_.v455 - ((v403 + v404) >> 3);
        if (v405 >= v441_.v444) {
          v405 = v441_.v444;
        }
        if (v405 <= 2) {
          v405 = 2;
        }
        if (v405 >= 257) {
          v406 = 257;
        }
        else {
          v406 = v405;
        }
        if (*v441_.v460 == 1001) {
          ec_enc_uint(v465_.v473, v406 - 2, 0x100u);
        }
        v407 = 0;
      }
      if (*v441_.v460 == 1002) {
        v408 = 0;
      }
      else {
        v408 = 17;
      }
      if (*v441_.v460 == 1000) {
        v409 = (int)(v465_.v475 + __clz((unsigned int)(v465_.v476)) - 25) >> 3;
        ec_enc_done((__int64)v465_.v473);
        v410 = v409;
      }
      else {
        v409 = v441_.v455 - v406;
        ec_enc_shrink((__int64)v465_.v473, v441_.v455 - v406);
        v410 = 0;
      }
      v411 = v441_.v461;
      if ((v402 & 1) != 0 || *v441_.v460 != 1000) {
        opus_custom_encoder_ctl((__int64)a1 + v441_.v461, 10022, v465_.v465);
        if (*v441_.v460 == 1001) {
          {
            v413 = a1[26];
            __asm__ volatile("" ::"r"(v413));
          }
          LODWORD(v463_.v463[0]) = a1[25];
          HIDWORD(v463_.v463[0]) = v413;
          opus_custom_encoder_ctl((__int64)a1 + v441_.v461, 10028, v463_.v463);
        }
        if ((v441_.v454 & v402) == 1) {
          v411 = v441_.v461;
          opus_custom_encoder_ctl((__int64)a1 + v441_.v461, 10010, 0);
          opus_custom_encoder_ctl((__int64)a1 + v411, 4006, 0);
          opus_custom_encoder_ctl((__int64)a1 + v411, 4002, 0xFFFFFFFFLL);
          if ((celt_encode_with_ec((__int64)a1 + v411, v441_.v457, a1[36] / 200,
                                   (__int64)&v441_.v445[v409], v406, 0) &
               0x80000000) != 0) {
            return (unsigned int)-3;
          }
          v441_.v458 = v402;
          opus_custom_encoder_ctl((__int64)a1 + v411, 4031, &v465_.v472);
          opus_custom_encoder_ctl((__int64)a1 + v411, 4028);
          v412 = 1;
          v441_.v454 = 1;
        }
        else {
          v441_.v458 = v402;
          v412 = 0;
          v411 = v441_.v461;
        }
      }
      else {
        v441_.v458 = v402;
        v412 = 0;
      }
      opus_custom_encoder_ctl((__int64)a1 + v411, 10010, v408);
      if (*v441_.v460 == 1000) {
        v414 = v441_.v462;
      }
      else {
        {
          v415 = a1[3557];
          __asm__ volatile("" ::"r"(v415));
        }
        v414 = v441_.v462;
        if (*v441_.v460 != v415 && v415 >= 1) {
          LOWORD(v463_.v463[0]) = 0;
          v416 = v441_.v461;
          opus_custom_encoder_ctl((__int64)a1 + v441_.v461, 4028);
          celt_encode_with_ec((__int64)a1 + v416, v441_.v453, a1[36] / 400,
                              (__int64)v463_.v463, 2, 0);
          opus_custom_encoder_ctl((__int64)a1 + v416, 10002, 0);
        }
        if ((int)(v465_.v475 + __clz((unsigned int)(v465_.v476)) - 32) <=
            8 * v409) {
          v417 = v441_.v461;
          if (v412 != 0 && *v441_.v460 == 1001 && a1[37] != 0) {
            opus_custom_encoder_ctl((__int64)a1 + v441_.v461, 4002,
                                    (unsigned int)(a1[40] - a1[9]));
            v417 = v441_.v461;
          }
          v418 = v417;
          opus_custom_encoder_ctl((__int64)a1 + v417, 4006,
                                  (unsigned int)a1[37]);
          v419 = celt_encode_with_ec((__int64)a1 + v418, v441_.v457, a3, 0,
                                     v409, (__int64)v465_.v473);
          if (v419 < 0) {
            return (unsigned int)-3;
          }
          v410 = v419;
          if (v412 != 0 && *v441_.v460 == 1001 && a1[37] != 0) {
            memmove_plt((__int64)&v441_.v445[v419], (__int64)&v441_.v445[v409],
                        v406);
            v409 += v406;
          }
        }
      }
      v420 = v407 | v441_.v454;
      v15 = v441_.v442;
      if ((v420 & 1) != 0) {
        goto LABEL_808;
      }
      {
        v421 = a1[36];
        __asm__ volatile("" ::"r"(v421));
      }
      v422 = v406;
      LOWORD(v463_.v463[0]) = 0;
      v423 = 1374389535LL * v421;
      v424 = (v423 >> 39) + ((unsigned int)(v423 >> 39) >> 31);
      v425 = (v423 >> 38) + ((unsigned int)(v423 >> 38) >> 31);
      v426 = v441_.v461;
      opus_custom_encoder_ctl((__int64)a1 + v441_.v461, 4028);
      opus_custom_encoder_ctl((__int64)a1 + v426, 10010, 0);
      opus_custom_encoder_ctl((__int64)a1 + v426, 10002, 0);
      opus_custom_encoder_ctl((__int64)a1 + v426, 4006, 0);
      opus_custom_encoder_ctl((__int64)a1 + v426, 4002, 0xFFFFFFFFLL);
      if (a1[3556] == 1001) {
        ec_enc_shrink((__int64)v465_.v473, v410);
        v409 = v410;
      }
      v427 = v441_.v457;
      v428 = v441_.v461;
      celt_encode_with_ec((__int64)a1 + v441_.v461,
                          &v441_.v457[a1[28] * (a3 - v425 - v424)], v424,
                          (__int64)v463_.v463, 2, 0);
      {
        v429 = &v427[a1[28] * (a3 - v425)];
        __asm__ volatile("" ::"r"(v429));
      }
      v406 = v422;
      if ((celt_encode_with_ec((__int64)a1 + v428, v429, v425,
                               (__int64)&v441_.v445[v409], v422, 0) &
           0x80000000) != 0) {
        return (unsigned int)-3;
      }
      opus_custom_encoder_ctl((__int64)a1 + v428, 4031, &v465_.v472);
      a4 = v441_.v446;
      v414 = v441_.v462;
      v15 = v441_.v442;
    LABEL_808:
      v430 = gen_toc(a1[3556], a1[36] / a3, v441_.v459, a1[3548]);
      v431 = v465_.v476;
      v432 = v465_.v472;
      *a4 = v430;
      a1[4054] = v432 ^ v431;
      if (v441_.v449 != 0) {
        v433 = *v441_.v460;
        __asm__ volatile("" ::"r"(v433));
      }
      else {
        v433 = 1002;
      }
      a1[3557] = v433;
      {
        v434 = a1[3548];
        __asm__ volatile("" ::"r"(v434));
      }
      a1[3559] = a3;
      a1[3563] = 0;
      a1[3558] = v434;
      if (a1[46] != 0 && (LODWORD(v465_.v465[0]) | v441_.v450) != 0) {
        if ((unsigned int)decide_dtx_mode(a1 + 4051, a1[4052], v414, a3, a1[28],
                                          v441_.v450,
                                          *((float*)&v465_.v466 + 1)) != 0) {
          {
            v368 = a1[3556];
            __asm__ volatile("" ::"r"(v368));
          }
          {
            v435 = a1[3548];
            __asm__ volatile("" ::"r"(v435));
          }
          {
            v436 = a1[36] / a3;
            __asm__ volatile("" ::"r"(v436));
          }
          a1[4054] = 0;
          v437 = v441_.v459;
        LABEL_830:
          *a4 = gen_toc(v368, v436, v437, v435);
          return 1;
        }
      }
      else {
        a1[4051] = 0;
      }
      if ((int)(__clz((unsigned int)(v431)) + v465_.v475 - 32) <=
          8 * v441_.v455) {
        v438 = v441_.v458;
        if (*v441_.v460 != 1000) {
          v438 = 1;
        }
        if ((v438 & 1) == 0 && v410 >= 3) {
          while (a4[v410] == 0) {
            v60 = v410-- <= 3;
            if (v60) {
              v410 = 2;
              break;
            }
          }
        }
      }
      else {
        v410 = 1;
        *v441_.v445 = 0;
        a1[4054] = 0;
      }
      v14 = v406 + v410 + 1;
      if (a1[37] == 0) {
      LABEL_277:
        if ((unsigned int)opus_packet_pad_plt(a4) != 0) {
          return (unsigned int)-3;
        }
        else {
          return (unsigned int)v15;
        }
      }
      return v14;
    }
  }
  v118 = v465_.v471;
  v441_.v451 = false;
  v441_.v454 = 0;
  v441_.v455 = 0;
  goto LABEL_225;
}

__int64* opus_src_73f80(__int64* result, __int64 a2, __int64 a3)
{
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  char* v11;
  __int64 v12;
  float* v13;
  float v14;
  int v15;
  float v16;
  float v17;
  int v18;
  float v19;
  float v20;
  int v21;
  float v22;
  int v23;
  __int64 v24;
  char* v25;
  float* v26;
  int v27;
  char* v28;
  __int64 v29;
  char* v30;
  float v31;
  __int64 v32;
  __int64 v33;
  float* v34;
  char* v35;
  float v36;
  char* v37;
  int v38;
  char* v39;
  float v40;
  float v41;
  int v42;
  char* v43;
  float v44;
  float v45;
  int v46;
  char* v47;
  float v48;
  float v49;
  int v50;
  char* v51;
  float v52;
  float v53;
  float v54;
  float* v55;
  __int64 v56;
  __int64 v57;
  int v58;
  float v59;
  char* v60;
  __int64 v61;
  char* v62;
  float v63;
  __int64 v64;
  __int64 v65;
  float* v66;
  char* v67;
  float v68;
  char* v69;
  int v70;
  char* v71;
  float v72;
  float v73;
  int v74;
  char* v75;
  float v76;
  float v77;
  int v78;
  char* v79;
  float v80;
  float v81;
  int v82;
  char* v83;
  float v84;
  float v85;
  float v86;
  float* v87;
  __int64 v88;
  __int64 v89;
  int v90;
  float v91;
  unsigned __int64 v92;
  float* v93;
  float v94;
  float v95;
  bool v96;
  float v97;
  float v98;
  unsigned int v99;
  float v100;
  float v101;
  float v102;
  bool v103;
  float v104;
  float v105;
  unsigned int v106;
  float v107;
  float v108;
  bool v109;
  float v110;
  float v111;
  float v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  char* v117;
  float* v118;
  float v119;
  int v120;
  float v121;
  float v122;
  int v123;
  float v124;
  float v125;
  int v126;
  float v127;
  int v128;
  float* v129;
  char* v130;
  int v131;
  char* v132;
  __int64 v133;
  float v134;
  __int64 v135;
  __int64 v136;
  float* v137;
  char* v138;
  float v139;
  char* v140;
  int v141;
  char* v142;
  float v143;
  float v144;
  int v145;
  char* v146;
  float v147;
  float v148;
  int v149;
  char* v150;
  float v151;
  float v152;
  int v153;
  char* v154;
  float v155;
  float v156;
  float v157;
  float* v158;
  __int64 v159;
  __int64 v160;
  int v161;
  float v162;
  char* v163;
  __int64 v164;
  float v165;
  __int64 v166;
  __int64 v167;
  float* v168;
  char* v169;
  float v170;
  char* v171;
  int v172;
  char* v173;
  float v174;
  float v175;
  int v176;
  char* v177;
  float v178;
  float v179;
  int v180;
  char* v181;
  float v182;
  float v183;
  int v184;
  char* v185;
  float v186;
  float v187;
  float v188;
  float* v189;
  __int64 v190;
  __int64 v191;
  int v192;
  float v193;
  unsigned __int64 v194;
  float* v195;
  float v196;
  float v197;
  bool v198;
  float v199;
  float v200;
  unsigned int v201;
  float v202;
  float v203;
  float v204;
  bool v205;
  float v206;
  float v207;
  unsigned int v208;
  float v209;
  float v210;
  bool v211;
  float v212;
  float v213;
  float v214;
  __int64 v215;
  __int64 v216;
  __int64 v217;
  __int64 v218;
  __int64 v219;
  char* v220;
  float* v221;
  float v222;
  int v223;
  float v224;
  float v225;
  int v226;
  float v227;
  float v228;
  int v229;
  float v230;
  int v231;
  float* v232;
  char* v233;
  int v234;
  __int64 v235;
  __int64 v236;
  float* v237;
  __int64 v238;
  float* v239;
  float* v240;
  float v241;
  float v242;
  float v243;
  float v244;
  float v245;
  float v246;
  float v247;
  float v248;
  float v249;
  float v250;
  float v251;
  float* v252;
  float* v253;
  float* v254;
  float v255;
  float v256;
  float v257;
  __int64 v258;
  char* v259;
  __int64 v260;
  float v261;
  __int64 v262;
  __int64 v263;
  float* v264;
  char* v265;
  float v266;
  char* v267;
  int v268;
  char* v269;
  float v270;
  float v271;
  int v272;
  char* v273;
  float v274;
  float v275;
  int v276;
  char* v277;
  float v278;
  float v279;
  int v280;
  char* v281;
  float v282;
  float v283;
  float v284;
  float* v285;
  __int64 v286;
  __int64 v287;
  int v288;
  float v289;
  char* v290;
  __int64 v291;
  float v292;
  __int64 v293;
  __int64 v294;
  float* v295;
  char* v296;
  float v297;
  char* v298;
  int v299;
  char* v300;
  float v301;
  float v302;
  int v303;
  char* v304;
  float v305;
  float v306;
  int v307;
  char* v308;
  float v309;
  float v310;
  int v311;
  char* v312;
  float v313;
  float v314;
  float v315;
  float* v316;
  __int64 v317;
  __int64 v318;
  int v319;
  float v320;
  __int64 v321;
  float* v322;
  float* v323;
  float* v324;
  float v325;
  float v326;
  float v327;
  float v328;
  float v329;
  float v330;
  bool v331;
  float v332;
  float v333;
  unsigned int v334;
  float v335;
  float v336;
  float v337;
  float v338;
  float v339;
  bool v340;
  float v341;
  float v342;
  unsigned int v343;
  float v344;
  float v345;
  float v346;
  float v347;
  bool v348;
  float v349;
  float v350;
  float v351;
  float v352;
  _QWORD v353[2];
  _QWORD v354[14];
  _QWORD v355[2];
  _QWORD v356[14];
  _QWORD v357[2];
  _QWORD v358[16];
  _BYTE v359[112];

  {
    v5 = *((unsigned int*)result + 7);
    __asm__ volatile("" ::"r"(v5));
  }
  if ((int)v5 < 1) {
    return result;
  }
  {
    v6 = *((_DWORD*)result + 6);
    __asm__ volatile("" ::"r"(v6));
  }
  {
    v7 = *result;
    __asm__ volatile("" ::"r"(v7));
  }
  v8 = v5 & 7;
  v10 = 0;
  memset(v358, 0, 112);
  v357[0] = 0;
  v357[1] = 0;
  if ((unsigned int)v5 >= 8) {
    v11 = (char*)(v7 + 3);
    v12 = 0;
    v13 = (float*)v358;
    do {
      v12 -= 8;
      {
        v14 = (float)*(v11 - 2);
        __asm__ volatile("" ::"w"(v14));
      }
      {
        v15 = *(v11 - 1);
        __asm__ volatile("" ::"r"(v15));
      }
      *(v13 - 4) = (float)*(v11 - 3);
      *(v13 - 3) = v14;
      v16 = (float)v15;
      v17 = (float)*v11;
      {
        v18 = v11[1];
        __asm__ volatile("" ::"r"(v18));
      }
      *(v13 - 2) = v16;
      *(v13 - 1) = v17;
      v19 = (float)v18;
      {
        v20 = (float)v11[2];
        __asm__ volatile("" ::"w"(v20));
      }
      {
        v21 = v11[3];
        __asm__ volatile("" ::"r"(v21));
      }
      *v13 = v19;
      v13[1] = v20;
      v22 = (float)v21;
      {
        v23 = v11[4];
        __asm__ volatile("" ::"r"(v23));
      }
      v11 += 8;
      v13[2] = v22;
      v13[3] = (float)v23;
      v13 += 8;
    } while (-(v5 & 0x7FFFFFF8) != v12);
    v10 = -v12;
  }
  v24 = (unsigned int)(3 * v5);
  if ((v5 & 7) != 0) {
    v25 = (char*)(v7 + v10);
    v26 = (float*)v357 + v10;
    do {
      {
        v27 = *v25++;
        __asm__ volatile("" ::"r"(v27));
      }
      --v8;
      *v26++ = (float)v27;
    } while (v8 != 0);
  }
  {
    v28 = (char*)result[1];
    __asm__ volatile("" ::"r"(v28));
  }
  memset(v356, 0, sizeof(v356));
  v355[0] = 0;
  v355[1] = 0;
  if (v6 >= 1) {
    v29 = 0;
    v30 = v28;
    while (1) {
      {
        v31 = *((float*)v357 + v29);
        __asm__ volatile("" ::"w"(v31));
      }
      if ((unsigned int)v6 >= 8) {
        break;
      }
      v32 = 0;
      if ((v6 & 7) != 0) {
        goto LABEL_18;
      }
    LABEL_11:
      *((float*)v357 + v29++) = v31;
      ++v30;
      if (v29 == v5) {
        goto LABEL_21;
      }
    }
    v33 = 0;
    v34 = (float*)(a3 + 16);
    v35 = v30;
    do {
      v33 -= 8;
      v36 = (float)*v35;
      {
        v37 = &v35[v24];
        __asm__ volatile("" ::"r"(v37));
      }
      v35 += 8 * (unsigned int)(3 * v5);
      {
        v38 = *v37;
        __asm__ volatile("" ::"r"(v38));
      }
      {
        v39 = &v37[v24];
        __asm__ volatile("" ::"r"(v39));
      }
      {
        v40 = v31 + (float)(v36 * *(v34 - 4));
        __asm__ volatile("" ::"w"(v40));
      }
      v41 = (float)v38;
      {
        v42 = *v39;
        __asm__ volatile("" ::"r"(v42));
      }
      {
        v43 = &v39[v24];
        __asm__ volatile("" ::"r"(v43));
      }
      {
        v44 = v40 + (float)(v41 * *(v34 - 3));
        __asm__ volatile("" ::"w"(v44));
      }
      v45 = (float)v42;
      {
        v46 = *v43;
        __asm__ volatile("" ::"r"(v46));
      }
      {
        v47 = &v43[v24];
        __asm__ volatile("" ::"r"(v47));
      }
      {
        v48 = v44 + (float)(v45 * *(v34 - 2));
        __asm__ volatile("" ::"w"(v48));
      }
      v49 = (float)v46;
      {
        v50 = *v47;
        __asm__ volatile("" ::"r"(v50));
      }
      {
        v51 = &v47[v24];
        __asm__ volatile("" ::"r"(v51));
      }
      v52 = (float)((float)(v48 + (float)(v49 * *(v34 - 1))) +
                    (float)((float)v50 * *v34)) +
            (float)((float)*v51 * v34[1]);
      {
        v53 = v34[2];
        __asm__ volatile("" ::"w"(v53));
      }
      {
        v54 = v34[3];
        __asm__ volatile("" ::"w"(v54));
      }
      v34 += 8;
      {
        v31 = (float)(v52 + (float)((float)v51[v24] * v53)) +
              (float)((float)v51[v24 + v24] * v54);
        __asm__ volatile("" ::"w"(v31));
      }
    } while (-(__int64)(v6 & 0x7FFFFFF8) != v33);
    v32 = -v33;
    if ((v6 & 7) == 0) {
      goto LABEL_11;
    }
  LABEL_18:
    v55 = (float*)(a3 + 4 * v32);
    v56 = v24 * v32;
    v57 = v6 & 7;
    do {
      {
        v58 = v30[v56];
        __asm__ volatile("" ::"r"(v58));
      }
      {
        v59 = *v55++;
        __asm__ volatile("" ::"w"(v59));
      }
      v56 += v24;
      --v57;
      v31 = v31 + (float)((float)v58 * v59);
    } while (v57 != 0);
    goto LABEL_11;
  }
LABEL_21:
  {
    v60 = (char*)result[2];
    __asm__ volatile("" ::"r"(v60));
  }
  v61 = 0;
  v62 = v60;
  do {
    {
      v63 = *((float*)v357 + v61);
      __asm__ volatile("" ::"w"(v63));
    }
    if ((unsigned int)v5 < 8) {
      v64 = 0;
      if ((v5 & 7) == 0) {
        goto LABEL_22;
      }
    LABEL_29:
      v87 = (float*)(a2 + 4 * v64);
      v88 = v24 * v64;
      v89 = v5 & 7;
      do {
        {
          v90 = v62[v88];
          __asm__ volatile("" ::"r"(v90));
        }
        {
          v91 = *v87++;
          __asm__ volatile("" ::"w"(v91));
        }
        v88 += v24;
        --v89;
        v63 = v63 + (float)((float)v90 * v91);
      } while (v89 != 0);
      goto LABEL_22;
    }
    v65 = 0;
    v66 = (float*)(a2 + 16);
    v67 = v62;
    do {
      v65 -= 8;
      v68 = (float)*v67;
      {
        v69 = &v67[v24];
        __asm__ volatile("" ::"r"(v69));
      }
      v67 += 8 * (unsigned int)(3 * v5);
      {
        v70 = *v69;
        __asm__ volatile("" ::"r"(v70));
      }
      {
        v71 = &v69[v24];
        __asm__ volatile("" ::"r"(v71));
      }
      {
        v72 = v63 + (float)(v68 * *(v66 - 4));
        __asm__ volatile("" ::"w"(v72));
      }
      v73 = (float)v70;
      {
        v74 = *v71;
        __asm__ volatile("" ::"r"(v74));
      }
      {
        v75 = &v71[v24];
        __asm__ volatile("" ::"r"(v75));
      }
      {
        v76 = v72 + (float)(v73 * *(v66 - 3));
        __asm__ volatile("" ::"w"(v76));
      }
      v77 = (float)v74;
      {
        v78 = *v75;
        __asm__ volatile("" ::"r"(v78));
      }
      {
        v79 = &v75[v24];
        __asm__ volatile("" ::"r"(v79));
      }
      {
        v80 = v76 + (float)(v77 * *(v66 - 2));
        __asm__ volatile("" ::"w"(v80));
      }
      v81 = (float)v78;
      {
        v82 = *v79;
        __asm__ volatile("" ::"r"(v82));
      }
      {
        v83 = &v79[v24];
        __asm__ volatile("" ::"r"(v83));
      }
      v84 = (float)((float)(v80 + (float)(v81 * *(v66 - 1))) +
                    (float)((float)v82 * *v66)) +
            (float)((float)*v83 * v66[1]);
      {
        v85 = v66[2];
        __asm__ volatile("" ::"w"(v85));
      }
      {
        v86 = v66[3];
        __asm__ volatile("" ::"w"(v86));
      }
      v66 += 8;
      {
        v63 = (float)(v84 + (float)((float)v83[v24] * v85)) +
              (float)((float)v83[v24 + v24] * v86);
        __asm__ volatile("" ::"w"(v63));
      }
    } while (-(v5 & 0x7FFFFFF8) != v65);
    v64 = -v65;
    if ((v5 & 7) != 0) {
      goto LABEL_29;
    }
  LABEL_22:
    *((float*)v357 + v61++) = v63;
    ++v62;
  } while (v61 != v5);
  v92 = 0;
  if (v5 != 1) {
    v93 = (float*)v357 + 1;
    do {
      v94 = 0x1.0000000000000p+0f;
      {
        v95 =
            (float)(*(v93 - 1) * 0x1.0000000000000p-7f) * 0x1.0000000000000p-1f;
        __asm__ volatile("" ::"w"(v95));
      }
      if (v95 < 0x1.0000000000000p+3f) {
        v94 = -0x1.0000000000000p+0f;
        if (v95 > -0x1.0000000000000p+3f) {
          v96 = v95 < 0x0.0p+0f;
          if (v95 < 0x0.0p+0f) {
            v95 = -v95;
          }
          v97 = (float)(v95 * 0x1.9000000000000p+4f) + 0x1.0000000000000p-1f;
          v98 = floorf(v97);
          v99 = vcvtms_s32_f32(v97);
          if (v96) {
            v94 = -(
                float)(MovieData_a7d90[v99] +
                       (float)((float)((float)(v95 +
                                               (float)((float)(int)v98 *
                                                       -0x1.47ae140000000p-5f)) *
                                       (float)(0x1.0000000000000p+0f -
                                               (float)(MovieData_a7d90[v99] *
                                                       MovieData_a7d90[v99]))) *
                               (float)(0x1.0000000000000p+0f -
                                       (float)(MovieData_a7d90[v99] *
                                               (float)(v95 +
                                                       (float)((float)(int)v98 *
                                                               -0x1.47ae140000000p-5f))))));
          }
          else {
            v94 =
                MovieData_a7d90[v99] +
                (float)((float)((float)(v95 + (float)((float)(int)v98 *
                                                      -0x1.47ae140000000p-5f)) *
                                (float)(0x1.0000000000000p+0f -
                                        (float)(MovieData_a7d90[v99] *
                                                MovieData_a7d90[v99]))) *
                        (float)(0x1.0000000000000p+0f -
                                (float)(MovieData_a7d90[v99] *
                                        (float)(v95 +
                                                (float)((float)(int)v98 *
                                                        -0x1.47ae140000000p-5f)))));
          }
        }
      }
      v100 = (float)(v94 * 0x1.0000000000000p-1f) + 0x1.0000000000000p-1f;
      v101 = 0x1.0000000000000p+0f;
      *(v93 - 1) = v100;
      {
        v102 = (float)(*v93 * 0x1.0000000000000p-7f) * 0x1.0000000000000p-1f;
        __asm__ volatile("" ::"w"(v102));
      }
      if (v102 < 0x1.0000000000000p+3f) {
        v101 = -0x1.0000000000000p+0f;
        if (v102 > -0x1.0000000000000p+3f) {
          v103 = v102 < 0x0.0p+0f;
          if (v102 < 0x0.0p+0f) {
            v102 = -v102;
          }
          v104 = (float)(v102 * 0x1.9000000000000p+4f) + 0x1.0000000000000p-1f;
          v105 = floorf(v104);
          v106 = vcvtms_s32_f32(v104);
          if (v103) {
            v101 = -(
                float)(MovieData_a7d90[v106] +
                       (float)((float)((float)(v102 +
                                               (float)((float)(int)v105 *
                                                       -0x1.47ae140000000p-5f)) *
                                       (float)(0x1.0000000000000p+0f -
                                               (float)(MovieData_a7d90[v106] *
                                                       MovieData_a7d90
                                                           [v106]))) *
                               (float)(0x1.0000000000000p+0f -
                                       (float)(MovieData_a7d90[v106] *
                                               (float)(v102 +
                                                       (float)((float)(int)
                                                                   v105 *
                                                               -0x1.47ae140000000p-5f))))));
          }
          else {
            v101 =
                MovieData_a7d90[v106] +
                (float)((float)((float)(v102 +
                                        (float)((float)(int)v105 *
                                                -0x1.47ae140000000p-5f)) *
                                (float)(0x1.0000000000000p+0f -
                                        (float)(MovieData_a7d90[v106] *
                                                MovieData_a7d90[v106]))) *
                        (float)(0x1.0000000000000p+0f -
                                (float)(MovieData_a7d90[v106] *
                                        (float)(v102 +
                                                (float)((float)(int)v105 *
                                                        -0x1.47ae140000000p-5f)))));
          }
        }
      }
      v92 += 2LL;
      *v93 = (float)(v101 * 0x1.0000000000000p-1f) + 0x1.0000000000000p-1f;
      v93 += 2;
    } while ((v5 & 0x7FFFFFFE) != v92);
  }
  if ((v5 & 1) != 0) {
    v107 = 0x1.0000000000000p+0f;
    {
      v108 = (float)(*(float*)&v357[v92 / 2] * 0x1.0000000000000p-7f) *
             0x1.0000000000000p-1f;
      __asm__ volatile("" ::"w"(v108));
    }
    if (v108 < 0x1.0000000000000p+3f) {
      v107 = -0x1.0000000000000p+0f;
      if (v108 > -0x1.0000000000000p+3f) {
        v109 = v108 < 0x0.0p+0f;
        if (v108 < 0x0.0p+0f) {
          v108 = -v108;
        }
        v110 = (float)(v108 * 0x1.9000000000000p+4f) + 0x1.0000000000000p-1f;
        v111 =
            v108 + (float)((float)(int)floorf(v110) * -0x1.47ae140000000p-5f);
        v112 = MovieData_a7d90[vcvtms_s32_f32(v110)];
        if (v109) {
          v107 =
              -(float)(v112 +
                       (float)((float)(v111 * (float)(0x1.0000000000000p+0f -
                                                      (float)(v112 * v112))) *
                               (float)(0x1.0000000000000p+0f -
                                       (float)(v112 * v111))));
        }
        else {
          v107 = v112 +
                 (float)((float)(v111 * (float)(0x1.0000000000000p+0f -
                                                (float)(v112 * v112))) *
                         (float)(0x1.0000000000000p+0f - (float)(v112 * v111)));
        }
      }
    }
    *(float*)&v357[v92 / 2] =
        (float)(v107 * 0x1.0000000000000p-1f) + 0x1.0000000000000p-1f;
  }
  {
    v113 = *result;
    __asm__ volatile("" ::"r"(v113));
  }
  v114 = v5 & 7;
  if ((unsigned int)v5 >= 8) {
    v116 = 0;
    v117 = (char*)(v5 + v113 + 3);
    v118 = (float*)v356;
    do {
      v116 -= 8;
      {
        v119 = (float)*(v117 - 2);
        __asm__ volatile("" ::"w"(v119));
      }
      {
        v120 = *(v117 - 1);
        __asm__ volatile("" ::"r"(v120));
      }
      *(v118 - 4) = (float)*(v117 - 3);
      *(v118 - 3) = v119;
      v121 = (float)v120;
      v122 = (float)*v117;
      {
        v123 = v117[1];
        __asm__ volatile("" ::"r"(v123));
      }
      *(v118 - 2) = v121;
      *(v118 - 1) = v122;
      v124 = (float)v123;
      {
        v125 = (float)v117[2];
        __asm__ volatile("" ::"w"(v125));
      }
      {
        v126 = v117[3];
        __asm__ volatile("" ::"r"(v126));
      }
      *v118 = v124;
      v118[1] = v125;
      v127 = (float)v126;
      {
        v128 = v117[4];
        __asm__ volatile("" ::"r"(v128));
      }
      v117 += 8;
      v118[2] = v127;
      v118[3] = (float)v128;
      v118 += 8;
    } while (-(v5 & 0x7FFFFFF8) != v116);
    v115 = -v116;
    if ((v5 & 7) != 0) {
      goto LABEL_64;
    }
  }
  else {
    v115 = 0;
    if ((v5 & 7) == 0) {
      goto LABEL_66;
    }
  LABEL_64:
    v129 = (float*)v355 + v115;
    v130 = (char*)(v113 + v115 + v5);
    do {
      {
        v131 = *v130++;
        __asm__ volatile("" ::"r"(v131));
      }
      --v114;
      *v129++ = (float)v131;
    } while (v114 != 0);
  }
LABEL_66:
  if (v6 >= 1) {
    {
      v132 = &v28[v5];
      __asm__ volatile("" ::"r"(v132));
    }
    v133 = 0;
    while (1) {
      {
        v134 = *((float*)v355 + v133);
        __asm__ volatile("" ::"w"(v134));
      }
      if ((unsigned int)v6 >= 8) {
        break;
      }
      v135 = 0;
      if ((v6 & 7) != 0) {
        goto LABEL_75;
      }
    LABEL_68:
      *((float*)v355 + v133++) = v134;
      ++v132;
      if (v133 == v5) {
        goto LABEL_78;
      }
    }
    v136 = 0;
    v137 = (float*)(a3 + 16);
    v138 = v132;
    do {
      v136 -= 8;
      v139 = (float)*v138;
      {
        v140 = &v138[v24];
        __asm__ volatile("" ::"r"(v140));
      }
      v138 += 8 * (unsigned int)(3 * v5);
      {
        v141 = *v140;
        __asm__ volatile("" ::"r"(v141));
      }
      {
        v142 = &v140[v24];
        __asm__ volatile("" ::"r"(v142));
      }
      {
        v143 = v134 + (float)(v139 * *(v137 - 4));
        __asm__ volatile("" ::"w"(v143));
      }
      v144 = (float)v141;
      {
        v145 = *v142;
        __asm__ volatile("" ::"r"(v145));
      }
      {
        v146 = &v142[v24];
        __asm__ volatile("" ::"r"(v146));
      }
      {
        v147 = v143 + (float)(v144 * *(v137 - 3));
        __asm__ volatile("" ::"w"(v147));
      }
      v148 = (float)v145;
      {
        v149 = *v146;
        __asm__ volatile("" ::"r"(v149));
      }
      {
        v150 = &v146[v24];
        __asm__ volatile("" ::"r"(v150));
      }
      {
        v151 = v147 + (float)(v148 * *(v137 - 2));
        __asm__ volatile("" ::"w"(v151));
      }
      v152 = (float)v149;
      {
        v153 = *v150;
        __asm__ volatile("" ::"r"(v153));
      }
      {
        v154 = &v150[v24];
        __asm__ volatile("" ::"r"(v154));
      }
      v155 = (float)((float)(v151 + (float)(v152 * *(v137 - 1))) +
                     (float)((float)v153 * *v137)) +
             (float)((float)*v154 * v137[1]);
      {
        v156 = v137[2];
        __asm__ volatile("" ::"w"(v156));
      }
      {
        v157 = v137[3];
        __asm__ volatile("" ::"w"(v157));
      }
      v137 += 8;
      {
        v134 = (float)(v155 + (float)((float)v154[v24] * v156)) +
               (float)((float)v154[v24 + v24] * v157);
        __asm__ volatile("" ::"w"(v134));
      }
    } while (-(__int64)(v6 & 0x7FFFFFF8) != v136);
    v135 = -v136;
    if ((v6 & 7) == 0) {
      goto LABEL_68;
    }
  LABEL_75:
    v158 = (float*)(a3 + 4 * v135);
    v159 = v24 * v135;
    v160 = v6 & 7;
    do {
      {
        v161 = v132[v159];
        __asm__ volatile("" ::"r"(v161));
      }
      {
        v162 = *v158++;
        __asm__ volatile("" ::"w"(v162));
      }
      v159 += v24;
      --v160;
      v134 = v134 + (float)((float)v161 * v162);
    } while (v160 != 0);
    goto LABEL_68;
  }
LABEL_78:
  {
    v163 = &v60[v5];
    __asm__ volatile("" ::"r"(v163));
  }
  v164 = 0;
  memset(v359, 0, sizeof(v359));
  v358[14] = 0;
  v358[15] = 0;
  v353[0] = 0;
  v353[1] = 0;
  memset(v354, 0, sizeof(v354));
  while (2) {
    {
      v165 = *((float*)v355 + v164);
      __asm__ volatile("" ::"w"(v165));
    }
    if ((unsigned int)v5 >= 8) {
      v167 = 0;
      v168 = (float*)(a2 + 16);
      v169 = v163;
      do {
        v167 -= 8;
        v170 = (float)*v169;
        {
          v171 = &v169[v24];
          __asm__ volatile("" ::"r"(v171));
        }
        v169 += 8 * (unsigned int)(3 * v5);
        {
          v172 = *v171;
          __asm__ volatile("" ::"r"(v172));
        }
        {
          v173 = &v171[v24];
          __asm__ volatile("" ::"r"(v173));
        }
        {
          v174 = v165 + (float)(v170 * *(v168 - 4));
          __asm__ volatile("" ::"w"(v174));
        }
        v175 = (float)v172;
        {
          v176 = *v173;
          __asm__ volatile("" ::"r"(v176));
        }
        {
          v177 = &v173[v24];
          __asm__ volatile("" ::"r"(v177));
        }
        {
          v178 = v174 + (float)(v175 * *(v168 - 3));
          __asm__ volatile("" ::"w"(v178));
        }
        v179 = (float)v176;
        {
          v180 = *v177;
          __asm__ volatile("" ::"r"(v180));
        }
        {
          v181 = &v177[v24];
          __asm__ volatile("" ::"r"(v181));
        }
        {
          v182 = v178 + (float)(v179 * *(v168 - 2));
          __asm__ volatile("" ::"w"(v182));
        }
        v183 = (float)v180;
        {
          v184 = *v181;
          __asm__ volatile("" ::"r"(v184));
        }
        {
          v185 = &v181[v24];
          __asm__ volatile("" ::"r"(v185));
        }
        v186 = (float)((float)(v182 + (float)(v183 * *(v168 - 1))) +
                       (float)((float)v184 * *v168)) +
               (float)((float)*v185 * v168[1]);
        {
          v187 = v168[2];
          __asm__ volatile("" ::"w"(v187));
        }
        {
          v188 = v168[3];
          __asm__ volatile("" ::"w"(v188));
        }
        v168 += 8;
        {
          v165 = (float)(v186 + (float)((float)v185[v24] * v187)) +
                 (float)((float)v185[v24 + v24] * v188);
          __asm__ volatile("" ::"w"(v165));
        }
      } while (-(v5 & 0x7FFFFFF8) != v167);
      v166 = -v167;
      if ((v5 & 7) != 0) {
        goto LABEL_86;
      }
    }
    else {
      v166 = 0;
      if ((v5 & 7) == 0) {
        goto LABEL_79;
      }
    LABEL_86:
      v189 = (float*)(a2 + 4 * v166);
      v190 = v24 * v166;
      v191 = v5 & 7;
      do {
        {
          v192 = v163[v190];
          __asm__ volatile("" ::"r"(v192));
        }
        {
          v193 = *v189++;
          __asm__ volatile("" ::"w"(v193));
        }
        v190 += v24;
        --v191;
        v165 = v165 + (float)((float)v192 * v193);
      } while (v191 != 0);
    }
  LABEL_79:
    *((float*)v355 + v164++) = v165;
    ++v163;
    if (v164 != v5) {
      continue;
    }
    break;
  }
  v194 = 0;
  if (v5 != 1) {
    v195 = (float*)v355 + 1;
    do {
      v196 = 0x1.0000000000000p+0f;
      {
        v197 = (float)(*(v195 - 1) * 0x1.0000000000000p-7f) *
               0x1.0000000000000p-1f;
        __asm__ volatile("" ::"w"(v197));
      }
      if (v197 < 0x1.0000000000000p+3f) {
        v196 = -0x1.0000000000000p+0f;
        if (v197 > -0x1.0000000000000p+3f) {
          v198 = v197 < 0x0.0p+0f;
          if (v197 < 0x0.0p+0f) {
            v197 = -v197;
          }
          v199 = (float)(v197 * 0x1.9000000000000p+4f) + 0x1.0000000000000p-1f;
          v200 = floorf(v199);
          v201 = vcvtms_s32_f32(v199);
          if (v198) {
            v196 = -(
                float)(MovieData_a7d90[v201] +
                       (float)((float)((float)(v197 +
                                               (float)((float)(int)v200 *
                                                       -0x1.47ae140000000p-5f)) *
                                       (float)(0x1.0000000000000p+0f -
                                               (float)(MovieData_a7d90[v201] *
                                                       MovieData_a7d90
                                                           [v201]))) *
                               (float)(0x1.0000000000000p+0f -
                                       (float)(MovieData_a7d90[v201] *
                                               (float)(v197 +
                                                       (float)((float)(int)
                                                                   v200 *
                                                               -0x1.47ae140000000p-5f))))));
          }
          else {
            v196 =
                MovieData_a7d90[v201] +
                (float)((float)((float)(v197 +
                                        (float)((float)(int)v200 *
                                                -0x1.47ae140000000p-5f)) *
                                (float)(0x1.0000000000000p+0f -
                                        (float)(MovieData_a7d90[v201] *
                                                MovieData_a7d90[v201]))) *
                        (float)(0x1.0000000000000p+0f -
                                (float)(MovieData_a7d90[v201] *
                                        (float)(v197 +
                                                (float)((float)(int)v200 *
                                                        -0x1.47ae140000000p-5f)))));
          }
        }
      }
      v202 = (float)(v196 * 0x1.0000000000000p-1f) + 0x1.0000000000000p-1f;
      v203 = 0x1.0000000000000p+0f;
      *(v195 - 1) = v202;
      {
        v204 = (float)(*v195 * 0x1.0000000000000p-7f) * 0x1.0000000000000p-1f;
        __asm__ volatile("" ::"w"(v204));
      }
      if (v204 < 0x1.0000000000000p+3f) {
        v203 = -0x1.0000000000000p+0f;
        if (v204 > -0x1.0000000000000p+3f) {
          v205 = v204 < 0x0.0p+0f;
          if (v204 < 0x0.0p+0f) {
            v204 = -v204;
          }
          v206 = (float)(v204 * 0x1.9000000000000p+4f) + 0x1.0000000000000p-1f;
          v207 = floorf(v206);
          v208 = vcvtms_s32_f32(v206);
          if (v205) {
            v203 = -(
                float)(MovieData_a7d90[v208] +
                       (float)((float)((float)(v204 +
                                               (float)((float)(int)v207 *
                                                       -0x1.47ae140000000p-5f)) *
                                       (float)(0x1.0000000000000p+0f -
                                               (float)(MovieData_a7d90[v208] *
                                                       MovieData_a7d90
                                                           [v208]))) *
                               (float)(0x1.0000000000000p+0f -
                                       (float)(MovieData_a7d90[v208] *
                                               (float)(v204 +
                                                       (float)((float)(int)
                                                                   v207 *
                                                               -0x1.47ae140000000p-5f))))));
          }
          else {
            v203 =
                MovieData_a7d90[v208] +
                (float)((float)((float)(v204 +
                                        (float)((float)(int)v207 *
                                                -0x1.47ae140000000p-5f)) *
                                (float)(0x1.0000000000000p+0f -
                                        (float)(MovieData_a7d90[v208] *
                                                MovieData_a7d90[v208]))) *
                        (float)(0x1.0000000000000p+0f -
                                (float)(MovieData_a7d90[v208] *
                                        (float)(v204 +
                                                (float)((float)(int)v207 *
                                                        -0x1.47ae140000000p-5f)))));
          }
        }
      }
      v194 += 2LL;
      *v195 = (float)(v203 * 0x1.0000000000000p-1f) + 0x1.0000000000000p-1f;
      v195 += 2;
    } while ((v5 & 0x7FFFFFFE) != v194);
  }
  if ((v5 & 1) != 0) {
    v209 = 0x1.0000000000000p+0f;
    {
      v210 = (float)(*(float*)&v355[v194 / 2] * 0x1.0000000000000p-7f) *
             0x1.0000000000000p-1f;
      __asm__ volatile("" ::"w"(v210));
    }
    if (v210 < 0x1.0000000000000p+3f) {
      v209 = -0x1.0000000000000p+0f;
      if (v210 > -0x1.0000000000000p+3f) {
        v211 = v210 < 0x0.0p+0f;
        if (v210 < 0x0.0p+0f) {
          v210 = -v210;
        }
        v212 = (float)(v210 * 0x1.9000000000000p+4f) + 0x1.0000000000000p-1f;
        v213 =
            v210 + (float)((float)(int)floorf(v212) * -0x1.47ae140000000p-5f);
        v214 = MovieData_a7d90[vcvtms_s32_f32(v212)];
        if (v211) {
          v209 =
              -(float)(v214 +
                       (float)((float)(v213 * (float)(0x1.0000000000000p+0f -
                                                      (float)(v214 * v214))) *
                               (float)(0x1.0000000000000p+0f -
                                       (float)(v214 * v213))));
        }
        else {
          v209 = v214 +
                 (float)((float)(v213 * (float)(0x1.0000000000000p+0f -
                                                (float)(v214 * v214))) *
                         (float)(0x1.0000000000000p+0f - (float)(v214 * v213)));
        }
      }
    }
    *(float*)&v355[v194 / 2] =
        (float)(v209 * 0x1.0000000000000p-1f) + 0x1.0000000000000p-1f;
  }
  {
    v215 = *result;
    __asm__ volatile("" ::"r"(v215));
  }
  v216 = (unsigned int)(2 * v5);
  v217 = v5 & 7;
  if ((unsigned int)v5 >= 8) {
    v219 = 0;
    v220 = (char*)(v216 + v215 + 3);
    v221 = (float*)v354;
    do {
      v219 -= 8;
      {
        v222 = (float)*(v220 - 2);
        __asm__ volatile("" ::"w"(v222));
      }
      {
        v223 = *(v220 - 1);
        __asm__ volatile("" ::"r"(v223));
      }
      *(v221 - 4) = (float)*(v220 - 3);
      *(v221 - 3) = v222;
      v224 = (float)v223;
      v225 = (float)*v220;
      {
        v226 = v220[1];
        __asm__ volatile("" ::"r"(v226));
      }
      *(v221 - 2) = v224;
      *(v221 - 1) = v225;
      v227 = (float)v226;
      {
        v228 = (float)v220[2];
        __asm__ volatile("" ::"w"(v228));
      }
      {
        v229 = v220[3];
        __asm__ volatile("" ::"r"(v229));
      }
      *v221 = v227;
      v221[1] = v228;
      v230 = (float)v229;
      {
        v231 = v220[4];
        __asm__ volatile("" ::"r"(v231));
      }
      v220 += 8;
      v221[2] = v230;
      v221[3] = (float)v231;
      v221 += 8;
    } while (-(v5 & 0x7FFFFFF8) != v219);
    v218 = -v219;
    if ((v5 & 7) != 0) {
      goto LABEL_121;
    }
  }
  else {
    v218 = 0;
    if ((v5 & 7) == 0) {
      goto LABEL_123;
    }
  LABEL_121:
    v232 = (float*)v353 + v218;
    v233 = (char*)(v215 + v218 + v216);
    do {
      {
        v234 = *v233++;
        __asm__ volatile("" ::"r"(v234));
      }
      --v217;
      *v232++ = (float)v234;
    } while (v217 != 0);
  }
LABEL_123:
  v235 = v5 & 7;
  if ((unsigned int)v5 >= 8) {
    v237 = (float*)(a2 + 16);
    v238 = 0;
    v239 = (float*)v359;
    v240 = (float*)v356;
    do {
      v238 -= 8;
      {
        v241 = *(v237 - 3) * *(v240 - 3);
        __asm__ volatile("" ::"w"(v241));
      }
      {
        v242 = *(v237 - 2) * *(v240 - 2);
        __asm__ volatile("" ::"w"(v242));
      }
      {
        v243 = *v237;
        __asm__ volatile("" ::"w"(v243));
      }
      {
        v244 = v237[1];
        __asm__ volatile("" ::"w"(v244));
      }
      {
        v245 = *(v237 - 1) * *(v240 - 1);
        __asm__ volatile("" ::"w"(v245));
      }
      {
        v246 = *v240;
        __asm__ volatile("" ::"w"(v246));
      }
      {
        v247 = v240[1];
        __asm__ volatile("" ::"w"(v247));
      }
      *(v239 - 4) = *(v237 - 4) * *(v240 - 4);
      *(v239 - 3) = v241;
      {
        v248 = v237[2];
        __asm__ volatile("" ::"w"(v248));
      }
      {
        v249 = v237[3];
        __asm__ volatile("" ::"w"(v249));
      }
      *(v239 - 2) = v242;
      *(v239 - 1) = v245;
      v237 += 8;
      *v239 = v243 * v246;
      v239[1] = v244 * v247;
      {
        v250 = v240[2];
        __asm__ volatile("" ::"w"(v250));
      }
      {
        v251 = v240[3];
        __asm__ volatile("" ::"w"(v251));
      }
      v240 += 8;
      v239[2] = v248 * v250;
      v239[3] = v249 * v251;
      v239 += 8;
    } while (-(v5 & 0x7FFFFFF8) != v238);
    v236 = -v238;
    if ((v5 & 7) != 0) {
      goto LABEL_129;
    }
  }
  else {
    v236 = 0;
    if ((v5 & 7) == 0) {
      goto LABEL_131;
    }
  LABEL_129:
    {
      v252 = (float*)&v358[14] + v236;
      __asm__ volatile("" ::"r"(v252));
    }
    v253 = (float*)v355 + v236;
    v254 = (float*)(a2 + 4 * v236);
    do {
      {
        v255 = *v254++;
        __asm__ volatile("" ::"w"(v255));
      }
      v256 = v255;
      {
        v257 = *v253++;
        __asm__ volatile("" ::"w"(v257));
      }
      --v235;
      *v252++ = v256 * v257;
    } while (v235 != 0);
  }
LABEL_131:
  v258 = (unsigned int)(2 * v5);
  if (v6 >= 1) {
    {
      v259 = &v28[v258];
      __asm__ volatile("" ::"r"(v259));
    }
    v260 = 0;
    while (1) {
      {
        v261 = *((float*)v353 + v260);
        __asm__ volatile("" ::"w"(v261));
      }
      if ((unsigned int)v6 >= 8) {
        break;
      }
      v262 = 0;
      if ((v6 & 7) != 0) {
        goto LABEL_140;
      }
    LABEL_133:
      *((float*)v353 + v260++) = v261;
      ++v259;
      if (v260 == v5) {
        goto LABEL_143;
      }
    }
    v263 = 0;
    v264 = (float*)(a3 + 16);
    v265 = v259;
    do {
      v263 -= 8;
      v266 = (float)*v265;
      {
        v267 = &v265[v24];
        __asm__ volatile("" ::"r"(v267));
      }
      v265 += 8 * (unsigned int)(3 * v5);
      {
        v268 = *v267;
        __asm__ volatile("" ::"r"(v268));
      }
      {
        v269 = &v267[v24];
        __asm__ volatile("" ::"r"(v269));
      }
      {
        v270 = v261 + (float)(v266 * *(v264 - 4));
        __asm__ volatile("" ::"w"(v270));
      }
      v271 = (float)v268;
      {
        v272 = *v269;
        __asm__ volatile("" ::"r"(v272));
      }
      {
        v273 = &v269[v24];
        __asm__ volatile("" ::"r"(v273));
      }
      {
        v274 = v270 + (float)(v271 * *(v264 - 3));
        __asm__ volatile("" ::"w"(v274));
      }
      v275 = (float)v272;
      {
        v276 = *v273;
        __asm__ volatile("" ::"r"(v276));
      }
      {
        v277 = &v273[v24];
        __asm__ volatile("" ::"r"(v277));
      }
      {
        v278 = v274 + (float)(v275 * *(v264 - 2));
        __asm__ volatile("" ::"w"(v278));
      }
      v279 = (float)v276;
      {
        v280 = *v277;
        __asm__ volatile("" ::"r"(v280));
      }
      {
        v281 = &v277[v24];
        __asm__ volatile("" ::"r"(v281));
      }
      v282 = (float)((float)(v278 + (float)(v279 * *(v264 - 1))) +
                     (float)((float)v280 * *v264)) +
             (float)((float)*v281 * v264[1]);
      {
        v283 = v264[2];
        __asm__ volatile("" ::"w"(v283));
      }
      {
        v284 = v264[3];
        __asm__ volatile("" ::"w"(v284));
      }
      v264 += 8;
      {
        v261 = (float)(v282 + (float)((float)v281[v24] * v283)) +
               (float)((float)v281[v24 + v24] * v284);
        __asm__ volatile("" ::"w"(v261));
      }
    } while (-(__int64)(v6 & 0x7FFFFFF8) != v263);
    v262 = -v263;
    if ((v6 & 7) == 0) {
      goto LABEL_133;
    }
  LABEL_140:
    v285 = (float*)(a3 + 4 * v262);
    v286 = v24 * v262;
    v287 = v6 & 7;
    do {
      {
        v288 = v259[v286];
        __asm__ volatile("" ::"r"(v288));
      }
      {
        v289 = *v285++;
        __asm__ volatile("" ::"w"(v289));
      }
      v286 += v24;
      --v287;
      v261 = v261 + (float)((float)v288 * v289);
    } while (v287 != 0);
    goto LABEL_133;
  }
LABEL_143:
  {
    v290 = &v60[v258];
    __asm__ volatile("" ::"r"(v290));
  }
  v291 = 0;
  while (2) {
    {
      v292 = *((float*)v353 + v291);
      __asm__ volatile("" ::"w"(v292));
    }
    if ((unsigned int)v5 >= 8) {
      v294 = 0;
      v295 = (float*)v359;
      v296 = v290;
      do {
        v294 -= 8;
        v297 = (float)*v296;
        {
          v298 = &v296[v24];
          __asm__ volatile("" ::"r"(v298));
        }
        v296 += 8 * (unsigned int)(3 * v5);
        {
          v299 = *v298;
          __asm__ volatile("" ::"r"(v299));
        }
        {
          v300 = &v298[v24];
          __asm__ volatile("" ::"r"(v300));
        }
        {
          v301 = v292 + (float)(v297 * *(v295 - 4));
          __asm__ volatile("" ::"w"(v301));
        }
        v302 = (float)v299;
        {
          v303 = *v300;
          __asm__ volatile("" ::"r"(v303));
        }
        {
          v304 = &v300[v24];
          __asm__ volatile("" ::"r"(v304));
        }
        {
          v305 = v301 + (float)(v302 * *(v295 - 3));
          __asm__ volatile("" ::"w"(v305));
        }
        v306 = (float)v303;
        {
          v307 = *v304;
          __asm__ volatile("" ::"r"(v307));
        }
        {
          v308 = &v304[v24];
          __asm__ volatile("" ::"r"(v308));
        }
        {
          v309 = v305 + (float)(v306 * *(v295 - 2));
          __asm__ volatile("" ::"w"(v309));
        }
        v310 = (float)v307;
        {
          v311 = *v308;
          __asm__ volatile("" ::"r"(v311));
        }
        {
          v312 = &v308[v24];
          __asm__ volatile("" ::"r"(v312));
        }
        v313 = (float)((float)(v309 + (float)(v310 * *(v295 - 1))) +
                       (float)((float)v311 * *v295)) +
               (float)((float)*v312 * v295[1]);
        {
          v314 = v295[2];
          __asm__ volatile("" ::"w"(v314));
        }
        {
          v315 = v295[3];
          __asm__ volatile("" ::"w"(v315));
        }
        v295 += 8;
        {
          v292 = (float)(v313 + (float)((float)v312[v24] * v314)) +
                 (float)((float)v312[v24 + v24] * v315);
          __asm__ volatile("" ::"w"(v292));
        }
      } while (-(v5 & 0x7FFFFFF8) != v294);
      v293 = -v294;
      if ((v5 & 7) != 0) {
        goto LABEL_151;
      }
    }
    else {
      v293 = 0;
      if ((v5 & 7) == 0) {
        goto LABEL_144;
      }
    LABEL_151:
      {
        v316 = (float*)&v358[14] + v293;
        __asm__ volatile("" ::"r"(v316));
      }
      v317 = v24 * v293;
      v318 = v5 & 7;
      do {
        {
          v319 = v290[v317];
          __asm__ volatile("" ::"r"(v319));
        }
        {
          v320 = *v316++;
          __asm__ volatile("" ::"w"(v320));
        }
        v317 += v24;
        --v318;
        v292 = v292 + (float)((float)v319 * v320);
      } while (v318 != 0);
    }
  LABEL_144:
    *((float*)v353 + v291++) = v292;
    ++v290;
    if (v291 != v5) {
      continue;
    }
    break;
  }
  v321 = 0;
  if (v5 != 1) {
    v322 = (float*)(a2 + 4);
    v323 = (float*)v357 + 1;
    v324 = (float*)v353 + 1;
    do {
      {
        v328 = *(v324 - 1) * 0x1.0000000000000p-7f;
        __asm__ volatile("" ::"w"(v328));
      }
      v329 = 0x1.0000000000000p+0f;
      if (v328 < 0x1.0000000000000p+3f) {
        v329 = -0x1.0000000000000p+0f;
        if (v328 > -0x1.0000000000000p+3f) {
          v330 = -v328;
          v331 = v328 < 0x0.0p+0f;
          if (v328 >= 0x0.0p+0f) {
            v330 = *(v324 - 1) * 0x1.0000000000000p-7f;
            __asm__ volatile("" ::"w"(v330));
          }
          v332 = (float)(v330 * 0x1.9000000000000p+4f) + 0x1.0000000000000p-1f;
          v333 = floorf(v332);
          v334 = vcvtms_s32_f32(v332);
          v335 =
              MovieData_a7d90[v334] +
              (float)((float)((float)(v330 + (float)((float)(int)v333 *
                                                     -0x1.47ae140000000p-5f)) *
                              (float)(0x1.0000000000000p+0f -
                                      (float)(MovieData_a7d90[v334] *
                                              MovieData_a7d90[v334]))) *
                      (float)(0x1.0000000000000p+0f -
                              (float)(MovieData_a7d90[v334] *
                                      (float)(v330 +
                                              (float)((float)(int)v333 *
                                                      -0x1.47ae140000000p-5f)))));
          v329 = -v335;
          if (!v331) {
            v329 = v335;
          }
        }
      }
      {
        v336 = *v324;
        __asm__ volatile("" ::"w"(v336));
      }
      *(v324 - 1) = (float)(PSEUDO_UNFUSED(
                        (float)(0x1.0000000000000p+0f - *(v323 - 1)) * v329)) +
                    (float)(*(v323 - 1) * *(v322 - 1));
      v337 = v336 * 0x1.0000000000000p-7f;
      v338 = 0x1.0000000000000p+0f;
      if (v337 < 0x1.0000000000000p+3f) {
        v338 = -0x1.0000000000000p+0f;
        if (v337 > -0x1.0000000000000p+3f) {
          v339 = -v337;
          v340 = v337 < 0x0.0p+0f;
          if (v337 >= 0x0.0p+0f) {
            v339 = v337;
          }
          v341 = (float)(v339 * 0x1.9000000000000p+4f) + 0x1.0000000000000p-1f;
          v342 = floorf(v341);
          v343 = vcvtms_s32_f32(v341);
          v344 =
              MovieData_a7d90[v343] +
              (float)((float)((float)(v339 + (float)((float)(int)v342 *
                                                     -0x1.47ae140000000p-5f)) *
                              (float)(0x1.0000000000000p+0f -
                                      (float)(MovieData_a7d90[v343] *
                                              MovieData_a7d90[v343]))) *
                      (float)(0x1.0000000000000p+0f -
                              (float)(MovieData_a7d90[v343] *
                                      (float)(v339 +
                                              (float)((float)(int)v342 *
                                                      -0x1.47ae140000000p-5f)))));
          v338 = -v344;
          if (!v340) {
            v338 = v344;
          }
        }
      }
      {
        v325 = *v323;
        __asm__ volatile("" ::"w"(v325));
      }
      v323 += 2;
      v326 = v325;
      {
        v327 = *v322;
        __asm__ volatile("" ::"w"(v327));
      }
      v322 += 2;
      v321 -= 2;
      *v324 = (float)(PSEUDO_UNFUSED((float)(0x1.0000000000000p+0f - v326) *
                                     v338)) +
              (float)(v326 * v327);
      v324 += 2;
    } while (-(v5 & 0x7FFFFFFE) != v321);
    v321 = -v321;
  }
  if ((v5 & 1) != 0) {
    v345 = 0x1.0000000000000p+0f;
    {
      v346 = *((float*)v353 + v321) * 0x1.0000000000000p-7f;
      __asm__ volatile("" ::"w"(v346));
    }
    if (v346 < 0x1.0000000000000p+3f) {
      v345 = -0x1.0000000000000p+0f;
      if (v346 > -0x1.0000000000000p+3f) {
        v347 = -v346;
        v348 = v346 < 0x0.0p+0f;
        if (v346 >= 0x0.0p+0f) {
          v347 = *((float*)v353 + v321) * 0x1.0000000000000p-7f;
          __asm__ volatile("" ::"w"(v347));
        }
        v349 = (float)(v347 * 0x1.9000000000000p+4f) + 0x1.0000000000000p-1f;
        v350 =
            v347 + (float)((float)(int)floorf(v349) * -0x1.47ae140000000p-5f);
        v351 = MovieData_a7d90[vcvtms_s32_f32(v349)];
        v352 = v351 +
               (float)((float)(v350 * (float)(0x1.0000000000000p+0f -
                                              (float)(v351 * v351))) *
                       (float)(0x1.0000000000000p+0f - (float)(v351 * v350)));
        v345 = -v352;
        if (!v348) {
          v345 = v352;
        }
      }
    }
    *((float*)v353 + v321) =
        (float)(PSEUDO_UNFUSED(
            (float)(0x1.0000000000000p+0f - *((float*)v357 + v321)) * v345)) +
        (float)(*((float*)v357 + v321) * *(float*)(a2 + 4 * v321));
  }
  return (__int64*)memcpy_plt(a2, (__int64)v353, 4 * v5);
}

#pragma GCC visibility pop
