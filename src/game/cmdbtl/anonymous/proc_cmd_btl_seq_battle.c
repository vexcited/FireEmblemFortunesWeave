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
void ProcCmdBtlSeqBattle_e6b410() { *(_WORD*)(GameData_21ec7a8 + 11) = 0; };
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
