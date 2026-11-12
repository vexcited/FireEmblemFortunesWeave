#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d250[3];
_QWORD*
BattleSide_Destructor_alt1(_QWORD* result) __asm__("BattleSide_Destructor");
__int64 BattleSide_7a1610_alt1(_QWORD) __asm__("BattleSide_7a1610");
__int64 BattleSide_7a17c0_alt1(_QWORD, _QWORD, _QWORD,
                               _QWORD) __asm__("BattleSide_7a17c0");
__int64 BattleSide_7a4fa0_alt1(_QWORD, _QWORD, _QWORD, _QWORD,
                               _QWORD) __asm__("BattleSide_7a4fa0");
__int64 BattleSide_7a5860_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                               _QWORD, _QWORD) __asm__("BattleSide_7a5860");
__int64 GameReliance_8e17a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6c51e0(_QWORD);
__int64 GameRoutine_6c6da0(_QWORD);
__int64 GameRoutine_6c6ec0(_QWORD);
__int64 GameRoutine_6e3d00(_QWORD, _QWORD);
__int64 GameRoutine_6fcf60(unsigned __int8*, __int64);
__int64 GameRoutine_7410c0(_QWORD);
__int64 GameRoutine_756f00(__int64 result, unsigned int, unsigned int, __int64);
__int64 GameRoutine_799290(_QWORD*);
__int64 GameRoutine_799290_alt1(_QWORD) __asm__("GameRoutine_799290");
__int64 GameRoutine_79d190(__int64);
__int64 GameRoutine_7a69c0(float*, int*, __int64, _DWORD**);
__int64 GameRoutine_84edc0(_QWORD, _QWORD);
__int64 GameRoutine_8517e0(void);
__int64 GameRoutine_8ca0c0(_QWORD, _QWORD);
__int64 UnitSkillList_84cc00(_QWORD, _QWORD, _QWORD);
__int64 UnitSkillList_84cf20(_QWORD, _QWORD, _QWORD);
__int64 UnitSkillList_84d980(_QWORD, _QWORD);
__int64 UnitSkillList_84e640(_QWORD);
__int64 UnitSkillList_84e760(_QWORD);
__int64 __cxa_guard_acquire(_QWORD, _QWORD);
__int64 __cxa_guard_acquire_alt1(_QWORD) __asm__("__cxa_guard_acquire");
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HasActiveSkill_843580(_QWORD, _QWORD, _QWORD);
__int64 game_Unit_GetJob(_QWORD);
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
__int64 game_Unit_SetPollution(_QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
bool GameRoutine_79d430(__int64);
extern _QWORD GameData_21d40b8[];
extern _UNKNOWN GameData_21d3fb8;
extern _UNKNOWN GameData_21d40b0;
extern _UNKNOWN GameData_21d40b8_alt1 __asm__("GameData_21d40b8");
extern _UNKNOWN GameData_21d41b0;
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern __int16 GameData_21d3fbc;
extern __int16* GameData_212cf08[9];
extern __int64 (***GameData_212dae8)();
extern __int64 (*GameData_1f989f8[])();
extern __int64 (*GameData_1f98af8[])();
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21ca4b0;
extern __int64 game_GameModeData_instance_;
extern __int64 game_g_empty_item;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern int GameData_21d9730;
extern int GameData_21d9760;
extern int GameData_21d9764;
extern int GameData_21d9768;
extern int GameData_21d976c;
extern int GameData_21d9770;
extern int GameData_21d977c;
extern int GameData_21d9788;
extern int GameData_21d978c;
extern int GameData_21d97bc;
extern int GameData_21d9828;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD,
                                                  _QWORD);
void __attribute__((noreturn)) GameRoutine_8d7580(void);
__int64 BattleSide_79e8e0(_QWORD* a1);
__int64 BattleSide_79e950(__int64 result, __int64 a2);
__int64 BattleSide_79eba0(__int64 result);
_QWORD* BattleSide_79ec90(_QWORD* a1, __int64 a2);
__int64 BattleSide_79ed40(__int64 a1, int a2);
bool BattleSide_79eea0(__int64 a1);
__int64 BattleSide_79fd30(__int64 a1);
__int64 BattleSide_79ff80(__int64 a1);
__int64 BattleSide_7a0260(__int64 a1);
__int64 BattleSide_7a0540(_QWORD* a1, __int64 a2);
__int64 game_map_BattleSide_CalculateTerrain(__int64 result);
__int64 BattleSide_7a0e10(__int64 result, __int64 a2, __int64 a3);
bool BattleSide_7a11b0(__int64 a1);
unsigned __int64 BattleSide_7a1270(_QWORD* a1);
__int64 BattleSide_7a13b0(__int64 a1, int a2);
__int64 BattleSide_7a1610(__int64 a1);
__int64 BattleSide_7a16a0(__int64 a1, unsigned int* a2);
__int64 BattleSide_7a17c0(__int64 a1, _WORD* a2, unsigned __int8 a3);
__int64 BattleSide_7a1a00(__int64 a1, __int64 a2);
__int64 BattleSide_7a1f40(__int64 a1, __int64 a2);
__int64 BattleSide_7a2950(_QWORD* a1, __int64 a2);
__int64 game_map_BattleSide_GetHealPower_lambda0_Invoke(__int64 a1, _WORD* a2);
__int64 BattleSide_7a4700_alt1(__int64 result, _QWORD* a2, __int64* a3,
                               unsigned __int64 a4, __int64* a5,
                               signed __int64 a6) __asm__("BattleSide_7a4700");
__int64 BattleSide_7a4fa0(__int64 result, __int64* a2, __int64* a3,
                          unsigned __int64 a4, __int64* a5);
__int64 BattleSide_7a5860(__int64 result, __int64* a2, __int64* a3, __int64* a4,
                          __int64 a5, __int64 a6, __int64 a7, __int64 a8);
__int64 game_map_BattleSide_CalculateTerrain_lambda0_Invoke(__int64 result,
                                                            __int64 a2);
_QWORD* game_map_BattleSide_EachMaskSkill_lambda0_Clone(_QWORD* a1);
_QWORD* game_map_BattleSide_EachMaskSkill_lambda0_CloneInto(_QWORD* result,
                                                            _QWORD* a2);
__int64 game_map_BattleSide_EachMaskSkill_lambda0_Invoke(__int64 result,
                                                         _DWORD* a2, __int64 a3,
                                                         __int64 a4);
__int64* game_820d50(int);
__int64 BattleInfo_79c940(_QWORD, _QWORD);
__int64 BattleInfo_79d030(_QWORD);
__int64 BattleInfo_79d360(_QWORD);
__int64 BattleSide_79eea0_alt1(_QWORD) __asm__("BattleSide_79eea0");
__int64 BattleSide_7a0260_alt1(_QWORD) __asm__("BattleSide_7a0260");
__int64 BattleSide_7a1270_alt1(_QWORD) __asm__("BattleSide_7a1270");
__int64 BattleSide_7a13b0_alt1(_QWORD, _QWORD) __asm__("BattleSide_7a13b0");
__int64 GameRoutine_7a69c0_alt1(_QWORD, _QWORD, _QWORD, _QWORD,
                                _QWORD) __asm__("GameRoutine_7a69c0");
__int64 Unit_6cbdc0(__int64, _DWORD*, unsigned __int16*, int);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_map_79cbb0(_QWORD);
__int64 game_map_79d190(_QWORD);
__int64 game_map_BattleUtil_GetHealPower(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                         _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
extern _QWORD GameData_1b01588[4];
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_1f988f8[])();
extern __int64 (*GameData_1f98c80[])();
extern __int64* game_g_empty_item_ptr;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_21d4028;
extern __int64 GameData_21d4058;
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __attribute__((noreturn))
GameRoutine_60a310_alt2(_QWORD) __asm__("GameRoutine_60a310");
unsigned __int64 game_map_BattleSide_GetHealPower(unsigned __int64 result);
__int64 BattleSide_7a2480(__int64 a1, __int64 a2, __int64 a3);
__int64 game_map_BattleSide_EachMaskSkill_alt1(
    __int64 result, _DWORD* a2, char a3,
    __int64 a4) __asm__("game_map_BattleSide_EachMaskSkill");
__int64* GameRoutine_7a6cc0(__int64* result, unsigned __int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 std___1___next_prime(_QWORD);
__int64 BattleSide_7a69c0(__int64 a1, int* a2, __int64 a3, _DWORD** a4);
__int64 BattleSide_7a69c0_alt1(float*, int*, __int64,
                               _DWORD**) __asm__("BattleSide_7a69c0");
__int64 GameReliance_8e17a0_alt1(_QWORD*, __int64,
                                 __int64) __asm__("GameReliance_8e17a0");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void BattleSide_Destructor(_QWORD* a1);
void game_map_BattleSide_EachMaskSkill(__int64 a1, _DWORD* a2, char a3,
                                       __int64 a4);
__int64 BattleSide_7a4700(__int64 result, __int64* a2, __int64* a3,
                          unsigned __int64 a4, __int64* a5, __int64 a6);

void BattleSide_Destructor(_QWORD* a1)
{
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
  __int64* v36;
  __int64* v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;

  v2 = a1[92];
  *a1 = GameData_212d250[0] + 2;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[93] = v2;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v4 + v5, v2);
  }
  v6 = a1[89];
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    a1[90] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v7 + v8, v6);
  }
  v9 = a1[84];
  if (v9 != 0) {
    v10 = *(_QWORD*)v3;
    a1[85] = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v10 + v11, v9);
  }
  v12 = a1[81];
  if (v12 != 0) {
    v13 = *(_QWORD*)v3;
    a1[82] = v12;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v13 + v14, v12);
  }
  v15 = a1[77];
  if (v15 != 0) {
    v16 = *(_QWORD*)v3;
    a1[78] = v15;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v16 + v17, v15);
  }
  v18 = a1[72];
  if (v18 != 0) {
    v19 = *(_QWORD*)v3;
    a1[73] = v18;
    v20 = 128;
    if (*(_QWORD*)(v19 + 200) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v19 + v20, v18);
  }
  v21 = a1[69];
  if (v21 != 0) {
    v22 = *(_QWORD*)v3;
    a1[70] = v21;
    v23 = 128;
    if (*(_QWORD*)(v22 + 200) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v22 + v23, v21);
  }
  v24 = a1[65];
  if (v24 != 0) {
    v25 = *(_QWORD*)v3;
    a1[66] = v24;
    v26 = 128;
    if (*(_QWORD*)(v25 + 200) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v25 + v26, v24);
  }
  v27 = a1[60];
  if (v27 != 0) {
    v28 = *(_QWORD*)v3;
    a1[61] = v27;
    v29 = 128;
    if (*(_QWORD*)(v28 + 200) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v28 + v29, v27);
  }
  v30 = a1[57];
  if (v30 != 0) {
    v31 = *(_QWORD*)v3;
    a1[58] = v30;
    v32 = 128;
    if (*(_QWORD*)(v31 + 200) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v31 + v32, v30);
  }
  v33 = a1[53];
  if (v33 != 0) {
    v34 = *(_QWORD*)v3;
    a1[54] = v33;
    v35 = 128;
    if (*(_QWORD*)(v34 + 200) == 0) {
      v35 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v34 + v35, v33);
  }
  v36 = (__int64*)a1[17];
  v37 = (__int64*)a1[18];
  a1[21] = 0;
  v38 = v37 - v36;
  if (v38 >= 3) {
    do {
      if (*v36 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v39 = 128;
        }
        else {
          v39 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v39, *v36);
        v36 = (__int64*)a1[17];
        v37 = (__int64*)a1[18];
      }
      a1[17] = ++v36;
      v38 = v37 - v36;
    } while (v38 > 2);
  }
  if (v38 == 1) {
    v40 = 8;
  }
  else {
    if (v38 != 2) {
      goto LABEL_58;
    }
    v40 = 16;
  }
  a1[20] = v40;
LABEL_58:
  if (v36 != v37) {
    do {
      if (*v36 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v41 = 128;
        }
        else {
          v41 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v41, *v36);
      }
      ++v36;
    } while (v36 != v37);
    v42 = a1[18];
    v43 = a1[17] - v42;
    if (v43 != 0) {
      a1[18] = v42 + ((v43 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
  }
  v44 = a1[16];
  if (v44 != 0) {
    v45 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v45 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v45, v44);
  }
}

