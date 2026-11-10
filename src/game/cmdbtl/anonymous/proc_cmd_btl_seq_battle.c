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
__int64 ProcCmdBtlSeqBattle_Destructor(__int64 a1);
__int64 ProcCmdBtlSeqBattle_Unknown18(__int64 a1, __int64 a2);
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
__int64 ProcCmdBtlSeqBattle_e6ad20(__int64 result);
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
__int64 ProcCmdBtlSeqBattle_Destructor_e6c410(__int64 a1, __int64 a2);
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
__n128 game_cmdbtl_anonymous_ProcCmdBtlSeqBattle_CommitBtlInfo(__int64 a1,
                                                               __n128 result);
__int64 ProcCmdBtlSeqBattle_e6a4e0(__int64 result);
__int64 ProcCmdBtlSeqBattle_e6a7b0();
void ProcCmdBtlSeqBattle_e6b340();
__n128 ProcCmdBtlSeqBattle_e6b8f0(__int64 result, unsigned __int8 a2,
                                  __int64 a3);

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

__n128 game_cmdbtl_anonymous_ProcCmdBtlSeqBattle_CommitBtlInfo(__int64 a1,
                                                               __n128 result)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  _BYTE* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _DWORD* v23;
  __int64 v24;
  _DWORD* v26;
  __int64 v28;
  int v29;
  char v30;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  char v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __n128 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64* v55;
  __int64* v56;
  __int64 v57;
  __int64* v58;
  __int64* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64* v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  char* v75;
  char* v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  char* v81;
  char* v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  struct {
    _QWORD v90[4];
    _QWORD* v91;
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
  struct {
    __int64 v102;
    __int64 v103;
  } v102_;

  v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = *(_QWORD*)(a1 + 160);
  v3 = *(_QWORD*)(a1 + 168);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v2 == 0) {
    goto LABEL_157;
  }
  BattleInfo_796b00(v2),
      v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v5 = GameData_2203490;
  v6 = *(_QWORD*)(GameData_2203490 + 640);
  v7 = *(_QWORD*)(GameData_2203490 + 648);
  if (v7 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
    result = std___1___shared_weak_count___release_weak_alt1(v7),
    v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v6 != 0) {
      goto LABEL_14;
    }
  }
  else if (v6 != 0) {
    goto LABEL_14;
  }
  v6 = *(_QWORD*)(v5 + 656);
  v8 = *(_QWORD*)(v5 + 664);
  if (v8 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
    result = std___1___shared_weak_count___release_weak_alt1(v8),
    v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v6 == 0) {
      goto LABEL_38;
    }
  }
  else if (v6 == 0) {
    goto LABEL_38;
  }
