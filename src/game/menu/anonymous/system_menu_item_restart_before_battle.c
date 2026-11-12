#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 GameRoutine_65a020(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64 GameData_21c9600;
extern __int64 game_GameRestartData_unknown_;
__int64
game_menu_anonymous_SystemMenuItem_RestartBeforeBattle_ACall_closure_Invoke(
    __int64 a1);
_QWORD* MapSortieMenu_871860(__int64, __int64, __int64, __int64, __int64);
__int64 Dialog_16499c0(__int64 result);
char* game_util_Format(const char*, ...);
extern __int64 (*GameData_20eb6e8[])();
extern __int64 (*GameData_20eb768[])();
__int64
game_menu_anonymous_SystemMenuItem_RestartBeforeBattle_ACall(__int64 a1);

__int64 game_menu_anonymous_SystemMenuItem_RestartBeforeBattle_ACall(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;
  struct {
    _QWORD v14[4];
    _QWORD* v15;
  } v14_;
  _QWORD v16[3];

  if (*(_BYTE*)(a1 + 82) != 1) {
    return 1;
  }
  v16[1] = v1;
  v16[2] = v2;
  v3 = *(_QWORD*)(a1 + 8);
  v16[0] = game_util_Format("%s_Confirm", "MID_Restart_BeforeBattle");
  v14_.v14[0] = GameData_20eb6e8;
  v14_.v14[1] = a1;
  v12_.v13 = v12_.v12;
  v14_.v15 = v14_.v14;
  v10_.v11 = v10_.v10;
  v12_.v12[0] = GameData_20eb768;
  v10_.v10[0] = GameData_20eb768;
  v5 = MapSortieMenu_871860(v3, (__int64)v16, (__int64)v14_.v14,
                            (__int64)v12_.v12, (__int64)v10_.v10);
  if (v10_.v11 == v10_.v10) {
    v6 = 32;
  }
  else {
    if (v10_.v11 == nullptr) {
      goto LABEL_8;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v10_.v11 + v6))((__int64)v10_.v11);
LABEL_8:
  if (v12_.v13 == v12_.v12) {
    v8 = 32;
  }
  else {
    if (v12_.v13 == nullptr) {
      goto LABEL_13;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v12_.v13 + v8))((__int64)v12_.v13);
LABEL_13:
  if (v14_.v15 == v14_.v14) {
    v9 = 32;
    goto LABEL_17;
  }
  if (v14_.v15 != nullptr) {
    v9 = 40;
  LABEL_17:
    (*(void (**)(__int64))(*v14_.v15 + v9))((__int64)v14_.v15);
  }
  Dialog_16499c0((__int64)v5);
  return 12;
}

__int64

game_menu_anonymous_SystemMenuItem_RestartBeforeBattle_ACall_closure_Invoke(
    __int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  _BYTE v6[200];

  if (*(_DWORD*)(game_GameRestartData_unknown_ + 1756) == 0) {
    return 1;
  }
  v1 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
  if (*(_QWORD*)(v1 + 152) != 0) {
    v2 = *(_QWORD*)(v1 + 152);
  }
  else {
    v2 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
  }
  GameRoutine_65a020(v2);
  v3 = game_GameRestartData_unknown_;
  if (*(_DWORD*)(game_GameRestartData_unknown_ + 1756) != 0) {
    *(_BYTE*)(game_GameRestartData_unknown_ + 16) = 0;
    *(_DWORD*)(v3 + 8) = 4;
    if (GameData_21c9600 != 0) {
      *(_DWORD*)(GameData_21c9600 + 152) = 14;
    }
  }
  snd_Fade_Fade_10c830(v6, 0.0f);
  snd_play_ff2d0((void*)(&v5), "SE_SYS_Decide_H_Light", "SE_SYS_Decide_H_Light",
                 v6, 0, 65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v6);
  return 13;
}

#pragma GCC visibility pop
