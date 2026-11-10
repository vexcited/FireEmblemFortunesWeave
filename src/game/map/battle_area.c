#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BattleArea_8bc6c0_alt1(_QWORD) __asm__("BattleArea_8bc6c0");
__int64 BattleArea_8bc800_alt1(_QWORD) __asm__("BattleArea_8bc800");
__int64 BattleArea_8bf0e0_alt1(_QWORD, _QWORD, _QWORD, _QWORD,
                               _QWORD) __asm__("BattleArea_8bf0e0");
__int64 GameRoutine_8bf520(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD);
__int64 GameRoutine_9ba840(_QWORD);
__int64 Impl_9baec0(void);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_Unit_GetJob(_QWORD);
__int64 game_Unit_GetJobUnknown30(void);
__int64 game_map_BattleArea_Impl_Expand_closure_Invoke_alt1(
    _QWORD, _QWORD) __asm__("game_map_BattleArea_Impl_Expand_closure_Invoke");
__int64 nn_mem_StandardAllocator_Free(_QWORD);
char* BattleArea_8beda0_alt1(char* result, char*, __int64, __int64, char*,
                             __int64) __asm__("BattleArea_8beda0");
char* GameRoutine_8bde20(char* result, char*, _DWORD*, __int64, char*, __int64);
extern _UNKNOWN GameData_1a85672;
extern _UNKNOWN GameData_1ab7e7c;
extern _UNKNOWN GameData_1af8f85;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21f2040;
extern _UNKNOWN GameData_21f2058;
extern _UNKNOWN GameData_21f2070;
extern _UNKNOWN* GameData_212c540;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1fa9ea0[])();
extern __int64 GameData_21ca300;
extern __int64 GameData_21f2030;
extern __int64 GameData_21f2038;
extern __int64 GameData_21f2048;
extern __int64 GameData_21f2050;
extern __int64 GameData_21f2060;
extern __int64 GameData_21f2068;
extern __int64 GameData_21f8040;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c930;
extern __int64* GameData_212ce98[2];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__n128 BattleArea_8b9d00(__int64 a1);
__int64 BattleArea_8bc350();
__int64 BattleArea_8bc4c0(__int64 a1, __int64 a2);
__int64 BattleArea_8bc6c0(__int64 a1);
__int64 BattleArea_8bc800(__int64 a1);
__int64 game_map_BattleArea_Impl_Expand(__int64 a1, unsigned __int8 a2, int a3,
                                        int a4, int a5, int a6, __int64 a7);
__int64 game_map_BattleArea_Impl_Expand_closure_Invoke(__int64 a1, _DWORD* a2);
__int64 game_map_BattleArea_Impl_TrySplit_closure_Invoke(__int64 result,
                                                         _DWORD* a2, int* a3,
                                                         int* a4, int* a5);
__int64 game_map_BattleArea_Impl_TrySplit_closure0_Invoke(__int64 result,
                                                          _DWORD* a2, int* a3,
                                                          int* a4, int* a5);
char* BattleArea_8be220(char* result, char* a2, _DWORD* a3, unsigned __int64 a4,
                        char* a5);
void BattleArea_8becc0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                       __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                       __int64 a9, __int64 a10, __int64 a11);
char* BattleArea_8beda0_alt2(char* result, char* a2, __int64 a3,
                             unsigned __int64 a4, char* a5,
                             signed __int64 a6) __asm__("BattleArea_8beda0");
char* BattleArea_8bf0e0(char* result, char* a2, __int64 a3, unsigned __int64 a4,
                        char* a5);
_QWORD* game_map_BattleArea_CreateBorder_lambda0_Invoke(_QWORD* result,
                                                        int* a2);
_QWORD* GameRoutine_9b9cb0(__int64, float32x4_t*, float32x4_t*);
__attribute__((swiftcall)) void collision_670c60(PSEUDO_X8, float32x4_t* result,
                                                 float32x4_t*, __int64);
__int64 BattleInfo_79c940(__int64, unsigned int*);
__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 GameRoutine_2b0();
__int64 GameRoutine_747df0(__int64, int, int, unsigned __int8);
__int64 GameRoutine_74cd60(__int64*);
__int64 GameRoutine_9ba840_alt1(__int64*) __asm__("GameRoutine_9ba840");
__int64 IDeploy_7480e0(__int64, int, int, int*);
__int64 Registration_a5aca0(__int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
char* BattleArea_8bde20_alt1(char* result, char*, _DWORD*, __int64, char*,
                             __int64) __asm__("BattleArea_8bde20");
char* BattleArea_8be740(char* result, char*, char*, _DWORD*, __int64, __int64,
                        char*, __int64);
char* game_map_74efc0(char*, char*, char*);
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN GameData_1b4e9f0;
extern _UNKNOWN GameData_1b4ea30;
extern _UNKNOWN GameData_1b4ea70;
extern _UNKNOWN GameData_1b4eab0;
extern _UNKNOWN GameData_1b4eaf0;
extern _UNKNOWN GameData_1b4eb30;
extern _UNKNOWN GameData_1b4eb70;
extern _UNKNOWN GameData_1b4ebb0;
extern _UNKNOWN GameData_21fdd90;
extern _UNKNOWN GameData_21fde98;
extern __int64 (*GameData_1fa9f30[])();
extern __int64 (*GameData_1fa9fc0[])();
extern __int64 (*GameData_1faa040[])();
extern __int64 (*GameData_1faa0c0[])();
extern __int64 (*GameData_1faa140[])();
extern __int64 (*GameData_1faa1b0[])();
extern __int64* GameData_212ce80[5];
extern __int64* GameData_212ce88[4];
extern __int64* GameData_212cfb8[11];
extern __int64 GameData_212c060;
extern __int64 GameData_21ca2e8;
float Height_7c4d10(__int64, float, float);
float32x4_t GameRoutine_8bce30(float32x2_t*, double, double, long double,
                               double, long double, long double);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_74e1f0();
__int64 BattleArea_8b9f80(__int64 a1, __int64 a2, double a3, double a4,
                          long double a5, double a6, long double a7,
                          long double a8);
_QWORD* game_map_BattleArea_CreateBorder(__int64 a1, __int64 a2, __int64 a3,
                                         __int64 a4, __int64 a5, __int64 a6);
void BattleArea_8bd540(__int64 a1, char a2);
float32x4_t game_map_BattleArea_Impl_OpenImpl_closure_Invoke(
    __int64 a1, unsigned __int32* a2, unsigned __int32* a3,
    unsigned __int32* a4, unsigned __int32* a5, double a6, double a7,
    long double a8, double a9, long double a10, long double a11);
float32x4_t game_map_BattleArea_Impl_OpenPos_closure_Invoke(
    __int64 a1, unsigned __int32* a2, unsigned __int32* a3,
    unsigned __int32* a4, unsigned __int32* a5, double a6, double a7,
    long double a8, double a9, long double a10, long double a11);
char* BattleArea_8bde20(char* result, char* a2, _DWORD* a3, unsigned __int64 a4,
                        char* a5, __int64 a6);
char* BattleArea_8bf520(char* result, char* a2, char* a3, __int64 a4,
                        __int64 a5, __int64 a6, char* a7, __int64 a8);
char* BattleArea_8beda0(char* result, char* a2, __int64 a3, unsigned __int64 a4,
                        char* a5, __int64 a6);

__n128 BattleArea_8b9d00(__int64 a1)
{
  __int64 v1;
  unsigned int v2;
  __int128 v3;
  __int128 v4;
  __int128 v5;
  unsigned int v6;
  __int128 v7;
  __int128 v8;
  __int64 v9;
  __int128 v10;
  __n128 result;
  int v12;
  __int64 v13;
  int v14;
  __int64 v15;
  int v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  v1 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(v1 + 56) = 0;
  *(_QWORD*)(v1 + 40) = 0;
  *(_QWORD*)(v1 + 48) = 0;
  *(_QWORD*)(v1 + 32) = 0;
  *(_QWORD*)(v1 + 8) = 0;
  *(_QWORD*)(v1 + 16) = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v20 = v1;
    v12 = __cxa_guard_acquire(&GameData_21a6130);
    v1 = v20;
    if (v12 != 0) {
      v13 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v13;
      __cxa_guard_release(&GameData_21a6130);
      v1 = v20;
    }
  }
  v2 = DWORD2(GameData_21a6120);
  *(_QWORD*)(v1 + 80) = GameData_21a6120;
  v3 = *(_OWORD*)(v1 + 80);
  *((_QWORD*)&v3 + 1) = v2;
  *(_OWORD*)(v1 + 80) = v3;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v21 = v1;
    v14 = __cxa_guard_acquire(&GameData_21a6130);
    v1 = v21;
    if (v14 != 0) {
      v15 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v15;
      __cxa_guard_release(&GameData_21a6130);
      v1 = v21;
    }
  }
  v4 = GameData_21a6120;
  *(_QWORD*)(v1 + 128) = 0;
  *(_QWORD*)(v1 + 136) = 0;
  *(_QWORD*)(v1 + 144) = 0;
  *(_DWORD*)(v1 + 152) = 0;
  *(_QWORD*)(v1 + 96) = v4;
  v5 = *(_OWORD*)(v1 + 96);
  *((_QWORD*)&v5 + 1) = DWORD2(v4);
  *(_OWORD*)(v1 + 96) = v5;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v22 = v1;
    v16 = __cxa_guard_acquire(&GameData_21a6130);
    v1 = v22;
    if (v16 != 0) {
      v17 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v17;
      __cxa_guard_release(&GameData_21a6130);
      v1 = v22;
    }
  }
  v6 = DWORD2(GameData_21a6120);
  *(_QWORD*)(v1 + 176) = GameData_21a6120;
  v7 = *(_OWORD*)(v1 + 176);
  *((_QWORD*)&v7 + 1) = v6;
  *(_OWORD*)(v1 + 176) = v7;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v23 = v1;
    v18 = __cxa_guard_acquire(&GameData_21a6130);
    v1 = v23;
    if (v18 != 0) {
      v19 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v19;
      __cxa_guard_release(&GameData_21a6130);
      v1 = v23;
    }
  }
  v8 = GameData_21a6120;
  *(_QWORD*)(v1 + 252) = 0;
  v9 = v1 + 252;
  *(_QWORD*)(v9 - 28) = 0;
  *(_QWORD*)(v9 - 12) = 0;
  *(_WORD*)(v9 - 4) = 0;
  *(_QWORD*)(v9 + 8) = 0;
  *(_QWORD*)(v9 + 16) = 0;
  *(_QWORD*)(v9 + 24) = 0;
  *(_QWORD*)(v9 + 32) = 0;
  *(_QWORD*)(v9 + 40) = 0;
  *(_QWORD*)(v9 + 48) = 0;
  *(_QWORD*)(v9 + 56) = 0;
  *(_QWORD*)(v9 + 64) = 0;
  *(_QWORD*)(v9 + 72) = 0;
  *(_QWORD*)(v9 + 80) = 0;
  *(_QWORD*)(v9 + 88) = 0;
  *(_QWORD*)(v9 + 96) = 0;
  *(_QWORD*)(v9 + 104) = 0;
  *(_QWORD*)(v9 + 112) = 0;
  *(_QWORD*)(v9 + 120) = 0;
  *(_DWORD*)(v9 + 128) = 0;
  *(_QWORD*)(v9 - 60) = v8;
  v10 = *(_OWORD*)(v9 - 60);
  *((_QWORD*)&v10 + 1) = DWORD2(v8);
  result = *(__n128*)(v9 - 28);
  ((uint64_t*)&result)[1] = 3212836864LL;
  *(__n128*)(v9 - 28) = result;
  *(_OWORD*)(v9 - 60) = v10;
  return result;
}

