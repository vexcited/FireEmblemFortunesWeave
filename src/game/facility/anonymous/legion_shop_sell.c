#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15e7650(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ee370(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ee520(_QWORD);
__int64 GameRoutine_16ef210(_QWORD, _QWORD);
__int64 GameRoutine_947a30(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
extern __int64* GameData_212dff0[12];
extern __int64* GameData_212e030[4];
__int64
LegionShopSell_Unknown73_alt1(_QWORD* a1) __asm__("LegionShopSell_Unknown73");
_QWORD* game_facility_15e7650(_QWORD* result, int, __int64);
__int64 VolunteerArgs_947a30();
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
unsigned __int64 GameHr_16ee370(__int64, __int64, _BYTE*);
void GameRoutine_16ee520_alt1(__int64) __asm__("GameRoutine_16ee520");
void GameRoutine_16ef210_alt1(_QWORD*, _QWORD*) __asm__("GameRoutine_16ef210");
void LegionShopSell_Unknown73(_QWORD* a1);

void LegionShopSell_Unknown73(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  const char* v5;
  char* v6;
  int v7;
  int v8;
  struct {
    _QWORD v9[2];
    char v10;
    char gap17_[3];
    int v11;
    int v12;
    char v13;
    char gap29_[3];
    __int64 v14;
  } v9_;
  _QWORD v15[21];

  v1 = a1[1];
  if (v1 != 0 && (v3 = __dynamic_cast(a1[1], GameData_212e030[0],
                                      GameData_212dff0[0], 0)) != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 1112LL))(v3);
  }
  else {
    v4 = v1 + 848;
  }
  v5 = (const char*)(*(__int64 (**)(_QWORD*))(*a1 + 24LL))(a1);
  v6 = game_util_Format_alt1("%s_Help", v5);
  GameHr_16ee370((__int64)v15, v4, v6);
  v7 = VolunteerArgs_947a30();
  v9_.v14 = 0;
  game_facility_15e7650(v15, v7, (__int64)v9_.v9);
  if ((*(__int64 (**)(_QWORD*))(*a1 + 32LL))(a1) != 0) {
    v8 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a1[1] + 192LL))(a1[1]);
    v9_.v13 = 0;
    v9_.v14 = 0;
    v9_.v9[0] = "Tutorial";
    v9_.v9[1] = "MID_KeyHelp_Tutorial";
    v9_.v10 = 1;
    v9_.v11 = 10;
    v9_.v12 = v8;
    GameRoutine_16ef210_alt1(v15, v9_.v9);
  }
  GameRoutine_16ee520_alt1((__int64)v15);
}

#pragma GCC visibility pop
