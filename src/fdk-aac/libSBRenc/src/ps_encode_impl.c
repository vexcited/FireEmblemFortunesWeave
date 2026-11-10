#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 nn_codec_FDKmemclear_plt(_QWORD, _QWORD);
__int64 nn_codec_FDKmemcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDKsbrEnc_EncodeIcc_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                         _QWORD);
__int64 nn_codec_FDKsbrEnc_EncodeIid_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                         _QWORD, _QWORD, _QWORD);
__int64 nn_codec_LdDataVector_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_calculateICC(__int64 result, int*, _DWORD*, __int64,
                              unsigned int*, int, int);
extern _DWORD SdkData_c36f04[15];
extern _DWORD SdkData_c36f40[4];
extern _UNKNOWN SdkData_c36f50;
extern void (*SdkData_e87c50[714])();
__int64 nn_codec_FDKsbrEnc_PSEncode(int* a1, _DWORD* a2, __int64 a3,
                                    unsigned __int64 a4, __int64 a5, int a6,
                                    int a7);

__int64 nn_codec_FDKsbrEnc_PSEncode(int* a1, _DWORD* a2, __int64 a3,
                                    unsigned __int64 a4, __int64 a5, int a6,
                                    int a7)
{
  unsigned int v10;
  unsigned __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  __int64 v15;
  int v16;
  int v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _BYTE* v22;
  int* v23;
  int* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _BYTE* v28;
  _OWORD* v29;
  __int64 v30;
  __int64 v31;
  _BYTE* v32;
  _QWORD* v33;
  __int64 v34;
  _DWORD* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  char v39;
  _BYTE* v40;
  _BYTE* v41;
  _QWORD* v42;
  _QWORD* v43;
  int v44;
  __int64 v45;
  int v46;
  int v47;
  int v48;
  int v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  char v54;
  char v55;
  __int64* v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  int v62;
  int v63;
  int v64;
  int v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64 v70;
  int* v71;
  int* v72;
  int* v73;
  int* v74;
  int v75;
  int v76;
  int v77;
  int v78;
  unsigned int v79;
  __int64 v80;
  unsigned int v81;
  __int64 v82;
  __int64 v83;
  unsigned __int64 v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  _BYTE* v92;
  __int64 v93;
  _OWORD* v94;
  int* v95;
  _BYTE* v96;
  __int64 v97;
  __int64 v98;
  _DWORD* v99;
  int* v100;
  __int64 v101;
  unsigned __int64 v102;
  unsigned __int64 v103;
  int v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  unsigned __int64 v108;
  unsigned __int64 v109;
  unsigned __int64 v110;
  int v111;
  _DWORD* v112;
  int* v113;
  int* v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  unsigned __int64 v118;
  _BOOL4 v119;
  __int64 v120;
  unsigned __int64 v121;
  unsigned int v122;
  __int64 v123;
  __int64 v124;
  _BOOL4 v125;
  __int64 v126;
  signed int v127;
  signed int v128;
  int* v129;
  int* v130;
  __int64 v131;
  int v132;
  int v133;
  int v134;
  int v135;
  int v136;
  unsigned int v137;
  int v138;
  int v139;
  unsigned int v140;
  int v141;
  int v142;
  int v143;
  int v144;
  unsigned int* v145;
  int* v146;
  __int64 v147;
  int v148;
  int v149;
  int v150;
  int v151;
  __int64 v153;
  signed int v154;
  signed int v155;
  int* v156;
  int* v157;
  __int64 v158;
  int v159;
  int v160;
  int v161;
  int v162;
  int v163;
  unsigned int v164;
  int v165;
  int v166;
  unsigned int v167;
  int v168;
  int v169;
  int v170;
  int v171;
  int* v172;
  int* v173;
  __int64 v174;
  int v175;
  int v176;
  int v177;
  int v178;
  _OWORD* v180;
  int* v181;
  _BYTE* v182;
  _BYTE* v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  _DWORD* v187;
  int* v188;
  __int64 v189;
  unsigned __int64 v190;
  unsigned __int64 v191;
  int v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  unsigned __int64 v196;
  unsigned __int64 v197;
  unsigned __int64 v198;
  int v199;
  _DWORD* v200;
  int* v201;
  int* v202;
  __int64 j;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  unsigned __int64 v207;
  __int64* v208;
  int* v209;
  _BYTE* v210;
  _BYTE* v211;
  __int64 v212;
  _BYTE* v213;
  __int64 v214;
  __int64 v215;
  __int64 v216;
  __int64 v217;
  int v218;
  __int64 v219;
  __int64 v220;
  int v221;
  int v222;
  _DWORD* v223;
  int* v224;
  __int64 i;
  int v226;
  int v227;
  __int64 v228;
  __int64 v229;
  __int64 v230;
  int* v231;
  int v232;
  int* v233;
  __int64 v234;
  __int64 v235;
  int v236;
  _BYTE* v237;
  __int64 v238;
  __int64 v239;
  __int64 v240;
  int* v241;
  int v242;
  int* v243;
  __int64 v244;
  __int64 v245;
  int v246;
  _BYTE* v247;
  __int64 v248;
  __int64 v249;
  __int64 v250;
  int* v251;
  int v252;
  int* v253;
  __int64 v254;
  __int64 v255;
  int v256;
  _BYTE* v257;
  int* v258;
  __int64 v259;
  unsigned __int64 v260;
  __int64 v261;
  __int64 v262;
  __int64 v263;
  __int64 v264;
  __int64 v265;
  __int64 v266;
  int v267;
  __int64 v268;
  int v269;
  int v270;
  int v271;
  unsigned int v272;
  __int64 v273;
  unsigned int v274;
  unsigned int v275;
  unsigned int v276;
  unsigned int v277;
  unsigned int v278;
  unsigned int v279;
  unsigned int v280;
  unsigned int v281;
  unsigned int v282;
  unsigned int v283;
  unsigned int v284;
  unsigned int v285;
  bool v286;
  int v287;
  unsigned int v288;
  int v289;
  int v290;
  int v291;
  __int64 v292;
  int v293;
  __int64 v294;
  int v295;
  __int64 v296;
  int v297;
  int v298;
  int v299;
  int* v300;
  int v301;
  int v302;
  int v303;
  unsigned int v304;
  int v305;
  unsigned int v306;
  int v307;
  unsigned int v308;
  int v309;
  unsigned int v310;
  int v311;
  unsigned int v312;
  int v313;
  unsigned int v314;
  int v315;
  unsigned int v316;
  int v317;
  int v318;
  __int64 v319;
  unsigned __int64 v320;
  __int64 v321;
  __int64 v322;
  int v323;
  __int64 v324;
  int* v325;
  int v326;
  int v327;
  int v328;
  int v329;
  int v330;
  int v331;
  int v332;
  int v333;
  int v334;
  int v335;
  int v336;
  int v337;
  int v338;
  int v339;
  int v340;
  int* v341;
  int v342;
  int v343;
  __int64 v344;
  __int64 v345;
  __int64 v346;
  int* v347;
  int v348;
  int v349;
  int v350;
  int v351;
  int v352;
  int v353;
  int v354;
  int v355;
  int v356;
  int v357;
  int v358;
  int v359;
  int v360;
  int v361;
  int v362;
  int* v363;
  int v364;
  int v365;
  __int64 v366;
  __int64 v367;
  __int64 v368;
  int* v369;
  int v370;
  int v371;
  int v372;
  int v373;
  int v374;
  int v375;
  int v376;
  int v377;
  int v378;
  int v379;
  int v380;
  int v381;
  int v382;
  int v383;
  int v384;
  __int64 v385;
  int* v386;
  int v387;
  int v388;
  __int64 v389;
  __int64 v390;
  int* v391;
  int v392;
  int v393;
  int v394;
  int v395;
  int v396;
  int v397;
  int v398;
  int v399;
  int v400;
  int v401;
  int v402;
  int v403;
  int v404;
  int v405;
  int v406;
  int* v407;
  int v408;
  int v409;
  int v410;
  __int64 v411;
  int v412;
  _DWORD* v413;
  _DWORD* v414;
  _DWORD* v415;
  __int64 v416;
  __int64 v417;
  _DWORD* v418;
  int* v419;
  int* v420;
  int v421;
  __int64 v422;
  int* v423;
  int* v424;
  int v425;
  int v426;
  unsigned int v427;
  int v428;
  unsigned int v429;
  unsigned int v430;
  unsigned int v431;
  unsigned int v432;
  unsigned int v433;
  int v434;
  unsigned int v435;
  unsigned int v436;
  unsigned int v437;
  unsigned int v438;
  unsigned int v439;
  unsigned int v440;
  int v441;
  unsigned int v442;
  unsigned int v443;
  unsigned int v444;
  unsigned int v445;
  unsigned int v446;
  unsigned int v447;
  int* v448;
  __int64 v449;
  int v450;
  _DWORD* v451;
  __int64 v452;
  __int64 v453;
  int* v454;
  int v455;
  int v456;
  int v457;
  int* v458;
  __int64 v459;
  int v460;
  _DWORD* v461;
  _DWORD* v462;
  int v463;
  _DWORD* v464;
  _DWORD* v465;
  __int64 v466;
  __int64 v467;
  unsigned int v468;
  int v469;
  int v470;
  __int64 v471;
  int v472;
  int* v473;
  int v474;
  _BOOL4 v476;
  _DWORD* v477;
  __int64 v478;
  int v479;
  int v480;
  _BOOL4 v482;
  int v483;
  _BOOL4 v484;
  int v485;
  _BOOL4 v486;
  __int64 v487;
  unsigned __int64 v488;
  __int64 v489;
  __int64 v490;
  _DWORD* v491;
  int* v492;
  __int64 v493;
  int v494;
  _DWORD* v495;
  int* v496;
  int v497;
  __int64 v498;
  __int64 v499;
  int* v500;
  _DWORD* v501;
  __int64 v502;
  int v503;
  _DWORD* v504;
  int* v505;
  int v506;
  __int64 v507;
  __int64 v508;
  int v509;
  int v510;
  unsigned int v511;
  __int64 v512;
  _BYTE* v513;
  _DWORD* v514;
  int v515;
  __int64 v516;
  int v517;
  int v518;
  int v519;
  __int64 v520;
  int v521;
  int v522;
  int v523;
  __int64 v524;
  _QWORD* v525;
  __int64* v526;
  int v527;
  __int64 v528;
  int v529;
  int v530;
  int* v531;
  int v532;
  _DWORD* v533;
  int* v534;
  unsigned int v535;
  _QWORD* v536;
  _BOOL4* v537;
  __int64 v538;
  int v539;
  __int64 v540;
  int v541;
  int v542;
  _BYTE* v543;
  _BOOL4* v544;
  __int64 k;
  int v546;
  int v547;
  __int64 v548;
  _DWORD* v549;
  __int64 v550;
  __int64 v551;
  int v552;
  int v553;
  int v554;
  int v555;
  int v556;
  int v557;
  int v558;
  int* v559;
  int v560;
  int* v561;
  _DWORD* v562;
  __int64 v563;
  int v564;
  _DWORD* v565;
  int* v566;
  int v567;
  __int64 v568;
  __int64 v569;
  int* v570;
  _DWORD* v571;
  __int64 v572;
  int v573;
  _DWORD* v574;
  int* v575;
  int v576;
  int* v577;
  __int64 v578;
  _DWORD* v579;
  _DWORD* v580;
  int* v581;
  __int64 v582;
  __int64 v583;
  int* v584;
  _DWORD* v585;
  int v586;
  _DWORD* v587;
  int* v588;
  __int64 v589;
  int v590;
  __int64 v591;
  __int64 v592;
  int* v593;
  __int64 v594;
  int v595;
  int v596;
  __int64 v597;
  int v598;
  int v599;
  int v600;
  int v601;
  __int64 v602;
  int* v603;
  __int64 v604;
  int* v605;
  int* v606;
  int* v607;
  unsigned int v611;
  signed int v612;
  unsigned __int64 v613;
  __int64 v614;
  __int64 v615;
  int* v616;
  _BYTE* v617;
  __int64 v618;
  unsigned int v619;
  _BOOL4 v620;
  __int64 v621;
  __int64 v622;
  unsigned __int64 v623;
  __int64 v624;
  __int64 v625;
  __int64 v627;
  __int64 v628;
  char v629;
  __int64 v630;
  int v631;
  __int64 v632;
  _BOOL4 v633;
  __int64 v634;
  int* v635;
  __int64 v636;
  _BYTE* v637;
  __int64* v638;
  __int64 v639;
  __int64 v640;
  _BYTE v641[16];
  __int64 v642;
  _BYTE v643[560];
  _QWORD v644[40];
  _OWORD v645[20];
  _QWORD v646[40];
  _QWORD v647[40];
  struct {
    __int64 v648;
    __int64 v649;
    int v650;
  } v648_;
  unsigned int v651[80];
  unsigned int v652[80];
  _BYTE v653[160];
  unsigned int v654[80];
  _BYTE v655[8];
  _BYTE v656[61];
  _BYTE v657[160];
  __int64 v658;
  _BOOL4 v659;
  struct {
    __int64 v660;
    int v661;
  } v660_;
  _BOOL4 v662;
  _BYTE v663[12];
  int v664;
  _BYTE v665[16];
  _BYTE v666[92];
  _BYTE v667[80];
  _BYTE v668[80];
  int v669;
  _DWORD v670[82];

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v121 = COERCE_AS(__typeof__(v121),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v260 = COERCE_AS(__typeof__(v260),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v411 = COERCE_AS(__typeof__(v411),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v516 = COERCE_AS(__typeof__(v516),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v520 = COERCE_AS(__typeof__(v520),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v528 = COERCE_AS(__typeof__(v528),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v10 = a4;
  memset_plt((void*)v655, nullptr, 320, a4),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v121 = COERCE_AS(__typeof__(v121),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v260 = COERCE_AS(__typeof__(v260),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v411 = COERCE_AS(__typeof__(v411),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v516 = COERCE_AS(__typeof__(v516),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v520 = COERCE_AS(__typeof__(v520),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v528 = COERCE_AS(__typeof__(v528),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v12 = a1[221];
  v648_.v649 = 0;
  v648_.v648 = 0;
  v13 = a1[222];
  v615 = v12;
  v616 = a1;
  v640 = (unsigned int)v12;
  v14 = a1[223];
  if (v10 >= 4) {
    v15 = 4;
  }
  else {
    v15 = v10;
  }
  v618 = v15;
  v648_.v650 = 0;
  LODWORD(v648_.v648) = 0;
  v611 = v10;
  v16 = *((_DWORD*)SdkData_e87c50[0] + (unsigned int)v15);
  if (v10 != 0) {
    v17 = v15 + 1;
    HIDWORD(v648_.v648) =
        (int)(((unsigned __int64)(v16 * (__int64)(a6 << 16)) >> 32) + 0x4000) >>
        15;
    if ((_DWORD)v618 != 1) {
      LODWORD(v648_.v649) =
          (int)(((unsigned __int64)(v16 * (__int64)(a6 << 17)) >> 32) +
                0x4000) >>
          15;
      if (v17 != 3) {
        HIDWORD(v648_.v649) =
            (int)(((unsigned __int64)(v16 * (__int64)(196608 * a6)) >> 32) +
                  0x4000) >>
            15;
        if (v17 != 4) {
          v648_.v650 =
              (int)(((unsigned __int64)(v16 * (__int64)(a6 << 18)) >> 32) +
                    0x4000) >>
              15;
        }
      }
    }
  }
  memset_plt((void*)v641, nullptr, 1920, v11),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v121 = COERCE_AS(__typeof__(v121),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v260 = COERCE_AS(__typeof__(v260),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v411 = COERCE_AS(__typeof__(v411),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v516 = COERCE_AS(__typeof__(v516),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v520 = COERCE_AS(__typeof__(v520),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v528 = COERCE_AS(__typeof__(v528),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v10 == 0) {
    v20 = v640;
    v119 = (int)v640 > 0;
  LABEL_72:
    v633 = v119;
    goto LABEL_74;
  }
  v19 = (unsigned int)(v14 + v13);
  LODWORD(v20) = v640;
  v21 = 0;
  v625 = v19;
  v22 = v641;
  v23 = v616 + 273;
  v24 = v616 + 224;
  v25 = -(v640 & 0x7FFFFFF8);
  do {
    if ((int)v20 < 1) {
      goto LABEL_22;
    }
    if ((unsigned int)v640 < 8) {
      v30 = 0;
      if ((v640 & 7) == 0) {
        goto LABEL_22;
      }
    LABEL_20:
      v34 = v640 & 7;
      v35 = &v22[4 * v30];
      do {
        v35[400] = 1;
        v35[320] = 1;
        --v34;
        v35[80] = 1;
        *v35++ = 1;
      } while (v34 != 0);
      goto LABEL_22;
    }
    v31 = 0;
    v32 = v22;
    do {
      *((_QWORD*)v32 + 200) = 0x100000001LL;
      *((_DWORD*)v32 + 320) = 1;
      v31 -= 8;
      *((_DWORD*)v32 + 80) = 1;
      *(_DWORD*)v32 = 1;
      *(_QWORD*)(v32 + 4) = 0x100000001LL;
      *((_QWORD*)v32 + 201) = 0x100000001LL;
      *(_QWORD*)(v32 + 12) = 0x100000001LL;
      *((_QWORD*)v32 + 202) = 0x100000001LL;
      *(_QWORD*)(v32 + 20) = 0x100000001LL;
      *((_QWORD*)v32 + 203) = 0x100000001LL;
      *(_QWORD*)(v32 + 1284) = 0x100000001LL;
      *((_DWORD*)v32 + 327) = 1;
      *((_DWORD*)v32 + 87) = 1;
      *((_DWORD*)v32 + 7) = 1;
      *(_QWORD*)(v32 + 324) = 0x100000001LL;
      *(_QWORD*)(v32 + 1292) = 0x100000001LL;
      *(_QWORD*)(v32 + 332) = 0x100000001LL;
      *(_QWORD*)(v32 + 1300) = 0x100000001LL;
      v33 = v32 + 340;
      v32 += 32;
      *v33 = 0x100000001LL;
    } while (v25 != v31);
    v30 = -v31;
    if ((v640 & 7) != 0) {
      goto LABEL_20;
    }
  LABEL_22:
    v617 = v22;
    if ((int)v19 > 0) {
      v26 = v21 + 1;
      v36 = 0;
      v632 = v21 + 1;
      v634 = v21;
      v37 = *((int*)&v648_.v648 + v21);
      v38 = *((int*)&v648_.v648 + v21 + 1);
      v39 = v616[221] == 10;
      v629 = v39;
      v627 = v37;
      while (1) {
        v40 = &v641[80 * v21];
        v41 = &v643[80 * v21 + 240];
        v42 = &v646[10 * v21];
        v43 = &v647[10 * v21];
        v44 = v23[v36] >> v39;
        v45 = 4LL * v44;
        v46 = *(_DWORD*)&v40[v45];
        v47 = *(_DWORD*)&v41[v45];
        v48 = *(_DWORD*)((char*)v42 + v45);
        v49 = *(_DWORD*)((char*)v43 + v45);
        if ((int)v37 >= (int)v38) {
          ++v36;
          goto LABEL_25;
        }
        v50 = v24[v36++];
        v51 = v24[v36];
        if ((int)v50 < (int)v51) {
          break;
        }
      LABEL_25:
        *((_DWORD*)v42 + v44) = v48;
        *((_DWORD*)v43 + v44) = v49;
        *(_DWORD*)&v40[4 * v44] = v46 & ~(v46 >> 31);
        *(_DWORD*)&v41[4 * v44] = v47 & ~(v47 >> 31);
        if (v36 == v19) {
          goto LABEL_12;
        }
      }
      v637 = &v641[80 * v21];
      v52 = v51 - 1;
      v53 = v37;
      v54 = *((_BYTE*)v616 + v44 + 1336);
      v55 = *(_BYTE*)(a3 + v44);
      while (1) {
        v56 = (__int64*)(a5 + 32 * v53);
        v58 = *v56;
        v57 = v56[1];
        v59 = v56[2];
        v60 = v56[3];
        if ((((_BYTE)v51 - (_BYTE)v50) & 1) != 0) {
          v62 = *(_DWORD*)(v58 + 4 * v50) << v55;
          v63 = *(_DWORD*)(v57 + 4 * v50) << v55;
          v64 = *(_DWORD*)(v59 + 4 * v50) << v55;
          v65 = *(_DWORD*)(v60 + 4 * v50) << v55;
          v66 = (unsigned __int64)(v64 * (__int64)v64) >> 32;
          v46 +=
              (unsigned int)(((unsigned __int64)(v63 * (__int64)v63) >> 32) +
                             ((unsigned __int64)(v62 * (__int64)v62) >> 32)) >>
              v54;
          v67 = (unsigned __int64)(v64 * (__int64)v62) >> 32;
          v68 = (unsigned __int64)(v64 * (__int64)v63) >> 32;
          v47 += (unsigned int)(((unsigned __int64)(v65 * (__int64)v65) >> 32) +
                                v66) >>
                 v54;
          v69 = v65 * (__int64)v63;
          v61 = v50 + 1;
          v48 += (HIDWORD(v69) + (int)v67) >> v54;
          v49 += (int)(v68 - ((unsigned __int64)(v65 * (__int64)v62) >> 32)) >>
                 v54;
          if (v52 != v50) {
          LABEL_34:
            v70 = v51 - v61;
            v71 = (int*)(v58 + 4 * v61 + 4);
            v72 = (int*)(v57 + 4 * v61 + 4);
            v73 = (int*)(v59 + 4 * v61 + 4);
            v74 = (int*)(v60 + 4 * v61 + 4);
            do {
              v70 -= 2;
              v75 = *(v71 - 1) << v55;
              v76 = *(v72 - 1) << v55;
              v77 = *(v73 - 1) << v55;
              v78 = *(v74 - 1) << v55;
              v79 = ((unsigned int)(((unsigned __int64)(v76 * (__int64)v76) >>
                                     32) +
                                    ((unsigned __int64)(v75 * (__int64)v75) >>
                                     32)) >>
                     v54) +
                    v46;
              v80 = v78 * (__int64)v76;
              v81 = ((unsigned int)(((unsigned __int64)(v78 * (__int64)v78) >>
                                     32) +
                                    ((unsigned __int64)(v77 * (__int64)v77) >>
                                     32)) >>
                     v54) +
                    v47;
              v82 = v77 * (__int64)v75;
              v83 = v78 * (__int64)v75;
              v84 = (unsigned __int64)(v77 * (__int64)v76) >> 32;
              v86 = *v72;
              v72 += 2;
              v85 = v86;
              v88 = *v73;
              v73 += 2;
              v87 = v88;
              LODWORD(v83) = v84 - HIDWORD(v83);
              v89 = *v71;
              v71 += 2;
              LODWORD(v84) = v89;
              v90 = v85 << v55;
              v91 = *v74;
              v74 += 2;
              LODWORD(v84) = (_DWORD)v84 << v55;
              v46 = ((unsigned int)(((unsigned __int64)(v90 * (__int64)v90) >>
                                     32) +
                                    ((unsigned __int64)((int)v84 *
                                                        (__int64)(int)v84) >>
                                     32)) >>
                     v54) +
                    v79;
              v47 =
                  ((unsigned int)(((unsigned __int64)((v91 << v55) *
                                                      (__int64)(v91 << v55)) >>
                                   32) +
                                  ((unsigned __int64)((v87 << v55) *
                                                      (__int64)(v87 << v55)) >>
                                   32)) >>
                   v54) +
                  v81;
              v48 += ((int)(((unsigned __int64)((v91 << v55) * (__int64)v90) >>
                             32) +
                            ((unsigned __int64)((v87 << v55) *
                                                (__int64)(int)v84) >>
                             32)) >>
                      v54) +
                     ((HIDWORD(v80) + HIDWORD(v82)) >> v54);
              v49 += ((int)(((unsigned __int64)((v87 << v55) * (__int64)v90) >>
                             32) -
                            ((unsigned __int64)((v91 << v55) *
                                                (__int64)(int)v84) >>
                             32)) >>
                      v54) +
                     ((int)v83 >> v54);
            } while (v70 != 0);
          }
        }
        else {
          v61 = v50;
          if (v52 != v50) {
            goto LABEL_34;
          }
        }
        if (++v53 == v38) {
          v19 = v625;
          v23 = v616 + 273;
          v24 = v616 + 224;
          v39 = v629;
          v37 = v627;
          v40 = v637;
          v26 = v632;
          v21 = v634;
          goto LABEL_25;
        }
      }
    }
    v26 = v21 + 1;
  LABEL_12:
    v27 = 5 * v21;
    nn_codec_LdDataVector_plt(&v641[80 * v21], &v644[10 * v21], v615),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v121 = COERCE_AS(__typeof__(v121),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v260 = COERCE_AS(__typeof__(v260),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v411 = COERCE_AS(__typeof__(v411),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v516 = COERCE_AS(__typeof__(v516),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v520 = COERCE_AS(__typeof__(v520),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v528 = COERCE_AS(__typeof__(v528),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v28 = &v643[16 * v27 + 240];
    v29 = &v645[v27];
    v20 = v640;
    nn_codec_LdDataVector_plt(v28, v29, (unsigned int)v640),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v121 = COERCE_AS(__typeof__(v121),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v260 = COERCE_AS(__typeof__(v260),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v411 = COERCE_AS(__typeof__(v411),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v516 = COERCE_AS(__typeof__(v516),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v520 = COERCE_AS(__typeof__(v520),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v528 = COERCE_AS(__typeof__(v528),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v25 = -(v640 & 0x7FFFFFF8);
    v21 = v26;
    v22 = v617 + 80;
  } while (v26 != v618);
  if ((int)v640 >= 1) {
    v92 = v655;
    v93 = 0;
    v94 = v645;
    v95 = (int*)v644;
    v96 = v656;
    while ((unsigned int)(v615 - 1) < 3) {
      v97 = 0;
      if ((v640 & 3) != 0) {
        goto LABEL_63;
      }
    LABEL_40:
      ++v93;
      v95 += 20;
      v96 += 80;
      v92 += 80;
      v94 += 5;
      if (v93 == v618) {
        v119 = true;
        goto LABEL_72;
      }
    }
    v98 = 0;
    v99 = v96;
    v100 = v95;
    do {
      v98 -= 4;
      v101 = v100[82];
      v102 = (unsigned __int64)(101008904 * (*v100 - (__int64)v100[80])) >> 32;
      if ((int)v102 <= -16777216) {
        LODWORD(v102) = -16777216;
      }
      v103 =
          (unsigned __int64)(101008904 * (v100[1] - (__int64)v100[81])) >> 32;
      if ((int)v102 >= 0xFFFFFF) {
        LODWORD(v102) = 0xFFFFFF;
      }
      v104 = (_DWORD)v102 << 7;
      if ((int)v103 <= -16777216) {
        LODWORD(v103) = -16777216;
      }
      if ((int)v103 >= 0xFFFFFF) {
        LODWORD(v103) = 0xFFFFFF;
      }
      *(v99 - 2) = v104;
      *(v99 - 1) = (_DWORD)v103 << 7;
      v105 = v100[3];
      v106 = v100[2] - v101;
      v107 = v100[83];
      v100 += 4;
      v108 = (unsigned __int64)(101008904 * v106) >> 32;
      v109 = 101008904 * (v105 - v107);
      if ((int)v108 <= -16777216) {
        LODWORD(v108) = -16777216;
      }
      v110 = HIDWORD(v109);
      if ((int)v108 >= 0xFFFFFF) {
        LODWORD(v108) = 0xFFFFFF;
      }
      v111 = (_DWORD)v108 << 7;
      if ((int)v110 <= -16777216) {
        LODWORD(v110) = -16777216;
      }
      if ((int)v110 >= 0xFFFFFF) {
        LODWORD(v110) = 0xFFFFFF;
      }
      v18 = (unsigned int)((_DWORD)v110 << 7);
      *v99 = v111;
      v99[1] = v18;
      v99 += 4;
    } while (-(v640 & 0x7FFFFFFC) != v98);
    v97 = -v98;
    if ((v640 & 3) == 0) {
      goto LABEL_40;
    }
  LABEL_63:
    v112 = &v92[4 * v97];
    v113 = (int*)v94 + v97;
    v114 = &v95[v97];
    v18 = v640 & 3;
    do {
      v116 = *v114++;
      v115 = v116;
      v117 = *v113++;
      v118 = (unsigned __int64)(101008904 * (v115 - v117)) >> 32;
      if ((int)v118 <= -16777216) {
        LODWORD(v118) = -16777216;
      }
      if ((int)v118 >= 0xFFFFFF) {
        LODWORD(v118) = 0xFFFFFF;
      }
      --v18;
      *v112++ = (_DWORD)v118 << 7;
    } while (v18 != 0);
    goto LABEL_40;
  }
  v633 = false;
LABEL_74:
  memset_plt((void*)v651, nullptr, 320, v18),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v121 = COERCE_AS(__typeof__(v121),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v260 = COERCE_AS(__typeof__(v260),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v411 = COERCE_AS(__typeof__(v411),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v516 = COERCE_AS(__typeof__(v516),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v520 = COERCE_AS(__typeof__(v520),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v528 = COERCE_AS(__typeof__(v528),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  LODWORD(v120) = v618;
  nn_codec_calculateICC((__int64)v644, (int*)v645, v646, (__int64)v647, v651,
                        v618, v20),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v121 = COERCE_AS(__typeof__(v121),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v260 = COERCE_AS(__typeof__(v260),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v411 = COERCE_AS(__typeof__(v411),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v516 = COERCE_AS(__typeof__(v516),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v520 = COERCE_AS(__typeof__(v520),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v528 = COERCE_AS(__typeof__(v528),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v611 >= 2) {
    v122 = v618;
    v623 = v20 - 1;
    v622 = v20 & 7;
    v620 = (v20 & 0x40) == 0;
    v123 = -(__int64)((unsigned int)v20 & 0xFFFFFFFC);
    v613 = (unsigned __int64)(22151168LL * (int)((_DWORD)v20 << 25)) >> 32;
    v614 = v20 & 3;
    v624 = v123;
    v621 = -(__int64)((unsigned int)v20 & 0xFFFFFFF8);
    v612 = (unsigned __int64)(9LL * (int)((_DWORD)v20 << 25)) >> 5;
    v124 = v614;
    while (1) {
      v125 = v620;
      if (!v633) {
        goto LABEL_108;
      }
      if (v623 >= 3) {
        break;
      }
      v126 = 0;
      v127 = 0;
      v128 = 0;
      if (v124 != 0) {
        goto LABEL_84;
      }
    LABEL_86:
      v125 = v128 <= (int)v613 && v127 <= v612;
      if (v122 >= 4 && v125) {
        if (v623 >= 3) {
          v156 = (int*)v654;
          v157 = (int*)&v658;
          v158 = 0;
          v154 = 0;
          v155 = 0;
          do {
            v158 -= 4;
            v159 = (*(v157 - 23) >> 1) - (*(v157 - 3) >> 1);
            v160 = (*(v157 - 22) >> 1) - (*(v157 - 2) >> 1);
            v161 = (*(v156 - 23) >> 1) - (*(v156 - 3) >> 1);
            v162 = *(v157 - 20);
            v163 = (*(v156 - 22) >> 1) - (*(v156 - 2) >> 1);
            v164 = v155 +
                   ((unsigned int)((unsigned __int64)(v159 * (__int64)v159) >>
                                   32) >>
                    4);
            v165 = (*(v157 - 21) >> 1) - (*(v157 - 1) >> 1);
            v166 = *(v156 - 20);
            v167 = v154 +
                   ((unsigned int)((unsigned __int64)(v161 * (__int64)v161) >>
                                   32) >>
                    4);
            v168 = (*(v156 - 21) >> 1) - (*(v156 - 1) >> 1);
            v170 = *v157;
            v157 += 4;
            v169 = v170;
            v171 = *v156;
            v156 += 4;
            v155 =
                v164 +
                ((unsigned int)((unsigned __int64)(v160 * (__int64)v160) >>
                                32) >>
                 4) +
                ((unsigned int)((unsigned __int64)(v165 * (__int64)v165) >>
                                32) >>
                 4) +
                ((unsigned int)((unsigned __int64)(((v162 >> 1) - (v169 >> 1)) *
                                                   (__int64)((v162 >> 1) -
                                                             (v169 >> 1))) >>
                                32) >>
                 4);
            v154 =
                v167 +
                ((unsigned int)((unsigned __int64)(v163 * (__int64)v163) >>
                                32) >>
                 4) +
                ((unsigned int)((unsigned __int64)(v168 * (__int64)v168) >>
                                32) >>
                 4) +
                ((unsigned int)((unsigned __int64)(((v166 >> 1) - (v171 >> 1)) *
                                                   (__int64)((v166 >> 1) -
                                                             (v171 >> 1))) >>
                                32) >>
                 4);
          } while (v123 != v158);
          v153 = -v158;
          if (v124 != 0) {
            goto LABEL_100;
          }
        }
        else {
          v153 = 0;
          v154 = 0;
          v155 = 0;
          if (v124 == 0) {
            goto LABEL_102;
          }
        LABEL_100:
          v172 = (int*)&v653[4 * v153 + 68];
          v173 = (int*)&v657[4 * v153 + 68];
          v174 = v124;
          do {
            v175 = *v173;
            v176 = v173[20];
            v177 = v172[20];
            --v174;
            ++v173;
            v178 = *v172++;
            v155 +=
                (unsigned int)((unsigned __int64)(((v175 >> 1) - (v176 >> 1)) *
                                                  (__int64)((v175 >> 1) -
                                                            (v176 >> 1))) >>
                               32) >>
                4;
            v154 +=
                (unsigned int)((unsigned __int64)(((v178 >> 1) - (v177 >> 1)) *
                                                  (__int64)((v178 >> 1) -
                                                            (v177 >> 1))) >>
                               32) >>
                4;
          } while (v174 != 0);
        }
      LABEL_102:
        v125 = v155 <= (int)v613 && v154 <= v612;
      }
    LABEL_108:
      if (!v125) {
        LODWORD(v120) = v122;
        goto LABEL_180;
      }
      v120 = v122 >> 1;
      v619 = v122;
      if (v122 >= 2) {
        v208 = &v642;
        v209 = (int*)v643;
        v210 = v641;
        v211 = v641;
        v212 = 0;
        v630 = v122 >> 1;
        while (1) {
          v635 = v209;
          v638 = v208;
          if (!v633) {
            v213 = &v643[80 * v212 + 240];
            goto LABEL_144;
          }
          if (v623 < 7) {
            break;
          }
          v220 = 0;
          do {
            v220 -= 8;
            *((_DWORD*)v208 - 4) = (*v209 >> 1) + (*(v209 - 20) >> 1);
            *((_DWORD*)v208 - 3) = (v209[1] >> 1) + (*(v209 - 19) >> 1);
            *((_DWORD*)v208 - 2) = (v209[2] >> 1) + (*(v209 - 18) >> 1);
            *((_DWORD*)v208 - 1) = (v209[3] >> 1) + (*(v209 - 17) >> 1);
            *(_DWORD*)v208 = (v209[4] >> 1) + (*(v209 - 16) >> 1);
            *((_DWORD*)v208 + 1) = (v209[5] >> 1) + (*(v209 - 15) >> 1);
            *((_DWORD*)v208 + 2) = (v209[6] >> 1) + (*(v209 - 14) >> 1);
            v221 = v209[7];
            v222 = *(v209 - 13);
            v209 += 8;
            *((_DWORD*)v208 + 3) = (v221 >> 1) + (v222 >> 1);
            v208 += 4;
          } while (v621 != v220);
          v219 = -v220;
          if (v622 != 0) {
            goto LABEL_152;
          }
        LABEL_154:
          if (v623 < 7) {
            v228 = 0;
            if (v622 == 0) {
              goto LABEL_162;
            }
          LABEL_160:
            v234 = 4 * v228;
            v235 = v622;
            do {
              --v235;
              v236 = (*(int*)&v210[v234 + 400] >> 1) +
                     (*(int*)&v210[v234 + 320] >> 1);
              v237 = &v211[v234];
              v234 += 4;
              *((_DWORD*)v237 + 80) = v236;
            } while (v235 != 0);
            goto LABEL_162;
          }
          v229 = 320;
          v230 = 0;
          do {
            v231 = (int*)&v210[v229];
            v230 -= 8;
            v232 = (*(int*)&v210[v229 + 80] >> 1) + (*(int*)&v210[v229] >> 1);
            v233 = (int*)&v211[v229];
            v229 += 32;
            *v233 = v232;
            v233[1] = (v231[21] >> 1) + (v231[1] >> 1);
            v233[2] = (v231[22] >> 1) + (v231[2] >> 1);
            v233[3] = (v231[23] >> 1) + (v231[3] >> 1);
            v233[4] = (v231[24] >> 1) + (v231[4] >> 1);
            v233[5] = (v231[25] >> 1) + (v231[5] >> 1);
            v233[6] = (v231[26] >> 1) + (v231[6] >> 1);
            v233[7] = (v231[27] >> 1) + (v231[7] >> 1);
          } while (v621 != v230);
          v228 = -v230;
          if (v622 != 0) {
            goto LABEL_160;
          }
        LABEL_162:
          if (v623 >= 7) {
            v239 = 1280;
            v240 = 0;
            do {
              v241 = (int*)&v210[v239];
              v240 -= 8;
              v242 = (*(int*)&v210[v239 + 80] >> 1) + (*(int*)&v210[v239] >> 1);
              v243 = (int*)&v211[v239];
              v239 += 32;
              *v243 = v242;
              v243[1] = (v241[21] >> 1) + (v241[1] >> 1);
              v243[2] = (v241[22] >> 1) + (v241[2] >> 1);
              v243[3] = (v241[23] >> 1) + (v241[3] >> 1);
              v243[4] = (v241[24] >> 1) + (v241[4] >> 1);
              v243[5] = (v241[25] >> 1) + (v241[5] >> 1);
              v243[6] = (v241[26] >> 1) + (v241[6] >> 1);
              v243[7] = (v241[27] >> 1) + (v241[7] >> 1);
            } while (v621 != v240);
            v238 = -v240;
            if (v622 == 0) {
              goto LABEL_170;
            }
          LABEL_168:
            v244 = 4 * v238;
            v245 = v622;
            do {
              --v245;
              v246 = (*(int*)&v210[v244 + 1360] >> 1) +
                     (*(int*)&v210[v244 + 1280] >> 1);
              v247 = &v211[v244];
              v244 += 4;
              *((_DWORD*)v247 + 320) = v246;
            } while (v245 != 0);
            goto LABEL_170;
          }
          v238 = 0;
          if (v622 != 0) {
            goto LABEL_168;
          }
        LABEL_170:
          if (v623 >= 7) {
            v249 = 1600;
            v250 = 0;
            do {
              v251 = (int*)&v210[v249];
              v250 -= 8;
              v252 = (*(int*)&v210[v249 + 80] >> 1) + (*(int*)&v210[v249] >> 1);
              v253 = (int*)&v211[v249];
              v249 += 32;
              *v253 = v252;
              v253[1] = (v251[21] >> 1) + (v251[1] >> 1);
              v253[2] = (v251[22] >> 1) + (v251[2] >> 1);
              v253[3] = (v251[23] >> 1) + (v251[3] >> 1);
              v253[4] = (v251[24] >> 1) + (v251[4] >> 1);
              v253[5] = (v251[25] >> 1) + (v251[5] >> 1);
              v253[6] = (v251[26] >> 1) + (v251[6] >> 1);
              v253[7] = (v251[27] >> 1) + (v251[7] >> 1);
            } while (v621 != v250);
            v248 = -v250;
            v213 = &v643[80 * v212 + 240];
            if (v622 == 0) {
              goto LABEL_144;
            }
          LABEL_176:
            v254 = 4 * v248;
            v255 = v622;
            do {
              --v255;
              v256 = (*(int*)&v210[v254 + 1680] >> 1) +
                     (*(int*)&v210[v254 + 1600] >> 1);
              v257 = &v211[v254];
              v254 += 4;
              *((_DWORD*)v257 + 400) = v256;
            } while (v255 != 0);
            goto LABEL_144;
          }
          v248 = 0;
          v213 = &v643[80 * v212 + 240];
          if (v622 != 0) {
            goto LABEL_176;
          }
        LABEL_144:
          v214 = 5 * v212;
          v215 = 2 * v212;
          v216 = v212;
          nn_codec_LdDataVector_plt(&v641[80 * v212], &v644[10 * v212],
                                    (unsigned int)v640),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v121 = COERCE_AS(__typeof__(v121),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v260 = COERCE_AS(__typeof__(v260),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v411 = COERCE_AS(__typeof__(v411),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v516 = COERCE_AS(__typeof__(v516),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v520 = COERCE_AS(__typeof__(v520),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v528 = COERCE_AS(__typeof__(v528),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          nn_codec_LdDataVector_plt(v213, &v645[v214], (unsigned int)v640),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v121 = COERCE_AS(__typeof__(v121),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v260 = COERCE_AS(__typeof__(v260),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v411 = COERCE_AS(__typeof__(v411),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v516 = COERCE_AS(__typeof__(v516),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v520 = COERCE_AS(__typeof__(v520),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v528 = COERCE_AS(__typeof__(v528),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          v217 = 4 * v216;
          v212 = v216 + 1;
          v123 = v624;
          v211 += 80;
          v218 = *((_DWORD*)&v648_.v648 + v215);
          v120 = v630;
          v210 += 160;
          *(_DWORD*)((char*)&v648_.v648 + v217) = v218;
          v209 = v635 + 40;
          v208 = v638 + 10;
          if (v212 == v630) {
            goto LABEL_110;
          }
        }
        v219 = 0;
        if (v622 == 0) {
          goto LABEL_154;
        }
      LABEL_152:
        v223 = &v211[4 * v219];
        v224 = (int*)&v210[4 * v219];
        for (i = v622; i != 0; --i) {
          v226 = v224[20];
          v227 = *v224++;
          *v223++ = (v226 >> 1) + (v227 >> 1);
        }
        goto LABEL_154;
      }
    LABEL_110:
      v124 = v614;
      *((_DWORD*)&v648_.v648 + v120) = *((_DWORD*)&v648_.v648 + (v619 & 6));
      if (v633) {
        v181 = (int*)v644;
        v180 = v645;
        v182 = v656;
        v183 = v655;
        v184 = 0;
        while (v623 < 3) {
          v185 = 0;
          if (v614 != 0) {
            goto LABEL_135;
          }
        LABEL_112:
          ++v184;
          v181 += 20;
          v182 += 80;
          v183 += 80;
          v180 += 5;
          if (v184 == v120) {
            goto LABEL_76;
          }
        }
        v186 = 0;
        v187 = v182;
        v188 = v181;
        do {
          v186 -= 4;
          v189 = v188[82];
          v190 =
              (unsigned __int64)(101008904 * (*v188 - (__int64)v188[80])) >> 32;
          if ((int)v190 <= -16777216) {
            LODWORD(v190) = -16777216;
          }
          v191 =
              (unsigned __int64)(101008904 * (v188[1] - (__int64)v188[81])) >>
              32;
          if ((int)v190 >= 0xFFFFFF) {
            LODWORD(v190) = 0xFFFFFF;
          }
          v192 = (_DWORD)v190 << 7;
          if ((int)v191 <= -16777216) {
            LODWORD(v191) = -16777216;
          }
          if ((int)v191 >= 0xFFFFFF) {
            LODWORD(v191) = 0xFFFFFF;
          }
          *(v187 - 2) = v192;
          *(v187 - 1) = (_DWORD)v191 << 7;
          v193 = v188[3];
          v194 = v188[2] - v189;
          v195 = v188[83];
          v188 += 4;
          v196 = (unsigned __int64)(101008904 * v194) >> 32;
          v197 = 101008904 * (v193 - v195);
          if ((int)v196 <= -16777216) {
            LODWORD(v196) = -16777216;
          }
          v198 = HIDWORD(v197);
          if ((int)v196 >= 0xFFFFFF) {
            LODWORD(v196) = 0xFFFFFF;
          }
          v199 = (_DWORD)v196 << 7;
          if ((int)v198 <= -16777216) {
            LODWORD(v198) = -16777216;
          }
          if ((int)v198 >= 0xFFFFFF) {
            LODWORD(v198) = 0xFFFFFF;
          }
          *v187 = v199;
          v187[1] = (_DWORD)v198 << 7;
          v187 += 4;
        } while (v123 != v186);
        v185 = -v186;
        if (v614 == 0) {
          goto LABEL_112;
        }
      LABEL_135:
        v200 = &v183[4 * v185];
        v201 = (int*)v180 + v185;
        v202 = &v181[v185];
        for (j = v614; j != 0; --j) {
          v205 = *v202++;
          v204 = v205;
          v206 = *v201++;
          v207 = (unsigned __int64)(101008904 * (v204 - v206)) >> 32;
          if ((int)v207 <= -16777216) {
            LODWORD(v207) = -16777216;
          }
          if ((int)v207 >= 0xFFFFFF) {
            LODWORD(v207) = 0xFFFFFF;
          }
          *v200++ = (_DWORD)v207 << 7;
        }
        goto LABEL_112;
      }
    LABEL_76:
      nn_codec_calculateICC((__int64)v644, (int*)v645, v646, (__int64)v647,
                            v651, v120, v640),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v121 = COERCE_AS(__typeof__(v121),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v260 = COERCE_AS(__typeof__(v260),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v411 = COERCE_AS(__typeof__(v411),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v516 = COERCE_AS(__typeof__(v516),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v520 = COERCE_AS(__typeof__(v520),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v528 = COERCE_AS(__typeof__(v528),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v122 = v120;
      if (v619 <= 3) {
        goto LABEL_180;
      }
    }
    v129 = (int*)v653;
    v130 = (int*)v657;
    v131 = 0;
    v127 = 0;
    v128 = 0;
    do {
      v131 -= 4;
      v132 = (*(v130 - 23) >> 1) - (*(v130 - 3) >> 1);
      v133 = (*(v130 - 22) >> 1) - (*(v130 - 2) >> 1);
      v134 = (*(v129 - 23) >> 1) - (*(v129 - 3) >> 1);
      v135 = *(v130 - 20);
      v136 = (*(v129 - 22) >> 1) - (*(v129 - 2) >> 1);
      v137 =
          v128 +
          ((unsigned int)((unsigned __int64)(v132 * (__int64)v132) >> 32) >> 4);
      v138 = (*(v130 - 21) >> 1) - (*(v130 - 1) >> 1);
      v139 = *(v129 - 20);
      v140 =
          v127 +
          ((unsigned int)((unsigned __int64)(v134 * (__int64)v134) >> 32) >> 4);
      v141 = (*(v129 - 21) >> 1) - (*(v129 - 1) >> 1);
      v143 = *v130;
      v130 += 4;
      v142 = v143;
      v144 = *v129;
      v129 += 4;
      v128 = v137 +
             ((unsigned int)((unsigned __int64)(v133 * (__int64)v133) >> 32) >>
              4) +
             ((unsigned int)((unsigned __int64)(v138 * (__int64)v138) >> 32) >>
              4) +
             ((unsigned int)((unsigned __int64)(((v135 >> 1) - (v142 >> 1)) *
                                                (__int64)((v135 >> 1) -
                                                          (v142 >> 1))) >>
                             32) >>
              4);
      v127 = v140 +
             ((unsigned int)((unsigned __int64)(v136 * (__int64)v136) >> 32) >>
              4) +
             ((unsigned int)((unsigned __int64)(v141 * (__int64)v141) >> 32) >>
              4) +
             ((unsigned int)((unsigned __int64)(((v139 >> 1) - (v144 >> 1)) *
                                                (__int64)((v139 >> 1) -
                                                          (v144 >> 1))) >>
                             32) >>
              4);
    } while (v123 != v131);
    v126 = -v131;
    if (v124 == 0) {
      goto LABEL_86;
    }
  LABEL_84:
    v145 = &v651[v126];
    v146 = (int*)&v655[4 * v126];
    v147 = v124;
    do {
      v148 = *v146;
      v149 = v146[20];
      v150 = v145[20];
      --v147;
      ++v146;
      v151 = *v145++;
      v128 += (unsigned int)((unsigned __int64)(((v148 >> 1) - (v149 >> 1)) *
                                                (__int64)((v148 >> 1) -
                                                          (v149 >> 1))) >>
                             32) >>
              4;
      v127 += (unsigned int)((unsigned __int64)(((v151 >> 1) - (v150 >> 1)) *
                                                (__int64)((v151 >> 1) -
                                                          (v150 >> 1))) >>
                             32) >>
              4;
    } while (v147 != 0);
    goto LABEL_86;
  }
LABEL_180:
  v258 = v616;
  if (a7 != 0) {
    *(_QWORD*)(v616 + 217) = 0x140000000ALL;
    *(_QWORD*)(v616 + 219) = 0xA00000014LL;
  }
  v259 = v616[333];
  memset_plt((void*)v670, nullptr, 320, v121),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v121 = COERCE_AS(__typeof__(v121),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v260 = COERCE_AS(__typeof__(v260),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v411 = COERCE_AS(__typeof__(v411),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v516 = COERCE_AS(__typeof__(v516),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v520 = COERCE_AS(__typeof__(v520),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v528 = COERCE_AS(__typeof__(v528),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  memset_plt((void*)v665, nullptr, 320, v260),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v121 = COERCE_AS(__typeof__(v121),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v260 = COERCE_AS(__typeof__(v260),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v411 = COERCE_AS(__typeof__(v411),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v516 = COERCE_AS(__typeof__(v516),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v520 = COERCE_AS(__typeof__(v520),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v528 = COERCE_AS(__typeof__(v528),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v664 = 0;
  if ((_DWORD)v120 == 0) {
    *v616 = 0;
    v616[108] = 0;
    v616[218] = 20;
    v616[219] = 20;
    goto LABEL_557;
  }
  if (!v633) {
    v319 = v640;
    *v616 = 0;
    v265 = (unsigned int)v120;
    goto LABEL_439;
  }
  v639 = v259;
  v261 = 0;
  v262 = 0;
  LODWORD(v263) = 0;
  LODWORD(v264) = 0;
  v631 = v120;
  v265 = (unsigned int)v120;
  while (2) {
    v266 = v640;
    v267 = 0;
    v268 = v261;
    while (2) {
      v269 = *(_DWORD*)&v655[v268];
      v270 = v269 >> 1;
      v271 = (v269 >> 1) + 301989888;
      if (v271 < 0) {
        v271 = -301989888 - (v269 >> 1);
      }
      v272 = v270 + 419430400;
      if (v270 + 419430400 < 0) {
        v272 = -419430400 - (v269 >> 1);
      }
      if (v271 > v272) {
        v273 = 0;
        goto LABEL_246;
      }
      v274 = v270 + 234881024;
      if (v270 + 234881024 < 0) {
        v274 = -234881024 - v270;
      }
      if (v274 > v271) {
        v273 = 1;
        goto LABEL_246;
      }
      v275 = v270 + 167772160;
      if (v270 + 167772160 < 0) {
        v275 = -167772160 - v270;
      }
      if (v275 > v274) {
        v273 = 2;
        goto LABEL_246;
      }
      v276 = v270 + 117440512;
      if (v270 + 117440512 < 0) {
        v276 = -117440512 - v270;
      }
      if (v276 > v275) {
        v273 = 3;
        goto LABEL_246;
      }
      v277 = v270 + 0x4000000;
      if (v270 + 0x4000000 < 0) {
        v277 = -67108864 - v270;
      }
      if (v277 > v276) {
        v273 = 4;
        goto LABEL_246;
      }
      v278 = v270 + 0x2000000;
      if (v270 + 0x2000000 < 0) {
        v278 = -33554432 - v270;
      }
      if (v278 > v277) {
        v273 = 5;
        goto LABEL_246;
      }
      if (v270 >= 0) {
        v279 = v269 >> 1;
      }
      else {
        v279 = -v270;
      }
      if (v279 > v278) {
        v273 = 6;
        goto LABEL_246;
      }
      v280 = v270 - 0x2000000;
      if (v270 - 0x2000000 < 0) {
        v280 = 0x2000000 - v270;
      }
      if (v280 > v279) {
        v273 = 7;
        goto LABEL_246;
      }
      v281 = v270 - 0x4000000;
      if (v270 - 0x4000000 < 0) {
        v281 = 0x4000000 - v270;
      }
      if (v281 > v280) {
        v273 = 8;
        goto LABEL_246;
      }
      v282 = v270 - 117440512;
      if (v270 - 117440512 < 0) {
        v282 = 117440512 - v270;
      }
      if (v282 > v281) {
        v273 = 9;
        goto LABEL_246;
      }
      v283 = v270 - 167772160;
      if (v270 - 167772160 < 0) {
        v283 = 167772160 - v270;
      }
      if (v283 > v282) {
        v273 = 10;
        goto LABEL_246;
      }
      v284 = v270 - 234881024;
      if (v270 - 234881024 < 0) {
        v284 = 234881024 - v270;
      }
      if (v284 > v283) {
        v273 = 11;
        goto LABEL_246;
      }
      v285 = v270 - 301989888;
      if (v270 - 301989888 < 0) {
        v285 = 301989888 - v270;
      }
      if (v285 > v284) {
        v273 = 12;
        goto LABEL_246;
      }
      v287 = v270 - 419430400;
      v286 = v270 - 419430400 < 0;
      v288 = 419430400 - v270;
      if (!v286) {
        v288 = v287;
      }
      if (v288 <= v285) {
        v289 = 7;
        v273 = 14;
      }
      else {
        v273 = 13;
      LABEL_246:
        v289 = v273 - 7;
      }
      v290 = SdkData_c36f04[v273];
      *(_DWORD*)&v665[v268] = v289;
      v268 += 4;
      v291 = v269 - v290;
      if (v291 < 0) {
        v291 = -v291;
      }
      --v266;
      v267 += (unsigned int)v291 >> 6;
      if (v266 != 0) {
        continue;
      }
      break;
    }
    v292 = 0;
    v293 = 0;
    do {
      v299 = *(_DWORD*)&v655[80 * v262 + 4 * v292];
      v294 = -1;
      v300 = (int*)&SdkData_c36f50;
      v301 = v299 >> 1;
      while (1) {
        v302 = v301 - (*(v300 - 3) >> 1);
        v303 = v301 - (*(v300 - 4) >> 1);
        if (v302 >= 0) {
          v304 = v301 - (*(v300 - 3) >> 1);
        }
        else {
          v304 = (*(v300 - 3) >> 1) - v301;
        }
        if (v303 < 0) {
          v303 = (*(v300 - 4) >> 1) - v301;
        }
        if (v304 > v303) {
          LODWORD(v294) = v294 + 1;
        LABEL_253:
          v295 = v294 - 15;
          v296 = (unsigned int)v294;
          goto LABEL_254;
        }
        v305 = v301 - (*(v300 - 2) >> 1);
        if (v305 >= 0) {
          v306 = v301 - (*(v300 - 2) >> 1);
        }
        else {
          v306 = (*(v300 - 2) >> 1) - v301;
        }
        if (v302 < 0) {
          v302 = (*(v300 - 3) >> 1) - v301;
        }
        if (v306 > v302) {
          LODWORD(v294) = v294 + 2;
          goto LABEL_253;
        }
        v307 = v301 - (*(v300 - 1) >> 1);
        if (v307 >= 0) {
          v308 = v301 - (*(v300 - 1) >> 1);
        }
        else {
          v308 = (*(v300 - 1) >> 1) - v301;
        }
        if (v305 < 0) {
          v305 = (*(v300 - 2) >> 1) - v301;
        }
        if (v308 > v305) {
          LODWORD(v294) = v294 + 3;
          goto LABEL_253;
        }
        v309 = v301 - (*v300 >> 1);
        if (v309 >= 0) {
          v310 = v301 - (*v300 >> 1);
        }
        else {
          v310 = (*v300 >> 1) - v301;
        }
        if (v307 < 0) {
          v307 = (*(v300 - 1) >> 1) - v301;
        }
        if (v310 > v307) {
          LODWORD(v294) = v294 + 4;
          goto LABEL_253;
        }
        v311 = v301 - (v300[1] >> 1);
        if (v311 >= 0) {
          v312 = v301 - (v300[1] >> 1);
        }
        else {
          v312 = (v300[1] >> 1) - v301;
        }
        if (v309 < 0) {
          v309 = (*v300 >> 1) - v301;
        }
        if (v312 > v309) {
          LODWORD(v294) = v294 + 5;
          goto LABEL_253;
        }
        v313 = v301 - (v300[2] >> 1);
        if (v313 >= 0) {
          v314 = v301 - (v300[2] >> 1);
        }
        else {
          v314 = (v300[2] >> 1) - v301;
        }
        if (v311 < 0) {
          v311 = (v300[1] >> 1) - v301;
        }
        if (v314 > v311) {
          LODWORD(v294) = v294 + 6;
          goto LABEL_253;
        }
        if (v294 == 23) {
          break;
        }
        v315 = v301 - (v300[3] >> 1);
        if (v315 >= 0) {
          v316 = v301 - (v300[3] >> 1);
        }
        else {
          v316 = (v300[3] >> 1) - v301;
        }
        if (v313 < 0) {
          v313 = (v300[2] >> 1) - v301;
        }
        if (v316 > v313) {
          LODWORD(v294) = v294 + 7;
          goto LABEL_253;
        }
        v317 = v300[4];
        v294 += 8;
        v300 += 8;
        v318 = v301 - (v317 >> 1);
        if (v318 < 0) {
          v318 = -v318;
        }
        if (v315 < 0) {
          v315 = -v315;
        }
        if (v318 > (unsigned int)v315) {
          goto LABEL_253;
        }
      }
      v295 = 15;
      v296 = 30;
    LABEL_254:
      v297 = SdkData_c36f40[v296];
      v670[20 * v262 + v292++] = v295;
      v298 = v299 - v297;
      if (v298 < 0) {
        v298 = -v298;
      }
      v293 += (unsigned int)v298 >> 6;
    } while (v292 != v640);
    v263 = (unsigned int)(v267 + v263);
    v264 = (unsigned int)(v293 + v264);
    ++v262;
    v261 += 80;
    if (v262 != (unsigned int)v120) {
      continue;
    }
    break;
  }
  v319 = v640;
  v258 = v616;
  v320 = v640 - 1;
  v321 = v640 & 7;
  *v616 = 0;
  if ((unsigned __int64)(v640 - 1) >= 7) {
    v324 = 0;
    v323 = 0;
    v325 = (int*)v666;
    do {
      v326 = *(v325 - 4);
      v327 = *(v325 - 3);
      v324 -= 8;
      if (v326 < 0) {
        v326 = -v326;
      }
      v328 = v326 + v323;
      if (v327 >= 0) {
        v329 = *(v325 - 3);
      }
      else {
        v329 = -v327;
      }
      v330 = *(v325 - 2);
      v331 = *(v325 - 1);
      if (v330 < 0) {
        v330 = -v330;
      }
      v332 = v330 + v329 + v328;
      if (v331 >= 0) {
        v333 = *(v325 - 1);
      }
      else {
        v333 = -v331;
      }
      v334 = *v325;
      v335 = v325[1];
      if (*v325 < 0) {
        v334 = -v334;
      }
      v336 = v334 + v333;
      if (v335 >= 0) {
        v337 = v325[1];
      }
      else {
        v337 = -v335;
      }
      v338 = v337 + v336 + v332;
      v339 = v325[2];
      v340 = v325[3];
      v325 += 8;
      if (v339 < 0) {
        v339 = -v339;
      }
      if (v340 < 0) {
        v340 = -v340;
      }
      v323 = v340 + v339 + v338;
    } while (-(__int64)((unsigned int)v640 & 0xFFFFFFF8) != v324);
    v322 = -v324;
    if ((v640 & 7) != 0) {
      goto LABEL_341;
    }
  }
  else {
    v322 = 0;
    v323 = 0;
    if ((v640 & 7) == 0) {
      goto LABEL_345;
    }
  LABEL_341:
    v341 = (int*)&v665[4 * v322];
    do {
      v343 = *v341++;
      v342 = v343;
      if (v343 < 0) {
        v342 = -v342;
      }
      --v321;
      v323 += v342;
    } while (v321 != 0);
  }
LABEL_345:
  if ((_DWORD)v120 != 1) {
    v344 = v640 & 7;
    if (v320 >= 7) {
      v346 = 0;
      v347 = (int*)v667;
      do {
        v348 = *(v347 - 7);
        v349 = *(v347 - 6);
        v346 -= 8;
        if (v348 < 0) {
          v348 = -v348;
        }
        v350 = v348 + v323;
        if (v349 >= 0) {
          v351 = *(v347 - 6);
        }
        else {
          v351 = -v349;
        }
        v352 = *(v347 - 5);
        v353 = *(v347 - 4);
        if (v352 < 0) {
          v352 = -v352;
        }
        v354 = v352 + v351 + v350;
        if (v353 >= 0) {
          v355 = *(v347 - 4);
        }
        else {
          v355 = -v353;
        }
        v356 = *(v347 - 3);
        v357 = *(v347 - 2);
        if (v356 < 0) {
          v356 = -v356;
        }
        v358 = v356 + v355;
        if (v357 >= 0) {
          v359 = *(v347 - 2);
        }
        else {
          v359 = -v357;
        }
        v360 = v359 + v358 + v354;
        v361 = *(v347 - 1);
        v362 = *v347;
        v347 += 8;
        if (v361 < 0) {
          v361 = -v361;
        }
        if (v362 < 0) {
          v362 = -v362;
        }
        v323 = v362 + v361 + v360;
      } while (-(__int64)((unsigned int)v640 & 0xFFFFFFF8) != v346);
      v345 = -v346;
      if ((v640 & 7) != 0) {
        goto LABEL_371;
      }
    }
    else {
      v345 = 0;
      if ((v640 & 7) == 0) {
        goto LABEL_375;
      }
    LABEL_371:
      v363 = (int*)&v666[4 * v345 + 64];
      do {
        v365 = *v363++;
        v364 = v365;
        if (v365 < 0) {
          v364 = -v364;
        }
        --v344;
        v323 += v364;
      } while (v344 != 0);
    }
  LABEL_375:
    if ((_DWORD)v120 != 2) {
      v366 = v640 & 7;
      if (v320 >= 7) {
        v368 = 0;
        v369 = (int*)v668;
        do {
          v370 = *(v369 - 7);
          v371 = *(v369 - 6);
          v368 -= 8;
          if (v370 < 0) {
            v370 = -v370;
          }
          v372 = v370 + v323;
          if (v371 >= 0) {
            v373 = *(v369 - 6);
          }
          else {
            v373 = -v371;
          }
          v374 = *(v369 - 5);
          v375 = *(v369 - 4);
          if (v374 < 0) {
            v374 = -v374;
          }
          v376 = v374 + v373 + v372;
          if (v375 >= 0) {
            v377 = *(v369 - 4);
          }
          else {
            v377 = -v375;
          }
          v378 = *(v369 - 3);
          v379 = *(v369 - 2);
          if (v378 < 0) {
            v378 = -v378;
          }
          v380 = v378 + v377;
          if (v379 >= 0) {
            v381 = *(v369 - 2);
          }
          else {
            v381 = -v379;
          }
          v382 = v381 + v380 + v376;
          v383 = *(v369 - 1);
          v384 = *v369;
          v369 += 8;
          if (v383 < 0) {
            v383 = -v383;
          }
          if (v384 < 0) {
            v384 = -v384;
          }
          v323 = v384 + v383 + v382;
        } while (-(__int64)((unsigned int)v640 & 0xFFFFFFF8) != v368);
        v367 = -v368;
      }
      else {
        v367 = 0;
      }
      if ((v640 & 7) != 0) {
        v385 = v640 & 7;
        v386 = (int*)&v667[4 * v367 + 52];
        do {
          v388 = *v386++;
          v387 = v388;
          if (v388 < 0) {
            v387 = -v387;
          }
          --v385;
          v323 += v387;
        } while (v385 != 0);
      }
      if ((_DWORD)v120 != 3) {
        if (v320 >= 7) {
          v390 = 0;
          v391 = &v669;
          do {
            v392 = *(v391 - 7);
            v393 = *(v391 - 6);
            v390 -= 8;
            if (v392 < 0) {
              v392 = -v392;
            }
            v394 = v392 + v323;
            if (v393 >= 0) {
              v395 = *(v391 - 6);
            }
            else {
              v395 = -v393;
            }
            v396 = *(v391 - 5);
            v397 = *(v391 - 4);
            if (v396 < 0) {
              v396 = -v396;
            }
            v398 = v396 + v395 + v394;
            if (v397 >= 0) {
              v399 = *(v391 - 4);
            }
            else {
              v399 = -v397;
            }
            v400 = *(v391 - 3);
            v401 = *(v391 - 2);
            if (v400 < 0) {
              v400 = -v400;
            }
            v402 = v400 + v399;
            if (v401 >= 0) {
              v403 = *(v391 - 2);
            }
            else {
              v403 = -v401;
            }
            v404 = v403 + v402 + v398;
            v405 = *(v391 - 1);
            v406 = *v391;
            v391 += 8;
            if (v405 < 0) {
              v405 = -v405;
            }
            if (v406 < 0) {
              v406 = -v406;
            }
            v323 = v406 + v405 + v404;
          } while (-(__int64)((unsigned int)v640 & 0xFFFFFFF8) != v390);
          v389 = -v390;
        }
        else {
          v389 = 0;
        }
        if ((v640 & 7) != 0) {
          v407 = (int*)&v668[4 * v389 + 52];
          do {
            v409 = *v407++;
            v408 = v409;
            if (v409 < 0) {
              v408 = -v408;
            }
            --v366;
            v323 += v408;
          } while (v366 != 0);
        }
      }
    }
  }
  if (v323 <= (int)(((unsigned __int64)(1503238528LL *
                                        (((int)v640 * (int)v120) << 16)) >>
                     32) +
                    0x4000) >>
      15) {
  LABEL_439:
    v258[218] = 20;
    v413 = v258 + 4;
    v414 = v258 + 8;
    do {
      *v413++ = 0;
      nn_codec_FDKmemclear_plt(v414, (unsigned int)(4 * v319)),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v121 = COERCE_AS(__typeof__(v121),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v260 = COERCE_AS(__typeof__(v260),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v411 = COERCE_AS(__typeof__(v411),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v516 = COERCE_AS(__typeof__(v516),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v520 = COERCE_AS(__typeof__(v520),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v528 = COERCE_AS(__typeof__(v528),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      --v265;
      v414 += 20;
    } while (v265 != 0);
    goto LABEL_441;
  }
  v628 = v263;
  v636 = v264;
  *v616 = 1;
  v410 = nn_codec_FDKsbrEnc_EncodeIid_plt(0, v665, 0, (unsigned int)v640, 0, 0,
                                          &v664, &SdkData_c36f50),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v121 = COERCE_AS(__typeof__(v121),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v260 = COERCE_AS(__typeof__(v260),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v411 = COERCE_AS(__typeof__(v411),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v516 = COERCE_AS(__typeof__(v516),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v520 = COERCE_AS(__typeof__(v520),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v528 = COERCE_AS(__typeof__(v528),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v616[218] > 19 || v616[3] == 1) {
    v412 = 0x7FFFFF;
  }
  else {
    v509 = v410;
    v412 = nn_codec_FDKsbrEnc_EncodeIid_plt(
        0, v665, v616 + 88, (unsigned int)v640, 0, 1, &v664, v411),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v121 = COERCE_AS(__typeof__(v121),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v260 = COERCE_AS(__typeof__(v260),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v411 = COERCE_AS(__typeof__(v411),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v516 = COERCE_AS(__typeof__(v516),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v520 = COERCE_AS(__typeof__(v520),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v528 = COERCE_AS(__typeof__(v528),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v410 = v509;
  }
  memset(v663, 0, sizeof(v663));
  if (v412 >= v410) {
    v510 = v410;
  }
  else {
    v510 = v412;
  }
  v662 = v412 <= v410;
  if ((_DWORD)v120 == 1) {
    v511 = v640;
  }
  else {
    v511 = v640;
    v512 = (unsigned int)v120 - 1LL;
    v513 = v665;
    v514 = v663;
    do {
      v515 = nn_codec_FDKsbrEnc_EncodeIid_plt(
          0, v513 + 80, 0, (unsigned int)v615, 0, 0, &v664, v411),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v121 = COERCE_AS(__typeof__(v121),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v260 = COERCE_AS(__typeof__(v260),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v411 = COERCE_AS(__typeof__(v411),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v516 = COERCE_AS(__typeof__(v516),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v520 = COERCE_AS(__typeof__(v520),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v528 = COERCE_AS(__typeof__(v528),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v517 = nn_codec_FDKsbrEnc_EncodeIid_plt(
          0, v513 + 80, v513, (unsigned int)v640, 0, 1, &v664, v516),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v121 = COERCE_AS(__typeof__(v121),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v260 = COERCE_AS(__typeof__(v260),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v411 = COERCE_AS(__typeof__(v411),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v516 = COERCE_AS(__typeof__(v516),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v520 = COERCE_AS(__typeof__(v520),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v528 = COERCE_AS(__typeof__(v528),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v513 += 80;
      if (v517 >= v515) {
        v518 = v515;
      }
      else {
        v518 = v517;
      }
      --v512;
      *v514++ = v517 <= v515;
      v510 += v518;
    } while (v512 != 0);
  }
  v519 = nn_codec_FDKsbrEnc_EncodeIid_plt(0, v670, 0, v511, 1, 0, &v664, v411),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v121 = COERCE_AS(__typeof__(v121),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v260 = COERCE_AS(__typeof__(v260),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v411 = COERCE_AS(__typeof__(v411),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v516 = COERCE_AS(__typeof__(v516),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v520 = COERCE_AS(__typeof__(v520),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v528 = COERCE_AS(__typeof__(v528),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v616[218] <= 19 && v616[3] != 0) {
    v521 = v519;
    v522 = nn_codec_FDKsbrEnc_EncodeIid_plt(0, v670, v616 + 88, v511, 1, 1,
                                            &v664, v520),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v121 = COERCE_AS(__typeof__(v121),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v260 = COERCE_AS(__typeof__(v260),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v411 = COERCE_AS(__typeof__(v411),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v516 = COERCE_AS(__typeof__(v516),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v520 = COERCE_AS(__typeof__(v520),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v528 = COERCE_AS(__typeof__(v528),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v519 = v521;
  }
  else {
    v522 = 0x7FFFFF;
  }
  v660_.v661 = 0;
  v660_.v660 = 0;
  if (v522 >= v519) {
    v523 = v519;
  }
  else {
    v523 = v522;
  }
  v659 = v522 <= v519;
  if ((_DWORD)v120 != 1) {
    v524 = (unsigned int)v120 - 1LL;
    v525 = v670;
    v526 = &v660_.v660;
    do {
      v527 = nn_codec_FDKsbrEnc_EncodeIid_plt(0, v525 + 10, 0, v511, 1, 0,
                                              &v664, v520),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v121 = COERCE_AS(__typeof__(v121),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v260 = COERCE_AS(__typeof__(v260),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v411 = COERCE_AS(__typeof__(v411),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v516 = COERCE_AS(__typeof__(v516),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v520 = COERCE_AS(__typeof__(v520),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v528 = COERCE_AS(__typeof__(v528),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v529 = nn_codec_FDKsbrEnc_EncodeIid_plt(0, v525 + 10, v525, v640, 1, 1,
                                              &v664, v528),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v121 = COERCE_AS(__typeof__(v121),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v260 = COERCE_AS(__typeof__(v260),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v411 = COERCE_AS(__typeof__(v411),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v516 = COERCE_AS(__typeof__(v516),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v520 = COERCE_AS(__typeof__(v520),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v528 = COERCE_AS(__typeof__(v528),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v511 = v640;
      v525 += 10;
      if (v529 >= v527) {
        v530 = v527;
      }
      else {
        v530 = v529;
      }
      --v524;
      *(_DWORD*)v526 = v529 <= v527;
      v526 = (__int64*)((char*)v526 + 4);
      v523 += v530;
    } while (v524 != 0);
  }
  if (v523 == v510) {
    LODWORD(v120) = v631;
    v531 = v616;
    if ((unsigned int)v636 >= (unsigned int)v628) {
      v532 = 0x7FFFFF;
    }
    else {
      v532 = v510;
    }
    if ((unsigned int)v636 < (unsigned int)v628) {
      v510 = 0x7FFFFF;
    }
    v533 = v616 + 4;
    v534 = v616 + 8;
    v535 = 4 * v511;
    if (v532 < v510) {
      goto LABEL_664;
    }
  LABEL_677:
    v543 = v665;
    v544 = &v662;
    v531[2] = 0;
    for (k = v265; k != 0; --k) {
      v546 = *v544++;
      *v533++ = v546;
      nn_codec_FDKmemcpy_plt(v534, v543, v535),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v121 = COERCE_AS(__typeof__(v121),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v260 = COERCE_AS(__typeof__(v260),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v411 = COERCE_AS(__typeof__(v411),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v516 = COERCE_AS(__typeof__(v516),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v520 = COERCE_AS(__typeof__(v520),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v528 = COERCE_AS(__typeof__(v528),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v543 += 80;
      v534 += 20;
    }
  }
  else {
    v531 = v616;
    LODWORD(v120) = v631;
    v540 = ((unsigned __int64)(v636 * v639) >> 31) & 0xFFFFFFFE;
    v541 = (104857 * (int)v615 * v631) >> 1;
    if ((int)(v541 + ((unsigned int)v636 >> 1)) >> 1 > (int)v540) {
      LODWORD(v540) = (int)(v541 + ((unsigned int)v636 >> 1)) >> 1;
    }
    if ((int)v540 < (int)((unsigned int)v628 >> 2)) {
      v533 = v616 + 4;
      v534 = v616 + 8;
      v535 = 4 * v511;
      if (v523 < 0x7FFFFF) {
        goto LABEL_664;
      }
      goto LABEL_677;
    }
    v542 = (int)(v541 + ((unsigned int)v628 >> 1)) >> 1;
    if (v542 <= (int)(((unsigned __int64)(v628 * v639) >> 31) & 0xFFFFFFFE)) {
      v542 = ((unsigned __int64)(v628 * v639) >> 31) & 0xFFFFFFFE;
    }
    if (v542 < (int)((unsigned int)v636 >> 2)) {
      v523 = 0x7FFFFF;
    }
    v533 = v616 + 4;
    v534 = v616 + 8;
    v535 = 4 * v511;
    if (v523 >= v510) {
      goto LABEL_677;
    }
  LABEL_664:
    v536 = v670;
    v537 = &v659;
    v538 = v265;
    v531[2] = 1;
    do {
      v539 = *v537++;
      *v533++ = v539;
      nn_codec_FDKmemcpy_plt(v534, v536, v535),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v121 = COERCE_AS(__typeof__(v121),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v260 = COERCE_AS(__typeof__(v260),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v411 = COERCE_AS(__typeof__(v411),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v516 = COERCE_AS(__typeof__(v516),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v520 = COERCE_AS(__typeof__(v520),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v528 = COERCE_AS(__typeof__(v528),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      --v538;
      v536 += 10;
      v534 += 20;
    } while (v538 != 0);
  }
  v258 = v616;
  v547 = v616[218];
  if ((unsigned int)v120 >= 8) {
    v319 = v640;
    v549 = v616 + 6;
    v550 = 0;
    v551 = -(__int64)((unsigned int)v265 & 0xFFFFFFF8);
    while (1) {
      if (*(v549 - 2) == 1) {
        v552 = v547 + 1;
        v616[218] = v552;
        if (*(v549 - 1) != 1) {
          goto LABEL_686;
        }
      LABEL_694:
        v553 = v552 + 1;
        v616[218] = v553;
        if (*v549 == 1) {
          goto LABEL_695;
        }
      LABEL_687:
        v554 = 0;
        v616[218] = 0;
        if (v549[1] != 1) {
          goto LABEL_688;
        }
      LABEL_696:
        v555 = v554 + 1;
        v616[218] = v555;
        if (v549[2] == 1) {
          goto LABEL_697;
        }
      LABEL_689:
        v556 = 0;
        v616[218] = 0;
        if (v549[3] != 1) {
          goto LABEL_690;
        }
      LABEL_698:
        v557 = v556 + 1;
        v616[218] = v557;
        if (v549[4] == 1) {
          goto LABEL_699;
        }
      LABEL_691:
        v558 = 0;
        v616[218] = 0;
        if (v549[5] != 1) {
          goto LABEL_700;
        }
      LABEL_683:
        v547 = v558 + 1;
        v550 -= 8;
        v549 += 8;
        v616[218] = v547;
        if (v551 == v550) {
          goto LABEL_701;
        }
      }
      else {
        v552 = 0;
        v616[218] = 0;
        if (*(v549 - 1) == 1) {
          goto LABEL_694;
        }
      LABEL_686:
        v553 = 0;
        v616[218] = 0;
        if (*v549 != 1) {
          goto LABEL_687;
        }
      LABEL_695:
        v554 = v553 + 1;
        v616[218] = v554;
        if (v549[1] == 1) {
          goto LABEL_696;
        }
      LABEL_688:
        v555 = 0;
        v616[218] = 0;
        if (v549[2] != 1) {
          goto LABEL_689;
        }
      LABEL_697:
        v556 = v555 + 1;
        v616[218] = v556;
        if (v549[3] == 1) {
          goto LABEL_698;
        }
      LABEL_690:
        v557 = 0;
        v616[218] = 0;
        if (v549[4] != 1) {
          goto LABEL_691;
        }
      LABEL_699:
        v558 = v557 + 1;
        v616[218] = v558;
        if (v549[5] == 1) {
          goto LABEL_683;
        }
      LABEL_700:
        v547 = 0;
        v550 -= 8;
        v549 += 8;
        v616[218] = 0;
        if (v551 == v550) {
        LABEL_701:
          v548 = -v550;
          if ((v265 & 7) != 0) {
            goto LABEL_702;
          }
          goto LABEL_441;
        }
      }
    }
  }
  v319 = v640;
  v548 = 0;
  if ((v265 & 7) != 0) {
  LABEL_702:
    v559 = &v616[v548 + 4];
    do {
      v560 = *v559++;
      if (v560 == 1) {
        ++v547;
      }
      else {
        v547 = 0;
      }
      --v265;
      v616[218] = v547;
    } while (v265 != 0);
  }
LABEL_441:
  v415 = v258 + 116;
  v670[0] = 0;
  if (v633) {
    v416 = 0;
    v417 = (unsigned int)v120;
    v418 = v258 + 196;
    v419 = v258 + 117;
    v420 = (int*)v652;
    do {
      v422 = 0;
      if (v319 != 1) {
        v423 = v419;
        v424 = v420;
        do {
          v426 = *(v424 - 1) >> 1;
          v427 = v426 - 1006096063;
          if (v426 - 1006096063 < 0) {
            v427 = 1006096063 - v426;
          }
          if (v427 <= 0x3FFFFFFF - v426) {
            v429 = v426 - 903210175;
            if (v426 - 903210175 < 0) {
              v429 = 903210175 - v426;
            }
            if (v429 <= v427) {
              v430 = v426 - 645232959;
              if (v426 - 645232959 < 0) {
                v430 = 645232959 - v426;
              }
              if (v430 <= v429) {
                v431 = v426 - 394750432;
                if (v426 - 394750432 < 0) {
                  v431 = 394750432 - v426;
                }
                if (v431 <= v430) {
                  if (v426 >= 0) {
                    v432 = *(v424 - 1) >> 1;
                  }
                  else {
                    v432 = -v426;
                  }
                  if (v432 <= v431) {
                    v433 = v426 + 632433920;
                    if (v426 + 632433920 < 0) {
                      v433 = -v433;
                    }
                    if (v433 <= v432) {
                      if (v426 + 0x40000000 <= v433) {
                        v428 = 7;
                      }
                      else {
                        v428 = 6;
                      }
                    }
                    else {
                      v428 = 5;
                    }
                  }
                  else {
                    v428 = 4;
                  }
                }
                else {
                  v428 = 3;
                }
              }
              else {
                v428 = 2;
              }
            }
            else {
              v428 = 1;
            }
          }
          else {
            v428 = 0;
          }
          *(v423 - 1) = v428;
          v434 = *v424 >> 1;
          v435 = v434 - 1006096063;
          if (v434 - 1006096063 < 0) {
            v435 = 1006096063 - v434;
          }
          if (v435 > 0x3FFFFFFF - v434) {
            v425 = 0;
          }
          else {
            v436 = v434 - 903210175;
            if (v434 - 903210175 < 0) {
              v436 = 903210175 - v434;
            }
            if (v436 <= v435) {
              v437 = v434 - 645232959;
              if (v434 - 645232959 < 0) {
                v437 = 645232959 - v434;
              }
              if (v437 <= v436) {
                v438 = v434 - 394750432;
                if (v434 - 394750432 < 0) {
                  v438 = 394750432 - v434;
                }
                if (v438 <= v437) {
                  if (v434 >= 0) {
                    v439 = *v424 >> 1;
                  }
                  else {
                    v439 = -v434;
                  }
                  if (v439 <= v438) {
                    v440 = v434 + 632433920;
                    if (v434 + 632433920 < 0) {
                      v440 = -v440;
                    }
                    if (v440 <= v439) {
                      if (v434 + 0x40000000 <= v440) {
                        v425 = 7;
                      }
                      else {
                        v425 = 6;
                      }
                    }
                    else {
                      v425 = 5;
                    }
                  }
                  else {
                    v425 = 4;
                  }
                }
                else {
                  v425 = 3;
                }
              }
              else {
                v425 = 2;
              }
            }
            else {
              v425 = 1;
            }
          }
          v424 += 2;
          *v423 = v425;
          v423 += 2;
          v422 -= 2;
        } while (-(__int64)((unsigned int)v319 & 0xFFFFFFFE) != v422);
        v422 = -v422;
      }
      if ((v319 & 1) != 0) {
        v441 = (int)v651[20 * v416 + v422] >> 1;
        v442 = v441 - 1006096063;
        if (v441 - 1006096063 < 0) {
          v442 = 1006096063 - v441;
        }
        if (v442 > 0x3FFFFFFF - v441) {
          v421 = 0;
        }
        else {
          v443 = v441 - 903210175;
          if (v441 - 903210175 < 0) {
            v443 = 903210175 - v441;
          }
          if (v443 <= v442) {
            v444 = v441 - 645232959;
            if (v441 - 645232959 < 0) {
              v444 = 645232959 - v441;
            }
            if (v444 <= v443) {
              v445 = v441 - 394750432;
              if (v441 - 394750432 < 0) {
                v445 = 394750432 - v441;
              }
              if (v445 <= v444) {
                if (v441 >= 0) {
                  v446 = (int)v651[20 * v416 + v422] >> 1;
                }
                else {
                  v446 = -v441;
                }
                if (v446 <= v445) {
                  v447 = v441 + 632433920;
                  if (v441 + 632433920 < 0) {
                    v447 = -v447;
                  }
                  if (v447 <= v446) {
                    if (v441 + 0x40000000 <= v447) {
                      v421 = 7;
                    }
                    else {
                      v421 = 6;
                    }
                  }
                  else {
                    v421 = 5;
                  }
                }
                else {
                  v421 = 4;
                }
              }
              else {
                v421 = 3;
              }
            }
            else {
              v421 = 2;
            }
          }
          else {
            v421 = 1;
          }
        }
        v415[20 * v416 + v422] = v421;
      }
      ++v416;
      v420 += 20;
      v419 += 20;
    } while (v416 != (unsigned int)v120);
    v448 = v258 + 123;
    v449 = 0;
    v450 = 0;
    v258[108] = 0;
    v451 = v258 + 116;
    while (2) {
      if ((unsigned __int64)(v319 - 1) >= 7) {
        v453 = 0;
        v454 = v448;
        do {
          v453 -= 8;
          v455 = *(v454 - 2) + *(v454 - 3) + *(v454 - 4) + *(v454 - 5) +
                 *(v454 - 6) + *(v454 - 7) + v450;
          v456 = *(v454 - 1);
          v457 = *v454;
          v454 += 8;
          v450 = v457 + v456 + v455;
        } while (-(__int64)((unsigned int)v319 & 0xFFFFFFF8) != v453);
        v452 = -v453;
        if ((v319 & 7) != 0) {
          goto LABEL_543;
        }
      }
      else {
        v452 = 0;
        if ((v319 & 7) == 0) {
          goto LABEL_536;
        }
      LABEL_543:
        v458 = &v451[v452];
        v459 = v319 & 7;
        do {
          v460 = *v458++;
          --v459;
          v450 += v460;
        } while (v459 != 0);
      }
    LABEL_536:
      ++v449;
      v448 += 20;
      v451 += 20;
      if (v449 != (unsigned int)v120) {
        continue;
      }
      break;
    }
    if (v450 > ((((int)v319 * (int)v120) << 16 >> 2) + 0x4000) >> 15) {
      v258[108] = 1;
      v461 = v258 + 112;
      while (1) {
        v462 = v415;
        v463 = nn_codec_FDKsbrEnc_EncodeIcc_plt(0, v415, 0, (unsigned int)v640,
                                                0, v670),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v121 = COERCE_AS(__typeof__(v121),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v260 = COERCE_AS(__typeof__(v260),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v411 = COERCE_AS(__typeof__(v411),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v516 = COERCE_AS(__typeof__(v516),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v520 = COERCE_AS(__typeof__(v520),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v528 = COERCE_AS(__typeof__(v528),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        if (v616[219] > 19) {
          if (v463 <= 0x7FFFFF) {
            goto LABEL_548;
          }
        LABEL_553:
          *v461++ = 1;
          --v417;
          v415 = v462 + 20;
          ++v616[219];
          v418 = v462;
          if (v417 == 0) {
            goto LABEL_557;
          }
        }
        else {
          if (v463 > (int)nn_codec_FDKsbrEnc_EncodeIcc_plt(
                         0, v462, v418, (unsigned int)v640, 1, v670)) {
            goto LABEL_553;
          }
        LABEL_548:
          *v461++ = 0;
          --v417;
          v415 = v462 + 20;
          v616[219] = 0;
          v418 = v462;
          if (v417 == 0) {
            goto LABEL_557;
          }
        }
      }
    }
  }
  else {
    v258[108] = 0;
    v417 = (unsigned int)v120;
  }
  v258[219] = 20;
  v464 = v258 + 112;
  do {
    *v464++ = 0;
    nn_codec_FDKmemclear_plt(v415, (unsigned int)(4 * v319)),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v121 = COERCE_AS(__typeof__(v121),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v260 = COERCE_AS(__typeof__(v260),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v411 = COERCE_AS(__typeof__(v411),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v516 = COERCE_AS(__typeof__(v516),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v520 = COERCE_AS(__typeof__(v520),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v528 = COERCE_AS(__typeof__(v528),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    --v417;
    v415 += 20;
  } while (v417 != 0);
LABEL_557:
  if (v616[217] <= 9 && v616[2] == v616[3] && v616[110] == v616[111] &&
      *v616 == v616[1] && v616[108] == v616[109]) {
    v465 = a2;
    *a2 = 0;
    v466 = v640;
    v467 = v615;
    if (v616[220] > 9) {
      goto LABEL_597;
    }
  }
  else {
    v465 = a2;
    *a2 = 1;
    v616[217] = 0;
    v466 = v640;
    v467 = v615;
    if (v616[220] > 9) {
      goto LABEL_597;
    }
  }
  if (v616[2] != 0) {
    v468 = 3;
  }
  else {
    v468 = 2;
  }
  v469 = v468 * v466 + 3;
  if ((int)(v468 * v466) >= 0) {
    v469 = v468 * v466;
  }
  if ((_DWORD)v120 == 1 && v616[216] == 1) {
    v470 = v469 >> 2;
    v471 = 1;
    v472 = 0;
    v473 = v616;
    do {
      v474 = v473[8] - v473[88];
      if (v474 < 0) {
        v474 = v473[88] - v473[8];
      }
      v472 += v474;
      v476 = v474 <= v468 && v472 <= v470;
      if (v471 >= v467) {
        break;
      }
      ++v471;
      ++v473;
    } while (v476);
    if (v476) {
      v477 = v616 + 116;
      v478 = 1;
      v479 = 0;
      do {
        v480 = *v477 - v477[80];
        if (v480 < 0) {
          v480 = v477[80] - *v477;
        }
        v479 += v480;
        v482 = (unsigned int)v480 < 3 && v479 <= (int)v467 / 2;
        if (v478 >= v467) {
          break;
        }
        ++v478;
        ++v477;
      } while (v482);
      if (v482) {
        v465[7] = 0;
        ++v616[220];
        return 0;
      }
    }
    v616[220] = 0;
  }
  else {
  LABEL_597:
    v616[220] = 0;
    if ((_DWORD)v120 == 0) {
      return 0;
    }
  }
  if ((_DWORD)v466 == 20) {
    v483 = 4;
  }
  else {
    v483 = 3;
  }
  v465[1] = *v616;
  if (v616[2] == 1) {
    v484 = v483;
  }
  else {
    v484 = v466 == 20;
  }
  v465[2] = v484;
  v465[3] = v616[108];
  v485 = v616[110];
  *(_QWORD*)(v465 + 5) = 0;
  v465[7] = v120;
  if (v485 == 1) {
    v486 = v483;
  }
  else {
    v486 = v466 == 20;
  }
  v487 = (unsigned int)(v120 - 1);
  v465[4] = v486;
  if ((int)v120 >= 1) {
    memcpy_plt(v465 + 8, (char*)&v648_.v648 + 4, 4LL * (unsigned int)v120),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v121 = COERCE_AS(__typeof__(v121),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v260 = COERCE_AS(__typeof__(v260),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v411 = COERCE_AS(__typeof__(v411),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v516 = COERCE_AS(__typeof__(v516),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v520 = COERCE_AS(__typeof__(v520),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v528 = COERCE_AS(__typeof__(v528),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v488 = v466 - 1;
    v465[12] = v616[4];
    if (!v633) {
      goto LABEL_619;
    }
    v489 = v466 & 7;
    if (v488 >= 7) {
      v491 = v465 + 23;
      v492 = v616 + 15;
      v493 = 0;
      do {
        v493 -= 8;
        *(v491 - 7) = *(v492 - 7);
        *(v491 - 6) = *(v492 - 6);
        *(v491 - 5) = *(v492 - 5);
        *(v491 - 4) = *(v492 - 4);
        *(v491 - 3) = *(v492 - 3);
        *(v491 - 2) = *(v492 - 2);
        *(v491 - 1) = *(v492 - 1);
        v494 = *v492;
        v492 += 8;
        *v491 = v494;
        v491 += 8;
      } while (-(__int64)((unsigned int)v466 & 0xFFFFFFF8) != v493);
      v490 = -v493;
      if ((v466 & 7) != 0) {
        goto LABEL_617;
      }
    }
    else {
      v490 = 0;
      if ((v466 & 7) == 0) {
        goto LABEL_619;
      }
    LABEL_617:
      v495 = &v465[v490 + 16];
      v496 = &v616[v490 + 8];
      do {
        v497 = *v496++;
        --v489;
        *v495++ = v497;
      } while (v489 != 0);
    }
  LABEL_619:
    if ((_DWORD)v120 != 1) {
      v465[13] = v616[5];
      if (v633) {
        v498 = v466 & 7;
        if (v488 >= 7) {
          v500 = v616 + 35;
          v501 = v465 + 43;
          v502 = 0;
          do {
            v502 -= 8;
            *(v501 - 7) = *(v500 - 7);
            *(v501 - 6) = *(v500 - 6);
            *(v501 - 5) = *(v500 - 5);
            *(v501 - 4) = *(v500 - 4);
            *(v501 - 3) = *(v500 - 3);
            *(v501 - 2) = *(v500 - 2);
            *(v501 - 1) = *(v500 - 1);
            v503 = *v500;
            v500 += 8;
            *v501 = v503;
            v501 += 8;
          } while (-(__int64)((unsigned int)v466 & 0xFFFFFFF8) != v502);
          v499 = -v502;
        }
        else {
          v499 = 0;
        }
        if ((v466 & 7) != 0) {
          v504 = &v465[v499 + 36];
          v505 = &v616[v499 + 28];
          do {
            v506 = *v505++;
            --v498;
            *v504++ = v506;
          } while (v498 != 0);
        }
      }
      if ((_DWORD)v120 != 2) {
        v465[14] = v616[6];
        if (v633) {
          v507 = v466 & 7;
          if (v488 >= 7) {
            v561 = v616 + 55;
            v562 = v465 + 63;
            v563 = 0;
            do {
              v563 -= 8;
              *(v562 - 7) = *(v561 - 7);
              *(v562 - 6) = *(v561 - 6);
              *(v562 - 5) = *(v561 - 5);
              *(v562 - 4) = *(v561 - 4);
              *(v562 - 3) = *(v561 - 3);
              *(v562 - 2) = *(v561 - 2);
              *(v562 - 1) = *(v561 - 1);
              v564 = *v561;
              v561 += 8;
              *v562 = v564;
              v562 += 8;
            } while (-(__int64)((unsigned int)v466 & 0xFFFFFFF8) != v563);
            v508 = -v563;
          }
          else {
            v508 = 0;
          }
          if ((v466 & 7) != 0) {
            v565 = &v465[v508 + 56];
            v566 = &v616[v508 + 48];
            do {
              v567 = *v566++;
              --v507;
              *v565++ = v567;
            } while (v507 != 0);
          }
        }
        if ((_DWORD)v120 != 3) {
          v465[15] = v616[7];
          if (v633) {
            v568 = v466 & 7;
            if (v488 >= 7) {
              v570 = v616 + 75;
              v571 = v465 + 83;
              v572 = 0;
              do {
                v572 -= 8;
                *(v571 - 7) = *(v570 - 7);
                *(v571 - 6) = *(v570 - 6);
                *(v571 - 5) = *(v570 - 5);
                *(v571 - 4) = *(v570 - 4);
                *(v571 - 3) = *(v570 - 3);
                *(v571 - 2) = *(v570 - 2);
                *(v571 - 1) = *(v570 - 1);
                v573 = *v570;
                v570 += 8;
                *v571 = v573;
                v571 += 8;
              } while (-(__int64)((unsigned int)v466 & 0xFFFFFFF8) != v572);
              v569 = -v572;
            }
            else {
              v569 = 0;
            }
            if ((v466 & 7) != 0) {
              v574 = &v465[v569 + 76];
              v575 = &v616[v569 + 68];
              do {
                v576 = *v575++;
                --v568;
                *v574++ = v576;
              } while (v568 != 0);
            }
          }
        }
      }
    }
    v577 = v616 + 116;
    v578 = 0;
    v579 = v465 + 120;
    v580 = v465 + 127;
    v581 = v616 + 123;
    while (2) {
      v465[v578 + 116] = v616[v578 + 112];
      if (v633) {
        if (v488 >= 7) {
          v583 = 0;
          v584 = v581;
          v585 = v580;
          do {
            v583 -= 8;
            *(v585 - 7) = *(v584 - 7);
            *(v585 - 6) = *(v584 - 6);
            *(v585 - 5) = *(v584 - 5);
            *(v585 - 4) = *(v584 - 4);
            *(v585 - 3) = *(v584 - 3);
            *(v585 - 2) = *(v584 - 2);
            *(v585 - 1) = *(v584 - 1);
            v586 = *v584;
            v584 += 8;
            *v585 = v586;
            v585 += 8;
          } while (-(__int64)((unsigned int)v466 & 0xFFFFFFF8) != v583);
          v582 = -v583;
          if ((v466 & 7) != 0) {
            goto LABEL_733;
          }
        }
        else {
          v582 = 0;
          if ((v466 & 7) == 0) {
            goto LABEL_725;
          }
        LABEL_733:
          v587 = &v579[v582];
          v588 = &v577[v582];
          v589 = v466 & 7;
          do {
            v590 = *v588++;
            --v589;
            *v587++ = v590;
          } while (v589 != 0);
        }
      }
    LABEL_725:
      ++v578;
      v580 += 20;
      v581 += 20;
      v579 += 20;
      v577 += 20;
      if (v578 == (unsigned int)v120) {
        break;
      }
      continue;
    }
  }
  nn_codec_FDKmemclear_plt(v465 + 224, 320),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v121 = COERCE_AS(__typeof__(v121),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v260 = COERCE_AS(__typeof__(v260),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v411 = COERCE_AS(__typeof__(v411),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v516 = COERCE_AS(__typeof__(v516),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v520 = COERCE_AS(__typeof__(v520),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v528 = COERCE_AS(__typeof__(v528),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  *((_QWORD*)v465 + 111) = 0;
  *((_QWORD*)v465 + 110) = 0;
  *((_QWORD*)v465 + 162) = 0;
  *((_QWORD*)v465 + 163) = 0;
  nn_codec_FDKmemclear_plt(v465 + 304, 80),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v121 = COERCE_AS(__typeof__(v121),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v260 = COERCE_AS(__typeof__(v260),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v411 = COERCE_AS(__typeof__(v411),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v516 = COERCE_AS(__typeof__(v516),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v520 = COERCE_AS(__typeof__(v520),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v528 = COERCE_AS(__typeof__(v528),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  nn_codec_FDKmemclear_plt(v465 + 408, 80),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v121 = COERCE_AS(__typeof__(v121),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v260 = COERCE_AS(__typeof__(v260),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v411 = COERCE_AS(__typeof__(v411),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v516 = COERCE_AS(__typeof__(v516),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v520 = COERCE_AS(__typeof__(v520),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v528 = COERCE_AS(__typeof__(v528),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v465[96] = v616[88];
  v465[200] = v616[196];
  v465[97] = v616[89];
  v465[201] = v616[197];
  v465[98] = v616[90];
  v465[202] = v616[198];
  v465[99] = v616[91];
  v465[203] = v616[199];
  v465[100] = v616[92];
  v465[204] = v616[200];
  v465[101] = v616[93];
  v465[205] = v616[201];
  v465[102] = v616[94];
  v465[206] = v616[202];
  v465[103] = v616[95];
  v465[207] = v616[203];
  v465[104] = v616[96];
  v465[208] = v616[204];
  v465[105] = v616[97];
  v465[209] = v616[205];
  v465[106] = v616[98];
  v465[210] = v616[206];
  v465[107] = v616[99];
  v465[211] = v616[207];
  v465[108] = v616[100];
  v465[212] = v616[208];
  v465[109] = v616[101];
  v465[213] = v616[209];
  v465[110] = v616[102];
  v465[214] = v616[210];
  v465[111] = v616[103];
  v465[215] = v616[211];
  v465[112] = v616[104];
  v465[216] = v616[212];
  v465[113] = v616[105];
  v465[217] = v616[213];
  v465[114] = v616[106];
  v465[218] = v616[214];
  v465[115] = v616[107];
  v465[219] = v616[215];
  v616[216] = v120;
  v616[1] = *v616;
  v616[109] = v616[108];
  v616[3] = v616[2];
  v616[111] = v616[110];
  if (!v633) {
    return 0;
  }
  if ((unsigned int)(v466 - 1) >= 7) {
    v592 = 0;
    v593 = v616;
    v594 = 20 * v487;
    do {
      v592 -= 8;
      v595 = v593[v594 + 9];
      v593[88] = v593[v594 + 8];
      v596 = v593[v594 + 116];
      v593[89] = v595;
      v597 = *(_QWORD*)&v593[v594 + 10];
      v593[196] = v596;
      v598 = v593[v594 + 117];
      *((_QWORD*)v593 + 45) = v597;
      v593[197] = v598;
      *((_QWORD*)v593 + 99) = *(_QWORD*)&v593[v594 + 118];
      LODWORD(v597) = v593[v594 + 13];
      v593[92] = v593[v594 + 12];
      v599 = v593[v594 + 120];
      v593[93] = v597;
      v593[200] = v599;
      v593[201] = v593[v594 + 121];
      LODWORD(v597) = v593[v594 + 15];
      v593[94] = v593[v594 + 14];
      v600 = v593[v594 + 122];
      v601 = v593[v594 + 123];
      v593[95] = v597;
      v593[202] = v600;
      v593[203] = v601;
      v593 += 8;
    } while (-(v466 & 0x7FFFFFF8) != v592);
    v591 = -v592;
    if ((v466 & 7) != 0) {
      goto LABEL_743;
    }
  }
  else {
    v591 = 0;
    if ((v466 & 7) == 0) {
      return 0;
    }
  LABEL_743:
    v602 = v591;
    v603 = &v616[v591];
    v604 = 0;
    v605 = &v616[20 * (unsigned int)v487 + v602];
    do {
      v606 = &v605[v604];
      v607 = &v603[v604++];
      v607[88] = v606[8];
      v607[196] = v606[116];
    } while ((v466 & 7) != v604);
  }
  return 0;
}

#pragma GCC visibility pop
