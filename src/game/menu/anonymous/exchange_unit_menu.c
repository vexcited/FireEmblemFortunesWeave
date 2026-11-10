#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ExchangeMenu_15c7680(__int64);
__int64 GameRoutine_17871c0(_QWORD, _QWORD, _QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 game_menu_BasicMenu_Unknown16dd9a0(_QWORD);
extern __int64 (*GameData_20579c8[])();
extern __int64 (*game_menu_anonymous_EquipMenuItem_ItemExchange_vtable[])();
extern __int64 GameData_2056f78;
extern __int64 GameData_2057588;
extern __int64 GameData_20577e0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_game_setting_ptr;
extern __int64* GameData_212e008[9];
extern __int64* GameData_21319e8[10];
extern __int64* GameData_21319f0[9];
extern __int64* game_g_empty_item_ptr;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 ExchangeUnitMenu_Unknown101(__int64* a1);
__int64 ExchangeUnitMenu_Unknown135(_QWORD* a1);
__int64 ExchangeUnitMenu_Unknown147(_QWORD* a1, unsigned __int8 a2);
__int64 ExchangeUnitMenu_Unknown148(_QWORD* a1, unsigned __int8 a2);
__int64 ExchangeUnitMenu_Unknown162(__int64 a1, __int64 a2, int a3);
__int64
game_menu_anonymous_ExchangeUnitMenu_FindDecideItem_closure_Invoke(__int64 a1,
                                                                   __int64 a2);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__int64 game_gameui_anonymous_15d23a0(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__attribute__((swiftcall)) void ExchangeUnitMenu_Unknown50(PSEUDO_X8 x8_,
                                                           __int64 a1);
__attribute__((swiftcall)) void ExchangeUnitMenu_Unknown51(PSEUDO_X8 x8_,
                                                           __int64 a1);
__int64 ExchangeUnitMenu_Unknown88(__int64 a1);

__attribute__((swiftcall)) void ExchangeUnitMenu_Unknown50(PSEUDO_X8 x8_,
                                                           __int64 a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  int v2;
  __int64* v3;
  const char* v4;

  v2 = *(unsigned __int8*)(a1 + 1084);
  v3 = (__int64*)(a1 + 848);
  if (v2 != 0) {
    v4 = "L_UnitInfoL/L_ArrowL";
  }
  else {
    v4 = "L_UnitInfoR/L_ArrowL";
  }
  {
    X8CALL_X0(__int64, LayoutAccessor_1560070((void*)(a2), v3, (__int64)v4));
    return;
  }
}

__attribute__((swiftcall)) void ExchangeUnitMenu_Unknown51(PSEUDO_X8 x8_,
                                                           __int64 a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  int v2;
  __int64* v3;
  const char* v4;

  v2 = *(unsigned __int8*)(a1 + 1084);
  v3 = (__int64*)(a1 + 848);
  if (v2 != 0) {
    v4 = "L_UnitInfoL/L_ArrowR";
  }
  else {
    v4 = "L_UnitInfoR/L_ArrowR";
  }
  {
    X8CALL_X0(__int64, LayoutAccessor_1560070((void*)(a2), v3, (__int64)v4));
    return;
  }
}

__int64 ExchangeUnitMenu_Unknown88(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  result = *(_QWORD*)(a1 + 1056);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_21319e8[0], &GameData_2056f78, 0);
  }
  v3 = *(_QWORD*)(a1 + 336);
  if (v3 != 0) {
    LayoutAccessor_1560070((void*)(&v8), (__int64*)(result + 200),
                           (__int64)"L_ItemDetail");
    v4 = *(int*)(v3 + 40);
    result = v9;
    v5 = (_DWORD)v4 == -1 ? game_g_empty_item_ptr
                          : (__int64*)(*(_QWORD*)(v3 + 88) + 8 * v4 + 828);
    if (v9 != 0) {
      v6 = std___1___shared_weak_count_lock(v9);
      if (v6 != 0) {
        v7 = v6;
        if (v8 != 0) {
          game_gameui_anonymous_15d23a0(v8, v5);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          std___1___shared_weak_count___release_weak(v7);
        }
      }
      result = v9;
      if (v9 != 0) {
        return std___1___shared_weak_count___release_weak(v9);
      }
    }
  }
  return result;
}

