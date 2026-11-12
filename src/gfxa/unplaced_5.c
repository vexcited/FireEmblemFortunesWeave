#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void game_a8ed00(PSEUDO_X8, __int64 result, __int64,
                                            unsigned __int64);
__attribute__((swiftcall)) void std___1_to_string_1a0a790(PSEUDO_X8, _QWORD);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 LightingAnimModule_c6da10(__int64 result);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_frame_clock;
void GameHr_c6f7e0(__int64, __int64);
void GameHr_c71860(__int64, int, unsigned int);
void GameRoutine_c6a500(__int64, __int64);
void LightingAnimModule_c6ef90(__int64, float);
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 gfxa_c622a0(__int64 result, float32x4_t* a2, __int64 a3, __int64 a4,
                    char a5);
float32x4_t* gfxa_c63da0(float32x4_t* result, float32x4_t* a2, float32x4_t* a3,
                         float32x4_t* a4, float32x4_t* a5, __int64 a6);
bool gfxa_c64240(float32x4_t* a1, float32x4_t* a2, __int64 a3);
void gfxa_c649f0(unsigned int* a1, unsigned int a2, _QWORD* a3);
__int64 gfxa_c65bf0(__int64 result, float a2);
void gfxa_c686d0(__int64 a1, __int64 a2);
void gfxa_c6f0a0(__int64 a1, char a2, float a3);
__int64 gfxa_c702b0(__int64 a1, int a2, __int64 a3, unsigned __int64 a4);
__int64 gfxa_c71600(__int64 a1, int a2, __int64 a3, unsigned __int64 a4,
                    __int64 a5, unsigned __int64 a6);

