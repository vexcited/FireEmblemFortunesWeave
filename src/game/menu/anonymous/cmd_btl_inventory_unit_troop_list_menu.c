#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_17ab020(__int64, int*, __int64);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
extern __int64 (*game_menu_anonymous_CmdBtlInventoryUnitTroopItem_vtable[])();
extern __int64 GameData_21ca310;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 CmdBtlInventoryUnitTroopListMenu_Unknown128(__int64 a1);
__int64 CmdBtlInventoryUnitTroopListMenu_Unknown167(__int64 a1, __int64 a2);
bool game_menu_anonymous_CmdBtlInventoryUnitTroopListMenu_Create_closure_Invoke(
    __int64 a1, __int64 a2);

__int64 CmdBtlInventoryUnitTroopListMenu_Unknown128(__int64 a1)
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
  bool v14;
  bool v15;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  int v20;
  __int64 v21;

  LODWORD(v21) = 17;
  result = game_UnitPool_GetFirst(&v21);
  if (result != 0) {
    v3 = *(_QWORD*)(result + 432);
    v4 = result;
    if (v3 == 0) {
      v3 = *(_QWORD*)(result + 440);
      if (v3 != 0) {
        v5 = *(unsigned __int8*)(v3 + 16);
        if (v5 <= 8) {
          v19 = v5 - 3;
          while (1) {
            if (v19 == 0) {
              v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
              if (v3 != 0) {
                break;
              }
            }
            if (++v19 == 6) {
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
    while (1) {
    LABEL_8:
      v6 = v3;
      v7 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 104, 16, 0);
      v8 = *(_QWORD*)(a1 + 1200);
      v9 = *(_QWORD*)(a1 + 1208);
      v10 = v7;
      if (v8 == v9) {
        v14 = false;
      }
      else {
        v11 = v8 + 8;
        do {
          v12 = *(_QWORD*)(v11 - 8);
          v20 = 16;
          v21 = v12;
          v13 = game_UnitPool_Find_6ead60(&v21, &v20);
          v14 = v4 == v13;
          v15 = v4 == v13 || v11 == v9;
          v11 += 8;
        } while (!v15);
      }
      *(_WORD*)(v10 + 16) = 0;
      *(_DWORD*)(v10 + 40) = 0;
      *(_QWORD*)(v10 + 48) = 0;
      *(_QWORD*)(v10 + 56) = 0;
      *(_QWORD*)(v10 + 64) = 0;
      *(_QWORD*)(v10 + 72) = 0;
      *(_BYTE*)(v10 + 82) = 1;
      *(_QWORD*)(v10 + 88) = v4;
      *(_DWORD*)(v10 + 96) = 0;
      *(_BYTE*)(v10 + 100) = 0;
      *(_QWORD*)v10 = game_menu_anonymous_CmdBtlInventoryUnitTroopItem_vtable;
      *(_QWORD*)(v10 + 8) = 0;
      *(_WORD*)(v10 + 80) = 257;
      *(_BYTE*)(v10 + 101) = v14;
      result = GameRoutine_16e0c00(a1, v10);
      if (v6 == 0) {
        break;
      }
      v3 = *(_QWORD*)(v6 + 432);
      v4 = v6;
      if (v3 == 0) {
        v16 = *(_QWORD*)(v6 + 440);
        v4 = v6;
        if (v16 != 0) {
          v17 = *(unsigned __int8*)(v16 + 16);
          v3 = 0;
          v4 = v6;
          if (v17 <= 8) {
            v18 = v17 - 3;
            while (1) {
              if (v18 == 0) {
                v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                if (v3 != 0) {
                  break;
                }
              }
              if (++v18 == 6) {
                v3 = 0;
                v4 = v6;
                goto LABEL_8;
              }
            }
            v4 = v6;
          }
        }
      }
    }
  }
  return result;
}

__int64 CmdBtlInventoryUnitTroopListMenu_Unknown167(__int64 a1, __int64 a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(a1 + 152);
  if (v2 == 0) {
    v2 = a1;
  }
  return GameRoutine_17ab020(*(_QWORD*)(v2 + 32), (int*)(a1 + 1192), a2);
}

bool game_menu_anonymous_CmdBtlInventoryUnitTroopListMenu_Create_closure_Invoke(
    __int64 a1, __int64 a2)
{
  return *(_QWORD*)(*(_QWORD*)a2 + 88LL) == *(_QWORD*)(a1 + 8);
}

#pragma GCC visibility pop