__int64 BattleArea_8b9f80(__int64 a1, __int64 a2, double a3, double a4,
                          long double a5, double a6, long double a7,
                          long double a8)
{
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int128 v12;
  __int128 v13;
  __int128 v14;
  unsigned int v15;
  __int128 v16;
  __int128 v17;
  __int128 v18;
  double v19;
  long double v20;
  __int64 v21;
  __int64 (***v22)(_QWORD);
  __int64 v23;
  __int64 v24;
  __int64 (***v25)(_QWORD);
  __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  unsigned int v30;
  __int64 v31;
  __int16 v32;
  __int64 v33;
  _BOOL4 v34;
  int v35;
  int v36;
  __int64 v37;
  int v38;
  __int64 v39;
  _BOOL4 v40;
  int v41;
  int v42;
  int v43;
  unsigned int v44;
  int v45;
  int v46;
  __int64 v47;
  __int64 v48;
  _BOOL4 v49;
  int v50;
  int v51;
  __int64 v52;
  int v53;
  __int64 v54;
  _BOOL4 v55;
  int v56;
  int v57;
  int v58;
  unsigned int v59;
  int v60;
  unsigned int v61;
  __int64 v62;
  int v63;
  __int64 v64;
  int v65;
  __int64 v66;
  bool v67;
  unsigned __int8 v68;
  unsigned int v69;
  unsigned int v70;
  bool v71;
  int v72;
  int v73;
  int v74;
  int v75;
  unsigned int v76;
  unsigned int v77;
  bool v78;
  void* v79;
  void* v80;
  unsigned int v81;
  int v82;
  __int64 v83;
  __int64 v84;
  int v85;
  int v86;
  unsigned int v87;
  __int64 v88;
  __int64 v89;
  float v90;
  float v91;
  __int64 v92;
  __int64 v93;
  float32x4_t v94;
  float32x4_t v95;
  unsigned __int8 v96;
  __int16 v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  unsigned __int8 v103;
  unsigned __int8 v105;
  char v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  unsigned __int8* v113;
  unsigned __int8* v114;
  int v115;
  int v116;
  __int64 v117;
  unsigned int v118;
  __int64 v119;
  __int64 v120;
  int v121;
  int v122;
  int v123;
  unsigned __int8* v124;
  int v125;
  int v126;
  unsigned int v127;
  __int64 v128;
  int v129;
  int v130;
  int v131;
  int v132;
  int v133;
  char v134;
  __int64 v135;
  int v136;
  int v137;
  int v138;
  int v139;
  unsigned __int8 v140;
  int v141;
  int v142;
  int v143;
  int v144;
  __int64 v145;
  int v146;
  int v147;
  int v148;
  int v149;
  unsigned __int8 v150;
  int v151;
  int v152;
  __int64 v153;
  int v154;
  int v155;
  char v156;
  __int64 v157;
  bool v158;
  void* v159;
  void* v160;
  int v161;
  int v162;
  char v165;
  __int64 v166;
  bool v167;
  void* v168;
  void* v169;
  int v170;
  int v171;
  __int64 v172;
  _QWORD* v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  unsigned __int64 v177;
  char v178;
  __int64 v179;
  __int64 v180;
  unsigned int v181;
  unsigned int v182;
  unsigned __int64 v183;
  char* v184;
  unsigned __int8 v185;
  unsigned __int64 v186;
  char* v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  unsigned __int64 v193;
  unsigned __int64 v194;
  __int64 v195;
  __int64 v196;
  __int64 v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  char* v201;
  __int64 v202;
  __int64 (*v203)();
  __int64 (*v204)();
  __int64 (*v205)();
  __int64 (*v206)();
  unsigned __int64 v207;
  unsigned __int64 v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  __int64 (*v212)();
  __int64 v213;
  __int64 v214;
  char* v215;
  __int64 v216;
  int v217;
  int v218;
  char v219;
  __int64 v220;
  __int64 v221;
  unsigned int v222;
  unsigned int v223;
  unsigned __int64 v225;
  char* v226;
  __int64 v227;
  char* v228;
  unsigned __int64 v229;
  unsigned __int64 v230;
  int v231;
  unsigned __int64 v232;
  __int64 v233;
  unsigned __int64 v234;
  unsigned __int64 v235;
  __int64 v236;
  unsigned __int64 v237;
  __int64 v238;
  char* v239;
  _BYTE* v240;
  char v241;
  __int64 v242;
  char* v243;
  __int64 v244;
  char* v245;
  char v246;
  __int64 v247;
  __int64 v248;
  unsigned __int8 v249;
  unsigned __int8 v250;
  int v251;
  int v252;
  int v253;
  unsigned __int8 v255;
  unsigned __int64 v256;
  __int64 v257;
  int v258;
  int v259;
  __int64 v260;
  __int64 v261;
  unsigned __int64 v262;
  __int64 v263;
  unsigned __int64 v264;
  unsigned __int64 v265;
  __int64 v266;
  unsigned __int64 v267;
  __int64 v268;
  char* v269;
  _BYTE* v270;
  char v271;
  __int64 v272;
  __int16 v274;
  int v275;
  int v276;
  int v277;
  int v278;
  int v279;
  int v281;
  int v282;
  int v283;
  int v284;
  unsigned int v286;
  int v287;
  __int64* v288;
  int v289;
  __int64 v290;
  unsigned int v291;
  int v292;
  __int64 v293;
  __int64 v294;
  __int64 v295;
  __int64 v296;
  __int64 v297;
  __int64 v298;
  int v299;
  _BYTE* v300;
  int v301;
  _BYTE* v302;
  _BYTE* v303;
  __int64 v304;
  int v305;
  unsigned __int64 v306;
  float32x4_t v307;
  float32x4_t v308;
  unsigned __int8* v309;
  unsigned __int8* v310;
  __int64 v311;
  unsigned __int8* v312;
  int v313;
  int v314;
  int v315;
  int v316;
  int v317;
  int v318;
  int v319;
  int v320;
  int v321;
  int v322;
  __int64 v323;
  __int64 v324;
  __int64 v325;
  __int64 v326;
  int v327;
  int v328;
  int v329;
  int v330;
  int* v331;
  _DWORD* v332;
  __int64 v333;
  __int64 v334;
  int* v335;
  unsigned __int8 v336;
  unsigned int v337;
  __int64 (**v338)();
  int v339;
  int v340;
  unsigned int v341;
  unsigned __int64 v342;
  unsigned int v343;
  int v344;
  unsigned __int64 v345;
  float32x4_t v346;
  float32x4_t v347;
  struct {
    __int64 (**v348)();
    __int64 v349;
    int v350;
    char gap132_[4];
    __int64 (***v351)();
    __int64 (***v352)();
    __int64 v353;
    int v354;
    char gap164_[28];
    unsigned __int8 v355;
    char gap193_[39];
    __int64 v356;
  } v348_;

  *(_QWORD*)(a1 + 8) = 0;
  v9 = a1;
  *(_QWORD*)(a1 + 32) = 0;
  v10 = a1 + 32;
  *(_DWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  v335 = (int*)(a1 + 8);
  *(_QWORD*)(a1 + 16) = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v323 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v323;
    __cxa_guard_release(&GameData_21a6130);
  }
  v11 = DWORD2(GameData_21a6120);
  *(_QWORD*)(v9 + 80) = GameData_21a6120;
  v12 = *(_OWORD*)(v9 + 80);
  *((_QWORD*)&v12 + 1) = v11;
  *(_OWORD*)(v9 + 80) = v12;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v324 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v324;
    __cxa_guard_release(&GameData_21a6130);
  }
  v13 = GameData_21a6120;
  *(_QWORD*)(v9 + 128) = 0;
  *(_QWORD*)(v9 + 136) = 0;
  *(_QWORD*)(v9 + 144) = 0;
  *(_DWORD*)(v9 + 152) = 0;
  *(_QWORD*)(v9 + 96) = v13;
  v14 = *(_OWORD*)(v9 + 96);
  *((_QWORD*)&v14 + 1) = DWORD2(v13);
  *(_OWORD*)(v9 + 96) = v14;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v325 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v325;
    __cxa_guard_release(&GameData_21a6130);
  }
  v15 = DWORD2(GameData_21a6120);
  *(_QWORD*)(v9 + 176) = GameData_21a6120;
  v16 = *(_OWORD*)(v9 + 176);
  *((_QWORD*)&v16 + 1) = v15;
  *(_OWORD*)(v9 + 176) = v16;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v326 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v326;
    __cxa_guard_release(&GameData_21a6130);
  }
  v17 = GameData_21a6120;
  *(_QWORD*)(v9 + 252) = 0;
  v348_.v356 = v9;
  *(_QWORD*)(v9 + 224) = 0;
  *(_QWORD*)(v9 + 240) = 0;
  *(_WORD*)(v9 + 248) = 0;
  *(_QWORD*)(v9 + 260) = 0;
  *(_QWORD*)(v9 + 268) = 0;
  *(_QWORD*)(v9 + 276) = 0;
  *(_QWORD*)(v9 + 284) = 0;
  *(_QWORD*)(v9 + 292) = 0;
  *(_QWORD*)(v9 + 300) = 0;
  *(_QWORD*)(v9 + 308) = 0;
  *(_QWORD*)(v9 + 316) = 0;
  *(_QWORD*)(v9 + 324) = 0;
  *(_QWORD*)(v9 + 332) = 0;
  *(_QWORD*)(v9 + 340) = 0;
  *(_QWORD*)(v9 + 348) = 0;
  *(_QWORD*)(v9 + 356) = 0;
  *(_QWORD*)(v9 + 364) = 0;
  *(_QWORD*)(v9 + 372) = 0;
  *(_DWORD*)(v9 + 380) = 0;
  v332 = (_DWORD*)(v9 + 252);
  *(_QWORD*)(v9 + 192) = v17;
  v18 = *(_OWORD*)(v9 + 192);
  *((_QWORD*)&v18 + 1) = DWORD2(v17);
  v20 = *(long double*)(v9 + 224);
  *(_OWORD*)(v9 + 192) = v18;
  v19 = 0x0.0p+0;
  *((_QWORD*)&v20 + 1) = 3212836864LL;
  *(long double*)(v9 + 224) = v20;
  v21 = *(_QWORD*)(a2 + 40);
  if ((v21 != 0 && *(_QWORD*)(v21 + 392) != 0 ||
       (*(_BYTE*)(*(_QWORD*)(a2 + 24) + 11277LL) & 0x80) == 0 &&
           (v22 = *(__int64 (****)(_QWORD))(a2 + 48)) != nullptr &&
           ((**v22)(v22) & 1) != 0) &&
      (*(_DWORD*)(a2 + 88) & 0x80000000) == 0 &&
      (*(_DWORD*)(a2 + 92) & 0x80000000) == 0) {
    v23 = *(_QWORD*)(a2 + 800);
    v24 = game_g_shared_system_skills_ptr;
    if ((v23 == 0 || *(_QWORD*)(v23 + 392) == 0) &&
            ((*(_BYTE*)(*(_QWORD*)(a2 + 784) + 11277LL) & 0x80) != 0 ||
             (v25 = *(__int64 (****)(_QWORD))(a2 + 808)) == nullptr ||
             ((**v25)(v25) & 1) == 0) ||
        (*(_DWORD*)(a2 + 848) & 0x80000000) != 0 ||
        (*(_DWORD*)(a2 + 852) & 0x80000000) != 0 ||
        (v26 = *(_QWORD*)(a2 + 72)) != 0 &&
            (unsigned int)(v27 = *(unsigned __int8*)(v26 + 104)) <= 6 &&
            ((1 << v27) & 0x68) != 0) {
      BattleArea_8bc4c0(v10, a2 + 16);
      BattleArea_8bc4c0(v9 + 128, a2 + 16);
      *(_WORD*)(v9 + 248) |= 1u;
      v28 = *(_QWORD*)(a2 + 40);
      LODWORD(v348_.v348) =
          *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x188LL) + v24) & 0xFFF;
      if (v28 != 0 &&
          (game_HasSkill((_QWORD*)(v28 + 1744), (unsigned int*)&v348_.v348) &
           1) != 0) {
        *(_WORD*)(v9 + 248) |= 0x40u;
      }
      v29 = *(_QWORD*)(a2 + 72);
      if (v29 == 0) {
      LABEL_29:
        if ((*(_BYTE*)(a2 + 11277) & 0x40) != 0) {
          *(_WORD*)(v9 + 248) |= 8u;
        }
        v31 = *(_QWORD*)(a2 + 72);
        if (v31 != 0 && *(_BYTE*)(v31 + 104) == 3) {
          *(_WORD*)(v9 + 248) |= 0x10u;
        }
        v32 = *(_WORD*)(v9 + 248);
        if ((*(_BYTE*)(a2 + 11277) & 0x40) != 0) {
          v32 |= 0x10u;
          *(_WORD*)(v9 + 248) = v32;
        }
        if ((v32 & 0x10) == 0 && *(_BYTE*)(v9 + 112) == 8 &&
            *(_BYTE*)(v9 + 208) == 8) {
          v32 |= 2u;
          *(_WORD*)(v9 + 248) = v32;
        }
        if (*(int*)(a2 + 11280) >= 2) {
          *(_WORD*)(v9 + 248) = v32 | 0x20;
        }
        LODWORD(v348_.v348) =
            *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x188LL) + v24) & 0xFFF;
        if ((BattleInfo_79c940(a2 + 16, (unsigned int*)&v348_.v348) & 1) != 0) {
          *(_WORD*)(v9 + 248) |= 0x100u;
        }
        LODWORD(v348_.v348) =
            *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x188LL) + v24) & 0xFFF;
        if ((BattleInfo_79c940(a2 + 776, (unsigned int*)&v348_.v348) & 1) !=
            0) {
          *(_WORD*)(v9 + 248) |= 0x200u;
        }
        v33 = *(_QWORD*)(a2 + 72);
        v34 = v33 != 0 && *(unsigned __int8*)(v33 + 104) == 6;
        v35 = *(_DWORD*)(a2 + 104);
        v36 = BattleArea_8bc6c0(*(_QWORD*)(a2 + 40));
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f2040,
                                  memory_order_acquire) &
             1) == 0 &&
            (unsigned int)__cxa_guard_acquire(&GameData_21f2040) != 0) {
          GameData_21f2038 = (__int64)&GameData_1af8f85;
          GameData_21f2030 = game_HashString_alt1((__int64)&GameData_1af8f85);
          __cxa_guard_release(&GameData_21f2040);
        }
        if (game_GameModeData_instance_ != 0 &&
            (v37 = game_GameVariableTable_Find_alt1(
                 *(_QWORD**)(game_GameModeData_instance_ + 48),
                 (unsigned __int64*)&GameData_21f2030)) != 0) {
          v38 = *(_DWORD*)(v37 + 32);
          v39 = *(_QWORD*)(a2 + 832);
          if (v39 == 0) {
          LABEL_53:
            v40 = false;
          LABEL_56:
            v41 = *(_DWORD*)(a2 + 864);
            v42 = BattleArea_8bc6c0(*(_QWORD*)(a2 + 800));
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f2040,
                                      memory_order_acquire) &
                 1) == 0) {
              v327 = v42;
              v328 = __cxa_guard_acquire(&GameData_21f2040);
              v42 = v327;
              if (v328 != 0) {
                GameData_21f2038 = (__int64)&GameData_1af8f85;
                GameData_21f2030 =
                    game_HashString_alt1((__int64)&GameData_1af8f85);
                __cxa_guard_release(&GameData_21f2040);
                v42 = v327;
              }
            }
            v43 = v34 + v35;
            if (v34 + v35 <= v36) {
              v43 = v36;
            }
            if (v43 <= v38) {
              v44 = v38;
            }
            else {
              v44 = v43;
            }
            if (v40 + v41 <= v42) {
              v45 = v42;
            }
            else {
              v45 = v40 + v41;
            }
            v46 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v47 = game_GameVariableTable_Find_alt1(
                  *(_QWORD**)(game_GameModeData_instance_ + 48),
                  (unsigned __int64*)&GameData_21f2030);
              if (v47 != 0) {
                v46 = *(_DWORD*)(v47 + 32);
              }
              else {
                v46 = 0;
              }
            }
            if (v45 > v46) {
              v46 = v45;
            }
            if (v44 > v46) {
              v46 = v44;
            }
            *v335 = v46;
            v48 = *(_QWORD*)(a2 + 72);
            v49 = v48 != 0 && *(unsigned __int8*)(v48 + 104) == 6;
            v50 = *(_DWORD*)(a2 + 104);
            v51 = BattleArea_8bc800(*(_QWORD*)(a2 + 40));
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f2058,
                                      memory_order_acquire) &
                 1) == 0 &&
                (unsigned int)__cxa_guard_acquire(&GameData_21f2058) != 0) {
              GameData_21f2050 = (__int64)&GameData_1ab7e7c;
              GameData_21f2048 =
                  game_HashString_alt1((__int64)&GameData_1ab7e7c);
              __cxa_guard_release(&GameData_21f2058);
            }
            if (game_GameModeData_instance_ != 0 &&
                (v52 = game_GameVariableTable_Find_alt1(
                     *(_QWORD**)(game_GameModeData_instance_ + 48),
                     (unsigned __int64*)&GameData_21f2048)) != 0) {
              v53 = *(_DWORD*)(v52 + 32);
              v54 = *(_QWORD*)(a2 + 832);
              if (v54 == 0) {
              LABEL_80:
                v55 = false;
                goto LABEL_83;
              }
            }
            else {
              v53 = 0;
              v54 = *(_QWORD*)(a2 + 832);
              if (v54 == 0) {
                goto LABEL_80;
              }
            }
            v55 = *(unsigned __int8*)(v54 + 104) == 6;
          LABEL_83:
            v56 = *(_DWORD*)(a2 + 864);
            v57 = BattleArea_8bc800(*(_QWORD*)(a2 + 800));
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f2058,
                                      memory_order_acquire) &
                 1) == 0) {
              v329 = v57;
              v330 = __cxa_guard_acquire(&GameData_21f2058);
              v57 = v329;
              if (v330 != 0) {
                GameData_21f2050 = (__int64)&GameData_1ab7e7c;
                GameData_21f2048 =
                    game_HashString_alt1((__int64)&GameData_1ab7e7c);
                __cxa_guard_release(&GameData_21f2058);
                v57 = v329;
              }
            }
            v58 = v49 + v50;
            if (v49 + v50 <= v51) {
              v58 = v51;
            }
            if (v58 <= v53) {
              v59 = v53;
            }
            else {
              v59 = v58;
            }
            if (v55 + v56 <= v57) {
              v60 = v57;
            }
            else {
              v60 = v55 + v56;
            }
            v61 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v62 = game_GameVariableTable_Find_alt1(
                  *(_QWORD**)(game_GameModeData_instance_ + 48),
                  (unsigned __int64*)&GameData_21f2048);
              v9 = v348_.v356;
              if (v62 != 0) {
                v61 = *(_DWORD*)(v62 + 32);
              }
              else {
                v61 = 0;
              }
            }
            else {
              v9 = v348_.v356;
            }
            if (v60 > (int)v61) {
              v61 = v60;
            }
            if (v59 > v61) {
              v61 = v59;
            }
            *(_DWORD*)(v9 + 12) = v61;
            goto LABEL_102;
          }
        }
        else {
          v38 = 0;
          v39 = *(_QWORD*)(a2 + 832);
          if (v39 == 0) {
            goto LABEL_53;
          }
        }
        v40 = *(unsigned __int8*)(v39 + 104) == 6;
        goto LABEL_56;
      }
    }
    else {
      BattleArea_8bc4c0(v10, a2 + 16);
      BattleArea_8bc4c0(v9 + 128, a2 + 776);
      v29 = *(_QWORD*)(a2 + 72);
      if (v29 == 0) {
        goto LABEL_29;
      }
    }
    v30 = *(unsigned __int8*)(v29 + 104);
    if (v30 <= 6 && ((1 << v30) & 0x68) != 0) {
      *(_WORD*)(v9 + 248) |= 8u;
    }
    goto LABEL_29;
  }
LABEL_102:
  v63 = *v335;
  if (*v335 < 2) {
    return 0;
  }
  v64 = v9 + 256;
  v331 = (int*)v10;
  v334 = v9 + 256;
  while (1) {
    v66 = *GameData_212ce98[0];
    if (*GameData_212ce98[0] != 0) {
      v67 = *(unsigned __int8*)(v9 + 112) == *(unsigned __int8*)(v9 + 208) &&
            (*(_WORD*)(v9 + 248) & 0x10) == 0;
      v68 = v67 ? *(_BYTE*)(v9 + 112) : 1;
      if (v68 != 0) {
        break;
      }
    }
  LABEL_106:
    v71 = v63-- <= 2;
    v65 = *(_DWORD*)(v9 + 12) - 1;
    *(_DWORD*)(v9 + 8) = v63;
    *(_DWORD*)(v9 + 12) = v65;
    if (v71) {
      return 0;
    }
  }
  v336 = v68;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21fde98) != 0) {
    Registration_a5aca0((__int64)&GameData_21fdd90);
    GameRoutine_2b0();
    __cxa_guard_release(&GameData_21fde98);
  }
  v69 = *(unsigned __int8*)(*GameData_212ce98[0] + 29);
  v70 = *(unsigned __int8*)(*GameData_212ce98[0] + 30);
  v337 = *(unsigned __int8*)(*GameData_212ce98[0] + 31);
  v339 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
  v71 = v69 > v337 || *(unsigned __int8*)(*GameData_212ce98[0] + 28) > v70;
  if (!v71) {
    v81 = v70 + 1;
    v82 = 32 * v69;
    v83 = *(_QWORD*)(*GameData_212ce80[0] + 61448);
    v84 = *GameData_212c930;
    do {
      v85 = v339;
      *(float*)&v20 =
          (float)((float)((float)(v69 + 256) * 0x1.4000000000000p+2f) +
                  0x1.4000000000000p+1f) +
          -0x1.4000000000000p+10f;
      HIDWORD(v19) = 0;
      *(float*)&v19 = *(float*)&v20;
      v342 = *(_QWORD*)&v19;
      do {
        if ((unsigned int)(v82 + v85) >= 0x400) {
          v87 = 0;
        }
        else {
          v87 = v82 + v85;
        }
        v88 = *(_QWORD*)(*(_QWORD*)(v84 + 64) +
                         8LL * *(unsigned __int16*)(*(_QWORD*)(v66 + 72) +
                                                    2LL * v87 + 8));
        if (v88 != 0 &&
            (*(unsigned __int8*)(*(_QWORD*)(v88 + 48) + v336 + 32LL) == 255 ||
             (*(_BYTE*)(v88 + 217) & 2) != 0)) {
          goto LABEL_128;
        }
        if ((*(_WORD*)(v9 + 248) & 8) != 0) {
          v89 = v83 + 20LL * v87;
          v90 = *(float*)v89;
          LODWORD(v19) = *(_DWORD*)(v89 + 4);
          LODWORD(a6) = *(_DWORD*)(v89 + 8);
          LODWORD(a7) = *(_DWORD*)(v89 + 12);
          LODWORD(a8) = *(_DWORD*)(v89 + 16);
          if (*(float*)v89 >= *(float*)&v19) {
            v91 = *(float*)v89;
          }
          else {
            v91 = *(float*)(v89 + 4);
          }
          if (*(float*)v89 >= *(float*)&v19) {
            v92 = 0;
          }
          else {
            v92 = 4;
          }
          if (v91 < *(float*)&a6) {
            v91 = *(float*)(v89 + 8);
            v92 = 8;
          }
          if (v91 < *(float*)&a7) {
            v91 = *(float*)(v89 + 12);
            v92 = 12;
          }
          if (v91 < *(float*)&a8) {
            v92 = 16;
          }
          LODWORD(a5) = *(_DWORD*)(v89 + v92);
          if (*(float*)&v19 >= v90) {
            v93 = 0;
          }
          else {
            v90 = *(float*)(v89 + 4);
            v93 = 4;
          }
          if (*(float*)&a6 < v90) {
            v90 = *(float*)(v89 + 8);
            v93 = 8;
          }
          if (*(float*)&a7 < v90) {
            v90 = *(float*)(v89 + 12);
            v93 = 12;
          }
          if (*(float*)&a8 < v90) {
            v93 = 16;
          }
          *(float*)&v20 = *(float*)&a5 - *(float*)(v89 + v93);
          if (*(float*)&v20 > 0x1.4000000000000p+0f) {
          LABEL_128:
            v86 = 1;
          LABEL_129:
            *(_DWORD*)(v64 + 4LL * ((unsigned int)(v82 + v85) >> 5)) |= v86
                                                                        << v85;
            goto LABEL_130;
          }
        }
        LANES128(v94).n128_f32[0] =
            (float)((float)((float)(unsigned int)(v85 + 256) *
                            0x1.4000000000000p+2f) +
                    0x1.4000000000000p+1f) +
            -0x1.4000000000000p+10f;
        LANES128(v95).n128_f32[0] = LANES128(v94).n128_f32[0];
        LANES128(v95).n128_u32[1] = 1128792064;
        LANES128(v94).n128_u32[1] = -1027080192;
        LANES128(v95).n128_u64[1] = v342;
        LANES128(v94).n128_u64[1] = v342;
        v346 = v94;
        v347 = v95;
        collision_670c60((void*)((__int64)&v348_.v348), &v347, &v346, 8);
        v86 = v348_.v355;
        v84 = *GameData_212c930;
        if (v348_.v355 == 1) {
          goto LABEL_129;
        }
      LABEL_130:
        ++v85;
      } while (v81 != v85);
      v82 += 32;
      v67 = v69++ == v337;
    } while (!v67);
  }
  v72 = *(_DWORD*)(v9 + 48);
  v73 = *(_DWORD*)(v9 + 52);
  v74 = *(_DWORD*)(v9 + 144) - v72;
  v75 = *(_DWORD*)(v9 + 148) - v73;
  v76 = v74 * v74;
  v77 = v75 * v75;
  if (v74 * v74 == v75 * v75) {
    v78 = v75 < 0;
    if (v74 < 0) {
      v79 = &GameData_1b4ea30;
      v80 = &GameData_1b4e9f0;
    }
    else {
      v79 = &GameData_1b4eab0;
      v80 = &GameData_1b4ea70;
    }
  }
  else if (v76 >= v77) {
    v78 = v74 < 0;
    v79 = &GameData_1b4ebb0;
    v80 = &GameData_1b4eb70;
  }
  else {
    v78 = v75 < 0;
    v79 = &GameData_1b4eb30;
    v80 = &GameData_1b4eaf0;
  }
  if (v78) {
    v79 = v80;
  }
  v96 = v336;
  *(_QWORD*)(v9 + 16) = v79;
  v97 = *(_WORD*)(v9 + 248);
  if ((v97 & 0x40) != 0) {
    v98 = *(_DWORD*)(v9 + 56);
    v99 = *(_DWORD*)(v9 + 60);
    v100 = *(_DWORD*)(v9 + 8);
    v101 = *(_DWORD*)(v9 + 12);
    v102 = v97 & 0x10;
    v103 = *(_BYTE*)(v9 + 208);
    v348_.v352 = &v348_.v348;
    if (v98 >= v99) {
      v98 = v99;
    }
    *(_DWORD*)(v9 + 8) = v98;
    if (*(unsigned __int8*)(v9 + 112) == v103 && v102 == 0) {
      v105 = *(_BYTE*)(v9 + 112);
    }
    else {
      v105 = 1;
    }
    v348_.v348 = GameData_1faa0c0;
    v348_.v349 = v9;
    v106 = game_map_BattleArea_Impl_Expand(v9, v105, v72, v73, v72, v73,
                                           (__int64)&v348_.v348);
    if (v348_.v352 == &v348_.v348) {
      v107 = 4;
    }
    else {
      if (v348_.v352 == nullptr) {
      LABEL_180:
        *(_DWORD*)(v9 + 8) = v100;
        *(_DWORD*)(v9 + 12) = v101;
        if ((v106 & 1) != 0) {
          goto LABEL_406;
        }
        v97 = *(_WORD*)(v9 + 248);
        goto LABEL_182;
      }
      v107 = 5;
    }
    ((__int64 (*)(__int64))(*v348_.v352)[v107])((__int64)v348_.v352);
    goto LABEL_180;
  }