__int64 gfxa_c622a0(__int64 result, float32x4_t* a2, __int64 a3, __int64 a4,
                    char a5)
{

#pragma clang fp contract(off)
  __int64 v8;
  float32x4_t* v9;
  float32x4_t* v10;
  float32x4_t* v11;
  float32x4_t* v12;
  __int64 v13;
  float32x4_t* v14;
  float32x4_t v15;
  float32x4_t v16;
  int8x16_t v17;
  float32x2_t v18;
  float32x4_t v19;
  float32x4_t v20;
  int8x16_t v21;
  int8x16_t v22;
  unsigned __int8 v23;
  unsigned __int32 v24;
  unsigned __int64 v25;
  float32x4_t v26;
  float32x4_t v27;
  int8x16_t v28;
  int8x16_t v29;
  unsigned __int8 v30;
  unsigned __int32 v31;
  unsigned __int64 v32;
  unsigned __int32 v33;
  unsigned __int64 v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  int8x16_t v38;
  int8x16_t v39;
  unsigned __int32 v40;
  unsigned __int64 v41;
  unsigned __int32 v42;
  unsigned __int64 v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  int8x16_t v47;
  int8x16_t v48;
  unsigned __int32 v49;
  unsigned __int64 v50;
  unsigned __int32 v51;
  unsigned __int64 v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  int8x16_t v56;
  int8x16_t v57;
  unsigned __int32 v58;
  unsigned __int64 v59;
  float32x4_t* v60;
  float32x4_t* v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  int8x16_t v65;
  int8x16_t v66;
  unsigned __int8 v67;
  float32x4_t v68;
  int8x16_t v69;
  unsigned __int8 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  unsigned __int64 v74;
  unsigned __int32 v75;
  unsigned __int64 v76;
  float32x4_t v77;
  float32x4_t v78;
  float32x4_t v79;
  int8x16_t v80;
  int8x16_t v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  unsigned __int64 v84;
  unsigned __int64 v85;
  unsigned __int32 v86;
  unsigned __int64 v87;
  float32x4_t v88;
  float32x4_t v89;
  float32x4_t v90;
  int8x16_t v91;
  int8x16_t v92;
  unsigned __int32 v93;
  unsigned __int64 v94;
  unsigned __int64 v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  float32x4_t v98;
  float32x4_t v99;
  float32x4_t v100;
  int8x16_t v101;
  int8x16_t v102;
  unsigned __int32 v103;
  unsigned __int64 v104;
  float32x4_t* v105;
  float32x4_t* v106;
  float32x4_t v107;
  float32x4_t v108;
  float32x4_t v109;
  int8x16_t v110;
  int8x16_t v111;
  unsigned __int8 v112;
  float32x4_t v113;
  int8x16_t v114;
  unsigned __int8 v115;
  unsigned __int64 v116;
  unsigned __int64 v117;
  unsigned __int64 v118;
  unsigned __int64 v119;
  unsigned __int32 v120;
  unsigned __int64 v121;
  float32x4_t v122;
  float32x4_t v123;
  float32x4_t v124;
  int8x16_t v125;
  int8x16_t v126;
  unsigned __int64 v127;
  unsigned __int64 v128;
  unsigned __int64 v129;
  unsigned __int64 v130;
  unsigned __int64 v131;
  unsigned __int64 v132;
  unsigned __int64 v133;
  float32x4_t v134;
  float32x4_t v135;
  float32x4_t v136;
  int8x16_t v137;
  int8x16_t v138;
  unsigned __int32 v139;
  unsigned __int64 v140;
  float32x4_t v141;
  float32x4_t v142;
  float32x4_t v143;
  int8x16_t v144;
  int8x16_t v145;
  unsigned __int8 v146;
  float32x4_t v147;
  int8x16_t v148;
  unsigned __int8 v149;
  unsigned __int64 v150;
  float32x4_t v151;
  unsigned __int64 v152;
  float32x4_t v153;
  float32x4_t v154;
  float32x4_t v155;
  float32x4_t v156;
  int8x16_t v157;
  int8x16_t v158;
  unsigned __int64 v159;
  float32x4_t v160;
  unsigned __int64 v161;
  float32x4_t v162;
  float32x4_t v163;
  float32x4_t v164;
  int8x16_t v165;
  int8x16_t v166;
  unsigned __int64 v167;
  unsigned __int32 v168;
  unsigned __int64 v169;
  float32x4_t v170;
  float32x4_t* v171;
  float32x4_t v172;
  float32x4_t v173;
  int8x16_t v174;
  float32x2_t v175;
  float32x4_t v176;
  int8x16_t v177;
  float32x2_t v178;
  float32x4_t v179;
  int8x16_t v180;
  unsigned __int32 v181;
  __int64 v182;
  float32x4_t* v183;
  float32x4_t v184;
  int8x16_t v185;
  float32x4_t* v186;
  float32x4_t* v187;
  float32x4_t v188;
  float32x4_t v189;
  int8x16_t v190;
  float32x4_t v191;
  float32x4_t v192;
  int8x16_t v193;
  float32x4_t* v194;
  unsigned __int32 v195;
  unsigned __int64 v196;
  float32x4_t v197;
  float32x4_t v198;
  int8x16_t v199;
  float32x2_t v200;
  float32x4_t v201;
  float32x4_t v202;
  int8x16_t v203;
  float32x4_t v204;
  float32x4_t v205;
  int8x16_t v206;
  unsigned __int32 v207;
  unsigned __int64 v208;
  bool v209;
  float32x4_t v210;
  int8x16_t v211;
  float32x4_t v212;
  float32x4_t v213;
  int8x16_t v214;
  unsigned __int64 n128_u64;
  float32x4_t v216;
  int8x16_t v217;
  float32x4_t* v218;
  float32x4_t v219;
  float32x4_t v220;
  int8x16_t v221;
  unsigned __int32 v222;
  unsigned __int32 v223;
  unsigned __int64 v224;
  float32x4_t v225;
  float32x4_t v226;
  int8x16_t v227;
  float32x2_t v228;
  float32x4_t v229;
  float32x4_t v230;
  int8x16_t v231;
  float32x4_t v232;
  float32x4_t v233;
  int8x16_t v234;
  unsigned __int32 v235;
  unsigned __int64 v236;
  float32x4_t* v237;
  float32x4_t v238;
  float32x4_t v239;
  float32x4_t v240;
  float32x4_t v241;
  int8x16_t v242;
  int8x16_t v243;
  float32x4_t* v244;
  float32x4_t v245;
  float32x4_t v246;
  float32x4_t v247;
  float32x4_t v248;
  float32x4_t v249;
  int8x16_t v250;
  int8x16_t v251;
  int8x16_t v252;
  unsigned __int8 v253;
  unsigned __int32 v254;
  unsigned __int64 v255;
  float32x4_t* v256;
  float32x4_t v257;
  float32x4_t v258;
  float32x4_t v259;
  float32x4_t v260;
  int8x16_t v261;
  int8x16_t v262;
  unsigned __int8 v263;
  float32x4_t v264;
  int8x16_t v265;
  unsigned __int8 v266;
  unsigned __int64 v267;
  float32x4_t* v268;
  bool v270;
  __int64 v271;
  float32x4_t* v272;
  __int64 v273;
  float32x4_t* v274;
  float32x4_t v275;
  float32x4_t v276;
  float32x4_t v277;
  float32x4_t v278;
  int8x16_t v279;
  int8x16_t v280;
  unsigned __int32 v281;
  __int64 v282;
  float32x4_t* v283;
  unsigned __int64 v284;
  float32x4_t v285;
  float32x4_t v286;
  float32x4_t v287;
  int8x16_t v288;
  int8x16_t v289;
  unsigned __int64 v290;
  unsigned __int64 v291;
  bool v292;
  __int64 v293;
  float32x4_t* v294;
  float32x4_t v295;
  float32x4_t v296;
  float32x4_t v297;
  int8x16_t v298;
  int8x16_t v299;
  float32x4_t* v300;
  float32x4_t v301;
  float32x4_t v302;
  float32x4_t v303;
  int8x16_t v304;
  int8x16_t v305;
  unsigned __int32 v306;
  float32x4_t v307;
  float32x4_t v308;
  float32x4_t v309;
  int8x16_t v310;
  int8x16_t v311;
  float32x4_t v312;
  float32x4_t v313;
  int8x16_t v314;
  int8x16_t v315;
  float32x4_t* v316;
  unsigned __int64 v317;
  unsigned __int32 v318;
  unsigned __int64 v319;
  __int64 v320;
  float32x4_t* v321;
  __int64 v322;
  float32x4_t* v323;
  float32x4_t* v324;
  float32x4_t v325;
  float32x4_t v326;
  float32x4_t v327;
  float32x4_t v328;
  int8x16_t v329;
  int8x16_t v330;
  float32x4_t* v331;
  unsigned __int32 v332;
  unsigned __int64 v333;
  float32x4_t* v334;
  __int64 v335;
  unsigned __int32 v336;
  unsigned __int64 v337;
  __int64 v338;
  unsigned __int64 v339;
  unsigned __int64 v340;
  float32x4_t v341;
  float32x4_t* v342;
  float32x4_t v343;
  float32x4_t v344;
  float32x4_t v345;
  int8x16_t v346;
  int8x16_t v347;
  unsigned __int32 v348;
  float32x4_t* v349;
  unsigned __int64 v350;
  unsigned __int32 v351;
  unsigned __int64 v352;
  float32x4_t v353;
  float32x4_t v354;
  float32x4_t v355;
  int8x16_t v356;
  int8x16_t v357;
  unsigned __int64 v358;
  unsigned __int64 v359;
  unsigned __int64 v360;
  unsigned __int64 v361;
  unsigned __int64 v362;
  unsigned __int64 v363;
  unsigned __int64 v364;
  float32x4_t v365;
  unsigned __int32 v366;
  float32x4_t v367;
  float32x4_t v368;
  float32x4_t v369;
  int8x16_t v370;
  int8x16_t v371;
  unsigned __int64 v372;
  float32x4_t v373;
  float32x4_t* v374;
  float32x4_t v375;
  float32x4_t v376;
  float32x4_t v377;
  int8x16_t v378;
  int8x16_t v379;
  unsigned __int32 v380;
  float32x4_t* v381;
  unsigned __int64 v382;
  unsigned __int64 v383;
  float32x4_t v384;
  float32x4_t v385;
  float32x4_t v386;
  float32x4_t v387;
  int8x16_t v388;
  int8x16_t v389;
  unsigned __int64 v390;
  float32x4_t v391;
  float32x4_t v392;
  float32x4_t v393;
  int8x16_t v394;
  int8x16_t v395;
  unsigned __int64 v396;
  unsigned __int64 v397;
  unsigned __int64 v398;
  unsigned __int64 v399;
  float32x4_t v400;
  float32x4_t v401;
  float32x4_t v402;
  int8x16_t v403;
  int8x16_t v404;
  unsigned __int64 v405;
  unsigned __int64 v406;
  unsigned __int64 v407;
  unsigned __int64 v408;
  unsigned __int32 v409;
  float32x4_t v410;
  float32x4_t v411;
  float32x4_t v412;
  int8x16_t v413;
  int8x16_t v414;
  unsigned __int64 v415;
  unsigned __int64 v416;
  unsigned __int64 v417;
  float32x4_t v418;
  float32x4_t v419;
  float32x4_t v420;
  int8x16_t v421;
  int8x16_t v422;
  unsigned __int64 v423;
  unsigned __int64 v424;
  unsigned __int64 v425;
  unsigned __int64 v426;
  unsigned __int32 v427;
  float32x4_t v428;
  float32x4_t v429;
  float32x4_t v430;
  int8x16_t v431;
  int8x16_t v432;
  unsigned __int64 v433;
  unsigned __int64 v435;
  unsigned __int64 v436;
  unsigned __int64 v437;
  unsigned __int64 v438;
  unsigned __int64 v439;
  unsigned __int64 v440;
  unsigned __int64 v441;
  unsigned __int64 v442;
  unsigned __int64 v443;
  unsigned __int64 v444;
  unsigned __int64 v445;
  unsigned __int64 v446;
  unsigned __int64 v447;
  unsigned __int64 v448;
  unsigned __int64 v449;
  unsigned __int64 v450;
  unsigned __int64 v451;
  unsigned __int64 v452;
  unsigned __int64 v453;
  unsigned __int64 v454;
  unsigned __int64 v455;
  unsigned __int64 v456;
  unsigned __int64 v457;
  unsigned __int64 v458;
  unsigned __int64 v459;
  unsigned __int64 v460;
  unsigned __int64 v461;
  unsigned __int64 v462;
  unsigned __int64 v463;
  unsigned __int64 v464;
  unsigned __int64 v465;
  unsigned __int64 v466;
  unsigned __int64 v467;
  unsigned __int64 v468;
  unsigned __int64 v469;
  unsigned __int64 v470;
  unsigned __int64 v471;
  unsigned __int64 v472;
  unsigned __int64 v473;
  unsigned __int64 v474;
  unsigned __int64 v475;
  unsigned __int64 v476;
  unsigned __int64 v477;
  unsigned __int64 v478;
  unsigned __int64 v479;
  unsigned __int64 v480;
  unsigned __int64 v481;
  unsigned __int64 v482;
  unsigned __int64 v483;
  unsigned __int64 v484;
  unsigned __int64 v485;
  unsigned __int64 v486;
  unsigned __int64 v487;
  unsigned __int64 v488;
  unsigned __int64 v489;
  unsigned __int64 v490;
  unsigned __int64 v491;
  unsigned __int64 v492;
  unsigned __int64 v493;
  unsigned __int64 v494;
  unsigned __int64 v495;
  unsigned __int64 v496;
  unsigned __int64 v497;
  unsigned __int64 v498;
  unsigned __int64 v499;
  unsigned __int64 v500;
  unsigned __int64 v501;
  unsigned __int64 v502;
  unsigned __int64 v503;
  unsigned __int64 v504;
  unsigned __int64 v505;
  unsigned __int64 v506;
  unsigned __int64 v507;
  unsigned __int64 v508;
  unsigned __int64 v509;
  unsigned __int64 v510;
  unsigned __int64 v511;
  unsigned __int64 v512;
  unsigned __int64 v513;
  unsigned __int64 v514;
  unsigned __int64 v515;
  unsigned __int64 v516;
  unsigned __int64 v517;
  unsigned __int64 v518;
  unsigned __int64 v519;
  unsigned __int64 v520;
  unsigned __int64 v521;
  unsigned __int64 v522;
  unsigned __int64 v523;
  unsigned __int64 v524;
  unsigned __int64 v525;
  unsigned __int64 v526;

  v8 = result;
LABEL_2:
  v9 = a2 - 2;
  v10 = a2 - 4;
  v11 = a2 - 6;
  v12 = (float32x4_t*)v8;
  while (1) {
    v8 = (__int64)v12;
    v13 = ((char*)a2 - (char*)v12) >> 5;
    if (v13 <= 2) {
      if ((unsigned __int64)v13 < 2) {
        return result;
      }
      if (v13 == 2) {
        v238 = a2[-2];
        v237 = a2 - 2;
        v239 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
        v240 = vsubq_f32(v239, v238);
        v241 = vsubq_f32(v239, *v12);
        v242 = vmulq_f32(v240, v240);
        v243 = vmulq_f32(v241, v241);
        LANES128(v242).n128_u64[0] =
            LANES64_OF(
                vadd_f32(COERCE_AS(
                             float32x2_t,
                             LANES128_OF(vextq_s8(v242, v242, 8u)).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v242).n128_u64[0])))
                .n64_u64[0];
        LANES128(v243).n128_u64[0] =
            LANES64_OF(
                vadd_f32(COERCE_AS(
                             float32x2_t,
                             LANES128_OF(vextq_s8(v243, v243, 8u)).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v243).n128_u64[0])))
                .n64_u64[0];
        if ((LANES64_OF(
                 vcgt_f32(
                     vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v243).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v243).n128_u64[0])),
                     vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v242).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v242).n128_u64[0]))))
                 .n64_u32[0] &
             1) == 0) {
          return result;
        }
        goto LABEL_105;
      }
      goto LABEL_10;
    }
    if (v13 == 3) {
      break;
    }
    if (v13 == 4) {
      v244 = v12 + 2;
      v256 = v12 + 4;
      v257 = v12[4];
      v258 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
      v259 = vsubq_f32(v258, v12[2]);
      v260 = vsubq_f32(v258, *v12);
      v261 = vmulq_f32(v259, v259);
      v262 = vmulq_f32(v260, v260);
      LANES128(v261).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v261, v261, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v261).n128_u64[0])))
              .n64_u64[0];
      LANES128(v262).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v262, v262, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v262).n128_u64[0])))
              .n64_u64[0];
      LANES128(v261).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v261).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v261).n128_u64[0])))
              .n64_u64[0];
      v263 =
          LANES64_OF(
              vcgt_f32(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v262).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v262).n128_u64[0])),
                  COERCE_AS(float32x2_t, LANES128(v261).n128_u64[0])))
              .n64_u8[0];
      v264 = vsubq_f32(v258, v257);
      v265 = vmulq_f32(v264, v264);
      LANES128(v265).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v265, v265, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v265).n128_u64[0])))
              .n64_u64[0];
      v266 =
          LANES64_OF(
              vcgt_f32(COERCE_AS(float32x2_t, LANES128(v261).n128_u64[0]),
                       vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v265).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v265).n128_u64[0]))))
              .n64_u8[0];
      if ((v263 & 1) != 0) {
        if ((v266 & 1) != 0) {
          v487 = LANES128(*(v12)).n128_u64[1];
          v518 = LANES128(v12[1]).n128_u64[0];
          v455 = LANES128(*(v12)).n128_u64[0];
          LANES128(v12[1]).n128_u32[0] = LANES128(v12[5]).n128_u32[0];
          v267 = LANES128(v12[4]).n128_u64[1];
          LANES128(*(v12)).n128_u64[0] = LANES128(*(v256)).n128_u64[0];
          LANES128(*(v12)).n128_u64[1] = v267;
          LANES128(v12[5]).n128_u32[0] = v518;
          LANES128(*(v256)).n128_u64[0] = v455;
          LANES128(v12[4]).n128_u64[1] = v487;
        }
        else {
          v493 = LANES128(*(v12)).n128_u64[1];
          v524 = LANES128(v12[1]).n128_u64[0];
          v459 = LANES128(*(v12)).n128_u64[0];
          LANES128(v12[1]).n128_u32[0] = LANES128(v12[3]).n128_u32[0];
          v399 = LANES128(v12[2]).n128_u64[1];
          LANES128(*(v12)).n128_u64[0] = LANES128(*(v244)).n128_u64[0];
          LANES128(*(v12)).n128_u64[1] = v399;
          LANES128(v12[3]).n128_u32[0] = v524;
          LANES128(*(v244)).n128_u64[0] = v459;
          LANES128(v12[2]).n128_u64[1] = v493;
          v400 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
          v401 = vsubq_f32(v400, v257);
          v402 = vsubq_f32(v400, v12[2]);
          v403 = vmulq_f32(v401, v401);
          v404 = vmulq_f32(v402, v402);
          LANES128(v403).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v403, v403, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v403).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v404).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v404, v404, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v404).n128_u64[0])))
                  .n64_u64[0];
          if ((LANES64_OF(
                   vcgt_f32(
                       vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v404).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v404).n128_u64[0])),
                       vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v403).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v403).n128_u64[0]))))
                   .n64_u8[0] &
               1) != 0) {
            v405 = LANES128(v12[4]).n128_u64[1];
            v407 = LANES128(v12[2]).n128_u64[1];
            v406 = LANES128(v12[3]).n128_u64[0];
            v408 = LANES128(*(v244)).n128_u64[0];
            LANES128(*(v244)).n128_u64[0] = LANES128(*(v256)).n128_u64[0];
            LANES128(v12[2]).n128_u64[1] = v405;
            v409 = LANES128(v12[5]).n128_u32[0];
            LANES128(*(v256)).n128_u64[0] = v408;
            LANES128(v12[4]).n128_u64[1] = v407;
            LANES128(v12[5]).n128_u32[0] = v406;
            LANES128(v12[3]).n128_u32[0] = v409;
          }
        }
      }
      else if ((v266 & 1) != 0) {
        v361 = LANES128(v12[4]).n128_u64[1];
        v363 = LANES128(v12[2]).n128_u64[1];
        v362 = LANES128(v12[3]).n128_u64[0];
        v364 = LANES128(*(v244)).n128_u64[0];
        v365 = *v12;
        LANES128(*(v244)).n128_u64[0] = LANES128(*(v256)).n128_u64[0];
        LANES128(v12[2]).n128_u64[1] = v361;
        v366 = LANES128(v12[5]).n128_u32[0];
        LANES128(*(v256)).n128_u64[0] = v364;
        LANES128(v12[4]).n128_u64[1] = v363;
        LANES128(v12[5]).n128_u32[0] = v362;
        LANES128(v12[3]).n128_u32[0] = v366;
        v367 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
        v368 = vsubq_f32(v367, v12[2]);
        v369 = vsubq_f32(v367, v365);
        v370 = vmulq_f32(v368, v368);
        v371 = vmulq_f32(v369, v369);
        LANES128(v370).n128_u64[0] =
            LANES64_OF(
                vadd_f32(COERCE_AS(
                             float32x2_t,
                             LANES128_OF(vextq_s8(v370, v370, 8u)).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v370).n128_u64[0])))
                .n64_u64[0];
        LANES128(v371).n128_u64[0] =
            LANES64_OF(
                vadd_f32(COERCE_AS(
                             float32x2_t,
                             LANES128_OF(vextq_s8(v371, v371, 8u)).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v371).n128_u64[0])))
                .n64_u64[0];
        if ((LANES64_OF(
                 vcgt_f32(
                     vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v371).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v371).n128_u64[0])),
                     vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v370).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v370).n128_u64[0]))))
                 .n64_u8[0] &
             1) != 0) {
          v490 = LANES128(*(v12)).n128_u64[1];
          v521 = LANES128(v12[1]).n128_u64[0];
          v457 = LANES128(*(v12)).n128_u64[0];
          LANES128(v12[1]).n128_u32[0] = LANES128(v12[3]).n128_u32[0];
          v372 = LANES128(v12[2]).n128_u64[1];
          LANES128(*(v12)).n128_u64[0] = LANES128(*(v244)).n128_u64[0];
          LANES128(*(v12)).n128_u64[1] = v372;
          LANES128(v12[3]).n128_u32[0] = v521;
          LANES128(*(v244)).n128_u64[0] = v457;
          LANES128(v12[2]).n128_u64[1] = v490;
        }
      }
      v410 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
      v411 = vsubq_f32(v410, *v9);
      v412 = vsubq_f32(v410, *v256);
      v413 = vmulq_f32(v411, v411);
      v414 = vmulq_f32(v412, v412);
      LANES128(v413).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v413, v413, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v413).n128_u64[0])))
              .n64_u64[0];
      LANES128(v414).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v414, v414, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v414).n128_u64[0])))
              .n64_u64[0];
      if ((LANES64_OF(
               vcgt_f32(
                   vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v414).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v414).n128_u64[0])),
                   vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v413).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v413).n128_u64[0]))))
               .n64_u32[0] &
           1) == 0) {
        return result;
      }
      v415 = LANES128(*(v256)).n128_u64[0];
      v494 = LANES128(v12[4]).n128_u64[1];
      v525 = LANES128(v12[5]).n128_u64[0];
      v416 = LANES128(*(v9)).n128_u64[0];
      v417 = LANES128(a2[-2]).n128_u64[1];
      LANES128(v12[5]).n128_u32[0] = LANES128(a2[-1]).n128_u32[0];
      LANES128(*(v256)).n128_u64[0] = v416;
      LANES128(v12[4]).n128_u64[1] = v417;
      LANES128(a2[-1]).n128_u32[0] = v525;
      LANES128(*(v9)).n128_u64[0] = v415;
      LANES128(a2[-2]).n128_u64[1] = v494;
      v418 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
      v419 = vsubq_f32(v418, *v256);
      v420 = vsubq_f32(v418, *v244);
      v421 = vmulq_f32(v419, v419);
      v422 = vmulq_f32(v420, v420);
      LANES128(v421).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v421, v421, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v421).n128_u64[0])))
              .n64_u64[0];
      LANES128(v422).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v422, v422, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v422).n128_u64[0])))
              .n64_u64[0];
      if ((LANES64_OF(
               vcgt_f32(
                   vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v422).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v422).n128_u64[0])),
                   vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v421).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v421).n128_u64[0]))))
               .n64_u32[0] &
           1) == 0) {
        return result;
      }
      v423 = LANES128(v12[4]).n128_u64[1];
      v425 = LANES128(v12[2]).n128_u64[1];
      v424 = LANES128(v12[3]).n128_u64[0];
      v426 = LANES128(*(v244)).n128_u64[0];
      LANES128(*(v244)).n128_u64[0] = LANES128(*(v256)).n128_u64[0];
      LANES128(v12[2]).n128_u64[1] = v423;
      v427 = LANES128(v12[5]).n128_u32[0];
      LANES128(*(v256)).n128_u64[0] = v426;
      LANES128(v12[4]).n128_u64[1] = v425;
      LANES128(v12[5]).n128_u32[0] = v424;
      LANES128(v12[3]).n128_u32[0] = v427;
    LABEL_180:
      v428 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
      v429 = vsubq_f32(v428, v12[2]);
      v430 = vsubq_f32(v428, *v12);
      v431 = vmulq_f32(v429, v429);
      v432 = vmulq_f32(v430, v430);
      LANES128(v431).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v431, v431, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v431).n128_u64[0])))
              .n64_u64[0];
      LANES128(v432).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v432, v432, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v432).n128_u64[0])))
              .n64_u64[0];
      if ((LANES64_OF(
               vcgt_f32(
                   vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v432).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v432).n128_u64[0])),
                   vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v431).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v431).n128_u64[0]))))
               .n64_u32[0] &
           1) != 0) {
        v495 = LANES128(*(v12)).n128_u64[1];
        v526 = LANES128(v12[1]).n128_u64[0];
        v460 = LANES128(*(v12)).n128_u64[0];
        LANES128(v12[1]).n128_u32[0] = LANES128(v244[1]).n128_u32[0];
        v433 = LANES128(*(v244)).n128_u64[1];
        LANES128(*(v12)).n128_u64[0] = LANES128(*(v244)).n128_u64[0];
        LANES128(*(v12)).n128_u64[1] = v433;
        LANES128(v244[1]).n128_u32[0] = v526;
        LANES128(*(v244)).n128_u64[0] = v460;
        LANES128(*(v244)).n128_u64[1] = v495;
      }
      return result;
    }
    if (v13 == 5) {
      return (__int64)gfxa_c63da0(v12, v12 + 2, v12 + 4, v12 + 6, a2 - 2, a3);
    }
  LABEL_10:
    if (v13 <= 23) {
      v268 = v12 + 2;
      v270 = v12 == a2 || v268 == a2;
      if ((a5 & 1) != 0) {
        if (!v270) {
          v271 = 0;
          v272 = v12;
          do {
            v274 = v268;
            v275 = v272[2];
            v276 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
            v277 = vsubq_f32(v276, v275);
            v278 = vsubq_f32(v276, *v272);
            v279 = vmulq_f32(v277, v277);
            v280 = vmulq_f32(v278, v278);
            LANES128(v279).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v279, v279, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v279).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v280).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v280, v280, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v280).n128_u64[0])))
                    .n64_u64[0];
            if ((LANES64_OF(
                     vcgt_f32(vpadd_f32(COERCE_AS(float32x2_t,
                                                  LANES128(v280).n128_u64[0]),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v280).n128_u64[0])),
                              vpadd_f32(COERCE_AS(float32x2_t,
                                                  LANES128(v279).n128_u64[0]),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v279).n128_u64[0]))))
                     .n64_u8[0] &
                 1) != 0) {
              v281 = LANES128(v272[3]).n128_u32[0];
              v282 = v271;
              do {
                v283 = (float32x4_t*)((char*)v12 + v282);
                v284 =
                    *(unsigned __int64*)((char*)&LANES128(*(v12)).n128_u64[1] +
                                         v282);
                LANES128(v283[2]).n128_u64[0] = *(
                    unsigned __int64*)((char*)LANES128(*(v12)).n128_u64 + v282);
                LANES128(v283[2]).n128_u64[1] = v284;
                LANES128(v283[3]).n128_u32[0] = *(
                    unsigned __int32*)((char*)LANES128(v12[1]).n128_u32 + v282);
                if (v282 == 0) {
                  v273 = (__int64)v12;
                  goto LABEL_119;
                }
                v282 -= 32;
                v285 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
                v286 = vsubq_f32(v285, v275);
                v287 = vsubq_f32(v285, v283[-2]);
                v288 = vmulq_f32(v286, v286);
                v289 = vmulq_f32(v287, v287);
                LANES128(v288).n128_u64[0] =
                    LANES64_OF(
                        vadd_f32(
                            COERCE_AS(float32x2_t,
                                      LANES128_OF(vextq_s8(v288, v288, 8u))
                                          .n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v288).n128_u64[0])))
                        .n64_u64[0];
                LANES128(v289).n128_u64[0] =
                    LANES64_OF(
                        vadd_f32(
                            COERCE_AS(float32x2_t,
                                      LANES128_OF(vextq_s8(v289, v289, 8u))
                                          .n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v289).n128_u64[0])))
                        .n64_u64[0];
              } while (
                  (LANES64_OF(
                       vcgt_f32(
                           vpadd_f32(COERCE_AS(float32x2_t,
                                               LANES128(v289).n128_u64[0]),
                                     COERCE_AS(float32x2_t,
                                               LANES128(v289).n128_u64[0])),
                           vpadd_f32(COERCE_AS(float32x2_t,
                                               LANES128(v288).n128_u64[0]),
                                     COERCE_AS(float32x2_t,
                                               LANES128(v288).n128_u64[0]))))
                       .n64_u8[0] &
                   1) != 0);
              v273 = (__int64)&v12[2] + v282;
            LABEL_119:
              *(float32x4_t*)v273 = v275;
              *(_DWORD*)(v273 + 16) = v281;
            }
            v268 = v274 + 2;
            v271 += 32;
            v272 = v274;
          } while (&v274[2] != a2);
        }
      }
      else if (!v270) {
        do {
          v373 = *(float32x4_t*)(v8 + 32);
          v374 = v268;
          v375 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
          v376 = vsubq_f32(v375, v373);
          v377 = vsubq_f32(v375, *(float32x4_t*)v8);
          v378 = vmulq_f32(v376, v376);
          v379 = vmulq_f32(v377, v377);
          LANES128(v378).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v378, v378, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v378).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v379).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v379, v379, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v379).n128_u64[0])))
                  .n64_u64[0];
          if ((LANES64_OF(
                   vcgt_f32(
                       vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v379).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v379).n128_u64[0])),
                       vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v378).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v378).n128_u64[0]))))
                   .n64_u8[0] &
               1) != 0) {
            v380 = *(_DWORD*)(v8 + 48);
            do {
              v381 = v268;
              v382 = LANES128(v268[-2]).n128_u64[0];
              v268 -= 2;
              v383 = LANES128(v381[-2]).n128_u64[1];
              v384 = v381[-4];
              LANES128(*(v381)).n128_u64[0] = v382;
              LANES128(*(v381)).n128_u64[1] = v383;
              LANES128(v381[1]).n128_u32[0] = LANES128(v381[-1]).n128_u32[0];
              v385 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
              v386 = vsubq_f32(v385, v373);
              v387 = vsubq_f32(v385, v384);
              v388 = vmulq_f32(v386, v386);
              v389 = vmulq_f32(v387, v387);
              LANES128(v388).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(float32x2_t,
                                    LANES128_OF(vextq_s8(v388, v388, 8u))
                                        .n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v388).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v389).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(float32x2_t,
                                    LANES128_OF(vextq_s8(v389, v389, 8u))
                                        .n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v389).n128_u64[0])))
                      .n64_u64[0];
            } while (
                (LANES64_OF(
                     vcgt_f32(vpadd_f32(COERCE_AS(float32x2_t,
                                                  LANES128(v389).n128_u64[0]),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v389).n128_u64[0])),
                              vpadd_f32(COERCE_AS(float32x2_t,
                                                  LANES128(v388).n128_u64[0]),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v388).n128_u64[0]))))
                     .n64_u8[0] &
                 1) != 0);
            *v268 = v373;
            LANES128(v268[1]).n128_u32[0] = v380;
          }
          v268 = v374 + 2;
          v8 = (__int64)v374;
        } while (&v374[2] != a2);
      }
      return result;
    }
    if (a4 == 0) {
      if (v12 != a2) {
        v290 = (unsigned __int64)(v13 - 2) >> 1;
        v291 = v290;
        do {
          if (v290 >= v291) {
            v293 = (2 * (v291 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
            v294 = &v12[2 * v293];
            if ((__int64)(2 * v291 + 2) >= v13) {
              v295 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
            }
            else {
              v295 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
              v296 = vsubq_f32(v295, *v294);
              v297 = vsubq_f32(v295, v294[2]);
              v298 = vmulq_f32(v296, v296);
              v299 = vmulq_f32(v297, v297);
              LANES128(v298).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(float32x2_t,
                                    LANES128_OF(vextq_s8(v298, v298, 8u))
                                        .n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v298).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v299).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(float32x2_t,
                                    LANES128_OF(vextq_s8(v299, v299, 8u))
                                        .n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v299).n128_u64[0])))
                      .n64_u64[0];
              if ((LANES64_OF(
                       vcgt_f32(
                           vpadd_f32(COERCE_AS(float32x2_t,
                                               LANES128(v299).n128_u64[0]),
                                     COERCE_AS(float32x2_t,
                                               LANES128(v299).n128_u64[0])),
                           vpadd_f32(COERCE_AS(float32x2_t,
                                               LANES128(v298).n128_u64[0]),
                                     COERCE_AS(float32x2_t,
                                               LANES128(v298).n128_u64[0]))))
                       .n64_u8[0] &
                   1) != 0) {
                v294 += 2;
                v293 = 2 * v291 + 2;
              }
            }
            v300 = &v12[2 * v291];
            v301 = *v300;
            v302 = vsubq_f32(v295, *v294);
            v303 = vsubq_f32(v295, *v300);
            v304 = vmulq_f32(v302, v302);
            v305 = vmulq_f32(v303, v303);
            LANES128(v304).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v304, v304, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v304).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v305).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v305, v305, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v305).n128_u64[0])))
                    .n64_u64[0];
            if ((LANES64_OF(
                     vcgt_f32(vpadd_f32(COERCE_AS(float32x2_t,
                                                  LANES128(v305).n128_u64[0]),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v305).n128_u64[0])),
                              vpadd_f32(COERCE_AS(float32x2_t,
                                                  LANES128(v304).n128_u64[0]),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v304).n128_u64[0]))))
                     .n64_u8[0] &
                 1) == 0) {
              v306 = LANES128(v300[1]).n128_u32[0];
              do {
                v316 = v300;
                v300 = v294;
                v317 = LANES128(*(v294)).n128_u64[1];
                v318 = LANES128(v294[1]).n128_u32[0];
                LANES128(*(v316)).n128_u64[1] = v317;
                v319 = LANES128(*(v300)).n128_u64[0];
                LANES128(v316[1]).n128_u32[0] = v318;
                LANES128(*(v316)).n128_u64[0] = v319;
                if ((__int64)v290 < v293) {
                  break;
                }
                v320 = (2 * (v293 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
                v293 = 2 * v293 + 2;
                v294 = &v12[2 * v320];
                v321 = **(float32x4_t***)(a3 + 8);
                if (v293 < v13) {
                  v307 = v321[5];
                  v308 = vsubq_f32(v307, *v294);
                  v309 = vsubq_f32(v307, v294[2]);
                  v310 = vmulq_f32(v308, v308);
                  v311 = vmulq_f32(v309, v309);
                  LANES128(v310).n128_u64[0] =
                      LANES64_OF(
                          vadd_f32(
                              COERCE_AS(float32x2_t,
                                        LANES128_OF(vextq_s8(v310, v310, 8u))
                                            .n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128(v310).n128_u64[0])))
                          .n64_u64[0];
                  LANES128(v311).n128_u64[0] =
                      LANES64_OF(
                          vadd_f32(
                              COERCE_AS(float32x2_t,
                                        LANES128_OF(vextq_s8(v311, v311, 8u))
                                            .n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128(v311).n128_u64[0])))
                          .n64_u64[0];
                  if ((LANES64_OF(
                           vcgt_f32(
                               vpadd_f32(COERCE_AS(float32x2_t,
                                                   LANES128(v311).n128_u64[0]),
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v311).n128_u64[0])),
                               vpadd_f32(
                                   COERCE_AS(float32x2_t,
                                             LANES128(v310).n128_u64[0]),
                                   COERCE_AS(float32x2_t,
                                             LANES128(v310).n128_u64[0]))))
                           .n64_u8[0] &
                       1) != 0) {
                    v294 += 2;
                  }
                  else {
                    v293 = v320;
                  }
                }
                else {
                  v307 = v321[5];
                  v293 = v320;
                }
                v312 = vsubq_f32(v307, *v294);
                v313 = vsubq_f32(v307, v301);
                v314 = vmulq_f32(v312, v312);
                v315 = vmulq_f32(v313, v313);
                LANES128(v314).n128_u64[0] =
                    LANES64_OF(
                        vadd_f32(
                            COERCE_AS(float32x2_t,
                                      LANES128_OF(vextq_s8(v314, v314, 8u))
                                          .n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v314).n128_u64[0])))
                        .n64_u64[0];
                LANES128(v315).n128_u64[0] =
                    LANES64_OF(
                        vadd_f32(
                            COERCE_AS(float32x2_t,
                                      LANES128_OF(vextq_s8(v315, v315, 8u))
                                          .n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v315).n128_u64[0])))
                        .n64_u64[0];
              } while (
                  (LANES64_OF(
                       vcgt_f32(
                           vpadd_f32(COERCE_AS(float32x2_t,
                                               LANES128(v315).n128_u64[0]),
                                     COERCE_AS(float32x2_t,
                                               LANES128(v315).n128_u64[0])),
                           vpadd_f32(COERCE_AS(float32x2_t,
                                               LANES128(v314).n128_u64[0]),
                                     COERCE_AS(float32x2_t,
                                               LANES128(v314).n128_u64[0]))))
                       .n64_u8[0] &
                   1) == 0);
              *v300 = v301;
              LANES128(v300[1]).n128_u32[0] = v306;
            }
          }
          v292 = (__int64)v291-- <= 0;
        } while (!v292);
        do {
          v322 = 0;
          v323 = v12;
          v488 = LANES128(*(v12)).n128_u64[1];
          v456 = LANES128(*(v12)).n128_u64[0];
          v519 = LANES128(v12[1]).n128_u64[0];
          do {
            v334 = &v323[2 * v322];
            v335 = (2 * v322) | 1;
            v322 = 2 * v322 + 2;
            v331 = v334 + 2;
            if (v322 < v13) {
              v325 = v334[4];
              v324 = v334 + 4;
              v326 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
              v327 = vsubq_f32(v326, v324[-2]);
              v328 = vsubq_f32(v326, v325);
              v329 = vmulq_f32(v327, v327);
              v330 = vmulq_f32(v328, v328);
              LANES128(v329).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(float32x2_t,
                                    LANES128_OF(vextq_s8(v329, v329, 8u))
                                        .n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v329).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v330).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(float32x2_t,
                                    LANES128_OF(vextq_s8(v330, v330, 8u))
                                        .n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v330).n128_u64[0])))
                      .n64_u64[0];
              if ((LANES64_OF(
                       vcgt_f32(
                           vpadd_f32(COERCE_AS(float32x2_t,
                                               LANES128(v330).n128_u64[0]),
                                     COERCE_AS(float32x2_t,
                                               LANES128(v330).n128_u64[0])),
                           vpadd_f32(COERCE_AS(float32x2_t,
                                               LANES128(v329).n128_u64[0]),
                                     COERCE_AS(float32x2_t,
                                               LANES128(v329).n128_u64[0]))))
                       .n64_u32[0] &
                   1) != 0) {
                v331 = v324;
              }
              else {
                v322 = v335;
              }
            }
            else {
              v322 = v335;
            }
            v332 = LANES128(v331[1]).n128_u32[0];
            LANES128(*(v323)).n128_u64[1] = LANES128(*(v331)).n128_u64[1];
            v333 = LANES128(*(v331)).n128_u64[0];
            LANES128(v323[1]).n128_u32[0] = v332;
            LANES128(*(v323)).n128_u64[0] = v333;
            v323 = v331;
          } while (v322 <= (__int64)((unsigned __int64)(v13 - 2) >> 1));
          a2 -= 2;
          if (v331 == a2) {
            LANES128(*(v331)).n128_u64[1] = v488;
            LANES128(v331[1]).n128_u32[0] = v519;
            LANES128(*(v331)).n128_u64[0] = v456;
          }
          else {
            v336 = LANES128(a2[1]).n128_u32[0];
            LANES128(*(v331)).n128_u64[1] = LANES128(*(a2)).n128_u64[1];
            v337 = LANES128(*(a2)).n128_u64[0];
            LANES128(v331[1]).n128_u32[0] = v336;
            LANES128(*(v331)).n128_u64[0] = v337;
            LANES128(a2[1]).n128_u32[0] = v519;
            LANES128(*(a2)).n128_u64[0] = v456;
            LANES128(*(a2)).n128_u64[1] = v488;
            v338 = ((char*)v331 - (char*)v12 + 32) >> 5;
            v292 = v338 < 2;
            v339 = v338 - 2;
            if (!v292) {
              v340 = v339 >> 1;
              v341 = *v331;
              v342 = &v12[2 * v340];
              v343 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
              v344 = vsubq_f32(v343, *v342);
              v345 = vsubq_f32(v343, *v331);
              v346 = vmulq_f32(v344, v344);
              v347 = vmulq_f32(v345, v345);
              LANES128(v346).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(float32x2_t,
                                    LANES128_OF(vextq_s8(v346, v346, 8u))
                                        .n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v346).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v347).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(float32x2_t,
                                    LANES128_OF(vextq_s8(v347, v347, 8u))
                                        .n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v347).n128_u64[0])))
                      .n64_u64[0];
              if ((LANES64_OF(
                       vcgt_f32(
                           vpadd_f32(COERCE_AS(float32x2_t,
                                               LANES128(v347).n128_u64[0]),
                                     COERCE_AS(float32x2_t,
                                               LANES128(v347).n128_u64[0])),
                           vpadd_f32(COERCE_AS(float32x2_t,
                                               LANES128(v346).n128_u64[0]),
                                     COERCE_AS(float32x2_t,
                                               LANES128(v346).n128_u64[0]))))
                       .n64_u8[0] &
                   1) != 0) {
                v348 = LANES128(v331[1]).n128_u32[0];
                do {
                  v349 = v331;
                  v331 = v342;
                  v350 = LANES128(*(v342)).n128_u64[1];
                  v351 = LANES128(v342[1]).n128_u32[0];
                  LANES128(*(v349)).n128_u64[1] = v350;
                  v352 = LANES128(*(v331)).n128_u64[0];
                  LANES128(v349[1]).n128_u32[0] = v351;
                  LANES128(*(v349)).n128_u64[0] = v352;
                  if (v340 == 0) {
                    break;
                  }
                  v340 = (v340 - 1) >> 1;
                  v342 = &v12[2 * v340];
                  v353 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
                  v354 = vsubq_f32(v353, *v342);
                  v355 = vsubq_f32(v353, v341);
                  v356 = vmulq_f32(v354, v354);
                  v357 = vmulq_f32(v355, v355);
                  LANES128(v356).n128_u64[0] =
                      LANES64_OF(
                          vadd_f32(
                              COERCE_AS(float32x2_t,
                                        LANES128_OF(vextq_s8(v356, v356, 8u))
                                            .n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128(v356).n128_u64[0])))
                          .n64_u64[0];
                  LANES128(v357).n128_u64[0] =
                      LANES64_OF(
                          vadd_f32(
                              COERCE_AS(float32x2_t,
                                        LANES128_OF(vextq_s8(v357, v357, 8u))
                                            .n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128(v357).n128_u64[0])))
                          .n64_u64[0];
                } while (
                    (LANES64_OF(
                         vcgt_f32(
                             vpadd_f32(COERCE_AS(float32x2_t,
                                                 LANES128(v357).n128_u64[0]),
                                       COERCE_AS(float32x2_t,
                                                 LANES128(v357).n128_u64[0])),
                             vpadd_f32(COERCE_AS(float32x2_t,
                                                 LANES128(v356).n128_u64[0]),
                                       COERCE_AS(float32x2_t,
                                                 LANES128(v356).n128_u64[0]))))
                         .n64_u8[0] &
                     1) != 0);
                *v331 = v341;
                LANES128(v331[1]).n128_u32[0] = v348;
              }
            }
          }
          v292 = v13-- <= 2;
        } while (!v292);
      }
      return result;
    }
    v14 = &v12[2 * ((unsigned __int64)v13 >> 1)];
    v15 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
    v16 = vsubq_f32(v15, *v9);
    v17 = vmulq_f32(v16, v16);
    LANES128(v17).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v17, v17, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0])))
            .n64_u64[0];
    LANES64(v18).n64_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0])))
            .n64_u64[0];
    if ((unsigned __int64)v13 >= 0x81) {
      v19 = vsubq_f32(v15, *v14);
      v20 = vsubq_f32(v15, *v12);
      v21 = vmulq_f32(v19, v19);
      v22 = vmulq_f32(v20, v20);
      LANES128(v21).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v21, v21, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
              .n64_u64[0];
      LANES128(v22).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v22, v22, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])))
              .n64_u64[0];
      LANES128(v21).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
              .n64_u64[0];
      v23 =
          LANES64_OF(
              vcgt_f32(COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]), v18))
              .n64_u8[0];
      if ((LANES64_OF(
               vcgt_f32(
                   vpadd_f32(COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])),
                   COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
               .n64_u8[0] &
           1) != 0) {
        if ((v23 & 1) != 0) {
          v461 = LANES128(*(v12)).n128_u64[1];
          v496 = LANES128(v12[1]).n128_u64[0];
          v435 = LANES128(*(v12)).n128_u64[0];
          v24 = LANES128(a2[-1]).n128_u32[0];
          v25 = LANES128(a2[-2]).n128_u64[1];
          LANES128(*(v12)).n128_u64[0] = LANES128(*(v9)).n128_u64[0];
          LANES128(*(v12)).n128_u64[1] = v25;
          LANES128(v12[1]).n128_u32[0] = v24;
          goto LABEL_27;
        }
        v467 = LANES128(*(v12)).n128_u64[1];
        v502 = LANES128(v12[1]).n128_u64[0];
        v441 = LANES128(*(v12)).n128_u64[0];
        v51 = LANES128(v14[1]).n128_u32[0];
        v52 = LANES128(*(v14)).n128_u64[1];
        LANES128(*(v12)).n128_u64[0] = LANES128(*(v14)).n128_u64[0];
        LANES128(*(v12)).n128_u64[1] = v52;
        LANES128(v12[1]).n128_u32[0] = v51;
        LANES128(v14[1]).n128_u32[0] = v502;
        LANES128(*(v14)).n128_u64[0] = v441;
        LANES128(*(v14)).n128_u64[1] = v467;
        v53 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
        v54 = vsubq_f32(v53, *v9);
        v55 = vsubq_f32(v53, *v14);
        v56 = vmulq_f32(v54, v54);
        v57 = vmulq_f32(v55, v55);
        LANES128(v56).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v56, v56, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v56).n128_u64[0])))
                .n64_u64[0];
        LANES128(v57).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v57, v57, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v57).n128_u64[0])))
                .n64_u64[0];
        if ((LANES64_OF(
                 vcgt_f32(
                     vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v57).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v57).n128_u64[0])),
                     vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v56).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v56).n128_u64[0]))))
                 .n64_u8[0] &
             1) != 0) {
          v461 = LANES128(*(v14)).n128_u64[1];
          v496 = LANES128(v14[1]).n128_u64[0];
          v435 = LANES128(*(v14)).n128_u64[0];
          v58 = LANES128(a2[-1]).n128_u32[0];
          v59 = LANES128(a2[-2]).n128_u64[1];
          LANES128(*(v14)).n128_u64[0] = LANES128(*(v9)).n128_u64[0];
          LANES128(*(v14)).n128_u64[1] = v59;
          LANES128(v14[1]).n128_u32[0] = v58;
        LABEL_27:
          LANES128(a2[-1]).n128_u32[0] = v496;
          LANES128(*(v9)).n128_u64[0] = v435;
          LANES128(a2[-2]).n128_u64[1] = v461;
        }
      }
      else if ((v23 & 1) != 0) {
        v463 = LANES128(*(v14)).n128_u64[1];
        v498 = LANES128(v14[1]).n128_u64[0];
        v437 = LANES128(*(v14)).n128_u64[0];
        v33 = LANES128(a2[-1]).n128_u32[0];
        v34 = LANES128(a2[-2]).n128_u64[1];
        LANES128(*(v14)).n128_u64[0] = LANES128(*(v9)).n128_u64[0];
        LANES128(*(v14)).n128_u64[1] = v34;
        LANES128(v14[1]).n128_u32[0] = v33;
        LANES128(a2[-1]).n128_u32[0] = v498;
        LANES128(*(v9)).n128_u64[0] = v437;
        LANES128(a2[-2]).n128_u64[1] = v463;
        v35 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
        v36 = vsubq_f32(v35, *v14);
        v37 = vsubq_f32(v35, *v12);
        v38 = vmulq_f32(v36, v36);
        v39 = vmulq_f32(v37, v37);
        LANES128(v38).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v38, v38, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0])))
                .n64_u64[0];
        LANES128(v39).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v39, v39, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v39).n128_u64[0])))
                .n64_u64[0];
        if ((LANES64_OF(
                 vcgt_f32(
                     vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v39).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v39).n128_u64[0])),
                     vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0]))))
                 .n64_u8[0] &
             1) != 0) {
          v464 = LANES128(*(v12)).n128_u64[1];
          v499 = LANES128(v12[1]).n128_u64[0];
          v438 = LANES128(*(v12)).n128_u64[0];
          v40 = LANES128(v14[1]).n128_u32[0];
          v41 = LANES128(*(v14)).n128_u64[1];
          LANES128(*(v12)).n128_u64[0] = LANES128(*(v14)).n128_u64[0];
          LANES128(*(v12)).n128_u64[1] = v41;
          LANES128(v12[1]).n128_u32[0] = v40;
          LANES128(v14[1]).n128_u32[0] = v499;
          LANES128(*(v14)).n128_u64[0] = v438;
          LANES128(*(v14)).n128_u64[1] = v464;
        }
      }
      v60 = v14 - 2;
      v61 = v12 + 2;
      v62 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
      v63 = vsubq_f32(v62, v14[-2]);
      v64 = vsubq_f32(v62, v12[2]);
      v65 = vmulq_f32(v63, v63);
      v66 = vmulq_f32(v64, v64);
      LANES128(v65).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v65, v65, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v65).n128_u64[0])))
              .n64_u64[0];
      LANES128(v66).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v66, v66, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v66).n128_u64[0])))
              .n64_u64[0];
      LANES128(v65).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v65).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v65).n128_u64[0])))
              .n64_u64[0];
      v67 = LANES64_OF(
                vcgt_f32(vpadd_f32(
                             COERCE_AS(float32x2_t, LANES128(v66).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v66).n128_u64[0])),
                         COERCE_AS(float32x2_t, LANES128(v65).n128_u64[0])))
                .n64_u8[0];
      v68 = vsubq_f32(v62, *v10);
      v69 = vmulq_f32(v68, v68);
      LANES128(v69).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v69, v69, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0])))
              .n64_u64[0];
      v70 =
          LANES64_OF(
              vcgt_f32(
                  COERCE_AS(float32x2_t, LANES128(v65).n128_u64[0]),
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0]))))
              .n64_u8[0];
      if ((v67 & 1) != 0) {
        if ((v70 & 1) != 0) {
          v71 = LANES128(v12[3]).n128_u64[0];
          v72 = LANES128(*(v61)).n128_u64[0];
          v468 = LANES128(v12[2]).n128_u64[1];
          v74 = LANES128(*(v10)).n128_u64[0];
          v73 = LANES128(a2[-4]).n128_u64[1];
          LANES128(v12[3]).n128_u32[0] = LANES128(a2[-3]).n128_u32[0];
          LANES128(*(v61)).n128_u64[0] = v74;
          LANES128(v12[2]).n128_u64[1] = v73;
          LANES128(a2[-3]).n128_u32[0] = v71;
          LANES128(*(v10)).n128_u64[0] = v72;
          LANES128(a2[-4]).n128_u64[1] = v468;
        }
        else {
          v95 = LANES128(*(v61)).n128_u64[0];
          v472 = LANES128(v12[2]).n128_u64[1];
          v505 = LANES128(v12[3]).n128_u64[0];
          v96 = LANES128(*(v60)).n128_u64[0];
          v97 = LANES128(v14[-2]).n128_u64[1];
          LANES128(v12[3]).n128_u32[0] = LANES128(v14[-1]).n128_u32[0];
          LANES128(*(v61)).n128_u64[0] = v96;
          LANES128(v12[2]).n128_u64[1] = v97;
          LANES128(v14[-1]).n128_u32[0] = v505;
          LANES128(*(v60)).n128_u64[0] = v95;
          LANES128(v14[-2]).n128_u64[1] = v472;
          v98 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
          v99 = vsubq_f32(v98, *v10);
          v100 = vsubq_f32(v98, *v60);
          v101 = vmulq_f32(v99, v99);
          v102 = vmulq_f32(v100, v100);
          LANES128(v101).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v101, v101, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v101).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v102).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v102, v102, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v102).n128_u64[0])))
                  .n64_u64[0];
          if ((LANES64_OF(
                   vcgt_f32(
                       vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v102).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v102).n128_u64[0])),
                       vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v101).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v101).n128_u64[0]))))
                   .n64_u8[0] &
               1) != 0) {
            v473 = LANES128(v14[-2]).n128_u64[1];
            v506 = LANES128(v14[-1]).n128_u64[0];
            v444 = LANES128(*(v60)).n128_u64[0];
            v103 = LANES128(a2[-3]).n128_u32[0];
            v104 = LANES128(a2[-4]).n128_u64[1];
            LANES128(*(v60)).n128_u64[0] = LANES128(*(v10)).n128_u64[0];
            LANES128(v14[-2]).n128_u64[1] = v104;
            LANES128(v14[-1]).n128_u32[0] = v103;
            LANES128(a2[-3]).n128_u32[0] = v506;
            LANES128(*(v10)).n128_u64[0] = v444;
            LANES128(a2[-4]).n128_u64[1] = v473;
          }
        }
      }
      else if ((v70 & 1) != 0) {
        v469 = LANES128(v14[-2]).n128_u64[1];
        v503 = LANES128(v14[-1]).n128_u64[0];
        v442 = LANES128(*(v60)).n128_u64[0];
        v75 = LANES128(a2[-3]).n128_u32[0];
        v76 = LANES128(a2[-4]).n128_u64[1];
        LANES128(*(v60)).n128_u64[0] = LANES128(*(v10)).n128_u64[0];
        LANES128(v14[-2]).n128_u64[1] = v76;
        LANES128(v14[-1]).n128_u32[0] = v75;
        LANES128(a2[-3]).n128_u32[0] = v503;
        LANES128(*(v10)).n128_u64[0] = v442;
        LANES128(a2[-4]).n128_u64[1] = v469;
        v77 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
        v78 = vsubq_f32(v77, *v60);
        v79 = vsubq_f32(v77, *v61);
        v80 = vmulq_f32(v78, v78);
        v81 = vmulq_f32(v79, v79);
        LANES128(v80).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v80, v80, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v80).n128_u64[0])))
                .n64_u64[0];
        LANES128(v81).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v81, v81, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v81).n128_u64[0])))
                .n64_u64[0];
        if ((LANES64_OF(
                 vcgt_f32(
                     vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v81).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v81).n128_u64[0])),
                     vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v80).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v80).n128_u64[0]))))
                 .n64_u8[0] &
             1) != 0) {
          v82 = LANES128(v12[3]).n128_u64[0];
          v83 = LANES128(*(v61)).n128_u64[0];
          v470 = LANES128(v12[2]).n128_u64[1];
          v85 = LANES128(*(v60)).n128_u64[0];
          v84 = LANES128(v14[-2]).n128_u64[1];
          LANES128(v12[3]).n128_u32[0] = LANES128(v14[-1]).n128_u32[0];
          LANES128(*(v61)).n128_u64[0] = v85;
          LANES128(v12[2]).n128_u64[1] = v84;
          LANES128(v14[-1]).n128_u32[0] = v82;
          LANES128(*(v60)).n128_u64[0] = v83;
          LANES128(v14[-2]).n128_u64[1] = v470;
        }
      }
      v105 = v14 + 2;
      v106 = v12 + 4;
      v107 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
      v108 = vsubq_f32(v107, v14[2]);
      v109 = vsubq_f32(v107, v12[4]);
      v110 = vmulq_f32(v108, v108);
      v111 = vmulq_f32(v109, v109);
      LANES128(v110).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v110, v110, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v110).n128_u64[0])))
              .n64_u64[0];
      LANES128(v111).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v111, v111, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v111).n128_u64[0])))
              .n64_u64[0];
      LANES128(v110).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v110).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v110).n128_u64[0])))
              .n64_u64[0];
      v112 =
          LANES64_OF(
              vcgt_f32(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v111).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v111).n128_u64[0])),
                  COERCE_AS(float32x2_t, LANES128(v110).n128_u64[0])))
              .n64_u8[0];
      v113 = vsubq_f32(v107, *v11);
      v114 = vmulq_f32(v113, v113);
      LANES128(v114).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v114, v114, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v114).n128_u64[0])))
              .n64_u64[0];
      v115 =
          LANES64_OF(
              vcgt_f32(COERCE_AS(float32x2_t, LANES128(v110).n128_u64[0]),
                       vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v114).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v114).n128_u64[0]))))
              .n64_u8[0];
      if ((v112 & 1) != 0) {
        if ((v115 & 1) != 0) {
          v116 = LANES128(v12[5]).n128_u64[0];
          v117 = LANES128(*(v106)).n128_u64[0];
          v474 = LANES128(v12[4]).n128_u64[1];
          v119 = LANES128(*(v11)).n128_u64[0];
          v118 = LANES128(a2[-6]).n128_u64[1];
          LANES128(v12[5]).n128_u32[0] = LANES128(a2[-5]).n128_u32[0];
          LANES128(*(v106)).n128_u64[0] = v119;
          LANES128(v12[4]).n128_u64[1] = v118;
          LANES128(a2[-5]).n128_u32[0] = v116;
          LANES128(*(v11)).n128_u64[0] = v117;
          LANES128(a2[-6]).n128_u64[1] = v474;
        }
        else {
          v131 = LANES128(*(v106)).n128_u64[0];
          v477 = LANES128(v12[4]).n128_u64[1];
          v508 = LANES128(v12[5]).n128_u64[0];
          v132 = LANES128(*(v105)).n128_u64[0];
          v133 = LANES128(v14[2]).n128_u64[1];
          LANES128(v12[5]).n128_u32[0] = LANES128(v14[3]).n128_u32[0];
          LANES128(*(v106)).n128_u64[0] = v132;
          LANES128(v12[4]).n128_u64[1] = v133;
          LANES128(v14[3]).n128_u32[0] = v508;
          LANES128(*(v105)).n128_u64[0] = v131;
          LANES128(v14[2]).n128_u64[1] = v477;
          v134 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
          v135 = vsubq_f32(v134, *v11);
          v136 = vsubq_f32(v134, *v105);
          v137 = vmulq_f32(v135, v135);
          v138 = vmulq_f32(v136, v136);
          LANES128(v137).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v137, v137, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v137).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v138).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v138, v138, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v138).n128_u64[0])))
                  .n64_u64[0];
          if ((LANES64_OF(
                   vcgt_f32(
                       vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v138).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v138).n128_u64[0])),
                       vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v137).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v137).n128_u64[0]))))
                   .n64_u8[0] &
               1) != 0) {
            v478 = LANES128(v14[2]).n128_u64[1];
            v509 = LANES128(v14[3]).n128_u64[0];
            v446 = LANES128(*(v105)).n128_u64[0];
            v139 = LANES128(a2[-5]).n128_u32[0];
            v140 = LANES128(a2[-6]).n128_u64[1];
            LANES128(*(v105)).n128_u64[0] = LANES128(*(v11)).n128_u64[0];
            LANES128(v14[2]).n128_u64[1] = v140;
            LANES128(v14[3]).n128_u32[0] = v139;
            LANES128(a2[-5]).n128_u32[0] = v509;
            LANES128(*(v11)).n128_u64[0] = v446;
            LANES128(a2[-6]).n128_u64[1] = v478;
          }
        }
      }
      else if ((v115 & 1) != 0) {
        v475 = LANES128(v14[2]).n128_u64[1];
        v507 = LANES128(v14[3]).n128_u64[0];
        v445 = LANES128(*(v105)).n128_u64[0];
        v120 = LANES128(a2[-5]).n128_u32[0];
        v121 = LANES128(a2[-6]).n128_u64[1];
        LANES128(*(v105)).n128_u64[0] = LANES128(*(v11)).n128_u64[0];
        LANES128(v14[2]).n128_u64[1] = v121;
        LANES128(v14[3]).n128_u32[0] = v120;
        LANES128(a2[-5]).n128_u32[0] = v507;
        LANES128(*(v11)).n128_u64[0] = v445;
        LANES128(a2[-6]).n128_u64[1] = v475;
        v122 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
        v123 = vsubq_f32(v122, *v105);
        v124 = vsubq_f32(v122, *v106);
        v125 = vmulq_f32(v123, v123);
        v126 = vmulq_f32(v124, v124);
        LANES128(v125).n128_u64[0] =
            LANES64_OF(
                vadd_f32(COERCE_AS(
                             float32x2_t,
                             LANES128_OF(vextq_s8(v125, v125, 8u)).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v125).n128_u64[0])))
                .n64_u64[0];
        LANES128(v126).n128_u64[0] =
            LANES64_OF(
                vadd_f32(COERCE_AS(
                             float32x2_t,
                             LANES128_OF(vextq_s8(v126, v126, 8u)).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v126).n128_u64[0])))
                .n64_u64[0];
        if ((LANES64_OF(
                 vcgt_f32(
                     vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v126).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v126).n128_u64[0])),
                     vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v125).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v125).n128_u64[0]))))
                 .n64_u8[0] &
             1) != 0) {
          v127 = LANES128(v12[5]).n128_u64[0];
          v128 = LANES128(*(v106)).n128_u64[0];
          v476 = LANES128(v12[4]).n128_u64[1];
          v130 = LANES128(*(v105)).n128_u64[0];
          v129 = LANES128(v14[2]).n128_u64[1];
          LANES128(v12[5]).n128_u32[0] = LANES128(v14[3]).n128_u32[0];
          LANES128(*(v106)).n128_u64[0] = v130;
          LANES128(v12[4]).n128_u64[1] = v129;
          LANES128(v14[3]).n128_u32[0] = v127;
          LANES128(*(v105)).n128_u64[0] = v128;
          LANES128(v14[2]).n128_u64[1] = v476;
        }
      }
      v141 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
      v142 = vsubq_f32(v141, *v14);
      v143 = vsubq_f32(v141, v14[-2]);
      v144 = vmulq_f32(v142, v142);
      v145 = vmulq_f32(v143, v143);
      LANES128(v144).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v144, v144, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v144).n128_u64[0])))
              .n64_u64[0];
      LANES128(v145).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v145, v145, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v145).n128_u64[0])))
              .n64_u64[0];
      LANES128(v144).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v144).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v144).n128_u64[0])))
              .n64_u64[0];
      v146 =
          LANES64_OF(
              vcgt_f32(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v145).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v145).n128_u64[0])),
                  COERCE_AS(float32x2_t, LANES128(v144).n128_u64[0])))
              .n64_u8[0];
      v147 = vsubq_f32(v141, v14[2]);
      v148 = vmulq_f32(v147, v147);
      LANES128(v148).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v148, v148, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v148).n128_u64[0])))
              .n64_u64[0];
      v149 =
          LANES64_OF(
              vcgt_f32(COERCE_AS(float32x2_t, LANES128(v144).n128_u64[0]),
                       vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v148).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v148).n128_u64[0]))))
              .n64_u8[0];
      if ((v146 & 1) != 0) {
        if ((v149 & 1) != 0) {
          v479 = LANES128(v14[-2]).n128_u64[1];
          v510 = LANES128(v14[-1]).n128_u64[0];
          v447 = LANES128(*(v60)).n128_u64[0];
          LANES128(v14[-1]).n128_u32[0] = LANES128(v14[3]).n128_u32[0];
          v150 = LANES128(v14[2]).n128_u64[1];
          LANES128(*(v60)).n128_u64[0] = LANES128(*(v105)).n128_u64[0];
          LANES128(v14[-2]).n128_u64[1] = v150;
          goto LABEL_55;
        }
        v482 = LANES128(v14[-2]).n128_u64[1];
        v513 = LANES128(v14[-1]).n128_u64[0];
        v450 = LANES128(*(v60)).n128_u64[0];
        v160 = v14[2];
        LANES128(v14[-1]).n128_u32[0] = LANES128(v14[1]).n128_u32[0];
        v161 = LANES128(*(v14)).n128_u64[1];
        LANES128(*(v60)).n128_u64[0] = LANES128(*(v14)).n128_u64[0];
        LANES128(v14[-2]).n128_u64[1] = v161;
        LANES128(v14[1]).n128_u32[0] = v513;
        LANES128(*(v14)).n128_u64[0] = v450;
        LANES128(*(v14)).n128_u64[1] = v482;
        v162 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
        v163 = vsubq_f32(v162, v160);
        v164 = vsubq_f32(v162, *v14);
        v165 = vmulq_f32(v163, v163);
        v166 = vmulq_f32(v164, v164);
        LANES128(v165).n128_u64[0] =
            LANES64_OF(
                vadd_f32(COERCE_AS(
                             float32x2_t,
                             LANES128_OF(vextq_s8(v165, v165, 8u)).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v165).n128_u64[0])))
                .n64_u64[0];
        LANES128(v166).n128_u64[0] =
            LANES64_OF(
                vadd_f32(COERCE_AS(
                             float32x2_t,
                             LANES128_OF(vextq_s8(v166, v166, 8u)).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v166).n128_u64[0])))
                .n64_u64[0];
        if ((LANES64_OF(
                 vcgt_f32(
                     vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v166).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v166).n128_u64[0])),
                     vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v165).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v165).n128_u64[0]))))
                 .n64_u8[0] &
             1) != 0) {
          v479 = LANES128(*(v14)).n128_u64[1];
          v510 = LANES128(v14[1]).n128_u64[0];
          v447 = LANES128(*(v14)).n128_u64[0];
          LANES128(v14[1]).n128_u32[0] = LANES128(v14[3]).n128_u32[0];
          v167 = LANES128(v14[2]).n128_u64[1];
          LANES128(*(v14)).n128_u64[0] = LANES128(*(v105)).n128_u64[0];
          LANES128(*(v14)).n128_u64[1] = v167;
        LABEL_55:
          LANES128(v14[3]).n128_u32[0] = v510;
          LANES128(*(v105)).n128_u64[0] = v447;
          LANES128(v14[2]).n128_u64[1] = v479;
        }
      }
      else if ((v149 & 1) != 0) {
        v480 = LANES128(*(v14)).n128_u64[1];
        v511 = LANES128(v14[1]).n128_u64[0];
        v448 = LANES128(*(v14)).n128_u64[0];
        v151 = v14[-2];
        LANES128(v14[1]).n128_u32[0] = LANES128(v14[3]).n128_u32[0];
        v152 = LANES128(v14[2]).n128_u64[1];
        LANES128(*(v14)).n128_u64[0] = LANES128(*(v105)).n128_u64[0];
        LANES128(*(v14)).n128_u64[1] = v152;
        v153 = *v14;
        LANES128(v14[3]).n128_u32[0] = v511;
        LANES128(*(v105)).n128_u64[0] = v448;
        LANES128(v14[2]).n128_u64[1] = v480;
        v154 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
        v155 = vsubq_f32(v154, v153);
        v156 = vsubq_f32(v154, v151);
        v157 = vmulq_f32(v155, v155);
        v158 = vmulq_f32(v156, v156);
        LANES128(v157).n128_u64[0] =
            LANES64_OF(
                vadd_f32(COERCE_AS(
                             float32x2_t,
                             LANES128_OF(vextq_s8(v157, v157, 8u)).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v157).n128_u64[0])))
                .n64_u64[0];
        LANES128(v158).n128_u64[0] =
            LANES64_OF(
                vadd_f32(COERCE_AS(
                             float32x2_t,
                             LANES128_OF(vextq_s8(v158, v158, 8u)).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v158).n128_u64[0])))
                .n64_u64[0];
        if ((LANES64_OF(
                 vcgt_f32(
                     vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v158).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v158).n128_u64[0])),
                     vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v157).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v157).n128_u64[0]))))
                 .n64_u8[0] &
             1) != 0) {
          v481 = LANES128(v14[-2]).n128_u64[1];
          v512 = LANES128(v14[-1]).n128_u64[0];
          v449 = LANES128(*(v60)).n128_u64[0];
          LANES128(v14[-1]).n128_u32[0] = LANES128(v14[1]).n128_u32[0];
          v159 = LANES128(*(v14)).n128_u64[1];
          LANES128(*(v60)).n128_u64[0] = LANES128(*(v14)).n128_u64[0];
          LANES128(v14[-2]).n128_u64[1] = v159;
          LANES128(v14[1]).n128_u32[0] = v512;
          LANES128(*(v14)).n128_u64[0] = v449;
          LANES128(*(v14)).n128_u64[1] = v481;
        }
      }
      v483 = LANES128(*(v12)).n128_u64[1];
      v514 = LANES128(v12[1]).n128_u64[0];
      v451 = LANES128(*(v12)).n128_u64[0];
      v168 = LANES128(v14[1]).n128_u32[0];
      v169 = LANES128(*(v14)).n128_u64[1];
      LANES128(*(v12)).n128_u64[0] = LANES128(*(v14)).n128_u64[0];
      LANES128(*(v12)).n128_u64[1] = v169;
      LANES128(v12[1]).n128_u32[0] = v168;
      LANES128(v14[1]).n128_u32[0] = v514;
      LANES128(*(v14)).n128_u64[0] = v451;
      LANES128(*(v14)).n128_u64[1] = v483;
      goto LABEL_57;
    }
    v26 = vsubq_f32(v15, *v12);
    v27 = vsubq_f32(v15, *v14);
    v28 = vmulq_f32(v26, v26);
    v29 = vmulq_f32(v27, v27);
    LANES128(v28).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v28, v28, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])))
            .n64_u64[0];
    LANES128(v29).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v29, v29, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0])))
            .n64_u64[0];
    LANES128(v28).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])))
            .n64_u64[0];
    v30 = LANES64_OF(
              vcgt_f32(COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0]), v18))
              .n64_u8[0];
    if ((LANES64_OF(
             vcgt_f32(
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0])),
                 COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])))
             .n64_u8[0] &
         1) == 0) {
      if ((v30 & 1) != 0) {
        v465 = LANES128(*(v12)).n128_u64[1];
        v500 = LANES128(v12[1]).n128_u64[0];
        v439 = LANES128(*(v12)).n128_u64[0];
        v42 = LANES128(a2[-1]).n128_u32[0];
        v43 = LANES128(a2[-2]).n128_u64[1];
        LANES128(*(v12)).n128_u64[0] = LANES128(*(v9)).n128_u64[0];
        LANES128(*(v12)).n128_u64[1] = v43;
        LANES128(v12[1]).n128_u32[0] = v42;
        LANES128(a2[-1]).n128_u32[0] = v500;
        LANES128(*(v9)).n128_u64[0] = v439;
        LANES128(a2[-2]).n128_u64[1] = v465;
        v44 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
        v45 = vsubq_f32(v44, *v12);
        v46 = vsubq_f32(v44, *v14);
        v47 = vmulq_f32(v45, v45);
        v48 = vmulq_f32(v46, v46);
        LANES128(v47).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v47, v47, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0])))
                .n64_u64[0];
        LANES128(v48).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v48, v48, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0])))
                .n64_u64[0];
        if ((LANES64_OF(
                 vcgt_f32(
                     vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0])),
                     vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0]))))
                 .n64_u8[0] &
             1) != 0) {
          v466 = LANES128(*(v14)).n128_u64[1];
          v501 = LANES128(v14[1]).n128_u64[0];
          v440 = LANES128(*(v14)).n128_u64[0];
          v49 = LANES128(v12[1]).n128_u32[0];
          v50 = LANES128(*(v12)).n128_u64[1];
          LANES128(*(v14)).n128_u64[0] = LANES128(*(v12)).n128_u64[0];
          LANES128(*(v14)).n128_u64[1] = v50;
          LANES128(v14[1]).n128_u32[0] = v49;
          LANES128(v12[1]).n128_u32[0] = v501;
          LANES128(*(v12)).n128_u64[0] = v440;
          LANES128(*(v12)).n128_u64[1] = v466;
        }
      }
      goto LABEL_57;
    }
    if ((v30 & 1) != 0) {
      v462 = LANES128(*(v14)).n128_u64[1];
      v497 = LANES128(v14[1]).n128_u64[0];
      v436 = LANES128(*(v14)).n128_u64[0];
      v31 = LANES128(a2[-1]).n128_u32[0];
      v32 = LANES128(a2[-2]).n128_u64[1];
      LANES128(*(v14)).n128_u64[0] = LANES128(*(v9)).n128_u64[0];
      LANES128(*(v14)).n128_u64[1] = v32;
      LANES128(v14[1]).n128_u32[0] = v31;
    LABEL_36:
      LANES128(a2[-1]).n128_u32[0] = v497;
      LANES128(*(v9)).n128_u64[0] = v436;
      LANES128(a2[-2]).n128_u64[1] = v462;
      goto LABEL_57;
    }
    v471 = LANES128(*(v14)).n128_u64[1];
    v504 = LANES128(v14[1]).n128_u64[0];
    v443 = LANES128(*(v14)).n128_u64[0];
    v86 = LANES128(v12[1]).n128_u32[0];
    v87 = LANES128(*(v12)).n128_u64[1];
    LANES128(*(v14)).n128_u64[0] = LANES128(*(v12)).n128_u64[0];
    LANES128(*(v14)).n128_u64[1] = v87;
    LANES128(v14[1]).n128_u32[0] = v86;
    LANES128(v12[1]).n128_u32[0] = v504;
    LANES128(*(v12)).n128_u64[0] = v443;
    LANES128(*(v12)).n128_u64[1] = v471;
    v88 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
    v89 = vsubq_f32(v88, *v9);
    v90 = vsubq_f32(v88, *v12);
    v91 = vmulq_f32(v89, v89);
    v92 = vmulq_f32(v90, v90);
    LANES128(v91).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v91, v91, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v91).n128_u64[0])))
            .n64_u64[0];
    LANES128(v92).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v92, v92, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v92).n128_u64[0])))
            .n64_u64[0];
    if ((LANES64_OF(
             vcgt_f32(
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v92).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v92).n128_u64[0])),
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v91).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v91).n128_u64[0]))))
             .n64_u8[0] &
         1) != 0) {
      v462 = LANES128(*(v12)).n128_u64[1];
      v497 = LANES128(v12[1]).n128_u64[0];
      v436 = LANES128(*(v12)).n128_u64[0];
      v93 = LANES128(a2[-1]).n128_u32[0];
      v94 = LANES128(a2[-2]).n128_u64[1];
      LANES128(*(v12)).n128_u64[0] = LANES128(*(v9)).n128_u64[0];
      LANES128(*(v12)).n128_u64[1] = v94;
      LANES128(v12[1]).n128_u32[0] = v93;
      goto LABEL_36;
    }
  LABEL_57:
    v170 = *v12;
    --a4;
    v171 = **(float32x4_t***)(a3 + 8);
    if ((a5 & 1) != 0) {
      v172 = v171[5];
      v173 = vsubq_f32(v172, v170);
      v174 = vmulq_f32(v173, v173);
      LANES64(v175).n64_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v174, v174, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v174).n128_u64[0])))
              .n64_u64[0];
      LANES64(v175).n64_u32[0] = LANES64_OF(vpadd_f32(v175, v175)).n64_u32[0];
    LABEL_60:
      v181 = LANES128(v12[1]).n128_u32[0];
      v182 = 0;
      do {
        v183 = &v12[v182];
        v182 += 2;
        v184 = vsubq_f32(v172, v183[2]);
        v185 = vmulq_f32(v184, v184);
        LANES128(v185).n128_u64[0] =
            LANES64_OF(
                vadd_f32(COERCE_AS(
                             float32x2_t,
                             LANES128_OF(vextq_s8(v185, v185, 8u)).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v185).n128_u64[0])))
                .n64_u64[0];
      } while (
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v185).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v185).n128_u64[0])))
              .n64_f32[0] < LANES64(v175).n64_f32[0]);
      v186 = &v12[v182];
      v187 = a2;
      if (v182 == 2) {
        v187 = a2;
        do {
          if (v186 >= v187) {
            break;
          }
          v191 = v187[-2];
          v187 -= 2;
          v192 = vsubq_f32(v172, v191);
          v193 = vmulq_f32(v192, v192);
          LANES128(v193).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v193, v193, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v193).n128_u64[0])))
                  .n64_u64[0];
        } while (
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v193).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v193).n128_u64[0])))
                .n64_f32[0] >= LANES64(v175).n64_f32[0]);
      }
      else {
        do {
          v188 = v187[-2];
          v187 -= 2;
          v189 = vsubq_f32(v172, v188);
          v190 = vmulq_f32(v189, v189);
          LANES128(v190).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v190, v190, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v190).n128_u64[0])))
                  .n64_u64[0];
        } while (
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v190).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v190).n128_u64[0])))
                .n64_f32[0] >= LANES64(v175).n64_f32[0]);
      }
      v12 = (float32x4_t*)((char*)v12 + v182 * 16);
      if (v186 < v187) {
        v194 = v187;
        do {
          v484 = LANES128(*(v12)).n128_u64[1];
          v515 = LANES128(v12[1]).n128_u64[0];
          v452 = LANES128(*(v12)).n128_u64[0];
          v195 = LANES128(v194[1]).n128_u32[0];
          v196 = LANES128(*(v194)).n128_u64[1];
          LANES128(*(v12)).n128_u64[0] = LANES128(*(v194)).n128_u64[0];
          LANES128(*(v12)).n128_u64[1] = v196;
          LANES128(v12[1]).n128_u32[0] = v195;
          LANES128(v194[1]).n128_u32[0] = v515;
          LANES128(*(v194)).n128_u64[0] = v452;
          LANES128(*(v194)).n128_u64[1] = v484;
          v197 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
          v198 = vsubq_f32(v197, v170);
          v199 = vmulq_f32(v198, v198);
          LANES128(v199).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v199, v199, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v199).n128_u64[0])))
                  .n64_u64[0];
          LANES64(v200).n64_u64[0] =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v199).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v199).n128_u64[0])))
                  .n64_u64[0];
          do {
            v201 = v12[2];
            v12 += 2;
            v202 = vsubq_f32(v197, v201);
            v203 = vmulq_f32(v202, v202);
            LANES128(v203).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v203, v203, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v203).n128_u64[0])))
                    .n64_u64[0];
          } while (
              (LANES64_OF(
                   vcgt_f32(
                       v200,
                       vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v203).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v203).n128_u64[0]))))
                   .n64_u8[0] &
               1) != 0);
          do {
            v204 = v194[-2];
            v194 -= 2;
            v205 = vsubq_f32(v197, v204);
            v206 = vmulq_f32(v205, v205);
            LANES128(v206).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v206, v206, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v206).n128_u64[0])))
                    .n64_u64[0];
          } while (
              (LANES64_OF(
                   vcgt_f32(
                       v200,
                       vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v206).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v206).n128_u64[0]))))
                   .n64_u8[0] &
               1) == 0);
        } while (v12 < v194);
      }
      if ((float32x4_t*)v8 != &v12[-2]) {
        v207 = LANES128(v12[-1]).n128_u32[0];
        *(_QWORD*)(v8 + 8) = LANES128(v12[-2]).n128_u64[1];
        v208 = LANES128(v12[-2]).n128_u64[0];
        *(_DWORD*)(v8 + 16) = v207;
        *(_QWORD*)v8 = v208;
      }
      v12[-2] = v170;
      LANES128(v12[-1]).n128_u32[0] = v181;
      if (v186 < v187) {
        goto LABEL_79;
      }
      v209 = gfxa_c64240((float32x4_t*)v8, v12 - 2, a3);
      result = gfxa_c64240(v12, a2, a3);
      if ((result & 1) != 0) {
        a2 = v12 - 2;
        if (!v209) {
          goto LABEL_2;
        }
        return result;
      }
      if (!v209) {
      LABEL_79:
        result = gfxa_c622a0(v8, v12 - 2, a3, a4, a5 & 1);
        a5 = 0;
      }
    }
    else {
      v172 = v171[5];
      v176 = vsubq_f32(v172, v12[-2]);
      v177 = vmulq_f32(v176, v176);
      LANES128(v177).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v177, v177, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v177).n128_u64[0])))
              .n64_u64[0];
      LANES64(v178).n64_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v177).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v177).n128_u64[0])))
              .n64_u64[0];
      v179 = vsubq_f32(v172, v170);
      v180 = vmulq_f32(v179, v179);
      LANES128(v180).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v180, v180, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v180).n128_u64[0])))
              .n64_u64[0];
      LANES64(v175).n64_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v180).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v180).n128_u64[0])))
              .n64_u64[0];
      if ((LANES64_OF(vcgt_f32(v175, v178)).n64_u8[0] & 1) != 0) {
        goto LABEL_60;
      }
      v210 = vsubq_f32(v172, *v9);
      v211 = vmulq_f32(v210, v210);
      LANES128(v211).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v211, v211, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v211).n128_u64[0])))
              .n64_u64[0];
      if ((LANES64_OF(
               vcgt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v211).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v211).n128_u64[0])),
                        v175))
               .n64_u8[0] &
           1) != 0) {
        do {
          v212 = v12[2];
          v12 += 2;
          v213 = vsubq_f32(v172, v212);
          v214 = vmulq_f32(v213, v213);
          LANES128(v214).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v214, v214, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v214).n128_u64[0])))
                  .n64_u64[0];
        } while ((LANES64_OF(
                      vcgt_f32(vpadd_f32(COERCE_AS(float32x2_t,
                                                   LANES128(v214).n128_u64[0]),
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v214).n128_u64[0])),
                               v175))
                      .n64_u8[0] &
                  1) == 0);
      }
      else {
        n128_u64 = (unsigned __int64)LANES128(v12[2]).n128_u64;
        do {
          v12 = (float32x4_t*)n128_u64;
          if (n128_u64 >= (unsigned __int64)a2) {
            break;
          }
          n128_u64 += 32LL;
          v216 = vsubq_f32(v172, *v12);
          v217 = vmulq_f32(v216, v216);
          LANES128(v217).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v217, v217, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v217).n128_u64[0])))
                  .n64_u64[0];
        } while ((LANES64_OF(
                      vcgt_f32(vpadd_f32(COERCE_AS(float32x2_t,
                                                   LANES128(v217).n128_u64[0]),
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v217).n128_u64[0])),
                               v175))
                      .n64_u8[0] &
                  1) == 0);
      }
      v218 = a2;
      if (v12 < a2) {
        v218 = a2;
        do {
          v219 = v218[-2];
          v218 -= 2;
          v220 = vsubq_f32(v172, v219);
          v221 = vmulq_f32(v220, v220);
          LANES128(v221).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v221, v221, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v221).n128_u64[0])))
                  .n64_u64[0];
        } while ((LANES64_OF(
                      vcgt_f32(vpadd_f32(COERCE_AS(float32x2_t,
                                                   LANES128(v221).n128_u64[0]),
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v221).n128_u64[0])),
                               v175))
                      .n64_u8[0] &
                  1) != 0);
      }
      v222 = *(_DWORD*)(v8 + 16);
      while (v12 < v218) {
        v485 = LANES128(*(v12)).n128_u64[1];
        v516 = LANES128(v12[1]).n128_u64[0];
        v453 = LANES128(*(v12)).n128_u64[0];
        v223 = LANES128(v218[1]).n128_u32[0];
        v224 = LANES128(*(v218)).n128_u64[1];
        LANES128(*(v12)).n128_u64[0] = LANES128(*(v218)).n128_u64[0];
        LANES128(*(v12)).n128_u64[1] = v224;
        LANES128(v12[1]).n128_u32[0] = v223;
        LANES128(v218[1]).n128_u32[0] = v516;
        LANES128(*(v218)).n128_u64[0] = v453;
        LANES128(*(v218)).n128_u64[1] = v485;
        v225 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
        v226 = vsubq_f32(v225, v170);
        v227 = vmulq_f32(v226, v226);
        LANES128(v227).n128_u64[0] =
            LANES64_OF(
                vadd_f32(COERCE_AS(
                             float32x2_t,
                             LANES128_OF(vextq_s8(v227, v227, 8u)).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v227).n128_u64[0])))
                .n64_u64[0];
        LANES64(v228).n64_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v227).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v227).n128_u64[0])))
                .n64_u64[0];
        do {
          v229 = v12[2];
          v12 += 2;
          v230 = vsubq_f32(v225, v229);
          v231 = vmulq_f32(v230, v230);
          LANES128(v231).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v231, v231, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v231).n128_u64[0])))
                  .n64_u64[0];
        } while ((LANES64_OF(
                      vcgt_f32(vpadd_f32(COERCE_AS(float32x2_t,
                                                   LANES128(v231).n128_u64[0]),
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v231).n128_u64[0])),
                               v228))
                      .n64_u8[0] &
                  1) == 0);
        do {
          v232 = v218[-2];
          v218 -= 2;
          v233 = vsubq_f32(v225, v232);
          v234 = vmulq_f32(v233, v233);
          LANES128(v234).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v234, v234, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v234).n128_u64[0])))
                  .n64_u64[0];
        } while ((LANES64_OF(
                      vcgt_f32(vpadd_f32(COERCE_AS(float32x2_t,
                                                   LANES128(v234).n128_u64[0]),
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v234).n128_u64[0])),
                               v228))
                      .n64_u8[0] &
                  1) != 0);
      }
      if ((float32x4_t*)v8 != &v12[-2]) {
        v235 = LANES128(v12[-1]).n128_u32[0];
        *(_QWORD*)(v8 + 8) = LANES128(v12[-2]).n128_u64[1];
        v236 = LANES128(v12[-2]).n128_u64[0];
        *(_DWORD*)(v8 + 16) = v235;
        *(_QWORD*)v8 = v236;
      }
      a5 = 0;
      v12[-2] = v170;
      LANES128(v12[-1]).n128_u32[0] = v222;
    }
  }
  v244 = v12 + 2;
  v245 = a2[-2];
  v237 = a2 - 2;
  v246 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
  v247 = vsubq_f32(v246, v12[2]);
  v248 = vsubq_f32(v246, *v12);
  v249 = vsubq_f32(v246, v245);
  v250 = vmulq_f32(v247, v247);
  v251 = vmulq_f32(v248, v248);
  v252 = vmulq_f32(v249, v249);
  LANES128(v250).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v250, v250, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v250).n128_u64[0])))
          .n64_u64[0];
  LANES128(v251).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v251, v251, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v251).n128_u64[0])))
          .n64_u64[0];
  LANES128(v250).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v250).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v250).n128_u64[0])))
          .n64_u64[0];
  LANES128(v252).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v252, v252, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v252).n128_u64[0])))
          .n64_u64[0];
  v253 = LANES64_OF(
             vcgt_f32(
                 COERCE_AS(float32x2_t, LANES128(v250).n128_u64[0]),
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v252).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v252).n128_u64[0]))))
             .n64_u8[0];
  if ((LANES64_OF(
           vcgt_f32(
               vpadd_f32(COERCE_AS(float32x2_t, LANES128(v251).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v251).n128_u64[0])),
               COERCE_AS(float32x2_t, LANES128(v250).n128_u64[0])))
           .n64_u8[0] &
       1) == 0) {
    if ((v253 & 1) == 0) {
      return result;
    }
    v358 = LANES128(*(v244)).n128_u64[0];
    v489 = LANES128(v12[2]).n128_u64[1];
    v520 = LANES128(v12[3]).n128_u64[0];
    v359 = LANES128(*(v237)).n128_u64[0];
    v360 = LANES128(*(v237)).n128_u64[1];
    LANES128(v12[3]).n128_u32[0] = LANES128(v237[1]).n128_u32[0];
    LANES128(*(v244)).n128_u64[0] = v359;
    LANES128(v12[2]).n128_u64[1] = v360;
    LANES128(v237[1]).n128_u32[0] = v520;
    LANES128(*(v237)).n128_u64[0] = v358;
    LANES128(*(v237)).n128_u64[1] = v489;
    goto LABEL_180;
  }
  if ((v253 & 1) != 0) {
  LABEL_105:
    v486 = LANES128(*(v12)).n128_u64[1];
    v517 = LANES128(v12[1]).n128_u64[0];
    v454 = LANES128(*(v12)).n128_u64[0];
    v254 = LANES128(v237[1]).n128_u32[0];
    v255 = LANES128(*(v237)).n128_u64[1];
    LANES128(*(v12)).n128_u64[0] = LANES128(*(v237)).n128_u64[0];
    LANES128(*(v12)).n128_u64[1] = v255;
    LANES128(v12[1]).n128_u32[0] = v254;
    LANES128(v237[1]).n128_u32[0] = v517;
    LANES128(*(v237)).n128_u64[0] = v454;
    LANES128(*(v237)).n128_u64[1] = v486;
    return result;
  }
  v491 = LANES128(*(v12)).n128_u64[1];
  v522 = LANES128(v12[1]).n128_u64[0];
  v458 = LANES128(*(v12)).n128_u64[0];
  LANES128(v12[1]).n128_u32[0] = LANES128(v12[3]).n128_u32[0];
  v390 = LANES128(v12[2]).n128_u64[1];
  LANES128(*(v12)).n128_u64[0] = LANES128(*(v244)).n128_u64[0];
  LANES128(*(v12)).n128_u64[1] = v390;
  LANES128(v12[3]).n128_u32[0] = v522;
  LANES128(*(v244)).n128_u64[0] = v458;
  LANES128(v12[2]).n128_u64[1] = v491;
  v391 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
  v392 = vsubq_f32(v391, *v237);
  v393 = vsubq_f32(v391, v12[2]);
  v394 = vmulq_f32(v392, v392);
  v395 = vmulq_f32(v393, v393);
  LANES128(v394).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v394, v394, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v394).n128_u64[0])))
          .n64_u64[0];
  LANES128(v395).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v395, v395, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v395).n128_u64[0])))
          .n64_u64[0];
  if ((LANES64_OF(
           vcgt_f32(
               vpadd_f32(COERCE_AS(float32x2_t, LANES128(v395).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v395).n128_u64[0])),
               vpadd_f32(COERCE_AS(float32x2_t, LANES128(v394).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v394).n128_u64[0]))))
           .n64_u32[0] &
       1) != 0) {
    v523 = LANES128(v12[3]).n128_u64[0];
    v396 = LANES128(*(v244)).n128_u64[0];
    v492 = LANES128(v12[2]).n128_u64[1];
    v398 = LANES128(*(v237)).n128_u64[0];
    v397 = LANES128(*(v237)).n128_u64[1];
    LANES128(v12[3]).n128_u32[0] = LANES128(v237[1]).n128_u32[0];
    LANES128(*(v244)).n128_u64[0] = v398;
    LANES128(v12[2]).n128_u64[1] = v397;
    LANES128(v237[1]).n128_u32[0] = v523;
    LANES128(*(v237)).n128_u64[0] = v396;
    LANES128(*(v237)).n128_u64[1] = v492;
  }
  return result;
}

