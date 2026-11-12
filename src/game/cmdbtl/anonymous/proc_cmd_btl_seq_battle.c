#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BattleInfo_796d90(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_80e800(_QWORD);
__int64 GameRoutine_a28e10(_QWORD, _QWORD);
__int64 GameRoutine_eacc20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (*GameData_1fe76a0[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_cmdbtl_anonymous_ProcCmdBtlSeqBattle_vtable[])();
extern __int64 GameData_212d240;
extern __int64 game_cmdbtl_ProcCmdBtlSeqView_instance_;
extern __int64 game_sound_g_game_sound;
extern __int64* GameData_212ea58;
extern char GameData_1a9f09e;
__int64 ProcCmdBtlSeqBattle_Destructor_alt1(__int64 a1) __asm__(
    "ProcCmdBtlSeqBattle_Destructor");
__int64 ProcCmdBtlSeqBattle_Unknown18_alt1(__int64 a1, __int64 a2) __asm__(
    "ProcCmdBtlSeqBattle_Unknown18");
__int64 ProcCmdBtlSeqBattle_Unknown19();
__int64 ProcCmdBtlSeqBattle_Unknown20();
__int64 CmdBtlSeqActionSkill_1041940(_QWORD);
__int64 CmdbtlPartyNatives_e73d00(_QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_67ed20(_QWORD);
__int64 GameRoutine_7a2480(_QWORD);
__int64 GameRoutine_7a2a60(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_97b2f0(_QWORD);
__int64 GameRoutine_f32c80(_QWORD, _QWORD);
__int64 GameRoutine_fa4f80(void);
__int64 Unit_6cf1c0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_Unit_GetMaxPollution(_QWORD);
__int64 game_Unit_SetPollution(_QWORD, _QWORD);
__int64 game_cmdbtl_CmdBtlSeqActionSkill_SkillBind(_QWORD, _QWORD, _QWORD);
__int64 game_cmdbtl_CmdBtlSeqAction_UpdateBlazeBind(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strlen(_QWORD);
extern __int64 (*GameData_1f98b78[])();
extern __int64 (*GameData_1fe7540[])();
extern __int64 GameData_21ec7a8;
extern __int64 GameData_21f4cc0;
extern __int64 GameData_2203490;
extern __int64 GameData_2216820;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c880[5];
extern char GameData_2216858;
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD);
__int64 ProcCmdBtlSeqBattle_e6ad20_alt1(__int64 result) __asm__(
    "ProcCmdBtlSeqBattle_e6ad20");
__int64 ProcCmdBtlSeqBattle_e6b0b0(__int64 result);
__int64 ProcCmdBtlSeqBattle_e6b110(__int64 result);
__int64 ProcCmdBtlSeqBattle_e6b1a0(__int64 result);
__int64 ProcCmdBtlSeqBattle_e6b430(__int64 a1);
void game_cmdbtl_anonymous_ProcCmdBtlSeqBattle_CommitBtlInfo_closure_Invoke(
    __int64 a1, __int64 a2, __int64* a3);
__int64
game_cmdbtl_anonymous_ProcCmdBtlSeqBattle_CompleteBegin_closure_Invoke_e6bcd0(
    __int64 a1, __int64 a2);
__int64
game_cmdbtl_anonymous_ProcCmdBtlSeqBattle_CompleteBegin_closure_Invoke_e6be90(
    __int64 result, _DWORD* a2);
__int64 ProcCmdBtlSeqBattle_Destructor_e6c410_alt1(
    __int64 a1, __int64 a2) __asm__("ProcCmdBtlSeqBattle_Destructor_e6c410");
__int64 ProcCmdBtlSeqBattle_Unknown5();
__int64 ProcCmdBtlSeqBattle_Unknown6();
_QWORD* CmdbtlPartyNatives_e9a800(_QWORD*, __int64);
_QWORD* GameRoutine_f83540(__int64*, _QWORD*);
__int64 BattleInfo_796b00(__int64 result);
__int64
CmdbtlPartyNatives_e73d00_alt1(__int64) __asm__("CmdbtlPartyNatives_e73d00");
__int64 GameRoutine_790080(__int64);
__int64 GameRoutine_7992e0(__int64);
__int64 GameRoutine_f49cb0(__int64, unsigned __int8);
__n128 BattleArea_8b9d00(__int64);
__n128 BattleSide_Destructor(_QWORD*);
__n128 CmdBtlParty_e734e0(__int64);
__n128 GameRoutine_10042c0(__int64, __int64*, __int64*, __n128 result);
__n128 GameRoutine_ed8460(__int64);
__n128 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _QWORD GameData_1b90fb8[3];
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_1fe7440[])();
extern __int64 (*GameData_1fecfb8[])();
extern __int64 (*GameData_1fef008[])();
extern __int64 (*GameData_1fef088[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212d258[2];
extern __int64* GameData_212da50[3];
extern __int64* GameData_212f4e0[3];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212d238[2];
extern __int64 GameData_212f530[2];
extern __int64 GameData_212f5c8[2];
extern __int64 GameData_2219080;
extern __int64 GameData_2219088;
extern __int64 GameData_22190a8;
void GameRoutine_ed89e0(__int64);
void __attribute__((noreturn)) GameRoutine_60a310();
void game_map_790ba0(__int64);
__n128 ProcCmdBtlSeqBattle_e68f40();
__n128 ProcCmdBtlSeqBattle_e698a0(__int64 a1);
void game_cmdbtl_anonymous_ProcCmdBtlSeqBattle_CommitBtlInfo_alt1(
    __int64 a1, __n128 result) __asm__("game_cmdbtl_anonymous_"
                                       "ProcCmdBtlSeqBattle_CommitBtlInfo");
__int64 ProcCmdBtlSeqBattle_e6a4e0(__int64 result);
__int64 ProcCmdBtlSeqBattle_e6a7b0();
void ProcCmdBtlSeqBattle_e6b340();
__n128 ProcCmdBtlSeqBattle_e6b8f0_alt1(
    __int64 result, unsigned __int8 a2,
    __int64 a3) __asm__("ProcCmdBtlSeqBattle_e6b8f0");
__int64 GameRoutine_eacc20_alt1(__int64, unsigned int, unsigned int,
                                unsigned int) __asm__("GameRoutine_eacc20");
__int64 game_809ba0(__int64, float);
__int64 std___1___shared_weak_count___release_weak_alt2(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_21d3f90;
extern __int64 GameData_22190c0;
extern __int64 game_ProcFadeView_instance_;
void __attribute__((noreturn))
GameRoutine_8123d0_alt1() __asm__("GameRoutine_8123d0");
__int64 ProcCmdBtlSeqBattle_e6a620(__int64 result);
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
void BattleSide_Destructor_alt1(_QWORD*) __asm__("BattleSide_Destructor");
void ProcCmdBtlSeqBattle_e6b8f0(__int64 a1, unsigned __int8 a2, __int64 a3);
__int64
GameRoutine_1a09ce0_alt1(__int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a09ce0");
__int64 GameRoutine_f32c80_alt1(__int64,
                                __int64*) __asm__("GameRoutine_f32c80");
__int64 Unit_6cf1c0_alt1(__int64) __asm__("Unit_6cf1c0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_ProcInst_Unregister_alt1(__int64 result) __asm__(
    "game_ProcInst_Unregister");
__int64 game_cmdbtl_CmdBtlSeqAction_UpdateBlazeBind_alt1(__int64) __asm__(
    "game_cmdbtl_CmdBtlSeqAction_UpdateBlazeBind");
__int64 std___1___shared_weak_count___release_weak_alt3(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
bool BattleInfo_796d90_alt1(__int64, __int64) __asm__("BattleInfo_796d90");
char* GameHr_67ed20(_QWORD*);
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void* game_97b2f0(__int64);
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcCmdBtlSeqBattle_e6ad20(__int64 a1);
void ProcCmdBtlSeqBattle_Destructor(__int64 a1);
bool ProcCmdBtlSeqBattle_Unknown18(__int64 a1, __int64 a2);
bool ProcCmdBtlSeqBattle_Destructor_e6c410(__int64 a1, __int64 a2);
void CmdBtlParty_e734e0_alt1(__int64) __asm__("CmdBtlParty_e734e0");
void GameRoutine_10042c0_alt1(__int64, __int64*,
                              __int64*) __asm__("GameRoutine_10042c0");
void game_cmdbtl_anonymous_ProcCmdBtlSeqBattle_CommitBtlInfo(__int64 a1);

__n128 ProcCmdBtlSeqBattle_e68f40()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v0 = GameData_2203490;
  v1 = *(_QWORD*)(GameData_2203490 + 640);
  v2 = *(_QWORD*)(GameData_2203490 + 648);
  if (v2 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v3 = v1;
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak_alt1(v2);
    v1 = v3;
    if (v3 != 0) {
      return GameRoutine_ed8460(v1);
    }
  }
  else if (v1 != 0) {
    return GameRoutine_ed8460(v1);
  }
  v1 = *(_QWORD*)(v0 + 656);
  v4 = *(_QWORD*)(v0 + 664);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v5 = v1;
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak_alt1(v4);
      v1 = v5;
    }
  }
  return GameRoutine_ed8460(v1);
}

__n128 ProcCmdBtlSeqBattle_e698a0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  int v9;
  bool v10;
  int v11;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __n128 result;
  __int64 v22;
  char v23;
  int v24;
  int v25;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v1 = *(_QWORD*)(a1 + 192);
  v2 = *(_QWORD*)(a1 + 200);
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v1 != 0) {
    v3 = *(_QWORD*)(v1 + 200);
    if (v3 != *(_QWORD*)(v1 + 192)) {
      v4 = *(_DWORD*)(v3 - 32);
      v5 = 16;
      if (v4 <= -77626399) {
        if (v4 == -972548316 || v4 == -93581017) {
          goto LABEL_29;
        }
      }
      else if (v4 == -77626398 || v4 == 1400556095 || v4 == 1715476756) {
        goto LABEL_29;
      }
      v9 = *(_DWORD*)(v3 - 28);
      v5 = 24;
      if (v9 <= -77626399) {
        v10 = v9 == -972548316;
        v11 = -93581017;
      }
      else {
        v10 = v9 == -77626398 || v9 == 1715476756;
        v11 = 1400556095;
      }
      if (!v10 && v9 != v11) {
        goto LABEL_40;
      }
    LABEL_29:
      v13 = GameData_2203490;
      v14 = *(_QWORD**)(GameData_2203490 + 640);
      v15 = *(_QWORD*)(GameData_2203490 + 648);
      if (v15 != 0 &&
          (atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                     memory_order_relaxed),
           atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                            0xFFFFFFFFFFFFFFFFLL) == 0)) {
        v16 = v14;
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v15),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        v14 = v16;
        if (v16 == nullptr) {
        LABEL_34:
          v14 = *(_QWORD**)(v13 + 656);
          v17 = *(_QWORD*)(v13 + 664);
          if (v17 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                                      memory_order_relaxed);
            if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v18 = v14;
              (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(__n128, "v0", "=w"));
              std___1___shared_weak_count___release_weak_alt1(v17),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(__n128, "v0", "=w"));
              v14 = v18;
            }
          }
        }
      }
      else if (v14 == nullptr) {
        goto LABEL_34;
      }
      v19 = (*(__int64 (**)(__int64))(*v14 + v5))((__int64)v14),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v19 != 0) {
        v22 = v19;
        v23 = CmdbtlPartyNatives_e73d00_alt1(v19),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v24 = *(_DWORD*)(v22 + 12);
        v25 = v23 & 1 | (*(_DWORD*)(v22 + 36) == 1);
        *(_DWORD*)(v22 + 12) = v25;
        if (v24 != v25) {
          result = CmdBtlParty_e734e0(v22);
        }
      }
    }
  }
