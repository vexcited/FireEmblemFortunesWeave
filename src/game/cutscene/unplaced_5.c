#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void g3d_ada070(PSEUDO_X8, __int64, __int64,
                                           __int64);
__attribute__((swiftcall)) void game_cutscene_1800180(PSEUDO_X8,
                                                      unsigned __int8*);
__attribute__((swiftcall)) void game_cutscene_18002e0(PSEUDO_X8,
                                                      unsigned __int8*);
__attribute__((swiftcall)) void wld_c52150(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void wld_c525f0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void wld_c52ad0(PSEUDO_X8, __int64);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 AssetTableFile_7e7b20(__int64 result, unsigned __int64*);
__int64 AssetTableFile_7e95e0(__int64, __int64, unsigned int);
__int64 CharacterAppearance_10735d0(__int64);
__int64 FieldActor_1801f00(__int64, _QWORD*);
__int64 GameHr_10784f0(__int64, int, __int64);
__int64 GameHr_7e8000(__int64);
__int64 GameRoutine_17fe060(__int64, _QWORD*);
__int64 GameRoutine_17fe700(__int64, _QWORD*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_GetHero(unsigned __int8);
__int64 game_HashString(__int64 result);
__int64 game_anonymous_ConditionMap_Add_7ebae0(__int64 result);
__int64 game_cutscene_17fe320(__int64, _QWORD*);
__int64 memchr(__int64, int, unsigned __int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 nn_util_SNPrintf(_QWORD, _QWORD, const char*, ...);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
char* GameHr_1800440(unsigned __int8*);
extern _UNKNOWN GameData_1a0d058;
extern _UNKNOWN GameData_1aa4628;
extern _UNKNOWN GameData_1ab2150;
extern _UNKNOWN GameData_1abddf9;
extern _UNKNOWN GameData_1ad0def;
extern _UNKNOWN GameData_1aef7c4;
extern __int128 GameData_1a82fa0;
extern __int128 GameData_1a837f0;
extern __int64 (*GameData_20df100[])();
extern __int64 (*GameData_20df150[])();
extern __int64 (*GameData_20df1a0[])();
extern __int64 (*GameData_20df1f0[])();
extern __int64 (*GameData_20df240[])();
extern __int64 (*GameData_20df290[])();
extern __int64 (*GameData_20df2e0[])();
extern __int64 (*game_cutscene_CharacterActor_vtable[])();
extern __int64 (*game_cutscene_FieldActor_vtable[])();
extern __int64 (*game_cutscene_LightActor_vtable[])();
extern __int64 (*game_cutscene_MovieActor_vtable[])();
extern __int64 (*game_cutscene_ParticleActor_vtable[])();
extern __int64 (*game_cutscene_PostEffectActor_vtable[])();
extern __int64 (*game_cutscene_PropActor_vtable[])();
extern __int64* GameData_212c598[2];
extern __int64* GameData_212c770[3];
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c8f0[3];
extern __int64* GameData_212d3c8[3];
extern __int64* GameData_2131ec8[29];
extern __int64* GameData_2131f08[21];
extern __int64* GameData_2131f10[20];
extern __int64* GameData_2131f88[5];
extern __int64* GameData_2131f90[4];
extern __int64* GameData_2131f98[3];
extern __int64* GameData_2131fa0[2];
extern __int64* GameData_2131fa8;
extern __int64* snd_g_fileIndex_ptr[2];
extern __int64 GameData_212c638;
extern __int64 GameData_212d4f0[2];
extern __int64 GameData_212e9c8[5];
extern __int64 GameData_212e9d0[4];
extern __int64 GameData_212e9d8[3];
extern __int64 GameData_212ea70;
extern __int64 GameData_212eaf8[7];
extern __int64 GameData_2131678;
extern __int64 GameData_21d9ce8;
extern __int64 GameData_21d9cf0;
extern __int64 GameData_21d9d00;
extern __int64 GameData_21d9d18;
extern __int64 GameData_21d9d20;
extern __int64 GameData_21d9d30;
extern __int64 GameData_21d9d38;
extern __int64 GameData_21d9d48;
extern __int64 GameData_21d9d50;
extern __int64 GameData_21d9d60;
extern __int64 GameData_21d9d68;
extern __int64 GameData_21d9d70;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern char GameData_21d9d78;
extern int GameData_21d9d7c;
unsigned __int64 fs_6360e0(__int64, __int64, unsigned __int64, char, int);
void ConditionMap_7ea0c0(unsigned __int8*);
void ConditionMap_7ec000(__int64*);
void GameHr_ad69c0(_QWORD*);
void GameRoutine_1810860(__int64*, _QWORD*);
void Manager_18cf910(__int64, __int64);
void TrickEntity_7d1480(__int64);
void __attribute__((noreturn)) GameRoutine_1813150();
void __attribute__((noreturn)) GameRoutine_1813170();
void __attribute__((noreturn)) GameRoutine_1813190();
void __attribute__((noreturn)) GameRoutine_18131b0();
void __attribute__((noreturn)) GameRoutine_18131d0();
void __attribute__((noreturn)) GameRoutine_18131f0();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) String_60a1d0();
void game_character_CharacterAppearance_Setup(__int64, __int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_cutscene_180db80(__int64* a1, __int64 a2, unsigned __int8* a3);

void game_cutscene_180db80(__int64* a1, __int64 a2, unsigned __int8* a3)
{

#pragma clang fp contract(off)
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64* v14;
  int v15;
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
  unsigned int v27;
  __int64 v28;
  unsigned int v29;
  _QWORD* v30;
  unsigned __int64 v31;
  _QWORD* v32;
  __int64 v33;
  __int64* v34;
  int* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  bool v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  bool v50;
  unsigned __int64 add;
  char v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  bool v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  char v63;
  __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  bool v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  bool v75;
  unsigned __int64 v76;
  int v77;
  __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  bool v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  bool v88;
  unsigned __int64 v89;
  int v90;
  int* v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  void* v95;
  __int64 v96;
  __int64 v97;
  bool v98;
  char* v99;
  char* v100;
  char* v101;
  int* v102;
  __int64 v103;
  __int64 v104;
  char v105;
  __int64* v106;
  __int64 v107;
  unsigned __int64 v108;
  unsigned __int8** v109;
  __int64 v110;
  __int64 v111;
  unsigned __int8* v112;
  int v113;
  int* v115;
  __int64 v116;
  __int64 v117;
  unsigned __int64 v118;
  char v119;
  __int64 v120;
  __int64 v121;
  _QWORD* v122;
  unsigned __int64 v123;
  __int64 v124;
  __int64 v125;
  _QWORD* v126;
  void* v127;
  int v128;
  char* v129;
  __int64 v130;
  char* v131;
  unsigned __int64 v132;
  __int64 v133;
  char* v134;
  unsigned __int64 v135;
  __int64 v136;
  char* v137;
  __int64 v138;
  char* v139;
  unsigned __int64 v140;
  unsigned __int64 v141;
  unsigned __int64 v143;
  unsigned __int64 v144;
  __int64 v145;
  char v146;
  _QWORD* v147;
  __int64 v148;
  __int64 v149;
  char* v150;
  unsigned __int64 v151;
  char v152;
  char v153;
  __int64 v154;
  char* v155;
  unsigned __int64 v156;
  __int64 v157;
  _QWORD* v158;
  __int64 v159;
  __int64 v160;
  _QWORD* v161;
  _QWORD* v162;
  unsigned __int64 v163;
  __int64 v164;
  _QWORD* v165;
  __int64 v166;
  atomic_ullong* v167;
  __int64* v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  int v174;
  __int64 v175;
  unsigned __int64 v176;
  __int64 v177;
  _QWORD* v178;
  __int64 v179;
  __int64 v180;
  _QWORD* v181;
  __int64 v182;
  __int64 v183;
  unsigned __int64 v184;
  unsigned __int64 v185;
  char* v186;
  __int64 v187;
  unsigned __int64* v188;
  unsigned __int64 v189;
  unsigned __int64 v190;
  __int64 v191;
  __int64 v192;
  unsigned __int64 v193;
  __int64 v194;
  unsigned __int64 v195;
  __int64 v196;
  unsigned __int64 v197;
  __int64 v198;
  unsigned __int64* v199;
  __int64* v200;
  unsigned __int64 v201;
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
  __int64 v216;
  unsigned __int64 v217;
  __int64 v218;
  unsigned __int64 v219;
  __int64 v220;
  __int64 v221;
  __int64* v222;
  unsigned __int64 v223;
  __int64 v224;
  __int64 v225;
  unsigned __int64 v226;
  __int64 v227;
  unsigned __int64 v228;
  __int64 v229;
  unsigned __int64 v230;
  __int64 v231;
  __int64* v232;
  __int64 v233;
  __int64 v234;
  __int64* v235;
  _QWORD* v236;
  _QWORD* v237;
  unsigned __int64 v238;
  unsigned __int64 v239;
  _QWORD* v240;
  _QWORD* v241;
  __int64 v242;
  char* v243;
  __int64 v244;
  char* v245;
  __int64 v246;
  __int64 v247;
  __int64 v248;
  unsigned __int64* v249;
  unsigned __int64 v250;
  unsigned __int64 v251;
  __int64 v252;
  __int64 v253;
  unsigned __int64 v254;
  __int64 v255;
  unsigned __int64 v256;
  __int64 v257;
  unsigned __int64 v258;
  __int64 v259;
  __int64 v260;
  unsigned __int64* v261;
  unsigned __int64 v262;
  __int64 v263;
  __int64 v264;
  unsigned __int64 v265;
  __int64* v266;
  unsigned __int64 v267;
  _QWORD* v268;
  __int64 v269;
  __int64 v270;
  unsigned __int64 v271;
  __int64 v272;
  __int64 v273;
  __int64 v274;
  __int64* v275;
  _QWORD* v276;
  __int64 v277;
  char* v278;
  _QWORD* v279;
  _QWORD* v280;
  __int64 v281;
  __int64 v282;
  __int64* v283;
  __int64 v284;
  __int64 v285;
  unsigned __int64 v286;
  __int64 v287;
  _QWORD* v288;
  __int64 v289;
  __int64 v290;
  unsigned __int64 v291;
  __int64 v292;
  _QWORD* v293;
  __int64 v294;
  __int64 v295;
  __int64 v296;
  __int64 v297;
  __int64 v298;
  const char* v299;
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
  const char* v310;
  __int64 v311;
  __int64 v312;
  __int64 v313;
  __int64 v314;
  __int64 v315;
  __int64 v316;
  __int64 v317;
  __int64 v318;
  __int64 v319;
  __int64 v320;
  const char* v321;
  __int64 v322;
  __int64 v323;
  __int64 v324;
  __int64 v325;
  __int64 v326;
  __int64 v327;
  __int64 v328;
  __int64 v329;
  __int64 v330;
  __int64 v331;
  __int64 v332;
  __int64 v333;
  __int64 v334;
  __int64 v335;
  __int64 v336;
  __int64 v337;
  __int64 v338;
  __int64 v339;
  __int64 v340;
  __int64 v341;
  unsigned __int64* v342;
  unsigned __int64 v343;
  unsigned __int64 v344;
  __int64 v345;
  __int64 v346;
  unsigned __int64 v347;
  __int64 v348;
  unsigned __int64 v349;
  __int64 v350;
  unsigned __int64 v351;
  __int64 v352;
  __int64 v353;
  unsigned __int64* v354;
  unsigned __int64 v355;
  __int64 v356;
  __int64 v357;
  unsigned __int64 v358;
  __int64 v359;
  __int64 v360;
  __int64* v361;
  __int64 v362;
  __int64 v363;
  float v364;
  __int64 v365;
  __int64 v366;
  __int64 v367;
  __int64 v368;
  __int64 v369;
  __int64 v370;
  __int64 v371;
  __int64 v372;
  __int64 v373;
  char* v374;
  unsigned __int64 v375;
  char v376;
  __int64 v377;
  unsigned __int64 v378;
  char* v379;
  unsigned __int64 v380;
  __int64 v381;
  __int64 v382;
  __int64 v383;
  __int64* v384;
  unsigned __int64 v385;
  __int64 v386;
  __int64 v387;
  unsigned __int64 v388;
  __int64 v389;
  unsigned __int64 v390;
  __int64 v391;
  unsigned __int64 v392;
  __int64 v393;
  __int64* v394;
  unsigned __int64 v395;
  __int64 v396;
  __int64 v397;
  const char* v398;
  const char* v399;
  const char* v400;
  __int64 v401;
  __int64 v402;
  _QWORD* v403;
  _QWORD* v404;
  _QWORD* v405;
  __int64* v406;
  __int64* v407;
  __int64 v408;
  __int64 v409;
  __int64 v410;
  __int64 v411;
  __int64 v412;
  __int64 v413;
  __int64 v414;
  __int64 v415;
  _QWORD* v416;
  unsigned __int64 v417;
  __int64 v418;
  atomic_ullong* v419;
  int v420;
  __int64* v422;
  __int64* v423;
  __int64* v424;
  atomic_ullong* v425;
  atomic_ullong* v426;
  atomic_ullong* v427;
  atomic_ullong* v428;
  atomic_ullong* v429;
  __int64 v430;
  __int64* v431;
  _QWORD v432[2];
  struct {
    __int64 v433;
    void* v434;
    char* v435;
    char gap280_[8];
    __int64* v436;
  } v433_;
  __int64 v437;
  unsigned __int64 v438;
  char* v439;
  __int64 v440;
  _QWORD* v441;
  __int64 v442;
  __int64 v443;
  __int64 v444;
  __int64 v445;
  __int64 v446;
  __int64 v447;
  __int64 v448;
  __int64 v449;
  _QWORD* v450;
  _QWORD* v451;
  unsigned __int64 v452;
  __int64 v453;
  __int64 v454;
  __int64 v455;
  __int64 v456;
  __int64 v457;
  __int64 v458;
  __int64 v459;
  __int64 v460;
  __int64 v461;
  __int64 v462;
  __int64 v463;
  __int64 v464;
  __int64 v465;
  __int64 v466;
  __int64 v467;
  __int64 v468;
  __int64 v469;
  __int64 v470;
  int v471;
  __int64 v472;
  __int64 v473;
  __int64 v474;
  __int64 v475;
  __int64 v476;
  __int64 v477;
  __int64 v478;
  __int64 v479;
  __int64 v480;
  struct {
    _QWORD* v481;
    char* v482;
  } v481_;

  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      352, 16, 0);
  {
    v7 = a1[4];
    __asm__ volatile("" ::"r"(v7));
  }
  *(_QWORD*)(v6 + 8) = 0;
  *(_QWORD*)(v6 + 16) = 0;
  *(_QWORD*)(v6 + 32) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  *(_QWORD*)(v6 + 48) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_QWORD*)(v6 + 80) = 0;
  *(_QWORD*)(v6 + 88) = 0;
  *(_QWORD*)(v6 + 96) = 0;
  *(_QWORD*)(v6 + 104) = 0;
  *(_QWORD*)(v6 + 112) = 0;
  *(_QWORD*)(v6 + 120) = 0;
  *(_QWORD*)v6 = GameData_20df100;
  *(_QWORD*)(v6 + 24) = game_cutscene_FieldActor_vtable;
  *(_QWORD*)(v6 + 128) = 0;
  *(_QWORD*)(v6 + 136) = 0;
  *(_QWORD*)(v6 + 144) = 0;
  *(_QWORD*)(v6 + 152) = 0;
  *(_DWORD*)(v6 + 152) = 0;
  *(_QWORD*)(v6 + 136) = 0;
  *(_QWORD*)(v6 + 144) = 0;
  *(_QWORD*)(v6 + 120) = 0;
  *(_QWORD*)(v6 + 128) = 0;
  *(_QWORD*)(v6 + 104) = 0;
  *(_QWORD*)(v6 + 112) = 0;
  *(_QWORD*)(v6 + 88) = 0;
  *(_QWORD*)(v6 + 96) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_QWORD*)(v6 + 80) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  *(_QWORD*)(v6 + 48) = 0;
  *(_QWORD*)(v6 + 336) = 0;
  *(_QWORD*)(v6 + 344) = 0;
  *(_QWORD*)(v6 + 320) = 0;
  *(_QWORD*)(v6 + 328) = 0;
  *(_QWORD*)(v6 + 304) = 0;
  *(_QWORD*)(v6 + 312) = 0;
  *(_QWORD*)(v6 + 288) = 0;
  *(_QWORD*)(v6 + 296) = 0;
  *(_QWORD*)(v6 + 272) = 0;
  *(_QWORD*)(v6 + 280) = 0;
  *(_QWORD*)(v6 + 256) = 0;
  *(_QWORD*)(v6 + 264) = 0;
  *(_QWORD*)(v6 + 240) = 0;
  *(_QWORD*)(v6 + 248) = 0;
  *(_QWORD*)(v6 + 224) = 0;
  *(_QWORD*)(v6 + 232) = 0;
  *(_QWORD*)(v6 + 208) = 0;
  *(_QWORD*)(v6 + 216) = 0;
  *(_QWORD*)(v6 + 192) = 0;
  *(_QWORD*)(v6 + 200) = 0;
  *(_QWORD*)(v6 + 176) = 0;
  *(_QWORD*)(v6 + 184) = 0;
  *(_QWORD*)(v6 + 160) = 0;
  *(_QWORD*)(v6 + 168) = 0;
  a1[3] = v6 + 24;
  a1[4] = v6;
  v431 = a1;
  if (v7 == 0) {
    v9 = a1 + 22;
    v437 = v6 + 24;
    v438 = v6;
    v8 = a1;
  LABEL_7:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                              memory_order_relaxed);
    goto LABEL_8;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  v8 = a1;
  {
    v6 = a1[4];
    __asm__ volatile("" ::"r"(v6));
  }
  v9 = a1 + 22;
  {
    v437 = a1[3];
    __asm__ volatile("" ::"r"(v437));
  }
  v438 = v6;
  if (v6 != 0) {
    goto LABEL_7;
  }
LABEL_8:
  v423 = v9;
  GameRoutine_1810860(v9, &v437);
  if (v438 != 0) {
    std___1___shared_weak_count___release_weak(v438);
  }
  v10 = fw_memory_HeapManager_Allocate(*v5, 560, 16, 0);
  *(_QWORD*)(v10 + 8) = 0;
  *(_QWORD*)(v10 + 16) = 0;
  *(_QWORD*)v10 = GameData_20df150;
  *(_QWORD*)(v10 + 24) = game_cutscene_PostEffectActor_vtable;
  memset(v10 + 32, 0, 0x210u);
  {
    v11 = v8[6];
    __asm__ volatile("" ::"r"(v11));
  }
  v8[5] = v10 + 24;
  v8[6] = v10;
  if (v11 == 0) {
    v437 = v10 + 24;
    v438 = v10;
    v12 = v423;
  LABEL_16:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                              memory_order_relaxed);
    goto LABEL_17;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
  }
  {
    v10 = v8[6];
    __asm__ volatile("" ::"r"(v10));
  }
  v12 = v423;
  {
    v437 = v8[5];
    __asm__ volatile("" ::"r"(v437));
  }
  v438 = v10;
  if (v10 != 0) {
    goto LABEL_16;
  }
