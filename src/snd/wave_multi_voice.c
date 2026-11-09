#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* WaveMultiStreamPlayer_180a30(_QWORD* result, int, __int64);
_QWORD* WaveMultiStreamPlayer_180ae0(_QWORD* result, int, unsigned int,
                                     unsigned int, __int64);
__int64 Crc32List_11ec20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_145700(_QWORD);
__int64 GameRoutine_182d20(_QWORD);
__int64 GameRoutine_f7060(_QWORD);
__int64 WaveMultiStreamPlayer_1804a0(__int64);
__int64 WaveMultiStreamPlayer_180660(__int64, int, unsigned int);
__int64 WaveMultiStreamPlayer_180720(__int64, int, int, __int64, __int64,
                                     unsigned int);
__int64 WaveMultiStreamPlayer_180950(void);
__int64 WaveMultiStreamPlayer_180a90(__int64, int);
__int64 WavePlayer_187420(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Fade_10c830(_QWORD);
__int64 snd_Param_isEnvelopeEnded(_QWORD);
__int64 snd_Param_isEnvelopeFading(_QWORD);
__int64 snd_Param_isEnvelopeReleased(_QWORD);
__int64 snd_Voice_getChannelId(_QWORD, _QWORD);
__int64 snd_Voice_hasFeature4(_QWORD);
__int64 snd_WaveMultiStreamPlayer_setVariable(_QWORD, _QWORD, _QWORD, float);
__int64 snd_fnd_WeakHandle_get(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 snd_fnd_WeakHandle_reset(_QWORD);
double GameRoutine_1809e0(__int64, int);
extern __int64* GameData_2134c38[12];
extern __int64* snd_s_target_ptr;
extern char GameData_1a9f09e;
__int64 WaveMultiVoice_Destructor(__int64 a1);
_BYTE* WaveMultiVoice_Unknown11(_BYTE* result);
__int64 WaveMultiVoice_Unknown16(__int64 a1);
__int64 WaveMultiVoice_182ed0(__int64 a1, __int64 a2);
__int64 WaveMultiVoice_183050(__int64 a1, int a2, int a3, __int64 a4,
                              __int64 a5, unsigned int a6);
__int64 WaveMultiVoice_1830e0(__int64 a1);
__int64 WaveMultiVoice_183130(__int64 a1);
__int64 WaveMultiVoice_183190(__int64 a1, unsigned int a2, __int64 a3,
                              float a4);
double WaveMultiVoice_183210(__int64 a1, int a2);
_QWORD* WaveMultiVoice_183280(__int64 a1, int a2, __int64 a3);
__int64 WaveMultiVoice_1832f0(__int64 a1, int a2);
__int64 WaveMultiVoice_183350(__int64 a1, int a2, unsigned int a3);
__int64 WaveMultiVoice_Unknown98(__int64 result);

__int64 WaveMultiVoice_Destructor(__int64 a1)
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

  v2 = GameData_2134c38[0];
  *(_QWORD*)a1 = GameData_2134c38[0] + 2;
  *(_QWORD*)(a1 + 5592) = v2 + 244;
  *(_QWORD*)(a1 + 40) = v2 + 103;
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

_BYTE* WaveMultiVoice_Unknown11(_BYTE* result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BYTE* v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  _BYTE* v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  _BYTE v27[200];
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;

  if ((result[5885] & 1) == 0 && result[5903] == 1) {
    v28 = v10;
    v29 = v9;
    v30 = v8;
    v31 = v7;
    v32 = v6;
    v33 = v5;
    v34 = v4;
    v35 = v3;
    v36 = v1;
    v37 = v2;
    v11 = result;
    v12 = (*(float (**)(_BYTE*))(*(_QWORD*)result + 536LL))(result);
    v13 = (*(float (**)(_BYTE*))(*(_QWORD*)v11 + 544LL))(v11);
    v14 = (*(float (**)(_BYTE*))(*(_QWORD*)v11 + 552LL))(v11);
    v15 = (*(float (**)(_BYTE*))(*(_QWORD*)v11 + 560LL))(v11);
    v16 = (*(float (**)(_BYTE*))(*(_QWORD*)v11 + 584LL))(v11);
    v17 = (*(float (**)(_BYTE*))(*(_QWORD*)v11 + 592LL))(v11);
    v18 = (*(float (**)(_BYTE*))(*(_QWORD*)v11 + 600LL))(v11);
    v19 = (*(float (**)(_BYTE*))(*(_QWORD*)v11 + 568LL))(v11);
    (*(void (**)(_BYTE*, float))(*(_QWORD*)v11 + 528LL))(v11, v12);
    result = (_BYTE*)snd_fnd_WeakHandle_get(v11 + 6072);
    if (result != nullptr) {
      v20 = result;
      snd_Fade_Fade_10c830(v27);
      (*(void (**)(_BYTE*, _BYTE*, float))(*((_QWORD*)v20 - 694) + 72LL))(
          v20 - 5552, v27, v12);
      snd_Fade_Destroy_Fade(v27);
      snd_Fade_Fade_10c830(v27);
      (*(void (**)(_BYTE*, _BYTE*, float))(*((_QWORD*)v20 - 694) + 224LL))(
          v20 - 5552, v27, v13);
      snd_Fade_Destroy_Fade(v27);
      snd_Fade_Fade_10c830(v27);
      (*(void (**)(_BYTE*, _BYTE*, float))(*((_QWORD*)v20 - 694) + 240LL))(
          v20 - 5552, v27, v14);
      snd_Fade_Destroy_Fade(v27);
      snd_Fade_Fade_10c830(v27);
      (*(void (**)(_BYTE*, _BYTE*, float))(*((_QWORD*)v20 - 694) + 256LL))(
          v20 - 5552, v27, v15);
      snd_Fade_Destroy_Fade(v27);
      snd_Fade_Fade_10c830(v27);
      (*(void (**)(_BYTE*, _BYTE*, float))(*((_QWORD*)v20 - 694) + 528LL))(
          v20 - 5552, v27, v16);
      snd_Fade_Destroy_Fade(v27);
      snd_Fade_Fade_10c830(v27);
      (*(void (**)(_BYTE*, _BYTE*, float))(*((_QWORD*)v20 - 694) + 544LL))(
          v20 - 5552, v27, v17);
      snd_Fade_Destroy_Fade(v27);
      snd_Fade_Fade_10c830(v27);
      (*(void (**)(_BYTE*, _BYTE*, float))(*((_QWORD*)v20 - 694) + 576LL))(
          v20 - 5552, v27, v18);
      snd_Fade_Destroy_Fade(v27);
      snd_Fade_Fade_10c830(v27);
      (*(void (**)(_BYTE*, _BYTE*, float))(*((_QWORD*)v20 - 694) + 480LL))(
          v20 - 5552, v27, v19);
      snd_Fade_Destroy_Fade(v27);
      v21 = snd_Voice_getChannelId(v11, 0);
      WavePlayer_187420(v20 - 5552, 0, v21);
      v22 = snd_Voice_getChannelId(v11, 1);
      WavePlayer_187420(v20 - 5552, 1, v22);
      v23 = snd_Voice_getChannelId(v11, 2);
      WavePlayer_187420(v20 - 5552, 2, v23);
      v24 = snd_Voice_getChannelId(v11, 3);
      WavePlayer_187420(v20 - 5552, 3, v24);
      v25 = snd_Voice_getChannelId(v11, 4);
      WavePlayer_187420(v20 - 5552, 4, v25);
      v26 = snd_Voice_getChannelId(v11, 5);
      return (_BYTE*)WavePlayer_187420(v20 - 5552, 5, v26);
    }
  }
  return result;
}

__int64 WaveMultiVoice_Unknown16(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  char v4;
  char v5;
  __int64 v6;
  __int64 result;

  v2 = (*(__int64 (**)(_QWORD, __int64))(*(_QWORD*)*snd_s_target_ptr + 200LL))(
      *snd_s_target_ptr, a1);
  v3 = snd_fnd_WeakHandle_get(a1 + 6072);
  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 688LL))(a1);
  v5 = snd_Voice_hasFeature4(a1);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)(v3 - 5552) + 1240LL))(v3 - 5552, v2, v4 & 1, v5 & 1, 0);
  v6 = snd_fnd_WeakHandle_get(a1 + 6072);
  result = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)(v6 - 5552) + 1232LL))(v6 - 5552, *(unsigned int*)(a1 + 5768),
                                       *(unsigned int*)(a1 + 5772),
                                       *(_QWORD*)(a1 + 5776));
  *(_BYTE*)(a1 + 5900) = 1;
  return result;
}

