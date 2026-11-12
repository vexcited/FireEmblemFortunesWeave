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
__int64 WaveMultiVoice_183190_alt1(__int64 a1, unsigned int a2, __int64 a3,
                                   float a4) __asm__("WaveMultiVoice_183190");
double WaveMultiVoice_183210(__int64 a1, int a2);
_QWORD* WaveMultiVoice_183280_alt1(__int64 a1, int a2,
                                   __int64 a3) __asm__("WaveMultiVoice_183280");
__int64 WaveMultiVoice_1832f0_alt1(__int64 a1,
                                   int a2) __asm__("WaveMultiVoice_1832f0");
__int64 WaveMultiVoice_183350(__int64 a1, int a2, unsigned int a3);
__int64 WaveMultiVoice_Unknown98(__int64 result);
__attribute__((swiftcall)) void
Manager_11ea40(PSEUDO_X8, __int64 result, __int64, unsigned int, unsigned int);
__int64 Actor_101c40(__int64 result, float);
__int64 Crc32List_11ed40(__int64, int*);
__int64 GameRoutine_112180_alt1(__int64, __int64) __asm__("GameRoutine_112180");
__int64 GameRoutine_180c80(_QWORD, _QWORD);
__int64 Voice_1449c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 WavePlayer_187420_alt1(__int64 result, int,
                               int) __asm__("WavePlayer_187420");
__int64 rand(_QWORD);
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_Voice_getChannelId_alt1(__int64,
                                    int) __asm__("snd_Voice_getChannelId");
__int64 snd_fnd_WeakHandle_get_alt1(__int64) __asm__("snd_fnd_WeakHandle_get");
__int64
snd_fnd_WeakHandle_isValid_alt1(__int64*) __asm__("snd_fnd_WeakHandle_isValid");
__int64 snd_fnd_WeakHandle_set(__int64, __int64);
__int64 snd_fnd_WeakHandle_set_alt1(_QWORD,
                                    _QWORD) __asm__("snd_fnd_WeakHandle_set");
double Voice_1446e0(__int64);
extern __int64 snd_g_frameCount;
extern __int64 snd_g_proxy_ptr[2];
void GameRoutine_f05f0();
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
__int64 WaveMultiVoice_180fb0(__int64 a1);
__int64 WaveMultiVoice_1818d0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9);
__int64 WaveMultiVoice_Unknown21(__int64 a1);
_QWORD* snd_WaveMultiStreamPlayer_setVariable_alt1(
    _QWORD* result, int, __int64,
    float) __asm__("snd_WaveMultiStreamPlayer_setVariable");
__int64* GameRoutine_182d20_alt1(__int64) __asm__("GameRoutine_182d20");
__int64 GameHr_180c80(__int64, __int64);
__int64 Voice_1449c0_alt1(_QWORD*, __int64, __int64, __int64,
                          __int64) __asm__("Voice_1449c0");
__int64 WaveMultiStreamPlayer_180950_alt1(__int64) __asm__(
    "WaveMultiStreamPlayer_180950");
double WaveMultiStreamPlayer_1809e0(__int64, int);
__int64* WaveMultiVoice_183190(__int64 a1, int a2, __int64 a3, float a4);
__int64* WaveMultiVoice_183280(__int64 a1, int a2, __int64 a3);
__int64* WaveMultiVoice_1832f0(__int64 a1, int a2);

