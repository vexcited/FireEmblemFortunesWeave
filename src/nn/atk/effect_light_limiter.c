#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2afd90(__int64, __int64);
__int64 SoundVoiceNX_14e360(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_audio_AddLightLimiter_1a0c9f0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                         _QWORD, _QWORD);
__int64 nn_audio_AddLightLimiter_1a0ca70(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                         _QWORD, _QWORD);
__int64 nn_audio_GetRequiredBufferSizeForLightLimiter(_QWORD, _QWORD, _QWORD);
__int64 nn_audio_SetLightLimiterAttackTime(_QWORD, _QWORD);
__int64 nn_audio_SetLightLimiterEnabled(_QWORD, _QWORD);
__int64 nn_audio_SetLightLimiterInputGain(_QWORD, float);
__int64 nn_audio_SetLightLimiterLookAheadTime(_QWORD, _QWORD);
__int64 nn_audio_SetLightLimiterOutputGain(_QWORD, float);
__int64 nn_audio_SetLightLimiterReleaseTime(_QWORD, _QWORD);
__int64 nn_audio_SetLightLimiterThreshold(_QWORD, float);
__int64 nn_detail_UnexpectedDefaultImpl(_QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 EffectLightLimiter_Unknown2(__int64 a1, __int64 a2);
__int64 EffectLightLimiter_Unknown3(__int64 a1, __int64 a2,
                                    __int64 (***a3)(_QWORD));
bool EffectLightLimiter_2b1b40(__int64 a1, __int64 a2);
__int64 EffectLightLimiter_Unknown8(__int64 a1, __int64 a2);
__int64 EffectLightLimiter_2b1fd0(__int64 result);

__int64 EffectLightLimiter_Unknown2(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v3 = GameRoutine_2afd90(*(unsigned int*)(a1 + 112), a2);
  v5 = *(_DWORD*)(a1 + 28);
  v6 = (unsigned int)v3;
  if (v5 != 0) {
    if (v5 != 1) {
      nn_detail_UnexpectedDefaultImpl(v3, v4);
      __udf(0);
    }
    v7 = 48000;
    v8 = *(_QWORD*)(a1 + 64);
  }
  else {
    v7 = 32000;
    v8 = *(_QWORD*)(a1 + 64);
  }
  return nn_audio_GetRequiredBufferSizeForLightLimiter(v8, v7, v6);
}

__int64 EffectLightLimiter_Unknown3(__int64 a1, __int64 a2,
                                    __int64 (***a3)(_QWORD))
{
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  if ((*(_BYTE*)(a1 + 24) & 1) != 0) {
    return 0;
  }
  v7 = GameRoutine_2afd90(*(unsigned int*)(a1 + 112), a2);
  if (*(_DWORD*)(a1 + 28) < 2u) {
    v9 = v7;
    v10 = atomic_load((unsigned __int64*)(SoundVoiceNX_14e360(v7) + 200));
    atomic_store(v10, (unsigned __int64*)(a1 + 96));
    v7 = (**a3)(a3);
    if ((_DWORD)v7 == 1) {
      v11 = nn_audio_AddLightLimiter_1a0ca70(a2, a1 + 104, *(_QWORD*)(a1 + 32),
                                             *(_QWORD*)(a1 + 40), a3 + 9,
                                             *(_QWORD*)(a1 + 64), v9);
      if ((_DWORD)v11 == 0) {
        goto LABEL_7;
      }
      return 0;
    }
    if ((_DWORD)v7 == 0) {
      v11 = nn_audio_AddLightLimiter_1a0c9f0(a2, a1 + 104, *(_QWORD*)(a1 + 32),
                                             *(_QWORD*)(a1 + 40), a3 + 11,
                                             *(_QWORD*)(a1 + 64), v9);
      if ((_DWORD)v11 == 0) {
      LABEL_7:
        *(_BYTE*)(a1 + 24) = 1;
        v12 = SoundVoiceNX_14e360(v11);
        nn_os_LockMutex(v12 + 1720);
        nn_audio_SetLightLimiterAttackTime(a1 + 104, *(_QWORD*)(a1 + 48));
        nn_audio_SetLightLimiterReleaseTime(a1 + 104, *(_QWORD*)(a1 + 56));
        nn_audio_SetLightLimiterLookAheadTime(a1 + 104, *(_QWORD*)(a1 + 72));
        nn_audio_SetLightLimiterThreshold(a1 + 104, *(float*)(a1 + 80));
        nn_audio_SetLightLimiterInputGain(a1 + 104, *(float*)(a1 + 84));
        nn_audio_SetLightLimiterOutputGain(a1 + 104, *(float*)(a1 + 88));
        v13 = nn_audio_SetLightLimiterEnabled(a1 + 104,
                                              *(unsigned __int8*)(a1 + 92));
        v14 = SoundVoiceNX_14e360(v13);
        nn_os_UnlockMutex(v14 + 1720);
        return 1;
      }
      return 0;
    }
  }
  nn_detail_UnexpectedDefaultImpl(v7, v8);
  __udf(0);
}

bool EffectLightLimiter_2b1b40(__int64 a1, __int64 a2)
{
  unsigned int v2;
  int v4;
  char v5;
  _QWORD v7[3];

  v2 = a2;
  v7[0] = 0x100000000LL;
  v7[1] = 0x300000002LL;
  v7[2] = 0x500000004LL;
  v4 = GameRoutine_2afd90((unsigned int)a2, a2);
  v5 = (v2 > 3) | *(_BYTE*)(a1 + 24);
  if (((v2 > 3) | *(_BYTE*)(a1 + 24) & 1) == 0) {
    *(_DWORD*)(a1 + 112) = v2;
    if (v4 >= 1) {
      memcpy(a1 + 116, v7, 4LL * (unsigned int)v4);
    }
  }
  return (v5 & 1) == 0;
}

__int64 EffectLightLimiter_Unknown8(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  int* v7;
  _DWORD* v8;
  __int64 v9;
  int v10;
  _DWORD* v11;
  int* v12;
  int v13;

  result = GameRoutine_2afd90(*(unsigned int*)(a1 + 112), a2);
  if ((int)result >= 1) {
    v5 = result & 7;
    if ((unsigned int)result < 8) {
      v6 = 0;
      if ((result & 7) == 0) {
        return result;
      }
      goto LABEL_8;
    }
    v7 = (int*)(a1 + 144);
    v8 = (_DWORD*)(a2 + 16);
    v9 = 0;
    do {
      v9 -= 8;
      *(v8 - 4) = *(v7 - 7);
      *(v8 - 3) = *(v7 - 6);
      *(v8 - 2) = *(v7 - 5);
      *(v8 - 1) = *(v7 - 4);
      *v8 = *(v7 - 3);
      v8[1] = *(v7 - 2);
      v8[2] = *(v7 - 1);
      v10 = *v7;
      v7 += 8;
      v8[3] = v10;
      v8 += 8;
    } while (-(result & 0x7FFFFFF8) != v9);
    v6 = -v9;
    if ((result & 7) != 0) {
    LABEL_8:
      v11 = (_DWORD*)(a2 + 4 * v6);
      v12 = (int*)(a1 + 4 * v6 + 116);
      do {
        v13 = *v12++;
        --v5;
        *v11++ = v13;
      } while (v5 != 0);
    }
  }
  return result;
}

__int64 EffectLightLimiter_2b1fd0(__int64 result)
{
  *(_BYTE*)(result + 44) = 0;
  *(_QWORD*)result = 20000;
  *(_QWORD*)(result + 8) = 300000000;
  *(_QWORD*)(result + 16) = 1000000;
  *(_QWORD*)(result + 24) = 500000;
  *(_QWORD*)(result + 32) = 0x3F8000003E4CCCCDLL;
  *(_DWORD*)(result + 40) = 1065353216;
  return result;
}

#pragma GCC visibility pop
