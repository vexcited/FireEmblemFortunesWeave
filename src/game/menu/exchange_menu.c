#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6c51e0(_QWORD);
__int64 GameRoutine_6c6da0(_QWORD);
__int64 GameRoutine_6c6ec0(_QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 game_UnitItemList_Sort(_QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_20579c8[])();
extern __int64 (*GameData_2057a48[])();
extern __int64 (*GameData_2057ac8[])();
extern __int64 GameData_2057588;
extern __int64 GameData_20577e0;
extern __int64 game_g_game_setting;
extern __int64* GameData_212e008[9];
extern __int64* GameData_21319f0[9];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 ExchangeMenu_Unknown39(__int64 result, __int64 a2);
__int64 ExchangeMenu_Unknown5(__int64 result);
__int64 ExchangeMenu_15c7680(__int64 a1);
bool game_menu_ExchangeMenu_OnPostCreate_lambda0_Invoke(__int64 a1, __int64 a2);
bool game_menu_ExchangeMenu_OnPostCreate_lambda1_Invoke(__int64 a1, __int64 a2);
__int64 game_menu_ExchangeMenu_OnPageActive_lambda0_Invoke(__int64 a1,
                                                           _QWORD* a2);
__int64 game_menu_ExchangeMenu_OnPageActive_lambda1_Invoke(__int64 a1,
                                                           _QWORD* a2);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__int64 GameRoutine_1571860(__int64*, __int64, char, char, char, char);
__int64 GameRoutine_1572370(_QWORD, _QWORD);
__int64 GameRoutine_15bd460(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_6c51e0(_QWORD);
__int64 game_6c6ec0(_QWORD);
__int64 game_gameui_UnitUtil_GetNext(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPartsLayout(_QWORD, _QWORD);
extern __int64 (*GameData_2057b48[])();
extern __int64 (*GameData_2057bc8[])();
extern __int64 (*game_menu_ItemUnitMenu_vtable[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr[])();
extern __int64 (*game_menu_anonymous_ExchangeUnitMenu_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ExchangeMenu_Unknown35(__int64* a1);
__int64 ExchangeMenu_Unknown36(__int64* a1);
__int64 ExchangeMenu_Unknown48(__int64 a1, __int64 a2);
__int64 game_menu_ExchangeMenu_OnPageActive(__int64 a1);
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__int64 GameRoutine_6c6da0_alt1(__int64) __asm__("GameRoutine_6c6da0");
__int64 LayoutAccessor_1571860(__int64*, __int64, char, char, char, char);
__int64 game_6c51e0_alt1(__int64 result) __asm__("game_6c51e0");
__int64 game_6c6ec0_alt1(__int64) __asm__("game_6c6ec0");
__int64 game_UnitItemList_Sort_alt1(__int64, unsigned int,
                                    int) __asm__("game_UnitItemList_Sort");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");

__int64 ExchangeMenu_Unknown35(__int64* a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
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
  char v20;
  __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  __int64 v24;
  __int64* v26;
  __int64 v27;

  LayoutAccessor_1560070((void*)(&v26), a1 + 25, (__int64)"L_UnitInfoL");
  if (v27 != 0) {
    v2 = std___1___shared_weak_count_lock(v27);
    v3 = v26;
    if (v27 != 0) {
      std___1___shared_weak_count___release_weak(v27);
    }
    if (v2 == 0 || v3 == nullptr) {
      if (v2 == 0) {
        goto LABEL_23;
      }
    }
    else {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                memory_order_relaxed);
      v5 = std___1___shared_weak_count_lock(v2);
      if (v5 != 0) {
        v6 = v5;
        GameRoutine_1572370(v3, 0);
        if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
          std___1___shared_weak_count___release_weak(v6);
        }
      }
      std___1___shared_weak_count___release_weak(v2);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                memory_order_relaxed);
      v7 = a1[45];
      v8 = std___1___shared_weak_count_lock(v2);
      if (v8 != 0) {
        v9 = v8;
        GameRoutine_1571860(v3, v7, 1, 0, 0, 0);
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          std___1___shared_weak_count___release_weak(v9);
        }
      }
      std___1___shared_weak_count___release_weak(v2);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                memory_order_relaxed);
      v10 = std___1___shared_weak_count_lock(v2);
      if (v10 != 0) {
        v11 = v10;
        LayoutAccessor_1562cf0(v3, "List00");
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          std___1___shared_weak_count___release_weak(v11);
        }
      }
      std___1___shared_weak_count___release_weak(v2);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      std___1___shared_weak_count___release_weak(v2);
    }
  }
