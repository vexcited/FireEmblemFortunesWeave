#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_12f61a0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212cd90[21];
void __attribute__((noreturn)) GameRoutine_12f2f30(void);
void __attribute__((noreturn)) GameRoutine_12f2f50(void);
void __attribute__((noreturn)) GameRoutine_12f2f70(void);
void __attribute__((noreturn)) GameRoutine_12f2f90(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 game_anonymous_ItemCandidatesForAll_Prepare_closure3_Invoke_alt1(
    __int64 result, int* a2,
    unsigned __int16* a3) __asm__("game_anonymous_ItemCandidatesForAll_Prepare_"
                                  "closure3_Invoke");
__int64 game_anonymous_ItemCandidatesForAll_Prepare_closure4_Invoke_alt1(
    __int64 result, int* a2,
    unsigned __int16* a3) __asm__("game_anonymous_ItemCandidatesForAll_Prepare_"
                                  "closure4_Invoke");
__int64 game_anonymous_ItemCandidatesForAll_Prepare_closure5_Invoke_alt1(
    __int64 result, int* a2,
    unsigned __int16* a3) __asm__("game_anonymous_ItemCandidatesForAll_Prepare_"
                                  "closure5_Invoke");
__int64 game_anonymous_ItemCandidatesForAll_Prepare_closure6_Invoke_alt1(
    __int64 result, int* a2,
    unsigned __int16* a3) __asm__("game_anonymous_ItemCandidatesForAll_Prepare_"
                                  "closure6_Invoke");
bool game_anonymous_ItemCandidatesForAll_CheckWeaponRange_closure_Invoke(
    __int64 a1, __int64 a2);
__attribute__((swiftcall)) void
TransporterConst_89bd90(PSEUDO_X8, __int64 result, unsigned int, __int64);
__attribute__((swiftcall)) void
game_UnitUtil_UniqueMap_Commit_89abc0(PSEUDO_X8, __int64, unsigned __int16*,
                                      __int64);
__int64 GameRoutine_12f2800(__int64 result, __int64, __int64, __int64);
__int64 GameRoutine_15b59e0(__int64);
__int64 GameRoutine_6c6da0(__int64);
__int64 ItemCandidatesForAll_12f1580_alt1(__int64, _DWORD*) __asm__(
    "ItemCandidatesForAll_12f1580");
__int64 ItemCandidatesForAll_12f3c30_alt1(__int64 result, unsigned int) __asm__(
    "ItemCandidatesForAll_12f3c30");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_6c51e0(__int64 result);
__int64 game_6c6ec0(__int64);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_HasSkill_alt1(_QWORD, _QWORD) __asm__("game_HasSkill");
__int64 game_UnitItemList_Sort(__int64, unsigned int, int);
__int64 game_UnitPool_GetFirst(int*);
__int64 game_Unit_EquipItem_6d8f40(__int64, unsigned int);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
bool TransporterConst_89ca00(unsigned __int16*);
bool UnitItem_6e8bc0(unsigned __int16*, __int64);
extern _DWORD* game_g_shared_system_skills_ptr_alt1 __asm__(
    "game_g_shared_system_skills_ptr");
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64 (*GameData_2024428[])();
extern __int64 (*GameData_20244b8[])();
extern __int64 (*GameData_2024538[])();
extern __int64 (*GameData_20245b8[])();
extern __int64 (*GameData_2024638[])();
extern __int64 (*GameData_20246b8[])();
extern __int64 (*GameData_2024738[])();
extern __int64 (*GameData_20247b8[])();
extern __int64 (*GameData_2024838[])();
extern __int64 (*GameData_20248c8[])();
extern __int64* GameData_212c998[148];
extern __int64* GameData_212d328;
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212cf80[5];
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_2131908[20];
extern __int64 GameData_21c99b8;
extern __int64 GameData_21ca310;
extern __int64 game_GameModeData_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 game_script_map_effect_g_sequence;
void GameRoutine_89b900(__int64);
void __attribute__((noreturn)) GameRoutine_12f27e0();
void __attribute__((noreturn))
GameRoutine_12f2f30_alt1() __asm__("GameRoutine_12f2f30");
void __attribute__((noreturn))
GameRoutine_12f2f50_alt1() __asm__("GameRoutine_12f2f50");
void __attribute__((noreturn))
GameRoutine_12f2f70_alt1() __asm__("GameRoutine_12f2f70");
void __attribute__((noreturn))
GameRoutine_12f2f90_alt1() __asm__("GameRoutine_12f2f90");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_6c1f60();
__n128
ItemCandidatesForAll_12eff40_alt1() __asm__("ItemCandidatesForAll_12eff40");
__int64 ItemCandidatesForAll_12f1580(__int64 a1, unsigned int* a2);
__int64 ItemCandidatesForAll_12f25c0(__int64 a1, __int64 a2);
void ItemCandidatesForAll_12f3c30(__int64 result, unsigned int a2);
_QWORD* GameRoutine_12f61a0_alt1(_QWORD*,
                                 __int64*) __asm__("GameRoutine_12f61a0");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
extern __int64 GameData_212cd90_alt1[21] __asm__("GameData_212cd90");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_anonymous_ItemCandidatesForAll_Prepare_closure3_Invoke(
    __int64 a1, int* a2, unsigned __int16* a3);
void game_anonymous_ItemCandidatesForAll_Prepare_closure4_Invoke(
    __int64 a1, int* a2, unsigned __int16* a3);
void game_anonymous_ItemCandidatesForAll_Prepare_closure5_Invoke(
    __int64 a1, int* a2, unsigned __int16* a3);
void game_anonymous_ItemCandidatesForAll_Prepare_closure6_Invoke(
    __int64 a1, int* a2, unsigned __int16* a3);
void ItemCandidatesForAll_12eff40();

void ItemCandidatesForAll_12eff40()
{
  __int64 v0;
  unsigned __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char* v6;
  __int64 v7;
  _DWORD* v8;
  __int64 v9;
  __int64 v10;
  char v11;
  char* v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  _QWORD* v21;
  bool v22;
  int v23;
  _DWORD* v24;
  _QWORD* v25;
  __int64 v26;
  char v27;
  char* v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned int v39;
  _DWORD* v40;
  __int64 v41;
  __int64 v42;
  char v43;
  signed __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned int v52;
  unsigned int v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  char* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  unsigned __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  int v92;
  __int64 v93;
  __int64 v94;
  int v95;
  __int64 (***v96)();
  int v97;
  __int64 v98;
  unsigned int v99;
  __int64 v100;
  __int64* v101;
  __int64* v102;
  __int64 v103;
  __int64 v104;
  unsigned int v105;
  __int16* v106;
  __int64 (***v107)();
  __int64 v108;
  __int16* v109;
  __int16* v110;
  int v111;
  int v112;
  unsigned int v113;
  unsigned int v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  unsigned __int8* v118;
  unsigned __int8* v119;
  unsigned __int8 v120;
  int v121;
  unsigned int v122;
  unsigned __int8 v123;
  unsigned __int8 v124;
  bool v125;
  int v126;
  __int64 (**v127)();
  unsigned int v128;
  __int64 (**v129)();
  __int16 v130;
  __int16* v131;
  __int64 (***v132)();
  __int64 v133;
  __int16* v134;
  __int16* v135;
  int v136;
  int v137;
  unsigned int v138;
  unsigned int v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  unsigned __int8* v143;
  unsigned __int8* v144;
  unsigned __int8 v145;
  int v146;
  unsigned int v147;
  unsigned __int8 v148;
  unsigned __int8 v149;
  bool v150;
  int v151;
  __int64 v152;
  _BYTE* v153;
  unsigned int v154;
  __int64 v155;
  _QWORD* v156;
  _QWORD* v157;
  bool v158;
  unsigned int v159;
  __int64 (**v160)();
  int v161;
  int v162;
  int v163;
  unsigned int v164;
  unsigned __int8* v165;
  unsigned int v166;
  unsigned __int8* v167;
  unsigned int v168;
  int v169;
  unsigned __int8* v170;
  __int64 (**v171)();
  int v172;
  int v173;
  int v174;
  unsigned int v175;
  unsigned __int8* v176;
  unsigned int v177;
  unsigned __int8* v178;
  unsigned int v179;
  int v180;
  unsigned __int8* v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  int v185;
  __int64* v186;
  __int64 (**v187)();
  int v188;
  __int64 v189;
  __int16* v190;
  int v191;
  __int64 (**v192)();
  int v193;
  __int64 (**v194)();
  int v195;
  __int64 (**v196)();
  __int64 v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  __int64 v201;
  __int64 v202;
  unsigned int v203;
  __int64* v204;
  __int64 v205;
  int v206;
  int v207;
  int v208;
  unsigned int v209;
  unsigned int v210;
  struct {
    __int64 (***v211)();
    __int64 (***v212)();
    __int64 v213;
    __int64* v214;
    __int64* v215;
    __int64 v216;
    __int16* v217;
    unsigned __int64 v218;
    __int64 v219;
    unsigned __int8* v220;
    unsigned __int8* v221;
    __int64 v222;
    unsigned __int8* v223;
    unsigned __int8* v224;
    __int64 v225;
  } v211_;
  struct {
    _QWORD v226[4];
    _QWORD* v227;
  } v226_;
  struct {
    _QWORD v228[4];
    _QWORD* v229;
  } v228_;
  struct {
    _QWORD v230[4];
    _QWORD* v231;
  } v230_;
  __int64 v232;
  __int64 v233;
  struct {
    __int64 (**v234)();
    __int64* v235;
    int v236;
    char gap356_[12];
    __int64 (***v237)();
  } v234_;

  v0 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 800, 16, 0);
  v1 = v0 + 800;
  v2 = (__int64*)v0;
  if (game_script_map_effect_g_sequence != 0 &&
      game_GameModeData_instance_ != 0 &&
      (*(_BYTE*)(game_GameModeData_instance_ + 92) & 1) != 0) {
    v5 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556000LL);
    if (v5 != 0) {
      v6 = (char*)v0;
      v7 = v0;
      v8 = (_DWORD*)game_g_shared_system_skills_ptr;
      do {
        v9 = v5;
        v5 = *(_QWORD*)(v5 + 432);
        LODWORD(v211_.v211) = *v8 & 0xFFF;
        if ((game_HasSkill((_QWORD*)(v9 + 1744), (unsigned int*)&v211_.v211) &
             1) != 0) {
          v10 = *(_QWORD*)(v9 + 440);
          v11 = v10 != 0 ? *(_BYTE*)(v10 + 16) : 9;
          if (((1 << v11) & 0xF1) != 0) {
            continue;
          }
        }
        if ((unsigned __int64)v6 < v1) {
          *(_QWORD*)v6 = v9;
          v6 += 8;
        }
        else {
          v12 = &v6[-v7];
          v13 = (__int64)&v6[-v7] >> 3;
          v14 = v13 + 1;
          if ((unsigned __int64)(v13 + 1) >> 61 != 0) {
          LABEL_432:
            GameRoutine_6c1f60();
          }
          if ((__int64)(v1 - v7) >> 2 > v14) {
            v14 = (__int64)(v1 - v7) >> 2;
          }
          if (v1 - v7 >= 0x7FFFFFFFFFFFFFF8LL) {
            v15 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v15 = v14;
          }
          if (v15 != 0) {
            if (v15 >> 61 != 0) {
            LABEL_433:
              GameRoutine_60a210_alt1();
            }
            v16 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v15, 16, 0);
          }
          else {
            v16 = 0;
          }
          v1 = v16 + 8 * v15;
          v17 = (unsigned __int64)&v6[-v7];
          v18 = (__int64)&v12[v16 + -8 * v13];
          *(_QWORD*)&v12[v16] = v9;
          v6 = &v12[v16 + 8];
          memcpy_alt1(v18, v7, v17);
          if (v7 != 0) {
            v19 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v19 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v7);
          }
          v7 = v18;
        }
      } while (v5 != 0);
      goto LABEL_111;
    }
    goto LABEL_117;
  }
  v3 = *(_QWORD*)GameData_212dbb8[0];
  if (*(_QWORD*)GameData_212dbb8[0] == 0 || *(_BYTE*)(v3 + 9) != 1 ||
      *(_DWORD*)(v3 + 136) != 1) {
  LABEL_71:
    LODWORD(v211_.v211) = 17;
    v36 = game_UnitPool_GetFirst((int*)&v211_.v211);
    if (v36 != 0) {
      v37 = *(_QWORD*)(v36 + 432);
      v38 = v36;
      if (v37 == 0) {
        v37 = *(_QWORD*)(v36 + 440);
        if (v37 != 0) {
          v39 = *(unsigned __int8*)(v37 + 16);
          if (v39 <= 8) {
            v203 = v39 - 3;
            while (1) {
              if (v203 == 0) {
                v37 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                if (v37 != 0) {
                  break;
                }
              }
              if (++v203 == 6) {
                goto LABEL_75;
              }
            }
          }
          else {
          LABEL_75:
            v37 = 0;
          }
        }
      }
      v7 = (__int64)v2;
      v40 = (_DWORD*)game_g_shared_system_skills_ptr;
      while (1) {
      LABEL_78:
        v41 = v37;
        LODWORD(v211_.v211) = *v40 & 0xFFF;
        if ((game_HasSkill((_QWORD*)(v38 + 1744), (unsigned int*)&v211_.v211) &
             1) != 0) {
          v42 = *(_QWORD*)(v38 + 440);
          v43 = v42 != 0 ? *(_BYTE*)(v42 + 16) : 9;
          if (((1 << v43) & 0xF1) != 0) {
            goto LABEL_85;
          }
        }
        if ((unsigned __int64)v2 < v1) {
          break;
        }
        v44 = (signed __int64)v2 - v7;
        v45 = (v44 >> 3) + 1;
        if (v45 >> 61 != 0) {
          goto LABEL_432;
        }
        if ((__int64)(v1 - v7) >> 2 > v45) {
          v45 = (__int64)(v1 - v7) >> 2;
        }
        if (v1 - v7 >= 0x7FFFFFFFFFFFFFF8LL) {
          v46 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v46 = v45;
        }
        if (v46 != 0) {
          if (v46 >> 61 != 0) {
            goto LABEL_433;
          }
          v47 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v46, 16, 0);
        }
        else {
          v47 = 0;
        }
        v1 = v47 + 8 * v46;
        v48 = v47 + v44 - 8 * (v44 >> 3);
        *(_QWORD*)(v47 + v44) = v38;
        v49 = v47 + v44 + 8;
        memcpy_alt1(v48, v7, v44);
        if (v7 != 0) {
          v50 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v50 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v50, v7);
        }
        v7 = v48;
        v2 = (__int64*)v49;
        if (v41 == 0) {
        LABEL_110:
          v6 = (char*)v2;
          goto LABEL_111;
        }
      LABEL_102:
        v37 = *(_QWORD*)(v41 + 432);
        v38 = v41;
        if (v37 == 0) {
          v51 = *(_QWORD*)(v41 + 440);
          v38 = v41;
          if (v51 != 0) {
            v52 = *(unsigned __int8*)(v51 + 16);
            v37 = 0;
            v38 = v41;
            if (v52 <= 8) {
              v53 = v52 - 3;
              while (1) {
                if (v53 == 0) {
                  v37 =
                      *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                  if (v37 != 0) {
                    break;
                  }
                }
                if (++v53 == 6) {
                  v37 = 0;
                  v38 = v41;
                  goto LABEL_78;
                }
              }
              v38 = v41;
            }
          }
        }
      }
      *v2++ = v38;
    LABEL_85:
      if (v41 == 0) {
        goto LABEL_110;
      }
      goto LABEL_102;
    }
  LABEL_117:
    v211_.v212 = nullptr;
    v211_.v213 = 0;
    v211_.v211 = nullptr;
    goto LABEL_118;
  }
  v234_.v234 = nullptr;
  v211_.v215 = (__int64*)&v211_.v211;
  v211_.v211 = (__int64 (***)(void))(GameData_2131908[0] + 16);
  v211_.v212 = &v234_.v234;
  GameRoutine_15b59e0((__int64)&v211_.v211);
  if (v211_.v215 == (__int64*)&v211_.v211) {
    v4 = 32;
  }
  else {
    if (v211_.v215 == nullptr) {
      goto LABEL_37;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v211_.v215 + v4))((__int64)v211_.v215);
