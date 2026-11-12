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
_QWORD* GameRoutine_13e4b20_alt1(__int64) __asm__("GameRoutine_13e4b20");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64
snd_startSlotVolume_100b50_alt1(int*, __int64,
                                float) __asm__("snd_startSlotVolume_100b50");
unsigned __int8* snd_fnd_calcCrc32_alt1(unsigned __int8* result,
                                        int) __asm__("snd_fnd_calcCrc32");
void GameRoutine_14877f0_alt1(__int64, __int64) __asm__("GameRoutine_14877f0");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");

__int64 ProcTheaterSceneWatch_StartFade(__int64 a1)
{
  _QWORD* v1;
  _QWORD v3[25];
  unsigned int v4;

  v1 = GameRoutine_13e4b20_alt1(*(_QWORD*)(a1 + 216));
  GameRoutine_14877f0_alt1((__int64)v1, 0x13F000000LL);
  v4 = (unsigned int)snd_fnd_calcCrc32_alt1("ENV_VolControl", 0);
  snd_Fade_Fade_10c830_alt1((__int64)v3, 0x0.0p+0f);
  snd_startSlotVolume_100b50_alt1((int*)&v4, (__int64)v3, 0x0.0p+0f);
  return snd_Fade_Destroy_Fade_alt1(v3);
}

__int64 ProcTheaterSceneWatch_Unknown2(__int64 a1)
{
  _QWORD* v1;
  _QWORD v3[25];
  unsigned int v4;

  v1 = GameRoutine_13e4b20_alt1(*(_QWORD*)(a1 + 64));
  GameRoutine_14877f0_alt1((__int64)v1, 0x13F000000LL);
  v4 = (unsigned int)snd_fnd_calcCrc32_alt1("ENV_VolControl", 0);
  snd_Fade_Fade_10c830_alt1((__int64)v3, 0x0.0p+0f);
  snd_startSlotVolume_100b50_alt1((int*)&v4, (__int64)v3, 0x0.0p+0f);
  return snd_Fade_Destroy_Fade_alt1(v3);
}

#pragma GCC visibility pop
