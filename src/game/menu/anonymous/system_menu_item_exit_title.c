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
