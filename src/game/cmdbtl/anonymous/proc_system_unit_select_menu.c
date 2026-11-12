#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1637be0(void);
__int64 GameRoutine_1638380(_QWORD);
__int64 GameRoutine_178a2c0(void);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_21c9608;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 ProcSystemUnitSelectMenu_Unknown101(__int64 a1);
__int64 ProcSystemUnitSelectMenu_Unknown139_alt1(
    __int64 a1, __int64* a2) __asm__("ProcSystemUnitSelectMenu_Unknown139");
__int64 GameRoutine_1625030(void);
extern __int64 GameData_225ca88;
__int64 game_cmdbtl_anonymous_ProcSystemUnitSelectMenu_PlusCall_closure_Invoke(
    __int64 a1);
bool game_cmdbtl_anonymous_ProcSystemUnitSelectMenu_CreateBind_closure_Invoke(
    __int64 a1, __int64 a2);
_QWORD* GameRoutine_17859d0(__int64, char, _QWORD*);
__int64 CmdbtlUnitSelectMenu_1637be0(__int64, __int64);
extern __int64 (*GameData_210d478[])();
__int64 game_cmdbtl_anonymous_ProcSystemUnitSelectMenu_PlusCall(__int64 a1,
                                                                __int64 a2);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void GameRoutine_178a2c0_alt1(__int64, __int64*) __asm__("GameRoutine_178a2c0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_874520_alt1() __asm__("GameRoutine_874520");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcSystemUnitSelectMenu_Unknown139(__int64 a1, __int64* a2);

__int64 ProcSystemUnitSelectMenu_Unknown101(__int64 a1)
{
  if ((int)GameRoutine_1637be0() < 1) {
    return 1;
  }
  GameRoutine_1638380(a1);
  if (*(int*)(GameData_21c9608 + 308) < 1 &&
      (*(_BYTE*)(GameData_21c9608 + 328) & 4) == 0) {
    return 1;
  }
  else {
    return 3;
  }
}

__int64 game_cmdbtl_anonymous_ProcSystemUnitSelectMenu_PlusCall(__int64 a1,
                                                                __int64 a2)
{
  char v3;
  _QWORD* v4;
  __int64 v5;
  struct {
    _QWORD v7[4];
    _QWORD* v8;
  } v7_;

  if ((int)CmdbtlUnitSelectMenu_1637be0(a1, a2) < 1) {
    return 1;
  }
  v3 = *(_BYTE*)(a1 + 1384);
  v7_.v7[0] = GameData_210d478;
  v7_.v7[1] = a1;
  v7_.v8 = v7_.v7;
  v4 = GameRoutine_17859d0(a1, v3, v7_.v7);
  if (v7_.v8 == v7_.v7) {
    v5 = 32;
  }
  else {
    if (v7_.v8 == nullptr) {
      goto LABEL_7;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v7_.v8 + v5))((__int64)v7_.v8);
LABEL_7:
  if (v4 != nullptr) {
    return 12;
  }
  return 1;
}

void ProcSystemUnitSelectMenu_Unknown139(__int64 a1, __int64* a2)
{
  int v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  signed __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  int v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  signed __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;

  GameRoutine_178a2c0_alt1(a1, a2);
  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v5 = a2[1];
  v6 = a2[2];
  if (v5 >= v6) {
    v8 = *a2;
    v9 = v5 - *a2;
    v10 = 1 - 0x3333333333333333LL * (v9 >> 3);
    if (v10 > 0x666666666666666LL) {
      goto LABEL_34;
    }
    v11 = fw_memory_g_heap_manager_ptr;
    v12 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v6 - v8) >> 3);
    if (2 * v12 > v10) {
      v10 = 2 * v12;
    }
    if (v12 >= 0x333333333333333LL) {
      v13 = 0x666666666666666LL;
    }
    else {
      v13 = v10;
    }
    if (v13 != 0) {
      if (v13 > 0x666666666666666LL) {
        goto LABEL_35;
      }
      v14 = v4;
      v15 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v13, 16, 0);
      v4 = v14;
    }
    else {
      v15 = 0;
    }
    v16 = v15 + v9;
    *(_QWORD*)v16 = "SortieUnit";
    *(_QWORD*)(v16 + 8) = "MID_KeyHelp_Sortie_UnitSelect";
    *(_DWORD*)(v16 + 20) = 0;
    *(_DWORD*)(v16 + 24) = v4;
    *(_BYTE*)(v16 + 28) = 0;
    *(_QWORD*)(v16 + 32) = 0;
    *(_BYTE*)(v16 + 16) = 1;
    v17 = v15 + 40 * v13;
    v7 = v15 + v9 + 40;
    memcpy_alt1(v15, v8, v9);
    *a2 = v15;
    a2[1] = v7;
    a2[2] = v17;
    if (v8 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v11 + v18, v8);
    }
  }
  else {
    *(_DWORD*)(v5 + 20) = 0;
    *(_DWORD*)(v5 + 24) = v4;
    *(_BYTE*)(v5 + 28) = 0;
    *(_QWORD*)(v5 + 32) = 0;
    v7 = v5 + 40;
    *(_QWORD*)v5 = "SortieUnit";
    *(_QWORD*)(v5 + 8) = "MID_KeyHelp_Sortie_UnitSelect";
    *(_BYTE*)(v5 + 16) = 1;
  }
  a2[1] = v7;
  v19 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v20 = a2[1];
  v21 = a2[2];
  if (v20 < v21) {
    *(_BYTE*)(v20 + 28) = 0;
    *(_QWORD*)(v20 + 32) = 0;
    *(_QWORD*)v20 = &GameData_1a9f09e;
    *(_QWORD*)(v20 + 8) = "MID_KeyHelp_ListChange";
    v22 = v20 + 40;
    *(_BYTE*)(v20 + 16) = 1;
    *(_DWORD*)(v20 + 20) = 7;
    *(_DWORD*)(v20 + 24) = v19;
    goto LABEL_33;
  }
  v23 = *a2;
  v24 = v20 - *a2;
  v25 = 1 - 0x3333333333333333LL * (v24 >> 3);
  if (v25 > 0x666666666666666LL) {
  LABEL_34:
    GameRoutine_874520_alt1();
  }
  v26 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v21 - v23) >> 3);
  if (2 * v26 > v25) {
    v25 = 2 * v26;
  }
  if (v26 >= 0x333333333333333LL) {
    v27 = 0x666666666666666LL;
  }
  else {
    v27 = v25;
  }
  if (v27 != 0) {
    if (v27 <= 0x666666666666666LL) {
      v28 = v19;
      v29 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                40 * v27, 16, 0);
      v19 = v28;
      goto LABEL_29;
    }
  LABEL_35:
    GameRoutine_60a210_alt1();
  }
  v29 = 0;
