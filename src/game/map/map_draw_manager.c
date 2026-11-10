#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a867a0(_QWORD);
__int64 ProcManager_659d40(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_world_JobContext_Drain(_QWORD);
__int64 fw_world_JobContext_Wait(_QWORD, _QWORD);
__int64 fw_world_JobQueue_Submit(_QWORD, _QWORD);
__int64 fw_world_SwapCallables(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_ClearLightEvent(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*GameData_1ff08b8[])();
extern __int64 (*GameData_1ff09f8[])();
extern __int64 (*GameData_1ff1158[])();
extern __int64 (*GameData_1ff11d8[])();
extern __int64 (*GameData_1ff12e8[])();
extern __int64 (*GameData_1ff1548[])();
extern __int64 (*GameData_1ff16c8[])();
extern __int64 GameData_212e368[4];
extern __int64 GameData_21323e8[4];
extern __int64 GameData_21cd120;
extern __int64 GameData_226b928;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_f0c890(void);
__int64 MapDrawManager_Destructor(_QWORD* a1);
__int64 game_map_MapDrawManager_UpdateMesh(__int64 a1);
__int64
game_map_MapDrawManager_UpdateTrickDangerMapPos_lambda0_Invoke(__int64 a1,
                                                               _QWORD* a2);
_DWORD* game_map_MapDrawManager_UpdateMesh_lambda0_Invoke(_DWORD* result,
                                                          __int64 a2,
                                                          atomic_uint* a3);
__int64 MapDrawManager_f0cc00(__int64 result);
__int64 game_map_MapDrawManager_GetHash_lambda0_Invoke(__int64 result,
                                                       __int64 a2);
__int64 game_map_MapDrawManager_GetHash_lambda1_Invoke_f0cf50(__int64 a1,
                                                              __int64* a2);
__int64 game_map_MapDrawManager_GetHash_lambda1_Invoke_f0d0c0(__int64 result,
                                                              unsigned int* a2,
                                                              unsigned int* a3);
__int64 game_map_MapDrawManager_GetHash_lambda2_Invoke(__int64 result,
                                                       unsigned int* a2,
                                                       unsigned int* a3);
__int64 game_map_MapDrawManager_GetHash_lambda3_Invoke_f0d360(__int64 a1,
                                                              __int64* a2);
__int64 game_map_MapDrawManager_GetHash_lambda3_Invoke_f0d4d0(__int64 result,
                                                              unsigned int* a2,
                                                              unsigned int* a3);
__int64 game_map_MapDrawManager_GetHash_lambda4_Invoke(__int64 result,
                                                       unsigned int* a2,
                                                       unsigned int* a3);
__int64 game_map_MapDrawManager_GetHash_lambda5_Invoke(__int64 result,
                                                       unsigned int* a2,
                                                       unsigned int* a3);
__int64 game_map_MapDrawManager_GetHash_lambda6_Invoke(__int64 result,
                                                       unsigned int* a2,
                                                       unsigned int* a3,
                                                       unsigned int* a4);
__attribute__((swiftcall)) void g3d_ada070(PSEUDO_X8, _QWORD, _QWORD, _QWORD);
__int64 Components_a870e0(_QWORD, _QWORD);
__int64 GameRoutine_101c1b0(_QWORD);
__int64 GameRoutine_1046e40(_QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ad69c0(_QWORD);
__int64 GameRoutine_f097d0(_QWORD);
__int64 GameRoutine_f0a0d0(_QWORD, _QWORD);
__int64 GameRoutine_f0af90(_QWORD, _QWORD);
__int64 GameRoutine_f1cdd0(_QWORD);
__int64 GameRoutine_f23ea0(_QWORD);
__int64 GameRoutine_f25920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_101c320(_QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_map_100bdf0(_QWORD, _QWORD, _QWORD);
__int64 game_map_f15a60(_QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_os_InitializeMutex(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern _QWORD GameData_212d168;
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64 (*GameData_1ff0a28[])();
extern __int64 (*GameData_1ff0a78[])();
extern __int64 (*GameData_1ff0ac8[])();
extern __int64 (*GameData_1ff0b18[])();
extern __int64 (*GameData_1ff0b68[])();
extern __int64 (*GameData_1ff0bb8[])();
extern __int64 (*GameData_1ff0c08[])();
extern __int64 (*GameData_1ff0c58[])();
extern __int64 (*GameData_1ff0ca8[])();
extern __int64 (*GameData_1ff0cf8[])();
extern __int64 (*GameData_1ff0d48[])();
extern __int64 (*GameData_1ff0d98[])();
extern __int64 (*GameData_1ff0de8[])();
extern __int64 (*GameData_1ff0e38[])();
extern __int64 (*GameData_1ff0e88[])();
extern __int64 (*GameData_1ff0ed8[])();
extern __int64 (*GameData_1ff0f28[])();
extern __int64 (*GameData_1ff0f78[])();
extern __int64 (*GameData_1ff0fc8[])();
extern __int64 (*GameData_1ff1018[])();
extern __int64 (*GameData_1ff1068[])();
extern __int64 (*GameData_1ff10b8[])();
extern __int64 (*GameData_1ff1108[])();
extern __int64 (*MapDrawManager_Destructor_ptr[])();
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212d2f0;
extern __int64* GameData_212f898[17];
extern __int64* GameData_212f8a0[16];
extern __int64* GameData_212f8c0[12];
extern __int64* GameData_212f8c8[11];
extern __int64* GameData_212f8d0[10];
extern __int64* GameData_212f8e0[8];
extern __int64* GameData_212f8e8[7];
extern __int64* GameData_212f8f8[5];
extern __int64* GameData_212f900[4];
extern __int64* GameData_212f928[3];
extern __int64* GameData_212f980[2];
extern __int64* GameData_212f9b0[6];
extern __int64* GameData_212fa08[2];
extern __int64* GameData_212fa20;
extern __int64* GameData_212fa80[2];
extern __int64* GameData_212fa98[8];
extern __int64* GameData_212fba0[3];
extern __int64* GameData_212fcf0[4];
extern __int64* GameData_212fcf8[3];
extern __int64* GameData_212fd30[6];
extern __int64* GameData_212fdc0[8];
extern __int64* GameData_212fde0[4];
extern __int64* GameData_212fde8[3];
extern __int64 GameData_212c638;
extern __int64 GameData_212d020[5];
extern __int64 GameData_212d028[4];
extern __int64 GameData_212d038[2];
extern __int64 GameData_212ea70;
extern __int64 GameData_21ed070;
extern char* GameData_212fc50[12];
extern char GameData_2167730[21];
extern int GameData_220b68c;
void __attribute__((noreturn)) GameRoutine_f0af70(_QWORD);
__int64 MapDrawManager_f02ec0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6);
__int64 MapDrawManager_f0a3f0(__int64 a1, unsigned int a2, unsigned int a3);
__int64 GameRoutine_1551d30(_QWORD);
__int64 GameRoutine_ad7390(void);
__int64 GameRoutine_f06500(_QWORD, long double);
__int64 GameRoutine_f067f0(_QWORD);
__int64 GameRoutine_f06b60(_QWORD);
__int64 GameRoutine_f2ffc0(_QWORD);
__int64 GameRoutine_f515e0(_QWORD);
__int64 game_10221c0(_QWORD);
__int64 game_f30440(_QWORD);
__int64 game_map_1048e00(_QWORD);
__int64 game_map_Trick_Impl_EachDanger(_QWORD, _QWORD);
__int64 game_map_f086e0(__int64);
__int64 game_map_f089a0(__int64);
extern _DWORD GameData_1b97a00[26];
extern __int64 (*GameData_1ff1268[])();
extern __int64* GameData_212cfb8[11];
extern __int64 GameData_212d018[6];
extern __int64 GameData_21cf830;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
void game_map_f06e20(__int64);
void game_map_MapDrawManager_UpdateTrickDangerMapPos();

__int64 MapDrawManager_f02ec0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6)
{
  __int64 v6;
  __int64* v8;
  char v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  _QWORD* v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  char* v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  char* v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64* v46;
  __int64 v47;
  _QWORD* v48;
  _DWORD* v49;
  _QWORD* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64* v61;
  __int64 v62;
  _QWORD* v63;
  _QWORD* v64;
  _QWORD* v65;
  __int64 v66;
  _QWORD* v67;
  __int64 v68;
  __int64 v69;
  __int64* v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64* v75;
  __int64 v76;
  __int64** v77;
  _QWORD* v78;
  __int64** v79;
  __int64 v80;
  __int64 v81;
  _QWORD* v82;
  __int64 v83;
  __int64 v84;
  __int64* v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64* v92;
  __int64 v93;
  __int64 v94;
  __int64* v95;
  __int64 v96;
  __int64 v97;
  __int64* v98;
  __int64 v99;
  __int64 v100;
  __int64* v101;
  __int64 v102;
  __int64 v103;
  __int64* v104;
  __int64 v105;
  _QWORD* v106;
  _QWORD* v107;
  _QWORD* v108;
  __int64 v109;
  __int64 v110;
  __int64* v111;
  __int64 v112;
  __int64 v113;
  __int64* v114;
  __int64 v115;
  __int64 v116;
  __int64* v117;
  __int64 v118;
  __int64 v119;
  __int64* v120;
  __int64 v121;
  __int64 v122;
  __int64* v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64* v127;
  __int64 v128;
  __int64 v129;
  __int64* v130;
  __int64 v131;
  __int64 v132;
  __int64* v133;
  __int64 v134;
  __int64 v135;
  __int64* v136;
  __int64 v137;
  __int64 v138;
  __int64* v139;
  __int64 v140;
  __int64 v141;
  __int64* v142;
  __int64 v143;
  __int64 v144;
  char* v145;
  char* v146;
  __int64 v147;
  char* v148;
  __int64 v149;
  char* v150;
  __int64 v151;
  __int64 result;
  __int64 v153;
  __int64 v154;
  _QWORD* v155;
  _QWORD* v156;
  unsigned __int64 v157;
  _QWORD* v158;
  _QWORD* v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  unsigned __int64 v163;
  __int64 v164;
  unsigned __int64 v165;
  __int64 v166;
  _QWORD* v167;
  unsigned __int64 v168;
  _QWORD* v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  _QWORD* v173;
  __int64 v174;
  _QWORD* v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  unsigned __int64 v179;
  __int64 v180;
  unsigned __int64 v181;
  __int64 v182;
  _QWORD* v183;
  unsigned __int64 v184;
  _QWORD* v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  _QWORD* v189;
  __int64 v190;
  _QWORD* v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  unsigned __int64 v195;
  __int64 v196;
  unsigned __int64 v197;
  __int64 v198;
  _QWORD* v199;
  unsigned __int64 v200;
  _QWORD* v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  _QWORD* v205;
  __int64 v206;
  _QWORD* v207;
  __int64 v208;
  __int64 v209;
  __int64 v210;
  unsigned __int64 v211;
  __int64 v212;
  unsigned __int64 v213;
  __int64 v214;
  _QWORD* v215;
  unsigned __int64 v216;
  _QWORD* v217;
  __int64 v218;
  __int64 v219;
  __int64 v220;
  _QWORD* v221;
  __int64 v222;
  _QWORD* v223;
  __int64 v224;
  __int64 v225;
  __int64 v226;
  unsigned __int64 v227;
  __int64 v228;
  unsigned __int64 v229;
  __int64 v230;
  _QWORD* v231;
  unsigned __int64 v232;
  _QWORD* v233;
  __int64 v234;
  __int64 v235;
  __int64 v236;
  _QWORD* v237;
  __int64 v238;
  _QWORD* v239;
  __int64 v240;
  __int64 v241;
  __int64 v242;
  unsigned __int64 v243;
  __int64 v244;
  unsigned __int64 v245;
  __int64 v246;
  _QWORD* v247;
  unsigned __int64 v248;
  _QWORD* v249;
  __int64 v250;
  __int64 v251;
  __int64 v252;
  _QWORD* v253;
  __int64 v254;
  _QWORD* v255;
  __int64 v256;
  __int64 v257;
  __int64 v258;
  unsigned __int64 v259;
  __int64 v260;
  unsigned __int64 v261;
  __int64 v262;
  _QWORD* v263;
  unsigned __int64 v264;
  _QWORD* v265;
  __int64 v266;
  __int64 v267;
  __int64 v268;
  _QWORD* v269;
  __int64 v270;
  _QWORD* v271;
  __int64 v272;
  __int64 v273;
  __int64 v274;
  unsigned __int64 v275;
  __int64 v276;
  unsigned __int64 v277;
  __int64 v278;
  _QWORD* v279;
  unsigned __int64 v280;
  _QWORD* v281;
  __int64 v282;
  __int64 v283;
  __int64 v284;
  _QWORD* v285;
  __int64 v286;
  _QWORD* v287;
  __int64 v288;
  __int64 v289;
  __int64 v290;
  unsigned __int64 v291;
  __int64 v292;
  unsigned __int64 v293;
  __int64 v294;
  _QWORD* v295;
  unsigned __int64 v296;
  _QWORD* v297;
  __int64 v298;
  __int64 v299;
  __int64 v300;
  _QWORD* v301;
  __int64 v302;
  _QWORD* v303;
  __int64 v304;
  __int64 v305;
  __int64 v306;
  unsigned __int64 v307;
  __int64 v308;
  unsigned __int64 v309;
  __int64 v310;
  _QWORD* v311;
  unsigned __int64 v312;
  _QWORD* v313;
  __int64 v314;
  __int64 v315;
  __int64 v316;
  _QWORD* v317;
  __int64 v318;
  _QWORD* v319;
  __int64 v320;
  __int64 v321;
  __int64 v322;
  unsigned __int64 v323;
  __int64 v324;
  unsigned __int64 v325;
  __int64 v326;
  _QWORD* v327;
  unsigned __int64 v328;
  _QWORD* v329;
  __int64 v330;
  __int64 v331;
  __int64 v332;
  _QWORD* v333;
  __int64 v334;
  _QWORD* v335;
  __int64 v336;
  __int64 v337;
  __int64 v338;
  unsigned __int64 v339;
  __int64 v340;
  unsigned __int64 v341;
  __int64 v342;
  _QWORD* v343;
  unsigned __int64 v344;
  _QWORD* v345;
  __int64 v346;
  __int64 v347;
  __int64 v348;
  _QWORD* v349;
  __int64 v350;
  _QWORD* v351;
  __int64 v352;
  __int64 v353;
  __int64 v354;
  unsigned __int64 v355;
  __int64 v356;
  unsigned __int64 v357;
  __int64 v358;
  _QWORD* v359;
  unsigned __int64 v360;
  _QWORD* v361;
  __int64 v362;
  __int64 v363;
  __int64 v364;
  _QWORD* v365;
  __int64 v366;
  _QWORD* v367;
  __int64 v368;
  __int64 v369;
  __int64 v370;
  unsigned __int64 v371;
  __int64 v372;
  unsigned __int64 v373;
  __int64 v374;
  _QWORD* v375;
  unsigned __int64 v376;
  _QWORD* v377;
  __int64 v378;
  __int64 v379;
  __int64 v380;
  _QWORD* v381;
  __int64 v382;
  _QWORD* v383;
  __int64 v384;
  __int64 v385;
  __int64 v386;
  unsigned __int64 v387;
  __int64 v388;
  unsigned __int64 v389;
  __int64 v390;
  _QWORD* v391;
  unsigned __int64 v392;
  _QWORD* v393;
  __int64 v394;
  __int64 v395;
  __int64 v396;
  _QWORD* v397;
  __int64 v398;
  _QWORD* v399;
  __int64 v400;
  __int64 v401;
  __int64 v402;
  unsigned __int64 v403;
  __int64 v404;
  unsigned __int64 v405;
  __int64 v406;
  _QWORD* v407;
  unsigned __int64 v408;
  _QWORD* v409;
  __int64 v410;
  __int64 v411;
  __int64 v412;
  _QWORD* v413;
  __int64 v414;
  _QWORD* v415;
  __int64 v416;
  __int64 v417;
  __int64 v418;
  unsigned __int64 v419;
  __int64 v420;
  unsigned __int64 v421;
  __int64 v422;
  _QWORD* v423;
  unsigned __int64 v424;
  _QWORD* v425;
  __int64 v426;
  __int64 v427;
  __int64 v428;
  _QWORD* v429;
  __int64 v430;
  _QWORD* v431;
  __int64 v432;
  __int64 v433;
  __int64 v434;
  unsigned __int64 v435;
  __int64 v436;
  unsigned __int64 v437;
  __int64 v438;
  _QWORD* v439;
  unsigned __int64 v440;
  _QWORD* v441;
  __int64 v442;
  __int64 v443;
  __int64 v444;
  _QWORD* v445;
  __int64 v446;
  _QWORD* v447;
  __int64 v448;
  __int64 v449;
  __int64 v450;
  unsigned __int64 v451;
  __int64 v452;
  unsigned __int64 v453;
  __int64 v454;
  _QWORD* v455;
  unsigned __int64 v456;
  _QWORD* v457;
  __int64 v458;
  __int64 v459;
  _QWORD* v460;
  _QWORD* v461;
  __int64 v462;
  __int64 v463;
  char* v464;
  __int64 v465;
  _QWORD v466[2];
  char* v467;
  __int64 v468;
  _QWORD* v469;
  __int64 v470;

  v6 = a1 + 4096;
  if (*(_QWORD*)GameData_212d020[0] == 0) {
    *(_QWORD*)GameData_212d020[0] = a1;
  }
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)a1 = MapDrawManager_Destructor_ptr;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  v8 = GameData_212d2f0 + 2;
  *(_DWORD*)(a1 + 152) = 0;
  *(_DWORD*)(a1 + 160) = 0;
  *(_BYTE*)(a1 + 196) = 0;
  *(_BYTE*)(a1 + 4848) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_BYTE*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 144) = v8;
  memset(a1 + 200, 0, 4641, a4, a5, a6);
  *(_QWORD*)(a1 + 4864) = v8;
  *(_QWORD*)(a1 + 4904) = v8;
  v9 = GameData_2167730[0];
  *(_QWORD*)(a1 + 4944) = v8;
  *(_QWORD*)(a1 + 4984) = v8;
  *(_QWORD*)(a1 + 5024) = v8;
  *(_QWORD*)(a1 + 5064) = v8;
  *(_QWORD*)(a1 + 5104) = v8;
  *(_QWORD*)(a1 + 5144) = v8;
  *(_QWORD*)(a1 + 5184) = v8;
  *(_QWORD*)(a1 + 5224) = v8;
  *(_QWORD*)(a1 + 5264) = v8;
  *(_QWORD*)(a1 + 5304) = v8;
  *(_QWORD*)(a1 + 5344) = v8;
  *(_QWORD*)(a1 + 5384) = v8;
  *(_QWORD*)(a1 + 5424) = v8;
  *(_QWORD*)(a1 + 5464) = v8;
  *(_QWORD*)(a1 + 5504) = v8;
  *(_DWORD*)(a1 + 4872) = 0;
  *(_BYTE*)(v6 + 784) = 0;
  *(_BYTE*)(v6 + 792) = 0;
  *(_DWORD*)(a1 + 4912) = 0;
  *(_BYTE*)(v6 + 824) = 0;
  *(_BYTE*)(v6 + 832) = 0;
  *(_DWORD*)(a1 + 4952) = 0;
  *(_BYTE*)(v6 + 864) = 0;
  *(_BYTE*)(v6 + 872) = 0;
  *(_DWORD*)(a1 + 4992) = 0;
  *(_BYTE*)(v6 + 904) = 0;
  *(_BYTE*)(v6 + 912) = 0;
  *(_DWORD*)(a1 + 5032) = 0;
  *(_BYTE*)(v6 + 944) = 0;
  *(_BYTE*)(v6 + 952) = 0;
  *(_DWORD*)(a1 + 5072) = 0;
  *(_BYTE*)(v6 + 984) = 0;
  *(_BYTE*)(v6 + 992) = 0;
  *(_DWORD*)(a1 + 5112) = 0;
  *(_BYTE*)(v6 + 1024) = 0;
  *(_BYTE*)(v6 + 1032) = 0;
  *(_DWORD*)(a1 + 5152) = 0;
  *(_BYTE*)(v6 + 1064) = 0;
  *(_BYTE*)(v6 + 1072) = 0;
  *(_DWORD*)(a1 + 5192) = 0;
  *(_BYTE*)(v6 + 1104) = 0;
  *(_BYTE*)(v6 + 1112) = 0;
  *(_DWORD*)(a1 + 5232) = 0;
  *(_BYTE*)(v6 + 1144) = 0;
  *(_BYTE*)(v6 + 1152) = 0;
  *(_DWORD*)(a1 + 5272) = 0;
  *(_BYTE*)(v6 + 1184) = 0;
  *(_BYTE*)(v6 + 1192) = 0;
  *(_DWORD*)(a1 + 5312) = 0;
  *(_BYTE*)(v6 + 1224) = 0;
  *(_BYTE*)(v6 + 1232) = 0;
  *(_DWORD*)(a1 + 5352) = 0;
  *(_BYTE*)(v6 + 1264) = 0;
  *(_BYTE*)(v6 + 1272) = 0;
  *(_DWORD*)(a1 + 5392) = 0;
  *(_BYTE*)(v6 + 1304) = 0;
  *(_BYTE*)(v6 + 1312) = 0;
  *(_DWORD*)(a1 + 5432) = 0;
  *(_BYTE*)(v6 + 1344) = 0;
  *(_BYTE*)(v6 + 1352) = 0;
  *(_DWORD*)(a1 + 5472) = 0;
  *(_BYTE*)(v6 + 1384) = 0;
  *(_BYTE*)(v6 + 1392) = 0;
  *(_DWORD*)(a1 + 5512) = 0;
  *(_QWORD*)(a1 + 5544) = 0;
  *(_BYTE*)(v6 + 760) = 1;
  *(_BYTE*)(v6 + 800) = 1;
  *(_BYTE*)(v6 + 840) = 1;
  *(_BYTE*)(v6 + 880) = 1;
  *(_BYTE*)(v6 + 920) = 1;
  *(_BYTE*)(v6 + 960) = 1;
  *(_BYTE*)(v6 + 1000) = 1;
  *(_BYTE*)(v6 + 1040) = 1;
  *(_BYTE*)(v6 + 1080) = 1;
  *(_BYTE*)(v6 + 1120) = 1;
  *(_BYTE*)(v6 + 1160) = 1;
  *(_BYTE*)(v6 + 1200) = 1;
  *(_BYTE*)(v6 + 1240) = 1;
  *(_BYTE*)(v6 + 1280) = 1;
  *(_BYTE*)(v6 + 1320) = 1;
  *(_BYTE*)(v6 + 1360) = 1;
  *(_BYTE*)(v6 + 1400) = 1;
  *(_WORD*)(v6 + 1456) = 1;
  if ((v9 & 1) != 0) {
    v10 = *(char**)&GameData_2167730[16];
  }
  else {
    v10 = &GameData_2167730[1];
  }
  *(_QWORD*)(a1 + 5536) = 0;
  *(_BYTE*)(v6 + 1458) = 0;
  v11 = strlen(v10);
  v469 = nullptr;
  g3d_ada070((void*)(&v470), v10, v11, v466);
  if (v469 == v466) {
    v12 = 32;
  }
  else {
    if (v469 == nullptr) {
      goto LABEL_11;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v469 + v12))((__int64)v469);
LABEL_11:
  v464 = nullptr;
  v465 = 0;
  v462 = 0;
  v463 = 0;
  GameRoutine_60a060(&v462, v10, v11);
  v13 = v470;
  v470 = 0;
  v14 = v465;
  v465 = v13;
  v15 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v14 != 0) {
    GameRoutine_ad69c0(v14);
    v16 = 128;
    if (*(_QWORD*)(*v15 + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*v15 + v16);
    v13 = v465;
  }
  v17 = v462;
  v18 = v463;
  v462 = 0;
  v463 = 0;
  v466[0] = v17;
  v466[1] = v18;
  v19 = v464;
  v464 = nullptr;
  v467 = v19;
  v468 = v13;
  if (v13 != 0) {
    v20 = (_QWORD*)fw_memory_HeapManager_Allocate(*v15, 32, 16, 0);
    v21 = GameData_212ea70;
    v20[2] = 0;
    v20[3] = v13;
    *v20 = v21 + 16;
    v20[1] = 0;
  }
  else {
    v20 = nullptr;
  }
  v469 = v20;
  v465 = 0;
  GameRoutine_f0af90(a1 + 200, v466);
  v22 = v469;
  if (v469 != nullptr && atomic_fetch_add((atomic_ullong* volatile)(v469 + 1),
                                          0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(_QWORD*))(*v22 + 16LL))(v22);
    std___1___shared_weak_count___release_weak(v22);
    if ((v466[0] & 1) == 0) {
      goto LABEL_26;
    }
  }
  else if ((v466[0] & 1) == 0) {
    goto LABEL_26;
  }
  if (v467 != nullptr) {
    v23 = 128;
    if (*(_QWORD*)(*v15 + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(*v15 + v23);
  }
LABEL_26:
  v24 = v465;
  v465 = 0;
  if (v24 != 0) {
    GameRoutine_ad69c0(v24);
    v25 = 128;
    if (*(_QWORD*)(*v15 + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free(*v15 + v25);
  }
  if ((v462 & 1) != 0 && v464 != nullptr) {
    v26 = 128;
    if (*(_QWORD*)(*v15 + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*v15 + v26);
  }
  v27 = v470;
  v470 = 0;
  if (v27 != 0) {
    GameRoutine_ad69c0(v27);
    v28 = 128;
    if (*(_QWORD*)(*v15 + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(*v15 + v28);
  }
  v29 = GameData_212c638;
  *(_QWORD*)(a1 + 224) = Components_a870e0(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
                            8LL) +
                 48LL),
      0);
  LOBYTE(v466[0]) = 22;
  strcpy((char*)v466 + 1, "MapDrawObj-");
  GameRoutine_1a09ce0(v466, "HpGauge", 7);
  v30 = *(_QWORD*)(a1 + 224);
  if ((v466[0] & 1) != 0) {
    v31 = v467;
  }
  else {
    v31 = (char*)v466 + 1;
  }
  v32 = strlen(v31);
  if (v32 != 0) {
    if (v32 >= 0xFF) {
      v33 = 255;
    }
    else {
      v33 = v32;
    }
    memmove(v30 + 16, v31, v33);
  }
  *(_QWORD*)(v30 + 272) = v32;
  *(_BYTE*)(v30 + 16 + v32) = 0;
  if ((v466[0] & 1) != 0 && v467 != nullptr) {
    v34 = 128;
    if (*(_QWORD*)(*v15 + 200LL) == 0) {
      v34 = 56;
    }
    nn_mem_StandardAllocator_Free(*v15 + v34);
  }
  *(_QWORD*)(a1 + 232) = Components_a870e0(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v29 + 32LL) - 8LL) + 48LL), 0);
  LOBYTE(v466[0]) = 22;
  strcpy((char*)v466 + 1, "MapDrawObj-");
  GameRoutine_1a09ce0(v466, "CursorMain", 10);
  v35 = *(_QWORD*)(a1 + 232);
  if ((v466[0] & 1) != 0) {
    v36 = v467;
  }
  else {
    v36 = (char*)v466 + 1;
  }
  v37 = strlen(v36);
  if (v37 != 0) {
    if (v37 >= 0xFF) {
      v38 = 255;
    }
    else {
      v38 = v37;
    }
    memmove(v35 + 16, v36, v38);
  }
  *(_QWORD*)(v35 + 272) = v37;
  *(_BYTE*)(v35 + 16 + v37) = 0;
  if ((v466[0] & 1) != 0 && v467 != nullptr) {
    v39 = 128;
    if (*(_QWORD*)(*v15 + 200LL) == 0) {
      v39 = 56;
    }
    nn_mem_StandardAllocator_Free(*v15 + v39);
  }
  *(_QWORD*)(a1 + 240) = Components_a870e0(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v29 + 32LL) - 8LL) + 48LL), 0);
  LOBYTE(v466[0]) = 22;
  strcpy((char*)v466 + 1, "MapDrawObj-");
  GameRoutine_1a09ce0(v466, "CursorSub", 9);
  v40 = *(_QWORD*)(a1 + 240);
  if ((v466[0] & 1) != 0) {
    v41 = v467;
  }
  else {
    v41 = (char*)v466 + 1;
  }
  v42 = strlen(v41);
  if (v42 != 0) {
    if (v42 >= 0xFF) {
      v43 = 255;
    }
    else {
      v43 = v42;
    }
    memmove(v40 + 16, v41, v43);
  }
  *(_QWORD*)(v40 + 272) = v42;
  *(_BYTE*)(v40 + 16 + v42) = 0;
  if ((v466[0] & 1) != 0 && v467 != nullptr) {
    v44 = 128;
    if (*(_QWORD*)(*v15 + 200LL) == 0) {
      v44 = 56;
    }
    nn_mem_StandardAllocator_Free(*v15 + v44);
  }
  v45 = fw_memory_HeapManager_Allocate(*v15, 304, 16, 0);
  *(_QWORD*)(v45 + 16) = 0;
  v46 = GameData_212f898[0];
  v47 = *(_QWORD*)(a1 + 16);
  *(_WORD*)(v45 + 32) = 0;
  *(_BYTE*)(v45 + 34) = 0;
  *(_QWORD*)(v45 + 40) = 0;
  *(_QWORD*)(v45 + 48) = 0;
  *(_QWORD*)(v45 + 56) = 0;
  *(_QWORD*)(v45 + 64) = 0;
  *(_DWORD*)(v45 + 72) = 1065353216;
  *(_BYTE*)(v45 + 84) = 0;
  *(_BYTE*)(v45 + 88) = 0;
  *(_QWORD*)v45 = GameData_1ff0a28;
  *(_QWORD*)(v45 + 8) = 0;
  *(_QWORD*)(v45 + 96) = 0;
  *(_QWORD*)(v45 + 104) = 0;
  *(_QWORD*)(v45 + 112) = 0;
  *(_QWORD*)(v45 + 120) = 0;
  *(_DWORD*)(v45 + 128) = 1065353216;
  *(_BYTE*)(v45 + 140) = 0;
  *(_BYTE*)(v45 + 144) = 0;
  *(_QWORD*)(v45 + 152) = 0;
  *(_QWORD*)(v45 + 160) = 0;
  *(_QWORD*)(v45 + 168) = 0;
  *(_QWORD*)(v45 + 176) = 0;
  *(_DWORD*)(v45 + 184) = 1065353216;
  *(_BYTE*)(v45 + 196) = 0;
  *(_BYTE*)(v45 + 200) = 0;
  *(_QWORD*)(v45 + 208) = 0;
  *(_QWORD*)(v45 + 216) = 0;
  *(_QWORD*)(v45 + 224) = 0;
  *(_QWORD*)(v45 + 232) = 0;
  *(_QWORD*)(v45 + 240) = 0;
  *(_QWORD*)(v45 + 248) = 0;
  *(_QWORD*)(v45 + 256) = 0;
  *(_QWORD*)(v45 + 264) = 0;
  *(_QWORD*)(v45 + 272) = 0;
  *(_QWORD*)(v45 + 280) = 0;
  *(_QWORD*)(v45 + 288) = 0;
  *(_QWORD*)(v45 + 296) = 0;
  *(_DWORD*)(v45 + 80) = 0;
  *(_DWORD*)(v45 + 136) = 1;
  *(_DWORD*)(v45 + 192) = 2;
  *(_QWORD*)(a1 + 16) = v45;
  *(_QWORD*)(v45 + 24) = v46 + 2;
  *(_QWORD*)(a1 + 8) = v45 + 24;
  if (v47 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v47 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47);
    std___1___shared_weak_count___release_weak(v47);
  }
  v48 = (_QWORD*)fw_memory_HeapManager_Allocate(*v15, 382424, 16, 0);
  v48[1] = 0;
  v48[2] = 0;
  v49 = v48;
  v50 = v48;
  *v48 = GameData_1ff0a78;
  v48[3] = GameData_212fde8[0] + 2;
  GameRoutine_1046e40(v48 + 4);
  v51 = *(_QWORD*)(a1 + 32);
  v49[8] = 0;
  *(_QWORD*)(a1 + 24) = v50 + 3;
  *(_QWORD*)(a1 + 32) = v49;
  v49[31874] = 1;
  v49[63740] = 2;
  if (v51 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v51 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v51 + 16LL))(v51);
    std___1___shared_weak_count___release_weak(v51);
  }
  v52 = fw_memory_HeapManager_Allocate(*v15, 640, 16, 0);
  *(_QWORD*)(v52 + 8) = 0;
  *(_QWORD*)(v52 + 16) = 0;
  v53 = v52;
  *(_QWORD*)v52 = GameData_1ff0ac8;
  v54 = GameData_212f928[0];
  *(_BYTE*)(v52 + 592) = 0;
  *(_WORD*)(v52 + 608) = 0;
  *(_QWORD*)(v52 + 624) = 0;
  *(_DWORD*)(v52 + 632) = 0;
  *(_QWORD*)(v52 + 32) = v54 + 2;
  v55 = v52 + 32;
  *(_QWORD*)(v52 + 612) = 0;
  memset(v52 + 40, 0, 313, v56, v57, v58);
  nn_os_InitializeMutex(v53 + 608, 1, 0);
  v59 = *(_QWORD*)(a1 + 48);
  *(_QWORD*)(a1 + 40) = v55;
  *(_QWORD*)(a1 + 48) = v53;
  if (v59 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v59 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v59 + 16LL))(v59);
    std___1___shared_weak_count___release_weak(v59);
  }
  v60 = fw_memory_HeapManager_Allocate(*v15, 88, 16, 0);
  *(_QWORD*)(v60 + 8) = 0;
  *(_QWORD*)(v60 + 16) = 0;
  *(_QWORD*)v60 = GameData_1ff0b18;
  v61 = GameData_212fd30[0];
  v62 = *(_QWORD*)(a1 + 136);
  *(_BYTE*)(v60 + 80) = 0;
  *(_QWORD*)(v60 + 40) = 0;
  *(_QWORD*)(v60 + 48) = 0;
  *(_QWORD*)(v60 + 56) = 0;
  *(_BYTE*)(v60 + 64) = 0;
  *(_DWORD*)(v60 + 32) = 3;
  *(_QWORD*)(a1 + 136) = v60;
  *(_QWORD*)(v60 + 24) = v61 + 2;
  *(_QWORD*)(a1 + 128) = v60 + 24;
  if (v62 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v62 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v62 + 16LL))(v62);
    std___1___shared_weak_count___release_weak(v62);
  }
  v63 = (_QWORD*)fw_memory_HeapManager_Allocate(*v15, 176, 16, 0);
  v64 = v63 + 4;
  v65 = v63;
  v63[1] = 0;
  v63[2] = 0;
  *v63 = GameData_1ff0b68;
  GameRoutine_f1cdd0(v63 + 4);
  *(_QWORD*)(a1 + 4536) = v64;
  v66 = *(_QWORD*)(a1 + 4544);
  *(_QWORD*)(a1 + 4544) = v65;
  if (v66 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v66 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v66 + 16LL))(v66);
    std___1___shared_weak_count___release_weak(v66);
  }
  v67 = v15;
  v68 = fw_memory_HeapManager_Allocate(*v15, 1064, 16, 0);
  *(_QWORD*)(v68 + 8) = 0;
  *(_QWORD*)(v68 + 16) = 0;
  v69 = v68;
  *(_QWORD*)v68 = GameData_1ff0bb8;
  v70 = GameData_212fcf0[0];
  *(_BYTE*)(v68 + 32) = 0;
  *(_QWORD*)(v68 + 24) = v70 + 2;
  v459 = v68 + 24;
  memset(v68 + 40, 0, 1024, v71, v72, v73);
  v74 = 0;
  v75 = GameData_212fcf8[0] + 2;
  do {
    v76 = v69 + v74;
    v77 = (__int64**)fw_memory_HeapManager_Allocate(*v67, 40, 16, 0);
    v78 = v77 + 3;
    v79 = v77;
    v77[1] = nullptr;
    v77[2] = nullptr;
    *v77 = v75;
    GameRoutine_101c1b0(v77 + 3);
    v80 = *(_QWORD*)(v69 + v74 + 48);
    *(_QWORD*)(v76 + 40) = v78;
    *(_QWORD*)(v76 + 48) = v79;
    if (v80 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v80 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v80 + 16LL))(v80);
      std___1___shared_weak_count___release_weak(v80);
    }
    v74 += 16;
  } while (v74 != 1024);
  v81 = *(_QWORD*)(a1 + 4560);
  *(_QWORD*)(a1 + 4560) = v69;
  *(_QWORD*)(a1 + 4552) = v459;
  if (v81 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v81 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v81 + 16LL))(v81);
    std___1___shared_weak_count___release_weak(v81);
  }
  v82 = v67;
  v83 = fw_memory_HeapManager_Allocate(*v67, 8264, 16, 0);
  *(_QWORD*)(v83 + 8) = 0;
  *(_QWORD*)(v83 + 16) = 0;
  *(_BYTE*)(v83 + 32) = 0;
  v84 = v83;
  *(_QWORD*)v83 = GameData_1ff0c08;
  v85 = GameData_212f9b0[0];
  *(_QWORD*)(v83 + 56) = 0;
  *(_QWORD*)(v83 + 24) = v85 + 2;
  v86 = v83 + 24;
  *(_QWORD*)(v83 + 48) = 0;
  *(_QWORD*)(v83 + 40) = v83 + 48;
  memset(v83 + 64, 0, 8196, v87, v88, v89);
  *(_QWORD*)(a1 + 4584) = v86;
  v90 = *(_QWORD*)(a1 + 4592);
  *(_QWORD*)(a1 + 4592) = v84;
  if (v90 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v90 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v90 + 16LL))(v90);
    std___1___shared_weak_count___release_weak(v90);
  }
  v91 = fw_memory_HeapManager_Allocate(*v67, 88, 16, 0);
  *(_QWORD*)(v91 + 8) = 0;
  *(_QWORD*)(v91 + 16) = 0;
  *(_BYTE*)(v91 + 32) = 0;
  *(_QWORD*)v91 = GameData_1ff0c58;
  v92 = GameData_212fa80[0];
  v93 = *(_QWORD*)(a1 + 4608);
  *(_QWORD*)(v91 + 48) = 0;
  *(_QWORD*)(v91 + 80) = 0;
  *(_QWORD*)(a1 + 4608) = v91;
  *(_QWORD*)(v91 + 40) = v91 + 48;
  *(_QWORD*)(v91 + 72) = 0;
  *(_QWORD*)(v91 + 56) = 0;
  *(_QWORD*)(v91 + 64) = v91 + 72;
  *(_QWORD*)(v91 + 24) = v92 + 2;
  *(_QWORD*)(a1 + 4600) = v91 + 24;
  if (v93 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v93 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v93 + 16LL))(v93);
    std___1___shared_weak_count___release_weak(v93);
  }
  v94 = fw_memory_HeapManager_Allocate(*v67, 64, 16, 0);
  *(_QWORD*)(v94 + 8) = 0;
  *(_QWORD*)(v94 + 16) = 0;
  *(_BYTE*)(v94 + 32) = 0;
  *(_QWORD*)v94 = GameData_1ff0ca8;
  v95 = GameData_212f8f8[0];
  v96 = *(_QWORD*)(a1 + 4624);
  *(_QWORD*)(v94 + 40) = 0;
  *(_QWORD*)(v94 + 48) = 0;
  *(_QWORD*)(v94 + 56) = 0;
  *(_QWORD*)(a1 + 4624) = v94;
  *(_QWORD*)(v94 + 24) = v95 + 2;
  *(_QWORD*)(a1 + 4616) = v94 + 24;
  if (v96 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v96 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v96 + 16LL))(v96);
    std___1___shared_weak_count___release_weak(v96);
  }
  v97 = fw_memory_HeapManager_Allocate(*v67, 64, 16, 0);
  *(_QWORD*)(v97 + 8) = 0;
  *(_QWORD*)(v97 + 16) = 0;
  *(_BYTE*)(v97 + 32) = 0;
  *(_QWORD*)v97 = GameData_1ff0cf8;
  v98 = GameData_212fa08[0];
  v99 = *(_QWORD*)(a1 + 4576);
  *(_QWORD*)(v97 + 40) = 0;
  *(_QWORD*)(v97 + 48) = 0;
  *(_QWORD*)(v97 + 56) = 0;
  *(_QWORD*)(a1 + 4576) = v97;
  *(_QWORD*)(v97 + 24) = v98 + 2;
  *(_QWORD*)(a1 + 4568) = v97 + 24;
  if (v99 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v99 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v99 + 16LL))(v99);
    std___1___shared_weak_count___release_weak(v99);
  }
  v100 = fw_memory_HeapManager_Allocate(*v67, 224, 16, 0);
  *(_QWORD*)(v100 + 16) = 0;
  v101 = GameData_212f900[0];
  *(_QWORD*)v100 = GameData_1ff0d48;
  *(_QWORD*)(v100 + 8) = 0;
  *(_QWORD*)(v100 + 48) = 0;
  v102 = *(_QWORD*)(a1 + 4640);
  *(_BYTE*)(v100 + 32) = 0;
  *(_QWORD*)(v100 + 40) = v100 + 48;
  *(_QWORD*)(v100 + 72) = 0;
  *(_QWORD*)(v100 + 56) = 0;
  *(_QWORD*)(v100 + 64) = v100 + 72;
  *(_QWORD*)(v100 + 96) = 0;
  *(_QWORD*)(v100 + 80) = 0;
  *(_QWORD*)(v100 + 88) = v100 + 96;
  *(_QWORD*)(v100 + 120) = 0;
  *(_QWORD*)(v100 + 104) = 0;
  *(_QWORD*)(v100 + 112) = v100 + 120;
  *(_QWORD*)(v100 + 128) = 0;
  *(_BYTE*)(v100 + 136) = 0;
  *(_BYTE*)(v100 + 140) = 0;
  *(_QWORD*)(v100 + 160) = 0;
  *(_QWORD*)(v100 + 168) = 0;
  *(_QWORD*)(v100 + 144) = 0;
  *(_QWORD*)(v100 + 152) = 0;
  *(_DWORD*)(v100 + 184) = 0;
  *(_QWORD*)(v100 + 192) = 0;
  *(_QWORD*)(v100 + 200) = 0;
  *(_QWORD*)(v100 + 208) = 0;
  *(_DWORD*)(v100 + 216) = 0;
  *(_QWORD*)(a1 + 4640) = v100;
  *(_DWORD*)(v100 + 176) = 0x2000;
  *(_QWORD*)(v100 + 24) = v101 + 2;
  *(_QWORD*)(a1 + 4632) = v100 + 24;
  if (v102 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v102 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v102 + 16LL))(v102);
    std___1___shared_weak_count___release_weak(v102);
  }
  v103 = fw_memory_HeapManager_Allocate(*v67, 144, 16, 0);
  *(_QWORD*)(v103 + 8) = 0;
  *(_QWORD*)(v103 + 16) = 0;
  *(_BYTE*)(v103 + 32) = 0;
  *(_QWORD*)v103 = GameData_1ff0d98;
  v104 = GameData_212fde0[0];
  *(_QWORD*)(v103 + 48) = 0;
  v105 = *(_QWORD*)(a1 + 4656);
  *(_QWORD*)(v103 + 104) = 0;
  *(_QWORD*)(v103 + 112) = 0;
  *(_QWORD*)(v103 + 120) = 0;
  *(_QWORD*)(v103 + 128) = 0;
  *(_QWORD*)(v103 + 40) = v103 + 48;
  *(_QWORD*)(v103 + 72) = 0;
  *(_QWORD*)(v103 + 56) = 0;
  *(_QWORD*)(v103 + 64) = v103 + 72;
  *(_QWORD*)(v103 + 96) = 0;
  *(_QWORD*)(v103 + 80) = 0;
  *(_QWORD*)(v103 + 88) = v103 + 96;
  *(_BYTE*)(v103 + 136) = 0;
  *(_QWORD*)(a1 + 4656) = v103;
  *(_QWORD*)(v103 + 24) = v104 + 2;
  *(_QWORD*)(a1 + 4648) = v103 + 24;
  if (v105 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v105 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v105 + 16LL))(v105);
    std___1___shared_weak_count___release_weak(v105);
  }
  v106 = (_QWORD*)fw_memory_HeapManager_Allocate(*v67, 12928, 16, 0);
  v107 = v106 + 4;
  v108 = v106;
  v106[1] = 0;
  v106[2] = 0;
  *v106 = GameData_1ff0de8;
  game_map_f15a60(v106 + 4);
  *(_QWORD*)(a1 + 4664) = v107;
  v109 = *(_QWORD*)(a1 + 4672);
  *(_QWORD*)(a1 + 4672) = v108;
  if (v109 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v109 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v109 + 16LL))(v109);
    std___1___shared_weak_count___release_weak(v109);
  }
  v110 = fw_memory_HeapManager_Allocate(*v67, 168, 16, 0);
  *(_QWORD*)(v110 + 8) = 0;
  *(_QWORD*)(v110 + 16) = 0;
  *(_BYTE*)(v110 + 32) = 0;
  *(_QWORD*)v110 = GameData_1ff0e38;
  v111 = GameData_212f8a0[0];
  *(_QWORD*)(v110 + 48) = 0;
  v112 = *(_QWORD*)(a1 + 4688);
  *(_DWORD*)(v110 + 160) = 0;
  *(_QWORD*)(v110 + 144) = 0;
  *(_QWORD*)(v110 + 152) = 0;
  *(_QWORD*)(v110 + 40) = v110 + 48;
  *(_QWORD*)(v110 + 72) = 0;
  *(_QWORD*)(v110 + 56) = 0;
  *(_QWORD*)(v110 + 64) = v110 + 72;
  *(_QWORD*)(v110 + 96) = 0;
  *(_QWORD*)(v110 + 80) = 0;
  *(_QWORD*)(v110 + 88) = v110 + 96;
  *(_QWORD*)(v110 + 120) = 0;
  *(_QWORD*)(v110 + 104) = 0;
  *(_QWORD*)(v110 + 112) = v110 + 120;
  *(_QWORD*)(v110 + 128) = 0;
  *(_QWORD*)(v110 + 136) = 0;
  *(_QWORD*)(a1 + 4688) = v110;
  *(_QWORD*)(v110 + 24) = v111 + 2;
  *(_QWORD*)(a1 + 4680) = v110 + 24;
  if (v112 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v112 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v112 + 16LL))(v112);
    std___1___shared_weak_count___release_weak(v112);
  }
  v113 = fw_memory_HeapManager_Allocate(*v67, 112, 16, 0);
  *(_QWORD*)(v113 + 8) = 0;
  *(_QWORD*)(v113 + 16) = 0;
  *(_BYTE*)(v113 + 32) = 0;
  *(_QWORD*)v113 = GameData_1ff0e88;
  v114 = GameData_212f8d0[0];
  v115 = *(_QWORD*)(a1 + 4704);
  *(_QWORD*)(v113 + 48) = 0;
  *(_QWORD*)(v113 + 80) = 0;
  *(_QWORD*)(v113 + 88) = 0;
  *(_QWORD*)(v113 + 96) = 0;
  *(_QWORD*)(v113 + 104) = 0;
  *(_QWORD*)(v113 + 40) = v113 + 48;
  *(_QWORD*)(v113 + 72) = 0;
  *(_QWORD*)(v113 + 56) = 0;
  *(_QWORD*)(v113 + 64) = v113 + 72;
  *(_QWORD*)(a1 + 4704) = v113;
  *(_QWORD*)(v113 + 24) = v114 + 2;
  *(_QWORD*)(a1 + 4696) = v113 + 24;
  if (v115 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v115 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v115 + 16LL))(v115);
    std___1___shared_weak_count___release_weak(v115);
  }
  v116 = fw_memory_HeapManager_Allocate(*v67, 88, 16, 0);
  *(_QWORD*)(v116 + 8) = 0;
  *(_QWORD*)(v116 + 16) = 0;
  *(_BYTE*)(v116 + 32) = 0;
  *(_QWORD*)v116 = GameData_1ff0ed8;
  v117 = GameData_212fba0[0];
  v118 = *(_QWORD*)(a1 + 4720);
  *(_QWORD*)(v116 + 48) = 0;
  *(_QWORD*)(v116 + 56) = 0;
  *(_QWORD*)(v116 + 64) = 0;
  *(_QWORD*)(v116 + 72) = 0;
  *(_QWORD*)(v116 + 80) = 0;
  *(_QWORD*)(v116 + 40) = v116 + 48;
  *(_QWORD*)(a1 + 4720) = v116;
  *(_QWORD*)(v116 + 24) = v117 + 2;
  *(_QWORD*)(a1 + 4712) = v116 + 24;
  if (v118 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v118 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v118 + 16LL))(v118);
    std___1___shared_weak_count___release_weak(v118);
  }
  v119 = fw_memory_HeapManager_Allocate(*v67, 72, 16, 0);
  *(_QWORD*)(v119 + 8) = 0;
  *(_QWORD*)(v119 + 16) = 0;
  *(_BYTE*)(v119 + 32) = 0;
  *(_QWORD*)v119 = GameData_1ff0f28;
  v120 = GameData_212f8c0[0];
  v121 = *(_QWORD*)(a1 + 4736);
  *(_QWORD*)(v119 + 48) = 0;
  *(_QWORD*)(v119 + 56) = 0;
  *(_QWORD*)(a1 + 4736) = v119;
  *(_QWORD*)(v119 + 40) = v119 + 48;
  *(_DWORD*)(v119 + 64) = 30;
  *(_QWORD*)(v119 + 24) = v120 + 2;
  *(_QWORD*)(a1 + 4728) = v119 + 24;
  if (v121 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v121 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v121 + 16LL))(v121);
    std___1___shared_weak_count___release_weak(v121);
  }
  v122 = fw_memory_HeapManager_Allocate(*v67, 72, 16, 0);
  *(_QWORD*)(v122 + 8) = 0;
  *(_QWORD*)(v122 + 16) = 0;
  *(_BYTE*)(v122 + 32) = 0;
  *(_QWORD*)v122 = GameData_1ff0f78;
  v123 = GameData_212f8c8[0];
  v124 = *(_QWORD*)(a1 + 4752);
  *(_QWORD*)(v122 + 48) = 0;
  *(_QWORD*)(v122 + 56) = 0;
  *(_QWORD*)(a1 + 4752) = v122;
  *(_QWORD*)(v122 + 40) = v122 + 48;
  *(_DWORD*)(v122 + 64) = 31;
  *(_QWORD*)(v122 + 24) = v123 + 2;
  *(_QWORD*)(a1 + 4744) = v122 + 24;
  if (v124 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v124 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v124 + 16LL))(v124);
    std___1___shared_weak_count___release_weak(v124);
  }
  v125 = fw_memory_HeapManager_Allocate(*v67, 96, 16, 0);
  *(_QWORD*)(v125 + 8) = 0;
  *(_QWORD*)(v125 + 16) = 0;
  *(_BYTE*)(v125 + 32) = 0;
  v126 = v125;
  *(_QWORD*)v125 = GameData_1ff0fc8;
  v127 = GameData_212f8e0[0];
  *(_QWORD*)(v125 + 56) = 0;
  *(_QWORD*)(v125 + 84) = 0;
  *(_QWORD*)(v125 + 24) = v127 + 2;
  v128 = v125 + 24;
  *(_QWORD*)(v125 + 48) = 0;
  *(_QWORD*)(v125 + 40) = v125 + 48;
  *(_BYTE*)(v125 + 80) = 1;
  v129 = fw_memory_HeapManager_Allocate(*v67, 32, 16, 0);
  v130 = GameData_212f8e8[0];
  *(_QWORD*)(a1 + 4760) = v128;
  v131 = *(_QWORD*)(a1 + 4768);
  *(_QWORD*)(v129 + 8) = 0;
  *(_QWORD*)(v129 + 16) = 0;
  *(_QWORD*)(v126 + 72) = v129;
  *(_QWORD*)(a1 + 4768) = v126;
  *(_QWORD*)v129 = v130 + 2;
  *(_DWORD*)(v129 + 24) = 0;
  *(_QWORD*)(v126 + 64) = v129 + 24;
  if (v131 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v131 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v131 + 16LL))(v131);
    std___1___shared_weak_count___release_weak(v131);
  }
  v132 = fw_memory_HeapManager_Allocate(*v67, 80, 16, 0);
  *(_QWORD*)(v132 + 8) = 0;
  *(_QWORD*)(v132 + 16) = 0;
  *(_BYTE*)(v132 + 32) = 0;
  *(_QWORD*)v132 = GameData_1ff1018;
  v133 = GameData_212f980[0];
  v134 = *(_QWORD*)(a1 + 4784);
  *(_QWORD*)(v132 + 48) = 0;
  *(_QWORD*)(v132 + 56) = 0;
  *(_QWORD*)(v132 + 64) = 0;
  *(_QWORD*)(a1 + 4784) = v132;
  *(_QWORD*)(v132 + 40) = v132 + 48;
  *(_DWORD*)(v132 + 72) = 0x2000;
  *(_QWORD*)(v132 + 24) = v133 + 2;
  *(_QWORD*)(a1 + 4776) = v132 + 24;
  if (v134 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v134 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v134 + 16LL))(v134);
    std___1___shared_weak_count___release_weak(v134);
  }
  v135 = fw_memory_HeapManager_Allocate(*v67, 64, 16, 0);
  *(_QWORD*)(v135 + 8) = 0;
  *(_QWORD*)(v135 + 16) = 0;
  *(_BYTE*)(v135 + 32) = 0;
  *(_QWORD*)v135 = GameData_1ff1068;
  v136 = GameData_212fdc0[0];
  v137 = *(_QWORD*)(a1 + 4800);
  *(_QWORD*)(v135 + 48) = 0;
  *(_QWORD*)(v135 + 56) = 0;
  *(_QWORD*)(a1 + 4800) = v135;
  *(_QWORD*)(v135 + 40) = v135 + 48;
  *(_QWORD*)(v135 + 24) = v136 + 2;
  *(_QWORD*)(a1 + 4792) = v135 + 24;
  if (v137 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v137 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v137 + 16LL))(v137);
    std___1___shared_weak_count___release_weak(v137);
  }
  v138 = fw_memory_HeapManager_Allocate(*v67, 64, 16, 0);
  *(_QWORD*)(v138 + 8) = 0;
  *(_QWORD*)(v138 + 16) = 0;
  *(_BYTE*)(v138 + 32) = 0;
  *(_QWORD*)v138 = GameData_1ff10b8;
  v139 = GameData_212fa20;
  v140 = *(_QWORD*)(a1 + 4816);
  *(_QWORD*)(v138 + 48) = 0;
  *(_QWORD*)(v138 + 56) = 0;
  *(_QWORD*)(a1 + 4816) = v138;
  *(_QWORD*)(v138 + 40) = v138 + 48;
  *(_QWORD*)(v138 + 24) = v139 + 2;
  *(_QWORD*)(a1 + 4808) = v138 + 24;
  if (v140 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v140 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v140 + 16LL))(v140);
    std___1___shared_weak_count___release_weak(v140);
  }
  v141 = fw_memory_HeapManager_Allocate(*v67, 136, 16, 0);
  *(_QWORD*)(v141 + 8) = 0;
  *(_QWORD*)(v141 + 16) = 0;
  *(_BYTE*)(v141 + 32) = 0;
  *(_QWORD*)v141 = GameData_1ff1108;
  v142 = GameData_212fa98[0];
  *(_QWORD*)(v141 + 48) = 0;
  v143 = *(_QWORD*)(a1 + 4832);
  *(_QWORD*)(v141 + 128) = 0;
  *(_QWORD*)(a1 + 4832) = v141;
  *(_QWORD*)(v141 + 40) = v141 + 48;
  *(_QWORD*)(v141 + 72) = 0;
  *(_QWORD*)(v141 + 56) = 0;
  *(_QWORD*)(v141 + 64) = v141 + 72;
  *(_QWORD*)(v141 + 96) = 0;
  *(_QWORD*)(v141 + 80) = 0;
  *(_QWORD*)(v141 + 88) = v141 + 96;
  *(_QWORD*)(v141 + 120) = 0;
  *(_QWORD*)(v141 + 104) = 0;
  *(_QWORD*)(v141 + 112) = v141 + 120;
  *(_QWORD*)(v141 + 24) = v142 + 2;
  *(_QWORD*)(a1 + 4824) = v141 + 24;
  if (v143 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v143 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v143 + 16LL))(v143);
    std___1___shared_weak_count___release_weak(v143);
  }
  v144 = *(_QWORD*)(*(_QWORD*)(a1 + 4536) + 40LL);
  *(_QWORD*)(v144 + 8) = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 232LL);
  v145 = GameData_212fc50[0];
  if ((*GameData_212fc50[0] & 1) != 0) {
    v146 = *(char**)&GameData_212fc50[0][(unsigned __int64)((__int128*)0x10LL)];
  }
  else {
    v146 = GameData_212fc50[0] + 1;
  }
  v147 = strlen(v146);
  game_map_100bdf0(v144, v146, v147);
  if ((*((_BYTE*)((__int128*)0x10LL) + (_QWORD)v145 + 8) & 1) != 0) {
    v148 = *(char**)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v145);
  }
  else {
    v148 = v145 + 25;
  }
  v149 = strlen(v148);
  game_map_100bdf0(v144, v148, v149);
  if ((*((_BYTE*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v145) & 1) != 0) {
    v150 = *(char**)((char*)((char*)0x40LL) + (_QWORD)v145);
  }
  else {
    v150 = v145 + 49;
  }
  v151 = strlen(v150);
  game_map_100bdf0(v144, v150, v151);
  result = game_101c320(*(_QWORD*)(a1 + 4552));
  v153 = *(_QWORD*)(a1 + 4536);
  v154 = *(_QWORD*)(a1 + 4544);
  if (v154 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v154 + 16), 1u,
                              memory_order_relaxed);
    v156 = (_QWORD*)(a1 + 64);
    v155 = *(_QWORD**)(a1 + 64);
    v158 = (_QWORD*)(a1 + 72);
    v157 = *(_QWORD*)(a1 + 72);
    if ((unsigned __int64)v155 < v157) {
      *v155 = v153;
      v155[1] = v154;
      v159 = v155 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v154 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_180;
    }
  }
  else {
    v156 = (_QWORD*)(a1 + 64);
    v155 = *(_QWORD**)(a1 + 64);
    v158 = (_QWORD*)(a1 + 72);
    v157 = *(_QWORD*)(a1 + 72);
    if ((unsigned __int64)v155 < v157) {
      *v155 = v153;
      v155[1] = 0;
      v159 = v155 + 2;
      goto LABEL_180;
    }
  }
  v460 = v158;
  v160 = *(_QWORD*)(a1 + 56);
  v161 = (__int64)v155 - v160;
  v162 = ((__int64)v155 - v160) >> 4;
  v163 = v162 + 1;
  if ((unsigned __int64)(v162 + 1) >> 60 != 0) {
    goto LABEL_560;
  }
  v164 = v157 - v160;
  if (v164 >> 3 > v163) {
    v163 = v164 >> 3;
  }
  if ((unsigned __int64)v164 >= 0x7FFFFFFFFFFFFFF0LL) {
    v165 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v165 = v163;
  }
  if (v165 >> 60 != 0) {
    goto LABEL_561;
  }
  v166 = fw_memory_HeapManager_Allocate(*v82, 16 * v165, 16, 0);
  v167 = (_QWORD*)(v166 + v161);
  v168 = v166 + 16 * v165;
  *v167 = v153;
  v167[1] = v154;
  if (v154 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v154 + 16), 1u,
                              memory_order_relaxed);
    v160 = *(_QWORD*)(a1 + 56);
    v161 = *(_QWORD*)(a1 + 64) - v160;
    v162 = v161 >> 4;
  }
  v169 = &v167[-2 * v162];
  v159 = v167 + 2;
  result = memcpy(v169, v160, v161);
  *(_QWORD*)(a1 + 56) = v169;
  *(_QWORD*)(a1 + 64) = v159;
  *(_QWORD*)(a1 + 72) = v168;
  if (v160 != 0) {
    v170 = 128;
    if (*(_QWORD*)(*v82 + 200LL) == 0) {
      v170 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v82 + v170);
  }
  v158 = v460;
