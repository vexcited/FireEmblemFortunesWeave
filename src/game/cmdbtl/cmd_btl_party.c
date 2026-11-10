#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CmdBtlUnit_e79df0(_QWORD);
__int64 GameRoutine_e73e20(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (*game_cmdbtl_CmdBtlParty_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 CmdBtlParty_Destructor(__int64 a1);
_QWORD* GameRoutine_e7e340(_QWORD* __return_ptr);
__int64 GameReliance_8e17a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_6c9ab0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_e734e0(_QWORD);
__int64 GameRoutine_e779a0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_UnitItemList_EachItem(_QWORD, _QWORD);
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _DWORD GameData_1b91b08[3];
extern _QWORD GameData_1b91b20[3];
extern _UNKNOWN GameData_1af5ec9;
extern __int16* GameData_212cf08[9];
extern __int64 (**game_GameReliance_Impl_Data_vtable_ptr)();
extern __int64 (*GameData_1fe7bc8[])();
extern __int64 GameData_1a91b60;
extern __int64 GameData_1aa1704;
extern __int64 GameData_1ad3775;
extern __int64 GameData_1ae2cac;
extern __int64 GameData_21f4cc0;
extern __int64 GameData_2216820;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212dec0[4];
extern __int64* GameData_212ea58;
extern char GameData_2216858;
extern int GameData_1b91b14[];
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD);
__int64 CmdBtlParty_e73380(__int64 result);
__int64 CmdBtlParty_e76e80(__int64 a1, __int64* a2, __int64* a3,
                           unsigned int a4);
__int64 CmdBtlParty_e77060(unsigned int a1, __int64 a2, __int64* a3);
bool CmdBtlParty_e773c0(__int64 a1, __int64* a2, __int64* a3, unsigned int a4);
__int64 CmdBtlParty_e77750(__int64 a1, __int64* a2);
__int64 game_cmdbtl_CmdBtlParty_CanSkill_lambda0_Invoke(__int64 result,
                                                        unsigned __int16* a2);
__int64 game_cmdbtl_CmdBtlParty_CanArts_lambda0_Invoke(__int64 result,
                                                       _DWORD* a2);
__int64 game_cmdbtl_CmdBtlParty_IsHasCaptureUnit_lambda0_Invoke(__int64 result,
                                                                __int64* a2);
_WORD*
game_UnitItemList_EachItem_alt1(_WORD* result,
                                __int64) __asm__("game_UnitItemList_EachItem");
__int64 GameRoutine_eb5e20(__int64 result, __int64**);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_Unit_GetParam_alt1(__int64) __asm__("game_Unit_GetParam");
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64 (*GameData_1fe7c48[])();
extern __int64 (*GameData_1fe7cc8[])();
extern __int64 (*GameData_1fe7d48[])();
extern __int64 (*GameData_1fe7dc8[])();
extern __int64 (*GameData_1fe7e48[])();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_6c1f60();
void __attribute__((noreturn))
GameRoutine_8123d0_alt1() __asm__("GameRoutine_8123d0");
void __attribute__((noreturn)) GameRoutine_e77df0();
__n128 CmdBtlParty_e734e0(__int64 a1);
__int64 game_cmdbtl_CmdBtlParty_CanArts(__int64 a1, __int64* a2, __int64 a3,
                                        __int64 a4);
__int64 CmdBtlParty_e774a0(__int64 a1, __int64* a2);
__int64 game_cmdbtl_CmdBtlParty_GetLinkCause(__int64 a1, __int64 (**a2)(),
                                             int a3);

__int64 CmdBtlParty_Destructor(__int64 a1)
{
  __int64* v1;
  __int64* v2;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = *(__int64**)(a1 + 40);
  v2 = *(__int64**)(a1 + 48);
  *(_QWORD*)a1 = game_cmdbtl_CmdBtlParty_vtable;
  if (v1 != v2) {
    do {
      v4 = *v1;
      v1 += 2;
      CmdBtlUnit_e79df0(v4);
    } while (v1 != v2);
    v1 = *(__int64**)(a1 + 40);
    v2 = *(__int64**)(a1 + 48);
  }
  for (; v2 != v1; v2 -= 2) {
    v5 = *(v2 - 1);
    if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak();
    }
  }
  *(_QWORD*)(a1 + 48) = v1;
  *(_DWORD*)(a1 + 28) = 0;
  GameRoutine_e73e20(a1);
  if (*(_QWORD*)(a1 + 120) != 0) {
    std___1___shared_weak_count___release_weak();
  }
  if (*(_QWORD*)(a1 + 104) != 0) {
    std___1___shared_weak_count___release_weak();
  }
  if (*(_QWORD*)(a1 + 88) != 0) {
    std___1___shared_weak_count___release_weak();
  }
  result = *(_QWORD*)(a1 + 72);
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak();
  }
  v7 = *(_QWORD*)(a1 + 40);
  if (v7 != 0) {
    v8 = *(_QWORD*)(a1 + 48);
    if (v7 == v8) {
      goto LABEL_26;
    }
    do {
      v9 = *(_QWORD*)(v8 - 8);
      if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        result = std___1___shared_weak_count___release_weak();
      }
      v8 -= 16;
    } while (v8 != v7);
    v10 = *(_QWORD*)(a1 + 40);
    *(_QWORD*)(a1 + 48) = v7;
    if (v10 != 0) {
    LABEL_26:
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11);
    }
  }
  return result;
}

