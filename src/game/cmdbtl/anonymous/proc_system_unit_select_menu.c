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
__int64 ProcSystemUnitSelectMenu_Unknown139(__int64 a1, __int64* a2);
__int64 GameRoutine_1625030(void);
extern __int64 GameData_225ca88;
__int64 game_cmdbtl_anonymous_ProcSystemUnitSelectMenu_PlusCall_closure_Invoke(
    __int64 a1);
bool game_cmdbtl_anonymous_ProcSystemUnitSelectMenu_CreateBind_closure_Invoke(
    __int64 a1, __int64 a2);

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

__int64 ProcSystemUnitSelectMenu_Unknown139(__int64 a1, __int64* a2)
{
  __int64 result;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;

  GameRoutine_178a2c0();
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
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
      v14 = result;
      v15 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v13, 16, 0);
      LODWORD(result) = v14;
    }
    else {
      v15 = 0;
    }
    v16 = v15 + v9;
    *(_QWORD*)v16 = "SortieUnit";
    *(_QWORD*)(v16 + 8) = "MID_KeyHelp_Sortie_UnitSelect";
    *(_DWORD*)(v16 + 20) = 0;
    *(_DWORD*)(v16 + 24) = result;
    *(_BYTE*)(v16 + 28) = 0;
    *(_QWORD*)(v16 + 32) = 0;
    *(_BYTE*)(v16 + 16) = 1;
    v17 = v15 + 40 * v13;
    v7 = v15 + v9 + 40;
    memcpy(v15, v8, v9);
    *a2 = v15;
    a2[1] = v7;
    a2[2] = v17;
    if (v8 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v18);
    }
  }
  else {
    *(_DWORD*)(v5 + 20) = 0;
    *(_DWORD*)(v5 + 24) = result;
    *(_BYTE*)(v5 + 28) = 0;
    *(_QWORD*)(v5 + 32) = 0;
    v7 = v5 + 40;
    *(_QWORD*)v5 = "SortieUnit";
    *(_QWORD*)(v5 + 8) = "MID_KeyHelp_Sortie_UnitSelect";
    *(_BYTE*)(v5 + 16) = 1;
  }
  a2[1] = v7;
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v19 = a2[1];
  v20 = a2[2];
  if (v19 < v20) {
    *(_BYTE*)(v19 + 28) = 0;
    *(_QWORD*)(v19 + 32) = 0;
    *(_QWORD*)v19 = &GameData_1a9f09e;
    *(_QWORD*)(v19 + 8) = "MID_KeyHelp_ListChange";
    v21 = v19 + 40;
    *(_BYTE*)(v19 + 16) = 1;
    *(_DWORD*)(v19 + 20) = 7;
    *(_DWORD*)(v19 + 24) = result;
    goto LABEL_33;
  }
  v22 = *a2;
  v23 = v19 - *a2;
  v24 = 1 - 0x3333333333333333LL * (v23 >> 3);
  if (v24 > 0x666666666666666LL) {
  LABEL_34:
    GameRoutine_874520(result);
  }
  v25 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v20 - v22) >> 3);
  if (2 * v25 > v24) {
    v24 = 2 * v25;
  }
  if (v25 >= 0x333333333333333LL) {
    v26 = 0x666666666666666LL;
  }
  else {
    v26 = v24;
  }
  if (v26 != 0) {
    if (v26 <= 0x666666666666666LL) {
      v27 = result;
      v28 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 40 * v26,
                                           16, 0);
      LODWORD(result) = v27;
      goto LABEL_29;
    }
  LABEL_35:
    GameRoutine_60a210(result);
  }
  v28 = 0;

LABEL_29:
  v29 = v28 + v23;
  *(_QWORD*)v29 = &GameData_1a9f09e;
  *(_QWORD*)(v29 + 8) = "MID_KeyHelp_ListChange";
  *(_BYTE*)(v29 + 28) = 0;
  *(_QWORD*)(v29 + 32) = 0;
  *(_BYTE*)(v29 + 16) = 1;
  v30 = v28 + 40 * v26;
  v21 = v28 + v23 + 40;
  *(_DWORD*)(v29 + 20) = 7;
  *(_DWORD*)(v29 + 24) = result;
  result = memcpy(v28, v22, v23);
  *a2 = v28;
  a2[1] = v21;
  a2[2] = v30;
  if (v22 != 0) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v31 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v31);
  }

LABEL_33:
  a2[1] = v21;
  return result;
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
