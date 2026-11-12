#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2afd90(__int64, __int64);
__int64 SoundVoiceNX_14e360(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_audio_AddI3dl2Reverb_1a0c8b0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                        _QWORD);
__int64 nn_audio_AddI3dl2Reverb_1a0c990(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                        _QWORD);
__int64 nn_audio_GetRequiredBufferSizeForI3dl2Reverb(_QWORD, _QWORD);
__int64 nn_audio_SetI3dl2ReverbDryGain(_QWORD, float);
__int64 nn_audio_SetI3dl2ReverbEnabled(_QWORD, _QWORD);
__int64 nn_audio_SetI3dl2ReverbHfReference(_QWORD, float);
__int64 nn_audio_SetI3dl2ReverbInputOutput(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_audio_SetI3dl2ReverbLateReverbDecayTime(_QWORD, _QWORD);
__int64 nn_audio_SetI3dl2ReverbLateReverbDelayTime(_QWORD, _QWORD);
__int64 nn_audio_SetI3dl2ReverbLateReverbDensity(_QWORD, float);
__int64 nn_audio_SetI3dl2ReverbLateReverbDiffusion(_QWORD, float);
__int64 nn_audio_SetI3dl2ReverbLateReverbHfDecayRatio(_QWORD, float);
__int64 nn_audio_SetI3dl2ReverbReflectionDelayTime(_QWORD, _QWORD);
__int64 nn_audio_SetI3dl2ReverbReflectionsGain(_QWORD, float);
__int64 nn_audio_SetI3dl2ReverbReverbGain(_QWORD, float);
__int64 nn_audio_SetI3dl2ReverbRoomGain(_QWORD, float);
__int64 nn_audio_SetI3dl2ReverbRoomHfGain(_QWORD, float);
__int64 nn_detail_UnexpectedDefaultImpl(_QWORD, _QWORD);
__int64 nn_detail_UnexpectedDefaultImpl_alt1(_QWORD) __asm__(
    "nn_detail_UnexpectedDefaultImpl");
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex_alt1(_QWORD) __asm__("nn_os_UnlockMutex");
__n128 nn_os_UnlockMutex(_QWORD);
extern _DWORD GameData_1a83730_alt1[4] __asm__("GameData_1a83730");
extern _QWORD GameData_1b01548[4];
extern unsigned int GameData_1a83730[4];
__int64 EffectI3dl2Reverb_Unknown2_alt1(__int64 a1, __int64 a2) __asm__(
    "EffectI3dl2Reverb_Unknown2");
__int64 EffectI3dl2Reverb_Unknown3(__int64 a1, __int64 a2,
                                   __int64 (***a3)(_QWORD));
__int64 EffectI3dl2Reverb_Unknown4(__int64 a1, __int64 a2);
__int64 EffectI3dl2Reverb_2b0dc0(__int64 a1, __int64 a2);
__int64 EffectI3dl2Reverb_Unknown8(__int64 result, __int64 a2);
__int64 EffectI3dl2Reverb_2b0f80(__int64 result, float a2);
__int64 EffectI3dl2Reverb_2b1000(__int64 result, float a2);
__int64 EffectI3dl2Reverb_2b1080(__int64 result, __int64 a2);
__int64 EffectI3dl2Reverb_2b1100(__int64 result, float a2);
__int64 EffectI3dl2Reverb_2b1180(__int64 result, float a2);
__int64 EffectI3dl2Reverb_2b1270(__int64 result, float a2);
__int64 EffectI3dl2Reverb_2b1360(__int64 result, float a2);
__int64 EffectI3dl2Reverb_2b13e0(__int64 result, float a2);
__int64 EffectI3dl2Reverb_2b1460(__int64 result, float a2);
__int64 EffectI3dl2Reverb_2b15c0(__int64 result);
__int64 nn_audio_SetI3dl2ReverbDryGain_alt1(__int64, float) __asm__(
    "nn_audio_SetI3dl2ReverbDryGain");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt2(__int64) __asm__("nn_os_UnlockMutex");
void* SoundVoiceNX_14e360_alt1() __asm__("SoundVoiceNX_14e360");
void nn_detail_UnexpectedDefaultImpl_alt2() __asm__(
    "nn_detail_UnexpectedDefaultImpl");
__int64 EffectI3dl2Reverb_Unknown2(__int64 a1);

__int64 EffectI3dl2Reverb_Unknown2(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  int v3;
  __int64 v4;

  v2 = COERCE_AS(__typeof__(v2),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v1 = *(unsigned int*)(a1 + 136);
  if ((unsigned int)v1 >= 4) {
    goto LABEL_7;
  }
  v2 = GameData_1a83730[v1];
  v3 = *(_DWORD*)(a1 + 28);
  if (v3 == 0) {
    v4 = 32000;
    return nn_audio_GetRequiredBufferSizeForI3dl2Reverb(v4, v2);
  }
  if (v3 != 1) {
  LABEL_7:
    nn_detail_UnexpectedDefaultImpl_alt2(),
        v2 = COERCE_AS(__typeof__(v2),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v4 = 48000;
  return nn_audio_GetRequiredBufferSizeForI3dl2Reverb(v4, v2);
}

__int64 EffectI3dl2Reverb_Unknown3(__int64 a1, __int64 a2,
                                   __int64 (***a3)(_QWORD))
{

#pragma clang fp contract(off)
  __int64 v4;
  unsigned int v8;
  unsigned __int64 v9;
  int v10;
  void* v11;
  void* v12;

  if ((*(_BYTE*)(a1 + 24) & 1) != 0) {
    return 0;
  }
  v4 = *(unsigned int*)(a1 + 136);
  if ((unsigned int)v4 >= 4 || *(_DWORD*)(a1 + 28) >= 2u) {
    goto LABEL_11;
  }
  v8 = GameData_1a83730[v4];
  v9 = atomic_load((unsigned __int64*)SoundVoiceNX_14e360_alt1() + 25);
  atomic_store(v9, (unsigned __int64*)(a1 + 120));
  v10 = (**a3)(a3);
  if (v10 == 1) {
    if ((unsigned int)nn_audio_AddI3dl2Reverb_1a0c990(
            a2, a1 + 128, *(_QWORD*)(a1 + 32), *(_QWORD*)(a1 + 40), a3 + 9,
            v8) == 0) {
      goto LABEL_8;
    }
    return 0;
  }
  if (v10 != 0) {
  LABEL_11:
    nn_detail_UnexpectedDefaultImpl_alt2();
  }
  if ((unsigned int)nn_audio_AddI3dl2Reverb_1a0c8b0(
          a2, a1 + 128, *(_QWORD*)(a1 + 32), *(_QWORD*)(a1 + 40), a3 + 11,
          v8) == 0) {
  LABEL_8:
    *(_BYTE*)(a1 + 24) = 1;
    v11 = SoundVoiceNX_14e360_alt1();
    nn_os_LockMutex_alt1((__int64)v11 + 1720);
    nn_audio_SetI3dl2ReverbRoomGain(a1 + 128, *(float*)(a1 + 48));
    nn_audio_SetI3dl2ReverbRoomHfGain(a1 + 128, *(float*)(a1 + 52));
    nn_audio_SetI3dl2ReverbLateReverbDecayTime(a1 + 128, *(_QWORD*)(a1 + 56));
    nn_audio_SetI3dl2ReverbLateReverbHfDecayRatio(a1 + 128, *(float*)(a1 + 64));
    nn_audio_SetI3dl2ReverbReflectionsGain(a1 + 128, *(float*)(a1 + 68));
    nn_audio_SetI3dl2ReverbReflectionDelayTime(a1 + 128, *(_QWORD*)(a1 + 72));
    nn_audio_SetI3dl2ReverbReverbGain(a1 + 128, *(float*)(a1 + 80));
    nn_audio_SetI3dl2ReverbLateReverbDelayTime(a1 + 128, *(_QWORD*)(a1 + 88));
    nn_audio_SetI3dl2ReverbLateReverbDiffusion(a1 + 128, *(float*)(a1 + 96));
    nn_audio_SetI3dl2ReverbLateReverbDensity(a1 + 128, *(float*)(a1 + 100));
    nn_audio_SetI3dl2ReverbHfReference(a1 + 128, *(float*)(a1 + 104));
    nn_audio_SetI3dl2ReverbDryGain_alt1(a1 + 128, *(float*)(a1 + 108));
    nn_audio_SetI3dl2ReverbEnabled(a1 + 128, *(unsigned __int8*)(a1 + 112));
    v12 = SoundVoiceNX_14e360_alt1();
    nn_os_UnlockMutex_alt2((__int64)v12 + 1720);
    return 1;
  }
  return 0;
}

__int64 EffectI3dl2Reverb_Unknown4(__int64 a1, __int64 a2)
{
  __int64 v2;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  unsigned int* v7;
  __int64 v8;
  char* v9;
  char v10;
  char v11;
  __int64 v12;
  unsigned int v13;
  char* v14;
  unsigned int* v15;
  unsigned int v16;
  void* v17;
  void* v18;
  struct {
    int v20;
    __int16 v21;
  } v20_;

  v2 = *(unsigned int*)(a1 + 136);
  if ((unsigned int)v2 >= 4) {
    nn_detail_UnexpectedDefaultImpl_alt2();
  }
  v20_.v21 = 0;
  v20_.v20 = 0;
  v4 = GameData_1a83730[v2];
  v5 = v4 & 7;
  if (v4 - 1 < 7) {
    v6 = 0;
    if ((v4 & 7) == 0) {
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  v7 = (unsigned int*)(a1 + 168);
  v8 = 0;
  v9 = (char*)&v20_.v20 + 3;
  do {
    v8 -= 8;
    v10 = *(_BYTE*)(a2 + *(v7 - 6));
    *(v9 - 3) = *(_BYTE*)(a2 + *(v7 - 7));
    *(v9 - 2) = v10;
    v11 = *(_BYTE*)(a2 + *(v7 - 4));
    *(v9 - 1) = *(_BYTE*)(a2 + *(v7 - 5));
    *v9 = v11;
    v12 = *(v7 - 2);
    v9[1] = *(_BYTE*)(a2 + *(v7 - 3));
    v9[2] = *(_BYTE*)(a2 + v12);
    v9[3] = *(_BYTE*)(a2 + *(v7 - 1));
    v13 = *v7;
    v7 += 8;
    v9[4] = *(_BYTE*)(a2 + v13);
    v9 += 8;
  } while (-(__int64)(v4 & 0x7FFFFFF8) != v8);
  v6 = -v8;
  if ((v4 & 7) != 0) {
  LABEL_8:
    v14 = (char*)&v20_.v20 + v6;
    v15 = (unsigned int*)(a1 + 4 * v6 + 140);
    do {
      v16 = *v15++;
      --v5;
      *v14++ = *(_BYTE*)(a2 + v16);
    } while (v5 != 0);
  }
LABEL_10:
  v17 = SoundVoiceNX_14e360_alt1();
  nn_os_LockMutex_alt1((__int64)v17 + 1720);
  nn_audio_SetI3dl2ReverbInputOutput(a1 + 128, &v20_.v20, &v20_.v20, v4);
  v18 = SoundVoiceNX_14e360_alt1();
  return nn_os_UnlockMutex_alt2((__int64)v18 + 1720);
}

__int64 EffectI3dl2Reverb_2b0dc0(__int64 a1, __int64 a2)
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
    *(_DWORD*)(a1 + 136) = 3;
    if (v4 >= 1) {
      goto LABEL_9;
    }
  }
  else {
    v4 = GameRoutine_2afd90((unsigned int)a2, a2);
    if (v2 > 3 || (*(_BYTE*)(a1 + 24) & 1) != 0) {
      return 0;
    }
    *(_DWORD*)(a1 + 136) = v2;
    if (v4 > 0) {
    LABEL_9:
      memcpy(a1 + 140, v6, 4LL * (unsigned int)v4);
    }
  }
  return 1;
}

__int64 EffectI3dl2Reverb_Unknown8(__int64 result, __int64 a2)
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

  v2 = *(unsigned int*)(result + 136);
  if ((unsigned int)v2 >= 4) {
    nn_detail_UnexpectedDefaultImpl_alt2();
  }
  v3 = GameData_1b01548[v2];
  v4 = v3 & 7;
  if ((unsigned __int64)(v3 - 1) >= 7) {
    v6 = (int*)(result + 168);
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
  v12 = (int*)(result + 4 * v5 + 140);
  do {
    v13 = *v12++;
    --v4;
    *v11++ = v13;
  } while (v4 != 0);
  return result;
}

__int64 EffectI3dl2Reverb_2b0f80(__int64 result, float a2)
{
  float v2;
  int v3;
  bool v4;
  float v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = -10000.0;
  v3 = *(unsigned __int8*)(result + 24);
  if (a2 >= -10000.0) {
    v2 = a2;
  }
  v4 = a2 <= 0.0;
  v5 = 0.0;
  if (v4) {
    v5 = v2;
  }
  *(float*)(result + 48) = v5;
  if (v3 == 1) {
    v6 = result;
    v7 = SoundVoiceNX_14e360(result);
    nn_os_LockMutex(v7 + 1720);
    v8 = nn_audio_SetI3dl2ReverbRoomGain(v6 + 128, *(float*)(v6 + 48));
    v9 = SoundVoiceNX_14e360(v8);
    return nn_os_UnlockMutex_alt1(v9 + 1720);
  }
  return result;
}

__int64 EffectI3dl2Reverb_2b1000(__int64 result, float a2)
{
  float v2;
  int v3;
  bool v4;
  float v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = -10000.0;
  v3 = *(unsigned __int8*)(result + 24);
  if (a2 >= -10000.0) {
    v2 = a2;
  }
  v4 = a2 <= 0.0;
  v5 = 0.0;
  if (v4) {
    v5 = v2;
  }
  *(float*)(result + 52) = v5;
  if (v3 == 1) {
    v6 = result;
    v7 = SoundVoiceNX_14e360(result);
    nn_os_LockMutex(v7 + 1720);
    v8 = nn_audio_SetI3dl2ReverbRoomHfGain(v6 + 128, *(float*)(v6 + 52));
    v9 = SoundVoiceNX_14e360(v8);
    return nn_os_UnlockMutex_alt1(v9 + 1720);
  }
  return result;
}

__int64 EffectI3dl2Reverb_2b1080(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v2 = 100000000;
  if (a2 > 100000000) {
    v2 = a2;
  }
  if (v2 >= 20000000000LL) {
    v2 = 20000000000LL;
  }
  *(_QWORD*)(result + 56) = v2;
  if (*(_BYTE*)(result + 24) == 1) {
    v3 = result;
    v4 = SoundVoiceNX_14e360(result);
    nn_os_LockMutex(v4 + 1720);
    v5 = nn_audio_SetI3dl2ReverbLateReverbDecayTime(v3 + 128,
                                                    *(_QWORD*)(v3 + 56));
    v6 = SoundVoiceNX_14e360(v5);
    return nn_os_UnlockMutex_alt1(v6 + 1720);
  }
  return result;
}

__int64 EffectI3dl2Reverb_2b1100(__int64 result, float a2)
{
  float v2;
  int v3;
  float v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = 0.1;
  v3 = *(unsigned __int8*)(result + 24);
  if (a2 >= 0.1) {
    v2 = a2;
  }
  if (a2 <= 2.0) {
    v4 = v2;
  }
  else {
    v4 = 2.0;
  }
  *(float*)(result + 64) = v4;
  if (v3 == 1) {
    v5 = result;
    v6 = SoundVoiceNX_14e360(result);
    nn_os_LockMutex(v6 + 1720);
    v7 = nn_audio_SetI3dl2ReverbLateReverbHfDecayRatio(v5 + 128,
                                                       *(float*)(v5 + 64));
    v8 = SoundVoiceNX_14e360(v7);
    return nn_os_UnlockMutex_alt1(v8 + 1720);
  }
  return result;
}

__int64 EffectI3dl2Reverb_2b1180(__int64 result, float a2)
{
  float v2;
  int v3;
  float v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = -10000.0;
  v3 = *(unsigned __int8*)(result + 24);
  if (a2 >= -10000.0) {
    v2 = a2;
  }
  if (a2 <= 1000.0) {
    v4 = v2;
  }
  else {
    v4 = 1000.0;
  }
  *(float*)(result + 68) = v4;
  if (v3 == 1) {
    v5 = result;
    v6 = SoundVoiceNX_14e360(result);
    nn_os_LockMutex(v6 + 1720);
    v7 = nn_audio_SetI3dl2ReverbReflectionsGain(v5 + 128, *(float*)(v5 + 68));
    v8 = SoundVoiceNX_14e360(v7);
    return nn_os_UnlockMutex_alt1(v8 + 1720);
  }
  return result;
}

__int64 EffectI3dl2Reverb_2b1270(__int64 result, float a2)
{
  float v2;
  int v3;
  float v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = -10000.0;
  v3 = *(unsigned __int8*)(result + 24);
  if (a2 >= -10000.0) {
    v2 = a2;
  }
  if (a2 <= 2000.0) {
    v4 = v2;
  }
  else {
    v4 = 2000.0;
  }
  *(float*)(result + 80) = v4;
  if (v3 == 1) {
    v5 = result;
    v6 = SoundVoiceNX_14e360(result);
    nn_os_LockMutex(v6 + 1720);
    v7 = nn_audio_SetI3dl2ReverbReverbGain(v5 + 128, *(float*)(v5 + 80));
    v8 = SoundVoiceNX_14e360(v7);
    return nn_os_UnlockMutex_alt1(v8 + 1720);
  }
  return result;
}

__int64 EffectI3dl2Reverb_2b1360(__int64 result, float a2)
{
  float v2;
  int v3;
  float v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = 0.0;
  v3 = *(unsigned __int8*)(result + 24);
  if (a2 >= 0.0) {
    v2 = a2;
  }
  if (a2 <= 100.0) {
    v4 = v2;
  }
  else {
    v4 = 100.0;
  }
  *(float*)(result + 96) = v4;
  if (v3 == 1) {
    v5 = result;
    v6 = SoundVoiceNX_14e360(result);
    nn_os_LockMutex(v6 + 1720);
    v7 = nn_audio_SetI3dl2ReverbLateReverbDiffusion(v5 + 128,
                                                    *(float*)(v5 + 96));
    v8 = SoundVoiceNX_14e360(v7);
    return nn_os_UnlockMutex_alt1(v8 + 1720);
  }
  return result;
}

__int64 EffectI3dl2Reverb_2b13e0(__int64 result, float a2)
{
  float v2;
  int v3;
  float v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = 0.0;
  v3 = *(unsigned __int8*)(result + 24);
  if (a2 >= 0.0) {
    v2 = a2;
  }
  if (a2 <= 100.0) {
    v4 = v2;
  }
  else {
    v4 = 100.0;
  }
  *(float*)(result + 100) = v4;
  if (v3 == 1) {
    v5 = result;
    v6 = SoundVoiceNX_14e360(result);
    nn_os_LockMutex(v6 + 1720);
    v7 =
        nn_audio_SetI3dl2ReverbLateReverbDensity(v5 + 128, *(float*)(v5 + 100));
    v8 = SoundVoiceNX_14e360(v7);
    return nn_os_UnlockMutex_alt1(v8 + 1720);
  }
  return result;
}

__int64 EffectI3dl2Reverb_2b1460(__int64 result, float a2)
{
  float v2;
  int v3;
  float v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = 20.0;
  v3 = *(unsigned __int8*)(result + 24);
  if (a2 >= 20.0) {
    v2 = a2;
  }
  if (a2 <= 20000.0) {
    v4 = v2;
  }
  else {
    v4 = 20000.0;
  }
  *(float*)(result + 104) = v4;
  if (v3 == 1) {
    v5 = result;
    v6 = SoundVoiceNX_14e360(result);
    nn_os_LockMutex(v6 + 1720);
    v7 = nn_audio_SetI3dl2ReverbHfReference(v5 + 128, *(float*)(v5 + 104));
    v8 = SoundVoiceNX_14e360(v7);
    return nn_os_UnlockMutex_alt1(v8 + 1720);
  }
  return result;
}

__int64 EffectI3dl2Reverb_2b15c0(__int64 result)
{
  *(_BYTE*)(result + 64) = 0;
  *(_QWORD*)result = 0xC47A0000C47A0000LL;
  *(_QWORD*)(result + 8) = 2000000000;
  *(_QWORD*)(result + 16) = 0xC42F00003F4CCCCDLL;
  *(_QWORD*)(result + 24) = 5000000;
  *(_DWORD*)(result + 32) = -1007026176;
  *(_QWORD*)(result + 40) = 40000000;
  *(_QWORD*)(result + 48) = 0x4040000042480000LL;
  *(_QWORD*)(result + 56) = 0x3E80000045BB8000LL;
  return result;
}

#pragma GCC visibility pop
