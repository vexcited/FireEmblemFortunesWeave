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
__n128 ItemCandidatesForAll_12eff40();
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

__n128 ItemCandidatesForAll_12eff40()
{
  __int64 v0;
  unsigned __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char* v6;
  char* v7;
  _DWORD* v8;
  __int64 v9;
  __int64 v10;
  char v11;
  char* v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  char* v17;
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
  char* v33;
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
  __int64 v44;
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
  __int64* v63;
  __int64 v64;
  char* v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int16* v69;
  __int64 v70;
  signed __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  unsigned __int8* v75;
  __int64 v76;
  signed __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  unsigned __int8* v81;
  __int64 v82;
  signed __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __n128 result;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  int v93;
  __int64 v94;
  __int64 v95;
  int v96;
  __int64 v97;
  int v98;
  __int64 v99;
  unsigned int v100;
  __int64 v101;
  __int64* v102;
  __int64* v103;
  __int64 v104;
  __int64 v105;
  unsigned int v106;
  __int16* v107;
  __int64 (***v108)();
  __int64 v109;
  __int16* v110;
  __int16* v111;
  int v112;
  int v113;
  unsigned int v114;
  unsigned int v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  unsigned __int8* v119;
  unsigned __int8* v120;
  unsigned __int8 v121;
  int v122;
  unsigned int v123;
  unsigned __int8 v124;
  unsigned __int8 v125;
  bool v126;
  int v127;
  _WORD* v128;
  unsigned int v129;
  __int64 v130;
  __int16 v131;
  __int16* v132;
  __int64 (***v133)();
  __int64 v134;
  __int16* v135;
  __int16* v136;
  int v137;
  int v138;
  unsigned int v139;
  unsigned int v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  unsigned __int8* v144;
  unsigned __int8* v145;
  unsigned __int8 v146;
  int v147;
  unsigned int v148;
  unsigned __int8 v149;
  unsigned __int8 v150;
  bool v151;
  int v152;
  __int64* v153;
  __int64* v154;
  unsigned int v155;
  __int64 v156;
  _QWORD* v157;
  _QWORD* v158;
  bool v159;
  unsigned int v160;
  _WORD* v161;
  int v162;
  int v163;
  int v164;
  unsigned int v165;
  unsigned __int8* v166;
  unsigned int v167;
  unsigned __int8* v168;
  unsigned int v169;
  int v170;
  unsigned __int8* v171;
  _WORD* v172;
  int v173;
  int v174;
  int v175;
  unsigned int v176;
  unsigned __int8* v177;
  unsigned int v178;
  unsigned __int8* v179;
  unsigned int v180;
  int v181;
  unsigned __int8* v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  int v186;
  __int64* v187;
  __int64 v188;
  int v189;
  __int64 v190;
  __int16* v191;
  int v192;
  __int16* v193;
  int v194;
  __int64 v195;
  int v196;
  __int64 v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  unsigned int v204;
  __int64* v205;
  __int64 v206;
  int v207;
  int v208;
  int v209;
  unsigned int v210;
  unsigned int v211;
  struct {
    __int64 v212;
    __int64 (***v213)();
    __int64 v214;
    __int64* v215;
    __int64* v216;
    __int64 v217;
    __int16* v218;
    __int16* v219;
    __int64 v220;
    unsigned __int8* v221;
    unsigned __int8* v222;
    __int64 v223;
    unsigned __int8* v224;
    unsigned __int8* v225;
    __int64 v226;
  } v212_;
  struct {
    _QWORD v227[4];
    _QWORD* v228;
  } v227_;
  struct {
    _QWORD v229[4];
    _QWORD* v230;
  } v229_;
  struct {
    _QWORD v231[4];
    _QWORD* v232;
  } v231_;
  __int64 v233;
  __int64 v234;
  struct {
    __int64 (**v235)();
    __int64* v236;
    int v237;
    char gap356_[12];
    __int64 (***v238)();
  } v235_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v0 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 800, 16, 0),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v1 = v0 + 800;
  v2 = (__int64*)v0;
  if (game_script_map_effect_g_sequence != 0 &&
      game_GameModeData_instance_ != 0 &&
      (*(_BYTE*)(game_GameModeData_instance_ + 92) & 1) != 0) {
    v5 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556000LL);
    if (v5 != 0) {
      v6 = (char*)v0;
      v7 = (char*)v0;
      v8 = (_DWORD*)game_g_shared_system_skills_ptr;
      do {
        v9 = v5;
        v5 = *(_QWORD*)(v5 + 432);
        LODWORD(v212_.v212) = *v8 & 0xFFF;
        if ((game_HasSkill((_QWORD*)(v9 + 1744), (unsigned int*)&v212_.v212) &
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
          v12 = (char*)(v6 - v7);
          v13 = (v6 - v7) >> 3;
          v14 = v13 + 1;
          if ((unsigned __int64)(v13 + 1) >> 61 != 0) {
          LABEL_432:
            GameRoutine_6c1f60(),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          if ((__int64)(v1 - (_QWORD)v7) >> 2 > v14) {
            v14 = (__int64)(v1 - (_QWORD)v7) >> 2;
          }
          if (v1 - (unsigned __int64)v7 >= 0x7FFFFFFFFFFFFFF8LL) {
            v15 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v15 = v14;
          }
          if (v15 != 0) {
            if (v15 >> 61 != 0) {
            LABEL_433:
              GameRoutine_60a210_alt1(),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
            v16 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v15, 16, 0),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          else {
            v16 = 0;
          }
          v1 = v16 + 8 * v15;
          v17 = (char*)(v6 - v7);
          v18 = (__int64)&v12[v16 + -8 * v13];
          *(_QWORD*)&v12[v16] = v9;
          v6 = &v12[v16 + 8];
          memcpy(v18, v7, v17),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          if (v7 != nullptr) {
            v19 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v19 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v19),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          v7 = (char*)v18;
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
    LODWORD(v212_.v212) = 17;
    v36 = game_UnitPool_GetFirst((int*)&v212_.v212),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v36 != 0) {
      v37 = *(_QWORD*)(v36 + 432);
      v38 = v36;
      if (v37 == 0) {
        v37 = *(_QWORD*)(v36 + 440);
        if (v37 != 0) {
          v39 = *(unsigned __int8*)(v37 + 16);
          if (v39 <= 8) {
            v204 = v39 - 3;
            while (1) {
              if (v204 == 0) {
                v37 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                if (v37 != 0) {
                  break;
                }
              }
              if (++v204 == 6) {
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
      v7 = (char*)v2;
      v40 = (_DWORD*)game_g_shared_system_skills_ptr;
      while (1) {
      LABEL_78:
        v41 = v37;
        LODWORD(v212_.v212) = *v40 & 0xFFF;
        if ((game_HasSkill((_QWORD*)(v38 + 1744), (unsigned int*)&v212_.v212) &
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
        v44 = (char*)v2 - v7;
        v45 = (v44 >> 3) + 1;
        if (v45 >> 61 != 0) {
          goto LABEL_432;
        }
        if ((__int64)(v1 - (_QWORD)v7) >> 2 > v45) {
          v45 = (__int64)(v1 - (_QWORD)v7) >> 2;
        }
        if (v1 - (unsigned __int64)v7 >= 0x7FFFFFFFFFFFFFF8LL) {
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
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v46, 16, 0),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        else {
          v47 = 0;
        }
        v1 = v47 + 8 * v46;
        v48 = v47 + v44 - 8 * (v44 >> 3);
        *(_QWORD*)(v47 + v44) = v38;
        v49 = v47 + v44 + 8;
        memcpy(v48, v7, v44),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (v7 != nullptr) {
          v50 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v50 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v50),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        v7 = (char*)v48;
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
    v212_.v213 = nullptr;
    v212_.v214 = 0;
    v212_.v212 = 0;
    goto LABEL_118;
  }
  v235_.v235 = nullptr;
  v212_.v216 = &v212_.v212;
  v212_.v212 = GameData_2131908[0] + 16;
  v212_.v213 = &v235_.v235;
  GameRoutine_15b59e0((__int64)&v212_.v212),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v212_.v216 == &v212_.v212) {
    v4 = 32;
  }
  else {
    if (v212_.v216 == nullptr) {
      goto LABEL_37;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v212_.v216 + v4))((__int64)v212_.v216),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_37:
  if (v235_.v235 == nullptr) {
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
  v7 = (char*)v2;
  v24 = (_DWORD*)game_g_shared_system_skills_ptr;
  do {
    v25 = (_QWORD*)v21[54];
    LODWORD(v212_.v212) = *v24 & 0xFFF;
    if ((game_HasSkill(v21 + 218, (unsigned int*)&v212_.v212) & 1) != 0) {
      v26 = v21[55];
      v27 = v26 != 0 ? *(_BYTE*)(v26 + 16) : 9;
      if (((1 << v27) & 0xF1) != 0) {
        goto LABEL_68;
      }
    }
    if ((unsigned __int64)v6 >= v1) {
      v28 = (char*)(v6 - v7);
      v29 = (v6 - v7) >> 3;
      v30 = v29 + 1;
      if ((unsigned __int64)(v29 + 1) >> 61 != 0) {
        goto LABEL_432;
      }
      if ((__int64)(v1 - (_QWORD)v7) >> 2 > v30) {
        v30 = (__int64)(v1 - (_QWORD)v7) >> 2;
      }
      if (v1 - (unsigned __int64)v7 >= 0x7FFFFFFFFFFFFFF8LL) {
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
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v31, 16, 0),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      else {
        v32 = 0;
      }
      v1 = v32 + 8 * v31;
      v33 = (char*)(v6 - v7);
      v34 = (__int64)&v28[v32 + -8 * v29];
      *(_QWORD*)&v28[v32] = v21;
      v6 = &v28[v32 + 8];
      memcpy(v34, v7, v33),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v7 != nullptr) {
        v35 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v35 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v35),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v7 = (char*)v34;
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
  v212_.v213 = nullptr;
  v212_.v214 = 0;
  v212_.v212 = 0;
  if (v6 != v7) {
    v54 = (v6 - v7) >> 3;
    if (v54 >= 0x492492492492493LL) {
      GameRoutine_12f27e0(),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v55 = 56 * v54;
    v56 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 56 * v54, 16, 0),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v212_.v212 = v56;
    v212_.v213 = (__int64 (***)(void))v56,
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v212_.v214 = v56 + v55;
    v57 = v7;
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
    v212_.v213 = (__int64 (***)(void))v56,
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v2 = (__int64*)v7;
LABEL_118:
  v212_.v225 = nullptr;
  v212_.v226 = 0;
  v212_.v223 = 0;
  v212_.v224 = nullptr;
  v212_.v221 = nullptr;
  v212_.v222 = nullptr;
  v212_.v219 = nullptr;
  v212_.v220 = 0;
  v235_.v235 = GameData_2024428;
  v235_.v236 = (__int64*)((char*)&v234 + 4);
  v212_.v217 = 0;
  v212_.v218 = nullptr;
  v212_.v215 = nullptr;
  v212_.v216 = nullptr;
  v233 = 0;
  v234 = 0;
  v227_.v228 = v227_.v227;
  v235_.v238 = &v235_.v235;
  v231_.v231[0] = GameData_20244b8;
  v231_.v231[1] = &v234;
  v231_.v232 = v231_.v231;
  v229_.v229[0] = GameData_2024538;
  v229_.v229[1] = (char*)&v233 + 4;
  v229_.v230 = v229_.v229;
  v227_.v227[0] = GameData_20245b8;
  v227_.v227[1] = &v233;
  GameRoutine_12f2800((__int64)&v235_.v235, (__int64)v231_.v231,
                      (__int64)v229_.v229, (__int64)v227_.v227),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v227_.v228 == v227_.v227) {
    v59 = 32;
  }
  else {
    if (v227_.v228 == nullptr) {
      goto LABEL_123;
    }
    v59 = 40;
  }
  (*(void (**)(__int64))(*v227_.v228 + v59))((__int64)v227_.v228),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_123:
  if (v229_.v230 == v229_.v229) {
    v60 = 32;
  }
  else {
    if (v229_.v230 == nullptr) {
      goto LABEL_128;
    }
    v60 = 40;
  }
  (*(void (**)(__int64))(*v229_.v230 + v60))((__int64)v229_.v230),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_128:
  if (v231_.v232 == v231_.v231) {
    v61 = 32;
  }
  else {
    if (v231_.v232 == nullptr) {
      goto LABEL_133;
    }
    v61 = 40;
  }
  (*(void (**)(__int64))(*v231_.v232 + v61))((__int64)v231_.v232),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_133:
  if (v235_.v238 == &v235_.v235) {
    v62 = 4;
  }
  else {
    if (v235_.v238 == nullptr) {
      goto LABEL_138;
    }
    v62 = 5;
  }
  ((__int64 (*)(__int64))(*v235_.v238)[v62])((__int64)v235_.v238),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_138:
  v63 = v212_.v215;
  v64 = SHIDWORD(v234);
  v205 = v2;
  if (SHIDWORD(v234) >
      (unsigned __int64)((v212_.v217 - (__int64)v212_.v215) >> 3)) {
    if (v234 < 0) {
      GameRoutine_12f2f30_alt1(),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v65 = (char*)((char*)v212_.v216 - (char*)v212_.v215);
    v66 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8LL * SHIDWORD(v234), 16, 0),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v67 = v66 + 8 * v64;
    memcpy(v66, v63, v65),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v212_.v215 = (__int64*)v66;
    v212_.v216 = (__int64*)&v65[v66];
    v2 = v205;
    v212_.v217 = v67;
    if (v63 != nullptr) {
      v68 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v68 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v68),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  v69 = v212_.v218;
  v70 = (int)v234;
  if ((int)v234 > (unsigned __int64)((v212_.v220 - (__int64)v212_.v218) >> 3)) {
    if ((v234 & 0x80000000) != 0) {
      GameRoutine_12f2f50_alt1(),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v71 = (char*)v212_.v219 - (char*)v212_.v218;
    v72 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8LL * (int)v234, 16, 0),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v73 = v72 + 8 * v70;
    memcpy(v72, v69, v71),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v212_.v218 = (__int16*)v72;
    v212_.v219 = (__int16*)(v72 + v71);
    v2 = v205;
    v212_.v220 = v73;
    if (v69 != nullptr) {
      v74 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v74 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v74),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  v75 = v212_.v221;
  if (0xAAAAAAAAAAAAAAABLL * ((v212_.v223 - (__int64)v212_.v221) >> 1) <
      SHIDWORD(v233)) {
    if (v233 < 0) {
      GameRoutine_12f2f70_alt1(),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v76 = 3LL * SHIDWORD(v233);
    v77 = v212_.v222 - v212_.v221;
    v78 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 6LL * SHIDWORD(v233), 16, 0),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v79 = v78 + 2 * v76;
    memcpy(v78, v75, v77),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v212_.v221 = (unsigned __int8*)v78;
    v212_.v222 = (unsigned __int8*)(v78 + v77);
    v2 = v205;
    v212_.v223 = v79;
    if (v75 != nullptr) {
      v80 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v80 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v80),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  v81 = v212_.v224;
  v82 = (int)v233;
  if ((int)v233 > (unsigned __int64)((v212_.v226 - (__int64)v212_.v224) >> 3)) {
    if ((v233 & 0x80000000) != 0) {
      GameRoutine_12f2f90_alt1(),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v83 = v212_.v225 - v212_.v224;
    v84 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8LL * (int)v233, 16, 0),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v85 = v84 + 8 * v82;
    memcpy(v84, v81, v83),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v212_.v224 = (unsigned __int8*)v84;
    v212_.v225 = (unsigned __int8*)(v84 + v83);
    v2 = v205;
    v212_.v226 = v85;
    if (v81 != nullptr) {
      v86 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v86 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v86),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  v235_.v238 = &v235_.v235;
  v231_.v232 = v231_.v231;
  v227_.v228 = v227_.v227;
  v235_.v235 = GameData_2024638;
  v235_.v236 = &v212_.v212;
  v231_.v231[0] = GameData_20246b8;
  v231_.v231[1] = &v212_.v212;
  v229_.v229[0] = GameData_2024738;
  v229_.v229[1] = &v212_.v212;
  v229_.v230 = v229_.v229;
  v227_.v227[0] = GameData_20247b8;
  v227_.v227[1] = &v212_.v212;
  GameRoutine_12f2800((__int64)&v235_.v235, (__int64)v231_.v231,
                      (__int64)v229_.v229, (__int64)v227_.v227),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v227_.v228 == v227_.v227) {
    v88 = 32;
  }
  else {
    if (v227_.v228 == nullptr) {
      goto LABEL_167;
    }
    v88 = 40;
  }
  (*(void (**)(__int64))(*v227_.v228 + v88))((__int64)v227_.v228),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_167:
  if (v229_.v230 == v229_.v229) {
    v89 = 32;
  }
  else {
    if (v229_.v230 == nullptr) {
      goto LABEL_172;
    }
    v89 = 40;
  }
  (*(void (**)(__int64))(*v229_.v230 + v89))((__int64)v229_.v230),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_172:
  if (v231_.v232 == v231_.v231) {
    v90 = 32;
  }
  else {
    if (v231_.v232 == nullptr) {
      goto LABEL_177;
    }
    v90 = 40;
  }
  (*(void (**)(__int64))(*v231_.v232 + v90))((__int64)v231_.v232),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_177:
  if (v235_.v238 == &v235_.v235) {
    v91 = 4;
    goto LABEL_181;
  }
  if (v235_.v238 != nullptr) {
    v91 = 5;
  LABEL_181:
    ((__int64 (*)(__int64))(*v235_.v238)[v91])((__int64)v235_.v238),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v92 = ((__int64)v212_.v213 - v212_.v212) >> 3;
  v93 = -1227133513 * v92;
  if (-1227133513 * (int)v92 < 1) {
    goto LABEL_401;
  }
  v94 = v93 & 0x7FFFFFFF;
  v95 = 0;
  v96 = 0;
  v206 = v94;
  v207 = -1227133513 * v92;
  while (1) {
    v97 = v212_.v212 + 56 * v95;
    v98 = *(unsigned __int8*)(v97 + 8);
    if (*(_BYTE*)(v97 + 8) != 0) {
      if (v98 != 1) {
        goto LABEL_255;
      }
      v99 = *(_QWORD*)v97;
    }
    else {
      v99 = *(_QWORD*)v97;
      *(_BYTE*)(v97 + 8) = 1;
      if (*(_WORD*)(v99 + 828) != 0) {
        v100 = (*(_WORD*)(v99 + 836) != 0) + 1;
      }
      else {
        v100 = *(_WORD*)(v99 + 836) != 0;
      }
      if (*(_WORD*)(v99 + 844) != 0) {
        ++v100;
      }
      if (*(_WORD*)(v99 + 852) != 0) {
        ++v100;
      }
      if (*(_WORD*)(v99 + 860) != 0) {
        ++v100;
      }
      if (*(_WORD*)(v99 + 868) != 0) {
        ++v100;
      }
      if (v100 <= 5) {
        v101 = *(_QWORD*)(v99 + 392);
        if (v101 != 0) {
          v102 = *(__int64**)(*GameData_212cd90[0] + 64);
          v103 = *(__int64**)(*GameData_212cd90[0] + 72);
          if (v102 != v103) {
            while (1) {
              v105 = *v102++;
              v104 = v105;
              if (*(_QWORD*)(v105 + 40) == v101) {
                break;
              }
              if (v102 == v103) {
                goto LABEL_203;
              }
            }
            v153 = v212_.v215;
            if (v212_.v215 != v212_.v216) {
              v154 = nullptr;
              v155 = 0;
              do {
                if ((*(_BYTE*)v153 & 1) == 0) {
                  v156 = *(_QWORD*)(v104 + 24);
                  v157 = *(_QWORD**)v156;
                  v158 = *(_QWORD**)(v156 + 8);
                  if (v157 != v158) {
                    while (
                        *v157 !=
                        *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                   8LL *
                                       *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr
                                                                                      [0] +
                                                                                  8LL) +
                                                                       8LL) +
                                                            12LL * *((__int16*)
                                                                         v153 +
                                                                     1) +
                                                            4))) {
                      v157 += 2;
                      if (v157 == v158) {
                        goto LABEL_306;
                      }
                    }
                  }
                  v159 = v157 == nullptr || v157 == v158;
                  if (!v159) {
                    v160 = *((_DWORD*)v153 + 1);
                    if (v155 < v160) {
                      v154 = v153;
                    }
                    if (v155 <= v160) {
                      v155 = *((_DWORD*)v153 + 1);
                    }
                  }
                }
              LABEL_306:
                ++v153;
              } while (v153 != v212_.v216);
              if (v154 != nullptr) {
                *(_QWORD*)(v97 + 16) = v154;
                *(_BYTE*)v154 = 1;
                goto LABEL_378;
              }
            }
          }
        }
      }
    }
  LABEL_203:
    *(_BYTE*)(v97 + 8) = 2;
    if (*(_WORD*)(v99 + 828) != 0) {
      v106 = (*(_WORD*)(v99 + 836) != 0) + 1;
    }
    else {
      v106 = *(_WORD*)(v99 + 836) != 0;
    }
    if (*(_WORD*)(v99 + 844) != 0) {
      ++v106;
    }
    if (*(_WORD*)(v99 + 852) != 0) {
      ++v106;
    }
    if (*(_WORD*)(v99 + 860) != 0) {
      ++v106;
    }
    if (*(_WORD*)(v99 + 868) != 0) {
      ++v106;
    }
    if (v106 > 5) {
      goto LABEL_256;
    }
    v235_.v238 = &v235_.v235;
    v235_.v235 = GameData_2024838;
    if (*(_WORD*)(v99 + 1952) != 0 &&
        (unsigned int)*(
            unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                         8LL *
                                             *(unsigned __int16*)(v99 + 1952)) +
                              72LL) -
                5 <
            2) {
      v107 = nullptr;
      v108 = &v235_.v235;
      v109 = 4;
      goto LABEL_251;
    }
    v111 = v212_.v218;
    v110 = v212_.v219;
    if (v212_.v218 == v212_.v219) {
      v107 = nullptr;
      v108 = &v235_.v235;
      v109 = 4;
    LABEL_251:
      ((__int64 (*)(__int64))(*v108)[v109])((__int64)v108),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      goto LABEL_252;
    }
    v112 = -1;
    v208 = v96;
    v210 = 0;
    v107 = nullptr;
    v113 = 0;
    v114 = 0;
    do {
      if ((*((_BYTE*)v111 + 7) & 1) == 0) {
        if (v235_.v238 == nullptr) {
        LABEL_431:
          GameRoutine_60a310(),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        if ((((__int64 (*)(__int64 (***)(void), __int16*))(*v235_.v238)[6])(
                 v235_.v238, v111) &
             1) != 0) {
          v116 =
              *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                        game_TransporterConst_List_instance__ptr
                                            [0] +
                                    8LL) +
                         8LL) +
              12LL * *v111;
          if (UnitItem_6e8bc0((unsigned __int16*)(v116 + 4), v99)) {
            v117 = *(unsigned __int16*)(v116 + 4);
            v118 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                         8 * v117) +
                              24LL);
            v119 = *(unsigned __int8**)(v118 + 488);
            v120 = *(unsigned __int8**)(v118 + 496);
            if (v119 == v120) {
              v122 = 0;
            }
            else {
              v121 = 15;
              LOBYTE(v122) = 0;
              do {
                v123 = v119[1];
                v125 = *v119;
                v119 += 2;
                v124 = v125;
                v122 = (unsigned __int8)v122;
                v126 = (unsigned __int8)v122 >= v123;
                if ((unsigned __int8)v122 <= v123) {
                  v122 = v123;
                }
                if (!v126) {
                  v121 = v124;
                }
              } while (v119 != v120);
              if (v122 != 0) {
                if (v121 > 0xCu) {
                  v127 = 0;
                }
                else {
                  v127 = *(unsigned __int8*)(v99 + 540 + v121);
                }
                v122 = v127 | (v122 << 8);
              }
            }
            if (v113 < v122 ||
                v113 == v122 && v114 < (unsigned __int16)v111[2]) {
              v112 = v111[1];
              v115 = *((unsigned __int8*)v111 + 6);
            LABEL_221:
              v210 = v115;
              v114 = (unsigned __int16)v111[2];
              v113 = v122;
              v107 = v111;
              goto LABEL_222;
            }
            if (v112 == (_DWORD)v117) {
              v115 = *((unsigned __int8*)v111 + 6);
              if (v210 < v115) {
                v112 = v111[1];
                goto LABEL_221;
              }
            }
          }
        }
      }
    LABEL_222:
      v111 += 4;
    } while (v111 != v110);
    v108 = v235_.v238;
    v94 = v206;
    v93 = v207;
    if (v235_.v238 == &v235_.v235) {
      v96 = v208;
      v109 = 4;
      goto LABEL_251;
    }
    v96 = v208;
    if (v235_.v238 != nullptr) {
      v109 = 5;
      goto LABEL_251;
    }
  LABEL_252:
    if (v107 == nullptr) {
      v98 = *(unsigned __int8*)(v97 + 8);
    LABEL_255:
      if (v98 != 2) {
        goto LABEL_325;
      }
    LABEL_256:
      v128 = *(_WORD**)v97;
      *(_BYTE*)(v97 + 8) = 3;
      if (v128[414] != 0) {
        v129 = (v128[418] != 0) + 1;
      }
      else {
        v129 = v128[418] != 0;
      }
      if (v128[422] != 0) {
        ++v129;
      }
      if (v128[426] != 0) {
        ++v129;
      }
      if (v128[430] != 0) {
        ++v129;
      }
      if (v128[434] != 0) {
        ++v129;
      }
      if (v129 > 5) {
        goto LABEL_327;
      }
      v130 = *(_QWORD*)(v97 + 24);
      if (v130 == 0) {
        goto LABEL_327;
      }
      v131 = *(_WORD*)(v130 + 4);
      v235_.v238 = &v235_.v235;
      LOWORD(v231_.v231[0]) = v131;
      v235_.v235 = GameData_20248c8;
      v235_.v236 = v231_.v231;
      if (v128[976] != 0 &&
          (unsigned int)*(
              unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                      64) +
                                           8LL * (unsigned __int16)v128[976]) +
                                72LL) -
                  5 <
              2) {
        v132 = nullptr;
        v133 = &v235_.v235;
        v134 = 4;
        goto LABEL_321;
      }
      v136 = v212_.v218;
      v135 = v212_.v219;
      if (v212_.v218 == v212_.v219) {
        v132 = nullptr;
        v133 = &v235_.v235;
        v134 = 4;
        goto LABEL_321;
      }
      v137 = -1;
      v209 = v96;
      v211 = 0;
      v132 = nullptr;
      v138 = 0;
      v139 = 0;
      while (2) {
        if ((*((_BYTE*)v136 + 7) & 1) == 0) {
          if (v235_.v238 == nullptr) {
            goto LABEL_431;
          }
          if ((((__int64 (*)(__int64 (***)(void), __int16*))(*v235_.v238)[6])(
                   v235_.v238, v136) &
               1) != 0) {
            v141 =
                *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                          game_TransporterConst_List_instance__ptr
                                              [0] +
                                      8LL) +
                           8LL) +
                12LL * *v136;
            if (UnitItem_6e8bc0((unsigned __int16*)(v141 + 4), (__int64)v128)) {
              v142 = *(unsigned __int16*)(v141 + 4);
              v143 =
                  *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                        8 * v142) +
                             24LL);
              v144 = *(unsigned __int8**)(v143 + 488);
              v145 = *(unsigned __int8**)(v143 + 496);
              if (v144 == v145) {
                v147 = 0;
              }
              else {
                v146 = 15;
                LOBYTE(v147) = 0;
                do {
                  v148 = v144[1];
                  v150 = *v144;
                  v144 += 2;
                  v149 = v150;
                  v147 = (unsigned __int8)v147;
                  v151 = (unsigned __int8)v147 >= v148;
                  if ((unsigned __int8)v147 <= v148) {
                    v147 = v148;
                  }
                  if (!v151) {
                    v146 = v149;
                  }
                } while (v144 != v145);
                if (v147 != 0) {
                  if (v146 > 0xCu) {
                    v152 = 0;
                  }
                  else {
                    v152 = *((unsigned __int8*)v128 + v146 + 540);
                  }
                  v147 = v152 | (v147 << 8);
                }
              }
              if (v138 < v147 ||
                  v138 == v147 && v139 < (unsigned __int16)v136[2]) {
                v137 = v136[1];
                v140 = *((unsigned __int8*)v136 + 6);
                goto LABEL_275;
              }
              if (v137 == (_DWORD)v142) {
                v140 = *((unsigned __int8*)v136 + 6);
                if (v211 < v140) {
                  v137 = v136[1];
                LABEL_275:
                  v211 = v140;
                  v139 = (unsigned __int16)v136[2];
                  v138 = v147;
                  v132 = v136;
                }
              }
            }
          }
        }
        v136 += 4;
        if (v136 == v135) {
          v133 = v235_.v238;
          if (v235_.v238 != &v235_.v235) {
            v94 = v206;
            v93 = v207;
            v96 = v209;
            if (v235_.v238 != nullptr) {
              v134 = 5;
              goto LABEL_321;
            }
          LABEL_322:
            if (v132 != nullptr) {
              *(_QWORD*)(v97 + 32) = v132;
              *((_BYTE*)v132 + 7) = 1;
              goto LABEL_378;
            }
            v98 = *(unsigned __int8*)(v97 + 8);
          LABEL_325:
            if (v98 == 4) {
            LABEL_352:
              *(_BYTE*)(v97 + 8) = 5;
              v172 = *(_WORD**)v97;
              if (*(_WORD*)(*(_QWORD*)v97 + 828LL) != 0) {
                v173 = (*(_WORD*)(*(_QWORD*)v97 + 836LL) != 0) + 1;
              }
              else {
                v173 = *(_WORD*)(*(_QWORD*)v97 + 836LL) != 0;
              }
              if (v172[422] != 0) {
                ++v173;
              }
              v159 = v172[426] == 0;
              v174 = (unsigned __int16)v172[430];
              v175 = (unsigned __int16)v172[434];
              if (!v159) {
                ++v173;
              }
              if (v174 != 0) {
                ++v173;
              }
              if (v175 != 0) {
                v176 = v173 + 1;
              }
              else {
                v176 = v173;
              }
              if (v176 <= 5) {
                v177 = v212_.v224;
                if (v212_.v224 != v212_.v225) {
                  v178 = 0;
                  v179 = nullptr;
                  do {
                    v180 = *((_DWORD*)v177 + 1);
                    v181 = *v177;
                    if (v178 >= v180) {
                      v182 = v179;
                    }
                    else {
                      v182 = v177;
                    }
                    if (v178 > v180) {
                      v180 = v178;
                    }
                    v177 += 8;
                    if (v181 == 0) {
                      v179 = v182;
                      v178 = v180;
                    }
                  } while (v177 != v212_.v225);
                  if (v179 != nullptr) {
                    *(_QWORD*)(v97 + 48) = v179;
                    *v179 = 1;
                    goto LABEL_378;
                  }
                }
              }
            }
            else if (v98 == 3) {
            LABEL_327:
              *(_BYTE*)(v97 + 8) = 4;
              v161 = *(_WORD**)v97;
              if (*(_WORD*)(*(_QWORD*)v97 + 828LL) != 0) {
                v162 = (*(_WORD*)(*(_QWORD*)v97 + 836LL) != 0) + 1;
              }
              else {
                v162 = *(_WORD*)(*(_QWORD*)v97 + 836LL) != 0;
              }
              if (v161[422] != 0) {
                ++v162;
              }
              v159 = v161[426] == 0;
              v163 = (unsigned __int16)v161[430];
              v164 = (unsigned __int16)v161[434];
              if (!v159) {
                ++v162;
              }
              if (v163 != 0) {
                ++v162;
              }
              if (v164 != 0) {
                v165 = v162 + 1;
              }
              else {
                v165 = v162;
              }
              if (v165 <= 5) {
                v166 = v212_.v221;
                if (v212_.v221 != v212_.v222) {
                  v167 = 0;
                  v168 = nullptr;
                  do {
                    v169 = *((unsigned __int16*)v166 + 2);
                    v170 = *v166;
                    if (v167 >= v169) {
                      v171 = v168;
                    }
                    else {
                      v171 = v166;
                    }
                    if (v167 > v169) {
                      v169 = v167;
                    }
                    v166 += 6;
                    if (v170 == 0) {
                      v168 = v171;
                      v167 = v169;
                    }
                  } while (v166 != v212_.v222);
                  if (v168 != nullptr) {
                    *(_QWORD*)(v97 + 40) = v168;
                    *v168 = 1;
                    goto LABEL_378;
                  }
                }
              }
              goto LABEL_352;
            }
            ++v96;
            goto LABEL_378;
          }
          v94 = v206;
          v93 = v207;
          v96 = v209;
          v134 = 4;
        LABEL_321:
          ((__int64 (*)(__int64))(*v133)[v134])((__int64)v133),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          goto LABEL_322;
        }
        continue;
      }
    }
    *(_QWORD*)(v97 + 24) = v107;
    *((_BYTE*)v107 + 7) = 1;
  LABEL_378:
    if (++v95 == v94) {
      v95 = 0;
      v22 = v96 < v93;
      v96 = 0;
      if (!v22) {
        break;
      }
    }
  }
  v2 = v205;
  v183 = 0x6DB6DB6DB6DB6DB7LL * (((__int64)v212_.v213 - v212_.v212) >> 3);
  if ((int)v183 >= 1) {
    v184 = v183 & 0x7FFFFFFF;
    v185 = 0;
    do {
      v187 = (__int64*)(v212_.v212 + v185);
      v188 = *(_QWORD*)(v212_.v212 + v185 + 16);
      if (v188 != 0) {
        v189 = *(__int16*)(v188 + 2);
      }
      else {
        v189 = -1;
      }
      v190 = *v187;
      LODWORD(v235_.v235) = v189;
      v191 = (__int16*)v187[3];
      if (v191 != nullptr) {
        v192 = *v191;
      }
      else {
        v192 = -1;
      }
      HIDWORD(v235_.v235) = v192;
      v193 = *(__int16**)(v212_.v212 + v185 + 32);
      if (v193 != nullptr) {
        v194 = *v193;
      }
      else {
        v194 = -1;
      }
      LODWORD(v235_.v236) = v194;
      v195 = *(_QWORD*)(v212_.v212 + v185 + 40);
      if (v195 != 0) {
        v196 = *(__int16*)(v195 + 2);
      }
      else {
        v196 = -1;
      }
      HIDWORD(v235_.v236) = v196;
      v197 = *(_QWORD*)(v212_.v212 + v185 + 48);
      if (v197 != 0) {
        v186 = *(__int16*)(v197 + 2);
      }
      else {
        v186 = -1;
      }
      v235_.v237 = v186;
      ItemCandidatesForAll_12f1580_alt1(v190, &v235_.v235),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      --v184;
      v185 += 56;
    } while (v184 != 0);
  }
LABEL_401:
  if (v212_.v224 != nullptr) {
    v212_.v225 = v212_.v224;
    v198 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v198 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v198);
  }
  if (v212_.v221 != nullptr) {
    v212_.v222 = v212_.v221;
    v199 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v199 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v199);
  }
  if (v212_.v218 != nullptr) {
    v212_.v219 = v212_.v218;
    v200 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v200 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v200);
  }
  if (v212_.v215 != nullptr) {
    v212_.v216 = v212_.v215;
    v201 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v201 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v201);
  }
  if (v212_.v212 != 0) {
    v212_.v213 = (__int64 (***)(void))v212_.v212,
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v202 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v202 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v202);
  }
  if (v2 != nullptr) {
    v203 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v203 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v203);
  }
  return result;
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