LABEL_182:
  if ((v97 & 0x300) != 0) {
    v108 = 144;
    v109 = (v97 & 0x100) != 0 ? 144LL : 48LL;
    if ((v97 & 0x100) != 0) {
      v108 = 48;
      v110 = 148;
    }
    else {
      v110 = 52;
    }
    v111 = (v97 & 0x100) != 0 ? 52LL : 148LL;
    if (game_GameModeData_instance_ != 0) {
      v112 = *(_QWORD*)(game_GameModeData_instance_ + 16);
      if (v112 != 0) {
        v114 = *(unsigned __int8**)(*(_QWORD*)(v112 + 24) + 112LL);
        v113 = *(unsigned __int8**)(*(_QWORD*)(v112 + 24) + 120LL);
        if (v113 != v114 && *GameData_212ce98[0] != 0) {
          v115 = *(_DWORD*)(v9 + v108);
          v116 = *(_DWORD*)(v9 + v111);
          v117 = *(_QWORD*)(*GameData_212ce98[0] + 72) + 8LL;
          v118 = v115 + 32 * v116;
          if (v118 >= 0x400) {
            v118 = 0;
          }
          v119 = *(_QWORD*)(*GameData_212c930 + 64);
          v120 = *(_QWORD*)(*(_QWORD*)(v119 +
                                       8LL * *(unsigned __int16*)(v117 +
                                                                  2LL * v118)) +
                            48LL);
          if (v120 != 0) {
            v121 = *(_DWORD*)(v9 + v109);
            v122 = *(_DWORD*)(v9 + v110);
            v123 = 10000;
            v124 = nullptr;
            do {
              v125 = v114[2];
              v126 = v114[3];
              v127 = v125 + 32 * v126;
              if (v127 >= 0x400) {
                v127 = 0;
              }
              v128 = *(
                  _QWORD*)(*(_QWORD*)(v119 +
                                      8LL * *(unsigned __int16*)(v117 +
                                                                 2LL * v127)) +
                           48LL);
              if (v128 != 0 && *(unsigned __int8*)(v128 + 33) ==
                                   *(unsigned __int8*)(v120 + 33)) {
                v129 = (v125 - v115) * (v125 - v115) +
                       (v126 - v116) * (v126 - v116) +
                       (*v114 - v121) * (*v114 - v121) +
                       (v114[1] - v122) * (v114[1] - v122);
                if (v129 < v123) {
                  v123 = v129;
                  v124 = v114;
                }
              }
              v114 += 8;
            } while (v114 != v113);
            if (v124 != nullptr) {
              if ((v97 & 0x100) != 0) {
                v312 = v124 + 2;
                v309 = v124 + 3;
                v311 = 1;
                v310 = v124;
              }
              else {
                v309 = v124 + 1;
                v310 = v124 + 2;
                v311 = 3;
                v312 = v124;
              }
              v313 = *v309;
              v274 = v97 | 0x80;
              *(_DWORD*)(v9 + 48) = *v312;
              *(_DWORD*)(v9 + 52) = v313;
              v314 = v124[v311];
              *(_DWORD*)(v9 + 144) = *v310;
              *(_DWORD*)(v9 + 148) = v314;
              v315 = v124[4];
              v316 = v124[5];
              v317 = v315 + v124[6];
              v318 = v316 + v124[7];
              *(_DWORD*)(v9 + 32) = v315;
              *(_DWORD*)(v9 + 36) = v316;
              *(_DWORD*)(v9 + 40) = v317 - 1;
              *(_DWORD*)(v9 + 44) = v318 - 1;
              v319 = v124[4];
              v320 = v124[5];
              v321 = v124[6];
              v322 = v320 + v124[7];
              *(_DWORD*)(v9 + 128) = v319;
              *(_DWORD*)(v9 + 132) = v320;
              *(_DWORD*)(v9 + 136) = v319 + v321 - 1;
              *(_DWORD*)(v9 + 140) = v322 - 1;
              goto LABEL_405;
            }
          }
        }
      }
    }
  }
  v130 = *(_DWORD*)(v9 + 48);
  v131 = *(_DWORD*)(v9 + 52);
  v132 = *(_DWORD*)(v9 + 144);
  v133 = *(_DWORD*)(v9 + 148);
  v348_.v348 = GameData_1fa9f30;
  v348_.v349 = v9;
  v348_.v352 = &v348_.v348;
  v134 = game_map_BattleArea_Impl_Expand(v9, v336, v130, v131, v132, v133,
                                         (__int64)&v348_.v348);
  if (v348_.v352 == &v348_.v348) {
    v135 = 4;
  }
  else {
    if (v348_.v352 == nullptr) {
      goto LABEL_214;
    }
    v135 = 5;
  }
  ((__int64 (*)(__int64))(*v348_.v352)[v135])((__int64)v348_.v352);
LABEL_214:
  if ((v134 & 1) != 0) {
    goto LABEL_406;
  }
  if ((*(_WORD*)(v9 + 248) & 0x20) != 0) {
    v136 = *(_DWORD*)(v9 + 52);
    v137 = *(_DWORD*)(v9 + 56);
    v138 = *(_DWORD*)(v9 + 64);
    v139 = *(_DWORD*)(v9 + 48);
    v140 = *(_BYTE*)(v9 + 112);
    v141 = *(_DWORD*)(v9 + 8);
    v142 = *(_DWORD*)(v9 + 12);
    *(_DWORD*)(v9 + 8) = *(_DWORD*)(v9 + 60);
    *(_DWORD*)(v9 + 12) = v138;
    v348_.v352 = &v348_.v348;
    if (v137 <= 1) {
      v143 = 1;
    }
    else {
      v143 = v137;
    }
    v348_.v348 = GameData_1fa9fc0;
    v348_.v349 = v9;
    v144 =
        game_map_BattleArea_Impl_Expand(v9, v140, v139, v136, v143 - 1 + v139,
                                        v143 - 1 + v136, (__int64)&v348_.v348);
    if (v348_.v352 == &v348_.v348) {
      v145 = 4;
    }
    else {
      if (v348_.v352 == nullptr) {
        goto LABEL_224;
      }
      v145 = 5;
    }
    ((__int64 (*)(__int64))(*v348_.v352)[v145])((__int64)v348_.v352);
  LABEL_224:
    v146 = *(_DWORD*)(v9 + 148);
    v147 = *(_DWORD*)(v9 + 152);
    v148 = *(_DWORD*)(v9 + 160);
    v149 = *(_DWORD*)(v9 + 144);
    v150 = *(_BYTE*)(v9 + 208);
    *(_DWORD*)(v9 + 8) = *(_DWORD*)(v9 + 156);
    *(_DWORD*)(v9 + 12) = v148;
    v348_.v352 = &v348_.v348;
    if (v147 <= 1) {
      v151 = 1;
    }
    else {
      v151 = v147;
    }
    v348_.v348 = GameData_1faa040;
    v348_.v349 = v9;
    v152 =
        game_map_BattleArea_Impl_Expand(v9, v150, v149, v146, v151 - 1 + v149,
                                        v151 - 1 + v146, (__int64)&v348_.v348);
    if (v348_.v352 == &v348_.v348) {
      v153 = 4;
    }
    else {
      if (v348_.v352 == nullptr) {
      LABEL_232:
        *(_DWORD*)(v9 + 8) = v141;
        *(_DWORD*)(v9 + 12) = v142;
        v96 = v336;
        if ((v144 & v152 & 1) == 0) {
          goto LABEL_233;
        }
        v274 = *(_WORD*)(v9 + 248) | 4;
      LABEL_405:
        *(_WORD*)(v9 + 248) = v274;
        *(float32x4_t*)&v20 = GameRoutine_8bce30(
            (float32x2_t*)v9, *(double*)&v20, v19, a5, a6, a7, a8);
        goto LABEL_406;
      }
      v153 = 5;
    }
    ((__int64 (*)(__int64))(*v348_.v352)[v153])((__int64)v348_.v352);
    goto LABEL_232;
  }
LABEL_233:
  v154 = *(_DWORD*)(v9 + 144);
  v155 = *(_DWORD*)(v9 + 148);
  v348_.v348 = GameData_1faa0c0;
  v348_.v349 = v9;
  v348_.v352 = &v348_.v348;
  v156 = game_map_BattleArea_Impl_Expand(v9, v96, v154, v155, v154, v155,
                                         (__int64)&v348_.v348);
  if (v348_.v352 == &v348_.v348) {
    v157 = 4;
  }
  else {
    if (v348_.v352 == nullptr) {
      goto LABEL_238;
    }
    v157 = 5;
  }
  ((__int64 (*)(__int64))(*v348_.v352)[v157])((__int64)v348_.v352);
LABEL_238:
  if ((v156 & 1) != 0) {
    goto LABEL_406;
  }
  if (v76 == v77) {
    v158 = v75 <= 0;
    if (v74 < 1) {
      v159 = &GameData_1b4eab0;
      v160 = &GameData_1b4ea70;
    }
    else {
      v159 = &GameData_1b4ea30;
      v160 = &GameData_1b4e9f0;
    }
  }
  else if (v76 >= v77) {
    v158 = v74 <= 0;
    v159 = &GameData_1b4ebb0;
    v160 = &GameData_1b4eb70;
  }
  else {
    v158 = v75 <= 0;
    v159 = &GameData_1b4eb30;
    v160 = &GameData_1b4eaf0;
  }
  v161 = *(_DWORD*)(v9 + 48);
  v162 = *(_DWORD*)(v9 + 52);
  if (!v158) {
    v159 = v160;
  }
  *(_QWORD*)(v9 + 16) = v159;
  v348_.v352 = &v348_.v348;
  v348_.v348 = GameData_1faa0c0;
  v348_.v349 = v9;
  v165 = game_map_BattleArea_Impl_Expand(v9, v96, v161, v162, v161, v162,
                                         (__int64)&v348_.v348);
  if (v348_.v352 == &v348_.v348) {
    v166 = 4;
    goto LABEL_252;
  }
  if (v348_.v352 != nullptr) {
    v166 = 5;
  LABEL_252:
    ((__int64 (*)(__int64))(*v348_.v352)[v166])((__int64)v348_.v352);
  }
  if ((v165 & 1) != 0) {
    goto LABEL_406;
  }
  if (v76 == v77) {
    v167 = v75 < 0;
    if (v74 < 0) {
      v168 = &GameData_1b4ea30;
      v169 = &GameData_1b4e9f0;
    }
    else {
      v168 = &GameData_1b4eab0;
      v169 = &GameData_1b4ea70;
    }
  }
  else if (v76 >= v77) {
    v167 = v74 < 0;
    v168 = &GameData_1b4ebb0;
    v169 = &GameData_1b4eb70;
  }
  else {
    v167 = v75 < 0;
    v168 = &GameData_1b4eb30;
    v169 = &GameData_1b4eaf0;
  }
  if (v167) {
    v168 = v169;
  }
  *(_QWORD*)(v9 + 16) = v168;
  v170 = *(_DWORD*)(v9 + 144);
  v171 = *(_DWORD*)(v9 + 148);
  v172 = *(_QWORD*)(v9 + 48);
  v173 = (_QWORD*)*GameData_212ce88[0];
  v174 = *(_QWORD*)(*GameData_212ce88[0] + 10752);
  v175 = *(_QWORD*)(*GameData_212ce88[0] + 10744);
  v176 = ((v174 - v175) << 6) - 1;
  if (v174 == v175) {
    v176 = 0;
  }
  v177 = *(_QWORD*)(*GameData_212ce88[0] + 10776) +
         *(_QWORD*)(*GameData_212ce88[0] + 10768);
  if (v176 == v177) {
    GameRoutine_74cd60(v173 + 1342);
    v175 = v173[1343];
    v177 = v173[1347] + v173[1346];
  }
  *(_QWORD*)(*(_QWORD*)(v175 + 8 * (v177 >> 9)) + 8 * (v177 & 0x1FF)) = v173[1];
  BYTE4(v348_.v348) = 0;
  BYTE5(v348_.v348) = v96;
  ++v173[1347];
  v173[1] = v173 + 337;
  v348_.v352 = nullptr;
  v348_.v353 = 0;
  v348_.v351 = nullptr;
  v348_.v350 = 0;
  v348_.v354 = 0;
  v348_.v349 = 0x100000064LL;
  LODWORD(v348_.v348) = 33024;
  v178 = IDeploy_7480e0((__int64)v173, v170, v171, (int*)&v348_.v348);
  if (v348_.v351 != nullptr) {
    v348_.v352 = v348_.v351;
    v179 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v179 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v179, v348_.v351);
  }
  if ((v178 & 1) == 0) {
    v189 = v173[1347];
    v190 = v173[1346];
    v191 = v173[1343];
    v192 = v173[1344];
    v67 = v192 == v191;
    v193 = v189 - 1 + v190;
    v194 = v193 >> 9;
    v195 = v193 & 0x1FF;
    v196 = ((v192 - v191) << 6) - 1;
    v197 = *(_QWORD*)(v191 + 8 * v194);
    if (v67) {
      v196 = 0;
    }
    v198 = *(_QWORD*)(v197 + 8 * v195);
    v173[1347] = v189 - 1;
    v173[1] = v198;
    if ((unsigned __int64)(v196 - (v189 + v190) + 1) >= 0x400) {
      v199 = *(_QWORD*)(v192 - 8);
      if (v199 != 0) {
        v200 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v200 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v200, v199);
        v192 = v173[1344];
      }
      v173[1344] = v192 - 8;
    }
    goto LABEL_319;
  }
  v333 = v172;
  v338 = (__int64 (**)(void))v173;
  v180 = *GameData_212ce98[0];
  v181 = *(unsigned __int8*)(*GameData_212ce98[0] + 29);
  v343 = *(unsigned __int8*)(*GameData_212ce98[0] + 31);
  if (v181 <= v343 && (v182 = *(unsigned __int8*)(v180 + 30),
                       (v340 = *(unsigned __int8*)(v180 + 28)) <= v182)) {
    v184 = nullptr;
    v183 = 0;
    v256 = 0;
    v257 = *GameData_212ce88[0];
    do {
      v258 = v340;
      v259 = 32 * v181;
      do {
        v260 = *(_QWORD*)(v257 + 8);
        LODWORD(v261) = v258 + v259;
        if ((unsigned int)(v258 + v259) >= 0x400) {
          v261 = 0;
        }
        else {
          v261 = (unsigned int)v261;
        }
        if (*(unsigned __int8*)(v260 + v261 + 64) != 255 &&
            (unsigned int)GameRoutine_747df0(v260, v258, v181,
                                             *(_BYTE*)(v260 + 5)) != 255) {
          if (v183 < v256) {
            *(_BYTE*)v183 = v258;
            *(_BYTE*)(v183 + 1) = v181;
            *(_WORD*)(v183 + 2) = 0;
            v183 += 4LL;
          }
          else {
            v262 = v183 - (_QWORD)v184;
            v263 = (__int64)(v183 - (_QWORD)v184) >> 2;
            v264 = v263 + 1;
            if ((unsigned __int64)(v263 + 1) >> 62 != 0) {
            LABEL_473:
              GameRoutine_74e1f0();
            }
            if ((__int64)(v256 - (_QWORD)v184) >> 1 > v264) {
              v264 = (__int64)(v256 - (_QWORD)v184) >> 1;
            }
            if (v256 - (unsigned __int64)v184 >= 0x7FFFFFFFFFFFFFFCLL) {
              v265 = 0x3FFFFFFFFFFFFFFFLL;
            }
            else {
              v265 = v264;
            }
            if (v265 >> 62 != 0) {
            LABEL_474:
              GameRoutine_60a210();
            }
            v266 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v265, 16, 0);
            v267 = v266 + v262;
            v268 = v266 + v262 - 4 * v263;
            *(_BYTE*)v267 = v258;
            *(_BYTE*)(v267 + 1) = v181;
            *(_WORD*)(v267 + 2) = 0;
            if (v184 != (char*)v183) {
              v269 = v184;
              v270 = (_BYTE*)v268;
              do {
                *v270 = *v269;
                v270[1] = v269[1];
                v270[2] = v269[2];
                v271 = v269[3];
                v269 += 4;
                v270[3] = v271;
                v270 += 4;
              } while (v269 != (char*)v183);
            }
            v9 = v348_.v356;
            v256 = v266 + 4 * v265;
            v183 = v267 + 4;
            if (v184 != nullptr) {
              v272 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v272 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v272, v184);
            }
            v184 = (char*)v268;
          }
        }
        v67 = v258++ == v182;
      } while (!v67);
      v67 = v181++ == v343;
    } while (!v67);
  }
  else {
    v183 = 0;
    v184 = nullptr;
  }
  v348_.v348 = v338;
  v348_.v349 = v333;
  if ((__int64)(v183 - (_QWORD)v184) >> 2 < 129) {
    v185 = v336;
    v188 = 0;
  LABEL_289:
    BattleArea_8bde20_alt1(v184, (char*)v183, &v348_.v348,
                           (__int64)(v183 - (_QWORD)v184) >> 2, nullptr, v188);
  }
  else {
    v185 = v336;
    v186 = (__int64)(v183 - (_QWORD)v184) >> 2;
    while (1) {
      v187 = (char*)GameRoutine_1a09d20(4 * v186, GameData_212c060);
      if (v187 != nullptr) {
        break;
      }
      v188 = v186 >> 1;
      v71 = v186 > 1;
      v186 >>= 1;
      if (!v71) {
        goto LABEL_289;
      }
    }
    v201 = v187;
    BattleArea_8bde20_alt1(v184, (char*)v183, &v348_.v348,
                           (__int64)(v183 - (_QWORD)v184) >> 2, v187, v186);
    v202 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v202 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v202, v201);
  }
  v203 = v338[1347];
  v204 = v338[1346];
  v205 = v338[1343];
  v206 = v338[1344];
  v67 = v206 == v205;
  v207 = (unsigned __int64)v204 + (_QWORD)v203 - 1;
  v208 = v207 >> 9;
  v209 = v207 & 0x1FF;
  v210 = (((char*)v206 - (char*)v205) << 6) - 1;
  v211 = *((_QWORD*)v205 + v208);
  if (v67) {
    v210 = 0;
  }
  v212 = *(__int64 (**)(void))(v211 + 8 * v209);
  v338[1347] = (__int64 (*)())((char*)v203 - 1);
  v338[1] = v212;
  if (v210 - ((unsigned __int64)v204 + (unsigned __int64)v203) + 1 >= 0x400) {
    v213 = *((_QWORD*)v206 - 1);
    if (v213 != 0) {
      v214 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v214 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v214, v213);
      v206 = v338[1344];
    }
    v338[1344] = (__int64 (*)())((char*)v206 - 8);
  }
  if (v184 == (char*)v183) {
    if (v183 != 0) {
      v221 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v221 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v221, v184);
    }
    goto LABEL_319;
  }
  v215 = v184;
  do {
    v217 = *v215;
    v218 = v215[1];
    v348_.v348 = GameData_1faa0c0;
    v348_.v349 = v9;
    v348_.v352 = &v348_.v348;
    v219 = game_map_BattleArea_Impl_Expand(v9, v185, v217, v218, v217, v218,
                                           (__int64)&v348_.v348);
    if (v348_.v352 == &v348_.v348) {
      v216 = 4;
    LABEL_304:
      ((__int64 (*)(__int64))(*v348_.v352)[v216])((__int64)v348_.v352);
      goto LABEL_305;
    }
    if (v348_.v352 != nullptr) {
      v216 = 5;
      goto LABEL_304;
    }
  LABEL_305:
    v215 += 4;
  } while ((v219 & 1 | (v215 == (char*)v183)) == 0);
  if (v184 != nullptr) {
    v220 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v220 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v220, v184);
  }
  if ((v219 & 1) != 0) {
    goto LABEL_406;
  }