__int64 WaveMultiVoice_182ed0(__int64 a1, __int64 a2)
{
  __int64* v3;
  __int64 result;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  unsigned int v11;
  _QWORD* v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  int v16;

  v3 = snd_s_target_ptr;
  result = (*(__int64 (**)(_QWORD, __int64, unsigned int*, __int64*))(
      *(_QWORD*)*snd_s_target_ptr + 176LL))(*snd_s_target_ptr, a2, &v14, &v13);
  if ((_DWORD)result != -1) {
    v5 = result;
    if (((*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD))(
             *(_QWORD*)*v3 + 232LL))(*v3, (unsigned int)result,
                                     *(unsigned int*)(a1 + 5772),
                                     *(_QWORD*)(a1 + 5776)) &
         1) != 0 &&
        (v6 = (*(__int64 (**)(__int64, _QWORD, _QWORD, __int64, char*))(
             *(_QWORD*)*v3 + 208LL))(*v3, v5, v14, v13, &GameData_1a9f09e)) !=
            0 &&
        (v7 = v6,
         ((*(__int64 (**)(__int64, __int64))(*(_QWORD*)*v3 + 264LL))(*v3, v6) &
          1) != 0)) {
      v15 = 0;
      v16 = 0x2000;
      GameRoutine_112180(&v15, a1 + 6072);
      v8 = GameRoutine_182d20(&v15);
      if (v8 != 0) {
        v9 = v8;
        v10 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 688LL))(a1);
        v11 = (*(__int64 (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)v9 + 1240LL))(v9, v7, v10 & 1, 0, 0);
      }
      else {
        v11 = -1;
      }
      v15 = 0;
      v16 = 0x2000;
      GameRoutine_112180(&v15, a1 + 6072);
      v12 = (_QWORD*)GameRoutine_182d20(&v15);
      if (v12 != nullptr) {
        WaveMultiStreamPlayer_180ae0(v12, v11, v5, v14, v13);
      }
      return v11;
    }
    else {
      return 0xFFFFFFFFLL;
    }
  }
  return result;
}

