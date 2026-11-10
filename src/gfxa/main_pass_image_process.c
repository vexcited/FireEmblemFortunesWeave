#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 FogSetting_Destructor(_QWORD);
__int64 GameRoutine_b60f30(_QWORD, _QWORD, _QWORD);
__int64 ResourceBuilder_b5a4b0(__int64, __int64);
__int64 ResourceBuilder_b5a9c0(__int64, _QWORD*, _QWORD*, __int64*, int*);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, long double) __asm__(
    "nn_mem_StandardAllocator_Free");
extern _UNKNOWN** GameData_212e738;
extern __int64 (*GameData_1fcb600[])();
extern __int64 (*GameData_1fcb690[])();
extern __int64 (*GameData_1fcb720[])();
extern __int64 (*GameData_1fcb768[])();
extern __int64 (*GameData_1fcb7f8[])();
extern __int64 (*GameData_1fcb888[])();
extern __int64 (*GameData_1fcd758[])();
extern __int64 (*GameData_1fcd7e8[])();
extern __int64 (*GameData_1fcd878[])();
extern __int64 GameData_212e520[4];
extern __int64 GameData_212e528[3];
extern __int64 GameData_212e530[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e548[27];
extern __int64* GameData_212e550[26];
extern __int64* GameData_212e558[25];
extern __int64* GameData_212e560[24];
extern __int64* GameData_212e568[23];
extern __int64* GameData_212e570[22];
extern __int64* GameData_212e578[21];
extern __int64* GameData_212e588[19];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_a9fd80(_QWORD);
void __attribute__((noreturn)) GameRoutine_aa0e00(_QWORD);
void __attribute__((noreturn)) GameRoutine_ab9110(_QWORD);
void __attribute__((noreturn)) GameRoutine_abae00(_QWORD);
void __attribute__((noreturn)) GameRoutine_abc340(_QWORD);
void __attribute__((noreturn)) GameRoutine_b32f30(void);
void __attribute__((noreturn))
GameRoutine_b32f30_alt1(_QWORD) __asm__("GameRoutine_b32f30");
__int64 gfxa_MainPassImageProcess_SetupFogPass(__int64 a1, __int64 a2,
                                               _QWORD* a3, __int64* a4);
__int64 gfxa_MainPassImageProcess_SetupHeightFogPass_alt1(
    __int64 result, __int64* a2, _QWORD* a3,
    _QWORD* a4) __asm__("gfxa_MainPassImageProcess_SetupHeightFogPass");
__int64 gfxa_MainPassImageProcess_SetupLensFlareSystemPass(
    __int64 result, __int64 a2, __int64 a3, __int64 a4, unsigned int a5);
__int64 gfxa_MainPassImageProcess_SetupDLSSPass_lambda1_Invoke(__int64 a1,
                                                               __int64 a2,
                                                               __int64* a3);
__int64 gfxa_MainPassImageProcess_SetupDepthUpscalePass_lambda0_Invoke(
    __int64 a1, __int64** a2, __int64 a3);
__int64* GameRoutine_b3f6c0(_QWORD*, __int64);
__int64* GameRoutine_b3f800(_QWORD*, __int64);
__int64 GameRoutine_b48f90(__int64, __int64);
__int64 GameRoutine_b494f0(__int64, __int64, __int64*);
__int64 GameRoutine_b4a3f0(__int64, __int64);
__int64 GameRoutine_b4ba10(__int64*, __int64, __int64);
__int64 GameRoutine_b509c0(__int64, __int64, __int64*);
__int64 GameRoutine_b53d40(__int64, __int64, __int64*);
__int64 GameRoutine_b54ca0(__int64, __int64, __int64*);
__int64 GameRoutine_b5a5d0(__int64, __int64, __int64*);
__int64 GameRoutine_b5acb0(__int64, __int64, __int64*);
__int64 GameRoutine_b5b7e0(__int64, _QWORD*, _QWORD*, _QWORD*, __int64);
__int64 GameRoutine_b6b560(__int64, _QWORD*, _QWORD*, __int64*, float32x4_t*);
__int64 TaskMotionBlur_b6ef60(__int64, _QWORD*, _QWORD*, __int64*,
                              unsigned int*);
__int64 nn_os_ConvertToTimeSpan(_QWORD);
extern __int128 GameData_1a82d20;
extern __int128 GameData_1a834b0;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a83620;
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 as_g_base_frame_counter;
float exp2f(float);
__int64 gfxa_MainPassImageProcess_SetupHeightFogPass_lambda0_Invoke(
    __int64 a1, float32x4_t** a2, __int64 a3);
__int64 gfxa_MainPassImageProcess_SetupPostProcessPass1_lambda0_Invoke(
    __int64 a1, __int64** a2, __int64 a3);
__int64 gfxa_MainPassImageProcess_SetupPostProcessPass3_lambda1_Invoke(
    __int64 a1, __int64 a2, __int64* a3);
__int64 gfxa_MainPassImageProcess_SetupPostProcessPass4_lambda0_Invoke(
    __int64 a1, _QWORD* a2, __int64 a3);
__int64 gfxa_MainPassImageProcess_SetupPostProcessPass4_lambda1_Invoke(
    __int64 a1, __int64 a2, _QWORD* a3);
__int64 gfxa_MainPassImageProcess_SetupPostProcessPass4_lambda4_Invoke(
    __int64 a1, __int64** a2, __int64 a3);
__int64 gfxa_MainPassImageProcess_SetupOffscreenPostProcessPass_lambda0_Invoke(
    __int64 a1, __int64** a2, __int64* a3);
__int64 gfxa_MainPassImageProcess_SetupLensFlareSystemPass_lambda1_Invoke(
    __int64 a1, __int64 a2, __int64* a3);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_b32f30_alt2() __asm__("GameRoutine_b32f30");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 gfxa_MainPassImageProcess_SetupHeightFogPass(__int64 result, __int64 a2,
                                                     _QWORD* a3, _QWORD* a4);

__int64 gfxa_MainPassImageProcess_SetupFogPass(__int64 a1, __int64 a2,
                                               _QWORD* a3, __int64* a4)
{
  __int64 v4;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char v18;
  __int64 v19;
  __int16 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  char v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  int v46;
  char v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  int v56;
  char v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  int v77;
  char v78;
  __int64 v79;
  __int64 v80;
  __int16 v81;
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
  __int64 v92;
  __int64 v93;
  int v94;
  _QWORD* v95;
  char v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  int v111;
  char v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  int v120;
  char v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  int v129;
  char v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  int v138;
  char v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  int v147;
  char v148;
  __int64 v149;
  __int16 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int16 v169;
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
  __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  __int64 v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  __int64 v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  int v216;
  char v217;
  __int64 v218;
  __int64 v219;
  __int64 v220;
  __int64 v221;
  __int64 v222;
  __int64 v223;
  __int64 v224;
  __int64 v225;
  int v226;
  char v227;
  __int64 v228;
  __int64 v229;
  __int64 v230;
  __int64 v231;
  __int64 v232;
  __int64 v233;
  __int64 v234;
  __int64 v235;
  int v236;
  __int64 v237;
  __int64 v238;
  __int64 (*v239)();
  int v240;
  __int64 v241;
  __int64 v242;
  unsigned __int64 v243;
  __int64* v244;
  __int64 v245;
  __int64 (*v246)();
  __int64 v247;
  unsigned __int64 v248;
  __int64 v249;
  unsigned __int64 v250;
  __int64 v251;
  __int64 v252;
  unsigned __int64 v253;
  __int64 v254;
  __int64 v255;
  _QWORD** v256;
  __int64 v258;
  __int64 v259;
  __int64* v260;
  _QWORD v261[3];
  __int64 v262;
  __int64 v263;
  __int64 v264;
  __int64* v265;
  _QWORD v266[3];
  char v267;
  __int16 v268;
  __int64 v269;
  __int64 v270;
  __int64 v271;
  char v272;
  __int64 v273;
  _QWORD v274[3];
  char v275;
  __int64 v276;
  __int64 v277;
  __int64 v278;
  __int64 v279;
  int v280;
  __int64 v281;
  _QWORD v282[3];
  char v283;
  __int64 v284;
  __int64 v285;
  __int64 v286;
  __int64 v287;
  int v288;
  __int64 v289;
  _QWORD v290[3];
  char v291;
  __int64 v292;
  __int64 v293;
  __int64 v294;
  __int64 v295;
  int v296;
  __int64* v297;
  _QWORD v298[3];
  char v299;
  __int64 v300;
  __int64 v301;
  __int64 v302;
  __int64 v303;
  __int64 v304;
  __int64 v305;
  __int64 v306;
  __int64 v307;
  __int64 v308;
  __int64 v309;
  _QWORD v310[3];
  char v311;
  __int64 v312;
  __int64 v313;
  __int64 v314;
  __int64 v315;
  int v316;
  __int64* v317;
  _QWORD v318[3];
  char v319;
  __int16 v320;
  __int64 v321;
  __int64 v322;
  __int64 v323;
  char v324;
  __int64 v325;
  _QWORD v326[3];
  char v327;
  __int64 v328;
  __int64 v329;
  __int64 v330;
  __int64 v331;
  int v332;
  __int64* v333;
  _QWORD v334[3];
  char v335;
  __int64 v336;
  __int64 v337;
  __int64 v338;
  __int64 v339;
  int v340;
  __int64 v341;
  _QWORD v342[3];
  char v343;
  __int64 v344;
  __int64 v345;
  __int64 v346;
  __int64 v347;
  int v348;
  __int64 v349;
  _QWORD v350[3];
  char v351;
  __int64 v352;
  __int64 v353;
  __int64 v354;
  __int64 v355;
  int v356;
  __int64 v357;
  _QWORD v358[3];
  char v359;
  __int64 v360;
  __int64 v361;
  __int64 v362;
  __int64 v363;
  int v364;
  __int64 v365;
  _QWORD v366[3];
  char v367;
  __int64 v368;
  __int64 v369;
  __int64 v370;
  __int64 v371;
  int v372;
  __int64 v373;
  _QWORD v374[3];
  char v375;
  __int64 v376;
  __int64 v377;
  __int64 v378;
  __int64 v379;
  int v380;
  __int64* v381;
  _QWORD v382[3];
  char v383;
  __int16 v384;
  __int64 v385;
  __int64 v386;
  __int64 v387;
  char v388;
  __int64* v389;
  _QWORD v390[3];
  char v391;
  __int64 v392;
  __int64 v393;
  __int64 v394;
  __int64 v395;
  __int64 v396;
  __int64 v397;
  __int64 v398;
  __int64 v399;
  __int64 v400;
  __int64* v401;
  _QWORD v402[3];
  char v403;
  __int16 v404;
  __int64 v405;
  __int64 v406;
  __int64 v407;
  char v408;
  __int64* v409;
  _QWORD v410[3];
  char v411;
  __int64 v412;
  __int64 v413;
  __int64 v414;
  __int64 v415;
  __int64 v416;
  __int64 v417;
  __int64 v418;
  __int64 v419;
  __int64 v420;
  __int64* v421;
  _QWORD v422[3];
  char v423;
  __int64 v424;
  __int64 v425;
  __int64 v426;
  __int64 v427;
  __int64 v428;
  __int64 v429;
  __int64 v430;
  __int64 v431;
  __int64 v432;
  __int64* v433;
  _QWORD v434[3];
  char v435;
  __int64 v436;
  __int64 v437;
  __int64 v438;
  __int64 v439;
  __int64 v440;
  __int64 v441;
  __int64 v442;
  __int64 v443;
  __int64 v444;
  __int64 v445;
  _QWORD v446[3];
  char v447;
  __int64 v448;
  __int64 v449;
  __int64 v450;
  __int64 v451;
  int v452;
  __int64 v453;
  _QWORD v454[3];
  char v455;
  __int64 v456;
  __int64 v457;
  __int64 v458;
  __int64 v459;
  int v460;
  __int64 v461;
  _QWORD v462[3];
  char v463;
  __int64 v464;
  __int64 v465;
  __int64 v466;
  __int64 v467;
  int v468;
  _QWORD* v469;
  __int64 (**v470)();
  _QWORD** v471;
  __int64 v472;
  __int64 (***v473)();

  v4 = *a4;
  v469 = a3;
  v7 = v261;
  v8 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 104LL);
  v260 = GameData_212e548[0] + 2;
  if ((*(_BYTE*)(v8 + 8) & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v261, *(_QWORD*)(v8 + 24),
                                                *(_QWORD*)(v8 + 16));
  }
  else {
    v9 = *(_QWORD*)(v8 + 8);
    v10 = *(_QWORD*)(v8 + 24);
    v261[1] = *(_QWORD*)(v8 + 16);
    v261[2] = v10;
    v261[0] = v9;
  }
  v263 = 0;
  v264 = 0;
  v262 = 0;
  v12 = *(_QWORD*)(v8 + 32);
  v11 = *(_QWORD*)(v8 + 40);
  v13 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v14 = v11 - v12;
  if (v11 != v12) {
    if (v14 < 0) {
      GameRoutine_a9fd80(v7);
    }
    v15 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v11 - v12, 16, 0);
    v16 = v15 + v14;
    v262 = v15;
    v263 = v15;
    v264 = v15 + v14;
    v7 = (_QWORD*)memcpy(v15, v12, v14);
    v263 = v16;
  }
  v17 = GameData_212e530[0];
  v265 = (__int64*)(GameData_212e530[0] + 16);
  v18 = *(_BYTE*)(v8 + 64);
  v260 = GameData_212e588[0] + 2;
  if ((v18 & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v266, *(_QWORD*)(v8 + 80),
                                                *(_QWORD*)(v8 + 72));
  }
  else {
    v266[1] = *(_QWORD*)(v8 + 72);
    v19 = *(_QWORD*)(v8 + 64);
    v266[2] = *(_QWORD*)(v8 + 80);
    v266[0] = v19;
  }
  v267 = *(_BYTE*)(v8 + 88);
  v265 = GameData_212e568[0] + 2;
  v20 = *(_WORD*)(v8 + 89);
  v270 = 0;
  v271 = 0;
  v269 = 0;
  v268 = v20;
  v22 = *(_QWORD*)(v8 + 96);
  v21 = *(_QWORD*)(v8 + 104);
  v23 = v21 - v22;
  if (v21 != v22) {
    if (v23 < 0) {
      goto LABEL_168;
    }
    v24 = fw_memory_HeapManager_Allocate(*v13, v21 - v22, 16, 0);
    v25 = v24 + v23;
    v269 = v24;
    v270 = v24;
    v271 = v24 + v23;
    v7 = (_QWORD*)memcpy(v24, v22, v23 - 2);
    v270 = v25;
  }
  v26 = *(_BYTE*)(v8 + 136);
  v272 = *(_BYTE*)(v8 + 120);
  v265 = GameData_212e560[0] + 2;
  v273 = v17 + 16;
  if ((v26 & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v274, *(_QWORD*)(v8 + 152),
                                                *(_QWORD*)(v8 + 144));
  }
  else {
    v27 = *(_QWORD*)(v8 + 136);
    v28 = *(_QWORD*)(v8 + 152);
    v274[1] = *(_QWORD*)(v8 + 144);
    v274[2] = v28;
    v274[0] = v27;
  }
  v275 = *(_BYTE*)(v8 + 160);
  v29 = GameData_212e528[0];
  v273 = GameData_212e528[0] + 16;
  v30 = *(_QWORD*)(v8 + 164);
  v278 = 0;
  v279 = 0;
  v277 = 0;
  v276 = v30;
  v32 = *(_QWORD*)(v8 + 176);
  v31 = *(_QWORD*)(v8 + 184);
  v33 = v31 - v32;
  if (v31 != v32) {
    if (0xAAAAAAAAAAAAAAABLL * (v33 >> 2) > 0x1555555555555555LL) {
      goto LABEL_166;
    }
    v34 = fw_memory_HeapManager_Allocate(*v13, v33, 16, 0);
    v35 = v34 + v33;
    v277 = v34;
    v278 = v34;
    v279 = v34 + v33;
    v7 = (_QWORD*)memcpy(v34, v32, v33);
    v278 = v35;
  }
  v36 = *(_BYTE*)(v8 + 216);
  v258 = a1;
  v259 = a2;
  v280 = *(_DWORD*)(v8 + 200);
  v37 = GameData_212e520[0];
  v273 = GameData_212e520[0] + 16;
  v281 = v17 + 16;
  if ((v36 & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v282, *(_QWORD*)(v8 + 232),
                                                *(_QWORD*)(v8 + 224));
  }
  else {
    v38 = *(_QWORD*)(v8 + 216);
    v39 = *(_QWORD*)(v8 + 232);
    v282[1] = *(_QWORD*)(v8 + 224);
    v282[2] = v39;
    v282[0] = v38;
  }
  v283 = *(_BYTE*)(v8 + 240);
  v281 = v29 + 16;
  v40 = *(_QWORD*)(v8 + 244);
  v286 = 0;
  v287 = 0;
  v285 = 0;
  v284 = v40;
  v42 = *(_QWORD*)(v8 + 256);
  v41 = *(_QWORD*)(v8 + 264);
  v43 = v41 - v42;
  if (v41 != v42) {
    if (0xAAAAAAAAAAAAAAABLL * (v43 >> 2) > 0x1555555555555555LL) {
      goto LABEL_166;
    }
    v44 = fw_memory_HeapManager_Allocate(*v13, v43, 16, 0);
    v45 = v44 + v43;
    v285 = v44;
    v286 = v44;
    v287 = v44 + v43;
    v7 = (_QWORD*)memcpy(v44, v42, v43);
    v286 = v45;
  }
  v46 = *(_DWORD*)(v8 + 280);
  v47 = *(_BYTE*)(v8 + 296);
  v281 = v37 + 16;
  v289 = v17 + 16;
  v288 = v46;
  if ((v47 & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v290, *(_QWORD*)(v8 + 312),
                                                *(_QWORD*)(v8 + 304));
  }
  else {
    v48 = *(_QWORD*)(v8 + 296);
    v49 = *(_QWORD*)(v8 + 312);
    v290[1] = *(_QWORD*)(v8 + 304);
    v290[2] = v49;
    v290[0] = v48;
  }
  v291 = *(_BYTE*)(v8 + 320);
  v289 = v29 + 16;
  v50 = *(_QWORD*)(v8 + 324);
  v294 = 0;
  v295 = 0;
  v293 = 0;
  v292 = v50;
  v52 = *(_QWORD*)(v8 + 336);
  v51 = *(_QWORD*)(v8 + 344);
  v53 = v51 - v52;
  if (v51 != v52) {
    if (0xAAAAAAAAAAAAAAABLL * (v53 >> 2) > 0x1555555555555555LL) {
      goto LABEL_166;
    }
    v54 = fw_memory_HeapManager_Allocate(*v13, v53, 16, 0);
    v55 = v54 + v53;
    v293 = v54;
    v294 = v54;
    v295 = v54 + v53;
    v7 = (_QWORD*)memcpy(v54, v52, v53);
    v294 = v55;
  }
  v56 = *(_DWORD*)(v8 + 360);
  v57 = *(_BYTE*)(v8 + 376);
  v289 = v37 + 16;
  v297 = (__int64*)(v17 + 16);
  v296 = v56;
  if ((v57 & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v298, *(_QWORD*)(v8 + 392),
                                                *(_QWORD*)(v8 + 384));
  }
  else {
    v58 = *(_QWORD*)(v8 + 376);
    v59 = *(_QWORD*)(v8 + 392);
    v298[1] = *(_QWORD*)(v8 + 384);
    v298[2] = v59;
    v298[0] = v58;
  }
  v61 = *(_QWORD*)(v8 + 416);
  v60 = *(_QWORD*)(v8 + 424);
  v299 = *(_BYTE*)(v8 + 400);
  v297 = GameData_212e578[0] + 2;
  v63 = *(_QWORD*)(v8 + 432);
  v62 = *(_QWORD*)(v8 + 440);
  v305 = 0;
  v306 = 0;
  v304 = 0;
  v300 = v61;
  v301 = v60;
  v302 = v63;
  v303 = v62;
  v65 = *(_QWORD*)(v8 + 448);
  v64 = *(_QWORD*)(v8 + 456);
  v66 = v64 - v65;
  if (v64 != v65) {
    if (0xAAAAAAAAAAAAAAABLL * (v66 >> 4) > 0x555555555555555LL) {
      goto LABEL_167;
    }
    v67 = fw_memory_HeapManager_Allocate(*v13, v66, 16, 0);
    v68 = v67 + v66;
    v304 = v67;
    v305 = v67;
    v306 = v67 + v66;
    memcpy(v67, v65, v66);
    v305 = v68;
  }
  v308 = *(_QWORD*)(v8 + 488);
  v307 = *(_QWORD*)(v8 + 480);
  v309 = v17 + 16;
  v297 = GameData_212e570[0] + 2;
  v7 = v310;
  if ((*(_BYTE*)(v8 + 504) & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v310, *(_QWORD*)(v8 + 520),
                                                *(_QWORD*)(v8 + 512));
  }
  else {
    v69 = *(_QWORD*)(v8 + 504);
    v70 = *(_QWORD*)(v8 + 520);
    v310[1] = *(_QWORD*)(v8 + 512);
    v310[2] = v70;
    v310[0] = v69;
  }
  v311 = *(_BYTE*)(v8 + 528);
  v309 = v29 + 16;
  v71 = *(_QWORD*)(v8 + 532);
  v313 = 0;
  v315 = 0;
  v314 = 0;
  v72 = *(_QWORD*)(v8 + 544);
  v312 = v71;
  v73 = *(_QWORD*)(v8 + 552);
  v74 = v73 - v72;
  if (v73 != v72) {
    if (0xAAAAAAAAAAAAAAABLL * (v74 >> 2) > 0x1555555555555555LL) {
      goto LABEL_166;
    }
    v75 = fw_memory_HeapManager_Allocate(*v13, v74, 16, 0);
    v76 = v75 + v74;
    v313 = v75;
    v314 = v75;
    v315 = v75 + v74;
    memcpy(v75, v72, v74);
    v314 = v76;
  }
  v77 = *(_DWORD*)(v8 + 568);
  v309 = v37 + 16;
  v317 = (__int64*)(v17 + 16);
  v7 = v318;
  v78 = *(_BYTE*)(v8 + 584);
  v316 = v77;
  if ((v78 & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v318, *(_QWORD*)(v8 + 600),
                                                *(_QWORD*)(v8 + 592));
  }
  else {
    v79 = *(_QWORD*)(v8 + 584);
    v80 = *(_QWORD*)(v8 + 600);
    v318[1] = *(_QWORD*)(v8 + 592);
    v318[2] = v80;
    v318[0] = v79;
  }
  v319 = *(_BYTE*)(v8 + 608);
  v317 = GameData_212e568[0] + 2;
  v81 = *(_WORD*)(v8 + 609);
  v321 = 0;
  v323 = 0;
  v322 = 0;
  v82 = *(_QWORD*)(v8 + 616);
  v320 = v81;
  v83 = *(_QWORD*)(v8 + 624);
  v84 = v83 - v82;
  if (v83 != v82) {
    if (v84 < 0) {
      goto LABEL_168;
    }
    v85 = fw_memory_HeapManager_Allocate(*v13, v83 - v82, 16, 0);
    v86 = v85 + v84;
    v321 = v85;
    v322 = v85;
    v323 = v85 + v84;
    memcpy(v85, v82, v84 - 2);
    v322 = v86;
  }
  v324 = *(_BYTE*)(v8 + 640);
  v317 = GameData_212e560[0] + 2;
  v325 = v17 + 16;
  v7 = v326;
  if ((*(_BYTE*)(v8 + 656) & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v326, *(_QWORD*)(v8 + 672),
                                                *(_QWORD*)(v8 + 664));
  }
  else {
    v326[1] = *(_QWORD*)(v8 + 664);
    v87 = *(_QWORD*)(v8 + 656);
    v326[2] = *(_QWORD*)(v8 + 672);
    v326[0] = v87;
  }
  v327 = *(_BYTE*)(v8 + 680);
  v325 = v29 + 16;
  v88 = *(_QWORD*)(v8 + 684);
  v329 = 0;
  v331 = 0;
  v330 = 0;
  v89 = *(_QWORD*)(v8 + 696);
  v328 = v88;
  v90 = *(_QWORD*)(v8 + 704);
  v91 = v90 - v89;
  if (v90 != v89) {
    if (0xAAAAAAAAAAAAAAABLL * (v91 >> 2) > 0x1555555555555555LL) {
      goto LABEL_166;
    }
    v92 = fw_memory_HeapManager_Allocate(*v13, v91, 16, 0);
    v93 = v92 + v91;
    v329 = v92;
    v330 = v92;
    v331 = v92 + v91;
    memcpy(v92, v89, v91);
    v330 = v93;
  }
  v94 = *(_DWORD*)(v8 + 720);
  v325 = v37 + 16;
  v333 = (__int64*)(v17 + 16);
  v95 = v334;
  v96 = *(_BYTE*)(v8 + 736);
  v332 = v94;
  if ((v96 & 1) != 0) {
    v95 = (_QWORD*)fw_text_String_CopyTerminated(v334, *(_QWORD*)(v8 + 752),
                                                 *(_QWORD*)(v8 + 744));
  }
  else {
    v334[1] = *(_QWORD*)(v8 + 744);
    v97 = *(_QWORD*)(v8 + 736);
    v334[2] = *(_QWORD*)(v8 + 752);
    v334[0] = v97;
  }
  v335 = *(_BYTE*)(v8 + 760);
  v333 = GameData_212e558[0] + 2;
  v98 = *(_QWORD*)(v8 + 764);
  v337 = 0;
  v339 = 0;
  v338 = 0;
  v99 = *(_QWORD*)(v8 + 776);
  v336 = v98;
  v100 = *(_QWORD*)(v8 + 784);
  v101 = v100 - v99;
  if (v100 != v99) {
    if (0xAAAAAAAAAAAAAAABLL * (v101 >> 2) > 0x1555555555555555LL) {
      GameRoutine_ab9110(v95);
    }
    v102 = fw_memory_HeapManager_Allocate(*v13, v101, 16, 0);
    v103 = v102 + v101;
    v337 = v102;
    v338 = v102;
    v339 = v102 + v101;
    memcpy(v102, v99, v101);
    v338 = v103;
  }
  v340 = *(_DWORD*)(v8 + 800);
  v333 = GameData_212e550[0] + 2;
  v341 = v17 + 16;
  v7 = v342;
  if ((*(_BYTE*)(v8 + 816) & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v342, *(_QWORD*)(v8 + 832),
                                                *(_QWORD*)(v8 + 824));
  }
  else {
    v342[1] = *(_QWORD*)(v8 + 824);
    v104 = *(_QWORD*)(v8 + 816);
    v342[2] = *(_QWORD*)(v8 + 832);
    v342[0] = v104;
  }
  v343 = *(_BYTE*)(v8 + 840);
  v341 = v29 + 16;
  v105 = *(_QWORD*)(v8 + 844);
  v345 = 0;
  v347 = 0;
  v346 = 0;
  v106 = *(_QWORD*)(v8 + 856);
  v344 = v105;
  v107 = *(_QWORD*)(v8 + 864);
  v108 = v107 - v106;
  if (v107 != v106) {
    if (0xAAAAAAAAAAAAAAABLL * (v108 >> 2) > 0x1555555555555555LL) {
      goto LABEL_166;
    }
    v109 = fw_memory_HeapManager_Allocate(*v13, v108, 16, 0);
    v110 = v109 + v108;
    v345 = v109;
    v346 = v109;
    v347 = v109 + v108;
    memcpy(v109, v106, v108);
    v346 = v110;
  }
  v111 = *(_DWORD*)(v8 + 880);
  v341 = v37 + 16;
  v349 = v17 + 16;
  v7 = v350;
  v112 = *(_BYTE*)(v8 + 896);
  v348 = v111;
  if ((v112 & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v350, *(_QWORD*)(v8 + 912),
                                                *(_QWORD*)(v8 + 904));
  }
  else {
    v350[1] = *(_QWORD*)(v8 + 904);
    v113 = *(_QWORD*)(v8 + 896);
    v350[2] = *(_QWORD*)(v8 + 912);
    v350[0] = v113;
  }
  v351 = *(_BYTE*)(v8 + 920);
  v349 = v29 + 16;
  v114 = *(_QWORD*)(v8 + 924);
  v353 = 0;
  v355 = 0;
  v354 = 0;
  v115 = *(_QWORD*)(v8 + 936);
  v352 = v114;
  v116 = *(_QWORD*)(v8 + 944);
  v117 = v116 - v115;
  if (v116 != v115) {
    if (0xAAAAAAAAAAAAAAABLL * (v117 >> 2) > 0x1555555555555555LL) {
      goto LABEL_166;
    }
    v118 = fw_memory_HeapManager_Allocate(*v13, v117, 16, 0);
    v119 = v118 + v117;
    v353 = v118;
    v354 = v118;
    v355 = v118 + v117;
    memcpy(v118, v115, v117);
    v354 = v119;
  }
  v120 = *(_DWORD*)(v8 + 960);
  v349 = v37 + 16;
  v357 = v17 + 16;
  v7 = v358;
  v121 = *(_BYTE*)(v8 + 976);
  v356 = v120;
  if ((v121 & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v358, *(_QWORD*)(v8 + 992),
                                                *(_QWORD*)(v8 + 984));
  }
  else {
    v358[1] = *(_QWORD*)(v8 + 984);
    v122 = *(_QWORD*)(v8 + 976);
    v358[2] = *(_QWORD*)(v8 + 992);
    v358[0] = v122;
  }
  v359 = *(_BYTE*)(v8 + 1000);
  v357 = v29 + 16;
  v123 = *(_QWORD*)(v8 + 1004);
  v361 = 0;
  v363 = 0;
  v362 = 0;
  v124 = *(_QWORD*)(v8 + 1016);
  v360 = v123;
  v125 = *(_QWORD*)(v8 + 1024);
  v126 = v125 - v124;
  if (v125 != v124) {
    if (0xAAAAAAAAAAAAAAABLL * (v126 >> 2) > 0x1555555555555555LL) {
      goto LABEL_166;
    }
    v127 = fw_memory_HeapManager_Allocate(*v13, v126, 16, 0);
    v128 = v127 + v126;
    v361 = v127;
    v362 = v127;
    v363 = v127 + v126;
    memcpy(v127, v124, v126);
    v362 = v128;
  }
  v129 = *(_DWORD*)(v8 + 1040);
  v357 = v37 + 16;
  v365 = v17 + 16;
  v7 = v366;
  v130 = *(_BYTE*)(v8 + 1056);
  v364 = v129;
  if ((v130 & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v366, *(_QWORD*)(v8 + 1072),
                                                *(_QWORD*)(v8 + 1064));
  }
  else {
    v366[1] = *(_QWORD*)(v8 + 1064);
    v131 = *(_QWORD*)(v8 + 1056);
    v366[2] = *(_QWORD*)(v8 + 1072);
    v366[0] = v131;
  }
  v367 = *(_BYTE*)(v8 + 1080);
  v365 = v29 + 16;
  v132 = *(_QWORD*)(v8 + 1084);
  v369 = 0;
  v371 = 0;
  v370 = 0;
  v133 = *(_QWORD*)(v8 + 1096);
  v368 = v132;
  v134 = *(_QWORD*)(v8 + 1104);
  v135 = v134 - v133;
  if (v134 != v133) {
    if (0xAAAAAAAAAAAAAAABLL * (v135 >> 2) > 0x1555555555555555LL) {
      goto LABEL_166;
    }
    v136 = fw_memory_HeapManager_Allocate(*v13, v135, 16, 0);
    v137 = v136 + v135;
    v369 = v136;
    v370 = v136;
    v371 = v136 + v135;
    memcpy(v136, v133, v135);
    v370 = v137;
  }
  v138 = *(_DWORD*)(v8 + 1120);
  v365 = v37 + 16;
  v373 = v17 + 16;
  v7 = v374;
  v139 = *(_BYTE*)(v8 + 1136);
  v372 = v138;
  if ((v139 & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v374, *(_QWORD*)(v8 + 1152),
                                                *(_QWORD*)(v8 + 1144));
  }
  else {
    v374[1] = *(_QWORD*)(v8 + 1144);
    v140 = *(_QWORD*)(v8 + 1136);
    v374[2] = *(_QWORD*)(v8 + 1152);
    v374[0] = v140;
  }
  v375 = *(_BYTE*)(v8 + 1160);
  v373 = v29 + 16;
  v141 = *(_QWORD*)(v8 + 1164);
  v377 = 0;
  v379 = 0;
  v378 = 0;
  v142 = *(_QWORD*)(v8 + 1176);
  v376 = v141;
  v143 = *(_QWORD*)(v8 + 1184);
  v144 = v143 - v142;
  if (v143 != v142) {
    if (0xAAAAAAAAAAAAAAABLL * (v144 >> 2) > 0x1555555555555555LL) {
      goto LABEL_166;
    }
    v145 = fw_memory_HeapManager_Allocate(*v13, v144, 16, 0);
    v146 = v145 + v144;
    v377 = v145;
    v378 = v145;
    v379 = v145 + v144;
    memcpy(v145, v142, v144);
    v378 = v146;
  }
  v147 = *(_DWORD*)(v8 + 1200);
  v373 = v37 + 16;
  v381 = (__int64*)(v17 + 16);
  v7 = v382;
  v148 = *(_BYTE*)(v8 + 1216);
  v380 = v147;
  if ((v148 & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v382, *(_QWORD*)(v8 + 1232),
                                                *(_QWORD*)(v8 + 1224));
  }
  else {
    v382[1] = *(_QWORD*)(v8 + 1224);
    v149 = *(_QWORD*)(v8 + 1216);
    v382[2] = *(_QWORD*)(v8 + 1232);
    v382[0] = v149;
  }
  v383 = *(_BYTE*)(v8 + 1240);
  v381 = GameData_212e568[0] + 2;
  v150 = *(_WORD*)(v8 + 1241);
  v385 = 0;
  v387 = 0;
  v386 = 0;
  v151 = *(_QWORD*)(v8 + 1248);
  v384 = v150;
  v152 = *(_QWORD*)(v8 + 1256);
  v153 = v152 - v151;
  if (v152 != v151) {
    if (v153 < 0) {
      goto LABEL_168;
    }
    v154 = fw_memory_HeapManager_Allocate(*v13, v152 - v151, 16, 0);
    v155 = v154 + v153;
    v385 = v154;
    v386 = v154;
    v387 = v154 + v153;
    memcpy(v154, v151, v153 - 2);
    v386 = v155;
  }
  v388 = *(_BYTE*)(v8 + 1272);
  v381 = GameData_212e560[0] + 2;
  v389 = (__int64*)(v17 + 16);
  v7 = v390;
  if ((*(_BYTE*)(v8 + 1288) & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v390, *(_QWORD*)(v8 + 1304),
                                                *(_QWORD*)(v8 + 1296));
  }
  else {
    v156 = *(_QWORD*)(v8 + 1288);
    v157 = *(_QWORD*)(v8 + 1304);
    v390[1] = *(_QWORD*)(v8 + 1296);
    v390[2] = v157;
    v390[0] = v156;
  }
  v391 = *(_BYTE*)(v8 + 1312);
  v158 = *(_QWORD*)(v8 + 1352);
  v159 = *(_QWORD*)(v8 + 1328);
  v160 = *(_QWORD*)(v8 + 1344);
  v389 = GameData_212e578[0] + 2;
  v161 = *(_QWORD*)(v8 + 1336);
  v396 = 0;
  v398 = 0;
  v397 = 0;
  v394 = v160;
  v392 = v159;
  v395 = v158;
  v162 = *(_QWORD*)(v8 + 1360);
  v393 = v161;
  v163 = *(_QWORD*)(v8 + 1368);
  v164 = v163 - v162;
  if (v163 != v162) {
    if (0xAAAAAAAAAAAAAAABLL * (v164 >> 4) > 0x555555555555555LL) {
      goto LABEL_167;
    }
    v165 = fw_memory_HeapManager_Allocate(*v13, v164, 16, 0);
    v166 = v165 + v164;
    v396 = v165;
    v397 = v165;
    v398 = v165 + v164;
    memcpy(v165, v162, v164);
    v397 = v166;
  }
  v400 = *(_QWORD*)(v8 + 1400);
  v399 = *(_QWORD*)(v8 + 1392);
  v389 = GameData_212e570[0] + 2;
  v401 = (__int64*)(v17 + 16);
  v7 = v402;
  if ((*(_BYTE*)(v8 + 1416) & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v402, *(_QWORD*)(v8 + 1432),
                                                *(_QWORD*)(v8 + 1424));
  }
  else {
    v167 = *(_QWORD*)(v8 + 1416);
    v168 = *(_QWORD*)(v8 + 1432);
    v402[1] = *(_QWORD*)(v8 + 1424);
    v402[2] = v168;
    v402[0] = v167;
  }
  v403 = *(_BYTE*)(v8 + 1440);
  v401 = GameData_212e568[0] + 2;
  v169 = *(_WORD*)(v8 + 1441);
  v405 = 0;
  v407 = 0;
  v406 = 0;
  v170 = *(_QWORD*)(v8 + 1448);
  v404 = v169;
  v171 = *(_QWORD*)(v8 + 1456);
  v172 = v171 - v170;
  if (v171 != v170) {
    if ((v172 & 0x8000000000000000LL) == 0) {
      v173 = fw_memory_HeapManager_Allocate(*v13, v171 - v170, 16, 0);
      v174 = v173 + v172;
      v405 = v173;
      v406 = v173;
      v407 = v173 + v172;
      memcpy(v173, v170, v172 - 2);
      v406 = v174;
      goto LABEL_109;
    }
  LABEL_168:
    GameRoutine_abae00(v7);
  }