__int64 ExchangeUnitMenu_Unknown101(__int64* a1)
{
  __int64 v1;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  _QWORD* v22;
  _QWORD* v23;
  _QWORD* v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  _QWORD v34[4];
  _QWORD* v35;
  __int64 v36;

  v1 = *a1;
  if ((*(_BYTE*)(a1[132] + 356) & 1) == 0) {
    return (*(__int64 (**)(__int64*))(v1 + 1128))(a1);
  }
  (*(void (**)(__int64*))(v1 + 576))(a1);
  *(_DWORD*)(a1[132] + 356) &= ~1u;
  *(_DWORD*)(a1[132] + 356) &= ~2u;
  v4 = a1[132];
  v5 = *(_QWORD*)(v4 + 304);
  if (v5 != 0) {
    v6 = __dynamic_cast(v5, GameData_21319f0[0], &GameData_2057588, 0);
    v7 = *(_QWORD*)(v4 + 312);
    if (v7 != 0) {
    LABEL_5:
      v8 = __dynamic_cast(v7, GameData_21319f0[0], &GameData_2057588, 0);
      goto LABEL_8;
    }
  }
  else {
    v6 = 0;
    v7 = *(_QWORD*)(v4 + 312);
    if (v7 != 0) {
      goto LABEL_5;
    }
  }
  v8 = 0;

LABEL_8:
  v9 = *(_QWORD**)(v6 + 232);
  v10 = *(_QWORD**)(v6 + 240);
  v11 = v34;
  v34[0] = GameData_20579c8;
  v35 = v34;
  if (v9 == v10) {
    v15 = 0;
  LABEL_21:
    v17 = 32;
    goto LABEL_22;
  }
  v12 = GameData_212e008[0];
  while (1) {
    if (*v9 != 0) {
      v13 = __dynamic_cast(*v9, v12, &GameData_20577e0, 0);
      if (v13 != 0) {
        v15 = v13;
        v16 = v35;
        v36 = v15;
        if (v35 == nullptr) {
        LABEL_64:
          GameRoutine_60a310(v16, v14);
        }
        if (((*(__int64 (**)(_QWORD*, __int64*))(*v35 + 48LL))(v35, &v36) &
             1) != 0) {
          break;
        }
      }
    }
    if (++v9 == v10) {
      v15 = 0;
      break;
    }
  }
  v11 = v35;
  if (v35 == v34) {
    goto LABEL_21;
  }
  if (v35 != nullptr) {
    v17 = 40;
  LABEL_22:
    (*(void (**)(_QWORD*))(*v11 + v17))(v11);
  }
  if (v15 != 0) {
    GameRoutine_17871c0(a1[132], 0, 0);
    if (*((_DWORD*)a1 + 266) != 0) {
      v18 = *(_QWORD*)(v6 + 336);
      if (v18 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v18 + 168LL))(v18);
      }
      *(_QWORD*)(v6 + 336) = v15;
      _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v6, 1, 0, 0);
      v19 = *(_QWORD*)(v6 + 336);
      if (v19 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v19 + 160LL))(v19);
        game_IsVibrationEnabled(*(_QWORD*)game_g_game_setting_ptr + 712LL);
        v20 = *(_QWORD*)(v6 + 336);
        v21 = 4;
        if (v20 != 0) {
          if (((*(__int64 (**)(__int64))(*(_QWORD*)v20 + 120LL))(v20) & 1) !=
              0) {
            v21 = 4;
          }
          else {
            v21 = 0;
          }
        }
      }
      else {
        v21 = 4;
      }
      *(_DWORD*)(v6 + 356) = *(_DWORD*)(v6 + 356) & 0xFFFFFFFB | v21;
    }
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v15 + 56LL))(v15, 0);
    v29 = v6;
  LABEL_62:
    game_menu_BasicMenu_Unknown16dd9a0(v29);
    return 0;
  }
  v22 = *(_QWORD**)(v8 + 232);
  v23 = *(_QWORD**)(v8 + 240);
  v24 = v34;
  v34[0] = GameData_20579c8;
  v35 = v34;
  if (v22 == v23) {
    v27 = 0;
  LABEL_48:
    v28 = 32;
    goto LABEL_49;
  }
  v25 = GameData_212e008[0];
  while (1) {
    if (*v22 != 0) {
      v26 = __dynamic_cast(*v22, v25, &GameData_20577e0, 0);
      if (v26 != 0) {
        v27 = v26;
        v16 = v35;
        v36 = v27;
        if (v35 == nullptr) {
          goto LABEL_64;
        }
        if (((*(__int64 (**)(_QWORD*, __int64*))(*v35 + 48LL))(v35, &v36) &
             1) != 0) {
          break;
        }
      }
    }
    if (++v22 == v23) {
      v27 = 0;
      break;
    }
  }
  v24 = v35;
  if (v35 == v34) {
    goto LABEL_48;
  }
  if (v35 != nullptr) {
    v28 = 40;
  LABEL_49:
    (*(void (**)(_QWORD*))(*v24 + v28))(v24);
  }
  if (v27 != 0) {
    GameRoutine_17871c0(a1[132], 1, 0);
    if (*((_DWORD*)a1 + 266) != 1) {
      v30 = *(_QWORD*)(v8 + 336);
      if (v30 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v30 + 168LL))(v30);
      }
      *(_QWORD*)(v8 + 336) = v27;
      _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v8, 1, 0, 0);
      v31 = *(_QWORD*)(v8 + 336);
      if (v31 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v31 + 160LL))(v31);
        game_IsVibrationEnabled(*(_QWORD*)game_g_game_setting_ptr + 712LL);
        v32 = *(_QWORD*)(v8 + 336);
        v33 = 4;
        if (v32 != 0) {
          if (((*(__int64 (**)(__int64))(*(_QWORD*)v32 + 120LL))(v32) & 1) !=
              0) {
            v33 = 4;
          }
          else {
            v33 = 0;
          }
        }
      }
      else {
        v33 = 4;
      }
      *(_DWORD*)(v8 + 356) = *(_DWORD*)(v8 + 356) & 0xFFFFFFFB | v33;
    }
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v27 + 56LL))(v27, 0);
    v29 = v8;
    goto LABEL_62;
  }
  return 0;
}