unsigned __int64 game_map_BattleSide_GetHealPower(unsigned __int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  _WORD* v7;
  char v8;
  __int64 v9;
  _WORD* v10;
  __int64* v11;
  unsigned int v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  unsigned int v16;
  bool v17;
  unsigned int v18;
  bool v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int16 v23;
  __int64 v24;
  unsigned __int64 v25;
  float v26;
  float v27;
  __int64 v28;
  __int64 v29;
  _WORD* v30;
  __int64 v31;
  _WORD* v32;
  __int64 v33;
  __int64 v34;
  _WORD* v35;
  __int64 v36;
  __int64 v37;
  int v38;
  int v39;
  float v40;
  int v41;
  _QWORD* v42;
  char v43;
  unsigned __int8 explicit;
  __int64 v45;
  char* v46;
  __int64 v47;
  char* v48;
  __int64 v49;
  _WORD* v50;
  __int64 v51;
  _WORD* v52;
  __int64 v53;
  _WORD* v54;
  __int64 v55;
  __int16 v56;
  _WORD* v57;
  __int64 v58;
  _WORD* v59;
  unsigned int v60;
  __int64 v61;
  __int64* v62;
  __int64 v63;
  unsigned int v64;
  int v65;
  bool v66;
  __int16 v67;
  __int64 v68;
  _WORD* v69;
  unsigned __int64 v70;
  float* v71;
  __int16 v72;
  __int16 v73;
  __int16 v74;
  __int64 v75;
  float v76;
  float v77;
  float v78;
  float v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  __int64 v85;
  _WORD* v86;
  __int64 v87;
  _WORD* v88;
  __int64 v89;
  __int16 v90;
  _WORD* v91;
  __int16 v92;
  __int64 v93;
  _WORD* v94;
  int v95;
  unsigned __int64 v96;
  __int64 v97;
  int v98;
  __int64 v99;
  unsigned __int64 v100;
  __int64 v101;
  int v102;
  unsigned __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  void* v109;
  unsigned __int64 v110;
  __int64 v111;
  __int16 v112;
  __int16 v113;
  float v114;
  float v115;
  float v116;
  int v117;
  float v118;
  int v119;
  int v120;
  int v121;
  unsigned __int64 v122;
  __int64 v123;
  _QWORD* v124;
  __int64 v125;
  void* v126;
  unsigned __int64 v127;
  __int16 v128;
  __int16 v129;
  float v130;
  float v131;
  float v132;
  float v133;
  int v134;
  int v135;
  int v136;
  unsigned __int64 v137;
  __int64 v138;
  __int64 v139;
  __int16 v140;
  __int64 v141;
  _QWORD* v142;
  __int64 v143;
  __int64 v144;
  _WORD* v145;
  int v146;
  unsigned __int64 v147;
  __int64 v148;
  int v149;
  __int64 v150;
  unsigned __int64 v151;
  __int64 v152;
  int v153;
  unsigned __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  unsigned __int64 v159;
  float v160;
  float v161;
  __int64 v162;
  int v163;
  int v164;
  float v165;
  int v166;
  float v167;
  float v168;
  __int64 v169;
  int v170;
  float v171;
  int v172;
  __int16 v173;
  int v174;
  __int16 v175;
  int v176;
  _QWORD v177[4];
  _QWORD* v178;
  int v179;

  v1 = *(_QWORD*)(result + 24);
  v2 = *(_QWORD*)(result + 8);
  v3 = result;
  if (v1 != 0) {
    v4 = *(unsigned __int8*)(result + 17);
    if (v4 > 3) {
      v5 = 4;
    }
    else {
      v5 = GameData_1b01588[v4];
    }
    v8 = BattleInfo_79d030(result);
    v9 = game_g_shared_system_skills_ptr;
    if ((v8 & 1) != 0) {
      v10 = (_WORD*)(v3 + 44);
      v11 = GameData_212c878[0];
      v12 = *(unsigned __int16*)(v3 + 44);
      if (*(_WORD*)(v3 + 44) == 0 &&
              ((int)(v13 = *(unsigned int*)(v3 + 40)) <= -1
                   ? (v14 = game_g_empty_item_ptr)
                   : (v14 = (__int64*)(v1 + 8 * v13 + 828)),
               (v12 = *(unsigned __int16*)v14) == 0) ||
          (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                8LL * v12) +
                     73LL) &
           0xFE) != 2) {
        v15 = *(_QWORD*)(v3 + 56);
        if (v15 == 0 || ((v16 = *(unsigned __int8*)(v15 + 250),
                          v17 = v16 > 0x1F, v18 = (1 << v16) & 0x80000600, !v17)
                             ? (v19 = v18 == 0)
                             : (v19 = true),
                         v19)) {
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                                    memory_order_acquire) &
               1) == 0 &&
              (unsigned int)__cxa_guard_acquire_alt1(&GameData_21d41b0) != 0) {
            GameRoutine_799290_alt1(&GameData_21d40b8_alt1);
            __cxa_guard_release(&GameData_21d41b0);
          }
          v31 = *(_QWORD*)(v3 + 168);
          if (v31 != 0) {
            v32 = (_WORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 136) +
                                      8 * ((unsigned __int64)(v31 +
                                                              *(_QWORD*)(v3 +
                                                                         160) -
                                                              1) >>
                                           4)) +
                           244LL * (((_DWORD)v31 + *(_DWORD*)(v3 + 160) - 1) &
                                    0xF));
          }
          else {
            v32 = &GameData_21d40b8_alt1;
          }
          *v32 = 0;
          v36 = *(_QWORD*)(v3 + 56);
          if (v36 != 0) {
          LABEL_47:
            if ((((unsigned __int16)*GameData_212cf08[0] >>
                  *(_BYTE*)(v36 + 104)) &
                 1) == 0) {
              goto LABEL_103;
            }
            v37 = *(_QWORD*)(v36 + 576);
            if (v37 == 0 || *(unsigned __int8*)(v37 + 72) > 7u ||
                *(_BYTE*)(v37 + 73) != 7) {
              goto LABEL_103;
            }
            goto LABEL_105;
          }
        LABEL_94:
          v60 = (unsigned __int16)*v10;
          if (*v10 == 0 && ((int)(v61 = *(unsigned int*)(v3 + 40)) <= -1
                                ? (v62 = game_g_empty_item_ptr)
                                : (v62 = (__int64*)(*(_QWORD*)(v3 + 24) +
                                                    8 * v61 + 828)),
                            (v60 = *(unsigned __int16*)v62) == 0) ||
              ((v63 = *(_QWORD*)(*(_QWORD*)(*v11 + 64) + 8LL * v60),
                v64 = *(unsigned __int8*)(v63 + 72),
                v65 = *(unsigned __int8*)(v63 + 73), v64 <= 7)
                   ? (v66 = v65 == 7)
                   : (v66 = false),
               !v66)) {
          LABEL_103:
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                                      memory_order_acquire) &
                 1) == 0) {
            LABEL_279:
              if ((unsigned int)__cxa_guard_acquire_alt1(&GameData_21d41b0) !=
                  0) {
                GameRoutine_799290_alt1(&GameData_21d40b8_alt1);
                __cxa_guard_release(&GameData_21d41b0);
              }
            }
          LABEL_137:
            v87 = *(_QWORD*)(v3 + 168);
            if (v87 != 0) {
              v88 =
                  (_WORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 136) +
                                      8 * ((unsigned __int64)(v87 +
                                                              *(_QWORD*)(v3 +
                                                                         160) -
                                                              1) >>
                                           4)) +
                           244LL * (((_DWORD)v87 + *(_DWORD*)(v3 + 160) - 1) &
                                    0xF));
            }
            else {
              v88 = &GameData_21d40b8_alt1;
            }
            v88[8] = 100;
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                                      memory_order_acquire) &
                 1) != 0) {
              goto LABEL_141;
            }
            goto LABEL_277;
          }
        LABEL_105:
          v67 = game_map_79cbb0(v3);
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                                    memory_order_acquire) &
               1) == 0) {
            v173 = v67;
            v174 = __cxa_guard_acquire_alt1(&GameData_21d41b0);
            v67 = v173;
            if (v174 != 0) {
              GameRoutine_799290_alt1(&GameData_21d40b8_alt1);
              __cxa_guard_release(&GameData_21d41b0);
              v67 = v173;
            }
          }
          v68 = *(_QWORD*)(v3 + 168);
          if (v68 != 0) {
            v69 = (_WORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 136) +
                                      8 * ((unsigned __int64)(v68 +
                                                              *(_QWORD*)(v3 +
                                                                         160) -
                                                              1) >>
                                           4)) +
                           244LL * (((_DWORD)v68 + *(_DWORD*)(v3 + 160) - 1) &
                                    0xF));
          }
          else {
            v69 = &GameData_21d40b8_alt1;
          }
          v69[8] = v67;
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                                    memory_order_acquire) &
               1) == 0) {
          LABEL_277:
            if ((unsigned int)__cxa_guard_acquire_alt1(&GameData_21d41b0) !=
                0) {
              GameRoutine_799290_alt1(&GameData_21d40b8_alt1);
              __cxa_guard_release(&GameData_21d41b0);
            }
          }
        LABEL_141:
          v89 = *(_QWORD*)(v3 + 168);
          v90 = 0;
          if (v89 != 0) {
          LABEL_142:
            v91 = (_WORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 136) +
                                      8 * ((unsigned __int64)(v89 +
                                                              *(_QWORD*)(v3 +
                                                                         160) -
                                                              1) >>
                                           4)) +
                           244LL * (((_DWORD)v89 + *(_DWORD*)(v3 + 160) - 1) &
                                    0xF));
          LABEL_200:
            v91[16] = v90;
            v137 = *(unsigned __int8*)(v3 + 17);
            if (v137 > 3) {
              v138 = 4;
            }
            else {
              v138 = GameData_1b01588[v137];
            }
            v139 = *(_QWORD*)(v3 + 8);
            result = BattleInfo_79d030(v3);
            if ((result & 1) == 0) {
              result = game_map_79d190(v3);
              if ((result & 1) == 0) {
                v140 = 0;
                goto LABEL_214;
              }
              v141 = *(_QWORD*)(v3 + 56);
              if (v141 == 0 || (*(_BYTE*)(v141 + 104) & 0xFD) == 0) {
                v142 = (_QWORD*)(v139 + 760 * v138);
                v143 = v142[9];
                if (v143 != 0 && *(unsigned __int8*)(v143 + 105) >= 2u) {
                  goto LABEL_212;
                }
                if (*(_BYTE*)(*(_QWORD*)(v3 + 8) + 11272LL) == 4) {
                  if (*(_BYTE*)(v3 + 16) != 0) {
                  LABEL_212:
                    result = BattleSide_79eea0_alt1(v3);
                    v140 = result & 1;
                    goto LABEL_214;
                  }
                }
                else {
                  if ((*(_BYTE*)(v142[3] + 11277LL) & 0x80) == 0 &&
                      v142[6] != 0) {
                    v140 = *(_BYTE*)(v3 + 16) == 0;
                    goto LABEL_214;
                  }
                  if ((BattleSide_7a13b0_alt1(v3, *(unsigned int*)(v3 + 92)) &
                       1) == 0 &&
                      (*(_BYTE*)(*(_QWORD*)(v3 + 8) + 11276LL) & 4) == 0) {
                    goto LABEL_212;
                  }
                  LODWORD(v177[0]) =
                      *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x50LL) + v9) & 0xFFF;
                  result = BattleInfo_79c940(v3, v177);
                  if ((result & 1) == 0) {
                    LODWORD(v177[0]) =
                        *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x5CLL) + v9) & 0xFFF;
                    result = BattleInfo_79c940(v3, v177);
                    if ((result & 1) != 0) {
                      v140 = 2;
                    }
                    else {
                      v159 = BattleInfo_79d360(v3);
                      if ((v159 & 0x800000000000LL) != 0) {
                        v163 = (SHIDWORD(v159) >> 16) & (SHIDWORD(v159) >> 31);
                        if ((v159 & 0x8000u) == 0LL) {
                          v164 = 999;
                        }
                        else {
                          v164 = 0;
                        }
                        if ((v159 & 0x8000u) == 0LL) {
                          v163 =
                              (SHIDWORD(v159) >> 16) & ~(SHIDWORD(v159) >> 31);
                        }
                        v165 = (float)((int)v159 >> 16) +
                               (float)((float)(__int16)v159 * v160);
                        v166 = (int)(float)(v165 * v161);
                        if (v164 >= v166) {
                          v164 = (int)(float)(v165 * v161);
                        }
                        if (v163 <= v166) {
                          LODWORD(v162) = v164;
                        }
                        else {
                          LODWORD(v162) = v163;
                        }
                      }
                      else {
                        v162 = HIDWORD(v159) & 0x7FFF;
                      }
                      result = BattleInfo_79d360(v142 + 2);
                      if ((result & 0x800000000000LL) != 0) {
                        LODWORD(v169) =
                            (SHIDWORD(result) >> 16) & (SHIDWORD(result) >> 31);
                        if ((result & 0x8000u) == 0LL) {
                          v170 = 999;
                        }
                        else {
                          v170 = 0;
                        }
                        if ((result & 0x8000u) == 0LL) {
                          LODWORD(v169) = (SHIDWORD(result) >> 16) &
                                          ~(SHIDWORD(result) >> 31);
                        }
                        v171 = (float)((int)result >> 16) +
                               (float)((float)(__int16)result * v167);
                        v172 = (int)(float)(v171 * v168);
                        if (v170 >= v172) {
                          v170 = (int)(float)(v171 * v168);
                        }
                        if ((int)v169 <= v172) {
                          LODWORD(v169) = v170;
                        }
                      }
                      else {
                        v169 = HIDWORD(result) & 0x7FFF;
                      }
                      if ((int)v162 - (int)v169 <= 3) {
                        v140 = 1;
                      }
                      else {
                        v140 = 2;
                      }
                    }
                  LABEL_214:
                    if ((atomic_load_explicit(
                             (atomic_uchar* volatile)&GameData_21d41b0,
                             memory_order_acquire) &
                         1) == 0) {
                      result = __cxa_guard_acquire_alt1(&GameData_21d41b0);
                      if ((_DWORD)result != 0) {
                        GameRoutine_799290_alt1(&GameData_21d40b8_alt1);
                        result = __cxa_guard_release(&GameData_21d41b0);
                      }
                    }
                    v144 = *(_QWORD*)(v3 + 168);
                    if (v144 != 0) {
                      v145 =
                          (_WORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 136) +
                                              8 * ((unsigned __int64)(v144 +
                                                                      *(_QWORD*)(v3 +
                                                                                 160) -
                                                                      1) >>
                                                   4)) +
                                   244LL * (((_DWORD)v144 +
                                             *(_DWORD*)(v3 + 160) - 1) &
                                            0xF));
                    }
                    else {
                      v145 = &GameData_21d40b8_alt1;
                    }
                    v145[24] = v140;
                    v146 = *(_DWORD*)((char*)((_UNKNOWN*)0x4CLL) + v9);
                    v147 = v146 & 0xFFF;
                    LODWORD(v177[0]) = v146 & 0xFFF;
                    if ((v146 & 0xFFF) == 0) {
                      goto LABEL_234;
                    }
                    if (*(_QWORD*)(v3 + 24) == 0) {
                      goto LABEL_234;
                    }
                    v148 = *(_QWORD*)(v3 + 8);
                    v149 = *(_DWORD*)(v148 + 11276);
                    if ((v149 & 0x20) != 0) {
                      goto LABEL_234;
                    }
                    v150 = *(_QWORD*)(v3 + 520);
                    v151 = (*(_QWORD*)(v3 + 528) - v150) >> 2;
                    if (v151 < (v147 >> 5) + 1 ||
                        ((*(_DWORD*)(v150 + 4LL * (unsigned int)(v147 >> 5)) >>
                          v146) &
                         1) == 0) {
                      goto LABEL_234;
                    }
                    v152 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                      8LL * (v146 & 0xFFF));
                    v153 = *(unsigned __int16*)(v148 + 11288);
                    if ((v149 & 0x10000) != 0) {
                      v154 = *(unsigned int*)((char*)((_UNKNOWN*)0x128LL) + v9);
                      v155 = (v154 >> 5) & 0x7F;
                      if (v151 >= v155 + 1 &&
                          ((*(_DWORD*)(v150 + 4 * ((v154 >> 5) & 0x7F)) >>
                            v154) &
                           1) != 0) {
                        v153 |= 0x200u;
                      }
                      v156 = v148 + 760LL * *(unsigned __int8*)(v3 + 17);
                      v157 = *(_QWORD*)(v156 + 544);
                      v158 = *(_QWORD*)(v156 + 536);
                      if (v155 + 1 <= (unsigned __int64)((v157 - v158) >> 2) &&
                          ((*(_DWORD*)(v158 + 4 * ((v154 >> 5) & 0x7F)) >>
                            v154) &
                           1) != 0) {
                        v153 |= 0x200u;
                      }
                    }
                    if ((v153 & ~*(unsigned __int16*)(v152 + 248)) == 0 &&
                        ((result = game_HasActiveSkill_843580(
                              v177, v3 + 520,
                              v148 + 760LL * *(unsigned __int8*)(v3 + 17) +
                                  536)) &
                         1) != 0) {
                      result = BattleSide_79eea0_alt1(v3);
                      v56 = result & 1;
                      if ((atomic_load_explicit(
                               (atomic_uchar* volatile)&GameData_21d41b0,
                               memory_order_acquire) &
                           1) != 0) {
                        goto LABEL_235;
                      }
                    }
                    else {
                    LABEL_234:
                      v56 = 1;
                      if ((atomic_load_explicit(
                               (atomic_uchar* volatile)&GameData_21d41b0,
                               memory_order_acquire) &
                           1) != 0) {
                        goto LABEL_235;
                      }
                    }
                    result = __cxa_guard_acquire_alt1(&GameData_21d41b0);
                    if ((_DWORD)result != 0) {
                      GameRoutine_799290_alt1(&GameData_21d40b8_alt1);
                      result = __cxa_guard_release(&GameData_21d41b0);
                    }
                  LABEL_235:
                    v55 = *(_QWORD*)(v3 + 168);
                    if (v55 != 0) {
                    LABEL_236:
                      v57 =
                          (_WORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 136) +
                                              8 * ((unsigned __int64)(v55 +
                                                                      *(_QWORD*)(v3 +
                                                                                 160) -
                                                                      1) >>
                                                   4)) +
                                   244LL * (((_DWORD)v55 +
                                             *(_DWORD*)(v3 + 160) - 1) &
                                            0xF));
                      goto LABEL_237;
                    }
                  LABEL_84:
                    v57 = &GameData_21d40b8_alt1;
                  LABEL_237:
                    v57[32] = v56;
                    return result;
                  }
                }
              }
            }
            v140 = 1;
            goto LABEL_214;
          }
        LABEL_199:
          v91 = &GameData_21d40b8_alt1;
          goto LABEL_200;
        }
      }
      v20 = (__int64*)(v3 + 44);
      v21 = *(_QWORD*)(v2 + 760LL * (unsigned int)v4 + 40);
      if (*(_WORD*)(v3 + 44) != 0) {
        v22 = *(_QWORD*)(v3 + 56);
        if (v22 == 0) {
          goto LABEL_25;
        }
        goto LABEL_24;
      }
      v33 = *(unsigned int*)(v3 + 40);
      if ((v33 & 0x80000000) != 0) {
        v20 = game_g_empty_item_ptr;
        v22 = *(_QWORD*)(v3 + 56);
        if (v22 == 0) {
        LABEL_25:
          v179 = v22;
          v177[0] = GameData_1f988f8;
          v177[1] = v3;
          v178 = v177;
          v23 = game_map_BattleUtil_GetHealPower(v1, v21, v20, &v179, v3 + 520,
                                                 v177);
          if (v178 == v177) {
            v24 = 32;
          }
          else {
            if (v178 == nullptr) {
            LABEL_42:
              if ((atomic_load_explicit(
                       (atomic_uchar* volatile)&GameData_21d41b0,
                       memory_order_acquire) &
                   1) == 0 &&
                  (unsigned int)__cxa_guard_acquire_alt1(&GameData_21d41b0) !=
                      0) {
                GameRoutine_799290_alt1(&GameData_21d40b8_alt1);
                __cxa_guard_release(&GameData_21d41b0);
              }
              v34 = *(_QWORD*)(v3 + 168);
              if (v34 != 0) {
                v35 =
                    (_WORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 136) +
                                        8 * ((unsigned __int64)(v34 +
                                                                *(_QWORD*)(v3 +
                                                                           160) -
                                                                1) >>
                                             4)) +
                             244LL * (((_DWORD)v34 + *(_DWORD*)(v3 + 160) - 1) &
                                      0xF));
              }
              else {
                v35 = &GameData_21d40b8_alt1;
              }
              *v35 = v23;
              v36 = *(_QWORD*)(v3 + 56);
              if (v36 != 0) {
                goto LABEL_47;
              }
              goto LABEL_94;
            }
            v24 = 40;
          }
          (*(void (**)(__int64))(*v178 + v24))((__int64)v178);
          goto LABEL_42;
        }
      }
      else {
        v20 = (__int64*)(v1 + 8 * v33 + 828);
        v22 = *(_QWORD*)(v3 + 56);
        if (v22 == 0) {
          goto LABEL_25;
        }
      }
    LABEL_24:
      LODWORD(v22) = *(_WORD*)(v22 + 16) & 0xFFF;
      goto LABEL_25;
    }
    if ((game_map_79d190(v3) & 1) == 0) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire_alt1(&GameData_21d41b0) != 0) {
        GameRoutine_799290_alt1(&GameData_21d40b8_alt1);
        __cxa_guard_release(&GameData_21d41b0);
      }
      v29 = *(_QWORD*)(v3 + 168);
      if (v29 != 0) {
        v30 =
            (_WORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 136) +
                                8 * ((unsigned __int64)(v29 +
                                                        *(_QWORD*)(v3 + 160) -
                                                        1) >>
                                     4)) +
                     244LL * (((_DWORD)v29 + *(_DWORD*)(v3 + 160) - 1) & 0xF));
      }
      else {
        v30 = &GameData_21d40b8_alt1;
      }
      *v30 = 0;
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire_alt1(&GameData_21d41b0) != 0) {
        GameRoutine_799290_alt1(&GameData_21d40b8_alt1);
        __cxa_guard_release(&GameData_21d41b0);
      }
      v58 = *(_QWORD*)(v3 + 168);
      if (v58 != 0) {
        v59 =
            (_WORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 136) +
                                8 * ((unsigned __int64)(v58 +
                                                        *(_QWORD*)(v3 + 160) -
                                                        1) >>
                                     4)) +
                     244LL * (((_DWORD)v58 + *(_DWORD*)(v3 + 160) - 1) & 0xF));
      }
      else {
        v59 = &GameData_21d40b8_alt1;
      }
      v59[8] = 0;
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                                memory_order_acquire) &
           1) == 0) {
        goto LABEL_277;
      }
      goto LABEL_141;
    }
    v25 = BattleSide_7a1270_alt1(v3);
    if ((v25 & 0x800000000000LL) != 0) {
      v38 = (SHIDWORD(v25) >> 16) & (SHIDWORD(v25) >> 31);
      if ((v25 & 0x8000u) == 0LL) {
        v39 = 999;
      }
      else {
        v39 = 0;
      }
      if ((v25 & 0x8000u) == 0LL) {
        v38 = (SHIDWORD(v25) >> 16) & ~(SHIDWORD(v25) >> 31);
      }
      v40 = (float)((int)v25 >> 16) + (float)((float)(__int16)v25 * v26);
      v41 = (int)(float)(v40 * v27);
      if (v39 >= v41) {
        v39 = (int)(float)(v40 * v27);
      }
      if (v38 <= v41) {
        LODWORD(v28) = v39;
      }
      else {
        LODWORD(v28) = v38;
      }
    }
    else {
      v28 = HIDWORD(v25) & 0x7FFF;
    }
    v42 = (_QWORD*)(v2 + 760 * v5);
    v43 = BattleSide_7a0260_alt1(v3);
    explicit = atomic_load_explicit((atomic_uchar* volatile)&GameData_21d40b0,
                                    memory_order_acquire);
    if ((v43 & 1) != 0) {
      if ((explicit & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire_alt1(&GameData_21d40b0) != 0) {
        GameRoutine_799290_alt1(&GameData_21d3fb8);
        __cxa_guard_release(&GameData_21d40b0);
      }
      v45 = v42[23];
      if (v45 != 0) {
        v46 = (char*)(*(_QWORD*)(v42[19] +
                                 8 * ((unsigned __int64)(v45 + v42[22] - 1) >>
                                      4)) +
                      244LL * (((_DWORD)v45 + *((_DWORD*)v42 + 44) - 1) & 0xF));
      }
      else {
        v46 = (char*)&GameData_21d3fb8;
      }
      v70 = *((_QWORD*)v46 + 24);
      v71 = (float*)(v46 + 200);
      v72 = *((_WORD*)v46 + 121);
      v73 = *((_WORD*)v46 + 112);
    }
    else {
      if ((explicit & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire_alt1(&GameData_21d40b0) != 0) {
        GameRoutine_799290_alt1(&GameData_21d3fb8);
        __cxa_guard_release(&GameData_21d40b0);
      }
      v47 = v42[23];
      if (v47 != 0) {
        v48 = (char*)(*(_QWORD*)(v42[19] +
                                 8 * ((unsigned __int64)(v47 + v42[22] - 1) >>
                                      4)) +
                      244LL * (((_DWORD)v47 + *((_DWORD*)v42 + 44) - 1) & 0xF));
      }
      else {
        v48 = (char*)&GameData_21d3fb8;
      }
      v70 = *((_QWORD*)v48 + 22);
      v71 = (float*)(v48 + 184);
      v72 = *((_WORD*)v48 + 120);
      v73 = *((_WORD*)v48 + 111);
    }
    v74 = v72 + v73 + WORD1(v70);
    if ((v70 & 0x800000000000LL) != 0) {
      v77 = *v71;
      v76 = v71[1];
      v80 = (SHIDWORD(v70) >> 16) & (SHIDWORD(v70) >> 31);
      if ((v70 & 0x8000u) == 0LL) {
        v81 = 999;
      }
      else {
        v81 = 0;
      }
      if ((v70 & 0x8000u) == 0LL) {
        v80 = (SHIDWORD(v70) >> 16) & ~(SHIDWORD(v70) >> 31);
      }
      v78 = (float)(__int16)v70;
      v79 = (float)v74;
      v82 = (int)(float)((float)(v79 + (float)(v78 * v77)) * v76);
      if (v81 >= v82) {
        v83 = (int)(float)((float)(v79 + (float)(v78 * v77)) * v76);
      }
      else {
        v83 = v81;
      }
      if (v80 <= v82) {
        LODWORD(v75) = v83;
      }
      else {
        LODWORD(v75) = v80;
      }
    }
    else {
      v75 = HIDWORD(v70) & 0x7FFF;
    }
    v84 = v28 - v75;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire_alt1(&GameData_21d41b0) != 0) {
      GameRoutine_799290_alt1(&GameData_21d40b8_alt1);
      __cxa_guard_release(&GameData_21d41b0);
    }
    v85 = *(_QWORD*)(v3 + 168);
    if (v85 != 0) {
      v86 = (_WORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 136) +
                                8 * ((unsigned __int64)(v85 +
                                                        *(_QWORD*)(v3 + 160) -
                                                        1) >>
                                     4)) +
                     244LL * (((_DWORD)v85 + *(_DWORD*)(v3 + 160) - 1) & 0xF));
    }
    else {
      v86 = &GameData_21d40b8_alt1;
    }
    *v86 = v84 & ~(unsigned __int16)(v84 >> 31);
    if ((*(_BYTE*)(v42[3] + 11277LL) & 0x80) == 0 && v42[6] != 0) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                                memory_order_acquire) &
           1) != 0) {
        goto LABEL_137;
      }
      goto LABEL_279;
    }
    v92 = game_map_79cbb0(v3);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                              memory_order_acquire) &
         1) == 0) {
      v175 = v92;
      v176 = __cxa_guard_acquire_alt1(&GameData_21d41b0);
      v92 = v175;
      if (v176 != 0) {
        GameRoutine_799290_alt1(&GameData_21d40b8_alt1);
        __cxa_guard_release(&GameData_21d41b0);
        v92 = v175;
      }
    }
    v93 = *(_QWORD*)(v3 + 168);
    if (v93 != 0) {
      v94 = (_WORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 136) +
                                8 * ((unsigned __int64)(v93 +
                                                        *(_QWORD*)(v3 + 160) -
                                                        1) >>
                                     4)) +
                     244LL * (((_DWORD)v93 + *(_DWORD*)(v3 + 160) - 1) & 0xF));
    }
    else {
      v94 = &GameData_21d40b8_alt1;
    }
    v94[8] = v92;
    v95 = *(_DWORD*)((char*)((_UNKNOWN**)0x38LL) + v9 + 4);
    v96 = v95 & 0xFFF;
    LODWORD(v177[0]) = v95 & 0xFFF;
    if ((v95 & 0xFFF) != 0 && *(_QWORD*)(v3 + 24) != 0) {
      v97 = *(_QWORD*)(v3 + 8);
      v98 = *(_DWORD*)(v97 + 11276);
      if ((v98 & 0x20) == 0) {
        v99 = *(_QWORD*)(v3 + 520);
        v100 = (*(_QWORD*)(v3 + 528) - v99) >> 2;
        if (v100 >= (v96 >> 5) + 1 &&
            ((*(_DWORD*)(v99 + 4LL * (unsigned int)(v96 >> 5)) >> v95) & 1) !=
                0) {
          v101 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                            8LL * (v95 & 0xFFF));
          v102 = *(unsigned __int16*)(v97 + 11288);
          if ((v98 & 0x10000) != 0) {
            v103 = *(unsigned int*)((char*)((_UNKNOWN*)0x128LL) + v9);
            v104 = (v103 >> 5) & 0x7F;
            if (v100 >= v104 + 1 &&
                ((*(_DWORD*)(v99 + 4 * ((v103 >> 5) & 0x7F)) >> v103) & 1) !=
                    0) {
              v102 |= 0x200u;
            }
            v105 = v97 + 760LL * *(unsigned __int8*)(v3 + 17);
            v106 = *(_QWORD*)(v105 + 544);
            v107 = *(_QWORD*)(v105 + 536);
            if (v104 + 1 <= (unsigned __int64)((v106 - v107) >> 2) &&
                ((*(_DWORD*)(v107 + 4 * ((v103 >> 5) & 0x7F)) >> v103) & 1) !=
                    0) {
              v102 |= 0x200u;
            }
          }
          if ((v102 & ~*(unsigned __int16*)(v101 + 248)) == 0 &&
              (game_HasActiveSkill_843580(
                   v177, v3 + 520,
                   v97 + 760LL * *(unsigned __int8*)(v3 + 17) + 536) &
               1) != 0) {
            v90 = 0;
          LABEL_197:
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                                      memory_order_acquire) &
                 1) == 0 &&
                (unsigned int)__cxa_guard_acquire_alt1(&GameData_21d41b0) !=
                    0) {
              GameRoutine_799290_alt1(&GameData_21d40b8_alt1);
              __cxa_guard_release(&GameData_21d41b0);
            }
            v89 = *(_QWORD*)(v3 + 168);
            if (v89 != 0) {
              goto LABEL_142;
            }
            goto LABEL_199;
          }
        }
      }
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d40b0,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire_alt1(&GameData_21d40b0) != 0) {
      GameRoutine_799290_alt1(&GameData_21d3fb8);
      __cxa_guard_release(&GameData_21d40b0);
    }
    v108 = *(_QWORD*)(v3 + 168);
    if (v108 != 0) {
      v109 = (void*)(*(_QWORD*)(*(_QWORD*)(v3 + 136) +
                                8 * ((unsigned __int64)(v108 +
                                                        *(_QWORD*)(v3 + 160) -
                                                        1) >>
                                     4)) +
                     244LL * (((_DWORD)v108 + *(_DWORD*)(v3 + 160) - 1) & 0xF));
      v110 = *((_QWORD*)v109 + 14);
      if ((v110 & 0x800000000000LL) == 0) {
      LABEL_165:
        v111 = HIDWORD(v110) & 0x7FFF;
        goto LABEL_178;
      }
    }
    else {
      v109 = &GameData_21d3fb8;
      v110 = GameData_21d4028;
      if ((GameData_21d4028 & 0x800000000000LL) == 0) {
        goto LABEL_165;
      }
    }
    v112 = *((_WORD*)v109 + 116);
    v113 = *((_WORD*)v109 + 107);
    v115 = *((float*)v109 + 30);
    v114 = *((float*)v109 + 31);
    v117 = (SHIDWORD(v110) >> 16) & (SHIDWORD(v110) >> 31);
    v118 = (float)(__int16)(v112 + WORD1(v110) + v113);
    if ((v110 & 0x8000u) == 0LL) {
      v119 = 999;
    }
    else {
      v119 = 0;
    }
    if ((v110 & 0x8000u) == 0LL) {
      v117 = (SHIDWORD(v110) >> 16) & ~(SHIDWORD(v110) >> 31);
    }
    v116 = (float)(__int16)v110;
    v120 = (int)(float)((float)(v118 + (float)(v116 * v115)) * v114);
    if (v119 >= v120) {
      v121 = (int)(float)((float)(v118 + (float)(v116 * v115)) * v114);
    }
    else {
      LOWORD(v121) = v119;
    }
    if (v117 <= v120) {
      LOWORD(v111) = v121;
    }
    else {
      LOWORD(v111) = v117;
    }
  LABEL_178:
    v122 = *(unsigned __int8*)(v3 + 17);
    if (v122 > 3) {
      v123 = 4;
    }
    else {
      v123 = GameData_1b01588[v122];
    }
    v124 = (_QWORD*)(*(_QWORD*)(v3 + 8) + 760 * v123);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d40b0,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire_alt1(&GameData_21d40b0) != 0) {
      GameRoutine_799290_alt1(&GameData_21d3fb8);
      __cxa_guard_release(&GameData_21d40b0);
    }
    v125 = v124[23];
    if (v125 != 0) {
      v126 =
          (void*)(*(_QWORD*)(v124[19] +
                             8 * ((unsigned __int64)(v125 + v124[22] - 1) >>
                                  4)) +
                  244LL * (((_DWORD)v125 + *((_DWORD*)v124 + 44) - 1) & 0xF));
      v127 = *((_QWORD*)v126 + 20);
      if ((v127 & 0x800000000000LL) == 0) {
      LABEL_184:
        v126 = (void*)(HIDWORD(v127) & 0x7FFF);
      LABEL_196:
        v90 = v111 - (_WORD)v126;
        goto LABEL_197;
      }
    }
    else {
      v126 = &GameData_21d3fb8;
      v127 = GameData_21d4058;
      if ((GameData_21d4058 & 0x800000000000LL) == 0) {
        goto LABEL_184;
      }
    }
    v128 = *((_WORD*)v126 + 119);
    v129 = *((_WORD*)v126 + 110);
    v131 = *((float*)v126 + 42);
    v130 = *((float*)v126 + 43);
    LODWORD(v126) = (SHIDWORD(v127) >> 16) & (SHIDWORD(v127) >> 31);
    v133 = (float)(__int16)(v128 + WORD1(v127) + v129);
    if ((v127 & 0x8000u) == 0LL) {
      v134 = 999;
    }
    else {
      v134 = 0;
    }
    if ((v127 & 0x8000u) == 0LL) {
      LODWORD(v126) = (SHIDWORD(v127) >> 16) & ~(SHIDWORD(v127) >> 31);
    }
    v132 = (float)(__int16)v127;
    v135 = (int)(float)((float)(v133 + (float)(v132 * v131)) * v130);
    if (v134 >= v135) {
      v136 = (int)(float)((float)(v133 + (float)(v132 * v131)) * v130);
    }
    else {
      LOWORD(v136) = v134;
    }
    if ((int)v126 <= v135) {
      LOWORD(v126) = v136;
    }
    goto LABEL_196;
  }
  if ((*(_BYTE*)(v2 + 11277) & 0x80) == 0 && *(_QWORD*)(result + 32) != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                              memory_order_acquire) &
         1) == 0) {
      result = __cxa_guard_acquire_alt1(&GameData_21d41b0);
      if ((_DWORD)result != 0) {
        GameRoutine_799290_alt1(&GameData_21d40b8_alt1);
        result = __cxa_guard_release(&GameData_21d41b0);
      }
    }
    v6 = *(_QWORD*)(v3 + 168);
    if (v6 != 0) {
      v7 = (_WORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 136) +
                               8 * ((unsigned __int64)(v6 +
                                                       *(_QWORD*)(v3 + 160) -
                                                       1) >>
                                    4)) +
                    244LL * (((_DWORD)v6 + *(_DWORD*)(v3 + 160) - 1) & 0xF));
    }
    else {
      v7 = &GameData_21d40b8_alt1;
    }
    *v7 = 0;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                              memory_order_acquire) &
         1) == 0) {
      result = __cxa_guard_acquire_alt1(&GameData_21d41b0);
      if ((_DWORD)result != 0) {
        GameRoutine_799290_alt1(&GameData_21d40b8_alt1);
        result = __cxa_guard_release(&GameData_21d41b0);
      }
    }
    v49 = *(_QWORD*)(v3 + 168);
    if (v49 != 0) {
      v50 = (_WORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 136) +
                                8 * ((unsigned __int64)(v49 +
                                                        *(_QWORD*)(v3 + 160) -
                                                        1) >>
                                     4)) +
                     244LL * (((_DWORD)v49 + *(_DWORD*)(v3 + 160) - 1) & 0xF));
    }
    else {
      v50 = &GameData_21d40b8_alt1;
    }
    v50[8] = 0;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                              memory_order_acquire) &
         1) == 0) {
      result = __cxa_guard_acquire_alt1(&GameData_21d41b0);
      if ((_DWORD)result != 0) {
        GameRoutine_799290_alt1(&GameData_21d40b8_alt1);
        result = __cxa_guard_release(&GameData_21d41b0);
      }
    }
    v51 = *(_QWORD*)(v3 + 168);
    if (v51 != 0) {
      v52 = (_WORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 136) +
                                8 * ((unsigned __int64)(v51 +
                                                        *(_QWORD*)(v3 + 160) -
                                                        1) >>
                                     4)) +
                     244LL * (((_DWORD)v51 + *(_DWORD*)(v3 + 160) - 1) & 0xF));
    }
    else {
      v52 = &GameData_21d40b8_alt1;
    }
    v52[16] = 0;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                              memory_order_acquire) &
         1) == 0) {
      result = __cxa_guard_acquire_alt1(&GameData_21d41b0);
      if ((_DWORD)result != 0) {
        GameRoutine_799290_alt1(&GameData_21d40b8_alt1);
        result = __cxa_guard_release(&GameData_21d41b0);
      }
    }
    v53 = *(_QWORD*)(v3 + 168);
    if (v53 != 0) {
      v54 = (_WORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 136) +
                                8 * ((unsigned __int64)(v53 +
                                                        *(_QWORD*)(v3 + 160) -
                                                        1) >>
                                     4)) +
                     244LL * (((_DWORD)v53 + *(_DWORD*)(v3 + 160) - 1) & 0xF));
    }
    else {
      v54 = &GameData_21d40b8_alt1;
    }
    v54[24] = 0;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                              memory_order_acquire) &
         1) == 0) {
      result = __cxa_guard_acquire_alt1(&GameData_21d41b0);
      if ((_DWORD)result != 0) {
        GameRoutine_799290_alt1(&GameData_21d40b8_alt1);
        result = __cxa_guard_release(&GameData_21d41b0);
      }
    }
    v55 = *(_QWORD*)(v3 + 168);
    v56 = 0;
    if (v55 != 0) {
      goto LABEL_236;
    }
    goto LABEL_84;
  }
  return result;
}

__int64 BattleSide_79e8e0(_QWORD* a1)
{
  __int64 v1;
  __int64 (***v3)(_QWORD);

  v1 = a1[3];
  if (v1 != 0 && *(_QWORD*)(v1 + 392) != 0) {
    return 1;
  }
  if ((*(_BYTE*)(a1[1] + 11277LL) & 0x80) == 0) {
    v3 = (__int64 (***)(_QWORD))a1[4];
    if (v3 != nullptr && ((**v3)(v3) & 1) != 0) {
      return 1;
    }
  }
  return 0;
}

