#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f14f80(_QWORD);
__int64 GameRoutine_f150c0(_QWORD);
__int64 GameRoutine_f15200(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_map_MapPanelDanger_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MapPanelDanger_Destructor(_QWORD* a1);
__int64 MapPanelDanger_DeletingDestructor(_QWORD* a1);
__int64 GameRoutine_64dfe0(_QWORD, _QWORD);
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212f8b0[14];
_QWORD* MapPanelDanger_f15340(_QWORD* a1, _QWORD* a2);
bool game_map_MapPanelDanger_UpdateMeshDanger_lambda0_Invoke(__int64 a1,
                                                             _DWORD* a2,
                                                             _DWORD* a3);
__int64 game_map_MapPanelDanger_UpdateMeshDanger_lambda1_Invoke(__int64 a1,
                                                                _DWORD* a2,
                                                                _DWORD* a3);
__attribute__((swiftcall)) void GameRoutine_f0ea80(PSEUDO_X8, __int64 result);
__int64* fw_containers_BalanceAfterInsert_alt1(
    __int64* result, __int64*) __asm__("fw_containers_BalanceAfterInsert");
__int64 CharacterController_d42d20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CharacterController_d42d20_alt1(
    __int64 result, char*, char*,
    unsigned __int64) __asm__("CharacterController_d42d20");
__int64 DangerCursorMeshData_Unknown4(_QWORD);
__int64 GameRoutine_f155c0(_QWORD);
__int64 GameRoutine_f54fe0(_QWORD);
__int64 GameRoutine_fcabb0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
__int64 GameRoutine_fcacb0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
__int64 MapDrawConst_fcbcc0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 MapPanelDanger_f14660_alt1(_QWORD,
                                   _QWORD) __asm__("MapPanelDanger_f14660");
__int64 MapPanelDanger_f15340_alt1(_QWORD,
                                   _QWORD) __asm__("MapPanelDanger_f15340");
__int64 MeshData_f555a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_containers_BalanceAfterInsert(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 game_map_f54910(_QWORD);
__int64 game_map_f54910_alt1(__int64) __asm__("game_map_f54910");
__int64 game_map_f54d00(_QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 std___1___shared_weak_count___release_weak(_QWORD);
char** GameRoutine_f155c0_alt1(char** result, char*, char*,
                               unsigned __int64) __asm__("GameRoutine_f155c0");
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c958;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_1a82a60;
extern __int128 GameData_1a83240;
extern __int128 GameData_1a83250;
extern __int128 GameData_1a83580;
extern __int128 GameData_1a83680;
extern __int128 GameData_1a836d0;
extern __int128 GameData_1a83860;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1ff21c8[])();
extern __int64 (*GameData_1ff2248[])();
extern __int64 (*game_map_DangerCursorMeshData_vtable[])();
extern __int64 (*game_map_DangerMeshData_vtable[])();
extern __int64 (*game_map_DangerMeshFillData_vtable[])();
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 GameData_212d020[5];
extern __int64 GameData_21ca310;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_f14f60(void);
void __attribute__((noreturn)) String_60a250(_QWORD);
void __attribute__((noreturn))
String_60a250_alt1(const char*) __asm__("String_60a250");
void game_map_MapPanelDanger_UpdateMeshDanger(__int64 a1);
__int64 MapPanelDanger_f14660(__int64** a1, __int64 a2);

void game_map_MapPanelDanger_UpdateMeshDanger(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  unsigned int v13;
  unsigned int v14;
  __int64 v15;
  unsigned int v16;
  unsigned int v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  int v22;
  _QWORD* v23;
  _QWORD* v24;
  __int64 v25;
  int v26;
  _QWORD* v27;
  _QWORD* v28;
  __int64 v29;
  int v30;
  __int64* v31;
  __int64* v32;
  char* v33;
  char* v34;
  __int64 v35;
  __int64 v36;
  int v37;
  unsigned int v38;
  unsigned int v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64* v44;
  __int64 v45;
  _QWORD* v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int128 v53;
  __int128 v54;
  __int128 v55;
  __int64 v56;
  __int64 v57;
  __int128 v58;
  __int128 v59;
  __int128 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64* v64;
  __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  char v71;
  __int64 v72;
  void (***v73)(_QWORD);
  void (***v74)(_QWORD);
  void (***v75)(_QWORD);
  void (**v76)(_QWORD);
  __int64 v77;
  __int64 v78;
  void (***v79)(_QWORD);
  void (***v80)(_QWORD);
  void (***v81)(_QWORD);
  void (**v82)(_QWORD);
  __int64 v83;
  __int64 v84;
  float32x4_t* v85;
  float32x4_t* v86;
  float32x4_t* v87;
  void (**v88)(float32x4_t*);
  __int64 v89;
  _QWORD* v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  int v96;
  _QWORD* v97;
  _QWORD* v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  unsigned __int64 v104;
  __int64 v105;
  unsigned __int64 v106;
  unsigned __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  char v111;
  char v112;
  int v113;
  signed __int64 v114;
  unsigned __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  unsigned __int64 v128;
  __int64 v129;
  _QWORD* v130;
  _QWORD* v131;
  __int64 v132;
  char v133;
  unsigned __int64 v134;
  unsigned __int8* v135;
  unsigned __int8* v136;
  __int64 v137;
  unsigned __int64 v138;
  int v139;
  int v140;
  __int64 v141;
  unsigned __int8* v142;
  bool v143;
  int v144;
  unsigned __int8* v145;
  __int64 v146;
  bool v147;
  int v148;
  bool v149;
  int v150;
  bool v151;
  int v152;
  bool v153;
  int v154;
  char v155;
  __int64 v156;
  char v157;
  __int64 v158;
  __int64 v159;
  unsigned __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  unsigned int v172;
  __int128 v173;
  int v174;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  int8x16_t v180;
  __int128 v181;
  __int128 v182;
  int8x16_t v183;
  __int128 v184;
  float32x4_t v185;
  float32x4_t v186;
  float32x4_t* v187;
  float32x4_t v188;
  float32x4_t* v189;
  float32x4_t* v190;
  float32x4_t v191;
  float32x4_t v192;
  int8x16_t v193;
  float32x4_t v195;
  unsigned __int64 v196;
  __int64 v197;
  unsigned __int64 v198;
  __int64 v199;
  __int64* v200;
  _QWORD* v201;
  unsigned __int64 v202;
  unsigned __int64 v203;
  unsigned __int64 v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  __int128 v208;
  __int128 v209;
  __int128 v210;
  __int64 v211;
  __int64 v212;
  __int128 v213;
  __int128 v214;
  __int128 v215;
  __int64 v216;
  __int64 v217;
  __int64 v218;
  __int64 v219;
  __int64 v220;
  __int64 v221;
  __int64 v222;
  __int64 v223;
  __int64* v224;
  unsigned __int64 v225;
  __int64 v226;
  __int64 v227;
  __int64 v228;
  char v229;
  __int64 v230;
  unsigned __int64 v231;
  __int64 v232;
  _QWORD* v233;
  unsigned __int64 v234;
  unsigned __int64 v235;
  __int64 v236;
  __int64 v237;
  __int64 v238;
  __int64 v239;
  __int64 v240;
  float32x4_t* v241;
  float32x4_t* v242;
  float32x4_t* v243;
  void (**v244)(float32x4_t*);
  __int64 v245;
  __int64 v246;
  __int64 v247;
  float v248;
  __int64 v249;
  float* v250;
  float* v251;
  float v252;
  float v253;
  float v254;
  float v255;
  float v256;
  __int64 v257;
  float* v258;
  float* v259;
  float* v260;
  float v261;
  float v262;
  float v263;
  float v264;
  float v265;
  __int64 v266;
  float* v267;
  float* v268;
  __int64* v269;
  __int64 v270;
  __int64 v271;
  float v272;
  float v273;
  float v274;
  float v275;
  float v276;
  __int64 v277;
  float* v278;
  float* v279;
  float* v280;
  __int64 v281;
  __int64 v282;
  __int64 v283;
  void (***v284)(_QWORD);
  void (***v285)(_QWORD);
  void (***v286)(_QWORD);
  __int64* v287;
  void (***v288)(_QWORD);
  void (**v289)(_QWORD);
  __int64 v290;
  float* v291;
  float* v292;
  __int64* v293;
  __int64 v294;
  __int64 v295;
  float v296;
  float v297;
  float v298;
  float v299;
  float v300;
  __int64 v301;
  float* v302;
  float* v303;
  float* v304;
  __int64 v305;
  __int64 v306;
  __int64 v307;
  void (***v308)(_QWORD);
  void (***v309)(_QWORD);
  void (***v310)(_QWORD);
  void (***v311)(_QWORD);
  void (**v312)(_QWORD);
  __int64 v313;
  __int64 v314;
  __int64 v315;
  __int64* v316;
  __int64 v317;
  unsigned __int64 v318;
  __int64 v319;
  char v320;
  float32x4_t v321;
  char v322;
  __int64* v323;
  __int64 v324;
  char v325;
  float32x4_t v326;
  float v327;
  float v328;
  float v329;
  float v330;
  float v331;
  float v332;
  float v333;
  float v334;
  _QWORD v335[4];
  _QWORD* v336;
  _QWORD v337[4];
  _QWORD* v338;
  _QWORD v339[10];
  __int64 v340;
  __int64 v341;
  void (***v342)(_QWORD);
  void (***v343)(_QWORD);
  __int64 v344;
  __int64 v345;
  __int128 v346;
  __int64 v347;
  __int64 v348;
  __int64 v349;
  int v350;
  __int64 v351;
  __int64 v352;
  __int64 v353;
  __int64 v354;
  __int64 v355;
  __int64 v356;
  int v357;
  __int64 v358;
  __int64* v359;
  __int64 v360;
  __int64 v361;
  __int64 v362;
  __int64 v363;
  void (***v364)(_QWORD);
  void (***v365)(_QWORD);
  __int64 v366;
  __int64 v367;
  _QWORD v368[2];
  __int128 v369;
  __int128 v370;
  __int128 v371;
  __int128 v372;
  __int64 v373;
  __int64 v374;
  float32x4_t* v375;
  float32x4_t* v376;
  __int64 v377;
  __int64 v378;
  __int128 v379;
  __int64 v380;
  __int64 v381;
  float32x4_t v382;
  __int64 v383;
  __int64 v384;
  __int64 v385;
  __int64 v386;
  __int64 v387;
  __int64 v388;
  int v389;
  __int64 v390;
  __int64 v391;
  __int64 v392;
  __int64 v393;
  _QWORD v394[5];

  if (*(_BYTE*)(a1 + 8) != 1) {
    goto LABEL_143;
  }
  v2 = *(_QWORD**)(a1 + 16);
  v3 = (_QWORD*)(a1 + 24);
  v324 = a1 + 16;
  if (v2 != (_QWORD*)(a1 + 24)) {
    do {
      v21 = v2[6];
      *((_BYTE*)v2 + 272) = 0;
      if (((*(__int64 (**)(void*))(v21 + 48))(&v2[6]) & 1) != 0) {
        v22 = 1036831949;
      }
      else {
        v22 = 0;
        *((_DWORD*)v2 + 69) = 0;
      }
      v23 = (_QWORD*)v2[1];
      *((_DWORD*)v2 + 70) = v22;
      if (v23 != nullptr) {
        do {
          v24 = v23;
          v23 = (_QWORD*)*v23;
        } while (v23 != nullptr);
      }
      else {
        do {
          v24 = (_QWORD*)v2[2];
          v143 = v2 == (_QWORD*)*v24;
          v2 = v24;
        } while (!v143);
      }
      v2 = v24;
    } while (v24 != v3);
  }
  v4 = *(_QWORD**)(a1 + 40);
  if (v4 != (_QWORD*)(a1 + 48)) {
    do {
      v25 = v4[6];
      *((_BYTE*)v4 + 272) = 0;
      if (((*(__int64 (**)(void*))(v25 + 48))(&v4[6]) & 1) != 0) {
        v26 = 1036831949;
      }
      else {
        v26 = 0;
        *((_DWORD*)v4 + 69) = 0;
      }
      v27 = (_QWORD*)v4[1];
      *((_DWORD*)v4 + 70) = v26;
      if (v27 != nullptr) {
        do {
          v28 = v27;
          v27 = (_QWORD*)*v27;
        } while (v27 != nullptr);
      }
      else {
        do {
          v28 = (_QWORD*)v4[2];
          v143 = v4 == (_QWORD*)*v28;
          v4 = v28;
        } while (!v143);
      }
      v4 = v28;
    } while (v28 != (_QWORD*)(a1 + 48));
  }
  v5 = *(__int64**)(a1 + 64);
  v6 = (__int64*)(a1 + 72);
  if (v5 != (__int64*)(a1 + 72)) {
    do {
      v29 = v5[6];
      *((_BYTE*)v5 + 272) = 0;
      if (((*(__int64 (**)(void*))(v29 + 48))(&v5[6]) & 1) != 0) {
        v30 = 1036831949;
      }
      else {
        v30 = 0;
        *((_DWORD*)v5 + 69) = 0;
      }
      v31 = (__int64*)v5[1];
      *((_DWORD*)v5 + 70) = v30;
      if (v31 != nullptr) {
        do {
          v32 = v31;
          v31 = (__int64*)*v31;
        } while (v31 != nullptr);
      }
      else {
        do {
          v32 = (__int64*)v5[2];
          v143 = v5 == (__int64*)*v32;
          v5 = v32;
        } while (!v143);
      }
      v5 = v32;
    } while (v32 != v6);
  }
  *(_QWORD*)(a1 + 120) = *(_QWORD*)(a1 + 112);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 48LL))(a1) & 1) == 0) {
    goto LABEL_142;
  }
  game_map_f54910(v368);
  v368[0] = game_map_DangerMeshData_vtable;
  game_map_f54910(&v359);
  v359 = (__int64*)game_map_DangerMeshData_vtable;
  game_map_f54910(v339);
  v358 = a1;
  v339[0] = game_map_DangerMeshFillData_vtable;
  v7 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 248LL);
  v8 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 256LL);
  v319 = *(_QWORD*)GameData_212d020[0];
  if (v7 == v8) {
    goto LABEL_103;
  }
  v9 = 0;