LABEL_109:
  v408 = *(_BYTE*)(v8 + 1472);
  v401 = GameData_212e560[0] + 2;
  v409 = (__int64*)(v17 + 16);
  v7 = v410;
  if ((*(_BYTE*)(v8 + 1496) & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v410, *(_QWORD*)(v8 + 1512),
                                                *(_QWORD*)(v8 + 1504));
  }
  else {
    v175 = *(_QWORD*)(v8 + 1496);
    v176 = *(_QWORD*)(v8 + 1512);
    v410[1] = *(_QWORD*)(v8 + 1504);
    v410[2] = v176;
    v410[0] = v175;
  }
  v411 = *(_BYTE*)(v8 + 1520);
  v177 = *(_QWORD*)(v8 + 1560);
  v178 = *(_QWORD*)(v8 + 1536);
  v179 = *(_QWORD*)(v8 + 1552);
  v409 = GameData_212e578[0] + 2;
  v180 = *(_QWORD*)(v8 + 1544);
  v416 = 0;
  v418 = 0;
  v417 = 0;
  v414 = v179;
  v412 = v178;
  v415 = v177;
  v181 = *(_QWORD*)(v8 + 1568);
  v413 = v180;
  v182 = *(_QWORD*)(v8 + 1576);
  v183 = v182 - v181;
  if (v182 != v181) {
    if (0xAAAAAAAAAAAAAAABLL * (v183 >> 4) > 0x555555555555555LL) {
      goto LABEL_167;
    }
    v184 = fw_memory_HeapManager_Allocate(*v13, v183, 16, 0);
    v185 = v184 + v183;
    v416 = v184;
    v417 = v184;
    v418 = v184 + v183;
    memcpy(v184, v181, v183);
    v417 = v185;
  }
  v420 = *(_QWORD*)(v8 + 1608);
  v419 = *(_QWORD*)(v8 + 1600);
  v409 = GameData_212e570[0] + 2;
  v421 = (__int64*)(v17 + 16);
  v7 = v422;
  if ((*(_BYTE*)(v8 + 1624) & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v422, *(_QWORD*)(v8 + 1640),
                                                *(_QWORD*)(v8 + 1632));
  }
  else {
    v186 = *(_QWORD*)(v8 + 1624);
    v187 = *(_QWORD*)(v8 + 1640);
    v422[1] = *(_QWORD*)(v8 + 1632);
    v422[2] = v187;
    v422[0] = v186;
  }
  v423 = *(_BYTE*)(v8 + 1648);
  v188 = *(_QWORD*)(v8 + 1688);
  v189 = *(_QWORD*)(v8 + 1664);
  v190 = *(_QWORD*)(v8 + 1680);
  v421 = GameData_212e578[0] + 2;
  v191 = *(_QWORD*)(v8 + 1672);
  v428 = 0;
  v430 = 0;
  v429 = 0;
  v426 = v190;
  v424 = v189;
  v427 = v188;
  v192 = *(_QWORD*)(v8 + 1696);
  v425 = v191;
  v193 = *(_QWORD*)(v8 + 1704);
  v194 = v193 - v192;
  if (v193 != v192) {
    if (0xAAAAAAAAAAAAAAABLL * (v194 >> 4) > 0x555555555555555LL) {
      goto LABEL_167;
    }
    v195 = fw_memory_HeapManager_Allocate(*v13, v194, 16, 0);
    v196 = v195 + v194;
    v428 = v195;
    v429 = v195;
    v430 = v195 + v194;
    memcpy(v195, v192, v194);
    v429 = v196;
  }
  v432 = *(_QWORD*)(v8 + 1736);
  v431 = *(_QWORD*)(v8 + 1728);
  v421 = GameData_212e570[0] + 2;
  v433 = (__int64*)(v17 + 16);
  v7 = v434;
  if ((*(_BYTE*)(v8 + 1752) & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v434, *(_QWORD*)(v8 + 1768),
                                                *(_QWORD*)(v8 + 1760));
  }
  else {
    v197 = *(_QWORD*)(v8 + 1752);
    v198 = *(_QWORD*)(v8 + 1768);
    v434[1] = *(_QWORD*)(v8 + 1760);
    v434[2] = v198;
    v434[0] = v197;
  }
  v435 = *(_BYTE*)(v8 + 1776);
  v199 = *(_QWORD*)(v8 + 1816);
  v200 = *(_QWORD*)(v8 + 1792);
  v201 = *(_QWORD*)(v8 + 1808);
  v433 = GameData_212e578[0] + 2;
  v202 = *(_QWORD*)(v8 + 1800);
  v440 = 0;
  v442 = 0;
  v441 = 0;
  v438 = v201;
  v436 = v200;
  v439 = v199;
  v203 = *(_QWORD*)(v8 + 1824);
  v437 = v202;
  v204 = *(_QWORD*)(v8 + 1832);
  v205 = v204 - v203;
  if (v204 != v203) {
    if (0xAAAAAAAAAAAAAAABLL * (v205 >> 4) <= 0x555555555555555LL) {
      v206 = fw_memory_HeapManager_Allocate(*v13, v205, 16, 0);
      v207 = v206 + v205;
      v440 = v206;
      v441 = v206;
      v442 = v206 + v205;
      memcpy(v206, v203, v205);
      v441 = v207;
      goto LABEL_127;
    }
  LABEL_167:
    GameRoutine_abc340(v7);
  }
