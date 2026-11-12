#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameManager_a223a0(_QWORD);
__int64 GameRoutine_10ec00(_QWORD*, _DWORD*);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_119000(_QWORD);
__int64 GameRoutine_127be0(__int64 result, long double);
__int64 GameRoutine_143b80(__int64 result, const char*);
__int64 GameRoutine_145700(_QWORD, long double);
__int64 GameRoutine_190020(_QWORD, _QWORD);
__int64 GameRoutine_190240(_QWORD);
__int64 GameRoutine_a3a260(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a3a3a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f05e0(_QWORD, _QWORD);
__int64 GameRoutine_f1b80(__int64 result, unsigned __int8*);
__int64 GameRoutine_f3540(void);
__int64 GameRoutine_f7060(_QWORD);
__int64 GameRoutine_f7640(_QWORD);
__int64 WaveMultiVoice_182ed0(_QWORD, _QWORD);
__int64 WaveMultiVoice_183280(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 snd_Fade_CtrlTypeAHDSR_release(_QWORD, _QWORD, _QWORD, float);
__int64 snd_Fade_CtrlTypeAHDSR_setState(_QWORD, _QWORD);
__int64 snd_Param_isEnvelopeEnded(_QWORD);
__int64 snd_Param_isEnvelopeFading(_QWORD);
__int64 snd_Param_isEnvelopeReleased(_QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD, float);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 snd_fnd_WeakHandle_reset(_QWORD, long double);
__int64 strlen(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
__n128 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64 snd_g_memory;
extern __int64 snd_g_proxy_ptr[2];
extern __int64 snd_s_target;
extern __int64* GameData_2134670[2];
extern __int64* snd_g_memory_ptr[2];
extern __int64* snd_s_target_ptr;
long double Crc32List_11ec20(_QWORD, _QWORD, _QWORD);
struct PseudoSret GameRoutine_130790(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                     _QWORD);
void GameRoutine_651250(void*, unsigned __int64);
void __attribute__((noreturn)) GameRoutine_a36650(_QWORD, _QWORD);
__int64 SeqVoice_Destructor(__int64 a1);
__int64 SeqVoice_128ab0(__int64 result, __int64 a2, char a3, float a4);
void SeqVoice_128e80(__int64 a1);
__int64 SeqVoice_12b0e0_alt2(__int64 result,
                             float a2) __asm__("SeqVoice_12b0e0");
__int64 SeqVoice_12dce0_alt1(_QWORD* a1, __int64 a2) __asm__("SeqVoice_12dce0");
__int64 SeqVoice_Unknown16(__int64 a1);
__int64 SeqVoice_Unknown19(__int64 result);
__int64 SeqVoice_Unknown20(__int64 result);
bool SeqVoice_1471b0(__int64 a1);
unsigned __int64* GameRoutine_f33e0(unsigned __int64* result);
unsigned __int64* SeqVoice_f3540(__int64 a1);
__int64 GameRoutine_12e0c0(_QWORD, _QWORD);
__int64 SeqVoice_Unknown93(__int64 a1);
_BYTE* snd_fnd_calcCrc32Reverse(_BYTE* result, int);
_QWORD* GameRoutine_a3a3a0_alt1(_QWORD*, __int64,
                                unsigned __int64) __asm__("GameRoutine_a3a3a0");
__attribute__((swiftcall)) void Manager_1181f0(PSEUDO_X8, __int64 result, int);
__attribute__((swiftcall)) void
Manager_11ea40(PSEUDO_X8, __int64 result, __int64, unsigned int, unsigned int);
__attribute__((swiftcall)) void
SeqVoice_1305a0_alt1(PSEUDO_X8, __int64, int, __int64, __int64, _DWORD*,
                     char) __asm__("SeqVoice_1305a0");
__attribute__((swiftcall)) void snd_11b6e0(PSEUDO_X8, __int64 result, __int64,
                                           __int64, _DWORD*, __int64, __int64,
                                           __int64, __int64);
__int64*
GameRoutine_a3a260_alt1(__int64*, __int64,
                        unsigned __int64) __asm__("GameRoutine_a3a260");
__int64 Actor_101c40(__int64 result, float);
__int64 Crc32List_1212c0(__int64, unsigned __int8*);
__int64 Crc32List_128050(__int64);
__int64 Crc32List_f05e0(__int64, unsigned __int8*);
__int64 Crc32List_f2ce0(__int64, __int64, __int64*, char*);
__int64 GameRoutine_10d050(__int64, __int64);
__int64 GameRoutine_112180_alt1(__int64, __int64) __asm__("GameRoutine_112180");
__int64 GameRoutine_126f60(_QWORD*, __int64);
__int64 GameRoutine_127be0_alt1(__int64 result) __asm__("GameRoutine_127be0");
__int64 GameRoutine_12ace0(__int64 result);
__int64 GameRoutine_190200(__int64, char*);
__int64 GameRoutine_190240_alt1(__int64) __asm__("GameRoutine_190240");
__int64 GameRoutine_f6360(int*, _QWORD*);
__int64 SeqVoice_12b0e0_alt1(__int64 result) __asm__("SeqVoice_12b0e0");
__int64 SeqVoice_12b600(__int64 result);
__int64 Voice_1449c0(_QWORD*, __int64, __int64, __int64, __int64);
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_Manager_countActiveVoice(__int64, __int64);
__int64 snd_Voice_finish(_BYTE*);
__int64 snd_fnd_WeakHandle_get_alt1(__int64) __asm__("snd_fnd_WeakHandle_get");
__int64
snd_fnd_WeakHandle_isValid_alt1(__int64*) __asm__("snd_fnd_WeakHandle_isValid");
__int64
snd_fnd_WeakHandle_reset_alt1(__int64) __asm__("snd_fnd_WeakHandle_reset");
__int64 snd_fnd_WeakHandle_set(__int64, __int64);
bool snd_(__int64);
bool snd_Param_isEnvelopeEnded_alt1(__int64) __asm__(
    "snd_Param_isEnvelopeEnded");
bool snd_Param_isEnvelopeFading_alt1(__int64) __asm__(
    "snd_Param_isEnvelopeFading");
bool snd_Param_isEnvelopeReleased_alt1(__int64) __asm__(
    "snd_Param_isEnvelopeReleased");
bool snd_Voice_hasFeature13(__int64);
bool snd_Voice_hasFeature6(__int64);
bool snd_Voice_hasFeature7(__int64);
bool snd_Voice_hasFeature8(__int64);
extern _UNKNOWN* GameData_212c190;
extern char GameData_1a9f09e;
float snd_Param_calcVolume_126a10(float*);
float snd_fnd_calcCurve(unsigned int, float, float, float, float);
float snd_fnd_calcDistance_fec30(float, float, float, float, float, float);
unsigned __int8* snd_fnd_calcCrc32(unsigned __int8* result, int);
void GameRoutine_129740(__int64);
void GameRoutine_12a180(__int64);
void SeqVoice_129560(__int64);
void SeqVoice_129b60(__int64);
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
__int64 SeqVoice_127a80(_QWORD* a1);
__int64 SeqVoice_128310(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                        unsigned __int8* a5, __int64 a6, __int64 a7, float a8,
                        float a9, float a10);
__int64 SeqVoice_1285c0_alt1(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                             int* a5, __int64* a6, __int64 a7, __int64 a8,
                             float a9, float a10,
                             float a11) __asm__("SeqVoice_1285c0");
__int64 SeqVoice_Unknown96(__int64 a1, char a2);
void SeqVoice_1299c0(__int64 a1);
void SeqVoice_129fc0(__int64 a1);
void SeqVoice_12a340(__int64 a1);
void SeqVoice_12a920(__int64 a1);
float SeqVoice_12e0c0(__int64 a1, __int64 a2);
__attribute__((swiftcall)) void SeqVoice_1305a0(PSEUDO_X8 x8_, __int64 a1,
                                                int a2, _DWORD* a3, __int64 a4,
                                                _DWORD* a5, char a6);
__attribute__((swiftcall)) void
    SeqVoice_1305a0_alt2(PSEUDO_X8, _QWORD) __asm__("SeqVoice_1305a0");
__int64 snd_Fade_Fade_10c910(_QWORD, _QWORD);
__attribute__((swiftcall)) void
SeqVoice_130790(PSEUDO_X8, __int64, int, __int64, __int64, _DWORD*, char);
__int64* GameManager_a223a0_alt1(__int64) __asm__("GameManager_a223a0");
__int64* GameRoutine_f1b80_alt1(__int64* result,
                                __int64*) __asm__("GameRoutine_f1b80");
__int64* SeqVoice_f3540_alt1(__int64) __asm__("SeqVoice_f3540");
__int64 Crc32List_11ec20_alt1(__int64, __int64,
                              unsigned int) __asm__("Crc32List_11ec20");
__int64 GameHr_f2ce0(__int64, __int64, __int64, char*);
__int64 GameRoutine_f7060_alt1(__int64 result) __asm__("GameRoutine_f7060");
__int64 Voice_Destructor(__int64);
__int64 WaveMultiVoice_182ed0_alt1(__int64,
                                   __int64) __asm__("WaveMultiVoice_182ed0");
__int64 WaveMultiVoice_183280_alt1(__int64, unsigned int,
                                   __int64) __asm__("WaveMultiVoice_183280");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
const char*
snd_fnd_calcCrc32Reverse_alt1(const char* result,
                              int) __asm__("snd_fnd_calcCrc32Reverse");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
unsigned __int64
GameRoutine_190020_alt1(__int64*, const char*) __asm__("GameRoutine_190020");
unsigned __int64 GameRoutine_f7640_alt1(__int64) __asm__("GameRoutine_f7640");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __attribute__((noreturn)) snd_a36650();
__int64 SeqVoice_1285c0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int* a5,
                        __int64 a6, __int64 a7, __int64 a8, float a9, float a10,
                        float a11);
__int64 SeqVoice_12b0e0(__int64 result);
__int64 SeqVoice_12dce0(_QWORD* a1, const char* a2);

unsigned __int64* SeqVoice_f3540(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(a1 + 688);
  v2 = *(_QWORD*)(a1 + 680);
  while (v1 != v2) {
    v1 -= 664;
    GameRoutine_f7060(v1);
  }
  *(_QWORD*)(a1 + 688) = v2;
  return GameRoutine_f33e0((unsigned __int64*)(a1 + 680));
}

__int64 SeqVoice_127a80(_QWORD* a1)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  float v8;
  float v9;
  __int64 v10;
  const char* v11;
  _BYTE v12[16];
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;

  if (*(float*)(a1[706] + 428LL) <= 0x0.0p+0f) {
    return 0;
  }
  result = snd_fnd_WeakHandle_get_alt1((__int64)(a1 + 731));
  if (result != 0) {
    v3 = result;
    (*(void (**)(__int64, float*, float*, float*))(
        *(_QWORD*)(result - 5592) + 104LL))(result - 5592, &v18, &v17, &v16);
    v4 = a1[4];
    v5 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v3 + 32) + 16LL))(
        *(_QWORD*)(v3 + 32));
    Manager_1181f0((void*)((__int64)v12), v4, v5);
    v6 = snd_fnd_WeakHandle_get_alt1((__int64)v12);
    if (v6 != 0) {
      v7 = v6 - 5592;
    }
    else {
      v7 = 0;
    }
    (*(void (**)(__int64, float*, float*, float*))(
        *(_QWORD*)(v7 + 40) + 1032LL))(v7 + 40, &v15, &v14, &v13);
    v8 = snd_fnd_calcDistance_fec30(v18, v17, v16, v15, v14, v13);
    v9 = (*(float (**)(_QWORD*))(*a1 + 112LL))(a1);
    result = v8 > v9;
    if (v8 > v9) {
      v10 = *(_QWORD*)snd_g_proxy_ptr[0];
      v11 = (const char*)GameRoutine_190240_alt1((__int64)(a1 + 710));
      (*(void (**)(__int64, const char*, ...))(*(_QWORD*)v10 + 384LL))(
          v10, "#SoundLibrary warning : SeqVoice AutoStop Out of range : %s\n",
          v11);
      return 1;
    }
  }
  return result;
}

