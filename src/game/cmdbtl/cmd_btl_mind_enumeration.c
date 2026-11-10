#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_edb440(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_cmdbtl_CmdBtlMindEnumeration_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* CmdBtlMindEnumeration_Destructor_alt1(_QWORD* result) __asm__(
    "CmdBtlMindEnumeration_Destructor");
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
extern __int64 (*GameData_1fed660[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_cmdbtl_anonymous_ProcCmdBtlSeqAI_vtable[])();
__int64 CmdBtlMindEnumeration_eab1e0(__int64 a1);
__int64 GameRoutine_e766a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_e76770(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_e76940(_QWORD, _QWORD);
__int64 GameRoutine_e76a50(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_e76c00(_QWORD, _QWORD);
__int64 GameRoutine_e76d20(_QWORD, _QWORD);
__int64 GameRoutine_e779a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ea60e0(_QWORD, _QWORD);
__int64 MindBtlInfo_Destructor(_QWORD);
__int64 MindBtlInfo_edb660(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_1fed478[])();
extern __int64 (*GameData_1fed4f8[])();
extern __int64 GameData_212f730[2];
extern __int64 GameData_212f738;
extern __int64 GameData_2203490;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212ea58;
extern __int64* GameData_212f7d0[4];
extern __int64* GameData_212f968;
void __attribute__((noreturn)) GameRoutine_ea6540(_QWORD);
__int64 game_cmdbtl_CmdBtlMindEnumeration_CalcWholeMind_SkillMind(__int64 a1,
                                                                  _QWORD* a2);
__int64 CmdBtlMindEnumeration_ea5760(__int64 a1, char a2, __int64* a3, int a4);
__int64 game_cmdbtl_CmdBtlMindEnumeration_CalcWholeMind_Link(__int64 a1,
                                                             unsigned int a2,
                                                             __int64 (**a3)());
_QWORD* CmdbtlPartyNatives_e9a800(_QWORD*, __int64);
__int64 CmdBtlParty_e774a0(__int64, __int64*);
__int64 GameRoutine_790080(__int64);
__int64 GameRoutine_ea60e0_alt1(__int64*, __int64,
                                long double) __asm__("GameRoutine_ea60e0");
__int64 GameRoutine_ea6580(__int64 result, int*, __int64, char, __n128);
__int64 GameRoutine_ed7c40(__int64, __int64*);
__int64 MindBtlInfo_Destructor_alt1(_QWORD*) __asm__("MindBtlInfo_Destructor");
__int64 Unit_6cbdc0(__int64, _DWORD*, unsigned __int16*, int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_Unit_GetParam(__int64);
__int64 game_cmdbtl_e76460(__int64, __int64*, __int64, __int16);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 BattleSide_Destructor(_QWORD*);
__n128 GameRoutine_ed8c10(__int64);
__n128 GameRoutine_ed90e0(__int64);
__n128 game_cmdbtl_CmdBtlMindEnumeration_CalcWholeMind_SkillMind_alt1(
    __int64, __int64 (**)()) __asm__("game_cmdbtl_CmdBtlMindEnumeration_"
                                     "CalcWholeMind_SkillMind");
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
bool game_cmdbtl_e76590(__int64, __int64, _DWORD*, int, unsigned __int16*);
extern _QWORD GameData_1b018e8[4];
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN game_g_random_mutex;
extern __int16* GameData_212cf08[9];
extern __int64 (*GameData_1fef008[])();
extern __int64 (*GameData_1fef2b8[])();
extern __int64 (*game_cmdbtl_MindBase_vtable)();
extern __int64 (*game_cmdbtl_MindBtlInfo_vtable[])();
extern __int64 (*game_cmdbtl_Target_vtable[])();
extern __int64 (*game_map_BattleArea_vtable[])();
extern __int64 (*game_map_BattleInfo_vtable[])();
extern __int64 (*game_map_BattleSides_vtable[])();
extern __int64* GameData_212c878[6];
extern __int64* game_g_empty_item_ptr;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212f5c8[2];
extern __int64 fw_memory_g_heap_manager;
void GameRoutine_ea9100(__int64, _QWORD*, _QWORD*, unsigned __int64, __n128);
void MindBtlInfo_edb740(__int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn))
GameRoutine_ea6540_alt1() __asm__("GameRoutine_ea6540");
void __attribute__((noreturn)) GameRoutine_ea94a0();
void game_cmdbtl_MindBtlInfo_CalcCmdBtlInfo(__int64, __int64, int);
void game_cmdbtl_ea5e20(__int64, __int64*, __int64*, unsigned __int64);
__n128 CmdBtlMindEnumeration_ea3900_alt1(
    __int64 a1, __int64** a2, _DWORD* a3,
    __int64 a4) __asm__("CmdBtlMindEnumeration_ea3900");
void CmdBtlMindEnumeration_ea4b40(__int64 a1, int a2);
void game_cmdbtl_CmdBtlMindEnumeration_CalcWholeMind_SkillMind_lambda0_Invoke(
    __int64 a1, _DWORD* a2);
__int64
CmdBtlMindEnumeration_ea4b40_alt1(__int64 result,
                                  int) __asm__("CmdBtlMindEnumeration_ea4b40");
__int64 GameHr_ea6580(__int64 result, int*, __int64, char);
__int64 GameRoutine_ea9100_alt1(__int64 result, _QWORD*, _QWORD*,
                                unsigned __int64) __asm__("GameRoutine_ea9100");
__int64 Unit_6cbdc0_alt1(_QWORD*, _DWORD*, unsigned __int16*,
                         int) __asm__("Unit_6cbdc0");
__int64 game_cmdbtl_MindBtlInfo_CalcCmdBtlInfo_alt1(
    __int64, __int64, int) __asm__("game_cmdbtl_MindBtlInfo_CalcCmdBtlInfo");
__int64 game_cmdbtl_ea5e20_alt1(__int64 result, __int64*, __int64*,
                                unsigned __int64) __asm__("game_cmdbtl_ea5e20");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void BattleSide_Destructor_alt1(_QWORD*) __asm__("BattleSide_Destructor");
void GameRoutine_ed8c10_alt1(__int64) __asm__("GameRoutine_ed8c10");
void GameRoutine_ed90e0_alt1(__int64) __asm__("GameRoutine_ed90e0");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void CmdBtlMindEnumeration_Destructor(_QWORD* a1);
void CmdBtlMindEnumeration_ea3900(__int64 a1, __int64** a2, _DWORD* a3,
                                  __int64 a4);

void CmdBtlMindEnumeration_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = a1[6];
  *a1 = game_cmdbtl_CmdBtlMindEnumeration_vtable;
  if (v1 != 0) {
    v3 = a1[7];
    if (v1 == v3) {
      goto LABEL_5;
    }
    do {
      v4 = v3 - 144;
      MindBtlInfo_Destructor_alt1((_QWORD*)(v3 - 136));
      v3 = v4;
    } while (v4 != v1);
    v5 = a1[6];
    a1[7] = v1;
    v1 = v5;
    if (v5 != 0) {
    LABEL_5:
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v1);
    }
  }
  v7 = a1[2];
  if (v7 != 0) {
    v8 = a1[3];
    if (v7 == v8) {
      goto LABEL_15;
    }
    do {
      v9 = *(_QWORD*)(v8 - 8);
      if (v9 != 0) {
        std___1___shared_weak_count___release_weak_alt2(v9);
      }
      v8 -= 16;
    } while (v8 != v7);
    v10 = a1[2];
    a1[3] = v7;
    v7 = v10;
    if (v10 != 0) {
    LABEL_15:
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v7);
    }
  }
}

void CmdBtlMindEnumeration_ea3900(__int64 a1, __int64** a2, _DWORD* a3,
                                  __int64 a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64* i;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int* v23;
  int* v24;
  __int64* v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  bool v31;
  int v32;
  __int64 v33;
  _BYTE* v34;
  __int64 v35;
  bool v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int* v41;
  __int64 v42;
  __int64 v43;
  __int64* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  int v49;
  _BYTE* v50;
  __int64 v51;
  __int64 v52;
  bool v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  int* v64;
  __int64 v65;
  int v66;
  __int64 v67;
  __int64 v68;
  int* v69;
  __int64 v70;
  __int64 v71;
  __int64* v72;
  __int64* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  int v78;
  _QWORD* v79;
  __int64 (**v80)();
  __int64 v81;
  int v82;
  int v83;
  _QWORD* v84;
  __int16* v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  bool v91;
  int v92;
  __int64 v93;
  __int64 v94;
  int v95;
  __int64 v96;
  int v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  char v101;
  __int64 v102;
  __int64* v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  _BOOL4 v107;
  __int64 v108;
  int v109;
  int v110;
  int v111;
  int v112;
  unsigned int v113;
  int v114;
  _QWORD* v115;
  unsigned __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  unsigned __int64 v120;
  __int64 v121;
  char* v122;
  unsigned __int64 v123;
  char v124;
  int v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  int v129;
  unsigned __int64 v130;
  char* v131;
  __int64 v132;
  unsigned __int64 v133;
  unsigned __int64 v134;
  __int64 v135;
  unsigned __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  char* v141;
  __int64* v142;
  __int64 v143;
  unsigned __int64 v144;
  _QWORD* v145;
  __int64 v146;
  __int64* v147;
  int v148;
  unsigned int v149;
  unsigned int v150;
  int v151;
  int v152;
  unsigned int v153;
  char* v154;
  _DWORD* v155;
  __int64 v156;
  __int64 (**v157)();
  int* v158;
  _BOOL4 v159;
  unsigned int v160;
  __int64 v161;
  __int64 v162;
  __int64 (**v163)();
  int v164;
  struct {
    __int64 (**v165)();
    __int64 (**v166)();
  } v165_;
  struct {
    __int64 v167;
    char gap120_[8];
    __int64* v168;
    char gap136_[76];
    int v169;
  } v167_;
  struct {
    __int64 v170[12];
    char gap968_[4];
    int v171;
  } v170_;
  __int64 v172[95];
  struct {
    _QWORD v173[98];
    __int16 v174;
    char gap3178_[10];
    __int16 v175;
    char gap3190_[8162];
    int v176;
    char gap11356_[36];
    __int64 (**v177)();
    __int64 v178;
  } v173_;

  v5 = *(_QWORD*)(a1 + 48);
  v4 = *(_QWORD*)(a1 + 56);
  v9 = a1;
  if (v5 != v4) {
    do {
      v10 = v4 - 144;
      MindBtlInfo_Destructor_alt1((_QWORD*)(v4 - 136));
      v4 = v10;
    } while (v10 != v5);
  }
  *(_QWORD*)(v9 + 56) = v5;
  if ((__int64**)(v9 + 16) != a2) {
    game_cmdbtl_ea5e20_alt1(v9 + 16, *a2, a2[1],
                            ((char*)a2[1] - (char*)*a2) >> 4);
  }
  v11 = GameData_212ea58;
  if (*(_QWORD*)(v9 + 24) != *(_QWORD*)(v9 + 16)) {
    v12 = *a2;
    v13 = std___1___shared_weak_count_lock_alt1((*a2)[1]);
    v14 = *(_QWORD*)(*(_QWORD*)(*v12 + 16) + 440LL);
    if (v14 != 0 &&
        (unsigned __int64)(v15 = *(unsigned __int8*)(v14 + 16)) <= 3) {
      v16 = GameData_1b018e8[v15];
    }
    else {
      v16 = 392;
    }
    *(_DWORD*)(v9 + 8) = *(_DWORD*)(*v11 + v16 + 672);
    if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v63 = v13;
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak_alt2(v63);
      if ((a4 & 0x100000000LL) == 0) {
        goto LABEL_13;
      }
      goto LABEL_12;
    }
  }
  if ((a4 & 0x100000000LL) != 0) {
  LABEL_12:
    *(_DWORD*)(v9 + 8) = a4;
  }
