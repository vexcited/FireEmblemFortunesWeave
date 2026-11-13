#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562680(_QWORD, _QWORD, long double);
__int64 GameRoutine_82e7c0(_QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 game_GameModeData_instance_;
__int64 UnitMenuItem_PlayCursorAnimation(__int64 a1);
__int64 GameRoutine_158a7c0(_QWORD);
__int64 GameRoutine_1840a20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameVariable_82e7c0(_QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 Manager_136a920(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Manager_136afb0(_QWORD, _QWORD);
__int64 UnitUtil_15e0120(_QWORD);
__int64 UnitUtil_15e0200(_QWORD);
__int64 UnitUtil_15e04f0(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_menu_GameMenuItem_DrawText(void);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN* game_g_hero_ids;
extern __int64* GameData_212c890[3];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64 ui_Manager_instance_;
__n128 UnitMenuItem_DrawText_alt1(__int64 a1) __asm__("UnitMenuItem_DrawText");
__int64* GameVariable_82e7c0_alt1(unsigned __int8,
                                  int) __asm__("GameVariable_82e7c0");
__int64 GameHr_1840a20(__int64, unsigned int, __int64*, unsigned __int8, char);
__int64
GameRoutine_158a7c0_alt1(unsigned __int8) __asm__("GameRoutine_158a7c0");
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 Manager_136a920_alt1(__int64, __int64, int, unsigned int,
                             const char*) __asm__("Manager_136a920");
__int64 Manager_136afb0_alt1(__int64, unsigned int,
                             const char*) __asm__("Manager_136afb0");
__int64 UnitUtil_15e0120_alt1(__int64) __asm__("UnitUtil_15e0120");
__int64 UnitUtil_15e0200_alt1(__int64) __asm__("UnitUtil_15e0200");
__int64 UnitUtil_15e04f0_alt1(__int64 result) __asm__("UnitUtil_15e04f0");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
void game_menu_GameMenuItem_DrawText_alt1(_QWORD*) __asm__(
    "game_menu_GameMenuItem_DrawText");
__int64 UnitMenuItem_DrawText(__int64 a1);

__int64 UnitMenuItem_DrawText(__int64 a1)
{
  __int64 result;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  unsigned __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  const char* v20;
  __int64 v21;
  unsigned __int64* v22;
  unsigned __int8 v23;
  unsigned __int64 v24;
  __int64 v25;
  const char* v26;
  _BYTE v27[20];

  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  game_menu_GameMenuItem_DrawText_alt1((_QWORD*)a1),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  result = *(_QWORD*)(a1 + 56);
  if (result == 0) {
    return result;
  }
  result = std___1___shared_weak_count_lock_alt1(result),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (result == 0) {
    return result;
  }
  v3 = *(__int64**)(a1 + 48);
  v4 = result;
  if (v3 == nullptr) {
    goto LABEL_51;
  }
  UnitUtil_15e0120_alt1((__int64)v27),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  UnitUtil_15e0200_alt1((__int64)v27),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v5 = ui_LayoutAccessor_FindPane_alt1(v3, (__int64)"Face"),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v5 != 0) {
    v6 = __dynamic_cast(v5, GameData_212d670[0], GameData_212d678[0], 0),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  else {
    v6 = 0;
  }
  v7 = game_HashString_alt1(
      (__int64)*(&game_g_hero_ids + *(unsigned __int8*)(a1 + 83))),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v7 == 0) {
    goto LABEL_31;
  }
  v8 = *(_QWORD*)(*GameData_212c890[0] + 96);
  if (v8 == 0 || *(_QWORD*)(*GameData_212c890[0] + 112) == 0) {
    goto LABEL_31;
  }
  v10 = v8 - 1;
  if ((v8 & (v8 - 1)) != 0) {
    v11 = v7;
    if (v7 >= v8) {
      v11 = v7 % v8;
    }
  }
  else {
    v11 = v10 & v7;
  }
  v12 = *(_QWORD**)(*(_QWORD*)(*GameData_212c890[0] + 88) + 8 * v11);
  if (v12 == nullptr || (v13 = (_QWORD*)*v12) == nullptr) {
  LABEL_31:
    v15 = nullptr;
    goto LABEL_32;
  }
  if ((v8 & v10) == 0) {
    while (1) {
      v16 = v13[1];
      if (v16 == v7) {
        if (v13[2] == v7) {
          goto LABEL_54;
        }
      }
      else if ((v16 & v10) != v11) {
        goto LABEL_31;
      }
      v13 = (_QWORD*)*v13;
      v15 = nullptr;
      if (v13 == nullptr) {
        goto LABEL_32;
      }
    }
  }
  while (1) {
    v14 = v13[1];
    if (v14 == v7) {
      break;
    }
    if (v14 >= v8) {
      v14 %= v8;
    }
    if (v14 != v11) {
      goto LABEL_31;
    }
  LABEL_21:
    v13 = (_QWORD*)*v13;
    if (v13 == nullptr) {
      goto LABEL_31;
    }
  }
  if (v13[2] != v7) {
    goto LABEL_21;
  }
LABEL_54:
  v15 = (__int64*)v13[3];
LABEL_32:
  GameHr_1840a20(v6, 0, v15, 6u, 1),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v17 = ui_LayoutAccessor_FindPane_alt1(v3, (__int64)"Clan"),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v17 != 0) {
    v18 = __dynamic_cast(v17, GameData_212d670[0], GameData_212d678[0], 0),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  else {
    v18 = 0;
  }
  v19 = GameRoutine_158a7c0_alt1(*(_BYTE*)(a1 + 83)),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v18 != 0 && v19 != 0) {
    v20 = *(const char**)(v19 + 48);
    if (v20 != nullptr && *v20 != 0) {
      v21 = v19;
      if ((Manager_136afb0_alt1(ui_Manager_instance_ + 1264, 5u, v20) & 1) !=
          0) {
        Manager_136a920_alt1(ui_Manager_instance_ + 1264, v18, 0, 5u,
                             *(const char**)(v21 + 48)),
            v23 = COERCE_AS(__typeof__(v23),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      }
    }
  }
  v22 = (unsigned __int64*)GameVariable_82e7c0_alt1(*(_BYTE*)(a1 + 83), 2),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v24 = *v22;
  if (*v22 != 0) {
    v23 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v25 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48), v22),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v23 = v25 != 0 && *(_DWORD*)(v25 + 32) != 0;
    }
  }
  if (((v24 != 0) & v23) != 0) {
    v26 = "Clear_On";
  }
  else {
    v26 = "Clear_Off";
  }
  LayoutAccessor_1562cf0_alt1((__int64)v3, v26),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  result = UnitUtil_15e04f0_alt1((__int64)v27),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
LABEL_51:
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    return std___1___shared_weak_count___release_weak_alt2(v4);
  }
  return result;
}

__int64 UnitMenuItem_PlayCursorAnimation(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  unsigned __int8 v6;
  long double v7;
  __int64 v8;
  __int64 v9;
  const char* v10;

  result = *(_QWORD*)(a1 + 56);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = *(_QWORD*)(a1 + 48);
      v4 = result;
      if (v3 != 0) {
        v5 = (__int64*)GameRoutine_82e7c0(*(unsigned __int8*)(a1 + 83), 2);
        v8 = *v5;
        if (*v5 != 0) {
          v6 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ != 0) {
            v9 = game_GameVariableTable_Find(
                *(_QWORD*)(game_GameModeData_instance_ + 48), v5);
            v6 = v9 != 0 && *(_DWORD*)(v9 + 32) != 0;
          }
        }
        LODWORD(v7) = COERCE_UNSIGNED_INT((float)(1.0));
        if (((v8 != 0) & v6) != 0) {
          v10 = "Select_Clear_On";
        }
        else {
          v10 = "Select_Clear_Off";
        }
        result = GameRoutine_1562680(v3, v10, v7);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return std___1___shared_weak_count___release_weak(v4);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