LABEL_37:
  if (v234_.v234 == nullptr) {
    goto LABEL_71;
  }
  if ((*(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 328LL) & 4) != 0) {
    v20 = 1;
  }
  else {
    v20 = *(_DWORD*)(*(_QWORD*)GameData_212c6a0[0] + 308LL);
  }
  v21 = *(_QWORD**)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
  v22 = v21 == nullptr || v20 < 1;
  if (v22) {
    goto LABEL_117;
  }
  v23 = 1;
  v6 = (char*)v2;
  v7 = (__int64)v2;
  v24 = (_DWORD*)game_g_shared_system_skills_ptr;
  do {
    v25 = (_QWORD*)v21[54];
    LODWORD(v211_.v211) = *v24 & 0xFFF;
    if ((game_HasSkill(v21 + 218, (unsigned int*)&v211_.v211) & 1) != 0) {
      v26 = v21[55];
      v27 = v26 != 0 ? *(_BYTE*)(v26 + 16) : 9;
      if (((1 << v27) & 0xF1) != 0) {
        goto LABEL_68;
      }
    }
    if ((unsigned __int64)v6 >= v1) {
      v28 = &v6[-v7];
      v29 = (__int64)&v6[-v7] >> 3;
      v30 = v29 + 1;
      if ((unsigned __int64)(v29 + 1) >> 61 != 0) {
        goto LABEL_432;
      }
      if ((__int64)(v1 - v7) >> 2 > v30) {
        v30 = (__int64)(v1 - v7) >> 2;
      }
      if (v1 - v7 >= 0x7FFFFFFFFFFFFFF8LL) {
        v31 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v31 = v30;
      }
      if (v31 != 0) {
        if (v31 >> 61 != 0) {
          goto LABEL_433;
        }
        v32 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v31, 16, 0);
      }
      else {
        v32 = 0;
      }
      v1 = v32 + 8 * v31;
      v33 = (unsigned __int64)&v6[-v7];
      v34 = (__int64)&v28[v32 + -8 * v29];
      *(_QWORD*)&v28[v32] = v21;
      v6 = &v28[v32 + 8];
      memcpy_alt1(v34, v7, v33);
      if (v7 != 0) {
        v35 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v35 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v35, v7);
      }
      v7 = v34;
    }
    else {
      *(_QWORD*)v6 = v21;
      v6 += 8;
    }
  LABEL_68:
    if (v25 == nullptr) {
      break;
    }
    v21 = v25;
    v22 = v23++ < v20;
  } while (v22);
