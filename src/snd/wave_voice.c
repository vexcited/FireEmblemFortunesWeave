#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Crc32List_11ec20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_145700(_QWORD);
__int64 GameRoutine_f7060(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Fade_10c830(_QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 snd_fnd_WeakHandle_reset(_QWORD);
extern __int64* GameData_2134c90;
__int64 WaveVoice_Destructor(__int64 a1);

__int64 WaveVoice_Destructor(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int16 v9;
  _BYTE v11[200];

  v2 = GameData_2134c90;
  *(_QWORD*)a1 = GameData_2134c90 + 2;
  *(_QWORD*)(a1 + 5592) = v2 + 245;
  *(_QWORD*)(a1 + 40) = v2 + 104;
  v3 = snd_fnd_WeakHandle_get(a1 + 6072);
  if (v3 != 0) {
    v4 = v3;
    snd_Fade_Fade_10c830(v11);
    (*(void (**)(__int64, _BYTE*))(*(_QWORD*)(v4 - 5552) + 1312LL))(v4 - 5552,
                                                                    v11);
    snd_Fade_Destroy_Fade(v11);
  }
  if (*(_BYTE*)(a1 + 5886) == 1 &&
      (snd_fnd_WeakHandle_isValid(a1 + 5848) & 1) != 0) {
    Crc32List_11ec20(*(_QWORD*)(a1 + 32), a1 + 5848, 0);
    snd_fnd_WeakHandle_reset(a1 + 5848);
  }
  v5 = *(_QWORD*)(a1 + 5648);
  if (v5 != 0) {
    v6 = *(_QWORD*)(a1 + 32);
    GameRoutine_f7060(*(_QWORD*)(a1 + 5648));
    nn_os_LockMutex(v6 + 2880);
    v7 = *(_QWORD*)(v6 + 2864);
    v8 = (v5 - *(_QWORD*)(v6 + 2856)) / 0x298uLL;
    v9 = *(_WORD*)(v6 + 2872) - 1;
    *(_WORD*)(v6 + 2872) = v9;
    *(_WORD*)(v7 + 2LL * v9) = v8;
    nn_os_UnlockMutex(v6 + 2880);
    *(_QWORD*)(a1 + 5648) = 0;
  }
  return GameRoutine_145700(a1);
}

#pragma GCC visibility pop