LABEL_23:
  v12 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       1088, 16, 0);
  v13 = a1[26];
  if (v13 == 0) {
    v21 = ui_LayoutAccessor_FindPartsLayout(a1 + 25, "L_EquipListL");
    v18 = a1[45];
    v19 = v21;
    goto LABEL_31;
  }
  v14 = std___1___shared_weak_count_lock(v13);
  v15 = a1[25];
  v16 = v14;
  v17 = ui_LayoutAccessor_FindPartsLayout(a1 + 25, "L_EquipListL");
  v18 = a1[45];
  v19 = v17;
  if (v16 == 0) {
  LABEL_31:
    v26 = nullptr;
    v27 = 0;
    GameRoutine_15bd460(v12, a1, &v26, v19, v18);
    v16 = 0;
    *(_DWORD*)(v12 + 1080) = 0;
    v20 = 1;
    goto LABEL_32;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                            memory_order_relaxed);
  v26 = (__int64*)v15;
  v27 = v16;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                            memory_order_relaxed);
  GameRoutine_15bd460(v12, a1, &v26, v17, v18);
  if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
  }
  *(_DWORD*)(v12 + 1080) = 0;
  *(_QWORD*)v12 = game_menu_ItemUnitMenu_vtable;
  *(_QWORD*)(v12 + 176) = game_menu_MenuInput_InputUnknown00_ptr;
  if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
  }
  v20 = 0;
LABEL_32:
  *(_QWORD*)(v12 + 336) = 0;
  *(_QWORD*)v12 = game_menu_anonymous_ExchangeUnitMenu_vtable;
  *(_QWORD*)(v12 + 176) = game_menu_MenuInput_InputUnknown00_ptr;
  *(_BYTE*)(v12 + 1084) = 1;
  v23 = *(_QWORD**)(v12 + 256);
  v22 = *(_QWORD**)(v12 + 264);
  while (v23 != v22) {
    if (*v23 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v23 + 8LL))(*v23);
      v22 = *(_QWORD**)(v12 + 264);
    }
    ++v23;
  }
  v24 = *(_QWORD*)(v12 + 344);
  if (v24 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 8LL))(v24);
    *(_QWORD*)(v12 + 344) = 0;
  }
  *(_QWORD*)(v12 + 264) = *(_QWORD*)(v12 + 256);
  *(_QWORD*)(v12 + 240) = *(_QWORD*)(v12 + 232);
  (*(void (**)(__int64))(*(_QWORD*)v12 + 1024LL))(v12);
  (*(void (**)(__int64))(*(_QWORD*)v12 + 1032LL))(v12);
  if ((v20 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
  }
  return v12;
}

__int64 ExchangeMenu_Unknown36(__int64* a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
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
  char v20;
  __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;
  __int64* v31;
  __int64 v32;

  LayoutAccessor_1560070((void*)(&v31), a1 + 25, (__int64)"L_UnitInfoR");
  if (v32 != 0) {
    v2 = std___1___shared_weak_count_lock(v32);
    v3 = v31;
    if (v32 != 0) {
      std___1___shared_weak_count___release_weak(v32);
    }
    if (v2 == 0 || v3 == nullptr) {
      if (v2 == 0) {
        goto LABEL_23;
      }
    }
    else {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                memory_order_relaxed);
      v5 = std___1___shared_weak_count_lock(v2);
      if (v5 != 0) {
        v6 = v5;
        GameRoutine_1572370(v3, 0);
        if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
          std___1___shared_weak_count___release_weak(v6);
        }
      }
      std___1___shared_weak_count___release_weak(v2);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                memory_order_relaxed);
      v7 = a1[46];
      v8 = std___1___shared_weak_count_lock(v2);
      if (v8 != 0) {
        v9 = v8;
        GameRoutine_1571860(v3, v7, 1, 0, 0, 0);
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          std___1___shared_weak_count___release_weak(v9);
        }
      }
      std___1___shared_weak_count___release_weak(v2);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                memory_order_relaxed);
      v10 = std___1___shared_weak_count_lock(v2);
      if (v10 != 0) {
        v11 = v10;
        LayoutAccessor_1562cf0(v3, "List01");
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          std___1___shared_weak_count___release_weak(v11);
        }
      }
      std___1___shared_weak_count___release_weak(v2);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      std___1___shared_weak_count___release_weak(v2);
    }
  }
