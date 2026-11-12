#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _DWORD GameData_1a83730[4];
extern char GameData_1a9f09e;
extern __int64 (*GameData_1f5c518[])();
extern __int64 (*GameData_1f5c5a0[])();
extern __int64* GameData_212d480[2];
extern __int64* GameData_212e250;
extern __int64 GameData_212e2d0[2];
extern __int64 GameData_212e2d8;
extern __int16* GameData_2134648[7];
extern __int16* GameData_2134658[5];
extern __int16* GameData_2134698[2];
extern __int64* GameData_21347e8[10];
extern __int16 GameData_2198f28;
extern __int16 GameData_2198f48;
extern __int64 GameData_2198f88;
extern __int16 GameData_2199008;
extern __int64 GameData_2199048;
__n128 GameRoutine_10c830(_QWORD, double);
__n128 GameRoutine_10cff0(_QWORD);
__int64 GameRoutine_10e120(__int64, __int64, float);
__int64 GameRoutine_112080(_QWORD, long double);
__int64 GameRoutine_1120d0(_QWORD);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_112290(_QWORD, float);
__int64 GameRoutine_118ff0(_QWORD);
__int64 GameRoutine_11cbe0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           float, float, float);
__int64 GameRoutine_11cce0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, float, float, float);
__int64 GameRoutine_11d450(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, float, float, float);
__int64 GameRoutine_11d560(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, float, float, float);
__int64 GameRoutine_11d670(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD, float, float, float);
__int64 GameRoutine_11d8b0(_QWORD);
__int64 GameRoutine_1213f0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_128310(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, float, float, float);
__int64 GameRoutine_1285c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD, float, float, float);
__int64 GameRoutine_13e580(_QWORD);
__int64 GameRoutine_13f3a0(_QWORD, _QWORD);
__int64 GameRoutine_140690(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD, float, float, float);
__int64 GameRoutine_140a70(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD, float, float, float);
__int64 GameRoutine_140fe0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD, float, float, float, _QWORD);
__int64 GameRoutine_145090(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, float, float, float);
__int64 GameRoutine_1453c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD, float, float, float);
__int64 GameRoutine_146970(_QWORD);
__int64 GameRoutine_14e360(_QWORD);
__int64 GameRoutine_16b760(_QWORD, _QWORD);
__int64 GameRoutine_16c4c0(_QWORD, _QWORD);
__int64 GameRoutine_16c4f0(_QWORD, float);
__int64 GameRoutine_16c520(_QWORD, float);
__int64 GameRoutine_17edc0(_QWORD);
void __attribute__((noreturn)) GameRoutine_180bd0(_QWORD);
__int64 GameRoutine_181620(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD, long double, _QWORD);
__int64 GameRoutine_1818d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD, long double, _QWORD);
__int64 GameRoutine_1843e0(_QWORD);
__int64 GameRoutine_184430(_QWORD, long double);
__int64 GameRoutine_190020(_QWORD, _QWORD);
__int64 GameRoutine_190200(_QWORD, _QWORD);
__int64 GameRoutine_190240(_QWORD);
__int64 GameRoutine_1a09b70(_QWORD);
__n128 GameRoutine_1a09b80(_QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a09cf0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0a150(_QWORD);
__int64 GameRoutine_1a0a590(_QWORD);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0bdd0(_QWORD, _QWORD);
__int64 GameRoutine_1a0bde0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0bdf0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0be00(_QWORD, _QWORD);
__int64 GameRoutine_1a0be20(_QWORD, _QWORD);
__int64 GameRoutine_1a0be30(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0be40(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0be50(_QWORD, _QWORD);
__int64 GameRoutine_1a0be60(_QWORD, _QWORD);
__int64 GameRoutine_1a0be80(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0be90(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0bea0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0beb0(_QWORD, _QWORD);
__int64 GameRoutine_1a0bed0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0bee0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0bef0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0bf00(_QWORD, _QWORD);
__int64 GameRoutine_1a0cad0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0cae0(_QWORD);
__int64 GameRoutine_1a0caf0(_QWORD, float);
__int64 GameRoutine_1a0cb00(_QWORD, _QWORD);
__int64 GameRoutine_1a0cb10(_QWORD);
__int64 GameRoutine_1a0cb20(_QWORD, float);
__int64 GameRoutine_1a0cb30(_QWORD, _QWORD);
__int64 GameRoutine_1a0cb40(_QWORD, float);
__int64 GameRoutine_1a0cb50(_QWORD, float);
__int64 GameRoutine_1a0cb60(_QWORD, float);
__int64 GameRoutine_1a0cb70(_QWORD, float);
__int64 GameRoutine_1a0cb80(_QWORD, float);
__int64 GameRoutine_1a0cb90(_QWORD, _QWORD);
__int64 GameRoutine_1a0cba0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_276b50(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_277c00(void);
__int64 GameRoutine_277cf0(_QWORD, float);
__int64 GameRoutine_277d00(_QWORD, float);
__int64 GameRoutine_277d10(_QWORD, float);
__int64 GameRoutine_277d20(_QWORD, float);
__int64 GameRoutine_278160(_QWORD, _QWORD);
__int64 GameRoutine_2a1b90(_QWORD);
__int64 GameRoutine_a1efd0(__int64);
void __attribute__((noreturn)) GameRoutine_a36650(_QWORD, _QWORD);
__int64 GameRoutine_f7640(_QWORD);
__int64 FileManager_10e120(__int64, __int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 snd_fnd_WeakHandle_isValid(__int64*);
__int64 snd_fnd_WeakHandle_reset(__int64);
extern __int64* snd_g_memory_ptr[2];
int memcmp(__int64, __int64, unsigned __int64);
unsigned __int64 strlen(const char*);
void __attribute__((noreturn)) snd_a36650();
__int64 GameHr_13e100(_QWORD* a1, const char* a2);
__int64* GameRoutine_17edc0_alt1(__int64) __asm__("GameRoutine_17edc0");
__int64 GameRoutine_112180_alt1(__int64, __int64) __asm__("GameRoutine_112180");
__int64 GameRoutine_13f3a0_alt1(__int64*,
                                __int64) __asm__("GameRoutine_13f3a0");
__int64 WavePlayer_1843e0(__int64 result);
__int64 WavePlayer_184430(__int64 result);
__int64 memset(__int64, int, unsigned __int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_fnd_WeakHandle_get(__int64);
extern __int64 snd_g_memory;
int* GameHr_13e580_alt1(_QWORD*, __int64) __asm__("GameHr_13e580");
void __attribute__((noreturn))
GameRoutine_180bd0_alt1() __asm__("GameRoutine_180bd0");
void snd_Fade_Fade_10c830(__int64, float);
__int64 GameHr_13e440(__int64 a1);
int* GameHr_13e580(__int64* a1, __int64 a2);
__int64 GameHr_17f0e0(__int64 result, _QWORD* a2, int a3, int a4,
                      unsigned int a5);
__int64 GameHr_181620(__int64, __int64, __int64, __int64, _DWORD*, __int64,
                      __int64, __int64, __int64);
__int64 GameRoutine_190200_alt1(__int64, char*) __asm__("GameRoutine_190200");
__int64 SeqVoice_128310(__int64, __int64, __int64, __int64, __int64, __int64,
                        __int64, float, float, float);
__int64 SeqVoice_1285c0(__int64, __int64, __int64, __int64, __int64, float,
                        float, float, __int64, __int64, __int64);
__int64 VibVoice_140690(__int64, __int64, __int64, __int64, const char*,
                        __int64, __int64, __int64, float, float, float);
__int64 VibVoice_140a70(__int64, __int64, __int64, __int64, int*, __int64,
                        __int64, __int64, float, float, float);
__int64 VibVoice_140fe0(__int64, __int64, __int64, __int64, int*, __int64,
                        _QWORD*, __int64, float, float, float, __int64);
__int64 Voice_145090(__int64, __int64, __int64, __int64, __int64, __int64,
                     __int64, float, float, float);
__int64 Voice_1453c0(__int64, __int64, __int64, __int64, _DWORD*, __int64,
                     __int64, __int64, float, float, float);
__int64 WaveMultiVoice_1818d0(__int64, __int64, __int64, __int64, __int64,
                              __int64, __int64, __int64, __int64);
__int64 nn_audio_AddReverb_1a0cad0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                   _QWORD);
__int64 nn_audio_AddReverb_1a0cba0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                   _QWORD);
__int64 nn_audio_SetReverbColoration(_QWORD, float);
__int64 nn_audio_SetReverbDecayTime(_QWORD, _QWORD);
__int64 nn_audio_SetReverbDryGain(_QWORD, float);
__int64 nn_audio_SetReverbEarlyGain(_QWORD, float);
__int64 nn_audio_SetReverbEarlyMode(_QWORD);
__int64 nn_audio_SetReverbEnabled(_QWORD, _QWORD);
__int64 nn_audio_SetReverbHighFrequencyDecayRatio(_QWORD, float);
__int64 nn_audio_SetReverbLateGain(_QWORD, float);
__int64 nn_audio_SetReverbLateMode(_QWORD);
__int64 nn_audio_SetReverbOutGain(_QWORD, float);
__int64 nn_audio_SetReverbPredelayTime(_QWORD, _QWORD);
__int64 nn_audio_SetReverbReverbGain(_QWORD, float);
extern unsigned int GameData_1a83730_alt1[4] __asm__("GameData_1a83730");
unsigned __int64
GameRoutine_190020_alt1(__int64*, const char*) __asm__("GameRoutine_190020");
unsigned __int64 GameRoutine_f7640_alt1(__int64) __asm__("GameRoutine_f7640");
void* SoundVoiceNX_14e360();
void nn_detail_UnexpectedDefaultImpl();
void nn_diag_detail_AbortImpl_1a0a590();
__int64 GameHr_11cae0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, float a7, float a8, float a9);
__int64 GameHr_11cbe0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, float a7, float a8, float a9);
__int64 GameHr_11cce0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      const char* a5, float a6, float a7, float a8, __int64 a9,
                      __int64 a10);
__int64 GameHr_11d340(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int* a5,
                      __int64 a6, __int64 a7, float a8, float a9, float a10);
__int64 GameHr_11d450(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      _DWORD* a5, __int64 a6, __int64 a7, float a8, float a9,
                      float a10);
__int64 GameHr_11d560(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7, float a8, float a9,
                      float a10);
__int64 GameHr_11d670(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int* a5,
                      float a6, float a7, float a8, __int64 a9, _QWORD* a10,
                      __int64 a11);
__int64 GameHr_11d790(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int* a5,
                      __int64 a6, _QWORD* a7, __int64 a8, float a9, float a10,
                      float a11);
__int64 GameHr_11dc80(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      _DWORD* a5, __int64 a6, __int64 a7, __int64 a8,
                      __int64 a9);
__int64 GameHr_11ddb0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                      __int64 a9);
__int64 GameHr_11dee0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      _DWORD* a5, __int64 a6, __int64 a7, __int64 a8,
                      __int64 a9);
__int64 GameHr_1213f0(__int64 a1, char* a2, char a3, char a4, char a5);
__int64 GameHr_128050(__int64 a1);
_QWORD* GameHr_140190(__int64 a1);
__int64 GameHr_2b2140(__int64 a1, __int64 a2, __int64 (***a3)(_QWORD));

__int64 GameHr_11cae0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, float a7, float a8, float a9)
{

#pragma clang fp contract(off)
  unsigned int v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;

  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v18 = *(unsigned __int16*)(a1 + 32);
  v19 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v18 >= v19) {
    GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590();
  }
  v20 = *(unsigned __int16*)(a1 + 32);
  v21 = *(_QWORD*)(a1 + 24);
  v22 = *(unsigned __int16*)(v21 + 2 * v20);
  *(_WORD*)(a1 + 32) = v20 + 1;
  *(_WORD*)(v21 + 2 * v20) = -1;
  v23 = *(_QWORD*)(a1 + 16) + 6072LL * v22;
  nn_os_UnlockMutex(a1 + 40);
  Voice_145090(v23, a2, a3, a4, a5, a6, 0, a7, a8, a9);
  return v23;
}

