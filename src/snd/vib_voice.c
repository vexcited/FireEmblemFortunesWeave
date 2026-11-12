#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1414a0(__int64, long double);
__int64 snd_Fade_CtrlTypeAHDSR_release(_QWORD, _QWORD, _QWORD, float);
__int64 snd_Fade_CtrlTypeAHDSR_setState(_QWORD, _QWORD);
__int64 snd_Param_isEnvelopeEnded(_QWORD);
__int64 snd_Param_isEnvelopeFading(_QWORD);
__int64 snd_Param_isEnvelopeReleased(_QWORD);
__int64 snd_Voice_finish(_QWORD);
__int64 snd_fnd_WeakHandle_reset(_QWORD, long double);
void GameRoutine_651250(void*, unsigned __int64);
void VibVoice_1416c0(__int64 a1, long double a2);
__int64 VibVoice_141910(__int64 result, __int64 a2, char a3, long double a4);
_BYTE* snd_fnd_calcCrc32Reverse(_BYTE* result, int);
_QWORD* ConstructString_1901f0(_QWORD* result);
_QWORD* GameRoutine_140190(__int64);
_QWORD* GameRoutine_a3a3a0(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void FileManager_10df70(PSEUDO_X8, __int64, __int64,
                                                   unsigned int);
__attribute__((swiftcall)) void Manager_1181f0(PSEUDO_X8, __int64 result, int);
__attribute__((swiftcall)) void
Manager_11ea40(PSEUDO_X8, __int64 result, __int64, unsigned int, unsigned int);
__attribute__((swiftcall)) void Manager_120710(PSEUDO_X8, _QWORD*);
__int64* GameRoutine_a3a260(__int64*, __int64, unsigned __int64);
__int64* GameRoutine_f1b80(__int64* result, __int64*);
__int64 Actor_101c40(__int64 result, float);
__int64 Crc32List_11ec20(__int64, __int64, char);
__int64 Crc32List_11ed40(__int64, int*);
__int64 Data_f6c20(int*, _QWORD*);
__int64 FileManager_10e120(__int64, __int64);
__int64 GameRoutine_112180(__int64, __int64);
__int64 GameRoutine_118ff0(_QWORD);
__int64 GameRoutine_119020(_QWORD);
__int64 GameRoutine_13ec80(__int64, _DWORD*, _QWORD*, _DWORD*);
__int64 GameRoutine_13ed60(__int64, _DWORD*);
__int64 GameRoutine_190200(__int64, char*);
__int64 GameRoutine_190240(__int64);
__int64 GameRoutine_1905a40(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_a2af20(__int64, __int64, const char*, ...);
__int64 GameRoutine_a392e0(__int64, __int64, ...);
__int64 Voice_1449c0(_QWORD*, __int64, __int64, __int64, __int64);
__int64 Voice_Destructor(__int64);
__int64 nn_os_LockMutex(_QWORD);
__int64 snd_120f10(__int64, __int64);
__int64 snd_FadeRandom_start(__int64 result, float, float, float, float);
__int64 snd_Fade_CtrlTypeAHDSR_setState_alt1(__int64 result, int) __asm__(
    "snd_Fade_CtrlTypeAHDSR_setState");
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_Voice_finish_alt1(_BYTE*) __asm__("snd_Voice_finish");
__int64 snd_data_f0230(__int64, __int64, char*);
__int64 snd_fnd_WeakHandle_get(__int64);
__int64 snd_fnd_WeakHandle_isValid(__int64*);
__int64
snd_fnd_WeakHandle_reset_alt1(__int64) __asm__("snd_fnd_WeakHandle_reset");
__int64 snd_fnd_WeakHandle_set(__int64, __int64);
__n128 nn_os_UnlockMutex(_QWORD);
bool snd_Voice_hasFeature22(__int64);
bool snd_Voice_hasFeature6(__int64);
bool snd_Voice_hasFeature7(__int64);
extern __int64 (*GameData_1f5b0d0[])();
extern __int64 (*GameData_1f5b538[])();
extern __int64 (*snd_VibVoice_vtable[])();
extern __int64* GameData_21346a0;
extern __int64* snd_g_memory_ptr[2];
extern __int64 snd_g_frameCount_ptr;
extern __int64 snd_g_memory;
extern __int64 snd_g_proxy;
extern __int64 snd_g_proxy_ptr[2];
float snd_Param_calcVolume_126a10(float*);
float snd_fnd_calcDistance_fec30(float, float, float, float, float, float);
unsigned __int64 GameRoutine_190020(__int64*, char*);
unsigned __int8* snd_fnd_calcCrc32(unsigned __int8* result, int);
void snd_Fade_Fade_10c830(__int64, float);
void VibVoice_13f5c0(__int64 a1, __int64 a2);
bool VibVoice_13fc10(_QWORD* a1);
__int64 VibVoice_13fe10(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                        unsigned __int8* a5, __int64 a6, __int64 a7, __int64 a8,
                        __int64 a9);
__int64 VibVoice_140240(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int* a5,
                        __int64 a6, unsigned __int8* a7, __int64 a8, __int64 a9,
                        __int64 a10);
__int64 VibVoice_140690(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                        unsigned __int8* a5, __int64 a6, __int64 a7, __int64 a8,
                        float a9, float a10, float a11);
__int64 VibVoice_140a70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int* a5,
                        __int64 a6, __int64 a7, __int64 a8, float a9, float a10,
                        float a11);
__int64 VibVoice_140fe0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int* a5,
                        __int64 a6, unsigned __int8* a7, __int64 a8, float a9,
                        float a10, float a11, __int64 a12);
__int64 VibVoice_Destructor(__int64 a1);
__int64 VibVoice_Unknown16(__int64 result);
float VibVoice_Unknown67(__int64 a1);
__int64 VibVoice_1420e0(__int64 result);
__int64 GameRoutine_a2af20_alt1(__int64, __int64, __int64,
                                ...) __asm__("GameRoutine_a2af20");
const char*
snd_fnd_calcCrc32Reverse_alt1(const char* result,
                              int) __asm__("snd_fnd_calcCrc32Reverse");
unsigned __int64
GameRoutine_190020_alt1(__int64*, const char*) __asm__("GameRoutine_190020");

