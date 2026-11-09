#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BaseNx_28b3a0(_QWORD, _QWORD);
__int64 SoundVoiceNX_14e360(_QWORD);
__int64 nn_audio_SetVoiceMixVolume_1a0bcb0(_QWORD, _QWORD, _QWORD, _QWORD,
                                           float);
__int64 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
void SoundVoiceNx_14e970(__int64 a1, float a2);

void SoundVoiceNx_14e970(__int64 a1, float a2)
{
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  if (*(_BYTE*)(a1 + 48) == 1) {
    *(float*)(a1 + 28) = a2;
    v3 = SoundVoiceNX_14e360(a1);
    v4 = BaseNx_28b3a0(v3, 0);
    v5 = *(_DWORD*)(a1 + 12);
    v6 = v4;
    if (v5 == 1) {
      v7 = 0;
    }
    else {
      if (v5 != 2) {
        return;
      }
      v7 = 1;
    }
    v8 = SoundVoiceNX_14e360(v4);
    nn_os_LockMutex(v8 + 1720);
    nn_audio_SetVoiceMixVolume_1a0bcb0(
        a1 + 56, v6 + 88, 0, 0, (float)(1.0f - *(float*)(a1 + 28)) * 0.5f);
    v9 = nn_audio_SetVoiceMixVolume_1a0bcb0(
        a1 + 56, v6 + 88, v7, 1, (float)(*(float*)(a1 + 28) + 1.0f) * 0.5f);
    v10 = SoundVoiceNX_14e360(v9);
    nn_os_UnlockMutex(v10 + 1720);
  }
}

#pragma GCC visibility pop