LABEL_23:
  v12 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       1088, 16, 0);
  v13 = a1[26];
  if (v13 == 0) {
    v21 = ui_LayoutAccessor_FindPartsLayout(a1 + 25, "L_EquipListR");
    v18 = a1[46];
    v19 = v21;
    goto LABEL_31;
  }
  v14 = std___1___shared_weak_count_lock(v13);
  v15 = a1[25];
  v16 = v14;
  v17 = ui_LayoutAccessor_FindPartsLayout(a1 + 25, "L_EquipListR");
  v18 = a1[46];
  v19 = v17;
  if (v16 == 0) {
  LABEL_31:
    v31 = nullptr;
    v32 = 0;
    GameRoutine_15bd460(v12, a1, &v31, v19, v18);
    v16 = 0;
    *(_DWORD*)(v12 + 1080) = 0;
    v20 = 1;
    goto LABEL_32;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                            memory_order_relaxed);
  v31 = (__int64*)v15;
  v32 = v16;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                            memory_order_relaxed);
  GameRoutine_15bd460(v12, a1, &v31, v17, v18);
  if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
  }
  *(_DWORD*)(v12 + 1080) = 0;
  *(_QWORD*)v12 = game_menu_ItemUnitMenu_vtable;
  *(_QWORD*)(v12 + 176) = game_menu_MenuInput_InputUnknown00_ptr;
  if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
  }
  v20 = 0;
LABEL_32:
  *(_BYTE*)(v12 + 1084) = 0;
  *(_QWORD*)(v12 + 336) = 0;
  *(_QWORD*)v12 = game_menu_anonymous_ExchangeUnitMenu_vtable;
  *(_QWORD*)(v12 + 176) = game_menu_MenuInput_InputUnknown00_ptr;
  v23 = *(_QWORD**)(v12 + 256);
  v22 = *(_QWORD**)(v12 + 264);
  while (v23 != v22) {
    if (*v23 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v23 + 8LL))(*v23);
      v22 = *(_QWORD**)(v12 + 264);
    }
    ++v23;
  }
  v24 = *(_QWORD*)(v12 + 344);
  if (v24 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 8LL))(v24);
    *(_QWORD*)(v12 + 344) = 0;
  }
  *(_QWORD*)(v12 + 264) = *(_QWORD*)(v12 + 256);
  *(_QWORD*)(v12 + 240) = *(_QWORD*)(v12 + 232);
  (*(void (**)(__int64))(*(_QWORD*)v12 + 1024LL))(v12);
  (*(void (**)(__int64))(*(_QWORD*)v12 + 1032LL))(v12);
  v25 = *(_QWORD*)(v12 + 336);
  if (v25 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 168LL))(v25);
  }
  *(_QWORD*)(v12 + 336) = 0;
  _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v12, 1, 0, 0);
  v26 = *(_QWORD*)(v12 + 336);
  if (v26 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 160LL))(v26);
    game_IsVibrationEnabled(game_g_game_setting + 712);
    v27 = *(_QWORD*)(v12 + 336);
    v28 = 6;
    if (v27 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v27 + 120LL))(v27) & 1) != 0) {
        v28 = 6;
      }
      else {
        v28 = 2;
      }
    }
  }
  else {
    v28 = 6;
  }
  v29 = *(_DWORD*)(v12 + 356);
  *(_BYTE*)(v12 + 648) = 0;
  *(_DWORD*)(v12 + 356) = v28 | v29 & 0xFFFFFFF9;
  if ((v20 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
  }
  return v12;
}