void VibVoice_13f5c0(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  _BYTE* v2;
  float v3;
  float v6;
  float v7;
  float v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  float v12;
  float v13;
  float v14;
  int v15;
  bool v16;
  long double v17;
  __int64 v18;
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
  __int64 v35;
  unsigned int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  struct {
    __int64 v42;
    float v43;
    float v44;
  } v42_;

  v2 = (_BYTE*)(a1 + 4096);
  v3 = 0x0.0p+0f;
  if ((*(_BYTE*)(a1 + 5895) & 1) == 0) {
    v6 = 0x1.0000000000000p+0f;
    v7 = *(float*)(*(_QWORD*)(a1 + 5648) + 428LL);
    if (v7 == 0x1.0000000000000p+0f) {
      v3 = 0x1.e847e00000000p+19f;
    }
    else {
      Manager_120710((void*)(&v42_.v42), *(_QWORD**)(a1 + 32));
      v8 = 0x0.0p+0f;
      do {
        v6 = v6 - (float)(0x1.0000000000000p+0f - v7);
        v8 = v42_.v44 + v8;
      } while (v6 >= 0x1.47ae140000000p-7f);
      v3 = v42_.v43 + v8;
    }
  }
  v9 = *(_QWORD*)(a1 + 5648);
  v11 = a1 + 40;
  v10 = *(_QWORD*)(a1 + 40);
  *(float*)(a1 + 5788) = v3;
  (*(void (**)(__int64, float, float))(v10 + 360))(a1 + 40, *(float*)(v9 + 280),
                                                   *(float*)(v9 + 284));
  (*(void (**)(__int64, float, float))(*(_QWORD*)(a1 + 40) + 368LL))(
      a1 + 40, *(float*)(*(_QWORD*)(a1 + 5648) + 296LL),
      *(float*)(*(_QWORD*)(a1 + 5648) + 300LL));
  (*(void (**)(__int64, float, float))(*(_QWORD*)(a1 + 40) + 376LL))(
      a1 + 40, *(float*)(*(_QWORD*)(a1 + 5648) + 304LL),
      *(float*)(*(_QWORD*)(a1 + 5648) + 308LL));
  (*(void (**)(__int64, float, float))(*(_QWORD*)(a1 + 40) + 384LL))(
      a1 + 40, *(float*)(*(_QWORD*)(a1 + 5648) + 288LL),
      *(float*)(*(_QWORD*)(a1 + 5648) + 292LL));
  (*(void (**)(__int64, float, float))(*(_QWORD*)(a1 + 40) + 392LL))(
      a1 + 40, *(float*)(*(_QWORD*)(a1 + 5648) + 312LL),
      *(float*)(*(_QWORD*)(a1 + 5648) + 316LL));
  snd_FadeRandom_start(a1 + 2944, *(float*)(*(_QWORD*)(a1 + 5648) + 320LL),
                       *(float*)(*(_QWORD*)(a1 + 5648) + 324LL),
                       *(float*)(*(_QWORD*)(a1 + 5648) + 328LL),
                       *(float*)(*(_QWORD*)(a1 + 5648) + 332LL));
  snd_FadeRandom_start(a1 + 3160, *(float*)(*(_QWORD*)(a1 + 5648) + 336LL),
                       *(float*)(*(_QWORD*)(a1 + 5648) + 340LL),
                       *(float*)(*(_QWORD*)(a1 + 5648) + 344LL),
                       *(float*)(*(_QWORD*)(a1 + 5648) + 348LL));
  snd_FadeRandom_start(a1 + 3376, *(float*)(*(_QWORD*)(a1 + 5648) + 352LL),
                       *(float*)(*(_QWORD*)(a1 + 5648) + 356LL),
                       *(float*)(*(_QWORD*)(a1 + 5648) + 360LL),
                       *(float*)(*(_QWORD*)(a1 + 5648) + 364LL));
  v2[1794] = 1;
  snd_Fade_Fade_10c830((__int64)&v42_.v42, 0x0.0p+0f);
  (*(void (**)(__int64, __int64*, double))(*(_QWORD*)(a1 + 40) + 160LL))(
      a1 + 40, &v42_.v42, 0x0.0p+0);
  snd_Fade_Destroy_Fade(&v42_.v42);
  (*(void (**)(__int64, float))(*(_QWORD*)(a1 + 40) + 48LL))(
      a1 + 40, *(float*)(a2 + 204) + *(float*)(a1 + 2924));
  (*(void (**)(__int64, __int64, float))(*(_QWORD*)(a1 + 40) + 160LL))(
      a1 + 40, a2, 0x1.0000000000000p+0f);
  v12 = *(float*)(a1 + 2928);
  snd_Fade_Fade_10c830((__int64)&v42_.v42, 0x0.0p+0f);
  (*(void (**)(__int64, __int64*, float))(*(_QWORD*)(a1 + 40) + 224LL))(
      a1 + 40, &v42_.v42, v12);
  snd_Fade_Destroy_Fade(&v42_.v42);
  v13 = *(float*)(a1 + 2932) + 0x0.0p+0f;
  snd_Fade_Fade_10c830((__int64)&v42_.v42, 0x0.0p+0f);
  (*(void (**)(__int64, __int64*, float))(*(_QWORD*)(a1 + 40) + 240LL))(
      a1 + 40, &v42_.v42, v13);
  snd_Fade_Destroy_Fade(&v42_.v42);
  v14 = *(float*)(a1 + 2936);
  snd_Fade_Fade_10c830((__int64)&v42_.v42, 0x0.0p+0f);
  (*(void (**)(__int64, __int64*, float))(*(_QWORD*)(a1 + 40) + 256LL))(
      a1 + 40, &v42_.v42, v14);
  snd_Fade_Destroy_Fade(&v42_.v42);
  (*(void (**)(__int64, float))(*(_QWORD*)(a1 + 40) + 336LL))(
      a1 + 40,
      (float)(*(float*)(a2 + 200) + *(float*)(*(_QWORD*)(a1 + 5648) + 244LL)) +
          *(float*)(a1 + 2940));
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)(a1 + 40) + 352LL))(
      a1 + 40, *(unsigned int*)(*(_QWORD*)(a1 + 5648) + 188LL));
  v15 = *(_DWORD*)(*(_QWORD*)(a1 + 5648) + 260LL);
  v16 = !snd_Voice_hasFeature22(a1);
  LODWORD(v17) = v15;
  if (v16) {
    v18 = 0;
  }
  else {
    v18 = 2;
  }
  (*(void (**)(__int64, __int64, long double, float, float, float, float))(
      *(_QWORD*)v11 + 408LL))(a1 + 40, v18, v17,
                              *(float*)(*(_QWORD*)(a1 + 5648) + 264LL),
                              *(float*)(*(_QWORD*)(a1 + 5648) + 268LL),
                              *(float*)(*(_QWORD*)(a1 + 5648) + 272LL),
                              *(float*)(*(_QWORD*)(a1 + 5648) + 276LL));
  v19 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 640LL))(a1);
  v20 = (*(__int64 (**)(_QWORD))(**(_QWORD**)snd_g_proxy_ptr[0] + 272LL))(
      *(_QWORD*)snd_g_proxy_ptr[0]);
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)a1 + 632LL))(a1, v20);
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)a1 + 648LL))(a1, v19);
  if ((snd_fnd_WeakHandle_isValid((__int64*)(a1 + 5800)) & 1) == 0) {
    v21 = *(_QWORD*)(a1 + 5648);
    v23 = *(_DWORD*)(v21 + 64);
    v22 = (int*)(v21 + 64);
    if (v23 != 0) {
      v24 = Crc32List_11ed40(*(_QWORD*)(a1 + 32), v22);
      v42_.v42 = 0;
      LODWORD(v42_.v43) = 0x2000;
      if (v24 != 0) {
        v25 = v24 + 5592;
      }
      else {
        v25 = 0;
      }
      snd_fnd_WeakHandle_set((__int64)&v42_.v42, v25);
      GameRoutine_112180(a1 + 5800, (__int64)&v42_.v42);
    }
  }
  if ((snd_fnd_WeakHandle_isValid((__int64*)(a1 + 5800)) & 1) == 0) {
    v26 = *(_QWORD*)(a1 + 32);
    v42_.v42 = 0;
    LODWORD(v42_.v43) = 0x2000;
    GameRoutine_112180((__int64)&v42_.v42, v26 + 3112);
    GameRoutine_112180(a1 + 5800, (__int64)&v42_.v42);
  }
  v27 = *(_QWORD*)(a1 + 5648);
  if (*(_DWORD*)(v27 + 68) != 0) {
    v28 = Crc32List_11ed40(*(_QWORD*)(a1 + 32), (int*)(v27 + 68));
    v42_.v42 = 0;
    LODWORD(v42_.v43) = 0x2000;
    if (v28 != 0) {
      v29 = v28 + 5592;
    }
    else {
      v29 = 0;
    }
    snd_fnd_WeakHandle_set((__int64)&v42_.v42, v29);
    GameRoutine_112180(a1 + 5816, (__int64)&v42_.v42);
    v27 = *(_QWORD*)(a1 + 5648);
  }
  v31 = *(_DWORD*)(v27 + 72);
  v30 = (int*)(v27 + 72);
  if (v31 != 0) {
    v32 = Crc32List_11ed40(*(_QWORD*)(a1 + 32), v30);
    v42_.v42 = 0;
    LODWORD(v42_.v43) = 0x2000;
    if (v32 != 0) {
      v33 = v32 + 5592;
    }
    else {
      v33 = 0;
    }
    snd_fnd_WeakHandle_set((__int64)&v42_.v42, v33);
    GameRoutine_112180(a1 + 5832, (__int64)&v42_.v42);
  }
  v34 = snd_fnd_WeakHandle_get(a1 + 5848);
  if (v34 != 0) {
    v35 = v34;
    v36 =
        (*(__int64 (**)(__int64))(*(_QWORD*)(v34 - 5592) + 128LL))(v34 - 5592);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)a1 + 632LL))(a1, v36);
    *(_DWORD*)(v35 + 132) = *(_DWORD*)(*(_QWORD*)(a1 + 5648) + 436LL);
    *(_DWORD*)(v35 + 136) = *(_DWORD*)(*(_QWORD*)(a1 + 5648) + 440LL);
    if (v2[1790] == 1) {
      (*(void (**)(__int64))(*(_QWORD*)(v35 - 5592) + 48LL))(v35 - 5592);
      Actor_101c40(v35 - 5592, 0x1.0aac080000000p+4f);
    }
  }
  v37 = *(_QWORD*)snd_g_frameCount_ptr + 1LL;
  *(_QWORD*)snd_g_frameCount_ptr = v37;
  *(_QWORD*)(a1 + 5608) = v37;
  *(_DWORD*)(a1 + 5792) = 1;
  v38 = snd_fnd_WeakHandle_get(a1 + 5848);
  if (v38 != 0) {
    if (v2[1790] == 1 && *(_BYTE*)(v38 + 68) != 1) {
      v40 = *(_QWORD*)(v38 - 5592);
      v41 = v38 - 5592;
    }
    else {
      v39 = v38;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
          *(_QWORD*)(v38 - 5592) + 96LL))((void*)(&v42_.v42), v38 - 5592);
      (*(void (**)(__int64, __int64*))(*(_QWORD*)v11 + 1040LL))(a1 + 40,
                                                                &v42_.v42);
      v40 = *(_QWORD*)(v39 - 5592);
      v41 = v39 - 5592;
    }
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(v40 + 112))(
        (void*)(&v42_.v42), v41);
    (*(void (**)(__int64, __int64*))(*(_QWORD*)v11 + 1072LL))(a1 + 40,
                                                              &v42_.v42);
    snd_120f10(*(_QWORD*)(a1 + 32), a1);
  }
  if ((*(float (**)(__int64))(*(_QWORD*)v11 + 328LL))(a1 + 40) <= 0x0.0p+0f &&
      snd_Voice_hasFeature6(a1) && VibVoice_13fc10((_QWORD*)a1) &&
      (v2[1789] & 1) == 0) {
    snd_fnd_WeakHandle_reset_alt1(a1 + 5864);
    snd_Voice_finish_alt1((_BYTE*)a1);
    snd_Fade_CtrlTypeAHDSR_setState_alt1(a1 + 3600, 7);
    if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 6136) + 104LL))(
             *(_QWORD*)(a1 + 6136)) &
         1) != 0) {
      (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 6136) + 152LL))(
          *(_QWORD*)(a1 + 6136));
    }
  }
}

bool VibVoice_13fc10(_QWORD* a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  float v8;
  float v9;
  _BOOL4 v10;
  __int64 v11;
  const char* v12;
  _BYTE v14[16];
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;

  v2 = snd_fnd_WeakHandle_get((__int64)(a1 + 731));
  if (v2 != 0) {
    v3 = v2;
    (*(void (**)(__int64, float*, float*, float*))(
        *(_QWORD*)(v2 - 5592) + 104LL))(v2 - 5592, &v20, &v19, &v18);
    v4 = a1[4];
    v5 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v3 + 32) + 16LL))(
        *(_QWORD*)(v3 + 32));
    Manager_1181f0((void*)((__int64)v14), v4, v5);
    v6 = snd_fnd_WeakHandle_get((__int64)v14);
    if (v6 != 0) {
      v7 = v6 - 5592;
    }
    else {
      v7 = 0;
    }
    (*(void (**)(__int64, float*, float*, float*))(
        *(_QWORD*)(v7 + 40) + 1032LL))(v7 + 40, &v17, &v16, &v15);
    v8 = snd_fnd_calcDistance_fec30(v20, v19, v18, v17, v16, v15);
    v9 = (*(float (**)(_QWORD*))(*a1 + 112LL))(a1);
    v10 = v8 > v9;
    if (v8 > v9) {
      v11 = snd_g_proxy;
      v12 = (const char*)GameRoutine_190240((__int64)(a1 + 710));
      (*(void (**)(__int64, const char*, ...))(*(_QWORD*)v11 + 384LL))(
          v11, "#SoundLibrary warning : VibVoice AutoStop Out of range : %s\n",
          v12);
      if ((*((_BYTE*)a1 + 5885) & 1) == 0) {
        snd_fnd_WeakHandle_reset_alt1((__int64)(a1 + 733));
        snd_Voice_finish_alt1(a1);
        snd_Fade_CtrlTypeAHDSR_setState_alt1((__int64)(a1 + 450), 7);
        if (((*(__int64 (**)(_QWORD))(*(_QWORD*)a1[767] + 104LL))(a1[767]) &
             1) != 0) {
          (*(void (**)(_QWORD))(*(_QWORD*)a1[767] + 152LL))(a1[767]);
        }
      }
    }
  }
  else {
    return false;
  }
  return v10;
}

