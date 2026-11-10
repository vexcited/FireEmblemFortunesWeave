#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CmdBtlParty_e73380(_QWORD);
__int64 CmdbtlPartyNatives_e9a800(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _QWORD GameData_1b01768[4];
extern __int64 (*GameData_1fec818[])();
extern __int64 game_ProcGameSkipView_instance_;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212ea58;
extern char GameData_2234878;
__int64 CmdBtlSeqActionSkill_1041940(__int64 result, _WORD* a2);
__int64 game_cmdbtl_CmdBtlSeqActionSkill_SkillBind_lambda1_Invoke(__int64 a1,
                                                                  __int64* a2);
void game_cmdbtl_CmdBtlSeqActionSkill_SkillEnumerateBind_lambda2_Invoke(
    __int64 a1, __int64* a2);
__int64 BattleInfo_790460(_QWORD, _QWORD);
__int64 BattleSide_Destructor(_QWORD);
__int64 GameRoutine_10420c0(__int64 result, __int64, _DWORD*);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0a680(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_67ed20(_QWORD);
__int64 GameRoutine_790080(_QWORD);
__int64 GameRoutine_790ba0(_QWORD);
__int64 GameRoutine_7a2a60(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_97b2f0(_QWORD);
__int64 HistoryLogInfo_6fb810(_QWORD);
__int64 ProcList_9bd480(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcList_Call_9bcfa0(_QWORD, _QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
__int64 strlen(_QWORD);
extern __int64 (*GameData_1f98b78[])();
extern __int64 (*GameData_2003a38[])();
extern __int64 (*GameData_2003ab8[])();
extern __int64 (*GameData_2003b38[])();
extern __int64 (*game_map_BattleArea_vtable[])();
extern __int64 (*game_map_BattleSides_vtable[])();
extern __int64 GameData_212d238[2];
extern __int64 GameData_212f5c8[2];
extern __int64 GameData_21c99b0;
extern __int64 GameData_21ca310;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
extern char* GameData_2003700;
void __attribute__((noreturn)) String_60a1d0(void);
__int64 CmdBtlSeqActionSkill_1041ae0(__int64 a1, unsigned __int8 a2);
__int64
game_cmdbtl_CmdBtlSeqActionSkill_SkillEnumerateBind_lambda1_Invoke(__int64 a1,
                                                                   __int64* a2);

__int64 CmdBtlSeqActionSkill_1041940(__int64 result, _WORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _DWORD* v11;
  int v12;
  int v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  _QWORD v18[4];
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  if (result == 0) {
    return result;
  }
  if ((*a2 & 0xFFF) == 0) {
    return 0;
  }
  v20 = v2;
  v21 = v3;
  v5 = GameData_212ea58;
  v22 = result;
  v18[0] = GameData_1fec818;
  v18[1] = &v22;
  v16 = 0;
  v17 = 0;
  v19 = v18;
  v6 = *GameData_212ea58;
  v18[2] = &v16;
  CmdbtlPartyNatives_e9a800(v6, v18);
  if (v19 == v18) {
    v7 = 32;
  }
  else {
    if (v19 == nullptr) {
      goto LABEL_9;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v19 + v7))((__int64)v19);
LABEL_9:
  if (v16 == 0) {
    result = 0;
    v14 = v17;
    if (v17 == 0) {
      return result;
    }
    goto LABEL_22;
  }
  v8 = *(_QWORD*)(*(_QWORD*)(v16 + 16) + 440LL);
  if (v8 != 0 && (unsigned __int64)(v9 = *(unsigned __int8*)(v8 + 16)) <= 3) {
    v10 = GameData_1b01768[v9];
  }
  else {
    v10 = 3;
  }
  if ((unsigned int)*(
          unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                       8LL * (*(_DWORD*)a2 & 0xFFF)) +
                            250LL) -
          9 >
      1) {
    result = 1;
    v14 = v17;
    if (v17 == 0) {
      return result;
    }
    goto LABEL_22;
  }
  v11 = (_DWORD*)(*v5 + (v10 << 7));
  v12 = v11[171];
  v13 = v11[173] + v11[172];
  if (v13 <= 1) {
    v13 = 1;
  }
  result = v12 < v13;
  v14 = v17;
  if (v17 != 0) {
  LABEL_22:
    if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v15 = result;
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      std___1___shared_weak_count___release_weak(v14);
      return v15;
    }
  }
  return result;
}

__int64 CmdBtlSeqActionSkill_1041ae0(__int64 a1, unsigned __int8 a2)
{
  __int64 result;
  long double v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  unsigned __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  unsigned __int64 v21;
  long double v22;
  unsigned __int64 v23;
  char* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 (**v30)();
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int8 v34;
  _QWORD v35[4];
  _QWORD* v36;
  int v37;
  __int64 (**v38)();
  __int64 (**v39)();
  _QWORD v40[2];
  __int64 (***v41)();
  __int64 v42;
  __int64 v43;
  __int64 v44;
  char v45;
  int v46;
  __int64 (**v47)();
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  _QWORD v52[4];
  _QWORD* v53;

  v50 = 0;
  v51 = 0;
  v49 = 0;
  LODWORD(v38) = 3;
  result = game_UnitPool_GetFirst(&v38);
  if (result == 0) {
    goto LABEL_58;
  }
  v6 = *(_QWORD*)(result + 432);
  v7 = result;
  if (v6 == 0) {
    v6 = *(_QWORD*)(result + 440);
    if (v6 != 0) {
      v8 = *(unsigned __int8*)(v6 + 16);
      if (v8 <= 8) {
        while (1) {
          if (v8 == 0) {
            v6 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556024LL);
            if (v6 != 0) {
              break;
            }
          }
          if (++v8 == 9) {
            goto LABEL_5;
          }
        }
      }
      else {
      LABEL_5:
        v6 = 0;
      }
    }
  }
  v9 = (unsigned __int64)&v38;
  v34 = a2;
  v10 = 1 << a2;
  v11 = GameData_212f5c8[0] + 16;
  v12 = GameData_212d238[0] + 16;
  while (1) {
  LABEL_8:
    v13 = v6;
    GameRoutine_790080(&v38);
    v38 = (__int64 (**)())v11;
    BattleInfo_790460(&v38, v7);
    v46 |= 0x10089u;
    GameRoutine_790ba0(&v38);
    v37 = v10;
    v36 = v35;
    v52[2] = v35;
    v45 |= 1u;
    v35[0] = GameData_2003a38;
    v35[1] = v7;
    v35[2] = &v49;
    v53 = v52;
    v52[0] = GameData_1f98b78;
    v52[1] = v40;
    GameRoutine_7a2a60(v40, &v37, 0, v52);
    if (v53 == v52) {
      v14 = 32;
    }
    else {
      if (v53 == nullptr) {
        goto LABEL_13;
      }
      v14 = 40;
    }
    (*(void (**)(_QWORD*))(*v53 + v14))(v53);
  LABEL_13:
    if (v36 == v35) {
      v15 = 32;
    }
    else {
      if (v36 == nullptr) {
        goto LABEL_18;
      }
      v15 = 40;
    }
    (*(void (**)(_QWORD*))(*v36 + v15))(v36);
  LABEL_18:
    v38 = (__int64 (**)())v12;
    v47 = game_map_BattleArea_vtable;
    if (v48 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v48 + 8LL))(v48);
      v48 = 0;
    }
    v39 = game_map_BattleSides_vtable;
    BattleSide_Destructor(&v44);
    BattleSide_Destructor(&v43);
    BattleSide_Destructor(&v42);
    result = BattleSide_Destructor(v40);
    if (v13 == 0) {
      break;
    }
    v6 = *(_QWORD*)(v13 + 432);
    v7 = v13;
    if (v6 == 0) {
      v16 = *(_QWORD*)(v13 + 440);
      v7 = v13;
      if (v16 != 0) {
        v17 = *(unsigned __int8*)(v16 + 16);
        v6 = 0;
        v7 = v13;
        if (v17 <= 8) {
          while (1) {
            if (v17 == 0) {
              v6 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556024LL);
              if (v6 != 0) {
                break;
              }
            }
            if (++v17 == 9) {
              v6 = 0;
              v7 = v13;
              goto LABEL_8;
            }
          }
          v7 = v13;
        }
      }
    }
  }
  v18 = v49;
  if (v50 != v49) {
    result = ProcList_9bd480(a1);
    if (result != 0) {
      v19 = result;
      v20 = (&GameData_2003700)[2 * v34];
      v21 = strlen(v20);
      if (v21 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0();
      }
      v23 = v21;
      if (v21 >= 0x17) {
        if ((v21 | 7) == 0x17) {
          v25 = 26;
        }
        else {
          v25 = (v21 | 7) + 1;
        }
        v24 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                    v25, 16, 0);
        v40[0] = v24;
        v38 = (__int64 (**)())(v25 | 1);
      }
      else {
        LOBYTE(v38) = 2 * v21;
        v24 = (char*)&v38 + 1;
        if (v21 == 0) {
          goto LABEL_40;
        }
      }
      memmove(v24, v20, v23);
    LABEL_40:
      v24[v23] = 0;
      if (((unsigned __int8)v38 & 1) != 0 && v40[0] != 0) {
        v26 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v26 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v22);
      }
      v27 = v49;
      v28 = v50;
      if (v49 != v50) {
        while (2) {
          v30 = *(__int64 (***)())v27;
          v31 = *(unsigned int*)(v27 + 8);
          v41 = &v38;
          v9 = v9 & 0xFFFFFFFF00000000LL | v31;
          v38 = GameData_2003ab8;
          v39 = v30;
          v40[0] = v9;
          game_ProcList_Call_9bcfa0(v19, &v38);
          if (v41 != &v38) {
            if (v41 != nullptr) {
              v29 = 5;
            LABEL_48:
              (*v41)[v29]();
            }
            v27 += 16;
            if (v27 == v28) {
              goto LABEL_53;
            }
            continue;
          }
          break;
        }
        v29 = 4;
        goto LABEL_48;
      }
    LABEL_53:
      v38 = GameData_2003b38;
      v41 = &v38;
      game_ProcList_Call_9bcfa0(v19, &v38);
      result = (__int64)v41;
      if (v41 == &v38) {
        v32 = 4;
      LABEL_57:
        result = (*v41)[v32]();
      }
      else if (v41 != nullptr) {
        v32 = 5;
        goto LABEL_57;
      }
    }
  LABEL_58:
    v18 = v49;
  }
  if (v18 != 0) {
    v50 = v18;
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v33 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v5);
  }
  return result;
}

