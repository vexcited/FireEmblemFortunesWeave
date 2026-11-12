#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15e7650(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ee370(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ee520(_QWORD);
__int64 GameRoutine_16ef210(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_212cf88[4];
extern __int64 GameData_21f42d0;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212dff0[12];
extern __int64* GameData_212e030[4];
bool ReleaseMenuItem_Unknown58();
__int64
ReleaseMenuItem_Unknown73_alt1(__int64 a1) __asm__("ReleaseMenuItem_Unknown73");
_QWORD* game_facility_15e7650(_QWORD* result, int, __int64);
unsigned __int64 GameHr_16ee370(__int64, __int64, _BYTE*);
void GameRoutine_16ee520_alt1(__int64) __asm__("GameRoutine_16ee520");
void GameRoutine_16ef210_alt1(_QWORD*, _QWORD*) __asm__("GameRoutine_16ef210");
void ReleaseMenuItem_Unknown73(__int64 a1);

bool ReleaseMenuItem_Unknown58()
{
  _BOOL4 v0;

  v0 = game_GameModeData_instance_ == 0 ||
       *(_DWORD*)(game_GameModeData_instance_ + 60) != 2;
  return *(int*)(*(_QWORD*)(GameData_21f42d0 + 8) + 144LL) > 0 && v0;
}

void ReleaseMenuItem_Unknown73(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  int v5;
  int v6;
  int v7;
  struct {
    _QWORD v8[2];
    char v9;
    char gap17_[3];
    int v10;
    int v11;
    char v12;
    char gap29_[3];
    __int64 v13;
  } v8_;
  _QWORD v14[21];

  v1 = *(_QWORD*)(a1 + 8);
  if (v1 != 0 && (v3 = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                                      GameData_212dff0[0], 0)) != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 1112LL))(v3);
  }
  else {
    v4 = v1 + 848;
  }
  GameHr_16ee370((__int64)v14, v4, "MID_StableMenu_Release_Help");
  v5 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 2) {
      v5 = 0x400000;
    }
    else {
      v5 = 0;
    }
  }
  v8_.v13 = 0;
  if (*(int*)(*(_QWORD*)(*(_QWORD*)GameData_212cf88[0] + 8LL) + 144LL) >= 1) {
    v6 = v5;
  }
  else {
    v6 = v5 | 0x80;
  }
  game_facility_15e7650(v14, v6, (__int64)v8_.v8);
  v7 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 192LL))(
      *(_QWORD*)(a1 + 8));
  v8_.v12 = 0;
  v8_.v13 = 0;
  v8_.v8[0] = "Tutorial";
  v8_.v8[1] = "MID_KeyHelp_Tutorial";
  v8_.v9 = 1;
  v8_.v10 = 10;
  v8_.v11 = v7;
  GameRoutine_16ef210_alt1(v14, v8_.v8);
  GameRoutine_16ee520_alt1((__int64)v14);
}

#pragma GCC visibility pop