__int64 ExchangeMenu_Unknown39(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  _QWORD v23[4];
  _QWORD* v24;
  __int64 v25;

  if ((*(_DWORD*)(result + 380) & 0x80000000) != 0) {
    return result;
  }
  v2 = result;
  if ((*(_DWORD*)(result + 384) & 0x80000000) != 0) {
    return result;
  }
  v3 = *(_QWORD*)(result + 304);
  v4 = v23;
  v23[0] = GameData_2057a48;
  v23[1] = v2;
  v24 = v23;
  v5 = *(__int64**)(v3 + 232);
  v6 = *(__int64**)(v3 + 240);
  if (v5 == v6) {
    v7 = 0;
  LABEL_14:
    v9 = 32;
    goto LABEL_15;
  }
  while (1) {
    v7 = *v5;
    if (*v5 != 0) {
      v8 = v24;
      v25 = *v5;
      if (v24 == nullptr) {
      LABEL_53:
        GameRoutine_60a310(v8, a2);
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v24 + 48LL))(v24, &v25) & 1) !=
          0) {
        break;
      }
    }
    if (++v5 == v6) {
      v7 = 0;
      break;
    }
  }
  v4 = v24;
  if (v24 == v23) {
    goto LABEL_14;
  }
  if (v24 != nullptr) {
    v9 = 40;
  LABEL_15:
    (*(void (**)(_QWORD*, __int64))(*v4 + v9))(v4, a2);
  }
  if (v7 != 0) {
    v10 = *(_QWORD*)(v2 + 304);
    v11 = *(_QWORD*)(v10 + 336);
    if (v11 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 168LL))(v11);
    }
    *(_QWORD*)(v10 + 336) = v7;
    _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v10, 1, 0, 0);
    v12 = *(_QWORD*)(v10 + 336);
    if (v12 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 160LL))(v12);
      game_IsVibrationEnabled(game_g_game_setting + 712);
      v13 = *(_QWORD*)(v10 + 336);
      v14 = 4;
      if (v13 != 0) {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v13 + 120LL))(v13) & 1) != 0) {
          v14 = 4;
        }
        else {
          v14 = 0;
        }
      }
    }
    else {
      v14 = 4;
    }
    *(_DWORD*)(v10 + 356) = *(_DWORD*)(v10 + 356) & 0xFFFFFFFB | v14;
    if (*(_DWORD*)(v2 + 376) == 2) {
      (*(void (**)(__int64, __int64))(*(_QWORD*)v7 + 64LL))(v7, 1);
    }
  }
  v15 = *(_QWORD*)(v2 + 312);
  result = (__int64)v23;
  v23[0] = GameData_2057ac8;
  v23[1] = v2;
  v24 = v23;
  v16 = *(__int64**)(v15 + 232);
  v17 = *(__int64**)(v15 + 240);
  if (v16 == v17) {
    v18 = 0;
  LABEL_38:
    v19 = 32;
    goto LABEL_39;
  }
  while (1) {
    v18 = *v16;
    if (*v16 != 0) {
      v8 = v24;
      v25 = *v16;
      if (v24 == nullptr) {
        goto LABEL_53;
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v24 + 48LL))(v24, &v25) & 1) !=
          0) {
        break;
      }
    }
    if (++v16 == v17) {
      v18 = 0;
      break;
    }
  }
  result = (__int64)v24;
  if (v24 == v23) {
    goto LABEL_38;
  }
  if (v24 != nullptr) {
    v19 = 40;
  LABEL_39:
    result =
        (*(__int64 (**)(__int64, __int64))(*(_QWORD*)result + v19))(result, a2);
  }
  if (v18 != 0) {
    v20 = *(_QWORD*)(v2 + 312);
    v21 = *(_QWORD*)(v20 + 336);
    if (v21 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v21 + 168LL))(v21);
    }
    *(_QWORD*)(v20 + 336) = v18;
    _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v20, 1, 0, 0);
    result = *(_QWORD*)(v20 + 336);
    if (result != 0) {
      (*(void (**)(__int64))(*(_QWORD*)result + 160LL))(result);
      game_IsVibrationEnabled(game_g_game_setting + 712);
      result = *(_QWORD*)(v20 + 336);
      v22 = 4;
      if (result != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 120LL))(result);
        if ((result & 1) != 0) {
          v22 = 4;
        }
        else {
          v22 = 0;
        }
      }
    }
    else {
      v22 = 4;
    }
    *(_DWORD*)(v20 + 356) = *(_DWORD*)(v20 + 356) & 0xFFFFFFFB | v22;
    if (*(_DWORD*)(v2 + 376) == 1) {
      result =
          (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v18 + 64LL))(v18, 1);
    }
  }
  *(_DWORD*)(v2 + 356) |= 1u;
  *(_DWORD*)(v2 + 352) = *(_DWORD*)(v2 + 376) == 2;
  return result;
}