__int64 game_cmdbtl_CmdBtlSeqActionSkill_SkillBind_lambda1_Invoke(__int64 a1,
                                                                  __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;
  float v14;
  __int64 v15;
  __int64 v16;
  _QWORD v17[4];
  _QWORD* v18;
  __int64 v19;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v4 = GameData_212ea58;
  v15 = 0;
  v16 = 0;
  v18 = v17;
  v19 = v2;
  v5 = *GameData_212ea58;
  v17[0] = GameData_1fec818;
  v17[1] = &v19;
  v17[2] = &v15;
  CmdbtlPartyNatives_e9a800(v5, v17);
  result = (__int64)v18;
  if (v18 == v17) {
    v7 = 32;
  }
  else {
    if (v18 == nullptr) {
      goto LABEL_6;
    }
    v7 = 40;
  }
  result = (*(__int64 (**)(__int64))(*v18 + v7))((__int64)v18);
LABEL_6:
  if (v15 != 0) {
    v8 = *(_QWORD*)(*(_QWORD*)(v15 + 16) + 440LL);
    if (v8 != 0 && (unsigned __int64)(v9 = *(unsigned __int8*)(v8 + 16)) <= 3) {
      v10 = GameData_1b01768[v9];
    }
    else {
      v10 = 3;
    }
    result = CmdBtlParty_e73380(*v4 + (v10 << 7) + 672);
  }
  v11 = v16;
  if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    result = std___1___shared_weak_count___release_weak(v11);
  }
  if (GameData_2234878 == 1) {
    if (game_ProcGameSkipView_instance_ == 0 ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
        (((v12 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v13 = 2)
             : (v13 = 3),
         (v13 & v12) != 0)) {
      v14 = *(float*)(v3 + 144);
      if (v14 < 18.0f) {
        v14 = 18.0f;
      }
      *(_WORD*)(v3 + 136) = *(_WORD*)(v3 + 136) & 0xFF97 | 0x20;
      *(float*)(v3 + 144) = v14;
    }
    GameData_2234878 = 0;
  }
  return result;
}

