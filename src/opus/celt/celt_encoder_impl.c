#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
extern _UNKNOWN* SdkData_e877b8;
__int16* celt_encoder_2d4920(__int16* result, void* this_, int a3,
                             unsigned __int64 a4, int a5, __int16* a6, int* a7,
                             int a8);
__int64 celt_encoder_2dac20(__int64 a1, __int64 a2, int a3, unsigned __int64 a4,
                            unsigned int a5, int a6, void* a7, __int16 a8,
                            __int64 a9, int a10, int a11, int a12, __int64 a13,
                            int a14, int a15, int* a16, int a17, __int64 a18,
                            _DWORD* a19, __int64 a20, __int64 a21);

__int16* celt_encoder_2d4920(__int16* result, void* this_, int a3,
                             unsigned __int64 a4, int a5, __int16* a6, int* a7,
                             int a8)
{
  int v8;
  int v9;
  int v11;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  void* v17;
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
  void* v38;
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
  v11 = a4;
  if (a8 != 0 || a5 != 1 || a6[1] != 0) {
    v15 = a3 / a5;
    if (a5 != 1) {
      v16 = (__int64)result;
      v17 = this_;
      v18 = a7;
      memset_plt(this_, nullptr, 4 * a3, a4);
      result = (__int16*)v16;
      this_ = v17;
      a7 = v18;
    }
    if (v15 >= 1) {
      v19 = v15 & 7;
      v20 = a5;
      v21 = v11;
      if ((unsigned int)v15 >= 8) {
        v22 = 0;
        v37 = result;
        v38 = this_;
        do {
          v39 = (_DWORD*)((char*)v38 + 4 * a5);
          v22 += 8;
          *(_DWORD*)v38 = *v37;
          v40 = &v37[v11];
          v38 = (void*)((char*)v38 + 32 * a5);
          v37 += 8 * v11;
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
          LODWORD(v54) = v54[v11];
          v56 = &v53[v20];
          *v56 = v55;
          v56[a5] = (_DWORD)v54;
        } while ((v15 & 0x7FFFFFF8) != v22);
      }
      else {
        v22 = 0;
      }
      if ((v15 & 7) != 0) {
        v57 = (_DWORD*)((char*)this_ + 4 * v22 * a5);
        v58 = &result[v22 * v11];
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
        v62 = (int*)((char*)this_ + 8);
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
      v68 = (_DWORD*)((char*)this_ + 4 * v61);
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
    v25 = (int*)((char*)this_ + 8);
    do {
      v26 = *v24;
      v27 = v24[v11];
      v28 = v24[2 * v11];
      v23 -= 4;
      v29 = v26 << 12;
      v30 = (v27 << 12) - ((v26 * v8) >> 3);
      v31 = (v28 << 12) - ((v27 * v8) >> 3);
      *(v25 - 2) = v29 - v9;
      *(v25 - 1) = v30;
      v32 = v28 * v8;
      v33 = v24[3 * v11];
      v24 += 4 * v11;
      *v25 = v31;
      v25[1] = (v33 << 12) - (v32 >> 3);
      v25 += 4;
      v9 = (v33 * v8) >> 3;
    } while (-(__int64)(a3 & 0x7FFFFFFC) != v23);
    v14 = -v23;
    if (v13 != 0) {
    LABEL_16:
      v34 = (_DWORD*)((char*)this_ + 4 * v14);
      v35 = &result[v14 * v11];
      do {
        v36 = *v35;
        v35 += v11;
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

__int64 celt_encoder_2dac20(__int64 a1, __int64 a2, int a3, unsigned __int64 a4,
                            unsigned int a5, int a6, void* a7, __int16 a8,
                            __int64 a9, int a10, int a11, int a12, __int64 a13,
                            int a14, int a15, int* a16, int a17, __int64 a18,
                            _DWORD* a19, __int64 a20, __int64 a21)
{
  __int64 v23;
  __int64 v25;
  void* v26;
  void* v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  __int16 v34;
  __int64 v35;
  __int64 v36;
  unsigned int v37;
  void* v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  _WORD* v47;
  _WORD* v48;
  int v49;
  char* v50;
  __int16 v51;
  __int16 v52;
  __int16 v53;
  __int16 v54;
  __int16 v55;
  __int16 v56;
  __int16 v57;
  __int16 v58;
  __int16 v59;
  int v60;
  __int64 v61;
  __int16 v62;
  __int16 v63;
  __int16 v64;
  __int16* v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int16* v71;
  __int16* v72;
  __int16 v73;
  int v74;
  int v75;
  int v76;
  signed int v77;
  __int16* v78;
  __int16* v79;
  __int64 v80;
  int v81;
  int v82;
  int v83;
  signed int v84;
  _WORD* v85;
  __int16* v86;
  __int16* v87;
  __int64 v88;
  __int16 v89;
  __int16 v90;
  __int16 v91;
  __int16 v92;
  __int16 v93;
  __int16 v94;
  __int16 v95;
  __int16 v96;
  __int16 v97;
  __int16 v98;
  __int16 v99;
  __int16 v100;
  __int16 v101;
  _WORD* v102;
  __int16* v103;
  __int16* v104;
  __int16 v105;
  __int16 v106;
  __int16 v107;
  __int64 v108;
  __int64 v109;
  __int16* v110;
  __int16* v111;
  __int64 v112;
  __int16* v113;
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
  __int64 v126;
  __int16* v127;
  __int16* v128;
  __int16* v129;
  int v130;
  int v131;
  int v132;
  int v133;
  int v134;
  int v135;
  int v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  unsigned __int64 v140;
  __int16* v141;
  int v142;
  int v143;
  int v144;
  int v145;
  int v146;
  int v147;
  int v148;
  int v149;
  int v150;
  int v151;
  int v152;
  int v153;
  int v154;
  int v155;
  __int16* v156;
  int v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int16* v162;
  int v163;
  int v164;
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
  __int64 v178;
  int v179;
  __int16* v180;
  unsigned int* v181;
  __int16* v182;
  int v183;
  int v184;
  __int16 v185;
  __int16 v186;
  int v187;
  int v188;
  unsigned int v189;
  int v190;
  __int64 v191;
  __int64 v192;
  int v193;
  __int64 v194;
  __int16* v195;
  __int16* v196;
  __int64 v197;
  unsigned __int64 v198;
  __int64 v199;
  void* v200;
  __int64 v201;
  _WORD* v202;
  unsigned __int64 v203;
  __int64 v204;
  __int64 v205;
  __int16* v206;
  int v207;
  __int16 v208;
  __int64 v209;
  unsigned __int64 v210;
  __int64 v211;
  int v212;
  int v213;
  unsigned __int64 v214;
  int v215;
  unsigned __int64 v216;
  int v217;
  int v218;
  int v219;
  int v220;
  int v221;
  int v222;
  int v223;
  int v224;
  int v225;
  int v226;
  int v227;
  unsigned __int64 v228;
  int v229;
  int v230;
  __int64 v231;
  __int16* v232;
  int v233;
  int v234;
  int v235;
  unsigned __int64 v236;
  unsigned __int64 v237;
  __int64 v238;
  unsigned __int64 v239;
  __int64 v240;
  unsigned __int64 v241;
  __int64 v242;
  void* v243;
  char* v244;
  int v245;
  int v246;
  __int64 v247;
  int v248;
  int v249;
  int v250;
  int v251;
  int v252;
  int v253;
  int v254;
  int v255;
  int v256;
  int v257;
  int v258;
  int v259;
  int v260;
  int v261;
  int v262;
  int v263;
  int v264;
  int v265;
  int v266;
  int v267;
  __int64 v268;
  __int64 v269;
  __int64 v270;
  __int64 v271;
  char* v272;
  int v273;
  int v274;
  int v275;
  int v276;
  int v277;
  int v278;
  int v279;
  int v280;
  int v281;
  int v282;
  bool v283;
  __int16 v284;
  __int16 v285;
  int v286;
  __int16 v287;
  __int16 v288;
  int v289;
  __int16 v290;
  __int16 v291;
  int v292;
  int v293;
  int v294;
  int v295;
  int v296;
  int v297;
  int v298;
  __int16 v299;
  int v300;
  __int16 v301;
  int v302;
  __int16 v303;
  __int16 v304;
  __int16 v305;
  __int16 v306;
  __int16* v307;
  int v308;
  int v309;
  int v310;
  int v311;
  int v312;
  int v313;
  int v314;
  int v315;
  bool v316;
  int v317;
  __int16 v318;
  int v319;
  int v320;
  int v321;
  int v322;
  int v323;
  __int16 v324;
  int v325;
  int v326;
  int v327;
  int v328;
  int v329;
  int v330;
  void* v331;
  __int64 v332;
  int v333;
  int v334;
  int v335;
  int v336;
  __int16 v337;
  __int16 v338;
  int v339;
  int v340;
  __int16* v341;
  __int64 v342;
  __int16* v343;
  __int64 v344;
  __int16* v345;
  int v346;
  int v347;
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
  __int64 v361;
  __int64 i;
  int v363;
  __int64 v364;
  __int64 v365;
  __int64 v366;
  __int64 v367;
  int v368;
  int v369;
  __int64 v370;
  int v371;
  int v372;
  __int64 v373;
  __int64 v374;
  __int64 v375;
  int v376;
  int v377;
  int v378;
  __int64 v379;
  __int64 v380;
  __int16* v381;
  __int16* v382;
  __int16* v383;
  __int16* v384;
  int v385;
  int v386;
  int v387;
  unsigned int v388;
  int v389;
  int v390;
  int v391;
  int v392;
  int v393;
  int v394;
  int v395;
  int v396;
  __int64 v397;
  __int64 v398;
  __int64 v399;
  __int64 v400;
  __int64 v401;
  _QWORD* v402;
  __int64 v403;
  __int64 v404;
  __int16* v405;
  __int16* v406;
  int v407;
  int v408;
  int v409;
  int v410;
  int v411;
  int v412;
  int v413;
  int v414;
  int v415;
  int v416;
  int v417;
  int v418;
  int v419;
  int v420;
  __int64 v421;
  __int64 v422;
  __int64 v423;
  __int64 v424;
  int v425;
  __int64 v426;
  __int64 v427;
  __int16* v428;
  __int16* v429;
  int v430;
  int v431;
  int v432;
  int v433;
  int v434;
  int v435;
  int v436;
  int v437;
  int v438;
  int v439;
  int v440;
  int v441;
  int v442;
  int v443;
  int v444;
  __int16* v445;
  __int64 v446;
  unsigned int* v447;
  unsigned int v448;
  int v449;
  int v450;
  int v451;
  int v452;
  int v453;
  char v454;
  unsigned int v455;
  int v456;
  _DWORD* v457;
  bool v458;
  __int64 v459;
  __int64 v460;
  __int64 v461;
  __int64 v462;
  __int16* v463;
  __int64 v464;
  __int64 v465;
  __int64 v466;
  unsigned int v467;
  int v468;
  __int64 v469;
  __int64 v470;
  __int64 v471;
  __int64 v472;
  __int16 v473;
  __int16* v474;
  unsigned int v475;
  unsigned int v476;
  unsigned int v477;
  unsigned int v478;
  __int64 v479;
  unsigned __int8* v480;
  __int16* v481;
  __int16 v482;
  __int16 v483;
  __int16 v484;
  __int16 v485;
  __int16 v486;
  __int16 v487;
  __int16 v488;
  __int16 v489;
  __int16 v490;
  __int16 v491;
  __int16 v492;
  __int16 v493;
  __int16 v494;
  __int16 v495;
  __int16 v496;
  char v497;
  int v498;
  bool v499;
  __int64 v500;
  __int16* v501;
  __int64 v502;
  bool v503;
  __int64 v504;
  char v505;
  __int16* v506;
  unsigned __int64 v507;
  int* v508;
  int v509;
  int v510;
  unsigned int v511;
  int v512;
  int v513;
  char v514;
  char v515;
  char v516;
  struct {
    __int64 v518;
    __int64 v519;
    char gap16_[4];
    int v520;
    __int64 v521;
    _DWORD* v522;
    char gap40_[4];
    int v523;
    int v524;
    int v525;
    void* v526;
    char gap64_[4];
    _BOOL4 v527;
    int* v528;
    unsigned __int64 v529;
    char gap88_[4];
    int v530;
    __int64 v531;
    char gap104_[4];
    int v532;
    __int64 v533;
    __int64 v534;
    void* v535;
    char gap136_[4];
    int v536;
    __int16* v537;
    __int64 v538;
    __int64 v539;
    __int64 v540;
    __int64 v541;
    char gap184_[4];
    unsigned int v542;
    __int64 v543;
    __int64 v544;
    __int64 v545;
    __int64 v546;
    __int64 v547;
    __int64 v548;
    char gap240_[4];
    int v549;
    __int64 v550;
    __int16* v551;
    _WORD* v552;
    void* v553;
  } v518_;

  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v23 = a5;
  v518_.v529 = a4;
  v518_.v540 = a2;
  v518_.v531 = a1;
  v25 = 2LL * a6 * a3;
  v518_.v532 = a6;
  v26 = (void*)((char*)&v518_.v518 - ((v25 + 15) & 0xFFFFFFFFFFFFFFF0LL));
  v27 = v26;
  memset_plt(v26, nullptr, 2 * a6 * a3, a4),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v28 = a3;
  v518_.v526 = a7;
  memset_plt(a7, nullptr, 4 * a3, v29),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v31 = 2LL * a3;
  if ((int)v23 >= 1) {
    v32 = v23 & 3;
    v33 = (char*)SdkData_e877b8;
    v34 = (9216 - (a8 << 10)) & 0xFC00 | 0x200;
    if ((unsigned int)v23 >= 4) {
      v35 = v518_.v531;
      v47 = (_WORD*)(a9 + 4);
      v48 = (_WORD*)((char*)v26 + 4);
      v49 = 48;
      v36 = 0;
      do {
        v50 = &v33[v36];
        v51 = v34 + (v49 - 12) * (v36 + 6) + (*(v47 - 1) << 6);
        v52 = v34 + (v49 - 6) * (v36 + 7) + (*v47 << 6);
        v53 = v33[v36 + 1];
        *(v48 - 2) =
            v34 + (v49 - 18) * (v36 + 5) + (*(v47 - 2) << 6) - (v33[v36] << 6);
        v54 = v36 + 8;
        v36 += 4;
        v55 = v34 + v49 * v54;
        v49 += 24;
        v56 = v51 - (v53 << 6);
        v57 = v50[2];
        v30 = (unsigned int)v50[3];
        *(v48 - 1) = v56;
        v58 = v52 - (v57 << 6);
        v59 = v47[1];
        v47 += 4;
        *v48 = v58;
        v48[1] = v55 + (v59 << 6) - ((_WORD)v30 << 6);
        v48 += 4;
      } while ((v23 & 0x7FFFFFFC) != v36);
    }
    else {
      v35 = v518_.v531;
      v36 = 0;
    }
    if ((v23 & 3) != 0) {
      v60 = 6 * v36 + 30;
      do {
        v61 = 2 * v36;
        v62 = v36 + 5;
        v63 = v33[v36++];
        --v32;
        v64 = v34 + v60 * v62;
        v60 += 6;
        *(_WORD*)((char*)v26 + v61) =
            v64 + (*(_WORD*)(a9 + v61) << 6) - (v63 << 6);
      } while (v32 != 0);
    }
    v65 = (__int16*)(v35 + 8);
    v66 = 0;
    v67 = v35;
    v37 = -32666;
    if (v518_.v532 <= 1) {
      v68 = 1;
    }
    else {
      v68 = (unsigned int)v518_.v532;
    }
    while ((unsigned int)v23 < 8) {
      v69 = 0;
      if ((v23 & 7) != 0) {
        goto LABEL_43;
      }
    LABEL_19:
      ++v66;
      v65 = (__int16*)((char*)v65 + v31);
      v67 += v31;
      if (v66 == v68) {
        goto LABEL_5;
      }
    }
    v70 = 0;
    v71 = v65;
    v72 = (__int16*)((char*)v26 + 8);
    do {
      v73 = v37;
      v70 -= 8;
      if (*(v71 - 4) - *(v72 - 4) > (__int16)v37) {
        v73 = *(v71 - 4) - *(v72 - 4);
      }
      if (*(v71 - 3) - *(v72 - 3) > v73) {
        v73 = *(v71 - 3) - *(v72 - 3);
      }
      if (*(v71 - 2) - *(v72 - 2) > v73) {
        v73 = *(v71 - 2) - *(v72 - 2);
      }
      if (*(v71 - 1) - *(v72 - 1) > v73) {
        v73 = *(v71 - 1) - *(v72 - 1);
      }
      if (*v71 - *v72 > v73) {
        v73 = *v71 - *v72;
      }
      if (v71[1] - v72[1] > v73) {
        v73 = v71[1] - v72[1];
      }
      v74 = v71[2] - v72[2];
      v75 = v72[3];
      v72 += 8;
      if (v74 > v73) {
        v73 = v74;
      }
      v76 = v71[3];
      v71 += 8;
      v77 = v76 - v75;
      if (v77 <= v73) {
        v37 = v73;
      }
      else {
        v37 = v77;
      }
    } while (-(v23 & 0x7FFFFFF8) != v70);
    v69 = -v70;
    if ((v23 & 7) == 0) {
      goto LABEL_19;
    }
  LABEL_43:
    v78 = (__int16*)((char*)v26 + 2 * v69);
    v79 = (__int16*)(v67 + 2 * v69);
    v80 = v23 & 7;
    do {
      v82 = *v79++;
      v81 = v82;
      v83 = *v78++;
      v84 = v81 - v83;
      if (v84 <= (__int16)v37) {
        v37 = (__int16)v37;
      }
      else {
        v37 = v84;
      }
      --v80;
    } while (v80 != 0);
    goto LABEL_19;
  }
  v37 = 32870;
LABEL_5:
  v518_.v528 = a16;
  v518_.v530 = a14;
  v38 = (void*)((char*)&v518_.v518 - ((v31 + 15) & 0xFFFFFFFFFFFFFFF0LL));
  memset_plt(v38, nullptr, 2 * v28, v30),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v518_.v538 = 2 * v28;
  memset_plt(v38, nullptr, 2 * v28, v39),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if ((int)v23 >= 1) {
    v40 = v518_.v531;
    v41 = v23 & 7;
    if ((unsigned int)v23 >= 8) {
      v85 = (_WORD*)((char*)v38 + 8);
      v86 = (__int16*)((char*)v26 + 8);
      v87 = (__int16*)(v518_.v531 + 8);
      v88 = 0;
      do {
        v88 -= 8;
        v89 = *v87;
        v90 = *(v87 - 3) - *(v86 - 3);
        v91 = *v86;
        v92 = *(v87 - 2) - *(v86 - 2);
        v93 = v87[1];
        v94 = *(v87 - 1) - *(v86 - 1);
        v95 = v86[1];
        *(v85 - 4) = *(v87 - 4) - *(v86 - 4);
        *(v85 - 3) = v90;
        v96 = v87[3];
        v97 = v86[3];
        *(v85 - 2) = v92;
        *(v85 - 1) = v94;
        v98 = v89 - v91;
        v99 = v87[2];
        v100 = v93 - v95;
        v101 = v86[2];
        v86 += 8;
        v87 += 8;
        *v85 = v98;
        v85[1] = v100;
        v85[3] = v96 - v97;
        v85[2] = v99 - v101;
        v85 += 8;
      } while (-(v23 & 0x7FFFFFF8) != v88);
      v42 = -v88;
      if ((v23 & 7) == 0) {
      LABEL_54:
        v518_.v527 = v518_.v532 == 2;
        if (v518_.v532 != 2) {
          goto LABEL_73;
        }
        v108 = v23 & 3;
        if ((unsigned int)v23 >= 4) {
          v110 = (__int16*)((char*)v26 + 4);
          v111 = (__int16*)((char*)v38 + 4);
          v112 = 0;
          v113 = (__int16*)(v40 + 2 * v28 + 4);
          do {
            v114 = *(v111 - 2);
            v112 -= 4;
            v115 = *(v110 - 1);
            v116 = *v110;
            if (*(v113 - 2) - *(v110 - 2) > v114) {
              LOWORD(v114) = *(v113 - 2) - *(v110 - 2);
            }
            v117 = *(v113 - 1);
            *(v111 - 2) = v114;
            v118 = *(v111 - 1);
            v119 = v117 - v115;
            v120 = *v113;
            if (v119 > v118) {
              LOWORD(v118) = v119;
            }
            v121 = *v111;
            *(v111 - 1) = v118;
            v122 = v120 - v116;
            v123 = v110[1];
            v110 += 4;
            if (v122 > v121) {
              LOWORD(v121) = v122;
            }
            v124 = v113[1];
            v113 += 4;
            *v111 = v121;
            v125 = v124 - v123;
            if (v125 <= v111[1]) {
              LOWORD(v125) = v111[1];
            }
            v111[1] = v125;
            v111 += 4;
          } while (-(v23 & 0x7FFFFFFC) != v112);
          v109 = -v112;
          if ((v23 & 3) == 0) {
          LABEL_73:
            v518_.v553 = v38;
            memcpy_plt(v38, v38, 2LL * (unsigned int)v23),
                v29 =
                    COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v30 =
                    COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v39 =
                    COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
            v44 = (_DWORD)v23 != 1;
            if ((_DWORD)v23 == 1) {
              v136 = v518_.v530;
              v43 = 0xFFFFFFFFLL;
              v138 = 0;
            }
            else {
              LOWORD(v135) = *(_WORD*)v38;
              v136 = v518_.v530;
              v137 = ((_BYTE)v23 - 1) & 7;
              v43 = (unsigned int)(v23 - 2);
              v138 = (unsigned int)v23 - 1LL;
              if ((unsigned int)v43 >= 7) {
                v140 = ((unsigned int)v23 - 1LL) & 0xFFFFFFFFFFFFFFF8LL;
                v141 = (__int16*)((char*)v38 + 8);
                v139 = 1;
                do {
                  v139 += 8;
                  v142 = (__int16)v135 - 2048;
                  if (v142 <= *(v141 - 3)) {
                    LOWORD(v142) = *(v141 - 3);
                  }
                  v143 = *(v141 - 2);
                  *(v141 - 3) = v142;
                  v144 = (__int16)v142 - 2048;
                  if (v144 <= v143) {
                    LOWORD(v144) = v143;
                  }
                  v145 = *(v141 - 1);
                  *(v141 - 2) = v144;
                  v146 = (__int16)v144 - 2048;
                  if (v146 <= v145) {
                    LOWORD(v146) = v145;
                  }
                  v147 = *v141;
                  *(v141 - 1) = v146;
                  v148 = (__int16)v146 - 2048;
                  if (v148 <= v147) {
                    LOWORD(v148) = v147;
                  }
                  v149 = v141[1];
                  *v141 = v148;
                  v150 = (__int16)v148 - 2048;
                  if (v150 <= v149) {
                    LOWORD(v150) = v149;
                  }
                  v151 = v141[2];
                  v141[1] = v150;
                  v152 = (__int16)v150 - 2048;
                  if (v152 <= v151) {
                    LOWORD(v152) = v151;
                  }
                  v153 = v141[3];
                  v141[2] = v152;
                  v154 = (__int16)v152 - 2048;
                  if (v154 <= v153) {
                    LOWORD(v154) = v153;
                  }
                  v155 = v141[4];
                  v141[3] = v154;
                  v135 = (__int16)v154 - 2048;
                  if (v135 <= v155) {
                    LOWORD(v135) = v155;
                  }
                  v140 -= 8LL;
                  v141[4] = v135;
                  v141 += 8;
                } while (v140 != 0);
              }
              else {
                v139 = 1;
              }
              if ((((_BYTE)v23 - 1) & 7) != 0) {
                v156 = (__int16*)((char*)v38 + 2 * v139);
                do {
                  if ((__int16)v135 - 2048 <= *v156) {
                    LOWORD(v135) = *v156;
                  }
                  else {
                    LOWORD(v135) = v135 - 2048;
                  }
                  --v137;
                  *v156++ = v135;
                } while (v137 != 0);
              }
              LOWORD(v157) = *((_WORD*)v38 + (unsigned int)v43 + 1);
              if ((~((_BYTE)v23 - 2) & 7) != 0) {
                v159 = ((_BYTE)v23 - 1) & 7;
                v158 = (unsigned int)(v23 - 2);
                do {
                  v160 = 2 * v158--;
                  v157 = (__int16)v157 - 3072;
                  if (v157 <= *(__int16*)((char*)v38 + v160)) {
                    LOWORD(v157) = *(_WORD*)((char*)v38 + v160);
                  }
                  --v159;
                  *(_WORD*)((char*)v38 + v160) = v157;
                } while (v159 != 0);
              }
              else {
                v158 = (unsigned int)(v23 - 2);
              }
              if ((unsigned int)v43 >= 7) {
                v161 = v158 + 1;
                v162 = (__int16*)((char*)v38 + 2 * v158 - 6);
                do {
                  v161 -= 8;
                  v163 = (__int16)v157 - 3072;
                  if (v163 <= v162[3]) {
                    LOWORD(v163) = v162[3];
                  }
                  v164 = v162[2];
                  v162[3] = v163;
                  v165 = (__int16)v163 - 3072;
                  if (v165 <= v164) {
                    LOWORD(v165) = v164;
                  }
                  v166 = v162[1];
                  v162[2] = v165;
                  v167 = (__int16)v165 - 3072;
                  if (v167 <= v166) {
                    LOWORD(v167) = v166;
                  }
                  v168 = *v162;
                  v162[1] = v167;
                  v169 = (__int16)v167 - 3072;
                  if (v169 <= v168) {
                    LOWORD(v169) = v168;
                  }
                  v170 = *(v162 - 1);
                  *v162 = v169;
                  v171 = (__int16)v169 - 3072;
                  if (v171 <= v170) {
                    LOWORD(v171) = v170;
                  }
                  v172 = *(v162 - 2);
                  *(v162 - 1) = v171;
                  v173 = (__int16)v171 - 3072;
                  if (v173 <= v172) {
                    LOWORD(v173) = v172;
                  }
                  v174 = *(v162 - 3);
                  *(v162 - 2) = v173;
                  v175 = (__int16)v173 - 3072;
                  if (v175 <= v174) {
                    LOWORD(v175) = v174;
                  }
                  v176 = *(v162 - 4);
                  *(v162 - 3) = v175;
                  v157 = (__int16)v175 - 3072;
                  if (v157 <= v176) {
                    LOWORD(v157) = v176;
                  }
                  *(v162 - 4) = v157;
                  v162 -= 8;
                } while (v161 != 0);
              }
            }
            v177 = (__int16)v37;
            if ((__int16)v37 <= 12288) {
              v177 = 12288;
            }
            v178 = 0;
            v179 = v177 - 12288;
            if (v138 != 0) {
              v180 = (__int16*)((char*)v38 + 2);
              v181 = (unsigned int*)(a21 + 4);
              v182 = (__int16*)((char*)v518_.v553 + 2);
              do {
                v183 = *(v180 - 1);
                v184 = *v180;
                v178 -= 2;
                v180 += 2;
                if (v179 > v183) {
                  LOWORD(v183) = v179;
                }
                LOWORD(v187) = *(v182 - 1) - v183;
                v186 = *v182;
                v182 += 2;
                v185 = v186;
                v187 = (__int16)v187;
                if ((__int16)v187 <= -5120) {
                  v187 = -5120;
                }
                if (v179 > v184) {
                  LOWORD(v184) = v179;
                }
                v188 = (__int16)(v185 - v184);
                v189 = (__int16)((v187 & (v187 >> 31)) + 512);
                if (v188 <= -5120) {
                  v188 = -5120;
                }
                *(v181 - 1) = 0x20u >> (-(v189 >> 10) & 31);
                *v181 =
                    0x20u >>
                    -((unsigned int)(__int16)((v188 & (v188 >> 31)) + 512) >>
                      10);
                v181 += 2;
              } while (-(v23 & 0x7FFFFFFE) != v178);
              v178 = -v178;
            }
            if ((v23 & 1) != 0) {
              if (v179 <= *((__int16*)v38 + v178)) {
                LOWORD(v179) = *((_WORD*)v38 + v178);
              }
              v190 = (__int16)(*((_WORD*)v518_.v553 + v178) - v179);
              if (v190 <= -5120) {
                v190 = -5120;
              }
              *(_DWORD*)(a21 + 4 * v178) =
                  0x20u >>
                  -((unsigned int)(__int16)((v190 & (v190 >> 31)) + 512) >> 10);
            }
            v45 = v518_.v540;
            v46 = a20;
            v518_.v539 = (unsigned int)v23;
            if (v136 < 1) {
              goto LABEL_467;
            }
            goto LABEL_147;
          }
        }
        else {
          v109 = 0;
          if ((v23 & 3) == 0) {
            goto LABEL_73;
          }
        }
        v126 = 2 * v109;
        v127 = (__int16*)((char*)v26 + 2 * v109);
        v128 = (__int16*)((char*)v38 + 2 * v109);
        v129 = (__int16*)(v40 + v126 + 2 * v28);
        do {
          v131 = *v129++;
          v130 = v131;
          v132 = *v127++;
          v133 = *v128;
          v134 = v130 - v132;
          if (v134 > v133) {
            LOWORD(v133) = v134;
          }
          --v108;
          *v128++ = v133;
        } while (v108 != 0);
        goto LABEL_73;
      }
    }
    else {
      v42 = 0;
      if ((v23 & 7) == 0) {
        goto LABEL_54;
      }
    }
    v102 = (_WORD*)((char*)v38 + 2 * v42);
    v103 = (__int16*)((char*)v26 + 2 * v42);
    v104 = (__int16*)(v40 + 2 * v42);
    do {
      v106 = *v104++;
      v105 = v106;
      v107 = *v103++;
      --v41;
      *v102++ = v105 - v107;
    } while (v41 != 0);
    goto LABEL_54;
  }
  v43 = (unsigned int)(v23 - 2);
  v44 = 0;
  v518_.v527 = v518_.v532 == 2;
  v45 = v518_.v540;
  v46 = a20;
  v518_.v539 = (int)v23;
  if (v518_.v530 < 1) {
    goto LABEL_467;
  }
LABEL_147:
  if (a15 >= 51 && a17 == 0) {
    v518_.v536 = v44;
    v518_.v519 = v46;
    v518_.v520 = a15;
    v518_.v522 = a19;
    v518_.v518 = a18;
    v518_.v523 = a10;
    v518_.v521 = a13;
    v518_.v524 = a12;
    v518_.v525 = a11;
    memset_plt(v26, nullptr, v25, v44),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    v191 = v518_.v538;
    v192 = v518_.v539;
    v193 = v518_.v536;
    v194 = v23 & 7;
    v195 = (__int16*)(v45 + 16);
    v196 = (__int16*)((char*)v26 + 8);
    v197 = 0;
    v518_.v542 = v23 - 2;
    v198 = 0;
    v199 = v45;
    v200 = (void*)((char*)&v518_.v518 - ((v25 + 15) & 0xFFFFFFFFFFFFFFF0LL));
    v518_.v545 = v43;
    v518_.v541 = v194;
    v518_.v534 = v23;
    v518_.v535 = v200;
    v518_.v533 = v28;
    if (v518_.v532 <= 1) {
      v201 = 1;
    }
    else {
      v201 = (unsigned int)v518_.v532;
    }
    v518_.v548 = v45 + 2 * v518_.v539;
    v202 = (_WORD*)((char*)v26 + 16);
    v518_.v543 = (unsigned int)v43;
    v518_.v544 = v201;
    v203 = ((unsigned int)v23 - 1LL) & 0xFFFFFFFFFFFFFFF8LL;
    v204 = -(__int64)((unsigned int)v43 & 0xFFFFFFFE);
    v518_.v546 = ((_BYTE)v23 - 1) & 7;
    v518_.v547 = 2LL * (int)v43;
    v205 = -(v23 & 0x7FFFFFF8);
    v518_.v537 = (__int16*)((char*)v26 + 8);
    while (1) {
      v206 = (__int16*)((char*)v26 + 2 * v197 * v28);
      v518_.v552 = v202;
      v518_.v553 = (void*)(v197 * v28);
      v207 = *(unsigned __int16*)(v45 + 2 * v197 * v28);
      v518_.v550 = v45 + 2 * v197 * v28;
      v518_.v551 = v195;
      *v206 = v207;
      v518_.v549 = v207;
      if (v193 == 0) {
        goto LABEL_204;
      }
      v208 = *(_WORD*)((char*)v26 + v191 * v197);
      if (v518_.v542 < 7) {
        break;
      }
      v211 = 0;
      do {
        v212 = *(v195 - 7);
        v213 = *(v195 - 6);
        if (*(v195 - 8) + 512 >= v212) {
          v214 = v198;
        }
        else {
          v214 = (unsigned int)(v211 + 1);
        }
        v215 = v208 + 1536;
        if (v215 >= v212) {
          LOWORD(v215) = *(v195 - 7);
        }
        *(v202 - 7) = v215;
        if (v212 + 512 >= v213) {
          v216 = v214;
        }
        else {
          v216 = (unsigned int)(v211 + 2);
        }
        v217 = (__int16)v215;
        v218 = *(v195 - 5);
        v219 = v217 + 1536;
        if (v219 >= v213) {
          LOWORD(v219) = v213;
        }
        *(v202 - 6) = v219;
        v283 = v213 + 512 < v218;
        v220 = *(v195 - 4);
        v221 = (__int16)v219 + 1536;
        if (v283) {
          v216 = (unsigned int)(v211 + 3);
        }
        if (v221 >= v218) {
          LOWORD(v221) = v218;
        }
        *(v202 - 5) = v221;
        v283 = v218 + 512 < v220;
        v222 = *(v195 - 3);
        v223 = (__int16)v221 + 1536;
        if (v283) {
          v216 = (unsigned int)(v211 + 4);
        }
        if (v223 >= v220) {
          LOWORD(v223) = v220;
        }
        *(v202 - 4) = v223;
        v283 = v220 + 512 < v222;
        v224 = *(v195 - 2);
        v225 = (__int16)v223 + 1536;
        if (v283) {
          v216 = (unsigned int)(v211 + 5);
        }
        if (v225 >= v222) {
          LOWORD(v225) = v222;
        }
        *(v202 - 3) = v225;
        v283 = v222 + 512 < v224;
        v226 = *(v195 - 1);
        v227 = (__int16)v225 + 1536;
        if (v283) {
          v216 = (unsigned int)(v211 + 6);
        }
        v228 = (unsigned int)(v211 + 7);
        v211 += 8;
        if (v227 >= v224) {
          LOWORD(v227) = v224;
        }
        *(v202 - 2) = v227;
        v283 = v224 + 512 < v226;
        v229 = *v195;
        v195 += 8;
        v230 = (__int16)v227 + 1536;
        if (v283) {
          v216 = v228;
        }
        if (v230 >= v226) {
          LOWORD(v230) = v226;
        }
        *(v202 - 1) = v230;
        if (v226 + 512 >= v229) {
          v198 = v216;
        }
        else {
          v198 = (unsigned int)v211;
        }
        if ((__int16)v230 + 1536 >= v229) {
          v208 = v229;
        }
        else {
          v208 = v230 + 1536;
        }
        *v202 = v208;
        v202 += 8;
      } while (v211 != v203);
      v209 = v211 + 1;
      v210 = v198;
      if (v518_.v546 != 0) {
        goto LABEL_197;
      }
    LABEL_204:
      if ((int)v198 < 1) {
        goto LABEL_249;
      }
      LOWORD(v235) = v206[v198];
      v236 = v198 & 7;
      if ((v198 & 7) == 0) {
        v239 = v198;
        if (v198 < 8) {
          goto LABEL_249;
        }
      LABEL_215:
        v240 = 2 * v239;
        v241 = v239 + 1;
        v242 = v199;
        v243 = v200;
        do {
          v244 = (char*)v243 + v240;
          v243 = (void*)((char*)v243 - 16);
          v241 -= 8LL;
          v245 = *((__int16*)v244 - 1);
          v246 = (__int16)v235 + 2048;
          v247 = v242 + v240;
          v242 -= 16;
          if (v246 >= *(__int16*)(v247 - 2)) {
            v246 = *(__int16*)(v247 - 2);
          }
          v248 = *(__int16*)(v247 - 4);
          if (v246 < v245) {
            LOWORD(v245) = v246;
          }
          v249 = *((__int16*)v244 - 2);
          *((_WORD*)v244 - 1) = v245;
          v250 = (__int16)v245 + 2048;
          if (v250 >= v248) {
            v250 = v248;
          }
          v251 = *(__int16*)(v247 - 6);
          if (v250 >= v249) {
            LOWORD(v250) = v249;
          }
          v252 = *((__int16*)v244 - 3);
          *((_WORD*)v244 - 2) = v250;
          v253 = (__int16)v250 + 2048;
          if (v253 >= v251) {
            v253 = v251;
          }
          v254 = *(__int16*)(v247 - 8);
          if (v253 >= v252) {
            LOWORD(v253) = v252;
          }
          v255 = *((__int16*)v244 - 4);
          *((_WORD*)v244 - 3) = v253;
          v256 = (__int16)v253 + 2048;
          if (v256 >= v254) {
            v256 = v254;
          }
          v257 = *(__int16*)(v247 - 10);
          if (v256 >= v255) {
            LOWORD(v256) = v255;
          }
          v258 = *((__int16*)v244 - 5);
          *((_WORD*)v244 - 4) = v256;
          v259 = (__int16)v256 + 2048;
          if (v259 >= v257) {
            v259 = v257;
          }
          v260 = *(__int16*)(v247 - 12);
          if (v259 >= v258) {
            LOWORD(v259) = v258;
          }
          v261 = *((__int16*)v244 - 6);
          *((_WORD*)v244 - 5) = v259;
          v262 = (__int16)v259 + 2048;
          if (v262 >= v260) {
            v262 = v260;
          }
          v263 = *(__int16*)(v247 - 14);
          v235 = *(__int16*)(v247 - 16);
          if (v262 >= v261) {
            LOWORD(v262) = v261;
          }
          v264 = *((__int16*)v244 - 7);
          *((_WORD*)v244 - 6) = v262;
          v265 = (__int16)v262 + 2048;
          if (v265 >= v263) {
            v265 = v263;
          }
          if (v265 >= v264) {
            LOWORD(v265) = v264;
          }
          v266 = *((__int16*)v244 - 8);
          *((_WORD*)v244 - 7) = v265;
          v267 = (__int16)v265 + 2048;
          if (v267 < v235) {
            v235 = v267;
          }
          if (v235 >= v266) {
            LOWORD(v235) = v266;
          }
          *((_WORD*)v244 - 8) = v235;
        } while (v241 > 1);
        goto LABEL_249;
      }
      v237 = v198 - 1;
      do {
        v238 = 2 * v237--;
        v235 = (__int16)v235 + 2048;
        if (v235 >= *(__int16*)(v199 + v238)) {
          v235 = *(__int16*)(v199 + v238);
        }
        if (v235 >= *(__int16*)((char*)v200 + v238)) {
          LOWORD(v235) = *(_WORD*)((char*)v200 + v238);
        }
        --v236;
        *(_WORD*)((char*)v200 + v238) = v235;
      } while (v236 != 0);
      v239 = v237 + 1;
      if (v198 >= 8) {
        goto LABEL_215;
      }
    LABEL_249:
      if ((int)v23 < 5) {
        goto LABEL_411;
      }
      if ((_DWORD)v43 == 3) {
        v268 = 2;
        if ((v518_.v543 & 1) != 0) {
          goto LABEL_364;
        }
      }
      else {
        v269 = -2;
        v270 = 0;
        do {
          while (1) {
            v271 = v199 + v270;
            v272 = (char*)v200 + v270;
            v273 = *(__int16*)(v199 + v270);
            v274 = *(__int16*)(v199 + v270 + 6);
            v275 = *(__int16*)(v199 + v270 + 4);
            v276 = *(__int16*)((char*)v200 + v270 + 4);
            v277 = *(__int16*)(v199 + v270 + 2);
            if (v273 <= v277) {
              v278 = *(__int16*)(v199 + v270 + 2);
            }
            else {
              v278 = *(__int16*)(v199 + v270);
            }
            if (v273 >= v277) {
              v279 = *(__int16*)(v199 + v270 + 2);
            }
            else {
              v279 = *(__int16*)(v199 + v270);
            }
            v280 = *(__int16*)(v271 + 8);
            if (v274 >= v280) {
              v281 = *(__int16*)(v271 + 8);
            }
            else {
              v281 = *(__int16*)(v199 + v270 + 6);
            }
            if (v274 <= v280) {
              v282 = *(__int16*)(v271 + 8);
            }
            else {
              v282 = *(__int16*)(v199 + v270 + 6);
            }
            v283 = v279 <= v281;
            if (v279 <= v281) {
              v284 = v281;
            }
            else {
              v284 = v279;
            }
            if (v279 <= v281) {
              v285 = v282;
            }
            else {
              v285 = v278;
            }
            if (v283) {
              v286 = v278;
            }
            else {
              v286 = v282;
            }
            if (v275 >= v285) {
              v287 = v285;
            }
            else {
              v287 = *(_WORD*)(v199 + v270 + 4);
            }
            if ((__int16)v286 >= v284) {
              v288 = v284;
            }
            else {
              v288 = v286;
            }
            if (v275 >= v284) {
              v288 = v287;
            }
            v289 = (__int16)v282;
            if ((__int16)v278 < (__int16)v282) {
              LOWORD(v282) = v278;
            }
            if (v275 >= v284) {
              v290 = v284;
            }
            else {
              v290 = *(_WORD*)(v199 + v270 + 4);
            }
            if ((__int16)v286 >= v284) {
              v290 = v282;
            }
            if (v275 > v286) {
              v288 = v290;
            }
            if (v288 - 1024 >= v276) {
              if (v275 <= (__int16)v286) {
                if (v275 >= v284) {
                  if (v275 >= v285) {
                    v291 = v285;
                  }
                  else {
                    v291 = *(_WORD*)(v199 + v270 + 4);
                  }
                }
                else if ((__int16)v286 >= v284) {
                  v291 = v284;
                }
                else {
                  v291 = v286;
                }
              }
              else if ((__int16)v286 >= v284) {
                if ((__int16)v278 >= v289) {
                  v291 = v289;
                }
                else {
                  v291 = v278;
                }
              }
              else if (v275 >= v284) {
                v291 = v284;
              }
              else {
                v291 = *(_WORD*)(v199 + v270 + 4);
              }
              LOWORD(v276) = v291 - 1024;
            }
            v292 = *(__int16*)(v271 + 10);
            *((_WORD*)v272 + 2) = v276;
            v293 = *((__int16*)v272 + 3);
            if (v277 <= v275) {
              v294 = v275;
            }
            else {
              v294 = v277;
            }
            if (v277 >= v275) {
              v277 = v275;
            }
            v295 = (__int16)v294;
            if (v280 >= v292) {
              v296 = v292;
            }
            else {
              v296 = v280;
            }
            if (v280 <= v292) {
              v297 = v292;
            }
            else {
              v297 = v280;
            }
            v298 = (__int16)v297;
            if (v277 <= v296) {
              v299 = v296;
            }
            else {
              v299 = v277;
            }
            if (v277 <= v296) {
              v300 = v294;
            }
            else {
              v300 = v297;
            }
            if (v277 <= v296) {
              v301 = v297;
            }
            else {
              v301 = v294;
            }
            v302 = v301;
            if (v274 >= v299) {
              v303 = v299;
            }
            else {
              v303 = v274;
            }
            if ((__int16)v294 >= v298) {
              LOWORD(v294) = v298;
            }
            if ((__int16)v300 >= v299) {
              v304 = v299;
            }
            else {
              LOWORD(v294) = v303;
              v304 = v300;
            }
            if (v274 < v301) {
              v301 = v274;
            }
            if (v274 < v299) {
              v301 = v304;
            }
            if (v274 <= v300) {
              LOWORD(v294) = v301;
            }
            if ((__int16)v294 - 1024 >= v293) {
              break;
            }
            v269 -= 2;
            v270 += 4;
            *((_WORD*)v272 + 3) = v293;
            if (v204 == v269) {
              goto LABEL_363;
            }
          }
          if (v274 <= (__int16)v300) {
            if ((__int16)v300 >= v299) {
              v305 = v299;
            }
            else {
              v305 = v300;
            }
            if (v274 >= v302) {
              v306 = v302;
            }
            else {
              v306 = v274;
            }
            if (v274 >= v299) {
              v299 = v306;
            }
            else {
              v299 = v305;
            }
          }
          else if ((__int16)v300 >= v299) {
            if (v295 >= v298) {
              v299 = v298;
            }
            else {
              v299 = v295;
            }
          }
          else if (v274 < v299) {
            v299 = v274;
          }
          v269 -= 2;
          v270 += 4;
          *((_WORD*)v272 + 3) = v299 - 1024;
        } while (v204 != v269);
      LABEL_363:
        LODWORD(v23) = v518_.v534;
        v26 = v518_.v535;
        v28 = v518_.v533;
        v268 = -v269;
        v191 = v518_.v538;
        v193 = v518_.v536;
        v194 = v518_.v541;
        v192 = v518_.v539;
        v45 = v518_.v540;
        v201 = v518_.v544;
        LODWORD(v43) = v518_.v545;
        if ((v518_.v543 & 1) != 0) {
        LABEL_364:
          v307 = (__int16*)(v45 + 2LL * (_QWORD)v518_.v553 + 2 * v268);
          v308 = *(v307 - 2);
          v309 = *(v307 - 1);
          v310 = *v307;
          if (v308 <= v309) {
            v311 = *(v307 - 1);
          }
          else {
            v311 = *(v307 - 2);
          }
          if (v308 >= v309) {
            v308 = *(v307 - 1);
          }
          v312 = v307[1];
          v313 = v307[2];
          if (v312 >= v313) {
            v314 = v313;
          }
          else {
            v314 = v312;
          }
          if (v312 <= v313) {
            v315 = v313;
          }
          else {
            v315 = v312;
          }
          v316 = v308 <= v314;
          if (v308 <= v314) {
            v317 = v311;
          }
          else {
            v317 = v315;
          }
          if (v308 <= v314) {
            LOWORD(v308) = v314;
          }
          if (v316) {
            v318 = v315;
          }
          else {
            v318 = v311;
          }
          if (v310 > v317) {
            if ((__int16)v317 < (__int16)v308) {
              v319 = (__int16)v308;
              goto LABEL_396;
            }
            v320 = (__int16)v315;
            v321 = (__int16)v311;
          LABEL_389:
            if (v321 < v320) {
              LOWORD(v320) = v321;
            }
            v322 = v206[v268];
            if ((__int16)v320 - 1024 >= v322) {
              goto LABEL_392;
            }
          LABEL_399:
            v201 = v518_.v544;
            LODWORD(v43) = v518_.v545;
            v194 = v518_.v541;
            v324 = v322;
          LABEL_410:
            v206[v268] = v324;
            goto LABEL_411;
          }
          if (v310 < (__int16)v308) {
            v320 = (__int16)v308;
            v321 = (__int16)v317;
            goto LABEL_389;
          }
          v319 = v318;
        LABEL_396:
          if (v310 < v319) {
            LOWORD(v319) = v310;
          }
          v322 = v206[v268];
          if ((__int16)v319 - 1024 < v322) {
            goto LABEL_399;
          }
        LABEL_392:
          if (v310 <= (__int16)v317) {
            if (v310 >= (__int16)v308) {
              v323 = v318;
              goto LABEL_407;
            }
            v310 = (__int16)v308;
            v325 = (__int16)v317;
          }
          else {
            if ((__int16)v317 < (__int16)v308) {
              v323 = (__int16)v308;
            LABEL_407:
              if (v310 >= v323) {
                LOWORD(v310) = v323;
              }
            LABEL_409:
              v201 = v518_.v544;
              LODWORD(v43) = v518_.v545;
              v194 = v518_.v541;
              v324 = v310 - 1024;
              goto LABEL_410;
            }
            v310 = (__int16)v315;
            v325 = (__int16)v311;
          }
          if (v325 < v310) {
            LOWORD(v310) = v325;
          }
          goto LABEL_409;
        }
      }
    LABEL_411:
      v326 = *(__int16*)(v518_.v550 + 2);
      if ((__int16)v518_.v549 >= v326) {
        v327 = *(__int16*)(v518_.v550 + 2);
      }
      else {
        v327 = (__int16)v518_.v549;
      }
      if ((__int16)v518_.v549 > v326) {
        v326 = (__int16)v518_.v549;
      }
      v328 = *(__int16*)(v518_.v550 + 4);
      if (v327 <= v328) {
        LOWORD(v327) = *(_WORD*)(v518_.v550 + 4);
      }
      v283 = v326 < v328;
      v329 = *v206;
      if (!v283) {
        LOWORD(v326) = v327;
      }
      v330 = (__int16)(v326 - 1024);
      if (v329 <= v330) {
        LOWORD(v329) = v330;
      }
      *v206 = v329;
      if (v206[1] > v330) {
        LOWORD(v330) = v206[1];
      }
      v331 = v518_.v553;
      v206[1] = v330;
      v332 = v518_.v548 + 2LL * (_QWORD)v331;
      v333 = *(__int16*)(v332 - 6);
      v334 = *(__int16*)(v332 - 4);
      v335 = *(__int16*)(v332 - 2);
      if (v333 >= v334) {
        v336 = v334;
      }
      else {
        v336 = v333;
      }
      if (v333 <= v334) {
        v333 = v334;
      }
      if (v336 <= v335) {
        v337 = v335;
      }
      else {
        v337 = v336;
      }
      if (v333 >= v335) {
        v338 = v337;
      }
      else {
        v338 = v333;
      }
      v339 = (__int16)(v338 - 1024);
      v340 = v206[(unsigned __int64)v518_.v547 / 2];
      if (v340 <= v339) {
        LOWORD(v340) = v339;
      }
      v206[(unsigned __int64)v518_.v547 / 2] = v340;
      v341 = &v206[v192];
      if (*(v341 - 1) > v339) {
        LOWORD(v339) = *(v341 - 1);
      }
      *(v341 - 1) = v339;
      if ((int)v23 < 1) {
        goto LABEL_153;
      }
      if ((unsigned int)v23 >= 8) {
        v343 = v518_.v537;
        v344 = 0;
        v345 = v196;
        do {
          v346 = *(v345 - 4);
          v344 -= 8;
          if (v346 <= *(v343 - 4)) {
            LOWORD(v346) = *(v343 - 4);
          }
          v347 = *(v343 - 3);
          *(v345 - 4) = v346;
          v348 = *(v345 - 3);
          if (v348 <= v347) {
            LOWORD(v348) = v347;
          }
          v349 = *(v343 - 2);
          *(v345 - 3) = v348;
          v350 = *(v345 - 2);
          if (v350 <= v349) {
            LOWORD(v350) = v349;
          }
          v351 = *(v343 - 1);
          *(v345 - 2) = v350;
          v352 = *(v345 - 1);
          if (v352 <= v351) {
            LOWORD(v352) = v351;
          }
          v353 = *v343;
          *(v345 - 1) = v352;
          v354 = *v345;
          if (v354 <= v353) {
            LOWORD(v354) = v353;
          }
          v355 = v343[1];
          *v345 = v354;
          v356 = v345[1];
          if (v356 <= v355) {
            LOWORD(v356) = v355;
          }
          v357 = v343[2];
          v345[1] = v356;
          v358 = v345[2];
          if (v358 <= v357) {
            LOWORD(v358) = v357;
          }
          v359 = v343[3];
          v343 += 8;
          v345[2] = v358;
          v360 = v345[3];
          if (v360 <= v359) {
            LOWORD(v360) = v359;
          }
          v345[3] = v360;
          v345 += 8;
        } while (v205 != v344);
        v342 = -v344;
        if (v194 == 0) {
          goto LABEL_153;
        }
      LABEL_462:
        v361 = 2 * v342;
        for (i = v194; i != 0; --i) {
          v363 = *(__int16*)((char*)v200 + v361);
          if (v363 <= *(__int16*)((char*)v27 + v361)) {
            LOWORD(v363) = *(_WORD*)((char*)v27 + v361);
          }
          *(_WORD*)((char*)v200 + v361) = v363;
          v361 += 2;
        }
        goto LABEL_153;
      }
      v342 = 0;
      if (v194 != 0) {
        goto LABEL_462;
      }
    LABEL_153:
      ++v197;
      v200 = (void*)((char*)v200 + v191);
      v199 += v191;
      v196 = (__int16*)((char*)v196 + v191);
      v202 = (_WORD*)((char*)v518_.v552 + v191);
      v195 = (__int16*)((char*)v518_.v551 + v191);
      if (v197 == v201) {
        if (!v518_.v527) {
          v368 = v518_.v529;
          v369 = v518_.v532;
          v397 = v518_.v531;
          v372 = v518_.v523;
          v371 = v518_.v524;
          if ((int)v518_.v529 >= (int)v23) {
            goto LABEL_506;
          }
          v398 = ((int)v192 - (int)v518_.v529) & 7LL;
          if (v398 != 0) {
            v399 = (int)v518_.v529;
            do {
              v400 = 2 * v399++;
              --v398;
              *(_WORD*)((char*)v26 + v400) =
                  (*(_WORD*)(v397 + v400) - *(_WORD*)((char*)v26 + v400)) &
                  ~(unsigned __int16)((*(__int16*)(v397 + v400) -
                                       *(__int16*)((char*)v26 + v400)) >>
                                      31);
            } while (v398 != 0);
            if ((unsigned __int64)(v368 - v192) > 0xFFFFFFFFFFFFFFF8LL) {
              goto LABEL_506;
            }
          }
          else {
            v399 = (int)v518_.v529;
            if ((unsigned __int64)((int)v518_.v529 - v192) >
                0xFFFFFFFFFFFFFFF8LL) {
              goto LABEL_506;
            }
          }
          v403 = v192 - v399;
          v404 = 2 * v399 + 8;
          v405 = (__int16*)((char*)v26 + v404);
          v406 = (__int16*)(v397 + v404);
          do {
            v403 -= 8;
            v407 = *(v406 - 4) - *(v405 - 4);
            v408 = *(v406 - 1);
            v409 = *(v405 - 1);
            v410 = *(v406 - 3) - *(v405 - 3);
            v411 = *v406;
            v412 = *(v406 - 2) - *(v405 - 2);
            v413 = *v405;
            *(v405 - 4) = v407 & ~(unsigned __int16)(v407 >> 31);
            v414 = v408 - v409;
            v415 = v406[1];
            v416 = v411 - v413;
            v417 = v405[1];
            *(v405 - 3) = v410 & ~(unsigned __int16)(v410 >> 31);
            *(v405 - 2) = v412 & ~(unsigned __int16)(v412 >> 31);
            *(v405 - 1) = v414 & ~(unsigned __int16)(v414 >> 31);
            *v405 = v416 & ~(unsigned __int16)(v416 >> 31);
            v418 = v406[2];
            v405[1] = (v415 - v417) & ~(unsigned __int16)((v415 - v417) >> 31);
            v419 = v405[3];
            v405[2] =
                (v418 - v405[2]) & ~(unsigned __int16)((v418 - v405[2]) >> 31);
            v420 = v406[3];
            v406 += 8;
            v405[3] = (v420 - v419) & ~(unsigned __int16)((v420 - v419) >> 31);
            v405 += 8;
          } while (v403 != 0);
          goto LABEL_506;
        }
        v368 = v518_.v529;
        v369 = v518_.v532;
        v370 = v518_.v531;
        v372 = v518_.v523;
        v371 = v518_.v524;
        if ((int)v518_.v529 < (int)v23) {
          v373 = (int)v518_.v529;
          v374 = (int)v518_.v529 + 1LL;
          if ((((_DWORD)v192 - (_DWORD)v518_.v529) & 1) != 0) {
            v375 = 2 * ((int)v518_.v529 + v28);
            v376 = *(__int16*)((char*)v26 + v375);
            if (*((__int16*)v26 + (int)v518_.v529) - 4096 > v376) {
              v376 = *((__int16*)v26 + (int)v518_.v529) - 4096;
            }
            *(_WORD*)((char*)v26 + v375) = v376;
            v377 = v376 - 4096;
            if (v377 <= *((__int16*)v26 + v368)) {
              v377 = *((__int16*)v26 + v368);
            }
            v378 = *(__int16*)(v370 + 2LL * v368);
            *((_WORD*)v26 + v368) = v377;
            *((_WORD*)v26 + v368) =
                (((v378 - v377) & ~((v378 - v377) >> 31)) +
                 ((*(__int16*)(v370 + v375) - *(__int16*)((char*)v26 + v375)) &
                  (unsigned int)~((*(__int16*)(v370 + v375) -
                                   *(__int16*)((char*)v26 + v375)) >>
                                  31))) >>
                1;
            v373 = v368 + 1LL;
          }
          if (v192 != v374) {
            v379 = v192 - v373;
            v380 = 2 * (v373 + v28) + 2;
            v381 = (__int16*)((char*)v26 + 2 * v373 + 2);
            v382 = (__int16*)(v370 + 2 * v373 + 2);
            v383 = (__int16*)((char*)v26 + v380);
            v384 = (__int16*)(v370 + v380);
            do {
              v385 = *(v383 - 1);
              if (*(v381 - 1) - 4096 > v385) {
                v385 = *(v381 - 1) - 4096;
              }
              *(v383 - 1) = v385;
              v386 = v385 - 4096;
              if (v386 <= *(v381 - 1)) {
                v386 = *(v381 - 1);
              }
              v387 = *(v382 - 1);
              *(v381 - 1) = v386;
              v388 = ((v387 - v386) & ~((v387 - v386) >> 31)) +
                     ((*(v384 - 1) - *(v383 - 1)) &
                      ~((*(v384 - 1) - *(v383 - 1)) >> 31));
              v389 = *v381;
              *(v381 - 1) = v388 >> 1;
              v390 = *v383;
              v391 = v389 - 4096;
              if (v391 > v390) {
                v390 = v391;
              }
              *v383 = v390;
              v392 = v390 - 4096;
              if (v392 <= *v381) {
                v392 = *v381;
              }
              v393 = *v382;
              v379 -= 2;
              v382 += 2;
              *v381 = v392;
              v394 = *v383;
              v383 += 2;
              v395 = v393 - v392;
              v396 = *v384;
              v384 += 2;
              *v381 =
                  ((v395 & ~(v395 >> 31)) +
                   ((v396 - v394) & (unsigned int)~((v396 - v394) >> 31))) >>
                  1;
              v381 += 2;
            } while (v379 != 0);
          }
        }
      LABEL_506:
        if (v368 < (int)v23) {
          v421 = ((int)v192 - v368) & 7LL;
          if (v421 != 0) {
            v422 = v368;
            v423 = v518_.v518;
            do {
              v424 = 2 * v422++;
              v425 = *(__int16*)((char*)v26 + v424);
              if (v425 <= *(__int16*)(v423 + v424)) {
                LOWORD(v425) = *(_WORD*)(v423 + v424);
              }
              --v421;
              *(_WORD*)((char*)v26 + v424) = v425;
            } while (v421 != 0);
            if ((unsigned __int64)(v368 - v192) > 0xFFFFFFFFFFFFFFF8LL) {
            LABEL_533:
              v445 = (__int16*)((char*)v26 + 2 * v368);
              v446 = v192 - v368;
              v447 = (unsigned int*)(v518_.v519 + 4LL * v368);
              do {
                v450 = *v445++;
                v449 = v450;
                if (v450 >= 4096) {
                  v451 = 4096;
                }
                else {
                  v451 = v449;
                }
                v452 = v451 >> 10;
                if (v451 >> 10 < -15) {
                  v448 = 0;
                }
                else {
                  v453 = (__int16)v452;
                  v454 = -2 - v452;
                  v455 = ((((((326528 * (v451 & 0x3FFu)) >> 16) + 14819) * 32 *
                                (v451 & 0x3FF) +
                            1494482944) >>
                           16) *
                              32 * (v451 & 0x3FF) +
                          1073676288) >>
                         16;
                  if (v453 > -3) {
                    v448 = v455 << (-v454 & 31);
                  }
                  else {
                    v448 = v455 >> v454;
                  }
                }
                --v446;
                *v447++ = (13 * v448 + 0x8000) >> 16;
              } while (v446 != 0);
              goto LABEL_543;
            }
          }
          else {
            v422 = v368;
            v423 = v518_.v518;
            if ((unsigned __int64)(v368 - v192) > 0xFFFFFFFFFFFFFFF8LL) {
              goto LABEL_533;
            }
          }
          v426 = v192 - v422;
          v427 = 2 * v422 + 8;
          v428 = (__int16*)(v423 + v427);
          v429 = (__int16*)((char*)v26 + v427);
          do {
            v430 = *(v429 - 4);
            if (v430 <= *(v428 - 4)) {
              LOWORD(v430) = *(v428 - 4);
            }
            v431 = *(v428 - 3);
            *(v429 - 4) = v430;
            v432 = *(v429 - 3);
            if (v432 <= v431) {
              LOWORD(v432) = v431;
            }
            v433 = *(v428 - 2);
            *(v429 - 3) = v432;
            v434 = *(v429 - 2);
            if (v434 <= v433) {
              LOWORD(v434) = v433;
            }
            v435 = *(v428 - 1);
            *(v429 - 2) = v434;
            v436 = *(v429 - 1);
            if (v436 <= v435) {
              LOWORD(v436) = v435;
            }
            v437 = *v428;
            *(v429 - 1) = v436;
            v438 = *v429;
            if (v438 <= v437) {
              LOWORD(v438) = v437;
            }
            v439 = v428[1];
            *v429 = v438;
            v440 = v429[1];
            if (v440 <= v439) {
              LOWORD(v440) = v439;
            }
            v441 = v428[2];
            v429[1] = v440;
            v442 = v429[2];
            if (v442 <= v441) {
              LOWORD(v442) = v441;
            }
            v443 = v428[3];
            v428 += 8;
            v429[2] = v442;
            v444 = v429[3];
            if (v444 <= v443) {
              LOWORD(v444) = v443;
            }
            v426 -= 8;
            v429[3] = v444;
            v429 += 8;
          } while (v426 != 0);
          goto LABEL_533;
        }
      LABEL_543:
        v456 = v518_.v525;
        v457 = v518_.v522;
        v458 = v371 != 0 || v518_.v525 == 0;
        if (v458 && v368 < (int)v23 && v372 == 0) {
          v459 = ((int)v192 - v368) & 7LL;
          if (v459 != 0) {
            v460 = v368;
            do {
              v461 = 2 * v460++;
              --v459;
              *(_WORD*)((char*)v26 + v461) =
                  (unsigned int)*(__int16*)((char*)v26 + v461) >> 1;
            } while (v459 != 0);
            if ((unsigned __int64)(v368 - v192) > 0xFFFFFFFFFFFFFFF8LL) {
              goto LABEL_558;
            }
          }
          else {
            v460 = v368;
            if ((unsigned __int64)(v368 - v192) > 0xFFFFFFFFFFFFFFF8LL) {
              goto LABEL_558;
            }
          }
          v462 = v192 - v460;
          v463 = (__int16*)((char*)v26 + 2 * v460 + 8);
          do {
            v462 -= 8;
            *(v463 - 4) = (unsigned int)*(v463 - 4) >> 1;
            *(v463 - 3) = (unsigned int)*(v463 - 3) >> 1;
            *(v463 - 2) = (unsigned int)*(v463 - 2) >> 1;
            *(v463 - 1) = (unsigned int)*(v463 - 1) >> 1;
            *v463 = (unsigned int)*v463 >> 1;
            v463[1] = (unsigned int)v463[1] >> 1;
            v463[2] = (unsigned int)v463[2] >> 1;
            v463[3] = (unsigned int)v463[3] >> 1;
            v463 += 8;
          } while (v462 != 0);
        }
      LABEL_558:
        if (v368 >= (int)v23) {
          goto LABEL_569;
        }
        v464 = ((int)v192 - v368) & 3LL;
        if (v464 != 0) {
          v465 = v368;
          while (1) {
            if (v465 < 8) {
              v466 = 2 * v465;
              LOWORD(v467) = 2 * *((_WORD*)v26 + v465);
            }
            else {
              if ((unsigned __int64)v465 < 0xC) {
                goto LABEL_563;
              }
              v466 = 2 * v465;
              v467 = (unsigned int)*((__int16*)v26 + v465) >> 1;
            }
            *(_WORD*)((char*)v26 + v466) = v467;
          LABEL_563:
            ++v465;
            if (--v464 == 0) {
              goto LABEL_568;
            }
          }
        }
        v465 = v368;
      LABEL_568:
        if ((unsigned __int64)(v368 - v192) > 0xFFFFFFFFFFFFFFFCLL) {
        LABEL_569:
          if (*v457 == 0) {
            goto LABEL_604;
          }
          v468 = (int)v23 >= 19 ? 19 : v23;
          if (v368 >= v468) {
            goto LABEL_604;
          }
          v469 = v468;
          v470 = (v468 - v368) & 7LL;
          if (v470 != 0) {
            v471 = v368;
            do {
              v472 = 2 * v471;
              v473 = *((unsigned __int8*)v457 + v471++ + 44);
              --v470;
              *(_WORD*)((char*)v26 + v472) += 16 * v473;
            } while (v470 != 0);
            if ((unsigned __int64)(v368 - v469) > 0xFFFFFFFFFFFFFFF8LL) {
              goto LABEL_604;
            }
          LABEL_602:
            v479 = v469 - v471;
            v480 = (unsigned __int8*)v457 + v471 + 51;
            v481 = (__int16*)((char*)v26 + 2 * v471 + 8);
            do {
              v482 = *(v481 - 1);
              v479 -= 8;
              v483 = *(v480 - 4);
              v484 = *(v481 - 3) + 16 * *(v480 - 6);
              v485 = *v481;
              v486 = *(v481 - 2) + 16 * *(v480 - 5);
              v487 = *(v480 - 3);
              *(v481 - 4) += 16 * *(v480 - 7);
              v488 = v481[2];
              *(v481 - 3) = v484;
              *(v481 - 2) = v486;
              v489 = v482 + 16 * v483;
              v490 = v481[1];
              v491 = v485 + 16 * v487;
              v492 = *(v480 - 2);
              *(v481 - 1) = v489;
              v493 = *(v480 - 1);
              v494 = *v480;
              v480 += 8;
              *v481 = v491;
              v495 = v488 + 16 * v493;
              v496 = v481[3];
              v481[1] = v490 + 16 * v492;
              v481[2] = v495;
              v481[3] = v496 + 16 * v494;
              v481 += 8;
            } while (v479 != 0);
          }
          else {
            v471 = v368;
            if ((unsigned __int64)(v368 - v469) <= 0xFFFFFFFFFFFFFFF8LL) {
              goto LABEL_602;
            }
          }
        LABEL_604:
          if (v368 < (int)v23) {
            v497 = v518_.v530;
            v498 = 0;
            v499 = v372 != 0 || v371 == 0;
            v500 = 2LL * v368;
            v501 = (__int16*)((char*)v26 + v500);
            v502 = v192 - v368;
            v503 = !v499 || v456 == 0;
            v504 = v500 + v518_.v521;
            v505 = !v503;
            v506 = (__int16*)(v504 + 2);
            v507 = (1431655766 *
                    (unsigned __int64)(unsigned int)(2 * v518_.v520)) >>
                   32;
            v508 = (int*)((char*)v518_.v526 + 4 * v368);
            while (1) {
              v509 = *v501;
              v510 = (*v506 - *(v506 - 1)) * v369;
              if (v509 >= 4096) {
                LOWORD(v509) = 4096;
              }
              *v501 = v509;
              v511 = v510 << v497;
              if (v510 << v497 > 5) {
                if (v511 < 0x31) {
                  v512 = ((int)(v511 * (__int16)v509) / 6) >> 10;
                  v513 = 48 * v512 + v498;
                  if (v513 >> 6 <= (int)v507) {
                    v516 = 1;
                  }
                  else {
                    v516 = v505;
                  }
                  if ((v516 & 1) == 0) {
                  LABEL_637:
                    v513 = (_DWORD)v507 << 6;
                    *v508 = ((_DWORD)v507 << 6) - v498;
                    goto LABEL_636;
                  }
                }
                else {
                  v512 = (__int16)v509 >> 7;
                  v513 = ((int)(8 * v512 * v511) >> 3) + v498;
                  if (v513 >> 6 <= (int)v507) {
                    v515 = 1;
                  }
                  else {
                    v515 = v505;
                  }
                  if ((v515 & 1) == 0) {
                    goto LABEL_637;
                  }
                }
              }
              else {
                v512 = (__int16)v509 >> 10;
                v513 = 8 * v512 * v511 + v498;
                if (v513 >> 6 <= (int)v507) {
                  v514 = 1;
                }
                else {
                  v514 = v505;
                }
                if ((v514 & 1) == 0) {
                  goto LABEL_637;
                }
              }
              ++v506;
              *v508++ = v512;
              ++v501;
              --v502;
              v498 = v513;
              if (v502 == 0) {
                goto LABEL_636;
              }
            }
          }
          goto LABEL_635;
        }
        v474 = (__int16*)((char*)v26 + 2 * v465 + 4);
        while (2) {
          if (v465 <= 7) {
            LOWORD(v476) = 2 * *(v474 - 2);
            goto LABEL_587;
          }
          if ((unsigned __int64)v465 >= 0xC) {
            v476 = (unsigned int)*(v474 - 2) >> 1;
          LABEL_587:
            *(v474 - 2) = v476;
          }
          if (v465 < 7) {
            LOWORD(v477) = 2 * *(v474 - 1);
            goto LABEL_592;
          }
          if ((unsigned __int64)(v465 + 1) >= 0xC) {
            v477 = (unsigned int)*(v474 - 1) >> 1;
          LABEL_592:
            *(v474 - 1) = v477;
          }
          if (v465 < 6) {
            LOWORD(v478) = 2 * *v474;
            goto LABEL_597;
          }
          if ((unsigned __int64)(v465 + 2) >= 0xC) {
            v478 = (unsigned int)*v474 >> 1;
          LABEL_597:
            *v474 = v478;
          }
          if (v465 >= 5) {
            if ((unsigned __int64)(v465 + 3) >= 0xC) {
              v475 = (unsigned int)v474[1] >> 1;
            LABEL_581:
              v474[1] = v475;
            }
            v465 += 4;
            v474 += 4;
            if (v192 == v465) {
              goto LABEL_569;
            }
            continue;
          }
          break;
        }
        LOWORD(v475) = 2 * v474[1];
        goto LABEL_581;
      }
    }
    v209 = 1;
    v210 = v198;
    v198 = 0;
    if (v518_.v546 == 0) {
      goto LABEL_204;
    }
  LABEL_197:
    v231 = v518_.v546;
    v232 = (__int16*)(v199 + 2 * v209);
    v198 = v210;
    do {
      v233 = *(v232 - 1);
      v234 = *v232++;
      if (v233 + 512 < v234) {
        v198 = (unsigned int)v209;
      }
      if (v208 + 1536 >= v234) {
        v208 = v234;
      }
      else {
        v208 += 1536;
      }
      --v231;
      *((_WORD*)v200 + v209++) = v208;
    } while (v231 != 0);
    goto LABEL_204;
  }
LABEL_467:
  if ((int)v518_.v529 < (int)v23) {
    v364 = v518_.v539;
    v365 = (int)v518_.v529;
    v366 = ((int)v518_.v539 - (int)v518_.v529) & 7LL;
    if (v366 != 0) {
      v367 = (int)v518_.v529;
      do {
        *(_DWORD*)(v46 + 4 * v367++) = 13;
        --v366;
      } while (v366 != 0);
      if ((unsigned __int64)(v365 - v364) > 0xFFFFFFFFFFFFFFF8LL) {
        goto LABEL_635;
      }
    }
    else {
      v367 = (int)v518_.v529;
      if ((unsigned __int64)((int)v518_.v529 - v518_.v539) >
          0xFFFFFFFFFFFFFFF8LL) {
        goto LABEL_635;
      }
    }
    v401 = v364 - v367;
    v402 = (_QWORD*)(v46 + 4 * v367 + 16);
    do {
      *(v402 - 2) = 0xD0000000DLL;
      *(v402 - 1) = 0xD0000000DLL;
      v401 -= 8;
      *v402 = 0xD0000000DLL;
      v402[1] = 0xD0000000DLL;
      v402 += 4;
    } while (v401 != 0);
  }
LABEL_635:
  v513 = 0;
LABEL_636:
  *v518_.v528 = v513;
  return v37;
}

#pragma GCC visibility pop
