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
__attribute__((swiftcall)) void
GameRoutine_f0ea80_alt1(PSEUDO_X8, int) __asm__("GameRoutine_f0ea80");
__int64* GameRoutine_64dfe0_alt1(__int64* result,
                                 __int64*) __asm__("GameRoutine_64dfe0");
__int64*
GameRoutine_f155c0_alt2(__int64* result, char*, char*,
                        unsigned __int64) __asm__("GameRoutine_f155c0");
__int64 GameHr_fcabb0(long double, __int64, __int64, int, char, char, __int64,
                      __int64);
__int64 GameHr_fcacb0(__int64, __int64, __int64, __int64, __int64, __int16);
__int64 MapDrawConst_fcbcc0_alt1(__int64, int, unsigned __int8, unsigned __int8,
                                 __int64, char) __asm__("MapDrawConst_fcbcc0");
__int64 game_UnitPool_GetFirst_alt1(int*) __asm__("game_UnitPool_GetFirst");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
float32x4_t*
GameRoutine_f54fe0_alt1(float32x4_t* result) __asm__("GameRoutine_f54fe0");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
long double game_map_f54d00_alt1(__int64) __asm__("game_map_f54d00");
unsigned __int64 DangerCursorMeshData_Unknown4_alt1(__int64) __asm__(
    "DangerCursorMeshData_Unknown4");
void MeshData_f555a0_alt1(float32x4_t*, float32x4_t*, unsigned __int64*,
                          unsigned __int64*) __asm__("MeshData_f555a0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_f14f60_alt1() __asm__("GameRoutine_f14f60");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

void game_map_MapPanelDanger_UpdateMeshDanger(__int64 a1)
{

#pragma clang fp contract(off)
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64* v5;
  __int64* v6;
  __int64 v8;
  __int64 v9;
  char v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  unsigned int v14;
  unsigned int v15;
  __int64 v16;
  unsigned int v17;
  __int16 v18;
  __int64 v19;
  __int16 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  _QWORD* v24;
  _QWORD* v25;
  __int64 v26;
  int v27;
  _QWORD* v28;
  _QWORD* v29;
  __int64 v30;
  int v31;
  __int64* v32;
  __int64* v33;
  char* v34;
  char* v35;
  __int64 v36;
  __int64 v37;
  int v38;
  int v39;
  int v40;
  __int64 v41;
  long double v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64** v46;
  __int64 v47;
  _QWORD* v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64* v53;
  __int64 v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  __int64 v58;
  __int64 v59;
  __int128 v60;
  __int128 v61;
  __int128 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64** v66;
  __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64* v70;
  __int64 v71;
  __int64 v72;
  char v73;
  __int64 v74;
  char* v75;
  char* v76;
  char* v77;
  void (**v78)(char*);
  __int64 v79;
  __int64 v80;
  __int64 v81;
  void (***v82)(_QWORD);
  void (***v83)(_QWORD);
  void (**v84)(_QWORD);
  __int64 v85;
  __int64 v86;
  char* v87;
  char* v88;
  char* v89;
  void (**v90)(char*);
  __int64 v91;
  _QWORD* v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  int v98;
  _QWORD* v99;
  _QWORD* v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  unsigned __int64 v106;
  __int64 v107;
  unsigned __int64 v108;
  unsigned __int64 v109;
  __int64 v110;
  __int64 v111;
  char v112;
  char v113;
  int v114;
  signed __int64 v115;
  unsigned __int64 v116;
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
  __int64 v128;
  unsigned __int64 v129;
  __int64 v130;
  _QWORD* v131;
  _QWORD* v132;
  __int64 v133;
  char v134;
  unsigned __int64 v135;
  unsigned __int8* v136;
  unsigned __int8* v137;
  __int64 v138;
  unsigned __int64 v139;
  int v140;
  int v141;
  __int64 v142;
  unsigned __int8* v143;
  bool v144;
  int v145;
  unsigned __int8* v146;
  __int64 v147;
  bool v148;
  int v149;
  bool v150;
  int v151;
  bool v152;
  int v153;
  bool v154;
  int v155;
  char v156;
  char v157;
  __int64 v158;
  char v159;
  __int64 v160;
  __int64 v161;
  unsigned __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  unsigned int v174;
  __int128 v175;
  int v176;
  unsigned __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  int8x16_t v182;
  float32x4_t v183;
  float32x4_t v184;
  int8x16_t v185;
  float32x4_t v186;
  float32x4_t v187;
  float32x4_t v188;
  float32x4_t* v189;
  float32x4_t v190;
  char* v191;
  char* v192;
  float32x4_t v193;
  float32x4_t v194;
  int8x16_t v195;
  float32x4_t v197;
  unsigned __int64 v198;
  __int64 v199;
  unsigned __int64 v200;
  __int64 v201;
  __int64** v202;
  _QWORD* v203;
  unsigned __int64 v204;
  unsigned __int64 v205;
  unsigned __int64 v206;
  __int64 v207;
  __int64* v208;
  __int64 v209;
  float32x4_t v210;
  float32x4_t v211;
  float32x4_t v212;
  __int64 v213;
  __int64 v214;
  __int128 v215;
  __int128 v216;
  __int128 v217;
  __int64 v218;
  __int64 v219;
  __int64 v220;
  __int64 v221;
  __int64 v222;
  __int64 v223;
  __int64 v224;
  __int64 v225;
  __int64** v226;
  unsigned __int64 v227;
  __int64 v228;
  __int64* v229;
  __int64 v230;
  char v231;
  __int64 v232;
  unsigned __int64 v233;
  __int64 v234;
  _QWORD* v235;
  unsigned __int64 v236;
  unsigned __int64 v237;
  __int64 v238;
  __int64 v239;
  __int64 v240;
  __int64 v241;
  __int64 v242;
  char* v243;
  char* v244;
  char* v245;
  void (**v246)(char*);
  __int64 v247;
  __int64 v248;
  __int64 v249;
  float v250;
  __int64 v251;
  float32x4_t* v252;
  float32x4_t* v253;
  float v254;
  float v255;
  float v256;
  float v257;
  float v258;
  unsigned __int64 v259;
  float32x4_t* v260;
  float32x4_t* v261;
  float32x4_t* v262;
  float v263;
  float v264;
  float v265;
  float v266;
  float v267;
  unsigned __int64 v268;
  float32x4_t* v269;
  float32x4_t* v270;
  __int64* v271;
  __int64 v272;
  __int64 v273;
  float v274;
  float v275;
  float v276;
  float v277;
  float v278;
  unsigned __int64 v279;
  float32x4_t* v280;
  float32x4_t* v281;
  float32x4_t* v282;
  __int64* v283;
  __int64 v284;
  __int64 v285;
  __int64 v286;
  unsigned __int64 v287;
  void (***v288)(_QWORD);
  __int64* v289;
  void (***v290)(_QWORD);
  void (**v291)(_QWORD);
  __int64 v292;
  float32x4_t* v293;
  float32x4_t* v294;
  __int64* v295;
  __int64 v296;
  __int64 v297;
  float v298;
  float v299;
  float v300;
  float v301;
  float v302;
  unsigned __int64 v303;
  float32x4_t* v304;
  float32x4_t* v305;
  float32x4_t* v306;
  __int64* v307;
  __int64 v308;
  __int64 v309;
  __int64 v310;
  unsigned __int64 v311;
  void (***v312)(_QWORD);
  void (***v313)(_QWORD);
  void (**v314)(_QWORD);
  __int64 v315;
  __int64 v316;
  __int64 v317;
  __int64* v318;
  unsigned __int64 v319;
  unsigned __int64 v320;
  __int64 v321;
  char v322;
  float32x4_t v323;
  char v324;
  float32x4_t* v325;
  __int64** v326;
  char v327;
  float32x4_t v328;
  struct {
    float v329;
    float v330;
    float v331;
    float v332;
    float v333;
    float v334;
    float v335;
    float v336;
  } v329_;
  struct {
    _QWORD v337[4];
    _QWORD* v338;
  } v337_;
  struct {
    unsigned __int64 v339[4];
    unsigned __int64* v340;
  } v339_;
  struct {
    float32x4_t v341[5];
    __int64 v342;
    __int64 v343;
    char* v344;
    char* v345;
    char gap464_[8];
    char* v346;
    char* v347;
    char gap488_[8];
    __int128 v348;
    __int64 v349;
    __int64 v350;
    __int64 v351;
    int v352;
    char gap540_[4];
    __int64 v353;
    __int64 v354;
    __int64 v355;
    __int64 v356;
    __int64 v357;
    __int64 v358;
    int v359;
    char gap596_[4];
    __int64 v360;
  } v341_;
  __int64* v361;
  unsigned __int64 v362;
  unsigned __int64 v363;
  unsigned __int64 v364;
  struct {
    unsigned __int64 v365[8];
    __int64 v366;
    __int64 v367;
    char gap720_[8];
    __int64 v368;
    __int64 v369;
  } v365_;
  struct {
    float32x4_t v370[5];
    __int64 v371;
    __int64 v372;
    float32x4_t* v373;
    float32x4_t* v374;
    char gap976_[8];
    char* v375;
    char* v376;
    char gap1000_[8];
    __int128 v377;
    __int64 v378;
    __int64 v379;
    float32x4_t v380;
    __int64 v381;
    __int64 v382;
    __int64 v383;
    __int64 v384;
    __int64 v385;
    __int64 v386;
    int v387;
    char gap1108_[4];
    __int64 v388;
    __int64 v389;
    __int64 v390;
    __int64 v391;
    _QWORD v392[5];
  } v370_;

  if (*(_BYTE*)(a1 + 8) != 1) {
    goto LABEL_143;
  }
  v2 = *(_QWORD**)(a1 + 16);
  v3 = (_QWORD*)(a1 + 24);
  v326 = (__int64**)(a1 + 16);
  if (v2 != (_QWORD*)(a1 + 24)) {
    do {
      v22 = v2[6];
      *((_BYTE*)v2 + 272) = 0;
      if (((*(__int64 (**)(void*))(v22 + 48))((void*)&v2[6]) & 1) != 0) {
        v23 = 1036831949;
      }
      else {
        v23 = 0;
        *((_DWORD*)v2 + 69) = 0;
      }
      v24 = (_QWORD*)v2[1];
      *((_DWORD*)v2 + 70) = v23;
      if (v24 != nullptr) {
        do {
          v25 = v24;
          v24 = (_QWORD*)*v24;
        } while (v24 != nullptr);
      }
      else {
        do {
          v25 = (_QWORD*)v2[2];
          v144 = v2 == (_QWORD*)*v25;
          v2 = v25;
        } while (!v144);
      }
      v2 = v25;
    } while (v25 != v3);
  }
  v4 = *(_QWORD**)(a1 + 40);
  if (v4 != (_QWORD*)(a1 + 48)) {
    do {
      v26 = v4[6];
      *((_BYTE*)v4 + 272) = 0;
      if (((*(__int64 (**)(void*))(v26 + 48))((void*)&v4[6]) & 1) != 0) {
        v27 = 1036831949;
      }
      else {
        v27 = 0;
        *((_DWORD*)v4 + 69) = 0;
      }
      v28 = (_QWORD*)v4[1];
      *((_DWORD*)v4 + 70) = v27;
      if (v28 != nullptr) {
        do {
          v29 = v28;
          v28 = (_QWORD*)*v28;
        } while (v28 != nullptr);
      }
      else {
        do {
          v29 = (_QWORD*)v4[2];
          v144 = v4 == (_QWORD*)*v29;
          v4 = v29;
        } while (!v144);
      }
      v4 = v29;
    } while (v29 != (_QWORD*)(a1 + 48));
  }
  v5 = *(__int64**)(a1 + 64);
  v6 = (__int64*)(a1 + 72);
  if (v5 != (__int64*)(a1 + 72)) {
    do {
      v30 = v5[6];
      *((_BYTE*)v5 + 272) = 0;
      if (((*(__int64 (**)(void*))(v30 + 48))((void*)&v5[6]) & 1) != 0) {
        v31 = 1036831949;
      }
      else {
        v31 = 0;
        *((_DWORD*)v5 + 69) = 0;
      }
      v32 = (__int64*)v5[1];
      *((_DWORD*)v5 + 70) = v31;
      if (v32 != nullptr) {
        do {
          v33 = v32;
          v32 = (__int64*)*v32;
        } while (v32 != nullptr);
      }
      else {
        do {
          v33 = (__int64*)v5[2];
          v144 = v5 == (__int64*)*v33;
          v5 = v33;
        } while (!v144);
      }
      v5 = v33;
    } while (v33 != v6);
  }
  *(_QWORD*)(a1 + 120) = *(_QWORD*)(a1 + 112);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 48LL))(a1) & 1) == 0) {
    goto LABEL_142;
  }
  game_map_f54910_alt1((__int64)v370_.v370);
  LANES128(v370_.v370[0]).n128_u64[0] =
      (unsigned __int64)game_map_DangerMeshData_vtable;
  game_map_f54910_alt1((__int64)&v361);
  v361 = (__int64*)game_map_DangerMeshData_vtable;
  game_map_f54910_alt1((__int64)v341_.v341);
  v341_.v360 = a1;
  LANES128(v341_.v341[0]).n128_u64[0] =
      (unsigned __int64)game_map_DangerMeshFillData_vtable;
  v8 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 248LL);
  v9 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 256LL);
  v321 = *(_QWORD*)GameData_212d020[0];
  if (v8 == v9) {
    goto LABEL_103;
  }
  v10 = 0;