__int64

game_cmdbtl_CmdBtlSeqActionSkill_SkillEnumerateBind_lambda1_Invoke(__int64 a1,
                                                                   __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  char* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  char* v14;
  __int64 v15;
  __int64* v16;
  char* v17;
  unsigned __int64 v18;
  char* v19;
  unsigned __int64 v20;
  long double v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD v26[2];
  char* v27;
  __int64 v28;
  unsigned __int64 v29;
  char* v30;
  _QWORD v31[2];
  char* v32;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  if (*(_BYTE*)(v2 + 2136) != 0) {
    v5 = GameRoutine_97b2f0(v2 + 2104);
  }
  else {
    v5 = GameRoutine_67ed20(*(_QWORD*)(v2 + 392));
  }
  v6 = v5;
  v7 = strlen(v5);
  if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_47;
  }
  v8 = v7;
  if (v7 >= 0x17) {
    if ((v7 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (v7 | 7) + 1;
    }
    v9 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v10,
                                               16, 0);
    v31[1] = v8;
    v32 = v9;
    v31[0] = v10 | 1;
    goto LABEL_12;
  }
  LOBYTE(v31[0]) = 2 * v7;
  v9 = (char*)v31 + 1;
  if (v7 != 0) {
  LABEL_12:
    memmove(v9, v6, v8);
  }
  v9[v8] = 0;
  if ((*(_DWORD*)(a1 + 16) & 0xFFF) != 0) {
    v11 = (char*)HistoryLogInfo_6fb810(
        *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                   8LL * (*(_DWORD*)(a1 + 16) & 0xFFF)));
  }
  else {
    v11 = &GameData_1a9f09e;
  }
  v12 = strlen(v11);
  if (v12 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_47:
    String_60a1d0();
  }
  v13 = v12;
  if (v12 >= 0x17) {
    if ((v12 | 7) == 0x17) {
      v15 = 26;
    }
    else {
      v15 = (v12 | 7) + 1;
    }
    v14 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v15,
                                                16, 0);
    v26[1] = v13;
    v27 = v14;
    v26[0] = v15 | 1;
    goto LABEL_24;
  }
  LOBYTE(v26[0]) = 2 * v12;
  v14 = (char*)v26 + 1;
  if (v12 != 0) {
  LABEL_24:
    memmove(v14, v11, v13);
  }
  v14[v13] = 0;
  v16 = (__int64*)GameRoutine_1a0a680(v26, 0, ":", 1);
  v18 = v16[1];
  v17 = (char*)v16[2];
  v28 = *v16;
  v29 = v18;
  v30 = v17;
  v16[1] = 0;
  v16[2] = 0;
  *v16 = 0;
  if ((v28 & 1) != 0) {
    v19 = v30;
  }
  else {
    v19 = (char*)&v28 + 1;
  }
  if ((v28 & 1) != 0) {
    v20 = v29;
  }
  else {
    v20 = (unsigned __int64)(unsigned __int8)v28 >> 1;
  }
  GameRoutine_1a09ce0(v31, v19, v20);
  if ((v28 & 1) != 0 && v30 != nullptr) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v22,
                                  v21);
  }
  if ((v26[0] & 1) != 0 && v27 != nullptr) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v23,
                                  v21);
  }
  if ((v31[0] & 1) != 0 && v32 != nullptr) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v24,
                                  v21);
  }
  return GameRoutine_10420c0(v3, *(_QWORD*)(a1 + 8), (_DWORD*)(a1 + 16));
}

void game_cmdbtl_CmdBtlSeqActionSkill_SkillEnumerateBind_lambda2_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  int v3;
  int v4;
  float v5;

  if (GameData_2234878 == 1) {
    v2 = *a2;
    if (game_ProcGameSkipView_instance_ == 0 ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
        (((v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v4 = 2)
             : (v4 = 3),
         (v4 & v3) != 0)) {
      v5 = *(float*)(v2 + 144);
      if (v5 < 18.0) {
        v5 = 18.0;
      }
      *(_WORD*)(v2 + 136) = *(_WORD*)(v2 + 136) & 0xFF97 | 0x20;
      *(float*)(v2 + 144) = v5;
    }
    GameData_2234878 = 0;
  }
}

#pragma GCC visibility pop
