#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_17b5050(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 game_Unit_IsUnlocked(_QWORD);
extern _UNKNOWN* GameData_21319e0;
extern __int64 (*game_menu_anonymous_CmdBtlUnitMenuItem_vtable[])();
extern __int64 GameData_20d38b8;
extern __int64 GameData_2131bb8[5];
extern __int64 GameData_21ca310;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e008[9];
__int64 ProcCmdBtlEquipUnitSelectMenu_Unknown128(__int64 a1);
__int64 ProcCmdBtlEquipUnitSelectMenu_Unknown155(__int64 a1);
__attribute__((swiftcall)) void game_eb68e0(PSEUDO_X8, int);
__int64 GameRoutine_1590b40(__int64 result, char, __int64**, char);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_gameui_1590740(__int64*, int, int);
__int64 memcpy(__int64, __int64, unsigned __int64);
extern __int64 GameData_21c9608;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_740050();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_menu_anonymous_ProcCmdBtlEquipUnitSelectMenu_CreateBind_closure_Invoke(
    __int64 a1, __int64* a2);

__int64 ProcCmdBtlEquipUnitSelectMenu_Unknown128(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  bool v15;
  bool v16;
  char v17;
  __int64 v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  int v22;
  __int64 v23;

  LODWORD(v23) = 17;
  result = game_UnitPool_GetFirst(&v23);
  if (result != 0) {
    v3 = *(_QWORD*)(result + 432);
    v4 = result;
    if (v3 == 0) {
      v3 = *(_QWORD*)(result + 440);
      if (v3 != 0) {
        v5 = *(unsigned __int8*)(v3 + 16);
        if (v5 <= 8) {
          v21 = v5 - 3;
          while (1) {
            if (v21 == 0) {
              v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
              if (v3 != 0) {
                break;
              }
            }
            if (++v21 == 6) {
              goto LABEL_5;
            }
          }
        }
        else {
        LABEL_5:
          v3 = 0;
        }
      }
    }
    v6 = GameData_2131bb8[0] + 16;
    while (1) {
    LABEL_8:
      v7 = v3;
      v8 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 104, 16, 0);
      v9 = *(_QWORD*)(a1 + 1408);
      v10 = *(_QWORD*)(a1 + 1416);
      v11 = v8;
      if (v9 == v10) {
        v15 = false;
      }
      else {
        v12 = v9 + 8;
        do {
          v13 = *(_QWORD*)(v12 - 8);
          v22 = 16;
          v23 = v13;
          v14 = game_UnitPool_Find_6ead60(&v23, &v22);
          v15 = v4 == v14;
          v16 = v4 == v14 || v12 == v10;
          v12 += 8;
        } while (!v16);
      }
      *(_WORD*)(v11 + 16) = 0;
      *(_DWORD*)(v11 + 40) = 0;
      *(_QWORD*)(v11 + 48) = 0;
      *(_QWORD*)(v11 + 56) = 0;
      *(_QWORD*)(v11 + 64) = 0;
      *(_QWORD*)(v11 + 72) = 0;
      *(_QWORD*)(v11 + 88) = v4;
      *(_QWORD*)v11 = v6;
      *(_QWORD*)(v11 + 8) = 0;
      *(_WORD*)(v11 + 80) = 257;
      *(_BYTE*)(v11 + 82) = 1;
      v17 = game_Unit_IsUnlocked(v4);
      *(_BYTE*)(v11 + 96) = 0;
      *(_BYTE*)(v11 + 97) = v15;
      *(_BYTE*)(v11 + 82) = v17 & 1;
      *(_QWORD*)v11 = game_menu_anonymous_CmdBtlUnitMenuItem_vtable;
      result = GameRoutine_16e0c00(a1, v11);
      if (v7 == 0) {
        break;
      }
      v3 = *(_QWORD*)(v7 + 432);
      v4 = v7;
      if (v3 == 0) {
        v18 = *(_QWORD*)(v7 + 440);
        v4 = v7;
        if (v18 != 0) {
          v19 = *(unsigned __int8*)(v18 + 16);
          v3 = 0;
          v4 = v7;
          if (v19 <= 8) {
            v20 = v19 - 3;
            while (1) {
              if (v20 == 0) {
                v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                if (v3 != 0) {
                  break;
                }
              }
              if (++v20 == 6) {
                v3 = 0;
                v4 = v7;
                goto LABEL_8;
              }
            }
            v4 = v7;
          }
        }
      }
    }
  }
  return result;
}