__int64 CmdBtlParty_e73380(__int64 result)
{
  __int64* v1;
  __int64* v2;
  _DWORD* v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _BOOL4 v10;
  int v11;
  int v12;
  int v13;
  _BYTE v14[4];

  v1 = *(__int64**)(result + 40);
  v2 = *(__int64**)(result + 48);
  v3 = (_DWORD*)result;
  if (v1 != v2) {
    v4 = 0;
    while (1) {
      v6 = *v1;
      v7 = *(_QWORD*)(*v1 + 320);
      if (v7 != 0) {
        v8 = std___1___shared_weak_count_lock(v7);
        if (v8 != 0) {
          v9 = *(_QWORD*)(v6 + 312);
          v10 = v9 == 0 || (*(_BYTE*)(*(_QWORD*)v9 + 76LL) & 8) == 0;
          if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                               0xFFFFFFFFFFFFFFFFLL) != 0) {
            if (!v10) {
              goto LABEL_14;
            }
          }
          else {
            (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
            std___1___shared_weak_count___release_weak();
            if (!v10) {
            LABEL_14:
              result = 0;
              goto LABEL_4;
            }
          }
        }
      }
      v5 = *(_QWORD*)(v6 + 16);
      v14[0] = 0;
      result = game_Unit_GetParam(v5, v14, 1);
    LABEL_4:
      v4 += result;
      v1 += 2;
      if (v1 == v2) {
        goto LABEL_16;
      }
    }
  }
  v4 = 0;
LABEL_16:
  v11 = v3[3];
  if (v4 <= 1) {
    v12 = 1;
  }
  else {
    v12 = v4;
  }
  v13 = v3[5] + v12;
  if (v13 <= 1) {
    v13 = 1;
  }
  if (v13 >= (unsigned int)v11) {
    v13 = v3[3];
  }
  if (v11 < 0) {
    v13 = 0;
  }
  v3[3] = v13;
  v3[4] = v12;
  if (v13 != v11) {
    return GameRoutine_e734e0(v3);
  }
  return result;
}

__n128 CmdBtlParty_e734e0(__int64 a1)
{
  __int64* v1;
  __int64* v2;
  __int64 v3;
  char* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __n128 result;
  __int64 v10;
  _BOOL4 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  int v17;
  __int64* v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  unsigned __int64 v22;
  signed __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  char* v38;
  __int64 v39;
  __int64 v40;
  __int64 v42;
  __int64 v43;
  char* v45;
  struct {
    __int64* v46;
    __int64* v47;
    unsigned __int64 v48;
    char gap40_[4];
    char v49;
  } v46_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((*(_BYTE*)(GameData_21f4cc0 + 12) & 1) != 0) {
    return result;
  }
  if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) == 0) {
    if ((GameData_2216858 & 1) == 0) {
      GameRoutine_8123d0_alt1(),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    if ((GameData_2216820 & 8) != 0) {
      return result;
    }
  }
  v1 = *(__int64**)(a1 + 40);
  v2 = *(__int64**)(a1 + 48);
  v46_.v47 = nullptr;
  v46_.v48 = 0;
  v46_.v46 = nullptr;
  if (v1 == v2) {
    goto LABEL_75;
  }
  v3 = 0;
  v4 = nullptr;
  v5 = 0;
  do {
    v6 = *v1;
    v7 = *(_QWORD*)(*v1 + 320);
    if (v7 != 0) {
      v8 = std___1___shared_weak_count_lock(v7),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v8 != 0) {
        v10 = *(_QWORD*)(v6 + 312);
        v11 = v10 == 0 || (*(_BYTE*)(*(_QWORD*)v10 + 76LL) & 8) == 0;
        if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (!v11) {
            goto LABEL_8;
          }
        }
        else {
          v12 = v8;
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          result = std___1___shared_weak_count___release_weak_alt1(v12);
          if (!v11) {
            goto LABEL_8;
          }
        }
      }
    }
    v13 = *(_QWORD*)(*v1 + 16);
    if (v13 != 0) {
      v14 = *(_DWORD*)(v6 + 196);
      if (v14 != *(__int16*)(v13 + 492)) {
        v46_.v49 = 0;
        v15 = game_Unit_GetParam_alt1(v13),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (*(_WORD*)(v13 + 494) != 0 && v14 != *(__int16*)(v13 + 494)) {
          *(_WORD*)(v13 + 494) = 0;
        }
        if (v15 >= v14) {
          v17 = v14;
        }
        else {
          v17 = v15;
        }
        if (v14 < 0) {
          v17 = 0;
        }
        if (v17 != *(__int16*)(v13 + 492)) {
          *(_WORD*)(v13 + 492) = v17;
        }
      }
      v18 = v46_.v47;
      if ((unsigned __int64)v46_.v47 >= v46_.v48) {
        v20 = v46_.v46;
        v45 = v4;
        v21 = v3;
        v22 = v5;
        v23 = (char*)v46_.v47 - (char*)v46_.v46;
        v24 = v46_.v47 - v46_.v46;
        v25 = v24 + 1;
        if ((unsigned __int64)(v24 + 1) >> 61 != 0) {
          GameRoutine_6c1f60(),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        v26 = v46_.v48 - (_QWORD)v46_.v46;
        if ((__int64)(v46_.v48 - (_QWORD)v46_.v46) >> 2 > v25) {
          v25 = v26 >> 2;
        }
        if ((unsigned __int64)v26 >= 0x7FFFFFFFFFFFFFF8LL) {
          v27 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v27 = v25;
        }
        if (v27 != 0) {
          if (v27 >> 61 != 0) {
            goto LABEL_80;
          }
          v28 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v27, 16, 0),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        else {
          v28 = 0;
        }
        v29 = v28 + 8 * v27;
        v30 = (__int64*)(v28 + v23 - 8 * v24);
        *(_QWORD*)(v28 + v23) = v13;
        v19 = v28 + v23 + 8;
        memcpy(v30, v20, v23),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        v46_.v46 = v30;
        v46_.v48 = v29;
        if (v20 != nullptr) {
          v31 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v31 = 56;
          }
          result = nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v31);
        }
        v5 = v22;
        v3 = v21;
        v4 = v45;
      }
      else {
        *v46_.v47 = v13;
        v19 = (__int64)(v18 + 1);
      }
      v46_.v47 = (__int64*)v19;
      v32 = *v1;
      if ((unsigned __int64)v4 < v5) {
        *(_QWORD*)v4 = v32;
        v4 += 8;
      }
      else {
        v33 = &v4[-v3];
        v34 = (__int64)&v4[-v3] >> 3;
        v35 = v34 + 1;
        if ((unsigned __int64)(v34 + 1) >> 61 != 0) {
          GameRoutine_e77df0(),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        if ((__int64)(v5 - v3) >> 2 > v35) {
          v35 = (__int64)(v5 - v3) >> 2;
        }
        if (v5 - v3 >= 0x7FFFFFFFFFFFFFF8LL) {
          v36 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v36 = v35;
        }
        if (v36 != 0) {
          if (v36 >> 61 != 0) {
          LABEL_80:
            GameRoutine_60a210(),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          v37 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v36, 16, 0),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        else {
          v37 = 0;
        }
        v5 = v37 + 8 * v36;
        v38 = &v4[-v3];
        v39 = (__int64)&v33[v37 + -8 * v34];
        *(_QWORD*)&v33[v37] = v32;
        v4 = &v33[v37 + 8];
        memcpy(v39, v3, v38),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (v3 != 0) {
          v40 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v40 = 56;
          }
          result = nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v40);
        }
        v3 = v39;
      }
    }
  LABEL_8:
    v1 += 2;
  } while (v1 != v2);
  if (v46_.v47 != v46_.v46 &&
      (char*)v46_.v47 - (char*)v46_.v46 == (_QWORD)&v4[-v3]) {
    GameRoutine_eb5e20(*(unsigned int*)(a1 + 12), &v46_.v46),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if (v3 != 0) {
    v42 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v42 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v42);
  }