__int64 GameHr_11cbe0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, float a7, float a8, float a9)
{

#pragma clang fp contract(off)
  unsigned int v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;

  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v18 = *(unsigned __int16*)(a1 + 32);
  v19 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v18 >= v19) {
    GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590();
  }
  v20 = *(unsigned __int16*)(a1 + 32);
  v21 = *(_QWORD*)(a1 + 24);
  v22 = *(unsigned __int16*)(v21 + 2 * v20);
  *(_WORD*)(a1 + 32) = v20 + 1;
  *(_WORD*)(v21 + 2 * v20) = -1;
  v23 = *(_QWORD*)(a1 + 16) + 6120LL * v22;
  nn_os_UnlockMutex(a1 + 40);
  SeqVoice_128310(v23, a2, a3, a4, a5, a6, 0, a7, a8, a9);
  return v23;
}

__int64 GameHr_11cce0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      const char* a5, float a6, float a7, float a8, __int64 a9,
                      __int64 a10)
{

#pragma clang fp contract(off)
  unsigned int v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  __int64 v24;

  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v19 = *(unsigned __int16*)(a1 + 32);
  v20 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v19 >= v20) {
    GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590();
  }
  v21 = *(unsigned __int16*)(a1 + 32);
  v22 = *(_QWORD*)(a1 + 24);
  v23 = *(unsigned __int16*)(v22 + 2 * v21);
  *(_WORD*)(a1 + 32) = v21 + 1;
  *(_WORD*)(v22 + 2 * v21) = -1;
  v24 = *(_QWORD*)(a1 + 16) + 6152LL * v23;
  nn_os_UnlockMutex(a1 + 40);
  VibVoice_140690(v24, a2, a3, a4, a5, 0, a10, 0, a6, a7, a8);
  return v24;
}

__int64 GameHr_11d340(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int* a5,
                      __int64 a6, __int64 a7, float a8, float a9, float a10)
{

#pragma clang fp contract(off)
  unsigned int v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  __int64 v25;

  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v20 = *(unsigned __int16*)(a1 + 32);
  v21 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v20 >= v21) {
    GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590();
  }
  v22 = *(unsigned __int16*)(a1 + 32);
  v23 = *(_QWORD*)(a1 + 24);
  v24 = *(unsigned __int16*)(v23 + 2 * v22);
  *(_WORD*)(a1 + 32) = v22 + 1;
  *(_WORD*)(v23 + 2 * v22) = -1;
  v25 = *(_QWORD*)(a1 + 16) + 6152LL * v24;
  nn_os_UnlockMutex(a1 + 40);
  VibVoice_140a70(v25, a2, a3, a4, a5, a6, a7, 0, a8, a9, a10);
  return v25;
}

__int64 GameHr_11d450(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      _DWORD* a5, __int64 a6, __int64 a7, float a8, float a9,
                      float a10)
{

#pragma clang fp contract(off)
  unsigned int v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  __int64 v25;

  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v20 = *(unsigned __int16*)(a1 + 32);
  v21 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v20 >= v21) {
    GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590();
  }
  v22 = *(unsigned __int16*)(a1 + 32);
  v23 = *(_QWORD*)(a1 + 24);
  v24 = *(unsigned __int16*)(v23 + 2 * v22);
  *(_WORD*)(a1 + 32) = v22 + 1;
  *(_WORD*)(v23 + 2 * v22) = -1;
  v25 = *(_QWORD*)(a1 + 16) + 6072LL * v24;
  nn_os_UnlockMutex(a1 + 40);
  Voice_1453c0(v25, a2, a3, a4, a5, a6, a7, 0, a8, a9, a10);
  return v25;
}

__int64 GameHr_11d560(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7, float a8, float a9,
                      float a10)
{

#pragma clang fp contract(off)
  unsigned int v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  __int64 v25;

  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v20 = *(unsigned __int16*)(a1 + 32);
  v21 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v20 >= v21) {
    GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590();
  }
  v22 = *(unsigned __int16*)(a1 + 32);
  v23 = *(_QWORD*)(a1 + 24);
  v24 = *(unsigned __int16*)(v23 + 2 * v22);
  *(_WORD*)(a1 + 32) = v22 + 1;
  *(_WORD*)(v23 + 2 * v22) = -1;
  v25 = *(_QWORD*)(a1 + 16) + 6120LL * v24;
  nn_os_UnlockMutex(a1 + 40);
  SeqVoice_1285c0(v25, a2, a3, a4, a5, a8, a9, a10, a6, a7, 0);
  return v25;
}

__int64 GameHr_11d670(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int* a5,
                      float a6, float a7, float a8, __int64 a9, _QWORD* a10,
                      __int64 a11)
{

#pragma clang fp contract(off)
  unsigned int v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  __int64 v26;

  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v21 = *(unsigned __int16*)(a1 + 32);
  v22 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v21 >= v22) {
    GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590();
  }
  v23 = *(unsigned __int16*)(a1 + 32);
  v24 = *(_QWORD*)(a1 + 24);
  v25 = *(unsigned __int16*)(v24 + 2 * v23);
  *(_WORD*)(a1 + 32) = v23 + 1;
  *(_WORD*)(v24 + 2 * v23) = -1;
  v26 = *(_QWORD*)(a1 + 16) + 6152LL * v25;
  nn_os_UnlockMutex(a1 + 40);
  VibVoice_140fe0(v26, a2, a3, a4, a5, 0, a10, a11, a6, a7, a8, 0);
  return v26;
}

__int64 GameHr_11d790(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int* a5,
                      __int64 a6, _QWORD* a7, __int64 a8, float a9, float a10,
                      float a11)
{

#pragma clang fp contract(off)
  unsigned int v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  __int64 v27;

  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v22 = *(unsigned __int16*)(a1 + 32);
  v23 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v22 >= v23) {
    GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590();
  }
  v24 = *(unsigned __int16*)(a1 + 32);
  v25 = *(_QWORD*)(a1 + 24);
  v26 = *(unsigned __int16*)(v25 + 2 * v24);
  *(_WORD*)(a1 + 32) = v24 + 1;
  *(_WORD*)(v25 + 2 * v24) = -1;
  v27 = *(_QWORD*)(a1 + 16) + 6152LL * v26;
  nn_os_UnlockMutex(a1 + 40);
  VibVoice_140fe0(v27, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, 0);
  return v27;
}

__int64 GameHr_11dc80(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      _DWORD* a5, __int64 a6, __int64 a7, __int64 a8,
                      __int64 a9)
{
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  __int64 v24;

  nn_os_LockMutex(a1 + 40);
  v17 = *(unsigned __int16*)(a1 + 32);
  v18 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v17 >= v18) {
    return 0;
  }
  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v19 = *(unsigned __int16*)(a1 + 32);
  v20 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v19 >= v20) {
    GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590();
  }
  v21 = *(unsigned __int16*)(a1 + 32);
  v22 = *(_QWORD*)(a1 + 24);
  v23 = *(unsigned __int16*)(v22 + 2 * v21);
  *(_WORD*)(a1 + 32) = v21 + 1;
  *(_WORD*)(v22 + 2 * v21) = -1;
  v24 = *(_QWORD*)(a1 + 16) + 6096LL * v23;
  nn_os_UnlockMutex(a1 + 40);
  GameHr_181620(v24, a2, a3, a4, a5, a6, a7, a8, a9);
  return v24;
}

__int64 GameHr_11ddb0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                      __int64 a9)
{
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  __int64 v24;

  nn_os_LockMutex(a1 + 40);
  v17 = *(unsigned __int16*)(a1 + 32);
  v18 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v17 >= v18) {
    return 0;
  }
  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v19 = *(unsigned __int16*)(a1 + 32);
  v20 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v19 >= v20) {
    GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590();
  }
  v21 = *(unsigned __int16*)(a1 + 32);
  v22 = *(_QWORD*)(a1 + 24);
  v23 = *(unsigned __int16*)(v22 + 2 * v21);
  *(_WORD*)(a1 + 32) = v21 + 1;
  *(_WORD*)(v22 + 2 * v21) = -1;
  v24 = *(_QWORD*)(a1 + 16) + 6096LL * v23;
  nn_os_UnlockMutex(a1 + 40);
  WaveMultiVoice_1818d0(v24, a2, a3, a4, a5, a6, a7, a8, a9);
  return v24;
}

__int64 GameHr_11dee0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      _DWORD* a5, __int64 a6, __int64 a7, __int64 a8,
                      __int64 a9)
{
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;

  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v17 = *(unsigned __int16*)(a1 + 32);
  v18 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v17 >= v18) {
    GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590();
  }
  v19 = *(unsigned __int16*)(a1 + 32);
  v20 = *(_QWORD*)(a1 + 24);
  v21 = *(unsigned __int16*)(v20 + 2 * v19);
  *(_WORD*)(a1 + 32) = v19 + 1;
  *(_WORD*)(v20 + 2 * v19) = -1;
  v22 = *(_QWORD*)(a1 + 16) + 6096LL * v21;
  nn_os_UnlockMutex(a1 + 40);
  GameHr_181620(v22, a2, a3, a4, a5, a6, a7, a8, a9);
  return v22;
}