LABEL_111:
  v211_.v212 = nullptr;
  v211_.v213 = 0;
  v211_.v211 = nullptr;
  if (v6 != (char*)v7) {
    v54 = (__int64)&v6[-v7] >> 3;
    if (v54 >= 0x492492492492493LL) {
      GameRoutine_12f27e0();
    }
    v55 = 56 * v54;
    v56 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 56 * v54, 16, 0);
    v211_.v211 = (__int64 (***)(void))v56;
    v211_.v212 = (__int64 (***)(void))v56;
    v211_.v213 = v56 + v55;
    v57 = (char*)v7;
    do {
      v58 = *(_QWORD*)v57;
      v57 += 8;
      *(_BYTE*)(v56 + 8) = 0;
      *(_QWORD*)(v56 + 16) = 0;
      *(_QWORD*)(v56 + 24) = 0;
      *(_QWORD*)(v56 + 32) = 0;
      *(_QWORD*)(v56 + 40) = 0;
      *(_QWORD*)(v56 + 48) = 0;
      *(_QWORD*)v56 = v58;
      v56 += 56;
    } while (v57 != v6);
    v211_.v212 = (__int64 (***)(void))v56;
  }
  v2 = (__int64*)v7;
LABEL_118:
  v211_.v224 = nullptr;
  v211_.v225 = 0;
  v211_.v222 = 0;
  v211_.v223 = nullptr;
  v211_.v220 = nullptr;
  v211_.v221 = nullptr;
  v211_.v218 = 0;
  v211_.v219 = 0;
  v234_.v234 = GameData_2024428;
  v234_.v235 = (__int64*)((char*)&v233 + 4);
  v211_.v216 = 0;
  v211_.v217 = nullptr;
  v211_.v214 = nullptr;
  v211_.v215 = nullptr;
  v232 = 0;
  v233 = 0;
  v226_.v227 = v226_.v226;
  v234_.v237 = &v234_.v234;
  v230_.v230[0] = GameData_20244b8;
  v230_.v230[1] = &v233;
  v230_.v231 = v230_.v230;
  v228_.v228[0] = GameData_2024538;
  v228_.v228[1] = (char*)&v232 + 4;
  v228_.v229 = v228_.v228;
  v226_.v226[0] = GameData_20245b8;
  v226_.v226[1] = &v232;
  GameRoutine_12f2800((__int64)&v234_.v234, (__int64)v230_.v230,
                      (__int64)v228_.v228, (__int64)v226_.v226);
  if (v226_.v227 == v226_.v226) {
    v59 = 32;
  }
  else {
    if (v226_.v227 == nullptr) {
      goto LABEL_123;
    }
    v59 = 40;
  }
  (*(void (**)(__int64))(*v226_.v227 + v59))((__int64)v226_.v227);
LABEL_123:
  if (v228_.v229 == v228_.v228) {
    v60 = 32;
  }
  else {
    if (v228_.v229 == nullptr) {
      goto LABEL_128;
    }
    v60 = 40;
  }
  (*(void (**)(__int64))(*v228_.v229 + v60))((__int64)v228_.v229);
LABEL_128:
  if (v230_.v231 == v230_.v230) {
    v61 = 32;
  }
  else {
    if (v230_.v231 == nullptr) {
      goto LABEL_133;
    }
    v61 = 40;
  }
  (*(void (**)(__int64))(*v230_.v231 + v61))((__int64)v230_.v231);
LABEL_133:
  if (v234_.v237 == &v234_.v234) {
    v62 = 4;
  }
  else {
    if (v234_.v237 == nullptr) {
      goto LABEL_138;
    }
    v62 = 5;
  }
  ((__int64 (*)(__int64))(*v234_.v237)[v62])((__int64)v234_.v237);
LABEL_138:
  v63 = (__int64)v211_.v214;
  v64 = SHIDWORD(v233);
  v204 = v2;
  if (SHIDWORD(v233) >
      (unsigned __int64)((v211_.v216 - (__int64)v211_.v214) >> 3)) {
    if (v233 < 0) {
      GameRoutine_12f2f30_alt1();
    }
    v65 = (char*)v211_.v215 - (char*)v211_.v214;
    v66 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8LL * SHIDWORD(v233), 16, 0);
    v67 = v66 + 8 * v64;
    memcpy_alt1(v66, v63, v65);
    v211_.v214 = (__int64*)v66;
    v211_.v215 = (__int64*)(v66 + v65);
    v2 = v204;
    v211_.v216 = v67;
    if (v63 != 0) {
      v68 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v68 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v68, v63);
    }
  }
  v69 = (__int64)v211_.v217;
  v70 = (int)v233;
  if ((int)v233 > (unsigned __int64)((v211_.v219 - (__int64)v211_.v217) >> 3)) {
    if ((v233 & 0x80000000) != 0) {
      GameRoutine_12f2f50_alt1();
    }
    v71 = v211_.v218 - (_QWORD)v211_.v217;
    v72 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8LL * (int)v233, 16, 0);
    v73 = v72 + 8 * v70;
    memcpy_alt1(v72, v69, v71);
    v211_.v217 = (__int16*)v72;
    v211_.v218 = v72 + v71;
    v2 = v204;
    v211_.v219 = v73;
    if (v69 != 0) {
      v74 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v74 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v74, v69);
    }
  }
  v75 = (__int64)v211_.v220;
  if (0xAAAAAAAAAAAAAAABLL * ((v211_.v222 - (__int64)v211_.v220) >> 1) <
      SHIDWORD(v232)) {
    if (v232 < 0) {
      GameRoutine_12f2f70_alt1();
    }
    v76 = 3LL * SHIDWORD(v232);
    v77 = v211_.v221 - v211_.v220;
    v78 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 6LL * SHIDWORD(v232), 16, 0);
    v79 = v78 + 2 * v76;
    memcpy_alt1(v78, v75, v77);
    v211_.v220 = (unsigned __int8*)v78;
    v211_.v221 = (unsigned __int8*)(v78 + v77);
    v2 = v204;
    v211_.v222 = v79;
    if (v75 != 0) {
      v80 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v80 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v80, v75);
    }
  }
  v81 = (__int64)v211_.v223;
  v82 = (int)v232;
  if ((int)v232 > (unsigned __int64)((v211_.v225 - (__int64)v211_.v223) >> 3)) {
    if ((v232 & 0x80000000) != 0) {
      GameRoutine_12f2f90_alt1();
    }
    v83 = v211_.v224 - v211_.v223;
    v84 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8LL * (int)v232, 16, 0);
    v85 = v84 + 8 * v82;
    memcpy_alt1(v84, v81, v83);
    v211_.v223 = (unsigned __int8*)v84;
    v211_.v224 = (unsigned __int8*)(v84 + v83);
    v2 = v204;
    v211_.v225 = v85;
    if (v81 != 0) {
      v86 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v86 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v86, v81);
    }
  }
  v234_.v237 = &v234_.v234;
  v230_.v231 = v230_.v230;
  v226_.v227 = v226_.v226;
  v234_.v234 = GameData_2024638;
  v234_.v235 = (__int64*)&v211_.v211;
  v230_.v230[0] = GameData_20246b8;
  v230_.v230[1] = &v211_.v211;
  v228_.v228[0] = GameData_2024738;
  v228_.v228[1] = &v211_.v211;
  v228_.v229 = v228_.v228;
  v226_.v226[0] = GameData_20247b8;
  v226_.v226[1] = &v211_.v211;
  GameRoutine_12f2800((__int64)&v234_.v234, (__int64)v230_.v230,
                      (__int64)v228_.v228, (__int64)v226_.v226);
  if (v226_.v227 == v226_.v226) {
    v87 = 32;
  }
  else {
    if (v226_.v227 == nullptr) {
      goto LABEL_167;
    }
    v87 = 40;
  }
  (*(void (**)(__int64))(*v226_.v227 + v87))((__int64)v226_.v227);
LABEL_167:
  if (v228_.v229 == v228_.v228) {
    v88 = 32;
  }
  else {
    if (v228_.v229 == nullptr) {
      goto LABEL_172;
    }
    v88 = 40;
  }
  (*(void (**)(__int64))(*v228_.v229 + v88))((__int64)v228_.v229);
LABEL_172:
  if (v230_.v231 == v230_.v230) {
    v89 = 32;
  }
  else {
    if (v230_.v231 == nullptr) {
      goto LABEL_177;
    }
    v89 = 40;
  }
  (*(void (**)(__int64))(*v230_.v231 + v89))((__int64)v230_.v231);
