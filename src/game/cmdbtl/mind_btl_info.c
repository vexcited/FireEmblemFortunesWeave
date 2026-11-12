#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _QWORD GameData_1b95a48[3];
extern __int64 GameData_2203490;
__int64 MindBtlInfo_Unknown2(__int64 a1);
__int64 MindBtlInfo_Unknown4(__int64 a1);
__int64 MindBtlInfo_Unknown3(__int64 a1);
__int64 MindBtlInfo_Unknown5(__int64 a1);
__attribute__((swiftcall)) void GameRoutine_e9af40(PSEUDO_X8, _QWORD);
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
__int64 MindBtlInfo_edc200_alt2(__int64* a1,
                                _DWORD* a2) __asm__("MindBtlInfo_edc200");
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
__int64 UnitSkillList_84cc00_alt1(__int64*, _DWORD*,
                                  __int64) __asm__("UnitSkillList_84cc00");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_HasSkill_alt1(_QWORD*, unsigned int*) __asm__("game_HasSkill");
__int64 game_UnitSkillList_GetRangeAddImpl(__int64, __int64*);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_edd9e0_alt1() __asm__("GameRoutine_edd9e0");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void MindBtlInfo_edc200(__int64* a1, unsigned int* a2);
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
extern _DWORD GameData_1b95a60_alt1[3] __asm__("GameData_1b95a60");

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
  __int64 v6;
  __int64 (**v7)();
  __int64* v8;
  __int64 v9;
  char v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 (***v16)();
  __int64 v17;
  __int64 v18;
  __int64 v19;
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
    __int64 v33;
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
    __int64 v39;
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
  v6 = (__int64)v35_.v35;
  if ((*(_BYTE*)(a1 + 54) & 2) != 0) {
    goto LABEL_35;
  }
  v7 = v35_.v36;
  v32_.v33 = 0;
  v32_.v34 = 0;
  v32_.v32 = nullptr;
  if (v35_.v35 == v35_.v36) {
    goto LABEL_34;
  }
  v8 = GameData_212c880[0];
  do {
    v9 = *(_QWORD*)v6;
    v38_.v40 = &v32_.v32;
    v38_.v41 = a1;
    v38_.v42 = (__int64*)&v38_.v38;
    v10 = *(_BYTE*)(v9 + 1829);
    v38_.v38 = GameData_1fef308;
    v38_.v39 = v9;
    if ((v10 & 0x40) == 0 ||
        (v11 = *(_QWORD*)(v9 + 1784), v12 = *(_QWORD*)(v9 + 1776),
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
        v11 = *(_QWORD*)(v9 + 1784);
        v12 = *(_QWORD*)(v9 + 1776);
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
    v6 += 8;
  } while ((__int64 (**)(void))v6 != v7);
  v18 = (__int64)v32_.v32;
  v19 = v32_.v33;
  if ((unsigned int*)v32_.v33 == v32_.v32) {
    if (v32_.v32 != nullptr) {
      goto LABEL_31;
    }
  }
  else {
    do {
      v25 = *(_DWORD*)(*(_QWORD*)v18 + 416LL);
      if ((v25 & 0x20000000) != 0) {
        *(_DWORD*)(*(_QWORD*)v18 + 416LL) = v25 & 0xDFFFFFFF;
        v26 = *(_QWORD*)v18;
        v27 = *(_DWORD*)(*(_QWORD*)v18 + 416LL);
        if ((v27 & 0x10000000) == 0) {
          v28 = *(_QWORD*)v18;
          *(_DWORD*)(v26 + 416) = v27 | 0x10000000;
          game_6c51e0(v28);
          GameRoutine_6c6da0_alt1(v26);
          game_6c6ec0(v26);
          *(_DWORD*)(v26 + 416) &= ~0x10000000u;
        }
      }
      v18 += 16;
    } while (v18 != v19);
    v29 = v32_.v32;
    v30 = (unsigned int*)v32_.v33;
    v38_.v39 = 0;
    v38_.v40 = nullptr;
    v38_.v38 = nullptr;
    if (v32_.v32 != (unsigned int*)v32_.v33) {
      do {
        MindBtlInfo_edc200((__int64*)&v38_.v38, v29);
        v29 += 4;
      } while (v29 != v30);
      if (v38_.v38 != nullptr) {
        v31 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v31 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, (__int64)v38_.v38);
      }
    }
    v18 = (__int64)v32_.v32;
    if (v32_.v32 != nullptr) {
    LABEL_31:
      v32_.v33 = v18;
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v18);
    }
  }