__int64 GameHr_120520(_QWORD* a1, __int64 a2)
{
  int v4;
  __int64* v5;
  __int64 v6;
  const char* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  long double v14;

  (*(void (**)(__int64))(*(_QWORD*)a2 + 176LL))(a2);
  v4 = 101;
  v5 = GameData_212e250;
  while (((*(__int64 (**)(__int64))(*(_QWORD*)a2 + 184LL))(a2) & 1) == 0) {
    (*(void (**)(__int64, __int64))(*(_QWORD*)*v5 + 56LL))(*v5, 1);
    if ((unsigned int)--v4 <= 1) {
      v6 = *(_QWORD*)GameData_212e2d0[0];
      v7 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)a2 + 24LL))(a2);
      (*(void (**)(__int64, const char*, ...))(*(_QWORD*)v6 + 384LL))(
          v6,
          "#SoundLibrary warning : Effect remove time out from FinalMix : %s\n",
          v7);
      break;
    }
  }
  GameRoutine_1a09b70(&GameData_2198f28);
  (*(void (**)(__int64, __int64))(*(_QWORD*)*v5 + 1096LL))(*v5, a2);
  (*(void (**)(__int64, __int64))(*(_QWORD*)*v5 + 56LL))(*v5, 5);
  v8 = a1[264];
  v9 = (__int64*)(v8 + a2);
  v11 = *(_QWORD*)(v8 + a2);
  v10 = *(_QWORD*)(v8 + a2 + 8);
  if (v11 == 0) {
    a1[262] = v10;
    v12 = *v9;
    v13 = v9[1];
    if (v13 != 0) {
      goto LABEL_7;
    }
  LABEL_9:
    a1[263] = v12;
    goto LABEL_10;
  }
  *(_QWORD*)(v8 + v11 + 8) = v10;
  v8 = a1[264];
  v9 = (__int64*)(v8 + a2);
  v12 = *(_QWORD*)(v8 + a2);
  v13 = *(_QWORD*)(v8 + a2 + 8);
  if (v13 == 0) {
    goto LABEL_9;
  }
LABEL_7:
  *(_QWORD*)(v8 + v13) = v12;
  v9 = (__int64*)(a1[264] + a2);
LABEL_10:
  *v9 = 0;
  *(_QWORD*)(a1[264] + a2 + 8) = 0;
  *(__n128*)&v14 = GameRoutine_1a09b80(GameData_2134648[0]);
  (**(void (***)(__int64, long double))a2)(a2, v14);
  return (*(__int64 (**)(_QWORD, __int64))(**(_QWORD**)GameData_212d480[0] +
                                           24LL))(*GameData_212d480[0], a2);
}

__n128 GameHr_1206a0(_QWORD* a1, _QWORD* a2)
{
  __int16* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v4 = GameData_2134658[0];
  GameRoutine_1a09b70(GameData_2134658[0]);
  a1[396] = *a2;
  v5 = a2[1];
  v6 = a2[2];
  v7 = a2[3];
  a1[400] = a2[4];
  a1[399] = v7;
  a1[398] = v6;
  a1[397] = v5;
  return GameRoutine_1a09b80(v4);
}

__n128 GameHr_120780(__int64 a1, __int64* a2, int a3)
{
  __int16* v6;
  int v7;
  __int64 v8;
  __int64 v9;

  v6 = GameData_2134658[0];
  GameRoutine_1a09b70(GameData_2134658[0]);
  v7 = *(_DWORD*)(a1 + 3128);
  v8 = *a2;
  if (a3 != -1) {
    v7 = a3;
  }
  v9 = a1 + 16LL * v7;
  *(_QWORD*)(v9 + 3216) = a2[1];
  *(_QWORD*)(v9 + 3208) = v8;
  return GameRoutine_1a09b80(v6);
}

__n128 GameHr_1207f0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  GameRoutine_1a09b70(GameData_2134648[0]);
  v4 = *(_QWORD*)(a1 + 72);
  v5 = (__int64*)(v4 + a2);
  v7 = *(_QWORD*)(v4 + a2);
  v6 = *(_QWORD*)(v4 + a2 + 8);
  if (v7 != 0) {
    *(_QWORD*)(v4 + v7 + 8) = v6;
    v4 = *(_QWORD*)(a1 + 72);
    v5 = (__int64*)(v4 + a2);
    v8 = *(_QWORD*)(v4 + a2);
    v9 = *(_QWORD*)(v4 + a2 + 8);
    if (v9 != 0) {
    LABEL_3:
      *(_QWORD*)(v4 + v9) = v8;
      v5 = (__int64*)(*(_QWORD*)(a1 + 72) + a2);
      goto LABEL_6;
    }
  }
  else {
    *(_QWORD*)(a1 + 56) = v6;
    v8 = *v5;
    v9 = v5[1];
    if (v9 != 0) {
      goto LABEL_3;
    }
  }
  *(_QWORD*)(a1 + 64) = v8;
LABEL_6:
  *v5 = 0;
  *(_QWORD*)(*(_QWORD*)(a1 + 72) + a2 + 8) = 0;
  GameRoutine_1a09b80(GameData_2134648[0]);
  GameRoutine_1a09b70(&GameData_2198f48);
  *(_QWORD*)(*(_QWORD*)(a1 + 112) + a2) = 0;
  *(_QWORD*)(*(_QWORD*)(a1 + 112) + a2 + 8) = 0;
  if (**(_QWORD**)(a1 + 128) != 0) {
    *(_QWORD*)(*(_QWORD*)(a1 + 112) + *(_QWORD*)(a1 + 104) + 8LL) = a2;
    *(_QWORD*)(*(_QWORD*)(a1 + 112) + a2) = **(_QWORD**)(a1 + 128);
  }
  else {
    *(_QWORD*)(a1 + 96) = a2;
  }
  *(_QWORD*)(a1 + 104) = a2;
  return GameRoutine_1a09b80(&GameData_2198f48);
}

