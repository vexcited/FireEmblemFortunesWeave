#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 HUF_readStats_wksp(unsigned __int8*, unsigned __int64, __int64, _DWORD*,
                           _DWORD*, char*, unsigned __int64, __int64,
                           unsigned __int64);
__int64 cuda_Free_plt(_QWORD);
extern __int128 CudaDriverData_11152f0;
extern __int128 CudaDriverData_1115a40;
extern __int128 CudaDriverData_1115e10;
extern __int128 CudaDriverData_11161f0;
unsigned __int64 zstd_decompress_24a9a0(_DWORD* a1, char* a2,
                                        unsigned __int64 a3, __int64 a4,
                                        unsigned __int64 a5);
__int64 zstd_decompress_251d50(__int64 result);

unsigned __int64 zstd_decompress_24a9a0(_DWORD* a1, char* a2,
                                        unsigned __int64 a3, __int64 a4,
                                        unsigned __int64 a5)
{

#pragma clang fp contract(off)
  unsigned __int64 result;
  int v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  int8x16_t v14;
  unsigned int v15;
  __int64 v16;
  _DWORD* v17;
  int v18;
  __int64 v19;
  unsigned int v20;
  _DWORD* v21;
  unsigned int v22;
  int v23;
  bool v24;
  __int64 v25;
  int v26;
  int v27;
  __int64 v28;
  _DWORD* v29;
  unsigned __int64 v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  _DWORD* v38;
  __int64 v39;
  int v40;
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
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  int v64;
  int v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  int* v69;
  char v70;
  _DWORD* v71;
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
  int v85;
  int v86;
  _DWORD* v87;
  int v88;
  __int64 v89;
  int v90;
  int v91;
  unsigned int v92;
  __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  unsigned int v96;
  unsigned __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  unsigned int* v104;
  unsigned int* v105;
  unsigned int v106;
  __int64 v107;
  unsigned __int64 v108;
  int32x4_t v109;
  uint32x4_t v110;
  uint32x4_t v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  unsigned int v118;
  __int64 v119;
  unsigned int v120;
  int64x2_t* v121;
  unsigned __int8* v122;
  unsigned __int8* v123;
  __int64 v124;
  unsigned __int64 v125;
  unsigned int v126;
  unsigned __int8* v127;
  int32x4_t v128;
  unsigned __int64 v129;
  int v130;
  int v131;
  __int64 v132;
  int v133;
  __int64 v134;
  unsigned int v135;
  __int64 v136;
  unsigned __int64 v137;
  unsigned int v138;
  unsigned __int8* v139;
  int32x4_t v140;
  unsigned __int64 v141;
  unsigned int v142;
  unsigned __int8* v143;
  __int64 v144;
  unsigned __int64* v145;
  unsigned __int64 v146;
  unsigned __int64 v147;
  int64x2_t v148;
  unsigned __int64 v149;
  int64x2_t* v150;
  unsigned __int64 v151;
  __int64 v152;
  int64x2_t* v153;
  __int64 v154;
  __int64 v155;
  int v156;
  __int64 v157;
  int v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  int64x2_t* v162;
  unsigned __int8* v163;
  unsigned __int8* v164;
  unsigned int v165;
  unsigned __int64 v166;
  bool v167;
  int32x4_t v168;
  unsigned __int64 v169;
  unsigned int v170;
  unsigned __int64 v171;
  bool v172;
  int32x4_t v173;
  unsigned __int64 v174;
  __int64 v175;
  int v176;
  unsigned __int64 v177;
  unsigned __int64 v178;
  int64x2_t* v179;
  __int64 v180;
  int64x2_t v181;
  __int64 v182;
  int64x2_t* v183;
  __int64 v184;
  int64x2_t* v185;
  __int64 v186;
  __int64 v187;
  int64x2_t* v188;
  int64x2_t* v189;
  __int64 v190;
  int64x2_t v191;
  __int64 v192;
  int64x2_t* v193;
  int64x2_t* v194;
  __int64 v195;
  int64x2_t v196;
  __int64 v197;
  __int64 v198;
  int64x2_t* v199;
  int64x2_t* v200;
  unsigned int v201;
  unsigned __int64 v202;
  bool v203;
  int32x4_t v204;
  unsigned __int64 v205;
  unsigned int v206;
  unsigned __int64 v207;
  bool v208;
  int32x4_t v209;
  unsigned __int64 v210;
  unsigned __int64 v211;
  double* v212;
  unsigned __int64* v213;
  unsigned __int64 v214;
  int8x16_t v215;
  int8x16_t v216;
  float64x2_t v217;
  float64x2_t v218;
  float64x2_t v219;
  float64x2_t v220;
  double* v221;
  double* v222;
  unsigned __int8* v223;
  __int64 k;
  int v225;
  unsigned __int64 v226;
  __int64 v227;
  unsigned __int64 v228;
  __int64 v229;
  unsigned __int64 v230;
  __int64 v231;
  unsigned __int64 v232;
  __int64 v233;
  unsigned __int64 v234;
  __int64 v235;
  unsigned __int64 v236;
  __int64 v237;
  unsigned __int64 v238;
  __int64 v239;
  unsigned __int64 v240;
  unsigned __int64 v241;
  int8x16_t* v242;
  unsigned __int64 v243;
  int8x16_t* v244;
  int8x16_t v245;
  int32x4_t v246;
  int32x4_t v247;
  int32x4_t v248;
  int32x4_t v249;
  int8x16_t v250;
  int8x16_t v251;
  unsigned __int64 v252;
  int8x16_t* v253;
  unsigned __int32* v254;
  unsigned __int32 v255;
  unsigned __int64 v256;
  int32x4_t v257;
  int32x4_t v258;
  int32x4_t v259;
  int8x16_t v260;
  unsigned __int8* v261;
  __int64 i;
  int v263;
  int v264;
  int v265;
  int v266;
  int v267;
  int v268;
  int v269;
  int v270;
  int v271;
  int v272;
  int v273;
  int8x16_t* v274;
  unsigned __int64 v275;
  double* v276;
  int8x16_t v277;
  float64x2_t v278;
  float64x2_t v279;
  float64x2_t v280;
  float64x2_t v281;
  unsigned __int64 v282;
  unsigned __int64 v283;
  float64x2_t v284;
  int8x16_t v285;
  __int64 v286;
  unsigned __int64 v287;
  __int64 v288;
  unsigned __int64 v289;
  unsigned __int64 v290;
  unsigned __int64 v291;
  unsigned __int64 v292;
  float64x2_t v293;
  __int64 v294;
  __int64 v295;
  __int64 v296;
  unsigned __int64 v297;
  unsigned __int64 v298;
  double* v299;
  __int64 v300;
  unsigned __int64 v301;
  double* v302;
  unsigned __int32* v303;
  unsigned __int32 v304;
  int32x4_t v305;
  unsigned __int8 v306;
  unsigned __int8 v307;
  unsigned __int8 v308;
  float64x2_t v309;
  float64x2_t v310;
  float64x2_t v311;
  __int64 v312;
  unsigned __int8* v313;
  int v314;
  int64x2_t v315;
  int8x16_t* v316;
  unsigned __int64 v317;
  float64x2_t* v318;
  int8x16_t v319;
  unsigned __int64 v320;
  int8x16_t* v321;
  unsigned __int32* v322;
  unsigned __int32 v323;
  unsigned __int8* v324;
  __int64 j;
  int v326;
  int v327;
  int8x16_t* v328;
  unsigned __int64 v329;
  double* v330;
  int8x16_t v331;
  int8x16_t v332;
  int8x16_t v333;
  int8x16_t v334;
  float64x2_t v335;
  float64x2_t v336;
  float64x2_t v337;
  float64x2_t v338;
  float64x2_t v339;
  float64x2_t v340;
  float64x2_t v341;
  double* v342;
  double* v343;
  __int64 v344;
  int64x2_t v345;
  __int64 v346;
  int64x2_t v347;
  __int64 v348;
  int64x2_t v349;
  __int64 v350;
  int64x2_t v351;
  __int64 v352;
  int64x2_t v353;
  __int64 v354;
  int64x2_t v355;
  __int64 v356;
  int64x2_t v357;
  int64x2_t v358;
  int v359;
  __int64 v360;
  unsigned __int64 v361;
  unsigned __int64 v362;
  int64x2_t* v363;
  int64x2_t v364;
  int64x2_t* v365;
  int64x2_t* v366;
  __int64 v367;
  __int64 v368;
  int64x2_t* v369;
  __int64 v370;
  __int64 v371;
  int64x2_t* v372;
  int64x2_t* v373;
  int64x2_t v374;
  __int64 v375;
  int64x2_t* v376;
  int64x2_t* v377;
  __int64 v378;
  int64x2_t v379;
  __int64 v380;
  __int64 v381;
  int64x2_t* v382;
  int64x2_t* v383;
  unsigned __int64 v384;
  unsigned int v385;
  int32x4_t v387;
  unsigned __int64 v388;
  unsigned __int64 v389;
  unsigned int v390;
  unsigned __int8* v391;
  int32x4_t v393;
  unsigned __int64 v394;
  unsigned __int64 v395;
  double* v396;
  unsigned __int64* v397;
  unsigned __int64 v398;
  int8x16_t v399;
  int8x16_t v400;
  int8x16_t v401;
  float64x2_t v402;
  float64x2_t v403;
  float64x2_t v404;
  float64x2_t v405;
  double* v406;
  double* v407;
  int64x2_t* v408;
  __int64 v409;
  unsigned __int64 v410;
  unsigned __int64 v411;
  int64x2_t v412;
  unsigned __int64 v413;
  int8x16_t* v414;
  int8x16_t* v415;
  unsigned __int64 v416;
  int8x16_t v417;
  int32x4_t v418;
  int32x4_t v419;
  int32x4_t v420;
  int32x4_t v421;
  int8x16_t v422;
  unsigned __int64 v423;
  int8x16_t* v424;
  unsigned __int32* v425;
  unsigned __int32 v426;
  unsigned __int64 v427;
  int32x4_t v428;
  int32x4_t v429;
  int8x16_t v430;
  __int64 v431;
  int8x16_t* v432;
  double* v433;
  unsigned __int64 v434;
  int8x16_t v435;
  int8x16_t v436;
  int8x16_t v437;
  __int64 v438;
  unsigned __int64 v439;
  __int64 v440;
  __int64 v441;
  float64x2_t v442;
  float64x2_t v443;
  unsigned __int64 v444;
  unsigned __int64 v445;
  __int64 v446;
  __int64 v447;
  __int64 v448;
  __int64 v449;
  __int64 v450;
  unsigned __int64 v451;
  unsigned __int64 v452;
  unsigned __int64 v453;
  unsigned __int64 v454;
  double* v455;
  __int64 v456;
  unsigned __int64 v457;
  double* v458;
  unsigned __int32* v459;
  unsigned __int32 v460;
  int8x16_t v461;
  unsigned __int8 v462;
  unsigned __int8 v463;
  unsigned __int8 v464;
  float64x2_t v465;
  float64x2_t v466;
  float64x2_t v467;
  unsigned __int64 v468;
  int8x16_t* v469;
  int8x16_t* v470;
  int8x16_t v471;
  int8x16_t v472;
  int8x16_t v473;
  int8x16_t v474;
  int8x16_t v475;
  unsigned __int64 v476;
  int8x16_t* v477;
  unsigned __int32* v478;
  unsigned __int32 v479;
  int8x16_t* v480;
  double* v481;
  unsigned __int64 v482;
  int8x16_t v483;
  int8x16_t v484;
  int8x16_t v485;
  int8x16_t v486;
  float64x2_t v487;
  float64x2_t v488;
  float64x2_t v489;
  float64x2_t v490;
  float64x2_t v491;
  __int64 v492;
  double* v493;
  double* v494;
  unsigned __int8* v495;
  __int64 m;
  int v497;
  unsigned __int64 v498;
  unsigned __int64 v499;
  __int64 v500;
  unsigned __int64 v501;
  __int64 v502;
  unsigned __int64 v503;
  __int64 v504;
  unsigned __int64 v505;
  __int64 v506;
  unsigned __int64 v507;
  __int64 v508;
  unsigned __int64 v509;
  __int64 v510;
  unsigned __int64 v511;
  unsigned __int64 v512;
  int64x2_t* v513;
  unsigned __int64 v514;
  __int64 v515;
  int64x2_t* v516;
  int v517;
  int v518;
  __int64 v519;
  unsigned __int64* v520;
  __int64 v521;
  unsigned __int64 v522;
  unsigned __int8* v523;
  unsigned __int64 v524;
  int64x2_t v525;
  unsigned __int64 v526;
  unsigned __int64 v527;
  int64x2_t* v528;
  __int64 v529;
  int64x2_t* v530;
  unsigned __int64* v531;
  __int64 v532;
  unsigned __int64 v533;
  unsigned __int64 v534;
  int64x2_t v535;
  __int64 v536;
  unsigned __int64 v537;
  unsigned __int64 v538;
  int64x2_t* v539;
  __int64 v540;
  int64x2_t* v541;
  unsigned __int8* v542;
  __int64 jj;
  int v544;
  int v545;
  int v546;
  int v547;
  int v548;
  int v549;
  int v550;
  int v551;
  int v552;
  int v553;
  unsigned __int8* v554;
  __int64 n;
  int v556;
  int64x2_t v557;
  int64x2_t v558;
  __int64 v559;
  int64x2_t v560;
  __int64 v561;
  int64x2_t v562;
  __int64 v563;
  int64x2_t v564;
  __int64 v565;
  int64x2_t v566;
  __int64 v567;
  int64x2_t v568;
  __int64 v569;
  int64x2_t v570;
  int64x2_t v571;
  unsigned __int8* v572;
  __int64 ii;
  int v574;
  int v575;
  unsigned __int64 v576;
  _BYTE* v577;
  unsigned int v578;
  int v579;
  int v580;
  unsigned int v581;
  unsigned int v582;
  int v583;
  __int64 v584;
  _DWORD* v585;
  __int64 v586;
  int v587;
  int v588;
  int v589;
  _DWORD* v590;
  int v591;
  __int64 v592;
  unsigned __int8* v593;
  _DWORD* v594;
  __int64 v595;
  __int64 v596;
  __int64 v597;
  unsigned __int8* v598;
  __int64 v599;
  unsigned int v600;
  unsigned int v601[3];
  float64x2x2_t v604;
  float64x2x2_t v605;
  float64x2x2_t v606;
  float64x2x2_t v607;
  float64x2x2_t v608;
  float64x2x2_t v609;
  float64x2x2_t v610;
  float64x2x2_t v611;
  float64x2x2_t v612;
  float64x2x2_t v613;
  float64x2x2_t v614;
  float64x2x2_t v615;
  float64x2x2_t v616;
  float64x2x2_t v617;
  float64x2x2_t v618;
  float64x2x2_t v619;
  float64x2x2_t v620;
  float64x2x2_t v621;
  float64x2x2_t v622;
  float64x2x2_t v623;
  float64x2x2_t v624;
  float64x2x2_t v625;
  float64x2x2_t v626;
  float64x2x4_t v627;
  float64x2x4_t v628;
  float64x2x4_t v629;
  float64x2x4_t v630;
  float64x2x4_t v631;
  float64x2x4_t v632;

  if (a5 < 0x84C) {
    return -1;
  }
  v8 = *a1;
  v9 = (unsigned __int8)*a1;
  *(_OWORD*)(a4 + 640) = (__typeof__(*(_OWORD*)(a4 + 640))){0};
  *(_OWORD*)(a4 + 656) = (__typeof__(*(_OWORD*)(a4 + 656))){0};
  *(_OWORD*)(a4 + 672) = (__typeof__(*(_OWORD*)(a4 + 672))){0};
  *(_OWORD*)(a4 + 688) = (__typeof__(*(_OWORD*)(a4 + 688))){0};
  *(_OWORD*)(a4 + 624) = (__typeof__(*(_OWORD*)(a4 + 624))){0};
  *(_OWORD*)(a4 + 704) = (__typeof__(*(_OWORD*)(a4 + 704))){0};
  *(_OWORD*)(a4 + 720) = (__typeof__(*(_OWORD*)(a4 + 720))){0};
  if (v9 > 0xC) {
    return -44;
  }
  v580 = v8;
  v10 = a4 + 624;
  v11 = a4 + 992;
  v585 = a1 + 1;
  result = HUF_readStats_wksp((unsigned __int8*)(a4 + 992), 0x100u, a4 + 624,
                              &v600, v601, a2, a3, a4 + 1248, 0x36Cu);
  if (result <= 0xFFFFFFFFFFFFFF88LL) {
    v15 = v601[0];
    if (v601[0] > v9) {
      return -44;
    }
    v16 = a4 + 676;
    v17 = (_DWORD*)(a4 + 680);
    v18 = 0;
    v19 = a4;
    v582 = v601[0] + 1;
    do {
      v20 = v601[0] + v18--;
    } while (*(_DWORD*)(v10 + 4LL * v20) == 0);
    v21 = v585;
    v22 = v601[0] + v18;
    v576 = result;
    v577 = a1;
    v23 = 0;
    v24 = v9 != 12 || v601[0] >= 0xC;
    v25 = v22 + 2;
    if (v24) {
      v26 = v9;
    }
    else {
      v26 = 11;
    }
    v583 = v26;
    v579 = v22 + 1;
    if ((unsigned int)v25 >= 2) {
      if (v22 >= 7) {
        v29 = (_DWORD*)(v19 + 712);
        v27 = 0;
        v30 = (v25 - 1) & 0xFFFFFFFFFFFFFFF8LL;
        v28 = 1;
        do {
          v28 += 8;
          v30 -= 8LL;
          v31 = *(v29 - 21) + v27;
          v32 = *(v29 - 20) + v31;
          *(v29 - 7) = v27;
          *(v29 - 6) = v31;
          v33 = *(v29 - 19) + v32;
          v34 = *(v29 - 18) + v33;
          *(v29 - 5) = v32;
          *(v29 - 4) = v33;
          v35 = *(v29 - 17) + v34;
          v36 = *(v29 - 16) + v35;
          *(v29 - 3) = v34;
          *(v29 - 2) = v35;
          v37 = *(v29 - 15) + v36;
          v27 = *(v29 - 14) + v37;
          *(v29 - 1) = v36;
          *v29 = v37;
          v29 += 8;
        } while (v30 != 0);
      }
      else {
        v27 = 0;
        v28 = 1;
      }
      v23 = v27;
      if ((((_BYTE)v25 - 1) & 7) != 0) {
        v38 = (_DWORD*)(v19 + 4 * v28 + 680);
        v39 = v579 & 7;
        do {
          v40 = *(v38 - 14);
          *v38++ = v27;
          --v39;
          v23 = v40 + v27;
          v27 = v23;
        } while (v39 != 0);
      }
    }
    *v17 = v23;
    v17[(unsigned int)v25] = v23;
    if (v600 != 0) {
      v41 = v19 + 736;
      v42 = v600 & 7;
      if (v600 >= 8) {
        v44 = v600 & 0xFFFFFFF8;
        v43 = 0;
        do {
          v45 = v11 + v43;
          v46 = *(unsigned __int8*)(v11 + v43);
          v47 = (unsigned int)v17[v46];
          v17[v46] = v47 + 1;
          *(_BYTE*)(v41 + v47) = v43;
          v48 = *(unsigned __int8*)(v11 + v43 + 1);
          v49 = (unsigned int)v17[v48];
          v17[v48] = v49 + 1;
          *(_BYTE*)(v41 + v49) = v43 + 1;
          v50 = *(unsigned __int8*)(v11 + v43 + 2);
          v51 = (unsigned int)v17[v50];
          v17[v50] = v51 + 1;
          *(_BYTE*)(v41 + v51) = v43 + 2;
          v52 = *(unsigned __int8*)(v11 + v43 + 3);
          v53 = (unsigned int)v17[v52];
          v17[v52] = v53 + 1;
          *(_BYTE*)(v41 + v53) = v43 + 3;
          v54 = *(unsigned __int8*)(v11 + v43 + 4);
          v55 = (unsigned int)v17[v54];
          v17[v54] = v55 + 1;
          *(_BYTE*)(v41 + v55) = v43 + 4;
          v56 = *(unsigned __int8*)(v11 + v43 + 5);
          v57 = (unsigned int)v17[v56];
          v17[v56] = v57 + 1;
          *(_BYTE*)(v41 + v57) = v43 + 5;
          v58 = *(unsigned __int8*)(v11 + v43 + 6);
          v59 = (unsigned int)v17[v58];
          v17[v58] = v59 + 1;
          *(_BYTE*)(v41 + v59) = v43 + 6;
          LOBYTE(v58) = v43 + 7;
          v43 += 8;
          v60 = *(unsigned __int8*)(v45 + 7);
          v61 = (unsigned int)v17[v60];
          v17[v60] = v61 + 1;
          *(_BYTE*)(v41 + v61) = v58;
        } while (v44 != v43);
      }
      else {
        v43 = 0;
      }
      for (; v42 != 0; ++v43) {
        v62 = *(unsigned __int8*)(v11 + v43);
        --v42;
        v63 = (unsigned int)v17[v62];
        v17[v62] = v63 + 1;
        *(_BYTE*)(v41 + v63) = v43;
      }
    }
    v64 = v26;
    *v17 = 0;
    if ((unsigned int)v25 >= 2) {
      v586 = v19;
      v65 = 0;
      if (v15 + v18 >= 7) {
        v67 = 628;
        v68 = 0;
        do {
          v69 = (int*)(v19 + v67);
          v70 = v26 - v15 + v68;
          v71 = (_DWORD*)(v19 + 4 * v68);
          v19 = v586;
          v68 += 8;
          v72 = *v69;
          v71[1] = v65;
          v67 += 32;
          v73 = (v72 << v70) + v65;
          v74 = v69[1];
          v71[2] = v73;
          v75 = (v74 << (v70 + 1)) + v73;
          v76 = v69[2];
          v71[3] = v75;
          v77 = (v76 << (v70 + 2)) + v75;
          v78 = v69[3];
          v71[4] = v77;
          v79 = (v78 << (v70 + 3)) + v77;
          v80 = v69[4];
          v71[5] = v79;
          v81 = (v80 << (v70 + 4)) + v79;
          v82 = v69[5];
          v71[6] = v81;
          v83 = (v82 << (v70 + 5)) + v81;
          v84 = v69[6];
          v71[7] = v83;
          v85 = (v84 << (v70 + 6)) + v83;
          v86 = v69[7];
          v71[8] = v85;
          v65 = (v86 << (v70 + 7)) + v85;
        } while (((v25 - 1) & 0xFFFFFFFFFFFFFFF8LL) != v68);
        v64 = v26;
        v66 = v68 + 1;
      }
      else {
        v66 = 1;
      }
      if ((((_BYTE)v25 - 1) & 7) != 0) {
        v87 = (_DWORD*)(v19 + 4 * v66);
        v88 = ~v15 + v64 + v66;
        v89 = v579 & 7;
        do {
          v90 = v87[156];
          *v87++ = v65;
          --v89;
          v91 = v90 << v88++;
          v65 += v91;
        } while (v89 != 0);
      }
      v92 = v64 + v18 + 1;
      v581 = -v18;
      if (-v18 < v92) {
        v93 = (unsigned int)-v18;
        v94 = v25 - 1;
        v95 = 0;
        v96 = v93;
        v97 = (v25 - 1) & 0xFFFFFFFFFFFFFFF8LL;
        v98 = 13LL * (unsigned int)v93;
        v99 = v586 + v98 * 4;
        while (v94 >= 8 && (unsigned __int64)(52 * (v95 + v93)) >= 0x20) {
          v107 = v586;
          v108 = (v25 - 1) & 0xFFFFFFFFFFFFFFF8LL;
          v109 = vnegq_s32(vdupq_n_s32(v96));
          do {
            v110 = *(uint32x4_t*)(v107 + 4);
            v111 = *(uint32x4_t*)(v107 + 20);
            v112 = v107 + v98 * 4;
            v107 += 32;
            v108 -= 8LL;
            *(uint32x4_t*)(v112 + 4) = vshlq_u32(v110, v109);
            *(uint32x4_t*)(v112 + 20) = vshlq_u32(v111, v109);
          } while (v108 != 0);
          v100 = v97 | 1;
          if (v94 != v97) {
            goto LABEL_45;
          }
        LABEL_41:
          ++v96;
          ++v95;
          v98 += 13;
          v99 += 52;
          if (v92 == v96) {
            goto LABEL_56;
          }
        }
        v100 = 1;
      LABEL_45:
        v101 = v100;
        if ((((_BYTE)v25 - (_BYTE)v100) & 7) != 0) {
          v102 = ((_BYTE)v25 - (_BYTE)v100) & 7;
          v101 = v100;
          do {
            --v102;
            *(_DWORD*)(v99 + 4 * v101) = *(_DWORD*)(v586 + 4 * v101) >> v96;
            ++v101;
          } while (v102 != 0);
        }
        if ((unsigned __int64)(v100 - v25) <= 0xFFFFFFFFFFFFFFF8LL) {
          v103 = v25 - v101;
          v104 = (unsigned int*)(v586 + 28 + 4 * v101);
          do {
            v105 = &v104[v98];
            v103 -= 8;
            *(v105 - 7) = *(v104 - 7) >> v96;
            *(v105 - 6) = *(v104 - 6) >> v96;
            *(v105 - 5) = *(v104 - 5) >> v96;
            *(v105 - 4) = *(v104 - 4) >> v96;
            *(v105 - 3) = *(v104 - 3) >> v96;
            *(v105 - 2) = *(v104 - 2) >> v96;
            *(v105 - 1) = *(v104 - 1) >> v96;
            v106 = *v104;
            v104 += 8;
            *v105 = v106 >> v96;
          } while (v103 != 0);
        }
        goto LABEL_41;
      }
    LABEL_56:
      v113 = v586;
      v64 = v26;
      if (v579 >= 1) {
        v114 = v586 + 736;
        v578 = v582 - v26;
        v593 = (unsigned __int8*)(a1 + 1);
        v590 = a1 + 17;
        v597 = v586 + 735;
        v115 = 1;
        do {
          v116 = *(int*)(v16 + 4 * v115);
          v117 = *(unsigned int*)(v113 + 4 * v115);
          v118 = v582 - v115;
          v119 = *(int*)(v16 + 4 * (v115 + 1));
          v584 = v115 + 1;
          v120 = v64 - (v582 - v115);
          if (v120 >= v581) {
            if ((_DWORD)v119 != (_DWORD)v116) {
              v130 = 1 << v120;
              v131 = v118 + v578;
              v132 = v113 + 52LL * v118;
              v133 = (v118 << 16) + 0x1000000;
              if ((int)(v118 + v578) <= 1) {
                v134 = 1;
              }
              else {
                v134 = (unsigned int)v131;
              }
              v592 = v134;
              v591 = (v118 << 16) + 0x1000000;
              v135 = v118 + v582;
              if ((int)v134 > v579) {
                if (v131 < 2) {
                  goto LABEL_58;
                }
                if ((((_DWORD)v119 - (_DWORD)v116) & 1) == 0) {
                  v136 = v116;
                  goto LABEL_314;
                }
                v408 = (int64x2_t*)&v21[(int)v117];
                v409 = v133 | (unsigned int)*(unsigned __int8*)(v114 + v116);
                v410 = v409 | (v409 << 32);
                if (v130 == 2) {
                  LANES128(*(v408)).n128_u64[0] = v410;
                }
                else if (v130 == 4) {
                  LANES128(*(v408)).n128_u64[0] = v410;
                  LANES128(*(v408)).n128_u64[1] = v410;
                }
                else {
                  v411 = *(unsigned int*)(v132 + 4 * v592);
                  if ((int)v411 >= 1) {
                    v412 = vdupq_n_s64(v410);
                    if ((unsigned int)v411 >= 0x19) {
                      v513 = v408 + 4;
                      v514 = ((v411 - 1) >> 3) + 1;
                      v413 = 8 * (v514 & 0x3FFFFFFFFFFFFFFCLL);
                      v515 = v514 & 0x3FFFFFFFFFFFFFFCLL;
                      do {
                        v513[-4] = v412;
                        v513[-3] = v412;
                        v515 -= 4;
                        v513[-2] = v412;
                        v513[-1] = v412;
                        *v513 = v412;
                        v513[1] = v412;
                        v513[2] = v412;
                        v513[3] = v412;
                        v513 += 8;
                      } while (v515 != 0);
                      if (v514 == (v514 & 0x3FFFFFFFFFFFFFFCLL)) {
                        goto LABEL_313;
                      }
                    }
                    else {
                      v413 = 0;
                    }
                    v516 = (int64x2_t*)&v593[4 * v413 + 4 * (int)v117];
                    do {
                      *v516 = v412;
                      v516[1] = v412;
                      v516 += 2;
                      v413 += 8LL;
                    } while (v413 < v411);
                  }
                }
              LABEL_313:
                LODWORD(v117) = v117 + v130;
                v136 = v116 + 1;
              LABEL_314:
                if ((_DWORD)v119 == (_DWORD)v116 + 1) {
                  goto LABEL_58;
                }
                v517 = 2 * v130;
                v518 = v117 + v130;
                while (2) {
                  v519 = (int)v117;
                  v520 = (unsigned __int64*)&v21[v519];
                  v521 = v591 | (unsigned int)*(unsigned __int8*)(v114 + v136);
                  v522 = v521 | (v521 << 32);
                  if (v130 == 2) {
                    v523 = v593;
                    *v520 = v522;
                  }
                  else {
                    if (v130 == 4) {
                      v523 = v593;
                      *v520 = v522;
                      v520[1] = v522;
                      goto LABEL_330;
                    }
                    v523 = v593;
                    v524 = *(unsigned int*)(v132 + 4 * v592);
                    if ((int)v524 >= 1) {
                      v525 = vdupq_n_s64(v522);
                      if ((unsigned int)v524 < 0x19) {
                        v526 = 0;
                        goto LABEL_328;
                      }
                      v527 = ((v524 - 1) >> 3) + 1;
                      v528 = (int64x2_t*)&v590[v519];
                      v526 = 8 * (v527 & 0x3FFFFFFFFFFFFFFCLL);
                      v529 = v527 & 0x3FFFFFFFFFFFFFFCLL;
                      do {
                        v528[-4] = v525;
                        v528[-3] = v525;
                        v529 -= 4;
                        v528[-2] = v525;
                        v528[-1] = v525;
                        *v528 = v525;
                        v528[1] = v525;
                        v528[2] = v525;
                        v528[3] = v525;
                        v528 += 8;
                      } while (v529 != 0);
                      v523 = v593;
                      if (v527 != (v527 & 0x3FFFFFFFFFFFFFFCLL)) {
                      LABEL_328:
                        v530 = (int64x2_t*)&v523[4 * v526 + v519 * 4];
                        do {
                          *v530 = v525;
                          v530[1] = v525;
                          v530 += 2;
                          v526 += 8LL;
                        } while (v526 < v524);
                      }
                    }
                  }
                LABEL_330:
                  v531 = (unsigned __int64*)&v21[(int)v117 + v130];
                  v532 = v591 |
                         (unsigned int)*(unsigned __int8*)(v586 + 737 + v136);
                  v533 = v532 | (v532 << 32);
                  if (v130 == 2) {
                    *v531 = v533;
                    goto LABEL_317;
                  }
                  if (v130 == 4) {
                    *v531 = v533;
                    v531[1] = v533;
                    goto LABEL_317;
                  }
                  v534 = *(unsigned int*)(v132 + 4 * v592);
                  if ((int)v534 >= 1) {
                    v535 = vdupq_n_s64(v533);
                    v536 = v518;
                    if ((unsigned int)v534 < 0x19) {
                      v537 = 0;
                      goto LABEL_339;
                    }
                    v538 = ((v534 - 1) >> 3) + 1;
                    v539 = (int64x2_t*)&v590[v536];
                    v537 = 8 * (v538 & 0x3FFFFFFFFFFFFFFCLL);
                    v540 = v538 & 0x3FFFFFFFFFFFFFFCLL;
                    do {
                      v539[-4] = v535;
                      v539[-3] = v535;
                      v540 -= 4;
                      v539[-2] = v535;
                      v539[-1] = v535;
                      *v539 = v535;
                      v539[1] = v535;
                      v539[2] = v535;
                      v539[3] = v535;
                      v539 += 8;
                    } while (v540 != 0);
                    v523 = v593;
                    if (v538 != (v538 & 0x3FFFFFFFFFFFFFFCLL)) {
                    LABEL_339:
                      v541 = (int64x2_t*)&v523[4 * v537 + v536 * 4];
                      do {
                        *v541 = v535;
                        v541[1] = v535;
                        v541 += 2;
                        v537 += 8LL;
                      } while (v537 < v534);
                    }
                  }
                LABEL_317:
                  LODWORD(v117) = v117 + v517;
                  v136 += 2;
                  v518 += v517;
                  if ((_DWORD)v119 == (_DWORD)v136) {
                    goto LABEL_58;
                  }
                  continue;
                }
              }
              v589 = v119;
              v587 = v118 + v578;
              v588 = 1 << v120;
              while (2) {
                v142 = *(unsigned __int8*)(v114 + v116);
                v143 = v593;
                v144 = (int)v117;
                v145 = (unsigned __int64*)&v21[v144];
                v594 = &v590[v144];
                if (v131 >= 2) {
                  v146 = v591 | v142 | ((unsigned __int64)(v591 | v142) << 32);
                  if (v130 == 2) {
                    *v145 = v146;
                  }
                  else {
                    if (v130 == 4) {
                      *v145 = v146;
                      v145[1] = v146;
                      goto LABEL_100;
                    }
                    v147 = *(unsigned int*)(v132 + 4 * v592);
                    if ((int)v147 >= 1) {
                      v148 = vdupq_n_s64(v146);
                      if ((unsigned int)v147 < 0x19) {
                        v149 = 0;
                        goto LABEL_98;
                      }
                      v150 = (int64x2_t*)&v590[v144];
                      v151 = ((v147 - 1) >> 3) + 1;
                      v149 = 8 * (v151 & 0x3FFFFFFFFFFFFFFCLL);
                      v152 = v151 & 0x3FFFFFFFFFFFFFFCLL;
                      do {
                        v150[-4] = v148;
                        v150[-3] = v148;
                        v152 -= 4;
                        v150[-2] = v148;
                        v150[-1] = v148;
                        *v150 = v148;
                        v150[1] = v148;
                        v150[2] = v148;
                        v150[3] = v148;
                        v150 += 8;
                      } while (v152 != 0);
                      if (v151 != (v151 & 0x3FFFFFFFFFFFFFFCLL)) {
                      LABEL_98:
                        v153 = (int64x2_t*)&v593[4 * v149 + v144 * 4];
                        do {
                          *v153 = v148;
                          v153[1] = v148;
                          v153 += 2;
                          v149 += 8LL;
                        } while (v149 < v147);
                      }
                    }
                  }
                }
              LABEL_100:
                v154 = v592;
                v155 = v586 + 735;
                v156 = v142 | 0x2000000;
                v595 = v116;
                v598 = &v593[v144 * 4];
                v599 = (int)v117;
              LABEL_102:
                v157 = *(int*)(v16 + 4 * v154);
                v158 = v135 - v154;
                v159 = *(unsigned int*)(v132 + 4 * v154++);
                v160 = *(int*)(v16 + 4 * v154);
                v161 = (unsigned int)(1 << (v64 - v158));
                v162 = (int64x2_t*)((char*)v145 + 4 * v159);
                v163 = (unsigned __int8*)(v114 + v157);
                v164 = (unsigned __int8*)(v114 + v160);
                if ((int)v161 <= 3) {
                  if ((_DWORD)v161 != 1) {
                    if ((_DWORD)v161 == 2) {
                      if ((_DWORD)v157 == (_DWORD)v160) {
                        goto LABEL_101;
                      }
                      v165 = v156 + (v158 << 16);
                      v166 = v160 - v157;
                      if ((unsigned __int64)(v160 - v157) > 3 &&
                          (v162 < (int64x2_t*)v164
                               ? (v167 = v163 >=
                                         &v143[8 * v160 + 4 * (v599 + v159) -
                                               8 * v157])
                               : (v167 = true),
                           v167)) {
                        v168 = vdupq_n_s32(v165);
                        if (v166 >= 0x10) {
                          v169 = v166 & 0xFFFFFFFFFFFFFFF0LL;
                          v242 = (int8x16_t*)(v114 + v157);
                          v243 = v166 & 0xFFFFFFFFFFFFFFF0LL;
                          v244 = (int8x16_t*)&v598[4 * v159];
                          do {
                            v245 = *v242++;
                            v243 -= 16LL;
                            v246 = vshlq_n_s32(
                                vqtbl1q_s8(v245,
                                           COERCE_AS(int8x16_t,
                                                     CudaDriverData_11161f0)),
                                8u);
                            v247 = vshlq_n_s32(
                                vqtbl1q_s8(v245,
                                           COERCE_AS(int8x16_t,
                                                     CudaDriverData_11152f0)),
                                8u);
                            v248 = vshlq_n_s32(
                                vqtbl1q_s8(v245,
                                           COERCE_AS(int8x16_t,
                                                     CudaDriverData_1115a40)),
                                8u);
                            v249 = vshlq_n_s32(
                                vqtbl1q_s8(v245,
                                           COERCE_AS(int8x16_t,
                                                     CudaDriverData_1115e10)),
                                8u);
                            v250 = vzip1q_s32(v249, v249);
                            v251 = vzip1q_s32(v247, v247);
                            v14 = vorrq_s8(vzip2q_s32(v247, v247), v168);
                            v606.val[0] =
                                vorrq_s8(vzip2q_s32(v249, v249), v168);
                            *v244 = vorrq_s8(vzip1q_s32(v248, v248), v168);
                            v244[1] = vorrq_s8(vzip2q_s32(v248, v248), v168);
                            v244[2] = vorrq_s8(vzip1q_s32(v246, v246), v168);
                            v244[3] = vorrq_s8(vzip2q_s32(v246, v246), v168);
                            v244[4] = vorrq_s8(v250, v168);
                            v244[5] = v606.val[0];
                            v244[6] = vorrq_s8(v251, v168);
                            v244[7] = v14;
                            v244 += 8;
                          } while (v243 != 0);
                          if (v166 == v169) {
                            goto LABEL_101;
                          }
                          if ((v166 & 0xC) == 0) {
                            v162 = (int64x2_t*)((char*)v162 + 8 * v169);
                            v163 += v169;
                            v261 = v163;
                            i = ((int)v113 + (int)v160 - (int)v163) & 7LL;
                            if (i != 0) {
                              goto LABEL_181;
                            }
                            goto LABEL_182;
                          }
                        }
                        else {
                          v169 = 0;
                        }
                        v162 = (int64x2_t*)((char*)v162 +
                                            8 * (v166 & 0xFFFFFFFFFFFFFFFCLL));
                        v163 += v166 & 0xFFFFFFFFFFFFFFFCLL;
                        v252 = v169 - (v166 & 0xFFFFFFFFFFFFFFFCLL);
                        v253 = (int8x16_t*)&v598[8 * v169 + 4 * v159];
                        v254 = (unsigned __int32*)(v114 + v169 + v157);
                        do {
                          v255 = *v254++;
                          LANES128(v14).n128_u32[0] = v255;
                          v252 += 4LL;
                          v256 = LANES128_OF(
                                     vmovl_u8(COERCE_AS(
                                         uint8x8_t, LANES128(v14).n128_u64[0])))
                                     .n128_u64[0];
                          LANES128(v606.val[0]).n128_u8[0] = v256;
                          LANES128(v606.val[0]).n128_u8[1] = BYTE2(v256);
                          LANES128(v606.val[0]).n128_u8[2] = BYTE4(v256);
                          LANES128(v606.val[0]).n128_u8[3] = BYTE6(v256);
                          LANES128(v606.val[0]).n128_u8[4] = v256;
                          LANES128(v606.val[0]).n128_u8[5] = BYTE2(v256);
                          LANES128(v606.val[0]).n128_u8[6] = BYTE4(v256);
                          LANES128(v606.val[0]).n128_u8[7] = BYTE6(v256);
                          v257 = vqtbl1q_s8(
                              v606.val[0],
                              COERCE_AS(int8x16_t, CudaDriverData_1115a40));
                          v258 = vshlq_n_s32(
                              vqtbl1q_s8(
                                  v606.val[0],
                                  COERCE_AS(int8x16_t, CudaDriverData_11161f0)),
                              8u);
                          v259 = vshlq_n_s32(v257, 8u);
                          v260 = vzip2q_s32(v259, v258);
                          v14 = vorrq_s8(vzip1q_s32(v259, v258), v168);
                          v606.val[0] = vorrq_s8(v260, v168);
                          *v253 = v14;
                          v253[1] = v606.val[0];
                          v253 += 2;
                        } while (v252 != 0);
                        v155 = v586 + 735;
                        if (v166 != (v166 & 0xFFFFFFFFFFFFFFFCLL)) {
                          goto LABEL_180;
                        }
                      }
                      else {
                      LABEL_180:
                        v261 = v163;
                        for (i = ((int)v113 + (int)v160 - (int)v163) & 7LL;
                             i != 0; v162 = (int64x2_t*)((char*)v162 + 8)) {
                        LABEL_181:
                          v263 = *v261++;
                          --i;
                          v264 = v165 | (v263 << 8);
                          LANES128(*(v162)).n128_u32[0] = v264;
                          LANES128(*(v162)).n128_u32[1] = v264;
                        }
                      LABEL_182:
                        if ((unsigned __int64)(v155 + v160 - (_QWORD)v163) >=
                            7) {
                          do {
                            v265 = v165 | (*v261 << 8);
                            LANES128(*(v162)).n128_u32[0] = v265;
                            LANES128(*(v162)).n128_u32[1] = v265;
                            v266 = v165 | (v261[1] << 8);
                            LANES128(*(v162)).n128_u32[2] = v266;
                            LANES128(*(v162)).n128_u32[3] = v266;
                            v267 = v165 | (v261[2] << 8);
                            LANES128(v162[1]).n128_u32[0] = v267;
                            LANES128(v162[1]).n128_u32[1] = v267;
                            v268 = v165 | (v261[3] << 8);
                            LANES128(v162[1]).n128_u32[2] = v268;
                            LANES128(v162[1]).n128_u32[3] = v268;
                            v269 = v165 | (v261[4] << 8);
                            LANES128(v162[2]).n128_u32[0] = v269;
                            LANES128(v162[2]).n128_u32[1] = v269;
                            v270 = v165 | (v261[5] << 8);
                            LANES128(v162[2]).n128_u32[2] = v270;
                            LANES128(v162[2]).n128_u32[3] = v270;
                            v271 = v165 | (v261[6] << 8);
                            LANES128(v162[3]).n128_u32[0] = v271;
                            LANES128(v162[3]).n128_u32[1] = v271;
                            v272 = v261[7];
                            v261 += 8;
                            v273 = v165 | (v272 << 8);
                            LANES128(v162[3]).n128_u32[2] = v273;
                            LANES128(v162[3]).n128_u32[3] = v273;
                            v162 += 4;
                          } while (v261 != v164);
                        }
                      }
                    LABEL_101:
                      if (v154 == v25) {
                        v131 = v587;
                        v130 = v588;
                        LODWORD(v117) = v599 + v588;
                        v116 = v595 + 1;
                        if (v589 == (_DWORD)v595 + 1) {
                          goto LABEL_58;
                        }
                        continue;
                      }
                      goto LABEL_102;
                    }
                  LABEL_125:
                    if ((_DWORD)v157 != (_DWORD)v160) {
                      v175 = 4LL * (unsigned int)(1 << (v64 - v158));
                      v176 = v156 + (v158 << 16);
                      v177 = v175 - 32;
                      v178 = ((unsigned __int64)(v175 - 32) >> 5) + 1;
                      if ((((_DWORD)v160 - (_DWORD)v157) & 1) != 0) {
                        v179 = (int64x2_t*)((char*)v162 + v175);
                        v180 = v176 | (*v163 << 8);
                        v181 =
                            vdupq_n_s64(v180 | (unsigned __int64)(v180 << 32));
                        if (v177 < 0x60) {
                          goto LABEL_363;
                        }
                        v162 += 2 * (v178 & 0xFFFFFFFFFFFFFFCLL);
                        v182 = v178 & 0xFFFFFFFFFFFFFFCLL;
                        v183 = (int64x2_t*)&v594[v159];
                        do {
                          v183[-4] = v181;
                          v183[-3] = v181;
                          v182 -= 4;
                          v183[-2] = v181;
                          v183[-1] = v181;
                          *v183 = v181;
                          v183[1] = v181;
                          v183[2] = v181;
                          v183[3] = v181;
                          v183 += 8;
                        } while (v182 != 0);
                        if (v178 != (v178 & 0xFFFFFFFFFFFFFFCLL)) {
                        LABEL_363:
                          do {
                            *v162 = v181;
                            v162[1] = v181;
                            v162 += 2;
                          } while (v162 != v179);
                        }
                        ++v163;
                        v162 = v179;
                      }
                      if (v160 - 1 != v157) {
                        v184 = v178 & 0xFFFFFFFFFFFFFFCLL;
                        v185 = v162 + 4;
                        v186 = 8 * v161;
                        v187 = 2 * (v178 & 0xFFFFFFFFFFFFFFCLL);
                        do {
                          v188 = (int64x2_t*)((char*)v162 + v175);
                          v189 = v162;
                          v190 = v176 | (*v163 << 8);
                          v191 = vdupq_n_s64(v190 |
                                             (unsigned __int64)(v190 << 32));
                          if (v177 < 0x60) {
                            goto LABEL_364;
                          }
                          v189 = &v162[v187];
                          v192 = v178 & 0xFFFFFFFFFFFFFFCLL;
                          v193 = v185;
                          do {
                            v193[-4] = v191;
                            v193[-3] = v191;
                            v192 -= 4;
                            v193[-2] = v191;
                            v193[-1] = v191;
                            *v193 = v191;
                            v193[1] = v191;
                            v193[2] = v191;
                            v193[3] = v191;
                            v193 += 8;
                          } while (v192 != 0);
                          if (v178 != v184) {
                          LABEL_364:
                            do {
                              *v189 = v191;
                              v189[1] = v191;
                              v189 += 2;
                            } while (v189 != v188);
                          }
                          v194 = (int64x2_t*)((char*)v188 + v175);
                          v195 = v176 | (v163[1] << 8);
                          v196 = vdupq_n_s64(v195 |
                                             (unsigned __int64)(v195 << 32));
                          if (v177 < 0x60) {
                            goto LABEL_365;
                          }
                          v188 = (int64x2_t*)((char*)v188 + v187 * 16);
                          v197 = v175;
                          v198 = v178 & 0xFFFFFFFFFFFFFFCLL;
                          do {
                            v199 = (int64x2_t*)((char*)v162 + v197);
                            v200 = (int64x2_t*)((char*)v185 + v197);
                            v198 -= 4;
                            v197 += 128;
                            *v199 = v196;
                            v199[1] = v196;
                            v199[2] = v196;
                            v199[3] = v196;
                            *v200 = v196;
                            v200[1] = v196;
                            v200[2] = v196;
                            v200[3] = v196;
                          } while (v198 != 0);
                          if (v178 != v184) {
                          LABEL_365:
                            do {
                              *v188 = v196;
                              v188[1] = v196;
                              v188 += 2;
                            } while (v188 != v194);
                          }
                          v163 += 2;
                          v185 = (int64x2_t*)((char*)v185 + v186);
                          v162 = v194;
                        } while (v163 != v164);
                      }
                    }
                    goto LABEL_101;
                  }
                  if ((_DWORD)v157 == (_DWORD)v160) {
                    goto LABEL_101;
                  }
                  v201 = v156 + (v158 << 16);
                  v202 = v160 - v157;
                  if ((unsigned __int64)(v160 - v157) <= 3 ||
                      (v162 < (int64x2_t*)v164
                           ? (v203 = v163 >=
                                     &v143[4 * (v599 + v160 + v159 - v157)])
                           : (v203 = true),
                       !v203)) {
                  LABEL_204:
                    v324 = v163;
                    for (j = ((int)v113 + (int)v160 - (int)v163) & 7LL; j != 0;
                         v162 = (int64x2_t*)((char*)v162 + 4)) {
                    LABEL_205:
                      v326 = *v324++;
                      --j;
                      LANES128(*(v162)).n128_u32[0] = v201 | (v326 << 8);
                    }
                  LABEL_206:
                    if ((unsigned __int64)(v155 + v160 - (_QWORD)v163) >= 7) {
                      do {
                        LANES128(*(v162)).n128_u32[0] = v201 | (*v324 << 8);
                        LANES128(*(v162)).n128_u32[1] = v201 | (v324[1] << 8);
                        LANES128(*(v162)).n128_u32[2] = v201 | (v324[2] << 8);
                        LANES128(*(v162)).n128_u32[3] = v201 | (v324[3] << 8);
                        LANES128(v162[1]).n128_u32[0] = v201 | (v324[4] << 8);
                        LANES128(v162[1]).n128_u32[1] = v201 | (v324[5] << 8);
                        LANES128(v162[1]).n128_u32[2] = v201 | (v324[6] << 8);
                        v327 = v324[7];
                        v324 += 8;
                        LANES128(v162[1]).n128_u32[3] = v201 | (v327 << 8);
                        v162 += 2;
                      } while (v324 != v164);
                    }
                    goto LABEL_101;
                  }
                  v204 = vdupq_n_s32(v201);
                  if (v202 >= 0x10) {
                    v205 = v202 & 0xFFFFFFFFFFFFFFF0LL;
                    v316 = (int8x16_t*)(v114 + v157);
                    v317 = v202 & 0xFFFFFFFFFFFFFFF0LL;
                    v318 = (float64x2_t*)&v598[4 * v159];
                    do {
                      v319 = *v316++;
                      v317 -= 16LL;
                      v606.val[0] = vorrq_s8(
                          vshlq_n_s32(
                              vqtbl1q_s8(
                                  v319,
                                  COERCE_AS(int8x16_t, CudaDriverData_1115a40)),
                              8u),
                          v204);
                      v14 = vorrq_s8(
                          vshlq_n_s32(
                              vqtbl1q_s8(
                                  v319,
                                  COERCE_AS(int8x16_t, CudaDriverData_11152f0)),
                              8u),
                          v204);
                      v318[2] = vorrq_s8(
                          vshlq_n_s32(
                              vqtbl1q_s8(
                                  v319,
                                  COERCE_AS(int8x16_t, CudaDriverData_1115e10)),
                              8u),
                          v204);
                      v318[3] = v14;
                      *v318 = v606.val[0];
                      v318[1] = vorrq_s8(
                          vshlq_n_s32(
                              vqtbl1q_s8(
                                  v319,
                                  COERCE_AS(int8x16_t, CudaDriverData_11161f0)),
                              8u),
                          v204);
                      v318 += 4;
                    } while (v317 != 0);
                    if (v202 == v205) {
                      goto LABEL_101;
                    }
                    if ((v202 & 0xC) == 0) {
                      v162 = (int64x2_t*)((char*)v162 + 4 * v205);
                      v163 += v205;
                      v324 = v163;
                      j = ((int)v113 + (int)v160 - (int)v163) & 7LL;
                      if (j != 0) {
                        goto LABEL_205;
                      }
                      goto LABEL_206;
                    }
                  }
                  else {
                    v205 = 0;
                  }
                  v162 = (int64x2_t*)((char*)v162 +
                                      4 * (v202 & 0xFFFFFFFFFFFFFFFCLL));
                  v163 += v202 & 0xFFFFFFFFFFFFFFFCLL;
                  v320 = v205 - (v202 & 0xFFFFFFFFFFFFFFFCLL);
                  v321 = (int8x16_t*)&v598[4 * v205 + 4 * v159];
                  v322 = (unsigned __int32*)(v114 + v205 + v157);
                  do {
                    v323 = *v322++;
                    LANES128(v14).n128_u32[0] = v323;
                    v320 += 4LL;
                    v14 = vorrq_s8(
                        vshll_n_u16(
                            COERCE_AS(
                                uint16x4_t,
                                LANES128_OF(
                                    vmovl_u8(COERCE_AS(
                                        uint8x8_t, LANES128(v14).n128_u64[0])))
                                    .n128_u64[0]),
                            8u),
                        v204);
                    *v321++ = v14;
                  } while (v320 != 0);
                  if (v202 == (v202 & 0xFFFFFFFFFFFFFFFCLL)) {
                    goto LABEL_101;
                  }
                  goto LABEL_204;
                }
                break;
              }
              if ((_DWORD)v161 != 4) {
                if ((_DWORD)v161 != 8) {
                  goto LABEL_125;
                }
                if ((_DWORD)v157 == (_DWORD)v160) {
                  goto LABEL_101;
                }
                v170 = v156 + (v158 << 16);
                v171 = v160 - v157;
                if ((unsigned __int64)(v160 - v157) <= 3 ||
                    (v162 < (int64x2_t*)v164
                         ? (v172 = v163 >= &v143[32 * v160 + 4 * (v599 + v159) -
                                                 32 * v157])
                         : (v172 = true),
                     !v172)) {
                LABEL_192:
                  v312 = ((int)v113 + (int)v160 - (int)v163) & 7LL;
                  if (v312 != 0) {
                    goto LABEL_193;
                  }
                LABEL_218:
                  v313 = v163;
                  if ((unsigned __int64)(v155 + v160 - (_QWORD)v163) < 7) {
                    goto LABEL_101;
                  }
                  goto LABEL_219;
                }
                v173 = vdupq_n_s32(v170);
                if (v171 >= 0x10) {
                  v174 = v171 & 0xFFFFFFFFFFFFFFF0LL;
                  v274 = (int8x16_t*)(v114 + v157);
                  v275 = v171 & 0xFFFFFFFFFFFFFFF0LL;
                  v276 = (double*)&v598[4 * v159];
                  do {
                    v277 = *v274++;
                    v275 -= 16LL;
                    v627.val[0] = vorrq_s8(
                        vshlq_n_s32(
                            vqtbl1q_s8(v277, COERCE_AS(int8x16_t,
                                                       CudaDriverData_1115a40)),
                            8u),
                        v173);
                    LANES128(v278).n128_u64[0] =
                        LANES128(v627.val[0]).n128_u32[2];
                    LANES128(v278).n128_u64[1] =
                        LANES128(v627.val[0]).n128_u32[3];
                    v279 = v278;
                    LANES128(v278).n128_u64[0] =
                        LANES128(v627.val[0]).n128_u32[0];
                    LANES128(v278).n128_u64[1] =
                        LANES128(v627.val[0]).n128_u32[1];
                    v280 = v278;
                    LANES128(v278).n128_u64[0] =
                        LANES128(v627.val[0]).n128_u32[0];
                    LANES128(v278).n128_u64[1] =
                        LANES128(v627.val[0]).n128_u32[1];
                    v281 = v278;
                    v282 = LANES128(v279).n128_u64[1];
                    v283 = LANES128(v279).n128_u64[0];
                    LANES128(v278).n128_u64[0] =
                        LANES128(v627.val[0]).n128_u32[0];
                    LANES128(v278).n128_u64[1] =
                        LANES128(v627.val[0]).n128_u32[1];
                    v627.val[1] = v278;
                    LANES128(v278).n128_u64[1] =
                        LANES128(v627.val[0]).n128_u32[1];
                    v284 = v280;
                    LANES128(v627.val[0]).n128_u32[1] =
                        LANES128(v627.val[0]).n128_u32[0];
                    v285 = vorrq_s8(
                        vshlq_n_s32(
                            vqtbl1q_s8(v277, COERCE_AS(int8x16_t,
                                                       CudaDriverData_11161f0)),
                            8u),
                        v173);
                    LANES128(v627.val[0]).n128_u64[1] =
                        LANES128(v278).n128_u64[1] |
                        (LANES128(v278).n128_u64[1] << 32);
                    LANES128(v627.val[1]).n128_u64[0] |=
                        LANES128(v627.val[1]).n128_u64[0] << 32;
                    LANES128(v627.val[1]).n128_u64[1] |=
                        LANES128(v627.val[1]).n128_u64[1] << 32;
                    LANES128(v627.val[2]).n128_u64[0] =
                        LANES128(v281).n128_u64[0] |
                        (LANES128(v281).n128_u64[0] << 32);
                    LANES128(v627.val[2]).n128_u64[1] =
                        LANES128(v281).n128_u64[1] |
                        (LANES128(v281).n128_u64[1] << 32);
                    LANES128(v627.val[3]).n128_u64[0] =
                        LANES128(v284).n128_u64[0] |
                        (LANES128(v284).n128_u64[0] << 32);
                    v286 = LANES128(v285).n128_u32[1];
                    LANES128(v627.val[3]).n128_u64[1] =
                        LANES128(v284).n128_u64[1] |
                        (LANES128(v284).n128_u64[1] << 32);
                    vst4q_f64(v276, v627);
                    LANES128(v627.val[0]).n128_u64[0] = v283 | (v283 << 32);
                    v287 = v282 | (v282 << 32);
                    v288 = LANES128(v285).n128_u32[0];
                    LANES128(v627.val[0]).n128_u64[1] = v287;
                    v627.val[1] = v627.val[0];
                    v627.val[2] = v627.val[0];
                    v627.val[3] = v627.val[0];
                    vst4q_f64(v276 + 8, v627);
                    LANES128(v278).n128_u64[0] = LANES128(v285).n128_u32[2];
                    LANES128(v278).n128_u64[1] = LANES128(v285).n128_u32[3];
                    v627.val[1] = v278;
                    LANES128(v278).n128_u64[0] = LANES128(v285).n128_u32[0];
                    LANES128(v278).n128_u64[1] = LANES128(v285).n128_u32[1];
                    v627.val[0] = v278;
                    v289 = LANES128(v627.val[1]).n128_u64[1];
                    v290 = LANES128(v627.val[1]).n128_u64[0];
                    LANES128(v278).n128_u64[1] = LANES128(v285).n128_u32[1];
                    LANES128(v627.val[1]).n128_u64[0] =
                        LANES128(v285).n128_u32[0];
                    v291 = LANES128(v627.val[0]).n128_u64[1];
                    v292 = LANES128(v627.val[0]).n128_u64[0];
                    LANES128(v627.val[0]).n128_u32[0] =
                        LANES128(v285).n128_u32[0];
                    LANES128(v627.val[0]).n128_u32[1] =
                        LANES128(v285).n128_u32[0];
                    LANES128(v627.val[0]).n128_u32[2] =
                        LANES128(v285).n128_u32[1];
                    LANES128(v627.val[0]).n128_u32[3] =
                        LANES128(v285).n128_u32[1];
                    v606.val[0] = vorrq_s8(
                        vshlq_n_s32(
                            vqtbl1q_s8(v277, COERCE_AS(int8x16_t,
                                                       CudaDriverData_1115e10)),
                            8u),
                        v173);
                    v14 = vorrq_s8(
                        vshlq_n_s32(
                            vqtbl1q_s8(v277, COERCE_AS(int8x16_t,
                                                       CudaDriverData_11152f0)),
                            8u),
                        v173);
                    LANES128(v627.val[1]).n128_u64[0] |=
                        LANES128(v627.val[1]).n128_u64[0] << 32;
                    LANES128(v627.val[1]).n128_u64[1] =
                        LANES128(v278).n128_u64[1] |
                        (LANES128(v278).n128_u64[1] << 32);
                    LANES128(v627.val[2]).n128_u64[0] = v292 | (v292 << 32);
                    LANES128(v627.val[2]).n128_u64[1] = v291 | (v291 << 32);
                    LANES128(v627.val[3]).n128_u64[0] = v288 | (v288 << 32);
                    LANES128(v278).n128_u64[0] = LANES128(v14).n128_u32[0];
                    LANES128(v278).n128_u64[1] = LANES128(v14).n128_u32[1];
                    v293 = v278;
                    LANES128(v627.val[3]).n128_u64[1] = v286 | (v286 << 32);
                    vst4q_f64(v276 + 16, v627);
                    LANES128(v627.val[0]).n128_u64[1] = v289 | (v289 << 32);
                    LANES128(v627.val[0]).n128_u64[0] = v290 | (v290 << 32);
                    v627.val[1] = v627.val[0];
                    v627.val[2] = v627.val[0];
                    v627.val[3] = v627.val[0];
                    vst4q_f64(v276 + 24, v627);
                    v294 = LANES128(v606.val[0]).n128_u32[3];
                    v295 = LANES128(v606.val[0]).n128_u32[2];
                    LANES128(v606.val[0]).n128_u64[1] =
                        LANES128(v14).n128_u32[1];
                    LANES128(v627.val[0]).n128_u32[0] =
                        LANES128(v606.val[0]).n128_u32[0];
                    *(unsigned __int64*)((char*)LANES128(v627.val[0]).n128_u64 +
                                         4) = LANES128(v606.val[0]).n128_u64[0];
                    LANES128(v627.val[0]).n128_u32[3] =
                        LANES128(v606.val[0]).n128_u32[1];
                    v627.val[1] = v627.val[0];
                    v627.val[2] = v627.val[0];
                    v627.val[3] = v627.val[0];
                    v296 = LANES128(v14).n128_u32[1];
                    vst4q_f64(v276 + 32, v627);
                    LANES128(v627.val[0]).n128_u64[1] = v294 | (v294 << 32);
                    LANES128(v627.val[0]).n128_u64[0] = v295 | (v295 << 32);
                    v627.val[1] = v627.val[0];
                    v627.val[2] = v627.val[0];
                    v627.val[3] = v627.val[0];
                    vst4q_f64(v276 + 40, v627);
                    LANES128(v278).n128_u64[0] = LANES128(v14).n128_u32[0];
                    LANES128(v278).n128_u64[1] = LANES128(v14).n128_u32[1];
                    v627.val[0] = v278;
                    LANES128(v278).n128_u64[1] = LANES128(v14).n128_u32[1];
                    LANES128(v14).n128_u32[1] = 0;
                    v297 = LANES128(v627.val[0]).n128_u64[1];
                    v298 = LANES128(v627.val[0]).n128_u64[0];
                    LANES128(v627.val[0]).n128_u32[0] =
                        LANES128(v14).n128_u32[0];
                    LANES128(v627.val[0]).n128_u32[1] =
                        LANES128(v14).n128_u32[0];
                    LANES128(v627.val[0]).n128_u64[1] =
                        LANES128(v278).n128_u64[1] |
                        (LANES128(v278).n128_u64[1] << 32);
                    LANES128(v627.val[1]).n128_u64[0] = v298 | (v298 << 32);
                    LANES128(v627.val[1]).n128_u64[1] = v297 | (v297 << 32);
                    LANES128(v627.val[2]).n128_u64[0] =
                        LANES128(v293).n128_u64[0] |
                        (LANES128(v293).n128_u64[0] << 32);
                    LANES128(v627.val[2]).n128_u64[1] =
                        LANES128(v293).n128_u64[1] |
                        (LANES128(v293).n128_u64[1] << 32);
                    LANES128(v627.val[3]).n128_u64[0] =
                        LANES128(v627.val[0]).n128_u64[0];
                    LANES128(v627.val[3]).n128_u64[1] = v296 | (v296 << 32);
                    vst4q_f64(v276 + 48, v627);
                    LANES128(v627.val[0]).n128_u32[2] =
                        LANES128(v14).n128_u32[3];
                    LANES128(v627.val[0]).n128_u32[3] =
                        LANES128(v14).n128_u32[3];
                    LANES128(v627.val[0]).n128_u32[0] =
                        LANES128(v14).n128_u32[2];
                    LANES128(v627.val[0]).n128_u32[1] =
                        LANES128(v14).n128_u32[2];
                    v627.val[1] = v627.val[0];
                    v627.val[2] = v627.val[0];
                    v627.val[3] = v627.val[0];
                    v299 = v276 + 56;
                    v276 += 64;
                    vst4q_f64(v299, v627);
                  } while (v275 != 0);
                  v21 = v585;
                  v113 = v586;
                  v64 = v583;
                  v143 = v593;
                  v155 = v586 + 735;
                  if (v171 == v174) {
                    goto LABEL_101;
                  }
                  if ((v171 & 0xC) == 0) {
                    v155 = v586 + 735;
                    v162 += 2 * v174;
                    v163 += v174;
                    v312 = ((int)v586 + (int)v160 - (int)v163) & 7LL;
                    if (v312 == 0) {
                      goto LABEL_218;
                    }
                  LABEL_193:
                    v313 = v163;
                    do {
                      v314 = *v313++;
                      --v312;
                      v315 = vdupq_n_s64(
                          v170 | (v314 << 8) |
                          ((unsigned __int64)(v170 | (v314 << 8)) << 32));
                      *v162 = v315;
                      v162[1] = v315;
                      v162 += 2;
                    } while (v312 != 0);
                    if ((unsigned __int64)(v155 + v160 - (_QWORD)v163) < 7) {
                      goto LABEL_101;
                    }
                    do {
                    LABEL_219:
                      v344 = v170 | (*v313 << 8);
                      v345 = vdupq_n_s64(v344 | (unsigned __int64)(v344 << 32));
                      *v162 = v345;
                      v162[1] = v345;
                      v346 = v170 | (v313[1] << 8);
                      v347 = vdupq_n_s64(v346 | (unsigned __int64)(v346 << 32));
                      v162[2] = v347;
                      v162[3] = v347;
                      v348 = v170 | (v313[2] << 8);
                      v349 = vdupq_n_s64(v348 | (unsigned __int64)(v348 << 32));
                      v162[4] = v349;
                      v162[5] = v349;
                      v350 = v170 | (v313[3] << 8);
                      v351 = vdupq_n_s64(v350 | (unsigned __int64)(v350 << 32));
                      v162[6] = v351;
                      v162[7] = v351;
                      v352 = v170 | (v313[4] << 8);
                      v353 = vdupq_n_s64(v352 | (unsigned __int64)(v352 << 32));
                      v162[8] = v353;
                      v162[9] = v353;
                      v354 = v170 | (v313[5] << 8);
                      v355 = vdupq_n_s64(v354 | (unsigned __int64)(v354 << 32));
                      v162[10] = v355;
                      v162[11] = v355;
                      v356 = v170 | (v313[6] << 8);
                      v357 = vdupq_n_s64(v356 | (unsigned __int64)(v356 << 32));
                      v162[12] = v357;
                      v162[13] = v357;
                      LODWORD(v356) = v313[7];
                      v313 += 8;
                      v358 = vdupq_n_s64(
                          v170 | ((_DWORD)v356 << 8) |
                          ((unsigned __int64)(v170 | ((_DWORD)v356 << 8))
                           << 32));
                      v162[14] = v358;
                      v162[15] = v358;
                      v162 += 16;
                    } while (v313 != v164);
                    goto LABEL_101;
                  }
                }
                else {
                  v174 = 0;
                }
                v300 = 32 * v174 + 4 * v159;
                v162 += 2 * (v171 & 0xFFFFFFFFFFFFFFFCLL);
                v163 += v171 & 0xFFFFFFFFFFFFFFFCLL;
                v301 = v174 - (v171 & 0xFFFFFFFFFFFFFFFCLL);
                v302 = (double*)&v598[v300];
                v303 = (unsigned __int32*)(v114 + v174 + v157);
                do {
                  v304 = *v303++;
                  LANES128(v14).n128_u32[0] = v304;
                  v301 += 4LL;
                  v305 =
                      vmovl_u8(COERCE_AS(uint8x8_t, LANES128(v14).n128_u64[0]));
                  v306 = LANES128(v305).n128_u8[6];
                  v307 = LANES128(v305).n128_u8[4];
                  v308 = LANES128(v305).n128_u8[2];
                  LANES128(v305).n128_u64[0] = LANES128(v305).n128_u8[0];
                  LANES128(v305).n128_u8[4] = v308;
                  LANES128(v305).n128_u64[1] = v307;
                  LANES128(v305).n128_u8[12] = v306;
                  v606.val[0] = vorrq_s8(vshlq_n_s32(v305, 8u), v173);
                  LANES128(v309).n128_u64[0] =
                      LANES128(v606.val[0]).n128_u32[0];
                  LANES128(v309).n128_u64[1] =
                      LANES128(v606.val[0]).n128_u32[1];
                  v14 = v309;
                  LANES128(v309).n128_u64[0] =
                      LANES128(v606.val[0]).n128_u32[0];
                  LANES128(v309).n128_u64[1] =
                      LANES128(v606.val[0]).n128_u32[1];
                  v310 = v309;
                  LANES128(v309).n128_u64[0] =
                      LANES128(v606.val[0]).n128_u32[0];
                  LANES128(v309).n128_u64[1] =
                      LANES128(v606.val[0]).n128_u32[1];
                  v311 = v309;
                  LANES128(v309).n128_u64[0] =
                      LANES128(v606.val[0]).n128_u32[0];
                  LANES128(v309).n128_u64[1] =
                      LANES128(v606.val[0]).n128_u32[1];
                  v631.val[0] = v309;
                  LANES128(v309).n128_u64[0] =
                      LANES128(v606.val[0]).n128_u32[2];
                  LANES128(v606.val[0]).n128_u64[1] =
                      LANES128(v606.val[0]).n128_u32[3];
                  LANES128(v628.val[3]).n128_u64[0] =
                      LANES128(v309).n128_u64[0] |
                      (LANES128(v309).n128_u64[0] << 32);
                  LANES128(v628.val[3]).n128_u64[1] =
                      LANES128(v606.val[0]).n128_u64[1] |
                      (LANES128(v606.val[0]).n128_u64[1] << 32);
                  v628.val[2] = v628.val[3];
                  LANES128(v631.val[3]).n128_u64[0] =
                      LANES128(v631.val[0]).n128_u64[0] |
                      (LANES128(v631.val[0]).n128_u64[0] << 32);
                  LANES128(v631.val[3]).n128_u64[1] =
                      LANES128(v631.val[0]).n128_u64[1] |
                      (LANES128(v631.val[0]).n128_u64[1] << 32);
                  LANES128(v631.val[2]).n128_u64[0] =
                      LANES128(v311).n128_u64[0] |
                      (LANES128(v311).n128_u64[0] << 32);
                  LANES128(v631.val[2]).n128_u64[1] =
                      LANES128(v311).n128_u64[1] |
                      (LANES128(v311).n128_u64[1] << 32);
                  LANES128(v631.val[1]).n128_u64[0] =
                      LANES128(v310).n128_u64[0] |
                      (LANES128(v310).n128_u64[0] << 32);
                  v628.val[1] = v628.val[3];
                  LANES128(v631.val[1]).n128_u64[1] =
                      LANES128(v310).n128_u64[1] |
                      (LANES128(v310).n128_u64[1] << 32);
                  LANES128(v631.val[0]).n128_u64[0] =
                      LANES128(v14).n128_u64[0] |
                      (LANES128(v14).n128_u64[0] << 32);
                  LANES128(v631.val[0]).n128_u64[1] =
                      LANES128(v14).n128_u64[1] |
                      (LANES128(v14).n128_u64[1] << 32);
                  v628.val[0] = v628.val[3];
                  vst4q_f64(v302, v631);
                  vst4q_f64(v302 + 8, v628);
                  v302 += 16;
                } while (v301 != 0);
                v155 = v586 + 735;
                if (v171 == (v171 & 0xFFFFFFFFFFFFFFFCLL)) {
                  goto LABEL_101;
                }
                goto LABEL_192;
              }
              if ((_DWORD)v157 == (_DWORD)v160) {
                goto LABEL_101;
              }
              v206 = v156 + (v158 << 16);
              v207 = v160 - v157;
              if ((unsigned __int64)(v160 - v157) <= 7 ||
                  (v162 < (int64x2_t*)v164
                       ? (v208 =
                              v163 >=
                              &v143[16 * v160 + 4 * (v599 + v159) - 16 * v157])
                       : (v208 = true),
                   !v208)) {
              LABEL_168:
                v223 = v163;
                for (k = ((int)v113 + (int)v160 - (int)v163) & 7LL; k != 0;
                     ++v162) {
                LABEL_169:
                  v225 = *v223++;
                  --k;
                  v226 = v206 | (v225 << 8) |
                         ((unsigned __int64)(v206 | (v225 << 8)) << 32);
                  LANES128(*(v162)).n128_u64[0] = v226;
                  LANES128(*(v162)).n128_u64[1] = v226;
                }
              LABEL_170:
                if ((unsigned __int64)(v155 + v160 - (_QWORD)v163) >= 7) {
                  do {
                    v227 = v206 | (*v223 << 8);
                    v228 = v227 | (v227 << 32);
                    LANES128(*(v162)).n128_u64[0] = v228;
                    LANES128(*(v162)).n128_u64[1] = v228;
                    v229 = v206 | (v223[1] << 8);
                    v230 = v229 | (v229 << 32);
                    LANES128(v162[1]).n128_u64[0] = v230;
                    LANES128(v162[1]).n128_u64[1] = v230;
                    v231 = v206 | (v223[2] << 8);
                    v232 = v231 | (v231 << 32);
                    LANES128(v162[2]).n128_u64[0] = v232;
                    LANES128(v162[2]).n128_u64[1] = v232;
                    v233 = v206 | (v223[3] << 8);
                    v234 = v233 | (v233 << 32);
                    LANES128(v162[3]).n128_u64[0] = v234;
                    LANES128(v162[3]).n128_u64[1] = v234;
                    v235 = v206 | (v223[4] << 8);
                    v236 = v235 | (v235 << 32);
                    LANES128(v162[4]).n128_u64[0] = v236;
                    LANES128(v162[4]).n128_u64[1] = v236;
                    v237 = v206 | (v223[5] << 8);
                    v238 = v237 | (v237 << 32);
                    LANES128(v162[5]).n128_u64[0] = v238;
                    LANES128(v162[5]).n128_u64[1] = v238;
                    v239 = v206 | (v223[6] << 8);
                    v240 = v239 | (v239 << 32);
                    LANES128(v162[6]).n128_u64[0] = v240;
                    LANES128(v162[6]).n128_u64[1] = v240;
                    LODWORD(v240) = v223[7];
                    v223 += 8;
                    v241 =
                        v206 | ((_DWORD)v240 << 8) |
                        ((unsigned __int64)(v206 | ((_DWORD)v240 << 8)) << 32);
                    LANES128(v162[7]).n128_u64[0] = v241;
                    LANES128(v162[7]).n128_u64[1] = v241;
                    v162 += 8;
                  } while (v223 != v164);
                }
                goto LABEL_101;
              }
              v209 = vdupq_n_s32(v206);
              if (v207 >= 0x10) {
                v210 = v207 & 0xFFFFFFFFFFFFFFF0LL;
                v328 = (int8x16_t*)(v114 + v157);
                v329 = v207 & 0xFFFFFFFFFFFFFFF0LL;
                v330 = (double*)&v598[4 * v159];
                do {
                  v331 = *v328++;
                  v329 -= 16LL;
                  v332 = vorrq_s8(
                      vshlq_n_s32(
                          vqtbl1q_s8(v331, COERCE_AS(int8x16_t,
                                                     CudaDriverData_11152f0)),
                          8u),
                      v209);
                  v333 = vorrq_s8(
                      vshlq_n_s32(
                          vqtbl1q_s8(v331, COERCE_AS(int8x16_t,
                                                     CudaDriverData_1115a40)),
                          8u),
                      v209);
                  v334 = vorrq_s8(
                      vshlq_n_s32(
                          vqtbl1q_s8(v331, COERCE_AS(int8x16_t,
                                                     CudaDriverData_1115e10)),
                          8u),
                      v209);
                  v610.val[1] = vorrq_s8(
                      vshlq_n_s32(
                          vqtbl1q_s8(v331, COERCE_AS(int8x16_t,
                                                     CudaDriverData_11161f0)),
                          8u),
                      v209);
                  LANES128(v335).n128_u64[0] = LANES128(v333).n128_u32[0];
                  LANES128(v335).n128_u64[1] = LANES128(v333).n128_u32[1];
                  v336 = v335;
                  LANES128(v335).n128_u64[0] = LANES128(v333).n128_u32[0];
                  LANES128(v335).n128_u64[1] = LANES128(v333).n128_u32[1];
                  v614.val[0] = v335;
                  LANES128(v335).n128_u64[0] = LANES128(v333).n128_u32[2];
                  LANES128(v335).n128_u64[1] = LANES128(v333).n128_u32[3];
                  v337 = v335;
                  LANES128(v335).n128_u64[0] = LANES128(v332).n128_u32[2];
                  LANES128(v335).n128_u64[1] = LANES128(v332).n128_u32[3];
                  v338 = v335;
                  LANES128(v335).n128_u64[0] = LANES128(v334).n128_u32[0];
                  LANES128(v335).n128_u64[1] = LANES128(v334).n128_u32[1];
                  v339 = v335;
                  LANES128(v335).n128_u64[0] = LANES128(v334).n128_u32[0];
                  LANES128(v335).n128_u64[1] = LANES128(v334).n128_u32[1];
                  v620.val[0] = v335;
                  LANES128(v335).n128_u64[0] = LANES128(v334).n128_u32[2];
                  LANES128(v335).n128_u64[1] = LANES128(v334).n128_u32[3];
                  v615.val[0] = v335;
                  LANES128(v335).n128_u64[0] = LANES128(v332).n128_u32[0];
                  LANES128(v335).n128_u64[1] = LANES128(v332).n128_u32[1];
                  v610.val[0] = v335;
                  LANES128(v335).n128_u64[0] = LANES128(v332).n128_u32[0];
                  LANES128(v335).n128_u64[1] = LANES128(v332).n128_u32[1];
                  v340 = v335;
                  LANES128(v335).n128_u64[0] =
                      LANES128(v610.val[1]).n128_u32[0];
                  LANES128(v335).n128_u64[1] =
                      LANES128(v610.val[1]).n128_u32[1];
                  v614.val[1] = v335;
                  LANES128(v335).n128_u64[0] =
                      LANES128(v610.val[1]).n128_u32[0];
                  LANES128(v335).n128_u64[1] =
                      LANES128(v610.val[1]).n128_u32[1];
                  v341 = v335;
                  LANES128(v335).n128_u64[0] =
                      LANES128(v610.val[1]).n128_u32[2];
                  LANES128(v335).n128_u64[1] =
                      LANES128(v610.val[1]).n128_u32[3];
                  LANES128(v14).n128_u64[0] =
                      LANES128(v338).n128_u64[0] |
                      (LANES128(v338).n128_u64[0] << 32);
                  LANES128(v610.val[0]).n128_u64[0] |=
                      LANES128(v610.val[0]).n128_u64[0] << 32;
                  LANES128(v14).n128_u64[1] =
                      LANES128(v338).n128_u64[1] |
                      (LANES128(v338).n128_u64[1] << 32);
                  v606.val[0] = v14;
                  LANES128(v610.val[0]).n128_u64[1] |=
                      LANES128(v610.val[0]).n128_u64[1] << 32;
                  LANES128(v610.val[1]).n128_u64[0] =
                      LANES128(v340).n128_u64[0] |
                      (LANES128(v340).n128_u64[0] << 32);
                  LANES128(v610.val[1]).n128_u64[1] =
                      LANES128(v340).n128_u64[1] |
                      (LANES128(v340).n128_u64[1] << 32);
                  LANES128(v615.val[0]).n128_u64[0] |=
                      LANES128(v615.val[0]).n128_u64[0] << 32;
                  LANES128(v615.val[0]).n128_u64[1] |=
                      LANES128(v615.val[0]).n128_u64[1] << 32;
                  v615.val[1] = v615.val[0];
                  LANES128(v620.val[0]).n128_u64[0] |=
                      LANES128(v620.val[0]).n128_u64[0] << 32;
                  LANES128(v620.val[0]).n128_u64[1] |=
                      LANES128(v620.val[0]).n128_u64[1] << 32;
                  LANES128(v620.val[1]).n128_u64[0] =
                      LANES128(v339).n128_u64[0] |
                      (LANES128(v339).n128_u64[0] << 32);
                  LANES128(v620.val[1]).n128_u64[1] =
                      LANES128(v339).n128_u64[1] |
                      (LANES128(v339).n128_u64[1] << 32);
                  LANES128(v622.val[0]).n128_u64[0] =
                      LANES128(v335).n128_u64[0] |
                      (LANES128(v335).n128_u64[0] << 32);
                  LANES128(v622.val[0]).n128_u64[1] =
                      LANES128(v335).n128_u64[1] |
                      (LANES128(v335).n128_u64[1] << 32);
                  v622.val[1] = v622.val[0];
                  LANES128(v624.val[0]).n128_u64[0] =
                      LANES128(v341).n128_u64[0] |
                      (LANES128(v341).n128_u64[0] << 32);
                  LANES128(v624.val[0]).n128_u64[1] =
                      LANES128(v341).n128_u64[1] |
                      (LANES128(v341).n128_u64[1] << 32);
                  LANES128(v624.val[1]).n128_u64[0] =
                      LANES128(v614.val[1]).n128_u64[0] |
                      (LANES128(v614.val[1]).n128_u64[0] << 32);
                  LANES128(v614.val[0]).n128_u64[0] |=
                      LANES128(v614.val[0]).n128_u64[0] << 32;
                  LANES128(v624.val[1]).n128_u64[1] =
                      LANES128(v614.val[1]).n128_u64[1] |
                      (LANES128(v614.val[1]).n128_u64[1] << 32);
                  LANES128(v614.val[0]).n128_u64[1] |=
                      LANES128(v614.val[0]).n128_u64[1] << 32;
                  LANES128(v614.val[1]).n128_u64[0] =
                      LANES128(v336).n128_u64[0] |
                      (LANES128(v336).n128_u64[0] << 32);
                  LANES128(v626.val[0]).n128_u64[0] =
                      LANES128(v337).n128_u64[0] |
                      (LANES128(v337).n128_u64[0] << 32);
                  LANES128(v614.val[1]).n128_u64[1] =
                      LANES128(v336).n128_u64[1] |
                      (LANES128(v336).n128_u64[1] << 32);
                  LANES128(v626.val[0]).n128_u64[1] =
                      LANES128(v337).n128_u64[1] |
                      (LANES128(v337).n128_u64[1] << 32);
                  v626.val[1] = v626.val[0];
                  vst2q_f64(v330, v614);
                  v342 = v330 + 4;
                  vst2q_f64(v330 + 8, v624);
                  vst2q_f64(v330 + 12, v622);
                  vst2q_f64(v330 + 16, v620);
                  vst2q_f64(v330 + 20, v615);
                  vst2q_f64(v330 + 24, v610);
                  v343 = v330 + 28;
                  v330 += 32;
                  vst2q_f64(v342, v626);
                  v604.val[0] = v14;
                  v604.val[1] = v14;
                  vst2q_f64(v343, v604);
                } while (v329 != 0);
                v155 = v586 + 735;
                if (v207 == v210) {
                  goto LABEL_101;
                }
                if ((v207 & 8) == 0) {
                  v155 = v586 + 735;
                  v162 += v210;
                  v163 += v210;
                  v223 = v163;
                  k = ((int)v113 + (int)v160 - (int)v163) & 7LL;
                  if (k != 0) {
                    goto LABEL_169;
                  }
                  goto LABEL_170;
                }
              }
              else {
                v210 = 0;
              }
              v162 += v207 & 0xFFFFFFFFFFFFFFF8LL;
              v163 += v207 & 0xFFFFFFFFFFFFFFF8LL;
              v211 = v210 - (v207 & 0xFFFFFFFFFFFFFFF8LL);
              v212 = (double*)&v598[16 * v210 + 4 * v159];
              v213 = (unsigned __int64*)(v114 + v210 + v157);
              do {
                v214 = *v213++;
                LANES128(v14).n128_u64[0] = v214;
                v211 += 8LL;
                LANES128(v14).n128_u64[1] = v214;
                v607.val[1] = vorrq_s8(
                    vshlq_n_s32(
                        vqtbl1q_s8(
                            v14, COERCE_AS(int8x16_t, CudaDriverData_11152f0)),
                        8u),
                    v209);
                v215 = vorrq_s8(
                    vshlq_n_s32(
                        vqtbl1q_s8(
                            v14, COERCE_AS(int8x16_t, CudaDriverData_1115e10)),
                        8u),
                    v209);
                v611.val[0] = vorrq_s8(
                    vshlq_n_s32(
                        vqtbl1q_s8(
                            v14, COERCE_AS(int8x16_t, CudaDriverData_11161f0)),
                        8u),
                    v209);
                v216 = vorrq_s8(
                    vshlq_n_s32(
                        vqtbl1q_s8(
                            v14, COERCE_AS(int8x16_t, CudaDriverData_1115a40)),
                        8u),
                    v209);
                LANES128(v217).n128_u64[0] = LANES128(v215).n128_u32[0];
                LANES128(v217).n128_u64[1] = LANES128(v215).n128_u32[1];
                v218 = v217;
                LANES128(v217).n128_u64[0] = LANES128(v215).n128_u32[2];
                LANES128(v217).n128_u64[1] = LANES128(v215).n128_u32[3];
                v219 = v217;
                LANES128(v217).n128_u64[0] = LANES128(v607.val[1]).n128_u32[2];
                LANES128(v217).n128_u64[1] = LANES128(v607.val[1]).n128_u32[3];
                v607.val[0] = v217;
                LANES128(v217).n128_u64[0] = LANES128(v607.val[1]).n128_u32[0];
                LANES128(v217).n128_u64[1] = LANES128(v607.val[1]).n128_u32[1];
                v611.val[1] = v217;
                LANES128(v217).n128_u64[0] = LANES128(v611.val[0]).n128_u32[2];
                LANES128(v217).n128_u64[1] = LANES128(v611.val[0]).n128_u32[3];
                v617.val[0] = v217;
                LANES128(v217).n128_u64[0] = LANES128(v611.val[0]).n128_u32[0];
                LANES128(v217).n128_u64[1] = LANES128(v611.val[0]).n128_u32[1];
                v220 = v217;
                LANES128(v217).n128_u64[0] = LANES128(v216).n128_u32[0];
                LANES128(v217).n128_u64[1] = LANES128(v216).n128_u32[1];
                LANES128(v14).n128_u32[1] = 0;
                LANES128(v607.val[1]).n128_u64[0] =
                    LANES128(v607.val[0]).n128_u64[0] |
                    (LANES128(v607.val[0]).n128_u64[0] << 32);
                LANES128(v611.val[1]).n128_u64[0] |=
                    LANES128(v611.val[1]).n128_u64[0] << 32;
                LANES128(v607.val[1]).n128_u64[1] =
                    LANES128(v607.val[0]).n128_u64[1] |
                    (LANES128(v607.val[0]).n128_u64[1] << 32);
                LANES128(v607.val[0]).n128_u64[0] =
                    LANES128(v617.val[0]).n128_u64[0] |
                    (LANES128(v617.val[0]).n128_u64[0] << 32);
                LANES128(v611.val[1]).n128_u64[1] |=
                    LANES128(v611.val[1]).n128_u64[1] << 32;
                LANES128(v607.val[0]).n128_u64[1] =
                    LANES128(v617.val[0]).n128_u64[1] |
                    (LANES128(v617.val[0]).n128_u64[1] << 32);
                LANES128(v617.val[1]).n128_u64[0] =
                    LANES128(v219).n128_u64[0] |
                    (LANES128(v219).n128_u64[0] << 32);
                LANES128(v611.val[0]).n128_u64[0] =
                    LANES128(v220).n128_u64[0] |
                    (LANES128(v220).n128_u64[0] << 32);
                LANES128(v617.val[1]).n128_u64[1] =
                    LANES128(v219).n128_u64[1] |
                    (LANES128(v219).n128_u64[1] << 32);
                LANES128(v617.val[0]).n128_u32[0] = LANES128(v216).n128_u32[2];
                LANES128(v617.val[0]).n128_u32[1] = LANES128(v216).n128_u32[2];
                LANES128(v611.val[0]).n128_u64[1] =
                    LANES128(v220).n128_u64[1] |
                    (LANES128(v220).n128_u64[1] << 32);
                LANES128(v606.val[1]).n128_u64[0] =
                    LANES128(v218).n128_u64[0] |
                    (LANES128(v218).n128_u64[0] << 32);
                LANES128(v617.val[0]).n128_u32[2] = LANES128(v216).n128_u32[3];
                LANES128(v617.val[0]).n128_u32[3] = LANES128(v216).n128_u32[3];
                LANES128(v606.val[1]).n128_u64[1] =
                    LANES128(v218).n128_u64[1] |
                    (LANES128(v218).n128_u64[1] << 32);
                LANES128(v606.val[0]).n128_u64[0] =
                    LANES128(v217).n128_u64[0] |
                    (LANES128(v217).n128_u64[0] << 32);
                LANES128(v606.val[0]).n128_u64[1] =
                    LANES128(v217).n128_u64[1] |
                    (LANES128(v217).n128_u64[1] << 32);
                vst2q_f64(v212, v606);
                v221 = v212 + 4;
                vst2q_f64(v212 + 8, v611);
                v222 = v212 + 12;
                v212 += 16;
                vst2q_f64(v222, v607);
                vst2q_f64(v221, v617);
              } while (v211 != 0);
              v155 = v586 + 735;
              if (v207 == (v207 & 0xFFFFFFFFFFFFFFF8LL)) {
                goto LABEL_101;
              }
              goto LABEL_168;
            }
          }
          else {
            v121 = (int64x2_t*)&v21[v117];
            v122 = (unsigned __int8*)(v114 + v116);
            v123 = (unsigned __int8*)(v114 + v119);
            v124 = (unsigned int)(1 << v120);
            if ((int)v124 > 3) {
              if ((_DWORD)v124 == 4) {
                if ((_DWORD)v116 != (_DWORD)v119) {
                  v389 = v119 - v116;
                  v390 = (v118 << 16) + 0x1000000;
                  if ((unsigned __int64)(v119 - v116) < 8) {
                    goto LABEL_303;
                  }
                  v391 = v593;
                  if (v121 < (int64x2_t*)v123 &&
                      v122 < &v593[16 * v119 + 4 * v117 - 16 * v116]) {
                    goto LABEL_303;
                  }
                  v393 = vdupq_n_s32(v390);
                  if (v389 >= 0x10) {
                    v394 = v389 & 0xFFFFFFFFFFFFFFF0LL;
                    v480 = (int8x16_t*)(v114 + v116);
                    v481 = (double*)&v21[v117];
                    v482 = v389 & 0xFFFFFFFFFFFFFFF0LL;
                    do {
                      v483 = *v480++;
                      v482 -= 16LL;
                      v484 = vorrq_s8(
                          v393,
                          vqtbl1q_s8(v483, COERCE_AS(int8x16_t,
                                                     CudaDriverData_11152f0)));
                      v485 = vorrq_s8(
                          v393,
                          vqtbl1q_s8(v483, COERCE_AS(int8x16_t,
                                                     CudaDriverData_1115e10)));
                      v486 = vorrq_s8(
                          v393,
                          vqtbl1q_s8(v483, COERCE_AS(int8x16_t,
                                                     CudaDriverData_1115a40)));
                      v613.val[1] = vorrq_s8(
                          v393,
                          vqtbl1q_s8(v483, COERCE_AS(int8x16_t,
                                                     CudaDriverData_11161f0)));
                      LANES128(v487).n128_u64[0] = LANES128(v485).n128_u32[0];
                      LANES128(v487).n128_u64[1] = LANES128(v485).n128_u32[1];
                      v621.val[0] = v487;
                      LANES128(v487).n128_u64[0] = LANES128(v485).n128_u32[0];
                      LANES128(v487).n128_u64[1] = LANES128(v485).n128_u32[1];
                      v619.val[0] = v487;
                      LANES128(v487).n128_u64[0] = LANES128(v485).n128_u32[2];
                      LANES128(v487).n128_u64[1] = LANES128(v485).n128_u32[3];
                      v616.val[0] = v487;
                      LANES128(v487).n128_u64[0] = LANES128(v484).n128_u32[0];
                      LANES128(v487).n128_u64[1] = LANES128(v484).n128_u32[1];
                      v619.val[1] = v487;
                      LANES128(v487).n128_u64[0] = LANES128(v484).n128_u32[0];
                      LANES128(v487).n128_u64[1] = LANES128(v484).n128_u32[1];
                      v613.val[0] = v487;
                      LANES128(v487).n128_u64[0] = LANES128(v484).n128_u32[2];
                      LANES128(v487).n128_u64[1] = LANES128(v484).n128_u32[3];
                      v488 = v487;
                      LANES128(v487).n128_u64[0] = LANES128(v486).n128_u32[0];
                      LANES128(v487).n128_u64[1] = LANES128(v486).n128_u32[1];
                      v489 = v487;
                      LANES128(v487).n128_u64[0] = LANES128(v486).n128_u32[0];
                      LANES128(v487).n128_u64[1] = LANES128(v486).n128_u32[1];
                      v490 = v487;
                      LANES128(v487).n128_u64[0] = LANES128(v486).n128_u32[2];
                      LANES128(v487).n128_u64[1] = LANES128(v486).n128_u32[3];
                      v609.val[0] = v487;
                      LANES128(v487).n128_u64[0] =
                          LANES128(v613.val[1]).n128_u32[0];
                      LANES128(v487).n128_u64[1] =
                          LANES128(v613.val[1]).n128_u32[1];
                      v491 = v487;
                      LANES128(v487).n128_u64[0] =
                          LANES128(v613.val[1]).n128_u32[0];
                      LANES128(v487).n128_u64[1] =
                          LANES128(v613.val[1]).n128_u32[1];
                      v621.val[1] = v487;
                      LANES128(v487).n128_u64[1] =
                          LANES128(v613.val[1]).n128_u32[3];
                      v492 = LANES128(v613.val[1]).n128_u32[2];
                      LANES128(v14).n128_u64[0] =
                          LANES128(v488).n128_u64[0] |
                          (LANES128(v488).n128_u64[0] << 32);
                      LANES128(v613.val[0]).n128_u64[0] |=
                          LANES128(v613.val[0]).n128_u64[0] << 32;
                      LANES128(v14).n128_u64[1] =
                          LANES128(v488).n128_u64[1] |
                          (LANES128(v488).n128_u64[1] << 32);
                      v606.val[0] = v14;
                      LANES128(v613.val[0]).n128_u64[1] |=
                          LANES128(v613.val[0]).n128_u64[1] << 32;
                      LANES128(v613.val[1]).n128_u64[0] =
                          LANES128(v619.val[1]).n128_u64[0] |
                          (LANES128(v619.val[1]).n128_u64[0] << 32);
                      LANES128(v613.val[1]).n128_u64[1] =
                          LANES128(v619.val[1]).n128_u64[1] |
                          (LANES128(v619.val[1]).n128_u64[1] << 32);
                      LANES128(v616.val[0]).n128_u64[0] |=
                          LANES128(v616.val[0]).n128_u64[0] << 32;
                      LANES128(v619.val[0]).n128_u64[0] |=
                          LANES128(v619.val[0]).n128_u64[0] << 32;
                      LANES128(v616.val[0]).n128_u64[1] |=
                          LANES128(v616.val[0]).n128_u64[1] << 32;
                      v616.val[1] = v616.val[0];
                      LANES128(v619.val[0]).n128_u64[1] |=
                          LANES128(v619.val[0]).n128_u64[1] << 32;
                      LANES128(v623.val[0]).n128_u64[0] = v492 | (v492 << 32);
                      LANES128(v625.val[0]).n128_u64[0] =
                          LANES128(v621.val[1]).n128_u64[0] |
                          (LANES128(v621.val[1]).n128_u64[0] << 32);
                      LANES128(v623.val[0]).n128_u64[1] =
                          LANES128(v487).n128_u64[1] |
                          (LANES128(v487).n128_u64[1] << 32);
                      v623.val[1] = v623.val[0];
                      LANES128(v625.val[0]).n128_u64[1] =
                          LANES128(v621.val[1]).n128_u64[1] |
                          (LANES128(v621.val[1]).n128_u64[1] << 32);
                      LANES128(v625.val[1]).n128_u64[0] =
                          LANES128(v491).n128_u64[0] |
                          (LANES128(v491).n128_u64[0] << 32);
                      LANES128(v619.val[1]).n128_u64[0] =
                          LANES128(v621.val[0]).n128_u64[0] |
                          (LANES128(v621.val[0]).n128_u64[0] << 32);
                      LANES128(v619.val[1]).n128_u64[1] =
                          LANES128(v621.val[0]).n128_u64[1] |
                          (LANES128(v621.val[0]).n128_u64[1] << 32);
                      LANES128(v621.val[0]).n128_u64[0] =
                          LANES128(v490).n128_u64[0] |
                          (LANES128(v490).n128_u64[0] << 32);
                      LANES128(v609.val[0]).n128_u64[0] |=
                          LANES128(v609.val[0]).n128_u64[0] << 32;
                      LANES128(v621.val[0]).n128_u64[1] =
                          LANES128(v490).n128_u64[1] |
                          (LANES128(v490).n128_u64[1] << 32);
                      LANES128(v621.val[1]).n128_u64[0] =
                          LANES128(v489).n128_u64[0] |
                          (LANES128(v489).n128_u64[0] << 32);
                      LANES128(v625.val[1]).n128_u64[1] =
                          LANES128(v491).n128_u64[1] |
                          (LANES128(v491).n128_u64[1] << 32);
                      LANES128(v609.val[0]).n128_u64[1] |=
                          LANES128(v609.val[0]).n128_u64[1] << 32;
                      LANES128(v621.val[1]).n128_u64[1] =
                          LANES128(v489).n128_u64[1] |
                          (LANES128(v489).n128_u64[1] << 32);
                      v609.val[1] = v609.val[0];
                      vst2q_f64(v481, v621);
                      v493 = v481 + 4;
                      vst2q_f64(v481 + 8, v625);
                      vst2q_f64(v481 + 12, v623);
                      vst2q_f64(v481 + 16, v619);
                      vst2q_f64(v481 + 20, v616);
                      vst2q_f64(v481 + 24, v613);
                      v494 = v481 + 28;
                      v481 += 32;
                      vst2q_f64(v493, v609);
                      v605.val[0] = v14;
                      v605.val[1] = v14;
                      vst2q_f64(v494, v605);
                    } while (v482 != 0);
                    v113 = v586;
                    v64 = v583;
                    if (v389 == v394) {
                      goto LABEL_58;
                    }
                    v391 = v593;
                    if ((v389 & 8) == 0) {
                      v64 = v583;
                      v121 += v394;
                      v122 += v394;
                    LABEL_303:
                      v495 = v122;
                      for (m = ((int)v113 + (int)v119 - (int)v122) & 7LL;
                           m != 0; ++v121) {
                        v497 = *v495++;
                        --m;
                        v498 = v390 | v497 |
                               ((unsigned __int64)(v390 | v497) << 32);
                        LANES128(*(v121)).n128_u64[0] = v498;
                        LANES128(*(v121)).n128_u64[1] = v498;
                      }
                      if ((unsigned __int64)(v597 + v119 - (_QWORD)v122) >= 7) {
                        do {
                          v499 = v390 | *v495 |
                                 ((unsigned __int64)(v390 | *v495) << 32);
                          LANES128(*(v121)).n128_u64[0] = v499;
                          LANES128(*(v121)).n128_u64[1] = v499;
                          v500 = v390 | v495[1];
                          v501 = v500 | (v500 << 32);
                          LANES128(v121[1]).n128_u64[0] = v501;
                          LANES128(v121[1]).n128_u64[1] = v501;
                          v502 = v390 | v495[2];
                          v503 = v502 | (v502 << 32);
                          LANES128(v121[2]).n128_u64[0] = v503;
                          LANES128(v121[2]).n128_u64[1] = v503;
                          v504 = v390 | v495[3];
                          v505 = v504 | (v504 << 32);
                          LANES128(v121[3]).n128_u64[0] = v505;
                          LANES128(v121[3]).n128_u64[1] = v505;
                          v506 = v390 | v495[4];
                          v507 = v506 | (v506 << 32);
                          LANES128(v121[4]).n128_u64[0] = v507;
                          LANES128(v121[4]).n128_u64[1] = v507;
                          v508 = v390 | v495[5];
                          v509 = v508 | (v508 << 32);
                          LANES128(v121[5]).n128_u64[0] = v509;
                          LANES128(v121[5]).n128_u64[1] = v509;
                          v510 = v390 | v495[6];
                          v511 = v510 | (v510 << 32);
                          LANES128(v121[6]).n128_u64[0] = v511;
                          LANES128(v121[6]).n128_u64[1] = v511;
                          LODWORD(v511) = v495[7];
                          v495 += 8;
                          v512 = v390 | (unsigned int)v511 |
                                 ((unsigned __int64)(v390 | (unsigned int)v511)
                                  << 32);
                          LANES128(v121[7]).n128_u64[0] = v512;
                          LANES128(v121[7]).n128_u64[1] = v512;
                          v121 += 8;
                        } while (v495 != v123);
                      }
                      goto LABEL_58;
                    }
                  }
                  else {
                    v394 = 0;
                  }
                  v121 += v389 & 0xFFFFFFFFFFFFFFF8LL;
                  v122 += v389 & 0xFFFFFFFFFFFFFFF8LL;
                  v395 = v394 - (v389 & 0xFFFFFFFFFFFFFFF8LL);
                  v396 = (double*)&v391[16 * v394 + 4 * v117];
                  v397 = (unsigned __int64*)(v114 + v394 + v116);
                  do {
                    v398 = *v397++;
                    LANES128(v14).n128_u64[0] = v398;
                    v395 += 8LL;
                    LANES128(v14).n128_u64[1] = v398;
                    v608.val[1] = vorrq_s8(
                        v393,
                        vqtbl1q_s8(
                            v14, COERCE_AS(int8x16_t, CudaDriverData_11152f0)));
                    v399 = vorrq_s8(
                        v393,
                        vqtbl1q_s8(
                            v14, COERCE_AS(int8x16_t, CudaDriverData_11161f0)));
                    v400 = vorrq_s8(
                        v393,
                        vqtbl1q_s8(
                            v14, COERCE_AS(int8x16_t, CudaDriverData_1115e10)));
                    v401 = vorrq_s8(
                        v393,
                        vqtbl1q_s8(
                            v14, COERCE_AS(int8x16_t, CudaDriverData_1115a40)));
                    LANES128(v402).n128_u64[0] = LANES128(v399).n128_u32[0];
                    LANES128(v402).n128_u64[1] = LANES128(v399).n128_u32[1];
                    v403 = v402;
                    LANES128(v402).n128_u64[0] = LANES128(v399).n128_u32[2];
                    LANES128(v402).n128_u64[1] = LANES128(v399).n128_u32[3];
                    v618.val[0] = v402;
                    LANES128(v402).n128_u64[0] =
                        LANES128(v608.val[1]).n128_u32[2];
                    LANES128(v402).n128_u64[1] =
                        LANES128(v608.val[1]).n128_u32[3];
                    v608.val[0] = v402;
                    LANES128(v402).n128_u64[0] = LANES128(v400).n128_u32[0];
                    LANES128(v402).n128_u64[1] = LANES128(v400).n128_u32[1];
                    v404 = v402;
                    LANES128(v402).n128_u64[0] = LANES128(v400).n128_u32[2];
                    LANES128(v402).n128_u64[1] = LANES128(v400).n128_u32[3];
                    v405 = v402;
                    LANES128(v402).n128_u64[0] =
                        LANES128(v608.val[1]).n128_u32[0];
                    LANES128(v402).n128_u64[1] =
                        LANES128(v608.val[1]).n128_u32[1];
                    v612.val[0] = v402;
                    LANES128(v402).n128_u64[0] = LANES128(v401).n128_u32[0];
                    LANES128(v402).n128_u64[1] = LANES128(v401).n128_u32[1];
                    LANES128(v14).n128_u32[1] = 0;
                    LANES128(v608.val[1]).n128_u64[0] =
                        LANES128(v608.val[0]).n128_u64[0] |
                        (LANES128(v608.val[0]).n128_u64[0] << 32);
                    LANES128(v612.val[1]).n128_u64[0] =
                        LANES128(v612.val[0]).n128_u64[0] |
                        (LANES128(v612.val[0]).n128_u64[0] << 32);
                    LANES128(v608.val[1]).n128_u64[1] =
                        LANES128(v608.val[0]).n128_u64[1] |
                        (LANES128(v608.val[0]).n128_u64[1] << 32);
                    LANES128(v608.val[0]).n128_u64[0] =
                        LANES128(v618.val[0]).n128_u64[0] |
                        (LANES128(v618.val[0]).n128_u64[0] << 32);
                    LANES128(v612.val[1]).n128_u64[1] =
                        LANES128(v612.val[0]).n128_u64[1] |
                        (LANES128(v612.val[0]).n128_u64[1] << 32);
                    LANES128(v608.val[0]).n128_u64[1] =
                        LANES128(v618.val[0]).n128_u64[1] |
                        (LANES128(v618.val[0]).n128_u64[1] << 32);
                    LANES128(v618.val[1]).n128_u64[0] =
                        LANES128(v405).n128_u64[0] |
                        (LANES128(v405).n128_u64[0] << 32);
                    LANES128(v612.val[0]).n128_u64[0] =
                        LANES128(v403).n128_u64[0] |
                        (LANES128(v403).n128_u64[0] << 32);
                    LANES128(v618.val[1]).n128_u64[1] =
                        LANES128(v405).n128_u64[1] |
                        (LANES128(v405).n128_u64[1] << 32);
                    LANES128(v618.val[0]).n128_u32[0] =
                        LANES128(v401).n128_u32[2];
                    LANES128(v618.val[0]).n128_u32[1] =
                        LANES128(v401).n128_u32[2];
                    LANES128(v612.val[0]).n128_u64[1] =
                        LANES128(v403).n128_u64[1] |
                        (LANES128(v403).n128_u64[1] << 32);
                    LANES128(v606.val[1]).n128_u64[0] =
                        LANES128(v404).n128_u64[0] |
                        (LANES128(v404).n128_u64[0] << 32);
                    LANES128(v618.val[0]).n128_u32[2] =
                        LANES128(v401).n128_u32[3];
                    LANES128(v618.val[0]).n128_u32[3] =
                        LANES128(v401).n128_u32[3];
                    LANES128(v606.val[1]).n128_u64[1] =
                        LANES128(v404).n128_u64[1] |
                        (LANES128(v404).n128_u64[1] << 32);
                    LANES128(v606.val[0]).n128_u64[0] =
                        LANES128(v402).n128_u64[0] |
                        (LANES128(v402).n128_u64[0] << 32);
                    LANES128(v606.val[0]).n128_u64[1] =
                        LANES128(v402).n128_u64[1] |
                        (LANES128(v402).n128_u64[1] << 32);
                    vst2q_f64(v396, v606);
                    v406 = v396 + 4;
                    vst2q_f64(v396 + 8, v612);
                    v407 = v396 + 12;
                    v396 += 16;
                    vst2q_f64(v407, v608);
                    vst2q_f64(v406, v618);
                  } while (v395 != 0);
                  v64 = v583;
                  if (v389 != (v389 & 0xFFFFFFFFFFFFFFF8LL)) {
                    goto LABEL_303;
                  }
                }
              }
              else {
                if ((_DWORD)v124 != 8) {
                LABEL_223:
                  if ((_DWORD)v116 != (_DWORD)v119) {
                    v359 = (v118 << 16) + 0x1000000;
                    v360 = 4LL * (unsigned int)(1 << v120);
                    v361 = v360 - 32;
                    v362 = ((unsigned __int64)(v360 - 32) >> 5) + 1;
                    if ((((_DWORD)v119 - (_DWORD)v116) & 1) != 0) {
                      v363 = (int64x2_t*)((char*)v121 + v360);
                      v364 = vdupq_n_s64(
                          v359 | (unsigned int)*v122 |
                          ((unsigned __int64)(v359 | (unsigned int)*v122)
                           << 32));
                      if (v361 < 0x60) {
                        goto LABEL_366;
                      }
                      v365 = &v121[2 * (v362 & 0xFFFFFFFFFFFFFFCLL)];
                      v366 = v121 + 4;
                      v367 = v362 & 0xFFFFFFFFFFFFFFCLL;
                      do {
                        v366[-4] = v364;
                        v366[-3] = v364;
                        v367 -= 4;
                        v366[-2] = v364;
                        v366[-1] = v364;
                        *v366 = v364;
                        v366[1] = v364;
                        v366[2] = v364;
                        v366[3] = v364;
                        v366 += 8;
                      } while (v367 != 0);
                      v121 = v365;
                      if (v362 != (v362 & 0xFFFFFFFFFFFFFFCLL)) {
                      LABEL_366:
                        do {
                          *v121 = v364;
                          v121[1] = v364;
                          v121 += 2;
                        } while (v121 != v363);
                      }
                      ++v122;
                      v121 = v363;
                    }
                    if (v119 - 1 != v116) {
                      v368 = v362 & 0xFFFFFFFFFFFFFFCLL;
                      v369 = v121 + 4;
                      v370 = 8 * v124;
                      v371 = 2 * (v362 & 0xFFFFFFFFFFFFFFCLL);
                      do {
                        v372 = (int64x2_t*)((char*)v121 + v360);
                        v373 = v121;
                        v374 = vdupq_n_s64(
                            v359 | (unsigned int)*v122 |
                            ((unsigned __int64)(v359 | (unsigned int)*v122)
                             << 32));
                        if (v361 < 0x60) {
                          goto LABEL_367;
                        }
                        v373 = &v121[v371];
                        v375 = v362 & 0xFFFFFFFFFFFFFFCLL;
                        v376 = v369;
                        do {
                          v376[-4] = v374;
                          v376[-3] = v374;
                          v375 -= 4;
                          v376[-2] = v374;
                          v376[-1] = v374;
                          *v376 = v374;
                          v376[1] = v374;
                          v376[2] = v374;
                          v376[3] = v374;
                          v376 += 8;
                        } while (v375 != 0);
                        if (v362 != v368) {
                        LABEL_367:
                          do {
                            *v373 = v374;
                            v373[1] = v374;
                            v373 += 2;
                          } while (v373 != v372);
                        }
                        v377 = (int64x2_t*)((char*)v372 + v360);
                        v378 = v359 | (unsigned int)v122[1];
                        v379 =
                            vdupq_n_s64(v378 | (unsigned __int64)(v378 << 32));
                        if (v361 < 0x60) {
                          goto LABEL_368;
                        }
                        v372 = (int64x2_t*)((char*)v372 + v371 * 16);
                        v380 = v360;
                        v381 = v362 & 0xFFFFFFFFFFFFFFCLL;
                        do {
                          v382 = (int64x2_t*)((char*)v121 + v380);
                          v383 = (int64x2_t*)((char*)v369 + v380);
                          v381 -= 4;
                          v380 += 128;
                          *v382 = v379;
                          v382[1] = v379;
                          v382[2] = v379;
                          v382[3] = v379;
                          *v383 = v379;
                          v383[1] = v379;
                          v383[2] = v379;
                          v383[3] = v379;
                        } while (v381 != 0);
                        if (v362 != v368) {
                        LABEL_368:
                          do {
                            *v372 = v379;
                            v372[1] = v379;
                            v372 += 2;
                          } while (v372 != v377);
                        }
                        v122 += 2;
                        v369 = (int64x2_t*)((char*)v369 + v370);
                        v121 = v377;
                      } while (v122 != v123);
                    }
                  }
                  goto LABEL_58;
                }
                if ((_DWORD)v116 != (_DWORD)v119) {
                  v137 = v119 - v116;
                  v138 = (v118 << 16) + 0x1000000;
                  if ((unsigned __int64)(v119 - v116) < 4) {
                    goto LABEL_349;
                  }
                  v139 = v593;
                  if (v121 < (int64x2_t*)v123 &&
                      v122 < &v593[32 * v119 + 4 * v117 - 32 * v116]) {
                    goto LABEL_349;
                  }
                  v140 = vdupq_n_s32(v138);
                  if (v137 >= 0x10) {
                    v141 = v137 & 0xFFFFFFFFFFFFFFF0LL;
                    v596 = v116;
                    v431 = v119;
                    v432 = (int8x16_t*)(v114 + v116);
                    v433 = (double*)&v21[v117];
                    v434 = v137 & 0xFFFFFFFFFFFFFFF0LL;
                    do {
                      v435 = *v432++;
                      v434 -= 16LL;
                      v436 = vorrq_s8(
                          v140,
                          vqtbl1q_s8(v435, COERCE_AS(int8x16_t,
                                                     CudaDriverData_11161f0)));
                      v437 = vorrq_s8(
                          v140,
                          vqtbl1q_s8(v435, COERCE_AS(int8x16_t,
                                                     CudaDriverData_1115a40)));
                      LANES128(v629.val[0]).n128_u32[0] =
                          LANES128(v437).n128_u32[0];
                      LANES128(v629.val[0]).n128_u32[1] =
                          LANES128(v437).n128_u32[0];
                      LANES128(v629.val[0]).n128_u32[2] =
                          LANES128(v437).n128_u32[1];
                      LANES128(v629.val[0]).n128_u32[3] =
                          LANES128(v437).n128_u32[1];
                      v629.val[1] = v629.val[0];
                      v438 = LANES128(v437).n128_u32[2];
                      v439 =
                          LANES128(v436).n128_u32[3] |
                          ((unsigned __int64)LANES128(v436).n128_u32[3] << 32);
                      v440 = LANES128(v437).n128_u32[3];
                      v629.val[2] = v629.val[0];
                      v629.val[3] = v629.val[0];
                      vst4q_f64(v433, v629);
                      LANES128(v629.val[0]).n128_u32[0] =
                          LANES128(v436).n128_u32[0];
                      LANES128(v629.val[0]).n128_u32[1] =
                          LANES128(v436).n128_u32[0];
                      LANES128(v629.val[0]).n128_u32[2] =
                          LANES128(v436).n128_u32[1];
                      LANES128(v629.val[0]).n128_u32[3] =
                          LANES128(v436).n128_u32[1];
                      v629.val[1] = v629.val[0];
                      v629.val[2] = v629.val[0];
                      v629.val[3] = v629.val[0];
                      v441 = LANES128(v436).n128_u32[2];
                      vst4q_f64(v433 + 16, v629);
                      v629.val[0] = vorrq_s8(
                          v140,
                          vqtbl1q_s8(v435, COERCE_AS(int8x16_t,
                                                     CudaDriverData_1115e10)));
                      v14 = vorrq_s8(
                          v140,
                          vqtbl1q_s8(v435, COERCE_AS(int8x16_t,
                                                     CudaDriverData_11152f0)));
                      LANES128(v442).n128_u64[0] =
                          LANES128(v629.val[0]).n128_u32[2];
                      LANES128(v442).n128_u64[1] =
                          LANES128(v629.val[0]).n128_u32[3];
                      v629.val[1] = v442;
                      LANES128(v442).n128_u64[0] = LANES128(v14).n128_u32[0];
                      LANES128(v442).n128_u64[1] = LANES128(v14).n128_u32[1];
                      v606.val[0] = v442;
                      LANES128(v442).n128_u64[0] = LANES128(v14).n128_u32[0];
                      LANES128(v442).n128_u64[1] = LANES128(v14).n128_u32[1];
                      v443 = v442;
                      v444 = LANES128(v629.val[1]).n128_u64[1];
                      v445 = LANES128(v629.val[1]).n128_u64[0];
                      v446 = LANES128(v629.val[0]).n128_u32[1];
                      v447 = LANES128(v629.val[0]).n128_u32[0];
                      v448 = LANES128(v629.val[0]).n128_u32[1];
                      v449 = LANES128(v629.val[0]).n128_u32[0];
                      LANES128(v442).n128_u64[0] =
                          LANES128(v629.val[0]).n128_u32[0];
                      LANES128(v442).n128_u64[1] =
                          LANES128(v629.val[0]).n128_u32[1];
                      v629.val[1] = v442;
                      LANES128(v442).n128_u64[1] =
                          LANES128(v629.val[0]).n128_u32[1];
                      v450 = LANES128(v629.val[0]).n128_u32[0];
                      v451 = LANES128(v629.val[1]).n128_u64[1];
                      v452 = LANES128(v629.val[1]).n128_u64[0];
                      LANES128(v629.val[0]).n128_u64[1] = v439;
                      LANES128(v629.val[0]).n128_u64[0] = v441 | (v441 << 32);
                      v629.val[1] = v629.val[0];
                      v629.val[2] = v629.val[0];
                      v629.val[3] = v629.val[0];
                      vst4q_f64(v433 + 24, v629);
                      LANES128(v629.val[0]).n128_u64[0] = v438 | (v438 << 32);
                      LANES128(v629.val[0]).n128_u64[1] = v440 | (v440 << 32);
                      v629.val[1] = v629.val[0];
                      v629.val[2] = v629.val[0];
                      v629.val[3] = v629.val[0];
                      vst4q_f64(v433 + 8, v629);
                      LANES128(v629.val[0]).n128_u64[0] = v447 | (v447 << 32);
                      LANES128(v629.val[0]).n128_u64[1] = v446 | (v446 << 32);
                      LANES128(v629.val[1]).n128_u64[0] = v449 | (v449 << 32);
                      LANES128(v629.val[1]).n128_u64[1] = v448 | (v448 << 32);
                      LANES128(v629.val[2]).n128_u64[0] = v450 | (v450 << 32);
                      LANES128(v629.val[2]).n128_u64[1] =
                          LANES128(v442).n128_u64[1] |
                          (LANES128(v442).n128_u64[1] << 32);
                      LANES128(v629.val[3]).n128_u64[0] = v452 | (v452 << 32);
                      LANES128(v629.val[3]).n128_u64[1] = v451 | (v451 << 32);
                      vst4q_f64(v433 + 32, v629);
                      LANES128(v629.val[0]).n128_u64[0] = v445 | (v445 << 32);
                      LANES128(v629.val[0]).n128_u64[1] = v444 | (v444 << 32);
                      v629.val[1] = v629.val[0];
                      v629.val[2] = v629.val[0];
                      v629.val[3] = v629.val[0];
                      vst4q_f64(v433 + 40, v629);
                      LANES128(v442).n128_u64[0] = LANES128(v14).n128_u32[0];
                      LANES128(v442).n128_u64[1] = LANES128(v14).n128_u32[1];
                      v629.val[0] = v442;
                      LANES128(v442).n128_u64[1] = LANES128(v14).n128_u32[1];
                      LANES128(v14).n128_u32[1] = 0;
                      v453 = LANES128(v629.val[0]).n128_u64[1];
                      v454 = LANES128(v629.val[0]).n128_u64[0];
                      LANES128(v629.val[0]).n128_u32[0] =
                          LANES128(v14).n128_u32[0];
                      LANES128(v629.val[0]).n128_u32[1] =
                          LANES128(v14).n128_u32[0];
                      LANES128(v629.val[0]).n128_u64[1] =
                          LANES128(v442).n128_u64[1] |
                          (LANES128(v442).n128_u64[1] << 32);
                      LANES128(v629.val[1]).n128_u64[0] = v454 | (v454 << 32);
                      LANES128(v629.val[1]).n128_u64[1] = v453 | (v453 << 32);
                      LANES128(v629.val[2]).n128_u64[0] =
                          LANES128(v443).n128_u64[0] |
                          (LANES128(v443).n128_u64[0] << 32);
                      LANES128(v629.val[2]).n128_u64[1] =
                          LANES128(v443).n128_u64[1] |
                          (LANES128(v443).n128_u64[1] << 32);
                      LANES128(v629.val[3]).n128_u64[0] =
                          LANES128(v606.val[0]).n128_u64[0] |
                          (LANES128(v606.val[0]).n128_u64[0] << 32);
                      LANES128(v629.val[3]).n128_u64[1] =
                          LANES128(v606.val[0]).n128_u64[1] |
                          (LANES128(v606.val[0]).n128_u64[1] << 32);
                      vst4q_f64(v433 + 48, v629);
                      LANES128(v629.val[0]).n128_u32[2] =
                          LANES128(v14).n128_u32[3];
                      LANES128(v629.val[0]).n128_u32[3] =
                          LANES128(v14).n128_u32[3];
                      LANES128(v629.val[0]).n128_u32[0] =
                          LANES128(v14).n128_u32[2];
                      LANES128(v629.val[0]).n128_u32[1] =
                          LANES128(v14).n128_u32[2];
                      v629.val[1] = v629.val[0];
                      v629.val[2] = v629.val[0];
                      v629.val[3] = v629.val[0];
                      v455 = v433 + 56;
                      v433 += 64;
                      vst4q_f64(v455, v629);
                    } while (v434 != 0);
                    v21 = v585;
                    v113 = v586;
                    v64 = v583;
                    v116 = v596;
                    if (v137 == v141) {
                      goto LABEL_58;
                    }
                    v139 = v593;
                    v119 = v431;
                    if ((v137 & 0xC) == 0) {
                      v64 = v583;
                      v121 += 2 * v141;
                      v122 += v141;
                    LABEL_349:
                      v554 = v122;
                      for (n = ((int)v113 + (int)v119 - (int)v122) & 7LL;
                           n != 0; v121 += 2) {
                        v556 = *v554++;
                        --n;
                        v557 = vdupq_n_s64(
                            v138 | v556 |
                            ((unsigned __int64)(v138 | v556) << 32));
                        *v121 = v557;
                        v121[1] = v557;
                      }
                      if ((unsigned __int64)(v597 + v119 - (_QWORD)v122) >= 7) {
                        do {
                          v558 = vdupq_n_s64(
                              v138 | *v554 |
                              ((unsigned __int64)(v138 | *v554) << 32));
                          *v121 = v558;
                          v121[1] = v558;
                          v559 = v138 | v554[1];
                          v560 = vdupq_n_s64(v559 |
                                             (unsigned __int64)(v559 << 32));
                          v121[2] = v560;
                          v121[3] = v560;
                          v561 = v138 | v554[2];
                          v562 = vdupq_n_s64(v561 |
                                             (unsigned __int64)(v561 << 32));
                          v121[4] = v562;
                          v121[5] = v562;
                          v563 = v138 | v554[3];
                          v564 = vdupq_n_s64(v563 |
                                             (unsigned __int64)(v563 << 32));
                          v121[6] = v564;
                          v121[7] = v564;
                          v565 = v138 | v554[4];
                          v566 = vdupq_n_s64(v565 |
                                             (unsigned __int64)(v565 << 32));
                          v121[8] = v566;
                          v121[9] = v566;
                          v567 = v138 | v554[5];
                          v568 = vdupq_n_s64(v567 |
                                             (unsigned __int64)(v567 << 32));
                          v121[10] = v568;
                          v121[11] = v568;
                          v569 = v138 | v554[6];
                          v570 = vdupq_n_s64(v569 |
                                             (unsigned __int64)(v569 << 32));
                          v121[12] = v570;
                          v121[13] = v570;
                          LODWORD(v569) = v554[7];
                          v554 += 8;
                          v571 = vdupq_n_s64(
                              v138 | (unsigned int)v569 |
                              ((unsigned __int64)(v138 | (unsigned int)v569)
                               << 32));
                          v121[14] = v571;
                          v121[15] = v571;
                          v121 += 16;
                        } while (v554 != v123);
                      }
                      goto LABEL_58;
                    }
                  }
                  else {
                    v141 = 0;
                  }
                  v456 = 32 * v141 + 4 * v117;
                  v121 += 2 * (v137 & 0xFFFFFFFFFFFFFFFCLL);
                  v122 += v137 & 0xFFFFFFFFFFFFFFFCLL;
                  v457 = v141 - (v137 & 0xFFFFFFFFFFFFFFFCLL);
                  v458 = (double*)&v139[v456];
                  v459 = (unsigned __int32*)(v114 + v141 + v116);
                  do {
                    v460 = *v459++;
                    LANES128(v14).n128_u32[0] = v460;
                    v457 += 4LL;
                    v461 = vmovl_u8(
                        COERCE_AS(uint8x8_t, LANES128(v14).n128_u64[0]));
                    v462 = LANES128(v461).n128_u8[6];
                    v463 = LANES128(v461).n128_u8[4];
                    v464 = LANES128(v461).n128_u8[2];
                    LANES128(v461).n128_u64[0] = LANES128(v461).n128_u8[0];
                    LANES128(v461).n128_u8[4] = v464;
                    LANES128(v461).n128_u64[1] = v463;
                    LANES128(v461).n128_u8[12] = v462;
                    v606.val[0] = vorrq_s8(v140, v461);
                    LANES128(v465).n128_u64[0] =
                        LANES128(v606.val[0]).n128_u32[0];
                    LANES128(v465).n128_u64[1] =
                        LANES128(v606.val[0]).n128_u32[1];
                    v14 = v465;
                    LANES128(v465).n128_u64[0] =
                        LANES128(v606.val[0]).n128_u32[0];
                    LANES128(v465).n128_u64[1] =
                        LANES128(v606.val[0]).n128_u32[1];
                    v466 = v465;
                    LANES128(v465).n128_u64[0] =
                        LANES128(v606.val[0]).n128_u32[0];
                    LANES128(v465).n128_u64[1] =
                        LANES128(v606.val[0]).n128_u32[1];
                    v467 = v465;
                    LANES128(v465).n128_u64[0] =
                        LANES128(v606.val[0]).n128_u32[0];
                    LANES128(v465).n128_u64[1] =
                        LANES128(v606.val[0]).n128_u32[1];
                    v632.val[0] = v465;
                    LANES128(v465).n128_u64[0] =
                        LANES128(v606.val[0]).n128_u32[2];
                    LANES128(v606.val[0]).n128_u64[1] =
                        LANES128(v606.val[0]).n128_u32[3];
                    LANES128(v630.val[3]).n128_u64[0] =
                        LANES128(v465).n128_u64[0] |
                        (LANES128(v465).n128_u64[0] << 32);
                    LANES128(v630.val[3]).n128_u64[1] =
                        LANES128(v606.val[0]).n128_u64[1] |
                        (LANES128(v606.val[0]).n128_u64[1] << 32);
                    v630.val[2] = v630.val[3];
                    LANES128(v632.val[3]).n128_u64[0] =
                        LANES128(v632.val[0]).n128_u64[0] |
                        (LANES128(v632.val[0]).n128_u64[0] << 32);
                    LANES128(v632.val[3]).n128_u64[1] =
                        LANES128(v632.val[0]).n128_u64[1] |
                        (LANES128(v632.val[0]).n128_u64[1] << 32);
                    LANES128(v632.val[2]).n128_u64[0] =
                        LANES128(v467).n128_u64[0] |
                        (LANES128(v467).n128_u64[0] << 32);
                    LANES128(v632.val[2]).n128_u64[1] =
                        LANES128(v467).n128_u64[1] |
                        (LANES128(v467).n128_u64[1] << 32);
                    LANES128(v632.val[1]).n128_u64[0] =
                        LANES128(v466).n128_u64[0] |
                        (LANES128(v466).n128_u64[0] << 32);
                    v630.val[1] = v630.val[3];
                    LANES128(v632.val[1]).n128_u64[1] =
                        LANES128(v466).n128_u64[1] |
                        (LANES128(v466).n128_u64[1] << 32);
                    LANES128(v632.val[0]).n128_u64[0] =
                        LANES128(v14).n128_u64[0] |
                        (LANES128(v14).n128_u64[0] << 32);
                    LANES128(v632.val[0]).n128_u64[1] =
                        LANES128(v14).n128_u64[1] |
                        (LANES128(v14).n128_u64[1] << 32);
                    v630.val[0] = v630.val[3];
                    vst4q_f64(v458, v632);
                    vst4q_f64(v458 + 8, v630);
                    v458 += 16;
                  } while (v457 != 0);
                  v64 = v583;
                  if (v137 != (v137 & 0xFFFFFFFFFFFFFFFCLL)) {
                    goto LABEL_349;
                  }
                }
              }
            }
            else if ((_DWORD)v124 == 1) {
              if ((_DWORD)v116 != (_DWORD)v119) {
                v384 = v119 - v116;
                v385 = (v118 << 16) + 0x1000000;
                if ((unsigned __int64)(v119 - v116) < 4) {
                  goto LABEL_355;
                }
                if (v121 < (int64x2_t*)v123 &&
                    v122 < &v593[4 * (v119 + v117 - v116)]) {
                  goto LABEL_355;
                }
                v387 = vdupq_n_s32(v385);
                if (v384 >= 0x20) {
                  v388 = v384 & 0xFFFFFFFFFFFFFFE0LL;
                  v468 = v384 & 0xFFFFFFFFFFFFFFE0LL;
                  v469 = (int8x16_t*)&v590[v117];
                  v470 = (int8x16_t*)(v586 + 752 + v116);
                  do {
                    v471 = v470[-1];
                    v472 = *v470;
                    v470 += 2;
                    v468 -= 32LL;
                    v473 = vqtbl1q_s8(
                        v472, COERCE_AS(int8x16_t, CudaDriverData_1115e10));
                    v474 = vqtbl1q_s8(
                        v472, COERCE_AS(int8x16_t, CudaDriverData_11161f0));
                    v475 = vqtbl1q_s8(
                        v472, COERCE_AS(int8x16_t, CudaDriverData_1115a40));
                    v606.val[0] = vorrq_s8(
                        v387,
                        vqtbl1q_s8(v472, COERCE_AS(int8x16_t,
                                                   CudaDriverData_11152f0)));
                    v469[-4] = vorrq_s8(
                        v387,
                        vqtbl1q_s8(v471, COERCE_AS(int8x16_t,
                                                   CudaDriverData_1115a40)));
                    v469[-3] = vorrq_s8(
                        v387,
                        vqtbl1q_s8(v471, COERCE_AS(int8x16_t,
                                                   CudaDriverData_11161f0)));
                    v469[-2] = vorrq_s8(
                        v387,
                        vqtbl1q_s8(v471, COERCE_AS(int8x16_t,
                                                   CudaDriverData_1115e10)));
                    v469[-1] = vorrq_s8(
                        v387,
                        vqtbl1q_s8(v471, COERCE_AS(int8x16_t,
                                                   CudaDriverData_11152f0)));
                    v14 = vorrq_s8(v387, v473);
                    *v469 = vorrq_s8(v387, v475);
                    v469[1] = vorrq_s8(v387, v474);
                    v469[2] = v14;
                    v469[3] = v606.val[0];
                    v469 += 8;
                  } while (v468 != 0);
                  if (v384 == v388) {
                    goto LABEL_58;
                  }
                  if ((v384 & 0x1C) == 0) {
                    v121 = (int64x2_t*)((char*)v121 + 4 * v388);
                    v122 += v388;
                  LABEL_355:
                    v572 = v122;
                    for (ii = ((int)v113 + (int)v119 - (int)v122) & 7LL;
                         ii != 0; v121 = (int64x2_t*)((char*)v121 + 4)) {
                      v574 = *v572++;
                      --ii;
                      LANES128(*(v121)).n128_u32[0] = v385 | v574;
                    }
                    if ((unsigned __int64)(v597 + v119 - (_QWORD)v122) >= 7) {
                      do {
                        LANES128(*(v121)).n128_u32[0] = v385 | *v572;
                        LANES128(*(v121)).n128_u32[1] = v385 | v572[1];
                        LANES128(*(v121)).n128_u32[2] = v385 | v572[2];
                        LANES128(*(v121)).n128_u32[3] = v385 | v572[3];
                        LANES128(v121[1]).n128_u32[0] = v385 | v572[4];
                        LANES128(v121[1]).n128_u32[1] = v385 | v572[5];
                        LANES128(v121[1]).n128_u32[2] = v385 | v572[6];
                        v575 = v572[7];
                        v572 += 8;
                        LANES128(v121[1]).n128_u32[3] = v385 | v575;
                        v121 += 2;
                      } while (v572 != v123);
                    }
                    goto LABEL_58;
                  }
                }
                else {
                  v388 = 0;
                }
                v121 = (int64x2_t*)((char*)v121 +
                                    4 * (v384 & 0xFFFFFFFFFFFFFFFCLL));
                v122 += v384 & 0xFFFFFFFFFFFFFFFCLL;
                v476 = v388 - (v384 & 0xFFFFFFFFFFFFFFFCLL);
                v477 = (int8x16_t*)&v593[4 * v388 + 4 * v117];
                v478 = (unsigned __int32*)(v114 + v388 + v116);
                do {
                  v479 = *v478++;
                  LANES128(v14).n128_u32[0] = v479;
                  v476 += 4LL;
                  v14 = vorrq_s8(
                      v387, vmovl_u16(COERCE_AS(
                                uint16x4_t,
                                LANES128_OF(
                                    vmovl_u8(COERCE_AS(
                                        uint8x8_t, LANES128(v14).n128_u64[0])))
                                    .n128_u64[0])));
                  *v477++ = v14;
                } while (v476 != 0);
                if (v384 != (v384 & 0xFFFFFFFFFFFFFFFCLL)) {
                  goto LABEL_355;
                }
              }
            }
            else {
              if ((_DWORD)v124 != 2) {
                goto LABEL_223;
              }
              if ((_DWORD)v116 != (_DWORD)v119) {
                v125 = v119 - v116;
                v126 = (v118 << 16) + 0x1000000;
                if ((unsigned __int64)(v119 - v116) < 4) {
                  goto LABEL_343;
                }
                v127 = v593;
                if (v121 < (int64x2_t*)v123 &&
                    v122 < &v593[8 * v119 + 4 * v117 - 8 * v116]) {
                  goto LABEL_343;
                }
                v128 = vdupq_n_s32(v126);
                if (v125 >= 0x10) {
                  v129 = v125 & 0xFFFFFFFFFFFFFFF0LL;
                  v414 = (int8x16_t*)(v114 + v116);
                  v415 = (int8x16_t*)&v21[v117];
                  v416 = v125 & 0xFFFFFFFFFFFFFFF0LL;
                  do {
                    v417 = *v414++;
                    v416 -= 16LL;
                    v418 = vqtbl1q_s8(
                        v417, COERCE_AS(int8x16_t, CudaDriverData_11152f0));
                    v419 = vqtbl1q_s8(
                        v417, COERCE_AS(int8x16_t, CudaDriverData_1115e10));
                    v420 = vqtbl1q_s8(
                        v417, COERCE_AS(int8x16_t, CudaDriverData_1115a40));
                    v421 = vqtbl1q_s8(
                        v417, COERCE_AS(int8x16_t, CudaDriverData_11161f0));
                    v422 = vzip1q_s32(v418, v418);
                    v606.val[0] = vorrq_s8(v128, vzip2q_s32(v418, v418));
                    *v415 = vorrq_s8(v128, vzip1q_s32(v420, v420));
                    v415[1] = vorrq_s8(v128, vzip2q_s32(v420, v420));
                    v415[2] = vorrq_s8(v128, vzip1q_s32(v421, v421));
                    v415[3] = vorrq_s8(v128, vzip2q_s32(v421, v421));
                    v14 = vorrq_s8(v128, vzip1q_s32(v419, v419));
                    v415[4] = v14;
                    v415[5] = vorrq_s8(v128, vzip2q_s32(v419, v419));
                    v415[6] = vorrq_s8(v128, v422);
                    v415[7] = v606.val[0];
                    v415 += 8;
                  } while (v416 != 0);
                  if (v125 == v129) {
                    goto LABEL_58;
                  }
                  v127 = v593;
                  if ((v125 & 0xC) == 0) {
                    v121 = (int64x2_t*)((char*)v121 + 8 * v129);
                    v122 += v129;
                  LABEL_343:
                    v542 = v122;
                    for (jj = ((int)v113 + (int)v119 - (int)v122) & 7LL;
                         jj != 0; v121 = (int64x2_t*)((char*)v121 + 8)) {
                      v544 = *v542++;
                      --jj;
                      LANES128(*(v121)).n128_u32[0] = v126 | v544;
                      LANES128(*(v121)).n128_u32[1] = v126 | v544;
                    }
                    if ((unsigned __int64)(v597 + v119 - (_QWORD)v122) >= 7) {
                      do {
                        v545 = v126 | *v542;
                        LANES128(*(v121)).n128_u32[0] = v545;
                        LANES128(*(v121)).n128_u32[1] = v545;
                        v546 = v126 | v542[1];
                        LANES128(*(v121)).n128_u32[2] = v546;
                        LANES128(*(v121)).n128_u32[3] = v546;
                        v547 = v126 | v542[2];
                        LANES128(v121[1]).n128_u32[0] = v547;
                        LANES128(v121[1]).n128_u32[1] = v547;
                        v548 = v126 | v542[3];
                        LANES128(v121[1]).n128_u32[2] = v548;
                        LANES128(v121[1]).n128_u32[3] = v548;
                        v549 = v126 | v542[4];
                        LANES128(v121[2]).n128_u32[0] = v549;
                        LANES128(v121[2]).n128_u32[1] = v549;
                        v550 = v126 | v542[5];
                        LANES128(v121[2]).n128_u32[2] = v550;
                        LANES128(v121[2]).n128_u32[3] = v550;
                        v551 = v126 | v542[6];
                        LANES128(v121[3]).n128_u32[0] = v551;
                        LANES128(v121[3]).n128_u32[1] = v551;
                        v552 = v542[7];
                        v542 += 8;
                        v553 = v126 | v552;
                        LANES128(v121[3]).n128_u32[2] = v553;
                        LANES128(v121[3]).n128_u32[3] = v553;
                        v121 += 4;
                      } while (v542 != v123);
                    }
                    goto LABEL_58;
                  }
                }
                else {
                  v129 = 0;
                }
                v121 = (int64x2_t*)((char*)v121 +
                                    8 * (v125 & 0xFFFFFFFFFFFFFFFCLL));
                v122 += v125 & 0xFFFFFFFFFFFFFFFCLL;
                v423 = v129 - (v125 & 0xFFFFFFFFFFFFFFFCLL);
                v424 = (int8x16_t*)&v127[8 * v129 + 4 * v117];
                v425 = (unsigned __int32*)(v114 + v129 + v116);
                do {
                  v426 = *v425++;
                  LANES128(v14).n128_u32[0] = v426;
                  v423 += 4LL;
                  v427 = LANES128_OF(vmovl_u8(COERCE_AS(
                                         uint8x8_t, LANES128(v14).n128_u64[0])))
                             .n128_u64[0];
                  LANES128(v606.val[0]).n128_u8[0] = v427;
                  LANES128(v606.val[0]).n128_u8[1] = BYTE2(v427);
                  LANES128(v606.val[0]).n128_u8[2] = BYTE4(v427);
                  LANES128(v606.val[0]).n128_u8[3] = BYTE6(v427);
                  LANES128(v606.val[0]).n128_u8[4] = v427;
                  LANES128(v606.val[0]).n128_u8[5] = BYTE2(v427);
                  LANES128(v606.val[0]).n128_u8[6] = BYTE4(v427);
                  LANES128(v606.val[0]).n128_u8[7] = BYTE6(v427);
                  v428 =
                      vqtbl1q_s8(v606.val[0],
                                 COERCE_AS(int8x16_t, CudaDriverData_11161f0));
                  v429 =
                      vqtbl1q_s8(v606.val[0],
                                 COERCE_AS(int8x16_t, CudaDriverData_1115a40));
                  v430 = vzip2q_s32(v429, v428);
                  v14 = vorrq_s8(v128, vzip1q_s32(v429, v428));
                  v606.val[0] = vorrq_s8(v128, v430);
                  *v424 = v14;
                  v424[1] = v606.val[0];
                  v424 += 2;
                } while (v423 != 0);
                v64 = v583;
                if (v125 != (v125 & 0xFFFFFFFFFFFFFFFCLL)) {
                  goto LABEL_343;
                }
              }
            }
          }
        LABEL_58:
          v115 = v584;
        } while (v584 != v25);
      }
    }
    *v577 = v580;
    v577[2] = v64;
    v577[1] = 1;
    v577[3] = HIBYTE(v580);
    return v576;
  }
  return result;
}

