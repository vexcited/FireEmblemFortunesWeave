#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_edb440(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_cmdbtl_CmdBtlMindEnumeration_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* CmdBtlMindEnumeration_Destructor(_QWORD* result);
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
__n128 CmdBtlMindEnumeration_ea3900(__int64 a1, __int64** a2, _DWORD* a3,
                                    __int64 a4);
void CmdBtlMindEnumeration_ea4b40(__int64 a1, int a2);
void game_cmdbtl_CmdBtlMindEnumeration_CalcWholeMind_SkillMind_lambda0_Invoke(
    __int64 a1, _DWORD* a2);

_QWORD* CmdBtlMindEnumeration_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = result[6];
  v2 = result;
  *result = game_cmdbtl_CmdBtlMindEnumeration_vtable;
  if (v1 != 0) {
    v3 = result[7];
    if (v1 == v3) {
      goto LABEL_5;
    }
    do {
      v4 = v3 - 144;
      result = (_QWORD*)GameRoutine_edb440(v3 - 136);
      v3 = v4;
    } while (v4 != v1);
    v5 = v2[6];
    v2[7] = v1;
    v1 = v5;
    if (v5 != 0) {
    LABEL_5:
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v1);
    }
  }
  v7 = v2[2];
  if (v7 != 0) {
    v8 = v2[3];
    if (v7 == v8) {
      goto LABEL_15;
    }
    do {
      result = *(_QWORD**)(v8 - 8);
      if (result != nullptr) {
        result = (_QWORD*)std___1___shared_weak_count___release_weak(result);
      }
      v8 -= 16;
    } while (v8 != v7);
    v9 = v2[2];
    v2[3] = v7;
    v7 = v9;
    if (v9 != 0) {
    LABEL_15:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v10 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v7);
    }
  }
  return result;
}