LABEL_8:
  v322 = v9;
  v7 += 4;
  v10 = *(_QWORD*)(*GameData_212ce98[0] + 152);
  do {
    v12 = v7 - 4;
    v11 = *(char*)(v7 - 4);
    v13 = *(char*)(v7 - 3);
    v14 = v11 + 32 * v13;
    if (v14 >= 0x400) {
      v15 = 0;
    }
    else {
      v15 = v14;
    }
    v16 = *(unsigned __int8*)(v10 + v15 + 8);
    if (v16 >= 2) {
      v338 = v337;
      v337[0] = GameData_1ff21c8;
      v17 = MapDrawConst_fcbcc0(a1, 1, v11, v13, v337, 1);
      if (v338 == v337) {
        v18 = 32;
      }
      else {
        if (v338 == nullptr) {
        LABEL_19:
          game_map_f54d00(v368);
          GameRoutine_fcacb0(a1, v368, 1, v11, v13, v17, GameData_212c958);
          MapPanelDanger_f14660_alt1(v324, v368);
          v10 = *(_QWORD*)(*GameData_212ce98[0] + 152);
          v16 = *(unsigned __int8*)(v10 + v15 + 8);
          goto LABEL_20;
        }
        v18 = 40;
      }
      (*(void (**)(__int64))(*v338 + v18))((__int64)v338);
      goto LABEL_19;
    }
  LABEL_20:
    if ((*(_BYTE*)(*GameData_212ce90[0] + 21) & 1) != 0 && v16 != 0) {
      v335[0] = GameData_1ff2248;
      v336 = v335;
      v19 = MapDrawConst_fcbcc0(a1, 1, v11, v13, v335, 1);
      if (v336 == v335) {
        v20 = 32;
      LABEL_26:
        (*(void (**)(__int64))(*v336 + v20))((__int64)v336);
      }
      else if (v336 != nullptr) {
        v20 = 40;
        goto LABEL_26;
      }
      game_map_f54d00(&v359);
      v9 = 1;
      GameRoutine_fcacb0(a1, &v359, 1, v11, v13, v19, GameData_212c958);
      MapPanelDanger_f14660_alt1(a1 + 40, &v359);
      if (v7 != v8) {
        goto LABEL_8;
      }
      goto LABEL_60;
    }
    v7 += 4;
  } while (v12 + 4 != v8);
  if ((v322 & 1) == 0) {
    goto LABEL_103;
  }
