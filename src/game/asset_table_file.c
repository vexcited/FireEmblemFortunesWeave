#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_7d16a0(_QWORD* result);
__int64 AssetTableFile_7e8000(_QWORD);
__int64 AssetTableFile_7eae80(_QWORD, _QWORD);
__int64 AssetTableFile_7eb500(_QWORD);
__int64 GameRoutine_688220(_QWORD);
__int64 GameRoutine_6d36d0(_QWORD);
__int64 GameRoutine_7d6200(_QWORD, _QWORD);
__int64 GameRoutine_7ea0c0(_QWORD);
__int64 GameRoutine_7ea800(_QWORD);
__int64 GameRoutine_7ebae0(_QWORD);
__int64 GameRoutine_7ec000(_QWORD);
__int64 GameRoutine_7f26a0(_QWORD);
__int64 GameRoutine_7f2ec0(_QWORD);
__int64 GameRoutine_96de20(void);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_FlagCondition_Append(_QWORD, _QWORD);
__int64 game_GetHero(_QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_HashString(_QWORD, _QWORD);
__int64 game_UnitItemList_EachItem(_QWORD, _QWORD);
__int64 game_Unit_GetJob(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _DWORD* game_g_shared_system_skills_ptr;
extern _UNKNOWN GameData_1b43658;
extern __int64 (*GameData_1f92f88[])();
extern __int64 (*GameData_1f93088[])();
extern __int64 (*GameData_1f9c8e8[])();
extern __int64 (*GameData_1f9c968[])();
extern __int64 (*GameData_1f9c9e8[])();
extern __int64 GameData_21c96d8;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21c99c0;
extern __int64 GameData_21c99c8;
extern __int64 GameData_21c9b20;
extern __int64 GameData_21ca300;
extern __int64 GameData_21d9ac0;
extern __int64 GameData_21d9ac8;
extern __int64 GameData_21d9ad0;
extern __int64 GameData_21d9ad8;
extern __int64 GameData_21d9b08;
extern __int64 GameData_21d9b18;
extern __int64 GameData_21d9b28;
extern __int64 GameData_21d9b38;
extern __int64 GameData_21d9b48;
extern __int64 GameData_21d9b58;
extern __int64 GameData_21d9b98;
extern __int64 GameData_21d9be8;
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
extern __int64 GameData_21d9d80;
extern __int64 GameData_21d9d88;
extern __int64 GameData_21d9d90;
extern __int64 GameData_21d9d98;
extern __int64 GameData_21d9da8;
extern __int64 GameData_21d9db0;
extern __int64 GameData_21d9db8;
extern __int64 GameData_21d9dc0;
extern __int64 GameData_21d9dc8;
extern __int64 GameData_21d9dd0;
extern __int64 GameData_21d9dd8;
extern __int64 GameData_21d9de0;
extern __int64 GameData_21d9de8;
extern __int64 GameData_21d9df0;
extern __int64 GameData_21d9df8;
extern __int64 GameData_21d9e00;
extern __int64 GameData_21d9e08;
extern __int64 GameData_21d9e10;
extern __int64 GameData_21d9e18;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c8f0[3];
extern __int64* GameData_212c930;
extern char GameData_1a9f09e;
extern char GameData_21d9d78;
extern char* GameData_1f9c748;
extern int GameData_21d9ae0;
extern int GameData_21d9d7c;
extern int GameData_21d9e20;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_693e60(_QWORD);
void __attribute__((noreturn)) GameRoutine_7f2680(_QWORD);
__int64 AssetTableFile_Unknown4_alt1() __asm__("AssetTableFile_Unknown4");
__int64 AssetTableFile_7e6e40();
__int64 AssetTableFile_Unknown5();
__int64 AssetTableFile_7e7200(__int64 a1);
_QWORD* AssetTableFile_7e73c0(__int64 a1, __int64 a2);
__int64 AssetTableFile_7e7620(__int64 result, __int64 a2);
__int64 AssetTableFile_7e7b20(__int64 result, unsigned __int64* a2);
__int64 AssetTableFile_7e95e0(__int64 a1, __int64 a2, unsigned int a3);
__int64 AssetTableFile_7e9880(__int64 result);
__int64 AssetTableFile_7e9960(__int64 a1, __int64 a2, __int64* a3);
__int64 AssetTableFile_7e9aa0(__int64 a1, __int64 a2, __int64* a3);
__int64 AssetTableFile_7e9d00(__int64 a1, __int64 a2, __int64* a3);
__int64 AssetTableFile_7ea4e0(__int64 result);
__int64* AssetTableFile_7ea680(__int64* result);
__int64 AssetTableFile_7eb740(__int64 result);
__int64 AssetTableFile_7eb9c0_alt1(__int64 result,
                                   _DWORD* a2) __asm__("AssetTableFile_7eb9c0");
__int64 AssetTableFile_7ec8a0(__int64 a1, __int64 a2);
_QWORD* AssetTableFile_7eca40(__int64 a1);
__int64 GameRoutine_693d40(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
extern _UNKNOWN GameData_21d9f88;
extern __int64 GameData_21c9ad8;
extern __int64 GameData_21c9ae0;
extern __int64 GameData_21c9af0;
extern int GameData_21d9f84;
__int64 game_AssetTableFile_OnBuild_lambda0_Invoke_alt1(
    __int64 result,
    unsigned __int64* a2) __asm__("game_AssetTableFile_OnBuild_lambda0_Invoke");
_QWORD* game_AssetTableFile_EachAssetFlag_lambda0_Clone(__int64 a1);
void __attribute__((noreturn))
GameRoutine_60a310_alt1(_QWORD, _QWORD, _QWORD) __asm__("GameRoutine_60a310");
__int64 game_AssetTableFile_EachAssetFlag_lambda0_Invoke(__int64 result,
                                                         _QWORD* a2,
                                                         __int64 a3);
__int64* GameRoutine_688420(__int64* result, unsigned __int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 std___1___next_prime(_QWORD);
unsigned __int64 AssetTableFile_7f1f20(unsigned __int64 result, __int64 a2);
_QWORD* ConditionMap_7f2ec0(__int64*, __int64);
_QWORD* GameRoutine_688220_alt1(__int64, unsigned __int64,
                                __int64*) __asm__("GameRoutine_688220");
_QWORD* game_FlagCondition_Append_alt1(_QWORD*, unsigned __int16*) __asm__(
    "game_FlagCondition_Append");
_WORD*
game_UnitItemList_EachItem_alt1(_WORD* result,
                                __int64) __asm__("game_UnitItemList_EachItem");
__int64* GameRoutine_6d36d0_alt1(_QWORD*) __asm__("GameRoutine_6d36d0");
__int64 AssetTableFile_7e8000_alt1(__int64) __asm__("AssetTableFile_7e8000");
__int64 ConditionMap_7ea0c0_alt1(__int64 result) __asm__("ConditionMap_7ea0c0");
__int64 GameRoutine_693d40_alt1(__int64*,
                                __int64*) __asm__("GameRoutine_693d40");
__int64 GameRoutine_96de20_alt1(__int64) __asm__("GameRoutine_96de20");
__int64 game_GetHero_alt1(unsigned __int8) __asm__("game_GetHero");
__int64 game_HasSkill_alt1(_QWORD*, unsigned int*) __asm__("game_HasSkill");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_Unit_GetJob_alt1(__int64) __asm__("game_Unit_GetJob");
__int64 game_anonymous_ConditionMap_Add_7ebae0(__int64 result);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
unsigned __int8* AssetTableFile_7eb500_alt1(unsigned __int8* result) __asm__(
    "AssetTableFile_7eb500");
void AssetTableFile_7e6e40_alt1() __asm__("AssetTableFile_7e6e40");
void AssetTableFile_7ea4e0_alt1(char) __asm__("AssetTableFile_7ea4e0");
void AssetTableFile_7ea680_alt1(__int64*) __asm__("AssetTableFile_7ea680");
void AssetTableFile_7eb740_alt1(char) __asm__("AssetTableFile_7eb740");
void ConditionMap_7ea0c0(unsigned __int8*);
void ConditionMap_7ea800(__int64*);
void ConditionMap_7ec000(__int64*);
void GameHr_7eae80(__int64*, unsigned int);
void GameHr_7f26a0(unsigned __int64);
void GameRoutine_7d6200_alt1(__int64*, _DWORD*) __asm__("GameRoutine_7d6200");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_60a310_alt2() __asm__("GameRoutine_60a310");
void __attribute__((noreturn))
GameRoutine_693e60_alt1() __asm__("GameRoutine_693e60");
void __attribute__((noreturn))
GameRoutine_7f2680_alt1() __asm__("GameRoutine_7f2680");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void AssetTableFile_Unknown4();
void AssetTableFile_7eb9c0(_DWORD* result, _DWORD* a2);
__int64 game_AssetTableFile_OnBuild_lambda0_Invoke(__int64 result, __int64* a2);

void AssetTableFile_Unknown4()
{

#pragma clang fp contract(off)
  unsigned __int64 v0;
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  _QWORD* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64* v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v53;
  unsigned __int64 v54;
  __int64* v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  _QWORD* v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  _QWORD* v65;
  _QWORD* v66;
  unsigned __int64 v67;
  __int64 v68;
  float v69;
  _BOOL8 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  _QWORD* v76;
  __int64 v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  unsigned __int64 v80;
  __int64 v81;
  __int64* v82;
  unsigned __int64 v83;
  __int64 v84;
  float v85;
  __int64 v86;
  float v87;
  float v88;
  _BOOL8 v89;
  unsigned __int64 v90;
  unsigned __int64 v91;
  unsigned __int64 v92;
  __int64 v93;
  __int64* v94;
  __int64 v95;
  unsigned __int64 v96;
  unsigned __int64* v97;
  unsigned __int64* v98;
  __int64 v99;
  unsigned __int64 v100;
  unsigned __int64 v101;
  unsigned __int64 v103;
  unsigned __int64 v104;
  _QWORD* v105;
  _QWORD* v106;
  unsigned __int64 v107;
  __int64 v108;
  unsigned __int64 v109;
  unsigned __int64* v110;
  _QWORD* v111;
  __int64 v112;
  char* v113;
  unsigned __int64 v114;
  __int64 v115;
  __int64 v116;
  unsigned __int64 v117;
  __int64 v118;
  unsigned __int64* v119;
  char* v120;
  char* v121;
  char* v122;
  char* v123;
  __int64 v124;
  unsigned __int64 v125;
  __int64 v126;
  __int64 v127;
  _QWORD* v128;
  _QWORD* v129;
  unsigned __int64 v130;
  unsigned __int64 v131;
  unsigned __int64 v132;
  unsigned __int64 v133;
  unsigned __int64 v134;
  __int64 v135;
  _QWORD* v136;
  unsigned __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64* v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  int v149;
  __int64 v150;
  __int64 v151;
  int v152;
  __int64 (**v153)();
  int v154;
  int v155;
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
  unsigned __int64 v168;
  __int64 v169;
  unsigned __int64 v170;
  __int64 v171;
  unsigned __int64 v172;
  __int64 v173;
  __int64 v174;
  unsigned __int64 v175;
  __int64 v176;
  unsigned __int64 v177;
  __int64 v178;
  unsigned __int64 v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  _QWORD* v186;
  __int64 v187;
  unsigned __int64 v188;
  __int64 v189;
  unsigned __int64 v190;
  __int64 v191;
  unsigned __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  unsigned __int64 v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  unsigned __int64 v205;
  __int64 v206;
  unsigned __int64 v207;
  __int64 v208;
  unsigned __int64 v209;
  __int64 v210;
  __int64 v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  unsigned __int64 v215;
  __int64 v216;
  unsigned __int64 v217;
  __int64 v218;
  unsigned __int64 v219;
  __int64 v220;
  __int64 v221;
  unsigned __int64 v222;
  __int64 v223;
  unsigned __int64 v224;
  __int64 v225;
  unsigned __int64 v226;
  __int64 v227;
  __int64 v228;
  __int64 v229;
  __int64 v230;
  __int64 v231;
  __int64 v232;
  __int64 v233;
  __int64* v234;
  __int64* v235;
  _QWORD* v236;
  _QWORD* v237;
  unsigned __int64* v238;
  __int64 v239;
  struct {
    __int64 (**v240)();
    __int64* v241;
    unsigned __int64** v242;
    __int64 v243;
    __int64 (***v244)();
    __int64 v245;
  } v240_;
  struct {
    unsigned __int64* v246;
    __int64 v247;
    __int64 v248;
  } v246_;
  struct {
    unsigned __int64* v249;
    __int64 v250;
    __int64 v251;
  } v249_;

  GameData_21d9db0 = GameData_21d9da8;
  if (GameData_21d9d98 != 0) {
    v1 = (_QWORD*)GameData_21d9d90;
    if (GameData_21d9d90 != 0) {
      v2 = fw_memory_g_heap_manager_ptr;
      do {
        v4 = (_QWORD*)*v1;
        v5 = v1[3];
        if (v5 != 0) {
          v6 = *(_QWORD*)v2;
          v1[4] = v5;
          if (*(_QWORD*)(v6 + 200) != 0) {
            v7 = 128;
          }
          else {
            v7 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(v6 + v7, v5);
        }
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v3 = 128;
        }
        else {
          v3 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v3, (__int64)v1);
        v1 = v4;
      } while (v4 != nullptr);
    }
    GameData_21d9d90 = 0;
    if (GameData_21d9d88 != 0) {
      v8 = GameData_21d9d88 & 7;
      if ((unsigned __int64)GameData_21d9d88 >= 8) {
        v10 = GameData_21d9d88 & 0xFFFFFFFFFFFFFFF8LL;
        v9 = 0;
        do {
          *(_QWORD*)(GameData_21d9d80 + 8 * v9) = 0;
          *(_QWORD*)(GameData_21d9d80 + 8 * v9 + 8) = 0;
          *(_QWORD*)(GameData_21d9d80 + 8 * v9 + 16) = 0;
          *(_QWORD*)(GameData_21d9d80 + 8 * v9 + 24) = 0;
          *(_QWORD*)(GameData_21d9d80 + 8 * v9 + 32) = 0;
          *(_QWORD*)(GameData_21d9d80 + 8 * v9 + 40) = 0;
          *(_QWORD*)(GameData_21d9d80 + 8 * v9 + 48) = 0;
          v11 = GameData_21d9d80 + 8 * v9;
          v9 += 8;
          *(_QWORD*)(v11 + 56) = 0;
        } while (v10 != v9);
      }
      else {
        v9 = 0;
      }
      if (v8 != 0) {
        v12 = 8 * v9;
        do {
          --v8;
          *(_QWORD*)(GameData_21d9d80 + v12) = 0;
          v12 += 8;
        } while (v8 != 0);
      }
    }
    GameData_21d9d98 = 0;
  }
  GameData_21d9dc8 = GameData_21d9dc0;
  GameData_21d9de0 = GameData_21d9dd8;
  GameData_21d9df8 = GameData_21d9df0;
  AssetTableFile_7e6e40_alt1();
  v13 = *(__int64**)(*GameData_212c8f0[0] + 64);
  v234 = *(__int64**)(*GameData_212c8f0[0] + 72);
  if (v13 != v234) {
    v14 = (__int64*)fw_memory_g_heap_manager_ptr;
    while (1) {
      v15 = *v13;
      v235 = v13;
      if (*(_QWORD*)(*v13 + 8) == 0 || *(_WORD*)(v15 + 32) != 0) {
        v16 = GameData_21d9db0;
        if (GameData_21d9db0 >= (unsigned __int64)GameData_21d9db8) {
          v18 = GameData_21d9da8;
          v19 = GameData_21d9db0 - GameData_21d9da8;
          v20 = (GameData_21d9db0 - GameData_21d9da8) >> 3;
          v21 = v20 + 1;
          if ((unsigned __int64)(v20 + 1) >> 61 != 0) {
            goto LABEL_422;
          }
          v22 = GameData_21d9db8 - GameData_21d9da8;
          if ((GameData_21d9db8 - GameData_21d9da8) >> 2 > v21) {
            v21 = v22 >> 2;
          }
          v0 = (unsigned __int64)v22 >= 0x7FFFFFFFFFFFFFF8LL
                   ? 0x1FFFFFFFFFFFFFFFLL
                   : v21;
          if (v0 != 0) {
            if (v0 >> 61 != 0) {
              goto LABEL_419;
            }
            v23 = fw_memory_HeapManager_Allocate_alt1(*v14, 8 * v0, 16, 0);
          }
          else {
            v23 = 0;
          }
          v24 = (_QWORD*)(v23 + v19);
          v25 = v19;
          v26 = v23 + 8 * v0;
          v27 = (__int64)&v24[-v20];
          *v24 = v15;
          v17 = (__int64)(v24 + 1);
          memcpy_alt1(v27, v18, v25);
          GameData_21d9da8 = v27;
          GameData_21d9db0 = v17;
          GameData_21d9db8 = v26;
          if (v18 != 0) {
            if (*(_QWORD*)(*v14 + 200) != 0) {
              v28 = 128;
            }
            else {
              v28 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v14 + v28, v18);
          }
        }
        else {
          *(_QWORD*)GameData_21d9db0 = v15;
          v17 = v16 + 8;
        }
        GameData_21d9db0 = v17;
        if (*(_QWORD*)(v15 + 352) != 0) {
          v29 = GameData_21d9e10;
          if (GameData_21d9e10 >= (unsigned __int64)GameData_21d9e18) {
            v31 = GameData_21d9e08;
            v32 = GameData_21d9e10 - GameData_21d9e08;
            v33 = (GameData_21d9e10 - GameData_21d9e08) >> 3;
            v34 = v33 + 1;
            if ((unsigned __int64)(v33 + 1) >> 61 != 0) {
              goto LABEL_422;
            }
            v35 = GameData_21d9e18 - GameData_21d9e08;
            if ((GameData_21d9e18 - GameData_21d9e08) >> 2 > v34) {
              v34 = v35 >> 2;
            }
            if ((unsigned __int64)v35 >= 0x7FFFFFFFFFFFFFF8LL) {
              v0 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v0 = v34;
            }
            if (v0 != 0) {
              if (v0 >> 61 != 0) {
                goto LABEL_419;
              }
              v36 = fw_memory_HeapManager_Allocate_alt1(*v14, 8 * v0, 16, 0);
            }
            else {
              v36 = 0;
            }
            v37 = (_QWORD*)(v36 + v32);
            v38 = v32;
            v39 = v36 + 8 * v0;
            v40 = (__int64)&v37[-v33];
            *v37 = v15;
            v30 = (__int64)(v37 + 1);
            memcpy_alt1(v40, v31, v38);
            GameData_21d9e08 = v40;
            GameData_21d9e10 = v30;
            GameData_21d9e18 = v39;
            if (v31 != 0) {
              if (*(_QWORD*)(*v14 + 200) != 0) {
                v41 = 128;
              }
              else {
                v41 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*v14 + v41, v31);
            }
          }
          else {
            *(_QWORD*)GameData_21d9e10 = v15;
            v30 = v29 + 8;
          }
          GameData_21d9e10 = v30;
        }
      }
      if (*(_WORD*)(v15 + 32) != 0) {
        v42 = *(_QWORD*)(v15 + 24);
        if (v42 != 0) {
          v43 = *(_QWORD**)v42;
          v236 = *(_QWORD**)(v42 + 8);
          if (v236 != *(_QWORD**)v42) {
            break;
          }
        }
      }
    LABEL_24:
      v13 = v235 + 1;
      if (v235 + 1 == v234) {
        goto LABEL_268;
      }
    }
    while (1) {
      v249_.v250 = 0;
      v249_.v251 = 0;
      v246_.v248 = 0;
      v249_.v249 = nullptr;
      v246_.v246 = nullptr;
      v246_.v247 = 0;
      v237 = v43;
      v240_.v240 = GameData_1f9c8e8;
      v240_.v241 = (__int64*)&v249_.v249;
      v240_.v242 = &v246_.v246;
      v240_.v244 = &v240_.v240;
      v44 = *v43;
      v45 = v43[1];
      v46 = v43[3];
      v47 = v43[4];
      if (((v45 - *v43) >> 4) + ((v47 - v46) >> 4) != 0) {
        if (v44 != v45) {
          do {
            if (v240_.v244 == nullptr) {
            LABEL_421:
              GameRoutine_60a310_alt2();
            }
            ((void (*)(__int64 (***)(void), __int64))(*v240_.v244)[6])(
                v240_.v244, v44);
            v44 += 16;
          } while (v44 != v45);
          v46 = v237[3];
          v47 = v237[4];
        }
        while (v46 != v47) {
          if (v240_.v244 == nullptr) {
            goto LABEL_421;
          }
          ((void (*)(__int64 (***)(void), __int64))(*v240_.v244)[6])(v240_.v244,
                                                                     v46);
          v46 += 16;
        }
      }
      if (v240_.v244 == &v240_.v240) {
        v48 = 4;
      }
      else {
        if (v240_.v244 == nullptr) {
          goto LABEL_81;
        }
        v48 = 5;
      }
      ((__int64 (*)(__int64))(*v240_.v244)[v48])((__int64)v240_.v244);
    LABEL_81:
      v49 = v249_.v249;
      v50 = (__int64)v246_.v246;
      v238 = (unsigned __int64*)v249_.v250;
      if ((unsigned __int64*)v249_.v250 != v249_.v249 &&
          (unsigned __int64*)v246_.v247 != v246_.v246) {
        do {
          v51 = *v49;
          if (GameData_21d9ac8 != 0 && GameData_21d9ad8 != 0) {
            v53 = GameData_21d9ac8 - 1;
            if ((GameData_21d9ac8 & (GameData_21d9ac8 - 1)) != 0) {
              v54 = *v49;
              if (v51 >= GameData_21d9ac8) {
                v54 = v51 % GameData_21d9ac8;
              }
            }
            else {
              v54 = v53 & v51;
            }
            v55 = *(__int64**)(GameData_21d9ac0 + 8 * v54);
            if (v55 != nullptr) {
              v56 = *v55;
              if (*v55 != 0) {
                if ((GameData_21d9ac8 & v53) == 0) {
                  while (1) {
                    v58 = *(_QWORD*)(v56 + 8);
                    if (v58 == v51) {
                      if (*(_QWORD*)(v56 + 16) == v51) {
                        goto LABEL_191;
                      }
                    }
                    else if ((v58 & v53) != v54) {
                      goto LABEL_108;
                    }
                    v56 = *(_QWORD*)v56;
                    if (v56 == 0) {
                      goto LABEL_108;
                    }
                  }
                }
                do {
                  v57 = *(_QWORD*)(v56 + 8);
                  if (v57 == v51) {
                    if (*(_QWORD*)(v56 + 16) == v51) {
                      goto LABEL_191;
                    }
                  }
                  else {
                    if (v57 >= GameData_21d9ac8) {
                      v57 %= (unsigned __int64)GameData_21d9ac8;
                    }
                    if (v57 != v54) {
                      break;
                    }
                  }
                  v56 = *(_QWORD*)v56;
                } while (v56 != 0);
              }
            }
          }
        LABEL_108:
          v59 = fw_memory_HeapManager_Allocate_alt1(*v14, 104, 16, 0);
          *(_QWORD*)v59 = 0;
          *(_QWORD*)(v59 + 8) = 0;
          *(_QWORD*)(v59 + 16) = v51;
          v60 = (_QWORD*)v59;
          *(_QWORD*)(v59 + 24) = *v49;
          v61 = v49[1];
          *(_QWORD*)(v59 + 80) = 0;
          *(_QWORD*)(v59 + 88) = 0;
          *(_QWORD*)(v59 + 64) = 0;
          *(_QWORD*)(v59 + 72) = 0;
          *(_QWORD*)(v59 + 48) = 0;
          *(_QWORD*)(v59 + 56) = 0;
          *(_QWORD*)(v59 + 8) = v51;
          *(_QWORD*)(v59 + 32) = v61;
          *(_QWORD*)(v59 + 40) = 0;
          *(_DWORD*)(v59 + 96) = 1065353216;
          v62 = GameData_21d9ac8;
          if (GameData_21d9ac8 != 0) {
            v63 = GameData_21d9ac8 - 1;
            if ((GameData_21d9ac8 & (GameData_21d9ac8 - 1)) != 0) {
              v64 = v51;
              if (v51 >= GameData_21d9ac8) {
                v64 = v51 % GameData_21d9ac8;
              }
            }
            else {
              v64 = v63 & v51;
            }
            v65 = *(_QWORD**)(GameData_21d9ac0 + 8 * v64);
            if (v65 != nullptr) {
              v66 = (_QWORD*)*v65;
              if (v66 != nullptr) {
                if ((GameData_21d9ac8 & v63) == 0) {
                  while (1) {
                    v68 = v66[1];
                    if (v68 == v51) {
                      if (v66[2] == v51) {
                        goto LABEL_253;
                      }
                    }
                    else if ((v68 & v63) != v64) {
                      goto LABEL_128;
                    }
                    v66 = (_QWORD*)*v66;
                    if (v66 == nullptr) {
                      goto LABEL_128;
                    }
                  }
                }
                do {
                  v67 = v66[1];
                  if (v67 == v51) {
                    if (v66[2] == v51) {
                    LABEL_253:
                      if (*(_QWORD*)(*v14 + 200) != 0) {
                        v138 = 128;
                      }
                      else {
                        v138 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(*v14 + v138, v59);
                      goto LABEL_150;
                    }
                  }
                  else {
                    if (v67 >= GameData_21d9ac8) {
                      v67 %= (unsigned __int64)GameData_21d9ac8;
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
        LABEL_128:
          v69 = (float)(unsigned __int64)(GameData_21d9ad8 + 1);
          if (GameData_21d9ac8 == 0 ||
              (float)(*(float*)&GameData_21d9ae0 *
                      (float)(unsigned __int64)GameData_21d9ac8) < v69) {
            v70 = (unsigned __int64)GameData_21d9ac8 < 3 ||
                  (GameData_21d9ac8 & (GameData_21d9ac8 - 1)) != 0;
            v71 = v70 | (2 * GameData_21d9ac8);
            v72 = vcvtps_u64_f32(v69 / *(float*)&GameData_21d9ae0);
            if (v71 <= v72) {
              v73 = v72;
            }
            else {
              v73 = v71;
            }
            GameHr_7f26a0(v73);
            v62 = GameData_21d9ac8;
            v51 = v60[1];
          }
          v74 = v62 - 1;
          if ((v62 & (v62 - 1)) != 0) {
            if (v51 >= v62) {
              v51 %= v62;
            }
          }
          else {
            v51 &= v74;
          }
          v75 = GameData_21d9ac0;
          v76 = *(_QWORD**)(GameData_21d9ac0 + 8 * v51);
          if (v76 != nullptr) {
            *v60 = *v76;
            *v76 = v60;
          }
          else {
            v77 = GameData_21d9ad0;
            GameData_21d9ad0 = (__int64)v60;
            *v60 = v77;
            *(_QWORD*)(v75 + 8 * v51) = &GameData_21d9ad0;
            if (*v60 != 0) {
              v78 = *(_QWORD*)(*v60 + 8LL);
              if ((v62 & v74) != 0) {
                if (v78 >= v62) {
                  v78 %= v62;
                }
              }
              else {
                v78 &= v74;
              }
              *(_QWORD*)(GameData_21d9ac0 + 8 * v78) = v60;
            }
          }
          ++GameData_21d9ad8;
        LABEL_150:
          v79 = *v49;
          v80 = GameData_21d9ac8;
          if (GameData_21d9ac8 != 0) {
            v81 = GameData_21d9ac8 - 1;
            if ((GameData_21d9ac8 & (GameData_21d9ac8 - 1)) != 0) {
              v0 = *v49;
              if (v79 >= GameData_21d9ac8) {
                v0 = v79 % GameData_21d9ac8;
              }
            }
            else {
              v0 = v81 & v79;
            }
            v82 = *(__int64**)(GameData_21d9ac0 + 8 * v0);
            if (v82 != nullptr) {
              v56 = *v82;
              if (*v82 != 0) {
                if ((GameData_21d9ac8 & v81) == 0) {
                  while (1) {
                    v84 = *(_QWORD*)(v56 + 8);
                    if (v84 == v79) {
                      if (*(_QWORD*)(v56 + 16) == v79) {
                        goto LABEL_191;
                      }
                    }
                    else if ((v84 & v81) != v0) {
                      goto LABEL_170;
                    }
                    v56 = *(_QWORD*)v56;
                    if (v56 == 0) {
                      goto LABEL_170;
                    }
                  }
                }
                do {
                  v83 = *(_QWORD*)(v56 + 8);
                  if (v83 == v79) {
                    if (*(_QWORD*)(v56 + 16) == v79) {
                      goto LABEL_191;
                    }
                  }
                  else {
                    if (v83 >= GameData_21d9ac8) {
                      v83 %= (unsigned __int64)GameData_21d9ac8;
                    }
                    if (v83 != v0) {
                      break;
                    }
                  }
                  v56 = *(_QWORD*)v56;
                } while (v56 != 0);
              }
            }
          }
        LABEL_170:
          v56 = fw_memory_HeapManager_Allocate_alt1(*v14, 104, 16, 0);
          *(_QWORD*)v56 = 0;
          *(_QWORD*)(v56 + 8) = v79;
          *(_QWORD*)(v56 + 16) = v79;
          *(_QWORD*)(v56 + 24) = 0;
          *(_QWORD*)(v56 + 48) = 0;
          *(_QWORD*)(v56 + 56) = 0;
          v85 = *(float*)&GameData_21d9ae0;
          *(_QWORD*)(v56 + 32) = &GameData_1a9f09e;
          *(_QWORD*)(v56 + 40) = 0;
          v86 = GameData_21d9ad8 + 1;
          *(_QWORD*)(v56 + 64) = 0;
          *(_QWORD*)(v56 + 72) = 0;
          *(_QWORD*)(v56 + 80) = 0;
          *(_QWORD*)(v56 + 88) = 0;
          v87 = (float)(unsigned __int64)v86;
          *(_DWORD*)(v56 + 96) = 1065353216;
          if (v80 == 0 || (float)(v85 * (float)v80) < v87) {
            v88 = v87 / v85;
            v89 = (v80 & (v80 - 1)) != 0;
            if (v80 < 3) {
              v89 = true;
            }
            v90 = v89 | (2 * v80);
            v91 = vcvtps_u64_f32(v88);
            if (v90 <= v91) {
              v92 = v91;
            }
            else {
              v92 = v90;
            }
            GameHr_7f26a0(v92);
            v80 = GameData_21d9ac8;
            if ((v80 & (v80 - 1)) != 0) {
              if (v79 >= GameData_21d9ac8) {
                v0 = v79 % GameData_21d9ac8;
              }
              else {
                v0 = v79;
              }
            }
            else {
              v0 = (GameData_21d9ac8 - 1) & v79;
            }
          }
          v93 = GameData_21d9ac0;
          v94 = *(__int64**)(GameData_21d9ac0 + 8 * v0);
          if (v94 != nullptr) {
            *(_QWORD*)v56 = *v94;
            *v94 = v56;
          }
          else {
            v95 = GameData_21d9ad0;
            GameData_21d9ad0 = v56;
            *(_QWORD*)v56 = v95;
            *(_QWORD*)(v93 + 8 * v0) = &GameData_21d9ad0;
            if (*(_QWORD*)v56 != 0) {
              v96 = *(_QWORD*)(*(_QWORD*)v56 + 8LL);
              if ((v80 & (v80 - 1)) != 0) {
                if (v96 >= v80) {
                  v96 %= v80;
                }
              }
              else {
                v96 &= v80 - 1;
              }
              *(_QWORD*)(GameData_21d9ac0 + 8 * v96) = v56;
            }
          }
          ++GameData_21d9ad8;
        LABEL_191:
          v98 = v246_.v246;
          v97 = (unsigned __int64*)v246_.v247;
          if (v246_.v246 != (unsigned __int64*)v246_.v247) {
            v0 = v56 + 80;
            do {
              v100 = *(_QWORD*)(v56 + 72);
              v101 = *v98;
              if (v100 != 0 && *(_QWORD*)(v56 + 88) != 0) {
                v103 = v100 - 1;
                if ((v100 & (v100 - 1)) != 0) {
                  v104 = *v98;
                  if (v101 >= v100) {
                    v104 = v101 % v100;
                  }
                }
                else {
                  v104 = v103 & v101;
                }
                v105 = *(_QWORD**)(*(_QWORD*)(v56 + 64) + 8 * v104);
                if (v105 != nullptr) {
                  v106 = (_QWORD*)*v105;
                  if (v106 != nullptr) {
                    if ((v100 & v103) == 0) {
                      while (1) {
                        v108 = v106[1];
                        if (v101 == v108) {
                          if (v106[2] == v101) {
                            goto LABEL_197;
                          }
                        }
                        else if ((v108 & v103) != v104) {
                          goto LABEL_221;
                        }
                        v106 = (_QWORD*)*v106;
                        if (v106 == nullptr) {
                          goto LABEL_221;
                        }
                      }
                    }
                    do {
                      v107 = v106[1];
                      if (v101 == v107) {
                        if (v106[2] == v101) {
                          goto LABEL_197;
                        }
                      }
                      else {
                        if (v107 >= v100) {
                          v107 %= v100;
                        }
                        if (v107 != v104) {
                          break;
                        }
                      }
                      v106 = (_QWORD*)*v106;
                    } while (v106 != nullptr);
                  }
                }
              }
            LABEL_221:
              v110 = *(unsigned __int64**)(v56 + 48);
              v109 = *(_QWORD*)(v56 + 56);
              if ((unsigned __int64)v110 >= v109) {
                v112 = *(_QWORD*)(v56 + 40);
                v113 = (char*)v110 - v112;
                v114 = (((__int64)v110 - v112) >> 4) + 1;
                if (v114 >> 60 != 0) {
                  GameRoutine_693e60_alt1();
                }
                v115 = v109 - v112;
                v116 = v115 >> 3;
                if (v115 >> 3 <= v114) {
                  v116 = v114;
                }
                if ((unsigned __int64)v115 >= 0x7FFFFFFFFFFFFFF0LL) {
                  v117 = 0xFFFFFFFFFFFFFFFLL;
                }
                else {
                  v117 = v116;
                }
                if (v117 >> 60 != 0) {
                  goto LABEL_419;
                }
                v118 =
                    fw_memory_HeapManager_Allocate_alt1(*v14, 16 * v117, 16, 0);
                v119 = (unsigned __int64*)&v113[v118];
                *v119 = *v98;
                v119[1] = v98[1];
                v120 = *(char**)(v56 + 40);
                v121 = *(char**)(v56 + 48);
                v122 = &v113[v118 + v120 - v121];
                if (v120 != v121) {
                  v123 = &v113[v118 + v120 - v121];
                  do {
                    *(_QWORD*)v123 = *(_QWORD*)v120;
                    v124 = *((_QWORD*)v120 + 1);
                    v120 += 16;
                    *((_QWORD*)v123 + 1) = v124;
                    v123 += 16;
                  } while (v120 != v121);
                  v120 = *(char**)(v56 + 40);
                }
                v125 = v118 + 16 * v117;
                v111 = v119 + 2;
                *(_QWORD*)(v56 + 40) = v122;
                *(_QWORD*)(v56 + 48) = v119 + 2;
                *(_QWORD*)(v56 + 56) = v125;
                if (v120 != nullptr) {
                  if (*(_QWORD*)(*v14 + 200) != 0) {
                    v126 = 128;
                  }
                  else {
                    v126 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(*v14 + v126,
                                                     (__int64)v120);
                }
              }
              else {
                *v110 = v101;
                v111 = v110 + 2;
                v110[1] = v98[1];
              }
              v127 = *v14;
              *(_QWORD*)(v56 + 48) = v111;
              v128 =
                  (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v127, 40, 16, 0);
              *v128 = 0;
              v128[1] = 0;
              v129 = v128;
              v130 = *v98;
              v128[2] = *v98;
              v128[3] = v130;
              v131 = v98[1];
              v128[1] = v130;
              v128[4] = v131;
              if (GameRoutine_688220_alt1(v56 + 64, v130, v128 + 2) !=
                  nullptr) {
                if (*(_QWORD*)(*v14 + 200) != 0) {
                  v99 = 128;
                }
                else {
                  v99 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(*v14 + v99, (__int64)v129);
              }
              else {
                v132 = *(_QWORD*)(v56 + 72);
                v133 = v129[1];
                v134 = v132 - 1;
                if ((v132 & (v132 - 1)) != 0) {
                  if (v133 >= v132) {
                    v133 %= v132;
                  }
                }
                else {
                  v133 &= v134;
                }
                v135 = *(_QWORD*)(v56 + 64);
                v136 = *(_QWORD**)(v135 + 8 * v133);
                if (v136 != nullptr) {
                  *v129 = *v136;
                  *v136 = v129;
                }
                else {
                  *v129 = *(_QWORD*)v0;
                  *(_QWORD*)v0 = v129;
                  *(_QWORD*)(v135 + 8 * v133) = v0;
                  if (*v129 != 0) {
                    v137 = *(_QWORD*)(*v129 + 8LL);
                    if ((v132 & v134) != 0) {
                      if (v137 >= v132) {
                        v137 %= v132;
                      }
                    }
                    else {
                      v137 &= v134;
                    }
                    *(_QWORD*)(*(_QWORD*)(v56 + 64) + 8 * v137) = v129;
                  }
                }
                ++*(_QWORD*)(v56 + 88);
              }
            LABEL_197:
              v98 += 2;
            } while (v98 != v97);
          }
          v49 += 2;
        } while (v49 != v238);
        v50 = (__int64)v246_.v246;
      }
      if (v50 != 0) {
        v139 = *v14;
        v246_.v247 = v50;
        if (*(_QWORD*)(v139 + 200) != 0) {
          v140 = 128;
        }
        else {
          v140 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(v139 + v140, v50);
      }
      if (v249_.v249 != nullptr) {
        v141 = *v14;
        v249_.v250 = (__int64)v249_.v249;
        if (*(_QWORD*)(v141 + 200) != 0) {
          v142 = 128;
        }
        else {
          v142 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(v141 + v142, (__int64)v249_.v249);
      }
      v43 = v237 + 18;
      if (v237 + 18 == v236) {
        goto LABEL_24;
      }
    }
  }
LABEL_268:
  v143 = GameData_21d9da8;
  v239 = GameData_21d9db0;
  if (GameData_21d9da8 != GameData_21d9db0) {
    v144 = (__int64*)fw_memory_g_heap_manager_ptr;
    do {
      v146 = *(_QWORD*)v143;
      if (*(_QWORD*)(*(_QWORD*)v143 + 40LL) == 0) {
        v163 = GameData_21d9dc8;
        if (GameData_21d9dc8 >= (unsigned __int64)GameData_21d9dd0) {
          v167 = GameData_21d9dc0;
          v168 = GameData_21d9dc8 - GameData_21d9dc0;
          v169 = (GameData_21d9dc8 - GameData_21d9dc0) >> 3;
          v170 = v169 + 1;
          if ((unsigned __int64)(v169 + 1) >> 61 != 0) {
            goto LABEL_422;
          }
          v171 = GameData_21d9dd0 - GameData_21d9dc0;
          if ((GameData_21d9dd0 - GameData_21d9dc0) >> 2 > v170) {
            v170 = v171 >> 2;
          }
          if ((unsigned __int64)v171 >= 0x7FFFFFFFFFFFFFF8LL) {
            v172 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v172 = v170;
          }
          if (v172 != 0) {
            if (v172 >> 61 != 0) {
              goto LABEL_419;
            }
            v173 = fw_memory_HeapManager_Allocate_alt1(*v144, 8 * v172, 16, 0);
          }
          else {
            v173 = 0;
          }
          v183 = v173 + 8 * v172;
          v184 = v173 + v168 - 8 * v169;
          *(_QWORD*)(v173 + v168) = v146;
          v164 = v173 + v168 + 8;
          memcpy_alt1(v184, v167, v168);
          GameData_21d9dc0 = v184;
          GameData_21d9dc8 = v164;
          GameData_21d9dd0 = v183;
          if (v167 != 0) {
            if (*(_QWORD*)(*v144 + 200) != 0) {
              v185 = 128;
            }
            else {
              v185 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v144 + v185, v167);
          }
        }
        else {
          *(_QWORD*)GameData_21d9dc8 = v146;
          v164 = v163 + 8;
        }
        GameData_21d9dc8 = v164;
        v186 = (_QWORD*)GameData_21d9de0;
        if (GameData_21d9de0 < (unsigned __int64)GameData_21d9de8) {
          goto LABEL_353;
        }
        v187 = GameData_21d9dd8;
        v188 = GameData_21d9de0 - GameData_21d9dd8;
        v189 = (GameData_21d9de0 - GameData_21d9dd8) >> 3;
        v190 = v189 + 1;
        if ((unsigned __int64)(v189 + 1) >> 61 == 0) {
          v191 = GameData_21d9de8 - GameData_21d9dd8;
          if ((GameData_21d9de8 - GameData_21d9dd8) >> 2 > v190) {
            v190 = v191 >> 2;
          }
          if ((unsigned __int64)v191 >= 0x7FFFFFFFFFFFFFF8LL) {
            v192 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v192 = v190;
          }
          if (v192 == 0) {
            goto LABEL_363;
          }
          if (v192 >> 61 != 0) {
            goto LABEL_419;
          }
        LABEL_362:
          v199 = fw_memory_HeapManager_Allocate_alt1(*v144, 8 * v192, 16, 0);
        LABEL_364:
          v200 = v199 + 8 * v192;
          v201 = v199 + v188 - 8 * v189;
          *(_QWORD*)(v199 + v188) = v146;
          v196 = v199 + v188 + 8;
          memcpy_alt1(v201, v187, v188);
          GameData_21d9dd8 = v201;
          GameData_21d9de0 = v196;
          GameData_21d9de8 = v200;
          if (v187 != 0) {
            if (*(_QWORD*)(*v144 + 200) != 0) {
              v202 = 128;
            }
            else {
              v202 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v144 + v202, v187);
          }
        LABEL_369:
          GameData_21d9de0 = v196;
          v203 = GameData_21d9df8;
          if (GameData_21d9df8 < (unsigned __int64)GameData_21d9e00) {
            *(_QWORD*)GameData_21d9df8 = v146;
            v145 = v203 + 8;
          }
          else {
            v204 = GameData_21d9df0;
            v205 = GameData_21d9df8 - GameData_21d9df0;
            v206 = (GameData_21d9df8 - GameData_21d9df0) >> 3;
            v207 = v206 + 1;
            if ((unsigned __int64)(v206 + 1) >> 61 != 0) {
              goto LABEL_422;
            }
            v208 = GameData_21d9e00 - GameData_21d9df0;
            if ((GameData_21d9e00 - GameData_21d9df0) >> 2 > v207) {
              v207 = v208 >> 2;
            }
            if ((unsigned __int64)v208 >= 0x7FFFFFFFFFFFFFF8LL) {
              v209 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v209 = v207;
            }
            if (v209 != 0) {
              if (v209 >> 61 != 0) {
                goto LABEL_419;
              }
              v210 =
                  fw_memory_HeapManager_Allocate_alt1(*v144, 8 * v209, 16, 0);
            }
            else {
              v210 = 0;
            }
            v211 = v210 + 8 * v209;
            v212 = v210 + v205 - 8 * v206;
            *(_QWORD*)(v210 + v205) = v146;
            v145 = v210 + v205 + 8;
            memcpy_alt1(v212, v204, v205);
            GameData_21d9df0 = v212;
            GameData_21d9df8 = v145;
            GameData_21d9e00 = v211;
            if (v204 != 0) {
              if (*(_QWORD*)(*v144 + 200) != 0) {
                v213 = 128;
              }
              else {
                v213 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*v144 + v213, v204);
            }
          }
          GameData_21d9df8 = v145;
          goto LABEL_272;
        }
      LABEL_422:
        GameRoutine_7f2680_alt1();
      }
      v147 = *(unsigned __int16*)(v146 + 32);
      if (*(_WORD*)(v146 + 32) == 0) {
        goto LABEL_308;
      }
      v148 = 0;
      v149 = 0;
      do {
        v150 = *(_QWORD*)(v146 + 40);
        v240_.v244 = nullptr;
        v240_.v245 = 0;
        v240_.v242 = nullptr;
        v240_.v243 = 0;
        v240_.v240 = nullptr;
        v240_.v241 = nullptr;
        game_FlagCondition_Append_alt1(&v240_.v240,
                                       (unsigned __int16*)(v150 + 16 * v148));
        v151 = (__int64)v240_.v240;
        if (v240_.v240 == (__int64 (**)(void))v240_.v241) {
          v155 = 4;
          v156 = v240_.v243;
          if (v240_.v243 == 0) {
            goto LABEL_295;
          }
        LABEL_291:
          v157 = *v144;
          v240_.v244 = (__int64 (***)(void))v156;
          if (*(_QWORD*)(v157 + 200) != 0) {
            v158 = 128;
          }
          else {
            v158 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(v157 + v158, v156);
          v151 = (__int64)v240_.v240;
          goto LABEL_295;
        }
        v152 = 0;
        v153 = v240_.v240;
        do {
          if (*((_BYTE*)v153 + 16) == 1) {
            v152 |= *v153 == (__int64 (*)())GameData_21d9b48;
            if (*v153 == (__int64 (*)())GameData_21d9b58) {
              v152 |= 2u;
            }
          }
          v153 += 3;
        } while (v153 != (__int64 (**)(void))v240_.v241);
        if (v152 == 2) {
          v154 = 2;
        }
        else {
          v154 = 4;
        }
        if (v152 == 1) {
          v155 = 1;
        }
        else {
          v155 = v154;
        }
        v156 = v240_.v243;
        if (v240_.v243 != 0) {
          goto LABEL_291;
        }
      LABEL_295:
        if (v151 != 0) {
          v159 = *v144;
          v240_.v241 = (__int64*)v151;
          if (*(_QWORD*)(v159 + 200) != 0) {
            v160 = 128;
          }
          else {
            v160 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(v159 + v160, v151);
        }
        ++v148;
        v149 |= v155;
      } while (v148 != v147);
      if (v149 == 1) {
        v181 = GameData_21d9dc8;
        if (GameData_21d9dc8 >= (unsigned __int64)GameData_21d9dd0) {
          v221 = GameData_21d9dc0;
          v222 = GameData_21d9dc8 - GameData_21d9dc0;
          v223 = (GameData_21d9dc8 - GameData_21d9dc0) >> 3;
          v224 = v223 + 1;
          if ((unsigned __int64)(v223 + 1) >> 61 != 0) {
            goto LABEL_422;
          }
          v225 = GameData_21d9dd0 - GameData_21d9dc0;
          if ((GameData_21d9dd0 - GameData_21d9dc0) >> 2 > v224) {
            v224 = v225 >> 2;
          }
          if ((unsigned __int64)v225 >= 0x7FFFFFFFFFFFFFF8LL) {
            v226 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v226 = v224;
          }
          if (v226 != 0) {
            if (v226 >> 61 != 0) {
              goto LABEL_419;
            }
            v227 = fw_memory_HeapManager_Allocate_alt1(*v144, 8 * v226, 16, 0);
          }
          else {
            v227 = 0;
          }
          v231 = v227 + 8 * v226;
          v232 = v227 + v222 - 8 * v223;
          *(_QWORD*)(v227 + v222) = v146;
          v182 = v227 + v222 + 8;
          memcpy_alt1(v232, v221, v222);
          GameData_21d9dc0 = v232;
          GameData_21d9dc8 = v182;
          GameData_21d9dd0 = v231;
          if (v221 != 0) {
            if (*(_QWORD*)(*v144 + 200) != 0) {
              v233 = 128;
            }
            else {
              v233 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v144 + v233, v221);
          }
        }
        else {
          *(_QWORD*)GameData_21d9dc8 = v146;
          v182 = v181 + 8;
        }
        GameData_21d9dc8 = v182;
        goto LABEL_272;
      }
      if (v149 != 2) {
      LABEL_308:
        v165 = GameData_21d9dc8;
        if (GameData_21d9dc8 < (unsigned __int64)GameData_21d9dd0) {
          *(_QWORD*)GameData_21d9dc8 = v146;
          v166 = v165 + 8;
          goto LABEL_352;
        }
        v174 = GameData_21d9dc0;
        v175 = GameData_21d9dc8 - GameData_21d9dc0;
        v176 = (GameData_21d9dc8 - GameData_21d9dc0) >> 3;
        v177 = v176 + 1;
        if ((unsigned __int64)(v176 + 1) >> 61 == 0) {
          v178 = GameData_21d9dd0 - GameData_21d9dc0;
          if ((GameData_21d9dd0 - GameData_21d9dc0) >> 2 > v177) {
            v177 = v178 >> 2;
          }
          if ((unsigned __int64)v178 >= 0x7FFFFFFFFFFFFFF8LL) {
            v179 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v179 = v177;
          }
          if (v179 != 0) {
            if (v179 >> 61 != 0) {
              goto LABEL_419;
            }
            v180 = fw_memory_HeapManager_Allocate_alt1(*v144, 8 * v179, 16, 0);
          }
          else {
            v180 = 0;
          }
          v193 = v180 + 8 * v179;
          v194 = v180 + v175 - 8 * v176;
          *(_QWORD*)(v180 + v175) = v146;
          v166 = v180 + v175 + 8;
          memcpy_alt1(v194, v174, v175);
          GameData_21d9dc0 = v194;
          GameData_21d9dc8 = v166;
          GameData_21d9dd0 = v193;
          if (v174 != 0) {
            if (*(_QWORD*)(*v144 + 200) != 0) {
              v195 = 128;
            }
            else {
              v195 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v144 + v195, v174);
          }
        LABEL_352:
          GameData_21d9dc8 = v166;
          v186 = (_QWORD*)GameData_21d9de0;
          if (GameData_21d9de0 < (unsigned __int64)GameData_21d9de8) {
          LABEL_353:
            *v186 = v146;
            v196 = (__int64)(v186 + 1);
            goto LABEL_369;
          }
          v187 = GameData_21d9dd8;
          v188 = GameData_21d9de0 - GameData_21d9dd8;
          v189 = (GameData_21d9de0 - GameData_21d9dd8) >> 3;
          v197 = v189 + 1;
          if ((unsigned __int64)(v189 + 1) >> 61 == 0) {
            v198 = GameData_21d9de8 - GameData_21d9dd8;
            if ((GameData_21d9de8 - GameData_21d9dd8) >> 2 > v197) {
              v197 = v198 >> 2;
            }
            if ((unsigned __int64)v198 >= 0x7FFFFFFFFFFFFFF8LL) {
              v192 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v192 = v197;
            }
            if (v192 != 0) {
              if (v192 >> 61 != 0) {
                goto LABEL_419;
              }
              goto LABEL_362;
            }
          LABEL_363:
            v199 = 0;
            goto LABEL_364;
          }
        }
        goto LABEL_422;
      }
      v161 = GameData_21d9de0;
      if (GameData_21d9de0 < (unsigned __int64)GameData_21d9de8) {
        *(_QWORD*)GameData_21d9de0 = v146;
        v162 = v161 + 8;
        goto LABEL_410;
      }
      v214 = GameData_21d9dd8;
      v215 = GameData_21d9de0 - GameData_21d9dd8;
      v216 = (GameData_21d9de0 - GameData_21d9dd8) >> 3;
      v217 = v216 + 1;
      if ((unsigned __int64)(v216 + 1) >> 61 != 0) {
        goto LABEL_422;
      }
      v218 = GameData_21d9de8 - GameData_21d9dd8;
      if ((GameData_21d9de8 - GameData_21d9dd8) >> 2 > v217) {
        v217 = v218 >> 2;
      }
      if ((unsigned __int64)v218 >= 0x7FFFFFFFFFFFFFF8LL) {
        v219 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v219 = v217;
      }
      if (v219 != 0) {
        if (v219 >> 61 == 0) {
          v220 = fw_memory_HeapManager_Allocate_alt1(*v144, 8 * v219, 16, 0);
          goto LABEL_405;
        }
      LABEL_419:
        GameRoutine_60a210_alt1();
      }
      v220 = 0;
    LABEL_405:
      v228 = v220 + 8 * v219;
      v229 = v220 + v215 - 8 * v216;
      *(_QWORD*)(v220 + v215) = v146;
      v162 = v220 + v215 + 8;
      memcpy_alt1(v229, v214, v215);
      GameData_21d9dd8 = v229;
      GameData_21d9de0 = v162;
      GameData_21d9de8 = v228;
      if (v214 != 0) {
        if (*(_QWORD*)(*v144 + 200) != 0) {
          v230 = 128;
        }
        else {
          v230 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v144 + v230, v214);
      }
    LABEL_410:
      GameData_21d9de0 = v162;
    LABEL_272:
      v143 += 8;
    } while (v143 != v239);
  }
}

__int64 AssetTableFile_7e6e40()
{
  _QWORD* v0;
  __int64 v1;
  __int64 v2;
  __int64 result;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;

  if (GameData_21d9ad8 != 0) {
    v0 = (_QWORD*)GameData_21d9ad0;
    if (GameData_21d9ad0 != 0) {
      v1 = fw_memory_g_heap_manager_ptr;
      do {
        v4 = (_QWORD*)*v0;
        v5 = (_QWORD*)v0[10];
        if (v5 != nullptr) {
          do {
            v6 = (_QWORD*)*v5;
            if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
              v7 = 128;
            }
            else {
              v7 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v1 + v7, v5);
            v5 = v6;
          } while (v6 != nullptr);
        }
        v8 = v0[8];
        v0[8] = 0;
        if (v8 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
            v9 = 128;
          }
          else {
            v9 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v1 + v9, v8);
        }
        v10 = v0[5];
        if (v10 != 0) {
          v11 = *(_QWORD*)v1;
          v0[6] = v10;
          if (*(_QWORD*)(v11 + 200) != 0) {
            v12 = 128;
          }
          else {
            v12 = 56;
          }
          nn_mem_StandardAllocator_Free(v11 + v12, v10);
        }
        if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
          v2 = 128;
        }
        else {
          v2 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v1 + v2, v0);
        v0 = v4;
      } while (v4 != nullptr);
    }
    GameData_21d9ad0 = 0;
    if (GameData_21d9ac8 != 0) {
      v13 = GameData_21d9ac8 & 7;
      if ((unsigned __int64)GameData_21d9ac8 >= 8) {
        v15 = GameData_21d9ac8 & 0xFFFFFFFFFFFFFFF8LL;
        v14 = 0;
        do {
          *(_QWORD*)(GameData_21d9ac0 + 8 * v14) = 0;
          *(_QWORD*)(GameData_21d9ac0 + 8 * v14 + 8) = 0;
          *(_QWORD*)(GameData_21d9ac0 + 8 * v14 + 16) = 0;
          *(_QWORD*)(GameData_21d9ac0 + 8 * v14 + 24) = 0;
          *(_QWORD*)(GameData_21d9ac0 + 8 * v14 + 32) = 0;
          *(_QWORD*)(GameData_21d9ac0 + 8 * v14 + 40) = 0;
          *(_QWORD*)(GameData_21d9ac0 + 8 * v14 + 48) = 0;
          v16 = GameData_21d9ac0 + 8 * v14;
          v14 += 8;
          *(_QWORD*)(v16 + 56) = 0;
        } while (v15 != v14);
      }
      else {
        v14 = 0;
      }
      if (v13 != 0) {
        v17 = 8 * v14;
        do {
          --v13;
          *(_QWORD*)(GameData_21d9ac0 + v17) = 0;
          v17 += 8;
        } while (v13 != 0);
      }
    }
    GameData_21d9ad8 = 0;
  }
  return result;
}

__int64 AssetTableFile_Unknown5()
{
  _QWORD* v0;
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;

  GameData_21d9db0 = GameData_21d9da8;
  if (GameData_21d9d98 != 0) {
    v0 = (_QWORD*)GameData_21d9d90;
    if (GameData_21d9d90 != 0) {
      v1 = fw_memory_g_heap_manager_ptr;
      do {
        v3 = (_QWORD*)*v0;
        v4 = v0[3];
        if (v4 != 0) {
          v5 = *(_QWORD*)v1;
          v0[4] = v4;
          if (*(_QWORD*)(v5 + 200) != 0) {
            v6 = 128;
          }
          else {
            v6 = 56;
          }
          nn_mem_StandardAllocator_Free(v5 + v6, v4);
        }
        if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
          v2 = 128;
        }
        else {
          v2 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v1 + v2, v0);
        v0 = v3;
      } while (v3 != nullptr);
    }
    GameData_21d9d90 = 0;
    if (GameData_21d9d88 != 0) {
      v7 = GameData_21d9d88 & 7;
      if ((unsigned __int64)GameData_21d9d88 >= 8) {
        v9 = GameData_21d9d88 & 0xFFFFFFFFFFFFFFF8LL;
        v8 = 0;
        do {
          *(_QWORD*)(GameData_21d9d80 + 8 * v8) = 0;
          *(_QWORD*)(GameData_21d9d80 + 8 * v8 + 8) = 0;
          *(_QWORD*)(GameData_21d9d80 + 8 * v8 + 16) = 0;
          *(_QWORD*)(GameData_21d9d80 + 8 * v8 + 24) = 0;
          *(_QWORD*)(GameData_21d9d80 + 8 * v8 + 32) = 0;
          *(_QWORD*)(GameData_21d9d80 + 8 * v8 + 40) = 0;
          *(_QWORD*)(GameData_21d9d80 + 8 * v8 + 48) = 0;
          v10 = GameData_21d9d80 + 8 * v8;
          v8 += 8;
          *(_QWORD*)(v10 + 56) = 0;
        } while (v9 != v8);
      }
      else {
        v8 = 0;
      }
      if (v7 != 0) {
        v11 = 8 * v8;
        do {
          --v7;
          *(_QWORD*)(GameData_21d9d80 + v11) = 0;
          v11 += 8;
        } while (v7 != 0);
      }
    }
    GameData_21d9d98 = 0;
  }
  GameData_21d9dc8 = GameData_21d9dc0;
  GameData_21d9de0 = GameData_21d9dd8;
  GameData_21d9df8 = GameData_21d9df0;
  GameData_21d9e10 = GameData_21d9e08;
  return AssetTableFile_7e6e40();
}

__int64 AssetTableFile_7e7200(__int64 a1)
{
  __int64 v2;
  _BYTE* v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* i;
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 j;
  _BYTE v12[32];
  _BYTE* v13;

  v2 = *(_QWORD*)(a1 + 32);
  if (v2 != 0) {
    if (v2 == a1) {
      v13 = v12;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v2 + 24LL))(v2, v12);
      v3 = v13;
    }
    else {
      v3 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      v13 = v3;
    }
    v5 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
    v4 = v5;
    *v5 = GameData_1f9c968;
    v6 = v5 + 2;
    if (v3 != nullptr) {
      if (v3 == v12) {
        v5[6] = v6;
        (*(void (**)(_BYTE*))(*(_QWORD*)v3 + 24LL))(v3);
      }
      else {
        v5[6] = (*(__int64 (**)(_BYTE*, _QWORD*))(*(_QWORD*)v3 + 16LL))(v3, v6);
      }
    }
    else {
      v5[6] = 0;
    }
  }
  else {
    v13 = nullptr;
    v4 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
    v4[6] = 0;
    *v4 = GameData_1f9c968;
  }
  for (i = (_QWORD*)GameData_21d9ad0; i != nullptr; i = (_QWORD*)*i) {
    v10 = i[5];
    for (j = i[6]; v10 != j; v10 += 16) {
      (*(void (**)(_QWORD*, __int64))(*v4 + 48LL))(v4, v10);
    }
  }
  (*(void (**)(_QWORD*))(*v4 + 40LL))(v4);
  result = (__int64)v13;
  if (v13 == v12) {
    v9 = 32;
  }
  else {
    if (v13 == nullptr) {
      return result;
    }
    v9 = 40;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v13 + v9))((__int64)v13);
}

_QWORD* AssetTableFile_7e73c0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2;
  __int64 v4;
  unsigned __int64 v5;
  _QWORD* v7;
  _QWORD* v8;
  void* v9;
  unsigned __int64 v10;
  __int64 v11;

  if (a1 == 0) {
    return &GameData_1b43658;
  }
  v2 = game_HashString(*(_QWORD*)(a1 + 632), a2);
  if (v2 != 0 && GameData_21d9ac8 != 0 && GameData_21d9ad8 != 0) {
    v4 = GameData_21d9ac8 - 1;
    if ((GameData_21d9ac8 & (GameData_21d9ac8 - 1)) != 0) {
      v5 = v2;
      if (v2 >= GameData_21d9ac8) {
        v5 = v2 % GameData_21d9ac8;
      }
    }
    else {
      v5 = v4 & v2;
    }
    v7 = *(_QWORD**)(GameData_21d9ac0 + 8 * v5);
    if (v7 != nullptr) {
      v8 = (_QWORD*)*v7;
      if (*v7 != 0) {
        v9 = &GameData_1b43658;
        if ((GameData_21d9ac8 & v4) == 0) {
          while (1) {
            v11 = v8[1];
            if (v11 == v2) {
              if (v8[2] == v2) {
                return v8 + 5;
              }
            }
            else if ((v11 & v4) != v5) {
              return v9;
            }
            v8 = (_QWORD*)*v8;
            if (v8 == nullptr) {
              return v9;
            }
          }
        }
        while (1) {
          v10 = v8[1];
          if (v10 == v2) {
            break;
          }
          if (v10 >= GameData_21d9ac8) {
            v10 %= (unsigned __int64)GameData_21d9ac8;
          }
          if (v10 != v5) {
            return v9;
          }
        LABEL_19:
          v8 = (_QWORD*)*v8;
          if (v8 == nullptr) {
            return v9;
          }
        }
        if (v8[2] != v2) {
          goto LABEL_19;
        }
        return v8 + 5;
      }
    }
  }
  return &GameData_1b43658;
}

__int64 AssetTableFile_7e7620(__int64 result, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64* v9;
  __int64 v10;
  char v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  _QWORD* v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  struct {
    _QWORD v40[4];
    _QWORD* v41;
  } v40_;
  struct {
    _QWORD v42[4];
    _QWORD* v43;
  } v42_;
  struct {
    _QWORD v44[4];
    _QWORD* v45;
  } v44_;

  if (a2 == 0) {
    return result;
  }
  if (*(_QWORD*)(a2 + 392) != 0) {
    v3 = result;
    ConditionMap_7ea0c0((unsigned __int8*)(a2 + 2104));
    v4 = *(_QWORD*)(a2 + 392);
    if (v4 != 0) {
      v5 = *(unsigned __int8*)(v4 + 441);
      if (v5 == 3) {
        if (*(unsigned __int8*)(a2 + 2136) <= 1u) {
          LOBYTE(v5) = 1;
        }
        else {
          LOBYTE(v5) = *(_BYTE*)(a2 + 2136);
        }
      }
    }
    else {
      LOBYTE(v5) = 0;
    }
    AssetTableFile_7ea4e0_alt1(v5);
    v6 = *(_QWORD*)(a2 + 392);
    if (v6 != 0) {
      v7 = *(_QWORD*)(a2 + 440);
      if (v7 != 0) {
        v8 = *(_BYTE*)(v7 + 16);
      }
      else {
        v8 = 9;
      }
      if (((1 << v8) & 0xF1) != 0 &&
              ((LODWORD(v44_.v44[0]) = *game_g_shared_system_skills_ptr & 0xFFF,
                (game_HasSkill_alt1((_QWORD*)(a2 + 1744),
                                    (unsigned int*)v44_.v44) &
                 1) == 0) ||
               ((v10 = *(_QWORD*)(a2 + 440)) == 0 ? (v11 = 9)
                                                  : (v11 = *(_BYTE*)(v10 + 16)),
                ((1 << v11) & 0xF1) == 0)) &&
              game_GameModeData_instance_ != 0 &&
              (v12 = *(_QWORD*)(game_GameModeData_instance_ + 96)) != 0 &&
              (v9 = *(__int64**)(v12 + 336)) != nullptr ||
          (v9 = *(__int64**)(v6 + 336)) != nullptr) {
        v9 = (__int64*)GameRoutine_96de20_alt1((__int64)v9);
      }
    }
    else {
      v9 = nullptr;
    }
    AssetTableFile_7ea680_alt1(v9);
    v13 = (__int64*)game_Unit_GetJob_alt1(a2);
    ConditionMap_7ea800(v13);
    GameHr_7eae80(*(__int64**)(a2 + 392), *(unsigned __int8*)(a2 + 2088));
    if (*(_WORD*)(a2 + 1952) != 0) {
      ConditionMap_7ec000(*(__int64**)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                       8LL * *(unsigned __int16*)(a2 + 1952)));
    }
    v14 = GameRoutine_6d36d0_alt1((_QWORD*)a2);
    AssetTableFile_7eb500_alt1((unsigned __int8*)v14);
    v40_.v40[0] = GameData_1f9c9e8;
    v40_.v41 = v40_.v40;
    v44_.v45 = v44_.v44;
    v42_.v42[0] = GameData_1f93088;
    v42_.v42[1] = v40_.v40;
    v42_.v43 = v42_.v42;
    v44_.v44[0] = GameData_1f92f88;
    v44_.v44[1] = 13;
    v44_.v44[2] = v42_.v42;
    game_UnitItemList_EachItem_alt1((_WORD*)(a2 + 828), (__int64)v44_.v44);
    if (v44_.v45 == v44_.v44) {
      v15 = 32;
    }
    else {
      if (v44_.v45 == nullptr) {
        goto LABEL_32;
      }
      v15 = 40;
    }
    (*(void (**)(__int64))(*v44_.v45 + v15))((__int64)v44_.v45);
  LABEL_32:
    if (v42_.v43 == v42_.v42) {
      v16 = 32;
    }
    else {
      if (v42_.v43 == nullptr) {
        goto LABEL_37;
      }
      v16 = 40;
    }
    (*(void (**)(__int64))(*v42_.v43 + v16))((__int64)v42_.v43);
  LABEL_37:
    if (v40_.v41 == v40_.v40) {
      v17 = 32;
    }
    else {
      if (v40_.v41 == nullptr) {
      LABEL_42:
        v18 = *(_QWORD*)(a2 + 440);
        if (v18 != 0) {
          v19 = *(_BYTE*)(v18 + 16);
        }
        else {
          v19 = 9;
        }
        AssetTableFile_7eb740_alt1(v19);
        AssetTableFile_7eb9c0(*(_DWORD**)(a2 + 1776), *(_DWORD**)(a2 + 1784));
        game_anonymous_ConditionMap_Add_7ebae0(GameData_21c96d8);
        v20 = *(_QWORD*)(a2 + 440);
        result = v3;
        if (v20 != 0 && *(unsigned __int8*)(v20 + 16) <= 3u &&
            GameData_21ca300 != 0 &&
            *(unsigned __int8*)(GameData_21ca300 + 18) >
                (unsigned int)(unsigned __int8)(*(_BYTE*)(a2 + 584) -
                                                *(_BYTE*)(GameData_21ca300 +
                                                          16)) &&
            *(unsigned __int8*)(GameData_21ca300 + 19) >
                (unsigned int)(unsigned __int8)(*(_BYTE*)(a2 + 585) -
                                                *(_BYTE*)(GameData_21ca300 +
                                                          17))) {
          v21 = *(char*)(a2 + 584) + 32 * *(char*)(a2 + 585);
          if (v21 >= 0x400) {
            v21 = 0;
          }
          v22 = *(
              _QWORD*)(*(_QWORD*)(*GameData_212c930 + 64) +
                       8LL * *(unsigned __int16*)(*(_QWORD*)(GameData_21ca300 +
                                                             72) +
                                                  2LL * v21 + 8));
          if (v22 != 0) {
            v23 = game_HashString_alt1(*(_QWORD*)(v22 + 8));
            if (v23 != 0) {
              v24 = *(_QWORD*)(GameData_21d9d00 + 8 * (v23 & 0xFFF));
              if (v24 != 0) {
                v25 = *(_QWORD**)(GameData_21d9d00 + 8 * (v23 & 0xFFF));
                while (*v25 != v23) {
                  v25 = (_QWORD*)v25[1];
                  if (v25 == nullptr) {
                    v26 = *(_QWORD**)(GameData_21d9d00 + 8 * (v23 & 0xFFF));
                    while (*v26 != v23) {
                      v26 = (_QWORD*)v26[1];
                      if (v26 == nullptr) {
                        do {
                          v27 = v24;
                          v24 = *(_QWORD*)(v24 + 8);
                        } while (v24 != 0);
                        *(_QWORD*)(v27 + 8) =
                            ConditionMap_7f2ec0(&GameData_21d9ce8, v23);
                        goto LABEL_64;
                      }
                    }
                    break;
                  }
                }
              }
              else {
                LODWORD(v44_.v44[0]) = v23 & 0xFFF;
                *(_QWORD*)(GameData_21d9d00 + 8 * (v23 & 0xFFF)) =
                    ConditionMap_7f2ec0(&GameData_21d9ce8, v23);
                GameRoutine_7d6200_alt1(&GameData_21d9d18, v44_.v44);
              }
            }
          LABEL_64:
            v28 = *(__int64**)(v22 + 48);
            result = v3;
            if (v28 != nullptr) {
              v29 = *v28;
              if (*v28 != 0) {
                v30 = *(_QWORD*)(GameData_21d9d00 + 8 * (*v28 & 0xFFF));
                if (v30 != 0) {
                  v31 = *(_QWORD**)(GameData_21d9d00 + 8 * (v29 & 0xFFF));
                  while (*v31 != v29) {
                    v31 = (_QWORD*)v31[1];
                    if (v31 == nullptr) {
                      v32 = *(_QWORD**)(GameData_21d9d00 + 8 * (v29 & 0xFFF));
                      while (*v32 != v29) {
                        v32 = (_QWORD*)v32[1];
                        if (v32 == nullptr) {
                          do {
                            v33 = v30;
                            v30 = *(_QWORD*)(v30 + 8);
                          } while (v30 != 0);
                          *(_QWORD*)(v33 + 8) =
                              ConditionMap_7f2ec0(&GameData_21d9ce8, v29);
                          goto LABEL_76;
                        }
                      }
                      goto LABEL_77;
                    }
                  }
                }
                else {
                  LODWORD(v44_.v44[0]) = v29 & 0xFFF;
                  *(_QWORD*)(GameData_21d9d00 + 8 * (v29 & 0xFFF)) =
                      ConditionMap_7f2ec0(&GameData_21d9ce8, v29);
                  GameRoutine_7d6200_alt1(&GameData_21d9d18, v44_.v44);
                LABEL_76:
                  result = v3;
                }
              }
            }
          }
        }
        goto LABEL_77;
      }
      v17 = 40;
    }
    (*(void (**)(__int64))(*v40_.v41 + v17))((__int64)v40_.v41);
    goto LABEL_42;
  }
LABEL_77:
  if (GameData_21d9be8 != 0) {
    v35 = *(_QWORD*)(GameData_21d9d00 + 8 * (GameData_21d9be8 & 0xFFF));
    if (v35 != 0) {
      v36 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9be8 & 0xFFF));
      while (*v36 != GameData_21d9be8) {
        v36 = (_QWORD*)v36[1];
        if (v36 == nullptr) {
          v37 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9be8 & 0xFFF));
          while (*v37 != GameData_21d9be8) {
            v37 = (_QWORD*)v37[1];
            if (v37 == nullptr) {
              v38 = result;
              do {
                v39 = v35;
                v35 = *(_QWORD*)(v35 + 8);
              } while (v35 != 0);
              *(_QWORD*)(v39 + 8) =
                  ConditionMap_7f2ec0(&GameData_21d9ce8, GameData_21d9be8);
              return v38;
            }
          }
          return result;
        }
      }
    }
    else {
      v38 = result;
      LODWORD(v44_.v44[0]) = GameData_21d9be8 & 0xFFF;
      v34 = GameData_21d9be8 & 0xFFF;
      *(_QWORD*)(GameData_21d9d00 + 8 * v34) =
          ConditionMap_7f2ec0(&GameData_21d9ce8, GameData_21d9be8);
      GameRoutine_7d6200_alt1(&GameData_21d9d18, v44_.v44);
      return v38;
    }
  }
  return result;
}

__int64 AssetTableFile_7e7b20(__int64 result, unsigned __int64* a2)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  int* v12;
  int v13;
  unsigned __int64 v14;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v29;
  unsigned __int64 v30;
  _QWORD* v31;
  _QWORD* v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  _QWORD* v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  _QWORD* v42;
  _QWORD* v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;

  v3 = *a2;
  if (v3 == 0) {
    return result;
  }
  v4 = *(_QWORD*)(GameData_21c9b20 + 96);
  if (v4 == 0 || *(_QWORD*)(GameData_21c9b20 + 112) == 0) {
    goto LABEL_28;
  }
  v6 = v4 - 1;
  if ((v4 & (v4 - 1)) != 0) {
    v7 = v3;
    if (v3 >= v4) {
      v7 = v3 % v4;
    }
  }
  else {
    v7 = v6 & v3;
  }
  v8 = *(_QWORD**)(*(_QWORD*)(GameData_21c9b20 + 88) + 8 * v7);
  if (v8 == nullptr) {
    goto LABEL_28;
  }
  v9 = (_QWORD*)*v8;
  if (v9 == nullptr) {
    goto LABEL_28;
  }
  if ((v4 & v6) == 0) {
    while (1) {
      v11 = v9[1];
      if (v11 == v3) {
        if (v9[2] == v3) {
          goto LABEL_26;
        }
      }
      else if ((v11 & v6) != v7) {
        goto LABEL_28;
      }
      v9 = (_QWORD*)*v9;
      if (v9 == nullptr) {
        goto LABEL_28;
      }
    }
  }
  while (1) {
    v10 = v9[1];
    if (v10 == v3) {
      break;
    }
    if (v10 >= v4) {
      v10 %= v4;
    }
    if (v10 != v7) {
      goto LABEL_28;
    }
  LABEL_15:
    v9 = (_QWORD*)*v9;
    if (v9 == nullptr) {
      goto LABEL_28;
    }
  }
  if (v9[2] != v3) {
    goto LABEL_15;
  }

LABEL_26:
  if (v9[3] != 0) {
    GameData_21d9d60 = v9[3];
    return result;
  }

LABEL_28:
  v12 = (int*)a2[1];
  if (v12 != nullptr) {
    v13 = *v12;
    switch (v13) {
    case 1598310729:
      v27 = *(_QWORD*)(GameData_21c99b8 + 96);
      if (v27 != 0 && *(_QWORD*)(GameData_21c99b8 + 112) != 0) {
        v29 = v27 - 1;
        if ((v27 & (v27 - 1)) != 0) {
          v30 = v3;
          if (v3 >= v27) {
            v30 = v3 % v27;
          }
        }
        else {
          v30 = v29 & v3;
        }
        v37 = *(_QWORD**)(*(_QWORD*)(GameData_21c99b8 + 88) + 8 * v30);
        if (v37 != nullptr) {
          v38 = (_QWORD*)*v37;
          if (v38 != nullptr) {
            if ((v27 & v29) == 0) {
              while (1) {
                v40 = v38[1];
                if (v40 == v3) {
                  if (v38[2] == v3) {
                    goto LABEL_122;
                  }
                }
                else if ((v40 & v29) != v30) {
                  goto LABEL_99;
                }
                v38 = (_QWORD*)*v38;
                if (v38 == nullptr) {
                  goto LABEL_99;
                }
              }
            }
            do {
              v39 = v38[1];
              if (v39 == v3) {
                if (v38[2] == v3) {
                LABEL_122:
                  v35 = result;
                  v41 = v38[3];
                  goto LABEL_100;
                }
              }
              else {
                if (v39 >= v27) {
                  v39 %= v27;
                }
                if (v39 != v30) {
                  break;
                }
              }
              v38 = (_QWORD*)*v38;
            } while (v38 != nullptr);
          }
        }
      }
    LABEL_99:
      v35 = result;
      v41 = 0;
    LABEL_100:
      GameRoutine_7ec000(v41);
      return v35;
    case 1598310730:
      v23 = *(_QWORD*)(GameData_21c99c0 + 96);
      if (v23 != 0 && *(_QWORD*)(GameData_21c99c0 + 112) != 0) {
        v25 = v23 - 1;
        if ((v23 & (v23 - 1)) != 0) {
          v26 = v3;
          if (v3 >= v23) {
            v26 = v3 % v23;
          }
        }
        else {
          v26 = v25 & v3;
        }
        v31 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c0 + 88) + 8 * v26);
        if (v31 != nullptr) {
          v32 = (_QWORD*)*v31;
          if (v32 != nullptr) {
            if ((v23 & v25) == 0) {
              while (1) {
                v34 = v32[1];
                if (v34 == v3) {
                  if (v32[2] == v3) {
                    goto LABEL_121;
                  }
                }
                else if ((v34 & v25) != v26) {
                  goto LABEL_81;
                }
                v32 = (_QWORD*)*v32;
                if (v32 == nullptr) {
                  goto LABEL_81;
                }
              }
            }
            do {
              v33 = v32[1];
              if (v33 == v3) {
                if (v32[2] == v3) {
                LABEL_121:
                  v35 = result;
                  v36 = v32[3];
                  goto LABEL_82;
                }
              }
              else {
                if (v33 >= v23) {
                  v33 %= v23;
                }
                if (v33 != v26) {
                  break;
                }
              }
              v32 = (_QWORD*)*v32;
            } while (v32 != nullptr);
          }
        }
      }
    LABEL_81:
      v35 = result;
      v36 = 0;
    LABEL_82:
      GameRoutine_7ea800(v36);
      return v35;
    case 1598310736:
      v14 = *(_QWORD*)(GameData_21c99c8 + 96);
      if (v14 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
        goto LABEL_117;
      }
      v16 = v14 - 1;
      if ((v14 & (v14 - 1)) != 0) {
        v17 = v3;
        if (v3 >= v14) {
          v17 = v3 % v14;
        }
      }
      else {
        v17 = v16 & v3;
      }
      v42 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v17);
      if (v42 == nullptr || (v43 = (_QWORD*)*v42) == nullptr) {
      LABEL_117:
        v35 = result;
        v46 = 0;
        goto LABEL_118;
      }
      if ((v14 & v16) == 0) {
        while (1) {
          v45 = v43[1];
          if (v45 == v3) {
            if (v43[2] == v3) {
              goto LABEL_123;
            }
          }
          else if ((v45 & v16) != v17) {
            goto LABEL_117;
          }
          v43 = (_QWORD*)*v43;
          if (v43 == nullptr) {
            goto LABEL_117;
          }
        }
      }
      while (2) {
        v44 = v43[1];
        if (v44 != v3) {
          if (v44 >= v14) {
            v44 %= v14;
          }
          if (v44 != v17) {
            goto LABEL_117;
          }
        }
        else if (v43[2] == v3) {
        LABEL_123:
          v35 = result;
          v46 = v43[3];
        LABEL_118:
          AssetTableFile_7eae80(v46, 0);
          return v35;
        }
        v43 = (_QWORD*)*v43;
        if (v43 == nullptr) {
          goto LABEL_117;
        }
        continue;
      }
    default:
      break;
    }
  }
  v18 = *(_QWORD*)(GameData_21d9d00 + 8 * (v3 & 0xFFF));
  if (v18 != 0) {
    v19 = *(_QWORD**)(GameData_21d9d00 + 8 * (v3 & 0xFFF));
    do {
      if (*v19 == v3) {
        return result;
      }
      v19 = (_QWORD*)v19[1];
    } while (v19 != nullptr);
    v20 = *(_QWORD**)(GameData_21d9d00 + 8 * (v3 & 0xFFF));
    do {
      if (*v20 == v3) {
        return result;
      }
      v20 = (_QWORD*)v20[1];
    } while (v20 != nullptr);
    v21 = result;
    do {
      v22 = v18;
      v18 = *(_QWORD*)(v18 + 8);
    } while (v18 != 0);
    *(_QWORD*)(v22 + 8) = GameRoutine_7f2ec0(&GameData_21d9ce8);
  }
  else {
    v21 = result;
    v47 = v3 & 0xFFF;
    *(_QWORD*)(GameData_21d9d00 + 8 * (v3 & 0xFFF)) =
        GameRoutine_7f2ec0(&GameData_21d9ce8);
    GameRoutine_7d6200(&GameData_21d9d18, &v47);
  }
  return v21;
}