float32x4_t* gfxa_c63da0(float32x4_t* result, float32x4_t* a2, float32x4_t* a3,
                         float32x4_t* a4, float32x4_t* a5, __int64 a6)
{

#pragma clang fp contract(off)
  float32x4_t v6;
  float32x4_t v7;
  float32x4_t v8;
  int8x16_t v9;
  int8x16_t v10;
  unsigned __int8 v11;
  float32x4_t v12;
  int8x16_t v13;
  unsigned __int8 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  int8x16_t v28;
  int8x16_t v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  int8x16_t v43;
  int8x16_t v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  int8x16_t v50;
  int8x16_t v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  float32x4_t v57;
  float32x4_t v58;
  int8x16_t v59;
  int8x16_t v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  float32x4_t v66;
  float32x4_t v67;
  int8x16_t v68;
  int8x16_t v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  unsigned __int64 v74;
  float32x4_t v75;
  float32x4_t v76;
  int8x16_t v77;
  int8x16_t v78;
  unsigned __int64 v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  float32x4_t v84;
  float32x4_t v85;
  float32x4_t v86;
  int8x16_t v87;
  int8x16_t v88;
  unsigned __int64 v89;
  unsigned __int64 v90;
  unsigned __int64 v91;
  unsigned __int64 v92;
  unsigned __int64 v93;
  float32x4_t v94;
  float32x4_t v95;
  float32x4_t v96;
  int8x16_t v97;
  int8x16_t v98;
  unsigned __int64 v99;
  unsigned __int64 v100;
  unsigned __int64 v101;
  unsigned __int64 v102;
  unsigned __int64 v103;
  float32x4_t v104;
  float32x4_t v105;
  float32x4_t v106;
  int8x16_t v107;
  int8x16_t v108;
  unsigned __int64 v109;
  unsigned __int64 v110;
  unsigned __int64 v111;
  unsigned __int64 v112;
  unsigned __int64 v113;

  v6 = *(float32x4_t*)(**(_QWORD**)(a6 + 8) + 80LL);
  v7 = vsubq_f32(v6, *a2);
  v8 = vsubq_f32(v6, *result);
  v9 = vmulq_f32(v7, v7);
  v10 = vmulq_f32(v8, v8);
  LANES128(v9).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v9, v9, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
          .n64_u64[0];
  LANES128(v10).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v10, v10, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
          .n64_u64[0];
  LANES128(v9).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
          .n64_u64[0];
  v11 =
      LANES64_OF(
          vcgt_f32(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])),
                   COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
          .n64_u8[0];
  v12 = vsubq_f32(v6, *a3);
  v13 = vmulq_f32(v12, v12);
  LANES128(v13).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v13, v13, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
          .n64_u64[0];
  v14 = LANES64_OF(
            vcgt_f32(
                COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0]),
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]))))
            .n64_u8[0];
  if ((v11 & 1) != 0) {
    if ((v14 & 1) != 0) {
      v16 = LANES128(*(a3)).n128_u64[0];
      v15 = LANES128(*(a3)).n128_u64[1];
      v17 = LANES128(result[1]).n128_u64[0];
      LANES128(result[1]).n128_u32[0] = LANES128(a3[1]).n128_u32[0];
      v19 = LANES128(*(result)).n128_u64[0];
      v18 = LANES128(*(result)).n128_u64[1];
      LANES128(*(result)).n128_u64[0] = v16;
      LANES128(*(result)).n128_u64[1] = v15;
    LABEL_9:
      LANES128(*(a3)).n128_u64[0] = v19;
      LANES128(*(a3)).n128_u64[1] = v18;
      LANES128(a3[1]).n128_u32[0] = v17;
      goto LABEL_10;
    }
    v36 = LANES128(*(result)).n128_u64[1];
    v35 = LANES128(result[1]).n128_u64[0];
    v37 = LANES128(*(result)).n128_u64[0];
    v38 = LANES128(*(a2)).n128_u64[0];
    v39 = LANES128(*(a2)).n128_u64[1];
    LANES128(result[1]).n128_u32[0] = LANES128(a2[1]).n128_u32[0];
    LANES128(*(result)).n128_u64[0] = v38;
    LANES128(*(result)).n128_u64[1] = v39;
    LANES128(*(a2)).n128_u64[0] = v37;
    LANES128(*(a2)).n128_u64[1] = v36;
    LANES128(a2[1]).n128_u32[0] = v35;
    v40 = *(float32x4_t*)(**(_QWORD**)(a6 + 8) + 80LL);
    v41 = vsubq_f32(v40, *a3);
    v42 = vsubq_f32(v40, *a2);
    v43 = vmulq_f32(v41, v41);
    v44 = vmulq_f32(v42, v42);
    LANES128(v43).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v43, v43, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0])))
            .n64_u64[0];
    LANES128(v44).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v44, v44, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0])))
            .n64_u64[0];
    if ((LANES64_OF(
             vcgt_f32(
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0])),
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0]))))
             .n64_u8[0] &
         1) != 0) {
      v17 = LANES128(a2[1]).n128_u64[0];
      v46 = LANES128(*(a3)).n128_u64[0];
      v45 = LANES128(*(a3)).n128_u64[1];
      LANES128(a2[1]).n128_u32[0] = LANES128(a3[1]).n128_u32[0];
      v19 = LANES128(*(a2)).n128_u64[0];
      v18 = LANES128(*(a2)).n128_u64[1];
      LANES128(*(a2)).n128_u64[0] = v46;
      LANES128(*(a2)).n128_u64[1] = v45;
      goto LABEL_9;
    }
  }
  else if ((v14 & 1) != 0) {
    v21 = LANES128(*(a2)).n128_u64[1];
    v20 = LANES128(a2[1]).n128_u64[0];
    v22 = LANES128(*(a2)).n128_u64[0];
    v23 = LANES128(*(a3)).n128_u64[0];
    v24 = LANES128(*(a3)).n128_u64[1];
    LANES128(a2[1]).n128_u32[0] = LANES128(a3[1]).n128_u32[0];
    LANES128(*(a2)).n128_u64[0] = v23;
    LANES128(*(a2)).n128_u64[1] = v24;
    LANES128(*(a3)).n128_u64[0] = v22;
    LANES128(*(a3)).n128_u64[1] = v21;
    LANES128(a3[1]).n128_u32[0] = v20;
    v25 = *(float32x4_t*)(**(_QWORD**)(a6 + 8) + 80LL);
    v26 = vsubq_f32(v25, *a2);
    v27 = vsubq_f32(v25, *result);
    v28 = vmulq_f32(v26, v26);
    v29 = vmulq_f32(v27, v27);
    LANES128(v28).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v28, v28, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])))
            .n64_u64[0];
    LANES128(v29).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v29, v29, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0])))
            .n64_u64[0];
    if ((LANES64_OF(
             vcgt_f32(
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0])),
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0]))))
             .n64_u8[0] &
         1) != 0) {
      v30 = LANES128(result[1]).n128_u64[0];
      v32 = LANES128(*(a2)).n128_u64[0];
      v31 = LANES128(*(a2)).n128_u64[1];
      LANES128(result[1]).n128_u32[0] = LANES128(a2[1]).n128_u32[0];
      v34 = LANES128(*(result)).n128_u64[0];
      v33 = LANES128(*(result)).n128_u64[1];
      LANES128(*(result)).n128_u64[0] = v32;
      LANES128(*(result)).n128_u64[1] = v31;
      LANES128(a2[1]).n128_u32[0] = v30;
      LANES128(*(a2)).n128_u64[0] = v34;
      LANES128(*(a2)).n128_u64[1] = v33;
    }
  }