LABEL_127:
  v444 = *(_QWORD*)(v8 + 1864);
  v443 = *(_QWORD*)(v8 + 1856);
  v433 = GameData_212e570[0] + 2;
  v445 = v17 + 16;
  v7 = v446;
  if ((*(_BYTE*)(v8 + 1880) & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v446, *(_QWORD*)(v8 + 1896),
                                                *(_QWORD*)(v8 + 1888));
  }
  else {
    v208 = *(_QWORD*)(v8 + 1880);
    v209 = *(_QWORD*)(v8 + 1896);
    v446[1] = *(_QWORD*)(v8 + 1888);
    v446[2] = v209;
    v446[0] = v208;
  }
  v447 = *(_BYTE*)(v8 + 1904);
  v445 = v29 + 16;
  v210 = *(_QWORD*)(v8 + 1908);
  v449 = 0;
  v451 = 0;
  v450 = 0;
  v211 = *(_QWORD*)(v8 + 1920);
  v448 = v210;
  v212 = *(_QWORD*)(v8 + 1928);
  v213 = v212 - v211;
  if (v212 != v211) {
    if (0xAAAAAAAAAAAAAAABLL * (v213 >> 2) > 0x1555555555555555LL) {
      goto LABEL_166;
    }
    v214 = fw_memory_HeapManager_Allocate(*v13, v213, 16, 0);
    v215 = v214 + v213;
    v449 = v214;
    v450 = v214;
    v451 = v214 + v213;
    memcpy(v214, v211, v213);
    v450 = v215;
  }
  v216 = *(_DWORD*)(v8 + 1944);
  v445 = v37 + 16;
  v453 = v17 + 16;
  v7 = v454;
  v217 = *(_BYTE*)(v8 + 1960);
  v452 = v216;
  if ((v217 & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v454, *(_QWORD*)(v8 + 1976),
                                                *(_QWORD*)(v8 + 1968));
  }
  else {
    v218 = *(_QWORD*)(v8 + 1960);
    v219 = *(_QWORD*)(v8 + 1976);
    v454[1] = *(_QWORD*)(v8 + 1968);
    v454[2] = v219;
    v454[0] = v218;
  }
  v455 = *(_BYTE*)(v8 + 1984);
  v453 = v29 + 16;
  v220 = *(_QWORD*)(v8 + 1988);
  v457 = 0;
  v459 = 0;
  v458 = 0;
  v221 = *(_QWORD*)(v8 + 2000);
  v456 = v220;
  v222 = *(_QWORD*)(v8 + 2008);
  v223 = v222 - v221;
  if (v222 != v221) {
    if (0xAAAAAAAAAAAAAAABLL * (v223 >> 2) > 0x1555555555555555LL) {
      goto LABEL_166;
    }
    v224 = fw_memory_HeapManager_Allocate(*v13, v223, 16, 0);
    v225 = v224 + v223;
    v457 = v224;
    v458 = v224;
    v459 = v224 + v223;
    memcpy(v224, v221, v223);
    v458 = v225;
  }
  v226 = *(_DWORD*)(v8 + 2024);
  v453 = v37 + 16;
  v461 = v17 + 16;
  v7 = v462;
  v227 = *(_BYTE*)(v8 + 2040);
  v460 = v226;
  if ((v227 & 1) != 0) {
    v7 = (_QWORD*)fw_text_String_CopyTerminated(v462, *(_QWORD*)(v8 + 2056),
                                                *(_QWORD*)(v8 + 2048));
  }
  else {
    v228 = *(_QWORD*)(v8 + 2040);
    v229 = *(_QWORD*)(v8 + 2056);
    v462[1] = *(_QWORD*)(v8 + 2048);
    v462[2] = v229;
    v462[0] = v228;
  }
  v463 = *(_BYTE*)(v8 + 2064);
  v461 = v29 + 16;
  v230 = *(_QWORD*)(v8 + 2068);
  v465 = 0;
  v467 = 0;
  v466 = 0;
  v231 = *(_QWORD*)(v8 + 2080);
  v464 = v230;
  v232 = *(_QWORD*)(v8 + 2088);
  v233 = v232 - v231;
  if (v232 != v231) {
    if (0xAAAAAAAAAAAAAAABLL * (v233 >> 2) <= 0x1555555555555555LL) {
      v234 = fw_memory_HeapManager_Allocate(*v13, v233, 16, 0);
      v235 = v234 + v233;
      v465 = v234;
      v466 = v234;
      v467 = v234 + v233;
      memcpy(v234, v231, v233);
      v466 = v235;
      goto LABEL_145;
    }
  LABEL_166:
    GameRoutine_aa0e00(v7);
  }
