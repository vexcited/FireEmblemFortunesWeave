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
__int64 memmove(__int64, __int64, unsigned __int64);
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr[])();
extern __int64 (
    *game_menu_anonymous_CmdBtlInventoryUnitTroopListMenu_vtable[])();
extern __int64 GameData_2131d60[14];
extern __int64 GameData_2259500;
extern __int64 game_menu_UnitGridSelectMenu_listeners_;
void game_menu_BasicMenu_Destroy_BasicMenu(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void CmdBtlInventoryUnitTroopListMenu_Destructor(_QWORD* a1);
void CmdBtlInventoryUnitTroopListMenu_DeletingDestructor(_QWORD* a1);

void CmdBtlInventoryUnitTroopListMenu_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  unsigned __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;

  v1 = a1[150];
  *a1 = game_menu_anonymous_CmdBtlInventoryUnitTroopListMenu_vtable;
  a1[22] =
      (__int64)(game_menu_anonymous_CmdBtlInventoryUnitTroopListMenu_vtable +
                170);
  if (v1 != 0) {
    a1[151] = v1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                  v1);
  }
  v4 = a1 + 136;
  v5 = GameData_2131d60[0] + 1368;
  *a1 = GameData_2131d60[0] + 16;
  a1[22] = v5;
  v6 = (_QWORD*)game_menu_UnitGridSelectMenu_listeners_;
  if (game_menu_UnitGridSelectMenu_listeners_ != GameData_2259500) {
    v7 = GameData_2259500 - game_menu_UnitGridSelectMenu_listeners_ - 8;
    if ((~(_BYTE)v7 & 0x18) != 0) {
      v8 = ((unsigned __int8)((unsigned int)v7 >> 3) + 1) & 3;
      while ((_QWORD*)*v6 != v4) {
        ++v6;
        if (--v8 == 0) {
          goto LABEL_10;
        }
      }
    }
    else {
    LABEL_10:
      if (v7 < 0x18) {
        goto LABEL_25;
      }
      v6 += 2;
      while (1) {
        if ((_QWORD*)*(v6 - 2) == v4) {
          v6 -= 2;
          goto LABEL_21;
        }
        if ((_QWORD*)*(v6 - 1) == v4) {
          --v6;
          goto LABEL_21;
        }
        if ((_QWORD*)*v6 == v4) {
          goto LABEL_21;
        }
        if ((_QWORD*)v6[1] == v4) {
          break;
        }
        v9 = v6 + 2;
        v6 += 4;
        if (v9 == (_QWORD*)GameData_2259500) {
          goto LABEL_25;
        }
      }
      ++v6;
    }
  }
LABEL_21:
  if (v6 != (_QWORD*)GameData_2259500) {
    v10 = GameData_2259500 - (_QWORD)(v6 + 1);
    if ((_QWORD*)GameData_2259500 != v6 + 1) {
      memmove((__int64)v6, (__int64)(v6 + 1),
              GameData_2259500 - (_QWORD)(v6 + 1));
    }
    GameData_2259500 = (__int64)v6 + v10;
  }
LABEL_25:
  v11 = (_QWORD*)a1[146];
  if (v11 == a1 + 142) {
    v12 = 32;
  }
  else {
    if (v11 == nullptr) {
      goto LABEL_30;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v11 + v12))((__int64)v11);
LABEL_30:
  v13 = (_QWORD*)a1[140];
  if (v13 == v4) {
    v14 = 32;
    goto LABEL_34;
  }
  if (v13 != nullptr) {
    v14 = 40;
  LABEL_34:
    (*(void (**)(__int64))(*v13 + v14))((__int64)v13);
  }
  game_menu_BasicMenu_Destroy_BasicMenu((__int64)a1);
}

void CmdBtlInventoryUnitTroopListMenu_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;

  v1 = a1[150];
  *a1 = game_menu_anonymous_CmdBtlInventoryUnitTroopListMenu_vtable;
  a1[22] =
      (__int64)(game_menu_anonymous_CmdBtlInventoryUnitTroopListMenu_vtable +
                170);
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[151] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = a1 + 136;
  v7 = GameData_2131d60[0] + 1368;
  *a1 = GameData_2131d60[0] + 16;
  a1[22] = v7;
  v8 = (_QWORD*)game_menu_UnitGridSelectMenu_listeners_;
  if (game_menu_UnitGridSelectMenu_listeners_ != GameData_2259500) {
    v9 = GameData_2259500 - game_menu_UnitGridSelectMenu_listeners_ - 8;
    if ((~(_BYTE)v9 & 0x18) != 0) {
      v10 = ((unsigned __int8)((unsigned int)v9 >> 3) + 1) & 3;
      while ((_QWORD*)*v8 != v6) {
        ++v8;
        if (--v10 == 0) {
          goto LABEL_10;
        }
      }
    }
    else {
    LABEL_10:
      if (v9 < 0x18) {
        goto LABEL_25;
      }
      v8 += 2;
      while (1) {
        if ((_QWORD*)*(v8 - 2) == v6) {
          v8 -= 2;
          goto LABEL_21;
        }
        if ((_QWORD*)*(v8 - 1) == v6) {
          --v8;
          goto LABEL_21;
        }
        if ((_QWORD*)*v8 == v6) {
          goto LABEL_21;
        }
        if ((_QWORD*)v8[1] == v6) {
          break;
        }
        v11 = v8 + 2;
        v8 += 4;
        if (v11 == (_QWORD*)GameData_2259500) {
          goto LABEL_25;
        }
      }
      ++v8;
    }
  }
LABEL_21:
  if (v8 != (_QWORD*)GameData_2259500) {
    v12 = GameData_2259500 - (_QWORD)(v8 + 1);
    if ((_QWORD*)GameData_2259500 != v8 + 1) {
      memmove((__int64)v8, (__int64)(v8 + 1),
              GameData_2259500 - (_QWORD)(v8 + 1));
    }
    GameData_2259500 = (__int64)v8 + v12;
  }
LABEL_25:
  v13 = (_QWORD*)a1[146];
  if (v13 == a1 + 142) {
    v14 = 32;
  }
  else {
    if (v13 == nullptr) {
      goto LABEL_30;
    }
    v14 = 40;
  }
  (*(void (**)(__int64))(*v13 + v14))((__int64)v13);
LABEL_30:
  v15 = (_QWORD*)a1[140];
  if (v15 == v6) {
    v16 = 32;
  }
  else {
    if (v15 == nullptr) {
      goto LABEL_35;
    }
    v16 = 40;
  }
  (*(void (**)(__int64))(*v15 + v16))((__int64)v15);
LABEL_35:
  game_menu_BasicMenu_Destroy_BasicMenu((__int64)a1);
  v17 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v17 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v17, (__int64)a1);
}

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