LABEL_40:
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    return std___1___shared_weak_count___release_weak_alt1(v2);
  }
  return result;
}

void game_cmdbtl_anonymous_ProcCmdBtlSeqBattle_CommitBtlInfo(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  _BYTE* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _DWORD* v22;
  __int64 v23;
  _DWORD* v25;
  __int64 v27;
  int v28;
  char v29;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  char v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  int v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64* v53;
  __int64* v54;
  __int64 v55;
  __int64* v56;
  __int64* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64* v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  char* v73;
  char* v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  char* v79;
  char* v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  struct {
    _QWORD v88[4];
    _QWORD* v89;
  } v88_;
  struct {
    __int64 v90;
    __int64 v91;
  } v90_;
  struct {
    __int64 v92;
    __int64 v93;
  } v92_;
  struct {
    __int64 v94;
    __int64 v95;
  } v94_;
  struct {
    __int64 v96;
    __int64 v97;
  } v96_;
  struct {
    __int64 v98;
    __int64 v99;
  } v98_;
  struct {
    __int64 v100;
    __int64 v101;
  } v100_;

  v1 = *(_QWORD*)(a1 + 160);
  v2 = *(_QWORD*)(a1 + 168);
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v1 == 0) {
    goto LABEL_157;
  }
  BattleInfo_796b00(v1);
  v4 = GameData_2203490;
  v5 = *(_QWORD*)(GameData_2203490 + 640);
  v6 = *(_QWORD*)(GameData_2203490 + 648);
  if (v6 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak_alt3(v6);
    if (v5 != 0) {
      goto LABEL_14;
    }
  }
  else if (v5 != 0) {
    goto LABEL_14;
  }
  v5 = *(_QWORD*)(v4 + 656);
  v7 = *(_QWORD*)(v4 + 664);
  if (v7 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak_alt3(v7);
    if (v5 == 0) {
      goto LABEL_38;
    }
  }
  else if (v5 == 0) {
    goto LABEL_38;
  }
LABEL_14:
  if ((*(_WORD*)(v5 + 53) & 0x208) != 0) {
    goto LABEL_38;
  }
  v9 = *(_QWORD**)(a1 + 160);
  v8 = *(_QWORD*)(a1 + 168);
  v88_.v88[0] = GameData_1fe7440;
  v88_.v89 = v88_.v88;
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v9 == nullptr) {
    goto LABEL_30;
  }
  if (v9[5] != 0) {
    v100_.v100 = v9[5];
    if (v88_.v89 == nullptr) {
      goto LABEL_177;
    }
    (*(void (**)(_QWORD*, _QWORD*, __int64*))(*v88_.v89 + 48LL))(
        v88_.v89, v9 + 2, &v100_.v100);
  }
  if (v9[100] != 0) {
    v100_.v100 = v9[100];
    if (v88_.v89 == nullptr) {
      goto LABEL_177;
    }
    (*(void (**)(_QWORD*, _QWORD*, __int64*))(*v88_.v89 + 48LL))(
        v88_.v89, v9 + 97, &v100_.v100);
  }
  if (v9[195] != 0) {
    v100_.v100 = v9[195];
    if (v88_.v89 == nullptr) {
      goto LABEL_177;
    }
    (*(void (**)(_QWORD*, _QWORD*, __int64*))(*v88_.v89 + 48LL))(
        v88_.v89, v9 + 192, &v100_.v100);
  }
  if (v9[290] != 0) {
    v100_.v100 = v9[290];
    if (v88_.v89 == nullptr) {
    LABEL_177:
      GameRoutine_60a310();
    }
    (*(void (**)(_QWORD*, _QWORD*, __int64*))(*v88_.v89 + 48LL))(
        v88_.v89, v9 + 287, &v100_.v100);
  }