__int64 SeqVoice_128310(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                        unsigned __int8* a5, __int64 a6, __int64 a7, float a8,
                        float a9, float a10)
{

#pragma clang fp contract(off)
  __int64 v17;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64* v24;
  __int64 v25;
  bool v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  struct {
    __int64 v34;
    int v35;
  } v34_;
  int v36[2];

  v17 = a1 + 4096;
  Voice_1449c0((_QWORD*)a1, a2, a4, a6, a7);
  v19 = GameData_2134670[0];
  *(_QWORD*)(a1 + 6072) = 0;
  *(_QWORD*)(a1 + 6080) = 0;
  *(_QWORD*)(a1 + 6088) = 0;
  *(_QWORD*)(a1 + 6096) = 0;
  *(_QWORD*)(a1 + 6104) = 0;
  *(_BYTE*)(v17 + 2018) = 0;
  *(_QWORD*)a1 = v19 + 2;
  *(_QWORD*)(a1 + 5592) = v19 + 244;
  *(_QWORD*)(a1 + 40) = v19 + 103;
  *(_WORD*)(a1 + 6112) = 1;
  *(_DWORD*)(a1 + 6116) = 1065353216;
  v36[0] = (unsigned int)snd_fnd_calcCrc32(a5, 0);
  v36[1] = (unsigned int)snd_fnd_calcCrc32Reverse_alt1((const char*)a5, 0);
  v20 = GameRoutine_f6360(v36, (_QWORD*)(a1 + 6096));
  v21 = Crc32List_128050(*(_QWORD*)(a1 + 32) + 2920LL);
  *(_QWORD*)(a1 + 6088) = v21;
  GameHr_f2ce0(v21, v20, 0, (char*)a5);
  Crc32List_f05e0(*(_QWORD*)(a1 + 5648),
                  (unsigned __int8*)(*(_QWORD*)(a1 + 6088) + 16LL));
  v34_.v34 = 0;
  v34_.v35 = 0x2000;
  if (a3 != 0) {
    v22 = a3 + 5592;
  }
  else {
    v22 = 0;
  }
  snd_fnd_WeakHandle_set((__int64)&v34_.v34, v22);
  GameRoutine_112180_alt1(a1 + 5800, (__int64)&v34_.v34);
  (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 16LL))(a1, a4);
  GameRoutine_190200(v17 + 1584, (char*)a5);
  v23 = *(unsigned __int8*)(v17 + 1584);
  v24 = (__int64*)(v17 + 1640);
  if ((*(_BYTE*)(v17 + 1640) & 1) != 0) {
    v26 = (v23 & 1) == 0;
    v27 = v23 >> 1;
    if (v26) {
      v28 = a1 + 5681;
    }
    else {
      v28 = *(_QWORD*)(a1 + 5696);
    }
    if (v26) {
      v29 = v27;
    }
    else {
      v29 = *(_QWORD*)(a1 + 5688);
    }
    GameRoutine_a3a260_alt1(v24, v28, v29);
  }
  else if ((v23 & 1) != 0) {
    GameRoutine_a3a3a0_alt1(v24, *(_QWORD*)(a1 + 5696), *(_QWORD*)(a1 + 5688));
  }
  else {
    v25 = *(_QWORD*)(v17 + 1592);
    *v24 = *(_QWORD*)(v17 + 1584);
    *(_QWORD*)(v17 + 1648) = v25;
    *(_QWORD*)(v17 + 1656) = *(_QWORD*)(v17 + 1600);
  }
  *(_DWORD*)(a1 + 5920) = *(_DWORD*)(a6 + 208);
  GameRoutine_126f60((_QWORD*)a1, a6);
  (*(void (**)(__int64, float, float, float))(*(_QWORD*)(a1 + 40) + 1024LL))(
      a1 + 40, a8, a9, a10);
  Manager_11ea40((void*)((__int64)&v34_.v34), *(_QWORD*)(a1 + 32), 0, 0,
                 0xFFFFFFFF);
  GameRoutine_112180_alt1(a1 + 5848, (__int64)&v34_.v34);
  v30 = snd_fnd_WeakHandle_get_alt1(a1 + 5848);
  (*(void (**)(__int64, float, float, float))(*(_QWORD*)(v30 - 5592) + 72LL))(
      v30 - 5592, a8, a9, a10);
  v31 = snd_fnd_WeakHandle_get_alt1(a1 + 5848);
  (*(void (**)(__int64))(*(_QWORD*)(v31 - 5592) + 48LL))(v31 - 5592);
  v32 = snd_fnd_WeakHandle_get_alt1(a1 + 5848);
  Actor_101c40(v32 - 5592, 0x1.0aac080000000p+4f);
  *(_BYTE*)(v17 + 1790) = 1;
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 784LL))(a1);
}

__int64 SeqVoice_1285c0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int* a5,
                        __int64 a6, __int64 a7, __int64 a8, float a9, float a10,
                        float a11)
{

#pragma clang fp contract(off)
  __int64 v19;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  bool v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  struct {
    __int64 v37;
    int v38;
  } v37_;

  v19 = a1 + 4096;
  Voice_1449c0((_QWORD*)a1, a2, a4, a7, a8);
  v21 = GameData_2134670[0];
  *(_QWORD*)(a1 + 6072) = 0;
  *(_QWORD*)(a1 + 6080) = 0;
  *(_QWORD*)(a1 + 6088) = 0;
  *(_QWORD*)(a1 + 6096) = 0;
  *(_QWORD*)(a1 + 6104) = 0;
  *(_BYTE*)(v19 + 2018) = 0;
  *(_QWORD*)a1 = v21 + 2;
  *(_QWORD*)(a1 + 40) = v21 + 103;
  *(_QWORD*)(a1 + 5592) = v21 + 244;
  *(_WORD*)(a1 + 6112) = 1;
  *(_DWORD*)(a1 + 6116) = 1065353216;
  v22 = GameRoutine_f6360(a5, (_QWORD*)(a1 + 6096));
  v23 = Crc32List_128050(*(_QWORD*)(a1 + 32) + 2920LL);
  *(_QWORD*)(a1 + 6088) = v23;
  GameHr_f2ce0(v23, v22, a6, nullptr);
  Crc32List_f05e0(*(_QWORD*)(a1 + 5648),
                  (unsigned __int8*)(*(_QWORD*)(a1 + 6088) + 16LL));
  v37_.v37 = 0;
  v37_.v38 = 0x2000;
  if (a3 != 0) {
    v24 = a3 + 5592;
  }
  else {
    v24 = 0;
  }
  snd_fnd_WeakHandle_set((__int64)&v37_.v37, v24);
  GameRoutine_112180_alt1(a1 + 5800, (__int64)&v37_.v37);
  (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 16LL))(a1, a4);
  v25 = *(unsigned __int8*)(v19 + 1584);
  v26 = (__int64*)(v19 + 1640);
  if ((*(_BYTE*)(v19 + 1640) & 1) != 0) {
    v29 = (v25 & 1) == 0;
    v30 = v25 >> 1;
    if (v29) {
      v31 = a1 + 5681;
    }
    else {
      v31 = *(_QWORD*)(a1 + 5696);
    }
    if (v29) {
      v32 = v30;
    }
    else {
      v32 = *(_QWORD*)(a1 + 5688);
    }
    GameRoutine_a3a260_alt1(v26, v31, v32);
  }
  else if ((v25 & 1) != 0) {
    GameRoutine_a3a3a0_alt1(v26, *(_QWORD*)(a1 + 5696), *(_QWORD*)(a1 + 5688));
  }
  else {
    v27 = *(_QWORD*)(v19 + 1592);
    v28 = *(_QWORD*)(v19 + 1600);
    *v26 = *(_QWORD*)(v19 + 1584);
    *(_QWORD*)(v19 + 1648) = v27;
    *(_QWORD*)(v19 + 1656) = v28;
  }
  *(_DWORD*)(a1 + 5920) = *(_DWORD*)(a7 + 208);
  GameRoutine_126f60((_QWORD*)a1, a7);
  (*(void (**)(__int64, float, float, float))(*(_QWORD*)(a1 + 40) + 1024LL))(
      a1 + 40, a9, a10, a11);
  Manager_11ea40((void*)((__int64)&v37_.v37), *(_QWORD*)(a1 + 32), 0, 0,
                 0xFFFFFFFF);
  GameRoutine_112180_alt1(a1 + 5848, (__int64)&v37_.v37);
  v33 = snd_fnd_WeakHandle_get_alt1(a1 + 5848);
  (*(void (**)(__int64, float, float, float))(*(_QWORD*)(v33 - 5592) + 72LL))(
      v33 - 5592, a9, a10, a11);
  v34 = snd_fnd_WeakHandle_get_alt1(a1 + 5848);
  (*(void (**)(__int64))(*(_QWORD*)(v34 - 5592) + 48LL))(v34 - 5592);
  v35 = snd_fnd_WeakHandle_get_alt1(a1 + 5848);
  Actor_101c40(v35 - 5592, 0x1.0aac080000000p+4f);
  *(_BYTE*)(v19 + 1790) = 1;
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 784LL))(a1);
}

