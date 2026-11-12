#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16ee370(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ee520(_QWORD);
__int64 GameRoutine_16ef210(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64* GameData_212dff0[12];
extern __int64* GameData_212e030[4];
__int64
DestinyMenuItem_Unknown73_alt1(__int64 a1) __asm__("DestinyMenuItem_Unknown73");
unsigned __int64 GameHr_16ee370(__int64, __int64, _BYTE*);
void GameRoutine_16ee520_alt1(__int64) __asm__("GameRoutine_16ee520");
void GameRoutine_16ef210_alt1(_QWORD*, _QWORD*) __asm__("GameRoutine_16ef210");
void DestinyMenuItem_Unknown73(__int64 a1);

void DestinyMenuItem_Unknown73(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  int v5;
  struct {
    _QWORD v6[2];
    char v7;
    char gap17_[3];
    int v8;
    int v9;
    char v10;
    char gap29_[3];
    __int64 v11;
  } v6_;
  _QWORD v12[21];

  v1 = *(_QWORD*)(a1 + 8);
  if (v1 != 0 && (v3 = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                                      GameData_212dff0[0], 0)) != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 1112LL))(v3);
  }
  else {
    v4 = v1 + 848;
  }
  GameHr_16ee370((__int64)v12, v4, "MID_ObeliskMenu_Destiny_Help");
  v5 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 192LL))(
      *(_QWORD*)(a1 + 8));
  v6_.v10 = 0;
  v6_.v11 = 0;
  v6_.v6[0] = "Tutorial";
  v6_.v6[1] = "MID_KeyHelp_Tutorial";
  v6_.v7 = 1;
  v6_.v8 = 10;
  v6_.v9 = v5;
  GameRoutine_16ef210_alt1(v12, v6_.v6);
  GameRoutine_16ee520_alt1((__int64)v12);
}

#pragma GCC visibility pop
