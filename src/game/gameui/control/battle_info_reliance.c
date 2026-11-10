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
__int64 BattleInfoReliance_18b5f90(_QWORD* a1, __int64 a2, __int64 a3);

__int64 BattleInfoReliance_18b5f90(_QWORD* a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  long double v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int64 (***v17)();
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  _BOOL8 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD v28[2];
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;

  a1[135] = a2;
  a1[136] = a3;
  if (a2 != 0) {
    v4 = *(_QWORD*)(a2 + 392);
  }
  else {
    v4 = 0;
  }
  v5 = a1 + 135;
  v30 = v4;
  if (a3 != 0) {
    v6 = *(_QWORD*)(a3 + 392);
  }
  else {
    v6 = 0;
  }
  v28[0] = v6;
  v7 = GameRoutine_8ca0c0(&v30, v28);
  v9 = *v5;
  v10 = v7;
  v32 = 0;
  v30 = v9;
  v31 = 0;
  if (v9 != 0) {
    v11 = *(_QWORD*)(v9 + 392);
    v31 = v11;
    if (v11 != 0) {
      v11 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v11 + 24) + 1784LL) + 272LL);
    }
    v32 = v11;
    v12 = v11 == 0;
  }
  else {
    v12 = true;
  }
  v13 = a1[136];
  v28[0] = v13;
  if (v13 != 0) {
    v14 = *(_QWORD*)(v13 + 392);
    v28[1] = v14;
    if (v14 != 0) {
      v29 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v14 + 24) + 1784LL) + 272LL);
      if (v29 == 0) {
        v12 = true;
      }
      if (!v12) {
        v15 = *(_QWORD*)(game_GameModeData_instance_ + 128);
        v16 = GameReliance_8e17a0(v15, &v30, v28);
        if ((v16 & 0x80000000) == 0) {
          v17 = (__int64 (***)())(*(_QWORD*)(v15 + 8) + 56LL * v16);
          if (*((_BYTE*)v17 + 10) != 0) {
            goto LABEL_27;
          }
        LABEL_19:
          if (v10 == 0) {
            v26 = 0;
            *v5 = 0;
            a1[136] = 0;
            return (*(__int64 (**)(_QWORD*, __int64, long double))(*a1 + 40LL))(
                a1, v26, v8);
          }
          v18 = ui_LayoutAccessor_FindPane(a1 + 11, "Face");
          if (v18 != 0) {
            v19 = __dynamic_cast(v18, GameData_212d670[0], GameData_212d678[0],
                                 0);
            if (v19 != 0) {
              *(_BYTE*)(v19 + 88) =
                  *(_BYTE*)(v19 + 88) & 0xFE |
                  GameRoutine_1840740(v19, 0, a1[136], 6, 1) & 1;
            }
          }
          ui_LayoutAccessor_SetPaneVisible(a1 + 11, "IconReliance", 1);
          v20 = ui_LayoutAccessor_FindPane(a1 + 11, "IconReliance");
          if (v20 != 0) {
            v20 = __dynamic_cast(v20, GameData_212d670[0], GameData_212d678[0],
                                 0);
          }
          GameRoutine_1842b90(v20, 1);
          v21 = a1 + 11;
          v22 = true;
        LABEL_33:
          *(__n128*)&v8 =
              ui_LayoutAccessor_SetPaneVisible(v21, "SpecialReliance", v22);
          v26 = 1;
          return (*(__int64 (**)(_QWORD*, __int64, long double))(*a1 + 40LL))(
              a1, v26, v8);
        }
      }
    }
  }
  v17 = GameData_212dae8;
  if (*((_BYTE*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212dae8 + 2) == 0) {
    goto LABEL_19;
  }
LABEL_27:
  v23 = ui_LayoutAccessor_FindPane(a1 + 11, "Face");
  if (v23 != 0) {
    v24 = __dynamic_cast(v23, GameData_212d670[0], GameData_212d678[0], 0);
    if (v24 != 0) {
      *(_BYTE*)(v24 + 88) = *(_BYTE*)(v24 + 88) & 0xFE |
                            GameRoutine_1840740(v24, 0, a1[136], 6, 1) & 1;
    }
  }
  ui_LayoutAccessor_SetPaneVisible(a1 + 11, "IconReliance", 1);
  v25 = ui_LayoutAccessor_FindPane(a1 + 11, "IconReliance");
  if (v25 != 0) {
    v25 = __dynamic_cast(v25, GameData_212d670[0], GameData_212d678[0], 0);
  }
  GameRoutine_1842b90(v25, *((unsigned __int8*)v17 + 11));
  v21 = a1 + 11;
  v22 = v10 != 0;
  goto LABEL_33;
}

#pragma GCC visibility pop