__int64 AssetTableFile_7e95e0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  int v10;

  if (a2 != 0) {
    AssetTableFile_7eae80(a2, a3);
    GameRoutine_7ebae0(GameData_21c96d8);
    if (GameData_21d9be8 != 0) {
      v5 = *(_QWORD*)(GameData_21d9d00 + 8 * (GameData_21d9be8 & 0xFFF));
      if (v5 != 0) {
        v6 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9be8 & 0xFFF));
        while (*v6 != GameData_21d9be8) {
          v6 = (_QWORD*)v6[1];
          if (v6 == nullptr) {
            v7 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9be8 & 0xFFF));
            while (*v7 != GameData_21d9be8) {
              v7 = (_QWORD*)v7[1];
              if (v7 == nullptr) {
                do {
                  v8 = v5;
                  v5 = *(_QWORD*)(v5 + 8);
                } while (v5 != 0);
                *(_QWORD*)(v8 + 8) = GameRoutine_7f2ec0(&GameData_21d9ce8);
                return a1;
              }
            }
            return a1;
          }
        }
      }
      else {
        v10 = GameData_21d9be8 & 0xFFF;
        v4 = GameData_21d9be8 & 0xFFF;
        *(_QWORD*)(GameData_21d9d00 + 8 * v4) =
            GameRoutine_7f2ec0(&GameData_21d9ce8);
        GameRoutine_7d6200(&GameData_21d9d18, &v10);
      }
    }
  }
  return a1;
}

