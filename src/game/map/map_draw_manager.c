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
__int64
MapDrawManager_Destructor_alt1(_QWORD* a1) __asm__("MapDrawManager_Destructor");
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
__int64 MapDrawManager_f02ec0_alt1(__int64 a1, __int64 a2, __int64 a3,
                                   __int64 a4, __int64 a5,
                                   __int64 a6) __asm__("MapDrawManager_f02ec0");
__int64
MapDrawManager_f0a3f0_alt1(__int64 a1, unsigned int a2,
                           unsigned int a3) __asm__("MapDrawManager_f0a3f0");
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
__int64 GameRoutine_f097d0_alt1(__int64) __asm__("GameRoutine_f097d0");
__int64 GameRoutine_f0a0d0_alt1(__int64, int) __asm__("GameRoutine_f0a0d0");
__int64 GameRoutine_f25920_alt1(__int64, int, int, unsigned int,
                                __int16) __asm__("GameRoutine_f25920");
__int64 game_HasSkill_alt1(_QWORD*, unsigned int*) __asm__("game_HasSkill");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
bool GameRoutine_f23ea0_alt1(__int64) __asm__("GameRoutine_f23ea0");
__int64 MapDrawManager_f0a3f0(__int64 a1, int a2, int a3);
_DWORD* game_f30440_alt1(__int64) __asm__("game_f30440");
__attribute__((swiftcall)) void g3d_ada070_alt1(PSEUDO_X8, __int64, __int64,
                                                __int64) __asm__("g3d_ada070");
__int64 Components_a870e0_alt1(__int64*, char) __asm__("Components_a870e0");
__int64 GameHr_101c1b0(__int64*);
__int64 GameHr_1046e40(__int64);
__int64 GameHr_a867a0(__int64 result);
__int64 GameHr_f067f0(__int64 result);
__int64 GameRoutine_1551d30_alt1() __asm__("GameRoutine_1551d30");
__int64
GameRoutine_1a09ce0_alt1(__int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a09ce0");
__int64 GameRoutine_f06b60_alt1(__int64) __asm__("GameRoutine_f06b60");
__int64 GameRoutine_f0af90_alt1(__int64*,
                                _QWORD*) __asm__("GameRoutine_f0af90");
__int64 GameRoutine_f1cdd0_alt1(__int64) __asm__("GameRoutine_f1cdd0");
__int64 ProcManager_659d40_alt1(__int64 result) __asm__("ProcManager_659d40");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_map_1048e00_alt1(__int64) __asm__("game_map_1048e00");
__int64 game_map_f15a60_alt1(__int64) __asm__("game_map_f15a60");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
__int64 nn_os_InitializeMutex_alt1(__int64, bool,
                                   int) __asm__("nn_os_InitializeMutex");
bool GameRoutine_ad7390_alt1(_QWORD*) __asm__("GameRoutine_ad7390");
char* GameRoutine_60a060_alt1(char*, __int64,
                              unsigned __int64) __asm__("GameRoutine_60a060");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameHr_ad69c0(_QWORD*);
void GameRoutine_f06500_alt1(_QWORD*) __asm__("GameRoutine_f06500");
void GameRoutine_f2ffc0_alt1(_QWORD*) __asm__("GameRoutine_f2ffc0");
void PrimitiveDrawStack_f515e0(__int64);
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_f0af70_alt1() __asm__("GameRoutine_f0af70");
void game_101c320_alt1(__int64) __asm__("game_101c320");
void game_10221c0_alt1(__int64) __asm__("game_10221c0");
void game_map_100bdf0_alt1(__int64, const char*,
                           unsigned __int64) __asm__("game_map_100bdf0");
void game_map_Trick_Impl_EachDanger_alt1(__int64, __int64) __asm__(
    "game_map_Trick_Impl_EachDanger");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void MapDrawManager_f02ec0(__int64 a1);
void MapDrawManager_Destructor(_QWORD* a1);

void MapDrawManager_f02ec0(__int64 a1)
{
  __int64 v1;
  __int64* v3;
  char v4;
  const char* v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  const char* v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  const char* v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  const char* v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;
  _QWORD* v43;
  _DWORD* v44;
  _QWORD* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64* v53;
  __int64 v54;
  _QWORD* v55;
  _QWORD* v56;
  _QWORD* v57;
  __int64 v58;
  __int64* v59;
  __int64 v60;
  __int64 v61;
  __int64* v62;
  __int64 v63;
  __int64* v64;
  __int64 v65;
  _QWORD* v66;
  _QWORD* v67;
  _QWORD* v68;
  __int64 v69;
  __int64 v70;
  __int64* v71;
  __int64 v72;
  __int64 v73;
  __int64* v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64* v78;
  __int64 v79;
  __int64 v80;
  __int64* v81;
  __int64 v82;
  __int64 v83;
  __int64* v84;
  __int64 v85;
  __int64 v86;
  __int64* v87;
  __int64 v88;
  __int64 v89;
  __int64* v90;
  __int64 v91;
  _QWORD* v92;
  _QWORD* v93;
  _QWORD* v94;
  __int64 v95;
  __int64 v96;
  __int64* v97;
  __int64 v98;
  __int64 v99;
  __int64* v100;
  __int64 v101;
  __int64 v102;
  __int64* v103;
  __int64 v104;
  __int64 v105;
  __int64* v106;
  __int64 v107;
  __int64 v108;
  __int64* v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64* v113;
  __int64 v114;
  __int64 v115;
  __int64* v116;
  __int64 v117;
  __int64 v118;
  __int64* v119;
  __int64 v120;
  __int64 v121;
  __int64* v122;
  __int64 v123;
  __int64 v124;
  __int64* v125;
  __int64 v126;
  __int64 v127;
  __int64* v128;
  __int64 v129;
  __int64 v130;
  char* v131;
  const char* v132;
  unsigned __int64 v133;
  const char* v134;
  unsigned __int64 v135;
  const char* v136;
  unsigned __int64 v137;
  __int64 v138;
  __int64 v139;
  _QWORD* v140;
  _QWORD* v141;
  unsigned __int64 v142;
  _QWORD* v143;
  _QWORD* v144;
  __int64 v145;
  signed __int64 v146;
  __int64 v147;
  unsigned __int64 v148;
  __int64 v149;
  unsigned __int64 v150;
  __int64 v151;
  _QWORD* v152;
  unsigned __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  _QWORD* v158;
  __int64 v159;
  _QWORD* v160;
  __int64 v161;
  signed __int64 v162;
  __int64 v163;
  unsigned __int64 v164;
  __int64 v165;
  unsigned __int64 v166;
  __int64 v167;
  _QWORD* v168;
  unsigned __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  _QWORD* v174;
  __int64 v175;
  _QWORD* v176;
  __int64 v177;
  signed __int64 v178;
  __int64 v179;
  unsigned __int64 v180;
  __int64 v181;
  unsigned __int64 v182;
  __int64 v183;
  _QWORD* v184;
  unsigned __int64 v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  _QWORD* v190;
  __int64 v191;
  _QWORD* v192;
  __int64 v193;
  signed __int64 v194;
  __int64 v195;
  unsigned __int64 v196;
  __int64 v197;
  unsigned __int64 v198;
  __int64 v199;
  _QWORD* v200;
  unsigned __int64 v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  _QWORD* v206;
  __int64 v207;
  _QWORD* v208;
  __int64 v209;
  signed __int64 v210;
  __int64 v211;
  unsigned __int64 v212;
  __int64 v213;
  unsigned __int64 v214;
  __int64 v215;
  _QWORD* v216;
  unsigned __int64 v217;
  __int64 v218;
  __int64 v219;
  __int64 v220;
  __int64 v221;
  _QWORD* v222;
  __int64 v223;
  _QWORD* v224;
  __int64 v225;
  signed __int64 v226;
  __int64 v227;
  unsigned __int64 v228;
  __int64 v229;
  unsigned __int64 v230;
  __int64 v231;
  _QWORD* v232;
  unsigned __int64 v233;
  __int64 v234;
  __int64 v235;
  __int64 v236;
  __int64 v237;
  _QWORD* v238;
  __int64 v239;
  _QWORD* v240;
  __int64 v241;
  signed __int64 v242;
  __int64 v243;
  unsigned __int64 v244;
  __int64 v245;
  unsigned __int64 v246;
  __int64 v247;
  _QWORD* v248;
  unsigned __int64 v249;
  __int64 v250;
  __int64 v251;
  __int64 v252;
  __int64 v253;
  _QWORD* v254;
  __int64 v255;
  _QWORD* v256;
  __int64 v257;
  signed __int64 v258;
  __int64 v259;
  unsigned __int64 v260;
  __int64 v261;
  unsigned __int64 v262;
  __int64 v263;
  _QWORD* v264;
  unsigned __int64 v265;
  __int64 v266;
  __int64 v267;
  __int64 v268;
  __int64 v269;
  _QWORD* v270;
  __int64 v271;
  _QWORD* v272;
  __int64 v273;
  signed __int64 v274;
  __int64 v275;
  unsigned __int64 v276;
  __int64 v277;
  unsigned __int64 v278;
  __int64 v279;
  _QWORD* v280;
  unsigned __int64 v281;
  __int64 v282;
  __int64 v283;
  __int64 v284;
  __int64 v285;
  _QWORD* v286;
  __int64 v287;
  _QWORD* v288;
  __int64 v289;
  signed __int64 v290;
  __int64 v291;
  unsigned __int64 v292;
  __int64 v293;
  unsigned __int64 v294;
  __int64 v295;
  _QWORD* v296;
  unsigned __int64 v297;
  __int64 v298;
  __int64 v299;
  __int64 v300;
  __int64 v301;
  _QWORD* v302;
  __int64 v303;
  _QWORD* v304;
  __int64 v305;
  signed __int64 v306;
  __int64 v307;
  unsigned __int64 v308;
  __int64 v309;
  unsigned __int64 v310;
  __int64 v311;
  _QWORD* v312;
  unsigned __int64 v313;
  __int64 v314;
  __int64 v315;
  __int64 v316;
  __int64 v317;
  _QWORD* v318;
  __int64 v319;
  _QWORD* v320;
  __int64 v321;
  signed __int64 v322;
  __int64 v323;
  unsigned __int64 v324;
  __int64 v325;
  unsigned __int64 v326;
  __int64 v327;
  _QWORD* v328;
  unsigned __int64 v329;
  __int64 v330;
  __int64 v331;
  __int64 v332;
  __int64 v333;
  _QWORD* v334;
  __int64 v335;
  _QWORD* v336;
  __int64 v337;
  signed __int64 v338;
  __int64 v339;
  unsigned __int64 v340;
  __int64 v341;
  unsigned __int64 v342;
  __int64 v343;
  _QWORD* v344;
  unsigned __int64 v345;
  __int64 v346;
  __int64 v347;
  __int64 v348;
  __int64 v349;
  _QWORD* v350;
  __int64 v351;
  _QWORD* v352;
  __int64 v353;
  signed __int64 v354;
  __int64 v355;
  unsigned __int64 v356;
  __int64 v357;
  unsigned __int64 v358;
  __int64 v359;
  _QWORD* v360;
  unsigned __int64 v361;
  __int64 v362;
  __int64 v363;
  __int64 v364;
  __int64 v365;
  _QWORD* v366;
  __int64 v367;
  _QWORD* v368;
  __int64 v369;
  signed __int64 v370;
  __int64 v371;
  unsigned __int64 v372;
  __int64 v373;
  unsigned __int64 v374;
  __int64 v375;
  _QWORD* v376;
  unsigned __int64 v377;
  __int64 v378;
  __int64 v379;
  __int64 v380;
  __int64 v381;
  _QWORD* v382;
  __int64 v383;
  _QWORD* v384;
  __int64 v385;
  signed __int64 v386;
  __int64 v387;
  unsigned __int64 v388;
  __int64 v389;
  unsigned __int64 v390;
  __int64 v391;
  _QWORD* v392;
  unsigned __int64 v393;
  __int64 v394;
  __int64 v395;
  __int64 v396;
  __int64 v397;
  _QWORD* v398;
  __int64 v399;
  _QWORD* v400;
  __int64 v401;
  signed __int64 v402;
  __int64 v403;
  unsigned __int64 v404;
  __int64 v405;
  unsigned __int64 v406;
  __int64 v407;
  _QWORD* v408;
  unsigned __int64 v409;
  __int64 v410;
  __int64 v411;
  __int64 v412;
  __int64 v413;
  _QWORD* v414;
  __int64 v415;
  _QWORD* v416;
  __int64 v417;
  signed __int64 v418;
  __int64 v419;
  unsigned __int64 v420;
  __int64 v421;
  unsigned __int64 v422;
  __int64 v423;
  _QWORD* v424;
  unsigned __int64 v425;
  __int64 v426;
  __int64 v427;
  __int64 v428;
  __int64 v429;
  _QWORD* v430;
  __int64 v431;
  _QWORD* v432;
  __int64 v433;
  signed __int64 v434;
  __int64 v435;
  unsigned __int64 v436;
  __int64 v437;
  unsigned __int64 v438;
  __int64 v439;
  _QWORD* v440;
  unsigned __int64 v441;
  __int64 v442;
  __int64 v443;
  __int64 v444;
  _QWORD* v445;
  _QWORD* v446;
  struct {
    __int64 v447;
    __int64 v448;
    __int64 v449;
    _QWORD* v450;
  } v447_;
  struct {
    _QWORD v451[2];
    const char* v452;
    __int64 v453;
    _QWORD* v454;
  } v451_;
  _QWORD* v455;

  v1 = a1 + 4096;
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
  v3 = GameData_212d2f0 + 2;
  *(_DWORD*)(a1 + 152) = 0;
  *(_DWORD*)(a1 + 160) = 0;
  *(_BYTE*)(a1 + 196) = 0;
  *(_BYTE*)(a1 + 4848) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_BYTE*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 144) = v3;
  memset_alt1(a1 + 200, 0, 0x1221u);
  *(_QWORD*)(a1 + 4864) = v3;
  *(_QWORD*)(a1 + 4904) = v3;
  v4 = GameData_2167730[0];
  *(_QWORD*)(a1 + 4944) = v3;
  *(_QWORD*)(a1 + 4984) = v3;
  *(_QWORD*)(a1 + 5024) = v3;
  *(_QWORD*)(a1 + 5064) = v3;
  *(_QWORD*)(a1 + 5104) = v3;
  *(_QWORD*)(a1 + 5144) = v3;
  *(_QWORD*)(a1 + 5184) = v3;
  *(_QWORD*)(a1 + 5224) = v3;
  *(_QWORD*)(a1 + 5264) = v3;
  *(_QWORD*)(a1 + 5304) = v3;
  *(_QWORD*)(a1 + 5344) = v3;
  *(_QWORD*)(a1 + 5384) = v3;
  *(_QWORD*)(a1 + 5424) = v3;
  *(_QWORD*)(a1 + 5464) = v3;
  *(_QWORD*)(a1 + 5504) = v3;
  *(_DWORD*)(a1 + 4872) = 0;
  *(_BYTE*)(v1 + 784) = 0;
  *(_BYTE*)(v1 + 792) = 0;
  *(_DWORD*)(a1 + 4912) = 0;
  *(_BYTE*)(v1 + 824) = 0;
  *(_BYTE*)(v1 + 832) = 0;
  *(_DWORD*)(a1 + 4952) = 0;
  *(_BYTE*)(v1 + 864) = 0;
  *(_BYTE*)(v1 + 872) = 0;
  *(_DWORD*)(a1 + 4992) = 0;
  *(_BYTE*)(v1 + 904) = 0;
  *(_BYTE*)(v1 + 912) = 0;
  *(_DWORD*)(a1 + 5032) = 0;
  *(_BYTE*)(v1 + 944) = 0;
  *(_BYTE*)(v1 + 952) = 0;
  *(_DWORD*)(a1 + 5072) = 0;
  *(_BYTE*)(v1 + 984) = 0;
  *(_BYTE*)(v1 + 992) = 0;
  *(_DWORD*)(a1 + 5112) = 0;
  *(_BYTE*)(v1 + 1024) = 0;
  *(_BYTE*)(v1 + 1032) = 0;
  *(_DWORD*)(a1 + 5152) = 0;
  *(_BYTE*)(v1 + 1064) = 0;
  *(_BYTE*)(v1 + 1072) = 0;
  *(_DWORD*)(a1 + 5192) = 0;
  *(_BYTE*)(v1 + 1104) = 0;
  *(_BYTE*)(v1 + 1112) = 0;
  *(_DWORD*)(a1 + 5232) = 0;
  *(_BYTE*)(v1 + 1144) = 0;
  *(_BYTE*)(v1 + 1152) = 0;
  *(_DWORD*)(a1 + 5272) = 0;
  *(_BYTE*)(v1 + 1184) = 0;
  *(_BYTE*)(v1 + 1192) = 0;
  *(_DWORD*)(a1 + 5312) = 0;
  *(_BYTE*)(v1 + 1224) = 0;
  *(_BYTE*)(v1 + 1232) = 0;
  *(_DWORD*)(a1 + 5352) = 0;
  *(_BYTE*)(v1 + 1264) = 0;
  *(_BYTE*)(v1 + 1272) = 0;
  *(_DWORD*)(a1 + 5392) = 0;
  *(_BYTE*)(v1 + 1304) = 0;
  *(_BYTE*)(v1 + 1312) = 0;
  *(_DWORD*)(a1 + 5432) = 0;
  *(_BYTE*)(v1 + 1344) = 0;
  *(_BYTE*)(v1 + 1352) = 0;
  *(_DWORD*)(a1 + 5472) = 0;
  *(_BYTE*)(v1 + 1384) = 0;
  *(_BYTE*)(v1 + 1392) = 0;
  *(_DWORD*)(a1 + 5512) = 0;
  *(_QWORD*)(a1 + 5544) = 0;
  *(_BYTE*)(v1 + 760) = 1;
  *(_BYTE*)(v1 + 800) = 1;
  *(_BYTE*)(v1 + 840) = 1;
  *(_BYTE*)(v1 + 880) = 1;
  *(_BYTE*)(v1 + 920) = 1;
  *(_BYTE*)(v1 + 960) = 1;
  *(_BYTE*)(v1 + 1000) = 1;
  *(_BYTE*)(v1 + 1040) = 1;
  *(_BYTE*)(v1 + 1080) = 1;
  *(_BYTE*)(v1 + 1120) = 1;
  *(_BYTE*)(v1 + 1160) = 1;
  *(_BYTE*)(v1 + 1200) = 1;
  *(_BYTE*)(v1 + 1240) = 1;
  *(_BYTE*)(v1 + 1280) = 1;
  *(_BYTE*)(v1 + 1320) = 1;
  *(_BYTE*)(v1 + 1360) = 1;
  *(_BYTE*)(v1 + 1400) = 1;
  *(_WORD*)(v1 + 1456) = 1;
  if ((v4 & 1) != 0) {
    v5 = *(const char**)&GameData_2167730[16];
  }
  else {
    v5 = &GameData_2167730[1];
  }
  *(_QWORD*)(a1 + 5536) = 0;
  *(_BYTE*)(v1 + 1458) = 0;
  v6 = strlen_alt1(v5);
  v451_.v454 = nullptr;
  g3d_ada070_alt1((void*)((__int64*)&v455), (__int64)v5, v6,
                  (__int64)v451_.v451);
  if (v451_.v454 == v451_.v451) {
    v7 = 32;
  }
  else {
    if (v451_.v454 == nullptr) {
      goto LABEL_11;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v451_.v454 + v7))((__int64)v451_.v454);
LABEL_11:
  v447_.v449 = 0;
  v447_.v450 = nullptr;
  v447_.v447 = 0;
  v447_.v448 = 0;
  GameRoutine_60a060_alt1((char*)&v447_.v447, (__int64)v5, v6);
  v8 = (__int64)v455;
  v455 = nullptr;
  v9 = v447_.v450;
  v447_.v450 = (_QWORD*)v8;
  v10 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v9 != nullptr) {
    GameHr_ad69c0(v9);
    v11 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v10 + v11, (__int64)v9);
    v8 = (__int64)v447_.v450;
  }
  v12 = v447_.v447;
  v13 = v447_.v448;
  v447_.v447 = 0;
  v447_.v448 = 0;
  v451_.v451[0] = v12;
  v451_.v451[1] = v13;
  v14 = v447_.v449;
  v447_.v449 = 0;
  v451_.v452 = (const char*)v14;
  v451_.v453 = v8;
  if (v8 != 0) {
    v15 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v10, 32, 16, 0);
    v16 = GameData_212ea70;
    v15[2] = 0;
    v15[3] = v8;
    *v15 = v16 + 16;
    v15[1] = 0;
  }
  else {
    v15 = nullptr;
  }
  v451_.v454 = v15;
  v447_.v450 = nullptr;
  GameRoutine_f0af90_alt1((__int64*)(a1 + 200), v451_.v451);
  v17 = (__int64)v451_.v454;
  if (v451_.v454 != nullptr &&
      atomic_fetch_add((atomic_ullong* volatile)(v451_.v454 + 1),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak_alt1(v17);
    if ((v451_.v451[0] & 1) == 0) {
      goto LABEL_26;
    }
  }
  else if ((v451_.v451[0] & 1) == 0) {
    goto LABEL_26;
  }
  if (v451_.v452 != nullptr) {
    v18 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v10 + v18, (__int64)v451_.v452);
  }
