#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 game_GameModeData_instance_;
extern __int64 game_GameRestartData_unknown_;
bool SystemMenuItem_Restart_Unknown58(__int64 a1);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 GameRoutine_65a020(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64 GameData_21c9600;
__int64
game_menu_anonymous_SystemMenuItem_Restart_ACall_closure_Invoke(__int64 a1);

bool SystemMenuItem_Restart_Unknown58(__int64 a1)
{
  __int64 v1;

  v1 = 368;
  if (*(_BYTE*)(a1 + 144) != 0) {
    v1 = 2208;
  }
  return *(_DWORD*)(game_GameRestartData_unknown_ + v1 + 284) != 0 &&
         (*(_BYTE*)(a1 + 144) == 0 || game_GameModeData_instance_ == 0 ||
          (*(_BYTE*)(game_GameModeData_instance_ + 93) & 1) == 0);
}

__int64

game_menu_anonymous_SystemMenuItem_Restart_ACall_closure_Invoke(__int64 a1)
{
  __int64 v1;
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  _BYTE v8[200];

  v1 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(v1 + 144) != 0) {
    v2 = 6;
  }
  else {
    v2 = 1;
  }
  if (*(_DWORD*)(game_GameRestartData_unknown_ + 368LL * v2 + 284) == 0) {
    return 1;
  }
  v3 = *(_QWORD*)(v1 + 8);
  if (*(_QWORD*)(v3 + 152) != 0) {
    v4 = *(_QWORD*)(v3 + 152);
  }
  else {
    v4 = v3;
  }
  GameRoutine_65a020(v4);
  v5 = game_GameRestartData_unknown_;
  if (*(_DWORD*)(game_GameRestartData_unknown_ + 368LL * v2 + 284) != 0) {
    *(_DWORD*)(game_GameRestartData_unknown_ + 8) = v2;
    *(_BYTE*)(v5 + 16) = 0;
    if (GameData_21c9600 != 0) {
      *(_DWORD*)(GameData_21c9600 + 152) = 14;
    }
  }
  snd_Fade_Fade_10c830(v8, 0.0f);
  snd_play_ff2d0((void*)(&v7), "SE_SYS_Decide_H_Light", "SE_SYS_Decide_H_Light",
                 v8, 0, 65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v8);
  return 13;
}

#pragma GCC visibility pop