LABEL_180:
  *v156 = v159;
  if (v154 != 0) {
    result = std___1___shared_weak_count___release_weak(v154);
  }
  v171 = *(_QWORD*)(a1 + 4552);
  v172 = *(_QWORD*)(a1 + 4560);
  v461 = v158;
  if (v172 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v172 + 16), 1u,
                              memory_order_relaxed);
    v173 = (_QWORD*)*v156;
    v174 = *v158;
    if (*v156 < *v158) {
      *v173 = v171;
      v173[1] = v172;
      v175 = v173 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v172 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_201;
    }
  }
  else {
    v173 = (_QWORD*)*v156;
    v174 = *v158;
    if (*v156 < *v158) {
      *v173 = v171;
      v173[1] = 0;
      v175 = v173 + 2;
      goto LABEL_201;
    }
  }
  v176 = *(_QWORD*)(a1 + 56);
  v177 = (__int64)v173 - v176;
  v178 = ((__int64)v173 - v176) >> 4;
  v179 = v178 + 1;
  if ((unsigned __int64)(v178 + 1) >> 60 != 0) {
    goto LABEL_560;
  }
  v180 = v174 - v176;
  if (v180 >> 3 > v179) {
    v179 = v180 >> 3;
  }
  if ((unsigned __int64)v180 >= 0x7FFFFFFFFFFFFFF0LL) {
    v181 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v181 = v179;
  }
  if (v181 >> 60 != 0) {
    goto LABEL_561;
  }
  v182 = fw_memory_HeapManager_Allocate(*v82, 16 * v181, 16, 0);
  v183 = (_QWORD*)(v182 + v177);
  v184 = v182 + 16 * v181;
  *v183 = v171;
  v183[1] = v172;
  if (v172 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v172 + 16), 1u,
                              memory_order_relaxed);
    v176 = *(_QWORD*)(a1 + 56);
    v177 = *(_QWORD*)(a1 + 64) - v176;
    v178 = v177 >> 4;
  }
  v185 = &v183[-2 * v178];
  v175 = v183 + 2;
  result = memcpy(v185, v176, v177);
  *(_QWORD*)(a1 + 56) = v185;
  *(_QWORD*)(a1 + 64) = v175;
  *(_QWORD*)(a1 + 72) = v184;
  if (v176 != 0) {
    v186 = 128;
    if (*(_QWORD*)(*v82 + 200LL) == 0) {
      v186 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v82 + v186);
  }
  v158 = v461;