LABEL_8:
  v324 = v10;
  v8 += 4;
  v11 = *(_QWORD*)(*GameData_212ce98[0] + 152);
  do {
    v13 = v8 - 4;
    v12 = *(char*)(v8 - 4);
    v14 = *(char*)(v8 - 3);
    v15 = v12 + 32 * v14;
    if (v15 >= 0x400) {
      v16 = 0;
    }
    else {
      v16 = v15;
    }
    v17 = *(unsigned __int8*)(v11 + v16 + 8);
    if (v17 >= 2) {
      v339_.v340 = v339_.v339;
      v339_.v339[0] = (unsigned __int64)GameData_1ff21c8;
      v18 = MapDrawConst_fcbcc0_alt1(a1, 1, v12, v14, (__int64)v339_.v339, 1);
      if (v339_.v340 == v339_.v339) {
        v19 = 32;
      }
      else {
        if (v339_.v340 == nullptr) {
        LABEL_19:
          game_map_f54d00_alt1((__int64)v370_.v370);
          GameHr_fcacb0(a1, (__int64)v370_.v370, 1, v12, v14, v18);
          MapPanelDanger_f14660(v326, (__int64)v370_.v370);
          v11 = *(_QWORD*)(*GameData_212ce98[0] + 152);
          v17 = *(unsigned __int8*)(v11 + v16 + 8);
          goto LABEL_20;
        }
        v19 = 40;
      }
      (*(void (**)(__int64))(*v339_.v340 + v19))((__int64)v339_.v340);
      goto LABEL_19;
    }
  LABEL_20:
    if ((*(_BYTE*)(*GameData_212ce90[0] + 21) & 1) != 0 && v17 != 0) {
      v337_.v337[0] = GameData_1ff2248;
      v337_.v338 = v337_.v337;
      v20 = MapDrawConst_fcbcc0_alt1(a1, 1, v12, v14, (__int64)v337_.v337, 1);
      if (v337_.v338 == v337_.v337) {
        v21 = 32;
      LABEL_26:
        (*(void (**)(__int64))(*v337_.v338 + v21))((__int64)v337_.v338);
      }
      else if (v337_.v338 != nullptr) {
        v21 = 40;
        goto LABEL_26;
      }
      game_map_f54d00_alt1((__int64)&v361);
      v10 = 1;
      GameHr_fcacb0(a1, (__int64)&v361, 1, v12, v14, v20);
      MapPanelDanger_f14660((__int64**)(a1 + 40), (__int64)&v361);
      if (v8 != v9) {
        goto LABEL_8;
      }
      goto LABEL_60;
    }
    v8 += 4;
  } while (v13 + 4 != v9);
  if ((v324 & 1) == 0) {
    goto LABEL_103;
  }
