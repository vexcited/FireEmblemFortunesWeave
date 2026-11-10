#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1626520(__int64, __int64);
__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
extern __int64 (*GameData_206e870[])();
extern __int64 (*game_cmdbtl_anonymous_UnitMenuItem_vtable[])();
extern __int64 GameData_21c9608;
extern __int64 GameData_21ca310;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
__int64 CmdBtlUnitSelectMenu_1638100(_DWORD* a1, __int64 a2);
__int64 GameRoutine_1590740(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1590b40(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_163b880(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 game_cmdbtl_CmdBtlUnitSelectMenu_CreateImpl_lambda0_Invoke(__int64 a1,
                                                                   __int64 a2);
bool game_cmdbtl_CmdBtlUnitSelectMenu_SetupCmdBtlForce_lambda1_Invoke(
    __int64 a1, __int64 a2);
bool game_cmdbtl_CmdBtlUnitSelectMenu_SetupCmdBtlForce_lambda2_Invoke(
    __int64 a1, __int64 a2);
__int64 game_cmdbtl_CmdBtlUnitSelectMenu_UpdateInfo_lambda0_Invoke(__int64 a1,
                                                                   _QWORD* a2);
void __attribute__((noreturn)) GameRoutine_163b3a0(void);
__int64
game_cmdbtl_CmdBtlUnitSelectMenu_GetSortieCount_lambda0_Invoke(__int64 a1,
                                                               _QWORD* a2);
__int64
game_cmdbtl_CmdBtlUnitSelectMenu_SetupCmdBtlForce_lambda0_Invoke(__int64 a1,
                                                                 __int64* a2);

__int64 CmdBtlUnitSelectMenu_1638100(_DWORD* a1, __int64 a2)
{
  int v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  int v10;
  bool v11;
  int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  bool v22;
  bool v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v34;
  __int64 v37;
  _QWORD v38[7];
  int v39;

  a1[356] = *(_DWORD*)a2;
  if ((*(_BYTE*)(GameData_21c9608 + 328) & 4) != 0) {
    v2 = 1;
  }
  else {
    v2 = *(_DWORD*)(GameData_21c9608 + 308);
  }
  v34 = v2;
  v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
  if (v3 != 0) {
    v4 = -1;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    do {
      v14 = *(_QWORD*)(v3 + 432);
      v15 = *(_QWORD*)(a2 + 8);
      v16 = *(_QWORD*)(a2 + 16);
      if (v15 == v16) {
        v22 = false;
      }
      else {
        v37 = *(_QWORD*)(v3 + 432);
        v17 = v5;
        v18 = v6;
        v19 = v15 + 8;
        do {
          v20 = *(_QWORD*)(v19 - 8);
          v39 = 16;
          v38[0] = v20;
          v21 = game_UnitPool_Find_6ead60(v38, &v39);
          v22 = v3 == v21;
          v23 = v3 == v21 || v19 == v16;
          v19 += 8;
        } while (!v23);
        v6 = v18;
        v5 = v17;
        v14 = v37;
      }
      v24 =
          fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 104, 16, 0);
      *(_WORD*)(v24 + 16) = 0;
      *(_DWORD*)(v24 + 40) = 0;
      *(_QWORD*)(v24 + 48) = 0;
      *(_QWORD*)(v24 + 56) = 0;
      *(_QWORD*)(v24 + 64) = 0;
      *(_QWORD*)(v24 + 72) = 0;
      *(_QWORD*)(v24 + 88) = v3;
      *(_BYTE*)(v24 + 96) = v22;
      *(_BYTE*)(v24 + 97) = v8 < v34;
      *(_WORD*)(v24 + 80) = 257;
      *(_BYTE*)(v24 + 82) = 1;
      *(_QWORD*)v24 = game_cmdbtl_anonymous_UnitMenuItem_vtable;
      *(_QWORD*)(v24 + 8) = 0;
      GameRoutine_16e0c00(a1, v24);
      v25 = *(_QWORD*)(v3 + 392);
      v26 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v27 = *(_QWORD*)(game_GameModeData_instance_ + 96);
      }
      else {
        v27 = 0;
      }
      v11 = v25 == v27;
      v28 = *(_DWORD*)(v3 + 416);
      v29 = *(unsigned __int8*)(v3 + 501);
      if (v11) {
        v5 = v3;
      }
      if ((v28 & 0x80000) != 0) {
        v6 = v3;
      }
      if ((v28 & 0x100000) != 0) {
        v10 = *(unsigned __int8*)(v3 + 501);
      }
      else {
        v10 = -1;
      }
      if (game_GameModeData_instance_ != 0) {
        v26 = *(_QWORD*)(game_GameModeData_instance_ + 96);
      }
      ++v8;
      v3 = v14;
      v9 = (v4 != v29) | v7;
      if (v4 < 0) {
        v9 = v7;
      }
      else {
        v10 = v4;
      }
      v11 = v25 == v26;
      if (v25 == v26) {
        v12 = v4;
      }
      else {
        v12 = v10;
      }
      if (v11) {
        v13 = v7;
      }
      else {
        v13 = v9;
      }
      if ((v28 & 0x100000) != 0) {
        v4 = v12;
        v7 = v13;
      }
    } while (v14 != 0);
  }
  else {
    LOBYTE(v7) = 0;
    v6 = 0;
    v5 = 0;
  }
  v30 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       40, 16, 0);
  v31 = v5;
  v32 = v30;
  *(_BYTE*)(v30 + 16) = v7 & 1;
  *(_QWORD*)(v30 + 24) = v31;
  *(_QWORD*)(v30 + 32) = v6;
  v38[4] = v30;
  *(_QWORD*)v30 = GameData_206e870;
  *(_QWORD*)(v30 + 8) = a1;
  GameRoutine_1626520((__int64)a1, (__int64)v38);
  (*(void (**)(__int64))(*(_QWORD*)v32 + 40LL))(v32);
  return (*(__int64 (**)(_DWORD*))(*(_QWORD*)a1 + 1032LL))(a1);
}

