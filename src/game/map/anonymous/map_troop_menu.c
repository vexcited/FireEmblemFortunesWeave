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
__int64
MapTroopMenu_Unknown85_alt1(__int64 a1) __asm__("MapTroopMenu_Unknown85");
__int64 MapTroopMenu_Unknown107(__int64 a1);
__int64 MapTroopMenu_Unknown128(__int64 result);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16dd9a0(_QWORD);
extern __int64 (*GameData_20c93c8[])();
extern __int64 GameData_20c77f8;
extern __int64* GameData_212e008[9];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
__int64 MapTroopMenu_178cd40(__int64 a1, __int64 a2);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD,
                                                       _QWORD);
__int64 GameRoutine_1593d90(_QWORD, _QWORD);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 game_UnitPool_Count_alt1(_QWORD,
                                 long double) __asm__("game_UnitPool_Count");
__int64 game_gameui_1593c60(_QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 std___1___shared_weak_count___release_weak();
__n128 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64* GameData_21319e8[10];
extern __int64 GameData_2131c38[51];
extern char GameData_1a9f09e;
__n128
MapTroopMenu_Unknown84_alt1(__int64 a1) __asm__("MapTroopMenu_Unknown84");
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__int64*
LayoutAccessor_155fbe0_alt1(__int64*,
                            const char*) __asm__("LayoutAccessor_155fbe0");
__int64 GameRoutine_1593d90_alt1(__int64*,
                                 __int64) __asm__("GameRoutine_1593d90");
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 game_UnitPool_Count_alt2(int*) __asm__("game_UnitPool_Count");
__int64 game_gameui_1593c60_alt1(__int64*, int) __asm__("game_gameui_1593c60");
__int64 game_menu_BasicMenu_Unknown16dd9a0_alt1(__int64 result) __asm__(
    "game_menu_BasicMenu_Unknown16dd9a0");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
const char* MapTroopMenu_Unknown84(__int64 a1);
void MapTroopMenu_Unknown85(__int64 a1);
__int64 memmove(__int64, __int64, unsigned __int64);
extern __int64 GameData_2131d60[14];
extern __int64 GameData_2259500;
extern __int64 game_menu_UnitGridSelectMenu_listeners_;
void game_menu_BasicMenu_Destroy_BasicMenu(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void MapTroopMenu_DeletingDestructor(_QWORD* a1);

void MapTroopMenu_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  _QWORD* v4;
  unsigned __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;

  v1 = a1 + 136;
  v3 = GameData_2131d60[0] + 1368;
  *a1 = GameData_2131d60[0] + 16;
  a1[22] = v3;
  v4 = (_QWORD*)game_menu_UnitGridSelectMenu_listeners_;
  if (game_menu_UnitGridSelectMenu_listeners_ != GameData_2259500) {
    v5 = GameData_2259500 - game_menu_UnitGridSelectMenu_listeners_ - 8;
    if ((~(_BYTE)v5 & 0x18) != 0) {
      v6 = ((unsigned __int8)((unsigned int)v5 >> 3) + 1) & 3;
      while ((_QWORD*)*v4 != v1) {
        ++v4;
        if (--v6 == 0) {
          goto LABEL_6;
        }
      }
    }
    else {
    LABEL_6:
      if (v5 < 0x18) {
        goto LABEL_21;
      }
      v4 += 2;
      while (1) {
        if ((_QWORD*)*(v4 - 2) == v1) {
          v4 -= 2;
          goto LABEL_17;
        }
        if ((_QWORD*)*(v4 - 1) == v1) {
          --v4;
          goto LABEL_17;
        }
        if ((_QWORD*)*v4 == v1) {
          goto LABEL_17;
        }
        if ((_QWORD*)v4[1] == v1) {
          break;
        }
        v7 = v4 + 2;
        v4 += 4;
        if (v7 == (_QWORD*)GameData_2259500) {
          goto LABEL_21;
        }
      }
      ++v4;
    }
  }
LABEL_17:
  if (v4 != (_QWORD*)GameData_2259500) {
    v8 = GameData_2259500 - (_QWORD)(v4 + 1);
    if ((_QWORD*)GameData_2259500 != v4 + 1) {
      memmove((__int64)v4, (__int64)(v4 + 1),
              GameData_2259500 - (_QWORD)(v4 + 1));
    }
    GameData_2259500 = (__int64)v4 + v8;
  }
LABEL_21:
  v9 = (_QWORD*)a1[146];
  if (v9 == a1 + 142) {
    v10 = 32;
  }
  else {
    if (v9 == nullptr) {
      goto LABEL_26;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v9 + v10))((__int64)v9);
LABEL_26:
  v11 = (_QWORD*)a1[140];
  if (v11 == v1) {
    v12 = 32;
  }
  else {
    if (v11 == nullptr) {
      goto LABEL_31;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v11 + v12))((__int64)v11);
LABEL_31:
  game_menu_BasicMenu_Destroy_BasicMenu((__int64)a1);
  v13 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v13 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v13,
                                (__int64)a1);
}