__int64 SeqVoice_Destructor(__int64 a1)
{
  __int64* v2;
  _QWORD* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int16 v15;
  _QWORD v17[25];

  v2 = GameData_2134670[0];
  *(_QWORD*)a1 = GameData_2134670[0] + 2;
  *(_QWORD*)(a1 + 40) = v2 + 103;
  *(_QWORD*)(a1 + 5592) = v2 + 244;
  snd_Fade_Fade_10c830_alt1((__int64)v17, 0x0.0p+0f);
  SeqVoice_128ab0(a1, (__int64)v17, 1, 0x0.0p+0f);
  snd_Fade_Destroy_Fade_alt1(v17);
  v3 = *(_QWORD**)(a1 + 6104);
  if (v3 != nullptr) {
    v4 = snd_g_memory_ptr[0];
    switch (*(_DWORD*)(*(_QWORD*)(a1 + 6088) + 8LL)) {
    case 1:
    case 2:
    case 3:
    case 5:
    case 6:
    case 8:
    case 0xC:
      *(_QWORD*)(a1 + 6104) = 0;
      goto LABEL_17;
    case 4:
      *(_QWORD*)(a1 + 6104) = 0;
      if (v3[6] != 0) {
        (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
      }
      if (v3[3] == 0) {
        goto LABEL_14;
      }
      goto LABEL_13;
    case 7:
    case 0xA:
      *(_QWORD*)(a1 + 6104) = 0;
      goto LABEL_14;
    case 9:
      *(_QWORD*)(a1 + 6104) = 0;
      v6 = v3[3];
      if (v6 != 0) {
        v3[4] = v6;
      LABEL_13:
        (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
      }
    LABEL_14:
      if (*v3 != 0) {
        v3[1] = *v3;
      LABEL_16:
        (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
      }
    LABEL_17:
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)*v4 + 24LL))(*v4, v3);
      break;
    case 0xB:
      *(_QWORD*)(a1 + 6104) = 0;
      v5 = v3[2];
      if (v5 == 0) {
        goto LABEL_17;
      }
      v3[3] = v5;
      goto LABEL_16;
    default:
      break;
    }
  }
  if (*(_BYTE*)(a1 + 5886) == 1 &&
      (snd_fnd_WeakHandle_isValid_alt1((__int64*)(a1 + 5848)) & 1) != 0) {
    Crc32List_11ec20_alt1(*(_QWORD*)(a1 + 32), a1 + 5848, 0);
    snd_fnd_WeakHandle_reset_alt1(a1 + 5848);
  }
  v7 = *(_QWORD*)(a1 + 6088);
  if (v7 != 0) {
    SeqVoice_f3540_alt1(v7);
    v8 = *(_QWORD*)(a1 + 6088);
    *(_QWORD*)(a1 + 6088) = 0;
    v9 = *(_QWORD*)(a1 + 32);
    v10 = *(_QWORD*)(v8 + 680);
    if (v10 != 0) {
      v11 = *(_QWORD*)(v8 + 688);
      v12 = *(_QWORD*)(v8 + 680);
      if (v10 != v11) {
        do {
          v11 -= 664;
          GameRoutine_f7060_alt1(v11);
        } while (v11 != v10);
        v12 = *(_QWORD*)(v8 + 680);
      }
      *(_QWORD*)(v8 + 688) = v10;
      (*(void (**)(__int64, __int64))(*(_QWORD*)snd_g_memory + 24LL))(
          snd_g_memory, v12);
    }
    GameRoutine_f7060_alt1(v8 + 16);
    nn_os_LockMutex_alt1(v9 + 2960);
    v13 = *(_QWORD*)(v9 + 2944);
    v14 = (v8 - *(_QWORD*)(v9 + 2936)) / 0x2C8uLL;
    v15 = *(_WORD*)(v9 + 2952) - 1;
    *(_WORD*)(v9 + 2952) = v15;
    *(_WORD*)(v13 + 2LL * v15) = v14;
    nn_os_UnlockMutex_alt1(v9 + 2960);
  }
  return Voice_Destructor(a1);
}

__int64 SeqVoice_128ab0(__int64 result, __int64 a2, char a3, float a4)
{
  __int64 v4;
  __int64 v8;
  long double v9;
  __int64 v10;
  float v11;
  __int64 v12;
  __int64 v13;
  float v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  v4 = result + 4096;
  if ((*(_BYTE*)(result + 5885) & 1) == 0) {
    v8 = result;
    if (((*(__int64 (**)(__int64))(*(_QWORD*)result + 216LL))(result) & 1) !=
        0) {
      return GameRoutine_127be0(v8, v9);
    }
    else {
      result = snd_Param_isEnvelopeReleased(v8 + 40);
      if ((result & 1) == 0) {
        result = snd_Param_isEnvelopeFading(v8 + 40);
        if ((result & 1) == 0) {
          result = snd_Param_isEnvelopeEnded(v8 + 40);
          if ((result & 1) == 0) {
            v10 = *(_QWORD*)v8;
            *(_BYTE*)(v4 + 1810) = 0;
            *(_WORD*)(v4 + 1808) = 0;
            v11 = (*(float (**)(__int64, _QWORD))(v10 + 464))(v8, 0);
            v12 = *(_QWORD*)(v8 + 5648);
            *(float*)(v8 + 6060) = v11;
            v13 = v8 + 3600;
            if (*(float*)(v12 + 276) <= -10000.0) {
              snd_Fade_CtrlTypeAHDSR_setState(v13, 6);
              switch (*(_DWORD*)(*(_QWORD*)(v8 + 6088) + 8LL)) {
              case 1:
              case 2:
              case 3:
              case 5:
              case 6:
              case 8:
              case 0xB:
              case 0xC:
                v15 = snd_fnd_WeakHandle_get(*(_QWORD*)(v8 + 6104), v14);
                if (v15 != 0) {
                  (*(void (**)(__int64, __int64, _QWORD, float))(
                      *(_QWORD*)(v15 - 5592) + 248LL))(v15 - 5592, a2, a3 & 1,
                                                       a4);
                }
                break;
              case 4:
                if (*(int*)(*(_QWORD*)(v8 + 6096) + 24LL) >= 1) {
                  v22 = 0;
                  v23 = 0;
                  do {
                    v24 = snd_fnd_WeakHandle_get(**(_QWORD**)(v8 + 6104) + v22,
                                                 v14);
                    if (v24 != 0) {
                      (*(void (**)(__int64, __int64, _QWORD, float))(
                          *(_QWORD*)(v24 - 5592) + 248LL))(v24 - 5592, a2,
                                                           a3 & 1, a4);
                    }
                    ++v23;
                    v22 += 16;
                  } while (v23 < *(int*)(*(_QWORD*)(v8 + 6096) + 24LL));
                }
                break;
              case 7:
                if (*(int*)(*(_QWORD*)(v8 + 6096) + 24LL) >= 1) {
                  v25 = 0;
                  v26 = 0;
                  do {
                    v27 = snd_fnd_WeakHandle_get(**(_QWORD**)(v8 + 6104) + v25,
                                                 v14);
                    if (v27 != 0) {
                      (*(void (**)(__int64, __int64, _QWORD, float))(
                          *(_QWORD*)(v27 - 5592) + 248LL))(v27 - 5592, a2,
                                                           a3 & 1, a4);
                    }
                    ++v26;
                    v25 += 16;
                  } while (v26 < *(int*)(*(_QWORD*)(v8 + 6096) + 24LL));
                }
                break;
              case 9:
                if (*(int*)(*(_QWORD*)(v8 + 6096) + 24LL) >= 1) {
                  v16 = 0;
                  v17 = 0;
                  do {
                    v18 = snd_fnd_WeakHandle_get(**(_QWORD**)(v8 + 6104) + v16,
                                                 v14);
                    if (v18 != 0) {
                      (*(void (**)(__int64, __int64, _QWORD, float))(
                          *(_QWORD*)(v18 - 5592) + 248LL))(v18 - 5592, a2,
                                                           a3 & 1, a4);
                    }
                    ++v17;
                    v16 += 16;
                  } while (v17 < *(int*)(*(_QWORD*)(v8 + 6096) + 24LL));
                }
                break;
              case 0xA:
                if (*(int*)(*(_QWORD*)(v8 + 6096) + 24LL) >= 1) {
                  v19 = 0;
                  v20 = 0;
                  do {
                    v21 = snd_fnd_WeakHandle_get(**(_QWORD**)(v8 + 6104) + v19,
                                                 v14);
                    if (v21 != 0) {
                      (*(void (**)(__int64, __int64, _QWORD, float))(
                          *(_QWORD*)(v21 - 5592) + 248LL))(v21 - 5592, a2,
                                                           a3 & 1, a4);
                    }
                    ++v20;
                    v19 += 16;
                  } while (v20 < *(int*)(*(_QWORD*)(v8 + 6096) + 24LL));
                }
                break;
              default:
                return (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 784LL))(v8);
              }
            }
            else {
              snd_Fade_CtrlTypeAHDSR_setState(v13, 5);
              snd_Fade_CtrlTypeAHDSR_release(v8 + 3600, a2, a3 & 1, a4);
            }
            return (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 784LL))(v8);
          }
        }
      }
    }
  }
  return result;
}

void SeqVoice_128e80(__int64 a1)
{
  SeqVoice_Destructor(a1 - 5592);
  GameRoutine_651250((void*)(a1 - 5592), 0x17E8u);
}

__int64 SeqVoice_Unknown96(__int64 a1, char a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  _BYTE* v3;
  char v5;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[25];

  v2 = *(_QWORD*)(a1 + 32);
  if (v2 != 0) {
    v3 = (_BYTE*)(a1 + 4096);
    v5 = *(_BYTE*)(a1 + 5919);
    *(_BYTE*)(a1 + 5919) = 1;
    if ((*(_BYTE*)(a1 + 5885) & 1) != 0) {
    LABEL_6:
      LOBYTE(v2) = 0;
      return v2 & 1;
    }
    if (*(_BYTE*)(a1 + 5895) == 1) {
      GameRoutine_127be0_alt1(a1);
    LABEL_5:
      snd_Voice_finish((_BYTE*)a1);
      goto LABEL_6;
    }
    (*(void (**)(__int64))(*(_QWORD*)a1 + 784LL))(a1);
    if (*(_DWORD*)(a1 + 5792) == 5) {
      if ((*(float (**)(__int64))(*(_QWORD*)(a1 + 40) + 328LL))(a1 + 40) >
          0x0.0p+0f) {
        goto LABEL_38;
      }
      v8 = *(_QWORD*)(a1 + 5664);
      if (v8 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 160LL))(v8);
      }
      *(_DWORD*)(a1 + 5792) = 6;
    }
    v9 = snd_fnd_WeakHandle_get_alt1(a1 + 5848);
    if (v9 != 0 && (v3[1790] & 1) != 0 && (*(_BYTE*)(v9 + 68) & 1) == 0) {
      v10 = v9;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
          *(_QWORD*)(a1 + 40) + 1048LL))((void*)(v12), a1 + 40);
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)(v10 - 5592) + 80LL))(
          v10 - 5592, v12);
    }
    (*(void (**)(__int64))(*(_QWORD*)a1 + 784LL))(a1);
    if (v3[2016] == 1) {
      v3[2016] = 0;
      if (snd_Voice_hasFeature6(a1) &&
              (SeqVoice_127a80((_QWORD*)a1) & 1) != 0 ||
          ((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 728LL))(a1) & 1) == 0) {
        goto LABEL_5;
      }
      if (!snd_Voice_hasFeature8(a1)) {
        Crc32List_1212c0(*(_QWORD*)(a1 + 32), (unsigned __int8*)a1);
      }
      (*(void (**)(_QWORD, __int64))(**(_QWORD**)snd_g_proxy_ptr[0] + 440LL))(
          *(_QWORD*)snd_g_proxy_ptr[0], a1);
      (*(void (**)(__int64, double))(*(_QWORD*)(a1 + 40) + 32LL))(a1 + 40,
                                                                  0x0.0p+0);
    }
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)snd_g_proxy_ptr[0] + 448LL))(
        *(_QWORD*)snd_g_proxy_ptr[0], a1);
    if (*(float*)(*(_QWORD*)(a1 + 5648) + 256LL) < 0x0.0p+0f ||
        snd_Param_isEnvelopeReleased_alt1(a1 + 40) ||
        snd_Param_isEnvelopeFading_alt1(a1 + 40) ||
        snd_Param_isEnvelopeEnded_alt1(a1 + 40)) {
      v11 = *(_QWORD*)(a1 + 5648);
      if (*(_DWORD*)(v11 + 120) != 0 && *(_DWORD*)(v11 + 124) != 0 &&
          !snd_(a1 + 40)) {
        goto LABEL_38;
      }
      if (snd_Param_isEnvelopeEnded_alt1(a1 + 40) ||
          *(_DWORD*)(a1 + 5792) == 10) {
        GameRoutine_127be0_alt1(a1);
        goto LABEL_6;
      }
    }
    else if (v3[1801] == 1) {
      (*(void (**)(__int64))(*(_QWORD*)a1 + 264LL))(a1);
      goto LABEL_6;
    }
    if (v3[1904] == 1 &&
        (snd_fnd_WeakHandle_isValid_alt1((__int64*)(a1 + 5984)) & 1) == 0) {
      v3[1904] = 0;
      snd_Fade_Fade_10c830_alt1((__int64)v12, 0x0.0p+0f);
      (*(void (**)(__int64, _QWORD*, _QWORD, double))(*(_QWORD*)a1 + 248LL))(
          a1, v12, 0, 0x0.0p+0);
      snd_Fade_Destroy_Fade_alt1(v12);
      goto LABEL_6;
    }
    if ((v3[1808] & 1) != 0 || (v3[1809] & 1) != 0 || (v3[1810] & 1) != 0) {
    LABEL_38:
      LOBYTE(v2) = 1;
      return v2 & 1;
    }
    if (*(_DWORD*)(a1 + 5792) != -1 && (v3[1789] & 1) == 0) {
      switch (*(_DWORD*)(*(_QWORD*)(a1 + 6088) + 8LL)) {
      case 1:
        SeqVoice_129560(a1);
        break;
      case 2:
        GameRoutine_129740(a1);
        break;
      case 3:
        SeqVoice_1299c0(a1);
        break;
      case 4:
        SeqVoice_129b60(a1);
        break;
      case 5:
        SeqVoice_129fc0(a1);
        break;
      case 6:
        GameRoutine_12a180(a1);
        break;
      case 7:
        SeqVoice_12a340(a1);
        break;
      case 8:
        SeqVoice_12a920(a1);
        break;
      case 9:
        GameRoutine_12ace0(a1);
        break;
      case 0xA:
        (*(void (**)(__int64))(*(_QWORD*)a1 + 264LL))(a1);
        break;
      case 0xB:
        SeqVoice_12b0e0_alt1(a1);
        break;
      case 0xC:
        SeqVoice_12b600(a1);
        break;
      default:
        break;
      }
    }
    (*(void (**)(__int64))(*(_QWORD*)a1 + 784LL))(a1);
    LOBYTE(v2) = (a2 | v5 ^ 1) & v3[1789] ^ 1;
  }
  return v2 & 1;
}