__int64 BattleSide_79e950(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  int v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;
  int v22;
  unsigned __int8 v23;
  __int64 v24;
  int v25;
  int v26;
  unsigned int v27;
  _BYTE* v28;
  char v29;
  char v30;
  _BYTE v31[4];

  v2 = *(_QWORD*)(result + 24);
  v3 = result;
  v4 = a2 + 12LL * *(unsigned __int8*)(result + 16);
  if (v2 != 0) {
    if ((*(_BYTE*)(*(_QWORD*)(result + 8) + 11278LL) & 1) == 0) {
      v5 = *(unsigned __int16*)(v4 + 16);
      v31[0] = 0;
      result = game_Unit_GetParam(v2, v31, 1);
      if (*(_WORD*)(v2 + 494) != 0 && v5 != *(unsigned __int16*)(v2 + 494)) {
        *(_WORD*)(v2 + 494) = 0;
      }
      if ((int)result >= (__int16)v5) {
        v7 = (__int16)v5;
      }
      else {
        v7 = result;
      }
      if ((v5 & 0x8000u) != 0) {
        v7 = 0;
      }
      if (v7 != *(__int16*)(v2 + 492)) {
        *(_WORD*)(v2 + 492) = v7;
      }
    }
    v8 = (__int64*)(v3 + 44);
    if (*(_WORD*)(v3 + 44) == 0) {
      v9 = *(unsigned int*)(v3 + 40);
      if ((v9 & 0x80000000) != 0) {
        v8 = &game_g_empty_item;
      }
      else {
        v8 = (__int64*)(*(_QWORD*)(v3 + 24) + 8 * v9 + 828);
      }
    }
    v10 = *(unsigned __int16*)v8;
    v11 = GameData_21c99b8;
    v12 = *(_QWORD*)(GameData_21c99b8 + 64);
    if (*(unsigned __int8*)(*(_QWORD*)(v12 + 8 * v10) + 72LL) > 7u ||
        (v13 = *(_QWORD*)(v3 + 520),
         (v14 =
              ((unsigned __int64)(unsigned int)GameData_21d97bc >> 5) & 0x7F) +
                 1 >
             (*(_QWORD*)(v3 + 528) - v13) >> 2) ||
        ((*(_DWORD*)(v13 + 4LL * (unsigned int)v14) >> GameData_21d97bc) & 1) ==
            0) {
      if ((*(_BYTE*)(*(_QWORD*)(v3 + 8) + 11276LL) & 0x40) == 0) {
        result = *(_QWORD*)(v3 + 64);
        if (result != 0) {
          result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)result + 552LL))(
              result, (unsigned int)*(__int16*)(v4 + 22));
          goto LABEL_25;
        }
        v15 = *(unsigned int*)(v3 + 40);
        if ((v15 & 0x80000000) == 0) {
          v16 = v2 + 8 * v15;
          v17 = *(unsigned __int16*)(v16 + 828);
          if (*(_WORD*)(v16 + 828) != 0) {
            v18 = v16 + 828;
            v19 = *(unsigned __int8*)(*(_QWORD*)(v12 + 8 * v17) + 87LL);
            v20 = *(_DWORD*)(v18 + 4) & 0xF;
            v21 = v20 * v19;
            v22 = v21 - *(__int16*)(v4 + 22);
            if (v21 >= v22) {
              LOBYTE(v21) = v21 - *(_WORD*)(v4 + 22);
            }
            if (v22 >= 0) {
              v23 = v21;
            }
            else {
              v23 = 0;
            }
            *(_BYTE*)(v18 + 2) = v23;
            v24 = *(_QWORD*)(*(_QWORD*)(v11 + 64) + 8 * v17);
            v25 = *(unsigned __int8*)(v24 + 87);
            if (*(_BYTE*)(v24 + 87) != 0 &&
                (unsigned int)(v26 = *(unsigned __int8*)(v24 + 72)) < 8) {
              v27 = v26 - 7;
              v28 = (_BYTE*)(v18 + 3);
              if (v27 <= 0xFFFFFFFD) {
                if (v20 * v25 <= (unsigned int)v23) {
                  v29 = 8;
                }
                else {
                  v29 = 0;
                }
                v30 = *v28 & 0xF7 | v29;
                goto LABEL_45;
              }
            }
            else {
              v28 = (_BYTE*)(v18 + 3);
            }
            v30 = *v28 & 0xF7;
          LABEL_45:
            *v28 = v30;
          }
        }
      }
    }
  }
LABEL_25:
  if ((*(_BYTE*)(*(_QWORD*)(v3 + 8) + 11277LL) & 0x80) == 0) {
    result = *(_QWORD*)(v3 + 32);
    if (result != 0) {
      return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)result + 312LL))(
          result, (unsigned int)*(__int16*)(v4 + 16));
    }
  }
  return result;
}

__int64 BattleSide_79eba0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  int v7;
  char v8;
  int v9;

  v1 = *(_QWORD*)(result + 24);
  if (v1 != 0) {
    v2 = *(unsigned int*)(result + 108);
    if ((_DWORD)v2 != *(unsigned __int8*)(v1 + 499)) {
      v3 = result;
      game_Unit_SetPollution(*(_QWORD*)(result + 24), v2);
      result = v3;
    }
    v4 = *(_QWORD*)(result + 8);
    v5 = *(unsigned int*)(v4 + 11256);
    if ((_DWORD)v5 != 0) {
      v6 = (_BYTE*)(v4 + 3068);
      while (*v6 != 12 || *(v6 - 2) != *(_BYTE*)(result + 16)) {
        --v5;
        v6 += 64;
        if (v5 == 0) {
          goto LABEL_15;
        }
      }
      v7 = *(char*)(v1 + 2092);
      if (v7 <= -1) {
        v7 = -1;
      }
      if ((unsigned int)(v7 + 1) < 0x64) {
        v8 = v7 + 1;
      }
      else {
        v8 = 100;
      }
      *(_BYTE*)(v1 + 2092) = v8;
    }
  LABEL_15:
    v9 = *(_DWORD*)(v1 + 416);
    if ((v9 & 0x10000000) == 0) {
      *(_DWORD*)(v1 + 416) = v9 | 0x10000000;
      GameRoutine_6c51e0(v1);
      GameRoutine_6c6da0(v1);
      result = GameRoutine_6c6ec0(v1);
      *(_DWORD*)(v1 + 416) &= ~0x10000000u;
    }
  }
  return result;
}

_QWORD* BattleSide_79ec90(_QWORD* a1, __int64 a2)
{
  __int64 v2;
  int v4;
  _QWORD* v5;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                            memory_order_acquire) &
       1) == 0) {
    v5 = a1;
    v4 = __cxa_guard_acquire(&GameData_21d41b0, a2);
    a1 = v5;
    if (v4 != 0) {
      GameRoutine_799290(GameData_21d40b8);
      __cxa_guard_release(&GameData_21d41b0);
      a1 = v5;
    }
  }
  v2 = a1[21];
  if (v2 != 0) {
    return (
        _QWORD*)(*(_QWORD*)(a1[17] +
                            8 * ((unsigned __int64)(v2 + a1[20] - 1) >> 4)) +
                 244LL * (((_DWORD)v2 + *((_DWORD*)a1 + 40) - 1) & 0xF));
  }
  else {
    return GameData_21d40b8;
  }
}

__int64 BattleSide_79ed40(__int64 a1, int a2)
{
  __int64 v2;
  int v3;
  unsigned __int64 v5;
  __int64 v7;
  unsigned __int64 v8;
  int v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  char v15;
  unsigned int v16;
  int v17;
  bool v18;
  int v19;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_DWORD*)(v2 + 11276);
  if ((v3 & 1) == 0) {
    return (unsigned int)a2;
  }
  v5 = GameData_21d9730 & 0xFFF;
  v19 = GameData_21d9730 & 0xFFF;
  if ((v3 & 0x20) != 0) {
    goto LABEL_23;
  }
  if ((GameData_21d9730 & 0xFFF) == 0 || *(_QWORD*)(a1 + 24) == 0) {
    goto LABEL_23;
  }
  v7 = *(_QWORD*)(a1 + 520);
  v8 = (*(_QWORD*)(a1 + 528) - v7) >> 2;
  if (v8 < (v5 >> 5) + 1 ||
      ((*(_DWORD*)(v7 + 4LL * (unsigned int)(v5 >> 5)) >> GameData_21d9730) &
       1) == 0) {
    goto LABEL_23;
  }
  v9 = *(unsigned __int16*)(v2 + 11288);
  if ((v3 & 0x10000) != 0) {
    v10 = ((unsigned __int64)(unsigned int)GameData_21d9828 >> 5) & 0x7F;
    if (v8 >= v10 + 1 &&
        ((*(_DWORD*)(v7 + 4LL * (unsigned int)v10) >> GameData_21d9828) & 1) !=
            0) {
      v9 |= 0x200u;
    }
    v11 = v2 + 760LL * *(unsigned __int8*)(a1 + 17);
    v12 = *(_QWORD*)(v11 + 544);
    v13 = *(_QWORD*)(v11 + 536);
    if (v10 + 1 <= (v12 - v13) >> 2 &&
        ((*(_DWORD*)(v13 + 4LL * (unsigned int)v10) >> GameData_21d9828) & 1) !=
            0) {
      v9 |= 0x200u;
    }
  }
  if ((v9 & ~*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                             8LL * (GameData_21d9730 & 0xFFF)) +
                                  248LL)) != 0 ||
      (v14 = a2,
       v15 = game_HasActiveSkill_843580(
           &v19, a1 + 520, v2 + 760LL * *(unsigned __int8*)(a1 + 17) + 536),
       a2 = v14, (v15 & 1) == 0)) {
  LABEL_23:
    v17 = a2 & ~(a2 >> 31);
    v16 = 100;
    v18 = v17 < 100;
  }
  else {
    v16 = 99;
    if (v14 <= 1) {
      v17 = 1;
    }
    else {
      v17 = v14;
    }
    v18 = v17 < 99;
  }
  if (v18) {
    return (unsigned int)v17;
  }
  else {
    return v16;
  }
}

bool BattleSide_79eea0(__int64 a1)
{
  __int64 v1;
  unsigned __int64 v2;
  __int64 v4;
  int v5;
  __int64 v6;
  unsigned __int64 v7;
  int v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v15;

  v1 = *(_QWORD*)(a1 + 24);
  v2 = GameData_21d9760 & 0xFFF;
  v15 = GameData_21d9760 & 0xFFF;
  if ((GameData_21d9760 & 0xFFF) == 0 || v1 == 0) {
    return false;
  }
  v4 = *(_QWORD*)(a1 + 8);
  v5 = *(_DWORD*)(v4 + 11276);
  if ((v5 & 0x20) != 0) {
    return false;
  }
  v6 = *(_QWORD*)(a1 + 520);
  v7 = (*(_QWORD*)(a1 + 528) - v6) >> 2;
  if (v7 < (v2 >> 5) + 1 ||
      ((*(_DWORD*)(v6 + 4LL * (unsigned int)(v2 >> 5)) >> GameData_21d9760) &
       1) == 0) {
    return false;
  }
  v8 = *(unsigned __int16*)(v4 + 11288);
  if ((v5 & 0x10000) != 0) {
    v9 = ((unsigned __int64)(unsigned int)GameData_21d9828 >> 5) & 0x7F;
    if (v7 >= v9 + 1 &&
        ((*(_DWORD*)(v6 + 4LL * (unsigned int)v9) >> GameData_21d9828) & 1) !=
            0) {
      v8 |= 0x200u;
    }
    v10 = v4 + 760LL * *(unsigned __int8*)(a1 + 17);
    v11 = *(_QWORD*)(v10 + 544);
    v12 = *(_QWORD*)(v10 + 536);
    if (v9 + 1 <= (v11 - v12) >> 2 &&
        ((*(_DWORD*)(v12 + 4LL * (unsigned int)v9) >> GameData_21d9828) & 1) !=
            0) {
      v8 |= 0x200u;
    }
  }
  return (v8 &
          ~*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                           8LL * (GameData_21d9760 & 0xFFF)) +
                                248LL)) == 0 &&
         (game_HasActiveSkill_843580(
              &v15, a1 + 520, v4 + 760LL * *(unsigned __int8*)(a1 + 17) + 536) &
          1) != 0 &&
         *(_BYTE*)(a1 + 16) == 1 &&
         (*(_BYTE*)(*(_QWORD*)(a1 + 8) + 11276LL) & 1) != 0;
}

__int64 BattleSide_79fd30(__int64 a1)
{
  __int64 v1;
  unsigned __int64 v2;
  __int64 v4;
  int v5;
  __int64 v6;
  unsigned __int64 v7;
  int v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v15;
  __int64 v17;
  int v18;
  __int64 v19;
  unsigned __int64 v20;
  int v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;

  v1 = *(_QWORD*)(a1 + 24);
  v2 = GameData_21d9788 & 0xFFF;
  v27 = GameData_21d9788 & 0xFFF;
  if ((GameData_21d9788 & 0xFFF) != 0 && v1 != 0) {
    v4 = *(_QWORD*)(a1 + 8);
    v5 = *(_DWORD*)(v4 + 11276);
    if ((v5 & 0x20) == 0) {
      v6 = *(_QWORD*)(a1 + 520);
      v7 = (*(_QWORD*)(a1 + 528) - v6) >> 2;
      if (v7 >= (v2 >> 5) + 1 &&
          ((*(_DWORD*)(v6 + 4LL * (unsigned int)(v2 >> 5)) >>
            GameData_21d9788) &
           1) != 0) {
        v8 = *(unsigned __int16*)(v4 + 11288);
        if ((v5 & 0x10000) != 0) {
          v9 = ((unsigned __int64)(unsigned int)GameData_21d9828 >> 5) & 0x7F;
          if (v7 >= v9 + 1 &&
              ((*(_DWORD*)(v6 + 4LL * (unsigned int)v9) >> GameData_21d9828) &
               1) != 0) {
            v8 |= 0x200u;
          }
          v10 = v4 + 760LL * *(unsigned __int8*)(a1 + 17);
          v11 = *(_QWORD*)(v10 + 544);
          v12 = *(_QWORD*)(v10 + 536);
          if (v9 + 1 <= (v11 - v12) >> 2 &&
              ((*(_DWORD*)(v12 + 4LL * (unsigned int)v9) >> GameData_21d9828) &
               1) != 0) {
            v8 |= 0x200u;
          }
        }
        if ((v8 & ~*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 +
                                                              64) +
                                                   8LL * (GameData_21d9788 &
                                                          0xFFF)) +
                                        248LL)) == 0) {
          v13 = a1;
          if ((game_HasActiveSkill_843580(
                   &v27, a1 + 520,
                   v4 + 760LL * *(unsigned __int8*)(a1 + 17) + 536) &
               1) != 0) {
            return 3;
          }
          v1 = *(_QWORD*)(v13 + 24);
          a1 = v13;
        }
      }
    }
  }
  v15 = GameData_21d978c & 0xFFF;
  v26 = GameData_21d978c & 0xFFF;
  if ((GameData_21d978c & 0xFFF) == 0 || v1 == 0) {
    return 1;
  }
  v17 = *(_QWORD*)(a1 + 8);
  v18 = *(_DWORD*)(v17 + 11276);
  if ((v18 & 0x20) != 0) {
    return 1;
  }
  v19 = *(_QWORD*)(a1 + 520);
  v20 = (*(_QWORD*)(a1 + 528) - v19) >> 2;
  if (v20 < (v15 >> 5) + 1 ||
      ((*(_DWORD*)(v19 + 4LL * (unsigned int)(v15 >> 5)) >> GameData_21d978c) &
       1) == 0) {
    return 1;
  }
  v21 = *(unsigned __int16*)(v17 + 11288);
  if ((v18 & 0x10000) != 0) {
    v22 = ((unsigned __int64)(unsigned int)GameData_21d9828 >> 5) & 0x7F;
    if (v20 >= v22 + 1 &&
        ((*(_DWORD*)(v19 + 4LL * (unsigned int)v22) >> GameData_21d9828) & 1) !=
            0) {
      v21 |= 0x200u;
    }
    v23 = v17 + 760LL * *(unsigned __int8*)(a1 + 17);
    v24 = *(_QWORD*)(v23 + 544);
    v25 = *(_QWORD*)(v23 + 536);
    if (v22 + 1 <= (v24 - v25) >> 2 &&
        ((*(_DWORD*)(v25 + 4LL * (unsigned int)v22) >> GameData_21d9828) & 1) !=
            0) {
      v21 |= 0x200u;
    }
  }
  if ((v21 &
       ~*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                        8LL * (GameData_21d978c & 0xFFF)) +
                             248LL)) != 0) {
    return 1;
  }
  if ((game_HasActiveSkill_843580(
           &v26, a1 + 520, v17 + 760LL * *(unsigned __int8*)(a1 + 17) + 536) &
       1) != 0) {
    return 2;
  }
  return 1;
}

__int64 BattleSide_79ff80(__int64 a1)
{
  __int64 v1;
  unsigned __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  unsigned __int64 v7;
  int v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  unsigned __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  unsigned __int64 v19;
  int v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char v26;
  __int64* v27;
  __int64 v28;
  int v29;
  int v30;

  if (*(_QWORD*)(a1 + 24) == 0) {
    return 0;
  }
  v1 = *(_QWORD*)(a1 + 56);
  if (v1 != 0 && *(_BYTE*)(v1 + 104) == 5) {
    return *(unsigned __int8*)(v1 + 250) == 8;
  }
  v3 = GameData_21d976c & 0xFFF;
  v30 = GameData_21d976c & 0xFFF;
  if ((GameData_21d976c & 0xFFF) == 0) {
    goto LABEL_19;
  }
  v4 = *(_QWORD*)(a1 + 8);
  v5 = *(_DWORD*)(v4 + 11276);
  if ((v5 & 0x20) != 0) {
    goto LABEL_19;
  }
  v6 = *(_QWORD*)(a1 + 520);
  v7 = (*(_QWORD*)(a1 + 528) - v6) >> 2;
  if (v7 < (v3 >> 5) + 1 ||
      ((*(_DWORD*)(v6 + 4LL * (unsigned int)(v3 >> 5)) >> GameData_21d976c) &
       1) == 0) {
    goto LABEL_19;
  }
  v8 = *(unsigned __int16*)(v4 + 11288);
  if ((v5 & 0x10000) != 0) {
    v9 = ((unsigned __int64)(unsigned int)GameData_21d9828 >> 5) & 0x7F;
    if (v7 >= v9 + 1 &&
        ((*(_DWORD*)(v6 + 4LL * (unsigned int)v9) >> GameData_21d9828) & 1) !=
            0) {
      v8 |= 0x200u;
    }
    v10 = v4 + 760LL * *(unsigned __int8*)(a1 + 17);
    v11 = *(_QWORD*)(v10 + 544);
    v12 = *(_QWORD*)(v10 + 536);
    if (v9 + 1 <= (v11 - v12) >> 2 &&
        ((*(_DWORD*)(v12 + 4LL * (unsigned int)v9) >> GameData_21d9828) & 1) !=
            0) {
      v8 |= 0x200u;
    }
  }
  if ((v8 & ~*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                             8LL * (GameData_21d976c & 0xFFF)) +
                                  248LL)) != 0) {
  LABEL_19:
    v14 = false;
  }
  else {
    v13 = a1;
    if ((game_HasActiveSkill_843580(
             &v30, a1 + 520, v4 + 760LL * *(unsigned __int8*)(a1 + 17) + 536) &
         1) != 0) {
      return 1;
    }
    a1 = v13;
    v14 = *(_QWORD*)(v13 + 24) == 0;
  }
  v15 = GameData_21d9764 & 0xFFF;
  v29 = GameData_21d9764 & 0xFFF;
  if ((GameData_21d9764 & 0xFFF) != 0 && !v14) {
    v16 = *(_QWORD*)(a1 + 8);
    v17 = *(_DWORD*)(v16 + 11276);
    if ((v17 & 0x20) == 0) {
      v18 = *(_QWORD*)(a1 + 520);
      v19 = (*(_QWORD*)(a1 + 528) - v18) >> 2;
      if (v19 >= (v15 >> 5) + 1 &&
          ((*(_DWORD*)(v18 + 4LL * (unsigned int)(v15 >> 5)) >>
            GameData_21d9764) &
           1) != 0) {
        v20 = *(unsigned __int16*)(v16 + 11288);
        if ((v17 & 0x10000) != 0) {
          v21 = ((unsigned __int64)(unsigned int)GameData_21d9828 >> 5) & 0x7F;
          if (v19 >= v21 + 1 &&
              ((*(_DWORD*)(v18 + 4LL * (unsigned int)v21) >> GameData_21d9828) &
               1) != 0) {
            v20 |= 0x200u;
          }
          v22 = v16 + 760LL * *(unsigned __int8*)(a1 + 17);
          v23 = *(_QWORD*)(v22 + 544);
          v24 = *(_QWORD*)(v22 + 536);
          if (v21 + 1 <= (v23 - v24) >> 2 &&
              ((*(_DWORD*)(v24 + 4LL * (unsigned int)v21) >> GameData_21d9828) &
               1) != 0) {
            v20 |= 0x200u;
          }
        }
        if ((v20 &
             ~*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 +
                                                         64) +
                                              8LL *
                                                  (GameData_21d9764 & 0xFFF)) +
                                   248LL)) == 0) {
          v25 = a1;
          v26 = game_HasActiveSkill_843580(
              &v29, a1 + 520, v16 + 760LL * *(unsigned __int8*)(a1 + 17) + 536);
          a1 = v25;
          if ((v26 & 1) != 0) {
            return 0;
          }
        }
      }
    }
  }
  v27 = (__int64*)(a1 + 44);
  if (*(_WORD*)(a1 + 44) == 0) {
    v28 = *(unsigned int*)(a1 + 40);
    if ((v28 & 0x80000000) != 0) {
      v27 = &game_g_empty_item;
    }
    else {
      v27 = (__int64*)(*(_QWORD*)(a1 + 24) + 8 * v28 + 828);
    }
  }
  return (unsigned int)*(
             unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                     64) +
                                          8LL * *(unsigned __int16*)v27) +
                               72LL) -
             5 <
         2;
}

__int64 BattleSide_7a0260(__int64 a1)
{
  __int64 v1;
  unsigned __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  unsigned __int64 v7;
  int v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  unsigned __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  unsigned __int64 v19;
  int v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char v26;
  __int64* v27;
  __int64 v28;
  int v29;
  int v30;

  if (*(_QWORD*)(a1 + 24) == 0) {
    return 0;
  }
  v1 = *(_QWORD*)(a1 + 56);
  if (v1 != 0 && *(_BYTE*)(v1 + 104) == 5) {
    return *(unsigned __int8*)(v1 + 250) == 8;
  }
  v3 = GameData_21d9770 & 0xFFF;
  v30 = GameData_21d9770 & 0xFFF;
  if ((GameData_21d9770 & 0xFFF) == 0) {
    goto LABEL_19;
  }
  v4 = *(_QWORD*)(a1 + 8);
  v5 = *(_DWORD*)(v4 + 11276);
  if ((v5 & 0x20) != 0) {
    goto LABEL_19;
  }
  v6 = *(_QWORD*)(a1 + 520);
  v7 = (*(_QWORD*)(a1 + 528) - v6) >> 2;
  if (v7 < (v3 >> 5) + 1 ||
      ((*(_DWORD*)(v6 + 4LL * (unsigned int)(v3 >> 5)) >> GameData_21d9770) &
       1) == 0) {
    goto LABEL_19;
  }
  v8 = *(unsigned __int16*)(v4 + 11288);
  if ((v5 & 0x10000) != 0) {
    v9 = ((unsigned __int64)(unsigned int)GameData_21d9828 >> 5) & 0x7F;
    if (v7 >= v9 + 1 &&
        ((*(_DWORD*)(v6 + 4LL * (unsigned int)v9) >> GameData_21d9828) & 1) !=
            0) {
      v8 |= 0x200u;
    }
    v10 = v4 + 760LL * *(unsigned __int8*)(a1 + 17);
    v11 = *(_QWORD*)(v10 + 544);
    v12 = *(_QWORD*)(v10 + 536);
    if (v9 + 1 <= (v11 - v12) >> 2 &&
        ((*(_DWORD*)(v12 + 4LL * (unsigned int)v9) >> GameData_21d9828) & 1) !=
            0) {
      v8 |= 0x200u;
    }
  }
  if ((v8 & ~*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                             8LL * (GameData_21d9770 & 0xFFF)) +
                                  248LL)) != 0) {
  LABEL_19:
    v14 = false;
  }
  else {
    v13 = a1;
    if ((game_HasActiveSkill_843580(
             &v30, a1 + 520, v4 + 760LL * *(unsigned __int8*)(a1 + 17) + 536) &
         1) != 0) {
      return 1;
    }
    a1 = v13;
    v14 = *(_QWORD*)(v13 + 24) == 0;
  }
  v15 = GameData_21d9768 & 0xFFF;
  v29 = GameData_21d9768 & 0xFFF;
  if ((GameData_21d9768 & 0xFFF) != 0 && !v14) {
    v16 = *(_QWORD*)(a1 + 8);
    v17 = *(_DWORD*)(v16 + 11276);
    if ((v17 & 0x20) == 0) {
      v18 = *(_QWORD*)(a1 + 520);
      v19 = (*(_QWORD*)(a1 + 528) - v18) >> 2;
      if (v19 >= (v15 >> 5) + 1 &&
          ((*(_DWORD*)(v18 + 4LL * (unsigned int)(v15 >> 5)) >>
            GameData_21d9768) &
           1) != 0) {
        v20 = *(unsigned __int16*)(v16 + 11288);
        if ((v17 & 0x10000) != 0) {
          v21 = ((unsigned __int64)(unsigned int)GameData_21d9828 >> 5) & 0x7F;
          if (v19 >= v21 + 1 &&
              ((*(_DWORD*)(v18 + 4LL * (unsigned int)v21) >> GameData_21d9828) &
               1) != 0) {
            v20 |= 0x200u;
          }
          v22 = v16 + 760LL * *(unsigned __int8*)(a1 + 17);
          v23 = *(_QWORD*)(v22 + 544);
          v24 = *(_QWORD*)(v22 + 536);
          if (v21 + 1 <= (v23 - v24) >> 2 &&
              ((*(_DWORD*)(v24 + 4LL * (unsigned int)v21) >> GameData_21d9828) &
               1) != 0) {
            v20 |= 0x200u;
          }
        }
        if ((v20 &
             ~*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 +
                                                         64) +
                                              8LL *
                                                  (GameData_21d9768 & 0xFFF)) +
                                   248LL)) == 0) {
          v25 = a1;
          v26 = game_HasActiveSkill_843580(
              &v29, a1 + 520, v16 + 760LL * *(unsigned __int8*)(a1 + 17) + 536);
          a1 = v25;
          if ((v26 & 1) != 0) {
            return 0;
          }
        }
      }
    }
  }
  v27 = (__int64*)(a1 + 44);
  if (*(_WORD*)(a1 + 44) == 0) {
    v28 = *(unsigned int*)(a1 + 40);
    if ((v28 & 0x80000000) != 0) {
      v27 = &game_g_empty_item;
    }
    else {
      v27 = (__int64*)(*(_QWORD*)(a1 + 24) + 8 * v28 + 828);
    }
  }
  return (unsigned int)*(
             unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                     64) +
                                          8LL * *(unsigned __int16*)v27) +
                               72LL) -
             5 <
         2;
}