LABEL_75:
  if (v46_.v46 != nullptr) {
    v46_.v47 = v46_.v46;
    v43 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v43 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v43);
  }
  return result;
}

__int64 game_cmdbtl_CmdBtlParty_CanArts(__int64 a1, __int64* a2, __int64 a3,
                                        __int64 a4)
{
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  char v14;
  struct {
    _QWORD v16[4];
    _QWORD* v17;
  } v16_;
  char v18;

  if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) == 0) {
    if ((GameData_2216858 & 1) == 0) {
      GameRoutine_8123d0_alt1();
    }
    if ((GameData_2216820 & 8) != 0) {
      v14 = 0;
      return v14 & 1;
    }
  }
  v4 = *a2;
  v18 = 0;
  v5 = *(_QWORD*)(v4 + 16);
  v16_.v16[0] = GameData_1fe7d48;
  v16_.v16[1] = a1;
  v6 = v16_.v16;
  v16_.v16[2] = a2;
  v16_.v16[3] = &v18;
  v16_.v17 = v16_.v16;
  if ((*(_BYTE*)(v5 + 1536) & 4) != 0) {
    v7 = *(_QWORD*)(v5 + 1496);
    v8 = *(_QWORD*)(v5 + 1488);
    if ((int)((unsigned __int64)(v7 - v8) >> 2) < 1) {
      v6 = v16_.v16;
    }
    else {
      v9 = 0;
      v10 = 0;
      v11 = GameData_212c880[0];
      v12 = *GameData_212c880[0];
      do {
        if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v12 + 64) +
                                 8LL * (*(_DWORD*)(v8 + v9) & 0xFFF)) +
                      104LL) == 2) {
          if (v16_.v17 == nullptr) {
            GameRoutine_60a310();
          }
          (*(void (**)(_QWORD*, __int64))(*v16_.v17 + 48LL))(v16_.v17, v8 + v9);
          v12 = *v11;
          v7 = *(_QWORD*)(v5 + 1496);
          v8 = *(_QWORD*)(v5 + 1488);
        }
        ++v10;
        v9 += 4;
      } while (v10 < (int)((unsigned __int64)(v7 - v8) >> 2));
      v6 = v16_.v17;
      if (v16_.v17 != v16_.v16) {
        if (v16_.v17 == nullptr) {
        LABEL_18:
          v14 = v18;
          return v14 & 1;
        }
        v13 = 40;
      LABEL_17:
        (*(void (**)(_QWORD*, __int64*, __int64, __int64))(*v6 + v13))(v6, a2,
                                                                       a3, a4);
        goto LABEL_18;
      }
    }
  }
  v13 = 32;
  goto LABEL_17;
}