LABEL_145:
  v236 = *(_DWORD*)(v8 + 2104);
  v461 = v37 + 16;
  v237 = 120;
  v468 = v236;
  if (HIBYTE(v268) != 0) {
    v237 = 89;
  }
  if ((*((_BYTE*)&v261[-1] + v237) & 1) != 0) {
    v239 = *(__int64 (**)())v259;
    v238 = *(_QWORD*)(v259 + 8);
    v240 = *(_DWORD*)(v259 + 96);
    v241 = fw_memory_HeapManager_Allocate(*v13, 240, 16, 0);
    *(_QWORD*)(v241 + 32) = 0;
    *(_QWORD*)(v241 + 40) = 0;
    *(_QWORD*)(v241 + 48) = 0;
    *(_QWORD*)(v241 + 56) = 0;
    *(_QWORD*)(v241 + 64) = 0;
    *(_QWORD*)(v241 + 72) = 0;
    *(_DWORD*)(v241 + 80) = v240;
    v470 = GameData_1fcb600;
    v471 = &v469;
    *(_QWORD*)(v241 + 192) = GameData_1fcb690;
    *(_QWORD*)(v241 + 88) = 0;
    *(_QWORD*)(v241 + 96) = 0;
    *(_QWORD*)(v241 + 104) = 0;
    *(_QWORD*)(v241 + 112) = 0;
    *(_QWORD*)(v241 + 120) = 0;
    *(_QWORD*)(v241 + 128) = 0;
    v473 = &v470;
    *(_QWORD*)(v241 + 224) = v241 + 192;
    *(_BYTE*)(v241 + 8) = 14;
    v472 = v258;
    *(_QWORD*)(v241 + 200) = v258;
    strcpy((char*)(v241 + 9), "FogPass");
    *(_BYTE*)(v241 + 84) = 1;
    *(_QWORD*)v241 = GameData_1fcb720;
    *(_QWORD*)(v241 + 144) = GameData_1fcb600;
    *(_QWORD*)(v241 + 176) = v241 + 144;
    v242 = v472;
    *(_QWORD*)(v241 + 152) = v471;
    *(_QWORD*)(v241 + 160) = v242;
    v244 = *(__int64**)(v259 + 8);
    v243 = *(_QWORD*)(v259 + 16);
    if ((unsigned __int64)v244 >= v243) {
      v246 = *(__int64 (**)())v259;
      v247 = (__int64)v244 - *(_QWORD*)v259;
      v248 = (v247 >> 3) + 1;
      if (v248 >> 61 != 0) {
        GameRoutine_b32f30();
      }
      v249 = v243 - (_QWORD)v246;
      if (v249 >> 2 > v248) {
        v248 = v249 >> 2;
      }
      if ((unsigned __int64)v249 >= 0x7FFFFFFFFFFFFFF8LL) {
        v250 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v250 = v248;
      }
      if (v250 != 0) {
        if (v250 >> 61 != 0) {
          GameRoutine_60a210(v241);
        }
        v251 = v241;
        v252 = fw_memory_HeapManager_Allocate(*v13, 8 * v250, 16, 0);
        v241 = v251;
      }
      else {
        v252 = 0;
      }
      v253 = v252 + 8 * v250;
      v254 = v252 + v247 - 8 * (v247 >> 3);
      *(_QWORD*)(v252 + v247) = v241;
      v245 = v252 + v247 + 8;
      memcpy(v254, v246, v247);
      *(_QWORD*)v259 = v254;
      *(_QWORD*)(v259 + 8) = v245;
      *(_QWORD*)(v259 + 16) = v253;
      if (v246 != nullptr) {
        v255 = 128;
        if (*(_QWORD*)(*v13 + 200LL) == 0) {
          v255 = 56;
        }
        nn_mem_StandardAllocator_Free(*v13 + v255, v246);
      }
    }
    else {
      *v244 = v241;
      v245 = (__int64)(v244 + 1);
    }
    *(_QWORD*)(v259 + 8) = v245;
    v256 = *(_QWORD***)(v245 - 8);
    v470 = (__int64 (**)())v259;
    v471 = v256;
    ((void (*)(_QWORD**, __int64 (***)()))(*v256)[2])(v256, &v470);
    *v469 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v259 +
                                  ((v238 - (_QWORD)v239) & 0x7FFFFFFF8LL)) +
                       128LL);
  }
  return FogSetting_Destructor(&v260);
}

