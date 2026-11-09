#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 snd_BGM_getInstance(_QWORD);
__int64 snd_BGM_resumePauseAll(_QWORD, _QWORD, long double);
__int64 snd_BGM_startPitchCheckedAll(_QWORD, _QWORD, float);
__int64 snd_BGM_startPreviousVolumeAll(_QWORD, _QWORD, float);
__int64 snd_fnd_WeakHandle_get(_QWORD, float);
__n128 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
void Ff_e70d0(__int64 a1, float a2);

void Ff_e70d0(__int64 a1, float a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  double v7;
  long double v8;
  __int64 v9;
  double v10;
  __int64 v11;
  __int64 v12;
  double v13;
  _BYTE v14[200];
  __int64 v15;
  __int64 v16;

  v15 = v2;
  v16 = v3;
  v5 = snd_fnd_WeakHandle_get(a1 + 8, a2);
  if (*(_BYTE*)(a1 + 24) == 1 &&
      (v5 == 0 || ((v5 = (*(__int64 (**)(__int64))(*(_QWORD*)(v5 - 5592) +
                                                   376LL))(v5 - 5592)) &
                   1) == 0)) {
    if ((*(_BYTE*)(a1 + 25) & 1) == 0) {
      if (*(_BYTE*)(a1 + 26) == 1) {
        v6 = snd_BGM_getInstance(v5);
        LODWORD(v7) = 1148846080;
        *(__n128*)&v8 = snd_Fade_Fade_10c830(v14, v7);
        snd_BGM_resumePauseAll(v6, v14, v8);
        snd_Fade_Destroy_Fade(v14);
      }
      if (*(_BYTE*)(a1 + 27) == 1) {
        v9 = snd_BGM_getInstance(v5);
        LODWORD(v10) = 1148846080;
        snd_Fade_Fade_10c830(v14, v10);
        snd_BGM_startPitchCheckedAll(v9, v14, 1.0);
        snd_Fade_Destroy_Fade(v14);
        if (*(_BYTE*)(a1 + 27) == 1) {
          v12 = snd_BGM_getInstance(v11);
          LODWORD(v13) = 1148846080;
          snd_Fade_Fade_10c830(v14, v13);
          snd_BGM_startPreviousVolumeAll(v12, v14, 1.0);
          snd_Fade_Destroy_Fade(v14);
        }
      }
    }
    *(_DWORD*)(a1 + 24) = 0;
  }
}

#pragma GCC visibility pop