LABEL_10:
  v47 = *(float32x4_t*)(**(_QWORD**)(a6 + 8) + 80LL);
  v48 = vsubq_f32(v47, *a4);
  v49 = vsubq_f32(v47, *a3);
  v50 = vmulq_f32(v48, v48);
  v51 = vmulq_f32(v49, v49);
  LANES128(v50).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v50, v50, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0])))
          .n64_u64[0];
  LANES128(v51).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v51, v51, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v51).n128_u64[0])))
          .n64_u64[0];
  if ((LANES64_OF(
           vcgt_f32(
               vpadd_f32(COERCE_AS(float32x2_t, LANES128(v51).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v51).n128_u64[0])),
               vpadd_f32(COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0]))))
           .n64_u8[0] &
       1) != 0) {
    v53 = LANES128(*(a3)).n128_u64[1];
    v52 = LANES128(a3[1]).n128_u64[0];
    v54 = LANES128(*(a3)).n128_u64[0];
    v55 = LANES128(*(a4)).n128_u64[0];
    v56 = LANES128(*(a4)).n128_u64[1];
    LANES128(a3[1]).n128_u32[0] = LANES128(a4[1]).n128_u32[0];
    LANES128(*(a3)).n128_u64[0] = v55;
    LANES128(*(a3)).n128_u64[1] = v56;
    LANES128(*(a4)).n128_u64[0] = v54;
    LANES128(*(a4)).n128_u64[1] = v53;
    LANES128(a4[1]).n128_u32[0] = v52;
    v47 = *(float32x4_t*)(**(_QWORD**)(a6 + 8) + 80LL);
    v57 = vsubq_f32(v47, *a3);
    v58 = vsubq_f32(v47, *a2);
    v59 = vmulq_f32(v57, v57);
    v60 = vmulq_f32(v58, v58);
    LANES128(v59).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v59, v59, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v59).n128_u64[0])))
            .n64_u64[0];
    LANES128(v60).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v60, v60, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v60).n128_u64[0])))
            .n64_u64[0];
    if ((LANES64_OF(
             vcgt_f32(
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v60).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v60).n128_u64[0])),
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v59).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v59).n128_u64[0]))))
             .n64_u8[0] &
         1) != 0) {
      v62 = LANES128(*(a2)).n128_u64[1];
      v61 = LANES128(a2[1]).n128_u64[0];
      v63 = LANES128(*(a2)).n128_u64[0];
      v64 = LANES128(*(a3)).n128_u64[0];
      v65 = LANES128(*(a3)).n128_u64[1];
      LANES128(a2[1]).n128_u32[0] = LANES128(a3[1]).n128_u32[0];
      LANES128(*(a2)).n128_u64[0] = v64;
      LANES128(*(a2)).n128_u64[1] = v65;
      LANES128(*(a3)).n128_u64[0] = v63;
      LANES128(*(a3)).n128_u64[1] = v62;
      LANES128(a3[1]).n128_u32[0] = v61;
      v47 = *(float32x4_t*)(**(_QWORD**)(a6 + 8) + 80LL);
      v66 = vsubq_f32(v47, *a2);
      v67 = vsubq_f32(v47, *result);
      v68 = vmulq_f32(v66, v66);
      v69 = vmulq_f32(v67, v67);
      LANES128(v68).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v68, v68, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v68).n128_u64[0])))
              .n64_u64[0];
      LANES128(v69).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v69, v69, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0])))
              .n64_u64[0];
      if ((LANES64_OF(
               vcgt_f32(
                   vpadd_f32(COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0])),
                   vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v68).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v68).n128_u64[0]))))
               .n64_u8[0] &
           1) != 0) {
        v71 = LANES128(*(result)).n128_u64[1];
        v70 = LANES128(result[1]).n128_u64[0];
        v72 = LANES128(*(result)).n128_u64[0];
        v74 = LANES128(*(a2)).n128_u64[0];
        v73 = LANES128(*(a2)).n128_u64[1];
        LANES128(result[1]).n128_u32[0] = LANES128(a2[1]).n128_u32[0];
        LANES128(*(result)).n128_u64[0] = v74;
        LANES128(*(result)).n128_u64[1] = v73;
        LANES128(*(a2)).n128_u64[0] = v72;
        LANES128(*(a2)).n128_u64[1] = v71;
        LANES128(a2[1]).n128_u32[0] = v70;
        v47 = *(float32x4_t*)(**(_QWORD**)(a6 + 8) + 80LL);
      }
    }
  }
  v75 = vsubq_f32(v47, *a5);
  v76 = vsubq_f32(v47, *a4);
  v77 = vmulq_f32(v75, v75);
  v78 = vmulq_f32(v76, v76);
  LANES128(v77).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v77, v77, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v77).n128_u64[0])))
          .n64_u64[0];
  LANES128(v78).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v78, v78, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v78).n128_u64[0])))
          .n64_u64[0];
  if ((LANES64_OF(
           vcgt_f32(
               vpadd_f32(COERCE_AS(float32x2_t, LANES128(v78).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v78).n128_u64[0])),
               vpadd_f32(COERCE_AS(float32x2_t, LANES128(v77).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v77).n128_u64[0]))))
           .n64_u32[0] &
       1) != 0) {
    v80 = LANES128(*(a4)).n128_u64[1];
    v79 = LANES128(a4[1]).n128_u64[0];
    v81 = LANES128(*(a4)).n128_u64[0];
    v82 = LANES128(*(a5)).n128_u64[0];
    v83 = LANES128(*(a5)).n128_u64[1];
    LANES128(a4[1]).n128_u32[0] = LANES128(a5[1]).n128_u32[0];
    LANES128(*(a4)).n128_u64[0] = v82;
    LANES128(*(a4)).n128_u64[1] = v83;
    LANES128(*(a5)).n128_u64[0] = v81;
    LANES128(*(a5)).n128_u64[1] = v80;
    LANES128(a5[1]).n128_u32[0] = v79;
    v84 = *(float32x4_t*)(**(_QWORD**)(a6 + 8) + 80LL);
    v85 = vsubq_f32(v84, *a4);
    v86 = vsubq_f32(v84, *a3);
    v87 = vmulq_f32(v85, v85);
    v88 = vmulq_f32(v86, v86);
    LANES128(v87).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v87, v87, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v87).n128_u64[0])))
            .n64_u64[0];
    LANES128(v88).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v88, v88, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v88).n128_u64[0])))
            .n64_u64[0];
    if ((LANES64_OF(
             vcgt_f32(
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v88).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v88).n128_u64[0])),
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v87).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v87).n128_u64[0]))))
             .n64_u32[0] &
         1) != 0) {
      v90 = LANES128(*(a3)).n128_u64[1];
      v89 = LANES128(a3[1]).n128_u64[0];
      v91 = LANES128(*(a3)).n128_u64[0];
      v92 = LANES128(*(a4)).n128_u64[0];
      v93 = LANES128(*(a4)).n128_u64[1];
      LANES128(a3[1]).n128_u32[0] = LANES128(a4[1]).n128_u32[0];
      LANES128(*(a3)).n128_u64[0] = v92;
      LANES128(*(a3)).n128_u64[1] = v93;
      LANES128(*(a4)).n128_u64[0] = v91;
      LANES128(*(a4)).n128_u64[1] = v90;
      LANES128(a4[1]).n128_u32[0] = v89;
      v94 = *(float32x4_t*)(**(_QWORD**)(a6 + 8) + 80LL);
      v95 = vsubq_f32(v94, *a3);
      v96 = vsubq_f32(v94, *a2);
      v97 = vmulq_f32(v95, v95);
      v98 = vmulq_f32(v96, v96);
      LANES128(v97).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v97, v97, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v97).n128_u64[0])))
              .n64_u64[0];
      LANES128(v98).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v98, v98, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v98).n128_u64[0])))
              .n64_u64[0];
      if ((LANES64_OF(
               vcgt_f32(
                   vpadd_f32(COERCE_AS(float32x2_t, LANES128(v98).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v98).n128_u64[0])),
                   vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v97).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v97).n128_u64[0]))))
               .n64_u32[0] &
           1) != 0) {
        v100 = LANES128(*(a2)).n128_u64[1];
        v99 = LANES128(a2[1]).n128_u64[0];
        v101 = LANES128(*(a2)).n128_u64[0];
        v102 = LANES128(*(a3)).n128_u64[0];
        v103 = LANES128(*(a3)).n128_u64[1];
        LANES128(a2[1]).n128_u32[0] = LANES128(a3[1]).n128_u32[0];
        LANES128(*(a2)).n128_u64[0] = v102;
        LANES128(*(a2)).n128_u64[1] = v103;
        LANES128(*(a3)).n128_u64[0] = v101;
        LANES128(*(a3)).n128_u64[1] = v100;
        LANES128(a3[1]).n128_u32[0] = v99;
        v104 = *(float32x4_t*)(**(_QWORD**)(a6 + 8) + 80LL);
        v105 = vsubq_f32(v104, *a2);
        v106 = vsubq_f32(v104, *result);
        v107 = vmulq_f32(v105, v105);
        v108 = vmulq_f32(v106, v106);
        LANES128(v107).n128_u64[0] =
            LANES64_OF(
                vadd_f32(COERCE_AS(
                             float32x2_t,
                             LANES128_OF(vextq_s8(v107, v107, 8u)).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v107).n128_u64[0])))
                .n64_u64[0];
        LANES128(v108).n128_u64[0] =
            LANES64_OF(
                vadd_f32(COERCE_AS(
                             float32x2_t,
                             LANES128_OF(vextq_s8(v108, v108, 8u)).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v108).n128_u64[0])))
                .n64_u64[0];
        if ((LANES64_OF(
                 vcgt_f32(
                     vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v108).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v108).n128_u64[0])),
                     vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v107).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v107).n128_u64[0]))))
                 .n64_u32[0] &
             1) != 0) {
          v109 = LANES128(result[1]).n128_u64[0];
          v111 = LANES128(*(a2)).n128_u64[0];
          v110 = LANES128(*(a2)).n128_u64[1];
          LANES128(result[1]).n128_u32[0] = LANES128(a2[1]).n128_u32[0];
          v113 = LANES128(*(result)).n128_u64[0];
          v112 = LANES128(*(result)).n128_u64[1];
          LANES128(*(result)).n128_u64[0] = v111;
          LANES128(*(result)).n128_u64[1] = v110;
          LANES128(a2[1]).n128_u32[0] = v109;
          LANES128(*(a2)).n128_u64[0] = v113;
          LANES128(*(a2)).n128_u64[1] = v112;
        }
      }
    }
  }
  return result;
}