__int64 BattleSide_7a0540(_QWORD* a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  int v5;
  int v6;
  bool v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64 v12;
  __int64 v13;
  int v14;
  bool v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  float* v22;
  __int64 v23;
  int v24;
  int v25;
  int v26;
  int v27;
  unsigned int v28;
  int v29;
  unsigned int v30;
  signed int v32;
  int v33;
  int v34;
  float v35;
  float v36;
  int v37;

  v2 = *(_QWORD*)(a2 + 24);
  if (v2 == 0) {
    return 0;
  }
  v3 = *(_DWORD*)(v2 + 1872) & 0xFFF;
  if ((*(_DWORD*)(v2 + 1872) & 0xFFF) == 0) {
    return 0;
  }
  v4 = *(_DWORD*)(a2 + 80) - *(_DWORD*)(a2 + 72);
  v5 = *(_DWORD*)(a2 + 84) - *(_DWORD*)(a2 + 76);
  if ((v5 | v4) < 0 ||
      ((v6 = *(_DWORD*)(v2 + 592), v4 < v6) ? (v7 = v5 < v6) : (v7 = false),
       !v7 || ((v8 = v4 + v6 * v5) & 0x80000000) != 0 ||
           *(char*)(*(_QWORD*)(v2 + 600) + 4LL * v8 + 2) <= 0)) {
    v9 = *(_QWORD*)(GameData_21c99b0 + 64);
    v10 = *(_QWORD*)(v9 + 8 * v3);
    if (*(_BYTE*)(v10 + 273) != 0) {
      return 0;
    }
  }
  else {
    v9 = *(_QWORD*)(GameData_21c99b0 + 64);
    v10 = *(_QWORD*)(v9 + 8LL * (unsigned int)v3);
    if (v10 == 0) {
      return 0;
    }
  }
  v12 = *(_WORD*)(v10 + 16) & 0xFFF;
  v13 = *(_QWORD*)(a2 + 8);
  v37 = *(_WORD*)(v10 + 16) & 0xFFF;
  v14 = *(_DWORD*)(v13 + 11276);
  v15 = (v14 & 1) == 0;
  if ((_DWORD)v12 != 0) {
    if ((v14 & 1) == 0) {
      goto LABEL_24;
    }
    v16 = *(_QWORD*)(v9 + 8 * v12);
    if (v16 == *(_QWORD*)(a2 + 56) && (*(_WORD*)(v16 + 754) & 0x4000) == 0) {
      v17 = a1;
      v18 = a2;
      goto LABEL_26;
    }
    v15 = false;
  }
  if (!v15 && (v14 & 0xC000000) != 0xC000000) {
    v17 = a1;
    v19 = a2;
    v20 = 2;
    v18 = a2;
    goto LABEL_25;
  }
LABEL_24:
  v17 = a1;
  v19 = a2;
  v18 = a2;
  v20 = 0;
LABEL_25:
  if ((BattleSide_7a17c0_alt1(v19, &v37, v20, 0) & 1) == 0) {
    return 0;
  }
LABEL_26:
  if (v17[3] == 0) {
    return 0;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21d41b0, a2) != 0) {
    GameRoutine_799290(GameData_21d40b8);
    __cxa_guard_release(&GameData_21d41b0);
  }
  v21 = v17[21];
  if (v21 != 0) {
    v22 =
        (float*)(*(_QWORD*)(v17[17] +
                            8 * ((unsigned __int64)(v21 + v17[20] - 1) >> 4)) +
                 244LL * (((_DWORD)v21 + *((_DWORD*)v17 + 40) - 1) & 0xF));
    v23 = *(_QWORD*)(v18 + 24);
    if (v23 == 0) {
      goto LABEL_46;
    }
  }
  else {
    v22 = (float*)GameData_21d40b8;
    v23 = *(_QWORD*)(v18 + 24);
    if (v23 == 0) {
      goto LABEL_46;
    }
  }
  v24 = *(_DWORD*)(v18 + 80) - *(_DWORD*)(v18 + 72);
  v25 = *(_DWORD*)(v18 + 84) - *(_DWORD*)(v18 + 76);
  if (((v25 | v24) & 0x80000000) == 0 &&
      (*(_DWORD*)(v23 + 1872) & 0xFFF) != 0) {
    v26 = *(_DWORD*)(v23 + 592);
    v27 = 0;
    if (v24 < v26 && v25 < v26) {
      v28 = v24 + v26 * v25;
      if ((v28 & 0x80000000) == 0) {
        v27 = *(char*)(*(_QWORD*)(v23 + 600) + 4LL * v28 + 2);
        goto LABEL_41;
      }
    LABEL_40:
      v27 = 0;
    }
  LABEL_41:
    v29 =
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                       8LL * (*(_DWORD*)(v23 + 1872) & 0xFFF)) +
                            273LL);
    v30 = *(unsigned __int16*)(v10 + 256);
    if (v29 != 0 && v30 >= 2) {
      v33 = (int)((v29 - v27) * v30) / v29;
      v34 = v30 - 1;
      if ((int)(v30 - 1) >= v33) {
        v34 = v33;
      }
      if (v33 >= 0) {
        v32 = v34;
      }
      else {
        v32 = 0;
      }
    }
    else {
      v32 = 0;
    }
    goto LABEL_52;
  }
  if ((*(_DWORD*)(v23 + 1872) & 0xFFF) != 0) {
    goto LABEL_40;
  }
LABEL_46:
  v30 = *(unsigned __int16*)(v10 + 256);
  v32 = 0;
LABEL_52:
  v35 = 0.0;
  if (v32 < (int)v30) {
    v35 = (float)*(__int16*)(*(_QWORD*)(v10 + 264) + 2LL * v32);
  }
  v36 = v35 / 100.0;
  if (v36 >= 1.0) {
    v22[2] = (float)(v36 + -1.0) + v22[2];
  }
  else {
    v22[3] = v36 * v22[3];
  }
  return 1;
}

__int64 game_map_BattleSide_CalculateTerrain(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned int v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  _WORD* v7;
  __int16 v8;
  __int16 v9;
  __int16 v10;
  __int16 v11;
  __int16 v12;
  __int16 v13;
  __int16 v14;
  unsigned __int16 v15;
  _QWORD v16[4];
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  unsigned __int16 v20;

  v1 = *(_QWORD*)(result + 24);
  if (v1 == 0) {
    return result;
  }
  v2 = result;
  v20 = 0;
  v18 = 0;
  v19 = 0;
  if (GameRoutine_79d430(result)) {
    v3 = *(_DWORD*)(v2 + 80);
    v4 = *(_DWORD*)(v2 + 84);
    v16[0] = GameData_1f989f8;
    v16[1] = &v18;
    v17 = v16;
    GameRoutine_756f00(v1, v3, v4, (__int64)v16);
    if (v17 == v16) {
      v5 = 32;
    }
    else {
      if (v17 == nullptr) {
        goto LABEL_8;
      }
      v5 = 40;
    }
    (*(void (**)(__int64))(*v17 + v5))((__int64)v17);
  }
LABEL_8:
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_alt1(&GameData_21d41b0) != 0) {
    GameRoutine_799290_alt1(&GameData_21d40b8_alt1);
    __cxa_guard_release(&GameData_21d41b0);
  }
  v6 = *(_QWORD*)(v2 + 168);
  if (v6 != 0) {
    v7 = (_WORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 136) +
                             8 * ((unsigned __int64)(v6 + *(_QWORD*)(v2 + 160) -
                                                     1) >>
                                  4)) +
                  244LL * (((_DWORD)v6 + *(_DWORD*)(v2 + 160) - 1) & 0xF));
  }
  else {
    v7 = &GameData_21d40b8_alt1;
  }
  v8 = WORD1(v18);
  v9 = WORD2(v18);
  v10 = HIWORD(v18);
  v11 = v19;
  v12 = WORD1(v19);
  v13 = WORD2(v19);
  v14 = HIWORD(v19);
  v15 = v20;
  result = HIWORD(v19) | (unsigned int)v20;
  if ((WORD1(v18) | (unsigned __int16)v18 | WORD2(v18) | HIWORD(v18) |
       (unsigned __int16)v19 | WORD1(v19) | WORD2(v19) |
       (unsigned int)result) != 0) {
    v7[113] = v18;
    v7[114] = v8;
    v7[115] = v11;
    v7[116] = v13;
    v7[119] = v14;
    v7[117] = v15;
    v7[120] = v9;
    v7[121] = v10;
    v7[118] = v12;
  }
  else {
    v7[121] = 0;
    *(_QWORD*)(v7 + 117) = 0;
    *(_QWORD*)(v7 + 113) = 0;
  }
  return result;
}

__int64 BattleSide_7a0e10(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v3;
  _WORD* v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int16* v19;
  __int16 v20;
  __int16 v21;
  __int16 v22;
  __int16 v23;
  __int16 v24;
  __int16 v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  __int64 v44;
  _QWORD v45[3];
  _QWORD v46[3];

  *(_WORD*)(result + 16) = 0;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  if (a3 != 0) {
    v3 = *(_QWORD*)(a2 + 392);
    v6 = (_WORD*)result;
    v46[0] = a2;
    v46[1] = v3;
    if (v3 != 0) {
      v3 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 24) + 1784LL) + 272LL);
    }
    v46[2] = v3;
    v7 = *(_QWORD*)(a3 + 392);
    v45[0] = a3;
    v45[1] = v7;
    if (v7 != 0) {
      v7 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v7 + 24) + 1784LL) + 272LL);
    }
    v8 = *(_QWORD*)(game_GameModeData_instance_ + 128);
    v45[2] = v7;
    v9 = GameReliance_8e17a0(v8, v46, v45);
    if ((v9 & 0x80000000) != 0) {
      v44 = 0;
      v20 = 0;
      v21 = 0;
      v22 = 0;
      v23 = 0;
      v24 = 0;
      LOWORD(v11) = 0;
      v25 = 0;
    }
    else {
      v10 = *(_QWORD*)(v8 + 8) + 56LL * v9;
      v11 = *(unsigned __int8*)(v10 + 11);
      if (*(_BYTE*)(v10 + 11) != 0) {
        v12 = game_Unit_GetJob(a3);
        if (v12 != 0 && (v13 = *(_QWORD*)(v12 + 64)) != 0 &&
            (v15 = *(__int64**)(v13 + 40), v14 = *v15, v16 = v15[1] - *v15,
             v17 = (unsigned __int64)v16 >> 3,
             (int)((unsigned __int64)v16 >> 3) >= 1)) {
          if ((unsigned int)v17 >= v11) {
            LODWORD(v17) = v11;
          }
          v18 = (unsigned int)(v17 - 1);
          if (v18 >= v16 >> 3) {
            GameRoutine_8d7580();
          }
          v19 = (__int16*)(*(_QWORD*)(v14 + 8 * v18) + 32LL);
        }
        else {
          v19 = (__int16*)&GameData_21ca4b0;
        }
        v26 = *v19;
        if (v26 <= -100) {
          v26 = -100;
        }
        if (v26 >= 100) {
          v25 = 100;
        }
        else {
          v25 = v26;
        }
        v27 = v19[1];
        *v6 = v25;
        if (v27 <= -100) {
          v27 = -100;
        }
        if (v27 >= 100) {
          LOWORD(v11) = 100;
        }
        else {
          LOWORD(v11) = v27;
        }
        v28 = v19[2];
        v6[1] = v11;
        if (v28 <= -100) {
          v28 = -100;
        }
        if (v28 >= 100) {
          v24 = 100;
        }
        else {
          v24 = v28;
        }
        v29 = v19[3];
        v6[2] = v24;
        if (v29 <= -100) {
          v29 = -100;
        }
        if (v29 >= 100) {
          v23 = 100;
        }
        else {
          v23 = v29;
        }
        v30 = v19[4];
        v6[3] = v23;
        if (v30 <= -100) {
          v30 = -100;
        }
        if (v30 >= 100) {
          v22 = 100;
        }
        else {
          v22 = v30;
        }
        v31 = v19[5];
        v6[4] = v22;
        if (v31 <= -100) {
          v31 = -100;
        }
        if (v31 >= 100) {
          v21 = 100;
        }
        else {
          v21 = v31;
        }
        v32 = v19[6];
        v6[5] = v21;
        if (v32 <= -100) {
          v32 = -100;
        }
        if (v32 >= 100) {
          v20 = 100;
        }
        else {
          v20 = v32;
        }
        v33 = v19[7];
        v34 = v19[8];
        v6[6] = v20;
        if (v33 <= -100) {
          v33 = -100;
        }
        if (v33 >= 100) {
          LOWORD(v33) = 100;
        }
        if (v34 <= -100) {
          v34 = -100;
        }
        v6[7] = v33;
        if (v34 >= 100) {
          LOWORD(v34) = 100;
        }
        LOWORD(v44) = v33;
        WORD2(v44) = v34;
        v6[8] = v34;
      }
      else {
        v44 = 0;
        v20 = 0;
        v21 = 0;
        v22 = 0;
        v23 = 0;
        v24 = 0;
        v25 = 0;
      }
    }
    v46[0] = *(_QWORD*)(a2 + 392);
    v45[0] = *(_QWORD*)(a3 + 392);
    result = GameRoutine_8ca0c0(v46, v45);
    if (result != 0) {
      if ((__int16)(*(_WORD*)(result + 64) + v25) <= -100) {
        v35 = -100;
      }
      else {
        v35 = (__int16)(*(_WORD*)(result + 64) + v25);
      }
      if (v35 >= 100) {
        LOWORD(v35) = 100;
      }
      *v6 = v35;
      v36 = (__int16)(*(_WORD*)(result + 66) + v11);
      if (v36 <= -100) {
        v36 = -100;
      }
      if (v36 >= 100) {
        LOWORD(v36) = 100;
      }
      v6[1] = v36;
      v37 = (__int16)(*(_WORD*)(result + 68) + v24);
      if (v37 <= -100) {
        v37 = -100;
      }
      if (v37 >= 100) {
        LOWORD(v37) = 100;
      }
      v6[2] = v37;
      v38 = (__int16)(*(_WORD*)(result + 70) + v23);
      if (v38 <= -100) {
        v38 = -100;
      }
      if (v38 >= 100) {
        LOWORD(v38) = 100;
      }
      v6[3] = v38;
      v39 = (__int16)(*(_WORD*)(result + 72) + v22);
      if (v39 <= -100) {
        v39 = -100;
      }
      if (v39 >= 100) {
        LOWORD(v39) = 100;
      }
      v6[4] = v39;
      v40 = (__int16)(*(_WORD*)(result + 74) + v21);
      if (v40 <= -100) {
        v40 = -100;
      }
      if (v40 >= 100) {
        LOWORD(v40) = 100;
      }
      v6[5] = v40;
      v41 = (__int16)(*(_WORD*)(result + 76) + v20);
      if (v41 <= -100) {
        v41 = -100;
      }
      if (v41 >= 100) {
        LOWORD(v41) = 100;
      }
      v6[6] = v41;
      v42 = (__int16)(*(_WORD*)(result + 78) + v44);
      if ((__int16)v42 <= -100) {
        v42 = -100;
      }
      if (v42 >= 100) {
        LOWORD(v42) = 100;
      }
      v6[7] = v42;
      if ((__int16)(*(_WORD*)(result + 80) + WORD2(v44)) <= -100) {
        v43 = -100;
      }
      else {
        v43 = (__int16)(*(_WORD*)(result + 80) + WORD2(v44));
      }
      if (v43 >= 100) {
        LOWORD(v43) = 100;
      }
      v6[8] = v43;
    }
  }
  return result;
}

bool BattleSide_7a11b0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  unsigned int v3;
  int v4;
  unsigned int v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  unsigned int v11;
  int v12;

  v1 = *(_QWORD*)(a1 + 56);
  if (v1 != 0) {
    if ((((unsigned __int16)*GameData_212cf08[0] >> *(_BYTE*)(v1 + 104)) & 1) !=
            0 &&
        (v2 = *(_QWORD*)(v1 + 576)) != 0) {
      v3 = *(unsigned __int8*)(v2 + 72);
      v4 = *(unsigned __int8*)(v2 + 73);
      return v3 < 8 && v4 == 7;
    }
    else {
      return false;
    }
  }
  else {
    v7 = *(unsigned __int16*)(a1 + 44);
    if (*(_WORD*)(a1 + 44) != 0 ||
        ((int)(v8 = *(unsigned int*)(a1 + 40)) <= -1
             ? (v9 = &game_g_empty_item)
             : (v9 = (__int64*)(*(_QWORD*)(a1 + 24) + 8 * v8 + 828)),
         (v7 = *(unsigned __int16*)v9) != 0)) {
      v10 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v7);
      v11 = *(unsigned __int8*)(v10 + 72);
      v12 = *(unsigned __int8*)(v10 + 73);
      return v11 < 8 && v12 == 7;
    }
    else {
      return false;
    }
  }
}

unsigned __int64 BattleSide_7a1270(_QWORD* a1)
{
  char v2;
  __int64 v3;
  unsigned __int8 explicit;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  unsigned __int64 v9;
  int v10;
  int v11;

  v2 = BattleSide_79ff80((__int64)a1);
  explicit = atomic_load_explicit((atomic_uchar* volatile)&GameData_21d40b0,
                                  memory_order_acquire);
  if ((v2 & 1) != 0) {
    if ((explicit & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21d40b0, v3) != 0) {
      GameRoutine_799290(&GameData_21d3fb8);
      __cxa_guard_release(&GameData_21d40b0);
    }
    v5 = a1[21];
    if (v5 != 0) {
      v6 =
          (_QWORD*)(*(_QWORD*)(a1[17] +
                               8 * ((unsigned __int64)(v5 + a1[20] - 1) >> 4)) +
                    244LL * (((_DWORD)v5 + *((_DWORD*)a1 + 40) - 1) & 0xF));
    }
    else {
      v6 = &GameData_21d3fb8;
    }
    v9 = v6[10];
    v10 = *((unsigned __int16*)v6 + 114);
    v11 = *((unsigned __int16*)v6 + 105);
  }
  else {
    if ((explicit & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21d40b0, v3) != 0) {
      GameRoutine_799290(&GameData_21d3fb8);
      __cxa_guard_release(&GameData_21d40b0);
    }
    v7 = a1[21];
    if (v7 != 0) {
      v8 =
          (_QWORD*)(*(_QWORD*)(a1[17] +
                               8 * ((unsigned __int64)(v7 + a1[20] - 1) >> 4)) +
                    244LL * (((_DWORD)v7 + *((_DWORD*)a1 + 40) - 1) & 0xF));
    }
    else {
      v8 = &GameData_21d3fb8;
    }
    v9 = v8[10];
    v10 = *((unsigned __int16*)v8 + 113);
    v11 = *((unsigned __int16*)v8 + 104);
  }
  return ((v10 + v11 + (unsigned int)(v9 >> 16)) << 16) |
         v9 & 0xFFFFFFFF0000FFFFLL;
}

__int64 BattleSide_7a13b0(__int64 a1, int a2)
{
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  _BYTE* v17;
  bool v18;
  unsigned __int8* v19;
  int v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  _BYTE* v24;
  bool v25;
  unsigned __int8* v26;
  __int64 v27;
  unsigned __int8* v28;
  int v29;
  int v30;
  int v32;

  if ((GameRoutine_79d190(a1) & 1) == 0) {
    return 0;
  }
  v4 = *(_QWORD*)(a1 + 24);
  if (v4 == 0) {
    return 0;
  }
  v5 = *(_QWORD*)(a1 + 8);
  v6 = *(_DWORD*)(v5 + 11276);
  if ((v6 & 0x10004) == 0) {
    v8 = *(_QWORD*)(a1 + 56);
    if (v8 == 0 || *(_BYTE*)(v8 + 106) != 1) {
      v9 = GameData_21d977c & 0xFFF;
      v32 = GameData_21d977c & 0xFFF;
      if ((v6 & 0x20) != 0) {
        goto LABEL_15;
      }
      if ((GameData_21d977c & 0xFFF) == 0) {
        goto LABEL_15;
      }
      v10 = *(_QWORD*)(a1 + 520);
      if ((v9 >> 5) + 1 > (*(_QWORD*)(a1 + 528) - v10) >> 2) {
        goto LABEL_15;
      }
      if (((*(_DWORD*)(v10 + 4LL * (unsigned int)(v9 >> 5)) >>
            GameData_21d977c) &
           1) == 0) {
        goto LABEL_15;
      }
      v11 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                       8LL * (GameData_21d977c & 0xFFF));
      if (((unsigned int)BattleSide_7a1610_alt1(a1) &
           (*(unsigned __int16*)(v11 + 248) ^ 0xFFFF)) != 0) {
        goto LABEL_15;
      }
      if ((game_HasActiveSkill_843580(
               &v32, a1 + 520,
               v5 + 760LL * *(unsigned __int8*)(a1 + 17) + 536) &
           1) == 0) {
        v4 = *(_QWORD*)(a1 + 24);
        if (v4 == 0) {
          v20 = 0;
          v30 = 0;
          return v20 <= a2 && a2 <= v30;
        }
      LABEL_15:
        v12 = *(unsigned __int16*)(a1 + 44);
        v13 = v12;
        if (*(_WORD*)(a1 + 44) != 0 ||
            ((int)(v14 = *(unsigned int*)(a1 + 40)) <= -1
                 ? (v15 = &game_g_empty_item)
                 : (v15 = (__int64*)(v4 + 8 * v14 + 828)),
             (v13 = *(unsigned __int16*)v15) != 0)) {
          v16 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v13);
          v17 = *(_BYTE**)(v16 + 192);
          v18 = v17 == nullptr || *(unsigned __int8*)(v16 + 72) > 7u;
          if (v18 || v17[105] == 0) {
            v17 = nullptr;
          }
          else if (v17[104] == 2) {
            v17 = nullptr;
          }
          v19 = (unsigned __int8*)(v16 + 92);
          if (v17 != nullptr) {
            v19 = v17 + 278;
          }
          v20 = *v19;
          if (*(_WORD*)(a1 + 44) != 0) {
            goto LABEL_38;
          }
        }
        else {
          v20 = 0;
        }
        v21 = *(unsigned int*)(a1 + 40);
        if ((int)v21 <= -1) {
          v22 = &game_g_empty_item;
        }
        else {
          v22 = (__int64*)(v4 + 8 * v21 + 828);
        }
        v12 = *(unsigned __int16*)v22;
        if (v12 != 0) {
        LABEL_38:
          v23 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v12);
          v24 = *(_BYTE**)(v23 + 192);
          v25 = v24 == nullptr || *(unsigned __int8*)(v23 + 72) > 7u;
          if (v25 || v24[105] == 0) {
            v24 = nullptr;
          }
          else if (v24[104] == 2) {
            v24 = nullptr;
          }
          v26 = (unsigned __int8*)(v23 + 93);
          v27 = *(_QWORD*)(v23 + 24);
          if (v24 != nullptr) {
            v28 = v24 + 279;
          }
          else {
            v28 = v26;
          }
          v29 = *v28;
          v30 = GameRoutine_84edc0(v4 + 1744, v27 + 8) + v29;
          return v20 <= a2 && a2 <= v30;
        }
        v30 = 0;
        return v20 <= a2 && a2 <= v30;
      }
    }
  }
  return 1;
}

__int64 BattleSide_7a1610(__int64 a1)
{
  __int64 v1;
  __int64 result;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = *(_QWORD*)(a1 + 8);
  result = *(unsigned __int16*)(v1 + 11288);
  if ((*(_BYTE*)(v1 + 11278) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 520);
    v5 = ((unsigned __int64)(unsigned int)GameData_21d9828 >> 5) & 0x7F;
    if (v5 + 1 <= (*(_QWORD*)(a1 + 528) - v4) >> 2) {
      if (((*(_DWORD*)(v4 + 4LL * (unsigned int)v5) >> GameData_21d9828) & 1) !=
          0) {
        result = (unsigned int)result | 0x200;
      }
      else {
        result = *(unsigned __int16*)(v1 + 11288);
      }
    }
    v6 = v1 + 760LL * *(unsigned __int8*)(a1 + 17);
    v7 = *(_QWORD*)(v6 + 544);
    v8 = *(_QWORD*)(v6 + 536);
    if (v5 + 1 <= (v7 - v8) >> 2) {
      if (((*(_DWORD*)(v8 + 4LL * (unsigned int)v5) >> GameData_21d9828) & 1) !=
          0) {
        return (unsigned int)result | 0x200;
      }
      else {
        return (unsigned int)result;
      }
    }
  }
  return result;
}

__int64 BattleSide_7a16a0(__int64 a1, unsigned int* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  int v5;
  __int64 v6;
  unsigned __int64 v7;
  int v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v2 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(v2 + 11272) != 1) {
    return 0;
  }
  v3 = *a2;
  if ((v3 & 0xFFF) == 0 || *(_QWORD*)(a1 + 24) == 0) {
    return 0;
  }
  v5 = *(_DWORD*)(v2 + 11276);
  if ((v5 & 0x20) != 0) {
    return 0;
  }
  v6 = *(_QWORD*)(a1 + 520);
  v7 = (*(_QWORD*)(a1 + 528) - v6) >> 2;
  if (v7 < ((v3 >> 5) & 0x7F) + 1 ||
      ((*(_DWORD*)(v6 + 4 * ((v3 >> 5) & 0x7F)) >> v3) & 1) == 0) {
    return 0;
  }
  v8 = *(unsigned __int16*)(v2 + 11288);
  v9 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * (v3 & 0xFFF));
  if ((v5 & 0x10000) != 0) {
    v10 = ((unsigned __int64)(unsigned int)GameData_21d9828 >> 5) & 0x7F;
    if (v7 >= v10 + 1 &&
        ((*(_DWORD*)(v6 + 4LL * (unsigned int)v10) >> GameData_21d9828) & 1) !=
            0) {
      v8 |= 0x200u;
    }
    v11 = v2 + 760LL * *(unsigned __int8*)(a1 + 17);
    v12 = *(_QWORD*)(v11 + 544);
    v13 = *(_QWORD*)(v11 + 536);
    if (v10 + 1 <= (v12 - v13) >> 2 &&
        ((*(_DWORD*)(v13 + 4LL * (unsigned int)v10) >> GameData_21d9828) & 1) !=
            0) {
      v8 |= 0x200u;
    }
  }
  if ((v8 & ~*(unsigned __int16*)(v9 + 248)) != 0) {
    return 0;
  }
  else {
    return game_HasActiveSkill_843580(
        a2, a1 + 520, v2 + 760LL * *(unsigned __int8*)(a1 + 17) + 536);
  }
}

__int64 BattleSide_7a17c0(__int64 a1, _WORD* a2, unsigned __int8 a3)
{
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  char v23;
  char v24;

  if ((*a2 & 0xFFF) == 0 ||
      (game_HasActiveSkill_843580(
           a2, a1 + 520,
           *(_QWORD*)(a1 + 8) + 760LL * *(unsigned __int8*)(a1 + 17) + 536) &
       1) == 0) {
    goto LABEL_27;
  }
  v6 = *(_QWORD*)(a1 + 8);
  v7 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                  8LL * (*(_DWORD*)a2 & 0xFFF));
  v8 = *(unsigned __int16*)(v6 + 11288);
  if ((*(_BYTE*)(v6 + 11278) & 1) != 0) {
    v9 = *(_QWORD*)(a1 + 520);
    v10 = ((unsigned __int64)(unsigned int)GameData_21d9828 >> 5) & 0x7F;
    if (v10 + 1 <= (*(_QWORD*)(a1 + 528) - v9) >> 2 &&
        ((*(_DWORD*)(v9 + 4LL * (unsigned int)v10) >> GameData_21d9828) & 1) !=
            0) {
      v8 |= 0x200u;
    }
    v11 = v6 + 760LL * *(unsigned __int8*)(a1 + 17);
    v12 = *(_QWORD*)(v11 + 544);
    v13 = *(_QWORD*)(v11 + 536);
    if (v10 + 1 <= (v12 - v13) >> 2 &&
        ((*(_DWORD*)(v13 + 4LL * (unsigned int)v10) >> GameData_21d9828) & 1) !=
            0) {
      v8 |= 0x200u;
    }
  }
  if ((v8 & ~*(unsigned __int16*)(v7 + 248)) != 0) {
    goto LABEL_27;
  }
  if (*(unsigned __int8*)(a1 + 16) > 1u) {
    v15 = 1;
  }
  else {
    v14 = *(_DWORD*)(a1 + 112);
    if (*(_BYTE*)(a1 + 16) != 0) {
      v15 = 5;
    }
    else {
      v15 = 3;
    }
    v16 = v15 | 0x10;
    if (v14 == 1) {
      v15 |= 8u;
    }
    if (v14 == 2) {
      v15 = v16;
    }
  }
  if (((v15 >> *(_BYTE*)(v7 + 116)) & 1) != 0) {
    v17 = *(_QWORD*)(v7 + 24);
    v18 = *(_QWORD*)(v17 + 1048);
    v19 = *(_QWORD*)(v17 + 1040);
    if (v18 == v19) {
      LOBYTE(v21) = 1;
    }
    else {
      v20 = a3;
      v21 = 1;
      if (v20 == 1) {
        do {
          if ((unsigned int)*(unsigned __int16*)(v19 + 2) - 1016 >= 3) {
            v24 = GameRoutine_6fcf60((unsigned __int8*)v19, a1);
          }
          else {
            v24 = 1;
          }
          LOBYTE(v21) = v21 & v24;
          v19 += 8;
        } while (v19 != v18);
      }
      else if (v20 == 2) {
        do {
          if ((unsigned int)*(unsigned __int16*)(v19 + 2) - 1016 >= 3) {
            v23 = GameRoutine_6fcf60((unsigned __int8*)v19, a1);
          }
          else {
            v23 = 0;
          }
          LOBYTE(v21) = v21 & v23;
          v19 += 8;
        } while (v19 != v18);
      }
      else {
        do {
          v21 &= GameRoutine_6fcf60((unsigned __int8*)v19, a1);
          v19 += 8;
        } while (v19 != v18);
      }
    }
  }
  else {
  LABEL_27:
    LOBYTE(v21) = 0;
  }
  return v21 & 1;
}