void SeqVoice_1299c0(__int64 a1)
{

#pragma clang fp contract(off)
  int v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BYTE v7[16];

  v1 = *(_DWORD*)(a1 + 5792);
  if (v1 != 8) {
    if (v1 != 6) {
      return;
    }
    if (!snd_Param_isEnvelopeReleased_alt1(a1 + 40) &&
        !snd_Param_isEnvelopeFading_alt1(a1 + 40) &&
        !snd_Param_isEnvelopeEnded_alt1(a1 + 40)) {
      v3 = *(_QWORD*)(a1 + 6096);
      SeqVoice_1305a0_alt1(
          (void*)((__int64)v7), a1, *(_DWORD*)(v3 + 28),
          *(_QWORD*)(*(_QWORD*)(a1 + 6088) + 680LL) +
              664LL * *(unsigned __int8*)(*(_QWORD*)v3 + *(int*)(v3 + 28)),
          *(_QWORD*)(v3 + 48) +
              104LL * *(unsigned __int8*)(*(_QWORD*)v3 + *(int*)(v3 + 28)),
          (_DWORD*)(a1 + 5788), 0);
      GameRoutine_112180_alt1(*(_QWORD*)(a1 + 6104), (__int64)v7);
      ++*(_DWORD*)(*(_QWORD*)(a1 + 6096) + 28LL);
      v4 = *(_QWORD*)(a1 + 6096);
      if (*(_DWORD*)(v4 + 28) >= *(_DWORD*)(v4 + 24)) {
        *(_DWORD*)(v4 + 28) = 0;
      }
    }
    *(_DWORD*)(a1 + 5792) = 8;
  }
  v5 = snd_fnd_WeakHandle_get_alt1(*(_QWORD*)(a1 + 6104));
  if (v5 != 0 &&
      (v6 = v5,
       ((*(__int64 (**)(__int64))(*(_QWORD*)(v5 - 5592) + 376LL))(v5 - 5592) &
        1) != 0)) {
    *(float*)(a1 + 5936) =
        (*(float (**)(__int64))(*(_QWORD*)(v6 - 5592) + 520LL))(v6 - 5592);
  }
  else if (*(float*)(*(_QWORD*)(a1 + 5648) + 256LL) < 0x0.0p+0f ||
           snd_Param_isEnvelopeReleased_alt1(a1 + 40) ||
           snd_Param_isEnvelopeFading_alt1(a1 + 40) ||
           snd_Param_isEnvelopeEnded_alt1(a1 + 40)) {
    (*(void (**)(__int64))(*(_QWORD*)a1 + 264LL))(a1);
  }
  else {
    *(_DWORD*)(a1 + 5792) = 10;
  }
}

void SeqVoice_129fc0(__int64 a1)
{

#pragma clang fp contract(off)
  int v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _BYTE v13[16];

  v1 = *(_DWORD*)(a1 + 5792);
  if (v1 != 8) {
    if (v1 != 6) {
      return;
    }
    if (!snd_Param_isEnvelopeReleased_alt1(a1 + 40) &&
        !snd_Param_isEnvelopeFading_alt1(a1 + 40) &&
        !snd_Param_isEnvelopeEnded_alt1(a1 + 40)) {
      v3 = *(_QWORD*)(a1 + 6096);
      if (*(int*)(v3 + 24) >= 1) {
        v4 = 0;
        while (1) {
          v5 = *(_QWORD*)(v3 + 48);
          v6 = *(_QWORD*)(a1 + 32);
          v7 = *(unsigned __int8*)(*(_QWORD*)v3 + v4);
          v8 = *(_QWORD*)(*(_QWORD*)(a1 + 6088) + 680LL) +
               664LL * *(unsigned __int8*)(*(_QWORD*)v3 + v4);
          v9 = GameRoutine_190240_alt1(v8 + 32);
          if ((unsigned int)snd_Manager_countActiveVoice(v6, v9) == 0) {
            break;
          }
          v3 = *(_QWORD*)(a1 + 6096);
          v10 = *(int*)(v3 + 24);
          if (v4 == (_DWORD)v10 - 1) {
            break;
          }
          if (++v4 >= v10) {
            goto LABEL_13;
          }
        }
        SeqVoice_1305a0_alt1((void*)((__int64)v13), a1, v4, v8, v5 + 104LL * v7,
                             (_DWORD*)(a1 + 5788), 0);
        GameRoutine_112180_alt1(*(_QWORD*)(a1 + 6104), (__int64)v13);
      }
    }
  LABEL_13:
    *(_DWORD*)(a1 + 5792) = 8;
  }
  v11 = snd_fnd_WeakHandle_get_alt1(*(_QWORD*)(a1 + 6104));
  if (v11 != 0 &&
      (v12 = v11,
       ((*(__int64 (**)(__int64))(*(_QWORD*)(v11 - 5592) + 376LL))(v11 - 5592) &
        1) != 0)) {
    *(float*)(a1 + 5936) =
        (*(float (**)(__int64))(*(_QWORD*)(v12 - 5592) + 520LL))(v12 - 5592);
  }
  else if (*(float*)(*(_QWORD*)(a1 + 5648) + 256LL) < 0x0.0p+0f ||
           snd_Param_isEnvelopeReleased_alt1(a1 + 40) ||
           snd_Param_isEnvelopeFading_alt1(a1 + 40) ||
           snd_Param_isEnvelopeEnded_alt1(a1 + 40)) {
    (*(void (**)(__int64))(*(_QWORD*)a1 + 264LL))(a1);
  }
  else {
    *(_DWORD*)(a1 + 5792) = 10;
  }
}