LABEL_29:
  v30 = v29 + v24;
  *(_QWORD*)v30 = &GameData_1a9f09e;
  *(_QWORD*)(v30 + 8) = "MID_KeyHelp_ListChange";
  *(_BYTE*)(v30 + 28) = 0;
  *(_QWORD*)(v30 + 32) = 0;
  *(_BYTE*)(v30 + 16) = 1;
  v31 = v29 + 40 * v27;
  v22 = v29 + v24 + 40;
  *(_DWORD*)(v30 + 20) = 7;
  *(_DWORD*)(v30 + 24) = v19;
  memcpy_alt1(v29, v23, v24);
  *a2 = v29;
  a2[1] = v22;
  a2[2] = v31;
  if (v23 != 0) {
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v23);
  }
LABEL_33:
  a2[1] = v22;
}

__int64 game_cmdbtl_anonymous_ProcSystemUnitSelectMenu_PlusCall_closure_Invoke(
    __int64 a1)
{
  GameRoutine_1638380(*(_QWORD*)(a1 + 8));
  if (GameData_225ca88 != 0) {
    GameRoutine_1625030();
  }
  return 4;
}

bool game_cmdbtl_anonymous_ProcSystemUnitSelectMenu_CreateBind_closure_Invoke(
    __int64 a1, __int64 a2)
{
  return *(_QWORD*)(*(_QWORD*)a2 + 88LL) == *(_QWORD*)(a1 + 8);
}

#pragma GCC visibility pop