LABEL_13:
  *(_DWORD*)(v9 + 40) = *a3;
  CmdBtlMindEnumeration_ea4b40_alt1(v9, 0);
  v17 = *(__int64**)(v9 + 16);
  for (i = *(__int64**)(v9 + 24); v17 != i; v17 += 2) {
    v165_.v165 = nullptr;
    v165_.v166 = nullptr;
    v19 = v17[1];
    if (v19 != 0 && (v20 = std___1___shared_weak_count_lock_alt1(v19),
                     v165_.v166 = (__int64 (**)(void))v20, v20 != 0)) {
      v21 = v20;
      v165_.v165 = (__int64 (**)(void))*v17;
      game_cmdbtl_CmdBtlMindEnumeration_CalcWholeMind_SkillMind(v9,
                                                                &v165_.v165);
      if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
        std___1___shared_weak_count___release_weak_alt2(v21);
      }
    }
    else {
      game_cmdbtl_CmdBtlMindEnumeration_CalcWholeMind_SkillMind(v9,
                                                                &v165_.v165);
    }
  }
  v162 = v9;
  if ((*(_BYTE*)(v9 + 40) & 8) != 0) {
    v24 = *(int**)(v9 + 56);
    goto LABEL_143;
  }
  v22 = *(_QWORD*)(v9 + 48);
  v23 = *(int**)(v9 + 56);
  v24 = v23;
  if ((int*)v22 == v23) {
    goto LABEL_71;
  }
  v25 = GameData_212c878[0];
  while (1) {
    v26 = *(_QWORD*)(v22 + 48);
    if (v26 == 0 || *(_QWORD*)(v26 + 8) == -1) {
      v28 = (*(__int64 (**)(__int64))(*(_QWORD*)(v22 + 8) + 32LL))(v22 + 8);
      v26 = *(_QWORD*)(v28 + 88);
      if (v26 == 0) {
        goto LABEL_25;
      }
      v27 = (__int64*)(v28 + 80);
    }
    else {
      v27 = (__int64*)(v22 + 40);
    }
    v29 = *v27;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 16), 1u,
                              memory_order_relaxed);
    v30 = std___1___shared_weak_count_lock_alt1(v26);
    std___1___shared_weak_count___release_weak_alt2(v26);
    v31 = v30 == 0 || v29 == 0;
    if (v31) {
      if (v30 == 0) {
        goto LABEL_25;
      }
    LABEL_60:
      v36 = false;
      goto LABEL_68;
    }
    v32 = *(_DWORD*)(v22 + 24);
    if (v32 < 0) {
      goto LABEL_60;
    }
    v33 = *v25;
    v34 = (_BYTE*)(*(_QWORD*)(v29 + 16) + 871LL);
    v35 = 5;
    while (1) {
      if (*(_WORD*)(v34 - 43) != 0 && (*(v34 - 40) & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v33 + 64) +
                                         8LL * *(unsigned __int16*)(v34 - 43)) +
                              72LL) < 8u) {
        LODWORD(v35) = v35 - 5;
        goto LABEL_67;
      }
      if (*(_WORD*)(v34 - 35) != 0 && (*(v34 - 32) & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v33 + 64) +
                                         8LL * *(unsigned __int16*)(v34 - 35)) +
                              72LL) < 8u) {
        LODWORD(v35) = v35 - 4;
        goto LABEL_67;
      }
      if (*(_WORD*)(v34 - 27) != 0 && (*(v34 - 24) & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v33 + 64) +
                                         8LL * *(unsigned __int16*)(v34 - 27)) +
                              72LL) < 8u) {
        LODWORD(v35) = v35 - 3;
        goto LABEL_67;
      }
      if (*(_WORD*)(v34 - 19) != 0 && (*(v34 - 16) & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v33 + 64) +
                                         8LL * *(unsigned __int16*)(v34 - 19)) +
                              72LL) < 8u) {
        LODWORD(v35) = v35 - 2;
        goto LABEL_67;
      }
      if (*(_WORD*)(v34 - 11) != 0 && (*(v34 - 8) & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v33 + 64) +
                                         8LL * *(unsigned __int16*)(v34 - 11)) +
                              72LL) < 8u) {
        break;
      }
      if (*(_WORD*)(v34 - 3) != 0 && (*v34 & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v33 + 64) +
                                         8LL * *(unsigned __int16*)(v34 - 3)) +
                              72LL) < 8u) {
        goto LABEL_67;
      }
      v34 += 48;
      v35 += 6;
      if (v35 == 35) {
        LODWORD(v35) = -1;
        goto LABEL_67;
      }
    }
    LODWORD(v35) = v35 - 1;
  LABEL_67:
    v36 = v32 != (_DWORD)v35;
  LABEL_68:
    if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
      std___1___shared_weak_count___release_weak_alt2(v30);
      if (v36) {
        break;
      }
      goto LABEL_25;
    }
    if (v36) {
      break;
    }
  LABEL_25:
    v22 += 144;
    if ((int*)v22 == v23) {
      v24 = v23;
      goto LABEL_138;
    }
  }
  v24 = v23;
LABEL_71:
  if ((int*)v22 != v23) {
    v37 = v22 + 144;
    if ((int*)(v22 + 144) != v23) {
      v24 = (int*)v22;
      while (1) {
        v41 = v24;
        v42 = v22;
        v43 = *(_QWORD*)(v22 + 192);
        v22 = v37;
        if (v43 == 0 || *(_QWORD*)(v43 + 8) == -1) {
          v45 = (*(__int64 (**)(__int64))(*(_QWORD*)(v42 + 152) + 32LL))(v42 +
                                                                         152);
          v43 = *(_QWORD*)(v45 + 88);
          if (v43 == 0) {
            goto LABEL_122;
          }
          v44 = (__int64*)(v45 + 80);
        }
        else {
          v44 = (__int64*)(v42 + 184);
        }
        v46 = *v44;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v43 + 16), 1u,
                                  memory_order_relaxed);
        v47 = std___1___shared_weak_count_lock_alt1(v43);
        std___1___shared_weak_count___release_weak_alt2(v43);
        if (v47 == 0 || v46 == 0) {
          break;
        }
        v49 = *(_DWORD*)(v42 + 168);
        if (v49 < 0) {
          goto LABEL_110;
        }
        v50 = (_BYTE*)(*(_QWORD*)(v46 + 16) + 871LL);
        v51 = 5;
        v52 = *GameData_212c878[0];
        while (1) {
          if (*(_WORD*)(v50 - 43) != 0 && (*(v50 - 40) & 1) != 0 &&
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v52 + 64) +
                                             8LL * *(unsigned __int16*)(v50 -
                                                                        43)) +
                                  72LL) < 8u) {
            LODWORD(v51) = v51 - 5;
            goto LABEL_117;
          }
          if (*(_WORD*)(v50 - 35) != 0 && (*(v50 - 32) & 1) != 0 &&
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v52 + 64) +
                                             8LL * *(unsigned __int16*)(v50 -
                                                                        35)) +
                                  72LL) < 8u) {
            LODWORD(v51) = v51 - 4;
            goto LABEL_117;
          }
          if (*(_WORD*)(v50 - 27) != 0 && (*(v50 - 24) & 1) != 0 &&
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v52 + 64) +
                                             8LL * *(unsigned __int16*)(v50 -
                                                                        27)) +
                                  72LL) < 8u) {
            LODWORD(v51) = v51 - 3;
            goto LABEL_117;
          }
          if (*(_WORD*)(v50 - 19) != 0 && (*(v50 - 16) & 1) != 0 &&
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v52 + 64) +
                                             8LL * *(unsigned __int16*)(v50 -
                                                                        19)) +
                                  72LL) < 8u) {
            LODWORD(v51) = v51 - 2;
            goto LABEL_117;
          }
          if (*(_WORD*)(v50 - 11) != 0 && (*(v50 - 8) & 1) != 0 &&
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v52 + 64) +
                                             8LL * *(unsigned __int16*)(v50 -
                                                                        11)) +
                                  72LL) < 8u) {
            break;
          }
          if (*(_WORD*)(v50 - 3) != 0 && (*v50 & 1) != 0 &&
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v52 + 64) +
                                             8LL * *(unsigned __int16*)(v50 -
                                                                        3)) +
                                  72LL) < 8u) {
            goto LABEL_117;
          }
          v50 += 48;
          v51 += 6;
          if (v51 == 35) {
            LODWORD(v51) = -1;
            goto LABEL_117;
          }
        }
        LODWORD(v51) = v51 - 1;
      LABEL_117:
        v53 = v49 != (_DWORD)v51;
      LABEL_118:
        if (atomic_fetch_add((atomic_ullong* volatile)(v47 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (!v53) {
            goto LABEL_122;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47);
          std___1___shared_weak_count___release_weak_alt2(v47);
          if (!v53) {
          LABEL_122:
            *v41 = *(_DWORD*)v22;
            v54 = *(_QWORD*)(v42 + 160);
            v55 = *(_QWORD*)(v42 + 176);
            *((_QWORD*)v41 + 3) = *(_QWORD*)(v42 + 168);
            *((_QWORD*)v41 + 4) = v55;
            *((_QWORD*)v41 + 2) = v54;
            v57 = *(_QWORD*)(v42 + 184);
            v56 = *(_QWORD*)(v42 + 192);
            if (v56 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v56 + 16), 1u,
                                        memory_order_relaxed);
            }
            v58 = *((_QWORD*)v41 + 6);
            *((_QWORD*)v41 + 5) = v57;
            *((_QWORD*)v41 + 6) = v56;
            if (v58 != 0) {
              std___1___shared_weak_count___release_weak_alt2(v58);
            }
            v59 = *(_QWORD*)(v42 + 200);
            v41[16] = *(_DWORD*)(v42 + 208);
            *((_QWORD*)v41 + 7) = v59;
            v41[17] = *(_DWORD*)(v42 + 212);
            if (v41 != (int*)v22) {
              GameRoutine_ea9100_alt1(
                  (__int64)(v41 + 18), *(_QWORD**)(v42 + 216),
                  *(_QWORD**)(v42 + 224),
                  0xAAAAAAAAAAAAAAABLL * ((__int64)(*(_QWORD*)(v42 + 224) -
                                                    *(_QWORD*)(v42 + 216)) >>
                                          3));
            }
            v61 = *(_QWORD*)(v42 + 240);
            v60 = *(_QWORD*)(v42 + 248);
            if (v60 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v60 + 8), 1u,
                                        memory_order_relaxed);
            }
            v62 = *((_QWORD*)v41 + 13);
            *((_QWORD*)v41 + 12) = v61;
            *((_QWORD*)v41 + 13) = v60;
            if (v62 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v62 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v62 + 16LL))(v62);
              std___1___shared_weak_count___release_weak_alt2(v62);
            }
            v38 = *(_QWORD*)(v42 + 256);
            v39 = *(_QWORD*)(v42 + 264);
            v40 = *(_QWORD*)(v42 + 272);
            v41[34] = *(_DWORD*)(v42 + 280);
            *((_QWORD*)v41 + 15) = v39;
            *((_QWORD*)v41 + 16) = v40;
            *((_QWORD*)v41 + 14) = v38;
            v24 = v41 + 36;
            goto LABEL_75;
          }
        }
        v24 = v41;
      LABEL_75:
        v37 = v22 + 144;
        if ((int*)(v22 + 144) == v23) {
          goto LABEL_138;
        }
      }
      if (v47 == 0) {
        goto LABEL_122;
      }
    LABEL_110:
      v53 = false;
      goto LABEL_118;
    }
    v24 = (int*)v22;
  }