LABEL_14:
  if ((*(_WORD*)(v6 + 53) & 0x208) != 0) {
    goto LABEL_38;
  }
  v10 = *(_QWORD**)(a1 + 160);
  v9 = *(_QWORD*)(a1 + 168);
  v90_.v90[0] = GameData_1fe7440;
  v90_.v91 = v90_.v90;
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v10 == nullptr) {
    goto LABEL_30;
  }
  if (v10[5] != 0) {
    v102_.v102 = v10[5];
    if (v90_.v91 == nullptr) {
      goto LABEL_177;
    }
    (*(void (**)(_QWORD*, _QWORD*, __int64*))(*v90_.v91 + 48LL))(
        v90_.v91, v10 + 2, &v102_.v102),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if (v10[100] != 0) {
    v102_.v102 = v10[100];
    if (v90_.v91 == nullptr) {
      goto LABEL_177;
    }
    (*(void (**)(_QWORD*, _QWORD*, __int64*))(*v90_.v91 + 48LL))(
        v90_.v91, v10 + 97, &v102_.v102),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if (v10[195] != 0) {
    v102_.v102 = v10[195];
    if (v90_.v91 == nullptr) {
      goto LABEL_177;
    }
    (*(void (**)(_QWORD*, _QWORD*, __int64*))(*v90_.v91 + 48LL))(
        v90_.v91, v10 + 192, &v102_.v102),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if (v10[290] != 0) {
    v102_.v102 = v10[290];
    if (v90_.v91 == nullptr) {
    LABEL_177:
      GameRoutine_60a310(),
          v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    (*(void (**)(_QWORD*, _QWORD*, __int64*))(*v90_.v91 + 48LL))(
        v90_.v91, v10 + 287, &v102_.v102),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
LABEL_30:
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
    result = std___1___shared_weak_count___release_weak_alt1(v9),
    v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if (v90_.v91 == v90_.v90) {
    v11 = 32;
    goto LABEL_37;
  }
  if (v90_.v91 != nullptr) {
    v11 = 40;
  LABEL_37:
    (*(void (**)(long double))(*v90_.v91 + v11))(*(long double*)&result),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
LABEL_38:
  v12 = *(unsigned int*)(v2 + 11256);
  if ((_DWORD)v12 == 0) {
    goto LABEL_152;
  }
  v88 = v2 + 3064;
  v89 = v3;
  v13 = (_BYTE*)(v2 + 3068);
  do {
    if (*(v13 - 2) != 4 &&
        *(_QWORD*)(v2 + 40 + 760LL * (unsigned __int8)*(v13 - 2)) != 0 &&
        *v13 == 19) {
      v14 = GameData_2203490;
      v15 = *(_QWORD*)(GameData_2203490 + 640);
      v16 = *(_QWORD*)(GameData_2203490 + 648);
      if (v16 == 0 ||
          (atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                                     memory_order_relaxed),
           atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                            0xFFFFFFFFFFFFFFFFLL) != 0)) {
        if (v15 == 0) {
        LABEL_49:
          v15 = *(_QWORD*)(v14 + 656);
          v17 = *(_QWORD*)(v14 + 664);
          if (v17 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                                      memory_order_relaxed);
            if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17),
                  v50 = COERCE_AS(__typeof__(v50),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
              result = std___1___shared_weak_count___release_weak_alt1(v17),
              v50 = COERCE_AS(__typeof__(v50),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
          }
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16),
            v50 =
                COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
        result = std___1___shared_weak_count___release_weak_alt1(v16),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (v15 == 0) {
          goto LABEL_49;
        }
      }
      *(_DWORD*)(v15 + 56) |= 2u;
    }
    --v12;
    v13 += 64;
  } while (v12 != 0);
  v18 = *(_DWORD*)(v2 + 11256);
  v3 = v89;
  v19 = (unsigned int)(v18 - 1);
  if (v18 < 1) {
    goto LABEL_152;
  }
  v20 = GameData_2203490;
  v21 = *(_QWORD*)(GameData_2203490 + 640);
  v22 = *(_QWORD*)(GameData_2203490 + 648);
  if (v22 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8),
                                             1u, memory_order_relaxed),
                   atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
    std___1___shared_weak_count___release_weak_alt1(v22),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v21 == 0) {
      goto LABEL_121;
    }
  }
  else {
    if (v21 != 0) {
      goto LABEL_56;
    }
  LABEL_121:
    v21 = *(_QWORD*)(v20 + 656);
    v64 = *(_QWORD*)(v20 + 664);
    if (v64 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v64 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v64 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v64 + 16LL))(v64),
            v50 =
                COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v64),
            v50 =
                COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
  }