__int64 WaveMultiVoice_180fb0(__int64 a1)
{

#pragma clang fp contract(off)
  double v2;
  __int64 v3;
  __int64 v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  unsigned int v19;
  unsigned int v20;
  __int64 v21;
  int* v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int* v30;
  int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  int v35;
  __int64 v36;
  __int64 v37;
  __int64 result;
  __int64 v39;
  unsigned int v40;
  __int64 v41;
  struct {
    __int64 v42;
    int v43;
  } v42_;

  v2 = Voice_1446e0(a1);
  *(_DWORD*)(a1 + 5788) = LODWORD(v2);
  v3 = snd_fnd_WeakHandle_get_alt1(a1 + 6072);
  if (v3 != 0) {
    v4 = v3;
    v5 = (*(float (**)(__int64))(*(_QWORD*)a1 + 536LL))(a1);
    v6 = (*(float (**)(__int64))(*(_QWORD*)a1 + 544LL))(a1);
    v7 = (*(float (**)(__int64))(*(_QWORD*)a1 + 552LL))(a1);
    v8 = (*(float (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1);
    v9 = (*(float (**)(__int64))(*(_QWORD*)a1 + 584LL))(a1);
    v10 = (*(float (**)(__int64))(*(_QWORD*)a1 + 592LL))(a1);
    v11 = (*(float (**)(__int64))(*(_QWORD*)a1 + 600LL))(a1);
    v12 = (*(float (**)(__int64))(*(_QWORD*)a1 + 568LL))(a1);
    (*(void (**)(__int64, float))(*(_QWORD*)(v4 - 5552) + 1520LL))(v4 - 5552,
                                                                   v5);
    (*(void (**)(__int64, float))(*(_QWORD*)(v4 - 5552) + 1528LL))(v4 - 5552,
                                                                   v6);
    (*(void (**)(__int64, float))(*(_QWORD*)(v4 - 5552) + 1536LL))(v4 - 5552,
                                                                   v7);
    (*(void (**)(__int64, float))(*(_QWORD*)(v4 - 5552) + 1544LL))(v4 - 5552,
                                                                   v8);
    (*(void (**)(__int64, float))(*(_QWORD*)(v4 - 5552) + 1552LL))(v4 - 5552,
                                                                   v9);
    (*(void (**)(__int64, float))(*(_QWORD*)(v4 - 5552) + 1560LL))(v4 - 5552,
                                                                   v10);
    (*(void (**)(__int64, float))(*(_QWORD*)(v4 - 5552) + 1568LL))(v4 - 5552,
                                                                   v11);
    (*(void (**)(__int64, float))(*(_QWORD*)(v4 - 5552) + 1576LL))(v4 - 5552,
                                                                   v12);
    snd_Fade_Fade_10c830_alt1((__int64)&v42_.v42, 0x0.0p+0f);
    (*(void (**)(__int64, __int64*, float))(*(_QWORD*)(v4 - 5552) + 72LL))(
        v4 - 5552, &v42_.v42, v5);
    snd_Fade_Destroy_Fade_alt1(&v42_.v42);
    snd_Fade_Fade_10c830_alt1((__int64)&v42_.v42, 0x0.0p+0f);
    (*(void (**)(__int64, __int64*, float))(*(_QWORD*)(v4 - 5552) + 224LL))(
        v4 - 5552, &v42_.v42, v6);
    snd_Fade_Destroy_Fade_alt1(&v42_.v42);
    snd_Fade_Fade_10c830_alt1((__int64)&v42_.v42, 0x0.0p+0f);
    (*(void (**)(__int64, __int64*, float))(*(_QWORD*)(v4 - 5552) + 240LL))(
        v4 - 5552, &v42_.v42, v7);
    snd_Fade_Destroy_Fade_alt1(&v42_.v42);
    snd_Fade_Fade_10c830_alt1((__int64)&v42_.v42, 0x0.0p+0f);
    (*(void (**)(__int64, __int64*, float))(*(_QWORD*)(v4 - 5552) + 256LL))(
        v4 - 5552, &v42_.v42, v8);
    snd_Fade_Destroy_Fade_alt1(&v42_.v42);
    snd_Fade_Fade_10c830_alt1((__int64)&v42_.v42, 0x0.0p+0f);
    (*(void (**)(__int64, __int64*, float))(*(_QWORD*)(v4 - 5552) + 528LL))(
        v4 - 5552, &v42_.v42, v9);
    snd_Fade_Destroy_Fade_alt1(&v42_.v42);
    snd_Fade_Fade_10c830_alt1((__int64)&v42_.v42, 0x0.0p+0f);
    (*(void (**)(__int64, __int64*, float))(*(_QWORD*)(v4 - 5552) + 544LL))(
        v4 - 5552, &v42_.v42, v10);
    snd_Fade_Destroy_Fade_alt1(&v42_.v42);
    snd_Fade_Fade_10c830_alt1((__int64)&v42_.v42, 0x0.0p+0f);
    (*(void (**)(__int64, __int64*, float))(*(_QWORD*)(v4 - 5552) + 576LL))(
        v4 - 5552, &v42_.v42, v11);
    snd_Fade_Destroy_Fade_alt1(&v42_.v42);
    snd_Fade_Fade_10c830_alt1((__int64)&v42_.v42, 0x0.0p+0f);
    (*(void (**)(__int64, __int64*, float))(*(_QWORD*)(v4 - 5552) + 480LL))(
        v4 - 5552, &v42_.v42, v12);
    snd_Fade_Destroy_Fade_alt1(&v42_.v42);
    v13 = snd_Voice_getChannelId_alt1(a1, 0);
    WavePlayer_187420_alt1(v4 - 5552, 0, v13);
    v14 = snd_Voice_getChannelId_alt1(a1, 1);
    WavePlayer_187420_alt1(v4 - 5552, 1, v14);
    v15 = snd_Voice_getChannelId_alt1(a1, 2);
    WavePlayer_187420_alt1(v4 - 5552, 2, v15);
    v16 = snd_Voice_getChannelId_alt1(a1, 3);
    WavePlayer_187420_alt1(v4 - 5552, 3, v16);
    v17 = snd_Voice_getChannelId_alt1(a1, 4);
    WavePlayer_187420_alt1(v4 - 5552, 4, v17);
    v18 = snd_Voice_getChannelId_alt1(a1, 5);
    WavePlayer_187420_alt1(v4 - 5552, 5, v18);
  }
  v19 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 640LL))(a1);
  v20 = (*(__int64 (**)(_QWORD))(**(_QWORD**)snd_g_proxy_ptr[0] + 272LL))(
      *(_QWORD*)snd_g_proxy_ptr[0]);
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)a1 + 632LL))(a1, v20);
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)a1 + 648LL))(a1, v19);
  if ((snd_fnd_WeakHandle_isValid_alt1((__int64*)(a1 + 5800)) & 1) == 0) {
    v21 = *(_QWORD*)(a1 + 5648);
    v23 = *(_DWORD*)(v21 + 64);
    v22 = (int*)(v21 + 64);
    if (v23 != 0) {
      v24 = Crc32List_11ed40(*(_QWORD*)(a1 + 32), v22);
      v42_.v42 = 0;
      v42_.v43 = 0x2000;
      if (v24 != 0) {
        v25 = v24 + 5592;
      }
      else {
        v25 = 0;
      }
      snd_fnd_WeakHandle_set((__int64)&v42_.v42, v25);
      GameRoutine_112180_alt1(a1 + 5800, (__int64)&v42_.v42);
    }
  }
  if ((snd_fnd_WeakHandle_isValid_alt1((__int64*)(a1 + 5800)) & 1) == 0) {
    v26 = *(_QWORD*)(a1 + 32);
    v42_.v42 = 0;
    v42_.v43 = 0x2000;
    GameRoutine_112180_alt1((__int64)&v42_.v42, v26 + 3112);
    GameRoutine_112180_alt1(a1 + 5800, (__int64)&v42_.v42);
  }
  v27 = *(_QWORD*)(a1 + 5648);
  if (*(_DWORD*)(v27 + 68) != 0) {
    v28 = Crc32List_11ed40(*(_QWORD*)(a1 + 32), (int*)(v27 + 68));
    v42_.v42 = 0;
    v42_.v43 = 0x2000;
    if (v28 != 0) {
      v29 = v28 + 5592;
    }
    else {
      v29 = 0;
    }
    snd_fnd_WeakHandle_set((__int64)&v42_.v42, v29);
    GameRoutine_112180_alt1(a1 + 5816, (__int64)&v42_.v42);
    v27 = *(_QWORD*)(a1 + 5648);
  }
  v31 = *(_DWORD*)(v27 + 72);
  v30 = (int*)(v27 + 72);
  if (v31 != 0) {
    v32 = Crc32List_11ed40(*(_QWORD*)(a1 + 32), v30);
    v42_.v42 = 0;
    v42_.v43 = 0x2000;
    if (v32 != 0) {
      v33 = v32 + 5592;
    }
    else {
      v33 = 0;
    }
    snd_fnd_WeakHandle_set((__int64)&v42_.v42, v33);
    GameRoutine_112180_alt1(a1 + 5832, (__int64)&v42_.v42);
  }
  if ((*(_BYTE*)(a1 + 5886) & 1) == 0) {
    v34 = snd_fnd_WeakHandle_get_alt1(a1 + 5848);
    if (v34 != 0) {
      v35 = *(_DWORD*)(a1 + 5772);
      if (v35 != (*(unsigned int (**)(_QWORD))(**(_QWORD**)(v34 + 32) + 32LL))(
                     *(_QWORD*)(v34 + 32))) {
        Manager_11ea40((void*)((__int64)&v42_.v42), *(_QWORD*)(a1 + 32), 0,
                       *(_DWORD*)(a1 + 5772), 0xFFFFFFFF);
        v36 = snd_fnd_WeakHandle_get_alt1((__int64)&v42_.v42);
        if (v36 != 0) {
          v37 = v36;
          GameRoutine_112180_alt1(v36 + 48, a1 + 5848);
          v42_.v42 = 0;
          v42_.v43 = 0x2000;
          snd_fnd_WeakHandle_set((__int64)&v42_.v42, v37);
          GameRoutine_112180_alt1(a1 + 5848, (__int64)&v42_.v42);
          *(_WORD*)(a1 + 5886) = 257;
        }
      }
    }
  }
  result = snd_fnd_WeakHandle_get_alt1(a1 + 5848);
  if (result != 0) {
    v39 = result;
    v40 = (*(__int64 (**)(__int64))(*(_QWORD*)(result - 5592) + 128LL))(result -
                                                                        5592);
    result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 632LL))(a1, v40);
    *(_DWORD*)(v39 + 132) = *(_DWORD*)(*(_QWORD*)(a1 + 5648) + 436LL);
    *(_DWORD*)(v39 + 136) = *(_DWORD*)(*(_QWORD*)(a1 + 5648) + 440LL);
    if (*(_BYTE*)(a1 + 5886) == 1) {
      (*(void (**)(__int64))(*(_QWORD*)(v39 - 5592) + 48LL))(v39 - 5592);
      result = Actor_101c40(v39 - 5592, 0x1.0aac080000000p+4f);
    }
  }
  v41 = snd_g_frameCount + 1;
  *(_QWORD*)(a1 + 5608) = snd_g_frameCount + 1;
  snd_g_frameCount = v41;
  return result;
}