__n128 CmdBtlMindEnumeration_ea3900(__int64 a1, __int64** a2, _DWORD* a3,
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
  __n128 result;
  __int64 v18;
  __int64 i;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int* v24;
  int* v25;
  __int64* v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  bool v32;
  int v33;
  __int64 v34;
  _BYTE* v35;
  __int64 v36;
  bool v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  int* v42;
  __int64 v43;
  __int64 v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  int v50;
  _BYTE* v51;
  __int64 v52;
  __int64 v53;
  bool v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  int* v65;
  __int64 v66;
  int v67;
  __int64 v68;
  __int64 v69;
  int* v70;
  __int64 v71;
  long double v73;
  __int64 v74;
  __int64* v75;
  __int64* v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  long double v80;
  __int64 v81;
  int v82;
  __int64 v83;
  __int64 (**v84)();
  __int64 v85;
  int v86;
  int v87;
  _QWORD* v88;
  __int16* v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  bool v95;
  int v96;
  __int64 v97;
  __int64 v98;
  int v99;
  __int64 v100;
  int v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  char v105;
  __int64 v106;
  __int64* v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  _BOOL4 v111;
  __int64 v112;
  int v113;
  int v114;
  int v115;
  int v116;
  unsigned int v117;
  int v118;
  _QWORD* v119;
  unsigned __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  unsigned __int64 v124;
  char* v125;
  char* v126;
  unsigned __int64 v127;
  char v128;
  int v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  int v133;
  unsigned __int64 v134;
  char* v135;
  __int64 v136;
  unsigned __int64 v137;
  unsigned __int64 v138;
  __int64 v139;
  char* v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  char* v145;
  __int64* v146;
  __int64 v147;
  unsigned __int64 v148;
  char* v149;
  __int64 v150;
  __int64* v151;
  int v152;
  unsigned int v153;
  unsigned int v154;
  int v155;
  int v156;
  unsigned int v157;
  char* v158;
  _DWORD* v159;
  __int64 v160;
  __int64 (*v161)();
  int* v162;
  _BOOL4 v163;
  unsigned int v164;
  __int64 v165;
  __int64 v166;
  __int64 (**v167)();
  int v168;
  struct {
    __int64 (**v169)();
    __int64 (**v170)();
  } v169_;
  struct {
    __int64 v171;
    char gap120_[8];
    __int64 (**v172)();
    char gap136_[76];
    int v173;
  } v171_;
  struct {
    __int64 v174[12];
    char gap968_[4];
    int v175;
  } v174_;
  __int64 v176[95];
  struct {
    _QWORD v177[98];
    __int16 v178;
    char gap3178_[10];
    __int16 v179;
    char gap3190_[8162];
    int v180;
    char gap11356_[36];
    __int64 (**v181)();
    __int64 v182;
  } v177_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v5 = *(_QWORD*)(a1 + 48);
  v4 = *(_QWORD*)(a1 + 56);
  v9 = a1;
  if (v5 != v4) {
    do {
      v10 = v4 - 144;
      MindBtlInfo_Destructor_alt1((_QWORD*)(v4 - 136)),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      v4 = v10;
    } while (v10 != v5);
  }
  *(_QWORD*)(v9 + 56) = v5;
  if ((__int64**)(v9 + 16) != a2) {
    game_cmdbtl_ea5e20(v9 + 16, *a2, a2[1], ((char*)a2[1] - (char*)*a2) >> 4),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v11 = GameData_212ea58;
  if (*(_QWORD*)(v9 + 24) != *(_QWORD*)(v9 + 16)) {
    v12 = *a2;
    v13 = std___1___shared_weak_count_lock((*a2)[1]),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
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
      v64 = v13;
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      std___1___shared_weak_count___release_weak_alt1(v64),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
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
  CmdBtlMindEnumeration_ea4b40(v9, 0),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v18 = *(_QWORD*)(v9 + 16);
  for (i = *(_QWORD*)(v9 + 24); v18 != i; v18 += 16) {
    v169_.v169 = nullptr;
    v169_.v170 = nullptr;
    v20 = *(_QWORD*)(v18 + 8);
    if (v20 != 0 && (v21 = std___1___shared_weak_count_lock(v20),
                     v169_.v170 = (__int64 (**)(void))v21, v21 != 0)) {
      v22 = v21;
      v169_.v169 = *(__int64 (***)(void))v18,
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      result = game_cmdbtl_CmdBtlMindEnumeration_CalcWholeMind_SkillMind_alt1(
          v9, (__int64 (**)(void))&v169_.v169);
      if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v22 + 16LL))(
            v22, *(long double*)&result),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        result = std___1___shared_weak_count___release_weak_alt1(v22);
      }
    }
    else {
      result = game_cmdbtl_CmdBtlMindEnumeration_CalcWholeMind_SkillMind_alt1(
          v9, (__int64 (**)(void))&v169_.v169);
    }
  }
  v166 = v9;
  if ((*(_BYTE*)(v9 + 40) & 8) != 0) {
    v25 = *(int**)(v9 + 56);
    goto LABEL_143;
  }
  v23 = *(_QWORD*)(v9 + 48);
  v24 = *(int**)(v9 + 56);
  v25 = v24;
  if ((int*)v23 == v24) {
    goto LABEL_71;
  }
  v26 = GameData_212c878[0];
  while (1) {
    v27 = *(_QWORD*)(v23 + 48);
    if (v27 == 0 || *(_QWORD*)(v27 + 8) == -1) {
      v29 = (*(__int64 (**)(__int64))(*(_QWORD*)(v23 + 8) + 32LL))(v23 + 8),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v27 = *(_QWORD*)(v29 + 88);
      if (v27 == 0) {
        goto LABEL_25;
      }
      v28 = (__int64*)(v29 + 80);
    }
    else {
      v28 = (__int64*)(v23 + 40);
    }
    v30 = *v28;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 16), 1u,
                              memory_order_relaxed);
    v31 = std___1___shared_weak_count_lock(v27),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    result = std___1___shared_weak_count___release_weak_alt1(v27);
    v32 = v31 == 0 || v30 == 0;
    if (v32) {
      if (v31 == 0) {
        goto LABEL_25;
      }
    LABEL_60:
      v37 = false;
      goto LABEL_68;
    }
    v33 = *(_DWORD*)(v23 + 24);
    if (v33 < 0) {
      goto LABEL_60;
    }
    v34 = *v26;
    v35 = (_BYTE*)(*(_QWORD*)(v30 + 16) + 871LL);
    v36 = 5;
    while (1) {
      if (*(_WORD*)(v35 - 43) != 0 && (*(v35 - 40) & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v34 + 64) +
                                         8LL * *(unsigned __int16*)(v35 - 43)) +
                              72LL) < 8u) {
        LODWORD(v36) = v36 - 5;
        goto LABEL_67;
      }
      if (*(_WORD*)(v35 - 35) != 0 && (*(v35 - 32) & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v34 + 64) +
                                         8LL * *(unsigned __int16*)(v35 - 35)) +
                              72LL) < 8u) {
        LODWORD(v36) = v36 - 4;
        goto LABEL_67;
      }
      if (*(_WORD*)(v35 - 27) != 0 && (*(v35 - 24) & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v34 + 64) +
                                         8LL * *(unsigned __int16*)(v35 - 27)) +
                              72LL) < 8u) {
        LODWORD(v36) = v36 - 3;
        goto LABEL_67;
      }
      if (*(_WORD*)(v35 - 19) != 0 && (*(v35 - 16) & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v34 + 64) +
                                         8LL * *(unsigned __int16*)(v35 - 19)) +
                              72LL) < 8u) {
        LODWORD(v36) = v36 - 2;
        goto LABEL_67;
      }
      if (*(_WORD*)(v35 - 11) != 0 && (*(v35 - 8) & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v34 + 64) +
                                         8LL * *(unsigned __int16*)(v35 - 11)) +
                              72LL) < 8u) {
        break;
      }
      if (*(_WORD*)(v35 - 3) != 0 && (*v35 & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v34 + 64) +
                                         8LL * *(unsigned __int16*)(v35 - 3)) +
                              72LL) < 8u) {
        goto LABEL_67;
      }
      v35 += 48;
      v36 += 6;
      if (v36 == 35) {
        LODWORD(v36) = -1;
        goto LABEL_67;
      }
    }
    LODWORD(v36) = v36 - 1;
  LABEL_67:
    v37 = v33 != (_DWORD)v36;
  LABEL_68:
    if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      result = std___1___shared_weak_count___release_weak_alt1(v31);
      if (v37) {
        break;
      }
      goto LABEL_25;
    }
    if (v37) {
      break;
    }
  LABEL_25:
    v23 += 144;
    if ((int*)v23 == v24) {
      v25 = v24;
      goto LABEL_138;
    }
  }
  v25 = v24;