__int64 BattleSide_7a1a00(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  int* v14;
  __int64 v15;
  int v16;
  __int64 v17;
  int v18;
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  int v33;
  __int64 v34;
  int v35;
  __int64 v36;
  int* v37;
  __int64 v38;
  int v39;
  __int64 v40;
  int v41;
  int v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 result;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  int v52;
  int v53;
  __int64 v54;
  int v55;
  __int64 v56;
  int* v57;
  __int64 v58;
  int v59;
  __int64 v60;
  int v61;
  int v62;
  int v63;
  __int64 v64;
  __int64 v65;
  int v66;

  if ((UnitSkillList_84cc00(a1 + 424, a2, 1) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 456);
    v4 = *(_QWORD*)(a1 + 464);
    *(_QWORD*)(a1 + 504) = 0;
    *(_QWORD*)(a1 + 512) = 0;
    v5 = v4 - v3;
    if ((int)((unsigned __int64)(v4 - v3) >> 2) >= 1) {
      v6 = (int)(v5 >> 2);
      v7 = v6 <= 1 ? 1LL : (int)(v5 >> 2);
      v8 = *GameData_212c880[0];
      if (v6 >= 2) {
        v14 = (int*)(v3 + 4);
        v9 = 0;
        v10 = 0;
        v11 = 0;
        v12 = 0;
        v13 = 0;
        do {
          v13 += 2;
          v15 = *(_QWORD*)(*(_QWORD*)(v8 + 64) + 8LL * (*(v14 - 1) & 0xFFF));
          v16 = v12 | (1 << *(_BYTE*)(v15 + 104));
          *(_WORD*)(a1 + 504) = v16;
          v17 = (1LL << *(_BYTE*)(v15 + 250)) | v11;
          *(_QWORD*)(a1 + 512) = v17;
          v18 = (1 << *(_BYTE*)(v15 + 115)) | v10;
          *(_DWORD*)(a1 + 508) = v18;
          v19 = *(unsigned __int16*)(*(_QWORD*)(v15 + 24) + 1064LL) | v9;
          *(_WORD*)(a1 + 506) = v19;
          v20 = *v14;
          v14 += 2;
          v21 = *(_QWORD*)(*(_QWORD*)(v8 + 64) + 8LL * (v20 & 0xFFF));
          v12 = v16 | (1 << *(_BYTE*)(v21 + 104));
          *(_WORD*)(a1 + 504) = v12;
          v11 = (1LL << *(_BYTE*)(v21 + 250)) | v17;
          *(_QWORD*)(a1 + 512) = v11;
          v10 = (1 << *(_BYTE*)(v21 + 115)) | v18;
          *(_DWORD*)(a1 + 508) = v10;
          v9 = *(unsigned __int16*)(*(_QWORD*)(v21 + 24) + 1064LL) | v19;
          *(_WORD*)(a1 + 506) = v9;
        } while ((v7 & 0x7FFFFFFFFFFFFFFELL) != v13);
      }
      else {
        LOWORD(v9) = 0;
        v10 = 0;
        v11 = 0;
        LOWORD(v12) = 0;
        v13 = 0;
      }
      if ((v7 & 1) != 0) {
        v22 = *(_QWORD*)(*(_QWORD*)(v8 + 64) +
                         8LL * (*(_DWORD*)(v3 + 4 * v13) & 0xFFF));
        *(_WORD*)(a1 + 504) = v12 | (1 << *(_BYTE*)(v22 + 104));
        *(_QWORD*)(a1 + 512) = (1LL << *(_BYTE*)(v22 + 250)) | v11;
        *(_DWORD*)(a1 + 508) = (1 << *(_BYTE*)(v22 + 115)) | v10;
        *(_WORD*)(a1 + 506) = *(_WORD*)(*(_QWORD*)(v22 + 24) + 1064LL) | v9;
      }
    }
  }
  v23 = *(_QWORD*)(a1 + 520);
  *(_DWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 600) = 0;
  *(_QWORD*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 528) = v23;
  *(_QWORD*)(a1 + 560) = *(_QWORD*)(a1 + 552);
  UnitSkillList_84cf20(a1 + 520, a1 + 424, 1);
  v24 = *(_QWORD*)(a1 + 56);
  if (v24 != 0) {
    LODWORD(v24) = *(_WORD*)(v24 + 16) & 0xFFF;
  }
  v25 = (_QWORD*)(a1 + 600);
  v66 = v24;
  if ((UnitSkillList_84cc00(a1 + 520, &v66, 1) & 1) != 0) {
    v26 = *(_QWORD*)(a1 + 560);
    v27 = *(_QWORD*)(a1 + 552);
    *v25 = 0;
    *(_QWORD*)(a1 + 608) = 0;
    v28 = v26 - v27;
    if ((int)((unsigned __int64)(v26 - v27) >> 2) >= 1) {
      v29 = (int)(v28 >> 2);
      v30 = v29 <= 1 ? 1LL : (int)(v28 >> 2);
      v31 = *GameData_212c880[0];
      if (v29 >= 2) {
        v37 = (int*)(v27 + 4);
        v32 = 0;
        v33 = 0;
        v34 = 0;
        v35 = 0;
        v36 = 0;
        do {
          v36 += 2;
          v38 = *(_QWORD*)(*(_QWORD*)(v31 + 64) + 8LL * (*(v37 - 1) & 0xFFF));
          v39 = v35 | (1 << *(_BYTE*)(v38 + 104));
          *(_WORD*)(a1 + 600) = v39;
          v40 = (1LL << *(_BYTE*)(v38 + 250)) | v34;
          *(_QWORD*)(a1 + 608) = v40;
          v41 = (1 << *(_BYTE*)(v38 + 115)) | v33;
          *(_DWORD*)(a1 + 604) = v41;
          v42 = *(unsigned __int16*)(*(_QWORD*)(v38 + 24) + 1064LL) | v32;
          *(_WORD*)(a1 + 602) = v42;
          v43 = *v37;
          v37 += 2;
          v44 = *(_QWORD*)(*(_QWORD*)(v31 + 64) + 8LL * (v43 & 0xFFF));
          v35 = v39 | (1 << *(_BYTE*)(v44 + 104));
          *(_WORD*)(a1 + 600) = v35;
          v34 = (1LL << *(_BYTE*)(v44 + 250)) | v40;
          *(_QWORD*)(a1 + 608) = v34;
          v33 = (1 << *(_BYTE*)(v44 + 115)) | v41;
          *(_DWORD*)(a1 + 604) = v33;
          v32 = *(unsigned __int16*)(*(_QWORD*)(v44 + 24) + 1064LL) | v42;
          *(_WORD*)(a1 + 602) = v32;
        } while ((v30 & 0x7FFFFFFFFFFFFFFELL) != v36);
      }
      else {
        LOWORD(v32) = 0;
        v33 = 0;
        v34 = 0;
        LOWORD(v35) = 0;
        v36 = 0;
      }
      if ((v30 & 1) != 0) {
        v45 = *(_QWORD*)(*(_QWORD*)(v31 + 64) +
                         8LL * (*(_DWORD*)(v27 + 4 * v36) & 0xFFF));
        *(_WORD*)(a1 + 600) = v35 | (1 << *(_BYTE*)(v45 + 104));
        *(_QWORD*)(a1 + 608) = (1LL << *(_BYTE*)(v45 + 250)) | v34;
        *(_DWORD*)(a1 + 604) = (1 << *(_BYTE*)(v45 + 115)) | v33;
        *(_WORD*)(a1 + 602) = *(_WORD*)(*(_QWORD*)(v45 + 24) + 1064LL) | v32;
      }
    }
  }
  UnitSkillList_84e640(a1 + 520);
  UnitSkillList_84e760(a1 + 520);
  v46 = *(_QWORD*)(a1 + 560);
  result = *(_QWORD*)(a1 + 552);
  *v25 = 0;
  *(_QWORD*)(a1 + 608) = 0;
  v48 = v46 - result;
  if ((int)((unsigned __int64)(v46 - result) >> 2) >= 1) {
    v49 = (int)(v48 >> 2);
    v50 = v49 <= 1 ? 1LL : (int)(v48 >> 2);
    v51 = *GameData_212c880[0];
    if (v49 >= 2) {
      v57 = (int*)(result + 4);
      v52 = 0;
      v53 = 0;
      v54 = 0;
      v55 = 0;
      v56 = 0;
      do {
        v56 += 2;
        v58 = *(_QWORD*)(*(_QWORD*)(v51 + 64) + 8LL * (*(v57 - 1) & 0xFFF));
        v59 = v55 | (1 << *(_BYTE*)(v58 + 104));
        *(_WORD*)(a1 + 600) = v59;
        v60 = (1LL << *(_BYTE*)(v58 + 250)) | v54;
        *(_QWORD*)(a1 + 608) = v60;
        v61 = (1 << *(_BYTE*)(v58 + 115)) | v53;
        *(_DWORD*)(a1 + 604) = v61;
        v62 = *(unsigned __int16*)(*(_QWORD*)(v58 + 24) + 1064LL) | v52;
        *(_WORD*)(a1 + 602) = v62;
        v63 = *v57;
        v57 += 2;
        v64 = *(_QWORD*)(*(_QWORD*)(v51 + 64) + 8LL * (v63 & 0xFFF));
        v55 = v59 | (1 << *(_BYTE*)(v64 + 104));
        *(_WORD*)(a1 + 600) = v55;
        v54 = (1LL << *(_BYTE*)(v64 + 250)) | v60;
        *(_QWORD*)(a1 + 608) = v54;
        v53 = (1 << *(_BYTE*)(v64 + 115)) | v61;
        *(_DWORD*)(a1 + 604) = v53;
        v52 = *(unsigned __int16*)(*(_QWORD*)(v64 + 24) + 1064LL) | v62;
        *(_WORD*)(a1 + 602) = v52;
      } while ((v50 & 0x7FFFFFFFFFFFFFFELL) != v56);
    }
    else {
      LOWORD(v52) = 0;
      v53 = 0;
      v54 = 0;
      LOWORD(v55) = 0;
      v56 = 0;
    }
    if ((v50 & 1) != 0) {
      v65 = *(_QWORD*)(*(_QWORD*)(v51 + 64) +
                       8LL * (*(_DWORD*)(result + 4 * v56) & 0xFFF));
      *(_WORD*)(a1 + 600) = v55 | (1 << *(_BYTE*)(v65 + 104));
      *(_QWORD*)(a1 + 608) = (1LL << *(_BYTE*)(v65 + 250)) | v54;
      *(_DWORD*)(a1 + 604) = (1 << *(_BYTE*)(v65 + 115)) | v53;
      *(_WORD*)(a1 + 602) = *(_WORD*)(*(_QWORD*)(v65 + 24) + 1064LL) | v52;
    }
  }
  if (result != v46) {
    return GameRoutine_8517e0();
  }
  return result;
}

__int64 BattleSide_7a1f40(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  int* v14;
  __int64 v15;
  int v16;
  __int64 v17;
  int v18;
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  int v33;
  __int64 v34;
  int v35;
  __int64 v36;
  int* v37;
  __int64 v38;
  int v39;
  __int64 v40;
  int v41;
  int v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 result;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  int v52;
  int v53;
  __int64 v54;
  int v55;
  __int64 v56;
  int* v57;
  __int64 v58;
  int v59;
  __int64 v60;
  int v61;
  int v62;
  int v63;
  __int64 v64;
  __int64 v65;
  int v66;

  if ((UnitSkillList_84d980(a1 + 424, a2) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 456);
    v4 = *(_QWORD*)(a1 + 464);
    *(_QWORD*)(a1 + 504) = 0;
    *(_QWORD*)(a1 + 512) = 0;
    v5 = v4 - v3;
    if ((int)((unsigned __int64)(v4 - v3) >> 2) >= 1) {
      v6 = (int)(v5 >> 2);
      v7 = v6 <= 1 ? 1LL : (int)(v5 >> 2);
      v8 = *GameData_212c880[0];
      if (v6 >= 2) {
        v14 = (int*)(v3 + 4);
        v9 = 0;
        v10 = 0;
        v11 = 0;
        v12 = 0;
        v13 = 0;
        do {
          v13 += 2;
          v15 = *(_QWORD*)(*(_QWORD*)(v8 + 64) + 8LL * (*(v14 - 1) & 0xFFF));
          v16 = v12 | (1 << *(_BYTE*)(v15 + 104));
          *(_WORD*)(a1 + 504) = v16;
          v17 = (1LL << *(_BYTE*)(v15 + 250)) | v11;
          *(_QWORD*)(a1 + 512) = v17;
          v18 = (1 << *(_BYTE*)(v15 + 115)) | v10;
          *(_DWORD*)(a1 + 508) = v18;
          v19 = *(unsigned __int16*)(*(_QWORD*)(v15 + 24) + 1064LL) | v9;
          *(_WORD*)(a1 + 506) = v19;
          v20 = *v14;
          v14 += 2;
          v21 = *(_QWORD*)(*(_QWORD*)(v8 + 64) + 8LL * (v20 & 0xFFF));
          v12 = v16 | (1 << *(_BYTE*)(v21 + 104));
          *(_WORD*)(a1 + 504) = v12;
          v11 = (1LL << *(_BYTE*)(v21 + 250)) | v17;
          *(_QWORD*)(a1 + 512) = v11;
          v10 = (1 << *(_BYTE*)(v21 + 115)) | v18;
          *(_DWORD*)(a1 + 508) = v10;
          v9 = *(unsigned __int16*)(*(_QWORD*)(v21 + 24) + 1064LL) | v19;
          *(_WORD*)(a1 + 506) = v9;
        } while ((v7 & 0x7FFFFFFFFFFFFFFELL) != v13);
      }
      else {
        LOWORD(v9) = 0;
        v10 = 0;
        v11 = 0;
        LOWORD(v12) = 0;
        v13 = 0;
      }
      if ((v7 & 1) != 0) {
        v22 = *(_QWORD*)(*(_QWORD*)(v8 + 64) +
                         8LL * (*(_DWORD*)(v3 + 4 * v13) & 0xFFF));
        *(_WORD*)(a1 + 504) = v12 | (1 << *(_BYTE*)(v22 + 104));
        *(_QWORD*)(a1 + 512) = (1LL << *(_BYTE*)(v22 + 250)) | v11;
        *(_DWORD*)(a1 + 508) = (1 << *(_BYTE*)(v22 + 115)) | v10;
        *(_WORD*)(a1 + 506) = *(_WORD*)(*(_QWORD*)(v22 + 24) + 1064LL) | v9;
      }
    }
  }
  v23 = *(_QWORD*)(a1 + 520);
  *(_DWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 600) = 0;
  *(_QWORD*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 528) = v23;
  *(_QWORD*)(a1 + 560) = *(_QWORD*)(a1 + 552);
  UnitSkillList_84cf20(a1 + 520, a1 + 424, 1);
  v24 = *(_QWORD*)(a1 + 56);
  if (v24 != 0) {
    LODWORD(v24) = *(_WORD*)(v24 + 16) & 0xFFF;
  }
  v25 = (_QWORD*)(a1 + 600);
  v66 = v24;
  if ((UnitSkillList_84cc00(a1 + 520, &v66, 1) & 1) != 0) {
    v26 = *(_QWORD*)(a1 + 560);
    v27 = *(_QWORD*)(a1 + 552);
    *v25 = 0;
    *(_QWORD*)(a1 + 608) = 0;
    v28 = v26 - v27;
    if ((int)((unsigned __int64)(v26 - v27) >> 2) >= 1) {
      v29 = (int)(v28 >> 2);
      v30 = v29 <= 1 ? 1LL : (int)(v28 >> 2);
      v31 = *GameData_212c880[0];
      if (v29 >= 2) {
        v37 = (int*)(v27 + 4);
        v32 = 0;
        v33 = 0;
        v34 = 0;
        v35 = 0;
        v36 = 0;
        do {
          v36 += 2;
          v38 = *(_QWORD*)(*(_QWORD*)(v31 + 64) + 8LL * (*(v37 - 1) & 0xFFF));
          v39 = v35 | (1 << *(_BYTE*)(v38 + 104));
          *(_WORD*)(a1 + 600) = v39;
          v40 = (1LL << *(_BYTE*)(v38 + 250)) | v34;
          *(_QWORD*)(a1 + 608) = v40;
          v41 = (1 << *(_BYTE*)(v38 + 115)) | v33;
          *(_DWORD*)(a1 + 604) = v41;
          v42 = *(unsigned __int16*)(*(_QWORD*)(v38 + 24) + 1064LL) | v32;
          *(_WORD*)(a1 + 602) = v42;
          v43 = *v37;
          v37 += 2;
          v44 = *(_QWORD*)(*(_QWORD*)(v31 + 64) + 8LL * (v43 & 0xFFF));
          v35 = v39 | (1 << *(_BYTE*)(v44 + 104));
          *(_WORD*)(a1 + 600) = v35;
          v34 = (1LL << *(_BYTE*)(v44 + 250)) | v40;
          *(_QWORD*)(a1 + 608) = v34;
          v33 = (1 << *(_BYTE*)(v44 + 115)) | v41;
          *(_DWORD*)(a1 + 604) = v33;
          v32 = *(unsigned __int16*)(*(_QWORD*)(v44 + 24) + 1064LL) | v42;
          *(_WORD*)(a1 + 602) = v32;
        } while ((v30 & 0x7FFFFFFFFFFFFFFELL) != v36);
      }
      else {
        LOWORD(v32) = 0;
        v33 = 0;
        v34 = 0;
        LOWORD(v35) = 0;
        v36 = 0;
      }
      if ((v30 & 1) != 0) {
        v45 = *(_QWORD*)(*(_QWORD*)(v31 + 64) +
                         8LL * (*(_DWORD*)(v27 + 4 * v36) & 0xFFF));
        *(_WORD*)(a1 + 600) = v35 | (1 << *(_BYTE*)(v45 + 104));
        *(_QWORD*)(a1 + 608) = (1LL << *(_BYTE*)(v45 + 250)) | v34;
        *(_DWORD*)(a1 + 604) = (1 << *(_BYTE*)(v45 + 115)) | v33;
        *(_WORD*)(a1 + 602) = *(_WORD*)(*(_QWORD*)(v45 + 24) + 1064LL) | v32;
      }
    }
  }
  UnitSkillList_84e640(a1 + 520);
  UnitSkillList_84e760(a1 + 520);
  v46 = *(_QWORD*)(a1 + 560);
  result = *(_QWORD*)(a1 + 552);
  *v25 = 0;
  *(_QWORD*)(a1 + 608) = 0;
  v48 = v46 - result;
  if ((int)((unsigned __int64)(v46 - result) >> 2) >= 1) {
    v49 = (int)(v48 >> 2);
    v50 = v49 <= 1 ? 1LL : (int)(v48 >> 2);
    v51 = *GameData_212c880[0];
    if (v49 >= 2) {
      v57 = (int*)(result + 4);
      v52 = 0;
      v53 = 0;
      v54 = 0;
      v55 = 0;
      v56 = 0;
      do {
        v56 += 2;
        v58 = *(_QWORD*)(*(_QWORD*)(v51 + 64) + 8LL * (*(v57 - 1) & 0xFFF));
        v59 = v55 | (1 << *(_BYTE*)(v58 + 104));
        *(_WORD*)(a1 + 600) = v59;
        v60 = (1LL << *(_BYTE*)(v58 + 250)) | v54;
        *(_QWORD*)(a1 + 608) = v60;
        v61 = (1 << *(_BYTE*)(v58 + 115)) | v53;
        *(_DWORD*)(a1 + 604) = v61;
        v62 = *(unsigned __int16*)(*(_QWORD*)(v58 + 24) + 1064LL) | v52;
        *(_WORD*)(a1 + 602) = v62;
        v63 = *v57;
        v57 += 2;
        v64 = *(_QWORD*)(*(_QWORD*)(v51 + 64) + 8LL * (v63 & 0xFFF));
        v55 = v59 | (1 << *(_BYTE*)(v64 + 104));
        *(_WORD*)(a1 + 600) = v55;
        v54 = (1LL << *(_BYTE*)(v64 + 250)) | v60;
        *(_QWORD*)(a1 + 608) = v54;
        v53 = (1 << *(_BYTE*)(v64 + 115)) | v61;
        *(_DWORD*)(a1 + 604) = v53;
        v52 = *(unsigned __int16*)(*(_QWORD*)(v64 + 24) + 1064LL) | v62;
        *(_WORD*)(a1 + 602) = v52;
      } while ((v50 & 0x7FFFFFFFFFFFFFFELL) != v56);
    }
    else {
      LOWORD(v52) = 0;
      v53 = 0;
      v54 = 0;
      LOWORD(v55) = 0;
      v56 = 0;
    }
    if ((v50 & 1) != 0) {
      v65 = *(_QWORD*)(*(_QWORD*)(v51 + 64) +
                       8LL * (*(_DWORD*)(result + 4 * v56) & 0xFFF));
      *(_WORD*)(a1 + 600) = v55 | (1 << *(_BYTE*)(v65 + 104));
      *(_QWORD*)(a1 + 608) = (1LL << *(_BYTE*)(v65 + 250)) | v54;
      *(_DWORD*)(a1 + 604) = (1 << *(_BYTE*)(v65 + 115)) | v53;
      *(_WORD*)(a1 + 602) = *(_WORD*)(*(_QWORD*)(v65 + 24) + 1064LL) | v52;
    }
  }
  if (result != v46) {
    return GameRoutine_8517e0();
  }
  return result;
}

__int64 BattleSide_7a2480(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v8;
  unsigned __int16* v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 result;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  char v19;
  int v20;
  __int64* v21;
  __int64 v22;
  int v23;
  struct {
    _QWORD v24[4];
    _QWORD* v25;
  } v24_;
  int v26;
  int v27;

  v3 = *(_QWORD*)(a1 + 24);
  if (v3 == 0) {
    return 0;
  }
  v4 = *(_QWORD*)(a1 + 8);
  v6 = *(unsigned __int8*)(a1 + 16);
  if (*(_BYTE*)(v4 + 11272) != 1 && (_DWORD)v6 != 0) {
    return 0;
  }
  v8 = *(_QWORD*)(a1 + 56);
  if (v8 != 0) {
    LODWORD(v8) = *(_WORD*)(v8 + 16) & 0xFFF;
  }
  v26 = v8;
  v9 = (unsigned __int16*)(a1 + 44);
  if (*(_WORD*)(a1 + 44) == 0) {
    v10 = *(unsigned int*)(a1 + 40);
    if ((int)v10 >= 0) {
      v9 = (unsigned __int16*)(v3 + 8 * v10 + 828);
    }
    else {
      v9 = (unsigned __int16*)&game_g_empty_item;
    }
  }
  v11 = *(unsigned int*)(v4 + 11256);
  v12 = v24_.v24;
  v27 = 0;
  v24_.v24[0] = GameData_1f98c80;
  v24_.v24[1] = v6;
  v24_.v25 = v24_.v24;
  v24_.v24[2] = &v27;
  if ((_DWORD)v11 == 0) {
    goto LABEL_24;
  }
  v13 = v4 + 3064;
  do {
    if ((unsigned int)*(unsigned __int8*)(v13 + 4) - 3 <= 1 &&
        (*(_BYTE*)(v13 + 12) & 2) != 0) {
      if (v24_.v25 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      (*(void (**)(_QWORD*, __int64))(*v24_.v25 + 48LL))(v24_.v25, v13);
    }
    --v11;
    v13 += 64;
  } while (v11 != 0);
  v12 = v24_.v25;
  if (v24_.v25 == v24_.v24) {
  LABEL_24:
    v15 = 32;
  }
  else {
    if (v24_.v25 == nullptr) {
      goto LABEL_26;
    }
    v15 = 40;
  }
  (*(void (**)(_QWORD*, __int64, __int64))(*v12 + v15))(v12, a2, a3);
LABEL_26:
  result = Unit_6cbdc0(v3, &v26, v9, v27);
  if ((_DWORD)result != 0) {
    v16 = *(_DWORD*)(a1 + 108);
    v17 = *(_QWORD*)(a1 + 24);
    if (v17 != 0 &&
        ((v18 = *(_QWORD*)(v17 + 440)) == 0 ? (v19 = 9)
                                            : (v19 = *(_BYTE*)(v18 + 16)),
         ((1 << v19) & 0xF1) != 0)) {
      v20 = result;
      v21 = game_820d50(2);
      if (game_GameModeData_instance_ != 0 &&
          (v22 = game_GameVariableTable_Find(
               *(_QWORD**)(game_GameModeData_instance_ + 48),
               (unsigned __int64*)v21)) != 0 &&
          *(_DWORD*)(v22 + 32) != 0) {
        v23 = 0;
      }
      else {
        LODWORD(v24_.v24[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xDCLL) +
                                          game_g_shared_system_skills_ptr) &
                               0xFFF;
        if ((game_HasSkill((_QWORD*)(v17 + 1744), (unsigned int*)v24_.v24) &
             1) != 0) {
          v23 = -12;
        }
        else {
          v23 = -6;
        }
      }
      LODWORD(result) = v20;
    }
    else {
      v23 = 0;
    }
    return ((v23 + v16) & ~((v23 + v16) >> 31)) + (unsigned int)result;
  }
  return result;
}

__int64 BattleSide_7a2950(_QWORD* a1, __int64 a2)
{
  __int64 v2;
  float* v3;
  __int64 result;
  int v5;
  float v6;
  float v7;
  float v8;
  float v9;
  int v10;
  bool v11;
  int v12;
  int v13;
  int v14;
  float v15;
  int v16;
  int v17;
  _QWORD* v18;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d40b0,
                            memory_order_acquire) &
       1) == 0) {
    v18 = a1;
    v17 = __cxa_guard_acquire(&GameData_21d40b0, a2);
    a1 = v18;
    if (v17 != 0) {
      GameRoutine_799290(&GameData_21d3fb8);
      __cxa_guard_release(&GameData_21d40b0);
      a1 = v18;
    }
  }
  v2 = a1[21];
  if (v2 != 0) {
    v3 = (float*)(*(_QWORD*)(a1[17] +
                             8 * ((unsigned __int64)(v2 + a1[20] - 1) >> 4)) +
                  244LL * (((_DWORD)v2 + *((_DWORD*)a1 + 40) - 1) & 0xF));
    result = (unsigned int)*((__int16*)v3 + 2);
    if ((result & 0x80000000) == 0) {
      return result;
    }
  }
  else {
    v3 = (float*)&GameData_21d3fb8;
    result = (unsigned int)GameData_21d3fbc;
    if ((result & 0x80000000) == 0) {
      return result;
    }
  }
  v5 = *(__int16*)v3;
  v6 = v3[2];
  v7 = v3[3];
  v8 = (float)v5;
  v9 = (float)*((__int16*)v3 + 1);
  v10 = *((__int16*)v3 + 3);
  v11 = v5 < 0;
  v12 = v10 & ~(v10 >> 31);
  v13 = v10 & (v10 >> 31);
  if (v5 >= 0) {
    v14 = 999;
  }
  else {
    v14 = 0;
  }
  v15 = v9 + (float)(v8 * v6);
  if (!v11) {
    v13 = v12;
  }
  v16 = (int)(float)(v7 * v15);
  if (v14 >= v16) {
    v14 = (int)(float)(v7 * v15);
  }
  if (v13 <= v16) {
    return (unsigned int)v14;
  }
  else {
    return (unsigned int)v13;
  }
}