LABEL_56:
  v23 = (_DWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21),
  v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v24 = (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 24LL))(v21),
  v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v26 = (_DWORD*)v24;
  if (v23 != nullptr && v24 != 0) {
    v28 = v88 + (v19 << 6);
    v29 = *(__int16*)(v28 + 16);
    v30 = CmdbtlPartyNatives_e73d00_alt1((__int64)v23),
    v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v32 = v23[5] + v23[4];
    v33 = v23[3];
    if (v32 <= 1) {
      v32 = 1;
    }
    v34 = v30 & 1 | (v23[9] == 1);
    if (v32 >= v29) {
      v35 = v29;
    }
    else {
      v35 = v32;
    }
    if (v34 <= v29) {
      v34 = v35;
    }
    if (v32 >= (unsigned int)v34) {
      v32 = v34;
    }
    if (v34 >= 0) {
      v36 = v32;
    }
    else {
      v36 = 0;
    }
    v23[3] = v36;
    if (v36 != v33) {
      result = CmdBtlParty_e734e0((__int64)v23),
      v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    if (v23 != v26) {
      v37 = *(__int16*)(v28 + 28);
      v38 = CmdbtlPartyNatives_e73d00_alt1((__int64)v26),
      v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v39 = v26[5] + v26[4];
      v40 = v26[3];
      if (v39 <= 1) {
        v39 = 1;
      }
      v41 = v38 & 1 | (v26[9] == 1);
      if (v39 >= v37) {
        v42 = v37;
      }
      else {
        v42 = v39;
      }
      if (v41 <= v37) {
        v41 = v42;
      }
      if (v39 >= (unsigned int)v41) {
        v39 = v41;
      }
      if (v41 >= 0) {
        v43 = v39;
      }
      else {
        v43 = 0;
      }
      v26[3] = v43;
      if (v43 != v40) {
        result = CmdBtlParty_e734e0((__int64)v26),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
  }
  v44 = GameData_2203490;
  v45 = *(_QWORD*)(GameData_2203490 + 640);
  v46 = *(_QWORD*)(GameData_2203490 + 648);
  if (v46 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v46 + 8),
                                             1u, memory_order_relaxed),
                   atomic_fetch_add((atomic_ullong* volatile)(v46 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v46 + 16LL))(
        v46, *(long double*)&result),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
    result = std___1___shared_weak_count___release_weak_alt1(v46),
    v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v45 != 0) {
      goto LABEL_92;
    }
  }
  else if (v45 != 0) {
    goto LABEL_92;
  }
  v45 = *(_QWORD*)(v44 + 656);
  v65 = *(_QWORD*)(v44 + 664);
  if (v65 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v65 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v65 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v65 + 16LL))(
          v65, *(long double*)&result),
          v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
      result = std___1___shared_weak_count___release_weak_alt1(v65),
      v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
