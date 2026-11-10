#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_13e4b20(_QWORD);
__int64 GameRoutine_14877f0(_QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_startSlotVolume_100b50(_QWORD, _QWORD, double);
__n128 snd_Fade_Fade_10c830(_QWORD, long double);
__n128 snd_fnd_calcCrc32(_QWORD, _QWORD);
__int64 ProcTheaterSceneWatch_StartFade(__int64 a1);
__int64 ProcTheaterSceneWatch_Unknown2(__int64 a1);

__int64 ProcTheaterSceneWatch_StartFade(__int64 a1)
{
  __int64 v1;
  long double v2;
  int v3;
  _BYTE v5[204];
  int v6;

  v1 = GameRoutine_13e4b20(*(_QWORD*)(a1 + 216));
  GameRoutine_14877f0(v1, 0x13F000000LL);
  *((_QWORD*)&v2 + 1) =
      LANES128_OF(snd_fnd_calcCrc32("ENV_VolControl", 0)).n128_u64[1];
  *(_QWORD*)&v2 = 0;
  v6 = v3;
  snd_Fade_Fade_10c830(v5, v2);
  snd_startSlotVolume_100b50(&v6, v5, 0.0);
  return snd_Fade_Destroy_Fade(v5);
}

__int64 ProcTheaterSceneWatch_Unknown2(__int64 a1)
{
  __int64 v1;
  long double v2;
  int v3;
  _BYTE v5[204];
  int v6;

  v1 = GameRoutine_13e4b20(*(_QWORD*)(a1 + 64));
  GameRoutine_14877f0(v1, 0x13F000000LL);
  *((_QWORD*)&v2 + 1) =
      LANES128_OF(snd_fnd_calcCrc32("ENV_VolControl", 0)).n128_u64[1];
  *(_QWORD*)&v2 = 0;
  v6 = v3;
  snd_Fade_Fade_10c830(v5, v2);
  snd_startSlotVolume_100b50(&v6, v5, 0.0);
  return snd_Fade_Destroy_Fade(v5);
}

#pragma GCC visibility pop