LABEL_30:
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak_alt3(v8);
  }
  if (v88_.v89 == v88_.v88) {
    v10 = 32;
    goto LABEL_37;
  }
  if (v88_.v89 != nullptr) {
    v10 = 40;
  LABEL_37:
    (*(void (**)(__int64))(*v88_.v89 + v10))((__int64)v88_.v89);
  }
LABEL_38:
  v11 = *(unsigned int*)(v1 + 11256);
  if ((_DWORD)v11 == 0) {
    goto LABEL_152;
  }
  v86 = v1 + 3064;
  v87 = v2;
  v12 = (_BYTE*)(v1 + 3068);
  do {
    if (*(v12 - 2) != 4 &&
        *(_QWORD*)(v1 + 40 + 760LL * (unsigned __int8)*(v12 - 2)) != 0 &&
        *v12 == 19) {
      v13 = GameData_2203490;
      v14 = *(_QWORD*)(GameData_2203490 + 640);
      v15 = *(_QWORD*)(GameData_2203490 + 648);
      if (v15 == 0 ||
          (atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                     memory_order_relaxed),
           atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                            0xFFFFFFFFFFFFFFFFLL) != 0)) {
        if (v14 == 0) {
        LABEL_49:
          v14 = *(_QWORD*)(v13 + 656);
          v16 = *(_QWORD*)(v13 + 664);
          if (v16 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                                      memory_order_relaxed);
            if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
              std___1___shared_weak_count___release_weak_alt3(v16);
            }
          }
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
        std___1___shared_weak_count___release_weak_alt3(v15);
        if (v14 == 0) {
          goto LABEL_49;
        }
      }
      *(_DWORD*)(v14 + 56) |= 2u;
    }
    --v11;
    v12 += 64;
  } while (v11 != 0);
  v17 = *(_DWORD*)(v1 + 11256);
  v2 = v87;
  v18 = (unsigned int)(v17 - 1);
  if (v17 < 1) {
    goto LABEL_152;
  }
  v19 = GameData_2203490;
  v20 = *(_QWORD*)(GameData_2203490 + 640);
  v21 = *(_QWORD*)(GameData_2203490 + 648);
  if (v21 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8),
                                             1u, memory_order_relaxed),
                   atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
    std___1___shared_weak_count___release_weak_alt3(v21);
    if (v20 == 0) {
      goto LABEL_121;
    }
  }
  else {
    if (v20 != 0) {
      goto LABEL_56;
    }
  LABEL_121:
    v20 = *(_QWORD*)(v19 + 656);
    v62 = *(_QWORD*)(v19 + 664);
    if (v62 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v62 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v62 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v62 + 16LL))(v62);
        std___1___shared_weak_count___release_weak_alt3(v62);
      }
    }
  }
LABEL_56:
  v22 = (_DWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
  v23 = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 24LL))(v20);
  v25 = (_DWORD*)v23;
  if (v22 != nullptr && v23 != 0) {
    v27 = v86 + (v18 << 6);
    v28 = *(__int16*)(v27 + 16);
    v29 = CmdbtlPartyNatives_e73d00_alt1((__int64)v22);
    v31 = v22[5] + v22[4];
    v32 = v22[3];
    if (v31 <= 1) {
      v31 = 1;
    }
    v33 = v29 & 1 | (v22[9] == 1);
    if (v31 >= v28) {
      v34 = v28;
    }
    else {
      v34 = v31;
    }
    if (v33 <= v28) {
      v33 = v34;
    }
    if (v31 >= (unsigned int)v33) {
      v31 = v33;
    }
    if (v33 >= 0) {
      v35 = v31;
    }
    else {
      v35 = 0;
    }
    v22[3] = v35;
    if (v35 != v32) {
      CmdBtlParty_e734e0_alt1((__int64)v22);
    }
    if (v22 != v25) {
      v36 = *(__int16*)(v27 + 28);
      v37 = CmdbtlPartyNatives_e73d00_alt1((__int64)v25);
      v38 = v25[5] + v25[4];
      v39 = v25[3];
      if (v38 <= 1) {
        v38 = 1;
      }
      v40 = v37 & 1 | (v25[9] == 1);
      if (v38 >= v36) {
        v41 = v36;
      }
      else {
        v41 = v38;
      }
      if (v40 <= v36) {
        v40 = v41;
      }
      if (v38 >= (unsigned int)v40) {
        v38 = v40;
      }
      if (v40 >= 0) {
        v42 = v38;
      }
      else {
        v42 = 0;
      }
      v25[3] = v42;
      if (v42 != v39) {
        CmdBtlParty_e734e0_alt1((__int64)v25);
      }
    }
  }
  v43 = GameData_2203490;
  v44 = *(_QWORD*)(GameData_2203490 + 640);
  v45 = *(_QWORD*)(GameData_2203490 + 648);
  if (v45 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v45 + 8),
                                             1u, memory_order_relaxed),
                   atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
    std___1___shared_weak_count___release_weak_alt3(v45);
    if (v44 != 0) {
      goto LABEL_92;
    }
  }
  else if (v44 != 0) {
    goto LABEL_92;
  }
  v44 = *(_QWORD*)(v43 + 656);
  v63 = *(_QWORD*)(v43 + 664);
  if (v63 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v63 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v63 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v63 + 16LL))(v63);
      std___1___shared_weak_count___release_weak_alt3(v63);
    }
  }
