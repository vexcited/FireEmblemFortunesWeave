#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void std___1_to_string_1a0a790(PSEUDO_X8, _QWORD);
__int64* GameRoutine_b3f6c0(_QWORD*, const char*);
__int64* GameRoutine_b3f800(_QWORD*, const char*);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 ResourceBuilder_b528e0(__int64*, unsigned __int8*, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_templates_a93ea0(float*, unsigned __int8*, __int64, __int64**);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 std___1___next_prime(unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern _DWORD GameData_1b5f120[3];
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern _UNKNOWN** GameData_212e4d8[2];
extern __int128 GameData_1a82d20;
extern __int128 GameData_1a834b0;
extern __int128 GameData_1a83620;
extern __int128 GameData_1a83750;
extern __int64 (*GameData_1fc1458[])();
extern __int64 (*GameData_1fc5228[])();
extern __int64 (*gfx_settings_BaseParamInstance_vtable)();
extern __int64 (*gfx_settings_Float_vtable[])();
extern __int64 (*gfxa_TranslucencySetting_vtable[])();
extern __int64* GameData_212e548[27];
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
float GameRoutine_652ba0(float32x4_t*, float, float);
float exp2f(float);
float tanf(float);
void TranslucencySetting_Destructor(__int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_a9fd80();
void __attribute__((noreturn)) GameRoutine_aa0e00();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 gfxa_a9d8c0(_DWORD* a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                    __int64 a6, __int64 a7, char a8, float a9);
void gfxa_b44060(__int64 a1, int a2, __int64* a3);
void gfxa_b52720(__int64 a1, __int64* a2, __int64 a3);

__int64 gfxa_a9d8c0(_DWORD* a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                    __int64 a6, __int64 a7, char a8, float a9)
{
  int v9;
  int v10;
  _DWORD* v11;
  int v18;
  int v19;
  __int64 v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  __int64 v35;
  __int64 v36;
  int v37;
  __int64 v38;
  __int128 v39;
  __int128 v40;
  __int128 v41;
  __int64* v45;
  __int64 v46;
  int v47;
  unsigned __int64 v48;
  float v49;
  signed int v50;
  float v51;
  int v52;
  float v53;
  float v54;
  unsigned int v55;
  float v56;
  unsigned int v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  unsigned __int64 v63;
  float v64;
  int32x4_t v65;
  int32x4_t v66;
  int32x4_t v67;
  float64x2_t v68;
  float64x2_t v69;
  int32x4_t v70;
  int32x4_t v71;
  int8x16_t v72;
  int32x4_t v73;
  int32x4_t v74;
  int32x4_t v75;
  int32x4_t v76;
  int32x4_t v77;
  int32x4_t v78;
  float32x4_t v79;
  int8x16_t v80;
  int8x16_t v81;
  int8x16_t v82;
  float32x4_t v83;
  float32x4_t v84;
  int8x16_t v85;
  float32x4_t v86;
  float32x4_t v87;
  float32x4_t v88;
  float32x4_t v89;
  float32x4_t v90;
  float32x4_t v91;
  float32x4_t v92;
  float32x4_t v93;
  float32x4_t v94;
  float32x4_t v95;
  float32x4_t v96;
  float32x4_t v97;
  float64x2_t v98;
  float32x4_t v99;
  float32x4_t v100;
  float32x4_t v101;
  float32x4_t v102;
  int8x16_t v103;
  float32x4_t v104;
  float32x4_t v105;
  float32x4_t v106;
  float32x4_t v107;
  float32x4_t v108;
  int8x16_t v109;
  float32x4_t v110;
  int32x4_t v111;
  int32x4_t v112;
  int32x4_t v113;
  int32x4_t v114;
  __n128 v115;
  float v116;
  float v117;
  int32x4_t v118;
  int32x4_t v119;
  int32x4_t v120;
  float32x4_t v121;
  float32x4_t v122;
  float32x4_t v123;
  int32x4_t v124;
  int32x4_t v125;
  int32x4_t v126;
  float32x4_t v127;
  int32x4_t v128;
  float v129;
  float v130;
  float v131;
  __int64 v132;
  __int64 v133;
  int32x4_t* v134;
  __int64 v135;
  int32x4_t v136;
  int32x4_t v137;
  int32x4_t v138;
  int32x4_t v139;
  int32x4_t v140;
  float32x4_t v141;
  int32x4_t v142;
  int32x4_t v143;
  int8x16_t v144;
  int8x16_t v145;
  int8x16_t v146;
  float32x4_t v147;
  float32x4_t v148;
  float32x4_t v149;
  int8x16_t v150;
  float32x4_t v151;
  float32x4_t v152;
  float32x4_t v153;
  float32x4_t v154;
  float32x4_t v155;
  float32x4_t v156;
  float32x4_t v157;
  float32x4_t v158;
  float32x4_t v159;
  float32x4_t v160;
  float32x4_t v161;
  float32x4_t v162;
  float32x4_t v163;
  float32x4_t v164;
  float32x4_t v165;
  int8x16_t v166;
  float32x4_t v167;
  float32x4_t v168;
  float32x4_t v169;
  float32x4_t v170;
  float32x4_t v171;
  int8x16_t v172;
  float32x4_t v173;
  int32x4_t v174;
  int32x4_t v175;
  float v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64* v180;
  float32x4_t* v181;
  __int64* v182;
  _QWORD* v183;
  _BYTE* v184;
  _BYTE* v185;
  __int64 v186;
  __int64 v187;
  float v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  float32x4_t v192;
  __int64 v193;
  float v194;
  __int64 v195;
  float32x4_t v196;
  unsigned __int64 v197;
  float32x4_t v198;
  __int64 v199;
  float v200;
  int v201;
  float32x4_t v202;
  int8x16_t v203;
  int8x16_t v204;
  int8x16_t v205;
  unsigned __int32 v206;
  int v207;
  float32x4_t* v208;
  float v209;
  unsigned __int64 v210;
  __int64 v211;
  __int64 v212;
  float v213;
  unsigned __int64 v214;
  __int64 v215;
  float v216;
  float v217;
  __int64 v218;
  float v219;
  __int64 v220;
  int* v221;
  float v222;
  float v223;
  float v224;
  float v225;
  unsigned __int64 v226;
  __int64 v227;
  float v228;
  __int64 v229;
  int v230;
  __int64 v231;
  float v232;
  float v233;
  __int64 v234;
  int v235;
  int* v236;
  int v237;
  __int64 v238;
  float v239;
  __int64 v240;
  int v241;
  __int64 v242;
  int v243;
  __int64 v244;
  __int64 v245;
  __int64 v246;
  __int64 v247;
  float v248;
  int v249;
  __int64 v250;
  __int64 v251;
  __int64 v252;
  __int64 v253;
  __int64 v254;
  __int64 v255;
  float32x4_t v256;
  int8x16_t v257;
  int8x16_t v258;
  int8x16_t v259;
  __int64 v260;
  __int64 v261;
  __int64 v262;
  __int64 v263;
  float v264;
  __int64 v265;
  __int64 v266;
  float v267;
  __int64 v268;
  float v269;
  float v270;
  __int64 v271;
  float v272;
  unsigned int v273;
  int v274;
  __int64 v275;
  float v276;
  __int64 v277;
  float v278;
  float v279;
  float v280;
  __int64 v281;
  int v282;
  __int64 v283;
  int v284;
  int v285;
  __int64 v286;
  __int64 v287;
  unsigned __int8 v288;
  __int64 v289;
  __int64 v290;
  __int64 v291;
  __int64 v292;
  __int64 v293;
  int v294;
  int v295;
  bool v296;
  __int64 v297;
  __int64 v298;
  float v299;
  _BOOL4 v300;
  bool v301;
  _QWORD* v302;
  int v303;
  char v304;
  _UNKNOWN** v305;
  float v306;
  int v307;
  float v308;
  __int64 v309;
  int v310;
  __int64 v311;
  float v312;
  __int64 v313;
  __int64 v314;
  __n128 v315;
  __int64 v316;
  int v317;
  float32x4_t v318;
  int8x16_t v319;
  int8x16_t v320;
  int8x16_t v321;
  unsigned __int32 v322;
  __int64 v323;
  float v324;
  float32x4_t v325;
  float v326;
  int8x16_t v327;
  float v328;
  float32x4_t v329;
  __int64 v330;
  int v331;
  float32x4_t v332;
  int8x16_t v333;
  int8x16_t v334;
  int8x16_t v335;
  unsigned __int32 v336;
  __int64 v337;
  float v338;
  float v339;
  int8x16_t v340;
  float v341;
  float32x4_t v342;
  __int64 v343;
  char v344;
  unsigned __int64 v345;
  __int64 v346;
  __int64 v347;
  __int64 v348;
  unsigned __int64 v349;
  __int64 v350;
  unsigned __int64 v351;
  char v352;
  __int64 v353;
  __int64 v354;
  char v355;
  __int64 v356;
  __int64 v357;
  __int64 v358;
  __int64 v359;
  __int64 v360;
  __int64 v361;
  char v362;
  int v363;
  __int64 v364;
  __int64 v365;
  char v366;
  __int64 v367;
  __int64 v368;
  __int64 v369;
  __int64 v370;
  __int64 v371;
  __int64 v372;
  char v373;
  int v374;
  __int64 v375;
  __int64 v376;
  char v377;
  __int64 v378;
  __int64 v379;
  __int64 v380;
  __int64 v381;
  __int64 v382;
  __int64 v383;
  int v384;
  char v385;
  __int64 v386;
  __int64 v387;
  char v388;
  __int64 v389;
  __int64 v390;
  __int64 v391;
  __int64 v392;
  __int64 v393;
  __int64 v394;
  int v395;
  char v396;
  __int64 v397;
  __int64 v398;
  char v399;
  __int64 v400;
  __int64 v401;
  __int64 v402;
  __int64 v403;
  __int64 v404;
  __int64 v405;
  int v406;
  char v407;
  __int64 v408;
  __int64 v409;
  char v410;
  __int64 v411;
  __int64 v412;
  __int64 v413;
  __int64 v414;
  __int64 v415;
  __int64 v416;
  int v417;
  char v418;
  __int64 v419;
  __int64 v420;
  char v421;
  __int64 v422;
  __int64 v423;
  __int64 v424;
  __int64 v425;
  __int64 v426;
  __int64 v427;
  float v428;
  __int64 v429;
  __int64 v430;
  float v431;
  __int64 v432;
  float v433;
  __int64 v434;
  float v435;
  __int64 v436;
  float v437;
  int* v438;
  int v439;
  __int64 v440;
  unsigned __int32 v441;
  _UNKNOWN** v442;
  unsigned int* v443;
  unsigned int* v444;
  __int64 v445;
  __int64 v446;
  __int64 v447;
  __int64* i;
  float v449;
  _DWORD* v450;
  __int64 v451;
  __int64 v452;
  int v453;
  __int64 v454;
  __int64 v455;
  int v456;
  __int64 v457;
  __int64 v458;
  float v460;
  float v461;
  float32x4_t v462;
  float v463;
  float v464;
  int32x4_t v466;
  int32x4_t v467;
  float v468;
  int32x4_t v469;
  int32x4_t v470;
  char v471;
  int32x4_t v472;
  int32x4_t v473;
  float v474;
  int32x4_t v475;
  int32x4_t v476;
  int v477;
  float v479;
  __int64 v480;
  float32x4_t v481;
  unsigned __int64 v482;
  struct {
    float32x4_t v484;
    __int64 v485;
    __int64 v486;
    __int64 v487;
    __int64 v488;
    unsigned __int64 v489;
    __int64 (**v490)();
  } v484_;
  __int64 v491[3];
  char v492;
  __int64 v493;
  __int64 v494;
  __int64 v495;
  __int64 v496;
  int v497;
  __int64 (**v498)();
  __int64 v499[3];
  char v500;
  __int64 v501;
  __int64 v502;
  __int64 v503;
  __int64 v504;
  int v505;
  __int64 (**v506)();
  __int64 v507[3];
  char v508;
  __int64 v509;
  __int64 v510;
  __int64 v511;
  __int64 v512;
  int v513;
  __int64 (**v514)();
  __int64 v515[3];
  char v516;
  __int64 v517;
  __int64 v518;
  __int64 v519;
  __int64 v520;
  int v521;
  __int64 (**v522)();
  __int64 v523[3];
  char v524;
  __int64 v525;
  __int64 v526;
  __int64 v527;
  __int64 v528;
  int v529;
  __int64 (**v530)();
  __int64 v531[3];
  char v532;
  __int64 v533;
  __int64 v534;
  __int64 v535;
  __int64 v536;
  int v537;
  __int64 (**v538)();
  struct {
    __int64 v539[3];
    char v540;
  } v539_;
  __int64 v541;
  __int64 v542;
  __int64 v543;
  __int64 v544;
  int v545;
  float32x4_t v546;
  float32x4_t* v547;
  float32x4x4_t v548;
  float32x4x4_t v549;
  float32x4x4_t v550;
  float32x4x4_t v551;
  float32x4x4_t v552;
  float32x4x4_t v553;

  v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v9 = a1[14];
  v10 = a1[28];
  v11 = a1 + 10;
  v296 = v9 < -1;
  v18 = ((_BYTE)v9 + 1) & 1;
  if (v296) {
    v18 = -v18;
  }
  v296 = v10 < -1;
  v19 = ((_BYTE)v10 + 1) & 1;
  a1[14] = v18;
  v20 = *(_QWORD*)&v11[2 * v18];
  if (v296) {
    v19 = -v19;
  }
  a1[28] = v19;
  v21 = a1[42];
  v296 = v21 < -1;
  v22 = ((_BYTE)v21 + 1) & 1;
  if (v296) {
    v22 = -v22;
  }
  a1[42] = v22;
  v23 = a1[56];
  v296 = v23 < -1;
  v24 = ((_BYTE)v23 + 1) & 1;
  if (v296) {
    v24 = -v24;
  }
  a1[56] = v24;
  v25 = a1[70];
  v296 = v25 < -1;
  v26 = ((_BYTE)v25 + 1) & 1;
  if (v296) {
    v26 = -v26;
  }
  a1[70] = v26;
  v27 = a1[84];
  v296 = v27 < -1;
  v28 = ((_BYTE)v27 + 1) & 1;
  if (v296) {
    v28 = -v28;
  }
  a1[84] = v28;
  v29 = a1[98];
  v296 = v29 < -1;
  v30 = ((_BYTE)v29 + 1) & 1;
  if (v296) {
    v30 = -v30;
  }
  a1[98] = v30;
  v31 = a1[112];
  v296 = v31 < -1;
  v32 = ((_BYTE)v31 + 1) & 1;
  if (v296) {
    v32 = -v32;
  }
  a1[112] = v32;
  v33 = a1[314];
  v296 = v33 < -1;
  v34 = ((_BYTE)v33 + 1) & 1;
  if (v296) {
    v34 = -v34;
  }
  a1[314] = v34;
  v35 = *(_QWORD*)(*(_QWORD*)(*((_QWORD*)a1 + 3) + 8LL) + 160LL);
  v36 = 128;
  if (*(_BYTE*)(v35 + 96) != 0) {
    v36 = 92;
  }
  v37 = *(_DWORD*)(v35 + v36);
  v38 = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 56LL))(v20),
  v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  *((_QWORD*)a1 + 148) = *((_QWORD*)a1 + 132);
  *((_QWORD*)a1 + 149) = *((_QWORD*)a1 + 133);
  *((_QWORD*)a1 + 150) = *((_QWORD*)a1 + 134);
  *((_QWORD*)a1 + 151) = *((_QWORD*)a1 + 135);
  *((_QWORD*)a1 + 144) = *((_QWORD*)a1 + 128);
  *((_QWORD*)a1 + 145) = *((_QWORD*)a1 + 129);
  *((_QWORD*)a1 + 146) = *((_QWORD*)a1 + 130);
  *((_QWORD*)a1 + 147) = *((_QWORD*)a1 + 131);
  *((_QWORD*)a1 + 140) = *((_QWORD*)a1 + 124);
  *((_QWORD*)a1 + 141) = *((_QWORD*)a1 + 125);
  *((_QWORD*)a1 + 142) = *((_QWORD*)a1 + 126);
  *((_QWORD*)a1 + 143) = *((_QWORD*)a1 + 127);
  *((_QWORD*)a1 + 136) = *((_QWORD*)a1 + 120);
  *((_QWORD*)a1 + 137) = *((_QWORD*)a1 + 121);
  *((_QWORD*)a1 + 138) = *((_QWORD*)a1 + 122);
  *((_QWORD*)a1 + 139) = *((_QWORD*)a1 + 123);
  if ((a8 & 1) == 0) {
    *(_QWORD*)(a1 + 307) = *(_QWORD*)(a1 + 305);
  }
  *((long double*)a1 +
    64) = ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)a3 + 16LL))(a3),
    v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  *((_OWORD*)a1 + 65) = v39;
  *((_OWORD*)a1 + 66) = v40;
  *((_OWORD*)a1 + 67) = v41;
  (*(void (**)(__int64))(*(_QWORD*)a3 + 24LL))(a3),
      v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  if (*(_BYTE*)(*(_QWORD*)a1 + 16700LL) != 0) {
    v45 = (__int64*)(*(_QWORD*)(*(_QWORD*)a1 + 16672LL) + 24LL);
  }
  else {
    v45 = (__int64*)(*(_QWORD*)a1 + 13304LL);
  }
  if ((a8 & 1) != 0 || v37 != 1) {
    v61 = 0x0.0p+0f;
    v62 = 0x0.0p+0f;
    *(_QWORD*)(a1 + 305) = 0;
  }
  else {
    v46 = *v45;
    v47 = a1[304];
    v48 = HIDWORD(*v45);
    v49 = (float)(int)v46;
    v50 = v47 + 1;
    v51 = (float)*(int*)(*(_QWORD*)a1 + 13312LL) / v49;
    v52 = (int)(float)(v51 * (float)(v51 * 0x1.0000000000000p+3f));
    if (v47 < 0) {
      v58 = -0x1.0000000000000p-1f;
      v60 = -0x1.0000000000000p-1f;
      a1[305] = -1090519040;
    }
    else {
      v53 = 0x1.0000000000000p+0f;
      v54 = 0x0.0p+0f;
      v55 = v47 + 1;
      do {
        v53 = v53 * 0x1.0000000000000p-1f;
        v54 = v54 + (float)(v53 * (float)(v55 & 1));
        v296 = v55 > 1;
        v55 >>= 1;
      } while (v296);
      v56 = 0x1.0000000000000p+0f;
      v57 = v50;
      v58 = v54 + -0x1.0000000000000p-1f;
      v59 = 0x0.0p+0f;
      *((float*)a1 + 305) = v58;
      do {
        v56 = v56 / 0x1.8000000000000p+1f;
        v59 = v59 + (float)(v56 * (float)(v57 % 3));
        v296 = v57 > 2;
        v57 /= 3u;
      } while (v296);
      v60 = v59 + -0x1.0000000000000p-1f;
    }
    *((float*)a1 + 306) = v60;
    *(float*)&v63 = (float)(v58 + v58) / v49;
    v64 = *((float*)a1 + 307);
    a1[304] = v50 % v52;
    *((float*)&v63 + 1) =
        (float)(v60 * -0x1.0000000000000p+1f) / (float)(int)v48;
    v62 = (float)(v64 - v58) / v49;
    v548.val[2] = vsubq_f32(v548.val[2], COERCE_AS(float32x4_t, v63));
    v61 = (float)(*((float*)a1 + 308) - v60) / (float)(int)v48;
  }
  v65 = *((int32x4_t*)a1 + 67);
  v66 = *((int32x4_t*)a1 + 64);
  v67 = *((int32x4_t*)a1 + 65);
  LANES128(v68).n128_u64[0] = 0x3F8000003F800000LL;
  LANES128(v68).n128_u64[1] = 0x3F8000003F800000LL;
  v69 = vnegq_f64(v68);
  v70 = *((int32x4_t*)a1 + 66);
  v71 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v548.val[0], LANES128(v66).n128_f32[0]),
                     v548.val[1],
                     COERCE_AS(float32x2_t, LANES128(v66).n128_u64[0]), 1),
      v548.val[2], v66, 2);
  v72 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v548.val[0], LANES128(v67).n128_f32[0]),
                     v548.val[1],
                     COERCE_AS(float32x2_t, LANES128(v67).n128_u64[0]), 1),
      v548.val[2], v67, 2);
  v73 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v548.val[0], LANES128(v70).n128_f32[0]),
                     v548.val[1],
                     COERCE_AS(float32x2_t, LANES128(v70).n128_u64[0]), 1),
      v548.val[2], v70, 2);
  v74 = vaddq_f32(
      v548.val[3],
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v548.val[0], LANES128(v65).n128_f32[0]),
                         v548.val[1],
                         COERCE_AS(float32x2_t, LANES128(v65).n128_u64[0]), 1),
          v548.val[2], v65, 2));
  v75 = vzip1q_s32(v71, v73);
  v76 = vzip2q_s32(v71, v73);
  *((int32x4_t*)a1 + 60) = v71;
  *((int8x16_t*)a1 + 61) = v72;
  v77 = vzip1q_s32(v72, v74);
  *((int32x4_t*)a1 + 62) = v73;
  *((int32x4_t*)a1 + 63) = v74;
  v78 = vzip2q_s32(v72, v74);
  v79 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v71).n128_u64[0]), 0);
  vst4q_f32((float*)(v38 + 48), v548);
  LANES128(v79).n128_u32[0] = LANES128(v72).n128_u32[0];
  v80 = vzip1q_s32(v75, v77);
  v81 = vzip1q_s32(v76, v78);
  v82 = vzip2q_s32(v76, v78);
  LANES128(v83).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v80, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  LANES128(v78).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v82, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v83).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v72).n128_u64[0]), 0);
  LANES128(v84).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v80, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v84).n128_i8[8] =
      vqtbl1_s8(v80, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  v85 = vzip2q_s32(v75, v77);
  v86 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v71).n128_u64[0]), 1);
  LANES128(v86).n128_u32[0] = LANES128(v72).n128_u32[1];
  LANES128(v77).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v85, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  LANES128(v87).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v85, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v77).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v72).n128_u64[0]), 1);
  LANES128(v88).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v81, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v87).n128_i8[8] =
      vqtbl1_s8(v85, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  v89 = vdupq_laneq_s32(v71, 2);
  LANES128(v89).n128_u32[0] = LANES128(v72).n128_u32[2];
  v90 = vextq_s8(v72, vdupq_laneq_s32(v71, 3), 0xCu);
  *(int32x2_t*)&LANES128(v88).n128_i8[8] = vdup_laneq_s32(v72, 2);
  LANES128(v91).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v81, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v91).n128_i8[8] =
      vqtbl1_s8(v81, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  LANES128(v81).n128_u64[0] = LANES64_OF(vdup_laneq_s32(v72, 3)).n64_u64[0];
  LANES128(v72).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v82, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v78).n128_u64[1] = LANES128(v81).n128_u64[0];
  *(int8x8_t*)&LANES128(v72).n128_i8[8] =
      vqtbl1_s8(v82, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  v92 = vsubq_f32(vmulq_f32(v88, v72), vmulq_f32(v78, v91));
  v93 = vsubq_f32(vmulq_f32(v89, v72), vmulq_f32(v90, v91));
  v94 = vsubq_f32(vmulq_f32(v89, v78), vmulq_f32(v90, v88));
  v95 = vmlsq_f32(vmulq_f32(v86, v92), v93, v77);
  v96 = vmlsq_f32(vmulq_f32(v79, v92), v93, v83);
  LANES128(v93).n128_u64[0] = 0xBF800000BF800000LL;
  LANES128(v93).n128_u64[1] = 0xBF800000BF800000LL;
  v97 = vmlaq_f32(v96, v94, v84);
  v98 = vnegq_f64(v93);
  v99 = vsubq_f32(vmulq_f32(v83, v87), vmulq_f32(v77, v84));
  v100 = vsubq_f32(vmulq_f32(v79, v87), vmulq_f32(v86, v84));
  v101 = vsubq_f32(vmulq_f32(v79, v77), vmulq_f32(v83, v86));
  v102 = vmulq_f32(vmlaq_f32(v95, v94, v87), v69);
  v103 = vmulq_f32(v80, v102);
  v104 = vmlaq_f32(vmlsq_f32(vmulq_f32(v90, v99), v100, v78), v101, v72);
  v105 = vmulq_f32(
      vmlaq_f32(vmlsq_f32(vmulq_f32(v89, v99), v100, v88), v101, v91), v98);
  LANES128(v103).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v103, v103, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v103).n128_u64[0])))
          .n64_u64[0];
  LANES128(v103).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v103).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v103).n128_u64[0])))
          .n64_u64[0];
  LANES128(v103).n128_u64[1] = LANES128(v103).n128_u64[0];
  v106 = vrecpeq_f32(v103);
  v107 = vmulq_f32(v106, vrecpsq_f32(v106, v103));
  v108 = vrecpsq_f32(v107, v103);
  v109 = vceqzq_f32(v103);
  v110 = vmulq_f32(v107, v108);
  v552.val[0] = vbicq_s8(vmulq_f32(v110, v102), v109);
  v552.val[1] = vbicq_s8(vmulq_f32(v110, vmulq_f32(v97, v98)), v109);
  v552.val[2] = vbicq_s8(vmulq_f32(vmulq_f32(v104, v69), v110), v109);
  v552.val[3] = vbicq_s8(vmulq_f32(v105, v110), v109);
  v111 = vzip1q_s32(v66, v70);
  v112 = vzip2q_s32(v66, v70);
  v113 = vzip1q_s32(v67, v65);
  *(int32x4_t*)v38 = vzip1q_s32(v111, v113);
  *(int32x4_t*)(v38 + 16) = vzip2q_s32(v111, v113);
  *(int32x4_t*)(v38 + 32) = vzip1q_s32(v112, vzip2q_s32(v67, v65));
  vst4q_f32((float*)(v38 + 112), *((float32x4x4_t*)a1 + 15));
  v549 = *(float32x4x4_t*)((_BYTE*)a1 + 18);
  v114 = vzip1q_s32(v549.val[0], v549.val[2]);
  v549.val[0] = vzip2q_s32(v549.val[0], v549.val[2]);
  v549.val[2] = vzip1q_s32(v549.val[1], v549.val[3]);
  *(int32x4_t*)(v38 + 176) = vzip1q_s32(v114, v549.val[2]);
  *(int32x4_t*)(v38 + 192) = vzip2q_s32(v114, v549.val[2]);
  *(int32x4_t*)(v38 + 208) =
      vzip1q_s32(v549.val[0], vzip2q_s32(v549.val[1], v549.val[3]));
  vst4q_f32((float*)(v38 + 224), *((float32x4x4_t*)a1 + 17));
  vst4q_f32((float*)(v38 + 288), v552);
  v115 = ((__n128 (*)(__int64)) * (_QWORD*)(*(_QWORD*)a3 + 40LL))(a3),
  v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  *(_QWORD*)(v38 + 352) = LANES128(v115).n128_u64[0];
  *(_DWORD*)(v38 + 360) = LANES128(v115).n128_u32[2];
  v116 = (*(float (**)(__int64))(*(_QWORD*)a3 + 72LL))(a3),
  v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  *(float*)(v38 + 364) = tanf(v116 * 0x1.0000000000000p-1f),
                  v118 = COERCE_AS(__typeof__(v118),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v119 = COERCE_AS(__typeof__(v119),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v120 = COERCE_AS(__typeof__(v120),
                                   PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v122 = COERCE_AS(__typeof__(v122),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v123 = COERCE_AS(__typeof__(v123),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v127 = COERCE_AS(__typeof__(v127),
                                   PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v136 = COERCE_AS(__typeof__(v136),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v137 = COERCE_AS(__typeof__(v137),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v138 = COERCE_AS(__typeof__(v138),
                                   PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v40 = COERCE_AS(__typeof__(v40),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(__n128, "v3", "=w"));
  *(_DWORD*)(v38 + 368) = 0;
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a3 + 48LL))(a3) & 1) != 0) {
    v117 = (*(float (**)(__int64))(*(_QWORD*)a3 + 56LL))(a3),
    v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
    *(float*)(v38 + 368) =
        v117 / (*(float (**)(__int64))(*(_QWORD*)a3 + 64LL))(a3),
                    v118 = COERCE_AS(__typeof__(v118),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v119 = COERCE_AS(__typeof__(v119),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v120 = COERCE_AS(__typeof__(v120),
                                     PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v122 = COERCE_AS(__typeof__(v122),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v123 = COERCE_AS(__typeof__(v123),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v127 = COERCE_AS(__typeof__(v127),
                                     PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v136 = COERCE_AS(__typeof__(v136),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v137 = COERCE_AS(__typeof__(v137),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v138 = COERCE_AS(__typeof__(v138),
                                     PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v39 = COERCE_AS(__typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v40 = COERCE_AS(__typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v41 = COERCE_AS(__typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
  *(_DWORD*)(v38 + 372) = 0;
  *(float*)(v38 + 376) = v62;
  *(float*)(v38 + 380) = v61;
  v466 = COERCE_INT32X4_T(
      ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)a4 + 16LL))(a4)),
  v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v469 = v118;
  v472 = v119;
  v475 = v120;
  *(long double*)&v121 =
      ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)a4 + 24LL))(a4),
         v118 =
             COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v119 =
             COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
         v120 =
             COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
         v122 =
             COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v123 =
             COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
         v127 =
             COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
         v136 =
             COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v137 =
             COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
         v138 =
             COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
         v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
         v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v124 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v121, LANES128(v466).n128_f32[0]), v122,
                     COERCE_AS(float32x2_t, LANES128(v466).n128_u64[0]), 1),
      v123, v466, 2);
  v125 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v121, LANES128(v469).n128_f32[0]), v122,
                     COERCE_AS(float32x2_t, LANES128(v469).n128_u64[0]), 1),
      v123, v469, 2);
  v126 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v121, LANES128(v472).n128_f32[0]), v122,
                     COERCE_AS(float32x2_t, LANES128(v472).n128_u64[0]), 1),
      v123, v472, 2);
  v128 = vaddq_f32(
      v127,
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v121, LANES128(v475).n128_f32[0]), v122,
                         COERCE_AS(float32x2_t, LANES128(v475).n128_u64[0]), 1),
          v123, v475, 2));
  *(_QWORD*)(v38 + 384) = LANES128_OF(vzip2q_s32(v466, v469)).n128_u64[0];
  *(_QWORD*)(v38 + 392) = LANES128_OF(vzip2q_s32(v472, v475)).n128_u64[0];
  *(int32x2_t*)(v38 + 416) =
      vzip1_s32(COERCE_AS(int32x2_t, LANES128(v124).n128_u64[0]),
                COERCE_AS(int32x2_t, LANES128(v125).n128_u64[0]));
  *(int32x2_t*)(v38 + 424) =
      vzip1_s32(COERCE_AS(int32x2_t, LANES128(v126).n128_u64[0]),
                COERCE_AS(int32x2_t, LANES128(v128).n128_u64[0]));
  *(int32x2_t*)(v38 + 432) =
      vzip2_s32(COERCE_AS(int32x2_t, LANES128(v124).n128_u64[0]),
                COERCE_AS(int32x2_t, LANES128(v125).n128_u64[0]));
  *(int32x2_t*)(v38 + 440) =
      vzip2_s32(COERCE_AS(int32x2_t, LANES128(v126).n128_u64[0]),
                COERCE_AS(int32x2_t, LANES128(v128).n128_u64[0]));
  *(_QWORD*)(v38 + 400) =
      LANES128_OF(vuzp2q_s32(vuzp2q_s32(v124, v125), v124)).n128_u64[0];
  *(_QWORD*)(v38 + 408) =
      LANES128_OF(vuzp2q_s32(vuzp2q_s32(v126, v128), v126)).n128_u64[0];
  v129 = (*(float (**)(__int64))(*(_QWORD*)a3 + 64LL))(a3),
  v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v130 = (*(float (**)(__int64))(*(_QWORD*)a3 + 56LL))(a3),
  v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  *(_DWORD*)(v38 + 452) = 1065353216;
  v131 = (float)(v129 / v130) + -0x1.0000000000000p+0f;
  *(float*)(v38 + 448) = v131;
  *(float*)(v38 +
            456) = v131 / (*(float (**)(__int64))(*(_QWORD*)a3 + 64LL))(a3),
            v118 = COERCE_AS(__typeof__(v118),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v119 = COERCE_AS(__typeof__(v119),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v122 = COERCE_AS(__typeof__(v122),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v123 = COERCE_AS(__typeof__(v123),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v127 = COERCE_AS(__typeof__(v127),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v136 = COERCE_AS(__typeof__(v136),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v137 = COERCE_AS(__typeof__(v137),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v138 = COERCE_AS(__typeof__(v138),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v39 =
                COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v41 =
                COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  *(float*)(v38 + 460) =
      0x1.0000000000000p+0f / (*(float (**)(__int64))(*(_QWORD*)a3 + 64LL))(a3),
                  v118 = COERCE_AS(__typeof__(v118),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v119 = COERCE_AS(__typeof__(v119),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v120 = COERCE_AS(__typeof__(v120),
                                   PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v122 = COERCE_AS(__typeof__(v122),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v123 = COERCE_AS(__typeof__(v123),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v127 = COERCE_AS(__typeof__(v127),
                                   PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v136 = COERCE_AS(__typeof__(v136),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v137 = COERCE_AS(__typeof__(v137),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v138 = COERCE_AS(__typeof__(v138),
                                   PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v40 = COERCE_AS(__typeof__(v40),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(__n128, "v3", "=w"));
  (*(void (**)(__int64))(*(_QWORD*)v20 + 64LL))(v20),
      v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v132 = *(_QWORD*)&v11[2 * a1[14]];
  v133 = *(_QWORD*)&a1[2 * a1[28] + 24];
  v134 = (int32x4_t*)(*(__int64 (**)(__int64))(*(_QWORD*)v133 + 56LL))(v133),
  v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v135 = (*(__int64 (**)(__int64))(*(_QWORD*)v132 + 56LL))(v132),
  v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  memcpy((__int64)v134, v135, 0x1D0u),
      v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v467 = COERCE_INT32X4_T(
      ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)a3 + 16LL))(a3)),
  v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v470 = v136;
  v473 = v137;
  v476 = v138;
  *(long double*)
       v550.val =
      ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)a3 + 24LL))(a3),
     v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
     v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
     v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
     v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
     v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
     v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
     v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
     v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
     v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
     v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
     v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
     v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  vst4q_f32((float*)&v134[3], v550);
  v551.val[0] = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v550.val[0], LANES128(v467).n128_f32[0]),
                     v550.val[1],
                     COERCE_AS(float32x2_t, LANES128(v467).n128_u64[0]), 1),
      v550.val[2], v467, 2);
  v551.val[1] = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v550.val[0], LANES128(v470).n128_f32[0]),
                     v550.val[1],
                     COERCE_AS(float32x2_t, LANES128(v470).n128_u64[0]), 1),
      v550.val[2], v470, 2);
  v551.val[2] = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v550.val[0], LANES128(v473).n128_f32[0]),
                     v550.val[1],
                     COERCE_AS(float32x2_t, LANES128(v473).n128_u64[0]), 1),
      v550.val[2], v473, 2);
  v551.val[3] = vaddq_f32(
      v550.val[3],
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v550.val[0], LANES128(v476).n128_f32[0]),
                         v550.val[1],
                         COERCE_AS(float32x2_t, LANES128(v476).n128_u64[0]), 1),
          v550.val[2], v476, 2));
  v139 = vzip1q_s32(v551.val[0], v551.val[2]);
  v140 = vzip2q_s32(v551.val[0], v551.val[2]);
  v141 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v551.val[0]).n128_u64[0]),
                        0);
  LANES128(v141).n128_u32[0] = LANES128(v551.val[1]).n128_u32[0];
  v142 = vzip1q_s32(v551.val[1], v551.val[3]);
  v143 = vzip2q_s32(v551.val[1], v551.val[3]);
  vst4q_f32((float*)&v134[7], v551);
  v144 = vzip1q_s32(v139, v142);
  v145 = vzip1q_s32(v140, v143);
  v146 = vzip2q_s32(v140, v143);
  LANES128(v147).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v144, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  LANES128(v143).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v146, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  LANES128(v148).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v146, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v147).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v551.val[1]).n128_u64[0]), 0);
  LANES128(v149).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v144, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v148).n128_i8[8] =
      vqtbl1_s8(v146, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  *(int8x8_t*)&LANES128(v149).n128_i8[8] =
      vqtbl1_s8(v144, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  v150 = vzip2q_s32(v139, v142);
  v151 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v551.val[0]).n128_u64[0]),
                        1);
  LANES128(v151).n128_u32[0] = LANES128(v551.val[1]).n128_u32[1];
  LANES128(v142).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v150, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  LANES128(v152).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v150, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v142).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v551.val[1]).n128_u64[0]), 1);
  LANES128(v153).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v145, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v152).n128_i8[8] =
      vqtbl1_s8(v150, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  v154 = vdupq_laneq_s32(v551.val[0], 2);
  LANES128(v154).n128_u32[0] = LANES128(v551.val[1]).n128_u32[2];
  *(int32x2_t*)&LANES128(v153).n128_i8[8] = vdup_laneq_s32(v551.val[1], 2);
  LANES128(v155).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v145, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v155).n128_i8[8] =
      vqtbl1_s8(v145, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  *(int32x2_t*)&LANES128(v143).n128_i8[8] = vdup_laneq_s32(v551.val[1], 3);
  v156 = vextq_s8(v551.val[1], vdupq_laneq_s32(v551.val[0], 3), 0xCu);
  v157 = vsubq_f32(vmulq_f32(v153, v148), vmulq_f32(v143, v155));
  v158 = vsubq_f32(vmulq_f32(v154, v148), vmulq_f32(v156, v155));
  v159 = vsubq_f32(vmulq_f32(v154, v143), vmulq_f32(v156, v153));
  v160 = vmlsq_f32(vmulq_f32(v151, v157), v158, v142);
  v161 = vmlaq_f32(vmlsq_f32(vmulq_f32(v141, v157), v158, v147), v159, v149);
  v162 = vsubq_f32(vmulq_f32(v147, v152), vmulq_f32(v142, v149));
  v163 = vsubq_f32(vmulq_f32(v141, v152), vmulq_f32(v151, v149));
  v164 = vsubq_f32(vmulq_f32(v141, v142), vmulq_f32(v147, v151));
  v165 = vmulq_f32(vmlaq_f32(v160, v159, v152), v69);
  v166 = vmulq_f32(v144, v165);
  LANES128(v166).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v166, v166, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v166).n128_u64[0])))
          .n64_u64[0];
  v167 = vmlaq_f32(vmlsq_f32(vmulq_f32(v156, v162), v163, v143), v164, v148);
  LANES128(v166).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v166).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v166).n128_u64[0])))
          .n64_u64[0];
  v168 = vmulq_f32(
      vmlaq_f32(vmlsq_f32(vmulq_f32(v154, v162), v163, v153), v164, v155), v98);
  LANES128(v166).n128_u64[1] = LANES128(v166).n128_u64[0];
  v169 = vrecpeq_f32(v166);
  v170 = vmulq_f32(v169, vrecpsq_f32(v169, v166));
  v171 = vrecpsq_f32(v170, v166);
  v172 = vceqzq_f32(v166);
  v173 = vmulq_f32(v170, v171);
  v553.val[0] = vbicq_s8(vmulq_f32(v173, v165), v172);
  v553.val[1] = vbicq_s8(vmulq_f32(v173, vmulq_f32(v161, v98)), v172);
  v553.val[2] = vbicq_s8(vmulq_f32(v173, vmulq_f32(v167, v69)), v172);
  v174 = vzip1q_s32(v467, v473);
  v175 = vzip1q_s32(v470, v476);
  v553.val[3] = vbicq_s8(vmulq_f32(v173, v168), v172);
  vst4q_f32((float*)&v134[18], v553);
  *v134 = vzip1q_s32(v174, v175);
  v134[1] = vzip2q_s32(v174, v175);
  v134[2] = vzip1q_s32(vzip2q_s32(v467, v473), vzip2q_s32(v470, v476));
  (*(void (**)(__int64))(*(_QWORD*)v133 + 64LL))(v133),
      v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  if ((a8 & 1) != 0) {
    v176 = 0x0.0p+0f;
  }
  else {
    v176 = a9;
  }
  v480 = *(_QWORD*)&a1[2 * a1[42] + 38];
  v177 = (*(__int64 (**)(__int64))(*(_QWORD*)v480 + 56LL))(v480),
  v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v178 = *(_QWORD*)(a2 + 288);
  v179 = v177;
  v180 = GameRoutine_b3f6c0((_QWORD*)(v178 + 592), "Sun"),
  v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v181 = (float32x4_t*)(v180 + 6);
  v182 = v180 + 12;
  if (*((_BYTE*)v180 + 112) == 0) {
    v182 = v180 + 6;
  }
  if (*((float*)v182 + 1) > 0x0.0p+0f) {
    v181 = (float32x4_t*)(GameRoutine_b3f800(
                              (_QWORD*)(*(_QWORD*)(a2 + 288) + 592LL), "Moon") +
                          6),
    v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
  v183 = *(_QWORD**)(*((_QWORD*)a1 + 3) + 8LL);
  v184 = (_BYTE*)*v183;
  v185 = (_BYTE*)v183[1];
  v186 = v183[15];
  if (*(_BYTE*)(v178 + 188) == 1) {
    v187 = v183[10];
    v188 = 0x1.0000000000000p+0f;
    v189 = 128;
    if (*(_BYTE*)(v187 + 96) != 0) {
      v189 = 92;
    }
    if (*(_DWORD*)(v187 + v189) == 1) {
      v190 = v183[11];
      v191 = 672;
      if (*(_BYTE*)(v190 + 640) != 0) {
        v191 = 636;
      }
      v188 = exp2f(*(float*)(v190 + v191) - *(float*)(v178 + 184)),
      v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
    }
  }
  else {
    v188 = 0x1.0000000000000p+0f;
  }
  v192 = vmulq_f32(v181[1], vdupq_n_s32(0x3C23D70Au));
  v193 = 128;
  if (v184[96] != 0) {
    v193 = 92;
  }
  v194 = *(float*)&v184[v193];
  LANES128(v192).n128_u32[3] = 0;
  v195 = 632;
  if (v185[600] != 0) {
    v195 = 596;
  }
  v196 = vmulq_n_f32(v192, v194);
  LANES128(v192).n128_u32[0] = *(_DWORD*)&v185[v195];
  if (LANES128(v192).n128_f32[0] < 0x0.0p+0f) {
    v197 = COERCE_UNSIGNED_INT(
        0x1.554c980000000p-2f *
        LANES128_OF(
            vaddq_f32(vdupq_laneq_s32(v196, 2),
                      vaddq_f32(v196, vdupq_lane_s32(
                                          COERCE_AS(int32x2_t,
                                                    LANES128(v196).n128_u64[0]),
                                          1))))
            .n128_f32[0]);
    LANES128(v198).n128_u64[0] = v197 | (v197 << 32);
    LANES128(v198).n128_u64[1] = v197;
    v196 =
        vmlsq_lane_f32(v196, vsubq_f32(v198, v196),
                       COERCE_AS(float32x2_t, LANES128(v192).n128_u64[0]), 0);
  }
  v481 = v196;
  v199 = 552;
  if (v185[520] != 0) {
    v199 = 516;
  }
  v200 = exp2f(*(float*)&v185[v199]),
  v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v201 = *(_DWORD*)(*(_QWORD*)a1 + 13240LL);
  v202 = vmulq_n_f32(v481, v188 * v200);
  v546 = v202;
  if ((unsigned int)(v201 - 3) <= 3) {
    if ((unsigned int)(v201 - 5) > 1) {
      v203 = vmulq_f32(v202, COERCE_AS(float32x4_t, GameData_1a83620));
      LANES128(v203).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v203, v203, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v203).n128_u64[0])))
              .n64_u64[0];
      v204 = vmulq_f32(v202, COERCE_AS(float32x4_t, GameData_1a834b0));
      LANES128(v204).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v204, v204, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v204).n128_u64[0])))
              .n64_u64[0];
      v205 = vmulq_f32(v202, COERCE_AS(float32x4_t, GameData_1a82d20));
      LANES128(v205).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v205, v205, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v205).n128_u64[0])))
              .n64_u64[0];
      v206 = LANES64_OF(
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v205).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v205).n128_u64[0])))
                 .n64_u32[0];
      LANES128(v202).n128_u32[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v203).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v203).n128_u64[0])))
              .n64_u32[0];
      LANES128(v202).n128_u32[1] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v204).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v204).n128_u64[0])))
              .n64_u32[0];
      LANES128(v202).n128_u64[1] = v206;
    }
    else {
      LANES128(v202).n128_f32[0] = GameRoutine_652ba0(
          &v546, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f),
      v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
    }
  }
  v207 = LANES128(v181[4]).n128_u8[0];
  v546 = v202;
  v208 = v181 + 3;
  v209 = v176 + *((float*)a1 + 234);
  if (v207 == 0) {
    v208 = v181;
  }
  v210 = LANES128(*(v208)).n128_u64[0];
  v211 = LANES128(*(v208)).n128_u32[2];
  if (v209 > 0x1.5179cc0000000p+16f) {
    v209 = v209 + -0x1.5179cc0000000p+16f;
  }
  *((float*)a1 + 234) = v209;
  *(_QWORD*)v179 = v210;
  *(_QWORD*)(v179 + 8) = v211;
  v212 = 1112;
  if (v185[1080] != 0) {
    v212 = 1076;
  }
  v213 = exp2f(*(float*)&v185[v212]),
  v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v214 = LANES128(v546).n128_u32[2] | ((unsigned __int64)LODWORD(v213) << 32);
  *(_QWORD*)(v179 + 16) = LANES128(v546).n128_u64[0];
  *(_QWORD*)(v179 + 24) = v214;
  v215 = 288;
  if (v184[256] != 0) {
    v215 = 252;
  }
  v216 = v188 * (float)(*(float*)(v178 + 376) / 0x1.9000000000000p+6f);
  v217 = *(float*)&v184[v215];
  v218 = 208;
  if (v184[176] != 0) {
    v218 = 172;
  }
  v219 = *(float*)&v184[v218];
  v220 = 872;
  if (v185[840] != 0) {
    v220 = 836;
  }
  *(float*)(v179 + 88) = (float)(v216 * v217) * exp2f(*(float*)&v185[v220]),
                   v118 = COERCE_AS(__typeof__(v118),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                   v119 = COERCE_AS(__typeof__(v119),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                   v120 = COERCE_AS(__typeof__(v120),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                   v122 = COERCE_AS(__typeof__(v122),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                   v123 = COERCE_AS(__typeof__(v123),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                   v127 = COERCE_AS(__typeof__(v127),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                   v136 = COERCE_AS(__typeof__(v136),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                   v137 = COERCE_AS(__typeof__(v137),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                   v138 = COERCE_AS(__typeof__(v138),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                   v39 = COERCE_AS(__typeof__(v39),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                   v40 = COERCE_AS(__typeof__(v40),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                   v41 = COERCE_AS(__typeof__(v41),
                                   PSEUDO_REGISTER(__n128, "v3", "=w"));
  v221 = (int*)(*(_QWORD*)a1 + 13304LL);
  if (*(_BYTE*)(*(_QWORD*)a1 + 16700LL) != 0) {
    v221 = (int*)(*(_QWORD*)(*(_QWORD*)a1 + 16672LL) + 24LL);
  }
  v222 = (float)v221[1];
  *(float*)(v179 + 32) = (float)*v221;
  *(float*)(v179 + 36) = v222;
  *(_DWORD*)(v179 + 40) = a1[234];
  v223 = *((float*)a1 + 235);
  *(float*)(v179 + 44) = v223;
  v224 = *((float*)a1 + 234);
  *((float*)a1 + 235) = v224;
  v225 = v224 - v223;
  v226 = *(unsigned int*)(v178 + 472) |
         ((unsigned __int64)*(unsigned int*)(v178 + 480) << 32);
  *(_QWORD*)(v179 + 176) = *(_QWORD*)(v178 + 464);
  *(_QWORD*)(v179 + 184) = v226;
  v227 = 2112;
  if (*(_BYTE*)(v186 + 2080) != 0) {
    v227 = 2076;
  }
  v228 = *(float*)(v186 + v227);
  v229 = 2192;
  if (*(_BYTE*)(v186 + 2160) != 0) {
    v229 = 2156;
  }
  v230 = *(_DWORD*)(v186 + v229);
  v231 = 1632;
  if (*(_BYTE*)(v186 + 1600) != 0) {
    v231 = 1596;
  }
  v232 = *(float*)(v186 + v231);
  v233 = *((float*)a1 + 236) + (float)((float)(v225 * v232) / v228);
  *((float*)a1 + 236) = v233 - (float)(int)v233;
  v234 = 1552;
  if (*(_BYTE*)(v186 + 1520) != 0) {
    v234 = 1516;
  }
  v235 = *(_DWORD*)(v186 + v234);
  v236 = (int*)(v186 + 1756);
  if (*(_BYTE*)(v186 + 1760) == 0) {
    v236 = (int*)(v186 + 1792);
  }
  v237 = *v236;
  v238 = 1712;
  if (*(_BYTE*)(v186 + 1680) != 0) {
    v238 = 1676;
  }
  v239 = *(float*)(v186 + v238);
  *(_DWORD*)(v179 + 192) = v235;
  *(float*)(v179 + 196) = v232;
  *(_DWORD*)(v179 + 200) = v237;
  *(float*)(v179 + 204) = v239 * 0x1.1df46a0000000p-6f;
  v240 = 1872;
  if (*(_BYTE*)(v186 + 1840) != 0) {
    v240 = 1836;
  }
  v241 = *(_DWORD*)(v186 + v240);
  v242 = 1952;
  if (*(_BYTE*)(v186 + 1920) != 0) {
    v242 = 1916;
  }
  v243 = *(_DWORD*)(v186 + v242);
  v244 = 2032;
  if (*(_BYTE*)(v186 + 2000) != 0) {
    v244 = 1996;
  }
  v245 = (unsigned int)a1[236];
  v246 = *(unsigned int*)(v186 + v244);
  *(_DWORD*)(v179 + 208) = v241;
  *(_DWORD*)(v179 + 212) = v243;
  *(_QWORD*)(v179 + 216) = v246 | (v245 << 32);
  v247 = 2272;
  if (*(_BYTE*)(v186 + 2240) != 0) {
    v247 = 2236;
  }
  v248 = *(float*)(v186 + v247);
  *(float*)(v179 + 224) = v228;
  *(_DWORD*)(v179 + 228) = v230;
  *(_DWORD*)(v179 + 236) = 0;
  *(float*)(v179 + 232) = v248 * 0x1.1df46a0000000p-6f;
  v249 = *(unsigned __int8*)(v186 + 1760);
  v250 = 368;
  v479 = *(float*)(v186 + 1756);
  if (v184[336] != 0) {
    v250 = 332;
  }
  v474 = *(float*)(v186 + 1792);
  *(_DWORD*)(v179 + 80) = *(_DWORD*)&v184[v250];
  v251 = 128;
  if (v184[96] != 0) {
    v251 = 92;
  }
  v252 = 164;
  *(_DWORD*)(v179 + 84) = *(_DWORD*)&v184[v251];
  v253 = *(_QWORD*)(*(_QWORD*)(*((_QWORD*)a1 + 3) + 8LL) + 104LL);
  if (*(_BYTE*)(v253 + 168) == 0) {
    v252 = 200;
  }
  v254 = 280;
  if (*(_BYTE*)(v253 + 248) != 0) {
    v254 = 244;
  }
  v255 = 480;
  if (*(_BYTE*)(v253 + 432) != 0) {
    v255 = 416;
  }
  v256 = *(float32x4_t*)(v253 + v255);
  if ((unsigned int)(*(_DWORD*)(*(_QWORD*)a1 + 13240LL) - 3) <= 3) {
    v257 = vmulq_f32(v256, COERCE_AS(float32x4_t, GameData_1a83620));
    LANES128(v257).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v257, v257, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v257).n128_u64[0])))
            .n64_u64[0];
    v258 = vmulq_f32(v256, COERCE_AS(float32x4_t, GameData_1a834b0));
    LANES128(v258).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v258, v258, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v258).n128_u64[0])))
            .n64_u64[0];
    v259 = vmulq_f32(v256, COERCE_AS(float32x4_t, GameData_1a82d20));
    LANES128(v259).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v259, v259, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v259).n128_u64[0])))
            .n64_u64[0];
    LANES128(v256).n128_u64[0] =
        LANES64_OF(
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v257).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v257).n128_u64[0])))
            .n64_u32[0] |
        ((unsigned __int64)LANES64_OF(
             vpadd_f32(COERCE_AS(float32x2_t, LANES128(v258).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v258).n128_u64[0])))
             .n64_u32[0]
         << 32);
    LANES128(v256).n128_u64[1] =
        LANES64_OF(
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v259).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v259).n128_u64[0])))
            .n64_u32[0];
  }
  v477 = v249;
  v260 = 360;
  if (*(_BYTE*)(v253 + 328) != 0) {
    v260 = 324;
  }
  v261 = 568;
  if (*(_BYTE*)(v253 + 536) != 0) {
    v261 = 532;
  }
  v262 = 720;
  if (*(_BYTE*)(v253 + 688) != 0) {
    v262 = 684;
  }
  v263 = 640;
  if (*(_BYTE*)(v253 + 610) != 0) {
    v263 = 609;
  }
  if (*(_BYTE*)(v253 + 848) == 1) {
    v264 = *(float*)(v253 + 844);
  }
  else {
    v265 = 952;
    if (v185[920] != 0) {
      v265 = 916;
    }
    v264 = *(float*)&v185[v265];
  }
  v461 = v264;
  v266 = a2;
  v267 = *(float*)(v253 + v252);
  v268 = 120;
  if (*(_BYTE*)(v253 + 90) != 0) {
    v268 = 89;
  }
  v463 = v219;
  v464 = v216;
  v462 = v256;
  if ((*(_BYTE*)(v253 + v268) & 1) != 0) {
    v269 = *(float*)(v253 + v254);
    v270 = -v267;
    v271 = 800;
    v272 = v269 - v267;
    if (*(_BYTE*)(v253 + 768) != 0) {
      v271 = 764;
    }
    v273 = *(_DWORD*)(v253 + v271);
    v482 = (unsigned __int64)COERCE_UNSIGNED_INT(0x1.0000000000000p+0f / v272)
           << 32;
  }
  else {
    v482 = 0;
    v270 = -v267;
    v273 = 3;
  }
  v471 = *(_BYTE*)(v253 + v263);
  v274 = *(_DWORD*)(v253 + v260);
  v275 = 960;
  if (*(_BYTE*)(v253 + 928) != 0) {
    v275 = 924;
  }
  v468 = *(float*)(v253 + v261);
  v460 = *(float*)(v253 + v262);
  v276 = *(float*)(v253 + v275);
  v277 = 1040;
  if (*(_BYTE*)(v253 + 1008) != 0) {
    v277 = 1004;
  }
  v278 = exp2f(*(float*)(v253 + v277)),
  v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v279 = *(float*)(a7 + 4);
  v280 = v278;
  v281 = 1120;
  if (*(_BYTE*)(v253 + 1088) != 0) {
    v281 = 1084;
  }
  v282 = *(_DWORD*)(v253 + v281);
  v283 = 1200;
  if (*(_BYTE*)(v253 + 1168) != 0) {
    v283 = 1164;
  }
  v284 = *(_DWORD*)(v253 + v283);
  if (a1[309] != v273) {
    if (v273 > 2) {
      v285 = 2;
    }
    else {
      v285 = GameData_1b5f120[v273];
    }
    v286 = *(_QWORD*)(*(_QWORD*)a1 + 13232LL);
    LANES128(v484_.v484).n128_u8[0] = 22;
    strcpy(&LANES128(v484_.v484).n128_i8[1], "co_fog_type");
    v547 = &v484_.v484;
    v287 = game_templates_a93ea0((float*)v286, (unsigned __int8*)&v484_.v484,
                                 (__int64)std___1_piecewise_construct_ptr,
                                 (__int64**)&v547),
    v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v288 = LANES128(v484_.v484).n128_u8[0];
    *(_DWORD*)(v287 + 40) = v285;
    if ((v288 & 1) != 0 && v484_.v485 != 0) {
      v289 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v289 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v289, v484_.v485),
          v118 =
              COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v122 =
              COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v123 =
              COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v137 =
              COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v138 =
              COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
    }
    *(_BYTE*)(v286 + 40) = 1;
    a1[309] = v273;
  }
  v290 = *(_QWORD*)(v266 + 288);
  v291 = *(_QWORD*)(v290 + 792);
  if (v291 == 0) {
    goto LABEL_160;
  }
  v292 = v290 + 792;
  v293 = v290 + 792;
  v294 = *(_DWORD*)(a6 + 36);
  do {
    v295 = *(_DWORD*)(v291 + 32);
    v296 = v295 < v294;
    if (v295 >= v294) {
      v297 = 0;
    }
    else {
      v297 = 8;
    }
    if (!v296) {
      v293 = v291;
    }
    v291 = *(_QWORD*)(v291 + v297);
  } while (v291 != 0);
  if (v293 != v292 && v294 >= (signed __int32)*(_DWORD*)(v293 + 32)) {
    v298 = *(_QWORD*)(v293 + 40);
  }
  else {
  LABEL_160:
    v298 = 0;
  }
  v299 = v276 + 0x1.0000000000000p+0f;
  v300 = v273 == 0;
  v301 = v298 == 0;
  v302 = (_QWORD*)(v298 + 808);
  v303 = !v301;
  v304 = v300 & v303;
  if ((v300 & v303) == 0) {
    v302 = (_QWORD*)(a5 + 24);
  }
  (*(void (**)(_QWORD))(*(_QWORD*)*v302 + 40LL))(*v302),
      v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v305 = GameData_212e4d8[0];
  *(_QWORD*)(v179 + 264) = (*(__int64 (**)(__int64))GameData_212e4d8[0])(
      *(_QWORD*)(*(_QWORD*)a1 + 256LL) + 8LL),
                    v118 = COERCE_AS(__typeof__(v118),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v119 = COERCE_AS(__typeof__(v119),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v120 = COERCE_AS(__typeof__(v120),
                                     PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v122 = COERCE_AS(__typeof__(v122),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v123 = COERCE_AS(__typeof__(v123),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v127 = COERCE_AS(__typeof__(v127),
                                     PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v136 = COERCE_AS(__typeof__(v136),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v137 = COERCE_AS(__typeof__(v137),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v138 = COERCE_AS(__typeof__(v138),
                                     PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v39 = COERCE_AS(__typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v40 = COERCE_AS(__typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v41 = COERCE_AS(__typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
  *(_QWORD*)(v179 + 272) = ((__int64 (*)(__int64, _QWORD, _QWORD))*v305)(
      *(_QWORD*)(*(_QWORD*)a1 + 256LL) + 8LL, *(unsigned int*)(v178 + 568),
      (unsigned int)a1[168]),
                    v118 = COERCE_AS(__typeof__(v118),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v119 = COERCE_AS(__typeof__(v119),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v120 = COERCE_AS(__typeof__(v120),
                                     PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v122 = COERCE_AS(__typeof__(v122),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v123 = COERCE_AS(__typeof__(v123),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v127 = COERCE_AS(__typeof__(v127),
                                     PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v136 = COERCE_AS(__typeof__(v136),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v137 = COERCE_AS(__typeof__(v137),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v138 = COERCE_AS(__typeof__(v138),
                                     PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v39 = COERCE_AS(__typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v40 = COERCE_AS(__typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v41 = COERCE_AS(__typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
  if (a1[309] == 1) {
    if ((v471 & 1) != 0) {
      v306 = (float)(0x1.0000000000000p+0f / v279) * exp2f(v460),
      v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
    }
    else {
      v306 = exp2f(v468 + -0x1.8000000000000p+1f) / 0x1.9000000000000p+6f,
      v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
    }
  }
  else {
    v306 = v464 * v463;
    if ((v304 & 1) != 0) {
      v306 = 0x1.0000000000000p+0f;
    }
  }
  *(_DWORD*)(v179 + 120) = v274;
  *(float*)(v179 + 124) = v306;
  *(float*)(v179 + 160) = v299;
  *(float*)(v179 + 164) = v280;
  *(_DWORD*)(v179 + 168) = v282;
  *(_DWORD*)(v179 + 172) = v284;
  *(_QWORD*)(v179 + 112) = v482 | LODWORD(v270);
  v307 = a1[309];
  if (v307 == 2) {
    v311 = 872;
    if (v185[840] != 0) {
      v311 = 836;
    }
    v312 = exp2f(*(float*)&v185[v311]),
    v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
    *(float*)(v179 + 128) = v461 + 0x1.0000000000000p+0f;
    *(float*)(v179 + 132) = v312;
    goto LABEL_184;
  }
  if (v307 != 1) {
    *(_QWORD*)(v179 + 128) = 0x3F8000003F800000LL;
  LABEL_184:
    v310 = 0;
    *(_DWORD*)(v179 + 136) = 0;
    goto LABEL_185;
  }
  v308 = v468 + -0x1.8000000000000p+1f;
  if ((float)(v468 + -0x1.8000000000000p+1f) > 0x1.fc00000000000p+6f ||
      v308 < -0x1.2a00000000000p+7f) {
    exp2f(v308),
        v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
  v309 = 0x3F80000000000000LL;
  if ((v471 & 1) == 0) {
    v309 = 0;
  }
  *(_QWORD*)(v179 + 128) = LANES128(v462).n128_u32[0] |
                           ((unsigned __int64)LANES128(v462).n128_u32[1] << 32);
  *(_DWORD*)(v179 + 136) = v309 | LANES128(v462).n128_u32[2];
  v310 = HIDWORD(v309);
LABEL_185:
  *(_DWORD*)(v179 + 140) = v310;
  v313 = 1272;
  if (*(_BYTE*)(v253 + 1242) != 0) {
    v313 = 1241;
  }
  if ((*(_BYTE*)(v253 + v313) & 1) != 0) {
    v314 = 1392;
    if (*(_BYTE*)(v253 + 1344) != 0) {
      v314 = 1328;
    }
    v315 = *(__n128*)(v253 + v314);
  }
  else {
    v315 = ((__n128 (*)(__int64)) * (_QWORD*)(*(_QWORD*)a3 + 40LL))(a3),
    v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
  *(_QWORD*)(v179 + 144) = LANES128(v315).n128_u64[0];
  *(_DWORD*)(v179 + 156) = 0;
  *(_DWORD*)(v179 + 152) = LANES128(v315).n128_u32[2];
  (*(void (**)(_QWORD))(**((_QWORD**)a1 + 155) + 40LL))(*((_QWORD*)a1 + 155)),
      v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  *(_QWORD*)(v179 + 248) =
      ((__int64 (*)(__int64))*v305)(*(_QWORD*)(*(_QWORD*)a1 + 256LL) + 8LL),
                    v118 = COERCE_AS(__typeof__(v118),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v119 = COERCE_AS(__typeof__(v119),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v120 = COERCE_AS(__typeof__(v120),
                                     PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v122 = COERCE_AS(__typeof__(v122),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v123 = COERCE_AS(__typeof__(v123),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v127 = COERCE_AS(__typeof__(v127),
                                     PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v136 = COERCE_AS(__typeof__(v136),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v137 = COERCE_AS(__typeof__(v137),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v138 = COERCE_AS(__typeof__(v138),
                                     PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v39 = COERCE_AS(__typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v40 = COERCE_AS(__typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v41 = COERCE_AS(__typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
  *(_QWORD*)(v179 + 256) = ((__int64 (*)(__int64, _QWORD, _QWORD))*v305)(
      *(_QWORD*)(*(_QWORD*)a1 + 256LL) + 8LL,
      *(unsigned int*)(*(_QWORD*)(v266 + 288) + 1016LL), (unsigned int)a1[168]),
                    v118 = COERCE_AS(__typeof__(v118),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v119 = COERCE_AS(__typeof__(v119),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v120 = COERCE_AS(__typeof__(v120),
                                     PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v122 = COERCE_AS(__typeof__(v122),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v123 = COERCE_AS(__typeof__(v123),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v127 = COERCE_AS(__typeof__(v127),
                                     PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v136 = COERCE_AS(__typeof__(v136),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v137 = COERCE_AS(__typeof__(v137),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v138 = COERCE_AS(__typeof__(v138),
                                     PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v39 = COERCE_AS(__typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v40 = COERCE_AS(__typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v41 = COERCE_AS(__typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
  v316 = 256;
  v317 = *(_DWORD*)(*(_QWORD*)a1 + 13240LL);
  if (v185[208] != 0) {
    v316 = 192;
  }
  v318 = *(float32x4_t*)&v185[v316];
  v484_.v484 = v318;
  if ((unsigned int)(v317 - 3) <= 3) {
    if ((unsigned int)(v317 - 5) > 1) {
      v319 = vmulq_f32(v318, COERCE_AS(float32x4_t, GameData_1a83620));
      LANES128(v319).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v319, v319, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v319).n128_u64[0])))
              .n64_u64[0];
      v320 = vmulq_f32(v318, COERCE_AS(float32x4_t, GameData_1a834b0));
      LANES128(v320).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v320, v320, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v320).n128_u64[0])))
              .n64_u64[0];
      v321 = vmulq_f32(v318, COERCE_AS(float32x4_t, GameData_1a82d20));
      LANES128(v321).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v321, v321, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v321).n128_u64[0])))
              .n64_u64[0];
      v322 = LANES64_OF(
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v321).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v321).n128_u64[0])))
                 .n64_u32[0];
      LANES128(v318).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v319).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v319).n128_u64[0])))
              .n64_u32[0] |
          ((unsigned __int64)LANES64_OF(
               vpadd_f32(COERCE_AS(float32x2_t, LANES128(v320).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v320).n128_u64[0])))
               .n64_u32[0]
           << 32);
      LANES128(v318).n128_u64[1] = v322;
    }
    else {
      LANES128(v318).n128_f32[0] = GameRoutine_652ba0(
          &v484_.v484, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f),
      v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
    }
  }
  v323 = 128;
  if (v185[96] != 0) {
    v323 = 92;
  }
  v324 = *(float*)&v185[v323];
  *(_DWORD*)(v179 + 60) = 0;
  v325 = COERCE_AS(float32x4_t, GameData_1a83750);
  v326 = v324 / 0x1.921fb40000000p+1f;
  v327 = vmulq_f32(v318, COERCE_AS(float32x4_t, GameData_1a83750));
  LANES128(v327).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v327, v327, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v327).n128_u64[0])))
          .n64_u64[0];
  v328 =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v327).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v327).n128_u64[0])))
          .n64_f32[0];
  if (v328 < 0x1.0624de0000000p-10f) {
    v328 = 0x1.0624de0000000p-10f;
  }
  v329 = vmulq_n_f32(vmulq_n_f32(v318, 0x1.0000000000000p+0f / v328),
                     v326 / 0x1.9000000000000p+6f);
  *(_QWORD*)(v179 + 48) = LANES128(v329).n128_u64[0];
  *(_DWORD*)(v179 + 56) = LANES128(v329).n128_u32[2];
  v330 = 464;
  v331 = *(_DWORD*)(*(_QWORD*)a1 + 13240LL);
  if (v185[416] != 0) {
    v330 = 400;
  }
  v332 = *(float32x4_t*)&v185[v330];
  v484_.v484 = v332;
  if ((unsigned int)(v331 - 3) <= 3) {
    if ((unsigned int)(v331 - 5) > 1) {
      v333 = vmulq_f32(v332, COERCE_AS(float32x4_t, GameData_1a83620));
      LANES128(v333).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v333, v333, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v333).n128_u64[0])))
              .n64_u64[0];
      v334 = vmulq_f32(v332, COERCE_AS(float32x4_t, GameData_1a834b0));
      LANES128(v334).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v334, v334, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v334).n128_u64[0])))
              .n64_u64[0];
      v335 = vmulq_f32(v332, COERCE_AS(float32x4_t, GameData_1a82d20));
      LANES128(v335).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v335, v335, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v335).n128_u64[0])))
              .n64_u64[0];
      v336 = LANES64_OF(
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v335).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v335).n128_u64[0])))
                 .n64_u32[0];
      LANES128(v332).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v333).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v333).n128_u64[0])))
              .n64_u32[0] |
          ((unsigned __int64)LANES64_OF(
               vpadd_f32(COERCE_AS(float32x2_t, LANES128(v334).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v334).n128_u64[0])))
               .n64_u32[0]
           << 32);
      LANES128(v332).n128_u64[1] = v336;
    }
    else {
      LANES128(v332).n128_f32[0] = GameRoutine_652ba0(
          &v484_.v484, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f),
      v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
      v325 = COERCE_AS(float32x4_t, GameData_1a83750);
    }
  }
  v337 = 344;
  if (v185[312] != 0) {
    v337 = 308;
  }
  v338 = *(float*)&v185[v337];
  *(_DWORD*)(v179 + 76) = 0;
  v339 = v338 / 0x1.921fb40000000p+1f;
  v340 = vmulq_f32(v332, v325);
  LANES128(v340).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v340, v340, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v340).n128_u64[0])))
          .n64_u64[0];
  v341 =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v340).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v340).n128_u64[0])))
          .n64_f32[0];
  if (v341 < 0x1.0624de0000000p-10f) {
    v341 = 0x1.0624de0000000p-10f;
  }
  v342 = vmulq_n_f32(vmulq_n_f32(v332, 0x1.0000000000000p+0f / v341),
                     v339 / 0x1.9000000000000p+6f);
  *(_QWORD*)(v179 + 64) = LANES128(v342).n128_u64[0];
  *(_DWORD*)(v179 + 72) = LANES128(v342).n128_u32[2];
  v343 = *(_QWORD*)(*(_QWORD*)(*((_QWORD*)a1 + 3) + 8LL) + 352LL);
  v344 = *(_BYTE*)(v343 + 8);
  LANES128(v484_.v484).n128_u64[0] =
      (unsigned __int64)(GameData_212e548[0] + 2);
  if ((v344 & 1) != 0) {
    fw_text_String_CopyTerminated(&LANES128(v484_.v484).n128_i64[1],
                                  *(_QWORD*)(v343 + 24), *(_QWORD*)(v343 + 16)),
        v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
  else {
    v345 = *(_QWORD*)(v343 + 8);
    v346 = *(_QWORD*)(v343 + 24);
    v484_.v485 = *(_QWORD*)(v343 + 16);
    v484_.v486 = v346;
    LANES128(v484_.v484).n128_u64[1] = v345;
  }
  v484_.v488 = 0;
  v484_.v489 = 0;
  v484_.v487 = 0;
  v348 = *(_QWORD*)(v343 + 32);
  v347 = *(_QWORD*)(v343 + 40);
  v349 = v347 - v348;
  if (v347 != v348) {
    if ((v349 & 0x8000000000000000LL) != 0) {
      GameRoutine_a9fd80(),
          v118 =
              COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v122 =
              COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v123 =
              COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v137 =
              COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v138 =
              COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
    }
    v350 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v347 - v348, 16, 0),
    v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v351 = v350 + v349;
    v484_.v487 = v350;
    v484_.v488 = v350;
    v484_.v489 = v350 + v349;
    memcpy(v350, v348, v349),
        v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v484_.v488 = v351;
  }
  v484_.v490 = &gfx_settings_BaseParamInstance_vtable;
  v352 = *(_BYTE*)(v343 + 64);
  LANES128(v484_.v484).n128_u64[0] =
      (unsigned __int64)gfxa_TranslucencySetting_vtable;
  if ((v352 & 1) != 0) {
    fw_text_String_CopyTerminated(v491, *(_QWORD*)(v343 + 80),
                                  *(_QWORD*)(v343 + 72)),
        v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
  else {
    v353 = *(_QWORD*)(v343 + 64);
    v354 = *(_QWORD*)(v343 + 80);
    v491[1] = *(_QWORD*)(v343 + 72);
    v491[2] = v354;
    v491[0] = v353;
  }
  v355 = *(_BYTE*)(v343 + 88);
  v484_.v490 = GameData_1fc1458;
  v492 = v355;
  v356 = *(_QWORD*)(v343 + 92);
  v495 = 0;
  v496 = 0;
  v494 = 0;
  v493 = v356;
  v358 = *(_QWORD*)(v343 + 104);
  v357 = *(_QWORD*)(v343 + 112);
  v359 = v357 - v358;
  if (v357 != v358) {
    if (0xAAAAAAAAAAAAAAABLL * (v359 >> 2) > 0x1555555555555555LL) {
      goto LABEL_287;
    }
    v360 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v359, 16, 0),
    v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v361 = v360 + v359;
    v494 = v360;
    v495 = v360;
    v496 = v360 + v359;
    memcpy(v360, v358, v359),
        v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v495 = v361;
  }
  v362 = *(_BYTE*)(v343 + 144);
  v363 = *(_DWORD*)(v343 + 128);
  v498 = &gfx_settings_BaseParamInstance_vtable;
  v484_.v490 = gfx_settings_Float_vtable;
  v497 = v363;
  if ((v362 & 1) != 0) {
    fw_text_String_CopyTerminated(v499, *(_QWORD*)(v343 + 160),
                                  *(_QWORD*)(v343 + 152)),
        v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
  else {
    v364 = *(_QWORD*)(v343 + 144);
    v365 = *(_QWORD*)(v343 + 160);
    v499[1] = *(_QWORD*)(v343 + 152);
    v499[2] = v365;
    v499[0] = v364;
  }
  v366 = *(_BYTE*)(v343 + 168);
  v498 = GameData_1fc1458;
  v500 = v366;
  v367 = *(_QWORD*)(v343 + 172);
  v503 = 0;
  v504 = 0;
  v502 = 0;
  v501 = v367;
  v369 = *(_QWORD*)(v343 + 184);
  v368 = *(_QWORD*)(v343 + 192);
  v370 = v368 - v369;
  if (v368 != v369) {
    if (0xAAAAAAAAAAAAAAABLL * (v370 >> 2) > 0x1555555555555555LL) {
      goto LABEL_287;
    }
    v371 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v370, 16, 0),
    v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v372 = v371 + v370;
    v502 = v371;
    v503 = v371;
    v504 = v371 + v370;
    memcpy(v371, v369, v370),
        v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v503 = v372;
  }
  v373 = *(_BYTE*)(v343 + 224);
  v498 = gfx_settings_Float_vtable;
  v374 = *(_DWORD*)(v343 + 208);
  v506 = &gfx_settings_BaseParamInstance_vtable;
  v505 = v374;
  if ((v373 & 1) != 0) {
    fw_text_String_CopyTerminated(v507, *(_QWORD*)(v343 + 240),
                                  *(_QWORD*)(v343 + 232)),
        v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
  else {
    v375 = *(_QWORD*)(v343 + 224);
    v376 = *(_QWORD*)(v343 + 240);
    v507[1] = *(_QWORD*)(v343 + 232);
    v507[2] = v376;
    v507[0] = v375;
  }
  v377 = *(_BYTE*)(v343 + 248);
  v506 = GameData_1fc1458;
  v508 = v377;
  v378 = *(_QWORD*)(v343 + 252);
  v511 = 0;
  v512 = 0;
  v510 = 0;
  v509 = v378;
  v380 = *(_QWORD*)(v343 + 264);
  v379 = *(_QWORD*)(v343 + 272);
  v381 = v379 - v380;
  if (v379 != v380) {
    if (0xAAAAAAAAAAAAAAABLL * (v381 >> 2) > 0x1555555555555555LL) {
      goto LABEL_287;
    }
    v382 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v381, 16, 0),
    v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v383 = v382 + v381;
    v510 = v382;
    v511 = v382;
    v512 = v382 + v381;
    memcpy(v382, v380, v381),
        v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v511 = v383;
  }
  v384 = *(_DWORD*)(v343 + 288);
  v385 = *(_BYTE*)(v343 + 304);
  v506 = gfx_settings_Float_vtable;
  v514 = &gfx_settings_BaseParamInstance_vtable;
  v513 = v384;
  if ((v385 & 1) != 0) {
    fw_text_String_CopyTerminated(v515, *(_QWORD*)(v343 + 320),
                                  *(_QWORD*)(v343 + 312)),
        v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
  else {
    v386 = *(_QWORD*)(v343 + 304);
    v387 = *(_QWORD*)(v343 + 320);
    v515[1] = *(_QWORD*)(v343 + 312);
    v515[2] = v387;
    v515[0] = v386;
  }
  v388 = *(_BYTE*)(v343 + 328);
  v514 = GameData_1fc1458;
  v516 = v388;
  v389 = *(_QWORD*)(v343 + 332);
  v520 = 0;
  v518 = 0;
  v519 = 0;
  v517 = v389;
  v391 = *(_QWORD*)(v343 + 344);
  v390 = *(_QWORD*)(v343 + 352);
  v392 = v390 - v391;
  if (v390 != v391) {
    if (0xAAAAAAAAAAAAAAABLL * (v392 >> 2) > 0x1555555555555555LL) {
      goto LABEL_287;
    }
    v393 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v392, 16, 0),
    v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v394 = v393 + v392;
    v518 = v393;
    v519 = v393;
    v520 = v393 + v392;
    memcpy(v393, v391, v392),
        v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v519 = v394;
  }
  v395 = *(_DWORD*)(v343 + 368);
  v396 = *(_BYTE*)(v343 + 384);
  v514 = gfx_settings_Float_vtable;
  v522 = &gfx_settings_BaseParamInstance_vtable;
  v521 = v395;
  if ((v396 & 1) != 0) {
    fw_text_String_CopyTerminated(v523, *(_QWORD*)(v343 + 400),
                                  *(_QWORD*)(v343 + 392)),
        v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
  else {
    v397 = *(_QWORD*)(v343 + 384);
    v398 = *(_QWORD*)(v343 + 400);
    v523[1] = *(_QWORD*)(v343 + 392);
    v523[2] = v398;
    v523[0] = v397;
  }
  v399 = *(_BYTE*)(v343 + 408);
  v522 = GameData_1fc1458;
  v524 = v399;
  v400 = *(_QWORD*)(v343 + 412);
  v528 = 0;
  v526 = 0;
  v527 = 0;
  v525 = v400;
  v402 = *(_QWORD*)(v343 + 424);
  v401 = *(_QWORD*)(v343 + 432);
  v403 = v401 - v402;
  if (v401 != v402) {
    if (0xAAAAAAAAAAAAAAABLL * (v403 >> 2) > 0x1555555555555555LL) {
      goto LABEL_287;
    }
    v404 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v403, 16, 0),
    v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v405 = v404 + v403;
    v526 = v404;
    v527 = v404;
    v528 = v404 + v403;
    memcpy(v404, v402, v403),
        v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v527 = v405;
  }
  v406 = *(_DWORD*)(v343 + 448);
  v407 = *(_BYTE*)(v343 + 464);
  v522 = gfx_settings_Float_vtable;
  v530 = &gfx_settings_BaseParamInstance_vtable;
  v529 = v406;
  if ((v407 & 1) != 0) {
    fw_text_String_CopyTerminated(v531, *(_QWORD*)(v343 + 480),
                                  *(_QWORD*)(v343 + 472)),
        v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
  else {
    v408 = *(_QWORD*)(v343 + 464);
    v409 = *(_QWORD*)(v343 + 480);
    v531[1] = *(_QWORD*)(v343 + 472);
    v531[2] = v409;
    v531[0] = v408;
  }
  v410 = *(_BYTE*)(v343 + 488);
  v530 = GameData_1fc1458;
  v532 = v410;
  v411 = *(_QWORD*)(v343 + 492);
  v536 = 0;
  v534 = 0;
  v535 = 0;
  v533 = v411;
  v413 = *(_QWORD*)(v343 + 504);
  v412 = *(_QWORD*)(v343 + 512);
  v414 = v412 - v413;
  if (v412 != v413) {
    if (0xAAAAAAAAAAAAAAABLL * (v414 >> 2) > 0x1555555555555555LL) {
      goto LABEL_287;
    }
    v415 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v414, 16, 0),
    v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v416 = v415 + v414;
    v534 = v415;
    v535 = v415;
    v536 = v415 + v414;
    memcpy(v415, v413, v414),
        v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v535 = v416;
  }
  v417 = *(_DWORD*)(v343 + 528);
  v530 = gfx_settings_Float_vtable;
  v538 = &gfx_settings_BaseParamInstance_vtable;
  v418 = *(_BYTE*)(v343 + 544);
  v537 = v417;
  if ((v418 & 1) != 0) {
    fw_text_String_CopyTerminated(v539_.v539, *(_QWORD*)(v343 + 560),
                                  *(_QWORD*)(v343 + 552)),
        v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
  else {
    v419 = *(_QWORD*)(v343 + 544);
    v420 = *(_QWORD*)(v343 + 560);
    v539_.v539[1] = *(_QWORD*)(v343 + 552);
    v539_.v539[2] = v420;
    v539_.v539[0] = v419;
  }
  v421 = *(_BYTE*)(v343 + 568);
  v538 = GameData_1fc1458;
  v539_.v540 = v421;
  v422 = *(_QWORD*)(v343 + 572);
  v542 = 0;
  v544 = 0;
  v543 = 0;
  v423 = *(_QWORD*)(v343 + 584);
  v541 = v422;
  v424 = *(_QWORD*)(v343 + 592);
  v425 = v424 - v423;
  if (v424 != v423) {
    if (0xAAAAAAAAAAAAAAABLL * (v425 >> 2) <= 0x1555555555555555LL) {
      v426 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v425, 16, 0),
      v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
      v427 = v426 + v425;
      v542 = v426;
      v543 = v426;
      v544 = v426 + v425;
      memcpy(v426, v423, v425),
          v118 =
              COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v122 =
              COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v123 =
              COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v137 =
              COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v138 =
              COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
      v543 = v427;
      goto LABEL_260;
    }
  LABEL_287:
    GameRoutine_aa0e00(),
        v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
LABEL_260:
  v538 = gfx_settings_Float_vtable;
  if (v477 != 0) {
    v428 = v479;
  }
  else {
    v428 = v474;
  }
  v429 = 52;
  if (BYTE4(v501) != 0) {
    v429 = 43;
  }
  v545 = *(_DWORD*)(v343 + 608);
  *(float*)(v179 +
            92) = exp2f((float)((float)(0x1.0000000000000p+0f -
                                        LANES128(v484_.v484).n128_f32[v429]) *
                                0x1.0000000000000p+2f) +
                        0x1.0000000000000p+0f),
            v118 = COERCE_AS(__typeof__(v118),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v119 = COERCE_AS(__typeof__(v119),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v122 = COERCE_AS(__typeof__(v122),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v123 = COERCE_AS(__typeof__(v123),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v127 = COERCE_AS(__typeof__(v127),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v136 = COERCE_AS(__typeof__(v136),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v137 = COERCE_AS(__typeof__(v137),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v138 = COERCE_AS(__typeof__(v138),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v39 =
                COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v41 =
                COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v430 = 32;
  if (BYTE4(v493) != 0) {
    v430 = 23;
  }
  v431 = LANES128(v484_.v484).n128_f32[v430];
  v432 = 92;
  if (BYTE4(v517) != 0) {
    v432 = 83;
  }
  v433 = v431 * exp2f(LANES128(v484_.v484).n128_f32[v432]),
  v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v434 = 112;
  if (BYTE4(v525) != 0) {
    v434 = 103;
  }
  v435 = LANES128(v484_.v484).n128_f32[v434];
  v436 = 132;
  if (BYTE4(v533) != 0) {
    v436 = 123;
  }
  v437 = v435 * exp2f(LANES128(v484_.v484).n128_f32[v436]),
  v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  if (BYTE4(v541) != 0) {
    v438 = (int*)&v541;
  }
  else {
    v438 = &v545;
  }
  v439 = *v438;
  v440 = 72;
  if (BYTE4(v509) != 0) {
    v440 = 63;
  }
  v441 = LANES128(v484_.v484).n128_u32[v440];
  *(float*)(v179 + 96) = v433;
  *(float*)(v179 + 100) = v437;
  *(_DWORD*)(v179 + 104) = v439;
  *(_DWORD*)(v179 + 108) = v441;
  TranslucencySetting_Destructor((__int64)&v484_.v484),
      v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v442 = GameData_212e4d8[0];
  *(_QWORD*)(v179 + 240) =
      (*(__int64 (**)(__int64, _QWORD, _QWORD))GameData_212e4d8[0])(
          *(_QWORD*)(*(_QWORD*)a1 + 256LL) + 8LL, (unsigned int)a1[124],
          (unsigned int)a1[168]),
                    v118 = COERCE_AS(__typeof__(v118),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v119 = COERCE_AS(__typeof__(v119),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v120 = COERCE_AS(__typeof__(v120),
                                     PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v122 = COERCE_AS(__typeof__(v122),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v123 = COERCE_AS(__typeof__(v123),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v127 = COERCE_AS(__typeof__(v127),
                                     PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v136 = COERCE_AS(__typeof__(v136),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v137 = COERCE_AS(__typeof__(v137),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v138 = COERCE_AS(__typeof__(v138),
                                     PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v39 = COERCE_AS(__typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v40 = COERCE_AS(__typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v41 = COERCE_AS(__typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
  v443 = a1 + 128;
  if (v428 > 0x0.0p+0f) {
    v444 = a1 + 132;
  }
  else {
    v443 = a1 + 136;
    v444 = a1 + 136;
  }
  *(_QWORD*)(v179 + 280) = ((__int64 (*)(__int64, _QWORD, _QWORD))*v442)(
      *(_QWORD*)(*(_QWORD*)a1 + 256LL) + 8LL, *v443, (unsigned int)a1[200]),
                    v118 = COERCE_AS(__typeof__(v118),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v119 = COERCE_AS(__typeof__(v119),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v120 = COERCE_AS(__typeof__(v120),
                                     PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v122 = COERCE_AS(__typeof__(v122),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v123 = COERCE_AS(__typeof__(v123),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v127 = COERCE_AS(__typeof__(v127),
                                     PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v136 = COERCE_AS(__typeof__(v136),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v137 = COERCE_AS(__typeof__(v137),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v138 = COERCE_AS(__typeof__(v138),
                                     PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v39 = COERCE_AS(__typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v40 = COERCE_AS(__typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v41 = COERCE_AS(__typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
  *(_QWORD*)(v179 + 288) = ((__int64 (*)(__int64, _QWORD, _QWORD))*v442)(
      *(_QWORD*)(*(_QWORD*)a1 + 256LL) + 8LL, *v444, (unsigned int)a1[200]),
                    v118 = COERCE_AS(__typeof__(v118),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v119 = COERCE_AS(__typeof__(v119),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v120 = COERCE_AS(__typeof__(v120),
                                     PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v122 = COERCE_AS(__typeof__(v122),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v123 = COERCE_AS(__typeof__(v123),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v127 = COERCE_AS(__typeof__(v127),
                                     PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v136 = COERCE_AS(__typeof__(v136),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v137 = COERCE_AS(__typeof__(v137),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v138 = COERCE_AS(__typeof__(v138),
                                     PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v39 = COERCE_AS(__typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v40 = COERCE_AS(__typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v41 = COERCE_AS(__typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
  (*(void (**)(__int64))(*(_QWORD*)v480 + 64LL))(v480),
      v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v445 = *(_QWORD*)&a1[2 * a1[84] + 80];
  v446 = (*(__int64 (**)(__int64))(*(_QWORD*)v445 + 56LL))(v445),
  v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v447 = *(_QWORD*)(*(_QWORD*)a1 + 13232LL);
  (*(void (**)(__int64))(*(_QWORD*)v445 + 40LL))(v445),
      v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  for (i = *(__int64**)(v447 + 64); i != nullptr; i = (__int64*)*i) {
    *(_DWORD*)(v446 + 4LL * *((int*)i + 10)) = *((_DWORD*)i + 11);
  }
  (*(void (**)(__int64))(*(_QWORD*)v445 + 64LL))(v445),
      v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v449 = *((float*)a1 + 315) + 0x1.11570a0000000p-5f;
  v450 = &a1[2 * a1[56]];
  if (v449 > 0x1.5179cc0000000p+16f) {
    v449 = v449 + -0x1.5179cc0000000p+16f;
  }
  *((float*)a1 + 315) = v449;
  v451 = *((_QWORD*)v450 + 26);
  v452 = (*(__int64 (**)(__int64))(*(_QWORD*)v451 + 56LL))(v451),
  v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v453 = a1[315];
  *(_DWORD*)(v452 + 476) = 0;
  *(_QWORD*)(v452 + 468) = 0;
  *(_DWORD*)(v452 + 464) = v453;
  (*(void (**)(__int64))(*(_QWORD*)v451 + 64LL))(v451),
      v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v454 = *(_QWORD*)&a1[2 * a1[70] + 66];
  v455 = (*(__int64 (**)(__int64))(*(_QWORD*)v454 + 56LL))(v454),
  v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v456 = a1[315];
  *(_DWORD*)(v455 + 476) = 0;
  *(_QWORD*)(v455 + 468) = 0;
  *(_DWORD*)(v455 + 464) = v456;
  (*(void (**)(__int64))(*(_QWORD*)v454 + 64LL))(v454),
      v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v457 = *(_QWORD*)&a1[2 * a1[112] + 108];
  v458 = (*(__int64 (**)(__int64))(*(_QWORD*)v457 + 56LL))(v457),
  v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  memset(v458, 0, 0x400u),
      v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v3", "=w"));
  return (*(__int64 (**)(__int64))(*(_QWORD*)v457 + 64LL))(v457);
}

void gfxa_b44060(__int64 a1, int a2, __int64* a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64** v12;
  __int64* v13;
  unsigned __int64 v14;
  __int64 v15;
  char v16;
  __int64 v17;
  __int64 v18;
  atomic_ullong* v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64** v24;
  __int64* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  float v29;
  _QWORD* v30;
  float v31;
  float v32;
  _BOOL8 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 primeEm;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  _QWORD* v48;
  unsigned __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  _QWORD* v52;
  unsigned __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  _QWORD* v56;
  unsigned __int64 v57;
  __int64 v58;
  atomic_ullong* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  _QWORD* v63;
  __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  atomic_ullong* v69;
  __int64 v70;
  __int64 v71;
  _BYTE v72[15];

  v4 = *(_QWORD*)(a1 + 488);
  v6 = a2;
  if (v4 != 0 && *(_QWORD*)(a1 + 504) != 0) {
    v10 = v4 - 1;
    if ((v4 & (v4 - 1)) != 0) {
      v11 = a2;
      if (v4 <= a2) {
        v11 = a2 % v4;
      }
    }
    else {
      v11 = v10 & a2;
    }
    v12 = *(__int64***)(*(_QWORD*)(a1 + 480) + 8 * v11);
    if (v12 != nullptr) {
      v13 = *v12;
      if (v13 != nullptr) {
        if ((v4 & v10) == 0) {
          while (1) {
            v15 = v13[1];
            if (v15 == a2) {
              if (*((_DWORD*)v13 + 4) == a2) {
                goto LABEL_125;
              }
            }
            else if ((v15 & v10) != v11) {
              goto LABEL_24;
            }
            v13 = (__int64*)*v13;
            if (v13 == nullptr) {
              goto LABEL_24;
            }
          }
        }
        do {
          v14 = v13[1];
          if (v14 == a2) {
            if (*((_DWORD*)v13 + 4) == a2) {
            LABEL_125:
              v66 = a3[3];
              v68 = *a3;
              v67 = a3[1];
              v13[6] = a3[2];
              v13[7] = v66;
              LOBYTE(v66) = *((_BYTE*)v13 + 64);
              v13[4] = v68;
              v13[5] = v67;
              if ((v66 & 1) == 0) {
                *((_BYTE*)v13 + 64) = 1;
              }
              return;
            }
          }
          else {
            if (v14 >= v4) {
              v14 %= v4;
            }
            if (v14 != v11) {
              break;
            }
          }
          v13 = (__int64*)*v13;
        } while (v13 != nullptr);
      }
    }
  }
LABEL_24:
  v16 = *(_BYTE*)a3;
  v17 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       64, 16, 0);
  v18 = *(__int64*)((char*)a3 + 9);
  *(_QWORD*)(v17 + 8) = 0;
  v19 = (atomic_ullong*)(v17 + 8);
  *(_QWORD*)(v17 + 16) = 0;
  v20 = v17;
  *(_QWORD*)(v17 + 24) = 0;
  v21 = v17 + 24;
  *(_QWORD*)v17 = GameData_1fc5228;
  *(_QWORD*)(v17 + 32) = 0;
  *(_QWORD*)(v17 + 40) = 0;
  *(_QWORD*)(v17 + 48) = 0;
  *(_QWORD*)(v17 + 56) = 0xFFFFFFFF00000000LL;
  v70 = *(__int64*)((char*)a3 + 1);
  v71 = v18;
  *(_QWORD*)v72 = *(__int64*)((char*)a3 + 17);
  *(_QWORD*)&v72[7] = a3[3];
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                            memory_order_relaxed);
  v69 = (atomic_ullong*)(v17 + 8);
  v22 = *(_QWORD*)(a1 + 488);
  if (v22 == 0) {
    goto LABEL_45;
  }
  v23 = v22 - 1;
  if ((v22 & (v22 - 1)) != 0) {
    v3 = v6;
    if (v22 <= v6) {
      v3 = v6 % v22;
    }
  }
  else {
    v3 = v23 & v6;
  }
  v24 = *(__int64***)(*(_QWORD*)(a1 + 480) + 8 * v3);
  if (v24 == nullptr || (v25 = *v24) == nullptr) {
  LABEL_45:
    v28 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         96, 16, 0);
    v29 = *(float*)(a1 + 512);
    v30 = (_QWORD*)v28;
    *(_QWORD*)v28 = 0;
    *(_QWORD*)(v28 + 8) = v6;
    *(_DWORD*)(v28 + 16) = a2;
    *(_BYTE*)(v28 + 32) = v16;
    *(_BYTE*)(v28 + 64) = 1;
    *(_QWORD*)(v28 + 80) = v21;
    *(_QWORD*)(v28 + 88) = v20;
    *(_QWORD*)(v28 + 33) = v70;
    *(_QWORD*)(v28 + 41) = v71;
    *(_QWORD*)(v28 + 49) = *(_QWORD*)v72;
    *(_QWORD*)(v28 + 56) = *(_QWORD*)&v72[7];
    v31 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 504) + 1LL);
    if (v22 != 0 && (float)(v29 * (float)v22) >= v31) {
      goto LABEL_113;
    }
    v32 = v31 / v29;
    v33 = true;
    if (v22 >= 3) {
      v33 = (v22 & (v22 - 1)) != 0;
    }
    v34 = v33 | (2 * v22);
    v35 = vcvtps_u64_f32(v32);
    if (v34 <= v35) {
      primeEm = v35;
    }
    else {
      primeEm = v34;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime(primeEm);
    }
    v37 = *(_QWORD*)(a1 + 488);
    if (primeEm <= v37) {
      if (primeEm >= v37) {
        goto LABEL_108;
      }
      v44 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 504) /
                           *(float*)(a1 + 512));
      if (v37 < 3 || (v37 & (v37 - 1)) != 0) {
        v44 = std___1___next_prime(v44);
      }
      else {
        v45 = 1LL << (-(char)__clz(v44 - 1) & 63);
        if (v44 >= 2) {
          v44 = v45;
        }
      }
      if (primeEm <= v44) {
        primeEm = v44;
      }
      if (primeEm >= v37) {
        goto LABEL_108;
      }
      if (primeEm == 0) {
        v60 = *(_QWORD*)(a1 + 480);
        *(_QWORD*)(a1 + 480) = 0;
        if (v60 != 0) {
          v61 = 128;
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
            v61 = 56;
          }
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v61, v60);
        }
        *(_QWORD*)(a1 + 488) = 0;
        goto LABEL_108;
      }
    }
    v38 = fw_memory_g_heap_manager_ptr;
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210();
    }
    v39 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         8 * primeEm, 16, 0);
    v40 = *(_QWORD*)(a1 + 480);
    *(_QWORD*)(a1 + 480) = v39;
    if (v40 != 0) {
      v41 = 128;
      if (*(_QWORD*)(*(_QWORD*)v38 + 200LL) == 0) {
        v41 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v38 + v41, v40);
    }
    v42 = primeEm & 7;
    *(_QWORD*)(a1 + 488) = primeEm;
    if (primeEm >= 8) {
      v43 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)(a1 + 480) + 8 * v43) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 480) + 8 * v43 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 480) + 8 * v43 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 480) + 8 * v43 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 480) + 8 * v43 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 480) + 8 * v43 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 480) + 8 * v43 + 48) = 0;
        v46 = *(_QWORD*)(a1 + 480) + 8 * v43;
        v43 += 8;
        *(_QWORD*)(v46 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v43);
    }
    else {
      v43 = 0;
    }
    if ((primeEm & 7) != 0) {
      v47 = 8 * v43;
      do {
        --v42;
        *(_QWORD*)(*(_QWORD*)(a1 + 480) + v47) = 0;
        v47 += 8;
      } while (v42 != 0);
    }
    v48 = *(_QWORD**)(a1 + 496);
    if (v48 != nullptr) {
      v49 = v48[1];
      v50 = a1 + 496;
      v51 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v49 >= primeEm) {
          v49 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)(a1 + 480) + 8 * v49) = v50;
        v52 = (_QWORD*)*v48;
        if (*v48 == 0) {
          goto LABEL_108;
        }
        while (1) {
          v53 = v52[1];
          if (v53 >= primeEm) {
            v53 %= primeEm;
          }
          if (v53 != v49) {
            v54 = *(_QWORD*)(a1 + 480);
            if (*(_QWORD*)(v54 + 8 * v53) == 0) {
              *(_QWORD*)(v54 + 8 * v53) = v48;
              goto LABEL_83;
            }
            *v48 = *v52;
            *v52 = **(_QWORD**)(*(_QWORD*)(a1 + 480) + 8 * v53);
            **(_QWORD**)(*(_QWORD*)(a1 + 480) + 8 * v53) = v52;
            v52 = v48;
          }
          v53 = v49;
        LABEL_83:
          v48 = v52;
          v52 = (_QWORD*)*v52;
          v49 = v53;
          if (v52 == nullptr) {
            goto LABEL_108;
          }
        }
      }
      v55 = v49 & v51;
      *(_QWORD*)(*(_QWORD*)(a1 + 480) + 8 * v55) = v50;
      while (1) {
        v56 = (_QWORD*)*v48;
        if (*v48 == 0) {
          break;
        }
        v57 = v56[1] & v51;
        if (v57 == v55) {
          v48 = (_QWORD*)*v48;
        }
        else {
          v58 = *(_QWORD*)(a1 + 480);
          if (*(_QWORD*)(v58 + 8 * v57) != 0) {
            *v48 = *v56;
            *v56 = **(_QWORD**)(*(_QWORD*)(a1 + 480) + 8 * v57);
            **(_QWORD**)(*(_QWORD*)(a1 + 480) + 8 * v57) = v56;
          }
          else {
            *(_QWORD*)(v58 + 8 * v57) = v48;
            v48 = v56;
            v55 = v57;
          }
        }
      }
    }
  LABEL_108:
    v22 = *(_QWORD*)(a1 + 488);
    if ((v22 & (v22 - 1)) != 0) {
      if (v22 <= v6) {
        v3 = v6 % v22;
      }
      else {
        v3 = v6;
      }
    }
    else {
      v3 = (v22 - 1) & v6;
    }
  LABEL_113:
    v62 = *(_QWORD*)(a1 + 480);
    v63 = *(_QWORD**)(v62 + 8 * v3);
    if (v63 != nullptr) {
      v19 = v69;
      *v30 = *v63;
      *v63 = v30;
    }
    else {
      v64 = *(_QWORD*)(a1 + 496);
      v19 = v69;
      *(_QWORD*)(a1 + 496) = v30;
      *v30 = v64;
      *(_QWORD*)(v62 + 8 * v3) = a1 + 496;
      if (v64 != 0) {
        v65 = *(_QWORD*)(v64 + 8);
        if ((v22 & (v22 - 1)) != 0) {
          if (v65 >= v22) {
            v65 %= v22;
          }
        }
        else {
          v65 &= v22 - 1;
        }
        *(_QWORD*)(*(_QWORD*)(a1 + 480) + 8 * v65) = v30;
      }
    }
    ++*(_QWORD*)(a1 + 504);
    goto LABEL_122;
  }
  if ((v22 & v23) == 0) {
    while (1) {
      v27 = v25[1];
      if (v27 == v6) {
        if (*((_DWORD*)v25 + 4) == a2) {
          goto LABEL_96;
        }
      }
      else if ((v27 & v23) != v3) {
        goto LABEL_45;
      }
      v25 = (__int64*)*v25;
      if (v25 == nullptr) {
        goto LABEL_45;
      }
    }
  }
  while (1) {
    v26 = v25[1];
    if (v26 == v6) {
      break;
    }
    if (v26 >= v22) {
      v26 %= v22;
    }
    if (v26 != v3) {
      goto LABEL_45;
    }
  LABEL_35:
    v25 = (__int64*)*v25;
    if (v25 == nullptr) {
      goto LABEL_45;
    }
  }
  if (*((_DWORD*)v25 + 4) != a2) {
    goto LABEL_35;
  }
LABEL_96:
  if (atomic_fetch_add(v19, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v59 = (atomic_ullong*)(v17 + 8);
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak(v20);
    v19 = v59;
  }
LABEL_122:
  if (atomic_fetch_add(v19, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    std___1___shared_weak_count___release_weak(v20);
  }
}

void gfxa_b52720(__int64 a1, __int64* a2, __int64 a3)
{
  __int64 i;
  const char* v7;
  unsigned __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  __int64 v16;
  struct {
    _QWORD v17[2];
    const char* v18;
  } v17_;
  __int64 v19[3];
  struct {
    _QWORD v20[2];
    __int64 v21;
  } v20_;
  struct {
    __int64 v22;
    int v23;
    int v24;
    __int64 v25;
    char v26;
    char gap105_[3];
    int v27;
  } v22_;

  for (i = 0; i != 16; ++i) {
    v22_.v27 = 0;
    v22_.v22 = 0x1700000000LL;
    v22_.v25 = 0x100000001LL;
    v22_.v26 = 1;
    v22_.v23 = *(_DWORD*)(a3 + 4 * i);
    v22_.v24 = v22_.v23;
    strcpy((char*)v19, "$CharaSelfShadowMap");
    std___1_to_string_1a0a790((void*)(v17_.v17), (unsigned int)i);
    if ((v17_.v17[0] & 1) != 0) {
      v7 = v17_.v18;
    }
    else {
      v7 = (char*)v17_.v17 + 1;
    }
    if ((v17_.v17[0] & 1) != 0) {
      v8 = v17_.v17[1];
    }
    else {
      v8 = (unsigned __int64)LOBYTE(v17_.v17[0]) >> 1;
    }
    v9 = (_QWORD*)GameRoutine_1a09ce0((__int64)v19, v7, v8);
    v11 = v9[1];
    v10 = v9[2];
    v20_.v20[0] = *v9;
    v20_.v20[1] = v11;
    v20_.v21 = v10;
    v9[1] = 0;
    v9[2] = 0;
    *v9 = 0;
    if ((v17_.v17[0] & 1) != 0 && v17_.v18 != nullptr) {
      v12 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v12,
                                    (__int64)v17_.v18);
    }
    if ((v19[0] & 1) != 0 && v19[2] != 0) {
      v13 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v13, v19[2]);
    }
    v14 = ResourceBuilder_b528e0(a2, (unsigned __int8*)v20_.v20,
                                 (__int64)&v22_.v22);
    v15 = v20_.v20[0];
    *(_QWORD*)(a1 + 8 * i) = v14;
    if ((v15 & 1) != 0 && v20_.v21 != 0) {
      v16 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v16, v20_.v21);
    }
  }
}

#pragma GCC visibility pop