LABEL_201:
  *v156 = v175;
  if (v172 != 0) {
    result = std___1___shared_weak_count___release_weak(v172);
  }
  v187 = *(_QWORD*)(a1 + 4584);
  v188 = *(_QWORD*)(a1 + 4592);
  if (v188 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v188 + 16), 1u,
                              memory_order_relaxed);
    v189 = (_QWORD*)*v156;
    v190 = *v158;
    if (*v156 < *v158) {
      *v189 = v187;
      v189[1] = v188;
      v191 = v189 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v188 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_222;
    }
  }
  else {
    v189 = (_QWORD*)*v156;
    v190 = *v158;
    if (*v156 < *v158) {
      *v189 = v187;
      v189[1] = 0;
      v191 = v189 + 2;
      goto LABEL_222;
    }
  }
  v192 = *(_QWORD*)(a1 + 56);
  v193 = (__int64)v189 - v192;
  v194 = ((__int64)v189 - v192) >> 4;
  v195 = v194 + 1;
  if ((unsigned __int64)(v194 + 1) >> 60 != 0) {
    goto LABEL_560;
  }
  v196 = v190 - v192;
  if (v196 >> 3 > v195) {
    v195 = v196 >> 3;
  }
  if ((unsigned __int64)v196 >= 0x7FFFFFFFFFFFFFF0LL) {
    v197 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v197 = v195;
  }
  if (v197 >> 60 != 0) {
    goto LABEL_561;
  }
  v198 = fw_memory_HeapManager_Allocate(*v82, 16 * v197, 16, 0);
  v199 = (_QWORD*)(v198 + v193);
  v200 = v198 + 16 * v197;
  *v199 = v187;
  v199[1] = v188;
  if (v188 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v188 + 16), 1u,
                              memory_order_relaxed);
    v192 = *(_QWORD*)(a1 + 56);
    v193 = *(_QWORD*)(a1 + 64) - v192;
    v194 = v193 >> 4;
  }
  v201 = &v199[-2 * v194];
  v191 = v199 + 2;
  result = memcpy(v201, v192, v193);
  *(_QWORD*)(a1 + 56) = v201;
  *(_QWORD*)(a1 + 64) = v191;
  *(_QWORD*)(a1 + 72) = v200;
  if (v192 != 0) {
    v202 = 128;
    if (*(_QWORD*)(*v82 + 200LL) == 0) {
      v202 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v82 + v202);
  }
  v158 = v461;