LABEL_138:
  v64 = *(int**)(v9 + 56);
  if (v24 == v64) {
    v24 = *(int**)(v9 + 56);
    v11 = GameData_212ea58;
  }
  else {
    v11 = &GameData_2203490;
    do {
      MindBtlInfo_Destructor_alt1((_QWORD*)v64 - 17);
      v64 -= 36;
    } while (v64 != v24);
    *(_QWORD*)(v9 + 56) = v24;
  }
LABEL_143:
  v65 = *(_QWORD*)(v9 + 48);
  if (v24 == (int*)v65) {
    CmdBtlMindEnumeration_ea4b40_alt1(v9, 1);
    v65 = *(_QWORD*)(v9 + 48);
    v24 = *(int**)(v9 + 56);
  }
  if ((int*)v65 != v24) {
    v66 = *(_DWORD*)(v9 + 40);
    do {
      *(_DWORD*)(v65 + 60) = v66;
      v65 += 144;
    } while ((int*)v65 != v24);
    v65 = *(_QWORD*)(v9 + 48);
    v24 = *(int**)(v9 + 56);
  }
  if ((int*)v65 != v24) {
    v67 = v65 + 112;
    v157 = (__int64 (**)(void))(GameData_212f5c8[0] + 16);
    v158 = v24;
    while (1) {
      v70 = v67 - 104;
      MindBtlInfo_edb740(v67 - 104);
      GameRoutine_ed8c10_alt1(v67 - 104);
      GameRoutine_ed90e0_alt1(v67 - 104);
      v71 = *(_QWORD*)(v67 - 64);
      v72 = (__int64*)(v67 - 72);
      if (v71 == 0 || (v73 = (__int64*)(v67 - 72), *(_QWORD*)(v71 + 8) == -1)) {
        v74 = (*(__int64 (**)(__int64))(*(_QWORD*)v70 + 32LL))(v67 - 104);
        v71 = *(_QWORD*)(v74 + 88);
        if (v71 == 0) {
          goto LABEL_170;
        }
        v73 = (__int64*)(v74 + 80);
      }
      v75 = *v73;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v71 + 16), 1u,
                                memory_order_relaxed);
      v76 = std___1___shared_weak_count_lock_alt1(v71);
      std___1___shared_weak_count___release_weak_alt2(v71);
      if (v76 != 0 && v75 != 0) {
        v77 = *(_QWORD*)(v67 - 80);
        v165_.v165 = nullptr;
        GameRoutine_ed7c40(v67 - 104, (__int64*)&v165_.v165);
        if (v77 != 0) {
          v78 = *(_WORD*)(v77 + 16) & 0xFFF;
        }
        else {
          v78 = 0;
        }
        v79 = *(_QWORD**)(v75 + 16);
        v164 = v78;
        v80 = v165_.v165;
        v163 = nullptr;
        if (v165_.v165 != nullptr) {
          v80 = (__int64 (**)(void))*v165_.v165;
        }
        v163 = v80;
        *(_DWORD*)(v67 + 8) =
            Unit_6cbdc0_alt1(v79, &v164, (unsigned __int16*)&v163, 1);
      }
      else if (v76 == 0) {
        goto LABEL_170;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v76 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v76 + 16LL))(v76);
        std___1___shared_weak_count___release_weak_alt2(v76);
      }
    LABEL_170:
      v81 = *v11 + ((__int64)*(int*)(v9 + 8) << 7);
      GameRoutine_790080((__int64)&v165_.v165);
      v165_.v165 = v157;
      game_cmdbtl_MindBtlInfo_CalcCmdBtlInfo_alt1(v67 - 104,
                                                  (__int64)&v165_.v165, 1);
      v82 = *(_DWORD*)(v81 + 684);
      v83 = *(_DWORD*)(v81 + 692) + *(_DWORD*)(v81 + 688);
      if (v83 <= 1) {
        v83 = 1;
      }
      v160 = v83;
      v84 =
          &v173_
               .v173[8 * (unsigned __int64)(unsigned int)(v173_.v176 - 1) + 96];
      v85 = (__int16*)((__int128*)0x10LL);
      if (v173_.v176 > 0) {
        v85 = (__int16*)(v84 + 2);
      }
      if (*v85 >= 1) {
        v86 = 10000;
      }
      else {
        v86 = 8000;
      }
      v87 = *(unsigned __int8*)(v67 - 96);
      v88 = v86 - 1000;
      if (v87 == 10) {
        v86 -= 100000;
      }
      if (v87 == 2) {
        v89 = v88;
      }
      else {
        v89 = v86;
      }
      if (v173_.v176 < 1) {
        goto LABEL_192;
      }
      v90 = *((__int16*)v84 + 8) - (*(_DWORD*)v67 + v173_.v174);
      if (v167_.v169 >= 1) {
        v89 +=
            (int)(float)((float)((float)v90 / (float)(unsigned int)v167_.v169) *
                         0x1.2c00000000000p+7f);
      }
      v91 = v90 <= 0;
      v92 = v90 >= 0 ? v89 : v89 - 10;
      if (v91) {
        v89 = v92;
      }
      else {
        v89 += 10;
      }
      if (v87 == 2) {
      LABEL_192:
        v93 = 0;
        v159 = false;
        v94 = *(_QWORD*)(v67 - 64);
        if (v94 != 0) {
          goto LABEL_202;
        }
      }
      else {
        v95 = *((__int16*)v84 + 14);
        v96 = (unsigned int)(v173_.v175 - v95);
        if (v170_.v171 >= 1) {
          v89 += (int)(float)((float)((float)(int)v96 /
                                      (float)(unsigned int)v170_.v171) *
                              0x1.9000000000000p+8f);
        }
        v97 = v89 + 10;
        v93 = v96 << 32;
        if ((int)v96 <= 0) {
          v97 = v89;
        }
        v159 = v95 < 1;
        if (v95 >= 1) {
          v89 = v97;
        }
        else {
          v89 = v97 + 350;
        }
        v94 = *(_QWORD*)(v67 - 64);
        if (v94 != 0) {
        LABEL_202:
          if (*(_QWORD*)(v94 + 8) != -1) {
            goto LABEL_205;
          }
        }
      }
      v98 = (*(__int64 (**)(__int64))(*(_QWORD*)v70 + 32LL))(v67 - 104);
      v94 = *(_QWORD*)(v98 + 88);
      if (v94 == 0) {
        v99 = 0;
        v100 = 0;
        v101 = 1;
        goto LABEL_209;
      }
      v72 = (__int64*)(v98 + 80);
    LABEL_205:
      v99 = *v72;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v94 + 16), 1u,
                                memory_order_relaxed);
      v100 = std___1___shared_weak_count_lock_alt1(v94);
      v101 = 0;
      if (v100 == 0) {
        v99 = 0;
      }
    LABEL_209:
      v102 = v81 + 672;
      v103 = v11;
      v104 = *(_QWORD*)(v81 + 760);
      if (v104 != 0) {
        v105 = *(_QWORD*)(v102 + 80);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v104 + 16), 1u,
                                  memory_order_relaxed);
        v106 = std___1___shared_weak_count_lock_alt1(v104);
        if (v106 != 0) {
          v107 = v99 == v105;
          if (atomic_fetch_add((atomic_ullong* volatile)(v106 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v108 = v106;
            (*(void (**)(__int64))(*(_QWORD*)v106 + 16LL))(v106);
            std___1___shared_weak_count___release_weak_alt2(v108);
          }
        }
        else {
          v107 = v99 == 0;
        }
        std___1___shared_weak_count___release_weak_alt2(v104);
        if (v100 == 0) {
        LABEL_218:
          if ((v101 & 1) != 0) {
            goto LABEL_220;
          }
        LABEL_219:
          std___1___shared_weak_count___release_weak_alt2(v94);
          goto LABEL_220;
        }
      }
      else {
        v107 = v99 == 0;
        if (v100 == 0) {
          goto LABEL_218;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v100 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        goto LABEL_218;
      }
      (*(void (**)(__int64))(*(_QWORD*)v100 + 16LL))(v100);
      std___1___shared_weak_count___release_weak_alt2(v100);
      if ((v101 & 1) == 0) {
        goto LABEL_219;
      }
    LABEL_220:
      v31 = !v107;
      v9 = v162;
      v11 = v103;
      if (v31) {
        v109 = v89 + 150;
      }
      else {
        v109 = v89;
      }
      v110 = *(unsigned __int8*)(v67 - 96);
      if ((unsigned int)(v110 - 7) > 2) {
        goto LABEL_231;
      }
      v111 = v109 - *(_DWORD*)(v67 + 12);
      if (v110 != 9) {
        if (v159) {
          v111 -= 150;
        }
        v109 = v111 - 30;
      LABEL_231:
        v114 = *(_DWORD*)(v67 + 16) + v109;
        if ((unsigned int)(v110 - 3) >= 2) {
          v113 = v114;
        }
        else {
          v113 = v114 - 100000;
        }
        goto LABEL_234;
      }
      v112 = v111 - 1000;
      if ((float)((float)v82 / (float)v160) < 0x1.0000000000000p-1f) {
        v112 = v111;
      }
      v113 = *(_DWORD*)(v67 + 16) + v112;
    LABEL_234:
      v165_.v165 = game_map_BattleInfo_vtable;
      v173_.v177 = game_map_BattleArea_vtable;
      if (v173_.v178 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v173_.v178 + 8LL))(v173_.v178);
        v173_.v178 = 0;
      }
      v165_.v166 = game_map_BattleSides_vtable;
      BattleSide_Destructor_alt1(v173_.v173);
      BattleSide_Destructor_alt1(v172);
      BattleSide_Destructor_alt1(v170_.v170);
      BattleSide_Destructor_alt1(&v167_.v167);
      *(_QWORD*)(v67 + 20) = v93 | v113;
      v167_.v168 = (__int64*)&v165_.v165;
      v115 = (_QWORD*)*v11;
      v165_.v165 = GameData_1fef008;
      CmdbtlPartyNatives_e9a800(v115, (__int64)&v165_.v165);
      if (v167_.v168 == (__int64*)&v165_.v165) {
        v68 = 32;
      }
      else {
        if (v167_.v168 == nullptr) {
          goto LABEL_153;
        }
        v68 = 40;
      }
      (*(void (**)(__int64))(*v167_.v168 + v68))((__int64)v167_.v168);
    LABEL_153:
      v69 = (int*)(v67 + 32);
      v67 += 144;
      if (v69 == v158) {
        v65 = *(_QWORD*)(v162 + 48);
        v24 = *(int**)(v162 + 56);
        break;
      }
    }
  }
  if ((int*)v65 == v24) {
    *(_QWORD*)(v9 + 72) = 0;
    *(_DWORD*)(v9 + 80) = 0;
    return;
  }
  v116 = 0x8E38E38E38E38E39LL;
  GameHr_ea6580(
      v65, v24,
      (2 * __clz(0x8E38E38E38E38E39LL * (((__int64)v24 - v65) >> 4))) ^ 0x7E,
      1);
  v118 = *(_QWORD*)(v9 + 48);
  v117 = *(_QWORD*)(v9 + 56);
  *(_QWORD*)(v9 + 72) = 0;
  *(_DWORD*)(v9 + 80) = 0;
  if (v117 == v118) {
    return;
  }
  v119 = 0;
  v120 = 0;
  v121 = 0;
  v122 = nullptr;
  v123 = 0;
  v124 = 0;
  v125 = 0;
  if (*(_QWORD*)(v9 + 24) - *(_QWORD*)(v9 + 16) <= 0x10u) {
    v126 = 2;
  }
  else {
    v126 = 4;
  }
  v161 = v126;
  while (2) {
    v127 = *(_QWORD*)(v162 + 48);
    if (((*(_QWORD*)(v162 + 56) - v127) >> 4) * v116 > v120) {
      v128 = v127 + v119;
      v129 = *(_DWORD*)(v127 + v119 + 132);
      if (v129 < 0) {
        goto LABEL_249;
      }
      if ((v124 & 1) != 0) {
        if (v125 - v129 > 150) {
          v124 = 1;
        LABEL_249:
          ++v120;
          v119 += 144;
          if (v126 == v120) {
            break;
          }
          continue;
        }
        v129 = v125;
      }
      if ((unsigned __int64)v122 < v123) {
        *(_QWORD*)v122 = v128;
        v122 += 8;
        v124 = 1;
        v125 = v129;
      }
      else {
        v130 = v116;
        v131 = &v122[-v121];
        v132 = (__int64)&v122[-v121] >> 3;
        v133 = v132 + 1;
        if ((unsigned __int64)(v132 + 1) >> 61 != 0) {
          GameRoutine_ea94a0();
        }
        if ((__int64)(v123 - v121) >> 2 > v133) {
          v133 = (__int64)(v123 - v121) >> 2;
        }
        if (v123 - v121 >= 0x7FFFFFFFFFFFFFF8LL) {
          v134 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v134 = v133;
        }
        if (v134 != 0) {
          if (v134 >> 61 != 0) {
            goto LABEL_296;
          }
          v135 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v134, 16, 0);
        }
        else {
          v135 = 0;
        }
        v123 = v135 + 8 * v134;
        v136 = (unsigned __int64)&v122[-v121];
        v137 = (__int64)&v131[v135 + -8 * v132];
        *(_QWORD*)&v131[v135] = v128;
        v122 = &v131[v135 + 8];
        memcpy_alt1(v137, v121, v136);
        if (v121 != 0) {
          v138 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v138 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v138, v121);
        }
        v126 = v161;
        v124 = 1;
        v125 = v129;
        v121 = v137;
        v116 = v130;
      }
      goto LABEL_249;
    }
    break;
  }
  v139 = (__int64)&v122[-v121];
  if (v122 == (char*)v121) {
    v140 = v162;
    v143 = *(_QWORD*)(v162 + 48);
    if ((unsigned __int64)v122 >= v123) {
      if ((__int64)(v123 - v121) >> 2 <= (unsigned __int64)((v139 >> 3) + 1)) {
        v144 = (v139 >> 3) + 1;
      }
      else {
        v144 = (__int64)(v123 - v121) >> 2;
      }
      if (v123 - v121 >= 0x7FFFFFFFFFFFFFF8LL) {
        v144 = 0x1FFFFFFFFFFFFFFFLL;
      }
      if (v144 >> 61 != 0) {
      LABEL_296:
        GameRoutine_60a210();
      }
      v142 = (__int64*)fw_memory_g_heap_manager_ptr;
      v145 = (_QWORD*)(fw_memory_HeapManager_Allocate_alt1(
                           *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v144, 16,
                           0) +
                       v139);
      *v145 = v143;
      v141 = (char*)(v145 + 1);
      memcpy_alt1((__int64)v145, v121, (unsigned __int64)&v122[-v121]);
      if (v122 != nullptr) {
        v146 = 128;
        if (*(_QWORD*)(*v142 + 200) == 0) {
          v146 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*v142 + v146, v121);
      }
      v121 = (__int64)v145;
    }
    else {
      *(_QWORD*)v122 = v143;
      v142 = &fw_memory_g_heap_manager;
      v141 = v122 + 8;
    }
  }
  else {
    v140 = v162;
    v141 = v122;
    v142 = (__int64*)fw_memory_g_heap_manager_ptr;
  }
  nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
  v147 = game_map_MapRandom_instance__ptr[0];
  v148 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((_UNKNOWN**)0x8LL));
  v149 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
  v150 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
         (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
  *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
      *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
  *((_DWORD*)v147 + 1) = v148;
  v151 = (v150 >> 8) ^ (v149 >> 19) ^ v150 ^ v149;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v147) = v149;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v147 + 4) = v151;
  v152 = v151 & 0x7FFFFFFF;
  nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
  v153 = v152 % (int)((unsigned __int64)&v141[-v121] >> 3);
  if (v141 != (char*)v121) {
    v154 = (char*)v121;
    do {
      v155 = *(_DWORD**)v154;
      v154 += 8;
      *v155 = 1;
    } while (v154 != v141);
  }
  **(_DWORD**)(v121 + 8LL * v153) = 2;
  *(_QWORD*)(v140 + 72) = *(_QWORD*)(v121 + 8LL * v153) + 8LL;
  *(_DWORD*)(v140 + 80) = *(_DWORD*)(*(_QWORD*)(v121 + 8LL * v153) + 136LL);
  v156 = 128;
  if (*(_QWORD*)(*v142 + 200) == 0) {
    v156 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(*v142 + v156, v121);
}