LABEL_92:
  v46 = *(_DWORD*)(v44 + 52);
  if (v22 != nullptr && v22[2] == 0) {
    v64 = GameData_2219080;
    v65 = *(_QWORD*)(v20 + 40);
    if (v65 == 0 || *(_QWORD*)(v65 + 8) == -1) {
      v66 = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 32LL))(v20);
      v65 = *(_QWORD*)(v66 + 88);
      v100_.v100 = *(_QWORD*)(v66 + 80);
      v100_.v101 = v65;
      if (v65 == 0) {
        goto LABEL_133;
      }
    }
    else {
      v100_.v100 = *(_QWORD*)(v20 + 32);
      v100_.v101 = v65;
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v65 + 16), 1u,
                              memory_order_relaxed);
  LABEL_133:
    if ((*(_DWORD*)(v20 + 48) & 0x80000000) != 0) {
      v98_.v98 = 0;
      v98_.v99 = 0;
    }
    else {
      v67 = (__int64*)(*(_QWORD*)((*(__int64 (**)(__int64))(*(_QWORD*)v20 +
                                                            32LL))(v20) +
                                  40) +
                       16LL * *(int*)(v20 + 48));
      v68 = *v67;
      v69 = v67[1];
      if (v69 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v69 + 8), 1u,
                                  memory_order_relaxed);
        v98_.v98 = v68;
        v98_.v99 = v69;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v69 + 16), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v69 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v69 + 16LL))(v69);
          std___1___shared_weak_count___release_weak_alt3(v69);
        }
      }
      else {
        v98_.v98 = *v67;
        v98_.v99 = 0;
      }
    }
    GameRoutine_10042c0_alt1(v64, &v100_.v100, &v98_.v98);
    if (v98_.v99 != 0) {
      std___1___shared_weak_count___release_weak_alt3(v98_.v99);
    }
    if (v100_.v101 != 0) {
      std___1___shared_weak_count___release_weak_alt3(v100_.v101);
    }
    if ((v46 & 0x2000) != 0) {
      goto LABEL_152;
    }
    v70 = GameData_22190a8;
    v71 = *(_QWORD*)(v20 + 40);
    if (v71 == 0 || *(_QWORD*)(v71 + 8) == -1) {
      v72 = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 32LL))(v20);
      v71 = *(_QWORD*)(v72 + 88);
      v96_.v96 = *(_QWORD*)(v72 + 80);
      v96_.v97 = v71;
      if (v71 == 0) {
        goto LABEL_149;
      }
    }
    else {
      v96_.v96 = *(_QWORD*)(v20 + 32);
      v96_.v97 = v71;
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v71 + 16), 1u,
                              memory_order_relaxed);
  LABEL_149:
    v73 = *(char**)(v70 + 32);
    v74 = *(char**)(v70 + 40);
    if ((unsigned __int64)(v74 - v73) < 0x11) {
    LABEL_150:
      GameRoutine_f83540((__int64*)(v70 + 32), &v96_.v96);
      v55 = v96_.v97;
      if (v96_.v97 != 0) {
        goto LABEL_151;
      }
      goto LABEL_152;
    }
    while (1) {
      v79 = v73 + 16;
      if (v73 + 16 != v74) {
        break;
      }
      v80 = v74;
      v74 = v73;
      if (v73 != v80) {
        goto LABEL_171;
      }
    LABEL_161:
      v73 = *(char**)(v70 + 32);
      *(_QWORD*)(v70 + 40) = v74;
      if ((unsigned __int64)(v74 - v73) <= 0x10) {
        goto LABEL_150;
      }
    }
    do {
      v82 = *(_QWORD*)v79;
      v81 = *((_QWORD*)v79 + 1);
      v83 = *((_QWORD*)v79 - 1);
      *(_QWORD*)v79 = 0;
      *((_QWORD*)v79 + 1) = 0;
      *((_QWORD*)v79 - 2) = v82;
      *((_QWORD*)v79 - 1) = v81;
      if (v83 != 0) {
        std___1___shared_weak_count___release_weak_alt3(v83);
      }
      v79 += 16;
    } while (v79 != v74);
    v80 = *(char**)(v70 + 40);
    v74 = v79 - 16;
    if (v79 - 16 == v80) {
      goto LABEL_161;
    }
    do {
    LABEL_171:
      v84 = *((_QWORD*)v80 - 1);
      if (v84 != 0) {
        std___1___shared_weak_count___release_weak_alt3(v84);
      }
      v80 -= 16;
    } while (v80 != v74);
    goto LABEL_161;
  }
  if (v25 == nullptr || v25[2] != 0) {
    goto LABEL_152;
  }
  v47 = *(_QWORD*)GameData_212f530[0];
  v48 = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 40LL))(v20);
  v49 = *(_QWORD*)(v48 + 88);
  v94_.v94 = *(_QWORD*)(v48 + 80);
  v94_.v95 = v49;
  if (v49 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v49 + 16), 1u,
                              memory_order_relaxed);
  }
  v92_.v92 = 0;
  v92_.v93 = 0;
  GameRoutine_10042c0_alt1(v47, &v94_.v94, &v92_.v92);
  if (v92_.v93 != 0) {
    std___1___shared_weak_count___release_weak_alt3(v92_.v93);
  }
  if (v94_.v95 != 0) {
    std___1___shared_weak_count___release_weak_alt3(v94_.v95);
  }
  if ((v46 & 0x2000) != 0) {
    goto LABEL_152;
  }
  v50 = *GameData_212f4e0[0];
  v51 = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 40LL))(v20);
  v52 = *(_QWORD*)(v51 + 88);
  v90_.v90 = *(_QWORD*)(v51 + 80);
  v90_.v91 = v52;
  if (v52 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v52 + 16), 1u,
                              memory_order_relaxed);
  }
  v53 = *(__int64**)(v50 + 32);
  v54 = *(__int64**)(v50 + 40);
  if ((unsigned __int64)((char*)v54 - (char*)v53) >= 0x11) {
    while (1) {
      v56 = v53 + 2;
      if (v53 + 2 != v54) {
        break;
      }
      v57 = v54;
      v54 = v53;
      if (v53 != v57) {
        goto LABEL_118;
      }
    LABEL_108:
      v53 = *(__int64**)(v50 + 32);
      *(_QWORD*)(v50 + 40) = v54;
      if ((unsigned __int64)((char*)v54 - (char*)v53) <= 0x10) {
        goto LABEL_106;
      }
    }
    do {
      v59 = *v56;
      v58 = v56[1];
      v60 = *(v56 - 1);
      *v56 = 0;
      v56[1] = 0;
      *(v56 - 2) = v59;
      *(v56 - 1) = v58;
      if (v60 != 0) {
        std___1___shared_weak_count___release_weak_alt3(v60);
      }
      v56 += 2;
    } while (v56 != v54);
    v57 = *(__int64**)(v50 + 40);
    v54 = v56 - 2;
    if (v56 - 2 == v57) {
      goto LABEL_108;
    }
    do {
    LABEL_118:
      v61 = *(v57 - 1);
      if (v61 != 0) {
        std___1___shared_weak_count___release_weak_alt3(v61);
      }
      v57 -= 2;
    } while (v57 != v54);
    goto LABEL_108;
  }
LABEL_106:
  GameRoutine_f83540((__int64*)(v50 + 32), &v90_.v90);
  v55 = v90_.v91;
  if (v90_.v91 != 0) {
  LABEL_151:
    std___1___shared_weak_count___release_weak_alt3(v55);
  }
LABEL_152:
  v75 = GameData_2203490;
  v76 = *(_QWORD*)(GameData_2203490 + 640);
  v77 = *(_QWORD*)(GameData_2203490 + 648);
  if (v77 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v77 + 8),
                                             1u, memory_order_relaxed),
                   atomic_fetch_add((atomic_ullong* volatile)(v77 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v77 + 16LL))(v77);
    std___1___shared_weak_count___release_weak_alt3(v77);
    if (v76 != 0) {
      goto LABEL_155;
    }
  }
  else if (v76 != 0) {
    goto LABEL_155;
  }
  v76 = *(_QWORD*)(v75 + 656);
  v85 = *(_QWORD*)(v75 + 664);
  if (v85 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v85 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v85 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v85 + 16LL))(v85);
      std___1___shared_weak_count___release_weak_alt3(v85);
    }
  }
LABEL_155:
  if ((unsigned int)*(unsigned __int8*)(v76 + 8) - 7 < 3) {
    v78 = GameData_21f4cc0 +
          4LL * GameData_1b90fb8[(unsigned __int8)(*(_BYTE*)(v76 + 8) - 7)];
    ++*(_DWORD*)(v78 + 16);
  }
LABEL_157:
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak_alt3(v2);
  }
}