bool gfxa_c64240(float32x4_t* a1, float32x4_t* a2, __int64 a3)
{

#pragma clang fp contract(off)
  signed __int64 v3;
  float32x4_t* v4;
  float32x4_t v5;
  float32x4_t v6;
  float32x4_t v7;
  float32x4_t v8;
  int8x16_t v9;
  int8x16_t v10;
  float32x4_t* v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  int8x16_t v17;
  int8x16_t v18;
  int8x16_t v19;
  unsigned __int8 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  float32x4_t* v26;
  float32x4_t v27;
  float32x4_t* v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  int8x16_t v32;
  float32x4_t v33;
  float32x4_t v34;
  int8x16_t v35;
  int8x16_t v36;
  unsigned __int8 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int32 v42;
  float32x4_t v43;
  float32x4_t* v44;
  float32x4_t* v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  int8x16_t v49;
  float32x4_t v50;
  float32x4_t v51;
  int8x16_t v52;
  int8x16_t v53;
  unsigned __int8 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  unsigned __int32 v68;
  float32x4_t v69;
  float32x4_t v70;
  float32x4_t v71;
  float32x4_t v72;
  int8x16_t v73;
  int8x16_t v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  unsigned __int32 v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  unsigned __int32 v84;
  float32x4_t v85;
  float32x4_t v86;
  float32x4_t v87;
  float32x4_t v88;
  int8x16_t v89;
  int8x16_t v90;
  unsigned __int64 v91;
  unsigned __int64 v92;
  unsigned __int64 v93;
  unsigned __int64 v94;
  unsigned __int32 v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  unsigned __int32 v100;
  float32x4_t v101;
  float32x4_t v102;
  float32x4_t v103;
  float32x4_t v104;
  int8x16_t v105;
  int8x16_t v106;
  unsigned __int64 v107;
  unsigned __int64 v108;
  unsigned __int64 v109;
  unsigned __int64 v110;
  unsigned __int64 v111;
  unsigned __int64 v112;
  unsigned __int64 v113;
  unsigned __int64 v114;
  unsigned __int64 v115;
  unsigned __int32 v116;
  float32x4_t v117;
  float32x4_t v118;
  float32x4_t v119;
  float32x4_t v120;
  int8x16_t v121;
  int8x16_t v122;
  unsigned __int64 v123;
  unsigned __int64 v124;
  unsigned __int64 v125;
  unsigned __int64 v126;
  unsigned __int32 v127;
  float32x4_t* v128;
  __int64 v129;
  int v130;
  float32x4_t* v131;
  float32x4_t v132;
  float32x4_t v133;
  float32x4_t v134;
  float32x4_t v135;
  int8x16_t v136;
  int8x16_t v137;
  unsigned __int32 v138;
  __int64 v139;
  float32x4_t* v140;
  unsigned __int64 v141;
  float32x4_t v142;
  float32x4_t v143;
  float32x4_t v144;
  int8x16_t v145;
  int8x16_t v146;
  unsigned __int64 v147;
  unsigned __int64 v148;
  unsigned __int64 v149;
  unsigned __int64 v150;
  unsigned __int32 v151;
  float32x4_t v152;
  float32x4_t v153;
  float32x4_t v154;
  float32x4_t v155;
  int8x16_t v156;
  int8x16_t v157;
  unsigned __int64 v158;
  float32x4_t v159;
  float32x4_t v160;
  float32x4_t v161;
  int8x16_t v162;
  int8x16_t v163;
  unsigned __int64 v164;
  unsigned __int64 v165;
  unsigned __int64 v166;
  unsigned __int64 v167;
  unsigned __int64 v168;
  float32x4_t v169;
  float32x4_t v170;
  float32x4_t v171;
  int8x16_t v172;
  int8x16_t v173;
  unsigned __int64 v174;
  unsigned __int64 v175;
  unsigned __int64 v176;
  unsigned __int64 v177;
  unsigned __int32 v178;
  float32x4_t v179;
  float32x4_t v180;
  float32x4_t v181;
  int8x16_t v182;
  int8x16_t v183;
  unsigned __int64 v184;
  unsigned __int64 v185;
  unsigned __int64 v186;
  unsigned __int64 v187;
  unsigned __int32 v188;

  v3 = ((char*)a2 - (char*)a1) >> 5;
  if (v3 > 2) {
    if (v3 == 3) {
      v11 = a1 + 2;
      v12 = a2[-2];
      v4 = a2 - 2;
      v13 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
      v14 = vsubq_f32(v13, a1[2]);
      v15 = vsubq_f32(v13, *a1);
      v16 = vsubq_f32(v13, v12);
      v17 = vmulq_f32(v14, v14);
      v18 = vmulq_f32(v15, v15);
      v19 = vmulq_f32(v16, v16);
      LANES128(v17).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v17, v17, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0])))
              .n64_u64[0];
      LANES128(v18).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v18, v18, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
              .n64_u64[0];
      LANES128(v17).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0])))
              .n64_u64[0];
      LANES128(v19).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v19, v19, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0])))
              .n64_u64[0];
      v20 =
          LANES64_OF(
              vcgt_f32(
                  COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0]),
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]))))
              .n64_u8[0];
      if ((LANES64_OF(
               vcgt_f32(
                   vpadd_f32(COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])),
                   COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0])))
               .n64_u8[0] &
           1) != 0) {
        if ((v20 & 1) == 0) {
          v96 = LANES128(a1[2]).n128_u64[1];
          v98 = LANES128(*(a1)).n128_u64[1];
          v97 = LANES128(a1[1]).n128_u64[0];
          v99 = LANES128(*(a1)).n128_u64[0];
          LANES128(*(a1)).n128_u64[0] = LANES128(*(v11)).n128_u64[0];
          LANES128(*(a1)).n128_u64[1] = v96;
          v100 = LANES128(a1[3]).n128_u32[0];
          LANES128(*(v11)).n128_u64[0] = v99;
          LANES128(a1[2]).n128_u64[1] = v98;
          LANES128(a1[3]).n128_u32[0] = v97;
          v101 = a1[2];
          LANES128(a1[1]).n128_u32[0] = v100;
          v102 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
          v103 = vsubq_f32(v102, *v4);
          v104 = vsubq_f32(v102, v101);
          v105 = vmulq_f32(v103, v103);
          v106 = vmulq_f32(v104, v104);
          LANES128(v105).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v105, v105, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v105).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v106).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v106, v106, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v106).n128_u64[0])))
                  .n64_u64[0];
          if ((LANES64_OF(
                   vcgt_f32(
                       vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v106).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v106).n128_u64[0])),
                       vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v105).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v105).n128_u64[0]))))
                   .n64_u32[0] &
               1) != 0) {
            v107 = LANES128(a1[3]).n128_u64[0];
            v109 = LANES128(*(v4)).n128_u64[0];
            v108 = LANES128(*(v4)).n128_u64[1];
            LANES128(a1[3]).n128_u32[0] = LANES128(v4[1]).n128_u32[0];
            v111 = LANES128(*(v11)).n128_u64[0];
            v110 = LANES128(a1[2]).n128_u64[1];
            LANES128(*(v11)).n128_u64[0] = v109;
            LANES128(a1[2]).n128_u64[1] = v108;
            LANES128(v4[1]).n128_u32[0] = v107;
            LANES128(*(v4)).n128_u64[0] = v111;
            LANES128(*(v4)).n128_u64[1] = v110;
          }
          return true;
        }
      LABEL_12:
        v21 = LANES128(a1[1]).n128_u64[0];
        v23 = LANES128(*(v4)).n128_u64[0];
        v22 = LANES128(*(v4)).n128_u64[1];
        LANES128(a1[1]).n128_u32[0] = LANES128(v4[1]).n128_u32[0];
        v25 = LANES128(*(a1)).n128_u64[0];
        v24 = LANES128(*(a1)).n128_u64[1];
        LANES128(*(a1)).n128_u64[0] = v23;
        LANES128(*(a1)).n128_u64[1] = v22;
        LANES128(v4[1]).n128_u32[0] = v21;
        LANES128(*(v4)).n128_u64[0] = v25;
        LANES128(*(v4)).n128_u64[1] = v24;
        return true;
      }
      if ((v20 & 1) == 0) {
        return true;
      }
      v60 = LANES128(a1[2]).n128_u64[1];
      v59 = LANES128(a1[3]).n128_u64[0];
      v61 = LANES128(*(v11)).n128_u64[0];
      v62 = LANES128(*(v4)).n128_u64[0];
      v63 = LANES128(*(v4)).n128_u64[1];
      LANES128(a1[3]).n128_u32[0] = LANES128(v4[1]).n128_u32[0];
      LANES128(*(v11)).n128_u64[0] = v62;
      LANES128(a1[2]).n128_u64[1] = v63;
      LANES128(*(v4)).n128_u64[0] = v61;
      LANES128(*(v4)).n128_u64[1] = v60;
      LANES128(v4[1]).n128_u32[0] = v59;
    LABEL_47:
      v179 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
      v180 = vsubq_f32(v179, a1[2]);
      v181 = vsubq_f32(v179, *a1);
      v182 = vmulq_f32(v180, v180);
      v183 = vmulq_f32(v181, v181);
      LANES128(v182).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v182, v182, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v182).n128_u64[0])))
              .n64_u64[0];
      LANES128(v183).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v183, v183, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v183).n128_u64[0])))
              .n64_u64[0];
      if ((LANES64_OF(
               vcgt_f32(
                   vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v183).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v183).n128_u64[0])),
                   vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v182).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v182).n128_u64[0]))))
               .n64_u32[0] &
           1) != 0) {
        v184 = LANES128(*(v11)).n128_u64[1];
        v186 = LANES128(*(a1)).n128_u64[1];
        v185 = LANES128(a1[1]).n128_u64[0];
        v187 = LANES128(*(a1)).n128_u64[0];
        LANES128(*(a1)).n128_u64[0] = LANES128(*(v11)).n128_u64[0];
        LANES128(*(a1)).n128_u64[1] = v184;
        v188 = LANES128(v11[1]).n128_u32[0];
        LANES128(*(v11)).n128_u64[0] = v187;
        LANES128(*(v11)).n128_u64[1] = v186;
        LANES128(v11[1]).n128_u32[0] = v185;
        LANES128(a1[1]).n128_u32[0] = v188;
      }
      return true;
    }
    if (v3 != 4) {
      if (v3 != 5) {
        goto LABEL_13;
      }
      gfxa_c63da0(a1, a1 + 2, a1 + 4, a1 + 6, a2 - 2, a3);
      return true;
    }
    v11 = a1 + 2;
    v43 = *a1;
    v44 = a2 - 2;
    v45 = a1 + 4;
    v46 = a1[4];
    v47 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
    v48 = vsubq_f32(v47, a1[2]);
    v49 = vmulq_f32(v48, v48);
    LANES128(v49).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v49, v49, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v49).n128_u64[0])))
            .n64_u64[0];
    v50 = vsubq_f32(v47, *a1);
    v51 = vsubq_f32(v47, v46);
    v52 = vmulq_f32(v50, v50);
    LANES128(v49).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v49).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v49).n128_u64[0])))
            .n64_u64[0];
    v53 = vmulq_f32(v51, v51);
    LANES128(v52).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v52, v52, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0])))
            .n64_u64[0];
    LANES128(v53).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v53, v53, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v53).n128_u64[0])))
            .n64_u64[0];
    v54 = LANES64_OF(
              vcgt_f32(
                  COERCE_AS(float32x2_t, LANES128(v49).n128_u64[0]),
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v53).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v53).n128_u64[0]))))
              .n64_u8[0];
    if ((LANES64_OF(
             vcgt_f32(
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0])),
                 COERCE_AS(float32x2_t, LANES128(v49).n128_u64[0])))
             .n64_u32[0] &
         1) == 0) {
      if ((v54 & 1) != 0) {
        v80 = LANES128(a1[4]).n128_u64[1];
        v82 = LANES128(a1[2]).n128_u64[1];
        v81 = LANES128(a1[3]).n128_u64[0];
        v83 = LANES128(*(v11)).n128_u64[0];
        LANES128(*(v11)).n128_u64[0] = LANES128(*(v45)).n128_u64[0];
        LANES128(a1[2]).n128_u64[1] = v80;
        v84 = LANES128(a1[5]).n128_u32[0];
        LANES128(*(v45)).n128_u64[0] = v83;
        LANES128(a1[4]).n128_u64[1] = v82;
        LANES128(a1[5]).n128_u32[0] = v81;
        v85 = *v11;
        LANES128(a1[3]).n128_u32[0] = v84;
        v86 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
        v87 = vsubq_f32(v86, v85);
        v88 = vsubq_f32(v86, v43);
        v89 = vmulq_f32(v87, v87);
        v90 = vmulq_f32(v88, v88);
        LANES128(v89).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v89, v89, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v89).n128_u64[0])))
                .n64_u64[0];
        LANES128(v90).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v90, v90, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v90).n128_u64[0])))
                .n64_u64[0];
        if ((LANES64_OF(
                 vcgt_f32(
                     vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v90).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v90).n128_u64[0])),
                     vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v89).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v89).n128_u64[0]))))
                 .n64_u8[0] &
             1) != 0) {
          v91 = LANES128(a1[2]).n128_u64[1];
          v93 = LANES128(*(a1)).n128_u64[1];
          v92 = LANES128(a1[1]).n128_u64[0];
          v94 = LANES128(*(a1)).n128_u64[0];
          LANES128(*(a1)).n128_u64[0] = LANES128(*(v11)).n128_u64[0];
          LANES128(*(a1)).n128_u64[1] = v91;
          v95 = LANES128(a1[3]).n128_u32[0];
          LANES128(*(v11)).n128_u64[0] = v94;
          LANES128(a1[2]).n128_u64[1] = v93;
          LANES128(a1[3]).n128_u32[0] = v92;
          LANES128(a1[1]).n128_u32[0] = v95;
        }
      }
      goto LABEL_44;
    }
    if ((v54 & 1) != 0) {
      v55 = LANES128(a1[4]).n128_u64[1];
      v57 = LANES128(*(a1)).n128_u64[1];
      v56 = LANES128(a1[1]).n128_u64[0];
      v58 = LANES128(*(a1)).n128_u64[0];
      LANES128(*(a1)).n128_u64[0] = LANES128(*(v45)).n128_u64[0];
      LANES128(*(a1)).n128_u64[1] = v55;
      LANES128(a1[1]).n128_u32[0] = LANES128(a1[5]).n128_u32[0];
    }
    else {
      v147 = LANES128(a1[2]).n128_u64[1];
      v149 = LANES128(*(a1)).n128_u64[1];
      v148 = LANES128(a1[1]).n128_u64[0];
      v150 = LANES128(*(a1)).n128_u64[0];
      LANES128(*(a1)).n128_u64[0] = LANES128(*(v11)).n128_u64[0];
      LANES128(*(a1)).n128_u64[1] = v147;
      v151 = LANES128(a1[3]).n128_u32[0];
      LANES128(*(v11)).n128_u64[0] = v150;
      LANES128(a1[2]).n128_u64[1] = v149;
      LANES128(a1[3]).n128_u32[0] = v148;
      v152 = a1[2];
      LANES128(a1[1]).n128_u32[0] = v151;
      v153 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
      v154 = vsubq_f32(v153, v46);
      v155 = vsubq_f32(v153, v152);
      v156 = vmulq_f32(v154, v154);
      v157 = vmulq_f32(v155, v155);
      LANES128(v156).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v156, v156, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v156).n128_u64[0])))
              .n64_u64[0];
      LANES128(v157).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v157, v157, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v157).n128_u64[0])))
              .n64_u64[0];
      if ((LANES64_OF(
               vcgt_f32(
                   vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v157).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v157).n128_u64[0])),
                   vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v156).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v156).n128_u64[0]))))
               .n64_u8[0] &
           1) == 0) {
        goto LABEL_44;
      }
      v158 = LANES128(a1[4]).n128_u64[1];
      v57 = LANES128(a1[2]).n128_u64[1];
      v56 = LANES128(a1[3]).n128_u64[0];
      v58 = LANES128(*(v11)).n128_u64[0];
      LANES128(*(v11)).n128_u64[0] = LANES128(*(v45)).n128_u64[0];
      LANES128(a1[2]).n128_u64[1] = v158;
      LANES128(a1[3]).n128_u32[0] = LANES128(a1[5]).n128_u32[0];
    }
    LANES128(*(v45)).n128_u64[0] = v58;
    LANES128(a1[4]).n128_u64[1] = v57;
    LANES128(a1[5]).n128_u32[0] = v56;
  LABEL_44:
    v159 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
    v160 = vsubq_f32(v159, *v44);
    v161 = vsubq_f32(v159, *v45);
    v162 = vmulq_f32(v160, v160);
    v163 = vmulq_f32(v161, v161);
    LANES128(v162).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v162, v162, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v162).n128_u64[0])))
            .n64_u64[0];
    LANES128(v163).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v163, v163, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v163).n128_u64[0])))
            .n64_u64[0];
    if ((LANES64_OF(
             vcgt_f32(
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v163).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v163).n128_u64[0])),
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v162).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v162).n128_u64[0]))))
             .n64_u32[0] &
         1) == 0) {
      return true;
    }
    v165 = LANES128(a1[4]).n128_u64[1];
    v164 = LANES128(a1[5]).n128_u64[0];
    v166 = LANES128(*(v45)).n128_u64[0];
    v167 = LANES128(*(v44)).n128_u64[0];
    v168 = LANES128(a2[-2]).n128_u64[1];
    LANES128(a1[5]).n128_u32[0] = LANES128(a2[-1]).n128_u32[0];
    LANES128(*(v45)).n128_u64[0] = v167;
    LANES128(a1[4]).n128_u64[1] = v168;
    LANES128(*(v44)).n128_u64[0] = v166;
    LANES128(a2[-2]).n128_u64[1] = v165;
    LANES128(a2[-1]).n128_u32[0] = v164;
    v169 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
    v170 = vsubq_f32(v169, *v45);
    v171 = vsubq_f32(v169, *v11);
    v172 = vmulq_f32(v170, v170);
    v173 = vmulq_f32(v171, v171);
    LANES128(v172).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v172, v172, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v172).n128_u64[0])))
            .n64_u64[0];
    LANES128(v173).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v173, v173, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v173).n128_u64[0])))
            .n64_u64[0];
    if ((LANES64_OF(
             vcgt_f32(
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v173).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v173).n128_u64[0])),
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v172).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v172).n128_u64[0]))))
             .n64_u32[0] &
         1) == 0) {
      return true;
    }
    v174 = LANES128(a1[4]).n128_u64[1];
    v176 = LANES128(a1[2]).n128_u64[1];
    v175 = LANES128(a1[3]).n128_u64[0];
    v177 = LANES128(*(v11)).n128_u64[0];
    LANES128(*(v11)).n128_u64[0] = LANES128(*(v45)).n128_u64[0];
    LANES128(a1[2]).n128_u64[1] = v174;
    v178 = LANES128(a1[5]).n128_u32[0];
    LANES128(*(v45)).n128_u64[0] = v177;
    LANES128(a1[4]).n128_u64[1] = v176;
    LANES128(a1[5]).n128_u32[0] = v175;
    LANES128(a1[3]).n128_u32[0] = v178;
    goto LABEL_47;
  }
  if ((unsigned __int64)v3 < 2) {
    return true;
  }
  if (v3 == 2) {
    v5 = a2[-2];
    v4 = a2 - 2;
    v6 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
    v7 = vsubq_f32(v6, v5);
    v8 = vsubq_f32(v6, *a1);
    v9 = vmulq_f32(v7, v7);
    v10 = vmulq_f32(v8, v8);
    LANES128(v9).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v9, v9, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
            .n64_u64[0];
    LANES128(v10).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v10, v10, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
            .n64_u64[0];
    if ((LANES64_OF(
             vcgt_f32(
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])),
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0]))))
             .n64_u32[0] &
         1) == 0) {
      return true;
    }
    goto LABEL_12;
  }