LABEL_60:
  GameRoutine_f0ea80((void*)((__int64)&v327), 4);
  v327 = v327 + 0x1.99999a0000000p-11f;
  v328 = v328 + 0x1.0000000000000p-10f;
  v329 = v329 + -0x1.99999a0000000p-11f;
  v330 = v330 + 0x1.0000000000000p-10f;
  v33 = *(char**)(v319 + 248);
  v34 = *(char**)(v319 + 256);
  v333 = v333 + 0x1.99999a0000000p-11f;
  v334 = v334 + -0x1.0000000000000p-10f;
  v331 = v331 + -0x1.99999a0000000p-11f;
  v332 = v332 + -0x1.0000000000000p-10f;
  if (v33 != v34) {
    v35 = *GameData_212ce98[0];
    v36 = *GameData_212ce90[0];
    do {
      v38 = *v33;
      v39 = v33[1];
      LODWORD(v40) = v38 + 32 * v39;
      if ((unsigned int)v40 >= 0x400) {
        v40 = 0;
      }
      else {
        v40 = (unsigned int)v40;
      }
      if ((*(_BYTE*)(v36 + 21) & 1) != 0 &&
          *(_BYTE*)(*(_QWORD*)(v35 + 152) + v40 + 8) != 0) {
        game_map_f54d00(v339);
        GameRoutine_fcabb0(a1, v339, 1, v38, v39, &v327, GameData_212c958);
        v41 = (*(__int64 (**)(_QWORD*))(v339[0] + 32LL))(v339);
        v42 = *(_QWORD*)(a1 + 72);
        v43 = v41;
        v44 = (__int64*)(a1 + 72);
        v45 = a1 + 72;
        if (v42 != 0) {
          v46 = *(_QWORD**)(a1 + 72);
          while (1) {
            v47 = v46[4];
            if (v41 >= v47) {
              if (v47 >= v41) {
                while (1) {
                  while (1) {
                    v48 = *(_QWORD*)(v42 + 32);
                    if (v41 >= v48) {
                      break;
                    }
                    v42 = *(_QWORD*)v42;
                    if (v42 == 0) {
                      goto LABEL_507;
                    }
                  }
                  if (v48 >= v41) {
                    goto LABEL_101;
                  }
                  v42 = *(_QWORD*)(v42 + 8);
                  if (v42 == 0) {
                  LABEL_507:
                    String_60a250("map::at:  key not found");
                  }
                }
              }
              ++v46;
            }
            v46 = (_QWORD*)*v46;
            if (v46 == nullptr) {
              while (1) {
                while (1) {
                  v49 = *(_QWORD*)(v42 + 32);
                  v45 = v42;
                  if (v41 >= v49) {
                    break;
                  }
                  v42 = *(_QWORD*)v42;
                  v44 = (__int64*)v45;
                  if (*(_QWORD*)v45 == 0) {
                    goto LABEL_86;
                  }
                }
                if (v49 >= v41) {
                  goto LABEL_89;
                }
                v42 = *(_QWORD*)(v42 + 8);
                if (v42 == 0) {
                  v44 = (__int64*)(v45 + 8);
                  goto LABEL_86;
                }
              }
            }
          }
        }
      LABEL_86:
        v50 = v45;
        v45 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 304, 16, 0);
        *(_QWORD*)(v45 + 32) = v43;
        game_map_f54910(v45 + 48);
        *(_QWORD*)(v45 + 48) = game_map_DangerMeshFillData_vtable;
        *(_QWORD*)(v45 + 296) = 0;
        v51 = v45;
        *(_QWORD*)v45 = 0;
        *(_QWORD*)(v45 + 8) = 0;
        *(_QWORD*)(v45 + 16) = v50;
        *v44 = v45;
        v52 = **(_QWORD**)(a1 + 64);
        if (v52 != 0) {
          *(_QWORD*)(a1 + 64) = v52;
          v51 = *v44;
        }
        fw_containers_BalanceAfterInsert(*(_QWORD*)(a1 + 72), v51);
        ++*(_QWORD*)(a1 + 80);
      LABEL_89:
        *(_QWORD*)(v45 + 56) = v339[1];
        v53 = *(_OWORD*)&v339[4];
        *(_OWORD*)(v45 + 64) = *(_OWORD*)&v339[2];
        *(_OWORD*)(v45 + 80) = v53;
        v54 = *(_OWORD*)&v339[6];
        v55 = *(_OWORD*)&v339[8];
        v56 = v341;
        *(_QWORD*)(v45 + 128) = v340;
        *(_QWORD*)(v45 + 136) = v56;
        *(_OWORD*)(v45 + 96) = v54;
        *(_OWORD*)(v45 + 112) = v55;
        if ((_QWORD*)(v45 + 48) != v339) {
          GameRoutine_f155c0(v45 + 144);
          CharacterController_d42d20(v45 + 168, v344, v345, (v345 - v344) >> 4);
        }
        v57 = v348;
        v42 = a1 + 72;
        v58 = v346;
        *(_QWORD*)(v45 + 208) = v347;
        *(_QWORD*)(v45 + 216) = v57;
        *(_QWORD*)(v45 + 192) = v58;
        v59 = *(_OWORD*)(v45 + 192);
        *((_QWORD*)&v59 + 1) = DWORD2(v58);
        DWORD2(v58) = v350;
        *(_QWORD*)(v45 + 224) = v349;
        *(_OWORD*)(v45 + 192) = v59;
        v60 = *(_OWORD*)(v45 + 224);
        v61 = v352;
        *((_QWORD*)&v60 + 1) = DWORD2(v58);
        *(_QWORD*)(v45 + 240) = v351;
        *(_QWORD*)(v45 + 248) = v61;
        v62 = v354;
        *(_QWORD*)(v45 + 256) = v353;
        *(_QWORD*)(v45 + 264) = v62;
        *(_OWORD*)(v45 + 224) = v60;
        *(_DWORD*)(v45 + 288) = v357;
        v63 = v356;
        *(_QWORD*)(v45 + 272) = v355;
        *(_QWORD*)(v45 + 280) = v63;
        *(_QWORD*)(v45 + 296) = v358;
        v64 = (__int64*)(a1 + 72);
        v65 = *v6;
        if (*v6 != 0) {
          while (1) {
            while (1) {
              v42 = v65;
              v66 = *(_QWORD*)(v65 + 32);
              if (v43 >= v66) {
                break;
              }
              v65 = *(_QWORD*)v42;
              v64 = (__int64*)v42;
              if (*(_QWORD*)v42 == 0) {
                goto LABEL_98;
              }
            }
            if (v66 >= v43) {
              break;
            }
            v65 = *(_QWORD*)(v42 + 8);
            if (v65 == 0) {
              v64 = (__int64*)(v42 + 8);
              goto LABEL_98;
            }
          }
        }
        else {
        LABEL_98:
          v67 = v42;
          v42 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 304, 16, 0);
          *(_QWORD*)(v42 + 32) = v43;
          game_map_f54910(v42 + 48);
          *(_QWORD*)(v42 + 48) = game_map_DangerMeshFillData_vtable;
          *(_QWORD*)(v42 + 296) = 0;
          v68 = v42;
          *(_QWORD*)v42 = 0;
          *(_QWORD*)(v42 + 8) = 0;
          *(_QWORD*)(v42 + 16) = v67;
          *v64 = v42;
          v69 = **(_QWORD**)(a1 + 64);
          if (v69 != 0) {
            *(_QWORD*)(a1 + 64) = v69;
            v68 = *v64;
          }
          fw_containers_BalanceAfterInsert(*(_QWORD*)(a1 + 72), v68);
          ++*(_QWORD*)(a1 + 80);
        }
      LABEL_101:
        v70 = *(_QWORD*)(v42 + 48);
        *(_BYTE*)(v42 + 272) = 1;
        v71 = (*(__int64 (**)(void*))(v70 + 48))((void*)(v42 + 48));
        v35 = *GameData_212ce98[0];
        v36 = *GameData_212ce90[0];
        if ((v71 & 1) != 0) {
          v37 = 1036831949;
        }
        else {
          v37 = 0;
          *(_DWORD*)(v42 + 276) = 1065353216;
        }
        *(_DWORD*)(v42 + 280) = v37;
      }
      v33 += 4;
    } while (v33 != v34);
  }
LABEL_103:
  v339[0] = GameData_212f8b0[0] + 2;
  if (v344 != 0) {
    v345 = v344;
    v72 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v72 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v72);
  }
  v73 = v342;
  if (v342 != nullptr) {
    if (v342 == v343) {
      goto LABEL_113;
    }
    v74 = v343 - 8;
    v75 = v343 - 8;
    do {
      v76 = *v75;
      v75 -= 8;
      (*v76)(v74);
      v143 = v74 == v73;
      v74 = v75;
    } while (!v143);
    v343 = v73;
    if (v342 != nullptr) {
    LABEL_113:
      v77 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v77 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v77);
    }
  }
  v359 = GameData_212f8b0[0] + 2;
  if (v366 != 0) {
    v367 = v366;
    v78 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v78 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v78);
  }
  v79 = v364;
  if (v364 != nullptr) {
    if (v364 == v365) {
      goto LABEL_126;
    }
    v80 = v365 - 8;
    v81 = v365 - 8;
    do {
      v82 = *v81;
      v81 -= 8;
      (*v82)(v80);
      v143 = v80 == v79;
      v80 = v81;
    } while (!v143);
    v365 = v79;
    if (v364 != nullptr) {
    LABEL_126:
      v83 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v83 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v83);
    }
  }
  v368[0] = GameData_212f8b0[0] + 2;
  if (v377 != 0) {
    v378 = v377;
    v84 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v84 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v84);
  }
  v85 = v375;
  if (v375 != nullptr) {
    if (v375 == v376) {
      goto LABEL_139;
    }
    v86 = v376 - 4;
    v87 = v376 - 4;
    do {
      v88 = (void (**)(float32x4_t*))LANES128(*(v87)).n128_u64[0];
      v87 -= 4;
      (*v88)(v86);
      v143 = v86 == v85;
      v86 = v87;
    } while (!v143);
    v376 = v85;
    if (v375 != nullptr) {
    LABEL_139:
      v89 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v89 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v89);
    }
  }
LABEL_142:
  *(_BYTE*)(a1 + 8) = 0;