__int64 CmdBtlParty_e76e80(__int64 a1, __int64* a2, __int64* a3,
                           unsigned int a4)
{
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int64 result;
  unsigned int v15;
  int v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  _QWORD v20[2];
  _QWORD v21[2];
  __int64 v22;
  __int64 v23;
  _QWORD v24[2];

  if (*a3 == 0 || *a2 == *a3) {
    return 128;
  }
  GameRoutine_e7e340(&v22);
  v8 = 0;
  if (v22 == 0 && a4 <= 2) {
    v8 = GameData_1b91b08[a4];
  }
  v9 = *a2;
  v10 = a2[1];
  v21[0] = v9;
  v21[1] = v10;
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
  }
  v11 = *a3;
  v12 = a3[1];
  v20[0] = v11;
  v20[1] = v12;
  if (v12 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                              memory_order_relaxed);
    v13 = CmdBtlParty_e77060(a4, v21, v20);
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak();
    }
  }
  else {
    v13 = CmdBtlParty_e77060(a4, v21, v20);
  }
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak();
  }
  v15 = v8 | (8 * (v13 >> 31));
  if (*(_DWORD*)(a1 + 8) == 0 && (*(_BYTE*)(GameData_21f4cc0 + 12) & 1) == 0) {
    v24[1] = &GameData_1af5ec9;
    v24[0] = game_HashString(&GameData_1af5ec9);
    v16 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_19;
    }
    v19 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v24);
    if (v19 != 0) {
      v16 = *(_DWORD*)(v19 + 32);
      goto LABEL_19;
    }
  }
  v16 = 0;
LABEL_19:
  v17 = v23;
  if (v16 >= (int)v13) {
    result = v15;
  }
  else {
    result = v15 + 1;
  }
  if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    v18 = result;
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak();
    return v18;
  }
  return result;
}

__int64 CmdBtlParty_e77060(unsigned int a1, __int64 a2, __int64* a3)
{
  __int64 v3;
  __int64 v4;
  char* v6;
  __int64 v7;
  char* v9;
  __int64 v11;
  char* v12;
  bool v13;
  __int64 result;
  __int64 v15;
  char* v16;
  __int64 v17;
  unsigned int v18;
  __int64 (***v19)();
  int v20;
  __int64* v21;
  int v22;
  unsigned __int64 v23;
  char* v24;
  unsigned int v25;
  __int64 v26;
  unsigned int v27;
  __int64 v28;
  __int64 v29;
  char* v30;
  char* v31;
  __int64 v32;
  unsigned __int64 v33;
  char* v34;
  char v35;
  char v36[23];

  if (*(_QWORD*)a2 == 0) {
    return 0xFFFFFFFFLL;
  }
  v3 = *a3;
  if (*a3 == 0) {
    return 0xFFFFFFFFLL;
  }
  v4 = *(_QWORD*)(*(_QWORD*)a2 + 16LL);
  v34 = nullptr;
  v35 = 20;
  strcpy(&v36[8], "v1");
  v32 = v4;
  v33 = 0;
  *(_QWORD*)v36 = 0x4CB48FE6AF94E65FLL;
  if (v4 != 0) {
    v6 = *(char**)(v4 + 392);
    v33 = (unsigned __int64)v6;
    if (v6 != nullptr) {
      v6 = *(char**)(*(_QWORD*)(*((_QWORD*)v6 + 3) + 1784LL) + 272LL);
    }
    v34 = v6;
  }
  v7 = *(_QWORD*)(v3 + 16);
  v31 = nullptr;
  v29 = v7;
  v30 = nullptr;
  if (v7 != 0) {
    v9 = *(char**)(v7 + 392);
    v30 = v9;
    if (v9 != nullptr) {
      v9 = *(char**)(*(_QWORD*)(*((_QWORD*)v9 + 3) + 1784LL) + 272LL);
    }
    v31 = v9;
  }
  if ((GameReliance_8e17a0(*(_QWORD*)(game_GameModeData_instance_ + 128), &v32,
                           &v29) &
       0x80000000) == 0) {
    v11 = *(_QWORD*)(*(_QWORD*)a2 + 16LL);
    v34 = nullptr;
    v32 = v11;
    v33 = 0;
    if (v11 != 0) {
      v12 = *(char**)(v11 + 392);
      v33 = (unsigned __int64)v12;
      if (v12 != nullptr) {
        v12 = *(char**)(*(_QWORD*)(*((_QWORD*)v12 + 3) + 1784LL) + 272LL);
      }
      v34 = v12;
      v13 = v12 == nullptr;
    }
    else {
      v13 = true;
    }
    v15 = *(_QWORD*)(*a3 + 16);
    v29 = v15;
    if (v15 == 0) {
      goto LABEL_25;
    }
    v16 = *(char**)(v15 + 392);
    v30 = v16;
    if (v16 == nullptr) {
      goto LABEL_25;
    }
    v31 = *(char**)(*(_QWORD*)(*((_QWORD*)v16 + 3) + 1784LL) + 272LL);
    if (v31 == nullptr) {
      v13 = true;
    }
    if (v13 ||
        (v17 = *(_QWORD*)(game_GameModeData_instance_ + 128),
         ((v18 = GameReliance_8e17a0(v17, &v32, &v29)) & 0x80000000) != 0)) {
    LABEL_25:
      v19 = &game_GameReliance_Impl_Data_vtable_ptr;
    }
    else {
      v19 = (__int64 (***)())(*(_QWORD*)(v17 + 8) + 56LL * v18);
    }
    v20 = *((unsigned __int8*)v19 + 11);
    v35 = 20;
    if (v20 > 3) {
      if (v20 == 4) {
        *(_WORD*)&v36[8] = 13430;
        v21 = &GameData_1ae2cac;
        goto LABEL_36;
      }
      if (v20 == 5) {
        *(_WORD*)&v36[8] = 13686;
        v21 = &GameData_1a91b60;
        goto LABEL_36;
      }
    }
    else {
      if (v20 == 2) {
        *(_WORD*)&v36[8] = 12918;
        v21 = &GameData_1aa1704;
        goto LABEL_36;
      }
      if (v20 == 3) {
        *(_WORD*)&v36[8] = 13174;
        v21 = &GameData_1ad3775;
      LABEL_36:
        *(_QWORD*)v36 = *v21;
        goto LABEL_37;
      }
    }
    *(_QWORD*)v36 = 0x4CB48FE6AF94E65FLL;
    *(_WORD*)&v36[8] = 12662;
  LABEL_37:
    v36[10] = 0;
  }
  v33 = 0;
  v34 = nullptr;
  v32 = 0;
  if (a1 <= 2) {
    GameRoutine_60a020(&v32, (char*)GameData_1b91b14 + GameData_1b91b14[a1]);
  }
  GameRoutine_1a09ce0(&v32, v36, 10);
  v22 = v32 & 1;
  v23 = (unsigned __int64)(unsigned __int8)v32 >> 1;
  if (v22 != 0) {
    v23 = v33;
  }
  if (v23 != 0) {
    if (v22 != 0) {
      v24 = v34;
    }
    else {
      v24 = (char*)&v32 + 1;
    }
    v30 = v24;
    v29 = game_HashString(v24);
    if (game_GameModeData_instance_ != 0) {
      result = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &v29);
      if (result != 0) {
        result = *(unsigned int*)(result + 32);
      }
    }
    else {
      result = 0;
    }
    if ((v32 & 1) == 0) {
      goto LABEL_57;
    }
    goto LABEL_53;
  }
  result = 0xFFFFFFFFLL;
  if (v22 != 0) {
  LABEL_53:
    if (v34 != nullptr) {
      v25 = result;
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v26);
      result = v25;
    }
  }