LABEL_177:
  if (v234_.v237 == &v234_.v234) {
    v90 = 4;
    goto LABEL_181;
  }
  if (v234_.v237 != nullptr) {
    v90 = 5;
  LABEL_181:
    ((__int64 (*)(__int64))(*v234_.v237)[v90])((__int64)v234_.v237);
  }
  v91 = v211_.v212 - v211_.v211;
  v92 = -1227133513 * v91;
  if (-1227133513 * (int)v91 < 1) {
    goto LABEL_401;
  }
  v93 = v92 & 0x7FFFFFFF;
  v94 = 0;
  v95 = 0;
  v205 = v93;
  v206 = -1227133513 * v91;
  while (1) {
    v96 = &v211_.v211[7 * v94];
    v97 = *((unsigned __int8*)v96 + 8);
    if (*((_BYTE*)v96 + 8) != 0) {
      if (v97 != 1) {
        goto LABEL_255;
      }
      v98 = (__int64)*v96;
    }
    else {
      v98 = (__int64)*v96;
      *((_BYTE*)v96 + 8) = 1;
      if (*(_WORD*)(v98 + 828) != 0) {
        v99 = (*(_WORD*)(v98 + 836) != 0) + 1;
      }
      else {
        v99 = *(_WORD*)(v98 + 836) != 0;
      }
      if (*(_WORD*)(v98 + 844) != 0) {
        ++v99;
      }
      if (*(_WORD*)(v98 + 852) != 0) {
        ++v99;
      }
      if (*(_WORD*)(v98 + 860) != 0) {
        ++v99;
      }
      if (*(_WORD*)(v98 + 868) != 0) {
        ++v99;
      }
      if (v99 <= 5) {
        v100 = *(_QWORD*)(v98 + 392);
        if (v100 != 0) {
          v101 = *(__int64**)(*GameData_212cd90[0] + 64);
          v102 = *(__int64**)(*GameData_212cd90[0] + 72);
          if (v101 != v102) {
            while (1) {
              v104 = *v101++;
              v103 = v104;
              if (*(_QWORD*)(v104 + 40) == v100) {
                break;
              }
              if (v101 == v102) {
                goto LABEL_203;
              }
            }
            v152 = (__int64)v211_.v214;
            if (v211_.v214 != v211_.v215) {
              v153 = nullptr;
              v154 = 0;
              do {
                if ((*(_BYTE*)v152 & 1) == 0) {
                  v155 = *(_QWORD*)(v103 + 24);
                  v156 = *(_QWORD**)v155;
                  v157 = *(_QWORD**)(v155 + 8);
                  if (v156 != v157) {
                    while (
                        *v156 !=
                        *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                   8LL *
                                       *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr
                                                                                      [0] +
                                                                                  8LL) +
                                                                       8LL) +
                                                            12LL *
                                                                *(__int16*)(v152 +
                                                                            2) +
                                                            4))) {
                      v156 += 2;
                      if (v156 == v157) {
                        goto LABEL_306;
                      }
                    }
                  }
                  v158 = v156 == nullptr || v156 == v157;
                  if (!v158) {
                    v159 = *(_DWORD*)(v152 + 4);
                    if (v154 < v159) {
                      v153 = (_BYTE*)v152;
                    }
                    if (v154 <= v159) {
                      v154 = *(_DWORD*)(v152 + 4);
                    }
                  }
                }
              LABEL_306:
                v152 += 8;
              } while ((__int64*)v152 != v211_.v215);
              if (v153 != nullptr) {
                v96[2] = (__int64 (**)(void))v153;
                *v153 = 1;
                goto LABEL_378;
              }
            }
          }
        }
      }
    }
  LABEL_203:
    *((_BYTE*)v96 + 8) = 2;
    if (*(_WORD*)(v98 + 828) != 0) {
      v105 = (*(_WORD*)(v98 + 836) != 0) + 1;
    }
    else {
      v105 = *(_WORD*)(v98 + 836) != 0;
    }
    if (*(_WORD*)(v98 + 844) != 0) {
      ++v105;
    }
    if (*(_WORD*)(v98 + 852) != 0) {
      ++v105;
    }
    if (*(_WORD*)(v98 + 860) != 0) {
      ++v105;
    }
    if (*(_WORD*)(v98 + 868) != 0) {
      ++v105;
    }
    if (v105 > 5) {
      goto LABEL_256;
    }
    v234_.v237 = &v234_.v234;
    v234_.v234 = GameData_2024838;
    if (*(_WORD*)(v98 + 1952) != 0 &&
        (unsigned int)*(
            unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                         8LL *
                                             *(unsigned __int16*)(v98 + 1952)) +
                              72LL) -
                5 <
            2) {
      v106 = nullptr;
      v107 = &v234_.v234;
      v108 = 4;
      goto LABEL_251;
    }
    v110 = v211_.v217;
    v109 = (__int16*)v211_.v218;
    if (v211_.v217 == (__int16*)v211_.v218) {
      v106 = nullptr;
      v107 = &v234_.v234;
      v108 = 4;
    LABEL_251:
      ((__int64 (*)(__int64))(*v107)[v108])((__int64)v107);
      goto LABEL_252;
    }
    v111 = -1;
    v207 = v95;
    v209 = 0;
    v106 = nullptr;
    v112 = 0;
    v113 = 0;
    do {
      if ((*((_BYTE*)v110 + 7) & 1) == 0) {
        if (v234_.v237 == nullptr) {
        LABEL_431:
          GameRoutine_60a310();
        }
        if ((((__int64 (*)(__int64 (***)(void), __int16*))(*v234_.v237)[6])(
                 v234_.v237, v110) &
             1) != 0) {
          v115 =
              *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                        game_TransporterConst_List_instance__ptr
                                            [0] +
                                    8LL) +
                         8LL) +
              12LL * *v110;
          if (UnitItem_6e8bc0((unsigned __int16*)(v115 + 4), v98)) {
            v116 = *(unsigned __int16*)(v115 + 4);
            v117 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                         8 * v116) +
                              24LL);
            v118 = *(unsigned __int8**)(v117 + 488);
            v119 = *(unsigned __int8**)(v117 + 496);
            if (v118 == v119) {
              v121 = 0;
            }
            else {
              v120 = 15;
              LOBYTE(v121) = 0;
              do {
                v122 = v118[1];
                v124 = *v118;
                v118 += 2;
                v123 = v124;
                v121 = (unsigned __int8)v121;
                v125 = (unsigned __int8)v121 >= v122;
                if ((unsigned __int8)v121 <= v122) {
                  v121 = v122;
                }
                if (!v125) {
                  v120 = v123;
                }
              } while (v118 != v119);
              if (v121 != 0) {
                if (v120 > 0xCu) {
                  v126 = 0;
                }
                else {
                  v126 = *(unsigned __int8*)(v98 + 540 + v120);
                }
                v121 = v126 | (v121 << 8);
              }
            }
            if (v112 < v121 ||
                v112 == v121 && v113 < (unsigned __int16)v110[2]) {
              v111 = v110[1];
              v114 = *((unsigned __int8*)v110 + 6);
            LABEL_221:
              v209 = v114;
              v113 = (unsigned __int16)v110[2];
              v112 = v121;
              v106 = v110;
              goto LABEL_222;
            }
            if (v111 == (_DWORD)v116) {
              v114 = *((unsigned __int8*)v110 + 6);
              if (v209 < v114) {
                v111 = v110[1];
                goto LABEL_221;
              }
            }
          }
        }
      }
    LABEL_222:
      v110 += 4;
    } while (v110 != v109);
    v107 = v234_.v237;
    v93 = v205;
    v92 = v206;
    if (v234_.v237 == &v234_.v234) {
      v95 = v207;
      v108 = 4;
      goto LABEL_251;
    }
    v95 = v207;
    if (v234_.v237 != nullptr) {
      v108 = 5;
      goto LABEL_251;
    }
  LABEL_252:
    if (v106 == nullptr) {
      v97 = *((unsigned __int8*)v96 + 8);
    LABEL_255:
      if (v97 != 2) {
        goto LABEL_325;
      }
    LABEL_256:
      v127 = *v96;
      *((_BYTE*)v96 + 8) = 3;
      if (*((_WORD*)v127 + 414) != 0) {
        v128 = (*((_WORD*)v127 + 418) != 0) + 1;
      }
      else {
        v128 = *((_WORD*)v127 + 418) != 0;
      }
      if (*((_WORD*)v127 + 422) != 0) {
        ++v128;
      }
      if (*((_WORD*)v127 + 426) != 0) {
        ++v128;
      }
      if (*((_WORD*)v127 + 430) != 0) {
        ++v128;
      }
      if (*((_WORD*)v127 + 434) != 0) {
        ++v128;
      }
      if (v128 > 5) {
        goto LABEL_327;
      }
      v129 = v96[3];
      if (v129 == nullptr) {
        goto LABEL_327;
      }
      v130 = *((_WORD*)v129 + 2);
      v234_.v237 = &v234_.v234;
      LOWORD(v230_.v230[0]) = v130;
      v234_.v234 = GameData_20248c8;
      v234_.v235 = v230_.v230;
      if (*((_WORD*)v127 + 976) != 0 &&
          (unsigned int)*(
              unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                      64) +
                                           8LL * *((unsigned __int16*)v127 +
                                                   976)) +
                                72LL) -
                  5 <
              2) {
        v131 = nullptr;
        v132 = &v234_.v234;
        v133 = 4;
        goto LABEL_321;
      }
      v135 = v211_.v217;
      v134 = (__int16*)v211_.v218;
      if (v211_.v217 == (__int16*)v211_.v218) {
        v131 = nullptr;
        v132 = &v234_.v234;
        v133 = 4;
        goto LABEL_321;
      }
      v136 = -1;
      v208 = v95;
      v210 = 0;
      v131 = nullptr;
      v137 = 0;
      v138 = 0;
      while (2) {
        if ((*((_BYTE*)v135 + 7) & 1) == 0) {
          if (v234_.v237 == nullptr) {
            goto LABEL_431;
          }
          if ((((__int64 (*)(__int64 (***)(void), __int16*))(*v234_.v237)[6])(
                   v234_.v237, v135) &
               1) != 0) {
            v140 =
                *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                          game_TransporterConst_List_instance__ptr
                                              [0] +
                                      8LL) +
                           8LL) +
                12LL * *v135;
            if (UnitItem_6e8bc0((unsigned __int16*)(v140 + 4), (__int64)v127)) {
              v141 = *(unsigned __int16*)(v140 + 4);
              v142 =
                  *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                        8 * v141) +
                             24LL);
              v143 = *(unsigned __int8**)(v142 + 488);
              v144 = *(unsigned __int8**)(v142 + 496);
              if (v143 == v144) {
                v146 = 0;
              }
              else {
                v145 = 15;
                LOBYTE(v146) = 0;
                do {
                  v147 = v143[1];
                  v149 = *v143;
                  v143 += 2;
                  v148 = v149;
                  v146 = (unsigned __int8)v146;
                  v150 = (unsigned __int8)v146 >= v147;
                  if ((unsigned __int8)v146 <= v147) {
                    v146 = v147;
                  }
                  if (!v150) {
                    v145 = v148;
                  }
                } while (v143 != v144);
                if (v146 != 0) {
                  if (v145 > 0xCu) {
                    v151 = 0;
                  }
                  else {
                    v151 = *((unsigned __int8*)v127 + v145 + 540);
                  }
                  v146 = v151 | (v146 << 8);
                }
              }
              if (v137 < v146 ||
                  v137 == v146 && v138 < (unsigned __int16)v135[2]) {
                v136 = v135[1];
                v139 = *((unsigned __int8*)v135 + 6);
                goto LABEL_275;
              }
              if (v136 == (_DWORD)v141) {
                v139 = *((unsigned __int8*)v135 + 6);
                if (v210 < v139) {
                  v136 = v135[1];
                LABEL_275:
                  v210 = v139;
                  v138 = (unsigned __int16)v135[2];
                  v137 = v146;
                  v131 = v135;
                }
              }
            }
          }
        }
        v135 += 4;
        if (v135 == v134) {
          v132 = v234_.v237;
          if (v234_.v237 != &v234_.v234) {
            v93 = v205;
            v92 = v206;
            v95 = v208;
            if (v234_.v237 != nullptr) {
              v133 = 5;
              goto LABEL_321;
            }
          LABEL_322:
            if (v131 != nullptr) {
              v96[4] = (__int64 (**)(void))v131;
              *((_BYTE*)v131 + 7) = 1;
              goto LABEL_378;
            }
            v97 = *((unsigned __int8*)v96 + 8);
          LABEL_325:
            if (v97 == 4) {
            LABEL_352:
              *((_BYTE*)v96 + 8) = 5;
              v171 = *v96;
              if (*((_WORD*)*v96 + 414) != 0) {
                v172 = (*((_WORD*)*v96 + 418) != 0) + 1;
              }
              else {
                v172 = *((_WORD*)*v96 + 418) != 0;
              }
              if (*((_WORD*)v171 + 422) != 0) {
                ++v172;
              }
              v158 = *((unsigned __int16*)v171 + 426) == 0;
              v173 = *((unsigned __int16*)v171 + 430);
              v174 = *((unsigned __int16*)v171 + 434);
              if (!v158) {
                ++v172;
              }
              if (v173 != 0) {
                ++v172;
              }
              if (v174 != 0) {
                v175 = v172 + 1;
              }
              else {
                v175 = v172;
              }
              if (v175 <= 5) {
                v176 = v211_.v223;
                if (v211_.v223 != v211_.v224) {
                  v177 = 0;
                  v178 = nullptr;
                  do {
                    v179 = *((_DWORD*)v176 + 1);
                    v180 = *v176;
                    if (v177 >= v179) {
                      v181 = v178;
                    }
                    else {
                      v181 = v176;
                    }
                    if (v177 > v179) {
                      v179 = v177;
                    }
                    v176 += 8;
                    if (v180 == 0) {
                      v178 = v181;
                      v177 = v179;
                    }
                  } while (v176 != v211_.v224);
                  if (v178 != nullptr) {
                    v96[6] = (__int64 (**)(void))v178;
                    *v178 = 1;
                    goto LABEL_378;
                  }
                }
              }
            }
            else if (v97 == 3) {
            LABEL_327:
              *((_BYTE*)v96 + 8) = 4;
              v160 = *v96;
              if (*((_WORD*)*v96 + 414) != 0) {
                v161 = (*((_WORD*)*v96 + 418) != 0) + 1;
              }
              else {
                v161 = *((_WORD*)*v96 + 418) != 0;
              }
              if (*((_WORD*)v160 + 422) != 0) {
                ++v161;
              }
              v158 = *((unsigned __int16*)v160 + 426) == 0;
              v162 = *((unsigned __int16*)v160 + 430);
              v163 = *((unsigned __int16*)v160 + 434);
              if (!v158) {
                ++v161;
              }
              if (v162 != 0) {
                ++v161;
              }
              if (v163 != 0) {
                v164 = v161 + 1;
              }
              else {
                v164 = v161;
              }
              if (v164 <= 5) {
                v165 = v211_.v220;
                if (v211_.v220 != v211_.v221) {
                  v166 = 0;
                  v167 = nullptr;
                  do {
                    v168 = *((unsigned __int16*)v165 + 2);
                    v169 = *v165;
                    if (v166 >= v168) {
                      v170 = v167;
                    }
                    else {
                      v170 = v165;
                    }
                    if (v166 > v168) {
                      v168 = v166;
                    }
                    v165 += 6;
                    if (v169 == 0) {
                      v167 = v170;
                      v166 = v168;
                    }
                  } while (v165 != v211_.v221);
                  if (v167 != nullptr) {
                    v96[5] = (__int64 (**)(void))v167;
                    *v167 = 1;
                    goto LABEL_378;
                  }
                }
              }
              goto LABEL_352;
            }
            ++v95;
            goto LABEL_378;
          }
          v93 = v205;
          v92 = v206;
          v95 = v208;
          v133 = 4;
        LABEL_321:
          ((__int64 (*)(__int64))(*v132)[v133])((__int64)v132);
          goto LABEL_322;
        }
        continue;
      }
    }
    v96[3] = (__int64 (**)(void))v106;
    *((_BYTE*)v106 + 7) = 1;
  LABEL_378:
    if (++v94 == v93) {
      v94 = 0;
      v22 = v95 < v92;
      v95 = 0;
      if (!v22) {
        break;
      }
    }
  }
  v2 = v204;
  v182 = 0x6DB6DB6DB6DB6DB7LL * (v211_.v212 - v211_.v211);
  if ((int)v182 >= 1) {
    v183 = v182 & 0x7FFFFFFF;
    v184 = 0;
    do {
      v186 = (__int64*)&v211_.v211[v184];
      v187 = v211_.v211[v184 + 2];
      if (v187 != nullptr) {
        v188 = *((__int16*)v187 + 1);
      }
      else {
        v188 = -1;
      }
      v189 = *v186;
      LODWORD(v234_.v234) = v188;
      v190 = (__int16*)v186[3];
      if (v190 != nullptr) {
        v191 = *v190;
      }
      else {
        v191 = -1;
      }
      HIDWORD(v234_.v234) = v191;
      v192 = v211_.v211[v184 + 4];
      if (v192 != nullptr) {
        v193 = *(__int16*)v192;
      }
      else {
        v193 = -1;
      }
      LODWORD(v234_.v235) = v193;
      v194 = v211_.v211[v184 + 5];
      if (v194 != nullptr) {
        v195 = *((__int16*)v194 + 1);
      }
      else {
        v195 = -1;
      }
      HIDWORD(v234_.v235) = v195;
      v196 = v211_.v211[v184 + 6];
      if (v196 != nullptr) {
        v185 = *((__int16*)v196 + 1);
      }
      else {
        v185 = -1;
      }
      v234_.v236 = v185;
      ItemCandidatesForAll_12f1580_alt1(v189, &v234_.v234);
      --v183;
      v184 += 7;
    } while (v183 != 0);
  }