__int64 GameHr_120900(__int64 a1, __int64* a2)
{
  int v4;
  __int64* v5;
  __int64 v6;
  const char* v7;
  bool v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  _QWORD* v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64* v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64* v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64* v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64* v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64* v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  long double v90;

  (*(void (**)(__int64*))(*a2 + 176))(a2);
  v4 = 101;
  v5 = GameData_212e250;
  while (((*(__int64 (**)(__int64*))(*a2 + 184))(a2) & 1) == 0) {
    (*(void (**)(__int64, __int64))(*(_QWORD*)*v5 + 56LL))(*v5, 1);
    if ((unsigned int)--v4 <= 1) {
      v6 = *(_QWORD*)GameData_212e2d0[0];
      v7 = (const char*)(*(__int64 (**)(__int64*))(*a2 + 24))(a2);
      (*(void (**)(__int64, const char*, ...))(*(_QWORD*)v6 + 384LL))(
          v6, "#SoundLibrary warning : Effect remove time out from bus : %s\n",
          v7);
      break;
    }
  }
  GameRoutine_1a09b70(&GameData_2198f28);
  v8 = ((*(__int64 (**)(__int64*))(*a2 + 88))(a2) & 1) == 0;
  v9 = 112;
  v10 = (_QWORD*)*v5;
  if (v8) {
    v11 = 1048;
  }
  else {
    v9 = 120;
    v11 = 1072;
  }
  v12 = (*(__int64 (**)(__int64*))(*a2 + v9))(a2);
  v13 = (*(__int64 (**)(__int64*))(*a2 + 128))(a2);
  (*(void (**)(_QWORD*, _QWORD, __int64*, _QWORD))(*v10 + v11))(v10, v12, a2,
                                                                v13);
  (*(void (**)(__int64, __int64))(*(_QWORD*)*v5 + 56LL))(*v5, 5);
  v14 = (_QWORD*)(a1 + 480LL * (*(int (**)(__int64*))(*a2 + 128))(a2) + 176);
  v15 = (*(__int64 (**)(__int64*))(*a2 + 88))(a2);
  v16 = *a2;
  if ((v15 & 1) == 0) {
    switch ((*(unsigned int (**)(__int64*))(v16 + 112))(a2)) {
    case 0u:
    LABEL_14:
      v23 = v14[7];
      v24 = (__int64*)((char*)a2 + v23);
      v26 = *(__int64*)((char*)a2 + v23);
      v25 = *(__int64*)((char*)a2 + v23 + 8);
      if (v26 != 0) {
        *(_QWORD*)(v23 + v26 + 8) = v25;
        v23 = v14[7];
        v24 = (__int64*)((char*)a2 + v23);
        v27 = *(__int64*)((char*)a2 + v23);
        v28 = *(__int64*)((char*)a2 + v23 + 8);
        if (v28 != 0) {
        LABEL_16:
          *(_QWORD*)(v23 + v28) = v27;
          v24 = (__int64*)((char*)a2 + v14[7]);
        LABEL_58:
          *v24 = 0;
          v89 = v14[7];
          goto LABEL_83;
        }
      }
      else {
        v14[5] = v25;
        v27 = *v24;
        v28 = v24[1];
        if (v28 != 0) {
          goto LABEL_16;
        }
      }
      v14[6] = v27;
      goto LABEL_58;
    case 1u:
    LABEL_29:
      v53 = v14[12];
      v54 = (__int64*)((char*)a2 + v53);
      v56 = *(__int64*)((char*)a2 + v53);
      v55 = *(__int64*)((char*)a2 + v53 + 8);
      if (v56 != 0) {
        *(_QWORD*)(v53 + v56 + 8) = v55;
        v53 = v14[12];
        v54 = (__int64*)((char*)a2 + v53);
        v57 = *(__int64*)((char*)a2 + v53);
        v58 = *(__int64*)((char*)a2 + v53 + 8);
        if (v58 != 0) {
        LABEL_31:
          *(_QWORD*)(v53 + v58) = v57;
          v54 = (__int64*)((char*)a2 + v14[12]);
          goto LABEL_79;
        }
      }
      else {
        v14[10] = v55;
        v57 = *v54;
        v58 = v54[1];
        if (v58 != 0) {
          goto LABEL_31;
        }
      }
      v14[11] = v57;
    LABEL_79:
      *v54 = 0;
      v89 = v14[12];
      goto LABEL_83;
    case 2u:
    LABEL_23:
      v41 = v14[17];
      v42 = (__int64*)((char*)a2 + v41);
      v44 = *(__int64*)((char*)a2 + v41);
      v43 = *(__int64*)((char*)a2 + v41 + 8);
      if (v44 != 0) {
        *(_QWORD*)(v41 + v44 + 8) = v43;
        v41 = v14[17];
        v42 = (__int64*)((char*)a2 + v41);
        v45 = *(__int64*)((char*)a2 + v41);
        v46 = *(__int64*)((char*)a2 + v41 + 8);
        if (v46 != 0) {
        LABEL_25:
          *(_QWORD*)(v41 + v46) = v45;
          v42 = (__int64*)((char*)a2 + v14[17]);
          goto LABEL_73;
        }
      }
      else {
        v14[15] = v43;
        v45 = *v42;
        v46 = v42[1];
        if (v46 != 0) {
          goto LABEL_25;
        }
      }
      v14[16] = v45;
    LABEL_73:
      *v42 = 0;
      v89 = v14[17];
      goto LABEL_83;
    case 3u:
    LABEL_17:
      v29 = v14[22];
      v30 = (__int64*)((char*)a2 + v29);
      v32 = *(__int64*)((char*)a2 + v29);
      v31 = *(__int64*)((char*)a2 + v29 + 8);
      if (v32 != 0) {
        *(_QWORD*)(v29 + v32 + 8) = v31;
        v29 = v14[22];
        v30 = (__int64*)((char*)a2 + v29);
        v33 = *(__int64*)((char*)a2 + v29);
        v34 = *(__int64*)((char*)a2 + v29 + 8);
        if (v34 != 0) {
        LABEL_19:
          *(_QWORD*)(v29 + v34) = v33;
          v30 = (__int64*)((char*)a2 + v14[22]);
          goto LABEL_49;
        }
      }
      else {
        v14[20] = v31;
        v33 = *v30;
        v34 = v30[1];
        if (v34 != 0) {
          goto LABEL_19;
        }
      }
      v14[21] = v33;
    LABEL_49:
      *v30 = 0;
      v89 = v14[22];
      goto LABEL_83;
    case 4u:
    LABEL_26:
      v47 = v14[27];
      v48 = (__int64*)((char*)a2 + v47);
      v50 = *(__int64*)((char*)a2 + v47);
      v49 = *(__int64*)((char*)a2 + v47 + 8);
      if (v50 != 0) {
        *(_QWORD*)(v47 + v50 + 8) = v49;
        v47 = v14[27];
        v48 = (__int64*)((char*)a2 + v47);
        v51 = *(__int64*)((char*)a2 + v47);
        v52 = *(__int64*)((char*)a2 + v47 + 8);
        if (v52 != 0) {
        LABEL_28:
          *(_QWORD*)(v47 + v52) = v51;
          v48 = (__int64*)((char*)a2 + v14[27]);
          goto LABEL_76;
        }
      }
      else {
        v14[25] = v49;
        v51 = *v48;
        v52 = v48[1];
        if (v52 != 0) {
          goto LABEL_28;
        }
      }
      v14[26] = v51;
    LABEL_76:
      *v48 = 0;
      v89 = v14[27];
      goto LABEL_83;
    case 5u:
    LABEL_44:
      v83 = v14[32];
      v84 = (__int64*)((char*)a2 + v83);
      v86 = *(__int64*)((char*)a2 + v83);
      v85 = *(__int64*)((char*)a2 + v83 + 8);
      if (v86 != 0) {
        *(_QWORD*)(v83 + v86 + 8) = v85;
        v83 = v14[32];
        v84 = (__int64*)((char*)a2 + v83);
        v87 = *(__int64*)((char*)a2 + v83);
        v88 = *(__int64*)((char*)a2 + v83 + 8);
        if (v88 != 0) {
        LABEL_46:
          *(_QWORD*)(v83 + v88) = v87;
          v84 = (__int64*)((char*)a2 + v14[32]);
          goto LABEL_67;
        }
      }
      else {
        v14[30] = v85;
        v87 = *v84;
        v88 = v84[1];
        if (v88 != 0) {
          goto LABEL_46;
        }
      }
      v14[31] = v87;
    LABEL_67:
      *v84 = 0;
      v89 = v14[32];
      goto LABEL_83;
    case 6u:
    LABEL_38:
      v71 = v14[37];
      v72 = (__int64*)((char*)a2 + v71);
      v74 = *(__int64*)((char*)a2 + v71);
      v73 = *(__int64*)((char*)a2 + v71 + 8);
      if (v74 != 0) {
        *(_QWORD*)(v71 + v74 + 8) = v73;
        v71 = v14[37];
        v72 = (__int64*)((char*)a2 + v71);
        v75 = *(__int64*)((char*)a2 + v71);
        v76 = *(__int64*)((char*)a2 + v71 + 8);
        if (v76 != 0) {
        LABEL_40:
          *(_QWORD*)(v71 + v76) = v75;
          v72 = (__int64*)((char*)a2 + v14[37]);
          goto LABEL_61;
        }
      }
      else {
        v14[35] = v73;
        v75 = *v72;
        v76 = v72[1];
        if (v76 != 0) {
          goto LABEL_40;
        }
      }
      v14[36] = v75;
    LABEL_61:
      *v72 = 0;
      v89 = v14[37];
      goto LABEL_83;
    case 7u:
    LABEL_41:
      v77 = v14[42];
      v78 = (__int64*)((char*)a2 + v77);
      v80 = *(__int64*)((char*)a2 + v77);
      v79 = *(__int64*)((char*)a2 + v77 + 8);
      if (v80 != 0) {
        *(_QWORD*)(v77 + v80 + 8) = v79;
        v77 = v14[42];
        v78 = (__int64*)((char*)a2 + v77);
        v81 = *(__int64*)((char*)a2 + v77);
        v82 = *(__int64*)((char*)a2 + v77 + 8);
        if (v82 != 0) {
        LABEL_43:
          *(_QWORD*)(v77 + v82) = v81;
          v78 = (__int64*)((char*)a2 + v14[42]);
          goto LABEL_64;
        }
      }
      else {
        v14[40] = v79;
        v81 = *v78;
        v82 = v78[1];
        if (v82 != 0) {
          goto LABEL_43;
        }
      }
      v14[41] = v81;
    LABEL_64:
      *v78 = 0;
      v89 = v14[42];
      goto LABEL_83;
    case 8u:
    LABEL_35:
      v65 = v14[47];
      v66 = (__int64*)((char*)a2 + v65);
      v68 = *(__int64*)((char*)a2 + v65);
      v67 = *(__int64*)((char*)a2 + v65 + 8);
      if (v68 != 0) {
        *(_QWORD*)(v65 + v68 + 8) = v67;
        v65 = v14[47];
        v66 = (__int64*)((char*)a2 + v65);
        v69 = *(__int64*)((char*)a2 + v65);
        v70 = *(__int64*)((char*)a2 + v65 + 8);
        if (v70 != 0) {
        LABEL_37:
          *(_QWORD*)(v65 + v70) = v69;
          v66 = (__int64*)((char*)a2 + v14[47]);
          goto LABEL_55;
        }
      }
      else {
        v14[45] = v67;
        v69 = *v66;
        v70 = v66[1];
        if (v70 != 0) {
          goto LABEL_37;
        }
      }
      v14[46] = v69;
    LABEL_55:
      *v66 = 0;
      v89 = v14[47];
      goto LABEL_83;
    case 9u:
    LABEL_32:
      v59 = v14[52];
      v60 = (__int64*)((char*)a2 + v59);
      v62 = *(__int64*)((char*)a2 + v59);
      v61 = *(__int64*)((char*)a2 + v59 + 8);
      if (v62 != 0) {
        *(_QWORD*)(v59 + v62 + 8) = v61;
        v59 = v14[52];
        v60 = (__int64*)((char*)a2 + v59);
        v63 = *(__int64*)((char*)a2 + v59);
        v64 = *(__int64*)((char*)a2 + v59 + 8);
        if (v64 != 0) {
        LABEL_34:
          *(_QWORD*)(v59 + v64) = v63;
          v60 = (__int64*)((char*)a2 + v14[52]);
          goto LABEL_52;
        }
      }
      else {
        v14[50] = v61;
        v63 = *v60;
        v64 = v60[1];
        if (v64 != 0) {
          goto LABEL_34;
        }
      }
      v14[51] = v63;
    LABEL_52:
      *v60 = 0;
      v89 = v14[52];
      goto LABEL_83;
    case 0xAu:
    LABEL_20:
      v35 = v14[57];
      v36 = (__int64*)((char*)a2 + v35);
      v38 = *(__int64*)((char*)a2 + v35);
      v37 = *(__int64*)((char*)a2 + v35 + 8);
      if (v38 != 0) {
        *(_QWORD*)(v35 + v38 + 8) = v37;
        v35 = v14[57];
        v36 = (__int64*)((char*)a2 + v35);
        v39 = *(__int64*)((char*)a2 + v35);
        v40 = *(__int64*)((char*)a2 + v35 + 8);
        if (v40 != 0) {
        LABEL_22:
          *(_QWORD*)(v35 + v40) = v39;
          v36 = (__int64*)((char*)a2 + v14[57]);
          goto LABEL_70;
        }
      }
      else {
        v14[55] = v37;
        v39 = *v36;
        v40 = v36[1];
        if (v40 != 0) {
          goto LABEL_22;
        }
      }
      v14[56] = v39;
    LABEL_70:
      *v36 = 0;
      v89 = v14[57];
      goto LABEL_83;
    default:
      goto LABEL_84;
    }
  }
  switch ((*(unsigned int (**)(__int64*))(v16 + 120))(a2)) {
  case 0u:
    v17 = v14[2];
    v18 = (__int64*)((char*)a2 + v17);
    v20 = *(__int64*)((char*)a2 + v17);
    v19 = *(__int64*)((char*)a2 + v17 + 8);
    if (v20 != 0) {
      *(_QWORD*)(v17 + v20 + 8) = v19;
      v17 = v14[2];
      v18 = (__int64*)((char*)a2 + v17);
      v21 = *(__int64*)((char*)a2 + v17);
      v22 = *(__int64*)((char*)a2 + v17 + 8);
      if (v22 != 0) {
      LABEL_12:
        *(_QWORD*)(v17 + v22) = v21;
        v18 = (__int64*)((char*)a2 + v14[2]);
        goto LABEL_82;
      }
    }
    else {
      *v14 = v19;
      v21 = *v18;
      v22 = v18[1];
      if (v22 != 0) {
        goto LABEL_12;
      }
    }
    v14[1] = v21;
  LABEL_82:
    *v18 = 0;
    v89 = v14[2];
    break;
  case 1u:
    goto LABEL_14;
  case 2u:
    goto LABEL_29;
  case 3u:
    goto LABEL_23;
  case 4u:
    goto LABEL_17;
  case 5u:
    goto LABEL_26;
  case 6u:
    goto LABEL_44;
  case 7u:
    goto LABEL_38;
  case 8u:
    goto LABEL_41;
  case 9u:
    goto LABEL_35;
  case 0xAu:
    goto LABEL_32;
  case 0xBu:
    goto LABEL_20;
  default:
    goto LABEL_84;
  }
LABEL_83:
  *(__int64*)((char*)a2 + v89 + 8) = 0;
LABEL_84:
  *(__n128*)&v90 = GameRoutine_1a09b80(&GameData_2198f28);
  (*(void (**)(__int64*, long double))*a2)(a2, v90);
  return (*(__int64 (**)(_QWORD, __int64*))(**(_QWORD**)GameData_212d480[0] +
                                            24LL))(*GameData_212d480[0], a2);
}