LABEL_92:
  v47 = *(_DWORD*)(v45 + 52);
  if (v23 != nullptr && v23[2] == 0) {
    v66 = GameData_2219080;
    v67 = *(_QWORD*)(v21 + 40);
    if (v67 == 0 || *(_QWORD*)(v67 + 8) == -1) {
      v68 = (*(__int64 (**)(__int64, long double))(*(_QWORD*)v21 + 32LL))(
          v21, *(long double*)&result),
      v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v67 = *(_QWORD*)(v68 + 88);
      v102_.v102 = *(_QWORD*)(v68 + 80);
      v102_.v103 = v67;
      if (v67 == 0) {
        goto LABEL_133;
      }
    }
    else {
      v102_.v102 = *(_QWORD*)(v21 + 32);
      v102_.v103 = v67;
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v67 + 16), 1u,
                              memory_order_relaxed);
  LABEL_133:
    if ((*(_DWORD*)(v21 + 48) & 0x80000000) != 0) {
      v100_.v100 = 0;
      v100_.v101 = 0;
    }
    else {
      v69 = (__int64*)(*(_QWORD*)((*(__int64 (**)(__int64))(*(_QWORD*)v21 +
                                                            32LL))(v21) +
                                  40) +
                       16LL * *(int*)(v21 + 48)),
      v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v70 = *v69;
      v71 = v69[1];
      if (v71 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v71 + 8), 1u,
                                  memory_order_relaxed);
        v100_.v100 = v70;
        v100_.v101 = v71;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v71 + 16), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v71 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v71 + 16LL))(v71),
              v50 = COERCE_AS(__typeof__(v50),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          result = std___1___shared_weak_count___release_weak_alt1(v71),
          v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      }
      else {
        v100_.v100 = *v69;
        v100_.v101 = 0;
      }
    }
    result = GameRoutine_10042c0(v66, &v102_.v102, &v100_.v100, result),
    v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v100_.v101 != 0) {
      result = std___1___shared_weak_count___release_weak_alt1(v100_.v101),
      v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    if (v102_.v103 != 0) {
      result = std___1___shared_weak_count___release_weak_alt1(v102_.v103),
      v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    if ((v47 & 0x2000) != 0) {
      goto LABEL_152;
    }
    v72 = GameData_22190a8;
    v73 = *(_QWORD*)(v21 + 40);
    if (v73 == 0 || *(_QWORD*)(v73 + 8) == -1) {
      v74 = (*(__int64 (**)(__int64, long double))(*(_QWORD*)v21 + 32LL))(
          v21, *(long double*)&result),
      v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v73 = *(_QWORD*)(v74 + 88);
      v98_.v98 = *(_QWORD*)(v74 + 80);
      v98_.v99 = v73;
      if (v73 == 0) {
        goto LABEL_149;
      }
    }
    else {
      v98_.v98 = *(_QWORD*)(v21 + 32);
      v98_.v99 = v73;
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v73 + 16), 1u,
                              memory_order_relaxed);
  LABEL_149:
    v75 = *(char**)(v72 + 32);
    v76 = *(char**)(v72 + 40);
    if ((unsigned __int64)(v76 - v75) < 0x11) {
    LABEL_150:
      GameRoutine_f83540((__int64*)(v72 + 32), &v98_.v98),
          v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v57 = v98_.v99;
      if (v98_.v99 != 0) {
        goto LABEL_151;
      }
      goto LABEL_152;
    }
    while (1) {
      v81 = v75 + 16;
      if (v75 + 16 != v76) {
        break;
      }
      v82 = v76;
      v76 = v75;
      if (v75 != v82) {
        goto LABEL_171;
      }
    LABEL_161:
      v75 = *(char**)(v72 + 32);
      *(_QWORD*)(v72 + 40) = v76;
      if ((unsigned __int64)(v76 - v75) <= 0x10) {
        goto LABEL_150;
      }
    }
    do {
      v84 = *(_QWORD*)v81;
      v83 = *((_QWORD*)v81 + 1);
      v85 = *((_QWORD*)v81 - 1);
      *(_QWORD*)v81 = 0;
      *((_QWORD*)v81 + 1) = 0;
      *((_QWORD*)v81 - 2) = v84;
      *((_QWORD*)v81 - 1) = v83;
      if (v85 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v85),
            v50 =
                COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v81 += 16;
    } while (v81 != v76);
    v82 = *(char**)(v72 + 40);
    v76 = v81 - 16;
    if (v81 - 16 == v82) {
      goto LABEL_161;
    }
    do {
    LABEL_171:
      v86 = *((_QWORD*)v82 - 1);
      if (v86 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v86),
            v50 =
                COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v82 -= 16;
    } while (v82 != v76);
    goto LABEL_161;
  }
  if (v26 == nullptr || v26[2] != 0) {
    goto LABEL_152;
  }
  v48 = *(_QWORD*)GameData_212f530[0];
  v49 = (*(__int64 (**)(__int64, long double))(*(_QWORD*)v21 + 40LL))(
      v21, *(long double*)&result),
  v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v51 = *(_QWORD*)(v49 + 88);
  v96_.v96 = *(_QWORD*)(v49 + 80);
  v96_.v97 = v51;
  if (v51 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v51 + 16), 1u,
                              memory_order_relaxed);
  }
  v94_.v94 = 0;
  v94_.v95 = 0;
  result = GameRoutine_10042c0(v48, &v96_.v96, &v94_.v94, v50),
  v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v94_.v95 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v94_.v95),
    v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if (v96_.v97 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v96_.v97),
    v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v47 & 0x2000) != 0) {
    goto LABEL_152;
  }
  v52 = *GameData_212f4e0[0];
  v53 = (*(__int64 (**)(__int64, long double))(*(_QWORD*)v21 + 40LL))(
      v21, *(long double*)&result),
  v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v54 = *(_QWORD*)(v53 + 88);
  v92_.v92 = *(_QWORD*)(v53 + 80);
  v92_.v93 = v54;
  if (v54 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v54 + 16), 1u,
                              memory_order_relaxed);
  }
  v55 = *(__int64**)(v52 + 32);
  v56 = *(__int64**)(v52 + 40);
  if ((unsigned __int64)((char*)v56 - (char*)v55) >= 0x11) {
    while (1) {
      v58 = v55 + 2;
      if (v55 + 2 != v56) {
        break;
      }
      v59 = v56;
      v56 = v55;
      if (v55 != v59) {
        goto LABEL_118;
      }
    LABEL_108:
      v55 = *(__int64**)(v52 + 32);
      *(_QWORD*)(v52 + 40) = v56;
      if ((unsigned __int64)((char*)v56 - (char*)v55) <= 0x10) {
        goto LABEL_106;
      }
    }
    do {
      v61 = *v58;
      v60 = v58[1];
      v62 = *(v58 - 1);
      *v58 = 0;
      v58[1] = 0;
      *(v58 - 2) = v61;
      *(v58 - 1) = v60;
      if (v62 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v62),
            v50 =
                COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v58 += 2;
    } while (v58 != v56);
    v59 = *(__int64**)(v52 + 40);
    v56 = v58 - 2;
    if (v58 - 2 == v59) {
      goto LABEL_108;
    }
    do {
    LABEL_118:
      v63 = *(v59 - 1);
      if (v63 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v63),
            v50 =
                COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v59 -= 2;
    } while (v59 != v56);
    goto LABEL_108;
  }