__int64 gfxa_MainPassImageProcess_SetupHeightFogPass(__int64 result, __int64 a2,
                                                     _QWORD* a3, _QWORD* a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  signed __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  _QWORD* v38;
  _QWORD* v39;
  struct {
    _QWORD v40[4];
    _QWORD* v41;
  } v40_;

  v4 = *a4;
  v38 = a4;
  v39 = a3;
  v5 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 112LL);
  v37 = v5;
  if (v5 != 0) {
    v6 = 120;
    if (*(_BYTE*)(v5 + 90) != 0) {
      v6 = 89;
    }
    if ((*(_BYTE*)(v5 + v6) & 1) != 0) {
      v8 = *(_QWORD*)a2;
      v7 = *(_QWORD*)(a2 + 8);
      v9 = *(_DWORD*)(a2 + 96);
      v11 = result;
      v12 = (__int64*)fw_memory_g_heap_manager_ptr;
      v13 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 384, 16, 0);
      v14 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v12, 40, 16, 0);
      *(_QWORD*)(v13 + 32) = 0;
      *(_QWORD*)(v13 + 40) = 0;
      *(_QWORD*)(v13 + 48) = 0;
      *(_QWORD*)(v13 + 56) = 0;
      *(_QWORD*)(v13 + 64) = 0;
      *(_QWORD*)(v13 + 72) = 0;
      v14[2] = &v39;
      v14[3] = &v37;
      *v14 = GameData_1fcb768;
      v14[1] = v11;
      *(_BYTE*)(v13 + 8) = 26;
      *(_DWORD*)(v13 + 80) = v9;
      *(_QWORD*)(v13 + 240) = 0;
      *(_QWORD*)(v13 + 144) = 0;
      *(_QWORD*)(v13 + 152) = 0;
      v14[4] = &v38;
      v15 = *v12;
      v40_.v40[0] = GameData_1fcb7f8;
      v40_.v40[1] = v11;
      *(_QWORD*)(v13 + 128) = 0;
      *(_QWORD*)(v13 + 136) = 0;
      *(_QWORD*)(v13 + 112) = 0;
      *(_QWORD*)(v13 + 120) = 0;
      *(_QWORD*)(v13 + 96) = 0;
      *(_QWORD*)(v13 + 104) = 0;
      *(_QWORD*)(v13 + 256) = 0;
      *(_QWORD*)(v13 + 272) = 0;
      v40_.v41 = v40_.v40;
      strcpy((char*)(v13 + 9), "HeightFogPass");
      *(_BYTE*)(v13 + 84) = 1;
      *(_QWORD*)v13 = GameData_1fcb888;
      *(_DWORD*)(v13 + 248) = -1;
      *(_DWORD*)(v13 + 264) = -1;
      v16 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v15, 40, 16, 0);
      v17 = v14[1];
      v18 = v14[2];
      *(_QWORD*)(v13 + 320) = v16;
      *v16 = GameData_1fcb768;
      v16[1] = v17;
      v19 = v14[3];
      v20 = v14[4];
      v16[2] = v18;
      v16[3] = v19;
      v16[4] = v20;
      v21 = v40_.v41;
      if (v40_.v41 != nullptr) {
        if (v40_.v41 == v40_.v40) {
          *(_QWORD*)(v13 + 368) = v13 + 336;
          (*(void (**)(_QWORD*))(*v21 + 24LL))(v21);
        }
        else {
          *(_QWORD*)(v13 + 368) =
              (*(__int64 (**)(__int64))(*v40_.v41 + 16LL))((__int64)v40_.v41);
        }
        if (v40_.v41 == v40_.v40) {
          v22 = 32;
          goto LABEL_14;
        }
        if (v40_.v41 != nullptr) {
          v22 = 40;
        LABEL_14:
          (*(void (**)(__int64))(*v40_.v41 + v22))((__int64)v40_.v41);
        }
      }
      else {
        *(_QWORD*)(v13 + 368) = 0;
      }
      v23 = 128;
      if (*(_QWORD*)(*v12 + 200) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v12 + v23, (__int64)v14);
      v25 = *(__int64**)(a2 + 8);
      v24 = *(_QWORD*)(a2 + 16);
      if ((unsigned __int64)v25 >= v24) {
        v27 = *(_QWORD*)a2;
        v28 = (signed __int64)v25 - *(_QWORD*)a2;
        v29 = (v28 >> 3) + 1;
        if (v29 >> 61 != 0) {
          GameRoutine_b32f30_alt2();
        }
        v30 = v24 - v27;
        if (v30 >> 2 > v29) {
          v29 = v30 >> 2;
        }
        if ((unsigned __int64)v30 >= 0x7FFFFFFFFFFFFFF8LL) {
          v31 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v31 = v29;
        }
        if (v31 != 0) {
          if (v31 >> 61 != 0) {
            GameRoutine_60a210_alt1();
          }
          v32 = fw_memory_HeapManager_Allocate_alt1(*v12, 8 * v31, 16, 0);
        }
        else {
          v32 = 0;
        }
        v33 = v32 + 8 * v31;
        v34 = v32 + v28 - 8 * (v28 >> 3);
        *(_QWORD*)(v32 + v28) = v13;
        v26 = v32 + v28 + 8;
        memcpy_alt1(v34, v27, v28);
        *(_QWORD*)a2 = v34;
        *(_QWORD*)(a2 + 8) = v26;
        *(_QWORD*)(a2 + 16) = v33;
        if (v27 != 0) {
          v35 = 128;
          if (*(_QWORD*)(*v12 + 200) == 0) {
            v35 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v12 + v35, v27);
        }
      }
      else {
        *v25 = v13;
        v26 = (__int64)(v25 + 1);
      }
      *(_QWORD*)(a2 + 8) = v26;
      v36 = *(_QWORD*)(v26 - 8);
      v40_.v40[0] = a2;
      v40_.v40[1] = v36;
      result = (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v36 + 16LL))(
          v36, v40_.v40);
      *v39 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v7 - v8) & 0x7FFFFFFF8LL)) +
                        272LL);
    }
  }
  return result;
}