__int64 GameHr_1212c0(__int64 a1, unsigned __int8* a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  unsigned __int16 v7;
  unsigned int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  unsigned __int8* v12;

  result = (*(__int64 (**)(_QWORD))(**(_QWORD**)GameData_212e2d0[0] + 504LL))(
      *(_QWORD*)GameData_212e2d0[0]);
  if ((result & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 4336);
    if (v5 != 0) {
      if ((*(_BYTE*)v5 & 1) != 0) {
        (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)GameData_212d480[0] + 24LL))(
            *GameData_212d480[0], *(_QWORD*)(v5 + 16));
      }
      GameRoutine_1a09b70(a1 + 3280);
      v6 = *(_QWORD*)(a1 + 3264);
      v7 = *(_WORD*)(a1 + 3272) - 1;
      v8 = (unsigned int)(v5 - *(_DWORD*)(a1 + 3256)) >> 5;
      *(_WORD*)(a1 + 3272) = v7;
      *(_WORD*)(v6 + 2LL * v7) = v8;
      GameRoutine_1a09b80(a1 + 3280);
    }
    GameRoutine_1a0b940(a1 + 3328, a1 + 3320, 1016);
    v9 = *(_DWORD*)(a1 + 4344);
    if (v9 == 1) {
      v11 = GameRoutine_146970(a2);
    LABEL_15:
      result = GameRoutine_1213f0(a1 + 3240, v11, a2[5889], a2[5890], a2[5895]);
      *(_QWORD*)(a1 + 3320) = result;
      return result;
    }
    if (v9 != 0) {
      if (*(_BYTE*)GameRoutine_190240(a2 + 5712) != 0) {
        v12 = a2 + 5712;
      LABEL_14:
        v11 = GameRoutine_190240(v12);
        goto LABEL_15;
      }
      v10 = 5680;
    }
    else {
      v10 = 5736;
    }
    v12 = &a2[v10];
    goto LABEL_14;
  }
  return result;
}

__int64 GameHr_1213f0(__int64 a1, char* a2, char a3, char a4, char a5)
{
  unsigned int v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v10 = *(unsigned __int16*)(a1 + 32);
  v11 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v10 >= v11) {
    GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590();
  }
  v12 = *(unsigned __int16*)(a1 + 32);
  v13 = *(_QWORD*)(a1 + 24);
  v14 = *(unsigned __int16*)(v13 + 2 * v12);
  *(_WORD*)(a1 + 32) = v12 + 1;
  *(_WORD*)(v13 + 2 * v12) = -1;
  v15 = *(_QWORD*)(a1 + 16) + 32 * v14;
  nn_os_UnlockMutex(a1 + 40);
  GameRoutine_190020_alt1((__int64*)v15, &GameData_1a9f09e);
  *(_WORD*)(v15 + 24) = 0;
  *(_BYTE*)(v15 + 26) = 0;
  GameRoutine_190200_alt1(v15, a2);
  *(_BYTE*)(v15 + 24) = a3 & 1;
  *(_BYTE*)(v15 + 25) = a4 & 1;
  *(_BYTE*)(v15 + 26) = a5 & 1;
  return v15;
}

__int64 GameHr_128050(__int64 a1)
{
  unsigned int v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;

  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v2 = *(unsigned __int16*)(a1 + 32);
  v3 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v2 >= v3) {
    GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590();
  }
  v4 = *(unsigned __int16*)(a1 + 32);
  v5 = *(_QWORD*)(a1 + 24);
  v6 = *(unsigned __int16*)(v5 + 2 * v4);
  *(_WORD*)(a1 + 32) = v4 + 1;
  *(_WORD*)(v5 + 2 * v4) = -1;
  v7 = *(_QWORD*)(a1 + 16) + 712LL * v6;
  nn_os_UnlockMutex(a1 + 40);
  memset(v7, 0, 0x2C8u);
  GameRoutine_f7640_alt1(v7 + 16);
  *(_DWORD*)(v7 + 704) = 0;
  *(_QWORD*)(v7 + 696) = 0;
  *(_QWORD*)(v7 + 688) = 0;
  *(_QWORD*)(v7 + 680) = 0;
  return v7;
}

__int64 GameHr_13e100(_QWORD* a1, const char* a2)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  _BYTE* v16;
  __int64* v17;

  nn_os_LockMutex((__int64)GameData_2134698[0]);
  v5 = a1[1];
  v4 = a1[2];
  if (v4 != v5) {
    v6 = 0xAAAAAAAAAAAAAAABLL * ((v4 - v5) >> 4);
    v7 = (_QWORD*)(v5 + 16);
    v8 = strlen(a2);
    while (1) {
      v9 = *((_BYTE*)v7 - 16) >> 1;
      if ((*(_BYTE*)(v7 - 2) & 1) != 0) {
        v9 = *(v7 - 1);
      }
      if (v8 == v9) {
        if (v8 == -1) {
          snd_a36650();
        }
        v10 = (*(_BYTE*)(v7 - 2) & 1) != 0 ? *v7 : (__int64)v7 - 15;
        if (memcmp(v10, (__int64)a2, v8) == 0) {
          break;
        }
      }
      --v6;
      v7 += 6;
      if (v6 == 0) {
        return nn_os_UnlockMutex((__int64)&GameData_2199008);
      }
    }
    v11 = *(_QWORD*)(v4 - 24);
    if (*(_QWORD*)(v4 - 16) != v11) {
      v12 = 0;
      v13 = 0;
      do {
        if ((snd_fnd_WeakHandle_isValid((__int64*)(v11 + v12)) & 1) != 0) {
          v14 = GameRoutine_118ff0(a1[7]);
          FileManager_10e120(v14, *(_QWORD*)(v4 - 24) + v12);
          v15 = *(_QWORD*)(v4 - 24) + v12;
          snd_fnd_WeakHandle_reset(v15);
          *(_DWORD*)(v15 + 16) = 0;
        }
        v11 = *(_QWORD*)(v4 - 24);
        ++v13;
        v12 += 24;
      } while (v13 < 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(v4 - 16) - v11) >> 3));
      v4 = a1[2];
      v11 = *(_QWORD*)(v4 - 24);
    }
    v16 = (_BYTE*)(v4 - 48);
    v17 = snd_g_memory_ptr[0];
    if (v11 != 0) {
      *(_QWORD*)(v4 - 16) = v11;
      (*(void (**)(__int64))(*(_QWORD*)*v17 + 24LL))(*v17);
    }
    if ((*v16 & 1) != 0) {
      (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v17 + 24LL))(
          *v17, *(_QWORD*)(v4 - 32));
    }
    a1[2] = v16;
  }
  return nn_os_UnlockMutex((__int64)&GameData_2199008);
}

__int64 GameHr_13e440(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  char v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;

  nn_os_LockMutex((__int64)&GameData_2199008);
  v3 = *(_QWORD*)(a1 + 8);
  v2 = *(_QWORD*)(a1 + 16);
  if (v2 == v3) {
    v4 = 1;
  }
  else {
    v4 = 1;
    v5 = 0;
    do {
      v6 = v3 + 48 * v5;
      v7 = *(_QWORD*)(v6 + 24);
      v8 = *(_QWORD*)(v6 + 32);
      v9 = (__int64*)(v6 + 24);
      if (v8 != v7) {
        v10 = 0;
        v11 = 0;
        while (1) {
          v12 = snd_fnd_WeakHandle_get(v7 + v10);
          if (((*(__int64 (**)(__int64))(*(_QWORD*)v12 + 56LL))(v12) & 1) ==
              0) {
            break;
          }
          v7 = *v9;
          v13 = *v9 + v10;
          if (*(_DWORD*)(v13 + 16) == 1) {
            GameHr_13e580_alt1((_QWORD*)a1, v13);
            *(_DWORD*)(*v9 + v10 + 16) = 2;
            v7 = *v9;
          }
          ++v11;
          v10 += 24;
          if (v11 >= 0xAAAAAAAAAAAAAAABLL * ((v9[1] - v7) >> 3)) {
            goto LABEL_4;
          }
        }
        v4 = 0;
      LABEL_4:
        v3 = *(_QWORD*)(a1 + 8);
        v2 = *(_QWORD*)(a1 + 16);
      }
      ++v5;
    } while (v5 < 0xAAAAAAAAAAAAAAABLL * ((v2 - v3) >> 4));
  }
  *(_BYTE*)(a1 + 65) = v4 & 1;
  return nn_os_UnlockMutex((__int64)GameData_2134698[0]);
}

int* GameHr_13e580(__int64* a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  int* result;
  int* v7;
  int v8;
  __int16* v9;
  int v10;
  __int64 v11;
  _DWORD* v12;
  int v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  _DWORD* v19;
  __int64 v20;
  _DWORD* v21;
  int v22;
  __int64 v23;
  struct {
    __int64 v24;
    int v25;
    char gap36_[4];
    _DWORD* v26;
    __int64 v27;
    int v28;
  } v24_;

  v4 = snd_fnd_WeakHandle_get(a2);
  v23 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 72LL))(v4);
  v5 = snd_fnd_WeakHandle_get(a2);
  result = (int*)(*(__int64 (**)(__int64))(*(_QWORD*)v5 + 72LL))(v5);
  v22 = *result;
  if (*result >= 1) {
    v7 = result + 1;
    v8 = 0;
    v9 = GameData_2134698[0];
    while (1) {
      v10 = v7[1];
      v11 = *v7;
      v24_.v24 = 0;
      v24_.v26 = nullptr;
      v24_.v27 = 0;
      v24_.v28 = 0;
      v24_.v25 = 0x2000;
      v12 = (_DWORD*)(v23 + v11);
      GameRoutine_112180_alt1((__int64)&v24_.v24, a2);
      HIDWORD(v24_.v27) = *v12;
      v13 = v12[1];
      v24_.v26 = v12 + 2;
      LODWORD(v24_.v27) = v10;
      v24_.v28 = v13;
      v14 = a1[4];
      if (a1[5] != v14) {
        break;
      }
    LABEL_7:
      nn_os_LockMutex((__int64)v9);
      v18 = a1[5];
      if (v18 >= a1[6]) {
        v20 = GameRoutine_13f3a0_alt1(a1 + 4, (__int64)&v24_.v24);
      }
      else {
        *(_QWORD*)v18 = 0;
        *(_DWORD*)(v18 + 8) = 0x2000;
        GameRoutine_112180_alt1(v18, (__int64)&v24_.v24);
        v19 = v24_.v26;
        v20 = v18 + 40;
        *(_DWORD*)(v18 + 24) = v24_.v27;
        *(_QWORD*)(v18 + 16) = v19;
        *(_DWORD*)(v18 + 28) = HIDWORD(v24_.v27);
        *(_DWORD*)(v18 + 32) = v24_.v28;
      }
      v7 += 2;
      a1[5] = v20;
      result = (int*)nn_os_UnlockMutex((__int64)v9);
      if (++v8 == v22) {
        return result;
      }
    }
    v15 = 0;
    v16 = 0;
    while (1) {
      v17 = v14 + v15;
      if ((snd_fnd_WeakHandle_isValid((__int64*)(v14 + v15)) & 1) == 0) {
        break;
      }
      v14 = a1[4];
      ++v16;
      v15 += 40;
      if (v16 >= 0xCCCCCCCCCCCCCCCDLL * ((a1[5] - v14) >> 3)) {
        goto LABEL_7;
      }
    }
    result = (int*)GameRoutine_112180_alt1(v17, (__int64)&v24_.v24);
    v21 = v24_.v26;
    *(_DWORD*)(v17 + 24) = v24_.v27;
    *(_QWORD*)(v17 + 16) = v21;
    *(_DWORD*)(v17 + 28) = HIDWORD(v24_.v27);
    *(_DWORD*)(v17 + 32) = v24_.v28;
  }
  return result;
}