LABEL_71:
  if ((int*)v23 != v24) {
    v38 = v23 + 144;
    if ((int*)(v23 + 144) != v24) {
      v25 = (int*)v23;
      while (1) {
        v42 = v25;
        v43 = v23;
        v44 = *(_QWORD*)(v23 + 192);
        v23 = v38;
        if (v44 == 0 || *(_QWORD*)(v44 + 8) == -1) {
          v46 = (*(__int64 (**)(__int64, long double))(
              *(_QWORD*)(v43 + 152) + 32LL))(v43 + 152, *(long double*)&result),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
          v44 = *(_QWORD*)(v46 + 88);
          if (v44 == 0) {
            goto LABEL_122;
          }
          v45 = (__int64*)(v46 + 80);
        }
        else {
          v45 = (__int64*)(v43 + 184);
        }
        v47 = *v45;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v44 + 16), 1u,
                                  memory_order_relaxed);
        v48 = std___1___shared_weak_count_lock(v44),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
        result = std___1___shared_weak_count___release_weak_alt1(v44);
        if (v48 == 0 || v47 == 0) {
          break;
        }
        v50 = *(_DWORD*)(v43 + 168);
        if (v50 < 0) {
          goto LABEL_110;
        }
        v51 = (_BYTE*)(*(_QWORD*)(v47 + 16) + 871LL);
        v52 = 5;
        v53 = *GameData_212c878[0];
        while (1) {
          if (*(_WORD*)(v51 - 43) != 0 && (*(v51 - 40) & 1) != 0 &&
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v53 + 64) +
                                             8LL * *(unsigned __int16*)(v51 -
                                                                        43)) +
                                  72LL) < 8u) {
            LODWORD(v52) = v52 - 5;
            goto LABEL_117;
          }
          if (*(_WORD*)(v51 - 35) != 0 && (*(v51 - 32) & 1) != 0 &&
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v53 + 64) +
                                             8LL * *(unsigned __int16*)(v51 -
                                                                        35)) +
                                  72LL) < 8u) {
            LODWORD(v52) = v52 - 4;
            goto LABEL_117;
          }
          if (*(_WORD*)(v51 - 27) != 0 && (*(v51 - 24) & 1) != 0 &&
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v53 + 64) +
                                             8LL * *(unsigned __int16*)(v51 -
                                                                        27)) +
                                  72LL) < 8u) {
            LODWORD(v52) = v52 - 3;
            goto LABEL_117;
          }
          if (*(_WORD*)(v51 - 19) != 0 && (*(v51 - 16) & 1) != 0 &&
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v53 + 64) +
                                             8LL * *(unsigned __int16*)(v51 -
                                                                        19)) +
                                  72LL) < 8u) {
            LODWORD(v52) = v52 - 2;
            goto LABEL_117;
          }
          if (*(_WORD*)(v51 - 11) != 0 && (*(v51 - 8) & 1) != 0 &&
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v53 + 64) +
                                             8LL * *(unsigned __int16*)(v51 -
                                                                        11)) +
                                  72LL) < 8u) {
            break;
          }
          if (*(_WORD*)(v51 - 3) != 0 && (*v51 & 1) != 0 &&
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v53 + 64) +
                                             8LL * *(unsigned __int16*)(v51 -
                                                                        3)) +
                                  72LL) < 8u) {
            goto LABEL_117;
          }
          v51 += 48;
          v52 += 6;
          if (v52 == 35) {
            LODWORD(v52) = -1;
            goto LABEL_117;
          }
        }
        LODWORD(v52) = v52 - 1;
      LABEL_117:
        v54 = v50 != (_DWORD)v52;
      LABEL_118:
        if (atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (!v54) {
            goto LABEL_122;
          }
        }
        else {
          (*(void (**)(__int64, long double))(*(_QWORD*)v48 + 16LL))(
              v48, *(long double*)&result),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          result = std___1___shared_weak_count___release_weak_alt1(v48);
          if (!v54) {
          LABEL_122:
            *v42 = *(_DWORD*)v23;
            v55 = *(_QWORD*)(v43 + 160);
            v56 = *(_QWORD*)(v43 + 176);
            *((_QWORD*)v42 + 3) = *(_QWORD*)(v43 + 168);
            *((_QWORD*)v42 + 4) = v56;
            *((_QWORD*)v42 + 2) = v55;
            v58 = *(_QWORD*)(v43 + 184);
            v57 = *(_QWORD*)(v43 + 192);
            if (v57 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v57 + 16), 1u,
                                        memory_order_relaxed);
            }
            v59 = *((_QWORD*)v42 + 6);
            *((_QWORD*)v42 + 5) = v58;
            *((_QWORD*)v42 + 6) = v57;
            if (v59 != 0) {
              result = std___1___shared_weak_count___release_weak_alt1(v59);
            }
            v60 = *(_QWORD*)(v43 + 200);
            v42[16] = *(_DWORD*)(v43 + 208);
            *((_QWORD*)v42 + 7) = v60;
            v42[17] = *(_DWORD*)(v43 + 212);
            if (v42 != (int*)v23) {
              GameRoutine_ea9100((__int64)(v42 + 18), *(_QWORD**)(v43 + 216),
                                 *(_QWORD**)(v43 + 224),
                                 0xAAAAAAAAAAAAAAABLL *
                                     ((__int64)(*(_QWORD*)(v43 + 224) -
                                                *(_QWORD*)(v43 + 216)) >>
                                      3),
                                 result),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
            v62 = *(_QWORD*)(v43 + 240);
            v61 = *(_QWORD*)(v43 + 248);
            if (v61 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v61 + 8), 1u,
                                        memory_order_relaxed);
            }
            v63 = *((_QWORD*)v42 + 13);
            *((_QWORD*)v42 + 12) = v62;
            *((_QWORD*)v42 + 13) = v61;
            if (v63 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v63 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v63 + 16LL))(v63),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(__n128, "v0", "=w"));
              result = std___1___shared_weak_count___release_weak_alt1(v63);
            }
            v39 = *(_QWORD*)(v43 + 256);
            v40 = *(_QWORD*)(v43 + 264);
            v41 = *(_QWORD*)(v43 + 272);
            v42[34] = *(_DWORD*)(v43 + 280);
            *((_QWORD*)v42 + 15) = v40;
            *((_QWORD*)v42 + 16) = v41;
            *((_QWORD*)v42 + 14) = v39;
            v25 = v42 + 36;
            goto LABEL_75;
          }
        }
        v25 = v42;
      LABEL_75:
        v38 = v23 + 144;
        if ((int*)(v23 + 144) == v24) {
          goto LABEL_138;
        }
      }
      if (v48 == 0) {
        goto LABEL_122;
      }
    LABEL_110:
      v54 = false;
      goto LABEL_118;
    }
    v25 = (int*)v23;
  }