__int64

game_cmdbtl_CmdBtlUnitSelectMenu_GetSortieCount_lambda0_Invoke(__int64 a1,
                                                               _QWORD* a2)
{
  __int64 v2;

  v2 = *a2;
  if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 568LL))(*a2) & 1) != 0 ||
      ((*(__int64 (**)(__int64))(*(_QWORD*)v2 + 576LL))(v2) & 1) != 0) {
    ++**(_DWORD**)(a1 + 8);
  }
  return 0;
}

__int64 game_cmdbtl_CmdBtlUnitSelectMenu_CreateImpl_lambda0_Invoke(__int64 a1,
                                                                   __int64 a2)
{
  __int64 v2;
  _QWORD* v4;
  _QWORD* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64* v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;

  v2 = *(_QWORD*)(a1 + 8);
  v4 = *(_QWORD**)(v2 + 1408);
  v5 = *(_QWORD**)(v2 + 1400);
  if (v4 == v5) {
    if (*(_BYTE*)(a1 + 16) == 1) {
      v8 = *(_QWORD*)(a1 + 24);
      v6 = (__int64*)(a1 + 24);
      v7 = v8;
      if (v8 == 0) {
        goto LABEL_19;
      }
    }
    else {
      v9 = *(_QWORD*)(a1 + 32);
      v6 = (__int64*)(a1 + 32);
      v7 = v9;
      if (v9 == 0) {
        goto LABEL_19;
      }
    }
    v10 = *(_QWORD*)(v2 + 1416);
    if ((unsigned __int64)v4 >= v10) {
      v12 = v10 - (_QWORD)v4;
      v13 = (__int64)(v10 - (_QWORD)v4) >> 2;
      if (v13 <= 1) {
        v13 = 1;
      }
      if (v12 >= 0x7FFFFFFFFFFFFFF8LL) {
        v14 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v14 = v13;
      }
      if (v14 >> 61 != 0) {
        GameRoutine_60a210(v6);
      }
      v15 = v6;
      v16 = fw_memory_g_heap_manager_ptr;
      v17 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0);
      v18 = *v15;
      v11 = v17 + 1;
      *v17 = v18;
      *(_QWORD*)(v2 + 1400) = v17;
      *(_QWORD*)(v2 + 1408) = v17 + 1;
      *(_QWORD*)(v2 + 1416) = &v17[v14];
      if (v4 != nullptr) {
        v19 = 128;
        if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
          v19 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v19, v5);
      }
    }
    else {
      *v4 = v7;
      v11 = v4 + 1;
    }
    *(_QWORD*)(v2 + 1408) = v11;
  }
LABEL_19:
  GameRoutine_1590b40(a2, 0, v2 + 1400, 0);
  return GameRoutine_1590740(a2, *(unsigned int*)(v2 + 1388),
                             *(unsigned int*)(v2 + 1392));
}

__int64