LABEL_106:
  GameRoutine_f83540((__int64*)(v52 + 32), &v92_.v92),
      v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v57 = v92_.v93;
  if (v92_.v93 != 0) {
  LABEL_151:
    result = std___1___shared_weak_count___release_weak_alt1(v57),
    v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
LABEL_152:
  v77 = GameData_2203490;
  v78 = *(_QWORD*)(GameData_2203490 + 640);
  v79 = *(_QWORD*)(GameData_2203490 + 648);
  if (v79 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v79 + 8),
                                             1u, memory_order_relaxed),
                   atomic_fetch_add((atomic_ullong* volatile)(v79 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v79 + 16LL))(
        v79, *(long double*)&result),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
    result = std___1___shared_weak_count___release_weak_alt1(v79),
    v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v78 != 0) {
      goto LABEL_155;
    }
  }
  else if (v78 != 0) {
    goto LABEL_155;
  }
  v78 = *(_QWORD*)(v77 + 656);
  v87 = *(_QWORD*)(v77 + 664);
  if (v87 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v87 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v87 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v87 + 16LL))(
          v87, *(long double*)&result),
          v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
      result = std___1___shared_weak_count___release_weak_alt1(v87),
      v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
LABEL_155:
  if ((unsigned int)*(unsigned __int8*)(v78 + 8) - 7 < 3) {
    v80 = GameData_21f4cc0 +
          4LL * GameData_1b90fb8[(unsigned __int8)(*(_BYTE*)(v78 + 8) - 7)];
    ++*(_DWORD*)(v80 + 16);
  }
LABEL_157:
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v0", "=w"));
    return std___1___shared_weak_count___release_weak_alt1(v3);
  }
  return result;
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