LABEL_143:
  v90 = *(_QWORD**)(a1 + 88);
  if (v90 != (_QWORD*)(a1 + 96)) {
    do {
      v95 = v90[6];
      *((_BYTE*)v90 + 272) = 0;
      if (((*(__int64 (**)(void*))(v95 + 48))(&v90[6]) & 1) != 0) {
        v96 = 1036831949;
      }
      else {
        v96 = 0;
        *((_DWORD*)v90 + 69) = 0;
      }
      v97 = (_QWORD*)v90[1];
      *((_DWORD*)v90 + 70) = v96;
      if (v97 != nullptr) {
        do {
          v98 = v97;
          v97 = (_QWORD*)*v97;
        } while (v97 != nullptr);
      }
      else {
        do {
          v98 = (_QWORD*)v90[2];
          v143 = v90 == (_QWORD*)*v98;
          v90 = v98;
        } while (!v143);
      }
      v90 = v98;
    } while (v98 != (_QWORD*)(a1 + 96));
  }
  v323 = (__int64*)(a1 + 96);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 48LL))(a1) & 1) == 0) {
    goto LABEL_370;
  }
  v91 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13224);
  v92 = *(_QWORD*)(v91 + 48);
  v93 = *(_QWORD*)(v91 + 56);
  if (v93 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v93 + 8), 1u,
                              memory_order_relaxed);
    v94 = *(_QWORD*)(*(_QWORD*)(v92 + 8) + 288LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v93 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v93 + 16LL))(v93);
      std___1___shared_weak_count___release_weak(v93);
    }
  }
  else {
    v94 = *(_QWORD*)(*(_QWORD*)(v92 + 8) + 288LL);
  }
  v99 = 120;
  if (*(_BYTE*)(v94 + 90) != 0) {
    v99 = 89;
  }
  if ((*(_BYTE*)(v94 + v99) & 1) == 0) {
    goto LABEL_166;
  }
  v100 = 744;
  if (*(_BYTE*)(v94 + 712) != 0) {
    v100 = 708;
  }
  if (*(float*)(v94 + v100) > 0x1.0000000000000p-1f) {
    v325 = 1;
  }
  else {
  LABEL_166:
    v325 = 0;
  }
  LODWORD(v368[0]) = 15;
  v101 = game_UnitPool_GetFirst(v368);
  if (v101 != 0) {
    v102 = *(_QWORD*)(v101 + 432);
    v103 = v101;
    if (v102 == 0) {
      v102 = *(_QWORD*)(v101 + 440);
      if (v102 != 0) {
        v104 = *(unsigned __int8*)(v102 + 16);
        if (v104 <= 8) {
          v314 = 24LL * *(unsigned __int8*)(v102 + 16) + 556024;
          while (1) {
            if (v104 <= 2) {
              v102 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v314);
              if (v102 != 0) {
                break;
              }
            }
            ++v104;
            v314 += 24;
            if (v104 == 9) {
              goto LABEL_171;
            }
          }
        }
        else {
        LABEL_171:
          v102 = 0;
        }
      }
    }
    v105 = 0;
    v106 = 0;
    v107 = 0;
    while (1) {
    LABEL_174:
      v108 = v102;
      if (*(_QWORD*)(v103 + 392) != 0 && (*(_BYTE*)(v103 + 417) & 0x1C) == 0 &&
          (*(float (**)(__int64))(*(_QWORD*)(v103 + 152) + 16LL))(v103 + 152) >
              0.0f &&
          (*(_BYTE*)(v103 + 417) & 0x20) != 0) {
        v110 = *(_QWORD*)(v103 + 440);
        if (v110 != 0) {
          v111 = *(_BYTE*)(v110 + 16);
        }
        else {
          v111 = 9;
        }
        v112 = *(_BYTE*)(v103 + 585);
        v113 = *(_DWORD*)(v103 + 592);
        if (v106 >= v107) {
          v114 = v106 - v105;
          v115 = 1 - 0x5555555555555555LL * ((__int64)(v106 - v105) >> 4);
          if (v115 > 0x555555555555555LL) {
          LABEL_509:
            GameRoutine_f14f60();
          }
          v320 = *(_BYTE*)(v103 + 584);
          if (0x5555555555555556LL * ((__int64)(v107 - v105) >> 4) > v115) {
            v115 = 0x5555555555555556LL * ((__int64)(v107 - v105) >> 4);
          }
          if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v107 - v105) >> 4) >=
              0x2AAAAAAAAAAAAAALL) {
            v115 = 0x555555555555555LL;
          }
          if (v115 > 0x555555555555555LL) {
          LABEL_508:
            GameRoutine_60a210(v109);
          }
          v116 = 3 * v115;
          v117 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v115, 16, 0);
          v118 = v117 + v114;
          *(_BYTE*)(v118 + 1) = v112;
          *(_WORD*)(v118 + 2) = 0;
          *(_DWORD*)(v118 + 4) = v113;
          *(_BYTE*)(v118 + 8) = v111;
          *(_QWORD*)(v118 + 16) = v103;
          *(_QWORD*)(v118 + 24) = 0;
          *(_QWORD*)(v118 + 36) = 0;
          *(_BYTE*)v118 = v320;
          *(_BYTE*)(v118 + 32) = v325;
          v119 = v117 + v114 + 48 * (v114 / -48);
          if (v105 != v106) {
            v120 = v105;
            v121 = v117 + v114 + 48 * (v114 / -48);
            do {
              *(_BYTE*)v121 = *(_BYTE*)v120;
              *(_BYTE*)(v121 + 1) = *(_BYTE*)(v120 + 1);
              *(_BYTE*)(v121 + 2) = *(_BYTE*)(v120 + 2);
              *(_BYTE*)(v121 + 3) = *(_BYTE*)(v120 + 3);
              *(_QWORD*)(v121 + 4) = *(_QWORD*)(v120 + 4);
              v122 = *(_QWORD*)(v120 + 12);
              v123 = *(_QWORD*)(v120 + 20);
              v124 = *(_QWORD*)(v120 + 28);
              v125 = *(_QWORD*)(v120 + 36);
              v120 += 48;
              *(_QWORD*)(v121 + 36) = v125;
              *(_QWORD*)(v121 + 28) = v124;
              *(_QWORD*)(v121 + 20) = v123;
              *(_QWORD*)(v121 + 12) = v122;
              v121 += 48;
            } while (v120 != v106);
          }
          v107 = v117 + 16 * v116;
          v106 = v118 + 48;
          if (v105 != 0) {
            v126 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v126 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v126);
          }
          v105 = v119;
        }
        else {
          *(_BYTE*)v106 = *(_BYTE*)(v103 + 584);
          *(_BYTE*)(v106 + 1) = v112;
          *(_WORD*)(v106 + 2) = 0;
          *(_DWORD*)(v106 + 4) = v113;
          *(_BYTE*)(v106 + 8) = v111;
          *(_QWORD*)(v106 + 16) = v103;
          *(_QWORD*)(v106 + 24) = 0;
          *(_QWORD*)(v106 + 36) = 0;
          *(_BYTE*)(v106 + 32) = v325;
          v106 += 48LL;
        }
      }
      if (v108 == 0) {
        break;
      }
      v102 = *(_QWORD*)(v108 + 432);
      v103 = v108;
      if (v102 == 0) {
        v127 = *(_QWORD*)(v108 + 440);
        v103 = v108;
        if (v127 != 0) {
          v128 = *(unsigned __int8*)(v127 + 16);
          v102 = 0;
          v103 = v108;
          if (v128 <= 8) {
            v129 = 24LL * (unsigned int)v128 + 556024;
            while (1) {
              if (v128 <= 2) {
                v102 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v129);
                if (v102 != 0) {
                  break;
                }
              }
              ++v128;
              v129 += 24;
              if (v128 == 9) {
                v102 = 0;
                v103 = v108;
                goto LABEL_174;
              }
            }
            v103 = v108;
          }
        }
      }
    }
  }
  else {
    v107 = 0;
    v106 = 0;
    v105 = 0;
  }
  v130 = *(_QWORD**)(*(_QWORD*)GameData_212d020[0] + 4376LL);
  v131 = *(_QWORD**)(*(_QWORD*)GameData_212d020[0] + 4384LL);
  if (v130 != v131) {
    while (1) {
      if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v130 + 528LL))(*v130) & 1) ==
          0) {
        goto LABEL_253;
      }
      v155 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v130 + 56LL))(*v130);
      v109 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v130 + 64LL))(*v130);
      v156 = *v130;
      v157 = v109;
      if (v106 >= v107) {
        v158 = v105;
        v159 = v106 - v105;
        v160 = 1 - 0x5555555555555555LL * (v159 >> 4);
        if (v160 > 0x555555555555555LL) {
          goto LABEL_509;
        }
        if (0x5555555555555556LL * ((__int64)(v107 - v158) >> 4) > v160) {
          v160 = 0x5555555555555556LL * ((__int64)(v107 - v158) >> 4);
        }
        if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v107 - v158) >> 4) >=
            0x2AAAAAAAAAAAAAALL) {
          v160 = 0x555555555555555LL;
        }
        if (v160 > 0x555555555555555LL) {
          goto LABEL_508;
        }
        v161 = 3 * v160;
        v162 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v160, 16, 0);
        v163 = v162 + v159;
        *(_DWORD*)(v163 + 4) = 1;
        *(_BYTE*)(v163 + 8) = 1;
        *(_BYTE*)v163 = v155;
        *(_BYTE*)(v163 + 1) = v157;
        *(_WORD*)(v163 + 2) = 0;
        *(_QWORD*)(v163 + 16) = 0;
        *(_QWORD*)(v163 + 24) = v156;
        *(_QWORD*)(v163 + 36) = 0;
        *(_BYTE*)(v163 + 32) = v325;
        v105 = v162 + v159 + 48 * (v159 / -48);
        if (v158 != v106) {
          v164 = v158;
          v165 = v105;
          do {
            *(_BYTE*)v165 = *(_BYTE*)v164;
            *(_BYTE*)(v165 + 1) = *(_BYTE*)(v164 + 1);
            *(_BYTE*)(v165 + 2) = *(_BYTE*)(v164 + 2);
            *(_BYTE*)(v165 + 3) = *(_BYTE*)(v164 + 3);
            *(_QWORD*)(v165 + 4) = *(_QWORD*)(v164 + 4);
            v166 = *(_QWORD*)(v164 + 12);
            v167 = *(_QWORD*)(v164 + 20);
            v168 = *(_QWORD*)(v164 + 28);
            v169 = *(_QWORD*)(v164 + 36);
            v164 += 48;
            *(_QWORD*)(v165 + 36) = v169;
            *(_QWORD*)(v165 + 28) = v168;
            *(_QWORD*)(v165 + 20) = v167;
            *(_QWORD*)(v165 + 12) = v166;
            v165 += 48;
          } while (v164 != v106);
        }
        v107 = v162 + 16 * v161;
        v106 = v163 + 48;
        if (v158 != 0) {
          v170 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v170 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v170);
        }
      LABEL_253:
        if (++v130 == v131) {
          break;
        }
      }
      else {
        *(_BYTE*)v106 = v155;
        *(_BYTE*)(v106 + 1) = v109;
        ++v130;
        *(_WORD*)(v106 + 2) = 0;
        *(_QWORD*)(v106 + 16) = 0;
        *(_QWORD*)(v106 + 24) = v156;
        *(_QWORD*)(v106 + 36) = 0;
        *(_DWORD*)(v106 + 4) = 1;
        *(_BYTE*)(v106 + 8) = 1;
        *(_BYTE*)(v106 + 32) = v325;
        v106 += 48LL;
        if (v130 == v131) {
          break;
        }
      }
    }
  }
  v315 = v105;
  if (v106 != v105) {
    v132 = v105;
    v133 = 1;
    v134 = 0;
    v135 = (unsigned __int8*)v105;
    do {
      v136 = (unsigned __int8*)(v105 + 48 * v134);
      v137 = v133 & 3;
      v138 = v134;
      v139 = *v136;
      v140 = v136[1];
      if ((~(_BYTE)v134 & 3) != 0) {
        v141 = 0;
        v142 = v135;
        do {
          v143 = v139 == *v142 && v140 == v142[1];
          if (v143 && *((_DWORD*)v136 + 1) == *((_DWORD*)v142 + 1)) {
            v144 = *((_DWORD*)v136 + 10) + 1;
            ++*((_DWORD*)v136 + 9);
            *((_DWORD*)v136 + 10) = v144;
            ++*((_DWORD*)v142 + 10);
          }
          ++v141;
          v142 -= 48;
        } while (v137 != v141);
        v138 = v134 - v141;
      }
      if (v134 >= 3) {
        v145 = (unsigned __int8*)(v105 - 48 + 48 * v138);
        v146 = v138 + 4;
        do {
          v147 = v139 == v145[48] && v140 == v145[49];
          if (v147 && *((_DWORD*)v136 + 1) == *((_DWORD*)v145 + 13)) {
            v148 = *((_DWORD*)v136 + 10) + 1;
            ++*((_DWORD*)v136 + 9);
            *((_DWORD*)v136 + 10) = v148;
            ++*((_DWORD*)v145 + 22);
          }
          v149 = v139 == *v145 && v140 == v145[1];
          if (v149 && *((_DWORD*)v136 + 1) == *((_DWORD*)v145 + 1)) {
            v150 = *((_DWORD*)v136 + 10) + 1;
            ++*((_DWORD*)v136 + 9);
            *((_DWORD*)v136 + 10) = v150;
            ++*((_DWORD*)v145 + 10);
          }
          v151 = v139 == *(v145 - 48) && v140 == *(v145 - 47);
          if (v151 && *((_DWORD*)v136 + 1) == *((_DWORD*)v145 - 11)) {
            v152 = *((_DWORD*)v136 + 10) + 1;
            ++*((_DWORD*)v136 + 9);
            *((_DWORD*)v136 + 10) = v152;
            ++*((_DWORD*)v145 - 2);
          }
          v153 = v139 == *(v145 - 96) && v140 == *(v145 - 95);
          if (v153 && *((_DWORD*)v136 + 1) == *((_DWORD*)v145 - 23)) {
            v154 = *((_DWORD*)v136 + 10) + 1;
            ++*((_DWORD*)v136 + 9);
            *((_DWORD*)v136 + 10) = v154;
            ++*((_DWORD*)v145 - 14);
          }
          v145 -= 192;
          v146 -= 4;
        } while (v146 > 3);
      }
      ++v134;
      v135 += 48;
      v133 = v137 + 1;
    } while (v134 != 0xAAAAAAAAAAAAAAABLL * ((__int64)(v106 - v105) >> 4));
    v316 = GameData_212f8b0[0] + 2;
    while (1) {
      v172 = *(unsigned __int8*)(v132 + 8);
      if (v172 > 1) {
        if (v172 == 2) {
          v173 = GameData_1a83250;
        }
        else {
          v173 = v172 == 3 ? GameData_1a83240 : GameData_1a83680;
        }
      }
      else {
        v173 = GameData_1a83580;
        if (*(_BYTE*)(v132 + 8) != 0) {
          v173 = GameData_1a83860;
        }
      }
      v174 = *(unsigned __int8*)(v132 + 32);
      *(_OWORD*)v337 = v173;
      if (v174 == 1) {
        v175 = *((_QWORD*)GameData_212c958 + 1);
        v337[0] = *(_QWORD*)GameData_212c958;
        v337[1] = v175;
      }
      game_map_f54910(v368);
      LOBYTE(v391) = 1;
      v392 = 0;
      v393 = 0;
      LOBYTE(v394[0]) = 0;
      BYTE4(v388) = 0;
      v389 = 1;
      v368[0] = game_map_DangerCursorMeshData_vtable;
      v390 = 0x100000000LL;
      *(_QWORD*)((char*)v394 + 4) = 0;
      v176 = *(_QWORD*)(v132 + 8);
      v390 = *(_QWORD*)v132;
      v391 = v176;
      v177 = *(_QWORD*)(v132 + 16);
      v178 = *(_QWORD*)(v132 + 24);
      v179 = *(_QWORD*)(v132 + 32);
      LODWORD(v394[1]) = *(_DWORD*)(v132 + 40);
      v393 = v178;
      v394[0] = v179;
      v392 = v177;
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
        v245 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v245;
        __cxa_guard_release(&GameData_21a6130);
      }
      GameRoutine_f0ea80((void*)((__int64)&v359), 5);
      v180 = vaddq_f32(COERCE_AS(float32x4_t, GameData_21a6120),
                       COERCE_AS(float32x4_t, GameData_1a836d0));
      v326 = vaddq_f32(COERCE_AS(float32x4_t, GameData_21a6120),
                       COERCE_AS(float32x4_t, GameData_1a82a60));
      *(_QWORD*)&v181 = LANES128(v180).n128_u64[0];
      *((_QWORD*)&v181 + 1) = LANES128_OF(vextq_s8(v180, v180, 8u)).n128_u32[0];
      v317 = *((_QWORD*)&v181 + 1);
      v321 = v180;
      *(_OWORD*)v339 = v181;
      MeshData_f555a0(v368, v339, &v359, v337);
      *(_QWORD*)&v182 = LANES128(v326).n128_u64[0];
      *((_QWORD*)&v182 + 1) = v317;
      *(_OWORD*)v339 = v182;
      MeshData_f555a0(v368, v339, &v360, v337);
      v183 = v326;
      LANES128(v183).n128_u64[1] =
          LANES128_OF(vextq_s8(v183, v183, 8u)).n128_u32[0];
      v318 = LANES128(v183).n128_u64[1];
      *(int8x16_t*)v339 = v183;
      MeshData_f555a0(v368, v339, &v361, v337);
      *(_QWORD*)&v184 = LANES128(v321).n128_u64[0];
      *((_QWORD*)&v184 + 1) = v318;
      *(_OWORD*)v339 = v184;
      MeshData_f555a0(v368, v339, &v362, v337);
      if ((v388 & 0x100000000LL) == 0) {
        break;
      }
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 8LL) + 9LL) ==
          1) {
        goto LABEL_291;
      }
    LABEL_292:
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
        v246 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v246;
        __cxa_guard_release(&GameData_21a6130);
      }
      v187 = v375;
      v188 = COERCE_AS(float32x4_t, GameData_21a6120);
      v189 = v376;
      if (v376 != v375) {
        v190 = v375;
        do {
          v191 = v190[1];
          v190 += 4;
          v188 = vaddq_f32(v188, v191);
        } while (v190 != v376);
        v188 = vmulq_n_f32(
            v188,
            0x1.0000000000000p+0f /
                (float)(unsigned __int64)(((char*)v376 - (char*)v375) >> 6));
        LANES128(v188).n128_u32[3] = 0;
      }
      v192 = vsubq_f32(v188, v382);
      v193 = vmulq_f32(v192, v192);
      LANES128(v193).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v193, v193, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v193).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v193).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v193).n128_u64[0])))
                  .n64_f32[0] > 0.0f &&
          v376 != v375) {
        do {
          v187[1] = vsubq_f32(v187[1], v192);
          v187 += 4;
        } while (v187 != v189);
      }
      LANES128(v195).n128_u64[0] = LANES128(v188).n128_u64[0];
      LANES128(v195).n128_u64[1] = LANES128(v188).n128_u32[2];
      v382 = v195;
      v196 = (*(__int64 (**)(_QWORD*))(v368[0] + 32LL))(v368);
      v197 = a1 + 96;
      v198 = v196;
      v199 = *v323;
      v200 = (__int64*)(a1 + 96);
      if (*v323 != 0) {
        v201 = (_QWORD*)*v323;
        do {
          v202 = v201[4];
          if (v196 >= v202) {
            if (v202 >= v196) {
              while (1) {
                while (1) {
                  v203 = *(_QWORD*)(v199 + 32);
                  if (v196 >= v203) {
                    break;
                  }
                  v199 = *(_QWORD*)v199;
                  if (v199 == 0) {
                    goto LABEL_507;
                  }
                }
                if (v203 >= v196) {
                  break;
                }
                v199 = *(_QWORD*)(v199 + 8);
                if (v199 == 0) {
                  goto LABEL_507;
                }
              }
              v229 = 0;
              goto LABEL_335;
            }
            ++v201;
          }
          v201 = (_QWORD*)*v201;
        } while (v201 != nullptr);
        while (1) {
          while (1) {
            v204 = *(_QWORD*)(v199 + 32);
            v197 = v199;
            if (v196 >= v204) {
              break;
            }
            v199 = *(_QWORD*)v199;
            v200 = (__int64*)v197;
            if (*(_QWORD*)v197 == 0) {
              goto LABEL_319;
            }
          }
          if (v204 >= v196) {
            break;
          }
          v199 = *(_QWORD*)(v199 + 8);
          if (v199 == 0) {
            v200 = (__int64*)(v197 + 8);
            goto LABEL_319;
          }
        }
      }
      else {
      LABEL_319:
        v205 = v197;
        v197 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 352, 16, 0);
        *(_QWORD*)(v197 + 32) = v198;
        game_map_f54910(v197 + 48);
        *(_BYTE*)(v197 + 304) = 1;
        *(_QWORD*)(v197 + 312) = 0;
        *(_QWORD*)(v197 + 320) = 0;
        v206 = v197;
        *(_BYTE*)(v197 + 328) = 0;
        *(_BYTE*)(v197 + 284) = 0;
        *(_DWORD*)(v197 + 288) = 1;
        *(_QWORD*)v197 = 0;
        *(_QWORD*)(v197 + 8) = 0;
        *(_QWORD*)(v197 + 16) = v205;
        *(_QWORD*)(v197 + 48) = game_map_DangerCursorMeshData_vtable;
        *(_QWORD*)(v197 + 296) = 0x100000000LL;
        *(_QWORD*)(v197 + 332) = 0;
        *v200 = v197;
        v207 = **(_QWORD**)(a1 + 88);
        if (v207 != 0) {
          *(_QWORD*)(a1 + 88) = v207;
          v206 = *v200;
        }
        fw_containers_BalanceAfterInsert(*(_QWORD*)(a1 + 96), v206);
        ++*(_QWORD*)(a1 + 104);
      }
      *(_QWORD*)(v197 + 56) = v368[1];
      v208 = v370;
      *(_OWORD*)(v197 + 64) = v369;
      *(_OWORD*)(v197 + 80) = v208;
      v209 = v371;
      v210 = v372;
      v211 = v374;
      *(_QWORD*)(v197 + 128) = v373;
      *(_QWORD*)(v197 + 136) = v211;
      *(_OWORD*)(v197 + 96) = v209;
      *(_OWORD*)(v197 + 112) = v210;
      if ((_QWORD*)(v197 + 48) != v368) {
        GameRoutine_f155c0(v197 + 144);
        CharacterController_d42d20(v197 + 168, v377, v378, (v378 - v377) >> 4);
      }
      v212 = v381;
      v199 = a1 + 96;
      v213 = v379;
      *(_QWORD*)(v197 + 208) = v380;
      *(_QWORD*)(v197 + 216) = v212;
      *(_QWORD*)(v197 + 192) = v213;
      v214 = *(_OWORD*)(v197 + 192);
      *((_QWORD*)&v214 + 1) = DWORD2(v213);
      DWORD2(v213) = LANES128(v382).n128_u32[2];
      *(_QWORD*)(v197 + 224) = LANES128(v382).n128_u64[0];
      *(_OWORD*)(v197 + 192) = v214;
      v215 = *(_OWORD*)(v197 + 224);
      v216 = v384;
      *((_QWORD*)&v215 + 1) = DWORD2(v213);
      *(_QWORD*)(v197 + 240) = v383;
      *(_QWORD*)(v197 + 248) = v216;
      v217 = v386;
      *(_QWORD*)(v197 + 256) = v385;
      *(_QWORD*)(v197 + 264) = v217;
      *(_OWORD*)(v197 + 224) = v215;
      *(_DWORD*)(v197 + 288) = v389;
      v218 = v388;
      *(_QWORD*)(v197 + 272) = v387;
      *(_QWORD*)(v197 + 280) = v218;
      v219 = v391;
      v220 = v394[0];
      LODWORD(v218) = v394[1];
      *(_QWORD*)(v197 + 296) = v390;
      *(_QWORD*)(v197 + 304) = v219;
      v221 = v392;
      v222 = v393;
      *(_DWORD*)(v197 + 336) = v218;
      *(_QWORD*)(v197 + 320) = v222;
      *(_QWORD*)(v197 + 328) = v220;
      *(_QWORD*)(v197 + 312) = v221;
      while (1) {
        v223 = *(_QWORD*)v199;
        v224 = (__int64*)v199;
        if (*(_QWORD*)v199 == 0) {
          break;
        }
        while (1) {
          v199 = v223;
          v225 = *(_QWORD*)(v223 + 32);
          if (v198 < v225) {
            break;
          }
          if (v225 >= v198) {
            goto LABEL_333;
          }
          v223 = *(_QWORD*)(v199 + 8);
          if (v223 == 0) {
            v224 = (__int64*)(v199 + 8);
            goto LABEL_330;
          }
        }
      }
    LABEL_330:
      v226 = v199;
      v199 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 352, 16, 0);
      *(_QWORD*)(v199 + 32) = v198;
      game_map_f54910(v199 + 48);
      *(_BYTE*)(v199 + 304) = 1;
      *(_QWORD*)(v199 + 312) = 0;
      *(_QWORD*)(v199 + 320) = 0;
      v227 = v199;
      *(_BYTE*)(v199 + 328) = 0;
      *(_BYTE*)(v199 + 284) = 0;
      *(_DWORD*)(v199 + 288) = 1;
      *(_QWORD*)v199 = 0;
      *(_QWORD*)(v199 + 8) = 0;
      *(_QWORD*)(v199 + 16) = v226;
      *(_QWORD*)(v199 + 48) = game_map_DangerCursorMeshData_vtable;
      *(_QWORD*)(v199 + 296) = 0x100000000LL;
      *(_QWORD*)(v199 + 332) = 0;
      *v224 = v199;
      v228 = **(_QWORD**)(a1 + 88);
      if (v228 != 0) {
        *(_QWORD*)(a1 + 88) = v228;
        v227 = *v224;
      }
      fw_containers_BalanceAfterInsert(*(_QWORD*)(a1 + 96), v227);
      ++*(_QWORD*)(a1 + 104);
    LABEL_333:
      v229 = 1;
    LABEL_335:
      v230 = *(_QWORD*)(v199 + 48);
      *(_BYTE*)(v199 + 272) = 1;
      if (((*(__int64 (**)(void*))(v230 + 48))((void*)(v199 + 48)) & 1) != 0) {
        *(_DWORD*)(v199 + 280) = 1036831949;
        if ((v229 & 1) != 0) {
          goto LABEL_351;
        }
      }
      else {
        *(_DWORD*)(v199 + 276) = 1065353216;
        *(_DWORD*)(v199 + 280) = 0;
        if ((v229 & 1) != 0) {
          goto LABEL_351;
        }
      }
      v231 = DangerCursorMeshData_Unknown4(v368);
      v232 = *v323;
      if (*v323 == 0) {
        goto LABEL_351;
      }
      v233 = (_QWORD*)*v323;
      while (1) {
        v234 = v233[4];
        if (v231 >= v234) {
          break;
        }
      LABEL_341:
        v233 = (_QWORD*)*v233;
        if (v233 == nullptr) {
          goto LABEL_351;
        }
      }
      if (v234 < v231) {
        ++v233;
        goto LABEL_341;
      }
      while (1) {
        while (1) {
          v235 = *(_QWORD*)(v232 + 32);
          if (v231 >= v235) {
            break;
          }
          v232 = *(_QWORD*)v232;
          if (v232 == 0) {
            goto LABEL_507;
          }
        }
        if (v235 >= v231) {
          break;
        }
        v232 = *(_QWORD*)(v232 + 8);
        if (v232 == 0) {
          goto LABEL_507;
        }
      }
      v236 = *(_QWORD*)(v132 + 8);
      *(_QWORD*)(v232 + 296) = *(_QWORD*)v132;
      *(_QWORD*)(v232 + 304) = v236;
      v237 = *(_QWORD*)(v132 + 16);
      v238 = *(_QWORD*)(v132 + 24);
      v239 = *(_QWORD*)(v132 + 32);
      *(_DWORD*)(v232 + 336) = *(_DWORD*)(v132 + 40);
      *(_QWORD*)(v232 + 320) = v238;
      *(_QWORD*)(v232 + 328) = v239;
      *(_QWORD*)(v232 + 312) = v237;
    LABEL_351:
      v368[0] = v316;
      if (v377 != 0) {
        v378 = v377;
        v240 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v240 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v240);
      }
      v241 = v375;
      if (v375 != nullptr) {
        if (v375 == v376) {
          goto LABEL_272;
        }
        v242 = v376 - 4;
        v243 = v376 - 4;
        do {
          v244 = (void (**)(float32x4_t*))LANES128(*(v243)).n128_u64[0];
          v243 -= 4;
          (*v244)(v242);
          v143 = v242 == v241;
          v242 = v243;
        } while (!v143);
        v376 = v241;
        if (v375 != nullptr) {
        LABEL_272:
          v171 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v171 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v171);
        }
      }
      v132 += 48;
      if (v132 == v106) {
        goto LABEL_366;
      }
    }
    if (v389 != 2) {
      goto LABEL_292;
    }
  LABEL_291:
    LANES128(v185).n128_u64[0] = 0x3F0000003F000000LL;
    LANES128(v185).n128_u64[1] = 0x3F0000003F000000LL;
    v186 = vmulq_f32(vaddq_f32(v321, v326), v185);
    LANES128(v186).n128_u32[3] = 0;
    *(float32x4_t*)v339 = v186;
    MeshData_f555a0(v368, v339, &v363, v337);
    goto LABEL_292;
  }