LABEL_57:
  if ((v35 & 1) != 0 && *(_QWORD*)&v36[15] != 0) {
    v27 = result;
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v28);
    return v27;
  }
  return result;
}

bool CmdBtlParty_e773c0(__int64 a1, __int64* a2, __int64* a3, unsigned int a4)
{
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v8[2];
  __int64 v9[2];

  v4 = a2[1];
  v9[0] = *a2;
  v9[1] = v4;
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
  }
  v5 = a3[1];
  v8[0] = *a3;
  v8[1] = v5;
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
    v6 = CmdBtlParty_e76e80(a1, v9, v8, a4);
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak();
    }
  }
  else {
    v6 = CmdBtlParty_e76e80(a1, v9, v8, a4);
  }
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak();
  }
  return v6 == 0;
}

__int64 CmdBtlParty_e774a0(__int64 a1, __int64* a2)
{
  __int64* v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _WORD* v10;
  __int64 i;
  __int64 v12;
  char v13;
  char v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _WORD* v18;
  __int64 j;
  __int64 v20;
  struct {
    __int64 v22;
    __int64 v23;
  } v22_;
  struct {
    __int64 v24;
    __int64 v25;
  } v24_;
  struct {
    _QWORD v26[2];
    __int64* v27;
    __int64 v28;
    _QWORD* v29;
  } v26_;
  _BYTE v30[4];

  v4 = GameData_212dec0[0];
  v5 = *GameData_212dec0[0];
  v6 = *(unsigned __int8*)(*GameData_212dec0[0] + 13);
  if (*(_BYTE*)(*GameData_212dec0[0] + 13) == 0) {
    if ((GameData_2216858 & 1) == 0) {
      goto LABEL_46;
    }
    if ((GameData_2216820 & 8) != 0) {
    LABEL_24:
      v14 = 0;
      return v14 & 1;
    }
  }
  v7 = *a2;
  v8 = a2[1];
  v24_.v24 = *a2;
  v24_.v25 = v8;
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
    v6 = *(unsigned __int8*)(v5 + 13);
  }
  if (v6 == 0) {
    if ((GameData_2216858 & 1) == 0) {
      goto LABEL_46;
    }
    if ((GameData_2216820 & 8) != 0) {
      v13 = 0;
      if (v8 == 0) {
        goto LABEL_23;
      }
      goto LABEL_20;
    }
  }
  v9 = *(_QWORD*)(v7 + 16);
  v30[0] = 0;
  v26_.v26[0] = GameData_1fe7c48;
  v26_.v26[1] = v30;
  v26_.v27 = &v24_.v24;
  v26_.v28 = a1;
  v26_.v29 = v26_.v26;
  game_UnitItemList_EachItem_alt1((_WORD*)(v9 + 828), (__int64)v26_.v26);
  v10 = (_WORD*)(v9 + 876);
  for (i = 24; i != 0; --i) {
    if (*v10 != 0) {
      if (v26_.v29 == nullptr) {
      LABEL_35:
        GameRoutine_60a310();
      }
      (*(void (**)(_QWORD*, _WORD*))(*v26_.v29 + 48LL))(v26_.v29, v10);
    }
    v10 += 4;
  }
  if (v26_.v29 == v26_.v26) {
    v12 = 32;
  }
  else {
    if (v26_.v29 == nullptr) {
      goto LABEL_19;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v26_.v29 + v12))((__int64)v26_.v29);
LABEL_19:
  v13 = v30[0];
  v8 = v24_.v25;
  if (v24_.v25 != 0) {
  LABEL_20:
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak_alt1(v8);
    }
  }
