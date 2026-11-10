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
__int64 AssetTableFile_Unknown4();
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
__int64 AssetTableFile_7eb9c0(__int64 result, _DWORD* a2);
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
__int64 game_AssetTableFile_OnBuild_lambda0_Invoke(__int64 result,
                                                   unsigned __int64* a2);
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

__int64 AssetTableFile_Unknown4()
{
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
  __int64 result;
  unsigned __int64* v14;
  __int64* v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  _QWORD* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 (***v50)();
  __int64 v51;
  unsigned __int64* v52;
  unsigned __int64* v53;
  unsigned __int64 v54;
  __int64 v56;
  unsigned __int64 v57;
  _QWORD** v58;
  _QWORD* v59;
  unsigned __int64 v60;
  __int64 v61;
  _QWORD* v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  _QWORD* v67;
  _QWORD* v68;
  unsigned __int64 v69;
  __int64 v70;
  float v71;
  _BOOL8 v72;
  unsigned __int64 v73;
  unsigned __int64 v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  _QWORD* v78;
  __int64 v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  _QWORD** v84;
  unsigned __int64 v85;
  __int64 v86;
  float v87;
  __int64 v88;
  float v89;
  float v90;
  _BOOL8 v91;
  unsigned __int64 v92;
  unsigned __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  _QWORD* v96;
  __int64 v97;
  unsigned __int64 v98;
  unsigned __int64* v99;
  unsigned __int64* v100;
  __int64 v101;
  unsigned __int64 v102;
  unsigned __int64 v103;
  unsigned __int64 v105;
  unsigned __int64 v106;
  _QWORD* v107;
  _QWORD* v108;
  unsigned __int64 v109;
  __int64 v110;
  unsigned __int64 v111;
  unsigned __int64* v112;
  _QWORD* v113;
  __int64 v114;
  char* v115;
  unsigned __int64 v116;
  __int64 v117;
  __int64 v118;
  unsigned __int64 v119;
  __int64 v120;
  char* v121;
  char* v122;
  char* v123;
  char* v124;
  char* v125;
  __int64 v126;
  unsigned __int64 v127;
  __int64 v128;
  __int64 v129;
  _QWORD* v130;
  _QWORD* v131;
  unsigned __int64 v132;
  unsigned __int64 v133;
  unsigned __int64 v134;
  unsigned __int64 v135;
  unsigned __int64 v136;
  __int64 v137;
  _QWORD* v138;
  unsigned __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  _QWORD* v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  int v151;
  __int64 v152;
  __int64 (**v153)();
  int v154;
  __int64 (**v155)();
  int v156;
  int v157;
  __int64 (***v158)();
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
  __int64 v169;
  __int64 v170;
  __int64 v171;
  unsigned __int64 v172;
  __int64 v173;
  unsigned __int64 v174;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  unsigned __int64 v179;
  __int64 v180;
  unsigned __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  _QWORD* v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  unsigned __int64 v192;
  __int64 v193;
  unsigned __int64 v194;
  __int64 v195;
  __int64 v196;
  __int64 v197;
  __int64 v198;
  unsigned __int64 v199;
  __int64 v200;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  __int64 v208;
  unsigned __int64 v209;
  __int64 v210;
  unsigned __int64 v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  __int64 v216;
  __int64 v217;
  __int64 v218;
  unsigned __int64 v219;
  __int64 v220;
  unsigned __int64 v221;
  __int64 v222;
  __int64 v223;
  __int64 v224;
  __int64 v225;
  unsigned __int64 v226;
  __int64 v227;
  unsigned __int64 v228;
  __int64 v229;
  __int64 v230;
  __int64 v231;
  __int64 v232;
  __int64 v233;
  __int64 v234;
  __int64 v235;
  __int64* v236;
  __int64* v237;
  _QWORD* v238;
  _QWORD* v239;
  unsigned __int64* v240;
  __int64 v241;
  __int64 (**v242)();
  __int64 (**v243)();
  unsigned __int64** v244;
  __int64 (***v245)();
  __int64 (***v246)();
  __int64 v247;
  unsigned __int64* v248;
  unsigned __int64* v249;
  __int64 v250;
  unsigned __int64* v251;
  unsigned __int64* v252;
  __int64 v253;

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
          nn_mem_StandardAllocator_Free(v6 + v7, v5);
        }
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v3 = 128;
        }
        else {
          v3 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v3, v1);
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
  result = AssetTableFile_7e6e40();
  v15 = *(__int64**)(*GameData_212c8f0[0] + 64);
  v236 = *(__int64**)(*GameData_212c8f0[0] + 72);
  if (v15 != v236) {
    v16 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    while (1) {
      v17 = *v15;
      v237 = v15;
      if (*(_QWORD*)(*v15 + 8) == 0 || *(_WORD*)(v17 + 32) != 0) {
        v18 = GameData_21d9db0;
        if (GameData_21d9db0 >= (unsigned __int64)GameData_21d9db8) {
          v20 = GameData_21d9da8;
          v21 = GameData_21d9db0 - GameData_21d9da8;
          v22 = (GameData_21d9db0 - GameData_21d9da8) >> 3;
          v23 = v22 + 1;
          if ((unsigned __int64)(v22 + 1) >> 61 != 0) {
            goto LABEL_422;
          }
          v24 = GameData_21d9db8 - GameData_21d9da8;
          if ((GameData_21d9db8 - GameData_21d9da8) >> 2 > v23) {
            v23 = v24 >> 2;
          }
          v0 = (unsigned __int64)v24 >= 0x7FFFFFFFFFFFFFF8LL
                   ? 0x1FFFFFFFFFFFFFFFLL
                   : v23;
          if (v0 != 0) {
            if (v0 >> 61 != 0) {
              goto LABEL_419;
            }
            v25 = fw_memory_HeapManager_Allocate(*v16, 8 * v0, 16, 0);
          }
          else {
            v25 = 0;
          }
          v26 = (_QWORD*)(v25 + v21);
          v27 = v21;
          v28 = v25 + 8 * v0;
          v29 = (__int64)&v26[-v22];
          *v26 = v17;
          v19 = (__int64)(v26 + 1);
          result = memcpy(v29, v20, v27);
          GameData_21d9da8 = v29;
          GameData_21d9db0 = v19;
          GameData_21d9db8 = v28;
          if (v20 != 0) {
            if (*(_QWORD*)(*v16 + 200LL) != 0) {
              v30 = 128;
            }
            else {
              v30 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*v16 + v30, v20);
          }
        }
        else {
          *(_QWORD*)GameData_21d9db0 = v17;
          v19 = v18 + 8;
        }
        GameData_21d9db0 = v19;
        if (*(_QWORD*)(v17 + 352) != 0) {
          v31 = GameData_21d9e10;
          if (GameData_21d9e10 >= (unsigned __int64)GameData_21d9e18) {
            v33 = GameData_21d9e08;
            v34 = GameData_21d9e10 - GameData_21d9e08;
            v35 = (GameData_21d9e10 - GameData_21d9e08) >> 3;
            v36 = v35 + 1;
            if ((unsigned __int64)(v35 + 1) >> 61 != 0) {
              goto LABEL_422;
            }
            v37 = GameData_21d9e18 - GameData_21d9e08;
            if ((GameData_21d9e18 - GameData_21d9e08) >> 2 > v36) {
              v36 = v37 >> 2;
            }
            if ((unsigned __int64)v37 >= 0x7FFFFFFFFFFFFFF8LL) {
              v0 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v0 = v36;
            }
            if (v0 != 0) {
              if (v0 >> 61 != 0) {
                goto LABEL_419;
              }
              v38 = fw_memory_HeapManager_Allocate(*v16, 8 * v0, 16, 0);
            }
            else {
              v38 = 0;
            }
            v39 = (_QWORD*)(v38 + v34);
            v40 = v34;
            v41 = v38 + 8 * v0;
            v42 = (__int64)&v39[-v35];
            *v39 = v17;
            v32 = (__int64)(v39 + 1);
            result = memcpy(v42, v33, v40);
            GameData_21d9e08 = v42;
            GameData_21d9e10 = v32;
            GameData_21d9e18 = v41;
            if (v33 != 0) {
              if (*(_QWORD*)(*v16 + 200LL) != 0) {
                v43 = 128;
              }
              else {
                v43 = 56;
              }
              result = nn_mem_StandardAllocator_Free(*v16 + v43, v33);
            }
          }
          else {
            *(_QWORD*)GameData_21d9e10 = v17;
            v32 = v31 + 8;
          }
          GameData_21d9e10 = v32;
        }
      }
      if (*(_WORD*)(v17 + 32) != 0) {
        v44 = *(_QWORD*)(v17 + 24);
        if (v44 != 0) {
          v45 = *(_QWORD**)v44;
          v238 = *(_QWORD**)(v44 + 8);
          if (v238 != *(_QWORD**)v44) {
            break;
          }
        }
      }
    LABEL_24:
      v15 = v237 + 1;
      if (v237 + 1 == v236) {
        goto LABEL_268;
      }
    }
    while (1) {
      v252 = nullptr;
      v253 = 0;
      v250 = 0;
      v251 = nullptr;
      v248 = nullptr;
      v249 = nullptr;
      v239 = v45;
      v242 = GameData_1f9c8e8;
      v243 = (__int64 (**)())&v251;
      v244 = &v248;
      v246 = &v242;
      v46 = *v45;
      v47 = v45[1];
      v48 = v45[3];
      v49 = v45[4];
      if (((v47 - *v45) >> 4) + ((v49 - v48) >> 4) != 0) {
        if (v46 != v47) {
          do {
            v50 = v246;
            if (v246 == nullptr) {
            LABEL_421:
              GameRoutine_60a310(v50, v14);
            }
            ((void (*)(__int64 (***)(), __int64))(*v246)[6])(v246, v46);
            v46 += 16;
          } while (v46 != v47);
          v48 = v239[3];
          v49 = v239[4];
        }
        while (v48 != v49) {
          v50 = v246;
          if (v246 == nullptr) {
            goto LABEL_421;
          }
          ((void (*)(__int64 (***)(), __int64))(*v246)[6])(v246, v48);
          v48 += 16;
        }
      }
      result = (__int64)v246;
      if (v246 == &v242) {
        v51 = 4;
      }
      else {
        if (v246 == nullptr) {
          goto LABEL_81;
        }
        v51 = 5;
      }
      result = (*v246)[v51]();
    LABEL_81:
      v52 = v251;
      v53 = v248;
      v240 = v252;
      if (v252 != v251 && v249 != v248) {
        do {
          v54 = *v52;
          if (GameData_21d9ac8 != 0 && GameData_21d9ad8 != 0) {
            v56 = GameData_21d9ac8 - 1;
            if ((GameData_21d9ac8 & (GameData_21d9ac8 - 1)) != 0) {
              v57 = *v52;
              if (v54 >= GameData_21d9ac8) {
                v57 = v54 % GameData_21d9ac8;
              }
            }
            else {
              v57 = v56 & v54;
            }
            v58 = *(_QWORD***)(GameData_21d9ac0 + 8 * v57);
            if (v58 != nullptr) {
              v59 = *v58;
              if (*v58 != nullptr) {
                if ((GameData_21d9ac8 & v56) == 0) {
                  while (1) {
                    v61 = v59[1];
                    if (v61 == v54) {
                      if (v59[2] == v54) {
                        goto LABEL_191;
                      }
                    }
                    else if ((v61 & v56) != v57) {
                      goto LABEL_108;
                    }
                    v59 = (_QWORD*)*v59;
                    if (v59 == nullptr) {
                      goto LABEL_108;
                    }
                  }
                }
                do {
                  v60 = v59[1];
                  if (v60 == v54) {
                    if (v59[2] == v54) {
                      goto LABEL_191;
                    }
                  }
                  else {
                    if (v60 >= GameData_21d9ac8) {
                      v60 %= (unsigned __int64)GameData_21d9ac8;
                    }
                    if (v60 != v57) {
                      break;
                    }
                  }
                  v59 = (_QWORD*)*v59;
                } while (v59 != nullptr);
              }
            }
          }
        LABEL_108:
          result = fw_memory_HeapManager_Allocate(*v16, 104, 16, 0);
          *(_QWORD*)result = 0;
          *(_QWORD*)(result + 8) = 0;
          *(_QWORD*)(result + 16) = v54;
          v62 = (_QWORD*)result;
          *(_QWORD*)(result + 24) = *v52;
          v63 = v52[1];
          *(_QWORD*)(result + 80) = 0;
          *(_QWORD*)(result + 88) = 0;
          *(_QWORD*)(result + 64) = 0;
          *(_QWORD*)(result + 72) = 0;
          *(_QWORD*)(result + 48) = 0;
          *(_QWORD*)(result + 56) = 0;
          *(_QWORD*)(result + 8) = v54;
          *(_QWORD*)(result + 32) = v63;
          *(_QWORD*)(result + 40) = 0;
          *(_DWORD*)(result + 96) = 1065353216;
          v64 = GameData_21d9ac8;
          if (GameData_21d9ac8 != 0) {
            v65 = GameData_21d9ac8 - 1;
            if ((GameData_21d9ac8 & (GameData_21d9ac8 - 1)) != 0) {
              v66 = v54;
              if (v54 >= GameData_21d9ac8) {
                v66 = v54 % GameData_21d9ac8;
              }
            }
            else {
              v66 = v65 & v54;
            }
            v67 = *(_QWORD**)(GameData_21d9ac0 + 8 * v66);
            if (v67 != nullptr) {
              v68 = (_QWORD*)*v67;
              if (v68 != nullptr) {
                if ((GameData_21d9ac8 & v65) == 0) {
                  while (1) {
                    v70 = v68[1];
                    if (v70 == v54) {
                      if (v68[2] == v54) {
                        goto LABEL_253;
                      }
                    }
                    else if ((v70 & v65) != v66) {
                      goto LABEL_128;
                    }
                    v68 = (_QWORD*)*v68;
                    if (v68 == nullptr) {
                      goto LABEL_128;
                    }
                  }
                }
                do {
                  v69 = v68[1];
                  if (v69 == v54) {
                    if (v68[2] == v54) {
                    LABEL_253:
                      if (*(_QWORD*)(*v16 + 200LL) != 0) {
                        v140 = 128;
                      }
                      else {
                        v140 = 56;
                      }
                      result =
                          nn_mem_StandardAllocator_Free(*v16 + v140, result);
                      goto LABEL_150;
                    }
                  }
                  else {
                    if (v69 >= GameData_21d9ac8) {
                      v69 %= (unsigned __int64)GameData_21d9ac8;
                    }
                    if (v69 != v66) {
                      break;
                    }
                  }
                  v68 = (_QWORD*)*v68;
                } while (v68 != nullptr);
              }
            }
          }
        LABEL_128:
          v71 = (float)(unsigned __int64)(GameData_21d9ad8 + 1);
          if (GameData_21d9ac8 == 0 ||
              (float)(*(float*)&GameData_21d9ae0 *
                      (float)(unsigned __int64)GameData_21d9ac8) < v71) {
            v72 = (unsigned __int64)GameData_21d9ac8 < 3 ||
                  (GameData_21d9ac8 & (GameData_21d9ac8 - 1)) != 0;
            v73 = v72 | (2 * GameData_21d9ac8);
            v74 = vcvtps_u64_f32(v71 / *(float*)&GameData_21d9ae0);
            if (v73 <= v74) {
              v75 = v74;
            }
            else {
              v75 = v73;
            }
            result = GameRoutine_7f26a0(v75);
            v64 = GameData_21d9ac8;
            v54 = v62[1];
          }
          v76 = v64 - 1;
          if ((v64 & (v64 - 1)) != 0) {
            if (v54 >= v64) {
              v54 %= v64;
            }
          }
          else {
            v54 &= v76;
          }
          v77 = GameData_21d9ac0;
          v78 = *(_QWORD**)(GameData_21d9ac0 + 8 * v54);
          if (v78 != nullptr) {
            *v62 = *v78;
            *v78 = v62;
          }
          else {
            v79 = GameData_21d9ad0;
            GameData_21d9ad0 = (__int64)v62;
            *v62 = v79;
            *(_QWORD*)(v77 + 8 * v54) = &GameData_21d9ad0;
            if (*v62 != 0) {
              v80 = *(_QWORD*)(*v62 + 8LL);
              if ((v64 & v76) != 0) {
                if (v80 >= v64) {
                  v80 %= v64;
                }
              }
              else {
                v80 &= v76;
              }
              *(_QWORD*)(GameData_21d9ac0 + 8 * v80) = v62;
            }
          }
          ++GameData_21d9ad8;
        LABEL_150:
          v81 = *v52;
          v82 = GameData_21d9ac8;
          if (GameData_21d9ac8 != 0) {
            v83 = GameData_21d9ac8 - 1;
            if ((GameData_21d9ac8 & (GameData_21d9ac8 - 1)) != 0) {
              v0 = *v52;
              if (v81 >= GameData_21d9ac8) {
                v0 = v81 % GameData_21d9ac8;
              }
            }
            else {
              v0 = v83 & v81;
            }
            v84 = *(_QWORD***)(GameData_21d9ac0 + 8 * v0);
            if (v84 != nullptr) {
              v59 = *v84;
              if (*v84 != nullptr) {
                if ((GameData_21d9ac8 & v83) == 0) {
                  while (1) {
                    v86 = v59[1];
                    if (v86 == v81) {
                      if (v59[2] == v81) {
                        goto LABEL_191;
                      }
                    }
                    else if ((v86 & v83) != v0) {
                      goto LABEL_170;
                    }
                    v59 = (_QWORD*)*v59;
                    if (v59 == nullptr) {
                      goto LABEL_170;
                    }
                  }
                }
                do {
                  v85 = v59[1];
                  if (v85 == v81) {
                    if (v59[2] == v81) {
                      goto LABEL_191;
                    }
                  }
                  else {
                    if (v85 >= GameData_21d9ac8) {
                      v85 %= (unsigned __int64)GameData_21d9ac8;
                    }
                    if (v85 != v0) {
                      break;
                    }
                  }
                  v59 = (_QWORD*)*v59;
                } while (v59 != nullptr);
              }
            }
          }
        LABEL_170:
          result = fw_memory_HeapManager_Allocate(*v16, 104, 16, 0);
          v59 = (_QWORD*)result;
          *(_QWORD*)result = 0;
          *(_QWORD*)(result + 8) = v81;
          *(_QWORD*)(result + 16) = v81;
          *(_QWORD*)(result + 24) = 0;
          *(_QWORD*)(result + 48) = 0;
          *(_QWORD*)(result + 56) = 0;
          v87 = *(float*)&GameData_21d9ae0;
          *(_QWORD*)(result + 32) = &GameData_1a9f09e;
          *(_QWORD*)(result + 40) = 0;
          v88 = GameData_21d9ad8 + 1;
          *(_QWORD*)(result + 64) = 0;
          *(_QWORD*)(result + 72) = 0;
          *(_QWORD*)(result + 80) = 0;
          *(_QWORD*)(result + 88) = 0;
          v89 = (float)(unsigned __int64)v88;
          *(_DWORD*)(result + 96) = 1065353216;
          if (v82 == 0 || (float)(v87 * (float)v82) < v89) {
            v90 = v89 / v87;
            v91 = (v82 & (v82 - 1)) != 0;
            if (v82 < 3) {
              v91 = true;
            }
            v92 = v91 | (2 * v82);
            v93 = vcvtps_u64_f32(v90);
            if (v92 <= v93) {
              v94 = v93;
            }
            else {
              v94 = v92;
            }
            result = GameRoutine_7f26a0(v94);
            v82 = GameData_21d9ac8;
            if ((v82 & (v82 - 1)) != 0) {
              if (v81 >= GameData_21d9ac8) {
                v0 = v81 % GameData_21d9ac8;
              }
              else {
                v0 = v81;
              }
            }
            else {
              v0 = (GameData_21d9ac8 - 1) & v81;
            }
          }
          v95 = GameData_21d9ac0;
          v96 = *(_QWORD**)(GameData_21d9ac0 + 8 * v0);
          if (v96 != nullptr) {
            *v59 = *v96;
            *v96 = v59;
          }
          else {
            v97 = GameData_21d9ad0;
            GameData_21d9ad0 = (__int64)v59;
            *v59 = v97;
            *(_QWORD*)(v95 + 8 * v0) = &GameData_21d9ad0;
            if (*v59 != 0) {
              v98 = *(_QWORD*)(*v59 + 8LL);
              if ((v82 & (v82 - 1)) != 0) {
                if (v98 >= v82) {
                  v98 %= v82;
                }
              }
              else {
                v98 &= v82 - 1;
              }
              *(_QWORD*)(GameData_21d9ac0 + 8 * v98) = v59;
            }
          }
          ++GameData_21d9ad8;
        LABEL_191:
          v100 = v248;
          v99 = v249;
          if (v248 != v249) {
            v0 = (unsigned __int64)(v59 + 10);
            do {
              v102 = v59[9];
              v103 = *v100;
              if (v102 != 0 && v59[11] != 0) {
                v105 = v102 - 1;
                if ((v102 & (v102 - 1)) != 0) {
                  v106 = *v100;
                  if (v103 >= v102) {
                    v106 = v103 % v102;
                  }
                }
                else {
                  v106 = v105 & v103;
                }
                v107 = *(_QWORD**)(v59[8] + 8 * v106);
                if (v107 != nullptr) {
                  v108 = (_QWORD*)*v107;
                  if (v108 != nullptr) {
                    if ((v102 & v105) == 0) {
                      while (1) {
                        v110 = v108[1];
                        if (v103 == v110) {
                          if (v108[2] == v103) {
                            goto LABEL_197;
                          }
                        }
                        else if ((v110 & v105) != v106) {
                          goto LABEL_221;
                        }
                        v108 = (_QWORD*)*v108;
                        if (v108 == nullptr) {
                          goto LABEL_221;
                        }
                      }
                    }
                    do {
                      v109 = v108[1];
                      if (v103 == v109) {
                        if (v108[2] == v103) {
                          goto LABEL_197;
                        }
                      }
                      else {
                        if (v109 >= v102) {
                          v109 %= v102;
                        }
                        if (v109 != v106) {
                          break;
                        }
                      }
                      v108 = (_QWORD*)*v108;
                    } while (v108 != nullptr);
                  }
                }
              }
            LABEL_221:
              v112 = (unsigned __int64*)v59[6];
              v111 = v59[7];
              if ((unsigned __int64)v112 >= v111) {
                v114 = v59[5];
                v115 = (char*)v112 - v114;
                v116 = (((__int64)v112 - v114) >> 4) + 1;
                if (v116 >> 60 != 0) {
                  GameRoutine_693e60(result);
                }
                v117 = v111 - v114;
                v118 = v117 >> 3;
                if (v117 >> 3 <= v116) {
                  v118 = v116;
                }
                if ((unsigned __int64)v117 >= 0x7FFFFFFFFFFFFFF0LL) {
                  v119 = 0xFFFFFFFFFFFFFFFLL;
                }
                else {
                  v119 = v118;
                }
                if (v119 >> 60 != 0) {
                  goto LABEL_419;
                }
                v120 = fw_memory_HeapManager_Allocate(*v16, 16 * v119, 16, 0);
                v121 = &v115[v120];
                *(_QWORD*)v121 = *v100;
                *((_QWORD*)v121 + 1) = v100[1];
                v122 = (char*)v59[5];
                v123 = (char*)v59[6];
                v124 = &v115[v120 + v122 - v123];
                if (v122 != v123) {
                  v125 = &v115[v120 + v122 - v123];
                  do {
                    *(_QWORD*)v125 = *(_QWORD*)v122;
                    v126 = *((_QWORD*)v122 + 1);
                    v122 += 16;
                    *((_QWORD*)v125 + 1) = v126;
                    v125 += 16;
                  } while (v122 != v123);
                  v122 = (char*)v59[5];
                }
                v127 = v120 + 16 * v119;
                v113 = v121 + 16;
                v59[5] = v124;
                v59[6] = v121 + 16;
                v59[7] = v127;
                if (v122 != nullptr) {
                  if (*(_QWORD*)(*v16 + 200LL) != 0) {
                    v128 = 128;
                  }
                  else {
                    v128 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v16 + v128, v122);
                }
              }
              else {
                *v112 = v103;
                v113 = v112 + 2;
                v112[1] = v100[1];
              }
              v129 = *v16;
              v59[6] = v113;
              v130 = (_QWORD*)fw_memory_HeapManager_Allocate(v129, 40, 16, 0);
              *v130 = 0;
              v130[1] = 0;
              v131 = v130;
              v132 = *v100;
              v130[2] = *v100;
              v130[3] = v132;
              v133 = v100[1];
              v130[1] = v132;
              v130[4] = v133;
              result = GameRoutine_688220(v59 + 8);
              if (result != 0) {
                if (*(_QWORD*)(*v16 + 200LL) != 0) {
                  v101 = 128;
                }
                else {
                  v101 = 56;
                }
                result = nn_mem_StandardAllocator_Free(*v16 + v101, v131);
              }
              else {
                v134 = v59[9];
                v135 = v131[1];
                v136 = v134 - 1;
                if ((v134 & (v134 - 1)) != 0) {
                  if (v135 >= v134) {
                    v135 %= v134;
                  }
                }
                else {
                  v135 &= v136;
                }
                v137 = v59[8];
                v138 = *(_QWORD**)(v137 + 8 * v135);
                if (v138 != nullptr) {
                  *v131 = *v138;
                  *v138 = v131;
                }
                else {
                  *v131 = *(_QWORD*)v0;
                  *(_QWORD*)v0 = v131;
                  *(_QWORD*)(v137 + 8 * v135) = v0;
                  if (*v131 != 0) {
                    v139 = *(_QWORD*)(*v131 + 8LL);
                    if ((v134 & v136) != 0) {
                      if (v139 >= v134) {
                        v139 %= v134;
                      }
                    }
                    else {
                      v139 &= v136;
                    }
                    *(_QWORD*)(v59[8] + 8 * v139) = v131;
                  }
                }
                ++v59[11];
              }
            LABEL_197:
              v100 += 2;
            } while (v100 != v99);
          }
          v52 += 2;
        } while (v52 != v240);
        v53 = v248;
      }
      if (v53 != nullptr) {
        v141 = *v16;
        v249 = v53;
        if (*(_QWORD*)(v141 + 200) != 0) {
          v142 = 128;
        }
        else {
          v142 = 56;
        }
        result = nn_mem_StandardAllocator_Free(v141 + v142, v53);
      }
      v14 = v251;
      if (v251 != nullptr) {
        v143 = *v16;
        v252 = v251;
        if (*(_QWORD*)(v143 + 200) != 0) {
          v144 = 128;
        }
        else {
          v144 = 56;
        }
        result = nn_mem_StandardAllocator_Free(v143 + v144, v251);
      }
      v45 = v239 + 18;
      if (v239 + 18 == v238) {
        goto LABEL_24;
      }
    }
  }