__int64 VibVoice_13fe10(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                        unsigned __int8* a5, __int64 a6, __int64 a7, __int64 a8,
                        __int64 a9)
{
  __int64* v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  unsigned int* v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  char v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64* v28;
  char v29;
  __int64 v30;
  _DWORD* v31;
  int v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  char* v36;
  unsigned __int64 v37;
  __int64 v38;
  struct {
    __int64 v40;
    unsigned __int64 v41;
    char* v42;
  } v40_;
  struct {
    unsigned int v43;
    unsigned int v44;
  } v43_;

  Voice_1449c0((_QWORD*)a1, a2, a4, a8, a9);
  v16 = GameData_21346a0;
  *(_QWORD*)(a1 + 6072) = 0;
  *(_QWORD*)(a1 + 6080) = 0;
  *(_QWORD*)(a1 + 6088) = 0;
  *(_QWORD*)(a1 + 6096) = 0;
  *(_QWORD*)(a1 + 6104) = 0;
  *(_QWORD*)(a1 + 6120) = 0;
  *(_DWORD*)(a1 + 6128) = 0;
  *(_QWORD*)(a1 + 6136) = 0;
  *(_QWORD*)(a1 + 6144) = 0;
  *(_QWORD*)a1 = v16 + 2;
  *(_QWORD*)(a1 + 5592) = v16 + 244;
  *(_QWORD*)(a1 + 40) = v16 + 103;
  *(_DWORD*)(a1 + 6112) = 0x2000;
  v43_.v43 = (unsigned int)snd_fnd_calcCrc32(a5, 0);
  v17 = (unsigned int)snd_fnd_calcCrc32Reverse(a5, 0);
  v18 = *(_QWORD*)(a1 + 32);
  v43_.v44 = v17;
  *(_QWORD*)(a1 + 6088) = GameRoutine_140190(v18 + 3000);
  v19 = GameRoutine_119020(*(_QWORD*)(a1 + 32));
  if ((GameRoutine_13ed60(v19, &v43_.v43) & 0x80000000) == 0) {
    v20 = *(unsigned int**)(a1 + 6088);
    *v20 = v43_.v43;
    v20[1] = v43_.v44;
    GameRoutine_190200(*(_QWORD*)(a1 + 6088) + 8LL, (char*)a5);
    if (a6 == 0) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  v30 = Data_f6c20((int*)&v43_.v43, (_QWORD*)(a1 + 6096));
  v31 = *(_DWORD**)(a1 + 6088);
  v32 = *(_DWORD*)(v30 + 4);
  *v31 = *(_DWORD*)v30;
  v31[1] = v32;
  GameRoutine_190200((__int64)(v31 + 2), *(char**)(v30 + 8));
  if (a6 != 0) {
  LABEL_3:
    snd_data_f0230(*(_QWORD*)(a1 + 5648), a6, nullptr);
  }
LABEL_4:
  v40_.v40 = 0;
  LODWORD(v40_.v41) = 0x2000;
  if (a3 != 0) {
    v21 = a3 + 5592;
  }
  else {
    v21 = 0;
  }
  snd_fnd_WeakHandle_set((__int64)&v40_.v40, v21);
  GameRoutine_112180(a1 + 5800, (__int64)&v40_.v40);
  (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 16LL))(a1, a4);
  GameRoutine_190200(a1 + 5680, (char*)a5);
  if (a6 != 0) {
    v22 = *(_QWORD*)(a1 + 5648);
    v24 = *(_BYTE*)(v22 + 32);
    v23 = (__int64*)(v22 + 32);
    if ((v24 & 1) == 0) {
      v25 = *v23;
      v26 = v23[1];
      v27 = v23[2];
      v40_.v40 = v25;
      v40_.v41 = v26;
      v40_.v42 = (char*)v27;
      v28 = (__int64*)(a1 + 5736);
      v29 = *(_BYTE*)(a1 + 5736);
      if ((__int64*)(a1 + 5736) == &v40_.v40) {
        goto LABEL_19;
      }
    LABEL_14:
      if ((v29 & 1) != 0) {
        if ((v40_.v40 & 1) != 0) {
          v36 = v40_.v42;
        }
        else {
          v36 = (char*)&v40_.v40 + 1;
        }
        if ((v40_.v40 & 1) != 0) {
          v37 = v40_.v41;
        }
        else {
          v37 = (unsigned __int64)(unsigned __int8)v40_.v40 >> 1;
        }
        GameRoutine_a3a260(v28, (__int64)v36, v37);
        if ((v40_.v40 & 1) == 0) {
          goto LABEL_30;
        }
      }
      else if ((v40_.v40 & 1) != 0) {
        GameRoutine_a3a3a0(v28, (__int64)v40_.v42, v40_.v41);
        if ((v40_.v40 & 1) == 0) {
          goto LABEL_30;
        }
      }
      else {
        v33 = v40_.v41;
        *v28 = v40_.v40;
        v28[1] = v33;
        v28[2] = (__int64)v40_.v42;
        if ((v40_.v40 & 1) == 0) {
          goto LABEL_30;
        }
      }
      (*(void (**)(_QWORD, char*))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
          *snd_g_memory_ptr[0], v40_.v42);
      goto LABEL_30;
    }
    GameRoutine_1905a40(&v40_.v40, *(_QWORD*)(*(_QWORD*)(a1 + 5648) + 48LL),
                        *(_QWORD*)(*(_QWORD*)(a1 + 5648) + 40LL));
    v28 = (__int64*)(a1 + 5736);
    v29 = *(_BYTE*)(a1 + 5736);
    if ((__int64*)(a1 + 5736) != &v40_.v40) {
      goto LABEL_14;
    }
  }
  else {
    GameRoutine_190020(&v40_.v40, (char*)a5);
    v28 = (__int64*)(a1 + 5736);
    v29 = *(_BYTE*)(a1 + 5736);
    if ((__int64*)(a1 + 5736) != &v40_.v40) {
      goto LABEL_14;
    }
  }
LABEL_19:
  if ((v29 & 1) != 0) {
    (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        *snd_g_memory_ptr[0], *(_QWORD*)(a1 + 5752));
  }
  v34 = v40_.v40;
  v35 = v40_.v41;
  LOWORD(v40_.v40) = 0;
  *v28 = v34;
  v28[1] = v35;
  v28[2] = (__int64)v40_.v42;
LABEL_30:
  v40_.v40 = 0;
  LODWORD(v40_.v41) = 0x2000;
  if (a7 != 0) {
    v38 = a7 + 5592;
  }
  else {
    v38 = 0;
  }
  snd_fnd_WeakHandle_set((__int64)&v40_.v40, v38);
  GameRoutine_112180(a1 + 5848, (__int64)&v40_.v40);
  *(_QWORD*)(a1 + 6136) =
      (*(__int64 (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)snd_g_proxy + 552LL))(
          snd_g_proxy, *(_QWORD*)(a1 + 32), *(unsigned int*)(a8 + 212));
  VibVoice_13f5c0(a1, a8);
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 784LL))(a1);
}