void CmdBtlMindEnumeration_ea4b40(__int64 a1, int a2)
{

#pragma clang fp contract(off)
  __int64* v2;
  __int64* v3;
  int v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  long double v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  _QWORD* v25;
  _QWORD* v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  int v30;
  int v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v37;
  int v38;
  __int64 (**v39)();
  __int128 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  _BYTE v44[12];
  struct {
    char gap120_[4];
    _DWORD v45[7];
    _QWORD* v46;
    _QWORD* v47;
    __int64 v48;
    __int64 v49;
    __int64 v50;
    int v51;
  } v45_;
  struct {
    __int64 v52;
    __int64 v53;
  } v52_;

  v2 = *(__int64**)(a1 + 16);
  v3 = *(__int64**)(a1 + 24);
  if (v2 != v3) {
    v4 = a2;
    v6 = *GameData_212ea58 + ((__int64)*(int*)(a1 + 8) << 7);
    v37 = v6;
    do {
      v8 = v2[1];
      if (v8 == 0) {
        goto LABEL_7;
      }
      v9 = std___1___shared_weak_count_lock(v8);
      if (v9 == 0) {
        goto LABEL_7;
      }
      v10 = *v2;
      v11 = v9;
      if (*v2 != 0) {
        v52_.v52 = *v2;
        v52_.v53 = v9;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                  memory_order_relaxed);
        v12 = CmdBtlParty_e774a0(v6 + 672, &v52_.v52);
        v13 = v52_.v53;
        if (v52_.v53 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v52_.v53 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v30 = v12;
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
          std___1___shared_weak_count___release_weak_alt1(v13);
          v31 = v30;
          v6 = v37;
          if (((v4 | v31) & 1) != 0) {
          LABEL_14:
            v38 = 0;
            LOBYTE(v40) = 0;
            v41 = 0;
            v42 = 0;
            v43 = 0;
            *(_QWORD*)&v44[4] = 0;
            memset(v45_.v45, 0, sizeof(v45_.v45));
            *(_QWORD*)((char*)&v40 + 4) = 0xFFFFFFFF00000000LL;
            *(_DWORD*)v44 = -1;
            v39 = game_cmdbtl_MindBtlInfo_vtable;
            v45_.v46 = nullptr;
            v45_.v47 = nullptr;
            v14 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
                fw_memory_g_heap_manager, 88, 16, 0);
            v15 = v45_.v47;
            v14[1] = 0;
            v14[2] = 0;
            v14[6] = 0;
            v14[7] = 0;
            v14[8] = 0;
            v14[9] = 0;
            v14[10] = 0;
            v45_.v47 = v14;
            *v14 = GameData_1fef2b8;
            v14[4] = &v39;
            v14[5] = 0;
            v14[3] = game_cmdbtl_Target_vtable;
            v45_.v46 = v14 + 3;
            if (v15 != nullptr &&
                atomic_fetch_add((atomic_ullong* volatile)(v15 + 1),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(_QWORD*))(*v15 + 16LL))(v15);
              std___1___shared_weak_count___release_weak_alt1(v15);
            }
            v16 = *(_DWORD*)(a1 + 8);
            v17 = v43;
            v45_.v51 = 0;
            v45_.v49 = 0;
            v45_.v50 = 0;
            v45_.v48 = 0;
            LOBYTE(v40) = 0;
            v41 = 0;
            v42 = 0;
            v43 = 0;
            *(_QWORD*)((char*)&v40 + 4) = v16 | 0xFFFFFFFF00000000LL;
            if (v17 != 0) {
              std___1___shared_weak_count___release_weak_alt1(v17);
            }
            *(_DWORD*)&v44[8] = 0;
            *(_QWORD*)v44 = 0xFFFFFFFFLL;
            (*(void (**)(__int64))((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v39))(
                (__int64)&v39);
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                                      memory_order_relaxed);
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                                      memory_order_relaxed);
            v18 = v43;
            v42 = v10;
            v43 = v11;
            if (v18 != 0) {
              std___1___shared_weak_count___release_weak_alt1(v18);
            }
            *(__n128*)&v19 =
                std___1___shared_weak_count___release_weak_alt1(v11);
            LOBYTE(v40) = 10;
            v20 = *(_QWORD*)(a1 + 56);
            if (v20 >= *(_QWORD*)(a1 + 64)) {
              v7 = GameRoutine_ea60e0_alt1((__int64*)(a1 + 48), (__int64)&v38,
                                           v19);
            }
            else {
              *(_DWORD*)v20 = v38;
              *(_QWORD*)(v20 + 8) = &game_cmdbtl_MindBase_vtable;
              v21 = v40;
              v22 = v41;
              *(_QWORD*)(v20 + 24) = *((_QWORD*)&v40 + 1);
              *(_QWORD*)(v20 + 32) = v22;
              *(_QWORD*)(v20 + 16) = v21;
              *(_QWORD*)(v20 + 40) = v42;
              v23 = v43;
              *(_QWORD*)(v20 + 48) = v43;
              if (v23 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 16),
                                          1u, memory_order_relaxed);
              }
              v24 = *(_DWORD*)v44;
              *(_QWORD*)(v20 + 72) = 0;
              *(_QWORD*)(v20 + 80) = 0;
              *(_QWORD*)(v20 + 88) = 0;
              *(_QWORD*)(v20 + 56) = __PAIR64__(*(unsigned int*)&v44[4], v24);
              *(_DWORD*)(v20 + 64) = *(_DWORD*)&v44[8];
              *(_DWORD*)(v20 + 68) = v45_.v45[0];
              v26 = *(_QWORD**)&v45_.v45[1];
              v25 = *(_QWORD**)&v45_.v45[3];
              v27 = *(_QWORD*)&v45_.v45[3] - *(_QWORD*)&v45_.v45[1];
              if (*(_QWORD*)&v45_.v45[3] != *(_QWORD*)&v45_.v45[1]) {
                if (0xAAAAAAAAAAAAAAABLL * (v27 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
                  GameRoutine_ea6540_alt1();
                }
                v28 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr,
                    *(_QWORD*)&v45_.v45[3] - *(_QWORD*)&v45_.v45[1], 16, 0);
                *(_QWORD*)(v20 + 72) = v28;
                *(_QWORD*)(v20 + 80) = v28;
                *(_QWORD*)(v20 + 88) = (char*)v28 + v27;
                do {
                  *v28 = *v26;
                  v28[1] = v26[1];
                  v29 = v26[2];
                  v28[2] = v29;
                  if (v29 != 0) {
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v29 + 8), 1u,
                        memory_order_relaxed);
                  }
                  v26 += 3;
                  v28 += 3;
                } while (v26 != v25);
                *(_QWORD*)(v20 + 80) = v28;
              }
              *(_QWORD*)(v20 + 8) = game_cmdbtl_MindBtlInfo_vtable;
              *(_QWORD*)(v20 + 96) = v45_.v46;
              v32 = v45_.v47;
              *(_QWORD*)(v20 + 104) = v45_.v47;
              if (v32 != nullptr) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 1),
                                          1u, memory_order_relaxed);
              }
              v33 = v45_.v48;
              v34 = v45_.v49;
              v35 = v45_.v50;
              v7 = v20 + 144;
              v4 = a2;
              v6 = v37;
              *(_DWORD*)(v20 + 136) = v45_.v51;
              *(_QWORD*)(v20 + 120) = v34;
              *(_QWORD*)(v20 + 128) = v35;
              *(_QWORD*)(v20 + 112) = v33;
            }
            *(_QWORD*)(a1 + 56) = v7;
            MindBtlInfo_Destructor_alt1(&v39);
          }
        }
        else if (((v4 | v12) & 1) != 0) {
          goto LABEL_14;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        std___1___shared_weak_count___release_weak_alt1(v11);
      }
    LABEL_7:
      v2 += 2;
    } while (v2 != v3);
  }
}