__int64 gfxa_MainPassImageProcess_SetupLensFlareSystemPass(
    __int64 result, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5;
  __int64 v8;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 (***v20)();
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64 (*v27)();
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 (*v38)();
  __int64 v39;
  int v40;
  __int64 (**v41)();
  __int64 v42;
  __int64 v43;
  __int64 (***v44)();

  if (a5 == 0) {
    return result;
  }
  v5 = result;
  v8 = a5;
  v10 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a4 + 8LL) + 272LL);
  v38 = *(__int64 (**)())a2;
  v39 = *(_QWORD*)(a2 + 8);
  v40 = *(_DWORD*)(a2 + 96);
  v11 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v12 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       224, 16, 0);
  v13 = fw_memory_HeapManager_Allocate(*v11, 40, 16, 0);
  *(_DWORD*)(v13 + 32) = a5;
  *(_QWORD*)(v13 + 16) = v10;
  *(_QWORD*)(v13 + 24) = a3;
  v37 = a3;
  *(_BYTE*)(v12 + 8) = 30;
  *(_QWORD*)v13 = GameData_1fcd758;
  *(_QWORD*)(v13 + 8) = v5;
  v14 = *v11;
  v42 = v5;
  v43 = v8;
  v44 = &v41;
  v41 = GameData_1fcd7e8;
  *(_QWORD*)(v12 + 32) = 0;
  *(_QWORD*)(v12 + 40) = 0;
  *(_QWORD*)(v12 + 48) = 0;
  *(_QWORD*)(v12 + 56) = 0;
  *(_QWORD*)(v12 + 64) = 0;
  *(_QWORD*)(v12 + 72) = 0;
  *(_QWORD*)(v12 + 88) = 0;
  *(_DWORD*)(v12 + 96) = 0;
  *(_QWORD*)(v12 + 104) = 0;
  *(_QWORD*)(v12 + 112) = 0;
  strcpy((char*)(v12 + 9), "LensFlareSystem");
  *(_DWORD*)(v12 + 80) = v40;
  *(_BYTE*)(v12 + 84) = 1;
  *(_QWORD*)v12 = GameData_1fcd878;
  v15 = (_QWORD*)fw_memory_HeapManager_Allocate(v14, 40, 16, 0);
  v16 = *(_QWORD*)(v13 + 8);
  v17 = *(_QWORD*)(v13 + 16);
  *(_QWORD*)(v12 + 160) = v15;
  *v15 = GameData_1fcd758;
  v15[1] = v16;
  v18 = *(_QWORD*)(v13 + 24);
  v19 = *(_QWORD*)(v13 + 32);
  v15[2] = v17;
  v15[3] = v18;
  v15[4] = v19;
  v20 = v44;
  if (v44 != nullptr) {
    if (v44 == &v41) {
      *(_QWORD*)(v12 + 208) = v12 + 176;
      ((void (*)(__int64 (***)()))(*v20)[3])(v20);
    }
    else {
      *(_QWORD*)(v12 + 208) = (*v44)[2]();
    }
    if (v44 == &v41) {
      v21 = 4;
      goto LABEL_11;
    }
    if (v44 != nullptr) {
      v21 = 5;
    LABEL_11:
      (*v44)[v21]();
    }
  }
  else {
    *(_QWORD*)(v12 + 208) = 0;
  }
  v22 = 128;
  if (*(_QWORD*)(*v11 + 200LL) == 0) {
    v22 = 56;
  }
  v23 = nn_mem_StandardAllocator_Free(*v11 + v22, v13);
  v25 = *(__int64**)(a2 + 8);
  v24 = *(_QWORD*)(a2 + 16);
  if ((unsigned __int64)v25 >= v24) {
    v27 = *(__int64 (**)())a2;
    v28 = (__int64)v25 - *(_QWORD*)a2;
    v29 = (v28 >> 3) + 1;
    if (v29 >> 61 != 0) {
      GameRoutine_b32f30_alt1(v23);
    }
    v30 = v24 - (_QWORD)v27;
    if (v30 >> 2 > v29) {
      v29 = v30 >> 2;
    }
    if ((unsigned __int64)v30 >= 0x7FFFFFFFFFFFFFF8LL) {
      v31 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v31 = v29;
    }
    if (v31 != 0) {
      if (v31 >> 61 != 0) {
        GameRoutine_60a210(v23);
      }
      v32 = fw_memory_HeapManager_Allocate(*v11, 8 * v31, 16, 0);
    }
    else {
      v32 = 0;
    }
    v33 = v32 + 8 * v31;
    v34 = v32 + v28 - 8 * (v28 >> 3);
    *(_QWORD*)(v32 + v28) = v12;
    v26 = v32 + v28 + 8;
    memcpy(v34, v27, v28);
    *(_QWORD*)a2 = v34;
    *(_QWORD*)(a2 + 8) = v26;
    *(_QWORD*)(a2 + 16) = v33;
    if (v27 != nullptr) {
      v35 = 128;
      if (*(_QWORD*)(*v11 + 200LL) == 0) {
        v35 = 56;
      }
      nn_mem_StandardAllocator_Free(*v11 + v35, v27);
    }
  }
  else {
    *v25 = v12;
    v26 = (__int64)(v25 + 1);
  }
  *(_QWORD*)(a2 + 8) = v26;
  v36 = *(_QWORD*)(v26 - 8);
  v41 = (__int64 (**)())a2;
  v42 = v36;
  result = (*(__int64 (**)(__int64, __int64 (***)()))(*(_QWORD*)v36 + 16LL))(
      v36, &v41);
  *(_QWORD*)(v37 + 440) =
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 +
                            ((v39 - (_QWORD)v38) & 0x7FFFFFFF8LL)) +
                 112LL);
  return result;
}