__int64 zstd_decompress_251d50(__int64 result)
{
  __int64 v1;
  void (*v2)(__int64);
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  void (*v6)(_QWORD);
  __int64 v7;
  __int64 v8;
  _QWORD* v9;

  if (result == 0) {
    return result;
  }
  v1 = result;
  if (*(_QWORD*)(result + 30168) != 0) {
    return -64;
  }
  v2 = *(void (**)(__int64))(result + 30136);
  v3 = *(_QWORD*)(result + 30144);
  v4 = *(_QWORD**)(result + 30184);
  v5 = (_QWORD*)(result + 30184);
  if (v4 != nullptr) {
    v6 = (void (*)(_QWORD))v4[3417];
    v7 = v4[3418];
    if (*v4 != 0) {
      if (v6 != nullptr) {
        v6(v4[3418]);
      LABEL_9:
        ((void (*)(__int64, _QWORD*))v6)(v7, v4);
        goto LABEL_10;
      }
      cuda_Free_plt(*v4);
    }
    else if (v6 != nullptr) {
      goto LABEL_9;
    }
    cuda_Free_plt(v4);
    v8 = *(_QWORD*)(v1 + 30240);
    *v5 = 0;
    *(_QWORD*)(v1 + 30192) = 0;
    *(_DWORD*)(v1 + 30208) = 0;
    if (v8 == 0) {
      goto LABEL_16;
    }
    goto LABEL_11;
  }
LABEL_10:
  v8 = *(_QWORD*)(v1 + 30240);
  *v5 = 0;
  *(_QWORD*)(v1 + 30192) = 0;
  *(_DWORD*)(v1 + 30208) = 0;
  if (v8 != 0) {
  LABEL_11:
    if (v2 != nullptr) {
      v2(v3);
    }
    else {
      cuda_Free_plt(v8);
    }
  }
LABEL_16:
  v9 = *(_QWORD**)(v1 + 30216);
  *(_QWORD*)(v1 + 30240) = 0;
  if (v9 != nullptr) {
    if (*v9 != 0) {
      if (v2 != nullptr) {
        v2(v3);
      LABEL_21:
        ((void (*)(__int64, _QWORD*))v2)(v3, v9);
      LABEL_24:
        *(_QWORD*)(v1 + 30216) = 0;
        goto LABEL_25;
      }
      cuda_Free_plt(*v9);
    }
    else if (v2 != nullptr) {
      goto LABEL_21;
    }
    cuda_Free_plt(v9);
    goto LABEL_24;
  }
LABEL_25:
  if (v2 != nullptr) {
    ((void (*)(__int64, __int64))v2)(v3, v1);
  }
  else {
    cuda_Free_plt(v1);
  }
  return 0;
}

#pragma GCC visibility pop