__int64 ExchangeUnitMenu_Unknown135(_QWORD* a1)
{
  __int64 v1;
  _WORD* v2;
  _WORD* v3;
  _WORD* v4;
  _WORD* v5;
  _WORD* v6;
  __int64 v7;
  char v8;
  int v9;
  bool v10;
  char v11;
  __int64 v12;
  char v13;
  int v14;
  int v15;
  __int64 v17;
  char v18;
  int v19;
  int v20;
  unsigned __int64 v22;
  char v23;
  int v24;
  unsigned __int64 v25;
  __int64 v26;
  char v27;
  int v28;

  v1 = a1[134];
  v2 = (_WORD*)(v1 + 828);
  v3 = (_WORD*)(v1 + 836);
  v4 = (_WORD*)(v1 + 844);
  v5 = (_WORD*)(v1 + 852);
  v6 = (_WORD*)(v1 + 860);
  do {
    while (1) {
      while (1) {
        v9 = *(unsigned __int16*)(v1 + 836);
        v10 = *v2 != 0 || v9 == 0;
        v11 = !v10;
        if (!v10) {
          v12 = *(_QWORD*)v2;
          *v2 = *v3;
          v13 = *(_BYTE*)(v1 + 838);
          *(_WORD*)(v1 + 836) = v12;
          *(_BYTE*)(v1 + 838) = BYTE2(v12);
          *(_BYTE*)(v1 + 830) = v13;
          *(_BYTE*)(v1 + 831) = *(_BYTE*)(v1 + 839);
          v14 = *(_DWORD*)(v1 + 840);
          *(_DWORD*)(v1 + 840) = HIDWORD(v12);
          *(_DWORD*)(v1 + 832) = v14;
          *(_BYTE*)(v1 + 839) = BYTE3(v12);
          v9 = (unsigned __int16)v12;
        }
        v15 = (unsigned __int16)*v4;
        if (v9 == 0 && v15 != 0) {
          v17 = *(_QWORD*)v3;
          *v3 = *v4;
          v18 = *(_BYTE*)(v1 + 846);
          *v4 = v17;
          *(_BYTE*)(v1 + 846) = BYTE2(v17);
          *(_BYTE*)(v1 + 838) = v18;
          *(_BYTE*)(v1 + 839) = *(_BYTE*)(v1 + 847);
          v19 = *(_DWORD*)(v1 + 848);
          *(_DWORD*)(v1 + 848) = HIDWORD(v17);
          *(_DWORD*)(v1 + 840) = v19;
          *(_BYTE*)(v1 + 847) = BYTE3(v17);
          v15 = (unsigned __int16)v17;
          v11 = 1;
        }
        v20 = (unsigned __int16)*v5;
        if (v15 == 0 && v20 != 0) {
          v22 = *(_QWORD*)v4;
          *v4 = *v5;
          v23 = *(_BYTE*)(v1 + 854);
          *v5 = v22;
          *(_BYTE*)(v1 + 854) = BYTE2(v22);
          *(_BYTE*)(v1 + 846) = v23;
          *(_BYTE*)(v1 + 847) = *(_BYTE*)(v1 + 855);
          v24 = *(_DWORD*)(v1 + 856);
          *(_DWORD*)(v1 + 856) = HIDWORD(v22);
          v20 = (unsigned __int16)v22;
          *(_DWORD*)(v1 + 848) = v24;
          v25 = v22 >> 24;
          v11 = 1;
          *(_BYTE*)(v1 + 855) = v25;
        }
        if (v20 != 0 || *v6 == 0) {
          break;
        }
        v26 = *(_QWORD*)v5;
        *v5 = *v6;
        v27 = *(_BYTE*)(v1 + 862);
        *v6 = v26;
        *(_BYTE*)(v1 + 862) = BYTE2(v26);
        *(_BYTE*)(v1 + 854) = v27;
        *(_BYTE*)(v1 + 855) = *(_BYTE*)(v1 + 863);
        v28 = *(_DWORD*)(v1 + 864);
        *(_DWORD*)(v1 + 864) = HIDWORD(v26);
        *(_DWORD*)(v1 + 856) = v28;
        *(_BYTE*)(v1 + 863) = BYTE3(v26);
        if ((_WORD)v26 == 0 && *(_WORD*)(v1 + 868) != 0) {
          goto LABEL_2;
        }
      }
      if (*v6 != 0 || *(_WORD*)(v1 + 868) == 0) {
        break;
      }
    LABEL_2:
      v7 = *(_QWORD*)v6;
      *v6 = *(_WORD*)(v1 + 868);
      v8 = *(_BYTE*)(v1 + 870);
      *(_WORD*)(v1 + 868) = v7;
      *(_BYTE*)(v1 + 870) = BYTE2(v7);
      *(_BYTE*)(v1 + 862) = v8;
      *(_BYTE*)(v1 + 863) = *(_BYTE*)(v1 + 871);
      *(_DWORD*)(v1 + 864) = *(_DWORD*)(v1 + 872);
      *(_BYTE*)(v1 + 871) = BYTE3(v7);
      *(_DWORD*)(v1 + 872) = HIDWORD(v7);
    }
  } while ((v11 & 1) != 0);
  return (*(__int64 (**)(_QWORD*))(*a1 + 1088LL))(a1);
}