LABEL_319:
  v222 = *(unsigned __int8*)(*GameData_212ce98[0] + 29);
  v223 = *(unsigned __int8*)(*GameData_212ce98[0] + 30);
  v341 = *(unsigned __int8*)(*GameData_212ce98[0] + 31);
  v344 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
  if (v222 > v341 || *(unsigned __int8*)(*GameData_212ce98[0] + 28) > v223) {
    v229 = 0;
    v228 = nullptr;
  }
  else {
    v228 = nullptr;
    v229 = 0;
    v230 = 0;
    do {
      v231 = v344;
      do {
        if (v229 < v230) {
          *(_BYTE*)v229 = v231;
          *(_BYTE*)(v229 + 1) = v222;
          *(_WORD*)(v229 + 2) = 0;
          v229 += 4LL;
        }
        else {
          v232 = v229 - (_QWORD)v228;
          v233 = (__int64)(v229 - (_QWORD)v228) >> 2;
          v234 = v233 + 1;
          if ((unsigned __int64)(v233 + 1) >> 62 != 0) {
            goto LABEL_473;
          }
          if ((__int64)(v230 - (_QWORD)v228) >> 1 > v234) {
            v234 = (__int64)(v230 - (_QWORD)v228) >> 1;
          }
          if (v230 - (unsigned __int64)v228 >= 0x7FFFFFFFFFFFFFFCLL) {
            v235 = 0x3FFFFFFFFFFFFFFFLL;
          }
          else {
            v235 = v234;
          }
          if (v235 >> 62 != 0) {
            goto LABEL_474;
          }
          v236 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v235, 16, 0);
          v237 = v236 + v232;
          v238 = v236 + v232 - 4 * v233;
          *(_BYTE*)v237 = v231;
          *(_BYTE*)(v237 + 1) = v222;
          *(_WORD*)(v237 + 2) = 0;
          if (v228 != (char*)v229) {
            v239 = v228;
            v240 = (_BYTE*)v238;
            do {
              *v240 = *v239;
              v240[1] = v239[1];
              v240[2] = v239[2];
              v241 = v239[3];
              v239 += 4;
              v240[3] = v241;
              v240 += 4;
            } while (v239 != (char*)v229);
          }
          v230 = v236 + 4 * v235;
          v229 = v237 + 4;
          if (v228 != nullptr) {
            v242 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v242 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v242, v228);
          }
          v228 = (char*)v238;
        }
        v67 = v231++ == v223;
      } while (!v67);
      v67 = v222++ == v341;
    } while (!v67);
  }
  v348_.v348 = (__int64 (**)(void))v9;
  if ((__int64)(v229 - (_QWORD)v228) >> 2 < 129) {
    v227 = 0;
  LABEL_351:
    BattleArea_8beda0_alt1(v228, (char*)v229, (__int64)&v348_.v348,
                           (__int64)(v229 - (_QWORD)v228) >> 2, nullptr, v227);
  }
  else {
    v225 = (__int64)(v229 - (_QWORD)v228) >> 2;
    while (1) {
      v226 = (char*)GameRoutine_1a09d20(4 * v225, GameData_212c060);
      if (v226 != nullptr) {
        break;
      }
      v227 = v225 >> 1;
      v71 = v225 > 1;
      v225 >>= 1;
      if (!v71) {
        goto LABEL_351;
      }
    }
    v243 = v226;
    BattleArea_8beda0_alt1(v228, (char*)v229, (__int64)&v348_.v348,
                           (__int64)(v229 - (_QWORD)v228) >> 2, v226, v225);
    v244 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v244 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v244, v243);
  }
  v245 = v228;
  if (v228 != (char*)v229) {
    while (1) {
      v249 = *(_BYTE*)(v9 + 112);
      v250 = *(_BYTE*)(v9 + 208);
      v251 = *v245;
      v252 = v245[1];
      v253 = *(_WORD*)(v9 + 248) & 0x10;
      v348_.v348 = GameData_1faa0c0;
      v348_.v349 = v9;
      v348_.v352 = &v348_.v348;
      if (v249 == v250 && v253 == 0) {
        v255 = v249;
      }
      else {
        v255 = 1;
      }
      v246 = game_map_BattleArea_Impl_Expand(v9, v255, v251, v252, v251, v252,
                                             (__int64)&v348_.v348);
      if (v348_.v352 == &v348_.v348) {
        v248 = 4;
      }
      else {
        if (v348_.v352 == nullptr) {
          goto LABEL_363;
        }
        v248 = 5;
      }
      ((__int64 (*)(__int64))(*v348_.v352)[v248])((__int64)v348_.v352);
    LABEL_363:
      v245 += 4;
      if ((v246 & 1 | (v245 == (char*)v229)) != 0) {
        goto LABEL_357;
      }
    }
  }
  v246 = 0;
LABEL_357:
  if (v228 != nullptr) {
    v247 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v247 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v247, v228);
  }
  if ((v246 & 1) == 0) {
    v64 = v334;
    v63 = *v335;
    goto LABEL_106;
  }
LABEL_406:
  *(_DWORD*)(v9 + 252) = -1027080192;
  if ((*(_BYTE*)(v9 + 248) & 2) != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21fde98) != 0) {
      Registration_a5aca0((__int64)&GameData_21fdd90);
      GameRoutine_2b0();
      __cxa_guard_release(&GameData_21fde98);
    }
    v275 = *(_DWORD*)(v9 + 36);
    v276 = *(_DWORD*)(v9 + 44);
    if (v275 <= v276) {
      v277 = *(_DWORD*)(v9 + 40);
      if (*(_DWORD*)(v9 + 32) <= v277) {
        do {
          if (*v331 <= v277) {
            v305 = *v331 - 1;
            HIDWORD(v306) = 0;
            *(float*)&v306 =
                (float)((float)((float)(v275 + 256) * 0x1.4000000000000p+2f) +
                        0x1.4000000000000p+1f) +
                -0x1.4000000000000p+10f;
            v345 = v306;
            do {
              LANES128(v307).n128_f32[0] =
                  (float)((float)((float)(v305 + 257) * 0x1.4000000000000p+2f) +
                          0x1.4000000000000p+1f) +
                  -0x1.4000000000000p+10f;
              LANES128(v308).n128_f32[0] = LANES128(v307).n128_f32[0];
              LANES128(v308).n128_u32[1] = 1128792064;
              LANES128(v307).n128_u32[1] = -1027080192;
              LANES128(v308).n128_u64[1] = v345;
              LANES128(v307).n128_u64[1] = v345;
              v346 = v307;
              v347 = v308;
              collision_670c60((void*)((__int64)&v348_.v348), &v347, &v346,
                               196867);
              if ((v348_.v355 & 1) != 0) {
                LODWORD(v20) = HIDWORD(v348_.v348);
                if (*(float*)v332 >= *((float*)&v348_.v348 + 1)) {
                  LODWORD(v20) = *v332;
                }
                *v332 = LODWORD(v20);
              }
              v277 = *(_DWORD*)(v9 + 40);
              ++v305;
            } while (v305 < v277);
            v276 = *(_DWORD*)(v9 + 44);
          }
          v71 = v275++ < v276;
        } while (v71);
      }
    }
  }
  v278 = *(_DWORD*)(v9 + 48);
  v279 = *(_DWORD*)(v9 + 52);
  *(_QWORD*)(v9 + 240) = 0;
  if (v278 >= 1 && v279 >= 1) {
    v281 = *(_DWORD*)(v9 + 32);
    v282 = *(_DWORD*)(v9 + 36);
    v283 = *(_DWORD*)(v9 + 40);
    v284 = *(_DWORD*)(v9 + 44);
    if (v282 <= v284 && v281 <= v283) {
      v286 = v281 + 32 * v282;
      v287 = -1;
      v288 = GameData_212cfb8[0];
      v289 = v283 - v281 + 1;
      v290 = *GameData_212cfb8[0];
      do {
        v291 = v286;
        v292 = v289;
        do {
          v293 = *(_QWORD*)(v290 + 16);
          if (v291 >= 0x400) {
            v294 = 0;
          }
          else {
            v294 = v291;
          }
          v295 = *(__int16*)(v293 + 2LL * (unsigned int)v294 + 4200);
          v296 = *(_QWORD*)(v293 + 8);
          if ((v295 < 0 || v296 == 0) &&
              ((v295 = *(__int16*)(v293 + 2 * v294 + 2152)) < 0 || v296 == 0)) {
            v304 = *(__int16*)(v293 + 104 + 2 * v294);
            if (v304 < 0) {
              goto LABEL_423;
            }
            v297 = v296 + 144LL * (unsigned int)v304;
            if (v297 == 0) {
              goto LABEL_423;
            }
          }
          else {
            v297 = v296 + 144LL * (unsigned int)v295;
            if (v297 == 0) {
              goto LABEL_423;
            }
          }
          v298 = (*(__int64 (**)(__int64, long double))(*(_QWORD*)v297 +
                                                        224LL))(v297, v20);
          v290 = *v288;
          if (v298 != 0) {
            v299 = *(unsigned __int16*)(v298 + 16);
            v300 = *(_BYTE**)(v298 + 320);
            if (*(_BYTE*)(v298 + 56) == 2) {
              v299 |= 0x10000u;
            }
            v301 = v299;
            if (v300 != nullptr) {
              if (*v300 != 0) {
                v301 = v299 | 0x20000;
              }
              else {
                v301 = v299;
              }
            }
            v302 = *(_BYTE**)(v298 + 328);
            if (v302 != nullptr && *v302 != 0) {
              v301 |= 0x40000u;
            }
            v303 = *(_BYTE**)(v298 + 336);
            if (v303 != nullptr && *v303 != 0) {
              v301 |= 0x80000u;
            }
            if (v287 < v301) {
              if (v300 != nullptr && *v300 != 0) {
                v299 |= 0x20000u;
              }
              if (v302 != nullptr && *v302 != 0) {
                v299 |= 0x40000u;
              }
              if (v303 != nullptr && *v303 != 0) {
                v299 |= 0x80000u;
              }
              v287 = v299;
              *(_QWORD*)(v348_.v356 + 240) = v298;
            }
          }
        LABEL_423:
          --v292;
          ++v291;
        } while (v292 != 0);
        v286 += 32;
        v67 = v282++ == v284;
      } while (!v67);
    }
  }
  return 1;
}

_QWORD* game_map_BattleArea_CreateBorder(__int64 a1, __int64 a2, __int64 a3,
                                         __int64 a4, __int64 a5, __int64 a6)
{

#pragma clang fp contract(off)
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 (***v13)();
  __int64 (**v14)();
  __int64 (***v15)();
  int* v16;
  _QWORD* result;
  float32x4_t v18;
  __int128 v19;
  __int128 v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  __int64 v26;
  int v27;
  __int64* v28;
  int v29;
  int v30;
  float v31;
  __int64 v32;
  unsigned int v33;
  unsigned int v34;
  unsigned __int64 v35;
  __int64 v36;
  int v37;
  unsigned int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  int v42;
  unsigned int v43;
  float32x4_t v44;
  unsigned int v45;
  float32x4_t v46;
  float32x4_t v47;
  int v48;
  unsigned int v49;
  float32x4_t v50;
  float32x4_t v51;
  unsigned int v52;
  float32x4_t v53;
  float32x4_t v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  bool v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  int v65;
  int v66;
  unsigned __int64 v67;
  int v68;
  unsigned int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  unsigned int v74;
  unsigned int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  bool v81;
  unsigned int v82;
  int v83;
  unsigned int v84;
  int v85;
  unsigned int v86;
  float32x4_t v87;
  float32x4_t v88;
  unsigned __int64 v89;
  float32x4_t v90;
  __int128 v91;
  __int128 v92;
  float32x4_t v93;
  unsigned __int64 v94;
  __int128 v95;
  unsigned __int64 v96;
  int v97;
  int v98;
  int v99;
  int v100;
  __int64 (**v101)();
  _BYTE v102[1024];
  float32x4_t v103;
  float32x4_t v104[2];

  v7 = (_QWORD*)GameData_21f8040;
  if (GameData_21f8040 != 0) {
    v8 = *(_QWORD*)(GameData_21f8040 + 16);
    v9 = *(_QWORD*)(GameData_21f8040 + 24);
    v10 = ((v9 - v8) << 9) - 1;
    if (v9 == v8) {
      v10 = 0;
    }
    v11 = *(_QWORD*)(GameData_21f8040 + 48) + *(_QWORD*)(GameData_21f8040 + 40);
    if (v10 == v11) {
      GameRoutine_9ba840_alt1((__int64*)(GameData_21f8040 + 8));
      v8 = v7[2];
      v11 = v7[6] + v7[5];
    }
    *(_BYTE*)(*(_QWORD*)(v8 + 8 * (v11 >> 12)) + (v11 & 0xFFF)) = 1;
    ++v7[6];
  }
  v101 = GameData_1faa140;
  v99 = 100;
  v100 = 100;
  v97 = -100;
  v98 = -100;
  memset(v102, 0, 1024, a4, a5, a6);
  v12 = fw_memory_g_heap_manager_ptr;
  v13 = (__int64 (***)(void))fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v14 = GameData_1faa1b0;
  v15 = v13;
  *v13 = GameData_1faa1b0;
  v13[1] = (__int64 (**)(void))&v100;
  v13[2] = (__int64 (**)(void))&v99;
  v13[3] = (__int64 (**)(void))&v98;
  v13[4] = (__int64 (**)(void))&v97;
  v13[5] = (__int64 (**)(void))&v101;
  v16 = *(int**)(a1 + 8);
  if (v16[13] * v16[12] >= 1) {
    game_map_BattleArea_CreateBorder_lambda0_Invoke(v13, v16 + 8);
    v16 = *(int**)(a1 + 8);
    v14 = *v15;
  }
  if (v16[37] * v16[36] >= 1) {
    ((void (*)(__int64 (***)(void), int*))v14[6])(v15, v16 + 32);
    v14 = *v15;
  }
  result = (_QWORD*)((__int64 (*)(__int64 (***)(void)))v14[5])(v15);
  v21 = v99;
  v22 = v97;
  if (v99 <= v97) {
    v23 = v98;
    if (v100 <= v98) {
      v65 = 32 * v99;
      do {
        v66 = v100;
        if (v100 <= v23) {
          HIDWORD(v67) = 0;
          v68 = 32 * v21;
          v69 = v100 + v65;
          *(float*)&v67 = (float)v21 * 0x1.4000000000000p+2f;
          v96 = v67;
          do {
            v70 = v66 + v68;
            if ((unsigned int)(v66 + v68) >= 0x400) {
              v70 = 0;
            }
            if ((char)v102[v70] >= 1) {
              v71 = v66;
              while (1) {
                v72 = v65 + v71;
                if ((unsigned int)(v65 + v71) >= 0x400) {
                  v72 = 0;
                }
                if ((char)v102[v72] < 1) {
                  break;
                }
                if (v23 + 1 == ++v71) {
                  v71 = v23 + 1;
                  break;
                }
              }
              v73 = v21;
              if (v21 <= v97) {
                v74 = v69;
                v73 = v21;
                while (1) {
                  v75 = v74 >= 0x400 ? 0 : v74;
                  if ((char)v102[v75] < 1) {
                    break;
                  }
                  ++v73;
                  v74 += 32;
                  if (v97 + 1 == v73) {
                    v73 = v97 + 1;
                    break;
                  }
                }
              }
              v76 = v71 - v66;
              v77 = v73 - v21;
              if (v76 > v77) {
                v78 = 1;
              }
              else {
                v78 = v77;
              }
              if (v76 <= v77) {
                v79 = 1;
              }
              else {
                v79 = v76;
              }
              v80 = v78 + v21;
              v81 = v78 < 1 || v79 < 1;
              if (!v81) {
                v82 = v69;
                v83 = v21;
                do {
                  v84 = v82;
                  v85 = v66;
                  do {
                    ++v85;
                    if (v84 >= 0x400) {
                      v86 = 0;
                    }
                    else {
                      v86 = v84;
                    }
                    ++v84;
                    v102[v86] = 0;
                  } while (v85 < v79 + v66);
                  ++v83;
                  v82 += 32;
                } while (v83 < v80);
              }
              result = (_QWORD*)GameData_21f8040;
              if (GameData_21f8040 != 0) {
                LANES128(v87).n128_u32[3] = 0;
                LANES128(v88).n128_f32[0] = (float)v66 * 0x1.4000000000000p+2f;
                LANES128(v88).n128_u32[1] = *(_DWORD*)(GameData_21f8040 + 104);
                LANES128(v87).n128_f32[0] =
                    (float)(v79 + v66) * 0x1.4000000000000p+2f;
                LANES128(v87).n128_u32[1] = *(_DWORD*)(GameData_21f8040 + 108);
                LANES128(v88).n128_u64[1] = v96;
                LANES128(v87).n128_f32[2] = (float)v80 * 0x1.4000000000000p+2f;
                v103 = v87;
                v104[0] = v88;
                result = GameRoutine_9b9cb0(GameData_21f8040, v104, &v103);
                v23 = v98;
              }
            }
            ++v69;
            v81 = v66++ < v23;
          } while (v81);
          v22 = v97;
        }
        v65 += 32;
        v81 = v21++ < v22;
      } while (v81);
    }
  }
  if ((*(_WORD*)(*(_QWORD*)(a1 + 8) + 248LL) & 7) == 0) {
    v24 = v99;
    if (v99 < v22 - 1) {
      v25 = 32 * v99;
      v26 = *GameData_212ce98[0];
      v27 = v98;
      v28 = GameData_212c930;
      do {
        v29 = v100;
        v30 = v24 + 1;
        if (v100 < v27 - 1) {
          LANES128(v18).n128_u32[1] = 0;
          v31 = (float)(v24 + 2);
          v32 = *v28;
          *(float*)&v33 = v31 * 0x1.4000000000000p+2f;
          LANES128(v18).n128_f32[0] = (float)v30 * 0x1.4000000000000p+2f;
          *(float*)&v34 = LANES128(v18).n128_f32[0] + 0x1.0000000000000p-1f;
          v94 = LANES128(v18).n128_u64[0];
          LANES128(v18).n128_u64[0] = v33;
          v93 = v18;
          LANES128(v18).n128_u64[0] = v34;
          HIDWORD(v35) = 0;
          *(float*)&v35 = *(float*)&v33 + -0x1.0000000000000p-1f;
          v89 = v35;
          v90 = v18;
          do {
            v36 = *(_QWORD*)(v26 + 72);
            v37 = v29 + 1;
            v38 = v25 + v29 + 33;
            if (v38 >= 0x400) {
              v38 = 0;
            }
            v39 = *(unsigned __int16*)(v36 + 8 + 2LL * v38);
            v40 = *(_QWORD*)(v32 + 64);
            v41 = *(_QWORD*)(*(_QWORD*)(v40 + 8 * v39) + 48LL);
            if (*(unsigned __int8*)(v41 + 33) == 255 &&
                *(unsigned __int8*)(v41 + 40) != 255) {
              v42 = v25 + v29;
              v43 = v25 + v29 + 32;
              if (v43 >= 0x400) {
                v43 = 0;
              }
              *(float*)&v19 = (float)v37 * 0x1.4000000000000p+2f;
              v95 = v19;
              if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v40 +
                                                            8LL *
                                                                *(unsigned __int16*)(v36 +
                                                                                     8 +
                                                                                     2LL *
                                                                                         v43)) +
                                                 48LL) +
                                      33LL) != 255) {
                LANES128(v18).n128_u32[1] = 0;
                result = (_QWORD*)GameData_21f8040;
                LANES128(v44).n128_u64[0] = (unsigned int)v19;
                LANES128(v44).n128_u64[1] = v94;
                LANES128(v18).n128_f32[0] =
                    *(float*)&v19 + 0x1.0000000000000p-1f;
                LANES128(v18).n128_u64[1] = LANES128(v93).n128_u64[0];
                v103 = v18;
                v104[0] = v44;
                if (GameData_21f8040 != 0) {
                  result = GameRoutine_9b9cb0(GameData_21f8040, v104, &v103);
                  v19 = v95;
                  v36 = *(_QWORD*)(v26 + 72);
                  v32 = *v28;
                }
                v40 = *(_QWORD*)(v32 + 64);
              }
              v45 = v42 + 34;
              if ((unsigned int)(v42 + 34) >= 0x400) {
                v45 = 0;
              }
              *(float*)&v20 = (float)(v29 + 2) * 0x1.4000000000000p+2f;
              if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v40 +
                                                            8LL *
                                                                *(unsigned __int16*)(v36 +
                                                                                     2LL *
                                                                                         v45 +
                                                                                     8)) +
                                                 48LL) +
                                      33LL) != 255) {
                LANES128(v46).n128_u32[1] = 0;
                result = (_QWORD*)GameData_21f8040;
                LANES128(v46).n128_f32[0] =
                    *(float*)&v20 + -0x1.0000000000000p-1f;
                LANES128(v18).n128_u64[1] = LANES128(v93).n128_u64[1];
                LANES128(v46).n128_u64[1] = v94;
                LANES128(v47).n128_u64[0] = (unsigned int)v20;
                LANES128(v47).n128_u64[1] = LANES128(v93).n128_u64[0];
                v103 = v47;
                v104[0] = v46;
                if (GameData_21f8040 != 0) {
                  v91 = v20;
                  result = GameRoutine_9b9cb0(GameData_21f8040, v104, &v103);
                  v20 = v91;
                  v19 = v95;
                  v36 = *(_QWORD*)(v26 + 72);
                  v32 = *v28;
                }
                v40 = *(_QWORD*)(v32 + 64);
              }
              v48 = v25 + v29;
              if ((unsigned int)(v48 + 1) < 0x400) {
                v49 = v48 + 1;
              }
              else {
                v49 = 0;
              }
              if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v40 +
                                                            8LL *
                                                                *(unsigned __int16*)(v36 +
                                                                                     2LL *
                                                                                         v49 +
                                                                                     8)) +
                                                 48LL) +
                                      33LL) != 255) {
                LANES128(v18).n128_u64[1] = LANES128(v90).n128_u64[1];
                result = (_QWORD*)GameData_21f8040;
                LANES128(v50).n128_u64[0] = (unsigned int)v19;
                LANES128(v50).n128_u64[1] = v94;
                LANES128(v51).n128_u64[0] = (unsigned int)v20;
                LANES128(v51).n128_u64[1] = LANES128(v90).n128_u64[0];
                v103 = v51;
                v104[0] = v50;
                if (GameData_21f8040 != 0) {
                  v92 = v20;
                  result = GameRoutine_9b9cb0(GameData_21f8040, v104, &v103);
                  v20 = v92;
                  v19 = v95;
                  v36 = *(_QWORD*)(v26 + 72);
                  v32 = *v28;
                }
              }
              v52 = v48 + 65;
              if ((unsigned int)(v48 + 65) >= 0x400) {
                v52 = 0;
              }
              if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v32 +
                                                                       64) +
                                                            8LL *
                                                                *(unsigned __int16*)(v36 +
                                                                                     2LL *
                                                                                         v52 +
                                                                                     8)) +
                                                 48LL) +
                                      33LL) != 255) {
                LANES128(v18).n128_u64[1] = LANES128(v93).n128_u64[1];
                result = (_QWORD*)GameData_21f8040;
                LANES128(v53).n128_u64[0] = (unsigned int)v19;
                LANES128(v53).n128_u64[1] = v89;
                LANES128(v54).n128_u64[0] = (unsigned int)v20;
                LANES128(v54).n128_u64[1] = LANES128(v93).n128_u64[0];
                v103 = v54;
                v104[0] = v53;
                if (GameData_21f8040 != 0) {
                  result = GameRoutine_9b9cb0(GameData_21f8040, v104, &v103);
                  v32 = *v28;
                }
              }
            }
            v27 = v98;
            v29 = v37;
          } while (v37 < v98 - 1);
          v22 = v97;
        }
        v25 += 32;
        v24 = v30;
      } while (v30 < v22 - 1);
    }
  }
  v55 = GameData_21f8040;
  if (GameData_21f8040 != 0) {
    v57 = *(_QWORD*)(GameData_21f8040 + 16);
    v56 = *(_QWORD*)(GameData_21f8040 + 24);
    v58 = v56 - v57;
    v59 = v56 == v57;
    v61 = *(_QWORD*)(GameData_21f8040 + 40);
    v60 = *(_QWORD*)(GameData_21f8040 + 48);
    v62 = (v58 << 9) - 1;
    if (v59) {
      v62 = 0;
    }
    *(_QWORD*)(GameData_21f8040 + 48) = v60 - 1;
    if ((unsigned __int64)(v62 - (v60 + v61) + 1) >= 0x2000) {
      v63 = *(_QWORD*)(v56 - 8);
      if (v63 != 0) {
        v64 = 128;
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
          v64 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)v12 + v64, v63);
        v56 = *(_QWORD*)(v55 + 24);
      }
      *(_QWORD*)(v55 + 24) = v56 - 8;
    }
  }
  return result;
}