void game_map_BattleSide_EachMaskSkill(__int64 a1, _DWORD* a2, char a3,
                                       __int64 a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  int v8;
  __int64 v9;
  __int64 v10;
  int v12;
  __int64 v13;
  int v14;
  __int64 v15;
  int v16;
  int v17;
  __int64 v18;
  _BYTE* v19;
  __int64 v20;
  _QWORD* v21;
  _QWORD* v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  __int64* v33;
  int v34;
  int v35;
  unsigned int v36;
  unsigned int v37;
  int v38;
  int v39;
  _DWORD* v40;
  _DWORD* v41;
  __int64* v42;
  void* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  _QWORD* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  struct {
    char gap8_[4];
    int v54;
    __int64 v55;
    __int64 v56;
    _QWORD* v57;
    __int64* v58;
  } v54_;
  struct {
    _BYTE v59[32];
    _BYTE* v60;
  } v59_;
  struct {
    _DWORD* v61;
    __int64 v62;
    __int64 v63;
  } v61_;
  struct {
    _QWORD v64[2];
    _QWORD* v65;
    __int64 v66;
    int v67;
  } v64_;
  _DWORD* v68[3];

  v4 = *(_QWORD*)(a1 + 8);
  v8 = *(_DWORD*)(v4 + 11276);
  if ((v8 & 1) == 0 && (*(_BYTE*)(a1 + 124) & 1) != 0) {
    return;
  }
  if ((v8 & 0x20) != 0) {
    return;
  }
  v9 = *(_QWORD*)(a1 + 24);
  if (v9 == 0 || (*a2 & *(_DWORD*)(a1 + 604)) == 0) {
    return;
  }
  v10 = *(_QWORD*)(v4 + 760LL * *(unsigned __int8*)(a1 + 17) + 40);
  if (v10 == 0 || v9 == v10) {
    v12 = 9;
    goto LABEL_29;
  }
  v13 = *(_QWORD*)(v9 + 440);
  if (v13 == 0) {
    v15 = *(_QWORD*)(v10 + 440);
    if (v15 == 0) {
      goto LABEL_20;
    }
    v14 = 9;
    goto LABEL_19;
  }
  v14 = *(unsigned __int8*)(v13 + 16);
  v15 = *(_QWORD*)(v10 + 440);
  if (v15 != 0) {
  LABEL_19:
    if (v14 != *(unsigned __int8*)(v15 + 16)) {
      v16 = *(unsigned __int8*)(v15 + 16);
      goto LABEL_22;
    }
  LABEL_20:
    v12 = 13;
    goto LABEL_29;
  }
  if (v14 == 9) {
    goto LABEL_20;
  }
  v16 = 9;
LABEL_22:
  v17 = *(unsigned __int8*)(v13 + 16);
  if (v17 == v16) {
    goto LABEL_28;
  }
  if (*(_BYTE*)(v13 + 16) != 0) {
    v12 = 11;
    if (v16 != 0 || v17 != 3) {
      goto LABEL_29;
    }
    goto LABEL_28;
  }
  if (v16 == 3) {
  LABEL_28:
    v12 = 25;
    goto LABEL_29;
  }
  v12 = 11;
LABEL_29:
  v18 = *(_QWORD*)(a4 + 32);
  LODWORD(v54_.v56) = (1 << a3) | 1;
  HIDWORD(v54_.v56) = v12;
  v64_.v66 = 0;
  v64_.v64[1] = 0;
  v64_.v65 = nullptr;
  v64_.v64[0] = 0;
  v61_.v62 = 0;
  v61_.v63 = 0;
  v61_.v61 = nullptr;
  v54_.v55 = a1;
  v64_.v67 = 1065353216;
  v54_.v57 = v64_.v64;
  v54_.v58 = (__int64*)&v61_.v61;
  if (v18 != 0) {
    if (v18 == a4) {
      v59_.v60 = v59_.v59;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v18 + 24LL))(v18, v59_.v59);
      v19 = v59_.v60;
    }
    else {
      v19 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
      v59_.v60 = v19;
    }
  }
  else {
    v19 = nullptr;
    v59_.v60 = nullptr;
  }
  v20 = fw_memory_g_heap_manager_ptr;
  v21 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
  v22 = v21;
  *v21 = GameData_1f98af8;
  v23 = v54_.v56;
  v21[2] = v54_.v55;
  v21[3] = v23;
  v24 = v54_.v58;
  v21[4] = v54_.v57;
  v21[5] = v24;
  if (v19 != nullptr) {
    if (v19 == v59_.v59) {
      v21[10] = v21 + 6;
      (*(void (**)(_BYTE*))(*(_QWORD*)v19 + 24LL))(v19);
    }
    else {
      v21[10] = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v19 + 16LL))(v19);
    }
  }
  else {
    v21[10] = 0;
  }
  if ((*a2 & *(_DWORD*)(a1 + 604)) != 0) {
    v25 = *(_QWORD*)(a1 + 560);
    v26 = *(_QWORD*)(a1 + 552);
    if ((int)((unsigned __int64)(v25 - v26) >> 2) >= 1) {
      v27 = 0;
      v28 = 0;
      v29 = GameData_212c880[0];
      v30 = *GameData_212c880[0];
      do {
        if (((*a2 >>
              *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v30 + 64) +
                                   8LL * (*(_DWORD*)(v26 + v27) & 0xFFF)) +
                        115LL)) &
             1) != 0) {
          (*(void (**)(_QWORD*, __int64))(*v22 + 48LL))(v22, v26 + v27);
          v30 = *v29;
          v25 = *(_QWORD*)(a1 + 560);
          v26 = *(_QWORD*)(a1 + 552);
        }
        ++v28;
        v27 += 4;
      } while (v28 < (int)((unsigned __int64)(v25 - v26) >> 2));
    }
  }
  (*(void (**)(_QWORD*))(*v22 + 40LL))(v22);
  if (v59_.v60 == v59_.v59) {
    v31 = 32;
    goto LABEL_49;
  }
  if (v59_.v60 != nullptr) {
    v31 = 40;
  LABEL_49:
    (*(void (**)(__int64))(*(_QWORD*)v59_.v60 + v31))((__int64)v59_.v60);
  }
  if (v64_.v66 != 0) {
    v32 = v64_.v65;
    if (v64_.v65 != nullptr) {
      v33 = game_map_MapRandom_instance__ptr[0];
      do {
        v34 = *((_DWORD*)v32 + 5);
        nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
        v35 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v33 + 8);
        v36 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v33 + 12);
        v37 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v33) ^
              (*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v33) << 11);
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v33) =
            *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v33 + 4);
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v33 + 4) = v35;
        v38 = (v37 >> 8) ^ (v36 >> 19) ^ v37 ^ v36;
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v33 + 8) = v36;
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v33 + 12) = v38;
        v39 = v38 & 0x7FFFFFFF;
        nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
        *((_DWORD*)v32 + 5) = v39 % v34;
        v32 = (_QWORD*)*v32;
      } while (v32 != nullptr);
    }
    v40 = v61_.v61;
    v41 = (_DWORD*)v61_.v62;
    if (v61_.v61 != (_DWORD*)v61_.v62) {
      v42 = GameData_212c880[0];
      v43 = std___1_piecewise_construct_ptr;
      do {
        v45 = *(_QWORD*)(*(_QWORD*)(*v42 + 64) + 8LL * (*v40 & 0xFFF));
        v68[0] = &v54_.v54;
        v54_.v54 = *(unsigned __int8*)(v45 + 113);
        if (*(_DWORD*)(BattleSide_7a69c0_alt1((float*)v64_.v64, &v54_.v54,
                                              (__int64)v43, v68) +
                       20) == 0) {
          v46 = *(_QWORD*)(a4 + 32);
          if (v46 == 0) {
            GameRoutine_60a310_alt1();
          }
          (*(void (**)(__int64, _DWORD*))(*(_QWORD*)v46 + 48LL))(v46, v40);
        }
        v68[0] = &v54_.v54;
        v44 = BattleSide_7a69c0_alt1((float*)v64_.v64, &v54_.v54, (__int64)v43,
                                     v68);
        ++v40;
        --*(_DWORD*)(v44 + 20);
      } while (v40 != v41);
    }
  }
  if (v61_.v61 != nullptr) {
    v47 = *(_QWORD*)v20;
    v61_.v62 = (__int64)v61_.v61;
    v48 = 128;
    if (*(_QWORD*)(v47 + 200) == 0) {
      v48 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v47 + v48, (__int64)v61_.v61);
  }
  v49 = v64_.v65;
  if (v64_.v65 != nullptr) {
    do {
      v50 = (_QWORD*)*v49;
      if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) != 0) {
        v51 = 128;
      }
      else {
        v51 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v20 + v51, (__int64)v49);
      v49 = v50;
    } while (v50 != nullptr);
  }
  v52 = v64_.v64[0];
  v64_.v64[0] = 0;
  if (v52 != 0) {
    v53 = 128;
    if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) == 0) {
      v53 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v20 + v53, v52);
  }
}

__int64 game_map_BattleSide_GetHealPower_lambda0_Invoke(__int64 a1, _WORD* a2)
{
  __int64 v2;
  int v3;
  _BOOL4 v4;
  unsigned __int8 v5;
  __int64 v6;
  int v7;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_DWORD*)(*(_QWORD*)(v2 + 8) + 11276LL);
  v4 = (v3 & 1) == 0;
  if ((*(_DWORD*)a2 & 0xFFF) == 0) {
  LABEL_9:
    v7 = (~v3 & 0xC000000) == 0 || v4;
    if (v7 != 0) {
      v5 = 0;
    }
    else {
      v5 = 2;
    }
    return BattleSide_7a17c0(v2, a2, v5);
  }
  if ((v3 & 1) == 0) {
    v5 = 0;
    return BattleSide_7a17c0(v2, a2, v5);
  }
  v6 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                  8LL * (*(_DWORD*)a2 & 0xFFF));
  if (v6 != *(_QWORD*)(v2 + 56) || (*(_WORD*)(v6 + 754) & 0x4000) != 0) {
    v4 = false;
    goto LABEL_9;
  }
  return 1;
}

__int64 BattleSide_7a4700(__int64 result, __int64* a2, __int64* a3,
                          unsigned __int64 a4, __int64* a5, __int64 a6)
{
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64 (***v15)();
  __int64* v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  bool v22;
  __int64 v23;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  bool v29;
  __int64 v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  bool v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  bool v44;
  __int64 v45;
  _QWORD* v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64* v49;
  unsigned __int64 v50;
  __int64 v52;
  _QWORD* v54;
  __int64 (***v55)();
  __int64 v56;
  __int64 v57;
  bool v58;
  __int64 v59;
  _QWORD* v60;
  __int64 (***v61)();
  __int64 v62;
  __int64* v64;
  __int64* v65;
  __int64* v66;
  __int64 (***v67)();
  __int64 (***v68)();
  unsigned int v69;
  unsigned int v70;
  bool v71;
  __int64* v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  bool v80;
  __int64 v81;
  __int64 (***v83)();
  __int64 v84;
  __int64 v85;
  bool v86;
  __int64 v87;
  _QWORD* v88;
  _QWORD* v89;
  __int64 v90;
  __int64 v91;
  _QWORD* v93;
  __int64 v94;
  struct {
    __int64 v95;
    __int64 v96;
    __int64 v97;
  } v95_;
  struct {
    __int64 v98;
    __int64 v99;
    __int64 v100;
  } v98_;

  if (a4 >= 2) {
    v7 = (__int64*)result;
    if (a4 == 2) {
      v8 = *(_QWORD*)result;
      v9 = *a3;
      v98_.v100 = 0;
      v10 = *(a2 - 1);
      v98_.v98 = v9;
      v98_.v99 = 0;
      if (v9 != 0) {
        v11 = *(_QWORD*)(v9 + 392);
        v98_.v99 = v11;
        if (v11 != 0) {
          v11 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v11 + 24) + 1784LL) + 272LL);
        }
        v98_.v100 = v11;
        v12 = v11 == 0;
        v95_.v95 = v10;
        if (v10 == 0) {
          goto LABEL_85;
        }
      }
      else {
        v12 = true;
        v95_.v95 = v10;
        if (v10 == 0) {
          goto LABEL_85;
        }
      }
      v52 = *(_QWORD*)(v10 + 392);
      v95_.v96 = v52;
      if (v52 != 0) {
        v95_.v97 =
            *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v52 + 24) + 1784LL) + 272LL);
        if (v95_.v97 != 0 && !v12) {
          v54 = *(_QWORD**)(game_GameModeData_instance_ + 128);
          result = GameReliance_8e17a0_alt1(v54, (__int64)&v98_.v98,
                                            (__int64)&v95_.v95);
          if ((result & 0x80000000) == 0) {
            v55 = (__int64 (***)(void))(v54[1] + 56LL * (unsigned int)result);
            goto LABEL_86;
          }
        }
      }
    LABEL_85:
      v55 = GameData_212dae8;
    LABEL_86:
      v56 = *a3;
      v98_.v100 = 0;
      v98_.v98 = v56;
      v98_.v99 = 0;
      if (v56 != 0) {
        v57 = *(_QWORD*)(v56 + 392);
        v98_.v99 = v57;
        if (v57 != 0) {
          v57 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v57 + 24) + 1784LL) + 272LL);
        }
        v98_.v100 = v57;
        v58 = v57 == 0;
        v95_.v95 = v8;
        if (v8 == 0) {
          goto LABEL_98;
        }
      }
      else {
        v58 = true;
        v95_.v95 = v8;
        if (v8 == 0) {
          goto LABEL_98;
        }
      }
      v59 = *(_QWORD*)(v8 + 392);
      v95_.v96 = v59;
      if (v59 != 0) {
        v95_.v97 =
            *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v59 + 24) + 1784LL) + 272LL);
        if (v95_.v97 == 0) {
          v58 = true;
        }
        if (!v58) {
          v60 = *(_QWORD**)(game_GameModeData_instance_ + 128);
          result = GameReliance_8e17a0_alt1(v60, (__int64)&v98_.v98,
                                            (__int64)&v95_.v95);
          if ((result & 0x80000000) == 0) {
            v61 = (__int64 (***)(void))(v60[1] + 56LL * (unsigned int)result);
            goto LABEL_99;
          }
        }
      }
    LABEL_98:
      v61 = GameData_212dae8;
    LABEL_99:
      if ((*((unsigned __int8*)v61 + 10) |
           (*((unsigned __int16*)v61 + 6) << 16)) <
          (unsigned int)(*((unsigned __int8*)v55 + 10) |
                         (*((unsigned __int16*)v55 + 6) << 16))) {
        v62 = *v7;
        *v7 = *(a2 - 1);
        *(a2 - 1) = v62;
      }
      return result;
    }
    if ((__int64)a4 <= 128) {
      if ((__int64*)result == a2) {
        return result;
      }
      v13 = (_QWORD*)(result + 8);
      if ((__int64*)(result + 8) == a2) {
        return result;
      }
      v94 = 0;
      v14 = (_QWORD*)result;
      v15 = GameData_212dae8;
    LABEL_16:
      v19 = v14;
      v18 = *v14;
      v17 = v19[1];
      v93 = v13;
      v20 = *a3;
      v98_.v99 = 0;
      v98_.v100 = 0;
      v98_.v98 = v20;
      if (v20 != 0) {
        v21 = *(_QWORD*)(v20 + 392);
        v98_.v99 = v21;
        if (v21 != 0) {
          v21 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v21 + 24) + 1784LL) + 272LL);
        }
        v98_.v100 = v21;
        v22 = v21 == 0;
        v95_.v95 = v17;
        if (v17 == 0) {
          goto LABEL_29;
        }
      }
      else {
        v22 = true;
        v95_.v95 = v17;
        if (v17 == 0) {
          goto LABEL_29;
        }
      }
      v23 = *(_QWORD*)(v17 + 392);
      v95_.v96 = v23;
      if (v23 != 0) {
        v95_.v97 =
            *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v23 + 24) + 1784LL) + 272LL);
        if (v95_.v97 != 0 && !v22) {
          v25 = *(_QWORD**)(game_GameModeData_instance_ + 128);
          result = GameReliance_8e17a0_alt1(v25, (__int64)&v98_.v98,
                                            (__int64)&v95_.v95);
          if ((result & 0x80000000) == 0) {
            v26 = v25[1] + 56LL * (unsigned int)result;
            goto LABEL_30;
          }
        }
      }
    LABEL_29:
      v26 = (__int64)v15;
    LABEL_30:
      v27 = *a3;
      v98_.v99 = 0;
      v98_.v100 = 0;
      v98_.v98 = v27;
      if (v27 != 0) {
        v28 = *(_QWORD*)(v27 + 392);
        v98_.v99 = v28;
        if (v28 != 0) {
          v28 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v28 + 24) + 1784LL) + 272LL);
        }
        v98_.v100 = v28;
        v29 = v28 == 0;
        v95_.v95 = v18;
        if (v18 == 0) {
          goto LABEL_42;
        }
      }
      else {
        v29 = true;
        v95_.v95 = v18;
        if (v18 == 0) {
          goto LABEL_42;
        }
      }
      v30 = *(_QWORD*)(v18 + 392);
      v95_.v96 = v30;
      if (v30 != 0) {
        v14 = v93;
        v95_.v97 =
            *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v30 + 24) + 1784LL) + 272LL);
        if (v95_.v97 == 0) {
          v29 = true;
        }
        if (!v29) {
          v31 = *(_QWORD**)(game_GameModeData_instance_ + 128);
          result = GameReliance_8e17a0_alt1(v31, (__int64)&v98_.v98,
                                            (__int64)&v95_.v95);
          if ((result & 0x80000000) == 0) {
            v32 = v31[1] + 56LL * (unsigned int)result;
          LABEL_44:
            if ((*(unsigned __int8*)(v32 + 10) |
                 (*(unsigned __int16*)(v32 + 12) << 16)) >=
                (unsigned int)(*(unsigned __int8*)(v26 + 10) |
                               (*(unsigned __int16*)(v26 + 12) << 16))) {
              goto LABEL_15;
            }
            v33 = *v14;
            v34 = v94;
            while (1) {
              *(__int64*)((char*)v7 + v34 + 8) = *(__int64*)((char*)v7 + v34);
              if (v34 == 0) {
                v16 = v7;
                goto LABEL_14;
              }
              v35 = *(__int64*)((char*)v7 + v34 - 8);
              v36 = *a3;
              v98_.v99 = 0;
              v98_.v100 = 0;
              v98_.v98 = v36;
              if (v36 != 0) {
                v37 = *(_QWORD*)(v36 + 392);
                v98_.v99 = v37;
                if (v37 != 0) {
                  v37 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v37 + 24) + 1784LL) +
                                   272LL);
                }
                v98_.v100 = v37;
                v38 = v37 == 0;
                v95_.v95 = v33;
                if (v33 == 0) {
                  goto LABEL_59;
                }
              }
              else {
                v38 = true;
                v95_.v95 = v33;
                if (v33 == 0) {
                  goto LABEL_59;
                }
              }
              v39 = *(_QWORD*)(v33 + 392);
              v95_.v96 = v39;
              if (v39 != 0) {
                v95_.v97 = *(
                    _QWORD*)(*(_QWORD*)(*(_QWORD*)(v39 + 24) + 1784LL) + 272LL);
                if (v95_.v97 == 0) {
                  v38 = true;
                }
                if (!v38) {
                  v40 = *(_QWORD**)(game_GameModeData_instance_ + 128);
                  result = GameReliance_8e17a0_alt1(v40, (__int64)&v98_.v98,
                                                    (__int64)&v95_.v95);
                  if ((result & 0x80000000) == 0) {
                    v41 = v40[1] + 56LL * (unsigned int)result;
                    goto LABEL_60;
                  }
                }
              }
            LABEL_59:
              v41 = (__int64)v15;
            LABEL_60:
              v42 = *a3;
              v98_.v99 = 0;
              v98_.v100 = 0;
              v98_.v98 = v42;
              if (v42 != 0) {
                v43 = *(_QWORD*)(v42 + 392);
                v98_.v99 = v43;
                if (v43 != 0) {
                  v43 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v43 + 24) + 1784LL) +
                                   272LL);
                }
                v98_.v100 = v43;
                v44 = v43 == 0;
                v95_.v95 = v35;
                if (v35 == 0) {
                LABEL_72:
                  v47 = (__int64)v15;
                  goto LABEL_73;
                }
              }
              else {
                v44 = true;
                v95_.v95 = v35;
                if (v35 == 0) {
                  goto LABEL_72;
                }
              }
              v45 = *(_QWORD*)(v35 + 392);
              v95_.v96 = v45;
              if (v45 == 0) {
                goto LABEL_72;
              }
              v95_.v97 =
                  *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v45 + 24) + 1784LL) + 272LL);
              if (v95_.v97 == 0) {
                v44 = true;
              }
              if (v44) {
                goto LABEL_72;
              }
              v46 = *(_QWORD**)(game_GameModeData_instance_ + 128);
              result = GameReliance_8e17a0_alt1(v46, (__int64)&v98_.v98,
                                                (__int64)&v95_.v95);
              if ((result & 0x80000000) != 0) {
                goto LABEL_72;
              }
              v47 = v46[1] + 56LL * (unsigned int)result;
            LABEL_73:
              v34 -= 8;
              if ((*(unsigned __int8*)(v47 + 10) |
                   (*(unsigned __int16*)(v47 + 12) << 16)) >=
                  (unsigned int)(*(unsigned __int8*)(v41 + 10) |
                                 (*(unsigned __int16*)(v41 + 12) << 16))) {
                v16 = (__int64*)((char*)v7 + v34 + 8);
              LABEL_14:
                v14 = v93;
                *v16 = v33;
              LABEL_15:
                v13 = v14 + 1;
                v94 += 8;
                if (v14 + 1 == a2) {
                  return result;
                }
                goto LABEL_16;
              }
            }
          }
        }
      LABEL_43:
        v32 = (__int64)v15;
        goto LABEL_44;
      }
    LABEL_42:
      v14 = v93;
      goto LABEL_43;
    }
    v48 = a4 >> 1;
    v49 = a5;
    v50 = a4 - (a4 >> 1);
    if ((__int64)a4 > a6) {
      BattleSide_7a4700(result, (__int64*)(result + 8 * v48), a3, a4 >> 1, a5,
                        a6);
      BattleSide_7a4700((__int64)&v7[v48], a2, a3, v50, v49, a6);
      return BattleSide_7a5860((__int64)v7, &v7[v48], a2, a3, v48, v50,
                               (__int64)v49, a6);
    }
    BattleSide_7a4fa0(result, (__int64*)(result + 8 * v48), a3, a4 >> 1, a5);
    v64 = &v49[v48];
    result = BattleSide_7a4fa0((__int64)&v7[v48], a2, a3, v50, v64);
    v65 = &v49[a4];
    v66 = v64;
    v67 = GameData_212dae8;
    while (1) {
      if (v66 == v65) {
        while (v49 != v64) {
          v90 = *v49++;
          *v7++ = v90;
        }
        return result;
      }
      v76 = *v66;
      v77 = *v49;
      v78 = *a3;
      v98_.v99 = 0;
      v98_.v100 = 0;
      v98_.v98 = v78;
      if (v78 != 0) {
        v79 = *(_QWORD*)(v78 + 392);
        v98_.v99 = v79;
        if (v79 != 0) {
          v79 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v79 + 24) + 1784LL) + 272LL);
        }
        v98_.v100 = v79;
        v80 = v79 == 0;
        v95_.v95 = v76;
        if (v76 == 0) {
        LABEL_125:
          v83 = v67;
          goto LABEL_126;
        }
      }
      else {
        v80 = true;
        v95_.v95 = v76;
        if (v76 == 0) {
          goto LABEL_125;
        }
      }
      v81 = *(_QWORD*)(v76 + 392);
      v95_.v96 = v81;
      if (v81 == 0) {
        goto LABEL_125;
      }
      v95_.v97 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v81 + 24) + 1784LL) + 272LL);
      if (v95_.v97 == 0 || v80) {
        goto LABEL_125;
      }
      v89 = *(_QWORD**)(game_GameModeData_instance_ + 128);
      result =
          GameReliance_8e17a0_alt1(v89, (__int64)&v98_.v98, (__int64)&v95_.v95);
      v67 = GameData_212dae8;
      if ((result & 0x80000000) != 0) {
        v83 = GameData_212dae8;
      }
      else {
        v83 = (__int64 (***)(void))(v89[1] + 56LL * (unsigned int)result);
      }
    LABEL_126:
      v84 = *a3;
      v98_.v99 = 0;
      v98_.v100 = 0;
      v98_.v98 = v84;
      if (v84 != 0) {
        v85 = *(_QWORD*)(v84 + 392);
        v98_.v99 = v85;
        if (v85 != 0) {
          v85 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v85 + 24) + 1784LL) + 272LL);
        }
        v98_.v100 = v85;
        v86 = v85 == 0;
        v95_.v95 = v77;
        if (v77 == 0) {
        LABEL_102:
          v68 = v67;
          goto LABEL_103;
        }
      }
      else {
        v86 = true;
        v95_.v95 = v77;
        if (v77 == 0) {
          goto LABEL_102;
        }
      }
      v87 = *(_QWORD*)(v77 + 392);
      v95_.v96 = v87;
      if (v87 == 0) {
        goto LABEL_102;
      }
      v95_.v97 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v87 + 24) + 1784LL) + 272LL);
      if (v95_.v97 == 0) {
        v86 = true;
      }
      if (v86) {
        goto LABEL_102;
      }
      v88 = *(_QWORD**)(game_GameModeData_instance_ + 128);
      result =
          GameReliance_8e17a0_alt1(v88, (__int64)&v98_.v98, (__int64)&v95_.v95);
      v67 = GameData_212dae8;
      if ((result & 0x80000000) != 0) {
        v68 = GameData_212dae8;
      }
      else {
        v68 = (__int64 (***)(void))(v88[1] + 56LL * (unsigned int)result);
      }
    LABEL_103:
      v69 =
          *((unsigned __int8*)v83 + 10) | (*((unsigned __int16*)v83 + 6) << 16);
      v70 =
          *((unsigned __int8*)v68 + 10) | (*((unsigned __int16*)v68 + 6) << 16);
      v71 = v70 >= v69;
      if (v70 >= v69) {
        v72 = v49;
      }
      else {
        v72 = v66;
      }
      if (v71) {
        v73 = 8;
      }
      else {
        v73 = 0;
      }
      v74 = *v72;
      v49 = (__int64*)((char*)v49 + v73);
      if (v71) {
        v75 = 0;
      }
      else {
        v75 = 8;
      }
      v66 = (__int64*)((char*)v66 + v75);
      *v7++ = v74;
      if (v49 == v64) {
        while (v66 != v65) {
          v91 = *v66++;
          *v7++ = v91;
        }
        return result;
      }
    }
  }
  return result;
}

