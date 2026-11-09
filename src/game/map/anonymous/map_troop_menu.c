#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_178cd40(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Count(_QWORD);
__int64 game_menu_BasicMenu_Unknown16de4d0(_QWORD);
__int64 game_menu_BasicMenu_Unknown16defa0(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern __int64 (*game_map_anonymous_MapBattleMenuItem_vtable[])();
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64 GameData_21ca310;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* msg_MessageManager_instance__ptr[2];
extern int GameData_1c001ac[];
__int64 MapTroopMenu_Unknown85(__int64 a1);
__int64 MapTroopMenu_Unknown107(__int64 a1);
__int64 MapTroopMenu_Unknown128(__int64 result);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16dd9a0(_QWORD);
extern __int64 (*GameData_20c93c8[])();
extern __int64 GameData_20c77f8;
extern __int64* GameData_212e008[9];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
__int64 MapTroopMenu_178cd40(__int64 a1, __int64 a2);

__int64 MapTroopMenu_Unknown85(__int64 a1)
{
  const char* v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  _QWORD v6[4];
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  if ((unsigned int)*(unsigned __int8*)(a1 + 1184) - 1 > 2) {
    v2 = "MID_TroopList_PlayerTeam";
  }
  else {
    v2 = (char*)GameData_1c001ac +
         GameData_1c001ac[(unsigned __int8)(*(_BYTE*)(a1 + 1184) - 1)];
  }
  v9 = -1;
  v10 = -1;
  v11 = -1;
  v12 = -1;
  v3 = *msg_MessageManager_instance__ptr[0];
  v13 = -1;
  v14 = -1;
  v15 = -1;
  v16 = -1;
  v17 = -1;
  v18 = -1;
  v19 = -1;
  v20 = -1;
  v6[0] = msg_TagSelector_vtable;
  v6[1] = 0xFFFF0001FFFF0000LL;
  v6[2] = 0xFFFF0004FFFF0002LL;
  v6[3] = 0xFFFF0006FFFF0005LL;
  v21 = 8;
  v7 = -65529;
  v8 = -65528;
  result = GameRoutine_a4dbe0(v3, v2, 0, v6);
  if (result != 0) {
    v5 = result;
    result = ui_LayoutAccessor_FindTextBox(a1 + 848, "T_Txt");
    if (result != 0) {
      return GameRoutine_156c5d0(result, v5, 0);
    }
  }
  return result;
}

__int64 MapTroopMenu_Unknown107(__int64 a1)
{
  unsigned __int8 v1;
  __int64 v3;
  __int64 v4;
  int v5;
  unsigned __int8 v6;
  __int64 v7;
  __int64 v9;
  int v10;
  char v11;
  int v12;
  int v13;

  v1 = *(_BYTE*)(a1 + 1184);
  while (1) {
  LABEL_2:
    if (((v1 + 1) & 0xFC) != 0) {
      v1 = 0;
    }
    else {
      ++v1;
    }
    v12 = 1 << v1;
    if ((unsigned int)game_UnitPool_Count(&v12) != 0) {
      v3 = *(_QWORD*)(GameData_21ca310 + 56) + 556000LL;
      v4 = *(_QWORD*)(v3 + 24LL * v1);
      if (v4 != 0) {
        break;
      }
    }
  }
  while ((*(_BYTE*)(v4 + 417) & 0x1C) != 0) {
    v4 = *(_QWORD*)(v4 + 432);
    if (v4 == 0) {
      goto LABEL_2;
    }
  }
  v5 = *(unsigned __int8*)(a1 + 1184);
  if (v5 == v1) {
    v6 = v1 + 1;
  }
  else {
    v6 = v1;
  }
  v7 = *(_QWORD*)(v3 + 24LL * v6);
  if (v7 == 0) {
    return 0;
  }
  while ((*(_BYTE*)(v7 + 417) & 0x1C) != 0) {
    v7 = *(_QWORD*)(v7 + 432);
    if (v7 == 0) {
      return 0;
    }
  }
  while (1) {
  LABEL_17:
    if ((((_BYTE)v5 + 1) & 0xFC) != 0) {
      LOBYTE(v5) = 0;
    }
    else {
      LOBYTE(v5) = v5 + 1;
    }
    v13 = 1 << v5;
    if ((unsigned int)game_UnitPool_Count(&v13) != 0) {
      v9 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                      24LL * (unsigned __int8)v5 + 556000);
      if (v9 != 0) {
        break;
      }
    }
  }
  while ((*(_BYTE*)(v9 + 417) & 0x1C) != 0) {
    v9 = *(_QWORD*)(v9 + 432);
    if (v9 == 0) {
      goto LABEL_17;
    }
  }
  v10 = *(unsigned __int8*)(a1 + 1184);
  *(_QWORD*)(a1 + 552) = 0;
  if (v10 == (unsigned __int8)v5) {
    v11 = v5 + 1;
  }
  else {
    v11 = v5;
  }
  *(_BYTE*)(a1 + 1184) = v11;
  game_menu_BasicMenu_Unknown16defa0(a1);
  GameRoutine_178cd40(a1, *(unsigned int*)(a1 + 1068));
  game_menu_BasicMenu_Unknown16de4d0(a1);
  return 13;
}