__int64 AssetTableFile_7e9880(__int64 result)
{
  int* v1;
  __int64 v2;
  __int64 v3;

  *(_QWORD*)(result + 200) = 0;
  *(_QWORD*)(result + 216) = 0;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 88) = 0;
  *(_QWORD*)(result + 96) = 0;
  *(_QWORD*)(result + 104) = 0;
  *(_DWORD*)(result + 384) = 1065353216;
  v1 = (int*)GameData_21d9d18;
  v2 = GameData_21d9d20;
  *(_QWORD*)(result + 112) = 0;
  *(_QWORD*)(result + 120) = 0;
  *(_QWORD*)(result + 128) = 0;
  *(_QWORD*)(result + 136) = 0;
  *(_QWORD*)(result + 144) = 0;
  *(_QWORD*)(result + 152) = 0;
  *(_QWORD*)(result + 160) = 0;
  *(_QWORD*)(result + 168) = 0;
  *(_QWORD*)(result + 176) = 0;
  *(_QWORD*)(result + 184) = 0;
  *(_QWORD*)(result + 320) = 0;
  *(_QWORD*)(result + 328) = 0;
  *(_QWORD*)(result + 344) = 0;
  *(_QWORD*)(result + 352) = 0;
  *(_QWORD*)(result + 360) = 0;
  *(_QWORD*)(result + 368) = 0;
  *(_QWORD*)(result + 376) = 0;
  *(_QWORD*)(result + 392) = 0;
  *(_QWORD*)(result + 400) = 0;
  *(_QWORD*)(result + 408) = 0;
  *(_QWORD*)(result + 416) = 0;
  *(_QWORD*)(result + 424) = 0;
  *(_QWORD*)(result + 432) = 0;
  *(_QWORD*)(result + 440) = 0;
  *(_QWORD*)(result + 448) = 0;
  *(_QWORD*)(result + 456) = 0;
  if (v1 != (int*)v2) {
    do {
      v3 = *v1++;
      *(_QWORD*)(GameData_21d9d00 + 8 * v3) = 0;
    } while (v1 != (int*)v2);
    v1 = (int*)GameData_21d9d18;
  }
  GameData_21d9d20 = (__int64)v1;
  GameData_21d9d60 = 0;
  GameData_21d9d68 = 0;
  GameData_21d9d70 = 0;
  GameData_21d9d7c = 0;
  GameData_21d9d38 = GameData_21d9d30;
  GameData_21d9cf0 = GameData_21d9ce8;
  GameData_21d9d50 = GameData_21d9d48;
  GameData_21d9d78 = 8;
  return result;
}