__int64 gfxa_MainPassImageProcess_SetupHeightFogPass_lambda0_Invoke(
    __int64 a1, float32x4_t** a2, __int64 a3)
{

#pragma clang fp contract(off)
  _QWORD* v3;
  __int64 v5;
  __int64 v6;
  bool v7;
  __int64* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  bool v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  float32x4_t v23;
  int8x16_t v24;
  int8x16_t v25;
  int8x16_t v26;
  float v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  _QWORD* v33;
  __int64 v34;
  unsigned __int32 v35;
  unsigned __int32 v36;
  __int64 v37;
  unsigned __int32 v38;
  __int64 v39;
  unsigned __int32 v40;
  __int64 v41;
  unsigned __int32 v42;
  __int64 v43;
  unsigned __int32 v44;
  __int64 v45;
  unsigned __int32 v46;
  __int64 v47;
  float v48;
  __int64 v49;
  float v50;
  float v51;
  __int64 v52;
  unsigned __int64 v53;
  unsigned __int32 v54;
  unsigned __int32 v55;
  __int64 v56;
  unsigned __int32 v57;
  __int64 v58;
  unsigned __int32 v59;
  __int64 v60;
  unsigned __int32 v61;
  __int64 v62;
  unsigned __int8 v63;
  __int64 v64;
  float v65;
  unsigned __int32 v66;
  __int64 v67;
  unsigned __int8 v68;
  float32x4_t* v69;
  __int64* v70;
  __int64 result;
  unsigned __int32 v72;
  unsigned __int32 v73;
  unsigned __int32 v74;
  unsigned __int32 v75;
  unsigned __int32 v76;
  float v77;
  int v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  float32x4_t v85;
  struct {
    __int64 v87;
    int v88;
    int v89;
    __int64 v90;
    char v91;
    char gap129_[3];
    int v92;
  } v87_;

  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = *(_QWORD**)(a1 + 8);
  v5 = *v3 + 13304LL;
  v6 = *(_QWORD*)(v3[1] + 288LL);
  v7 = *(_BYTE*)(*v3 + 16700LL) == 0;
  v8 = *(__int64**)(a1 + 24);
  v9 = (_QWORD*)(*(_QWORD*)(*v3 + 16672LL) + 24LL);
  v10 = *(_QWORD*)(v6 + 792);
  if (v7) {
    v9 = (_QWORD*)v5;
  }
  v11 = *v8;
  v12 = **(_QWORD***)(a1 + 32);
  v7 = *(_BYTE*)(*v8 + 1234) == 0;
  v13 = 1264;
  if (!v7) {
    v13 = 1233;
  }
  v14 = 1;
  if ((*(_BYTE*)(v11 + v13) & 1) == 0) {
    v14 = 4;
  }
  if (v10 == 0) {
    goto LABEL_18;
  }
  v15 = v6 + 792;
  v16 = *(_DWORD*)(v12[3] + 36LL);
  do {
    v17 = *(_DWORD*)(v10 + 32);
    v18 = v17 < v16;
    if (v17 >= v16) {
      v19 = 0;
    }
    else {
      v19 = 8;
    }
    if (!v18) {
      v15 = v10;
    }
    v10 = *(_QWORD*)(v10 + v19);
  } while (v10 != 0);
  if (v15 != v6 + 792 && v16 >= *(_DWORD*)(v15 + 32)) {
    v20 = *(_QWORD*)(v15 + 40);
  }
  else {
  LABEL_18:
    v20 = 0;
  }
  v21 = **(__int64***)(a1 + 16);
  v22 = 720;
  if (*(_BYTE*)(v11 + 672) != 0) {
    v22 = 656;
  }
  v23 = *(float32x4_t*)(v11 + v22);
  if ((unsigned int)(*(_DWORD*)(*game_g_frame_clock_ptr[0] + 13240) - 3) <= 3) {
    v24 = vmulq_f32(v23, COERCE_AS(float32x4_t, GameData_1a83620));
    LANES128(v24).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v24, v24, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0])))
            .n64_u64[0];
    v25 = vmulq_f32(v23, COERCE_AS(float32x4_t, GameData_1a834b0));
    LANES128(v25).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v25, v25, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
            .n64_u64[0];
    v26 = vmulq_f32(v23, COERCE_AS(float32x4_t, GameData_1a82d20));
    LANES128(v26).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v26, v26, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
            .n64_u64[0];
    LANES128(v23).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0])))
            .n64_u32[0] |
        ((unsigned __int64)LANES64_OF(
             vpadd_f32(COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
             .n64_u32[0]
         << 32);
    LANES128(v23).n128_u64[1] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
            .n64_u32[0];
  }
  v80 = *v21;
  v81 = v21[v14];
  v82 = v21[63];
  v83 = v21[65];
  v84 = v21[16];
  if (*(_BYTE*)(v11 + 1088) == 1) {
    v27 = *(float*)(v11 + 1084);
  }
  else {
    v28 = *(_QWORD*)(*(_QWORD*)(*v12 + 8LL) + 8LL);
    v29 = 952;
    if (*(_BYTE*)(v28 + 920) != 0) {
      v29 = 916;
    }
    v27 = *(float*)(v28 + v29);
  }
  v30 = 120;
  if (*(_BYTE*)(v11 + 90) != 0) {
    v30 = 89;
  }
  v85 = v23;
  if ((*(_BYTE*)(v11 + v30) & 1) != 0) {
    v31 = 1040;
    if (*(_BYTE*)(v11 + 1008) != 0) {
      v31 = 1004;
    }
    v32 = *(_DWORD*)(v11 + v31);
    if (v20 != 0 && v32 == 0) {
      v33 = (_QWORD*)(v20 + 808);
      goto LABEL_38;
    }
  }
  else {
    v32 = 3;
  }
  v33 = (_QWORD*)(*(_QWORD*)(v12[2] + 32LL) + 24LL);
LABEL_38:
  v78 = *v9;
  v79 = HIDWORD(*v9);
  v34 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v33 + 40LL))(*v33),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v36 = v35;
  v37 = 280;
  v77 = v27 + 0x1.0000000000000p+0f;
  if (*(_BYTE*)(v11 + 248) != 0) {
    v37 = 244;
  }
  v38 = *(_DWORD*)(v11 + v37);
  v39 = 360;
  v76 = v38;
  if (*(_BYTE*)(v11 + 328) != 0) {
    v39 = 324;
  }
  v40 = *(_DWORD*)(v11 + v39);
  v41 = 440;
  v75 = v40;
  if (*(_BYTE*)(v11 + 408) != 0) {
    v41 = 404;
  }
  v42 = *(_DWORD*)(v11 + v41);
  v43 = 600;
  v74 = v42;
  if (*(_BYTE*)(v11 + 568) != 0) {
    v43 = 564;
  }
  v44 = *(_DWORD*)(v11 + v43);
  v45 = 520;
  v73 = v44;
  if (*(_BYTE*)(v11 + 488) != 0) {
    v45 = 484;
  }
  v46 = *(_DWORD*)(v11 + v45);
  v47 = 1344;
  v72 = v46;
  if (*(_BYTE*)(v11 + 1312) != 0) {
    v47 = 1308;
  }
  v48 = *(float*)(v11 + v47);
  v49 = 1424;
  if (*(_BYTE*)(v11 + 1392) != 0) {
    v49 = 1388;
  }
  v50 = v48 + 0x1.0000000000000p+0f;
  v51 = exp2f(*(float*)(v11 + v49)),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v52 = 1504;
  v53 = *(_QWORD*)(v6 + 576);
  v54 = *(_DWORD*)(v6 + 584);
  if (*(_BYTE*)(v11 + 1472) != 0) {
    v52 = 1468;
  }
  v55 = *(_DWORD*)(v11 + v52);
  v56 = 1584;
  if (*(_BYTE*)(v11 + 1552) != 0) {
    v56 = 1548;
  }
  v57 = *(_DWORD*)(v11 + v56);
  v58 = 808;
  if (*(_BYTE*)(v11 + 776) != 0) {
    v58 = 772;
  }
  v59 = *(_DWORD*)(v11 + v58);
  v60 = 200;
  if (*(_BYTE*)(v11 + 168) != 0) {
    v60 = 164;
  }
  v61 = *(_DWORD*)(v11 + v60);
  v62 = 1192;
  if (*(_BYTE*)(v11 + 1162) != 0) {
    v62 = 1161;
  }
  v63 = *(_BYTE*)(v11 + v62);
  v64 = 960;
  if (*(_BYTE*)(v11 + 928) != 0) {
    v64 = 924;
  }
  v65 = 0x1.0000000000000p+0f / *(float*)(v12[1] + 4LL);
  v66 = *(_DWORD*)(v11 + v64);
  v67 = 880;
  if (*(_BYTE*)(v11 + 850) != 0) {
    v67 = 849;
  }
  v68 = *(_BYTE*)(v11 + v67);
  v69 = *a2;
  LANES128(*(v69)).n128_u64[0] = GameRoutine_b48f90(a3, v80),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LANES128(v69[2]).n128_u64[0] = ResourceBuilder_b5a4b0(a3, v81),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LANES128(v69[2]).n128_u64[1] = GameRoutine_b4a3f0(a3, v82),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LANES128(v69[3]).n128_u64[0] = GameRoutine_b4a3f0(a3, v83),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LANES128(v69[3]).n128_u64[1] = GameRoutine_b48f90(a3, v84),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LANES128(v69[6]).n128_f32[2] = v50;
  LANES128(v69[6]).n128_f32[3] = v51;
  LANES128(v69[7]).n128_u32[0] = v55;
  LANES128(v69[7]).n128_u32[1] = v57;
  LANES128(v69[7]).n128_u32[2] = v59;
  LANES128(v69[7]).n128_u32[3] = v66;
  v87_.v87 = 0x1400000000LL;
  LANES128(v69[8]).n128_f32[0] = v65;
  LANES128(v69[8]).n128_u32[1] = v61;
  LANES128(v69[8]).n128_u32[2] = v32;
  LANES128(v69[8]).n128_u8[12] = v63;
  LANES128(v69[8]).n128_u8[13] = v68;
  LANES128(v69[9]).n128_u64[0] = v34;
  LANES128(v69[9]).n128_u32[2] = v36;
  LANES128(v69[10]).n128_u64[0] = v53;
  LANES128(v69[10]).n128_u32[2] = v54;
  v87_.v92 = 0;
  v87_.v90 = 0x100000001LL;
  v87_.v91 = 1;
  v69[4] = v85;
  v87_.v88 = v78;
  v87_.v89 = v79;
  LANES128(v69[5]).n128_u32[0] = v76;
  LANES128(v69[5]).n128_u32[1] = v75;
  LANES128(v69[5]).n128_u32[2] = v74;
  LANES128(v69[5]).n128_u32[3] = v72;
  LANES128(v69[6]).n128_u32[0] = v73;
  LANES128(v69[6]).n128_f32[1] = v77;
  v70 = (__int64*)a2[1];
  result = GameRoutine_b509c0(a3, (__int64)"DstColor", &v87_.v87),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *v70 = result;
  return result;
}

__int64 gfxa_MainPassImageProcess_SetupPostProcessPass1_lambda0_Invoke(
    __int64 a1, __int64** a2, __int64 a3)
{
  __int64 v3;
  __int64* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64* v12;
  __int64 result;
  struct {
    __int64 v14;
    int v15;
    int v16;
    __int64 v17;
    char v18;
    char gap25_[3];
    int v19;
  } v14_;

  v3 = *(_QWORD*)(a1 + 16);
  (*a2)[1] = GameRoutine_b48f90(a3, ***(_QWORD***)(a1 + 8));
  (*a2)[2] = ResourceBuilder_b5a4b0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 8LL));
  v8 = *(_QWORD*)(**(_QWORD**)(a1 + 8) + 520LL);
  v9 = (__int64*)(*(_QWORD*)v3 + 13304LL);
  if (*(_BYTE*)(*(_QWORD*)v3 + 16700LL) != 0) {
    v9 = (__int64*)(*(_QWORD*)(*(_QWORD*)v3 + 16672LL) + 24LL);
  }
  v10 = *v9;
  v11 = HIDWORD(*v9);
  v7 = *a2;
  *v7 = GameRoutine_b4a3f0(a3, v8);
  v14_.v19 = 0;
  v14_.v15 = v10;
  v14_.v16 = v11;
  v12 = a2[1];
  v14_.v14 = 0x1400000000LL;
  v14_.v17 = 0x100000001LL;
  v14_.v18 = 1;
  result = GameRoutine_b5a5d0(a3, (__int64)"MirageDst", &v14_.v14);
  *v12 = result;
  return result;
}

__int64 gfxa_MainPassImageProcess_SetupPostProcessPass3_lambda1_Invoke(
    __int64 a1, __int64 a2, __int64* a3)
{

#pragma clang fp contract(off)
  _QWORD* v3;
  int* v6;
  unsigned __int8* v7;
  int v8;
  int v9;
  int v10;
  bool v11;
  __int64 v12;
  unsigned __int32 v13;
  __int64 v14;
  float v15;
  __int64 v16;
  float v17;
  __int64 v18;
  float v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  float v24;
  int v25;
  float v26;
  bool v27;
  int v28;
  __int64 v29;
  int32x2_t* v30;
  _QWORD v32[2];
  unsigned __int32 v33;
  float v34;
  float v35;

  v3 = *(_QWORD**)(a1 + 8);
  v6 = (int*)(*v3 + 13304LL);
  v7 = *(unsigned __int8**)(*(_QWORD*)(**(_QWORD**)(a2 + 24) + 8LL) + 320LL);
  if (*(_BYTE*)(*v3 + 16700LL) != 0) {
    v6 = (int*)(*(_QWORD*)(*v3 + 16672LL) + 24LL);
  }
  v9 = *v6;
  v8 = v6[1];
  v32[1] = 0x43800000780LL;
  v10 = v7[96];
  v32[0] = __PAIR64__(v8, v9);
  v11 = v10 == 0;
  v12 = 128;
  if (!v11) {
    v12 = 92;
  }
  v13 = *(_DWORD*)&v7[v12];
  v11 = v7[256] == 0;
  v14 = 288;
  v33 = v13;
  if (!v11) {
    v14 = 252;
  }
  v15 = *(float*)&v7[v14];
  v16 = 208;
  v17 = 0x1.0000000000000p+0f / v15;
  if (v7[176] != 0) {
    v16 = 172;
  }
  v18 = *(_QWORD*)(as_g_base_frame_counter + 8);
  v19 = v17 * *(float*)&v7[v16];
  v34 = v19;
  v20 = nn_os_ConvertToTimeSpan(v18);
  v21 = v3[23];
  v23 = *(_QWORD**)a2;
  v22 = *(_QWORD**)(a2 + 8);
  v24 = (float)(v20 / 1000000);
  v25 = *(_DWORD*)(v21 + 40);
  v26 = 0x1.f400000000000p+9f / v24;
  v27 = v25 < -1;
  v28 = ((_BYTE)v25 + 1) & 1;
  if (v27) {
    v28 = -v28;
  }
  *(_DWORD*)(v21 + 40) = v28;
  v29 = *(_QWORD*)(v21 + 8LL * v28 + 24);
  v35 = 0x1.f400000000000p+9f / v24;
  v30 = (int32x2_t*)(*(__int64 (**)(__int64))(*(_QWORD*)v29 + 56LL))(v29);
  LANES64(*(v30)).n64_u32[0] = v13;
  LANES64(*(v30)).n64_f32[1] = v19 * v26;
  LANES64(v30[2]).n64_f32[0] = (float)v9;
  LANES64(v30[2]).n64_f32[1] = (float)v8;
  LANES64(v30[3]).n64_f32[0] = 0x1.0000000000000p+0f / (float)v9;
  LANES64(v30[3]).n64_f32[1] = 0x1.0000000000000p+0f / (float)v8;
  LANES64(v30[1]).n64_u64[0] =
      LANES64_OF(vzip1_s32(vsqrt_f32(vpadd_f32(
                               COERCE_AS(float32x2_t, 0x3C0C77653B31C71CLL),
                               COERCE_AS(float32x2_t, 0x3C0C77653B31C71CLL))),
                           vsqrt_f32(vpadd_f32(
                               COERCE_AS(float32x2_t, 0x366623DF3591A2B5LL),
                               COERCE_AS(float32x2_t, 0x366623DF3591A2B5LL)))))
          .n64_u64[0];
  (*(void (**)(__int64))(*(_QWORD*)v29 + 64LL))(v29);
  return TaskMotionBlur_b6ef60(v21, v23, v22, a3, (unsigned int*)v32);
}

