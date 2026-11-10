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