__int64 VibVoice_140240(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int* a5,
                        __int64 a6, unsigned __int8* a7, __int64 a8, __int64 a9,
                        __int64 a10)
{
  __int64 v17;
  int* v18;
  int v19;
  int v20;
  __int64 v21;
  char v22;
  __int64* v23;
  char v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  _DWORD* v28;
  int v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  char* v33;
  unsigned __int64 v34;
  __int64* v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  __int64* v40;
  __int64* v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  bool v46;
  unsigned __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  _QWORD* v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64* v56;
  __int64* v57;
  unsigned __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  struct {
    __int64 v67;
    unsigned __int64 v68;
    char* v69;
  } v67_;

  Voice_1449c0((_QWORD*)a1, a2, a4, a9, a10);
  *(_QWORD*)(a1 + 6072) = 0;
  *(_QWORD*)(a1 + 6080) = 0;
  *(_QWORD*)(a1 + 6088) = 0;
  *(_QWORD*)(a1 + 6096) = 0;
  *(_QWORD*)(a1 + 6104) = 0;
  *(_QWORD*)(a1 + 6120) = 0;
  *(_DWORD*)(a1 + 6128) = 0;
  *(_QWORD*)(a1 + 6136) = 0;
  *(_QWORD*)(a1 + 6144) = 0;
  *(_QWORD*)a1 = snd_VibVoice_vtable;
  *(_QWORD*)(a1 + 5592) = GameData_1f5b538;
  *(_QWORD*)(a1 + 40) = GameData_1f5b0d0;
  *(_DWORD*)(a1 + 6112) = 0x2000;
  *(_QWORD*)(a1 + 6088) = GameRoutine_140190(*(_QWORD*)(a1 + 32) + 3000LL);
  v17 = GameRoutine_119020(*(_QWORD*)(a1 + 32));
  if ((GameRoutine_13ed60(v17, a5) & 0x80000000) != 0) {
    v27 = Data_f6c20(a5, (_QWORD*)(a1 + 6096));
    v28 = *(_DWORD**)(a1 + 6088);
    v29 = *(_DWORD*)(v27 + 4);
    *v28 = *(_DWORD*)v27;
    v28[1] = v29;
    GameRoutine_190200((__int64)(v28 + 2), *(char**)(v27 + 8));
    goto LABEL_19;
  }
  v18 = *(int**)(a1 + 6088);
  *v18 = *a5;
  v19 = a5[1];
  v18[1] = v19;
  v20 = *a5;
  ConstructString_1901f0(&v67_.v67);
  GameRoutine_a392e0((__int64)&v67_.v67, (__int64)"[ %08x:%08x ]", v20, v19);
  v21 = *(_QWORD*)(a1 + 6088);
  v24 = *(_BYTE*)(v21 + 8);
  v23 = (__int64*)(v21 + 8);
  v22 = v24;
  if (v23 == &v67_.v67) {
    if ((v22 & 1) != 0) {
      (*(void (**)(__int64, _QWORD))(*(_QWORD*)snd_g_memory + 24LL))(
          snd_g_memory, *(_QWORD*)(*(_QWORD*)(a1 + 6088) + 24LL));
    }
    v31 = v67_.v68;
    v30 = (__int64)v67_.v69;
    v32 = v67_.v67;
    LOWORD(v67_.v67) = 0;
    *v23 = v32;
    v23[1] = v31;
    v23[2] = v30;
  }
  else if ((v22 & 1) != 0) {
    if ((v67_.v67 & 1) != 0) {
      v33 = v67_.v69;
    }
    else {
      v33 = (char*)&v67_.v67 + 1;
    }
    if ((v67_.v67 & 1) != 0) {
      v34 = v67_.v68;
    }
    else {
      v34 = (unsigned __int64)(unsigned __int8)v67_.v67 >> 1;
    }
    GameRoutine_a3a260(v23, (__int64)v33, v34);
    if ((v67_.v67 & 1) != 0) {
      goto LABEL_18;
    }
  }
  else {
    if ((v67_.v67 & 1) == 0) {
      v26 = v67_.v68;
      v25 = (__int64)v67_.v69;
      *v23 = v67_.v67;
      v23[1] = v26;
      v23[2] = v25;
      if ((v67_.v67 & 1) == 0) {
        goto LABEL_19;
      }
    LABEL_18:
      (*(void (**)(_QWORD, char*))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
          *snd_g_memory_ptr[0], v67_.v69);
      goto LABEL_19;
    }
    GameRoutine_a3a3a0(v23, (__int64)v67_.v69, v67_.v68);
    if ((v67_.v67 & 1) != 0) {
      goto LABEL_18;
    }
  }
LABEL_19:
  if (a6 != 0) {
    snd_data_f0230(*(_QWORD*)(a1 + 5648), a6, nullptr);
  }
  if (a7 != nullptr) {
    GameRoutine_f1b80(*(__int64**)(a1 + 5648), (__int64*)a7);
    v35 = (__int64*)(a1 + 5680);
    if ((unsigned __int8*)(a1 + 5680) != a7) {
      v36 = *a7;
      if ((*(_BYTE*)v35 & 1) != 0) {
        v46 = (v36 & 1) == 0;
        v47 = v36 >> 1;
        if (v46) {
          v48 = (__int64)(a7 + 1);
        }
        else {
          v48 = *((_QWORD*)a7 + 2);
        }
        if (v46) {
          v49 = v47;
        }
        else {
          v49 = *((_QWORD*)a7 + 1);
        }
        GameRoutine_a3a260(v35, v48, v49);
      }
      else if ((v36 & 1) != 0) {
        GameRoutine_a3a3a0(v35, *((_QWORD*)a7 + 2), *((_QWORD*)a7 + 1));
      }
      else {
        v37 = *(_QWORD*)a7;
        v38 = *((_QWORD*)a7 + 2);
        *(_QWORD*)(a1 + 5688) = *((_QWORD*)a7 + 1);
        *(_QWORD*)(a1 + 5696) = v38;
        *v35 = v37;
      }
    }
    v56 = (__int64*)(a1 + 5736);
    v57 = (__int64*)(*(_QWORD*)(a1 + 5648) + 32LL);
    if (a6 == 0) {
      v57 = (__int64*)a7;
    }
    if (v56 != v57) {
      v58 = *(unsigned __int8*)v57;
      if ((*(_BYTE*)v56 & 1) == 0) {
        if ((v58 & 1) == 0) {
        LABEL_52:
          v59 = *v57;
          v60 = v57[1];
          v61 = v57[2];
          v56[1] = v60;
          v56[2] = v61;
          *v56 = v59;
          goto LABEL_67;
        }
        goto LABEL_59;
      }
    LABEL_60:
      if ((v58 & 1) != 0) {
        v62 = v57[2];
      }
      else {
        v62 = (__int64)v57 + 1;
      }
      if ((v58 & 1) != 0) {
        v63 = v57[1];
      }
      else {
        v63 = v58 >> 1;
      }
      GameRoutine_a3a260(v56, v62, v63);
    }
  }
  else {
    v39 = *(_QWORD**)(a1 + 6088);
    v40 = (__int64*)(a1 + 5680);
    v41 = v39 + 1;
    if ((_QWORD*)(a1 + 5680) != v39 + 1) {
      v42 = *(unsigned __int8*)v41;
      if ((*(_BYTE*)v40 & 1) != 0) {
        v50 = (__int64)v39 + 9;
        v53 = v39 + 2;
        v51 = v39[2];
        v52 = v53[1];
        if ((v42 & 1) != 0) {
          v54 = v52;
        }
        else {
          v54 = v50;
        }
        if ((v42 & 1) != 0) {
          v55 = v51;
        }
        else {
          v55 = v42 >> 1;
        }
        GameRoutine_a3a260(v40, v54, v55);
      }
      else if ((v42 & 1) != 0) {
        GameRoutine_a3a3a0(v40, v39[3], v39[2]);
      }
      else {
        v43 = *v41;
        v44 = v41[1];
        v45 = v41[2];
        *(_QWORD*)(a1 + 5688) = v44;
        *(_QWORD*)(a1 + 5696) = v45;
        *v40 = v43;
      }
    }
    v56 = (__int64*)(a1 + 5736);
    v57 = (__int64*)(*(_QWORD*)(a1 + 5648) + 32LL);
    if (a6 == 0) {
      v57 = (__int64*)(*(_QWORD*)(a1 + 6088) + 8LL);
    }
    if (v56 != v57) {
      v58 = *(unsigned __int8*)v57;
      if ((*(_BYTE*)v56 & 1) == 0) {
        if ((v58 & 1) == 0) {
          goto LABEL_52;
        }
      LABEL_59:
        GameRoutine_a3a3a0(v56, v57[2], v57[1]);
        goto LABEL_67;
      }
      goto LABEL_60;
    }
  }
LABEL_67:
  v67_.v67 = 0;
  LODWORD(v67_.v68) = 0x2000;
  if (a3 != 0) {
    v64 = a3 + 5592;
  }
  else {
    v64 = 0;
  }
  snd_fnd_WeakHandle_set((__int64)&v67_.v67, v64);
  GameRoutine_112180(a1 + 5800, (__int64)&v67_.v67);
  (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 16LL))(a1, a4);
  v67_.v67 = 0;
  LODWORD(v67_.v68) = 0x2000;
  if (a8 != 0) {
    v65 = a8 + 5592;
  }
  else {
    v65 = 0;
  }
  snd_fnd_WeakHandle_set((__int64)&v67_.v67, v65);
  GameRoutine_112180(a1 + 5848, (__int64)&v67_.v67);
  *(_QWORD*)(a1 + 6136) =
      (*(__int64 (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)snd_g_proxy + 552LL))(
          snd_g_proxy, *(_QWORD*)(a1 + 32), *(unsigned int*)(a9 + 212));
  VibVoice_13f5c0(a1, a9);
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 784LL))(a1);
}