__int64 ProcCmdBtlEquipUnitSelectMenu_Unknown155(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_20d38b8, 0);
    if (result != 0) {
      v3 = *(_QWORD*)(a1 + 152);
      v4 = *(_QWORD*)(result + 88);
      if (v3 == 0) {
        v3 = a1;
      }
      v5 = *(_QWORD*)(v3 + 32);
      v6 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 544, 16, 0);
      GameRoutine_17b5050(v6, a1 + 1400, v4);
      return GameRoutine_657850(v6, GameData_21319e0,
                                "CmdBtlInventoryUnitTroopSequence", 1, v5);
    }
  }
  return result;
}

void game_menu_anonymous_ProcCmdBtlEquipUnitSelectMenu_CreateBind_closure_Invoke(
    __int64 a1, __int64* a2)
{
  int v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64* v5;
  char* v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  struct {
    __int64* v21;
    __int64* v22;
    unsigned __int64 v23;
  } v21_;
  struct {
    char v24[8];
    _QWORD* v25;
    _QWORD* v26;
    char gap56_[8];
    int v27;
    int v28;
  } v24_;

  if ((*(_QWORD*)(GameData_21c9608 + 328) & 4LL) != 0) {
    v2 = 1;
  }
  else {
    v2 = *(_DWORD*)(GameData_21c9608 + 308);
  }
  game_eb68e0((void*)((__int64)v24_.v24), v2);
  v21_.v22 = nullptr;
  v21_.v23 = 0;
  v21_.v21 = nullptr;
  v3 = v24_.v25;
  v4 = v24_.v26;
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v24_.v25 != v24_.v26) {
    v6 = nullptr;
    do {
      if ((unsigned __int64)v6 < v21_.v23) {
        *(_QWORD*)v6 = *v3;
        v6 += 8;
      }
      else {
        v7 = v21_.v21;
        v8 = v6 - (char*)v21_.v21;
        v9 = (v6 - (char*)v21_.v21) >> 3;
        v10 = v9 + 1;
        if ((unsigned __int64)(v9 + 1) >> 61 != 0) {
          GameRoutine_740050();
        }
        v11 = v21_.v23 - (_QWORD)v21_.v21;
        if ((__int64)(v21_.v23 - (_QWORD)v21_.v21) >> 2 > v10) {
          v10 = v11 >> 2;
        }
        if ((unsigned __int64)v11 >= 0x7FFFFFFFFFFFFFF8LL) {
          v12 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v12 = v10;
        }
        if (v12 != 0) {
          if (v12 >> 61 != 0) {
            GameRoutine_60a210();
          }
          v13 = fw_memory_HeapManager_Allocate_alt1(*v5, 8 * v12, 16, 0);
        }
        else {
          v13 = 0;
        }
        v14 = v13 + 8 * v12;
        v15 = (__int64*)(v13 + v8 - 8 * v9);
        *(_QWORD*)(v13 + v8) = *v3;
        v6 = (char*)(v13 + v8 + 8);
        memcpy((__int64)v15, (__int64)v7, v8);
        v21_.v21 = v15;
        v21_.v23 = v14;
        if (v7 != nullptr) {
          v16 = 128;
          if (*(_QWORD*)(*v5 + 200) == 0) {
            v16 = 56;
          }
          nn_mem_StandardAllocator_Free(*v5 + v16, (__int64)v7);
        }
      }
      ++v3;
      v21_.v22 = (__int64*)v6;
    } while (v3 != v4);
  }
  GameRoutine_1590b40((__int64)a2, 0, &v21_.v21, 0);
  game_gameui_1590740(a2, v24_.v27, v24_.v28);
  if (v21_.v21 != nullptr) {
    v17 = *v5;
    v21_.v22 = v21_.v21;
    v18 = 128;
    if (*(_QWORD*)(v17 + 200) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(v17 + v18, (__int64)v21_.v21);
  }
  if (v24_.v25 != nullptr) {
    v19 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*v5 + v19, (__int64)v24_.v25);
  }
}

#pragma GCC visibility pop
