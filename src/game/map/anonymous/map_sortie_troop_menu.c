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
  (*(void (**)(void))(*(_QWORD*)v6 + v3))();

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

#pragma GCC visibility pop