void SeqVoice_12a340(__int64 a1)
{
  int v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  float v14;
  __int64 v15;
  int v16;
  __int64 v17;
  float v18;
  float v19;
  __int64 v20;
  __int64 v21;
  float v22;
  __int64 v23;
  float* v24;
  float v25;
  float v26;
  __int64 v27;
  float v28;
  float v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  char v36;
  __int64 v37;
  __int64 v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43[4];
  float v44;
  float v45;

  v1 = *(_DWORD*)(a1 + 5792);
  if (v1 != 8) {
    if (v1 != 6) {
      return;
    }
    if (!snd_Param_isEnvelopeReleased_alt1(a1 + 40) &&
        !snd_Param_isEnvelopeFading_alt1(a1 + 40) &&
        !snd_Param_isEnvelopeEnded_alt1(a1 + 40)) {
      v3 = *(_QWORD*)(a1 + 6096);
      *(_DWORD*)(a1 + 5788) = 0;
      if (*(int*)(v3 + 24) >= 1) {
        v4 = 0;
        v5 = 0;
        do {
          SeqVoice_1305a0_alt1(
              (void*)((__int64)v43), a1, v5,
              *(_QWORD*)(*(_QWORD*)(a1 + 6088) + 680LL) +
                  664LL * *(unsigned __int8*)(*(_QWORD*)v3 + v5),
              *(_QWORD*)(v3 + 48) +
                  104LL * *(unsigned __int8*)(*(_QWORD*)v3 + v5),
              &v45, 0);
          GameRoutine_112180_alt1(**(_QWORD**)(a1 + 6104) + v4, (__int64)v43);
          if (v45 > *(float*)(a1 + 5788)) {
            *(float*)(a1 + 5788) = v45;
          }
          v3 = *(_QWORD*)(a1 + 6096);
          ++v5;
          v4 += 16;
        } while (v5 < *(int*)(v3 + 24));
      }
    }
    *(_DWORD*)(a1 + 5792) = 8;
  }
  if (*(float*)(a1 + 5788) > 0x0.0p+0f) {
    v6 = snd_fnd_WeakHandle_get_alt1(a1 + 5848);
    if (v6 != 0) {
      v7 = *(_DWORD*)(*(_QWORD*)(a1 + 6096) + 24LL);
      v8 = (unsigned int)(v7 - 1);
      if (v7 > 1) {
        v9 = *(_QWORD*)(a1 + 32);
        v10 = v6;
        v11 = (unsigned int)X8CALL_X0(
            _QWORD*, (*(__attribute__((swiftcall)) void (**)(
                         PSEUDO_X8, _QWORD))(**(_QWORD**)(v6 + 32) + 16LL))(
                         (void*)*(_QWORD**)(v6 + 32), *(_QWORD*)(v6 + 32)));
        Manager_1181f0((void*)((__int64)v43), v9, v11);
        v12 = snd_fnd_WeakHandle_get_alt1((__int64)v43);
        if (v12 != 0) {
          v13 = v12 - 5592;
        }
        else {
          v13 = 0;
        }
        (*(void (**)(__int64, float*, float*, float*))(
            *(_QWORD*)(v13 + 40) + 1032LL))(v13 + 40, &v45, &v44, &v42);
        (*(void (**)(__int64, float*, float*, float*))(
            *(_QWORD*)(v10 - 5592) + 88LL))(v10 - 5592, v43, &v41, &v40);
        v14 = snd_fnd_calcDistance_fec30(v45, v44, v42, v43[0], v41, v40);
        v15 = 16LL * (unsigned int)(v7 - 1);
        v16 = 2;
        v17 = 0;
        v18 = (float)(*(float*)(a1 + 5788) / (float)(unsigned int)v8) *
              0x1.0000000000000p-1f;
        v19 = v18;
        while (v14 >= v19) {
          v20 = snd_fnd_WeakHandle_get_alt1(**(_QWORD**)(a1 + 6104) + v17);
          if (v20 != 0) {
            (*(void (**)(__int64, double))(*(_QWORD*)(v20 - 5552) + 176LL))(
                v20 - 5552, 0x0.0p+0);
          }
          if (v15 - 16 == v17) {
            v21 =
                snd_fnd_WeakHandle_get_alt1(**(_QWORD**)(a1 + 6104) + 16 * v8);
            if (v21 != 0) {
              (*(void (**)(__int64, float))(*(_QWORD*)(v21 - 5552) + 176LL))(
                  v21 - 5552, 0x1.0000000000000p+0f);
            }
          }
          v19 = v18 + v19;
          ++v16;
          v17 += 16;
          if (v15 == v17) {
            goto LABEL_45;
          }
        }
        v22 = (float)(v19 - v14) / v18;
        v23 = snd_fnd_WeakHandle_get_alt1(**(_QWORD**)(a1 + 6104) + v17);
        v24 = (float*)GameData_212c190;
        if (v23 == 0) {
        LABEL_33:
          v27 = snd_fnd_WeakHandle_get_alt1(**(_QWORD**)(a1 + 6104) + v17 + 16);
          if (v27 == 0) {
            goto LABEL_40;
          }
          v28 =
              (float)((float)((float)((float)(0x1.0000000000000p+0f - v22) *
                                      0x1.6800000000000p+6f) *
                              0x1.921fb60000000p+1f) /
                      0x1.6800000000000p+7f) +
              (float)(roundf(
                          (float)((float)((float)((float)(0x1.0000000000000p+0f -
                                                          v22) *
                                                  0x1.6800000000000p+6f) *
                                          0x1.921fb60000000p+1f) /
                                  0x1.6800000000000p+7f) *
                          0x1.45f3060000000p-3f) *
                      -0x1.921fb60000000p+2f);
          if (v28 <= 0x1.921fb60000000p+0f) {
            if (v28 >= -0x1.921fb60000000p+0f) {
            LABEL_39:
              (*(void (**)(__int64, float))(*(_QWORD*)(v27 - 5552) + 176LL))(
                  v27 - 5552,
                  v28 *
                      (float)((float)((float)-(
                                          float)(*(float*)((char*)((
                                                               __int128*)0x10LL) +
                                                           (_QWORD)v24) -
                                                 (float)((float)(*(float*)((char*)((
                                                                               _UNKNOWN**)0x8LL) +
                                                                           (_QWORD)
                                                                               v24 +
                                                                           4) +
                                                                 (float)((float)-(
                                                                             float)(*(float*)((char*)((
                                                                                                  _UNKNOWN**)0x8LL) +
                                                                                              (_QWORD)
                                                                                                  v24) -
                                                                                    (float)((float)(v24[1] -
                                                                                                    (float)(*v24 *
                                                                                                            (float)(v28 *
                                                                                                                    v28))) *
                                                                                            (float)(v28 *
                                                                                                    v28))) *
                                                                         (float)(v28 *
                                                                                 v28))) *
                                                         (float)(v28 * v28))) *
                                      (float)(v28 * v28)) +
                              0x1.0000000000000p+0f));
            LABEL_40:
              if (v7 > v16) {
                v30 = v7 - v16;
                v31 = v17 + 32;
                do {
                  v32 = snd_fnd_WeakHandle_get_alt1(**(_QWORD**)(a1 + 6104) +
                                                    v31);
                  if (v32 != 0) {
                    (*(void (**)(__int64, double))(
                        *(_QWORD*)(v32 - 5552) + 176LL))(v32 - 5552, 0x0.0p+0);
                  }
                  v31 += 16;
                  --v30;
                } while (v30 != 0);
              }
              goto LABEL_45;
            }
            v29 = -0x1.921fb60000000p+1f;
          }
          else {
            v29 = 0x1.921fb60000000p+1f;
          }
          v28 = v29 - v28;
          goto LABEL_39;
        }
        v25 = (float)((float)((float)(v22 * 0x1.6800000000000p+6f) *
                              0x1.921fb60000000p+1f) /
                      0x1.6800000000000p+7f) +
              (float)(roundf(
                          (float)((float)((float)(v22 * 0x1.6800000000000p+6f) *
                                          0x1.921fb60000000p+1f) /
                                  0x1.6800000000000p+7f) *
                          0x1.45f3060000000p-3f) *
                      -0x1.921fb60000000p+2f);
        if (v25 <= 0x1.921fb60000000p+0f) {
          if (v25 >= -0x1.921fb60000000p+0f) {
          LABEL_32:
            (*(void (**)(__int64, float))(*(_QWORD*)(v23 - 5552) + 176LL))(
                v23 - 5552,
                v25 *
                    (float)((float)((float)-(
                                        float)(*(float*)((char*)((
                                                             __int128*)0x10LL) +
                                                         (_QWORD)
                                                             GameData_212c190) -
                                               (float)((float)(*(float*)((char*)((
                                                                             _UNKNOWN**)0x8LL) +
                                                                         (_QWORD)
                                                                             GameData_212c190 +
                                                                         4) +
                                                               (float)((float)-(
                                                                           float)(*(float*)((char*)((
                                                                                                _UNKNOWN**)0x8LL) +
                                                                                            (_QWORD)
                                                                                                GameData_212c190) -
                                                                                  (float)((float)(*((float*)
                                                                                                        GameData_212c190 +
                                                                                                    1) -
                                                                                                  (float)(*(float*)
                                                                                                              GameData_212c190 *
                                                                                                          (float)(v25 *
                                                                                                                  v25))) *
                                                                                          (float)(v25 *
                                                                                                  v25))) *
                                                                       (float)(v25 *
                                                                               v25))) *
                                                       (float)(v25 * v25))) *
                                    (float)(v25 * v25)) +
                            0x1.0000000000000p+0f));
            goto LABEL_33;
          }
          v26 = -0x1.921fb60000000p+1f;
        }
        else {
          v26 = 0x1.921fb60000000p+1f;
        }
        v25 = v26 - v25;
        goto LABEL_32;
      }
    }
  }
LABEL_45:
  v33 = *(_QWORD*)(a1 + 6096);
  *(_DWORD*)(a1 + 5936) = 0;
  if (*(int*)(v33 + 24) < 1) {
    goto LABEL_57;
  }
  v34 = 0;
  v35 = 0;
  v36 = 0;
  do {
    v37 = snd_fnd_WeakHandle_get_alt1(**(_QWORD**)(a1 + 6104) + v34);
    if (v37 != 0) {
      v38 = v37;
      if (((*(__int64 (**)(__int64))(*(_QWORD*)(v37 - 5592) + 376LL))(v37 -
                                                                      5592) &
           1) != 0) {
        v39 = *(float*)(a1 + 5936);
        if (v39 < (*(float (**)(__int64))(*(_QWORD*)(v38 - 5592) + 520LL))(
                      v38 - 5592)) {
          *(float*)(a1 + 5936) = (*(float (**)(__int64))(
              *(_QWORD*)(v38 - 5592) + 520LL))(v38 - 5592);
        }
        v36 = 1;
      }
    }
    ++v35;
    v34 += 16;
  } while (v35 < *(int*)(*(_QWORD*)(a1 + 6096) + 24LL));
  if ((v36 & 1) == 0) {
  LABEL_57:
    if (*(float*)(*(_QWORD*)(a1 + 5648) + 256LL) < 0x0.0p+0f ||
        snd_Param_isEnvelopeReleased_alt1(a1 + 40) ||
        snd_Param_isEnvelopeFading_alt1(a1 + 40) ||
        snd_Param_isEnvelopeEnded_alt1(a1 + 40)) {
      (*(void (**)(__int64))(*(_QWORD*)a1 + 264LL))(a1);
    }
    else {
      *(_DWORD*)(a1 + 5792) = 10;
    }
  }
}

void SeqVoice_12a920(__int64 a1)
{

#pragma clang fp contract(off)
  int v1;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  float v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  float v15;
  float v16;
  _DWORD* v17;
  float v18;
  __int64 v19;
  unsigned __int8* v20;
  float* v21;
  float* v22;
  __int64 v23;
  __int64 v24;
  float v25;
  float v26;
  float v27;
  float v28[4];
  float v29;
  float v30;

  v1 = *(_DWORD*)(a1 + 5792);
  if (v1 != 8) {
    if (v1 != 6) {
      return;
    }
    if (!snd_Param_isEnvelopeReleased_alt1(a1 + 40) &&
        !snd_Param_isEnvelopeFading_alt1(a1 + 40) &&
        !snd_Param_isEnvelopeEnded_alt1(a1 + 40)) {
      SeqVoice_1305a0_alt1((void*)((__int64)v28), a1, 0,
                           *(_QWORD*)(*(_QWORD*)(a1 + 6088) + 680LL) +
                               664LL * ***(unsigned __int8***)(a1 + 6096),
                           *(_QWORD*)(*(_QWORD*)(a1 + 6096) + 48LL) +
                               104LL * ***(unsigned __int8***)(a1 + 6096),
                           (_DWORD*)(a1 + 5788), 0);
      GameRoutine_112180_alt1(*(_QWORD*)(a1 + 6104), (__int64)v28);
    }
    *(_DWORD*)(a1 + 5792) = 8;
  }
  if (*(float*)(a1 + 5788) > 0x0.0p+0f) {
    v3 = snd_fnd_WeakHandle_get_alt1(a1 + 5848);
    if (v3 != 0) {
      v4 = *(_DWORD*)(*(_QWORD*)(a1 + 6096) + 24LL);
      if (v4 >= 2) {
        v5 = v3;
        v6 = snd_fnd_WeakHandle_get_alt1(*(_QWORD*)(a1 + 6104));
        v7 = *(_QWORD*)(a1 + 32);
        v8 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v5 + 32) + 16LL))(
            *(_QWORD*)(v5 + 32));
        Manager_1181f0((void*)((__int64)v28), v7, v8);
        v9 = snd_fnd_WeakHandle_get_alt1((__int64)v28);
        if (v9 != 0) {
          v10 = v9 - 5592;
        }
        else {
          v10 = 0;
        }
        (*(void (**)(__int64, float*, float*, float*))(
            *(_QWORD*)(v10 + 40) + 1032LL))(v10 + 40, &v30, &v29, &v27);
        (*(void (**)(__int64, float*, float*, float*))(
            *(_QWORD*)(v5 - 5592) + 88LL))(v5 - 5592, v28, &v26, &v25);
        v11 = snd_fnd_calcDistance_fec30(v30, v29, v27, v28[0], v26, v25);
        v12 = (unsigned int)(v4 - 1);
        v13 = 0;
        if (v6 != 0) {
          v14 = v6 - 5592;
        }
        else {
          v14 = 0;
        }
        v15 = (float)(*(float*)(a1 + 5788) / (float)(unsigned int)v12) *
              0x1.0000000000000p-1f;
        v16 = v15;
        while (v11 >= v16) {
          if (v12 - 1 == v13) {
            v17 =
                (_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 6088) + 680LL) +
                          664LL * *(unsigned __int8*)(**(_QWORD**)(a1 + 6096) +
                                                      v12));
            *(_DWORD*)(*(_QWORD*)(v14 + 5648) + 128LL) = v17[32];
            *(_DWORD*)(*(_QWORD*)(v14 + 5648) + 232LL) = v17[58];
            *(_DWORD*)(*(_QWORD*)(v14 + 5648) + 368LL) = v17[92];
            *(_DWORD*)(*(_QWORD*)(v14 + 5648) + 376LL) = v17[94];
            *(_DWORD*)(*(_QWORD*)(v14 + 5648) + 384LL) = v17[96];
          }
          v16 = v15 + v16;
          if (v12 == ++v13) {
            goto LABEL_23;
          }
        }
        v18 = (float)(v16 - v11) / v15;
        v19 = *(_QWORD*)(*(_QWORD*)(a1 + 6088) + 680LL);
        v20 = (unsigned __int8*)(**(_QWORD**)(a1 + 6096) + v13);
        v21 = (float*)(v19 + 664LL * *v20);
        v22 = (float*)(v19 + 664LL * v20[1]);
        *(float*)(*(_QWORD*)(v14 + 5648) + 128LL) =
            snd_fnd_calcCurve(0, v21[32], v22[32], v18, 0x1.0000000000000p+0f);
        *(float*)(*(_QWORD*)(v14 + 5648) + 232LL) =
            snd_fnd_calcCurve(0, v21[58], v22[58], v18, 0x1.0000000000000p+0f);
        *(float*)(*(_QWORD*)(v14 + 5648) + 368LL) =
            snd_fnd_calcCurve(0, v21[92], v22[92], v18, 0x1.0000000000000p+0f);
        *(float*)(*(_QWORD*)(v14 + 5648) + 376LL) =
            snd_fnd_calcCurve(0, v21[94], v22[94], v18, 0x1.0000000000000p+0f);
        *(float*)(*(_QWORD*)(v14 + 5648) + 384LL) =
            snd_fnd_calcCurve(0, v21[96], v22[96], v18, 0x1.0000000000000p+0f);
      }
    }
  }