_QWORD* GameHr_140190(__int64 a1)
{
  unsigned int v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;

  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v2 = *(unsigned __int16*)(a1 + 32);
  v3 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v2 >= v3) {
    GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590();
  }
  v4 = *(unsigned __int16*)(a1 + 32);
  v5 = *(_QWORD*)(a1 + 24);
  v6 = *(unsigned __int16*)(v5 + 2 * v4);
  *(_WORD*)(a1 + 32) = v4 + 1;
  *(_WORD*)(v5 + 2 * v4) = -1;
  v7 = (_QWORD*)(*(_QWORD*)(a1 + 16) + 32 * v6);
  nn_os_UnlockMutex(a1 + 40);
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  *v7 = 0;
  GameRoutine_190020_alt1(v7 + 1, &GameData_1a9f09e);
  return v7;
}

__n128 GameHr_14cd40(__int64 a1, int a2, int a3)
{
  __int64* v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  *(_DWORD*)(a1 + 8) = a3;
  *(_DWORD*)(a1 + 12) = a2;
  v4 = GameData_21347e8[0];
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)a1 = v4 + 2;
  v5 = GameRoutine_2a1b90(a1);
  GameRoutine_1a09b70(v5 + 840);
  v6 = GameData_212d480[0];
  v7 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], 160, 32);
  GameRoutine_277c00();
  v8 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 16) = v7;
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v6 + 24LL))(*v6);
    v7 = *(_QWORD*)(a1 + 16);
  }
  v9 = GameData_2199048 + 4088LL * *(int*)(a1 + 12) + 96LL * *(int*)(a1 + 8);
  v11 = *(_QWORD*)(v7 + 136);
  v10 = (_QWORD*)(v7 + 136);
  *v10 = *(_QWORD*)(v9 + 3824);
  *(_QWORD*)(v11 + 8) = v9 + 3824;
  *(_QWORD*)(*(_QWORD*)(v9 + 3824) + 8LL) = v10;
  *(_QWORD*)(v9 + 3824) = v11;
  GameRoutine_277d20(*(_QWORD*)(a1 + 16), 0.8f);
  GameRoutine_277cf0(*(_QWORD*)(a1 + 16), 50.0f);
  GameRoutine_277d00(*(_QWORD*)(a1 + 16), 10.0f);
  v12 = GameRoutine_277d10(*(_QWORD*)(a1 + 16), 5.0f);
  v13 = GameRoutine_2a1b90(v12);
  return GameRoutine_1a09b80(v13 + 840);
}

__n128 GameHr_14d420(__int64 a1, int a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  void (***v10)(_QWORD);
  __int64 v11;

  *(_DWORD*)(a1 + 8) = a2;
  v3 = GameData_212e2d8;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_DWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 16) = v3 + 16;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)a1 = GameData_1f5c518;
  v4 = GameData_2199048;
  v5 = GameRoutine_2a1b90(a1);
  GameRoutine_1a09b70(v5 + 840);
  v6 = GameData_212d480[0];
  v7 = v4 + 4088LL * *(int*)(a1 + 8);
  v8 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], 208, 32);
  v9 = GameRoutine_278160(v8, v7 + 2392);
  v10 = *(void (****)(_QWORD))(a1 + 48);
  *(_QWORD*)(a1 + 48) = v8;
  if (v10 != nullptr) {
    (**v10)(v10);
    v9 = (*(__int64 (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v6 + 24LL))(
        *v6, v10);
  }
  v11 = GameRoutine_2a1b90(v9);
  return GameRoutine_1a09b80(v11 + 840);
}

__n128 GameHr_14d780(__int64 a1, int a2, int a3)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  void (***v12)(_QWORD);
  __int64 v13;

  *(_DWORD*)(a1 + 8) = a2;
  *(_QWORD*)(a1 + 32) = 0;
  v4 = GameData_212e2d8;
  *(_DWORD*)(a1 + 40) = 0;
  *(_DWORD*)(a1 + 44) = a3;
  *(_QWORD*)(a1 + 16) = v4 + 16;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)a1 = GameData_1f5c5a0;
  v5 = GameData_2199048;
  v6 = GameRoutine_2a1b90(a1);
  GameRoutine_1a09b70(v6 + 840);
  v7 = v5 + 4088LL * *(int*)(a1 + 8);
  v8 = GameData_212d480[0];
  v9 = v7 + 96LL * *(int*)(a1 + 44);
  v10 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], 288, 32);
  v11 = GameRoutine_276b50(v10, v7 + 2392, v9 + 3784);
  v12 = *(void (****)(_QWORD))(a1 + 48);
  *(_QWORD*)(a1 + 48) = v10;
  if (v12 != nullptr) {
    (**v12)(v12);
    v11 = (*(__int64 (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v8 + 24LL))(
        *v8, v12);
  }
  v13 = GameRoutine_2a1b90(v11);
  return GameRoutine_1a09b80(v13 + 840);
}

__int64 GameHr_1561e0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  GameRoutine_1a09b70(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL) + 393328LL);
  v4 = *(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL);
  v5 = *(int*)(v4 + 393320);
  if (*(int*)(a1 + 5644) >= 1) {
    v6 = 104;
    v7 = 0;
    do {
      GameRoutine_1a0b950(*(_QWORD*)(a2 + 8 * v7++),
                          *(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL) + v6,
                          4 * v5);
      v6 += 0x10000;
    } while (v7 < *(int*)(a1 + 5644));
    v4 = *(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL);
  }
  *(_DWORD*)(v4 + 393320) = 0;
  GameRoutine_1a09b80(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL) + 393328LL);
  return (unsigned int)v5;
}

__int64 GameHr_167eb0(__int64 a1)
{
  __int64 v2;
  __int64 RequiredBufferSizeForAuxReverbEii;
  __int64 v4;

  v2 = GameRoutine_14e360(a1);
  GameRoutine_1a09b70(v2 + 1720);
  RequiredBufferSizeForAuxReverbEii = GameRoutine_1a0bdd0(
      *(unsigned int*)(a1 + 196), *(unsigned int*)(a1 + 192));
  v4 = GameRoutine_14e360(RequiredBufferSizeForAuxReverbEii);
  GameRoutine_1a09b80(v4 + 1720);
  return RequiredBufferSizeForAuxReverbEii;
}

__n128 GameHr_167f00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *(_DWORD*)(a1 + 164) = 50462976;
  v3 = a1 + 164;
  *(_QWORD*)(a1 + 176) = a2;
  *(_QWORD*)(a1 + 184) = a3;
  *(_WORD*)(a1 + 168) = 1284;
  v4 = GameRoutine_14e360(a1);
  GameRoutine_1a09b70(v4 + 1720);
  GameRoutine_1a0bde0(v3 - 60, *(_QWORD*)(v3 + 12), *(_QWORD*)(v3 + 20),
                      *(unsigned int*)(v3 + 32), *(unsigned int*)(v3 + 28));
  GameRoutine_1a0bdf0(v3 - 60, v3, v3, *(unsigned int*)(v3 + 28));
  v5 = GameRoutine_1a0be00(v3 - 60, v3 - 44);
  v6 = GameRoutine_14e360(v5);
  return GameRoutine_1a09b80(v6 + 1720);
}

__int64 GameHr_1684b0(__int64 a1)
{
  __int64 v2;
  __int64 RequiredBufferSizeForAuxI3dl2ReverbEii;
  __int64 v4;

  v2 = GameRoutine_14e360(a1);
  GameRoutine_1a09b70(v2 + 1720);
  RequiredBufferSizeForAuxI3dl2ReverbEii = GameRoutine_1a0be20(
      *(unsigned int*)(a1 + 196), *(unsigned int*)(a1 + 192));
  v4 = GameRoutine_14e360(RequiredBufferSizeForAuxI3dl2ReverbEii);
  GameRoutine_1a09b80(v4 + 1720);
  return RequiredBufferSizeForAuxI3dl2ReverbEii;
}

__n128 GameHr_168500(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_DWORD*)(a1 + 168) = 50462976;
  v3 = a1 + 168;
  *(_QWORD*)(a1 + 176) = a2;
  *(_QWORD*)(a1 + 184) = a3;
  *(_WORD*)(a1 + 172) = 1284;
  v4 = GameRoutine_14e360(a1);
  GameRoutine_1a09b70(v4 + 1720);
  v5 = v3 - 64;
  GameRoutine_1a0be30(v3 - 64, *(_QWORD*)(v3 + 8), *(_QWORD*)(v3 + 16),
                      *(unsigned int*)(v3 + 28), *(unsigned int*)(v3 + 24));
  GameRoutine_1a0be40(v3 - 64, v3, v3, *(unsigned int*)(v3 + 24));
  v3 -= 48;
  GameRoutine_1a0be50(v3, 0);
  v6 = GameRoutine_1a0be60(v5, v3);
  v7 = GameRoutine_14e360(v6);
  return GameRoutine_1a09b80(v7 + 1720);
}

__int64 GameHr_168ad0(unsigned int* a1, unsigned int a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;

  a1[46] = a2;
  v3 = GameRoutine_14e360(a1);
  GameRoutine_1a09b70(v3 + 1720);
  v4 = GameRoutine_1a0be80(1000000LL * (int)a1[46], a1[45], a1[44]);
  v5 = GameRoutine_14e360(v4);
  GameRoutine_1a09b80(v5 + 1720);
  return v4;
}