__int64 ExchangeMenu_Unknown48(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v5;
  char v6;
  char v7;
  int v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  char v15;
  char v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 result;
  struct {
    __int64* v24;
    __int64 v25;
  } v24_;
  struct {
    __int64* v26;
    __int64 v27;
  } v26_;

  v2 = (_QWORD*)(a1 + 304);
  if (*(_DWORD*)(*(_QWORD*)(a1 + 304 + 8LL * *(unsigned int*)(a1 + 352)) +
                 1064LL) == 0) {
    v14 = *(_QWORD*)(a1 + 360);
    v9 = (_QWORD*)(a1 + 360);
    if (v14 != 0) {
      v15 = game_UnitItemList_Sort_alt1(v14 + 828, 0, 6);
      v16 = game_UnitItemList_Sort_alt1(v14 + 828, 6u, 24);
      if ((v15 & 1) != 0 || (v16 & 1) != 0) {
        v17 = *(_DWORD*)(v14 + 416);
        if ((v17 & 0x10000000) == 0) {
          *(_DWORD*)(v14 + 416) = v17 | 0x10000000;
          game_6c51e0_alt1(v14);
          GameRoutine_6c6da0_alt1(v14);
          game_6c6ec0_alt1(v14);
          *(_DWORD*)(v14 + 416) &= ~0x10000000u;
        }
      }
    }
    *(_QWORD*)(a1 + 360) = a2;
    LayoutAccessor_1560070_alt1((void*)(&v26_.v26), (__int64*)(a1 + 200),
                                "L_UnitInfoL");
    if (v26_.v27 == 0) {
      goto LABEL_28;
    }
    v18 = *(_QWORD*)(a1 + 360);
    v19 = std___1___shared_weak_count_lock_alt1(v26_.v27);
    if (v19 == 0) {
      goto LABEL_26;
    }
    v20 = v19;
    if (v26_.v26 != nullptr) {
      LayoutAccessor_1571860(v26_.v26, v18, 1, 0, 0, 0);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
      std___1___shared_weak_count___release_weak_alt1(v20);
      v21 = v26_.v27;
      if (v26_.v27 == 0) {
        goto LABEL_28;
      }
    }
    else {
    LABEL_26:
      v21 = v26_.v27;
      if (v26_.v27 == 0) {
      LABEL_28:
        v13 = v2;
        goto LABEL_29;
      }
    }
    std___1___shared_weak_count___release_weak_alt1(v21);
    goto LABEL_28;
  }
  v5 = *(_QWORD*)(a1 + 368);
  if (v5 != 0) {
    v6 = game_UnitItemList_Sort_alt1(v5 + 828, 0, 6);
    v7 = game_UnitItemList_Sort_alt1(v5 + 828, 6u, 24);
    if ((v6 & 1) != 0 || (v7 & 1) != 0) {
      v8 = *(_DWORD*)(v5 + 416);
      if ((v8 & 0x10000000) == 0) {
        *(_DWORD*)(v5 + 416) = v8 | 0x10000000;
        game_6c51e0_alt1(v5);
        GameRoutine_6c6da0_alt1(v5);
        game_6c6ec0_alt1(v5);
        *(_DWORD*)(v5 + 416) &= ~0x10000000u;
      }
    }
  }
  *(_QWORD*)(a1 + 368) = a2;
  v9 = (_QWORD*)(a1 + 368);
  LayoutAccessor_1560070_alt1((void*)(&v24_.v24), (__int64*)(a1 + 200),
                              "L_UnitInfoR");
  if (v24_.v25 != 0) {
    v10 = *(_QWORD*)(a1 + 368);
    v11 = std___1___shared_weak_count_lock_alt1(v24_.v25);
    if (v11 != 0) {
      v12 = v11;
      if (v24_.v24 != nullptr) {
        LayoutAccessor_1571860(v24_.v24, v10, 1, 0, 0, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        std___1___shared_weak_count___release_weak_alt1(v12);
      }
    }
    if (v24_.v25 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v24_.v25);
    }
  }
  v13 = (_QWORD*)(a1 + 312);
LABEL_29:
  *(_QWORD*)(__dynamic_cast(*v13, GameData_21319f0[0], &GameData_2057588, 0) +
             1072) = *v9;
  if (*v2 != 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)*v2 + 1088LL))(*v2);
  }
  v22 = *(_QWORD*)(a1 + 312);
  if (v22 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 1088LL))(v22);
  }
  result = *(_QWORD*)(a1 + 320);
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 1088LL))(result);
  }
  return result;
}