LABEL_23:
  v23 = snd_fnd_WeakHandle_get_alt1(*(_QWORD*)(a1 + 6104));
  if (v23 != 0 &&
      (v24 = v23,
       ((*(__int64 (**)(__int64))(*(_QWORD*)(v23 - 5592) + 376LL))(v23 - 5592) &
        1) != 0)) {
    *(float*)(a1 + 5936) =
        (*(float (**)(__int64))(*(_QWORD*)(v24 - 5592) + 520LL))(v24 - 5592);
  }
  else if (snd_Param_isEnvelopeReleased_alt1(a1 + 40) ||
           snd_Param_isEnvelopeFading_alt1(a1 + 40) ||
           snd_Param_isEnvelopeEnded_alt1(a1 + 40)) {
    (*(void (**)(__int64))(*(_QWORD*)a1 + 264LL))(a1);
  }
  else {
    *(_DWORD*)(a1 + 5792) = 10;
  }
}

__int64 SeqVoice_12b0e0(__int64 result)
{

#pragma clang fp contract(off)
  int v1;
  __int64 v2;
  unsigned __int8** v3;
  __int64 v4;
  __int64* v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  bool v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  bool v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  bool v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64* v29;
  long double v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64 v37;
  _BYTE v38[16];
  struct {
    __int64 v39[2];
    __int64 v40;
    int v41;
    int v42;
  } v39_;
  struct {
    __int64 v43[2];
    __int64 v44;
    int v45;
    int v46;
  } v43_;
  struct {
    __int64 v47[2];
    __int64 v48;
    int v49;
    int v50;
    char gap136_[16];
    int v51;
    char gap156_[28];
    char v52;
    char gap185_[15];
    __int64 v53;
    char gap208_[264];
    char v54;
    char gap473_[15];
    __int64 v55;
    char gap496_[8];
    char v56;
    char gap505_[15];
    __int64 v57;
    char gap528_[8];
    char v58;
    char gap537_[15];
    __int64 v59;
  } v47_;
  float v60;

  v1 = *(_DWORD*)(result + 5792);
  v2 = result;
  if (v1 == 8) {
    v9 = snd_fnd_WeakHandle_get_alt1(*(_QWORD*)(result + 6104));
    if (v9 == 0 || ((result = (*(__int64 (**)(__int64))(*(_QWORD*)(v9 - 5592) +
                                                        376LL))(v9 - 5592)) &
                    1) == 0) {
      if (*(float*)(*(_QWORD*)(v2 + 5648) + 256LL) < 0x0.0p+0f) {
        return (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 264LL))(v2);
      }
      if (snd_Param_isEnvelopeReleased_alt1(v2 + 40)) {
        return (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 264LL))(v2);
      }
      if (snd_Param_isEnvelopeFading_alt1(v2 + 40)) {
        return (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 264LL))(v2);
      }
      result = snd_Param_isEnvelopeEnded_alt1(v2 + 40);
      if ((result & 1) != 0) {
        return (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 264LL))(v2);
      }
      v10 = 10;
      goto LABEL_75;
    }
    return result;
  }
  if (v1 != 7) {
    if (v1 != 6) {
      return result;
    }
    if (snd_Param_isEnvelopeReleased_alt1(result + 40) ||
        snd_Param_isEnvelopeFading_alt1(v2 + 40) ||
        snd_Param_isEnvelopeEnded_alt1(v2 + 40)) {
      goto LABEL_68;
    }
    v3 = *(unsigned __int8***)(v2 + 6096);
    *(_DWORD*)(v2 + 5788) = 0;
    v4 = *(_QWORD*)(*(_QWORD*)(v2 + 6088) + 680LL) + 664LL * **v3;
    GameRoutine_f7640_alt1((__int64)v39_.v39);
    Crc32List_f05e0((__int64)v39_.v39, (unsigned __int8*)v4);
    GameRoutine_f1b80_alt1(v39_.v39, *(__int64**)(v2 + 5648));
    v5 = (__int64*)(v4 + 80);
    v47_.v51 = 1065353216;
    if (v43_.v43 != (__int64*)(v4 + 80)) {
      v6 = *(unsigned __int8*)v5;
      if ((v43_.v43[0] & 1) != 0) {
        v11 = (v6 & 1) == 0;
        v12 = v6 >> 1;
        if (v11) {
          v13 = v4 + 81;
        }
        else {
          v13 = *(_QWORD*)(v4 + 96);
        }
        if (v11) {
          v14 = v12;
        }
        else {
          v14 = *(_QWORD*)(v4 + 88);
        }
        GameRoutine_a3a260_alt1(v43_.v43, v13, v14);
      }
      else if ((v6 & 1) != 0) {
        GameRoutine_a3a3a0_alt1(v43_.v43, *(_QWORD*)(v4 + 96),
                                *(_QWORD*)(v4 + 88));
      }
      else {
        v7 = *v5;
        v8 = *(_QWORD*)(v4 + 96);
        v43_.v43[1] = *(_QWORD*)(v4 + 88);
        v43_.v44 = v8;
        v43_.v43[0] = v7;
      }
    }
    v43_.v45 = *(_DWORD*)(v4 + 104);
    v43_.v46 = *(_DWORD*)(v4 + 108);
    if (v39_.v39 != v5) {
      v15 = *(unsigned __int8*)v5;
      if ((v39_.v39[0] & 1) != 0) {
        v18 = (v15 & 1) == 0;
        v19 = v15 >> 1;
        if (v18) {
          v20 = v4 + 81;
        }
        else {
          v20 = *(_QWORD*)(v4 + 96);
        }
        if (v18) {
          v21 = v19;
        }
        else {
          v21 = *(_QWORD*)(v4 + 88);
        }
        GameRoutine_a3a260_alt1(v39_.v39, v20, v21);
      }
      else if ((v15 & 1) != 0) {
        GameRoutine_a3a3a0_alt1(v39_.v39, *(_QWORD*)(v4 + 96),
                                *(_QWORD*)(v4 + 88));
      }
      else {
        v16 = *v5;
        v17 = *(_QWORD*)(v4 + 96);
        v39_.v39[1] = *(_QWORD*)(v4 + 88);
        v39_.v40 = v17;
        v39_.v39[0] = v16;
      }
    }
    v39_.v41 = *(_DWORD*)(v4 + 104);
    v39_.v42 = *(_DWORD*)(v4 + 108);
    if (v39_.v39 != (__int64*)v4) {
      v22 = *(unsigned __int8*)v5;
      if ((v47_.v47[0] & 1) != 0) {
        v25 = (v22 & 1) == 0;
        v26 = v22 >> 1;
        if (v25) {
          v27 = v4 + 81;
        }
        else {
          v27 = *(_QWORD*)(v4 + 96);
        }
        if (v25) {
          v28 = v26;
        }
        else {
          v28 = *(_QWORD*)(v4 + 88);
        }
        GameRoutine_a3a260_alt1(v47_.v47, v27, v28);
      }
      else if ((v22 & 1) != 0) {
        GameRoutine_a3a3a0_alt1(v47_.v47, *(_QWORD*)(v4 + 96),
                                *(_QWORD*)(v4 + 88));
      }
      else {
        v23 = *v5;
        v24 = *(_QWORD*)(v4 + 96);
        v47_.v47[1] = *(_QWORD*)(v4 + 88);
        v47_.v48 = v24;
        v47_.v47[0] = v23;
      }
    }
    v47_.v49 = *(_DWORD*)(v4 + 104);
    v47_.v50 = *(_DWORD*)(v4 + 108);
    SeqVoice_130790((void*)((__int64)v38), v2, 0, (__int64)v39_.v39,
                    *(_QWORD*)(*(_QWORD*)(v2 + 6096) + 48LL) +
                        104LL * ***(unsigned __int8***)(v2 + 6096),
                    &v60, 1);
    GameRoutine_112180_alt1(*(_QWORD*)(v2 + 6104), (__int64)v38);
    v29 = GameManager_a223a0_alt1(*(_QWORD*)(v2 + 6104));
    if (v29 != nullptr) {
      v31 = (__int64)v29;
      if (((*(__int64 (**)(__int64*))(*v29 + 376))(v29) & 1) != 0) {
        v32 = *(_QWORD*)(v2 + 6096);
        LODWORD(v33) = *(_DWORD*)(v32 + 24);
        if ((int)v33 > 1) {
          v34 = 1;
          do {
            WaveMultiVoice_182ed0_alt1(
                v31, *(_QWORD*)(*(_QWORD*)(v2 + 6088) + 680LL) +
                         664LL * *(unsigned __int8*)(*(_QWORD*)v32 + v34) +
                         104);
            v32 = *(_QWORD*)(v2 + 6096);
            ++v34;
            v33 = *(int*)(v32 + 24);
          } while (v34 < v33);
        }
        if ((int)v33 >= 1) {
          v35 = 0;
          do {
            WaveMultiVoice_183280_alt1(
                v31, v35,
                *(_QWORD*)(*(_QWORD*)(v2 + 6088) + 680LL) +
                    664LL * *(unsigned __int8*)(*(_QWORD*)v32 + v35));
            v32 = *(_QWORD*)(v2 + 6096);
            ++v35;
          } while (v35 < *(int*)(v32 + 24));
        }
      }
    }
    *(float*)&v30 = v60;
    if (v60 > *(float*)(v2 + 5788)) {
      *(float*)(v2 + 5788) = v60;
      v36 = snd_g_memory_ptr[0];
      if ((v47_.v58 & 1) == 0) {
      LABEL_61:
        if ((v47_.v56 & 1) == 0) {
          goto LABEL_62;
        }
        goto LABEL_79;
      }
    }
    else {
      v36 = snd_g_memory_ptr[0];
      if ((v47_.v58 & 1) == 0) {
        goto LABEL_61;
      }
    }
    (*(void (**)(__int64, __int64, long double))(*(_QWORD*)*v36 + 24LL))(
        *v36, v47_.v59, v30);
    if ((v47_.v56 & 1) == 0) {
    LABEL_62:
      if ((v47_.v54 & 1) == 0) {
        goto LABEL_63;
      }
      goto LABEL_80;
    }
  LABEL_79:
    (*(void (**)(__int64, __int64, long double))(*(_QWORD*)*v36 + 24LL))(
        *v36, v47_.v57, v30);
    if ((v47_.v54 & 1) == 0) {
    LABEL_63:
      if ((v47_.v52 & 1) == 0) {
        goto LABEL_64;
      }
      goto LABEL_81;
    }
  LABEL_80:
    (*(void (**)(__int64, __int64, long double))(*(_QWORD*)*v36 + 24LL))(
        *v36, v47_.v55, v30);
    if ((v47_.v52 & 1) == 0) {
    LABEL_64:
      if ((v47_.v47[0] & 1) == 0) {
        goto LABEL_65;
      }
      goto LABEL_82;
    }
  LABEL_81:
    (*(void (**)(__int64, __int64, long double))(*(_QWORD*)*v36 + 24LL))(
        *v36, v47_.v53, v30);
    if ((v47_.v47[0] & 1) == 0) {
    LABEL_65:
      if ((v43_.v43[0] & 1) == 0) {
        goto LABEL_66;
      }
      goto LABEL_83;
    }
  LABEL_82:
    (*(void (**)(__int64, __int64, long double))(*(_QWORD*)*v36 + 24LL))(
        *v36, v47_.v48, v30);
    if ((v43_.v43[0] & 1) == 0) {
    LABEL_66:
      if ((v39_.v39[0] & 1) == 0) {
      LABEL_68:
        *(_DWORD*)(v2 + 5792) = 7;
        goto LABEL_69;
      }
    LABEL_67:
      (*(void (**)(__int64, __int64, long double))(*(_QWORD*)*v36 + 24LL))(
          *v36, v39_.v40, v30);
      goto LABEL_68;
    }
  LABEL_83:
    (*(void (**)(__int64, __int64, long double))(*(_QWORD*)*v36 + 24LL))(
        *v36, v43_.v44, v30);
    if ((v39_.v39[0] & 1) == 0) {
      goto LABEL_68;
    }
    goto LABEL_67;
  }