__n128 GameHr_168b30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *(_DWORD*)(a1 + 152) = 50462976;
  v3 = a1 + 152;
  *(_QWORD*)(a1 + 160) = a2;
  *(_QWORD*)(a1 + 168) = a3;
  *(_WORD*)(a1 + 156) = 1284;
  v4 = GameRoutine_14e360(a1);
  GameRoutine_1a09b70(v4 + 1720);
  GameRoutine_1a0be90(v3 - 48, *(_QWORD*)(v3 + 8), *(_QWORD*)(v3 + 16),
                      1000000LL * *(int*)(v3 + 32), *(unsigned int*)(v3 + 28),
                      *(unsigned int*)(v3 + 24));
  GameRoutine_1a0bea0(v3 - 48, v3, v3, *(unsigned int*)(v3 + 24));
  v5 = GameRoutine_1a0beb0(v3 - 48, v3 - 32);
  v6 = GameRoutine_14e360(v5);
  return GameRoutine_1a09b80(v6 + 1720);
}

__int64 GameHr_1690f0(unsigned int* a1, unsigned int a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;

  a1[48] = a2;
  v3 = GameRoutine_14e360(a1);
  GameRoutine_1a09b70(v3 + 1720);
  v4 = GameRoutine_1a0bed0(1000000LL * (int)a1[48], a1[47], a1[46]);
  v5 = GameRoutine_14e360(v4);
  GameRoutine_1a09b80(v5 + 1720);
  return v4;
}

__n128 GameHr_169150(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *(_DWORD*)(a1 + 160) = 50462976;
  v3 = a1 + 160;
  *(_QWORD*)(a1 + 168) = a2;
  *(_QWORD*)(a1 + 176) = a3;
  *(_WORD*)(a1 + 164) = 1284;
  v4 = GameRoutine_14e360(a1);
  GameRoutine_1a09b70(v4 + 1720);
  GameRoutine_1a0bee0(v3 - 56, *(_QWORD*)(v3 + 8), *(_QWORD*)(v3 + 16),
                      1000000LL * *(int*)(v3 + 32), *(unsigned int*)(v3 + 28),
                      *(unsigned int*)(v3 + 24));
  GameRoutine_1a0bef0(v3 - 56, v3, v3, *(unsigned int*)(v3 + 24));
  v5 = GameRoutine_1a0bf00(v3 - 56, v3 - 40);
  v6 = GameRoutine_14e360(v5);
  return GameRoutine_1a09b80(v6 + 1720);
}

__n128 GameHr_16d9d0(__int64 a1, int a2, unsigned int a3, float a4, float a5)
{
  __int64 v5;
  __int64 v10;
  __int64 v11;

  v5 = 8LL * a2;
  GameRoutine_16b760(*(_QWORD*)(*(_QWORD*)(a1 + 104) + v5 + 8), 6);
  v10 = *(_QWORD*)(*(_QWORD*)(a1 + 104) + v5 + 8);
  v11 = *(_QWORD*)(v10 + 8LL * *(unsigned int*)(v10 + 124) + 128);
  GameRoutine_16c4c0(v11, a3);
  GameRoutine_16c4f0(v11, a4);
  GameRoutine_16c520(v11, a5);
  GameRoutine_1a09b70(a1 + 128);
  (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
  return GameRoutine_1a09b80(a1 + 128);
}

__n128 GameHr_16ed90(__int64 a1, int a2, unsigned int a3, float a4, float a5)
{
  __int64 v5;
  __int64 v10;
  __int64 v11;

  v5 = 8LL * a2;
  GameRoutine_16b760(*(_QWORD*)(*(_QWORD*)(a1 + 104) + v5 + 8), 6);
  v10 = *(_QWORD*)(*(_QWORD*)(a1 + 104) + v5 + 8);
  v11 = *(_QWORD*)(v10 + 8LL * *(unsigned int*)(v10 + 124) + 128);
  GameRoutine_16c4c0(v11, a3);
  GameRoutine_16c4f0(v11, a4);
  GameRoutine_16c520(v11, a5);
  GameRoutine_1a09b70(a1 + 128);
  (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
  return GameRoutine_1a09b80(a1 + 128);
}

__int64 GameHr_17f0e0(__int64 result, _QWORD* a2, int a3, int a4,
                      unsigned int a5)
{

#pragma clang fp contract(off)
  __int64 v5;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 i;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned int v31;
  unsigned int v32;
  int v33;
  unsigned int v34;
  float v35;
  char v36;
  unsigned __int64 v37;
  __int64 j;
  __int64 v39;
  unsigned int v40;
  unsigned int v41;
  float v42;
  float v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  int v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  float** v58;
  __int64 v59;
  float* v60;
  float* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  _QWORD* v65;
  int v66;
  unsigned int v68;
  __int64 v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  int v72;
  __int64 v73;
  struct {
    _QWORD* v74;
    __int64 v75;
    __int64 v76;
    __int64 v77;
  } v74_;
  unsigned __int64 v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  struct {
    __int64 v86;
    float v87;
    float v88;
    float v89;
    float v90;
    float v91;
    float v92;
    float v93;
  } v86_;

  v73 = result + 11122;
  if ((*(_BYTE*)(result + 11122) & 1) != 0) {
    return result;
  }
  v5 = result;
  if ((*(_BYTE*)(result + 5608) & 1) != 0) {
    return result;
  }
  nn_os_LockMutex(result + 11512);
  v9 = *(_QWORD*)(v5 + 11168);
  v10 = *(_QWORD*)(v5 + 11160);
  v66 = a4;
  v11 = v9 - v10;
  if (v9 == v10) {
    v13 = 0;
    v70 = 0;
  }
  else {
    if ((v11 & 0x8000000000000000LL) != 0) {
      GameRoutine_180bd0_alt1();
    }
    v12 = v11 >> 1;
    v13 = (*(__int64 (**)(__int64, unsigned __int64, __int64))(
        *(_QWORD*)snd_g_memory + 16LL))(snd_g_memory, v11 >> 1, 32);
    memset(v13, 0, v12);
    v70 = v13 + v12;
    v14 = *(_QWORD*)(v5 + 11160);
    if (*(_QWORD*)(v5 + 11168) != v14) {
      v15 = 0;
      v16 = 0;
      do {
        *(_QWORD*)(v13 + 8 * v16++) = GameRoutine_17edc0_alt1(v14 + v15);
        v15 += 16;
        v14 = *(_QWORD*)(v5 + 11160);
      } while (v16 < (*(_QWORD*)(v5 + 11168) - v14) >> 4);
    }
  }
  if ((unsigned int)(*(_DWORD*)(v5 + 11112) - 5) >= 5) {
    goto LABEL_62;
  }
  (*(void (**)(__int64))(*(_QWORD*)v5 + 1184LL))(v5);
  (*(void (**)(__int64, float))(*(_QWORD*)v5 + 1592LL))(v5,
                                                        *(float*)(v5 + 10816));
  (*(void (**)(__int64, float))(*(_QWORD*)v5 + 1600LL))(v5,
                                                        *(float*)(v5 + 10820));
  v17 = (__int64)(v70 - v13) >> 3;
  if (v70 != v13) {
    v58 = (float**)v13;
    v59 = (__int64)(v70 - v13) >> 3;
    do {
      v61 = *v58++;
      v60 = v61;
      if (v61 != nullptr &&
          (*(int (**)(float*))(*(_QWORD*)v60 + 1224LL))(v60) >= 5 &&
          (*(int (**)(float*))(*(_QWORD*)v60 + 1224LL))(v60) <= 9 &&
          ((*(__int64 (**)(float*))(*(_QWORD*)v60 + 1288LL))(v60) & 1) == 0 &&
          ((*(__int64 (**)(float*))(*(_QWORD*)v60 + 1296LL))(v60) & 1) == 0) {
        (*(void (**)(float*))(*(_QWORD*)v60 + 1184LL))(v60);
        (*(void (**)(float*, float))(*(_QWORD*)v60 + 1592LL))(v60, v60[2704]);
        (*(void (**)(float*, float))(*(_QWORD*)v60 + 1600LL))(v60, v60[2705]);
      }
      --v59;
    } while (v59 != 0);
  }
  if (a3 < 1) {
    goto LABEL_62;
  }
  v18 = 0;
  v19 = 0;
  v69 = v5;
  v68 = a3;
  v20 = v5 + 11280;
  if (v17 <= 1) {
    v17 = 1;
  }
  v65 = (_QWORD*)(v5 + 11184);
  v71 = v17;
  v64 = v5 + 11208;
  v63 = v5 + 11232;
  v62 = v5 + 11256;
  while (2) {
    v72 = v19;
    for (i = 0; i != 8; ++i) {
      v22 = v20 + 28 * i;
      if (*(_DWORD*)v22 == 1) {
        v27 = *(int*)(v22 + 4);
        v28 = *(_QWORD*)(v13 + 8 * v27);
        v29 = *(_QWORD*)(v13 + 8LL * *(int*)(v22 + 8));
        if (v28 == 0 || v29 == 0) {
          goto LABEL_19;
        }
        v31 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v28 + 1456LL))(
            *(_QWORD*)(v13 + 8 * v27));
        if (*(_DWORD*)(v22 + 12) >= v31) {
          v32 = v31;
          if ((*(int (**)(__int64))(*(_QWORD*)v28 + 1472LL))(v28) >
              (signed __int32)*(_DWORD*)(v22 + 24)) {
            v33 = (*(__int64 (**)(__int64))(*(_QWORD*)v28 + 1464LL))(v28);
            v34 = *(_DWORD*)(v22 + 12);
            if (v34 >= v32) {
              do {
                v34 += v33 - v32;
              } while (v34 >= v32);
              *(_DWORD*)(v22 + 12) = v34;
            }
          }
        }
        if ((*(unsigned int (**)(__int64, _QWORD))(*(_QWORD*)v28 + 1424LL))(
                v28, 0) >= *(_DWORD*)(v22 + 12)) {
          v35 = *(float*)(v22 + 20);
          if (v35 > 0x0.0p+0f) {
            snd_Fade_Fade_10c830((__int64)&v86_.v86, v35);
            (*(void (**)(__int64, __int64*))(*(_QWORD*)v28 + 1312LL))(
                v28, &v86_.v86);
            snd_Fade_Destroy_Fade(&v86_.v86);
            WavePlayer_184430(v28);
          }
          snd_Fade_Fade_10c830((__int64)&v86_.v86, 0x0.0p+0f);
          (*(void (**)(__int64, __int64*, double))(*(_QWORD*)v29 + 160LL))(
              v29, &v86_.v86, 0x0.0p+0);
          snd_Fade_Destroy_Fade(&v86_.v86);
          snd_Fade_Fade_10c830((__int64)&v86_.v86, *(float*)(v22 + 16));
          (*(void (**)(__int64, __int64*, float))(*(_QWORD*)v29 + 160LL))(
              v29, &v86_.v86, 0x1.0000000000000p+0f);
          snd_Fade_Destroy_Fade(&v86_.v86);
          (*(void (**)(__int64))(*(_QWORD*)v29 + 1304LL))(v29);
          WavePlayer_1843e0(v29);
        LABEL_19:
          *(_DWORD*)v22 = 2;
          *(_BYTE*)(v73 + 382) = 0;
          continue;
        }
      }
      else if (*(_DWORD*)v22 == 0) {
        v23 = *(int*)(v22 + 4);
        v24 = *(_QWORD*)(v13 + 8 * v23);
        v25 = *(_QWORD*)(v13 + 8LL * *(int*)(v22 + 8));
        if (v24 == 0 || v25 == 0) {
          *(_DWORD*)v22 = 2;
        }
        else {
          v36 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v24 + 1256LL))(
              *(_QWORD*)(v13 + 8 * v23));
          if ((v36 & 1) != 0 &&
              *(_DWORD*)(v24 + 10768) == *(_DWORD*)(v25 + 10768)) {
            *(_DWORD*)(v24 + 11112) = 5;
            *(_DWORD*)(v24 + 10776) = *(_DWORD*)(v25 + 10776);
            *(_DWORD*)(v24 + 5596) = *(_DWORD*)(v25 + 5596);
            *(_DWORD*)(v24 + 5600) = *(_DWORD*)(v25 + 5600);
            *(_QWORD*)(v24 + 5584) = *(_QWORD*)(v25 + 5584);
            *(_DWORD*)(v24 + 5592) = *(_DWORD*)(v25 + 5592);
            *(_DWORD*)v22 = 2;
          }
        }
      }
    }
    v5 = v69;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
        *(_QWORD*)v69 + 1192LL))((void*)(&v86_.v86), v69);
    v37 = v71;
    if (v70 != v13) {
      for (j = 0; j != v37; ++j) {
        v39 = *(_QWORD*)(v13 + 8 * j);
        if (v39 != 0 &&
            (*(int (**)(_QWORD))(*(_QWORD*)v39 + 1224LL))(
                *(_QWORD*)(v13 + 8 * j)) >= 5 &&
            (*(int (**)(__int64))(*(_QWORD*)v39 + 1224LL))(v39) <= 9 &&
            ((*(__int64 (**)(__int64))(*(_QWORD*)v39 + 1288LL))(v39) & 1) ==
                0 &&
            ((*(__int64 (**)(__int64))(*(_QWORD*)v39 + 1296LL))(v39) & 1) ==
                0) {
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
              *(_QWORD*)v39 + 1192LL))((void*)(&v78), v39);
          *(float*)&v40 = *(float*)&v86_.v86 * *(float*)&v78;
          *(float*)&v41 = *((float*)&v86_.v86 + 1) + *((float*)&v78 + 1);
          v42 = v79;
          v43 = v80;
          v65[10] = 0;
          v65[11] = 0;
          v65[8] = 0;
          v65[9] = 0;
          v65[6] = 0;
          v65[7] = 0;
          v65[4] = 0;
          v65[5] = 0;
          v65[2] = 0;
          v65[3] = 0;
          *v65 = 0;
          v65[1] = 0;
          v74_.v74 = v65;
          v74_.v75 = v64;
          v78 = __PAIR64__(v41, v40);
          v74_.v76 = v63;
          v74_.v77 = v62;
          v79 = v86_.v87 + v42;
          v80 = v86_.v88 * v43;
          v81 = v86_.v89 + v81;
          v82 = v86_.v90 + v82;
          v83 = v86_.v91 + v83;
          v84 = v86_.v92 + v84;
          v85 = v86_.v93 + v85;
          (*(void (**)(__int64, _QWORD**, _QWORD, _QWORD, _QWORD, _QWORD,
                       unsigned __int64*))(*(_QWORD*)v39 + 1176LL))(
              v39, &v74_.v74, 0, v68, (unsigned int)v66, a5, &v78);
          if (v66 >= 1) {
            if ((unsigned int)v66 >= 4) {
              v44 = 0;
              do {
                *(_DWORD*)(*a2 + v18 + 4 * v44) += LODWORD(v74_.v74[v44 / 2]);
                *(_DWORD*)(a2[1] + v18 + 4 * v44) +=
                    *(_DWORD*)(v74_.v75 + 4 * v44);
                *(_DWORD*)(a2[2] + v18 + 4 * v44) +=
                    *(_DWORD*)(v74_.v76 + 4 * v44);
                *(_DWORD*)(a2[3] + v18 + 4 * v44) +=
                    *(_DWORD*)(v74_.v77 + 4 * v44);
                *(_DWORD*)(*a2 + v18 + 4 * v44 + 4) +=
                    HIDWORD(v74_.v74[v44 / 2]);
                v45 = a2[1] + v18 + 4 * v44;
                *(_DWORD*)(v45 + 4) += *(_DWORD*)(v74_.v75 + 4 * v44 + 4);
                v46 = a2[2] + v18 + 4 * v44;
                *(_DWORD*)(v46 + 4) += *(_DWORD*)(v74_.v76 + 4 * v44 + 4);
                v47 = a2[3] + v18 + 4 * v44;
                *(_DWORD*)(v47 + 4) += *(_DWORD*)(v74_.v77 + 4 * v44 + 4);
                *(_DWORD*)(*a2 + v18 + 4 * v44 + 8) +=
                    LODWORD(v74_.v74[v44 / 2 + 1]);
                v48 = a2[1] + v18 + 4 * v44;
                *(_DWORD*)(v48 + 8) += *(_DWORD*)(v74_.v75 + 4 * v44 + 8);
                v49 = a2[2] + v18 + 4 * v44;
                *(_DWORD*)(v49 + 8) += *(_DWORD*)(v74_.v76 + 4 * v44 + 8);
                v50 = a2[3] + v18 + 4 * v44;
                *(_DWORD*)(v50 + 8) += *(_DWORD*)(v74_.v77 + 4 * v44 + 8);
                *(_DWORD*)(*a2 + v18 + 4 * v44 + 12) +=
                    HIDWORD(v74_.v74[v44 / 2 + 1]);
                v51 = a2[1] + v18 + 4 * v44;
                *(_DWORD*)(v51 + 12) += *(_DWORD*)(v74_.v75 + 4 * v44 + 12);
                v52 = a2[2] + v18 + 4 * v44;
                *(_DWORD*)(v52 + 12) += *(_DWORD*)(v74_.v76 + 4 * v44 + 12);
                v53 = a2[3] + v18 + 4 * v44;
                v54 = *(_DWORD*)(v74_.v77 + 4 * v44 + 12);
                v44 += 4LL;
                *(_DWORD*)(v53 + 12) += v54;
              } while ((v66 & 0x7FFFFFFC) != v44);
            }
            else {
              v44 = 0;
            }
            if ((v66 & 3) != 0) {
              v55 = 4 * v44;
              v56 = v18 + 4 * v44;
              v57 = 0;
              do {
                *(_DWORD*)(*a2 + v56 + v57) +=
                    *(_DWORD*)((char*)v74_.v74 + v55 + v57);
                *(_DWORD*)(a2[1] + v56 + v57) +=
                    *(_DWORD*)(v74_.v75 + v55 + v57);
                *(_DWORD*)(a2[2] + v56 + v57) +=
                    *(_DWORD*)(v74_.v76 + v55 + v57);
                *(_DWORD*)(a2[3] + v56 + v57) +=
                    *(_DWORD*)(v74_.v77 + v55 + v57);
                v57 += 4;
              } while (4LL * (v66 & 3) != v57);
            }
          }
          v37 = v71;
        }
      }
    }
    v19 = v72 + 1;
    v18 += 4LL * v66;
    if (v72 + 1 != v68) {
      continue;
    }
    break;
  }