__int64 game_cmdbtl_CmdBtlMindEnumeration_CalcWholeMind_SkillMind(__int64 a1,
                                                                  _QWORD* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  char v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  char v22;
  __int64 v23;
  __int64 v24;
  char v25;
  __int64 v26;
  char v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 (**v33)();
  __int64 (***v34)();
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  int v44;
  __int64 v45;
  int v46;
  __int64 v47;
  __int64 v48;
  int v49;
  __int64 v50;
  int v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  _QWORD v68[2];
  _QWORD v69[2];
  __int64 v70;
  __int64 v71;
  _QWORD v72[2];
  _QWORD v73[2];
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;

  v4 = *GameData_212ea58 + ((__int64)*(int*)(a1 + 8) << 7);
  v5 = a2[1];
  v74 = *a2;
  v75 = v5;
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
  }
  result = GameRoutine_e76940(v4 + 672, &v74);
  v7 = v75;
  if (v75 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v75 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    v14 = result;
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
    result = v14;
    if ((v14 & 1) != 0) {
      goto LABEL_6;
    }
  }
  else if ((result & 1) != 0) {
  LABEL_6:
    v8 = 828;
    v9 = 0;
    do {
      v10 = a2[1];
      v11 = *(_QWORD*)(*a2 + 16LL);
      v73[0] = *a2;
      v73[1] = v10;
      if (v10 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                  memory_order_relaxed);
        result = GameRoutine_e76770(v4 + 672, v73, v11 + v8);
        v12 = result;
        if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if ((result & 1) != 0) {
            goto LABEL_16;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          result = std___1___shared_weak_count___release_weak(v10);
          if ((v12 & 1) != 0) {
          LABEL_16:
            v13 = a2[1];
            v72[0] = *a2;
            v72[1] = v13;
            if (v13 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                        memory_order_relaxed);
              result = CmdBtlMindEnumeration_ea5760(a1, 1, v72, v9);
              if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
                result = std___1___shared_weak_count___release_weak(v13);
              }
            }
            else {
              result = CmdBtlMindEnumeration_ea5760(a1, 1, v72, v9);
            }
          }
        }
      }
      else {
        result = GameRoutine_e76770(v4 + 672, v73, v11 + v8);
        if ((result & 1) != 0) {
          goto LABEL_16;
        }
      }
      v8 += 8;
      ++v9;
    } while (v8 != 1068);
  }
  if ((*(_BYTE*)(a1 + 40) & 2) != 0) {
    v15 = a2[1];
    v70 = *a2;
    v71 = v15;
    if (v15 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                memory_order_relaxed);
    }
    result = GameRoutine_e76c00(v4 + 672, &v70);
    v16 = v71;
    if (v71 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v71 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      v17 = result;
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      std___1___shared_weak_count___release_weak(v16);
      result = v17;
    }
    if ((result & 1) != 0) {
      v18 = 828;
      v19 = 0;
      do {
        v20 = a2[1];
        v21 = *(_QWORD*)(*a2 + 16LL);
        v69[0] = *a2;
        v69[1] = v20;
        if (v20 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                                    memory_order_relaxed);
          result = GameRoutine_e76a50(v4 + 672, v69, v21 + v18);
          v22 = result;
          if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                               0xFFFFFFFFFFFFFFFFLL) != 0) {
            if ((result & 1) != 0) {
              goto LABEL_37;
            }
          }
          else {
            (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
            result = std___1___shared_weak_count___release_weak(v20);
            if ((v22 & 1) != 0) {
            LABEL_37:
              v23 = a2[1];
              v68[0] = *a2;
              v68[1] = v23;
              if (v23 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 8),
                                          1u, memory_order_relaxed);
                result = CmdBtlMindEnumeration_ea5760(a1, 2, v68, v19);
                if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
                  result = std___1___shared_weak_count___release_weak(v23);
                }
              }
              else {
                result = CmdBtlMindEnumeration_ea5760(a1, 2, v68, v19);
              }
            }
          }
        }
        else {
          result = GameRoutine_e76a50(v4 + 672, v69, v21 + v18);
          if ((result & 1) != 0) {
            goto LABEL_37;
          }
        }
        v18 += 8;
        ++v19;
      } while (v18 != 1068);
    }
  }
  if ((*(_BYTE*)(a1 + 40) & 4) == 0) {
    return result;
  }
  v24 = a2[1];
  v66 = *a2;
  v67 = v24;
  if (v24 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 8), 1u,
                              memory_order_relaxed);
  }
  v25 = GameRoutine_e76d20(v4 + 672, &v66);
  v26 = v67;
  if (v67 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v67 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    v27 = v25;
    (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
    std___1___shared_weak_count___release_weak(v26);
    v25 = v27;
  }
  if ((v25 & 1) != 0) {
    v28 = *a2;
    v29 = a2[1];
    v64 = *a2;
    v65 = v29;
    if (v29 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                                memory_order_relaxed);
    }
    v30 = *(_QWORD*)(v28 + 16);
    v31 = *GameData_212ea58 + ((__int64)*(int*)(a1 + 8) << 7) + 672;
    v32 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         40, 16, 0);
    v33 = GameData_1fed478;
    v34 = (__int64 (***)())v32;
    *(_QWORD*)(v32 + 16) = v31;
    *(_QWORD*)(v32 + 24) = &v64;
    *(_QWORD*)v32 = GameData_1fed478;
    *(_QWORD*)(v32 + 8) = a1;
    *(_BYTE*)(v32 + 32) = 3;
    if ((*(_BYTE*)(v30 + 1536) & 4) != 0) {
      v35 = *(_QWORD*)(v30 + 1496);
      v36 = *(_QWORD*)(v30 + 1488);
      if ((int)((unsigned __int64)(v35 - v36) >> 2) < 1) {
        v33 = GameData_1fed478;
      }
      else {
        v37 = 0;
        v38 = 0;
        v39 = GameData_212c880[0];
        v40 = *GameData_212c880[0];
        do {
          if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v40 + 64) +
                                   8LL * (*(_DWORD*)(v36 + v37) & 0xFFF)) +
                        104LL) == 2) {
            ((void (*)(__int64 (***)(), __int64))(*v34)[6])(v34, v36 + v37);
            v40 = *v39;
            v35 = *(_QWORD*)(v30 + 1496);
            v36 = *(_QWORD*)(v30 + 1488);
          }
          ++v38;
          v37 += 4;
        } while (v38 < (int)((unsigned __int64)(v35 - v36) >> 2));
        v33 = *v34;
      }
    }
    ((void (*)(__int64 (***)()))v33[5])(v34);
    v41 = v65;
    if (v65 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v65 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
      std___1___shared_weak_count___release_weak(v41);
      v42 = *a2;
      v43 = a2[1];
      if (v43 != 0) {
        goto LABEL_60;
      }
    LABEL_62:
      v77 = 0;
      goto LABEL_63;
    }
  }
  v42 = *a2;
  v43 = a2[1];
  if (v43 == 0) {
    goto LABEL_62;
  }
LABEL_60:
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v43 + 8), 1u,
                            memory_order_relaxed);
  v77 = v43;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v43 + 8), 1u,
                            memory_order_relaxed);
LABEL_63:
  v76 = v42;
  v44 = GameRoutine_e779a0(v4 + 672, &v76, 0);
  v45 = v77;
  v46 = v44;
  if (v77 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v77 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
    std___1___shared_weak_count___release_weak(v45);
  }
  if (v43 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
    std___1___shared_weak_count___release_weak(v43);
    if (v46 != 0) {
      goto LABEL_69;
    }
  }
  else if (v46 != 0) {
    goto LABEL_69;
  }
  v56 = a2[1];
  v62 = *a2;
  v63 = v56;
  if (v56 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v56 + 8), 1u,
                              memory_order_relaxed);
  }
  game_cmdbtl_CmdBtlMindEnumeration_CalcWholeMind_Link(a1, 0, &v62);
  v57 = v63;
  if (v63 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v63 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v57 + 16LL))(v57);
    std___1___shared_weak_count___release_weak(v57);
  }
