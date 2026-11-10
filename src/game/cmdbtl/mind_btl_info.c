#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _QWORD GameData_1b95a48[3];
extern __int64 GameData_2203490;
__int64 MindBtlInfo_Unknown2(__int64 a1);
__int64 MindBtlInfo_Unknown4(__int64 a1);
__int64 MindBtlInfo_Unknown3(__int64 a1);
__int64 MindBtlInfo_Unknown5(__int64 a1);
_QWORD* GameRoutine_e9af40(_QWORD* __return_ptr, _QWORD);
__int64 CmdbtlPartyNatives_e9a800(_QWORD, _QWORD);
__int64 GameRoutine_6c51e0(_QWORD);
__int64 GameRoutine_6c6da0(_QWORD);
__int64 GameRoutine_6c6ec0(_QWORD);
__int64 GameRoutine_84edc0(_QWORD, _QWORD);
__int64 UnitSkillList_84cc00(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_cmdbtl_MindBase_Destroy_MindBase(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _DWORD GameData_1a82ec0[4];
extern __int64 (*GameData_1fef388[])();
extern __int64 (*GameData_1fef408[])();
extern __int64 (*game_cmdbtl_MindBtlInfo_vtable[])();
extern __int64 GameData_21c99b0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212ea58;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_edd9e0(void);
__int64 MindBtlInfo_Destructor(_QWORD* a1);
__int64 MindBtlInfo_edb660(__int64 a1);
__int64 MindBtlInfo_edc200(__int64* a1, _DWORD* a2);
__int64 game_cmdbtl_MindBtlInfo_ClearSupportSkill_lambda0_Invoke(__int64 a1,
                                                                 __int64* a2);
__int64 game_cmdbtl_MindBtlInfo_ClearSupportSkill_lambda1_Invoke(__int64 a1,
                                                                 __int64* a2);
_QWORD*
CmdbtlPartyNatives_e9a800_alt1(_QWORD*,
                               __int64) __asm__("CmdbtlPartyNatives_e9a800");
__attribute__((swiftcall)) void CmdBtlUnit_e7e340(PSEUDO_X8, __int64 result,
                                                  int);
__attribute__((swiftcall)) void Manager_e9af40(PSEUDO_X8, _QWORD*);
__attribute__((swiftcall)) void game_cmdbtl_ed9ba0(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD, long double);
__int64 BattleInfo_7902e0(__int64, unsigned __int8, __int64, int);
__int64 GameRoutine_6c6da0_alt1(__int64) __asm__("GameRoutine_6c6da0");
__int64 GameRoutine_7992e0(__int64);
__int64 GameRoutine_7a39e0(__int64 result, __int64*, __int64*,
                           unsigned __int64);
__int64 game_6c51e0(__int64 result);
__int64 game_6c6ec0(__int64);
__int64 game_UnitItemList_Find_70f780(unsigned __int16*, __int64);
__int64 game_map_799aa0(__int64 result, __int64);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 BattleArea_8b9d00(__int64);
__n128 MindBtlInfo_edc200_alt1(__int64*,
                               unsigned int*) __asm__("MindBtlInfo_edc200");
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64 (*GameData_1fef238[])();
extern __int64 (*GameData_1fef308[])();
extern __int64* GameData_212c878[6];
extern __int64 fw_memory_g_heap_manager;
extern unsigned int GameData_1b95a60[3];
void GameRoutine_d28880(__int64**, __int64*);
void __attribute__((noreturn)) GameRoutine_60a310();
void game_map_790ba0(__int64);
void MindBtlInfo_edb740(__int64 a1);
void game_cmdbtl_MindBtlInfo_CalcCmdBtlInfo(__int64 a1, __int64 a2, int a3);
__n128 game_cmdbtl_MindBtlInfo_CalcCmdBtlInfo_lambda0_Invoke(__int64 a1,
                                                             __int64* a2);

__int64 MindBtlInfo_Destructor(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD v8[4];
  _QWORD* v9;
  _QWORD v10[4];
  _QWORD* v11;

  *a1 = game_cmdbtl_MindBtlInfo_vtable;
  v2 = GameData_212ea58;
  v10[0] = GameData_1fef388;
  v11 = v10;
  CmdbtlPartyNatives_e9a800(*GameData_212ea58, v10);
  if (v11 == v10) {
    v3 = 32;
  }
  else {
    if (v11 == nullptr) {
      goto LABEL_6;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v11 + v3))((__int64)v11);
LABEL_6:
  v4 = *v2;
  v8[0] = GameData_1fef408;
  v9 = v8;
  CmdbtlPartyNatives_e9a800(v4, v8);
  if (v9 == v8) {
    v5 = 32;
    goto LABEL_10;
  }
  if (v9 != nullptr) {
    v5 = 40;
  LABEL_10:
    (*(void (**)(__int64))(*v9 + v5))((__int64)v9);
  }
  v6 = a1[12];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  return game_cmdbtl_MindBase_Destroy_MindBase(a1);
}

__int64 MindBtlInfo_Unknown2(__int64 a1)
{
  return GameData_2203490 + ((__int64)*(int*)(a1 + 12) << 7) + 672;
}

__int64 MindBtlInfo_Unknown4(__int64 a1)
{
  return GameData_2203490 + ((__int64)*(int*)(a1 + 12) << 7) + 672;
}

__int64 MindBtlInfo_Unknown3(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(unsigned int*)(a1 + 12);
  if ((unsigned int)v1 > 2) {
    v2 = 3;
  }
  else {
    v2 = GameData_1b95a48[v1];
  }
  return GameData_2203490 + (v2 << 7) + 672;
}

__int64 MindBtlInfo_Unknown5(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(unsigned int*)(a1 + 12);
  if ((unsigned int)v1 > 2) {
    v2 = 3;
  }
  else {
    v2 = GameData_1b95a48[v1];
  }
  return GameData_2203490 + (v2 << 7) + 672;
}

__int64 MindBtlInfo_edb660(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  _QWORD* v7;
  _QWORD v8[4];
  _QWORD* v9;
  _QWORD v10[4];
  _QWORD* v11;

  v2 = GameData_212ea58;
  v10[0] = GameData_1fef388;
  v11 = v10;
  CmdbtlPartyNatives_e9a800(*GameData_212ea58, v10);
  if (v11 == v10) {
    v3 = 32;
  }
  else {
    if (v11 == nullptr) {
      goto LABEL_6;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v11 + v3))((__int64)v11);
LABEL_6:
  v4 = *v2;
  v8[0] = GameData_1fef408;
  v9 = v8;
  CmdbtlPartyNatives_e9a800(v4, v8);
  result = (__int64)v9;
  if (v9 == v8) {
    v6 = 32;
    goto LABEL_10;
  }
  if (v9 != nullptr) {
    v6 = 40;
  LABEL_10:
    result = (*(__int64 (**)(__int64))(*v9 + v6))((__int64)v9);
  }
  v7 = *(_QWORD**)(a1 + 88);
  v7[3] = v7[2];
  v7[6] = v7[5];
  return result;
}

void MindBtlInfo_edb740(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 (**v6)();
  __int64 (**v7)();
  __int64* v8;
  __int64 (*v9)();
  char v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 (***v16)();
  __int64 v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  __int64 (**v21)();
  __int64 v22;
  __int64 v23;
  int v24;
  int v25;
  __int64 v26;
  int v27;
  __int64 v28;
  unsigned int* v29;
  unsigned int* v30;
  __int64 v31;
  struct {
    unsigned int* v32;
    __int64* v33;
    __int64 v34;
  } v32_;
  struct {
    __int64 (**v35)();
    __int64 (**v36)();
    char gap48_[16];
    __int64* v37;
  } v35_;
  struct {
    __int64 (**v38)();
    __int64 (*v39)();
    unsigned int** v40;
    __int64 v41;
    __int64* v42;
  } v38_;

  v2 = GameData_212ea58;
  v38_.v38 = GameData_1fef388;
  v38_.v42 = (__int64*)&v38_.v38;
  CmdbtlPartyNatives_e9a800_alt1((_QWORD*)*GameData_212ea58,
                                 (__int64)&v38_.v38);
  if (v38_.v42 == (__int64*)&v38_.v38) {
    v3 = 32;
  }
  else {
    if (v38_.v42 == nullptr) {
      goto LABEL_6;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v38_.v42 + v3))((__int64)v38_.v42);
LABEL_6:
  v4 = (_QWORD*)*v2;
  v35_.v35 = GameData_1fef408;
  v35_.v37 = (__int64*)&v35_.v35;
  CmdbtlPartyNatives_e9a800_alt1(v4, (__int64)&v35_.v35);
  if (v35_.v37 == (__int64*)&v35_.v35) {
    v5 = 32;
    goto LABEL_10;
  }
  if (v35_.v37 != nullptr) {
    v5 = 40;
  LABEL_10:
    (*(void (**)(__int64))(*v35_.v37 + v5))((__int64)v35_.v37);
  }
  Manager_e9af40((void*)((__int64*)&v35_.v35), (_QWORD*)*v2);
  v6 = v35_.v35;
  if ((*(_BYTE*)(a1 + 54) & 2) != 0) {
    goto LABEL_35;
  }
  v7 = v35_.v36;
  v32_.v33 = nullptr;
  v32_.v34 = 0;
  v32_.v32 = nullptr;
  if (v35_.v35 == v35_.v36) {
    goto LABEL_34;
  }
  v8 = GameData_212c880[0];
  do {
    v9 = *v6;
    v38_.v40 = &v32_.v32;
    v38_.v41 = a1;
    v38_.v42 = (__int64*)&v38_.v38;
    v10 = *((_BYTE*)v9 + 1829);
    v38_.v38 = GameData_1fef308;
    v38_.v39 = v9;
    if ((v10 & 0x40) == 0 ||
        (v11 = *((_QWORD*)v9 + 223), v12 = *((_QWORD*)v9 + 222),
         (int)((unsigned __int64)(v11 - v12) >> 2) < 1)) {
      v16 = &v38_.v38;
    LABEL_22:
      v17 = 4;
    LABEL_23:
      ((__int64 (*)(__int64))(*v16)[v17])((__int64)v16);
      goto LABEL_24;
    }
    v13 = *v8;
    v14 = 0;
    v15 = 0;
    do {
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v13 + 64) +
                               8LL * (*(_DWORD*)(v12 + v14) & 0xFFF)) +
                    115LL) == 14) {
        if (v38_.v42 == nullptr) {
          GameRoutine_60a310();
        }
        (*(void (**)(__int64*, __int64))(*v38_.v42 + 48))(v38_.v42, v12 + v14);
        v13 = *v8;
        v11 = *((_QWORD*)v9 + 223);
        v12 = *((_QWORD*)v9 + 222);
      }
      ++v15;
      v14 += 4;
    } while (v15 < (int)((unsigned __int64)(v11 - v12) >> 2));
    v16 = (__int64 (***)(void))v38_.v42;
    if (v38_.v42 == (__int64*)&v38_.v38) {
      goto LABEL_22;
    }
    if (v38_.v42 != nullptr) {
      v17 = 5;
      goto LABEL_23;
    }
  LABEL_24:
    ++v6;
  } while (v6 != v7);
  v18 = (__int64*)v32_.v32;
  v19 = v32_.v33;
  if (v32_.v33 == (__int64*)v32_.v32) {
    if (v32_.v32 != nullptr) {
      goto LABEL_31;
    }
  }
  else {
    do {
      v25 = *(_DWORD*)(*v18 + 416);
      if ((v25 & 0x20000000) != 0) {
        *(_DWORD*)(*v18 + 416) = v25 & 0xDFFFFFFF;
        v26 = *v18;
        v27 = *(_DWORD*)(*v18 + 416);
        if ((v27 & 0x10000000) == 0) {
          v28 = *v18;
          *(_DWORD*)(v26 + 416) = v27 | 0x10000000;
          game_6c51e0(v28);
          GameRoutine_6c6da0_alt1(v26);
          game_6c6ec0(v26);
          *(_DWORD*)(v26 + 416) &= ~0x10000000u;
        }
      }
      v18 += 2;
    } while (v18 != v19);
    v29 = v32_.v32;
    v30 = (unsigned int*)v32_.v33;
    v38_.v39 = nullptr;
    v38_.v40 = nullptr;
    v38_.v38 = nullptr;
    if (v32_.v32 != (unsigned int*)v32_.v33) {
      do {
        MindBtlInfo_edc200_alt1((__int64*)&v38_.v38, v29);
        v29 += 4;
      } while (v29 != v30);
      if (v38_.v38 != nullptr) {
        v31 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v31 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v31);
      }
    }
    v18 = (__int64*)v32_.v32;
    if (v32_.v32 != nullptr) {
    LABEL_31:
      v32_.v33 = v18;
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v20);
    }
  }