LABEL_23:
  if ((v13 & 1) != 0) {
    goto LABEL_24;
  }
  v15 = *a2;
  v16 = a2[1];
  v22_.v22 = v15;
  v22_.v23 = v16;
  if (v16 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                              memory_order_relaxed);
  }
  if ((*(_BYTE*)(*v4 + 13) & 1) != 0) {
  LABEL_30:
    v17 = *(_QWORD*)(v15 + 16);
    v30[0] = 0;
    v26_.v26[0] = GameData_1fe7cc8;
    v26_.v26[1] = v30;
    v26_.v27 = &v22_.v22;
    v26_.v28 = a1;
    v26_.v29 = v26_.v26;
    game_UnitItemList_EachItem_alt1((_WORD*)(v17 + 828), (__int64)v26_.v26);
    v18 = (_WORD*)(v17 + 876);
    for (j = 24; j != 0; --j) {
      if (*v18 != 0) {
        if (v26_.v29 == nullptr) {
          goto LABEL_35;
        }
        (*(void (**)(_QWORD*, _WORD*))(*v26_.v29 + 48LL))(v26_.v29, v18);
      }
      v18 += 4;
    }
    if (v26_.v29 == v26_.v26) {
      v20 = 32;
    }
    else {
      if (v26_.v29 == nullptr) {
        goto LABEL_41;
      }
      v20 = 40;
    }
    (*(void (**)(_QWORD*))(*v26_.v29 + v20))(v26_.v29);
  LABEL_41:
    v16 = v22_.v23;
    v14 = v30[0] ^ 1;
    if (v22_.v23 == 0) {
      return v14 & 1;
    }
    goto LABEL_42;
  }
  if ((GameData_2216858 & 1) == 0) {
  LABEL_46:
    GameRoutine_8123d0_alt1();
  }
  if ((GameData_2216820 & 8) == 0) {
    goto LABEL_30;
  }
  v14 = 1;
  if (v16 == 0) {
    return v14 & 1;
  }
LABEL_42:
  if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak_alt1(v16);
  }
  return v14 & 1;
}

__int64 CmdBtlParty_e77750(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  int v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 result;
  int v17;
  __int64 v18;
  int v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;

  v2 = *a2;
  v3 = a2[1];
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
    v22 = v3;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
  else {
    v22 = 0;
  }
  v21 = v2;
  v6 = GameRoutine_e779a0(a1, &v21, 0);
  v7 = v22;
  v8 = v6;
  if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak();
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak();
    if (v8 == 0) {
      return 1;
    }
  }
  else if (v8 == 0) {
    return 1;
  }
  v9 = *a2;
  v10 = a2[1];
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
    v22 = v10;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
  }
  else {
    v22 = 0;
  }
  v21 = v9;
  v11 = GameRoutine_e779a0(a1, &v21, 1);
  v12 = v22;
  v13 = v11;
  if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak();
  }
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak();
    if (v13 != 0) {
      goto LABEL_21;
    }
    return 1;
  }
  if (v13 == 0) {
    return 1;
  }
LABEL_21:
  v14 = *a2;
  v15 = a2[1];
  if (v15 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                              memory_order_relaxed);
    v22 = v15;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                              memory_order_relaxed);
  }
  else {
    v22 = 0;
  }
  v21 = v14;
  v17 = GameRoutine_e779a0(a1, &v21, 2);
  v18 = v22;
  if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    v19 = v17;
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    std___1___shared_weak_count___release_weak();
    v17 = v19;
  }
  result = v17 == 0;
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    v20 = result;
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak();
    return v20;
  }
  return result;
}