__int64 ExchangeMenu_Unknown5(__int64 result)
{
  __int64 v1;
  __int64 v2;
  char v3;
  int v4;
  __int64 v5;
  char v6;
  int v7;

  v1 = *(_QWORD*)(result + 360);
  v2 = result;
  if (v1 != 0) {
    v3 = game_UnitItemList_Sort(v1 + 828, 0, 6);
    result = game_UnitItemList_Sort(v1 + 828, 6, 24);
    if ((v3 & 1) != 0 || (result & 1) != 0) {
      v4 = *(_DWORD*)(v1 + 416);
      if ((v4 & 0x10000000) == 0) {
        *(_DWORD*)(v1 + 416) = v4 | 0x10000000;
        GameRoutine_6c51e0(v1);
        GameRoutine_6c6da0(v1);
        result = GameRoutine_6c6ec0(v1);
        *(_DWORD*)(v1 + 416) &= ~0x10000000u;
      }
    }
  }
  v5 = *(_QWORD*)(v2 + 368);
  if (v5 != 0) {
    v6 = game_UnitItemList_Sort(v5 + 828, 0, 6);
    result = game_UnitItemList_Sort(v5 + 828, 6, 24);
    if ((v6 & 1) != 0 || (result & 1) != 0) {
      v7 = *(_DWORD*)(v5 + 416);
      if ((v7 & 0x10000000) == 0) {
        *(_DWORD*)(v5 + 416) = v7 | 0x10000000;
        GameRoutine_6c51e0(v5);
        GameRoutine_6c6da0(v5);
        result = GameRoutine_6c6ec0(v5);
        *(_DWORD*)(v5 + 416) &= ~0x10000000u;
      }
    }
  }
  return result;
}