LABEL_34:
  v6 = v35_.v35;
LABEL_35:
  v21 = v35_.v36;
  if (v6 == v35_.v36) {
    if (v6 != nullptr) {
      goto LABEL_37;
    }
  }
  else {
    do {
      v23 = (__int64)*v6;
      v24 = *((_DWORD*)*v6 + 104);
      if ((v24 & 0x20000000) != 0) {
        *(_DWORD*)(v23 + 416) = v24 & 0xDFFFFFFF;
        if ((v24 & 0x10000000) == 0) {
          *(_DWORD*)(v23 + 416) = v24 & 0xCFFFFFFF | 0x10000000;
          game_6c51e0(v23);
          GameRoutine_6c6da0_alt1(v23);
          game_6c6ec0(v23);
          *(_DWORD*)(v23 + 416) &= ~0x10000000u;
        }
      }
      ++v6;
    } while (v6 != v21);
    v6 = v35_.v35;
    if (v35_.v35 != nullptr) {
    LABEL_37:
      v35_.v36 = v6;
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v22);
    }
  }
}

void game_cmdbtl_MindBtlInfo_CalcCmdBtlInfo(__int64 a1, __int64 a2, int a3)
{

#pragma clang fp contract(off)
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __n128 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __n128 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v26;
  int v27;
  int v28;
  int v29;
  __int64* v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  __int64 (***v34)();
  __int64 v35;
  __int64* v36;
  __int64 v37;
  int v38;
  int v39;
  int v40;
  int v41;
  __int64* v42;
  __int64* v43;
  __int64 v44;
  __int64 v45;
  __int64 (***v46)();
  __int64 v47;
  __int64* v48;
  __int64 v49;
  __int64* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __n128 v54;
  unsigned int v56;
  int v57;
  int v58;
  __int64** v59;
  __int64 v60;
  struct {
    __int64 (**v61)();
    __int64** v62;
    __int64 v63;
    char gap24_[8];
    __int64* v64;
  } v61_;
  struct {
    __int64* v65;
    __int64* v66;
    __int64 v67;
  } v65_;
  struct {
    __int64 v68;
    __int64 v69;
  } v68_;

  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v6 = a2 + 0x2000;
  v7 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 16LL))(a1),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v8 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if (v7 == 0 || v8 == 0) {
    GameRoutine_7992e0(a2 + 16),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    GameRoutine_7992e0(a2 + 776),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    GameRoutine_7992e0(a2 + 1536),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    GameRoutine_7992e0(a2 + 2296),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    *(_DWORD*)(a2 + 11256) = 0;
    *(_WORD*)(v6 + 3080) = 0;
    *(_QWORD*)(a2 + 11276) = 0;
    *(_QWORD*)(a2 + 11282) = 0;
    BattleArea_8b9d00(a2 + 11296),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    return;
  }
  v10 = *(_QWORD*)(a1 + 40);
  v11 = v8;
  if (v10 == 0 || *(_QWORD*)(v10 + 8) == -1) {
    v13 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v10 = *(_QWORD*)(v13 + 88);
    if (v10 == 0) {
      goto LABEL_18;
    }
    v12 = (__int64*)(v13 + 80);
  }
  else {
    v12 = (__int64*)(a1 + 32);
  }
  v15 = *v12;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                            memory_order_relaxed);
  v16 = std___1___shared_weak_count_lock(v10),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v14 = std___1___shared_weak_count___release_weak_alt1(v10),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if (v16 != 0 && v15 != 0) {
    BattleInfo_7902e0(a2, 0, *(_QWORD*)(v15 + 16), *(_DWORD*)(a1 + 16)),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  else if (v16 == 0) {
    goto LABEL_18;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v14 = std___1___shared_weak_count___release_weak_alt1(v16),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
LABEL_18:
  v17 = (*(__int64 (**)(__int64, long double))(*(_QWORD*)a1 + 40LL))(
      a1, *(long double*)&v14),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v21 = *(_QWORD*)(v17 + 88);
  if (v21 != 0) {
    v22 = *(_QWORD*)(v17 + 80);
    v23 = *(_QWORD*)(v17 + 88);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 16), 1u,
                              memory_order_relaxed);
    v24 = std___1___shared_weak_count_lock(v23),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v20 = std___1___shared_weak_count___release_weak_alt1(v21),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (v24 == 0 || v22 == 0) {
      if (v24 == 0) {
        goto LABEL_27;
      }
    }
    else {
      BattleInfo_7902e0(a2, 1u, *(_QWORD*)(v22 + 16), -1),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v24 + 16LL))(
          v24, *(long double*)&v20),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v20 = std___1___shared_weak_count___release_weak_alt1(v24),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
  }