LABEL_366:
  if (v315 != 0) {
    v247 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v247 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v247);
  }
LABEL_370:
  if (*(_QWORD*)(a1 + 80) != 0) {
    v248 = *(float*)(a1 + 136);
  }
  else {
    v248 = 0.0f;
    *(_DWORD*)(a1 + 136) = 0;
  }
  v249 = game_script_hub_g_frame_counter_ptr[0];
  v250 = *(float**)(a1 + 16);
  *(float*)(a1 + 136) =
      v248 +
      (float)((float)(*(float*)(*(_QWORD*)
                                    game_script_hub_g_frame_counter_ptr[0] +
                                160LL) *
                      0x1.0aef000000000p+4f) /
              0x1.f400000000000p+9f);
  if (v250 != (float*)(a1 + 24)) {
    do {
      v252 = v250[70];
      v253 =
          (float)(*(float*)(*(_QWORD*)v249 + 160LL) * 0x1.0aef000000000p+4f) /
          0x1.f400000000000p+9f;
      if (v252 <= 0.0f) {
        if (*((_BYTE*)v250 + 272) != 0) {
          v256 = 0x1.0000000000000p+0f;
        }
        else {
          v256 = 0.0f;
        }
      }
      else {
        v254 = v253 / v252;
        v255 = v250[69];
        if (*((_BYTE*)v250 + 272) != 0) {
          v256 = fminf(fmaxf(v254 + v255, 0x1.51eb860000000p-2f),
                       0x1.0000000000000p+0f);
        }
        else {
          v256 = fminf(fmaxf(v255 - v254, 0.0f), 0x1.570a3c0000000p-1f);
        }
      }
      v250[69] = v256;
      v257 = *((_QWORD*)v250 + 6);
      v250[60] = v253 + v250[60];
      (*(void (**)(_QWORD*))(v257 + 40))((_QWORD*)v250 + 6);
      GameRoutine_f54fe0(v250 + 12);
      if (((_BYTE)v250[68] & 1) != 0 || v250[69] > 0.0f) {
        v258 = *((float**)v250 + 1);
        if (v258 != nullptr) {
          do {
            v251 = v258;
            v258 = *(float**)v258;
          } while (v258 != nullptr);
        }
        else {
          do {
            v251 = *((float**)v250 + 2);
            v143 = v250 == *(float**)v251;
            v250 = v251;
          } while (!v143);
        }
      }
      else {
        v251 = (float*)MapPanelDanger_f15340_alt1(a1 + 16, v250);
      }
      v250 = v251;
    } while (v251 != (float*)(a1 + 24));
  }
  v259 = *(float**)(a1 + 40);
  if (v259 != (float*)(a1 + 48)) {
    do {
      v261 = v259[70];
      v262 =
          (float)(*(float*)(*(_QWORD*)v249 + 160LL) * 0x1.0aef000000000p+4f) /
          0x1.f400000000000p+9f;
      if (v261 <= 0.0f) {
        if (*((_BYTE*)v259 + 272) != 0) {
          v265 = 0x1.0000000000000p+0f;
        }
        else {
          v265 = 0.0f;
        }
      }
      else {
        v263 = v262 / v261;
        v264 = v259[69];
        if (*((_BYTE*)v259 + 272) != 0) {
          v265 = fminf(fmaxf(v263 + v264, 0x1.51eb860000000p-2f),
                       0x1.0000000000000p+0f);
        }
        else {
          v265 = fminf(fmaxf(v264 - v263, 0.0f), 0x1.570a3c0000000p-1f);
        }
      }
      v259[69] = v265;
      v266 = *((_QWORD*)v259 + 6);
      v259[60] = v262 + v259[60];
      (*(void (**)(_QWORD*))(v266 + 40))((_QWORD*)v259 + 6);
      GameRoutine_f54fe0(v259 + 12);
      if (((_BYTE)v259[68] & 1) != 0 || v259[69] > 0.0f) {
        v267 = *((float**)v259 + 1);
        if (v267 != nullptr) {
          do {
            v260 = v267;
            v267 = *(float**)v267;
          } while (v267 != nullptr);
        }
        else {
          do {
            v260 = *((float**)v259 + 2);
            v143 = v259 == *(float**)v260;
            v259 = v260;
          } while (!v143);
        }
      }
      else {
        v260 = (float*)MapPanelDanger_f15340_alt1(a1 + 40, v259);
      }
      v259 = v260;
    } while (v260 != (float*)(a1 + 48));
  }
  v268 = *(float**)(a1 + 64);
  if (v268 != (float*)(a1 + 72)) {
    v269 = GameData_212f8b0[0] + 2;
    do {
      v272 = v268[70];
      v273 =
          (float)(*(float*)(*(_QWORD*)v249 + 160LL) * 0x1.0aef000000000p+4f) /
          0x1.f400000000000p+9f;
      if (v272 <= 0.0f) {
        if (*((_BYTE*)v268 + 272) != 0) {
          v276 = 0x1.0000000000000p+0f;
        }
        else {
          v276 = 0.0f;
        }
      }
      else {
        v274 = v273 / v272;
        v275 = v268[69];
        if (*((_BYTE*)v268 + 272) != 0) {
          v276 = fminf(fmaxf(v274 + v275, 0x1.51eb860000000p-2f),
                       0x1.0000000000000p+0f);
        }
        else {
          v276 = fminf(fmaxf(v275 - v274, 0.0f), 0x1.570a3c0000000p-1f);
        }
      }
      v268[69] = v276;
      v277 = *((_QWORD*)v268 + 6);
      v268[60] = v273 + v268[60];
      (*(void (**)(_QWORD*))(v277 + 40))((_QWORD*)v268 + 6);
      GameRoutine_f54fe0(v268 + 12);
      v278 = *((float**)v268 + 1);
      if (((_BYTE)v268[68] & 1) != 0 || v268[69] > 0.0f) {
        if (v278 != nullptr) {
          do {
            v280 = v278;
            v278 = *(float**)v278;
          } while (v278 != nullptr);
        }
        else {
          do {
            v280 = *((float**)v268 + 2);
            v143 = v268 == *(float**)v280;
            v268 = v280;
          } while (!v143);
        }
      }
      else {
        v279 = v268;
        if (v278 != nullptr) {
          do {
            v280 = v278;
            v278 = *(float**)v278;
          } while (v278 != nullptr);
        }
        else {
          do {
            v280 = *((float**)v279 + 2);
            v143 = v279 == *(float**)v280;
            v279 = v280;
          } while (!v143);
        }
        if (*(float**)(a1 + 64) == v268) {
          *(_QWORD*)(a1 + 64) = v280;
        }
        v281 = *(_QWORD*)(a1 + 72);
        --*(_QWORD*)(a1 + 80);
        GameRoutine_64dfe0(v281, v268);
        v282 = *((_QWORD*)v268 + 21);
        *((_QWORD*)v268 + 6) = v269;
        if (v282 != 0) {
          *((_QWORD*)v268 + 22) = v282;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v283 = 128;
          }
          else {
            v283 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v283);
        }
        v284 = *((void (****)(_QWORD))v268 + 18);
        if (v284 != nullptr) {
          v285 = *((void (****)(_QWORD))v268 + 19);
          if (v284 == v285) {
            goto LABEL_413;
          }
          v286 = v285 - 8;
          v287 = v269;
          v288 = v285 - 8;
          do {
            v289 = *v288;
            v288 -= 8;
            (*v289)(v286);
            v143 = v286 == v284;
            v286 = v288;
          } while (!v143);
          v290 = *((_QWORD*)v268 + 18);
          v269 = v287;
          *((_QWORD*)v268 + 19) = v284;
          if (v290 != 0) {
          LABEL_413:
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v270 = 128;
            }
            else {
              v270 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v270);
          }
        }
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
          v271 = 128;
        }
        else {
          v271 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v271);
      }
      v268 = v280;
    } while (v280 != (float*)(a1 + 72));
  }
  v291 = *(float**)(a1 + 88);
  v292 = (float*)(a1 + 96);
  if (v291 != (float*)v323) {
    v293 = GameData_212f8b0[0] + 2;
    do {
      v296 = v291[70];
      v297 =
          (float)(*(float*)(*(_QWORD*)v249 + 160LL) * 0x1.0aef000000000p+4f) /
          0x1.f400000000000p+9f;
      if (v296 <= 0.0f) {
        if (*((_BYTE*)v291 + 272) != 0) {
          v300 = 0x1.0000000000000p+0f;
        }
        else {
          v300 = 0.0f;
        }
      }
      else {
        v298 = v297 / v296;
        v299 = v291[69];
        if (*((_BYTE*)v291 + 272) != 0) {
          v300 = fminf(fmaxf(v298 + v299, 0x1.51eb860000000p-2f),
                       0x1.0000000000000p+0f);
        }
        else {
          v300 = fminf(fmaxf(v299 - v298, 0.0f), 0x1.570a3c0000000p-1f);
        }
      }
      v291[69] = v300;
      v301 = *((_QWORD*)v291 + 6);
      v291[60] = v297 + v291[60];
      (*(void (**)(_QWORD*))(v301 + 40))((_QWORD*)v291 + 6);
      GameRoutine_f54fe0(v291 + 12);
      v302 = *((float**)v291 + 1);
      if (((_BYTE)v291[68] & 1) != 0 || v291[69] > 0.0f) {
        if (v302 != nullptr) {
          do {
            v304 = v302;
            v302 = *(float**)v302;
          } while (v302 != nullptr);
        }
        else {
          do {
            v304 = *((float**)v291 + 2);
            v143 = v291 == *(float**)v304;
            v291 = v304;
          } while (!v143);
        }
      }
      else {
        v303 = v291;
        if (v302 != nullptr) {
          do {
            v304 = v302;
            v302 = *(float**)v302;
          } while (v302 != nullptr);
        }
        else {
          do {
            v304 = *((float**)v303 + 2);
            v143 = v303 == *(float**)v304;
            v303 = v304;
          } while (!v143);
        }
        if (*(float**)(a1 + 88) == v291) {
          *(_QWORD*)(a1 + 88) = v304;
        }
        v305 = *(_QWORD*)(a1 + 96);
        --*(_QWORD*)(a1 + 104);
        GameRoutine_64dfe0(v305, v291);
        v306 = *((_QWORD*)v291 + 21);
        *((_QWORD*)v291 + 6) = v293;
        if (v306 != 0) {
          *((_QWORD*)v291 + 22) = v306;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v307 = 128;
          }
          else {
            v307 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v307);
        }
        v308 = *((void (****)(_QWORD))v291 + 18);
        if (v308 != nullptr) {
          v309 = *((void (****)(_QWORD))v291 + 19);
          if (v308 == v309) {
            goto LABEL_458;
          }
          v310 = v309 - 8;
          v311 = v309 - 8;
          do {
            v312 = *v311;
            v311 -= 8;
            (*v312)(v310);
            v143 = v310 == v308;
            v310 = v311;
          } while (!v143);
          v313 = *((_QWORD*)v291 + 18);
          v292 = (float*)(a1 + 96);
          *((_QWORD*)v291 + 19) = v308;
          if (v313 != 0) {
          LABEL_458:
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v294 = 128;
            }
            else {
              v294 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v294);
          }
        }
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
          v295 = 128;
        }
        else {
          v295 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v295);
      }
      v291 = v304;
    } while (v304 != v292);
  }
}

