#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_1789830(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 (*game_facility_anonymous_RelianceMemoryMenuItem_vtable[])();
extern __int64 GameData_21c9ac0;
extern __int64 GameData_21c9ac8;
extern __int64 GameData_21ca310;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 RelianceMemoryMenu_Unknown84(__int64 a1);
__int64 RelianceMemoryMenu_Unknown128(__int64 a1);
bool game_facility_anonymous_RelianceMemoryMenu_FindMenuItem_closure_Invoke(
    __int64 a1, __int64* a2);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__int64 UnitUtil_15e0120(__int64);
__int64 UnitUtil_15e0200(__int64);
__int64 UnitUtil_15e04f0(__int64 result);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_gameui_15997d0(__int64 result, __int64, char);
__int64 game_menu_UnitGridSelectMenu_Unknown88(_QWORD*);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64* GameData_212e008[9];
extern __int64 GameData_2124380;
__int64 RelianceMemoryMenu_Unknown88(_QWORD* a1);
__int64 memmove(__int64, __int64, unsigned __int64);
extern __int64 (*GameData_2124210[])();
extern __int64 (*game_facility_anonymous_RelianceMemoryMenu_vtable[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr[])();
extern __int64* GameData_212e0c0[7];
extern __int64 GameData_2246ca0;
extern __int64 GameData_2259500;
extern __int64 game_menu_UnitGridSelectMenu_listeners_;
extern int GameData_2246ca8;
void Impl_717b40();
void game_menu_BasicMenu_Destroy_BasicMenu(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void RelianceMemoryMenu_DeletingDestructor(_QWORD* a1);

void RelianceMemoryMenu_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v3;
  __int64* v4;
  _QWORD* v5;
  unsigned __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;

  *a1 = game_facility_anonymous_RelianceMemoryMenu_vtable;
  a1[22] = GameData_2124210;
  a1[132] = game_menu_GameMenuImpl_ImplUnknown00_ptr;
  Impl_717b40();
  if (GameData_2246ca0 != 0 && GameData_2246ca8-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_2246ca0 + 24LL))(
        (__int64)GameData_2246ca0);
    if (GameData_2246ca0 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_2246ca0 + 8LL))(
          GameData_2246ca0);
    }
    GameData_2246ca0 = 0;
  }
  v3 = a1 + 134;
  v4 = GameData_212e0c0[0];
  *a1 = GameData_212e0c0[0] + 2;
  a1[132] = v4 + 179;
  a1[22] = v4 + 153;
  v5 = (_QWORD*)game_menu_UnitGridSelectMenu_listeners_;
  if (game_menu_UnitGridSelectMenu_listeners_ != GameData_2259500) {
    v6 = GameData_2259500 - game_menu_UnitGridSelectMenu_listeners_ - 8;
    if ((~(_BYTE)v6 & 0x18) != 0) {
      v7 = ((unsigned __int8)((unsigned int)v6 >> 3) + 1) & 3;
      while ((_QWORD*)*v5 != v3) {
        ++v5;
        if (--v7 == 0) {
          goto LABEL_12;
        }
      }
    }
    else {
    LABEL_12:
      if (v6 < 0x18) {
        goto LABEL_27;
      }
      v5 += 2;
      while (1) {
        if ((_QWORD*)*(v5 - 2) == v3) {
          v5 -= 2;
          goto LABEL_23;
        }
        if ((_QWORD*)*(v5 - 1) == v3) {
          --v5;
          goto LABEL_23;
        }
        if ((_QWORD*)*v5 == v3) {
          goto LABEL_23;
        }
        if ((_QWORD*)v5[1] == v3) {
          break;
        }
        v8 = v5 + 2;
        v5 += 4;
        if (v8 == (_QWORD*)GameData_2259500) {
          goto LABEL_27;
        }
      }
      ++v5;
    }
  }
LABEL_23:
  if (v5 != (_QWORD*)GameData_2259500) {
    v9 = GameData_2259500 - (_QWORD)(v5 + 1);
    if ((_QWORD*)GameData_2259500 != v5 + 1) {
      memmove((__int64)v5, (__int64)(v5 + 1),
              GameData_2259500 - (_QWORD)(v5 + 1));
    }
    GameData_2259500 = (__int64)v5 + v9;
  }
LABEL_27:
  v10 = (_QWORD*)a1[144];
  if (v10 == a1 + 140) {
    v11 = 32;
  }
  else {
    if (v10 == nullptr) {
      goto LABEL_32;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v10 + v11))((__int64)v10);
LABEL_32:
  v12 = (_QWORD*)a1[138];
  if (v12 == v3) {
    v13 = 32;
  }
  else {
    if (v12 == nullptr) {
      goto LABEL_37;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*v12 + v13))((__int64)v12);
LABEL_37:
  game_menu_BasicMenu_Destroy_BasicMenu((__int64)a1);
  v14 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v14 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v14,
                                (__int64)a1);
}

__int64 RelianceMemoryMenu_Unknown84(__int64 a1)
{
  ui_LayoutAccessor_SetPaneVisible(a1 + 952, "L_Num", 0);
  return ui_LayoutAccessor_SetPaneVisible(a1 + 848,
                                          "L_UnitInfoDetail/L_BlnFavor", 0);
}