__int64 BattleSide_7a4fa0(__int64 result, __int64* a2, __int64* a3,
                          unsigned __int64 a4, __int64* a5)
{
  __int64* v5;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  __int64 (***v16)();
  __int64 v17;
  __int64 v18;
  __int64 v19;
  bool v20;
  __int64 v21;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  bool v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  __int64* v31;
  __int64* v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  bool v39;
  __int64 v40;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  bool v46;
  __int64 v47;
  _QWORD* v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64* v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  __int64* v55;
  __int64* v56;
  __int64* v57;
  __int64 (***v58)();
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  bool v63;
  __int64 v64;
  _QWORD* v66;
  __int64 v67;
  __int64 (***v68)();
  __int64 v69;
  __int64 v70;
  bool v71;
  __int64 v72;
  _QWORD* v73;
  __int64 v74;
  __int64 (***v75)();
  unsigned int v76;
  unsigned int v77;
  bool v78;
  __int64* v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  _QWORD* v86;
  __int64 (***v87)();
  __int64 v88;
  __int64 v89;
  __int64* v90;
  bool v91;
  __int64 v92;
  _QWORD* v93;
  __int64 (***v94)();
  __int64 v95;
  __int64 v96;
  __int64* v97;
  __int64 v99;
  struct {
    __int64 v100;
    __int64 v101;
    __int64 v102;
  } v100_;
  struct {
    __int64 v103;
    __int64 v104;
    __int64 v105;
  } v103_;

  if (a4 == 0) {
    return result;
  }
  v5 = a5;
  v7 = (__int64*)result;
  if (a4 == 2) {
    v8 = *(a2 - 1);
    v9 = *(_QWORD*)result;
    v10 = *a3;
    v103_.v105 = 0;
    v103_.v103 = v10;
    v103_.v104 = 0;
    if (v10 != 0) {
      v11 = *(_QWORD*)(v10 + 392);
      v103_.v104 = v11;
      if (v11 != 0) {
        v11 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v11 + 24) + 1784LL) + 272LL);
      }
      v103_.v105 = v11;
      v12 = v11 == 0;
      v100_.v100 = v8;
      if (v8 == 0) {
        goto LABEL_138;
      }
    }
    else {
      v12 = true;
      v100_.v100 = v8;
      if (v8 == 0) {
        goto LABEL_138;
      }
    }
    v84 = *(_QWORD*)(v8 + 392);
    v100_.v101 = v84;
    if (v84 != 0) {
      v100_.v102 =
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v84 + 24) + 1784LL) + 272LL);
      if (v100_.v102 != 0 && !v12) {
        v86 = *(_QWORD**)(game_GameModeData_instance_ + 128);
        result = GameReliance_8e17a0_alt1(v86, (__int64)&v103_.v103,
                                          (__int64)&v100_.v100);
        if ((result & 0x80000000) == 0) {
          v87 = (__int64 (***)(void))(v86[1] + 56LL * (unsigned int)result);
          goto LABEL_139;
        }
      }
    }
  LABEL_138:
    v87 = GameData_212dae8;
  LABEL_139:
    v88 = *a3;
    v103_.v105 = 0;
    v103_.v103 = v88;
    v103_.v104 = 0;
    if (v88 != 0) {
      v89 = *(_QWORD*)(v88 + 392);
      v103_.v104 = v89;
      if (v89 != 0) {
        v89 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v89 + 24) + 1784LL) + 272LL);
      }
      v90 = a2;
      v103_.v105 = v89;
      v91 = v89 == 0;
      v100_.v100 = v9;
      if (v9 == 0) {
        goto LABEL_151;
      }
    }
    else {
      v90 = a2;
      v91 = true;
      v100_.v100 = v9;
      if (v9 == 0) {
        goto LABEL_151;
      }
    }
    v92 = *(_QWORD*)(v9 + 392);
    v100_.v101 = v92;
    if (v92 != 0) {
      v100_.v102 =
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v92 + 24) + 1784LL) + 272LL);
      if (v100_.v102 == 0) {
        v91 = true;
      }
      if (!v91) {
        v93 = *(_QWORD**)(game_GameModeData_instance_ + 128);
        result = GameReliance_8e17a0_alt1(v93, (__int64)&v103_.v103,
                                          (__int64)&v100_.v100);
        if ((result & 0x80000000) == 0) {
          v94 = (__int64 (***)(void))(v93[1] + 56LL * (unsigned int)result);
        LABEL_152:
          if ((*((unsigned __int8*)v94 + 10) |
               (*((unsigned __int16*)v94 + 6) << 16)) >=
              (unsigned int)(*((unsigned __int8*)v87 + 10) |
                             (*((unsigned __int16*)v87 + 6) << 16))) {
            *v5 = *v7;
            v95 = *(v90 - 1);
          }
          else {
            *v5 = *(v90 - 1);
            v95 = *v7;
          }
          v5[1] = v95;
          return result;
        }
      }
    }
  LABEL_151:
    v94 = GameData_212dae8;
    goto LABEL_152;
  }
  if (a4 == 1) {
    *a5 = *(_QWORD*)result;
    return result;
  }
  if ((__int64)a4 > 8) {
    v50 = a4 >> 1;
    v52 = (__int64*)(result + 8 * (a4 >> 1));
    v53 = 8 * (a4 >> 1);
    BattleSide_7a4700(result, v52, a3, v50, a5, v50);
    v54 = a4 - v50;
    v55 = &v5[v50];
    v56 = a2;
    result = BattleSide_7a4700((__int64)v52, a2, a3, v54, v55, v54);
    if (v53 == 0) {
      v57 = v52;
    LABEL_158:
      while (v57 != v56) {
        v96 = *v57++;
        *v5++ = v96;
      }
      return result;
    }
    v57 = v52;
    v58 = GameData_212dae8;
    while (1) {
      if (v57 == v56) {
        while (v7 != v52) {
          v83 = *v7++;
          *v5++ = v83;
        }
        return result;
      }
      v59 = *v57;
      v60 = *v7;
      v61 = *a3;
      v103_.v104 = 0;
      v103_.v105 = 0;
      v103_.v103 = v61;
      if (v61 != 0) {
        v62 = *(_QWORD*)(v61 + 392);
        v103_.v104 = v62;
        if (v62 != 0) {
          v62 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v62 + 24) + 1784LL) + 272LL);
        }
        v103_.v105 = v62;
        v63 = v62 == 0;
        v100_.v100 = v59;
        if (v59 == 0) {
          goto LABEL_101;
        }
      }
      else {
        v63 = true;
        v100_.v100 = v59;
        if (v59 == 0) {
          goto LABEL_101;
        }
      }
      v64 = *(_QWORD*)(v59 + 392);
      v100_.v101 = v64;
      if (v64 != 0) {
        v100_.v102 =
            *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v64 + 24) + 1784LL) + 272LL);
        if (v100_.v102 != 0 && !v63) {
          v66 = *(_QWORD**)(game_GameModeData_instance_ + 128);
          result = GameReliance_8e17a0_alt1(v66, (__int64)&v103_.v103,
                                            (__int64)&v100_.v100);
          if ((result & 0x80000000) == 0) {
            v67 = v66[1];
            v56 = a2;
            v58 = GameData_212dae8;
            v68 = (__int64 (***)(void))(v67 + 56LL * (unsigned int)result);
            goto LABEL_102;
          }
          v58 = GameData_212dae8;
          v56 = a2;
        }
      }
    LABEL_101:
      v68 = v58;
    LABEL_102:
      v69 = *a3;
      v103_.v104 = 0;
      v103_.v105 = 0;
      v103_.v103 = v69;
      if (v69 != 0) {
        v70 = *(_QWORD*)(v69 + 392);
        v103_.v104 = v70;
        if (v70 != 0) {
          v70 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v70 + 24) + 1784LL) + 272LL);
        }
        v103_.v105 = v70;
        v71 = v70 == 0;
        v100_.v100 = v60;
        if (v60 == 0) {
          goto LABEL_115;
        }
      }
      else {
        v71 = true;
        v100_.v100 = v60;
        if (v60 == 0) {
          goto LABEL_115;
        }
      }
      v72 = *(_QWORD*)(v60 + 392);
      v100_.v101 = v72;
      if (v72 == 0) {
        goto LABEL_115;
      }
      v100_.v102 =
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v72 + 24) + 1784LL) + 272LL);
      if (v100_.v102 == 0) {
        v71 = true;
      }
      if (v71) {
        goto LABEL_115;
      }
      v73 = *(_QWORD**)(game_GameModeData_instance_ + 128);
      result = GameReliance_8e17a0_alt1(v73, (__int64)&v103_.v103,
                                        (__int64)&v100_.v100);
      if ((result & 0x80000000) != 0) {
        v58 = GameData_212dae8;
        v56 = a2;
      LABEL_115:
        v75 = v58;
        goto LABEL_116;
      }
      v74 = v73[1];
      v56 = a2;
      v58 = GameData_212dae8;
      v75 = (__int64 (***)(void))(v74 + 56LL * (unsigned int)result);
    LABEL_116:
      v76 =
          *((unsigned __int8*)v68 + 10) | (*((unsigned __int16*)v68 + 6) << 16);
      v77 =
          *((unsigned __int8*)v75 + 10) | (*((unsigned __int16*)v75 + 6) << 16);
      v78 = v77 >= v76;
      if (v77 >= v76) {
        v79 = v7;
      }
      else {
        v79 = v57;
      }
      if (v78) {
        v80 = 0;
      }
      else {
        v80 = 8;
      }
      v81 = *v79;
      v57 = (__int64*)((char*)v57 + v80);
      if (v78) {
        v82 = 8;
      }
      else {
        v82 = 0;
      }
      v7 = (__int64*)((char*)v7 + v82);
      *v5++ = v81;
      if (v7 == v52) {
        goto LABEL_158;
      }
    }
  }
  if ((__int64*)result == a2) {
    return result;
  }
  v14 = (__int64*)(result + 8);
  v13 = *(_QWORD*)result;
  *a5 = *(_QWORD*)result;
  if ((__int64*)(result + 8) == a2) {
    return result;
  }
  v99 = 0;
  v15 = a5;
  v16 = GameData_212dae8;
  while (2) {
    v17 = *v14;
    v18 = *a3;
    v103_.v104 = 0;
    v103_.v105 = 0;
    v103_.v103 = v18;
    if (v18 != 0) {
      v19 = *(_QWORD*)(v18 + 392);
      v103_.v104 = v19;
      if (v19 != 0) {
        v19 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v19 + 24) + 1784LL) + 272LL);
      }
      v103_.v105 = v19;
      v20 = v19 == 0;
      v100_.v100 = v17;
      if (v17 == 0) {
        goto LABEL_28;
      }
    }
    else {
      v20 = true;
      v100_.v100 = v17;
      if (v17 == 0) {
        goto LABEL_28;
      }
    }
    v21 = *(_QWORD*)(v17 + 392);
    v100_.v101 = v21;
    if (v21 != 0) {
      v100_.v102 =
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v21 + 24) + 1784LL) + 272LL);
      if (v100_.v102 != 0 && !v20) {
        v23 = *(_QWORD**)(game_GameModeData_instance_ + 128);
        result = GameReliance_8e17a0_alt1(v23, (__int64)&v103_.v103,
                                          (__int64)&v100_.v100);
        if ((result & 0x80000000) == 0) {
          v16 = GameData_212dae8;
          v24 = v23[1] + 56LL * (unsigned int)result;
          goto LABEL_29;
        }
        v16 = GameData_212dae8;
      }
    }
  LABEL_28:
    v24 = (__int64)v16;
  LABEL_29:
    v25 = *a3;
    v103_.v104 = 0;
    v103_.v105 = 0;
    v103_.v103 = v25;
    if (v25 != 0) {
      v26 = *(_QWORD*)(v25 + 392);
      v103_.v104 = v26;
      if (v26 != 0) {
        v26 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v26 + 24) + 1784LL) + 272LL);
      }
      v103_.v105 = v26;
      v27 = v26 == 0;
      v100_.v100 = v13;
      if (v13 == 0) {
        goto LABEL_42;
      }
    }
    else {
      v27 = true;
      v100_.v100 = v13;
      if (v13 == 0) {
      LABEL_42:
        v30 = (__int64)v16;
        goto LABEL_43;
      }
    }
    v28 = *(_QWORD*)(v13 + 392);
    v100_.v101 = v28;
    if (v28 == 0) {
      goto LABEL_42;
    }
    v100_.v102 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v28 + 24) + 1784LL) + 272LL);
    if (v100_.v102 == 0) {
      v27 = true;
    }
    if (v27) {
      goto LABEL_42;
    }
    v29 = *(_QWORD**)(game_GameModeData_instance_ + 128);
    result = GameReliance_8e17a0_alt1(v29, (__int64)&v103_.v103,
                                      (__int64)&v100_.v100);
    if ((result & 0x80000000) != 0) {
      v16 = GameData_212dae8;
      goto LABEL_42;
    }
    v16 = GameData_212dae8;
    v30 = v29[1] + 56LL * (unsigned int)result;
  LABEL_43:
    v31 = v15 + 1;
    if ((*(unsigned __int8*)(v30 + 10) |
         (*(unsigned __int16*)(v30 + 12) << 16)) >=
        (unsigned int)(*(unsigned __int8*)(v24 + 10) |
                       (*(unsigned __int16*)(v24 + 12) << 16))) {
      *v31 = *v14;
      goto LABEL_82;
    }
    v15[1] = *v15;
    v32 = v5;
    if (v15 == v5) {
      goto LABEL_81;
    }
    v33 = v99;
    v97 = v31;
    while (1) {
      v34 = (__int64*)((char*)v5 + v33);
      v35 = *v14;
      v36 = *a3;
      v103_.v104 = 0;
      v103_.v105 = 0;
      v37 = *(__int64*)((char*)v5 + v33 - 8);
      v103_.v103 = v36;
      if (v36 != 0) {
        v38 = *(_QWORD*)(v36 + 392);
        v103_.v104 = v38;
        if (v38 != 0) {
          v38 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v38 + 24) + 1784LL) + 272LL);
        }
        v103_.v105 = v38;
        v39 = v38 == 0;
        v100_.v100 = v35;
        if (v35 == 0) {
          goto LABEL_60;
        }
      }
      else {
        v39 = true;
        v100_.v100 = v35;
        if (v35 == 0) {
          goto LABEL_60;
        }
      }
      v40 = *(_QWORD*)(v35 + 392);
      v100_.v101 = v40;
      if (v40 != 0) {
        v100_.v102 =
            *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v40 + 24) + 1784LL) + 272LL);
        if (v100_.v102 != 0 && !v39) {
          v42 = *(_QWORD**)(game_GameModeData_instance_ + 128);
          result = GameReliance_8e17a0_alt1(v42, (__int64)&v103_.v103,
                                            (__int64)&v100_.v100);
          if ((result & 0x80000000) == 0) {
            v16 = GameData_212dae8;
            v43 = v42[1] + 56LL * (unsigned int)result;
            goto LABEL_61;
          }
          v16 = GameData_212dae8;
        }
      }
    LABEL_60:
      v43 = (__int64)v16;
    LABEL_61:
      v44 = *a3;
      v103_.v104 = 0;
      v103_.v105 = 0;
      v103_.v103 = v44;
      if (v44 != 0) {
        v45 = *(_QWORD*)(v44 + 392);
        v103_.v104 = v45;
        if (v45 != 0) {
          v45 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v45 + 24) + 1784LL) + 272LL);
        }
        v103_.v105 = v45;
        v46 = v45 == 0;
        v100_.v100 = v37;
        if (v37 == 0) {
          goto LABEL_74;
        }
      }
      else {
        v46 = true;
        v100_.v100 = v37;
        if (v37 == 0) {
          goto LABEL_74;
        }
      }
      v47 = *(_QWORD*)(v37 + 392);
      v100_.v101 = v47;
      if (v47 != 0) {
        v100_.v102 =
            *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v47 + 24) + 1784LL) + 272LL);
        if (v100_.v102 == 0) {
          v46 = true;
        }
        if (!v46) {
          v48 = *(_QWORD**)(game_GameModeData_instance_ + 128);
          result = GameReliance_8e17a0_alt1(v48, (__int64)&v103_.v103,
                                            (__int64)&v100_.v100);
          if ((result & 0x80000000) == 0) {
            v16 = GameData_212dae8;
            v49 = v48[1] + 56LL * (unsigned int)result;
            goto LABEL_75;
          }
          v16 = GameData_212dae8;
        }
      }
    LABEL_74:
      v49 = (__int64)v16;
    LABEL_75:
      if ((*(unsigned __int8*)(v49 + 10) |
           (*(unsigned __int16*)(v49 + 12) << 16)) >=
          (unsigned int)(*(unsigned __int8*)(v43 + 10) |
                         (*(unsigned __int16*)(v43 + 12) << 16))) {
        break;
      }
      v33 -= 8;
      *v34 = *(v34 - 1);
      if (v33 == 0) {
        v32 = v5;
        goto LABEL_80;
      }
    }
    v32 = (__int64*)((char*)v5 + v33);
  LABEL_80:
    v31 = v97;
  LABEL_81:
    *v32 = *v14;
  LABEL_82:
    if (++v14 != a2) {
      v13 = *v31;
      v15 = v31;
      v99 += 8;
      continue;
    }
    return result;
  }
}

