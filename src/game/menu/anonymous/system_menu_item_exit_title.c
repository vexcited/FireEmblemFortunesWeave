#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 GameRoutine_65a020(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64 GameData_21c9600;
__int64
game_menu_anonymous_SystemMenuItem_ExitTitle_ACall_closure_Invoke(__int64 a1,
                                                                  __int64* a2);
_QWORD* MapSortieMenu_871860(__int64, __int64, __int64, __int64, __int64);
__int64 Dialog_16499c0(__int64 result);
char* game_util_Format(const char*, ...);
extern __int64 (*GameData_20eba48[])();
extern __int64 (*GameData_20ebac8[])();
__int64 game_menu_anonymous_SystemMenuItem_ExitTitle_ACall(__int64 a1);

__int64 game_menu_anonymous_SystemMenuItem_ExitTitle_ACall(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;
  struct {
    _QWORD v11[4];
    _QWORD* v12;
  } v11_;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;
  _QWORD v15[3];

  if (*(_BYTE*)(a1 + 82) != 1) {
    return 1;
  }
  v15[1] = v1;
  v15[2] = v2;
  v3 = *(_QWORD*)(a1 + 8);
  v15[0] = game_util_Format("%s_Confirm", "MID_Restart_ReturnTitle");
  v13_.v13[0] = GameData_20eba48;
  v13_.v14 = v13_.v13;
  v9_.v10 = v9_.v9;
  v11_.v11[0] = GameData_20ebac8;
  v11_.v12 = v11_.v11;
  v9_.v9[0] = GameData_20ebac8;
  v4 = MapSortieMenu_871860(v3, (__int64)v15, (__int64)v13_.v13,
                            (__int64)v11_.v11, (__int64)v9_.v9);
  if (v9_.v10 == v9_.v9) {
    v5 = 32;
  }
  else {
    if (v9_.v10 == nullptr) {
      goto LABEL_8;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v9_.v10 + v5))((__int64)v9_.v10);
LABEL_8:
  if (v11_.v12 == v11_.v11) {
    v7 = 32;
  }
  else {
    if (v11_.v12 == nullptr) {
      goto LABEL_13;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v11_.v12 + v7))((__int64)v11_.v12);
LABEL_13:
  if (v13_.v14 == v13_.v13) {
    v8 = 32;
    goto LABEL_17;
  }
  if (v13_.v14 != nullptr) {
    v8 = 40;
  LABEL_17:
    (*(void (**)(__int64))(*v13_.v14 + v8))((__int64)v13_.v14);
  }
  Dialog_16499c0((__int64)v4);
  return 12;
}

__int64

game_menu_anonymous_SystemMenuItem_ExitTitle_ACall_closure_Invoke(__int64 a1,
                                                                  __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  _BYTE v7[200];

  v2 = *a2;
  snd_Fade_Fade_10c830(v7, 0.0f);
  snd_play_ff2d0((void*)(&v6), "SE_SYS_Decide_H_Light", "SE_SYS_Decide_H_Light",
                 v7, 0, 65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v7);
  v3 = *(_QWORD*)(v2 + 8);
  if (*(_QWORD*)(v3 + 152) != 0) {
    v4 = *(_QWORD*)(v3 + 152);
  }
  else {
    v4 = *(_QWORD*)(v2 + 8);
  }
  GameRoutine_65a020(v4);
  if (GameData_21c9600 != 0) {
    *(_DWORD*)(GameData_21c9600 + 152) = 1;
  }
  return 13;
}

#pragma GCC visibility pop