__int64 BattleArea_8bc350()
{
  _QWORD* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v0 = (_QWORD*)GameData_21f8040;
  if (GameData_21f8040 != 0) {
    v1 = *(_QWORD*)(GameData_21f8040 + 16);
    v2 = *(_QWORD*)(GameData_21f8040 + 24);
    v3 = ((v2 - v1) << 9) - 1;
    if (v2 == v1) {
      v3 = 0;
    }
    v4 = *(_QWORD*)(GameData_21f8040 + 48) + *(_QWORD*)(GameData_21f8040 + 40);
    if (v3 == v4) {
      GameRoutine_9ba840(GameData_21f8040 + 8);
      v1 = v0[2];
      v4 = v0[6] + v0[5];
    }
    *(_BYTE*)(*(_QWORD*)(v1 + 8 * (v4 >> 12)) + (v4 & 0xFFF)) = 1;
    result = GameData_21f8040;
    ++v0[6];
    if (result != 0) {
      result = Impl_9baec0();
      v6 = GameData_21f8040;
      if (GameData_21f8040 != 0) {
        v8 = *(_QWORD*)(GameData_21f8040 + 16);
        v7 = *(_QWORD*)(GameData_21f8040 + 24);
        v9 = v7 - v8;
        v10 = v7 == v8;
        v12 = *(_QWORD*)(GameData_21f8040 + 40);
        v11 = *(_QWORD*)(GameData_21f8040 + 48);
        v13 = (v9 << 9) - 1;
        if (v10) {
          v13 = 0;
        }
        *(_QWORD*)(GameData_21f8040 + 48) = v11 - 1;
        if ((unsigned __int64)(v13 - (v11 + v12) + 1) >= 0x2000) {
          if (*(_QWORD*)(v7 - 8) != 0) {
            v14 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v14 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v14);
            v7 = *(_QWORD*)(v6 + 24);
          }
          *(_QWORD*)(v6 + 24) = v7 - 8;
        }
      }
    }
  }
  return result;
}

__int64 BattleArea_8bc4c0(__int64 a1, __int64 a2)
{
  __int64 v2;
  int v5;
  int v6;
  int v7;
  __int64 v8;
  int v9;
  __int64 v10;
  _BOOL4 v11;
  int v12;
  int v13;
  __int64 v14;
  int v15;
  __int64 result;
  int v17;
  int v18;
  int v19;
  _BOOL4 v20;

  v2 = *(_QWORD*)(a2 + 56);
  v20 = v2 != 0 && *(unsigned __int8*)(v2 + 104) == 6;
  v5 = *(_DWORD*)(a2 + 76);
  v6 = *(_DWORD*)(a2 + 88);
  v19 = *(_DWORD*)(a2 + 72);
  v7 = BattleArea_8bc6c0_alt1(*(_QWORD*)(a2 + 24));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f2040,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21f2040) != 0) {
    GameData_21f2038 = (__int64)&GameData_1af8f85;
    GameData_21f2030 = game_HashString(&GameData_1af8f85);
    __cxa_guard_release(&GameData_21f2040);
  }
  if (game_GameModeData_instance_ == 0 ||
      (v8 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21f2030)) ==
          0) {
    v9 = 0;
    v10 = *(_QWORD*)(a2 + 56);
    if (v10 == 0) {
      goto LABEL_8;
    }
  LABEL_10:
    v11 = *(unsigned __int8*)(v10 + 104) == 6;
    goto LABEL_11;
  }
  v9 = *(_DWORD*)(v8 + 32);
  v10 = *(_QWORD*)(a2 + 56);
  if (v10 != 0) {
    goto LABEL_10;
  }
LABEL_8:
  v11 = false;
LABEL_11:
  v12 = *(_DWORD*)(a2 + 88);
  v13 = BattleArea_8bc800_alt1(*(_QWORD*)(a2 + 24));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f2058,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21f2058) != 0) {
    GameData_21f2050 = (__int64)&GameData_1ab7e7c;
    GameData_21f2048 = game_HashString(&GameData_1ab7e7c);
    __cxa_guard_release(&GameData_21f2058);
  }
  if (game_GameModeData_instance_ == 0 ||
      (v14 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21f2048)) ==
          0) {
    v15 = 0;
    result = *(_QWORD*)(a2 + 24);
    if (result == 0) {
      goto LABEL_18;
    }
    goto LABEL_17;
  }
  v15 = *(_DWORD*)(v14 + 32);
  result = *(_QWORD*)(a2 + 24);
  if (result != 0) {
  LABEL_17:
    result = game_Unit_GetJobUnknown30();
  }
LABEL_18:
  v17 = v11 + v12;
  *(_BYTE*)(a1 + 80) = result;
  if (v11 + v12 <= v13) {
    v17 = v13;
  }
  v18 = v20 + v6;
  if (v17 <= v15) {
    v17 = v15;
  }
  *(_DWORD*)(a1 + 16) = v19;
  *(_DWORD*)(a1 + 20) = v5;
  *(_DWORD*)(a1 + 32) = v17;
  if (v18 <= v7) {
    v18 = v7;
  }
  if (v18 <= v9) {
    v18 = v9;
  }
  *(_DWORD*)(a1 + 24) = v6;
  *(_DWORD*)(a1 + 28) = v18;
  return result;
}

__int64 BattleArea_8bc6c0(__int64 a1)
{
  __int64 v1;
  unsigned int v2;
  unsigned int v3;
  __int64 v4;
  int v5;
  __int64 v6;

  if (a1 != 0 && (v1 = game_Unit_GetJob(a1)) != 0) {
    if (*(unsigned __int8*)(v1 + 417) <=
        (unsigned int)*(unsigned __int8*)(v1 + 418)) {
      v2 = *(unsigned __int8*)(v1 + 418);
    }
    else {
      v2 = *(unsigned __int8*)(v1 + 417);
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f2040,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21f2040) != 0) {
      GameData_21f2038 = (__int64)&GameData_1af8f85;
      GameData_21f2030 = game_HashString(&GameData_1af8f85);
      __cxa_guard_release(&GameData_21f2040);
    }
    v3 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v4 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21f2030);
      if (v4 != 0) {
        v3 = *(_DWORD*)(v4 + 32);
      }
      else {
        v3 = 0;
      }
    }
    if ((int)v2 <= (int)v3) {
      return v3;
    }
    else {
      return v2;
    }
  }
  else {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f2040,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21f2040) != 0) {
      GameData_21f2038 = (__int64)&GameData_1af8f85;
      GameData_21f2030 = game_HashString(&GameData_1af8f85);
      __cxa_guard_release(&GameData_21f2040);
    }
    v5 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v6 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21f2030);
      if (v6 != 0) {
        v5 = *(_DWORD*)(v6 + 32);
      }
      else {
        v5 = 0;
      }
    }
    return v5 & (unsigned int)~(v5 >> 31);
  }
}

__int64 BattleArea_8bc800(__int64 a1)
{
  __int64 v1;
  unsigned int v2;
  unsigned int v3;
  __int64 v4;
  int v5;
  __int64 v6;

  if (a1 != 0 && (v1 = game_Unit_GetJob(a1)) != 0) {
    if (*(unsigned __int8*)(v1 + 417) <=
        (unsigned int)*(unsigned __int8*)(v1 + 419)) {
      v2 = *(unsigned __int8*)(v1 + 419);
    }
    else {
      v2 = *(unsigned __int8*)(v1 + 417);
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f2040,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21f2040) != 0) {
      GameData_21f2038 = (__int64)&GameData_1af8f85;
      GameData_21f2030 = game_HashString(&GameData_1af8f85);
      __cxa_guard_release(&GameData_21f2040);
    }
    v3 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v4 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21f2030);
      if (v4 != 0) {
        v3 = *(_DWORD*)(v4 + 32);
      }
      else {
        v3 = 0;
      }
    }
    if ((int)v2 <= (int)v3) {
      return v3;
    }
    else {
      return v2;
    }
  }
  else {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f2058,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21f2058) != 0) {
      GameData_21f2050 = (__int64)&GameData_1ab7e7c;
      GameData_21f2048 = game_HashString(&GameData_1ab7e7c);
      __cxa_guard_release(&GameData_21f2058);
    }
    v5 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v6 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21f2048);
      if (v6 != 0) {
        v5 = *(_DWORD*)(v6 + 32);
      }
      else {
        v5 = 0;
      }
    }
    return v5 & (unsigned int)~(v5 >> 31);
  }
}

__int64 game_map_BattleArea_Impl_Expand(__int64 a1, unsigned __int8 a2, int a3,
                                        int a4, int a5, int a6, __int64 a7)
{
  __int64 v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  unsigned int v19;
  __int64 v20;
  bool v21;
  __int64 v22;
  int v23;
  __int64 v24;
  _QWORD* v25;
  _DWORD* v26;
  _QWORD* v27;
  int v28;
  int v29;
  int v30;
  int v31;
  char v33;
  int v34;
  int v35;
  __int64 v36;
  int v37;
  unsigned int v38;
  __int64 v39;
  char v40;
  char v41;
  char v42;
  int v43;
  int v44;
  int v45;
  int v46;
  __int64 v47;
  int v48;
  int v49;
  int v50;
  __int64 v53;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  unsigned int v61;
  int v62;
  int v63;
  int v64;
  __int64 v65;
  unsigned __int8 v66;
  int v67;
  int v68;
  int v69;
  int v70;

  v9 = a1 + 256;
  if (a5 >= a3) {
    v10 = a3;
  }
  else {
    v10 = a5;
  }
  if (a5 <= a3) {
    v11 = a3;
  }
  else {
    v11 = a5;
  }
  v12 = a2;
  v13 = *GameData_212ce98[0];
  if (a6 >= a4) {
    v14 = a4;
  }
  else {
    v14 = a6;
  }
  if (a6 <= a4) {
    v15 = a4;
  }
  else {
    v15 = a6;
  }
  v16 = 32 * v14;
  v17 = v14;
LABEL_14:
  if (v13 != 0 &&
      *(unsigned __int8*)(v13 + 27) >
          (unsigned int)(unsigned __int8)(v17 - *(_BYTE*)(v13 + 25))) {
    v18 = v10;
    while (*(unsigned __int8*)(v13 + 26) >
           (unsigned int)(unsigned __int8)(v18 - *(_BYTE*)(v13 + 24))) {
      v19 = v16 + v18;
      if (((*(_DWORD*)(v9 + 4LL * ((v16 + v18) >> 5)) >> v18) & 1) != 0) {
        break;
      }
      if (v19 >= 0x400) {
        v19 = 0;
      }
      v20 = *(_QWORD*)(*(_QWORD*)(*GameData_212c930 + 64) +
                       8LL * *(unsigned __int16*)(*(_QWORD*)(v13 + 72) +
                                                  2LL * v19 + 8));
      if (v20 == 0 ||
          *(unsigned __int8*)(*(_QWORD*)(v20 + 48) + v12 + 32) == 255) {
        break;
      }
      if (v11 + 1 == ++v18) {
        v16 += 32;
        v21 = v17++ == v15;
        if (!v21) {
          goto LABEL_14;
        }
        v22 = 0;
        v63 = v10;
        v64 = 0;
        v58 = v11;
        v59 = v15;
        v56 = v10;
        v57 = v14;
        v61 = v14;
        v62 = v11;
        v60 = v15;
        do {
          v69 = v14;
          v70 = v10;
          v67 = v15;
          v68 = v11;
          v65 = v22 + 1;
          do {
            v24 = *(_QWORD*)(a1 + 16);
            v66 = a2;
            if (v24 == 0) {
              break;
            }
            v25 = (_QWORD*)fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
            v26 = (_DWORD*)(v24 + 16 * v22);
            v27 = v25;
            *v25 = GameData_1fa9ea0;
            v25[1] = &v70;
            v25[2] = &v69;
            v25[3] = &v68;
            v25[4] = &v67;
            v25[5] = a1;
            v25[6] = &v66;
            v28 = *v26 + v70;
            v29 = v26[1] + v69;
            v30 = v26[2] + v68;
            v31 = v26[3] + v67;
            if (v29 <= v31 && v28 <= v30) {
              v34 = 32 * v29;
              v35 = v29;
              v36 = *GameData_212ce98[0];
            LABEL_38:
              if (v36 != 0 &&
                  *(unsigned __int8*)(v36 + 27) >
                      (unsigned int)(unsigned __int8)(v35 -
                                                      *(_BYTE*)(v36 + 25))) {
                v37 = v28;
                while (*(unsigned __int8*)(v36 + 26) >
                       (unsigned int)(unsigned __int8)(v37 -
                                                       *(_BYTE*)(v36 + 24))) {
                  v38 = v34 + v37;
                  if (((*(_DWORD*)(v9 + 4LL * ((v34 + v37) >> 5)) >> v37) &
                       1) != 0) {
                    break;
                  }
                  if (v38 >= 0x400) {
                    v38 = 0;
                  }
                  v39 = *(
                      _QWORD*)(*(_QWORD*)(*GameData_212c930 + 64) +
                               8LL * *(unsigned __int16*)(*(_QWORD*)(v36 + 72) +
                                                          2LL * v38 + 8));
                  if (v39 == 0 || *(unsigned __int8*)(*(_QWORD*)(v39 + 48) +
                                                      v12 + 32) == 255) {
                    break;
                  }
                  if (v30 + 1 == ++v37) {
                    v34 += 32;
                    v21 = v35++ == v31;
                    if (v21) {
                      goto LABEL_36;
                    }
                    goto LABEL_38;
                  }
                }
              }
              v33 = 0;
            }
            else {
            LABEL_36:
              v33 = 1;
              v69 = v29;
              v70 = v28;
              v67 = v31;
              v68 = v30;
            }
            v40 = game_map_BattleArea_Impl_Expand_closure_Invoke_alt1(
                v25, v24 + 16 * ((v22 + 1) & 3));
            v41 = (*(__int64 (**)(_QWORD*, __int64))(*v27 + 48LL))(
                v27, v24 + 16 * (v22 ^ 2));
            v42 = (*(__int64 (**)(_QWORD*, __int64))(*v27 + 48LL))(
                v27, v24 + 16LL * (((_BYTE)v22 - 1) & 3));
            (*(void (**)(_QWORD*))(*v27 + 40LL))(v27);
            if ((v33 & 1) == 0 && (v40 & 1) == 0 && (v41 & 1) == 0 &&
                (v42 & 1) == 0) {
              break;
            }
            v43 = v68 - v70 + 1;
            v44 = v67 - v69 + 1;
            v45 = v44 >= v43 ? v68 - v70 + 1 : v67 - v69 + 1;
            if (v45 > *(_DWORD*)(a1 + 12)) {
              break;
            }
            if (v43 <= v44) {
              v46 = v67 - v69 + 1;
            }
            else {
              v46 = v68 - v70 + 1;
            }
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f2070,
                                      memory_order_acquire) &
                 1) == 0 &&
                (unsigned int)__cxa_guard_acquire(&GameData_21f2070) != 0) {
              GameData_21f2068 = (__int64)&GameData_1a85672;
              GameData_21f2060 = game_HashString(&GameData_1a85672);
              __cxa_guard_release(&GameData_21f2070);
            }
            v23 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v47 = game_GameVariableTable_Find(
                  *(_QWORD*)(game_GameModeData_instance_ + 48),
                  &GameData_21f2060);
              if (v47 != 0) {
                v23 = *(_DWORD*)(v47 + 32);
              }
              else {
                v23 = 0;
              }
            }
          } while (v46 < v23);
          v48 = v68 - v70 + 1;
          v49 = v67 - v69 + 1;
          if (v49 >= v48) {
            v50 = v68 - v70 + 1;
          }
          else {
            v50 = v67 - v69 + 1;
          }
          if (v48 <= v49) {
            v48 = v67 - v69 + 1;
          }
          if (*(_DWORD*)(a1 + 8) <= v50 && *(_DWORD*)(a1 + 12) <= v48 &&
              v50 > v64) {
            v56 = v70;
            v57 = v69;
            v58 = v68;
            v59 = v67;
            v64 = v50;
          }
          ++v22;
          v11 = v62;
          v10 = v63;
          v15 = v60;
          v14 = v61;
        } while (v65 != 4);
        if (v64 > 0) {
          v69 = v57;
          v70 = v56;
          v53 = *(_QWORD*)(a7 + 32);
          v67 = v59;
          v68 = v58;
          if (v53 == 0) {
            GameRoutine_60a310(0, v61);
          }
          (*(void (**)(__int64, int*, int*, int*, int*))(*(_QWORD*)v53 + 48LL))(
              v53, &v70, &v69, &v68, &v67);
          return 1;
        }
        return 0;
      }
    }
  }
  return 0;
}