__int64 AssetTableFile_7e9960(__int64 a1, __int64 a2, __int64* a3)
{
  int* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  struct {
    __int64 v10;
    __int64 v11;
  } v10_;

  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)a1 = 0;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_DWORD*)(a1 + 384) = 1065353216;
  v5 = (int*)GameData_21d9d18;
  v6 = GameData_21d9d20;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 408) = 0;
  *(_QWORD*)(a1 + 416) = 0;
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 456) = 0;
  if (v5 != (int*)v6) {
    do {
      v7 = *v5++;
      *(_QWORD*)(GameData_21d9d00 + 8 * v7) = 0;
    } while (v5 != (int*)v6);
    v5 = (int*)GameData_21d9d18;
  }
  GameData_21d9d20 = (__int64)v5;
  GameData_21d9d60 = 0;
  GameData_21d9d68 = 0;
  GameData_21d9d70 = 0;
  GameData_21d9d7c = 0;
  GameData_21d9d38 = GameData_21d9d30;
  GameData_21d9cf0 = GameData_21d9ce8;
  GameData_21d9d50 = GameData_21d9d48;
  GameData_21d9d78 = 8;
  AssetTableFile_7e7620(a1, a2);
  v10_.v11 = *a3;
  v10_.v10 = game_HashString_alt1(v10_.v11);
  v8 = AssetTableFile_7e7b20(a1, (unsigned __int64*)&v10_.v10);
  return AssetTableFile_7e8000_alt1(v8);
}

