#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15e7650(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ee370(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ee520(_QWORD);
__int64 GameRoutine_16ef210(_QWORD, _QWORD);
__int64 GameRoutine_94b560(void);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64* GameData_212dff0[12];
extern __int64* GameData_212e030[4];
__int64 BreedingMenuItem_Unknown24(__int64 a1);
__int64 BreedingMenuItem_Unknown73_alt1(__int64 a1) __asm__(
    "BreedingMenuItem_Unknown73");
_QWORD* game_facility_15e7650(_QWORD* result, int, __int64);
unsigned __int64 GameHr_16ee370(__int64, __int64, _BYTE*);
void GameRoutine_16ee520_alt1(__int64) __asm__("GameRoutine_16ee520");
void GameRoutine_16ef210_alt1(_QWORD*, _QWORD*) __asm__("GameRoutine_16ef210");
void BreedingMenuItem_Unknown73(__int64 a1);

__int64 BreedingMenuItem_Unknown24(__int64 a1)
{
  __int64 result;
  __int64 v3;

  result = GameRoutine_94b560();
  v3 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(a1 + 84) = result;
  if (*(_QWORD*)(v3 + 336) == a1) {
    return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 64LL))(a1, 0);
  }
  return result;
}

void BreedingMenuItem_Unknown73(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  int v5;
  int v6;
  struct {
    _QWORD v7[2];
    char v8;
    char gap17_[3];
    int v9;
    int v10;
    char v11;
    char gap29_[3];
    __int64 v12;
  } v7_;
  _QWORD v13[21];

  v1 = *(_QWORD*)(a1 + 8);
  if (v1 != 0 && (v3 = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                                      GameData_212dff0[0], 0)) != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 1112LL))(v3);
  }
  else {
    v4 = v1 + 848;
  }
  GameHr_16ee370((__int64)v13, v4, "MID_StableMenu_Breeding_Help");
  v5 = *(_DWORD*)(a1 + 84);
  v7_.v12 = 0;
  game_facility_15e7650(v13, v5, (__int64)v7_.v7);
  v6 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 192LL))(
      *(_QWORD*)(a1 + 8));
  v7_.v11 = 0;
  v7_.v12 = 0;
  v7_.v7[0] = "Tutorial";
  v7_.v7[1] = "MID_KeyHelp_Tutorial";
  v7_.v8 = 1;
  v7_.v9 = 10;
  v7_.v10 = v6;
  GameRoutine_16ef210_alt1(v13, v7_.v7);
  GameRoutine_16ee520_alt1((__int64)v13);
}

#pragma GCC visibility pop