__int64 ExchangeUnitMenu_Unknown147(_QWORD* a1, unsigned __int8 a2)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 result;

  v3 = a1[132];
  if ((*(_BYTE*)(v3 + 356) & 1) != 0 &&
      (v5 = __dynamic_cast(v3, GameData_21319e8[0], &GameData_2056f78, 0),
       (v6 = ExchangeMenu_15c7680(v5)) != 0)) {
    v7 = *(int*)(v6 + 40);
    if ((_DWORD)v7 == -1) {
      v8 = game_g_empty_item_ptr;
    }
    else {
      v8 = (__int64*)(*(_QWORD*)(v6 + 88) + 8 * v7 + 828);
    }
    return *(unsigned __int16*)v8 != 0;
  }
  else {
    result = (*(__int64 (**)(_QWORD*))(*a1 + 1120LL))(a1);
    if ((_DWORD)result != 0) {
      return a2 & ((*(_BYTE*)(a1[132] + 356LL) & 1) == 0);
    }
  }
  return result;
}

__int64 ExchangeUnitMenu_Unknown148(_QWORD* a1, unsigned __int8 a2)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 result;

  v3 = a1[132];
  if ((*(_BYTE*)(v3 + 356) & 1) != 0 &&
      (v5 = __dynamic_cast(v3, GameData_21319e8[0], &GameData_2056f78, 0),
       (v6 = ExchangeMenu_15c7680(v5)) != 0)) {
    v7 = *(int*)(v6 + 40);
    if ((_DWORD)v7 == -1) {
      v8 = game_g_empty_item_ptr;
    }
    else {
      v8 = (__int64*)(*(_QWORD*)(v6 + 88) + 8 * v7 + 828);
    }
    return *(unsigned __int16*)v8 != 0;
  }
  else {
    result = (*(__int64 (**)(_QWORD*))(*a1 + 1120LL))(a1);
    if ((_DWORD)result != 0) {
      return a2 & ((*(_BYTE*)(a1[132] + 356LL) & 1) == 0);
    }
  }
  return result;
}

__int64 ExchangeUnitMenu_Unknown162(__int64 a1, __int64 a2, int a3)
{
  __int64 result;
  __int64 v7;
  __int64 v8;
  char v9;

  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
  v7 = *(_QWORD*)(a1 + 1056);
  if (v7 != 0) {
    v8 = result;
    v7 = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                        &GameData_2056f78, 0);
    result = v8;
  }
  v9 = *(_BYTE*)(a1 + 1084);
  *(_DWORD*)(result + 40) = a3;
  *(_QWORD*)(result + 88) = a2;
  *(_QWORD*)(result + 96) = v7;
  *(_WORD*)(result + 16) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 72) = 0;
  *(_WORD*)(result + 80) = 257;
  *(_QWORD*)result = game_menu_anonymous_EquipMenuItem_ItemExchange_vtable;
  *(_QWORD*)(result + 8) = 0;
  *(_BYTE*)(result + 82) = 1;
  *(_BYTE*)(result + 104) = v9;
  return result;
}

__int64

game_menu_anonymous_ExchangeUnitMenu_FindDecideItem_closure_Invoke(__int64 a1,
                                                                   __int64 a2)
{
  return *(unsigned __int8*)(*(_QWORD*)a2 + 79LL);
}

#pragma GCC visibility pop