LABEL_268:
  v145 = GameData_21d9da8;
  v241 = GameData_21d9db0;
  if (GameData_21d9da8 != GameData_21d9db0) {
    v146 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    do {
      v148 = *(_QWORD*)v145;
      if (*(_QWORD*)(*(_QWORD*)v145 + 40LL) == 0) {
        v165 = GameData_21d9dc8;
        if (GameData_21d9dc8 >= (unsigned __int64)GameData_21d9dd0) {
          v169 = GameData_21d9dc0;
          v170 = GameData_21d9dc8 - GameData_21d9dc0;
          v171 = (GameData_21d9dc8 - GameData_21d9dc0) >> 3;
          v172 = v171 + 1;
          if ((unsigned __int64)(v171 + 1) >> 61 != 0) {
            goto LABEL_422;
          }
          v173 = GameData_21d9dd0 - GameData_21d9dc0;
          if ((GameData_21d9dd0 - GameData_21d9dc0) >> 2 > v172) {
            v172 = v173 >> 2;
          }
          if ((unsigned __int64)v173 >= 0x7FFFFFFFFFFFFFF8LL) {
            v174 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v174 = v172;
          }
          if (v174 != 0) {
            if (v174 >> 61 != 0) {
              goto LABEL_419;
            }
            v175 = fw_memory_HeapManager_Allocate(*v146, 8 * v174, 16, 0);
          }
          else {
            v175 = 0;
          }
          v185 = v175 + 8 * v174;
          v186 = v175 + v170 - 8 * v171;
          *(_QWORD*)(v175 + v170) = v148;
          v166 = v175 + v170 + 8;
          result = memcpy(v186, v169, v170);
          GameData_21d9dc0 = v186;
          GameData_21d9dc8 = v166;
          GameData_21d9dd0 = v185;
          if (v169 != 0) {
            if (*(_QWORD*)(*v146 + 200LL) != 0) {
              v187 = 128;
            }
            else {
              v187 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*v146 + v187, v169);
          }
        }
        else {
          *(_QWORD*)GameData_21d9dc8 = v148;
          v166 = v165 + 8;
        }
        GameData_21d9dc8 = v166;
        v188 = (_QWORD*)GameData_21d9de0;
        if (GameData_21d9de0 < (unsigned __int64)GameData_21d9de8) {
          goto LABEL_353;
        }
        v189 = GameData_21d9dd8;
        v190 = GameData_21d9de0 - GameData_21d9dd8;
        v191 = (GameData_21d9de0 - GameData_21d9dd8) >> 3;
        v192 = v191 + 1;
        if ((unsigned __int64)(v191 + 1) >> 61 == 0) {
          v193 = GameData_21d9de8 - GameData_21d9dd8;
          if ((GameData_21d9de8 - GameData_21d9dd8) >> 2 > v192) {
            v192 = v193 >> 2;
          }
          if ((unsigned __int64)v193 >= 0x7FFFFFFFFFFFFFF8LL) {
            v194 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v194 = v192;
          }
          if (v194 == 0) {
            goto LABEL_363;
          }
          if (v194 >> 61 != 0) {
            goto LABEL_419;
          }
        LABEL_362:
          v201 = fw_memory_HeapManager_Allocate(*v146, 8 * v194, 16, 0);
        LABEL_364:
          v202 = v201 + 8 * v194;
          v203 = v201 + v190 - 8 * v191;
          *(_QWORD*)(v201 + v190) = v148;
          v198 = v201 + v190 + 8;
          result = memcpy(v203, v189, v190);
          GameData_21d9dd8 = v203;
          GameData_21d9de0 = v198;
          GameData_21d9de8 = v202;
          if (v189 != 0) {
            if (*(_QWORD*)(*v146 + 200LL) != 0) {
              v204 = 128;
            }
            else {
              v204 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*v146 + v204, v189);
          }
        LABEL_369:
          GameData_21d9de0 = v198;
          v205 = GameData_21d9df8;
          if (GameData_21d9df8 < (unsigned __int64)GameData_21d9e00) {
            *(_QWORD*)GameData_21d9df8 = v148;
            v147 = v205 + 8;
          }
          else {
            v206 = GameData_21d9df0;
            v207 = GameData_21d9df8 - GameData_21d9df0;
            v208 = (GameData_21d9df8 - GameData_21d9df0) >> 3;
            v209 = v208 + 1;
            if ((unsigned __int64)(v208 + 1) >> 61 != 0) {
              goto LABEL_422;
            }
            v210 = GameData_21d9e00 - GameData_21d9df0;
            if ((GameData_21d9e00 - GameData_21d9df0) >> 2 > v209) {
              v209 = v210 >> 2;
            }
            if ((unsigned __int64)v210 >= 0x7FFFFFFFFFFFFFF8LL) {
              v211 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v211 = v209;
            }
            if (v211 != 0) {
              if (v211 >> 61 != 0) {
                goto LABEL_419;
              }
              v212 = fw_memory_HeapManager_Allocate(*v146, 8 * v211, 16, 0);
            }
            else {
              v212 = 0;
            }
            v213 = v212 + 8 * v211;
            v214 = v212 + v207 - 8 * v208;
            *(_QWORD*)(v212 + v207) = v148;
            v147 = v212 + v207 + 8;
            result = memcpy(v214, v206, v207);
            GameData_21d9df0 = v214;
            GameData_21d9df8 = v147;
            GameData_21d9e00 = v213;
            if (v206 != 0) {
              if (*(_QWORD*)(*v146 + 200LL) != 0) {
                v215 = 128;
              }
              else {
                v215 = 56;
              }
              result = nn_mem_StandardAllocator_Free(*v146 + v215, v206);
            }
          }
          GameData_21d9df8 = v147;
          goto LABEL_272;
        }
      LABEL_422:
        GameRoutine_7f2680(result);
      }
      v149 = *(unsigned __int16*)(v148 + 32);
      if (*(_WORD*)(v148 + 32) == 0) {
        goto LABEL_308;
      }
      v150 = 0;
      v151 = 0;
      do {
        v152 = *(_QWORD*)(v148 + 40);
        v246 = nullptr;
        v247 = 0;
        v244 = nullptr;
        v245 = nullptr;
        v242 = nullptr;
        v243 = nullptr;
        result = game_FlagCondition_Append(&v242, v152 + 16 * v150);
        v153 = v242;
        if (v242 == v243) {
          v157 = 4;
          v158 = v245;
          if (v245 == nullptr) {
            goto LABEL_295;
          }
        LABEL_291:
          v159 = *v146;
          v246 = v158;
          if (*(_QWORD*)(v159 + 200) != 0) {
            v160 = 128;
          }
          else {
            v160 = 56;
          }
          result = nn_mem_StandardAllocator_Free(v159 + v160, v158);
          v153 = v242;
          goto LABEL_295;
        }
        v154 = 0;
        v155 = v242;
        do {
          if (*((_BYTE*)v155 + 16) == 1) {
            v154 |= *v155 == (__int64 (*)())GameData_21d9b48;
            if (*v155 == (__int64 (*)())GameData_21d9b58) {
              v154 |= 2u;
            }
          }
          v155 += 3;
        } while (v155 != v243);
        if (v154 == 2) {
          v156 = 2;
        }
        else {
          v156 = 4;
        }
        if (v154 == 1) {
          v157 = 1;
        }
        else {
          v157 = v156;
        }
        v158 = v245;
        if (v245 != nullptr) {
          goto LABEL_291;
        }
      LABEL_295:
        if (v153 != nullptr) {
          v161 = *v146;
          v243 = v153;
          if (*(_QWORD*)(v161 + 200) != 0) {
            v162 = 128;
          }
          else {
            v162 = 56;
          }
          result = nn_mem_StandardAllocator_Free(v161 + v162, v153);
        }
        ++v150;
        v151 |= v157;
      } while (v150 != v149);
      if (v151 == 1) {
        v183 = GameData_21d9dc8;
        if (GameData_21d9dc8 >= (unsigned __int64)GameData_21d9dd0) {
          v223 = GameData_21d9dc0;
          v224 = GameData_21d9dc8 - GameData_21d9dc0;
          v225 = (GameData_21d9dc8 - GameData_21d9dc0) >> 3;
          v226 = v225 + 1;
          if ((unsigned __int64)(v225 + 1) >> 61 != 0) {
            goto LABEL_422;
          }
          v227 = GameData_21d9dd0 - GameData_21d9dc0;
          if ((GameData_21d9dd0 - GameData_21d9dc0) >> 2 > v226) {
            v226 = v227 >> 2;
          }
          if ((unsigned __int64)v227 >= 0x7FFFFFFFFFFFFFF8LL) {
            v228 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v228 = v226;
          }
          if (v228 != 0) {
            if (v228 >> 61 != 0) {
              goto LABEL_419;
            }
            v229 = fw_memory_HeapManager_Allocate(*v146, 8 * v228, 16, 0);
          }
          else {
            v229 = 0;
          }
          v233 = v229 + 8 * v228;
          v234 = v229 + v224 - 8 * v225;
          *(_QWORD*)(v229 + v224) = v148;
          v184 = v229 + v224 + 8;
          result = memcpy(v234, v223, v224);
          GameData_21d9dc0 = v234;
          GameData_21d9dc8 = v184;
          GameData_21d9dd0 = v233;
          if (v223 != 0) {
            if (*(_QWORD*)(*v146 + 200LL) != 0) {
              v235 = 128;
            }
            else {
              v235 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*v146 + v235, v223);
          }
        }
        else {
          *(_QWORD*)GameData_21d9dc8 = v148;
          v184 = v183 + 8;
        }
        GameData_21d9dc8 = v184;
        goto LABEL_272;
      }
      if (v151 != 2) {
      LABEL_308:
        v167 = GameData_21d9dc8;
        if (GameData_21d9dc8 < (unsigned __int64)GameData_21d9dd0) {
          *(_QWORD*)GameData_21d9dc8 = v148;
          v168 = v167 + 8;
          goto LABEL_352;
        }
        v176 = GameData_21d9dc0;
        v177 = GameData_21d9dc8 - GameData_21d9dc0;
        v178 = (GameData_21d9dc8 - GameData_21d9dc0) >> 3;
        v179 = v178 + 1;
        if ((unsigned __int64)(v178 + 1) >> 61 == 0) {
          v180 = GameData_21d9dd0 - GameData_21d9dc0;
          if ((GameData_21d9dd0 - GameData_21d9dc0) >> 2 > v179) {
            v179 = v180 >> 2;
          }
          if ((unsigned __int64)v180 >= 0x7FFFFFFFFFFFFFF8LL) {
            v181 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v181 = v179;
          }
          if (v181 != 0) {
            if (v181 >> 61 != 0) {
              goto LABEL_419;
            }
            v182 = fw_memory_HeapManager_Allocate(*v146, 8 * v181, 16, 0);
          }
          else {
            v182 = 0;
          }
          v195 = v182 + 8 * v181;
          v196 = v182 + v177 - 8 * v178;
          *(_QWORD*)(v182 + v177) = v148;
          v168 = v182 + v177 + 8;
          result = memcpy(v196, v176, v177);
          GameData_21d9dc0 = v196;
          GameData_21d9dc8 = v168;
          GameData_21d9dd0 = v195;
          if (v176 != 0) {
            if (*(_QWORD*)(*v146 + 200LL) != 0) {
              v197 = 128;
            }
            else {
              v197 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*v146 + v197, v176);
          }
        LABEL_352:
          GameData_21d9dc8 = v168;
          v188 = (_QWORD*)GameData_21d9de0;
          if (GameData_21d9de0 < (unsigned __int64)GameData_21d9de8) {
          LABEL_353:
            *v188 = v148;
            v198 = (__int64)(v188 + 1);
            goto LABEL_369;
          }
          v189 = GameData_21d9dd8;
          v190 = GameData_21d9de0 - GameData_21d9dd8;
          v191 = (GameData_21d9de0 - GameData_21d9dd8) >> 3;
          v199 = v191 + 1;
          if ((unsigned __int64)(v191 + 1) >> 61 == 0) {
            v200 = GameData_21d9de8 - GameData_21d9dd8;
            if ((GameData_21d9de8 - GameData_21d9dd8) >> 2 > v199) {
              v199 = v200 >> 2;
            }
            if ((unsigned __int64)v200 >= 0x7FFFFFFFFFFFFFF8LL) {
              v194 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v194 = v199;
            }
            if (v194 != 0) {
              if (v194 >> 61 != 0) {
                goto LABEL_419;
              }
              goto LABEL_362;
            }
          LABEL_363:
            v201 = 0;
            goto LABEL_364;
          }
        }
        goto LABEL_422;
      }
      v163 = GameData_21d9de0;
      if (GameData_21d9de0 < (unsigned __int64)GameData_21d9de8) {
        *(_QWORD*)GameData_21d9de0 = v148;
        v164 = v163 + 8;
        goto LABEL_410;
      }
      v216 = GameData_21d9dd8;
      v217 = GameData_21d9de0 - GameData_21d9dd8;
      v218 = (GameData_21d9de0 - GameData_21d9dd8) >> 3;
      v219 = v218 + 1;
      if ((unsigned __int64)(v218 + 1) >> 61 != 0) {
        goto LABEL_422;
      }
      v220 = GameData_21d9de8 - GameData_21d9dd8;
      if ((GameData_21d9de8 - GameData_21d9dd8) >> 2 > v219) {
        v219 = v220 >> 2;
      }
      if ((unsigned __int64)v220 >= 0x7FFFFFFFFFFFFFF8LL) {
        v221 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v221 = v219;
      }
      if (v221 != 0) {
        if (v221 >> 61 == 0) {
          v222 = fw_memory_HeapManager_Allocate(*v146, 8 * v221, 16, 0);
          goto LABEL_405;
        }
      LABEL_419:
        GameRoutine_60a210(result);
      }
      v222 = 0;
    LABEL_405:
      v230 = v222 + 8 * v221;
      v231 = v222 + v217 - 8 * v218;
      *(_QWORD*)(v222 + v217) = v148;
      v164 = v222 + v217 + 8;
      result = memcpy(v231, v216, v217);
      GameData_21d9dd8 = v231;
      GameData_21d9de0 = v164;
      GameData_21d9de8 = v230;
      if (v216 != 0) {
        if (*(_QWORD*)(*v146 + 200LL) != 0) {
          v232 = 128;
        }
        else {
          v232 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*v146 + v232, v216);
      }
    LABEL_410:
      GameData_21d9de0 = v164;
    LABEL_272:
      v145 += 8;
    } while (v145 != v241);
  }
  return result;
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
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  char v11;
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
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  _QWORD* v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  _QWORD* v38;
  __int64 v39;
  __int64 v40;
  _QWORD v41[4];
  _QWORD* v42;
  _QWORD v43[4];
  _QWORD* v44;
  _QWORD v45[4];
  _QWORD* v46;

  if (a2 == 0) {
    return result;
  }
  if (*(_QWORD*)(a2 + 392) != 0) {
    v3 = result;
    GameRoutine_7ea0c0(a2 + 2104);
    v4 = *(_QWORD*)(a2 + 392);
    if (v4 != 0) {
      v5 = *(unsigned __int8*)(v4 + 441);
      if ((_DWORD)v5 == 3) {
        if (*(unsigned __int8*)(a2 + 2136) <= 1u) {
          v5 = 1;
        }
        else {
          v5 = *(unsigned __int8*)(a2 + 2136);
        }
      }
    }
    else {
      v5 = 0;
    }
    AssetTableFile_7ea4e0(v5);
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
              ((LODWORD(v45[0]) = *game_g_shared_system_skills_ptr & 0xFFF,
                (game_HasSkill(a2 + 1744, v45) & 1) == 0) ||
               ((v10 = *(_QWORD*)(a2 + 440)) == 0 ? (v11 = 9)
                                                  : (v11 = *(_BYTE*)(v10 + 16)),
                ((1 << v11) & 0xF1) == 0)) &&
              game_GameModeData_instance_ != 0 &&
              (v12 = *(_QWORD*)(game_GameModeData_instance_ + 96)) != 0 &&
              *(_QWORD*)(v12 + 336) != 0 ||
          (v9 = *(_QWORD*)(v6 + 336)) != 0) {
        v9 = GameRoutine_96de20();
      }
    }
    else {
      v9 = 0;
    }
    AssetTableFile_7ea680(v9);
    v13 = game_Unit_GetJob(a2);
    GameRoutine_7ea800(v13);
    AssetTableFile_7eae80(*(_QWORD*)(a2 + 392), *(unsigned __int8*)(a2 + 2088));
    if (*(_WORD*)(a2 + 1952) != 0) {
      GameRoutine_7ec000(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                    8LL * *(unsigned __int16*)(a2 + 1952)));
    }
    v14 = GameRoutine_6d36d0(a2);
    AssetTableFile_7eb500(v14);
    v41[0] = GameData_1f9c9e8;
    v42 = v41;
    v46 = v45;
    v43[0] = GameData_1f93088;
    v43[1] = v41;
    v44 = v43;
    v45[0] = GameData_1f92f88;
    v45[1] = 13;
    v45[2] = v43;
    game_UnitItemList_EachItem(a2 + 828, v45);
    if (v46 == v45) {
      v15 = 32;
    }
    else {
      if (v46 == nullptr) {
        goto LABEL_32;
      }
      v15 = 40;
    }
    (*(void (**)(__int64))(*v46 + v15))((__int64)v46);
  LABEL_32:
    if (v44 == v43) {
      v16 = 32;
    }
    else {
      if (v44 == nullptr) {
        goto LABEL_37;
      }
      v16 = 40;
    }
    (*(void (**)(__int64))(*v44 + v16))((__int64)v44);
  LABEL_37:
    if (v42 == v41) {
      v17 = 32;
    }
    else {
      if (v42 == nullptr) {
      LABEL_42:
        v18 = *(_QWORD*)(a2 + 440);
        if (v18 != 0) {
          v19 = *(unsigned __int8*)(v18 + 16);
        }
        else {
          v19 = 9;
        }
        AssetTableFile_7eb740(v19);
        AssetTableFile_7eb9c0(*(_QWORD*)(a2 + 1776), *(_QWORD*)(a2 + 1784));
        GameRoutine_7ebae0(GameData_21c96d8);
        v21 = *(_QWORD*)(a2 + 440);
        result = v3;
        if (v21 != 0 && *(unsigned __int8*)(v21 + 16) <= 3u &&
            GameData_21ca300 != 0 &&
            *(unsigned __int8*)(GameData_21ca300 + 18) >
                (unsigned int)(unsigned __int8)(*(_BYTE*)(a2 + 584) -
                                                *(_BYTE*)(GameData_21ca300 +
                                                          16)) &&
            *(unsigned __int8*)(GameData_21ca300 + 19) >
                (unsigned int)(unsigned __int8)(*(_BYTE*)(a2 + 585) -
                                                *(_BYTE*)(GameData_21ca300 +
                                                          17))) {
          v22 = *(char*)(a2 + 584) + 32 * *(char*)(a2 + 585);
          if (v22 >= 0x400) {
            v22 = 0;
          }
          v23 = *(
              _QWORD*)(*(_QWORD*)(*GameData_212c930 + 64) +
                       8LL * *(unsigned __int16*)(*(_QWORD*)(GameData_21ca300 +
                                                             72) +
                                                  2LL * v22 + 8));
          if (v23 != 0) {
            v24 = game_HashString(*(_QWORD*)(v23 + 8), v20);
            if (v24 != 0) {
              v25 = *(_QWORD*)(GameData_21d9d00 + 8 * (v24 & 0xFFF));
              if (v25 != 0) {
                v26 = *(_QWORD**)(GameData_21d9d00 + 8 * (v24 & 0xFFF));
                while (*v26 != v24) {
                  v26 = (_QWORD*)v26[1];
                  if (v26 == nullptr) {
                    v27 = *(_QWORD**)(GameData_21d9d00 + 8 * (v24 & 0xFFF));
                    while (*v27 != v24) {
                      v27 = (_QWORD*)v27[1];
                      if (v27 == nullptr) {
                        do {
                          v28 = v25;
                          v25 = *(_QWORD*)(v25 + 8);
                        } while (v25 != 0);
                        *(_QWORD*)(v28 + 8) =
                            GameRoutine_7f2ec0(&GameData_21d9ce8);
                        goto LABEL_64;
                      }
                    }
                    break;
                  }
                }
              }
              else {
                LODWORD(v45[0]) = v24 & 0xFFF;
                *(_QWORD*)(GameData_21d9d00 + 8 * (v24 & 0xFFF)) =
                    GameRoutine_7f2ec0(&GameData_21d9ce8);
                GameRoutine_7d6200(&GameData_21d9d18, v45);
              }
            }
          LABEL_64:
            v29 = *(__int64**)(v23 + 48);
            result = v3;
            if (v29 != nullptr) {
              v30 = *v29;
              if (*v29 != 0) {
                v31 = *(_QWORD*)(GameData_21d9d00 + 8 * (*v29 & 0xFFF));
                if (v31 != 0) {
                  v32 = *(_QWORD**)(GameData_21d9d00 + 8 * (v30 & 0xFFF));
                  while (*v32 != v30) {
                    v32 = (_QWORD*)v32[1];
                    if (v32 == nullptr) {
                      v33 = *(_QWORD**)(GameData_21d9d00 + 8 * (v30 & 0xFFF));
                      while (*v33 != v30) {
                        v33 = (_QWORD*)v33[1];
                        if (v33 == nullptr) {
                          do {
                            v34 = v31;
                            v31 = *(_QWORD*)(v31 + 8);
                          } while (v31 != 0);
                          *(_QWORD*)(v34 + 8) =
                              GameRoutine_7f2ec0(&GameData_21d9ce8);
                          goto LABEL_76;
                        }
                      }
                      goto LABEL_77;
                    }
                  }
                }
                else {
                  LODWORD(v45[0]) = v30 & 0xFFF;
                  *(_QWORD*)(GameData_21d9d00 + 8 * (v30 & 0xFFF)) =
                      GameRoutine_7f2ec0(&GameData_21d9ce8);
                  GameRoutine_7d6200(&GameData_21d9d18, v45);
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
    (*(void (**)(__int64))(*v42 + v17))((__int64)v42);
    goto LABEL_42;
  }

LABEL_77:
  if (GameData_21d9be8 != 0) {
    v36 = *(_QWORD*)(GameData_21d9d00 + 8 * (GameData_21d9be8 & 0xFFF));
    if (v36 != 0) {
      v37 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9be8 & 0xFFF));
      while (*v37 != GameData_21d9be8) {
        v37 = (_QWORD*)v37[1];
        if (v37 == nullptr) {
          v38 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9be8 & 0xFFF));
          while (*v38 != GameData_21d9be8) {
            v38 = (_QWORD*)v38[1];
            if (v38 == nullptr) {
              v39 = result;
              do {
                v40 = v36;
                v36 = *(_QWORD*)(v36 + 8);
              } while (v36 != 0);
              *(_QWORD*)(v40 + 8) = GameRoutine_7f2ec0(&GameData_21d9ce8);
              return v39;
            }
          }
          return result;
        }
      }
    }
    else {
      v39 = result;
      LODWORD(v45[0]) = GameData_21d9be8 & 0xFFF;
      v35 = GameData_21d9be8 & 0xFFF;
      *(_QWORD*)(GameData_21d9d00 + 8 * v35) =
          GameRoutine_7f2ec0(&GameData_21d9ce8);
      GameRoutine_7d6200(&GameData_21d9d18, v45);
      return v39;
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
  __int64 v9;
  __int64 v11;
  __int64 v12;

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
  v12 = *a3;
  v11 = game_HashString(v12, v8);
  v9 = AssetTableFile_7e7b20(a1, (unsigned __int64*)&v11);
  return AssetTableFile_7e8000(v9);
}

__int64 AssetTableFile_7e9aa0(__int64 a1, __int64 a2, __int64* a3)
{
  int* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v11;
  __int64 v12;

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
  v12 = *a3;
  v11 = game_HashString(v12, v8);
  v9 = AssetTableFile_7e7b20(a1, (unsigned __int64*)&v11);
  return AssetTableFile_7e8000(v9);
}

__int64 AssetTableFile_7e9d00(__int64 a1, __int64 a2, __int64* a3)
{
  int* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v12;
  __int64 v13;

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
  GameRoutine_7ea0c0(a2);
  v8 = game_GetHero(9);
  AssetTableFile_7e95e0(a1, v8, 0);
  v13 = *a3;
  v12 = game_HashString(v13, v9);
  v10 = AssetTableFile_7e7b20(a1, (unsigned __int64*)&v12);
  return AssetTableFile_7e8000(v10);
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

__int64 AssetTableFile_7eb9c0(__int64 result, _DWORD* a2)
{
  __int64 v2;
  __int64 v3;
  _DWORD* v5;
  __int64* v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  _QWORD* v11;
  int v12;
  __int64 v13;
  __int64 v14;

  if ((_DWORD*)result != a2) {
    v13 = v2;
    v14 = v3;
    v5 = (_DWORD*)result;
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
                  result = GameRoutine_7f2ec0(&GameData_21d9ce8);
                  v11[1] = result;
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
              GameRoutine_7f2ec0(&GameData_21d9ce8);
          result = GameRoutine_7d6200(&GameData_21d9d18, &v12);
        }
      }
    LABEL_4:
      ++v5;
    } while (v5 != a2);
  }
  return result;
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
      v8 = 1LL << -(char)__clz(result - 1);
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
            v29 = 1LL << -(char)__clz(result - 1);
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

__int64 game_AssetTableFile_OnBuild_lambda0_Invoke(__int64 result,
                                                   unsigned __int64* a2)
{
  unsigned __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64* v11;
  unsigned __int64* v12;
  int v13;
  int v14;
  unsigned __int64* v15;
  __int64 v16;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d9f88,
                            memory_order_acquire) &
       1) == 0) {
    v16 = result;
    v15 = a2;
    v13 = __cxa_guard_acquire(&GameData_21d9f88);
    a2 = v15;
    v14 = v13;
    result = v16;
    if (v14 != 0) {
      GameData_21d9f84 = 1598310721;
      __cxa_guard_release(&GameData_21d9f88);
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
              v10 = *(_QWORD*)(result + 8);
              v12 = *(unsigned __int64**)(v10 + 8);
              if ((unsigned __int64)v12 < *(_QWORD*)(v10 + 16)) {
                *v12 = v3;
                v12[1] = a2[1];
                *(_QWORD*)(v10 + 8) = v12 + 2;
                return result;
              }
            LABEL_30:
              result = GameRoutine_693d40(v10);
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
  v10 = *(_QWORD*)(result + 16);
  v11 = *(unsigned __int64**)(v10 + 8);
  if ((unsigned __int64)v11 >= *(_QWORD*)(v10 + 16)) {
    goto LABEL_30;
  }
  result = (__int64)(v11 + 2);
  *v11 = *a2;
  v11[1] = a2[1];
LABEL_31:
  *(_QWORD*)(v10 + 8) = result;
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