LABEL_26:
  v19 = v447_.v450;
  v447_.v450 = nullptr;
  if (v19 != nullptr) {
    GameHr_ad69c0(v19);
    v20 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v10 + v20, (__int64)v19);
  }
  if ((v447_.v447 & 1) != 0 && v447_.v449 != 0) {
    v21 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v10 + v21, v447_.v449);
  }
  v22 = v455;
  v455 = nullptr;
  if (v22 != nullptr) {
    GameHr_ad69c0(v22);
    v23 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v10 + v23, (__int64)v22);
  }
  v24 = GameData_212c638;
  *(_QWORD*)(a1 + 224) = Components_a870e0_alt1(
      *(__int64**)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
                              8LL) +
                   48LL),
      0);
  LOBYTE(v451_.v451[0]) = 22;
  strcpy((char*)v451_.v451 + 1, "MapDrawObj-");
  GameRoutine_1a09ce0_alt1((__int64)v451_.v451, "HpGauge", 7u);
  v25 = *(_QWORD*)(a1 + 224);
  if ((v451_.v451[0] & 1) != 0) {
    v26 = v451_.v452;
  }
  else {
    v26 = (char*)v451_.v451 + 1;
  }
  v27 = strlen_alt1(v26);
  if (v27 != 0) {
    if (v27 >= 0xFF) {
      v28 = 255;
    }
    else {
      v28 = v27;
    }
    memmove_alt1(v25 + 16, (__int64)v26, v28);
  }
  *(_QWORD*)(v25 + 272) = v27;
  *(_BYTE*)(v25 + 16 + v27) = 0;
  if ((v451_.v451[0] & 1) != 0 && v451_.v452 != nullptr) {
    v29 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v10 + v29, (__int64)v451_.v452);
  }
  *(_QWORD*)(a1 + 232) = Components_a870e0_alt1(
      *(__int64**)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v24 + 32LL) - 8LL) + 48LL),
      0);
  LOBYTE(v451_.v451[0]) = 22;
  strcpy((char*)v451_.v451 + 1, "MapDrawObj-");
  GameRoutine_1a09ce0_alt1((__int64)v451_.v451, "CursorMain", 0xAu);
  v30 = *(_QWORD*)(a1 + 232);
  if ((v451_.v451[0] & 1) != 0) {
    v31 = v451_.v452;
  }
  else {
    v31 = (char*)v451_.v451 + 1;
  }
  v32 = strlen_alt1(v31);
  if (v32 != 0) {
    if (v32 >= 0xFF) {
      v33 = 255;
    }
    else {
      v33 = v32;
    }
    memmove_alt1(v30 + 16, (__int64)v31, v33);
  }
  *(_QWORD*)(v30 + 272) = v32;
  *(_BYTE*)(v30 + 16 + v32) = 0;
  if ((v451_.v451[0] & 1) != 0 && v451_.v452 != nullptr) {
    v34 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v34 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v10 + v34, (__int64)v451_.v452);
  }
  *(_QWORD*)(a1 + 240) = Components_a870e0_alt1(
      *(__int64**)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v24 + 32LL) - 8LL) + 48LL),
      0);
  LOBYTE(v451_.v451[0]) = 22;
  strcpy((char*)v451_.v451 + 1, "MapDrawObj-");
  GameRoutine_1a09ce0_alt1((__int64)v451_.v451, "CursorSub", 9u);
  v35 = *(_QWORD*)(a1 + 240);
  if ((v451_.v451[0] & 1) != 0) {
    v36 = v451_.v452;
  }
  else {
    v36 = (char*)v451_.v451 + 1;
  }
  v37 = strlen_alt1(v36);
  if (v37 != 0) {
    if (v37 >= 0xFF) {
      v38 = 255;
    }
    else {
      v38 = v37;
    }
    memmove_alt1(v35 + 16, (__int64)v36, v38);
  }
  *(_QWORD*)(v35 + 272) = v37;
  *(_BYTE*)(v35 + 16 + v37) = 0;
  if ((v451_.v451[0] & 1) != 0 && v451_.v452 != nullptr) {
    v39 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v39 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v10 + v39, (__int64)v451_.v452);
  }
  v40 = fw_memory_HeapManager_Allocate_alt1(*v10, 304, 16, 0);
  *(_QWORD*)(v40 + 16) = 0;
  v41 = GameData_212f898[0];
  v42 = *(_QWORD*)(a1 + 16);
  *(_WORD*)(v40 + 32) = 0;
  *(_BYTE*)(v40 + 34) = 0;
  *(_QWORD*)(v40 + 40) = 0;
  *(_QWORD*)(v40 + 48) = 0;
  *(_QWORD*)(v40 + 56) = 0;
  *(_QWORD*)(v40 + 64) = 0;
  *(_DWORD*)(v40 + 72) = 1065353216;
  *(_BYTE*)(v40 + 84) = 0;
  *(_BYTE*)(v40 + 88) = 0;
  *(_QWORD*)v40 = GameData_1ff0a28;
  *(_QWORD*)(v40 + 8) = 0;
  *(_QWORD*)(v40 + 96) = 0;
  *(_QWORD*)(v40 + 104) = 0;
  *(_QWORD*)(v40 + 112) = 0;
  *(_QWORD*)(v40 + 120) = 0;
  *(_DWORD*)(v40 + 128) = 1065353216;
  *(_BYTE*)(v40 + 140) = 0;
  *(_BYTE*)(v40 + 144) = 0;
  *(_QWORD*)(v40 + 152) = 0;
  *(_QWORD*)(v40 + 160) = 0;
  *(_QWORD*)(v40 + 168) = 0;
  *(_QWORD*)(v40 + 176) = 0;
  *(_DWORD*)(v40 + 184) = 1065353216;
  *(_BYTE*)(v40 + 196) = 0;
  *(_BYTE*)(v40 + 200) = 0;
  *(_QWORD*)(v40 + 208) = 0;
  *(_QWORD*)(v40 + 216) = 0;
  *(_QWORD*)(v40 + 224) = 0;
  *(_QWORD*)(v40 + 232) = 0;
  *(_QWORD*)(v40 + 240) = 0;
  *(_QWORD*)(v40 + 248) = 0;
  *(_QWORD*)(v40 + 256) = 0;
  *(_QWORD*)(v40 + 264) = 0;
  *(_QWORD*)(v40 + 272) = 0;
  *(_QWORD*)(v40 + 280) = 0;
  *(_QWORD*)(v40 + 288) = 0;
  *(_QWORD*)(v40 + 296) = 0;
  *(_DWORD*)(v40 + 80) = 0;
  *(_DWORD*)(v40 + 136) = 1;
  *(_DWORD*)(v40 + 192) = 2;
  *(_QWORD*)(a1 + 16) = v40;
  *(_QWORD*)(v40 + 24) = v41 + 2;
  *(_QWORD*)(a1 + 8) = v40 + 24;
  if (v42 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
    std___1___shared_weak_count___release_weak_alt1(v42);
  }
  v43 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v10, 382424, 16, 0);
  v43[1] = 0;
  v43[2] = 0;
  v44 = v43;
  v45 = v43;
  *v43 = GameData_1ff0a78;
  v43[3] = GameData_212fde8[0] + 2;
  GameHr_1046e40((__int64)(v43 + 4));
  v46 = *(_QWORD*)(a1 + 32);
  v44[8] = 0;
  *(_QWORD*)(a1 + 24) = v45 + 3;
  *(_QWORD*)(a1 + 32) = v44;
  v44[31874] = 1;
  v44[63740] = 2;
  if (v46 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v46 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46);
    std___1___shared_weak_count___release_weak_alt1(v46);
  }
  v47 = fw_memory_HeapManager_Allocate_alt1(*v10, 640, 16, 0);
  *(_QWORD*)(v47 + 8) = 0;
  *(_QWORD*)(v47 + 16) = 0;
  v48 = v47;
  *(_QWORD*)v47 = GameData_1ff0ac8;
  v49 = GameData_212f928[0];
  *(_BYTE*)(v47 + 592) = 0;
  *(_WORD*)(v47 + 608) = 0;
  *(_QWORD*)(v47 + 624) = 0;
  *(_DWORD*)(v47 + 632) = 0;
  *(_QWORD*)(v47 + 32) = v49 + 2;
  v50 = v47 + 32;
  *(_QWORD*)(v47 + 612) = 0;
  memset_alt1(v47 + 40, 0, 0x139u);
  nn_os_InitializeMutex_alt1(v48 + 608, true, 0);
  v51 = *(_QWORD*)(a1 + 48);
  *(_QWORD*)(a1 + 40) = v50;
  *(_QWORD*)(a1 + 48) = v48;
  if (v51 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v51 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v51 + 16LL))(v51);
    std___1___shared_weak_count___release_weak_alt1(v51);
  }
  v52 = fw_memory_HeapManager_Allocate_alt1(*v10, 88, 16, 0);
  *(_QWORD*)(v52 + 8) = 0;
  *(_QWORD*)(v52 + 16) = 0;
  *(_QWORD*)v52 = GameData_1ff0b18;
  v53 = GameData_212fd30[0];
  v54 = *(_QWORD*)(a1 + 136);
  *(_BYTE*)(v52 + 80) = 0;
  *(_QWORD*)(v52 + 40) = 0;
  *(_QWORD*)(v52 + 48) = 0;
  *(_QWORD*)(v52 + 56) = 0;
  *(_BYTE*)(v52 + 64) = 0;
  *(_DWORD*)(v52 + 32) = 3;
  *(_QWORD*)(a1 + 136) = v52;
  *(_QWORD*)(v52 + 24) = v53 + 2;
  *(_QWORD*)(a1 + 128) = v52 + 24;
  if (v54 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v54 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v54 + 16LL))(v54);
    std___1___shared_weak_count___release_weak_alt1(v54);
  }
  v55 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v10, 176, 16, 0);
  v56 = v55 + 4;
  v57 = v55;
  v55[1] = 0;
  v55[2] = 0;
  *v55 = GameData_1ff0b68;
  GameRoutine_f1cdd0_alt1((__int64)(v55 + 4));
  *(_QWORD*)(a1 + 4536) = v56;
  v58 = *(_QWORD*)(a1 + 4544);
  *(_QWORD*)(a1 + 4544) = v57;
  if (v58 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v58 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v58 + 16LL))(v58);
    std___1___shared_weak_count___release_weak_alt1(v58);
  }
  v59 = v10;
  v60 = fw_memory_HeapManager_Allocate_alt1(*v10, 1064, 16, 0);
  *(_QWORD*)(v60 + 8) = 0;
  *(_QWORD*)(v60 + 16) = 0;
  v61 = v60;
  *(_QWORD*)v60 = GameData_1ff0bb8;
  v62 = GameData_212fcf0[0];
  *(_BYTE*)(v60 + 32) = 0;
  *(_QWORD*)(v60 + 24) = v62 + 2;
  v444 = v60 + 24;
  memset_alt1(v60 + 40, 0, 0x400u);
  v63 = 0;
  v64 = GameData_212fcf8[0] + 2;
  do {
    v65 = v61 + v63;
    v66 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v59, 40, 16, 0);
    v67 = v66 + 3;
    v68 = v66;
    v66[1] = 0;
    v66[2] = 0;
    *v66 = v64;
    GameHr_101c1b0(v66 + 3);
    v69 = *(_QWORD*)(v61 + v63 + 48);
    *(_QWORD*)(v65 + 40) = v67;
    *(_QWORD*)(v65 + 48) = v68;
    if (v69 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v69 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v69 + 16LL))(v69);
      std___1___shared_weak_count___release_weak_alt1(v69);
    }
    v63 += 16;
  } while (v63 != 1024);
  v70 = *(_QWORD*)(a1 + 4560);
  *(_QWORD*)(a1 + 4560) = v61;
  *(_QWORD*)(a1 + 4552) = v444;
  if (v70 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v70 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v70 + 16LL))(v70);
    std___1___shared_weak_count___release_weak_alt1(v70);
  }
  v71 = v59;
  v72 = fw_memory_HeapManager_Allocate_alt1(*v59, 8264, 16, 0);
  *(_QWORD*)(v72 + 8) = 0;
  *(_QWORD*)(v72 + 16) = 0;
  *(_BYTE*)(v72 + 32) = 0;
  v73 = v72;
  *(_QWORD*)v72 = GameData_1ff0c08;
  v74 = GameData_212f9b0[0];
  *(_QWORD*)(v72 + 56) = 0;
  *(_QWORD*)(v72 + 24) = v74 + 2;
  v75 = v72 + 24;
  *(_QWORD*)(v72 + 48) = 0;
  *(_QWORD*)(v72 + 40) = v72 + 48;
  memset_alt1(v72 + 64, 0, 0x2004u);
  *(_QWORD*)(a1 + 4584) = v75;
  v76 = *(_QWORD*)(a1 + 4592);
  *(_QWORD*)(a1 + 4592) = v73;
  if (v76 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v76 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v76 + 16LL))(v76);
    std___1___shared_weak_count___release_weak_alt1(v76);
  }
  v77 = fw_memory_HeapManager_Allocate_alt1(*v59, 88, 16, 0);
  *(_QWORD*)(v77 + 8) = 0;
  *(_QWORD*)(v77 + 16) = 0;
  *(_BYTE*)(v77 + 32) = 0;
  *(_QWORD*)v77 = GameData_1ff0c58;
  v78 = GameData_212fa80[0];
  v79 = *(_QWORD*)(a1 + 4608);
  *(_QWORD*)(v77 + 48) = 0;
  *(_QWORD*)(v77 + 80) = 0;
  *(_QWORD*)(a1 + 4608) = v77;
  *(_QWORD*)(v77 + 40) = v77 + 48;
  *(_QWORD*)(v77 + 72) = 0;
  *(_QWORD*)(v77 + 56) = 0;
  *(_QWORD*)(v77 + 64) = v77 + 72;
  *(_QWORD*)(v77 + 24) = v78 + 2;
  *(_QWORD*)(a1 + 4600) = v77 + 24;
  if (v79 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v79 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v79 + 16LL))(v79);
    std___1___shared_weak_count___release_weak_alt1(v79);
  }
  v80 = fw_memory_HeapManager_Allocate_alt1(*v59, 64, 16, 0);
  *(_QWORD*)(v80 + 8) = 0;
  *(_QWORD*)(v80 + 16) = 0;
  *(_BYTE*)(v80 + 32) = 0;
  *(_QWORD*)v80 = GameData_1ff0ca8;
  v81 = GameData_212f8f8[0];
  v82 = *(_QWORD*)(a1 + 4624);
  *(_QWORD*)(v80 + 40) = 0;
  *(_QWORD*)(v80 + 48) = 0;
  *(_QWORD*)(v80 + 56) = 0;
  *(_QWORD*)(a1 + 4624) = v80;
  *(_QWORD*)(v80 + 24) = v81 + 2;
  *(_QWORD*)(a1 + 4616) = v80 + 24;
  if (v82 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v82 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v82 + 16LL))(v82);
    std___1___shared_weak_count___release_weak_alt1(v82);
  }
  v83 = fw_memory_HeapManager_Allocate_alt1(*v59, 64, 16, 0);
  *(_QWORD*)(v83 + 8) = 0;
  *(_QWORD*)(v83 + 16) = 0;
  *(_BYTE*)(v83 + 32) = 0;
  *(_QWORD*)v83 = GameData_1ff0cf8;
  v84 = GameData_212fa08[0];
  v85 = *(_QWORD*)(a1 + 4576);
  *(_QWORD*)(v83 + 40) = 0;
  *(_QWORD*)(v83 + 48) = 0;
  *(_QWORD*)(v83 + 56) = 0;
  *(_QWORD*)(a1 + 4576) = v83;
  *(_QWORD*)(v83 + 24) = v84 + 2;
  *(_QWORD*)(a1 + 4568) = v83 + 24;
  if (v85 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v85 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v85 + 16LL))(v85);
    std___1___shared_weak_count___release_weak_alt1(v85);
  }
  v86 = fw_memory_HeapManager_Allocate_alt1(*v59, 224, 16, 0);
  *(_QWORD*)(v86 + 16) = 0;
  v87 = GameData_212f900[0];
  *(_QWORD*)v86 = GameData_1ff0d48;
  *(_QWORD*)(v86 + 8) = 0;
  *(_QWORD*)(v86 + 48) = 0;
  v88 = *(_QWORD*)(a1 + 4640);
  *(_BYTE*)(v86 + 32) = 0;
  *(_QWORD*)(v86 + 40) = v86 + 48;
  *(_QWORD*)(v86 + 72) = 0;
  *(_QWORD*)(v86 + 56) = 0;
  *(_QWORD*)(v86 + 64) = v86 + 72;
  *(_QWORD*)(v86 + 96) = 0;
  *(_QWORD*)(v86 + 80) = 0;
  *(_QWORD*)(v86 + 88) = v86 + 96;
  *(_QWORD*)(v86 + 120) = 0;
  *(_QWORD*)(v86 + 104) = 0;
  *(_QWORD*)(v86 + 112) = v86 + 120;
  *(_QWORD*)(v86 + 128) = 0;
  *(_BYTE*)(v86 + 136) = 0;
  *(_BYTE*)(v86 + 140) = 0;
  *(_QWORD*)(v86 + 160) = 0;
  *(_QWORD*)(v86 + 168) = 0;
  *(_QWORD*)(v86 + 144) = 0;
  *(_QWORD*)(v86 + 152) = 0;
  *(_DWORD*)(v86 + 184) = 0;
  *(_QWORD*)(v86 + 192) = 0;
  *(_QWORD*)(v86 + 200) = 0;
  *(_QWORD*)(v86 + 208) = 0;
  *(_DWORD*)(v86 + 216) = 0;
  *(_QWORD*)(a1 + 4640) = v86;
  *(_DWORD*)(v86 + 176) = 0x2000;
  *(_QWORD*)(v86 + 24) = v87 + 2;
  *(_QWORD*)(a1 + 4632) = v86 + 24;
  if (v88 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v88 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v88 + 16LL))(v88);
    std___1___shared_weak_count___release_weak_alt1(v88);
  }
  v89 = fw_memory_HeapManager_Allocate_alt1(*v59, 144, 16, 0);
  *(_QWORD*)(v89 + 8) = 0;
  *(_QWORD*)(v89 + 16) = 0;
  *(_BYTE*)(v89 + 32) = 0;
  *(_QWORD*)v89 = GameData_1ff0d98;
  v90 = GameData_212fde0[0];
  *(_QWORD*)(v89 + 48) = 0;
  v91 = *(_QWORD*)(a1 + 4656);
  *(_QWORD*)(v89 + 104) = 0;
  *(_QWORD*)(v89 + 112) = 0;
  *(_QWORD*)(v89 + 120) = 0;
  *(_QWORD*)(v89 + 128) = 0;
  *(_QWORD*)(v89 + 40) = v89 + 48;
  *(_QWORD*)(v89 + 72) = 0;
  *(_QWORD*)(v89 + 56) = 0;
  *(_QWORD*)(v89 + 64) = v89 + 72;
  *(_QWORD*)(v89 + 96) = 0;
  *(_QWORD*)(v89 + 80) = 0;
  *(_QWORD*)(v89 + 88) = v89 + 96;
  *(_BYTE*)(v89 + 136) = 0;
  *(_QWORD*)(a1 + 4656) = v89;
  *(_QWORD*)(v89 + 24) = v90 + 2;
  *(_QWORD*)(a1 + 4648) = v89 + 24;
  if (v91 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v91 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v91 + 16LL))(v91);
    std___1___shared_weak_count___release_weak_alt1(v91);
  }
  v92 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v59, 12928, 16, 0);
  v93 = v92 + 4;
  v94 = v92;
  v92[1] = 0;
  v92[2] = 0;
  *v92 = GameData_1ff0de8;
  game_map_f15a60_alt1((__int64)(v92 + 4));
  *(_QWORD*)(a1 + 4664) = v93;
  v95 = *(_QWORD*)(a1 + 4672);
  *(_QWORD*)(a1 + 4672) = v94;
  if (v95 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v95 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v95 + 16LL))(v95);
    std___1___shared_weak_count___release_weak_alt1(v95);
  }
  v96 = fw_memory_HeapManager_Allocate_alt1(*v59, 168, 16, 0);
  *(_QWORD*)(v96 + 8) = 0;
  *(_QWORD*)(v96 + 16) = 0;
  *(_BYTE*)(v96 + 32) = 0;
  *(_QWORD*)v96 = GameData_1ff0e38;
  v97 = GameData_212f8a0[0];
  *(_QWORD*)(v96 + 48) = 0;
  v98 = *(_QWORD*)(a1 + 4688);
  *(_DWORD*)(v96 + 160) = 0;
  *(_QWORD*)(v96 + 144) = 0;
  *(_QWORD*)(v96 + 152) = 0;
  *(_QWORD*)(v96 + 40) = v96 + 48;
  *(_QWORD*)(v96 + 72) = 0;
  *(_QWORD*)(v96 + 56) = 0;
  *(_QWORD*)(v96 + 64) = v96 + 72;
  *(_QWORD*)(v96 + 96) = 0;
  *(_QWORD*)(v96 + 80) = 0;
  *(_QWORD*)(v96 + 88) = v96 + 96;
  *(_QWORD*)(v96 + 120) = 0;
  *(_QWORD*)(v96 + 104) = 0;
  *(_QWORD*)(v96 + 112) = v96 + 120;
  *(_QWORD*)(v96 + 128) = 0;
  *(_QWORD*)(v96 + 136) = 0;
  *(_QWORD*)(a1 + 4688) = v96;
  *(_QWORD*)(v96 + 24) = v97 + 2;
  *(_QWORD*)(a1 + 4680) = v96 + 24;
  if (v98 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v98 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v98 + 16LL))(v98);
    std___1___shared_weak_count___release_weak_alt1(v98);
  }
  v99 = fw_memory_HeapManager_Allocate_alt1(*v59, 112, 16, 0);
  *(_QWORD*)(v99 + 8) = 0;
  *(_QWORD*)(v99 + 16) = 0;
  *(_BYTE*)(v99 + 32) = 0;
  *(_QWORD*)v99 = GameData_1ff0e88;
  v100 = GameData_212f8d0[0];
  v101 = *(_QWORD*)(a1 + 4704);
  *(_QWORD*)(v99 + 48) = 0;
  *(_QWORD*)(v99 + 80) = 0;
  *(_QWORD*)(v99 + 88) = 0;
  *(_QWORD*)(v99 + 96) = 0;
  *(_QWORD*)(v99 + 104) = 0;
  *(_QWORD*)(v99 + 40) = v99 + 48;
  *(_QWORD*)(v99 + 72) = 0;
  *(_QWORD*)(v99 + 56) = 0;
  *(_QWORD*)(v99 + 64) = v99 + 72;
  *(_QWORD*)(a1 + 4704) = v99;
  *(_QWORD*)(v99 + 24) = v100 + 2;
  *(_QWORD*)(a1 + 4696) = v99 + 24;
  if (v101 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v101 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v101 + 16LL))(v101);
    std___1___shared_weak_count___release_weak_alt1(v101);
  }
  v102 = fw_memory_HeapManager_Allocate_alt1(*v59, 88, 16, 0);
  *(_QWORD*)(v102 + 8) = 0;
  *(_QWORD*)(v102 + 16) = 0;
  *(_BYTE*)(v102 + 32) = 0;
  *(_QWORD*)v102 = GameData_1ff0ed8;
  v103 = GameData_212fba0[0];
  v104 = *(_QWORD*)(a1 + 4720);
  *(_QWORD*)(v102 + 48) = 0;
  *(_QWORD*)(v102 + 56) = 0;
  *(_QWORD*)(v102 + 64) = 0;
  *(_QWORD*)(v102 + 72) = 0;
  *(_QWORD*)(v102 + 80) = 0;
  *(_QWORD*)(v102 + 40) = v102 + 48;
  *(_QWORD*)(a1 + 4720) = v102;
  *(_QWORD*)(v102 + 24) = v103 + 2;
  *(_QWORD*)(a1 + 4712) = v102 + 24;
  if (v104 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v104 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v104 + 16LL))(v104);
    std___1___shared_weak_count___release_weak_alt1(v104);
  }
  v105 = fw_memory_HeapManager_Allocate_alt1(*v59, 72, 16, 0);
  *(_QWORD*)(v105 + 8) = 0;
  *(_QWORD*)(v105 + 16) = 0;
  *(_BYTE*)(v105 + 32) = 0;
  *(_QWORD*)v105 = GameData_1ff0f28;
  v106 = GameData_212f8c0[0];
  v107 = *(_QWORD*)(a1 + 4736);
  *(_QWORD*)(v105 + 48) = 0;
  *(_QWORD*)(v105 + 56) = 0;
  *(_QWORD*)(a1 + 4736) = v105;
  *(_QWORD*)(v105 + 40) = v105 + 48;
  *(_DWORD*)(v105 + 64) = 30;
  *(_QWORD*)(v105 + 24) = v106 + 2;
  *(_QWORD*)(a1 + 4728) = v105 + 24;
  if (v107 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v107 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v107 + 16LL))(v107);
    std___1___shared_weak_count___release_weak_alt1(v107);
  }
  v108 = fw_memory_HeapManager_Allocate_alt1(*v59, 72, 16, 0);
  *(_QWORD*)(v108 + 8) = 0;
  *(_QWORD*)(v108 + 16) = 0;
  *(_BYTE*)(v108 + 32) = 0;
  *(_QWORD*)v108 = GameData_1ff0f78;
  v109 = GameData_212f8c8[0];
  v110 = *(_QWORD*)(a1 + 4752);
  *(_QWORD*)(v108 + 48) = 0;
  *(_QWORD*)(v108 + 56) = 0;
  *(_QWORD*)(a1 + 4752) = v108;
  *(_QWORD*)(v108 + 40) = v108 + 48;
  *(_DWORD*)(v108 + 64) = 31;
  *(_QWORD*)(v108 + 24) = v109 + 2;
  *(_QWORD*)(a1 + 4744) = v108 + 24;
  if (v110 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v110 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v110 + 16LL))(v110);
    std___1___shared_weak_count___release_weak_alt1(v110);
  }
  v111 = fw_memory_HeapManager_Allocate_alt1(*v59, 96, 16, 0);
  *(_QWORD*)(v111 + 8) = 0;
  *(_QWORD*)(v111 + 16) = 0;
  *(_BYTE*)(v111 + 32) = 0;
  v112 = v111;
  *(_QWORD*)v111 = GameData_1ff0fc8;
  v113 = GameData_212f8e0[0];
  *(_QWORD*)(v111 + 56) = 0;
  *(_QWORD*)(v111 + 84) = 0;
  *(_QWORD*)(v111 + 24) = v113 + 2;
  v114 = v111 + 24;
  *(_QWORD*)(v111 + 48) = 0;
  *(_QWORD*)(v111 + 40) = v111 + 48;
  *(_BYTE*)(v111 + 80) = 1;
  v115 = fw_memory_HeapManager_Allocate_alt1(*v59, 32, 16, 0);
  v116 = GameData_212f8e8[0];
  *(_QWORD*)(a1 + 4760) = v114;
  v117 = *(_QWORD*)(a1 + 4768);
  *(_QWORD*)(v115 + 8) = 0;
  *(_QWORD*)(v115 + 16) = 0;
  *(_QWORD*)(v112 + 72) = v115;
  *(_QWORD*)(a1 + 4768) = v112;
  *(_QWORD*)v115 = v116 + 2;
  *(_DWORD*)(v115 + 24) = 0;
  *(_QWORD*)(v112 + 64) = v115 + 24;
  if (v117 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v117 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v117 + 16LL))(v117);
    std___1___shared_weak_count___release_weak_alt1(v117);
  }
  v118 = fw_memory_HeapManager_Allocate_alt1(*v59, 80, 16, 0);
  *(_QWORD*)(v118 + 8) = 0;
  *(_QWORD*)(v118 + 16) = 0;
  *(_BYTE*)(v118 + 32) = 0;
  *(_QWORD*)v118 = GameData_1ff1018;
  v119 = GameData_212f980[0];
  v120 = *(_QWORD*)(a1 + 4784);
  *(_QWORD*)(v118 + 48) = 0;
  *(_QWORD*)(v118 + 56) = 0;
  *(_QWORD*)(v118 + 64) = 0;
  *(_QWORD*)(a1 + 4784) = v118;
  *(_QWORD*)(v118 + 40) = v118 + 48;
  *(_DWORD*)(v118 + 72) = 0x2000;
  *(_QWORD*)(v118 + 24) = v119 + 2;
  *(_QWORD*)(a1 + 4776) = v118 + 24;
  if (v120 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v120 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v120 + 16LL))(v120);
    std___1___shared_weak_count___release_weak_alt1(v120);
  }
  v121 = fw_memory_HeapManager_Allocate_alt1(*v59, 64, 16, 0);
  *(_QWORD*)(v121 + 8) = 0;
  *(_QWORD*)(v121 + 16) = 0;
  *(_BYTE*)(v121 + 32) = 0;
  *(_QWORD*)v121 = GameData_1ff1068;
  v122 = GameData_212fdc0[0];
  v123 = *(_QWORD*)(a1 + 4800);
  *(_QWORD*)(v121 + 48) = 0;
  *(_QWORD*)(v121 + 56) = 0;
  *(_QWORD*)(a1 + 4800) = v121;
  *(_QWORD*)(v121 + 40) = v121 + 48;
  *(_QWORD*)(v121 + 24) = v122 + 2;
  *(_QWORD*)(a1 + 4792) = v121 + 24;
  if (v123 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v123 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v123 + 16LL))(v123);
    std___1___shared_weak_count___release_weak_alt1(v123);
  }
  v124 = fw_memory_HeapManager_Allocate_alt1(*v59, 64, 16, 0);
  *(_QWORD*)(v124 + 8) = 0;
  *(_QWORD*)(v124 + 16) = 0;
  *(_BYTE*)(v124 + 32) = 0;
  *(_QWORD*)v124 = GameData_1ff10b8;
  v125 = GameData_212fa20;
  v126 = *(_QWORD*)(a1 + 4816);
  *(_QWORD*)(v124 + 48) = 0;
  *(_QWORD*)(v124 + 56) = 0;
  *(_QWORD*)(a1 + 4816) = v124;
  *(_QWORD*)(v124 + 40) = v124 + 48;
  *(_QWORD*)(v124 + 24) = v125 + 2;
  *(_QWORD*)(a1 + 4808) = v124 + 24;
  if (v126 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v126 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v126 + 16LL))(v126);
    std___1___shared_weak_count___release_weak_alt1(v126);
  }
  v127 = fw_memory_HeapManager_Allocate_alt1(*v59, 136, 16, 0);
  *(_QWORD*)(v127 + 8) = 0;
  *(_QWORD*)(v127 + 16) = 0;
  *(_BYTE*)(v127 + 32) = 0;
  *(_QWORD*)v127 = GameData_1ff1108;
  v128 = GameData_212fa98[0];
  *(_QWORD*)(v127 + 48) = 0;
  v129 = *(_QWORD*)(a1 + 4832);
  *(_QWORD*)(v127 + 128) = 0;
  *(_QWORD*)(a1 + 4832) = v127;
  *(_QWORD*)(v127 + 40) = v127 + 48;
  *(_QWORD*)(v127 + 72) = 0;
  *(_QWORD*)(v127 + 56) = 0;
  *(_QWORD*)(v127 + 64) = v127 + 72;
  *(_QWORD*)(v127 + 96) = 0;
  *(_QWORD*)(v127 + 80) = 0;
  *(_QWORD*)(v127 + 88) = v127 + 96;
  *(_QWORD*)(v127 + 120) = 0;
  *(_QWORD*)(v127 + 104) = 0;
  *(_QWORD*)(v127 + 112) = v127 + 120;
  *(_QWORD*)(v127 + 24) = v128 + 2;
  *(_QWORD*)(a1 + 4824) = v127 + 24;
  if (v129 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v129 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v129 + 16LL))(v129);
    std___1___shared_weak_count___release_weak_alt1(v129);
  }
  v130 = *(_QWORD*)(*(_QWORD*)(a1 + 4536) + 40LL);
  *(_QWORD*)(v130 + 8) = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 232LL);
  v131 = GameData_212fc50[0];
  if ((*GameData_212fc50[0] & 1) != 0) {
    v132 =
        *(const char**)&GameData_212fc50[0]
                                        [(unsigned __int64)((__int128*)0x10LL)];
  }
  else {
    v132 = GameData_212fc50[0] + 1;
  }
  v133 = strlen_alt1(v132);
  game_map_100bdf0_alt1(v130, v132, v133);
  if ((*((_BYTE*)((__int128*)0x10LL) + (_QWORD)v131 + 8) & 1) != 0) {
    v134 = *(const char**)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v131);
  }
  else {
    v134 = v131 + 25;
  }
  v135 = strlen_alt1(v134);
  game_map_100bdf0_alt1(v130, v134, v135);
  if ((*((_BYTE*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v131) & 1) != 0) {
    v136 = *(const char**)((char*)((char*)0x40LL) + (_QWORD)v131);
  }
  else {
    v136 = v131 + 49;
  }
  v137 = strlen_alt1(v136);
  game_map_100bdf0_alt1(v130, v136, v137);
  game_101c320_alt1(*(_QWORD*)(a1 + 4552));
  v138 = *(_QWORD*)(a1 + 4536);
  v139 = *(_QWORD*)(a1 + 4544);
  if (v139 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v139 + 16), 1u,
                              memory_order_relaxed);
    v141 = (_QWORD*)(a1 + 64);
    v140 = *(_QWORD**)(a1 + 64);
    v143 = (_QWORD*)(a1 + 72);
    v142 = *(_QWORD*)(a1 + 72);
    if ((unsigned __int64)v140 < v142) {
      *v140 = v138;
      v140[1] = v139;
      v144 = v140 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v139 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_180;
    }
  }
  else {
    v141 = (_QWORD*)(a1 + 64);
    v140 = *(_QWORD**)(a1 + 64);
    v143 = (_QWORD*)(a1 + 72);
    v142 = *(_QWORD*)(a1 + 72);
    if ((unsigned __int64)v140 < v142) {
      *v140 = v138;
      v140[1] = 0;
      v144 = v140 + 2;
      goto LABEL_180;
    }
  }
  v445 = v143;
  v145 = *(_QWORD*)(a1 + 56);
  v146 = (signed __int64)v140 - v145;
  v147 = ((__int64)v140 - v145) >> 4;
  v148 = v147 + 1;
  if ((unsigned __int64)(v147 + 1) >> 60 != 0) {
    goto LABEL_560;
  }
  v149 = v142 - v145;
  if (v149 >> 3 > v148) {
    v148 = v149 >> 3;
  }
  if ((unsigned __int64)v149 >= 0x7FFFFFFFFFFFFFF0LL) {
    v150 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v150 = v148;
  }
  if (v150 >> 60 != 0) {
    goto LABEL_561;
  }
  v151 = fw_memory_HeapManager_Allocate_alt1(*v71, 16 * v150, 16, 0);
  v152 = (_QWORD*)(v151 + v146);
  v153 = v151 + 16 * v150;
  *v152 = v138;
  v152[1] = v139;
  if (v139 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v139 + 16), 1u,
                              memory_order_relaxed);
    v145 = *(_QWORD*)(a1 + 56);
    v146 = *(_QWORD*)(a1 + 64) - v145;
    v147 = v146 >> 4;
  }
  v154 = (__int64)&v152[-2 * v147];
  v144 = v152 + 2;
  memcpy_alt1(v154, v145, v146);
  *(_QWORD*)(a1 + 56) = v154;
  *(_QWORD*)(a1 + 64) = v144;
  *(_QWORD*)(a1 + 72) = v153;
  if (v145 != 0) {
    v155 = 128;
    if (*(_QWORD*)(*v71 + 200) == 0) {
      v155 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v71 + v155, v145);
  }
  v143 = v445;