LABEL_401:
  if (v211_.v223 != nullptr) {
    v211_.v224 = v211_.v223;
    v197 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v197 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v197, (__int64)v211_.v223);
  }
  if (v211_.v220 != nullptr) {
    v211_.v221 = v211_.v220;
    v198 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v198 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v198, (__int64)v211_.v220);
  }
  if (v211_.v217 != nullptr) {
    v211_.v218 = (unsigned __int64)v211_.v217;
    v199 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v199 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v199, (__int64)v211_.v217);
  }
  if (v211_.v214 != nullptr) {
    v211_.v215 = v211_.v214;
    v200 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v200 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v200, (__int64)v211_.v214);
  }
  if (v211_.v211 != nullptr) {
    v211_.v212 = v211_.v211;
    v201 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v201 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v201, (__int64)v211_.v211);
  }
  if (v2 != nullptr) {
    v202 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v202 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v202, (__int64)v2);
  }
}

__int64 ItemCandidatesForAll_12f1580(__int64 a1, unsigned int* a2)
{
  unsigned int v3;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  __int64 result;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  int v17;
  int v18;
  bool v19;
  int v20;
  bool v21;
  int v22;
  bool v23;
  int v24;
  bool v25;
  char v26;
  int v27;
  __int64 v28;

  v3 = *a2;
  if ((v3 & 0x80000000) == 0) {
    if (*(_WORD*)(a1 + 828) != 0) {
      v5 = (*(_WORD*)(a1 + 836) != 0) + 1;
    }
    else {
      v5 = *(_WORD*)(a1 + 836) != 0;
    }
    if (*(_WORD*)(a1 + 844) != 0) {
      ++v5;
    }
    if (*(_WORD*)(a1 + 852) != 0) {
      ++v5;
    }
    if (*(_WORD*)(a1 + 860) != 0) {
      ++v5;
    }
    if (*(_WORD*)(a1 + 868) != 0) {
      ++v5;
    }
    if (v5 <= 5) {
      TransporterConst_89bd90(
          (void*)((__int64)&v28),
          *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] +
                     8LL),
          v3, a1);
    }
  }
  v6 = a2[1];
  if ((v6 & 0x80000000) == 0) {
    if (*(_WORD*)(a1 + 828) != 0) {
      v7 = (*(_WORD*)(a1 + 836) != 0) + 1;
    }
    else {
      v7 = *(_WORD*)(a1 + 836) != 0;
    }
    if (*(_WORD*)(a1 + 844) != 0) {
      ++v7;
    }
    if (*(_WORD*)(a1 + 852) != 0) {
      ++v7;
    }
    if (*(_WORD*)(a1 + 860) != 0) {
      ++v7;
    }
    if (*(_WORD*)(a1 + 868) != 0) {
      ++v7;
    }
    if (v7 <= 5) {
      TransporterConst_89bd90(
          (void*)((__int64)&v28),
          *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] +
                     8LL),
          v6, a1);
    }
  }
  v8 = a2[2];
  if ((v8 & 0x80000000) == 0) {
    if (*(_WORD*)(a1 + 828) != 0) {
      v9 = (*(_WORD*)(a1 + 836) != 0) + 1;
    }
    else {
      v9 = *(_WORD*)(a1 + 836) != 0;
    }
    if (*(_WORD*)(a1 + 844) != 0) {
      ++v9;
    }
    if (*(_WORD*)(a1 + 852) != 0) {
      ++v9;
    }
    if (*(_WORD*)(a1 + 860) != 0) {
      ++v9;
    }
    if (*(_WORD*)(a1 + 868) != 0) {
      ++v9;
    }
    if (v9 <= 5) {
      TransporterConst_89bd90(
          (void*)((__int64)&v28),
          *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] +
                     8LL),
          v8, a1);
    }
  }
  ItemCandidatesForAll_12f3c30_alt1(a1, a2[3]);
  result = ItemCandidatesForAll_12f3c30_alt1(a1, a2[4]);
  v11 = 0;
  v12 = GameData_212c878[0];
  v13 = *GameData_212c878[0];
  while (1) {
    v14 = a1 + v11;
    if (*(_WORD*)(a1 + v11 + 828) != 0 && (*(_BYTE*)(v14 + 831) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v13 + 64) +
                                       8LL * *(unsigned __int16*)(a1 + v11 +
                                                                  828)) +
                            72LL) < 8u) {
      return result;
    }
    v15 = *(unsigned __int16*)(v14 + 836);
    if (v15 != 0 && (*(_BYTE*)(a1 + v11 + 839) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v13 + 64) + 8 * v15) + 72LL) <
            8u) {
      return result;
    }
    if (*(_WORD*)(a1 + v11 + 844) != 0 &&
        (*(_BYTE*)(a1 + v11 + 847) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v13 + 64) +
                                       8LL * *(unsigned __int16*)(a1 + v11 +
                                                                  844)) +
                            72LL) < 8u) {
      return result;
    }
    v11 += 24;
    if (v11 == 240) {
      if (*(_WORD*)(a1 + 828) != 0 &&
          ((result = UnitItem_6e8bc0((unsigned __int16*)(a1 + 828), a1)) & 1) !=
              0) {
        v16 = 0;
        v17 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v12 + 64) +
                                             8LL * *(unsigned __int16*)(a1 +
                                                                        828)) +
                                  88LL) >>
              ((*(_BYTE*)(a1 + 831) & 8) != 0);
        if (*(_WORD*)(a1 + 836) == 0) {
        LABEL_66:
          if (*(_WORD*)(a1 + 844) != 0) {
            result = UnitItem_6e8bc0((unsigned __int16*)(a1 + 844), a1);
            if ((result & 1) != 0) {
              v20 =
                  *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v12 + 64) +
                                                 8LL *
                                                     *(unsigned __int16*)(a1 +
                                                                          844)) +
                                      88LL) >>
                  ((*(_BYTE*)(a1 + 847) & 8) != 0);
              v21 = v17 < v20;
              if (v17 <= v20) {
                v17 =
                    *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v12 + 64) +
                                                   8LL *
                                                       *(unsigned __int16*)(a1 +
                                                                            844)) +
                                        88LL) >>
                    ((*(_BYTE*)(a1 + 847) & 8) != 0);
              }
              if (v21) {
                v16 = 2;
              }
            }
          }
          if (*(_WORD*)(a1 + 852) != 0) {
            result = UnitItem_6e8bc0((unsigned __int16*)(a1 + 852), a1);
            if ((result & 1) != 0) {
              v22 =
                  *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v12 + 64) +
                                                 8LL *
                                                     *(unsigned __int16*)(a1 +
                                                                          852)) +
                                      88LL) >>
                  ((*(_BYTE*)(a1 + 855) & 8) != 0);
              v23 = v17 < v22;
              if (v17 <= v22) {
                v17 =
                    *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v12 + 64) +
                                                   8LL *
                                                       *(unsigned __int16*)(a1 +
                                                                            852)) +
                                        88LL) >>
                    ((*(_BYTE*)(a1 + 855) & 8) != 0);
              }
              if (v23) {
                v16 = 3;
              }
            }
          }
          if (*(_WORD*)(a1 + 860) != 0) {
            result = UnitItem_6e8bc0((unsigned __int16*)(a1 + 860), a1);
            if ((result & 1) != 0) {
              v24 =
                  *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v12 + 64) +
                                                 8LL *
                                                     *(unsigned __int16*)(a1 +
                                                                          860)) +
                                      88LL) >>
                  ((*(_BYTE*)(a1 + 863) & 8) != 0);
              v25 = v17 < v24;
              if (v17 <= v24) {
                v17 =
                    *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v12 + 64) +
                                                   8LL *
                                                       *(unsigned __int16*)(a1 +
                                                                            860)) +
                                        88LL) >>
                    ((*(_BYTE*)(a1 + 863) & 8) != 0);
              }
              if (v25) {
                v16 = 4;
              }
            }
          }
          if (*(_WORD*)(a1 + 868) != 0 &&
              ((result = UnitItem_6e8bc0((unsigned __int16*)(a1 + 868), a1)) &
               1) != 0 &&
              v17 <
                  *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v12 + 64) +
                                                 8LL *
                                                     *(unsigned __int16*)(a1 +
                                                                          868)) +
                                      88LL) >>
                  ((*(_BYTE*)(a1 + 871) & 8) != 0)) {
            v16 = 5;
          }
          else if ((v16 & 0x80000000) != 0) {
            return result;
          }
          game_Unit_EquipItem_6d8f40(a1, v16);
          v26 = game_UnitItemList_Sort(a1 + 828, 0, 6);
          result = game_UnitItemList_Sort(a1 + 828, 6u, 24);
          if ((v26 & 1) != 0 || (result & 1) != 0) {
            v27 = *(_DWORD*)(a1 + 416);
            if ((v27 & 0x10000000) == 0) {
              *(_DWORD*)(a1 + 416) = v27 | 0x10000000;
              game_6c51e0(a1);
              GameRoutine_6c6da0(a1);
              result = game_6c6ec0(a1);
              *(_DWORD*)(a1 + 416) &= ~0x10000000u;
            }
          }
          return result;
        }
      }
      else {
        v17 = -1;
        v16 = -1;
        if (*(_WORD*)(a1 + 836) == 0) {
          goto LABEL_66;
        }
      }
      result = UnitItem_6e8bc0((unsigned __int16*)(a1 + 836), a1);
      if ((result & 1) != 0) {
        v18 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v12 + 64) +
                                             8LL * *(unsigned __int16*)(a1 +
                                                                        836)) +
                                  88LL) >>
              ((*(_BYTE*)(a1 + 839) & 8) != 0);
        v19 = v17 < v18;
        if (v17 <= v18) {
          v17 =
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v12 + 64) +
                                             8LL * *(unsigned __int16*)(a1 +
                                                                        836)) +
                                  88LL) >>
              ((*(_BYTE*)(a1 + 839) & 8) != 0);
        }
        if (v19) {
          v16 = 1;
        }
      }
      goto LABEL_66;
    }
  }
}