__int64 RelianceMemoryMenu_Unknown88(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  char v4;
  __int64 v5;
  __int64 v6;
  struct {
    __int64 v8;
    __int64 v9;
  } v8_;
  _BYTE v10[20];

  v2 = a1[42];
  if (v2 != 0) {
    v3 = __dynamic_cast(v2, GameData_212e008[0], &GameData_2124380, 0);
  }
  else {
    v3 = 0;
  }
  v4 = *(_BYTE*)(v3 + 96);
  UnitUtil_15e0120((__int64)v10);
  if ((v4 & 1) == 0) {
    UnitUtil_15e0200((__int64)v10);
  }
  game_menu_UnitGridSelectMenu_Unknown88(a1);
  LayoutAccessor_1560070((void*)(&v8_.v8), a1 + 106,
                         (__int64)"L_UnitInfoDetail");
  if (v8_.v9 != 0) {
    v5 = std___1___shared_weak_count_lock(v8_.v9);
    v6 = v8_.v8;
    if (v8_.v9 != 0) {
      std___1___shared_weak_count___release_weak(v8_.v9);
    }
    if (v5 != 0 && v6 != 0) {
      game_gameui_15997d0(v6, *(_QWORD*)(v3 + 88), 0);
    }
    else if (v5 == 0) {
      return UnitUtil_15e04f0((__int64)v10);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak(v5);
    }
  }
  return UnitUtil_15e04f0((__int64)v10);
}

__int64 RelianceMemoryMenu_Unknown128(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  unsigned int v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  int v21;

  v21 = 241;
  result = game_UnitPool_GetFirst(&v21);
  if (result != 0) {
    v3 = *(_QWORD*)(result + 432);
    v4 = result;
    if (v3 == 0) {
      v3 = *(_QWORD*)(result + 440);
      if (v3 != 0) {
        v5 = *(unsigned __int8*)(v3 + 16);
        if (v5 < 9) {
          while (1) {
            v20 = v5 + 1;
            if (((2 << v5) & 0xF0) != 0) {
              v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                              24LL * (unsigned __int8)(v5 + 1) + 556000);
              if (v3 != 0) {
                break;
              }
            }
            v5 = v20;
            if (v20 == 9) {
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
      v7 = (__int64*)GameData_21c9ac0;
      v6 = GameData_21c9ac8;
      v8 = v3;
      if (GameData_21c9ac0 != GameData_21c9ac8) {
        v9 = *(_QWORD*)(v4 + 392);
        while (1) {
          v10 = *v7++;
          result = GameRoutine_1789830(v9, v10);
          if ((result & 1) != 0) {
            break;
          }
          if (v7 == (__int64*)v6) {
            goto LABEL_14;
          }
        }
        v11 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 104, 16, 0);
        *(_WORD*)(v11 + 16) = 0;
        *(_DWORD*)(v11 + 40) = 0;
        *(_QWORD*)(v11 + 48) = 0;
        *(_QWORD*)(v11 + 56) = 0;
        *(_QWORD*)(v11 + 64) = 0;
        *(_QWORD*)(v11 + 72) = 0;
        *(_QWORD*)(v11 + 88) = v4;
        *(_WORD*)(v11 + 80) = 257;
        *(_QWORD*)v11 = game_facility_anonymous_RelianceMemoryMenuItem_vtable;
        *(_QWORD*)(v11 + 8) = 0;
        *(_BYTE*)(v11 + 82) = 1;
        *(_BYTE*)(v11 + 96) = 1;
        result = GameRoutine_16e0c00(a1, v11);
      }
    LABEL_14:
      if (v8 == 0) {
        break;
      }
      v3 = *(_QWORD*)(v8 + 432);
      v4 = v8;
      if (v3 == 0) {
        v12 = *(_QWORD*)(v8 + 440);
        v4 = v8;
        if (v12 != 0) {
          v13 = *(unsigned __int8*)(v12 + 16);
          v3 = 0;
          v4 = v8;
          if (v13 <= 8) {
            while (1) {
              v14 = v13 + 1;
              if (((2 << v13) & 0xF0) != 0) {
                v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                24LL * (unsigned __int8)(v13 + 1) + 556000);
                if (v3 != 0) {
                  break;
                }
              }
              ++v13;
              if (v14 == 9) {
                v3 = 0;
                v4 = v8;
                goto LABEL_8;
              }
            }
            v4 = v8;
          }
        }
      }
    }
  }
  v15 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556192LL);
  if (v15 != 0) {
    v16 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    do {
      v17 = v15;
      v15 = *(_QWORD*)(v15 + 432);
      v18 = *(_QWORD*)(v17 + 392);
      if (v18 != 0 && *(_QWORD*)(v18 + 272) != 0) {
        v19 = fw_memory_HeapManager_Allocate(*v16, 104, 16, 0);
        *(_WORD*)(v19 + 16) = 0;
        *(_DWORD*)(v19 + 40) = 0;
        *(_QWORD*)(v19 + 48) = 0;
        *(_QWORD*)(v19 + 56) = 0;
        *(_QWORD*)(v19 + 64) = 0;
        *(_QWORD*)(v19 + 72) = 0;
        *(_WORD*)(v19 + 80) = 257;
        *(_BYTE*)(v19 + 82) = 1;
        *(_QWORD*)(v19 + 88) = v17;
        *(_QWORD*)v19 = game_facility_anonymous_RelianceMemoryMenuItem_vtable;
        *(_QWORD*)(v19 + 8) = 0;
        *(_BYTE*)(v19 + 96) = 0;
        result = GameRoutine_16e0c00(a1, v19);
      }
    } while (v15 != 0);
  }
  return result;
}

bool game_facility_anonymous_RelianceMemoryMenu_FindMenuItem_closure_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;

  v2 = *a2;
  if (*a2 != 0) {
    v3 = *(_QWORD*)(*(_QWORD*)(v2 + 88) + 392LL);
    if (v3 != 0 && *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL) + 1672LL) ==
                       *(_QWORD*)(*(_QWORD*)(v3 + 24) + 1672LL)) {
      **(_QWORD**)(a1 + 16) = v2;
    }
  }
  return **(_QWORD**)(a1 + 16) != 0;
}

#pragma GCC visibility pop