__int64 WaveMultiVoice_1818d0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9)
{
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  struct {
    __int64 v20;
    int v21;
  } v20_;

  Voice_1449c0_alt1((_QWORD*)a1, a2, a4, a8, a9);
  *(_QWORD*)(a1 + 6072) = 0;
  v15 = GameData_2134c38[0];
  *(_DWORD*)(a1 + 6080) = 0x2000;
  v20_.v20 = 0;
  v20_.v21 = 0x2000;
  *(_QWORD*)a1 = v15 + 2;
  *(_QWORD*)(a1 + 5592) = v15 + 244;
  *(_QWORD*)(a1 + 40) = v15 + 103;
  *(_DWORD*)(a1 + 6088) = -1;
  *(_DWORD*)(a1 + 5792) = 1;
  *(_BYTE*)(a1 + 5892) = 1;
  if (a3 != 0) {
    v16 = a3 + 5592;
  }
  else {
    v16 = 0;
  }
  snd_fnd_WeakHandle_set((__int64)&v20_.v20, v16);
  GameRoutine_112180_alt1(a1 + 5800, (__int64)&v20_.v20);
  v20_.v20 = 0;
  v20_.v21 = 0x2000;
  if (a7 != 0) {
    v17 = a7 + 5592;
  }
  else {
    v17 = 0;
  }
  snd_fnd_WeakHandle_set((__int64)&v20_.v20, v17);
  GameRoutine_112180_alt1(a1 + 5848, (__int64)&v20_.v20);
  v18 = *(_QWORD*)(a1 + 5648);
  *(_DWORD*)(a1 + 5920) = *(_DWORD*)(a8 + 208);
  ((void (*)(__int64, __int64))GameRoutine_f05f0)(v18, a5);
  *(_QWORD*)(a1 + 5656) = a6;
  GameHr_180c80(a1, a8);
  WaveMultiVoice_180fb0(a1);
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 784LL))(a1);
}

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