LABEL_180:
  *v141 = v144;
  if (v139 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v139);
  }
  v156 = *(_QWORD*)(a1 + 4552);
  v157 = *(_QWORD*)(a1 + 4560);
  v446 = v143;
  if (v157 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v157 + 16), 1u,
                              memory_order_relaxed);
    v158 = (_QWORD*)*v141;
    v159 = *v143;
    if (*v141 < *v143) {
      *v158 = v156;
      v158[1] = v157;
      v160 = v158 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v157 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_201;
    }
  }
  else {
    v158 = (_QWORD*)*v141;
    v159 = *v143;
    if (*v141 < *v143) {
      *v158 = v156;
      v158[1] = 0;
      v160 = v158 + 2;
      goto LABEL_201;
    }
  }
  v161 = *(_QWORD*)(a1 + 56);
  v162 = (signed __int64)v158 - v161;
  v163 = ((__int64)v158 - v161) >> 4;
  v164 = v163 + 1;
  if ((unsigned __int64)(v163 + 1) >> 60 != 0) {
    goto LABEL_560;
  }
  v165 = v159 - v161;
  if (v165 >> 3 > v164) {
    v164 = v165 >> 3;
  }
  if ((unsigned __int64)v165 >= 0x7FFFFFFFFFFFFFF0LL) {
    v166 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v166 = v164;
  }
  if (v166 >> 60 != 0) {
    goto LABEL_561;
  }
  v167 = fw_memory_HeapManager_Allocate_alt1(*v71, 16 * v166, 16, 0);
  v168 = (_QWORD*)(v167 + v162);
  v169 = v167 + 16 * v166;
  *v168 = v156;
  v168[1] = v157;
  if (v157 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v157 + 16), 1u,
                              memory_order_relaxed);
    v161 = *(_QWORD*)(a1 + 56);
    v162 = *(_QWORD*)(a1 + 64) - v161;
    v163 = v162 >> 4;
  }
  v170 = (__int64)&v168[-2 * v163];
  v160 = v168 + 2;
  memcpy_alt1(v170, v161, v162);
  *(_QWORD*)(a1 + 56) = v170;
  *(_QWORD*)(a1 + 64) = v160;
  *(_QWORD*)(a1 + 72) = v169;
  if (v161 != 0) {
    v171 = 128;
    if (*(_QWORD*)(*v71 + 200) == 0) {
      v171 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v71 + v171, v161);
  }
  v143 = v446;