LABEL_69:
  result = (__int64)GameManager_a223a0_alt1(*(_QWORD*)(v2 + 6104));
  if (result == 0) {
  LABEL_74:
    v10 = 8;
  LABEL_75:
    *(_DWORD*)(v2 + 5792) = v10;
    return result;
  }
  v37 = result;
  result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 376LL))(result);
  if ((result & 1) != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v37 + 184LL))(v37);
    if ((result & 1) != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 216LL))(v2);
      if ((result & 1) == 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v37 + 208LL))(v37);
        goto LABEL_74;
      }
    }
  }
  return result;
}

__int64 SeqVoice_12b600(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  float v4;
  __int64* v5;
  int v6;
  bool v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  bool v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  float v16;
  _QWORD v17[27];

  if (*(_DWORD*)(result + 5792) == 6) {
    v17[25] = v1;
    v17[26] = v2;
    v3 = result;
    if ((snd_Param_isEnvelopeReleased(result + 40) & 1) == 0 &&
        (snd_Param_isEnvelopeFading(v3 + 40) & 1) == 0 &&
        (snd_Param_isEnvelopeEnded(v3 + 40) & 1) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v3 + 40) + 184LL))(v3 + 40);
      v5 = *(__int64**)(v3 + 6096);
      v6 = *((_DWORD*)v5 + 6);
      v7 = __OFSUB__(v6, 1);
      v8 = (unsigned int)(v6 - 1);
      if (((v8 & 0x80000000) != 0LL) == v7) {
        v9 = *v5;
        v10 = 0;
        do {
          v11 = *(float*)(*(_QWORD*)(*(_QWORD*)(v3 + 6088) + 680LL) +
                          664LL * *(unsigned __int8*)(v9 + v10) + 116) >= v4 ||
                v10 >= v8;
          ++v10;
        } while (!v11);
        v12 = *(_QWORD*)(v3 + 6104);
        if (*(_DWORD*)(v12 + 16) + 1 != (_DWORD)v10) {
          v13 = snd_fnd_WeakHandle_get(v12, v4);
          if (v13 != 0) {
            v14 = v13;
            snd_Fade_Fade_10c910(v17, 100);
            (*(void (**)(__int64, _QWORD*, _QWORD, double))(
                *(_QWORD*)(v14 - 5592) + 248LL))(v14 - 5592, v17, 0, 0.0);
            snd_Fade_Destroy_Fade(v17);
          }
          *(_DWORD*)(*(_QWORD*)(v3 + 6104) + 16LL) = v10 - 1;
          SeqVoice_1305a0_alt2((void*)(v17), v3);
          GameRoutine_112180(*(_QWORD*)(v3 + 6104), v17);
          v4 = v16;
          *(float*)(v3 + 5788) = v16;
        }
      }
    }
    v15 = snd_fnd_WeakHandle_get(*(_QWORD*)(v3 + 6104), v4);
    if (v15 == 0 || ((result = (*(__int64 (**)(__int64))(
                          *(_QWORD*)(v15 - 5592) + 376LL))(v15 - 5592)) &
                     1) == 0) {
      if (*(float*)(*(_QWORD*)(v3 + 5648) + 256LL) < 0.0) {
        return (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 264LL))(v3);
      }
      if ((snd_Param_isEnvelopeReleased(v3 + 40) & 1) != 0) {
        return (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 264LL))(v3);
      }
      if ((snd_Param_isEnvelopeFading(v3 + 40) & 1) != 0) {
        return (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 264LL))(v3);
      }
      result = snd_Param_isEnvelopeEnded(v3 + 40);
      if ((result & 1) != 0) {
        return (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 264LL))(v3);
      }
      else {
        *(_DWORD*)(v3 + 5792) = 10;
      }
    }
  }
  return result;
}

__int64 SeqVoice_12dce0(_QWORD* a1, const char* a2)
{
  __int64 v3;
  const char* v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  char* v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  const char* v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  const char* v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  char* v28;
  __int64 v29;
  const char* v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  char* v37;
  __int64 v38;
  const char* v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  struct {
    __int64 v43;
    __int64 v44;
    char* v45;
  } v43_;

  GameRoutine_190020_alt1(&v43_.v43, a2);
  switch (*(_DWORD*)(a1[761] + 8LL)) {
  case 1:
  case 2:
  case 3:
  case 5:
  case 6:
  case 8:
  case 0xB:
  case 0xC:
    v3 = snd_fnd_WeakHandle_get_alt1(a1[763]);
    if (v3 == 0) {
      goto LABEL_55;
    }
    v4 = (const char*)GameRoutine_190240_alt1(v3 + 144);
    v5 = strlen_alt1(v4);
    v6 = (unsigned __int8)v43_.v43 >> 1;
    if ((v43_.v43 & 1) != 0) {
      v6 = v43_.v44;
    }
    if (v5 != v6) {
      goto LABEL_55;
    }
    v7 = v5;
    if (v5 == -1) {
      goto LABEL_70;
    }
    if ((v43_.v43 & 1) != 0) {
      v8 = v43_.v45;
    }
    else {
      v8 = (char*)&v43_.v43 + 1;
    }
    v9 = memcmp_alt1((__int64)v8, (__int64)v4, v7) == 0;
    goto LABEL_56;
  case 4:
    if (*(int*)(a1[762] + 24LL) < 1) {
      goto LABEL_55;
    }
    v18 = 0;
    v19 = 0;
    v9 = 0;
    while (1) {
      v20 = snd_fnd_WeakHandle_get_alt1(*(_QWORD*)a1[763] + v18);
      if (v20 != 0) {
        v21 = (const char*)GameRoutine_190240_alt1(v20 + 144);
        v22 = strlen_alt1(v21);
        v23 = (unsigned __int8)v43_.v43 >> 1;
        if ((v43_.v43 & 1) != 0) {
          v23 = v43_.v44;
        }
        if (v22 == v23) {
          v24 = v22;
          if (v22 == -1) {
            goto LABEL_70;
          }
          if ((v43_.v43 & 1) != 0) {
            v25 = v43_.v45;
          }
          else {
            v25 = (char*)&v43_.v43 + 1;
          }
          if (memcmp_alt1((__int64)v25, (__int64)v21, v24) == 0) {
            ++v9;
          }
        }
      }
      ++v19;
      v18 += 16;
      if (v19 >= *(int*)(a1[762] + 24LL)) {
        goto LABEL_56;
      }
    }
  case 7:
    if (*(int*)(a1[762] + 24LL) < 1) {
      goto LABEL_55;
    }
    v26 = 0;
    v27 = 0;
    v9 = 0;
    while (1) {
      v29 = snd_fnd_WeakHandle_get_alt1(*(_QWORD*)a1[763] + v26);
      if (v29 != 0) {
        v30 = (const char*)GameRoutine_190240_alt1(v29 + 144);
        v31 = strlen_alt1(v30);
        v32 = (unsigned __int8)v43_.v43 >> 1;
        if ((v43_.v43 & 1) != 0) {
          v32 = v43_.v44;
        }
        if (v31 == v32) {
          v33 = v31;
          if (v31 == -1) {
            goto LABEL_70;
          }
          if ((v43_.v43 & 1) != 0) {
            v28 = v43_.v45;
          }
          else {
            v28 = (char*)&v43_.v43 + 1;
          }
          if (memcmp_alt1((__int64)v28, (__int64)v30, v33) == 0) {
            ++v9;
          }
        }
      }
      ++v27;
      v26 += 16;
      if (v27 >= *(int*)(a1[762] + 24LL)) {
        goto LABEL_56;
      }
    }
  case 9:
    if (*(int*)(a1[762] + 24LL) < 1) {
      goto LABEL_55;
    }
    v34 = 0;
    v35 = 0;
    v9 = 0;
    while (1) {
      v38 = snd_fnd_WeakHandle_get_alt1(*(_QWORD*)a1[763] + v34);
      if (v38 != 0) {
        v39 = (const char*)GameRoutine_190240_alt1(v38 + 144);
        v40 = strlen_alt1(v39);
        v41 = (unsigned __int8)v43_.v43 >> 1;
        if ((v43_.v43 & 1) != 0) {
          v41 = v43_.v44;
        }
        if (v40 == v41) {
          v42 = v40;
          if (v40 == -1) {
            goto LABEL_70;
          }
          if ((v43_.v43 & 1) != 0) {
            v37 = v43_.v45;
          }
          else {
            v37 = (char*)&v43_.v43 + 1;
          }
          if (memcmp_alt1((__int64)v37, (__int64)v39, v42) == 0) {
            ++v9;
          }
        }
      }
      ++v35;
      v34 += 16;
      if (v35 >= *(int*)(a1[762] + 24LL)) {
        goto LABEL_56;
      }
    }
  case 0xA:
    if (*(int*)(a1[762] + 24LL) < 1) {
      goto LABEL_55;
    }
    v10 = 0;
    v11 = 0;
    v9 = 0;
    do {
      v12 = snd_fnd_WeakHandle_get_alt1(*(_QWORD*)a1[763] + v10);
      if (v12 != 0) {
        v13 = (const char*)GameRoutine_190240_alt1(v12 + 144);
        v14 = strlen_alt1(v13);
        v15 = (unsigned __int8)v43_.v43 >> 1;
        if ((v43_.v43 & 1) != 0) {
          v15 = v43_.v44;
        }
        if (v14 == v15) {
          v16 = v14;
          if (v14 == -1) {
          LABEL_70:
            snd_a36650();
          }
          if ((v43_.v43 & 1) != 0) {
            v17 = v43_.v45;
          }
          else {
            v17 = (char*)&v43_.v43 + 1;
          }
          if (memcmp_alt1((__int64)v17, (__int64)v13, v16) == 0) {
            ++v9;
          }
        }
      }
      ++v11;
      v10 += 16;
    } while (v11 < *(int*)(a1[762] + 24LL));
  LABEL_56:
    if ((v43_.v43 & 1) != 0) {
      (*(void (**)(_QWORD, char*))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
          *snd_g_memory_ptr[0], v43_.v45);
    }
    return v9;
  default:
  LABEL_55:
    v9 = 0;
    goto LABEL_56;
  }
}

