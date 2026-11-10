#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 GmapCorpsMenu_172a480(_QWORD, _QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__int64 game_gmap_anonymous_CorpsMenuItem_ACall_closure1_Invoke(__int64 a1);

__int64 game_gmap_anonymous_CorpsMenuItem_ACall_closure1_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  _BYTE v4[200];

  v1 = *(_QWORD*)(a1 + 8);
  snd_Fade_Fade_10c830(v4, 0.0f);
  snd_play_ff2d0((void*)(&v3), "SE_SYS_Decide_M", "SE_SYS_Decide_M", v4, 0,
                 65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v4);
  GmapCorpsMenu_172a480(*(_QWORD*)(v1 + 88), *(unsigned __int8*)(v1 + 104), v1);
  return 2;
}

#pragma GCC visibility pop
