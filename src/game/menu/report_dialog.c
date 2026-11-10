#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicInfo_15e5fa0(void);
extern __int64 GameData_2260e80;
__int64 game_menu_ReportDialog_CreateBindSave_lambda1_Invoke();
__int64 game_menu_ReportDialog_CreateBindSuspend_lambda1_Invoke();
__int64 game_menu_ReportDialog_CreateBindContinue_lambda1_Invoke();
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 GameRoutine_65a020(_QWORD);
__int64 GameRoutine_877220(__int64 result, int, __int64);
__int64 GameRoutine_877220_alt1(_QWORD, _QWORD,
                                _QWORD) __asm__("GameRoutine_877220");
__int64 GameRoutine_879320(__int64, __int64);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64 (*GameData_2088c00[])();
extern __int64 (*GameData_2088e80[])();
extern __int64 GameData_21c9600;
__int64 game_menu_ReportDialog_CreateBindSave_lambda0_Invoke(__int64 a1);
__int64 game_menu_ReportDialog_CreateBindSuspend_lambda0_Invoke(__int64 a1);
__int64 ReportDialog_16a9540(__int64 a1);
__int64 game_menu_ReportDialog_CreateBindContinue_lambda0_Invoke(__int64 a1);

__int64 game_menu_ReportDialog_CreateBindSave_lambda0_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  struct {
    _QWORD v4[4];
    _QWORD* v5;
  } v4_;

  v1 = *(_QWORD*)(a1 + 8);
  v4_.v5 = v4_.v4;
  v4_.v4[0] = GameData_2088c00;
  v4_.v4[1] = v1;
  GameRoutine_879320(v1, (__int64)v4_.v4);
  if (v4_.v5 == v4_.v4) {
    v2 = 32;
    goto LABEL_5;
  }
  if (v4_.v5 != nullptr) {
    v2 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v4_.v5 + v2))((__int64)v4_.v5);
  }
  GameRoutine_877220(2, -1, 0);
  return 2;
}

__int64 game_menu_ReportDialog_CreateBindSave_lambda1_Invoke()
{
  if (GameData_2260e80 != 0) {
    BasicInfo_15e5fa0();
  }
  return 3;
}

__int64 game_menu_ReportDialog_CreateBindSuspend_lambda0_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  struct {
    _QWORD v4[4];
    _QWORD* v5;
  } v4_;

  v1 = *(_QWORD*)(a1 + 8);
  v4_.v5 = v4_.v4;
  v4_.v4[0] = GameData_2088e80;
  v4_.v4[1] = v1;
  GameRoutine_879320(v1, (__int64)v4_.v4);
  if (v4_.v5 == v4_.v4) {
    v2 = 32;
    goto LABEL_5;
  }
  if (v4_.v5 != nullptr) {
    v2 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v4_.v5 + v2))((__int64)v4_.v5);
  }
  GameRoutine_877220(2, -1, 0);
  return 2;
}

__int64 ReportDialog_16a9540(__int64 a1)
{
  __int64 v3;
  _BYTE v4[200];

  snd_Fade_Fade_10c830(v4, 0.0f);
  snd_play_ff2d0((void*)(&v3), "SE_SYS_Decide_M", "SE_SYS_Decide_M", v4, 0,
                 65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v4);
  GameRoutine_65a020(*(_QWORD*)(a1 + 8));
  if (GameData_21c9600 != 0) {
    *(_DWORD*)(GameData_21c9600 + 152) = 1;
  }
  return 0;
}

__int64 game_menu_ReportDialog_CreateBindSuspend_lambda1_Invoke()
{
  if (GameData_2260e80 != 0) {
    BasicInfo_15e5fa0();
  }
  return 3;
}

__int64 game_menu_ReportDialog_CreateBindContinue_lambda0_Invoke(__int64 a1)
{
  __int64 v3;
  _BYTE v4[200];

  snd_Fade_Fade_10c830(v4, 0.0f);
  snd_play_ff2d0((void*)(&v3), "SE_SYS_Decide_H_Load", "SE_SYS_Decide_H_Load",
                 v4, 0, 65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v4);
  if (GameData_2260e80 != 0) {
    BasicInfo_15e5fa0();
  }
  GameRoutine_877220_alt1(2, 0xFFFFFFFFLL, 0);
  GameRoutine_65a020(*(_QWORD*)(a1 + 8));
  if (GameData_21c9600 != 0) {
    *(_DWORD*)(GameData_21c9600 + 152) = 32;
  }
  return 13;
}

__int64 game_menu_ReportDialog_CreateBindContinue_lambda1_Invoke()
{
  if (GameData_2260e80 != 0) {
    BasicInfo_15e5fa0();
  }
  return 3;
}

#pragma GCC visibility pop