float SeqVoice_12e0c0(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  float v5;
  float v6;
  _QWORD* v7;
  float v8;
  int v9;
  float v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  float v16;
  __int64 v17;

  nn_os_LockMutex(a1 + 5944);
  v4 = snd_fnd_WeakHandle_get_alt1(a1 + 5848);
  if (v4 != 0) {
    v5 = 0x0.0p+0f;
    if (*(_BYTE*)(v4 + 120) != 1) {
      goto LABEL_30;
    }
  }
  v5 = 0x0.0p+0f;
  if ((*(_BYTE*)(a1 + 5895) & 1) != 0) {
    goto LABEL_30;
  }
  v6 = snd_Param_calcVolume_126a10((float*)(a1 + 40));
  if (snd_Voice_hasFeature13(a1)) {
    v6 = v6 * (*(float (**)(__int64))(*(_QWORD*)(a1 + 40) + 200LL))(a1 + 40);
  }
  v7 = (_QWORD*)snd_g_proxy_ptr[0];
  v8 = v6 * *(float*)(*(_QWORD*)(a1 + 5648) + 128LL);
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)snd_g_proxy_ptr[0] + 280LL))(
           *(_QWORD*)snd_g_proxy_ptr[0]) &
       1) == 0) {
    v9 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v7 + 264LL))(*v7);
    if (v9 == 2) {
      v10 = *(float*)(*(_QWORD*)(a1 + 5648) + 136LL);
      goto LABEL_11;
    }
    if (v9 == 1) {
      v10 = *(float*)(*(_QWORD*)(a1 + 5648) + 132LL);
    LABEL_11:
      v8 = v8 * v10;
    }
  }
  v11 = snd_fnd_WeakHandle_get_alt1(a1 + 5800);
  if (v11 != 0) {
    v12 = v11 - 5592;
  }
  else {
    v12 = 0;
  }
  if (v11 != 0 && v12 != a2) {
    v8 = v8 *
         (*(float (**)(__int64))(*(_QWORD*)(v11 - 5592) + 72LL))(v11 - 5592);
  }
  v13 = snd_fnd_WeakHandle_get_alt1(a1 + 5816);
  if (v13 != 0) {
    v8 = v8 *
         (*(float (**)(__int64))(*(_QWORD*)(v13 - 5592) + 72LL))(v13 - 5592);
  }
  v14 = snd_fnd_WeakHandle_get_alt1(a1 + 5832);
  if (v14 != 0) {
    v8 = v8 *
         (*(float (**)(__int64))(*(_QWORD*)(v14 - 5592) + 72LL))(v14 - 5592);
  }
  v15 = snd_fnd_WeakHandle_get_alt1(a1 + 5864);
  if (v15 != 0) {
    v16 = SeqVoice_12e0c0(v15 - 5592, v12);
    *(float*)(a1 + 6116) = v16;
  }
  else {
    v16 = *(float*)(a1 + 6116);
  }
  v5 = v8 * v16;
  if (snd_Voice_hasFeature7(a1)) {
    v5 = v5 * 0x1.0000000000000p-1f;
  }
  v17 = snd_fnd_WeakHandle_get_alt1(a1 + 5984);
  if (v17 != 0) {
    v5 = v5 *
         (*(float (**)(__int64))(*(_QWORD*)(v17 - 5592) + 536LL))(v17 - 5592);
  }
  *(float*)(a1 + 5520) = v5;
LABEL_30:
  nn_os_UnlockMutex(a1 + 5944);
  return v5;
}

__int64 SeqVoice_Unknown93(__int64 a1)
{
  return GameRoutine_12e0c0(a1 - 40, 0);
}

__attribute__((swiftcall)) void SeqVoice_1305a0(PSEUDO_X8 x8_, __int64 a1,
                                                int a2, _DWORD* a3, __int64 a4,
                                                _DWORD* a5, char a6)
{
  __int64 a7 = (__int64)PSEUDO_X8_VALUE(x8_);
  _BYTE* v9;
  char v12;
  unsigned int v13;
  unsigned int v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  int v20;
  struct {
    __int64 v25;
    int v26;
  } v25_;
  struct {
    _QWORD v27[25];
    __int64 v28;
    unsigned __int64 v29;
    _QWORD v30[3];
  } v27_;
  struct {
    __int64 v31;
    int v32;
  } v31_;

  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w"));
  v9 = (_BYTE*)(a1 + 4096);
  *a5 = 0;
  v31_.v31 = 0;
  v31_.v32 = 0x2000;
  GameRoutine_112180_alt1((__int64)&v31_.v31, a1 + 5800),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w"));
  if (a3[16] != 0 && (v9[2018] & 1) == 0) {
    snd_fnd_WeakHandle_reset_alt1((__int64)&v31_.v31),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  snd_Fade_Fade_10c830_alt1((__int64)&v25_.v25, 0x0.0p+0f),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w"));
  v12 = v9[1788];
  v13 = *(_DWORD*)(a1 + 5920);
  v14 = *(_DWORD*)(a1 + 5924);
  snd_Fade_Fade_10c830_alt1((__int64)v27_.v27, 0x0.0p+0f),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w"));
  v27_.v30[2] = 0;
  v27_.v30[0] = 0;
  v27_.v28 = 0x3F80000000000000LL;
  v27_.v29 = 0x1000100000000LL;
  *(_DWORD*)((char*)v27_.v30 + 7) = 0;
  GameRoutine_10d050((__int64)v27_.v27, (__int64)&v25_.v25),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w"));
  v27_.v28 = 0x3F80000000000000LL;
  BYTE4(v27_.v30[0]) = v12;
  v27_.v29 = __PAIR64__(v14, v13);
  LODWORD(v27_.v30[0]) = 0;
  snd_Fade_Destroy_Fade_alt1(&v25_.v25),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w"));
  v15 = a6 & 1;
  v16 = *(_QWORD*)(a1 + 32);
  v25_.v25 = 0;
  v25_.v26 = 0x2000;
  HIBYTE(v27_.v30[0]) = v15;
  snd_fnd_WeakHandle_set((__int64)&v25_.v25, a1 + 5592),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w"));
  snd_11b6e0((void*)(a7), v16, (__int64)&v31_.v31, (__int64)&GameData_1a9f09e,
             a3, a4, a1 + 5848, (__int64)v27_.v27, (__int64)&v25_.v25),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w"));
  v17 = snd_fnd_WeakHandle_get_alt1(a7),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v17 != 0 &&
      (v18 = v17,
       ((*(__int64 (**)(__int64))(*(_QWORD*)(v17 - 5592) + 376LL))(v17 - 5592) &
        1) != 0)) {
    v19 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 640LL))(a1),
    v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w"));
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)(v18 - 5592) + 632LL))(v18 - 5592,
                                                                    v19),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w"));
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)(v18 - 5592) + 672LL))(
        v18 - 5592, (unsigned __int8)v9[1802]),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w"));
    *(_DWORD*)(v18 + 288) = a2;
    (*(void (**)(__int64))(*(_QWORD*)(v18 - 5592) + 112LL))(v18 - 5592),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  else {
    v20 = *(_DWORD*)(*(_QWORD*)(a1 + 32) + 3108LL);
  }
  *a5 = v20;
  {
    snd_Fade_Destroy_Fade_alt1(v27_.v27),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w"));
    return;
  }
}

__int64 SeqVoice_Unknown16(__int64 a1)
{
  __int64 result;
  _QWORD* v3;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 688LL))(a1);
  if ((result & 1) != 0) {
    result = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)snd_s_target + 248LL))(
        snd_s_target, *(unsigned int*)(a1 + 5768), *(unsigned int*)(a1 + 5772),
        *(_QWORD*)(a1 + 5776));
    if ((result & 1) != 0) {
      v3 = (_QWORD*)GameRoutine_119000(*(_QWORD*)(a1 + 32));
      result = GameRoutine_10ec00(v3, (_DWORD*)(a1 + 5704));
      *(_QWORD*)(a1 + 5672) = result;
      *(_BYTE*)(a1 + 5900) = 1;
    }
  }
  return result;
}

__int64 SeqVoice_Unknown19(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned int v3;
  unsigned int v4;
  const char* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;

  v1 = result + 4096;
  if (*(_DWORD*)(*(_QWORD*)(result + 5648) + 120LL) == 0) {
    v2 = result;
    v3 = (*(__int64 (**)(_QWORD, _QWORD))(*(_QWORD*)*snd_s_target_ptr + 568LL))(
        *snd_s_target_ptr, *(_QWORD*)(result + 5664));
    *(_DWORD*)(v2 + 5784) = v3;
    if (v3 != 0) {
      v4 = v3;
      v5 = (const char*)GameRoutine_190240(v2 + 5680);
      GameRoutine_143b80(v4, v5);
      *(_BYTE*)(v1 + 1799) = 1;
    }
    v7 = *(_QWORD*)(v2 + 40);
    v6 = v2 + 40;
    v8 = *(_QWORD*)(v6 + 5624);
    v9 = (*(__int64 (**)(__int64))(v7 + 344))(v6);
    result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v8 + 152LL))(v8, v9);
  }
  *(_WORD*)(v1 + 1806) = 256;
  return result;
}

__int64 SeqVoice_Unknown20(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned int v3;
  unsigned int v4;
  const char* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;

  v1 = result + 4096;
  if (*(_DWORD*)(*(_QWORD*)(result + 5648) + 120LL) == 0) {
    v2 = result;
    v3 = (*(__int64 (**)(_QWORD, _QWORD))(*(_QWORD*)*snd_s_target_ptr + 576LL))(
        *snd_s_target_ptr, *(_QWORD*)(result + 5664));
    *(_DWORD*)(v2 + 5784) = v3;
    if (v3 != 0) {
      v4 = v3;
      v5 = (const char*)GameRoutine_190240(v2 + 5680);
      GameRoutine_143b80(v4, v5);
      *(_BYTE*)(v1 + 1799) = 1;
    }
    v7 = *(_QWORD*)(v2 + 40);
    v6 = v2 + 40;
    v8 = *(_QWORD*)(v6 + 5624);
    v9 = (*(__int64 (**)(__int64))(v7 + 344))(v6);
    result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v8 + 152LL))(v8, v9);
  }
  *(_WORD*)(v1 + 1806) = 256;
  return result;
}

bool SeqVoice_1471b0(__int64 a1)
{
  return (((*(__int64 (**)(_QWORD))(**(_QWORD**)snd_g_proxy_ptr[0] + 400LL))(
               *(_QWORD*)snd_g_proxy_ptr[0]) &
           1) == 0 ||
          (snd_fnd_WeakHandle_isValid(a1 + 5848) & 1) == 0) &&
         *(_DWORD*)(*(_QWORD*)(a1 + 5648) + 548LL) > 0;
}

#pragma GCC visibility pop