LABEL_60:
  GameRoutine_f0ea80_alt1((void*)((__int64)&v329_.v329), 4);
  v329_.v329 = v329_.v329 + 0x1.99999a0000000p-11f;
  v329_.v330 = v329_.v330 + 0x1.0000000000000p-10f;
  v329_.v331 = v329_.v331 + -0x1.99999a0000000p-11f;
  v329_.v332 = v329_.v332 + 0x1.0000000000000p-10f;
  v34 = *(char**)(v321 + 248);
  v35 = *(char**)(v321 + 256);
  v329_.v335 = v329_.v335 + 0x1.99999a0000000p-11f;
  v329_.v336 = v329_.v336 + -0x1.0000000000000p-10f;
  v329_.v333 = v329_.v333 + -0x1.99999a0000000p-11f;
  v329_.v334 = v329_.v334 + -0x1.0000000000000p-10f;
  if (v34 != v35) {
    v36 = *GameData_212ce98[0];
    v37 = *GameData_212ce90[0];
    do {
      v39 = *v34;
      v40 = v34[1];
      LODWORD(v41) = v39 + 32 * v40;
      if ((unsigned int)v41 >= 0x400) {
        v41 = 0;
      }
      else {
        v41 = (unsigned int)v41;
      }
      if ((*(_BYTE*)(v37 + 21) & 1) != 0 &&
          *(_BYTE*)(*(_QWORD*)(v36 + 152) + v41 + 8) != 0) {
        v42 = game_map_f54d00_alt1((__int64)v341_.v341);
        GameHr_fcabb0(v42, a1, (__int64)v341_.v341, 1, v39, v40,
                      (__int64)&v329_.v329, (__int64)GameData_212c958);
        v43 = (*(__int64 (**)(float32x4_t*))(
            LANES128(v341_.v341[0]).n128_u64[0] + 32))(v341_.v341);
        v44 = *(_QWORD*)(a1 + 72);
        v45 = v43;
        v46 = (__int64**)(a1 + 72);
        v47 = a1 + 72;
        if (v44 != 0) {
          v48 = *(_QWORD**)(a1 + 72);
          while (1) {
            v49 = v48[4];
            if (v43 >= v49) {
              if (v49 >= v43) {
                while (1) {
                  while (1) {
                    v50 = *(_QWORD*)(v44 + 32);
                    if (v43 >= v50) {
                      break;
                    }
                    v44 = *(_QWORD*)v44;
                    if (v44 == 0) {
                      goto LABEL_507;
                    }
                  }
                  if (v50 >= v43) {
                    goto LABEL_101;
                  }
                  v44 = *(_QWORD*)(v44 + 8);
                  if (v44 == 0) {
                  LABEL_507:
                    String_60a250_alt1("map::at:  key not found");
                  }
                }
              }
              ++v48;
            }
            v48 = (_QWORD*)*v48;
            if (v48 == nullptr) {
              while (1) {
                while (1) {
                  v51 = *(_QWORD*)(v44 + 32);
                  v47 = v44;
                  if (v43 >= v51) {
                    break;
                  }
                  v44 = *(_QWORD*)v44;
                  v46 = (__int64**)v47;
                  if (*(_QWORD*)v47 == 0) {
                    goto LABEL_86;
                  }
                }
                if (v51 >= v43) {
                  goto LABEL_89;
                }
                v44 = *(_QWORD*)(v44 + 8);
                if (v44 == 0) {
                  v46 = (__int64**)(v47 + 8);
                  goto LABEL_86;
                }
              }
            }
          }
        }
      LABEL_86:
        v52 = v47;
        v47 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 304, 16, 0);
        *(_QWORD*)(v47 + 32) = v45;
        game_map_f54910_alt1(v47 + 48);
        *(_QWORD*)(v47 + 48) = game_map_DangerMeshFillData_vtable;
        *(_QWORD*)(v47 + 296) = 0;
        v53 = (__int64*)v47;
        *(_QWORD*)v47 = 0;
        *(_QWORD*)(v47 + 8) = 0;
        *(_QWORD*)(v47 + 16) = v52;
        *v46 = (__int64*)v47;
        v54 = **(_QWORD**)(a1 + 64);
        if (v54 != 0) {
          *(_QWORD*)(a1 + 64) = v54;
          v53 = *v46;
        }
        fw_containers_BalanceAfterInsert_alt1(*(__int64**)(a1 + 72), v53);
        ++*(_QWORD*)(a1 + 80);
      LABEL_89:
        *(_QWORD*)(v47 + 56) = LANES128(v341_.v341[0]).n128_u64[1];
        v55 = v341_.v341[2];
        *(float32x4_t*)(v47 + 64) = v341_.v341[1];
        *(float32x4_t*)(v47 + 80) = v55;
        v56 = v341_.v341[3];
        v57 = v341_.v341[4];
        v58 = v341_.v343;
        *(_QWORD*)(v47 + 128) = v341_.v342;
        *(_QWORD*)(v47 + 136) = v58;
        *(float32x4_t*)(v47 + 96) = v56;
        *(float32x4_t*)(v47 + 112) = v57;
        if ((float32x4_t*)(v47 + 48) != v341_.v341) {
          GameRoutine_f155c0_alt2((__int64*)(v47 + 144), v341_.v344, v341_.v345,
                                  (v341_.v345 - v341_.v344) >> 6);
          CharacterController_d42d20_alt1(v47 + 168, v341_.v346, v341_.v347,
                                          (v341_.v347 - v341_.v346) >> 4);
        }
        v59 = v341_.v350;
        v44 = a1 + 72;
        v60 = v341_.v348;
        *(_QWORD*)(v47 + 208) = v341_.v349;
        *(_QWORD*)(v47 + 216) = v59;
        *(_QWORD*)(v47 + 192) = v60;
        v61 = *(_OWORD*)(v47 + 192);
        *((_QWORD*)&v61 + 1) = DWORD2(v60);
        DWORD2(v60) = v341_.v352;
        *(_QWORD*)(v47 + 224) = v341_.v351;
        *(_OWORD*)(v47 + 192) = v61;
        v62 = *(_OWORD*)(v47 + 224);
        v63 = v341_.v354;
        *((_QWORD*)&v62 + 1) = DWORD2(v60);
        *(_QWORD*)(v47 + 240) = v341_.v353;
        *(_QWORD*)(v47 + 248) = v63;
        v64 = v341_.v356;
        *(_QWORD*)(v47 + 256) = v341_.v355;
        *(_QWORD*)(v47 + 264) = v64;
        *(_OWORD*)(v47 + 224) = v62;
        *(_DWORD*)(v47 + 288) = v341_.v359;
        v65 = v341_.v358;
        *(_QWORD*)(v47 + 272) = v341_.v357;
        *(_QWORD*)(v47 + 280) = v65;
        *(_QWORD*)(v47 + 296) = v341_.v360;
        v66 = (__int64**)(a1 + 72);
        v67 = *v6;
        if (*v6 != 0) {
          while (1) {
            while (1) {
              v44 = v67;
              v68 = *(_QWORD*)(v67 + 32);
              if (v45 >= v68) {
                break;
              }
              v67 = *(_QWORD*)v44;
              v66 = (__int64**)v44;
              if (*(_QWORD*)v44 == 0) {
                goto LABEL_98;
              }
            }
            if (v68 >= v45) {
              break;
            }
            v67 = *(_QWORD*)(v44 + 8);
            if (v67 == 0) {
              v66 = (__int64**)(v44 + 8);
              goto LABEL_98;
            }
          }
        }
        else {
        LABEL_98:
          v69 = v44;
          v44 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 304, 16, 0);
          *(_QWORD*)(v44 + 32) = v45;
          game_map_f54910_alt1(v44 + 48);
          *(_QWORD*)(v44 + 48) = game_map_DangerMeshFillData_vtable;
          *(_QWORD*)(v44 + 296) = 0;
          v70 = (__int64*)v44;
          *(_QWORD*)v44 = 0;
          *(_QWORD*)(v44 + 8) = 0;
          *(_QWORD*)(v44 + 16) = v69;
          *v66 = (__int64*)v44;
          v71 = **(_QWORD**)(a1 + 64);
          if (v71 != 0) {
            *(_QWORD*)(a1 + 64) = v71;
            v70 = *v66;
          }
          fw_containers_BalanceAfterInsert_alt1(*(__int64**)(a1 + 72), v70);
          ++*(_QWORD*)(a1 + 80);
        }
      LABEL_101:
        v72 = *(_QWORD*)(v44 + 48);
        *(_BYTE*)(v44 + 272) = 1;
        v73 = (*(__int64 (**)(__int64))(v72 + 48))((__int64)(v44 + 48));
        v36 = *GameData_212ce98[0];
        v37 = *GameData_212ce90[0];
        if ((v73 & 1) != 0) {
          v38 = 1036831949;
        }
        else {
          v38 = 0;
          *(_DWORD*)(v44 + 276) = 1065353216;
        }
        *(_DWORD*)(v44 + 280) = v38;
      }
      v34 += 4;
    } while (v34 != v35);
  }
LABEL_103:
  LANES128(v341_.v341[0]).n128_u64[0] =
      (unsigned __int64)(GameData_212f8b0[0] + 2);
  if (v341_.v346 != nullptr) {
    v341_.v347 = v341_.v346;
    v74 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v74 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v74, (__int64)v341_.v346);
  }
  v75 = v341_.v344;
  if (v341_.v344 != nullptr) {
    if (v341_.v344 == v341_.v345) {
      goto LABEL_113;
    }
    v76 = v341_.v345 - 64;
    v77 = v341_.v345 - 64;
    do {
      v78 = *(void (***)(char*))v77;
      v77 -= 64;
      (*v78)(v76);
      v144 = v76 == v75;
      v76 = v77;
    } while (!v144);
    v341_.v345 = v75;
    v75 = v341_.v344;
    if (v341_.v344 != nullptr) {
    LABEL_113:
      v79 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v79 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v79, (__int64)v75);
    }
  }
  v361 = GameData_212f8b0[0] + 2;
  if (v365_.v368 != 0) {
    v365_.v369 = v365_.v368;
    v80 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v80 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v80, v365_.v368);
  }
  v81 = v365_.v366;
  if (v365_.v366 != 0) {
    if (v365_.v366 == v365_.v367) {
      goto LABEL_126;
    }
    v82 = (void (***)(_QWORD))(v365_.v367 - 64);
    v83 = (void (***)(_QWORD))(v365_.v367 - 64);
    do {
      v84 = *v83;
      v83 -= 8;
      (*v84)(v82);
      v144 = v82 == (void (***)(_QWORD))v81;
      v82 = v83;
    } while (!v144);
    v365_.v367 = v81;
    v81 = v365_.v366;
    if (v365_.v366 != 0) {
    LABEL_126:
      v85 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v85 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v85, v81);
    }
  }
  LANES128(v370_.v370[0]).n128_u64[0] =
      (unsigned __int64)(GameData_212f8b0[0] + 2);
  if (v370_.v375 != nullptr) {
    v370_.v376 = v370_.v375;
    v86 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v86 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v86, (__int64)v370_.v375);
  }
  v87 = (char*)v370_.v373;
  if (v370_.v373 != nullptr) {
    if (v370_.v373 == v370_.v374) {
      goto LABEL_139;
    }
    v88 = (char*)&v370_.v374[-4];
    v89 = (char*)&v370_.v374[-4];
    do {
      v90 = *(void (***)(char*))v89;
      v89 -= 64;
      (*v90)(v88);
      v144 = v88 == v87;
      v88 = v89;
    } while (!v144);
    v370_.v374 = (float32x4_t*)v87;
    v87 = (char*)v370_.v373;
    if (v370_.v373 != nullptr) {
    LABEL_139:
      v91 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v91 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v91, (__int64)v87);
    }
  }
