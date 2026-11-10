#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, long double);
__int64 GameRoutine_1566440(_QWORD, _QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown57(_QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_20ccdc8[])();
extern __int64 GameData_20ca6c0;
extern __int64 GameData_2233d70;
extern __int64 GameData_225d4e8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e008[9];
extern __int64* GameData_2131a88[7];
extern __int64* GameData_2131a90[6];
extern char GameData_21759d0;
extern char GameData_2264530;
void GameRoutine_1798540(__int64, __int64, __int64, __int64*, char, char);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
__int64 UnitMakeBodySelectMenu_Unknown57(__int64 result, __int64 a2);
__int64 UnitMakeBodySelectMenu_Unknown85(__int64 a1, long double a2);
__int64 UnitMakeBodySelectMenu_Unknown93();
__int64 UnitMakeBodySelectMenu_Unknown144(__int64 a1, int a2, char a3);
__int64 game_menu_UnitMakeBodySelectMenu_MoveToLR_lambda0_Invoke(__int64 a1,
                                                                 _QWORD* a2);

__int64 UnitMakeBodySelectMenu_Unknown57(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  if ((GameData_2264530 & 1) != 0) {
    v2 = result;
    v4 = game_util_Format("N_Menu%02d", *(_DWORD*)(result + 1064));
    ui_LayoutAccessor_SetPaneVisible(v2 + 848, v4, 1);
    result = game_menu_BasicMenu_Unknown57(v2, a2);
    if (*(_DWORD*)(v2 + 1064) != 0) {
      v5 = *(_QWORD*)(v2 + 1056);
      v9 = 0;
      v10 = 0;
      v8 = 0;
      (*(void (**)(__int64, __int64*))(v5 + 80))(v2 + 1056, &v8);
      (*(void (**)(__int64, __int64*))(*(_QWORD*)(v2 + 1056) + 88LL))(v2 + 1056,
                                                                      &v8);
      v6 = v8 == v9 ? nullptr : &v8;
      result = GameRoutine_1566440(v6, 0);
      if (v8 != 0) {
        v9 = v8;
        v7 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v7 = 56;
        }
        return nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v8);
      }
    }
  }
  else {
    GameData_2264530 = 1;
  }
  return result;
}

__int64 UnitMakeBodySelectMenu_Unknown85(__int64 a1, long double a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  _QWORD* v7;
  int v8;
  _QWORD* v9;
  _QWORD* v10;
  int v11;
  __int64 v12;

  if (GameData_21759d0 == 1) {
    v3 = *(_QWORD*)(a1 + 336);
    if (v3 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 168LL))(v3);
      *(_QWORD*)(a1 + 336) = 0;
      _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1, 0, 1, 0);
      v4 = *(_QWORD*)(a1 + 336);
      if (v4 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 160LL))(v4);
        v5 = *(_QWORD*)(a1 + 336);
        if (v5 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 120LL))(v5);
        }
      }
    }
    *(_DWORD*)(a1 + 356) |= 4u;
  }
  LODWORD(a2) = 1.0;
  GameRoutine_1562680(a1 + 952, "Wait", a2);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 176) + 16LL))(a1 + 176);
  v7 = *(_QWORD**)(a1 + 184);
  v8 = result;
  v9 = (_QWORD*)v7[29];
  v10 = (_QWORD*)v7[30];
  if (v9 != v10) {
    v11 = 0;
    do {
      v12 = *v9;
      result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v9 + 48LL))(*v9);
      if ((result & 1) != 0) {
        if (v12 == v7[42]) {
          goto LABEL_14;
        }
        ++v11;
      }
      ++v9;
    } while (v9 != v10);
  }
  v11 = -1;

LABEL_14:
  *(_DWORD*)(a1 + 192) = v11 % v8;
  return result;
}

__int64 UnitMakeBodySelectMenu_Unknown93()
{
  __int64 result;

  if (GameData_225d4e8 != 0) {
    result = GameRoutine_155e830(GameData_225d4e8 + 416, 0);
    if (GameData_2233d70 != 0) {
      *(_BYTE*)(GameData_2233d70 + 220) = 1;
    }
  }
  return result;
}