LABEL_222:
  *v156 = v191;
  if (v188 != 0) {
    result = std___1___shared_weak_count___release_weak(v188);
  }
  v203 = *(_QWORD*)(a1 + 4600);
  v204 = *(_QWORD*)(a1 + 4608);
  if (v204 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v204 + 16), 1u,
                              memory_order_relaxed);
    v205 = (_QWORD*)*v156;
    v206 = *v158;
    if (*v156 < *v158) {
      *v205 = v203;
      v205[1] = v204;
      v207 = v205 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v204 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_243;
    }
  }
  else {
    v205 = (_QWORD*)*v156;
    v206 = *v158;
    if (*v156 < *v158) {
      *v205 = v203;
      v205[1] = 0;
      v207 = v205 + 2;
      goto LABEL_243;
    }
  }
  v208 = *(_QWORD*)(a1 + 56);
  v209 = (__int64)v205 - v208;
  v210 = ((__int64)v205 - v208) >> 4;
  v211 = v210 + 1;
  if ((unsigned __int64)(v210 + 1) >> 60 != 0) {
    goto LABEL_560;
  }
  v212 = v206 - v208;
  if (v212 >> 3 > v211) {
    v211 = v212 >> 3;
  }
  if ((unsigned __int64)v212 >= 0x7FFFFFFFFFFFFFF0LL) {
    v213 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v213 = v211;
  }
  if (v213 >> 60 != 0) {
    goto LABEL_561;
  }
  v214 = fw_memory_HeapManager_Allocate(*v82, 16 * v213, 16, 0);
  v215 = (_QWORD*)(v214 + v209);
  v216 = v214 + 16 * v213;
  *v215 = v203;
  v215[1] = v204;
  if (v204 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v204 + 16), 1u,
                              memory_order_relaxed);
    v208 = *(_QWORD*)(a1 + 56);
    v209 = *(_QWORD*)(a1 + 64) - v208;
    v210 = v209 >> 4;
  }
  v217 = &v215[-2 * v210];
  v207 = v215 + 2;
  result = memcpy(v217, v208, v209);
  *(_QWORD*)(a1 + 56) = v217;
  *(_QWORD*)(a1 + 64) = v207;
  *(_QWORD*)(a1 + 72) = v216;
  if (v208 != 0) {
    v218 = 128;
    if (*(_QWORD*)(*v82 + 200LL) == 0) {
      v218 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v82 + v218);
  }
  v158 = v461;
LABEL_243:
  *v156 = v207;
  if (v204 != 0) {
    result = std___1___shared_weak_count___release_weak(v204);
  }
  v219 = *(_QWORD*)(a1 + 4616);
  v220 = *(_QWORD*)(a1 + 4624);
  if (v220 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v220 + 16), 1u,
                              memory_order_relaxed);
    v221 = (_QWORD*)*v156;
    v222 = *v158;
    if (*v156 < *v158) {
      *v221 = v219;
      v221[1] = v220;
      v223 = v221 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v220 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_264;
    }
  }
  else {
    v221 = (_QWORD*)*v156;
    v222 = *v158;
    if (*v156 < *v158) {
      *v221 = v219;
      v221[1] = 0;
      v223 = v221 + 2;
      goto LABEL_264;
    }
  }
  v224 = *(_QWORD*)(a1 + 56);
  v225 = (__int64)v221 - v224;
  v226 = ((__int64)v221 - v224) >> 4;
  v227 = v226 + 1;
  if ((unsigned __int64)(v226 + 1) >> 60 != 0) {
    goto LABEL_560;
  }
  v228 = v222 - v224;
  if (v228 >> 3 > v227) {
    v227 = v228 >> 3;
  }
  if ((unsigned __int64)v228 >= 0x7FFFFFFFFFFFFFF0LL) {
    v229 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v229 = v227;
  }
  if (v229 >> 60 != 0) {
    goto LABEL_561;
  }
  v230 = fw_memory_HeapManager_Allocate(*v82, 16 * v229, 16, 0);
  v231 = (_QWORD*)(v230 + v225);
  v232 = v230 + 16 * v229;
  *v231 = v219;
  v231[1] = v220;
  if (v220 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v220 + 16), 1u,
                              memory_order_relaxed);
    v224 = *(_QWORD*)(a1 + 56);
    v225 = *(_QWORD*)(a1 + 64) - v224;
    v226 = v225 >> 4;
  }
  v233 = &v231[-2 * v226];
  v223 = v231 + 2;
  result = memcpy(v233, v224, v225);
  *(_QWORD*)(a1 + 56) = v233;
  *(_QWORD*)(a1 + 64) = v223;
  *(_QWORD*)(a1 + 72) = v232;
  if (v224 != 0) {
    v234 = 128;
    if (*(_QWORD*)(*v82 + 200LL) == 0) {
      v234 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v82 + v234);
  }
  v158 = v461;
LABEL_264:
  *v156 = v223;
  if (v220 != 0) {
    result = std___1___shared_weak_count___release_weak(v220);
  }
  v235 = *(_QWORD*)(a1 + 4568);
  v236 = *(_QWORD*)(a1 + 4576);
  if (v236 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v236 + 16), 1u,
                              memory_order_relaxed);
    v237 = (_QWORD*)*v156;
    v238 = *v158;
    if (*v156 < *v158) {
      *v237 = v235;
      v237[1] = v236;
      v239 = v237 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v236 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_285;
    }
  }
  else {
    v237 = (_QWORD*)*v156;
    v238 = *v158;
    if (*v156 < *v158) {
      *v237 = v235;
      v237[1] = 0;
      v239 = v237 + 2;
      goto LABEL_285;
    }
  }
  v240 = *(_QWORD*)(a1 + 56);
  v241 = (__int64)v237 - v240;
  v242 = ((__int64)v237 - v240) >> 4;
  v243 = v242 + 1;
  if ((unsigned __int64)(v242 + 1) >> 60 != 0) {
    goto LABEL_560;
  }
  v244 = v238 - v240;
  if (v244 >> 3 > v243) {
    v243 = v244 >> 3;
  }
  if ((unsigned __int64)v244 >= 0x7FFFFFFFFFFFFFF0LL) {
    v245 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v245 = v243;
  }
  if (v245 >> 60 != 0) {
    goto LABEL_561;
  }
  v246 = fw_memory_HeapManager_Allocate(*v82, 16 * v245, 16, 0);
  v247 = (_QWORD*)(v246 + v241);
  v248 = v246 + 16 * v245;
  *v247 = v235;
  v247[1] = v236;
  if (v236 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v236 + 16), 1u,
                              memory_order_relaxed);
    v240 = *(_QWORD*)(a1 + 56);
    v241 = *(_QWORD*)(a1 + 64) - v240;
    v242 = v241 >> 4;
  }
  v249 = &v247[-2 * v242];
  v239 = v247 + 2;
  result = memcpy(v249, v240, v241);
  *(_QWORD*)(a1 + 56) = v249;
  *(_QWORD*)(a1 + 64) = v239;
  *(_QWORD*)(a1 + 72) = v248;
  if (v240 != 0) {
    v250 = 128;
    if (*(_QWORD*)(*v82 + 200LL) == 0) {
      v250 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v82 + v250);
  }
  v158 = v461;