LABEL_27:
  v26 = *(_DWORD*)(v7 + 16);
  v27 = *(_DWORD*)(v7 + 20);
  v65_.v65 = nullptr;
  v28 = v27 + v26;
  if (v28 <= 1) {
    v28 = 1;
  }
  *(_DWORD*)(a2 + 116) = v28;
  v29 = *(_DWORD*)(v7 + 12);
  v65_.v66 = nullptr;
  v65_.v67 = 0;
  v61_.v63 = a1;
  if (v28 >= v29) {
    v28 = v29;
  }
  if (v29 < 0) {
    v28 = 0;
  }
  *(_DWORD*)(a2 + 112) = v28;
  v30 = *(__int64**)(v7 + 40);
  v31 = *(__int64**)(v7 + 48);
  v61_.v61 = GameData_1fef238;
  v61_.v62 = &v65_.v65;
  v61_.v64 = (__int64*)&v61_.v61;
  if (v30 == v31) {
    v34 = &v61_.v61;
    v35 = 4;
  }
  else {
    do {
      v68_.v68 = *v30;
      v32 = v30[1];
      v68_.v69 = v32;
      if (v32 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (v61_.v64 == nullptr) {
      LABEL_105:
        GameRoutine_60a310(),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      (*(void (**)(__int64*, __int64*, long double))(*v61_.v64 + 48))(
          v61_.v64, &v68_.v68, *(long double*)&v20),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v33 = v68_.v69;
      if (v68_.v69 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v68_.v69 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        v20 = std___1___shared_weak_count___release_weak_alt1(v33),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      v30 += 2;
    } while (v30 != v31);
    v34 = (__int64 (***)(void))v61_.v64,
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (v61_.v64 == (__int64*)&v61_.v61) {
      v35 = 4;
    }
    else {
      if (v61_.v64 == nullptr) {
        goto LABEL_48;
      }
      v35 = 5;
    }
  }
  ((void (*)(__int64 (***)(void), __int64, __int64))(*v34)[v35])(v34, v18, v19),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
LABEL_48:
  v36 = v65_.v65;
  if ((__int64**)(a2 + 752) != &v65_.v65) {
    GameRoutine_7a39e0(a2 + 752, v65_.v65, v65_.v66,
                       ((char*)v65_.v66 - (char*)v65_.v65) >> 5),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v36 = v65_.v65;
  }
  if (v36 != nullptr) {
    v65_.v66 = v36;
    v37 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v37 = 56;
    }
    v20 = nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v37),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  v38 = *(_DWORD*)(v11 + 16);
  v39 = *(_DWORD*)(v11 + 20);
  v65_.v65 = nullptr;
  v40 = v39 + v38;
  if (v40 <= 1) {
    v40 = 1;
  }
  *(_DWORD*)(a2 + 876) = v40;
  v41 = *(_DWORD*)(v11 + 12);
  v65_.v66 = nullptr;
  v65_.v67 = 0;
  v61_.v63 = a1;
  if (v40 >= v41) {
    v40 = v41;
  }
  if (v41 < 0) {
    v40 = 0;
  }
  *(_DWORD*)(a2 + 872) = v40;
  v42 = *(__int64**)(v11 + 40);
  v43 = *(__int64**)(v11 + 48);
  v61_.v61 = GameData_1fef238;
  v61_.v62 = &v65_.v65;
  v61_.v64 = (__int64*)&v61_.v61;
  if (v42 == v43) {
    v46 = &v61_.v61;
  LABEL_73:
    v47 = 4;
    goto LABEL_74;
  }
  do {
    v68_.v68 = *v42;
    v44 = v42[1];
    v68_.v69 = v44;
    if (v44 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v44 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v61_.v64 == nullptr) {
      goto LABEL_105;
    }
    (*(void (**)(__int64*, __int64*, long double))(*v61_.v64 + 48))(
        v61_.v64, &v68_.v68, *(long double*)&v20),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v45 = v68_.v69;
    if (v68_.v69 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v68_.v69 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v20 = std___1___shared_weak_count___release_weak_alt1(v45),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    v42 += 2;
  } while (v42 != v43);
  v46 = (__int64 (***)(void))v61_.v64,
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if (v61_.v64 == (__int64*)&v61_.v61) {
    goto LABEL_73;
  }
  if (v61_.v64 != nullptr) {
    v47 = 5;
  LABEL_74:
    ((__int64 (*)(__int64))(*v46)[v47])((__int64)v46),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  v48 = v65_.v65;
  if ((__int64**)(a2 + 1512) != &v65_.v65) {
    GameRoutine_7a39e0(a2 + 1512, v65_.v65, v65_.v66,
                       ((char*)v65_.v66 - (char*)v65_.v65) >> 5),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v48 = v65_.v65;
  }
  if (v48 != nullptr) {
    v65_.v66 = v48;
    v49 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v49 = 56;
    }
    v20 = nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v49),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  if ((*(_DWORD*)(a1 + 48) & 0x80000000) != 0) {
    goto LABEL_102;
  }
  v50 =
      (__int64*)(*(_QWORD*)((*(__int64 (**)(__int64, long double))(
                                *(_QWORD*)a1 + 32LL))(a1, *(long double*)&v20) +
                            40) +
                 16LL * *(int*)(a1 + 48)),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v51 = v50[1];
  if (v51 == 0) {
    goto LABEL_102;
  }
  v52 = *v50;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v51 + 8), 1u,
                            memory_order_relaxed);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v51 + 16), 1u,
                            memory_order_relaxed);
  if (atomic_fetch_add((atomic_ullong* volatile)(v51 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v51 + 16LL))(v51),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    std___1___shared_weak_count___release_weak_alt1(v51),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  v53 = std___1___shared_weak_count_lock(v51),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v54 = std___1___shared_weak_count___release_weak_alt1(v51),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if (v53 != 0 && v52 != 0) {
    v56 = *(unsigned __int8*)(a1 + 8) - 7;
    if (v56 > 2) {
      v57 = 3;
    }
    else {
      v57 = GameData_1b95a60[(unsigned __int8)(*(_BYTE*)(a1 + 8) - 7)];
      *(_BYTE*)(a2 + 1554) = 0x20301u >> (8 * (v56 & 0x1F));
    }
    CmdBtlUnit_e7e340((void*)((__int64*)&v61_.v61), v52, v57),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (v61_.v61 != nullptr) {
      v58 = game_UnitItemList_Find_70f780(
          (unsigned __int16*)(*(_QWORD*)(v52 + 16) + 828LL),
          *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                     8LL * *(unsigned __int16*)v61_.v61[1])),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      BattleInfo_7902e0(a2, 2u, *(_QWORD*)(v52 + 16), v58),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    v59 = v61_.v62;
    if (v61_.v62 != nullptr &&
        atomic_fetch_add((atomic_ullong* volatile)(v61_.v62 + 1),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      ((void (*)(__int64**))(*v59)[2])(v59),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v54 = std___1___shared_weak_count___release_weak_alt1(v59),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    goto LABEL_100;
  }
  if (v53 != 0) {
  LABEL_100:
    if (atomic_fetch_add((atomic_ullong* volatile)(v53 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v53 + 16LL))(
          v53, *(long double*)&v54),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      std___1___shared_weak_count___release_weak_alt1(v53),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
  }
LABEL_102:
  v60 = *(_QWORD*)(a1 + 24);
  if (*(_BYTE*)(v6 + 3081) != 0) {
    GameRoutine_7992e0(a2 + 16),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    GameRoutine_7992e0(a2 + 776),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    GameRoutine_7992e0(a2 + 1536),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    GameRoutine_7992e0(a2 + 2296),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    *(_DWORD*)(a2 + 11256) = 0;
    *(_WORD*)(v6 + 3080) = 0;
    *(_QWORD*)(a2 + 11276) = 0;
    *(_QWORD*)(a2 + 11282) = 0;
    BattleArea_8b9d00(a2 + 11296),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  game_map_799aa0(a2 + 16, v60),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  *(_DWORD*)(a2 + 11276) |= a3 | 0x10088;
  game_map_790ba0(a2),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  *(_BYTE*)(v6 + 3081) |= 1u;
}

__int64 MindBtlInfo_edc200(__int64* a1, _DWORD* a2)
{
  _DWORD* v2;
  __int64 result;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  int v11;
  __int64 v12;
  char v13;
  __int64 v14;
  unsigned __int64 v15;
  int v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  char v20;
  unsigned int v21;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  int v35;
  __int64 v36;
  int v37;
  __int64 v38;
  __int64 v39;
  _DWORD* v40;
  __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  int v45;
  int v46;
  __int64 v47;
  int v48;
  __int64 v49;
  int v50;
  int v51;
  __int64 v52;
  int v53;
  __int64 v54;
  int v55;
  int v56;
  __int64 v57;
  int* v58;
  int v59;
  __int64 v60;
  int v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64* v65;
  __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  int v76;
  unsigned int v77;
  __int64* v79;
  unsigned int v80;
  __int64 v81;
  __int64* v82;
  __int64 v83;
  int v84;
  __int64* v85;
  __int64* v86;

  v2 = a2 + 2;
  result = game_HasSkill(*(_QWORD*)a2 + 1744LL, a2 + 2);
  if ((result & 1) == 0) {
    return result;
  }
  v5 = GameData_212c880[0];
  v6 = *(_QWORD*)(*GameData_212c880[0] + 64);
  v7 = *(_QWORD*)(v6 + 8LL * (*v2 & 0xFFF));
  if (*(_WORD*)(v7 + 512) == 0) {
    return result;
  }
  v8 = *(unsigned __int8*)(v7 + 279);
  v77 = *(unsigned __int8*)(v7 + 278);
  if ((*v2 & 0xFFF) != 0) {
    v9 = GameRoutine_84edc0(*(_QWORD*)a2 + 1744LL, *(_QWORD*)(v7 + 24) + 224LL);
    v6 = *(_QWORD*)(*v5 + 64);
    v10 = a2[2] & 0xFFF;
  }
  else {
    v10 = 0;
    v9 = 0;
  }
  v11 = *(unsigned __int8*)(*(_QWORD*)(v6 + 8 * v10) + 106LL);
  if (v11 == 1) {
    v14 = *(_QWORD*)(*(_QWORD*)a2 + 440LL);
    if (v14 != 0) {
      v15 = *(unsigned __int8*)(v14 + 16);
      if (v15 <= 3) {
        v16 = GameData_1a82ec0[v15];
      LABEL_16:
        v80 = v16;
        goto LABEL_17;
      }
    }
  }
  else if (v11 == 2) {
    v12 = *(_QWORD*)(*(_QWORD*)a2 + 440LL);
    if (v12 != 0) {
      v13 = *(_BYTE*)(v12 + 16);
    }
    else {
      v13 = 9;
    }
    v16 = 1 << v13;
    goto LABEL_16;
  }
  v80 = 0;
LABEL_17:
  result = (__int64)GameRoutine_e9af40(&v85, GameData_2203490);
  v17 = v85;
  v79 = v86;
  if (v85 != v86) {
    v76 = v9 + v8;
    while (1) {
      v18 = *v17;
      v19 = *(_QWORD*)(*v17 + 440);
      v20 = v19 != 0 ? *(_BYTE*)(v19 + 16) : 9;
      if (((v80 >> v20) & 1) != 0) {
        v21 = v18 != *(_QWORD*)a2;
        if (v77 <= v21 && v76 >= (int)v21) {
          v23 = *(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8LL * (*v2 & 0xFFF));
          v24 = *(unsigned __int16*)(v23 + 512);
          if (*(_WORD*)(v23 + 512) != 0) {
            break;
          }
        }
      }
    LABEL_19:
      if (++v17 == v79) {
        v17 = v85;
        goto LABEL_67;
      }
    }
    v25 = 0;
    v82 = v17;
    v83 = *(unsigned __int16*)(v23 + 512);
    v81 = *(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8LL * (*v2 & 0xFFF));
    while (1) {
      v27 = *(_QWORD*)(*(_QWORD*)(v23 + 520) + 16 * v25 + 8);
      v28 = v27 != 0 ? *(_WORD*)(v27 + 16) & 0xFFF : 0;
      v84 = v28;
      result = UnitSkillList_84cc00(v18 + 1648, &v84, 1);
      if ((result & 1) != 0) {
        break;
      }
    LABEL_32:
      if (++v25 == v24) {
        goto LABEL_19;
      }
    }
    v29 = *(_QWORD*)(v18 + 1680);
    *(_QWORD*)(v18 + 1728) = 0;
    *(_QWORD*)(v18 + 1736) = 0;
    v30 = *(_QWORD*)(v18 + 1688) - v29;
    if ((int)((unsigned __int64)v30 >> 2) >= 1) {
      v31 = *v5;
      v32 = (int)(v30 >> 2);
      if (v32 <= 1) {
        v33 = 1;
      }
      else {
        v33 = (int)(v30 >> 2);
      }
      if (v32 < 4) {
        v34 = 0;
        v35 = 0;
        v36 = 0;
        v37 = 0;
        v38 = 0;
        v39 = v33 & 3;
        if (v39 == 0) {
          goto LABEL_49;
        }
        goto LABEL_47;
      }
      v40 = (_DWORD*)(v29 + 8);
      v41 = 0;
      v34 = 0;
      v35 = 0;
      v36 = 0;
      v37 = 0;
      do {
        v41 -= 4;
        v42 = *(_QWORD*)(*(_QWORD*)(v31 + 64) + 8LL * (*(v40 - 2) & 0xFFF));
        v43 = v37 | (1 << *(_BYTE*)(v42 + 104));
        *(_WORD*)(v18 + 1728) = v43;
        v44 = (1LL << *(_BYTE*)(v42 + 250)) | v36;
        *(_QWORD*)(v18 + 1736) = v44;
        v45 = (1 << *(_BYTE*)(v42 + 115)) | v35;
        *(_DWORD*)(v18 + 1732) = v45;
        v46 = *(unsigned __int16*)(*(_QWORD*)(v42 + 24) + 1064LL) | v34;
        *(_WORD*)(v18 + 1730) = v46;
        v47 = *(_QWORD*)(*(_QWORD*)(v31 + 64) + 8LL * (*(v40 - 1) & 0xFFF));
        v48 = v43 | (1 << *(_BYTE*)(v47 + 104));
        *(_WORD*)(v18 + 1728) = v48;
        v49 = (1LL << *(_BYTE*)(v47 + 250)) | v44;
        *(_QWORD*)(v18 + 1736) = v49;
        v50 = (1 << *(_BYTE*)(v47 + 115)) | v45;
        *(_DWORD*)(v18 + 1732) = v50;
        v51 = *(unsigned __int16*)(*(_QWORD*)(v47 + 24) + 1064LL) | v46;
        *(_WORD*)(v18 + 1730) = v51;
        v52 = *(_QWORD*)(*(_QWORD*)(v31 + 64) + 8LL * (*v40 & 0xFFF));
        v53 = v48 | (1 << *(_BYTE*)(v52 + 104));
        *(_WORD*)(v18 + 1728) = v53;
        v54 = (1LL << *(_BYTE*)(v52 + 250)) | v49;
        *(_QWORD*)(v18 + 1736) = v54;
        v55 = (1 << *(_BYTE*)(v52 + 115)) | v50;
        *(_DWORD*)(v18 + 1732) = v55;
        v56 = *(unsigned __int16*)(*(_QWORD*)(v52 + 24) + 1064LL) | v51;
        *(_WORD*)(v18 + 1730) = v56;
        LOWORD(v52) = v40[1];
        v40 += 4;
        v57 = *(_QWORD*)(*(_QWORD*)(v31 + 64) + 8 * (v52 & 0xFFF));
        v37 = v53 | (1 << *(_BYTE*)(v57 + 104));
        *(_WORD*)(v18 + 1728) = v37;
        v36 = (1LL << *(_BYTE*)(v57 + 250)) | v54;
        *(_QWORD*)(v18 + 1736) = v36;
        result = (unsigned int)(1 << *(_BYTE*)(v57 + 115));
        v35 = result | v55;
        *(_DWORD*)(v18 + 1732) = v35;
        v34 = *(unsigned __int16*)(*(_QWORD*)(v57 + 24) + 1064LL) | v56;
        *(_WORD*)(v18 + 1730) = v34;
      } while (-(__int64)(v33 & 0xFFFFFFFFFFFFFFFCLL) != v41);
      v38 = -v41;
      v39 = v33 & 3;
      if (v39 != 0) {
      LABEL_47:
        v58 = (int*)(v29 + 4 * v38);
        do {
          v59 = *v58++;
          --v39;
          v60 = *(_QWORD*)(*(_QWORD*)(v31 + 64) + 8LL * (v59 & 0xFFF));
          v37 |= 1 << *(_BYTE*)(v60 + 104);
          *(_WORD*)(v18 + 1728) = v37;
          v36 |= 1LL << *(_BYTE*)(v60 + 250);
          *(_QWORD*)(v18 + 1736) = v36;
          v35 |= 1 << *(_BYTE*)(v60 + 115);
          *(_DWORD*)(v18 + 1732) = v35;
          v34 |= *(unsigned __int16*)(*(_QWORD*)(v60 + 24) + 1064LL);
          *(_WORD*)(v18 + 1730) = v34;
        } while (v39 != 0);
      }
    }
  LABEL_49:
    *(_DWORD*)(v18 + 416) |= 0x20000000u;
    if (*(_QWORD*)(*(_QWORD*)(v27 + 24) + 448LL) !=
        *(_QWORD*)(*(_QWORD*)(v27 + 24) + 456LL)) {
      v61 = *(_WORD*)(v27 + 16) & 0xFFF;
      v63 = a1[1];
      v62 = a1[2];
      if (v63 < v62) {
        *(_QWORD*)v63 = v18;
        *(_DWORD*)(v63 + 8) = v61;
        v26 = v63 + 16;
      }
      else {
        v64 = *a1;
        v65 = a1;
        v66 = v63 - *a1;
        v67 = (v66 >> 4) + 1;
        if (v67 >> 60 != 0) {
          GameRoutine_edd9e0();
        }
        v68 = v62 - v64;
        if (v68 >> 3 > v67) {
          v67 = v68 >> 3;
        }
        if ((unsigned __int64)v68 >= 0x7FFFFFFFFFFFFFF0LL) {
          v69 = 0xFFFFFFFFFFFFFFFLL;
        }
        else {
          v69 = v67;
        }
        if (v69 != 0) {
          if (v69 >> 60 != 0) {
            GameRoutine_60a210(result);
          }
          v70 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v69, 16, 0);
        }
        else {
          v70 = 0;
        }
        v71 = v70 + v66;
        v72 = v70 + 16 * v69;
        *(_DWORD*)(v71 + 8) = v61;
        v73 = v70 + v66 - 16 * (v66 >> 4);
        *(_QWORD*)v71 = v18;
        v26 = v70 + v66 + 16;
        result = memcpy(v73, v64, v66);
        a1 = v65;
        *v65 = v73;
        v65[1] = v26;
        v65[2] = v72;
        if (v64 != 0) {
          v74 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v74 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v74, v64);
        }
        v5 = &GameData_21c99b0;
        v23 = v81;
        v17 = v82;
      }
      v24 = v83;
      a1[1] = v26;
    }
    goto LABEL_32;
  }
LABEL_67:
  if (v17 != nullptr) {
    v86 = v17;
    v75 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v75 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v75, v17);
  }
  return result;
}

__n128 game_cmdbtl_MindBtlInfo_CalcCmdBtlInfo_lambda0_Invoke(__int64 a1,
                                                             __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __n128 result;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
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
  __int64 v24[4];

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = *a2;
  v2 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  v5 = *(_QWORD*)(a1 + 16);
  v6 = *(_QWORD*)(v5 + 40);
  if (v6 == 0 || *(_QWORD*)(v6 + 8) == -1) {
    v8 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v5 + 32LL))(*(_QWORD*)(a1 + 16)),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v6 = *(_QWORD*)(v8 + 88);
    if (v6 == 0) {
      goto LABEL_12;
    }
    v7 = (__int64*)(v8 + 80);
  }
  else {
    v7 = (__int64*)(v5 + 32);
  }
  v10 = *v7;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                            memory_order_relaxed);
  v11 = std___1___shared_weak_count_lock(v6),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v11 == 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v6);
  LABEL_12:
    if (v3 == 0) {
      goto LABEL_36;
    }
  LABEL_13:
    if ((*(_DWORD*)(v5 + 48) & 0x80000000) != 0 ||
        (v13 = (__int64*)(*(_QWORD*)((*(__int64 (**)(__int64, long double))(
                                         *(_QWORD*)v5 + 32LL))(
                                         v5, *(long double*)&result) +
                                     40) +
                          16LL * *(int*)(v5 + 48)),
         (v14 = v13[1]) == 0)) {
      if (v3 == 0) {
        goto LABEL_36;
      }
    }
    else {
      v15 = *v13;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                memory_order_relaxed);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v14),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v16 = std___1___shared_weak_count_lock(v14),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v16 != 0) {
        if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v17 = v16;
          (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          std___1___shared_weak_count___release_weak_alt1(v17),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        result = std___1___shared_weak_count___release_weak_alt1(v14);
        if (v15 == v3) {
          goto LABEL_36;
        }
      }
      else {
        result = std___1___shared_weak_count___release_weak_alt1(v14);
        if (v3 == 0) {
          goto LABEL_36;
        }
      }
    }
    v18 = (*(__int64 (**)(__int64, long double))(*(_QWORD*)v5 + 40LL))(
        v5, *(long double*)&result),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v19 = *(_QWORD*)(v18 + 88);
    if (v19 != 0) {
      v20 = *(_QWORD*)(v18 + 80);
      v21 = *(_QWORD*)(v18 + 88);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                                memory_order_relaxed);
      v22 = std___1___shared_weak_count_lock(v21),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v22 != 0) {
        if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v23 = v22;
          (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          std___1___shared_weak_count___release_weak_alt1(v23),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        result = std___1___shared_weak_count___release_weak_alt1(v19);
        if (v3 == 0 || v20 == v3) {
          goto LABEL_36;
        }
      LABEL_34:
        if ((*(_BYTE*)(v3 + 186) & 1) != 0) {
          game_cmdbtl_ed9ba0((void*)(v24), v5,
                             *(_QWORD*)(*(_QWORD*)(v3 + 16) + 232LL),
                             *(_QWORD*)(v3 + 16), *(long double*)&result),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          GameRoutine_d28880(*(__int64***)(a1 + 8), v24),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        goto LABEL_36;
      }
      result = std___1___shared_weak_count___release_weak_alt1(v19);
    }
    if (v3 == 0) {
      goto LABEL_36;
    }
    goto LABEL_34;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v12 = v11;
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    std___1___shared_weak_count___release_weak_alt1(v12),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  result = std___1___shared_weak_count___release_weak_alt1(v6);
  if (v10 != v3) {
    goto LABEL_13;
  }
LABEL_36:
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v2 + 16LL))(
        v2, *(long double*)&result),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    return std___1___shared_weak_count___release_weak_alt1(v2);
  }
  return result;
}