__int64 MapTroopMenu_Unknown128(__int64 result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;

  v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                  24LL * *(unsigned __int8*)(result + 1184) + 556000);
  if (v1 != 0) {
    v2 = result;
    v3 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    do {
      if ((*(_BYTE*)(v1 + 416) & 8) != 0) {
        break;
      }
      v4 = *(_QWORD*)(v1 + 432);
      v5 = fw_memory_HeapManager_Allocate(*v3, 104, 16, 0);
      *(_WORD*)(v5 + 16) = 0;
      *(_DWORD*)(v5 + 40) = 0;
      *(_QWORD*)(v5 + 48) = 0;
      *(_QWORD*)(v5 + 56) = 0;
      *(_QWORD*)(v5 + 64) = 0;
      *(_QWORD*)(v5 + 72) = 0;
      *(_WORD*)(v5 + 80) = 257;
      *(_BYTE*)(v5 + 82) = 1;
      *(_QWORD*)(v5 + 88) = v1;
      *(_DWORD*)(v5 + 96) = 0;
      *(_QWORD*)v5 = game_map_anonymous_MapBattleMenuItem_vtable;
      *(_QWORD*)(v5 + 8) = 0;
      result = GameRoutine_16e0c00(v2, v5);
      v1 = v4;
    } while (v4 != 0);
  }
  return result;
}

__int64 MapTroopMenu_178cd40(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v13[4];
  _QWORD* v14;
  int v15;
  __int64 v16;

  v4 = *(_QWORD*)(a1 + 232);
  v3 = *(_QWORD*)(a1 + 240);
  *(_DWORD*)(a1 + 1068) = a2;
  v5 = v13;
  v15 = a2;
  v13[0] = GameData_20c93c8;
  v13[1] = &v15;
  v14 = v13;
  if (v3 == v4) {
    goto LABEL_12;
  }
  v6 = 0;
  v7 = GameData_212e008[0];
  do {
    v8 = *(_QWORD*)(v4 + 8 * v6);
    if (v8 != 0) {
      v9 = __dynamic_cast(v8, v7, &GameData_20c77f8, 0);
      if (v9 == 0) {
        goto LABEL_3;
      }
      v16 = v9;
      if (v14 == nullptr) {
        GameRoutine_60a310(0, a2, v10);
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v14 + 48LL))(v14, &v16) & 1) !=
          0) {
        break;
      }
      v4 = *(_QWORD*)(a1 + 232);
      v3 = *(_QWORD*)(a1 + 240);
    }
  LABEL_3:
    ++v6;
  } while (v6 < (v3 - v4) >> 3);
  v5 = v14;
  if (v14 != v13) {
    if (v14 != nullptr) {
      v11 = 40;
      goto LABEL_13;
    }
    return game_menu_BasicMenu_Unknown16dd9a0(a1);
  }

LABEL_12:
  v11 = 32;

LABEL_13:
  (*(void (**)(_QWORD*, __int64))(*v5 + v11))(v5, a2);
  return game_menu_BasicMenu_Unknown16dd9a0(a1);
}

#pragma GCC visibility pop