#pragma clang fp contract(off)
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
  __int64 v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  _BYTE* v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  _QWORD v27[35];

  if ((result[5885] & 1) == 0 && result[5903] == 1) {
    v27[25] = v10;
    v27[26] = v9;
    v27[27] = v8;
    v27[28] = v7;
    v27[29] = v6;
    v27[30] = v5;
    v27[31] = v4;
    v27[32] = v3;
    v27[33] = v1;
    v27[34] = v2;
    v11 = (__int64)result;
    v12 = (*(float (**)(_BYTE*))(*(_QWORD*)result + 536LL))(result);
    v13 = (*(float (**)(__int64))(*(_QWORD*)v11 + 544LL))(v11);
    v14 = (*(float (**)(__int64))(*(_QWORD*)v11 + 552LL))(v11);
    v15 = (*(float (**)(__int64))(*(_QWORD*)v11 + 560LL))(v11);
    v16 = (*(float (**)(__int64))(*(_QWORD*)v11 + 584LL))(v11);
    v17 = (*(float (**)(__int64))(*(_QWORD*)v11 + 592LL))(v11);
    v18 = (*(float (**)(__int64))(*(_QWORD*)v11 + 600LL))(v11);
    v19 = (*(float (**)(__int64))(*(_QWORD*)v11 + 568LL))(v11);
    (*(void (**)(__int64, float))(*(_QWORD*)v11 + 528LL))(v11, v12);
    result = (_BYTE*)snd_fnd_WeakHandle_get_alt1(v11 + 6072);
    if (result != nullptr) {
      v20 = result;
      snd_Fade_Fade_10c830_alt1((__int64)v27, 0x0.0p+0f);
      (*(void (**)(_BYTE*, _QWORD*, float))(*((_QWORD*)v20 - 694) + 72LL))(
          v20 - 5552, v27, v12);
      snd_Fade_Destroy_Fade_alt1(v27);
      snd_Fade_Fade_10c830_alt1((__int64)v27, 0x0.0p+0f);
      (*(void (**)(_BYTE*, _QWORD*, float))(*((_QWORD*)v20 - 694) + 224LL))(
          v20 - 5552, v27, v13);
      snd_Fade_Destroy_Fade_alt1(v27);
      snd_Fade_Fade_10c830_alt1((__int64)v27, 0x0.0p+0f);
      (*(void (**)(_BYTE*, _QWORD*, float))(*((_QWORD*)v20 - 694) + 240LL))(
          v20 - 5552, v27, v14);
      snd_Fade_Destroy_Fade_alt1(v27);
      snd_Fade_Fade_10c830_alt1((__int64)v27, 0x0.0p+0f);
      (*(void (**)(_BYTE*, _QWORD*, float))(*((_QWORD*)v20 - 694) + 256LL))(
          v20 - 5552, v27, v15);
      snd_Fade_Destroy_Fade_alt1(v27);
      snd_Fade_Fade_10c830_alt1((__int64)v27, 0x0.0p+0f);
      (*(void (**)(_BYTE*, _QWORD*, float))(*((_QWORD*)v20 - 694) + 528LL))(
          v20 - 5552, v27, v16);
      snd_Fade_Destroy_Fade_alt1(v27);
      snd_Fade_Fade_10c830_alt1((__int64)v27, 0x0.0p+0f);
      (*(void (**)(_BYTE*, _QWORD*, float))(*((_QWORD*)v20 - 694) + 544LL))(
          v20 - 5552, v27, v17);
      snd_Fade_Destroy_Fade_alt1(v27);
      snd_Fade_Fade_10c830_alt1((__int64)v27, 0x0.0p+0f);
      (*(void (**)(_BYTE*, _QWORD*, float))(*((_QWORD*)v20 - 694) + 576LL))(
          v20 - 5552, v27, v18);
      snd_Fade_Destroy_Fade_alt1(v27);
      snd_Fade_Fade_10c830_alt1((__int64)v27, 0x0.0p+0f);
      (*(void (**)(_BYTE*, _QWORD*, float))(*((_QWORD*)v20 - 694) + 480LL))(
          v20 - 5552, v27, v19);
      snd_Fade_Destroy_Fade_alt1(v27);
      v21 = snd_Voice_getChannelId_alt1(v11, 0);
      WavePlayer_187420_alt1((__int64)(v20 - 5552), 0, v21);
      v22 = snd_Voice_getChannelId_alt1(v11, 1);
      WavePlayer_187420_alt1((__int64)(v20 - 5552), 1, v22);
      v23 = snd_Voice_getChannelId_alt1(v11, 2);
      WavePlayer_187420_alt1((__int64)(v20 - 5552), 2, v23);
      v24 = snd_Voice_getChannelId_alt1(v11, 3);
      WavePlayer_187420_alt1((__int64)(v20 - 5552), 3, v24);
      v25 = snd_Voice_getChannelId_alt1(v11, 4);
      WavePlayer_187420_alt1((__int64)(v20 - 5552), 4, v25);
      v26 = snd_Voice_getChannelId_alt1(v11, 5);
      return (_BYTE*)WavePlayer_187420_alt1((__int64)(v20 - 5552), 5, v26);
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

__int64 WaveMultiVoice_Unknown21(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  float v4;
  int v5;
  __int64 v6;
  float v7;
  float v8;
  __int64 v9;
  __int64 v10;
  __int64 result;

  if (*(_DWORD*)(*(_QWORD*)(a1 + 5648) + 120LL) == 0) {
    v2 = snd_fnd_WeakHandle_get_alt1(a1 + 6072);
    if (v2 != 0) {
      v3 = *(_QWORD*)(a1 + 5648);
      v4 = *(float*)(v3 + 252);
      v5 = (int)fmaxf(*(float*)(v3 + 248), 0x0.0p+0f);
      if (v4 > 0x0.0p+0f) {
        v6 = v2;
        v7 = v4 - (float)v5;
        v8 = vcvts_n_f32_s32(rand(v2), 0x1Fu);
        v2 = v6;
        v5 +=
            (int)(float)((float)((float)(int)v7 + 0x1.cccccc0000000p-1f) * v8);
      }
      (*(void (**)(__int64, _QWORD))(*(_QWORD*)(v2 - 5552) + 1376LL))(
          v2 - 5552,
          (*(_DWORD*)(a1 + 5920) & (unsigned int)~(*(int*)(a1 + 5920) >> 31)) +
              v5);
    }
  }
  v10 = *(_QWORD*)(a1 + 40);
  v9 = a1 + 40;
  result = (*(__int64 (**)(__int64, double))(v10 + 32))(v9, 0x0.0p+0);
  *(_BYTE*)(v9 + 5862) = 1;
  return result;
}

__int64 WaveMultiVoice_182ed0(__int64 a1, __int64 a2)
{
  __int64* v3;
  __int64 result;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  char v10;
  unsigned int v11;
  __int64* v12;
  __int64 v13;
  unsigned int v14;
  struct {
    __int64 v15;
    int v16;
  } v15_;

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
      v15_.v15 = 0;
      v15_.v16 = 0x2000;
      GameRoutine_112180_alt1((__int64)&v15_.v15, a1 + 6072);
      v8 = GameRoutine_182d20_alt1((__int64)&v15_.v15);
      if (v8 != nullptr) {
        v9 = v8;
        v10 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 688LL))(a1);
        v11 = (*(__int64 (**)(__int64*, __int64, _QWORD, _QWORD, _QWORD))(
            *v9 + 1240))(v9, v7, v10 & 1, 0, 0);
      }
      else {
        v11 = -1;
      }
      v15_.v15 = 0;
      v15_.v16 = 0x2000;
      GameRoutine_112180_alt1((__int64)&v15_.v15, a1 + 6072);
      v12 = GameRoutine_182d20_alt1((__int64)&v15_.v15);
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
  struct {
    __int64 v13;
    int v14;
  } v13_;

  v13_.v13 = 0;
  v13_.v14 = 0x2000;
  GameRoutine_112180_alt1((__int64)&v13_.v13, a1 + 6072);
  v11 = (__int64)GameRoutine_182d20_alt1((__int64)&v13_.v13);
  if (v11 != 0) {
    LOBYTE(v11) = WaveMultiStreamPlayer_180720(v11, a2, a3, a4, a5, a6);
  }
  return v11 & 1;
}