__int64 VibVoice_140690(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                        unsigned __int8* a5, __int64 a6, __int64 a7, __int64 a8,
                        float a9, float a10, float a11)
{

#pragma clang fp contract(off)
  __int64* v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  unsigned int* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  char v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  char v33;
  __int64* v34;
  __int64 v35;
  _DWORD* v36;
  int v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  char* v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  struct {
    __int64 v47;
    unsigned __int64 v48;
    char* v49;
  } v47_;
  struct {
    unsigned int v50;
    unsigned int v51;
  } v50_;

  Voice_1449c0((_QWORD*)a1, a2, a4, a7, a8);
  v20 = GameData_21346a0;
  *(_QWORD*)(a1 + 6072) = 0;
  *(_QWORD*)(a1 + 6080) = 0;
  *(_QWORD*)(a1 + 6088) = 0;
  *(_QWORD*)(a1 + 6096) = 0;
  *(_QWORD*)(a1 + 6104) = 0;
  *(_QWORD*)(a1 + 6120) = 0;
  *(_DWORD*)(a1 + 6128) = 0;
  *(_QWORD*)(a1 + 6136) = 0;
  *(_QWORD*)(a1 + 6144) = 0;
  *(_QWORD*)a1 = v20 + 2;
  *(_QWORD*)(a1 + 5592) = v20 + 244;
  *(_QWORD*)(a1 + 40) = v20 + 103;
  *(_DWORD*)(a1 + 6112) = 0x2000;
  v50_.v50 = (unsigned int)snd_fnd_calcCrc32(a5, 0);
  v21 = (unsigned int)snd_fnd_calcCrc32Reverse_alt1((const char*)a5, 0);
  v22 = *(_QWORD*)(a1 + 32);
  v50_.v51 = v21;
  *(_QWORD*)(a1 + 6088) = GameRoutine_140190(v22 + 3000);
  v23 = GameRoutine_119020(*(_QWORD*)(a1 + 32));
  if ((GameRoutine_13ed60(v23, &v50_.v50) & 0x80000000) == 0) {
    v24 = *(unsigned int**)(a1 + 6088);
    *v24 = v50_.v50;
    v24[1] = v50_.v51;
    v25 = a1 + 4096;
    GameRoutine_190200(*(_QWORD*)(a1 + 6088) + 8LL, (char*)a5);
    if (a6 == 0) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  v35 = Data_f6c20((int*)&v50_.v50, (_QWORD*)(a1 + 6096));
  v36 = *(_DWORD**)(a1 + 6088);
  v37 = *(_DWORD*)(v35 + 4);
  *v36 = *(_DWORD*)v35;
  v36[1] = v37;
  v25 = a1 + 4096;
  GameRoutine_190200((__int64)(v36 + 2), *(char**)(v35 + 8));
  if (a6 != 0) {
  LABEL_3:
    snd_data_f0230(*(_QWORD*)(a1 + 5648), a6, nullptr);
  }
LABEL_4:
  v47_.v47 = 0;
  LODWORD(v47_.v48) = 0x2000;
  if (a3 != 0) {
    v26 = a3 + 5592;
  }
  else {
    v26 = 0;
  }
  snd_fnd_WeakHandle_set((__int64)&v47_.v47, v26);
  GameRoutine_112180(a1 + 5800, (__int64)&v47_.v47);
  (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 16LL))(a1, a4);
  GameRoutine_190200(a1 + 5680, (char*)a5);
  if (a6 != 0) {
    v27 = *(_QWORD*)(a1 + 5648);
    v29 = *(_BYTE*)(v27 + 32);
    v28 = (__int64*)(v27 + 32);
    if ((v29 & 1) == 0) {
      v30 = *v28;
      v31 = v28[1];
      v32 = v28[2];
      v47_.v47 = v30;
      v47_.v48 = v31;
      v47_.v49 = (char*)v32;
      v33 = *(_BYTE*)(v25 + 1640);
      v34 = (__int64*)(v25 + 1640);
      if ((__int64*)(v25 + 1640) == &v47_.v47) {
        goto LABEL_19;
      }
    LABEL_14:
      if ((v33 & 1) != 0) {
        if ((v47_.v47 & 1) != 0) {
          v41 = v47_.v49;
        }
        else {
          v41 = (char*)&v47_.v47 + 1;
        }
        if ((v47_.v47 & 1) != 0) {
          v42 = v47_.v48;
        }
        else {
          v42 = (unsigned __int64)(unsigned __int8)v47_.v47 >> 1;
        }
        GameRoutine_a3a260(v34, (__int64)v41, v42);
        if ((v47_.v47 & 1) == 0) {
          goto LABEL_30;
        }
      }
      else if ((v47_.v47 & 1) != 0) {
        GameRoutine_a3a3a0(v34, (__int64)v47_.v49, v47_.v48);
        if ((v47_.v47 & 1) == 0) {
          goto LABEL_30;
        }
      }
      else {
        v38 = v47_.v48;
        *v34 = v47_.v47;
        v34[1] = v38;
        v34[2] = (__int64)v47_.v49;
        if ((v47_.v47 & 1) == 0) {
          goto LABEL_30;
        }
      }
      (*(void (**)(_QWORD, char*))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
          *snd_g_memory_ptr[0], v47_.v49);
      goto LABEL_30;
    }
    GameRoutine_1905a40(&v47_.v47, *(_QWORD*)(*(_QWORD*)(a1 + 5648) + 48LL),
                        *(_QWORD*)(*(_QWORD*)(a1 + 5648) + 40LL));
    v33 = *(_BYTE*)(v25 + 1640);
    v34 = (__int64*)(v25 + 1640);
    if ((__int64*)(v25 + 1640) != &v47_.v47) {
      goto LABEL_14;
    }
  }
  else {
    GameRoutine_190020_alt1(&v47_.v47, (const char*)a5);
    v33 = *(_BYTE*)(v25 + 1640);
    v34 = (__int64*)(v25 + 1640);
    if ((__int64*)(v25 + 1640) != &v47_.v47) {
      goto LABEL_14;
    }
  }
LABEL_19:
  if ((v33 & 1) != 0) {
    (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        *snd_g_memory_ptr[0], *(_QWORD*)(a1 + 5752));
  }
  v39 = v47_.v47;
  v40 = v47_.v48;
  LOWORD(v47_.v47) = 0;
  *v34 = v39;
  v34[1] = v40;
  v34[2] = (__int64)v47_.v49;
LABEL_30:
  v43 =
      (*(__int64 (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)snd_g_proxy + 552LL))(
          snd_g_proxy, *(_QWORD*)(a1 + 32), *(unsigned int*)(a7 + 212));
  v44 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(a1 + 6136) = v43;
  (*(void (**)(__int64, float, float, float))(v44 + 1024))(a1 + 40, a9, a10,
                                                           a11);
  Manager_11ea40((void*)((__int64)&v47_.v47), *(_QWORD*)(a1 + 32), 0, 0,
                 0xFFFFFFFF);
  GameRoutine_112180(a1 + 5848, (__int64)&v47_.v47);
  v45 = snd_fnd_WeakHandle_get(a1 + 5848);
  if (v45 != 0) {
    (*(void (**)(__int64, float, float, float))(*(_QWORD*)(v45 - 5592) + 72LL))(
        v45 - 5592, a9, a10, a11);
    *(_BYTE*)(v25 + 1790) = 1;
  }
  VibVoice_13f5c0(a1, a7);
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 784LL))(a1);
}