__int64 game_cmdbtl_MindBtlInfo_ClearSupportSkill_lambda0_Invoke(__int64 a1,
                                                                 __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 result;

  v2 = *a2;
  v3 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  v4 = *(_QWORD*)(v2 + 16);
  v5 = *(_QWORD*)(v4 + 1680);
  if ((int)((unsigned __int64)(*(_QWORD*)(v4 + 1688) - v5) >> 2) >= 1) {
    *(_QWORD*)(v4 + 1688) = v5;
    v6 = *(_DWORD*)(v4 + 416) | 0x20000000;
    *(_QWORD*)(v4 + 1656) = *(_QWORD*)(v4 + 1648);
    *(_DWORD*)(v4 + 1672) = 0;
    *(_QWORD*)(v4 + 1728) = 0;
    *(_QWORD*)(v4 + 1736) = 0;
    *(_DWORD*)(v4 + 416) = v6;
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

__int64 game_cmdbtl_MindBtlInfo_ClearSupportSkill_lambda1_Invoke(__int64 a1,
                                                                 __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 result;

  v2 = *a2;
  v3 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  v4 = *(_QWORD*)(v2 + 16);
  v5 = *(_DWORD*)(v4 + 416);
  if ((v5 & 0x20000000) != 0) {
    *(_DWORD*)(v4 + 416) = v5 & 0xDFFFFFFF;
    if ((v5 & 0x10000000) == 0) {
      *(_DWORD*)(v4 + 416) = v5 & 0xCFFFFFFF | 0x10000000;
      GameRoutine_6c51e0(v4);
      GameRoutine_6c6da0(v4);
      result = GameRoutine_6c6ec0(v4);
      *(_DWORD*)(v4 + 416) &= ~0x10000000u;
    }
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

#pragma GCC visibility pop
