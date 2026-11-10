#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, float);
__int64 DungeonEnemyTrajectory_fa03f0(__int64 a1, char a2);

__int64 DungeonEnemyTrajectory_fa03f0(__int64 a1, char a2)
{
  float v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _BYTE v9[200];

  *(_BYTE*)(a1 + 21) = 0;
  if ((a2 & 1) != 0) {
    v3 = 100.0;
  }
  else {
    v3 = 500.0;
  }
  snd_Fade_Fade_10c830(v9, v3);
  if ((snd_fnd_WeakHandle_isValid(a1 + 24) & 1) != 0) {
    v4 = snd_fnd_WeakHandle_get(a1 + 24);
    (*(void (**)(__int64, _BYTE*, _QWORD, double))(
        *(_QWORD*)(v4 - 5592) + 248LL))(v4 - 5592, v9, 0, 0.0);
  }
  snd_Fade_Destroy_Fade(v9);
  snd_Fade_Fade_10c830(v9, v3);
  if ((snd_fnd_WeakHandle_isValid(a1 + 48) & 1) != 0) {
    v5 = snd_fnd_WeakHandle_get(a1 + 48);
    (*(void (**)(__int64, _BYTE*, _QWORD, double))(
        *(_QWORD*)(v5 - 5592) + 248LL))(v5 - 5592, v9, 0, 0.0);
  }
  snd_Fade_Destroy_Fade(v9);
  snd_Fade_Fade_10c830(v9, v3);
  if ((snd_fnd_WeakHandle_isValid(a1 + 72) & 1) != 0) {
    v6 = snd_fnd_WeakHandle_get(a1 + 72);
    (*(void (**)(__int64, _BYTE*, _QWORD, double))(
        *(_QWORD*)(v6 - 5592) + 248LL))(v6 - 5592, v9, 0, 0.0);
  }
  snd_Fade_Destroy_Fade(v9);
  snd_Fade_Fade_10c830(v9, v3);
  if ((snd_fnd_WeakHandle_isValid(a1 + 96) & 1) != 0) {
    v7 = snd_fnd_WeakHandle_get(a1 + 96);
    (*(void (**)(__int64, _BYTE*, _QWORD, double))(
        *(_QWORD*)(v7 - 5592) + 248LL))(v7 - 5592, v9, 0, 0.0);
  }
  return snd_Fade_Destroy_Fade(v9);
}

#pragma GCC visibility pop
