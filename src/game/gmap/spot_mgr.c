#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1325de0(__int64);
__int64 GameRoutine_13261c0(__int64);
__int64 GameRoutine_1326420(__int64);
__int64 GameRoutine_1326c00(__int64 result, __int64);
__int64 GameRoutine_1328d60(__int64);
__int64 GameRoutine_828f50(_QWORD, _QWORD);
__int64 GameRoutine_ae07e0(_QWORD, _QWORD);
__int64 TroopMgr_1345be0(void);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_VariableManager_SetFlag(void);
__int64 game_gmap_SpotMgr_GetCurrentSpot(_QWORD);
__int64 game_gmap_TroopMgr_CountPlayerTroop_1349100(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strchr(_QWORD, _QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN GameData_1a86d15;
extern _UNKNOWN GameData_1aa9d24;
extern _UNKNOWN GameData_1aad978;
extern _UNKNOWN GameData_1abbb2b;
extern _UNKNOWN GameData_1ad7ce3;
extern _UNKNOWN GameData_1ade186;
extern __int64 (*GameData_202bd38[])();
extern __int64 (*GameData_202bdb8[])();
extern __int64 (*GameData_202bee8[])();
extern __int64 (*GameData_202c4e8[])();
extern __int64 GameData_21c9700;
extern __int64 GameData_21c9e28;
extern __int64 GameData_21c9ef0;
extern __int64 GameData_2241428;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c780;
extern __int64* GameData_212c790;
extern __int64* GameData_212ca10[133];
extern __int64* GameData_212ca70[121];
void GameRoutine_1329500(__int64, char*, char, char);
void __attribute__((noreturn)) GameRoutine_60a1d0(void);
void __attribute__((noreturn)) GameRoutine_60a210(void);
void __attribute__((noreturn)) GameRoutine_60a230(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_8875e0(_QWORD);
void __attribute__((noreturn)) GameRoutine_892740(void);
__int64 SpotMgr_Unknown3(__int64 a1);
__int64 SpotMgr_132fca0(__int64 result);
__int64 SpotMgr_132ffa0(unsigned int* a1);
__int64 SpotMgr_13301a0(__int64 a1);
__int64 SpotMgr_13304c0(unsigned int* a1);
void SpotMgr_1333820(__int64 a1, __int64 a2);
void SpotMgr_13338e0(__int64 a1, __int64 a2);
void SpotMgr_1333b80();
bool SpotMgr_1333c60(__int64 a1, __int64 a2);
bool SpotMgr_1333de0(__int64 a1, __int64 a2);
_QWORD* SpotMgr_1334160(_QWORD* result, __int64 a2);
_QWORD* SpotMgr_1334360(_QWORD* result, __int64 a2);
_QWORD* SpotMgr_1334560(_QWORD* result);
_QWORD* SpotMgr_1334d40(_QWORD* result);
void SpotMgr_1335280(char a1);
__int64 SpotMgr_1335920();
_QWORD* SpotMgr_1336ec0();
void SpotMgr_13370c0();
__int64 SpotMgr_13381e0(__int64 result);
__int64 SpotMgr_1338da0(__int64 result, __int64* a2, __int64 a3, char a4);
bool SpotMgr_133a380(__int64* a1, __int64* a2);
__int64 game_gmap_SpotMgr_EachSpotAttachment_lambda0_Invoke(__int64 a1,
                                                            __int64* a2);
__int64 game_gmap_SpotMgr_CheckWrongAttachment_lambda0_Invoke(__int64 a1,
                                                              __int64* a2);
__int64 game_gmap_SpotMgr_OnEnterGmap_lambda0_Invoke(__int64 a1, __int64* a2);
__int64 Dir_70df40(_QWORD, _QWORD);
__int64 GameRoutine_14b4b70(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern __int64 GameData_21c96e8;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
void __attribute__((noreturn))
GameRoutine_60a210_alt1(_QWORD) __asm__("GameRoutine_60a210");
__int64 game_gmap_SpotMgr_GetAroundSpot_lambda0_Invoke(__int64 result,
                                                       __int64** a2);
__int16* game_gmap_SpotMgr_TryPlayAppearAnimal_lambda0_Invoke(__int64 a1,
                                                              __int64* a2);
_QWORD* GameRoutine_dbc1e0(_QWORD*, __int64);
__attribute__((swiftcall)) void Manager_66c4e0(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void
SpotMgr_13306e0_alt1(PSEUDO_X8, char**, char,
                     char**) __asm__("SpotMgr_13306e0");
__int64 GameRoutine_1325100(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1325de0_alt1(_QWORD) __asm__("GameRoutine_1325de0");
__int64 GameRoutine_1326c00_alt1(_QWORD, _QWORD) __asm__("GameRoutine_1326c00");
__int64 GameRoutine_14ce840(_QWORD, _QWORD);
__int64 GameRoutine_6360e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_888970(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ae07e0_alt1(void) __asm__("GameRoutine_ae07e0");
__int64 Impl_13261c0(_QWORD);
__int64 Impl_13261c0_alt1(__int64) __asm__("Impl_13261c0");
__int64 Impl_1328460(_QWORD);
__int64 Impl_1328670(_QWORD);
__int64 Impl_132a360(_QWORD);
__int64 SpotMgr_13381e0_alt1(_QWORD) __asm__("SpotMgr_13381e0");
__int64 SpotMgr_1338320_alt1(_QWORD, _QWORD, _QWORD,
                             _QWORD) __asm__("SpotMgr_1338320");
__int64 SpotMgr_1338da0_alt1(_QWORD, _QWORD, _QWORD,
                             _QWORD) __asm__("SpotMgr_1338da0");
__int64 SpotMgr_133acc0_alt1(_QWORD, _QWORD, _QWORD) __asm__("SpotMgr_133acc0");
__int64 TroopMgr_13460a0(_QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_VariableManager_SetFlag_alt1(_QWORD, _QWORD) __asm__(
    "game_VariableManager_SetFlag");
__int64 game_gmap_1327670(float32x4_t*, float32x4_t*);
__int64 game_gmap_13278a0(float32x4_t*, int, float32x4_t*);
__int64 game_gmap_SpotMgr_GetCurrentSpot_alt1(void) __asm__(
    "game_gmap_SpotMgr_GetCurrentSpot");
__int64 nn_os_LockMutex(_QWORD);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
__n128 GameRoutine_14a1390(_QWORD*, char);
__n128 nn_mem_StandardAllocator_Free_alt2(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN GameData_1a0d058;
extern _UNKNOWN GameData_1a86d1f;
extern _UNKNOWN GameData_1a8eaf7;
extern _UNKNOWN GameData_1ab570b;
extern _UNKNOWN GameData_1ab9636;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a82f20;
extern __int64 (*GameData_202be68[])();
extern __int64 (*GameData_202bf68[])();
extern __int64 (*game_gmap_SpotMgr_Impl_vtable[])();
extern __int64* GameData_212c978[152];
extern __int64* GameData_212ca80[119];
extern __int64* GameData_212cac8[110];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* snd_g_fileIndex_ptr[2];
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212c7a0[13];
extern __int64 GameData_21eea40;
extern __int64 GameData_21eea50;
extern __int64 GameData_21f1658;
float GameRoutine_135bbf0(_QWORD, _QWORD, _QWORD);
void GameRoutine_13289e0(__int64);
void GameRoutine_1328d60_alt1(__int64) __asm__("GameRoutine_1328d60");
void __attribute__((noreturn)) GameRoutine_1338190(void);
void __attribute__((noreturn)) GameRoutine_13381b0(_QWORD);
void __attribute__((noreturn)) GameRoutine_1338850(_QWORD);
void __attribute__((noreturn)) GameRoutine_1338870(_QWORD);
void __attribute__((noreturn)) GameRoutine_1338890(_QWORD);
void __attribute__((noreturn))
GameRoutine_60a210_alt2() __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_a78a90(void);
void __attribute__((noreturn)) String_60a1d0(void);
void game_gmap_1329500(__int64, char*, char, char);
void SpotMgr_Unknown2(__int64 a1);
__attribute__((swiftcall)) void
SpotMgr_13306e0(PSEUDO_X8 x8_, unsigned __int64 result, char a2, char** a3);
__attribute__((swiftcall)) void SpotMgr_1331320(PSEUDO_X8 x8_, __int64 a1,
                                                __int64 a2, int a3);
__attribute__((swiftcall)) void SpotMgr_1331ca0(PSEUDO_X8 x8_, __int64 a1);
__attribute__((swiftcall)) void SpotMgr_1332660(PSEUDO_X8 x8_, __int64 result);
__int64 SpotMgr_1332940(__int64 a1, __int64 a2, __int64 a3, int a4);
bool game_gmap_SpotMgr_CalcExcludedDisposSpot(__int64 (***a1)());
void SpotMgr_1332f00(__int64 a1);
void SpotMgr_1333340(__int64 a1);
__int64 SpotMgr_13339e0();
void SpotMgr_1333b20();
__int64 game_gmap_SpotMgr_GetAroundSpot(__int64 a1);
__int64 SpotMgr_1336300();
__n128 SpotMgr_1337000();
void SpotMgr_1338320(float* a1, unsigned int* a2, int* a3, _QWORD* a4);
__int64 SpotMgr_13388c0(__int64* a1, __int64* a2, __int64* a3, __int64* a4,
                        __int64 a5);
_QWORD* SpotMgr_133acc0(float* a1, __int64* a2, _QWORD** a3);
__int64 game_gmap_SpotMgr_CalcExcludedDisposSpot_lambda0_Invoke(__int64 a1,
                                                                __int64* a2);

void SpotMgr_Unknown2(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v8;
  _QWORD* v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  char* v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  char v20;
  char* v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  char* v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  char* v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64** v49;
  __int64* v50;
  unsigned __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64* v54;
  __int64 v55;
  char* v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64* v63;
  __int64 v64;
  __int64 v65;
  char* v66;
  __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  char* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  char* v78;
  __int64 v79;
  __int64 v80;
  _QWORD* v81;
  __int64 v82;
  _QWORD* v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  unsigned __int64 v87;
  unsigned __int64 v88;
  __int64 v89;
  unsigned __int64 v90;
  unsigned __int64 v92;
  _QWORD* v93;
  __int64 v94;
  __int64** v95;
  __int64* v96;
  unsigned __int64 v97;
  __int64 v98;
  __int64 v99;
  char* v100;
  char* v101;
  __int64 v102;
  unsigned __int64 v103;
  unsigned __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  float32x4_t** v114;
  float32x4_t* v115;
  float32x4_t* v116;
  __int64 v117;
  _DWORD* v118;
  float32x4_t v119;
  float32x4_t v120;
  _DWORD* v121;
  __int128 v122;
  __int128 v123;
  __int64 v124;
  float32x4_t v125;
  float32x4_t v126;
  float v127;
  float32x4_t v128;
  float32x4_t v129;
  float v130;
  float v131;
  unsigned int v132;
  unsigned __int64 v133;
  float* v134;
  float* v135;
  float v136;
  float v137;
  float32x4_t v138;
  float32x4_t v139;
  float v140;
  float v141;
  float32x4_t v142;
  float32x4_t* v143;
  float32x4_t v144;
  float v145;
  float32x4_t v146;
  float v147;
  float v148;
  float32x4_t v149;
  float32x4_t v150;
  float v151;
  float v152;
  float32x4_t v153;
  float32x4_t* v154;
  float32x4_t v155;
  float32x4_t v156;
  float32x4_t v157;
  int8x16_t v158;
  char* v159;
  __int64 v160;
  unsigned __int64 v161;
  unsigned __int64 v162;
  __int64 v163;
  char* v164;
  __int64 v165;
  __int64 v166;
  float32x4_t v167;
  __int64 v168;
  float v169;
  float v170;
  float32x4_t v171;
  float32x4_t v172;
  float v173;
  float v174;
  float32x4_t v175;
  float32x4_t* v176;
  int v177;
  int v178;
  float32x4_t* v179;
  _QWORD* v180;
  unsigned __int64 v181;
  float32x4_t*** v182;
  __int64 v183;
  __int64 v184;
  char* v185;
  __int64 v186;
  unsigned __int64 v187;
  __int64 v188;
  unsigned __int64 v189;
  __int64 v190;
  unsigned __int64 v191;
  char* v192;
  __int64 v193;
  __int64 v194;
  _QWORD* v195;
  __int128 v196;
  __int128 v197;
  _QWORD* v198;
  __int128 v199;
  __int128 v200;
  __int64 v201;
  __int128 v202;
  __int128 v203;
  __int128 v204;
  __int128 v205;
  __int128 v206;
  __int128 v207;
  __int128 v208;
  __int128 v209;
  __int128 v210;
  __int128 v211;
  __int128 v212;
  __int128 v213;
  __int128 v214;
  __int128 v215;
  __int128 v216;
  __int128 v217;
  float32x4_t* v218;
  int v219;
  int v220;
  float32x4_t* v221;
  _QWORD* v222;
  unsigned __int64 v223;
  _QWORD* v224;
  __int64 v225;
  char* v226;
  __int64 v227;
  unsigned __int64 v228;
  __int64 v229;
  unsigned __int64 v230;
  __int64 v231;
  unsigned __int64 v232;
  char* v233;
  __int64 v234;
  __int64 v235;
  __int64 v236;
  __int64* v237;
  unsigned __int64 v238;
  __int64 v239;
  char* v240;
  char* v241;
  __int64 v242;
  __int64 v243;
  unsigned int v244;
  unsigned __int64 v245;
  unsigned __int64 v247;
  __int64 v248;
  __int64** v249;
  __int64* v250;
  unsigned __int64 v251;
  __int64 v252;
  __int64 v253;
  _QWORD* v254;
  char* v255;
  char* v256;
  unsigned __int64 v257;
  __int64 v258;
  signed __int64 v259;
  unsigned __int64 v260;
  unsigned __int64 v261;
  unsigned __int64 v262;
  __int64 v263;
  char* v264;
  __int64 v265;
  __int64** v266;
  __int64* v267;
  unsigned __int64 v268;
  __int64 v269;
  __int64* v270;
  __int64* v271;
  unsigned __int64 v272;
  unsigned __int64 v273;
  __int64* v274;
  unsigned __int64 v275;
  __int64 v276;
  char* v277;
  char* v278;
  unsigned __int64 v279;
  __int64 v280;
  signed __int64 v281;
  char* v282;
  __int64 v283;
  __int64 v284;
  __int64 v285;
  __int64* v286;
  __int64* v287;
  __int64 v288;
  __int64 v289;
  unsigned __int64 v290;
  _QWORD* v291;
  __int64 v292;
  char* v293;
  __int64 v294;
  unsigned __int64 v295;
  __int64 v296;
  unsigned __int64 v297;
  __int64 v298;
  unsigned __int64 v299;
  char* v300;
  __int64 v301;
  __int64 v302;
  _QWORD* v303;
  unsigned __int64 v304;
  __int64** v305;
  __int64 v306;
  __int64 v307;
  char* v308;
  __int64 v309;
  unsigned __int64 v310;
  __int64 v311;
  unsigned __int64 v312;
  __int64 v313;
  unsigned __int64 v314;
  char* v315;
  __int64 v316;
  __int64 v317;
  char* v318;
  unsigned __int64 v319;
  __int64 v320;
  bool v321;
  __int64* v322;
  __int64 v323;
  char* v324;
  __int64 v325;
  __int64 v326;
  __int64 v327;
  __int64* v328;
  __int64* v329;
  __int64 v330;
  __int64 v331;
  unsigned __int64 v332;
  _QWORD* v333;
  __int64 v334;
  char* v335;
  __int64 v336;
  unsigned __int64 v337;
  __int64 v338;
  unsigned __int64 v339;
  __int64 v340;
  unsigned __int64 v341;
  char* v342;
  __int64 v343;
  __int64 v344;
  _QWORD* v345;
  unsigned __int64 v346;
  __int64** v347;
  __int64 v348;
  char* v349;
  __int64 v350;
  unsigned __int64 v351;
  __int64 v352;
  unsigned __int64 v353;
  __int64 v354;
  unsigned __int64 v355;
  char* v356;
  __int64 v357;
  __int64 v358;
  _QWORD* v359;
  __int64 v360;
  __int64 v361;
  __int64 v362;
  __int64 v363;
  char v364;
  __int64 v365;
  unsigned int** v366;
  unsigned int** v367;
  __int64* v368;
  unsigned int* v369;
  _QWORD* v370;
  unsigned __int64 v371;
  unsigned __int64 v373;
  unsigned __int64 v374;
  __int64 v375;
  __int64** v376;
  __int64* v377;
  unsigned __int64 v378;
  __int64 v379;
  __int64 v380;
  __int64 v381;
  __int64 v382;
  __int64 v383;
  unsigned __int64 v384;
  unsigned __int64 v385;
  char* v386;
  __int64 v387;
  __int64 v388;
  unsigned __int64 v389;
  __int64* v390;
  __int64 v391;
  __int64 v392;
  char* v393;
  __int64 v394;
  unsigned __int64 v395;
  __int64 v396;
  unsigned __int64 v397;
  __int64 v398;
  unsigned __int64 v399;
  char* v400;
  __int64 v401;
  __int64 v402;
  unsigned __int64 v403;
  unsigned __int64 v404;
  unsigned __int64 v405;
  unsigned __int64 v406;
  __int64** v407;
  __int64* v408;
  unsigned __int64 v409;
  __int64 v410;
  _QWORD* v411;
  _QWORD* v412;
  char v413;
  __int64 v414;
  __int64* v415;
  __int64* v416;
  __int64 v417;
  __int64 v419;
  bool v420;
  __int64 v421;
  __int64 v422;
  char v423;
  __int64 v424;
  __int64 v425;
  __int64 v426;
  __int64 v427;
  __int64 v428;
  __int64 v429;
  __int64* v430;
  __int64* v431;
  __int64 v432;
  bool v433;
  unsigned __int64 v434;
  unsigned __int64 v435;
  unsigned __int64 v437;
  unsigned __int64 v438;
  _QWORD* v439;
  _QWORD* v440;
  unsigned __int64 v441;
  __int64 v442;
  __int64 v443;
  unsigned __int64 v444;
  unsigned __int64 v445;
  unsigned __int64 v447;
  unsigned __int64 v448;
  _QWORD* v449;
  _QWORD* v450;
  unsigned __int64 v451;
  __int64 v452;
  __int64 v453;
  char* v454;
  __int64 v455;
  char* v456;
  char* v457;
  char v458;
  __int64 v459;
  __int64 v460;
  __int64* v461;
  char* v462;
  char* v463;
  _QWORD* v464;
  char* v465;
  _QWORD* v466;
  _QWORD* v467;
  __int64 v468;
  unsigned __int64 v469;
  __int64 v470;
  float32x4_t v471;
  char* v472;
  char* v473;
  char* v474;
  float32x4_t v475;
  float32x4_t v476;
  float32x4_t v477;
  float32x4_t v478;
  __int64 v479;
  __int64 v480;
  char* v481;
  _QWORD* v482;
  _QWORD* v483;
  __int64 v484;
  float32x4_t v485;
  float32x4_t v486;
  float32x4_t v487;
  __int64 v488;
  __int64 v489;
  __int64 v490;
  __int64 v491;
  __int64 v492;
  __int64 v493;
  __int64 v494;
  __int64 v495;
  __int64 v496;
  __int64 v497;
  __int64 v498;
  __int64 v499;

  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 216, 16, 0);
  v9[4] = 0;
  v9[5] = 0;
  v9[6] = 0;
  v9[7] = 0;
  v9[8] = 0;
  v9[9] = 0;
  v9[10] = 0;
  v9[11] = 0;
  v9[12] = 0;
  v9[13] = 0;
  v9[14] = 0;
  v9[15] = 0;
  v9[16] = 0;
  v9[17] = 0;
  v9[18] = 0;
  v9[19] = 0;
  v9[20] = 0;
  v9[21] = 0;
  v9[22] = 0;
  v9[23] = 0;
  v9[24] = 0;
  v9[25] = 0;
  v10 = *v8;
  v9[26] = 0;
  v11 = (__int64*)fw_memory_HeapManager_Allocate(v10, 24, 16, 0);
  v12 = v498;
  v13 = GameData_21eea40;
  v11[1] = (__int64)&GameData_21eea40;
  v11[2] = (__int64)v9;
  GameData_21eea40 = (__int64)v11;
  *v11 = v13;
  *(_QWORD*)(v13 + 8) = v11;
  v9[3] = 0;
  v9[4] = 0;
  v9[1] = 0;
  v9[2] = 0;
  *v9 = game_gmap_SpotMgr_Impl_vtable;
  *((_DWORD*)v9 + 10) = 1065353216;
  v9[25] = 0;
  *((_BYTE*)v9 + 208) = 0;
  *((_DWORD*)v9 + 48) = 0;
  v9[22] = 0;
  v9[23] = 0;
  v14 = GameData_21eea50;
  v9[20] = 0;
  v9[21] = 0;
  v9[18] = 0;
  v9[19] = 0;
  v9[16] = 0;
  v9[17] = 0;
  v9[14] = 0;
  v9[15] = 0;
  v9[12] = 0;
  v9[13] = 0;
  v9[10] = 0;
  v9[11] = 0;
  v9[8] = 0;
  v9[9] = 0;
  v9[6] = 0;
  v9[7] = 0;
  GameData_21eea50 = v14 + 1;
  *(_QWORD*)(a1 + 8) = v9;
  v488 = v6;
  v489 = v5;
  v490 = v4;
  v491 = v3;
  v492 = v2;
  v493 = v1;
  v494 = v496;
  v495 = v497;
  v499 = v12;
  v15 = v9;
  v16 = (char*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  v479 = 41;
  v480 = 32;
  v481 = v16;
  strcpy(v16, "Contents:/GameData/Gmap/Data.bin");
  Manager_66c4e0((void*)(&v473), &v479);
  if ((v479 & 1) != 0 && v481 != nullptr) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v17);
  }
  v18 = v473;
  v466 = v9;
  v462 = v474;
  if (v473 == v474) {
    goto LABEL_467;
  }
  v461 = v9 + 3;
  while (2) {
    v20 = *v18;
    v21 = *((char**)v18 + 2);
    v483 = nullptr;
    v484 = 0;
    v481 = nullptr;
    v482 = nullptr;
    v479 = 0;
    v480 = 0;
    if ((v20 & 1) != 0) {
      v22 = v21;
    }
    else {
      v22 = v18 + 1;
    }
    if (v22 == nullptr) {
      goto LABEL_12;
    }
    v463 = v18;
    v23 = *snd_g_fileIndex_ptr[0];
    v24 = strlen(v22);
    if ((GameRoutine_6360e0(v23, v22, v24, 1, 0) & 1) == 0) {
      goto LABEL_458;
    }
    GameRoutine_14ce840(&v479, v22);
    v25 = v479;
    v26 = v480;
    while (v25 != v26) {
      v27 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 304, 16, 0);
      v28 = (__int64*)GameRoutine_1325100(v27, v25, v25 + 32);
      v29 = *(unsigned int*)(v27 + 96);
      v30 = *(_QWORD*)(v27 + 120);
      LANES128(v487).n128_u64[0] = v27;
      LANES128(v486).n128_u32[0] = v29;
      if (v30 != 0 || *(_DWORD*)(v25 + 52) == 13) {
        v32 = (__int64*)v15[7];
        v31 = v15[8];
        if ((unsigned __int64)v32 >= v31) {
          v34 = v15[6];
          v35 = (char*)v32 - v34;
          v36 = ((__int64)v32 - v34) >> 3;
          v37 = v36 + 1;
          if ((unsigned __int64)(v36 + 1) >> 61 != 0) {
            goto LABEL_676;
          }
          v38 = v31 - v34;
          if (v38 >> 2 > v37) {
            v37 = v38 >> 2;
          }
          if ((unsigned __int64)v38 >= 0x7FFFFFFFFFFFFFF8LL) {
            v39 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v39 = v37;
          }
          if (v39 != 0) {
            if (v39 >> 61 != 0) {
              goto LABEL_673;
            }
            v40 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v39, 16, 0);
          }
          else {
            v40 = 0;
          }
          v42 = v40 + 8 * v39;
          v43 = (char*)v32 - v34;
          v44 = (__int64)&v35[v40 + -8 * v36];
          *(_QWORD*)&v35[v40] = v27;
          v33 = (__int64)&v35[v40 + 8];
          v28 = (__int64*)memcpy(v44, v34, v43);
          v15 = v466;
          v466[6] = v44;
          v466[7] = v33;
          v466[8] = v42;
          if (v34 != 0) {
            v45 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v45 = 56;
            }
            v28 = (__int64*)nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v45);
          }
        }
        else {
          *v32 = v27;
          v33 = (__int64)(v32 + 1);
        }
        v46 = v15[2];
        v15[7] = v33;
        if (v46 != 0 && v15[4] != 0) {
          v47 = v46 - 1;
          if ((v46 & (v46 - 1)) != 0) {
            v48 = v29;
            if (v46 <= v29) {
              v48 = (unsigned int)v29 % (unsigned int)v46;
            }
          }
          else {
            v48 = ((_DWORD)v46 - 1) & (unsigned int)v29;
          }
          v49 = *(__int64***)(v15[1] + 8 * v48);
          if (v49 != nullptr) {
            v50 = *v49;
            if (v50 != nullptr) {
              if ((v46 & v47) == 0) {
                while (1) {
                  v52 = v50[1];
                  if (v52 == v29) {
                    if (*((_DWORD*)v50 + 4) == (_DWORD)v29) {
                      goto LABEL_64;
                    }
                  }
                  else if ((v52 & v47) != v48) {
                    goto LABEL_63;
                  }
                  v50 = (__int64*)*v50;
                  if (v50 == nullptr) {
                    goto LABEL_63;
                  }
                }
              }
              do {
                v51 = v50[1];
                if (v51 == v29) {
                  if (*((_DWORD*)v50 + 4) == (_DWORD)v29) {
                    goto LABEL_64;
                  }
                }
                else {
                  if (v51 >= v46) {
                    v51 %= v46;
                  }
                  if (v51 != v48) {
                    break;
                  }
                }
                v50 = (__int64*)*v50;
              } while (v50 != nullptr);
            }
          }
        }
      LABEL_63:
        v28 = (__int64*)SpotMgr_1338320_alt1(v15 + 1, &v486, &v486, &v487);
      LABEL_64:
        if (*(_QWORD*)(v27 + 120) != 0) {
          v54 = (__int64*)v15[10];
          v53 = v15[11];
          if ((unsigned __int64)v54 < v53) {
            *v54 = v27;
            v25 += 64;
            v15[10] = v54 + 1;
          }
          else {
            v55 = v15[9];
            v56 = (char*)v54 - v55;
            v57 = ((__int64)v54 - v55) >> 3;
            v58 = v57 + 1;
            if ((unsigned __int64)(v57 + 1) >> 61 != 0) {
              goto LABEL_676;
            }
            v59 = v53 - v55;
            if (v59 >> 2 > v58) {
              v58 = v59 >> 2;
            }
            if ((unsigned __int64)v59 >= 0x7FFFFFFFFFFFFFF8LL) {
              v60 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v60 = v58;
            }
            if (v60 != 0) {
              if (v60 >> 61 != 0) {
                goto LABEL_673;
              }
              v61 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v60, 16, 0);
            }
            else {
              v61 = 0;
            }
            v72 = v61 + 8 * v60;
            v73 = (char*)v54 - v55;
            v74 = (__int64)&v56[v61 + -8 * v57];
            *(_QWORD*)&v56[v61] = v27;
            v75 = (__int64)&v56[v61 + 8];
            memcpy(v74, v55, v73);
            v15 = v466;
            v466[9] = v74;
            v466[10] = v75;
            v466[11] = v72;
            if (v55 != 0) {
              v76 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v76 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v76);
            }
            v466[10] = v75;
            v25 += 64;
          }
        }
        else {
          v63 = (__int64*)v15[13];
          v62 = v15[14];
          if ((unsigned __int64)v63 >= v62) {
            v65 = v15[12];
            v66 = (char*)v63 - v65;
            v67 = ((__int64)v63 - v65) >> 3;
            v68 = v67 + 1;
            if ((unsigned __int64)(v67 + 1) >> 61 != 0) {
              goto LABEL_676;
            }
            v69 = v62 - v65;
            if (v69 >> 2 > v68) {
              v68 = v69 >> 2;
            }
            if ((unsigned __int64)v69 >= 0x7FFFFFFFFFFFFFF8LL) {
              v70 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v70 = v68;
            }
            if (v70 != 0) {
              if (v70 >> 61 != 0) {
                goto LABEL_673;
              }
              v71 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v70, 16, 0);
            }
            else {
              v71 = 0;
            }
            v77 = v71 + 8 * v70;
            v78 = (char*)v63 - v65;
            v79 = (__int64)&v66[v71 + -8 * v67];
            *(_QWORD*)&v66[v71] = v27;
            v64 = (__int64)&v66[v71 + 8];
            memcpy(v79, v65, v78);
            v15 = v466;
            v466[12] = v79;
            v466[13] = v64;
            v466[14] = v77;
            if (v65 != 0) {
              v80 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v80 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v80);
            }
          }
          else {
            *v63 = v27;
            v64 = (__int64)(v63 + 1);
          }
          v15[13] = v64;
          v25 += 64;
        }
      }
      else {
        GameRoutine_1325de0_alt1(v27);
        v41 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v41 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v41);
        v25 += 64;
      }
    }
    v81 = v482;
    v464 = v483;
    if (v482 == v483) {
      if (v482 != nullptr) {
        goto LABEL_452;
      }
      goto LABEL_458;
    }
    while (2) {
      v85 = *v81;
      v86 = v81[1];
      v467 = v81;
      if (*v81 == v86) {
        v465 = nullptr;
        v87 = 0;
        goto LABEL_160;
      }
      v87 = 0;
      v465 = nullptr;
      v88 = 0;
      while (1) {
        v89 = (*(_BYTE*)v85 & 1) != 0 ? *(_QWORD*)(v85 + 16) : v85 + 1;
        v28 = (__int64*)game_HashString(v89);
        v90 = v15[2];
        if (v90 == 0 || v15[4] == 0) {
          break;
        }
        v92 = v90 - 1;
        if ((v90 & (v90 - 1)) != 0) {
          v93 = v466;
          v94 = (unsigned int)v28;
          if (v90 <= (unsigned int)v28) {
            v94 = (unsigned int)v28 % (unsigned int)v90;
          }
        }
        else {
          v93 = v466;
          v94 = ((_DWORD)v90 - 1) & (unsigned int)v28;
        }
        v95 = *(__int64***)(v93[1] + 8 * v94);
        if (v95 == nullptr) {
          break;
        }
        v96 = *v95;
        if (v96 == nullptr) {
          break;
        }
        if ((v90 & v92) == 0) {
          while (1) {
            v98 = v96[1];
            if (v98 == (unsigned int)v28) {
              if (*((_DWORD*)v96 + 4) == (_DWORD)v28) {
                goto LABEL_136;
              }
            }
            else if ((v98 & v92) != v94) {
              goto LABEL_156;
            }
            v96 = (__int64*)*v96;
            if (v96 == nullptr) {
              goto LABEL_156;
            }
          }
        }
        while (1) {
          v97 = v96[1];
          if (v97 == (unsigned int)v28) {
            break;
          }
          if (v97 >= v90) {
            v97 %= v90;
          }
          if (v97 != v94) {
            goto LABEL_156;
          }
        LABEL_125:
          v96 = (__int64*)*v96;
          if (v96 == nullptr) {
            goto LABEL_156;
          }
        }
        if (*((_DWORD*)v96 + 4) != (_DWORD)v28) {
          goto LABEL_125;
        }
      LABEL_136:
        v99 = v96[3];
        if (v99 == 0) {
          break;
        }
        v100 = v465;
        if ((unsigned __int64)v465 < v88) {
          *(_QWORD*)v465 = v99;
          goto LABEL_154;
        }
        v101 = &v465[-v87];
        v102 = (__int64)&v465[-v87] >> 3;
        v103 = v102 + 1;
        if ((unsigned __int64)(v102 + 1) >> 61 != 0) {
          goto LABEL_676;
        }
        if ((__int64)(v88 - v87) >> 2 > v103) {
          v103 = (__int64)(v88 - v87) >> 2;
        }
        if (v88 - v87 >= 0x7FFFFFFFFFFFFFF8LL) {
          v104 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v104 = v103;
        }
        if (v104 == 0) {
          v105 = 0;
          goto LABEL_149;
        }
        if (v104 >> 61 != 0) {
          goto LABEL_673;
        }
        v105 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v104, 16, 0);
      LABEL_149:
        v88 = v105 + 8 * v104;
        *(_QWORD*)&v101[v105] = v99;
        v106 = (__int64)&v101[v105 + -8 * v102];
        v100 = &v101[v105];
        memcpy(v106, v87, &v465[-v87]);
        if (v87 != 0) {
          v107 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v107 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v107);
        }
        v81 = v467;
        v87 = v106;
      LABEL_154:
        v15 = v466;
        v85 += 24;
        v465 = v100 + 8;
        if (v85 == v86) {
        LABEL_160:
          v469 = v87;
          v470 = ((__int64)&v465[-v87] >> 3) - 1;
          if ((__int64)&v465[-v87] >> 3 != 1) {
            v110 = 0;
            do {
              v112 = v110;
              v113 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 128, 16, 0);
              *(_QWORD*)v113 = 0;
              *(_QWORD*)(v113 + 8) = 0;
              *(_QWORD*)(v113 + 16) = 0;
              *(_QWORD*)(v113 + 24) = 0;
              v114 = (float32x4_t**)v113;
              *(_QWORD*)(v113 + 32) = 0;
              *(_QWORD*)(v113 + 40) = 0;
              *(_QWORD*)(v113 + 48) = 0;
              *(_QWORD*)(v113 + 56) = 0;
              *(_QWORD*)(v113 + 64) = 0;
              *(_QWORD*)(v113 + 72) = 0;
              *(_QWORD*)(v113 + 80) = 0;
              *(_QWORD*)(v113 + 88) = 0;
              *(_QWORD*)(v113 + 104) = 0;
              *(_QWORD*)(v113 + 112) = 0;
              *(_QWORD*)(v113 + 120) = 0;
              *(_QWORD*)(v113 + 96) = 0;
              v115 = (float32x4_t*)(v113 + 96);
              v116 = *(float32x4_t**)(v87 + 8 * v110);
              v468 = v110 + 1;
              *(_QWORD*)v113 = v116;
              v117 = *(_QWORD*)(v87 + 8 * (v110 + 1));
              *(_BYTE*)(v113 + 16) = 0;
              *(_QWORD*)(v113 + 8) = v117;
              v118 = (_DWORD*)(v467[6] + (v110 << 6));
              *(_DWORD*)(v113 + 32) = *v118;
              *(_DWORD*)(v113 + 36) = v118[1];
              v119 = *(float32x4_t*)(v113 + 32);
              LANES128(v119).n128_u64[1] = (unsigned int)v118[2];
              *(float32x4_t*)(v113 + 32) = v119;
              *(_DWORD*)(v113 + 48) = v118[4];
              *(_DWORD*)(v113 + 52) = v118[5];
              v120 = *(float32x4_t*)(v113 + 48);
              LANES128(v120).n128_u64[1] = (unsigned int)v118[6];
              *(float32x4_t*)(v113 + 48) = v120;
              v121 = (_DWORD*)(v467[6] + (v110 << 6));
              *(_DWORD*)(v113 + 64) = v121[8];
              *(_DWORD*)(v113 + 68) = v121[9];
              v122 = *(_OWORD*)(v113 + 64);
              *((_QWORD*)&v122 + 1) = (unsigned int)v121[10];
              *(_OWORD*)(v113 + 64) = v122;
              *(_DWORD*)(v113 + 80) = v121[12];
              *(_DWORD*)(v113 + 84) = v121[13];
              v123 = *(_OWORD*)(v113 + 80);
              *((_QWORD*)&v123 + 1) = (unsigned int)v121[14];
              *(_OWORD*)(v113 + 80) = v123;
              v124 = v467[3] + 16 * v110;
              *(_DWORD*)(v113 + 96) = *(_OWORD*)v124;
              *(_DWORD*)(v113 + 100) = *(_DWORD*)(v124 + 4);
              v125 = *(float32x4_t*)(v113 + 96);
              LANES128(v125).n128_u64[1] = *(unsigned int*)(v124 + 8);
              *(float32x4_t*)(v113 + 96) = v125;
              v126 = v116[2];
              v486 = vsubq_f32(v119, v126);
              v487 = vsubq_f32(v125, v126);
              v485 = vsubq_f32(v120, v126);
              v127 = GameRoutine_135bbf0(&v487, &v486, &v485);
              v128 = vsubq_f32(v114[1][2], *v115);
              v129 = vsubq_f32(*((float32x4_t*)v114 + 5), *v115);
              v486 = vsubq_f32(*((float32x4_t*)v114 + 4), *v115);
              v487 = v128;
              v485 = v129;
              v130 = v127 + GameRoutine_135bbf0(&v487, &v486, &v485);
              v131 = 0.0f;
              v132 = 1;
              v133 = 0;
              v134 = nullptr;
              v135 = nullptr;
              *((float*)v114 + 28) = v130;
              do {
                v136 = (float)(v132 - 1) / 0x1.e000000000000p+5f;
                if (v136 >= 0.5f) {
                  v139 = *((float32x4_t*)v114 + 5);
                  v142 = *((float32x4_t*)v114 + 6);
                  v138 = *((float32x4_t*)v114 + 4);
                  v137 = (float)(v136 + -0.5f) + (float)(v136 + -0.5f);
                  v140 = 0x1.0000000000000p+0f - v137;
                  v143 = v114[1] + 2;
                  v141 = v140 * v140;
                }
                else {
                  v137 = v136 + v136;
                  v138 = *((float32x4_t*)v114 + 2);
                  v139 = *((float32x4_t*)v114 + 3);
                  v140 = 0x1.0000000000000p+0f - (float)(v136 + v136);
                  v141 = v140 * v140;
                  v142 = (*v114)[2];
                  v143 = v115;
                }
                v144 = vaddq_f32(
                    vaddq_f32(
                        vmulq_n_f32(v142, v140 * v141),
                        vmulq_n_f32(
                            v138, v137 * (float)(v140 * (float)(v140 * 3.0f)))),
                    vmulq_n_f32(v139,
                                v137 * (float)(v137 * (float)(v140 * 3.0f))));
                v145 = v137 * (float)(v137 * v137);
                v146 = *v143;
                v147 = (float)v132 / 0x1.e000000000000p+5f;
                if (v147 >= 0.5f) {
                  v150 = *((float32x4_t*)v114 + 5);
                  v153 = *((float32x4_t*)v114 + 6);
                  v149 = *((float32x4_t*)v114 + 4);
                  v148 = (float)(v147 + -0.5f) + (float)(v147 + -0.5f);
                  v151 = 0x1.0000000000000p+0f - v148;
                  v154 = v114[1] + 2;
                  v152 = v151 * v151;
                }
                else {
                  v148 = v147 + v147;
                  v149 = *((float32x4_t*)v114 + 2);
                  v150 = *((float32x4_t*)v114 + 3);
                  v151 = 0x1.0000000000000p+0f - (float)(v147 + v147);
                  v152 = v151 * v151;
                  v153 = (*v114)[2];
                  v154 = v115;
                }
                v155 = vaddq_f32(v144, vmulq_n_f32(v146, v145));
                LANES128(v155).n128_u32[3] = 0;
                v156 = vaddq_f32(
                    vaddq_f32(
                        vaddq_f32(
                            vmulq_n_f32(v153, v151 * v152),
                            vmulq_n_f32(
                                v149,
                                v148 * (float)(v151 * (float)(v151 * 3.0f)))),
                        vmulq_n_f32(
                            v150, v148 * (float)(v148 * (float)(v151 * 3.0f)))),
                    vmulq_n_f32(*v154, v148 * (float)(v148 * v148)));
                LANES128(v156).n128_u32[3] = 0;
                v157 = vsubq_f32(v155, v156);
                v158 = vmulq_f32(v157, v157);
                LANES128(v158).n128_u64[0] =
                    LANES64_OF(
                        vadd_f32(
                            COERCE_AS(float32x2_t,
                                      LANES128_OF(vextq_s8(v158, v158, 8u))
                                          .n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v158).n128_u64[0])))
                        .n64_u64[0];
                v131 =
                    v131 +
                    LANES64_OF(
                        vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v158).n128_u64[0]),
                            COERCE_AS(float32x2_t,
                                      LANES128(v158).n128_u64[0]))))
                        .n64_f32[0];
                if ((unsigned __int64)v134 < v133) {
                  *v134++ = v131;
                }
                else {
                  v159 = (char*)((char*)v134 - (char*)v135);
                  v160 = v134 - v135;
                  v161 = v160 + 1;
                  if ((unsigned __int64)(v160 + 1) >> 62 != 0) {
                    GameRoutine_a78a90();
                  }
                  if ((__int64)(v133 - (_QWORD)v135) >> 1 > v161) {
                    v161 = (__int64)(v133 - (_QWORD)v135) >> 1;
                  }
                  if (v133 - (unsigned __int64)v135 >= 0x7FFFFFFFFFFFFFFCLL) {
                    v162 = 0x3FFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v162 = v161;
                  }
                  if (v162 != 0) {
                    if (v162 >> 62 != 0) {
                      goto LABEL_673;
                    }
                    v163 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v162, 16,
                        0);
                  }
                  else {
                    v163 = 0;
                  }
                  v133 = v163 + 4 * v162;
                  v164 = (char*)((char*)v134 - (char*)v135);
                  v165 = (__int64)&v159[v163 + -4 * v160];
                  *(float*)&v159[v163] = v131;
                  v134 = (float*)&v159[v163 + 4];
                  v28 = (__int64*)memcpy(v165, v135, v164);
                  if (v135 != nullptr) {
                    v166 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v166 = 56;
                    }
                    v28 = (__int64*)nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v166);
                  }
                  v135 = (float*)v165;
                }
                ++v132;
              } while (v132 != 60);
              v167 = (__typeof__(v167)){0};
              if (v134 == v135) {
                v87 = v469;
              }
              else {
                v87 = v469;
                v168 = 0;
                while (v135[v168] < (float)(v131 * 0.5f)) {
                  if (v134 - v135 == ++v168) {
                    goto LABEL_202;
                  }
                }
                v169 = (float)((float)(unsigned int)v168 + 0.5f) /
                       0x1.e000000000000p+5f;
                if (v169 >= 0.5f) {
                  v172 = *((float32x4_t*)v114 + 5);
                  v175 = *((float32x4_t*)v114 + 6);
                  v171 = *((float32x4_t*)v114 + 4);
                  v170 = (float)(v169 + -0.5f) + (float)(v169 + -0.5f);
                  v173 = 0x1.0000000000000p+0f - v170;
                  v115 = v114[1] + 2;
                  v174 = v173 * v173;
                }
                else {
                  v170 = v169 + v169;
                  v171 = *((float32x4_t*)v114 + 2);
                  v172 = *((float32x4_t*)v114 + 3);
                  v173 = 0x1.0000000000000p+0f - (float)(v169 + v169);
                  v174 = v173 * v173;
                  v175 = (*v114)[2];
                }
                v167 = vaddq_f32(
                    vaddq_f32(
                        vaddq_f32(
                            vmulq_n_f32(v175, v173 * v174),
                            vmulq_n_f32(
                                v171,
                                v170 * (float)(v173 * (float)(v173 * 3.0f)))),
                        vmulq_n_f32(
                            v172, v170 * (float)(v170 * (float)(v173 * 3.0f)))),
                    vmulq_n_f32(*v115, v170 * (float)(v170 * v170)));
                LANES128(v167).n128_u32[3] = 0;
              }
            LABEL_202:
              v176 = *(float32x4_t**)(v87 + 8 * v112);
              v471 = v167;
              v478 = v167;
              v177 = game_gmap_1327670(v176, &v478);
              *((_DWORD*)v114 + 29) = v177;
              v178 = v177;
              v179 = *(float32x4_t**)(v87 + 8 * v112);
              v477 = v471;
              v28 = (__int64*)game_gmap_13278a0(v179, v178, &v477);
              *((_DWORD*)v114 + 30) = (_DWORD)v28;
              v180 = *(_QWORD**)(v87 + 8 * v112);
              v182 = (float32x4_t***)v180[7];
              v181 = v180[8];
              if ((unsigned __int64)v182 >= v181) {
                v184 = v180[6];
                v185 = (char*)v182 - v184;
                v186 = ((__int64)v182 - v184) >> 3;
                v187 = v186 + 1;
                if ((unsigned __int64)(v186 + 1) >> 61 != 0) {
                  goto LABEL_675;
                }
                v188 = v181 - v184;
                if (v188 >> 2 > v187) {
                  v187 = v188 >> 2;
                }
                if ((unsigned __int64)v188 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v189 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v189 = v187;
                }
                if (v189 != 0) {
                  if (v189 >> 61 != 0) {
                    goto LABEL_673;
                  }
                  v190 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v189, 16, 0);
                }
                else {
                  v190 = 0;
                }
                v191 = v190 + 8 * v189;
                v192 = (char*)v182 - v184;
                v193 = (__int64)&v185[v190 + -8 * v186];
                *(_QWORD*)&v185[v190] = v114;
                v183 = (__int64)&v185[v190 + 8];
                memcpy(v193, v184, v192);
                v180[6] = v193;
                v180[7] = v183;
                v180[8] = v191;
                if (v184 != 0) {
                  v194 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v194 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v194);
                }
                v87 = v469;
              }
              else {
                *v182 = v114;
                v183 = (__int64)(v182 + 1);
              }
              v180[7] = v183;
              v110 = v468;
              v195 = (_QWORD*)fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 128, 16, 0);
              *v195 = 0;
              v195[1] = 0;
              v195[2] = 0;
              v195[3] = 0;
              v196 = *((_OWORD*)v114 + 4);
              v197 = *((_OWORD*)v114 + 5);
              v198 = v195;
              v195[4] = 0;
              v195[5] = 0;
              v195[6] = 0;
              v195[7] = 0;
              v199 = *((_OWORD*)v114 + 2);
              v200 = *((_OWORD*)v114 + 3);
              v195[8] = 0;
              v195[9] = 0;
              v195[10] = 0;
              v195[11] = 0;
              v195[12] = 0;
              v195[13] = 0;
              v195[14] = 0;
              v195[15] = 0;
              *v195 = *(_QWORD*)(v87 + 8 * v468);
              v201 = *(_QWORD*)(v87 + 8 * v112);
              v195[8] = v196;
              v195[10] = v197;
              v195[4] = v199;
              v195[6] = v200;
              *((_BYTE*)v195 + 16) = 0;
              v203 = *((_OWORD*)v195 + 4);
              v202 = *((_OWORD*)v195 + 5);
              v195[1] = v201;
              *(_QWORD*)&v204 = v203;
              *(_QWORD*)&v205 = v202;
              *((_QWORD*)&v204 + 1) = DWORD2(v196);
              *((_QWORD*)&v205 + 1) = DWORD2(v197);
              *((_OWORD*)v195 + 4) = v204;
              *((_OWORD*)v195 + 5) = v205;
              v206 = *((_OWORD*)v195 + 2);
              v207 = *((_OWORD*)v195 + 3);
              v195[8] = v206;
              *((_QWORD*)&v206 + 1) = DWORD2(v199);
              v195[10] = v207;
              *((_QWORD*)&v207 + 1) = DWORD2(v200);
              *((_OWORD*)v195 + 2) = v206;
              *((_OWORD*)v195 + 3) = v207;
              v195[4] = v203;
              v208 = *((_OWORD*)v195 + 4);
              v209 = *((_OWORD*)v195 + 5);
              v195[6] = v202;
              *(_QWORD*)&v205 = v209;
              *((_QWORD*)&v205 + 1) = DWORD2(v200);
              *((_OWORD*)v195 + 5) = v205;
              v210 = *((_OWORD*)v195 + 2);
              v211 = *((_OWORD*)v195 + 3);
              v195[10] = v208;
              *((_QWORD*)&v208 + 1) = DWORD2(v199);
              *(_QWORD*)&v207 = v211;
              *((_QWORD*)&v207 + 1) = DWORD2(v197);
              *((_OWORD*)v195 + 3) = v207;
              *((_OWORD*)v195 + 4) = v208;
              v195[6] = v210;
              *((_QWORD*)&v210 + 1) = DWORD2(v196);
              v195[8] = v209;
              *((_OWORD*)v195 + 2) = v210;
              v195[4] = v211;
              v212 = *((_OWORD*)v195 + 2);
              v213 = *((_OWORD*)v195 + 3);
              *((_QWORD*)&v212 + 1) = DWORD2(v197);
              *((_QWORD*)&v213 + 1) = DWORD2(v196);
              v214 = *((_OWORD*)v195 + 4);
              v215 = *((_OWORD*)v195 + 5);
              *((_QWORD*)&v215 + 1) = DWORD2(v199);
              v216 = *((_OWORD*)v114 + 6);
              *((_QWORD*)&v214 + 1) = DWORD2(v200);
              v195[12] = v216;
              *((_OWORD*)v195 + 2) = v212;
              *((_OWORD*)v195 + 3) = v213;
              v217 = *((_OWORD*)v195 + 6);
              *((_OWORD*)v195 + 4) = v214;
              *((_OWORD*)v195 + 5) = v215;
              *((_QWORD*)&v217 + 1) = DWORD2(v216);
              *((_DWORD*)v195 + 28) = *((_DWORD*)v114 + 28);
              *((_OWORD*)v195 + 6) = v217;
              v218 = *(float32x4_t**)(v87 + 8 * v468);
              v476 = v471;
              v219 = game_gmap_1327670(v218, &v476);
              *((_DWORD*)v198 + 29) = v219;
              v220 = v219;
              v221 = *(float32x4_t**)(v87 + 8 * v468);
              v475 = v471;
              v28 = (__int64*)game_gmap_13278a0(v221, v220, &v475);
              *((_DWORD*)v198 + 30) = (_DWORD)v28;
              v222 = *(_QWORD**)(v87 + 8 * v468);
              v224 = (_QWORD*)v222[7];
              v223 = v222[8];
              if ((unsigned __int64)v224 < v223) {
                *v224 = v198;
                v222[7] = v224 + 1;
                if (v135 != nullptr) {
                  goto LABEL_163;
                }
              }
              else {
                v225 = v222[6];
                v226 = (char*)v224 - v225;
                v227 = ((__int64)v224 - v225) >> 3;
                v228 = v227 + 1;
                if ((unsigned __int64)(v227 + 1) >> 61 != 0) {
                LABEL_675:
                  GameRoutine_1338190();
                }
                v229 = v223 - v225;
                if (v229 >> 2 > v228) {
                  v228 = v229 >> 2;
                }
                if ((unsigned __int64)v229 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v230 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v230 = v228;
                }
                if (v230 != 0) {
                  if (v230 >> 61 != 0) {
                    goto LABEL_673;
                  }
                  v231 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v230, 16, 0);
                }
                else {
                  v231 = 0;
                }
                v232 = v231 + 8 * v230;
                v233 = (char*)v224 - v225;
                v234 = (__int64)&v226[v231 + -8 * v227];
                *(_QWORD*)&v226[v231] = v198;
                v235 = (__int64)&v226[v231 + 8];
                memcpy(v234, v225, v233);
                v222[6] = v234;
                v222[7] = v235;
                v222[8] = v232;
                if (v225 != 0) {
                  v236 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v236 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v236);
                }
                v110 = v468;
                v222[7] = v235;
                if (v135 != nullptr) {
                LABEL_163:
                  v111 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v111 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v111);
                }
              }
            } while (v110 != v470);
          }
          v28 = (__int64*)fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
          v237 = v28;
          *v28 = 0;
          v28[1] = 0;
          v28[2] = 0;
          v28[3] = 0;
          v238 = (unsigned __int64)&v465[-v87 - 8];
          v472 = (char*)(v87 + 8);
          v28[4] = 0;
          v28[5] = 0;
          if (v465 != (char*)(v87 + 8)) {
            if ((v238 & 0x8000000000000000LL) == 0) {
              v239 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, &v465[-v87 - 8], 16,
                  0);
              v240 = (char*)(v239 + v238);
              v28 = (__int64*)memcpy(v239, v472, v238);
              goto LABEL_365;
            }
          LABEL_676:
            GameRoutine_8875e0(v28);
          }
          v239 = 0;
          v240 = nullptr;
        LABEL_365:
          *v237 = v239;
          v237[1] = (__int64)v240;
          v237[2] = (__int64)v240;
          if (v470 != 0) {
            v283 = 0;
            do {
              v285 = *(_QWORD*)(v87 + 8 * v283++);
              v286 = *(__int64**)(v285 + 48);
              v287 = *(__int64**)(v285 + 56);
              if (v286 == v287) {
              LABEL_372:
                v288 = 0;
              }
              else {
                while (1) {
                  v289 = *v286++;
                  v288 = v289;
                  if (*(_QWORD*)(v289 + 8) == *(_QWORD*)(v87 + 8 * v283)) {
                    break;
                  }
                  if (v286 == v287) {
                    goto LABEL_372;
                  }
                }
              }
              v291 = (_QWORD*)v237[4];
              v290 = v237[5];
              if ((unsigned __int64)v291 < v290) {
                *v291 = v288;
                v284 = (__int64)(v291 + 1);
              }
              else {
                v292 = v237[3];
                v293 = (char*)v291 - v292;
                v294 = ((__int64)v291 - v292) >> 3;
                v295 = v294 + 1;
                if ((unsigned __int64)(v294 + 1) >> 61 != 0) {
                LABEL_674:
                  GameRoutine_1338870(v28);
                }
                v296 = v290 - v292;
                if (v296 >> 2 > v295) {
                  v295 = v296 >> 2;
                }
                if ((unsigned __int64)v296 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v297 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v297 = v295;
                }
                if (v297 != 0) {
                  if (v297 >> 61 != 0) {
                    goto LABEL_673;
                  }
                  v298 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v297, 16, 0);
                }
                else {
                  v298 = 0;
                }
                v299 = v298 + 8 * v297;
                v300 = (char*)v291 - v292;
                v301 = (__int64)&v293[v298 + -8 * v294];
                *(_QWORD*)&v293[v298] = v288;
                v284 = (__int64)&v293[v298 + 8];
                v28 = (__int64*)memcpy(v301, v292, v300);
                v237[3] = v301;
                v237[4] = v284;
                v237[5] = v299;
                if (v292 != 0) {
                  v302 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v302 = 56;
                  }
                  v28 = (__int64*)nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v302);
                }
              }
              v237[4] = v284;
              v87 = v469;
            } while (v283 != v470);
          }
          v303 = *(_QWORD**)v87;
          v305 = *(__int64***)(*(_QWORD*)v87 + 80LL);
          v304 = *(_QWORD*)(*(_QWORD*)v87 + 88LL);
          if ((unsigned __int64)v305 < v304) {
            *v305 = v237;
            v306 = (__int64)(v305 + 1);
            goto LABEL_404;
          }
          v307 = v303[9];
          v308 = (char*)v305 - v307;
          v309 = ((__int64)v305 - v307) >> 3;
          v310 = v309 + 1;
          if ((unsigned __int64)(v309 + 1) >> 61 == 0) {
            v311 = v304 - v307;
            if (v311 >> 2 > v310) {
              v310 = v311 >> 2;
            }
            if ((unsigned __int64)v311 >= 0x7FFFFFFFFFFFFFF8LL) {
              v312 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v312 = v310;
            }
            if (v312 != 0) {
              if (v312 >> 61 == 0) {
                v313 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v312, 16, 0);
                goto LABEL_400;
              }
            LABEL_673:
              GameRoutine_60a210_alt1(v28);
            }
            v313 = 0;
          LABEL_400:
            v314 = v313 + 8 * v312;
            v315 = (char*)v305 - v307;
            v316 = (__int64)&v308[v313 + -8 * v309];
            *(_QWORD*)&v308[v313] = v237;
            v306 = (__int64)&v308[v313 + 8];
            memcpy(v316, v307, v315);
            v303[9] = v316;
            v303[10] = v306;
            v303[11] = v314;
            if (v307 != 0) {
              v317 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v317 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v317);
            }
          LABEL_404:
            v303[10] = v306;
            if ((char*)v87 != v465) {
              v318 = v465 - 8;
              if (v87 < (unsigned __int64)(v465 - 8)) {
                v319 = v87 + 8;
                do {
                  v320 = *(_QWORD*)(v319 - 8);
                  *(_QWORD*)(v319 - 8) = *(_QWORD*)v318;
                  *(_QWORD*)v318 = v320;
                  v318 -= 8;
                  v321 = v319 >= (unsigned __int64)v318;
                  v319 += 8LL;
                } while (!v321);
              }
            }
            v28 = (__int64*)fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
            v322 = v28;
            *v28 = 0;
            v28[1] = 0;
            v28[2] = 0;
            v28[3] = 0;
            v28[4] = 0;
            v28[5] = 0;
            if (v465 == v472) {
              v323 = 0;
              v324 = nullptr;
            }
            else {
              if ((v238 & 0x8000000000000000LL) != 0) {
                goto LABEL_676;
              }
              v323 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, v238, 16, 0);
              v324 = (char*)(v323 + v238);
              v28 = (__int64*)memcpy(v323, v472, v238);
            }
            *v322 = v323;
            v322[1] = (__int64)v324;
            v322[2] = (__int64)v324;
            if (v470 != 0) {
              v325 = 0;
              do {
                v327 = *(_QWORD*)(v87 + 8 * v325++);
                v328 = *(__int64**)(v327 + 48);
                v329 = *(__int64**)(v327 + 56);
                if (v328 == v329) {
                LABEL_420:
                  v330 = 0;
                }
                else {
                  while (1) {
                    v331 = *v328++;
                    v330 = v331;
                    if (*(_QWORD*)(v331 + 8) == *(_QWORD*)(v87 + 8 * v325)) {
                      break;
                    }
                    if (v328 == v329) {
                      goto LABEL_420;
                    }
                  }
                }
                v333 = (_QWORD*)v322[4];
                v332 = v322[5];
                if ((unsigned __int64)v333 < v332) {
                  *v333 = v330;
                  v326 = (__int64)(v333 + 1);
                }
                else {
                  v334 = v322[3];
                  v335 = (char*)v333 - v334;
                  v336 = ((__int64)v333 - v334) >> 3;
                  v337 = v336 + 1;
                  if ((unsigned __int64)(v336 + 1) >> 61 != 0) {
                    goto LABEL_674;
                  }
                  v338 = v332 - v334;
                  if (v338 >> 2 > v337) {
                    v337 = v338 >> 2;
                  }
                  if ((unsigned __int64)v338 >= 0x7FFFFFFFFFFFFFF8LL) {
                    v339 = 0x1FFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v339 = v337;
                  }
                  if (v339 != 0) {
                    if (v339 >> 61 != 0) {
                      goto LABEL_673;
                    }
                    v340 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v339, 16,
                        0);
                  }
                  else {
                    v340 = 0;
                  }
                  v341 = v340 + 8 * v339;
                  v342 = (char*)v333 - v334;
                  v343 = (__int64)&v335[v340 + -8 * v336];
                  *(_QWORD*)&v335[v340] = v330;
                  v326 = (__int64)&v335[v340 + 8];
                  v28 = (__int64*)memcpy(v343, v334, v342);
                  v322[3] = v343;
                  v322[4] = v326;
                  v322[5] = v341;
                  if (v334 != 0) {
                    v344 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v344 = 56;
                    }
                    v28 = (__int64*)nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v344);
                  }
                }
                v322[4] = v326;
              } while (v325 != v470);
            }
            v345 = *(_QWORD**)v87;
            v347 = *(__int64***)(*(_QWORD*)v87 + 80LL);
            v346 = *(_QWORD*)(*(_QWORD*)v87 + 88LL);
            if ((unsigned __int64)v347 < v346) {
              *v347 = v322;
              v82 = (__int64)(v347 + 1);
              goto LABEL_102;
            }
            v348 = v345[9];
            v349 = (char*)v347 - v348;
            v350 = ((__int64)v347 - v348) >> 3;
            v351 = v350 + 1;
            if ((unsigned __int64)(v350 + 1) >> 61 == 0) {
              v352 = v346 - v348;
              if (v352 >> 2 > v351) {
                v351 = v352 >> 2;
              }
              if ((unsigned __int64)v352 >= 0x7FFFFFFFFFFFFFF8LL) {
                v353 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v353 = v351;
              }
              if (v353 != 0) {
                if (v353 >> 61 != 0) {
                  goto LABEL_673;
                }
                v354 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v353, 16, 0);
              }
              else {
                v354 = 0;
              }
              v355 = v354 + 8 * v353;
              v356 = (char*)v347 - v348;
              v357 = (__int64)&v349[v354 + -8 * v350];
              *(_QWORD*)&v349[v354] = v322;
              v82 = (__int64)&v349[v354 + 8];
              memcpy(v357, v348, v356);
              v345[9] = v357;
              v345[10] = v82;
              v345[11] = v355;
              if (v348 != 0) {
                v358 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v358 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v358);
              }
            LABEL_102:
              v15 = v466;
              v83 = v467;
              v345[10] = v82;
            LABEL_103:
              v84 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v84 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v84);
              goto LABEL_106;
            }
          }
          GameRoutine_13381b0(v28);
        }
      }
    LABEL_156:
      v108 = *v81;
      v109 = v81[1];
      v15 = v466;
      if (*v81 == v109) {
        goto LABEL_157;
      }
      while (2) {
        if ((*(_BYTE*)v108 & 1) != 0) {
          v243 = *(_QWORD*)(v108 + 16);
        }
        else {
          v243 = v108 + 1;
        }
        v244 = game_HashString(v243);
        v245 = v15[2];
        if (v245 == 0 || v15[4] == 0) {
          goto LABEL_242;
        }
        v247 = v245 - 1;
        if ((v245 & (v245 - 1)) != 0) {
          v248 = v244;
          if (v245 <= v244) {
            v248 = v244 % (unsigned int)v245;
          }
        }
        else {
          v248 = ((_DWORD)v245 - 1) & v244;
        }
        v249 = *(__int64***)(v15[1] + 8 * v248);
        if (v249 == nullptr) {
          goto LABEL_242;
        }
        v250 = *v249;
        if (v250 == nullptr) {
          goto LABEL_242;
        }
        if ((v245 & v247) == 0) {
          while (1) {
            v252 = v250[1];
            if (v252 == v244) {
              if (*((_DWORD*)v250 + 4) == v244) {
                goto LABEL_270;
              }
            }
            else if ((v252 & v247) != v248) {
              goto LABEL_242;
            }
            v250 = (__int64*)*v250;
            if (v250 == nullptr) {
              goto LABEL_242;
            }
          }
        }
        while (1) {
          v251 = v250[1];
          if (v251 == v244) {
            break;
          }
          if (v251 >= v245) {
            v251 %= v245;
          }
          if (v251 != v248) {
            goto LABEL_242;
          }
        LABEL_259:
          v250 = (__int64*)*v250;
          if (v250 == nullptr) {
            goto LABEL_242;
          }
        }
        if (*((_DWORD*)v250 + 4) != v244) {
          goto LABEL_259;
        }
      LABEL_270:
        v253 = v250[3];
        if (v253 == 0 || (unsigned __int8)Impl_13261c0(v250[3]) != 13) {
          goto LABEL_242;
        }
        v254 = v15;
        v255 = (char*)v15[6];
        v256 = (char*)v254[7];
        if (v255 != v256) {
          v257 = v256 - v255 - 8;
          if ((~(_BYTE)v257 & 0x18) != 0) {
            v258 = ((unsigned __int8)((unsigned int)v257 >> 3) + 1) & 3;
            while (*(_QWORD*)v255 != v253) {
              v255 += 8;
              if (--v258 == 0) {
                goto LABEL_277;
              }
            }
          }
          else {
          LABEL_277:
            if (v257 >= 0x18) {
              v255 += 16;
              while (1) {
                if (*((_QWORD*)v255 - 2) == v253) {
                  v255 -= 16;
                  goto LABEL_279;
                }
                if (*((_QWORD*)v255 - 1) == v253) {
                  v255 -= 8;
                  goto LABEL_279;
                }
                if (*(_QWORD*)v255 == v253) {
                  goto LABEL_279;
                }
                if (*((_QWORD*)v255 + 1) == v253) {
                  break;
                }
                v264 = v255 + 16;
                v255 += 32;
                if (v264 == v256) {
                  goto LABEL_278;
                }
              }
              v255 += 8;
            }
            else {
            LABEL_278:
              v255 = v256;
            }
          }
        }
      LABEL_279:
        v259 = v256 - (v255 + 8);
        if (v256 != v255 + 8) {
          memmove(v255, v255 + 8, v256 - (v255 + 8));
        }
        v260 = v466[2];
        v466[7] = &v255[v259];
        if (v260 == 0 || v466[4] == 0) {
          goto LABEL_341;
        }
        v261 = *(unsigned int*)(v253 + 96);
        v262 = v260 - 1;
        if ((v260 & (v260 - 1)) != 0) {
          v263 = *(unsigned int*)(v253 + 96);
          if (v260 <= v261) {
            v263 = (unsigned int)v261 % (unsigned int)v260;
          }
        }
        else {
          v263 = ((_DWORD)v260 - 1) & (unsigned int)v261;
        }
        v265 = v466[1];
        v266 = *(__int64***)(v265 + 8 * v263);
        if (v266 == nullptr) {
          goto LABEL_341;
        }
        v267 = *v266;
        if (*v266 == nullptr) {
          goto LABEL_341;
        }
        if ((v260 & v262) == 0) {
          while (1) {
            v269 = v267[1];
            if (v269 == v261) {
              if (*((_DWORD*)v267 + 4) == (_DWORD)v261) {
                goto LABEL_311;
              }
            }
            else if ((v269 & v262) != v263) {
              goto LABEL_341;
            }
            v267 = (__int64*)*v267;
            if (v267 == nullptr) {
              goto LABEL_341;
            }
          }
        }
        while (2) {
          v268 = v267[1];
          if (v268 != v261) {
            if (v268 >= v260) {
              v268 %= v260;
            }
            if (v268 != v263) {
              goto LABEL_341;
            }
          }
          else if (*((_DWORD*)v267 + 4) == (_DWORD)v261) {
            break;
          }
          v267 = (__int64*)*v267;
          if (v267 == nullptr) {
            goto LABEL_341;
          }
          continue;
        }
      LABEL_311:
        if ((v260 & v262) != 0) {
          if (v260 <= v261) {
            v261 %= v260;
          }
        }
        else {
          v261 &= v262;
        }
        v270 = *(__int64**)(v265 + 8 * v261);
        do {
          v271 = v270;
          v270 = (__int64*)*v270;
        } while (v270 != v267);
        if (v271 == v461) {
          goto LABEL_326;
        }
        v272 = v271[1];
        if ((v260 & v262) == 0) {
          if ((v272 & v262) == v261) {
            goto LABEL_332;
          }
        LABEL_326:
          if (*v267 != 0) {
            v273 = *(_QWORD*)(*v267 + 8);
            if ((v260 & v262) != 0) {
              if (v273 >= v260) {
                v273 %= v260;
              }
              if (v273 == v261) {
                goto LABEL_332;
              }
            }
            else if ((v273 & v262) == v261) {
              goto LABEL_332;
            }
          }
          *(_QWORD*)(v265 + 8 * v261) = 0;
          goto LABEL_332;
        }
        if (v272 >= v260) {
          v272 %= v260;
        }
        if (v272 != v261) {
          goto LABEL_326;
        }
      LABEL_332:
        v274 = (__int64*)*v267;
        if (*v267 != 0) {
          v275 = v274[1];
          if ((v260 & v262) != 0) {
            if (v275 >= v260) {
              v275 %= v260;
            }
            if (v275 != v261) {
            LABEL_337:
              *(_QWORD*)(v466[1] + 8 * v275) = v271;
              v274 = (__int64*)*v267;
            }
          }
          else {
            v275 &= v262;
            if (v275 != v261) {
              goto LABEL_337;
            }
          }
        }
        *v271 = (__int64)v274;
        *v267 = 0;
        --v466[4];
        v276 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v276 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v276);
      LABEL_341:
        v278 = (char*)v466[12];
        v277 = (char*)v466[13];
        if (v278 != v277) {
          v279 = v277 - v278 - 8;
          if ((~(_BYTE)v279 & 0x18) != 0) {
            v280 = ((unsigned __int8)((unsigned int)v279 >> 3) + 1) & 3;
            while (*(_QWORD*)v278 != v253) {
              v278 += 8;
              if (--v280 == 0) {
                goto LABEL_346;
              }
            }
          }
          else {
          LABEL_346:
            if (v279 >= 0x18) {
              v278 += 16;
              while (1) {
                if (*((_QWORD*)v278 - 2) == v253) {
                  v278 -= 16;
                  goto LABEL_348;
                }
                if (*((_QWORD*)v278 - 1) == v253) {
                  v278 -= 8;
                  goto LABEL_348;
                }
                if (*(_QWORD*)v278 == v253) {
                  goto LABEL_348;
                }
                if (*((_QWORD*)v278 + 1) == v253) {
                  break;
                }
                v282 = v278 + 16;
                v278 += 32;
                if (v282 == v277) {
                  goto LABEL_347;
                }
              }
              v278 += 8;
            }
            else {
            LABEL_347:
              v278 = (char*)v466[13];
            }
          }
        }
      LABEL_348:
        v281 = v277 - (v278 + 8);
        if (v277 != v278 + 8) {
          memmove(v278, v278 + 8, v277 - (v278 + 8));
        }
        v241 = &v278[v281];
        v15 = v466;
        v466[13] = v241;
        GameRoutine_1325de0_alt1(v253);
        v242 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v242 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v242);
      LABEL_242:
        v108 += 24;
        if (v108 != v109) {
          continue;
        }
        break;
      }
    LABEL_157:
      v83 = v467;
      if (v87 != 0) {
        goto LABEL_103;
      }
    LABEL_106:
      v81 = v83 + 9;
      if (v81 != v464) {
        continue;
      }
      break;
    }
    v81 = v482;
    if (v482 != nullptr) {
    LABEL_452:
      v359 = v483;
      if (v81 == v483) {
        goto LABEL_455;
      }
      do {
        v359 -= 9;
        SpotMgr_13381e0_alt1(v359);
      } while (v359 != v81);
      v483 = v81;
      if (v482 != nullptr) {
      LABEL_455:
        v360 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v360 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v360);
      }
    }
  LABEL_458:
    v361 = v479;
    v18 = v463;
    if (v479 != 0) {
      v362 = v480;
      if (v479 == v480) {
        goto LABEL_9;
      }
      v363 = v480;
      do {
        v364 = *(_BYTE*)(v363 - 64);
        v363 -= 64;
        if ((v364 & 1) != 0 && *(_QWORD*)(v362 - 48) != 0) {
          v365 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v365 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v365);
        }
        v362 = v363;
      } while (v363 != v361);
      v18 = v463;
      v480 = v361;
      if (v479 != 0) {
      LABEL_9:
        v19 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v19 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v19);
      }
    }
  LABEL_12:
    v18 += 24;
    if (v18 != v462) {
      continue;
    }
    break;
  }
LABEL_467:
  v487 = COERCE_AS(float32x4_t, GameData_1a82f20);
  v366 = *(unsigned int***)(*GameData_212ca10[0] + 64);
  v367 = *(unsigned int***)(*GameData_212ca10[0] + 72);
  if (v366 == v367) {
    goto LABEL_551;
  }
  v368 = GameData_212c780;
  while (2) {
    v369 = *v366;
    if (*v366 == nullptr) {
      goto LABEL_495;
    }
    v370 = *(_QWORD**)(*v368 + 8);
    v371 = v370[2];
    if (v371 == 0 || v370[4] == 0) {
      goto LABEL_495;
    }
    v373 = *v369;
    v374 = v371 - 1;
    if ((v371 & (v371 - 1)) != 0) {
      v375 = *v369;
      if (v371 <= v373) {
        v375 = (unsigned int)v373 % (unsigned int)v371;
      }
    }
    else {
      v375 = ((_DWORD)v371 - 1) & (unsigned int)v373;
    }
    v376 = *(__int64***)(v370[1] + 8 * v375);
    if (v376 == nullptr || (v377 = *v376) == nullptr) {
    LABEL_495:
      v380 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 304, 16, 0);
      v381 = *((_QWORD*)v369 + 1);
      v382 = v380;
      if (v381 != 0) {
        v383 = strchr(v381, 95);
        if (v383 != 0) {
          v381 = v383 + 1;
        }
      }
      v384 = strlen(v381);
      if (v384 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0();
      }
      v385 = v384;
      if (v384 >= 0x17) {
        if ((v384 | 7) == 0x17) {
          v387 = 26;
        }
        else {
          v387 = (v384 | 7) + 1;
        }
        v386 = (char*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v387, 16, 0);
        v480 = v385;
        v481 = v386;
        v479 = v387 | 1;
      }
      else {
        v386 = (char*)&v479 + 1;
        LOBYTE(v479) = 2 * v384;
        if (v384 == 0) {
          goto LABEL_507;
        }
      }
      memmove(v386, v381, v385);
    LABEL_507:
      v386[v385] = 0;
      v28 = (__int64*)GameRoutine_1325100(v382, &v479, &v487);
      if ((v479 & 1) != 0 && v481 != nullptr) {
        v388 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v388 = 56;
        }
        v28 = (__int64*)nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v388);
      }
      v15 = v466;
      v479 = v382;
      v390 = (__int64*)v466[16];
      v389 = v466[17];
      if ((unsigned __int64)v390 >= v389) {
        v392 = v466[15];
        v393 = (char*)v390 - v392;
        v394 = ((__int64)v390 - v392) >> 3;
        v395 = v394 + 1;
        if ((unsigned __int64)(v394 + 1) >> 61 != 0) {
          goto LABEL_676;
        }
        v396 = v389 - v392;
        if (v396 >> 2 > v395) {
          v395 = v396 >> 2;
        }
        if ((unsigned __int64)v396 >= 0x7FFFFFFFFFFFFFF8LL) {
          v397 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v397 = v395;
        }
        if (v397 != 0) {
          if (v397 >> 61 != 0) {
            goto LABEL_673;
          }
          v398 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v397, 16, 0);
        }
        else {
          v398 = 0;
        }
        v399 = v398 + 8 * v397;
        v400 = (char*)v390 - v392;
        v401 = (__int64)&v393[v398 + -8 * v394];
        *(_QWORD*)&v393[v398] = v382;
        v391 = (__int64)&v393[v398 + 8];
        memcpy(v401, v392, v400);
        v466[15] = v401;
        v466[16] = v391;
        v15 = v466;
        v466[17] = v399;
        if (v392 != 0) {
          v402 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v402 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v402);
        }
      }
      else {
        *v390 = v382;
        v391 = (__int64)(v390 + 1);
      }
      v403 = *(unsigned int*)(v382 + 96);
      v404 = v15[2];
      v15[16] = v391;
      LANES128(v486).n128_u32[0] = v403;
      if (v404 != 0 && v15[4] != 0) {
        v405 = v404 - 1;
        if ((v404 & (v404 - 1)) != 0) {
          v406 = v403;
          if (v404 <= v403) {
            v406 = (unsigned int)v403 % (unsigned int)v404;
          }
        }
        else {
          v406 = ((_DWORD)v404 - 1) & (unsigned int)v403;
        }
        v407 = *(__int64***)(v15[1] + 8 * v406);
        if (v407 != nullptr) {
          v408 = *v407;
          if (v408 != nullptr) {
            if ((v404 & v405) == 0) {
              while (1) {
                v410 = v408[1];
                if (v410 == v403) {
                  if (*((_DWORD*)v408 + 4) == (_DWORD)v403) {
                    goto LABEL_550;
                  }
                }
                else if ((v410 & v405) != v406) {
                  goto LABEL_549;
                }
                v408 = (__int64*)*v408;
                if (v408 == nullptr) {
                  goto LABEL_549;
                }
              }
            }
            do {
              v409 = v408[1];
              if (v409 == v403) {
                if (*((_DWORD*)v408 + 4) == (_DWORD)v403) {
                  goto LABEL_550;
                }
              }
              else {
                if (v409 >= v404) {
                  v409 %= v404;
                }
                if (v409 != v406) {
                  break;
                }
              }
              v408 = (__int64*)*v408;
            } while (v408 != nullptr);
          }
        }
      }
    LABEL_549:
      SpotMgr_1338320_alt1(v15 + 1, &v486, &v486, &v479);
      goto LABEL_550;
    }
    if ((v371 & v374) == 0) {
      while (1) {
        v379 = v377[1];
        if (v379 == v373) {
          if (*((_DWORD*)v377 + 4) == (_DWORD)v373) {
            goto LABEL_494;
          }
        }
        else if ((v379 & v374) != v375) {
          goto LABEL_495;
        }
        v377 = (__int64*)*v377;
        if (v377 == nullptr) {
          goto LABEL_495;
        }
      }
    }
    while (1) {
      v378 = v377[1];
      if (v378 == v373) {
        break;
      }
      if (v378 >= v371) {
        v378 %= v371;
      }
      if (v378 != v375) {
        goto LABEL_495;
      }
    LABEL_483:
      v377 = (__int64*)*v377;
      if (v377 == nullptr) {
        goto LABEL_495;
      }
    }
    if (*((_DWORD*)v377 + 4) != (_DWORD)v373) {
      goto LABEL_483;
    }
  LABEL_494:
    if (v377[3] == 0) {
      goto LABEL_495;
    }
  LABEL_550:
    if (++v366 != v367) {
      continue;
    }
    break;
  }
LABEL_551:
  v411 = (_QWORD*)v15[6];
  v412 = (_QWORD*)v15[7];
  if (v411 != v412) {
    while (1) {
      v411 = (_QWORD*)v466[6];
      v412 = (_QWORD*)v466[7];
      if (v411 == v412) {
        break;
      }
      v413 = 0;
      do {
        v414 = *v411;
        v415 = *(__int64**)(*v411 + 48LL);
        v416 = *(__int64**)(*v411 + 56LL);
        while (v415 != v416) {
          v417 = *v415;
          if ((unsigned __int8)Impl_13261c0(v414) != 4 &&
              *(_QWORD*)(v414 + 136) != 0) {
            v419 = *(_QWORD*)(v417 + 8);
            v420 = (unsigned __int8)Impl_13261c0(v419) == 4 ||
                   *(_QWORD*)(v419 + 136) == 0;
            if (v420 &&
                (unsigned __int8)Impl_13261c0(*(_QWORD*)(v417 + 8)) != 4) {
              v421 = *(_QWORD*)(v417 + 8);
              v413 = 1;
              if ((unsigned __int8)Impl_13261c0(v414) == 4) {
                v422 = 0;
              }
              else {
                v422 = *(_QWORD*)(v414 + 136);
              }
              *(_QWORD*)(v421 + 136) = v422;
            }
          }
          ++v415;
        }
        ++v411;
      } while (v411 != v412);
      if ((v413 & 1) == 0) {
        v411 = (_QWORD*)v466[6];
        v412 = (_QWORD*)v466[7];
        break;
      }
    }
  }
  if (v411 != v412) {
    while (1) {
      v411 = (_QWORD*)v466[6];
      v412 = (_QWORD*)v466[7];
      if (v411 == v412) {
        break;
      }
      v423 = 0;
      do {
        v424 = *v411;
        v426 = *(_QWORD*)(*v411 + 48LL);
        v425 = *(_QWORD*)(*v411 + 56LL);
        if (v426 != v425) {
          v427 = *(_QWORD*)(v424 + 128);
          if (v427 != 0) {
            v428 = v426 + 8;
          LABEL_584:
            v429 = *(_QWORD*)(*(_QWORD*)(v428 - 8) + 8LL);
            if (*(_QWORD*)(v429 + 128) == 0) {
              v423 = 1;
              *(_QWORD*)(v429 + 128) = v427;
            }
            while (v428 != v425) {
              v427 = *(_QWORD*)(v424 + 128);
              v428 += 8;
              if (v427 != 0) {
                goto LABEL_584;
              }
            }
          }
        }
        ++v411;
      } while (v411 != v412);
      if ((v423 & 1) == 0) {
        v411 = (_QWORD*)v466[6];
        v412 = (_QWORD*)v466[7];
        break;
      }
    }
  }
  if (v411 != v412) {
    v430 = GameData_212ca80[0];
    v431 = GameData_212c978[0];
    do {
      v432 = *v411;
      v433 = (unsigned __int8)Impl_13261c0(*v411) == 4 ||
             *(_QWORD*)(v432 + 136) == 0;
      if (!v433 || (unsigned __int8)Impl_13261c0(v432) == 4) {
        goto LABEL_625;
      }
      v434 = game_HashString(&GameData_1ab9636);
      if (v434 == 0) {
        goto LABEL_623;
      }
      v435 = *(_QWORD*)(*v430 + 96);
      if (v435 == 0 || *(_QWORD*)(*v430 + 112) == 0) {
        goto LABEL_623;
      }
      v437 = v435 - 1;
      if ((v435 & (v435 - 1)) != 0) {
        v438 = v434;
        if (v434 >= v435) {
          v438 = v434 % v435;
        }
      }
      else {
        v438 = v437 & v434;
      }
      v439 = *(_QWORD**)(*(_QWORD*)(*v430 + 88) + 8 * v438);
      if (v439 == nullptr || (v440 = (_QWORD*)*v439) == nullptr) {
      LABEL_623:
        v442 = 0;
        goto LABEL_624;
      }
      if ((v435 & v437) == 0) {
        while (1) {
          v443 = v440[1];
          if (v443 == v434) {
            if (v440[2] == v434) {
              goto LABEL_656;
            }
          }
          else if ((v443 & v437) != v438) {
            goto LABEL_623;
          }
          v440 = (_QWORD*)*v440;
          v442 = 0;
          if (v440 == nullptr) {
            goto LABEL_624;
          }
        }
      }
      while (1) {
        v441 = v440[1];
        if (v441 == v434) {
          break;
        }
        if (v441 >= v435) {
          v441 %= v435;
        }
        if (v441 != v438) {
          goto LABEL_623;
        }
      LABEL_613:
        v440 = (_QWORD*)*v440;
        if (v440 == nullptr) {
          goto LABEL_623;
        }
      }
      if (v440[2] != v434) {
        goto LABEL_613;
      }
    LABEL_656:
      v442 = v440[3];
    LABEL_624:
      *(_QWORD*)(v432 + 136) = v442;
    LABEL_625:
      if (*(_QWORD*)(v432 + 128) != 0) {
        if (*(_QWORD*)(v432 + 120) != 0) {
          goto LABEL_654;
        }
        goto LABEL_592;
      }
      v444 = game_HashString(&GameData_1a86d1f);
      if (v444 == 0) {
        goto LABEL_652;
      }
      v445 = *(_QWORD*)(*v431 + 96);
      if (v445 == 0 || *(_QWORD*)(*v431 + 112) == 0) {
        goto LABEL_652;
      }
      v447 = v445 - 1;
      if ((v445 & (v445 - 1)) != 0) {
        v448 = v444;
        if (v444 >= v445) {
          v448 = v444 % v445;
        }
      }
      else {
        v448 = v447 & v444;
      }
      v449 = *(_QWORD**)(*(_QWORD*)(*v431 + 88) + 8 * v448);
      if (v449 == nullptr || (v450 = (_QWORD*)*v449) == nullptr) {
      LABEL_652:
        v452 = 0;
        goto LABEL_653;
      }
      if ((v445 & v447) == 0) {
        while (1) {
          v453 = v450[1];
          if (v453 == v444) {
            if (v450[2] == v444) {
              goto LABEL_655;
            }
          }
          else if ((v453 & v447) != v448) {
            goto LABEL_652;
          }
          v450 = (_QWORD*)*v450;
          v452 = 0;
          if (v450 == nullptr) {
            goto LABEL_653;
          }
        }
      }
      while (2) {
        v451 = v450[1];
        if (v451 != v444) {
          if (v451 >= v445) {
            v451 %= v445;
          }
          if (v451 != v448) {
            goto LABEL_652;
          }
        }
        else if (v450[2] == v444) {
          break;
        }
        v450 = (_QWORD*)*v450;
        if (v450 == nullptr) {
          goto LABEL_652;
        }
        continue;
      }
    LABEL_655:
      v452 = v450[3];
    LABEL_653:
      *(_QWORD*)(v432 + 128) = v452;
      if (*(_QWORD*)(v432 + 120) != 0) {
      LABEL_654:
        game_gmap_1329500((__int64)&v479, (char*)v432, 1, 1);
      }
    LABEL_592:
      ++v411;
    } while (v411 != v412);
  }
  v454 = v473;
  v455 = v466[18];
  *((_BYTE*)v466 + 208) = 0;
  v466[25] = 0;
  v466[19] = v455;
  v466[22] = v466[21];
  if (v454 != nullptr) {
    v456 = v474;
    if (v454 == v474) {
      goto LABEL_668;
    }
    v457 = v474;
    do {
      v458 = *(v457 - 24);
      v457 -= 24;
      if ((v458 & 1) != 0 && *((_QWORD*)v456 - 1) != 0) {
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
          v459 = 128;
        }
        else {
          v459 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v459);
      }
      v456 = v457;
    } while (v457 != v454);
    v474 = v454;
    if (v473 != nullptr) {
    LABEL_668:
      v460 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v460 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v460);
    }
  }
}

__int64 SpotMgr_Unknown3(__int64 a1)
{
  __int64 result;

  SpotMgr_132fca0(*(_QWORD*)(a1 + 8));
  result = *(_QWORD*)(a1 + 8);
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

__int64 SpotMgr_132fca0(__int64 result)
{
  __int64* v1;
  __int64* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD** v10;
  _QWORD** v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;

  v1 = *(__int64**)(result + 48);
  v2 = *(__int64**)(result + 56);
  v3 = (_QWORD*)result;
  if (v1 != v2) {
    v4 = fw_memory_g_heap_manager_ptr;
    do {
      v6 = *v1;
      v7 = *(_QWORD**)(*v1 + 48);
      v8 = *(_QWORD**)(*v1 + 56);
      while (v7 != v8) {
        if (*v7 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v9 = 128;
          }
          else {
            v9 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v9);
        }
        ++v7;
      }
      v10 = *(_QWORD***)(v6 + 72);
      v11 = *(_QWORD***)(v6 + 80);
      while (v10 != v11) {
        v13 = *v10;
        if (*v10 != nullptr) {
          v14 = v13[3];
          if (v14 != 0) {
            v15 = *(_QWORD*)v4;
            v13[4] = v14;
            if (*(_QWORD*)(v15 + 200) != 0) {
              v16 = 128;
            }
            else {
              v16 = 56;
            }
            nn_mem_StandardAllocator_Free(v15 + v16);
          }
          if (*v13 != 0) {
            v17 = *(_QWORD*)v4;
            v13[1] = *v13;
            if (*(_QWORD*)(v17 + 200) != 0) {
              v18 = 128;
            }
            else {
              v18 = 56;
            }
            nn_mem_StandardAllocator_Free(v17 + v18);
          }
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v12 = 128;
          }
          else {
            v12 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v12);
        }
        ++v10;
      }
      GameRoutine_1325de0(v6);
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
        v5 = 128;
      }
      else {
        v5 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v5);
      ++v1;
    } while (v1 != v2);
  }
  v19 = (__int64*)v3[15];
  v20 = (__int64*)v3[16];
  if (v19 != v20) {
    v21 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v19 != 0) {
        GameRoutine_1325de0(*v19);
        if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) != 0) {
          v22 = 128;
        }
        else {
          v22 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v21 + v22);
      }
      ++v19;
    } while (v19 != v20);
  }
  v3[7] = v3[6];
  if (v3[4] != 0) {
    v23 = (_QWORD*)v3[3];
    if (v23 != nullptr) {
      v24 = fw_memory_g_heap_manager_ptr;
      do {
        v25 = (_QWORD*)*v23;
        if (*(_QWORD*)(*(_QWORD*)v24 + 200LL) != 0) {
          v26 = 128;
        }
        else {
          v26 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v24 + v26);
        v23 = v25;
      } while (v25 != nullptr);
    }
    v27 = v3[2];
    v3[3] = 0;
    if (v27 != 0) {
      v28 = v27 & 7;
      if (v27 >= 8) {
        v30 = v27 & 0xFFFFFFFFFFFFFFF8LL;
        v29 = 0;
        do {
          *(_QWORD*)(v3[1] + 8 * v29) = 0;
          *(_QWORD*)(v3[1] + 8 * v29 + 8) = 0;
          *(_QWORD*)(v3[1] + 8 * v29 + 16) = 0;
          *(_QWORD*)(v3[1] + 8 * v29 + 24) = 0;
          *(_QWORD*)(v3[1] + 8 * v29 + 32) = 0;
          *(_QWORD*)(v3[1] + 8 * v29 + 40) = 0;
          *(_QWORD*)(v3[1] + 8 * v29 + 48) = 0;
          v31 = v3[1] + 8 * v29;
          v29 += 8;
          *(_QWORD*)(v31 + 56) = 0;
        } while (v30 != v29);
      }
      else {
        v29 = 0;
      }
      if (v28 != 0) {
        v32 = 8 * v29;
        do {
          --v28;
          *(_QWORD*)(v3[1] + v32) = 0;
          v32 += 8;
        } while (v28 != 0);
      }
    }
    v3[4] = 0;
  }
  v3[10] = v3[9];
  v3[13] = v3[12];
  v3[19] = v3[18];
  v3[22] = v3[21];
  v3[16] = v3[15];
  return result;
}

__int64 SpotMgr_132ffa0(unsigned int* a1)
{
  _QWORD* v1;
  unsigned __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64** v7;
  __int64* v8;
  unsigned __int64 v9;
  __int64 v10;

  v1 = *(_QWORD**)(GameData_21c9700 + 8);
  v2 = v1[2];
  if (v2 == 0 || v1[4] == 0) {
    return 0;
  }
  v4 = *a1;
  v5 = v2 - 1;
  if ((v2 & (v2 - 1)) != 0) {
    v6 = *a1;
    if (v2 <= v4) {
      v6 = (unsigned int)v4 % (unsigned int)v2;
    }
  }
  else {
    v6 = ((_DWORD)v2 - 1) & (unsigned int)v4;
  }
  v7 = *(__int64***)(v1[1] + 8 * v6);
  if (v7 == nullptr) {
    return 0;
  }
  v8 = *v7;
  if (v8 == nullptr) {
    return 0;
  }
  if ((v2 & v5) == 0) {
    while (1) {
      v10 = v8[1];
      if (v10 == v4) {
        if (*((_DWORD*)v8 + 4) == (_DWORD)v4) {
          return v8[3];
        }
      }
      else if ((v10 & v5) != v6) {
        return 0;
      }
      v8 = (__int64*)*v8;
      if (v8 == nullptr) {
        return 0;
      }
    }
  }
  while (1) {
    v9 = v8[1];
    if (v9 == v4) {
      break;
    }
    if (v9 >= v2) {
      v9 %= v2;
    }
    if (v9 != v6) {
      return 0;
    }
  LABEL_14:
    v8 = (__int64*)*v8;
    if (v8 == nullptr) {
      return 0;
    }
  }
  if (*((_DWORD*)v8 + 4) != (_DWORD)v4) {
    goto LABEL_14;
  }
  return v8[3];
}

__int64 SpotMgr_13301a0(__int64 a1)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  char* v4;
  __int64 v5;
  unsigned __int64 v6;
  char* v7;
  unsigned __int64 v8;
  int v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  char v14;
  __int64 v15;
  char* v16;
  unsigned int v17;
  _QWORD* v18;
  unsigned __int64 v19;
  unsigned __int64 v21;
  __int64 v22;
  __int64** v23;
  __int64* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 result;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  char* v32;
  __int64 v33;
  unsigned __int64 v34;
  char* v35;

  v2 = strlen(a1);
  if (v2 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_69;
  }
  v3 = v2;
  if (v2 >= 0x17) {
    if ((v2 | 7) == 0x17) {
      v5 = 26;
    }
    else {
      v5 = (v2 | 7) + 1;
    }
    v4 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v5, 16,
                                               0);
    v34 = v3;
    v35 = v4;
    v33 = v5 | 1;
  }
  else {
    LOBYTE(v33) = 2 * v2;
    v4 = (char*)&v33 + 1;
    if (v2 == 0) {
      goto LABEL_10;
    }
  }
  v2 = memcpy(v4, a1, v3);

LABEL_10:
  v4[v3] = 0;
  v6 = (unsigned __int64)(unsigned __int8)v33 >> 1;
  if ((v33 & 1) != 0) {
    v7 = v35;
  }
  else {
    v7 = (char*)&v33 + 1;
  }
  if ((v33 & 1) != 0) {
    v6 = v34;
  }
  v8 = v6;
  do {
    if (v8 == 0) {
      v10 = 0;
      goto LABEL_21;
    }
    v9 = (unsigned __int8)v7[--v8];
  } while (v9 != 95);
  v10 = v8 + 1;
  if (v8 + 1 > v6) {
    GameRoutine_60a230(v2);
  }

LABEL_21:
  v11 = v6 - v10;
  if (v6 - v10 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_69:
    GameRoutine_60a1d0();
  }
  if (v11 >= 0x17) {
    if ((v11 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v11 | 7) + 1;
    }
    v12 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v13,
                                                16, 0);
    v31 = v11;
    v32 = v12;
    v30 = v13 | 1;
  }
  else {
    LOBYTE(v30) = 2 * v11;
    v12 = (char*)&v30 + 1;
    if (v6 == v10) {
      goto LABEL_30;
    }
  }
  memmove(v12, &v7[v10], v11);

LABEL_30:
  v14 = v33;
  v12[v11] = 0;
  if ((v14 & 1) != 0 && v35 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v15);
  }
  v33 = v30;
  v34 = v31;
  if ((v30 & 1) != 0) {
    v16 = v32;
  }
  else {
    v16 = (char*)&v33 + 1;
  }
  v35 = v32;
  v17 = game_HashString(v16);
  v18 = *(_QWORD**)(GameData_21c9700 + 8);
  v19 = v18[2];
  if (v19 != 0 && v18[4] != 0) {
    v21 = v19 - 1;
    if ((v19 & (v19 - 1)) != 0) {
      v22 = v17;
      if (v19 <= v17) {
        v22 = v17 % (unsigned int)v19;
      }
    }
    else {
      v22 = ((_DWORD)v19 - 1) & v17;
    }
    v23 = *(__int64***)(v18[1] + 8 * v22);
    if (v23 != nullptr) {
      v24 = *v23;
      if (v24 != nullptr) {
        if ((v19 & v21) == 0) {
          while (1) {
            v26 = v24[1];
            if (v26 == v17) {
              if (*((_DWORD*)v24 + 4) == v17) {
                goto LABEL_67;
              }
            }
            else if ((v26 & v21) != v22) {
              goto LABEL_61;
            }
            v24 = (__int64*)*v24;
            if (v24 == nullptr) {
              goto LABEL_61;
            }
          }
        }
        do {
          v25 = v24[1];
          if (v25 == v17) {
            if (*((_DWORD*)v24 + 4) == v17) {
            LABEL_67:
              result = v24[3];
              if ((v33 & 1) == 0) {
                return result;
              }
              goto LABEL_62;
            }
          }
          else {
            if (v25 >= v19) {
              v25 %= v19;
            }
            if (v25 != v22) {
              break;
            }
          }
          v24 = (__int64*)*v24;
        } while (v24 != nullptr);
      }
    }
  }

LABEL_61:
  result = 0;
  if ((v33 & 1) == 0) {
    return result;
  }

LABEL_62:
  if (v35 != nullptr) {
    v28 = result;
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v29);
    return v28;
  }
  return result;
}

__int64 SpotMgr_13304c0(unsigned int* a1)
{
  _QWORD* v1;
  unsigned __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64** v7;
  __int64* v8;
  unsigned __int64 v9;
  __int64 v10;

  v1 = *(_QWORD**)(GameData_21c9700 + 8);
  v2 = v1[2];
  if (v2 == 0 || v1[4] == 0) {
    return 0;
  }
  v4 = *a1;
  v5 = v2 - 1;
  if ((v2 & (v2 - 1)) != 0) {
    v6 = *a1;
    if (v2 <= v4) {
      v6 = (unsigned int)v4 % (unsigned int)v2;
    }
  }
  else {
    v6 = ((_DWORD)v2 - 1) & (unsigned int)v4;
  }
  v7 = *(__int64***)(v1[1] + 8 * v6);
  if (v7 == nullptr) {
    return 0;
  }
  v8 = *v7;
  if (v8 == nullptr) {
    return 0;
  }
  if ((v2 & v5) == 0) {
    while (1) {
      v10 = v8[1];
      if (v10 == v4) {
        if (*((_DWORD*)v8 + 4) == (_DWORD)v4) {
          return v8[3];
        }
      }
      else if ((v10 & v5) != v6) {
        return 0;
      }
      v8 = (__int64*)*v8;
      if (v8 == nullptr) {
        return 0;
      }
    }
  }
  while (1) {
    v9 = v8[1];
    if (v9 == v4) {
      break;
    }
    if (v9 >= v2) {
      v9 %= v2;
    }
    if (v9 != v6) {
      return 0;
    }
  LABEL_14:
    v8 = (__int64*)*v8;
    if (v8 == nullptr) {
      return 0;
    }
  }
  if (*((_DWORD*)v8 + 4) != (_DWORD)v4) {
    goto LABEL_14;
  }
  return v8[3];
}

__attribute__((swiftcall)) void

SpotMgr_13306e0(PSEUDO_X8 x8_, unsigned __int64 result, char a2, char** a3)
{
  char** a4 = (char**)PSEUDO_X8_VALUE(x8_);
  char* v4;
  char** v6;
  char* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  char* v13;
  _QWORD* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  char** v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64* v23;
  __int64 v24;
  __int64* v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v31;
  int v32;
  unsigned __int64** v33;
  unsigned __int64** v34;
  unsigned __int64* v35;
  __int64* v36;
  __int64 v37;
  _QWORD* i;
  unsigned __int64** v39;
  unsigned __int64* v40;
  unsigned __int64* v41;
  unsigned __int64* v42;
  __int64* v43;
  __int64 v44;
  _QWORD* j;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  char* v49;
  char* v50;
  unsigned __int64 v51;
  __int64 v52;
  char* v53;
  char* v54;
  char* v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  char* v59;
  unsigned __int64 v60;
  _QWORD* v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  _QWORD* v65;
  _QWORD* v66;
  unsigned __int64 v67;
  __int64 v68;
  char* v69;
  __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  unsigned __int64 v79;
  unsigned __int64 v80;
  _QWORD* v81;
  _QWORD* v82;
  unsigned __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  char v86;
  char* v87;
  char* v88;
  __int64 v89;
  char* v90;
  signed __int64 v92;
  unsigned __int64 v93;
  __int64 v94;
  __int64 v95;
  char* v96;
  __int64 v97;
  unsigned __int64 v98;
  _QWORD* v99;
  unsigned __int64 v100;
  unsigned __int64 v101;
  _QWORD* v102;
  unsigned __int64 v103;
  __int64 v104;
  _QWORD* v105;
  _QWORD* v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  char* v113;
  char* v114;
  char* v115;
  char* v116;
  _QWORD* v117;
  char** v119;
  char* v120;
  __int64 v121;
  __int64 v122;
  unsigned __int64 v123;
  _QWORD* v124;
  __int64 v125;
  int v126;
  _QWORD* v127;
  _QWORD* v128;

  v113 = nullptr;
  v114 = nullptr;
  v4 = *(char**)(result + 8);
  v6 = (char**)result;
  v7 = nullptr;
  v8 = fw_memory_g_heap_manager_ptr;
  v119 = (char**)result;
  do {
    if (v4 == *v6 + 8) {
      *a4 = v7;
      a4[1] = v114;
      a4[2] = v113;
      {
        result;
        return;
      }
    }
    v10 = *(_QWORD*)v8;
    v127 = *((_QWORD**)v4 - 2);
    v9 = v127;
    v11 = *((_QWORD**)v4 - 1);
    v124 = nullptr;
    v125 = 0;
    v122 = 0;
    v123 = 0;
    v126 = 1065353216;
    v115 = v4 - 8;
    v116 = v7;
    v12 = (_QWORD*)fw_memory_HeapManager_Allocate(v10, 8, 16, 0);
    *v12 = v9;
    v13 = (char*)(v12 + 1);
    v14 = v12;
    v128 = &v127;
    result = SpotMgr_133acc0_alt1(&v122, &v127, &v128);
    v15 = 0;
    *(_QWORD*)(result + 24) = 0;
    v120 = v13;
    v117 = v11;
    do {
      v16 = v14[v15];
      v121 = (__int64)v14;
      v17 = *(__int64**)(v16 + 48);
      v18 = *(__int64**)(v16 + 56);
      if (v17 != v18) {
        v19 = a3;
        do {
          v20 = *v17;
          if ((a2 & 1) != 0) {
            v21 = *(_QWORD*)(v20 + 8);
            if (*(_BYTE*)(v21 + 176) != 3 || (*(_BYTE*)(v21 + 112) & 1) != 0) {
              goto LABEL_9;
            }
          }
          if ((a2 & 2) != 0) {
            v25 = *(__int64**)(v16 + 48);
            v26 = *(__int64**)(v16 + 56);
            if (v25 == v26) {
              goto LABEL_9;
            }
            v27 = *(_QWORD*)(v20 + 8);
            while (1) {
              v28 = *v25++;
              if (*(_QWORD*)(v28 + 8) == v27) {
                break;
              }
              if (v25 == v26) {
                goto LABEL_9;
              }
            }
            if (*(_BYTE*)(v16 + 113) != 1 || *(_BYTE*)(v27 + 113) != 1 ||
                *(_BYTE*)(v16 + 114) == 1 && (*(_BYTE*)(v27 + 114) & 1) != 0) {
              goto LABEL_9;
            }
          }
          result = *(_QWORD*)(v20 + 8);
          if ((a2 & 4) != 0) {
            v22 = *(__int64**)(v16 + 48);
            v23 = *(__int64**)(v16 + 56);
            if (v22 != v23) {
              while (1) {
                v24 = *v22++;
                if (*(_QWORD*)(v24 + 8) == result) {
                  break;
                }
                if (v22 == v23) {
                  goto LABEL_33;
                }
              }
              if (*(_BYTE*)(v16 + 113) == 1 && *(_BYTE*)(result + 113) == 1 &&
                  (*(_BYTE*)(v16 + 114) != 1 || *(_BYTE*)(result + 114) != 1)) {
                goto LABEL_9;
              }
            }
          }
        LABEL_33:
          if (result != *((_QWORD*)v6[1] - 1)) {
            result = Impl_13261c0(result);
            if ((unsigned __int8)result == 4) {
              if ((a2 & 8) != 0) {
                goto LABEL_9;
              }
              v29 = *(_QWORD*)(*v17 + 8);
              result = Impl_13261c0(v29);
              if ((unsigned __int8)result == 4 &&
                  (*(_BYTE*)(v29 + 178) & 2) == 0) {
                if ((a2 & 0x10) != 0) {
                  goto LABEL_9;
                }
                if ((a2 & 0x20) != 0) {
                  result = Impl_1328670(*(_QWORD*)(*v17 + 8));
                  if ((result & 1) == 0) {
                    goto LABEL_9;
                  }
                }
              }
            }
          }
          if ((a2 & 0x40) == 0) {
            goto LABEL_81;
          }
          v31 = *(_QWORD*)(GameData_21c96e8 + 8);
          v32 = *(_DWORD*)(v31 + 56);
          v34 = *(unsigned __int64***)(v31 + 8);
          v33 = *(unsigned __int64***)(v31 + 16);
          if (v32 < 0) {
            if (v34 == v33) {
            LABEL_58:
              if (&GameData_1a0d058 == nullptr) {
                goto LABEL_81;
              }
            LABEL_59:
              result = game_gmap_SpotMgr_GetCurrentSpot_alt1();
              if (v16 != result) {
                goto LABEL_81;
              }
              goto LABEL_60;
            }
            for (i = v34 + 1;; ++i) {
              v35 = (unsigned __int64*)*(i - 1);
              if (v35[12] == 0 && v35[69] == 0) {
                break;
              }
            }
          }
          else {
            if (v34 == v33) {
              goto LABEL_58;
            }
            v35 = *v34;
            if (*((_DWORD*)*v34 + 21) != v32) {
              v36 = (__int64*)(v34 + 1);
              do {
                v37 = *v36++;
                v35 = (unsigned __int64*)v37;
              } while (*(_DWORD*)(v37 + 84) != v32);
            }
          }
          if (v35[1] == 0) {
            goto LABEL_81;
          }
          v39 = v34;
          if (v32 < 0) {
            if (v34 == v33) {
              goto LABEL_59;
            }
            while (1) {
              v40 = *v39;
              if ((*v39)[12] == 0 && v40[69] == 0) {
                break;
              }
              if (++v39 == v33) {
                goto LABEL_59;
              }
            }
          }
          else {
            if (v34 == v33) {
              goto LABEL_59;
            }
            while (1) {
              v41 = *v39++;
              v40 = v41;
              if (*((_DWORD*)v41 + 21) == v32) {
                break;
              }
              if (v39 == v33) {
                goto LABEL_59;
              }
            }
          }
          result = *v40;
          if (v16 != *v40) {
            goto LABEL_81;
          }
        LABEL_60:
          if (v32 < 0) {
            for (j = v34 + 1;; ++j) {
              v42 = (unsigned __int64*)*(j - 1);
              if (v42[12] == 0 && v42[69] == 0) {
                break;
              }
            }
          }
          else {
            v42 = *v34;
            if (*((_DWORD*)*v34 + 21) != v32) {
              v43 = (__int64*)(v34 + 1);
              do {
                v44 = *v43++;
                v42 = (unsigned __int64*)v44;
              } while (*(_DWORD*)(v44 + 84) != v32);
            }
          }
          if (*(_QWORD*)(*v17 + 8) == v42[1]) {
          LABEL_81:
            v46 = *v17;
            if (a2 < 0) {
              v47 = *(_QWORD*)(v46 + 8);
              v48 = *(_QWORD*)(v47 + 120);
              if (v48 != 0 && (*(_WORD*)(v48 + 258) & 4) != 0) {
                v50 = *v6;
                v49 = v6[1];
                if (*v6 != v49) {
                  v51 = v49 - v50 - 8;
                  if ((~(_BYTE)v51 & 0x18) == 0) {
                  LABEL_89:
                    if (v51 < 0x18) {
                      goto LABEL_9;
                    }
                    v50 += 16;
                    while (1) {
                      if (*((_QWORD*)v50 - 2) == v47) {
                        if (v50 - 16 != v49) {
                          goto LABEL_101;
                        }
                        goto LABEL_9;
                      }
                      if (*((_QWORD*)v50 - 1) == v47) {
                        v50 -= 8;
                        goto LABEL_100;
                      }
                      if (*(_QWORD*)v50 == v47) {
                        goto LABEL_100;
                      }
                      if (*((_QWORD*)v50 + 1) == v47) {
                        break;
                      }
                      v53 = v50 + 16;
                      v50 += 32;
                      if (v53 == v49) {
                        goto LABEL_9;
                      }
                    }
                    if (v50 + 8 != v49) {
                      goto LABEL_101;
                    }
                    goto LABEL_9;
                  }
                  v52 = ((unsigned __int8)((unsigned int)v51 >> 3) + 1) & 3;
                  while (*(_QWORD*)v50 != v47) {
                    v50 += 8;
                    if (--v52 == 0) {
                      goto LABEL_89;
                    }
                  }
                }
              LABEL_100:
                if (v50 == v49) {
                  goto LABEL_9;
                }
              }
            }
          LABEL_101:
            v55 = *v19;
            v54 = v19[1];
            if (*v19 == v54) {
            LABEL_117:
              if (v55 != v54) {
                goto LABEL_9;
              }
            }
            else {
              v56 = *(_QWORD*)(v46 + 8);
              v57 = v54 - v55 - 8;
              if ((~(_BYTE)v57 & 0x18) != 0) {
                v58 = ((unsigned __int8)((unsigned int)v57 >> 3) + 1) & 3;
                while (*(_QWORD*)v55 != v56) {
                  v55 += 8;
                  if (--v58 == 0) {
                    goto LABEL_106;
                  }
                }
                goto LABEL_117;
              }
            LABEL_106:
              if (v57 >= 0x18) {
                v55 += 16;
                while (1) {
                  if (*((_QWORD*)v55 - 2) == v56) {
                    if (v55 - 16 != v54) {
                      goto LABEL_9;
                    }
                    goto LABEL_118;
                  }
                  if (*((_QWORD*)v55 - 1) == v56) {
                    v55 -= 8;
                    goto LABEL_117;
                  }
                  if (*(_QWORD*)v55 == v56) {
                    goto LABEL_117;
                  }
                  if (*((_QWORD*)v55 + 1) == v56) {
                    break;
                  }
                  v59 = v55 + 16;
                  v55 += 32;
                  if (v59 == v54) {
                    goto LABEL_118;
                  }
                }
                if (v55 + 8 != v54) {
                  goto LABEL_9;
                }
              }
            }
          LABEL_118:
            v60 = v123;
            if (v123 != 0 && v125 != 0) {
              v62 = *(_QWORD**)(v46 + 8);
              v128 = v62;
              result = std___1___hash_memory(&v128, 8);
              v63 = v60 - 1;
              if ((v60 & (v60 - 1)) != 0) {
                v64 = result;
                if (result >= v60) {
                  v64 = result % v60;
                }
              }
              else {
                v64 = result & v63;
              }
              v65 = *(_QWORD**)(v122 + 8 * v64);
              if (v65 != nullptr) {
                v66 = (_QWORD*)*v65;
                if (v66 != nullptr) {
                  if ((v60 & v63) == 0) {
                    while (1) {
                      v68 = v66[1];
                      if (v68 == result) {
                        if ((_QWORD*)v66[2] == v62) {
                          goto LABEL_141;
                        }
                      }
                      else if ((v68 & v63) != v64) {
                        goto LABEL_142;
                      }
                      v66 = (_QWORD*)*v66;
                      if (v66 == nullptr) {
                        goto LABEL_142;
                      }
                    }
                  }
                  do {
                    v67 = v66[1];
                    if (v67 == result) {
                      if ((_QWORD*)v66[2] == v62) {
                      LABEL_141:
                        v6 = v119;
                        goto LABEL_9;
                      }
                    }
                    else {
                      if (v67 >= v60) {
                        v67 %= v60;
                      }
                      if (v67 != v64) {
                        break;
                      }
                    }
                    v66 = (_QWORD*)*v66;
                  } while (v66 != nullptr);
                }
              }
            }
          LABEL_142:
            if (v13 < v120) {
              *(_QWORD*)v13 = *(_QWORD*)(v46 + 8);
              v13 += 8;
            }
            else {
              v69 = &v13[-v121];
              v70 = (__int64)&v13[-v121] >> 3;
              v71 = v70 + 1;
              if ((unsigned __int64)(v70 + 1) >> 61 != 0) {
              LABEL_267:
                GameRoutine_8875e0(result);
              }
              if ((__int64)&v120[-v121] >> 2 > v71) {
                v71 = (__int64)&v120[-v121] >> 2;
              }
              if ((unsigned __int64)&v120[-v121] >= 0x7FFFFFFFFFFFFFF8LL) {
                v72 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v72 = v71;
              }
              if (v72 != 0) {
                if (v72 >> 61 != 0) {
                LABEL_268:
                  GameRoutine_60a210_alt1(result);
                }
                v73 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v72, 16, 0);
              }
              else {
                v73 = 0;
              }
              v120 = (char*)(v73 + 8 * v72);
              v74 = *(_QWORD*)(v46 + 8);
              v75 = (__int64)&v69[v73 + -8 * v70];
              *(_QWORD*)&v69[v73] = v74;
              v13 = &v69[v73 + 8];
              memcpy(v75, v121, v69);
              if (v121 != 0) {
                v76 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v76 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v76);
              }
              v19 = a3;
              v121 = v75;
            }
            v6 = v119;
            v128 = (_QWORD*)(*v17 + 8);
            result = SpotMgr_133acc0_alt1(&v122, v128, &v128);
            *(_QWORD*)(result + 24) = v16;
          }
        LABEL_9:
          ++v17;
        } while (v17 != v18);
      }
      v77 = v123;
      v14 = (_QWORD*)v121;
      if (v123 != 0 && v125 != 0) {
        v128 = v117;
        result = std___1___hash_memory(&v128, 8);
        v79 = v77 - 1;
        if ((v77 & (v77 - 1)) != 0) {
          v80 = result;
          if (result >= v77) {
            v80 = result % v77;
          }
        }
        else {
          v80 = result & v79;
        }
        v81 = *(_QWORD**)(v122 + 8 * v80);
        if (v81 != nullptr) {
          v82 = (_QWORD*)*v81;
          if (*v81 != 0) {
            if ((v77 & v79) == 0) {
              while (1) {
                v84 = v82[1];
                if (v84 == result) {
                  if ((_QWORD*)v82[2] == v117) {
                    goto LABEL_189;
                  }
                }
                else if ((v84 & v79) != v80) {
                  goto LABEL_185;
                }
                v82 = (_QWORD*)*v82;
                if (v82 == nullptr) {
                  goto LABEL_185;
                }
              }
            }
            do {
              v83 = v82[1];
              if (v83 == result) {
                if ((_QWORD*)v82[2] == v117) {
                LABEL_189:
                  v7 = v116;
                  while (1) {
                    v87 = (char*)(v82 + 2);
                    if (v114 >= v113) {
                      v92 = v114 - v7;
                      v93 = ((v114 - v7) >> 3) + 1;
                      if (v93 >> 61 != 0) {
                        goto LABEL_267;
                      }
                      if ((v113 - v7) >> 2 > v93) {
                        v93 = (v113 - v7) >> 2;
                      }
                      if ((unsigned __int64)(v113 - v7) >=
                          0x7FFFFFFFFFFFFFF8LL) {
                        v93 = 0x1FFFFFFFFFFFFFFFLL;
                      }
                      if (v93 != 0) {
                        if (v93 >> 61 != 0) {
                          goto LABEL_268;
                        }
                        v94 = 8 * v93;
                      }
                      else {
                        v94 = 8;
                      }
                      v95 = fw_memory_g_heap_manager_ptr;
                      v96 = (char*)fw_memory_HeapManager_Allocate(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr, v94, 16, 0);
                      v113 = &v96[v94];
                      *(_QWORD*)v96 = *(_QWORD*)v87;
                      result = memcpy(v96 + 8, v7, v92);
                      v90 = &v96[v92 + 8];
                      if (v7 != nullptr) {
                        if (*(_QWORD*)(*(_QWORD*)v95 + 200LL) != 0) {
                          v97 = 128;
                        }
                        else {
                          v97 = 56;
                        }
                        result =
                            nn_mem_StandardAllocator_Free(*(_QWORD*)v95 + v97);
                        v90 = &v96[v92 + 8];
                        v7 = v96;
                      }
                      else {
                        v7 = v96;
                      }
                    }
                    else if (v7 == v114) {
                      *(_QWORD*)v114 = *(_QWORD*)v87;
                      v90 = v114 + 8;
                    }
                    else {
                      v88 = v114;
                      if ((unsigned __int64)v114 >= 8) {
                        *(_QWORD*)v114 = *((_QWORD*)v114 - 1);
                        v88 = v114 + 8;
                      }
                      if (v114 != v7 + 8) {
                        result = memmove(v7 + 8, v7, v114 - (v7 + 8));
                      }
                      v89 = 8;
                      v90 = v88;
                      if (v87 >= v88 || v87 < v7) {
                        v89 = 0;
                      }
                      *(_QWORD*)v7 = *(_QWORD*)&v87[v89];
                    }
                    v98 = v123;
                    v86 = 1;
                    v114 = v90;
                    if (v123 == 0 || v125 == 0) {
                      v6 = v119;
                      goto LABEL_245;
                    }
                    v99 = (_QWORD*)v82[3];
                    v128 = v99;
                    result = std___1___hash_memory(&v128, 8);
                    v100 = v98 - 1;
                    if ((v98 & (v98 - 1)) != 0) {
                      v101 = result;
                      if (result >= v98) {
                        v101 = result % v98;
                      }
                    }
                    else {
                      v101 = result & v100;
                    }
                    v102 = *(_QWORD**)(v122 + 8 * v101);
                    if (v102 == nullptr || (v82 = (_QWORD*)*v102, *v102 == 0)) {
                    LABEL_244:
                      v6 = v119;
                      goto LABEL_245;
                    }
                    if ((v98 & v100) == 0) {
                      v6 = v119;
                      while (1) {
                        v104 = v82[1];
                        if (v104 == result) {
                          if ((_QWORD*)v82[2] == v99) {
                            goto LABEL_240;
                          }
                        }
                        else if ((v104 & v100) != v101) {
                          goto LABEL_188;
                        }
                        v82 = (_QWORD*)*v82;
                        if (v82 == nullptr) {
                          goto LABEL_188;
                        }
                      }
                    }
                    while (1) {
                      v103 = v82[1];
                      if (v103 == result) {
                        break;
                      }
                      if (v103 >= v98) {
                        v103 %= v98;
                      }
                      if (v103 != v101) {
                      LABEL_243:
                        v86 = 1;
                        goto LABEL_244;
                      }
                    LABEL_229:
                      v82 = (_QWORD*)*v82;
                      if (v82 == nullptr) {
                        goto LABEL_243;
                      }
                    }
                    if ((_QWORD*)v82[2] != v99) {
                      goto LABEL_229;
                    }
                    v6 = v119;
                  LABEL_240:
                    v86 = 1;
                    if (v99 == v127) {
                      goto LABEL_245;
                    }
                  }
                }
              }
              else {
                if (v83 >= v77) {
                  v83 %= v77;
                }
                if (v83 != v80) {
                  break;
                }
              }
              v82 = (_QWORD*)*v82;
            } while (v82 != nullptr);
          }
        }
      }
    LABEL_185:
      v85 = (__int64)&v13[-v121] >> 3;
      if (v85 - 1 == v15) {
        v7 = v116;
        v86 = 0;
        a4[1] = nullptr;
        a4[2] = nullptr;
        *a4 = nullptr;
        goto LABEL_244;
      }
      v6 = v119;
      ++v15;
    } while (v85 > v15);
    v7 = v116;
  LABEL_188:
    v86 = 1;
  LABEL_245:
    v105 = v124;
    v8 = fw_memory_g_heap_manager_ptr;
    if (v124 != nullptr) {
      do {
        v106 = (_QWORD*)*v105;
        if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
          v107 = 128;
        }
        else {
          v107 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v107);
        v105 = v106;
      } while (v106 != nullptr);
    }
    v108 = v122;
    v122 = 0;
    if (v108 != 0) {
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
        v109 = 128;
      }
      else {
        v109 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v109);
    }
    if (v121 != 0) {
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
        v110 = 128;
      }
      else {
        v110 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v110);
    }
    v4 = v115;
  } while ((v86 & 1) != 0);
  if (v7 != nullptr) {
    v111 = 128;
    if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
      v111 = 56;
    }
    {
      nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v111);
      return;
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void SpotMgr_1331320(PSEUDO_X8 x8_, __int64 a1,
                                                __int64 a2, int a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v7;
  char* v8;
  __int64 v9;
  char* v10;
  _QWORD* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _BOOL4 v31;
  _BOOL4 v32;
  char* v33;
  char* v34;
  __int64 v35;
  char* v36;
  unsigned __int64 v37;
  char* v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  char* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64* v46;
  __int64* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  char* v51;
  char* v52;
  __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  char* v58;
  __int64 v59;
  __int64 v60;
  char* v61;
  char* v62;
  __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  unsigned __int64 v73;
  __int64 v74;
  __int64 v75;
  _QWORD* v76;
  _QWORD* v77;
  _QWORD* v78;
  _QWORD* v79;
  int v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  _QWORD* v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v93;
  __int64 v94;
  int v95;
  unsigned __int64 v96;
  __int64 v97;
  unsigned __int64 v98;
  __int64 v99;
  unsigned __int64 v100;
  __int64 v101;
  char* v102;
  _QWORD* v103;
  __int64 v104;
  int v105;
  __int64* v106;
  char* v107;
  __int64* v108;
  __int64 v109;
  __int64 v110;
  void* v111;

  a4[1] = 0;
  a4[2] = 0;
  *a4 = 0;
  v7 = (__int64*)fw_memory_g_heap_manager_ptr;
  v8 = (char*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
  v9 = *v7;
  *(_QWORD*)v8 = a1;
  v10 = v8 + 8;
  v11 = (_QWORD*)fw_memory_HeapManager_Allocate(v9, 8, 16, 0);
  *v11 = a1;
  v12 = fw_memory_HeapManager_Allocate(*v7, 32, 16, 0);
  v13 = v12 + 32;
  v14 = v12;
  v15 = 0;
  *(_QWORD*)v12 = v11;
  *(_QWORD*)(v12 + 8) = v11 + 1;
  *(_QWORD*)(v12 + 16) = v11 + 1;
  *(_DWORD*)(v12 + 24) = a3;
  v100 = v12 + 32;
  v102 = v8 + 8;
  v104 = a1;
  v106 = a4;
  do {
    v17 = v14 + 32 * v15;
    v103 = (_QWORD*)v14;
    v93 = v15;
    v19 = *(_QWORD*)v17;
    v18 = *(_QWORD*)(v17 + 8);
    v20 = v18 - *(_QWORD*)v17;
    if ((v20 & 0x8000000000000000LL) != 0LL) {
    LABEL_154:
      GameRoutine_8875e0(v12);
    }
    v21 = fw_memory_HeapManager_Allocate(*v7, v18 - *(_QWORD*)v17, 16, 0);
    v22 = v21 + v20;
    v99 = v21;
    memcpy(v21, v19, v20);
    v23 = *(_QWORD*)(v22 - 8);
    v24 = *(__int64**)(v23 + 48);
    v108 = *(__int64**)(v23 + 56);
    if (v24 != v108) {
      v105 = *(_DWORD*)(v17 + 24);
      v95 = v105 - 1;
      if (v20 >> 2 <= (v20 >> 3) + 1) {
        v25 = (v20 >> 3) + 1;
      }
      else {
        v25 = v20 >> 2;
      }
      v26 = 8 * v25;
      if (v20 >= 0x7FFFFFFFFFFFFFF8LL) {
        v26 = -8;
      }
      v97 = v26;
      v98 = v20;
      v96 = v20 + 8;
      v109 = *(_QWORD*)(v22 - 8);
      v27 = v106;
      do {
        v29 = *v24;
        v30 = *(_QWORD*)(*v24 + 8);
        if (*(_BYTE*)(v30 + 176) != 3 || (*(_BYTE*)(v30 + 112) & 1) != 0) {
          goto LABEL_18;
        }
        v12 = Impl_13261c0(v23);
        v23 = v109;
        if (v109 == v104) {
          if ((unsigned __int8)v12 == 4) {
            v12 = Impl_13261c0(v109);
            v23 = v109;
            if ((unsigned __int8)v12 == 4 && (*(_BYTE*)(v109 + 178) & 2) == 0 &&
                (game_GameModeData_instance_ == 0 ||
                 *(_DWORD*)(game_GameModeData_instance_ + 60) != 3)) {
              v111 = &GameData_1ab570b;
              v12 = game_HashString(&GameData_1ab570b);
              v110 = v12;
              v31 = game_GameModeData_instance_ == 0 ||
                    (v12 = game_GameVariableTable_Find(
                         *(_QWORD*)(game_GameModeData_instance_ + 48),
                         &v110)) == 0 ||
                    *(_DWORD*)(v12 + 32) == 0;
              v23 = v109;
              if (a2 != 0 && v31) {
                if (*(_QWORD*)(v29 + 8) != a2) {
                  goto LABEL_18;
                }
                goto LABEL_41;
              }
            }
          }
        }
        else if ((unsigned __int8)v12 == 4 &&
                 (game_GameModeData_instance_ == 0 ||
                  *(_DWORD*)(game_GameModeData_instance_ + 60) != 3)) {
          v111 = &GameData_1ab570b;
          v110 = game_HashString(&GameData_1ab570b);
          if (game_GameModeData_instance_ == 0 ||
              (v12 = game_GameVariableTable_Find(
                   *(_QWORD*)(game_GameModeData_instance_ + 48), &v110)) == 0) {
            v23 = v109;
          LABEL_38:
            v12 = Impl_13261c0(v23);
            v23 = v109;
            v32 = (*(_BYTE*)(v109 + 178) & 2) != 0;
            if ((unsigned __int8)v12 != 4) {
              v32 = true;
            }
            if (!v32) {
              goto LABEL_18;
            }
          LABEL_41:
            if (v105 <= 0) {
              goto LABEL_18;
            }
            goto LABEL_49;
          }
          v23 = v109;
          if (*(_DWORD*)(v12 + 32) == 0) {
            goto LABEL_38;
          }
        }
        if (v105 < 1) {
          goto LABEL_18;
        }
      LABEL_49:
        v34 = (char*)*v27;
        v33 = (char*)v27[1];
        v107 = v8;
        v35 = (__int64)&v33[-*v27];
        if (v33 == (char*)*v27) {
          goto LABEL_55;
        }
        v36 = (char*)*v27;
        while (*(_QWORD*)v36 != v29) {
          v36 += 8;
          if (v36 == v33) {
            goto LABEL_55;
          }
        }
        if (v36 == v33) {
        LABEL_55:
          v37 = v27[2];
          if ((unsigned __int64)v33 >= v37) {
            v39 = (v35 >> 3) + 1;
            if (v39 >> 61 != 0) {
              goto LABEL_156;
            }
            if ((__int64)(v37 - (_QWORD)v34) >> 2 > v39) {
              v39 = (__int64)(v37 - (_QWORD)v34) >> 2;
            }
            if (v37 - (unsigned __int64)v34 >= 0x7FFFFFFFFFFFFFF8LL) {
              v40 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v40 = v39;
            }
            if (v40 != 0) {
              if (v40 >> 61 != 0) {
                goto LABEL_155;
              }
              v41 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v40, 16, 0);
            }
            else {
              v41 = 0;
            }
            v37 = v41 + 8 * v40;
            v42 = (char*)(v33 - v34);
            v43 = v41 + v35 - 8 * (v35 >> 3);
            *(_QWORD*)(v41 + v35) = v29;
            v38 = (char*)(v41 + v35 + 8);
            v12 = memcpy(v43, v34, v42);
            *v106 = v43;
            v106[2] = v37;
            if (v34 != nullptr) {
              v44 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v44 = 56;
              }
              v12 = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v44);
            }
            v34 = (char*)v43;
            v27 = v106;
            v23 = v109;
          }
          else {
            *(_QWORD*)v33 = v29;
            v38 = v33 + 8;
          }
          v45 = *(_QWORD*)(v29 + 8);
          v27[1] = (__int64)v38;
          v46 = *(__int64**)(v45 + 48);
          v47 = *(__int64**)(v45 + 56);
          if (v46 == v47) {
            v48 = 0;
            if ((unsigned __int64)v38 < v37) {
              goto LABEL_77;
            }
          }
          else {
            while (1) {
              v49 = *v46++;
              v48 = v49;
              if (*(_QWORD*)(v49 + 8) == v23) {
                break;
              }
              if (v46 == v47) {
                v48 = 0;
                break;
              }
            }
            if ((unsigned __int64)v38 < v37) {
            LABEL_77:
              *(_QWORD*)v38 = v48;
              v50 = (__int64)(v38 + 8);
              v7 = &fw_memory_g_heap_manager;
            LABEL_94:
              v27[1] = v50;
              goto LABEL_95;
            }
          }
          v51 = v10;
          v52 = (char*)(v38 - v34);
          v53 = (v38 - v34) >> 3;
          v54 = v53 + 1;
          if ((unsigned __int64)(v53 + 1) >> 61 != 0) {
          LABEL_156:
            GameRoutine_1338870(v12);
          }
          if ((__int64)(v37 - (_QWORD)v34) >> 2 > v54) {
            v54 = (__int64)(v37 - (_QWORD)v34) >> 2;
          }
          if (v37 - (unsigned __int64)v34 >= 0x7FFFFFFFFFFFFFF8LL) {
            v55 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v55 = v54;
          }
          if (v55 != 0) {
            if (v55 >> 61 != 0) {
              goto LABEL_155;
            }
            v56 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v55, 16, 0);
          }
          else {
            v56 = 0;
          }
          v57 = v56 + 8 * v55;
          v58 = (char*)(v38 - v34);
          v59 = (__int64)&v52[v56 + -8 * v53];
          *(_QWORD*)&v52[v56] = v48;
          v50 = (__int64)&v52[v56 + 8];
          v12 = memcpy(v59, v34, v58);
          *v106 = v59;
          v106[2] = v57;
          v27 = v106;
          v7 = (__int64*)fw_memory_g_heap_manager_ptr;
          if (v34 != nullptr) {
            v60 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v60 = 56;
            }
            v12 = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v60);
          }
          v23 = v109;
          v10 = v51;
          goto LABEL_94;
        }
      LABEL_95:
        v8 = v107;
        v61 = v107;
        if (v107 != v10) {
          v61 = v107;
          while (*(_QWORD*)v61 != *(_QWORD*)(v29 + 8)) {
            v61 += 8;
            if (v61 == v10) {
              goto LABEL_101;
            }
          }
        }
        if (v61 == v10) {
        LABEL_101:
          if (v10 >= v102) {
            v62 = (char*)(v10 - v107);
            v63 = (v10 - v107) >> 3;
            v64 = v63 + 1;
            if ((unsigned __int64)(v63 + 1) >> 61 != 0) {
              goto LABEL_154;
            }
            if ((v102 - v107) >> 2 > v64) {
              v64 = (v102 - v107) >> 2;
            }
            if ((unsigned __int64)(v102 - v107) >= 0x7FFFFFFFFFFFFFF8LL) {
              v65 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v65 = v64;
            }
            if (v65 != 0) {
              if (v65 >> 61 != 0) {
                goto LABEL_155;
              }
              v66 = fw_memory_HeapManager_Allocate(*v7, 8 * v65, 16, 0);
            }
            else {
              v66 = 0;
            }
            v102 = (char*)(v66 + 8 * v65);
            v67 = (__int64)&v62[v66 + -8 * v63];
            *(_QWORD*)&v62[v66] = *(_QWORD*)(v29 + 8);
            v10 = &v62[v66 + 8];
            memcpy(v67, v107, v62);
            if (v107 != nullptr) {
              v68 = 128;
              if (*(_QWORD*)(*v7 + 200) == 0) {
                v68 = 56;
              }
              nn_mem_StandardAllocator_Free(*v7 + v68);
            }
            v8 = (char*)v67;
          }
          else {
            *(_QWORD*)v10 = *(_QWORD*)(v29 + 8);
            v10 += 8;
          }
          v69 = fw_memory_HeapManager_Allocate(*v7, v97, 16, 0);
          *(_QWORD*)(v69 + v98) = *(_QWORD*)(v29 + 8);
          v12 = memcpy(v69, v99, v98);
          if ((v96 & 0x8000000000000000LL) != 0) {
            goto LABEL_154;
          }
          v70 = fw_memory_HeapManager_Allocate(*v7, v96, 16, 0);
          v71 = v70 + v96;
          v12 = memcpy(v70, v69, v96);
          if (v13 < v100) {
            *(_QWORD*)v13 = v70;
            *(_QWORD*)(v13 + 8) = v71;
            *(_QWORD*)(v13 + 16) = v71;
            *(_DWORD*)(v13 + 24) = v95;
          }
          else {
            v72 = (__int64)(v13 - (_QWORD)v103) >> 5;
            v73 = v72 + 1;
            if ((unsigned __int64)(v72 + 1) >> 59 != 0) {
              GameRoutine_1338850(v12);
            }
            if ((__int64)(v100 - (_QWORD)v103) >> 4 > v73) {
              v73 = (__int64)(v100 - (_QWORD)v103) >> 4;
            }
            if (v100 - (unsigned __int64)v103 >= 0x7FFFFFFFFFFFFFE0LL) {
              v73 = 0x7FFFFFFFFFFFFFFLL;
            }
            if (v73 >> 59 != 0) {
            LABEL_155:
              GameRoutine_60a210_alt1(v12);
            }
            v101 = 32 * v73;
            v74 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 32 * v73, 16, 0);
            v75 = v74 + v13 - (_QWORD)v103;
            v94 = v74;
            *(_QWORD*)v75 = v70;
            *(_QWORD*)(v75 + 8) = v71;
            *(_QWORD*)(v75 + 16) = v71;
            v76 = (_QWORD*)(v75 - 32 * v72);
            *(_DWORD*)(v75 + 24) = v95;
            v7 = (__int64*)fw_memory_g_heap_manager_ptr;
            if (v103 != (_QWORD*)v13) {
              v77 = v103;
              v78 = v76;
              v79 = v103;
              do {
                *v78 = *v79;
                v78[1] = v79[1];
                v78[2] = v79[2];
                v79[1] = 0;
                v79[2] = 0;
                *v79 = 0;
                v80 = *((_DWORD*)v79 + 6);
                v79 += 4;
                *((_DWORD*)v78 + 6) = v80;
                v78 += 4;
              } while (v79 != (_QWORD*)v13);
              do {
                if (*v77 != 0) {
                  v81 = *v7;
                  v77[1] = *v77;
                  v82 = 128;
                  if (*(_QWORD*)(v81 + 200) == 0) {
                    v82 = 56;
                  }
                  nn_mem_StandardAllocator_Free(v81 + v82);
                }
                v77 += 4;
              } while (v77 != (_QWORD*)v13);
            }
            v100 = v94 + v101;
            if (*(_QWORD*)(*v7 + 200) != 0) {
              v83 = 128;
            }
            else {
              v83 = 56;
            }
            nn_mem_StandardAllocator_Free(*v7 + v83);
            v13 = v75;
            v103 = v76;
          }
          v13 += 32LL;
          if (*(_QWORD*)(*v7 + 200) != 0) {
            v28 = 128;
          }
          else {
            v28 = 56;
          }
          nn_mem_StandardAllocator_Free(*v7 + v28);
          v27 = v106;
          v23 = v109;
        }
      LABEL_18:
        ++v24;
      } while (v24 != v108);
    }
    v16 = 128;
    if (*(_QWORD*)(*v7 + 200) == 0) {
      v16 = 56;
    }
    v12 = nn_mem_StandardAllocator_Free(*v7 + v16);
    v14 = (__int64)v103;
    v15 = v93 + 1;
  } while (v93 + 1 < (unsigned __int64)((__int64)(v13 - (_QWORD)v103) >> 5));
  if (v8 != nullptr) {
    v84 = 128;
    if (*(_QWORD*)(*v7 + 200) == 0) {
      v84 = 56;
    }
    nn_mem_StandardAllocator_Free(*v7 + v84);
    v14 = (__int64)v103;
  }
  if (v14 != v13) {
    v85 = (_QWORD*)v13;
    do {
      v87 = *(v85 - 4);
      v85 -= 4;
      v86 = v87;
      if (v87 != 0) {
        v88 = *v7;
        *(_QWORD*)(v13 - 24) = v86;
        if (*(_QWORD*)(v88 + 200) != 0) {
          v89 = 128;
        }
        else {
          v89 = 56;
        }
        nn_mem_StandardAllocator_Free(v88 + v89);
      }
      v13 = (unsigned __int64)v85;
    } while (v85 != v103);
  }
  v90 = 128;
  if (*(_QWORD*)(*v7 + 200) == 0) {
    v90 = 56;
  }
  {
    nn_mem_StandardAllocator_Free(*v7 + v90);
    return;
  }
}

__attribute__((swiftcall)) void SpotMgr_1331ca0(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v3;
  _QWORD* v4;
  char* v5;
  __int64 v6;
  char* v7;
  _QWORD* v8;
  char* v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  __int64* v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  _QWORD* v39;
  unsigned __int64 v40;
  _QWORD* v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64* v48;
  __int64* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  char* v53;
  __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  char* v59;
  __int64 v60;
  __int64 v61;
  char* v62;
  char* v63;
  char* v64;
  __int64 v65;
  unsigned __int64 v66;
  char* v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  _QWORD* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  __int64* v80;
  __int64 v81;
  __int64* v82;
  _QWORD* v83;
  __int64* v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64* v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v96;
  unsigned __int64 v97;
  __int64 v98;
  unsigned __int64 v99;
  __int64 v100;
  unsigned __int64 v101;
  char* v102;
  __int64 v103;
  __int64* v104;
  char* v105;
  __int64 v106;
  __int64* v107;
  __int64 v108;
  __int64* v109;
  __int64 v110;
  void* v111;

  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  v3 = a2;
  v4 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v5 = (char*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
  v6 = *v4;
  *(_QWORD*)v5 = a1;
  v7 = v5 + 8;
  v8 = (_QWORD*)fw_memory_HeapManager_Allocate(v6, 8, 16, 0);
  *v8 = a1;
  v103 = a1;
  v9 = v5;
  v10 = fw_memory_HeapManager_Allocate(*v4, 24, 16, 0);
  v11 = (__int64*)(v10 + 24);
  v12 = (__int64*)v10;
  v13 = 0;
  *(_QWORD*)v10 = v8;
  *(_QWORD*)(v10 + 8) = v8 + 1;
  *(_QWORD*)(v10 + 16) = v8 + 1;
  v101 = v10 + 24;
  v102 = v5 + 8;
  v107 = v3;
  do {
    v104 = v12;
    v96 = v13;
    v15 = &v12[3 * v13];
    v17 = *v15;
    v16 = v15[1];
    v18 = v16 - v17;
    if (v16 - v17 < 0) {
    LABEL_155:
      GameRoutine_8875e0(v10);
    }
    v19 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v16 - v17, 16, 0);
    v20 = v19 + v18;
    v100 = v19;
    memcpy(v19, v17, v18);
    v21 = *(_QWORD*)(v20 - 8);
    v22 = *(__int64**)(v21 + 48);
    v109 = *(__int64**)(v21 + 56);
    if (v22 != v109) {
      if (v18 >> 2 <= (v18 >> 3) + 1) {
        v23 = (v18 >> 3) + 1;
      }
      else {
        v23 = v18 >> 2;
      }
      v24 = 8 * v23;
      if (v18 >= 0x7FFFFFFFFFFFFFF8LL) {
        v24 = -8;
      }
      v98 = v24;
      v99 = v18;
      v97 = v18 + 8;
      v108 = *(_QWORD*)(v20 - 8);
      while (1) {
        v27 = *v22;
        v28 = *(_QWORD*)(*v22 + 8);
        if (*(_BYTE*)(v28 + 176) != 3 || (*(_BYTE*)(v28 + 112) & 1) != 0) {
          goto LABEL_19;
        }
        v10 = Impl_13261c0(v21);
        if (v21 == v103) {
          if ((unsigned __int8)v10 == 4) {
            v10 = Impl_13261c0(v21);
            if ((unsigned __int8)v10 == 4 && (*(_BYTE*)(v21 + 178) & 2) == 0 &&
                (game_GameModeData_instance_ == 0 ||
                 *(_DWORD*)(game_GameModeData_instance_ + 60) != 3)) {
              v111 = &GameData_1ab570b;
              v10 = game_HashString(&GameData_1ab570b);
              v110 = v10;
              if (game_GameModeData_instance_ == 0 ||
                  (v10 = game_GameVariableTable_Find(
                       *(_QWORD*)(game_GameModeData_instance_ + 48), &v110)) ==
                      0 ||
                  *(_DWORD*)(v10 + 32) == 0) {
                v29 = *(_QWORD*)(*GameData_212c790 + 8);
                v30 = *(_DWORD*)(v29 + 56);
                v31 = *(__int64**)(v29 + 8);
                if (v30 < 0) {
                  while (1) {
                    v33 = *v31;
                    if (*(_QWORD*)(*v31 + 96) == 0 &&
                        *(_QWORD*)(v33 + 552) == 0) {
                      break;
                    }
                    ++v31;
                  }
                }
                else {
                  v34 = *v31;
                  v32 = v31 + 1;
                  v33 = v34;
                  if (*(_DWORD*)(v34 + 84) != v30) {
                    do {
                      v35 = *v32++;
                      v33 = v35;
                    } while (*(_DWORD*)(v35 + 84) != v30);
                  }
                }
                if (*(_QWORD*)(v27 + 8) != *(_QWORD*)(v33 + 8)) {
                  goto LABEL_19;
                }
              }
            }
          }
        }
        else if ((unsigned __int8)v10 == 4 &&
                 (game_GameModeData_instance_ == 0 ||
                  *(_DWORD*)(game_GameModeData_instance_ + 60) != 3)) {
          v111 = &GameData_1ab570b;
          v110 = game_HashString(&GameData_1ab570b);
          if (game_GameModeData_instance_ == 0) {
            goto LABEL_19;
          }
          v10 = game_GameVariableTable_Find(
              *(_QWORD*)(game_GameModeData_instance_ + 48), &v110);
          if (v10 == 0 || *(_DWORD*)(v10 + 32) == 0) {
            goto LABEL_19;
          }
        }
        v36 = *v3;
        v37 = (_QWORD*)v3[1];
        v38 = (__int64)v37 - *v3;
        if (v37 == (_QWORD*)*v3) {
          break;
        }
        v39 = (_QWORD*)*v3;
        while (*v39 != v27) {
          if (++v39 == v37) {
            goto LABEL_53;
          }
        }
        if (v39 == v37) {
          break;
        }
      LABEL_93:
        v21 = v108;
        v62 = v9;
        if (v9 != v7) {
          v62 = v9;
          while (*(_QWORD*)v62 != *(_QWORD*)(v27 + 8)) {
            v62 += 8;
            if (v62 == v7) {
              goto LABEL_99;
            }
          }
        }
        if (v62 != v7) {
          goto LABEL_19;
        }
      LABEL_99:
        if (v7 >= v102) {
          v63 = (char*)(v7 - v9);
          v64 = v9;
          v65 = (v7 - v9) >> 3;
          v66 = v65 + 1;
          if ((unsigned __int64)(v65 + 1) >> 61 != 0) {
            goto LABEL_155;
          }
          v67 = v64;
          v68 = v102 - v64;
          v69 = (v102 - v64) >> 2;
          if (v69 > v66) {
            v66 = v69;
          }
          if (v68 >= 0x7FFFFFFFFFFFFFF8LL) {
            v70 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v70 = v66;
          }
          if (v70 != 0) {
            if (v70 >> 61 != 0) {
              goto LABEL_156;
            }
            v71 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v70, 16, 0);
          }
          else {
            v71 = 0;
          }
          v102 = (char*)(v71 + 8 * v70);
          v72 = (__int64)&v63[v71 + -8 * v65];
          *(_QWORD*)&v63[v71] = *(_QWORD*)(v27 + 8);
          v7 = &v63[v71 + 8];
          memcpy(v72, v67, v63);
          if (v67 != nullptr) {
            v73 = (_QWORD*)fw_memory_g_heap_manager_ptr;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v74 = 128;
            }
            else {
              v74 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v74);
            v9 = (char*)v72;
            goto LABEL_118;
          }
          v9 = (char*)v72;
        }
        else {
          *(_QWORD*)v7 = *(_QWORD*)(v27 + 8);
          v7 += 8;
        }
        v73 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      LABEL_118:
        v75 = fw_memory_HeapManager_Allocate(*v73, v98, 16, 0);
        *(_QWORD*)(v75 + v99) = *(_QWORD*)(v27 + 8);
        v10 = memcpy(v75, v100, v99);
        if ((v97 & 0x8000000000000000LL) != 0) {
          goto LABEL_155;
        }
        v76 = fw_memory_HeapManager_Allocate(*v73, v97, 16, 0);
        v77 = v76 + v97;
        v10 = memcpy(v76, v75, v97);
        if ((unsigned __int64)v11 < v101) {
          *v11 = v76;
          v11[1] = v77;
          v11[2] = v77;
          v25 = fw_memory_g_heap_manager_ptr;
        }
        else {
          v78 = 1 - 0x5555555555555555LL * (v11 - v104);
          if (v78 > 0xAAAAAAAAAAAAAAALL) {
            GameRoutine_1338890(v10);
          }
          if (0x5555555555555556LL * ((__int64)(v101 - (_QWORD)v104) >> 3) >
              v78) {
            v78 = 0x5555555555555556LL * ((__int64)(v101 - (_QWORD)v104) >> 3);
          }
          if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v101 - (_QWORD)v104) >> 3) >=
              0x555555555555555LL) {
            v78 = 0xAAAAAAAAAAAAAAALL;
          }
          if (v78 > 0xAAAAAAAAAAAAAAALL) {
          LABEL_156:
            GameRoutine_60a210_alt1(v10);
          }
          v106 = 3 * v78;
          v79 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v78, 16, 0);
          v80 = (__int64*)(v79 + (char*)v11 - (char*)v104);
          v81 = v79;
          *v80 = v76;
          v80[1] = v77;
          v80[2] = v77;
          if (v104 != v11) {
            v82 = v104;
            v83 = (_QWORD*)v79;
            v84 = v104;
            do {
              *v83 = *v84;
              v83[1] = v84[1];
              v83[2] = v84[2];
              v84[1] = 0;
              v84[2] = 0;
              *v84 = 0;
              v84 += 3;
              v83 += 3;
            } while (v84 != v11);
            do {
              if (*v82 != 0) {
                v82[1] = *v82;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) != 0) {
                  v85 = 128;
                }
                else {
                  v85 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v85);
              }
              v82 += 3;
            } while (v82 != v11);
          }
          v101 = v81 + 8 * v106;
          v25 = fw_memory_g_heap_manager_ptr;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v86 = 128;
          }
          else {
            v86 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v86);
          v11 = v80;
          v104 = (__int64*)v81;
        }
        v21 = v108;
        v11 += 3;
        if (*(_QWORD*)(*(_QWORD*)v25 + 200LL) != 0) {
          v26 = 128;
        }
        else {
          v26 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v25 + v26);
        v3 = v107;
      LABEL_19:
        if (++v22 == v109) {
          goto LABEL_2;
        }
      }
    LABEL_53:
      v105 = v9;
      v40 = v3[2];
      if ((unsigned __int64)v37 >= v40) {
        v42 = (v38 >> 3) + 1;
        if (v42 >> 61 != 0) {
          goto LABEL_157;
        }
        if ((__int64)(v40 - v36) >> 2 > v42) {
          v42 = (__int64)(v40 - v36) >> 2;
        }
        if (v40 - v36 >= 0x7FFFFFFFFFFFFFF8LL) {
          v43 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v43 = v42;
        }
        if (v43 != 0) {
          if (v43 >> 61 != 0) {
            goto LABEL_156;
          }
          v44 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v43, 16, 0);
        }
        else {
          v44 = 0;
        }
        v40 = v44 + 8 * v43;
        v45 = v44 + v38 - 8 * (v38 >> 3);
        *(_QWORD*)(v44 + v38) = v27;
        v41 = (_QWORD*)(v44 + v38 + 8);
        v10 = memcpy(v45, v36, v38);
        *v107 = v45;
        v107[2] = v40;
        if (v36 != 0) {
          v46 = 56;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v46 = 128;
          }
          v10 = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v46);
        }
        v36 = v45;
        v3 = v107;
      }
      else {
        *v37 = v27;
        v41 = v37 + 1;
      }
      v47 = *(_QWORD*)(v27 + 8);
      v3[1] = (__int64)v41;
      v48 = *(__int64**)(v47 + 48);
      v49 = *(__int64**)(v47 + 56);
      if (v48 == v49) {
        v50 = 0;
        if ((unsigned __int64)v41 < v40) {
        LABEL_75:
          *v41 = v50;
          v52 = (__int64)(v41 + 1);
          goto LABEL_91;
        }
      }
      else {
        while (1) {
          v51 = *v48++;
          v50 = v51;
          if (*(_QWORD*)(v51 + 8) == v108) {
            break;
          }
          if (v48 == v49) {
            v50 = 0;
            break;
          }
        }
        if ((unsigned __int64)v41 < v40) {
          goto LABEL_75;
        }
      }
      v53 = (char*)v41 - v36;
      v54 = ((__int64)v41 - v36) >> 3;
      v55 = v54 + 1;
      if ((unsigned __int64)(v54 + 1) >> 61 != 0) {
      LABEL_157:
        GameRoutine_1338870(v10);
      }
      if ((__int64)(v40 - v36) >> 2 > v55) {
        v55 = (__int64)(v40 - v36) >> 2;
      }
      if (v40 - v36 >= 0x7FFFFFFFFFFFFFF8LL) {
        v56 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v56 = v55;
      }
      if (v56 != 0) {
        if (v56 >> 61 != 0) {
          goto LABEL_156;
        }
        v57 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v56, 16, 0);
      }
      else {
        v57 = 0;
      }
      v58 = v57 + 8 * v56;
      v59 = (char*)v41 - v36;
      v60 = (__int64)&v53[v57 + -8 * v54];
      *(_QWORD*)&v53[v57] = v50;
      v52 = (__int64)&v53[v57 + 8];
      v10 = memcpy(v60, v36, v59);
      *v107 = v60;
      v3 = v107;
      v107[2] = v58;
      if (v36 != 0) {
        v61 = 56;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
          v61 = 128;
        }
        v10 = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v61);
        v9 = v105;
        goto LABEL_92;
      }
    LABEL_91:
      v9 = v105;
    LABEL_92:
      v3[1] = v52;
      goto LABEL_93;
    }
  LABEL_2:
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
      v14 = 128;
    }
    else {
      v14 = 56;
    }
    v10 = nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v14);
    v12 = v104;
    v13 = v96 + 1;
  } while (0xAAAAAAAAAAAAAAABLL * (v11 - v104) > v96 + 1);
  v87 = fw_memory_g_heap_manager_ptr;
  if (v9 != nullptr) {
    v88 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v88 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v88);
    v12 = v104;
  }
  if (v12 != v11) {
    v89 = v11;
    do {
      v91 = *(v89 - 3);
      v89 -= 3;
      v90 = v91;
      if (v91 != 0) {
        v92 = *(_QWORD*)v87;
        *(v11 - 2) = v90;
        if (*(_QWORD*)(v92 + 200) != 0) {
          v93 = 128;
        }
        else {
          v93 = 56;
        }
        nn_mem_StandardAllocator_Free(v92 + v93);
      }
      v11 = v89;
    } while (v89 != v104);
  }
  v94 = 128;
  if (*(_QWORD*)(*(_QWORD*)v87 + 200LL) == 0) {
    v94 = 56;
  }
  {
    nn_mem_StandardAllocator_Free(*(_QWORD*)v87 + v94);
    return;
  }
}

__attribute__((swiftcall)) void SpotMgr_1332660(PSEUDO_X8 x8_, __int64 result)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  char* v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  char* v17;
  char* v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  char* v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  char* v42;
  __int64 v43;
  __int64 v44;

  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  v3 = *(_QWORD*)(result + 24);
  if (*(_QWORD*)(result + 32) != v3) {
    v4 = result;
    v5 = nullptr;
    v6 = 0;
    v7 = 0;
    v8 = result;
    do {
      v10 = *(_QWORD*)v8;
      v11 = *(__int64**)(*(_QWORD*)v8 + 48LL);
      v12 = *(__int64**)(v10 + 56);
      if (v11 == v12) {
      LABEL_9:
        v14 = 0;
      }
      else {
        v13 = *(_QWORD*)(v3 + 8 * v6);
        while (1) {
          v15 = *v11++;
          v14 = v15;
          if (*(_QWORD*)(v15 + 8) == v13) {
            break;
          }
          if (v11 == v12) {
            goto LABEL_9;
          }
        }
      }
      v16 = a2[2];
      if ((unsigned __int64)v5 >= v16) {
        v18 = &v5[-v7];
        v19 = (__int64)&v5[-v7] >> 3;
        v20 = v19 + 1;
        if ((unsigned __int64)(v19 + 1) >> 61 != 0) {
          goto LABEL_49;
        }
        v21 = v16 - v7;
        if (v21 >> 2 > v20) {
          v20 = v21 >> 2;
        }
        if ((unsigned __int64)v21 >= 0x7FFFFFFFFFFFFFF8LL) {
          v22 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v22 = v20;
        }
        if (v22 != 0) {
          if (v22 >> 61 != 0) {
            goto LABEL_50;
          }
          v23 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v22, 16, 0);
        }
        else {
          v23 = 0;
        }
        v24 = v23 + 8 * v22;
        v25 = &v5[-v7];
        v26 = (__int64)&v18[v23 + -8 * v19];
        *(_QWORD*)&v18[v23] = v14;
        v17 = &v18[v23 + 8];
        result = memcpy(v26, v7, v25);
        a2[1] = (__int64)v17;
        a2[2] = v24;
        if (v7 != 0) {
          v27 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v27 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v27);
        }
        v7 = v26;
      }
      else {
        *(_QWORD*)v5 = v14;
        v17 = v5 + 8;
      }
      v28 = *(_QWORD*)(v4 + 24);
      a2[1] = (__int64)v17;
      v29 = *(_QWORD*)(v28 + 8 * v6);
      v30 = *(__int64**)(v29 + 48);
      v31 = *(__int64**)(v29 + 56);
      if (v30 == v31) {
      LABEL_30:
        v32 = 0;
      }
      else {
        while (1) {
          v33 = *v30++;
          v32 = v33;
          if (*(_QWORD*)(v33 + 8) == v10) {
            break;
          }
          if (v30 == v31) {
            goto LABEL_30;
          }
        }
      }
      v34 = a2[2];
      if ((unsigned __int64)v17 < v34) {
        *(_QWORD*)v17 = v32;
        v5 = v17 + 8;
      }
      else {
        v35 = &v17[-v7];
        v36 = (__int64)&v17[-v7] >> 3;
        v37 = v36 + 1;
        if ((unsigned __int64)(v36 + 1) >> 61 != 0) {
        LABEL_49:
          *a2 = v7;
          GameRoutine_1338870(result);
        }
        v38 = v34 - v7;
        if (v38 >> 2 > v37) {
          v37 = v38 >> 2;
        }
        if ((unsigned __int64)v38 >= 0x7FFFFFFFFFFFFFF8LL) {
          v39 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v39 = v37;
        }
        if (v39 != 0) {
          if (v39 >> 61 != 0) {
          LABEL_50:
            *a2 = v7;
            GameRoutine_60a210_alt1(result);
          }
          v40 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v39, 16, 0);
        }
        else {
          v40 = 0;
        }
        v41 = v40 + 8 * v39;
        v42 = &v17[-v7];
        v43 = (__int64)&v35[v40 + -8 * v36];
        *(_QWORD*)&v35[v40] = v32;
        v5 = &v35[v40 + 8];
        result = memcpy(v43, v7, v42);
        a2[1] = (__int64)v5;
        a2[2] = v41;
        if (v7 != 0) {
          v44 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v44 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v44);
        }
        v7 = v43;
      }
      v3 = *(_QWORD*)(v4 + 24);
      v9 = *(_QWORD*)(v4 + 32);
      a2[1] = (__int64)v5;
      v8 = v3 + 8 * v6++;
    } while (v6 < (v9 - v3) >> 3);
    *a2 = v7;
  }
  {
    result;
    return;
  }
}

__int64 SpotMgr_1332940(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result;
  char* v9;
  __int64 v10;
  bool v11;
  __int64 v12;
  char v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char* v22[3];
  char* v23[3];
  struct {
    char* v24;
    char* v25;
  } v24_;

  result = 0;
  if (a1 == 0 || a3 == 0) {
    return result;
  }
  if (a1 == a3) {
    return 1;
  }
  if (game_gmap_GmapClock_instance_ == 0 ||
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
          0) {
    v12 = a1;
    if (game_GameModeData_instance_ != 0 &&
        *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
      v14 = 1;
    }
    else {
      v24_.v25 = (char*)&GameData_1ab570b;
      v24_.v24 = (char*)game_HashString_alt1((__int64)&GameData_1ab570b);
      if (game_GameModeData_instance_ != 0) {
        v15 = game_GameVariableTable_Find_alt1(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)&v24_.v24);
        v14 = 17;
        if (v15 != 0) {
          if (*(_DWORD*)(v15 + 32) != 0) {
            v14 = 1;
          }
          else {
            v14 = 17;
          }
        }
      }
      else {
        v14 = 17;
      }
    }
    v16 = fw_memory_g_heap_manager_ptr;
    v17 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0);
    *(_QWORD*)v17 = v12;
    *(_QWORD*)(v17 + 8) = a3;
    v23[0] = (char*)v17;
    memset(v22, 0, sizeof(v22));
    v23[1] = (char*)(v17 + 16);
    v23[2] = (char*)(v17 + 16);
    SpotMgr_13306e0_alt1((void*)(&v24_.v24), v23, v14, v22);
    v18 = v24_.v25 != v24_.v24;
    if (v24_.v24 != nullptr) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v16 + v19);
    }
    v20 = *(_QWORD*)v16;
    goto LABEL_33;
  }
  SpotMgr_1331320((void*)((__int64*)&v24_.v24), a1, a2, a4);
  if (v24_.v24 == v24_.v25) {
    result = 0;
    if (v24_.v24 == nullptr) {
      return result;
    }
    goto LABEL_32;
  }
  v9 = v24_.v24 + 8;
  do {
    v10 = *(_QWORD*)(*((_QWORD*)v9 - 1) + 8LL);
    result = v10 == a3;
    v11 = v10 == a3 || v9 == v24_.v25;
    v9 += 8;
  } while (!v11);
  if (v24_.v24 != nullptr) {
  LABEL_32:
    v18 = result;
    v20 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
  LABEL_33:
    v21 = 128;
    if (*(_QWORD*)(v20 + 200) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v20 + v21);
    return v18;
  }
  return result;
}

bool game_gmap_SpotMgr_CalcExcludedDisposSpot(__int64 (***a1)())
{
  __int64* v2;
  __int64 v3;
  __int64** v4;
  __int64** v5;
  int v6;
  __int64** v7;
  __int64* v8;
  __int64 v9;
  __int64** v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 (***v21)();
  __int64 v22;
  __int64 v23;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  __int64* v35;
  __int64* v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 (***v42)();
  __int64 v43;
  __int64* v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  __int64 (**v48)();
  __int64 (***v49)();
  __int64 v50;
  char** v51;
  char* v52[3];
  _QWORD v53[3];

  if (game_GameModeData_instance_ == 0 ||
      *(_DWORD*)(game_GameModeData_instance_ + 60) != 1) {
    return false;
  }
  v2 = GameData_212c790;
  v3 = *(_QWORD*)(*GameData_212c790 + 8);
  v4 = *(__int64***)(v3 + 8);
  v5 = *(__int64***)(v3 + 16);
  v6 = *(_DWORD*)(v3 + 56);
  if (v6 < 0) {
    if (v4 != v5) {
      v10 = *(__int64***)(v3 + 8);
      do {
        v8 = *v10;
        if ((*v10)[12] == 0 && v8[69] == 0) {
          goto LABEL_14;
        }
        ++v10;
      } while (v10 != v5);
    }
  }
  else if (v4 != v5) {
    v7 = *(__int64***)(v3 + 8);
    while (1) {
      v9 = (__int64)*v7++;
      v8 = (__int64*)v9;
      if (*(_DWORD*)(v9 + 84) == v6) {
        break;
      }
      if (v7 == v5) {
        goto LABEL_15;
      }
    }
  LABEL_14:
    v11 = *v8;
    goto LABEL_16;
  }
LABEL_15:
  v11 = ((__int64 (*)(void))game_gmap_SpotMgr_GetCurrentSpot)();
LABEL_16:
  v12 = ((__int64 (*)(void))game_gmap_SpotMgr_GetCurrentSpot)();
  if (v11 == v12) {
    return false;
  }
  v13 = v12;
  v14 = v12;
  if ((v6 & 0x80000000) == 0) {
    if (v4 == v5) {
      goto LABEL_28;
    }
    while (1) {
      v16 = *v4++;
      v15 = v16;
      if (*((_DWORD*)v16 + 21) == v6) {
        goto LABEL_27;
      }
      if (v4 == v5) {
        goto LABEL_21;
      }
    }
  }
  if (v4 != v5) {
    while (1) {
      v15 = *v4;
      if ((*v4)[12] == 0 && v15[69] == 0) {
        break;
      }
      if (++v4 == v5) {
      LABEL_21:
        v14 = v12;
        goto LABEL_28;
      }
    }
  LABEL_27:
    v14 = *v15;
  }
LABEL_28:
  v17 = fw_memory_g_heap_manager_ptr;
  v18 = (__int64*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0);
  *v18 = v14;
  v18[1] = v13;
  v53[0] = v18;
  memset(v52, 0, sizeof(v52));
  v53[1] = v18 + 2;
  v53[2] = v18 + 2;
  SpotMgr_13306e0((void*)((char**)&v48), (unsigned __int64)v53, 17, v52);
  if (*a1 != nullptr) {
    v19 = *(_QWORD*)v17;
    a1[1] = *a1;
    v20 = 128;
    if (*(_QWORD*)(v19 + 200) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(v19 + v20);
  }
  v21 = v49;
  *a1 = v48;
  a1[1] = (__int64 (**)())v21;
  a1[2] = (__int64 (**)())v50;
  v22 = 128;
  if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) == 0) {
    v22 = 56;
  }
  v23 = nn_mem_StandardAllocator_Free(*(_QWORD*)v17 + v22);
  if (a1[1] != *a1) {
    return true;
  }
  v25 = *(_QWORD*)(*v2 + 8);
  v26 = *(_DWORD*)(v25 + 56);
  v27 = *(_QWORD*)(v25 + 8);
  v28 = *(_QWORD*)(v25 + 16);
  if ((v26 & 0x80000000) == 0) {
    while (v27 != v28) {
      v30 = *(_QWORD**)v27;
      v27 += 8;
      v29 = v30;
      if (*((_DWORD*)v30 + 21) == v26) {
        goto LABEL_47;
      }
    }
  LABEL_42:
    v31 = game_gmap_SpotMgr_GetCurrentSpot(v23);
    v32 = Impl_1328460(v31);
    if ((v32 & 1) != 0) {
      return false;
    }
    goto LABEL_48;
  }
  if (v27 == v28) {
    goto LABEL_42;
  }
  while (1) {
    v29 = *(_QWORD**)v27;
    if (*(_QWORD*)(*(_QWORD*)v27 + 96LL) == 0 && v29[69] == 0) {
      break;
    }
    v27 += 8;
    if (v27 == v28) {
      goto LABEL_42;
    }
  }
LABEL_47:
  v32 = Impl_1328460(*v29);
  if ((v32 & 1) != 0) {
    return false;
  }
LABEL_48:
  v33 = *(_QWORD*)(*v2 + 8);
  v34 = *(_DWORD*)(v33 + 56);
  v35 = *(__int64**)(v33 + 8);
  v36 = *(__int64**)(v33 + 16);
  if (v34 < 0) {
    if (v35 != v36) {
      while (1) {
        v37 = (_QWORD*)*v35;
        if (*(_QWORD*)(*v35 + 96) == 0 && v37[69] == 0) {
          break;
        }
        if (++v35 == v36) {
          goto LABEL_54;
        }
      }
    LABEL_59:
      if ((Impl_132a360(*v37) & 1) == 0) {
        goto LABEL_60;
      }
      return false;
    }
  }
  else {
    while (v35 != v36) {
      v38 = *v35++;
      v37 = (_QWORD*)v38;
      if (*(_DWORD*)(v38 + 84) == v34) {
        goto LABEL_59;
      }
    }
  }
LABEL_54:
  v39 = game_gmap_SpotMgr_GetCurrentSpot(v32);
  if ((Impl_132a360(v39) & 1) != 0) {
    return false;
  }
LABEL_60:
  v42 = &v48;
  v48 = GameData_202be68;
  v49 = a1;
  v51 = (char**)&v48;
  v50 = 17;
  v43 = *(_QWORD*)(GameData_21c9700 + 8);
  v44 = *(__int64**)(v43 + 48);
  v45 = *(__int64**)(v43 + 56);
  if (v44 != v45) {
    do {
      v46 = *v44++;
      v53[0] = v46;
      if (v51 == nullptr) {
        GameRoutine_60a310(0, v40);
      }
      (*((void (**)(char**, _QWORD*))*v51 + 6))(v51, v53);
    } while (v44 != v45);
    v42 = (__int64 (***)())v51;
    if (v51 != (char**)&v48) {
      if (v51 != nullptr) {
        v47 = 5;
      LABEL_67:
        ((void (*)(__int64 (***)(), __int64, __int64))(*v42)[v47])(v42, v40,
                                                                   v41);
      }
      return a1[1] != *a1;
    }
  }
  v47 = 4;
  goto LABEL_67;
}

void SpotMgr_1332f00(__int64 a1)
{
  _QWORD* v1;
  _QWORD* v2;
  unsigned __int64 v3;
  _QWORD* v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64* v12;
  __int64* v13;
  _QWORD* v14;
  _QWORD* v15;
  unsigned __int64 v16;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64** v21;
  __int64* v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  signed __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  signed __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  char* v35;
  char* v36;
  __int64* v37;
  __int64 v38;
  __int64** v39;
  __int64* v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  char* v44[3];
  char* v45[3];
  _QWORD v46[3];

  v1 = *(_QWORD**)a1;
  v2 = *(_QWORD**)(a1 + 8);
  v3 = (unsigned __int64)v2 - *(_QWORD*)a1;
  if (v3 == 8) {
    if (*v1 != 0) {
      v4 = *(_QWORD**)(*GameData_212c780 + 8);
      v5 = v4[2];
      if (v5 != 0 && v4[4] != 0) {
        v7 = *(unsigned int*)*v1;
        v8 = v5 - 1;
        if ((v5 & (v5 - 1)) != 0) {
          v9 = *(unsigned int*)*v1;
          if (v5 <= v7) {
            v9 = (unsigned int)v7 % (unsigned int)v5;
          }
        }
        else {
          v9 = ((_DWORD)v5 - 1) & (unsigned int)v7;
        }
        v39 = *(__int64***)(v4[1] + 8 * v9);
        if (v39 != nullptr) {
          v40 = *v39;
          if (v40 != nullptr) {
            if ((v5 & v8) == 0) {
              while (1) {
                v42 = v40[1];
                if (v42 == v7) {
                  if (*((_DWORD*)v40 + 4) == (_DWORD)v7) {
                    goto LABEL_84;
                  }
                }
                else if ((v42 & v8) != v9) {
                  return;
                }
                v40 = (__int64*)*v40;
                if (v40 == nullptr) {
                  return;
                }
              }
            }
            do {
              v41 = v40[1];
              if (v41 == v7) {
                if (*((_DWORD*)v40 + 4) == (_DWORD)v7) {
                LABEL_84:
                  v43 = v40[3];
                  if (v43 != 0) {
                    GameRoutine_13289e0(v43);
                  }
                  return;
                }
              }
              else {
                if (v41 >= v5) {
                  v41 %= v5;
                }
                if (v41 != v9) {
                  return;
                }
              }
              v40 = (__int64*)*v40;
            } while (v40 != nullptr);
          }
        }
      }
    }
  }
  else {
    if (v3 < 9) {
      return;
    }
    v10 = 0;
    v11 = nullptr;
    v12 = nullptr;
    v13 = GameData_212c780;
    v14 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    do {
      if (*v1 != 0) {
        v15 = *(_QWORD**)(*v13 + 8);
        v16 = v15[2];
        if (v16 != 0 && v15[4] != 0) {
          v18 = *(unsigned int*)*v1;
          v19 = v16 - 1;
          if ((v16 & (v16 - 1)) != 0) {
            v20 = *(unsigned int*)*v1;
            if (v16 <= v18) {
              v20 = (unsigned int)v18 % (unsigned int)v16;
            }
          }
          else {
            v20 = ((_DWORD)v16 - 1) & (unsigned int)v18;
          }
          v21 = *(__int64***)(v15[1] + 8 * v20);
          if (v21 != nullptr) {
            v22 = *v21;
            if (v22 != nullptr) {
              if ((v16 & v19) == 0) {
                while (1) {
                  v24 = v22[1];
                  if (v24 == v18) {
                    if (*((_DWORD*)v22 + 4) == (_DWORD)v18) {
                      goto LABEL_39;
                    }
                  }
                  else if ((v24 & v19) != v20) {
                    goto LABEL_13;
                  }
                  v22 = (__int64*)*v22;
                  if (v22 == nullptr) {
                    goto LABEL_13;
                  }
                }
              }
              do {
                v23 = v22[1];
                if (v23 == v18) {
                  if (*((_DWORD*)v22 + 4) == (_DWORD)v18) {
                  LABEL_39:
                    v25 = v22[3];
                    if (v25 != 0) {
                      if ((unsigned __int64)v11 < v10) {
                        *(_QWORD*)v11 = v25;
                        v11 += 8;
                      }
                      else {
                        v26 = v11 - (char*)v12;
                        v27 = (v11 - (char*)v12) >> 3;
                        v28 = v27 + 1;
                        if ((unsigned __int64)(v27 + 1) >> 61 != 0) {
                          GameRoutine_8875e0(a1);
                        }
                        if ((__int64)(v10 - (_QWORD)v12) >> 2 > v28) {
                          v28 = (__int64)(v10 - (_QWORD)v12) >> 2;
                        }
                        if (v10 - (unsigned __int64)v12 >=
                            0x7FFFFFFFFFFFFFF8LL) {
                          v29 = 0x1FFFFFFFFFFFFFFFLL;
                        }
                        else {
                          v29 = v28;
                        }
                        if (v29 != 0) {
                          if (v29 >> 61 != 0) {
                            GameRoutine_60a210_alt1(a1);
                          }
                          v30 = fw_memory_HeapManager_Allocate(*v14, 8 * v29,
                                                               16, 0);
                        }
                        else {
                          v30 = 0;
                        }
                        v10 = v30 + 8 * v29;
                        v31 = v11 - (char*)v12;
                        v32 = v30 + v26 - 8 * v27;
                        *(_QWORD*)(v30 + v26) = v25;
                        v11 = (char*)(v30 + v26 + 8);
                        a1 = memcpy(v32, v12, v31);
                        if (v12 != nullptr) {
                          v33 = 128;
                          if (*(_QWORD*)(*v14 + 200LL) == 0) {
                            v33 = 56;
                          }
                          a1 = nn_mem_StandardAllocator_Free(*v14 + v33);
                        }
                        v12 = (__int64*)v32;
                      }
                    }
                    break;
                  }
                }
                else {
                  if (v23 >= v16) {
                    v23 %= v16;
                  }
                  if (v23 != v20) {
                    break;
                  }
                }
                v22 = (__int64*)*v22;
              } while (v22 != nullptr);
            }
          }
        }
      }
    LABEL_13:
      ++v1;
    } while (v1 != v2);
    v46[1] = v11;
    v46[2] = v10;
    v46[0] = v12;
    GameRoutine_13289e0(*v12);
    memset(v44, 0, sizeof(v44));
    SpotMgr_13306e0((void*)(v45), (unsigned __int64)v46, 0, v44);
    v34 = 128;
    if (*(_QWORD*)(*v14 + 200LL) == 0) {
      v34 = 56;
    }
    nn_mem_StandardAllocator_Free(*v14 + v34);
    v35 = v45[0];
    v36 = v45[1];
    if (v45[0] != v45[1]) {
      v37 = (__int64*)v45[0];
      do {
        if (*(_QWORD*)(*v37 + 120) != 0) {
          GameRoutine_13289e0(*v37);
        }
        ++v37;
      } while (v37 != (__int64*)v36);
    }
    if (v35 != nullptr) {
      v38 = 128;
      if (*(_QWORD*)(*v14 + 200LL) == 0) {
        v38 = 56;
      }
      nn_mem_StandardAllocator_Free(*v14 + v38);
    }
  }
}

void SpotMgr_1333340(__int64 a1)
{
  _QWORD* v1;
  _QWORD* v2;
  unsigned __int64 v3;
  _QWORD* v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  char* v11;
  char** v12;
  __int64* v13;
  _QWORD* v14;
  _QWORD* v15;
  unsigned __int64 v16;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64** v21;
  __int64* v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  signed __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  signed __int64 v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  __int64 v35;
  _QWORD* v36;
  __int64** v37;
  __int64* v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  char* v42;
  char* v43;
  char* v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  __int64 v49;
  char* v50[3];
  char* v51[3];
  _QWORD v52[3];

  v1 = *(_QWORD**)a1;
  v2 = *(_QWORD**)(a1 + 8);
  v3 = (unsigned __int64)v2 - *(_QWORD*)a1;
  if (v3 == 8) {
    if (*v1 != 0) {
      v4 = *(_QWORD**)(*GameData_212c780 + 8);
      v5 = v4[2];
      if (v5 != 0 && v4[4] != 0) {
        v7 = *(unsigned int*)*v1;
        v8 = v5 - 1;
        if ((v5 & (v5 - 1)) != 0) {
          v9 = *(unsigned int*)*v1;
          if (v5 <= v7) {
            v9 = (unsigned int)v7 % (unsigned int)v5;
          }
        }
        else {
          v9 = ((_DWORD)v5 - 1) & (unsigned int)v7;
        }
        v37 = *(__int64***)(v4[1] + 8 * v9);
        if (v37 != nullptr) {
          v38 = *v37;
          if (v38 != nullptr) {
            if ((v5 & v8) == 0) {
              while (1) {
                v40 = v38[1];
                if (v40 == v7) {
                  if (*((_DWORD*)v38 + 4) == (_DWORD)v7) {
                    goto LABEL_98;
                  }
                }
                else if ((v40 & v8) != v9) {
                  return;
                }
                v38 = (__int64*)*v38;
                if (v38 == nullptr) {
                  return;
                }
              }
            }
            do {
              v39 = v38[1];
              if (v39 == v7) {
                if (*((_DWORD*)v38 + 4) == (_DWORD)v7) {
                LABEL_98:
                  v49 = v38[3];
                  if (v49 != 0) {
                    GameRoutine_1326c00_alt1(v38[3], 2);
                    if (*(_QWORD*)(v49 + 120) != 0) {
                      game_gmap_1329500((__int64)v52, (char*)v49, 0, 1);
                    }
                  }
                  return;
                }
              }
              else {
                if (v39 >= v5) {
                  v39 %= v5;
                }
                if (v39 != v9) {
                  return;
                }
              }
              v38 = (__int64*)*v38;
            } while (v38 != nullptr);
          }
        }
      }
    }
  }
  else {
    if (v3 < 9) {
      return;
    }
    v10 = 0;
    v11 = nullptr;
    v12 = nullptr;
    v13 = GameData_212c780;
    v14 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    do {
      if (*v1 != 0) {
        v15 = *(_QWORD**)(*v13 + 8);
        v16 = v15[2];
        if (v16 != 0 && v15[4] != 0) {
          v18 = *(unsigned int*)*v1;
          v19 = v16 - 1;
          if ((v16 & (v16 - 1)) != 0) {
            v20 = *(unsigned int*)*v1;
            if (v16 <= v18) {
              v20 = (unsigned int)v18 % (unsigned int)v16;
            }
          }
          else {
            v20 = ((_DWORD)v16 - 1) & (unsigned int)v18;
          }
          v21 = *(__int64***)(v15[1] + 8 * v20);
          if (v21 != nullptr) {
            v22 = *v21;
            if (v22 != nullptr) {
              if ((v16 & v19) == 0) {
                while (1) {
                  v24 = v22[1];
                  if (v24 == v18) {
                    if (*((_DWORD*)v22 + 4) == (_DWORD)v18) {
                      goto LABEL_39;
                    }
                  }
                  else if ((v24 & v19) != v20) {
                    goto LABEL_13;
                  }
                  v22 = (__int64*)*v22;
                  if (v22 == nullptr) {
                    goto LABEL_13;
                  }
                }
              }
              do {
                v23 = v22[1];
                if (v23 == v18) {
                  if (*((_DWORD*)v22 + 4) == (_DWORD)v18) {
                  LABEL_39:
                    v25 = v22[3];
                    if (v25 != 0) {
                      if ((unsigned __int64)v11 < v10) {
                        *(_QWORD*)v11 = v25;
                        v11 += 8;
                      }
                      else {
                        v26 = v11 - (char*)v12;
                        v27 = (v11 - (char*)v12) >> 3;
                        v28 = v27 + 1;
                        if ((unsigned __int64)(v27 + 1) >> 61 != 0) {
                          GameRoutine_8875e0(a1);
                        }
                        if ((__int64)(v10 - (_QWORD)v12) >> 2 > v28) {
                          v28 = (__int64)(v10 - (_QWORD)v12) >> 2;
                        }
                        if (v10 - (unsigned __int64)v12 >=
                            0x7FFFFFFFFFFFFFF8LL) {
                          v29 = 0x1FFFFFFFFFFFFFFFLL;
                        }
                        else {
                          v29 = v28;
                        }
                        if (v29 != 0) {
                          if (v29 >> 61 != 0) {
                            GameRoutine_60a210_alt1(a1);
                          }
                          v30 = fw_memory_HeapManager_Allocate(*v14, 8 * v29,
                                                               16, 0);
                        }
                        else {
                          v30 = 0;
                        }
                        v10 = v30 + 8 * v29;
                        v31 = v11 - (char*)v12;
                        v32 = v30 + v26 - 8 * v27;
                        *(_QWORD*)(v30 + v26) = v25;
                        v11 = (char*)(v30 + v26 + 8);
                        a1 = memcpy(v32, v12, v31);
                        if (v12 != nullptr) {
                          v33 = 128;
                          if (*(_QWORD*)(*v14 + 200LL) == 0) {
                            v33 = 56;
                          }
                          a1 = nn_mem_StandardAllocator_Free(*v14 + v33);
                        }
                        v12 = (char**)v32;
                      }
                    }
                    break;
                  }
                }
                else {
                  if (v23 >= v16) {
                    v23 %= v16;
                  }
                  if (v23 != v20) {
                    break;
                  }
                }
                v22 = (__int64*)*v22;
              } while (v22 != nullptr);
            }
          }
        }
      }
    LABEL_13:
      ++v1;
    } while (v1 != v2);
    v52[1] = v11;
    v52[2] = v10;
    v52[0] = v12;
    v34 = *v12;
    if ((*v12)[176] != 2) {
      v35 = *((_QWORD*)v34 + 15);
      if (v35 != 0) {
        if ((*(_WORD*)(v35 + 258) & 0x80) == 0) {
          *((_WORD*)v34 + 88) = 770;
          v36 = (_QWORD*)GameRoutine_ae07e0_alt1();
          if (*v36 != 0) {
            game_VariableManager_SetFlag_alt1(v36, 1);
          }
        }
      }
      else {
        *((_WORD*)v34 + 88) = 770;
      }
    }
    if (*((_QWORD*)*v12 + 15) != 0) {
      game_gmap_1329500((__int64)v51, *v12, 0, 1);
    }
    memset(v50, 0, sizeof(v50));
    SpotMgr_13306e0((void*)(v51), (unsigned __int64)v52, 0, v50);
    v41 = 128;
    if (*(_QWORD*)(*v14 + 200LL) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free(*v14 + v41);
    v42 = v51[0];
    v43 = v51[1];
    if (v51[0] != v51[1]) {
      v44 = v51[0];
      do {
        v45 = *(_QWORD*)v44;
        v46 = *(_QWORD*)(*(_QWORD*)v44 + 120LL);
        if (v46 != 0) {
          if (*(_BYTE*)(v45 + 176) != 2 && (*(_WORD*)(v46 + 258) & 0x80) == 0) {
            *(_WORD*)(v45 + 176) = 770;
            v47 = (_QWORD*)GameRoutine_ae07e0_alt1();
            if (*v47 != 0) {
              game_VariableManager_SetFlag_alt1(v47, 1);
            }
          }
          if (*(_QWORD*)(v45 + 120) != 0) {
            game_gmap_1329500((__int64)v51, (char*)v45, 0, 1);
          }
        }
        v44 += 8;
      } while (v44 != v43);
    }
    if (v42 != nullptr) {
      v48 = 128;
      if (*(_QWORD*)(*v14 + 200LL) == 0) {
        v48 = 56;
      }
      nn_mem_StandardAllocator_Free(*v14 + v48);
    }
  }
}

void SpotMgr_1333820(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64* i;
  __int64 v6;
  char v7;
  int v8;
  __int64 v9;

  v2 = GameData_21c9700;
  if (GameData_21c9700 != 0) {
    *(_BYTE*)(*(_QWORD*)(GameData_21c9700 + 8) + 208LL) = 1;
    v3 = *(_QWORD*)(v2 + 8);
    v4 = *(__int64**)(v3 + 48);
    for (i = *(__int64**)(v3 + 56); v4 != i; ++v4) {
      v6 = *v4;
      v7 = *(_BYTE*)(*v4 + 112);
      v8 = *(unsigned __int8*)(*v4 + 176);
      *(_BYTE*)(*v4 + 177) = 0;
      if (v8 == 3 && ((v7 == 0) | v7 & 1) != 0) {
        v9 = *(_QWORD*)(v6 + 120);
        if (v9 != 0) {
          if ((*(_WORD*)(v9 + 258) & 0x80) == 0) {
            *(_WORD*)(v6 + 176) = 770;
            if (*(_QWORD*)GameRoutine_ae07e0(v9, a2) != 0) {
              game_VariableManager_SetFlag();
            }
          }
        }
        else {
          *(_WORD*)(v6 + 176) = 770;
        }
      }
    }
  }
}

void SpotMgr_13338e0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64* i;
  __int64 v6;
  int v7;
  __int64 v8;
  bool v9;
  bool v10;
  char v11;

  v2 = GameData_21c9700;
  if (GameData_21c9700 != 0) {
    *(_BYTE*)(*(_QWORD*)(GameData_21c9700 + 8) + 208LL) = 0;
    v3 = *(_QWORD*)(v2 + 8);
    v4 = *(__int64**)(v3 + 48);
    for (i = *(__int64**)(v3 + 56); v4 != i; ++v4) {
      v6 = *v4;
      v7 = *(unsigned __int8*)(*v4 + 177);
      if (*(_BYTE*)(*v4 + 177) != 0) {
        if (*(unsigned __int8*)(v6 + 176) != v7) {
          v8 = *(_QWORD*)(v6 + 120);
          v9 = v7 == 1 || v8 == 0;
          if (v9 || (*(_WORD*)(v8 + 258) & 0x80) == 0) {
            *(_BYTE*)(v6 + 176) = v7;
            if (v7 == 2) {
              *(_BYTE*)(v6 + 177) = 3;
            }
            v10 = v7 == 1 || v8 == 0;
            if (!v10 && *(_QWORD*)GameRoutine_ae07e0(v8, a2) != 0) {
              game_VariableManager_SetFlag();
            }
          }
        }
        if (*(_QWORD*)(v6 + 120) != 0) {
          GameRoutine_1329500((__int64)&v11, (char*)v6, 0, 1);
        }
      }
    }
  }
}

__int64 SpotMgr_13339e0()
{
  __int64 v0;
  __int64* v1;
  __int64* v2;
  unsigned int v3;
  __int64 v4;
  _QWORD** v5;
  int v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64* v11;
  __int64* v12;
  int v13;
  int v14;
  _QWORD* v15;

  v0 = *(_QWORD*)(*GameData_212c780 + 8);
  v1 = *(__int64**)(v0 + 48);
  v2 = *(__int64**)(v0 + 56);
  if (v1 == v2) {
    return 0;
  }
  else {
    v3 = 0;
    v4 = *(_QWORD*)GameData_212c7a0[0];
    v5 = (_QWORD**)GameData_212c6a0[0];
    do {
      v7 = *v1;
      if ((unsigned __int8)Impl_13261c0_alt1(*v1) == 9) {
        v8 = *(_QWORD*)(v4 + 16);
        v9 = *(_QWORD**)(v8 + 80);
        v10 = *(_QWORD**)(v8 + 88);
        if (v9 != v10) {
          while (*v9 != *(_QWORD*)(v7 + 96)) {
            v9 += 9;
            if (v9 == v10) {
              goto LABEL_5;
            }
          }
          v12 = (__int64*)v9[6];
          v11 = (__int64*)v9[7];
          if ((int)((unsigned __int64)((char*)v11 - (char*)v12) >> 3) >= 1) {
            if (v12 == v11) {
              v6 = 1;
            }
            else {
              v13 = 0;
              do {
                v15 = GameRoutine_dbc1e0(*v5, *v12);
                v14 = v15 == nullptr || *((_DWORD*)v15 + 3) == 0;
                v13 += v14;
                ++v12;
              } while (v12 != v11);
              v6 = v13 == 0;
            }
            v3 += v6;
          }
        }
      }
    LABEL_5:
      ++v1;
    } while (v1 != v2);
  }
  return v3;
}

void SpotMgr_1333b20()
{
  __int64 v0;
  __int64* v1;
  __int64* v2;
  __int64 v3;

  v0 = *(_QWORD*)(GameData_21c9700 + 8);
  v1 = *(__int64**)(v0 + 48);
  v2 = *(__int64**)(v0 + 56);
  while (v1 != v2) {
    v3 = *v1++;
    GameRoutine_1328d60_alt1(v3);
  }
}

void SpotMgr_1333b80()
{
  __int64 v0;
  __int64* v1;
  __int64* i;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;

  if (GameData_21c9700 != 0) {
    v0 = *(_QWORD*)(GameData_21c9700 + 8);
    v1 = *(__int64**)(v0 + 48);
    for (i = *(__int64**)(v0 + 56); v1 != i; *(_BYTE*)(v3 + 116) = 0) {
      v3 = *v1;
      if (*(_BYTE*)(*v1 + 176) != 1) {
        *(_BYTE*)(v3 + 176) = 1;
      }
      v4 = *(_QWORD*)(v3 + 120);
      *(_BYTE*)(v3 + 178) = 0;
      if (v4 != 0) {
        GameRoutine_1329500((__int64)&v6, (char*)v3, 0, 1);
      }
      v5 = *(_QWORD*)(v3 + 280);
      if (v5 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
        *(_QWORD*)(v3 + 280) = 0;
      }
      ++v1;
    }
  }
  if (GameData_2241428 != 0) {
    *(_QWORD*)(GameData_2241428 + 16) = *(_QWORD*)(GameData_2241428 + 8);
  }
}

bool SpotMgr_1333c60(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _BOOL4 v14;
  __int64 v15;
  _QWORD v17[4];
  _QWORD* v18;
  __int64 v19;

  v2 = v17;
  v17[0] = GameData_202bee8;
  v18 = v17;
  v3 = *(_QWORD*)(GameData_21c9700 + 8);
  v4 = *(__int64**)(v3 + 72);
  v5 = *(__int64**)(v3 + 80);
  if (v4 == v5) {
    v14 = false;
  LABEL_23:
    v15 = 32;
    goto LABEL_24;
  }
  v6 = 0;
  do {
    v7 = *v4;
    v8 = *(_QWORD*)(*v4 + 120);
    v9 = v8 != 0 && *(_BYTE*)(*v4 + 176) == 1;
    if (v9 && *(_WORD*)(v8 + 120) != 0) {
      v10 = *(__int64**)(v8 + 24);
      v11 = *v10;
      v12 = v10[1];
      if (v12 == *v10) {
      LABEL_3:
        v19 = v7;
        if (v18 == nullptr) {
          GameRoutine_60a310(0, a2);
        }
        LOBYTE(v2) =
            (*(__int64 (**)(_QWORD*, __int64*))(*v18 + 48LL))(v18, &v19);
        ++v6;
      }
      else {
        while (1) {
          if (*(_QWORD*)v11 != 0) {
            v13 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              LOBYTE(v2) =
                  GameRoutine_828f50(game_GameModeData_instance_ + 40, v11);
            }
            if (*(_BYTE*)(v11 + 16) != ((v13 == 0) | (unsigned __int8)v2 & 1)) {
              break;
            }
          }
          v11 += 24;
          if (v11 == v12) {
            goto LABEL_3;
          }
        }
      }
    }
    ++v4;
  } while (v4 != v5);
  v2 = v18;
  v14 = v6 > 0;
  if (v18 == v17) {
    goto LABEL_23;
  }
  if (v18 != nullptr) {
    v15 = 40;
  LABEL_24:
    (*(void (**)(_QWORD*))(*v2 + v15))(v2);
  }
  return v14;
}

bool SpotMgr_1333de0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v16;

  v2 = *(_QWORD*)(GameData_21c9700 + 8);
  v3 = *(__int64**)(v2 + 72);
  v4 = *(__int64**)(v2 + 80);
  if (v3 == v4) {
    return false;
  }
  v5 = a1;
  v6 = 0;
  do {
    v8 = *v3;
    v9 = *(_QWORD*)(*v3 + 120);
    v10 = v9 != 0 && *(_BYTE*)(*v3 + 176) == 1;
    if (v10 && *(_WORD*)(v9 + 120) != 0) {
      v11 = *(__int64**)(v9 + 24);
      v12 = *v11;
      v13 = v11[1];
      if (v13 == *v11) {
      LABEL_3:
        v7 = *(_QWORD*)(v5 + 32);
        v16 = v8;
        if (v7 == 0) {
          GameRoutine_60a310(0, a2);
        }
        LOBYTE(a1) =
            (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v7 + 48LL))(v7, &v16);
        ++v6;
      }
      else {
        while (1) {
          if (*(_QWORD*)v12 != 0) {
            v14 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              LOBYTE(a1) =
                  GameRoutine_828f50(game_GameModeData_instance_ + 40, v12);
            }
            if (*(_BYTE*)(v12 + 16) != ((v14 == 0) | a1 & 1)) {
              break;
            }
          }
          v12 += 24;
          if (v12 == v13) {
            goto LABEL_3;
          }
        }
      }
    }
    ++v3;
  } while (v3 != v4);
  return v6 > 0;
}

_QWORD* SpotMgr_1334160(_QWORD* result, __int64 a2)
{
  char* v2;
  char* v3;
  char* v4;
  unsigned __int64 v5;
  __int64 v6;
  char* v7;
  unsigned __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;

  if (a2 == 0) {
    return result;
  }
  v2 = (char*)result[18];
  v3 = (char*)result[19];
  v4 = v2;
  if (v2 == v3) {
    goto LABEL_18;
  }
  v5 = v3 - v2 - 8;
  v4 = (char*)result[18];
  if ((~(_BYTE)v5 & 0x18) != 0) {
    v6 = ((unsigned __int8)((unsigned int)v5 >> 3) + 1) & 3;
    v4 = (char*)result[18];
    while (*(_QWORD*)v4 != a2) {
      v4 += 8;
      if (--v6 == 0) {
        goto LABEL_7;
      }
    }
  LABEL_18:
    if (v4 != v3) {
      return result;
    }
    goto LABEL_19;
  }

LABEL_7:
  if (v5 >= 0x18) {
    v4 += 16;
    while (1) {
      if (*((_QWORD*)v4 - 2) == a2) {
        if (v4 - 16 != v3) {
          return result;
        }
        goto LABEL_19;
      }
      if (*((_QWORD*)v4 - 1) == a2) {
        v4 -= 8;
        goto LABEL_18;
      }
      if (*(_QWORD*)v4 == a2) {
        goto LABEL_18;
      }
      if (*((_QWORD*)v4 + 1) == a2) {
        break;
      }
      v7 = v4 + 16;
      v4 += 32;
      if (v7 == v3) {
        goto LABEL_19;
      }
    }
    if (v4 + 8 != v3) {
      return result;
    }
  }

LABEL_19:
  v8 = result[20];
  if ((unsigned __int64)v3 >= v8) {
    v10 = (char*)(v3 - v2);
    v11 = (v3 - v2) >> 3;
    v12 = v11 + 1;
    if ((unsigned __int64)(v11 + 1) >> 61 != 0) {
      GameRoutine_8875e0(result);
    }
    v13 = v8 - (_QWORD)v2;
    v14 = fw_memory_g_heap_manager_ptr;
    if (v13 >> 2 > v12) {
      v12 = v13 >> 2;
    }
    if ((unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFF8LL) {
      v15 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v15 = v12;
    }
    if (v15 != 0) {
      if (v15 >> 61 != 0) {
        GameRoutine_60a210();
      }
      v16 = result;
      v17 = a2;
      v18 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v15, 16, 0);
      a2 = v17;
    }
    else {
      v16 = result;
      v18 = 0;
    }
    v19 = v18 + 8 * v15;
    v20 = (__int64)&v10[v18 + -8 * v11];
    *(_QWORD*)&v10[v18] = a2;
    v9 = (__int64)&v10[v18 + 8];
    memcpy(v20, v2, v10);
    result = v16;
    v16[18] = v20;
    v16[19] = v9;
    v16[20] = v19;
    if (v2 != nullptr) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v21);
      result = v16;
    }
  }
  else {
    *(_QWORD*)v3 = a2;
    v9 = (__int64)(v3 + 8);
  }
  result[19] = v9;
  return result;
}

_QWORD* SpotMgr_1334360(_QWORD* result, __int64 a2)
{
  char* v2;
  char* v3;
  char* v4;
  unsigned __int64 v5;
  __int64 v6;
  char* v7;
  unsigned __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;

  if (a2 == 0) {
    return result;
  }
  v2 = (char*)result[21];
  v3 = (char*)result[22];
  v4 = v2;
  if (v2 == v3) {
    goto LABEL_18;
  }
  v5 = v3 - v2 - 8;
  v4 = (char*)result[21];
  if ((~(_BYTE)v5 & 0x18) != 0) {
    v6 = ((unsigned __int8)((unsigned int)v5 >> 3) + 1) & 3;
    v4 = (char*)result[21];
    while (*(_QWORD*)v4 != a2) {
      v4 += 8;
      if (--v6 == 0) {
        goto LABEL_7;
      }
    }
  LABEL_18:
    if (v4 != v3) {
      return result;
    }
    goto LABEL_19;
  }

LABEL_7:
  if (v5 >= 0x18) {
    v4 += 16;
    while (1) {
      if (*((_QWORD*)v4 - 2) == a2) {
        if (v4 - 16 != v3) {
          return result;
        }
        goto LABEL_19;
      }
      if (*((_QWORD*)v4 - 1) == a2) {
        v4 -= 8;
        goto LABEL_18;
      }
      if (*(_QWORD*)v4 == a2) {
        goto LABEL_18;
      }
      if (*((_QWORD*)v4 + 1) == a2) {
        break;
      }
      v7 = v4 + 16;
      v4 += 32;
      if (v7 == v3) {
        goto LABEL_19;
      }
    }
    if (v4 + 8 != v3) {
      return result;
    }
  }

LABEL_19:
  v8 = result[23];
  if ((unsigned __int64)v3 >= v8) {
    v10 = (char*)(v3 - v2);
    v11 = (v3 - v2) >> 3;
    v12 = v11 + 1;
    if ((unsigned __int64)(v11 + 1) >> 61 != 0) {
      GameRoutine_8875e0(result);
    }
    v13 = v8 - (_QWORD)v2;
    v14 = fw_memory_g_heap_manager_ptr;
    if (v13 >> 2 > v12) {
      v12 = v13 >> 2;
    }
    if ((unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFF8LL) {
      v15 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v15 = v12;
    }
    if (v15 != 0) {
      if (v15 >> 61 != 0) {
        GameRoutine_60a210();
      }
      v16 = result;
      v17 = a2;
      v18 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v15, 16, 0);
      a2 = v17;
    }
    else {
      v16 = result;
      v18 = 0;
    }
    v19 = v18 + 8 * v15;
    v20 = (__int64)&v10[v18 + -8 * v11];
    *(_QWORD*)&v10[v18] = a2;
    v9 = (__int64)&v10[v18 + 8];
    memcpy(v20, v2, v10);
    result = v16;
    v16[21] = v20;
    v16[22] = v9;
    v16[23] = v19;
    if (v2 != nullptr) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v21);
      result = v16;
    }
  }
  else {
    *(_QWORD*)v3 = a2;
    v9 = (__int64)(v3 + 8);
  }
  result[22] = v9;
  return result;
}

_QWORD* SpotMgr_1334560(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64* v4;
  char* v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  __int64 i;
  unsigned int* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64** v18;
  __int64* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  unsigned __int64 v27;
  char* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  char* v42;
  __int64* v43;
  __int64 v44;
  char* v45;
  char* v46;
  unsigned __int64 v47;
  __int64 v48;
  char* v49;
  signed __int64 v50;
  __int64 v51;
  __int64 v52;
  char* v53;
  char* v54;
  char* v55;
  unsigned __int64 v56;
  __int64 v57;
  char* v58;
  unsigned __int64 v59;
  char* v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  __int64* v64;
  char* v65;
  unsigned __int64 v66;
  __int64 v67;
  unsigned __int64 v68;
  char* v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  char* v76;
  unsigned __int64 v77;
  int v78;
  __int64* v79;
  __int64 v80;
  unsigned __int64 v81;
  _QWORD v82[4];
  _QWORD* v83;

  v1 = result[6];
  v2 = result[7];
  if (v1 == v2) {
    return result;
  }
  v3 = result;
  v4 = nullptr;
  v5 = nullptr;
  v6 = 0;
  v76 = nullptr;
  v77 = 0;
  v7 = nullptr;
  v74 = result[7];
  do {
    result = *(_QWORD**)v1;
    v8 = *(_QWORD*)(*(_QWORD*)v1 + 120LL);
    if (v8 != 0 && *(_WORD*)(v8 + 152) != 0) {
      v82[0] = GameData_202bd38;
      v83 = v82;
      v78 = ((__int64 (*)(void))game_gmap_TroopMgr_CountPlayerTroop_1349100)();
      result = v83;
      if (v83 == v82) {
        v9 = 32;
      }
      else {
        if (v83 == nullptr) {
          goto LABEL_12;
        }
        v9 = 40;
      }
      result = (_QWORD*)(*(__int64 (**)(void*))(*v83 + v9))(v83);
    LABEL_12:
      v75 = v1;
      v80 = *(unsigned __int16*)(v8 + 152);
      if (*(_WORD*)(v8 + 152) != 0) {
        for (i = 0; i != v80; ++i) {
          v11 = *(unsigned int**)(*(_QWORD*)(v8 + 160) + 16 * i + 8);
          if (v11 == nullptr) {
            goto LABEL_40;
          }
          v12 = *(_QWORD**)(GameData_21c9700 + 8);
          v13 = v12[2];
          if (v13 == 0 || v12[4] == 0) {
            goto LABEL_40;
          }
          v15 = *v11;
          v16 = v13 - 1;
          if ((v13 & (v13 - 1)) != 0) {
            v17 = v15;
            if (v13 <= v15) {
              v17 = (unsigned int)v15 % (unsigned int)v13;
            }
          }
          else {
            v17 = ((_DWORD)v13 - 1) & (unsigned int)v15;
          }
          v18 = *(__int64***)(v12[1] + 8 * v17);
          if (v18 == nullptr || (v19 = *v18) == nullptr) {
          LABEL_40:
            v21 = 0;
            goto LABEL_41;
          }
          if ((v13 & v16) == 0) {
            while (1) {
              v22 = v19[1];
              if (v22 == v15) {
                if (*((_DWORD*)v19 + 4) == (_DWORD)v15) {
                  goto LABEL_75;
                }
              }
              else if ((v22 & v16) != v17) {
                goto LABEL_40;
              }
              v19 = (__int64*)*v19;
              v21 = 0;
              if (v19 == nullptr) {
                goto LABEL_41;
              }
            }
          }
          while (1) {
            v20 = v19[1];
            if (v20 == v15) {
              break;
            }
            if (v20 >= v13) {
              v20 %= v13;
            }
            if (v20 != v17) {
              goto LABEL_40;
            }
          LABEL_30:
            v19 = (__int64*)*v19;
            if (v19 == nullptr) {
              goto LABEL_40;
            }
          }
          if (*((_DWORD*)v19 + 4) != (_DWORD)v15) {
            goto LABEL_30;
          }
        LABEL_75:
          v21 = v19[3];
        LABEL_41:
          v82[0] = GameData_202bdb8;
          v83 = v82;
          v23 = game_gmap_TroopMgr_CountPlayerTroop_1349100(v21, v82);
          result = v83;
          if (v83 == v82) {
            v24 = 32;
          LABEL_45:
            result = (_QWORD*)(*(__int64 (**)(void*))(*v83 + v24))(v83);
          }
          else if (v83 != nullptr) {
            v24 = 40;
            goto LABEL_45;
          }
          if (v23 != 0 || v78 >= 1) {
            if ((unsigned __int64)v5 < v6) {
              *(_QWORD*)v5 = v21;
              v5 += 8;
              continue;
            }
            v25 = (char*)(v5 - (char*)v4);
            v26 = (v5 - (char*)v4) >> 3;
            v27 = v26 + 1;
            if ((unsigned __int64)(v26 + 1) >> 61 == 0) {
              v28 = v7;
              if ((__int64)(v6 - (_QWORD)v4) >> 2 > v27) {
                v27 = (__int64)(v6 - (_QWORD)v4) >> 2;
              }
              if (v6 - (unsigned __int64)v4 >= 0x7FFFFFFFFFFFFFF8LL) {
                v29 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v29 = v27;
              }
              if (v29 != 0) {
                if (v29 >> 61 != 0) {
                  goto LABEL_161;
                }
                v30 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v29, 16, 0);
              }
              else {
                v30 = 0;
              }
              v6 = v30 + 8 * v29;
              v31 = (__int64)&v25[v30 + -8 * v26];
              *(_QWORD*)&v25[v30] = v21;
              v32 = (__int64)&v25[v30 + 8];
              result = (_QWORD*)memcpy(v31, v4, v25);
              if (v4 != nullptr) {
                v33 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v33 = 56;
                }
                result = (_QWORD*)nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v33);
              }
              v4 = (__int64*)v31;
              v7 = v28;
              v5 = (char*)v32;
              continue;
            }
          LABEL_160:
            GameRoutine_8875e0(result);
          }
          if ((unsigned __int64)v7 < v77) {
            *(_QWORD*)v7 = v21;
            v7 += 8;
            continue;
          }
          v34 = (char*)(v7 - v76);
          v35 = (v7 - v76) >> 3;
          v36 = v35 + 1;
          if ((unsigned __int64)(v35 + 1) >> 61 != 0) {
            goto LABEL_160;
          }
          if ((__int64)(v77 - (_QWORD)v76) >> 2 > v36) {
            v36 = (__int64)(v77 - (_QWORD)v76) >> 2;
          }
          if (v77 - (unsigned __int64)v76 >= 0x7FFFFFFFFFFFFFF8LL) {
            v37 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v37 = v36;
          }
          if (v37 != 0) {
            if (v37 >> 61 != 0) {
              goto LABEL_161;
            }
            v38 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v37, 16, 0);
          }
          else {
            v38 = 0;
          }
          v39 = v38 + 8 * v37;
          *(_QWORD*)&v34[v38] = v21;
          v7 = &v34[v38 + 8];
          v40 = (__int64)&v34[v38 + -8 * v35];
          v77 = v39;
          result = (_QWORD*)memcpy(v40, v76, v34);
          if (v76 != nullptr) {
            v41 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v41 = 56;
            }
            result = (_QWORD*)nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v41);
          }
          v76 = (char*)v40;
        }
      }
      v79 = (__int64*)v5;
      v81 = v6;
      v42 = v76;
      if (v76 != v7) {
        while (1) {
          v52 = *(_QWORD*)v42;
          if (*(_BYTE*)(*(_QWORD*)v42 + 176LL) == 1) {
            goto LABEL_114;
          }
          v53 = (char*)v3[21];
          v54 = (char*)v3[22];
          v55 = v53;
          if (v53 == v54) {
            goto LABEL_132;
          }
          v56 = v54 - v53 - 8;
          v55 = (char*)v3[21];
          if ((~(_BYTE)v56 & 0x18) != 0) {
            break;
          }
        LABEL_121:
          if (v56 < 0x18) {
            goto LABEL_133;
          }
          v55 += 16;
          while (1) {
            if (*((_QWORD*)v55 - 2) == v52) {
              if (v55 - 16 == v54) {
                goto LABEL_133;
              }
              goto LABEL_114;
            }
            if (*((_QWORD*)v55 - 1) == v52) {
              v55 -= 8;
              goto LABEL_132;
            }
            if (*(_QWORD*)v55 == v52) {
              goto LABEL_132;
            }
            if (*((_QWORD*)v55 + 1) == v52) {
              break;
            }
            v58 = v55 + 16;
            v55 += 32;
            if (v58 == v54) {
              goto LABEL_133;
            }
          }
          if (v55 + 8 != v54) {
            goto LABEL_114;
          }
        LABEL_133:
          v59 = v3[23];
          if ((unsigned __int64)v54 < v59) {
            *(_QWORD*)v54 = v52;
            v51 = (__int64)(v54 + 8);
            goto LABEL_113;
          }
          v60 = (char*)(v54 - v53);
          v61 = (v54 - v53) >> 3;
          v62 = v61 + 1;
          if ((unsigned __int64)(v61 + 1) >> 61 != 0) {
            goto LABEL_160;
          }
          v63 = v59 - (_QWORD)v53;
          v64 = v4;
          v65 = v7;
          if (v63 >> 2 > v62) {
            v62 = v63 >> 2;
          }
          if ((unsigned __int64)v63 >= 0x7FFFFFFFFFFFFFF8LL) {
            v66 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v66 = v62;
          }
          if (v66 != 0) {
            if (v66 >> 61 == 0) {
              v67 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v66, 16, 0);
              goto LABEL_144;
            }
          LABEL_161:
            GameRoutine_60a210();
          }
          v67 = 0;
        LABEL_144:
          v68 = v67 + 8 * v66;
          v69 = (char*)(v54 - v53);
          v70 = (__int64)&v60[v67 + -8 * v61];
          *(_QWORD*)&v60[v67] = v52;
          v51 = (__int64)&v60[v67 + 8];
          result = (_QWORD*)memcpy(v70, v53, v69);
          v3[21] = v70;
          v3[22] = v51;
          v3[23] = v68;
          if (v53 != nullptr) {
            v71 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v71 = 56;
            }
            result = (_QWORD*)nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v71);
          }
          v7 = v65;
          v4 = v64;
          v6 = v81;
        LABEL_113:
          v3[22] = v51;
        LABEL_114:
          v42 += 8;
          if (v42 == v7) {
            goto LABEL_83;
          }
        }
        v57 = ((unsigned __int8)((unsigned int)v56 >> 3) + 1) & 3;
        v55 = (char*)v3[21];
        while (*(_QWORD*)v55 != v52) {
          v55 += 8;
          if (--v57 == 0) {
            goto LABEL_121;
          }
        }
      LABEL_132:
        if (v55 == v54) {
          goto LABEL_133;
        }
        goto LABEL_114;
      }
    LABEL_83:
      v5 = (char*)v79;
      v2 = v74;
      v43 = v4;
      if (v4 == v79) {
      LABEL_3:
        v1 = v75;
        goto LABEL_4;
      }
      while (1) {
        v44 = *v43;
        if (*(_BYTE*)(*v43 + 176) != 3 && (*(_BYTE*)(v44 + 112) & 1) == 0 &&
            (v3[26] & 1) == 0) {
          result = SpotMgr_1334160(v3, *v43);
        }
        v46 = (char*)v3[21];
        v45 = (char*)v3[22];
        if (v46 != v45) {
          v47 = v45 - v46 - 8;
          if ((~(_BYTE)v47 & 0x18) == 0) {
          LABEL_96:
            if (v47 >= 0x18) {
              v46 += 16;
              while (1) {
                if (*((_QWORD*)v46 - 2) == v44) {
                  v46 -= 16;
                  if (v46 != v45) {
                    goto LABEL_108;
                  }
                  goto LABEL_86;
                }
                if (*((_QWORD*)v46 - 1) == v44) {
                  v46 -= 8;
                  goto LABEL_107;
                }
                if (*(_QWORD*)v46 == v44) {
                  goto LABEL_107;
                }
                if (*((_QWORD*)v46 + 1) == v44) {
                  break;
                }
                v49 = v46 + 16;
                v46 += 32;
                if (v49 == v45) {
                  goto LABEL_86;
                }
              }
              v46 += 8;
              if (v46 != v45) {
                goto LABEL_108;
              }
            }
            goto LABEL_86;
          }
          v48 = ((unsigned __int8)((unsigned int)v47 >> 3) + 1) & 3;
          while (*(_QWORD*)v46 != v44) {
            v46 += 8;
            if (--v48 == 0) {
              goto LABEL_96;
            }
          }
        }
      LABEL_107:
        if (v46 != v45) {
        LABEL_108:
          v50 = v45 - (v46 + 8);
          if (v45 != v46 + 8) {
            result = (_QWORD*)memmove(v46, v46 + 8, v45 - (v46 + 8));
          }
          v3[22] = &v46[v50];
        }
      LABEL_86:
        if (++v43 == v79) {
          goto LABEL_3;
        }
      }
    }
  LABEL_4:
    v1 += 8;
  } while (v1 != v2);
  if (v76 != nullptr) {
    v72 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v72 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v72);
  }
  if (v4 != nullptr) {
    v73 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v73 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v73);
  }
  return result;
}

_QWORD* SpotMgr_1334d40(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  unsigned int* v5;
  unsigned __int64 v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64** v11;
  __int64* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;

  v1 = result[15];
  if (v1 != 0) {
    v2 = *(unsigned __int16*)(v1 + 168);
    if (*(_WORD*)(v1 + 168) != 0) {
      v3 = 0;
      v4 = GameData_212c780;
      do {
        v5 = *(unsigned int**)(*(_QWORD*)(v1 + 176) + 16 * v3 + 8);
        if (v5 != nullptr) {
          result = *(_QWORD**)(*v4 + 8);
          v6 = result[2];
          if (v6 != 0 && result[4] != 0) {
            v8 = *v5;
            v9 = v6 - 1;
            if ((v6 & (v6 - 1)) != 0) {
              v10 = v8;
              if (v6 <= v8) {
                v10 = (unsigned int)v8 % (unsigned int)v6;
              }
            }
            else {
              v10 = ((_DWORD)v6 - 1) & (unsigned int)v8;
            }
            v11 = *(__int64***)(result[1] + 8 * v10);
            if (v11 != nullptr) {
              v12 = *v11;
              if (v12 != nullptr) {
                if ((v6 & v9) == 0) {
                  while (1) {
                    v14 = v12[1];
                    if (v14 == v8) {
                      if (*((_DWORD*)v12 + 4) == (_DWORD)v8) {
                        goto LABEL_30;
                      }
                    }
                    else if ((v14 & v9) != v10) {
                      goto LABEL_4;
                    }
                    v12 = (__int64*)*v12;
                    if (v12 == nullptr) {
                      goto LABEL_4;
                    }
                  }
                }
                do {
                  v13 = v12[1];
                  if (v13 == v8) {
                    if (*((_DWORD*)v12 + 4) == (_DWORD)v8) {
                    LABEL_30:
                      v15 = v12[3];
                      if (v15 != 0 && *(_BYTE*)(v15 + 176) == 1 &&
                          (*(_BYTE*)(v15 + 112) & 1) == 0) {
                        result = SpotMgr_1334160(result, v15);
                      }
                      break;
                    }
                  }
                  else {
                    if (v13 >= v6) {
                      v13 %= v6;
                    }
                    if (v13 != v10) {
                      break;
                    }
                  }
                  v12 = (__int64*)*v12;
                } while (v12 != nullptr);
              }
            }
          }
        }
      LABEL_4:
        ++v3;
      } while (v3 != v2);
    }
  }
  return result;
}

void SpotMgr_1335280(char a1)
{
  __int64 v2;
  char** v3;
  char** v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  bool v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v17;
  unsigned __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  _QWORD* v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v29;
  unsigned __int64 v30;
  _QWORD* v31;
  _QWORD* v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v41;
  unsigned __int64 v42;
  _QWORD* v43;
  _QWORD* v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  _QWORD* v48;
  __int64 v49;
  _QWORD* v50;
  __int64 v51;
  __int64 v52;
  __int64* i;
  __int64* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  _QWORD* v59;
  _QWORD* v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64 v63;
  char** v64;
  char** v65;
  bool v66;
  char* v67;
  __int64 v68;
  __int64 v69;
  __int64* v70;
  __int64 v71;
  __int64 v72;
  bool v74;
  __int64 v75;
  void* v76;

  v2 = *(_QWORD*)(*GameData_212c780 + 8);
  v3 = *(char***)(v2 + 48);
  v4 = *(char***)(v2 + 56);
  while (v3 != v4) {
    v5 = *v3;
    v6 = *((_QWORD*)*v3 + 15);
    (*v3)[112] = 0;
    if (v6 != 0) {
      GameRoutine_1329500((__int64)&v75, v5, 0, a1 & 1);
    }
    ++v3;
  }
  v76 = &GameData_1abbb2b;
  v75 = game_HashString(&GameData_1abbb2b);
  if (game_GameModeData_instance_ != 0) {
    v7 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v75);
    if (v7 != 0 && *(_DWORD*)(v7 + 32) != 0) {
      v8 = game_HashString(&GameData_1abbb2b);
      if (v8 != 0) {
        v9 = *(_QWORD*)(GameData_21c9e28 + 96);
        v10 = v9 == 0 || *(_QWORD*)(GameData_21c9e28 + 112) == 0;
        if (!v10) {
          v11 = v9 - 1;
          if ((v9 & (v9 - 1)) != 0) {
            v12 = v8;
            if (v8 >= v9) {
              v12 = v8 % v9;
            }
          }
          else {
            v12 = v11 & v8;
          }
          v59 = *(_QWORD**)(*(_QWORD*)(GameData_21c9e28 + 88) + 8 * v12);
          if (v59 != nullptr) {
            v60 = (_QWORD*)*v59;
            if (v60 != nullptr) {
              if ((v9 & v11) == 0) {
                while (1) {
                  v62 = v60[1];
                  if (v62 == v8) {
                    if (v60[2] == v8) {
                      goto LABEL_136;
                    }
                  }
                  else if ((v62 & v11) != v12) {
                    return;
                  }
                  v60 = (_QWORD*)*v60;
                  if (v60 == nullptr) {
                    return;
                  }
                }
              }
              while (1) {
                v61 = v60[1];
                if (v61 == v8) {
                  if (v60[2] == v8) {
                  LABEL_136:
                    v63 = v60[3];
                    if (v63 != 0) {
                      v64 = *(char***)(v2 + 48);
                      v65 = *(char***)(v2 + 56);
                      while (v64 != v65) {
                        v67 = *v64;
                        v68 = *((_QWORD*)*v64 + 15);
                        if (v68 != 0) {
                          if (*(_WORD*)(v63 + 32) != 0) {
                            v69 = *(unsigned __int16*)(v63 + 32) - 1LL;
                            v70 = (__int64*)(*(_QWORD*)(v63 + 40) + 8LL);
                            do {
                              v72 = *v70;
                              v70 += 2;
                              v71 = v72;
                              v74 = v69-- != 0;
                              v10 = v71 == v68;
                              v66 = v71 != v68;
                            } while (!v10 && v74);
                          }
                          else {
                            v66 = true;
                          }
                          v67[112] = v66;
                          GameRoutine_1329500((__int64)&v75, v67, 0, a1 & 1);
                        }
                        ++v64;
                      }
                    }
                    return;
                  }
                }
                else {
                  if (v61 >= v9) {
                    v61 %= v9;
                  }
                  if (v61 != v12) {
                    return;
                  }
                }
                v60 = (_QWORD*)*v60;
                if (v60 == nullptr) {
                  return;
                }
              }
            }
          }
        }
      }
      return;
    }
  }
  v76 = &GameData_1ad7ce3;
  v75 = game_HashString(&GameData_1ad7ce3);
  if (game_GameModeData_instance_ != 0) {
    v13 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v75);
    if (v13 != 0 && *(_DWORD*)(v13 + 32) != 0) {
      return;
    }
  }
  v14 = game_HashString(&GameData_1a86d15);
  if (v14 == 0) {
    goto LABEL_44;
  }
  v15 = *(_QWORD*)(GameData_21c9ef0 + 96);
  if (v15 == 0 || *(_QWORD*)(GameData_21c9ef0 + 112) == 0) {
    goto LABEL_44;
  }
  v17 = v15 - 1;
  if ((v15 & (v15 - 1)) != 0) {
    v18 = v14;
    if (v14 >= v15) {
      v18 = v14 % v15;
    }
  }
  else {
    v18 = v17 & v14;
  }
  v19 = *(_QWORD**)(*(_QWORD*)(GameData_21c9ef0 + 88) + 8 * v18);
  if (v19 == nullptr || (v20 = (_QWORD*)*v19) == nullptr) {
  LABEL_44:
    v22 = 0;
    goto LABEL_45;
  }
  if ((v15 & v17) == 0) {
    while (1) {
      v23 = v20[1];
      if (v23 == v14) {
        if (v20[2] == v14) {
          goto LABEL_133;
        }
      }
      else if ((v23 & v17) != v18) {
        goto LABEL_44;
      }
      v20 = (_QWORD*)*v20;
      v22 = 0;
      if (v20 == nullptr) {
        goto LABEL_45;
      }
    }
  }
  while (1) {
    v21 = v20[1];
    if (v21 == v14) {
      break;
    }
    if (v21 >= v15) {
      v21 %= v15;
    }
    if (v21 != v18) {
      goto LABEL_44;
    }
  LABEL_34:
    v20 = (_QWORD*)*v20;
    if (v20 == nullptr) {
      goto LABEL_44;
    }
  }
  if (v20[2] != v14) {
    goto LABEL_34;
  }

LABEL_133:
  v22 = v20[3];

LABEL_45:
  v24 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v25 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
  *v25 = v22;
  v26 = game_HashString(&GameData_1aad978);
  if (v26 == 0) {
    goto LABEL_69;
  }
  v27 = *(_QWORD*)(GameData_21c9ef0 + 96);
  if (v27 == 0 || *(_QWORD*)(GameData_21c9ef0 + 112) == 0) {
    goto LABEL_69;
  }
  v29 = v27 - 1;
  if ((v27 & (v27 - 1)) != 0) {
    v30 = v26;
    if (v26 >= v27) {
      v30 = v26 % v27;
    }
  }
  else {
    v30 = v29 & v26;
  }
  v31 = *(_QWORD**)(*(_QWORD*)(GameData_21c9ef0 + 88) + 8 * v30);
  if (v31 == nullptr || (v32 = (_QWORD*)*v31) == nullptr) {
  LABEL_69:
    v34 = 0;
    goto LABEL_70;
  }
  if ((v27 & v29) == 0) {
    while (1) {
      v35 = v32[1];
      if (v35 == v26) {
        if (v32[2] == v26) {
          goto LABEL_134;
        }
      }
      else if ((v35 & v29) != v30) {
        goto LABEL_69;
      }
      v32 = (_QWORD*)*v32;
      v34 = 0;
      if (v32 == nullptr) {
        goto LABEL_70;
      }
    }
  }
  while (2) {
    v33 = v32[1];
    if (v33 != v26) {
      if (v33 >= v27) {
        v33 %= v27;
      }
      if (v33 != v30) {
        goto LABEL_69;
      }
    }
    else if (v32[2] == v26) {
      break;
    }
    v32 = (_QWORD*)*v32;
    if (v32 == nullptr) {
      goto LABEL_69;
    }
    continue;
  }

LABEL_134:
  v34 = v32[3];

LABEL_70:
  v36 = (_QWORD*)fw_memory_HeapManager_Allocate(*v24, 16, 16, 0);
  *v36 = *v25;
  v36[1] = v34;
  v37 = 128;
  if (*(_QWORD*)(*v24 + 200LL) == 0) {
    v37 = 56;
  }
  nn_mem_StandardAllocator_Free(*v24 + v37);
  v38 = game_HashString(&GameData_1aa9d24);
  if (v38 == 0) {
    goto LABEL_96;
  }
  v39 = *(_QWORD*)(GameData_21c9ef0 + 96);
  if (v39 == 0 || *(_QWORD*)(GameData_21c9ef0 + 112) == 0) {
    goto LABEL_96;
  }
  v41 = v39 - 1;
  if ((v39 & (v39 - 1)) != 0) {
    v42 = v38;
    if (v38 >= v39) {
      v42 = v38 % v39;
    }
  }
  else {
    v42 = v41 & v38;
  }
  v43 = *(_QWORD**)(*(_QWORD*)(GameData_21c9ef0 + 88) + 8 * v42);
  if (v43 == nullptr || (v44 = (_QWORD*)*v43) == nullptr) {
  LABEL_96:
    v46 = 0;
    goto LABEL_97;
  }
  if ((v39 & v41) == 0) {
    while (1) {
      v47 = v44[1];
      if (v47 == v38) {
        if (v44[2] == v38) {
          goto LABEL_135;
        }
      }
      else if ((v47 & v41) != v42) {
        goto LABEL_96;
      }
      v44 = (_QWORD*)*v44;
      v46 = 0;
      if (v44 == nullptr) {
        goto LABEL_97;
      }
    }
  }
  while (2) {
    v45 = v44[1];
    if (v45 != v38) {
      if (v45 >= v39) {
        v45 %= v39;
      }
      if (v45 != v42) {
        goto LABEL_96;
      }
    }
    else if (v44[2] == v38) {
      break;
    }
    v44 = (_QWORD*)*v44;
    if (v44 == nullptr) {
      goto LABEL_96;
    }
    continue;
  }

LABEL_135:
  v46 = v44[3];

LABEL_97:
  v48 = (_QWORD*)fw_memory_HeapManager_Allocate(*v24, 32, 16, 0);
  v49 = v36[1];
  v50 = v48;
  *v48 = *v36;
  v51 = *v24;
  v48[1] = v49;
  v48[2] = v46;
  v52 = 128;
  if (*(_QWORD*)(v51 + 200) == 0) {
    v52 = 56;
  }
  nn_mem_StandardAllocator_Free(v51 + v52);
  v54 = *(__int64**)(v2 + 48);
  for (i = *(__int64**)(v2 + 56); v54 != i; ++v54) {
    v55 = *v54;
    if ((*(_BYTE*)(*v54 + 113) & 1) != 0 || (*(_BYTE*)(v55 + 114) & 1) == 0) {
      v56 = (unsigned __int8)GameRoutine_13261c0(*v54) == 4
                ? 0LL
                : *(_QWORD*)(v55 + 136);
      if (*v50 != v56 && v50[1] != v56 && v50[2] != v56) {
        continue;
      }
    }
    v57 = *(_QWORD*)(v55 + 120);
    *(_BYTE*)(v55 + 112) = 1;
    if (v57 != 0) {
      GameRoutine_1329500((__int64)&v75, (char*)v55, 0, a1 & 1);
    }
  }
  v58 = 128;
  if (*(_QWORD*)(*v24 + 200LL) == 0) {
    v58 = 56;
  }
  nn_mem_StandardAllocator_Free(*v24 + v58);
}

__int64 SpotMgr_1335920()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  __int64** v5;
  __int64** v6;
  __int64* v7;
  __int64* v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int* v17;
  _QWORD* v18;
  unsigned __int64 v19;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64** v24;
  __int64* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned int* v29;
  _QWORD* v30;
  unsigned __int64 v31;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64** v36;
  __int64* v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v43;
  __int64* v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  char* v50;
  unsigned __int64 v51;
  char* v52;
  __int64 v53;
  char* v54;
  __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  char* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64* v72;
  char v73;
  __int64 v74;
  __int64 v75;
  __int64* v76;
  _QWORD v77[2];

  v0 = GameData_212c780;
  if ((*(_BYTE*)(*(_QWORD*)(*GameData_212c780 + 8) + 208LL) & 1) == 0) {
    v77[1] = &GameData_1ade186;
    v1 = game_HashString(&GameData_1ade186);
    v77[0] = v1;
    if (game_GameModeData_instance_ != 0) {
      v1 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v77);
      if (v1 != 0 && *(int*)(v1 + 32) >= 1) {
        v2 = *(_QWORD*)TroopMgr_1345be0();
        if (v2 == 0) {
          goto LABEL_99;
        }
      LABEL_19:
        if (*(_QWORD*)(v2 + 120) != 0 &&
            (game_GameModeData_instance_ == 0 ||
             (*(_BYTE*)(game_GameModeData_instance_ + 92) & 0x10) == 0)) {
          if ((unsigned __int8)GameRoutine_13261c0(v2) != 4) {
            v14 = *(_QWORD*)(v2 + 120);
            v15 = *(unsigned __int16*)(v14 + 136);
            if (*(_WORD*)(v14 + 136) == 0) {
              goto LABEL_99;
            }
            v16 = 0;
            v13 = 0;
            do {
              v17 = *(unsigned int**)(*(_QWORD*)(v14 + 144) + 16 * v16 + 8);
              if (v17 != nullptr) {
                v18 = *(_QWORD**)(*v0 + 8);
                v19 = v18[2];
                if (v19 != 0 && v18[4] != 0) {
                  v21 = *v17;
                  v22 = v19 - 1;
                  if ((v19 & (v19 - 1)) != 0) {
                    v23 = v21;
                    if (v19 <= v21) {
                      v23 = (unsigned int)v21 % (unsigned int)v19;
                    }
                  }
                  else {
                    v23 = ((_DWORD)v19 - 1) & (unsigned int)v21;
                  }
                  v24 = *(__int64***)(v18[1] + 8 * v23);
                  if (v24 != nullptr) {
                    v25 = *v24;
                    if (v25 != nullptr) {
                      if ((v19 & v22) == 0) {
                        while (1) {
                          v27 = v25[1];
                          if (v27 == v21) {
                            if (*((_DWORD*)v25 + 4) == (_DWORD)v21) {
                              goto LABEL_59;
                            }
                          }
                          else if ((v27 & v22) != v23) {
                            goto LABEL_33;
                          }
                          v25 = (__int64*)*v25;
                          if (v25 == nullptr) {
                            goto LABEL_33;
                          }
                        }
                      }
                      do {
                        v26 = v25[1];
                        if (v26 == v21) {
                          if (*((_DWORD*)v25 + 4) == (_DWORD)v21) {
                          LABEL_59:
                            v28 = v25[3];
                            if (v28 != 0 && *(_BYTE*)(v28 + 176) == 1 &&
                                (*(_BYTE*)(v28 + 112) & 1) == 0) {
                              GameRoutine_1326c00(v25[3], 3);
                              v13 = 1;
                              if (*(_QWORD*)(v28 + 120) != 0) {
                                GameRoutine_1329500((__int64)v77, (char*)v28, 1,
                                                    1);
                              }
                            }
                            break;
                          }
                        }
                        else {
                          if (v26 >= v19) {
                            v26 %= v19;
                          }
                          if (v26 != v23) {
                            break;
                          }
                        }
                        v25 = (__int64*)*v25;
                      } while (v25 != nullptr);
                    }
                  }
                }
              }
            LABEL_33:
              ++v16;
            } while (v16 != v15);
          LABEL_97:
            if ((v13 & 1) != 0) {
              return 1;
            }
            goto LABEL_99;
          }
          if ((unsigned __int8)GameRoutine_13261c0(v2) != 4 ||
              (*(_BYTE*)(v2 + 178) & 2) != 0) {
            v10 = GameRoutine_1326420(v2);
            if (v10 != 0) {
              v11 = *(unsigned __int16*)(v10 + 32);
              if (*(_WORD*)(v10 + 32) != 0) {
                v12 = 0;
                v13 = 0;
                do {
                  v29 = *(unsigned int**)(*(_QWORD*)(v10 + 40) + 16 * v12 + 8);
                  if (v29 != nullptr) {
                    v30 = *(_QWORD**)(*v0 + 8);
                    v31 = v30[2];
                    if (v31 != 0 && v30[4] != 0) {
                      v33 = *v29;
                      v34 = v31 - 1;
                      if ((v31 & (v31 - 1)) != 0) {
                        v35 = v33;
                        if (v31 <= v33) {
                          v35 = (unsigned int)v33 % (unsigned int)v31;
                        }
                      }
                      else {
                        v35 = ((_DWORD)v31 - 1) & (unsigned int)v33;
                      }
                      v36 = *(__int64***)(v30[1] + 8 * v35);
                      if (v36 != nullptr) {
                        v37 = *v36;
                        if (v37 != nullptr) {
                          if ((v31 & v34) == 0) {
                            while (1) {
                              v39 = v37[1];
                              if (v39 == v33) {
                                if (*((_DWORD*)v37 + 4) == (_DWORD)v33) {
                                  goto LABEL_92;
                                }
                              }
                              else if ((v39 & v34) != v35) {
                                goto LABEL_66;
                              }
                              v37 = (__int64*)*v37;
                              if (v37 == nullptr) {
                                goto LABEL_66;
                              }
                            }
                          }
                          do {
                            v38 = v37[1];
                            if (v38 == v33) {
                              if (*((_DWORD*)v37 + 4) == (_DWORD)v33) {
                              LABEL_92:
                                v40 = v37[3];
                                if (v40 != 0 && *(_BYTE*)(v40 + 176) == 1 &&
                                    (*(_BYTE*)(v40 + 112) & 1) == 0) {
                                  v41 = v10;
                                  GameRoutine_1326c00(v37[3], 3);
                                  v13 = 1;
                                  if (*(_QWORD*)(v40 + 120) != 0) {
                                    GameRoutine_1329500((__int64)v77,
                                                        (char*)v40, 1, 1);
                                  }
                                  v10 = v41;
                                }
                                break;
                              }
                            }
                            else {
                              if (v38 >= v31) {
                                v38 %= v31;
                              }
                              if (v38 != v35) {
                                break;
                              }
                            }
                            v37 = (__int64*)*v37;
                          } while (v37 != nullptr);
                        }
                      }
                    }
                  }
                LABEL_66:
                  ++v12;
                } while (v12 != v11);
                goto LABEL_97;
              }
            }
          }
        }
      LABEL_99:
        v43 = *(_QWORD*)(*v0 + 8);
        v45 = *(__int64**)(v43 + 72);
        v44 = *(__int64**)(v43 + 80);
        if (v45 != v44) {
          v76 = *(__int64**)(v43 + 80);
          while (1) {
            v46 = *v45;
            if (*(_BYTE*)(*v45 + 176) == 3 && (*(_BYTE*)(v46 + 112) & 1) == 0) {
              v47 = *(_QWORD*)(v46 + 120);
              if (v47 != 0 && *(_WORD*)(v47 + 184) != 0) {
                v48 = 8;
                v49 = 0;
                v50 = nullptr;
                v51 = 0;
                v52 = nullptr;
                do {
                  v53 = *(_QWORD*)(*(_QWORD*)(v47 + 192) + v48);
                  if ((unsigned __int64)v50 < v49) {
                    *(_QWORD*)v50 = v53;
                    v50 += 8;
                  }
                  else {
                    v54 = (char*)(v50 - v52);
                    v55 = (v50 - v52) >> 3;
                    v56 = v55 + 1;
                    if ((unsigned __int64)(v55 + 1) >> 61 != 0) {
                      GameRoutine_892740();
                    }
                    if ((__int64)(v49 - (_QWORD)v52) >> 2 > v56) {
                      v56 = (__int64)(v49 - (_QWORD)v52) >> 2;
                    }
                    if (v49 - (unsigned __int64)v52 >= 0x7FFFFFFFFFFFFFF8LL) {
                      v57 = 0x1FFFFFFFFFFFFFFFLL;
                    }
                    else {
                      v57 = v56;
                    }
                    if (v57 != 0) {
                      if (v57 >> 61 != 0) {
                        GameRoutine_60a210();
                      }
                      v58 = fw_memory_HeapManager_Allocate(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v57, 16,
                          0);
                    }
                    else {
                      v58 = 0;
                    }
                    v49 = v58 + 8 * v57;
                    v59 = (char*)(v50 - v52);
                    v60 = (__int64)&v54[v58 + -8 * v55];
                    *(_QWORD*)&v54[v58] = v53;
                    v50 = &v54[v58 + 8];
                    memcpy(v60, v52, v59);
                    if (v52 != nullptr) {
                      v61 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v61 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v61);
                    }
                    v52 = (char*)v60;
                  }
                  ++v51;
                  v48 += 16;
                } while (v51 < *(unsigned __int16*)(v47 + 184));
                if (v50 == v52) {
                LABEL_144:
                  v73 = 0;
                }
                else {
                  v62 = 0;
                  v63 = game_GameModeData_instance_;
                  v64 = GameData_212c780;
                  while (1) {
                    if (v63 != 0) {
                      v66 = game_GameVariableTable_Find(
                          *(_QWORD*)(v63 + 48),
                          *(_QWORD*)(*(_QWORD*)(v47 + 24) + 72LL) +
                              16LL * (int)v62);
                      v63 = game_GameModeData_instance_;
                      if (v66 != 0 && *(_DWORD*)(v66 + 32) != 0) {
                        v68 = *(_QWORD*)(*v64 + 8);
                        v69 = **(unsigned int**)&v52[8 * v62];
                        v70 = *(_QWORD*)(v68 + 16);
                        if ((v70 & (v70 - 1)) != 0) {
                          v71 = **(unsigned int**)&v52[8 * v62];
                          if (v70 <= v69) {
                            v71 = (unsigned int)v69 % (unsigned int)v70;
                          }
                          v72 = *(__int64**)(*(_QWORD*)(v68 + 8) + 8 * v71);
                          do {
                            do {
                              v72 = (__int64*)*v72;
                            } while (v72[1] != v69);
                          } while (*((_DWORD*)v72 + 4) != (_DWORD)v69);
                        }
                        else {
                          v72 = *(__int64**)(*(_QWORD*)(v68 + 8) +
                                             8LL * (((_DWORD)v70 - 1) &
                                                    (unsigned int)v69));
                          do {
                            do {
                              v72 = (__int64*)*v72;
                            } while (v72[1] != v69);
                          } while (*((_DWORD*)v72 + 4) != (_DWORD)v69);
                        }
                        v65 = v72[3];
                        if (*(_BYTE*)(v65 + 176) == 1) {
                          break;
                        }
                      }
                    }
                    if (++v62 == (v50 - v52) >> 3) {
                      goto LABEL_144;
                    }
                  }
                  v75 = *(_QWORD*)(v65 + 120);
                  if (v75 != 0) {
                    if ((*(_WORD*)(v75 + 258) & 0x80) == 0) {
                      *(_BYTE*)(v65 + 176) = 3;
                      if (*(_QWORD*)GameRoutine_ae07e0(v75, v67) != 0) {
                        game_VariableManager_SetFlag();
                      }
                    }
                    v73 = 1;
                    if (*(_QWORD*)(v65 + 120) != 0) {
                      GameRoutine_1329500((__int64)v77, (char*)v65, 1, 0);
                    }
                  }
                  else {
                    v73 = 1;
                    *(_BYTE*)(v65 + 176) = 3;
                  }
                }
                if (v52 != nullptr) {
                  v74 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v74 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v74);
                  v44 = v76;
                  if ((v73 & 1) != 0) {
                    return 1;
                  }
                }
                else {
                  v44 = v76;
                  if ((v73 & 1) != 0) {
                    return 1;
                  }
                }
              }
            }
            if (++v45 == v44) {
              return 0;
            }
          }
        }
        return 0;
      }
    }
    v3 = *(_QWORD*)(*GameData_212c790 + 8);
    v4 = *(_DWORD*)(v3 + 56);
    v5 = *(__int64***)(v3 + 8);
    v6 = *(__int64***)(v3 + 16);
    if (v4 < 0) {
      if (v5 != v6) {
        while (1) {
          v7 = *v5;
          if ((*v5)[12] == 0 && v7[69] == 0) {
            break;
          }
          if (++v5 == v6) {
            goto LABEL_13;
          }
        }
      LABEL_18:
        v2 = *v7;
        if (*v7 == 0) {
          goto LABEL_99;
        }
        goto LABEL_19;
      }
    }
    else {
      while (v5 != v6) {
        v8 = *v5++;
        v7 = v8;
        if (*((_DWORD*)v8 + 21) == v4) {
          goto LABEL_18;
        }
      }
    }
  LABEL_13:
    v2 = game_gmap_SpotMgr_GetCurrentSpot(v1);
    if (v2 == 0) {
      goto LABEL_99;
    }
    goto LABEL_19;
  }
  return 0;
}

__int64 game_gmap_SpotMgr_GetAroundSpot(__int64 a1)
{
  char v1;
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64* v15;
  float v16;
  float v17;
  __int64* v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  _QWORD v24[4];
  _QWORD* v25;
  __int64* v26;
  __int64* v27;
  _QWORD* v28;

  v1 = a1;
  v2 = game_gmap_SpotMgr_GetCurrentSpot(a1);
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  v4 = (__int64*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
  v26 = v4;
  *v4 = v2;
  v27 = v4 + 1;
  v28 = v4 + 1;
  v24[0] = GameData_202bf68;
  v24[1] = &v26;
  v25 = v24;
  TroopMgr_13460a0(v24);
  if (v25 == v24) {
    v5 = 32;
  }
  else {
    if (v25 == nullptr) {
      goto LABEL_6;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v25 + v5))((__int64)v25);
LABEL_6:
  v6 = v26;
  v7 = v27;
  if ((char*)v27 - (char*)v26 == 8) {
    v8 = *v26;
    if (v26 != nullptr) {
      goto LABEL_43;
    }
    return v8;
  }
  if (v26 != v27) {
    SpotMgr_1338da0_alt1(v26, v27, (2 * __clz(v27 - v26)) ^ 0x7E, 1);
    v6 = v26;
    v7 = v27;
  }
  v9 = *(_QWORD*)(GameData_21f1658 + 16);
  v10 = *(_QWORD*)(v9 + 96);
  if (v10 == 0 || v7 == v6) {
  LABEL_16:
    if (v7 == v6) {
    LABEL_23:
      v18 = v7 - 1;
      if ((v1 & 1) != 0) {
        v18 = v6;
      }
      v8 = *v18;
      if (v6 != nullptr) {
        goto LABEL_43;
      }
      return v8;
    }
    v14 = 0;
    v15 = v6;
    v16 = *(float*)(v9 + 88);
    while (1) {
      v8 = *v15;
      v17 = *(float*)(*v15 + 40);
      if ((float)((float)(v16 - v17) * (float)(v16 - v17)) >
          0x1.9000000000000p+6f) {
        v16 = *(float*)(v9 + 88);
        if (v16 < v17) {
          if ((v1 & 1) != 0) {
            goto LABEL_43;
          }
          if (v14 != 0) {
            v7 = v15;
          }
          v8 = *(v7 - 1);
          if (v6 != nullptr) {
            goto LABEL_43;
          }
          return v8;
        }
      }
      else {
        if (COERCE_FLOAT(*(_OWORD*)(v9 + 80)) <= *(float*)(v8 + 32)) {
          if ((v1 & 1) == 0) {
            if (v14 != 0) {
              v7 = v15;
            }
            v8 = *(v7 - 1);
          }
          goto LABEL_43;
        }
        LODWORD(v16) = *(_QWORD*)(v9 + 88);
      }
      ++v14;
      ++v15;
      if (v7 - v6 == v14) {
        goto LABEL_23;
      }
    }
  }
  v11 = v7 - v6;
  v12 = 0;
  v13 = v6;
  while (*v13 != v10) {
    ++v12;
    ++v13;
    if (v11 == v12) {
      goto LABEL_16;
    }
  }
  if (v12 != 0) {
    v7 = v13;
  }
  v19 = v7 - 1;
  if (v11 - 1 == v12) {
    v20 = v6;
  }
  else {
    v20 = v13 + 1;
  }
  if ((v1 & 1) != 0) {
    v19 = v20;
  }
  v8 = *v19;
LABEL_43:
  v21 = *v3;
  v27 = v6;
  v22 = 128;
  if (*(_QWORD*)(v21 + 200) == 0) {
    v22 = 56;
  }
  nn_mem_StandardAllocator_Free(v21 + v22);
  return v8;
}

__int64 SpotMgr_1336300()
{
  __int64 v0;
  __int64 v1;
  _QWORD* v2;
  char* v3;
  char* v4;
  unsigned __int64 v5;
  __int64* v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  __int64* v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  __int64 result;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v29;
  unsigned __int64 v30;
  _QWORD* v31;
  _QWORD* v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned int* v35;
  _QWORD* v36;
  unsigned __int64 v37;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64** v42;
  __int64* v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  _QWORD* v53;
  char* v54;
  char* v55;
  __int64 v56;
  _QWORD v57[2];

  v0 = *(_QWORD*)(*GameData_212cac8[0] + 64);
  v1 = *(_QWORD*)(*GameData_212cac8[0] + 72);
  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v0 == v1) {
    v4 = nullptr;
    v3 = nullptr;
    goto LABEL_4;
  }
  v3 = nullptr;
  v4 = nullptr;
  v5 = 0;
  v6 = GameData_212ca10[0];
  v7 = GameData_212c780;
  while (2) {
    v24 = *(_QWORD*)(*(_QWORD*)v0 + 8LL);
    if (v24 != 0) {
      v25 = strchr(*(_QWORD*)(*(_QWORD*)v0 + 8LL), 95);
      if (v25 != 0) {
        v24 = v25 + 1;
      }
    }
    v26 = game_HashString(v24);
    if (v26 == 0) {
      goto LABEL_21;
    }
    v27 = *(_QWORD*)(*v6 + 96);
    if (v27 == 0 || *(_QWORD*)(*v6 + 112) == 0) {
      goto LABEL_21;
    }
    v29 = v27 - 1;
    if ((v27 & (v27 - 1)) != 0) {
      v30 = v26;
      if (v26 >= v27) {
        v30 = v26 % v27;
      }
    }
    else {
      v30 = v29 & v26;
    }
    v31 = *(_QWORD**)(*(_QWORD*)(*v6 + 88) + 8 * v30);
    if (v31 == nullptr) {
      goto LABEL_21;
    }
    v32 = (_QWORD*)*v31;
    if (v32 == nullptr) {
      goto LABEL_21;
    }
    if ((v27 & v29) == 0) {
      while (1) {
        v34 = v32[1];
        if (v34 == v26) {
          if (v32[2] == v26) {
            goto LABEL_50;
          }
        }
        else if ((v34 & v29) != v30) {
          goto LABEL_21;
        }
        v32 = (_QWORD*)*v32;
        if (v32 == nullptr) {
          goto LABEL_21;
        }
      }
    }
    while (1) {
      v33 = v32[1];
      if (v33 == v26) {
        break;
      }
      if (v33 >= v27) {
        v33 %= v27;
      }
      if (v33 != v30) {
        goto LABEL_21;
      }
    LABEL_39:
      v32 = (_QWORD*)*v32;
      if (v32 == nullptr) {
        goto LABEL_21;
      }
    }
    if (v32[2] != v26) {
      goto LABEL_39;
    }
  LABEL_50:
    v35 = (unsigned int*)v32[3];
    if (v35 != nullptr) {
      v36 = *(_QWORD**)(*v7 + 8);
      v37 = v36[2];
      if (v37 != 0 && v36[4] != 0) {
        v39 = *v35;
        v40 = v37 - 1;
        if ((v37 & (v37 - 1)) != 0) {
          v41 = v39;
          if (v37 <= v39) {
            v41 = (unsigned int)v39 % (unsigned int)v37;
          }
        }
        else {
          v41 = ((_DWORD)v37 - 1) & (unsigned int)v39;
        }
        v42 = *(__int64***)(v36[1] + 8 * v41);
        if (v42 != nullptr) {
          v43 = *v42;
          if (v43 != nullptr) {
            if ((v37 & v40) == 0) {
              while (1) {
                v45 = v43[1];
                if (v45 == v39) {
                  if (*((_DWORD*)v43 + 4) == (_DWORD)v39) {
                    goto LABEL_75;
                  }
                }
                else if ((v45 & v40) != v41) {
                  goto LABEL_21;
                }
                v43 = (__int64*)*v43;
                if (v43 == nullptr) {
                  goto LABEL_21;
                }
              }
            }
            do {
              v44 = v43[1];
              if (v44 == v39) {
                if (*((_DWORD*)v43 + 4) == (_DWORD)v39) {
                LABEL_75:
                  v46 = v43[3];
                  if (v46 != 0) {
                    *(_BYTE*)(v46 + 116) = 0;
                    if ((unsigned __int64)v4 < v5) {
                      *(_QWORD*)v4 = v46;
                      v4 += 8;
                    }
                    else {
                      v47 = v4 - v3;
                      v48 = v47 >> 3;
                      v49 = (v47 >> 3) + 1;
                      if (v49 >> 61 != 0) {
                        GameRoutine_8875e0(v26);
                      }
                      if ((__int64)(v5 - (_QWORD)v3) >> 2 > v49) {
                        v49 = (__int64)(v5 - (_QWORD)v3) >> 2;
                      }
                      if (v5 - (unsigned __int64)v3 >= 0x7FFFFFFFFFFFFFF8LL) {
                        v50 = 0x1FFFFFFFFFFFFFFFLL;
                      }
                      else {
                        v50 = v49;
                      }
                      if (v50 != 0) {
                        if (v50 >> 61 != 0) {
                          GameRoutine_60a210_alt1(v26);
                        }
                        v51 =
                            fw_memory_HeapManager_Allocate(*v2, 8 * v50, 16, 0);
                        v48 = v47 >> 3;
                      }
                      else {
                        v51 = 0;
                      }
                      v52 = v47;
                      v53 = (_QWORD*)(v51 + v47);
                      v5 = v51 + 8 * v50;
                      v54 = (char*)&v53[-v48];
                      *v53 = v46;
                      v4 = (char*)(v53 + 1);
                      v55 = v54;
                      memcpy(v54, v3, v52);
                      if (v3 != nullptr) {
                        v56 = 128;
                        if (*(_QWORD*)(*v2 + 200LL) == 0) {
                          v56 = 56;
                        }
                        nn_mem_StandardAllocator_Free(*v2 + v56);
                      }
                      v3 = v55;
                    }
                  }
                  break;
                }
              }
              else {
                if (v44 >= v37) {
                  v44 %= v37;
                }
                if (v44 != v41) {
                  break;
                }
              }
              v43 = (__int64*)*v43;
            } while (v43 != nullptr);
          }
        }
      }
    }
  LABEL_21:
    v0 += 8;
    if (v0 != v1) {
      continue;
    }
    break;
  }
LABEL_4:
  v8 = v4 - v3;
  v9 = (v4 - v3) >> 3;
  if ((int)v9 >= 1) {
    v10 = (v8 >> 3) & 0x7FFFFFFF;
    v11 = v3;
    v12 = game_map_MapRandom_instance__ptr[0];
    do {
      nn_os_LockMutex(&game_g_random_mutex);
      v13 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12 + 8);
      v14 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12 + 12);
      v15 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12) ^
            (*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12) << 11);
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12) =
          *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12 + 4);
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12 + 4) = v13;
      v16 = (v15 >> 8) ^ (v14 >> 19) ^ v15 ^ v14;
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12 + 8) = v14;
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12 + 12) = v16;
      v17 = v16 & 0x7FFFFFFF;
      nn_os_UnlockMutex(&game_g_random_mutex);
      v18 = *(_QWORD*)v11;
      --v10;
      *(_QWORD*)v11 = *(_QWORD*)&v3[8 * (v17 % (unsigned int)v9)];
      v11 += 8;
      *(_QWORD*)&v3[8 * (v17 % (unsigned int)v9)] = v18;
    } while (v10 != 0);
  }
  v19 = 0;
  while (2) {
    v57[1] = &GameData_1a8eaf7;
    result = game_HashString(&GameData_1a8eaf7);
    v21 = game_GameModeData_instance_;
    v57[0] = result;
    if (game_GameModeData_instance_ == 0) {
    LABEL_11:
      if (v19 >= v21) {
        break;
      }
      goto LABEL_12;
    }
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v57);
    if (result != 0) {
      v21 = *(int*)(result + 32);
      goto LABEL_11;
    }
    if (v19 < 0) {
    LABEL_12:
      v22 = *(_QWORD*)&v3[8 * v19++];
      *(_BYTE*)(v22 + 116) = 1;
      if (v9 == v19) {
        goto LABEL_16;
      }
      continue;
    }
    break;
  }
  if (v3 == nullptr) {
    return result;
  }
LABEL_16:
  v23 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v23 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v2 + v23);
}

_QWORD* SpotMgr_1336ec0()
{
  _QWORD* v0;
  __int64* v1;
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  _QWORD v14[4];
  _QWORD* v15;
  __int64 v16;

  v0 = v14;
  v14[0] = GameData_202c4e8;
  v15 = v14;
  v1 = GameData_212c780;
  v2 = *(_QWORD*)(*GameData_212c780 + 8);
  v3 = *(__int64**)(v2 + 48);
  v4 = *(__int64**)(v2 + 56);
  if (v3 == v4) {
    goto LABEL_14;
  }
  do {
    v5 = *v3;
    v6 = *(_QWORD*)(*v3 + 280);
    if (v6 != 0 &&
        ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6) != 1 ||
         ((*(__int64 (**)(_QWORD))(**(_QWORD**)(v5 + 280) + 112LL))(
              *(_QWORD*)(v5 + 280)) &
          1) == 0) &&
        *(_QWORD*)(v5 + 280) != 0) {
      v16 = v5;
      if (v15 == nullptr) {
        GameRoutine_60a310(0, v7);
      }
      (*(void (**)(_QWORD*, __int64*))(*v15 + 48LL))(v15, &v16);
    }
    ++v3;
  } while (v3 != v4);
  v0 = v15;
  if (v15 == v14) {
  LABEL_14:
    v8 = 32;
  }
  else {
    if (v15 == nullptr) {
      goto LABEL_16;
    }
    v8 = 40;
  }
  (*(void (**)(_QWORD*))(*v0 + v8))(v0);

LABEL_16:
  v9 = *(_QWORD**)(*v1 + 8);
  v10 = (__int64*)v9[6];
  v11 = (__int64*)v9[7];
  if (v10 != v11) {
    do {
      v12 = *v10++;
      GameRoutine_1328d60(v12);
    } while (v10 != v11);
    v9 = *(_QWORD**)(*v1 + 8);
  }
  return SpotMgr_1334560(v9);
}

__n128 SpotMgr_1337000()
{
  __int64 v0;
  _QWORD* v1;
  _QWORD* i;
  _QWORD* v3;
  __n128 result;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v0 = *(_QWORD*)(GameData_21c9700 + 8);
  v1 = *(_QWORD**)(v0 + 48);
  for (i = *(_QWORD**)(v0 + 56); v1 != i;
       result = GameRoutine_14a1390(v3 + 33, 1)) {
    v3 = (_QWORD*)*v1++;
    GameRoutine_14a1390(v3 + 23, 1),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    GameRoutine_14a1390(v3 + 25, 1),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    GameRoutine_14a1390(v3 + 27, 1),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    GameRoutine_14a1390(v3 + 29, 1),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    GameRoutine_14a1390(v3 + 31, 1),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  return result;
}

void SpotMgr_13370c0()
{
  __int64 v0;
  __int64 v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned int* v15;
  _QWORD* v16;
  unsigned __int64 v17;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64** v22;
  __int64* v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;

  v0 = *(_QWORD*)(*GameData_212ca70[0] + 64);
  v1 = *(_QWORD*)(*GameData_212ca70[0] + 72);
  if (v0 == v1) {
    return;
  }
  v2 = GameData_212ca10[0];
  v3 = GameData_212c780;
  while (2) {
    v4 = *(_QWORD*)(*(_QWORD*)v0 + 8LL);
    if (v4 != 0) {
      v5 = strchr(*(_QWORD*)(*(_QWORD*)v0 + 8LL), 95);
      if (v5 != 0) {
        v4 = v5 + 1;
      }
    }
    v6 = game_HashString(v4);
    if (v6 == 0) {
      goto LABEL_3;
    }
    v7 = *(_QWORD*)(*v2 + 96);
    if (v7 == 0 || *(_QWORD*)(*v2 + 112) == 0) {
      goto LABEL_3;
    }
    v9 = v7 - 1;
    if ((v7 & (v7 - 1)) != 0) {
      v10 = v6;
      if (v6 >= v7) {
        v10 = v6 % v7;
      }
    }
    else {
      v10 = v9 & v6;
    }
    v11 = *(_QWORD**)(*(_QWORD*)(*v2 + 88) + 8 * v10);
    if (v11 == nullptr) {
      goto LABEL_3;
    }
    v12 = (_QWORD*)*v11;
    if (v12 == nullptr) {
      goto LABEL_3;
    }
    if ((v7 & v9) == 0) {
      while (1) {
        v14 = v12[1];
        if (v14 == v6) {
          if (v12[2] == v6) {
            goto LABEL_32;
          }
        }
        else if ((v14 & v9) != v10) {
          goto LABEL_3;
        }
        v12 = (_QWORD*)*v12;
        if (v12 == nullptr) {
          goto LABEL_3;
        }
      }
    }
    while (1) {
      v13 = v12[1];
      if (v13 == v6) {
        break;
      }
      if (v13 >= v7) {
        v13 %= v7;
      }
      if (v13 != v10) {
        goto LABEL_3;
      }
    LABEL_21:
      v12 = (_QWORD*)*v12;
      if (v12 == nullptr) {
        goto LABEL_3;
      }
    }
    if (v12[2] != v6) {
      goto LABEL_21;
    }
  LABEL_32:
    v15 = (unsigned int*)v12[3];
    if (v15 != nullptr) {
      v16 = *(_QWORD**)(*v3 + 8);
      v17 = v16[2];
      if (v17 != 0 && v16[4] != 0) {
        v19 = *v15;
        v20 = v17 - 1;
        if ((v17 & (v17 - 1)) != 0) {
          v21 = v19;
          if (v17 <= v19) {
            v21 = (unsigned int)v19 % (unsigned int)v17;
          }
        }
        else {
          v21 = ((_DWORD)v17 - 1) & (unsigned int)v19;
        }
        v22 = *(__int64***)(v16[1] + 8 * v21);
        if (v22 != nullptr) {
          v23 = *v22;
          if (v23 != nullptr) {
            if ((v17 & v20) == 0) {
              while (1) {
                v25 = v23[1];
                if (v25 == v19) {
                  if (*((_DWORD*)v23 + 4) == (_DWORD)v19) {
                    goto LABEL_57;
                  }
                }
                else if ((v25 & v20) != v21) {
                  goto LABEL_3;
                }
                v23 = (__int64*)*v23;
                if (v23 == nullptr) {
                  goto LABEL_3;
                }
              }
            }
            do {
              v24 = v23[1];
              if (v24 == v19) {
                if (*((_DWORD*)v23 + 4) == (_DWORD)v19) {
                LABEL_57:
                  v26 = v23[3];
                  if (v26 != 0) {
                    *(_BYTE*)(v26 + 178) |= 4u;
                  }
                  break;
                }
              }
              else {
                if (v24 >= v17) {
                  v24 %= v17;
                }
                if (v24 != v21) {
                  break;
                }
              }
              v23 = (__int64*)*v23;
            } while (v23 != nullptr);
          }
        }
      }
    }
  LABEL_3:
    v0 += 8;
    if (v0 != v1) {
      continue;
    }
    break;
  }
}

__int64 SpotMgr_13381e0(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v1 = *(_QWORD*)(result + 48);
  v2 = (__int64*)result;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(result + 56) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = v2[3];
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    v2[4] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v7 + v8);
  }
  v9 = *v2;
  if (*v2 != 0) {
    v10 = v2[1];
    if (v9 == v10) {
      goto LABEL_20;
    }
    v11 = v2[1];
    do {
      v12 = *(_BYTE*)(v11 - 24);
      v11 -= 24;
      if ((v12 & 1) != 0 && *(_QWORD*)(v10 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v13 = 128;
        }
        else {
          v13 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13);
      }
      v10 = v11;
    } while (v11 != v9);
    v14 = *v2;
    v2[1] = v9;
    if (v14 != 0) {
    LABEL_20:
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v15 = 56;
      }
      return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v15);
    }
  }
  return result;
}

void SpotMgr_1338320(float* a1, unsigned int* a2, int* a3, _QWORD* a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v10;
  __int64** v11;
  __int64* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  int v17;
  float v18;
  __int64 v19;
  float v20;
  float v21;
  _BOOL8 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 primeEm;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  __int64* v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  _QWORD* v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  _QWORD* v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64* v48;
  __int64 v49;
  unsigned __int64 v50;

  v5 = *a2;
  v6 = *((_QWORD*)a1 + 1);
  if (v6 != 0) {
    v10 = v6 - 1;
    if ((v6 & (v6 - 1)) != 0) {
      v4 = *a2;
      if (v6 <= v5) {
        v4 = (unsigned int)v5 % (unsigned int)v6;
      }
    }
    else {
      v4 = ((_DWORD)v6 - 1) & (unsigned int)v5;
    }
    v11 = *(__int64***)(*(_QWORD*)a1 + 8 * v4);
    if (v11 != nullptr) {
      v12 = *v11;
      if (v12 != nullptr) {
        if ((v6 & v10) == 0) {
          while (1) {
            v14 = v12[1];
            if (v14 == v5) {
              if (*((_DWORD*)v12 + 4) == (_DWORD)v5) {
                return;
              }
            }
            else if ((v14 & v10) != v4) {
              goto LABEL_22;
            }
            v12 = (__int64*)*v12;
            if (v12 == nullptr) {
              goto LABEL_22;
            }
          }
        }
        do {
          v13 = v12[1];
          if (v13 == v5) {
            if (*((_DWORD*)v12 + 4) == (_DWORD)v5) {
              return;
            }
          }
          else {
            if (v13 >= v6) {
              v13 %= v6;
            }
            if (v13 != v4) {
              break;
            }
          }
          v12 = (__int64*)*v12;
        } while (v12 != nullptr);
      }
    }
  }
LABEL_22:
  v15 = (__int64*)fw_memory_g_heap_manager_ptr;
  v16 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v17 = *a3;
  v18 = a1[8];
  v19 = v16;
  *(_QWORD*)v16 = 0;
  *(_QWORD*)(v16 + 8) = v5;
  *(_DWORD*)(v16 + 16) = v17;
  *(_QWORD*)(v16 + 24) = *a4;
  v20 = (float)(unsigned __int64)(*((_QWORD*)a1 + 3) + 1LL);
  if (v6 == 0 || (float)(v18 * (float)v6) < v20) {
    v21 = v20 / v18;
    v22 = true;
    if (v6 >= 3) {
      v22 = (v6 & (v6 - 1)) != 0;
    }
    v23 = v22 | (2 * v6);
    v24 = vcvtps_u64_f32(v21);
    if (v23 <= v24) {
      v25 = v24;
    }
    else {
      v25 = v23;
    }
    if (v25 == 1) {
      v25 = 2;
    }
    else if ((v25 & (v25 - 1)) != 0) {
      primeEm = std___1___next_prime(v25);
      v6 = *((_QWORD*)a1 + 1);
      v25 = primeEm;
    }
    if (v25 <= v6) {
      if (v25 >= v6) {
        goto LABEL_83;
      }
      v32 = vcvtps_u64_f32((float)*((unsigned __int64*)a1 + 3) / a1[8]);
      if (v6 < 3 || (v6 & (v6 - 1)) != 0) {
        v32 = std___1___next_prime(v32);
      }
      else {
        v33 = 1LL << -(char)__clz(v32 - 1);
        if (v32 >= 2) {
          v32 = v33;
        }
      }
      if (v25 <= v32) {
        v25 = v32;
      }
      if (v25 >= v6) {
        goto LABEL_83;
      }
      if (v25 == 0) {
        v45 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v45 != 0) {
          v46 = 128;
          if (*(_QWORD*)(*v15 + 200) == 0) {
            v46 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v15 + v46);
        }
        *((_QWORD*)a1 + 1) = 0;
        goto LABEL_83;
      }
    }
    if (v25 >> 61 != 0) {
      GameRoutine_60a210_alt2();
    }
    v27 = fw_memory_HeapManager_Allocate_alt1(*v15, 8 * v25, 16, 0);
    v28 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v27;
    if (v28 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*v15 + 200) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v15 + v29);
    }
    v30 = v25 & 7;
    *((_QWORD*)a1 + 1) = v25;
    if (v25 >= 8) {
      v31 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 48) = 0;
        v34 = *(_QWORD*)a1 + 8 * v31;
        v31 += 8;
        *(_QWORD*)(v34 + 56) = 0;
      } while ((v25 & 0x1FFFFFFFFFFFFFF8LL) != v31);
    }
    else {
      v31 = 0;
    }
    if ((v25 & 7) != 0) {
      v35 = 8 * v31;
      do {
        --v30;
        *(_QWORD*)(*(_QWORD*)a1 + v35) = 0;
        v35 += 8;
      } while (v30 != 0);
    }
    v37 = (__int64*)(a1 + 4);
    v36 = *((_QWORD**)a1 + 2);
    if (v36 != nullptr) {
      v38 = v36[1];
      v39 = v25 - 1;
      if ((v25 & (v25 - 1)) != 0) {
        if (v38 >= v25) {
          v38 %= v25;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v38) = v37;
        v40 = (_QWORD*)*v36;
        if (*v36 == 0) {
          goto LABEL_83;
        }
        while (1) {
          v41 = v40[1];
          if (v41 >= v25) {
            v41 %= v25;
          }
          if (v41 != v38) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v41) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v41) = v36;
              goto LABEL_60;
            }
            *v36 = *v40;
            *v40 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v41);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v41) = v40;
            v40 = v36;
          }
          v41 = v38;
        LABEL_60:
          v36 = v40;
          v40 = (_QWORD*)*v40;
          v38 = v41;
          if (v40 == nullptr) {
            goto LABEL_83;
          }
        }
      }
      v42 = v38 & v39;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v42) = v37;
      while (1) {
        v43 = (_QWORD*)*v36;
        if (*v36 == 0) {
          break;
        }
        v44 = v43[1] & v39;
        if (v44 == v42) {
          v36 = (_QWORD*)*v36;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v44) != 0) {
          *v36 = *v43;
          *v43 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v44);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v44) = v43;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v44) = v36;
          v36 = v43;
          v42 = v44;
        }
      }
    }
  LABEL_83:
    v6 = *((_QWORD*)a1 + 1);
    if ((v6 & (v6 - 1)) != 0) {
      if (v6 <= v5) {
        v4 = v5 % v6;
      }
      else {
        v4 = v5;
      }
    }
    else {
      v4 = ((_DWORD)v6 - 1) & (unsigned int)v5;
    }
  }
  v47 = *(_QWORD*)a1;
  v48 = *(__int64**)(*(_QWORD*)a1 + 8 * v4);
  if (v48 != nullptr) {
    *(_QWORD*)v19 = *v48;
    *v48 = v19;
  }
  else {
    v49 = *((_QWORD*)a1 + 2);
    *((_QWORD*)a1 + 2) = v19;
    *(_QWORD*)v19 = v49;
    *(_QWORD*)(v47 + 8 * v4) = a1 + 4;
    if (*(_QWORD*)v19 != 0) {
      v50 = *(_QWORD*)(*(_QWORD*)v19 + 8LL);
      if ((v6 & (v6 - 1)) != 0) {
        if (v50 >= v6) {
          v50 %= v6;
        }
      }
      else {
        v50 &= v6 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v50) = v19;
    }
  }
  ++*((_QWORD*)a1 + 3);
}

__int64 SpotMgr_13388c0(__int64* a1, __int64* a2, __int64* a3, __int64* a4,
                        __int64 a5)
{
  __int64 v6;
  unsigned __int64 v7;
  __int64* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64* v17;
  char* v18;
  char* j;
  __int64 v20;
  char* v21;
  __int64* v22;
  char* k;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64* v27;
  __int64* v28;
  _QWORD* i;
  __int64 v30;
  unsigned __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64 v35;
  __int64 v36;
  bool v37;
  __int64 v38;

  if (a5 < 1) {
    return (__int64)a2;
  }
  v7 = a1[1];
  v6 = a1[2];
  v9 = a3;
  if (a5 <= (__int64)(v6 - v7) >> 3) {
    v15 = v7 - (_QWORD)a2;
    v16 = (__int64)(v7 - (_QWORD)a2) >> 3;
    if (a5 <= v16) {
      v27 = &a2[a5];
      v28 = (__int64*)(v7 - 8 * a5);
      for (i = (_QWORD*)a1[1]; (unsigned __int64)v28 < v7; ++i) {
        v30 = *v28++;
        *i = v30;
      }
      a1[1] = (__int64)i;
      if ((__int64*)v7 != v27) {
        memmove(&a2[a5], a2, v7 - (_QWORD)v27);
      }
      v31 = 8 * a5 - 8;
      if ((~(_BYTE)v31 & 0x38) != 0) {
        v35 = -(__int64)(((unsigned __int8)((unsigned int)v31 >> 3) + 1) & 7);
        v32 = a2;
        do {
          v36 = *v9++;
          v37 = __CFADD__(v35++, 1);
          *v32++ = v36;
        } while (!v37);
      }
      else {
        v32 = a2;
      }
      if (v31 >= 0x38) {
        do {
          *v32 = *v9;
          v32[1] = v9[1];
          v32[2] = v9[2];
          v32[3] = v9[3];
          v32[4] = v9[4];
          v32[5] = v9[5];
          v32[6] = v9[6];
          v38 = v9[7];
          v9 += 8;
          v32[7] = v38;
          v32 += 8;
        } while (v32 != &a2[a5]);
      }
    }
    else {
      v17 = (__int64*)((char*)a3 + v15);
      v18 = (char*)a1[1];
      for (j = v18; v17 != a4; j += 8) {
        v20 = *v17++;
        v18 += 8;
        *(_QWORD*)j = v20;
      }
      a1[1] = (__int64)v18;
      if (v16 >= 1) {
        v21 = (char*)&a2[a5];
        v22 = (__int64*)&v18[-8 * a5];
        for (k = v18; (unsigned __int64)v22 < v7; k += 8) {
          v24 = *v22++;
          *(_QWORD*)k = v24;
        }
        a1[1] = (__int64)k;
        if (j != v21) {
          memmove(&a2[a5], a2, v18 - v21);
        }
        v25 = a2;
        do {
          v26 = *v9++;
          v15 -= 8LL;
          *v25++ = v26;
        } while (v15 != 0);
      }
    }
    return (__int64)a2;
  }
  v10 = *a1;
  v11 = a5 + ((__int64)(v7 - *a1) >> 3);
  if (v11 >> 61 != 0) {
    GameRoutine_8875e0(a1);
  }
  v12 = v6 - v10;
  if (v12 >> 2 > v11) {
    v11 = v12 >> 2;
  }
  if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
    v13 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v13 = v11;
  }
  if (v13 != 0) {
    if (v13 >> 61 != 0) {
      GameRoutine_60a210_alt1(a1);
    }
    v14 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 8 * v13, 16,
                                         0);
  }
  else {
    v14 = 0;
  }
  memcpy((char*)a2 + v14 - v10, v9, 8 * a5);
  memcpy((char*)&a2[a5] + v14 - v10, a2, v7 - (_QWORD)a2);
  a1[1] = (__int64)a2;
  memcpy(v14, v10, (char*)a2 - v10);
  *a1 = v14;
  a1[1] = v14 - v10 + 8 * a5 + v7;
  a1[2] = v14 + 8 * v13;
  if (v10 != 0) {
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v33);
  }
  return (__int64)a2 + v14 - v10;
}

__int64 SpotMgr_1338da0(__int64 result, __int64* a2, __int64 a3, char a4)
{
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  float v12;
  __int64 v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  bool v18;
  _BOOL4 v19;
  __int64 v20;
  __int64 v21;
  float v22;
  float v23;
  float v24;
  bool v25;
  _BOOL4 v26;
  __int64 v27;
  float v28;
  float v29;
  _BOOL4 v30;
  __int64 v31;
  float v32;
  float v33;
  _BOOL4 v34;
  __int64 v35;
  float v36;
  float v37;
  _BOOL4 v38;
  __int64 v39;
  __int64 v40;
  float v41;
  float v42;
  float v43;
  bool v44;
  __int64 v45;
  float v46;
  _BOOL4 v47;
  __int64 v48;
  __int64 v49;
  float v50;
  float v51;
  _BOOL4 v52;
  __int64 v53;
  float v54;
  float v55;
  _BOOL4 v56;
  __int64 v57;
  float v58;
  float v59;
  _BOOL4 v60;
  __int64 v61;
  __int64 v62;
  float v63;
  float v64;
  float v65;
  bool v66;
  __int64 v67;
  float v68;
  _BOOL4 v69;
  __int64 v70;
  __int64 v71;
  float v72;
  float v73;
  _BOOL4 v74;
  __int64 v75;
  float v76;
  float v77;
  _BOOL4 v78;
  __int64 v79;
  __int64 v80;
  float v81;
  float v82;
  float v83;
  bool v84;
  __int64 v85;
  float v86;
  _BOOL4 v87;
  float v88;
  float v89;
  _BOOL4 v90;
  float v91;
  float v92;
  _BOOL4 v93;
  __int64 v94;
  __int64 v95;
  float v96;
  __int128 v97;
  __int64 v98;
  float v99;
  float v100;
  bool v101;
  __int64 v102;
  __int64* v103;
  __int64 v104;
  float v105;
  bool v106;
  __int64* v107;
  __int64* v108;
  __int64 v109;
  float v110;
  _BOOL4 v111;
  __int64 v112;
  float v113;
  bool v114;
  __int64 v115;
  __int64* v116;
  __int64* v117;
  float v118;
  __int128 v119;
  __int64 v120;
  float v121;
  bool v122;
  __int64 v123;
  float v124;
  _BOOL4 v125;
  __int64* v126;
  char v127;
  char v128;
  __int64 v129;
  float v130;
  bool v131;
  __int64 v132;
  float v133;
  bool v134;
  __int64* v135;
  float v136;
  _BOOL4 v137;
  __int64* v138;
  __int64 v139;
  float v140;
  bool v141;
  __int64 v142;
  __int64 v143;
  float v144;
  __int128 v145;
  __int64 v146;
  float v147;
  _BOOL4 v148;
  __int64 v149;
  float v150;
  bool v151;
  __int64* v152;
  __int64 v153;
  __int64 v154;
  float v155;
  float v156;
  float v157;
  bool v158;
  __int64 v159;
  float v160;
  _BOOL4 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  float v166;
  float v167;
  _BOOL4 v168;
  __int64 v169;
  __int64 v170;
  float v171;
  float v172;
  float v173;
  bool v174;
  __int64 v175;
  float v176;
  _BOOL4 v177;
  __int64 v178;
  __int64 v179;
  float v180;
  float v181;
  float v182;
  bool v183;
  __int64 v184;
  float v185;
  _BOOL4 v186;
  __int64* v187;
  bool v189;
  __int64 v190;
  __int64* v191;
  __int64* v192;
  __int64 v193;
  __int64 v194;
  float v195;
  float v196;
  _BOOL4 v197;
  __int64 v198;
  float v199;
  float v200;
  bool v201;
  signed __int64 v202;
  signed __int64 v203;
  signed __int64 v204;
  __int64 v205;
  __int64 v206;
  __int64* v207;
  __int64 v208;
  __int64 v209;
  float v210;
  float v211;
  _BOOL4 v212;
  __int64* v213;
  float v214;
  __int64 v215;
  float v216;
  bool v217;
  float v218;
  float v219;
  __int64* v220;
  __int64 v221;
  __int64 v222;
  __int64 v223;
  float v224;
  float v225;
  _BOOL4 v226;
  bool v227;
  __int64 v228;
  __int64 v229;
  __int64* v230;
  __int64* v231;
  __int64 v232;
  __int64 v233;
  float v234;
  float v235;
  __int64 v236;
  __int64* v237;
  __int64* v238;
  __int64 v239;
  __int64 v240;
  unsigned __int64 v241;
  unsigned __int64 v242;
  __int64 v243;
  __int64* v244;
  __int64 v245;
  float v246;
  float v247;
  _BOOL4 v248;
  __int64* v249;
  float v250;
  float v251;
  bool v252;
  float v253;
  float v254;
  _BOOL4 v255;
  __int64 v256;
  __int64 v257;
  float v258;
  float v259;
  float v260;
  _BOOL4 v261;
  bool v262;
  float v263;
  float v264;
  _BOOL4 v265;
  __int64 v266;
  __int64 v267;
  float v268;
  float v269;
  _BOOL4 v270;
  __int64* v271;
  float v272;
  float v273;
  bool v274;
  float v275;
  float v276;
  _BOOL4 v277;
  __int64 v278;
  float v279;
  float v280;
  _BOOL4 v281;
  float v282;
  float v283;
  _BOOL4 v284;
  __int64 v285;
  float v286;
  float v287;
  _BOOL4 v288;
  __int64 v289;
  float v290;
  float v291;
  _BOOL4 v292;
  float v293;
  float v294;
  _BOOL4 v295;
  float v296;
  float v297;
  _BOOL4 v298;
  __int64 v299;
  float v300;
  float v301;
  _BOOL4 v302;
  __int64 v303;
  float v304;
  float v305;
  _BOOL4 v306;
  __int64 v307;
  float v308;
  float v309;
  _BOOL4 v310;
  float v311;
  float v312;
  int v313;

  v7 = (__int64*)result;
  while (2) {
    v8 = v7;
    while (1) {
      while (1) {
        v7 = v8;
        v9 = a2 - v8;
        if (v9 > 2) {
          if (v9 == 3) {
            v169 = *v8;
            v170 = v8[1];
            v171 = *(float*)(v170 + 40);
            v172 = *(float*)(*v8 + 40);
            v173 = *(float*)(v170 + 32);
            if ((float)((float)(v171 - v172) * (float)(v171 - v172)) <= 100.0) {
              v174 = v173 < *(float*)(*v8 + 32);
            }
            else {
              v174 = v171 < v172;
            }
            v175 = *(a2 - 1);
            v176 = *(float*)(v175 + 40);
            v177 = *(float*)(v175 + 32) < v173;
            if ((float)((float)(v176 - v171) * (float)(v176 - v171)) > 100.0) {
              v177 = v176 < v171;
            }
            if (v174) {
              if (v177) {
                *v8 = v175;
                *(a2 - 1) = v169;
              }
              else {
                *v8 = v170;
                v8[1] = v169;
                v278 = *(a2 - 1);
                v279 = *(float*)(v169 + 40);
                v280 = *(float*)(v278 + 40);
                v281 = *(float*)(v278 + 32) < *(float*)(v169 + 32);
                if ((float)((float)(v280 - v279) * (float)(v280 - v279)) >
                    100.0) {
                  v281 = v280 < v279;
                }
                if (v281) {
                  v8[1] = v278;
                  *(a2 - 1) = v169;
                }
              }
              return result;
            }
            if (!v177) {
              return result;
            }
            v8[1] = v175;
            *(a2 - 1) = v170;
            v257 = *v8;
            v256 = v8[1];
            v258 = *(float*)(v256 + 40);
            v259 = *(float*)(*v8 + 40);
            v260 = (float)(v258 - v259) * (float)(v258 - v259);
            v261 = *(float*)(v256 + 32) < *(float*)(*v8 + 32);
            v262 = v258 < v259;
          LABEL_338:
            v313 = v262;
            if (v260 > 100.0) {
              v261 = v313;
            }
            if (v261) {
              *v8 = v256;
              v8[1] = v257;
            }
            return result;
          }
          if (v9 != 4) {
            if (v9 != 5) {
              goto LABEL_10;
            }
            v154 = *v8;
            v153 = v8[1];
            v155 = *(float*)(v153 + 40);
            v156 = *(float*)(*v8 + 40);
            v157 = *(float*)(v153 + 32);
            if ((float)((float)(v155 - v156) * (float)(v155 - v156)) <= 100.0) {
              v158 = v157 < *(float*)(*v8 + 32);
            }
            else {
              v158 = v155 < v156;
            }
            v159 = v8[2];
            v160 = *(float*)(v159 + 40);
            v161 = *(float*)(v159 + 32) < v157;
            if ((float)((float)(v160 - v155) * (float)(v160 - v155)) > 100.0) {
              v161 = v160 < v155;
            }
            if (v158) {
              if (v161) {
                *v8 = v159;
                v8[2] = v154;
                v162 = v159;
                v163 = v153;
              LABEL_297:
                v153 = v154;
              LABEL_316:
                v289 = v8[3];
                v290 = *(float*)(v153 + 40);
                v291 = *(float*)(v289 + 40);
                v292 = *(float*)(v289 + 32) < *(float*)(v153 + 32);
                if ((float)((float)(v291 - v290) * (float)(v291 - v290)) >
                    100.0) {
                  v292 = v291 < v290;
                }
                if (v292) {
                  v8[2] = v289;
                  v8[3] = v153;
                  v293 = *(float*)(v289 + 40);
                  v294 = *(float*)(v163 + 40);
                  v295 = *(float*)(v289 + 32) < *(float*)(v163 + 32);
                  if ((float)((float)(v293 - v294) * (float)(v293 - v294)) >
                      100.0) {
                    v295 = v293 < v294;
                  }
                  if (v295) {
                    v8[1] = v289;
                    v8[2] = v163;
                    v296 = *(float*)(v289 + 40);
                    v297 = *(float*)(v162 + 40);
                    v298 = *(float*)(v289 + 32) < *(float*)(v162 + 32);
                    if ((float)((float)(v296 - v297) * (float)(v296 - v297)) >
                        100.0) {
                      v298 = v296 < v297;
                    }
                    if (v298) {
                      *v8 = v289;
                      v8[1] = v162;
                    }
                  }
                }
                else {
                  v153 = v8[3];
                }
                v299 = *(a2 - 1);
                v300 = *(float*)(v153 + 40);
                v301 = *(float*)(v299 + 40);
                v302 = *(float*)(v299 + 32) < *(float*)(v153 + 32);
                if ((float)((float)(v301 - v300) * (float)(v301 - v300)) >
                    100.0) {
                  v302 = v301 < v300;
                }
                if (!v302) {
                  return result;
                }
                v8[3] = v299;
                *(a2 - 1) = v153;
                v303 = v8[2];
                v256 = v8[3];
                v304 = *(float*)(v256 + 40);
                v305 = *(float*)(v303 + 40);
                v306 = *(float*)(v256 + 32) < *(float*)(v303 + 32);
                if ((float)((float)(v304 - v305) * (float)(v304 - v305)) >
                    100.0) {
                  v306 = v304 < v305;
                }
                if (!v306) {
                  return result;
                }
                v8[2] = v256;
                v8[3] = v303;
              LABEL_334:
                v307 = v8[1];
                v308 = *(float*)(v256 + 40);
                v309 = *(float*)(v307 + 40);
                v310 = *(float*)(v256 + 32) < *(float*)(v307 + 32);
                if ((float)((float)(v308 - v309) * (float)(v308 - v309)) >
                    100.0) {
                  v310 = v308 < v309;
                }
                if (!v310) {
                  return result;
                }
                v8[1] = v256;
                v8[2] = v307;
                v257 = *v8;
                v311 = *(float*)(v256 + 40);
                v312 = *(float*)(*v8 + 40);
                v261 = *(float*)(v256 + 32) < *(float*)(*v8 + 32);
                v262 = v311 < v312;
                v260 = (float)(v311 - v312) * (float)(v311 - v312);
                goto LABEL_338;
              }
              *v8 = v153;
              v8[1] = v154;
              v275 = *(float*)(v159 + 40);
              v276 = *(float*)(v154 + 40);
              v277 = *(float*)(v159 + 32) < *(float*)(v154 + 32);
              if ((float)((float)(v275 - v276) * (float)(v275 - v276)) >
                  100.0) {
                v277 = v275 < v276;
              }
              if (v277) {
                v8[1] = v159;
                v8[2] = v154;
                v162 = v153;
                v163 = v159;
                goto LABEL_297;
              }
              v162 = v153;
              v163 = v154;
            }
            else {
              if (v161) {
                v8[1] = v159;
                v8[2] = v153;
                v253 = *(float*)(v159 + 40);
                v254 = *(float*)(v154 + 40);
                v255 = *(float*)(v159 + 32) < *(float*)(v154 + 32);
                if ((float)((float)(v253 - v254) * (float)(v253 - v254)) >
                    100.0) {
                  v255 = v253 < v254;
                }
                if (v255) {
                  *v8 = v159;
                  v8[1] = v154;
                  v162 = v159;
                  v163 = v154;
                }
                else {
                  v162 = v154;
                  v163 = v159;
                }
                goto LABEL_316;
              }
              v162 = *v8;
              v163 = v8[1];
            }
            v153 = v159;
            goto LABEL_316;
          }
          v179 = *v8;
          v178 = v8[1];
          v180 = *(float*)(v178 + 40);
          v181 = *(float*)(*v8 + 40);
          v182 = *(float*)(v178 + 32);
          if ((float)((float)(v180 - v181) * (float)(v180 - v181)) <= 100.0) {
            v183 = v182 < *(float*)(*v8 + 32);
          }
          else {
            v183 = v180 < v181;
          }
          v184 = v8[2];
          v185 = *(float*)(v184 + 40);
          v186 = *(float*)(v184 + 32) < v182;
          if ((float)((float)(v185 - v180) * (float)(v185 - v180)) > 100.0) {
            v186 = v185 < v180;
          }
          if (v183) {
            if (v186) {
              *v8 = v184;
            LABEL_307:
              v8[2] = v179;
              v178 = v179;
            LABEL_309:
              v285 = *(a2 - 1);
              v286 = *(float*)(v178 + 40);
              v287 = *(float*)(v285 + 40);
              v288 = *(float*)(v285 + 32) < *(float*)(v178 + 32);
              if ((float)((float)(v287 - v286) * (float)(v287 - v286)) >
                  100.0) {
                v288 = v287 < v286;
              }
              if (!v288) {
                return result;
              }
              v8[2] = v285;
              *(a2 - 1) = v178;
              v256 = v8[2];
              goto LABEL_334;
            }
            *v8 = v178;
            v8[1] = v179;
            v282 = *(float*)(v184 + 40);
            v283 = *(float*)(v179 + 40);
            v284 = *(float*)(v184 + 32) < *(float*)(v179 + 32);
            if ((float)((float)(v282 - v283) * (float)(v282 - v283)) > 100.0) {
              v284 = v282 < v283;
            }
            if (v284) {
              v8[1] = v184;
              goto LABEL_307;
            }
          }
          else if (v186) {
            v8[1] = v184;
            v8[2] = v178;
            v263 = *(float*)(v184 + 40);
            v264 = *(float*)(v179 + 40);
            v265 = *(float*)(v184 + 32) < *(float*)(v179 + 32);
            if ((float)((float)(v263 - v264) * (float)(v263 - v264)) > 100.0) {
              v265 = v263 < v264;
            }
            if (v265) {
              *v8 = v184;
              v8[1] = v179;
            }
            goto LABEL_309;
          }
          v178 = v184;
          goto LABEL_309;
        }
        if ((unsigned __int64)v9 < 2) {
          return result;
        }
        if (v9 == 2) {
          v164 = *(a2 - 1);
          v165 = *v8;
          v166 = *(float*)(v164 + 40);
          v167 = *(float*)(*v8 + 40);
          v168 = *(float*)(v164 + 32) < *(float*)(*v8 + 32);
          if ((float)((float)(v166 - v167) * (float)(v166 - v167)) > 100.0) {
            v168 = v166 < v167;
          }
          if (v168) {
            *v8 = v164;
            *(a2 - 1) = v165;
          }
          return result;
        }
      LABEL_10:
        if (v9 <= 23) {
          v187 = v8 + 1;
          v189 = v8 == a2 || v187 == a2;
          if ((a4 & 1) != 0) {
            if (!v189) {
              v190 = 0;
              v191 = v8;
              do {
                v194 = *v191;
                v193 = v191[1];
                v191 = v187;
                v195 = *(float*)(v193 + 40);
                v196 = *(float*)(v194 + 40);
                v197 = *(float*)(v193 + 32) < *(float*)(v194 + 32);
                if ((float)((float)(v195 - v196) * (float)(v195 - v196)) >
                    100.0) {
                  v197 = v195 < v196;
                }
                if (v197) {
                  v198 = v190;
                  do {
                    *(__int64*)((char*)v8 + v198 + 8) = v194;
                    if (v198 == 0) {
                      v192 = v8;
                      goto LABEL_211;
                    }
                    v194 = *(__int64*)((char*)v8 + v198 - 8);
                    v199 = *(float*)(v193 + 40);
                    v198 -= 8;
                    v200 = *(float*)(v194 + 40);
                    v201 = *(float*)(v193 + 32) < *(float*)(v194 + 32);
                    if ((float)((float)(v199 - v200) * (float)(v199 - v200)) >
                        100.0) {
                      v201 = v199 < v200;
                    }
                  } while (v201);
                  v192 = (__int64*)((char*)v8 + v198 + 8);
                LABEL_211:
                  *v192 = v193;
                }
                v187 = v191 + 1;
                v190 += 8;
              } while (v191 + 1 != a2);
            }
          }
          else if (!v189) {
            do {
              v267 = *v7;
              v266 = v7[1];
              v7 = v187;
              v268 = *(float*)(v266 + 40);
              v269 = *(float*)(v267 + 40);
              v270 = *(float*)(v266 + 32) < *(float*)(v267 + 32);
              if ((float)((float)(v268 - v269) * (float)(v268 - v269)) >
                  100.0) {
                v270 = v268 < v269;
              }
              if (v270) {
                v271 = v187;
                do {
                  *v271 = v267;
                  v267 = *(v271 - 2);
                  --v271;
                  v272 = *(float*)(v266 + 40);
                  v273 = *(float*)(v267 + 40);
                  v274 = *(float*)(v266 + 32) < *(float*)(v267 + 32);
                  if ((float)((float)(v272 - v273) * (float)(v272 - v273)) >
                      100.0) {
                    v274 = v272 < v273;
                  }
                } while (v274);
                *v271 = v266;
              }
              v187 = v7 + 1;
            } while (v7 + 1 != a2);
          }
          return result;
        }
        if (a3 == 0) {
          if (v8 != a2) {
            v202 = (unsigned __int64)(v9 - 2) >> 1;
            v203 = v202;
            do {
              v204 = v203;
              if (v202 >= v203) {
                v205 = (2 * (v203 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
                v206 = 2 * v203 + 2;
                v207 = &v8[v205];
                v208 = *v207;
                if (v206 < v9) {
                  v209 = v207[1];
                  v210 = *(float*)(v208 + 40);
                  v211 = *(float*)(v209 + 40);
                  v212 = *(float*)(v208 + 32) < *(float*)(v209 + 32);
                  result = v210 < v211;
                  if ((float)((float)(v210 - v211) * (float)(v210 - v211)) >
                      100.0) {
                    v212 = v210 < v211;
                  }
                  if (v212) {
                    v208 = v207[1];
                    ++v207;
                    v205 = 2 * v204 + 2;
                  }
                }
                v213 = &v8[v204];
                v214 = *(float*)(v208 + 40);
                v215 = *v213;
                v216 = *(float*)(*v213 + 40);
                v217 = *(float*)(v208 + 32) < *(float*)(*v213 + 32);
                if ((float)((float)(v214 - v216) * (float)(v214 - v216)) >
                    100.0) {
                  v217 = v214 < v216;
                }
                if (!v217) {
                  do {
                    v220 = v207;
                    *v213 = v208;
                    if (v202 < v205) {
                      break;
                    }
                    v221 = (2 * v205) | 1;
                    v222 = 2 * v205 + 2;
                    v207 = &v8[v221];
                    v208 = *v207;
                    if (v222 < v9) {
                      v223 = v207[1];
                      v224 = *(float*)(v208 + 40);
                      v225 = *(float*)(v223 + 40);
                      v226 = *(float*)(v208 + 32) < *(float*)(v223 + 32);
                      if ((float)((float)(v224 - v225) * (float)(v224 - v225)) >
                          100.0) {
                        v226 = v224 < v225;
                      }
                      if (v226) {
                        v208 = v207[1];
                        ++v207;
                        v221 = v222;
                      }
                    }
                    v218 = *(float*)(v208 + 40);
                    v219 = *(float*)(v215 + 40);
                    result = (float)((float)(v218 - v219) *
                                     (float)(v218 - v219)) <= 100.0
                                 ? *(float*)(v208 + 32) < *(float*)(v215 + 32)
                                 : v218 < v219;
                    v213 = v220;
                    v205 = v221;
                  } while ((_DWORD)result != 1);
                  *v220 = v215;
                }
              }
              v203 = v204 - 1;
            } while (v204 != 0);
            do {
              v228 = *v8;
              v229 = 0;
              v230 = v8;
              do {
                v238 = &v230[v229];
                v237 = v238 + 1;
                v236 = v238[1];
                v239 = (2 * v229) | 1;
                v229 = 2 * v229 + 2;
                if (v229 < v9) {
                  v233 = v238[2];
                  v231 = v238 + 2;
                  v232 = v233;
                  v234 = *(float*)(v236 + 40);
                  v235 = *(float*)(v233 + 40);
                  LODWORD(result) = *(float*)(v236 + 32) < *(float*)(v233 + 32);
                  if ((float)((float)(v234 - v235) * (float)(v234 - v235)) <=
                      100.0) {
                    result = (unsigned int)result;
                  }
                  else {
                    result = v234 < v235;
                  }
                  if ((_DWORD)result != 0) {
                    v236 = v232;
                    v237 = v231;
                  }
                  else {
                    v229 = v239;
                  }
                }
                else {
                  v229 = v239;
                }
                *v230 = v236;
                v230 = v237;
              } while (v229 <= (__int64)((unsigned __int64)(v9 - 2) >> 1));
              if (v237 == --a2) {
                *v237 = v228;
              }
              else {
                *v237 = *a2;
                *a2 = v228;
                v240 = ((char*)v237 - (char*)v8 + 8) >> 3;
                v227 = v240 < 2;
                v241 = v240 - 2;
                if (!v227) {
                  v242 = v241 >> 1;
                  v243 = *v237;
                  v244 = &v8[v242];
                  v245 = *v244;
                  v246 = *(float*)(*v237 + 40);
                  v247 = *(float*)(*v244 + 40);
                  v248 = *(float*)(*v244 + 32) < *(float*)(*v237 + 32);
                  if ((float)((float)(v247 - v246) * (float)(v247 - v246)) >
                      100.0) {
                    v248 = v247 < v246;
                  }
                  if (v248) {
                    do {
                      v249 = v244;
                      *v237 = v245;
                      if (v242 == 0) {
                        break;
                      }
                      v250 = *(float*)(v243 + 40);
                      v242 = (v242 - 1) >> 1;
                      v244 = &v8[v242];
                      v245 = *v244;
                      v251 = *(float*)(*v244 + 40);
                      v252 = v251 < v250;
                      if ((float)((float)(v251 - v250) *
                                  (float)(v251 - v250)) <= 100.0) {
                        v252 = *(float*)(*v244 + 32) < *(float*)(v243 + 32);
                      }
                      v237 = v249;
                    } while (v252);
                    *v249 = v243;
                  }
                }
              }
              v227 = v9-- <= 2;
            } while (!v227);
          }
          return result;
        }
        v10 = *(a2 - 1);
        v11 = &v8[(unsigned __int64)v9 >> 1];
        v12 = *(float*)(v10 + 40);
        if ((unsigned __int64)v9 >= 0x81) {
          v13 = *v11;
          v14 = *v8;
          v15 = *(float*)(*v11 + 40);
          v16 = *(float*)(*v8 + 40);
          v17 = *(float*)(*v11 + 32);
          v18 = v15 < v16;
          if ((float)((float)(v15 - v16) * (float)(v15 - v16)) <= 100.0) {
            v18 = v17 < *(float*)(*v8 + 32);
          }
          v19 = *(float*)(v10 + 32) < v17;
          if ((float)((float)(v12 - v15) * (float)(v12 - v15)) > 100.0) {
            v19 = v12 < v15;
          }
          if (v18) {
            if (v19) {
              *v8 = v10;
            LABEL_41:
              *(a2 - 1) = v14;
              goto LABEL_42;
            }
            *v8 = v13;
            *v11 = v14;
            v35 = *(a2 - 1);
            v36 = *(float*)(v14 + 40);
            v37 = *(float*)(v35 + 40);
            v38 = *(float*)(v35 + 32) < *(float*)(v14 + 32);
            if ((float)((float)(v37 - v36) * (float)(v37 - v36)) > 100.0) {
              v38 = v37 < v36;
            }
            if (v38) {
              *v11 = v35;
              goto LABEL_41;
            }
          }
          else if (v19) {
            *v11 = v10;
            *(a2 - 1) = v13;
            v27 = *v8;
            v28 = *(float*)(*v11 + 40);
            v29 = *(float*)(*v8 + 40);
            v30 = *(float*)(*v11 + 32) < *(float*)(*v8 + 32);
            if ((float)((float)(v28 - v29) * (float)(v28 - v29)) > 100.0) {
              v30 = v28 < v29;
            }
            if (v30) {
              *v8 = *v11;
              *v11 = v27;
            }
          }
        LABEL_42:
          v39 = *(v11 - 1);
          v40 = v8[1];
          v41 = *(float*)(v39 + 40);
          v42 = *(float*)(v40 + 40);
          v43 = *(float*)(v39 + 32);
          if ((float)((float)(v41 - v42) * (float)(v41 - v42)) <= 100.0) {
            v44 = v43 < *(float*)(v40 + 32);
          }
          else {
            v44 = v41 < v42;
          }
          v45 = *(a2 - 2);
          v46 = *(float*)(v45 + 40);
          v47 = *(float*)(v45 + 32) < v43;
          if ((float)((float)(v46 - v41) * (float)(v46 - v41)) > 100.0) {
            v47 = v46 < v41;
          }
          if (v44) {
            if (v47) {
              v8[1] = v45;
            LABEL_64:
              *(a2 - 2) = v40;
              goto LABEL_65;
            }
            v8[1] = v39;
            *(v11 - 1) = v40;
            v57 = *(a2 - 2);
            v58 = *(float*)(v40 + 40);
            v59 = *(float*)(v57 + 40);
            v60 = *(float*)(v57 + 32) < *(float*)(v40 + 32);
            if ((float)((float)(v59 - v58) * (float)(v59 - v58)) > 100.0) {
              v60 = v59 < v58;
            }
            if (v60) {
              *(v11 - 1) = v57;
              goto LABEL_64;
            }
          }
          else if (v47) {
            *(v11 - 1) = v45;
            *(a2 - 2) = v39;
            v48 = *(v11 - 1);
            v49 = v8[1];
            v50 = *(float*)(v48 + 40);
            v51 = *(float*)(v49 + 40);
            v52 = *(float*)(v48 + 32) < *(float*)(v49 + 32);
            if ((float)((float)(v50 - v51) * (float)(v50 - v51)) > 100.0) {
              v52 = v50 < v51;
            }
            if (v52) {
              v8[1] = v48;
              *(v11 - 1) = v49;
            }
          }
        LABEL_65:
          v61 = v11[1];
          v62 = v8[2];
          v63 = *(float*)(v61 + 40);
          v64 = *(float*)(v62 + 40);
          v65 = *(float*)(v61 + 32);
          if ((float)((float)(v63 - v64) * (float)(v63 - v64)) <= 100.0) {
            v66 = v65 < *(float*)(v62 + 32);
          }
          else {
            v66 = v63 < v64;
          }
          v67 = *(a2 - 3);
          v68 = *(float*)(v67 + 40);
          v69 = *(float*)(v67 + 32) < v65;
          if ((float)((float)(v68 - v63) * (float)(v68 - v63)) > 100.0) {
            v69 = v68 < v63;
          }
          if (v66) {
            if (v69) {
              v8[2] = v67;
            LABEL_82:
              *(a2 - 3) = v62;
              goto LABEL_83;
            }
            v8[2] = v61;
            v11[1] = v62;
            v75 = *(a2 - 3);
            v76 = *(float*)(v62 + 40);
            v77 = *(float*)(v75 + 40);
            v78 = *(float*)(v75 + 32) < *(float*)(v62 + 32);
            if ((float)((float)(v77 - v76) * (float)(v77 - v76)) > 100.0) {
              v78 = v77 < v76;
            }
            if (v78) {
              v11[1] = v75;
              goto LABEL_82;
            }
          }
          else if (v69) {
            v11[1] = v67;
            *(a2 - 3) = v61;
            v70 = v11[1];
            v71 = v8[2];
            v72 = *(float*)(v70 + 40);
            v73 = *(float*)(v71 + 40);
            v74 = *(float*)(v70 + 32) < *(float*)(v71 + 32);
            if ((float)((float)(v72 - v73) * (float)(v72 - v73)) > 100.0) {
              v74 = v72 < v73;
            }
            if (v74) {
              v8[2] = v70;
              v11[1] = v71;
            }
          }
        LABEL_83:
          v79 = *(v11 - 1);
          v80 = *v11;
          v81 = *(float*)(*v11 + 40);
          v82 = *(float*)(v79 + 40);
          v83 = *(float*)(*v11 + 32);
          if ((float)((float)(v81 - v82) * (float)(v81 - v82)) <= 100.0) {
            v84 = v83 < *(float*)(v79 + 32);
          }
          else {
            v84 = v81 < v82;
          }
          v85 = v11[1];
          v86 = *(float*)(v85 + 40);
          v87 = *(float*)(v85 + 32) < v83;
          if ((float)((float)(v86 - v81) * (float)(v86 - v81)) > 100.0) {
            v87 = v86 < v81;
          }
          if (v84) {
            if (v87) {
              *(v11 - 1) = v85;
              v11[1] = v79;
            LABEL_96:
              v79 = v80;
              goto LABEL_102;
            }
            *(v11 - 1) = v80;
            *v11 = v79;
            v91 = *(float*)(v85 + 40);
            v92 = *(float*)(v79 + 40);
            v93 = *(float*)(v85 + 32) < *(float*)(v79 + 32);
            if ((float)((float)(v91 - v92) * (float)(v91 - v92)) > 100.0) {
              v93 = v91 < v92;
            }
            if (!v93) {
              goto LABEL_102;
            }
            *v11 = v85;
            v11[1] = v79;
          }
          else {
            if (!v87) {
              goto LABEL_96;
            }
            *v11 = v85;
            v11[1] = v80;
            v88 = *(float*)(v85 + 40);
            v89 = *(float*)(v79 + 40);
            v90 = *(float*)(v85 + 32) < *(float*)(v79 + 32);
            if ((float)((float)(v88 - v89) * (float)(v88 - v89)) > 100.0) {
              v90 = v88 < v89;
            }
            if (v90) {
              *(v11 - 1) = v85;
              *v11 = v79;
            LABEL_102:
              v94 = *v8;
              *v8 = v79;
              *v11 = v94;
              goto LABEL_103;
            }
          }
          v79 = v85;
          goto LABEL_102;
        }
        v20 = *v8;
        v21 = *v11;
        v22 = *(float*)(*v8 + 40);
        v23 = *(float*)(*v11 + 40);
        v24 = *(float*)(*v8 + 32);
        v25 = v22 < v23;
        if ((float)((float)(v22 - v23) * (float)(v22 - v23)) <= 100.0) {
          v25 = v24 < *(float*)(*v11 + 32);
        }
        v26 = *(float*)(v10 + 32) < v24;
        if ((float)((float)(v12 - v22) * (float)(v12 - v22)) > 100.0) {
          v26 = v12 < v22;
        }
        if (v25) {
          if (v26) {
            *v11 = v10;
          LABEL_59:
            *(a2 - 1) = v21;
            goto LABEL_103;
          }
          *v11 = v20;
          *v8 = v21;
          v53 = *(a2 - 1);
          v54 = *(float*)(v21 + 40);
          v55 = *(float*)(v53 + 40);
          v56 = *(float*)(v53 + 32) < *(float*)(v21 + 32);
          if ((float)((float)(v55 - v54) * (float)(v55 - v54)) > 100.0) {
            v56 = v55 < v54;
          }
          if (v56) {
            *v8 = v53;
            goto LABEL_59;
          }
        }
        else if (v26) {
          *v8 = v10;
          *(a2 - 1) = v20;
          v31 = *v11;
          v32 = *(float*)(*v8 + 40);
          v33 = *(float*)(*v11 + 40);
          v34 = *(float*)(*v8 + 32) < *(float*)(*v11 + 32);
          if ((float)((float)(v32 - v33) * (float)(v32 - v33)) > 100.0) {
            v34 = v32 < v33;
          }
          if (v34) {
            *v11 = *v8;
            *v8 = v31;
          }
        }
      LABEL_103:
        v95 = *v8;
        --a3;
        if ((a4 & 1) != 0) {
          break;
        }
        v98 = *(v8 - 1);
        v99 = *(float*)(v95 + 40);
        v100 = *(float*)(v98 + 40);
        v97 = *(_OWORD*)(v95 + 32);
        v101 = *(float*)(v98 + 32) < *(float*)&v97;
        if ((float)((float)(v100 - v99) * (float)(v100 - v99)) > 100.0) {
          v101 = v100 < v99;
        }
        if (v101) {
          LODWORD(v96) = *(_QWORD*)(v95 + 40);
          goto LABEL_109;
        }
        v129 = *(a2 - 1);
        v130 = *(float*)(v129 + 40);
        v131 = *(float*)&v97 < *(float*)(v129 + 32);
        if ((float)((float)(v99 - v130) * (float)(v99 - v130)) > 100.0) {
          v131 = v99 < v130;
        }
        if (v131) {
          do {
            v132 = v8[1];
            ++v8;
            v133 = *(float*)(v132 + 40);
            v134 = *(float*)&v97 < *(float*)(v132 + 32);
            if ((float)((float)(v99 - v133) * (float)(v99 - v133)) > 100.0) {
              v134 = v99 < v133;
            }
          } while (!v134);
        }
        else {
          v135 = v8 + 1;
          do {
            v8 = v135;
            if (v135 >= a2) {
              break;
            }
            ++v135;
            v136 = *(float*)(*v8 + 40);
            v137 = *(float*)&v97 < *(float*)(*v8 + 32);
            if ((float)((float)(v99 - v136) * (float)(v99 - v136)) > 100.0) {
              v137 = v99 < v136;
            }
          } while (!v137);
        }
        v138 = a2;
        if (v8 < a2) {
          v138 = a2;
          do {
            v139 = *--v138;
            v140 = *(float*)(v139 + 40);
            v141 = *(float*)&v97 < *(float*)(v139 + 32);
            if ((float)((float)(v99 - v140) * (float)(v99 - v140)) > 100.0) {
              v141 = v99 < v140;
            }
          } while (v141);
        }
        if (v8 < v138) {
          v142 = *v8;
          v143 = *v138;
          do {
            *v8 = v143;
            *v138 = v142;
            v144 = *(float*)(v95 + 40);
            v145 = *(_OWORD*)(v95 + 32);
            do {
              v146 = v8[1];
              ++v8;
              v142 = v146;
              v147 = *(float*)(v146 + 40);
              v148 = *(float*)&v145 < *(float*)(v146 + 32);
              if ((float)((float)(v144 - v147) * (float)(v144 - v147)) >
                  100.0) {
                v148 = v144 < v147;
              }
            } while (!v148);
            do {
              v149 = *--v138;
              v143 = v149;
              v150 = *(float*)(v149 + 40);
              v151 = *(float*)&v145 < *(float*)(v149 + 32);
              if ((float)((float)(v144 - v150) * (float)(v144 - v150)) >
                  100.0) {
                v151 = v144 < v150;
              }
            } while (v151);
          } while (v8 < v138);
        }
        v152 = v8 - 1;
        if (v7 != v8 - 1) {
          *v7 = *v152;
        }
        a4 = 0;
        *v152 = v95;
      }
      v96 = *(float*)(v95 + 40);
      LODWORD(v97) = *(_DWORD*)(v95 + 32);
    LABEL_109:
      v102 = 0;
      do {
        v103 = &v8[v102++];
        v104 = v103[1];
        v105 = *(float*)(v104 + 40);
        v106 = *(float*)(v104 + 32) < *(float*)&v97;
        if ((float)((float)(v105 - v96) * (float)(v105 - v96)) > 100.0) {
          v106 = v105 < v96;
        }
      } while (v106);
      v107 = &v8[v102];
      v108 = a2;
      if (v102 == 1) {
        v108 = a2;
        do {
          if (v107 >= v108) {
            break;
          }
          v112 = *--v108;
          v113 = *(float*)(v112 + 40);
          v114 = *(float*)(v112 + 32) < *(float*)&v97;
          if ((float)((float)(v113 - v96) * (float)(v113 - v96)) > 100.0) {
            v114 = v113 < v96;
          }
        } while (!v114);
      }
      else {
        do {
          v109 = *--v108;
          v110 = *(float*)(v109 + 40);
          v111 = *(float*)(v109 + 32) < *(float*)&v97;
          if ((float)((float)(v110 - v96) * (float)(v110 - v96)) > 100.0) {
            v111 = v110 < v96;
          }
        } while (!v111);
      }
      if (v107 >= v108) {
        v126 = v107 - 1;
        if (v8 == v107 - 1) {
          goto LABEL_137;
        }
      LABEL_136:
        *v8 = *v126;
        goto LABEL_137;
      }
      v115 = *v108;
      v116 = v107;
      v117 = v108;
      do {
        *v116 = v115;
        *v117 = v104;
        v118 = *(float*)(v95 + 40);
        v119 = *(_OWORD*)(v95 + 32);
        do {
          v120 = v116[1];
          ++v116;
          v104 = v120;
          v121 = *(float*)(v120 + 40);
          v122 = *(float*)(v120 + 32) < *(float*)&v119;
          if ((float)((float)(v121 - v118) * (float)(v121 - v118)) > 100.0) {
            v122 = v121 < v118;
          }
        } while (v122);
        do {
          v123 = *--v117;
          v115 = v123;
          v124 = *(float*)(v123 + 40);
          v125 = *(float*)(v123 + 32) < *(float*)&v119;
          if ((float)((float)(v124 - v118) * (float)(v124 - v118)) > 100.0) {
            v125 = v124 < v118;
          }
        } while (!v125);
      } while (v116 < v117);
      v126 = v116 - 1;
      if (v8 != v116 - 1) {
        goto LABEL_136;
      }
    LABEL_137:
      *v126 = v95;
      if (v107 < v108) {
        goto LABEL_140;
      }
      v127 = SpotMgr_133a380(v8, v126);
      v8 = v126 + 1;
      v128 = v127;
      result = SpotMgr_133a380(v126 + 1, a2);
      if ((result & 1) != 0) {
        break;
      }
      if ((v128 & 1) == 0) {
      LABEL_140:
        result = SpotMgr_1338da0(v7, v126, a3, a4 & 1);
        a4 = 0;
        v8 = v126 + 1;
      }
    }
    a2 = v126;
    if ((v128 & 1) == 0) {
      continue;
    }
    return result;
  }
}

bool SpotMgr_133a380(__int64* a1, __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  float v6;
  float v7;
  float v8;
  bool v9;
  __int64 v10;
  float v11;
  _BOOL4 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  float v17;
  float v18;
  _BOOL4 v19;
  __int64 v20;
  __int64 v21;
  float v22;
  float v23;
  float v24;
  bool v25;
  __int64 v26;
  float v27;
  _BOOL4 v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  float v33;
  float v34;
  float v35;
  bool v36;
  float v37;
  _BOOL4 v38;
  __int64 v39;
  __int64 v40;
  float v41;
  float v42;
  float v43;
  bool v44;
  __int64 v45;
  float v46;
  _BOOL4 v47;
  __int64 v48;
  __int64 v49;
  float v50;
  float v51;
  float v52;
  _BOOL4 v53;
  bool v54;
  float v55;
  float v56;
  _BOOL4 v57;
  float v58;
  float v59;
  _BOOL4 v60;
  float v61;
  float v62;
  _BOOL4 v63;
  __int64 v64;
  float v65;
  float v66;
  _BOOL4 v67;
  float v68;
  float v69;
  _BOOL4 v70;
  __int64* v71;
  __int64 v72;
  int v73;
  __int64* v74;
  __int64 v75;
  __int64 v76;
  float v77;
  float v78;
  _BOOL4 v79;
  __int64 v80;
  __int64 v81;
  float v82;
  float v83;
  bool v84;
  float v85;
  float v86;
  _BOOL4 v87;
  float v88;
  float v89;
  _BOOL4 v90;
  __int64 v91;
  float v92;
  float v93;
  _BOOL4 v94;
  __int64 v95;
  float v96;
  float v97;
  _BOOL4 v98;
  float v99;
  float v100;
  _BOOL4 v101;
  float v102;
  float v103;
  _BOOL4 v104;
  __int64 v105;
  float v106;
  float v107;
  _BOOL4 v108;
  __int64 v109;
  float v110;
  float v111;
  _BOOL4 v112;
  __int64 v113;
  float v114;
  float v115;
  _BOOL4 v116;
  float v117;
  float v118;
  int v119;

  v2 = a2 - a1;
  if (v2 > 2) {
    if (v2 == 3) {
      v20 = *a1;
      v21 = a1[1];
      v22 = *(float*)(v21 + 40);
      v23 = *(float*)(*a1 + 40);
      v24 = *(float*)(v21 + 32);
      if ((float)((float)(v22 - v23) * (float)(v22 - v23)) <= 100.0) {
        v25 = v24 < *(float*)(*a1 + 32);
      }
      else {
        v25 = v22 < v23;
      }
      v26 = *(a2 - 1);
      v27 = *(float*)(v26 + 40);
      v28 = *(float*)(v26 + 32) < v24;
      if ((float)((float)(v27 - v22) * (float)(v27 - v22)) > 100.0) {
        v28 = v27 < v22;
      }
      if (v25) {
        if (v28) {
          *a1 = v26;
        }
        else {
          *a1 = v21;
          a1[1] = v20;
          v64 = *(a2 - 1);
          v65 = *(float*)(v20 + 40);
          v66 = *(float*)(v64 + 40);
          v67 = *(float*)(v64 + 32) < *(float*)(v20 + 32);
          if ((float)((float)(v66 - v65) * (float)(v66 - v65)) > 100.0) {
            v67 = v66 < v65;
          }
          if (!v67) {
            return true;
          }
          a1[1] = v64;
        }
        *(a2 - 1) = v20;
        return true;
      }
      if (!v28) {
        return true;
      }
      a1[1] = v26;
      *(a2 - 1) = v21;
      v49 = *a1;
      v48 = a1[1];
      v50 = *(float*)(v48 + 40);
      v51 = *(float*)(*a1 + 40);
      v52 = (float)(v50 - v51) * (float)(v50 - v51);
      v53 = *(float*)(v48 + 32) < *(float*)(*a1 + 32);
      v54 = v50 < v51;
      goto LABEL_126;
    }
    if (v2 != 4) {
      if (v2 != 5) {
        goto LABEL_28;
      }
      v5 = *a1;
      v4 = a1[1];
      v6 = *(float*)(v4 + 40);
      v7 = *(float*)(*a1 + 40);
      v8 = *(float*)(v4 + 32);
      if ((float)((float)(v6 - v7) * (float)(v6 - v7)) <= 100.0) {
        v9 = v8 < *(float*)(*a1 + 32);
      }
      else {
        v9 = v6 < v7;
      }
      v10 = a1[2];
      v11 = *(float*)(v10 + 40);
      v12 = *(float*)(v10 + 32) < v8;
      if ((float)((float)(v11 - v6) * (float)(v11 - v6)) > 100.0) {
        v12 = v11 < v6;
      }
      if (v9) {
        if (v12) {
          *a1 = v10;
          a1[2] = v5;
          v13 = v10;
          v14 = v4;
        LABEL_88:
          v4 = v5;
        LABEL_104:
          v95 = a1[3];
          v96 = *(float*)(v4 + 40);
          v97 = *(float*)(v95 + 40);
          v98 = *(float*)(v95 + 32) < *(float*)(v4 + 32);
          if ((float)((float)(v97 - v96) * (float)(v97 - v96)) > 100.0) {
            v98 = v97 < v96;
          }
          if (v98) {
            a1[2] = v95;
            a1[3] = v4;
            v99 = *(float*)(v95 + 40);
            v100 = *(float*)(v14 + 40);
            v101 = *(float*)(v95 + 32) < *(float*)(v14 + 32);
            if ((float)((float)(v99 - v100) * (float)(v99 - v100)) > 100.0) {
              v101 = v99 < v100;
            }
            if (v101) {
              a1[1] = v95;
              a1[2] = v14;
              v102 = *(float*)(v95 + 40);
              v103 = *(float*)(v13 + 40);
              v104 = *(float*)(v95 + 32) < *(float*)(v13 + 32);
              if ((float)((float)(v102 - v103) * (float)(v102 - v103)) >
                  100.0) {
                v104 = v102 < v103;
              }
              if (v104) {
                *a1 = v95;
                a1[1] = v13;
              }
            }
          }
          else {
            v4 = a1[3];
          }
          v105 = *(a2 - 1);
          v106 = *(float*)(v4 + 40);
          v107 = *(float*)(v105 + 40);
          v108 = *(float*)(v105 + 32) < *(float*)(v4 + 32);
          if ((float)((float)(v107 - v106) * (float)(v107 - v106)) > 100.0) {
            v108 = v107 < v106;
          }
          if (!v108) {
            return true;
          }
          a1[3] = v105;
          *(a2 - 1) = v4;
          v109 = a1[2];
          v48 = a1[3];
          v110 = *(float*)(v48 + 40);
          v111 = *(float*)(v109 + 40);
          v112 = *(float*)(v48 + 32) < *(float*)(v109 + 32);
          if ((float)((float)(v110 - v111) * (float)(v110 - v111)) > 100.0) {
            v112 = v110 < v111;
          }
          if (!v112) {
            return true;
          }
          a1[2] = v48;
          a1[3] = v109;
          goto LABEL_122;
        }
        *a1 = v4;
        a1[1] = v5;
        v85 = *(float*)(v10 + 40);
        v86 = *(float*)(v5 + 40);
        v87 = *(float*)(v10 + 32) < *(float*)(v5 + 32);
        if ((float)((float)(v85 - v86) * (float)(v85 - v86)) > 100.0) {
          v87 = v85 < v86;
        }
        if (v87) {
          a1[1] = v10;
          a1[2] = v5;
          v13 = v4;
          v14 = v10;
          goto LABEL_88;
        }
        v13 = v4;
        v14 = v5;
      }
      else {
        if (v12) {
          a1[1] = v10;
          a1[2] = v4;
          v58 = *(float*)(v10 + 40);
          v59 = *(float*)(v5 + 40);
          v60 = *(float*)(v10 + 32) < *(float*)(v5 + 32);
          if ((float)((float)(v58 - v59) * (float)(v58 - v59)) > 100.0) {
            v60 = v58 < v59;
          }
          if (v60) {
            *a1 = v10;
            a1[1] = v5;
            v13 = v10;
            v14 = v5;
          }
          else {
            v13 = v5;
            v14 = v10;
          }
          goto LABEL_104;
        }
        v13 = *a1;
        v14 = a1[1];
      }
      v4 = v10;
      goto LABEL_104;
    }
    v40 = *a1;
    v39 = a1[1];
    v41 = *(float*)(v39 + 40);
    v42 = *(float*)(*a1 + 40);
    v43 = *(float*)(v39 + 32);
    if ((float)((float)(v41 - v42) * (float)(v41 - v42)) <= 100.0) {
      v44 = v43 < *(float*)(*a1 + 32);
    }
    else {
      v44 = v41 < v42;
    }
    v45 = a1[2];
    v46 = *(float*)(v45 + 40);
    v47 = *(float*)(v45 + 32) < v43;
    if ((float)((float)(v46 - v41) * (float)(v46 - v41)) > 100.0) {
      v47 = v46 < v41;
    }
    if (v44) {
      if (v47) {
        *a1 = v45;
      LABEL_94:
        a1[2] = v40;
        v39 = v40;
      LABEL_96:
        v91 = *(a2 - 1);
        v92 = *(float*)(v39 + 40);
        v93 = *(float*)(v91 + 40);
        v94 = *(float*)(v91 + 32) < *(float*)(v39 + 32);
        if ((float)((float)(v93 - v92) * (float)(v93 - v92)) > 100.0) {
          v94 = v93 < v92;
        }
        if (!v94) {
          return true;
        }
        a1[2] = v91;
        *(a2 - 1) = v39;
        v48 = a1[2];
      LABEL_122:
        v113 = a1[1];
        v114 = *(float*)(v48 + 40);
        v115 = *(float*)(v113 + 40);
        v116 = *(float*)(v48 + 32) < *(float*)(v113 + 32);
        if ((float)((float)(v114 - v115) * (float)(v114 - v115)) > 100.0) {
          v116 = v114 < v115;
        }
        if (!v116) {
          return true;
        }
        a1[1] = v48;
        a1[2] = v113;
        v49 = *a1;
        v117 = *(float*)(v48 + 40);
        v118 = *(float*)(*a1 + 40);
        v53 = *(float*)(v48 + 32) < *(float*)(*a1 + 32);
        v54 = v117 < v118;
        v52 = (float)(v117 - v118) * (float)(v117 - v118);
      LABEL_126:
        v119 = v54;
        if (v52 > 100.0) {
          v53 = v119;
        }
        if (!v53) {
          return true;
        }
        *a1 = v48;
        a1[1] = v49;
        return true;
      }
      *a1 = v39;
      a1[1] = v40;
      v88 = *(float*)(v45 + 40);
      v89 = *(float*)(v40 + 40);
      v90 = *(float*)(v45 + 32) < *(float*)(v40 + 32);
      if ((float)((float)(v88 - v89) * (float)(v88 - v89)) > 100.0) {
        v90 = v88 < v89;
      }
      if (v90) {
        a1[1] = v45;
        goto LABEL_94;
      }
    }
    else if (v47) {
      a1[1] = v45;
      a1[2] = v39;
      v61 = *(float*)(v45 + 40);
      v62 = *(float*)(v40 + 40);
      v63 = *(float*)(v45 + 32) < *(float*)(v40 + 32);
      if ((float)((float)(v61 - v62) * (float)(v61 - v62)) > 100.0) {
        v63 = v61 < v62;
      }
      if (v63) {
        *a1 = v45;
        a1[1] = v40;
      }
      goto LABEL_96;
    }
    v39 = v45;
    goto LABEL_96;
  }
  if ((unsigned __int64)v2 < 2) {
    return true;
  }
  if (v2 == 2) {
    v15 = *(a2 - 1);
    v16 = *a1;
    v17 = *(float*)(v15 + 40);
    v18 = *(float*)(*a1 + 40);
    v19 = *(float*)(v15 + 32) < *(float*)(*a1 + 32);
    if ((float)((float)(v17 - v18) * (float)(v17 - v18)) > 100.0) {
      v19 = v17 < v18;
    }
    if (!v19) {
      return true;
    }
    *a1 = v15;
    *(a2 - 1) = v16;
    return true;
  }
LABEL_28:
  v29 = *a1;
  v30 = a1[1];
  v31 = a1 + 2;
  v32 = a1[2];
  v33 = *(float*)(v30 + 40);
  v34 = *(float*)(*a1 + 40);
  v35 = *(float*)(v30 + 32);
  v36 = v33 < v34;
  v37 = *(float*)(v32 + 40);
  if ((float)((float)(v33 - v34) * (float)(v33 - v34)) <= 100.0) {
    v36 = v35 < *(float*)(*a1 + 32);
  }
  v38 = *(float*)(v32 + 32) < v35;
  if ((float)((float)(v37 - v33) * (float)(v37 - v33)) > 100.0) {
    v38 = v37 < v33;
  }
  if (!v36) {
    if (v38) {
      a1[1] = v32;
      a1[2] = v30;
      v55 = *(float*)(v32 + 40);
      v56 = *(float*)(v29 + 40);
      v57 = *(float*)(v32 + 32) < *(float*)(v29 + 32);
      if ((float)((float)(v55 - v56) * (float)(v55 - v56)) > 100.0) {
        v57 = v55 < v56;
      }
      if (v57) {
        *a1 = v32;
        a1[1] = v29;
      }
    }
    goto LABEL_70;
  }
  if (v38) {
    *a1 = v32;
  }
  else {
    *a1 = v30;
    a1[1] = v29;
    v68 = *(float*)(v32 + 40);
    v69 = *(float*)(v29 + 40);
    v70 = *(float*)(v32 + 32) < *(float*)(v29 + 32);
    if ((float)((float)(v68 - v69) * (float)(v68 - v69)) > 100.0) {
      v70 = v68 < v69;
    }
    if (!v70) {
      goto LABEL_70;
    }
    a1[1] = v32;
  }
  a1[2] = v29;
LABEL_70:
  v71 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v72 = 24;
  v73 = 0;
  while (1) {
    v75 = *v71;
    v76 = *v31;
    v77 = *(float*)(*v71 + 40);
    v78 = *(float*)(v76 + 40);
    v79 = *(float*)(*v71 + 32) < *(float*)(v76 + 32);
    if ((float)((float)(v77 - v78) * (float)(v77 - v78)) > 100.0) {
      v79 = v77 < v78;
    }
    if (v79) {
      v80 = v72;
      do {
        v81 = v80 - 8;
        *(__int64*)((char*)a1 + v80) = v76;
        if (v80 == 8) {
          v74 = a1;
          goto LABEL_73;
        }
        v82 = *(float*)(v75 + 40);
        v76 = *(__int64*)((char*)a1 + v80 - 16);
        v83 = *(float*)(v76 + 40);
        v84 = v82 < v83;
        if ((float)((float)(v82 - v83) * (float)(v82 - v83)) <= 100.0) {
          v84 = *(float*)(v75 + 32) < *(float*)(v76 + 32);
        }
        v80 -= 8;
      } while (v84);
      v74 = (__int64*)((char*)a1 + v81);
    LABEL_73:
      ++v73;
      *v74 = v75;
      if (v73 == 8) {
        return v71 + 1 == a2;
      }
    }
    v31 = v71++;
    v72 += 8;
    if (v71 == a2) {
      return true;
    }
  }
}

_QWORD* SpotMgr_133acc0(float* a1, __int64* a2, _QWORD** a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  __int64 v4;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD** v11;
  _QWORD* result;
  unsigned __int64 v13;
  __int64 v14;
  __int64* v15;
  _QWORD* v16;
  float v17;
  float v18;
  float v19;
  _BOOL8 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 primeEm;
  _QWORD* v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
  __int64* v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  _QWORD* v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  _QWORD* v42;
  unsigned __int64 v43;
  _QWORD* v44;
  __int64 v45;
  _QWORD* v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;

  v4 = *a2;
  v52 = *a2;
  v7 = std___1___hash_memory(&v52, 8);
  v8 = *((_QWORD*)a1 + 1);
  v9 = v7;
  if (v8 != 0) {
    v10 = v8 - 1;
    if ((v8 & (v8 - 1)) != 0) {
      v3 = v7;
      if (v7 >= v8) {
        v3 = v7 % v8;
      }
    }
    else {
      v3 = v10 & v7;
    }
    v11 = *(_QWORD***)(*(_QWORD*)a1 + 8 * v3);
    if (v11 != nullptr) {
      result = *v11;
      if (*v11 != nullptr) {
        if ((v8 & v10) == 0) {
          while (1) {
            v14 = result[1];
            if (v14 == v9) {
              if (result[2] == v4) {
                return result;
              }
            }
            else if ((v14 & v10) != v3) {
              goto LABEL_22;
            }
            result = (_QWORD*)*result;
            if (result == nullptr) {
              goto LABEL_22;
            }
          }
        }
        do {
          v13 = result[1];
          if (v13 == v9) {
            if (result[2] == v4) {
              return result;
            }
          }
          else {
            if (v13 >= v8) {
              v13 %= v8;
            }
            if (v13 != v3) {
              break;
            }
          }
          result = (_QWORD*)*result;
        } while (result != nullptr);
      }
    }
  }
LABEL_22:
  v15 = (__int64*)fw_memory_g_heap_manager_ptr;
  result = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v16 = *a3;
  *result = 0;
  result[1] = v9;
  v17 = a1[8];
  result[2] = *v16;
  result[3] = 0;
  v18 = (float)(unsigned __int64)(*((_QWORD*)a1 + 3) + 1LL);
  if (v8 == 0 || (float)(v17 * (float)v8) < v18) {
    v19 = v18 / v17;
    v20 = true;
    if (v8 >= 3) {
      v20 = (v8 & (v8 - 1)) != 0;
    }
    v21 = v20 | (2 * v8);
    v22 = vcvtps_u64_f32(v19);
    if (v21 <= v22) {
      primeEm = v22;
    }
    else {
      primeEm = v21;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      v24 = result;
      primeEm = std___1___next_prime(primeEm);
      result = v24;
      v8 = *((_QWORD*)a1 + 1);
    }
    if (primeEm <= v8) {
      if (primeEm >= v8) {
        goto LABEL_83;
      }
      v31 = vcvtps_u64_f32((float)*((unsigned __int64*)a1 + 3) / a1[8]);
      if (v8 < 3 || (v8 & (v8 - 1)) != 0) {
        v44 = result;
        v31 = std___1___next_prime(v31);
        result = v44;
      }
      else {
        v32 = 1LL << -(char)__clz(v31 - 1);
        if (v31 >= 2) {
          v31 = v32;
        }
      }
      if (primeEm <= v31) {
        primeEm = v31;
      }
      if (primeEm >= v8) {
        goto LABEL_83;
      }
      if (primeEm == 0) {
        v45 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v45 != 0) {
          v46 = result;
          v47 = 128;
          if (*(_QWORD*)(*v15 + 200) == 0) {
            v47 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v15 + v47);
          result = v46;
        }
        *((_QWORD*)a1 + 1) = 0;
        goto LABEL_83;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210_alt2();
    }
    v25 = result;
    v26 = fw_memory_HeapManager_Allocate_alt1(*v15, 8 * primeEm, 16, 0);
    v27 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v26;
    if (v27 != 0) {
      v28 = 128;
      if (*(_QWORD*)(*v15 + 200) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v15 + v28);
    }
    v29 = primeEm & 7;
    *((_QWORD*)a1 + 1) = primeEm;
    if (primeEm >= 8) {
      v30 = 0;
      result = v25;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30 + 48) = 0;
        v33 = *(_QWORD*)a1 + 8 * v30;
        v30 += 8;
        *(_QWORD*)(v33 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v30);
    }
    else {
      v30 = 0;
      result = v25;
    }
    if ((primeEm & 7) != 0) {
      v34 = 8 * v30;
      do {
        --v29;
        *(_QWORD*)(*(_QWORD*)a1 + v34) = 0;
        v34 += 8;
      } while (v29 != 0);
    }
    v36 = (__int64*)(a1 + 4);
    v35 = *((_QWORD**)a1 + 2);
    if (v35 != nullptr) {
      v37 = v35[1];
      v38 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v37 >= primeEm) {
          v37 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v37) = v36;
        v39 = (_QWORD*)*v35;
        if (*v35 == 0) {
          goto LABEL_83;
        }
        while (1) {
          v40 = v39[1];
          if (v40 >= primeEm) {
            v40 %= primeEm;
          }
          if (v40 != v37) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v40) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v40) = v35;
              goto LABEL_60;
            }
            *v35 = *v39;
            *v39 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v40);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v40) = v39;
            v39 = v35;
          }
          v40 = v37;
        LABEL_60:
          v35 = v39;
          v39 = (_QWORD*)*v39;
          v37 = v40;
          if (v39 == nullptr) {
            goto LABEL_83;
          }
        }
      }
      v41 = v37 & v38;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v41) = v36;
      while (1) {
        v42 = (_QWORD*)*v35;
        if (*v35 == 0) {
          break;
        }
        v43 = v42[1] & v38;
        if (v43 == v41) {
          v35 = (_QWORD*)*v35;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v43) != 0) {
          *v35 = *v42;
          *v42 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v43);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v43) = v42;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v43) = v35;
          v35 = v42;
          v41 = v43;
        }
      }
    }
  LABEL_83:
    v8 = *((_QWORD*)a1 + 1);
    if ((v8 & (v8 - 1)) != 0) {
      if (v9 >= v8) {
        v3 = v9 % v8;
      }
      else {
        v3 = v9;
      }
    }
    else {
      v3 = (v8 - 1) & v9;
    }
  }
  v48 = *(_QWORD*)a1;
  v49 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
  if (v49 != nullptr) {
    *result = *v49;
    *v49 = result;
  }
  else {
    v50 = *((_QWORD*)a1 + 2);
    *((_QWORD*)a1 + 2) = result;
    *result = v50;
    *(_QWORD*)(v48 + 8 * v3) = a1 + 4;
    if (*result != 0) {
      v51 = *(_QWORD*)(*result + 8LL);
      if ((v8 & (v8 - 1)) != 0) {
        if (v51 >= v8) {
          v51 %= v8;
        }
      }
      else {
        v51 &= v8 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v51) = result;
    }
  }
  ++*((_QWORD*)a1 + 3);
  return result;
}

__int64 game_gmap_SpotMgr_CalcExcludedDisposSpot_lambda0_Invoke(__int64 a1,
                                                                __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v5;
  int v6;
  __int64** v7;
  __int64** v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  int v14;
  __int64 v15;
  char* v16;
  signed __int64 v17;
  unsigned __int64 v18;
  __int64 v20;
  char* v21[3];
  _QWORD v22[3];
  char* v23[3];

  v2 = *a2;
  result = Impl_1328460(*a2);
  if ((result & 1) == 0) {
    result = Impl_132a360(v2);
    if ((result & 1) == 0) {
      return result;
    }
  }
  v5 = *(_QWORD*)(GameData_21c96e8 + 8);
  v6 = *(_DWORD*)(v5 + 56);
  v7 = *(__int64***)(v5 + 8);
  v8 = *(__int64***)(v5 + 16);
  if (v6 < 0) {
    for (; v7 != v8; ++v7) {
      v9 = *v7;
      if ((*v7)[12] == 0 && v9[69] == 0) {
        goto LABEL_13;
      }
    }
  }
  else if (v7 != v8) {
    while (1) {
      v10 = *v7++;
      v9 = v10;
      if (*((_DWORD*)v10 + 21) == v6) {
        break;
      }
      if (v7 == v8) {
        goto LABEL_9;
      }
    }
  LABEL_13:
    v11 = *v9;
    goto LABEL_14;
  }
LABEL_9:
  v11 = game_gmap_SpotMgr_GetCurrentSpot(result);
LABEL_14:
  v12 = fw_memory_g_heap_manager_ptr;
  v13 = (__int64*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0);
  v14 = *(_DWORD*)(a1 + 16);
  *v13 = v11;
  v13[1] = v2;
  v22[0] = v13;
  memset(v21, 0, sizeof(v21));
  v22[1] = v13 + 2;
  v22[2] = v13 + 2;
  SpotMgr_13306e0((void*)(v23), (unsigned __int64)v22, v14, v21);
  v15 = 128;
  if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
    v15 = 56;
  }
  result = nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v15);
  v16 = v23[0];
  v17 = v23[1] - v23[0];
  if (v23[1] != v23[0]) {
    result = *(_QWORD*)(a1 + 8);
    v18 = *(_QWORD*)(result + 8) - *(_QWORD*)result;
    if (v18 == 0 || v17 < v18) {
      result = GameRoutine_888970(result, v23[0], v23[1], v17 >> 3);
    }
  }
  if (v16 != nullptr) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
      v20 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v20);
  }
  return result;
}

__int64 game_gmap_SpotMgr_GetAroundSpot_lambda0_Invoke(__int64 result,
                                                       __int64** a2)
{
  __int64* v2;
  __int64 v3;
  char* v4;
  char* v5;
  char* v6;
  unsigned __int64 v7;
  __int64 v8;
  char* v9;
  unsigned __int64 v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  char* v20;
  __int64 v21;
  __int64 v22;

  if (((*a2)[68] & 0x10) != 0) {
    return result;
  }
  v2 = *(__int64**)(result + 8);
  v3 = **a2;
  v4 = (char*)*v2;
  v5 = (char*)v2[1];
  v6 = (char*)*v2;
  if ((char*)*v2 == v5) {
    goto LABEL_18;
  }
  v7 = v5 - v4 - 8;
  v6 = (char*)*v2;
  if ((~(_BYTE)v7 & 0x18) != 0) {
    v8 = ((unsigned __int8)((unsigned int)v7 >> 3) + 1) & 3;
    v6 = (char*)*v2;
    while (*(_QWORD*)v6 != v3) {
      v6 += 8;
      if (--v8 == 0) {
        goto LABEL_7;
      }
    }
  LABEL_18:
    if (v6 != v5) {
      return result;
    }
    goto LABEL_19;
  }
LABEL_7:
  if (v7 >= 0x18) {
    v6 += 16;
    while (1) {
      if (*((_QWORD*)v6 - 2) == v3) {
        v6 -= 16;
        goto LABEL_18;
      }
      if (*((_QWORD*)v6 - 1) == v3) {
        v6 -= 8;
        goto LABEL_18;
      }
      if (*(_QWORD*)v6 == v3) {
        goto LABEL_18;
      }
      if (*((_QWORD*)v6 + 1) == v3) {
        break;
      }
      v9 = v6 + 16;
      v6 += 32;
      if (v9 == v5) {
        goto LABEL_19;
      }
    }
    v6 += 8;
    goto LABEL_18;
  }
LABEL_19:
  v10 = v2[2];
  if ((unsigned __int64)v5 >= v10) {
    v12 = (char*)(v5 - v4);
    v13 = (v5 - v4) >> 3;
    v14 = v13 + 1;
    if ((unsigned __int64)(v13 + 1) >> 61 != 0) {
      GameRoutine_8875e0(result);
    }
    v15 = v10 - (_QWORD)v4;
    v16 = fw_memory_g_heap_manager_ptr;
    if (v15 >> 2 > v14) {
      v14 = v15 >> 2;
    }
    if ((unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFF8LL) {
      v17 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v17 = v14;
    }
    if (v17 != 0) {
      if (v17 >> 61 != 0) {
        GameRoutine_60a210_alt1(result);
      }
      v18 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v17, 16, 0);
    }
    else {
      v18 = 0;
    }
    v19 = v18 + 8 * v17;
    v20 = (char*)(v5 - v4);
    v21 = (__int64)&v12[v18 + -8 * v13];
    *(_QWORD*)&v12[v18] = v3;
    v11 = (__int64)&v12[v18 + 8];
    result = memcpy(v21, v4, v20);
    *v2 = v21;
    v2[1] = v11;
    v2[2] = v19;
    if (v4 != nullptr) {
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
        v22 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v22);
    }
  }
  else {
    *(_QWORD*)v5 = v3;
    v11 = (__int64)(v5 + 8);
  }
  v2[1] = v11;
  return result;
}

__int16* game_gmap_SpotMgr_TryPlayAppearAnimal_lambda0_Invoke(__int64 a1,
                                                              __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int16* v5;
  __int16* result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  __int16* v18;
  __int64* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _BYTE v24[12];
  _QWORD* v25;
  _QWORD* v26;
  _QWORD* v27;
  _QWORD* v28;
  __int64 vars0;
  __int64 vars8;

  v2 = *a2;
  v4 = game_gmap_GmapClock_kDefaultTime_ptr;
  if (game_gmap_GmapClock_instance_ != 0) {
    v5 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v5 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  if ((*(unsigned __int8 (**)(_QWORD))(**(_QWORD**)(*a2 + 280) + 24LL))(
          *(_QWORD*)(*a2 + 280)) == 1) {
    (*(void (**)(_QWORD))(**(_QWORD**)(v2 + 280) + 112LL))(
        *(_QWORD*)(v2 + 280));
  }
  result = *(__int16**)(v2 + 280);
  if (((__int64)v5[1] << 24) + ((__int64)*v5 << 32) + ((__int64)v5[2] << 18) +
          ((__int64)v5[3] << 12) + ((__int64)v5[4] << 6) + v5[5] >=
      (unsigned __int64)(((__int64)result[5] << 24) +
                         ((__int64)result[4] << 32) +
                         ((__int64)result[6] << 18) +
                         ((__int64)result[7] << 12) +
                         ((__int64)result[8] << 6) + result[9])) {
    if ((*(unsigned __int8 (**)(__int16*))(*(_QWORD*)result + 24LL))(result) ==
        1) {
      (*(void (**)(_QWORD))(**(_QWORD**)(v2 + 280) + 112LL))(
          *(_QWORD*)(v2 + 280));
    }
    v7 = *(_QWORD*)(v2 + 280);
    v8 = *(_QWORD*)(v7 + 8);
    *(_DWORD*)&v24[8] = *(_DWORD*)(v7 + 16);
    *(_QWORD*)v24 = v8;
    v9 = game_gmap_GmapClock_instance_ != 0 ? game_gmap_GmapClock_instance_ + 8
                                            : v4;
    result = (__int16*)Dir_70df40(v24, v9);
    if ((int)result < 360) {
      v10 = vars8;
      v11 = v25;
      v12 = v26;
      ++**(_DWORD**)(a1 + 16);
      result = *(__int16**)(a1 + 8);
      if (v2 != 0) {
        v27 = v11;
        v28 = v12;
        vars0 = v10;
        v13 = *(_QWORD*)(GameData_21c96e8 + 8);
        v14 = *(_QWORD**)(v13 + 8);
        v15 = *(_QWORD**)(v13 + 16);
        while (v14 != v15) {
          v16 = (_QWORD*)*v14;
          if (*(_QWORD*)*v14 == v2 && v16[12] == 0) {
            v17 = v16[69];
            if (v17 != 0 && v16[13] == 0 &&
                *((__int16*)v16 + 321) * *((__int16*)v16 + 320) *
                        *((__int16*)v16 + 322) ==
                    0 &&
                *(_QWORD*)(v17 + 352) != 0) {
              v18 = result;
              v19 = (__int64*)fw_memory_g_heap_manager_ptr;
              v20 = (_QWORD*)fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
              *(_QWORD*)&v24[4] = v20;
              *v20 = v16;
              v25 = v20 + 1;
              v26 = v20 + 1;
              result = (__int16*)GameRoutine_14b4b70(v18, 3, &v24[4]);
              if (*(_QWORD*)&v24[4] != 0) {
                v22 = *v19;
                v25 = *(_QWORD**)&v24[4];
                v23 = 128;
                if (*(_QWORD*)(v22 + 200) == 0) {
                  v23 = 56;
                }
                return (__int16*)nn_mem_StandardAllocator_Free_alt1(
                    v22 + v23, *(_QWORD*)&v24[4], v21);
              }
              return result;
            }
          }
          ++v14;
        }
      }
    }
  }
  return result;
}

__int64 game_gmap_SpotMgr_EachSpotAttachment_lambda0_Invoke(__int64 a1,
                                                            __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v2 = *a2;
  if ((*(unsigned __int8 (**)(_QWORD))(**(_QWORD**)(*a2 + 280) + 24LL))(
          *(_QWORD*)(*a2 + 280)) == 1) {
    (*(void (**)(_QWORD))(**(_QWORD**)(v2 + 280) + 112LL))(
        *(_QWORD*)(v2 + 280));
  }
  result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v2 + 280) + 24LL))(
      *(_QWORD*)(v2 + 280));
  if (*(unsigned __int8*)(a1 + 16) == (unsigned __int8)result) {
    v6 = *(_QWORD*)(a1 + 64);
    v7 = v2;
    if (v6 == 0) {
      GameRoutine_60a310(0, v5);
    }
    return (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v6 + 48LL))(v6, &v7);
  }
  return result;
}

__int64 game_gmap_SpotMgr_CheckWrongAttachment_lambda0_Invoke(__int64 a1,
                                                              __int64* a2)
{
  __int64 v2;
  __int64 result;
  int v5;

  v2 = *a2;
  result = *(_QWORD*)(*a2 + 280);
  if (result != 0) {
    v5 = (*(unsigned __int8 (**)(__int64))(*(_QWORD*)result + 24LL))(result);
    result = *(_QWORD*)(v2 + 280);
    if (v5 == 1) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 112LL))(result);
      if ((result & 1) != 0) {
        return result;
      }
      result = *(_QWORD*)(v2 + 280);
    }
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 104LL))(result);
      if ((result & 1) != 0) {
        result = *(_QWORD*)(v2 + 280);
        if (result != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
          *(_QWORD*)(v2 + 280) = 0;
        }
        ++**(_DWORD**)(a1 + 8);
      }
    }
  }
  return result;
}

__int64 game_gmap_SpotMgr_OnEnterGmap_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;

  v2 = *a2;
  if ((*(unsigned __int8 (**)(_QWORD))(**(_QWORD**)(*a2 + 280) + 24LL))(
          *(_QWORD*)(*a2 + 280)) == 1) {
    (*(void (**)(_QWORD))(**(_QWORD**)(v2 + 280) + 112LL))(
        *(_QWORD*)(v2 + 280));
  }
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(v2 + 280) + 224LL))(
      *(_QWORD*)(v2 + 280));
}

#pragma GCC visibility pop