__int64 WaveMultiVoice_183050(__int64 a1, int a2, int a3, __int64 a4,
                              __int64 a5, unsigned int a6)
{
  __int64 v11;
  __int64 v13;
  int v14;

  v13 = 0;
  v14 = 0x2000;
  GameRoutine_112180(&v13, a1 + 6072);
  v11 = GameRoutine_182d20(&v13);
  if (v11 != 0) {
    LOBYTE(v11) = WaveMultiStreamPlayer_180720(v11, a2, a3, a4, a5, a6);
  }
  return v11 & 1;
}

__int64 WaveMultiVoice_1830e0(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  int v4;

  v3 = 0;
  v4 = 0x2000;
  GameRoutine_112180(&v3, a1 + 6072);
  v1 = GameRoutine_182d20(&v3);
  if (v1 != 0) {
    LOBYTE(v1) = WaveMultiStreamPlayer_180950();
  }
  return v1 & 1;
}

__int64 WaveMultiVoice_183130(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  int v4;

  v3 = 0;
  v4 = 0x2000;
  GameRoutine_112180(&v3, a1 + 6072);
  v1 = GameRoutine_182d20(&v3);
  if (v1 != 0) {
    return WaveMultiStreamPlayer_1804a0(v1);
  }
  else {
    return 0xFFFFFFFFLL;
  }
}