LABEL_201:
  *v141 = v160;
  if (v157 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v157);
  }
  v172 = *(_QWORD*)(a1 + 4584);
  v173 = *(_QWORD*)(a1 + 4592);
  if (v173 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v173 + 16), 1u,
                              memory_order_relaxed);
    v174 = (_QWORD*)*v141;
    v175 = *v143;
    if (*v141 < *v143) {
      *v174 = v172;
      v174[1] = v173;
      v176 = v174 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v173 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_222;
    }
  }
  else {
    v174 = (_QWORD*)*v141;
    v175 = *v143;
    if (*v141 < *v143) {
      *v174 = v172;
      v174[1] = 0;
      v176 = v174 + 2;
      goto LABEL_222;
    }
  }
  v177 = *(_QWORD*)(a1 + 56);
  v178 = (signed __int64)v174 - v177;
  v179 = ((__int64)v174 - v177) >> 4;
  v180 = v179 + 1;
  if ((unsigned __int64)(v179 + 1) >> 60 != 0) {
    goto LABEL_560;
  }
  v181 = v175 - v177;
  if (v181 >> 3 > v180) {
    v180 = v181 >> 3;
  }
  if ((unsigned __int64)v181 >= 0x7FFFFFFFFFFFFFF0LL) {
    v182 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v182 = v180;
  }
  if (v182 >> 60 != 0) {
    goto LABEL_561;
  }
  v183 = fw_memory_HeapManager_Allocate_alt1(*v71, 16 * v182, 16, 0);
  v184 = (_QWORD*)(v183 + v178);
  v185 = v183 + 16 * v182;
  *v184 = v172;
  v184[1] = v173;
  if (v173 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v173 + 16), 1u,
                              memory_order_relaxed);
    v177 = *(_QWORD*)(a1 + 56);
    v178 = *(_QWORD*)(a1 + 64) - v177;
    v179 = v178 >> 4;
  }
  v186 = (__int64)&v184[-2 * v179];
  v176 = v184 + 2;
  memcpy_alt1(v186, v177, v178);
  *(_QWORD*)(a1 + 56) = v186;
  *(_QWORD*)(a1 + 64) = v176;
  *(_QWORD*)(a1 + 72) = v185;
  if (v177 != 0) {
    v187 = 128;
    if (*(_QWORD*)(*v71 + 200) == 0) {
      v187 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v71 + v187, v177);
  }
  v143 = v446;