__int64 VibVoice_140a70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int* a5,
                        __int64 a6, __int64 a7, __int64 a8, float a9, float a10,
                        float a11)
{

#pragma clang fp contract(off)
  __int64 v19;
  __int64* v21;
  __int64 v22;
  int* v23;
  int v24;
  int v25;
  __int64 v26;
  char v27;
  __int64* v28;
  char v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  _DWORD* v33;
  int v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  char* v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64* v41;
  char v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  char v46;
  __int64* v47;
  unsigned __int64 v48;
  _QWORD* v49;
  __int64* v50;
  __int64* v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  _QWORD* v56;
  __int64* v57;
  __int64* v58;
  __int64 v59;
  unsigned __int64 v60;
  char* v61;
  unsigned __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  _QWORD* v66;
  __int64 v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  _QWORD* v76;
  __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  struct {
    __int64 v84;
    unsigned __int64 v85;
    char* v86;
  } v84_;

  v19 = a1 + 4096;
  Voice_1449c0((_QWORD*)a1, a2, a4, a7, a8);
  v21 = GameData_21346a0;
  *(_QWORD*)(a1 + 6072) = 0;
  *(_QWORD*)(a1 + 6080) = 0;
  *(_QWORD*)(a1 + 6088) = 0;
  *(_QWORD*)(a1 + 6096) = 0;
  *(_QWORD*)(a1 + 6104) = 0;
  *(_QWORD*)(a1 + 6120) = 0;
  *(_DWORD*)(a1 + 6128) = 0;
  *(_QWORD*)(a1 + 6136) = 0;
  *(_QWORD*)(a1 + 6144) = 0;
  *(_QWORD*)a1 = v21 + 2;
  *(_QWORD*)(a1 + 5592) = v21 + 244;
  *(_QWORD*)(a1 + 40) = v21 + 103;
  *(_DWORD*)(a1 + 6112) = 0x2000;
  *(_QWORD*)(a1 + 6088) = GameRoutine_140190(*(_QWORD*)(a1 + 32) + 3000LL);
  v22 = GameRoutine_119020(*(_QWORD*)(a1 + 32));
  if ((GameRoutine_13ed60(v22, a5) & 0x80000000) != 0) {
    v32 = Data_f6c20(a5, (_QWORD*)(a1 + 6096));
    v33 = *(_DWORD**)(a1 + 6088);
    v34 = *(_DWORD*)(v32 + 4);
    *v33 = *(_DWORD*)v32;
    v33[1] = v34;
    GameRoutine_190200((__int64)(v33 + 2), *(char**)(v32 + 8));
    goto LABEL_19;
  }
  v23 = *(int**)(a1 + 6088);
  *v23 = *a5;
  v24 = a5[1];
  v23[1] = v24;
  v25 = *a5;
  ConstructString_1901f0(&v84_.v84);
  GameRoutine_a392e0((__int64)&v84_.v84, (__int64)"[ %08x:%08x ]", v25, v24);
  v26 = *(_QWORD*)(a1 + 6088);
  v29 = *(_BYTE*)(v26 + 8);
  v28 = (__int64*)(v26 + 8);
  v27 = v29;
  if (v28 == &v84_.v84) {
    if ((v27 & 1) != 0) {
      (*(void (**)(__int64, _QWORD))(*(_QWORD*)snd_g_memory + 24LL))(
          snd_g_memory, *(_QWORD*)(*(_QWORD*)(a1 + 6088) + 24LL));
    }
    v36 = v84_.v85;
    v35 = (__int64)v84_.v86;
    v37 = v84_.v84;
    LOWORD(v84_.v84) = 0;
    *v28 = v37;
    v28[1] = v36;
    v28[2] = v35;
  }
  else if ((v27 & 1) != 0) {
    if ((v84_.v84 & 1) != 0) {
      v38 = v84_.v86;
    }
    else {
      v38 = (char*)&v84_.v84 + 1;
    }
    if ((v84_.v84 & 1) != 0) {
      v39 = v84_.v85;
    }
    else {
      v39 = (unsigned __int64)(unsigned __int8)v84_.v84 >> 1;
    }
    GameRoutine_a3a260(v28, (__int64)v38, v39);
    if ((v84_.v84 & 1) != 0) {
      goto LABEL_18;
    }
  }
  else {
    if ((v84_.v84 & 1) == 0) {
      v31 = v84_.v85;
      v30 = (__int64)v84_.v86;
      *v28 = v84_.v84;
      v28[1] = v31;
      v28[2] = v30;
      if ((v84_.v84 & 1) == 0) {
        goto LABEL_19;
      }
    LABEL_18:
      (*(void (**)(_QWORD, char*))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
          *snd_g_memory_ptr[0], v84_.v86);
      goto LABEL_19;
    }
    GameRoutine_a3a3a0(v28, (__int64)v84_.v86, v84_.v85);
    if ((v84_.v84 & 1) != 0) {
      goto LABEL_18;
    }
  }
LABEL_19:
  if (a6 == 0) {
    v49 = *(_QWORD**)(a1 + 6088);
    v50 = (__int64*)(v19 + 1584);
    v51 = v49 + 1;
    if ((_QWORD*)(v19 + 1584) != v49 + 1) {
      v52 = *(unsigned __int8*)v51;
      if ((*(_BYTE*)v50 & 1) == 0) {
        if ((v52 & 1) != 0) {
          GameRoutine_a3a3a0(v50, v49[3], v49[2]);
          v56 = *(_QWORD**)(a1 + 6088);
          v57 = (__int64*)(v19 + 1640);
          v58 = v56 + 1;
          if ((_QWORD*)(v19 + 1640) == v56 + 1) {
            goto LABEL_65;
          }
        }
        else {
          v53 = *v51;
          v54 = v51[1];
          v55 = v51[2];
          *(_QWORD*)(v19 + 1592) = v54;
          *(_QWORD*)(v19 + 1600) = v55;
          *v50 = v53;
          v56 = *(_QWORD**)(a1 + 6088);
          v57 = (__int64*)(v19 + 1640);
          v58 = v56 + 1;
          if ((_QWORD*)(v19 + 1640) == v56 + 1) {
            goto LABEL_65;
          }
        }
        goto LABEL_51;
      }
      v63 = (__int64)v49 + 9;
      v66 = v49 + 2;
      v64 = v49[2];
      v65 = v66[1];
      if ((v52 & 1) != 0) {
        v67 = v65;
      }
      else {
        v67 = v63;
      }
      if ((v52 & 1) != 0) {
        v68 = v64;
      }
      else {
        v68 = v52 >> 1;
      }
      GameRoutine_a3a260(v50, v67, v68);
    }
    v56 = *(_QWORD**)(a1 + 6088);
    v57 = (__int64*)(v19 + 1640);
    v58 = v56 + 1;
    if ((_QWORD*)(v19 + 1640) == v56 + 1) {
      goto LABEL_65;
    }
  LABEL_51:
    v69 = *(unsigned __int8*)v58;
    if ((*(_BYTE*)v57 & 1) != 0) {
      v73 = (__int64)v56 + 9;
      v76 = v56 + 2;
      v74 = v56[2];
      v75 = v76[1];
      if ((v69 & 1) != 0) {
        v77 = v75;
      }
      else {
        v77 = v73;
      }
      if ((v69 & 1) != 0) {
        v78 = v74;
      }
      else {
        v78 = v69 >> 1;
      }
      GameRoutine_a3a260(v57, v77, v78);
    }
    else if ((v69 & 1) != 0) {
      GameRoutine_a3a3a0(v57, v56[3], v56[2]);
    }
    else {
      v70 = *v58;
      v71 = v58[1];
      v72 = v58[2];
      v57[1] = v71;
      v57[2] = v72;
      *v57 = v70;
    }
    goto LABEL_65;
  }
  snd_data_f0230(*(_QWORD*)(a1 + 5648), a6, nullptr);
  GameRoutine_190200(a1 + 5680, *(char**)(a6 + 24));
  v40 = *(_QWORD*)(a1 + 5648);
  v42 = *(_BYTE*)(v40 + 32);
  v41 = (__int64*)(v40 + 32);
  if ((v42 & 1) != 0) {
    GameRoutine_1905a40(&v84_.v84, *(_QWORD*)(*(_QWORD*)(a1 + 5648) + 48LL),
                        *(_QWORD*)(*(_QWORD*)(a1 + 5648) + 40LL));
    v46 = *(_BYTE*)(v19 + 1640);
    v47 = (__int64*)(v19 + 1640);
    if ((__int64*)(v19 + 1640) != &v84_.v84) {
      goto LABEL_22;
    }
  LABEL_32:
    if ((v46 & 1) != 0) {
      (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
          *snd_g_memory_ptr[0], *(_QWORD*)(a1 + 5752));
    }
    v59 = v84_.v84;
    v60 = v84_.v85;
    LOWORD(v84_.v84) = 0;
    *v47 = v59;
    v47[1] = v60;
    v47[2] = (__int64)v84_.v86;
    goto LABEL_65;
  }
  v43 = *v41;
  v44 = v41[1];
  v45 = v41[2];
  v84_.v84 = v43;
  v84_.v85 = v44;
  v84_.v86 = (char*)v45;
  v46 = *(_BYTE*)(v19 + 1640);
  v47 = (__int64*)(v19 + 1640);
  if ((__int64*)(v19 + 1640) == &v84_.v84) {
    goto LABEL_32;
  }
LABEL_22:
  if ((v46 & 1) == 0) {
    if ((v84_.v84 & 1) != 0) {
      GameRoutine_a3a3a0(v47, (__int64)v84_.v86, v84_.v85);
      if ((v84_.v84 & 1) == 0) {
        goto LABEL_65;
      }
    }
    else {
      v48 = v84_.v85;
      *v47 = v84_.v84;
      v47[1] = v48;
      v47[2] = (__int64)v84_.v86;
      if ((v84_.v84 & 1) == 0) {
        goto LABEL_65;
      }
    }
  LABEL_64:
    (*(void (**)(_QWORD, char*))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        *snd_g_memory_ptr[0], v84_.v86);
    goto LABEL_65;
  }
  if ((v84_.v84 & 1) != 0) {
    v61 = v84_.v86;
  }
  else {
    v61 = (char*)&v84_.v84 + 1;
  }
  if ((v84_.v84 & 1) != 0) {
    v62 = v84_.v85;
  }
  else {
    v62 = (unsigned __int64)(unsigned __int8)v84_.v84 >> 1;
  }
  GameRoutine_a3a260(v47, (__int64)v61, v62);
  if ((v84_.v84 & 1) != 0) {
    goto LABEL_64;
  }
LABEL_65:
  v84_.v84 = 0;
  LODWORD(v84_.v85) = 0x2000;
  if (a3 != 0) {
    v79 = a3 + 5592;
  }
  else {
    v79 = 0;
  }
  snd_fnd_WeakHandle_set((__int64)&v84_.v84, v79);
  GameRoutine_112180(a1 + 5800, (__int64)&v84_.v84);
  (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 16LL))(a1, a4);
  v80 =
      (*(__int64 (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)snd_g_proxy + 552LL))(
          snd_g_proxy, *(_QWORD*)(a1 + 32), *(unsigned int*)(a7 + 212));
  v81 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(a1 + 6136) = v80;
  (*(void (**)(__int64, float, float, float))(v81 + 1024))(a1 + 40, a9, a10,
                                                           a11);
  Manager_11ea40((void*)((__int64)&v84_.v84), *(_QWORD*)(a1 + 32), 0, 0,
                 0xFFFFFFFF);
  GameRoutine_112180(a1 + 5848, (__int64)&v84_.v84);
  v82 = snd_fnd_WeakHandle_get(a1 + 5848);
  if (v82 != 0) {
    (*(void (**)(__int64, float, float, float))(*(_QWORD*)(v82 - 5592) + 72LL))(
        v82 - 5592, a9, a10, a11);
    *(_BYTE*)(v19 + 1790) = 1;
  }
  VibVoice_13f5c0(a1, a7);
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 784LL))(a1);
}