__int64 WaveMultiVoice_183190(__int64 a1, unsigned int a2, __int64 a3, float a4)
{
  __int64 result;
  __int64 v8;
  int v9;

  v8 = 0;
  v9 = 0x2000;
  GameRoutine_112180(&v8, a1 + 6072);
  result = GameRoutine_182d20(&v8);
  if (result != 0) {
    return snd_WaveMultiStreamPlayer_setVariable(result, a2, a3, a4);
  }
  return result;
}

double WaveMultiVoice_183210(__int64 a1, int a2)
{
  __int64 v3;
  __int64 v5;
  int v6;

  v5 = 0;
  v6 = 0x2000;
  GameRoutine_112180(&v5, a1 + 6072);
  v3 = GameRoutine_182d20(&v5);
  if (v3 != 0) {
    return GameRoutine_1809e0(v3, a2);
  }
  else {
    return 0.0;
  }
}

_QWORD* WaveMultiVoice_183280(__int64 a1, int a2, __int64 a3)
{
  _QWORD* result;
  __int64 v6;
  int v7;

  v6 = 0;
  v7 = 0x2000;
  GameRoutine_112180(&v6, a1 + 6072);
  result = (_QWORD*)GameRoutine_182d20(&v6);
  if (result != nullptr) {
    return WaveMultiStreamPlayer_180a30(result, a2, a3);
  }
  return result;
}

__int64 WaveMultiVoice_1832f0(__int64 a1, int a2)
{
  __int64 result;
  __int64 v4;
  int v5;

  v4 = 0;
  v5 = 0x2000;
  GameRoutine_112180(&v4, a1 + 6072);
  result = GameRoutine_182d20(&v4);
  if (result != 0) {
    return WaveMultiStreamPlayer_180a90(result, a2);
  }
  return result;
}

__int64 WaveMultiVoice_183350(__int64 a1, int a2, unsigned int a3)
{
  __int64 v5;
  __int64 v7;
  int v8;

  v7 = 0;
  v8 = 0x2000;
  GameRoutine_112180(&v7, a1 + 6072);
  v5 = GameRoutine_182d20(&v7);
  if (v5 != 0) {
    return WaveMultiStreamPlayer_180660(v5, a2, a3);
  }
  else {
    return 0xFFFFFFFFLL;
  }
}

__int64 WaveMultiVoice_Unknown98(__int64 result)
{
  __int64 v1;
  __int64 v2;
  char v3;
  char v4;
  char v5;
  __int64 v6;

  v1 = result + 4096;
  if ((*(_BYTE*)(result + 5885) & 1) != 0 ||
      (*(_BYTE*)(result + 5895) & 1) != 0) {
    *(_BYTE*)(result + 5896) = 0;
  }
  else if (*(float*)(*(_QWORD*)(result + 5648) + 256LL) < 0.0 ||
           (v2 = result, v3 = snd_Param_isEnvelopeReleased(result + 40),
            result = v2, (v3 & 1) != 0) ||
           (v4 = snd_Param_isEnvelopeFading(v2 + 40), result = v2,
            (v4 & 1) != 0) ||
           (v5 = snd_Param_isEnvelopeEnded(v2 + 40), result = v2,
            (v5 & 1) != 0)) {
    if ((unsigned int)(*(_DWORD*)(result + 5792) - 1) < 5 ||
        *(_DWORD*)((v6 = *(_QWORD*)(result + 5648)) + 120) != 0 &&
            *(_DWORD*)(v6 + 124) != 0) {
      *(_BYTE*)(v1 + 1800) = 1;
      return 1;
    }
    else {
      result = snd_fnd_WeakHandle_isValid(result + 6072);
      *(_BYTE*)(v1 + 1800) = result & 1;
    }
  }
  else {
    result = *(unsigned __int8*)(v1 + 1801) ^ 1u;
    *(_BYTE*)(v1 + 1800) = (*(_BYTE*)(v1 + 1801) ^ 1) & 1;
  }
  return result;
}

#pragma GCC visibility pop