LABEL_222:
  *v141 = v176;
  if (v173 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v173);
  }
  v188 = *(_QWORD*)(a1 + 4600);
  v189 = *(_QWORD*)(a1 + 4608);
  if (v189 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v189 + 16), 1u,
                              memory_order_relaxed);
    v190 = (_QWORD*)*v141;
    v191 = *v143;
    if (*v141 < *v143) {
      *v190 = v188;
      v190[1] = v189;
      v192 = v190 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v189 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_243;
    }
  }
  else {
    v190 = (_QWORD*)*v141;
    v191 = *v143;
    if (*v141 < *v143) {
      *v190 = v188;
      v190[1] = 0;
      v192 = v190 + 2;
      goto LABEL_243;
    }
  }
  v193 = *(_QWORD*)(a1 + 56);
  v194 = (signed __int64)v190 - v193;
  v195 = ((__int64)v190 - v193) >> 4;
  v196 = v195 + 1;
  if ((unsigned __int64)(v195 + 1) >> 60 != 0) {
    goto LABEL_560;
  }
  v197 = v191 - v193;
  if (v197 >> 3 > v196) {
    v196 = v197 >> 3;
  }
  if ((unsigned __int64)v197 >= 0x7FFFFFFFFFFFFFF0LL) {
    v198 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v198 = v196;
  }
  if (v198 >> 60 != 0) {
    goto LABEL_561;
  }
  v199 = fw_memory_HeapManager_Allocate_alt1(*v71, 16 * v198, 16, 0);
  v200 = (_QWORD*)(v199 + v194);
  v201 = v199 + 16 * v198;
  *v200 = v188;
  v200[1] = v189;
  if (v189 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v189 + 16), 1u,
                              memory_order_relaxed);
    v193 = *(_QWORD*)(a1 + 56);
    v194 = *(_QWORD*)(a1 + 64) - v193;
    v195 = v194 >> 4;
  }
  v202 = (__int64)&v200[-2 * v195];
  v192 = v200 + 2;
  memcpy_alt1(v202, v193, v194);
  *(_QWORD*)(a1 + 56) = v202;
  *(_QWORD*)(a1 + 64) = v192;
  *(_QWORD*)(a1 + 72) = v201;
  if (v193 != 0) {
    v203 = 128;
    if (*(_QWORD*)(*v71 + 200) == 0) {
      v203 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v71 + v203, v193);
  }
  v143 = v446;
LABEL_243:
  *v141 = v192;
  if (v189 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v189);
  }
  v204 = *(_QWORD*)(a1 + 4616);
  v205 = *(_QWORD*)(a1 + 4624);
  if (v205 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v205 + 16), 1u,
                              memory_order_relaxed);
    v206 = (_QWORD*)*v141;
    v207 = *v143;
    if (*v141 < *v143) {
      *v206 = v204;
      v206[1] = v205;
      v208 = v206 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v205 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_264;
    }
  }
  else {
    v206 = (_QWORD*)*v141;
    v207 = *v143;
    if (*v141 < *v143) {
      *v206 = v204;
      v206[1] = 0;
      v208 = v206 + 2;
      goto LABEL_264;
    }
  }
  v209 = *(_QWORD*)(a1 + 56);
  v210 = (signed __int64)v206 - v209;
  v211 = ((__int64)v206 - v209) >> 4;
  v212 = v211 + 1;
  if ((unsigned __int64)(v211 + 1) >> 60 != 0) {
    goto LABEL_560;
  }
  v213 = v207 - v209;
  if (v213 >> 3 > v212) {
    v212 = v213 >> 3;
  }
  if ((unsigned __int64)v213 >= 0x7FFFFFFFFFFFFFF0LL) {
    v214 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v214 = v212;
  }
  if (v214 >> 60 != 0) {
    goto LABEL_561;
  }
  v215 = fw_memory_HeapManager_Allocate_alt1(*v71, 16 * v214, 16, 0);
  v216 = (_QWORD*)(v215 + v210);
  v217 = v215 + 16 * v214;
  *v216 = v204;
  v216[1] = v205;
  if (v205 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v205 + 16), 1u,
                              memory_order_relaxed);
    v209 = *(_QWORD*)(a1 + 56);
    v210 = *(_QWORD*)(a1 + 64) - v209;
    v211 = v210 >> 4;
  }
  v218 = (__int64)&v216[-2 * v211];
  v208 = v216 + 2;
  memcpy_alt1(v218, v209, v210);
  *(_QWORD*)(a1 + 56) = v218;
  *(_QWORD*)(a1 + 64) = v208;
  *(_QWORD*)(a1 + 72) = v217;
  if (v209 != 0) {
    v219 = 128;
    if (*(_QWORD*)(*v71 + 200) == 0) {
      v219 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v71 + v219, v209);
  }
  v143 = v446;
LABEL_264:
  *v141 = v208;
  if (v205 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v205);
  }
  v220 = *(_QWORD*)(a1 + 4568);
  v221 = *(_QWORD*)(a1 + 4576);
  if (v221 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v221 + 16), 1u,
                              memory_order_relaxed);
    v222 = (_QWORD*)*v141;
    v223 = *v143;
    if (*v141 < *v143) {
      *v222 = v220;
      v222[1] = v221;
      v224 = v222 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v221 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_285;
    }
  }
  else {
    v222 = (_QWORD*)*v141;
    v223 = *v143;
    if (*v141 < *v143) {
      *v222 = v220;
      v222[1] = 0;
      v224 = v222 + 2;
      goto LABEL_285;
    }
  }
  v225 = *(_QWORD*)(a1 + 56);
  v226 = (signed __int64)v222 - v225;
  v227 = ((__int64)v222 - v225) >> 4;
  v228 = v227 + 1;
  if ((unsigned __int64)(v227 + 1) >> 60 != 0) {
    goto LABEL_560;
  }
  v229 = v223 - v225;
  if (v229 >> 3 > v228) {
    v228 = v229 >> 3;
  }
  if ((unsigned __int64)v229 >= 0x7FFFFFFFFFFFFFF0LL) {
    v230 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v230 = v228;
  }
  if (v230 >> 60 != 0) {
    goto LABEL_561;
  }
  v231 = fw_memory_HeapManager_Allocate_alt1(*v71, 16 * v230, 16, 0);
  v232 = (_QWORD*)(v231 + v226);
  v233 = v231 + 16 * v230;
  *v232 = v220;
  v232[1] = v221;
  if (v221 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v221 + 16), 1u,
                              memory_order_relaxed);
    v225 = *(_QWORD*)(a1 + 56);
    v226 = *(_QWORD*)(a1 + 64) - v225;
    v227 = v226 >> 4;
  }
  v234 = (__int64)&v232[-2 * v227];
  v224 = v232 + 2;
  memcpy_alt1(v234, v225, v226);
  *(_QWORD*)(a1 + 56) = v234;
  *(_QWORD*)(a1 + 64) = v224;
  *(_QWORD*)(a1 + 72) = v233;
  if (v225 != 0) {
    v235 = 128;
    if (*(_QWORD*)(*v71 + 200) == 0) {
      v235 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v71 + v235, v225);
  }
  v143 = v446;
LABEL_285:
  *v141 = v224;
  if (v221 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v221);
  }
  v236 = *(_QWORD*)(a1 + 4632);
  v237 = *(_QWORD*)(a1 + 4640);
  if (v237 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v237 + 16), 1u,
                              memory_order_relaxed);
    v238 = (_QWORD*)*v141;
    v239 = *v143;
    if (*v141 < *v143) {
      *v238 = v236;
      v238[1] = v237;
      v240 = v238 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v237 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_306;
    }
  }
  else {
    v238 = (_QWORD*)*v141;
    v239 = *v143;
    if (*v141 < *v143) {
      *v238 = v236;
      v238[1] = 0;
      v240 = v238 + 2;
      goto LABEL_306;
    }
  }
  v241 = *(_QWORD*)(a1 + 56);
  v242 = (signed __int64)v238 - v241;
  v243 = ((__int64)v238 - v241) >> 4;
  v244 = v243 + 1;
  if ((unsigned __int64)(v243 + 1) >> 60 != 0) {
    goto LABEL_560;
  }
  v245 = v239 - v241;
  if (v245 >> 3 > v244) {
    v244 = v245 >> 3;
  }
  if ((unsigned __int64)v245 >= 0x7FFFFFFFFFFFFFF0LL) {
    v246 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v246 = v244;
  }
  if (v246 >> 60 != 0) {
    goto LABEL_561;
  }
  v247 = fw_memory_HeapManager_Allocate_alt1(*v71, 16 * v246, 16, 0);
  v248 = (_QWORD*)(v247 + v242);
  v249 = v247 + 16 * v246;
  *v248 = v236;
  v248[1] = v237;
  if (v237 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v237 + 16), 1u,
                              memory_order_relaxed);
    v241 = *(_QWORD*)(a1 + 56);
    v242 = *(_QWORD*)(a1 + 64) - v241;
    v243 = v242 >> 4;
  }
  v250 = (__int64)&v248[-2 * v243];
  v240 = v248 + 2;
  memcpy_alt1(v250, v241, v242);
  *(_QWORD*)(a1 + 56) = v250;
  *(_QWORD*)(a1 + 64) = v240;
  *(_QWORD*)(a1 + 72) = v249;
  if (v241 != 0) {
    v251 = 128;
    if (*(_QWORD*)(*v71 + 200) == 0) {
      v251 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v71 + v251, v241);
  }
  v143 = v446;
LABEL_306:
  *v141 = v240;
  if (v237 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v237);
  }
  v252 = *(_QWORD*)(a1 + 4648);
  v253 = *(_QWORD*)(a1 + 4656);
  if (v253 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v253 + 16), 1u,
                              memory_order_relaxed);
    v254 = (_QWORD*)*v141;
    v255 = *v143;
    if (*v141 < *v143) {
      *v254 = v252;
      v254[1] = v253;
      v256 = v254 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v253 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_327;
    }
  }
  else {
    v254 = (_QWORD*)*v141;
    v255 = *v143;
    if (*v141 < *v143) {
      *v254 = v252;
      v254[1] = 0;
      v256 = v254 + 2;
      goto LABEL_327;
    }
  }
  v257 = *(_QWORD*)(a1 + 56);
  v258 = (signed __int64)v254 - v257;
  v259 = ((__int64)v254 - v257) >> 4;
  v260 = v259 + 1;
  if ((unsigned __int64)(v259 + 1) >> 60 != 0) {
    goto LABEL_560;
  }
  v261 = v255 - v257;
  if (v261 >> 3 > v260) {
    v260 = v261 >> 3;
  }
  if ((unsigned __int64)v261 >= 0x7FFFFFFFFFFFFFF0LL) {
    v262 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v262 = v260;
  }
  if (v262 >> 60 != 0) {
    goto LABEL_561;
  }
  v263 = fw_memory_HeapManager_Allocate_alt1(*v71, 16 * v262, 16, 0);
  v264 = (_QWORD*)(v263 + v258);
  v265 = v263 + 16 * v262;
  *v264 = v252;
  v264[1] = v253;
  if (v253 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v253 + 16), 1u,
                              memory_order_relaxed);
    v257 = *(_QWORD*)(a1 + 56);
    v258 = *(_QWORD*)(a1 + 64) - v257;
    v259 = v258 >> 4;
  }
  v266 = (__int64)&v264[-2 * v259];
  v256 = v264 + 2;
  memcpy_alt1(v266, v257, v258);
  *(_QWORD*)(a1 + 56) = v266;
  *(_QWORD*)(a1 + 64) = v256;
  *(_QWORD*)(a1 + 72) = v265;
  if (v257 != 0) {
    v267 = 128;
    if (*(_QWORD*)(*v71 + 200) == 0) {
      v267 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v71 + v267, v257);
  }
  v143 = v446;
LABEL_327:
  *v141 = v256;
  if (v253 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v253);
  }
  v268 = *(_QWORD*)(a1 + 4664);
  v269 = *(_QWORD*)(a1 + 4672);
  if (v269 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v269 + 16), 1u,
                              memory_order_relaxed);
    v270 = (_QWORD*)*v141;
    v271 = *v143;
    if (*v141 < *v143) {
      *v270 = v268;
      v270[1] = v269;
      v272 = v270 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v269 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_348;
    }
  }
  else {
    v270 = (_QWORD*)*v141;
    v271 = *v143;
    if (*v141 < *v143) {
      *v270 = v268;
      v270[1] = 0;
      v272 = v270 + 2;
      goto LABEL_348;
    }
  }
  v273 = *(_QWORD*)(a1 + 56);
  v274 = (signed __int64)v270 - v273;
  v275 = ((__int64)v270 - v273) >> 4;
  v276 = v275 + 1;
  if ((unsigned __int64)(v275 + 1) >> 60 != 0) {
    goto LABEL_560;
  }
  v277 = v271 - v273;
  if (v277 >> 3 > v276) {
    v276 = v277 >> 3;
  }
  if ((unsigned __int64)v277 >= 0x7FFFFFFFFFFFFFF0LL) {
    v278 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v278 = v276;
  }
  if (v278 >> 60 != 0) {
    goto LABEL_561;
  }
  v279 = fw_memory_HeapManager_Allocate_alt1(*v71, 16 * v278, 16, 0);
  v280 = (_QWORD*)(v279 + v274);
  v281 = v279 + 16 * v278;
  *v280 = v268;
  v280[1] = v269;
  if (v269 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v269 + 16), 1u,
                              memory_order_relaxed);
    v273 = *(_QWORD*)(a1 + 56);
    v274 = *(_QWORD*)(a1 + 64) - v273;
    v275 = v274 >> 4;
  }
  v282 = (__int64)&v280[-2 * v275];
  v272 = v280 + 2;
  memcpy_alt1(v282, v273, v274);
  *(_QWORD*)(a1 + 56) = v282;
  *(_QWORD*)(a1 + 64) = v272;
  *(_QWORD*)(a1 + 72) = v281;
  if (v273 != 0) {
    v283 = 128;
    if (*(_QWORD*)(*v71 + 200) == 0) {
      v283 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v71 + v283, v273);
  }
  v143 = v446;