__int64 ProcCmdBtlSeqBattle_e6a4e0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int8 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v12;
  bool v13;
  int v14;

  v1 = *(_QWORD*)(result + 160);
  if (v1 != 0) {
    if ((*(_BYTE*)(*(_QWORD*)(v1 + 24) + 11276LL) & 1) == 0 &&
        (*(_BYTE*)(v1 + 140) & 1) != 0) {
      v2 = 16;
    LABEL_8:
      v3 = *(_QWORD*)(v1 + v2 + 24);
      if (v3 != 0 && (v4 = *(_QWORD*)(v3 + 440)) != 0) {
        v5 = *(_BYTE*)(v4 + 16);
      }
      else {
        v5 = 9;
      }
      return GameRoutine_f49cb0(result, v5);
    }
    if ((*(_BYTE*)(*(_QWORD*)(v1 + 784) + 11276LL) & 1) == 0 &&
        (*(_BYTE*)(v1 + 900) & 1) != 0) {
      v2 = 776;
      goto LABEL_8;
    }
  }
  v6 = *(_QWORD*)(result + 192);
  if (v6 != 0) {
    v7 = *(_QWORD*)(v6 + 200);
    if (v7 != *(_QWORD*)(v6 + 192)) {
      v8 = *(_DWORD*)(v7 - 32);
      v5 = 0;
      if (v8 <= -77626399) {
        if (v8 == -972548316 || v8 == -93581017) {
          return GameRoutine_f49cb0(result, v5);
        }
      }
      else if (v8 == -77626398 || v8 == 1400556095 || v8 == 1715476756) {
        return GameRoutine_f49cb0(result, v5);
      }
      v12 = *(_DWORD*)(v7 - 28);
      v5 = 1;
      if (v12 <= -77626399) {
        v13 = v12 == -972548316;
        v14 = -93581017;
      }
      else {
        v13 = v12 == -77626398 || v12 == 1715476756;
        v14 = 1400556095;
      }
      if (v13 || v12 == v14) {
        return GameRoutine_f49cb0(result, v5);
      }
    }
  }
  return result;
}

__int64 ProcCmdBtlSeqBattle_e6a620(__int64 result)
{
  char v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  if ((*(_BYTE*)(GameData_21f4cc0 + 12) & 1) == 0) {
    if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) != 0) {
      goto LABEL_28;
    }
    if ((GameData_2216858 & 1) == 0) {
      GameRoutine_8123d0_alt1();
    }
    if ((GameData_2216820 & 8) == 0) {
    LABEL_28:
      v2 = GameData_2203490;
      v3 = *(_QWORD*)(GameData_2203490 + 760);
      if (v3 == 0) {
        return result;
      }
      v4 = *(_QWORD*)(GameData_2203490 + 752);
      v5 = result;
      v6 = *(_QWORD*)(GameData_2203490 + 760);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                                memory_order_relaxed);
      v7 = std___1___shared_weak_count_lock_alt1(v6);
      if (v7 == 0) {
        return std___1___shared_weak_count___release_weak_alt3(v3);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v8 = v7;
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak_alt3(v8);
      }
      result = std___1___shared_weak_count___release_weak_alt3(v3);
      if (v4 == 0) {
        return result;
      }
      result = v5;
      if (*(_DWORD*)(v2 + 696) == 0) {
        if (*(_DWORD*)(v2 + 684) != 0 && *(_QWORD*)GameData_212d240 != 0) {
        LABEL_3:
          result =
              GameRoutine_eacc20_alt1(result, 0xBu, 0xFFFFFFFF, 0xFFFFFFFF);
          if ((result & 1) != 0 && (*(_BYTE*)(GameData_22190c0 + 9) & 1) == 0 &&
              game_ProcFadeView_instance_ != 0) {
            v1 = *(_BYTE*)(game_ProcFadeView_instance_ + 480);
            *(_BYTE*)(game_ProcFadeView_instance_ + 480) = 2;
            result = game_ProcFadeView_instance_;
            if (game_ProcFadeView_instance_ != 0) {
              result = game_809ba0(game_ProcFadeView_instance_,
                                   0x1.1111120000000p-3f);
              if (game_ProcFadeView_instance_ != 0) {
                *(_BYTE*)(game_ProcFadeView_instance_ + 480) = v1;
              }
            }
          }
        }
        return result;
      }
    }
  }
  if (GameData_21d3f90 == 0) {
    return result;
  }
  goto LABEL_3;
}

__int64 ProcCmdBtlSeqBattle_e6a7b0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BYTE* v7;
  __int64 result;
  __int64 v9;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;

  v0 = GameData_2203490;
  v1 = *(_QWORD*)(GameData_2203490 + 640);
  v2 = *(_QWORD*)(GameData_2203490 + 648);
  if (v2 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak_alt1(v2);
    if (v1 != 0) {
      goto LABEL_10;
    }
  }
  else if (v1 != 0) {
    goto LABEL_10;
  }
  v3 = *(_QWORD*)(v0 + 656);
  v4 = *(_QWORD*)(v0 + 664);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak_alt1(v4);
    }
  }
  if (v3 == 0) {
    goto LABEL_20;
  }
LABEL_10:
  v10_.v10[0] = GameData_1fef008;
  v10_.v11 = v10_.v10;
  CmdbtlPartyNatives_e9a800((_QWORD*)GameData_2203490, (__int64)v10_.v10);
  if (v10_.v11 == v10_.v10) {
    v5 = 32;
    goto LABEL_14;
  }
  if (v10_.v11 != nullptr) {
    v5 = 40;
  LABEL_14:
    (*(void (**)(__int64))(*v10_.v11 + v5))((__int64)v10_.v11);
  }
  v10_.v10[0] = GameData_1fef088;
  v10_.v11 = v10_.v10;
  CmdbtlPartyNatives_e9a800((_QWORD*)GameData_2203490, (__int64)v10_.v10);
  if (v10_.v11 == v10_.v10) {
    v6 = 32;
  }
  else {
    if (v10_.v11 == nullptr) {
      goto LABEL_20;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v10_.v11 + v6))((__int64)v10_.v11);
LABEL_20:
  v7 = (_BYTE*)GameData_2219088;
  if (*(_BYTE*)(GameData_2219088 + 12) == 1) {
    *(_BYTE*)(GameData_2219088 + 12) = 0;
  }
  if (v7[20] == 1) {
    v7[20] = 0;
  }
  if (v7[28] == 1) {
    v7[28] = 0;
  }
  if (v7[36] == 1) {
    v7[36] = 0;
  }
  v10_.v10[0] = GameData_1fecfb8;
  v10_.v11 = v10_.v10;
  CmdbtlPartyNatives_e9a800((_QWORD*)GameData_2203490, (__int64)v10_.v10);
  result = (__int64)v10_.v11;
  if (v10_.v11 == v10_.v10) {
    v9 = 32;
  }
  else {
    if (v10_.v11 == nullptr) {
      return result;
    }
    v9 = 40;
  }
  return (*(__int64 (**)(__int64))(*v10_.v11 + v9))((__int64)v10_.v11);
}

