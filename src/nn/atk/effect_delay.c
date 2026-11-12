#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SoundVoiceNX_14e360(_QWORD);
__int64 nn_audio_AddDelay_1a0c7d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                  _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_audio_AddDelay_1a0c850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                  _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_audio_GetRequiredBufferSizeForDelay(_QWORD, _QWORD, _QWORD);
__int64 nn_audio_SetDelayChannelSpread(_QWORD, float);
__int64 nn_audio_SetDelayDryGain(_QWORD, float);
__int64 nn_audio_SetDelayEnabled(_QWORD, _QWORD);
__int64 nn_audio_SetDelayFeedbackGain(_QWORD, float);
__int64 nn_audio_SetDelayInGain(_QWORD, float);
__int64 nn_audio_SetDelayInputOutput(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_audio_SetDelayLowPassAmount(_QWORD, float);
__int64 nn_audio_SetDelayTime(_QWORD, _QWORD);
__int64 nn_detail_UnexpectedDefaultImpl(_QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
extern unsigned int GameData_1a83730[4];
__int64 EffectDelay_Unknown2_alt1(__int64 a1,
                                  __int64 a2) __asm__("EffectDelay_Unknown2");
__int64 GameRoutine_2afd90(__int64, __int64);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
extern _QWORD GameData_1b01548[4];
__int64 EffectDelay_2b0320(__int64 a1, __int64 a2);
__int64 EffectDelay_2b0400(__int64 result, __int64 a2);
void nn_detail_UnexpectedDefaultImpl_alt1() __asm__(
    "nn_detail_UnexpectedDefaultImpl");
__int64 EffectDelay_Unknown2(__int64 a1);

__int64 EffectDelay_Unknown2(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;

  v2 = COERCE_AS(__typeof__(v2),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v1 = *(unsigned int*)(a1 + 104);
  if ((unsigned int)v1 >= 4) {
    goto LABEL_7;
  }
  v2 = GameData_1a83730[v1];
  v3 = *(_DWORD*)(a1 + 28);
  if (v3 == 0) {
    v4 = 32000;
    v5 = *(_QWORD*)(a1 + 48);
    return nn_audio_GetRequiredBufferSizeForDelay(v5, v4, v2);
  }
  if (v3 != 1) {
  LABEL_7:
    nn_detail_UnexpectedDefaultImpl_alt1(),
        v2 = COERCE_AS(__typeof__(v2),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  v4 = 48000;
  v5 = *(_QWORD*)(a1 + 48);
  return nn_audio_GetRequiredBufferSizeForDelay(v5, v4, v2);
}

__int64 EffectDelay_2b0320(__int64 a1, __int64 a2)
{
  unsigned int v2;
  int v4;
  _QWORD v6[3];

  v2 = a2;
  v6[0] = 0x100000000LL;
  v6[1] = 0x300000002LL;
  v6[2] = 0x500000004LL;
  if ((_DWORD)a2 == 3) {
    HIDWORD(v6[2]) = 3;
    LODWORD(v6[1]) = 4;
    *(_QWORD*)((char*)&v6[1] + 4) = 0x200000005LL;
    v4 = GameRoutine_2afd90(3, a2);
    if ((*(_BYTE*)(a1 + 24) & 1) != 0) {
      return 0;
    }
    *(_DWORD*)(a1 + 104) = 3;
    if (v4 >= 1) {
      goto LABEL_9;
    }
  }
  else {
    v4 = GameRoutine_2afd90((unsigned int)a2, a2);
    if (v2 > 3 || (*(_BYTE*)(a1 + 24) & 1) != 0) {
      return 0;
    }
    *(_DWORD*)(a1 + 104) = v2;
    if (v4 > 0) {
    LABEL_9:
      memcpy(a1 + 108, v6, 4LL * (unsigned int)v4);
    }
  }
  return 1;
}

__int64 EffectDelay_2b0400(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int* v6;
  _DWORD* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  _DWORD* v11;
  int* v12;
  int v13;

  v2 = *(unsigned int*)(result + 104);
  if ((unsigned int)v2 >= 4) {
    nn_detail_UnexpectedDefaultImpl_alt1();
  }
  v3 = GameData_1b01548[v2];
  v4 = v3 & 7;
  if ((unsigned __int64)(v3 - 1) >= 7) {
    v6 = (int*)(result + 136);
    v7 = (_DWORD*)(a2 + 16);
    v8 = 0;
    v9 = -(__int64)(v3 & 0xFFFFFFFFFFFFFFF8LL);
    do {
      v8 -= 8;
      *(v7 - 4) = *(v6 - 7);
      *(v7 - 3) = *(v6 - 6);
      *(v7 - 2) = *(v6 - 5);
      *(v7 - 1) = *(v6 - 4);
      *v7 = *(v6 - 3);
      v7[1] = *(v6 - 2);
      v7[2] = *(v6 - 1);
      v10 = *v6;
      v6 += 8;
      v7[3] = v10;
      v7 += 8;
    } while (v9 != v8);
    v5 = -v8;
  }
  else {
    v5 = 0;
  }
  v11 = (_DWORD*)(a2 + 4 * v5);
  v12 = (int*)(result + 4 * v5 + 108);
  do {
    v13 = *v12++;
    --v4;
    *v11++ = v13;
  } while (v4 != 0);
  return result;
}

#pragma GCC visibility pop