__int64 gfxa_MainPassImageProcess_SetupPostProcessPass4_lambda0_Invoke(
    __int64 a1, _QWORD* a2, __int64 a3)
{
  __int64 v3;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 result;
  struct {
    __int64 v13;
    __int64 v14;
    __int64 v15;
    char v16;
    char gap25_[3];
    int v17;
  } v13_;

  v3 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)*a2 = GameRoutine_b48f90(a3, ***(_QWORD***)(a1 + 8));
  *(_QWORD*)(*a2 + 8LL) =
      ResourceBuilder_b5a4b0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 8LL));
  *(_QWORD*)(*a2 + 24LL) =
      GameRoutine_b4a3f0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 504LL));
  v7 = **(_QWORD**)(a1 + 8);
  v8 = *(_QWORD*)(v7 + 464);
  if (v8 == 0) {
    v8 = *(_QWORD*)(v7 + 456);
  }
  *(_QWORD*)(*a2 + 16LL) = GameRoutine_b48f90(a3, v8);
  v9 = (__int64*)a2[1];
  v10 = (__int64*)(*(_QWORD*)v3 + 13304LL);
  if (*(_BYTE*)(*(_QWORD*)v3 + 16700LL) != 0) {
    v10 = (__int64*)(*(_QWORD*)(*(_QWORD*)v3 + 16672LL) + 24LL);
  }
  v11 = *v10;
  v13_.v16 = 1;
  v13_.v17 = 0;
  v13_.v13 = 0xD00000000LL;
  v13_.v15 = 0x500000001LL;
  LODWORD(v13_.v14) = (int)v11 / 2;
  HIDWORD(v13_.v14) = SHIDWORD(v11) / 2;
  *v9 = GameRoutine_b54ca0(a3, (__int64)"tmpHalfColorCoC", &v13_.v13);
  LODWORD(v13_.v14) = (int)v11 / 2;
  HIDWORD(v13_.v14) = SHIDWORD(v11) / 2;
  HIDWORD(v13_.v15) = 1;
  HIDWORD(v13_.v13) = 13;
  v9[2] = GameRoutine_b5a5d0(a3, (__int64)"tmpGather", &v13_.v13);
  LODWORD(v13_.v14) = (int)v11 / 2;
  HIDWORD(v13_.v14) = SHIDWORD(v11) / 2;
  HIDWORD(v13_.v15) = 1;
  HIDWORD(v13_.v13) = 13;
  v9[3] = GameRoutine_b494f0(a3, (__int64)"tmpGather2", &v13_.v13);
  v13_.v14 = v11;
  HIDWORD(v13_.v15) = 1;
  HIDWORD(v13_.v13) = 20;
  result = GameRoutine_b5acb0(a3, (__int64)"dstDoF", &v13_.v13);
  v9[4] = result;
  return result;
}

__int64 gfxa_MainPassImageProcess_SetupPostProcessPass4_lambda1_Invoke(
    __int64 a1, __int64 a2, _QWORD* a3)
{
  _QWORD* v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64* v9;
  _QWORD* v10;
  struct {
    char gap0_[4];
    _BYTE v12[4];
    __int64 v13;
  } v12_;

  v3 = *(_QWORD**)(a1 + 8);
  v5 = v3[17];
  v6 = *(_QWORD*)(*(_QWORD*)(**(_QWORD**)(a2 + 24) + 8LL) + 128LL);
  v7 = 360;
  if (*(_BYTE*)(v6 + 330) != 0) {
    v7 = 329;
  }
  v12_.v12[0] = *(_BYTE*)(v6 + v7);
  v8 = *(_QWORD**)(a2 + 8);
  v9 = (__int64*)(*v3 + 13304LL);
  v10 = *(_QWORD**)a2;
  if (*(_BYTE*)(*v3 + 16700LL) != 0) {
    v9 = (__int64*)(*(_QWORD*)(*v3 + 16672LL) + 24LL);
  }
  v12_.v13 = *v9;
  return GameRoutine_b5b7e0(v5, v10, v8, a3, (__int64)v12_.v12);
}

__int64 gfxa_MainPassImageProcess_SetupPostProcessPass4_lambda4_Invoke(
    __int64 a1, __int64** a2, __int64 a3)
{
  __int64* v4;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64 result;
  struct {
    __int64 v15;
    int v16;
    int v17;
    __int64 v18;
    char v19;
    char gap25_[3];
    int v20;
  } v15_;

  v6 = **(_QWORD**)(a1 + 8);
  v7 = *(unsigned __int8*)(v6 + 16700);
  v8 = *(_QWORD*)(v6 + 16672);
  v9 = (__int64*)(v6 + 13304);
  v10 = (__int64*)(v8 + 24);
  if (v7 != 0) {
    v9 = v10;
  }
  v11 = *v9;
  v12 = HIDWORD(*v9);
  v4 = *a2;
  *v4 = GameRoutine_b48f90(a3, ***(_QWORD***)(a1 + 16));
  v15_.v20 = 0;
  v15_.v16 = v11;
  v15_.v17 = v12;
  v13 = a2[1];
  v15_.v15 = 0x1400000000LL;
  v15_.v18 = 0x100000001LL;
  v15_.v19 = 1;
  result = GameRoutine_b53d40(a3, (__int64)"RadialBlurDst", &v15_.v15);
  *v13 = result;
  return result;
}

__int64 gfxa_MainPassImageProcess_SetupDLSSPass_lambda1_Invoke(__int64 a1,
                                                               __int64 a2,
                                                               __int64* a3)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  int v12;
  int v13;
  __int64 v14;
  bool v15;
  __int64* v16;
  __int64 v17;
  __int64* v18;
  __int64 result;
  __int64 v20;
  int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  char v25;
  char v26;
  int v27;

  v3 = *(_QWORD**)(a1 + 8);
  v4 = *(_QWORD*)(a2 + 24);
  v26 = 0;
  *(_BYTE*)(*v3 + 16700LL) = 0;
  v7 = *v3;
  v8 = v3[7];
  v9 = v3[19];
  v10 = *(_QWORD**)a2;
  v11 = *(_QWORD**)(a2 + 8);
  v12 = *(_DWORD*)(*v3 + 13312LL);
  v13 = *(_DWORD*)(*v3 + 13316LL);
  v25 = *(_BYTE*)(v4 + 120);
  LODWORD(v4) = *(unsigned __int8*)(v7 + 16700);
  v14 = *(_QWORD*)(v8 + 1220);
  v21 = v12;
  v22 = v13;
  v15 = (_DWORD)v4 == 0;
  v16 = (__int64*)(v7 + 13304);
  v17 = *(_QWORD*)(v7 + 16672);
  v18 = (__int64*)(v17 + 24);
  v20 = v17;
  if (v15) {
    v18 = v16;
  }
  v23 = *v18;
  v24 = v14;
  v27 = 1065353216;
  ((void (*)(__int64, __int64))*GameData_212e738)(*a3 + 8, 49);
  result = ResourceBuilder_b5a9c0(v9, v10, v11, a3, (int*)&v20);
  *(_BYTE*)(*v3 + 16700LL) = 1;
  **(_BYTE**)(a1 + 16) = 1;
  return result;
}

__int64 gfxa_MainPassImageProcess_SetupDepthUpscalePass_lambda0_Invoke(
    __int64 a1, __int64** a2, __int64 a3)
{
  __int64 v3;
  int v6;
  __int64 result;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  char v12;
  int v13;

  v3 = *(_QWORD*)(a1 + 16);
  **a2 = ResourceBuilder_b5a4b0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 8LL));
  v11 = 0x100000001LL;
  v13 = 0;
  v8 = 0x1500000000LL;
  v12 = 1;
  v6 = *(_DWORD*)(*(_QWORD*)v3 + 13316LL);
  v9 = *(_DWORD*)(*(_QWORD*)v3 + 13312LL);
  v10 = v6;
  result = GameRoutine_b60f30(a3, "FullDepth", &v8);
  *a2[1] = result;
  return result;
}

__int64 gfxa_MainPassImageProcess_SetupOffscreenPostProcessPass_lambda0_Invoke(
    __int64 a1, __int64** a2, __int64* a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64* v5;
  __int64 v7;
  int v8;
  __int64 v9;
  int* v10;
  int* v11;
  float v12;
  signed int v13;
  __int64 v14;
  int v15;
  __int64* v16;
  __int64 result;
  struct {
    __int64 v18;
    int v19;
    signed int v20;
    __int64 v21;
    char v22;
    char gap25_[3];
    int v23;
  } v18_;

  v3 = *(_QWORD*)(a1 + 16);
  v5 = *a2;
  v7 = **(_QWORD**)(a1 + 8);
  v8 = *(unsigned __int8*)(v7 + 16700);
  v9 = *(_QWORD*)(v7 + 16672);
  v10 = (int*)(v7 + 13304);
  v11 = (int*)(v9 + 24);
  if (v8 != 0) {
    v10 = v11;
  }
  v12 = (float)v10[1];
  v13 = ((int)(float)(v12 * 0x1.6666660000000p-1f) + 1) & 0xFFFFFFFE;
  v14 = *(_QWORD*)(*(_QWORD*)v3 + 56LL);
  v15 = (int)(float)((float)((float)*v10 / v12) * (float)v13);
  *v5 = GameRoutine_b48f90((__int64)a3, *(_QWORD*)(*(_QWORD*)v3 + 96LL));
  v5[1] = GameRoutine_b48f90((__int64)a3, v14);
  v18_.v23 = 0;
  v18_.v19 = v15;
  v18_.v20 = v13;
  v16 = a2[1];
  v18_.v18 = 0xD00000000LL;
  v18_.v21 = 0x100000001LL;
  v18_.v22 = 1;
  result = GameRoutine_b4ba10(a3, (__int64)"TimeSlipDst", (__int64)&v18_.v18);
  *v16 = result;
  return result;
}

__int64 gfxa_MainPassImageProcess_SetupLensFlareSystemPass_lambda1_Invoke(
    __int64 a1, __int64 a2, __int64* a3)
{

#pragma clang fp contract(off)
  _QWORD* v3;
  int v4;
  __int64 v5;
  float32x4_t* v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  struct {
    float32x4_t v15;
    float32x4_t v16;
    int v17;
    int v18;
  } v15_;

  v3 = *(_QWORD**)(a1 + 8);
  v4 = *(_DWORD*)(a1 + 16);
  v5 = *(_QWORD*)(a2 + 24);
  v15_.v16 = COERCE_AS(float32x4_t, GameData_1a83610);
  LANES128(v15_.v15).n128_u64[0] = v3[3];
  if (v4 == 2) {
    v8 = (float32x4_t*)GameRoutine_b3f800(
        (_QWORD*)(*(_QWORD*)(v3[1] + 288LL) + 592LL), (__int64)"Moon");
  }
  else {
    if (v4 != 1) {
      goto LABEL_6;
    }
    v8 = (float32x4_t*)GameRoutine_b3f6c0(
        (_QWORD*)(*(_QWORD*)(v3[1] + 288LL) + 592LL), (__int64)"Sun");
  }
  v15_.v16 = vsubq_f32(COERCE_AS(float32x4_t, 0), v8[3]);
LABEL_6:
  v9 = v3[20];
  v10 = *(_QWORD**)a2;
  v11 = *(_QWORD**)(a2 + 8);
  LANES128(v15_.v15).n128_u64[1] = v3[5];
  v15_.v18 = 1065353216;
  v12 = **(_QWORD**)(*(_QWORD*)v5 + 8LL);
  v13 = 128;
  if (*(_BYTE*)(v12 + 96) != 0) {
    v13 = 92;
  }
  v15_.v17 = *(_DWORD*)(v12 + v13);
  return GameRoutine_b6b560(v9, v10, v11, a3, &v15_.v15);
}

#pragma GCC visibility pop