LABEL_348:
  *v141 = v272;
  if (v269 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v269);
  }
  v284 = *(_QWORD*)(a1 + 4680);
  v285 = *(_QWORD*)(a1 + 4688);
  if (v285 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v285 + 16), 1u,
                              memory_order_relaxed);
    v286 = (_QWORD*)*v141;
    v287 = *v143;
    if (*v141 < *v143) {
      *v286 = v284;
      v286[1] = v285;
      v288 = v286 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v285 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_369;
    }
  }
  else {
    v286 = (_QWORD*)*v141;
    v287 = *v143;
    if (*v141 < *v143) {
      *v286 = v284;
      v286[1] = 0;
      v288 = v286 + 2;
      goto LABEL_369;
    }
  }
  v289 = *(_QWORD*)(a1 + 56);
  v290 = (signed __int64)v286 - v289;
  v291 = ((__int64)v286 - v289) >> 4;
  v292 = v291 + 1;
  if ((unsigned __int64)(v291 + 1) >> 60 != 0) {
    goto LABEL_560;
  }
  v293 = v287 - v289;
  if (v293 >> 3 > v292) {
    v292 = v293 >> 3;
  }
  if ((unsigned __int64)v293 >= 0x7FFFFFFFFFFFFFF0LL) {
    v294 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v294 = v292;
  }
  if (v294 >> 60 != 0) {
    goto LABEL_561;
  }
  v295 = fw_memory_HeapManager_Allocate_alt1(*v71, 16 * v294, 16, 0);
  v296 = (_QWORD*)(v295 + v290);
  v297 = v295 + 16 * v294;
  *v296 = v284;
  v296[1] = v285;
  if (v285 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v285 + 16), 1u,
                              memory_order_relaxed);
    v289 = *(_QWORD*)(a1 + 56);
    v290 = *(_QWORD*)(a1 + 64) - v289;
    v291 = v290 >> 4;
  }
  v298 = (__int64)&v296[-2 * v291];
  v288 = v296 + 2;
  memcpy_alt1(v298, v289, v290);
  *(_QWORD*)(a1 + 56) = v298;
  *(_QWORD*)(a1 + 64) = v288;
  *(_QWORD*)(a1 + 72) = v297;
  if (v289 != 0) {
    v299 = 128;
    if (*(_QWORD*)(*v71 + 200) == 0) {
      v299 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v71 + v299, v289);
  }
  v143 = v446;
LABEL_369:
  *v141 = v288;
  if (v285 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v285);
  }
  v300 = *(_QWORD*)(a1 + 4696);
  v301 = *(_QWORD*)(a1 + 4704);
  if (v301 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v301 + 16), 1u,
                              memory_order_relaxed);
    v302 = (_QWORD*)*v141;
    v303 = *v143;
    if (*v141 < *v143) {
      *v302 = v300;
      v302[1] = v301;
      v304 = v302 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v301 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_390;
    }
  }
  else {
    v302 = (_QWORD*)*v141;
    v303 = *v143;
    if (*v141 < *v143) {
      *v302 = v300;
      v302[1] = 0;
      v304 = v302 + 2;
      goto LABEL_390;
    }
  }
  v305 = *(_QWORD*)(a1 + 56);
  v306 = (signed __int64)v302 - v305;
  v307 = ((__int64)v302 - v305) >> 4;
  v308 = v307 + 1;
  if ((unsigned __int64)(v307 + 1) >> 60 != 0) {
    goto LABEL_560;
  }
  v309 = v303 - v305;
  if (v309 >> 3 > v308) {
    v308 = v309 >> 3;
  }
  if ((unsigned __int64)v309 >= 0x7FFFFFFFFFFFFFF0LL) {
    v310 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v310 = v308;
  }
  if (v310 >> 60 != 0) {
    goto LABEL_561;
  }
  v311 = fw_memory_HeapManager_Allocate_alt1(*v71, 16 * v310, 16, 0);
  v312 = (_QWORD*)(v311 + v306);
  v313 = v311 + 16 * v310;
  *v312 = v300;
  v312[1] = v301;
  if (v301 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v301 + 16), 1u,
                              memory_order_relaxed);
    v305 = *(_QWORD*)(a1 + 56);
    v306 = *(_QWORD*)(a1 + 64) - v305;
    v307 = v306 >> 4;
  }
  v314 = (__int64)&v312[-2 * v307];
  v304 = v312 + 2;
  memcpy_alt1(v314, v305, v306);
  *(_QWORD*)(a1 + 56) = v314;
  *(_QWORD*)(a1 + 64) = v304;
  *(_QWORD*)(a1 + 72) = v313;
  if (v305 != 0) {
    v315 = 128;
    if (*(_QWORD*)(*v71 + 200) == 0) {
      v315 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v71 + v315, v305);
  }
  v143 = v446;
LABEL_390:
  *v141 = v304;
  if (v301 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v301);
  }
  v316 = *(_QWORD*)(a1 + 4712);
  v317 = *(_QWORD*)(a1 + 4720);
  if (v317 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v317 + 16), 1u,
                              memory_order_relaxed);
    v318 = (_QWORD*)*v141;
    v319 = *v143;
    if (*v141 < *v143) {
      *v318 = v316;
      v318[1] = v317;
      v320 = v318 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v317 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_411;
    }
  }
  else {
    v318 = (_QWORD*)*v141;
    v319 = *v143;
    if (*v141 < *v143) {
      *v318 = v316;
      v318[1] = 0;
      v320 = v318 + 2;
      goto LABEL_411;
    }
  }
  v321 = *(_QWORD*)(a1 + 56);
  v322 = (signed __int64)v318 - v321;
  v323 = ((__int64)v318 - v321) >> 4;
  v324 = v323 + 1;
  if ((unsigned __int64)(v323 + 1) >> 60 != 0) {
    goto LABEL_560;
  }
  v325 = v319 - v321;
  if (v325 >> 3 > v324) {
    v324 = v325 >> 3;
  }
  if ((unsigned __int64)v325 >= 0x7FFFFFFFFFFFFFF0LL) {
    v326 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v326 = v324;
  }
  if (v326 >> 60 != 0) {
    goto LABEL_561;
  }
  v327 = fw_memory_HeapManager_Allocate_alt1(*v71, 16 * v326, 16, 0);
  v328 = (_QWORD*)(v327 + v322);
  v329 = v327 + 16 * v326;
  *v328 = v316;
  v328[1] = v317;
  if (v317 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v317 + 16), 1u,
                              memory_order_relaxed);
    v321 = *(_QWORD*)(a1 + 56);
    v322 = *(_QWORD*)(a1 + 64) - v321;
    v323 = v322 >> 4;
  }
  v330 = (__int64)&v328[-2 * v323];
  v320 = v328 + 2;
  memcpy_alt1(v330, v321, v322);
  *(_QWORD*)(a1 + 56) = v330;
  *(_QWORD*)(a1 + 64) = v320;
  *(_QWORD*)(a1 + 72) = v329;
  if (v321 != 0) {
    v331 = 128;
    if (*(_QWORD*)(*v71 + 200) == 0) {
      v331 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v71 + v331, v321);
  }
  v143 = v446;
LABEL_411:
  *v141 = v320;
  if (v317 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v317);
  }
  v332 = *(_QWORD*)(a1 + 4728);
  v333 = *(_QWORD*)(a1 + 4736);
  if (v333 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v333 + 16), 1u,
                              memory_order_relaxed);
    v334 = (_QWORD*)*v141;
    v335 = *v143;
    if (*v141 < *v143) {
      *v334 = v332;
      v334[1] = v333;
      v336 = v334 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v333 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_432;
    }
  }
  else {
    v334 = (_QWORD*)*v141;
    v335 = *v143;
    if (*v141 < *v143) {
      *v334 = v332;
      v334[1] = 0;
      v336 = v334 + 2;
      goto LABEL_432;
    }
  }
  v337 = *(_QWORD*)(a1 + 56);
  v338 = (signed __int64)v334 - v337;
  v339 = ((__int64)v334 - v337) >> 4;
  v340 = v339 + 1;
  if ((unsigned __int64)(v339 + 1) >> 60 != 0) {
    goto LABEL_560;
  }
  v341 = v335 - v337;
  if (v341 >> 3 > v340) {
    v340 = v341 >> 3;
  }
  if ((unsigned __int64)v341 >= 0x7FFFFFFFFFFFFFF0LL) {
    v342 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v342 = v340;
  }
  if (v342 >> 60 != 0) {
    goto LABEL_561;
  }
  v343 = fw_memory_HeapManager_Allocate_alt1(*v71, 16 * v342, 16, 0);
  v344 = (_QWORD*)(v343 + v338);
  v345 = v343 + 16 * v342;
  *v344 = v332;
  v344[1] = v333;
  if (v333 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v333 + 16), 1u,
                              memory_order_relaxed);
    v337 = *(_QWORD*)(a1 + 56);
    v338 = *(_QWORD*)(a1 + 64) - v337;
    v339 = v338 >> 4;
  }
  v346 = (__int64)&v344[-2 * v339];
  v336 = v344 + 2;
  memcpy_alt1(v346, v337, v338);
  *(_QWORD*)(a1 + 56) = v346;
  *(_QWORD*)(a1 + 64) = v336;
  *(_QWORD*)(a1 + 72) = v345;
  if (v337 != 0) {
    v347 = 128;
    if (*(_QWORD*)(*v71 + 200) == 0) {
      v347 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v71 + v347, v337);
  }
  v143 = v446;
LABEL_432:
  *v141 = v336;
  if (v333 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v333);
  }
  v348 = *(_QWORD*)(a1 + 4744);
  v349 = *(_QWORD*)(a1 + 4752);
  if (v349 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v349 + 16), 1u,
                              memory_order_relaxed);
    v350 = (_QWORD*)*v141;
    v351 = *v143;
    if (*v141 < *v143) {
      *v350 = v348;
      v350[1] = v349;
      v352 = v350 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v349 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_453;
    }
  }
  else {
    v350 = (_QWORD*)*v141;
    v351 = *v143;
    if (*v141 < *v143) {
      *v350 = v348;
      v350[1] = 0;
      v352 = v350 + 2;
      goto LABEL_453;
    }
  }
  v353 = *(_QWORD*)(a1 + 56);
  v354 = (signed __int64)v350 - v353;
  v355 = ((__int64)v350 - v353) >> 4;
  v356 = v355 + 1;
  if ((unsigned __int64)(v355 + 1) >> 60 != 0) {
    goto LABEL_560;
  }
  v357 = v351 - v353;
  if (v357 >> 3 > v356) {
    v356 = v357 >> 3;
  }
  if ((unsigned __int64)v357 >= 0x7FFFFFFFFFFFFFF0LL) {
    v358 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v358 = v356;
  }
  if (v358 >> 60 != 0) {
    goto LABEL_561;
  }
  v359 = fw_memory_HeapManager_Allocate_alt1(*v71, 16 * v358, 16, 0);
  v360 = (_QWORD*)(v359 + v354);
  v361 = v359 + 16 * v358;
  *v360 = v348;
  v360[1] = v349;
  if (v349 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v349 + 16), 1u,
                              memory_order_relaxed);
    v353 = *(_QWORD*)(a1 + 56);
    v354 = *(_QWORD*)(a1 + 64) - v353;
    v355 = v354 >> 4;
  }
  v362 = (__int64)&v360[-2 * v355];
  v352 = v360 + 2;
  memcpy_alt1(v362, v353, v354);
  *(_QWORD*)(a1 + 56) = v362;
  *(_QWORD*)(a1 + 64) = v352;
  *(_QWORD*)(a1 + 72) = v361;
  if (v353 != 0) {
    v363 = 128;
    if (*(_QWORD*)(*v71 + 200) == 0) {
      v363 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v71 + v363, v353);
  }
  v143 = v446;
LABEL_453:
  *v141 = v352;
  if (v349 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v349);
  }
  v364 = *(_QWORD*)(a1 + 4760);
  v365 = *(_QWORD*)(a1 + 4768);
  if (v365 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v365 + 16), 1u,
                              memory_order_relaxed);
    v366 = (_QWORD*)*v141;
    v367 = *v143;
    if (*v141 < *v143) {
      *v366 = v364;
      v366[1] = v365;
      v368 = v366 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v365 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_474;
    }
  }
  else {
    v366 = (_QWORD*)*v141;
    v367 = *v143;
    if (*v141 < *v143) {
      *v366 = v364;
      v366[1] = 0;
      v368 = v366 + 2;
      goto LABEL_474;
    }
  }
  v369 = *(_QWORD*)(a1 + 56);
  v370 = (signed __int64)v366 - v369;
  v371 = ((__int64)v366 - v369) >> 4;
  v372 = v371 + 1;
  if ((unsigned __int64)(v371 + 1) >> 60 != 0) {
    goto LABEL_560;
  }
  v373 = v367 - v369;
  if (v373 >> 3 > v372) {
    v372 = v373 >> 3;
  }
  if ((unsigned __int64)v373 >= 0x7FFFFFFFFFFFFFF0LL) {
    v374 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v374 = v372;
  }
  if (v374 >> 60 != 0) {
    goto LABEL_561;
  }
  v375 = fw_memory_HeapManager_Allocate_alt1(*v71, 16 * v374, 16, 0);
  v376 = (_QWORD*)(v375 + v370);
  v377 = v375 + 16 * v374;
  *v376 = v364;
  v376[1] = v365;
  if (v365 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v365 + 16), 1u,
                              memory_order_relaxed);
    v369 = *(_QWORD*)(a1 + 56);
    v370 = *(_QWORD*)(a1 + 64) - v369;
    v371 = v370 >> 4;
  }
  v378 = (__int64)&v376[-2 * v371];
  v368 = v376 + 2;
  memcpy_alt1(v378, v369, v370);
  *(_QWORD*)(a1 + 56) = v378;
  *(_QWORD*)(a1 + 64) = v368;
  *(_QWORD*)(a1 + 72) = v377;
  if (v369 != 0) {
    v379 = 128;
    if (*(_QWORD*)(*v71 + 200) == 0) {
      v379 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v71 + v379, v369);
  }
  v143 = v446;