LABEL_142:
  *(_BYTE*)(a1 + 8) = 0;
LABEL_143:
  v92 = *(_QWORD**)(a1 + 88);
  if (v92 != (_QWORD*)(a1 + 96)) {
    do {
      v97 = v92[6];
      *((_BYTE*)v92 + 272) = 0;
      if (((*(__int64 (**)(void*))(v97 + 48))((void*)&v92[6]) & 1) != 0) {
        v98 = 1036831949;
      }
      else {
        v98 = 0;
        *((_DWORD*)v92 + 69) = 0;
      }
      v99 = (_QWORD*)v92[1];
      *((_DWORD*)v92 + 70) = v98;
      if (v99 != nullptr) {
        do {
          v100 = v99;
          v99 = (_QWORD*)*v99;
        } while (v99 != nullptr);
      }
      else {
        do {
          v100 = (_QWORD*)v92[2];
          v144 = v92 == (_QWORD*)*v100;
          v92 = v100;
        } while (!v144);
      }
      v92 = v100;
    } while (v100 != (_QWORD*)(a1 + 96));
  }
  v325 = (float32x4_t*)(a1 + 96);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 48LL))(a1) & 1) == 0) {
    goto LABEL_370;
  }
  v93 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13224);
  v94 = *(_QWORD*)(v93 + 48);
  v95 = *(_QWORD*)(v93 + 56);
  if (v95 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v95 + 8), 1u,
                              memory_order_relaxed);
    v96 = *(_QWORD*)(*(_QWORD*)(v94 + 8) + 288LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v95 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v95 + 16LL))(v95);
      std___1___shared_weak_count___release_weak_alt1(v95);
    }
  }
  else {
    v96 = *(_QWORD*)(*(_QWORD*)(v94 + 8) + 288LL);
  }
  v101 = 120;
  if (*(_BYTE*)(v96 + 90) != 0) {
    v101 = 89;
  }
  if ((*(_BYTE*)(v96 + v101) & 1) == 0) {
    goto LABEL_166;
  }
  v102 = 744;
  if (*(_BYTE*)(v96 + 712) != 0) {
    v102 = 708;
  }
  if (*(float*)(v96 + v102) > 0x1.0000000000000p-1f) {
    v327 = 1;
  }
  else {
  LABEL_166:
    v327 = 0;
  }
  LANES128(v370_.v370[0]).n128_u32[0] = 15;
  v103 = game_UnitPool_GetFirst_alt1((int*)v370_.v370);
  if (v103 != 0) {
    v104 = *(_QWORD*)(v103 + 432);
    v105 = v103;
    if (v104 == 0) {
      v104 = *(_QWORD*)(v103 + 440);
      if (v104 != 0) {
        v106 = *(unsigned __int8*)(v104 + 16);
        if (v106 <= 8) {
          v316 = 24LL * *(unsigned __int8*)(v104 + 16) + 556024;
          while (1) {
            if (v106 <= 2) {
              v104 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v316);
              if (v104 != 0) {
                break;
              }
            }
            ++v106;
            v316 += 24;
            if (v106 == 9) {
              goto LABEL_171;
            }
          }
        }
        else {
        LABEL_171:
          v104 = 0;
        }
      }
    }
    v107 = 0;
    v108 = 0;
    v109 = 0;
    while (1) {
    LABEL_174:
      v110 = v104;
      if (*(_QWORD*)(v105 + 392) != 0 && (*(_BYTE*)(v105 + 417) & 0x1C) == 0 &&
          (*(float (**)(__int64))(*(_QWORD*)(v105 + 152) + 16LL))(v105 + 152) >
              0x0.0p+0f &&
          (*(_BYTE*)(v105 + 417) & 0x20) != 0) {
        v111 = *(_QWORD*)(v105 + 440);
        if (v111 != 0) {
          v112 = *(_BYTE*)(v111 + 16);
        }
        else {
          v112 = 9;
        }
        v113 = *(_BYTE*)(v105 + 585);
        v114 = *(_DWORD*)(v105 + 592);
        if (v108 >= v109) {
          v115 = v108 - v107;
          v116 = 1 - 0x5555555555555555LL * ((__int64)(v108 - v107) >> 4);
          if (v116 > 0x555555555555555LL) {
          LABEL_509:
            GameRoutine_f14f60_alt1();
          }
          v322 = *(_BYTE*)(v105 + 584);
          if (0x5555555555555556LL * ((__int64)(v109 - v107) >> 4) > v116) {
            v116 = 0x5555555555555556LL * ((__int64)(v109 - v107) >> 4);
          }
          if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v109 - v107) >> 4) >=
              0x2AAAAAAAAAAAAAALL) {
            v116 = 0x555555555555555LL;
          }
          if (v116 > 0x555555555555555LL) {
          LABEL_508:
            GameRoutine_60a210_alt1();
          }
          v117 = 3 * v116;
          v118 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v116, 16, 0);
          v119 = v118 + v115;
          *(_BYTE*)(v119 + 1) = v113;
          *(_WORD*)(v119 + 2) = 0;
          *(_DWORD*)(v119 + 4) = v114;
          *(_BYTE*)(v119 + 8) = v112;
          *(_QWORD*)(v119 + 16) = v105;
          *(_QWORD*)(v119 + 24) = 0;
          *(_QWORD*)(v119 + 36) = 0;
          *(_BYTE*)v119 = v322;
          *(_BYTE*)(v119 + 32) = v327;
          v120 = v118 + v115 + 48 * (v115 / -48);
          if (v107 != v108) {
            v121 = v107;
            v122 = v118 + v115 + 48 * (v115 / -48);
            do {
              *(_BYTE*)v122 = *(_BYTE*)v121;
              *(_BYTE*)(v122 + 1) = *(_BYTE*)(v121 + 1);
              *(_BYTE*)(v122 + 2) = *(_BYTE*)(v121 + 2);
              *(_BYTE*)(v122 + 3) = *(_BYTE*)(v121 + 3);
              *(_QWORD*)(v122 + 4) = *(_QWORD*)(v121 + 4);
              v123 = *(_QWORD*)(v121 + 12);
              v124 = *(_QWORD*)(v121 + 20);
              v125 = *(_QWORD*)(v121 + 28);
              v126 = *(_QWORD*)(v121 + 36);
              v121 += 48;
              *(_QWORD*)(v122 + 36) = v126;
              *(_QWORD*)(v122 + 28) = v125;
              *(_QWORD*)(v122 + 20) = v124;
              *(_QWORD*)(v122 + 12) = v123;
              v122 += 48;
            } while (v121 != v108);
          }
          v109 = v118 + 16 * v117;
          v108 = v119 + 48;
          if (v107 != 0) {
            v127 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v127 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v127, v107);
          }
          v107 = v120;
        }
        else {
          *(_BYTE*)v108 = *(_BYTE*)(v105 + 584);
          *(_BYTE*)(v108 + 1) = v113;
          *(_WORD*)(v108 + 2) = 0;
          *(_DWORD*)(v108 + 4) = v114;
          *(_BYTE*)(v108 + 8) = v112;
          *(_QWORD*)(v108 + 16) = v105;
          *(_QWORD*)(v108 + 24) = 0;
          *(_QWORD*)(v108 + 36) = 0;
          *(_BYTE*)(v108 + 32) = v327;
          v108 += 48LL;
        }
      }
      if (v110 == 0) {
        break;
      }
      v104 = *(_QWORD*)(v110 + 432);
      v105 = v110;
      if (v104 == 0) {
        v128 = *(_QWORD*)(v110 + 440);
        v105 = v110;
        if (v128 != 0) {
          v129 = *(unsigned __int8*)(v128 + 16);
          v104 = 0;
          v105 = v110;
          if (v129 <= 8) {
            v130 = 24LL * (unsigned int)v129 + 556024;
            while (1) {
              if (v129 <= 2) {
                v104 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v130);
                if (v104 != 0) {
                  break;
                }
              }
              ++v129;
              v130 += 24;
              if (v129 == 9) {
                v104 = 0;
                v105 = v110;
                goto LABEL_174;
              }
            }
            v105 = v110;
          }
        }
      }
    }
  }
  else {
    v109 = 0;
    v108 = 0;
    v107 = 0;
  }
  v131 = *(_QWORD**)(*(_QWORD*)GameData_212d020[0] + 4376LL);
  v132 = *(_QWORD**)(*(_QWORD*)GameData_212d020[0] + 4384LL);
  if (v131 != v132) {
    while (1) {
      if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v131 + 528LL))(*v131) & 1) ==
          0) {
        goto LABEL_253;
      }
      v156 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v131 + 56LL))(*v131);
      v157 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v131 + 64LL))(*v131);
      v158 = *v131;
      v159 = v157;
      if (v108 >= v109) {
        v160 = v107;
        v161 = v108 - v107;
        v162 = 1 - 0x5555555555555555LL * (v161 >> 4);
        if (v162 > 0x555555555555555LL) {
          goto LABEL_509;
        }
        if (0x5555555555555556LL * ((__int64)(v109 - v160) >> 4) > v162) {
          v162 = 0x5555555555555556LL * ((__int64)(v109 - v160) >> 4);
        }
        if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v109 - v160) >> 4) >=
            0x2AAAAAAAAAAAAAALL) {
          v162 = 0x555555555555555LL;
        }
        if (v162 > 0x555555555555555LL) {
          goto LABEL_508;
        }
        v163 = 3 * v162;
        v164 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v162, 16, 0);
        v165 = v164 + v161;
        *(_DWORD*)(v165 + 4) = 1;
        *(_BYTE*)(v165 + 8) = 1;
        *(_BYTE*)v165 = v156;
        *(_BYTE*)(v165 + 1) = v159;
        *(_WORD*)(v165 + 2) = 0;
        *(_QWORD*)(v165 + 16) = 0;
        *(_QWORD*)(v165 + 24) = v158;
        *(_QWORD*)(v165 + 36) = 0;
        *(_BYTE*)(v165 + 32) = v327;
        v107 = v164 + v161 + 48 * (v161 / -48);
        if (v160 != v108) {
          v166 = v160;
          v167 = v107;
          do {
            *(_BYTE*)v167 = *(_BYTE*)v166;
            *(_BYTE*)(v167 + 1) = *(_BYTE*)(v166 + 1);
            *(_BYTE*)(v167 + 2) = *(_BYTE*)(v166 + 2);
            *(_BYTE*)(v167 + 3) = *(_BYTE*)(v166 + 3);
            *(_QWORD*)(v167 + 4) = *(_QWORD*)(v166 + 4);
            v168 = *(_QWORD*)(v166 + 12);
            v169 = *(_QWORD*)(v166 + 20);
            v170 = *(_QWORD*)(v166 + 28);
            v171 = *(_QWORD*)(v166 + 36);
            v166 += 48;
            *(_QWORD*)(v167 + 36) = v171;
            *(_QWORD*)(v167 + 28) = v170;
            *(_QWORD*)(v167 + 20) = v169;
            *(_QWORD*)(v167 + 12) = v168;
            v167 += 48;
          } while (v166 != v108);
        }
        v109 = v164 + 16 * v163;
        v108 = v165 + 48;
        if (v160 != 0) {
          v172 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v172 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v172, v160);
        }
      LABEL_253:
        if (++v131 == v132) {
          break;
        }
      }
      else {
        *(_BYTE*)v108 = v156;
        *(_BYTE*)(v108 + 1) = v157;
        ++v131;
        *(_WORD*)(v108 + 2) = 0;
        *(_QWORD*)(v108 + 16) = 0;
        *(_QWORD*)(v108 + 24) = v158;
        *(_QWORD*)(v108 + 36) = 0;
        *(_DWORD*)(v108 + 4) = 1;
        *(_BYTE*)(v108 + 8) = 1;
        *(_BYTE*)(v108 + 32) = v327;
        v108 += 48LL;
        if (v131 == v132) {
          break;
        }
      }
    }
  }
  v317 = v107;
  if (v108 != v107) {
    v133 = v107;
    v134 = 1;
    v135 = 0;
    v136 = (unsigned __int8*)v107;
    do {
      v137 = (unsigned __int8*)(v107 + 48 * v135);
      v138 = v134 & 3;
      v139 = v135;
      v140 = *v137;
      v141 = v137[1];
      if ((~(_BYTE)v135 & 3) != 0) {
        v142 = 0;
        v143 = v136;
        do {
          v144 = v140 == *v143 && v141 == v143[1];
          if (v144 && *((_DWORD*)v137 + 1) == *((_DWORD*)v143 + 1)) {
            v145 = *((_DWORD*)v137 + 10) + 1;
            ++*((_DWORD*)v137 + 9);
            *((_DWORD*)v137 + 10) = v145;
            ++*((_DWORD*)v143 + 10);
          }
          ++v142;
          v143 -= 48;
        } while (v138 != v142);
        v139 = v135 - v142;
      }
      if (v135 >= 3) {
        v146 = (unsigned __int8*)(v107 - 48 + 48 * v139);
        v147 = v139 + 4;
        do {
          v148 = v140 == v146[48] && v141 == v146[49];
          if (v148 && *((_DWORD*)v137 + 1) == *((_DWORD*)v146 + 13)) {
            v149 = *((_DWORD*)v137 + 10) + 1;
            ++*((_DWORD*)v137 + 9);
            *((_DWORD*)v137 + 10) = v149;
            ++*((_DWORD*)v146 + 22);
          }
          v150 = v140 == *v146 && v141 == v146[1];
          if (v150 && *((_DWORD*)v137 + 1) == *((_DWORD*)v146 + 1)) {
            v151 = *((_DWORD*)v137 + 10) + 1;
            ++*((_DWORD*)v137 + 9);
            *((_DWORD*)v137 + 10) = v151;
            ++*((_DWORD*)v146 + 10);
          }
          v152 = v140 == *(v146 - 48) && v141 == *(v146 - 47);
          if (v152 && *((_DWORD*)v137 + 1) == *((_DWORD*)v146 - 11)) {
            v153 = *((_DWORD*)v137 + 10) + 1;
            ++*((_DWORD*)v137 + 9);
            *((_DWORD*)v137 + 10) = v153;
            ++*((_DWORD*)v146 - 2);
          }
          v154 = v140 == *(v146 - 96) && v141 == *(v146 - 95);
          if (v154 && *((_DWORD*)v137 + 1) == *((_DWORD*)v146 - 23)) {
            v155 = *((_DWORD*)v137 + 10) + 1;
            ++*((_DWORD*)v137 + 9);
            *((_DWORD*)v137 + 10) = v155;
            ++*((_DWORD*)v146 - 14);
          }
          v146 -= 192;
          v147 -= 4;
        } while (v147 > 3);
      }
      ++v135;
      v136 += 48;
      v134 = v138 + 1;
    } while (v135 != 0xAAAAAAAAAAAAAAABLL * ((__int64)(v108 - v107) >> 4));
    v318 = GameData_212f8b0[0] + 2;
    while (1) {
      v174 = *(unsigned __int8*)(v133 + 8);
      if (v174 > 1) {
        if (v174 == 2) {
          v175 = GameData_1a83250;
        }
        else {
          v175 = v174 == 3 ? GameData_1a83240 : GameData_1a83680;
        }
      }
      else {
        v175 = GameData_1a83580;
        if (*(_BYTE*)(v133 + 8) != 0) {
          v175 = GameData_1a83860;
        }
      }
      v176 = *(unsigned __int8*)(v133 + 32);
      *(_OWORD*)v339_.v339 = v175;
      if (v176 == 1) {
        v177 = *((_QWORD*)GameData_212c958 + 1);
        v339_.v339[0] = *(_QWORD*)GameData_212c958;
        v339_.v339[1] = v177;
      }
      game_map_f54910_alt1((__int64)v370_.v370);
      LOBYTE(v370_.v389) = 1;
      v370_.v390 = 0;
      v370_.v391 = 0;
      LOBYTE(v370_.v392[0]) = 0;
      BYTE4(v370_.v386) = 0;
      v370_.v387 = 1;
      LANES128(v370_.v370[0]).n128_u64[0] =
          (unsigned __int64)game_map_DangerCursorMeshData_vtable;
      v370_.v388 = 0x100000000LL;
      *(_QWORD*)((char*)v370_.v392 + 4) = 0;
      v178 = *(_QWORD*)(v133 + 8);
      v370_.v388 = *(_QWORD*)v133;
      v370_.v389 = v178;
      v179 = *(_QWORD*)(v133 + 16);
      v180 = *(_QWORD*)(v133 + 24);
      v181 = *(_QWORD*)(v133 + 32);
      LODWORD(v370_.v392[1]) = *(_DWORD*)(v133 + 40);
      v370_.v391 = v180;
      v370_.v392[0] = v181;
      v370_.v390 = v179;
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
        v247 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v247;
        __cxa_guard_release_alt1((__int64)&GameData_21a6130);
      }
      GameRoutine_f0ea80_alt1((void*)((__int64)&v361), 5);
      v182 = vaddq_f32(COERCE_AS(float32x4_t, GameData_21a6120),
                       COERCE_AS(float32x4_t, GameData_1a836d0));
      v328 = vaddq_f32(COERCE_AS(float32x4_t, GameData_21a6120),
                       COERCE_AS(float32x4_t, GameData_1a82a60));
      LANES128(v183).n128_u64[0] = LANES128(v182).n128_u64[0];
      LANES128(v183).n128_u64[1] =
          LANES128_OF(vextq_s8(v182, v182, 8u)).n128_u32[0];
      v319 = LANES128(v183).n128_u64[1];
      v323 = v182;
      v341_.v341[0] = v183;
      MeshData_f555a0_alt1(v370_.v370, v341_.v341, (unsigned __int64*)&v361,
                           v339_.v339);
      LANES128(v184).n128_u64[0] = LANES128(v328).n128_u64[0];
      LANES128(v184).n128_u64[1] = v319;
      v341_.v341[0] = v184;
      MeshData_f555a0_alt1(v370_.v370, v341_.v341, &v362, v339_.v339);
      v185 = v328;
      LANES128(v185).n128_u64[1] =
          LANES128_OF(vextq_s8(v185, v185, 8u)).n128_u32[0];
      v320 = LANES128(v185).n128_u64[1];
      v341_.v341[0] = v185;
      MeshData_f555a0_alt1(v370_.v370, v341_.v341, &v363, v339_.v339);
      LANES128(v186).n128_u64[0] = LANES128(v323).n128_u64[0];
      LANES128(v186).n128_u64[1] = v320;
      v341_.v341[0] = v186;
      MeshData_f555a0_alt1(v370_.v370, v341_.v341, &v364, v339_.v339);
      if ((v370_.v386 & 0x100000000LL) == 0) {
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
          __cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
        v248 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v248;
        __cxa_guard_release_alt1((__int64)&GameData_21a6130);
      }
      v189 = v370_.v373;
      v190 = COERCE_AS(float32x4_t, GameData_21a6120);
      v191 = (char*)v370_.v374;
      if (v370_.v374 != v370_.v373) {
        v192 = (char*)v370_.v373;
        do {
          v193 = *((float32x4_t*)v192 + 1);
          v192 += 64;
          v190 = vaddq_f32(v190, v193);
        } while (v192 != (char*)v370_.v374);
        v190 = vmulq_n_f32(v190,
                           0x1.0000000000000p+0f /
                               (float)(unsigned __int64)(((char*)v370_.v374 -
                                                          (char*)v370_.v373) >>
                                                         6));
        LANES128(v190).n128_u32[3] = 0;
      }
      v194 = vsubq_f32(v190, v370_.v380);
      v195 = vmulq_f32(v194, v194);
      LANES128(v195).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v195, v195, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v195).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v195).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v195).n128_u64[0])))
                  .n64_f32[0] > 0x0.0p+0f &&
          v370_.v374 != v370_.v373) {
        do {
          v189[1] = vsubq_f32(v189[1], v194);
          v189 += 4;
        } while (v189 != (float32x4_t*)v191);
      }
      LANES128(v197).n128_u64[0] = LANES128(v190).n128_u64[0];
      LANES128(v197).n128_u64[1] = LANES128(v190).n128_u32[2];
      v370_.v380 = v197;
      v198 = (*(__int64 (**)(float32x4_t*))(
          LANES128(v370_.v370[0]).n128_u64[0] + 32))(v370_.v370);
      v199 = a1 + 96;
      v200 = v198;
      v201 = LANES128(*(v325)).n128_u64[0];
      v202 = (__int64**)(a1 + 96);
      if (LANES128(*(v325)).n128_u64[0] != 0) {
        v203 = (_QWORD*)LANES128(*(v325)).n128_u64[0];
        do {
          v204 = v203[4];
          if (v198 >= v204) {
            if (v204 >= v198) {
              while (1) {
                while (1) {
                  v205 = *(_QWORD*)(v201 + 32);
                  if (v198 >= v205) {
                    break;
                  }
                  v201 = *(_QWORD*)v201;
                  if (v201 == 0) {
                    goto LABEL_507;
                  }
                }
                if (v205 >= v198) {
                  break;
                }
                v201 = *(_QWORD*)(v201 + 8);
                if (v201 == 0) {
                  goto LABEL_507;
                }
              }
              v231 = 0;
              goto LABEL_335;
            }
            ++v203;
          }
          v203 = (_QWORD*)*v203;
        } while (v203 != nullptr);
        while (1) {
          while (1) {
            v206 = *(_QWORD*)(v201 + 32);
            v199 = v201;
            if (v198 >= v206) {
              break;
            }
            v201 = *(_QWORD*)v201;
            v202 = (__int64**)v199;
            if (*(_QWORD*)v199 == 0) {
              goto LABEL_319;
            }
          }
          if (v206 >= v198) {
            break;
          }
          v201 = *(_QWORD*)(v201 + 8);
          if (v201 == 0) {
            v202 = (__int64**)(v199 + 8);
            goto LABEL_319;
          }
        }
      }
      else {
      LABEL_319:
        v207 = v199;
        v199 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 352, 16, 0);
        *(_QWORD*)(v199 + 32) = v200;
        game_map_f54910_alt1(v199 + 48);
        *(_BYTE*)(v199 + 304) = 1;
        *(_QWORD*)(v199 + 312) = 0;
        *(_QWORD*)(v199 + 320) = 0;
        v208 = (__int64*)v199;
        *(_BYTE*)(v199 + 328) = 0;
        *(_BYTE*)(v199 + 284) = 0;
        *(_DWORD*)(v199 + 288) = 1;
        *(_QWORD*)v199 = 0;
        *(_QWORD*)(v199 + 8) = 0;
        *(_QWORD*)(v199 + 16) = v207;
        *(_QWORD*)(v199 + 48) = game_map_DangerCursorMeshData_vtable;
        *(_QWORD*)(v199 + 296) = 0x100000000LL;
        *(_QWORD*)(v199 + 332) = 0;
        *v202 = (__int64*)v199;
        v209 = **(_QWORD**)(a1 + 88);
        if (v209 != 0) {
          *(_QWORD*)(a1 + 88) = v209;
          v208 = *v202;
        }
        fw_containers_BalanceAfterInsert_alt1(*(__int64**)(a1 + 96), v208);
        ++*(_QWORD*)(a1 + 104);
      }
      *(_QWORD*)(v199 + 56) = LANES128(v370_.v370[0]).n128_u64[1];
      v210 = v370_.v370[2];
      *(float32x4_t*)(v199 + 64) = v370_.v370[1];
      *(float32x4_t*)(v199 + 80) = v210;
      v211 = v370_.v370[3];
      v212 = v370_.v370[4];
      v213 = v370_.v372;
      *(_QWORD*)(v199 + 128) = v370_.v371;
      *(_QWORD*)(v199 + 136) = v213;
      *(float32x4_t*)(v199 + 96) = v211;
      *(float32x4_t*)(v199 + 112) = v212;
      if ((float32x4_t*)(v199 + 48) != v370_.v370) {
        GameRoutine_f155c0_alt2((__int64*)(v199 + 144), (char*)v370_.v373,
                                (char*)v370_.v374,
                                ((char*)v370_.v374 - (char*)v370_.v373) >> 6);
        CharacterController_d42d20_alt1(v199 + 168, v370_.v375, v370_.v376,
                                        (v370_.v376 - v370_.v375) >> 4);
      }
      v214 = v370_.v379;
      v201 = a1 + 96;
      v215 = v370_.v377;
      *(_QWORD*)(v199 + 208) = v370_.v378;
      *(_QWORD*)(v199 + 216) = v214;
      *(_QWORD*)(v199 + 192) = v215;
      v216 = *(_OWORD*)(v199 + 192);
      *((_QWORD*)&v216 + 1) = DWORD2(v215);
      DWORD2(v215) = LANES128(v370_.v380).n128_u32[2];
      *(_QWORD*)(v199 + 224) = LANES128(v370_.v380).n128_u64[0];
      *(_OWORD*)(v199 + 192) = v216;
      v217 = *(_OWORD*)(v199 + 224);
      v218 = v370_.v382;
      *((_QWORD*)&v217 + 1) = DWORD2(v215);
      *(_QWORD*)(v199 + 240) = v370_.v381;
      *(_QWORD*)(v199 + 248) = v218;
      v219 = v370_.v384;
      *(_QWORD*)(v199 + 256) = v370_.v383;
      *(_QWORD*)(v199 + 264) = v219;
      *(_OWORD*)(v199 + 224) = v217;
      *(_DWORD*)(v199 + 288) = v370_.v387;
      v220 = v370_.v386;
      *(_QWORD*)(v199 + 272) = v370_.v385;
      *(_QWORD*)(v199 + 280) = v220;
      v221 = v370_.v389;
      v222 = v370_.v392[0];
      LODWORD(v220) = v370_.v392[1];
      *(_QWORD*)(v199 + 296) = v370_.v388;
      *(_QWORD*)(v199 + 304) = v221;
      v223 = v370_.v390;
      v224 = v370_.v391;
      *(_DWORD*)(v199 + 336) = v220;
      *(_QWORD*)(v199 + 320) = v224;
      *(_QWORD*)(v199 + 328) = v222;
      *(_QWORD*)(v199 + 312) = v223;
      while (1) {
        v225 = *(_QWORD*)v201;
        v226 = (__int64**)v201;
        if (*(_QWORD*)v201 == 0) {
          break;
        }
        while (1) {
          v201 = v225;
          v227 = *(_QWORD*)(v225 + 32);
          if (v200 < v227) {
            break;
          }
          if (v227 >= v200) {
            goto LABEL_333;
          }
          v225 = *(_QWORD*)(v201 + 8);
          if (v225 == 0) {
            v226 = (__int64**)(v201 + 8);
            goto LABEL_330;
          }
        }
      }
    LABEL_330:
      v228 = v201;
      v201 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 352, 16, 0);
      *(_QWORD*)(v201 + 32) = v200;
      game_map_f54910_alt1(v201 + 48);
      *(_BYTE*)(v201 + 304) = 1;
      *(_QWORD*)(v201 + 312) = 0;
      *(_QWORD*)(v201 + 320) = 0;
      v229 = (__int64*)v201;
      *(_BYTE*)(v201 + 328) = 0;
      *(_BYTE*)(v201 + 284) = 0;
      *(_DWORD*)(v201 + 288) = 1;
      *(_QWORD*)v201 = 0;
      *(_QWORD*)(v201 + 8) = 0;
      *(_QWORD*)(v201 + 16) = v228;
      *(_QWORD*)(v201 + 48) = game_map_DangerCursorMeshData_vtable;
      *(_QWORD*)(v201 + 296) = 0x100000000LL;
      *(_QWORD*)(v201 + 332) = 0;
      *v226 = (__int64*)v201;
      v230 = **(_QWORD**)(a1 + 88);
      if (v230 != 0) {
        *(_QWORD*)(a1 + 88) = v230;
        v229 = *v226;
      }
      fw_containers_BalanceAfterInsert_alt1(*(__int64**)(a1 + 96), v229);
      ++*(_QWORD*)(a1 + 104);
    LABEL_333:
      v231 = 1;
    LABEL_335:
      v232 = *(_QWORD*)(v201 + 48);
      *(_BYTE*)(v201 + 272) = 1;
      if (((*(__int64 (**)(__int64))(v232 + 48))((__int64)(v201 + 48)) & 1) !=
          0) {
        *(_DWORD*)(v201 + 280) = 1036831949;
        if ((v231 & 1) != 0) {
          goto LABEL_351;
        }
      }
      else {
        *(_DWORD*)(v201 + 276) = 1065353216;
        *(_DWORD*)(v201 + 280) = 0;
        if ((v231 & 1) != 0) {
          goto LABEL_351;
        }
      }
      v233 = DangerCursorMeshData_Unknown4_alt1((__int64)v370_.v370);
      v234 = LANES128(*(v325)).n128_u64[0];
      if (LANES128(*(v325)).n128_u64[0] == 0) {
        goto LABEL_351;
      }
      v235 = (_QWORD*)LANES128(*(v325)).n128_u64[0];
      while (1) {
        v236 = v235[4];
        if (v233 >= v236) {
          break;
        }
      LABEL_341:
        v235 = (_QWORD*)*v235;
        if (v235 == nullptr) {
          goto LABEL_351;
        }
      }
      if (v236 < v233) {
        ++v235;
        goto LABEL_341;
      }
      while (1) {
        while (1) {
          v237 = *(_QWORD*)(v234 + 32);
          if (v233 >= v237) {
            break;
          }
          v234 = *(_QWORD*)v234;
          if (v234 == 0) {
            goto LABEL_507;
          }
        }
        if (v237 >= v233) {
          break;
        }
        v234 = *(_QWORD*)(v234 + 8);
        if (v234 == 0) {
          goto LABEL_507;
        }
      }
      v238 = *(_QWORD*)(v133 + 8);
      *(_QWORD*)(v234 + 296) = *(_QWORD*)v133;
      *(_QWORD*)(v234 + 304) = v238;
      v239 = *(_QWORD*)(v133 + 16);
      v240 = *(_QWORD*)(v133 + 24);
      v241 = *(_QWORD*)(v133 + 32);
      *(_DWORD*)(v234 + 336) = *(_DWORD*)(v133 + 40);
      *(_QWORD*)(v234 + 320) = v240;
      *(_QWORD*)(v234 + 328) = v241;
      *(_QWORD*)(v234 + 312) = v239;
    LABEL_351:
      LANES128(v370_.v370[0]).n128_u64[0] = (unsigned __int64)v318;
      if (v370_.v375 != nullptr) {
        v370_.v376 = v370_.v375;
        v242 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v242 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v242, (__int64)v370_.v375);
      }
      v243 = (char*)v370_.v373;
      if (v370_.v373 != nullptr) {
        if (v370_.v373 == v370_.v374) {
          goto LABEL_272;
        }
        v244 = (char*)&v370_.v374[-4];
        v245 = (char*)&v370_.v374[-4];
        do {
          v246 = *(void (***)(char*))v245;
          v245 -= 64;
          (*v246)(v244);
          v144 = v244 == v243;
          v244 = v245;
        } while (!v144);
        v370_.v374 = (float32x4_t*)v243;
        v243 = (char*)v370_.v373;
        if (v370_.v373 != nullptr) {
        LABEL_272:
          v173 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v173 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v173, (__int64)v243);
        }
      }
      v133 += 48;
      if (v133 == v108) {
        goto LABEL_366;
      }
    }
    if (v370_.v387 != 2) {
      goto LABEL_292;
    }
  LABEL_291:
    LANES128(v187).n128_u64[0] = 0x3F0000003F000000LL;
    LANES128(v187).n128_u64[1] = 0x3F0000003F000000LL;
    v188 = vmulq_f32(vaddq_f32(v323, v328), v187);
    LANES128(v188).n128_u32[3] = 0;
    v341_.v341[0] = v188;
    MeshData_f555a0_alt1(v370_.v370, v341_.v341, v365_.v365, v339_.v339);
    goto LABEL_292;
  }