__int64 AssetTableFile_7e9aa0(__int64 a1, __int64 a2, __int64* a3)
{
  int* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  struct {
    __int64 v10;
    __int64 v11;
  } v10_;

  v5 = (int*)GameData_21d9d18;
  v6 = GameData_21d9d20;
  if (GameData_21d9d18 != GameData_21d9d20) {
    do {
      v7 = *v5++;
      *(_QWORD*)(GameData_21d9d00 + 8 * v7) = 0;
    } while (v5 != (int*)v6);
    v5 = (int*)GameData_21d9d18;
  }
  GameData_21d9d20 = (__int64)v5;
  GameData_21d9d60 = 0;
  GameData_21d9d68 = 0;
  GameData_21d9d70 = 0;
  GameData_21d9d7c = 0;
  GameData_21d9d38 = GameData_21d9d30;
  GameData_21d9cf0 = GameData_21d9ce8;
  GameData_21d9d50 = GameData_21d9d48;
  GameData_21d9d78 = 8;
  AssetTableFile_7e7620(a1, a2);
  v10_.v11 = *a3;
  v10_.v10 = game_HashString_alt1(v10_.v11);
  v8 = AssetTableFile_7e7b20(a1, (unsigned __int64*)&v10_.v10);
  return AssetTableFile_7e8000_alt1(v8);
}