LABEL_474:
  *v141 = v368;
  if (v365 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v365);
  }
  v380 = *(_QWORD*)(a1 + 4776);
  v381 = *(_QWORD*)(a1 + 4784);
  if (v381 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v381 + 16), 1u,
                              memory_order_relaxed);
    v382 = (_QWORD*)*v141;
    v383 = *v143;
    if (*v141 < *v143) {
      *v382 = v380;
      v382[1] = v381;
      v384 = v382 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v381 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_495;
    }
  }
  else {
    v382 = (_QWORD*)*v141;
    v383 = *v143;
    if (*v141 < *v143) {
      *v382 = v380;
      v382[1] = 0;
      v384 = v382 + 2;
      goto LABEL_495;
    }
  }
  v385 = *(_QWORD*)(a1 + 56);
  v386 = (signed __int64)v382 - v385;
  v387 = ((__int64)v382 - v385) >> 4;
  v388 = v387 + 1;
  if ((unsigned __int64)(v387 + 1) >> 60 != 0) {
    goto LABEL_560;
  }
  v389 = v383 - v385;
  if (v389 >> 3 > v388) {
    v388 = v389 >> 3;
  }
  if ((unsigned __int64)v389 >= 0x7FFFFFFFFFFFFFF0LL) {
    v390 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v390 = v388;
  }
  if (v390 >> 60 != 0) {
    goto LABEL_561;
  }
  v391 = fw_memory_HeapManager_Allocate_alt1(*v71, 16 * v390, 16, 0);
  v392 = (_QWORD*)(v391 + v386);
  v393 = v391 + 16 * v390;
  *v392 = v380;
  v392[1] = v381;
  if (v381 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v381 + 16), 1u,
                              memory_order_relaxed);
    v385 = *(_QWORD*)(a1 + 56);
    v386 = *(_QWORD*)(a1 + 64) - v385;
    v387 = v386 >> 4;
  }
  v394 = (__int64)&v392[-2 * v387];
  v384 = v392 + 2;
  memcpy_alt1(v394, v385, v386);
  *(_QWORD*)(a1 + 56) = v394;
  *(_QWORD*)(a1 + 64) = v384;
  *(_QWORD*)(a1 + 72) = v393;
  if (v385 != 0) {
    v395 = 128;
    if (*(_QWORD*)(*v71 + 200) == 0) {
      v395 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v71 + v395, v385);
  }
  v143 = v446;
LABEL_495:
  *v141 = v384;
  if (v381 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v381);
  }
  v396 = *(_QWORD*)(a1 + 4792);
  v397 = *(_QWORD*)(a1 + 4800);
  if (v397 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v397 + 16), 1u,
                              memory_order_relaxed);
    v398 = (_QWORD*)*v141;
    v399 = *v143;
    if (*v141 < *v143) {
      *v398 = v396;
      v398[1] = v397;
      v400 = v398 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v397 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_516;
    }
  }
  else {
    v398 = (_QWORD*)*v141;
    v399 = *v143;
    if (*v141 < *v143) {
      *v398 = v396;
      v398[1] = 0;
      v400 = v398 + 2;
      goto LABEL_516;
    }
  }
  v401 = *(_QWORD*)(a1 + 56);
  v402 = (signed __int64)v398 - v401;
  v403 = ((__int64)v398 - v401) >> 4;
  v404 = v403 + 1;
  if ((unsigned __int64)(v403 + 1) >> 60 != 0) {
    goto LABEL_560;
  }
  v405 = v399 - v401;
  if (v405 >> 3 > v404) {
    v404 = v405 >> 3;
  }
  if ((unsigned __int64)v405 >= 0x7FFFFFFFFFFFFFF0LL) {
    v406 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v406 = v404;
  }
  if (v406 >> 60 != 0) {
    goto LABEL_561;
  }
  v407 = fw_memory_HeapManager_Allocate_alt1(*v71, 16 * v406, 16, 0);
  v408 = (_QWORD*)(v407 + v402);
  v409 = v407 + 16 * v406;
  *v408 = v396;
  v408[1] = v397;
  if (v397 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v397 + 16), 1u,
                              memory_order_relaxed);
    v401 = *(_QWORD*)(a1 + 56);
    v402 = *(_QWORD*)(a1 + 64) - v401;
    v403 = v402 >> 4;
  }
  v410 = (__int64)&v408[-2 * v403];
  v400 = v408 + 2;
  memcpy_alt1(v410, v401, v402);
  *(_QWORD*)(a1 + 56) = v410;
  *(_QWORD*)(a1 + 64) = v400;
  *(_QWORD*)(a1 + 72) = v409;
  if (v401 != 0) {
    v411 = 128;
    if (*(_QWORD*)(*v71 + 200) == 0) {
      v411 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v71 + v411, v401);
  }
  v143 = v446;
LABEL_516:
  *v141 = v400;
  if (v397 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v397);
  }
  v412 = *(_QWORD*)(a1 + 4808);
  v413 = *(_QWORD*)(a1 + 4816);
  if (v413 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v413 + 16), 1u,
                              memory_order_relaxed);
    v414 = (_QWORD*)*v141;
    v415 = *v143;
    if (*v141 < *v143) {
      *v414 = v412;
      v414[1] = v413;
      v416 = v414 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v413 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_537;
    }
  }
  else {
    v414 = (_QWORD*)*v141;
    v415 = *v143;
    if (*v141 < *v143) {
      *v414 = v412;
      v414[1] = 0;
      v416 = v414 + 2;
      goto LABEL_537;
    }
  }
  v417 = *(_QWORD*)(a1 + 56);
  v418 = (signed __int64)v414 - v417;
  v419 = ((__int64)v414 - v417) >> 4;
  v420 = v419 + 1;
  if ((unsigned __int64)(v419 + 1) >> 60 != 0) {
    goto LABEL_560;
  }
  v421 = v415 - v417;
  if (v421 >> 3 > v420) {
    v420 = v421 >> 3;
  }
  if ((unsigned __int64)v421 >= 0x7FFFFFFFFFFFFFF0LL) {
    v422 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v422 = v420;
  }
  if (v422 >> 60 != 0) {
  LABEL_561:
    GameRoutine_60a210_alt1();
  }
  v423 = fw_memory_HeapManager_Allocate_alt1(*v71, 16 * v422, 16, 0);
  v424 = (_QWORD*)(v423 + v418);
  v425 = v423 + 16 * v422;
  *v424 = v412;
  v424[1] = v413;
  if (v413 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v413 + 16), 1u,
                              memory_order_relaxed);
    v417 = *(_QWORD*)(a1 + 56);
    v418 = *(_QWORD*)(a1 + 64) - v417;
    v419 = v418 >> 4;
  }
  v426 = (__int64)&v424[-2 * v419];
  v416 = v424 + 2;
  memcpy_alt1(v426, v417, v418);
  *(_QWORD*)(a1 + 56) = v426;
  *(_QWORD*)(a1 + 64) = v416;
  *(_QWORD*)(a1 + 72) = v425;
  if (v417 != 0) {
    v427 = 128;
    if (*(_QWORD*)(*v71 + 200) == 0) {
      v427 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v71 + v427, v417);
  }
  v143 = v446;
LABEL_537:
  *v141 = v416;
  if (v413 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v413);
  }
  v428 = *(_QWORD*)(a1 + 4824);
  v429 = *(_QWORD*)(a1 + 4832);
  if (v429 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v429 + 16), 1u,
                              memory_order_relaxed);
    v430 = (_QWORD*)*v141;
    v431 = *v143;
    if (*v141 < *v143) {
      *v430 = v428;
      v430[1] = v429;
      v432 = v430 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v429 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_557;
    }
  }
  else {
    v430 = (_QWORD*)*v141;
    v431 = *v143;
    if (*v141 < *v143) {
      *v430 = v428;
      v430[1] = 0;
      v432 = v430 + 2;
      goto LABEL_557;
    }
  }
  v433 = *(_QWORD*)(a1 + 56);
  v434 = (signed __int64)v430 - v433;
  v435 = ((__int64)v430 - v433) >> 4;
  v436 = v435 + 1;
  if ((unsigned __int64)(v435 + 1) >> 60 != 0) {
  LABEL_560:
    GameRoutine_f0af70_alt1();
  }
  v437 = v431 - v433;
  if (v437 >> 3 > v436) {
    v436 = v437 >> 3;
  }
  if ((unsigned __int64)v437 >= 0x7FFFFFFFFFFFFFF0LL) {
    v438 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v438 = v436;
  }
  if (v438 >> 60 != 0) {
    goto LABEL_561;
  }
  v439 = fw_memory_HeapManager_Allocate_alt1(*v71, 16 * v438, 16, 0);
  v440 = (_QWORD*)(v439 + v434);
  v441 = v439 + 16 * v438;
  *v440 = v428;
  v440[1] = v429;
  if (v429 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v429 + 16), 1u,
                              memory_order_relaxed);
    v433 = *(_QWORD*)(a1 + 56);
    v434 = *(_QWORD*)(a1 + 64) - v433;
    v435 = v434 >> 4;
  }
  v442 = (__int64)&v440[-2 * v435];
  v432 = v440 + 2;
  memcpy_alt1(v442, v433, v434);
  *(_QWORD*)(a1 + 56) = v442;
  *(_QWORD*)(a1 + 64) = v432;
  *(_QWORD*)(a1 + 72) = v441;
  if (v433 != 0) {
    v443 = 128;
    if (*(_QWORD*)(*v71 + 200) == 0) {
      v443 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v71 + v443, v433);
  }
LABEL_557:
  *v141 = v432;
  if (v429 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v429);
  }
  *(_QWORD*)(a1 + 5528) = 0;
  *(_QWORD*)(a1 + 5520) = 0;
}

void MapDrawManager_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
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
  __int64 v56;
  __int64 v57;
  struct {
    _QWORD v58[4];
    _QWORD* v59;
  } v58_;
  struct {
    _QWORD v60[4];
    _QWORD* v61;
  } v60_;
  struct {
    _BYTE v62[32];
    _QWORD* v63;
  } v62_;

  v2 = a1[25];
  v1 = a1[26];
  *a1 = MapDrawManager_Destructor_ptr;
  v4 = fw_memory_g_heap_manager_ptr;
  while (v1 != v2) {
    v5 = v1;
    v6 = *(_QWORD*)(v1 - 8);
    if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak_alt1(v6);
    }
    v1 = v5 - 40;
    if ((*(_BYTE*)(v5 - 40) & 1) != 0) {
      v7 = *(_QWORD*)(v5 - 24);
      if (v7 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v8, v7);
      }
    }
  }
  a1[26] = v2;
  GameHr_a867a0((__int64)(a1 + 28));
  GameHr_a867a0((__int64)(a1 + 29));
  GameHr_a867a0((__int64)(a1 + 30));
  v9 = *(_QWORD*)v4;
  v58_.v58[0] = GameData_1ff11d8;
  v58_.v59 = v58_.v58;
  v60_.v61 = v60_.v60;
  v60_.v60[0] = GameData_1ff11d8;
  v10 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v9, 64, 16, 0);
  v62_.v63 = v10;
  *v10 = GameData_1ff1158;
  v10[2] = GameData_1ff11d8;
  v10[6] = v10 + 2;
  ProcManager_659d40_alt1((__int64)v62_.v62);
  (*(void (**)(_QWORD*))(*v10 + 40LL))(v10);
  if (v60_.v61 == v60_.v60) {
    v11 = 32;
  }
  else {
    if (v60_.v61 == nullptr) {
      goto LABEL_18;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v60_.v61 + v11))((__int64)v60_.v61);
LABEL_18:
  if (v58_.v59 == v58_.v58) {
    v12 = 32;
    goto LABEL_22;
  }
  if (v58_.v59 != nullptr) {
    v12 = 40;
  LABEL_22:
    (*(void (**)(__int64))(*v58_.v59 + v12))((__int64)v58_.v59);
  }
  v13 = a1[604];
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak_alt1(v13);
  }
  v14 = a1[602];
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak_alt1(v14);
  }
  v15 = a1[600];
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak_alt1(v15);
  }
  v16 = a1[598];
  if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak_alt1(v16);
  }
  v17 = a1[596];
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak_alt1(v17);
  }
  v18 = a1[594];
  if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    std___1___shared_weak_count___release_weak_alt1(v18);
  }
  v19 = a1[592];
  if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    std___1___shared_weak_count___release_weak_alt1(v19);
  }
  v20 = a1[590];
  if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    std___1___shared_weak_count___release_weak_alt1(v20);
  }
  v21 = a1[588];
  if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
    std___1___shared_weak_count___release_weak_alt1(v21);
  }
  v22 = a1[586];
  if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    std___1___shared_weak_count___release_weak_alt1(v22);
  }
  v23 = a1[584];
  if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    std___1___shared_weak_count___release_weak_alt1(v23);
  }
  v24 = a1[582];
  if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
    std___1___shared_weak_count___release_weak_alt1(v24);
  }
  v25 = a1[580];
  if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
    std___1___shared_weak_count___release_weak_alt1(v25);
  }
  v26 = a1[578];
  if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
    std___1___shared_weak_count___release_weak_alt1(v26);
  }
  v27 = a1[576];
  if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
    std___1___shared_weak_count___release_weak_alt1(v27);
  }
  v28 = a1[574];
  if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    std___1___shared_weak_count___release_weak_alt1(v28);
  }
  v29 = a1[572];
  if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
    std___1___shared_weak_count___release_weak_alt1(v29);
  }
  v30 = a1[570];
  if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
    std___1___shared_weak_count___release_weak_alt1(v30);
  }
  v31 = a1[568];
  if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
    std___1___shared_weak_count___release_weak_alt1(v31);
  }
  v32 = a1[547];
  if (v32 != 0) {
    v33 = *(_QWORD*)v4;
    a1[548] = v32;
    v34 = 128;
    if (*(_QWORD*)(v33 + 200) == 0) {
      v34 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v33 + v34, v32);
  }
  v35 = a1[31];
  if (v35 != 0) {
    v36 = *(_QWORD*)v4;
    a1[32] = v35;
    v37 = 128;
    if (*(_QWORD*)(v36 + 200) == 0) {
      v37 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v36 + v37, v35);
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
        std___1___shared_weak_count___release_weak_alt1(v41);
      }
      v39 = v40 - 40;
      if ((*(_BYTE*)(v40 - 40) & 1) != 0) {
        v42 = *(_QWORD*)(v40 - 24);
        if (v42 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v43 = 128;
          }
          else {
            v43 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v43, v42);
        }
      }
    } while (v39 != v38);
    v44 = a1[25];
    a1[26] = v38;
    v38 = v44;
    if (v44 != 0) {
    LABEL_102:
      v45 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v45 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v45, v38);
    }
  }
  v46 = a1[17];
  if (v46 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v46 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46);
    std___1___shared_weak_count___release_weak_alt1(v46);
  }
  v47 = a1[15];
  if (v47 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v47 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47);
    std___1___shared_weak_count___release_weak_alt1(v47);
  }
  v48 = a1[13];
  if (v48 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
    std___1___shared_weak_count___release_weak_alt1(v48);
  }
  v49 = a1[11];
  if (v49 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
    std___1___shared_weak_count___release_weak_alt1(v49);
  }
  v50 = a1[7];
  if (v50 != 0) {
    v51 = a1[8];
    if (v50 == v51) {
      goto LABEL_124;
    }
    do {
      v52 = *(_QWORD*)(v51 - 8);
      if (v52 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v52);
      }
      v51 -= 16;
    } while (v51 != v50);
    v53 = a1[7];
    a1[8] = v50;
    v50 = v53;
    if (v53 != 0) {
    LABEL_124:
      v54 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v54 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v54, v50);
    }
  }
  v55 = a1[6];
  if (v55 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v55 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55);
    std___1___shared_weak_count___release_weak_alt1(v55);
  }
  v56 = a1[4];
  if (v56 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v56 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v56 + 16LL))(v56);
    std___1___shared_weak_count___release_weak_alt1(v56);
  }
  v57 = a1[2];
  if (v57 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v57 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v57 + 16LL))(v57);
    std___1___shared_weak_count___release_weak_alt1(v57);
  }
  *a1 = GameData_1ff09f8;
  if ((_QWORD*)GameData_21cd120 == a1) {
    GameData_21cd120 = 0;
  }
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