game_cmdbtl_CmdBtlUnitSelectMenu_SetupCmdBtlForce_lambda0_Invoke(__int64 a1,
                                                                 __int64* a2)
{
  __int64* v2;
  __int64 v3;
  unsigned __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;

  v2 = *(__int64**)(a1 + 8);
  v3 = *a2;
  v5 = (_QWORD*)v2[1];
  v4 = v2[2];
  if ((unsigned __int64)v5 >= v4) {
    v7 = *v2;
    v8 = (__int64)v5 - *v2;
    v9 = (v8 >> 3) + 1;
    if (v9 >> 61 != 0) {
      GameRoutine_163b3a0();
    }
    v10 = v4 - v7;
    v11 = fw_memory_g_heap_manager_ptr;
    if (v10 >> 2 > v9) {
      v9 = v10 >> 2;
    }
    if ((unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF8LL) {
      v12 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 >> 61 != 0) {
        GameRoutine_60a210(a1);
      }
      v13 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
    }
    else {
      v13 = 0;
    }
    v14 = v13 + 8 * v12;
    v15 = v13 + v8 - 8 * (v8 >> 3);
    *(_QWORD*)(v13 + v8) = v3;
    v6 = v13 + v8 + 8;
    memcpy(v15, v7, v8);
    *v2 = v15;
    v2[1] = v6;
    v2[2] = v14;
    if (v7 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v16, v7);
    }
  }
  else {
    *v5 = v3;
    v6 = (__int64)(v5 + 1);
  }
  v2[1] = v6;
  return 0;
}

bool game_cmdbtl_CmdBtlUnitSelectMenu_SetupCmdBtlForce_lambda1_Invoke(
    __int64 a1, __int64 a2)
{
  return *(_QWORD*)(*(_QWORD*)a2 + 88LL) == **(_QWORD**)(a1 + 8);
}

bool game_cmdbtl_CmdBtlUnitSelectMenu_SetupCmdBtlForce_lambda2_Invoke(
    __int64 a1, __int64 a2)
{
  return *(_QWORD*)(*(_QWORD*)a2 + 88LL) == **(_QWORD**)(a1 + 8);
}

__int64 game_cmdbtl_CmdBtlUnitSelectMenu_UpdateInfo_lambda0_Invoke(__int64 a1,
                                                                   _QWORD* a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v5;
  int v6;
  int v7;
  __int64 v8;
  __int64* v9;
  unsigned __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  char v24[4];

  v2 = (_QWORD*)*a2;
  v3 = *(_QWORD*)(a1 + 8);
  if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 568LL))(*a2) & 1) != 0 ||
      ((*(__int64 (**)(_QWORD*))(*v2 + 576LL))(v2) & 1) != 0) {
    v5 = v2[11];
    if (v5 != 0) {
      v6 = *(__int16*)(v5 + 492);
      v7 = *(_DWORD*)(v3 + 1388);
      v24[0] = 0;
      *(_DWORD*)(v3 + 1388) = v7 + v6;
      v8 = game_Unit_GetParam(v5, v24, 1);
      *(_DWORD*)(v3 + 1392) += v8;
      v9 = *(__int64**)(a1 + 16);
      v11 = (_QWORD*)v9[1];
      v10 = v9[2];
      if ((unsigned __int64)v11 >= v10) {
        v13 = *v9;
        v14 = (__int64)v11 - *v9;
        v15 = (v14 >> 3) + 1;
        if (v15 >> 61 != 0) {
          GameRoutine_163b880();
        }
        v16 = v10 - v13;
        v17 = fw_memory_g_heap_manager_ptr;
        if (v16 >> 2 > v15) {
          v15 = v16 >> 2;
        }
        if ((unsigned __int64)v16 >= 0x7FFFFFFFFFFFFFF8LL) {
          v18 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v18 = v15;
        }
        if (v18 != 0) {
          if (v18 >> 61 != 0) {
            GameRoutine_60a210(v8);
          }
          v19 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v18, 16, 0);
        }
        else {
          v19 = 0;
        }
        v20 = v19 + 8 * v18;
        v21 = v19 + v14 - 8 * (v14 >> 3);
        *(_QWORD*)(v19 + v14) = v2;
        v12 = v19 + v14 + 8;
        memcpy(v21, v13, v14);
        *v9 = v21;
        v9[1] = v12;
        v9[2] = v20;
        if (v13 != 0) {
          v22 = 128;
          if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) == 0) {
            v22 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v17 + v22, v13);
        }
      }
      else {
        *v11 = v2;
        v12 = (__int64)(v11 + 1);
      }
      v9[1] = v12;
    }
  }
  return 0;
}

#pragma GCC visibility pop