__int64 UnitMakeBodySelectMenu_Unknown144(__int64 a1, int a2, char a3)
{
  __int64* v3;
  __int64* v4;
  int v6;
  __int64* v7;
  __int64 v8;
  unsigned __int64 v9;
  _BOOL4 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30[4];
  __int64* v31;
  __int64 v32;

  if ((a3 & 1) == 0) {
    return 0;
  }
  v3 = *(__int64**)(a1 + 232);
  v4 = *(__int64**)(a1 + 240);
  if (v3 == v4) {
    v17 = v30;
    GameData_21759d0 = 0;
    v10 = a2 > 0;
    v31 = v30;
    v30[0] = (__int64)GameData_20ccdc8;
    goto LABEL_19;
  }
  v6 = 0;
  v7 = *(__int64**)(a1 + 232);
  do {
    v8 = *v7++;
    if (v8 == *(_QWORD*)(a1 + 336)) {
      v10 = v6 == 0;
      goto LABEL_22;
    }
    --v6;
  } while (v7 != v4);
  v9 = 0;
  GameData_21759d0 = 0;
  v31 = v30;
  v10 = a2 > 0;
  v30[0] = (__int64)GameData_20ccdc8;
  v11 = GameData_212e008[0];
  do {
    v12 = v3[v9];
    if (v12 != 0) {
      v13 = __dynamic_cast(v12, v11, &GameData_20ca6c0, 0);
      if (v13 == 0) {
        goto LABEL_7;
      }
      v32 = v13;
      if (v31 == nullptr) {
        GameRoutine_60a310(0, v14, v15);
      }
      if (((*(__int64 (**)(__int64*, __int64*))(*v31 + 48))(v31, &v32) & 1) !=
          0) {
        break;
      }
      v3 = *(__int64**)(a1 + 232);
      v4 = *(__int64**)(a1 + 240);
    }
  LABEL_7:
    ++v9;
  } while (v9 < v4 - v3);
  v17 = v31;
  if (v31 != v30) {
    if (v31 != nullptr) {
      v18 = 40;
      goto LABEL_20;
    }
    goto LABEL_21;
  }

LABEL_19:
  v18 = 32;

LABEL_20:
  (*(void (**)(__int64*))(*v17 + v18))(v17);

LABEL_21:
  v3 = *(__int64**)(a1 + 232);
  v4 = *(__int64**)(a1 + 240);

LABEL_22:
  *(_DWORD*)(a1 + 192) = v10;
  if (v3 == v4 || v10 && (++v3, v3 == v4)) {
    v19 = 0;
  }
  else {
    v19 = *v3;
  }
  v20 = *(_QWORD*)(a1 + 336);
  if (v20 == v19) {
  LABEL_32:
    v22 = 4;
    if (v20 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v20 + 120LL))(v20) & 1) != 0) {
        v22 = 4;
      }
      else {
        v22 = 0;
      }
    }
  }
  else {
    if (v20 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v20 + 168LL))(v20);
    }
    *(_QWORD*)(a1 + 336) = v19;
    _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1, 0, 1, 0);
    v21 = *(_QWORD*)(a1 + 336);
    if (v21 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v21 + 160LL))(v21);
      v20 = *(_QWORD*)(a1 + 336);
      goto LABEL_32;
    }
    v22 = 4;
  }
  v23 = *(_DWORD*)(a1 + 356) & 0xFFFFFFFB | v22;
  v24 = *GameData_2131a90[0];
  *(_DWORD*)(a1 + 356) = v23;
  v25 = *(_QWORD*)(v24 + 32);
  v26 = *(_QWORD*)(v24 + 160);
  v27 = *GameData_2131a88[0];
  v30[0] = *(_QWORD*)(v24 + 152);
  v30[1] = v26;
  v28 = *(_QWORD*)(v27 + 720);
  v29 = *(_QWORD*)(v27 + 888);
  if (v26 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 8), 1u,
                              memory_order_relaxed);
  }
  GameRoutine_1798540(v25, v28, v29, v30, *(_BYTE*)(v27 + 276) == 1,
                      *(_BYTE*)(v24 + 168));
  if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
    std___1___shared_weak_count___release_weak();
  }
  result = 13;
  *(_BYTE*)(v24 + 168) = 1;
  return result;
}

__int64 game_menu_UnitMakeBodySelectMenu_MoveToLR_lambda0_Invoke(__int64 a1,
                                                                 _QWORD* a2)
{
  (*(void (**)(_QWORD))(*(_QWORD*)*a2 + 504LL))(*a2);
  return 0;
}

#pragma GCC visibility pop