LABEL_62:
  if (v13 != 0) {
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        *snd_g_memory_ptr[0], v13);
  }
  return nn_os_UnlockMutex(v5 + 11512);
}

__int64 GameHr_2b2140(__int64 a1, __int64 a2, __int64 (***a3)(_QWORD))
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
  v4 = *(unsigned int*)(a1 + 120);
  if ((unsigned int)v4 >= 4 || *(_DWORD*)(a1 + 28) >= 2u) {
    goto LABEL_13;
  }
  v8 = GameData_1a83730_alt1[v4];
  v9 = atomic_load((unsigned __int64*)SoundVoiceNX_14e360() + 25);
  atomic_store(v9, (unsigned __int64*)(a1 + 104));
  v10 = (**a3)(a3);
  if (v10 == 1) {
    if ((unsigned int)nn_audio_AddReverb_1a0cba0(
            a2, a1 + 112, *(_QWORD*)(a1 + 32), *(_QWORD*)(a1 + 40), a3 + 9,
            v8) == 0) {
    LABEL_8:
      *(_BYTE*)(a1 + 24) = 1;
      v11 = SoundVoiceNX_14e360();
      nn_os_LockMutex((__int64)v11 + 1720);
      if (*(_DWORD*)(a1 + 48) < 5u) {
        nn_audio_SetReverbEarlyMode(a1 + 112);
        nn_audio_SetReverbEarlyGain(a1 + 112, *(float*)(a1 + 52));
        nn_audio_SetReverbPredelayTime(a1 + 112, *(_QWORD*)(a1 + 56));
        if (*(_DWORD*)(a1 + 64) < 5u) {
          nn_audio_SetReverbLateMode(a1 + 112);
          nn_audio_SetReverbLateGain(a1 + 112, *(float*)(a1 + 68));
          nn_audio_SetReverbDecayTime(a1 + 112, *(_QWORD*)(a1 + 72));
          nn_audio_SetReverbHighFrequencyDecayRatio(a1 + 112,
                                                    *(float*)(a1 + 80));
          nn_audio_SetReverbColoration(a1 + 112, *(float*)(a1 + 84));
          nn_audio_SetReverbReverbGain(a1 + 112, *(float*)(a1 + 88));
          nn_audio_SetReverbOutGain(a1 + 112, *(float*)(a1 + 92));
          nn_audio_SetReverbDryGain(a1 + 112, *(float*)(a1 + 96));
          nn_audio_SetReverbEnabled(a1 + 112, *(unsigned __int8*)(a1 + 100));
          v12 = SoundVoiceNX_14e360();
          nn_os_UnlockMutex((__int64)v12 + 1720);
          return 1;
        }
      }
    LABEL_13:
      nn_detail_UnexpectedDefaultImpl();
    }
  }
  else {
    if (v10 != 0) {
      goto LABEL_13;
    }
    if ((unsigned int)nn_audio_AddReverb_1a0cad0(
            a2, a1 + 112, *(_QWORD*)(a1 + 32), *(_QWORD*)(a1 + 40), a3 + 11,
            v8) == 0) {
      goto LABEL_8;
    }
  }
  return 0;
}

#pragma GCC visibility pop