__int64 VibVoice_140fe0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int* a5,
                        __int64 a6, unsigned __int8* a7, __int64 a8, float a9,
                        float a10, float a11, __int64 a12)
{

#pragma clang fp contract(off)
  __int64* v22;
  __int64 v23;
  int* v24;
  int v25;
  int v26;
  __int64 v27;
  char v28;
  __int64* v29;
  char v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  _DWORD* v34;
  int v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  char* v39;
  unsigned __int64 v40;
  __int64* v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  _QWORD* v45;
  __int64* v46;
  __int64* v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  bool v52;
  unsigned __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  _QWORD* v59;
  __int64 v60;
  unsigned __int64 v61;
  __int64* v62;
  __int64* v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  struct {
    __int64 v75;
    unsigned __int64 v76;
    char* v77;
  } v75_;

  Voice_1449c0((_QWORD*)a1, a2, a4, a8, a12);
  v22 = GameData_21346a0;
  *(_QWORD*)(a1 + 6072) = 0;
  *(_QWORD*)(a1 + 6080) = 0;
  *(_QWORD*)(a1 + 6088) = 0;
  *(_QWORD*)(a1 + 6096) = 0;
  *(_QWORD*)(a1 + 6104) = 0;
  *(_QWORD*)(a1 + 6120) = 0;
  *(_DWORD*)(a1 + 6128) = 0;
  *(_QWORD*)(a1 + 6136) = 0;
  *(_QWORD*)(a1 + 6144) = 0;
  *(_QWORD*)a1 = v22 + 2;
  *(_QWORD*)(a1 + 5592) = v22 + 244;
  *(_QWORD*)(a1 + 40) = v22 + 103;
  *(_DWORD*)(a1 + 6112) = 0x2000;
  *(_QWORD*)(a1 + 6088) = GameRoutine_140190(*(_QWORD*)(a1 + 32) + 3000LL);
  v23 = GameRoutine_119020(*(_QWORD*)(a1 + 32));
  if ((GameRoutine_13ed60(v23, a5) & 0x80000000) != 0) {
    v33 = Data_f6c20(a5, (_QWORD*)(a1 + 6096));
    v34 = *(_DWORD**)(a1 + 6088);
    v35 = *(_DWORD*)(v33 + 4);
    *v34 = *(_DWORD*)v33;
    v34[1] = v35;
    GameRoutine_190200((__int64)(v34 + 2), *(char**)(v33 + 8));
    goto LABEL_19;
  }
  v24 = *(int**)(a1 + 6088);
  *v24 = *a5;
  v25 = a5[1];
  v24[1] = v25;
  v26 = *a5;
  ConstructString_1901f0(&v75_.v75);
  GameRoutine_a392e0((__int64)&v75_.v75, (__int64)"[ %08x:%08x ]", v26, v25);
  v27 = *(_QWORD*)(a1 + 6088);
  v30 = *(_BYTE*)(v27 + 8);
  v29 = (__int64*)(v27 + 8);
  v28 = v30;
  if (v29 == &v75_.v75) {
    if ((v28 & 1) != 0) {
      (*(void (**)(__int64, _QWORD))(*(_QWORD*)snd_g_memory + 24LL))(
          snd_g_memory, *(_QWORD*)(*(_QWORD*)(a1 + 6088) + 24LL));
    }
    v37 = v75_.v76;
    v36 = (__int64)v75_.v77;
    v38 = v75_.v75;
    LOWORD(v75_.v75) = 0;
    *v29 = v38;
    v29[1] = v37;
    v29[2] = v36;
  }
  else if ((v28 & 1) != 0) {
    if ((v75_.v75 & 1) != 0) {
      v39 = v75_.v77;
    }
    else {
      v39 = (char*)&v75_.v75 + 1;
    }
    if ((v75_.v75 & 1) != 0) {
      v40 = v75_.v76;
    }
    else {
      v40 = (unsigned __int64)(unsigned __int8)v75_.v75 >> 1;
    }
    GameRoutine_a3a260(v29, (__int64)v39, v40);
    if ((v75_.v75 & 1) != 0) {
      goto LABEL_18;
    }
  }
  else {
    if ((v75_.v75 & 1) == 0) {
      v32 = v75_.v76;
      v31 = (__int64)v75_.v77;
      *v29 = v75_.v75;
      v29[1] = v32;
      v29[2] = v31;
      if ((v75_.v75 & 1) == 0) {
        goto LABEL_19;
      }
    LABEL_18:
      (*(void (**)(_QWORD, char*))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
          *snd_g_memory_ptr[0], v75_.v77);
      goto LABEL_19;
    }
    GameRoutine_a3a3a0(v29, (__int64)v75_.v77, v75_.v76);
    if ((v75_.v75 & 1) != 0) {
      goto LABEL_18;
    }
  }
LABEL_19:
  if (a6 != 0) {
    snd_data_f0230(*(_QWORD*)(a1 + 5648), a6, nullptr);
  }
  if (a7 != nullptr) {
    GameRoutine_f1b80(*(__int64**)(a1 + 5648), (__int64*)a7);
    v41 = (__int64*)(a1 + 5680);
    if ((unsigned __int8*)(a1 + 5680) != a7) {
      v42 = *a7;
      if ((*(_BYTE*)v41 & 1) != 0) {
        v52 = (v42 & 1) == 0;
        v53 = v42 >> 1;
        if (v52) {
          v54 = (__int64)(a7 + 1);
        }
        else {
          v54 = *((_QWORD*)a7 + 2);
        }
        if (v52) {
          v55 = v53;
        }
        else {
          v55 = *((_QWORD*)a7 + 1);
        }
        GameRoutine_a3a260(v41, v54, v55);
      }
      else if ((v42 & 1) != 0) {
        GameRoutine_a3a3a0(v41, *((_QWORD*)a7 + 2), *((_QWORD*)a7 + 1));
      }
      else {
        v43 = *(_QWORD*)a7;
        v44 = *((_QWORD*)a7 + 2);
        *(_QWORD*)(a1 + 5688) = *((_QWORD*)a7 + 1);
        *(_QWORD*)(a1 + 5696) = v44;
        *v41 = v43;
      }
    }
    v62 = (__int64*)(a1 + 5736);
    v63 = (__int64*)(*(_QWORD*)(a1 + 5648) + 32LL);
    if (a6 == 0) {
      v63 = (__int64*)a7;
    }
    if (v62 != v63) {
      v64 = *(unsigned __int8*)v63;
      if ((*(_BYTE*)v62 & 1) == 0) {
        if ((v64 & 1) == 0) {
        LABEL_52:
          v65 = *v63;
          v66 = v63[1];
          v67 = v63[2];
          v62[1] = v66;
          v62[2] = v67;
          *v62 = v65;
          goto LABEL_67;
        }
        goto LABEL_59;
      }
    LABEL_60:
      if ((v64 & 1) != 0) {
        v68 = v63[2];
      }
      else {
        v68 = (__int64)v63 + 1;
      }
      if ((v64 & 1) != 0) {
        v69 = v63[1];
      }
      else {
        v69 = v64 >> 1;
      }
      GameRoutine_a3a260(v62, v68, v69);
    }
  }
  else {
    v45 = *(_QWORD**)(a1 + 6088);
    v46 = (__int64*)(a1 + 5680);
    v47 = v45 + 1;
    if ((_QWORD*)(a1 + 5680) != v45 + 1) {
      v48 = *(unsigned __int8*)v47;
      if ((*(_BYTE*)v46 & 1) != 0) {
        v56 = (__int64)v45 + 9;
        v59 = v45 + 2;
        v57 = v45[2];
        v58 = v59[1];
        if ((v48 & 1) != 0) {
          v60 = v58;
        }
        else {
          v60 = v56;
        }
        if ((v48 & 1) != 0) {
          v61 = v57;
        }
        else {
          v61 = v48 >> 1;
        }
        GameRoutine_a3a260(v46, v60, v61);
      }
      else if ((v48 & 1) != 0) {
        GameRoutine_a3a3a0(v46, v45[3], v45[2]);
      }
      else {
        v49 = *v47;
        v50 = v47[1];
        v51 = v47[2];
        *(_QWORD*)(a1 + 5688) = v50;
        *(_QWORD*)(a1 + 5696) = v51;
        *v46 = v49;
      }
    }
    v62 = (__int64*)(a1 + 5736);
    v63 = (__int64*)(*(_QWORD*)(a1 + 5648) + 32LL);
    if (a6 == 0) {
      v63 = (__int64*)(*(_QWORD*)(a1 + 6088) + 8LL);
    }
    if (v62 != v63) {
      v64 = *(unsigned __int8*)v63;
      if ((*(_BYTE*)v62 & 1) == 0) {
        if ((v64 & 1) == 0) {
          goto LABEL_52;
        }
      LABEL_59:
        GameRoutine_a3a3a0(v62, v63[2], v63[1]);
        goto LABEL_67;
      }
      goto LABEL_60;
    }
  }
LABEL_67:
  v75_.v75 = 0;
  LODWORD(v75_.v76) = 0x2000;
  if (a3 != 0) {
    v70 = a3 + 5592;
  }
  else {
    v70 = 0;
  }
  snd_fnd_WeakHandle_set((__int64)&v75_.v75, v70);
  GameRoutine_112180(a1 + 5800, (__int64)&v75_.v75);
  (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 16LL))(a1, a4);
  v71 =
      (*(__int64 (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)snd_g_proxy + 552LL))(
          snd_g_proxy, *(_QWORD*)(a1 + 32), *(unsigned int*)(a8 + 212));
  v72 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(a1 + 6136) = v71;
  (*(void (**)(__int64, float, float, float))(v72 + 1024))(a1 + 40, a9, a10,
                                                           a11);
  Manager_11ea40((void*)((__int64)&v75_.v75), *(_QWORD*)(a1 + 32), 0, 0,
                 0xFFFFFFFF);
  GameRoutine_112180(a1 + 5848, (__int64)&v75_.v75);
  v73 = snd_fnd_WeakHandle_get(a1 + 5848);
  if (v73 != 0) {
    (*(void (**)(__int64, float, float, float))(*(_QWORD*)(v73 - 5592) + 72LL))(
        v73 - 5592, a9, a10, a11);
    *(_BYTE*)(a1 + 5886) = 1;
  }
  VibVoice_13f5c0(a1, a8);
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 784LL))(a1);
}

__int64 VibVoice_Destructor(__int64 a1)
{
  __int64 v1;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int16 v8;
  unsigned int v9;
  __int64 v10;

  v1 = a1 + 4096;
  v3 = GameData_21346a0;
  *(_QWORD*)a1 = GameData_21346a0 + 2;
  v4 = v3 + 103;
  *(_QWORD*)(a1 + 5592) = v3 + 244;
  LOBYTE(v3) = *(_BYTE*)(a1 + 5885);
  *(_QWORD*)(a1 + 40) = v4;
  if (((unsigned __int8)v3 & 1) == 0) {
    snd_fnd_WeakHandle_reset_alt1(a1 + 5864);
    snd_Voice_finish_alt1((_BYTE*)a1);
    snd_Fade_CtrlTypeAHDSR_setState_alt1(a1 + 3600, 7);
    if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 6136) + 104LL))(
             *(_QWORD*)(a1 + 6136)) &
         1) != 0) {
      (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 6136) + 152LL))(
          *(_QWORD*)(a1 + 6136));
    }
  }
  if (*(_BYTE*)(v1 + 1790) == 1 &&
      (snd_fnd_WeakHandle_isValid((__int64*)(a1 + 5848)) & 1) != 0) {
    Crc32List_11ec20(*(_QWORD*)(a1 + 32), a1 + 5848, 0);
    snd_fnd_WeakHandle_reset_alt1(a1 + 5848);
  }
  v5 = *(_QWORD*)(a1 + 6088);
  if (v5 != 0) {
    *(_QWORD*)(a1 + 6088) = 0;
    v6 = *(_QWORD*)(a1 + 32);
    if ((*(_BYTE*)(v5 + 8) & 1) != 0) {
      (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
          *snd_g_memory_ptr[0], *(_QWORD*)(v5 + 24));
    }
    nn_os_LockMutex(v6 + 3040);
    v7 = *(_QWORD*)(v6 + 3024);
    v8 = *(_WORD*)(v6 + 3032) - 1;
    v9 = (unsigned int)(v5 - *(_DWORD*)(v6 + 3016)) >> 5;
    *(_WORD*)(v6 + 3032) = v8;
    *(_WORD*)(v7 + 2LL * v8) = v9;
    nn_os_UnlockMutex(v6 + 3040);
  }
  if ((snd_fnd_WeakHandle_isValid((__int64*)(a1 + 6104)) & 1) != 0) {
    v10 = GameRoutine_118ff0(*(_QWORD*)(a1 + 32));
    FileManager_10e120(v10, a1 + 6104);
    snd_fnd_WeakHandle_reset_alt1(a1 + 6104);
  }
  if (*(_QWORD*)(a1 + 6136) != 0) {
    *(_QWORD*)(a1 + 6136) = 0;
    (*(void (**)(__int64))(*(_QWORD*)snd_g_proxy + 560LL))(snd_g_proxy);
  }
  return Voice_Destructor(a1);
}