const char* MapTroopMenu_Unknown84(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64* v4;
  _QWORD* v5;
  __int64* v6;
  unsigned int v7;
  const char* result;
  __int64 v9;
  __int64 v10;
  unsigned __int8 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int8 v14;
  __int64 v15;
  const char* v16;
  struct {
    char* v17;
    const char* v18;
    char v19;
    char gap25_[3];
    int v20;
    unsigned int v21;
    char v22;
    char gap37_[3];
    __int64 v23;
  } v17_;

  ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 848, (__int64)"L_Key", 0);
  ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 848, (__int64)"L_Num", 0);
  v2 = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                      GameData_2131c38[0], 0);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v2 + 376LL))(v2) & 1) != 0) {
    v3 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
    game_gameui_1593c60_alt1((__int64*)(a1 + 952), v3);
  }
  v4 = LayoutAccessor_155fbe0_alt1((__int64*)(a1 + 848), "L_Key");
  v5 = *(_QWORD**)(a1 + 1056);
  if (v5 != nullptr) {
    v6 = v4;
    v7 = (unsigned int)X8CALL_X0(
        _QWORD*, (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(
                     *v5 + 192LL))((void*)v5, *(_QWORD*)(a1 + 1056)));
    v4 = v6;
  }
  else {
    v7 = 2;
  }
  v17_.v22 = 0;
  v17_.v23 = 0;
  v17_.v17 = &GameData_1a9f09e;
  v17_.v18 = "MID_KeyHelp_ForceChange";
  v17_.v19 = 1;
  v17_.v20 = 6;
  v17_.v21 = v7;
  GameRoutine_1593d90_alt1(v4, (__int64)&v17_.v17);
  LayoutAccessor_1560070_alt1((void*)(&v17_.v17), (__int64*)(a1 + 848),
                              "L_Key");
  result = v17_.v18;
  if (v17_.v18 != nullptr) {
    v9 = std___1___shared_weak_count_lock_alt1((__int64)v17_.v18);
    v10 = (__int64)v17_.v17;
    result = v17_.v18;
    if (v17_.v18 != nullptr) {
      result = (const char*)std___1___shared_weak_count___release_weak_alt1(
          (__int64)v17_.v18);
    }
    if (v9 != 0 && v10 != 0) {
      v11 = *(_BYTE*)(a1 + 1184);
      while (1) {
      LABEL_12:
        if (((v11 + 1) & 0xFC) != 0) {
          v11 = 0;
        }
        else {
          ++v11;
        }
        LODWORD(v17_.v17) = 1 << v11;
        if ((unsigned int)game_UnitPool_Count_alt2((int*)&v17_.v17) != 0) {
          v12 = *(_QWORD*)(GameData_21ca310 + 56) + 556000LL;
          v13 = *(_QWORD*)(v12 + 24LL * v11);
          if (v13 != 0) {
            break;
          }
        }
      }
      while ((*(_BYTE*)(v13 + 417) & 0x1C) != 0) {
        v13 = *(_QWORD*)(v13 + 432);
        if (v13 == 0) {
          goto LABEL_12;
        }
      }
      if (*(unsigned __int8*)(a1 + 1184) == v11) {
        v14 = v11 + 1;
      }
      else {
        v14 = v11;
      }
      v15 = *(_QWORD*)(v12 + 24LL * v14);
      if (v15 != 0) {
        v16 = "Default";
        while ((*(_BYTE*)(v15 + 417) & 0x1C) != 0) {
          v15 = *(_QWORD*)(v15 + 432);
          if (v15 == 0) {
            v16 = "Disable";
            break;
          }
        }
      }
      else {
        v16 = "Disable";
      }
      result = (const char*)LayoutAccessor_1562cf0_alt1(v10, v16);
    }
    if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      return (const char*)std___1___shared_weak_count___release_weak_alt1(v9);
    }
  }
  return result;
}

void MapTroopMenu_Unknown85(__int64 a1)
{
  char* v2;
  char* v3;
  __int64 v4;
  __int64 v5;

  if ((unsigned int)*(unsigned __int8*)(a1 + 1184) - 1 > 2) {
    v2 = "MID_TroopList_PlayerTeam";
  }
  else {
    v2 = (char*)GameData_1c001ac +
         GameData_1c001ac[(unsigned __int8)(*(_BYTE*)(a1 + 1184) - 1)];
  }
  v3 = GameRoutine_a4dbe0_alt1(*msg_MessageManager_instance__ptr[0], v2, 0);
  if (v3 != nullptr) {
    v4 = (__int64)v3;
    v5 = ui_LayoutAccessor_FindTextBox_alt1((__int64*)(a1 + 848),
                                            (__int64)"T_Txt");
    if (v5 != 0) {
      GameRoutine_156c5d0_alt1(v5, v4, 0);
    }
  }
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
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;
  int v14;
  __int64 v15;

  v4 = *(_QWORD*)(a1 + 232);
  v3 = *(_QWORD*)(a1 + 240);
  *(_DWORD*)(a1 + 1068) = a2;
  v5 = v12_.v12;
  v14 = a2;
  v12_.v12[0] = GameData_20c93c8;
  v12_.v12[1] = &v14;
  v12_.v13 = v12_.v12;
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
      v15 = v9;
      if (v12_.v13 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v12_.v13 + 48LL))(v12_.v13,
                                                                  &v15) &
           1) != 0) {
        break;
      }
      v4 = *(_QWORD*)(a1 + 232);
      v3 = *(_QWORD*)(a1 + 240);
    }
  LABEL_3:
    ++v6;
  } while (v6 < (v3 - v4) >> 3);
  v5 = v12_.v13;
  if (v12_.v13 != v12_.v12) {
    if (v12_.v13 != nullptr) {
      v10 = 40;
      goto LABEL_13;
    }
    return game_menu_BasicMenu_Unknown16dd9a0_alt1(a1);
  }
LABEL_12:
  v10 = 32;
LABEL_13:
  (*(void (**)(_QWORD*, __int64))(*v5 + v10))(v5, a2);
  return game_menu_BasicMenu_Unknown16dd9a0_alt1(a1);
}

#pragma GCC visibility pop