LABEL_13:
  v26 = a1 + 2;
  v27 = *a1;
  v28 = a1 + 4;
  v29 = a1[4];
  v30 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
  v31 = vsubq_f32(v30, a1[2]);
  v32 = vmulq_f32(v31, v31);
  LANES128(v32).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v32, v32, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0])))
          .n64_u64[0];
  v33 = vsubq_f32(v30, *a1);
  v34 = vsubq_f32(v30, v29);
  v35 = vmulq_f32(v33, v33);
  LANES128(v32).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0])))
          .n64_u64[0];
  v36 = vmulq_f32(v34, v34);
  LANES128(v35).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v35, v35, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0])))
          .n64_u64[0];
  LANES128(v36).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v36, v36, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0])))
          .n64_u64[0];
  v37 = LANES64_OF(
            vcgt_f32(
                COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0]),
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]))))
            .n64_u8[0];
  if ((LANES64_OF(
           vcgt_f32(
               vpadd_f32(COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0])),
               COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0])))
           .n64_u32[0] &
       1) != 0) {
    if ((v37 & 1) != 0) {
      v38 = LANES128(a1[4]).n128_u64[1];
      v40 = LANES128(*(a1)).n128_u64[1];
      v39 = LANES128(a1[1]).n128_u64[0];
      v41 = LANES128(*(a1)).n128_u64[0];
      LANES128(*(a1)).n128_u64[0] = LANES128(*(v28)).n128_u64[0];
      LANES128(*(a1)).n128_u64[1] = v38;
      v42 = LANES128(a1[5]).n128_u32[0];
      LANES128(*(v28)).n128_u64[0] = v41;
      LANES128(a1[4]).n128_u64[1] = v40;
      LANES128(a1[5]).n128_u32[0] = v39;
      LANES128(a1[1]).n128_u32[0] = v42;
    }
    else {
      v112 = LANES128(a1[2]).n128_u64[1];
      v114 = LANES128(*(a1)).n128_u64[1];
      v113 = LANES128(a1[1]).n128_u64[0];
      v115 = LANES128(*(a1)).n128_u64[0];
      LANES128(*(a1)).n128_u64[0] = LANES128(*(v26)).n128_u64[0];
      LANES128(*(a1)).n128_u64[1] = v112;
      v116 = LANES128(a1[3]).n128_u32[0];
      LANES128(*(v26)).n128_u64[0] = v115;
      LANES128(a1[2]).n128_u64[1] = v114;
      LANES128(a1[3]).n128_u32[0] = v113;
      v117 = a1[2];
      LANES128(a1[1]).n128_u32[0] = v116;
      v118 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
      v119 = vsubq_f32(v118, v29);
      v120 = vsubq_f32(v118, v117);
      v121 = vmulq_f32(v119, v119);
      v122 = vmulq_f32(v120, v120);
      LANES128(v121).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v121, v121, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v121).n128_u64[0])))
              .n64_u64[0];
      LANES128(v122).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v122, v122, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v122).n128_u64[0])))
              .n64_u64[0];
      if ((LANES64_OF(
               vcgt_f32(
                   vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v122).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v122).n128_u64[0])),
                   vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v121).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v121).n128_u64[0]))))
               .n64_u32[0] &
           1) != 0) {
        v123 = LANES128(a1[4]).n128_u64[1];
        v125 = LANES128(a1[2]).n128_u64[1];
        v124 = LANES128(a1[3]).n128_u64[0];
        v126 = LANES128(*(v26)).n128_u64[0];
        LANES128(*(v26)).n128_u64[0] = LANES128(*(v28)).n128_u64[0];
        LANES128(a1[2]).n128_u64[1] = v123;
        v127 = LANES128(a1[5]).n128_u32[0];
        LANES128(*(v28)).n128_u64[0] = v126;
        LANES128(a1[4]).n128_u64[1] = v125;
        LANES128(a1[5]).n128_u32[0] = v124;
        LANES128(a1[3]).n128_u32[0] = v127;
      }
    }
  }
  else if ((v37 & 1) != 0) {
    v64 = LANES128(a1[4]).n128_u64[1];
    v66 = LANES128(a1[2]).n128_u64[1];
    v65 = LANES128(a1[3]).n128_u64[0];
    v67 = LANES128(*(v26)).n128_u64[0];
    LANES128(*(v26)).n128_u64[0] = LANES128(*(v28)).n128_u64[0];
    LANES128(a1[2]).n128_u64[1] = v64;
    v68 = LANES128(a1[5]).n128_u32[0];
    LANES128(*(v28)).n128_u64[0] = v67;
    LANES128(a1[4]).n128_u64[1] = v66;
    LANES128(a1[5]).n128_u32[0] = v65;
    v69 = *v26;
    LANES128(a1[3]).n128_u32[0] = v68;
    v70 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
    v71 = vsubq_f32(v70, v69);
    v72 = vsubq_f32(v70, v27);
    v73 = vmulq_f32(v71, v71);
    v74 = vmulq_f32(v72, v72);
    LANES128(v73).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v73, v73, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v73).n128_u64[0])))
            .n64_u64[0];
    LANES128(v74).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v74, v74, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v74).n128_u64[0])))
            .n64_u64[0];
    if ((LANES64_OF(
             vcgt_f32(
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v74).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v74).n128_u64[0])),
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v73).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v73).n128_u64[0]))))
             .n64_u32[0] &
         1) != 0) {
      v75 = LANES128(a1[2]).n128_u64[1];
      v77 = LANES128(*(a1)).n128_u64[1];
      v76 = LANES128(a1[1]).n128_u64[0];
      v78 = LANES128(*(a1)).n128_u64[0];
      LANES128(*(a1)).n128_u64[0] = LANES128(*(v26)).n128_u64[0];
      LANES128(*(a1)).n128_u64[1] = v75;
      v79 = LANES128(a1[3]).n128_u32[0];
      LANES128(*(v26)).n128_u64[0] = v78;
      LANES128(a1[2]).n128_u64[1] = v77;
      LANES128(a1[3]).n128_u32[0] = v76;
      LANES128(a1[1]).n128_u32[0] = v79;
    }
  }
  v128 = a1 + 6;
  if (&a1[6] == a2) {
    return true;
  }
  v129 = 0;
  v130 = 0;
  while (1) {
    v132 = *v128;
    v133 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
    v134 = vsubq_f32(v133, *v128);
    v135 = vsubq_f32(v133, *v28);
    v136 = vmulq_f32(v134, v134);
    v137 = vmulq_f32(v135, v135);
    LANES128(v136).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v136, v136, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v136).n128_u64[0])))
            .n64_u64[0];
    LANES128(v137).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v137, v137, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v137).n128_u64[0])))
            .n64_u64[0];
    if ((LANES64_OF(
             vcgt_f32(
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v137).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v137).n128_u64[0])),
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v136).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v136).n128_u64[0]))))
             .n64_u8[0] &
         1) != 0) {
      v138 = LANES128(v128[1]).n128_u32[0];
      v139 = v129;
      do {
        v140 = (float32x4_t*)((char*)a1 + v139);
        v141 = *(unsigned __int64*)((char*)&LANES128(a1[4]).n128_u64[1] + v139);
        LANES128(v140[6]).n128_u64[0] =
            *(unsigned __int64*)((char*)LANES128(a1[4]).n128_u64 + v139);
        LANES128(v140[6]).n128_u64[1] = v141;
        LANES128(v140[7]).n128_u32[0] =
            *(unsigned __int32*)((char*)LANES128(a1[5]).n128_u32 + v139);
        if (v139 == -64) {
          v131 = a1;
          goto LABEL_34;
        }
        v139 -= 32;
        v142 = *(float32x4_t*)(**(_QWORD**)(a3 + 8) + 80LL);
        v143 = vsubq_f32(v142, v132);
        v144 = vsubq_f32(v142, v140[2]);
        v145 = vmulq_f32(v143, v143);
        v146 = vmulq_f32(v144, v144);
        LANES128(v145).n128_u64[0] =
            LANES64_OF(
                vadd_f32(COERCE_AS(
                             float32x2_t,
                             LANES128_OF(vextq_s8(v145, v145, 8u)).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v145).n128_u64[0])))
                .n64_u64[0];
        LANES128(v146).n128_u64[0] =
            LANES64_OF(
                vadd_f32(COERCE_AS(
                             float32x2_t,
                             LANES128_OF(vextq_s8(v146, v146, 8u)).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v146).n128_u64[0])))
                .n64_u64[0];
      } while (
          (LANES64_OF(
               vcgt_f32(
                   vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v146).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v146).n128_u64[0])),
                   vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v145).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v145).n128_u64[0]))))
               .n64_u8[0] &
           1) != 0);
      v131 = (float32x4_t*)((char*)a1 + v139 + 96);
    LABEL_34:
      ++v130;
      *v131 = v132;
      LANES128(v131[1]).n128_u32[0] = v138;
      if (v130 == 8) {
        return &v128[2] == a2;
      }
    }
    v28 = v128;
    v128 += 2;
    v129 += 32;
    if (v128 == a2) {
      return true;
    }
  }
}