__int64 MapPanelDanger_f14660(__int64** a1, __int64 a2)
{
  unsigned __int64 v4;
  __int64 v5;
  __int64** v6;
  unsigned __int64 v7;
  __int64* v8;
  __int64** v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64* v17;
  __int128 v18;
  __int128 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64* v28;
  __int64 v29;
  __int64 result;
  int v31;

  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 32LL))(a2);
  v6 = a1 + 1;
  v5 = (__int64)a1[1];
  v7 = v4;
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = a1 + 1;
  v10 = (__int64)(a1 + 1);
  if (v5 != 0) {
    v11 = a1[1];
    while (1) {
      v12 = v11[4];
      if (v4 >= v12) {
        if (v12 >= v4) {
          while (1) {
            while (1) {
              v13 = *(_QWORD*)(v5 + 32);
              if (v4 >= v13) {
                break;
              }
              v5 = *(_QWORD*)v5;
              if (v5 == 0) {
                goto LABEL_11;
              }
            }
            if (v13 >= v4) {
              goto LABEL_32;
            }
            v5 = *(_QWORD*)(v5 + 8);
            if (v5 == 0) {
            LABEL_11:
              String_60a250_alt1("map::at:  key not found");
            }
          }
        }
        ++v11;
      }
      v11 = (__int64*)*v11;
      if (v11 == nullptr) {
        while (1) {
          while (1) {
            v14 = *(_QWORD*)(v5 + 32);
            v10 = v5;
            if (v4 >= v14) {
              break;
            }
            v5 = *(_QWORD*)v5;
            v9 = (__int64**)v10;
            if (*(_QWORD*)v10 == 0) {
              goto LABEL_17;
            }
          }
          if (v14 >= v4) {
            goto LABEL_20;
          }
          v5 = *(_QWORD*)(v5 + 8);
          if (v5 == 0) {
            v9 = (__int64**)(v10 + 8);
            goto LABEL_17;
          }
        }
      }
    }
  }