LABEL_285:
  *v156 = v239;
  if (v236 != 0) {
    result = std___1___shared_weak_count___release_weak(v236);
  }
  v251 = *(_QWORD*)(a1 + 4632);
  v252 = *(_QWORD*)(a1 + 4640);
  if (v252 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v252 + 16), 1u,
                              memory_order_relaxed);
    v253 = (_QWORD*)*v156;
    v254 = *v158;
    if (*v156 < *v158) {
      *v253 = v251;
      v253[1] = v252;
      v255 = v253 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v252 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_306;
    }
  }
  else {
    v253 = (_QWORD*)*v156;
    v254 = *v158;
    if (*v156 < *v158) {
      *v253 = v251;
      v253[1] = 0;
      v255 = v253 + 2;
      goto LABEL_306;
    }
  }
  v256 = *(_QWORD*)(a1 + 56);
  v257 = (__int64)v253 - v256;
  v258 = ((__int64)v253 - v256) >> 4;
  v259 = v258 + 1;
  if ((unsigned __int64)(v258 + 1) >> 60 != 0) {
    goto LABEL_560;
  }
  v260 = v254 - v256;
  if (v260 >> 3 > v259) {
    v259 = v260 >> 3;
  }
  if ((unsigned __int64)v260 >= 0x7FFFFFFFFFFFFFF0LL) {
    v261 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v261 = v259;
  }
  if (v261 >> 60 != 0) {
    goto LABEL_561;
  }
  v262 = fw_memory_HeapManager_Allocate(*v82, 16 * v261, 16, 0);
  v263 = (_QWORD*)(v262 + v257);
  v264 = v262 + 16 * v261;
  *v263 = v251;
  v263[1] = v252;
  if (v252 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v252 + 16), 1u,
                              memory_order_relaxed);
    v256 = *(_QWORD*)(a1 + 56);
    v257 = *(_QWORD*)(a1 + 64) - v256;
    v258 = v257 >> 4;
  }
  v265 = &v263[-2 * v258];
  v255 = v263 + 2;
  result = memcpy(v265, v256, v257);
  *(_QWORD*)(a1 + 56) = v265;
  *(_QWORD*)(a1 + 64) = v255;
  *(_QWORD*)(a1 + 72) = v264;
  if (v256 != 0) {
    v266 = 128;
    if (*(_QWORD*)(*v82 + 200LL) == 0) {
      v266 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v82 + v266);
  }
  v158 = v461;
LABEL_306:
  *v156 = v255;
  if (v252 != 0) {
    result = std___1___shared_weak_count___release_weak(v252);
  }
  v267 = *(_QWORD*)(a1 + 4648);
  v268 = *(_QWORD*)(a1 + 4656);
  if (v268 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v268 + 16), 1u,
                              memory_order_relaxed);
    v269 = (_QWORD*)*v156;
    v270 = *v158;
    if (*v156 < *v158) {
      *v269 = v267;
      v269[1] = v268;
      v271 = v269 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v268 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_327;
    }
  }
  else {
    v269 = (_QWORD*)*v156;
    v270 = *v158;
    if (*v156 < *v158) {
      *v269 = v267;
      v269[1] = 0;
      v271 = v269 + 2;
      goto LABEL_327;
    }
  }
  v272 = *(_QWORD*)(a1 + 56);
  v273 = (__int64)v269 - v272;
  v274 = ((__int64)v269 - v272) >> 4;
  v275 = v274 + 1;
  if ((unsigned __int64)(v274 + 1) >> 60 != 0) {
    goto LABEL_560;
  }
  v276 = v270 - v272;
  if (v276 >> 3 > v275) {
    v275 = v276 >> 3;
  }
  if ((unsigned __int64)v276 >= 0x7FFFFFFFFFFFFFF0LL) {
    v277 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v277 = v275;
  }
  if (v277 >> 60 != 0) {
    goto LABEL_561;
  }
  v278 = fw_memory_HeapManager_Allocate(*v82, 16 * v277, 16, 0);
  v279 = (_QWORD*)(v278 + v273);
  v280 = v278 + 16 * v277;
  *v279 = v267;
  v279[1] = v268;
  if (v268 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v268 + 16), 1u,
                              memory_order_relaxed);
    v272 = *(_QWORD*)(a1 + 56);
    v273 = *(_QWORD*)(a1 + 64) - v272;
    v274 = v273 >> 4;
  }
  v281 = &v279[-2 * v274];
  v271 = v279 + 2;
  result = memcpy(v281, v272, v273);
  *(_QWORD*)(a1 + 56) = v281;
  *(_QWORD*)(a1 + 64) = v271;
  *(_QWORD*)(a1 + 72) = v280;
  if (v272 != 0) {
    v282 = 128;
    if (*(_QWORD*)(*v82 + 200LL) == 0) {
      v282 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v82 + v282);
  }
  v158 = v461;
LABEL_327:
  *v156 = v271;
  if (v268 != 0) {
    result = std___1___shared_weak_count___release_weak(v268);
  }
  v283 = *(_QWORD*)(a1 + 4664);
  v284 = *(_QWORD*)(a1 + 4672);
  if (v284 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v284 + 16), 1u,
                              memory_order_relaxed);
    v285 = (_QWORD*)*v156;
    v286 = *v158;
    if (*v156 < *v158) {
      *v285 = v283;
      v285[1] = v284;
      v287 = v285 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v284 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_348;
    }
  }
  else {
    v285 = (_QWORD*)*v156;
    v286 = *v158;
    if (*v156 < *v158) {
      *v285 = v283;
      v285[1] = 0;
      v287 = v285 + 2;
      goto LABEL_348;
    }
  }
  v288 = *(_QWORD*)(a1 + 56);
  v289 = (__int64)v285 - v288;
  v290 = ((__int64)v285 - v288) >> 4;
  v291 = v290 + 1;
  if ((unsigned __int64)(v290 + 1) >> 60 != 0) {
    goto LABEL_560;
  }
  v292 = v286 - v288;
  if (v292 >> 3 > v291) {
    v291 = v292 >> 3;
  }
  if ((unsigned __int64)v292 >= 0x7FFFFFFFFFFFFFF0LL) {
    v293 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v293 = v291;
  }
  if (v293 >> 60 != 0) {
    goto LABEL_561;
  }
  v294 = fw_memory_HeapManager_Allocate(*v82, 16 * v293, 16, 0);
  v295 = (_QWORD*)(v294 + v289);
  v296 = v294 + 16 * v293;
  *v295 = v283;
  v295[1] = v284;
  if (v284 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v284 + 16), 1u,
                              memory_order_relaxed);
    v288 = *(_QWORD*)(a1 + 56);
    v289 = *(_QWORD*)(a1 + 64) - v288;
    v290 = v289 >> 4;
  }
  v297 = &v295[-2 * v290];
  v287 = v295 + 2;
  result = memcpy(v297, v288, v289);
  *(_QWORD*)(a1 + 56) = v297;
  *(_QWORD*)(a1 + 64) = v287;
  *(_QWORD*)(a1 + 72) = v296;
  if (v288 != 0) {
    v298 = 128;
    if (*(_QWORD*)(*v82 + 200LL) == 0) {
      v298 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v82 + v298);
  }
  v158 = v461;
LABEL_348:
  *v156 = v287;
  if (v284 != 0) {
    result = std___1___shared_weak_count___release_weak(v284);
  }
  v299 = *(_QWORD*)(a1 + 4680);
  v300 = *(_QWORD*)(a1 + 4688);
  if (v300 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v300 + 16), 1u,
                              memory_order_relaxed);
    v301 = (_QWORD*)*v156;
    v302 = *v158;
    if (*v156 < *v158) {
      *v301 = v299;
      v301[1] = v300;
      v303 = v301 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v300 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_369;
    }
  }
  else {
    v301 = (_QWORD*)*v156;
    v302 = *v158;
    if (*v156 < *v158) {
      *v301 = v299;
      v301[1] = 0;
      v303 = v301 + 2;
      goto LABEL_369;
    }
  }
  v304 = *(_QWORD*)(a1 + 56);
  v305 = (__int64)v301 - v304;
  v306 = ((__int64)v301 - v304) >> 4;
  v307 = v306 + 1;
  if ((unsigned __int64)(v306 + 1) >> 60 != 0) {
    goto LABEL_560;
  }
  v308 = v302 - v304;
  if (v308 >> 3 > v307) {
    v307 = v308 >> 3;
  }
  if ((unsigned __int64)v308 >= 0x7FFFFFFFFFFFFFF0LL) {
    v309 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v309 = v307;
  }
  if (v309 >> 60 != 0) {
    goto LABEL_561;
  }
  v310 = fw_memory_HeapManager_Allocate(*v82, 16 * v309, 16, 0);
  v311 = (_QWORD*)(v310 + v305);
  v312 = v310 + 16 * v309;
  *v311 = v299;
  v311[1] = v300;
  if (v300 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v300 + 16), 1u,
                              memory_order_relaxed);
    v304 = *(_QWORD*)(a1 + 56);
    v305 = *(_QWORD*)(a1 + 64) - v304;
    v306 = v305 >> 4;
  }
  v313 = &v311[-2 * v306];
  v303 = v311 + 2;
  result = memcpy(v313, v304, v305);
  *(_QWORD*)(a1 + 56) = v313;
  *(_QWORD*)(a1 + 64) = v303;
  *(_QWORD*)(a1 + 72) = v312;
  if (v304 != 0) {
    v314 = 128;
    if (*(_QWORD*)(*v82 + 200LL) == 0) {
      v314 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v82 + v314);
  }
  v158 = v461;
LABEL_369:
  *v156 = v303;
  if (v300 != 0) {
    result = std___1___shared_weak_count___release_weak(v300);
  }
  v315 = *(_QWORD*)(a1 + 4696);
  v316 = *(_QWORD*)(a1 + 4704);
  if (v316 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v316 + 16), 1u,
                              memory_order_relaxed);
    v317 = (_QWORD*)*v156;
    v318 = *v158;
    if (*v156 < *v158) {
      *v317 = v315;
      v317[1] = v316;
      v319 = v317 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v316 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_390;
    }
  }
  else {
    v317 = (_QWORD*)*v156;
    v318 = *v158;
    if (*v156 < *v158) {
      *v317 = v315;
      v317[1] = 0;
      v319 = v317 + 2;
      goto LABEL_390;
    }
  }
  v320 = *(_QWORD*)(a1 + 56);
  v321 = (__int64)v317 - v320;
  v322 = ((__int64)v317 - v320) >> 4;
  v323 = v322 + 1;
  if ((unsigned __int64)(v322 + 1) >> 60 != 0) {
    goto LABEL_560;
  }
  v324 = v318 - v320;
  if (v324 >> 3 > v323) {
    v323 = v324 >> 3;
  }
  if ((unsigned __int64)v324 >= 0x7FFFFFFFFFFFFFF0LL) {
    v325 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v325 = v323;
  }
  if (v325 >> 60 != 0) {
    goto LABEL_561;
  }
  v326 = fw_memory_HeapManager_Allocate(*v82, 16 * v325, 16, 0);
  v327 = (_QWORD*)(v326 + v321);
  v328 = v326 + 16 * v325;
  *v327 = v315;
  v327[1] = v316;
  if (v316 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v316 + 16), 1u,
                              memory_order_relaxed);
    v320 = *(_QWORD*)(a1 + 56);
    v321 = *(_QWORD*)(a1 + 64) - v320;
    v322 = v321 >> 4;
  }
  v329 = &v327[-2 * v322];
  v319 = v327 + 2;
  result = memcpy(v329, v320, v321);
  *(_QWORD*)(a1 + 56) = v329;
  *(_QWORD*)(a1 + 64) = v319;
  *(_QWORD*)(a1 + 72) = v328;
  if (v320 != 0) {
    v330 = 128;
    if (*(_QWORD*)(*v82 + 200LL) == 0) {
      v330 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v82 + v330);
  }
  v158 = v461;
LABEL_390:
  *v156 = v319;
  if (v316 != 0) {
    result = std___1___shared_weak_count___release_weak(v316);
  }
  v331 = *(_QWORD*)(a1 + 4712);
  v332 = *(_QWORD*)(a1 + 4720);
  if (v332 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v332 + 16), 1u,
                              memory_order_relaxed);
    v333 = (_QWORD*)*v156;
    v334 = *v158;
    if (*v156 < *v158) {
      *v333 = v331;
      v333[1] = v332;
      v335 = v333 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v332 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_411;
    }
  }
  else {
    v333 = (_QWORD*)*v156;
    v334 = *v158;
    if (*v156 < *v158) {
      *v333 = v331;
      v333[1] = 0;
      v335 = v333 + 2;
      goto LABEL_411;
    }
  }
  v336 = *(_QWORD*)(a1 + 56);
  v337 = (__int64)v333 - v336;
  v338 = ((__int64)v333 - v336) >> 4;
  v339 = v338 + 1;
  if ((unsigned __int64)(v338 + 1) >> 60 != 0) {
    goto LABEL_560;
  }
  v340 = v334 - v336;
  if (v340 >> 3 > v339) {
    v339 = v340 >> 3;
  }
  if ((unsigned __int64)v340 >= 0x7FFFFFFFFFFFFFF0LL) {
    v341 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v341 = v339;
  }
  if (v341 >> 60 != 0) {
    goto LABEL_561;
  }
  v342 = fw_memory_HeapManager_Allocate(*v82, 16 * v341, 16, 0);
  v343 = (_QWORD*)(v342 + v337);
  v344 = v342 + 16 * v341;
  *v343 = v331;
  v343[1] = v332;
  if (v332 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v332 + 16), 1u,
                              memory_order_relaxed);
    v336 = *(_QWORD*)(a1 + 56);
    v337 = *(_QWORD*)(a1 + 64) - v336;
    v338 = v337 >> 4;
  }
  v345 = &v343[-2 * v338];
  v335 = v343 + 2;
  result = memcpy(v345, v336, v337);
  *(_QWORD*)(a1 + 56) = v345;
  *(_QWORD*)(a1 + 64) = v335;
  *(_QWORD*)(a1 + 72) = v344;
  if (v336 != 0) {
    v346 = 128;
    if (*(_QWORD*)(*v82 + 200LL) == 0) {
      v346 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v82 + v346);
  }
  v158 = v461;
LABEL_411:
  *v156 = v335;
  if (v332 != 0) {
    result = std___1___shared_weak_count___release_weak(v332);
  }
  v347 = *(_QWORD*)(a1 + 4728);
  v348 = *(_QWORD*)(a1 + 4736);
  if (v348 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v348 + 16), 1u,
                              memory_order_relaxed);
    v349 = (_QWORD*)*v156;
    v350 = *v158;
    if (*v156 < *v158) {
      *v349 = v347;
      v349[1] = v348;
      v351 = v349 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v348 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_432;
    }
  }
  else {
    v349 = (_QWORD*)*v156;
    v350 = *v158;
    if (*v156 < *v158) {
      *v349 = v347;
      v349[1] = 0;
      v351 = v349 + 2;
      goto LABEL_432;
    }
  }
  v352 = *(_QWORD*)(a1 + 56);
  v353 = (__int64)v349 - v352;
  v354 = ((__int64)v349 - v352) >> 4;
  v355 = v354 + 1;
  if ((unsigned __int64)(v354 + 1) >> 60 != 0) {
    goto LABEL_560;
  }
  v356 = v350 - v352;
  if (v356 >> 3 > v355) {
    v355 = v356 >> 3;
  }
  if ((unsigned __int64)v356 >= 0x7FFFFFFFFFFFFFF0LL) {
    v357 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v357 = v355;
  }
  if (v357 >> 60 != 0) {
    goto LABEL_561;
  }
  v358 = fw_memory_HeapManager_Allocate(*v82, 16 * v357, 16, 0);
  v359 = (_QWORD*)(v358 + v353);
  v360 = v358 + 16 * v357;
  *v359 = v347;
  v359[1] = v348;
  if (v348 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v348 + 16), 1u,
                              memory_order_relaxed);
    v352 = *(_QWORD*)(a1 + 56);
    v353 = *(_QWORD*)(a1 + 64) - v352;
    v354 = v353 >> 4;
  }
  v361 = &v359[-2 * v354];
  v351 = v359 + 2;
  result = memcpy(v361, v352, v353);
  *(_QWORD*)(a1 + 56) = v361;
  *(_QWORD*)(a1 + 64) = v351;
  *(_QWORD*)(a1 + 72) = v360;
  if (v352 != 0) {
    v362 = 128;
    if (*(_QWORD*)(*v82 + 200LL) == 0) {
      v362 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v82 + v362);
  }
  v158 = v461;
