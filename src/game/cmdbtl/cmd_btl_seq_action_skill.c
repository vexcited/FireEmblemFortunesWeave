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
__int64 CmdBtlSeqActionSkill_1041ae0_alt1(
    __int64 a1, unsigned __int8 a2) __asm__("CmdBtlSeqActionSkill_1041ae0");
__int64
game_cmdbtl_CmdBtlSeqActionSkill_SkillEnumerateBind_lambda1_Invoke(__int64 a1,
                                                                   __int64* a2);
_QWORD*
CmdbtlPartyNatives_e9a800_alt1(_QWORD*,
                               __int64) __asm__("CmdbtlPartyNatives_e9a800");
__int64 BattleInfo_790460_alt1(__int64 result,
                               __int64) __asm__("BattleInfo_790460");
__int64
GameRoutine_1a09ce0_alt1(__int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a09ce0");
__int64
GameRoutine_1a0a680_alt1(__int64, unsigned __int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a0a680");
__int64 GameRoutine_790080_alt1(__int64) __asm__("GameRoutine_790080");
__int64 ProcList_9bd480_alt1(__int64) __asm__("ProcList_9bd480");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64
game_ProcList_Call_9bcfa0_alt1(__int64,
                               __int64) __asm__("game_ProcList_Call_9bcfa0");
__int64 game_UnitPool_GetFirst_alt1(int*) __asm__("game_UnitPool_GetFirst");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
char* GameHr_67ed20(_QWORD*);
char* HistoryLogInfo_6fb810_alt1(__int64) __asm__("HistoryLogInfo_6fb810");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void* game_97b2f0(__int64);
void BattleSide_Destructor_alt1(_QWORD*) __asm__("BattleSide_Destructor");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void game_map_790ba0(__int64);
void game_map_BattleSide_EachMaskSkill(__int64, _DWORD*, char, __int64);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void CmdBtlSeqActionSkill_1041ae0(__int64 a1, unsigned __int8 a2);

__int64 CmdBtlSeqActionSkill_1041940(__int64 result, _WORD* a2)
{
  __int64* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _DWORD* v11;
  int v12;
  int v13;
  __int64 v14;
  unsigned int v15;
  struct {
    __int64 v16;
    __int64 v17;
  } v16_;
  struct {
    _QWORD v18[4];
    _QWORD* v19;
  } v18_;
  __int64 v22;

  if (result == 0) {
    return result;
  }
  if ((*a2 & 0xFFF) == 0) {
    return 0;
  }
  v5 = GameData_212ea58;
  v22 = result;
  v18_.v18[0] = GameData_1fec818;
  v18_.v18[1] = &v22;
  v16_.v16 = 0;
  v16_.v17 = 0;
  v18_.v19 = v18_.v18;
  v6 = (_QWORD*)*GameData_212ea58;
  v18_.v18[2] = &v16_.v16;
  CmdbtlPartyNatives_e9a800_alt1(v6, (__int64)v18_.v18);
  if (v18_.v19 == v18_.v18) {
    v7 = 32;
  }
  else {
    if (v18_.v19 == nullptr) {
      goto LABEL_9;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v18_.v19 + v7))((__int64)v18_.v19);
LABEL_9:
  if (v16_.v16 == 0) {
    result = 0;
    v14 = v16_.v17;
    if (v16_.v17 == 0) {
      return result;
    }
    goto LABEL_22;
  }
  v8 = *(_QWORD*)(*(_QWORD*)(v16_.v16 + 16) + 440LL);
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
    v14 = v16_.v17;
    if (v16_.v17 == 0) {
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
  v14 = v16_.v17;
  if (v16_.v17 != 0) {
  LABEL_22:
    if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v15 = result;
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      std___1___shared_weak_count___release_weak_alt1(v14);
      return v15;
    }
  }
  return result;
}

void CmdBtlSeqActionSkill_1041ae0(__int64 a1, unsigned __int8 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  unsigned __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  const char* v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  char* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 (**v29)();
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int8 v33;
  struct {
    _QWORD v34[4];
    _QWORD* v35;
  } v34_;
  int v36;
  struct {
    __int64 (**v37)();
    __int64 (**v38)();
  } v37_;
  struct {
    __int64 v39[2];
    __int64 (***v40)();
  } v39_;
  __int64 v41[95];
  __int64 v42[95];
  struct {
    __int64 v43[1122];
    char gap11352_[1];
    char v44;
    char gap11354_[2];
    int v45;
    char gap11360_[16];
    __int64 (**v46)();
    __int64 v47;
  } v43_;
  struct {
    __int64 v48;
    __int64 v49;
    __int64 v50;
  } v48_;
  struct {
    _QWORD v51[4];
    _QWORD* v52;
  } v51_;

  v48_.v49 = 0;
  v48_.v50 = 0;
  v48_.v48 = 0;
  LODWORD(v37_.v37) = 3;
  v4 = game_UnitPool_GetFirst_alt1((int*)&v37_.v37);
  if (v4 == 0) {
    goto LABEL_58;
  }
  v5 = *(_QWORD*)(v4 + 432);
  v6 = v4;
  if (v5 == 0) {
    v5 = *(_QWORD*)(v4 + 440);
    if (v5 != 0) {
      v7 = *(unsigned __int8*)(v5 + 16);
      if (v7 <= 8) {
        while (1) {
          if (v7 == 0) {
            v5 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556024LL);
            if (v5 != 0) {
              break;
            }
          }
          if (++v7 == 9) {
            goto LABEL_5;
          }
        }
      }
      else {
      LABEL_5:
        v5 = 0;
      }
    }
  }
  v8 = (unsigned __int64)&v37_.v37;
  v33 = a2;
  v9 = 1 << a2;
  v10 = GameData_212f5c8[0] + 16;
  v11 = GameData_212d238[0] + 16;
  while (1) {
  LABEL_8:
    v12 = v5;
    GameRoutine_790080_alt1((__int64)&v37_.v37);
    v37_.v37 = (__int64 (**)(void))v10;
    BattleInfo_790460_alt1((__int64)&v37_.v37, v6);
    v43_.v45 |= 0x10089u;
    game_map_790ba0((__int64)&v37_.v37);
    v36 = v9;
    v34_.v35 = v34_.v34;
    v51_.v51[2] = v34_.v34;
    v43_.v44 |= 1u;
    v34_.v34[0] = GameData_2003a38;
    v34_.v34[1] = v6;
    v34_.v34[2] = &v48_.v48;
    v51_.v52 = v51_.v51;
    v51_.v51[0] = GameData_1f98b78;
    v51_.v51[1] = v39_.v39;
    game_map_BattleSide_EachMaskSkill((__int64)v39_.v39, &v36, 0,
                                      (__int64)v51_.v51);
    if (v51_.v52 == v51_.v51) {
      v13 = 32;
    }
    else {
      if (v51_.v52 == nullptr) {
        goto LABEL_13;
      }
      v13 = 40;
    }
    (*(void (**)(_QWORD*))(*v51_.v52 + v13))(v51_.v52);
  LABEL_13:
    if (v34_.v35 == v34_.v34) {
      v14 = 32;
    }
    else {
      if (v34_.v35 == nullptr) {
        goto LABEL_18;
      }
      v14 = 40;
    }
    (*(void (**)(_QWORD*))(*v34_.v35 + v14))(v34_.v35);
  LABEL_18:
    v37_.v37 = (__int64 (**)(void))v11;
    v43_.v46 = game_map_BattleArea_vtable;
    if (v43_.v47 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v43_.v47 + 8LL))(v43_.v47);
      v43_.v47 = 0;
    }
    v37_.v38 = game_map_BattleSides_vtable;
    BattleSide_Destructor_alt1(v43_.v43);
    BattleSide_Destructor_alt1(v42);
    BattleSide_Destructor_alt1(v41);
    BattleSide_Destructor_alt1(v39_.v39);
    if (v12 == 0) {
      break;
    }
    v5 = *(_QWORD*)(v12 + 432);
    v6 = v12;
    if (v5 == 0) {
      v15 = *(_QWORD*)(v12 + 440);
      v6 = v12;
      if (v15 != 0) {
        v16 = *(unsigned __int8*)(v15 + 16);
        v5 = 0;
        v6 = v12;
        if (v16 <= 8) {
          while (1) {
            if (v16 == 0) {
              v5 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556024LL);
              if (v5 != 0) {
                break;
              }
            }
            if (++v16 == 9) {
              v5 = 0;
              v6 = v12;
              goto LABEL_8;
            }
          }
          v6 = v12;
        }
      }
    }
  }
  v17 = v48_.v48;
  if (v48_.v49 != v48_.v48) {
    v18 = ProcList_9bd480_alt1(a1);
    if (v18 != 0) {
      v19 = v18;
      v20 = (&GameData_2003700)[2 * v33];
      v21 = strlen_alt1(v20);
      if (v21 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0_alt1();
      }
      v22 = v21;
      if (v21 >= 0x17) {
        if ((v21 | 7) == 0x17) {
          v24 = 26;
        }
        else {
          v24 = (v21 | 7) + 1;
        }
        v23 = (char*)fw_memory_HeapManager_Allocate_alt1(
            fw_memory_g_heap_manager, v24, 16, 0);
        v39_.v39[0] = (__int64)v23;
        v37_.v37 = (__int64 (**)(void))(v24 | 1);
      }
      else {
        LOBYTE(v37_.v37) = 2 * v21;
        v23 = (char*)&v37_.v37 + 1;
        if (v21 == 0) {
          goto LABEL_40;
        }
      }
      memmove_alt1((__int64)v23, (__int64)v20, v22);
    LABEL_40:
      v23[v22] = 0;
      if (((unsigned __int8)v37_.v37 & 1) != 0 && v39_.v39[0] != 0) {
        v25 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v25 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v39_.v39[0]);
      }
      v26 = v48_.v48;
      v27 = v48_.v49;
      if (v48_.v48 != v48_.v49) {
        while (2) {
          v29 = *(__int64 (***)(void))v26;
          v30 = *(unsigned int*)(v26 + 8);
          v39_.v40 = &v37_.v37;
          v8 = v8 & 0xFFFFFFFF00000000LL | v30;
          v37_.v37 = GameData_2003ab8;
          v37_.v38 = v29;
          v39_.v39[0] = v8;
          game_ProcList_Call_9bcfa0_alt1(v19, (__int64)&v37_.v37);
          if (v39_.v40 != &v37_.v37) {
            if (v39_.v40 != nullptr) {
              v28 = 5;
            LABEL_48:
              ((__int64 (*)(__int64))(*v39_.v40)[v28])((__int64)v39_.v40);
            }
            v26 += 16;
            if (v26 == v27) {
              goto LABEL_53;
            }
            continue;
          }
          break;
        }
        v28 = 4;
        goto LABEL_48;
      }
    LABEL_53:
      v37_.v37 = GameData_2003b38;
      v39_.v40 = &v37_.v37;
      game_ProcList_Call_9bcfa0_alt1(v19, (__int64)&v37_.v37);
      if (v39_.v40 == &v37_.v37) {
        v31 = 4;
      LABEL_57:
        ((__int64 (*)(__int64))(*v39_.v40)[v31])((__int64)v39_.v40);
      }
      else if (v39_.v40 != nullptr) {
        v31 = 5;
        goto LABEL_57;
      }
    }
  LABEL_58:
    v17 = v48_.v48;
  }
  if (v17 != 0) {
    v48_.v49 = v17;
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v17);
  }
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
  const char* v5;
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
  __int64 v17;
  unsigned __int64 v18;
  const char* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  struct {
    _QWORD v25[2];
    char* v26;
  } v25_;
  struct {
    __int64 v27;
    unsigned __int64 v28;
    const char* v29;
  } v27_;
  struct {
    _QWORD v30[2];
    char* v31;
  } v30_;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  if (*(_BYTE*)(v2 + 2136) != 0) {
    v5 = (const char*)game_97b2f0(v2 + 2104);
  }
  else {
    v5 = GameHr_67ed20(*(_QWORD**)(v2 + 392));
  }
  v6 = (__int64)v5;
  v7 = strlen_alt1(v5);
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
    v9 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    v10, 16, 0);
    v30_.v30[1] = v8;
    v30_.v31 = v9;
    v30_.v30[0] = v10 | 1;
    goto LABEL_12;
  }
  LOBYTE(v30_.v30[0]) = 2 * v7;
  v9 = (char*)v30_.v30 + 1;
  if (v7 != 0) {
  LABEL_12:
    memmove_alt1((__int64)v9, v6, v8);
  }
  v9[v8] = 0;
  if ((*(_DWORD*)(a1 + 16) & 0xFFF) != 0) {
    v11 = HistoryLogInfo_6fb810_alt1(
        *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                   8LL * (*(_DWORD*)(a1 + 16) & 0xFFF)));
  }
  else {
    v11 = &GameData_1a9f09e;
  }
  v12 = strlen_alt1(v11);
  if (v12 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_47:
    String_60a1d0_alt1();
  }
  v13 = v12;
  if (v12 >= 0x17) {
    if ((v12 | 7) == 0x17) {
      v15 = 26;
    }
    else {
      v15 = (v12 | 7) + 1;
    }
    v14 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v15, 16, 0);
    v25_.v25[1] = v13;
    v25_.v26 = v14;
    v25_.v25[0] = v15 | 1;
    goto LABEL_24;
  }
  LOBYTE(v25_.v25[0]) = 2 * v12;
  v14 = (char*)v25_.v25 + 1;
  if (v12 != 0) {
  LABEL_24:
    memmove_alt1((__int64)v14, (__int64)v11, v13);
  }
  v14[v13] = 0;
  v16 = (__int64*)GameRoutine_1a0a680_alt1((__int64)v25_.v25, 0, ":", 1u);
  v18 = v16[1];
  v17 = v16[2];
  v27_.v27 = *v16;
  v27_.v28 = v18;
  v27_.v29 = (const char*)v17;
  v16[1] = 0;
  v16[2] = 0;
  *v16 = 0;
  if ((v27_.v27 & 1) != 0) {
    v19 = v27_.v29;
  }
  else {
    v19 = (char*)&v27_.v27 + 1;
  }
  if ((v27_.v27 & 1) != 0) {
    v20 = v27_.v28;
  }
  else {
    v20 = (unsigned __int64)(unsigned __int8)v27_.v27 >> 1;
  }
  GameRoutine_1a09ce0_alt1((__int64)v30_.v30, v19, v20);
  if ((v27_.v27 & 1) != 0 && v27_.v29 != nullptr) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, (__int64)v27_.v29);
  }
  if ((v25_.v25[0] & 1) != 0 && v25_.v26 != nullptr) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, (__int64)v25_.v26);
  }
  if ((v30_.v30[0] & 1) != 0 && v30_.v31 != nullptr) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, (__int64)v30_.v31);
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