__int64 WaveMultiVoice_1830e0(__int64 a1)
{
  __int64 v1;
  struct {
    __int64 v3;
    int v4;
  } v3_;

  v3_.v3 = 0;
  v3_.v4 = 0x2000;
  GameRoutine_112180_alt1((__int64)&v3_.v3, a1 + 6072);
  v1 = (__int64)GameRoutine_182d20_alt1((__int64)&v3_.v3);
  if (v1 != 0) {
    LOBYTE(v1) = WaveMultiStreamPlayer_180950_alt1(v1);
  }
  return v1 & 1;
}

__int64 WaveMultiVoice_183130(__int64 a1)
{
  __int64* v1;
  struct {
    __int64 v3;
    int v4;
  } v3_;

  v3_.v3 = 0;
  v3_.v4 = 0x2000;
  GameRoutine_112180_alt1((__int64)&v3_.v3, a1 + 6072);
  v1 = GameRoutine_182d20_alt1((__int64)&v3_.v3);
  if (v1 != nullptr) {
    return WaveMultiStreamPlayer_1804a0((__int64)v1);
  }
  else {
    return 0xFFFFFFFFLL;
  }
}

__int64* WaveMultiVoice_183190(__int64 a1, int a2, __int64 a3, float a4)
{

#pragma clang fp contract(off)
  __int64* result;
  struct {
    __int64 v8;
    int v9;
  } v8_;

  v8_.v8 = 0;
  v8_.v9 = 0x2000;
  GameRoutine_112180_alt1((__int64)&v8_.v8, a1 + 6072);
  result = GameRoutine_182d20_alt1((__int64)&v8_.v8);
  if (result != nullptr) {
    return snd_WaveMultiStreamPlayer_setVariable_alt1(result, a2, a3, a4);
  }
  return result;
}