LABEL_432:
  *v156 = v351;
  if (v348 != 0) {
    result = std___1___shared_weak_count___release_weak(v348);
  }
  v363 = *(_QWORD*)(a1 + 4744);
  v364 = *(_QWORD*)(a1 + 4752);
  if (v364 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v364 + 16), 1u,
                              memory_order_relaxed);
    v365 = (_QWORD*)*v156;
    v366 = *v158;
    if (*v156 < *v158) {
      *v365 = v363;
      v365[1] = v364;
      v367 = v365 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v364 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_453;
    }
  }
  else {
    v365 = (_QWORD*)*v156;
    v366 = *v158;
    if (*v156 < *v158) {
      *v365 = v363;
      v365[1] = 0;
      v367 = v365 + 2;
      goto LABEL_453;
    }
  }
  v368 = *(_QWORD*)(a1 + 56);
  v369 = (__int64)v365 - v368;
  v370 = ((__int64)v365 - v368) >> 4;
  v371 = v370 + 1;
  if ((unsigned __int64)(v370 + 1) >> 60 != 0) {
    goto LABEL_560;
  }
  v372 = v366 - v368;
  if (v372 >> 3 > v371) {
    v371 = v372 >> 3;
  }
  if ((unsigned __int64)v372 >= 0x7FFFFFFFFFFFFFF0LL) {
    v373 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v373 = v371;
  }
  if (v373 >> 60 != 0) {
    goto LABEL_561;
  }
  v374 = fw_memory_HeapManager_Allocate(*v82, 16 * v373, 16, 0);
  v375 = (_QWORD*)(v374 + v369);
  v376 = v374 + 16 * v373;
  *v375 = v363;
  v375[1] = v364;
  if (v364 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v364 + 16), 1u,
                              memory_order_relaxed);
    v368 = *(_QWORD*)(a1 + 56);
    v369 = *(_QWORD*)(a1 + 64) - v368;
    v370 = v369 >> 4;
  }
  v377 = &v375[-2 * v370];
  v367 = v375 + 2;
  result = memcpy(v377, v368, v369);
  *(_QWORD*)(a1 + 56) = v377;
  *(_QWORD*)(a1 + 64) = v367;
  *(_QWORD*)(a1 + 72) = v376;
  if (v368 != 0) {
    v378 = 128;
    if (*(_QWORD*)(*v82 + 200LL) == 0) {
      v378 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v82 + v378);
  }
  v158 = v461;
LABEL_453:
  *v156 = v367;
  if (v364 != 0) {
    result = std___1___shared_weak_count___release_weak(v364);
  }
  v379 = *(_QWORD*)(a1 + 4760);
  v380 = *(_QWORD*)(a1 + 4768);
  if (v380 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v380 + 16), 1u,
                              memory_order_relaxed);
    v381 = (_QWORD*)*v156;
    v382 = *v158;
    if (*v156 < *v158) {
      *v381 = v379;
      v381[1] = v380;
      v383 = v381 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v380 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_474;
    }
  }
  else {
    v381 = (_QWORD*)*v156;
    v382 = *v158;
    if (*v156 < *v158) {
      *v381 = v379;
      v381[1] = 0;
      v383 = v381 + 2;
      goto LABEL_474;
    }
  }
  v384 = *(_QWORD*)(a1 + 56);
  v385 = (__int64)v381 - v384;
  v386 = ((__int64)v381 - v384) >> 4;
  v387 = v386 + 1;
  if ((unsigned __int64)(v386 + 1) >> 60 != 0) {
    goto LABEL_560;
  }
  v388 = v382 - v384;
  if (v388 >> 3 > v387) {
    v387 = v388 >> 3;
  }
  if ((unsigned __int64)v388 >= 0x7FFFFFFFFFFFFFF0LL) {
    v389 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v389 = v387;
  }
  if (v389 >> 60 != 0) {
    goto LABEL_561;
  }
  v390 = fw_memory_HeapManager_Allocate(*v82, 16 * v389, 16, 0);
  v391 = (_QWORD*)(v390 + v385);
  v392 = v390 + 16 * v389;
  *v391 = v379;
  v391[1] = v380;
  if (v380 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v380 + 16), 1u,
                              memory_order_relaxed);
    v384 = *(_QWORD*)(a1 + 56);
    v385 = *(_QWORD*)(a1 + 64) - v384;
    v386 = v385 >> 4;
  }
  v393 = &v391[-2 * v386];
  v383 = v391 + 2;
  result = memcpy(v393, v384, v385);
  *(_QWORD*)(a1 + 56) = v393;
  *(_QWORD*)(a1 + 64) = v383;
  *(_QWORD*)(a1 + 72) = v392;
  if (v384 != 0) {
    v394 = 128;
    if (*(_QWORD*)(*v82 + 200LL) == 0) {
      v394 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v82 + v394);
  }
  v158 = v461;
LABEL_474:
  *v156 = v383;
  if (v380 != 0) {
    result = std___1___shared_weak_count___release_weak(v380);
  }
  v395 = *(_QWORD*)(a1 + 4776);
  v396 = *(_QWORD*)(a1 + 4784);
  if (v396 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v396 + 16), 1u,
                              memory_order_relaxed);
    v397 = (_QWORD*)*v156;
    v398 = *v158;
    if (*v156 < *v158) {
      *v397 = v395;
      v397[1] = v396;
      v399 = v397 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v396 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_495;
    }
  }
  else {
    v397 = (_QWORD*)*v156;
    v398 = *v158;
    if (*v156 < *v158) {
      *v397 = v395;
      v397[1] = 0;
      v399 = v397 + 2;
      goto LABEL_495;
    }
  }
  v400 = *(_QWORD*)(a1 + 56);
  v401 = (__int64)v397 - v400;
  v402 = ((__int64)v397 - v400) >> 4;
  v403 = v402 + 1;
  if ((unsigned __int64)(v402 + 1) >> 60 != 0) {
    goto LABEL_560;
  }
  v404 = v398 - v400;
  if (v404 >> 3 > v403) {
    v403 = v404 >> 3;
  }
  if ((unsigned __int64)v404 >= 0x7FFFFFFFFFFFFFF0LL) {
    v405 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v405 = v403;
  }
  if (v405 >> 60 != 0) {
    goto LABEL_561;
  }
  v406 = fw_memory_HeapManager_Allocate(*v82, 16 * v405, 16, 0);
  v407 = (_QWORD*)(v406 + v401);
  v408 = v406 + 16 * v405;
  *v407 = v395;
  v407[1] = v396;
  if (v396 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v396 + 16), 1u,
                              memory_order_relaxed);
    v400 = *(_QWORD*)(a1 + 56);
    v401 = *(_QWORD*)(a1 + 64) - v400;
    v402 = v401 >> 4;
  }
  v409 = &v407[-2 * v402];
  v399 = v407 + 2;
  result = memcpy(v409, v400, v401);
  *(_QWORD*)(a1 + 56) = v409;
  *(_QWORD*)(a1 + 64) = v399;
  *(_QWORD*)(a1 + 72) = v408;
  if (v400 != 0) {
    v410 = 128;
    if (*(_QWORD*)(*v82 + 200LL) == 0) {
      v410 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v82 + v410);
  }
  v158 = v461;
LABEL_495:
  *v156 = v399;
  if (v396 != 0) {
    result = std___1___shared_weak_count___release_weak(v396);
  }
  v411 = *(_QWORD*)(a1 + 4792);
  v412 = *(_QWORD*)(a1 + 4800);
  if (v412 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v412 + 16), 1u,
                              memory_order_relaxed);
    v413 = (_QWORD*)*v156;
    v414 = *v158;
    if (*v156 < *v158) {
      *v413 = v411;
      v413[1] = v412;
      v415 = v413 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v412 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_516;
    }
  }
  else {
    v413 = (_QWORD*)*v156;
    v414 = *v158;
    if (*v156 < *v158) {
      *v413 = v411;
      v413[1] = 0;
      v415 = v413 + 2;
      goto LABEL_516;
    }
  }
  v416 = *(_QWORD*)(a1 + 56);
  v417 = (__int64)v413 - v416;
  v418 = ((__int64)v413 - v416) >> 4;
  v419 = v418 + 1;
  if ((unsigned __int64)(v418 + 1) >> 60 != 0) {
    goto LABEL_560;
  }
  v420 = v414 - v416;
  if (v420 >> 3 > v419) {
    v419 = v420 >> 3;
  }
  if ((unsigned __int64)v420 >= 0x7FFFFFFFFFFFFFF0LL) {
    v421 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v421 = v419;
  }
  if (v421 >> 60 != 0) {
    goto LABEL_561;
  }
  v422 = fw_memory_HeapManager_Allocate(*v82, 16 * v421, 16, 0);
  v423 = (_QWORD*)(v422 + v417);
  v424 = v422 + 16 * v421;
  *v423 = v411;
  v423[1] = v412;
  if (v412 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v412 + 16), 1u,
                              memory_order_relaxed);
    v416 = *(_QWORD*)(a1 + 56);
    v417 = *(_QWORD*)(a1 + 64) - v416;
    v418 = v417 >> 4;
  }
  v425 = &v423[-2 * v418];
  v415 = v423 + 2;
  result = memcpy(v425, v416, v417);
  *(_QWORD*)(a1 + 56) = v425;
  *(_QWORD*)(a1 + 64) = v415;
  *(_QWORD*)(a1 + 72) = v424;
  if (v416 != 0) {
    v426 = 128;
    if (*(_QWORD*)(*v82 + 200LL) == 0) {
      v426 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v82 + v426);
  }
  v158 = v461;
LABEL_516:
  *v156 = v415;
  if (v412 != 0) {
    result = std___1___shared_weak_count___release_weak(v412);
  }
  v427 = *(_QWORD*)(a1 + 4808);
  v428 = *(_QWORD*)(a1 + 4816);
  if (v428 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v428 + 16), 1u,
                              memory_order_relaxed);
    v429 = (_QWORD*)*v156;
    v430 = *v158;
    if (*v156 < *v158) {
      *v429 = v427;
      v429[1] = v428;
      v431 = v429 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v428 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_537;
    }
  }
  else {
    v429 = (_QWORD*)*v156;
    v430 = *v158;
    if (*v156 < *v158) {
      *v429 = v427;
      v429[1] = 0;
      v431 = v429 + 2;
      goto LABEL_537;
    }
  }
  v432 = *(_QWORD*)(a1 + 56);
  v433 = (__int64)v429 - v432;
  v434 = ((__int64)v429 - v432) >> 4;
  v435 = v434 + 1;
  if ((unsigned __int64)(v434 + 1) >> 60 != 0) {
    goto LABEL_560;
  }
  v436 = v430 - v432;
  if (v436 >> 3 > v435) {
    v435 = v436 >> 3;
  }
  if ((unsigned __int64)v436 >= 0x7FFFFFFFFFFFFFF0LL) {
    v437 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v437 = v435;
  }
  if (v437 >> 60 != 0) {
  LABEL_561:
    GameRoutine_60a210(result);
  }
  v438 = fw_memory_HeapManager_Allocate(*v82, 16 * v437, 16, 0);
  v439 = (_QWORD*)(v438 + v433);
  v440 = v438 + 16 * v437;
  *v439 = v427;
  v439[1] = v428;
  if (v428 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v428 + 16), 1u,
                              memory_order_relaxed);
    v432 = *(_QWORD*)(a1 + 56);
    v433 = *(_QWORD*)(a1 + 64) - v432;
    v434 = v433 >> 4;
  }
  v441 = &v439[-2 * v434];
  v431 = v439 + 2;
  result = memcpy(v441, v432, v433);
  *(_QWORD*)(a1 + 56) = v441;
  *(_QWORD*)(a1 + 64) = v431;
  *(_QWORD*)(a1 + 72) = v440;
  if (v432 != 0) {
    v442 = 128;
    if (*(_QWORD*)(*v82 + 200LL) == 0) {
      v442 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v82 + v442);
  }
  v158 = v461;
LABEL_537:
  *v156 = v431;
  if (v428 != 0) {
    result = std___1___shared_weak_count___release_weak(v428);
  }
  v443 = *(_QWORD*)(a1 + 4824);
  v444 = *(_QWORD*)(a1 + 4832);
  if (v444 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v444 + 16), 1u,
                              memory_order_relaxed);
    v445 = (_QWORD*)*v156;
    v446 = *v158;
    if (*v156 < *v158) {
      *v445 = v443;
      v445[1] = v444;
      v447 = v445 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v444 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_557;
    }
  }
  else {
    v445 = (_QWORD*)*v156;
    v446 = *v158;
    if (*v156 < *v158) {
      *v445 = v443;
      v445[1] = 0;
      v447 = v445 + 2;
      goto LABEL_557;
    }
  }
  v448 = *(_QWORD*)(a1 + 56);
  v449 = (__int64)v445 - v448;
  v450 = ((__int64)v445 - v448) >> 4;
  v451 = v450 + 1;
  if ((unsigned __int64)(v450 + 1) >> 60 != 0) {
  LABEL_560:
    GameRoutine_f0af70(result);
  }
  v452 = v446 - v448;
  if (v452 >> 3 > v451) {
    v451 = v452 >> 3;
  }
  if ((unsigned __int64)v452 >= 0x7FFFFFFFFFFFFFF0LL) {
    v453 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v453 = v451;
  }
  if (v453 >> 60 != 0) {
    goto LABEL_561;
  }
  v454 = fw_memory_HeapManager_Allocate(*v82, 16 * v453, 16, 0);
  v455 = (_QWORD*)(v454 + v449);
  v456 = v454 + 16 * v453;
  *v455 = v443;
  v455[1] = v444;
  if (v444 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v444 + 16), 1u,
                              memory_order_relaxed);
    v448 = *(_QWORD*)(a1 + 56);
    v449 = *(_QWORD*)(a1 + 64) - v448;
    v450 = v449 >> 4;
  }
  v457 = &v455[-2 * v450];
  v447 = v455 + 2;
  result = memcpy(v457, v448, v449);
  *(_QWORD*)(a1 + 56) = v457;
  *(_QWORD*)(a1 + 64) = v447;
  *(_QWORD*)(a1 + 72) = v456;
  if (v448 != 0) {
    v458 = 128;
    if (*(_QWORD*)(*v82 + 200LL) == 0) {
      v458 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v82 + v458);
  }
LABEL_557:
  *v156 = v447;
  if (v444 != 0) {
    result = std___1___shared_weak_count___release_weak(v444);
  }
  *(_QWORD*)(a1 + 5528) = 0;
  *(_QWORD*)(a1 + 5520) = 0;
  return result;
}

__int64 MapDrawManager_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 result;
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
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
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
  _QWORD v56[4];
  _QWORD* v57;
  _QWORD v58[4];
  _QWORD* v59;
  _BYTE v60[32];
  _QWORD* v61;

  v2 = a1[25];
  v1 = a1[26];
  *a1 = GameData_1ff08b8;
  v4 = fw_memory_g_heap_manager_ptr;
  while (v1 != v2) {
    v5 = v1;
    v6 = *(_QWORD*)(v1 - 8);
    if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
    }
    v1 = v5 - 40;
    if ((*(_BYTE*)(v5 - 40) & 1) != 0 && *(_QWORD*)(v5 - 24) != 0) {
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
        v7 = 128;
      }
      else {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v7);
    }
  }
  a1[26] = v2;
  GameRoutine_a867a0(a1 + 28);
  GameRoutine_a867a0(a1 + 29);
  GameRoutine_a867a0(a1 + 30);
  v8 = *(_QWORD*)v4;
  v56[0] = GameData_1ff11d8;
  v57 = v56;
  v59 = v58;
  v58[0] = GameData_1ff11d8;
  v9 = (_QWORD*)fw_memory_HeapManager_Allocate(v8, 64, 16, 0);
  v61 = v9;
  *v9 = GameData_1ff1158;
  v9[2] = GameData_1ff11d8;
  v9[6] = v9 + 2;
  ProcManager_659d40(v60);
  (*(void (**)(_QWORD*))(*v9 + 40LL))(v9);
  if (v59 == v58) {
    v10 = 32;
  }
  else {
    if (v59 == nullptr) {
      goto LABEL_18;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v59 + v10))((__int64)v59);