void gfxa_c649f0(unsigned int* a1, unsigned int a2, _QWORD* a3)
{
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  char v12;
  unsigned int v13;
  __int64 v14;
  int v15;
  unsigned __int64 v16;
  char* v17;
  unsigned __int64 v18;
  char* v19;
  unsigned __int64 v20;
  char* v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  char* v33;
  unsigned __int64 v34;
  char* v35;
  int v36;
  char* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  char* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  _BYTE* v54;
  _BYTE* v55;
  _BYTE* v56;
  _BYTE* v57;
  _BYTE* v58;
  char* v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  bool v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  char* v65;
  unsigned __int64 v66;
  char* v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  char* v72;
  unsigned __int64 v73;
  unsigned __int64 v74;
  bool v75;
  unsigned __int64 v76;
  unsigned __int64 v77;
  char* v78;
  unsigned __int64 v79;
  char* v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  unsigned __int64 v84;
  char* v85;
  unsigned __int64 v86;
  unsigned __int64 v87;
  bool v88;
  unsigned __int64 v89;
  unsigned __int64 v90;
  char* v91;
  unsigned __int64 v92;
  char* v93;
  __int64 v94;
  __int64* v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  char v101;
  __int64 v102;
  unsigned __int64 v103;
  bool v104;
  unsigned __int64 v105;
  unsigned __int64 v106;
  char* v107;
  unsigned __int64 v108;
  char* v109;
  __int64 v110;
  __int64* v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  char v117;
  __int64 v118;
  unsigned __int64 v119;
  bool v120;
  unsigned __int64 v121;
  unsigned __int64 v122;
  char* v123;
  unsigned __int64 v124;
  char* v125;
  __int64 v126;
  __int64* v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  char v133;
  __int64 v134;
  struct {
    __int64 v135;
    unsigned __int64 v136;
    char* v137;
  } v135_;

  *a1 = a2;
  *((_QWORD*)a1 + 1) = *a3;
  v4 = a3[1];
  *((_QWORD*)a1 + 2) = v4;
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
  }
  *((_BYTE*)a1 + 24) = 0;
  *(_QWORD*)(a1 + 7) = 0;
  memset((__int64)(a1 + 10), 0, 0x141u);
  v5 = *a1;
  *((_QWORD*)a1 + 47) = 0;
  *((_QWORD*)a1 + 48) = 0;
  *((_QWORD*)a1 + 49) = 0;
  *((_QWORD*)a1 + 50) = 0;
  *((_QWORD*)a1 + 51) = 0;
  *((_QWORD*)a1 + 52) = 0;
  *((_QWORD*)a1 + 53) = 0;
  *((_QWORD*)a1 + 54) = 0;
  *((_QWORD*)a1 + 55) = 0;
  *((_QWORD*)a1 + 56) = 0;
  *((_QWORD*)a1 + 57) = 0;
  *((_QWORD*)a1 + 58) = 0;
  *((_QWORD*)a1 + 59) = 0;
  *((_QWORD*)a1 + 60) = 0;
  *((_QWORD*)a1 + 61) = 0;
  *((_QWORD*)a1 + 62) = 0;
  *((_QWORD*)a1 + 65) = 0;
  a1[132] = 0;
  *(_QWORD*)(a1 + 91) = 0x3F8000003F800000LL;
  *((_QWORD*)a1 + 67) = 0;
  *((_QWORD*)a1 + 68) = 0;
  a1[144] = 0;
  *((_QWORD*)a1 + 73) = 0;
  *((_QWORD*)a1 + 74) = 0;
  *((_QWORD*)a1 + 75) = 0;
  *((_QWORD*)a1 + 76) = 0;
  *((_QWORD*)a1 + 77) = 0;
  *((_QWORD*)a1 + 78) = 0;
  *((_QWORD*)a1 + 79) = 0;
  *((_QWORD*)a1 + 63) = 0;
  *((_QWORD*)a1 + 64) = -1;
  *((_QWORD*)a1 + 69) = -1;
  *((_QWORD*)a1 + 70) = -1;
  *((_QWORD*)a1 + 71) = -1;
  *((_QWORD*)a1 + 82) = -1;
  *((_QWORD*)a1 + 94) = -1;
  *((_QWORD*)a1 + 106) = -1;
  *((_QWORD*)a1 + 118) = -1;
  *((_QWORD*)a1 + 130) = -1;
  *((_QWORD*)a1 + 142) = -1;
  *((_QWORD*)a1 + 154) = -1;
  *((_QWORD*)a1 + 166) = -1;
  *((_QWORD*)a1 + 178) = -1;
  *((_QWORD*)a1 + 190) = -1;
  *((_QWORD*)a1 + 202) = -1;
  *((_QWORD*)a1 + 214) = -1;
  *((_QWORD*)a1 + 226) = -1;
  *((_QWORD*)a1 + 238) = -1;
  *((_QWORD*)a1 + 250) = -1;
  *((_QWORD*)a1 + 262) = -1;
  *((_QWORD*)a1 + 264) = -1;
  *((_QWORD*)a1 + 80) = 0;
  *((_QWORD*)a1 + 81) = 0;
  a1[168] = 0;
  *((_QWORD*)a1 + 85) = 0;
  *((_QWORD*)a1 + 86) = 0;
  *((_QWORD*)a1 + 87) = 0;
  *((_QWORD*)a1 + 88) = 0;
  *((_QWORD*)a1 + 89) = 0;
  *((_QWORD*)a1 + 90) = 0;
  *((_QWORD*)a1 + 91) = 0;
  *((_QWORD*)a1 + 92) = 0;
  *((_QWORD*)a1 + 93) = 0;
  a1[192] = 0;
  *((_QWORD*)a1 + 97) = 0;
  *((_QWORD*)a1 + 98) = 0;
  *((_QWORD*)a1 + 99) = 0;
  *((_QWORD*)a1 + 100) = 0;
  *((_QWORD*)a1 + 101) = 0;
  *((_QWORD*)a1 + 102) = 0;
  *((_QWORD*)a1 + 103) = 0;
  *((_QWORD*)a1 + 104) = 0;
  *((_QWORD*)a1 + 105) = 0;
  a1[216] = 0;
  *((_QWORD*)a1 + 109) = 0;
  *((_QWORD*)a1 + 110) = 0;
  *((_QWORD*)a1 + 111) = 0;
  *((_QWORD*)a1 + 112) = 0;
  *((_QWORD*)a1 + 113) = 0;
  *((_QWORD*)a1 + 114) = 0;
  *((_QWORD*)a1 + 115) = 0;
  *((_QWORD*)a1 + 116) = 0;
  *((_QWORD*)a1 + 117) = 0;
  a1[240] = 0;
  *((_QWORD*)a1 + 121) = 0;
  *((_QWORD*)a1 + 122) = 0;
  *((_QWORD*)a1 + 123) = 0;
  *((_QWORD*)a1 + 124) = 0;
  *((_QWORD*)a1 + 125) = 0;
  *((_QWORD*)a1 + 126) = 0;
  *((_QWORD*)a1 + 127) = 0;
  *((_QWORD*)a1 + 128) = 0;
  *((_QWORD*)a1 + 129) = 0;
  a1[264] = 0;
  *((_QWORD*)a1 + 141) = 0;
  *((_QWORD*)a1 + 140) = 0;
  *((_QWORD*)a1 + 139) = 0;
  *((_QWORD*)a1 + 138) = 0;
  *((_QWORD*)a1 + 137) = 0;
  *((_QWORD*)a1 + 136) = 0;
  *((_QWORD*)a1 + 135) = 0;
  *((_QWORD*)a1 + 134) = 0;
  *((_QWORD*)a1 + 133) = 0;
  a1[288] = 0;
  *((_QWORD*)a1 + 153) = 0;
  *((_QWORD*)a1 + 152) = 0;
  *((_QWORD*)a1 + 151) = 0;
  *((_QWORD*)a1 + 150) = 0;
  *((_QWORD*)a1 + 149) = 0;
  *((_QWORD*)a1 + 148) = 0;
  *((_QWORD*)a1 + 147) = 0;
  *((_QWORD*)a1 + 146) = 0;
  *((_QWORD*)a1 + 145) = 0;
  a1[312] = 0;
  *((_QWORD*)a1 + 165) = 0;
  *((_QWORD*)a1 + 164) = 0;
  *((_QWORD*)a1 + 163) = 0;
  *((_QWORD*)a1 + 162) = 0;
  *((_QWORD*)a1 + 161) = 0;
  *((_QWORD*)a1 + 160) = 0;
  *((_QWORD*)a1 + 159) = 0;
  *((_QWORD*)a1 + 158) = 0;
  *((_QWORD*)a1 + 157) = 0;
  a1[336] = 0;
  *((_QWORD*)a1 + 177) = 0;
  *((_QWORD*)a1 + 176) = 0;
  *((_QWORD*)a1 + 175) = 0;
  *((_QWORD*)a1 + 174) = 0;
  *((_QWORD*)a1 + 173) = 0;
  *((_QWORD*)a1 + 172) = 0;
  *((_QWORD*)a1 + 171) = 0;
  *((_QWORD*)a1 + 170) = 0;
  *((_QWORD*)a1 + 169) = 0;
  a1[360] = 0;
  *((_QWORD*)a1 + 189) = 0;
  *((_QWORD*)a1 + 188) = 0;
  *((_QWORD*)a1 + 187) = 0;
  *((_QWORD*)a1 + 186) = 0;
  *((_QWORD*)a1 + 185) = 0;
  *((_QWORD*)a1 + 184) = 0;
  *((_QWORD*)a1 + 183) = 0;
  *((_QWORD*)a1 + 182) = 0;
  *((_QWORD*)a1 + 181) = 0;
  a1[384] = 0;
  *((_QWORD*)a1 + 201) = 0;
  *((_QWORD*)a1 + 200) = 0;
  *((_QWORD*)a1 + 199) = 0;
  *((_QWORD*)a1 + 198) = 0;
  *((_QWORD*)a1 + 197) = 0;
  *((_QWORD*)a1 + 196) = 0;
  *((_QWORD*)a1 + 195) = 0;
  *((_QWORD*)a1 + 194) = 0;
  *((_QWORD*)a1 + 193) = 0;
  a1[408] = 0;
  *((_QWORD*)a1 + 213) = 0;
  *((_QWORD*)a1 + 212) = 0;
  *((_QWORD*)a1 + 211) = 0;
  *((_QWORD*)a1 + 210) = 0;
  *((_QWORD*)a1 + 209) = 0;
  *((_QWORD*)a1 + 208) = 0;
  *((_QWORD*)a1 + 207) = 0;
  *((_QWORD*)a1 + 206) = 0;
  *((_QWORD*)a1 + 205) = 0;
  a1[432] = 0;
  *((_QWORD*)a1 + 225) = 0;
  *((_QWORD*)a1 + 224) = 0;
  *((_QWORD*)a1 + 223) = 0;
  *((_QWORD*)a1 + 222) = 0;
  *((_QWORD*)a1 + 221) = 0;
  *((_QWORD*)a1 + 220) = 0;
  *((_QWORD*)a1 + 219) = 0;
  *((_QWORD*)a1 + 218) = 0;
  *((_QWORD*)a1 + 217) = 0;
  a1[456] = 0;
  *((_QWORD*)a1 + 237) = 0;
  *((_QWORD*)a1 + 236) = 0;
  *((_QWORD*)a1 + 235) = 0;
  *((_QWORD*)a1 + 234) = 0;
  *((_QWORD*)a1 + 233) = 0;
  *((_QWORD*)a1 + 232) = 0;
  *((_QWORD*)a1 + 231) = 0;
  *((_QWORD*)a1 + 230) = 0;
  *((_QWORD*)a1 + 229) = 0;
  a1[480] = 0;
  *((_QWORD*)a1 + 249) = 0;
  *((_QWORD*)a1 + 248) = 0;
  *((_QWORD*)a1 + 247) = 0;
  *((_QWORD*)a1 + 246) = 0;
  *((_QWORD*)a1 + 245) = 0;
  *((_QWORD*)a1 + 244) = 0;
  *((_QWORD*)a1 + 243) = 0;
  *((_QWORD*)a1 + 242) = 0;
  *((_QWORD*)a1 + 241) = 0;
  a1[504] = 0;
  *((_QWORD*)a1 + 261) = 0;
  *((_QWORD*)a1 + 260) = 0;
  *((_QWORD*)a1 + 259) = 0;
  *((_QWORD*)a1 + 258) = 0;
  *((_QWORD*)a1 + 257) = 0;
  *((_QWORD*)a1 + 256) = 0;
  *((_QWORD*)a1 + 255) = 0;
  *((_QWORD*)a1 + 254) = 0;
  *((_QWORD*)a1 + 253) = 0;
  std___1_to_string_1a0a790((void*)(&v135_.v135), v5);
  v6 = (__int64*)GameRoutine_1a09ce0((__int64)&v135_.v135, ": ", 2u);
  v7 = *v6;
  v8 = v6[1];
  v9 = (char*)v6[2];
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  if ((a1[10] & 1) != 0) {
    v10 = *((_QWORD*)a1 + 7);
    if (v10 != 0) {
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v10);
    }
  }
  v12 = v135_.v135;
  v13 = (unsigned __int8)v7;
  *((_QWORD*)a1 + 5) = v7;
  *((_QWORD*)a1 + 6) = v8;
  *((_QWORD*)a1 + 7) = v9;
  if ((v12 & 1) != 0 && v135_.v137 != nullptr) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v14,
                                  (__int64)v135_.v137);
    v13 = *((unsigned __int8*)a1 + 40);
    v8 = *((_QWORD*)a1 + 6);
    v9 = *((char**)a1 + 7);
  }
  v15 = v13 & 1;
  v16 = v13 >> 1;
  v17 = (char*)a1 + 41;
  if ((v13 & 1) != 0) {
    v18 = v8;
  }
  else {
    v18 = v13 >> 1;
  }
  if ((v13 & 1) != 0) {
    v19 = v9;
  }
  else {
    v19 = (char*)a1 + 41;
  }
  v20 = v18 + 6;
  if (v18 + 6 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_206:
    String_60a1d0();
  }
  if (v20 >= 0x17) {
    v22 = v19;
    if ((v20 | 7) == 0x17) {
      v23 = 26;
    }
    else {
      v23 = (v20 | 7) + 1;
    }
    v24 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v23, 16, 0);
    v25 = v23 | 1;
    v19 = v22;
    v21 = (char*)v24;
    v17 = (char*)a1 + 41;
    v135_.v136 = v18 + 6;
    v135_.v137 = (char*)v24;
    v135_.v135 = v25;
    goto LABEL_27;
  }
  v135_.v136 = 0;
  v135_.v137 = nullptr;
  v135_.v135 = (unsigned __int8)(2 * v20);
  v21 = (char*)&v135_.v135 + 1;
  if (v18 != 0) {
  LABEL_27:
    memmove((__int64)v21, (__int64)v19, v18);
  }
  strcpy(&v21[v18], "Preset");
  if ((a1[16] & 1) != 0) {
    v26 = *((_QWORD*)a1 + 10);
    if (v26 != 0) {
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v26);
    }
    v28 = *((unsigned __int8*)a1 + 40);
    v8 = *((_QWORD*)a1 + 6);
    v9 = *((char**)a1 + 7);
    v15 = v28 & 1;
    v16 = v28 >> 1;
  }
  v29 = v135_.v136;
  if (v15 != 0) {
    v30 = (__int64)v9;
  }
  else {
    v30 = (__int64)v17;
  }
  *((_QWORD*)a1 + 8) = v135_.v135;
  *((_QWORD*)a1 + 9) = v29;
  *((_QWORD*)a1 + 10) = v135_.v137;
  if (v15 != 0) {
    v31 = v8;
  }
  else {
    v31 = v16;
  }
  v32 = v31 + 5;
  if (v31 + 5 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_206;
  }
  if (v32 >= 0x17) {
    v34 = v8;
    v35 = v9;
    v36 = v15;
    v37 = v17;
    v38 = v30;
    if ((v32 | 7) == 0x17) {
      v39 = 26;
    }
    else {
      v39 = (v32 | 7) + 1;
    }
    v40 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v39, 16, 0);
    v41 = v39 | 1;
    v30 = v38;
    v33 = (char*)v40;
    v17 = v37;
    v15 = v36;
    v9 = v35;
    v8 = v34;
    v135_.v136 = v31 + 5;
    v135_.v137 = (char*)v40;
    v135_.v135 = v41;
    goto LABEL_48;
  }
  v135_.v136 = 0;
  v135_.v137 = nullptr;
  v135_.v135 = (unsigned __int8)(2 * v32);
  v33 = (char*)&v135_.v135 + 1;
  if (v31 != 0) {
  LABEL_48:
    memmove((__int64)v33, v30, v31);
  }
  strcpy(&v33[v31], "Scene");
  if ((a1[22] & 1) != 0) {
    v42 = *((_QWORD*)a1 + 13);
    if (v42 != 0) {
      v43 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v43 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v43, v42);
    }
    v44 = *((unsigned __int8*)a1 + 40);
    v8 = *((_QWORD*)a1 + 6);
    v9 = *((char**)a1 + 7);
    v15 = v44 & 1;
    v16 = v44 >> 1;
  }
  v45 = v135_.v136;
  if (v15 != 0) {
    v46 = (__int64)v9;
  }
  else {
    v46 = (__int64)v17;
  }
  *((_QWORD*)a1 + 11) = v135_.v135;
  *((_QWORD*)a1 + 12) = v45;
  *((_QWORD*)a1 + 13) = v135_.v137;
  if (v15 != 0) {
    v47 = v8;
  }
  else {
    v47 = v16;
  }
  v48 = v47 + 9;
  if (v47 + 9 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_206;
  }
  if (v48 >= 0x17) {
    if ((v48 | 7) == 0x17) {
      v50 = 26;
    }
    else {
      v50 = (v48 | 7) + 1;
    }
    v49 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v50,
                                                16, 0);
    v135_.v136 = v47 + 9;
    v135_.v137 = v49;
    v135_.v135 = v50 | 1;
  }
  else {
    v135_.v136 = 0;
    v135_.v137 = nullptr;
    v135_.v135 = (unsigned __int8)(2 * v48);
    v49 = (char*)&v135_.v135 + 1;
    if (v47 == 0) {
      goto LABEL_70;
    }
  }
  memmove((__int64)v49, v46, v47);
LABEL_70:
  strcpy(&v49[v47], "Variation");
  if ((a1[28] & 1) != 0) {
    v51 = *((_QWORD*)a1 + 16);
    if (v51 != 0) {
      v52 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v52 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v52, v51);
    }
  }
  v53 = v135_.v136;
  *((_QWORD*)a1 + 14) = v135_.v135;
  *((_QWORD*)a1 + 15) = v53;
  *((_QWORD*)a1 + 16) = v135_.v137;
  if ((a1[34] & 1) != 0) {
    v54 = *((_BYTE**)a1 + 19);
    *((_QWORD*)a1 + 18) = 0;
  }
  else {
    v54 = (char*)a1 + 137;
    *((_BYTE*)a1 + 136) = 0;
  }
  *v54 = 0;
  if ((a1[40] & 1) != 0) {
    v55 = *((_BYTE**)a1 + 22);
    *((_QWORD*)a1 + 21) = 0;
  }
  else {
    v55 = (char*)a1 + 161;
    *((_BYTE*)a1 + 160) = 0;
  }
  *v55 = 0;
  if ((a1[46] & 1) != 0) {
    v56 = *((_BYTE**)a1 + 25);
    *((_QWORD*)a1 + 24) = 0;
  }
  else {
    v56 = (char*)a1 + 185;
    *((_BYTE*)a1 + 184) = 0;
  }
  *v56 = 0;
  if ((a1[52] & 1) != 0) {
    v57 = *((_BYTE**)a1 + 28);
    *((_QWORD*)a1 + 27) = 0;
  }
  else {
    v57 = (char*)a1 + 209;
    *((_BYTE*)a1 + 208) = 0;
  }
  *v57 = 0;
  if ((a1[58] & 1) != 0) {
    v58 = *((_BYTE**)a1 + 31);
    *((_QWORD*)a1 + 30) = 0;
  }
  else {
    v58 = (char*)a1 + 233;
    *((_BYTE*)a1 + 232) = 0;
  }
  *v58 = 0;
  *((_BYTE*)a1 + 360) = 0;
  *((_QWORD*)a1 + 44) = 0;
  *((_QWORD*)a1 + 65) = 0;
  a1[132] = 0;
  *(_QWORD*)(a1 + 91) = 0x3F8000003F800000LL;
  v60 = *((_QWORD*)a1 + 12);
  v59 = *((char**)a1 + 13);
  *((_QWORD*)a1 + 64) = -1;
  v61 = *((unsigned __int8*)a1 + 88);
  v62 = (v61 & 1) == 0;
  v63 = v61 >> 1;
  if (v62) {
    v64 = v63;
  }
  else {
    v64 = v60;
  }
  if (v62) {
    v65 = (char*)a1 + 89;
  }
  else {
    v65 = v59;
  }
  v66 = v64 + 10;
  if (v64 + 10 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_206;
  }
  if (v66 >= 0x17) {
    if ((v66 | 7) == 0x17) {
      v68 = 26;
    }
    else {
      v68 = (v66 | 7) + 1;
    }
    v67 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v68,
                                                16, 0);
    v135_.v136 = v64 + 10;
    v135_.v137 = v67;
    v135_.v135 = v68 | 1;
  }
  else {
    v135_.v136 = 0;
    v135_.v137 = nullptr;
    v135_.v135 = (unsigned __int8)(2 * v66);
    v67 = (char*)&v135_.v135 + 1;
    if (v64 == 0) {
      goto LABEL_105;
    }
  }
  memmove((__int64)v67, (__int64)v65, v64);
LABEL_105:
  strcpy(&v67[v64], "_Situation");
  if ((a1[94] & 1) != 0) {
    v69 = *((_QWORD*)a1 + 49);
    if (v69 != 0) {
      v70 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v70 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v70, v69);
    }
  }
  v71 = v135_.v136;
  *((_QWORD*)a1 + 47) = v135_.v135;
  *((_QWORD*)a1 + 48) = v71;
  v73 = *((_QWORD*)a1 + 15);
  v72 = *((char**)a1 + 16);
  *((_QWORD*)a1 + 49) = v135_.v137;
  v74 = *((unsigned __int8*)a1 + 112);
  v75 = (v74 & 1) == 0;
  v76 = v74 >> 1;
  if (v75) {
    v77 = v76;
  }
  else {
    v77 = v73;
  }
  if (v75) {
    v78 = (char*)a1 + 113;
  }
  else {
    v78 = v72;
  }
  v79 = v77 + 10;
  if (v77 + 10 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_206;
  }
  if (v79 >= 0x17) {
    if ((v79 | 7) == 0x17) {
      v81 = 26;
    }
    else {
      v81 = (v79 | 7) + 1;
    }
    v80 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v81,
                                                16, 0);
    v135_.v136 = v77 + 10;
    v135_.v137 = v80;
    v135_.v135 = v81 | 1;
  }
  else {
    v135_.v136 = 0;
    v135_.v137 = nullptr;
    v135_.v135 = (unsigned __int8)(2 * v79);
    v80 = (char*)&v135_.v135 + 1;
    if (v77 == 0) {
      goto LABEL_125;
    }
  }
  memmove((__int64)v80, (__int64)v78, v77);
LABEL_125:
  strcpy(&v80[v77], "_Situation");
  if ((a1[100] & 1) != 0) {
    v82 = *((_QWORD*)a1 + 52);
    if (v82 != 0) {
      v83 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v83 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v83, v82);
    }
  }
  v84 = v135_.v136;
  *((_QWORD*)a1 + 50) = v135_.v135;
  *((_QWORD*)a1 + 51) = v84;
  v86 = *((_QWORD*)a1 + 12);
  v85 = *((char**)a1 + 13);
  *((_QWORD*)a1 + 52) = v135_.v137;
  v87 = *((unsigned __int8*)a1 + 88);
  v88 = (v87 & 1) == 0;
  v89 = v87 >> 1;
  if (v88) {
    v90 = v89;
  }
  else {
    v90 = v86;
  }
  if (v88) {
    v91 = (char*)a1 + 89;
  }
  else {
    v91 = v85;
  }
  v92 = v90 + 10;
  if (v90 + 10 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_206;
  }
  if (v92 >= 0x17) {
    if ((v92 | 7) == 0x17) {
      v94 = 26;
    }
    else {
      v94 = (v92 | 7) + 1;
    }
    v93 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v94,
                                                16, 0);
    v135_.v136 = v90 + 10;
    v135_.v137 = v93;
    v135_.v135 = v94 | 1;
  }
  else {
    v135_.v136 = 0;
    v135_.v137 = nullptr;
    v135_.v135 = (unsigned __int8)(2 * v92);
    v93 = (char*)&v135_.v135 + 1;
    if (v90 == 0) {
      goto LABEL_145;
    }
  }
  memmove((__int64)v93, (__int64)v91, v90);
LABEL_145:
  strcpy(&v93[v90], "_Situation");
  v95 = (__int64*)GameRoutine_1a09ce0((__int64)&v135_.v135, "_Keyframe", 9u);
  v96 = *v95;
  v97 = v95[1];
  v98 = v95[2];
  *v95 = 0;
  v95[1] = 0;
  v95[2] = 0;
  if ((a1[106] & 1) != 0) {
    v99 = *((_QWORD*)a1 + 55);
    if (v99 != 0) {
      v100 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v100 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v100, v99);
    }
  }
  v101 = v135_.v135;
  *((_QWORD*)a1 + 53) = v96;
  *((_QWORD*)a1 + 54) = v97;
  *((_QWORD*)a1 + 55) = v98;
  if ((v101 & 1) != 0 && v135_.v137 != nullptr) {
    v102 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v102 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v102,
                                  (__int64)v135_.v137);
  }
  v103 = *((unsigned __int8*)a1 + 112);
  v104 = (v103 & 1) == 0;
  v105 = v103 >> 1;
  if (v104) {
    v106 = v105;
  }
  else {
    v106 = *((_QWORD*)a1 + 15);
  }
  if (v104) {
    v107 = (char*)a1 + 113;
  }
  else {
    v107 = *((char**)a1 + 16);
  }
  v108 = v106 + 10;
  if (v106 + 10 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_206;
  }
  if (v108 >= 0x17) {
    if ((v108 | 7) == 0x17) {
      v110 = 26;
    }
    else {
      v110 = (v108 | 7) + 1;
    }
    v109 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v110,
                                                 16, 0);
    v135_.v136 = v106 + 10;
    v135_.v137 = v109;
    v135_.v135 = v110 | 1;
  }
  else {
    v135_.v136 = 0;
    v135_.v137 = nullptr;
    v135_.v135 = (unsigned __int8)(2 * v108);
    v109 = (char*)&v135_.v135 + 1;
    if (v106 == 0) {
      goto LABEL_170;
    }
  }
  memmove((__int64)v109, (__int64)v107, v106);