LABEL_17:
  v15 = v10;
  v10 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 304, 16, 0);
  *(_QWORD*)(v10 + 32) = v7;
  game_map_f54910_alt1(v10 + 48);
  *(_QWORD*)(v10 + 48) = game_map_DangerMeshData_vtable;
  *(_QWORD*)v10 = 0;
  *(_QWORD*)(v10 + 8) = 0;
  v16 = (__int64*)v10;
  *(_QWORD*)(v10 + 16) = v15;
  *v9 = (__int64*)v10;
  v17 = (__int64*)**a1;
  if (v17 != nullptr) {
    *a1 = v17;
    v16 = *v9;
  }
  fw_containers_BalanceAfterInsert_alt1(a1[1], v16);
  a1[2] = (__int64*)((char*)a1[2] + 1);
LABEL_20:
  *(_DWORD*)(v10 + 56) = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(v10 + 60) = *(_DWORD*)(a2 + 12);
  *(_OWORD*)(v10 + 64) = *(_OWORD*)(a2 + 16);
  *(_OWORD*)(v10 + 80) = *(_OWORD*)(a2 + 32);
  *(_OWORD*)(v10 + 96) = *(_OWORD*)(a2 + 48);
  *(_OWORD*)(v10 + 112) = *(_OWORD*)(a2 + 64);
  *(_QWORD*)(v10 + 136) = *(_QWORD*)(a2 + 88);
  *(_QWORD*)(v10 + 128) = *(_QWORD*)(a2 + 80);
  if (v10 + 48 != a2) {
    GameRoutine_f155c0_alt1(
        (char**)(v10 + 144), *(char**)(a2 + 96), *(char**)(a2 + 104),
        (__int64)(*(_QWORD*)(a2 + 104) - *(_QWORD*)(a2 + 96)) >> 6);
    CharacterController_d42d20_alt1(
        v10 + 168, *(char**)(a2 + 120), *(char**)(a2 + 128),
        (__int64)(*(_QWORD*)(a2 + 128) - *(_QWORD*)(a2 + 120)) >> 4);
  }
  v5 = (__int64)(a1 + 1);
  *(_DWORD*)(v10 + 192) = *(_DWORD*)(a2 + 144);
  *(_DWORD*)(v10 + 196) = *(_DWORD*)(a2 + 148);
  v18 = *(_OWORD*)(v10 + 192);
  *((_QWORD*)&v18 + 1) = *(unsigned int*)(a2 + 152);
  *(_OWORD*)(v10 + 192) = v18;
  *(_QWORD*)(v10 + 216) = *(_QWORD*)(a2 + 168);
  *(_QWORD*)(v10 + 208) = *(_QWORD*)(a2 + 160);
  *(_DWORD*)(v10 + 224) = *(_DWORD*)(a2 + 176);
  *(_DWORD*)(v10 + 228) = *(_DWORD*)(a2 + 180);
  v19 = *(_OWORD*)(v10 + 224);
  *((_QWORD*)&v19 + 1) = *(unsigned int*)(a2 + 184);
  *(_OWORD*)(v10 + 224) = v19;
  v20 = *(_QWORD*)(a2 + 232);
  v21 = *(_DWORD*)(a2 + 240);
  *(_QWORD*)(v10 + 264) = *(_QWORD*)(a2 + 216);
  *(_QWORD*)(v10 + 280) = v20;
  *(_QWORD*)(v10 + 248) = *(_QWORD*)(a2 + 200);
  v22 = *(_QWORD*)(a2 + 192);
  *(_QWORD*)(v10 + 256) = *(_QWORD*)(a2 + 208);
  *(_QWORD*)(v10 + 240) = v22;
  v23 = *(_QWORD*)(a2 + 224);
  *(_DWORD*)(v10 + 288) = v21;
  *(_QWORD*)(v10 + 272) = v23;
  v24 = *v6;
  if (*v6 != nullptr) {
    while (1) {
      while (1) {
        v5 = (__int64)v24;
        v25 = v24[4];
        if (v7 >= v25) {
          break;
        }
        v24 = *(__int64**)v5;
        v6 = (__int64**)v5;
        if (*(_QWORD*)v5 == 0) {
          goto LABEL_29;
        }
      }
      if (v25 >= v7) {
        break;
      }
      v24 = *(__int64**)(v5 + 8);
      if (v24 == nullptr) {
        v6 = (__int64**)(v5 + 8);
        goto LABEL_29;
      }
    }
  }
  else {
  LABEL_29:
    v26 = v5;
    v5 = fw_memory_HeapManager_Allocate_alt1(*v8, 304, 16, 0);
    *(_QWORD*)(v5 + 32) = v7;
    game_map_f54910_alt1(v5 + 48);
    *(_QWORD*)(v5 + 48) = game_map_DangerMeshData_vtable;
    *(_QWORD*)v5 = 0;
    *(_QWORD*)(v5 + 8) = 0;
    v27 = (__int64*)v5;
    *(_QWORD*)(v5 + 16) = v26;
    *v6 = (__int64*)v5;
    v28 = (__int64*)**a1;
    if (v28 != nullptr) {
      *a1 = v28;
      v27 = *v6;
    }
    fw_containers_BalanceAfterInsert_alt1(a1[1], v27);
    a1[2] = (__int64*)((char*)a1[2] + 1);
  }