double WaveMultiVoice_183210(__int64 a1, int a2)
{

#pragma clang fp contract(off)
  __int64* v3;
  struct {
    __int64 v5;
    int v6;
  } v5_;

  v5_.v5 = 0;
  v5_.v6 = 0x2000;
  GameRoutine_112180_alt1((__int64)&v5_.v5, a1 + 6072);
  v3 = GameRoutine_182d20_alt1((__int64)&v5_.v5);
  if (v3 != nullptr) {
    return WaveMultiStreamPlayer_1809e0((__int64)v3, a2);
  }
  else {
    return 0x0.0p+0;
  }
}

__int64* WaveMultiVoice_183280(__int64 a1, int a2, __int64 a3)
{
  __int64* result;
  struct {
    __int64 v6;
    int v7;
  } v6_;

  v6_.v6 = 0;
  v6_.v7 = 0x2000;
  GameRoutine_112180_alt1((__int64)&v6_.v6, a1 + 6072);
  result = GameRoutine_182d20_alt1((__int64)&v6_.v6);
  if (result != nullptr) {
    return WaveMultiStreamPlayer_180a30(result, a2, a3);
  }
  return result;
}

__int64* WaveMultiVoice_1832f0(__int64 a1, int a2)
{
  __int64* result;
  struct {
    __int64 v4;
    int v5;
  } v4_;

  v4_.v4 = 0;
  v4_.v5 = 0x2000;
  GameRoutine_112180_alt1((__int64)&v4_.v4, a1 + 6072);
  result = GameRoutine_182d20_alt1((__int64)&v4_.v4);
  if (result != nullptr) {
    return (__int64*)WaveMultiStreamPlayer_180a90((__int64)result, a2);
  }
  return result;
}

__int64 WaveMultiVoice_183350(__int64 a1, int a2, unsigned int a3)
{
  __int64* v5;
  struct {
    __int64 v7;
    int v8;
  } v7_;

  v7_.v7 = 0;
  v7_.v8 = 0x2000;
  GameRoutine_112180_alt1((__int64)&v7_.v7, a1 + 6072);
  v5 = GameRoutine_182d20_alt1((__int64)&v7_.v7);
  if (v5 != nullptr) {
    return WaveMultiStreamPlayer_180660((__int64)v5, a2, a3);
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
