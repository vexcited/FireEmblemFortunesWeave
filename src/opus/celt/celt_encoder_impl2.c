#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* ec_enc_bit_logp(__int64* result, int, char);
__int64* ec_enc_bits(__int64* result, int, int);
__int64* ec_enc_icdf(__int64* result, int, __int64, char);
__int64* quant_energy_finalise(__int64* result, int, int, __int64, __int64,
                               __int64, __int64, int, __int64*, int);
__int64* quant_fine_energy(__int64* result, int, int, __int64, __int64, __int64,
                           __int64*, int);
__int64 MovieRoutine_314e0(__int64, __int64, int, __int64, unsigned int, int,
                           __int64, __int16, __int64, int, int, int, __int64,
                           int, int, int*, int, __int64, _DWORD*, __int64,
                           __int64);
__int64 MovieRoutine_3aa60(__int64, _WORD*, int, int);
__int64 MovieRoutine_3b720(__int64, __int64, int, int, _DWORD*);
__int64 MovieRoutine_3c380(__int64, int, unsigned int, int, _DWORD*,
                           unsigned int, int);
__int64 alloc_trim_analysis(__int64, __int64, __int64, int, char, int, int,
                            __int64, __int16*, __int16, int, __int16, int);
__int64 bands_20220(__int64 result, int, unsigned int);
__int64 celt_rcp(unsigned int);
__int64 comb_filter(__int64 result, __int64, int, int, int, unsigned __int16,
                    unsigned __int16, int, int, __int16*, unsigned int);
__int64 compute_band_energies(__int64 result, __int64, __int64, int, int, int);
__int64 compute_mdcts(__int64 result, int, __int64, __int64, int, int, int, int,
                      unsigned int);
__int64 ec_enc_done(__int64 result);
__int64 ec_enc_init(__int64 result, __int64, int);
__int64 ec_enc_shrink(__int64, unsigned int);
__int64 ec_enc_uint(__int64*, __int64, unsigned int);
__int64 ec_tell_frac(__int64);
__int64 hysteresis_decision(__int16, __int64, __int64, int, int);
__int64 init_caps(__int64 result, __int64, int, int);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 normalise_bands(__int64, __int64, __int64, __int64, int, int, int);
__int64 op_pvq_search_c(__int64 result, int, int, __int64, __int64, int);
__int64 opus_41040(char*, unsigned int, unsigned int, char*, __int64, int, int*,
                   _BOOL4*, int, unsigned int*, __int64, __int64, __int64, int,
                   int, __int64*, int, int, int);
__int64 quant_all_bands(unsigned int, __int64, int, __int64, __int64, __int64,
                        __int64, __int64, __int64, int, int, int, unsigned int,
                        __int64, int, int, __int64, unsigned int, unsigned int,
                        unsigned int*, int, int, int);
__int64 quant_coarse_energy(__int64, __int64, unsigned int, int, __int64,
                            __int64, unsigned int, __int64, __int64, int,
                            unsigned int, int, int, int*, int, int, int);
__int64 run_prefilter_alt1(_QWORD*, __int64, __int64, int, unsigned int, int,
                           _DWORD*, _WORD*, _DWORD*, int, int,
                           __int64) __asm__("run_prefilter");
__int64 spreading_decision(__int64, __int64, int*, int, int*, int*, int, int,
                           int, int, __int64);
__int64 tf_analysis_alt1(__int64, unsigned int, int, __int64, int, __int64, int,
                         unsigned int, __int16, int,
                         _DWORD*) __asm__("tf_analysis");
bool MovieRoutine_2ffe0(__int64, unsigned int, int, _WORD*, _DWORD*, int,
                        _DWORD*);
bool MovieRoutine_30f00(__int64, _WORD*, int, int, int);
extern _UNKNOWN MovieData_a24c2;
extern _UNKNOWN MovieData_a24c5;
extern _UNKNOWN MovieData_a24ca;
extern _UNKNOWN MovieData_a24f4;
extern _UNKNOWN MovieData_a251e;
extern char (*MovieData_c09d0)[34];
extern char MovieData_a231a[34];
__int16* celt_encoder_2b1e0(__int16* result, _DWORD* a2, int a3, int a4, int a5,
                            __int16* a6, int* a7, int a8);
__int64 celt_encode_with_ec(__int64 a1, _BYTE* a2, int a3, __int64 a4, int a5,
                            __int64 a6);
__int64 run_prefilter(_QWORD* a1, __int64 a2, __int64 a3, int a4, int a5,
                      int a6, _DWORD* a7, _WORD* a8, _DWORD* a9, int a10,
                      int a11, __int64 a12);
__int64 tf_analysis(__int64 a1, int a2, int a3, __int64 a4, int a5, __int64 a6,
                    int a7, unsigned int a8, __int16 a9, int a10, _DWORD* a11);

__int16* celt_encoder_2b1e0(__int16* result, _DWORD* a2, int a3, int a4, int a5,
                            __int16* a6, int* a7, int a8)
{
  int v8;
  int v9;
  __int64 v13;
  __int64 v14;
  int v15;
  __int16* v16;
  _DWORD* v17;
  int* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int16* v24;
  int* v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  _DWORD* v34;
  __int16* v35;
  int v36;
  __int16* v37;
  _DWORD* v38;
  _DWORD* v39;
  __int16* v40;
  int v41;
  __int16* v42;
  int v43;
  _DWORD* v44;
  __int16* v45;
  int v46;
  _DWORD* v47;
  __int16* v48;
  int v49;
  _DWORD* v50;
  __int16* v51;
  int v52;
  _DWORD* v53;
  __int16* v54;
  int v55;
  _DWORD* v56;
  _DWORD* v57;
  __int16* v58;
  int v59;
  __int64 v60;
  __int64 v61;
  int* v62;
  __int64 v63;
  int v64;
  int v65;
  int v66;
  int v67;
  _DWORD* v68;
  int v69;

  v8 = *a6;
  v9 = *a7;
  if (a8 != 0 || a5 != 1 || a6[1] != 0) {
    v15 = a3 / a5;
    if (a5 != 1) {
      v16 = result;
      v17 = a2;
      v18 = a7;
      memset_plt(a2, 0, 4LL * a3);
      result = v16;
      a2 = v17;
      a7 = v18;
    }
    if (v15 >= 1) {
      v19 = v15 & 7;
      v20 = a5;
      v21 = a4;
      if ((unsigned int)v15 >= 8) {
        v22 = 0;
        v37 = result;
        v38 = a2;
        do {
          v39 = &v38[a5];
          v22 += 8;
          *v38 = *v37;
          v40 = &v37[a4];
          v38 += 8 * a5;
          v37 += 8 * a4;
          v41 = *v40;
          v42 = &v40[v21];
          *v39 = v41;
          v43 = *v42;
          v44 = &v39[v20];
          v45 = &v42[v21];
          *v44 = v43;
          v46 = *v45;
          v47 = &v44[v20];
          v48 = &v45[v21];
          *v47 = v46;
          v49 = *v48;
          v50 = &v47[v20];
          v51 = &v48[v21];
          *v50 = v49;
          v52 = *v51;
          v53 = &v50[v20];
          v54 = &v51[v21];
          *v53 = v52;
          v55 = *v54;
          LODWORD(v54) = v54[a4];
          v56 = &v53[v20];
          *v56 = v55;
          v56[a5] = (_DWORD)v54;
        } while ((v15 & 0x7FFFFFF8) != v22);
      }
      else {
        v22 = 0;
      }
      if ((v15 & 7) != 0) {
        v57 = &a2[v22 * a5];
        v58 = &result[v22 * a4];
        do {
          v59 = *v58;
          v58 = (__int16*)((char*)v58 + v21 * 2);
          --v19;
          *v57 = v59;
          v57 = (_DWORD*)((char*)v57 + v20 * 4);
        } while (v19 != 0);
      }
    }
    if (a3 >= 1) {
      v60 = a3 & 3;
      if ((unsigned int)a3 >= 4) {
        v62 = a2 + 2;
        v63 = 0;
        do {
          v64 = *(v62 - 1);
          v63 -= 4;
          v65 = (__int16)*(v62 - 2);
          *(v62 - 2) = (v65 << 12) - v9;
          *(v62 - 1) = ((__int16)v64 << 12) - ((v65 * v8) >> 3);
          v66 = *v62;
          v67 = v62[1];
          *v62 = ((__int16)*v62 << 12) - (((__int16)v64 * v8) >> 3);
          v62[1] = ((__int16)v67 << 12) - (((__int16)v66 * v8) >> 3);
          v62 += 4;
          v9 = ((__int16)v67 * v8) >> 3;
        } while (-(__int64)(a3 & 0x7FFFFFFC) != v63);
        v61 = -v63;
        if ((a3 & 3) == 0) {
          goto LABEL_33;
        }
      }
      else {
        v61 = 0;
        if ((a3 & 3) == 0) {
          goto LABEL_33;
        }
      }
      v68 = &a2[v61];
      do {
        --v60;
        v69 = (__int16)*v68;
        *v68++ = (v69 << 12) - v9;
        v9 = (v69 * v8) >> 3;
      } while (v60 != 0);
    }
  }
  else {
    if (a3 < 1) {
      goto LABEL_33;
    }
    v13 = a3 & 3;
    if ((unsigned int)a3 < 4) {
      v14 = 0;
      if ((a3 & 3) == 0) {
        goto LABEL_33;
      }
      goto LABEL_16;
    }
    v23 = 0;
    v24 = result;
    v25 = a2 + 2;
    do {
      v26 = *v24;
      v27 = v24[a4];
      v28 = v24[2 * a4];
      v23 -= 4;
      v29 = v26 << 12;
      v30 = (v27 << 12) - ((v26 * v8) >> 3);
      v31 = (v28 << 12) - ((v27 * v8) >> 3);
      *(v25 - 2) = v29 - v9;
      *(v25 - 1) = v30;
      v32 = v28 * v8;
      v33 = v24[3 * a4];
      v24 += 4 * a4;
      *v25 = v31;
      v25[1] = (v33 << 12) - (v32 >> 3);
      v25 += 4;
      v9 = (v33 * v8) >> 3;
    } while (-(__int64)(a3 & 0x7FFFFFFC) != v23);
    v14 = -v23;
    if (v13 != 0) {
    LABEL_16:
      v34 = &a2[v14];
      v35 = &result[v14 * a4];
      do {
        v36 = *v35;
        v35 += a4;
        --v13;
        *v34++ = (v36 << 12) - v9;
        v9 = (v36 * v8) >> 3;
      } while (v13 != 0);
    }
  }
LABEL_33:
  *a7 = v9;
  return result;
}