LABEL_17:
  GameRoutine_1810860(v12, &v437);
  if (v438 != 0) {
    std___1___shared_weak_count___release_weak(v438);
  }
  {
    v13 = *(__int64**)(a2 + 80);
    __asm__ volatile("" ::"r"(v13));
  }
  {
    v14 = *(__int64**)(a2 + 88);
    __asm__ volatile("" ::"r"(v14));
  }
  if (v13 != v14) {
    {
      v420 = a3[32];
      __asm__ volatile("" ::"r"(v420));
    }
    {
      v422 = GameData_212d3c8[0] + 2;
      __asm__ volatile("" ::"r"(v422));
    }
    v410 = GameData_212ea70 + 16;
    {
      v414 = GameData_212e9c8[0] + 16;
      __asm__ volatile("" ::"r"(v414));
    }
    {
      v413 = GameData_212e9d0[0] + 16;
      __asm__ volatile("" ::"r"(v413));
    }
    {
      v412 = GameData_212eaf8[0] + 16;
      __asm__ volatile("" ::"r"(v412));
    }
    v411 = GameData_2131678 + 16;
    {
      v424 = *(__int64**)(a2 + 88);
      __asm__ volatile("" ::"r"(v424));
    }
    {
      v409 = GameData_212e9d8[0] + 16;
      __asm__ volatile("" ::"r"(v409));
    }
    while (1) {
      v15 = (*(__int64 (**)(__int64))(*(_QWORD*)*v13 + 32LL))(*v13);
      if (v15 == (unsigned int)wld_Crc32(0, "Signal_BackGround", 0x11u)) {
        {
          v16 = v8[3];
          __asm__ volatile("" ::"r"(v16));
        }
        {
          v17 = *v13;
          __asm__ volatile("" ::"r"(v17));
        }
        if (*v13 != 0 &&
            (v17 = __dynamic_cast(v17, GameData_212d4f0[0], GameData_2131f88[0],
                                  0)) != 0 &&
            (v18 = v13[1]) != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                    memory_order_relaxed);
          v432[0] = v17;
          v432[1] = v18;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 16), 1u,
                                    memory_order_relaxed);
          FieldActor_1801f00(v16, v432);
          std___1___shared_weak_count___release_weak(v18);
          v8 = v431;
          if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            goto LABEL_28;
          }
        }
        else {
          v432[0] = v17;
          v432[1] = 0;
          FieldActor_1801f00(v16, v432);
        }
        goto LABEL_22;
      }
      if (v15 == (unsigned int)wld_Crc32(0, "Signal_Actor", 0xCu)) {
        if (*v13 != 0) {
          v20 =
              __dynamic_cast(*v13, GameData_212d4f0[0], GameData_2131f90[0], 0);
          if (v20 != 0) {
            {
              v21 = v13[1];
              __asm__ volatile("" ::"r"(v21));
            }
            if (v21 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8), 1u,
                                        memory_order_relaxed);
            }
          }
          else {
            v21 = 0;
          }
        }
        else {
          v21 = 0;
          v20 = 0;
        }
        v30 = (_QWORD*)fw_memory_HeapManager_Allocate(*v5, 376, 16, 0);
        v30[1] = 0;
        v31 = (unsigned __int64)v30;
        v30[2] = 0;
        v425 = (atomic_ullong*)(v30 + 1);
        *v30 = GameData_20df1a0;
        if (v21 != 0) {
          v32 = v30 + 4;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 16), 1u,
                                    memory_order_relaxed);
          v30[3] = game_cutscene_CharacterActor_vtable;
          memset((__int64)(v30 + 4), 0, 0x14Eu);
          *(_QWORD*)(v31 + 368) = -1;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 16), 1u,
                                    memory_order_relaxed);
          *(_QWORD*)(v31 + 32) = v20;
          v34 = (__int64*)(v31 + 40);
          {
            v33 = *(_QWORD*)(v31 + 40);
            __asm__ volatile("" ::"r"(v33));
          }
          *(_QWORD*)(v31 + 40) = v21;
          if (v33 != 0) {
            std___1___shared_weak_count___release_weak(v33);
          }
        }
        else {
          v30[3] = game_cutscene_CharacterActor_vtable;
          memset((__int64)(v30 + 6), 0, 0x13Eu);
          *(_QWORD*)(v31 + 32) = v20;
          v32 = (_QWORD*)(v31 + 32);
          *(_QWORD*)(v31 + 368) = -1;
          *(_QWORD*)(v31 + 40) = 0;
          v34 = (__int64*)(v31 + 40);
        }
        v461 = 0;
        v462 = 0;
        v437 = 0;
        v438 = 0;
        v439 = nullptr;
        v440 = 0;
        v441 = nullptr;
        v442 = 0;
        v443 = 0;
        v444 = 0;
        v445 = 0;
        v446 = 0;
        v471 = 1065353216;
        v35 = (int*)GameData_21d9d18;
        v36 = GameData_21d9d20;
        v447 = 0;
        v448 = 0;
        v449 = 0;
        v450 = nullptr;
        v451 = nullptr;
        v452 = 0;
        v453 = 0;
        v454 = 0;
        v455 = 0;
        v456 = 0;
        v457 = 0;
        v458 = 0;
        v459 = 0;
        v460 = 0;
        v464 = 0;
        v465 = 0;
        v466 = 0;
        v467 = 0;
        v468 = 0;
        v469 = 0;
        v470 = 0;
        v472 = 0;
        v473 = 0;
        v474 = 0;
        v475 = 0;
        v476 = 0;
        v477 = 0;
        v478 = 0;
        v479 = 0;
        v480 = 0;
        if (GameData_21d9d18 != GameData_21d9d20) {
          do {
            {
              v37 = *v35++;
              __asm__ volatile("" ::"r"(v37));
            }
            *(_QWORD*)(GameData_21d9d00 + 8 * v37) = 0;
          } while (v35 != (int*)v36);
          v35 = (int*)GameData_21d9d18;
        }
        {
          v38 = *v34;
          __asm__ volatile("" ::"r"(v38));
        }
        GameData_21d9d20 = (__int64)v35;
        GameData_21d9d60 = 0;
        GameData_21d9d68 = 0;
        GameData_21d9d70 = 0;
        GameData_21d9d7c = 0;
        GameData_21d9d38 = GameData_21d9d30;
        GameData_21d9cf0 = GameData_21d9ce8;
        GameData_21d9d50 = GameData_21d9d48;
        GameData_21d9d78 = 8;
        v39 = std___1___shared_weak_count_lock(v38);
        {
          v40 = *(unsigned __int8*)(*v32 + 24LL);
          __asm__ volatile("" ::"r"(v40));
        }
        {
          v41 = *(_QWORD*)(*v32 + 32LL);
          __asm__ volatile("" ::"r"(v41));
        }
        v42 = (v40 & 1) == 0;
        v43 = v40 >> 1;
        if (v42) {
          v44 = *v32 + 25LL;
          __asm__ volatile("" ::"r"(v44));
        }
        else {
          v44 = *(_QWORD*)(*v32 + 40LL);
          __asm__ volatile("" ::"r"(v44));
        }
        if (v42) {
          v41 = v43;
        }
        v45 = v44 + v41;
        if (v41 >= 18) {
          v46 = v44;
          do {
            v47 = memchr(v46, 227, v41 - 17);
            if (v47 == 0) {
              break;
            }
            if (*(_QWORD*)v47 == 0x83E3B782E3A482E3LL &&
                *(_QWORD*)(v47 + 8) == 0xE3BC83E39E83E3A5LL &&
                *(unsigned __int16*)(v47 + 16) == 43907) {
              goto LABEL_81;
            }
            v46 = v47 + 1;
            v41 = v45 - v46;
          } while (v45 - v46 > 17);
        }
        v47 = v45;
      LABEL_81:
        v50 = v47 == v45 || v47 - v44 == -1;
        add = atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                               0xFFFFFFFFFFFFFFFFLL);
        v52 = v50;
        if (add != 0) {
          if ((v52 & 1) != 0) {
            goto LABEL_89;
          }
        LABEL_99:
          v65 = std___1___shared_weak_count_lock(*v34);
          {
            v66 = *(unsigned __int8*)(*v32 + 24LL);
            __asm__ volatile("" ::"r"(v66));
          }
          {
            v67 = *(_QWORD*)(*v32 + 32LL);
            __asm__ volatile("" ::"r"(v67));
          }
          v68 = (v66 & 1) == 0;
          v69 = v66 >> 1;
          if (v68) {
            v70 = *v32 + 25LL;
            __asm__ volatile("" ::"r"(v70));
          }
          else {
            v70 = *(_QWORD*)(*v32 + 40LL);
            __asm__ volatile("" ::"r"(v70));
          }
          if (v68) {
            v67 = v69;
          }
          v71 = v70 + v67;
          if (v67 >= 12) {
            v72 = v70;
            do {
              v73 = memchr(v72, 231, v67 - 11);
              if (v73 == 0) {
                break;
              }
              if (*(_QWORD*)v73 == 0x81E3988AE9A184E7LL &&
                  *(_DWORD*)(v73 + 8) == -1918376274) {
                goto LABEL_113;
              }
              v72 = v73 + 1;
              v67 = v71 - v72;
            } while (v71 - v72 > 11);
          }
          v73 = v71;
        LABEL_113:
          v75 = v73 == v71 || v73 - v70 == -1;
          v76 = atomic_fetch_add((atomic_ullong* volatile)(v65 + 8),
                                 0xFFFFFFFFFFFFFFFFLL);
          v77 = !v75;
          if (v76 == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v65 + 16LL))(v65);
            std___1___shared_weak_count___release_weak(v65);
          }
          v78 = std___1___shared_weak_count_lock(*v34);
          {
            v79 = *(unsigned __int8*)(*v32 + 24LL);
            __asm__ volatile("" ::"r"(v79));
          }
          {
            v80 = *(_QWORD*)(*v32 + 32LL);
            __asm__ volatile("" ::"r"(v80));
          }
          v81 = (v79 & 1) == 0;
          v82 = v79 >> 1;
          if (v81) {
            v83 = *v32 + 25LL;
            __asm__ volatile("" ::"r"(v83));
          }
          else {
            v83 = *(_QWORD*)(*v32 + 40LL);
            __asm__ volatile("" ::"r"(v83));
          }
          if (v81) {
            v80 = v82;
          }
          v84 = v83 + v80;
          if (v80 >= 9) {
            v85 = v83;
            do {
              v86 = memchr(v85, 227, v80 - 8);
              if (v86 == 0) {
                break;
              }
              if (*(_QWORD*)v86 == 0x83E3BC83E39583E3LL &&
                  *(unsigned __int8*)(v86 + 8) == 137) {
                goto LABEL_135;
              }
              v85 = v86 + 1;
              v80 = v84 - v85;
            } while (v84 - v85 > 8);
          }
          v86 = v84;
        LABEL_135:
          v88 = v86 == v84 || v86 - v83 == -1;
          v89 = atomic_fetch_add((atomic_ullong* volatile)(v78 + 8),
                                 0xFFFFFFFFFFFFFFFFLL);
          v90 = !v88;
          if (v89 == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v78 + 16LL))(v78);
            std___1___shared_weak_count___release_weak(v78);
          }
          v91 = (int*)GameData_21d9d18;
          v92 = GameData_21d9d20;
          if (GameData_21d9d18 != GameData_21d9d20) {
            do {
              {
                v93 = *v91++;
                __asm__ volatile("" ::"r"(v93));
              }
              *(_QWORD*)(GameData_21d9d00 + 8 * v93) = 0;
            } while (v91 != (int*)v92);
            v91 = (int*)GameData_21d9d18;
          }
          GameData_21d9d20 = (__int64)v91;
          GameData_21d9d60 = 0;
          GameData_21d9d68 = 0;
          GameData_21d9d70 = 0;
          GameData_21d9d7c = 0;
          GameData_21d9d38 = GameData_21d9d30;
          GameData_21d9cf0 = GameData_21d9ce8;
          GameData_21d9d50 = GameData_21d9d48;
          GameData_21d9d78 = 8;
          ConditionMap_7ea0c0(a3);
          v94 = game_GetHero(9u);
          AssetTableFile_7e95e0((__int64)&v437, v94, 0);
          if (v90 != 0) {
            v433_.v434 = &GameData_1abddf9;
            v433_.v433 = game_HashString((__int64)&GameData_1abddf9);
            AssetTableFile_7e7b20((__int64)&v437,
                                  (unsigned __int64*)&v433_.v433);
            v95 = &GameData_1ab2150;
            if ((v77 & 1) == 0) {
              goto LABEL_416;
            }
          }
          else {
            if (v77 == 0) {
              goto LABEL_416;
            }
            v433_.v434 = &GameData_1ad0def;
            v433_.v433 = game_HashString((__int64)&GameData_1ad0def);
            if (game_GameModeData_instance_ != 0 &&
                (v96 = game_GameVariableTable_Find(
                     *(_QWORD**)(game_GameModeData_instance_ + 48),
                     (unsigned __int64*)&v433_.v433)) != 0) {
              if (*(_DWORD*)(v96 + 32) != 0) {
                v95 = &GameData_1aef7c4;
              }
              else {
                v95 = &GameData_1ab2150;
              }
            }
            else {
              v95 = &GameData_1ab2150;
            }
          }
          v140 = game_HashString((__int64)v95);
          if (v140 != 0) {
            {
              v141 = *(_QWORD*)(*GameData_212c878[0] + 96);
              __asm__ volatile("" ::"r"(v141));
            }
            if (v141 != 0 && *(_QWORD*)(*GameData_212c878[0] + 112) != 0) {
              v143 = v141 - 1;
              if ((v141 & (v141 - 1)) != 0) {
                v144 = v140;
                if (v140 >= v141) {
                  v144 = v140 % v141;
                }
              }
              else {
                v144 = v143 & v140;
              }
              {
                v161 = *(_QWORD**)(*(_QWORD*)(*GameData_212c878[0] + 88) +
                                   8 * v144);
                __asm__ volatile("" ::"r"(v161));
              }
              if (v161 != nullptr) {
                v162 = (_QWORD*)*v161;
                if (v162 != nullptr) {
                  if ((v141 & v143) == 0) {
                    while (1) {
                      {
                        v164 = v162[1];
                        __asm__ volatile("" ::"r"(v164));
                      }
                      if (v164 == v140) {
                        if (v162[2] == v140) {
                          goto LABEL_414;
                        }
                      }
                      else if ((v164 & v143) != v144) {
                        goto LABEL_416;
                      }
                      v162 = (_QWORD*)*v162;
                      if (v162 == nullptr) {
                        goto LABEL_416;
                      }
                    }
                  }
                  do {
                    {
                      v163 = v162[1];
                      __asm__ volatile("" ::"r"(v163));
                    }
                    if (v163 == v140) {
                      if (v162[2] == v140) {
                      LABEL_414:
                        {
                          v235 = (__int64*)v162[3];
                          __asm__ volatile("" ::"r"(v235));
                        }
                        if (v235 != nullptr) {
                          ConditionMap_7ec000(v235);
                          game_anonymous_ConditionMap_Add_7ebae0(
                              *GameData_212c770[0]);
                        }
                        break;
                      }
                    }
                    else {
                      if (v163 >= v141) {
                        v163 %= v141;
                      }
                      if (v163 != v144) {
                        break;
                      }
                    }
                    v162 = (_QWORD*)*v162;
                  } while (v162 != nullptr);
                }
              }
            }
          }
        LABEL_416:
          v433_.v434 = &GameData_1aa4628;
          v433_.v433 = game_HashString((__int64)&GameData_1aa4628);
          AssetTableFile_7e7b20((__int64)&v437, (unsigned __int64*)&v433_.v433);
          GameHr_7e8000((__int64)&v437);
          v118 = (unsigned __int64)v450;
          v465 = 0;
          v453 = 0;
          v463 = 0x3F8000003F800000LL;
          v119 = 1;
          v451 = v450;
          v106 = (__int64*)fw_memory_g_heap_manager_ptr;
        LABEL_417:
          v236 = v451;
          *(_BYTE*)(v31 + 364) = v119;
          if ((_QWORD*)v118 == v236) {
            if (v118 >= v452) {
              v238 = (__int64)(v452 - v118) >> 2;
              if (v238 <= 1) {
                v238 = 1;
              }
              if (v452 - v118 >= 0x7FFFFFFFFFFFFFF8LL) {
                v239 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v239 = v238;
              }
              if (v239 >> 61 != 0) {
                goto LABEL_665;
              }
              v240 = (_QWORD*)fw_memory_HeapManager_Allocate(*v106, 8 * v239,
                                                             16, 0);
              {
                v241 = &v240[v239];
                __asm__ volatile("" ::"r"(v241));
              }
              *v240 = "AE_984M";
              v237 = v240 + 1;
              v452 = (unsigned __int64)v241;
              v450 = v240;
              v451 = v240 + 1;
              if (v118 != 0) {
                v242 = 128;
                if (*(_QWORD*)(*v106 + 200) == 0) {
                  v242 = 56;
                }
                nn_mem_StandardAllocator_Free(*v106 + v242, v118);
              }
            }
            else {
              *v236 = "AE_984M";
              v237 = v236 + 1;
            }
            v451 = v237;
          }
          v243 = (char*)fw_memory_HeapManager_Allocate(*v106, 11832, 16, 0);
          v244 = (__int64)(v243 + 24);
          v245 = v243;
          *((_QWORD*)v243 + 1) = 0;
          *((_QWORD*)v243 + 2) = 0;
          *(_QWORD*)v243 = v422;
          CharacterAppearance_10735d0((__int64)(v243 + 24));
          v481_.v481 = (_QWORD*)v244;
          v481_.v482 = v245;
          game_character_CharacterAppearance_Setup(v244, (__int64)&v437);
          v433_.v436 = nullptr;
          v246 = GameHr_10784f0((__int64)&v481_.v481, 0, (__int64)&v433_.v433);
          *(_QWORD*)(v31 + 288) = v246;
          if (v433_.v436 == &v433_.v433) {
            v8 = v431;
            v247 = 32;
          LABEL_435:
            (*(void (**)(__int64))(*v433_.v436 + v247))((__int64)v433_.v436);
            {
              v246 = *(_QWORD*)(v31 + 288);
              __asm__ volatile("" ::"r"(v246));
            }
          }
          else {
            v8 = v431;
            if (v433_.v436 != nullptr) {
              v247 = 40;
              goto LABEL_435;
            }
          }
          v248 = (__int64)v481_.v482;
          *(_BYTE*)(v246 + 289) = 0;
          *(_DWORD*)(v31 + 360) = 1;
          if (v248 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v248 + 8),
                                            0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v248 + 16LL))(v248);
            std___1___shared_weak_count___release_weak(v248);
          }
          TrickEntity_7d1480((__int64)&v437);
          if (v21 != 0) {
            std___1___shared_weak_count___release_weak(v21);
            if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
              std___1___shared_weak_count___release_weak(v21);
            }
          }
          {
            v249 = (unsigned __int64*)v8[8];
            __asm__ volatile("" ::"r"(v249));
          }
          {
            v250 = v8[9];
            __asm__ volatile("" ::"r"(v250));
          }
          v251 = v31 + 24;
          if ((unsigned __int64)v249 >= v250) {
            {
              v253 = v8[7];
              __asm__ volatile("" ::"r"(v253));
            }
            v254 = (unsigned __int64)v249 - v253;
            v255 = ((__int64)v249 - v253) >> 4;
            v256 = v255 + 1;
            if ((unsigned __int64)(v255 + 1) >> 60 != 0) {
              GameRoutine_1813150();
            }
            v257 = v250 - v253;
            if (v257 >> 3 > v256) {
              v256 = v257 >> 3;
            }
            if ((unsigned __int64)v257 >= 0x7FFFFFFFFFFFFFF0LL) {
              v258 = 0xFFFFFFFFFFFFFFFLL;
            }
            else {
              v258 = v256;
            }
            if (v258 >> 60 != 0) {
              goto LABEL_665;
            }
            v259 = fw_memory_g_heap_manager_ptr;
            v260 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v258, 16, 0);
            v261 = (unsigned __int64*)(v260 + v254);
            v262 = v260 + 16 * v258;
            *v261 = v251;
            v261[1] = v31;
            v263 = v260 + v254 - 16 * v255;
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 8), 1u,
                                      memory_order_relaxed);
            v252 = v260 + v254 + 16;
            memcpy(v263, v253, v254);
            v8 = v431;
            v431[7] = v263;
            v431[8] = v252;
            v431[9] = v262;
            if (v253 != 0) {
              v264 = 128;
              if (*(_QWORD*)(*(_QWORD*)v259 + 200LL) == 0) {
                v264 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v259 + v264, v253);
            }
            v12 = v423;
          }
          else {
            *v249 = v251;
            v249[1] = v31;
            v252 = (__int64)(v249 + 2);
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 8), 1u,
                                      memory_order_relaxed);
          }
          v8[8] = v252;
          v437 = v31 + 24;
          v438 = v31;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 16), 1u,
                                    memory_order_relaxed);
          GameRoutine_1810860(v12, &v437);
          if (v438 != 0) {
            std___1___shared_weak_count___release_weak(v438);
          }
          v14 = v424;
          v265 = atomic_fetch_add(v425, 0xFFFFFFFFFFFFFFFFLL);
          v5 = (__int64*)fw_memory_g_heap_manager_ptr;
          if (v265 == 0) {
            (*(void (**)(unsigned __int64))(*(_QWORD*)v31 + 16LL))(v31);
            v19 = v31;
            goto LABEL_460;
          }
          goto LABEL_22;
        }
        (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
        std___1___shared_weak_count___release_weak(v39);
        if ((v52 & 1) == 0) {
          goto LABEL_99;
        }
      LABEL_89:
        v53 = std___1___shared_weak_count_lock(*v34);
        {
          v54 = *(unsigned __int8*)(*v32 + 24LL);
          __asm__ volatile("" ::"r"(v54));
        }
        {
          v55 = *v32 + 25LL;
          __asm__ volatile("" ::"r"(v55));
        }
        {
          v56 = *(_QWORD*)(*v32 + 40LL);
          __asm__ volatile("" ::"r"(v56));
        }
        v57 = (v54 & 1) == 0;
        v58 = v54 >> 1;
        if (v57) {
          v59 = v58;
        }
        else {
          v59 = *(_QWORD*)(*v32 + 32LL);
          __asm__ volatile("" ::"r"(v59));
        }
        if (v57) {
          v60 = v55;
        }
        else {
          v60 = v56;
        }
        v61 = v59 + 3;
        if (v59 + 3 >= 0xFFFFFFFFFFFFFFF7LL) {
          String_60a1d0();
        }
        v62 = v53;
        if (v61 > 0x16) {
          if ((v61 | 7) == 0x17) {
            v97 = 26;
          }
          else {
            v97 = (v61 | 7) + 1;
          }
          v64 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, v97, 16, 0);
          v433_.v434 = (void*)(v59 + 3);
          v433_.v435 = (char*)v64;
          v433_.v433 = v97 | 1;
          v63 = v97 | 1;
        }
        else {
          v63 = 2 * v61;
          v64 = 0;
          v433_.v434 = nullptr;
          v433_.v435 = nullptr;
          v433_.v433 = (unsigned __int8)(2 * v61);
        }
        v98 = (v63 & 1) == 0;
        v99 = (char*)&v433_.v433 + 1;
        if (!v98) {
          v99 = (char*)v64;
        }
        v99[2] = 95;
        *(_WORD*)v99 = 21315;
        if (v98) {
          v100 = (char*)&v433_.v433 + 4;
        }
        else {
          v100 = (char*)(v64 + 3);
        }
        if (v59 != 0) {
          memmove((__int64)v100, v60, v59);
        }
        v100[v59] = 0;
        if ((v433_.v433 & 1) != 0) {
          v101 = v433_.v435;
        }
        else {
          v101 = (char*)&v433_.v433 + 1;
        }
        v102 = (int*)GameData_21d9d18;
        v103 = GameData_21d9d20;
        if (GameData_21d9d18 != GameData_21d9d20) {
          do {
            {
              v104 = *v102++;
              __asm__ volatile("" ::"r"(v104));
            }
            *(_QWORD*)(GameData_21d9d00 + 8 * v104) = 0;
          } while (v102 != (int*)v103);
          v102 = (int*)GameData_21d9d18;
        }
        v481_.v482 = v101;
        GameData_21d9d20 = (__int64)v102;
        GameData_21d9d60 = 0;
        GameData_21d9d68 = 0;
        GameData_21d9d70 = 0;
        GameData_21d9d7c = 0;
        GameData_21d9d38 = GameData_21d9d30;
        GameData_21d9cf0 = GameData_21d9ce8;
        GameData_21d9d50 = GameData_21d9d48;
        GameData_21d9d78 = 8;
        v481_.v481 = (_QWORD*)game_HashString((__int64)v101);
        AssetTableFile_7e7b20((__int64)&v437, (unsigned __int64*)&v481_.v481);
        v105 = GameHr_7e8000((__int64)&v437);
        v106 = (__int64*)fw_memory_g_heap_manager_ptr;
        if ((v433_.v433 & 1) != 0 && v433_.v435 != nullptr) {
          v107 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v107 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                            v107,
                                        (__int64)v433_.v435);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v62 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if ((v105 & 1) != 0) {
            goto LABEL_195;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v62 + 16LL))(v62);
          std___1___shared_weak_count___release_weak(v62);
          if ((v105 & 1) != 0) {
          LABEL_195:
            v118 = (unsigned __int64)v450;
            v119 = 0;
            goto LABEL_417;
          }
        }
        {
          v108 = *(_QWORD*)(*GameData_212c8f0[0] + 72) -
                 *(_QWORD*)(*GameData_212c8f0[0] + 64);
          __asm__ volatile("" ::"r"(v108));
        }
        if ((int)(v108 >> 3) < 1) {
        LABEL_190:
          v111 = 0;
        }
        else {
          {
            v109 = *(unsigned __int8***)(*GameData_212c8f0[0] + 232);
            __asm__ volatile("" ::"r"(v109));
          }
          v110 = (v108 >> 3) & 0x7FFFFFFF;
          while (1) {
            {
              v112 = *v109++;
              __asm__ volatile("" ::"r"(v112));
            }
            v111 = (__int64)v112;
            {
              v113 = *v112;
              __asm__ volatile("" ::"r"(v113));
            }
            if (v113 != 62 && v113 != 0) {
              break;
            }
            if (--v110 == 0) {
              goto LABEL_190;
            }
          }
        }
        v115 = (int*)GameData_21d9d18;
        v116 = GameData_21d9d20;
        if (GameData_21d9d18 != GameData_21d9d20) {
          do {
            {
              v117 = *v115++;
              __asm__ volatile("" ::"r"(v117));
            }
            *(_QWORD*)(GameData_21d9d00 + 8 * v117) = 0;
          } while (v115 != (int*)v116);
          v115 = (int*)GameData_21d9d18;
        }
        v433_.v434 = (void*)v111;
        GameData_21d9d20 = (__int64)v115;
        GameData_21d9d60 = 0;
        GameData_21d9d68 = 0;
        GameData_21d9d70 = 0;
        GameData_21d9d7c = 0;
        GameData_21d9d38 = GameData_21d9d30;
        GameData_21d9cf0 = GameData_21d9ce8;
        GameData_21d9d50 = GameData_21d9d48;
        GameData_21d9d78 = 8;
        v433_.v433 = game_HashString(v111);
        AssetTableFile_7e7b20((__int64)&v437, (unsigned __int64*)&v433_.v433);
        GameHr_7e8000((__int64)&v437);
        goto LABEL_195;
      }
      if (v15 == (unsigned int)wld_Crc32(0, "Signal_Prop", 0xBu)) {
        if (*v13 != 0) {
          v22 =
              __dynamic_cast(*v13, GameData_212d4f0[0], GameData_2131f98[0], 0);
          if (v22 != 0) {
            {
              v23 = v13[1];
              __asm__ volatile("" ::"r"(v23));
            }
            if (v23 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 8), 1u,
                                        memory_order_relaxed);
            }
          }
          else {
            v23 = 0;
          }
        }
        else {
          v23 = 0;
          v22 = 0;
        }
        v122 = (_QWORD*)fw_memory_HeapManager_Allocate(*v5, 208, 16, 0);
        v122[1] = 0;
        v123 = (unsigned __int64)v122;
        v122[2] = 0;
        v426 = (atomic_ullong*)(v122 + 1);
        *v122 = GameData_20df1f0;
        if (v23 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 16), 1u,
                                    memory_order_relaxed);
          v122[5] = 0;
          v122[6] = 0;
          v122[7] = 0;
          v122[8] = 0;
          v122[9] = 0;
          v122[10] = 0;
          v122[11] = 0;
          v122[12] = 0;
          v122[13] = 0;
          v122[14] = 0;
          v122[15] = 0;
          v122[16] = 0;
          v122[17] = 0;
          v122[18] = 0;
          v122[19] = 0;
          v122[20] = 0;
          v122[21] = 0;
          v122[22] = 0;
          v122[23] = 0;
          v122[24] = 0;
          v122[3] = game_cutscene_PropActor_vtable;
          v122[4] = 0;
          v122[25] = -1;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 16), 1u,
                                    memory_order_relaxed);
          {
            v124 = v122[5];
            __asm__ volatile("" ::"r"(v124));
          }
          *(_QWORD*)(v123 + 32) = v22;
          *(_QWORD*)(v123 + 40) = v23;
          if (v124 != 0) {
            std___1___shared_weak_count___release_weak(v124);
          }
          v125 = std___1___shared_weak_count_lock(v23);
          if (v125 != 0) {
            v126 = (_QWORD*)v22;
          }
          else {
            v126 = nullptr;
          }
        }
        else {
          v126 = nullptr;
          v125 = 0;
          v122[7] = 0;
          v122[8] = 0;
          v122[9] = 0;
          v122[10] = 0;
          v122[11] = 0;
          v122[12] = 0;
          v122[13] = 0;
          v122[14] = 0;
          v122[15] = 0;
          v122[16] = 0;
          v122[17] = 0;
          v122[18] = 0;
          v122[19] = 0;
          v122[20] = 0;
          v122[21] = 0;
          v122[22] = 0;
          v122[3] = game_cutscene_PropActor_vtable;
          v122[4] = v22;
          v122[23] = 0;
          v122[24] = 0;
          v122[5] = 0;
          v122[6] = 0;
          v122[25] = -1;
        }
        if ((v126[6] & 1) != 0) {
          fw_text_String_CopyTerminated(&v433_.v433, v126[8], v126[7]);
          if (v125 == 0) {
            goto LABEL_215;
          }
        }
        else {
          {
            v127 = (void*)v126[7];
            __asm__ volatile("" ::"r"(v127));
          }
          v433_.v433 = v126[6];
          v433_.v434 = v127;
          v433_.v435 = (char*)v126[8];
          if (v125 == 0) {
            goto LABEL_215;
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v125 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v125 + 16LL))(v125);
          std___1___shared_weak_count___release_weak(v125);
        }
      LABEL_215:
        GameHr_1800440((unsigned __int8*)&v433_.v433);
        v128 = v433_.v433 & 1;
        if (v128 != 0) {
          v129 = v433_.v435;
        }
        else {
          v129 = (char*)&v433_.v433 + 1;
        }
        if ((v433_.v433 & 1) != 0) {
          v130 = (__int64)v433_.v434;
        }
        else {
          v130 = (unsigned __int64)(unsigned __int8)v433_.v433 >> 1;
        }
        if (v130 >= 1) {
          {
            v131 = &v129[v130];
            __asm__ volatile("" ::"r"(v131));
          }
          v132 = v130;
          v133 = (__int64)v129;
          while (1) {
            v134 = (char*)memchr(v133, 47, v132);
            if (v134 == nullptr) {
              goto LABEL_229;
            }
            if (*v134 == 47) {
              break;
            }
            v133 = (__int64)(v134 + 1);
            {
              v132 = (unsigned __int64)&v131[-v133];
              __asm__ volatile("" ::"r"(v132));
            }
            if ((__int64)&v131[-v133] < 1) {
              goto LABEL_229;
            }
          }
          if (v134 != v131 && v134 - v129 != -1) {
          LABEL_236:
            v138 = v130 + 6;
            {
              v415 = *snd_g_fileIndex_ptr[0];
              __asm__ volatile("" ::"r"(v415));
            }
            if ((unsigned __int64)v130 >= 0x11) {
              if ((v138 | 7) == 0x17) {
                v149 = 26;
              }
              else {
                v149 = (v138 | 7) + 1;
              }
              v139 = (char*)fw_memory_HeapManager_Allocate(*v5, v149, 16, 0);
              v438 = v130 + 6;
              v439 = v139;
              v437 = v149 | 1;
            }
            else {
              v438 = 0;
              v439 = nullptr;
              v139 = (char*)&v437 + 1;
              v437 = (unsigned __int8)(2 * v138);
            }
            memmove((__int64)v139, (__int64)v129, v130);
            strcpy(&v139[v130], ".bfres");
            if ((v437 & 1) != 0) {
              v150 = v439;
            }
            else {
              v150 = (char*)&v437 + 1;
            }
            if ((v437 & 1) != 0) {
              v151 = v438;
            }
            else {
              v151 = (unsigned __int64)(unsigned __int8)v437 >> 1;
            }
            v152 = fs_6360e0(v415, (__int64)v150, v151, 0, 0);
            if ((v437 & 1) != 0 && v439 != nullptr) {
              v153 = v152;
              v154 = 128;
              if (*(_QWORD*)(*v5 + 200) == 0) {
                v154 = 56;
              }
              nn_mem_StandardAllocator_Free(*v5 + v154, (__int64)v439);
              v152 = v153;
            }
            if ((v152 & 1) != 0) {
              if ((v433_.v433 & 1) != 0) {
                v155 = v433_.v435;
              }
              else {
                v155 = (char*)&v433_.v433 + 1;
              }
              if ((v433_.v433 & 1) != 0) {
                v156 = (unsigned __int64)v433_.v434;
              }
              else {
                v156 = (unsigned __int64)(unsigned __int8)v433_.v433 >> 1;
              }
              v441 = nullptr;
              g3d_ada070((void*)((__int64*)&v481_.v481), (__int64)v155, v156,
                         (__int64)&v437);
              v157 = (__int64)v481_.v481;
              if (v481_.v481 != nullptr) {
                v158 = (_QWORD*)fw_memory_HeapManager_Allocate(*v5, 32, 16, 0);
                v158[2] = 0;
                v158[3] = v157;
                *v158 = v410;
                v158[1] = 0;
              }
              else {
                v158 = nullptr;
              }
              {
                v180 = *(_QWORD*)(v123 + 160);
                __asm__ volatile("" ::"r"(v180));
              }
              v481_.v481 = nullptr;
              *(_QWORD*)(v123 + 152) = v157;
              *(_QWORD*)(v123 + 160) = v158;
              if (v180 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v180 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v180 + 16LL))(v180);
                std___1___shared_weak_count___release_weak(v180);
              }
              v181 = v481_.v481;
              v481_.v481 = nullptr;
              if (v181 != nullptr) {
                GameHr_ad69c0(v181);
                v182 = 128;
                if (*(_QWORD*)(*v5 + 200) == 0) {
                  v182 = 56;
                }
                nn_mem_StandardAllocator_Free(*v5 + v182, (__int64)v181);
              }
              if (v441 == &v437) {
                v183 = 32;
              LABEL_335:
                (*(void (**)(__int64))(*v441 + v183))((__int64)v441);
              }
              else if (v441 != nullptr) {
                v183 = 40;
                goto LABEL_335;
              }
              v128 = v433_.v433 & 1;
              if (v128 != 0) {
                v184 = (unsigned __int64)v433_.v434;
              }
              else {
                v184 = (unsigned __int8)v433_.v433 >> 1;
              }
              if (v184 != 0 &&
                  (v184 >= 4 ? (v185 = 4) : (v185 = v184),
                   v128 != 0 ? (v186 = v433_.v435)
                             : (v186 = (char*)&v433_.v433 + 1),
                   (memcpy((__int64)&v437 + 1, (__int64)v186, v185),
                    *((_BYTE*)&v437 + v185 + 1) = 0, v184 >= 4) &&
                       *(_DWORD*)((char*)&v437 + 1) == 795894093)) {
                *(_DWORD*)(v123 + 148) = 2;
              }
              else {
                *(_DWORD*)(v123 + 148) = 1;
              }
            }
            else {
              v128 = v433_.v433 & 1;
            }
            v8 = v431;
            goto LABEL_350;
          }
        LABEL_229:
          v135 = v130;
          v136 = (__int64)v129;
          do {
            v137 = (char*)memchr(v136, 92, v135);
            if (v137 == nullptr) {
              break;
            }
            if (*v137 == 92) {
              if (v137 == v131 || v137 - v129 == -1) {
                break;
              }
              goto LABEL_236;
            }
            v136 = (__int64)(v137 + 1);
            {
              v135 = (unsigned __int64)&v131[-v136];
              __asm__ volatile("" ::"r"(v135));
            }
          } while ((__int64)&v131[-v136] >= 1);
        }
      LABEL_350:
        *(_DWORD*)(v123 + 144) = 1;
        if (v128 != 0 && v433_.v435 != nullptr) {
          v187 = 128;
          if (*(_QWORD*)(*v5 + 200) == 0) {
            v187 = 56;
          }
          nn_mem_StandardAllocator_Free(*v5 + v187, (__int64)v433_.v435);
        }
        if (v23 != 0) {
          std___1___shared_weak_count___release_weak(v23);
          if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
            std___1___shared_weak_count___release_weak(v23);
          }
        }
        {
          v188 = (unsigned __int64*)v8[11];
          __asm__ volatile("" ::"r"(v188));
        }
        {
          v189 = v8[12];
          __asm__ volatile("" ::"r"(v189));
        }
        v190 = v123 + 24;
        if ((unsigned __int64)v188 >= v189) {
          {
            v192 = v8[10];
            __asm__ volatile("" ::"r"(v192));
          }
          v193 = (unsigned __int64)v188 - v192;
          v194 = ((__int64)v188 - v192) >> 4;
          v195 = v194 + 1;
          if ((unsigned __int64)(v194 + 1) >> 60 != 0) {
            GameRoutine_1813170();
          }
          v196 = v189 - v192;
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
            goto LABEL_665;
          }
          v198 = fw_memory_HeapManager_Allocate(*v5, 16 * v197, 16, 0);
          v199 = (unsigned __int64*)(v198 + v193);
          v200 = v5;
          v201 = v198 + 16 * v197;
          *v199 = v190;
          v199[1] = v123;
          v202 = v198 + v193 - 16 * v194;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v123 + 8), 1u,
                                    memory_order_relaxed);
          v191 = v198 + v193 + 16;
          memcpy(v202, v192, v193);
          v8 = v431;
          v431[10] = v202;
          v431[11] = v191;
          v431[12] = v201;
          if (v192 != 0) {
            v203 = 128;
            if (*(_QWORD*)(*v200 + 200) == 0) {
              v203 = 56;
            }
            nn_mem_StandardAllocator_Free(*v200 + v203, v192);
          }
          v5 = v200;
          v12 = v423;
        }
        else {
          *v188 = v190;
          v188[1] = v123;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v123 + 8), 1u,
                                    memory_order_relaxed);
          v191 = (__int64)(v188 + 2);
        }
        v8[11] = v191;
        v437 = v123 + 24;
        v438 = v123;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v123 + 16), 1u,
                                  memory_order_relaxed);
        GameRoutine_1810860(v12, &v437);
        if (v438 != 0) {
          std___1___shared_weak_count___release_weak(v438);
        }
        v14 = v424;
        if (atomic_fetch_add(v426, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        LABEL_375:
          (*(void (**)(unsigned __int64))(*(_QWORD*)v123 + 16LL))(v123);
          v19 = v123;
          goto LABEL_460;
        }
        goto LABEL_22;
      }
      if (v15 == (unsigned int)wld_Crc32(0, "Signal_Particle2", 0x10u)) {
        if (*v13 == 0) {
          goto LABEL_22;
        }
        v24 = __dynamic_cast(*v13, GameData_212d4f0[0], GameData_2131f08[0], 0);
        if (v24 == 0) {
          goto LABEL_22;
        }
        {
          v25 = v13[1];
          __asm__ volatile("" ::"r"(v25));
        }
        v26 = v24;
        if (v25 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                                    memory_order_relaxed);
        }
        {
          v27 = *(_DWORD*)(v24 + 148);
          __asm__ volatile("" ::"r"(v27));
        }
        if (v420 == 2) {
          if ((v27 & 0xFFFFFFFD) != 0) {
            goto LABEL_305;
          }
        }
        else if (v27 > 1) {
          goto LABEL_305;
        }
        v147 = (_QWORD*)fw_memory_HeapManager_Allocate(*v5, 120, 16, 0);
        v147[1] = 0;
        v148 = (__int64)v147;
        v147[2] = 0;
        v427 = (atomic_ullong*)(v147 + 1);
        *v147 = GameData_20df240;
        if (v25 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 16), 1u,
                                    memory_order_relaxed);
          v147[5] = v25;
          v147[3] = game_cutscene_ParticleActor_vtable;
          v147[4] = v26;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 16), 1u,
                                    memory_order_relaxed);
        }
        else {
          v147[5] = 0;
          v147[3] = game_cutscene_ParticleActor_vtable;
          v147[4] = v26;
        }
        {
          v204 = *v5;
          __asm__ volatile("" ::"r"(v204));
        }
        *(_QWORD*)(v148 + 76) = 0;
        v205 = v148 + 76;
        *(_QWORD*)(v148 + 64) = 0;
        *(_QWORD*)(v148 + 56) = 0;
        *(_QWORD*)(v148 + 48) = 0;
        *(_DWORD*)(v148 + 72) = -1082130432;
        *(_QWORD*)(v148 + 84) = 0;
        *(_DWORD*)(v148 + 92) = 0;
        v206 = fw_memory_HeapManager_Allocate(v204, 296, 16, 0);
        v207 = v411;
        *(_QWORD*)(v206 + 8) = 0;
        *(_QWORD*)(v206 + 16) = 0;
        goto LABEL_381;
      }
      if (v15 == (unsigned int)wld_Crc32(0, "Signal_ParticleMove", 0x13u)) {
        if (*v13 == 0) {
          goto LABEL_22;
        }
        v28 = __dynamic_cast(*v13, GameData_212d4f0[0], GameData_2131f10[0], 0);
        if (v28 == 0) {
          goto LABEL_22;
        }
        {
          v25 = v13[1];
          __asm__ volatile("" ::"r"(v25));
        }
        v26 = v28;
        if (v25 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                                    memory_order_relaxed);
        }
        {
          v29 = *(_DWORD*)(v28 + 196);
          __asm__ volatile("" ::"r"(v29));
        }
        if (v420 == 2) {
          if ((v29 & 0xFFFFFFFD) == 0) {
          LABEL_303:
            v165 = (_QWORD*)fw_memory_HeapManager_Allocate(*v5, 120, 16, 0);
            v165[1] = 0;
            v148 = (__int64)v165;
            v165[2] = 0;
            v427 = (atomic_ullong*)(v165 + 1);
            *v165 = GameData_20df240;
            if (v25 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 16), 1u,
                                        memory_order_relaxed);
              v165[5] = 0;
              v165[6] = v26;
              v165[7] = v25;
              v165[3] = game_cutscene_ParticleActor_vtable;
              v165[4] = 0;
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 16), 1u,
                                        memory_order_relaxed);
            }
            else {
              v165[5] = 0;
              v165[6] = v26;
              v165[7] = 0;
              v165[3] = game_cutscene_ParticleActor_vtable;
              v165[4] = 0;
            }
            {
              v208 = *v5;
              __asm__ volatile("" ::"r"(v208));
            }
            *(_QWORD*)(v148 + 76) = 0;
            v205 = v148 + 76;
            *(_QWORD*)(v148 + 64) = 0;
            *(_DWORD*)(v148 + 72) = -1082130432;
            *(_QWORD*)(v148 + 84) = 0;
            *(_DWORD*)(v148 + 92) = 0;
            v206 = fw_memory_HeapManager_Allocate(v208, 296, 16, 0);
            v209 = GameData_2131678;
            *(_QWORD*)(v206 + 8) = 0;
            *(_QWORD*)(v206 + 16) = 0;
            v207 = v209 + 16;
          LABEL_381:
            *(_QWORD*)v206 = v207;
            *(_DWORD*)(v206 + 32) = 0;
            *(_QWORD*)(v206 + 40) = 0;
            *(_DWORD*)(v206 + 104) = 0;
            *(_QWORD*)(v206 + 56) = 0;
            *(_QWORD*)(v206 + 64) = 0;
            *(_QWORD*)(v206 + 72) = 0;
            *(_WORD*)(v206 + 80) = 0;
            *(_DWORD*)(v206 + 112) = -1082130432;
            *(_WORD*)(v206 + 116) = 0;
            *(_WORD*)(v206 + 136) = 0;
            *(_BYTE*)(v206 + 160) = 0;
            *(_DWORD*)(v206 + 48) = 0x2000;
            *(_BYTE*)(v206 + 288) = 0;
            *(_QWORD*)(v206 + 272) = 0;
            *(_QWORD*)(v206 + 280) = 0;
            *(_QWORD*)(v206 + 256) = 0;
            *(_QWORD*)(v206 + 264) = 0;
            *(_QWORD*)(v206 + 240) = 0;
            *(_QWORD*)(v206 + 248) = 0;
            *(_QWORD*)(v206 + 224) = 0;
            *(_QWORD*)(v206 + 232) = 0;
            *(_QWORD*)(v206 + 208) = 0;
            *(_QWORD*)(v206 + 216) = 0;
            *(_QWORD*)(v206 + 192) = 0;
            *(_QWORD*)(v206 + 200) = 0;
            *(_QWORD*)(v206 + 176) = 0;
            *(_QWORD*)(v206 + 184) = 0;
            *(_QWORD*)(v206 + 168) = 0;
            *(_QWORD*)(v206 + 120) = 0;
            *(_WORD*)(v206 + 108) = 256;
            *(_DWORD*)(v206 + 127) = 0;
            *(_QWORD*)(v205 + 28) = v206;
            *(_BYTE*)(v205 + 36) = 0;
            *(_DWORD*)(v206 + 292) = 2;
            *(_QWORD*)(v206 + 24) = 0;
            *(_QWORD*)(v205 + 20) = v206 + 24;
            if (v25 != 0) {
              v210 = std___1___shared_weak_count_lock(v25);
              if (v210 != 0) {
                *(_DWORD*)(v148 + 72) = *(_DWORD*)(v26 + 8);
                if (atomic_fetch_add((atomic_ullong* volatile)(v210 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v211 = v210;
                  (*(void (**)(__int64))(*(_QWORD*)v210 + 16LL))(v210);
                  v212 = v211;
                  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
                  std___1___shared_weak_count___release_weak(v212);
                }
              }
              else {
                *(_DWORD*)(v148 + 72) = (_DWORD)&GameData_1a0d058;
              }
              v213 = std___1___shared_weak_count_lock(v25);
              if (v213 != 0) {
                *(_DWORD*)v205 = *(_DWORD*)(v26 + 72);
                if (atomic_fetch_add((atomic_ullong* volatile)(v213 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v214 = v213;
                  (*(void (**)(__int64))(*(_QWORD*)v213 + 16LL))(v213);
                  v215 = v214;
                  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
                  std___1___shared_weak_count___release_weak(v215);
                }
              LABEL_391:
                v216 = std___1___shared_weak_count_lock(v25);
                {
                  v217 = *(unsigned __int8*)(v26 + 48);
                  __asm__ volatile("" ::"r"(v217));
                }
                v218 = v26 + 49;
                v42 = (v217 & 1) == 0;
                v219 = v217 >> 1;
                if (!v42) {
                  {
                    v218 = *(_QWORD*)(v26 + 64);
                    __asm__ volatile("" ::"r"(v218));
                  }
                  {
                    v219 = *(_QWORD*)(v26 + 56);
                    __asm__ volatile("" ::"r"(v219));
                  }
                }
                *(_QWORD*)(v148 + 80) = v218;
                *(_QWORD*)(v148 + 88) = v219;
                if (atomic_fetch_add((atomic_ullong* volatile)(v216 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v220 = v216;
                  (*(void (**)(__int64))(*(_QWORD*)v216 + 16LL))(v216);
                  std___1___shared_weak_count___release_weak(v220);
                }
                v221 = v148 + 24;
                std___1___shared_weak_count___release_weak(v25);
                {
                  v222 = (__int64*)v8[14];
                  __asm__ volatile("" ::"r"(v222));
                }
                {
                  v223 = v8[15];
                  __asm__ volatile("" ::"r"(v223));
                }
                if ((unsigned __int64)v222 >= v223) {
                  {
                    v225 = v8[13];
                    __asm__ volatile("" ::"r"(v225));
                  }
                  v226 = (unsigned __int64)v222 - v225;
                  v227 = ((__int64)v222 - v225) >> 4;
                  v228 = v227 + 1;
                  if ((unsigned __int64)(v227 + 1) >> 60 != 0) {
                    GameRoutine_1813190();
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
                    goto LABEL_665;
                  }
                  v231 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v230, 16, 0);
                  v232 = (__int64*)(v231 + v226);
                  v417 = v231 + 16 * v230;
                  *v232 = v221;
                  v232[1] = v148;
                  v233 = v231 + v226 - 16 * v227;
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v148 + 8),
                                            1u, memory_order_relaxed);
                  v224 = v231 + v226 + 16;
                  memcpy(v233, v225, v226);
                  v8 = v431;
                  v431[13] = v233;
                  v431[14] = v224;
                  v431[15] = v417;
                  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
                  if (v225 != 0) {
                    v234 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v234 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v234, v225);
                  }
                }
                else {
                  *v222 = v221;
                  v222[1] = v148;
                  v224 = (__int64)(v222 + 2);
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v148 + 8),
                                            1u, memory_order_relaxed);
                }
                v8[14] = v224;
                v437 = v148 + 24;
                v438 = v148;
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v148 + 16),
                                          1u, memory_order_relaxed);
                GameRoutine_1810860(v12, &v437);
                if (v438 != 0) {
                  std___1___shared_weak_count___release_weak(v438);
                }
                v14 = v424;
                if (atomic_fetch_add(v427, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v148 + 16LL))(v148);
                  std___1___shared_weak_count___release_weak(v148);
                }
              LABEL_412:
                if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  goto LABEL_413;
                }
                goto LABEL_22;
              }
            }
            else {
              *(_DWORD*)(v148 + 72) = (_DWORD)&GameData_1a0d058;
            }
            *(_DWORD*)v205 = (*(_DWORD*)0x48LL);
            goto LABEL_391;
          }
        }
        else if (v29 <= 1) {
          goto LABEL_303;
        }
      LABEL_305:
        if (v25 == 0) {
          goto LABEL_22;
        }
        goto LABEL_412;
      }
      if (v15 == (unsigned int)wld_Crc32(0, "Signal_Light", 0xCu)) {
        if (*v13 != 0) {
          v120 =
              __dynamic_cast(*v13, GameData_212d4f0[0], GameData_2131fa0[0], 0);
          if (v120 != 0) {
            {
              v121 = v13[1];
              __asm__ volatile("" ::"r"(v121));
            }
            if (v121 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v121 + 8), 1u,
                                        memory_order_relaxed);
            }
          LABEL_309:
            v166 = fw_memory_HeapManager_Allocate(*v5, 832, 16, 0);
            *(_QWORD*)(v166 + 8) = 0;
            v167 = (atomic_ullong*)(v166 + 8);
            v123 = v166;
            *(_QWORD*)(v166 + 16) = 0;
            *(_QWORD*)v166 = GameData_20df290;
            if (v121 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v121 + 16),
                                        1u, memory_order_relaxed);
              *(_QWORD*)(v166 + 48) = v121;
              *(_QWORD*)(v166 + 32) = game_cutscene_LightActor_vtable;
              *(_QWORD*)(v166 + 40) = v120;
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v121 + 16),
                                        1u, memory_order_relaxed);
            }
            else {
              *(_QWORD*)(v166 + 48) = 0;
              *(_QWORD*)(v166 + 32) = game_cutscene_LightActor_vtable;
              *(_QWORD*)(v166 + 40) = v120;
            }
            *(_OWORD*)(v166 + 96) = GameData_1a837f0;
            *(_QWORD*)(v166 + 112) = 0x3F800000461C4000LL;
            *(_DWORD*)(v166 + 64) = 0;
            *(_QWORD*)(v166 + 72) = 0;
            *(_DWORD*)(v166 + 68) = 0;
            *(_OWORD*)(v166 + 80) = GameData_1a82fa0;
            *(_WORD*)(v166 + 124) = 0;
            *(_QWORD*)(v166 + 144) = 0x3F8000003F800000LL;
            *(_QWORD*)(v166 + 168) = 0;
            v168 = (__int64*)(v166 + 168);
            *(_QWORD*)(v166 + 176) = 0;
            *(_QWORD*)(v166 + 184) = 0;
            *(_QWORD*)(v166 + 192) = 0;
            *(_QWORD*)(v166 + 216) = 0;
            *(_QWORD*)(v166 + 224) = 0;
            *(_QWORD*)(v166 + 232) = 0;
            *(_QWORD*)(v166 + 256) = 0;
            *(_QWORD*)(v166 + 264) = 0;
            v416 = (_QWORD*)(v166 + 64);
            *(_DWORD*)(v166 + 120) = 1065353216;
            *(_DWORD*)(v166 + 152) = 1065353216;
            *(_QWORD*)(v166 + 128) = 0x3F00000042A00000LL;
            *(_QWORD*)(v166 + 136) = 1065353216;
            *(_QWORD*)(v166 + 208) = 0;
            v406 = (__int64*)(v166 + 208);
            *(_QWORD*)(v166 + 160) = v414;
            *(_QWORD*)(v166 + 200) = v413;
            v403 = (_QWORD*)(v166 + 160);
            v404 = (_QWORD*)(v166 + 200);
            *(_QWORD*)(v166 + 240) = v412;
            *(_QWORD*)(v166 + 248) = 0;
            v405 = (_QWORD*)(v166 + 240);
            v407 = (__int64*)(v166 + 248);
            memset(v166 + 272, 0, 0x230u);
            if (v121 == 0) {
              goto LABEL_580;
            }
            v169 = std___1___shared_weak_count_lock(v121);
            if (v169 == 0) {
              goto LABEL_578;
            }
            if (v120 == 0) {
              goto LABEL_576;
            }
            v402 = v169;
            v428 = v167;
            {
              v170 =
                  *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 +
                                                   32LL) -
                                        8LL) +
                             40LL);
              __asm__ volatile("" ::"r"(v170));
            }
            {
              v172 = *(_QWORD*)(v170 + 16);
              __asm__ volatile("" ::"r"(v172));
            }
            {
              v171 = *(_QWORD*)(v170 + 24);
              __asm__ volatile("" ::"r"(v171));
            }
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v171 + 16), 1u,
                                      memory_order_relaxed);
            v401 = std___1___shared_weak_count_lock(v171);
            std___1___shared_weak_count___release_weak(v171);
            {
              v173 = *(_QWORD*)(*(_QWORD*)(v172 + 288) + 872LL);
              __asm__ volatile("" ::"r"(v173));
            }
            {
              v174 = *(_DWORD*)(v120 + 72);
              __asm__ volatile("" ::"r"(v174));
            }
            switch (v174) {
            case 2:
              wld_c52ad0((void*)(&v437), v173);
              v291 = v438;
              v290 = (__int64)v439;
              if (v439 != nullptr) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v439 + 16),
                                          1u, memory_order_relaxed);
              }
              {
                v292 = *(_QWORD*)(v123 + 256);
                __asm__ volatile("" ::"r"(v292));
              }
              *(_QWORD*)(v123 + 248) = v291;
              *(_QWORD*)(v123 + 256) = v290;
              if (v292 != 0) {
                std___1___shared_weak_count___release_weak(v292);
              }
              v293 = v441;
              v179 = (__int64)v439;
              *(_QWORD*)(v123 + 264) = v440;
              *(_QWORD*)(v123 + 272) = v293;
              v289 = v409;
              break;
            case 1:
              wld_c525f0((void*)(&v437), v173);
              v286 = v438;
              v285 = (__int64)v439;
              if (v439 != nullptr) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v439 + 16),
                                          1u, memory_order_relaxed);
              }
              {
                v287 = *(_QWORD*)(v123 + 216);
                __asm__ volatile("" ::"r"(v287));
              }
              *(_QWORD*)(v123 + 208) = v286;
              *(_QWORD*)(v123 + 216) = v285;
              if (v287 != 0) {
                std___1___shared_weak_count___release_weak(v287);
              }
              v288 = v441;
              v179 = (__int64)v439;
              *(_QWORD*)(v123 + 224) = v440;
              *(_QWORD*)(v123 + 232) = v288;
            LABEL_504:
              {
                v289 = GameData_212e9d8[0] + 16;
                __asm__ volatile("" ::"r"(v289));
              }
              break;
            case 0:
              wld_c52150((void*)(&v437), v173);
              v176 = v438;
              v175 = (__int64)v439;
              if (v439 != nullptr) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v439 + 16),
                                          1u, memory_order_relaxed);
              }
              {
                v177 = *(_QWORD*)(v123 + 176);
                __asm__ volatile("" ::"r"(v177));
              }
              *(_QWORD*)(v123 + 168) = v176;
              *(_QWORD*)(v123 + 176) = v175;
              if (v177 != 0) {
                std___1___shared_weak_count___release_weak(v177);
              }
              v178 = v441;
              v179 = (__int64)v439;
              *(_QWORD*)(v123 + 184) = v440;
              *(_QWORD*)(v123 + 192) = v178;
              goto LABEL_504;
            default:
            LABEL_513:
              {
                v294 = *(_QWORD*)(v123 + 176);
                __asm__ volatile("" ::"r"(v294));
              }
              if (v294 != 0) {
                v295 = std___1___shared_weak_count_lock(v294);
                if (v295 != 0) {
                  {
                    v296 = *v168;
                    __asm__ volatile("" ::"r"(v296));
                  }
                  v297 = v295;
                  if (atomic_fetch_add((atomic_ullong* volatile)(v295 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v295 + 16LL))(v295);
                    std___1___shared_weak_count___release_weak(v297);
                  }
                  if (v296 != 0) {
                    {
                      v298 = *(_QWORD*)(v123 + 176);
                      __asm__ volatile("" ::"r"(v298));
                    }
                    {
                      v299 = (*(_BYTE*)(v120 + 24) & 1) != 0
                                 ? *(const char**)(v120 + 40)
                                 : (const char*)(v120 + 25);
                      __asm__ volatile("" ::"r"(v299));
                    }
                    if (v298 != 0) {
                      v300 = std___1___shared_weak_count_lock(v298);
                      if (v300 != 0) {
                        {
                          v301 = *v168;
                          __asm__ volatile("" ::"r"(v301));
                        }
                        if (atomic_fetch_add(
                                (atomic_ullong* volatile)(v300 + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
                          v398 = v299;
                          v302 = v300;
                          (*(void (**)(__int64))(*(_QWORD*)v300 + 16LL))(v300);
                          v303 = v302;
                          v299 = v398;
                          std___1___shared_weak_count___release_weak(v303);
                        }
                        if (v301 != 0) {
                          nn_util_SNPrintf(*(_QWORD*)(v123 + 184) + 184LL, 64,
                                           "%s", v299);
                        }
                      }
                    }
                  }
                }
              }
              {
                v304 = *(_QWORD*)(v123 + 216);
                __asm__ volatile("" ::"r"(v304));
              }
              v167 = v428;
              if (v304 != 0) {
                v305 = std___1___shared_weak_count_lock(v304);
                if (v305 != 0) {
                  {
                    v306 = *v406;
                    __asm__ volatile("" ::"r"(v306));
                  }
                  if (atomic_fetch_add((atomic_ullong* volatile)(v305 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    v307 = v305;
                    (*(void (**)(__int64))(*(_QWORD*)v305 + 16LL))(v305);
                    v308 = v307;
                    v167 = v428;
                    std___1___shared_weak_count___release_weak(v308);
                  }
                  if (v306 != 0) {
                    {
                      v309 = *(_QWORD*)(v123 + 216);
                      __asm__ volatile("" ::"r"(v309));
                    }
                    {
                      v310 = (*(_BYTE*)(v120 + 24) & 1) != 0
                                 ? *(const char**)(v120 + 40)
                                 : (const char*)(v120 + 25);
                      __asm__ volatile("" ::"r"(v310));
                    }
                    v399 = v310;
                    if (v309 != 0) {
                      v311 = std___1___shared_weak_count_lock(v309);
                      if (v311 != 0) {
                        {
                          v312 = *v406;
                          __asm__ volatile("" ::"r"(v312));
                        }
                        if (atomic_fetch_add(
                                (atomic_ullong* volatile)(v311 + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
                          v313 = v311;
                          (*(void (**)(__int64))(*(_QWORD*)v311 + 16LL))(v311);
                          v314 = v313;
                          v167 = v428;
                          std___1___shared_weak_count___release_weak(v314);
                        }
                        if (v312 != 0) {
                          nn_util_SNPrintf(*(_QWORD*)(v123 + 224) + 184LL, 64,
                                           "%s", v399);
                        }
                      }
                    }
                  }
                }
              }
              {
                v315 = *(_QWORD*)(v123 + 256);
                __asm__ volatile("" ::"r"(v315));
              }
              if (v315 != 0) {
                v316 = std___1___shared_weak_count_lock(v315);
                if (v316 != 0) {
                  {
                    v317 = *v407;
                    __asm__ volatile("" ::"r"(v317));
                  }
                  if (atomic_fetch_add((atomic_ullong* volatile)(v316 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    v318 = v316;
                    (*(void (**)(__int64))(*(_QWORD*)v316 + 16LL))(v316);
                    v319 = v318;
                    v167 = v428;
                    std___1___shared_weak_count___release_weak(v319);
                  }
                  if (v317 != 0) {
                    {
                      v320 = *(_QWORD*)(v123 + 256);
                      __asm__ volatile("" ::"r"(v320));
                    }
                    {
                      v321 = (*(_BYTE*)(v120 + 24) & 1) != 0
                                 ? *(const char**)(v120 + 40)
                                 : (const char*)(v120 + 25);
                      __asm__ volatile("" ::"r"(v321));
                    }
                    v400 = v321;
                    if (v320 != 0) {
                      v322 = std___1___shared_weak_count_lock(v320);
                      if (v322 != 0) {
                        {
                          v323 = *v407;
                          __asm__ volatile("" ::"r"(v323));
                        }
                        if (atomic_fetch_add(
                                (atomic_ullong* volatile)(v322 + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
                          v324 = v322;
                          (*(void (**)(__int64))(*(_QWORD*)v322 + 16LL))(v322);
                          v325 = v324;
                          v167 = v428;
                          std___1___shared_weak_count___release_weak(v325);
                        }
                        if (v323 != 0) {
                          nn_util_SNPrintf(*(_QWORD*)(v123 + 264) + 184LL, 64,
                                           "%s", v400);
                        }
                      }
                    }
                  }
                }
              }
              {
                v326 = *(_QWORD*)(v123 + 176);
                __asm__ volatile("" ::"r"(v326));
              }
              v416[1] = *(_QWORD*)(v120 + 88);
              *v416 = *(_QWORD*)(v120 + 80);
              *(_QWORD*)(v123 + 88) = *(_QWORD*)(v120 + 104);
              *(_QWORD*)(v123 + 80) = *(_QWORD*)(v120 + 96);
              *(_QWORD*)(v123 + 104) = *(_QWORD*)(v120 + 120);
              *(_QWORD*)(v123 + 96) = *(_QWORD*)(v120 + 112);
              *(_DWORD*)(v123 + 112) = *(_DWORD*)(v120 + 128);
              *(_DWORD*)(v123 + 116) = *(_DWORD*)(v120 + 132);
              *(_DWORD*)(v123 + 120) = *(_DWORD*)(v120 + 152);
              *(_BYTE*)(v123 + 124) = *(_BYTE*)(v120 + 156);
              *(_BYTE*)(v123 + 125) = *(_BYTE*)(v120 + 157);
              *(_DWORD*)(v123 + 128) = *(_DWORD*)(v120 + 144);
              *(_DWORD*)(v123 + 132) = *(_DWORD*)(v120 + 148);
              *(_QWORD*)(v123 + 144) = *(_QWORD*)(v120 + 136);
              *(_DWORD*)(v123 + 136) = *(_DWORD*)(v120 + 192);
              *(_DWORD*)(v123 + 140) = *(_DWORD*)(v120 + 196);
              if (v326 != 0) {
                v327 = std___1___shared_weak_count_lock(v326);
                if (v327 != 0) {
                  {
                    v328 = *v168;
                    __asm__ volatile("" ::"r"(v328));
                  }
                  if (atomic_fetch_add((atomic_ullong* volatile)(v327 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    v329 = v327;
                    (*(void (**)(__int64))(*(_QWORD*)v327 + 16LL))(v327);
                    v330 = v329;
                    v167 = v428;
                    std___1___shared_weak_count___release_weak(v330);
                  }
                  if (v328 != 0) {
                    GameRoutine_17fe060((__int64)v416, v403);
                  }
                }
              }
              {
                v331 = *(_QWORD*)(v123 + 216);
                __asm__ volatile("" ::"r"(v331));
              }
              if (v331 != 0) {
                v332 = std___1___shared_weak_count_lock(v331);
                if (v332 != 0) {
                  {
                    v333 = *v406;
                    __asm__ volatile("" ::"r"(v333));
                  }
                  if (atomic_fetch_add((atomic_ullong* volatile)(v332 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    v334 = v332;
                    (*(void (**)(__int64))(*(_QWORD*)v332 + 16LL))(v332);
                    v335 = v334;
                    v167 = v428;
                    std___1___shared_weak_count___release_weak(v335);
                  }
                  if (v333 != 0) {
                    game_cutscene_17fe320((__int64)v416, v404);
                  }
                }
              }
              {
                v336 = *(_QWORD*)(v123 + 256);
                __asm__ volatile("" ::"r"(v336));
              }
              if (v336 != 0) {
                v337 = std___1___shared_weak_count_lock(v336);
                if (v337 != 0) {
                  {
                    v338 = *v407;
                    __asm__ volatile("" ::"r"(v338));
                  }
                  if (atomic_fetch_add((atomic_ullong* volatile)(v337 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    v339 = v337;
                    (*(void (**)(__int64))(*(_QWORD*)v337 + 16LL))(v337);
                    v340 = v339;
                    v167 = v428;
                    std___1___shared_weak_count___release_weak(v340);
                  }
                  if (v338 != 0) {
                    GameRoutine_17fe700((__int64)v416, v405);
                  }
                }
              }
              v8 = v431;
              v169 = v402;
              if (v401 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v401 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v401 + 16LL))(v401);
                std___1___shared_weak_count___release_weak(v401);
                v169 = v402;
              }
            LABEL_576:
              if (atomic_fetch_add((atomic_ullong* volatile)(v169 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v341 = v169;
                (*(void (**)(__int64))(*(_QWORD*)v169 + 16LL))(v169);
                std___1___shared_weak_count___release_weak(v341);
              }
            LABEL_578:
              std___1___shared_weak_count___release_weak(v121);
              if (atomic_fetch_add((atomic_ullong* volatile)(v121 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v121 + 16LL))(v121);
                std___1___shared_weak_count___release_weak(v121);
              }
            LABEL_580:
              {
                v342 = (unsigned __int64*)v8[17];
                __asm__ volatile("" ::"r"(v342));
              }
              {
                v343 = v8[18];
                __asm__ volatile("" ::"r"(v343));
              }
              v344 = v123 + 32;
              if ((unsigned __int64)v342 >= v343) {
                v429 = v167;
                {
                  v346 = v8[16];
                  __asm__ volatile("" ::"r"(v346));
                }
                v347 = (unsigned __int64)v342 - v346;
                v348 = ((__int64)v342 - v346) >> 4;
                v349 = v348 + 1;
                if ((unsigned __int64)(v348 + 1) >> 60 != 0) {
                  GameRoutine_18131b0();
                }
                v350 = v343 - v346;
                if (v350 >> 3 > v349) {
                  v349 = v350 >> 3;
                }
                if ((unsigned __int64)v350 >= 0x7FFFFFFFFFFFFFF0LL) {
                  v351 = 0xFFFFFFFFFFFFFFFLL;
                }
                else {
                  v351 = v349;
                }
                if (v351 >> 60 != 0) {
                  goto LABEL_665;
                }
                v352 = fw_memory_g_heap_manager_ptr;
                v353 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v351, 16, 0);
                v354 = (unsigned __int64*)(v353 + v347);
                v355 = v353 + 16 * v351;
                *v354 = v344;
                v354[1] = v123;
                v356 = v353 + v347 - 16 * v348;
                v345 = v353 + v347 + 16;
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v123 + 8),
                                          1u, memory_order_relaxed);
                memcpy(v356, v346, v347);
                v8 = v431;
                v431[16] = v356;
                v431[17] = v345;
                v431[18] = v355;
                if (v346 != 0) {
                  v357 = 128;
                  if (*(_QWORD*)(*(_QWORD*)v352 + 200LL) == 0) {
                    v357 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*(_QWORD*)v352 + v357, v346);
                }
                v12 = v423;
                v14 = v424;
                v167 = v429;
              }
              else {
                *v342 = v344;
                v342[1] = v123;
                v345 = (__int64)(v342 + 2);
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v123 + 8),
                                          1u, memory_order_relaxed);
                v14 = v424;
              }
              v8[17] = v345;
              v437 = v123 + 32;
              v438 = v123;
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v123 + 16),
                                        1u, memory_order_relaxed);
              GameRoutine_1810860(v12, &v437);
              if (v438 != 0) {
                std___1___shared_weak_count___release_weak(v438);
              }
              v358 = atomic_fetch_add(v167, 0xFFFFFFFFFFFFFFFFLL);
              v5 = (__int64*)fw_memory_g_heap_manager_ptr;
              if (v358 == 0) {
                goto LABEL_375;
              }
              goto LABEL_22;
            }
            v437 = v289;
            v438 = 0;
            v439 = nullptr;
            if (v179 != 0) {
              std___1___shared_weak_count___release_weak(v179);
              v440 = 0;
              if (v439 != nullptr) {
                std___1___shared_weak_count___release_weak((__int64)v439);
              }
            }
            goto LABEL_513;
          }
        }
        else {
          v120 = 0;
        }
        v121 = 0;
        goto LABEL_309;
      }
      if (v15 == (unsigned int)wld_Crc32(0, "Signal_Constrain", 0x10u)) {
        if (*v13 != 0) {
          v145 = __dynamic_cast(*v13, GameData_212d4f0[0], GameData_2131fa8, 0);
          if (v145 != 0) {
            {
              v25 = v13[1];
              __asm__ volatile("" ::"r"(v25));
            }
            if (v25 != 0) {
              v146 = 0;
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                                        memory_order_relaxed);
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 16), 1u,
                                        memory_order_relaxed);
              goto LABEL_463;
            }
          }
          else {
            v25 = 0;
          }
        }
        else {
          v25 = 0;
          v145 = 0;
        }
        v146 = 1;
      LABEL_463:
        {
          v266 = (__int64*)v8[1];
          __asm__ volatile("" ::"r"(v266));
        }
        {
          v267 = v8[2];
          __asm__ volatile("" ::"r"(v267));
        }
        if ((unsigned __int64)v266 >= v267) {
          {
            v269 = *v8;
            __asm__ volatile("" ::"r"(v269));
          }
          v270 = (__int64)v266 - *v8;
          v271 = (v270 >> 5) + 1;
          if (v271 >> 59 != 0) {
            GameRoutine_18131d0();
          }
          v272 = v267 - v269;
          if (v272 >> 4 > v271) {
            v271 = v272 >> 4;
          }
          if ((unsigned __int64)v272 >= 0x7FFFFFFFFFFFFFE0LL) {
            v271 = 0x7FFFFFFFFFFFFFFLL;
          }
          if (v271 >> 59 != 0) {
            goto LABEL_665;
          }
          v273 = 32 * v271;
          v274 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 32 * v271, 16, 0);
          v275 = (__int64*)(v274 + v270);
          *v275 = v145;
          v275[1] = v25;
          if (v25 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 16), 1u,
                                      memory_order_relaxed);
          }
          v275[2] = 0;
          v275[3] = 0;
          {
            v277 = *v431;
            __asm__ volatile("" ::"r"(v277));
          }
          {
            v276 = (_QWORD*)v431[1];
            __asm__ volatile("" ::"r"(v276));
          }
          v278 = (char*)v275 + *v431 - (_QWORD)v276;
          if ((_QWORD*)*v431 == v276) {
            v283 = v431;
          }
          else {
            v408 = v274;
            v279 = (_QWORD*)*v431;
            v280 = (__int64*)((char*)v275 + *v431 - (_QWORD)v276);
            v418 = v273;
            do {
              *v280 = *v279;
              v280[1] = v279[1];
              *v279 = 0;
              v279[1] = 0;
              v280[2] = v279[2];
              v280[3] = v279[3];
              v279[2] = 0;
              v279[3] = 0;
              v279 += 4;
              v280 += 4;
            } while (v279 != v276);
            do {
              {
                v281 = *(_QWORD*)(v277 + 24);
                __asm__ volatile("" ::"r"(v281));
              }
              if (v281 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v281 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v281 + 16LL))(v281);
                std___1___shared_weak_count___release_weak(v281);
              }
              {
                v282 = *(_QWORD*)(v277 + 8);
                __asm__ volatile("" ::"r"(v282));
              }
              if (v282 != 0) {
                std___1___shared_weak_count___release_weak(v282);
              }
              v277 += 32;
            } while ((_QWORD*)v277 != v276);
            {
              v277 = *v431;
              __asm__ volatile("" ::"r"(v277));
            }
            v273 = v418;
            v283 = v431;
            v274 = v408;
          }
          v268 = v275 + 4;
          *v283 = (__int64)v278;
          v283[1] = (__int64)(v275 + 4);
          v283[2] = v274 + v273;
          if (v277 != 0) {
            v284 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v284 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v284, v277);
          }
          v14 = v424;
        }
        else {
          *v266 = v145;
          v266[1] = v25;
          if (v25 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 16), 1u,
                                      memory_order_relaxed);
          }
          v268 = v266 + 4;
          v266[2] = 0;
          v266[3] = 0;
        }
        v431[1] = (__int64)v268;
        v8 = v431;
        if (v25 != 0) {
          std___1___shared_weak_count___release_weak(v25);
        }
        v5 = (__int64*)fw_memory_g_heap_manager_ptr;
        if ((v146 & 1) == 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
        LABEL_413:
          (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
          v19 = v25;
          goto LABEL_460;
        }
        goto LABEL_22;
      }
      if (v15 != (unsigned int)wld_Crc32(0, "Signal_Movie", 0xCu)) {
        goto LABEL_22;
      }
      if (*v13 != 0) {
        v159 =
            __dynamic_cast(*v13, GameData_212d4f0[0], GameData_2131ec8[0], 0);
        if (v159 != 0) {
          {
            v160 = v13[1];
            __asm__ volatile("" ::"r"(v160));
          }
          if (v160 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v160 + 8), 1u,
                                      memory_order_relaxed);
          }
        }
        else {
          v160 = 0;
        }
      }
      else {
        v159 = 0;
        v160 = 0;
      }
      v359 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 72, 16, 0);
      *(_QWORD*)(v359 + 8) = 0;
      v360 = v359;
      *(_QWORD*)(v359 + 16) = 0;
      v419 = (atomic_ullong*)(v359 + 8);
      *(_QWORD*)v359 = GameData_20df2e0;
      if (v160 == 0) {
        break;
      }
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v160 + 16), 1u,
                                memory_order_relaxed);
      *(_QWORD*)(v359 + 40) = 0;
      v361 = (__int64*)(v359 + 40);
      *(_QWORD*)(v359 + 24) = game_cutscene_MovieActor_vtable;
      *(_QWORD*)(v359 + 48) = 0;
      *(_QWORD*)(v359 + 56) = 0;
      *(_BYTE*)(v359 + 64) = 0;
      v362 = std___1___shared_weak_count_lock(v160);
      if (v362 != 0) {
        *(_DWORD*)(v360 + 32) = *(_DWORD*)(v159 + 8);
        if (atomic_fetch_add((atomic_ullong* volatile)(v362 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v363 = v362;
          (*(void (**)(__int64))(*(_QWORD*)v362 + 16LL))(v362);
          std___1___shared_weak_count___release_weak(v363);
        }
        {
          v364 = *(float*)(v360 + 32);
          __asm__ volatile("" ::"w"(v364));
        }
      }
      else {
        v364 = COERCE_FLOAT((_DWORD)&GameData_1a0d058);
        *(_DWORD*)(v360 + 32) = (_DWORD)&GameData_1a0d058;
      }
      v365 = std___1___shared_weak_count_lock(v160);
      if (v365 == 0) {
        goto LABEL_609;
      }
      *(float*)(v360 + 36) = v364 + (float)*(int*)(v159 + 48);
      if (atomic_fetch_add((atomic_ullong* volatile)(v365 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v366 = v365;
        (*(void (**)(__int64))(*(_QWORD*)v365 + 16LL))(v365);
        std___1___shared_weak_count___release_weak(v366);
      }
    LABEL_610:
      v367 = std___1___shared_weak_count_lock(v160);
      game_cutscene_1800180((void*)(&v437), (unsigned __int8*)(v159 + 24));
      if ((*(_BYTE*)v361 & 1) != 0) {
        {
          v368 = *(_QWORD*)(v360 + 56);
          __asm__ volatile("" ::"r"(v368));
        }
        if (v368 != 0) {
          v369 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v369 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v369, v368);
        }
      }
      v370 = v437;
      v371 = (__int64)v439;
      LOWORD(v437) = 0;
      v361[1] = v438;
      v361[2] = v371;
      *v361 = v370;
      if (atomic_fetch_add((atomic_ullong* volatile)(v367 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v367 + 16LL))(v367);
        std___1___shared_weak_count___release_weak(v367);
      }
      if (a3[32] == 2) {
        v372 = std___1___shared_weak_count_lock(v160);
        if (v372 != 0) {
          v373 = v372;
          game_cutscene_18002e0((void*)(&v437), (unsigned __int8*)(v159 + 24));
          if (atomic_fetch_add((atomic_ullong* volatile)(v373 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v373 + 16LL))(v373);
            std___1___shared_weak_count___release_weak(v373);
          }
        }
        else {
          game_cutscene_18002e0((void*)(&v437),
                                (_BYTE*)((__int128*)0x10LL) + 8);
        }
        if ((v437 & 1) != 0) {
          v374 = v439;
        }
        else {
          v374 = (char*)&v437 + 1;
        }
        if ((v437 & 1) != 0) {
          v375 = v438;
        }
        else {
          v375 = (unsigned __int64)(unsigned __int8)v437 >> 1;
        }
        v376 = fs_6360e0(*snd_g_fileIndex_ptr[0], (__int64)v374, v375, 0, 0);
        v377 = fw_memory_g_heap_manager_ptr;
        if ((v376 & 1) != 0) {
          if ((*(_BYTE*)v361 & 1) != 0) {
            if ((v437 & 1) != 0) {
              v379 = v439;
            }
            else {
              v379 = (char*)&v437 + 1;
            }
            if ((v437 & 1) != 0) {
              v380 = v438;
            }
            else {
              v380 = (unsigned __int64)(unsigned __int8)v437 >> 1;
            }
            SpineModel_64dde0(v361, (__int64)v379, v380);
          }
          else if ((v437 & 1) != 0) {
            GameRoutine_64df20(v361, (__int64)v439, v438);
          }
          else {
            v361[2] = (__int64)v439;
            v378 = v438;
            *v361 = v437;
            v361[1] = v378;
          }
        }
        if ((v437 & 1) != 0 && v439 != nullptr) {
          v381 = 128;
          if (*(_QWORD*)(*(_QWORD*)v377 + 200LL) == 0) {
            v381 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v377 + v381, (__int64)v439);
        }
      }
      v382 = v160;
      v383 = v360 + 24;
      Manager_18cf910(*GameData_212c598[0], (__int64)v361);
      v430 = v382;
      std___1___shared_weak_count___release_weak(v382);
      {
        v384 = (__int64*)v8[20];
        __asm__ volatile("" ::"r"(v384));
      }
      {
        v385 = v8[21];
        __asm__ volatile("" ::"r"(v385));
      }
      if ((unsigned __int64)v384 >= v385) {
        {
          v387 = v8[19];
          __asm__ volatile("" ::"r"(v387));
        }
        v388 = (unsigned __int64)v384 - v387;
        v389 = ((__int64)v384 - v387) >> 4;
        v390 = v389 + 1;
        if ((unsigned __int64)(v389 + 1) >> 60 != 0) {
          GameRoutine_18131f0();
        }
        v391 = v385 - v387;
        if (v391 >> 3 > v390) {
          v390 = v391 >> 3;
        }
        if ((unsigned __int64)v391 >= 0x7FFFFFFFFFFFFFF0LL) {
          v392 = 0xFFFFFFFFFFFFFFFLL;
        }
        else {
          v392 = v390;
        }
        if (v392 >> 60 != 0) {
        LABEL_665:
          GameRoutine_60a210();
        }
        v393 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v392, 16, 0);
        v394 = (__int64*)(v393 + v388);
        v395 = v393 + 16 * v392;
        *v394 = v383;
        v394[1] = v360;
        v396 = v393 + v388 - 16 * v389;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v360 + 8), 1u,
                                  memory_order_relaxed);
        v386 = v393 + v388 + 16;
        memcpy(v396, v387, v388);
        v8 = v431;
        v431[19] = v396;
        v431[20] = v386;
        v431[21] = v395;
        v5 = (__int64*)fw_memory_g_heap_manager_ptr;
        if (v387 != 0) {
          v397 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v397 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v397, v387);
        }
      }
      else {
        *v384 = v383;
        v384[1] = v360;
        v386 = (__int64)(v384 + 2);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v360 + 8), 1u,
                                  memory_order_relaxed);
        v5 = (__int64*)fw_memory_g_heap_manager_ptr;
      }
      v8[20] = v386;
      v437 = v360 + 24;
      v438 = v360;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v360 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_1810860(v12, &v437);
      if (v438 != 0) {
        std___1___shared_weak_count___release_weak(v438);
      }
      v14 = v424;
      if (atomic_fetch_add(v419, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v360 + 16LL))(v360);
        std___1___shared_weak_count___release_weak(v360);
      }
      v18 = v430;
      if (atomic_fetch_add((atomic_ullong* volatile)(v430 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
      LABEL_28:
        (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
        v19 = v18;
      LABEL_460:
        std___1___shared_weak_count___release_weak(v19);
      }
    LABEL_22:
      v13 += 2;
      if (v13 == v14) {
        return;
      }
    }
    *(_QWORD*)(v359 + 40) = 0;
    v361 = (__int64*)(v359 + 40);
    *(_QWORD*)(v359 + 24) = game_cutscene_MovieActor_vtable;
    *(_QWORD*)(v359 + 48) = 0;
    *(_QWORD*)(v359 + 56) = 0;
    *(_BYTE*)(v359 + 64) = 0;
    v364 = COERCE_FLOAT((_DWORD)&GameData_1a0d058);
    *(_DWORD*)(v359 + 32) = (_DWORD)&GameData_1a0d058;
  LABEL_609:
    *(float*)(v360 + 36) = v364 + (float)0;
    goto LABEL_610;
  }
}

#pragma GCC visibility pop