__int64 game_cmdbtl_CmdBtlParty_GetLinkCause(__int64 a1, __int64 (**a2)(),
                                             int a3)
{
  int v5;
  __int64 (*v6)();
  __int64 v7;
  __int64* v8;
  _QWORD* v9;
  _WORD* v10;
  __int64 i;
  int v12;
  int v13;
  __int64 v14;
  __int64 (***v15)();
  __int64 (**v16)();
  __int64 (***v17)();
  __int64* v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  int* v24;
  int v25;
  unsigned int v26;
  int v27;
  int* v28;
  int v29;
  int v30;
  int* v31;
  int v32;
  int v33;
  int* v34;
  int v35;
  char* v36;
  char v37;
  __int64 v38;
  __int64 v39;
  struct {
    int* v41;
    int* v42;
    __int64 v43;
    char gap24_[8];
    _QWORD* v44;
  } v41_;
  char v45;
  int v46;
  struct {
    __int64 v47;
    __int64 v48;
  } v47_;

  v46 = a3;
  if ((*(_BYTE*)(*GameData_212dec0[0] + 13) & 1) != 0) {
    v5 = 0;
  }
  else {
    if ((GameData_2216858 & 1) == 0) {
      GameRoutine_8123d0_alt1();
    }
    v5 = (8 * GameData_2216820) & 0x40;
  }
  v6 = *a2;
  v45 = 0;
  v7 = *((_QWORD*)v6 + 2);
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  v9[4] = a1;
  v41_.v44 = v9;
  *v9 = GameData_1fe7dc8;
  v9[1] = &v45;
  v9[2] = a2;
  v9[3] = &v46;
  game_UnitItemList_EachItem_alt1((_WORD*)(v7 + 828), (__int64)&v41_.v41);
  v10 = (_WORD*)(v7 + 876);
  for (i = 24; i != 0; --i) {
    if (*v10 != 0) {
      (*(void (**)(_QWORD*, _WORD*))(*v9 + 48LL))(v9, v10);
    }
    v10 += 4;
  }
  (*(void (**)(_QWORD*))(*v9 + 40LL))(v9);
  if (v45 != 0) {
    v12 = v5;
  }
  else {
    v12 = v5 | 0x20;
  }
  if (v46 == 1) {
    v13 = *(_DWORD*)(a1 + 20) + *(_DWORD*)(a1 + 16);
    if (v13 <= 1) {
      v13 = 1;
    }
    if (*(_DWORD*)(a1 + 12) >= v13) {
      v12 |= 0x10u;
    }
  }
  v14 = *v8;
  v41_.v42 = nullptr;
  v41_.v43 = 0;
  v41_.v41 = nullptr;
  v15 =
      (__int64 (***)(void))fw_memory_HeapManager_Allocate_alt1(v14, 40, 16, 0);
  v16 = GameData_1fe7e48;
  v17 = v15;
  v15[4] = (__int64 (**)(void))a1;
  *v15 = GameData_1fe7e48;
  v15[1] = (__int64 (**)(void))&v41_.v41;
  v15[2] = a2;
  v15[3] = (__int64 (**)(void))&v46;
  v18 = *(__int64**)(a1 + 40);
  v19 = *(__int64**)(a1 + 48);
  if (v18 != v19) {
    do {
      v47_.v47 = *v18;
      v20 = v18[1];
      v47_.v48 = v20;
      if (v20 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                                  memory_order_relaxed);
      }
      ((void (*)(__int64 (***)(void), __int64*))(*v17)[6])(v17, &v47_.v47);
      v21 = v47_.v48;
      if (v47_.v48 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v47_.v48 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
        std___1___shared_weak_count___release_weak_alt1(v21);
      }
      v18 += 2;
    } while (v18 != v19);
    v16 = *v17;
  }
  ((void (*)(__int64 (***)(void)))v16[5])(v17);
  if (v41_.v42 == v41_.v41) {
    if (v46 == 1) {
      v26 = v12 | 4;
    }
    else {
      v26 = v12 | 2;
    }
  }
  else {
    v22 = v41_.v42 - v41_.v41;
    v23 = 0;
    v24 = v41_.v41;
    do {
      v25 = *v24++;
      if (v25 != 0) {
        ++v23;
      }
    } while (v24 != v41_.v42);
    if (v22 == v23) {
      v26 = v12 | 0x80;
    }
    else {
      v26 = v12;
    }
    if ((v26 & 0x80) != 0) {
      v27 = 0;
      v28 = v41_.v41;
      do {
        v29 = *v28++;
        v27 += (v29 & 8) != 0;
      } while (v28 != v41_.v42);
      if (v22 == v27) {
        v26 |= 8u;
      }
      else {
        v30 = 0;
        v31 = v41_.v41;
        do {
          v32 = *v31++;
          v30 += (v32 & 2) != 0;
        } while (v31 != v41_.v42);
        if (v22 == v30) {
          v26 |= 2u;
        }
        else {
          v33 = 0;
          v34 = v41_.v41;
          do {
            v35 = *v34++;
            v33 += (v35 & 4) != 0;
          } while (v34 != v41_.v42);
          if (v22 == v33) {
            v26 |= 4u;
          }
          else {
            v36 = (char*)v41_.v41;
            while (1) {
              v37 = *v36;
              v36 += 4;
              if ((v37 & 1) != 0) {
                break;
              }
              if (v36 == (char*)v41_.v42) {
                goto LABEL_55;
              }
            }
            v26 |= 1u;
          }
        }
      }
    }
  }
LABEL_55:
  if (v41_.v41 != nullptr) {
    v38 = *v8;
    v41_.v42 = v41_.v41;
    v39 = 128;
    if (*(_QWORD*)(v38 + 200) == 0) {
      v39 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v38 + v39);
  }
  return v26;
}