__int64 ProcCmdBtlSeqBattle_e6ad20(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char* v33;

  v1 = *(_QWORD*)(result + 160);
  if (v1 != 0) {
    v2 = *(_QWORD*)(v1 + 40);
    v3 = result;
    if (v2 != 0) {
      LOWORD(v31) = 128;
      result = Unit_6cf1c0(v2, &v31);
      if ((result & 1) != 0) {
        v4 = fw_memory_g_heap_manager_ptr;
        v5 = (char*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
        v31 = 33;
        v32 = 25;
        v33 = v5;
        strcpy(v5, "RemoveCycle BattleComp - ");
        v6 = *(_BYTE*)(v2 + 2136) != 0
                 ? GameRoutine_97b2f0(v2 + 2104)
                 : GameRoutine_67ed20(*(_QWORD*)(v2 + 392));
        v7 = v6;
        v8 = strlen(v6);
        result = GameRoutine_1a09ce0(&v31, v7, v8);
        if ((v31 & 1) != 0 && v33 != nullptr) {
          v9 = 128;
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
            v9 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v9);
        }
      }
    }
    v10 = *(_QWORD*)(*(_QWORD*)(v3 + 160) + 800LL);
    if (v10 != 0) {
      LOWORD(v31) = 128;
      result = Unit_6cf1c0(v10, &v31);
      if ((result & 1) != 0) {
        v11 = fw_memory_g_heap_manager_ptr;
        v12 = (char*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
        v31 = 33;
        v32 = 25;
        v33 = v12;
        strcpy(v12, "RemoveCycle BattleComp - ");
        v13 = *(_BYTE*)(v10 + 2136) != 0
                  ? GameRoutine_97b2f0(v10 + 2104)
                  : GameRoutine_67ed20(*(_QWORD*)(v10 + 392));
        v14 = v13;
        v15 = strlen(v13);
        result = GameRoutine_1a09ce0(&v31, v14, v15);
        if ((v31 & 1) != 0 && v33 != nullptr) {
          v16 = 128;
          if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
            v16 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v16);
        }
      }
    }
    v17 = *(_QWORD*)(*(_QWORD*)(v3 + 160) + 1560LL);
    if (v17 != 0) {
      LOWORD(v31) = 128;
      result = Unit_6cf1c0(v17, &v31);
      if ((result & 1) != 0) {
        v18 = fw_memory_g_heap_manager_ptr;
        v19 = (char*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
        v31 = 33;
        v32 = 25;
        v33 = v19;
        strcpy(v19, "RemoveCycle BattleComp - ");
        v20 = *(_BYTE*)(v17 + 2136) != 0
                  ? GameRoutine_97b2f0(v17 + 2104)
                  : GameRoutine_67ed20(*(_QWORD*)(v17 + 392));
        v21 = v20;
        v22 = strlen(v20);
        result = GameRoutine_1a09ce0(&v31, v21, v22);
        if ((v31 & 1) != 0 && v33 != nullptr) {
          v23 = 128;
          if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
            v23 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v18 + v23);
        }
      }
    }
    v24 = *(_QWORD*)(*(_QWORD*)(v3 + 160) + 2320LL);
    if (v24 != 0) {
      LOWORD(v31) = 128;
      result = Unit_6cf1c0(v24, &v31);
      if ((result & 1) != 0) {
        v25 = fw_memory_g_heap_manager_ptr;
        v26 = (char*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
        v31 = 33;
        v32 = 25;
        v33 = v26;
        strcpy(v26, "RemoveCycle BattleComp - ");
        v27 = *(_BYTE*)(v24 + 2136) != 0
                  ? GameRoutine_97b2f0(v24 + 2104)
                  : GameRoutine_67ed20(*(_QWORD*)(v24 + 392));
        v28 = v27;
        v29 = strlen(v27);
        result = GameRoutine_1a09ce0(&v31, v28, v29);
        if ((v31 & 1) != 0 && v33 != nullptr) {
          v30 = 128;
          if (*(_QWORD*)(*(_QWORD*)v25 + 200LL) == 0) {
            v30 = 56;
          }
          return nn_mem_StandardAllocator_Free(*(_QWORD*)v25 + v30);
        }
      }
    }
  }
  return result;
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
  _QWORD v2[2];

  if (*(_QWORD*)(result + 160) != 0) {
    v1 = *(_QWORD*)(result + 168);
    v2[0] = *(_QWORD*)(result + 160);
    v2[1] = v1;
    if (v1 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 8), 1u,
                                memory_order_relaxed);
      result = GameRoutine_f32c80(result, v2);
      if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
        return std___1___shared_weak_count___release_weak();
      }
    }
    else {
      return GameRoutine_f32c80(result, v2);
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

  v1 = GameData_2203490;
  v2 = *(_QWORD*)(GameData_2203490 + 640);
  v3 = *(_QWORD*)(GameData_2203490 + 648);
  if (v3 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v5 = result;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak();
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
    std___1___shared_weak_count___release_weak();
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
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak();
      if (v8 != 0) {
        return game_cmdbtl_CmdBtlSeqAction_UpdateBlazeBind();
      }
    }
    else if (v8 != 0) {
      return game_cmdbtl_CmdBtlSeqAction_UpdateBlazeBind();
    }
    v10 = *(_QWORD*)(v7 + 664);
    if (v10 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak();
      }
    }
    return game_cmdbtl_CmdBtlSeqAction_UpdateBlazeBind();
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