__int64 MapDrawManager_f0a3f0(__int64 a1, int a2, int a3)
{
  _DWORD* v7;
  int v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  unsigned int v25;
  bool v26;
  __int64 v27;
  __int64 v29;
  int v30;
  int v31;
  __int64 v32;
  unsigned int v33;
  unsigned int v34;
  int v35;
  int v38;
  int v39;

  if (GameData_21ed070 != 0) {
    return 0;
  }
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
  v11 = GameRoutine_f0a0d0_alt1(a1, 9);
  if ((v11 & 1) != 0) {
    v12 = GameRoutine_f097d0_alt1(a1);
    if (v12 != 0) {
      v13 = v12;
      v14 = game_g_shared_system_skills_ptr;
      v38 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                       game_g_shared_system_skills_ptr) &
            0xFFF;
      if ((game_HasSkill_alt1((_QWORD*)(v12 + 1744), (unsigned int*)&v38) &
           1) == 0) {
        if (*(_WORD*)(v13 + 492) != 0 || *(_BYTE*)(v13 + 496) != 0 ||
            (v39 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v14) & 0xFFF,
             (game_HasSkill_alt1((_QWORD*)(v13 + 1744), (unsigned int*)&v39) &
              1) == 0)) {
          if ((*(_BYTE*)(v13 + 416) & 4) == 0) {
            v35 = *(_DWORD*)((_BYTE*)((char*)0x40LL) + v14) & 0xFFF;
            if ((game_HasSkill_alt1((_QWORD*)(v13 + 1744),
                                    (unsigned int*)&v35) &
                 1) == 0) {
              v10 = 1;
            }
          }
        }
      }
    }
  }
  if ((GameRoutine_f0a0d0_alt1(a1, 10) & 1) != 0) {
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
        v26 = GameRoutine_f23ea0_alt1(*(_QWORD*)(GameData_21cd120 + 24) +
                                      254936LL);
        v16 = a2;
        v15 = a3;
        if (v26) {
          v11 = 1;
        }
      }
    }
    goto LABEL_20;
  }
  if (!GameRoutine_f23ea0_alt1(*(_QWORD*)(GameData_21cd120 + 24) + 254936LL)) {
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
         v22 = std___1___shared_weak_count_lock_alt1(v21),
         std___1___shared_weak_count___release_weak_alt1(v19), v16 = a2,
         v15 = a3, v22 != 0)) {
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
        std___1___shared_weak_count___release_weak_alt1(v22);
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
      if ((GameRoutine_f25920_alt1(v29, v16, v15, 0, 256) & 1) != 0) {
        v31 = v10 | 2;
      }
      else {
        v31 = v10;
      }
      if ((GameRoutine_f25920_alt1(v27, v30, v15, 0, 257) & 1) != 0) {
        v31 |= 4u;
      }
      if ((GameRoutine_f25920_alt1(v27, v30, v15, 1u, 0) & 1) != 0) {
        v31 |= 8u;
      }
      if ((GameRoutine_f25920_alt1(v27, v30, v15, 2u, 0) & 1) != 0) {
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

#pragma clang fp contract(off)
  __int64* v0;
  char* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  bool v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  bool v22;
  int v23;
  int v24;
  unsigned __int64 v25;
  __int128 v26;
  __int64 v27;
  float v28;
  __int64 v29;
  int v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  float v38;
  float v39;
  unsigned int v40;
  __int64 v41;
  __int64 v42;
  __int64* v43;
  __int64 v44;
  __int64 v45;
  char v46;
  float v47;
  int v48;
  bool v49;
  int v50;
  char* v51;
  __int64 v52;
  __int64 v53;
  char* v54;
  __int64 v55;
  __int64 v56;
  char* v57;
  __int64 v58;
  __int64 v59;
  unsigned int v60;
  struct {
    _QWORD v61[4];
    _QWORD* v62;
  } v61_;
  __int64 v63;
  char v64;

  if (*GameData_212ce98[0] != 0) {
    v0 = (__int64*)fw_memory_g_heap_manager_ptr;
    v1 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
    v2 = *v0;
    strcpy(v1, "MapDrawManager::Update (Total)");
    v3 = 128;
    if (*(_QWORD*)(v2 + 200) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v2 + v3, (__int64)v1);
    v4 = *(_QWORD*)GameData_212d020[0];
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 8LL) + 10LL) ==
        1) {
      v5 = *(_QWORD*)(v4 + 200);
      v6 = *(_QWORD*)(v4 + 208);
      if (v5 == v6) {
      LABEL_9:
        v8 = *(_QWORD*)(*(_QWORD*)(v4 + 4536) + 40LL);
        v9 = *(_QWORD*)(v8 + 88);
        v10 = *(_QWORD*)(v8 + 96);
        if (v9 == v10) {
        LABEL_16:
          v15 = *(_QWORD*)(v4 + 4552);
          v16 = 16;
          while (1) {
            v17 = **(_QWORD**)(v15 + v16);
            v18 = *(_QWORD*)(v17 + 88);
            v19 = *(_QWORD*)(v17 + 96);
            if (v18 != v19) {
              break;
            }
          LABEL_18:
            v16 += 16;
            if (v16 == 1040) {
              if (game_ProcGameSkipView_instance_ != 0 &&
                  *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
                v23 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
                v24 = (v23 & 8) != 0 ? 2 : 3;
                if ((v24 & v23) == 0) {
                  goto LABEL_68;
                }
              }
              if (game_ProcFadeView_instance_ != 0) {
                v25 = game_ProcFadeView_instance_ +
                      ((unsigned __int64)*(
                           unsigned __int8*)(game_ProcFadeView_instance_ + 480)
                       << 6);
                if (*(float*)(v25 + 172) == *(float*)(v25 + 168)) {
                  (*(void (**)(unsigned __int64))(*(_QWORD*)(v25 + 160) +
                                                  16LL))(v25 + 160);
                }
                else {
                  v26 = *(_OWORD*)(v25 + 208);
                }
                if (*((float*)&v26 + 3) == 0x1.0000000000000p+0f &&
                    LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                                 (_QWORD*)(*(_QWORD*)(v25 + 160) + 16LL))(
                                    v25 + 160, *((float*)&v26 + 3)))
                            .n128_f32[3] == 0x1.0000000000000p+0f) {
                  goto LABEL_68;
                }
              }
              if (((*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
                    *(_QWORD*)(*(_QWORD*)GameData_212c638 + 24LL)) &
                   0x7FFFFFFF8LL) != 8) {
                goto LABEL_68;
              }
              v27 = game_script_hub_g_frame_counter_ptr[0];
              v28 = *(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                              160LL);
              *(_QWORD*)(v4 + 4400) = 0;
              GameRoutine_f06500_alt1((_QWORD*)v4);
              GameRoutine_f2ffc0_alt1(*(_QWORD**)(v4 + 40));
              v29 = v4 + 4096;
              if (*(int*)(v4 + 4372) <= 0) {
                if ((*(_BYTE*)(v4 + 5554) & 1) != 0) {
                  v30 = 1;
                }
                else if (GameData_21cf830 != 0 &&
                         (v32 = *(_QWORD*)(GameData_21cf830 + 8),
                          v31 = *(_QWORD*)(GameData_21cf830 + 16),
                          v32 <= v31)) {
                  while (*(_BYTE*)v31 != 2) {
                    v31 -= 64LL;
                    if (v32 > v31) {
                      goto LABEL_46;
                    }
                  }
                  v60 = *(_DWORD*)(v31 + 32) - 1;
                  if (v60 > 0x19) {
                    v30 = 0;
                  }
                  else {
                    v30 = GameData_1b97a00[v60];
                  }
                  v29 = v4 + 4096;
                }
                else {
                LABEL_46:
                  v30 = 0;
                }
                if (*(_DWORD*)(v4 + 4368) != v30) {
                  *(_DWORD*)(v4 + 4368) = v30;
                  *(_DWORD*)(v4 + 5540) = 0;
                }
              }
              v33 = GameData_212cfb8[0];
              v34 = *(_QWORD*)(v4 + 4376);
              v63 = v4;
              v35 = *GameData_212ce90[0];
              *(_QWORD*)(v4 + 4384) = v34;
              LOBYTE(v35) = *(_BYTE*)(v35 + 21);
              v61_.v62 = v61_.v61;
              v64 = v35 & 1;
              v36 = *v33;
              v61_.v61[0] = GameData_1ff1268;
              v61_.v61[1] = &v64;
              v61_.v61[2] = &v63;
              game_map_Trick_Impl_EachDanger_alt1(*(_QWORD*)(v36 + 16),
                                                  (__int64)v61_.v61);
              if (v61_.v62 == v61_.v61) {
                v37 = 32;
              LABEL_53:
                (*(void (**)(__int64))(*v61_.v62 + v37))((__int64)v61_.v62);
              }
              else if (v61_.v62 != nullptr) {
                v37 = 40;
                goto LABEL_53;
              }
              v38 = v28 * 0x1.0aef000000000p+4f;
              if ((game_map_1048e00_alt1(*(_QWORD*)(v4 + 24)) & 1) != 0) {
                ++*(_QWORD*)(v4 + 168);
                *(_DWORD*)(*(_QWORD*)(v4 + 128) + 8LL) = 0;
              }
              v39 = v38 / 0x1.f400000000000p+9f;
              if (*(_QWORD*)(v4 + 96) != 0) {
                v40 = *(_DWORD*)(v4 + 4368);
                if (v40 > 7 || ((1 << v40) & 0xB0) == 0) {
                  v41 = *(_QWORD*)(v4 + 128);
                  if (*(_BYTE*)(v41 + 56) != 1 ||
                      (*(_BYTE*)(v41 + 56) = 0, *(_QWORD*)(v4 + 96) != 0)) {
                    v42 = *(_QWORD*)(v4 + 104);
                    *(_QWORD*)(v4 + 96) = 0;
                    *(_QWORD*)(v4 + 104) = 0;
                    if (v42 != 0 &&
                        atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      v43 = v0;
                      v44 = v42;
                      (*(__attribute__((swiftcall)) void (**)(
                          PSEUDO_X8, __int64))(*(_QWORD*)v42 + 16LL))(
                          (void*)(v42), v42);
                      v45 = v44;
                      v0 = v43;
                      std___1___shared_weak_count___release_weak_alt1(v45);
                    }
                    ++*(_QWORD*)(v4 + 176);
                  }
                }
              }
              GameHr_f067f0(v4);
              GameRoutine_f06b60_alt1(v4);
              v46 = GameRoutine_1551d30_alt1();
              v47 = *(float*)(v4 + 160);
              *(_BYTE*)(v29 + 1457) = v46 & 1;
              *(float*)(v4 + 160) = v39 + v47;
              game_map_f06e20(v4);
              game_map_f086e0(v4);
              game_map_f089a0(v4);
              game_10221c0_alt1(*(_QWORD*)(v4 + 128));
              game_map_MapDrawManager_UpdateMesh(v4);
              game_f30440_alt1(*(_QWORD*)(v4 + 40));
              if ((float)((float)(*(float*)(*(_QWORD*)v27 + 160LL) *
                                  0x1.0aef000000000p+4f) /
                          0x1.f400000000000p+9f) > 0x0.0p+0f) {
                v48 = *(_DWORD*)(v4 + 4372);
                v49 = __OFSUB__(v48, 1);
                v50 = v48 - 1;
                if (v50 < 0 == v49) {
                  *(_DWORD*)(v4 + 4372) = v50;
                }
              }
              goto LABEL_68;
            }
          }
          v20 = v18 + 40;
          while (1) {
            v21 = *(_QWORD*)(v20 - 16);
            if (*(_BYTE*)(v21 + 165) != 1) {
              break;
            }
            v22 = GameRoutine_ad7390_alt1((_QWORD*)v21);
            if (v22) {
              v14 = v20 == v19;
              v20 += 40;
              if (!v14) {
                continue;
              }
            }
            if (!v22) {
              break;
            }
            goto LABEL_18;
          }
        }
        else {
          v11 = v9 + 40;
          while (1) {
            v12 = *(_QWORD*)(v11 - 16);
            if (*(_BYTE*)(v12 + 165) != 1) {
              break;
            }
            v13 = GameRoutine_ad7390_alt1((_QWORD*)v12);
            if (v13) {
              v14 = v11 == v10;
              v11 += 40;
              if (!v14) {
                continue;
              }
            }
            if (!v13) {
              break;
            }
            goto LABEL_16;
          }
        }
      }
      else {
        while (1) {
          v7 = *(_QWORD*)(v5 + 24);
          if (*(_BYTE*)(v7 + 165) != 1 ||
              !GameRoutine_ad7390_alt1((_QWORD*)v7)) {
            break;
          }
          v5 += 40;
          if (v5 == v6) {
            goto LABEL_9;
          }
        }
      }
    }
  LABEL_68:
    v51 = (char*)fw_memory_HeapManager_Allocate_alt1(*v0, 32, 16, 0);
    v52 = *v0;
    strcpy(v51, "MapDrawManager::Update (Total)");
    if (*(_QWORD*)(v52 + 200) != 0) {
      v53 = 128;
    }
    else {
      v53 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v52 + v53, (__int64)v51);
    v54 = (char*)fw_memory_HeapManager_Allocate_alt1(*v0, 40, 16, 0);
    v55 = *v0;
    strcpy(v54, "PrimitiveDrawStack::Draw (Total)");
    if (*(_QWORD*)(v55 + 200) != 0) {
      v56 = 128;
    }
    else {
      v56 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v55 + v56, (__int64)v54);
    PrimitiveDrawStack_f515e0(*(_QWORD*)GameData_212d018[0]);
    v57 = (char*)fw_memory_HeapManager_Allocate_alt1(*v0, 40, 16, 0);
    v58 = *v0;
    strcpy(v57, "PrimitiveDrawStack::Draw (Total)");
    if (*(_QWORD*)(v58 + 200) != 0) {
      v59 = 128;
    }
    else {
      v59 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v58 + v59, (__int64)v57);
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
