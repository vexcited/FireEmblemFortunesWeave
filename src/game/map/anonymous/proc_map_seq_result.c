#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameReliance_8e0520(_QWORD, _QWORD);
__int64 GameReliance_8e05a0(_QWORD, _QWORD);
__int64 GameRoutine_8c7640(_QWORD);
__int64 ProcMapSeqResult_8c4680_alt1(_QWORD,
                                     _QWORD) __asm__("ProcMapSeqResult_8c4680");
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameReliance_Impl_EachScore(_QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1faa4e0[])();
extern __int64 GameData_21d99c8;
extern __int64 GameData_21d99d0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_8c4390(void);
void __attribute__((noreturn)) GameRoutine_8c47e0(void);
__int64 game_map_anonymous_ProcMapSeqResult_Reliance(__int64 a1);
__int64 game_map_anonymous_ProcMapSeqResult_CalcBonusExp_closure_Invoke(
    __int64 result, __int64* a2, int* a3);
__int64 game_map_anonymous_ProcMapSeqResult_Reliance_closure_Invoke_alt1(
    __int64 a1, __int64 a2,
    unsigned int* a3) __asm__("game_map_anonymous_ProcMapSeqResult_Reliance_"
                              "closure_Invoke");
__int64* ProcMapSeqResult_8c4680(__int64* result, _QWORD* a2);
__int64 GameReliance_8e0520_alt1(__int64, int) __asm__("GameReliance_8e0520");
__int64 GameReliance_8e05a0_alt1(__int64, int) __asm__("GameReliance_8e05a0");
__int64 GameRoutine_8c7640_alt1(__int64) __asm__("GameRoutine_8c7640");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
void ProcMapSeqResult_8c4680_alt2(__int64*,
                                  _QWORD*) __asm__("ProcMapSeqResult_8c4680");
void game_map_anonymous_ProcMapSeqResult_Reliance_closure_Invoke(__int64 a1,
                                                                 __int64 a2,
                                                                 int* a3);

__int64 game_map_anonymous_ProcMapSeqResult_Reliance(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  _QWORD* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  _QWORD v14[4];
  _QWORD* v15;

  v14[0] = GameData_1faa4e0;
  v14[1] = a1;
  v15 = v14;
  game_GameReliance_Impl_EachScore(
      *(_QWORD*)(game_GameModeData_instance_ + 128), 1, v14);
  result = (__int64)v15;
  if (v15 == v14) {
    v3 = 32;
    goto LABEL_5;
  }
  if (v15 != nullptr) {
    v3 = 40;
  LABEL_5:
    result = (*(__int64 (**)(__int64))(*v15 + v3))((__int64)v15);
  }
  v5 = *(_QWORD*)(a1 + 176);
  v4 = *(_QWORD*)(a1 + 184);
  if (v4 != v5) {
    v6 = (_QWORD*)(v4 - 24);
    if (v5 < (unsigned __int64)v6) {
      v7 = v5 + 24;
      do {
        v8 = *(_QWORD*)(v7 - 24);
        v9 = *(_QWORD*)(v7 - 16);
        v10 = *(_QWORD*)(v7 - 8);
        v12 = v6[1];
        v11 = v6[2];
        *(_QWORD*)(v7 - 24) = *v6;
        *(_QWORD*)(v7 - 16) = v12;
        *(_QWORD*)(v7 - 8) = v11;
        v6[1] = v9;
        v6[2] = v10;
        *v6 = v8;
        v6 -= 3;
        v13 = v7 >= (unsigned __int64)v6;
        v7 += 24LL;
      } while (!v13);
    }
  }
  return result;
}

__int64 game_map_anonymous_ProcMapSeqResult_CalcBonusExp_closure_Invoke(
    __int64 result, __int64* a2, int* a3)
{
  int v3;
  _QWORD* v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;

  v3 = *a3;
  if (*a3 >= 1) {
    v4 = *(_QWORD**)(result + 8);
    v5 = *a2;
    v7 = v4[20];
    v6 = v4[21];
    if (v7 >= v6) {
      v9 = v4[19];
      v10 = v7 - v9;
      v11 = (__int64)(v7 - v9) >> 4;
      v12 = v11 + 1;
      if ((unsigned __int64)(v11 + 1) >> 60 != 0) {
        GameRoutine_8c4390();
      }
      v13 = v6 - v9;
      v14 = fw_memory_g_heap_manager_ptr;
      if (v13 >> 3 > v12) {
        v12 = v13 >> 3;
      }
      if ((unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFF0LL) {
        v15 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v15 = v12;
      }
      if (v15 != 0) {
        if (v15 >> 60 != 0) {
          GameRoutine_60a210(result);
        }
        v16 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v15, 16, 0);
      }
      else {
        v16 = 0;
      }
      v17 = v16 + v10;
      v18 = v16 + 16 * v15;
      *(_DWORD*)(v17 + 8) = v3;
      v19 = v16 + v10 - 16 * v11;
      *(_QWORD*)v17 = v5;
      v8 = v16 + v10 + 16;
      result = memcpy(v19, v9, v10);
      v4[19] = v19;
      v4[20] = v8;
      v4[21] = v18;
      if (v9 != 0) {
        v20 = 128;
        if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
          v20 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v20);
      }
    }
    else {
      *(_QWORD*)v7 = v5;
      *(_DWORD*)(v7 + 8) = v3;
      v8 = v7 + 16;
    }
    v4[20] = v8;
  }
  return result;
}