__int64 BattleSide_7a5860(__int64 result, __int64* a2, __int64* a3, __int64* a4,
                          __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v10;
  __int64* v12;
  __int64* v14;
  __int64 (***v15)();
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  bool v21;
  __int64 v22;
  __int64 v24;
  __int64 v25;
  __int64 (***v26)();
  __int64 v27;
  __int64 v28;
  bool v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 (***v33)();
  __int64 v34;
  __int64* v35;
  __int64* v36;
  unsigned __int64 v37;
  __int64 (***v38)();
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  bool v44;
  __int64 v45;
  __int64 v47;
  unsigned int v48;
  __int64 v49;
  __int64 (***v50)();
  __int64 v51;
  __int64 v52;
  bool v53;
  __int64 v54;
  __int64 v55;
  unsigned int v56;
  __int64 v57;
  __int64 v58;
  bool v59;
  __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  unsigned int v64;
  unsigned int v65;
  __int64 v66;
  __int64* v67;
  __int64 v68;
  __int64 v69;
  bool v70;
  __int64 v71;
  __int64 v73;
  unsigned int v74;
  __int64 v75;
  __int64 v76;
  bool v77;
  __int64 v78;
  __int64 v79;
  unsigned int v80;
  __int64 v81;
  __int64* v82;
  __int64 v83;
  __int64* v84;
  __int64 (***v85)();
  __int64* v86;
  __int64 v87;
  __int64* v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  bool v92;
  __int64 v93;
  __int64* v95;
  __int64 (***v96)();
  __int64 v97;
  __int64 v98;
  bool v99;
  __int64 v100;
  __int64 v101;
  __int64* v102;
  __int64 v103;
  __int64 (***v104)();
  __int64 v105;
  __int64* v106;
  __int64 v107;
  unsigned int v108;
  unsigned int v109;
  bool v110;
  __int64* v111;
  __int64 v112;
  _QWORD* v113;
  __int64* v114;
  __int64 v115;
  __int64 (***v116)();
  __int64 v117;
  unsigned int v118;
  unsigned int v119;
  bool v120;
  __int64* v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  bool v129;
  __int64 v130;
  __int64* v131;
  char v132;
  __int64 v133;
  __int64* v134;
  __int64* v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  bool v139;
  __int64 v140;
  __int64 v141;
  __int64* v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64* v149;
  _QWORD* v150;
  __int64* v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;

  if (a6 == 0) {
    return result;
  }
  v10 = a6;
  v12 = a4;
  v14 = (__int64*)result;
  v15 = GameData_212dae8;
  do {
    if (a5 <= a8 || v10 <= a8) {
      if (a5 > v10) {
        if (a2 == a3) {
          return result;
        }
        v83 = 0;
        do {
          *(_QWORD*)(a7 + v83 * 8) = a2[v83];
          ++v83;
        } while (&a2[v83] != a3);
        v84 = (__int64*)(a7 + v83 * 8);
        v85 = GameData_212dae8;
        while (1) {
          if (a2 == v14) {
            if ((__int64*)a7 != v84) {
              v144 = 0x1FFFFFFFFFFFFFFFLL;
              do {
                v145 = *--v84;
                a3[v144--] = v145;
              } while (v84 != (__int64*)a7);
            }
            return result;
          }
          v86 = (__int64*)a7;
          v88 = a2 - 1;
          v87 = *(a2 - 1);
          v89 = *(v84 - 1);
          v90 = *v12;
          v157 = 0;
          v158 = 0;
          v156 = v90;
          if (v90 != 0) {
            v91 = *(_QWORD*)(v90 + 392);
            v157 = v91;
            if (v91 != 0) {
              v91 =
                  *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v91 + 24) + 1784LL) + 272LL);
            }
            v158 = v91;
            v92 = v91 == 0;
            v153 = v89;
            if (v89 == 0) {
            LABEL_140:
              v95 = a3;
            LABEL_141:
              v96 = v85;
              goto LABEL_142;
            }
          }
          else {
            v92 = true;
            v153 = v89;
            if (v89 == 0) {
              goto LABEL_140;
            }
          }
          v93 = *(_QWORD*)(v89 + 392);
          v154 = v93;
          if (v93 == 0) {
            goto LABEL_140;
          }
          v155 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v93 + 24) + 1784LL) + 272LL);
          if (v155 == 0 || v92) {
            goto LABEL_140;
          }
          v105 = *(_QWORD*)(game_GameModeData_instance_ + 128);
          v106 = a2;
          v95 = a3;
          result = GameReliance_8e17a0(v105, &v156, &v153);
          if ((result & 0x80000000) != 0) {
            a2 = v106;
            v85 = GameData_212dae8;
            v12 = a4;
            goto LABEL_141;
          }
          v107 = *(_QWORD*)(v105 + 8);
          v12 = a4;
          a2 = v106;
          v85 = GameData_212dae8;
          v96 = (__int64 (***)())(v107 + 56LL * (unsigned int)result);
        LABEL_142:
          v97 = *v12;
          v157 = 0;
          v158 = 0;
          v156 = v97;
          if (v97 != 0) {
            v98 = *(_QWORD*)(v97 + 392);
            v157 = v98;
            if (v98 != 0) {
              v98 =
                  *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v98 + 24) + 1784LL) + 272LL);
            }
            v158 = v98;
            v99 = v98 == 0;
            v153 = v87;
            if (v87 == 0) {
              goto LABEL_157;
            }
          }
          else {
            v99 = true;
            v153 = v87;
            if (v87 == 0) {
              goto LABEL_157;
            }
          }
          v100 = *(_QWORD*)(v87 + 392);
          v154 = v100;
          if (v100 == 0) {
            goto LABEL_157;
          }
          v155 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v100 + 24) + 1784LL) + 272LL);
          if (v155 == 0) {
            v99 = true;
          }
          if (v99) {
            goto LABEL_157;
          }
          v101 = *(_QWORD*)(game_GameModeData_instance_ + 128);
          v102 = a2;
          result = GameReliance_8e17a0(v101, &v156, &v153);
          if ((result & 0x80000000) != 0) {
            a2 = v102;
            v85 = GameData_212dae8;
            v12 = a4;
          LABEL_157:
            v104 = v85;
            goto LABEL_158;
          }
          v103 = *(_QWORD*)(v101 + 8);
          v12 = a4;
          a2 = v102;
          v85 = GameData_212dae8;
          v104 = (__int64 (***)())(v103 + 56LL * (unsigned int)result);
        LABEL_158:
          v108 = *((unsigned __int8*)v96 + 10) |
                 (*((unsigned __int16*)v96 + 6) << 16);
          v109 = *((unsigned __int8*)v104 + 10) |
                 (*((unsigned __int16*)v104 + 6) << 16);
          v110 = v109 >= v108;
          if (v109 >= v108) {
            v111 = v84;
          }
          else {
            v111 = a2;
          }
          if (v110) {
            --v84;
          }
          else {
            a2 = v88;
          }
          a7 = (__int64)v86;
          *(v95 - 1) = *(v111 - 1);
          a3 = v95 - 1;
          if (v84 == v86) {
            return result;
          }
        }
      }
      if (v14 == a2) {
        return result;
      }
      v112 = -a7;
      v113 = (_QWORD*)a7;
      v114 = v14;
      do {
        v115 = *v114++;
        v112 -= 8;
        *v113++ = v115;
      } while (v114 != a2);
      v116 = GameData_212dae8;
      while (1) {
        if (a2 == a3) {
          return memmove(v14, a7, -(a7 + v112));
        }
        v125 = *a2;
        v126 = *(_QWORD*)a7;
        v127 = *v12;
        v157 = 0;
        v158 = 0;
        v156 = v127;
        if (v127 != 0) {
          v128 = *(_QWORD*)(v127 + 392);
          v157 = v128;
          if (v128 != 0) {
            v128 =
                *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v128 + 24) + 1784LL) + 272LL);
          }
          v158 = v128;
          v129 = v128 == 0;
          v153 = v125;
          if (v125 == 0) {
          LABEL_196:
            v131 = a3;
          LABEL_197:
            v135 = (__int64*)a7;
            v136 = (__int64)v116;
            goto LABEL_198;
          }
        }
        else {
          v129 = true;
          v153 = v125;
          if (v125 == 0) {
            goto LABEL_196;
          }
        }
        v130 = *(_QWORD*)(v125 + 392);
        v154 = v130;
        if (v130 == 0) {
          goto LABEL_196;
        }
        v131 = a3;
        v155 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v130 + 24) + 1784LL) + 272LL);
        v132 = v155 == 0 || v129;
        if ((v132 & 1) != 0) {
          goto LABEL_197;
        }
        v133 = *(_QWORD*)(game_GameModeData_instance_ + 128);
        v134 = a2;
        v135 = (__int64*)a7;
        result = GameReliance_8e17a0(v133, &v156, &v153);
        if ((result & 0x80000000) != 0) {
          v136 = (__int64)v116;
        }
        else {
          v136 = *(_QWORD*)(v133 + 8) + 56LL * (unsigned int)result;
        }
        v12 = a4;
        a2 = v134;
      LABEL_198:
        v137 = *v12;
        v157 = 0;
        v158 = 0;
        v156 = v137;
        if (v137 != 0) {
          v138 = *(_QWORD*)(v137 + 392);
          v157 = v138;
          if (v138 != 0) {
            v138 =
                *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v138 + 24) + 1784LL) + 272LL);
          }
          v158 = v138;
          v139 = v138 == 0;
          v153 = v126;
          if (v126 == 0) {
            goto LABEL_171;
          }
        }
        else {
          v139 = true;
          v153 = v126;
          if (v126 == 0) {
            goto LABEL_171;
          }
        }
        v140 = *(_QWORD*)(v126 + 392);
        v154 = v140;
        if (v140 != 0) {
          v155 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v140 + 24) + 1784LL) + 272LL);
          if (v155 == 0) {
            v139 = true;
          }
          if (!v139) {
            v141 = *(_QWORD*)(game_GameModeData_instance_ + 128);
            v142 = a2;
            result = GameReliance_8e17a0(v141, &v156, &v153);
            if ((result & 0x80000000) != 0) {
              v117 = (__int64)v116;
            }
            else {
              v117 = *(_QWORD*)(v141 + 8) + 56LL * (unsigned int)result;
            }
            v12 = a4;
            a2 = v142;
            goto LABEL_172;
          }
        }
      LABEL_171:
        v117 = (__int64)v116;
      LABEL_172:
        v118 = *(unsigned __int8*)(v136 + 10) |
               (*(unsigned __int16*)(v136 + 12) << 16);
        v119 = *(unsigned __int8*)(v117 + 10) |
               (*(unsigned __int16*)(v117 + 12) << 16);
        v120 = v119 >= v118;
        if (v119 >= v118) {
          v121 = v135;
        }
        else {
          v121 = a2;
        }
        if (v120) {
          v122 = 0;
        }
        else {
          v122 = 8;
        }
        v123 = *v121;
        a2 = (__int64*)((char*)a2 + v122);
        v124 = v120;
        a7 = (__int64)&v135[v124];
        a3 = v131;
        *v14++ = v123;
        if (v113 == (_QWORD*)a7) {
          return result;
        }
      }
    }
    if (a5 == 0) {
      return result;
    }
    v16 = game_GameModeData_instance_;
    v152 = a2;
    while (1) {
      v17 = *a2;
      v18 = *v14;
      v19 = *v12;
      v157 = 0;
      v158 = 0;
      v156 = v19;
      if (v19 != 0) {
        v20 = *(_QWORD*)(v19 + 392);
        v157 = v20;
        if (v20 != 0) {
          v20 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v20 + 24) + 1784LL) + 272LL);
        }
        v158 = v20;
        v21 = v20 == 0;
        v153 = v17;
        if (v17 == 0) {
          goto LABEL_21;
        }
      }
      else {
        v21 = true;
        v153 = v17;
        if (v17 == 0) {
          goto LABEL_21;
        }
      }
      v22 = *(_QWORD*)(v17 + 392);
      v154 = v22;
      if (v22 != 0) {
        v155 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v22 + 24) + 1784LL) + 272LL);
        if (v155 != 0 && !v21) {
          v24 = *(_QWORD*)(v16 + 128);
          result = GameReliance_8e17a0(v24, &v156, &v153);
          if ((result & 0x80000000) == 0) {
            v25 = *(_QWORD*)(v24 + 8);
            v12 = a4;
            a2 = v152;
            v26 = (__int64 (***)())(v25 + 56LL * (unsigned int)result);
            v15 = GameData_212dae8;
            goto LABEL_22;
          }
          v15 = GameData_212dae8;
          v12 = a4;
          a2 = v152;
        }
      }
    LABEL_21:
      v26 = v15;
    LABEL_22:
      v27 = *v12;
      v16 = game_GameModeData_instance_;
      v157 = 0;
      v158 = 0;
      v156 = v27;
      if (v27 != 0) {
        v28 = *(_QWORD*)(v27 + 392);
        v157 = v28;
        if (v28 != 0) {
          v28 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v28 + 24) + 1784LL) + 272LL);
        }
        v158 = v28;
        v29 = v28 == 0;
        v153 = v18;
        if (v18 == 0) {
          goto LABEL_35;
        }
      }
      else {
        v29 = true;
        v153 = v18;
        if (v18 == 0) {
          goto LABEL_35;
        }
      }
      v30 = *(_QWORD*)(v18 + 392);
      v154 = v30;
      if (v30 != 0) {
        v155 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v30 + 24) + 1784LL) + 272LL);
        if (v155 == 0) {
          v29 = true;
        }
        if (!v29) {
          v31 = *(_QWORD*)(game_GameModeData_instance_ + 128);
          result = GameReliance_8e17a0(v31, &v156, &v153);
          v16 = game_GameModeData_instance_;
          if ((result & 0x80000000) == 0) {
            v32 = *(_QWORD*)(v31 + 8);
            v12 = a4;
            a2 = v152;
            v33 = (__int64 (***)())(v32 + 56LL * (unsigned int)result);
            v15 = GameData_212dae8;
            goto LABEL_36;
          }
          v15 = GameData_212dae8;
          v12 = a4;
          a2 = v152;
        }
      }
    LABEL_35:
      v33 = v15;
    LABEL_36:
      if ((*((unsigned __int8*)v33 + 10) |
           (*((unsigned __int16*)v33 + 6) << 16)) <
          (unsigned int)(*((unsigned __int8*)v26 + 10) |
                         (*((unsigned __int16*)v26 + 6) << 16))) {
        break;
      }
      ++v14;
      if (--a5 == 0) {
        return result;
      }
    }
    v149 = a3;
    v150 = (_QWORD*)a7;
    v148 = v10;
    if (a5 < v10) {
      v34 = v10 / 2;
      v35 = &a2[v10 / 2];
      if (v14 == a2) {
        v36 = a2;
      LABEL_117:
        v58 = v36 - v14;
        goto LABEL_118;
      }
      v146 = v10 / 2;
      v147 = a8;
      v36 = v14;
      v37 = a2 - v14;
      while (2) {
        v39 = *v35;
        v40 = *v12;
        v41 = &v36[v37 >> 1];
        v42 = *v41;
        v157 = 0;
        v158 = 0;
        v156 = v40;
        if (v40 != 0) {
          v43 = *(_QWORD*)(v40 + 392);
          v157 = v43;
          if (v43 != 0) {
            v43 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v43 + 24) + 1784LL) + 272LL);
          }
          v158 = v43;
          v44 = v43 == 0;
          v153 = v39;
          if (v39 == 0) {
          LABEL_62:
            v50 = v15;
            goto LABEL_63;
          }
        }
        else {
          v44 = true;
          v153 = v39;
          if (v39 == 0) {
            goto LABEL_62;
          }
        }
        v45 = *(_QWORD*)(v39 + 392);
        v154 = v45;
        if (v45 == 0) {
          goto LABEL_62;
        }
        v155 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v45 + 24) + 1784LL) + 272LL);
        if (v155 == 0 || v44) {
          goto LABEL_62;
        }
        v47 = *(_QWORD*)(v16 + 128);
        v48 = GameReliance_8e17a0(v47, &v156, &v153);
        if ((v48 & 0x80000000) != 0) {
          v15 = GameData_212dae8;
          v12 = a4;
          goto LABEL_62;
        }
        v49 = *(_QWORD*)(v47 + 8);
        v12 = a4;
        v50 = (__int64 (***)())(v49 + 56LL * v48);
        v15 = GameData_212dae8;
      LABEL_63:
        v51 = *v12;
        v16 = game_GameModeData_instance_;
        v157 = 0;
        v158 = 0;
        v156 = v51;
        if (v51 != 0) {
          v52 = *(_QWORD*)(v51 + 392);
          v157 = v52;
          if (v52 != 0) {
            v52 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v52 + 24) + 1784LL) + 272LL);
          }
          v158 = v52;
          v53 = v52 == 0;
          v153 = v42;
          if (v42 == 0) {
          LABEL_43:
            v38 = v15;
            goto LABEL_44;
          }
        }
        else {
          v53 = true;
          v153 = v42;
          if (v42 == 0) {
            goto LABEL_43;
          }
        }
        v54 = *(_QWORD*)(v42 + 392);
        v154 = v54;
        if (v54 == 0) {
          goto LABEL_43;
        }
        v155 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v54 + 24) + 1784LL) + 272LL);
        if (v155 == 0) {
          v53 = true;
        }
        if (v53) {
          goto LABEL_43;
        }
        v55 = *(_QWORD*)(game_GameModeData_instance_ + 128);
        v56 = GameReliance_8e17a0(v55, &v156, &v153);
        v16 = game_GameModeData_instance_;
        if ((v56 & 0x80000000) != 0) {
          v15 = GameData_212dae8;
          v12 = a4;
          goto LABEL_43;
        }
        v57 = *(_QWORD*)(v55 + 8);
        v12 = a4;
        v38 = (__int64 (***)())(v57 + 56LL * v56);
        v15 = GameData_212dae8;
      LABEL_44:
        if ((*((unsigned __int8*)v38 + 10) |
             (*((unsigned __int16*)v38 + 6) << 16)) <
            (unsigned int)(*((unsigned __int8*)v50 + 10) |
                           (*((unsigned __int16*)v50 + 6) << 16))) {
          v37 >>= 1;
        }
        else {
          v36 = v41 + 1;
          v37 += ~(v37 >> 1);
        }
        if (v37 == 0) {
          v34 = v146;
          a8 = v147;
          goto LABEL_117;
        }
        continue;
      }
    }
    if (a5 == 1) {
      v143 = *v14;
      *v14 = *a2;
      *a2 = v143;
      return result;
    }
    v35 = a3;
    v58 = a5 / 2;
    v60 = (char*)a3 - (char*)a2;
    v59 = a3 == a2;
    v36 = &v14[a5 / 2];
    if (v59) {
      goto LABEL_115;
    }
    v61 = *v12;
    v62 = v60 >> 3;
    v35 = a2;
    while (2) {
      v66 = *v36;
      v67 = &v35[v62 >> 1];
      v68 = *v67;
      v156 = v61;
      v157 = 0;
      v158 = 0;
      if (v61 != 0) {
        v69 = *(_QWORD*)(v61 + 392);
        v157 = v69;
        if (v69 != 0) {
          v69 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v69 + 24) + 1784LL) + 272LL);
        }
        v158 = v69;
        v70 = v69 == 0;
        v153 = v68;
        if (v68 == 0) {
        LABEL_100:
          v75 = (__int64)v15;
          goto LABEL_101;
        }
      }
      else {
        v70 = true;
        v153 = v68;
        if (v68 == 0) {
          goto LABEL_100;
        }
      }
      v71 = *(_QWORD*)(v68 + 392);
      v154 = v71;
      if (v71 == 0) {
        goto LABEL_100;
      }
      v155 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v71 + 24) + 1784LL) + 272LL);
      if (v155 == 0 || v70) {
        goto LABEL_100;
      }
      v73 = *(_QWORD*)(v16 + 128);
      v74 = GameReliance_8e17a0(v73, &v156, &v153);
      if ((v74 & 0x80000000) != 0) {
        v15 = GameData_212dae8;
        a2 = v152;
        goto LABEL_100;
      }
      a2 = v152;
      v15 = GameData_212dae8;
      v75 = *(_QWORD*)(v73 + 8) + 56LL * v74;
    LABEL_101:
      v16 = game_GameModeData_instance_;
      v156 = v61;
      v157 = 0;
      v158 = 0;
      if (v61 != 0) {
        v76 = *(_QWORD*)(v61 + 392);
        v157 = v76;
        if (v76 != 0) {
          v76 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v76 + 24) + 1784LL) + 272LL);
        }
        v158 = v76;
        v77 = v76 == 0;
        v153 = v66;
        if (v66 == 0) {
        LABEL_79:
          v63 = (__int64)v15;
          goto LABEL_80;
        }
      }
      else {
        v77 = true;
        v153 = v66;
        if (v66 == 0) {
          goto LABEL_79;
        }
      }
      v78 = *(_QWORD*)(v66 + 392);
      v154 = v78;
      if (v78 == 0) {
        goto LABEL_79;
      }
      v155 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v78 + 24) + 1784LL) + 272LL);
      if (v155 == 0) {
        v77 = true;
      }
      if (v77) {
        goto LABEL_79;
      }
      v79 = *(_QWORD*)(game_GameModeData_instance_ + 128);
      v80 = GameReliance_8e17a0(v79, &v156, &v153);
      v16 = game_GameModeData_instance_;
      if ((v80 & 0x80000000) != 0) {
        v15 = GameData_212dae8;
        a2 = v152;
        goto LABEL_79;
      }
      a2 = v152;
      v15 = GameData_212dae8;
      v63 = *(_QWORD*)(v79 + 8) + 56LL * v80;
    LABEL_80:
      v64 = *(unsigned __int8*)(v75 + 10) |
            (*(unsigned __int16*)(v75 + 12) << 16);
      v65 = *(unsigned __int8*)(v63 + 10) |
            (*(unsigned __int16*)(v63 + 12) << 16);
      if (v65 >= v64) {
        v62 >>= 1;
      }
      else {
        v62 += ~(v62 >> 1);
      }
      if (v65 < v64) {
        v35 = v67 + 1;
      }
      if (v62 != 0) {
        continue;
      }
      break;
    }
    v12 = a4;
    v58 = a5 / 2;
  LABEL_115:
    v34 = v35 - a2;
  LABEL_118:
    a5 -= v58;
    v10 = v148 - v34;
    v81 = GameRoutine_7410c0(v36);
    v82 = (__int64*)v81;
    if (v58 + v34 >= a5 + v148 - v34) {
      result = BattleSide_7a5860(v81, v35, v149, v12, a5, v10, v150, a8);
      v35 = v36;
      v10 = v34;
      a5 = v58;
      a3 = v82;
    }
    else {
      result = BattleSide_7a5860(v14, v36, v81, v12, v58, v34, v150, a8);
      a3 = v149;
      v14 = v82;
    }
    a7 = (__int64)v150;
    a2 = v35;
    v15 = GameData_212dae8;
  } while (v10 != 0);
  return result;
}

__int64 game_map_BattleSide_CalculateTerrain_lambda0_Invoke(__int64 result,
                                                            __int64 a2)
{
  _WORD* v2;
  _WORD* v3;
  __int16 v4;
  int v5;
  __int16 v6;
  int v7;
  __int16 v8;
  int v9;
  __int16 v10;
  int v11;
  __int16 v12;
  int v13;
  __int16 v14;
  int v15;
  __int16 v16;
  int v17;
  int v18;
  int v19;

  v2 = *(_WORD**)(result + 8);
  v3 = *(_WORD**)a2;
  v4 = v2[1];
  if ((__int16)(*v2 + *(_WORD*)(*(_QWORD*)a2 + 78LL)) <= -100) {
    v5 = -100;
  }
  else {
    v5 = (__int16)(*v2 + *(_WORD*)(*(_QWORD*)a2 + 78LL));
  }
  if (v5 >= 100) {
    LOWORD(v5) = 100;
  }
  *v2 = v5;
  LOWORD(v7) = v4 + v3[40];
  v6 = v2[2];
  v7 = (__int16)v7;
  if ((__int16)v7 <= -100) {
    v7 = -100;
  }
  if (v7 >= 100) {
    LOWORD(v7) = 100;
  }
  v2[1] = v7;
  LOWORD(v9) = v6 + v3[41];
  v8 = v2[3];
  v9 = (__int16)v9;
  if ((__int16)v9 <= -100) {
    v9 = -100;
  }
  if (v9 >= 100) {
    LOWORD(v9) = 100;
  }
  v2[2] = v9;
  LOWORD(v11) = v8 + v3[42];
  v10 = v2[4];
  v11 = (__int16)v11;
  if ((__int16)v11 <= -100) {
    v11 = -100;
  }
  if (v11 >= 100) {
    LOWORD(v11) = 100;
  }
  v2[3] = v11;
  LOWORD(v13) = v10 + v3[43];
  v12 = v2[5];
  v13 = (__int16)v13;
  if ((__int16)v13 <= -100) {
    v13 = -100;
  }
  if (v13 >= 100) {
    LOWORD(v13) = 100;
  }
  v2[4] = v13;
  LOWORD(v15) = v12 + v3[44];
  v14 = v2[6];
  v15 = (__int16)v15;
  if ((__int16)v15 <= -100) {
    v15 = -100;
  }
  if (v15 >= 100) {
    LOWORD(v15) = 100;
  }
  v2[5] = v15;
  LOWORD(v17) = v14 + v3[45];
  v16 = v2[7];
  v17 = (__int16)v17;
  if ((__int16)v17 <= -100) {
    v17 = -100;
  }
  if (v17 >= 100) {
    LOWORD(v17) = 100;
  }
  v2[6] = v17;
  v18 = (__int16)(v16 + v3[46]);
  if (v18 <= -100) {
    v18 = -100;
  }
  if (v18 >= 100) {
    LOWORD(v18) = 100;
  }
  v2[7] = v18;
  v19 = (__int16)(v2[8] + v3[47]);
  if (v19 <= -100) {
    v19 = -100;
  }
  if (v19 >= 100) {
    LOWORD(v19) = 100;
  }
  v2[8] = v19;
  return result;
}

__int64 BattleSide_7a69c0(__int64 a1, int* a2, __int64 a3, _DWORD** a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v9;
  __int64* v10;
  __int64 result;
  unsigned __int64 v12;
  __int64 v13;
  _DWORD* v14;
  float v15;
  float v16;
  float v17;
  _BOOL8 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 primeEm;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  unsigned __int64 v30;

  v5 = *a2;
  v6 = *(_QWORD*)(a1 + 8);
  if (v6 != 0) {
    v9 = v6 - 1;
    if ((v6 & (v6 - 1)) != 0) {
      v4 = *a2;
      if (v6 <= v5) {
        v4 = v5 % v6;
      }
    }
    else {
      v4 = v9 & v5;
    }
    v10 = *(__int64**)(*(_QWORD*)a1 + 8 * v4);
    if (v10 != nullptr) {
      result = *v10;
      if (*v10 != 0) {
        if ((v6 & v9) == 0) {
          while (1) {
            v13 = *(_QWORD*)(result + 8);
            if (v13 == v5) {
              if (*(_DWORD*)(result + 16) == (_DWORD)v5) {
                return result;
              }
            }
            else if ((v13 & v9) != v4) {
              goto LABEL_23;
            }
            result = *(_QWORD*)result;
            if (result == 0) {
              goto LABEL_23;
            }
          }
        }
        do {
          v12 = *(_QWORD*)(result + 8);
          if (v12 == v5) {
            if (*(_DWORD*)(result + 16) == (_DWORD)v5) {
              return result;
            }
          }
          else {
            if (v12 >= v6) {
              v12 %= v6;
            }
            if (v12 != v4) {
              break;
            }
          }
          result = *(_QWORD*)result;
        } while (result != 0);
      }
    }
  }
LABEL_23:
  result = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
  v14 = *a4;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = v5;
  v15 = *(float*)(a1 + 32);
  *(_DWORD*)(result + 16) = *v14;
  *(_DWORD*)(result + 20) = 0;
  v16 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v6 == 0 || (float)(v15 * (float)v6) < v16) {
    v17 = v16 / v15;
    v18 = true;
    if (v6 >= 3) {
      v18 = (v6 & (v6 - 1)) != 0;
    }
    v19 = v18 | (2 * v6);
    v20 = vcvtps_u64_f32(v17);
    if (v19 <= v20) {
      primeEm = v20;
    }
    else {
      primeEm = v19;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      v22 = result;
      primeEm = std___1___next_prime(primeEm);
      result = v22;
      v6 = *(_QWORD*)(a1 + 8);
    }
    if (primeEm > v6) {
      goto LABEL_35;
    }
    if (primeEm < v6) {
      v24 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v6 < 3 || (v6 & (v6 - 1)) != 0) {
        v26 = result;
        v24 = std___1___next_prime(v24);
        result = v26;
      }
      else {
        v25 = 1LL << -(char)__clz(v24 - 1);
        if (v24 >= 2) {
          v24 = v25;
        }
      }
      if (primeEm <= v24) {
        primeEm = v24;
      }
      if (primeEm < v6) {
      LABEL_35:
        v23 = result;
        GameRoutine_7a6cc0((__int64*)a1, primeEm);
        result = v23;
      }
    }
    v6 = *(_QWORD*)(a1 + 8);
    if ((v6 & (v6 - 1)) != 0) {
      if (v6 <= v5) {
        v4 = v5 % v6;
      }
      else {
        v4 = v5;
      }
    }
    else {
      v4 = (v6 - 1) & v5;
    }
  }
  v27 = *(_QWORD*)a1;
  v28 = *(__int64**)(*(_QWORD*)a1 + 8 * v4);
  if (v28 != nullptr) {
    *(_QWORD*)result = *v28;
    *v28 = result;
  }
  else {
    v29 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = result;
    *(_QWORD*)result = v29;
    *(_QWORD*)(v27 + 8 * v4) = a1 + 16;
    if (*(_QWORD*)result != 0) {
      v30 = *(_QWORD*)(*(_QWORD*)result + 8LL);
      if ((v6 & (v6 - 1)) != 0) {
        if (v30 >= v6) {
          v30 %= v6;
        }
      }
      else {
        v30 &= v6 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v30) = result;
    }
  }
  ++*(_QWORD*)(a1 + 24);
  return result;
}

_QWORD* game_map_BattleSide_EachMaskSkill_lambda0_Clone(_QWORD* a1)
{
  _QWORD* result;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
  *result = GameData_1f98af8;
  v3 = a1[3];
  result[2] = a1[2];
  result[3] = v3;
  v4 = a1[5];
  result[4] = a1[4];
  result[5] = v4;
  v5 = (_QWORD*)a1[10];
  if (v5 != nullptr) {
    if (v5 == a1 + 6) {
      v6 = result;
      result[10] = result + 6;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v5 + 24LL))(
          (void*)v5, v5);
    }
    else {
      v6 = result;
      result[10] = X8CALL_X0(
          _QWORD*, (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
                       *v5 + 16LL))((void*)v5, v5));
    }
    return v6;
  }
  else {
    result[10] = 0;
  }
  return result;
}

_QWORD* game_map_BattleSide_EachMaskSkill_lambda0_CloneInto(_QWORD* result,
                                                            _QWORD* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;

  *a2 = GameData_1f98af8;
  v3 = result[3];
  v5 = result[4];
  v4 = result[5];
  a2[2] = result[2];
  a2[3] = v3;
  a2[4] = v5;
  a2[5] = v4;
  v6 = (_QWORD*)result[10];
  if (v6 != nullptr) {
    if (v6 == result + 6) {
      a2[10] = a2 + 6;
      return (_QWORD*)(*(__int64 (**)(_QWORD))(*(_QWORD*)result[10] + 24LL))(
          result[10]);
    }
    else {
      result = X8CALL_X0(
          _QWORD*, (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(
                       *v6 + 16LL))((void*)v6, result[10]));
      a2[10] = result;
    }
  }
  else {
    a2[10] = 0;
  }
  return result;
}

__int64 game_map_BattleSide_EachMaskSkill_lambda0_Invoke(__int64 result,
                                                         _DWORD* a2, __int64 a3,
                                                         __int64 a4)
{
  unsigned __int8* v4;
  unsigned __int64 v5;
  int v6;
  __int64 v7;
  unsigned __int64 v9;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64** v14;
  __int64* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  int* v22;

  v4 = *(unsigned __int8**)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                            8LL * (*a2 & 0xFFF));
  if (((*(_DWORD*)(result + 24) >> v4[117]) & 1) == 0 ||
      ((*(_DWORD*)(result + 28) >> v4[272]) & 1) == 0) {
    return result;
  }
  v5 = v4[113];
  if (v4[113] == 0) {
    v13 = *(_QWORD*)(result + 80);
    if (v13 == 0) {
      GameRoutine_60a310(0, a2, a3, a4);
    }
    return (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 48LL))(v13);
  }
  v6 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(result + 16) + 8LL) + 11276LL);
  if ((v6 & 1) != 0 && (v6 & 0xC000000) != 0xC000000) {
    return result;
  }
  v7 = *(_QWORD*)(result + 32);
  v21 = v5;
  v9 = *(_QWORD*)(v7 + 8);
  if (v9 == 0 || *(_QWORD*)(v7 + 24) == 0) {
    goto LABEL_31;
  }
  v11 = v9 - 1;
  if ((v9 & (v9 - 1)) != 0) {
    v12 = v5;
    if (v9 <= v5) {
      v12 = (unsigned int)v5 % (unsigned int)v9;
    }
  }
  else {
    v12 = ((_DWORD)v9 - 1) & (unsigned int)v5;
  }
  v14 = *(__int64***)(*(_QWORD*)v7 + 8 * v12);
  if (v14 == nullptr || (v15 = *v14) == nullptr) {
  LABEL_31:
    v18 = result;
    v22 = &v21;
    v19 = GameRoutine_7a69c0((float*)v7, &v21,
                             (__int64)std___1_piecewise_construct_ptr, &v22);
    v20 = 1;
    goto LABEL_32;
  }
  if ((v9 & v11) == 0) {
    while (1) {
      v17 = v15[1];
      if (v17 == v5) {
        if (*((_DWORD*)v15 + 4) == (_DWORD)v5) {
          goto LABEL_34;
        }
      }
      else if ((v17 & v11) != v12) {
        goto LABEL_31;
      }
      v15 = (__int64*)*v15;
      if (v15 == nullptr) {
        goto LABEL_31;
      }
    }
  }
  while (1) {
    v16 = v15[1];
    if (v16 == v5) {
      break;
    }
    if (v16 >= v9) {
      v16 %= v9;
    }
    if (v16 != v12) {
      goto LABEL_31;
    }
  LABEL_21:
    v15 = (__int64*)*v15;
    if (v15 == nullptr) {
      goto LABEL_31;
    }
  }
  if (*((_DWORD*)v15 + 4) != (_DWORD)v5) {
    goto LABEL_21;
  }
LABEL_34:
  v18 = result;
  v22 = &v21;
  v19 = GameRoutine_7a69c0((float*)v7, &v21,
                           (__int64)std___1_piecewise_construct_ptr, &v22);
  v20 = *(_DWORD*)(v19 + 20) + 1;
LABEL_32:
  *(_DWORD*)(v19 + 20) = v20;
  return GameRoutine_6e3d00(*(_QWORD*)(v18 + 40), a2);
}

#pragma GCC visibility pop