__int64 AssetTableFile_7e9d00(__int64 a1, __int64 a2, __int64* a3)
{
  int* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    __int64 v11;
    __int64 v12;
  } v11_;

  v5 = (int*)GameData_21d9d18;
  v6 = GameData_21d9d20;
  if (GameData_21d9d18 != GameData_21d9d20) {
    do {
      v7 = *v5++;
      *(_QWORD*)(GameData_21d9d00 + 8 * v7) = 0;
    } while (v5 != (int*)v6);
    v5 = (int*)GameData_21d9d18;
  }
  GameData_21d9d20 = (__int64)v5;
  GameData_21d9d60 = 0;
  GameData_21d9d68 = 0;
  GameData_21d9d70 = 0;
  GameData_21d9d7c = 0;
  GameData_21d9d38 = GameData_21d9d30;
  GameData_21d9cf0 = GameData_21d9ce8;
  GameData_21d9d50 = GameData_21d9d48;
  GameData_21d9d78 = 8;
  ConditionMap_7ea0c0_alt1(a2);
  v8 = game_GetHero_alt1(9u);
  AssetTableFile_7e95e0(a1, v8, 0);
  v11_.v12 = *a3;
  v11_.v11 = game_HashString_alt1(v11_.v12);
  v9 = AssetTableFile_7e7b20(a1, (unsigned __int64*)&v11_.v11);
  return AssetTableFile_7e8000_alt1(v9);
}