__int64 celt_encode_with_ec(__int64 a1, _BYTE* a2, int a3, __int64 a4, int a5,
                            __int64 a6)
{

#pragma clang fp contract(off)
  char* v6;
  __int64 v7;
  char* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int16* v12;
  __int64 v13;
  __int64 v14;
  __int64 result;
  int v16;
  int v17;
  _QWORD* v18;
  _BYTE* v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  int v24;
  int v25;
  unsigned int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  char* v41;
  int v42;
  int v43;
  int v44;
  unsigned int v45;
  __int64 v46;
  __int64 v47;
  signed int v48;
  int v49;
  int v50;
  int v51;
  __int64 v52;
  char* v53;
  __int64 v54;
  int v55;
  int v56;
  _BOOL4 v57;
  __int16* v58;
  __int64 v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  __int16* v68;
  __int64 v69;
  int v70;
  int v71;
  int v72;
  __int64 v73;
  int v74;
  int v75;
  __int16* v76;
  __int64 v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  __int16* v86;
  int v87;
  int v88;
  int v89;
  int v90;
  unsigned int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  _QWORD* v96;
  __int64 v97;
  __int64 v98;
  int v99;
  int v100;
  __int64 v101;
  __int16* v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  __int16* v111;
  int v112;
  int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  unsigned int v118;
  char* v119;
  char* v120;
  __int64 v121;
  char* v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  _BYTE* v130;
  __int64 v131;
  int* v132;
  __int64 v133;
  __int64 v134;
  int v135;
  int v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  unsigned int v141;
  __int64 v142;
  __int64 v143;
  __int16* v144;
  _DWORD* v145;
  __int16* v146;
  _DWORD* v147;
  int v148;
  __int16* v149;
  int v150;
  _DWORD* v151;
  __int16* v152;
  int v153;
  _DWORD* v154;
  __int16* v155;
  int v156;
  _DWORD* v157;
  __int16* v158;
  int v159;
  _DWORD* v160;
  __int16* v161;
  int v162;
  _DWORD* v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  int v167;
  __int64 v168;
  __int64 v169;
  int* v170;
  int v171;
  int v172;
  int v173;
  int v174;
  int v175;
  int v176;
  int v177;
  int v178;
  int v179;
  int v180;
  int v181;
  __int64 v182;
  __int64 v183;
  int v184;
  __int64 v185;
  int* v186;
  __int16* v187;
  int v188;
  __int16* v189;
  int v190;
  __int16* v191;
  int v192;
  __int16* v193;
  __int16* v194;
  int v195;
  int v196;
  int v197;
  __int16* v198;
  int v199;
  __int16* v200;
  int v201;
  int v202;
  _DWORD* v203;
  __int64 v204;
  __int64 i;
  int v206;
  _QWORD* v207;
  int v208;
  int v210;
  int v211;
  __int64 v212;
  int v213;
  __int64 v214;
  int v215;
  int v216;
  double v217;
  _BOOL4 v218;
  __int64* v219;
  int v220;
  int v221;
  unsigned int v222;
  int v223;
  __int64* v224;
  int v225;
  int v226;
  bool v227;
  _BOOL4 v228;
  _BOOL4 v229;
  int v230;
  int v231;
  __int64 v232;
  __int64 v233;
  int* v234;
  int v235;
  int v236;
  int v237;
  __int64 v238;
  int v239;
  __int64 v240;
  _BYTE* v241;
  __int64* v242;
  _BYTE* v243;
  __int64 v244;
  int v245;
  _BYTE* v246;
  _QWORD* v247;
  __int64* v248;
  int v249;
  __int64 v250;
  unsigned int v251;
  __int64 v252;
  int v253;
  _BYTE* v254;
  _BYTE* v255;
  int v256;
  __int64 v257;
  _WORD* v258;
  __int64 v259;
  int v260;
  bool v261;
  int v262;
  __int64 v263;
  __int64 v264;
  unsigned __int64 v265;
  unsigned __int64 v266;
  unsigned __int64 v267;
  int* v268;
  int v269;
  int v270;
  int v271;
  int v272;
  int v273;
  int v274;
  int v275;
  int v276;
  int v277;
  int v278;
  int* v279;
  int v280;
  _BYTE* v281;
  __int64 v282;
  int v283;
  int v284;
  int v285;
  __int64 v286;
  __int64 v287;
  __int64 v288;
  int v289;
  int v290;
  int v291;
  __int64 v292;
  unsigned __int64 v293;
  int v294;
  __int16* v295;
  int v296;
  int v297;
  int v298;
  int v299;
  int v300;
  __int64 v301;
  __int64 v302;
  __int64 v303;
  int v304;
  int v305;
  int v306;
  unsigned __int16* v307;
  int v308;
  __int64 v309;
  int v310;
  __int64 v311;
  unsigned __int16* v312;
  unsigned __int16* v313;
  __int16 v314;
  int v315;
  unsigned __int16 v316;
  __int16 v317;
  int v318;
  __int16 v319;
  int v320;
  int v321;
  unsigned __int16 v322;
  int v323;
  int v324;
  int v325;
  int v326;
  int v327;
  __int16 v328;
  int v329;
  int v330;
  int v331;
  int v332;
  int v333;
  int v334;
  __int16 v335;
  int v336;
  int v337;
  int v338;
  int v339;
  int v340;
  __int16 v341;
  int v342;
  int v343;
  int v344;
  int v345;
  unsigned int v346;
  unsigned __int16 v347;
  __int16 v348;
  unsigned int v349;
  int v350;
  int v351;
  unsigned __int16* v352;
  unsigned __int16* v353;
  __int64 v354;
  unsigned __int16 v355;
  int v356;
  unsigned int v357;
  unsigned __int16 v358;
  __int16 v359;
  unsigned int v360;
  __int16 v361;
  int v362;
  int v363;
  int v364;
  int v365;
  __int16 v366;
  __int16* v367;
  int v368;
  __int64 v369;
  int v370;
  int v371;
  __int16 v372;
  int v373;
  int v374;
  unsigned __int64 v375;
  __int16 v376;
  __int64 v377;
  __int16 v378;
  __int64 v379;
  __int16* v380;
  __int16 v381;
  _WORD* v382;
  __int16 v383;
  int v384;
  __int16 v385;
  int v386;
  __int64 v387;
  __int16 v388;
  int v389;
  __int64 v390;
  __int64 v391;
  __int64 v392;
  __int16* v393;
  int v394;
  int v395;
  int v396;
  int v397;
  int v398;
  int v399;
  int v400;
  int v401;
  __int16* v402;
  int v403;
  __int16 v404;
  int v405;
  signed int v406;
  char v407;
  int v408;
  _BYTE* v409;
  __int64* v410;
  _BYTE* v411;
  _BYTE* v412;
  int v413;
  __int64 v414;
  __int64 v415;
  _WORD* v416;
  __int64 v417;
  __int64 v418;
  _WORD* v419;
  __int64 v420;
  char* v421;
  int v422;
  _BOOL4 v424;
  __int64 v425;
  int v426;
  unsigned __int64 v427;
  _DWORD* v428;
  __int64* v429;
  int v430;
  int v431;
  int v432;
  int v433;
  __int64 v434;
  unsigned int v435;
  int v436;
  int v437;
  _BYTE* v438;
  int v439;
  int v440;
  int v441;
  int v442;
  _QWORD* v443;
  int v444;
  _BYTE* v445;
  __int64 v446;
  int v447;
  __int64 v448;
  int v449;
  unsigned int j;
  int v451;
  _DWORD* v452;
  unsigned int v453;
  __int64 v454;
  __int64 v455;
  __int64 v456;
  __int64 v457;
  __int64 v458;
  __int64 v459;
  _QWORD* v460;
  __int64 v461;
  _DWORD* v462;
  int* v463;
  __int64 v464;
  int* v465;
  __int64 v466;
  _BYTE* v467;
  __int64 v468;
  __int64 v469;
  _BYTE* v470;
  __int64 v471;
  __int64 v472;
  __int64 v473;
  char* v474;
  __int64 v475;
  __int64 v476;
  __int64 v477;
  __int16 v478;
  int v479;
  __int64 v480;
  __int64 v481;
  char* v482;
  char* v483;
  _BYTE* v484;
  __int16 v485;
  int v486;
  _BYTE* v487;
  __int16 v488;
  int v489;
  __int16 v490;
  int v491;
  _BYTE* v492;
  __int16 v493;
  int v494;
  __int16 v495;
  int v496;
  _BYTE* v497;
  __int16 v498;
  int v499;
  __int16 v500;
  int v501;
  __int16 v502;
  int v503;
  unsigned int v504;
  __int64* v505;
  unsigned int v506;
  unsigned int v507;
  int v508;
  _BOOL4 v510;
  unsigned int v511;
  int v512;
  __int64* v513;
  int v514;
  __int64 v515;
  __int64 v516;
  __int64 v517;
  int v518;
  int* v519;
  int v520;
  int v521;
  __int64 v522;
  int v523;
  _QWORD* v524;
  __int64 v525;
  char* v526;
  int v527;
  int v528;
  signed int v529;
  int v530;
  __int64 v531;
  _QWORD* v532;
  __int64 v533;
  __int64 v534;
  int* v535;
  int v536;
  int v537;
  int v538;
  int v539;
  int v540;
  int v541;
  unsigned int v542;
  int v543;
  _BYTE* v544;
  int v545;
  int v546;
  _QWORD* v547;
  __int64 v548;
  int v549;
  int v550;
  int v551;
  __int64* v552;
  int v553;
  int v554;
  int v555;
  int v556;
  int v557;
  int v558;
  __int64* v559;
  int v560;
  int v561;
  __int64 v562;
  int v563;
  __int64 v564;
  int v565;
  int v566;
  _WORD* v567;
  int v568;
  __int64 v569;
  __int64 v570;
  __int64 v571;
  __int64 v572;
  __int64 v573;
  int v574;
  int v575;
  int v576;
  int v577;
  int v578;
  int v579;
  int v580;
  __int64 v581;
  char* v582;
  char* v583;
  int v584;
  int v585;
  int v586;
  int v587;
  int v588;
  int v589;
  int v590;
  int v591;
  int v592;
  int v593;
  int v594;
  int v595;
  int v596;
  int v597;
  int v598;
  int v599;
  int v600;
  int v601;
  int v602;
  int v603;
  int v604;
  int v605;
  int v606;
  int v607;
  int v608;
  int v609;
  int v610;
  int v611;
  int v612;
  int v613;
  int v614;
  int v615;
  int v616;
  int v617;
  int v618;
  int v619;
  int v620;
  int v621;
  int v622;
  int v623;
  int v624;
  __int64* v625;
  char* v626;
  int v627;
  int v628;
  __int64* v629;
  unsigned int v630;
  int v631;
  int v632;
  signed int v633;
  int v634;
  char v635;
  int v636;
  int v637;
  bool v638;
  unsigned int v639;
  unsigned int v640;
  unsigned int v641;
  int v642;
  int v643;
  int v644;
  __int64 v645;
  int v646;
  int v647;
  int v648;
  int v649;
  int v650;
  int v651;
  int v652;
  float v653;
  __int16 v654;
  int v655;
  int v656;
  int v657;
  __int16 v658;
  int v659;
  unsigned __int64 v660;
  __int64 v661;
  int v662;
  float v663;
  float v664;
  int v665;
  bool v667;
  int v668;
  int v669;
  char v670;
  int v671;
  unsigned int v672;
  unsigned int v673;
  int v674;
  int v675;
  int v676;
  int v677;
  int v678;
  int v679;
  int v680;
  __int16 v681;
  int v682;
  int v683;
  int v684;
  int v685;
  int v686;
  unsigned int v687;
  __int64 v688;
  unsigned __int64 v689;
  int v690;
  _BOOL4 v691;
  int v692;
  __int64* v693;
  int v694;
  int v695;
  int v696;
  signed int v697;
  int v698;
  unsigned int v699;
  signed int v700;
  signed int v701;
  __int64* v702;
  int v703;
  int v704;
  _BYTE* v705;
  __int64* v706;
  __int64 v707;
  __int64 v708;
  _BYTE* v709;
  _WORD* v710;
  __int64 v711;
  _BYTE* v712;
  _BYTE* v713;
  __int64 v714;
  __int64 v715;
  __int64 v716;
  _WORD* v717;
  __int64 v718;
  int v719;
  __int64 v720;
  __int64 v721;
  __int64 v722;
  char* v723;
  __int64 v724;
  __int64 v725;
  __int64 v726;
  _WORD* v727;
  int v728;
  __int64 v729;
  __int64 v730;
  char* v731;
  _BYTE* v732;
  __int16* v733;
  char* v734;
  int v735;
  int v736;
  int v737;
  int v738;
  int v739;
  int v740;
  int v741;
  int v742;
  char v743;
  __int64 v744;
  __int64 v745;
  __int64 v746;
  __int64 v747;
  _WORD* v748;
  _WORD* v749;
  __int64 v750;
  __int64 v751;
  __int64 v752;
  __int64 v753;
  __int16* v754;
  __int16* v755;
  int v756;
  int v757;
  int v758;
  int v759;
  int v760;
  int v761;
  int v762;
  int v763;
  int v764;
  __int16* v765;
  int v766;
  __int64 v767;
  __int64 v768;
  char* v769;
  char* v770;
  __int64 v771;
  __int64 v772;
  __int64 v773;
  __int64 v774;
  __int64 v775;
  __int64 v776;
  __int64 v777;
  __int64 v778;
  unsigned __int64 v779;
  char* v780;
  _WORD* v781;
  _WORD* v782;
  _WORD* v783;
  _WORD* v784;
  __int64 v785;
  char* v786;
  __int64 v787;
  __int64 v788;
  __int64 v789;
  __int64 v790;
  __int64 v791;
  _WORD* v792;
  _WORD* v793;
  char* v794;
  __int64* v795;
  _QWORD* v796;
  int v797;
  int v798;
  __int64 v799;
  int v800;
  int v801;
  struct {
    _BYTE v802[12];
    int v803;
    int* v804;
    int v805;
    _BOOL4 v806;
    int v807;
    int v808;
    int v809;
    int v810;
    int v811;
    int v812;
    __int64 v813;
    char gap192_[4];
    int v814;
    __int64 v815;
    char* v816;
    char gap216_[4];
    unsigned int v817;
    __int64 v818;
    char gap232_[4];
    int v819;
    __int64 v820;
    int v821;
    int v822;
    __int64 v823;
    __int64 v824;
    __int64 v825;
    char gap280_[4];
    int v826;
    __int64 v827;
    __int64 v828;
    __int64 v829;
    char* v830;
    char gap320_[4];
    int v831;
    char* v832;
    char gap336_[4];
    int v833;
    int* v834;
    __int64 v835;
    unsigned __int64 v836;
    _DWORD* v837;
    char gap376_[4];
    int v838;
    _BYTE* v839;
    _BYTE* v840;
    __int64 v841;
    int v842;
    int v843;
    __int64 v844;
    char* v845;
    __int64 v846;
    char gap440_[4];
    int v847;
    __int64 v848;
    _BYTE* v849;
    char* v850;
    __int64 v851;
    __int64* v852;
    unsigned int* v853;
    __int64 v854;
    _QWORD* v855;
    __int64 v856;
    _QWORD* v857;
    __int64 v858;
    char gap536_[4];
    unsigned int v859;
    __int64 v860;
    _BYTE* v861;
    __int64* v862;
    unsigned __int16* v863;
    char* v864;
    _BYTE* v865;
  } v802_;
  struct {
    char* v866;
    unsigned __int64 v867;
    _BYTE* v868;
  } v866_;
  int v869;
  __int64 v870;
  __int16 v871[2];
  int v872;
  int v873;
  _BOOL4 v874;
  _WORD v875[2];
  int v876;
  _QWORD v877[3];
  __int64 v878;
  _QWORD v879[3];

  v6 = *(char**)a1;
  v878 = 0;
  memset(v879, 0, sizeof(v879));
  v7 = *(unsigned int*)(a1 + 12);
  v9 = (char*)*(int*)(a1 + 8);
  memset(v877, 0, sizeof(v877));
  v875[0] = 0;
  v874 = false;
  v11 = *((int*)v6 + 1);
  v10 = *((int*)v6 + 2);
  v876 = 15;
  v12 = *((unsigned __int16**)v6 + 3);
  v872 = 0;
  v870 = 0;
  v871[0] = 0;
  v802_.v863 = v12;
  v14 = *(int*)(a1 + 36);
  v13 = *(int*)(a1 + 40);
  result = 0xFFFFFFFFLL;
  v802_.v855 = (_QWORD*)v14;
  v802_.v856 = v13;
  if (a2 == nullptr) {
    return result;
  }
  if (a5 < 2) {
    return result;
  }
  v16 = *((_DWORD*)v6 + 8);
  if (v16 < 0) {
    return result;
  }
  v17 = v16 + 1;
  v18 = (_QWORD*)a6;
  v19 = a2;
  v20 = 0;
  v21 = 0;
  v802_.v857 = (_QWORD*)a1;
  v802_.v846 = (unsigned int)v802_.v855;
  v802_.v852 = (__int64*)(a6 + 24);
  v802_.v853 = (unsigned int*)(a6 + 32);
  v22 = (unsigned int)(*(_DWORD*)(a1 + 32) * a3);
  while (*((_DWORD*)v6 + 10) << v21 != (_DWORD)v22) {
    ++v21;
    v20 += 8;
    if (v17 == v21) {
      return 0xFFFFFFFFLL;
    }
  }
  v802_.v858 = v7;
  v802_.v864 = v6;
  v802_.v854 = v22;
  v866_.v866 = v9;
  LODWORD(v802_.v827) = v14 != 0;
  if (a6 != 0) {
    v23 = a4;
    v24 = a5;
    v25 = ec_tell_frac(a6);
    LODWORD(v9) = (_DWORD)v866_.v866;
    a5 = v24;
    a4 = v23;
    LODWORD(v22) = v802_.v854;
    v6 = v802_.v864;
    v26 = *((_DWORD*)v18 + 6) + __clz(*((_DWORD*)v18 + 8));
    LODWORD(v802_.v840) = v26 - 32;
    v27 = (int)(v26 - 28) >> 3;
    v28 = v25 + 359;
  }
  else {
    v27 = 0;
    v28 = 360;
    LODWORD(v802_.v840) = 1;
  }
  v873 = 0;
  if (a5 >= 1275) {
    v29 = 1275;
  }
  else {
    v29 = a5;
  }
  v802_.v823 = v20;
  v30 = v29 - v27;
  v802_.v811 = v28;
  v31 = *((_DWORD*)v802_.v857 + 11);
  if (*((_DWORD*)v802_.v857 + 12) != 0) {
    v802_.v847 = v29;
    if (v31 != -1) {
      v802_.v843 = (v31 * (int)v22 + (*(int*)v6 >> 4)) / (*(int*)v6 >> 3);
      v32 = v802_.v843 >> 6;
    LABEL_25:
      v802_.v838 = v32;
      goto LABEL_28;
    }
  }
  else {
    if (v31 != -1) {
      v33 = *(_DWORD*)v6;
      v802_.v843 = 0;
      v34 = (int)v802_.v840;
      if ((int)v802_.v840 <= 1) {
        v34 = 0;
      }
      v35 = (v34 + v31 * (int)v22 + 4 * v33) / (8 * v33) -
            (*((_DWORD*)v802_.v857 + 13) != 0);
      if (v29 < v35) {
        v35 = v29;
      }
      if (v35 <= 2) {
        v35 = 2;
      }
      v802_.v847 = v35;
      v32 = v35 - v27;
      goto LABEL_25;
    }
    v802_.v847 = v29;
  }
  v802_.v843 = 0;
  v802_.v838 = v29 - v27;
LABEL_28:
  v802_.v859 = v21;
  v802_.v844 = v10;
  v36 = v10 * (_DWORD)v9;
  v802_.v817 = 3 - v21;
  if ((400 * v802_.v847) >> (3 - v21) >= v31) {
    v37 = v31;
  }
  else {
    v37 = (400 * v802_.v847) >> (3 - v21);
  }
  if (v31 == -1) {
    v38 = (400 * v802_.v847) >> (3 - v21);
  }
  else {
    v38 = v37;
  }
  LODWORD(v866_.v868) = v38;
  if (v18 == nullptr) {
    v18 = v877;
    v39 = v29 - v27;
    ec_enc_init((__int64)v877, a4, v802_.v847);
    LODWORD(v9) = (_DWORD)v866_.v866;
    LODWORD(v22) = v802_.v854;
    v6 = v802_.v864;
    v30 = v39;
    v802_.v852 = &v878;
    v802_.v853 = (unsigned int*)v879;
  }
  v40 = (v11 + 1024) * (_DWORD)v9;
  v41 = (char*)v802_.v857 + 252;
  if (v802_.v843 >= 1 && *((_DWORD*)v802_.v857 + 14) != 0) {
    v42 = (_DWORD)v802_.v840 == 1 ? 2 : 0;
    v43 = v42 <= (2 * v802_.v843 - *((_DWORD*)v802_.v857 + 53)) >> 6
              ? (2 * v802_.v843 - *((_DWORD*)v802_.v857 + 53)) >> 6
              : v42;
    if (v43 < v30) {
      v802_.v847 = v43 + v27;
      ec_enc_shrink((__int64)v18, v43 + v27);
      LODWORD(v9) = (_DWORD)v866_.v866;
      LODWORD(v22) = v802_.v854;
      v6 = v802_.v864;
      v30 = v43;
    }
  }
  v802_.v831 = v30;
  v802_.v845 = &v41[4 * v40];
  v802_.v836 = 2LL * v36;
  v44 = *((_DWORD*)v6 + 3);
  v45 = 0x190u >> v802_.v859;
  LODWORD(v802_.v825) = v44;
  if ((int)v802_.v856 >= v44) {
    v46 = (unsigned int)v44;
  }
  else {
    v46 = (unsigned int)v802_.v856;
  }
  v802_.v841 = v46;
  v802_.v834 = (int*)(unsigned int)(v22 + v11);
  v47 = 4LL * (int)v802_.v834 * (int)v9;
  v802_.v839 = &v802_.v802[-((v47 + 15) & 0xFFFFFFFFFFFFFFF0LL)];
  memset_plt(v802_.v839, 0, v47);
  v48 = v802_.v854;
  v49 = *((_DWORD*)v802_.v857 + 57);
  v50 = *((_DWORD*)v802_.v857 + 8);
  v51 = ((int)v802_.v854 - (int)v11) * (int)v802_.v858 / v50;
  if (v51 < 1) {
    if (v49 > 0) {
      v53 = v866_.v866;
      v57 = false;
      goto LABEL_151;
    }
    v53 = v866_.v866;
    v89 = 0;
    v90 = 0;
  }
  else {
    v52 = v51 & 7;
    if ((unsigned int)v51 >= 8) {
      v53 = v866_.v866;
      v58 = (__int16*)(v19 + 8);
      v59 = 0;
      LOWORD(v55) = 0;
      LOWORD(v56) = 0;
      do {
        v60 = *(v58 - 4);
        v56 = (__int16)v56;
        v55 = (__int16)v55;
        v59 -= 8;
        if ((__int16)v56 <= v60) {
          v56 = *(v58 - 4);
        }
        if ((__int16)v55 >= v60) {
          v55 = *(v58 - 4);
        }
        v61 = *(v58 - 3);
        if (v56 <= v61) {
          v56 = *(v58 - 3);
        }
        if (v55 >= v61) {
          v55 = *(v58 - 3);
        }
        v62 = *(v58 - 2);
        if (v56 <= v62) {
          v56 = *(v58 - 2);
        }
        if (v55 >= v62) {
          v55 = *(v58 - 2);
        }
        v63 = *(v58 - 1);
        if (v56 <= v63) {
          v56 = *(v58 - 1);
        }
        if (v55 >= v63) {
          v55 = *(v58 - 1);
        }
        v64 = *v58;
        if (v56 <= v64) {
          v56 = *v58;
        }
        if (v55 >= v64) {
          v55 = *v58;
        }
        v65 = v58[1];
        if (v56 <= v65) {
          v56 = v58[1];
        }
        if (v55 >= v65) {
          v55 = v58[1];
        }
        v66 = v58[2];
        if (v56 <= v66) {
          v56 = v58[2];
        }
        if (v55 >= v66) {
          v55 = v58[2];
        }
        v67 = v58[3];
        v58 += 8;
        if (v56 <= v67) {
          LOWORD(v56) = v67;
        }
        if (v55 >= v67) {
          LOWORD(v55) = v67;
        }
      } while (-(__int64)(v51 & 0x7FFFFFF8) != v59);
      v54 = -v59;
    }
    else {
      v53 = v866_.v866;
      v54 = 0;
      LOWORD(v55) = 0;
      LOWORD(v56) = 0;
    }
    if ((v51 & 7) != 0) {
      v68 = (__int16*)&v19[2 * v54];
      v69 = v51 & 7;
      do {
        v71 = *v68++;
        v70 = v71;
        if ((__int16)v56 <= v71) {
          LOWORD(v56) = v70;
        }
        if ((__int16)v55 >= v70) {
          LOWORD(v55) = v70;
        }
        --v69;
      } while (v69 != 0);
    }
    v56 = (unsigned __int16)v56;
    v55 = (__int16)v55;
    if ((v56 + v55 < 0) ^ __OFADD__(v56, v55) | (v56 + v55 == 0)) {
      v72 = -(__int16)v55;
    }
    else {
      v72 = (unsigned __int16)v56;
    }
    if (v49 > v72) {
      v57 = false;
      goto LABEL_151;
    }
    if ((unsigned int)v51 >= 8) {
      v76 = (__int16*)(v19 + 8);
      v77 = 0;
      LOWORD(v74) = 0;
      LOWORD(v75) = 0;
      do {
        v78 = *(v76 - 4);
        v75 = (__int16)v75;
        v74 = (__int16)v74;
        v77 -= 8;
        if ((__int16)v75 <= v78) {
          v75 = *(v76 - 4);
        }
        if ((__int16)v74 >= v78) {
          v74 = *(v76 - 4);
        }
        v79 = *(v76 - 3);
        if (v75 <= v79) {
          v75 = *(v76 - 3);
        }
        if (v74 >= v79) {
          v74 = *(v76 - 3);
        }
        v80 = *(v76 - 2);
        if (v75 <= v80) {
          v75 = *(v76 - 2);
        }
        if (v74 >= v80) {
          v74 = *(v76 - 2);
        }
        v81 = *(v76 - 1);
        if (v75 <= v81) {
          v75 = *(v76 - 1);
        }
        if (v74 >= v81) {
          v74 = *(v76 - 1);
        }
        v82 = *v76;
        if (v75 <= v82) {
          v75 = *v76;
        }
        if (v74 >= v82) {
          v74 = *v76;
        }
        v83 = v76[1];
        if (v75 <= v83) {
          v75 = v76[1];
        }
        if (v74 >= v83) {
          v74 = v76[1];
        }
        v84 = v76[2];
        if (v75 <= v84) {
          v75 = v76[2];
        }
        if (v74 >= v84) {
          v74 = v76[2];
        }
        v85 = v76[3];
        v76 += 8;
        if (v75 <= v85) {
          LOWORD(v75) = v85;
        }
        if (v74 >= v85) {
          LOWORD(v74) = v85;
        }
      } while (-(__int64)(v51 & 0x7FFFFFF8) != v77);
      v73 = -v77;
    }
    else {
      v73 = 0;
      LOWORD(v74) = 0;
      LOWORD(v75) = 0;
    }
    if ((v51 & 7) != 0) {
      v86 = (__int16*)&v19[2 * v73];
      do {
        v88 = *v86++;
        v87 = v88;
        if ((__int16)v75 <= v88) {
          LOWORD(v75) = v87;
        }
        if ((__int16)v74 >= v87) {
          LOWORD(v74) = v87;
        }
        --v52;
      } while (v52 != 0);
    }
    v89 = (unsigned __int16)v75;
    v90 = (__int16)v74;
  }
  if ((v89 + v90 < 0) ^ __OFADD__(v89, v90) | (v89 + v90 == 0)) {
    v89 = -v90;
  }
  v57 = v89 == 0;
LABEL_151:
  v802_.v830 = &v802_.v845[v802_.v836];
  v91 = v45 - 50;
  v92 = v802_.v847;
  v93 = 40 * v802_.v858 + 20;
  v94 = 8 * v802_.v847;
  v95 = (int)v11 * (int)v802_.v858 / v50;
  if (v95 < 1) {
    v96 = v802_.v857;
    v114 = 0;
    v115 = 0;
  }
  else {
    v96 = v802_.v857;
    v97 = v95 & 7;
    v98 = 0;
    LOWORD(v99) = 0;
    LOWORD(v100) = 0;
    if ((unsigned int)v95 >= 8) {
      v101 = -(__int64)(v95 & 0x7FFFFFF8);
      v102 = (__int16*)&v19[2 * v51 + 8];
      do {
        v103 = *(v102 - 4);
        v100 = (__int16)v100;
        v99 = (__int16)v99;
        v98 -= 8;
        if ((__int16)v100 <= v103) {
          v100 = *(v102 - 4);
        }
        if ((__int16)v99 >= v103) {
          v99 = *(v102 - 4);
        }
        v104 = *(v102 - 3);
        if (v100 <= v104) {
          v100 = *(v102 - 3);
        }
        if (v99 >= v104) {
          v99 = *(v102 - 3);
        }
        v105 = *(v102 - 2);
        if (v100 <= v105) {
          v100 = *(v102 - 2);
        }
        if (v99 >= v105) {
          v99 = *(v102 - 2);
        }
        v106 = *(v102 - 1);
        if (v100 <= v106) {
          v100 = *(v102 - 1);
        }
        if (v99 >= v106) {
          v99 = *(v102 - 1);
        }
        v107 = *v102;
        if (v100 <= v107) {
          v100 = *v102;
        }
        if (v99 >= v107) {
          v99 = *v102;
        }
        v108 = v102[1];
        if (v100 <= v108) {
          v100 = v102[1];
        }
        if (v99 >= v108) {
          v99 = v102[1];
        }
        v109 = v102[2];
        if (v100 <= v109) {
          v100 = v102[2];
        }
        if (v99 >= v109) {
          v99 = v102[2];
        }
        v110 = v102[3];
        v102 += 8;
        if (v100 <= v110) {
          LOWORD(v100) = v110;
        }
        if (v99 >= v110) {
          LOWORD(v99) = v110;
        }
      } while (v101 != v98);
      v98 = -v98;
    }
    if (v97 != 0) {
      v111 = (__int16*)&v19[2 * v98 + 2 * v51];
      do {
        v113 = *v111++;
        v112 = v113;
        if ((__int16)v100 <= v113) {
          LOWORD(v100) = v112;
        }
        if ((__int16)v99 >= v112) {
          LOWORD(v99) = v112;
        }
        --v97;
      } while (v97 != 0);
    }
    v114 = (unsigned __int16)v100;
    v115 = (__int16)v99;
  }
  v802_.v862 = v18;
  if ((v114 + v115 < 0) ^ __OFADD__(v114, v115) | (v114 + v115 == 0)) {
    v114 = -v115;
  }
  v802_.v832 = &v41[4 * (int)v11 * (int)v53];
  v116 = (int)v802_.v840;
  *((_DWORD*)v96 + 57) = v114;
  v802_.v835 = v36;
  v802_.v809 = v93;
  v802_.v822 = (_DWORD)v866_.v868 - v91 * v93;
  v802_.v816 = &v802_.v830[v802_.v836];
  if (v116 == 1) {
    v117 = v114 == 0 && v57;
    ec_enc_bit_logp(v18, v117, 15);
    if (v117 != 0) {
      if (v802_.v843 >= 1) {
        if (v92 >= v27 + 2) {
          v118 = v27 + 2;
        }
        else {
          v118 = v92;
        }
        v94 = 8 * v118;
        ec_enc_shrink((__int64)v18, v118);
        v802_.v831 = 2;
        v802_.v838 = v118;
        v802_.v847 = v118;
      }
      v119 = v802_.v864;
      v48 = v802_.v854;
      v53 = v866_.v866;
      v802_.v833 = 0;
      *(_DWORD*)v802_.v852 = v94 - __clz(*v802_.v853) + 32;
      v802_.v842 = v94;
      LODWORD(v802_.v840) = v94;
      goto LABEL_214;
    }
    v119 = v802_.v864;
    v48 = v802_.v854;
    v53 = v866_.v866;
    v802_.v842 = v94;
    v802_.v833 = 1;
    v120 = (char*)v875;
  }
  else {
    v119 = v802_.v864;
    v120 = (char*)&v866_.v866 + 4;
    v802_.v842 = v94;
  }
  *((_DWORD*)v120 - 64) = 1;
LABEL_214:
  v121 = *((int*)v96 + 8);
  v122 = (char*)v96 + 196;
  v123 = v48 & 7;
  v124 = 0;
  v125 = 16LL * (_QWORD)v53;
  v126 = 2LL * (_QWORD)v53;
  if ((int)v53 <= 1) {
    v127 = 1;
  }
  else {
    v127 = (unsigned int)v53;
  }
  v802_.v850 = (char*)v96 + 196;
  v802_.v851 = v127;
  v802_.v821 = 1 << v802_.v859;
  v128 = v40;
  v129 = 4 * v121;
  v802_.v829 = v128;
  v130 = &v802_.v839[4 * v11];
  v131 = 32 * v121;
  v802_.v820 = v48;
  v132 = (int*)(v130 + 16);
  v802_.v865 = v130;
  v802_.v861 = (_BYTE*)(4LL * v48);
  v133 = 4LL * (int)v802_.v834;
  v802_.v860 = (int)v802_.v834;
  v134 = -(__int64)(v48 & 0x7FFFFFF8);
  v802_.v849 = (_BYTE*)v133;
  v802_.v848 = 32 * v121;
  do {
    v135 = *((__int16*)v119 + 8);
    v136 = *(_DWORD*)&v122[4 * v124];
    if ((_DWORD)v121 != 1 || *((_WORD*)v119 + 9) != 0) {
      if ((_DWORD)v121 != 1) {
        v138 = v121;
        v139 = v123;
        v866_.v867 = (unsigned __int64)v132;
        v866_.v868 = v19;
        v140 = v124;
        memset_plt(&v802_.v865[4 * v124 * v802_.v860], 0, v802_.v861);
        v123 = v139;
        v124 = v140;
        v121 = v138;
        v122 = v802_.v850;
        v127 = v802_.v851;
        v132 = (int*)v866_.v867;
        v19 = v866_.v868;
        v53 = v866_.v866;
        v48 = v802_.v854;
        v119 = v802_.v864;
        v133 = (__int64)v802_.v849;
        v131 = v802_.v848;
      }
      v141 = v48 / (int)v121;
      if (v48 / (int)v121 >= 1) {
        if (v141 >= 8) {
          v143 = 0;
          v142 = 0;
          v144 = (__int16*)v19;
          do {
            v145 = &v130[v143];
            v142 += 8;
            v143 += v131;
            *v145 = *v144;
            v146 = &v144[(unsigned __int64)v126 / 2];
            v147 = &v145[v121];
            v144 = (__int16*)((char*)v144 + v125);
            v148 = *v146;
            v149 = &v146[(unsigned __int64)v126 / 2];
            *v147 = v148;
            v150 = *v149;
            v151 = &v147[(unsigned __int64)v129 / 4];
            v152 = &v149[(unsigned __int64)v126 / 2];
            *v151 = v150;
            v153 = *v152;
            v154 = &v151[(unsigned __int64)v129 / 4];
            v155 = &v152[(unsigned __int64)v126 / 2];
            *v154 = v153;
            v156 = *v155;
            v157 = &v154[(unsigned __int64)v129 / 4];
            v158 = &v155[(unsigned __int64)v126 / 2];
            *v157 = v156;
            v159 = *v158;
            v160 = &v157[(unsigned __int64)v129 / 4];
            v161 = &v158[(unsigned __int64)v126 / 2];
            *v160 = v159;
            v162 = *v161;
            LODWORD(v161) = v161[(unsigned __int64)v126 / 2];
            v163 = &v160[(unsigned __int64)v129 / 4];
            *v163 = v162;
            v163[(unsigned __int64)v129 / 4] = (_DWORD)v161;
          } while ((v141 & 0x7FFFFFF8) != v142);
        }
        else {
          v142 = 0;
        }
        v164 = v141 & 7;
        if (v164 != 0) {
          v165 = v129 * v142;
          v166 = v126 * v142;
          do {
            v167 = *(__int16*)&v19[v166];
            v166 += v126;
            --v164;
            *(_DWORD*)&v130[v165] = v167;
            v165 += v129;
          } while (v164 != 0);
        }
      }
      if (v48 >= 1) {
        if ((unsigned int)v48 < 8) {
          v168 = 0;
          if (v123 == 0) {
            goto LABEL_218;
          }
        LABEL_242:
          v182 = 4 * v168;
          v183 = v123;
          do {
            v184 = *(_DWORD*)&v130[v182];
            --v183;
            *(_DWORD*)&v130[v182] = ((__int16)v184 << 12) - v136;
            v182 += 4;
            v136 = ((__int16)v184 * v135) >> 3;
          } while (v183 != 0);
          goto LABEL_218;
        }
        v169 = 0;
        v170 = v132;
        do {
          v169 -= 8;
          v171 = (__int16)*(v170 - 4);
          v172 = (__int16)*(v170 - 3);
          v173 = *v170;
          v174 = v170[1];
          v175 = v171 << 12;
          v176 = (v172 << 12) - ((v171 * v135) >> 3);
          v177 = (__int16)*(v170 - 2);
          v178 = (v177 << 12) - ((v172 * v135) >> 3);
          v179 = (__int16)*(v170 - 1);
          *(v170 - 4) = v175 - v136;
          *(v170 - 3) = v176;
          v180 = v170[2];
          v181 = v170[3];
          *(v170 - 2) = v178;
          *(v170 - 1) = (v179 << 12) - ((v177 * v135) >> 3);
          *v170 = ((__int16)v173 << 12) - ((v179 * v135) >> 3);
          v170[1] = ((__int16)v174 << 12) - (((__int16)v173 * v135) >> 3);
          v170[2] = ((__int16)v180 << 12) - (((__int16)v174 * v135) >> 3);
          v170[3] = ((__int16)v181 << 12) - (((__int16)v180 * v135) >> 3);
          v170 += 8;
          v136 = ((__int16)v181 * v135) >> 3;
        } while (v134 != v169);
        v168 = -v169;
        if (v123 != 0) {
          goto LABEL_242;
        }
      }
    }
    else {
      if (v48 < 1) {
        goto LABEL_218;
      }
      if ((unsigned int)v48 < 8) {
        v137 = 0;
        if (v123 == 0) {
          goto LABEL_218;
        }
      LABEL_248:
        v203 = &v130[4 * v137];
        v204 = v126 * v137;
        for (i = v123; i != 0; --i) {
          v206 = *(__int16*)&v19[v204];
          v204 += v126;
          *v203++ = (v206 << 12) - v136;
          v136 = (v206 * v135) >> 3;
        }
        goto LABEL_218;
      }
      v185 = 0;
      v186 = v132;
      v187 = (__int16*)v19;
      do {
        v188 = *v187;
        v189 = &v187[(_QWORD)v53];
        v185 -= 8;
        v187 = (__int16*)((char*)v187 + v125);
        v190 = *v189;
        v191 = &v189[(unsigned __int64)v126 / 2];
        v192 = *v191;
        *(v186 - 4) = (v188 << 12) - v136;
        *(v186 - 3) = (v190 << 12) - ((v188 * v135) >> 3);
        v193 = &v191[(unsigned __int64)v126 / 2];
        LODWORD(v191) = v191[(unsigned __int64)v126 / 2];
        v194 = &v193[(unsigned __int64)v126 / 2];
        v195 = (v192 << 12) - ((v190 * v135) >> 3);
        v196 = ((_DWORD)v191 << 12) - ((v192 * v135) >> 3);
        v197 = *v194;
        v198 = &v194[(unsigned __int64)v126 / 2];
        *(v186 - 2) = v195;
        *(v186 - 1) = v196;
        v199 = *v198;
        v200 = &v198[(unsigned __int64)v126 / 2];
        LODWORD(v191) = (v197 << 12) - (((int)v191 * v135) >> 3);
        v201 = (v199 << 12) - ((v197 * v135) >> 3);
        v202 = *v200;
        LODWORD(v200) = v200[(unsigned __int64)v126 / 2];
        *v186 = (int)v191;
        v186[1] = v201;
        v186[2] = (v202 << 12) - ((v199 * v135) >> 3);
        v186[3] = ((_DWORD)v200 << 12) - ((v202 * v135) >> 3);
        v186 += 8;
        v136 = ((int)v200 * v135) >> 3;
      } while (v134 != v185);
      v137 = -v185;
      if (v123 != 0) {
        goto LABEL_248;
      }
    }
  LABEL_218:
    *(_DWORD*)&v122[4 * v124++] = v136;
    v19 += 2;
    v132 = (int*)((char*)v132 + v133);
    v130 += v133;
  } while (v124 != v127);
  v207 = v802_.v857;
  v869 = 0;
  v208 = 0;
  if (*((_DWORD*)v802_.v857 + 17) == 0 || v802_.v831 <= 3) {
    v210 = v802_.v858;
    v211 = (int)v802_.v855;
    v212 = v802_.v856;
    v213 = v802_.v859;
    v214 = v802_.v844;
    if (v802_.v831 > 12 * (int)v802_.v858 && (_DWORD)v802_.v846 == 0) {
      goto LABEL_260;
    }
  }
  else {
    v211 = (int)v802_.v855;
    v212 = v802_.v856;
    v210 = v802_.v858;
    v213 = v802_.v859;
    v214 = v802_.v844;
    if ((_DWORD)v802_.v855 == 0) {
    LABEL_260:
      if (((v802_.v833 ^ 1) & 1) == 0) {
        v208 = *((_DWORD*)v802_.v857 + 6) == 0 &&
               (signed __int32)*((_DWORD*)v802_.v857 + 7) > 4;
      }
    }
  }
  v215 = *((_DWORD*)v802_.v857 + 26);
  v802_.v804 = (int*)(v802_.v857 + 13);
  v802_.v837 = (_DWORD*)v802_.v857 + 31;
  v802_.v826 = v215;
  v216 = run_prefilter_alt1(
      v802_.v857, (__int64)v802_.v839, (__int64)v802_.v832, (int)v53, v48, v215,
      &v876, v875, &v869, v208, v802_.v831, (__int64)v802_.v857 + 124);
  if ((signed __int16)v875[0] <= 13107 && *((__int16*)v207 + 56) < 13108 ||
      *v802_.v837 != 0 && *((float*)v207 + 32) <= 0x1.3333333333333p-2) {
    v218 = true;
    v802_.v803 = v216;
    if (v216 != 0) {
      goto LABEL_272;
    }
  }
  else {
    v217 = (double)*((int*)v207 + 27);
    v218 = v217 * 0x1.947ae147ae148p-1 <= (double)v876 &&
           v217 * 0x1.428f5c28f5c29p+0 >= (double)v876;
    v802_.v803 = v216;
    if (v216 != 0) {
    LABEL_272:
      v219 = v802_.v862;
      ec_enc_bit_logp(v802_.v862, 1, 1);
      v220 = v876;
      v221 = v876 + 1;
      v222 = __clz(v876 + 1);
      ec_enc_uint(v219, 27 - v222, 6u);
      v223 = (-16 << (27 - v222)) + v221;
      v210 = v802_.v858;
      ec_enc_bits(v219, v223, 31 - v222);
      v207 = v802_.v857;
      v876 = v220;
      ec_enc_bits(v219, v869, 3);
      v224 = v219;
      v213 = v802_.v859;
      ec_enc_icdf(v224, v802_.v826, (__int64)&MovieData_a24c2, 2);
      goto LABEL_277;
    }
  }
  if (v211 == 0 && (int)v802_.v840 + 16 <= v802_.v842) {
    ec_enc_bit_logp(v802_.v862, 0, 1);
  }
LABEL_277:
  v225 = v802_.v854;
  v226 = (int)v866_.v866;
  if (*((int*)v207 + 7) < 1 || *((_DWORD*)v207 + 17) != 0) {
    v227 = true;
    v802_.v806 = v218;
    if (v213 == 0) {
      goto LABEL_286;
    }
  LABEL_285:
    if ((int)(*(_DWORD*)v802_.v852 + __clz(*v802_.v853) - 29) > v802_.v842) {
      goto LABEL_286;
    }
    if (v227) {
      v230 = 0;
      v231 = 0;
      LODWORD(v802_.v850) = 0;
      v802_.v812 = 0;
    }
    else {
      v231 = 1;
      v802_.v812 = 0;
      v230 = v802_.v821;
      LODWORD(v802_.v850) = 1;
    }
  }
  else {
    v228 = false;
    if (v211 != 0 && v802_.v838 <= 14) {
      v228 = *((_DWORD*)v207 + 47) != 2;
    }
    v229 = MovieRoutine_2ffe0((__int64)v802_.v839, (unsigned int)v802_.v834,
                              (int)v866_.v866, v871, &v872, v228, &v870);
    v226 = (int)v866_.v866;
    v225 = v802_.v854;
    v227 = !v229;
    v802_.v806 = v218;
    if (v213 != 0) {
      goto LABEL_285;
    }
  LABEL_286:
    v230 = 0;
    v231 = 0;
    LODWORD(v802_.v850) = 0;
    v802_.v812 = 1;
  }
  v232 = 4LL * v225 * v226;
  v866_.v868 = &v802_.v802[-((v232 + 15) & 0xFFFFFFFFFFFFFFF0LL)];
  memset_plt(v866_.v868, 0, v232);
  v233 = v802_.v835;
  v234 = (int*)&v802_.v802[-((4 * v802_.v835 + 15) & 0xFFFFFFFFFFFFFFF0LL)];
  v802_.v815 = 4 * v802_.v835;
  memset_plt(v234, 0, 4 * v802_.v835);
  v802_.v840 = &v802_.v802[-((2 * v233 + 15) & 0xFFFFFFFFFFFFFFF0LL)];
  v802_.v828 = 2 * v233;
  memset_plt(v802_.v840, 0, 2 * v233);
  if (v230 == 0) {
    v257 = 2LL * (int)v214 * v210;
    v802_.v813 = (int)v214 * v210;
    v802_.v865 = &v802_.v802[-((v257 + 15) & 0xFFFFFFFFFFFFFFF0LL)];
    v866_.v867 = 2 * v802_.v813;
    memset_plt(v802_.v865, 0, v257);
    v248 = (__int64*)v802_.v864;
    v249 = (int)v866_.v866;
    v255 = v866_.v868;
    LODWORD(v802_.v860) = 0;
    v802_.v818 = (unsigned int)(v214 * v210);
    v247 = v802_.v857;
    v256 = v802_.v841;
    goto LABEL_306;
  }
  v235 = *((_DWORD*)v207 + 7);
  LODWORD(v802_.v849) = v231;
  v236 = v214;
  v237 = v230;
  v238 = (unsigned int)(v236 * v210);
  v239 = v213;
  v240 = 2LL * (int)v238;
  v802_.v813 = (int)v238;
  v241 = &v802_.v802[-((v240 + 15) & 0xFFFFFFFFFFFFFFF0LL)];
  v866_.v867 = v240;
  memset_plt(v241, 0, v240);
  v802_.v865 = v241;
  v802_.v818 = v238;
  if (v235 < 8) {
    LODWORD(v802_.v860) = 0;
    v247 = v207;
  LABEL_298:
    v230 = v237;
    v248 = (__int64*)v802_.v864;
    v249 = (int)v866_.v866;
    v255 = v866_.v868;
    v213 = v239;
    v214 = v802_.v844;
    v256 = v802_.v841;
    v231 = (int)v802_.v849;
    goto LABEL_306;
  }
  v242 = (__int64*)v802_.v864;
  v243 = v866_.v868;
  compute_mdcts((__int64)v802_.v864, 0, (__int64)v802_.v839,
                (__int64)v866_.v868, v210, (int)v866_.v866, v239,
                *((_DWORD*)v207 + 8), *((_DWORD*)v207 + 19));
  v244 = (__int64)v243;
  LODWORD(v243) = v802_.v841;
  compute_band_energies((__int64)v242, v244, (__int64)v234, v802_.v841, v210,
                        v239);
  v245 = (int)v243;
  v246 = v241;
  op_pvq_search_c((__int64)v242, v245, v212, (__int64)v234, (__int64)v241,
                  v210);
  v247 = v207;
  if ((int)v238 < 1) {
    LODWORD(v802_.v860) = 1;
    goto LABEL_298;
  }
  v248 = (__int64*)v802_.v864;
  v249 = (int)v866_.v866;
  v250 = v238 & 7;
  v251 = v238;
  v230 = v237;
  v213 = v239;
  v252 = 0;
  v253 = (__int16)((_WORD)v239 << 10) >> 1;
  if (v251 >= 8) {
    v258 = v246 + 8;
    v254 = v246;
    v214 = v802_.v844;
    v231 = (int)v802_.v849;
    do {
      v252 -= 8;
      *(v258 - 4) += v253;
      *(v258 - 3) += v253;
      *(v258 - 2) += v253;
      *(v258 - 1) += v253;
      *v258 += v253;
      v258[1] += v253;
      v258[2] += v253;
      v258[3] += v253;
      v258 += 8;
    } while (-(__int64)(v251 & 0x7FFFFFF8) != v252);
    v255 = v866_.v868;
    v252 = -v252;
    v256 = v802_.v841;
  }
  else {
    v254 = v246;
    v255 = v866_.v868;
    v214 = v802_.v844;
    v256 = v802_.v841;
    v231 = (int)v802_.v849;
  }
  if (v250 != 0) {
    v259 = 2 * v252;
    do {
      --v250;
      *(_WORD*)&v254[v259] += v253;
      v259 += 2;
    } while (v250 != 0);
  }
  LODWORD(v802_.v860) = 1;
LABEL_306:
  v260 = v249;
  compute_mdcts((__int64)v248, v230, (__int64)v802_.v839, (__int64)v255, v210,
                v249, v213, *((_DWORD*)v247 + 8), *((_DWORD*)v247 + 19));
  v261 = v260 == 2 && v210 == 1;
  v262 = v261;
  v802_.v814 = v262;
  if (v261) {
    v872 = 0;
  }
  compute_band_energies((__int64)v802_.v864, (__int64)v866_.v868, (__int64)v234,
                        v256, v210, v213);
  if (*((_DWORD*)v247 + 17) != 0 && (int)v212 >= 3) {
    v263 = v212 - 2;
    v264 = (v212 - 2) & 7;
    v265 = (unsigned __int64)(3LL * *v234) >> 15;
    if ((unsigned int)(v212 - 3) >= 7) {
      v267 = v263 & 0xFFFFFFFFFFFFFFF8LL;
      v268 = v234 + 5;
      v266 = v263 & 0xFFFFFFFFFFFFFFF8LL | 2;
      do {
        v269 = *(v268 - 3);
        v270 = *(v268 - 2);
        v271 = v268[1];
        if (v269 >= (int)v265) {
          v269 = v265;
        }
        if (v269 <= 1) {
          v269 = 1;
        }
        if (v270 >= (int)v265) {
          v270 = v265;
        }
        if (v270 <= 1) {
          v270 = 1;
        }
        *(v268 - 3) = v269;
        *(v268 - 2) = v270;
        v272 = *(v268 - 1);
        v273 = *v268;
        if (v272 >= (int)v265) {
          v272 = v265;
        }
        if (v272 <= 1) {
          v272 = 1;
        }
        if (v273 >= (int)v265) {
          v273 = v265;
        }
        if (v273 <= 1) {
          v273 = 1;
        }
        *(v268 - 1) = v272;
        *v268 = v273;
        if (v271 >= (int)v265) {
          v274 = v265;
        }
        else {
          v274 = v271;
        }
        v275 = v268[2];
        v276 = v268[3];
        if (v274 <= 1) {
          v274 = 1;
        }
        if (v275 >= (int)v265) {
          v275 = v265;
        }
        if (v275 <= 1) {
          v275 = 1;
        }
        v268[1] = v274;
        v268[2] = v275;
        v277 = v268[4];
        if (v276 >= (int)v265) {
          v278 = v265;
        }
        else {
          v278 = v276;
        }
        if (v278 <= 1) {
          v278 = 1;
        }
        if (v277 >= (int)v265) {
          v277 = v265;
        }
        if (v277 <= 1) {
          v277 = 1;
        }
        v267 -= 8LL;
        v268[3] = v278;
        v268[4] = v277;
        v268 += 8;
      } while (v267 != 0);
    }
    else {
      v266 = 2;
    }
    if (v264 != 0) {
      v279 = &v234[v266];
      do {
        v280 = *v279;
        if (*v279 >= (int)v265) {
          v280 = v265;
        }
        if (v280 <= 1) {
          v280 = 1;
        }
        --v264;
        *v279++ = v280;
      } while (v264 != 0);
    }
  }
  op_pvq_search_c((__int64)v802_.v864, v256, v212, (__int64)v234,
                  (__int64)v802_.v840, v210);
  v281 = &v802_.v802[-((v866_.v867 + 15) & 0xFFFFFFFFFFFFFFF0LL)];
  memset_plt(v281, 0, v866_.v867);
  v802_.v861 = v281;
  memset_plt(v281, 0, 2 * v212);
  v282 = 2 * v214;
  v802_.v848 = 2 * v214;
  v802_.v834 = v234;
  if ((_DWORD)v802_.v855 == 0) {
    v286 = v247[30];
    v283 = *((_DWORD*)v247 + 17);
    v284 = v802_.v854;
    if (v286 == 0) {
      goto LABEL_364;
    }
    if (v283 != 0) {
      v285 = 0;
      v802_.v805 = 0;
      v802_.v808 = 0;
      LODWORD(v802_.v827) = 1;
      goto LABEL_502;
    }
    v300 = *((_DWORD*)v247 + 24);
    if (v300 <= 2) {
      v301 = 2;
    }
    else {
      v301 = (unsigned int)v300;
    }
    if (v210 <= 0) {
      v306 = 0;
      v365 = 0;
      v364 = 0;
    }
    else {
      v302 = v247[30];
      v303 = 0;
      v304 = 0;
      v305 = 0;
      v306 = 0;
      LODWORD(v802_.v849) = v231;
      v802_.v832 = (char*)v301;
      v802_.v819 = v230;
      v307 = (unsigned __int16*)(v302 + 4);
      v308 = *v802_.v863;
      v802_.v824 = v302;
      v256 = v802_.v841;
      do {
        if (v300 >= 4) {
          v311 = 0;
          v309 = 0;
          v312 = v307;
          v313 = v802_.v863 + 4;
          v310 = v308;
          do {
            v314 = *(v312 - 2);
            v309 += 4;
            v315 = v314;
            v316 = v314 - 256;
            if (v315 <= -2048) {
              v317 = -2048;
            }
            else {
              v317 = 128;
            }
            v318 = *(v312 - 2) >> (v315 > 0);
            v319 = *(v312 - 1);
            if (v316 >= 0xF701u) {
              v317 = v318;
            }
            v320 = *(v313 - 3);
            v321 = v319;
            v322 = v319 - 256;
            v323 = v320 - v310;
            v324 = v323 + v304;
            v325 = v306 + (__int16)v323 * v317;
            v326 = -65536 * v301 + v311;
            v311 += 0x80000;
            v327 = v305 + ((v326 + 0x10000) >> 16) * v317;
            if (v321 <= -2048) {
              v328 = -2048;
            }
            else {
              v328 = 128;
            }
            v329 = *(v312 - 1) >> (v321 > 0);
            v330 = *(v313 - 2);
            if (v322 < 0xF701u) {
              LOWORD(v329) = v328;
            }
            v331 = v330 - v320;
            v332 = v325 + (__int16)(v330 - v320) * (__int16)v329;
            v333 = v327 + ((v326 + 196608) >> 16) * (__int16)v329;
            v334 = (__int16)*v312;
            if (v334 <= -2048) {
              v335 = -2048;
            }
            else {
              v335 = 128;
            }
            v336 = *v312 >> (v334 > 0);
            v337 = *(v313 - 1);
            if ((unsigned __int16)(*v312 - 256) < 0xF701u) {
              LOWORD(v336) = v335;
            }
            v338 = v337 - v330;
            v339 = (__int16)v338;
            v340 = v338 + v331;
            v341 = v312[1];
            v312 += 4;
            v342 = v340 + v324;
            v343 = v332 + v339 * (__int16)v336;
            v344 = v333 + ((v326 + 327680) >> 16) * (__int16)v336;
            v345 = v341;
            v346 = (unsigned __int16)v341;
            v347 = v341 - 256;
            if (v345 <= -2048) {
              v348 = -2048;
            }
            else {
              v348 = 128;
            }
            v349 = v346 >> (v345 > 0);
            if (v347 < 0xF701u) {
              LOWORD(v349) = v348;
            }
            v350 = *v313;
            v313 += 4;
            v310 = v350;
            v304 = v350 - v337 + v342;
            v306 = v343 + (__int16)(v350 - v337) * (__int16)v349;
            v305 = v344 + ((v326 + 458752) >> 16) * (__int16)v349;
          } while ((((unsigned __int64)(unsigned int)v301 << 17) &
                    0x1FFFFFFF80000LL) != v311);
        }
        else {
          v309 = 0;
          v310 = v308;
        }
        if ((v301 & 3) != 0) {
          v351 = 0x10000 - ((_DWORD)v301 << 16) + ((_DWORD)v309 << 17);
          v352 = &v802_.v863[v309 + 1];
          v353 = (unsigned __int16*)(v302 + 2 * v309);
          v354 = v301 & 3;
          do {
            v355 = *v353++;
            v356 = (__int16)v355;
            v357 = v355;
            v358 = v355 - 256;
            if ((__int16)v355 <= -2048) {
              v359 = -2048;
            }
            else {
              v359 = 128;
            }
            v360 = v357 >> (v356 > 0);
            if (v358 >= 0xF701u) {
              v361 = v360;
            }
            else {
              v361 = v359;
            }
            v362 = *v352++;
            --v354;
            v304 += v362 - v310;
            v363 = v351 >> 16;
            v351 += 0x20000;
            v306 += (__int16)(v362 - v310) * v361;
            v305 += v363 * v361;
            v310 = v362;
          } while (v354 != 0);
        }
        v210 = v802_.v858;
        v213 = v802_.v859;
        ++v303;
        v282 = v802_.v848;
        v214 = v802_.v844;
        v234 = v802_.v834;
        v307 = (unsigned __int16*)((char*)v307 + v802_.v848);
        v302 += v802_.v848;
      } while (v303 != v802_.v858);
      v364 = (__int16)v304;
      v247 = v802_.v857;
      v365 = 6 * v305;
      v230 = v802_.v819;
      LOBYTE(v231) = (_BYTE)v802_.v849;
      v301 = (__int64)v802_.v832;
      v286 = v802_.v824;
    }
    v366 = 1;
    v367 = (__int16*)(v802_.v863 + 1);
    do {
      v368 = *v367++;
      --v366;
    } while (v368 < (__int16)(v802_.v863[v301] + (v802_.v863[v301] >> 15)) >>
             1);
    v369 = 0;
    v370 = 0;
    v371 = (__int16)(v306 / v364);
    v372 = v371 + 205;
    v373 = (v365 / ((int)v301 * v210 * ((int)v301 - 1) +
                    (int)v301 * v210 * ((int)v301 - 1) * (int)v301)) >>
           1;
    if (v373 <= -32) {
      v373 = -32;
    }
    if (v373 >= 32) {
      v374 = 32;
    }
    else {
      v374 = v373;
    }
    v375 = v301 - 1;
    v284 = v802_.v854;
    v376 = 2 * v374;
    v377 = v301;
    v378 = v372 + v374 + v374 * v366;
    v379 = (unsigned int)v301 & 0xFFFFFFFE;
    v380 = (__int16*)(v286 + 2);
    v381 = v372 + v374 * v366;
    v382 = v802_.v861 + 2;
    while (1) {
      v383 = *(v380 - 1);
      if (v210 == 2) {
        if (v383 <= *(__int16*)((char*)v380 + v282 - 2)) {
          v383 = *(__int16*)((char*)v380 + v282 - 2);
        }
        v384 = (__int16)((v383 & (v383 >> 15)) - v381);
        if (v384 < 257) {
        LABEL_450:
          v385 = *v380;
          if (v210 == 2) {
            goto LABEL_451;
          }
          goto LABEL_457;
        }
      }
      else {
        v384 = (__int16)((v383 & (v383 >> 15)) - v381);
        if (v384 < 257) {
          goto LABEL_450;
        }
      }
      ++v370;
      *(v382 - 1) = v384 - 256;
      v385 = *v380;
      if (v210 == 2) {
      LABEL_451:
        if (v385 <= *(__int16*)((char*)v380 + v282)) {
          v385 = *(__int16*)((char*)v380 + v282);
        }
        v386 = (__int16)((v385 & (v385 >> 15)) - v378);
        if (v386 < 257) {
          goto LABEL_445;
        }
      LABEL_458:
        ++v370;
        *v382 = v386 - 256;
        goto LABEL_445;
      }
    LABEL_457:
      v386 = (__int16)((v385 & (v385 >> 15)) - v378);
      if (v386 >= 257) {
        goto LABEL_458;
      }
    LABEL_445:
      v380 += 2;
      v378 += v376;
      v369 -= 2;
      v382 += 2;
      v381 += v376;
      if (-v379 == v369) {
        v387 = -v369;
        if ((v377 & 1) != 0) {
          v388 = *(_WORD*)(v286 + 2 * v387);
          if (v210 == 2 && v388 <= *(__int16*)(v286 + 2 * v214 + 2 * v387)) {
            v388 = *(_WORD*)(v286 + 2 * v214 + 2 * v387);
          }
          v389 =
              (__int16)((v388 & (v388 >> 15)) - (v372 + v374 * (v387 + v366)));
          if (v389 >= 257) {
            ++v370;
            *(_WORD*)&v802_.v861[2 * v387] = v389 - 256;
          }
        }
        if (v370 >= 3) {
          if (v371 <= -461) {
            v372 = v371 + 461;
            v390 = v377 & 7;
            if (v375 >= 7) {
              v392 = 0;
              v393 = (__int16*)(v802_.v861 + 8);
              do {
                v394 = *(v393 - 4);
                v392 -= 8;
                if (v394 <= 256) {
                  LOWORD(v394) = 256;
                }
                *(v393 - 4) = v394 - 256;
                v395 = *(v393 - 3);
                if (v395 <= 256) {
                  LOWORD(v395) = 256;
                }
                *(v393 - 3) = v395 - 256;
                v396 = *(v393 - 2);
                if (v396 <= 256) {
                  LOWORD(v396) = 256;
                }
                *(v393 - 2) = v396 - 256;
                v397 = *(v393 - 1);
                if (v397 <= 256) {
                  LOWORD(v397) = 256;
                }
                *(v393 - 1) = v397 - 256;
                v398 = *v393;
                if (v398 <= 256) {
                  LOWORD(v398) = 256;
                }
                *v393 = v398 - 256;
                v399 = v393[1];
                if (v399 <= 256) {
                  LOWORD(v399) = 256;
                }
                v393[1] = v399 - 256;
                v400 = v393[2];
                if (v400 <= 256) {
                  LOWORD(v400) = 256;
                }
                v393[2] = v400 - 256;
                v401 = v393[3];
                if (v401 <= 256) {
                  LOWORD(v401) = 256;
                }
                v393[3] = v401 - 256;
                v393 += 8;
              } while (-(__int64)((unsigned int)v377 & 0xFFFFFFF8) != v392);
              v391 = -v392;
            }
            else {
              v391 = 0;
            }
            if ((v377 & 7) != 0) {
              v402 = (__int16*)&v802_.v861[2 * v391];
              do {
                v403 = *v402;
                if (v403 <= 256) {
                  LOWORD(v403) = 256;
                }
                --v390;
                *v402++ = v403 - 256;
              } while (v390 != 0);
            }
          }
          else {
            memset_plt(v802_.v861, 0, 2 * v377);
            v284 = v802_.v854;
            v372 = 0;
            v374 = 0;
          }
        }
        v285 = v374 << 6;
        v802_.v808 = (__int16)(v372 + 205);
        v287 = (__int64)v802_.v855;
        if ((int)v212 <= (int)v802_.v855) {
        LABEL_495:
          v290 = 0;
          goto LABEL_496;
        }
      LABEL_370:
        v288 = v212 - v287;
        if (v230 != 0) {
          v289 = (__int16)((_WORD)v213 << 10) >> 1;
        }
        else {
          v289 = 0;
        }
        if (v212 - 1 == v287) {
          v290 = 0;
          v291 = -11264;
          v292 = v287;
        }
        else {
          v293 = v288 & 0xFFFFFFFFFFFFFFFELL;
          LOWORD(v294) = -10240;
          v290 = 0;
          v295 = (__int16*)&v802_.v840[2 * v287 + 2];
          v292 = v287;
          do {
            v296 = (__int16)v294 - 1024;
            if (v296 <= *(v295 - 1) - v289) {
              LOWORD(v296) = *(v295 - 1) - v289;
            }
            if (v210 == 2 && (__int16)v296 <= v295[v214 - 1] - v289) {
              LOWORD(v296) = v295[v214 - 1] - v289;
            }
            v297 = (__int16)v296;
            v294 = (__int16)v296 - 1024;
            if (v294 <= *v295 - v289) {
              LOWORD(v294) = *v295 - v289;
            }
            if (v210 == 2 && (__int16)v294 <= v295[v214] - v289) {
              LOWORD(v294) = v295[v214] - v289;
            }
            v292 += 2;
            v293 -= 2LL;
            v295 += 2;
            v290 += v297 + (__int16)v294;
          } while (v293 != 0);
          v291 = (__int16)v294 - 1024;
        }
        if ((v288 & 1) != 0) {
          v298 = *(__int16*)&v802_.v840[2 * v292] - v289;
          if (v291 > v298) {
            LOWORD(v298) = v291;
          }
          if (v210 == 2) {
            v299 = *(__int16*)&v802_.v840[2 * v214 + 2 * v292] - v289;
            if ((__int16)v298 <= v299) {
              LOWORD(v298) = v299;
            }
          }
          v290 += (__int16)v298;
        }
      LABEL_496:
        v802_.v805 = v285;
        v404 = *((_WORD*)v247 + 124);
        v405 = (__int16)(v290 / ((int)v212 - (int)v802_.v846) - v404);
        if (v405 <= -1536) {
          v405 = -1536;
        }
        if (v405 >= 3072) {
          v285 = 3072;
        }
        else {
          v285 = v405;
        }
        *((_WORD*)v247 + 124) = v404 + ((unsigned int)(655 * v285) >> 15);
        goto LABEL_502;
      }
    }
  }
  v283 = *((_DWORD*)v247 + 17);
  v284 = v802_.v854;
LABEL_364:
  v285 = 0;
  if (v283 == 0) {
    v802_.v808 = 0;
    v287 = (__int64)v802_.v855;
    if ((int)v212 <= (int)v802_.v855) {
      goto LABEL_495;
    }
    goto LABEL_370;
  }
  LODWORD(v802_.v827) = 1;
  v802_.v808 = 0;
  v802_.v805 = 0;
LABEL_502:
  if ((v802_.v860 & 1) == 0) {
    memcpy_plt(v802_.v865, v802_.v840, v866_.v867);
    v284 = v802_.v854;
  }
  v802_.v807 = v285;
  if (v213 != 0) {
    v406 = *(_DWORD*)v802_.v852 + __clz(*v802_.v853) - 29;
    if (v406 > v802_.v842) {
      v407 = 1;
    }
    else {
      v407 = v231;
    }
    if ((v407 & 1) != 0) {
      v408 = (int)v802_.v850;
    }
    else if ((((signed __int32)*((_DWORD*)v802_.v857 + 7) < 5) |
              v802_.v827 & 1) != 0) {
      v408 = 0;
    }
    else {
      v409 = v802_.v840;
      if (MovieRoutine_30f00((__int64)v802_.v840, v802_.v845, v214, v212,
                             v210)) {
        v410 = (__int64*)v802_.v864;
        v411 = v866_.v868;
        compute_mdcts((__int64)v802_.v864, v802_.v821, (__int64)v802_.v839,
                      (__int64)v866_.v868, v210, (int)v866_.v866, v213,
                      *((_DWORD*)v802_.v857 + 8), *((_DWORD*)v802_.v857 + 19));
        compute_band_energies((__int64)v410, (__int64)v411, (__int64)v234, v256,
                              v210, v213);
        op_pvq_search_c((__int64)v410, v256, v212, (__int64)v234, (__int64)v409,
                        v210);
        v284 = v802_.v854;
        v412 = v802_.v865;
        if ((int)v802_.v818 >= 1) {
          v413 = (__int16)((_WORD)v213 << 10) >> 1;
          v414 = v802_.v818 & 7;
          if ((unsigned int)v802_.v818 >= 8) {
            v416 = v802_.v865 + 8;
            v417 = 0;
            v418 = -(v802_.v818 & 0x7FFFFFF8);
            do {
              v417 -= 8;
              *(v416 - 4) += v413;
              *(v416 - 3) += v413;
              *(v416 - 2) += v413;
              *(v416 - 1) += v413;
              *v416 += v413;
              v416[1] += v413;
              v416[2] += v413;
              v416[3] += v413;
              v416 += 8;
            } while (v418 != v417);
            v415 = -v417;
          }
          else {
            v415 = 0;
          }
          if (v414 != 0) {
            v419 = &v412[2 * v415];
            do {
              --v414;
              *v419++ += v413;
            } while (v414 != 0);
          }
        }
        v408 = 1;
        v871[0] = 3277;
        v406 = *(_DWORD*)v802_.v852 + __clz(*v802_.v853) - 29;
        v230 = v802_.v821;
      }
      else {
        v284 = v802_.v854;
        v408 = 0;
      }
    }
    if (v406 <= v802_.v842) {
      ec_enc_bit_logp(v802_.v862, v408, 3);
      v284 = v802_.v854;
    }
    v247 = v802_.v857;
  }
  else {
    v408 = (int)v802_.v850;
  }
  LODWORD(v802_.v850) = v408;
  v802_.v819 = v230;
  v420 = 2LL * v284 * v210;
  v421 = &v802_.v802[-((v420 + 15) & 0xFFFFFFFFFFFFFFF0LL)];
  v802_.v832 = v421;
  memset_plt(v421, 0, v420);
  normalise_bands((__int64)v802_.v864, (__int64)v866_.v868, (__int64)v421,
                  (__int64)v234, v256, v210, v802_.v821);
  if (v802_.v838 < 15 * v210 || (_DWORD)v802_.v846 != 0) {
    v422 = *((_DWORD*)v247 + 17);
    LODWORD(v866_.v868) = 0;
  }
  else {
    v422 = *((_DWORD*)v247 + 17);
    v424 = *((int*)v247 + 7) > 1 && v422 == 0;
    LODWORD(v866_.v868) = v424;
  }
  v425 = 4 * v214;
  v426 = v214;
  v427 = (4 * v214 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  memset_plt(&v802_.v802[-v427], 0, v425);
  v428 = &v802_.v802[-v427];
  memset_plt(&v802_.v802[-v427], 0, v425);
  memset_plt(&v802_.v802[-v427], 0, v425);
  v429 = (__int64*)v802_.v864;
  v430 = *((_DWORD*)v247 + 16);
  v431 = *((_DWORD*)v247 + 12);
  v432 = *((_DWORD*)v247 + 14);
  v799 = *((_QWORD*)v802_.v864 + 7);
  v802_.v860 = (__int64)&v802_.v802[-v427];
  v433 = v426;
  v434 = (__int64)v802_.v855;
  v801 = v422;
  v435 = v802_.v859;
  v436 = (int)v802_.v850;
  v866_.v866 = &v802_.v802[-v427];
  v437 = v802_.v838;
  v802_.v810 = MovieRoutine_314e0(
      (__int64)v802_.v840, (__int64)v802_.v865, v433, (unsigned int)v802_.v855,
      v212, v802_.v858, (__int64)&v802_.v802[-v427], v430, v799,
      (int)v802_.v850, v431, v432, (__int64)v802_.v863, v802_.v859, v802_.v838,
      (int*)&v870 + 1, v801, (__int64)v802_.v861, v802_.v837,
      (__int64)&v802_.v802[-v427], (__int64)&v802_.v802[-v427]);
  v438 = &v802_.v802[-v427];
  v802_.v827 = v425;
  memset_plt(v438, 0, v425);
  v802_.v849 = v438;
  if ((_DWORD)v866_.v868 != 0) {
    v439 = 20480 / v437;
    if (20480 / v437 <= 78) {
      v439 = 78;
    }
    v440 = v802_.v841;
    v441 = tf_analysis_alt1((__int64)v429, v802_.v841, v436, (__int64)v438,
                            v439 + 2, (__int64)v802_.v832, v802_.v854, v435,
                            v871[0], v872, v428);
    if ((int)v802_.v825 >= (int)v212) {
      v443 = v802_.v857;
      v442 = v802_.v858;
      v444 = v802_.v835;
      v448 = v802_.v829;
      v453 = v802_.v842;
      v445 = v802_.v840;
    }
    else {
      v443 = v802_.v857;
      v442 = v802_.v858;
      v444 = v802_.v835;
      v445 = v802_.v840;
      v446 = v440;
      v447 = ((_BYTE)v212 - (_BYTE)v440) & 7;
      v448 = v802_.v829;
      v449 = *(_DWORD*)&v438[4 * v440 - 4];
      for (j = v802_.v842; v447 != 0; --v447) {
        *(_DWORD*)&v438[4 * v446++] = v449;
      }
      if ((unsigned int)(v440 - v212) <= 0xFFFFFFF8) {
        v451 = v212 - v446;
        v452 = &v438[4 * v446 + 16];
        do {
          *(v452 - 4) = v449;
          *(v452 - 3) = v449;
          *(v452 - 2) = v449;
          *(v452 - 1) = v449;
          v451 -= 8;
          *v452 = v449;
          v452[1] = v449;
          v452[2] = v449;
          v452[3] = v449;
          v452 += 8;
        } while (v451 != 0);
      }
      v453 = j;
    }
    goto LABEL_576;
  }
  if ((_DWORD)v434 != 0 && (_DWORD)v870 != 0) {
    v443 = v802_.v857;
    v442 = v802_.v858;
    v436 = (int)v802_.v850;
    v444 = v802_.v835;
    v448 = v802_.v829;
    v440 = v802_.v841;
    v453 = v802_.v842;
    v445 = v802_.v840;
    v454 = (__int64)v802_.v849;
    if ((int)v212 >= 1) {
      v455 = v212 & 7;
      if ((unsigned int)v212 >= 8) {
        v460 = v802_.v849 + 16;
        v461 = 0;
        do {
          *(v460 - 2) = 0x100000001LL;
          *(v460 - 1) = 0x100000001LL;
          *v460 = 0x100000001LL;
          v460[1] = 0x100000001LL;
          v460 += 4;
          v461 -= 8;
        } while (-(v212 & 0x7FFFFFF8) != v461);
        v456 = -v461;
      }
      else {
        v456 = 0;
      }
      if ((v212 & 7) != 0) {
        v462 = (_DWORD*)(v454 + 4 * v456);
        do {
          *v462++ = 1;
          --v455;
        } while (v455 != 0);
      }
    }
  LABEL_575:
    v441 = 0;
    goto LABEL_576;
  }
  v443 = v802_.v857;
  v442 = v802_.v858;
  v436 = (int)v802_.v850;
  v444 = v802_.v835;
  v448 = v802_.v829;
  v440 = v802_.v841;
  v453 = v802_.v842;
  v445 = v802_.v840;
  v457 = (__int64)v802_.v849;
  if ((_DWORD)v434 == 0 || v802_.v838 > 14 ||
      *((_DWORD*)v802_.v857 + 47) == 2) {
    if ((int)v212 >= 1) {
      v458 = v212 & 7;
      if ((unsigned int)v212 >= 8) {
        v463 = (int*)(v802_.v849 + 16);
        v464 = 0;
        do {
          *(v463 - 4) = v436;
          *(v463 - 3) = v436;
          *(v463 - 2) = v436;
          *(v463 - 1) = v436;
          v464 -= 8;
          *v463 = v436;
          v463[1] = v436;
          v463[2] = v436;
          v463[3] = v436;
          v463 += 8;
        } while (-(v212 & 0x7FFFFFF8) != v464);
        v459 = -v464;
      }
      else {
        v459 = 0;
      }
      if ((v212 & 7) != 0) {
        v465 = (int*)(v457 + 4 * v459);
        do {
          *v465++ = v436;
          --v458;
        } while (v458 != 0);
      }
    }
    goto LABEL_575;
  }
  v441 = (int)v802_.v850;
  if ((int)v212 >= 1) {
    memset_plt(v802_.v849, 0, 4 * v212);
    v441 = v436;
  }
LABEL_576:
  LODWORD(v802_.v865) = v441;
  v802_.v839 = &v802_.v802[-((v866_.v867 + 15) & 0xFFFFFFFFFFFFFFF0LL)];
  memset_plt(v802_.v839, 0, v866_.v867);
  v466 = 0;
  v467 = nullptr;
  v468 = v802_.v848;
  if (v442 <= 1) {
    v469 = 1;
  }
  else {
    v469 = (unsigned int)v442;
  }
  v802_.v825 = 4 * v448;
  v470 = &v445[2 * v434];
  v866_.v868 = (_BYTE*)v469;
  v471 = (__int64)v443 + 4 * v448 + 2 * v434 + 252;
  v866_.v867 = ~v434 + v212;
  v802_.v824 = v212 - v434;
  v472 = 6LL * v444 + 4 * v448;
  v473 = v472 + 2 * v434;
  v474 = (char*)v443 + v472;
  v475 = (__int64)v443 + v473 + 252;
  do {
    if ((int)v434 < (int)v212) {
      v476 = v434;
      if ((((_BYTE)v212 - (_BYTE)v434) & 7) != 0) {
        v477 = 0;
        do {
          v478 = *(_WORD*)&v470[2 * v477];
          v479 = v478 - *(__int16*)(v471 + 2 * v477);
          if (v479 < 0) {
            v479 = *(__int16*)(v471 + 2 * v477) - v478;
          }
          if ((unsigned int)v479 <= 0x7FF) {
            *(_WORD*)&v470[2 * v477] =
                v478 - ((unsigned int)*(__int16*)(v475 + 2 * v477) >> 2);
          }
          ++v477;
        } while ((((_BYTE)v212 - (_BYTE)v434) & 7) != v477);
        v476 = v434 + v477;
      }
      if (v866_.v867 >= 7) {
        v480 = v212 - v476;
        v481 = v466 + 2 * v476;
        v482 = (char*)v443 + 4 * v448;
        v483 = v474;
        v484 = v445;
        do {
          v485 = *(_WORD*)&v484[v481];
          v486 = v485 - *(__int16*)&v482[v481 + 252];
          if (v486 < 0) {
            v486 = *(__int16*)&v482[v481 + 252] - v485;
          }
          if ((unsigned int)v486 <= 0x7FF) {
            *(_WORD*)&v484[v481] =
                v485 - ((unsigned int)*(__int16*)&v483[v481 + 252] >> 2);
          }
          v487 = &v484[v481];
          v488 = *(_WORD*)&v484[v481 + 2];
          v489 = v488 - *(__int16*)&v482[v481 + 254];
          if (v489 < 0) {
            v489 = *(__int16*)&v482[v481 + 254] - v488;
          }
          if ((unsigned int)v489 <= 0x7FF) {
            *((_WORD*)v487 + 1) =
                v488 - ((unsigned int)*(__int16*)&v483[v481 + 254] >> 2);
          }
          v490 = *((_WORD*)v487 + 2);
          v491 = v490 - *(__int16*)&v482[v481 + 256];
          if (v491 < 0) {
            v491 = *(__int16*)&v482[v481 + 256] - v490;
          }
          if ((unsigned int)v491 <= 0x7FF) {
            *((_WORD*)v487 + 2) =
                v490 - ((unsigned int)*(__int16*)&v483[v481 + 256] >> 2);
          }
          v492 = &v484[v481];
          v493 = *(_WORD*)&v484[v481 + 6];
          v494 = v493 - *(__int16*)&v482[v481 + 258];
          if (v494 < 0) {
            v494 = *(__int16*)&v482[v481 + 258] - v493;
          }
          if ((unsigned int)v494 <= 0x7FF) {
            *((_WORD*)v492 + 3) =
                v493 - ((unsigned int)*(__int16*)&v483[v481 + 258] >> 2);
          }
          v495 = *((_WORD*)v492 + 4);
          v496 = v495 - *(__int16*)&v482[v481 + 260];
          if (v496 < 0) {
            v496 = *(__int16*)&v482[v481 + 260] - v495;
          }
          if ((unsigned int)v496 <= 0x7FF) {
            *((_WORD*)v492 + 4) =
                v495 - ((unsigned int)*(__int16*)&v483[v481 + 260] >> 2);
          }
          v497 = &v484[v481];
          v498 = *(_WORD*)&v484[v481 + 10];
          v499 = v498 - *(__int16*)&v482[v481 + 262];
          if (v499 < 0) {
            v499 = *(__int16*)&v482[v481 + 262] - v498;
          }
          if ((unsigned int)v499 <= 0x7FF) {
            *((_WORD*)v497 + 5) =
                v498 - ((unsigned int)*(__int16*)&v483[v481 + 262] >> 2);
          }
          v500 = *((_WORD*)v497 + 6);
          v501 = v500 - *(__int16*)&v482[v481 + 264];
          if (v501 < 0) {
            v501 = *(__int16*)&v482[v481 + 264] - v500;
          }
          if ((unsigned int)v501 <= 0x7FF) {
            *((_WORD*)v497 + 6) =
                v500 - ((unsigned int)*(__int16*)&v483[v481 + 264] >> 2);
          }
          v502 = *(_WORD*)&v484[v481 + 14];
          v503 = v502 - *(__int16*)&v482[v481 + 266];
          if (v503 < 0) {
            v503 = *(__int16*)&v482[v481 + 266] - v502;
          }
          if ((unsigned int)v503 <= 0x7FF) {
            *(_WORD*)&v484[v481 + 14] =
                v502 - ((unsigned int)*(__int16*)&v483[v481 + 266] >> 2);
          }
          v480 -= 8;
          v484 += 16;
          v483 += 16;
          v482 += 16;
        } while (v480 != 0);
      }
    }
    ++v467;
    v475 += v468;
    v471 += v468;
    v470 += v468;
    v466 += v468;
  } while (v467 != v866_.v868);
  v504 = v802_.v859;
  v800 = v442;
  v505 = v802_.v862;
  quant_coarse_energy((__int64)v802_.v864, v802_.v846, v212, v440,
                      (__int64)v445, (__int64)v802_.v845, v453,
                      (__int64)v802_.v839, (__int64)v802_.v862, v800,
                      v802_.v859, v802_.v831, *((_DWORD*)v443 + 4),
                      (int*)v443 + 22, (signed __int32)*((_DWORD*)v443 + 7) > 3,
                      *((_DWORD*)v443 + 15), *((_DWORD*)v443 + 17));
  v506 = 8 * *((_DWORD*)v505 + 2);
  v507 = *(_DWORD*)v802_.v852 + __clz(*v802_.v853) - 32;
  if (v436 != 0) {
    v508 = 2;
  }
  else {
    v508 = 4;
  }
  v510 = v504 != 0 && v507 + v508 + 1 <= v506;
  if ((int)v212 <= (int)v434) {
    v513 = v802_.v862;
    v514 = 0;
    v515 = (__int64)v802_.v849;
  }
  else {
    v511 = v506 - v510;
    if (v436 != 0) {
      v512 = 4;
    }
    else {
      v512 = 5;
    }
    v513 = v802_.v862;
    if (v507 + v508 <= v511) {
      v516 = (__int64)v802_.v849;
      ec_enc_bit_logp(v802_.v862, *(_DWORD*)&v802_.v849[4 * v434], v508);
      v515 = v516;
      v514 = *(_DWORD*)(v516 + 4 * v434);
      v507 = *(_DWORD*)v802_.v852 + __clz(*v802_.v853) - 32;
    }
    else {
      v514 = 0;
      v515 = (__int64)v802_.v849;
      *(_DWORD*)&v802_.v849[4 * v434] = 0;
    }
    if ((_DWORD)v212 != (_DWORD)v434 + 1) {
      v517 = v434;
      v518 = ~(_DWORD)v802_.v846 + v212;
      v519 = (int*)(v515 + 4 * v517 + 4);
      v520 = v514;
      do {
        while (v507 + v512 > v511) {
          *v519++ = v520;
          if (--v518 == 0) {
            goto LABEL_647;
          }
        }
        ec_enc_bit_logp(v513, *v519 ^ v520, v512);
        v515 = (__int64)v802_.v849;
        v521 = *v519++;
        v520 = v521;
        v507 = *(_DWORD*)v802_.v852 + __clz(*v802_.v853) - 32;
        v514 |= v521;
        --v518;
      } while (v518 != 0);
    }
  }
LABEL_647:
  if (v510) {
    v522 = v514;
    v523 = (int)v802_.v850;
    v524 = v802_.v855;
    v525 = v802_.v823;
    v526 = &MovieData_a231a[4 * (unsigned int)v802_.v850 + v522 + v802_.v823];
    if (*v526 == v526[2]) {
      v527 = 0;
    }
    else {
      v530 = (int)v802_.v865;
      ec_enc_bit_logp(v513, (int)v802_.v865, 1);
      v515 = (__int64)v802_.v849;
      v527 = 2 * v530;
    }
    v528 = v802_.v858;
    v529 = v802_.v842;
    if ((int)v212 > (int)v524) {
    LABEL_654:
      v531 = v527 | (unsigned int)(4 * v523);
      v532 = v524;
      v533 = v802_.v824 & 7;
      if ((v802_.v824 & 7) != 0) {
        v532 = v524;
        do {
          --v533;
          *(_DWORD*)(v515 + 4LL * (_QWORD)v532) =
              MovieData_a231a[*(int*)(v515 + 4LL * (_QWORD)v532) +
                              (unsigned __int64)(unsigned int)v531 + v525];
          v532 = (_QWORD*)((char*)v532 + 1);
        } while (v533 != 0);
      }
      if (v866_.v867 >= 7) {
        v534 = v212 - (_QWORD)v532;
        v535 = (int*)(v515 + 4LL * (_QWORD)v532 + 16);
        do {
          v534 -= 8;
          v536 = MovieData_a231a[v531 + *(v535 - 3) + v525];
          *(v535 - 4) = MovieData_a231a[v531 + *(v535 - 4) + v525];
          *(v535 - 3) = v536;
          v537 = MovieData_a231a[v531 + *(v535 - 1) + v525];
          *(v535 - 2) = MovieData_a231a[v531 + *(v535 - 2) + v525];
          *(v535 - 1) = v537;
          v538 = MovieData_a231a[v531 + v535[1] + v525];
          *v535 = MovieData_a231a[v531 + *v535 + v525];
          v535[1] = v538;
          v539 = MovieData_a231a[v531 + v535[3] + v525];
          v535[2] = MovieData_a231a[v531 + v535[2] + v525];
          v535[3] = v539;
          v535 += 8;
        } while (v534 != 0);
      }
    }
  }
  else {
    v524 = v802_.v855;
    v528 = v802_.v858;
    v523 = (int)v802_.v850;
    v527 = 0;
    v525 = v802_.v823;
    v529 = v802_.v842;
    if ((int)v212 > (int)v802_.v855) {
      goto LABEL_654;
    }
  }
  v540 = v802_.v838;
  if ((int)(*(_DWORD*)v802_.v852 + __clz(*v802_.v853) - 28) > v529) {
    goto LABEL_666;
  }
  if (*((_DWORD*)v443 + 17) != 0) {
    *((_DWORD*)v443 + 26) = 0;
    goto LABEL_663;
  }
  if ((_DWORD)v524 == 0) {
    v798 = *((_DWORD*)v443 + 7);
    if (v802_.v819 == 0 && v798 >= 3 && v802_.v831 >= 10 * v528) {
      v541 = spreading_decision((__int64)v802_.v864, (__int64)v802_.v832,
                                (int*)v443 + 23, *((_DWORD*)v443 + 21),
                                (int*)v443 + 25, v802_.v804, v802_.v803, v440,
                                v528, v802_.v821, v802_.v860);
      *((_DWORD*)v443 + 21) = v541;
      goto LABEL_665;
    }
    if (v798 != 0) {
    LABEL_663:
      v541 = 2;
      goto LABEL_664;
    }
  LABEL_1035:
    v541 = 0;
    *((_DWORD*)v443 + 21) = 0;
    goto LABEL_665;
  }
  if (*((_DWORD*)v443 + 7) == 0) {
    goto LABEL_1035;
  }
  if (v523 != 0) {
    goto LABEL_663;
  }
  v541 = 3;
LABEL_664:
  *((_DWORD*)v443 + 21) = v541;
LABEL_665:
  ec_enc_icdf(v513, v541, (__int64)&MovieData_a24c5, 5);
LABEL_666:
  v542 = v802_.v859;
  if (*((_DWORD*)v443 + 17) != 0) {
    if (v540 <= 26) {
      v543 = v540 / 3;
    }
    else {
      v543 = 8;
    }
    *(_DWORD*)v866_.v866 = v543;
  }
  v544 = &v802_.v802[-((v802_.v827 + 15) & 0xFFFFFFFFFFFFFFF0LL)];
  memset_plt(v544, 0, v802_.v827);
  v802_.v860 = (__int64)v544;
  init_caps((__int64)v802_.v864, (__int64)v544, v542, v528);
  LODWORD(v802_.v861) = 8 * v529;
  v545 = ec_tell_frac((__int64)v802_.v862);
  LODWORD(v802_.v865) = 0;
  if ((int)v212 > (int)v802_.v846) {
    v546 = 6;
    LODWORD(v802_.v865) = 0;
    v547 = v524;
    do {
      while (1) {
        while (1) {
          v548 = (__int64)v547 + 1;
          v549 = (((__int16)v802_.v863[(_QWORD)v547 + 1] -
                   (__int16)v802_.v863[(_QWORD)v547]) *
                  v528)
                 << v542;
          v550 = 8 * v549;
          if (v549 <= 48) {
            v549 = 48;
          }
          v551 = v550 >= v549 ? v549 : v550;
          if (v545 + 8 * v546 < (int)v802_.v861 - (int)v802_.v865 &&
              *(int*)(v802_.v860 + 4LL * (_QWORD)v547) >= 1) {
            break;
          }
          *(_DWORD*)&v866_.v866[4 * (_QWORD)v547] = 0;
          v547 = (_QWORD*)((char*)v547 + 1);
          if (v548 == v212) {
            goto LABEL_699;
          }
        }
        v552 = v802_.v862;
        v553 = *(_DWORD*)&v866_.v866[4 * (_QWORD)v547];
        ec_enc_bit_logp(v802_.v862, v553 > 0, v546);
        v545 = ec_tell_frac((__int64)v552);
        if (v553 >= 1) {
          break;
        }
        v443 = v802_.v857;
        v528 = v802_.v858;
        *(_DWORD*)&v866_.v866[4 * (_QWORD)v547] = 0;
        v547 = (_QWORD*)((char*)v547 + 1);
        if (v548 == v212) {
          goto LABEL_699;
        }
      }
      v554 = (_DWORD)v802_.v865 + v551;
      v555 = (_DWORD)v802_.v861 - ((_DWORD)v802_.v865 + v551);
      if (v545 + 8 >= v555 ||
          v551 >= (signed __int32)*(_DWORD*)(v802_.v860 + 4LL * (_QWORD)v547)) {
        v558 = v551;
      }
      else {
        v556 = -2 * v551;
        v557 = 1;
        v558 = v551;
        while (1) {
          v559 = v802_.v862;
          v560 = *(_DWORD*)&v866_.v866[4 * (_QWORD)v547];
          ec_enc_bit_logp(v802_.v862, v557 < v560, 1);
          v545 = ec_tell_frac((__int64)v559);
          if (v557 >= v560) {
            LODWORD(v524) = (_DWORD)v802_.v855;
            v212 = v802_.v856;
            v554 = (_DWORD)v802_.v865 + v558;
            v542 = v802_.v859;
            goto LABEL_690;
          }
          v212 = v802_.v856;
          v542 = v802_.v859;
          v555 -= v551;
          if (v545 + 8 >= v555) {
            break;
          }
          v556 -= v551;
          ++v557;
          v558 += v551;
          if (v558 >=
              (signed __int32)*(_DWORD*)(v802_.v860 + 4LL * (_QWORD)v547)) {
            LODWORD(v524) = (_DWORD)v802_.v855;
            v554 = (_DWORD)v802_.v865 + v558;
            goto LABEL_690;
          }
        }
        v558 = -v556;
        v554 = (_DWORD)v802_.v865 - v556;
        LODWORD(v524) = (_DWORD)v802_.v855;
      }
    LABEL_690:
      LODWORD(v802_.v865) = v554;
      if (v546 <= 3) {
        v561 = 3;
      }
      else {
        v561 = v546;
      }
      v546 = v561 - 1;
      v443 = v802_.v857;
      v528 = v802_.v858;
      *(_DWORD*)&v866_.v866[4 * (_QWORD)v547] = v558;
      v547 = (_QWORD*)((char*)v547 + 1);
    } while (v548 != v212);
  }
LABEL_699:
  v562 = (__int64)v802_.v832;
  if (v528 != 2) {
    goto LABEL_773;
  }
  v563 = v545;
  if (v542 == 0) {
    goto LABEL_767;
  }
  v564 = 0;
  v565 = 1;
  v566 = 1;
  v567 = *((_WORD**)v802_.v864 + 3);
  LOWORD(v568) = *v567;
  while (2) {
    ++v564;
    LODWORD(v569) = (__int16)v568 << v542;
    v568 = (__int16)v567[v564];
    LODWORD(v570) = v568 << v542;
    if ((int)v569 < v568 << v542) {
      v571 = (int)v569;
      v572 = ((int)v570 - (int)v569) & 3LL;
      if (v572 != 0) {
        v569 = (int)v569;
        do {
          v573 = 2 * v569++;
          v574 = *(__int16*)&v802_.v832[v573];
          v575 = *(__int16*)&v802_.v832[2 * v802_.v820 + v573];
          v576 = v575 + v574;
          if (v574 >= 0) {
            v577 = v574;
          }
          else {
            v577 = -v574;
          }
          if (v575 >= 0) {
            v578 = v575;
          }
          else {
            v578 = -v575;
          }
          v579 = v577 + v565;
          if (v576 < 0) {
            v576 = -v576;
          }
          v580 = v574 - v575;
          v565 = v579 + v578;
          if (v580 < 0) {
            v580 = -v580;
          }
          --v572;
          v566 += v580 + v576;
        } while (v572 != 0);
        v570 = (int)v570;
        if ((unsigned __int64)(v571 - (int)v570) <= 0xFFFFFFFFFFFFFFFCLL) {
        LABEL_720:
          v581 = v570 - v569;
          v582 = &v802_.v832[2 * v802_.v820 + 4 + 2 * v569];
          v583 = &v802_.v832[2 * v569 + 4];
          do {
            v584 = *((__int16*)v583 - 2);
            v585 = *((__int16*)v582 - 2);
            v586 = v585 + v584;
            if (v584 >= 0) {
              v587 = *((__int16*)v583 - 2);
            }
            else {
              v587 = -v584;
            }
            if (v585 >= 0) {
              v588 = *((__int16*)v582 - 2);
            }
            else {
              v588 = -v585;
            }
            v589 = v587 + v565;
            v590 = *((__int16*)v582 - 1);
            if (v586 < 0) {
              v586 = -v586;
            }
            v591 = v584 - v585;
            v592 = *((__int16*)v583 - 1);
            if (v591 < 0) {
              v591 = -v591;
            }
            v593 = v591 + v566;
            v594 = v590 + v592;
            if (v592 >= 0) {
              v595 = *((__int16*)v583 - 1);
            }
            else {
              v595 = -v592;
            }
            if (v590 >= 0) {
              v596 = *((__int16*)v582 - 1);
            }
            else {
              v596 = -v590;
            }
            v597 = v595 + v588;
            if (v594 < 0) {
              v594 = -v594;
            }
            v598 = v592 - v590;
            v599 = v597 + v589;
            if (v598 < 0) {
              v598 = -v598;
            }
            v600 = v598 + v586;
            v601 = *(__int16*)v582;
            v602 = v600 + v593;
            v603 = *(__int16*)v583;
            v604 = v601 + v603;
            if (v603 >= 0) {
              v605 = *(__int16*)v583;
            }
            else {
              v605 = -v603;
            }
            if (v601 >= 0) {
              v606 = *(__int16*)v582;
            }
            else {
              v606 = -v601;
            }
            v607 = v605 + v596;
            if (v604 < 0) {
              v604 = -v604;
            }
            v608 = v603 - v601;
            v609 = *((__int16*)v582 + 1);
            v610 = v607 + v606;
            v582 += 8;
            if (v608 < 0) {
              v608 = -v608;
            }
            v611 = v610 + v599;
            v612 = v608 + v594;
            v613 = *((__int16*)v583 + 1);
            v583 += 8;
            v614 = v612 + v604 + v602;
            v615 = v609 + v613;
            if (v613 >= 0) {
              v616 = v613;
            }
            else {
              v616 = -v613;
            }
            if (v609 >= 0) {
              v617 = v609;
            }
            else {
              v617 = -v609;
            }
            v565 = v616 + v617 + v611;
            if (v615 >= 0) {
              v618 = v609 + v613;
            }
            else {
              v618 = -v615;
            }
            v619 = v613 - v609;
            if (v619 < 0) {
              v619 = -v619;
            }
            v581 -= 4;
            v566 = v619 + v618 + v614;
          } while (v581 != 0);
        }
      }
      else {
        v569 = (int)v569;
        v570 = (int)v570;
        if ((unsigned __int64)((int)v569 - (__int64)(int)v570) <=
            0xFFFFFFFFFFFFFFFCLL) {
          goto LABEL_720;
        }
      }
    }
    if (v564 != 13) {
      continue;
    }
    break;
  }
  v620 = (__int16)v567[13];
  if (v542 == 1) {
    LOWORD(v564) = 5;
  }
  v874 =
      (int)((unsigned __int64)((__int16)((v620 << (v542 + 1)) + v564) *
                               (__int64)(int)((unsigned __int64)(3036938240LL *
                                                                 v566) >>
                                              32)) >>
            15) >
      (int)((unsigned __int64)((__int16)(v620 << (v542 + 1)) * (__int64)v565) >>
            15);
LABEL_767:
  v621 =
      hysteresis_decision(v802_.v822 / 1000, (__int64)&MovieData_a24ca,
                          (__int64)&MovieData_a24f4, 21, *((_DWORD*)v443 + 59));
  if ((int)v524 <= v621) {
    v622 = v621;
  }
  else {
    v622 = (int)v524;
  }
  v545 = v563;
  if ((int)v212 < v622) {
    v622 = v212;
  }
  *((_DWORD*)v443 + 59) = v622;
LABEL_773:
  v623 = v545;
  v624 = v545 + 48;
  v625 = v802_.v862;
  v626 = v802_.v864;
  if (v624 <= (int)v802_.v861 - (int)v802_.v865) {
    if ((int)v524 > 0 || *((_DWORD*)v443 + 17) != 0) {
      *((_WORD*)v443 + 116) = 0;
      v631 = 5;
    }
    else {
      v631 = alloc_trim_analysis(
          (__int64)v802_.v864, v562, (__int64)v802_.v840, v212, v542, v528,
          v802_.v854, (__int64)v802_.v837, (__int16*)v443 + 116, v871[0],
          *((_DWORD*)v443 + 59), v802_.v805, v802_.v822);
    }
    v627 = v631;
    v628 = v802_.v846;
    ec_enc_icdf(v625, v631, (__int64)&MovieData_a251e, 7);
    v623 = ec_tell_frac((__int64)v625);
    v626 = v802_.v864;
    if (v802_.v843 >= 1) {
      goto LABEL_780;
    }
  LABEL_775:
    v629 = v625;
    v630 = v802_.v847;
    goto LABEL_883;
  }
  v627 = 5;
  v628 = v802_.v846;
  if (v802_.v843 < 1) {
    goto LABEL_775;
  }
LABEL_780:
  v632 = *((_DWORD*)v626 + 8);
  if (v802_.v847 >= (int)(0x4FBu >> v802_.v817)) {
    v633 = 0x4FBu >> v802_.v817;
  }
  else {
    v633 = v802_.v847;
  }
  if ((_DWORD)v524 != 0) {
    v634 =
        (v802_.v843 - 72 * v528 - 32) & ~((v802_.v843 - 72 * v528 - 32) >> 31);
    v635 = v632 - v542;
    v636 = *((_DWORD*)v443 + 14);
    if (v636 != 0) {
      goto LABEL_785;
    }
  }
  else {
    v634 = v802_.v843 - 8 * v802_.v809;
    v635 = v632 - v542;
    v636 = *((_DWORD*)v443 + 14);
    if (v636 != 0) {
    LABEL_785:
      v634 += *((int*)v443 + 55) >> v635;
    }
  }
  if (v628 != 0) {
    v637 = *((_DWORD*)v443 + 48);
    v638 = v637 <= 100;
    if (v637 >= 100) {
      v639 = 0;
    }
    else {
      v639 = 0x60u >> v802_.v817;
    }
    v640 = v639 + v634;
    v641 = 0x90u >> v802_.v817;
    if (v638) {
      v641 = 0;
    }
    v642 = v640 - v641 + ((400 * (__int16)(v871[0] - 4096)) >> 14);
    if (v642 <= 400) {
      v643 = 400;
    }
    else {
      v643 = v642;
    }
    if (v871[0] > 11469) {
      v642 = v643;
    }
    v644 = (((int)v802_.v865 + v623 + 63) >> 6) + 2;
    if (v644 <= (v802_.v811 + (int)v802_.v865) >> 6) {
      v644 = (v802_.v811 + (int)v802_.v865) >> 6;
    }
  }
  else {
    v645 = *((_QWORD*)v626 + 3);
    v646 = *((_DWORD*)v443 + 59);
    if (*((_DWORD*)v443 + 24) != 0) {
      v647 = *((_DWORD*)v443 + 24);
    }
    else {
      v647 = *((_DWORD*)v626 + 2);
    }
    v648 = *(__int16*)(v645 + 2LL * v647);
    if ((_DWORD)v802_.v858 == 2) {
      if (v646 >= v647) {
        v649 = v647;
      }
      else {
        v649 = *((_DWORD*)v443 + 59);
      }
      v648 += *(__int16*)(v645 + 2LL * v649);
    }
    v650 = *((_DWORD*)v443 + 17);
    v651 = v634;
    v652 = 8 * (v648 << v542);
    if (*v802_.v837 != 0) {
      v653 = *((float*)v443 + 35);
      v651 = v634;
      if (v653 < 0x1.999999999999ap-2) {
        v651 = v634 - (int)(float)((float)(0x1.99999a0000000p-2f - v653) *
                                   (float)v652);
      }
    }
    if ((_DWORD)v802_.v858 == 2) {
      if (v646 >= v647) {
        v646 = v647;
      }
      v654 = (*(__int16*)(v645 + 2LL * v646) << v542) - v646;
      v655 = v654;
      v656 = (__int16)(8 * v654);
      v657 = 26214 * v655 / (__int16)(v648 << v542);
      v658 = *((_WORD*)v443 + 116);
      if (v658 >= 256) {
        v658 = 256;
      }
      v659 = (v656 * (__int16)(v658 - 26)) >> 8;
      v660 = (unsigned __int64)((__int16)v657 * (__int64)v651) >> 15;
      if (v659 >= (int)v660) {
        v659 = v660;
      }
      v651 -= v659;
    }
    v661 = v443[30];
    v662 =
        (((unsigned __int64)((__int16)(v871[0] - 721) *
                             (__int64)(HIDWORD(v870) + (-19 << v542) + v651)) >>
          14) &
         0xFFFFFFFE) +
        HIDWORD(v870) + (-19 << v542) + v651;
    if (v650 == 0 && *v802_.v837 != 0) {
      v663 = *((float*)v443 + 32) + -0x1.3333340000000p-3f;
      if (v663 >= 0x0.0p+0f) {
        v664 = v663 + -0x1.eb851e0000000p-4f;
      }
      else {
        v664 = -0x1.eb851e0000000p-4f;
      }
      v665 = (int)(float)((float)v652 * 0x1.99999a0000000p-1f);
      if (v802_.v806) {
        v665 = 0;
      }
      v662 += v665 +
              (int)(float)((float)((float)v652 * 0x1.3333340000000p+0f) * v664);
    }
    v667 = v650 != 0 || v661 == 0;
    v668 = v662 + ((v802_.v808 * (__int16)v652) >> 10);
    if (v662 / 4 > v668) {
      v668 = v662 / 4;
    }
    if (v667) {
      v668 = v662;
    }
    v669 =
        ((__int16)(8 * (*(_WORD*)(v645 + 2LL * *((int*)v626 + 2) - 4) << v542) *
                   v802_.v858) *
         (__int16)v802_.v810) >>
        10;
    if (v669 <= v668 >> 2) {
      v669 = v668 >> 2;
    }
    v670 = !v667;
    if (v668 < v669) {
      v669 = v668;
    }
    if (v636 == 0) {
      v670 = 1;
    }
    if ((v670 & 1) == 0) {
      v669 = v634 + ((unsigned __int64)(21955LL * (v669 - v634)) >> 15);
    }
    if (v871[0] <= 3276) {
      v671 = 96000 - v802_.v822;
      if ((unsigned int)(96000 - v802_.v822) >= 0x7D00) {
        v671 = 32000;
      }
      v672 = (unsigned int)(3329 * v671) >> 15;
      if (v802_.v822 <= 96000) {
        v673 = v672;
      }
      else {
        v673 = 0;
      }
      v674 = v669 + ((unsigned __int64)((__int16)((v673 * v802_.v807) >> 10) *
                                        (__int64)v669) >>
                     15);
      if (v661 == 0) {
        v669 = v674;
      }
    }
    v642 = 2 * v634;
    if (v642 >= v669) {
      v642 = v669;
    }
    v644 = (((int)v802_.v865 + v623 + 63) >> 6) + 2;
  }
  v675 = v642 + v623;
  v524 = v443;
  if (v644 <= (v675 + 32) >> 6) {
    v644 = (v675 + 32) >> 6;
  }
  if (v633 < v644) {
    v644 = v633;
  }
  if (v802_.v833 != 0) {
    v676 = v644;
  }
  else {
    v676 = 2;
  }
  v677 = v675 - v802_.v843;
  if (v802_.v833 != 0) {
    v678 = v677;
  }
  else {
    v678 = 0;
  }
  if (v802_.v833 != 0) {
    v679 = v644 << 6;
  }
  else {
    v679 = 128;
  }
  v680 = *((_DWORD*)v524 + 56);
  if (v680 > 969) {
    v683 = 33;
    LODWORD(v524) = (_DWORD)v802_.v855;
    if (v636 != 0) {
      goto LABEL_873;
    }
    goto LABEL_878;
  }
  *((_DWORD*)v524 + 56) = v680 + 1;
  v681 = celt_rcp((v680 << 16) + 1376256);
  v682 = *((_DWORD*)v524 + 14);
  v683 = v681;
  LODWORD(v524) = (_DWORD)v802_.v855;
  if (v682 == 0) {
  LABEL_878:
    v443 = v802_.v857;
    goto LABEL_879;
  }
LABEL_873:
  v684 = v679 - v802_.v843 + *((_DWORD*)v802_.v857 + 53);
  v685 = v678 << v635;
  v443 = v802_.v857;
  v686 = *((_DWORD*)v802_.v857 + 54) +
         ((unsigned __int64)(v683 *
                             (__int64)(v685 - (*((_DWORD*)v802_.v857 + 55) +
                                               *((_DWORD*)v802_.v857 + 54)))) >>
          15);
  *((_DWORD*)v802_.v857 + 53) = v684;
  *((_DWORD*)v443 + 54) = v686;
  *((_DWORD*)v443 + 55) = -v686;
  if (v684 < 0) {
    *((_DWORD*)v443 + 53) = 0;
    v687 = (unsigned int)-v684 >> 6;
    if (v802_.v833 == 0) {
      v687 = 0;
    }
    v676 += v687;
  }
LABEL_879:
  v629 = v802_.v862;
  if (v633 >= v676) {
    v630 = v676;
  }
  else {
    v630 = v633;
  }
  ec_enc_shrink((__int64)v802_.v862, v630);
LABEL_883:
  v688 = v802_.v827;
  v689 = (v802_.v827 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  v802_.v865 = &v802_.v802[-v689];
  memset_plt(&v802_.v802[-v689], 0, v802_.v827);
  v802_.v861 = &v802_.v802[-v689];
  memset_plt(&v802_.v802[-v689], 0, v688);
  v802_.v863 = (unsigned __int16*)&v802_.v802[-v689];
  memset_plt(&v802_.v802[-v689], 0, v688);
  LODWORD(v689) = v630 << 6;
  v802_.v847 = v630;
  v690 = ec_tell_frac((__int64)v629);
  v691 = false;
  LODWORD(v802_.v856) = v689;
  v692 = v689 + ~v690;
  v693 = v629;
  v694 = 0;
  if ((_DWORD)v802_.v850 != 0 && v542 >= 2) {
    v691 = v692 >= (int)v802_.v823 + 16;
    if (v692 < (int)v802_.v823 + 16) {
      v694 = 0;
    }
    else {
      v694 = 8;
    }
  }
  v695 = v692 - v694;
  if (*v802_.v837 != 0) {
    if (v802_.v822 >= 32000 * (int)v802_.v858) {
      if (v802_.v822 >= 48000 * (int)v802_.v858) {
        if (v802_.v822 >= 60000 * (int)v802_.v858) {
          if (v802_.v822 < 80000 * (int)v802_.v858) {
            v696 = 19;
          }
          else {
            v696 = 20;
          }
        }
        else {
          v696 = 18;
        }
      }
      else {
        v696 = 16;
      }
    }
    else {
      v696 = 13;
    }
    if ((signed __int32)*((_DWORD*)v443 + 39) > v696) {
      v696 = *((_DWORD*)v443 + 39);
    }
  }
  else {
    v696 = v212 - 1;
  }
  if (*((_DWORD*)v443 + 17) != 0) {
    v696 = 1;
  }
  v697 =
      opus_41040(v802_.v864, (unsigned int)v524, v212, v866_.v866, v802_.v860,
                 v627, (int*)v443 + 59, &v874, v695, (unsigned int*)&v873,
                 (__int64)v802_.v861, (__int64)v802_.v865, (__int64)v802_.v863,
                 v802_.v858, v542, v693, 1, *((_DWORD*)v443 + 24), v696);
  v698 = *((_DWORD*)v443 + 24);
  v699 = v697;
  v700 = v697;
  if (v698 != 0) {
    v701 = v698 - 1;
    if (v698 - 1 <= v697) {
      v701 = v697;
    }
    if (v698 + 1 < v701) {
      v700 = v698 + 1;
    }
    else {
      v700 = v701;
    }
  }
  *((_DWORD*)v443 + 24) = v700;
  v702 = (__int64*)v802_.v864;
  v703 = v802_.v858;
  v704 = 8 * v802_.v847;
  quant_fine_energy((__int64*)v802_.v864, v628, v212, (__int64)v802_.v845,
                    (__int64)v802_.v839, (__int64)v802_.v865, v693, v802_.v858);
  v705 = &v802_.v802[-((v802_.v813 + 15) & 0xFFFFFFFFFFFFFFF0LL)];
  memset_plt(v705, 0, v802_.v813);
  v261 = v703 == 2;
  v706 = v802_.v862;
  if (v261) {
    v707 = (__int64)&v802_.v832[2 * v802_.v820];
  }
  else {
    v707 = 0;
  }
  quant_all_bands(1u, (__int64)v702, (int)v802_.v855, (unsigned int)v212,
                  (__int64)v802_.v832, v707, (__int64)v705, (__int64)v802_.v834,
                  (__int64)v802_.v861, v802_.v819, *((_DWORD*)v443 + 21), v874,
                  *((_DWORD*)v443 + 59), (__int64)v802_.v849, v802_.v856 - v694,
                  v873, (__int64)v802_.v862, v802_.v859, v699,
                  (unsigned int*)v443 + 20, *((_DWORD*)v443 + 7),
                  *((_DWORD*)v443 + 19), *((_DWORD*)v443 + 18));
  if (v691) {
    ec_enc_bits(v706, (signed __int32)*((_DWORD*)v443 + 30) < 2, 1);
  }
  v708 = (__int64)v802_.v855;
  v709 = v802_.v839;
  quant_energy_finalise(
      (__int64*)v802_.v864, (int)v802_.v855, v212, (__int64)v802_.v845,
      (__int64)v802_.v839, (__int64)v802_.v865, (__int64)v802_.v863,
      v704 - *(_DWORD*)v802_.v852 - __clz(*v802_.v853) + 32, v706, v802_.v858);
  v710 = v802_.v816;
  memset_plt(&v802_.v816[v802_.v836], 0, v802_.v828);
  v711 = 0;
  v712 = nullptr;
  v713 = v709;
  v714 = v802_.v835;
  v715 = v802_.v844;
  v716 = v802_.v829;
  v717 = v802_.v830;
  v718 = v802_.v848;
  v719 = v802_.v818;
  v720 = v802_.v824 & 7;
  v721 = 6LL * (int)v802_.v835 + 4 * v802_.v829;
  v722 = v721 + 2 * v708;
  v723 = (char*)v443 + v721;
  v724 = (__int64)v443 + v722 + 252;
  do {
    if ((int)v212 > (int)v708) {
      v725 = v708;
      if (v720 != 0) {
        v726 = v720;
        v727 = (_WORD*)v724;
        v725 = v708;
        do {
          v728 = *(__int16*)&v713[2 * v725++];
          if (v728 <= -16384) {
            v728 = -16384;
          }
          if (v728 >= 0x4000) {
            LOWORD(v728) = 0x4000;
          }
          --v726;
          *v727++ = v728;
        } while (v726 != 0);
      }
      if (v866_.v867 >= 7) {
        v729 = v212 - v725;
        v730 = v711 + 2 * v725;
        v731 = v723;
        v732 = v709;
        do {
          v733 = (__int16*)&v732[v730];
          v734 = &v731[v730];
          v732 += 16;
          v731 += 16;
          v735 = *v733;
          if (v735 <= -16384) {
            v735 = -16384;
          }
          if (v735 >= 0x4000) {
            LOWORD(v735) = 0x4000;
          }
          *((_WORD*)v734 + 126) = v735;
          v736 = v733[1];
          if (v736 <= -16384) {
            v736 = -16384;
          }
          if (v736 >= 0x4000) {
            LOWORD(v736) = 0x4000;
          }
          *((_WORD*)v734 + 127) = v736;
          v737 = v733[2];
          if (v737 <= -16384) {
            v737 = -16384;
          }
          if (v737 >= 0x4000) {
            LOWORD(v737) = 0x4000;
          }
          *((_WORD*)v734 + 128) = v737;
          v738 = v733[3];
          if (v738 <= -16384) {
            v738 = -16384;
          }
          if (v738 >= 0x4000) {
            LOWORD(v738) = 0x4000;
          }
          *((_WORD*)v734 + 129) = v738;
          v739 = v733[4];
          if (v739 <= -16384) {
            v739 = -16384;
          }
          if (v739 >= 0x4000) {
            LOWORD(v739) = 0x4000;
          }
          *((_WORD*)v734 + 130) = v739;
          v740 = v733[5];
          if (v740 <= -16384) {
            v740 = -16384;
          }
          if (v740 >= 0x4000) {
            LOWORD(v740) = 0x4000;
          }
          *((_WORD*)v734 + 131) = v740;
          v741 = v733[6];
          v742 = v733[7];
          if (v741 <= -16384) {
            v741 = -16384;
          }
          if (v741 >= 0x4000) {
            LOWORD(v741) = 0x4000;
          }
          if (v742 <= -16384) {
            v742 = -16384;
          }
          *((_WORD*)v734 + 132) = v741;
          if (v742 >= 0x4000) {
            LOWORD(v742) = 0x4000;
          }
          v729 -= 8;
          *((_WORD*)v734 + 133) = v742;
        } while (v729 != 0);
      }
    }
    ++v712;
    v724 += v718;
    v713 += v718;
    v711 += v718;
  } while (v712 != v866_.v868);
  v743 = v802_.v833;
  v744 = v802_.v828;
  if (v719 < 1) {
    v743 = 1;
  }
  if ((v743 & 1) == 0) {
    v745 = v719 & 7;
    if ((unsigned int)(v719 - 1) >= 7) {
      v747 = 0;
      v748 = v802_.v845 + 14;
      do {
        *(_QWORD*)(v748 - 7) = 0x9000900090009000LL;
        *(_QWORD*)(v748 - 3) = 0x9000900090009000LL;
        v747 -= 8;
        v748 += 8;
      } while (-(__int64)(v719 & 0x7FFFFFF8) != v747);
      v746 = -v747;
    }
    else {
      v746 = 0;
    }
    if ((v719 & 7) != 0) {
      v749 = (_WORD*)((char*)v443 + 2 * v746 + v802_.v825 + 252);
      do {
        *v749++ = -28672;
        --v745;
      } while (v745 != 0);
    }
  }
  *((_DWORD*)v443 + 27) = v876;
  *((_WORD*)v443 + 56) = v875[0];
  *((_DWORD*)v443 + 29) = v802_.v826;
  if (v802_.v814 != 0) {
    memcpy_plt(&v802_.v845[2 * v715], v802_.v845, v718);
    v718 = v802_.v848;
  }
  v750 = v802_.v851;
  if ((_DWORD)v802_.v850 != 0) {
    if ((int)v714 >= 1) {
      v751 = v714 & 7;
      if ((unsigned int)v714 >= 8) {
        v753 = 0;
        v754 = (__int16*)v443 + 2 * v716 + 133;
        v755 = &v754[v714];
        do {
          v756 = *(v755 - 7);
          v753 -= 8;
          if (v756 >= *(v754 - 7)) {
            LOWORD(v756) = *(v754 - 7);
          }
          *(v755 - 7) = v756;
          v757 = *(v755 - 6);
          if (v757 >= *(v754 - 6)) {
            LOWORD(v757) = *(v754 - 6);
          }
          *(v755 - 6) = v757;
          v758 = *(v755 - 5);
          if (v758 >= *(v754 - 5)) {
            LOWORD(v758) = *(v754 - 5);
          }
          *(v755 - 5) = v758;
          v759 = *(v755 - 4);
          if (v759 >= *(v754 - 4)) {
            LOWORD(v759) = *(v754 - 4);
          }
          *(v755 - 4) = v759;
          v760 = *(v755 - 3);
          if (v760 >= *(v754 - 3)) {
            LOWORD(v760) = *(v754 - 3);
          }
          *(v755 - 3) = v760;
          v761 = *(v755 - 2);
          if (v761 >= *(v754 - 2)) {
            LOWORD(v761) = *(v754 - 2);
          }
          *(v755 - 2) = v761;
          v762 = *(v755 - 1);
          if (v762 >= *(v754 - 1)) {
            LOWORD(v762) = *(v754 - 1);
          }
          *(v755 - 1) = v762;
          v763 = *v755;
          v764 = *v754;
          v754 += 8;
          if (v763 >= v764) {
            LOWORD(v763) = v764;
          }
          *v755 = v763;
          v755 += 8;
        } while (-(v714 & 0x7FFFFFF8) != v753);
        v752 = -v753;
      }
      else {
        v752 = 0;
      }
      if ((v714 & 7) != 0) {
        v765 = (__int16*)((char*)v443 + 2 * v752 + v802_.v825 + 252);
        do {
          v766 = *(__int16*)((char*)v765 + v744);
          if (v766 >= *v765) {
            LOWORD(v766) = *v765;
          }
          --v751;
          *(__int16*)((char*)v765++ + v744) = v766;
        } while (v751 != 0);
      }
    }
  }
  else {
    memcpy_plt(v710, v717, v744);
    memcpy_plt(v717, v802_.v845, v744);
    v750 = v802_.v851;
    v718 = v802_.v848;
  }
  v767 = 0;
  v768 = 0;
  v769 = (char*)v443 + 4 * v716;
  v770 = v769;
  v771 = 4;
  v772 = 7;
  v773 = (__int64)v443 + 2 * v212 + v802_.v825 + 252;
  v774 = (__int64)v443 + 4 * v716 + v802_.v815 + 252;
  v775 = (__int64)v443 + 2 * v714 + v802_.v825 + 252;
  v776 = v773 + 2 * v714;
  v777 = v774 + 2 * v212;
  do {
    if (v628 >= 1) {
      if ((unsigned int)v628 >= 8) {
        v779 = 0;
        v778 = 0;
        do {
          v780 = &v770[v779];
          v781 = &v710[v779 / 2];
          v782 = &v717[v779 / 2];
          v778 += 8;
          *((_WORD*)v780 + 126) = 0;
          v779 += 16LL;
          *v781 = -28672;
          *v782 = -28672;
          *((_WORD*)v780 + 127) = 0;
          v781[1] = -28672;
          v782[1] = -28672;
          *((_WORD*)v780 + 128) = 0;
          v781[2] = -28672;
          v782[2] = -28672;
          *((_WORD*)v780 + 129) = 0;
          v781[3] = -28672;
          v782[3] = -28672;
          *((_WORD*)v780 + 130) = 0;
          v781[4] = -28672;
          v782[4] = -28672;
          *((_WORD*)v780 + 131) = 0;
          v781[5] = -28672;
          v782[5] = -28672;
          *((_WORD*)v780 + 132) = 0;
          v781[6] = -28672;
          v782[6] = -28672;
          *((_WORD*)v780 + 133) = 0;
          v781[7] = -28672;
          v782[7] = -28672;
        } while (((2 * v628) & 0xFFFFFFF0) != v779);
      }
      else {
        v778 = 0;
      }
      if ((v628 & 7) != 0) {
        v783 = &v717[v778];
        v784 = &v710[v778];
        v785 = 0;
        v786 = &v769[2 * v778 + 2 * v767];
        do {
          *(_WORD*)&v786[v785 * 2 + 252] = 0;
          v784[v785] = -28672;
          v783[v785++] = -28672;
        } while ((v628 & 7) != v785);
      }
    }
    if ((int)v212 < (int)v715) {
      v787 = v212;
      if ((((_BYTE)v715 - (_BYTE)v212) & 7) != 0) {
        v788 = 0;
        do {
          v789 = 2 * v788++;
          *(_WORD*)(v773 + v789) = 0;
          *(_WORD*)(v777 + v789) = -28672;
          *(_WORD*)(v776 + v789) = -28672;
        } while ((((_BYTE)v715 - (_BYTE)v212) & 7) != v788);
        v787 = v212 + v788;
      }
      if ((unsigned __int64)(v212 - v715) <= 0xFFFFFFFFFFFFFFF8LL) {
        v790 = v715 - v787;
        v791 = v787 + v771;
        v792 = (_WORD*)(v774 + 2 * (v787 + v771));
        v793 = (_WORD*)(v775 + 2 * (v787 + v772));
        v794 = &v769[2 * v791 + 252];
        do {
          *((_WORD*)v794 - 4) = 0;
          *(v792 - 4) = -28672;
          v790 -= 8;
          *(v793 - 7) = -28672;
          *((_WORD*)v794 - 3) = 0;
          *(v792 - 3) = -28672;
          *(v793 - 6) = -28672;
          *((_WORD*)v794 - 2) = 0;
          *(v792 - 2) = -28672;
          *(v793 - 5) = -28672;
          *((_WORD*)v794 - 1) = 0;
          *(v792 - 1) = -28672;
          *(v793 - 4) = -28672;
          *(_WORD*)v794 = 0;
          *v792 = -28672;
          *(v793 - 3) = -28672;
          *((_WORD*)v794 + 1) = 0;
          v792[1] = -28672;
          *(v793 - 2) = -28672;
          *((_WORD*)v794 + 2) = 0;
          v792[2] = -28672;
          *(v793 - 1) = -28672;
          *((_WORD*)v794 + 3) = 0;
          v794 += 16;
          v792[3] = -28672;
          v792 += 8;
          *v793 = -28672;
          v793 += 8;
        } while (v790 != 0);
      }
    }
    ++v768;
    v717 = (_WORD*)((char*)v717 + v718);
    v710 = (_WORD*)((char*)v710 + v718);
    v770 += v718;
    v767 += v715;
    v776 += v718;
    v777 += v718;
    v773 += v718;
    v771 += v715;
    v772 += v715;
  } while (v768 != v750);
  v795 = v802_.v862;
  v796 = v802_.v857;
  if ((((_DWORD)v802_.v850 == 0) & ~v802_.v812) != 0) {
    v797 = 0;
  }
  else {
    v797 = *((_DWORD*)v802_.v857 + 30) + 1;
  }
  *((_DWORD*)v802_.v857 + 30) = v797;
  *((_DWORD*)v796 + 20) = *v802_.v853;
  ec_enc_done((__int64)v795);
  if (*((_DWORD*)v795 + 12) != 0) {
    return 4294967293LL;
  }
  else {
    return (unsigned int)v802_.v847;
  }
}

__int64 run_prefilter(_QWORD* a1, __int64 a2, __int64 a3, int a4, int a5,
                      int a6, _DWORD* a7, _WORD* a8, _DWORD* a9, int a10,
                      int a11, __int64 a12)
{

#pragma clang fp contract(off)
  __int64 v12;
  __int64 v13;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _BYTE* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  __int64 v40;
  int v41;
  __int64 v42;
  _WORD* v43;
  _QWORD* v44;
  int v45;
  unsigned int v46;
  int v47;
  __int16 v48;
  int v49;
  __int64 v50;
  __int64 v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  __int16 v57;
  __int16 v58;
  __int16 v59;
  __int16 v60;
  int v61;
  int v62;
  int v63;
  int v64;
  _QWORD* v65;
  __int64 v66;
  unsigned __int64 v67;
  char* v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  int v74;
  int v75;
  int v76;
  __int64 v77;
  int v78;
  __int64 result;
  struct {
    _BYTE v80[12];
    int v81;
    __int64 v82;
    _DWORD* v83;
    __int64 v84;
    _WORD* v85;
    _DWORD* v86;
    __int64 v87;
    __int64 v88;
    __int64 v89;
    __int64 v90;
    __int64 v91;
    __int64 v92;
    __int64 v93;
    char gap144_[4];
    int v94;
    __int64 v95;
    __int64 v96;
    _QWORD* v97;
    __int64 v98;
    __int64 v99;
  } v80_;
  int v100;
  _QWORD v101[2];
  __int64 v102;

  v12 = *a1;
  v13 = (unsigned int)a5;
  v80_.v85 = a8;
  v80_.v86 = a7;
  v80_.v94 = a6;
  v17 = *(int*)(v12 + 4);
  v80_.v99 = v12;
  v80_.v97 = a1;
  v18 = a5 + 1024LL;
  v80_.v91 = a5;
  v19 = 4LL * (int)v18 * a4;
  v20 = &v80_.v80[-((v19 + 15) & 0xFFFFFFFFFFFFFFF0LL)];
  memset_plt(v20, 0, v19);
  v21 = 4LL * (int)v13;
  v80_.v95 = v17;
  v80_.v96 = v13;
  LODWORD(v80_.v88) = a4;
  if (a4 <= 1) {
    v22 = 1;
  }
  else {
    v22 = (unsigned int)a4;
  }
  v101[0] = v20;
  v101[1] = &v20[4 * v18];
  v80_.v87 = a3;
  v23 = (int)v17 + (int)v13;
  v24 = v22 & 3;
  v80_.v83 = (_DWORD*)v18;
  v80_.v84 = v22;
  v80_.v98 = 4 * v23;
  if (a4 < 4) {
    v25 = 0;
    v26 = a10;
    v27 = v80_.v98;
    v80_.v93 = a12;
    if ((v22 & 3) == 0) {
      goto LABEL_12;
    }
    goto LABEL_10;
  }
  v28 = a2 + 4 * v17;
  v29 = 0;
  v30 = a3;
  v31 = -(__int64)((unsigned int)v22 & 0xFFFFFFFC);
  v80_.v92 = 12 * v23;
  v80_.v93 = 16 * v23;
  v32 = &v102;
  v80_.v89 = 8 * v23;
  do {
    v33 = *(v32 - 2);
    memcpy_plt(v33, v30, 4096);
    memcpy_plt(v33 + 4096, v28, v21);
    v34 = *(v32 - 1);
    memcpy_plt(v34, v30 + 4096, 4096);
    memcpy_plt(v34 + 4096, v28 + v80_.v98, v21);
    v35 = *v32;
    memcpy_plt(*v32, v30 + 0x2000, 4096);
    memcpy_plt(v35 + 4096, v28 + v80_.v89, v21);
    v36 = v32[1];
    memcpy_plt(v36, v30 + 12288, 4096);
    memcpy_plt(v36 + 4096, v28 + v80_.v92, v21);
    v29 -= 4;
    v32 += 4;
    v30 += 0x4000;
    v28 += v80_.v93;
  } while (v31 != v29);
  v25 = -v29;
  v26 = a10;
  v27 = v80_.v98;
  v80_.v93 = a12;
  if (v24 != 0) {
  LABEL_10:
    v37 = a2 + 4 * v25 * v23 + 4 * v80_.v95;
    v38 = v80_.v87 + (v25 << 12);
    v39 = &v101[v25];
    do {
      v40 = *v39++;
      memcpy_plt(v40, v38, 4096);
      memcpy_plt(v40 + 4096, v37, v21);
      v37 += v27;
      v38 += 4096;
      --v24;
    } while (v24 != 0);
  }
LABEL_12:
  v100 = 0;
  if (v26 != 0) {
    v41 = (int)v80_.v83;
    v42 = 2LL * ((int)v80_.v83 >> 1);
    v43 = &v80_.v80[-((v42 + 15) & 0xFFFFFFFFFFFFFFF0LL)];
    memset_plt(v43, 0, v42);
    v44 = v80_.v97;
    MovieRoutine_3aa60((__int64)v101, v43, v41, v80_.v88);
    v45 = v80_.v96;
    MovieRoutine_3b720((__int64)(v43 + 512), (__int64)v43, v80_.v96, 979,
                       &v100);
    v46 = *((_DWORD*)v44 + 27);
    v47 = *((unsigned __int16*)v44 + 56);
    v100 = 1024 - v100;
    v48 = MovieRoutine_3c380((__int64)v43, 1024, 0xFu, v45, &v100, v46, v47);
    v49 = v100;
    v50 = v80_.v87;
    if (v100 >= 1023) {
      v49 = 1022;
      v100 = 1022;
    }
    v51 = v80_.v93;
    v52 = (45876 * v48) >> 17;
    v53 = *((_DWORD*)v80_.v97 + 15);
    if (v53 <= 2) {
      LOWORD(v52) = (unsigned int)(22938 * v48) >> 15;
    }
    if (v53 > 4) {
      LOWORD(v52) = (__int16)v52 >> 1;
    }
    if (v53 > 8) {
      LOWORD(v52) = 0;
    }
    v54 = a11;
    if (*(_DWORD*)v80_.v93 != 0) {
      goto LABEL_22;
    }
  }
  else {
    v51 = v80_.v93;
    v50 = v80_.v87;
    v49 = 15;
    LOWORD(v52) = 0;
    v100 = 15;
    v54 = a11;
    if (*(_DWORD*)v80_.v93 != 0) {
    LABEL_22:
      v52 = (int)(float)(*(float*)(v51 + 40) * (float)(__int16)v52);
    }
  }
  v55 = v80_.v95;
  v80_.v90 = v21;
  v80_.v83 = a9;
  v56 = v49 - *((_DWORD*)v80_.v97 + 27);
  if (v56 < 0) {
    v56 = *((_DWORD*)v80_.v97 + 27) - v49;
  }
  if (10 * v56 <= v49) {
    v57 = 6554;
  }
  else {
    v57 = 13108;
  }
  v58 = v57 + 3277;
  if (v54 >= 25) {
    v58 = v57;
  }
  v59 = v58 + 3277;
  if (v54 >= 35) {
    v60 = v57;
  }
  else {
    v60 = v59;
  }
  v61 = *((__int16*)v80_.v97 + 56);
  if (v61 > 13107) {
    v60 -= 3277;
  }
  if (v61 > 18022) {
    v60 -= 3277;
  }
  if ((unsigned __int16)v60 <= 0x199Au) {
    v60 = 6554;
  }
  if ((__int16)v52 >= v60) {
    v63 = (unsigned __int16)v52 - v61;
    if (v63 < 0) {
      v63 = v61 - (unsigned __int16)v52;
    }
    if ((unsigned int)v63 < 0xCCD) {
      LOWORD(v52) = *((_WORD*)v80_.v97 + 56);
    }
    v64 = (char)(((unsigned __int16)(86 * (((__int16)v52 + 1536) >> 10)) >> 8) +
                 (86 * (((__int16)v52 + 1536) >> 10) < 0));
    if (v64 <= 1) {
      v64 = 1;
    }
    if (v64 >= 8) {
      v64 = 8;
    }
    v62 = 3072 * v64;
    LODWORD(v80_.v82) = 1;
    HIDWORD(v80_.v82) = v64 - 1;
  }
  else {
    v62 = 0;
    v80_.v82 = 0;
  }
  v80_.v81 = v62;
  v65 = v80_.v97;
  v66 = 4 * v80_.v95;
  v67 = 0;
  v68 = (char*)v80_.v97 + 252;
  LODWORD(v80_.v93) = -v62;
  v69 = 4 * v80_.v91;
  v80_.v88 = 4096 - 4 * v80_.v91;
  v80_.v89 = 4LL * (unsigned int)(1024 - v80_.v96);
  v80_.v92 = 8 * v80_.v84;
  do {
    v73 = *(int*)(v80_.v99 + 40);
    v74 = *((_DWORD*)v65 + 27);
    if (v74 <= 15) {
      v74 = 15;
    }
    *((_DWORD*)v65 + 27) = v74;
    memcpy_plt(a2, v68, v66);
    v75 = v73 - v55;
    if (v75 != 0) {
      comb_filter(a2 + v66, v101[v67 / 8] + 4096LL, *((_DWORD*)v65 + 27),
                  *((_DWORD*)v65 + 27), v75, -*((_WORD*)v65 + 56),
                  -*((_WORD*)v65 + 56), *((_DWORD*)v65 + 29),
                  *((_DWORD*)v65 + 29), nullptr, 0);
    }
    v76 = v80_.v96;
    v77 = v101[v67 / 8] + 4LL * v75;
    v78 = v80_.v96 - v75;
    v55 = v80_.v95;
    comb_filter(a2 + 4 * v73, v77 + 4096, *((_DWORD*)v65 + 27), v100, v78,
                -*((_WORD*)v65 + 56), v80_.v93, *((_DWORD*)v65 + 29), v80_.v94,
                *(__int16**)(v80_.v99 + 64), v80_.v95);
    memcpy_plt(v68, a2 + v69, v66);
    if (v76 < 1025) {
      memmove_plt(v50, v50 + v69, v80_.v89);
      v70 = v80_.v90;
      v71 = v50 + v80_.v88;
      v72 = v101[v67 / 8] + 4096LL;
    }
    else {
      v71 = v50;
      v70 = 4096;
      v72 = v101[v67 / 8] + 4 * v80_.v91;
    }
    memcpy_plt(v71, v72, v70);
    v65 = v80_.v97;
    v50 += 4096;
    v67 += 8LL;
    v68 += v66;
    a2 += v80_.v98;
  } while (v80_.v92 != v67);
  result = (unsigned int)v80_.v82;
  *v80_.v85 = v80_.v81;
  *v80_.v86 = v100;
  *v80_.v83 = HIDWORD(v80_.v82);
  return result;
}

__int64 tf_analysis(__int64 a1, int a2, int a3, __int64 a4, int a5, __int64 a6,
                    int a7, unsigned int a8, __int16 a9, int a10, _DWORD* a11)
{
  __int64 v11;
  __int64 v12;
  __int64 v14;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  char* v21;
  __int64 v22;
  int v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  __int64 v27;
  int v28;
  int v29;
  int v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  __int16* v35;
  __int64 v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  char* v51;
  int v52;
  int v53;
  int v54;
  int v55;
  __int64 v56;
  __int64 v57;
  int v58;
  __int64 v59;
  __int16* v60;
  __int64 v61;
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
  int v74;
  int v75;
  char* v76;
  int v77;
  int v78;
  int v79;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  __int64 v86;
  __int16* v87;
  __int64 v88;
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
  char* v103;
  __int64 v104;
  int v105;
  int v106;
  __int64 v107;
  int v108;
  _DWORD* v110;
  int v111;
  int v112;
  int v113;
  int v114;
  __int64 v115;
  int v116;
  char* v117;
  int v118;
  int v119;
  int v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;
  __int64 v126;
  int* v127;
  int* v128;
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
  char* v151;
  char* v152;
  int v153;
  int v154;
  int v155;
  int v156;
  int v157;
  int v158;
  int v159;
  int v160;
  int v161;
  __int64 v162;
  int* v163;
  int* v164;
  int v165;
  int v166;
  int v167;
  int v168;
  int v169;
  int v170;
  int v171;
  int v172;
  int v173;
  int v174;
  int v175;
  int v176;
  int v177;
  int v178;
  int v179;
  int v180;
  int v181;
  int v182;
  int v183;
  int v184;
  int v185;
  int v186;
  int v187;
  bool v188;
  int v189;
  int v190;
  int v191;
  int v192;
  int v193;
  int v194;
  int v195;
  int v196;
  int v197;
  int v198;
  char v199;
  int v200;
  int v201;
  __int64 v202;
  unsigned int v203;
  __int64 v204;
  int* v205;
  int* v206;
  _BOOL4* v207;
  int* v208;
  int v209;
  int v210;
  bool v211;
  int v212;
  int v213;
  bool v214;
  int v215;
  int v216;
  int v217;
  int v218;
  int v219;
  int v220;
  int v221;
  bool v222;
  int v223;
  int v224;
  _BOOL4 v225;
  int v226;
  int v227;
  int v228;
  int v229;
  int v230;
  int v231;
  char* v232;
  char* v233;
  int v234;
  bool v235;
  int v236;
  int v237;
  bool v238;
  _DWORD* v239;
  int v240;
  int v241;
  int v242;
  int v243;
  int v244;
  __int64 v245;
  int v246;
  int v247;
  __int64 v248;
  __int64 v249;
  __int64 v250;
  char* v251;
  char* v252;
  __int64 v254;
  __int64 v255;
  char* v256;
  int v257;
  __int64 v258;
  char* v259;
  int v260;
  char* v261;
  char* v262;
  int v263;
  int v264;
  char* v265;
  char* v266;
  int v267;
  int v268;
  char* v269;
  __int64 v270;
  int v271;
  char* v272;
  int v273;
  int v274;
  struct {
    __int64 v275;
    char* v276;
    char* v277;
    __int64 v278;
    _DWORD* v279;
    char gap40_[4];
    int v280;
    __int64 v281;
    __int64 v282;
    __int16* v283;
    char gap72_[4];
    int v284;
    int v285;
    unsigned int v286;
    char* v287;
    __int64 v288;
    int v289;
    int v290;
    __int64 v291;
    __int64 v292;
    _DWORD* v293;
    char gap136_[4];
    int v294;
    __int64 v295;
    __int64 v296;
    __int16* v297;
    __int64 v298;
    char gap176_[4];
    int v299;
  } v275_;

  v11 = (unsigned int)a2;
  v12 = 4LL * a2;
  v14 = a8;
  v275_.v280 = a5;
  v275_.v281 = a4;
  v16 = a2;
  v275_.v299 = a3;
  v275_.v279 = a11;
  v17 = (v12 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  v275_.v292 = a6;
  v275_.v293 = (_DWORD*)((char*)&v275_.v275 - v17);
  memset_plt((char*)&v275_.v275 - v17, 0, v12);
  v18 = *(_QWORD*)(a1 + 24);
  v275_.v291 = a1;
  v275_.v298 = v14;
  v19 = 2LL *
        ((*(__int16*)(v18 + 2LL * (int)v11) - *(__int16*)(v18 + 2 * (v16 - 1)))
         << v14);
  v20 = (char*)&v275_.v275 - ((v19 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v275_.v287 = v20;
  v275_.v277 = (char*)&v275_.v275 - v17;
  v275_.v278 = v16 - 1;
  memset_plt((char*)&v275_.v275 - v17, 0, v12);
  v275_.v276 = (char*)&v275_.v275 - v17;
  memset_plt((char*)&v275_.v275 - v17, 0, v12);
  v275_.v282 = v11;
  if ((int)v11 >= 1) {
    memset_plt((char*)&v275_.v275 - ((v19 + 15) & 0xFFFFFFFFFFFFFFF0LL), 0,
               v19);
    v21 = v275_.v287;
    memset_plt(v275_.v287, 0, v19);
    v22 = 0;
    v23 = 0x2000 - a9;
    if (v23 < -4096 || a9 == 12288) {
      LOWORD(v23) = -4096;
    }
    v24 = (5244 * (__int16)v23) & 0xFFFF0000;
    v25 = v24;
    if (v275_.v299 != 0) {
      v26 = v275_.v298;
    }
    else {
      v26 = 0;
    }
    v275_.v289 = (int)(v26 * v24) >> 16;
    v275_.v290 = a10 * a7;
    v275_.v285 = (int)(v24 + v24 * v275_.v298) >> 16;
    v275_.v286 = 1 << v275_.v298;
    v275_.v284 = -2 * v275_.v298;
    v275_.v288 = (unsigned int)v275_.v282;
    v275_.v297 = (__int16*)(v20 + 8);
    v275_.v283 = (__int16*)(v21 + 8);
    while (1) {
      v27 = *(_QWORD*)(v275_.v291 + 24);
      v28 = *(__int16*)(v27 + 2 * (v22 + 1));
      LODWORD(v27) = *(__int16*)(v27 + 2 * v22);
      v29 = v28 - v27;
      v30 = (v28 - (_DWORD)v27) << v275_.v298;
      v31 = v275_.v292 + 2LL * (((_DWORD)v27 << v275_.v298) + v275_.v290);
      memcpy_plt(v20, v31, 2LL * v30);
      v275_.v295 = v22 + 1;
      v275_.v296 = v22;
      if (v30 < 1) {
        v33 = 0;
        goto LABEL_38;
      }
      if ((unsigned int)v30 < 8) {
        break;
      }
      v35 = v275_.v297;
      v36 = 0;
      v33 = 0;
      do {
        v37 = *(v35 - 4);
        v38 = *(v35 - 2);
        v36 -= 8;
        if (v37 < 0) {
          v37 = -v37;
        }
        v39 = v33 + v37;
        v40 = *(v35 - 3);
        if (v40 < 0) {
          v40 = -v40;
        }
        if (v38 < 0) {
          v38 = -v38;
        }
        v41 = v40 + v38;
        v42 = *v35;
        v43 = v39 + v41;
        v44 = *(v35 - 1);
        if (v44 < 0) {
          v44 = -v44;
        }
        if (v42 < 0) {
          v42 = -v42;
        }
        v45 = v44 + v42;
        v46 = v35[1];
        if (v46 < 0) {
          v46 = -v46;
        }
        v47 = v45 + v46;
        v48 = v35[3];
        v49 = v43 + v47;
        v50 = v35[2];
        v35 += 8;
        if (v50 < 0) {
          v50 = -v50;
        }
        if (v48 < 0) {
          v48 = -v48;
        }
        v33 = v49 + v50 + v48;
      } while (-(__int64)(v30 & 0x7FFFFFF8) != v36);
      v32 = -v36;
      v34 = v30 & 7;
      if ((v30 & 7) != 0) {
        goto LABEL_34;
      }
    LABEL_38:
      v54 = 0;
      v55 = v33 + (((v33 & 0x7FFF) * v275_.v289) >> 15) +
            (__int16)(v33 >> 15) * v275_.v289;
      if (v275_.v299 == 0 || v29 == 1) {
        goto LABEL_71;
      }
      v56 = (__int64)v275_.v287;
      memcpy_plt(v275_.v287, v31, 2LL * v30);
      bands_20220(v56, v30 >> v275_.v298, v275_.v286);
      if (v30 < 1) {
        v58 = 0;
      }
      else {
        if ((unsigned int)v30 >= 8) {
          v60 = v275_.v283;
          v61 = 0;
          v58 = 0;
          do {
            v62 = *(v60 - 4);
            v63 = *(v60 - 2);
            v61 -= 8;
            if (v62 < 0) {
              v62 = -v62;
            }
            v64 = v58 + v62;
            v65 = *(v60 - 3);
            if (v65 < 0) {
              v65 = -v65;
            }
            if (v63 < 0) {
              v63 = -v63;
            }
            v66 = v65 + v63;
            v67 = *v60;
            v68 = v64 + v66;
            v69 = *(v60 - 1);
            if (v69 < 0) {
              v69 = -v69;
            }
            if (v67 < 0) {
              v67 = -v67;
            }
            v70 = v69 + v67;
            v71 = v60[1];
            if (v71 < 0) {
              v71 = -v71;
            }
            v72 = v70 + v71;
            v73 = v60[3];
            v74 = v68 + v72;
            v75 = v60[2];
            v60 += 8;
            if (v75 < 0) {
              v75 = -v75;
            }
            if (v73 < 0) {
              v73 = -v73;
            }
            v58 = v74 + v75 + v73;
          } while (-(__int64)(v30 & 0x7FFFFFF8) != v61);
          v57 = -v61;
          v59 = v30 & 7;
          if ((v30 & 7) == 0) {
            goto LABEL_68;
          }
        LABEL_64:
          v76 = &v275_.v287[2 * v57];
          do {
            v78 = *(__int16*)v76;
            v76 += 2;
            v77 = v78;
            if (v78 < 0) {
              v77 = -v77;
            }
            --v59;
            v58 += v77;
          } while (v59 != 0);
          goto LABEL_68;
        }
        v57 = 0;
        v58 = 0;
        v59 = v30 & 7;
        if ((v30 & 7) != 0) {
          goto LABEL_64;
        }
      }
    LABEL_68:
      v79 = v58 + (((v58 & 0x7FFF) * v275_.v285) >> 15) +
            (__int16)(v58 >> 15) * v275_.v285;
      if (v79 >= v55) {
        v54 = 0;
      }
      else {
        v55 = v79;
        v54 = -1;
      }
    LABEL_71:
      v275_.v294 = v29;
      if (v275_.v299 != 0 || v29 == 1) {
        v81 = v275_.v298;
      }
      else {
        v81 = v275_.v298 + 1;
      }
      if (v81 >= 1) {
        v82 = 0;
        do {
          if (v275_.v299 != 0) {
            v85 = v275_.v298 + ~v82;
          }
          else {
            v85 = v82 + 1;
          }
          bands_20220((__int64)v20, v30 >> v82, 1 << v82);
          if (v30 < 1) {
            v83 = 0;
          }
          else {
            if ((unsigned int)v30 >= 8) {
              v87 = v275_.v297;
              v88 = 0;
              v83 = 0;
              do {
                v89 = *(v87 - 4);
                v90 = *(v87 - 2);
                v88 -= 8;
                if (v89 < 0) {
                  v89 = -v89;
                }
                v91 = v83 + v89;
                v92 = *(v87 - 3);
                if (v92 < 0) {
                  v92 = -v92;
                }
                if (v90 < 0) {
                  v90 = -v90;
                }
                v93 = v92 + v90;
                v94 = *v87;
                v95 = v91 + v93;
                v96 = *(v87 - 1);
                if (v96 < 0) {
                  v96 = -v96;
                }
                if (v94 < 0) {
                  v94 = -v94;
                }
                v97 = v96 + v94;
                v98 = v87[1];
                if (v98 < 0) {
                  v98 = -v98;
                }
                v99 = v97 + v98;
                v100 = v87[3];
                v101 = v95 + v99;
                v102 = v87[2];
                v87 += 8;
                if (v102 < 0) {
                  v102 = -v102;
                }
                if (v100 < 0) {
                  v100 = -v100;
                }
                v83 = v101 + v102 + v100;
              } while (-(__int64)(v30 & 0x7FFFFFF8) != v88);
              v86 = -v88;
              if ((v30 & 7) == 0) {
                goto LABEL_80;
              }
            LABEL_109:
              v103 = &v20[2 * v86];
              v104 = v30 & 7;
              do {
                v106 = *(__int16*)v103;
                v103 += 2;
                v105 = v106;
                if (v106 < 0) {
                  v105 = -v105;
                }
                --v104;
                v83 += v105;
              } while (v104 != 0);
              goto LABEL_80;
            }
            v86 = 0;
            v83 = 0;
            if ((v30 & 7) != 0) {
              goto LABEL_109;
            }
          }
        LABEL_80:
          ++v82;
          v84 = v83 + (((v83 & 0x7FFF) * ((int)(v25 * v85) >> 16)) >> 15) +
                (__int16)(v83 >> 15) * ((int)(v25 * v85) >> 16);
          if (v84 < v55) {
            v55 = v84;
            v54 = v82;
          }
        } while (v82 != v81);
      }
      v107 = v275_.v296;
      v108 = 2 * v54;
      if (v275_.v299 == 0) {
        v108 = -2 * v54;
      }
      v275_.v293[v275_.v296] = v108;
      if (v275_.v294 == 1 && (v108 == 0 || v108 == v275_.v284)) {
        v275_.v293[v107] = v108 - 1;
      }
      v22 = v275_.v295;
      if (v275_.v295 == v275_.v288) {
        goto LABEL_123;
      }
    }
    v32 = 0;
    v33 = 0;
    v34 = v30 & 7;
    if ((v30 & 7) == 0) {
      goto LABEL_38;
    }
  LABEL_34:
    v51 = &v20[2 * v32];
    do {
      v53 = *(__int16*)v51;
      v51 += 2;
      v52 = v53;
      if (v53 < 0) {
        v52 = -v52;
      }
      --v34;
      v33 += v52;
    } while (v34 != 0);
    goto LABEL_38;
  }
LABEL_123:
  v110 = v275_.v279;
  v111 = *v275_.v279;
  v112 = *v275_.v293;
  v113 = v275_.v280;
  v114 = v275_.v282;
  v115 = (unsigned int)(4 * v275_.v299);
  if (v275_.v299 != 0) {
    v116 = 0;
  }
  else {
    v116 = v275_.v280;
  }
  v117 = &(*MovieData_c09d0)[8 * (int)v275_.v298 + v115];
  v118 = *v117;
  v119 = v117[1];
  v120 = v112 - 2 * v118;
  v121 = v112 - 2 * v119;
  if (v120 < 0) {
    v120 = 2 * v118 - v112;
  }
  if (v121 < 0) {
    v121 = 2 * v119 - v112;
  }
  v122 = v120 * v111;
  v123 = v116 + v121 * v111;
  if ((int)v275_.v282 > 1) {
    v124 = 2 * v118;
    v125 = 2 * v119;
    if ((_DWORD)v275_.v282 == 2) {
      v126 = 1;
    }
    else {
      v127 = v275_.v279 + 2;
      v128 = v275_.v293 + 2;
      v126 = 1;
      do {
        v129 = v123 + v275_.v280;
        v130 = *(v128 - 1);
        v126 += 2;
        if (v122 < v123 + v275_.v280) {
          v129 = v122;
        }
        v131 = v122 + v275_.v280;
        if (v131 >= v123) {
          v131 = v123;
        }
        v132 = *(v127 - 1);
        v133 = v130 - v124;
        if (v130 - v124 < 0) {
          v133 = v124 - v130;
        }
        v134 = v130 - v125;
        if (v134 < 0) {
          v134 = -v134;
        }
        v135 = v131 + v134 * v132;
        v136 = v129 + v133 * v132;
        v138 = *v128;
        v128 += 2;
        v137 = v138;
        v140 = *v127;
        v127 += 2;
        v139 = v140;
        v141 = v135 + v275_.v280;
        if (v136 < v135 + v275_.v280) {
          v141 = v136;
        }
        v142 = v136 + v275_.v280;
        if (v142 >= v135) {
          v142 = v135;
        }
        v143 = v137 - v124;
        if (v137 - v124 < 0) {
          v143 = v124 - v137;
        }
        v122 = v141 + v143 * v139;
        v144 = v137 - v125;
        if (v137 - v125 < 0) {
          v144 = v125 - v137;
        }
        v123 = v142 + v144 * v139;
      } while (v126 -
                   (((unsigned int)v275_.v282 - 1LL) & 0xFFFFFFFFFFFFFFFELL) !=
               1);
    }
    if ((((_BYTE)v275_.v282 - 1) & 1) != 0) {
      v145 = v123 + v275_.v280;
      v146 = v275_.v279[v126];
      if (v122 < v123 + v275_.v280) {
        v145 = v122;
      }
      v147 = v122 + v275_.v280;
      if (v147 < v123) {
        v123 = v147;
      }
      v148 = v275_.v293[v126];
      v149 = v148 - v124;
      if (v148 - v124 < 0) {
        v149 = v124 - v148;
      }
      v150 = v148 - v125;
      if (v150 < 0) {
        v150 = -v150;
      }
      v122 = v145 + v149 * v146;
      v123 += v150 * v146;
    }
  }
  v151 = &(*MovieData_c09d0)[8 * (int)v275_.v298];
  v152 = &v151[v115];
  if (v122 >= v123) {
    v153 = v123;
  }
  else {
    v153 = v122;
  }
  v154 = v152[2];
  v155 = v152[3];
  v156 = v112 - 2 * v154;
  v157 = v112 - 2 * v155;
  if (v156 < 0) {
    v156 = 2 * v154 - v112;
  }
  if (v157 < 0) {
    v157 = 2 * v155 - v112;
  }
  v158 = v156 * v111;
  v159 = v116 + v157 * v111;
  if ((int)v275_.v282 >= 2) {
    v160 = 2 * v154;
    v161 = 2 * v155;
    if ((_DWORD)v275_.v282 == 2) {
      v162 = 1;
    }
    else {
      v163 = v275_.v279 + 2;
      v164 = v275_.v293 + 2;
      v162 = 1;
      do {
        v165 = v159 + v275_.v280;
        v166 = *(v164 - 1);
        v162 += 2;
        if (v158 < v159 + v275_.v280) {
          v165 = v158;
        }
        v167 = v158 + v275_.v280;
        if (v167 >= v159) {
          v167 = v159;
        }
        v168 = *(v163 - 1);
        v169 = v166 - v160;
        if (v166 - v160 < 0) {
          v169 = v160 - v166;
        }
        v170 = v166 - v161;
        if (v170 < 0) {
          v170 = -v170;
        }
        v171 = v167 + v170 * v168;
        v172 = v165 + v169 * v168;
        v174 = *v164;
        v164 += 2;
        v173 = v174;
        v176 = *v163;
        v163 += 2;
        v175 = v176;
        v177 = v171 + v275_.v280;
        if (v172 < v171 + v275_.v280) {
          v177 = v172;
        }
        v178 = v172 + v275_.v280;
        if (v178 >= v171) {
          v178 = v171;
        }
        v179 = v173 - v160;
        if (v173 - v160 < 0) {
          v179 = v160 - v173;
        }
        v158 = v177 + v179 * v175;
        v180 = v173 - v161;
        if (v173 - v161 < 0) {
          v180 = v161 - v173;
        }
        v159 = v178 + v180 * v175;
      } while (v162 -
                   (((unsigned int)v275_.v282 - 1LL) & 0xFFFFFFFFFFFFFFFELL) !=
               1);
    }
    if ((((_BYTE)v275_.v282 - 1) & 1) != 0) {
      v181 = v159 + v275_.v280;
      v182 = v275_.v279[v162];
      if (v158 < v159 + v275_.v280) {
        v181 = v158;
      }
      v183 = v158 + v275_.v280;
      if (v183 < v159) {
        v159 = v183;
      }
      v184 = v275_.v293[v162];
      v185 = v184 - v160;
      if (v184 - v160 < 0) {
        v185 = v160 - v184;
      }
      v186 = v184 - v161;
      if (v186 < 0) {
        v186 = -v186;
      }
      v158 = v181 + v185 * v182;
      v159 += v186 * v182;
    }
  }
  if (v158 >= v159) {
    v187 = v159;
  }
  else {
    v187 = v158;
  }
  v188 = v187 < v153;
  if (v275_.v299 != 0) {
    v189 = 0;
  }
  else {
    v189 = v275_.v280;
  }
  v190 = v275_.v299 != 0 && v188;
  if (v190 != 0) {
    v191 = 2;
  }
  else {
    v191 = 0;
  }
  v192 = v191 | v115;
  v193 = v151[v191 | (unsigned int)v115];
  v194 = v151[v192 | 1];
  v195 = v112 - 2 * v193;
  v196 = v112 - 2 * v194;
  if (v195 < 0) {
    v195 = -v195;
  }
  if (v196 < 0) {
    v196 = -v196;
  }
  v197 = v195 * v111;
  v198 = v189 + v196 * v111;
  v199 = v275_.v282 - 1;
  if ((int)v275_.v282 <= 1) {
    *(_DWORD*)(v275_.v281 + 4 * v275_.v278) = v197 >= v198;
    return v190 & 1;
  }
  v200 = 2 * v193;
  v201 = 2 * v194;
  v202 = (unsigned int)v275_.v282 - 1LL;
  v203 = v275_.v282 - 2;
  if ((_DWORD)v275_.v282 == 2) {
    v204 = 1;
  }
  else {
    v205 = v275_.v279 + 2;
    v206 = (int*)(v275_.v277 + 8);
    v207 = (_BOOL4*)(v275_.v276 + 8);
    v208 = v275_.v293 + 2;
    v204 = 1;
    do {
      v209 = v198 + v113;
      v210 = *(v208 - 1);
      v204 += 2;
      v211 = v197 < v198 + v113;
      if (v197 < v198 + v113) {
        v209 = v197;
      }
      v212 = v197 + v113;
      v213 = !v211;
      v214 = v212 < v198;
      if (v212 >= v198) {
        v212 = v198;
      }
      v215 = *(v205 - 1);
      v216 = !v214;
      v217 = v210 - v200;
      if (v210 - v200 < 0) {
        v217 = v200 - v210;
      }
      v218 = v210 - v201;
      if (v218 < 0) {
        v218 = -v218;
      }
      v219 = v212 + v218 * v215;
      v220 = v209 + v217 * v215;
      v221 = v219 + v113;
      v222 = v220 < v219 + v113;
      if (v220 < v219 + v113) {
        v221 = v220;
      }
      v223 = v220 + v113;
      v224 = !v222;
      *(v206 - 1) = v213;
      *v206 = v224;
      v206 += 2;
      v225 = v223 >= v219;
      if (v223 >= v219) {
        v223 = v219;
      }
      *(v207 - 1) = v216;
      *v207 = v225;
      v227 = *v208;
      v208 += 2;
      v226 = v227;
      v229 = *v205;
      v205 += 2;
      v228 = v229;
      v207 += 2;
      v230 = v226 - v200;
      if (v226 - v200 < 0) {
        v230 = v200 - v226;
      }
      v197 = v221 + v230 * v228;
      v231 = v226 - v201;
      if (v226 - v201 < 0) {
        v231 = v201 - v226;
      }
      v198 = v223 + v231 * v228;
    } while (v204 - (v202 & 0xFFFFFFFFFFFFFFFELL) != 1);
  }
  v232 = v275_.v276;
  v233 = v275_.v277;
  if ((v202 & 1) != 0) {
    v234 = v198 + v113;
    v235 = v197 < v198 + v113;
    if (v197 < v198 + v113) {
      v234 = v197;
    }
    v236 = v197 + v113;
    v237 = !v235;
    v238 = v236 < v198;
    *(_DWORD*)&v275_.v277[4 * v204] = v237;
    if (v236 < v198) {
      v198 = v236;
    }
    v239 = v275_.v293;
    v240 = !v238;
    *(_DWORD*)&v232[4 * v204] = v240;
    v241 = v110[v204];
    v242 = v239[v204];
    v243 = v242 - v200;
    if (v243 < 0) {
      v243 = -v243;
    }
    v244 = v242 - v201;
    if (v244 < 0) {
      v244 = -v244;
    }
    v197 = v234 + v243 * v241;
    v198 += v244 * v241;
  }
  v211 = v197 < v198;
  v245 = v275_.v281;
  v246 = !v211;
  *(_DWORD*)(v275_.v281 + 4 * v275_.v278) = v246;
  v247 = *(_DWORD*)(v245 + 4LL * v203 + 4);
  if ((~(_BYTE)v203 & 7) != 0) {
    v249 = v199 & 7;
    v248 = (unsigned int)(v114 - 2);
    do {
      v250 = 4 * v248;
      if (v247 == 1) {
        v251 = v232;
      }
      else {
        v251 = v233;
      }
      --v249;
      v252 = &v251[4 * v248--];
      v247 = *((_DWORD*)v252 + 1);
      *(_DWORD*)(v245 + v250) = v247;
    } while (v249 != 0);
  }
  else {
    v248 = (unsigned int)(v114 - 2);
  }
  if (v203 >= 7) {
    v254 = v248 + 8;
    v255 = 4 * v248 + 4;
    do {
      if (v247 == 1) {
        v257 = *(_DWORD*)&v232[v255];
        v258 = v245 + v255;
        v259 = v232;
        *(_DWORD*)(v245 + v255 - 4) = v257;
        if (v257 != 1) {
          goto LABEL_288;
        }
      }
      else {
        v273 = *(_DWORD*)&v233[v255];
        v258 = v245 + v255;
        v259 = v232;
        *(_DWORD*)(v245 + v255 - 4) = v273;
        if (v273 != 1) {
        LABEL_288:
          v274 = *(_DWORD*)&v233[v255 - 4];
          *(_DWORD*)(v258 - 8) = v274;
          v261 = v232;
          if (v274 == 1) {
            goto LABEL_277;
          }
        LABEL_276:
          v261 = v233;
          goto LABEL_277;
        }
      }
      v260 = *(_DWORD*)&v259[v255 - 4];
      *(_DWORD*)(v258 - 8) = v260;
      v261 = v232;
      if (v260 != 1) {
        goto LABEL_276;
      }
    LABEL_277:
      v262 = v232;
      v263 = *(_DWORD*)&v261[v255 - 8];
      *(_DWORD*)(v245 + v255 - 12) = v263;
      if (v263 != 1) {
        v262 = v233;
      }
      v264 = *(_DWORD*)&v262[v255 - 12];
      *(_DWORD*)(v245 + v255 - 16) = v264;
      v265 = v232;
      if (v264 != 1) {
        v265 = v233;
      }
      v266 = v232;
      v267 = *(_DWORD*)&v265[v255 - 16];
      *(_DWORD*)(v245 + v255 - 20) = v267;
      if (v267 != 1) {
        v266 = v233;
      }
      v268 = *(_DWORD*)&v266[v255 - 20];
      *(_DWORD*)(v245 + v255 - 24) = v268;
      v269 = v232;
      if (v268 != 1) {
        v269 = v233;
      }
      v270 = v245 + v255;
      v271 = *(_DWORD*)&v269[v255 - 24];
      v272 = v232;
      *(_DWORD*)(v245 + v255 - 28) = v271;
      if (v271 != 1) {
        v272 = v233;
      }
      v256 = &v272[v255];
      v254 -= 8;
      v255 -= 32;
      v247 = *((_DWORD*)v256 - 7);
      *(_DWORD*)(v270 - 32) = v247;
    } while (v254 > 7);
  }
  return v190 & 1;
}

#pragma GCC visibility pop