__int64 ItemCandidatesForAll_12f25c0(__int64 a1, __int64 a2)
{
  __int64 v4;
  char v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64* v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  int v14;
  int v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char v24;
  int v25;
  int v26;
  int v28;
  int v29;

  if (a1 != 0) {
    v28 = *game_g_shared_system_skills_ptr_alt1 & 0xFFF;
    if ((game_HasSkill_alt1(a1 + 1744, &v28) & 1) == 0 ||
        ((v4 = *(_QWORD*)(a1 + 440)) == 0 ? (v5 = 9)
                                          : (v5 = *(_BYTE*)(v4 + 16)),
         ((1 << v5) & 0xF1) == 0)) {
      if (*(_BYTE*)(a2 + 96) == 1) {
        v6 = -1;
        v7 = 0;
        v8 = 0;
        v9 = 0;
        v10 = (__int64*)GameData_212cf80[0];
        v11 = *(_QWORD*)GameData_212cf80[0];
        v12 = GameData_212c998[0];
        while (1) {
          v17 = *(_QWORD*)(*(_QWORD*)(v11 + 8) + 48LL);
          v13 = *(unsigned __int8*)(v17 + v7);
          if (*(_BYTE*)(v17 + v7) == 0) {
            goto LABEL_11;
          }
          v18 = v17 + v7;
          if (*(_BYTE*)(v17 + v7 + 1) != 0) {
            v19 = *(_DWORD*)(v18 + 4);
            if (*(unsigned __int8*)(v17 + v7 + 1) ==
                    *(unsigned __int8*)(a1 + 2088) &&
                v19 == 0) {
            LABEL_22:
              v21 = *(_QWORD*)(*(_QWORD*)(*v12 + 64) + 8 * v13);
              if (*(unsigned __int8*)(v21 + 50) <=
                  (unsigned int)*(unsigned __int8*)(a1 + 552)) {
                v22 = *(_QWORD*)(v21 + 64);
                if (v22 == 0) {
                  goto LABEL_32;
                }
                v23 = *(_QWORD*)(a2 + 24) + 576LL;
                v29 = *(_DWORD*)((_BYTE*)(*(__int64 (*)[2])0x28LL) +
                                 (_QWORD)GameData_212d328) &
                      0xFFF;
                v24 = game_HasSkill_alt1(v23, &v29);
                v11 = *v10;
                if ((v24 & 1) != 0) {
                  v25 = *(unsigned __int8*)(v22 + 250);
                  if (v25 != 8) {
                    if (v25 != 42) {
                    LABEL_32:
                      LODWORD(v13) = 0x1000000;
                      goto LABEL_36;
                    }
                    goto LABEL_35;
                  }
                }
                else {
                  v26 = *(unsigned __int8*)(v22 + 250);
                  if (*(char*)(a2 + 403) < 0) {
                    LODWORD(v13) = 0x1000000;
                    if (v26 == 8 || v26 == 42) {
                      goto LABEL_36;
                    }
                    goto LABEL_35;
                  }
                  if (v26 == 8) {
                  LABEL_35:
                    LODWORD(v13) = 0x2000000;
                    goto LABEL_36;
                  }
                  if (v26 != 42) {
                    goto LABEL_32;
                  }
                }
                LODWORD(v13) = 0;
              LABEL_36:
                v15 = v8 ^ 0xFFFF;
                v14 =
                    *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v12 + 64) +
                                                   8LL *
                                                       *(unsigned __int8*)(v17 +
                                                                           v7)) +
                                        50LL)
                    << 16;
                goto LABEL_12;
              }
            }
          }
          else if (*(_DWORD*)(v18 + 4) == 0) {
            goto LABEL_22;
          }
          LODWORD(v13) = 0;
        LABEL_11:
          v14 = 0;
          v15 = 0;
        LABEL_12:
          v16 = v14 | v13 | v15;
          v7 += 8;
          if (v16 > v9) {
            v9 = v16;
            v6 = v8;
          }
          if (++v8 == 300) {
            return v6;
          }
        }
      }
    }
  }
  return (unsigned int)-1;
}