__int64 AssetTableFile_7ea4e0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  int* v11;
  int v12;
  int v13;

  if ((GameData_21d9d7c & 4) != 0) {
    return result;
  }
  GameData_21d9d7c |= 4u;
  if ((unsigned __int8)result == 3) {
    goto LABEL_5;
  }
  if ((unsigned __int8)result != 2) {
    if ((unsigned __int8)result != 1) {
      return result;
    }
  LABEL_5:
    if (GameData_21d9b48 == 0) {
      return result;
    }
    v1 = GameData_21d9b48 & 0xFFF;
    v2 = *(_QWORD*)(GameData_21d9d00 + 8 * v1);
    if (v2 != 0) {
      v3 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9b48 & 0xFFF));
      while (*v3 != GameData_21d9b48) {
        v3 = (_QWORD*)v3[1];
        if (v3 == nullptr) {
          v4 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9b48 & 0xFFF));
          while (*v4 != GameData_21d9b48) {
            v4 = (_QWORD*)v4[1];
            if (v4 == nullptr) {
              do {
                v5 = v2;
                v2 = *(_QWORD*)(v2 + 8);
              } while (v2 != 0);
              goto LABEL_24;
            }
          }
          return result;
        }
      }
      return result;
    }
    v12 = GameData_21d9b48 & 0xFFF;
    v9 = GameRoutine_7f2ec0(&GameData_21d9ce8);
    v10 = GameData_21d9d00;
    v11 = &v12;
  LABEL_27:
    *(_QWORD*)(v10 + 8 * v1) = v9;
    return GameRoutine_7d6200(&GameData_21d9d18, v11);
  }
  if (GameData_21d9b58 == 0) {
    return result;
  }
  v1 = GameData_21d9b58 & 0xFFF;
  v6 = *(_QWORD*)(GameData_21d9d00 + 8 * v1);
  if (v6 == 0) {
    v13 = GameData_21d9b58 & 0xFFF;
    v9 = GameRoutine_7f2ec0(&GameData_21d9ce8);
    v10 = GameData_21d9d00;
    v11 = &v13;
    goto LABEL_27;
  }
  v7 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9b58 & 0xFFF));
  while (*v7 != GameData_21d9b58) {
    v7 = (_QWORD*)v7[1];
    if (v7 == nullptr) {
      v8 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9b58 & 0xFFF));
      while (*v8 != GameData_21d9b58) {
        v8 = (_QWORD*)v8[1];
        if (v8 == nullptr) {
          do {
            v5 = v6;
            v6 = *(_QWORD*)(v6 + 8);
          } while (v6 != 0);
        LABEL_24:
          result = GameRoutine_7f2ec0(&GameData_21d9ce8);
          *(_QWORD*)(v5 + 8) = result;
          return result;
        }
      }
      return result;
    }
  }
  return result;
}

__int64* AssetTableFile_7ea680(__int64* result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  int* v12;
  int v13;
  int v14;

  if ((GameData_21d9d7c & 0x10) != 0) {
    return result;
  }
  GameData_21d9d7c |= 0x10u;
  if (result != nullptr) {
    v1 = *result;
    if (*result == 0) {
      return result;
    }
    v2 = *result & 0xFFF;
    v3 = *(_QWORD*)(GameData_21d9d00 + 8 * v2);
    if (v3 != 0) {
      v4 = *(_QWORD**)(GameData_21d9d00 + 8 * (*result & 0xFFF));
      while (*v4 != v1) {
        v4 = (_QWORD*)v4[1];
        if (v4 == nullptr) {
          v5 = *(_QWORD**)(GameData_21d9d00 + 8 * (*result & 0xFFF));
          while (*v5 != v1) {
            v5 = (_QWORD*)v5[1];
            if (v5 == nullptr) {
              do {
                v6 = v3;
                v3 = *(_QWORD*)(v3 + 8);
              } while (v3 != 0);
              goto LABEL_22;
            }
          }
          return result;
        }
      }
      return result;
    }
    v13 = v1 & 0xFFF;
    v10 = GameRoutine_7f2ec0(&GameData_21d9ce8);
    v11 = GameData_21d9d00;
    v12 = &v13;
  LABEL_25:
    *(_QWORD*)(v11 + 8 * v2) = v10;
    return (__int64*)GameRoutine_7d6200(&GameData_21d9d18, v12);
  }
  if (GameData_21d9b98 == 0) {
    return result;
  }
  v2 = GameData_21d9b98 & 0xFFF;
  v7 = *(_QWORD*)(GameData_21d9d00 + 8 * v2);
  if (v7 == 0) {
    v14 = GameData_21d9b98 & 0xFFF;
    v10 = GameRoutine_7f2ec0(&GameData_21d9ce8);
    v11 = GameData_21d9d00;
    v12 = &v14;
    goto LABEL_25;
  }
  v8 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9b98 & 0xFFF));
  while (*v8 != GameData_21d9b98) {
    v8 = (_QWORD*)v8[1];
    if (v8 == nullptr) {
      v9 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9b98 & 0xFFF));
      while (*v9 != GameData_21d9b98) {
        v9 = (_QWORD*)v9[1];
        if (v9 == nullptr) {
          do {
            v6 = v7;
            v7 = *(_QWORD*)(v7 + 8);
          } while (v7 != 0);
        LABEL_22:
          result = (__int64*)GameRoutine_7f2ec0(&GameData_21d9ce8);
          *(_QWORD*)(v6 + 8) = result;
          return result;
        }
      }
      return result;
    }
  }
  return result;
}

__int64 AssetTableFile_7eb740(__int64 result)
{
  __int16 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  int v16;

  if ((GameData_21d9d7c & 8) != 0) {
    return result;
  }
  GameData_21d9d7c |= 8u;
  switch ((unsigned __int8)result) {
  case 3u:
    v1 = GameData_21d9b38;
    if (GameData_21d9b38 == 0) {
      return result;
    }
    v2 = GameData_21d9b38 & 0xFFF;
    v10 = *(_QWORD*)(GameData_21d9d00 + 8 * v2);
    if (v10 == 0) {
      goto LABEL_45;
    }
    v11 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9b38 & 0xFFF));
    while (*v11 != GameData_21d9b38) {
      v11 = (_QWORD*)v11[1];
      if (v11 == nullptr) {
        v12 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9b38 & 0xFFF));
        while (*v12 != GameData_21d9b38) {
          v12 = (_QWORD*)v12[1];
          if (v12 == nullptr) {
            do {
              v6 = v10;
              v10 = *(_QWORD*)(v10 + 8);
            } while (v10 != 0);
          LABEL_44:
            result = GameRoutine_7f2ec0(&GameData_21d9ce8);
            *(_QWORD*)(v6 + 8) = result;
            return result;
          }
        }
        return result;
      }
    }
    break;
  case 2u:
    v1 = GameData_21d9b28;
    if (GameData_21d9b28 == 0) {
      return result;
    }
    v2 = GameData_21d9b28 & 0xFFF;
    v7 = *(_QWORD*)(GameData_21d9d00 + 8 * v2);
    if (v7 == 0) {
      goto LABEL_45;
    }
    v8 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9b28 & 0xFFF));
    while (*v8 != GameData_21d9b28) {
      v8 = (_QWORD*)v8[1];
      if (v8 == nullptr) {
        v9 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9b28 & 0xFFF));
        while (*v9 != GameData_21d9b28) {
          v9 = (_QWORD*)v9[1];
          if (v9 == nullptr) {
            do {
              v6 = v7;
              v7 = *(_QWORD*)(v7 + 8);
            } while (v7 != 0);
            goto LABEL_44;
          }
        }
        return result;
      }
    }
    break;
  case 1u:
    v1 = GameData_21d9b18;
    if (GameData_21d9b18 == 0) {
      return result;
    }
    v2 = GameData_21d9b18 & 0xFFF;
    v3 = *(_QWORD*)(GameData_21d9d00 + 8 * v2);
    if (v3 != 0) {
      v4 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9b18 & 0xFFF));
      while (*v4 != GameData_21d9b18) {
        v4 = (_QWORD*)v4[1];
        if (v4 == nullptr) {
          v5 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9b18 & 0xFFF));
          while (*v5 != GameData_21d9b18) {
            v5 = (_QWORD*)v5[1];
            if (v5 == nullptr) {
              do {
                v6 = v3;
                v3 = *(_QWORD*)(v3 + 8);
              } while (v3 != 0);
              goto LABEL_44;
            }
          }
          return result;
        }
      }
      return result;
    }
  LABEL_45:
    v16 = v1 & 0xFFF;
    *(_QWORD*)(GameData_21d9d00 + 8 * v2) =
        GameRoutine_7f2ec0(&GameData_21d9ce8);
    return GameRoutine_7d6200(&GameData_21d9d18, &v16);
  default:
    v1 = GameData_21d9b08;
    if (GameData_21d9b08 == 0) {
      return result;
    }
    v2 = GameData_21d9b08 & 0xFFF;
    v13 = *(_QWORD*)(GameData_21d9d00 + 8 * v2);
    if (v13 == 0) {
      goto LABEL_45;
    }
    v14 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9b08 & 0xFFF));
    while (*v14 != GameData_21d9b08) {
      v14 = (_QWORD*)v14[1];
      if (v14 == nullptr) {
        v15 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9b08 & 0xFFF));
        while (*v15 != GameData_21d9b08) {
          v15 = (_QWORD*)v15[1];
          if (v15 == nullptr) {
            do {
              v6 = v13;
              v13 = *(_QWORD*)(v13 + 8);
            } while (v13 != 0);
            goto LABEL_44;
          }
        }
        return result;
      }
    }
    break;
  }
  return result;
}

void AssetTableFile_7eb9c0(_DWORD* result, _DWORD* a2)
{
  _DWORD* v5;
  __int64* v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  _QWORD* v11;
  int v12;

  if (result != a2) {
    v5 = result;
    v6 = GameData_212c880[0];
    do {
      v7 = **(_QWORD**)(*(_QWORD*)(*v6 + 64) + 8LL * (*v5 & 0xFFF));
      if (v7 != 0) {
        v8 = *(_QWORD**)(GameData_21d9d00 +
                         8 * (**(_QWORD**)(*(_QWORD*)(*v6 + 64) +
                                           8LL * (*v5 & 0xFFF)) &
                              0xFFFLL));
        v9 = v8;
        if (v8 != nullptr) {
          while (*v9 != v7) {
            v9 = (_QWORD*)v9[1];
            if (v9 == nullptr) {
              v10 = *(_QWORD**)(GameData_21d9d00 +
                                8 * (**(_QWORD**)(*(_QWORD*)(*v6 + 64) +
                                                  8LL * (*v5 & 0xFFF)) &
                                     0xFFFLL));
              while (*v10 != v7) {
                v10 = (_QWORD*)v10[1];
                if (v10 == nullptr) {
                  do {
                    v11 = v8;
                    v8 = (_QWORD*)v8[1];
                  } while (v8 != nullptr);
                  v11[1] = ConditionMap_7f2ec0(&GameData_21d9ce8, v7);
                  goto LABEL_4;
                }
              }
              break;
            }
          }
        }
        else {
          v12 = v7 & 0xFFF;
          *(_QWORD*)(GameData_21d9d00 + 8 * (v7 & 0xFFF)) =
              ConditionMap_7f2ec0(&GameData_21d9ce8, v7);
          GameRoutine_7d6200_alt1(&GameData_21d9d18, &v12);
        }
      }
    LABEL_4:
      ++v5;
    } while (v5 != a2);
  }
}

__int64 AssetTableFile_7ec8a0(__int64 a1, __int64 a2)
{
  char* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  int v11;

  v3 = nullptr;
  GameData_21d9d7c |= a2;
  if ((int)a2 <= 15) {
    if ((int)a2 > 3) {
      if ((_DWORD)a2 == 4) {
        v4 = 2;
      }
      else {
        if ((_DWORD)a2 != 8) {
          goto LABEL_22;
        }
        v4 = 3;
      }
    }
    else {
      v4 = 0;
      if ((_DWORD)a2 != 1) {
        if ((_DWORD)a2 != 2) {
          goto LABEL_22;
        }
        v4 = 1;
      }
    }
  }
  else if ((int)a2 <= 63) {
    if ((_DWORD)a2 == 16) {
      v4 = 4;
    }
    else {
      if ((_DWORD)a2 != 32) {
        goto LABEL_22;
      }
      v4 = 5;
    }
  }
  else {
    switch ((_DWORD)a2) {
    case 0x40:
      v4 = 6;
      break;
    case 0x80:
      v4 = 7;
      break;
    case 0x100:
      v4 = 8;
      break;
    default:
      goto LABEL_22;
    }
  }
  v3 = (&GameData_1f9c748)[2 * v4];

LABEL_22:
  v5 = game_HashString(v3, a2);
  if (v5 != 0) {
    v6 = *(_QWORD*)(GameData_21d9d00 + 8 * (v5 & 0xFFF));
    if (v6 != 0) {
      v7 = *(_QWORD**)(GameData_21d9d00 + 8 * (v5 & 0xFFF));
      while (*v7 != v5) {
        v7 = (_QWORD*)v7[1];
        if (v7 == nullptr) {
          v8 = *(_QWORD**)(GameData_21d9d00 + 8 * (v5 & 0xFFF));
          while (*v8 != v5) {
            v8 = (_QWORD*)v8[1];
            if (v8 == nullptr) {
              do {
                v9 = v6;
                v6 = *(_QWORD*)(v6 + 8);
              } while (v6 != 0);
              *(_QWORD*)(v9 + 8) = GameRoutine_7f2ec0(&GameData_21d9ce8);
              return a1;
            }
          }
          return a1;
        }
      }
    }
    else {
      v11 = v5 & 0xFFF;
      *(_QWORD*)(GameData_21d9d00 + 8 * (v5 & 0xFFF)) =
          GameRoutine_7f2ec0(&GameData_21d9ce8);
      GameRoutine_7d6200(&GameData_21d9d18, &v11);
    }
  }
  return a1;
}

