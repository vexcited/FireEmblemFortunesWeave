#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Alignment_56b600(void);
__int64 ControlCreator_13633c0(void);
__int64 GameRoutine_1562060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16e7af0(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_IsPaneVisible(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
__int64 BelongingMenu_16ca500(__int64 a1);
__int64 BelongingMenu_16ca580(__int64 a1);
__int64 game_menu_BelongingMenu_OnInit_lambda0_Invoke(__int64 a1, _QWORD* a2,
                                                      unsigned int* a3);
_QWORD* ui_LayoutAccessor_Setup_155dfa0(__int64*, __int64*, const char*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 BasicMenu_16dd8b0(__int64, int, int);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 LayoutAccessor_15740c0(__int64*, __int64, char, const char*, char);
__int64 game_menu_PageTab_SetupImage(int*, __int64, __int64, unsigned int,
                                     unsigned int, unsigned int);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
extern __int64 (*GameData_2096218[])();
extern __int64 game_script_map_effect_g_sequence;
__int64 game_menu_BelongingMenu_OnInit(__int64 a1);

__int64 game_menu_BelongingMenu_OnInit(__int64 a1)
{
  __int64* v1;
  __int64 v3;
  const char* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
  struct {
    _QWORD v15[4];
    _QWORD* v16;
  } v15_;
  struct {
    __int64 v17;
    __int64 v18;
  } v17_;
  struct {
    __int64 v19;
    __int64 v20;
  } v19_;
  struct {
    __int64* v21;
    __int64 v22;
  } v21_;

  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v1 = (__int64*)(a1 + 848);
  LayoutAccessor_1560070((void*)(&v21_.v21), (__int64*)(a1 + 848),
                         "L_UnitInfo"),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v21_.v22 != 0) {
    v3 = *(_QWORD*)(a1 + 1168);
    v4 = *(const char**)(a1 + 1176);
    v5 = std___1___shared_weak_count_lock_alt1(v21_.v22),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v5 != 0) {
      v6 = v5;
      if (v21_.v21 != nullptr) {
        LayoutAccessor_15740c0(v21_.v21, v3, 1, v4, 0),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak_alt1(v6),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    if (v21_.v22 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v21_.v22),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v7 = *(_QWORD*)(a1 + 856);
  v19_.v19 = 0;
  v19_.v20 = 0;
  if (v7 != 0 && (v8 = std___1___shared_weak_count_lock_alt1(v7), v19_.v20 = v8,
                  v8 != 0)) {
    v9 = v8;
    v19_.v19 = *v1;
    ui_LayoutAccessor_Setup_155dfa0((__int64*)(a1 + 1064), &v19_.v19,
                                    "L_InfoDetail"),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt1(v9),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  else {
    ui_LayoutAccessor_Setup_155dfa0((__int64*)(a1 + 1064), &v19_.v19,
                                    "L_InfoDetail"),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 1120LL))(a1) & 1) == 0) {
    return LayoutAccessor_1562cf0((__int64)v1, "Default");
  }
  LayoutAccessor_1562cf0((__int64)v1, "PageTab"),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 1128LL))(a1),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  BasicMenu_16dd8b0(a1, v10, 0),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LayoutAccessor_1560070((void*)(&v17_.v17), v1, "L_PageTab"),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v15_.v15[0] = GameData_2096218;
  v15_.v15[1] = a1;
  v15_.v16 = v15_.v15;
  if (game_script_map_effect_g_sequence != 0) {
    v11 = 24;
  }
  else {
    v11 = 23;
  }
  game_menu_PageTab_SetupImage((int*)(a1 + 656), (__int64)&v17_.v17,
                               (__int64)v15_.v15, v11, 0xEu, 0xFu),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v15_.v16 == v15_.v15) {
    v13 = 32;
  }
  else {
    if (v15_.v16 == nullptr) {
      goto LABEL_24;
    }
    v13 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v15_.v16 + v13))(v15_.v16, v12),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_24:
  result = v17_.v18;
  if (v17_.v18 != 0) {
    return std___1___shared_weak_count___release_weak_alt1(v17_.v18);
  }
  return result;
}

__int64 BelongingMenu_16ca500(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 1120LL))(a1);
  if ((result & 1) != 0) {
    v3 = *(unsigned int*)(a1 + 660);
    v4 = *(_QWORD*)(a1 + 672);
    if ((int)v3 < (unsigned __int64)((*(_QWORD*)(a1 + 680) - v4) >> 2)) {
      v3 = *(unsigned int*)(v4 + 4LL * (int)v3);
    }
    v5 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 1136LL))(a1, v3);
    return GameRoutine_1562060(a1 + 952, "L_MenuItem_InfoHeader/T_Title", v5);
  }
  return result;
}

__int64 BelongingMenu_16ca580(__int64 a1)
{
  char v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = ui_LayoutAccessor_IsPaneVisible(a1 + 952, "MenuItemList");
  ui_LayoutAccessor_SetPaneVisible(a1 + 952, "MenuItemList", 0);
  if (ui_LayoutAccessor_FindAlignment(a1 + 848, "A_List") != 0) {
    Alignment_56b600();
    v3 = *(_QWORD*)(a1 + 856);
    if (v3 != 0) {
      v4 = std___1___shared_weak_count_lock(v3);
      if (v4 != 0) {
        v5 = v4;
        if (*(_QWORD*)(a1 + 848) != 0) {
          ControlCreator_13633c0();
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          std___1___shared_weak_count___release_weak(v5);
        }
      }
    }
  }
  ui_LayoutAccessor_SetPaneVisible(a1 + 952, "MenuItemList", v2 & 1);
  return GameRoutine_16e7af0(a1 + 952);
}

__int64 game_menu_BelongingMenu_OnInit_lambda0_Invoke(__int64 a1, _QWORD* a2,
                                                      unsigned int* a3)
{
  return (*(__int64 (**)(_QWORD, _QWORD, _QWORD))(
      **(_QWORD**)(a1 + 8) + 1144LL))(*(_QWORD*)(a1 + 8), *a2, *a3);
}

#pragma GCC visibility pop