__int64 game_cmdbtl_CmdBtlParty_CanSkill_lambda0_Invoke(__int64 result,
                                                        unsigned __int16* a2)
{
  __int64* v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _DWORD* v7;
  int v8;
  __int64 v9;
  int v10;

  v2 = *(__int64**)(result + 16);
  v4 = result;
  v5 = *v2;
  v6 = v2[1];
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
  }
  v7 = *(_DWORD**)(result + 24);
  v8 = **(unsigned __int16**)(result + 32);
  if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) == 0) {
    if ((GameData_2216858 & 1) == 0) {
      GameRoutine_8123d0(result);
    }
    if ((GameData_2216820 & 8) != 0) {
      goto LABEL_13;
    }
  }
  result = GameRoutine_6c9ab0(*(_QWORD*)(v5 + 16), *(_QWORD*)(result + 24), a2);
  if ((result & 1) == 0 ||
      (v9 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                       8LL * (*v7 & 0xFFF)),
       (v8 & ~*(unsigned __int16*)(v9 + 248)) != 0) ||
      (((unsigned __int16)*GameData_212cf08[0] >> *(_BYTE*)(v9 + 104)) & 1) !=
              0 &&
          *(_QWORD*)(v9 + 576) == 0 && *(_WORD*)(v9 + 136) != 0 &&
          *(_BYTE*)(*(_QWORD*)(v9 + 24) + 1112LL) == 1 &&
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                8LL * *a2) +
                     192LL) != v9) {
  LABEL_13:
    v10 = 0;
    if (v6 == 0) {
      goto LABEL_15;
    }
  }
  else {
    v10 = 1;
    if (v6 == 0) {
    LABEL_15:
      if (v10 == 0) {
        return result;
      }
      goto LABEL_16;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    goto LABEL_15;
  }
  (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
  result = std___1___shared_weak_count___release_weak();
  if (v10 != 0) {
  LABEL_16:
    **(_BYTE**)(v4 + 8) = 1;
  }
  return result;
}

__int64 game_cmdbtl_CmdBtlParty_CanArts_lambda0_Invoke(__int64 result,
                                                       _DWORD* a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _WORD* v10;
  __int64 i;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _BYTE v31[32];
  _QWORD* v32;
  char v33;
  __int16 v34;

  v3 = *(_QWORD*)(result + 8);
  v2 = *(__int64**)(result + 16);
  v5 = result;
  v6 = *v2;
  v7 = v2[1];
  v29 = *v2;
  v30 = v7;
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
  }
  v34 = 258;
  if ((*(_BYTE*)(*GameData_212dec0[0] + 13) & 1) != 0) {
    goto LABEL_6;
  }
  if ((GameData_2216858 & 1) == 0) {
    GameRoutine_8123d0(result);
  }
  if ((GameData_2216820 & 8) == 0) {
  LABEL_6:
    v33 = 0;
    v8 = *(_QWORD*)(v6 + 16);
    v9 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
    v32 = v9;
    *v9 = GameData_1fe7bc8;
    v9[1] = &v33;
    v9[2] = &v29;
    v9[3] = a2;
    v9[4] = &v34;
    v9[5] = v3;
    game_UnitItemList_EachItem(v8 + 828, v31);
    v10 = (_WORD*)(v8 + 876);
    for (i = 24; i != 0; --i) {
      if (*v10 != 0) {
        (*(void (**)(_QWORD*, _WORD*))(*v9 + 48LL))(v9, v10);
      }
      v10 += 4;
    }
    result = (*(__int64 (**)(_QWORD*))(*v9 + 40LL))(v9);
    if ((v33 & 1) != 0) {
      v12 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                       8LL * (*a2 & 0xFFF));
      if ((((unsigned __int16)*GameData_212cf08[0] >> *(_BYTE*)(v12 + 104)) &
           1) != 0) {
        if ((unsigned int)*(unsigned __int8*)(v12 + 106) - 2 < 5) {
          goto LABEL_18;
        }
        v13 = *(_QWORD*)(v12 + 576);
        if (v13 != 0) {
          v14 = *(unsigned __int8*)(v13 + 72);
          v15 = (1LL << *(_BYTE*)(v13 + 73)) & 0x7DC;
          if (v14 <= 7 && v15 != 0) {
            goto LABEL_18;
          }
        }
      }
      else {
        v21 = *(_QWORD*)(v12 + 664);
        v22 = *(unsigned __int8*)(v12 + 250);
        if (v21 != 0 || v22 == 28) {
        LABEL_18:
          v17 = *(_QWORD*)(v3 + 88);
          if (v17 != 0) {
            v18 = *(_QWORD*)(v3 + 80);
            v19 = *(_QWORD*)(v3 + 88);
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                                      memory_order_relaxed);
            v20 = std___1___shared_weak_count_lock(v19);
            result = std___1___shared_weak_count___release_weak();
            if (v20 != 0) {
              if (v18 == 0) {
                goto LABEL_36;
              }
              goto LABEL_21;
            }
          }
          goto LABEL_39;
        }
      }
      v24 = *(unsigned int*)(v3 + 8);
      if ((unsigned int)v24 > 2) {
        v25 = 3;
      }
      else {
        v25 = GameData_1b91b20[v24];
      }
      v26 = *GameData_212ea58 + (v25 << 7);
      v17 = *(_QWORD*)(v26 + 760);
      if (v17 != 0) {
        v18 = *(_QWORD*)(v26 + 752);
        v27 = *(_QWORD*)(v26 + 760);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                                  memory_order_relaxed);
        v20 = std___1___shared_weak_count_lock(v27);
        result = std___1___shared_weak_count___release_weak();
        if (v20 != 0) {
          if (v18 == 0) {
          LABEL_36:
            if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
              result = std___1___shared_weak_count___release_weak();
            }
            if (v18 != 0) {
              goto LABEL_40;
            }
            goto LABEL_39;
          }
        LABEL_21:
          v17 = *(_QWORD*)(v18 + 16);
          goto LABEL_36;
        }
      }
    LABEL_39:
      v17 = 0;
    LABEL_40:
      v28 = v30;
      if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
        result = std___1___shared_weak_count___release_weak();
      }
      if (v17 != 0) {
        **(_BYTE**)(v5 + 24) = 1;
      }
      return result;
    }
    v7 = v30;
  }
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    return std___1___shared_weak_count___release_weak();
  }
  return result;
}

__int64 game_cmdbtl_CmdBtlParty_IsHasCaptureUnit_lambda0_Invoke(__int64 result,
                                                                __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = *a2;
  v3 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  v4 = *(_QWORD*)(v2 + 320);
  if (v4 == 0) {
    goto LABEL_7;
  }
  v5 = *(_QWORD*)(v2 + 312);
  v6 = result;
  v7 = *(_QWORD*)(v2 + 320);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v8 = std___1___shared_weak_count_lock(v7);
  result = std___1___shared_weak_count___release_weak();
  if (v8 == 0) {
    goto LABEL_7;
  }
  if (v5 != 0 && *(_QWORD*)(v5 + 8) != 0) {
    **(_BYTE**)(v6 + 8) = 1;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    result = std___1___shared_weak_count___release_weak();
    if (v3 == 0) {
      return result;
    }
  }
  else {
  LABEL_7:
    if (v3 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak();
  }
  return result;
}

#pragma GCC visibility pop