LABEL_32:
  v29 = *(_QWORD*)(v5 + 48);
  *(_BYTE*)(v5 + 272) = 1;
  result = (*(__int64 (**)(__int64))(v29 + 48))((__int64)(v5 + 48));
  if ((result & 1) != 0) {
    v31 = 1036831949;
  }
  else {
    v31 = 0;
    *(_DWORD*)(v5 + 276) = 1065353216;
  }
  *(_DWORD*)(v5 + 280) = v31;
  return result;
}

__int64 MapPanelDanger_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;

  v1 = a1[14];
  *a1 = game_map_MapPanelDanger_vtable;
  if (v1 != 0) {
    a1[15] = v1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                  v1);
  }
  GameRoutine_f14f80(a1[12]);
  GameRoutine_f150c0(a1[9]);
  GameRoutine_f15200(a1[6]);
  return GameRoutine_f15200(a1[3]);
}

__int64 MapPanelDanger_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = a1[14];
  *a1 = game_map_MapPanelDanger_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[15] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  GameRoutine_f14f80(a1[12]);
  GameRoutine_f150c0(a1[9]);
  GameRoutine_f15200(a1[6]);
  GameRoutine_f15200(a1[3]);
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6, a1);
}

_QWORD* MapPanelDanger_f15340(_QWORD* a1, _QWORD* a2)
{
  _QWORD* v2;
  _QWORD* v4;
  _QWORD* v5;
  bool v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  void (***v12)(_QWORD);
  void (***v13)(_QWORD);
  void (***v14)(_QWORD);
  void (***v15)(_QWORD);
  void (**v16)(_QWORD);
  void (***v17)(_QWORD);
  __int64 v18;
  __int64 v19;

  v2 = (_QWORD*)a2[1];
  if (v2 != nullptr) {
    do {
      v4 = v2;
      v2 = (_QWORD*)*v2;
    } while (v2 != nullptr);
  }
  else {
    v5 = a2;
    do {
      v4 = (_QWORD*)v5[2];
      v6 = v5 == (_QWORD*)*v4;
      v5 = v4;
    } while (!v6);
  }
  if ((_QWORD*)*a1 == a2) {
    *a1 = v4;
  }
  v7 = a1[1];
  --a1[2];
  GameRoutine_64dfe0(v7, a2);
  v8 = a2[21];
  a2[6] = GameData_212f8b0[0] + 2;
  v9 = fw_memory_g_heap_manager_ptr;
  if (v8 != 0) {
    v10 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a2[22] = v8;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(v10 + v11, v8);
  }
  v12 = (void (***)(_QWORD))a2[18];
  if (v12 != nullptr) {
    v13 = (void (***)(_QWORD))a2[19];
    if (v12 == v13) {
      goto LABEL_19;
    }
    v14 = v13 - 8;
    v15 = v13 - 8;
    do {
      v16 = *v15;
      v15 -= 8;
      (*v16)(v14);
      v6 = v14 == v12;
      v14 = v15;
    } while (!v6);
    v17 = (void (***)(_QWORD))a2[18];
    a2[19] = v12;
    v12 = v17;
    if (v17 != nullptr) {
    LABEL_19:
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v18, v12);
    }
  }
  v19 = 128;
  if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
    v19 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v19, a2);
  return v4;
}

bool game_map_MapPanelDanger_UpdateMeshDanger_lambda0_Invoke(__int64 a1,
                                                             _DWORD* a2,
                                                             _DWORD* a3)
{
  __int64 v3;

  LODWORD(v3) = *a2 + 32 * *a3;
  if ((unsigned int)v3 >= 0x400) {
    v3 = 0;
  }
  else {
    v3 = (unsigned int)v3;
  }
  return *(unsigned __int8*)(*(_QWORD*)(*GameData_212ce98[0] + 152) + v3 + 8) >
         1u;
}

__int64 game_map_MapPanelDanger_UpdateMeshDanger_lambda1_Invoke(__int64 a1,
                                                                _DWORD* a2,
                                                                _DWORD* a3)
{
  __int64 v3;

  LODWORD(v3) = *a2 + 32 * *a3;
  if ((unsigned int)v3 >= 0x400) {
    v3 = 0;
  }
  else {
    v3 = (unsigned int)v3;
  }
  return *(_BYTE*)(*GameData_212ce90[0] + 21) &
         (*(_BYTE*)(*(_QWORD*)(*GameData_212ce98[0] + 152) + v3 + 8) != 0);
}

#pragma GCC visibility pop
