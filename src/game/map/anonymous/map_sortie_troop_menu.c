#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_17826a0(__int64, __int64);
__int64 GameRoutine_871660(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 game_menu_BasicMenu_SavedCursor_GetItem(_QWORD);
extern __int64 (*game_map_anonymous_MapSortieMenuItem_vtable[])();
extern __int64 GameData_2131d58[15];
extern __int64 GameData_21ca310;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e008[9];
__int64 MapSortieTroopMenu_Unknown109(_QWORD* a1);
__int64 MapSortieTroopMenu_Unknown112(__int64 a1);
__int64 MapSortieTroopMenu_Unknown128(__int64 a1);
bool game_map_anonymous_MapSortieTroopMenu_MapSortieTroopMenu_closure_Invoke(
    __int64 a1, __int64 a2);
__int64 MultiMenuSequence_17871c0(__int64 result, unsigned int, int);
__int64 memmove(__int64, __int64, unsigned __int64);
extern __int64 GameData_2131d60[14];
extern __int64 GameData_2259500;
extern __int64 game_menu_UnitGridSelectMenu_listeners_;
void game_menu_BasicMenu_Destroy_BasicMenu(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void MapSortieTroopMenu_DeletingDestructor(_QWORD* a1);
__int64 MapSortieTroopMenu_1783ca0(__int64* a1, __int64 a2);

void MapSortieTroopMenu_DeletingDestructor(_QWORD* a1)
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

__int64 MapSortieTroopMenu_1783ca0(__int64* a1, __int64 a2)
{
  __int64 v2;

  v2 = *a1;
  if ((*(_BYTE*)(a1[132] + 356) & 1) == 0) {
    return (*(__int64 (**)(__int64))(v2 + 1128))((__int64)a1);
  }
  (*(void (**)(__int64*, __int64))(v2 + 576))(a1, a2);
  *(_DWORD*)(a1[132] + 356) &= ~1u;
  *(_DWORD*)(a1[132] + 356) &= ~2u;
  MultiMenuSequence_17871c0(
      a1[132],
      *(_DWORD*)(*(_QWORD*)(a1[132] + 8LL * *(unsigned int*)(a1[132] + 352) +
                            304) +
                 1064LL) == 0,
      0);
  (*(void (**)(__int64*))(*a1 + 1112))(a1);
  return 0;
}

__int64 MapSortieTroopMenu_Unknown109(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;

  v2 = a1[42];
  if (v2 != 0 && (v3 = __dynamic_cast(v2, GameData_212e008[0],
                                      GameData_2131d58[0], 0)) != 0 ||
      (v4 = game_menu_BasicMenu_SavedCursor_GetItem(
           *(_QWORD*)(a1[132] + 336LL))) != 0 &&
          (v3 = __dynamic_cast(v4, GameData_212e008[0], GameData_2131d58[0],
                               0)) != 0) {
    v5 = *(_QWORD*)(v3 + 88);
  }
  else {
    v5 = 0;
  }
  v6 = (_QWORD*)a1[19];
  if (v6 == nullptr) {
    v6 = a1;
  }
  GameRoutine_17826a0(v6[4], v5);
  return 8;
}

__int64 MapSortieTroopMenu_Unknown112(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _BYTE v5[32];
  _BYTE* v6;

  v1 = *(_QWORD*)(a1 + 152);
  v6 = nullptr;
  if (v1 != 0) {
    a1 = v1;
  }
  v2 = GameRoutine_871660(a1, v5);
  if (v6 == v5) {
    v3 = 32;
  }
  else {
    if (v6 == nullptr) {
      goto LABEL_8;
    }
    v3 = 40;
  }
  (*(void (**)(void*))(*(_QWORD*)v6 + v3))((void*)v6);

LABEL_8:
  if (v2 != 0) {
    return 12;
  }
  else {
    return 1;
  }
}

__int64 MapSortieTroopMenu_Unknown128(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;

  v13 = 17;
  result = game_UnitPool_GetFirst(&v13);
  if (result != 0) {
    v3 = *(_QWORD*)(result + 432);
    v4 = result;
    if (v3 == 0) {
      v3 = *(_QWORD*)(result + 440);
      if (v3 != 0) {
        v5 = *(unsigned __int8*)(v3 + 16);
        if (v5 < 9) {
          v12 = v5 - 3;
          while (1) {
            if (v12 == 0) {
              v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
              if (v3 != 0) {
                break;
              }
            }
            if (++v12 == 6) {
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
    v6 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  LABEL_8:
    while (1) {
      v7 = v4;
      v4 = v3;
      v8 = fw_memory_HeapManager_Allocate(*v6, 104, 16, 0);
      *(_WORD*)(v8 + 16) = 0;
      *(_DWORD*)(v8 + 40) = 0;
      *(_QWORD*)(v8 + 48) = 0;
      *(_QWORD*)(v8 + 56) = 0;
      *(_QWORD*)(v8 + 64) = 0;
      *(_QWORD*)(v8 + 72) = 0;
      *(_WORD*)(v8 + 80) = 257;
      *(_BYTE*)(v8 + 82) = 1;
      *(_QWORD*)(v8 + 88) = v7;
      *(_DWORD*)(v8 + 96) = 0;
      *(_QWORD*)v8 = game_map_anonymous_MapSortieMenuItem_vtable;
      *(_QWORD*)(v8 + 8) = 0;
      result = GameRoutine_16e0c00(a1, v8);
      if (v4 == 0) {
        break;
      }
      v3 = *(_QWORD*)(v4 + 432);
      if (v3 == 0) {
        v9 = *(_QWORD*)(v4 + 440);
        if (v9 != 0) {
          v10 = *(unsigned __int8*)(v9 + 16);
          v3 = 0;
          if (v10 <= 8) {
            v11 = v10 - 3;
            while (1) {
              if (v11 == 0) {
                v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                if (v3 != 0) {
                  break;
                }
              }
              if (++v11 == 6) {
                v3 = 0;
                goto LABEL_8;
              }
            }
          }
        }
      }
    }
  }
  return result;
}

bool game_map_anonymous_MapSortieTroopMenu_MapSortieTroopMenu_closure_Invoke(
    __int64 a1, __int64 a2)
{
  return *(_QWORD*)(*(_QWORD*)a2 + 88LL) == *(_QWORD*)(a1 + 8);
}

#pragma GCC visibility pop