void VibVoice_1416c0(__int64 a1, long double a2)
{
  GameRoutine_1414a0(a1 - 5592, a2);
  GameRoutine_651250((void*)(a1 - 5592), 0x1808u);
}

__int64 VibVoice_141910(__int64 result, __int64 a2, char a3, long double a4)
{
  __int64 v4;
  float v7;
  __int64 v8;

  v4 = result;
  if (*(int*)(result + 5792) <= 5) {
    if ((*(_BYTE*)(result + 5885) & 1) != 0) {
      return result;
    }
  LABEL_6:
    snd_fnd_WeakHandle_reset(v4 + 5864, a4);
    snd_Voice_finish(v4);
    snd_Fade_CtrlTypeAHDSR_setState(v4 + 3600, 7);
    result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v4 + 6136) + 104LL))(
        *(_QWORD*)(v4 + 6136));
    if ((result & 1) != 0) {
      v4 = *(_QWORD*)(v4 + 6136);
      v8 = 152;
      return (*(__int64 (**)(__int64))(*(_QWORD*)v4 + v8))(v4);
    }
    return result;
  }
  v7 = *(float*)&a4;
  result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 216LL))(result);
  if ((result & 1) != 0) {
    if ((*(_BYTE*)(v4 + 5885) & 1) != 0) {
      return result;
    }
    goto LABEL_6;
  }
  if ((*(_BYTE*)(v4 + 5885) & 1) == 0) {
    result = snd_Param_isEnvelopeReleased(v4 + 40);
    if ((result & 1) == 0) {
      result = snd_Param_isEnvelopeFading(v4 + 40);
      if ((result & 1) == 0) {
        result = snd_Param_isEnvelopeEnded(v4 + 40);
        if ((result & 1) == 0) {
          snd_Fade_CtrlTypeAHDSR_setState(v4 + 3600, 5);
          snd_Fade_CtrlTypeAHDSR_release(v4 + 3600, a2, a3 & 1, v7);
          v8 = 784;
          return (*(__int64 (**)(__int64))(*(_QWORD*)v4 + v8))(v4);
        }
      }
    }
  }
  return result;
}

__int64 VibVoice_1420e0(__int64 result)
{
  __int64 v1;
  unsigned __int8 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  bool v6;
  int v7;
  int v8;
  bool v9;
  int v10;
  int v11;

  v1 = *(_QWORD*)(result + 6088);
  v2 = *(_BYTE*)(v1 + 8);
  v3 = *(_QWORD*)(v1 + 16);
  if ((v2 & 1) == 0) {
    v3 = v2 >> 1;
  }
  if (v3 != 0) {
    v4 = result;
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 184LL))(result);
    if ((result & 1) != 0) {
      v5 = *(_DWORD*)(v4 + 6144);
      v6 = __OFSUB__(v5, 1);
      v7 = v5 - 1;
      if (v7 < 0 != v6 || (*(_DWORD*)(v4 + 6144) = v7, v7 != 0)) {
        v8 = *(_DWORD*)(v4 + 6148);
        v6 = __OFSUB__(v8, 1);
        v10 = v8 - 1;
        v9 = v10 == 0;
        if (v10 < 0 != v6) {
          return result;
        }
      }
      else {
        result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v4 + 6136) + 88LL))(
            *(_QWORD*)(v4 + 6136));
        v11 = *(_DWORD*)(v4 + 6148);
        v6 = __OFSUB__(v11, 1);
        v10 = v11 - 1;
        v9 = v10 == 0;
        if (v10 < 0 != v6) {
          return result;
        }
      }
      *(_DWORD*)(v4 + 6148) = v10;
      if (v9) {
        return (*(__int64 (**)(_QWORD))(**(_QWORD**)(v4 + 6136) + 96LL))(
            *(_QWORD*)(v4 + 6136));
      }
    }
  }
  return result;
}

__int64 VibVoice_Unknown16(__int64 result)
{
  __int64 v1;
  unsigned __int8 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int8* v8;
  const char* v9;
  const char* v10;
  __int64 v11;
  __int64 v12;
  _BYTE v13[16];
  _DWORD v14[64];

  v1 = *(_QWORD*)(result + 6088);
  v2 = *(_BYTE*)(v1 + 8);
  v3 = *(_QWORD*)(v1 + 16);
  if ((v2 & 1) == 0) {
    v3 = v2 >> 1;
  }
  if (v3 != 0) {
    v4 = result;
    v5 = result + 4096;
    v6 = GameRoutine_119020(*(_QWORD*)(result + 32));
    result = GameRoutine_13ec80(v6, *(_DWORD**)(v4 + 6088),
                                (_QWORD*)(v4 + 6120), (_DWORD*)(v4 + 6128));
    if ((result & 1) != 0 ||
        (v7 = GameRoutine_119020(*(_QWORD*)(v4 + 32)),
         v8 = (unsigned __int8*)GameRoutine_190240(*(_QWORD*)(v4 + 6088) + 8LL),
         v14[0] = (unsigned int)snd_fnd_calcCrc32(v8, 0),
         v14[1] =
             (unsigned int)snd_fnd_calcCrc32Reverse_alt1((const char*)v8, 0),
         ((result = GameRoutine_13ec80(v7, v14, (_QWORD*)(v4 + 6120),
                                       (_DWORD*)(v4 + 6128))) &
          1) != 0)) {
      *(_WORD*)(v5 + 1804) = 256;
    }
    else {
      v9 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy +
                                                  152LL))(snd_g_proxy);
      v10 = (const char*)GameRoutine_190240(*(_QWORD*)(v4 + 6088) + 8LL);
      GameRoutine_a2af20_alt1((__int64)v14, 256, (__int64)"%s%s.bnvib.bin", v9,
                              v10);
      v11 = GameRoutine_118ff0(*(_QWORD*)(v4 + 32));
      FileManager_10df70((void*)((__int64)v13), v11, (__int64)v14, 0x20u);
      GameRoutine_112180(v4 + 6104, (__int64)v13);
      v12 = snd_fnd_WeakHandle_get(v4 + 6104);
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 40LL))(v12);
      *(_BYTE*)(v5 + 1804) = 1;
    }
  }
  return result;
}

float VibVoice_Unknown67(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  float v3;
  __int64 v4;
  float v5;
  _QWORD* v6;
  int v7;
  float v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  bool v13;

  nn_os_LockMutex(a1 + 5944);
  v2 = snd_fnd_WeakHandle_get(a1 + 5848);
  if (v2 != 0) {
    v3 = 0x0.0p+0f;
    if (*(_BYTE*)(v2 + 120) != 1) {
      goto LABEL_26;
    }
  }
  v3 = 0x0.0p+0f;
  if ((*(_BYTE*)(a1 + 5895) & 1) != 0) {
    goto LABEL_26;
  }
  v4 = v2;
  v5 = snd_Param_calcVolume_126a10((float*)(a1 + 40));
  v6 = (_QWORD*)snd_g_proxy_ptr[0];
  v3 = v5 * *(float*)(*(_QWORD*)(a1 + 5648) + 128LL);
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)snd_g_proxy_ptr[0] + 280LL))(
           *(_QWORD*)snd_g_proxy_ptr[0]) &
       1) == 0) {
    v7 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v6 + 264LL))(*v6);
    if (v7 == 2) {
      v8 = *(float*)(*(_QWORD*)(a1 + 5648) + 136LL);
      goto LABEL_9;
    }
    if (v7 == 1) {
      v8 = *(float*)(*(_QWORD*)(a1 + 5648) + 132LL);
    LABEL_9:
      v3 = v3 * v8;
    }
  }
  v9 = snd_fnd_WeakHandle_get(a1 + 5800);
  if (v9 != 0) {
    v3 = v3 * (*(float (**)(__int64))(*(_QWORD*)(v9 - 5592) + 72LL))(v9 - 5592);
  }
  v10 = snd_fnd_WeakHandle_get(a1 + 5816);
  if (v10 != 0) {
    v3 = v3 *
         (*(float (**)(__int64))(*(_QWORD*)(v10 - 5592) + 72LL))(v10 - 5592);
  }
  v11 = snd_fnd_WeakHandle_get(a1 + 5832);
  if (v11 != 0) {
    v3 = v3 *
         (*(float (**)(__int64))(*(_QWORD*)(v11 - 5592) + 72LL))(v11 - 5592);
  }
  if (v4 != 0) {
    v3 =
        v3 * (*(float (**)(__int64))(*(_QWORD*)(v4 - 5592) + 160LL))(v4 - 5592);
  }
  v12 = snd_fnd_WeakHandle_get(a1 + 5864);
  v13 = snd_Voice_hasFeature7(a1);
  if (v12 != 0) {
    if (v13 && !snd_Voice_hasFeature7(v12 - 5592)) {
      v3 = v3 * 0x1.0000000000000p-1f;
    }
  }
  else if (v13) {
    v3 = v3 * 0x1.0000000000000p-1f;
  }
  *(float*)(a1 + 5520) = v3;
LABEL_26:
  nn_os_UnlockMutex(a1 + 5944);
  return v3;
}

#pragma GCC visibility pop