void ProcCmdBtlSeqBattle_e6ad20(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  char* v5;
  const char* v6;
  const char* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  const char* v13;
  const char* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  const char* v20;
  const char* v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  const char* v27;
  const char* v28;
  unsigned __int64 v29;
  __int64 v30;
  struct {
    __int64 v31;
    __int64 v32;
    char* v33;
  } v31_;

  v1 = *(_QWORD*)(a1 + 160);
  if (v1 != 0) {
    v2 = *(_QWORD*)(v1 + 40);
    if (v2 != 0) {
      LOWORD(v31_.v31) = 128;
      if ((Unit_6cf1c0_alt1(v2) & 1) != 0) {
        v4 = fw_memory_g_heap_manager_ptr;
        v5 = (char*)fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
        v31_.v31 = 33;
        v31_.v32 = 25;
        v31_.v33 = v5;
        strcpy(v5, "RemoveCycle BattleComp - ");
        v6 = *(_BYTE*)(v2 + 2136) != 0 ? (const char*)game_97b2f0(v2 + 2104)
                                       : GameHr_67ed20(*(_QWORD**)(v2 + 392));
        v7 = v6;
        v8 = strlen_alt1(v6);
        GameRoutine_1a09ce0_alt1((__int64)&v31_.v31, v7, v8);
        if ((v31_.v31 & 1) != 0 && v31_.v33 != nullptr) {
          v9 = 128;
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
            v9 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v9,
                                             (__int64)v31_.v33);
        }
      }
    }
    v10 = *(_QWORD*)(*(_QWORD*)(a1 + 160) + 800LL);
    if (v10 != 0) {
      LOWORD(v31_.v31) = 128;
      if ((Unit_6cf1c0_alt1(v10) & 1) != 0) {
        v11 = fw_memory_g_heap_manager_ptr;
        v12 = (char*)fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
        v31_.v31 = 33;
        v31_.v32 = 25;
        v31_.v33 = v12;
        strcpy(v12, "RemoveCycle BattleComp - ");
        v13 = *(_BYTE*)(v10 + 2136) != 0
                  ? (const char*)game_97b2f0(v10 + 2104)
                  : GameHr_67ed20(*(_QWORD**)(v10 + 392));
        v14 = v13;
        v15 = strlen_alt1(v13);
        GameRoutine_1a09ce0_alt1((__int64)&v31_.v31, v14, v15);
        if ((v31_.v31 & 1) != 0 && v31_.v33 != nullptr) {
          v16 = 128;
          if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
            v16 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v11 + v16,
                                             (__int64)v31_.v33);
        }
      }
    }
    v17 = *(_QWORD*)(*(_QWORD*)(a1 + 160) + 1560LL);
    if (v17 != 0) {
      LOWORD(v31_.v31) = 128;
      if ((Unit_6cf1c0_alt1(v17) & 1) != 0) {
        v18 = fw_memory_g_heap_manager_ptr;
        v19 = (char*)fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
        v31_.v31 = 33;
        v31_.v32 = 25;
        v31_.v33 = v19;
        strcpy(v19, "RemoveCycle BattleComp - ");
        v20 = *(_BYTE*)(v17 + 2136) != 0
                  ? (const char*)game_97b2f0(v17 + 2104)
                  : GameHr_67ed20(*(_QWORD**)(v17 + 392));
        v21 = v20;
        v22 = strlen_alt1(v20);
        GameRoutine_1a09ce0_alt1((__int64)&v31_.v31, v21, v22);
        if ((v31_.v31 & 1) != 0 && v31_.v33 != nullptr) {
          v23 = 128;
          if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
            v23 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v18 + v23,
                                             (__int64)v31_.v33);
        }
      }
    }
    v24 = *(_QWORD*)(*(_QWORD*)(a1 + 160) + 2320LL);
    if (v24 != 0) {
      LOWORD(v31_.v31) = 128;
      if ((Unit_6cf1c0_alt1(v24) & 1) != 0) {
        v25 = fw_memory_g_heap_manager_ptr;
        v26 = (char*)fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
        v31_.v31 = 33;
        v31_.v32 = 25;
        v31_.v33 = v26;
        strcpy(v26, "RemoveCycle BattleComp - ");
        v27 = *(_BYTE*)(v24 + 2136) != 0
                  ? (const char*)game_97b2f0(v24 + 2104)
                  : GameHr_67ed20(*(_QWORD**)(v24 + 392));
        v28 = v27;
        v29 = strlen_alt1(v27);
        GameRoutine_1a09ce0_alt1((__int64)&v31_.v31, v28, v29);
        if ((v31_.v31 & 1) != 0 && v31_.v33 != nullptr) {
          v30 = 128;
          if (*(_QWORD*)(*(_QWORD*)v25 + 200LL) == 0) {
            v30 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v25 + v30,
                                             (__int64)v31_.v33);
        }
      }
    }
  }
}

__int64 ProcCmdBtlSeqBattle_e6b0b0(__int64 result)
{
  if (*(_QWORD*)(result + 160) != 0) {
    if ((GameData_2216858 & 1) == 0) {
      GameRoutine_8123d0(result);
    }
    if ((GameData_2216820 & 0x10) == 0 &&
        (*(_BYTE*)(GameData_21f4cc0 + 12) & 1) == 0 &&
        ((GameData_2216820 & 8) == 0 ||
         *(_BYTE*)(GameData_21f4cc0 + 13) != 0)) {
      return GameRoutine_fa4f80();
    }
  }
  return result;
}

__int64 ProcCmdBtlSeqBattle_e6b110(__int64 result)
{
  __int64 v1;
  __int64 v2[2];

  if (*(_QWORD*)(result + 160) != 0) {
    v1 = *(_QWORD*)(result + 168);
    v2[0] = *(_QWORD*)(result + 160);
    v2[1] = v1;
    if (v1 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 8), 1u,
                                memory_order_relaxed);
      result = GameRoutine_f32c80_alt1(result, v2);
      if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
        return std___1___shared_weak_count___release_weak_alt3(v1);
      }
    }
    else {
      return GameRoutine_f32c80_alt1(result, v2);
    }
  }
  return result;
}

__int64 ProcCmdBtlSeqBattle_e6b1a0(__int64 result)
{
  __int64 v1;
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

  v1 = GameData_2203490;
  v2 = *(_QWORD*)(GameData_2203490 + 640);
  v3 = *(_QWORD*)(GameData_2203490 + 648);
  if (v3 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v5 = result;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak_alt3(v3);
    result = v5;
    if (v2 != 0) {
      goto LABEL_11;
    }
  }
  else if (v2 != 0) {
    goto LABEL_11;
  }
  v2 = *(_QWORD*)(v1 + 656);
  v4 = *(_QWORD*)(v1 + 664);
  if (v4 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v6 = result;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak_alt3(v4);
    result = v6;
    if (v2 == 0) {
      return result;
    }
  }
  else if (v2 == 0) {
    return result;
  }
LABEL_11:
  if ((*(_WORD*)(v2 + 53) & 0x208) == 0) {
    v7 = GameData_2203490;
    v8 = *(_QWORD*)(GameData_2203490 + 640);
    v9 = *(_QWORD*)(GameData_2203490 + 648);
    if (v9 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8),
                                              1u, memory_order_relaxed),
                    atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0)) {
      v10 = result;
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak_alt3(v9);
      result = v10;
      if (v8 != 0) {
        return game_cmdbtl_CmdBtlSeqAction_UpdateBlazeBind_alt1(result);
      }
    }
    else if (v8 != 0) {
      return game_cmdbtl_CmdBtlSeqAction_UpdateBlazeBind_alt1(result);
    }
    v11 = *(_QWORD*)(v7 + 664);
    if (v11 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v12 = result;
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        std___1___shared_weak_count___release_weak_alt3(v11);
        return game_cmdbtl_CmdBtlSeqAction_UpdateBlazeBind_alt1(v12);
      }
    }
    return game_cmdbtl_CmdBtlSeqAction_UpdateBlazeBind_alt1(result);
  }
  return result;
}

void ProcCmdBtlSeqBattle_e6b340()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v0 = GameData_2203490;
  v1 = *(_QWORD*)(GameData_2203490 + 640);
  v2 = *(_QWORD*)(GameData_2203490 + 648);
  if (v2 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v3 = v1;
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak_alt1(v2);
    v1 = v3;
    if (v3 != 0) {
      goto LABEL_9;
    }
  }
  else if (v1 != 0) {
    goto LABEL_9;
  }
  v1 = *(_QWORD*)(v0 + 656);
  v4 = *(_QWORD*)(v0 + 664);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v5 = v1;
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak_alt1(v4);
      v1 = v5;
    }
  }
LABEL_9:
  GameRoutine_ed89e0(v1);
}

void ProcCmdBtlSeqBattle_e6b410() { *(_WORD*)(GameData_21ec7a8 + 11) = 0; }