LABEL_69:
  v47 = *a2;
  v48 = a2[1];
  if (v48 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v48 + 8), 1u,
                              memory_order_relaxed);
    v77 = v48;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v48 + 8), 1u,
                              memory_order_relaxed);
  }
  else {
    v77 = 0;
  }
  v76 = v47;
  v49 = GameRoutine_e779a0(v4 + 672, &v76, 1);
  v50 = v77;
  v51 = v49;
  if (v77 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v77 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50);
    std___1___shared_weak_count___release_weak(v50);
  }
  if (v48 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
    std___1___shared_weak_count___release_weak(v48);
    if (v51 != 0) {
      goto LABEL_78;
    }
  LABEL_95:
    v58 = a2[1];
    v62 = *a2;
    v63 = v58;
    if (v58 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v58 + 8), 1u,
                                memory_order_relaxed);
    }
    game_cmdbtl_CmdBtlMindEnumeration_CalcWholeMind_Link(a1, 1, &v62);
    v59 = v63;
    if (v63 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v63 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v59 + 16LL))(v59);
      std___1___shared_weak_count___release_weak(v59);
    }
    goto LABEL_78;
  }
  if (v51 == 0) {
    goto LABEL_95;
  }
LABEL_78:
  v52 = *a2;
  v53 = a2[1];
  if (v53 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v53 + 8), 1u,
                              memory_order_relaxed);
    v77 = v53;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v53 + 8), 1u,
                              memory_order_relaxed);
  }
  else {
    v77 = 0;
  }
  v76 = v52;
  result = GameRoutine_e779a0(v4 + 672, &v76, 2);
  v54 = v77;
  v55 = result;
  if (v77 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v77 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v54 + 16LL))(v54);
    result = std___1___shared_weak_count___release_weak(v54);
  }
  if (v53 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v53 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v53 + 16LL))(v53);
    result = std___1___shared_weak_count___release_weak(v53);
    if (v55 != 0) {
      return result;
    }
  }
  else if (v55 != 0) {
    return result;
  }
  v60 = a2[1];
  v62 = *a2;
  v63 = v60;
  if (v60 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v60 + 8), 1u,
                              memory_order_relaxed);
  }
  result = game_cmdbtl_CmdBtlMindEnumeration_CalcWholeMind_Link(a1, 2, &v62);
  v61 = v63;
  if (v63 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v63 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v61 + 16LL))(v61);
    return std___1___shared_weak_count___release_weak(v61);
  }
  return result;
}

__int64 CmdBtlMindEnumeration_ea5760(__int64 a1, char a2, __int64* a3, int a4)
{
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  _QWORD* v22;
  _QWORD* v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  __int64 v41;
  _QWORD v42[3];
  int v43;
  _QWORD* v44;
  _QWORD* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  int v49;

  v33 = 0;
  memset(v42, 0, sizeof(v42));
  v43 = 0;
  v8 = GameData_212f730[0];
  v34 = GameData_212f730[0] + 16;
  v9 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v10 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 88, 16, 0);
  v10[2] = 0;
  v11 = GameData_212f7d0[0];
  v10[6] = 0;
  v10[7] = 0;
  v12 = GameData_212f968;
  v10[8] = 0;
  v10[9] = 0;
  v10[10] = 0;
  v10[4] = &v34;
  v10[5] = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  LOBYTE(v35) = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v41 = 0;
  *v10 = v11 + 2;
  v10[1] = 0;
  v10[3] = v12 + 2;
  LODWORD(v12) = *(_DWORD*)(a1 + 8);
  v44 = v10 + 3;
  v45 = v10;
  v40 = -1;
  HIDWORD(v35) = (_DWORD)v12;
  LODWORD(v36) = -1;
  MindBtlInfo_edb660(&v34);
  v13 = *a3;
  v14 = a3[1];
  LOBYTE(v35) = a2;
  if (v14 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                              memory_order_relaxed);
  }
  v15 = v39;
  v38 = v13;
  v39 = v14;
  if (v15 != 0) {
    v15 = std___1___shared_weak_count___release_weak(v15);
  }
  if (v14 != 0) {
    v15 = std___1___shared_weak_count___release_weak(v14);
  }
  v17 = *(_QWORD*)(a1 + 56);
  v16 = *(_QWORD*)(a1 + 64);
  LODWORD(v36) = a4;
  if (v17 >= v16) {
    v27 = GameRoutine_ea60e0(a1 + 48, &v33);
  }
  else {
    *(_DWORD*)v17 = v33;
    *(_QWORD*)(v17 + 8) = GameData_212f738 + 16;
    v18 = v35;
    v19 = v37;
    *(_QWORD*)(v17 + 24) = v36;
    *(_QWORD*)(v17 + 32) = v19;
    *(_QWORD*)(v17 + 16) = v18;
    *(_QWORD*)(v17 + 40) = v38;
    v20 = v39;
    *(_QWORD*)(v17 + 48) = v39;
    if (v20 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16), 1u,
                                memory_order_relaxed);
    }
    v21 = v40;
    *(_QWORD*)(v17 + 72) = 0;
    *(_QWORD*)(v17 + 80) = 0;
    *(_QWORD*)(v17 + 88) = 0;
    *(_DWORD*)(v17 + 56) = v21;
    *(_QWORD*)(v17 + 60) = v41;
    *(_DWORD*)(v17 + 68) = v42[0];
    v22 = *(_QWORD**)((char*)v42 + 4);
    v23 = *(_QWORD**)((char*)&v42[1] + 4);
    v24 = *(_QWORD*)((char*)&v42[1] + 4) - *(_QWORD*)((char*)v42 + 4);
    if (*(_QWORD*)((char*)&v42[1] + 4) != *(_QWORD*)((char*)v42 + 4)) {
      if (0xAAAAAAAAAAAAAAABLL * (v24 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
        GameRoutine_ea6540(v15);
      }
      v25 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *v9, *(_QWORD*)((char*)&v42[1] + 4) - *(_QWORD*)((char*)v42 + 4), 16,
          0);
      *(_QWORD*)(v17 + 72) = v25;
      *(_QWORD*)(v17 + 80) = v25;
      *(_QWORD*)(v17 + 88) = (char*)v25 + v24;
      do {
        *v25 = *v22;
        v25[1] = v22[1];
        v26 = v22[2];
        v25[2] = v26;
        if (v26 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 8), 1u,
                                    memory_order_relaxed);
        }
        v22 += 3;
        v25 += 3;
      } while (v22 != v23);
      *(_QWORD*)(v17 + 80) = v25;
    }
    *(_QWORD*)(v17 + 8) = v8 + 16;
    *(_QWORD*)(v17 + 96) = v44;
    v28 = v45;
    *(_QWORD*)(v17 + 104) = v45;
    if (v28 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 1), 1u,
                                memory_order_relaxed);
    }
    v29 = v46;
    v30 = v47;
    v31 = v48;
    v27 = v17 + 144;
    *(_DWORD*)(v17 + 136) = v49;
    *(_QWORD*)(v17 + 120) = v30;
    *(_QWORD*)(v17 + 128) = v31;
    *(_QWORD*)(v17 + 112) = v29;
  }
  *(_QWORD*)(a1 + 56) = v27;
  return MindBtlInfo_Destructor(&v34);
}

__int64 game_cmdbtl_CmdBtlMindEnumeration_CalcWholeMind_Link(__int64 a1,
                                                             unsigned int a2,
                                                             __int64 (**a3)())
{
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 (**v8)();
  __int64 result;
  int v10;
  __int64 (*v11)();
  __int64 (*v12)();
  char v13;
  __int64 (***v14)();
  __int64 (***v15)();
  __int64* v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  _QWORD v21[2];
  int v22;
  char v23;
  __int64 v24;
  __int64 v25;

  v5 = 0;
  v23 = 0x80907u >> (8 * a2);
  v6 = *(int*)(a1 + 8);
  v22 = 0;
  v7 = GameData_2203490 + (v6 << 7) + 672;
  do {
    v11 = *a3;
    v12 = a3[1];
    v21[0] = *a3;
    v21[1] = v12;
    if (v12 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)((char*)v12 + 8), 1u,
                                memory_order_relaxed);
      result =
          GameRoutine_e766a0(v7, v21, *((_QWORD*)*a3 + 2) + 8LL * v5 + 828, a2);
      v13 = result;
      if (atomic_fetch_add((atomic_ullong* volatile)((char*)v12 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if ((result & 1) == 0) {
          goto LABEL_4;
        }
      }
      else {
        (*(void (**)(__int64 (*)()))(*(_QWORD*)v12 + 16LL))(v12);
        result = std___1___shared_weak_count___release_weak(v12);
        if ((v13 & 1) == 0) {
          goto LABEL_4;
        }
      }
    }
    else {
      result =
          GameRoutine_e766a0(v7, v21, *((_QWORD*)v11 + 2) + 8LL * v5 + 828, a2);
      if ((result & 1) == 0) {
        goto LABEL_4;
      }
    }
    v14 = (__int64 (***)())fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
    *v14 = GameData_1fed4f8;
    v14[1] = (__int64 (**)())v7;
    v15 = v14;
    v14[2] = a3;
    v14[3] = (__int64 (**)())&v23;
    v14[4] = (__int64 (**)())&v22;
    v14[5] = (__int64 (**)())a1;
    v17 = *(__int64**)(v7 + 40);
    v16 = *(__int64**)(v7 + 48);
    if (v17 == v16) {
      v8 = GameData_1fed4f8;
    }
    else {
      do {
        v24 = *v17;
        v18 = v17[1];
        v25 = v18;
        if (v18 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                    memory_order_relaxed);
        }
        ((void (*)(__int64 (***)(), __int64*))(*v15)[6])(v15, &v24);
        v19 = v25;
        if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
          std___1___shared_weak_count___release_weak(v19);
        }
        v17 += 2;
      } while (v17 != v16);
      v8 = *v15;
    }
    result = ((__int64 (*)(__int64 (***)()))v8[5])(v15);
  LABEL_4:
    v10 = v22;
    v5 = ++v22;
  } while (v10 < 29);
  return result;
}