__int64 ExchangeMenu_15c7680(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  _QWORD* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  struct {
    _QWORD v20[4];
    _QWORD* v21;
  } v20_;
  __int64 v22;

  v2 = *(_QWORD*)(a1 + 304);
  if (v2 != 0) {
    v3 = __dynamic_cast(v2, GameData_21319f0[0], &GameData_2057588, 0);
    v4 = *(_QWORD*)(a1 + 312);
    if (v4 != 0) {
    LABEL_3:
      v5 = __dynamic_cast(v4, GameData_21319f0[0], &GameData_2057588, 0);
      goto LABEL_6;
    }
  }
  else {
    v3 = 0;
    v4 = *(_QWORD*)(a1 + 312);
    if (v4 != 0) {
      goto LABEL_3;
    }
  }
  v5 = 0;
LABEL_6:
  v6 = *(_QWORD**)(v3 + 232);
  v7 = *(_QWORD**)(v3 + 240);
  v8 = v20_.v20;
  v20_.v20[0] = GameData_20579c8;
  v20_.v21 = v20_.v20;
  if (v6 == v7) {
    v11 = 0;
  LABEL_19:
    v12 = 32;
    goto LABEL_20;
  }
  v9 = GameData_212e008[0];
  while (1) {
    if (*v6 != 0) {
      v10 = __dynamic_cast(*v6, v9, &GameData_20577e0, 0);
      if (v10 != 0) {
        v11 = v10;
        v22 = v10;
        if (v20_.v21 == nullptr) {
        LABEL_38:
          GameRoutine_60a310_alt1();
        }
        if (((*(__int64 (**)(_QWORD*, __int64*))(*v20_.v21 + 48LL))(v20_.v21,
                                                                    &v22) &
             1) != 0) {
          break;
        }
      }
    }
    if (++v6 == v7) {
      v11 = 0;
      break;
    }
  }
  v8 = v20_.v21;
  if (v20_.v21 == v20_.v20) {
    goto LABEL_19;
  }
  if (v20_.v21 != nullptr) {
    v12 = 40;
  LABEL_20:
    (*(void (**)(_QWORD*))(*v8 + v12))(v8);
  }
  if (v11 != 0) {
    return v11;
  }
  v13 = *(_QWORD**)(v5 + 232);
  v14 = *(_QWORD**)(v5 + 240);
  v15 = v20_.v20;
  v20_.v20[0] = GameData_20579c8;
  v20_.v21 = v20_.v20;
  if (v13 == v14) {
    v11 = 0;
  LABEL_35:
    v18 = 32;
    goto LABEL_36;
  }
  v16 = GameData_212e008[0];
  while (1) {
    if (*v13 != 0) {
      v17 = __dynamic_cast(*v13, v16, &GameData_20577e0, 0);
      if (v17 != 0) {
        v11 = v17;
        v22 = v17;
        if (v20_.v21 == nullptr) {
          goto LABEL_38;
        }
        if (((*(__int64 (**)(_QWORD*, __int64*))(*v20_.v21 + 48LL))(v20_.v21,
                                                                    &v22) &
             1) != 0) {
          break;
        }
      }
    }
    if (++v13 == v14) {
      v11 = 0;
      break;
    }
  }
  v15 = v20_.v21;
  if (v20_.v21 == v20_.v20) {
    goto LABEL_35;
  }
  if (v20_.v21 != nullptr) {
    v18 = 40;
  LABEL_36:
    (*(void (**)(_QWORD*))(*v15 + v18))(v15);
  }
  return v11;
}