LABEL_18:
  result = (__int64)v57;
  if (v57 == v56) {
    v12 = 32;
    goto LABEL_22;
  }
  if (v57 != nullptr) {
    v12 = 40;
  LABEL_22:
    result = (*(__int64 (**)(__int64))(*v57 + v12))((__int64)v57);
  }
  v13 = a1[604];
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    result = std___1___shared_weak_count___release_weak(v13);
  }
  v14 = a1[602];
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    result = std___1___shared_weak_count___release_weak(v14);
  }
  v15 = a1[600];
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    result = std___1___shared_weak_count___release_weak(v15);
  }
  v16 = a1[598];
  if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    result = std___1___shared_weak_count___release_weak(v16);
  }
  v17 = a1[596];
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    result = std___1___shared_weak_count___release_weak(v17);
  }
  v18 = a1[594];
  if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    result = std___1___shared_weak_count___release_weak(v18);
  }
  v19 = a1[592];
  if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    result = std___1___shared_weak_count___release_weak(v19);
  }
  v20 = a1[590];
  if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    result = std___1___shared_weak_count___release_weak(v20);
  }
  v21 = a1[588];
  if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
    result = std___1___shared_weak_count___release_weak(v21);
  }
  v22 = a1[586];
  if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    result = std___1___shared_weak_count___release_weak(v22);
  }
  v23 = a1[584];
  if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    result = std___1___shared_weak_count___release_weak(v23);
  }
  v24 = a1[582];
  if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
    result = std___1___shared_weak_count___release_weak(v24);
  }
  v25 = a1[580];
  if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
    result = std___1___shared_weak_count___release_weak(v25);
  }
  v26 = a1[578];
  if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
    result = std___1___shared_weak_count___release_weak(v26);
  }
  v27 = a1[576];
  if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
    result = std___1___shared_weak_count___release_weak(v27);
  }
  v28 = a1[574];
  if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    result = std___1___shared_weak_count___release_weak(v28);
  }
  v29 = a1[572];
  if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
    result = std___1___shared_weak_count___release_weak(v29);
  }
  v30 = a1[570];
  if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
    result = std___1___shared_weak_count___release_weak(v30);
  }
  v31 = a1[568];
  if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
    result = std___1___shared_weak_count___release_weak(v31);
  }
  v32 = a1[547];
  if (v32 != 0) {
    v33 = *(_QWORD*)v4;
    a1[548] = v32;
    v34 = 128;
    if (*(_QWORD*)(v33 + 200) == 0) {
      v34 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v33 + v34);
  }
  v35 = a1[31];
  if (v35 != 0) {
    v36 = *(_QWORD*)v4;
    a1[32] = v35;
    v37 = 128;
    if (*(_QWORD*)(v36 + 200) == 0) {
      v37 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v36 + v37);
  }
  v38 = a1[25];
  if (v38 != 0) {
    v39 = a1[26];
    if (v38 == v39) {
      goto LABEL_102;
    }
    do {
      v40 = v39;
      v41 = *(_QWORD*)(v39 - 8);
      if (v41 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
        result = std___1___shared_weak_count___release_weak(v41);
      }
      v39 = v40 - 40;
      if ((*(_BYTE*)(v40 - 40) & 1) != 0 && *(_QWORD*)(v40 - 24) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v42 = 128;
        }
        else {
          v42 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v42);
      }
    } while (v39 != v38);
    v43 = a1[25];
    a1[26] = v38;
    if (v43 != 0) {
    LABEL_102:
      v44 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v44 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v44);
    }
  }
  v45 = a1[17];
  if (v45 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
    result = std___1___shared_weak_count___release_weak(v45);
  }
  v46 = a1[15];
  if (v46 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v46 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46);
    result = std___1___shared_weak_count___release_weak(v46);
  }
  v47 = a1[13];
  if (v47 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v47 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47);
    result = std___1___shared_weak_count___release_weak(v47);
  }
  v48 = a1[11];
  if (v48 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
    result = std___1___shared_weak_count___release_weak(v48);
  }
  v49 = a1[7];
  if (v49 != 0) {
    v50 = a1[8];
    if (v49 == v50) {
      goto LABEL_124;
    }
    do {
      result = *(_QWORD*)(v50 - 8);
      if (result != 0) {
        result = std___1___shared_weak_count___release_weak(result);
      }
      v50 -= 16;
    } while (v50 != v49);
    v51 = a1[7];
    a1[8] = v49;
    if (v51 != 0) {
    LABEL_124:
      v52 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v52 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v52);
    }
  }
  v53 = a1[6];
  if (v53 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v53 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v53 + 16LL))(v53);
    result = std___1___shared_weak_count___release_weak(v53);
  }
  v54 = a1[4];
  if (v54 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v54 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v54 + 16LL))(v54);
    result = std___1___shared_weak_count___release_weak(v54);
  }
  v55 = a1[2];
  if (v55 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v55 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55);
    result = std___1___shared_weak_count___release_weak(v55);
  }
  *a1 = GameData_1ff09f8;
  if ((_QWORD*)GameData_21cd120 == a1) {
    GameData_21cd120 = 0;
  }
  return result;
}

__int64 game_map_MapDrawManager_UpdateMesh(__int64 a1)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64* v14;
  __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 result;
  __int64* v22;
  __int64* i;
  __int64 v24;
  _QWORD v25[4];
  _QWORD* v26;

  v1 = *(_QWORD**)(a1 + 56);
  v2 = *(_QWORD**)(a1 + 64);
  if (v1 == v2) {
    v7 = *(_QWORD*)(a1 + 56);
  }
  else {
    do {
      v4 = v1[1];
      if (v4 != 0) {
        v5 = std___1___shared_weak_count_lock(v4);
        if (v5 != 0) {
          v6 = v5;
          if (*v1 != 0) {
            (*(void (**)(_QWORD))(*(_QWORD*)*v1 + 16LL))(*v1);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
            std___1___shared_weak_count___release_weak(v6);
          }
        }
      }
      v1 += 2;
    } while (v1 != v2);
    v7 = *(_QWORD*)(a1 + 56);
    v1 = *(_QWORD**)(a1 + 64);
  }
  fw_world_JobContext_Drain(GameData_226b928);
  v8 = GameData_226b928;
  v9 = GameData_226b928 + 32;
  do {
    v10 = *(_DWORD*)(v8 + 8);
    v11 = (v10 + 1) & 0xFFFFFF;
    if (v10 + 1 <= 0) {
      v11 = -(-(v10 + 1) & 0xFFFFFF);
    }
    *(_DWORD*)(v8 + 8) = v11;
    v12 = atomic_load((unsigned __int64*)(v9 + 32LL * (v10 & 0x3F)));
    if (v12 != 0) {
      v10 = -1;
    }
  } while (v10 < 0);
  v13 = v10 | 0xC0000000;
  v14 = (unsigned __int64*)(v9 + 32LL * (v10 & 0x3F));
  v15 = ((__int64)v1 - v7) >> 4;
  nn_os_ClearLightEvent(v14 + 1);
  v16 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  v16[2] = 0;
  v17 = v16;
  v18 = GameData_212e368[0];
  v16[8] = 0;
  *v16 = v18 + 16;
  v16[1] = 0;
  v19 = v14[3];
  v14[3] = (unsigned __int64)v17;
  if (v19 != 0) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)v19 + 8LL))(v19);
  }
  atomic_store(v13, v14);
  v17[1] = v8;
  *((_DWORD*)v17 + 4) = v13;
  v25[2] = v15;
  v25[0] = GameData_1ff12e8;
  v25[1] = v7;
  v26 = v25;
  fw_world_SwapCallables(v25, v17 + 4);
  if (v26 == v25) {
    v20 = 32;
  }
  else {
    if (v26 == nullptr) {
      goto LABEL_25;
    }
    v20 = 40;
  }
  (*(void (**)(__int64))(*v26 + v20))((__int64)v26);
LABEL_25:
  fw_world_JobQueue_Submit(*(_QWORD*)(v8 + 16), v13);
  result = fw_world_JobContext_Wait(GameData_226b928, v13);
  v22 = *(__int64**)(a1 + 56);
  for (i = *(__int64**)(a1 + 64); v22 != i; v22 += 2) {
    result = v22[1];
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      if (result != 0) {
        v24 = result;
        result = *v22;
        if (*v22 != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 32LL))(result);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
          result = std___1___shared_weak_count___release_weak(v24);
        }
      }
    }
  }
  return result;
}

__int64 MapDrawManager_f0a3f0(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3;
  __int64 v4;
  _DWORD* v7;
  int v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  unsigned int v25;
  char v26;
  __int64 v27;
  __int64 v29;
  unsigned int v30;
  int v31;
  __int64 v32;
  unsigned int v33;
  unsigned int v34;
  int v35;
  __int64 v36;
  __int64 v37;
  int v38;
  int v39;

  if (GameData_21ed070 != 0) {
    return 0;
  }
  v36 = v3;
  v37 = v4;
  if (*(_BYTE*)(a1 + 196) != 0) {
    v7 = (_DWORD*)(a1 + 192);
  }
  else {
    v7 = (_DWORD*)GameData_212d168;
  }
  if (*v7 == 0) {
    return 0;
  }
  v10 = *(_QWORD*)(*(_QWORD*)GameData_212d028[0] + 80LL) != 0;
  v11 = GameRoutine_f0a0d0(a1, 9);
  if ((v11 & 1) != 0) {
    v12 = GameRoutine_f097d0(a1);
    if (v12 != 0) {
      v13 = v12;
      v14 = game_g_shared_system_skills_ptr;
      v38 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                       game_g_shared_system_skills_ptr) &
            0xFFF;
      if ((game_HasSkill(v12 + 1744, &v38) & 1) == 0) {
        if (*(_WORD*)(v13 + 492) != 0 || *(_BYTE*)(v13 + 496) != 0 ||
            (v39 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v14) & 0xFFF,
             (game_HasSkill(v13 + 1744, &v39) & 1) == 0)) {
          if ((*(_BYTE*)(v13 + 416) & 4) == 0) {
            v35 = *(_DWORD*)((_BYTE*)((char*)0x40LL) + v14) & 0xFFF;
            if ((game_HasSkill(v13 + 1744, &v35) & 1) == 0) {
              v10 = 1;
            }
          }
        }
      }
    }
  }
  if ((GameRoutine_f0a0d0(a1, 10) & 1) != 0) {
    goto LABEL_17;
  }
  v15 = a3;
  v16 = a2;
  if (*(int*)(a1 + 152) > 0) {
    goto LABEL_20;
  }
  if (*(_BYTE*)(a1 + 5336) == 0 || *(int*)(a1 + 5352) > 0 ||
      (v24 = *(_DWORD*)(a1 + 4368)) <= 8 && ((1 << v24) & 0x141) != 0 ||
      GameData_220b68c != 0 || v24 > 7 || ((1 << v24) & 0xB0) == 0) {
  LABEL_34:
    if (*(_BYTE*)(a1 + 5376) != 0 && *(int*)(a1 + 5392) <= 0) {
      v25 = *(_DWORD*)(a1 + 4368);
      if ((v25 > 8 || ((1 << v25) & 0x141) == 0) && GameData_220b68c == 0 &&
          v25 <= 7 && ((1 << v25) & 0xB0) != 0) {
        v26 = GameRoutine_f23ea0(*(_QWORD*)(GameData_21cd120 + 24) + 254936LL);
        v16 = a2;
        v15 = a3;
        if ((v26 & 1) != 0) {
          v11 = 1;
        }
      }
    }
    goto LABEL_20;
  }
  if ((GameRoutine_f23ea0(*(_QWORD*)(GameData_21cd120 + 24) + 254936LL) & 1) ==
      0) {
    v15 = a3;
    v16 = a2;
    if (*(int*)(a1 + 152) > 0) {
      goto LABEL_20;
    }
    goto LABEL_34;
  }
LABEL_17:
  v11 = 1;
  v15 = a3;
  v16 = a2;
LABEL_20:
  v17 = v16 + 32 * v15;
  if (v10 != 0) {
    v10 = (*(_DWORD*)(a1 + 4LL * (v17 >> 5) + 4408) >> v16) & 1;
  }
  if ((v11 & 1) != 0) {
    v18 = *(_QWORD*)(GameData_21cd120 + 24);
    v19 = *(_QWORD*)(GameData_21cd120 + 104);
    if (v19 != 0 &&
        (v20 = *(_QWORD*)(GameData_21cd120 + 96),
         v21 = *(_QWORD*)(GameData_21cd120 + 104),
         atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                                   memory_order_relaxed),
         v22 = std___1___shared_weak_count_lock(v21),
         std___1___shared_weak_count___release_weak(v19), v16 = a2, v15 = a3,
         v22 != 0)) {
      if (v20 != 0) {
        v23 = 254936;
      }
      else if (*(_BYTE*)(*(_QWORD*)GameData_212d038[0] + 156LL) != 0) {
        v23 = 8;
      }
      else {
        v23 = 127472;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
        std___1___shared_weak_count___release_weak(v22);
        v16 = a2;
        v15 = a3;
      }
    }
    else if (*(_BYTE*)(*(_QWORD*)GameData_212d038[0] + 156LL) != 0) {
      v23 = 8;
    }
    else {
      v23 = 127472;
    }
    v27 = v18 + v23;
    if ((*(_QWORD*)(v18 + v23 + 127168) | *(_QWORD*)(v18 + v23 + 127192)) !=
            0 &&
        v18 != 0) {
      v29 = v18 + v23;
      v30 = v16;
      if ((GameRoutine_f25920(v29, v16, v15, 0, 256) & 1) != 0) {
        v31 = v10 | 2;
      }
      else {
        v31 = v10;
      }
      if ((GameRoutine_f25920(v27, v30, v15, 0, 257) & 1) != 0) {
        v31 |= 4u;
      }
      if ((GameRoutine_f25920(v27, v30, v15, 1, 0) & 1) != 0) {
        v31 |= 8u;
      }
      if ((GameRoutine_f25920(v27, v30, v15, 2, 0) & 1) != 0) {
        v10 = v31 | 0x10;
      }
      else {
        v10 = v31;
      }
    }
  }
  if ((unsigned int)v17 >= 0x400) {
    v32 = 0;
  }
  else {
    v32 = (unsigned int)v17;
  }
  v33 = *(unsigned __int8*)(*(_QWORD*)(*GameData_212ce98[0] + 152) + v32 + 8);
  if ((*(_BYTE*)(*GameData_212ce90[0] + 21) & (v33 != 0)) != 0) {
    v34 = v10 | 0x20;
  }
  else {
    v34 = v10;
  }
  if (v33 <= 1) {
    return v34;
  }
  else {
    return v34 | 0x40;
  }
}