LABEL_366:
  if (v317 != 0) {
    v249 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v249 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v249, v317);
  }
LABEL_370:
  if (*(_QWORD*)(a1 + 80) != 0) {
    v250 = *(float*)(a1 + 136);
  }
  else {
    v250 = 0x0.0p+0f;
    *(_DWORD*)(a1 + 136) = 0;
  }
  v251 = game_script_hub_g_frame_counter_ptr[0];
  v252 = *(float32x4_t**)(a1 + 16);
  *(float*)(a1 + 136) =
      v250 +
      (float)((float)(*(float*)(*(_QWORD*)
                                    game_script_hub_g_frame_counter_ptr[0] +
                                160LL) *
                      0x1.0aef000000000p+4f) /
              0x1.f400000000000p+9f);
  if (v252 != (float32x4_t*)(a1 + 24)) {
    do {
      v254 = LANES128(v252[17]).n128_f32[2];
      v255 =
          (float)(*(float*)(*(_QWORD*)v251 + 160LL) * 0x1.0aef000000000p+4f) /
          0x1.f400000000000p+9f;
      if (v254 <= 0x0.0p+0f) {
        if (LANES128(v252[17]).n128_u8[0] != 0) {
          v258 = 0x1.0000000000000p+0f;
        }
        else {
          v258 = 0x0.0p+0f;
        }
      }
      else {
        v256 = v255 / v254;
        v257 = LANES128(v252[17]).n128_f32[1];
        if (LANES128(v252[17]).n128_u8[0] != 0) {
          v258 = fminf(fmaxf(v256 + v257, 0x1.51eb860000000p-2f),
                       0x1.0000000000000p+0f);
        }
        else {
          v258 = fminf(fmaxf(v257 - v256, 0x0.0p+0f), 0x1.570a3c0000000p-1f);
        }
      }
      LANES128(v252[17]).n128_f32[1] = v258;
      v259 = LANES128(v252[3]).n128_u64[0];
      LANES128(v252[15]).n128_f32[0] = v255 + LANES128(v252[15]).n128_f32[0];
      (*(void (**)(float32x4_t*))(v259 + 40))(v252 + 3);
      GameRoutine_f54fe0_alt1(v252 + 3);
      if ((LANES128(v252[17]).n128_u8[0] & 1) != 0 ||
          LANES128(v252[17]).n128_f32[1] > 0x0.0p+0f) {
        v260 = (float32x4_t*)LANES128(*(v252)).n128_u64[1];
        if (v260 != nullptr) {
          do {
            v253 = v260;
            v260 = (float32x4_t*)LANES128(*(v260)).n128_u64[0];
          } while (v260 != nullptr);
        }
        else {
          do {
            v253 = (float32x4_t*)LANES128(v252[1]).n128_u64[0];
            v144 = v252 == (float32x4_t*)LANES128(*(v253)).n128_u64[0];
            v252 = v253;
          } while (!v144);
        }
      }
      else {
        v253 = (float32x4_t*)MapPanelDanger_f15340((_QWORD*)(a1 + 16), v252);
      }
      v252 = v253;
    } while (v253 != (float32x4_t*)(a1 + 24));
  }
  v261 = *(float32x4_t**)(a1 + 40);
  if (v261 != (float32x4_t*)(a1 + 48)) {
    do {
      v263 = LANES128(v261[17]).n128_f32[2];
      v264 =
          (float)(*(float*)(*(_QWORD*)v251 + 160LL) * 0x1.0aef000000000p+4f) /
          0x1.f400000000000p+9f;
      if (v263 <= 0x0.0p+0f) {
        if (LANES128(v261[17]).n128_u8[0] != 0) {
          v267 = 0x1.0000000000000p+0f;
        }
        else {
          v267 = 0x0.0p+0f;
        }
      }
      else {
        v265 = v264 / v263;
        v266 = LANES128(v261[17]).n128_f32[1];
        if (LANES128(v261[17]).n128_u8[0] != 0) {
          v267 = fminf(fmaxf(v265 + v266, 0x1.51eb860000000p-2f),
                       0x1.0000000000000p+0f);
        }
        else {
          v267 = fminf(fmaxf(v266 - v265, 0x0.0p+0f), 0x1.570a3c0000000p-1f);
        }
      }
      LANES128(v261[17]).n128_f32[1] = v267;
      v268 = LANES128(v261[3]).n128_u64[0];
      LANES128(v261[15]).n128_f32[0] = v264 + LANES128(v261[15]).n128_f32[0];
      (*(void (**)(float32x4_t*))(v268 + 40))(v261 + 3);
      GameRoutine_f54fe0_alt1(v261 + 3);
      if ((LANES128(v261[17]).n128_u8[0] & 1) != 0 ||
          LANES128(v261[17]).n128_f32[1] > 0x0.0p+0f) {
        v269 = (float32x4_t*)LANES128(*(v261)).n128_u64[1];
        if (v269 != nullptr) {
          do {
            v262 = v269;
            v269 = (float32x4_t*)LANES128(*(v269)).n128_u64[0];
          } while (v269 != nullptr);
        }
        else {
          do {
            v262 = (float32x4_t*)LANES128(v261[1]).n128_u64[0];
            v144 = v261 == (float32x4_t*)LANES128(*(v262)).n128_u64[0];
            v261 = v262;
          } while (!v144);
        }
      }
      else {
        v262 = (float32x4_t*)MapPanelDanger_f15340((_QWORD*)(a1 + 40), v261);
      }
      v261 = v262;
    } while (v262 != (float32x4_t*)(a1 + 48));
  }
  v270 = *(float32x4_t**)(a1 + 64);
  if (v270 != (float32x4_t*)(a1 + 72)) {
    v271 = GameData_212f8b0[0] + 2;
    do {
      v274 = LANES128(v270[17]).n128_f32[2];
      v275 =
          (float)(*(float*)(*(_QWORD*)v251 + 160LL) * 0x1.0aef000000000p+4f) /
          0x1.f400000000000p+9f;
      if (v274 <= 0x0.0p+0f) {
        if (LANES128(v270[17]).n128_u8[0] != 0) {
          v278 = 0x1.0000000000000p+0f;
        }
        else {
          v278 = 0x0.0p+0f;
        }
      }
      else {
        v276 = v275 / v274;
        v277 = LANES128(v270[17]).n128_f32[1];
        if (LANES128(v270[17]).n128_u8[0] != 0) {
          v278 = fminf(fmaxf(v276 + v277, 0x1.51eb860000000p-2f),
                       0x1.0000000000000p+0f);
        }
        else {
          v278 = fminf(fmaxf(v277 - v276, 0x0.0p+0f), 0x1.570a3c0000000p-1f);
        }
      }
      LANES128(v270[17]).n128_f32[1] = v278;
      v279 = LANES128(v270[3]).n128_u64[0];
      LANES128(v270[15]).n128_f32[0] = v275 + LANES128(v270[15]).n128_f32[0];
      (*(void (**)(float32x4_t*))(v279 + 40))(v270 + 3);
      GameRoutine_f54fe0_alt1(v270 + 3);
      v280 = (float32x4_t*)LANES128(*(v270)).n128_u64[1];
      if ((LANES128(v270[17]).n128_u8[0] & 1) != 0 ||
          LANES128(v270[17]).n128_f32[1] > 0x0.0p+0f) {
        if (v280 != nullptr) {
          do {
            v282 = v280;
            v280 = (float32x4_t*)LANES128(*(v280)).n128_u64[0];
          } while (v280 != nullptr);
        }
        else {
          do {
            v282 = (float32x4_t*)LANES128(v270[1]).n128_u64[0];
            v144 = v270 == (float32x4_t*)LANES128(*(v282)).n128_u64[0];
            v270 = v282;
          } while (!v144);
        }
      }
      else {
        v281 = v270;
        if (v280 != nullptr) {
          do {
            v282 = v280;
            v280 = (float32x4_t*)LANES128(*(v280)).n128_u64[0];
          } while (v280 != nullptr);
        }
        else {
          do {
            v282 = (float32x4_t*)LANES128(v281[1]).n128_u64[0];
            v144 = v281 == (float32x4_t*)LANES128(*(v282)).n128_u64[0];
            v281 = v282;
          } while (!v144);
        }
        if (*(float32x4_t**)(a1 + 64) == v270) {
          *(_QWORD*)(a1 + 64) = v282;
        }
        v283 = *(__int64**)(a1 + 72);
        --*(_QWORD*)(a1 + 80);
        GameRoutine_64dfe0_alt1(v283, (__int64*)v270);
        v284 = LANES128(v270[10]).n128_i64[1];
        LANES128(v270[3]).n128_u64[0] = (unsigned __int64)v271;
        if (v284 != 0) {
          LANES128(v270[11]).n128_u64[0] = v284;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v285 = 128;
          }
          else {
            v285 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v285, v284);
        }
        v286 = LANES128(v270[9]).n128_i64[0];
        if (v286 != 0) {
          v287 = LANES128(v270[9]).n128_u64[1];
          if (v286 == v287) {
            goto LABEL_413;
          }
          v288 = (void (***)(_QWORD))(v287 - 64);
          v289 = v271;
          v290 = (void (***)(_QWORD))(v287 - 64);
          do {
            v291 = *v290;
            v290 -= 8;
            (*v291)(v288);
            v144 = v288 == (void (***)(_QWORD))v286;
            v288 = v290;
          } while (!v144);
          v292 = LANES128(v270[9]).n128_i64[0];
          v271 = v289;
          LANES128(v270[9]).n128_u64[1] = v286;
          v286 = v292;
          if (v292 != 0) {
          LABEL_413:
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v272 = 128;
            }
            else {
              v272 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v272, v286);
          }
        }
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
          v273 = 128;
        }
        else {
          v273 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v273, (__int64)v270);
      }
      v270 = v282;
    } while (v282 != (float32x4_t*)(a1 + 72));
  }
  v293 = *(float32x4_t**)(a1 + 88);
  v294 = (float32x4_t*)(a1 + 96);
  if (v293 != v325) {
    v295 = GameData_212f8b0[0] + 2;
    do {
      v298 = LANES128(v293[17]).n128_f32[2];
      v299 =
          (float)(*(float*)(*(_QWORD*)v251 + 160LL) * 0x1.0aef000000000p+4f) /
          0x1.f400000000000p+9f;
      if (v298 <= 0x0.0p+0f) {
        if (LANES128(v293[17]).n128_u8[0] != 0) {
          v302 = 0x1.0000000000000p+0f;
        }
        else {
          v302 = 0x0.0p+0f;
        }
      }
      else {
        v300 = v299 / v298;
        v301 = LANES128(v293[17]).n128_f32[1];
        if (LANES128(v293[17]).n128_u8[0] != 0) {
          v302 = fminf(fmaxf(v300 + v301, 0x1.51eb860000000p-2f),
                       0x1.0000000000000p+0f);
        }
        else {
          v302 = fminf(fmaxf(v301 - v300, 0x0.0p+0f), 0x1.570a3c0000000p-1f);
        }
      }
      LANES128(v293[17]).n128_f32[1] = v302;
      v303 = LANES128(v293[3]).n128_u64[0];
      LANES128(v293[15]).n128_f32[0] = v299 + LANES128(v293[15]).n128_f32[0];
      (*(void (**)(float32x4_t*))(v303 + 40))(v293 + 3);
      GameRoutine_f54fe0_alt1(v293 + 3);
      v304 = (float32x4_t*)LANES128(*(v293)).n128_u64[1];
      if ((LANES128(v293[17]).n128_u8[0] & 1) != 0 ||
          LANES128(v293[17]).n128_f32[1] > 0x0.0p+0f) {
        if (v304 != nullptr) {
          do {
            v306 = v304;
            v304 = (float32x4_t*)LANES128(*(v304)).n128_u64[0];
          } while (v304 != nullptr);
        }
        else {
          do {
            v306 = (float32x4_t*)LANES128(v293[1]).n128_u64[0];
            v144 = v293 == (float32x4_t*)LANES128(*(v306)).n128_u64[0];
            v293 = v306;
          } while (!v144);
        }
      }
      else {
        v305 = v293;
        if (v304 != nullptr) {
          do {
            v306 = v304;
            v304 = (float32x4_t*)LANES128(*(v304)).n128_u64[0];
          } while (v304 != nullptr);
        }
        else {
          do {
            v306 = (float32x4_t*)LANES128(v305[1]).n128_u64[0];
            v144 = v305 == (float32x4_t*)LANES128(*(v306)).n128_u64[0];
            v305 = v306;
          } while (!v144);
        }
        if (*(float32x4_t**)(a1 + 88) == v293) {
          *(_QWORD*)(a1 + 88) = v306;
        }
        v307 = *(__int64**)(a1 + 96);
        --*(_QWORD*)(a1 + 104);
        GameRoutine_64dfe0_alt1(v307, (__int64*)v293);
        v308 = LANES128(v293[10]).n128_i64[1];
        LANES128(v293[3]).n128_u64[0] = (unsigned __int64)v295;
        if (v308 != 0) {
          LANES128(v293[11]).n128_u64[0] = v308;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v309 = 128;
          }
          else {
            v309 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v309, v308);
        }
        v310 = LANES128(v293[9]).n128_i64[0];
        if (v310 != 0) {
          v311 = LANES128(v293[9]).n128_u64[1];
          if (v310 == v311) {
            goto LABEL_458;
          }
          v312 = (void (***)(_QWORD))(v311 - 64);
          v313 = (void (***)(_QWORD))(v311 - 64);
          do {
            v314 = *v313;
            v313 -= 8;
            (*v314)(v312);
            v144 = v312 == (void (***)(_QWORD))v310;
            v312 = v313;
          } while (!v144);
          v315 = LANES128(v293[9]).n128_i64[0];
          v294 = (float32x4_t*)(a1 + 96);
          LANES128(v293[9]).n128_u64[1] = v310;
          v310 = v315;
          if (v315 != 0) {
          LABEL_458:
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v296 = 128;
            }
            else {
              v296 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v296, v310);
          }
        }
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
          v297 = 128;
        }
        else {
          v297 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v297, (__int64)v293);
      }
      v293 = v306;
    } while (v306 != v294);
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