__n128 ProcCmdBtlSeqBattle_e6b8f0(__int64 result, unsigned __int8 a2,
                                  __int64 a3)
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
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  __n128 v25;
  _QWORD v26[2];
  _QWORD v27[3];
  __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  _QWORD v37[95];
  _QWORD v38[95];
  _QWORD v39[1120];
  int v40;
  __int16 v41;
  _QWORD v42[2];
  struct {
    __int64* v43;
    __int64 v44;
  } v43_;

  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = *(_QWORD*)(result + 160);
  if (v3 == 0) {
    return v25;
  }
  v4 = *(_QWORD*)(v3 + 760LL * a2 + 40);
  if (v4 == 0) {
    return v25;
  }
  v7 = v3 + 760LL * a2;
  v8 = *(_QWORD*)(v7 + 72);
  GameRoutine_790080((__int64)v26),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v26[0] = GameData_212f5c8[0] + 16;
  v9 = *(_DWORD*)(v7 + 56);
  if (HIBYTE(v41) != 0) {
    GameRoutine_7992e0((__int64)v27),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
    GameRoutine_7992e0((__int64)v37),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
    GameRoutine_7992e0((__int64)v38),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
    GameRoutine_7992e0((__int64)v39),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v40 = 0;
    v41 = 0;
    v42[0] = 0;
    *(_QWORD*)((char*)v42 + 6) = 0;
    BattleArea_8b9d00((__int64)&v43_.v43),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v10 = HIBYTE(v41) == 0;
  }
  else {
    v10 = true;
  }
  v11 = *(char*)(v4 + 584);
  v12 = *(char*)(v4 + 585);
  v13 = *(_DWORD*)(v4 + 592);
  v28 = v4;
  v29 = v9;
  v33 = v12;
  v34 = v11;
  v35 = v12;
  v36 = v13;
  v32 = v11;
  if (!v10) {
    GameRoutine_7992e0((__int64)v27),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
    GameRoutine_7992e0((__int64)v37),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
    GameRoutine_7992e0((__int64)v38),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
    GameRoutine_7992e0((__int64)v39),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v40 = 0;
    v41 = 0;
    v42[0] = 0;
    *(_QWORD*)((char*)v42 + 6) = 0;
    BattleArea_8b9d00((__int64)&v43_.v43),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v31 = v8;
  if (v8 != 0) {
    v14 = *(_QWORD*)(v8 + 576);
    if (v14 != 0) {
      v30 = 0;
      v15 = *(unsigned __int16*)(v14 + 16);
      HIDWORD(v30) = 1;
      LOWORD(v30) = v15;
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                               8 * v15) +
                    73LL) == 17) {
        nn_os_LockMutex(&game_g_random_mutex),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
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
        nn_os_UnlockMutex(&game_g_random_mutex),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
        HIDWORD(v30) =
            HIDWORD(v30) & 0xFFFFC00F |
            (16 *
             (((16 * (v20 - 1000 * ((v20 & 0x7FFFFFFFu) / 0x3E8)) + 16) >> 4) &
              0x3FF));
      }
    }
  }
  LODWORD(v42[0]) |= 0x8000u;
  game_map_790ba0((__int64)v26),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
  HIBYTE(v41) |= 1u;
  if (v28 != 0) {
    v22 = (unsigned __int16)ProcCmdBtlSeqBattle_e6b430(result),
    v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v22 < 0x100) {
      goto LABEL_19;
    }
    if (v28 != 0) {
      v23 = *(_QWORD*)(v28 + 440);
      if (v23 != 0) {
        if (*(unsigned __int8*)(v23 + 16) == (unsigned __int8)v22) {
          goto LABEL_21;
        }
      LABEL_19:
        v24 = *(_QWORD*)(a3 + 32);
        if (v24 == 0) {
          GameRoutine_60a310(),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v24 + 48LL))(v24, v27),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
        goto LABEL_21;
      }
    }
    if ((unsigned __int8)v22 != 9) {
      goto LABEL_19;
    }
  }