void game_map_anonymous_ProcMapSeqResult_Reliance_closure_Invoke(__int64 a1,
                                                                 __int64 a2,
                                                                 int* a3)
{
  __int64 v4;
  int v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  unsigned __int64 v15;
  int v16;
  int v17;
  int v18;
  unsigned int v19;
  int v20;
  char v21;
  char v22;
  struct {
    _QWORD v23[2];
    char v24;
    char v25;
  } v23_;

  v4 = *(_QWORD*)(a1 + 8);
  v5 = GameReliance_8e05a0_alt1(a2, *a3);
  if (v5 < 1) {
    return;
  }
  v6 = v5;
  v7 = GameRoutine_8c7640_alt1(*(_QWORD*)(a2 + 24));
  v8 = GameRoutine_8c7640_alt1(*(_QWORD*)(a2 + 32));
  if (v7 == 0 || v8 == 0) {
    return;
  }
  v10 = v8;
  if (game_GameModeData_instance_ != 0) {
    v11 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)(*(_QWORD*)(v7 + 24) + 1072LL));
    if (v11 != 0 && *(_DWORD*)(v11 + 32) != 0) {
      return;
    }
    if (game_GameModeData_instance_ != 0) {
      v12 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)(*(_QWORD*)(v10 + 24) + 1072LL));
      if (v12 != 0 && *(_DWORD*)(v12 + 32) != 0) {
        return;
      }
    }
  }
  v13 = *(unsigned __int16*)(a2 + 12);
  (*(void (**)(__int64, _QWORD, __int64))(*(_QWORD*)a2 + 16LL))(a2, v6, 1);
  if (v13 == *(unsigned __int16*)(a2 + 12)) {
    return;
  }
  v14 = *(unsigned __int8*)(a2 + 11);
  v15 = (unsigned __int64)(GameData_21d99d0 - GameData_21d99c8) >> 2;
  if ((int)v15 >= 1) {
    v16 = *(_DWORD*)GameData_21d99c8;
    v17 = 0;
    v18 = *(_DWORD*)(GameData_21d99c8 + 4LL * (unsigned int)(v15 - 1));
    if (v18 >= v13) {
      v18 = v13;
    }
    if (v16 <= v13) {
      v16 = v18;
    }
    while (1) {
      v19 = (unsigned int)(v17 + v15) >> 1;
      v20 = *(_DWORD*)(GameData_21d99c8 + 4LL * v19);
      if (v16 == v20) {
        break;
      }
      if (v16 < v20) {
        LODWORD(v15) = (unsigned int)(v17 + v15) >> 1;
      }
      else {
        v17 = v19 + 1;
      }
      if (v17 >= (int)v15) {
        goto LABEL_25;
      }
    }
    if (v14 == (unsigned __int8)(v19 + 1)) {
      return;
    }
  LABEL_26:
    v23_.v23[0] = v7;
    v23_.v23[1] = v10;
    v21 = GameReliance_8e0520_alt1(a2, v13);
    v22 = *(_BYTE*)(a2 + 11);
    v23_.v24 = v21;
    v23_.v25 = v22;
    ProcMapSeqResult_8c4680_alt2((__int64*)(v4 + 176), v23_.v23);
    return;
  }
  LOBYTE(v17) = 0;
LABEL_25:
  if (v14 != (unsigned __int8)v17) {
    goto LABEL_26;
  }
}

__int64* ProcMapSeqResult_8c4680(__int64* result, _QWORD* a2)
{
  _QWORD* v2;
  unsigned __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;
  __int64 v15;
  _QWORD* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;

  v2 = (_QWORD*)result[1];
  v3 = result[2];
  v4 = result;
  if ((unsigned __int64)v2 >= v3) {
    v8 = *result;
    v9 = (__int64)v2 - *result;
    v10 = 1 - 0x5555555555555555LL * (v9 >> 3);
    if (v10 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_8c47e0();
    }
    v11 = fw_memory_g_heap_manager_ptr;
    v12 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v3 - v8) >> 3);
    if (2 * v12 > v10) {
      v10 = 2 * v12;
    }
    if (v12 >= 0x555555555555555LL) {
      v13 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v13 = v10;
    }
    if (v13 != 0) {
      if (v13 > 0xAAAAAAAAAAAAAAALL) {
        GameRoutine_60a210(result);
      }
      v14 = a2;
      v15 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v13, 16, 0);
      a2 = v14;
    }
    else {
      v15 = 0;
    }
    v16 = (_QWORD*)(v15 + v9);
    v17 = v15 + 24 * v13;
    v18 = a2[1];
    v7 = v15 + v9 + 24;
    *v16 = *a2;
    v16[1] = v18;
    v16[2] = a2[2];
    result = (__int64*)memcpy(v15, v8, v9);
    *v4 = v15;
    v4[1] = v7;
    v4[2] = v17;
    if (v8 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v19 = 56;
      }
      result = (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v19);
    }
  }
  else {
    v5 = *a2;
    v6 = a2[2];
    v7 = (__int64)(v2 + 3);
    v2[1] = a2[1];
    v2[2] = v6;
    *v2 = v5;
  }
  v4[1] = v7;
  return result;
}

#pragma GCC visibility pop
