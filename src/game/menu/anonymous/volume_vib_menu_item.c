#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 game_sound_PlayGaugeLeftSe(void);
__int64 game_sound_PlayGaugeRightSe(void);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64 game_sound_g_game_sound;
__int64 VolumeVibMenuItem_PlayCursorSe();
__int64 VolumeVibMenuItem_PlayPageSe();

__int64 VolumeVibMenuItem_PlayCursorSe()
{
  __int64 v1;
  _BYTE v2[200];

  game_sound_PlayGaugeLeftSe();
  if (game_sound_g_game_sound != 0) {
    (*(void (**)(__int64))(*(_QWORD*)game_sound_g_game_sound + 184LL))(
        game_sound_g_game_sound);
  }
  snd_Fade_Fade_10c830(v2, 0.0f);
  snd_play_ff2d0((void*)(&v1), "VIB_Setting", "VIB_Setting", v2, 0, 65537, 0,
                 0.0f, 1.0f);
  return snd_Fade_Destroy_Fade(v2);
}

__int64 VolumeVibMenuItem_PlayPageSe()
{
  __int64 v1;
  _BYTE v2[200];

  game_sound_PlayGaugeRightSe();
  if (game_sound_g_game_sound != 0) {
    (*(void (**)(__int64))(*(_QWORD*)game_sound_g_game_sound + 184LL))(
        game_sound_g_game_sound);
  }
  snd_Fade_Fade_10c830(v2, 0.0f);
  snd_play_ff2d0((void*)(&v1), "VIB_Setting", "VIB_Setting", v2, 0, 65537, 0,
                 0.0f, 1.0f);
  return snd_Fade_Destroy_Fade(v2);
}

#pragma GCC visibility pop