LABEL_34:
  v6 = (__int64)v35_.v35;
LABEL_35:
  v21 = v35_.v36;
  if ((__int64 (**)(void))v6 == v35_.v36) {
    if (v6 != 0) {
      goto LABEL_37;
    }
  }
  else {
    do {
      v23 = *(_QWORD*)v6;
      v24 = *(_DWORD*)(*(_QWORD*)v6 + 416LL);
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
      v6 += 8;
    } while ((__int64 (**)(void))v6 != v21);
    v6 = (__int64)v35_.v35;
    if (v35_.v35 != nullptr) {
    LABEL_37:
      v35_.v36 = (__int64 (**)(void))v6;
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, v6);
    }
  }
}

void game_cmdbtl_MindBtlInfo_CalcCmdBtlInfo(__int64 a1, __int64 a2, int a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64* v12;
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
  int v24;
  int v25;
  int v26;
  int v27;
  __int64* v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 (***v32)();
  __int64 v33;
  __int64* v34;
  __int64 v35;
  int v36;
  int v37;
  int v38;
  int v39;
  __int64* v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  __int64 (***v44)();
  __int64 v45;
  __int64* v46;
  __int64 v47;
  __int64* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned int v53;
  int v54;
  int v55;
  __int64 v56;
  __int64 v57;
  struct {
    __int64 (**v58)();
    __int64** v59;
    __int64 v60;
    char gap24_[8];
    __int64* v61;
  } v58_;
  struct {
    __int64* v62;
    __int64* v63;
    __int64 v64;
  } v62_;
  struct {
    __int64 v65;
    __int64 v66;
  } v65_;

  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v6 = a2 + 0x2000;
  v7 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 16LL))(a1),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v8 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if (v7 == 0 || v8 == 0) {
    GameRoutine_7992e0(a2 + 16),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    GameRoutine_7992e0(a2 + 776),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    GameRoutine_7992e0(a2 + 1536),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    GameRoutine_7992e0(a2 + 2296),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    *(_DWORD*)(a2 + 11256) = 0;
    *(_WORD*)(v6 + 3080) = 0;
    *(_QWORD*)(a2 + 11276) = 0;
    *(_QWORD*)(a2 + 11282) = 0;
    BattleArea_8b9d00(a2 + 11296),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    return;
  }
  v10 = *(_QWORD*)(a1 + 40);
  v11 = v8;
  if (v10 == 0 || *(_QWORD*)(v10 + 8) == -1) {
    v13 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v18 = COERCE_AS(__typeof__(v18),
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
  v14 = *v12;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                            memory_order_relaxed);
  v15 = std___1___shared_weak_count_lock_alt1(v10),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  std___1___shared_weak_count___release_weak_alt2(v10),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if (v15 != 0 && v14 != 0) {
    BattleInfo_7902e0(a2, 0, *(_QWORD*)(v14 + 16), *(_DWORD*)(a1 + 16)),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  else if (v15 == 0) {
    goto LABEL_18;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    std___1___shared_weak_count___release_weak_alt2(v15),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
LABEL_18:
  v16 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 40LL))(a1),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v19 = *(_QWORD*)(v16 + 88);
  if (v19 != 0) {
    v20 = *(_QWORD*)(v16 + 80);
    v21 = *(_QWORD*)(v16 + 88);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                              memory_order_relaxed);
    v22 = std___1___shared_weak_count_lock_alt1(v21),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    std___1___shared_weak_count___release_weak_alt2(v19),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (v22 == 0 || v20 == 0) {
      if (v22 == 0) {
        goto LABEL_27;
      }
    }
    else {
      BattleInfo_7902e0(a2, 1u, *(_QWORD*)(v20 + 16), -1),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      std___1___shared_weak_count___release_weak_alt2(v22),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
  }
LABEL_27:
  v24 = *(_DWORD*)(v7 + 16);
  v25 = *(_DWORD*)(v7 + 20);
  v62_.v62 = nullptr;
  v26 = v25 + v24;
  if (v26 <= 1) {
    v26 = 1;
  }
  *(_DWORD*)(a2 + 116) = v26;
  v27 = *(_DWORD*)(v7 + 12);
  v62_.v63 = nullptr;
  v62_.v64 = 0;
  v58_.v60 = a1;
  if (v26 >= v27) {
    v26 = v27;
  }
  if (v27 < 0) {
    v26 = 0;
  }
  *(_DWORD*)(a2 + 112) = v26;
  v28 = *(__int64**)(v7 + 40);
  v29 = *(__int64**)(v7 + 48);
  v58_.v58 = GameData_1fef238;
  v58_.v59 = &v62_.v62;
  v58_.v61 = (__int64*)&v58_.v58;
  if (v28 == v29) {
    v32 = &v58_.v58;
    v33 = 4;
  }
  else {
    do {
      v65_.v65 = *v28;
      v30 = v28[1];
      v65_.v66 = v30;
      if (v30 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (v58_.v61 == nullptr) {
      LABEL_105:
        GameRoutine_60a310(),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      (*(void (**)(__int64*, __int64*))(*v58_.v61 + 48))(v58_.v61, &v65_.v65),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v31 = v65_.v66;
      if (v65_.v66 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v65_.v66 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        std___1___shared_weak_count___release_weak_alt2(v31),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      v28 += 2;
    } while (v28 != v29);
    v32 = (__int64 (***)(void))v58_.v61,
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (v58_.v61 == (__int64*)&v58_.v58) {
      v33 = 4;
    }
    else {
      if (v58_.v61 == nullptr) {
        goto LABEL_48;
      }
      v33 = 5;
    }
  }
  ((void (*)(__int64 (***)(void), __int64, __int64))(*v32)[v33])(v32, v17, v18),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
LABEL_48:
  v34 = v62_.v62;
  if ((__int64**)(a2 + 752) != &v62_.v62) {
    GameRoutine_7a39e0(a2 + 752, v62_.v62, v62_.v63,
                       ((char*)v62_.v63 - (char*)v62_.v62) >> 5),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v34 = v62_.v62;
  }
  if (v34 != nullptr) {
    v62_.v63 = v34;
    v35 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v35 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v35,
                                       (__int64)v34),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  v36 = *(_DWORD*)(v11 + 16);
  v37 = *(_DWORD*)(v11 + 20);
  v62_.v62 = nullptr;
  v38 = v37 + v36;
  if (v38 <= 1) {
    v38 = 1;
  }
  *(_DWORD*)(a2 + 876) = v38;
  v39 = *(_DWORD*)(v11 + 12);
  v62_.v63 = nullptr;
  v62_.v64 = 0;
  v58_.v60 = a1;
  if (v38 >= v39) {
    v38 = v39;
  }
  if (v39 < 0) {
    v38 = 0;
  }
  *(_DWORD*)(a2 + 872) = v38;
  v40 = *(__int64**)(v11 + 40);
  v41 = *(__int64**)(v11 + 48);
  v58_.v58 = GameData_1fef238;
  v58_.v59 = &v62_.v62;
  v58_.v61 = (__int64*)&v58_.v58;
  if (v40 == v41) {
    v44 = &v58_.v58;
  LABEL_73:
    v45 = 4;
    goto LABEL_74;
  }
  do {
    v65_.v65 = *v40;
    v42 = v40[1];
    v65_.v66 = v42;
    if (v42 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v42 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v58_.v61 == nullptr) {
      goto LABEL_105;
    }
    (*(void (**)(__int64*, __int64*))(*v58_.v61 + 48))(v58_.v61, &v65_.v65),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v43 = v65_.v66;
    if (v65_.v66 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v65_.v66 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      std___1___shared_weak_count___release_weak_alt2(v43),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    v40 += 2;
  } while (v40 != v41);
  v44 = (__int64 (***)(void))v58_.v61,
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if (v58_.v61 == (__int64*)&v58_.v58) {
    goto LABEL_73;
  }
  if (v58_.v61 != nullptr) {
    v45 = 5;
  LABEL_74:
    ((__int64 (*)(__int64))(*v44)[v45])((__int64)v44),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  v46 = v62_.v62;
  if ((__int64**)(a2 + 1512) != &v62_.v62) {
    GameRoutine_7a39e0(a2 + 1512, v62_.v62, v62_.v63,
                       ((char*)v62_.v63 - (char*)v62_.v62) >> 5),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v46 = v62_.v62;
  }
  if (v46 != nullptr) {
    v62_.v63 = v46;
    v47 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v47 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v47,
                                       (__int64)v46),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  if ((*(_DWORD*)(a1 + 48) & 0x80000000) != 0) {
    goto LABEL_102;
  }
  v48 = (__int64*)(*(_QWORD*)((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 32LL))(
                                  a1) +
                              40) +
                   16LL * *(int*)(a1 + 48)),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v49 = v48[1];
  if (v49 == 0) {
    goto LABEL_102;
  }
  v50 = *v48;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v49 + 8), 1u,
                            memory_order_relaxed);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v49 + 16), 1u,
                            memory_order_relaxed);
  if (atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    std___1___shared_weak_count___release_weak_alt2(v49),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  v51 = std___1___shared_weak_count_lock_alt1(v49),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  std___1___shared_weak_count___release_weak_alt2(v49),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if (v51 != 0 && v50 != 0) {
    v53 = *(unsigned __int8*)(a1 + 8) - 7;
    if (v53 > 2) {
      v54 = 3;
    }
    else {
      v54 = GameData_1b95a60_alt1[(unsigned __int8)(*(_BYTE*)(a1 + 8) - 7)];
      *(_BYTE*)(a2 + 1554) = 0x20301u >> (8 * (v53 & 0x1F));
    }
    CmdBtlUnit_e7e340((void*)((__int64*)&v58_.v58), v50, v54),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (v58_.v58 != nullptr) {
      v55 = game_UnitItemList_Find_70f780(
          (unsigned __int16*)(*(_QWORD*)(v50 + 16) + 828LL),
          *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                     8LL * *(unsigned __int16*)v58_.v58[1])),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      BattleInfo_7902e0(a2, 2u, *(_QWORD*)(v50 + 16), v55),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    v56 = (__int64)v58_.v59;
    if (v58_.v59 != nullptr &&
        atomic_fetch_add((atomic_ullong* volatile)(v58_.v59 + 1),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v56 + 16LL))(v56),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      std___1___shared_weak_count___release_weak_alt2(v56),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    goto LABEL_100;
  }
  if (v51 != 0) {
  LABEL_100:
    if (atomic_fetch_add((atomic_ullong* volatile)(v51 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v51 + 16LL))(v51),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      std___1___shared_weak_count___release_weak_alt2(v51),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
  }
LABEL_102:
  v57 = *(_QWORD*)(a1 + 24);
  if (*(_BYTE*)(v6 + 3081) != 0) {
    GameRoutine_7992e0(a2 + 16),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    GameRoutine_7992e0(a2 + 776),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    GameRoutine_7992e0(a2 + 1536),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    GameRoutine_7992e0(a2 + 2296),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    *(_DWORD*)(a2 + 11256) = 0;
    *(_WORD*)(v6 + 3080) = 0;
    *(_QWORD*)(a2 + 11276) = 0;
    *(_QWORD*)(a2 + 11282) = 0;
    BattleArea_8b9d00(a2 + 11296),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  game_map_799aa0(a2 + 16, v57),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  *(_DWORD*)(a2 + 11276) |= a3 | 0x10088;
  game_map_790ba0(a2),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  *(_BYTE*)(v6 + 3081) |= 1u;
}

void MindBtlInfo_edc200(__int64* a1, unsigned int* a2)
{
  _DWORD* v2;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  __int64 v9;
  int v10;
  __int64 v11;
  char v12;
  __int64 v13;
  unsigned __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char v19;
  unsigned int v20;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  int v34;
  __int64 v35;
  int v36;
  __int64 v37;
  __int64 v38;
  _DWORD* v39;
  __int64 v40;
  __int64 v41;
  int v42;
  __int64 v43;
  int v44;
  int v45;
  __int64 v46;
  int v47;
  __int64 v48;
  int v49;
  int v50;
  __int64 v51;
  int v52;
  __int64 v53;
  int v54;
  int v55;
  __int64 v56;
  int* v57;
  int v58;
  __int64 v59;
  int v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  __int64* v64;
  signed __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  int v75;
  unsigned int v76;
  __int64 v78;
  unsigned int v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  int v83;
  struct {
    __int64 v84;
    __int64 v85;
  } v84_;

  v2 = a2 + 2;
  if ((game_HasSkill_alt1((_QWORD*)(*(_QWORD*)a2 + 1744LL), a2 + 2) & 1) == 0) {
    return;
  }
  v4 = GameData_212c880[0];
  v5 = *(_QWORD*)(*GameData_212c880[0] + 64);
  v6 = *(_QWORD*)(v5 + 8LL * (*v2 & 0xFFF));
  if (*(_WORD*)(v6 + 512) == 0) {
    return;
  }
  v7 = *(unsigned __int8*)(v6 + 279);
  v76 = *(unsigned __int8*)(v6 + 278);
  if ((*v2 & 0xFFF) != 0) {
    v8 = game_UnitSkillList_GetRangeAddImpl(
        *(_QWORD*)a2 + 1744LL, (__int64*)(*(_QWORD*)(v6 + 24) + 224LL));
    v5 = *(_QWORD*)(*v4 + 64);
    v9 = a2[2] & 0xFFF;
  }
  else {
    v9 = 0;
    v8 = 0;
  }
  v10 = *(unsigned __int8*)(*(_QWORD*)(v5 + 8 * v9) + 106LL);
  if (v10 == 1) {
    v13 = *(_QWORD*)(*(_QWORD*)a2 + 440LL);
    if (v13 != 0) {
      v14 = *(unsigned __int8*)(v13 + 16);
      if (v14 <= 3) {
        v15 = GameData_1a82ec0[v14];
      LABEL_16:
        v79 = v15;
        goto LABEL_17;
      }
    }
  }
  else if (v10 == 2) {
    v11 = *(_QWORD*)(*(_QWORD*)a2 + 440LL);
    if (v11 != 0) {
      v12 = *(_BYTE*)(v11 + 16);
    }
    else {
      v12 = 9;
    }
    v15 = 1 << v12;
    goto LABEL_16;
  }
  v79 = 0;
LABEL_17:
  Manager_e9af40((void*)(&v84_.v84), (_QWORD*)GameData_2203490);
  v16 = v84_.v84;
  v78 = v84_.v85;
  if (v84_.v84 != v84_.v85) {
    v75 = v8 + v7;
    while (1) {
      v17 = *(_QWORD*)v16;
      v18 = *(_QWORD*)(*(_QWORD*)v16 + 440LL);
      v19 = v18 != 0 ? *(_BYTE*)(v18 + 16) : 9;
      if (((v79 >> v19) & 1) != 0) {
        v20 = v17 != *(_QWORD*)a2;
        if (v76 <= v20 && v75 >= (int)v20) {
          v22 = *(_QWORD*)(*(_QWORD*)(*v4 + 64) + 8LL * (*v2 & 0xFFF));
          v23 = *(unsigned __int16*)(v22 + 512);
          if (*(_WORD*)(v22 + 512) != 0) {
            break;
          }
        }
      }
    LABEL_19:
      v16 += 8;
      if (v16 == v78) {
        v16 = v84_.v84;
        goto LABEL_67;
      }
    }
    v24 = 0;
    v81 = v16;
    v82 = *(unsigned __int16*)(v22 + 512);
    v80 = *(_QWORD*)(*(_QWORD*)(*v4 + 64) + 8LL * (*v2 & 0xFFF));
    while (1) {
      v26 = *(_QWORD*)(*(_QWORD*)(v22 + 520) + 16 * v24 + 8);
      v27 = v26 != 0 ? *(_WORD*)(v26 + 16) & 0xFFF : 0;
      v83 = v27;
      if ((UnitSkillList_84cc00_alt1((__int64*)(v17 + 1648), &v83, 1) & 1) !=
          0) {
        break;
      }
    LABEL_32:
      if (++v24 == v23) {
        goto LABEL_19;
      }
    }
    v28 = *(_QWORD*)(v17 + 1680);
    *(_QWORD*)(v17 + 1728) = 0;
    *(_QWORD*)(v17 + 1736) = 0;
    v29 = *(_QWORD*)(v17 + 1688) - v28;
    if ((int)((unsigned __int64)v29 >> 2) >= 1) {
      v30 = *v4;
      v31 = (int)(v29 >> 2);
      if (v31 <= 1) {
        v32 = 1;
      }
      else {
        v32 = (int)(v29 >> 2);
      }
      if (v31 < 4) {
        v33 = 0;
        v34 = 0;
        v35 = 0;
        v36 = 0;
        v37 = 0;
        v38 = v32 & 3;
        if (v38 == 0) {
          goto LABEL_49;
        }
        goto LABEL_47;
      }
      v39 = (_DWORD*)(v28 + 8);
      v40 = 0;
      v33 = 0;
      v34 = 0;
      v35 = 0;
      v36 = 0;
      do {
        v40 -= 4;
        v41 = *(_QWORD*)(*(_QWORD*)(v30 + 64) + 8LL * (*(v39 - 2) & 0xFFF));
        v42 = v36 | (1 << *(_BYTE*)(v41 + 104));
        *(_WORD*)(v17 + 1728) = v42;
        v43 = (1LL << *(_BYTE*)(v41 + 250)) | v35;
        *(_QWORD*)(v17 + 1736) = v43;
        v44 = (1 << *(_BYTE*)(v41 + 115)) | v34;
        *(_DWORD*)(v17 + 1732) = v44;
        v45 = *(unsigned __int16*)(*(_QWORD*)(v41 + 24) + 1064LL) | v33;
        *(_WORD*)(v17 + 1730) = v45;
        v46 = *(_QWORD*)(*(_QWORD*)(v30 + 64) + 8LL * (*(v39 - 1) & 0xFFF));
        v47 = v42 | (1 << *(_BYTE*)(v46 + 104));
        *(_WORD*)(v17 + 1728) = v47;
        v48 = (1LL << *(_BYTE*)(v46 + 250)) | v43;
        *(_QWORD*)(v17 + 1736) = v48;
        v49 = (1 << *(_BYTE*)(v46 + 115)) | v44;
        *(_DWORD*)(v17 + 1732) = v49;
        v50 = *(unsigned __int16*)(*(_QWORD*)(v46 + 24) + 1064LL) | v45;
        *(_WORD*)(v17 + 1730) = v50;
        v51 = *(_QWORD*)(*(_QWORD*)(v30 + 64) + 8LL * (*v39 & 0xFFF));
        v52 = v47 | (1 << *(_BYTE*)(v51 + 104));
        *(_WORD*)(v17 + 1728) = v52;
        v53 = (1LL << *(_BYTE*)(v51 + 250)) | v48;
        *(_QWORD*)(v17 + 1736) = v53;
        v54 = (1 << *(_BYTE*)(v51 + 115)) | v49;
        *(_DWORD*)(v17 + 1732) = v54;
        v55 = *(unsigned __int16*)(*(_QWORD*)(v51 + 24) + 1064LL) | v50;
        *(_WORD*)(v17 + 1730) = v55;
        LOWORD(v51) = v39[1];
        v39 += 4;
        v56 = *(_QWORD*)(*(_QWORD*)(v30 + 64) + 8 * (v51 & 0xFFF));
        v36 = v52 | (1 << *(_BYTE*)(v56 + 104));
        *(_WORD*)(v17 + 1728) = v36;
        v35 = (1LL << *(_BYTE*)(v56 + 250)) | v53;
        *(_QWORD*)(v17 + 1736) = v35;
        v34 = (1 << *(_BYTE*)(v56 + 115)) | v54;
        *(_DWORD*)(v17 + 1732) = v34;
        v33 = *(unsigned __int16*)(*(_QWORD*)(v56 + 24) + 1064LL) | v55;
        *(_WORD*)(v17 + 1730) = v33;
      } while (-(__int64)(v32 & 0xFFFFFFFFFFFFFFFCLL) != v40);
      v37 = -v40;
      v38 = v32 & 3;
      if (v38 != 0) {
      LABEL_47:
        v57 = (int*)(v28 + 4 * v37);
        do {
          v58 = *v57++;
          --v38;
          v59 = *(_QWORD*)(*(_QWORD*)(v30 + 64) + 8LL * (v58 & 0xFFF));
          v36 |= 1 << *(_BYTE*)(v59 + 104);
          *(_WORD*)(v17 + 1728) = v36;
          v35 |= 1LL << *(_BYTE*)(v59 + 250);
          *(_QWORD*)(v17 + 1736) = v35;
          v34 |= 1 << *(_BYTE*)(v59 + 115);
          *(_DWORD*)(v17 + 1732) = v34;
          v33 |= *(unsigned __int16*)(*(_QWORD*)(v59 + 24) + 1064LL);
          *(_WORD*)(v17 + 1730) = v33;
        } while (v38 != 0);
      }
    }
  LABEL_49:
    *(_DWORD*)(v17 + 416) |= 0x20000000u;
    if (*(_QWORD*)(*(_QWORD*)(v26 + 24) + 448LL) !=
        *(_QWORD*)(*(_QWORD*)(v26 + 24) + 456LL)) {
      v60 = *(_WORD*)(v26 + 16) & 0xFFF;
      v62 = a1[1];
      v61 = a1[2];
      if (v62 < v61) {
        *(_QWORD*)v62 = v17;
        *(_DWORD*)(v62 + 8) = v60;
        v25 = v62 + 16;
      }
      else {
        v63 = *a1;
        v64 = a1;
        v65 = v62 - *a1;
        v66 = (v65 >> 4) + 1;
        if (v66 >> 60 != 0) {
          GameRoutine_edd9e0_alt1();
        }
        v67 = v61 - v63;
        if (v67 >> 3 > v66) {
          v66 = v67 >> 3;
        }
        if ((unsigned __int64)v67 >= 0x7FFFFFFFFFFFFFF0LL) {
          v68 = 0xFFFFFFFFFFFFFFFLL;
        }
        else {
          v68 = v66;
        }
        if (v68 != 0) {
          if (v68 >> 60 != 0) {
            GameRoutine_60a210_alt1();
          }
          v69 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v68, 16, 0);
        }
        else {
          v69 = 0;
        }
        v70 = v69 + v65;
        v71 = v69 + 16 * v68;
        *(_DWORD*)(v70 + 8) = v60;
        v72 = v69 + v65 - 16 * (v65 >> 4);
        *(_QWORD*)v70 = v17;
        v25 = v69 + v65 + 16;
        memcpy_alt1(v72, v63, v65);
        a1 = v64;
        *v64 = v72;
        v64[1] = v25;
        v64[2] = v71;
        if (v63 != 0) {
          v73 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v73 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v73, v63);
        }
        v4 = &GameData_21c99b0;
        v22 = v80;
        v16 = v81;
      }
      v23 = v82;
      a1[1] = v25;
    }
    goto LABEL_32;
  }
LABEL_67:
  if (v16 != 0) {
    v84_.v85 = v16;
    v74 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v74 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v74, v16);
  }
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

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
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
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    return std___1___shared_weak_count___release_weak_alt2(v3);
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