__int64 ProcCmdBtlSeqBattle_e6b430(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v13;
  bool v14;
  int v15;
  __int64 v17;
  int v18;

  v1 = *(_QWORD*)(a1 + 160);
  if (v1 == 0) {
    goto LABEL_14;
  }
  if ((*(_BYTE*)(*(_QWORD*)(v1 + 24) + 11276LL) & 1) != 0 ||
      (*(_BYTE*)(v1 + 140) & 1) == 0) {
    if ((*(_BYTE*)(*(_QWORD*)(v1 + 784) + 11276LL) & 1) == 0 &&
        (*(_BYTE*)(v1 + 900) & 1) != 0) {
      v2 = 776;
      goto LABEL_8;
    }
  LABEL_14:
    v7 = *(_QWORD*)(a1 + 192);
    if (v7 == 0) {
      goto LABEL_48;
    }
    v8 = *(_QWORD*)(v7 + 200);
    if (v8 == *(_QWORD*)(v7 + 192)) {
      goto LABEL_48;
    }
    v9 = *(_DWORD*)(v8 - 32);
    v5 = 0;
    if (v9 <= -77626399) {
      if (v9 != -972548316 && v9 != -93581017) {
        goto LABEL_31;
      }
    }
    else if (v9 != -77626398 && v9 != 1400556095 && v9 != 1715476756) {
    LABEL_31:
      v13 = *(_DWORD*)(v8 - 28);
      v5 = 1;
      if (v13 <= -77626399) {
        v14 = v13 == -972548316;
        v15 = -93581017;
      }
      else {
        v14 = v13 == -77626398 || v13 == 1715476756;
        v15 = 1400556095;
      }
      if (!v14 && v13 != v15) {
        goto LABEL_48;
      }
    }
    v6 = v5;
    goto LABEL_45;
  }
  v2 = 16;
LABEL_8:
  v3 = *(_QWORD*)(v1 + v2 + 24);
  if (v3 == 0 || (v4 = *(_QWORD*)(v3 + 440)) == 0) {
    v5 = 9;
  LABEL_26:
    v6 = 3;
    goto LABEL_45;
  }
  v5 = *(unsigned __int8*)(v4 + 16);
  if (*(_BYTE*)(v4 + 16) == 0) {
    v6 = *(unsigned __int8*)(v4 + 16);
    goto LABEL_45;
  }
  if (v5 == 3) {
    v6 = 2;
    goto LABEL_45;
  }
  if (v5 != 1) {
    goto LABEL_26;
  }
  v6 = 1;
LABEL_45:
  v17 = GameData_2203490 + (v6 << 7);
  if ((CmdbtlPartyNatives_e73d00(v17 + 672) & 1) != 0 ||
      *(_DWORD*)(v17 + 708) == 1) {
  LABEL_48:
    v5 = 0;
    v18 = 0;
    return v5 | (v18 << 8);
  }
  v18 = 1;
  return v5 | (v18 << 8);
}

void game_cmdbtl_anonymous_ProcCmdBtlSeqBattle_CommitBtlInfo_closure_Invoke(
    __int64 a1, __int64 a2, __int64* a3)
{
  __int64 v3;
  __int64 v4;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v3 = *(_QWORD*)(a2 + 24);
  if (v3 != 0) {
    v4 = *a3;
    v6 = game_Unit_GetMaxPollution(*(_QWORD*)(a2 + 24));
    v7 = *(_DWORD*)(a2 + 108);
    v8 = v6;
    v9 = GameRoutine_7a2480(a2);
    if (v8 >= v7) {
      v10 = v7;
    }
    else {
      v10 = v8;
    }
    if (v7 < 0) {
      v10 = 0;
    }
    v11 = v10 + v9;
    if (v8 >= v11) {
      v12 = v11;
    }
    else {
      v12 = v8;
    }
    if (v11 >= 0) {
      v13 = v12;
    }
    else {
      v13 = 0;
    }
    v14 = v13 - *(unsigned __int8*)(v3 + 499);
    if (v14 != 0) {
      *(_DWORD*)(v4 + 416) |= 0x8000u;
      game_Unit_SetPollution(v4,
                             v14 + (unsigned int)*(unsigned __int8*)(v4 + 499));
    }
  }
}

void ProcCmdBtlSeqBattle_e6b8f0(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v7;
  __int64 v8;
  int v9;
  bool v10;
  int v11;
  int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  int v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  _QWORD v24[2];
  _QWORD v25[3];
  __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  _QWORD v35[95];
  _QWORD v36[95];
  _QWORD v37[1120];
  int v38;
  __int16 v39;
  _QWORD v40[2];
  struct {
    __int64* v41;
    __int64 v42;
  } v41_;

  v3 = *(_QWORD*)(a1 + 160);
  if (v3 == 0) {
    return;
  }
  v4 = *(_QWORD*)(v3 + 760LL * a2 + 40);
  if (v4 == 0) {
    return;
  }
  v7 = v3 + 760LL * a2;
  v8 = *(_QWORD*)(v7 + 72);
  GameRoutine_790080((__int64)v24);
  v24[0] = GameData_212f5c8[0] + 16;
  v9 = *(_DWORD*)(v7 + 56);
  if (HIBYTE(v39) != 0) {
    GameRoutine_7992e0((__int64)v25);
    GameRoutine_7992e0((__int64)v35);
    GameRoutine_7992e0((__int64)v36);
    GameRoutine_7992e0((__int64)v37);
    v38 = 0;
    v39 = 0;
    v40[0] = 0;
    *(_QWORD*)((char*)v40 + 6) = 0;
    BattleArea_8b9d00((__int64)&v41_.v41);
    v10 = HIBYTE(v39) == 0;
  }
  else {
    v10 = true;
  }
  v11 = *(char*)(v4 + 584);
  v12 = *(char*)(v4 + 585);
  v13 = *(_DWORD*)(v4 + 592);
  v26 = v4;
  v27 = v9;
  v31 = v12;
  v32 = v11;
  v33 = v12;
  v34 = v13;
  v30 = v11;
  if (!v10) {
    GameRoutine_7992e0((__int64)v25);
    GameRoutine_7992e0((__int64)v35);
    GameRoutine_7992e0((__int64)v36);
    GameRoutine_7992e0((__int64)v37);
    v38 = 0;
    v39 = 0;
    v40[0] = 0;
    *(_QWORD*)((char*)v40 + 6) = 0;
    BattleArea_8b9d00((__int64)&v41_.v41);
  }
  v29 = v8;
  if (v8 != 0) {
    v14 = *(_QWORD*)(v8 + 576);
    if (v14 != 0) {
      v28 = 0;
      v15 = *(unsigned __int16*)(v14 + 16);
      HIDWORD(v28) = 1;
      LOWORD(v28) = v15;
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                               8 * v15) +
                    73LL) == 17) {
        nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
        v16 = game_map_MapRandom_instance__ptr[0];
        v17 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL));
        v18 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
        v19 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
              (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
        *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
            *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
        *((_DWORD*)v16 + 1) = v17;
        v20 = (v19 >> 8) ^ (v18 >> 19) ^ v19 ^ v18;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v16) = v18;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v16 + 4) = v20;
        nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
        HIDWORD(v28) =
            HIDWORD(v28) & 0xFFFFC00F |
            (16 *
             (((16 * (v20 - 1000 * ((v20 & 0x7FFFFFFFu) / 0x3E8)) + 16) >> 4) &
              0x3FF));
      }
    }
  }
  LODWORD(v40[0]) |= 0x8000u;
  game_map_790ba0((__int64)v24);
  HIBYTE(v39) |= 1u;
  if (v26 != 0) {
    v21 = (unsigned __int16)ProcCmdBtlSeqBattle_e6b430(a1);
    if (v21 < 0x100) {
      goto LABEL_19;
    }
    if (v26 != 0) {
      v22 = *(_QWORD*)(v26 + 440);
      if (v22 != 0) {
        if (*(unsigned __int8*)(v22 + 16) == (unsigned __int8)v21) {
          goto LABEL_21;
        }
      LABEL_19:
        v23 = *(_QWORD*)(a3 + 32);
        if (v23 == 0) {
          GameRoutine_60a310();
        }
        (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v23 + 48LL))(v23, v25);
        goto LABEL_21;
      }
    }
    if ((unsigned __int8)v21 != 9) {
      goto LABEL_19;
    }
  }
