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

#pragma GCC visibility pop