__int64 game_menu_ExchangeMenu_OnPageActive(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 result;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _BOOL4 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _BOOL4 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _QWORD v30[4];
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD v36[4];
  _QWORD* v37;

  v1 = a1 + 304;
  v3 = *(_QWORD*)(a1 + 304 + 8LL * *(unsigned int*)(a1 + 352));
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 1096LL))(v3);
  if ((unsigned int)(*(_DWORD*)(a1 + 376) - 4) > 0xFFFFFFFC) {
    return result;
  }
  v5 = *(_QWORD*)(a1 + 304);
  v6 = *(_DWORD*)(a1 + 356);
  (*(void (**)(__int64, bool))(*(_QWORD*)v5 + 240LL))(v5, (v6 & 1) == 0);
  (*(void (**)(__int64, bool))(*(_QWORD*)v5 + 248LL))(v5, (v6 & 1) == 0);
  v7 = *(_QWORD*)(a1 + 312);
  (*(void (**)(__int64, bool))(*(_QWORD*)v7 + 240LL))(v7, (v6 & 1) == 0);
  result =
      (*(__int64 (**)(__int64, bool))(*(_QWORD*)v7 + 248LL))(v7, (v6 & 1) == 0);
  if ((v6 & 1) != 0) {
    return result;
  }
  if (*(_DWORD*)(*(_QWORD*)(v1 + 8LL * *(unsigned int*)(a1 + 352)) + 1064LL) !=
      0) {
    v8 = *(_QWORD*)(a1 + 368);
    v30[0] = GameData_2057bc8;
    v30[1] = a1;
    v31 = v30;
    v9 = game_gameui_UnitUtil_GetNext(v8, 0, v30, 0);
    if (v31 == v30) {
      v10 = 32;
    }
    else {
      if (v31 == nullptr) {
        goto LABEL_12;
      }
      v10 = 40;
    }
    (*(void (**)(__int64))(*v31 + v10))((__int64)v31);
  LABEL_12:
    v15 = v9 != 0 && v9 != *(_QWORD*)(a1 + 368);
    LayoutAccessor_1560070((void*)(&v28), (__int64*)(a1 + 200),
                           (__int64)"L_UnitInfoL");
    if (v29 != 0) {
      v16 = std___1___shared_weak_count_lock(v29);
      if (v16 != 0) {
        v17 = v16;
        if (v28 != 0) {
          GameRoutine_1572370(v28, 0);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
          std___1___shared_weak_count___release_weak(v17);
        }
      }
      if (v29 != 0) {
        std___1___shared_weak_count___release_weak(v29);
      }
    }
    LayoutAccessor_1560070((void*)(&v26), (__int64*)(a1 + 200),
                           (__int64)"L_UnitInfoR");
    result = v27;
    if (v27 == 0) {
      return result;
    }
    v18 = std___1___shared_weak_count_lock(v27);
    if (v18 != 0) {
      v19 = v18;
      if (v26 != 0) {
        GameRoutine_1572370(v26, v15);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
        std___1___shared_weak_count___release_weak(v19);
      }
    }
    result = v27;
    if (v27 == 0) {
      return result;
    }
    return std___1___shared_weak_count___release_weak(result);
  }
  v11 = *(_QWORD*)(a1 + 360);
  v36[0] = GameData_2057b48;
  v36[1] = a1;
  v37 = v36;
  v12 = game_gameui_UnitUtil_GetNext(v11, 0, v36, 0);
  if (v37 == v36) {
    v13 = 32;
  }
  else {
    if (v37 == nullptr) {
      goto LABEL_36;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*v37 + v13))((__int64)v37);
LABEL_36:
  v21 = v12 != 0 && v12 != *(_QWORD*)(a1 + 360);
  LayoutAccessor_1560070((void*)(&v34), (__int64*)(a1 + 200),
                         (__int64)"L_UnitInfoL");
  if (v35 != 0) {
    v22 = std___1___shared_weak_count_lock(v35);
    if (v22 != 0) {
      v23 = v22;
      if (v34 != 0) {
        GameRoutine_1572370(v34, v21);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
        std___1___shared_weak_count___release_weak(v23);
      }
    }
    if (v35 != 0) {
      std___1___shared_weak_count___release_weak(v35);
    }
  }
  LayoutAccessor_1560070((void*)(&v32), (__int64*)(a1 + 200),
                         (__int64)"L_UnitInfoR");
  result = v33;
  if (v33 != 0) {
    v24 = std___1___shared_weak_count_lock(v33);
    if (v24 != 0) {
      v25 = v24;
      if (v32 != 0) {
        GameRoutine_1572370(v32, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
        std___1___shared_weak_count___release_weak(v25);
      }
    }
    result = v33;
    if (v33 != 0) {
      return std___1___shared_weak_count___release_weak(result);
    }
  }
  return result;
}

bool game_menu_ExchangeMenu_OnPostCreate_lambda0_Invoke(__int64 a1, __int64 a2)
{
  return *(_DWORD*)(*(_QWORD*)a2 + 40LL) ==
         *(_DWORD*)(*(_QWORD*)(a1 + 8) + 380LL);
}

bool game_menu_ExchangeMenu_OnPostCreate_lambda1_Invoke(__int64 a1, __int64 a2)
{
  return *(_DWORD*)(*(_QWORD*)a2 + 40LL) ==
         *(_DWORD*)(*(_QWORD*)(a1 + 8) + 384LL);
}

__int64 game_menu_ExchangeMenu_OnPageActive_lambda0_Invoke(__int64 a1,
                                                           _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 376LL))(
      *(_QWORD*)(a1 + 8), *a2);
}

__int64 game_menu_ExchangeMenu_OnPageActive_lambda1_Invoke(__int64 a1,
                                                           _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 376LL))(
      *(_QWORD*)(a1 + 8), *a2);
}

#pragma GCC visibility pop