LABEL_170:
  strcpy(&v109[v106], "_Situation");
  v111 = (__int64*)GameRoutine_1a09ce0((__int64)&v135_.v135, "_Keyframe", 9u);
  v112 = *v111;
  v113 = v111[1];
  v114 = v111[2];
  *v111 = 0;
  v111[1] = 0;
  v111[2] = 0;
  if ((a1[112] & 1) != 0) {
    v115 = *((_QWORD*)a1 + 58);
    if (v115 != 0) {
      v116 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v116 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v116, v115);
    }
  }
  v117 = v135_.v135;
  *((_QWORD*)a1 + 56) = v112;
  *((_QWORD*)a1 + 57) = v113;
  *((_QWORD*)a1 + 58) = v114;
  if ((v117 & 1) != 0 && v135_.v137 != nullptr) {
    v118 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v118 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v118,
                                  (__int64)v135_.v137);
  }
  v119 = *((unsigned __int8*)a1 + 88);
  v120 = (v119 & 1) == 0;
  v121 = v119 >> 1;
  if (v120) {
    v122 = v121;
  }
  else {
    v122 = *((_QWORD*)a1 + 12);
  }
  if (v120) {
    v123 = (char*)a1 + 89;
  }
  else {
    v123 = *((char**)a1 + 13);
  }
  v124 = v122 + 2;
  if (v122 + 2 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_206;
  }
  if (v124 >= 0x17) {
    if ((v124 | 7) == 0x17) {
      v126 = 26;
    }
    else {
      v126 = (v124 | 7) + 1;
    }
    v125 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v126,
                                                 16, 0);
    v135_.v136 = v122 + 2;
    v135_.v137 = v125;
    v135_.v135 = v126 | 1;
  }
  else {
    v135_.v136 = 0;
    v135_.v137 = nullptr;
    v135_.v135 = (unsigned __int8)(2 * v124);
    v125 = (char*)&v135_.v135 + 1;
    if (v122 == 0) {
      goto LABEL_195;
    }
  }
  memmove((__int64)v125, (__int64)v123, v122);
LABEL_195:
  strcpy(&v125[v122], "Ex");
  v127 =
      (__int64*)GameRoutine_1a09ce0((__int64)&v135_.v135, "_Situation", 0xAu);
  v128 = *v127;
  v129 = v127[1];
  v130 = v127[2];
  *v127 = 0;
  v127[1] = 0;
  v127[2] = 0;
  if ((a1[118] & 1) != 0) {
    v131 = *((_QWORD*)a1 + 61);
    if (v131 != 0) {
      v132 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v132 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v132, v131);
    }
  }
  v133 = v135_.v135;
  *((_QWORD*)a1 + 59) = v128;
  *((_QWORD*)a1 + 60) = v129;
  *((_QWORD*)a1 + 61) = v130;
  if ((v133 & 1) != 0 && v135_.v137 != nullptr) {
    v134 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v134 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v134,
                                  (__int64)v135_.v137);
  }
  *((_QWORD*)a1 + 62) = -1;
  *((_QWORD*)a1 + 63) = -1;
}

__int64 gfxa_c65bf0(__int64 result, float a2)
{

#pragma clang fp contract(off)
  int v2;
  __int64 v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  __int64 v9;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  int v14;
  __int64 v15;
  int v16;
  __int64 v17;
  int v18;
  float v19;
  bool v21;
  int v22;
  char v23;
  __int64 v24;
  int v25;
  __int64 v26;

  v2 = *(_DWORD*)(result + 552);
  v3 = *(_QWORD*)(game_g_frame_clock + 13224);
  if (v2 != -1) {
    *(_BYTE*)(v3 + 1560LL * v2 + 1744) = 1;
  }
  v4 = *(_DWORD*)(result + 556);
  if (v4 != -1) {
    *(_BYTE*)(v3 + 1560LL * v4 + 1744) = 1;
  }
  v5 = *(_DWORD*)(result + 564);
  if (v5 != -1) {
    *(_BYTE*)(v3 + 1560LL * v5 + 1744) = *(_DWORD*)(result + 32) == 0;
  }
  v6 = *(_DWORD*)(result + 568);
  if (v6 != -1) {
    *(_BYTE*)(v3 + 1560LL * v6 + 1744) = *(_DWORD*)(result + 32) == 1;
  }
  v7 = *(_DWORD*)(result + 572);
  if (v7 != -1) {
    *(_BYTE*)(v3 + 1560LL * v7 + 1744) = *(_DWORD*)(result + 32) == 2;
  }
  *(_DWORD*)(*(_QWORD*)(result + 8) + 304LL) =
      *(_DWORD*)(result + 564 + 4LL * *(int*)(result + 32));
  v8 = *(_DWORD*)(result + 564);
  if (v8 != -1) {
    v9 = v3 + 1560LL * v8;
    if (*(_QWORD*)(v9 + 1752) != 0) {
      *(float*)(v9 + 1748) = a2;
    }
  }
  v10 = *(_DWORD*)(result + 568);
  if (v10 != -1) {
    v11 = v3 + 1560LL * v10;
    if (*(_QWORD*)(v11 + 1752) != 0) {
      *(float*)(v11 + 1748) = a2;
    }
  }
  v12 = *(_DWORD*)(result + 572);
  if (v12 != -1) {
    v13 = v3 + 1560LL * v12;
    if (*(_QWORD*)(v13 + 1752) != 0) {
      *(float*)(v13 + 1748) = a2;
    }
  }
  v14 = *(_DWORD*)(result + 552);
  if (v14 != -1) {
    v15 = v3 + 1560LL * v14;
    if (*(_QWORD*)(v15 + 1752) != 0) {
      *(float*)(v15 + 1748) = a2;
    }
  }
  v16 = *(_DWORD*)(result + 556);
  if (v16 != -1) {
    v17 = v3 + 1560LL * v16;
    if (*(_QWORD*)(v17 + 1752) != 0) {
      *(float*)(v17 + 1748) = a2;
    }
  }
  v18 = *(_DWORD*)(result + 560);
  if (v18 != -1) {
    v19 = *(float*)(result + 524);
    v21 = v19 > 0x0.0p+0f && (signed __int32)*(_DWORD*)(result + 516) > -1;
    *(_BYTE*)(v3 + 1744 + 1560LL * v18) = v21;
    v22 = *(_DWORD*)(result + 556);
    if (v22 != -1) {
      v23 = !v21;
      v24 = 1560LL * v22;
      if (v19 < 0x1.0000000000000p+0f) {
        v23 = 1;
      }
      *(_BYTE*)(v3 + 1744 + v24) = v23;
    }
    v25 = *(_DWORD*)(result + 560);
    if (v25 != -1) {
      v26 = v3 + 1560LL * v25;
      if (*(_QWORD*)(v26 + 1752) != 0) {
        *(float*)(v26 + 1748) = a2;
      }
    }
  }
  return result;
}

void gfxa_c686d0(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  float v4;
  float v5;
  unsigned int v7;

  GameHr_c6f7e0(a1, a2);
  GameRoutine_c6a500(a1, a2);
  *(_BYTE*)(a1 + 24) = 1;
  if (*(_BYTE*)(a2 + 224) == 1) {
    v4 = *(float*)(a2 + 232);
    if (v4 < 0x1.0000000000000p+0f) {
      LightingAnimModule_c6ef90(a1, v4);
    }
  }
  v5 = *(float*)(a2 + 228);
  if (v5 < 0x1.0000000000000p+0f) {
    gfxa_c6f0a0(a1, 1, v5);
  }
  if (*(int*)(a2 + 216) >= 1 && (signed __int32)*(_DWORD*)(a1 + 352) >= 1) {
    GameHr_c71860(a1, *(_DWORD*)(a1 + 556), *(_DWORD*)(a1 + 512));
    v7 = *(_DWORD*)(a1 + 516);
    if ((v7 & 0x80000000) == 0) {
      GameHr_c71860(a1, *(_DWORD*)(a1 + 560), v7);
    }
    LightingAnimModule_c6da10(a1);
  }
}

void gfxa_c6f0a0(__int64 a1, char a2, float a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  bool v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  char* v13;
  __int64 v14;
  __int64* v15;
  unsigned __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  float v22;
  unsigned __int64 v23;
  __int64 v24;
  bool v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  char* v30;
  __int64 v31;
  unsigned __int64 v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  float v38;
  unsigned __int64 v39;
  bool v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  char* v45;
  __int64 v46;
  unsigned __int64 v47;
  char* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  float v53;
  unsigned __int64 v54;
  __int64 v55;
  bool v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  char* v61;
  __int64 v62;
  unsigned __int64 v63;
  char* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  float v69;
  struct {
    __int64 v70;
    unsigned __int64 v71;
    char* v72;
  } v70_;
  struct {
    __int64 v73;
    __int64 v74;
  } v73_;

  if ((a2 & 1) == 0 &&
      vabds_f32(*(float*)(a1 + 364), a3) <= 0x1.0000000000000p-23f) {
    return;
  }
  v5 = *(unsigned __int8*)(a1 + 64);
  v7 = *(_QWORD*)(a1 + 72);
  v6 = *(_QWORD*)(a1 + 80);
  v8 = (v5 & 1) == 0;
  v9 = v5 >> 1;
  *(float*)(a1 + 364) = a3;
  if (v8) {
    v10 = v9;
  }
  else {
    v10 = v7;
  }
  if (v8) {
    v11 = a1 + 65;
  }
  else {
    v11 = v6;
  }
  v12 = v10 + 2;
  if (v10 + 2 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_160:
    String_60a1d0();
  }
  if (v12 >= 0x17) {
    if ((v12 | 7) == 0x17) {
      v14 = 26;
    }
    else {
      v14 = (v12 | 7) + 1;
    }
    v13 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v14,
                                                16, 0);
    v70_.v71 = v10 + 2;
    v70_.v72 = v13;
    v70_.v70 = v14 | 1;
    goto LABEL_17;
  }
  v70_.v71 = 0;
  v70_.v72 = nullptr;
  v70_.v70 = (unsigned __int8)(2 * v12);
  v13 = (char*)&v70_.v70 + 1;
  if (v10 != 0) {
  LABEL_17:
    memmove((__int64)v13, v11, v10);
  }
  strcpy(&v13[v10], "Ex");
  v15 = game_g_frame_clock_ptr[0];
  if ((v70_.v70 & 1) != 0) {
    v16 = v70_.v71;
  }
  else {
    v16 = (unsigned __int64)(unsigned __int8)v70_.v70 >> 1;
  }
  if ((v70_.v70 & 1) != 0) {
    v17 = v70_.v72;
  }
  else {
    v17 = (char*)&v70_.v70 + 1;
  }
  game_a8ed00((void*)(&v73_.v73),
              *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13224), (__int64)v17,
              v16);
  v19 = v73_.v73;
  v18 = v73_.v74;
  if (v73_.v74 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v73_.v74 + 8), 1u,
                              memory_order_relaxed);
    v20 = v73_.v74;
    if (v73_.v74 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v73_.v74 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
      std___1___shared_weak_count___release_weak(v20);
    }
  }
  if ((v70_.v70 & 1) != 0 && v70_.v72 != nullptr) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v21,
                                  (__int64)v70_.v72);
  }
  if (v19 != 0) {
    v22 = 0x1.0000000000000p+0f;
    if (a3 <= 0x1.0000000000000p+0f) {
      v22 = a3;
    }
    if (a3 < 0x0.0p+0f) {
      v22 = 0x0.0p+0f;
    }
    *(float*)(v19 + 32) = v22;
  }
  if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    std___1___shared_weak_count___release_weak(v18);
  }
  v23 = *(unsigned __int8*)(a1 + 88);
  v24 = a1 + 89;
  v25 = (v23 & 1) == 0;
  v26 = v23 >> 1;
  if (v25) {
    v27 = v26;
  }
  else {
    v27 = *(_QWORD*)(a1 + 96);
  }
  if (v25) {
    v28 = a1 + 89;
  }
  else {
    v28 = *(_QWORD*)(a1 + 104);
  }
  v29 = v27 + 2;
  if (v27 + 2 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_160;
  }
  if (v29 >= 0x17) {
    if ((v29 | 7) == 0x17) {
      v31 = 26;
    }
    else {
      v31 = (v29 | 7) + 1;
    }
    v30 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v31,
                                                16, 0);
    v70_.v71 = v27 + 2;
    v70_.v72 = v30;
    v70_.v70 = v31 | 1;
    goto LABEL_56;
  }
  v70_.v71 = 0;
  v70_.v72 = nullptr;
  v70_.v70 = (unsigned __int8)(2 * v29);
  v30 = (char*)&v70_.v70 + 1;
  if (v27 != 0) {
  LABEL_56:
    memmove((__int64)v30, v28, v27);
  }
  strcpy(&v30[v27], "Ex");
  if ((v70_.v70 & 1) != 0) {
    v32 = v70_.v71;
  }
  else {
    v32 = (unsigned __int64)(unsigned __int8)v70_.v70 >> 1;
  }
  if ((v70_.v70 & 1) != 0) {
    v33 = v70_.v72;
  }
  else {
    v33 = (char*)&v70_.v70 + 1;
  }
  game_a8ed00((void*)(&v73_.v73), *(_QWORD*)(*v15 + 13224), (__int64)v33, v32);
  v35 = v73_.v73;
  v34 = v73_.v74;
  if (v73_.v74 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v73_.v74 + 8), 1u,
                              memory_order_relaxed);
    v36 = v73_.v74;
    if (v73_.v74 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v73_.v74 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
      std___1___shared_weak_count___release_weak(v36);
    }
  }
  if ((v70_.v70 & 1) != 0 && v70_.v72 != nullptr) {
    v37 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v37 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v37,
                                  (__int64)v70_.v72);
  }
  if (v35 != 0) {
    v38 = 0x1.0000000000000p+0f;
    if (a3 <= 0x1.0000000000000p+0f) {
      v38 = a3;
    }
    if (a3 < 0x0.0p+0f) {
      v38 = 0x0.0p+0f;
    }
    *(float*)(v35 + 32) = v38;
  }
  if (v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
    std___1___shared_weak_count___release_weak(v34);
  }
  v39 = *(unsigned __int8*)(a1 + 64);
  v40 = (v39 & 1) == 0;
  v41 = v39 >> 1;
  if (v40) {
    v42 = v41;
  }
  else {
    v42 = *(_QWORD*)(a1 + 72);
  }
  if (v40) {
    v43 = a1 + 65;
  }
  else {
    v43 = *(_QWORD*)(a1 + 80);
  }
  v44 = v42 + 7;
  if (v42 + 7 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_160;
  }
  if (v44 >= 0x17) {
    if ((v44 | 7) == 0x17) {
      v46 = 26;
    }
    else {
      v46 = (v44 | 7) + 1;
    }
    v45 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v46,
                                                16, 0);
    v70_.v71 = v42 + 7;
    v70_.v72 = v45;
    v70_.v70 = v46 | 1;
    goto LABEL_95;
  }
  v70_.v71 = 0;
  v70_.v72 = nullptr;
  v70_.v70 = (unsigned __int8)(2 * v44);
  v45 = (char*)&v70_.v70 + 1;
  if (v42 != 0) {
  LABEL_95:
    memmove((__int64)v45, v43, v42);
  }
  strcpy(&v45[v42], "Ex_Bmap");
  if ((v70_.v70 & 1) != 0) {
    v47 = v70_.v71;
  }
  else {
    v47 = (unsigned __int64)(unsigned __int8)v70_.v70 >> 1;
  }
  if ((v70_.v70 & 1) != 0) {
    v48 = v70_.v72;
  }
  else {
    v48 = (char*)&v70_.v70 + 1;
  }
  game_a8ed00((void*)(&v73_.v73), *(_QWORD*)(*v15 + 13224), (__int64)v48, v47);
  v50 = v73_.v73;
  v49 = v73_.v74;
  if (v73_.v74 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v73_.v74 + 8), 1u,
                              memory_order_relaxed);
    v51 = v73_.v74;
    if (v73_.v74 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v73_.v74 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v51 + 16LL))(v51);
      std___1___shared_weak_count___release_weak(v51);
    }
  }
  if ((v70_.v70 & 1) != 0 && v70_.v72 != nullptr) {
    v52 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v52 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v52,
                                  (__int64)v70_.v72);
  }
  if (v50 != 0) {
    v53 = 0x1.0000000000000p+0f;
    if (a3 <= 0x1.0000000000000p+0f) {
      v53 = a3;
    }
    if (a3 < 0x0.0p+0f) {
      v53 = 0x0.0p+0f;
    }
    *(float*)(v50 + 32) = v53;
  }
  if (v49 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
    std___1___shared_weak_count___release_weak(v49);
  }
  v54 = *(unsigned __int8*)(a1 + 88);
  v55 = *(_QWORD*)(a1 + 104);
  v56 = (v54 & 1) == 0;
  v57 = v54 >> 1;
  if (v56) {
    v58 = v57;
  }
  else {
    v58 = *(_QWORD*)(a1 + 96);
  }
  if (v56) {
    v59 = v24;
  }
  else {
    v59 = v55;
  }
  v60 = v58 + 7;
  if (v58 + 7 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_160;
  }
  if (v60 >= 0x17) {
    if ((v60 | 7) == 0x17) {
      v62 = 26;
    }
    else {
      v62 = (v60 | 7) + 1;
    }
    v61 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v62,
                                                16, 0);
    v70_.v71 = v58 + 7;
    v70_.v72 = v61;
    v70_.v70 = v62 | 1;
  }
  else {
    v70_.v71 = 0;
    v70_.v72 = nullptr;
    v70_.v70 = (unsigned __int8)(2 * v60);
    v61 = (char*)&v70_.v70 + 1;
    if (v58 == 0) {
      goto LABEL_135;
    }
  }
  memmove((__int64)v61, v59, v58);
LABEL_135:
  strcpy(&v61[v58], "Ex_Bmap");
  if ((v70_.v70 & 1) != 0) {
    v63 = v70_.v71;
  }
  else {
    v63 = (unsigned __int64)(unsigned __int8)v70_.v70 >> 1;
  }
  if ((v70_.v70 & 1) != 0) {
    v64 = v70_.v72;
  }
  else {
    v64 = (char*)&v70_.v70 + 1;
  }
  game_a8ed00((void*)(&v73_.v73), *(_QWORD*)(*v15 + 13224), (__int64)v64, v63);
  v66 = v73_.v73;
  v65 = v73_.v74;
  if (v73_.v74 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v73_.v74 + 8), 1u,
                              memory_order_relaxed);
    v67 = v73_.v74;
    if (v73_.v74 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v73_.v74 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v67 + 16LL))(v67);
      std___1___shared_weak_count___release_weak(v67);
    }
  }
  if ((v70_.v70 & 1) != 0 && v70_.v72 != nullptr) {
    v68 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v68 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v68,
                                  (__int64)v70_.v72);
  }
  if (v66 != 0) {
    v69 = 0x1.0000000000000p+0f;
    if (a3 <= 0x1.0000000000000p+0f) {
      v69 = a3;
    }
    if (a3 < 0x0.0p+0f) {
      v69 = 0x0.0p+0f;
    }
    *(float*)(v66 + 32) = v69;
  }
  if (v65 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v65 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v65 + 16LL))(v65);
    std___1___shared_weak_count___release_weak(v65);
  }
}

__int64 gfxa_c702b0(__int64 a1, int a2, __int64 a3, unsigned __int64 a4)
{
  char* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  struct {
    __int64 v21;
    unsigned __int64 v22;
    char* v23;
    char gap32_[48];
    __int64 v24;
    __int64 v25;
  } v21_;

  if (a4 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  if (a4 >= 0x17) {
    if ((a4 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (a4 | 7) + 1;
    }
    v8 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v9, 16,
                                               0);
    v21_.v22 = a4;
    v21_.v23 = v8;
    v21_.v21 = v9 | 1;
  }
  else {
    LOBYTE(v21_.v21) = 2 * a4;
    v8 = (char*)&v21_.v21 + 1;
    if (a4 == 0) {
      goto LABEL_10;
    }
  }
  memmove((__int64)v8, a3, a4);
LABEL_10:
  v8[a4] = 0;
  v21_.v24 = -1;
  v21_.v25 = 1065353216;
  v10 = a1 + 96LL * a2;
  *(_DWORD*)v10 = 1;
  if ((*(_BYTE*)(v10 + 8) & 1) != 0) {
    v11 = *(_QWORD*)(v10 + 24);
    if (v11 != 0) {
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v11);
    }
  }
  v13 = v21_.v22;
  *(_QWORD*)(v10 + 8) = v21_.v21;
  *(_QWORD*)(v10 + 16) = v13;
  *(_QWORD*)(v10 + 24) = v21_.v23;
  if ((*(_BYTE*)(v10 + 32) & 1) != 0) {
    v14 = *(_QWORD*)(v10 + 48);
    if (v14 != 0) {
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v14);
    }
  }
  *(_QWORD*)(v10 + 40) = 0;
  *(_QWORD*)(v10 + 48) = 0;
  *(_QWORD*)(v10 + 32) = 0;
  if ((*(_BYTE*)(v10 + 56) & 1) != 0) {
    v16 = *(_QWORD*)(v10 + 72);
    if (v16 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v16);
    }
  }
  v18 = v21_.v24;
  v19 = v21_.v25;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  *(_QWORD*)(v10 + 80) = v18;
  *(_QWORD*)(v10 + 88) = v19;
  return a1;
}

__int64 gfxa_c71600(__int64 a1, int a2, __int64 a3, unsigned __int64 a4,
                    __int64 a5, unsigned __int64 a6)
{
  char* v12;
  __int64 v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  struct {
    __int64 v28;
    unsigned __int64 v29;
    char* v30;
  } v28_;
  struct {
    __int64 v31;
    unsigned __int64 v32;
    char* v33;
    char gap56_[24];
    __int64 v34;
    __int64 v35;
  } v31_;

  if (a4 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_35:
    String_60a1d0();
  }
  if (a4 >= 0x17) {
    if ((a4 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (a4 | 7) + 1;
    }
    v12 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v13,
                                                16, 0);
    v28_.v29 = a4;
    v28_.v30 = v12;
    v28_.v28 = v13 | 1;
    goto LABEL_9;
  }
  LOBYTE(v28_.v28) = 2 * a4;
  v12 = (char*)&v28_.v28 + 1;
  if (a4 != 0) {
  LABEL_9:
    memmove((__int64)v12, a3, a4);
  }
  v12[a4] = 0;
  if (a6 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_35;
  }
  if (a6 >= 0x17) {
    if ((a6 | 7) == 0x17) {
      v15 = 26;
    }
    else {
      v15 = (a6 | 7) + 1;
    }
    v14 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v15,
                                                16, 0);
    v31_.v32 = a6;
    v31_.v33 = v14;
    v31_.v31 = v15 | 1;
  }
  else {
    LOBYTE(v31_.v31) = 2 * a6;
    v14 = (char*)&v31_.v31 + 1;
    if (a6 == 0) {
      goto LABEL_19;
    }
  }
  memmove((__int64)v14, a5, a6);
LABEL_19:
  v14[a6] = 0;
  v31_.v34 = -1;
  v31_.v35 = 1065353216;
  v16 = a1 + 96LL * a2;
  *(_DWORD*)v16 = 3;
  if ((*(_BYTE*)(v16 + 8) & 1) != 0) {
    v17 = *(_QWORD*)(v16 + 24);
    if (v17 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v17);
    }
  }
  v19 = v28_.v29;
  *(_QWORD*)(v16 + 8) = v28_.v28;
  *(_QWORD*)(v16 + 16) = v19;
  *(_QWORD*)(v16 + 24) = v28_.v30;
  if ((*(_BYTE*)(v16 + 32) & 1) != 0) {
    v20 = *(_QWORD*)(v16 + 48);
    if (v20 != 0) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v20);
    }
  }
  v22 = v31_.v32;
  *(_QWORD*)(v16 + 32) = v31_.v31;
  *(_QWORD*)(v16 + 40) = v22;
  *(_QWORD*)(v16 + 48) = v31_.v33;
  if ((*(_BYTE*)(v16 + 56) & 1) != 0) {
    v23 = *(_QWORD*)(v16 + 72);
    if (v23 != 0) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, v23);
    }
  }
  v25 = v31_.v34;
  v26 = v31_.v35;
  *(_QWORD*)(v16 + 64) = 0;
  *(_QWORD*)(v16 + 72) = 0;
  *(_QWORD*)(v16 + 56) = 0;
  *(_QWORD*)(v16 + 80) = v25;
  *(_QWORD*)(v16 + 88) = v26;
  return a1;
}

#pragma GCC visibility pop