void BattleArea_8bd540(__int64 a1, char a2)
{
  int v2;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v12;
  bool v13;
  bool v14;
  float v16;
  float v17;
  float v18;
  float v19;
  __int128 v20;
  __int128 v21;
  float v22;
  float v23;
  __int128 v24;
  float v25;

  v2 = *(_DWORD*)a1;
  if ((a2 & 1) == 0) {
    v6 = *(_DWORD*)(a1 + 4);
    v7 = *(_DWORD*)(a1 + 8);
    v8 = *(_DWORD*)(a1 + 12);
  LABEL_27:
    *(float*)(a1 + 48) =
        (float)((float)((float)((float)((float)(v2 + 256) * 5.0f) + 2.5f) +
                        -0x1.4000000000000p+10f) +
                (float)((float)((float)((float)(v7 + 256) * 5.0f) + 2.5f) +
                        -0x1.4000000000000p+10f)) *
        0.5f;
    v19 = (float)((float)((float)((float)((float)(v6 + 256) * 5.0f) + 2.5f) +
                          -0x1.4000000000000p+10f) +
                  (float)((float)((float)((float)(v8 + 256) * 5.0f) + 2.5f) +
                          -0x1.4000000000000p+10f)) *
          0.5f;
    v20 = *(_OWORD*)(a1 + 48);
    *(_QWORD*)&v21 = *(_QWORD*)(a1 + 48);
    *((_QWORD*)&v21 + 1) = LODWORD(v19);
    *(_OWORD*)(a1 + 48) = v21;
    if (*GameData_212ce80[0] != 0) {
      v22 = Height_7c4d10(*(_QWORD*)(*GameData_212ce80[0] + 61456),
                          *(float*)&v20, v19);
    }
    else {
      v22 = 0.0f;
    }
    *(float*)(a1 + 52) = v22;
    v23 = (float)(COERCE_FLOAT(*(_QWORD*)(a1 + 56)) + 0x1.4000000000000p+10f) *
          0x1.99999a0000000p-3f;
    *(_DWORD*)(a1 + 16) =
        (int)(float)((float)(COERCE_FLOAT(*(_OWORD*)(a1 + 48)) +
                             0x1.4000000000000p+10f) *
                     0x1.99999a0000000p-3f) -
        256;
    *(_DWORD*)(a1 + 20) = (int)v23 - 256;
    return;
  }
  v5 = *(_DWORD*)(a1 + 16);
  v4 = *(_DWORD*)(a1 + 20);
  v6 = *(_DWORD*)(a1 + 4);
  v7 = *(_DWORD*)(a1 + 8);
  v8 = *(_DWORD*)(a1 + 12);
  if (v5 < v2 || v4 < v6 || v5 > v7 || v4 > v8) {
    goto LABEL_27;
  }
  v12 = *(_DWORD*)(a1 + 24);
  v13 = v12 + v5 <= v2 || v12 + v4 <= v6;
  v14 = !v13 && v12 + v5 - 1 <= v7;
  if (!v14 || v12 + v4 - 1 > v8) {
    goto LABEL_27;
  }
  v16 = (float)(v12 + 2 * v5) * 2.5f;
  v17 = (float)(v12 + 2 * v4) * 2.5f;
  if (GameData_21ca2e8 != 0) {
    v25 = (float)(v12 + 2 * v4) * 2.5f;
    v18 = Height_7c4d10(*(_QWORD*)(GameData_21ca2e8 + 61456),
                        (float)(v12 + 2 * v5) * 2.5f, v17);
    v17 = v25;
  }
  else {
    v18 = 0.0f;
  }
  *(float*)(a1 + 48) = v16;
  *(float*)(a1 + 52) = v18;
  v24 = *(_OWORD*)(a1 + 48);
  *((_QWORD*)&v24 + 1) = LODWORD(v17);
  *(_OWORD*)(a1 + 48) = v24;
}

__int64 game_map_BattleArea_Impl_Expand_closure_Invoke(__int64 a1, _DWORD* a2)
{
  int* v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int* v9;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  __int64 v17;

  v2 = *(int**)(a1 + 8);
  v3 = a2[2];
  v4 = *a2 + *v2;
  v5 = a2[1] + **(_DWORD**)(a1 + 16);
  v6 = **(_DWORD**)(a1 + 24);
  v7 = v3 + v6;
  v8 = a2[3] + **(_DWORD**)(a1 + 32);
  if (v5 <= v8 && v4 <= v7) {
    if (GameData_21ca300 != 0) {
      v11 = v3 + v6;
      v12 = 32 * v5;
      v13 = a2[1] + **(_DWORD**)(a1 + 16);
      v14 = v11 + 1;
    LABEL_6:
      v15 = *a2 + *v2;
      if (*(unsigned __int8*)(GameData_21ca300 + 27) >
          (unsigned int)(unsigned __int8)(v13 -
                                          *(_BYTE*)(GameData_21ca300 + 25))) {
        while (
            *(unsigned __int8*)(GameData_21ca300 + 26) >
            (unsigned int)(unsigned __int8)(v15 -
                                            *(_BYTE*)(GameData_21ca300 + 24))) {
          v16 = v12 + v15;
          if (((*(_DWORD*)(*(_QWORD*)(a1 + 40) + 256LL +
                           4LL * ((v12 + v15) >> 5)) >>
                v15) &
               1) != 0) {
            break;
          }
          if (v16 >= 0x400) {
            v16 = 0;
          }
          v17 = *(
              _QWORD*)(*(_QWORD*)(*GameData_212c930 + 64) +
                       8LL * *(unsigned __int16*)(*(_QWORD*)(GameData_21ca300 +
                                                             72) +
                                                  2LL * v16 + 8));
          if (v17 == 0 || *(unsigned __int8*)(*(_QWORD*)(v17 + 48) +
                                              **(unsigned __int8**)(a1 + 48) +
                                              32LL) == 255) {
            break;
          }
          if (v14 == ++v15) {
            v12 += 32;
            if (v13++ == v8) {
              goto LABEL_3;
            }
            goto LABEL_6;
          }
        }
      }
    }
    return 0;
  }
  else {
  LABEL_3:
    *v2 = v4;
    **(_DWORD**)(a1 + 16) = v5;
    **(_DWORD**)(a1 + 24) = v7;
    v9 = *(int**)(a1 + 32);
    *v9 = v8;
    return 1;
  }
}

float32x4_t game_map_BattleArea_Impl_OpenImpl_closure_Invoke(
    __int64 a1, unsigned __int32* a2, unsigned __int32* a3,
    unsigned __int32* a4, unsigned __int32* a5, double a6, double a7,
    long double a8, double a9, long double a10, long double a11)
{

#pragma clang fp contract(off)
  unsigned __int32 v11;
  unsigned __int32 v12;
  unsigned __int32 v13;
  unsigned __int32 v14;
  float32x2_t* v15;

  v11 = *a2;
  v12 = *a3;
  v13 = *a4;
  v14 = *a5;
  v15 = *(float32x2_t**)(a1 + 8);
  LANES64(v15[4]).n64_u32[0] = *a2;
  LANES64(v15[4]).n64_u32[1] = v12;
  LANES64(v15[5]).n64_u32[0] = v13;
  LANES64(v15[5]).n64_u32[1] = v14;
  LANES64(v15[16]).n64_u32[0] = v11;
  LANES64(v15[16]).n64_u32[1] = v12;
  LANES64(v15[17]).n64_u32[0] = v13;
  LANES64(v15[17]).n64_u32[1] = v14;
  return GameRoutine_8bce30(v15, a6, a7, a8, a9, a10, a11);
}

__int64 game_map_BattleArea_Impl_TrySplit_closure_Invoke(__int64 result,
                                                         _DWORD* a2, int* a3,
                                                         int* a4, int* a5)
{
  int v5;
  int v6;
  int v7;
  _DWORD* v8;

  v5 = *a3;
  v6 = *a4;
  v7 = *a5;
  v8 = *(_DWORD**)(result + 8);
  v8[8] = *a2;
  v8[9] = v5;
  v8[10] = v6;
  v8[11] = v7;
  return result;
}

__int64 game_map_BattleArea_Impl_TrySplit_closure0_Invoke(__int64 result,
                                                          _DWORD* a2, int* a3,
                                                          int* a4, int* a5)
{
  int v5;
  int v6;
  int v7;
  _DWORD* v8;

  v5 = *a3;
  v6 = *a4;
  v7 = *a5;
  v8 = *(_DWORD**)(result + 8);
  v8[32] = *a2;
  v8[33] = v5;
  v8[34] = v6;
  v8[35] = v7;
  return result;
}

float32x4_t game_map_BattleArea_Impl_OpenPos_closure_Invoke(
    __int64 a1, unsigned __int32* a2, unsigned __int32* a3,
    unsigned __int32* a4, unsigned __int32* a5, double a6, double a7,
    long double a8, double a9, long double a10, long double a11)
{

#pragma clang fp contract(off)
  unsigned __int32 v11;
  unsigned __int32 v12;
  unsigned __int32 v13;
  unsigned __int32 v14;
  float32x2_t* v15;

  v11 = *a2;
  v12 = *a3;
  v13 = *a4;
  v14 = *a5;
  v15 = *(float32x2_t**)(a1 + 8);
  LANES64(v15[4]).n64_u32[0] = *a2;
  LANES64(v15[4]).n64_u32[1] = v12;
  LANES64(v15[5]).n64_u32[0] = v13;
  LANES64(v15[5]).n64_u32[1] = v14;
  LANES64(v15[16]).n64_u32[0] = v11;
  LANES64(v15[16]).n64_u32[1] = v12;
  LANES64(v15[17]).n64_u32[0] = v13;
  LANES64(v15[17]).n64_u32[1] = v14;
  return GameRoutine_8bce30(v15, a6, a7, a8, a9, a10, a11);
}

char* BattleArea_8bde20(char* result, char* a2, _DWORD* a3, unsigned __int64 a4,
                        char* a5, __int64 a6)
{
  int v6;
  int v7;
  unsigned int v8;
  int v9;
  int v10;
  int v11;
  __int64 v12;
  int v13;
  int v14;
  int v15;
  int v16;
  unsigned int v17;
  int v18;
  unsigned int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  char* v24;
  __int64 v25;
  char* v26;
  char* v27;
  char* v28;
  int v29;
  int v30;
  int v31;
  int v32;
  __int64 v33;
  unsigned int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  unsigned int v39;
  int v40;
  unsigned int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  __int64 v47;
  char* v48;
  int v49;
  int v50;
  int v51;
  int v52;
  __int64 v53;
  int v54;
  int v55;
  int v56;
  unsigned int v57;
  unsigned int v58;
  int v59;
  int v60;
  int v61;
  unsigned __int64 v62;
  unsigned __int64 v64;
  char* v65;
  char* v69;
  char* v72;
  char* v73;
  char* v74;
  char* v75;
  int v76;
  int v77;
  unsigned int v78;
  int v79;
  int v80;
  int v81;
  __int64 v82;
  int v83;
  int v84;
  int v85;
  int v86;
  unsigned int v87;
  int v88;
  unsigned int v89;
  int v90;
  int v91;
  int v92;
  unsigned int v93;
  bool v94;
  char* v95;
  __int64 v96;
  int v97;
  __int64 v98;
  int v99;
  int v100;

  if (a4 >= 2) {
    if (a4 == 2) {
      v6 = *(a2 - 4);
      v7 = *(a2 - 3);
      v8 = v6 + 32 * v7;
      v9 = a3[2];
      v10 = a3[3];
      if (v8 >= 0x400) {
        v8 = 0;
      }
      v11 = v9 - v6;
      v12 = *(_QWORD*)(*(_QWORD*)a3 + 8LL) + 64LL;
      if (v11 < 0) {
        v11 = -v11;
      }
      v13 = v10 - v7;
      v14 = *(unsigned __int8*)(v12 + v8);
      if (v13 < 0) {
        v13 = -v13;
      }
      v15 = v11 + (v14 << 16);
      v16 = result[1];
      v17 = v15 + v13;
      v18 = *result;
      v19 = v18 + 32 * v16;
      if (v19 >= 0x400) {
        v19 = 0;
      }
      v20 = v9 - v18;
      v21 = *(unsigned __int8*)(v12 + v19);
      if (v20 < 0) {
        v20 = -v20;
      }
      v22 = v10 - v16;
      if (v22 < 0) {
        v22 = -v22;
      }
      if (v17 < v22 + v20 + (v21 << 16)) {
        v23 = *(_DWORD*)result;
        *(_DWORD*)result = *((_DWORD*)a2 - 1);
        *((_DWORD*)a2 - 1) = v23;
      }
    }
    else if ((__int64)a4 > 128) {
      v62 = a4 >> 1;
      v64 = a4 - (a4 >> 1);
      if ((__int64)a4 <= a6) {
        v69 = result;
        v72 = a5;
        BattleArea_8be220(result, &result[4 * v62], a3, a4 >> 1, a5);
        v73 = &v72[4 * v62];
        result = BattleArea_8be220(&v69[4 * v62], a2, a3, v64, v73);
        v74 = &v72[4 * a4];
        v75 = v73;
        while (v75 != v74) {
          v76 = *v75;
          v77 = v75[1];
          v78 = v76 + 32 * v77;
          v79 = a3[2];
          v80 = a3[3];
          if (v78 >= 0x400) {
            v78 = 0;
          }
          v81 = v79 - v76;
          v82 = *(_QWORD*)(*(_QWORD*)a3 + 8LL) + 64LL;
          if (v81 < 0) {
            v81 = -v81;
          }
          v83 = v80 - v77;
          v84 = *(unsigned __int8*)(v82 + v78);
          if (v83 < 0) {
            v83 = -v83;
          }
          v85 = v81 + (v84 << 16);
          v86 = v72[1];
          v87 = v85 + v83;
          v88 = *v72;
          v89 = v88 + 32 * v86;
          if (v89 >= 0x400) {
            v89 = 0;
          }
          v90 = v79 - v88;
          v91 = *(unsigned __int8*)(v82 + v89);
          if (v90 < 0) {
            v90 = -v90;
          }
          v92 = v80 - v86;
          if (v92 < 0) {
            v92 = -v92;
          }
          v93 = v92 + v90 + (v91 << 16);
          v94 = v87 >= v93;
          if (v87 >= v93) {
            v95 = v72;
          }
          else {
            v95 = v75;
          }
          if (v94) {
            v96 = 4;
          }
          else {
            v96 = 0;
          }
          v97 = *(_DWORD*)v95;
          v72 += v96;
          if (v94) {
            v98 = 0;
          }
          else {
            v98 = 4;
          }
          v75 += v98;
          *(_DWORD*)v69 = v97;
          v69 += 4;
          if (v72 == v73) {
            while (v75 != v74) {
              v100 = *(_DWORD*)v75;
              v75 += 4;
              *(_DWORD*)v69 = v100;
              v69 += 4;
            }
            return result;
          }
        }
        while (v72 != v73) {
          v99 = *(_DWORD*)v72;
          v72 += 4;
          *(_DWORD*)v69 = v99;
          v69 += 4;
        }
      }
      else {
        v65 = result;
        BattleArea_8bde20(result, &result[4 * v62], a3, a4 >> 1, a5, a6);
        BattleArea_8bde20(&v65[4 * v62], a2, a3, v64, a5, a6);
        return BattleArea_8be740(v65, &v65[4 * v62], a2, a3, v62, v64, a5, a6);
      }
    }
    else if (result != a2) {
      v24 = result + 4;
      if (result + 4 != a2) {
        v25 = 0;
        v26 = result;
        do {
          v28 = v24;
          v29 = v26[4];
          v30 = v26[5];
          v31 = a3[2];
          v32 = a3[3];
          v33 = *(_QWORD*)(*(_QWORD*)a3 + 8LL) + 64LL;
          v34 = v29 + 32 * v30;
          if (v34 >= 0x400) {
            v34 = 0;
          }
          v35 = v31 - v29;
          if (v31 - v29 < 0) {
            v35 = v29 - v31;
          }
          v36 = v32 - v30;
          if (v32 - v30 < 0) {
            v36 = v30 - v32;
          }
          v37 = v35 + (*(unsigned __int8*)(v33 + v34) << 16);
          v38 = *v26;
          v39 = v37 + v36;
          v40 = v26[1];
          v41 = v38 + 32 * v40;
          if (v41 >= 0x400) {
            v41 = 0;
          }
          v42 = v31 - v38;
          v43 = *(unsigned __int8*)(v33 + v41);
          if (v42 < 0) {
            v42 = -v42;
          }
          v44 = v32 - v40;
          if (v44 < 0) {
            v44 = -v44;
          }
          if (v39 < v44 + v42 + (v43 << 16)) {
            v45 = (unsigned __int8)v26[6];
            v46 = (unsigned __int8)v26[7];
            v47 = v25;
            do {
              v48 = &result[v47];
              *(_DWORD*)&result[v47 + 4] = *(_DWORD*)&result[v47];
              if (v47 == 0) {
                v27 = result;
                goto LABEL_23;
              }
              v49 = a3[2];
              v50 = a3[3];
              v47 -= 4;
              v51 = v49 - v29;
              if (v49 - v29 < 0) {
                v51 = v29 - v49;
              }
              v52 = v50 - v30;
              if (v50 - v30 < 0) {
                v52 = v30 - v50;
              }
              v53 = *(_QWORD*)(*(_QWORD*)a3 + 8LL) + 64LL;
              v54 = v51 + (*(unsigned __int8*)(v53 + v34) << 16);
              v55 = *(v48 - 4);
              v56 = *(v48 - 3);
              v57 = v54 + v52;
              v58 = v55 + 32 * v56;
              if (v58 >= 0x400) {
                v58 = 0;
              }
              v59 = v49 - v55;
              v60 = *(unsigned __int8*)(v53 + v58);
              if (v59 < 0) {
                v59 = -v59;
              }
              v61 = v50 - v56;
              if (v61 < 0) {
                v61 = -v61;
              }
            } while (v57 < v61 + v59 + (v60 << 16));
            v27 = &result[v47 + 4];
          LABEL_23:
            *(_DWORD*)v27 = (unsigned __int8)v29 | ((unsigned __int8)v30 << 8) |
                            (v45 << 16) | (v46 << 24);
          }
          v24 = v28 + 4;
          v25 += 4;
          v26 = v28;
        } while (v28 + 4 != a2);
      }
    }
  }
  return result;
}