void game_map_MapDrawManager_UpdateTrickDangerMapPos()
{
  _QWORD* v0;
  char* v1;
  __int64 v2;
  __int64 v3;
  long double v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char v12;
  bool v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char v20;
  int v21;
  int v22;
  unsigned __int64 v23;
  __int64 v24;
  float v25;
  __int64 v26;
  int v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  float v35;
  float v36;
  unsigned int v37;
  __int64 v38;
  _QWORD* v39;
  _QWORD* v40;
  _QWORD* v41;
  _QWORD* v42;
  __int64 v43;
  char v44;
  float v45;
  int v46;
  bool v47;
  int v48;
  char* v49;
  __int64 v50;
  __int64 v51;
  char* v52;
  __int64 v53;
  __int64 v54;
  char* v55;
  __int64 v56;
  __int64 v57;
  unsigned int v58;
  _QWORD v59[4];
  _QWORD* v60;
  __int64 v61;
  char v62;

  if (*GameData_212ce98[0] != 0) {
    v0 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v1 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
    v2 = *v0;
    strcpy(v1, "MapDrawManager::Update (Total)");
    v3 = 128;
    if (*(_QWORD*)(v2 + 200) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(v2 + v3);
    v5 = *(_QWORD*)GameData_212d020[0];
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 8LL) + 10LL) ==
        1) {
      v6 = *(_QWORD*)(v5 + 200);
      v7 = *(_QWORD*)(v5 + 208);
      if (v6 == v7) {
      LABEL_9:
        v8 = *(_QWORD*)(*(_QWORD*)(v5 + 4536) + 40LL);
        v9 = *(_QWORD*)(v8 + 88);
        v10 = *(_QWORD*)(v8 + 96);
        if (v9 == v10) {
        LABEL_16:
          v14 = *(_QWORD*)(v5 + 4552);
          v15 = 16;
          while (1) {
            v16 = **(_QWORD**)(v14 + v15);
            v17 = *(_QWORD*)(v16 + 88);
            v18 = *(_QWORD*)(v16 + 96);
            if (v17 != v18) {
              break;
            }
          LABEL_18:
            v15 += 16;
            if (v15 == 1040) {
              if (game_ProcGameSkipView_instance_ != 0 &&
                  *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
                v21 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
                v22 = (v21 & 8) != 0 ? 2 : 3;
                if ((v22 & v21) == 0) {
                  goto LABEL_68;
                }
              }
              if (game_ProcFadeView_instance_ != 0) {
                v23 = game_ProcFadeView_instance_ +
                      ((unsigned __int64)*(
                           unsigned __int8*)(game_ProcFadeView_instance_ + 480)
                       << 6);
                if (*(float*)(v23 + 172) == *(float*)(v23 + 168)) {
                  (*(void (**)(unsigned __int64))(*(_QWORD*)(v23 + 160) +
                                                  16LL))(v23 + 160);
                }
                else {
                  v4 = *(long double*)(v23 + 208);
                }
                LODWORD(v4) = HIDWORD(v4);
                if (*((float*)&v4 + 3) == 1.0) {
                  *(__n128*)&v4 = ((__n128 (*)(unsigned __int64, float)) *
                                   (_QWORD*)(*(_QWORD*)(v23 + 160) + 16LL))(
                      v23 + 160, *((float*)&v4 + 3));
                  LODWORD(v4) = HIDWORD(v4);
                  if (*((float*)&v4 + 3) == 1.0) {
                    goto LABEL_68;
                  }
                }
              }
              if (((*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
                    *(_QWORD*)(*(_QWORD*)GameData_212c638 + 24LL)) &
                   0x7FFFFFFF8LL) != 8) {
                goto LABEL_68;
              }
              v24 = game_script_hub_g_frame_counter_ptr[0];
              v25 = *(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                              160LL);
              *(_QWORD*)(v5 + 4400) = 0;
              GameRoutine_f06500(v5, v4);
              GameRoutine_f2ffc0(*(_QWORD*)(v5 + 40));
              v26 = v5 + 4096;
              if (*(int*)(v5 + 4372) <= 0) {
                if ((*(_BYTE*)(v5 + 5554) & 1) != 0) {
                  v27 = 1;
                }
                else if (GameData_21cf830 != 0 &&
                         (v29 = *(_QWORD*)(GameData_21cf830 + 8),
                          v28 = *(_QWORD*)(GameData_21cf830 + 16),
                          v29 <= v28)) {
                  while (*(_BYTE*)v28 != 2) {
                    v28 -= 64LL;
                    if (v29 > v28) {
                      goto LABEL_46;
                    }
                  }
                  v58 = *(_DWORD*)(v28 + 32) - 1;
                  if (v58 > 0x19) {
                    v27 = 0;
                  }
                  else {
                    v27 = GameData_1b97a00[v58];
                  }
                  v26 = v5 + 4096;
                }
                else {
                LABEL_46:
                  v27 = 0;
                }
                if (*(_DWORD*)(v5 + 4368) != v27) {
                  *(_DWORD*)(v5 + 4368) = v27;
                  *(_DWORD*)(v5 + 5540) = 0;
                }
              }
              v30 = GameData_212cfb8[0];
              v31 = *(_QWORD*)(v5 + 4376);
              v61 = v5;
              v32 = *GameData_212ce90[0];
              *(_QWORD*)(v5 + 4384) = v31;
              LOBYTE(v32) = *(_BYTE*)(v32 + 21);
              v60 = v59;
              v62 = v32 & 1;
              v33 = *v30;
              v59[0] = GameData_1ff1268;
              v59[1] = &v62;
              v59[2] = &v61;
              game_map_Trick_Impl_EachDanger(*(_QWORD*)(v33 + 16), v59);
              if (v60 == v59) {
                v34 = 32;
              LABEL_53:
                (*(void (**)(__int64))(*v60 + v34))((__int64)v60);
              }
              else if (v60 != nullptr) {
                v34 = 40;
                goto LABEL_53;
              }
              v35 = v25 * 0x1.0aef000000000p+4;
              if ((game_map_1048e00(*(_QWORD*)(v5 + 24)) & 1) != 0) {
                ++*(_QWORD*)(v5 + 168);
                *(_DWORD*)(*(_QWORD*)(v5 + 128) + 8LL) = 0;
              }
              v36 = v35 / 0x1.f400000000000p+9;
              if (*(_QWORD*)(v5 + 96) != 0) {
                v37 = *(_DWORD*)(v5 + 4368);
                if (v37 > 7 || ((1 << v37) & 0xB0) == 0) {
                  v38 = *(_QWORD*)(v5 + 128);
                  if (*(_BYTE*)(v38 + 56) != 1 ||
                      (*(_BYTE*)(v38 + 56) = 0, *(_QWORD*)(v5 + 96) != 0)) {
                    v39 = *(_QWORD**)(v5 + 104);
                    *(_QWORD*)(v5 + 96) = 0;
                    *(_QWORD*)(v5 + 104) = 0;
                    if (v39 != nullptr &&
                        atomic_fetch_add((atomic_ullong* volatile)(v39 + 1),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      v40 = v0;
                      v41 = v39;
                      (*(__attribute__((swiftcall)) void (**)(
                          PSEUDO_X8, _QWORD*))(*v39 + 16LL))((void*)v39, v39);
                      v42 = v41;
                      v0 = v40;
                      std___1___shared_weak_count___release_weak(v42);
                    }
                    ++*(_QWORD*)(v5 + 176);
                  }
                }
              }
              GameRoutine_f067f0(v5);
              v43 = GameRoutine_f06b60(v5);
              v44 = GameRoutine_1551d30(v43);
              v45 = *(float*)(v5 + 160);
              *(_BYTE*)(v26 + 1457) = v44 & 1;
              *(float*)(v5 + 160) = v36 + v45;
              game_map_f06e20(v5);
              game_map_f086e0(v5);
              game_map_f089a0(v5);
              game_10221c0(*(_QWORD*)(v5 + 128));
              game_map_MapDrawManager_UpdateMesh(v5);
              game_f30440(*(_QWORD*)(v5 + 40));
              if ((float)((float)(*(float*)(*(_QWORD*)v24 + 160LL) *
                                  0x1.0aef000000000p+4) /
                          0x1.f400000000000p+9) > 0.0) {
                v46 = *(_DWORD*)(v5 + 4372);
                v47 = __OFSUB__(v46, 1);
                v48 = v46 - 1;
                if (v48 < 0 == v47) {
                  *(_DWORD*)(v5 + 4372) = v48;
                }
              }
              goto LABEL_68;
            }
          }
          v19 = v17 + 40;
          while (*(_BYTE*)(*(_QWORD*)(v19 - 16) + 165LL) == 1) {
            v20 = GameRoutine_ad7390();
            if ((v20 & 1) != 0) {
              v13 = v19 == v18;
              v19 += 40;
              if (!v13) {
                continue;
              }
            }
            if ((v20 & 1) == 0) {
              break;
            }
            goto LABEL_18;
          }
        }
        else {
          v11 = v9 + 40;
          while (*(_BYTE*)(*(_QWORD*)(v11 - 16) + 165LL) == 1) {
            v12 = GameRoutine_ad7390();
            if ((v12 & 1) != 0) {
              v13 = v11 == v10;
              v11 += 40;
              if (!v13) {
                continue;
              }
            }
            if ((v12 & 1) == 0) {
              break;
            }
            goto LABEL_16;
          }
        }
      }
      else {
        while (*(_BYTE*)(*(_QWORD*)(v6 + 24) + 165LL) == 1 &&
               (GameRoutine_ad7390() & 1) != 0) {
          v6 += 40;
          if (v6 == v7) {
            goto LABEL_9;
          }
        }
      }
    }
  LABEL_68:
    v49 = (char*)fw_memory_HeapManager_Allocate(*v0, 32, 16, 0);
    v50 = *v0;
    strcpy(v49, "MapDrawManager::Update (Total)");
    if (*(_QWORD*)(v50 + 200) != 0) {
      v51 = 128;
    }
    else {
      v51 = 56;
    }
    nn_mem_StandardAllocator_Free(v50 + v51);
    v52 = (char*)fw_memory_HeapManager_Allocate(*v0, 40, 16, 0);
    v53 = *v0;
    strcpy(v52, "PrimitiveDrawStack::Draw (Total)");
    if (*(_QWORD*)(v53 + 200) != 0) {
      v54 = 128;
    }
    else {
      v54 = 56;
    }
    nn_mem_StandardAllocator_Free(v53 + v54);
    GameRoutine_f515e0(*(_QWORD*)GameData_212d018[0]);
    v55 = (char*)fw_memory_HeapManager_Allocate(*v0, 40, 16, 0);
    v56 = *v0;
    strcpy(v55, "PrimitiveDrawStack::Draw (Total)");
    if (*(_QWORD*)(v56 + 200) != 0) {
      v57 = 128;
    }
    else {
      v57 = 56;
    }
    nn_mem_StandardAllocator_Free(v56 + v57);
  }
}

__int64

game_map_MapDrawManager_UpdateTrickDangerMapPos_lambda0_Invoke(__int64 a1,
                                                               _QWORD* a2)
{
  __int64 v2;
  __int64 result;
  _QWORD* v5;
  char* v6;
  char* v7;
  char* v8;
  unsigned __int64 v9;
  __int64 v10;
  char* v11;
  unsigned __int64 v12;
  __int64 v13;
  char* v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  char* v22;
  __int64 v23;
  __int64 v24;

  v2 = *a2;
  if ((**(_BYTE**)(a1 + 8) & 1) == 0) {
    result = (*(__int64 (**)(_QWORD))(*(_QWORD*)v2 + 528LL))(*a2);
    if ((result & 1) == 0) {
      return result;
    }
  }
  v5 = **(_QWORD***)(a1 + 16);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 520LL))(v2);
  if ((result & 1) == 0) {
    return result;
  }
  v6 = (char*)v5[547];
  v7 = (char*)v5[548];
  v8 = v6;
  if (v6 == v7) {
    goto LABEL_20;
  }
  v9 = v7 - v6 - 8;
  v8 = (char*)v5[547];
  if ((~(_BYTE)v9 & 0x18) != 0) {
    v10 = ((unsigned __int8)((unsigned int)v9 >> 3) + 1) & 3;
    v8 = (char*)v5[547];
    while (*(_QWORD*)v8 != v2) {
      v8 += 8;
      if (--v10 == 0) {
        goto LABEL_9;
      }
    }
  LABEL_20:
    if (v8 != v7) {
      return result;
    }
    goto LABEL_21;
  }
LABEL_9:
  if (v9 >= 0x18) {
    v8 += 16;
    while (1) {
      if (*((_QWORD*)v8 - 2) == v2) {
        v8 -= 16;
        goto LABEL_20;
      }
      if (*((_QWORD*)v8 - 1) == v2) {
        v8 -= 8;
        goto LABEL_20;
      }
      if (*(_QWORD*)v8 == v2) {
        goto LABEL_20;
      }
      if (*((_QWORD*)v8 + 1) == v2) {
        break;
      }
      v11 = v8 + 16;
      v8 += 32;
      if (v11 == v7) {
        goto LABEL_21;
      }
    }
    v8 += 8;
    goto LABEL_20;
  }
LABEL_21:
  v12 = v5[549];
  if ((unsigned __int64)v7 >= v12) {
    v14 = (char*)(v7 - v6);
    v15 = (v7 - v6) >> 3;
    v16 = v15 + 1;
    if ((unsigned __int64)(v15 + 1) >> 61 != 0) {
      GameRoutine_f0c890();
    }
    v17 = v12 - (_QWORD)v6;
    v18 = fw_memory_g_heap_manager_ptr;
    if (v17 >> 2 > v16) {
      v16 = v17 >> 2;
    }
    if ((unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF8LL) {
      v19 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v19 = v16;
    }
    if (v19 != 0) {
      if (v19 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v20 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v19, 16, 0);
    }
    else {
      v20 = 0;
    }
    v21 = v20 + 8 * v19;
    v22 = (char*)(v7 - v6);
    v23 = (__int64)&v14[v20 + -8 * v15];
    *(_QWORD*)&v14[v20] = v2;
    v13 = (__int64)&v14[v20 + 8];
    result = memcpy(v23, v6, v22);
    v5[547] = v23;
    v5[548] = v13;
    v5[549] = v21;
    if (v6 != nullptr) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
        v24 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v18 + v24, v6);
    }
  }
  else {
    *(_QWORD*)v7 = v2;
    v13 = (__int64)(v7 + 8);
  }
  v5[548] = v13;
  return result;
}

_DWORD* game_map_MapDrawManager_UpdateMesh_lambda0_Invoke(_DWORD* result,
                                                          __int64 a2,
                                                          atomic_uint* a3)
{
  int v3;
  _DWORD* v5;
  unsigned int v6;
  signed int add;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _DWORD* v13;

  v3 = result[4];
  if (v3 >= 1) {
    v5 = result;
    if (v3 / (int)((((*(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2088LL) -
                      *(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2080LL)) >>
                     2) &
                    0xFFFFFFFE) +
                   2) <=
        1) {
      v6 = 1;
    }
    else {
      v6 = v3 / (int)((((*(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2088LL) -
                         *(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2080LL)) >>
                        2) &
                       0xFFFFFFFE) +
                      2);
    }
    do {
      add = atomic_fetch_add(a3, v6);
      if (add < v3) {
        v8 = add + v6;
        v9 = add;
        v10 = 16LL * add;
        if ((int)(add + v6) >= v3) {
          v8 = v3;
        }
        v11 = v8;
        do {
          v12 = *((_QWORD*)v5 + 1) + v10;
          result = *(_DWORD**)(v12 + 8);
          if (result != nullptr) {
            result = (_DWORD*)std___1___shared_weak_count_lock(result);
            if (result != nullptr) {
              v13 = result;
              result = *(_DWORD**)v12;
              if (*(_QWORD*)v12 != 0) {
                result = (_DWORD*)(*(__int64 (**)(_DWORD*))(*(_QWORD*)result +
                                                            24LL))(result);
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 2),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(_DWORD*))(*(_QWORD*)v13 + 16LL))(v13);
                result =
                    (_DWORD*)std___1___shared_weak_count___release_weak(v13);
              }
            }
          }
          ++v9;
          v10 += 16;
        } while (v9 < v11);
        add = v9;
      }
      if (v6 >> 1 <= 1) {
        v6 = 1;
      }
      else {
        v6 >>= 1;
      }
    } while (add < v3);
  }
  return result;
}

__int64 MapDrawManager_f0cc00(__int64 result)
{
  __int64 v1;
  __int64 v2;

  if ((*(_BYTE*)(result + 80) & 1) != 0) {
    v1 = *(_QWORD*)(result + 96);
    if (v1 != 0) {
      v2 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v2 = 56;
      }
      return nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, v1);
    }
  }
  return result;
}

__int64 game_map_MapDrawManager_GetHash_lambda0_Invoke(__int64 result,
                                                       __int64 a2)
{
  **(_QWORD**)(result + 16) ^=
      **(_QWORD**)(result + 8) + (**(_QWORD**)(result + 16) << 12) +
      (**(_QWORD**)(result + 16) >> 4) - 0x61C8864680B583EBLL;
  **(_QWORD**)(result + 16) ^=
      (**(_QWORD**)(result + 16) << 12) + (unsigned int)*(char*)(a2 + 1) +
      (**(_QWORD**)(result + 16) >> 4) - 0x61C8864680B583EBLL;
  **(_QWORD**)(result + 16) ^=
      (**(_QWORD**)(result + 16) << 12) + (unsigned int)*(char*)(a2 + 2) +
      (**(_QWORD**)(result + 16) >> 4) - 0x61C8864680B583EBLL;
  return result;
}

__int64 game_map_MapDrawManager_GetHash_lambda1_Invoke_f0cf50(__int64 a1,
                                                              __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  _QWORD v6[4];
  _QWORD* v7;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v7 = v6;
  v6[0] = GameData_1ff1548;
  v6[1] = v2;
  (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v3 + 744LL))(v3, v6);
  result = (__int64)v7;
  if (v7 == v6) {
    v5 = 32;
  }
  else {
    if (v7 == nullptr) {
      return result;
    }
    v5 = 40;
  }
  return (*(__int64 (**)(__int64))(*v7 + v5))((__int64)v7);
}

__int64 game_map_MapDrawManager_GetHash_lambda1_Invoke_f0d0c0(__int64 result,
                                                              unsigned int* a2,
                                                              unsigned int* a3)
{
  __int64 v3;

  v3 = *a3;
  **(_QWORD**)(result + 8) ^= *a2 + (**(_QWORD**)(result + 8) << 12) +
                              (**(_QWORD**)(result + 8) >> 4) -
                              0x61C8864680B583EBLL;
  **(_QWORD**)(result + 8) ^= v3 + (**(_QWORD**)(result + 8) << 12) +
                              (**(_QWORD**)(result + 8) >> 4) -
                              0x61C8864680B583EBLL;
  return result;
}

__int64 game_map_MapDrawManager_GetHash_lambda2_Invoke(__int64 result,
                                                       unsigned int* a2,
                                                       unsigned int* a3)
{
  __int64 v3;

  v3 = *a3;
  **(_QWORD**)(result + 8) ^= *a2 + (**(_QWORD**)(result + 8) << 12) +
                              (**(_QWORD**)(result + 8) >> 4) -
                              0x61C8864680B583EBLL;
  **(_QWORD**)(result + 8) ^= v3 + (**(_QWORD**)(result + 8) << 12) +
                              (**(_QWORD**)(result + 8) >> 4) -
                              0x61C8864680B583EBLL;
  return result;
}

__int64 game_map_MapDrawManager_GetHash_lambda3_Invoke_f0d360(__int64 a1,
                                                              __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  _QWORD v6[4];
  _QWORD* v7;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v7 = v6;
  v6[0] = GameData_1ff16c8;
  v6[1] = v2;
  (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v3 + 744LL))(v3, v6);
  result = (__int64)v7;
  if (v7 == v6) {
    v5 = 32;
  }
  else {
    if (v7 == nullptr) {
      return result;
    }
    v5 = 40;
  }
  return (*(__int64 (**)(__int64))(*v7 + v5))((__int64)v7);
}

__int64 game_map_MapDrawManager_GetHash_lambda3_Invoke_f0d4d0(__int64 result,
                                                              unsigned int* a2,
                                                              unsigned int* a3)
{
  __int64 v3;

  v3 = *a3;
  **(_QWORD**)(result + 8) ^= *a2 + (**(_QWORD**)(result + 8) << 12) +
                              (**(_QWORD**)(result + 8) >> 4) -
                              0x61C8864680B583EBLL;
  **(_QWORD**)(result + 8) ^= v3 + (**(_QWORD**)(result + 8) << 12) +
                              (**(_QWORD**)(result + 8) >> 4) -
                              0x61C8864680B583EBLL;
  return result;
}

__int64 game_map_MapDrawManager_GetHash_lambda4_Invoke(__int64 result,
                                                       unsigned int* a2,
                                                       unsigned int* a3)
{
  __int64 v3;

  v3 = *a3;
  **(_QWORD**)(result + 8) ^= *a2 + (**(_QWORD**)(result + 8) << 12) +
                              (**(_QWORD**)(result + 8) >> 4) -
                              0x61C8864680B583EBLL;
  **(_QWORD**)(result + 8) ^= v3 + (**(_QWORD**)(result + 8) << 12) +
                              (**(_QWORD**)(result + 8) >> 4) -
                              0x61C8864680B583EBLL;
  return result;
}

__int64 game_map_MapDrawManager_GetHash_lambda5_Invoke(__int64 result,
                                                       unsigned int* a2,
                                                       unsigned int* a3)
{
  __int64 v3;

  v3 = *a3;
  **(_QWORD**)(result + 8) ^= *a2 + (**(_QWORD**)(result + 8) << 12) +
                              (**(_QWORD**)(result + 8) >> 4) -
                              0x61C8864680B583EBLL;
  **(_QWORD**)(result + 8) ^= v3 + (**(_QWORD**)(result + 8) << 12) +
                              (**(_QWORD**)(result + 8) >> 4) -
                              0x61C8864680B583EBLL;
  return result;
}

__int64 game_map_MapDrawManager_GetHash_lambda6_Invoke(__int64 result,
                                                       unsigned int* a2,
                                                       unsigned int* a3,
                                                       unsigned int* a4)
{
  __int64 v4;
  __int64 v5;

  v4 = *a3;
  v5 = *a4;
  **(_QWORD**)(result + 8) ^= *a2 + (**(_QWORD**)(result + 8) << 12) +
                              (**(_QWORD**)(result + 8) >> 4) -
                              0x61C8864680B583EBLL;
  **(_QWORD**)(result + 8) ^= v4 + (**(_QWORD**)(result + 8) << 12) +
                              (**(_QWORD**)(result + 8) >> 4) -
                              0x61C8864680B583EBLL;
  **(_QWORD**)(result + 8) ^= v5 + (**(_QWORD**)(result + 8) << 12) +
                              (**(_QWORD**)(result + 8) >> 4) -
                              0x61C8864680B583EBLL;
  return result;
}

#pragma GCC visibility pop