void game_anonymous_ItemCandidatesForAll_Prepare_closure3_Invoke(
    __int64 a1, int* a2, unsigned __int16* a3)
{
  _QWORD* v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 i;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  int v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;

  v3 = *(_QWORD**)(a1 + 8);
  v4 = *a2;
  v5 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a3);
  v32 = v5;
  v6 = GameData_212cd90_alt1[0];
  v7 = *(_QWORD*)GameData_212cd90_alt1[0];
  if (*(_QWORD*)GameData_212cd90_alt1[0] != 0) {
    if (GameRoutine_12f61a0_alt1((_QWORD*)(v7 + 264), &v32) != nullptr) {
      for (i = *(_QWORD*)(*(_QWORD*)v6 + 64LL);
           i != *(_QWORD*)(*(_QWORD*)v6 + 72LL); i += 8) {
        v10 = *(__int64**)(*(_QWORD*)i + 24LL);
        v11 = *v10;
        v12 = v10[1];
        if (v11 != v12) {
          while (*(_QWORD*)v11 != v5) {
            v11 += 16;
            if (v11 == v12) {
              goto LABEL_9;
            }
          }
        }
        if (v11 != v12 && v11 != 0) {
          LODWORD(v7) = *(_DWORD*)(v11 + 8);
          v30 = 0x100000000LL;
          v31 = v7 & 0xFFFFFF00;
          LODWORD(v7) = (unsigned __int8)v7;
          goto LABEL_17;
        }
      LABEL_9:;
      }
    }
    LODWORD(v7) = 0;
  }
  v30 = 0;
  v31 = 0;
LABEL_17:
  v13 = v30 | v31 | (unsigned int)v7;
  if (v13 <= 0x100000000LL) {
    v14 = 0;
  }
  else {
    v14 = v13;
  }
  v15 = v3[4];
  v16 = v3[5];
  if (v15 >= v16) {
    v18 = v3[3];
    v19 = v15 - v18;
    v20 = (__int64)(v15 - v18) >> 3;
    v21 = v20 + 1;
    if ((unsigned __int64)(v20 + 1) >> 61 != 0) {
      GameRoutine_12f2f30_alt1();
    }
    v22 = v16 - v18;
    v23 = fw_memory_g_heap_manager_ptr;
    if (v22 >> 2 > v21) {
      v21 = v22 >> 2;
    }
    if ((unsigned __int64)v22 >= 0x7FFFFFFFFFFFFFF8LL) {
      v24 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v24 = v21;
    }
    if (v24 != 0) {
      if (v24 >> 61 != 0) {
        GameRoutine_60a210_alt1();
      }
      v25 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v24, 16, 0);
    }
    else {
      v25 = 0;
    }
    v26 = v25 + v19;
    v27 = v25 + 8 * v24;
    *(_WORD*)(v26 + 2) = v4;
    v28 = v25 + v19 - 8 * v20;
    *(_BYTE*)v26 = 0;
    *(_DWORD*)(v26 + 4) = v14;
    v17 = v25 + v19 + 8;
    memcpy_alt1(v28, v18, v19);
    v3[3] = v28;
    v3[4] = v17;
    v3[5] = v27;
    if (v18 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)v23 + 200LL) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v23 + v29, v18);
    }
  }
  else {
    *(_BYTE*)v15 = 0;
    *(_WORD*)(v15 + 2) = v4;
    v17 = v15 + 8;
    *(_DWORD*)(v15 + 4) = v14;
  }
  v3[4] = v17;
}

void game_anonymous_ItemCandidatesForAll_Prepare_closure4_Invoke(
    __int64 a1, int* a2, unsigned __int16* a3)
{
  _QWORD* v3;
  int v4;
  __int64 v5;
  unsigned __int8* v6;
  __int16 v7;
  unsigned int v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;

  v3 = *(_QWORD**)(a1 + 8);
  v4 = *a2;
  v5 = *a3;
  v6 = *(unsigned __int8**)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v5);
  v7 = (unsigned __int8)~v6[92] | (unsigned __int16)((v6[92] + ~v6[93]) << 8);
  LODWORD(v6) =
      (*((_DWORD*)a3 + 1) & 0xF) * v6[87] - *((unsigned __int8*)a3 + 2);
  v8 = (unsigned int)v6 & ~((int)v6 >> 31);
  v9 = v3[7];
  v10 = v3[8];
  if (v9 >= v10) {
    v12 = v3[6];
    v13 = v9 - v12;
    v14 = (__int64)(v9 - v12) >> 3;
    v15 = v14 + 1;
    if ((unsigned __int64)(v14 + 1) >> 61 != 0) {
      GameRoutine_12f2f50_alt1();
    }
    v16 = v10 - v12;
    v17 = fw_memory_g_heap_manager_ptr;
    if (v16 >> 2 > v15) {
      v15 = v16 >> 2;
    }
    if ((unsigned __int64)v16 >= 0x7FFFFFFFFFFFFFF8LL) {
      v18 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v18 = v15;
    }
    if (v18 != 0) {
      if (v18 >> 61 != 0) {
        GameRoutine_60a210_alt1();
      }
      v19 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v18, 16, 0);
    }
    else {
      v19 = 0;
    }
    v20 = v19 + v13;
    v21 = v19 + 8 * v18;
    *(_WORD*)(v20 + 2) = v5;
    v22 = v19 + v13 - 8 * v14;
    *(_WORD*)v20 = v4;
    *(_WORD*)(v20 + 4) = v7;
    *(_BYTE*)(v20 + 6) = v8;
    v11 = v19 + v13 + 8;
    *(_BYTE*)(v20 + 7) = 0;
    memcpy_alt1(v22, v12, v13);
    v3[6] = v22;
    v3[7] = v11;
    v3[8] = v21;
    if (v12 != 0) {
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v17 + v23, v12);
    }
  }
  else {
    *(_WORD*)v9 = v4;
    *(_WORD*)(v9 + 2) = v5;
    v11 = v9 + 8;
    *(_WORD*)(v9 + 4) = v7;
    *(_BYTE*)(v9 + 6) = v8;
    *(_BYTE*)(v9 + 7) = 0;
  }
  v3[7] = v11;
}

void game_anonymous_ItemCandidatesForAll_Prepare_closure5_Invoke(
    __int64 a1, int* a2, unsigned __int16* a3)
{
  _QWORD* v3;
  int v4;
  __int64 v5;
  int v6;
  int v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;

  v3 = *(_QWORD**)(a1 + 8);
  v4 = *a2;
  v5 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a3);
  v6 = *(unsigned __int8*)(v5 + 88);
  LODWORD(v5) = (*((_DWORD*)a3 + 1) & 0xF) * *(unsigned __int8*)(v5 + 87) -
                *((unsigned __int8*)a3 + 2);
  v7 = v5 & ~((int)v5 >> 31) | (v6 << 8);
  v9 = v3[10];
  v8 = v3[11];
  if (v9 >= v8) {
    v11 = v3[9];
    v12 = v9 - v11;
    v13 = 1 - 0x5555555555555555LL * ((__int64)(v9 - v11) >> 1);
    if (v13 > 0x2AAAAAAAAAAAAAAALL) {
      GameRoutine_12f2f70_alt1();
    }
    v14 = fw_memory_g_heap_manager_ptr;
    v15 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v8 - v11) >> 1);
    if (2 * v15 > v13) {
      v13 = 2 * v15;
    }
    if (v15 >= 0x1555555555555555LL) {
      v16 = 0x2AAAAAAAAAAAAAAALL;
    }
    else {
      v16 = v13;
    }
    if (v16 != 0) {
      if (v16 > 0x2AAAAAAAAAAAAAAALL) {
        GameRoutine_60a210_alt1();
      }
      v17 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 6 * v16, 16, 0);
    }
    else {
      v17 = 0;
    }
    v18 = v17 + v12;
    *(_BYTE*)v18 = 0;
    *(_WORD*)(v18 + 2) = v4;
    *(_WORD*)(v18 + 4) = v7;
    v10 = v17 + v12 + 6;
    memcpy_alt1(v17, v11, v12);
    v3[9] = v17;
    v3[10] = v10;
    v3[11] = v17 + 6 * v16;
    if (v11 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v14 + v19, v11);
    }
  }
  else {
    *(_BYTE*)v9 = 0;
    *(_WORD*)(v9 + 2) = v4;
    v10 = v9 + 6;
    *(_WORD*)(v9 + 4) = v7;
  }
  v3[10] = v10;
}