char* BattleArea_8be220(char* result, char* a2, _DWORD* a3, unsigned __int64 a4,
                        char* a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  __int64 v9;
  unsigned int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  int v17;
  unsigned int v18;
  int v19;
  int v20;
  int v21;
  char v22;
  char* v23;
  __int64 v24;
  char* v25;
  char* v26;
  int v27;
  int v28;
  int v29;
  int v30;
  __int64 v31;
  unsigned int v32;
  int v33;
  int v34;
  int v35;
  unsigned int v36;
  int v37;
  int v38;
  unsigned int v39;
  int v40;
  int v41;
  int v42;
  __int16 v43;
  char* v44;
  __int64 v45;
  int v46;
  int v47;
  unsigned int v48;
  int v49;
  int v50;
  int v51;
  __int64 v52;
  int v53;
  int v54;
  int v55;
  int v56;
  unsigned int v57;
  int v58;
  unsigned int v59;
  int v60;
  int v61;
  int v62;
  __int64 v63;
  char* v64;
  char* v69;
  __int64 v70;
  char* v71;
  char* v72;
  char* v73;
  char* v74;
  char* v75;
  int v76;
  int v77;
  int v78;
  int v79;
  __int64 v80;
  unsigned int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  unsigned int v86;
  int v87;
  unsigned int v88;
  int v89;
  int v90;
  int v91;
  char v92;
  __int64 v93;
  char* v94;
  char* v95;

  if (a4 != 0) {
    if (a4 == 2) {
      v5 = *(a2 - 4);
      v6 = *(a2 - 3);
      v7 = a3[2];
      v8 = a3[3];
      v9 = *(_QWORD*)(*(_QWORD*)a3 + 8LL) + 64LL;
      v10 = v5 + 32 * v6;
      if (v10 >= 0x400) {
        v10 = 0;
      }
      v11 = v7 - v5;
      v12 = *(unsigned __int8*)(v9 + v10);
      if (v7 - v5 < 0) {
        v11 = v5 - v7;
      }
      v13 = v8 - v6;
      if (v13 < 0) {
        v13 = -v13;
      }
      v14 = v11 + (v12 << 16);
      v15 = result[1];
      v16 = v14 + v13;
      v17 = *result;
      v18 = v17 + 32 * v15;
      if (v18 >= 0x400) {
        v18 = 0;
      }
      v19 = v7 - v17;
      v20 = *(unsigned __int8*)(v9 + v18);
      if (v19 < 0) {
        v19 = -v19;
      }
      v21 = v8 - v15;
      if (v21 < 0) {
        v21 = -v21;
      }
      if (v16 >= v21 + v19 + (v20 << 16)) {
        *a5 = v17;
        a5[1] = result[1];
        a5[2] = result[2];
        a5[3] = result[3];
        a5[4] = *(a2 - 4);
        a5[5] = *(a2 - 3);
        a5[6] = *(a2 - 2);
        v22 = *(a2 - 1);
      }
      else {
        *a5 = v5;
        a5[1] = *(a2 - 3);
        a5[2] = *(a2 - 2);
        a5[3] = *(a2 - 1);
        a5[4] = *result;
        a5[5] = result[1];
        a5[6] = result[2];
        v22 = result[3];
      }
      a5[7] = v22;
    }
    else if (a4 == 1) {
      *a5 = *result;
      a5[1] = result[1];
      a5[2] = result[2];
      a5[3] = result[3];
    }
    else if ((__int64)a4 > 8) {
      v63 = a4 >> 1;
      v64 = result;
      v69 = &result[4 * (a4 >> 1)];
      v70 = 4 * (a4 >> 1);
      GameRoutine_8bde20(result, v69, a3, v63, a5, v63);
      result =
          GameRoutine_8bde20(v69, a2, a3, a4 - v63, &a5[4 * v63], a4 - v63);
      if (v70 != 0) {
        v71 = v69;
        v72 = a5;
        v73 = a2;
        v74 = v64;
        while (v71 != a2) {
          v76 = *v71;
          v77 = v71[1];
          v78 = a3[2];
          v79 = a3[3];
          v80 = *(_QWORD*)(*(_QWORD*)a3 + 8LL) + 64LL;
          v81 = v76 + 32 * v77;
          if (v81 >= 0x400) {
            v81 = 0;
          }
          v82 = v78 - v76;
          v83 = *(unsigned __int8*)(v80 + v81);
          if (v78 - v76 < 0) {
            v82 = v76 - v78;
          }
          v84 = v79 - v77;
          if (v84 < 0) {
            v84 = -v84;
          }
          v85 = v82 + (v83 << 16);
          result = (char*)(unsigned int)v74[1];
          v86 = v85 + v84;
          v87 = *v74;
          v88 = v87 + 32 * (_DWORD)result;
          if (v88 >= 0x400) {
            v88 = 0;
          }
          v89 = v78 - v87;
          v90 = *(unsigned __int8*)(v80 + v88);
          if (v89 < 0) {
            v89 = -v89;
          }
          v91 = v79 - (_DWORD)result;
          if (v91 < 0) {
            v91 = -v91;
          }
          if (v86 >= v91 + v89 + (v90 << 16)) {
            *v72 = v87;
            v75 = v74;
            v74 += 4;
          }
          else {
            *v72 = v76;
            v75 = v71;
            v71 += 4;
          }
          v72[1] = v75[1];
          v72[2] = v75[2];
          v72[3] = v75[3];
          v72 += 4;
          if (v74 == v69) {
            goto LABEL_79;
          }
        }
        if (v74 != v69) {
          v93 = 0;
          do {
            v94 = &v74[v93];
            v95 = &v72[v93];
            v93 += 4;
            *v95 = *v94;
            v95[1] = v94[1];
            v95[2] = v94[2];
            v95[3] = v94[3];
          } while (v94 + 4 != v69);
        }
      }
      else {
        v71 = v69;
        v72 = a5;
        v73 = a2;
      LABEL_79:
        while (v71 != v73) {
          *v72 = *v71;
          v72[1] = v71[1];
          v72[2] = v71[2];
          v92 = v71[3];
          v71 += 4;
          v72[3] = v92;
          v72 += 4;
        }
      }
    }
    else if (result != a2) {
      v23 = result + 4;
      *a5 = *result;
      a5[1] = result[1];
      a5[2] = result[2];
      a5[3] = result[3];
      if (result + 4 != a2) {
        v24 = 0;
        v25 = a5;
        do {
          v26 = v23;
          v27 = result[4];
          v28 = result[5];
          v29 = a3[2];
          v30 = a3[3];
          v31 = *(_QWORD*)(*(_QWORD*)a3 + 8LL) + 64LL;
          v32 = v27 + 32 * v28;
          if (v32 >= 0x400) {
            v32 = 0;
          }
          v33 = v29 - v27;
          v34 = *(unsigned __int8*)(v31 + v32);
          if (v29 - v27 < 0) {
            v33 = v27 - v29;
          }
          v35 = v30 - v28;
          if (v35 < 0) {
            v35 = -v35;
          }
          v36 = v33 + (v34 << 16) + v35;
          v37 = *v25;
          v38 = v25[1];
          v39 = v37 + 32 * v38;
          if (v39 >= 0x400) {
            v39 = 0;
          }
          v40 = v29 - v37;
          v41 = *(unsigned __int8*)(v31 + v39);
          if (v40 < 0) {
            v40 = -v40;
          }
          v42 = v30 - v38;
          if (v42 < 0) {
            v42 = -v42;
          }
          if (v36 >= v42 + v40 + (v41 << 16)) {
            v25[4] = v27;
            v25[5] = result[5];
            v25[6] = result[6];
            v25[7] = result[7];
          }
          else {
            v25[4] = v37;
            v43 = *((_WORD*)v25 + 1);
            v25[5] = v38;
            *((_WORD*)v25 + 3) = v43;
            v44 = a5;
            if (v25 != a5) {
              v45 = v24;
              while (1) {
                v46 = *v26;
                v47 = result[5];
                v44 = &a5[v45];
                v48 = v46 + 32 * v47;
                v49 = a3[2];
                v50 = a3[3];
                if (v48 >= 0x400) {
                  v48 = 0;
                }
                v51 = v49 - v46;
                v52 = *(_QWORD*)(*(_QWORD*)a3 + 8LL) + 64LL;
                if (v51 < 0) {
                  v51 = -v51;
                }
                v53 = v50 - v47;
                v54 = *(unsigned __int8*)(v52 + v48);
                if (v53 < 0) {
                  v53 = -v53;
                }
                v55 = v51 + (v54 << 16);
                v56 = *(v44 - 3);
                v57 = v55 + v53;
                v58 = *(v44 - 4);
                v59 = v58 + 32 * v56;
                if (v59 >= 0x400) {
                  v59 = 0;
                }
                v60 = v49 - v58;
                v61 = *(unsigned __int8*)(v52 + v59);
                if (v60 < 0) {
                  v60 = -v60;
                }
                v62 = v50 - v56;
                if (v62 < 0) {
                  v62 = -v62;
                }
                if (v57 >= v62 + v60 + (v61 << 16)) {
                  break;
                }
                v45 -= 4;
                *(_DWORD*)v44 = *((_DWORD*)v44 - 1);
                if (v45 == 0) {
                  v44 = a5;
                  break;
                }
              }
            }
            *(_DWORD*)v44 = *(_DWORD*)v26;
          }
          v25 += 4;
          v23 = v26 + 4;
          v24 += 4;
          result = v26;
        } while (v26 + 4 != a2);
      }
    }
  }
  return result;
}

void BattleArea_8becc0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                       __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                       __int64 a9, __int64 a10, __int64 a11)
{
  int v12;
  int v13;
  unsigned int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  __int64 v20;
  unsigned int v21;
  int v22;
  unsigned int v23;
  int v24;
  int v25;
  int v26;
  unsigned int v27;
  bool v28;
  __int64 v29;
  __int64 v30;
  int v31;

  if (a2 != a4) {
    while (a6 != a8) {
      v12 = *(char*)(a2 - 4);
      v13 = *(char*)(a2 - 3);
      v14 = v12 + 32 * v13;
      v16 = *(_DWORD*)(*(_QWORD*)a11 + 8LL);
      v15 = *(_DWORD*)(*(_QWORD*)a11 + 12LL);
      v17 = *(char*)(a6 - 3);
      if (v14 >= 0x400) {
        v14 = 0;
      }
      v18 = v16 - v12;
      if (v18 < 0) {
        v18 = -v18;
      }
      v19 = v15 - v13;
      if (v19 < 0) {
        v19 = -v19;
      }
      v20 = *(_QWORD*)(**(_QWORD**)a11 + 8LL) + 64LL;
      v21 = v18 + (*(unsigned __int8*)(v20 + v14) << 16) + v19;
      v22 = *(char*)(a6 - 4);
      v23 = v22 + 32 * v17;
      if (v23 >= 0x400) {
        v23 = 0;
      }
      v24 = v16 - v22;
      v25 = *(unsigned __int8*)(v20 + v23);
      if (v24 < 0) {
        v24 = -v24;
      }
      v26 = v15 - v17;
      if (v26 < 0) {
        v26 = -v26;
      }
      v27 = v26 + v24 + (v25 << 16);
      v28 = v21 >= v27;
      if (v21 >= v27) {
        v29 = a2;
      }
      else {
        v29 = a6;
      }
      if (v28) {
        a2 -= 4;
      }
      else {
        a6 -= 4;
      }
      *(_DWORD*)(a10 - 4) = *(_DWORD*)(v29 - 4);
      a10 -= 4;
      if (a2 == a4) {
        return;
      }
    }
    if (a4 != a2) {
      v30 = -4;
      do {
        v31 = *(_DWORD*)(a2 - 4);
        a2 -= 4;
        *(_DWORD*)(a10 + v30) = v31;
        v30 -= 4;
      } while (a2 != a4);
    }
  }
}

char* BattleArea_8beda0(char* result, char* a2, __int64 a3, unsigned __int64 a4,
                        char* a5, __int64 a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  int v12;
  int v13;
  char* v14;
  __int64 v15;
  char* v16;
  char* v17;
  int v18;
  char* v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  unsigned int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  __int64 v30;
  char* v31;
  int v32;
  int v33;
  int v34;
  int v35;
  unsigned int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  unsigned __int64 v41;
  unsigned __int64 v43;
  char* v44;
  char* v48;
  char* v51;
  char* v52;
  char* v53;
  char* v54;
  int v55;
  int v56;
  int v57;
  int v58;
  unsigned int v59;
  int v60;
  int v61;
  unsigned int v62;
  bool v63;
  char* v64;
  __int64 v65;
  int v66;
  __int64 v67;
  int v68;
  int v69;

  if (a4 >= 2) {
    if (a4 == 2) {
      v7 = *(_DWORD*)(*(_QWORD*)a3 + 144LL);
      v6 = *(_DWORD*)(*(_QWORD*)a3 + 148LL);
      v8 = v7 - *(a2 - 4);
      if (v8 < 0) {
        v8 = *(a2 - 4) - v7;
      }
      v9 = v6 - *(a2 - 3);
      if (v9 < 0) {
        v9 = *(a2 - 3) - v6;
      }
      v10 = v9 + v8;
      v11 = v7 - *result;
      if (v11 < 0) {
        v11 = *result - v7;
      }
      v12 = v6 - result[1];
      if (v12 < 0) {
        v12 = -v12;
      }
      if (v10 < v12 + v11) {
        v13 = *(_DWORD*)result;
        *(_DWORD*)result = *((_DWORD*)a2 - 1);
        *((_DWORD*)a2 - 1) = v13;
      }
    }
    else if ((__int64)a4 > 128) {
      v41 = a4 >> 1;
      v43 = a4 - (a4 >> 1);
      if ((__int64)a4 <= a6) {
        v48 = result;
        v51 = a5;
        BattleArea_8bf0e0(result, &result[4 * v41], a3, a4 >> 1, a5);
        v52 = &v51[4 * v41];
        result = BattleArea_8bf0e0(&v48[4 * v41], a2, a3, v43, v52);
        v53 = &v51[4 * a4];
        v54 = v52;
        while (v54 != v53) {
          v56 = *(_DWORD*)(*(_QWORD*)a3 + 144LL);
          v55 = *(_DWORD*)(*(_QWORD*)a3 + 148LL);
          v57 = v56 - *v54;
          if (v57 < 0) {
            v57 = *v54 - v56;
          }
          v58 = v55 - v54[1];
          if (v58 < 0) {
            v58 = v54[1] - v55;
          }
          v59 = v58 + v57;
          v60 = v56 - *v51;
          if (v60 < 0) {
            v60 = *v51 - v56;
          }
          v61 = v55 - v51[1];
          if (v61 < 0) {
            v61 = -v61;
          }
          v62 = v61 + v60;
          v63 = v59 >= v62;
          if (v59 >= v62) {
            v64 = v51;
          }
          else {
            v64 = v54;
          }
          if (v63) {
            v65 = 4;
          }
          else {
            v65 = 0;
          }
          v66 = *(_DWORD*)v64;
          v51 += v65;
          if (v63) {
            v67 = 0;
          }
          else {
            v67 = 4;
          }
          v54 += v67;
          *(_DWORD*)v48 = v66;
          v48 += 4;
          if (v51 == v52) {
            while (v54 != v53) {
              v69 = *(_DWORD*)v54;
              v54 += 4;
              *(_DWORD*)v48 = v69;
              v48 += 4;
            }
            return result;
          }
        }
        while (v51 != v52) {
          v68 = *(_DWORD*)v51;
          v51 += 4;
          *(_DWORD*)v48 = v68;
          v48 += 4;
        }
      }
      else {
        v44 = result;
        BattleArea_8beda0(result, &result[4 * v41], a3, a4 >> 1, a5, a6);
        BattleArea_8beda0(&v44[4 * v41], a2, a3, v43, a5, a6);
        return BattleArea_8bf520(v44, &v44[4 * v41], a2, a3, v41, v43, a5, a6);
      }
    }
    else if (result != a2) {
      v14 = result + 4;
      if (result + 4 != a2) {
        v15 = 0;
        v16 = result;
        do {
          v18 = v16[4];
          v19 = v14;
          v20 = v16[5];
          v22 = *(_DWORD*)(*(_QWORD*)a3 + 144LL);
          v21 = *(_DWORD*)(*(_QWORD*)a3 + 148LL);
          v23 = v22 - v18;
          if (v22 - v18 < 0) {
            v23 = v18 - v22;
          }
          v24 = v21 - v20;
          if (v21 - v20 < 0) {
            v24 = v20 - v21;
          }
          v25 = v24 + v23;
          v26 = v22 - *v16;
          if (v26 < 0) {
            v26 = -v26;
          }
          v27 = v21 - v16[1];
          if (v27 < 0) {
            v27 = -v27;
          }
          if (v25 < v27 + v26) {
            v28 = (unsigned __int8)v16[6];
            v29 = (unsigned __int8)v16[7];
            v30 = v15;
            do {
              v31 = &result[v30];
              *(_DWORD*)&result[v30 + 4] = *(_DWORD*)&result[v30];
              if (v30 == 0) {
                v17 = result;
                goto LABEL_19;
              }
              v30 -= 4;
              v33 = *(_DWORD*)(*(_QWORD*)a3 + 144LL);
              v32 = *(_DWORD*)(*(_QWORD*)a3 + 148LL);
              v34 = v33 - v18;
              if (v33 - v18 < 0) {
                v34 = v18 - v33;
              }
              v35 = v32 - v20;
              if (v32 - v20 < 0) {
                v35 = v20 - v32;
              }
              v36 = v35 + v34;
              v37 = *(v31 - 4);
              v38 = *(v31 - 3);
              v39 = v33 - v37;
              if (v39 < 0) {
                v39 = -v39;
              }
              v40 = v32 - v38;
              if (v40 < 0) {
                v40 = -v40;
              }
            } while (v36 < v40 + v39);
            v17 = &result[v30 + 4];
          LABEL_19:
            *(_DWORD*)v17 = (unsigned __int8)v18 | ((unsigned __int8)v20 << 8) |
                            (v28 << 16) | (v29 << 24);
          }
          v14 = v19 + 4;
          v15 += 4;
          v16 = v19;
        } while (v19 + 4 != a2);
      }
    }
  }
  return result;
}