LABEL_138:
  v65 = *(int**)(v9 + 56);
  if (v25 == v65) {
    v25 = *(int**)(v9 + 56);
    v11 = GameData_212ea58;
  }
  else {
    v11 = &GameData_2203490;
    do {
      MindBtlInfo_Destructor_alt1((_QWORD*)v65 - 17),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      v65 -= 36;
    } while (v65 != v25);
    *(_QWORD*)(v9 + 56) = v25;
  }
LABEL_143:
  v66 = *(_QWORD*)(v9 + 48);
  if (v25 == (int*)v66) {
    CmdBtlMindEnumeration_ea4b40(v9, 1),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v66 = *(_QWORD*)(v9 + 48);
    v25 = *(int**)(v9 + 56);
  }
  if ((int*)v66 != v25) {
    v67 = *(_DWORD*)(v9 + 40);
    do {
      *(_DWORD*)(v66 + 60) = v67;
      v66 += 144;
    } while ((int*)v66 != v25);
    v66 = *(_QWORD*)(v9 + 48);
    v25 = *(int**)(v9 + 56);
  }
  if ((int*)v66 != v25) {
    v68 = v66 + 112;
    v161 = (__int64 (*)())(GameData_212f5c8[0] + 16),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v162 = v25;
    while (1) {
      v71 = v68 - 104;
      MindBtlInfo_edb740(v68 - 104),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      GameRoutine_ed8c10(v68 - 104),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      *(__n128*)&v73 = GameRoutine_ed90e0(v68 - 104),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v74 = *(_QWORD*)(v68 - 64);
      v75 = (__int64*)(v68 - 72);
      if (v74 == 0 || (v76 = (__int64*)(v68 - 72), *(_QWORD*)(v74 + 8) == -1)) {
        v77 = (*(__int64 (**)(__int64, long double))(*(_QWORD*)v71 + 32LL))(
            v68 - 104, v73),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v74 = *(_QWORD*)(v77 + 88);
        if (v74 == 0) {
          goto LABEL_170;
        }
        v76 = (__int64*)(v77 + 80);
      }
      v78 = *v76;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v74 + 16), 1u,
                                memory_order_relaxed);
      v79 = std___1___shared_weak_count_lock(v74),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      *(__n128*)&v80 = std___1___shared_weak_count___release_weak_alt1(v74),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v79 != 0 && v78 != 0) {
        v81 = *(_QWORD*)(v68 - 80);
        v169_.v169 = nullptr;
        GameRoutine_ed7c40(v68 - 104, (__int64*)&v169_.v169),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (v81 != 0) {
          v82 = *(_WORD*)(v81 + 16) & 0xFFF;
        }
        else {
          v82 = 0;
        }
        v83 = *(_QWORD*)(v78 + 16);
        v168 = v82;
        v84 = v169_.v169;
        v167 = nullptr;
        if (v169_.v169 != nullptr) {
          v84 = (__int64 (**)(void))*v169_.v169,
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        v167 = v84;
        *(_DWORD*)(v68 +
                   8) = Unit_6cbdc0(v83, &v168, (unsigned __int16*)&v167, 1),
                   result = COERCE_AS(__typeof__(result),
                                      PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      else if (v79 == 0) {
        goto LABEL_170;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v79 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v79 + 16LL))(v79, v80),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v79),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    LABEL_170:
      v85 = *v11 + ((__int64)*(int*)(v9 + 8) << 7);
      GameRoutine_790080((__int64)&v169_.v169),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      v169_.v169 = (__int64 (**)(void))v161,
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      game_cmdbtl_MindBtlInfo_CalcCmdBtlInfo(v68 - 104, (__int64)&v169_.v169,
                                             1),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      v86 = *(_DWORD*)(v85 + 684);
      v87 = *(_DWORD*)(v85 + 692) + *(_DWORD*)(v85 + 688);
      if (v87 <= 1) {
        v87 = 1;
      }
      v164 = v87;
      v88 =
          &v177_
               .v177[8 * (unsigned __int64)(unsigned int)(v177_.v180 - 1) + 96];
      v89 = (__int16*)((__int128*)0x10LL);
      if (v177_.v180 > 0) {
        v89 = (__int16*)(v88 + 2);
      }
      if (*v89 >= 1) {
        v90 = 10000;
      }
      else {
        v90 = 8000;
      }
      v91 = *(unsigned __int8*)(v68 - 96);
      v92 = v90 - 1000;
      if (v91 == 10) {
        v90 -= 100000;
      }
      if (v91 == 2) {
        v93 = v92;
      }
      else {
        v93 = v90;
      }
      if (v177_.v180 < 1) {
        goto LABEL_192;
      }
      v94 = *((__int16*)v88 + 8) - (*(_DWORD*)v68 + v177_.v178);
      if (v171_.v173 >= 1) {
        v93 +=
            (int)(float)((float)((float)v94 / (float)(unsigned int)v171_.v173) *
                         0x1.2c00000000000p+7f);
      }
      v95 = v94 <= 0;
      v96 = v94 >= 0 ? v93 : v93 - 10;
      if (v95) {
        v93 = v96;
      }
      else {
        v93 += 10;
      }
      if (v91 == 2) {
      LABEL_192:
        v97 = 0;
        v163 = false;
        v98 = *(_QWORD*)(v68 - 64);
        if (v98 != 0) {
          goto LABEL_202;
        }
      }
      else {
        v99 = *((__int16*)v88 + 14);
        v100 = (unsigned int)(v177_.v179 - v99);
        if (v174_.v175 >= 1) {
          v93 += (int)(float)((float)((float)(int)v100 /
                                      (float)(unsigned int)v174_.v175) *
                              0x1.9000000000000p+8f);
        }
        v101 = v93 + 10;
        v97 = v100 << 32;
        if ((int)v100 <= 0) {
          v101 = v93;
        }
        v163 = v99 < 1;
        if (v99 >= 1) {
          v93 = v101;
        }
        else {
          v93 = v101 + 350;
        }
        v98 = *(_QWORD*)(v68 - 64);
        if (v98 != 0) {
        LABEL_202:
          if (*(_QWORD*)(v98 + 8) != -1) {
            goto LABEL_205;
          }
        }
      }
      v102 = (*(__int64 (**)(__int64))(*(_QWORD*)v71 + 32LL))(v68 - 104),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v98 = *(_QWORD*)(v102 + 88);
      if (v98 == 0) {
        v103 = 0;
        v104 = 0;
        v105 = 1;
        goto LABEL_209;
      }
      v75 = (__int64*)(v102 + 80);
    LABEL_205:
      v103 = *v75;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v98 + 16), 1u,
                                memory_order_relaxed);
      v104 = std___1___shared_weak_count_lock(v98),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v105 = 0;
      if (v104 == 0) {
        v103 = 0;
      }
    LABEL_209:
      v106 = v85 + 672;
      v107 = v11;
      v108 = *(_QWORD*)(v85 + 760);
      if (v108 != 0) {
        v109 = *(_QWORD*)(v106 + 80);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v108 + 16), 1u,
                                  memory_order_relaxed);
        v110 = std___1___shared_weak_count_lock(v108),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (v110 != 0) {
          v111 = v103 == v109;
          if (atomic_fetch_add((atomic_ullong* volatile)(v110 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v112 = v110;
            (*(void (**)(__int64))(*(_QWORD*)v110 + 16LL))(v110),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
            std___1___shared_weak_count___release_weak_alt1(v112),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
        }
        else {
          v111 = v103 == 0;
        }
        std___1___shared_weak_count___release_weak_alt1(v108),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (v104 == 0) {
        LABEL_218:
          if ((v105 & 1) != 0) {
            goto LABEL_220;
          }
        LABEL_219:
          std___1___shared_weak_count___release_weak_alt1(v98),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          goto LABEL_220;
        }
      }
      else {
        v111 = v103 == 0;
        if (v104 == 0) {
          goto LABEL_218;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v104 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        goto LABEL_218;
      }
      (*(void (**)(__int64))(*(_QWORD*)v104 + 16LL))(v104),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      std___1___shared_weak_count___release_weak_alt1(v104),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      if ((v105 & 1) == 0) {
        goto LABEL_219;
      }
    LABEL_220:
      v32 = !v111;
      v9 = v166;
      v11 = v107;
      if (v32) {
        v113 = v93 + 150;
      }
      else {
        v113 = v93;
      }
      v114 = *(unsigned __int8*)(v68 - 96);
      if ((unsigned int)(v114 - 7) > 2) {
        goto LABEL_231;
      }
      v115 = v113 - *(_DWORD*)(v68 + 12);
      if (v114 != 9) {
        if (v163) {
          v115 -= 150;
        }
        v113 = v115 - 30;
      LABEL_231:
        v118 = *(_DWORD*)(v68 + 16) + v113;
        if ((unsigned int)(v114 - 3) >= 2) {
          v117 = v118;
        }
        else {
          v117 = v118 - 100000;
        }
        goto LABEL_234;
      }
      v116 = v115 - 1000;
      if ((float)((float)v86 / (float)v164) < 0x1.0000000000000p-1f) {
        v116 = v115;
      }
      v117 = *(_DWORD*)(v68 + 16) + v116;
    LABEL_234:
      v169_.v169 = game_map_BattleInfo_vtable;
      v177_.v181 = game_map_BattleArea_vtable;
      if (v177_.v182 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v177_.v182 + 8LL))(v177_.v182),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        v177_.v182 = 0;
      }
      v169_.v170 = game_map_BattleSides_vtable;
      BattleSide_Destructor(v177_.v177),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      BattleSide_Destructor(v176),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      BattleSide_Destructor(v174_.v174),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      BattleSide_Destructor(&v171_.v171),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      *(_QWORD*)(v68 + 20) = v97 | v117;
      v171_.v172 = (__int64 (**)(void))&v169_.v169,
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v119 = (_QWORD*)*v11;
      v169_.v169 = GameData_1fef008;
      CmdbtlPartyNatives_e9a800(v119, (__int64)&v169_.v169),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v171_.v172 == (__int64 (**)(void))&v169_.v169) {
        v69 = 32;
      }
      else {
        if (v171_.v172 == nullptr) {
          goto LABEL_153;
        }
        v69 = 40;
      }
      (*(void (**)(__int64))((char*)*v171_.v172 + v69))((__int64)v171_.v172),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    LABEL_153:
      v70 = (int*)(v68 + 32);
      v68 += 144;
      if (v70 == v162) {
        v66 = *(_QWORD*)(v166 + 48);
        v25 = *(int**)(v166 + 56);
        break;
      }
    }
  }
  if ((int*)v66 == v25) {
    *(_QWORD*)(v9 + 72) = 0;
    *(_DWORD*)(v9 + 80) = 0;
    return result;
  }
  v120 = 0x8E38E38E38E38E39LL;
  GameRoutine_ea6580(
      v66, v25,
      (2 * __clz(0x8E38E38E38E38E39LL * (((__int64)v25 - v66) >> 4))) ^ 0x7E, 1,
      result),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v122 = *(_QWORD*)(v9 + 48);
  v121 = *(_QWORD*)(v9 + 56);
  *(_QWORD*)(v9 + 72) = 0;
  *(_DWORD*)(v9 + 80) = 0;
  if (v121 == v122) {
    return result;
  }
  v123 = 0;
  v124 = 0;
  v125 = nullptr;
  v126 = nullptr;
  v127 = 0;
  v128 = 0;
  v129 = 0;
  if (*(_QWORD*)(v9 + 24) - *(_QWORD*)(v9 + 16) <= 0x10u) {
    v130 = 2;
  }
  else {
    v130 = 4;
  }
  v165 = v130;
  while (2) {
    v131 = *(_QWORD*)(v166 + 48);
    if (((*(_QWORD*)(v166 + 56) - v131) >> 4) * v120 > v124) {
      v132 = v131 + v123;
      v133 = *(_DWORD*)(v131 + v123 + 132);
      if (v133 < 0) {
        goto LABEL_249;
      }
      if ((v128 & 1) != 0) {
        if (v129 - v133 > 150) {
          v128 = 1;
        LABEL_249:
          ++v124;
          v123 += 144;
          if (v130 == v124) {
            break;
          }
          continue;
        }
        v133 = v129;
      }
      if ((unsigned __int64)v126 < v127) {
        *(_QWORD*)v126 = v132;
        v126 += 8;
        v128 = 1;
        v129 = v133;
      }
      else {
        v134 = v120;
        v135 = (char*)(v126 - v125);
        v136 = (v126 - v125) >> 3;
        v137 = v136 + 1;
        if ((unsigned __int64)(v136 + 1) >> 61 != 0) {
          GameRoutine_ea94a0(),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        if ((__int64)(v127 - (_QWORD)v125) >> 2 > v137) {
          v137 = (__int64)(v127 - (_QWORD)v125) >> 2;
        }
        if (v127 - (unsigned __int64)v125 >= 0x7FFFFFFFFFFFFFF8LL) {
          v138 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v138 = v137;
        }
        if (v138 != 0) {
          if (v138 >> 61 != 0) {
            goto LABEL_296;
          }
          v139 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v138, 16, 0),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        else {
          v139 = 0;
        }
        v127 = v139 + 8 * v138;
        v140 = (char*)(v126 - v125);
        v141 = (__int64)&v135[v139 + -8 * v136];
        *(_QWORD*)&v135[v139] = v132;
        v126 = &v135[v139 + 8];
        memcpy(v141, v125, v140),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (v125 != nullptr) {
          v142 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v142 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v142),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        v130 = v165;
        v128 = 1;
        v129 = v133;
        v125 = (char*)v141;
        v120 = v134;
      }
      goto LABEL_249;
    }
    break;
  }
  v143 = v126 - v125;
  if (v126 == v125) {
    v144 = v166;
    v147 = *(_QWORD*)(v166 + 48);
    if ((unsigned __int64)v126 >= v127) {
      if ((__int64)(v127 - (_QWORD)v125) >> 2 <=
          (unsigned __int64)((v143 >> 3) + 1)) {
        v148 = (v143 >> 3) + 1;
      }
      else {
        v148 = (__int64)(v127 - (_QWORD)v125) >> 2;
      }
      if (v127 - (unsigned __int64)v125 >= 0x7FFFFFFFFFFFFFF8LL) {
        v148 = 0x1FFFFFFFFFFFFFFFLL;
      }
      if (v148 >> 61 != 0) {
      LABEL_296:
        GameRoutine_60a210(),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v146 = (__int64*)fw_memory_g_heap_manager_ptr;
      v149 =
          (char*)(fw_memory_HeapManager_Allocate_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v148, 16, 0) +
                  v143),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      *(_QWORD*)v149 = v147;
      v145 = v149 + 8;
      memcpy(v149, v125, v126 - v125),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v126 != nullptr) {
        v150 = 128;
        if (*(_QWORD*)(*v146 + 200) == 0) {
          v150 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v146 + v150),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v125 = v149;
    }
    else {
      *(_QWORD*)v126 = v147;
      v146 = &fw_memory_g_heap_manager;
      v145 = v126 + 8;
    }
  }
  else {
    v144 = v166;
    v145 = v126;
    v146 = (__int64*)fw_memory_g_heap_manager_ptr;
  }
  nn_os_LockMutex(&game_g_random_mutex),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v151 = game_map_MapRandom_instance__ptr[0];
  v152 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((_UNKNOWN**)0x8LL));
  v153 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
  v154 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
         (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
  *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
      *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
  *((_DWORD*)v151 + 1) = v152;
  v155 = (v154 >> 8) ^ (v153 >> 19) ^ v154 ^ v153;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v151) = v153;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v151 + 4) = v155;
  v156 = v155 & 0x7FFFFFFF;
  nn_os_UnlockMutex(&game_g_random_mutex),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v157 = v156 % (int)((unsigned __int64)(v145 - v125) >> 3);
  if (v145 != v125) {
    v158 = v125;
    do {
      v159 = *(_DWORD**)v158;
      v158 += 8;
      *v159 = 1;
    } while (v158 != v145);
  }
  **(_DWORD**)&v125[8 * v157] = 2;
  *(_QWORD*)(v144 + 72) = *(_QWORD*)&v125[8 * v157] + 8LL;
  *(_DWORD*)(v144 + 80) = *(_DWORD*)(*(_QWORD*)&v125[8 * v157] + 136LL);
  v160 = 128;
  if (*(_QWORD*)(*v146 + 200) == 0) {
    v160 = 56;
  }
  return nn_mem_StandardAllocator_Free_alt1(*v146 + v160);
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
  CmdBtlMindEnumeration_Destructor(a1 + 208);
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