LABEL_21:
  v24[0] = GameData_212d238[0] + 16;
  v41_.v41 = GameData_212da50[0] + 2;
  if (v41_.v42 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v41_.v42 + 8LL))(v41_.v42);
    v41_.v42 = 0;
  }
  v24[1] = GameData_212d258[0] + 2;
  BattleSide_Destructor_alt1(v37);
  BattleSide_Destructor_alt1(v36);
  BattleSide_Destructor_alt1(v35);
  BattleSide_Destructor_alt1(v25);
}

__int64

game_cmdbtl_anonymous_ProcCmdBtlSeqBattle_CompleteBegin_closure_Invoke_e6bcd0(
    __int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  _QWORD v6[4];
  _QWORD* v7;
  _QWORD v8[4];
  _QWORD* v9;
  int v10;

  v6[2] = a2;
  v10 = 0x2000;
  v2 = *(_QWORD*)(a1 + 8);
  v9 = v8;
  v6[0] = GameData_1fe7540;
  v6[1] = v2;
  v8[0] = GameData_1f98b78;
  v8[1] = a2;
  v7 = v6;
  v8[2] = v6;
  GameRoutine_7a2a60(a2, &v10, 0, v8);
  if (v9 == v8) {
    v3 = 32;
  }
  else {
    if (v9 == nullptr) {
      goto LABEL_6;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v9 + v3))((__int64)v9);
LABEL_6:
  result = (__int64)v7;
  if (v7 == v6) {
    v5 = 32;
  }
  else {
    if (v7 == nullptr) {
      return result;
    }
    v5 = 40;
  }
  return (*(__int64 (**)(__int64))(*v7 + v5))((__int64)v7);
}

__int64

game_cmdbtl_anonymous_ProcCmdBtlSeqBattle_CompleteBegin_closure_Invoke_e6be90(
    __int64 result, _DWORD* a2)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;

  v2 = *(_QWORD*)(result + 8);
  v3 = GameData_212c880[0];
  if ((*(unsigned __int16*)(v2 + 208) &
       ~*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                        8LL * (*a2 & 0xFFF)) +
                             248LL)) == 0) {
    v4 = result;
    result = CmdBtlSeqActionSkill_1041940(
        *(_QWORD*)(*(_QWORD*)(result + 16) + 24LL));
    if ((result & 1) != 0 &&
        ((*(_BYTE*)(GameData_21f4cc0 + 9) & 1) == 0 &&
             (*(_BYTE*)(GameData_21f4cc0 + 10) & 1) == 0 &&
             (*(_BYTE*)(GameData_21f4cc0 + 11) & 1) == 0 &&
             *(_BYTE*)(GameData_21f4cc0 + 8) != 1 ||
         (unsigned int)*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v3 + 64) +
                                                      8LL * (*a2 & 0xFFF)) +
                                           250LL) -
                 9 <=
             1)) {
      return game_cmdbtl_CmdBtlSeqActionSkill_SkillBind(
          v2, *(_QWORD*)(*(_QWORD*)(v4 + 16) + 24LL), a2);
    }
  }
  return result;
}

void ProcCmdBtlSeqBattle_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;

  v1 = *(_QWORD*)(a1 + 200);
  *(_QWORD*)a1 = game_cmdbtl_anonymous_ProcCmdBtlSeqBattle_vtable;
  *(_QWORD*)(a1 + 152) = GameData_1fe76a0;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak_alt3(v1);
  }
  v3 = *(_QWORD*)(a1 + 184);
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak_alt3(v3);
  }
  v4 = *(_QWORD*)(a1 + 168);
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak_alt3(v4);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
}

bool ProcCmdBtlSeqBattle_Unknown18(__int64 a1, __int64 a2)
{
  bool v2;
  __int64 v3;
  __int64 v4;
  bool v6;

  v3 = *(_QWORD*)(a1 + 160);
  v4 = *(_QWORD*)(a1 + 168);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v3 != 0) {
    v2 = BattleInfo_796d90_alt1(v3, a2);
    if (v4 == 0) {
    LABEL_8:
      if (v3 != 0) {
        return v2;
      }
      goto LABEL_9;
    }
  }
  else if (v4 == 0) {
    goto LABEL_8;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    goto LABEL_8;
  }
  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  std___1___shared_weak_count___release_weak_alt3(v4);
  if (v3 != 0) {
    return v2;
  }
LABEL_9:
  v6 = *(_QWORD*)(*GameData_212ea58 + 656) == 0 ||
       *(_QWORD*)GameData_212d240 == 0;
  return !v6 &&
         (GameRoutine_eacc20_alt1(a2, 0xAu, 0xFFFFFFFF, 0xFFFFFFFF) & 1) != 0;
}

__int64 ProcCmdBtlSeqBattle_Unknown19()
{
  if (game_cmdbtl_ProcCmdBtlSeqView_instance_ != 0) {
    return GameRoutine_80e800(&GameData_1a9f09e);
  }
  else {
    return GameRoutine_80e800("SE_SYS_Battle_In");
  }
}

__int64 ProcCmdBtlSeqBattle_Unknown20()
{
  __int64 result;

  result = game_sound_g_game_sound;
  if (game_sound_g_game_sound != 0) {
    return GameRoutine_a28e10(game_sound_g_game_sound, 0);
  }
  return result;
}

bool ProcCmdBtlSeqBattle_Destructor_e6c410(__int64 a1, __int64 a2)
{
  bool v2;
  __int64 v3;
  __int64 v4;
  bool v6;

  v3 = *(_QWORD*)(a1 + 8);
  v4 = *(_QWORD*)(a1 + 16);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v3 != 0) {
    v2 = BattleInfo_796d90_alt1(v3, a2);
    if (v4 == 0) {
    LABEL_8:
      if (v3 != 0) {
        return v2;
      }
      goto LABEL_9;
    }
  }
  else if (v4 == 0) {
    goto LABEL_8;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    goto LABEL_8;
  }
  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  std___1___shared_weak_count___release_weak_alt3(v4);
  if (v3 != 0) {
    return v2;
  }
LABEL_9:
  v6 = *(_QWORD*)(*GameData_212ea58 + 656) == 0 ||
       *(_QWORD*)GameData_212d240 == 0;
  return !v6 &&
         (GameRoutine_eacc20_alt1(a2, 0xAu, 0xFFFFFFFF, 0xFFFFFFFF) & 1) != 0;
}

__int64 ProcCmdBtlSeqBattle_Unknown5()
{
  if (game_cmdbtl_ProcCmdBtlSeqView_instance_ != 0) {
    return GameRoutine_80e800(&GameData_1a9f09e);
  }
  else {
    return GameRoutine_80e800("SE_SYS_Battle_In");
  }
}

__int64 ProcCmdBtlSeqBattle_Unknown6()
{
  __int64 result;

  result = game_sound_g_game_sound;
  if (game_sound_g_game_sound != 0) {
    return GameRoutine_a28e10(game_sound_g_game_sound, 0);
  }
  return result;
}

#pragma GCC visibility pop