_QWORD* AssetTableFile_7eca40(__int64 a1)
{
  __int64 v1;
  _QWORD* result;
  int v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;

  v1 = *(_QWORD*)(a1 + 104);
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)a1 = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 112) = v1;
  GameRoutine_7d16a0((_QWORD*)(a1 + 136));
  result = GameRoutine_7d16a0((_QWORD*)(a1 + 160));
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_DWORD*)(a1 + 192) = -1;
  *(_DWORD*)(a1 + 208) = -1;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 232) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 400) = *(_QWORD*)(a1 + 392);
  v4 = GameData_21d9e20;
  *(_DWORD*)(a1 + 240) = GameData_21d9e20;
  *(_DWORD*)(a1 + 244) = v4;
  *(_DWORD*)(a1 + 248) = v4;
  *(_DWORD*)(a1 + 252) = 0;
  *(_DWORD*)(a1 + 256) = v4;
  *(_DWORD*)(a1 + 260) = v4;
  *(_DWORD*)(a1 + 264) = v4;
  *(_DWORD*)(a1 + 268) = v4;
  *(_DWORD*)(a1 + 272) = v4;
  *(_DWORD*)(a1 + 276) = v4;
  *(_DWORD*)(a1 + 280) = v4;
  *(_DWORD*)(a1 + 284) = v4;
  *(_DWORD*)(a1 + 288) = v4;
  *(_DWORD*)(a1 + 292) = v4;
  *(_DWORD*)(a1 + 296) = v4;
  *(_DWORD*)(a1 + 300) = v4;
  *(_DWORD*)(a1 + 304) = v4;
  *(_DWORD*)(a1 + 308) = v4;
  *(_DWORD*)(a1 + 312) = v4;
  if (*(_QWORD*)(a1 + 376) != 0) {
    v5 = *(_QWORD**)(a1 + 368);
    if (v5 != nullptr) {
      v6 = fw_memory_g_heap_manager_ptr;
      do {
        v7 = (_QWORD*)*v5;
        if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v8, v5);
        v5 = v7;
      } while (v7 != nullptr);
    }
    v9 = *(_QWORD*)(a1 + 360);
    *(_QWORD*)(a1 + 368) = 0;
    if (v9 != 0) {
      v10 = v9 & 7;
      if (v9 >= 8) {
        v12 = v9 & 0xFFFFFFFFFFFFFFF8LL;
        v11 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 352) + 8 * v11) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 352) + 8 * v11 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 352) + 8 * v11 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 352) + 8 * v11 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 352) + 8 * v11 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 352) + 8 * v11 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 352) + 8 * v11 + 48) = 0;
          v13 = *(_QWORD*)(a1 + 352) + 8 * v11;
          v11 += 8;
          *(_QWORD*)(v13 + 56) = 0;
        } while (v12 != v11);
      }
      else {
        v11 = 0;
      }
      if (v10 != 0) {
        v14 = 8 * v11;
        do {
          --v10;
          *(_QWORD*)(*(_QWORD*)(a1 + 352) + v14) = 0;
          v14 += 8;
        } while (v10 != 0);
      }
    }
    *(_QWORD*)(a1 + 376) = 0;
  }
  if ((*(_BYTE*)(a1 + 416) & 1) != 0) {
    **(_BYTE**)(a1 + 432) = 0;
    *(_QWORD*)(a1 + 424) = 0;
    if ((*(_BYTE*)(a1 + 440) & 1) != 0) {
      goto LABEL_19;
    }
  LABEL_21:
    *(_WORD*)(a1 + 440) = 0;
    goto LABEL_22;
  }
  *(_WORD*)(a1 + 416) = 0;
  if ((*(_BYTE*)(a1 + 440) & 1) == 0) {
    goto LABEL_21;
  }

LABEL_19:
  **(_BYTE**)(a1 + 456) = 0;
  *(_QWORD*)(a1 + 448) = 0;

LABEL_22:
  *(_BYTE*)(a1 + 464) = 0;
  *(_QWORD*)(a1 + 472) = 0;
  return result;
}

unsigned __int64 AssetTableFile_7f1f20(unsigned __int64 result, __int64 a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  bool v7;
  __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  unsigned __int64* v11;
  __int64* v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  unsigned __int64 v18;
  __int64 v19;
  float v20;
  unsigned __int64 v21;
  float v22;
  float v23;
  _BOOL8 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64* v31;
  unsigned __int64 v32;
  unsigned __int64 v33;

  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  v4 = result;
  *(_DWORD*)(result + 32) = *(_DWORD*)(a2 + 32);
  v5 = *(_QWORD*)(a2 + 8);
  if (v5 == 1) {
    v5 = 2;
  LABEL_17:
    result = (unsigned __int64)GameRoutine_688420((__int64*)v4, v5);
    goto LABEL_18;
  }
  if ((v5 & (v5 - 1)) != 0) {
    result = std___1___next_prime(v5);
    v6 = *(_QWORD*)(v4 + 8);
    v5 = result;
    v7 = result >= v6;
    if (result > v6) {
      goto LABEL_17;
    }
  }
  else {
    v6 = 0;
    v7 = true;
    if (v5 != 0) {
      goto LABEL_17;
    }
  }
  if (!v7) {
    result = vcvtps_u64_f32((float)*(unsigned __int64*)(v4 + 24) /
                            *(float*)(v4 + 32));
    if (v6 < 3 || (v6 & (v6 - 1)) != 0) {
      v9 = v5;
      result = std___1___next_prime(result);
      v5 = v9;
    }
    else {
      v8 = 1LL << (-(char)__clz(result - 1) & 63);
      if (result >= 2) {
        result = v8;
      }
    }
    if (v5 <= result) {
      v5 = result;
    }
    if (v5 < v6) {
      goto LABEL_17;
    }
  }
LABEL_18:
  v10 = *(_QWORD**)(a2 + 16);
  if (v10 != nullptr) {
    v11 = (unsigned __int64*)(v4 + 16);
    v12 = (__int64*)fw_memory_g_heap_manager_ptr;
    do {
      v13 = v10[2];
      v14 = *(_QWORD*)(v4 + 8);
      if (v14 != 0) {
        v15 = v14 - 1;
        if ((v14 & (v14 - 1)) != 0) {
          v2 = v10[2];
          if (v13 >= v14) {
            v2 = v13 % v14;
          }
        }
        else {
          v2 = v15 & v13;
        }
        v16 = *(_QWORD**)(*(_QWORD*)v4 + 8 * v2);
        if (v16 != nullptr) {
          v17 = (_QWORD*)*v16;
          if (v17 != nullptr) {
            if ((v14 & v15) == 0) {
              while (1) {
                v19 = v17[1];
                if (v19 == v13) {
                  if (v17[2] == v13) {
                    goto LABEL_77;
                  }
                }
                else if ((v19 & v15) != v2) {
                  goto LABEL_40;
                }
                v17 = (_QWORD*)*v17;
                if (v17 == nullptr) {
                  goto LABEL_40;
                }
              }
            }
            do {
              v18 = v17[1];
              if (v18 == v13) {
                if (v17[2] == v13) {
                  goto LABEL_77;
                }
              }
              else {
                if (v18 >= v14) {
                  v18 %= v14;
                }
                if (v18 != v2) {
                  break;
                }
              }
              v17 = (_QWORD*)*v17;
            } while (v17 != nullptr);
          }
        }
      }
    LABEL_40:
      result = fw_memory_HeapManager_Allocate_alt1(*v12, 40, 16, 0);
      *(_QWORD*)result = 0;
      *(_QWORD*)(result + 8) = v13;
      v20 = *(float*)(v4 + 32);
      v21 = result;
      *(_QWORD*)(result + 16) = v10[2];
      *(_QWORD*)(result + 24) = v10[3];
      *(_QWORD*)(result + 32) = v10[4];
      v22 = (float)(unsigned __int64)(*(_QWORD*)(v4 + 24) + 1LL);
      if (v14 == 0 || (float)(v20 * (float)v14) < v22) {
        v23 = v22 / v20;
        v24 = (v14 & (v14 - 1)) != 0;
        if (v14 < 3) {
          v24 = true;
        }
        v25 = v24 | (2 * v14);
        v26 = vcvtps_u64_f32(v23);
        if (v25 <= v26) {
          v27 = v26;
        }
        else {
          v27 = v25;
        }
        if (v27 == 1) {
          v27 = 2;
        }
        else if ((v27 & (v27 - 1)) != 0) {
          result = std___1___next_prime(v27);
          v27 = result;
        }
        v28 = *(_QWORD*)(v4 + 8);
        if (v27 > v28) {
          goto LABEL_52;
        }
        if (v27 < v28) {
          result = vcvtps_u64_f32((float)*(unsigned __int64*)(v4 + 24) /
                                  *(float*)(v4 + 32));
          if (v28 < 3 || (v28 & (v28 - 1)) != 0) {
            result = std___1___next_prime(result);
          }
          else {
            v29 = 1LL << (-(char)__clz(result - 1) & 63);
            if (result >= 2) {
              result = v29;
            }
          }
          if (v27 <= result) {
            v27 = result;
          }
          if (v27 < v28) {
          LABEL_52:
            result = (unsigned __int64)GameRoutine_688420((__int64*)v4, v27);
          }
        }
        v14 = *(_QWORD*)(v4 + 8);
        if ((v14 & (v14 - 1)) != 0) {
          if (v13 >= v14) {
            v2 = v13 % v14;
          }
          else {
            v2 = v13;
          }
        }
        else {
          v2 = (v14 - 1) & v13;
        }
      }
      v30 = *(_QWORD*)v4;
      v31 = *(unsigned __int64**)(*(_QWORD*)v4 + 8 * v2);
      if (v31 != nullptr) {
        *(_QWORD*)v21 = *v31;
        *v31 = v21;
      }
      else {
        v32 = *v11;
        *v11 = v21;
        *(_QWORD*)v21 = v32;
        *(_QWORD*)(v30 + 8 * v2) = v11;
        if (*(_QWORD*)v21 != 0) {
          v33 = *(_QWORD*)(*(_QWORD*)v21 + 8LL);
          if ((v14 & (v14 - 1)) != 0) {
            if (v33 >= v14) {
              v33 %= v14;
            }
          }
          else {
            v33 &= v14 - 1;
          }
          *(_QWORD*)(*(_QWORD*)v4 + 8 * v33) = v21;
        }
      }
      ++*(_QWORD*)(v4 + 24);
    LABEL_77:
      v10 = (_QWORD*)*v10;
    } while (v10 != nullptr);
  }
  return result;
}

__int64 game_AssetTableFile_OnBuild_lambda0_Invoke(__int64 result, __int64* a2)
{
  unsigned __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  unsigned __int64* v12;
  int v13;
  int v14;
  __int64* v15;
  __int64 v16;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d9f88,
                            memory_order_acquire) &
       1) == 0) {
    v16 = result;
    v15 = a2;
    v13 = __cxa_guard_acquire_alt1((__int64)&GameData_21d9f88);
    a2 = v15;
    v14 = v13;
    result = v16;
    if (v14 != 0) {
      GameData_21d9f84 = 1598310721;
      __cxa_guard_release_alt1((__int64)&GameData_21d9f88);
      result = v16;
      a2 = v15;
    }
  }
  if (*(_DWORD*)a2[1] == GameData_21d9f84 && GameData_21c9ae0 != 0 &&
      GameData_21c9af0 != 0) {
    v3 = *a2;
    v4 = GameData_21c9ae0 - 1;
    if ((GameData_21c9ae0 & (GameData_21c9ae0 - 1)) != 0) {
      v5 = *a2;
      if (v3 >= GameData_21c9ae0) {
        v5 = v3 % GameData_21c9ae0;
      }
    }
    else {
      v5 = v4 & v3;
    }
    v6 = *(_QWORD**)(GameData_21c9ad8 + 8 * v5);
    if (v6 != nullptr) {
      v7 = (_QWORD*)*v6;
      if (v7 != nullptr) {
        if ((GameData_21c9ae0 & v4) == 0) {
          while (1) {
            v9 = v7[1];
            if (v9 == v3) {
              if (v7[2] == v3) {
                goto LABEL_28;
              }
            }
            else if ((v9 & v4) != v5) {
              goto LABEL_26;
            }
            v7 = (_QWORD*)*v7;
            if (v7 == nullptr) {
              goto LABEL_26;
            }
          }
        }
        do {
          v8 = v7[1];
          if (v8 == v3) {
            if (v7[2] == v3) {
            LABEL_28:
              v10 = *(__int64**)(result + 8);
              v12 = (unsigned __int64*)v10[1];
              if ((unsigned __int64)v12 < v10[2]) {
                *v12 = v3;
                v12[1] = a2[1];
                v10[1] = (__int64)(v12 + 2);
                return result;
              }
            LABEL_30:
              result = GameRoutine_693d40_alt1(v10, a2);
              goto LABEL_31;
            }
          }
          else {
            if (v8 >= GameData_21c9ae0) {
              v8 %= (unsigned __int64)GameData_21c9ae0;
            }
            if (v8 != v5) {
              break;
            }
          }
          v7 = (_QWORD*)*v7;
        } while (v7 != nullptr);
      }
    }
  }
LABEL_26:
  v10 = *(__int64**)(result + 16);
  v11 = (__int64*)v10[1];
  if ((unsigned __int64)v11 >= v10[2]) {
    goto LABEL_30;
  }
  result = (__int64)(v11 + 2);
  *v11 = *a2;
  v11[1] = a2[1];
LABEL_31:
  v10[1] = result;
  return result;
}

_QWORD* game_AssetTableFile_EachAssetFlag_lambda0_Clone(__int64 a1)
{
  _QWORD* result;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  *result = GameData_1f9c968;
  v3 = result + 2;
  v4 = *(_QWORD**)(a1 + 48);
  if (v4 != nullptr) {
    if (v4 == (_QWORD*)(a1 + 16)) {
      result[6] = v3;
      v5 = result;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v4 + 24LL))(
          (void*)v4, v4);
    }
    else {
      v5 = result;
      result[6] = X8CALL_X0(
          _QWORD*,
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, _QWORD*))(
              *v4 + 16LL))((void*)v4, v4, v3));
    }
    return v5;
  }
  else {
    result[6] = 0;
  }
  return result;
}

__int64 game_AssetTableFile_EachAssetFlag_lambda0_Invoke(__int64 result,
                                                         _QWORD* a2, __int64 a3)
{
  _DWORD* v3;
  __int64 v4;
  int v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD v8[2];

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d9f88,
                            memory_order_acquire) &
       1) == 0) {
    v6 = a2;
    v7 = result;
    v5 = __cxa_guard_acquire(&GameData_21d9f88);
    a2 = v6;
    result = v7;
    if (v5 != 0) {
      GameData_21d9f84 = 1598310721;
      __cxa_guard_release(&GameData_21d9f88);
      a2 = v6;
      result = v7;
    }
  }
  v3 = (_DWORD*)a2[1];
  if (*v3 == GameData_21d9f84) {
    v4 = *(_QWORD*)(result + 48);
    v8[0] = *a2;
    v8[1] = v3;
    if (v4 == 0) {
      GameRoutine_60a310_alt1(0, a2, a3);
    }
    return (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v4 + 48LL))(v4, v8);
  }
  return result;
}

#pragma GCC visibility pop