void game_anonymous_ItemCandidatesForAll_Prepare_closure6_Invoke(
    __int64 a1, int* a2, unsigned __int16* a3)
{
  _QWORD* v3;
  int v4;
  __int64 v5;
  int v6;
  int v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;

  v3 = *(_QWORD**)(a1 + 8);
  v4 = *a2;
  v5 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a3);
  v6 = *(_DWORD*)(v5 + 76);
  LODWORD(v5) = (*((_DWORD*)a3 + 1) & 0xF) * *(unsigned __int8*)(v5 + 87) -
                *((unsigned __int8*)a3 + 2);
  v7 = v5 & ~((int)v5 >> 31) | (v6 << 16);
  v8 = v3[13];
  v9 = v3[14];
  if (v8 >= v9) {
    v11 = v3[12];
    v12 = v8 - v11;
    v13 = (__int64)(v8 - v11) >> 3;
    v14 = v13 + 1;
    if ((unsigned __int64)(v13 + 1) >> 61 != 0) {
      GameRoutine_12f2f90_alt1();
    }
    v15 = v9 - v11;
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
        GameRoutine_60a210_alt1();
      }
      v18 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v17, 16, 0);
    }
    else {
      v18 = 0;
    }
    v19 = v18 + v12;
    v20 = v18 + 8 * v17;
    *(_WORD*)(v19 + 2) = v4;
    v21 = v18 + v12 - 8 * v13;
    *(_BYTE*)v19 = 0;
    *(_DWORD*)(v19 + 4) = v7;
    v10 = v18 + v12 + 8;
    memcpy_alt1(v21, v11, v12);
    v3[12] = v21;
    v3[13] = v10;
    v3[14] = v20;
    if (v11 != 0) {
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v16 + v22, v11);
    }
  }
  else {
    *(_BYTE*)v8 = 0;
    *(_WORD*)(v8 + 2) = v4;
    v10 = v8 + 8;
    *(_DWORD*)(v8 + 4) = v7;
  }
  v3[13] = v10;
}

bool game_anonymous_ItemCandidatesForAll_CheckWeaponRange_closure_Invoke(
    __int64 a1, __int64 a2)
{
  return **(unsigned __int16**)(a1 + 8) != *(unsigned __int16*)(a2 + 4);
}

void ItemCandidatesForAll_12f3c30(__int64 result, unsigned int a2)
{
  unsigned __int16* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;
  int v11;
  unsigned __int16* v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  unsigned __int16* v25;
  int v26;
  int v27;
  int v28;
  int v29;
  unsigned int v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  __int64 v34;
  int v35;
  __int16 v36;
  __int64 v37;
  __int64 v38;
  unsigned int v39;
  __int64 v40;
  __int64 v41;

  if ((a2 & 0x80000000) != 0) {
    return;
  }
  v3 = (unsigned __int16*)(result + 828);
  v4 = game_TransporterConst_List_instance__ptr[0];
  v5 = *(_QWORD*)game_TransporterConst_List_instance__ptr[0];
  v6 = *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] + 8LL);
  v7 = *(_QWORD*)(v6 + 8) + 12LL * a2;
  v8 = *v3;
  v9 = *(unsigned __int16*)(v7 + 4);
  if (v8 == v9 &&
      (v10 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                            8LL * *v3) +
                                 87LL),
       v11 = (*(_DWORD*)(result + 832) & 0xF) * v10 -
             *(unsigned __int8*)(result + 830),
       (*(_DWORD*)(v7 + 8) & 0xF) * v10 - *(unsigned __int8*)(v7 + 6) >
           (v11 & ~(v11 >> 31)))) {
    v12 = v3;
  }
  else {
    v12 = v3 + 4;
    v13 = v3[4];
    if (v13 != v9 ||
        (v14 = *(
             unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                          8LL * *(unsigned __int16*)(v7 + 4)) +
                               87LL),
         v15 = (*(_DWORD*)(result + 840) & 0xF) * v14 -
               *(unsigned __int8*)(result + 838),
         (*(_DWORD*)(v7 + 8) & 0xF) * v14 - *(unsigned __int8*)(v7 + 6) <=
             (v15 & ~(v15 >> 31)))) {
      v12 = v3 + 8;
      v16 = v3[8];
      if (v16 != v9 ||
          (v17 = *(
               unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                            8LL *
                                                *(unsigned __int16*)(v7 + 4)) +
                                 87LL),
           v18 = (*(_DWORD*)(result + 848) & 0xF) * v17 -
                 *(unsigned __int8*)(result + 846),
           (*(_DWORD*)(v7 + 8) & 0xF) * v17 - *(unsigned __int8*)(v7 + 6) <=
               (v18 & ~(v18 >> 31)))) {
        v12 = v3 + 12;
        v19 = v3[12];
        if (v19 != v9 ||
            (v20 =
                 *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 +
                                                           64) +
                                                8LL * *(unsigned __int16*)(v7 +
                                                                           4)) +
                                     87LL),
             v21 = (*(_DWORD*)(result + 856) & 0xF) * v20 -
                   *(unsigned __int8*)(result + 854),
             (*(_DWORD*)(v7 + 8) & 0xF) * v20 - *(unsigned __int8*)(v7 + 6) <=
                 (v21 & ~(v21 >> 31)))) {
          v12 = v3 + 16;
          v22 = v3[16];
          if (v22 != v9 ||
              (v23 = *(
                   unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 +
                                                           64) +
                                                8LL * *(unsigned __int16*)(v7 +
                                                                           4)) +
                                     87LL),
               v24 = (*(_DWORD*)(result + 864) & 0xF) * v23 -
                     *(unsigned __int8*)(result + 862),
               (*(_DWORD*)(v7 + 8) & 0xF) * v23 - *(unsigned __int8*)(v7 + 6) <=
                   (v24 & ~(v24 >> 31)))) {
            v27 = v3[20];
            v25 = v3 + 20;
            v26 = v27;
            if (v27 != v9 ||
                (v12 = v25,
                 v28 = *(
                     unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878
                                                                 [0] +
                                                             64) +
                                                  8LL *
                                                      *(unsigned __int16*)(v7 +
                                                                           4)) +
                                       87LL),
                 v29 = (*(_DWORD*)(result + 872) & 0xF) * v28 -
                       *(unsigned __int8*)(result + 870),
                 (*(_DWORD*)(v7 + 8) & 0xF) * v28 -
                         *(unsigned __int8*)(v7 + 6) <=
                     (v29 & ~(v29 >> 31)))) {
              v39 = v13 != 0;
              if (v8 != 0) {
                ++v39;
              }
              if (v16 != 0) {
                ++v39;
              }
              if (v19 != 0) {
                ++v39;
              }
              if (v22 != 0) {
                ++v39;
              }
              if (v26 != 0) {
                ++v39;
              }
              if (v39 <= 5) {
                TransporterConst_89bd90((void*)((__int64)&v41), v6, a2, result);
              }
              return;
            }
          }
        }
      }
    }
  }
  if (*(_WORD*)(v7 + 2) != 1) {
    v30 = a2;
    if (!TransporterConst_89ca00(v12)) {
      return;
    }
    v5 = *(_QWORD*)v4;
    a2 = v30;
  }
  v41 = *(_QWORD*)v12;
  *(_QWORD*)v12 = *(_QWORD*)(v7 + 4);
  v31 = *(_QWORD*)(v5 + 8);
  v32 = *(_QWORD*)(v31 + 8) + 12LL * a2;
  if (*(_WORD*)(v32 + 4) != 0) {
    v33 = GameData_212c878[0];
    v34 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                     8LL * *(unsigned __int16*)(v32 + 4));
    if ((((0x10000000000LL << *(_BYTE*)(v34 + 72)) |
          (1LL << *(_BYTE*)(v34 + 73))) &
         0xFFBFFFFFFFA39FFFLL) != 0) {
      v35 = 1;
    }
    else {
      v35 = 999;
    }
    if (v35 >= *(unsigned __int16*)(v32 + 2) - 1) {
      LOWORD(v35) = *(_WORD*)(v32 + 2) - 1;
    }
    if (*(_WORD*)(v32 + 2) != 0) {
      v36 = v35;
    }
    else {
      v36 = 0;
    }
    *(_WORD*)(v32 + 2) = v36;
    if (v36 == 0) {
      v37 = *(_QWORD*)(v31 + 8) + 12LL * a2;
      v38 = *(_QWORD*)(*(_QWORD*)(*v33 + 64) +
                       8LL * *(unsigned __int16*)(v37 + 4));
      if ((((0x10000000000LL << *(_BYTE*)(v38 + 72)) |
            (1LL << *(_BYTE*)(v38 + 73))) &
           0xFFBFFFFFFFA39FFFLL) != 0) {
        *(_QWORD*)(v37 + 4) = 0;
      }
      *(_WORD*)(v37 + 2) = 0;
      GameRoutine_89b900(v31);
    }
  }
  game_UnitUtil_UniqueMap_Commit_89abc0((void*)((__int64)&v40),
                                        *(_QWORD*)(*(_QWORD*)v4 + 8LL),
                                        (unsigned __int16*)&v41, 1);
}

#pragma GCC visibility pop