void game_cmdbtl_CmdBtlMindEnumeration_CalcWholeMind_SkillMind_lambda0_Invoke(
    __int64 a1, _DWORD* a2)
{

#pragma clang fp contract(off)
  char v2;
  __int64 v4;
  __int64 v5;
  char v7;
  int v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  bool v25;
  _QWORD* v26;
  __n128 v27;
  _QWORD* v28;
  __int64 v29;
  unsigned int v30;
  __n128 v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned int v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  char v43;
  int v44;
  _QWORD* v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  char v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned int v55;
  _QWORD* v56;
  _QWORD* v57;
  __int64 v58;
  _QWORD* v59;
  __int64 v60;
  _QWORD* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  int v65;
  _QWORD* v66;
  __int64 v67;
  unsigned int v68;
  __n128 v69;
  __int64* v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  unsigned int v74;
  __int64 v75;
  __int64 v76;
  _QWORD* v77;
  __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  char v81;
  char v82;
  int v83;
  _QWORD* v84;
  __int64 v85;
  __int64 v86;
  unsigned __int64 v87;
  __int64 v88;
  char v89;
  unsigned __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  unsigned int v94;
  _QWORD* v95;
  _QWORD* v96;
  __int64 v97;
  _QWORD* v98;
  __int64 v99;
  __int64 v100;
  _QWORD* v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  int v105;
  __int64 v106;
  __int64* v107;
  __int64* v108;
  __int64 v109;
  __int64 v110;
  int v111;
  int v112;
  struct {
    char gap48_[8];
    __int64 v113;
    __int128 v114;
    __int64 v115;
    __int64 v116;
    __int64 v117;
    _BYTE v118[12];
  } v113_;
  _QWORD v119[3];
  int v120;
  _QWORD* v121;
  _QWORD* v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  int v126;
  _QWORD v127[2];
  struct {
    __int64 v128;
    __int64 v129;
    char gap224_[4];
    char v130;
  } v128_;

  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v65 = COERCE_AS(__typeof__(v65),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v2 = *(_BYTE*)(a1 + 32);
  v5 = *(_QWORD*)(a1 + 8);
  v4 = *(_QWORD*)(a1 + 16);
  v7 = v2 - 1;
  if ((v7 & 0xFC) != 0) {
    v8 = 256;
  }
  else {
    v8 = 0x104010201200101uLL >> (16 * v7);
  }
  v111 = v8;
  v9 = *(__int64**)(a1 + 24);
  v11 = *v9;
  v10 = v9[1];
  v128_.v128 = v11;
  v128_.v129 = v10;
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
  }
  v12 = game_cmdbtl_e76460(v4, &v128_.v128, (__int64)a2, v111),
  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v65 = COERCE_AS(__typeof__(v65),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v13 = v128_.v129;
  if (v128_.v129 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v128_.v129 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v82 = v12;
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v65 = COERCE_AS(__typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    std___1___shared_weak_count___release_weak_alt1(v13),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v65 = COERCE_AS(__typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if ((v82 & 1) == 0) {
      return;
    }
  }
  else if ((v12 & 1) == 0) {
    return;
  }
  v14 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
  v15 = GameData_212f7d0[0];
  v16 = GameData_212f968;
  if ((((unsigned __int16)*GameData_212cf08[0] >> *(_BYTE*)(v14 + 104)) & 1) !=
          0 &&
      *(_QWORD*)(v14 + 576) == 0 && *(_WORD*)(v14 + 136) != 0) {
    v17 = 0;
    v108 = GameData_212f7d0[0] + 2;
    v109 = GameData_212f730[0] + 16;
    v107 = GameData_212f968 + 2;
    v110 = v5;
    v106 = GameData_212f738 + 16;
    while (1) {
      v19 = *(_QWORD*)(a1 + 16);
      v20 = *(_QWORD**)(a1 + 24);
      v21 = *v20;
      v22 = v20[1];
      v23 = *(_QWORD*)(*v20 + 16LL);
      v127[0] = v21;
      v127[1] = v22;
      v24 = v23 + 8 * v17;
      if (v22 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                                  memory_order_relaxed);
        v25 = game_cmdbtl_e76590(v19, (__int64)v127, a2, v111,
                                 (unsigned __int16*)(v24 + 828)),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v65 = COERCE_AS(__typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          v5 = v110;
          if (!v25) {
            goto LABEL_15;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22),
              v105 = COERCE_AS(__typeof__(v105),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
              v65 = COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          std___1___shared_weak_count___release_weak_alt1(v22),
              v105 = COERCE_AS(__typeof__(v105),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
              v65 = COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          v5 = v110;
          if (!v25) {
            goto LABEL_15;
          }
        }
      }
      else if (!game_cmdbtl_e76590(v19, (__int64)v127, a2, v111,
                                   (unsigned __int16*)(v24 + 828))) {
        goto LABEL_15;
      }
      v112 = 0;
      LOBYTE(v113_.v114) = 0;
      v113_.v115 = 0;
      v113_.v116 = 0;
      v113_.v117 = 0;
      *(_QWORD*)&v113_.v118[4] = 0;
      memset(v119, 0, sizeof(v119));
      *(_QWORD*)((char*)&v113_.v114 + 4) = 0xFFFFFFFF00000000LL;
      *(_DWORD*)v113_.v118 = -1;
      v120 = 0;
      v113_.v113 = v109;
      v121 = nullptr;
      v122 = nullptr;
      v26 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 88, 16, 0),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v65 = COERCE_AS(__typeof__(v65),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v28 = v122;
      v26[1] = 0;
      v26[2] = 0;
      v26[6] = 0;
      v26[7] = 0;
      v26[8] = 0;
      v26[9] = 0;
      v26[10] = 0;
      v26[4] = &v113_.v113;
      v26[5] = 0;
      v122 = v26;
      *v26 = v108;
      v26[3] = v107;
      v121 = v26 + 3;
      if (v28 != nullptr && atomic_fetch_add((atomic_ullong* volatile)(v28 + 1),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(_QWORD*))(*v28 + 16LL))(v28),
            v105 = COERCE_AS(__typeof__(v105),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v65 = COERCE_AS(__typeof__(v65),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v27 = std___1___shared_weak_count___release_weak_alt1(v28),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v65 = COERCE_AS(__typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
      v126 = 0;
      v124 = 0;
      v125 = 0;
      v29 = v113_.v117;
      v123 = 0;
      v30 = *(_DWORD*)(v5 + 8);
      LOBYTE(v113_.v114) = 0;
      v113_.v115 = 0;
      v113_.v116 = 0;
      v113_.v117 = 0;
      *(_QWORD*)((char*)&v113_.v114 + 4) = v30 | 0xFFFFFFFF00000000LL;
      if (v29 != 0) {
        v27 = std___1___shared_weak_count___release_weak_alt1(v29),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v65 = COERCE_AS(__typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
      *(_QWORD*)v113_.v118 = 0xFFFFFFFFLL;
      *(_DWORD*)&v113_.v118[8] = 0;
      (*(void (**)(__int64*, long double))(v113_.v113 + 56))(
          &v113_.v113, *(long double*)&v27),
          v105 = COERCE_AS(__typeof__(v105),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v65 = COERCE_AS(__typeof__(v65),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v32 = *(__int64**)(a1 + 24);
      LOBYTE(v113_.v114) = *(_BYTE*)(a1 + 32);
      v33 = *v32;
      v34 = v32[1];
      if (v34 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 16), 1u,
                                  memory_order_relaxed);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 16), 1u,
                                  memory_order_relaxed);
      }
      v35 = v113_.v117;
      v113_.v116 = v33;
      v113_.v117 = v34;
      if (v35 != 0) {
        v31 = std___1___shared_weak_count___release_weak_alt1(v35),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v65 = COERCE_AS(__typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
      if (v34 != 0) {
        v31 = std___1___shared_weak_count___release_weak_alt1(v34),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v65 = COERCE_AS(__typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
      DWORD2(v113_.v114) = v17;
      v36 = 0;
      v37 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                       8LL * (*a2 & 0xFFF));
      v38 = *(_QWORD*)(a1 + 24);
      v113_.v115 = v37;
      v39 = *(_QWORD**)(*(_QWORD*)v38 + 16LL);
      if (v39 != nullptr && *(_BYTE*)(v37 + 275) != 0) {
        v40 = v39[218];
        v41 = *(unsigned int*)((char*)((_UNKNOWN*)0x164LL) +
                               game_g_shared_system_skills_ptr);
        if (((v41 >> 5) & 0x7F) + 1 <= (v39[219] - v40) >> 2 &&
                ((*(_DWORD*)(v40 + 4 * ((v41 >> 5) & 0x7F)) >> v41) & 1) != 0 ||
            ((v42 = v39[55]) == 0 ? (v43 = 9) : (v43 = *(_BYTE*)(v42 + 16)),
             ((1 << v43) & 6) != 0 ||
                 (v128_.v130 = 0,
                  (v65 = game_Unit_GetParam((__int64)v39)) < 1))) {
          v36 = 0;
        }
        else {
          v36 =
              (v65 * (unsigned int)*(unsigned __int8*)(v37 + 275) + 99) / 0x64;
        }
      }
      LODWORD(v123) = v36;
      v44 = 0;
      v45 = *(_QWORD**)(**(_QWORD**)(a1 + 24) + 16LL);
      if (v45 != nullptr) {
        v46 = *(_QWORD*)(*GameData_212c880[0] + 64);
        if (*(_BYTE*)(*(_QWORD*)(v46 + 8LL * (*a2 & 0xFFF)) + 274LL) != 0) {
          if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                        64) +
                                             8LL * *(unsigned __int16*)(v24 +
                                                                        828)) +
                                  72LL) <= 7u &&
              (v47 = v45[218],
               (((v48 = *(unsigned int*)((char*)((_UNKNOWN*)0xBCLL) +
                                         game_g_shared_system_skills_ptr)) >>
                 5) &
                0x7F) + 1 <=
                   (v45[219] - v47) >> 2) &&
              ((*(_DWORD*)(v47 + 4 * ((v48 >> 5) & 0x7F)) >> v48) & 1) != 0) {
            v44 = 0;
          }
          else {
            v49 = v45[55];
            if (v49 != 0) {
              v50 = *(_BYTE*)(v49 + 16);
            }
            else {
              v50 = 9;
            }
            if (((1 << v50) & 6) != 0) {
              v44 = 0;
            }
            else {
              v44 = *(unsigned __int8*)(*(_QWORD*)(v46 + 8LL * (*a2 & 0xFFF)) +
                                        274LL);
            }
          }
        }
      }
      HIDWORD(v123) = v44;
      v51 = *(_QWORD*)(v5 + 56);
      if (v51 >= *(_QWORD*)(v5 + 64)) {
        v18 = GameRoutine_ea60e0_alt1((__int64*)(v5 + 48), (__int64)&v112,
                                      *(long double*)&v31),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v65 = COERCE_AS(__typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
      else {
        *(_DWORD*)v51 = v112;
        *(_QWORD*)(v51 + 8) = v106;
        v52 = v113_.v114;
        v53 = v113_.v115;
        *(_QWORD*)(v51 + 24) = *((_QWORD*)&v113_.v114 + 1);
        *(_QWORD*)(v51 + 32) = v53;
        *(_QWORD*)(v51 + 16) = v52;
        *(_QWORD*)(v51 + 40) = v113_.v116;
        v54 = v113_.v117;
        *(_QWORD*)(v51 + 48) = v113_.v117;
        if (v54 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v54 + 16), 1u,
                                    memory_order_relaxed);
        }
        v55 = *(_DWORD*)v113_.v118;
        *(_QWORD*)(v51 + 72) = 0;
        *(_QWORD*)(v51 + 80) = 0;
        *(_QWORD*)(v51 + 88) = 0;
        *(_QWORD*)(v51 + 56) = __PAIR64__(*(unsigned int*)&v113_.v118[4], v55);
        *(_DWORD*)(v51 + 64) = *(_DWORD*)&v113_.v118[8];
        *(_DWORD*)(v51 + 68) = v119[0];
        v56 = *(_QWORD**)((char*)v119 + 4);
        v57 = *(_QWORD**)((char*)&v119[1] + 4);
        v58 = *(_QWORD*)((char*)&v119[1] + 4) - *(_QWORD*)((char*)v119 + 4);
        if (*(_QWORD*)((char*)&v119[1] + 4) != *(_QWORD*)((char*)v119 + 4)) {
          if (0xAAAAAAAAAAAAAAABLL * (v58 >> 3) > 0xAAAAAAAAAAAAAAALL) {
            goto LABEL_119;
          }
          v59 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr,
              *(_QWORD*)((char*)&v119[1] + 4) - *(_QWORD*)((char*)v119 + 4), 16,
              0),
          v105 = COERCE_AS(__typeof__(v105),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v65 = COERCE_AS(__typeof__(v65),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          *(_QWORD*)(v51 + 72) = v59;
          *(_QWORD*)(v51 + 80) = v59;
          *(_QWORD*)(v51 + 88) = (char*)v59 + v58;
          do {
            *v59 = *v56;
            v59[1] = v56[1];
            v60 = v56[2];
            v59[2] = v60;
            if (v60 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v60 + 8), 1u,
                                        memory_order_relaxed);
            }
            v56 += 3;
            v59 += 3;
          } while (v56 != v57);
          *(_QWORD*)(v51 + 80) = v59;
        }
        v5 = v110;
        *(_QWORD*)(v51 + 8) = GameData_212f730[0] + 16;
        *(_QWORD*)(v51 + 96) = v121;
        v61 = v122;
        *(_QWORD*)(v51 + 104) = v122;
        if (v61 != nullptr) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v61 + 1), 1u,
                                    memory_order_relaxed);
        }
        v62 = v123;
        v63 = v124;
        v64 = v125;
        v18 = v51 + 144;
        *(_DWORD*)(v51 + 136) = v126;
        *(_QWORD*)(v51 + 120) = v63;
        *(_QWORD*)(v51 + 128) = v64;
        *(_QWORD*)(v51 + 112) = v62;
      }
      *(_QWORD*)(v5 + 56) = v18;
      MindBtlInfo_Destructor_alt1(&v113_.v113),
          v105 = COERCE_AS(__typeof__(v105),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v65 = COERCE_AS(__typeof__(v65),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    LABEL_15:
      if (++v17 == 30) {
        return;
      }
    }
  }
  v112 = 0;
  LOBYTE(v113_.v114) = 0;
  v113_.v115 = 0;
  v113_.v116 = 0;
  *(_QWORD*)((char*)&v113_.v114 + 4) = 0xFFFFFFFF00000000LL;
  v113_.v117 = 0;
  *(_DWORD*)v113_.v118 = -1;
  *(_QWORD*)&v113_.v118[4] = 0;
  memset(v119, 0, sizeof(v119));
  v120 = 0;
  v113_.v113 = GameData_212f730[0] + 16;
  v121 = nullptr;
  v122 = nullptr;
  v66 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 88, 16, 0),
  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v65 = COERCE_AS(__typeof__(v65),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v66[1] = 0;
  v66[2] = 0;
  v66[6] = 0;
  v66[7] = 0;
  v66[8] = 0;
  v66[9] = 0;
  v66[10] = 0;
  v66[4] = &v113_.v113;
  v66[5] = 0;
  v122 = v66;
  *v66 = v15 + 2;
  v66[3] = v16 + 2;
  v121 = v66 + 3;
  v126 = 0;
  v124 = 0;
  v125 = 0;
  v67 = v113_.v117;
  v123 = 0;
  v68 = *(_DWORD*)(v5 + 8);
  LOBYTE(v113_.v114) = 0;
  v113_.v115 = 0;
  v113_.v116 = 0;
  v113_.v117 = 0;
  *(_QWORD*)((char*)&v113_.v114 + 4) = v68 | 0xFFFFFFFF00000000LL;
  if (v67 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v67),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v65 = COERCE_AS(__typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  *(_DWORD*)&v113_.v118[8] = 0;
  *(_QWORD*)v113_.v118 = 0xFFFFFFFFLL;
  (*(void (**)(__int64))((char*)((_UNKNOWN**)0x38LL) + v113_.v113))(
      (__int64)&v113_.v113),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v65 = COERCE_AS(__typeof__(v65),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v70 = *(__int64**)(a1 + 24);
  LOBYTE(v113_.v114) = *(_BYTE*)(a1 + 32);
  v71 = *v70;
  v72 = v70[1];
  if (v72 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v72 + 16), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v72 + 16), 1u,
                              memory_order_relaxed);
  }
  v73 = v113_.v117;
  v113_.v116 = v71;
  v113_.v117 = v72;
  if (v73 != 0) {
    v69 = std___1___shared_weak_count___release_weak_alt1(v73),
    v105 = COERCE_AS(__typeof__(v105),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v65 = COERCE_AS(__typeof__(v65),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  if (v72 != 0) {
    v69 = std___1___shared_weak_count___release_weak_alt1(v72),
    v105 = COERCE_AS(__typeof__(v105),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v65 = COERCE_AS(__typeof__(v65),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v74 = 0;
  v75 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
  v76 = *(_QWORD*)(a1 + 24);
  v113_.v115 = v75;
  v77 = *(_QWORD**)(*(_QWORD*)v76 + 16LL);
  if (v77 != nullptr && *(_BYTE*)(v75 + 275) != 0) {
    v78 = v77[218];
    v79 = *(unsigned int*)((char*)((_UNKNOWN*)0x164LL) +
                           game_g_shared_system_skills_ptr);
    if (((v79 >> 5) & 0x7F) + 1 <= (v77[219] - v78) >> 2 &&
            ((*(_DWORD*)(v78 + 4 * ((v79 >> 5) & 0x7F)) >> v79) & 1) != 0 ||
        ((v80 = v77[55]) == 0 ? (v81 = 9) : (v81 = *(_BYTE*)(v80 + 16)),
         ((1 << v81) & 6) != 0 ||
             (LOBYTE(v127[0]) = 0,
              (v105 = game_Unit_GetParam((__int64)v77)) < 1))) {
      v74 = 0;
    }
    else {
      v74 = (v105 * (unsigned int)*(unsigned __int8*)(v75 + 275) + 99) / 0x64;
    }
  }
  LODWORD(v123) = v74;
  v83 = 0;
  v84 = *(_QWORD**)(**(_QWORD**)(a1 + 24) + 16LL);
  if (v84 != nullptr) {
    v85 = *(_QWORD*)(*GameData_212c880[0] + 64);
    if (*(_BYTE*)(*(_QWORD*)(v85 + 8LL * (*a2 & 0xFFF)) + 274LL) != 0) {
      if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                         8LL * *(unsigned __int16*)
                                                   game_g_empty_item_ptr) +
                              72LL) <= 7u &&
          (v86 = v84[218],
           (((v87 = *(unsigned int*)((char*)((_UNKNOWN*)0xBCLL) +
                                     game_g_shared_system_skills_ptr)) >>
             5) &
            0x7F) + 1 <=
               (v84[219] - v86) >> 2) &&
          ((*(_DWORD*)(v86 + 4 * ((v87 >> 5) & 0x7F)) >> v87) & 1) != 0) {
        v83 = 0;
      }
      else {
        v88 = v84[55];
        if (v88 != 0) {
          v89 = *(_BYTE*)(v88 + 16);
        }
        else {
          v89 = 9;
        }
        if (((1 << v89) & 6) != 0) {
          v83 = 0;
        }
        else {
          v83 = *(unsigned __int8*)(*(_QWORD*)(v85 + 8LL * (*a2 & 0xFFF)) +
                                    274LL);
        }
      }
    }
  }
  HIDWORD(v123) = v83;
  v90 = *(_QWORD*)(v5 + 56);
  if (v90 >= *(_QWORD*)(v5 + 64)) {
    v100 = GameRoutine_ea60e0_alt1((__int64*)(v5 + 48), (__int64)&v112,
                                   *(long double*)&v69),
    v105 = COERCE_AS(__typeof__(v105),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v65 = COERCE_AS(__typeof__(v65),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  else {
    *(_DWORD*)v90 = v112;
    *(_QWORD*)(v90 + 8) = GameData_212f738 + 16;
    v91 = v113_.v114;
    v92 = v113_.v115;
    *(_QWORD*)(v90 + 24) = *((_QWORD*)&v113_.v114 + 1);
    *(_QWORD*)(v90 + 32) = v92;
    *(_QWORD*)(v90 + 16) = v91;
    *(_QWORD*)(v90 + 40) = v113_.v116;
    v93 = v113_.v117;
    *(_QWORD*)(v90 + 48) = v113_.v117;
    if (v93 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v93 + 16), 1u,
                                memory_order_relaxed);
    }
    v94 = *(_DWORD*)v113_.v118;
    *(_QWORD*)(v90 + 72) = 0;
    *(_QWORD*)(v90 + 80) = 0;
    *(_QWORD*)(v90 + 88) = 0;
    *(_QWORD*)(v90 + 56) = __PAIR64__(*(unsigned int*)&v113_.v118[4], v94);
    *(_DWORD*)(v90 + 64) = *(_DWORD*)&v113_.v118[8];
    *(_DWORD*)(v90 + 68) = v119[0];
    v95 = *(_QWORD**)((char*)v119 + 4);
    v96 = *(_QWORD**)((char*)&v119[1] + 4);
    v97 = *(_QWORD*)((char*)&v119[1] + 4) - *(_QWORD*)((char*)v119 + 4);
    if (*(_QWORD*)((char*)&v119[1] + 4) != *(_QWORD*)((char*)v119 + 4)) {
      if (0xAAAAAAAAAAAAAAABLL * (v97 >> 3) > 0xAAAAAAAAAAAAAAALL) {
      LABEL_119:
        GameRoutine_ea6540_alt1(),
            v105 = COERCE_AS(__typeof__(v105),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v65 = COERCE_AS(__typeof__(v65),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
      v98 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr,
          *(_QWORD*)((char*)&v119[1] + 4) - *(_QWORD*)((char*)v119 + 4), 16, 0),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v65 = COERCE_AS(__typeof__(v65),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      *(_QWORD*)(v90 + 72) = v98;
      *(_QWORD*)(v90 + 80) = v98;
      *(_QWORD*)(v90 + 88) = (char*)v98 + v97;
      do {
        *v98 = *v95;
        v98[1] = v95[1];
        v99 = v95[2];
        v98[2] = v99;
        if (v99 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v99 + 8), 1u,
                                    memory_order_relaxed);
        }
        v95 += 3;
        v98 += 3;
      } while (v95 != v96);
      *(_QWORD*)(v90 + 80) = v98;
    }
    *(_QWORD*)(v90 + 8) = GameData_212f730[0] + 16;
    *(_QWORD*)(v90 + 96) = v121;
    v101 = v122;
    *(_QWORD*)(v90 + 104) = v122;
    if (v101 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v101 + 1), 1u,
                                memory_order_relaxed);
    }
    v102 = v123;
    v103 = v124;
    v104 = v125;
    v100 = v90 + 144;
    *(_DWORD*)(v90 + 136) = v126;
    *(_QWORD*)(v90 + 120) = v103;
    *(_QWORD*)(v90 + 128) = v104;
    *(_QWORD*)(v90 + 112) = v102;
  }
  *(_QWORD*)(v5 + 56) = v100;
  MindBtlInfo_Destructor_alt1(&v113_.v113),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v65 = COERCE_AS(__typeof__(v65),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
}

__int64 CmdBtlMindEnumeration_eab1e0(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;

  *(_QWORD*)a1 = game_cmdbtl_anonymous_ProcCmdBtlSeqAI_vtable;
  CmdBtlMindEnumeration_Destructor_alt1(a1 + 208);
  v2 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_1fed660;
  if (v2 == (_QWORD*)(a1 + 160)) {
    v3 = 32;
  }
  else {
    if (v2 == nullptr) {
      goto LABEL_6;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v2 + v3))((__int64)v2);

LABEL_6:
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

#pragma GCC visibility pop