char* BattleArea_8bf0e0(char* result, char* a2, __int64 a3, unsigned __int64 a4,
                        char* a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  int v12;
  int v13;
  char v14;
  char* v15;
  __int64 v16;
  char* v17;
  char* v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  unsigned int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  __int16 v29;
  char* v30;
  __int64 v31;
  int v32;
  int v33;
  int v34;
  int v35;
  unsigned int v36;
  int v37;
  int v38;
  __int64 v39;
  char* v40;
  char* v45;
  __int64 v46;
  char* v47;
  char* v48;
  char* v49;
  char* v50;
  char* v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  unsigned int v57;
  int v58;
  int v59;
  int v60;
  char v61;
  __int64 v62;
  char* v63;
  char* v64;

  if (a4 != 0) {
    if (a4 == 2) {
      v5 = *(a2 - 4);
      v6 = *(_DWORD*)(*(_QWORD*)a3 + 144LL);
      v7 = *(_DWORD*)(*(_QWORD*)a3 + 148LL);
      v8 = v6 - v5;
      if (v6 - v5 < 0) {
        v8 = v5 - v6;
      }
      v9 = v7 - *(a2 - 3);
      if (v9 < 0) {
        v9 = *(a2 - 3) - v7;
      }
      v10 = v9 + v8;
      v11 = *result;
      v12 = v6 - v11;
      if (v12 < 0) {
        v12 = -v12;
      }
      v13 = v7 - result[1];
      if (v13 < 0) {
        v13 = -v13;
      }
      if (v10 >= v13 + v12) {
        *a5 = v11;
        a5[1] = result[1];
        a5[2] = result[2];
        a5[3] = result[3];
        a5[4] = *(a2 - 4);
        a5[5] = *(a2 - 3);
        a5[6] = *(a2 - 2);
        v14 = *(a2 - 1);
      }
      else {
        *a5 = v5;
        a5[1] = *(a2 - 3);
        a5[2] = *(a2 - 2);
        a5[3] = *(a2 - 1);
        a5[4] = *result;
        a5[5] = result[1];
        a5[6] = result[2];
        v14 = result[3];
      }
      a5[7] = v14;
    }
    else if (a4 == 1) {
      *a5 = *result;
      a5[1] = result[1];
      a5[2] = result[2];
      a5[3] = result[3];
    }
    else if ((__int64)a4 > 8) {
      v39 = a4 >> 1;
      v40 = result;
      v45 = &result[4 * (a4 >> 1)];
      v46 = 4 * (a4 >> 1);
      BattleArea_8beda0_alt1(result, v45, a3, v39, a5, v39);
      result =
          BattleArea_8beda0_alt1(v45, a2, a3, a4 - v39, &a5[4 * v39], a4 - v39);
      if (v46 != 0) {
        v47 = v45;
        v48 = a5;
        v49 = a2;
        v50 = v40;
        while (v47 != a2) {
          v52 = *v47;
          v53 = *(_DWORD*)(*(_QWORD*)a3 + 144LL);
          v54 = *(_DWORD*)(*(_QWORD*)a3 + 148LL);
          v55 = v53 - v52;
          if (v53 - v52 < 0) {
            v55 = v52 - v53;
          }
          v56 = v54 - v47[1];
          if (v56 < 0) {
            v56 = v47[1] - v54;
          }
          v57 = v56 + v55;
          v58 = *v50;
          v59 = v53 - v58;
          if (v59 < 0) {
            v59 = -v59;
          }
          v60 = v54 - v50[1];
          if (v60 < 0) {
            v60 = -v60;
          }
          if (v57 >= v60 + v59) {
            *v48 = v58;
            v51 = v50;
            v50 += 4;
          }
          else {
            *v48 = v52;
            v51 = v47;
            v47 += 4;
          }
          v48[1] = v51[1];
          v48[2] = v51[2];
          v48[3] = v51[3];
          v48 += 4;
          if (v50 == v45) {
            goto LABEL_63;
          }
        }
        if (v50 != v45) {
          v62 = 0;
          do {
            v63 = &v50[v62];
            v64 = &v48[v62];
            v62 += 4;
            *v64 = *v63;
            v64[1] = v63[1];
            v64[2] = v63[2];
            v64[3] = v63[3];
          } while (v63 + 4 != v45);
        }
      }
      else {
        v47 = v45;
        v48 = a5;
        v49 = a2;
      LABEL_63:
        while (v47 != v49) {
          *v48 = *v47;
          v48[1] = v47[1];
          v48[2] = v47[2];
          v61 = v47[3];
          v47 += 4;
          v48[3] = v61;
          v48 += 4;
        }
      }
    }
    else if (result != a2) {
      v15 = result + 4;
      *a5 = *result;
      a5[1] = result[1];
      a5[2] = result[2];
      a5[3] = result[3];
      if (result + 4 != a2) {
        v16 = 0;
        v17 = a5;
        do {
          v18 = v15;
          v19 = result[4];
          v20 = *(_DWORD*)(*(_QWORD*)a3 + 144LL);
          v21 = *(_DWORD*)(*(_QWORD*)a3 + 148LL);
          v22 = v20 - v19;
          if (v20 - v19 < 0) {
            v22 = v19 - v20;
          }
          v23 = v21 - result[5];
          if (v23 < 0) {
            v23 = result[5] - v21;
          }
          v24 = v23 + v22;
          v25 = *v17;
          v26 = v17[1];
          v27 = v20 - v25;
          if (v27 < 0) {
            v27 = -v27;
          }
          v28 = v21 - v26;
          if (v28 < 0) {
            v28 = -v28;
          }
          if (v24 >= v28 + v27) {
            v17[4] = v19;
            v17[5] = result[5];
            v17[6] = result[6];
            v17[7] = result[7];
          }
          else {
            v17[4] = v25;
            v29 = *((_WORD*)v17 + 1);
            v17[5] = v26;
            *((_WORD*)v17 + 3) = v29;
            v30 = a5;
            if (v17 != a5) {
              v31 = v16;
              while (1) {
                v30 = &a5[v31];
                v33 = *(_DWORD*)(*(_QWORD*)a3 + 144LL);
                v32 = *(_DWORD*)(*(_QWORD*)a3 + 148LL);
                v34 = v33 - *v18;
                if (v34 < 0) {
                  v34 = *v18 - v33;
                }
                v35 = v32 - result[5];
                if (v35 < 0) {
                  v35 = result[5] - v32;
                }
                v36 = v35 + v34;
                v37 = v33 - *(v30 - 4);
                if (v37 < 0) {
                  v37 = *(v30 - 4) - v33;
                }
                v38 = v32 - a5[v31 - 3];
                if (v38 < 0) {
                  v38 = -v38;
                }
                if (v36 >= v38 + v37) {
                  break;
                }
                v31 -= 4;
                *(_DWORD*)v30 = *((_DWORD*)v30 - 1);
                if (v31 == 0) {
                  v30 = a5;
                  break;
                }
              }
            }
            *(_DWORD*)v30 = *(_DWORD*)v18;
          }
          v17 += 4;
          v15 = v18 + 4;
          v16 += 4;
          result = v18;
        } while (v18 + 4 != a2);
      }
    }
  }
  return result;
}

char* BattleArea_8bf520(char* result, char* a2, char* a3, __int64 a4,
                        __int64 a5, __int64 a6, char* a7, __int64 a8)
{
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  char* v17;
  int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  char* v23;
  char* v24;
  unsigned __int64 v25;
  int v26;
  int v27;
  unsigned int v28;
  unsigned __int64 v29;
  char* v30;
  int v31;
  int v32;
  char* v33;
  int v34;
  int v35;
  __int64 v36;
  unsigned __int64 v37;
  int v38;
  int v39;
  unsigned int v40;
  unsigned __int64 v41;
  char* v42;
  int v43;
  int v44;
  char* v45;
  int v46;
  int v47;
  char* v48;
  __int64 v49;
  __int64 v50;
  char* v51;
  char* v52;
  __int64 v53;
  char* v54;
  char* v55;
  char* v56;
  int v57;
  int v58;
  int v59;
  int v60;
  unsigned int v61;
  int v62;
  int v63;
  unsigned int v64;
  bool v65;
  char* v66;
  char* v67;
  char* v68;
  char v69;
  char* v70;
  int v71;
  int v72;
  int v73;
  int v74;
  unsigned int v75;
  int v76;
  int v77;
  unsigned int v78;
  bool v79;
  char* v80;
  __int64 v81;
  int v82;
  __int64 v83;
  int v84;
  __int64 v85;
  int v86;
  char* v87;
  int v88;
  __int64 v89;
  __int64 v90;
  char* v91;
  char* v92;

  if (a6 != 0) {
    while (a5 > a8 && a6 > a8) {
      if (a5 == 0) {
        return result;
      }
      v10 = -a5;
      v11 = 0;
      v12 = *(_DWORD*)(*(_QWORD*)a4 + 144LL);
      v13 = *(_DWORD*)(*(_QWORD*)a4 + 148LL);
      v14 = v12 - *a2;
      if (v14 < 0) {
        v14 = *a2 - v12;
      }
      v15 = v13 - a2[1];
      if (v15 < 0) {
        v15 = a2[1] - v13;
      }
      v16 = v15 + v14;
      while (1) {
        v17 = &result[v11];
        v18 = v12 - result[v11];
        if (v18 < 0) {
          v18 = result[v11] - v12;
        }
        v19 = v13 - result[v11 + 1];
        if (v19 < 0) {
          v19 = result[v11 + 1] - v13;
        }
        if (v16 < v19 + v18) {
          break;
        }
        v65 = __CFADD__(v10++, 1);
        v11 += 4;
        if (v65) {
          return result;
        }
      }
      v20 = -v10;
      v92 = a7;
      v90 = a4;
      v91 = a3;
      v89 = a8;
      if (-v10 >= a6) {
        if (v10 == -1) {
          v84 = *(_DWORD*)&result[v11];
          *(_DWORD*)&result[v11] = *(_DWORD*)a2;
          *(_DWORD*)a2 = v84;
          return result;
        }
        v36 = v20 / 2;
        v24 = &result[4 * (v20 / 2) + v11];
        if (a3 == a2) {
          v22 = a3;
          v48 = a3;
        }
        else {
          v37 = (a3 - a2) >> 2;
          v22 = a2;
          v38 = v12 - *v24;
          if (v38 < 0) {
            v38 = *v24 - v12;
          }
          v39 = v13 - v24[1];
          if (v39 < 0) {
            v39 = v24[1] - v13;
          }
          v40 = v39 + v38;
          do {
            v41 = v37 >> 1;
            v42 = &v22[4 * (v37 >> 1)];
            v43 = *v42;
            v44 = v42[1];
            v45 = v42 + 4;
            v46 = v12 - v43;
            if (v46 < 0) {
              v46 = -v46;
            }
            v47 = v13 - v44;
            if (v47 < 0) {
              v47 = -v47;
            }
            v37 += ~v41;
            if (v47 + v46 >= v40) {
              v37 = v41;
            }
            else {
              v22 = v45;
            }
          } while (v37 != 0);
          v48 = a2;
        }
        v21 = (v22 - v48) >> 2;
      }
      else {
        v21 = a6 / 2;
        v22 = &a2[4 * (a6 / 2)];
        if (v17 == a2) {
          v24 = a2;
          v23 = a2;
        }
        else {
          v23 = &result[v11];
          v24 = &result[v11];
          v25 = (a2 - result - v11) >> 2;
          v26 = v12 - *v22;
          if (v26 < 0) {
            v26 = *v22 - v12;
          }
          v27 = v13 - v22[1];
          if (v27 < 0) {
            v27 = v22[1] - v13;
          }
          v28 = v27 + v26;
          do {
            v29 = v25 >> 1;
            v30 = &v24[4 * (v25 >> 1)];
            v31 = *v30;
            v32 = v30[1];
            v33 = v30 + 4;
            v34 = v12 - v31;
            if (v34 < 0) {
              v34 = -v34;
            }
            v35 = v13 - v32;
            if (v35 < 0) {
              v35 = -v35;
            }
            v25 += ~v29;
            if (v28 < v35 + v34) {
              v25 = v29;
            }
            else {
              v24 = v33;
            }
          } while (v25 != 0);
        }
        v36 = (v24 - v23) >> 2;
      }
      v49 = a6 - v21;
      v50 = a6;
      a5 = -(v36 + v10);
      v51 = game_map_74efc0(v24, a2, v22);
      v52 = v51;
      if (v36 + v21 >= v50 - (v36 + v21) - v10) {
        a7 = v92;
        BattleArea_8bf520(v51, v22, v91, v90, a5, v49, v92, v89);
        v22 = v24;
        a4 = v90;
        v49 = v21;
        a8 = v89;
        a5 = v36;
        a3 = v52;
      }
      else {
        a7 = v92;
        BattleArea_8bf520(v17, v24, v51, v90, v36, v21, v92, v89);
        a3 = v91;
        a8 = v89;
        a4 = v90;
        v17 = v52;
      }
      a6 = v49;
      result = v17;
      a2 = v22;
      if (v49 == 0) {
        return result;
      }
    }
    if (a5 <= a6) {
      if (result != a2) {
        v67 = a7;
        v68 = result;
        do {
          *v67 = *v68;
          v67[1] = v68[1];
          v67[2] = v68[2];
          v69 = v68[3];
          v68 += 4;
          v67[3] = v69;
          v67 += 4;
        } while (v68 != a2);
        v70 = v67 - 4;
        while (a2 != a3) {
          v72 = *(_DWORD*)(*(_QWORD*)a4 + 144LL);
          v71 = *(_DWORD*)(*(_QWORD*)a4 + 148LL);
          v73 = v72 - *a2;
          if (v73 < 0) {
            v73 = *a2 - v72;
          }
          v74 = v71 - a2[1];
          if (v74 < 0) {
            v74 = a2[1] - v71;
          }
          v75 = v74 + v73;
          v76 = v72 - *a7;
          if (v76 < 0) {
            v76 = *a7 - v72;
          }
          v77 = v71 - a7[1];
          if (v77 < 0) {
            v77 = -v77;
          }
          v78 = v77 + v76;
          v79 = v75 >= v78;
          if (v75 >= v78) {
            v80 = a7;
          }
          else {
            v80 = a2;
          }
          if (v79) {
            v81 = 0;
          }
          else {
            v81 = 4;
          }
          v82 = *(_DWORD*)v80;
          a2 += v81;
          if (v79) {
            v83 = 4;
          }
          else {
            v83 = 0;
          }
          a7 += v83;
          *(_DWORD*)result = v82;
          result += 4;
          if (v67 == a7) {
            return result;
          }
        }
        v87 = a7 - 4;
        do {
          v88 = *((_DWORD*)v87 + 1);
          v87 += 4;
          *(_DWORD*)result = v88;
          result += 4;
        } while (v70 != v87);
      }
    }
    else if (a2 != a3) {
      v53 = 0;
      do {
        v54 = &a2[v53];
        v55 = &a7[v53];
        v53 += 4;
        *v55 = *v54;
        v55[1] = v54[1];
        v55[2] = v54[2];
        v55[3] = v54[3];
      } while (v54 + 4 != a3);
      v56 = &a7[v53];
      while (a2 != result) {
        v58 = *(_DWORD*)(*(_QWORD*)a4 + 144LL);
        v57 = *(_DWORD*)(*(_QWORD*)a4 + 148LL);
        v59 = v58 - *(v56 - 4);
        if (v59 < 0) {
          v59 = *(v56 - 4) - v58;
        }
        v60 = v57 - *(v56 - 3);
        if (v60 < 0) {
          v60 = *(v56 - 3) - v57;
        }
        v61 = v60 + v59;
        v62 = v58 - *(a2 - 4);
        if (v62 < 0) {
          v62 = -v62;
        }
        v63 = v57 - *(a2 - 3);
        if (v63 < 0) {
          v63 = -v63;
        }
        v64 = v63 + v62;
        v65 = v61 >= v64;
        if (v61 >= v64) {
          v66 = v56;
        }
        else {
          v66 = a2;
        }
        if (v65) {
          v56 -= 4;
        }
        else {
          a2 -= 4;
        }
        *((_DWORD*)a3 - 1) = *((_DWORD*)v66 - 1);
        a3 -= 4;
        if (v56 == a7) {
          return result;
        }
      }
      if (a7 != v56) {
        v85 = -4;
        do {
          v86 = *((_DWORD*)v56 - 1);
          v56 -= 4;
          *(_DWORD*)&a3[v85] = v86;
          v85 -= 4;
        } while (v56 != a7);
      }
    }
  }
  return result;
}

_QWORD* game_map_BattleArea_CreateBorder_lambda0_Invoke(_QWORD* result, int* a2)
{
  int* v2;
  int v3;
  int* v4;
  int v5;
  int* v6;
  int v7;
  int v8;
  int* v9;
  int v10;
  int v11;
  int v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  __int64 v19;
  int v20;
  int v21;
  bool v22;
  int v23;
  __int64 v24;

  v2 = (int*)result[1];
  v3 = *a2 - 1;
  if (v3 >= *v2) {
    v3 = *v2;
  }
  *v2 = v3;
  v4 = (int*)result[2];
  v5 = a2[1] - 1;
  if (v5 >= *v4) {
    v5 = *v4;
  }
  *v4 = v5;
  v6 = (int*)result[3];
  v7 = a2[2];
  if (*v6 <= v7 + 1) {
    v8 = v7 + 1;
  }
  else {
    v8 = *v6;
  }
  *v6 = v8;
  v9 = (int*)result[4];
  v10 = a2[3];
  if (*v9 <= v10 + 1) {
    v11 = v10 + 1;
  }
  else {
    v11 = *v9;
  }
  *v9 = v11;
  if (*a2 - 1 <= a2[2] + 1) {
    v12 = *a2 - 33;
    do {
      LODWORD(v13) = v12 + 32 * a2[1];
      if ((unsigned int)v13 >= 0x400) {
        v13 = 0;
      }
      else {
        v13 = (unsigned int)v13;
      }
      ++*(_BYTE*)(result[5] + v13 + 8);
      LODWORD(v13) = v12 + 32 * a2[3] + 64;
      if ((unsigned int)v13 >= 0x400) {
        v13 = 0;
      }
      else {
        v13 = (unsigned int)v13;
      }
      ++*(_BYTE*)(result[5] + v13 + 8);
      v14 = v12 + 32;
      ++v12;
    } while (v14 <= a2[2]);
  }
  v15 = a2[1];
  v16 = a2[3];
  if (v15 <= v16) {
    v17 = v15 - 1;
    v18 = (32 * v15) | 1;
    do {
      ++v17;
      LODWORD(v19) = v18 + *a2 - 2;
      if ((unsigned int)v19 >= 0x400) {
        v19 = 0;
      }
      else {
        v19 = (unsigned int)v19;
      }
      ++*(_BYTE*)(result[5] + v19 + 8);
      LODWORD(v19) = v18 + a2[2];
      v18 += 32;
      if ((unsigned int)v19 >= 0x400) {
        v19 = 0;
      }
      else {
        v19 = (unsigned int)v19;
      }
      ++*(_BYTE*)(result[5] + v19 + 8);
      v16 = a2[3];
    } while (v17 < v16);
    v15 = a2[1];
  }
  if (v15 <= v16) {
    v20 = a2[2];
    if (*a2 <= v20) {
      v21 = 32 * v15;
      do {
        v23 = *a2;
        if (*a2 <= v20) {
          do {
            LODWORD(v24) = v21 + v23;
            if ((unsigned int)(v21 + v23) >= 0x400) {
              v24 = 0;
            }
            else {
              v24 = (unsigned int)v24;
            }
            --*(_BYTE*)(result[5] + v24 + 8);
            v20 = a2[2];
            v22 = v23++ < v20;
          } while (v22);
          v16 = a2[3];
        }
        v21 += 32;
        v22 = v15++ < v16;
      } while (v22);
    }
  }
  return result;
}

#pragma GCC visibility pop
