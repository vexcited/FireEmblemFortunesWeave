#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern __int64 (*GameData_1fecf38[])();
extern __int64 GameData_21ec550;
extern __int64 GameData_22190c0;
__int64 GameRoutine_809ba0(float);
__int64 GameRoutine_e74b60(_QWORD, _QWORD);
void GameRoutine_e7cc80(__int64);
__int64 GameRoutine_e9a300(__int64);
_QWORD* GameRoutine_e9a800(_QWORD*, __int64);
__int64 GameRoutine_e9b1b0(_QWORD*);

void GameHr_e9cb40(_QWORD* a1, __int64 a2)
{
  char v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  _QWORD v18[4];
  _QWORD* v19;

  GameRoutine_e9a300((__int64)a1);
  if ((*(_BYTE*)(a2 + 1) & 1) == 0) {
    GameRoutine_e9b1b0(a1);
  }
  if ((*(_BYTE*)(GameData_22190c0 + 9) & 1) == 0 && GameData_21ec550 != 0) {
    v4 = *(_BYTE*)(GameData_21ec550 + 480);
    *(_BYTE*)(GameData_21ec550 + 480) = 2;
    if (GameData_21ec550 != 0) {
      GameRoutine_809ba0(0.13333);
      if (GameData_21ec550 != 0) {
        *(_BYTE*)(GameData_21ec550 + 480) = v4;
      }
    }
  }
  GameRoutine_e74b60(a1 + 84, a2);
  GameRoutine_e74b60(a1 + 100, a2);
  GameRoutine_e74b60(a1 + 116, a2);
  GameRoutine_e74b60(a1 + 132, a2);
  v18[0] = GameData_1fecf38;
  v19 = v18;
  GameRoutine_e9a800(a1, (__int64)v18);
  if (v19 == v18) {
    v5 = 32;
  }
  else {
    if (v19 == nullptr) {
      goto LABEL_13;
    }
    v5 = 40;
  }
  (*(void (**)(void))(*v19 + v5))();
LABEL_13:
  v6 = (__int64*)a1[89];
  v7 = (__int64*)a1[90];
  while (v6 != v7) {
    v8 = *v6;
    v6 += 2;
    GameRoutine_e7cc80(v8);
  }
  v9 = (__int64*)a1[105];
  v10 = (__int64*)a1[106];
  while (v9 != v10) {
    v11 = *v9;
    v9 += 2;
    GameRoutine_e7cc80(v11);
  }
  v12 = (__int64*)a1[121];
  v13 = (__int64*)a1[122];
  while (v12 != v13) {
    v14 = *v12;
    v12 += 2;
    GameRoutine_e7cc80(v14);
  }
  v15 = (__int64*)a1[137];
  v16 = (__int64*)a1[138];
  while (v15 != v16) {
    v17 = *v15;
    v15 += 2;
    GameRoutine_e7cc80(v17);
  }
}

#pragma GCC visibility pop