LABEL_21:
  v26[0] = GameData_212d238[0] + 16;
  v43_.v43 = GameData_212da50[0] + 2;
  if (v43_.v44 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v43_.v44 + 8LL))(v43_.v44),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v43_.v44 = 0;
  }
  v26[1] = GameData_212d258[0] + 2;
  BattleSide_Destructor(v39),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
  BattleSide_Destructor(v38),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
  BattleSide_Destructor(v37),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v0", "=w"));
  return BattleSide_Destructor(v27);
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

__int64 ProcCmdBtlSeqBattle_Destructor(__int64 a1)
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
    std___1___shared_weak_count___release_weak();
  }
  v3 = *(_QWORD*)(a1 + 184);
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak();
  }
  v4 = *(_QWORD*)(a1 + 168);
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak();
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcCmdBtlSeqBattle_Unknown18(__int64 a1, __int64 a2)
{
  char v2;
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
    v2 = BattleInfo_796d90(v3, a2);
    if (v4 == 0) {
    LABEL_8:
      if (v3 != 0) {
        return v2 & 1;
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
  std___1___shared_weak_count___release_weak();
  if (v3 != 0) {
    return v2 & 1;
  }

LABEL_9:
  v6 = *(_QWORD*)(*GameData_212ea58 + 656) == 0 ||
       *(_QWORD*)GameData_212d240 == 0;
  v2 = !v6 && (GameRoutine_eacc20(a2, 10, 0xFFFFFFFFLL, 0xFFFFFFFFLL) & 1) != 0;
  return v2 & 1;
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

__int64 ProcCmdBtlSeqBattle_Destructor_e6c410(__int64 a1, __int64 a2)
{
  char v2;
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
    v2 = BattleInfo_796d90(v3, a2);
    if (v4 == 0) {
    LABEL_8:
      if (v3 != 0) {
        return v2 & 1;
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
  std___1___shared_weak_count___release_weak();
  if (v3 != 0) {
    return v2 & 1;
  }
LABEL_9:
  v6 = *(_QWORD*)(*GameData_212ea58 + 656) == 0 ||
       *(_QWORD*)GameData_212d240 == 0;
  v2 = !v6 && (GameRoutine_eacc20(a2, 10, 0xFFFFFFFFLL, 0xFFFFFFFFLL) & 1) != 0;
  return v2 & 1;
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
