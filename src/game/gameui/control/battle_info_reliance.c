#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameReliance_8e17a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1840740(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1842b90(_QWORD, _QWORD);
__int64 GameRoutine_8ca0c0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__n128 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 (***GameData_212dae8)();
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64 game_GameModeData_instance_;
__int64 BattleInfoReliance_18b5f90_alt1(
    _QWORD* a1, __int64 a2, __int64 a3) __asm__("BattleInfoReliance_18b5f90");
__int64 GameHr_1840740(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 GameReliance_8e17a0_alt1(_QWORD*, __int64,
                                 __int64) __asm__("GameReliance_8e17a0");
__int64 GameRoutine_1842b90_alt1(__int64, int) __asm__("GameRoutine_1842b90");
__int64 GameRoutine_8ca0c0_alt1(__int64, __int64) __asm__("GameRoutine_8ca0c0");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
__int64 BattleInfoReliance_18b5f90(__int64* a1, __int64 a2, __int64 a3);

__int64 BattleInfoReliance_18b5f90(__int64* a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  bool v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  unsigned int v15;
  __int64 (***v16)();
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  struct {
    _QWORD v27[2];
    __int64 v28;
  } v27_;
  struct {
    __int64 v29;
    __int64 v30;
    __int64 v31;
  } v29_;

  a1[135] = a2;
  a1[136] = a3;
  if (a2 != 0) {
    v4 = *(_QWORD*)(a2 + 392);
  }
  else {
    v4 = 0;
  }
  v5 = a1 + 135;
  v29_.v29 = v4;
  if (a3 != 0) {
    v6 = *(_QWORD*)(a3 + 392);
  }
  else {
    v6 = 0;
  }
  v27_.v27[0] = v6;
  v7 = GameRoutine_8ca0c0_alt1((__int64)&v29_.v29, (__int64)v27_.v27);
  v8 = *v5;
  v9 = v7;
  v29_.v31 = 0;
  v29_.v29 = v8;
  v29_.v30 = 0;
  if (v8 != 0) {
    v10 = *(_QWORD*)(v8 + 392);
    v29_.v30 = v10;
    if (v10 != 0) {
      v10 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v10 + 24) + 1784LL) + 272LL);
    }
    v29_.v31 = v10;
    v11 = v10 == 0;
  }
  else {
    v11 = true;
  }
  v12 = a1[136];
  v27_.v27[0] = v12;
  if (v12 != 0) {
    v13 = *(_QWORD*)(v12 + 392);
    v27_.v27[1] = v13;
    if (v13 != 0) {
      v27_.v28 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v13 + 24) + 1784LL) + 272LL);
      if (v27_.v28 == 0) {
        v11 = true;
      }
      if (!v11) {
        v14 = *(_QWORD**)(game_GameModeData_instance_ + 128);
        v15 = GameReliance_8e17a0_alt1(v14, (__int64)&v29_.v29,
                                       (__int64)v27_.v27);
        if ((v15 & 0x80000000) == 0) {
          v16 = (__int64 (***)(void))(v14[1] + 56LL * v15);
          if (*((_BYTE*)v16 + 10) != 0) {
            goto LABEL_27;
          }
        LABEL_19:
          if (v9 == 0) {
            v25 = 0;
            *v5 = 0;
            a1[136] = 0;
            return (*(__int64 (**)(__int64*, __int64))(*a1 + 40))(a1, v25);
          }
          v17 = ui_LayoutAccessor_FindPane_alt1(a1 + 11, (__int64)"Face");
          if (v17 != 0) {
            v18 = __dynamic_cast(v17, GameData_212d670[0], GameData_212d678[0],
                                 0);
            if (v18 != 0) {
              *(_BYTE*)(v18 + 88) = *(_BYTE*)(v18 + 88) & 0xFE |
                                    GameHr_1840740(v18, 0, a1[136], 6u, 1) & 1;
            }
          }
          ui_LayoutAccessor_SetPaneVisible_alt1((__int64)(a1 + 11),
                                                (__int64)"IconReliance", 1);
          v19 =
              ui_LayoutAccessor_FindPane_alt1(a1 + 11, (__int64)"IconReliance");
          if (v19 != 0) {
            v19 = __dynamic_cast(v19, GameData_212d670[0], GameData_212d678[0],
                                 0);
          }
          GameRoutine_1842b90_alt1(v19, 1);
          v20 = (__int64)(a1 + 11);
          v21 = 1;
        LABEL_33:
          ui_LayoutAccessor_SetPaneVisible_alt1(v20, (__int64)"SpecialReliance",
                                                v21);
          v25 = 1;
          return (*(__int64 (**)(__int64*, __int64))(*a1 + 40))(a1, v25);
        }
      }
    }
  }
  v16 = GameData_212dae8;
  if (*((_BYTE*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212dae8 + 2) == 0) {
    goto LABEL_19;
  }
LABEL_27:
  v22 = ui_LayoutAccessor_FindPane_alt1(a1 + 11, (__int64)"Face");
  if (v22 != 0) {
    v23 = __dynamic_cast(v22, GameData_212d670[0], GameData_212d678[0], 0);
    if (v23 != 0) {
      *(_BYTE*)(v23 + 88) = *(_BYTE*)(v23 + 88) & 0xFE |
                            GameHr_1840740(v23, 0, a1[136], 6u, 1) & 1;
    }
  }
  ui_LayoutAccessor_SetPaneVisible_alt1((__int64)(a1 + 11),
                                        (__int64)"IconReliance", 1);
  v24 = ui_LayoutAccessor_FindPane_alt1(a1 + 11, (__int64)"IconReliance");
  if (v24 != 0) {
    v24 = __dynamic_cast(v24, GameData_212d670[0], GameData_212d678[0], 0);
  }
  GameRoutine_1842b90_alt1(v24, *((unsigned __int8*)v16 + 11));
  v20 = (__int64)(a1 + 11);
  v21 = v9 != 0;
  goto LABEL_33;
}

#pragma GCC visibility pop
