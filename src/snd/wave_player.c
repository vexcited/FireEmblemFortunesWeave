#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Crc32List_1163b0(_QWORD);
__int64 GameRoutine_f7060(_QWORD);
__int64 Param_Destructor(_QWORD);
__int64 WaveReader_188ee0(_QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_codec_DecodeAdpcm(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_codec_GetAdpcmSampleCount(_QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Fade_10c830(_QWORD);
__int64 snd_HandlePtr_unregisterHandle(_QWORD);
extern __int64* GameData_2134248[3];
extern __int64* GameData_2134c48[10];
extern __int64* snd_g_memory_ptr[2];
void GameRoutine_651250(void*, unsigned __int64);
__int64 WavePlayer_Destructor(_QWORD* a1);
void WavePlayer_183da0(__int64 a1);
__int64 WavePlayer_1843e0(__int64 result);
__int64 WavePlayer_184430(__int64 result);
void WavePlayer_184480(__int64 a1);
__int64 WavePlayer_184510(_DWORD* a1);
__int64 WavePlayer_184f20(_QWORD* a1);
float WavePlayer_184f70(float result, __int64 a2, __int64 a3);
void WavePlayer_186800(__int64 a1, __int64 a2, __int64* a3);
__int64 WavePlayer_186880(__int64 a1, int a2);
float WavePlayer_Unknown201(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6);
void WavePlayer_188660(__int64 a1, _WORD* a2, _WORD* a3);
__int64 Crc32List_119b10(_QWORD);
__int64 GameRoutine_1835b0(_QWORD*);
__int64 Obj_1261b0(void);
__int64 WavePlayer_184f70_alt1(_QWORD, _QWORD) __asm__("WavePlayer_184f70");
__int64 nn_os_InitializeMutex(_QWORD, _QWORD, _QWORD);
__int64 snd_HandlePtr_registerHandle(_QWORD);
__int64 snd_coef_BiQuadCoef_process(_QWORD, _QWORD, _QWORD);
__int64 snd_coef_BiQuadCoef_setType(_QWORD, _QWORD);
extern __int64* GameData_2134c40[11];
_QWORD* WavePlayer_BiQuad4_Destructor(_QWORD* result);
__int64 WavePlayer_183910(__int64 a1, __int64 a2);
__int64 WavePlayer_184a90_alt1(__int64 result, __int64 a2, int a3, __int64 a4,
                               int a5, __int64 a6,
                               float* a7) __asm__("WavePlayer_184a90");
__int64 WavePlayer_187420(__int64 result, int a2, int a3);
__attribute__((swiftcall)) void Manager_120450(PSEUDO_X8, __int64, __int64);
__int64 GameRoutine_112180(__int64, __int64);
__int64 GameRoutine_17bcd0(__int64, __int64);
__int64 snd_fnd_WeakHandle_isValid(__int64*);
__int64 snd_fnd_WeakHandle_set(__int64, __int64);
extern __int64* snd_s_target_ptr;
__int64 WavePlayer_17bc10(__int64 a1);
_QWORD* snd_coef_BiQuadCoef_setType_alt1(_QWORD* result, unsigned int) __asm__(
    "snd_coef_BiQuadCoef_setType");
__int64 Crc32List_1163b0_alt1() __asm__("Crc32List_1163b0");
__int64 Crc32List_119b10_alt1(__int64) __asm__("Crc32List_119b10");
__int64 GameHr_1835b0(_QWORD*);
__int64 Obj_1261b0_alt1(__int64) __asm__("Obj_1261b0");
__int64 WaveReader_188ee0_alt1(__int64) __asm__("WaveReader_188ee0");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
__int64 nn_os_InitializeMutex_alt1(__int64, bool,
                                   int) __asm__("nn_os_InitializeMutex");
__int64 snd_HandlePtr_registerHandle_alt1(__int64) __asm__(
    "snd_HandlePtr_registerHandle");
__int64
snd_coef_BiQuadCoef_process_alt1(__int64, unsigned int,
                                 int) __asm__("snd_coef_BiQuadCoef_process");
float WavePlayer_184a90(__int64 a1, __int64 a2, int a3, float result,
                        __int64 a5, int a6, __int64 a7, float* a8);
__int64 WavePlayer_186740(__int64 a1, int a2, int* a3, _DWORD* a4);
__int64 BaseNx_278ad0(__int64, unsigned int, __int64);
__int64 BaseNx_288c90(char);
__int64 GameRoutine_14ba80(__int64, int, const char*);
__int64 GameRoutine_188f70(__int64, __int64);
__int64 StartInfoNX_14b920();
__int64 StreamHeaderLoadTask_2967a0(__int64);
__int64 StreamHeaderLoadTask_2967e0(__int64);
__int64 StreamHeaderLoadTask_296840(__int64);
__int64 StreamHeaderLoadTask_296880(__int64);
__int64 StreamHeaderLoadTask_2968c0(__int64);
__int64 StreamHeaderLoadTask_296900(__int64);
__int64 StreamHeaderLoadTask_296940(__int64);
__int64 StreamHeaderLoadTask_2969e0(__int64);
__int64 snd_1898a0(__int64);
bool StreamHeaderLoadTask_2966c0(__int64);
bool StreamHeaderLoadTask_296720(__int64);
char* StreamHeaderLoadTask_2969a0(unsigned int*, unsigned int);
extern __int64 snd_g_proxy_ptr[2];
__int64 WavePlayer_187a80(__int64 a1);

__int64 WavePlayer_17bc10(__int64 a1)
{
  __int64 result;
  __int64 v3;
  struct {
    __int64 v4;
    int v5;
  } v4_;

  result = snd_fnd_WeakHandle_isValid((__int64*)(a1 + 256));
  if ((result & 1) == 0) {
    v3 = (*(__int64 (**)(_QWORD, const char*, __int64, __int64))(
        *(_QWORD*)*snd_s_target_ptr + 1016LL))(*snd_s_target_ptr,
                                               "FxPCMPlayerForFinalMix", 6, 5);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v3 + 192LL))(v3, 4800);
    v4_.v4 = 0;
    v4_.v5 = 0x2000;
    snd_fnd_WeakHandle_set((__int64)&v4_.v4, v3 + 5592);
    GameRoutine_112180(a1 + 256, (__int64)&v4_.v4);
    Manager_120450((void*)((__int64)&v4_.v4), *(_QWORD*)(a1 + 8), v3);
    return GameRoutine_17bcd0(a1, v3);
  }
  return result;
}

_QWORD* WavePlayer_BiQuad4_Destructor(_QWORD* result)
{
  _QWORD* v1;
  void (***v2)(_QWORD);
  __int64* v3;
  void (***v4)(_QWORD);
  void (***v5)(_QWORD);
  void (***v6)(_QWORD);

  v1 = result;
  v2 = (void (***)(_QWORD))result[1];
  *result = GameData_2134c40[0] + 2;
  result[1] = 0;
  v3 = snd_g_memory_ptr[0];
  if (v2 != nullptr) {
    (**v2)(v2);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v2);
  }
  v4 = (void (***)(_QWORD))v1[2];
  v1[2] = 0;
  if (v4 != nullptr) {
    (**v4)(v4);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v4);
    v5 = (void (***)(_QWORD))v1[2];
    v1[2] = 0;
    if (v5 != nullptr) {
      (**v5)(v5);
      result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
          *(_QWORD*)*v3 + 24LL))(*v3, v5);
    }
    v6 = (void (***)(_QWORD))v1[1];
    v1[1] = 0;
    if (v6 != nullptr) {
      goto LABEL_7;
    }
  }
  else {
    v6 = (void (***)(_QWORD))v1[1];
    v1[1] = 0;
    v1[2] = 0;
    if (v6 != nullptr) {
    LABEL_7:
      (**v6)(v6);
      return (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
          *(_QWORD*)*v3 + 24LL))(*v3, v6);
    }
  }
  return result;
}

__int64 WavePlayer_183910(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  void (***v8)(_QWORD);
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 result;

  Obj_1261b0_alt1(a1);
  *(_QWORD*)(a1 + 5552) = GameData_2134248[0] + 2;
  *(_DWORD*)(a1 + 5560) = 0x2000;
  snd_HandlePtr_registerHandle_alt1(a1 + 5552);
  *(_QWORD*)(a1 + 5568) = a2;
  v4 = GameData_2134c48[0];
  *(_BYTE*)(a1 + 5576) = 0;
  *(_QWORD*)(a1 + 5600) = 0;
  *(_QWORD*)(a1 + 5612) = 1065353216;
  *(_QWORD*)(a1 + 5584) = 0;
  *(_QWORD*)(a1 + 5592) = 0;
  *(_QWORD*)(a1 + 5624) = 0;
  *(_QWORD*)(a1 + 5632) = 0;
  *(_QWORD*)(a1 + 5640) = 0;
  *(_QWORD*)(a1 + 5648) = 0;
  *(_QWORD*)(a1 + 5656) = 0;
  *(_QWORD*)(a1 + 5664) = 0;
  *(_DWORD*)(a1 + 5607) = 0;
  *(_QWORD*)(a1 + 5552) = v4 + 207;
  *(_QWORD*)a1 = v4 + 2;
  *(_DWORD*)(a1 + 5672) = -1;
  *(_DWORD*)(a1 + 5620) = -1082130432;
  memset_alt1(a1 + 5676, 0, 0x13BDu);
  *(_QWORD*)(a1 + 10732) = 0;
  *(_QWORD*)(a1 + 10740) = 0;
  *(_QWORD*)(a1 + 10748) = 0;
  *(_QWORD*)(a1 + 10756) = 0;
  *(_BYTE*)(a1 + 10764) = 0;
  *(_QWORD*)(a1 + 10768) = 0;
  *(_QWORD*)(a1 + 10776) = 0;
  *(_DWORD*)(a1 + 10784) = 0;
  *(_DWORD*)(a1 + 10820) = 0;
  *(_QWORD*)(a1 + 10788) = 1065353216;
  *(_DWORD*)(a1 + 10832) = 1065353216;
  *(_DWORD*)(a1 + 11124) = 0;
  *(_WORD*)(a1 + 11128) = 0;
  *(_QWORD*)(a1 + 11144) = 0;
  *(_DWORD*)(a1 + 11152) = 0;
  *(_QWORD*)(a1 + 11104) = 0;
  *(_QWORD*)(a1 + 11096) = 0;
  *(_QWORD*)(a1 + 11088) = 0;
  *(_QWORD*)(a1 + 11080) = 0;
  *(_QWORD*)(a1 + 10796) = 0x3F80000000000000LL;
  *(_QWORD*)(a1 + 10804) = 0;
  *(_QWORD*)(a1 + 10812) = 0;
  *(_QWORD*)(a1 + 11132) = 0;
  *(_DWORD*)(a1 + 11119) = 0;
  *(_QWORD*)(a1 + 11112) = 0;
  *(_QWORD*)(a1 + 10824) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 11060) = 0;
  *(_QWORD*)(a1 + 11068) = 0;
  *(_QWORD*)(a1 + 11044) = 0;
  *(_QWORD*)(a1 + 11052) = 0;
  *(_QWORD*)(a1 + 11028) = 0;
  *(_QWORD*)(a1 + 11036) = 0;
  *(_QWORD*)(a1 + 11012) = 0;
  *(_QWORD*)(a1 + 11020) = 0;
  *(_QWORD*)(a1 + 10996) = 0;
  *(_QWORD*)(a1 + 11004) = 0;
  *(_QWORD*)(a1 + 10980) = 0;
  *(_QWORD*)(a1 + 10988) = 0;
  *(_QWORD*)(a1 + 10964) = 0;
  *(_QWORD*)(a1 + 10972) = 0;
  *(_QWORD*)(a1 + 10948) = 0;
  *(_QWORD*)(a1 + 10956) = 0;
  *(_QWORD*)(a1 + 10932) = 0;
  *(_QWORD*)(a1 + 10940) = 0;
  *(_QWORD*)(a1 + 10916) = 0;
  *(_QWORD*)(a1 + 10924) = 0;
  *(_QWORD*)(a1 + 10900) = 0;
  *(_QWORD*)(a1 + 10908) = 0;
  *(_QWORD*)(a1 + 10884) = 0;
  *(_QWORD*)(a1 + 10892) = 0;
  *(_QWORD*)(a1 + 10868) = 0;
  *(_QWORD*)(a1 + 10876) = 0;
  *(_QWORD*)(a1 + 10852) = 0;
  *(_QWORD*)(a1 + 10860) = 0;
  *(_QWORD*)(a1 + 10836) = 0;
  *(_QWORD*)(a1 + 10844) = 0;
  nn_os_InitializeMutex_alt1(a1 + 11128, true, 0);
  v5 = Crc32List_1163b0_alt1();
  *(_QWORD*)(a1 + 10840) = Crc32List_119b10_alt1(v5 + 2840);
  v6 = snd_g_memory_ptr[0];
  v7 = (_QWORD*)(*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 24, 32);
  GameHr_1835b0(v7);
  v8 = *(void (****)(_QWORD))(a1 + 11080);
  *(_QWORD*)(a1 + 11080) = v7;
  if (v8 != nullptr) {
    (**v8)(v8);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v6 + 24LL))(*v6, v8);
    v7 = *(_QWORD**)(a1 + 11080);
  }
  v9 = v7[1];
  snd_coef_BiQuadCoef_setType_alt1((_QWORD*)v9, 1u);
  v10 = *(_QWORD*)(v9 + 8LL * *(unsigned int*)(v9 + 124) + 128);
  (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
  v11 = *(_QWORD*)(*(_QWORD*)(a1 + 11080) + 16LL);
  snd_coef_BiQuadCoef_setType_alt1((_QWORD*)v11, 0);
  v12 = *(_QWORD*)(v11 + 8LL * *(unsigned int*)(v11 + 124) + 128);
  (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
  v13 = *v6;
  *(_QWORD*)(a1 + 11104) = -1;
  *(_QWORD*)(a1 + 11096) = -1;
  *(_QWORD*)(a1 + 11088) = -1;
  *(_QWORD*)(a1 + 5688) = (*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)v13 + 16LL))(v13, 0x8000, 32);
  result = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v6 + 16LL))(
      *v6, 0x10000, 32);
  *(_QWORD*)(a1 + 5696) = result;
  return result;
}

__int64 WavePlayer_Destructor(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  void (***v7)(_QWORD);
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int16 v13;
  void (***v14)(_QWORD);

  v1 = a1;
  v2 = a1[711];
  v3 = GameData_2134c48[0] + 207;
  *a1 = GameData_2134c48[0] + 2;
  a1[694] = v3;
  v4 = snd_g_memory_ptr[0];
  if (v2 != 0) {
    v5 = *snd_g_memory_ptr[0];
    v1[711] = 0;
    a1 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v5 + 24LL))(v5);
  }
  if (v1[712] != 0) {
    v6 = *v4;
    v1[712] = 0;
    a1 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6);
  }
  v7 = (void (***)(_QWORD))v1[1385];
  v1[1385] = 0;
  if (v7 != nullptr) {
    (**v7)(v7);
    a1 = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v4 +
                                                                24LL))(*v4, v7);
  }
  if (v1[1355] != 0) {
    v8 = Crc32List_1163b0(a1);
    v9 = v1[1355];
    v10 = v8;
    v1[1355] = 0;
    GameRoutine_f7060(v9);
    nn_os_LockMutex(v10 + 2880);
    v11 = *(_QWORD*)(v10 + 2864);
    v12 = (v9 - *(_QWORD*)(v10 + 2856)) / 0x298uLL;
    v13 = *(_WORD*)(v10 + 2872) - 1;
    *(_WORD*)(v10 + 2872) = v13;
    *(_WORD*)(v11 + 2LL * v13) = v12;
    nn_os_UnlockMutex(v10 + 2880);
  }
  nn_os_FinalizeMutex(v1 + 1391);
  v14 = (void (***)(_QWORD))v1[1385];
  v1[1385] = 0;
  if (v14 != nullptr) {
    (**v14)(v14);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v4 + 24LL))(*v4, v14);
  }
  v1[694] = GameData_2134248[0] + 2;
  snd_HandlePtr_unregisterHandle(v1 + 694);
  return Param_Destructor(v1);
}

void WavePlayer_183da0(__int64 a1)
{
  WavePlayer_Destructor(a1 - 5552);
  GameRoutine_651250((void*)(a1 - 5552), 0x2B98u);
}

__int64 WavePlayer_1843e0(__int64 result)
{
  if (*(_BYTE*)(result + 11116) == 1) {
    *(_BYTE*)(result + 11116) = 0;
    *(_DWORD*)(result + 11112) = 5;
    return (*(__int64 (**)(__int64, double))(*(_QWORD*)result + 1520LL))(result,
                                                                         0.0);
  }
  else if (*(_BYTE*)(result + 11117) == 1) {
    *(_BYTE*)(result + 11117) = 0;
    *(_DWORD*)(result + 11112) = 9;
  }
  return result;
}

__int64 WavePlayer_184430(__int64 result)
{
  int v1;

  if (*(_BYTE*)(result + 11117) == 1) {
    *(_BYTE*)(result + 11117) = 0;
    v1 = 9;
  }
  else if (*(_BYTE*)(result + 11118) == 1) {
    *(_BYTE*)(result + 11118) = 0;
    v1 = 6;
  }
  else {
    if (*(_BYTE*)(result + 11119) != 1) {
      return result;
    }
    *(_BYTE*)(result + 11119) = 0;
    v1 = 7;
  }
  *(_DWORD*)(result + 11112) = v1;
  return result;
}

void WavePlayer_184480(__int64 a1)
{
  _BYTE* v2;
  int v3;

  v2 = (_BYTE*)(a1 + 11117);
  if ((*(float (**)(__int64))(*(_QWORD*)a1 + 80LL))(a1) < 0.001) {
    *(_BYTE*)(a1 + 5608) = 1;
  }
  if (*v2 == 1) {
    *v2 = 0;
    v3 = 9;
  }
  else {
    if (v2[3] != 1) {
      return;
    }
    v3 = 5;
    v2[3] = 0;
    *(_BYTE*)(a1 + 5608) = 0;
  }
  *(_DWORD*)(a1 + 11112) = v3;
}

__int64 WavePlayer_184510(_DWORD* a1)
{
  _DWORD* v2;
  __int64 result;
  int v4;

  v2 = a1 + 2048;
  result = (*(__int64 (**)(_DWORD*))(*(_QWORD*)a1 + 104LL))(a1);
  if (*((_BYTE*)v2 + 2925) == 1) {
    *((_BYTE*)v2 + 2925) = 0;
    v4 = 9;
  }
  else {
    if (*((_BYTE*)v2 + 2929) != 1) {
      return result;
    }
    v4 = 5;
    *((_BYTE*)v2 + 2929) = 0;
  }
  a1[2778] = v4;
  return result;
}

float WavePlayer_184a90(__int64 a1, __int64 a2, int a3, float result,
                        __int64 a5, int a6, __int64 a7, float* a8)
{

#pragma clang fp contract(off)
  __int64 v10;
  int v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  float v19;
  int v20;
  int v21;
  int v22;
  float v23;
  unsigned int v24;
  int v25;
  bool v26;
  int v27;
  int v28;
  int v29;
  int v30;
  float v31;
  int v32;
  float v33;
  int v34;
  int v35;
  int v36;
  int v37;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;
  unsigned int v42;
  unsigned int v43;
  unsigned int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  __int64 v50;
  float* v51;
  float v52;
  int v53;
  __int64 v54;
  float v55;
  float v56;
  float v57;
  int v58;
  float v59;
  float v60;
  float v61;
  __int64 v62;
  __int64 v63;
  float v64;
  int v65;
  int v66;
  __int64 v67;
  float v68;
  int v69;
  struct {
    __int64 v74;
    int v75;
    int v76;
    int v77;
    int v78;
    int v79;
    int v80;
    int v81;
    int v82;
    float v83;
    int v84;
    __int64 v85;
    int v86;
    int v87;
    float v88;
    int v89;
  } v74_;

  if ((*(_BYTE*)(a1 + 11122) & 1) != 0 || (*(_BYTE*)(a1 + 5608) & 1) != 0 ||
      (unsigned int)(*(_DWORD*)(a1 + 11112) - 5) > 4) {
    return result;
  }
  v10 = *(_QWORD*)(a1 + 5696);
  v11 = *(_DWORD*)(a1 + 10716);
  v12 = *(_DWORD*)(a1 + 10696);
  v13 = 0;
  if (v12 <= 3) {
    if (v12 == 1) {
      v15 = *(__int16*)(v10 + 2LL * (int)*(float*)(a1 + 10776));
      v37 = *(_DWORD*)(a1 + 11088);
      v13 = 0;
      if (v37 < 0) {
        v14 = 0;
        v16 = v15;
        v17 = v15;
        v18 = v15;
      }
      else {
        v18 = (v37 << 31 >> 31) & v15;
        v17 = v15 & (v37 << 30 >> 31);
        v16 = v15 & (v37 << 29 >> 31);
        v14 = v15 & (v37 << 27 >> 31);
        v15 &= v37 << 28 >> 31;
      }
    }
    else {
      v14 = 0;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v18 = 0;
      if (v12 == 2) {
        v23 = *(float*)(a1 + 10776);
        v24 = *(__int16*)(v10 + 2LL * (int)v23);
        v15 = *(__int16*)(v10 + 2LL * (v11 + (int)v23));
        v25 = *(_DWORD*)(a1 + 11088);
        v26 = v25 >= 0;
        v27 = v24 & (v25 << 30 >> 31);
        v28 = v24 & (v25 << 29 >> 31);
        if (v25 < 0) {
          v18 = v24;
        }
        else {
          v18 = (v25 << 31 >> 31) & v24;
        }
        v29 = *(_DWORD*)(a1 + 11092);
        if (v25 < 0) {
          v14 = 0;
        }
        else {
          v14 = v24 & (v25 << 27 >> 31);
        }
        if (v25 < 0) {
          v30 = 0;
        }
        else {
          v30 = v24 & (v25 << 28 >> 31);
        }
        if (v26) {
          v16 = v28;
        }
        else {
          v16 = v24;
        }
        if (!v26) {
          v27 = 0;
        }
        if (v29 < 0) {
          v13 = 0;
          v17 = v15;
        }
        else {
          v13 = 0;
          if ((v29 & 1) != 0) {
            v18 = v15;
          }
          if ((v29 & 2) != 0) {
            v17 = v15;
          }
          else {
            v17 = v27;
          }
          if ((v29 & 4) != 0) {
            v16 = v15;
          }
          if ((v29 & 8) != 0) {
            v30 = v15;
          }
          if ((v29 & 0x10) != 0) {
            v14 = v15;
          }
          v15 = v30;
        }
      }
    }
    goto LABEL_45;
  }
  if (v12 == 4) {
    v31 = *(float*)(a1 + 10776);
    v13 = 0;
    v14 = 0;
    v18 = *(__int16*)(v10 + 2LL * (int)v31);
    v22 = v11 + (int)v31;
    v17 = *(__int16*)(v10 + 2LL * v22);
    goto LABEL_39;
  }
  if (v12 == 5) {
    v33 = *(float*)(a1 + 10776);
    v13 = 0;
    v18 = *(__int16*)(v10 + 2LL * (int)v33);
    v34 = v11 + (int)v33;
    v17 = *(__int16*)(v10 + 2LL * v34);
    v35 = v34 + v11;
    v16 = *(__int16*)(v10 + 2LL * v35);
    v36 = v35 + v11;
    v15 = *(__int16*)(v10 + 2LL * v36);
    v14 = *(__int16*)(v10 + 2LL * (v36 + v11));
    goto LABEL_45;
  }
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  if (v12 == 6) {
    v19 = *(float*)(a1 + 10776);
    v18 = *(__int16*)(v10 + 2LL * (int)v19);
    v20 = v11 + (int)v19;
    v17 = *(__int16*)(v10 + 2LL * v20);
    v21 = v20 + v11;
    v14 = *(__int16*)(v10 + 2LL * v21);
    v22 = v21 + v11;
    v13 = *(__int16*)(v10 + 2LL * v22);
  LABEL_39:
    v32 = v22 + v11;
    v16 = *(__int16*)(v10 + 2LL * v32);
    v15 = *(__int16*)(v10 + 2LL * (v32 + v11));
  }
LABEL_45:
  v39 = snd_coef_BiQuadCoef_process_alt1(
      *(_QWORD*)(*(_QWORD*)(a1 + 11080) + 8LL), v18, 0);
  v40 = snd_coef_BiQuadCoef_process_alt1(
      *(_QWORD*)(*(_QWORD*)(a1 + 11080) + 8LL), v17, 1);
  v41 = snd_coef_BiQuadCoef_process_alt1(
      *(_QWORD*)(*(_QWORD*)(a1 + 11080) + 8LL), v16, 2);
  v42 = snd_coef_BiQuadCoef_process_alt1(
      *(_QWORD*)(*(_QWORD*)(a1 + 11080) + 8LL), v15, 3);
  v43 = snd_coef_BiQuadCoef_process_alt1(
      *(_QWORD*)(*(_QWORD*)(a1 + 11080) + 8LL), v14, 4);
  v44 = snd_coef_BiQuadCoef_process_alt1(
      *(_QWORD*)(*(_QWORD*)(a1 + 11080) + 8LL), v13, 5);
  v45 = snd_coef_BiQuadCoef_process_alt1(
      *(_QWORD*)(*(_QWORD*)(a1 + 11080) + 16LL), v39, 0);
  v46 = snd_coef_BiQuadCoef_process_alt1(
      *(_QWORD*)(*(_QWORD*)(a1 + 11080) + 16LL), v40, 1);
  v47 = snd_coef_BiQuadCoef_process_alt1(
      *(_QWORD*)(*(_QWORD*)(a1 + 11080) + 16LL), v41, 2);
  v48 = snd_coef_BiQuadCoef_process_alt1(
      *(_QWORD*)(*(_QWORD*)(a1 + 11080) + 16LL), v42, 3);
  v49 = snd_coef_BiQuadCoef_process_alt1(
      *(_QWORD*)(*(_QWORD*)(a1 + 11080) + 16LL), v43, 4);
  v50 = snd_coef_BiQuadCoef_process_alt1(
      *(_QWORD*)(*(_QWORD*)(a1 + 11080) + 16LL), v44, 5);
  v51 = a8;
  v52 = *(float*)(a1 + 5600);
  v53 = v50;
  v54 = *(_QWORD*)(a1 + 5584);
  v55 = a8[3] + *(float*)(a1 + 5596);
  *(float*)(a1 + 5596) = v55;
  v56 = a8[3];
  *(_QWORD*)(a1 + 5584) = v54 + (int)v55;
  v57 = v56 + v52;
  v58 = *(_DWORD*)(a1 + 10784);
  *(_DWORD*)(a1 + 5592) += (int)v57;
  *(float*)(a1 + 5596) = v55 - (float)(int)v55;
  v59 = v57 - (float)(int)v57;
  v60 = *(float*)(a1 + 10776);
  *(float*)(a1 + 5600) = v59;
  v61 = a8[3] + v60;
  *(float*)(a1 + 10776) = v61;
  if ((int)v61 >= v58) {
    v62 = *(_QWORD*)(a1 + 5664);
    *(_DWORD*)(a1 + 10780) = (int)v61 - v58;
    v26 = (WaveReader_188ee0_alt1(v62) & 1) == 0;
    v63 = 1608;
    if (!v26) {
      v63 = 1616;
    }
    v50 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + v63))(a1);
    v51 = a8;
  }
  v64 = *v51;
  v65 = *((_DWORD*)v51 + 4);
  v74_.v77 = v45;
  v74_.v78 = v46;
  v74_.v79 = v47;
  v74_.v80 = v48;
  v74_.v81 = v49;
  v74_.v82 = v53;
  v74_.v74 = a2;
  v74_.v83 = v64;
  v74_.v84 = v65;
  v74_.v75 = a6;
  v74_.v76 = a3;
  v66 = *((_DWORD*)v51 + 10);
  v67 = *(_QWORD*)(v51 + 5);
  v74_.v86 = *((_DWORD*)v51 + 9);
  v74_.v87 = v66;
  v68 = v51[11];
  v69 = *((_DWORD*)v51 + 12);
  v74_.v85 = v67;
  v74_.v88 = v68;
  v74_.v89 = v69;
  return WavePlayer_184f70(v68, v50, (__int64)&v74_.v74);
}

__int64 WavePlayer_184f20(_QWORD* a1)
{
  bool v2;
  __int64 v3;

  v2 = (WaveReader_188ee0(a1[708]) & 1) == 0;
  v3 = 1608;
  if (!v2) {
    v3 = 1616;
  }
  return (*(__int64 (**)(_QWORD*))(*a1 + v3))(a1);
}

float WavePlayer_184f70(float result, __int64 a2, __int64 a3)
{
  unsigned int v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  _QWORD* v10;
  float v11;
  __int64 v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  _DWORD* v18;
  float v19;
  float v20;
  float v21;
  _DWORD* v22;
  _DWORD* v23;
  _DWORD* v24;

  v3 = *(_DWORD*)(a3 + 8);
  if ((int)v3 >= 1) {
    v4 = *(float*)(a3 + 40);
    v5 = *(float*)(a3 + 44);
    v6 = *(float*)(a3 + 56);
    v7 = *(float*)(a3 + 60);
    v9 = *(float*)(a3 + 64);
    v8 = *(float*)(a3 + 68);
    v10 = *(_QWORD**)a3;
    v11 = *(float*)(a3 + 48);
    result = *(float*)(a3 + 52);
    v12 = *(int*)(a3 + 12);
    v14 = *(_DWORD*)(a3 + 20);
    v13 = *(_DWORD*)(a3 + 24);
    v16 = *(_DWORD*)(a3 + 28);
    v15 = *(_DWORD*)(a3 + 32);
    v17 = *(_DWORD*)(a3 + 36);
    v18 = (_DWORD*)(**(_QWORD**)a3 + 4 * v12);
    v19 = v4 * (float)*(int*)(a3 + 16);
    *v18 = (int)(float)((float)(v19 * v6) * v9);
    if (v3 == 1) {
      result = (float)((float)(v19 * result) * v6) * v9;
      *(_DWORD*)(v10[1] + 4 * v12) =
          (int)(float)((float)((float)(v19 * v5) * v6) * v9);
      *(_DWORD*)(v10[2] + 4 * v12) =
          (int)(float)((float)((float)(v19 * v11) * v6) * v9);
      *(_DWORD*)(v10[3] + 4 * v12) = (int)result;
    }
    else {
      v20 = v4 * (float)v14;
      v21 = (float)v13;
      v18[1] = (int)(float)((float)(v20 * v7) * v9);
      if (v3 >= 3) {
        v18[2] = (int)(float)((float)((float)(v4 * v21) * v6) * v8);
        if (v3 != 3) {
          v18[3] = (int)(float)((float)((float)(v4 * (float)v16) * v7) * v8);
          if (v3 >= 5) {
            v18[4] = (int)(float)(v4 * (float)v15);
            if (v3 != 5) {
              v18[5] = (int)(float)(v4 * (float)v17);
            }
          }
        }
      }
      v22 = (_DWORD*)(v10[1] + 4 * v12);
      *v22 = (int)(float)((float)((float)(v19 * v5) * v6) * v9);
      v22[1] = (int)(float)((float)((float)(v20 * v5) * v7) * v9);
      if (v3 >= 3) {
        v22[2] =
            (int)(float)((float)((float)((float)(v4 * v21) * v5) * v6) * v8);
        if (v3 != 3) {
          v22[3] = (int)(float)((float)((float)((float)(v4 * (float)v16) * v5) *
                                        v7) *
                                v8);
          if (v3 >= 5) {
            v22[4] = (int)(float)((float)(v4 * (float)v15) * v5);
            if (v3 != 5) {
              v22[5] = (int)(float)((float)(v4 * (float)v17) * v5);
            }
          }
        }
      }
      v23 = (_DWORD*)(v10[2] + 4 * v12);
      *v23 = (int)(float)((float)((float)(v19 * v11) * v6) * v9);
      v23[1] = (int)(float)((float)((float)(v20 * v11) * v7) * v9);
      if (v3 >= 3) {
        v23[2] =
            (int)(float)((float)((float)((float)(v4 * v21) * v11) * v6) * v8);
        if (v3 != 3) {
          v23[3] =
              (int)(float)((float)((float)((float)(v4 * (float)v16) * v11) *
                                   v7) *
                           v8);
          if (v3 >= 5) {
            v23[4] = (int)(float)((float)(v4 * (float)v15) * v11);
            if (v3 != 5) {
              v23[5] = (int)(float)((float)(v4 * (float)v17) * v11);
            }
          }
        }
      }
      v24 = (_DWORD*)(v10[3] + 4 * v12);
      *v24 = (int)(float)((float)((float)(v19 * result) * v6) * v9);
      v24[1] = (int)(float)((float)((float)(v20 * result) * v7) * v9);
      if (v3 >= 3) {
        v24[2] =
            (int)(float)((float)((float)((float)(v4 * v21) * result) * v6) *
                         v8);
        if (v3 != 3) {
          v24[3] =
              (int)(float)((float)((float)((float)(v4 * (float)v16) * result) *
                                   v7) *
                           v8);
          if (v3 >= 5) {
            v24[4] = (int)(float)((float)(v4 * (float)v15) * result);
            if (v3 != 5) {
              result = (float)(v4 * (float)v17) * result;
              v24[5] = (int)result;
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 WavePlayer_186740(__int64 a1, int a2, int* a3, _DWORD* a4)
{
  int v7;
  __int64 result;
  int v9;
  int v10;

  v7 = a2 / (signed __int32)*(_DWORD*)(a1 + 10716);
  *a3 = v7;
  *a4 = a2 - *(_DWORD*)(a1 + 10716) * v7;
  result = WaveReader_188ee0_alt1(*(_QWORD*)(a1 + 5664));
  if ((result & 1) != 0) {
    v9 = *a3;
    v10 = *(_DWORD*)(a1 + 10736);
    if (*a3 > v10) {
      do {
        v9 += ~v10 + *(_DWORD*)(a1 + 10748);
        *a3 = v9;
        v10 = *(_DWORD*)(a1 + 10736);
      } while (v9 > v10);
    }
  }
  else if (*a3 > (signed __int32)*(_DWORD*)(a1 + 10736)) {
    *a3 = 0;
    *a4 = 0;
  }
  return result;
}

void WavePlayer_186800(__int64 a1, __int64 a2, __int64* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v3 = *a3;
  v4 = a3[1];
  v5 = a3[2];
  *(_QWORD*)(a2 + 30) = a3[3];
  *(_QWORD*)(a2 + 22) = v5;
  *(_QWORD*)(a2 + 14) = v4;
  *(_QWORD*)(a2 + 6) = v3;
  *(_WORD*)a2 = *((_WORD*)a3 + 16);
  *(_WORD*)(a2 + 2) = *((_WORD*)a3 + 17);
  *(_WORD*)(a2 + 4) = *((_WORD*)a3 + 18);
}

__int64 WavePlayer_186880(__int64 a1, int a2)
{
  return (unsigned int)(*(int*)(a1 + 10724) * (__int64)a2 / 1000);
}

__int64 WavePlayer_187420(__int64 result, int a2, int a3)
{
  *(_DWORD*)(result + 4LL * a2 + 11088) = a3;
  return result;
}

__int64 WavePlayer_187a80(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  const char* v6;
  __int64 v7;
  __int64 result;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  int v64;
  char v65;
  int v66;
  int v67;
  __int64 v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  __int64 v75;
  int v76;
  __int64 v77;
  __int64 v78;
  unsigned int* v79;
  char* v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  unsigned int v85;
  unsigned __int64 v86;
  unsigned int v87;
  __int64 v88;
  struct {
    int v89;
    char gap12_[4];
    __int64 v90;
    __int64 v91;
    __int64 v92;
    __int64 v93;
    __int64 v94;
    __int64 v95;
    __int64 v96;
    __int64 v97;
  } v89_;
  struct {
    __int64 v98;
    __int64 v99;
    __int64 v100;
  } v98_;
  struct {
    __int64 v101;
    char gap112_[16];
    __int64 v102;
    __int64 v103;
    __int64 v104;
    __int64 v105;
  } v101_;

  if ((WaveReader_188ee0_alt1(*(_QWORD*)(a1 + 5664)) & 1) != 0) {
    v98_.v100 = v101_.v102;
    v101_.v101 = v101_.v103;
    v101_.v105 = v101_.v104;
    (*(void (**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 5664) + 80LL))(
        *(_QWORD*)(a1 + 5664), *(_QWORD*)(a1 + 5688), 0x8000);
    v2 = *(_QWORD*)(a1 + 5688);
    GameRoutine_188f70(*(_QWORD*)(a1 + 5664), v2);
    if (*(_DWORD*)(*(_QWORD*)(a1 + 5688) + *(int*)(v2 + 16)) == -2147483644) {
      v3 = *(_QWORD*)(*(_QWORD*)(a1 + 5664) + 160LL);
      v4 = StartInfoNX_14b920();
      v5 = *(_DWORD*)(a1 + 5676);
      v6 = *(const char**)(a1 + 5680);
      BYTE4(v98_.v98) = 0;
      v98_.v99 = 0;
      v7 = GameRoutine_14ba80(v4, v5, v6);
      result = BaseNx_278ad0(v7, *(_DWORD*)(a1 + 5672), (__int64)&v98_.v98 + 4);
      v9 = BYTE4(v98_.v98);
      v10 = v98_.v99;
      v11 = HIDWORD(v98_.v99);
      *(_DWORD*)(a1 + 10708) = *(_DWORD*)(v2 + 16) + 8;
      *(_DWORD*)(a1 + 10696) = *(_DWORD*)(v3 + 32);
      *(_DWORD*)(a1 + 10700) = 1;
      v12 = *(_DWORD*)(v3 + 36);
      *(_BYTE*)(a1 + 10728) = v9;
      *(_DWORD*)(a1 + 10732) = v10;
      *(_DWORD*)(a1 + 10712) = v11;
      *(_DWORD*)(a1 + 10684) = v10;
      *(_DWORD*)(a1 + 10688) = v11;
      *(_DWORD*)(a1 + 10724) = v12;
      v13 = *(_DWORD*)(v3 + 40);
      *(_DWORD*)(a1 + 10716) = v13;
      *(_DWORD*)(a1 + 10720) = *(_QWORD*)(v3 + 48);
      *(_DWORD*)(a1 + 10740) = *(_QWORD*)(v3 + 48);
      v14 = *(_DWORD*)(v3 + 56);
      *(_DWORD*)(a1 + 10760) = v14;
      if (v9 == 1) {
        v15 = (v11 - 1) % v13 - (v11 - 1) + v14;
        v16 = v10 % v13;
        v17 = v10 + v14;
        if (v16 <= 0) {
          v18 = 0;
        }
        else {
          v18 = v13 - v16;
        }
        v19 = v11 + v18;
        v10 = v17 + v18;
        v20 = v19 + v15;
        *(_DWORD*)(a1 + 10732) = v10;
        *(_DWORD*)(a1 + 10744) = v20;
        if (v20 > v13) {
          do {
            v20 -= v13;
          } while (v20 > v13);
          *(_DWORD*)(a1 + 10744) = v20;
        }
        *(_DWORD*)(a1 + 10736) = (v14 + v19 - 1) / v13;
        v21 = v10 / v13;
      }
      else {
        v21 = v10 / v13;
        *(_DWORD*)(a1 + 10744) = v13;
        *(_DWORD*)(a1 + 10736) = 99999;
      }
      v22 = v21 * v13;
      *(_DWORD*)(a1 + 10748) = v21;
      *(_DWORD*)(a1 + 10752) = v22;
      *(_DWORD*)(a1 + 10756) = v10 - v22;
      *(_BYTE*)(a1 + 10764) = 0;
      *(_DWORD*)(v3 + 92) = v21;
      LOBYTE(v22) = *(_BYTE*)(a1 + 10728);
      *(_DWORD*)(v3 + 96) = 0;
      *(_BYTE*)(v3 + 100) = v22;
      v23 = *(_DWORD*)(a1 + 10736);
      *(_DWORD*)(v3 + 88) = v23;
      if (*(int*)(a1 + 10696) >= 3) {
        *(_DWORD*)(a1 + 5620) = 0;
      }
      if (v23 == 99999) {
        result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 5664) + 152LL))(
            *(_QWORD*)(a1 + 5664));
        if ((result & 1) != 0) {
          return snd_1898a0(*(_QWORD*)(a1 + 5664));
        }
      }
    }
    else {
      return (*(__int64 (**)(_QWORD, const char*))(
          **(_QWORD**)snd_g_proxy_ptr[0] + 392LL))(
          *(_QWORD*)snd_g_proxy_ptr[0],
          "#SoundLibrary : invalid OpusInfoHeader type.");
    }
  }
  else {
    v98_.v98 = v101_.v102;
    v98_.v99 = v101_.v103;
    v101_.v105 = v101_.v104;
    (*(void (**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 5664) + 80LL))(
        *(_QWORD*)(a1 + 5664), *(_QWORD*)(a1 + 5688), 0x8000);
    v24 = *(_QWORD*)(a1 + 5688);
    v25 = v24 + (unsigned int)StreamHeaderLoadTask_2967e0(v24);
    *(_DWORD*)(a1 + 5704) = 0;
    if (StreamHeaderLoadTask_296720(v24)) {
      v26 = StreamHeaderLoadTask_2968c0(v24);
      (*(__attribute__((swiftcall)) void (**)(
          PSEUDO_X8, _QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 5664) + 64LL))(
          (void*)(*(_QWORD**)(a1 + 5664)), *(_QWORD*)(a1 + 5664),
          (unsigned int)(v26 + 8), 0);
      v27 = *(_QWORD*)(a1 + 5664);
      HIDWORD(v101_.v101) = 0;
      (*(void (**)(__int64, char*, __int64))(*(_QWORD*)v27 + 72LL))(
          v27, (char*)&v101_.v101 + 4, 4);
      v28 = StreamHeaderLoadTask_2967a0(v24);
      v29 = v28 - 72;
      *(_DWORD*)(a1 + 5704) = v28 / 0x48;
      if (v28 >= 0x48) {
        v30 = v28;
        (*(void (**)(_QWORD, int*, __int64))(**(_QWORD**)(a1 + 5664) + 72LL))(
            *(_QWORD*)(a1 + 5664), &v89_.v89, 72);
        *(_DWORD*)(a1 + 5708) = v89_.v89;
        v31 = v89_.v95;
        *(_QWORD*)(a1 + 5744) = v89_.v94;
        *(_QWORD*)(a1 + 5752) = v31;
        v32 = v89_.v97;
        *(_QWORD*)(a1 + 5760) = v89_.v96;
        *(_QWORD*)(a1 + 5768) = v32;
        v33 = v89_.v91;
        *(_QWORD*)(a1 + 5712) = v89_.v90;
        *(_QWORD*)(a1 + 5720) = v33;
        v34 = v89_.v93;
        *(_QWORD*)(a1 + 5728) = v89_.v92;
        *(_QWORD*)(a1 + 5736) = v34;
        if (v29 > 0x47) {
          (*(void (**)(_QWORD, int*, __int64))(**(_QWORD**)(a1 + 5664) + 72LL))(
              *(_QWORD*)(a1 + 5664), &v89_.v89, 72);
          v35 = v89_.v95;
          *(_QWORD*)(a1 + 5812) = v89_.v94;
          *(_QWORD*)(a1 + 5820) = v35;
          v36 = v89_.v97;
          *(_QWORD*)(a1 + 5828) = v89_.v96;
          *(_QWORD*)(a1 + 5836) = v36;
          v37 = v89_.v91;
          *(_QWORD*)(a1 + 5780) = v89_.v90;
          *(_QWORD*)(a1 + 5788) = v37;
          v38 = v89_.v93;
          *(_QWORD*)(a1 + 5796) = v89_.v92;
          *(_QWORD*)(a1 + 5804) = v38;
          *(_DWORD*)(a1 + 5776) = v89_.v89;
          if (v30 - 144 >= 0x48) {
            (*(void (**)(_QWORD, int*, __int64))(**(_QWORD**)(a1 + 5664) +
                                                 72LL))(*(_QWORD*)(a1 + 5664),
                                                        &v89_.v89, 72);
            *(_DWORD*)(a1 + 5844) = v89_.v89;
            v39 = v89_.v95;
            *(_QWORD*)(a1 + 5880) = v89_.v94;
            *(_QWORD*)(a1 + 5888) = v39;
            v40 = v89_.v97;
            *(_QWORD*)(a1 + 5896) = v89_.v96;
            *(_QWORD*)(a1 + 5904) = v40;
            v41 = v89_.v91;
            *(_QWORD*)(a1 + 5848) = v89_.v90;
            *(_QWORD*)(a1 + 5856) = v41;
            v42 = v89_.v93;
            *(_QWORD*)(a1 + 5864) = v89_.v92;
            *(_QWORD*)(a1 + 5872) = v42;
            if (v30 - 216 >= 0x48) {
              (*(void (**)(_QWORD, int*, __int64))(**(_QWORD**)(a1 + 5664) +
                                                   72LL))(*(_QWORD*)(a1 + 5664),
                                                          &v89_.v89, 72);
              v43 = v89_.v95;
              *(_QWORD*)(a1 + 5948) = v89_.v94;
              *(_QWORD*)(a1 + 5956) = v43;
              v44 = v89_.v97;
              *(_QWORD*)(a1 + 5964) = v89_.v96;
              *(_QWORD*)(a1 + 5972) = v44;
              v45 = v89_.v91;
              *(_QWORD*)(a1 + 5916) = v89_.v90;
              *(_QWORD*)(a1 + 5924) = v45;
              v46 = v89_.v93;
              *(_QWORD*)(a1 + 5932) = v89_.v92;
              *(_QWORD*)(a1 + 5940) = v46;
              *(_DWORD*)(a1 + 5912) = v89_.v89;
              if (v30 - 288 >= 0x48) {
                (*(void (**)(_QWORD, int*, __int64))(
                    **(_QWORD**)(a1 + 5664) + 72LL))(*(_QWORD*)(a1 + 5664),
                                                     &v89_.v89, 72);
                *(_DWORD*)(a1 + 5980) = v89_.v89;
                v47 = v89_.v95;
                *(_QWORD*)(a1 + 6016) = v89_.v94;
                *(_QWORD*)(a1 + 6024) = v47;
                v48 = v89_.v97;
                *(_QWORD*)(a1 + 6032) = v89_.v96;
                *(_QWORD*)(a1 + 6040) = v48;
                v49 = v89_.v91;
                *(_QWORD*)(a1 + 5984) = v89_.v90;
                *(_QWORD*)(a1 + 5992) = v49;
                v50 = v89_.v93;
                *(_QWORD*)(a1 + 6000) = v89_.v92;
                *(_QWORD*)(a1 + 6008) = v50;
                if (v30 - 360 >= 0x48) {
                  (*(void (**)(_QWORD, int*, __int64))(
                      **(_QWORD**)(a1 + 5664) + 72LL))(*(_QWORD*)(a1 + 5664),
                                                       &v89_.v89, 72);
                  v51 = v89_.v95;
                  *(_QWORD*)(a1 + 6084) = v89_.v94;
                  *(_QWORD*)(a1 + 6092) = v51;
                  v52 = v89_.v97;
                  *(_QWORD*)(a1 + 6100) = v89_.v96;
                  *(_QWORD*)(a1 + 6108) = v52;
                  v53 = v89_.v91;
                  *(_QWORD*)(a1 + 6052) = v89_.v90;
                  *(_QWORD*)(a1 + 6060) = v53;
                  v54 = v89_.v93;
                  *(_QWORD*)(a1 + 6068) = v89_.v92;
                  *(_QWORD*)(a1 + 6076) = v54;
                  *(_DWORD*)(a1 + 6048) = v89_.v89;
                  if (v30 - 432 >= 0x48) {
                    (*(void (**)(_QWORD, int*, __int64))(
                        **(_QWORD**)(a1 + 5664) + 72LL))(*(_QWORD*)(a1 + 5664),
                                                         &v89_.v89, 72);
                    *(_DWORD*)(a1 + 6116) = v89_.v89;
                    v55 = v89_.v95;
                    *(_QWORD*)(a1 + 6152) = v89_.v94;
                    *(_QWORD*)(a1 + 6160) = v55;
                    v56 = v89_.v97;
                    *(_QWORD*)(a1 + 6168) = v89_.v96;
                    *(_QWORD*)(a1 + 6176) = v56;
                    v57 = v89_.v91;
                    *(_QWORD*)(a1 + 6120) = v89_.v90;
                    *(_QWORD*)(a1 + 6128) = v57;
                    v58 = v89_.v93;
                    *(_QWORD*)(a1 + 6136) = v89_.v92;
                    *(_QWORD*)(a1 + 6144) = v58;
                    if (v30 - 504 >= 0x48) {
                      (*(void (**)(_QWORD, int*, __int64))(
                          **(_QWORD**)(a1 + 5664) + 72LL))(
                          *(_QWORD*)(a1 + 5664), &v89_.v89, 72);
                      *(_DWORD*)(a1 + 6184) = v89_.v89;
                      v59 = v89_.v95;
                      *(_QWORD*)(a1 + 6220) = v89_.v94;
                      *(_QWORD*)(a1 + 6228) = v59;
                      v60 = v89_.v97;
                      *(_QWORD*)(a1 + 6236) = v89_.v96;
                      *(_QWORD*)(a1 + 6244) = v60;
                      v61 = v89_.v91;
                      *(_QWORD*)(a1 + 6188) = v89_.v90;
                      *(_QWORD*)(a1 + 6196) = v61;
                      v62 = v89_.v93;
                      *(_QWORD*)(a1 + 6204) = v89_.v92;
                      *(_QWORD*)(a1 + 6212) = v62;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v63 = StreamHeaderLoadTask_296900(v25 + 8);
    *(_BYTE*)(a1 + 10616) = *(_BYTE*)v63;
    *(_BYTE*)(a1 + 10617) = *(_BYTE*)(v63 + 1);
    *(_BYTE*)(a1 + 10618) = *(_BYTE*)(v63 + 2);
    *(_BYTE*)(a1 + 10619) = *(_BYTE*)(v63 + 3);
    *(_DWORD*)(a1 + 10620) = *(_DWORD*)(v63 + 4);
    *(_DWORD*)(a1 + 10624) = *(_DWORD*)(v63 + 8);
    *(_DWORD*)(a1 + 10628) = *(_DWORD*)(v63 + 12);
    *(_DWORD*)(a1 + 10632) = *(_DWORD*)(v63 + 16);
    *(_DWORD*)(a1 + 10636) = *(_DWORD*)(v63 + 20);
    *(_DWORD*)(a1 + 10640) = *(_DWORD*)(v63 + 24);
    *(_DWORD*)(a1 + 10644) = *(_DWORD*)(v63 + 28);
    *(_DWORD*)(a1 + 10648) = *(_DWORD*)(v63 + 32);
    *(_DWORD*)(a1 + 10652) = *(_DWORD*)(v63 + 36);
    *(_DWORD*)(a1 + 10656) = *(_DWORD*)(v63 + 40);
    *(_DWORD*)(a1 + 10660) = *(_DWORD*)(v63 + 44);
    *(_QWORD*)(a1 + 10664) = *(_QWORD*)(v63 + 48);
    *(_WORD*)(a1 + 10672) = *(_WORD*)(v63 + 56);
    *(_QWORD*)(a1 + 10676) = *(_QWORD*)(v63 + 60);
    *(_DWORD*)(a1 + 10684) = *(_DWORD*)(v63 + 68);
    *(_DWORD*)(a1 + 10688) = *(_DWORD*)(v63 + 72);
    *(_DWORD*)(a1 + 10692) = *(_DWORD*)(v63 + 76);
    v64 = *(_DWORD*)StreamHeaderLoadTask_296940(v25 + 8);
    v65 = *(_BYTE*)(a1 + 10616);
    *(_DWORD*)(a1 + 10696) = v64;
    v66 = BaseNx_288c90(v65);
    *(_DWORD*)(a1 + 10700) = v66;
    if ((unsigned int)(v66 - 1) <= 1) {
      *(_DWORD*)(a1 + 10704) = 2;
    }
    v67 = StreamHeaderLoadTask_296840(v24);
    v68 = StreamHeaderLoadTask_296900(v25 + 8);
    v69 = *(_DWORD*)(a1 + 10640);
    v70 = v67 + *(_DWORD*)(v68 + 52);
    *(_DWORD*)(a1 + 10724) = *(_DWORD*)(a1 + 10620);
    v71 = *(_DWORD*)(a1 + 10628);
    *(_BYTE*)(a1 + 10728) = *(_BYTE*)(a1 + 10617);
    v72 = *(_DWORD*)(a1 + 10624);
    v73 = *(_DWORD*)(a1 + 10636);
    *(_DWORD*)(a1 + 10720) = v73;
    v74 = *(_DWORD*)(a1 + 10696);
    *(_DWORD*)(a1 + 10716) = v69;
    v70 += 8;
    *(_DWORD*)(a1 + 10708) = v70;
    *(_DWORD*)(a1 + 10712) = v71;
    *(_DWORD*)(a1 + 10732) = v72;
    *(_DWORD*)(a1 + 10736) = (v71 - 1) / v69;
    *(_DWORD*)(a1 + 10740) = *(_DWORD*)(a1 + 10644);
    *(_DWORD*)(a1 + 10744) = *(_DWORD*)(a1 + 10648);
    *(_DWORD*)(a1 + 10748) = v72 / v69;
    *(_DWORD*)(a1 + 10756) = v72 % v69;
    v75 = *(_QWORD*)(a1 + 5664);
    v76 = v70 + v72 / v69 * v73 * v74;
    *(_DWORD*)(a1 + 10752) = v76;
    *(_DWORD*)(v75 + 80) = v76;
    if (*(_DWORD*)(a1 + 10700) == 2 && *(int*)(a1 + 10696) >= 1) {
      v77 = 0;
      v78 = a1 + 10390;
      do {
        v79 = (unsigned int*)StreamHeaderLoadTask_296940(v25 + 8);
        v80 = StreamHeaderLoadTask_2969a0(v79, v77);
        v81 = StreamHeaderLoadTask_2969e0((__int64)v80);
        ++v77;
        *(_QWORD*)(v78 - 38) = *(_QWORD*)v81;
        v82 = *(_QWORD*)(v81 + 8);
        v83 = *(_QWORD*)(v81 + 16);
        v84 = *(_QWORD*)(v81 + 24);
        *(_QWORD*)(v78 - 8) = *(_QWORD*)(v81 + 30);
        *(_QWORD*)(v78 - 14) = v84;
        *(_QWORD*)(v78 - 22) = v83;
        *(_QWORD*)(v78 - 30) = v82;
        LODWORD(v82) = *(_DWORD*)(v81 + 38);
        *(_WORD*)(v78 + 4) = *(_WORD*)(v81 + 42);
        *(_DWORD*)v78 = v82;
        v78 += 44;
      } while (v77 < *(int*)(a1 + 10696));
    }
    *(_DWORD*)(a1 + 6252) = 0;
    result = ((__int64 (*)(__int64))StreamHeaderLoadTask_2966c0)(v24);
    if ((result & 1) != 0) {
      result = StreamHeaderLoadTask_296880(v24);
      v85 = *(unsigned __int16*)(a1 + 10672);
      if (*(_WORD*)(a1 + 10672) != 0 && *(_BYTE*)(a1 + 10619) != 0) {
        v86 = 0;
        v87 = result + *(_DWORD*)(a1 + 10680) + 8;
        v88 = a1 + 6256;
        do {
          (*(void (**)(_QWORD, _QWORD, _QWORD))(
              **(_QWORD**)(a1 + 5664) + 64LL))(*(_QWORD*)(a1 + 5664), v87, 0);
          result = (*(__int64 (**)(_QWORD, __int64, _QWORD))(
              **(_QWORD**)(a1 + 5664) + 72LL))(*(_QWORD*)(a1 + 5664), v88, v85);
          ++v86;
          v87 += v85;
          v88 += 256;
          ++*(_DWORD*)(a1 + 6252);
        } while (v86 < *(unsigned __int8*)(a1 + 10619));
      }
    }
  }
  return result;
}

float WavePlayer_Unknown201(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6)
{
  int v6;
  int v7;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  float v15;
  float result;
  _WORD* v17;
  __int16* v18;
  __int64 v19;
  __int64 v20;
  __int16 v21;
  _WORD* v22;
  __int16* v23;
  __int16 v24;
  signed int v25;
  int v26;
  int v27;
  unsigned int v28;
  __int64 v29;
  int v30;
  __int64 v31;
  unsigned int AdpcmSampleCountEm;
  int v33;
  int v34;
  int v35;
  int v36;
  _BYTE v37[200];

  v6 = *(_DWORD*)(a1 + 10736);
  v7 = *(_DWORD*)(a1 + 10768);
  if (v7 != v6 + 1) {
    v9 = *(_DWORD*)(a1 + 10716);
  LABEL_17:
    v25 = *(_DWORD*)(a1 + 10720);
    v26 = *(_DWORD*)(a1 + 10696);
    v27 = *(_DWORD*)(a1 + 10708);
    v28 = v26 * v25;
    *(_DWORD*)(a1 + 10784) = v9;
    v29 = (unsigned int)(v27 + v26 * v25 * v7);
    if (v7 >= v6) {
      *(_DWORD*)(a1 + 10784) = *(_DWORD*)(a1 + 10744);
      v25 = (*(_DWORD*)(a1 + 10740) + 7) & 0xFFFFFFF8;
      v28 = v25 * v26;
    }
    (*(void (**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 5664) + 64LL))(
        *(_QWORD*)(a1 + 5664), v29, 0);
    v30 = *(_DWORD*)(a1 + 10700);
    if (v30 == 2) {
      (*(void (**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 5664) + 72LL))(
          *(_QWORD*)(a1 + 5664), *(_QWORD*)(a1 + 5688), v28);
      v31 = v25;
      AdpcmSampleCountEm = nn_codec_GetAdpcmSampleCount(v25);
      v33 = *(_DWORD*)(a1 + 10716);
      v34 = *(_DWORD*)(a1 + 10704);
      nn_codec_DecodeAdpcm(*(_QWORD*)(a1 + 5696), a1 + 10848, a1 + 10854,
                           *(_QWORD*)(a1 + 5688), v31, AdpcmSampleCountEm);
      nn_codec_DecodeAdpcm(*(_QWORD*)(a1 + 5696) + v34 * (__int64)v33,
                           a1 + 10886, a1 + 10892, *(_QWORD*)(a1 + 5688) + v31,
                           v31, AdpcmSampleCountEm);
    }
    else if (v30 == 1) {
      (*(void (**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 5664) + 72LL))(
          *(_QWORD*)(a1 + 5664), *(_QWORD*)(a1 + 5696), v28);
    }
    v35 = *(_DWORD*)(a1 + 10780);
    v36 = *(_DWORD*)(a1 + 10768);
    *(_DWORD*)(a1 + 10780) = 0;
    result = (float)v35;
    *(_DWORD*)(a1 + 10768) = v36 + 1;
    *(float*)(a1 + 10776) = result;
    return result;
  }
  if (*(_BYTE*)(a1 + 10728) == 1) {
    v7 = *(_DWORD*)(a1 + 10748);
    v9 = *(_DWORD*)(a1 + 10716);
    *(_DWORD*)(a1 + 5600) = 0;
    *(_DWORD*)(a1 + 10768) = v7;
    *(_DWORD*)(a1 + 5592) = v9 * v7;
    if (*(_DWORD*)(a1 + 10700) == 2) {
      v10 = *(_DWORD*)(a1 + 10696);
      if (v10 >= 1) {
        v11 = v10 & 3;
        if ((unsigned int)v10 >= 4) {
          v17 = (_WORD*)(a1 + 10966);
          v18 = (__int16*)(a1 + 10526);
          v19 = 0;
          v20 = -(__int64)(v10 & 0x7FFFFFFC);
          do {
            v19 -= 4;
            *(v17 - 59) = *(v18 - 68);
            *(v17 - 58) = *(v18 - 67);
            *(v17 - 57) = *(v18 - 66);
            *(v17 - 40) = *(v18 - 46);
            *(v17 - 39) = *(v18 - 45);
            *(v17 - 38) = *(v18 - 44);
            *(v17 - 21) = *(v18 - 24);
            *(v17 - 20) = *(v18 - 23);
            *(v17 - 19) = *(v18 - 22);
            *(v17 - 2) = *(v18 - 2);
            *(v17 - 1) = *(v18 - 1);
            v21 = *v18;
            v18 += 88;
            *v17 = v21;
            v17 += 76;
          } while (v20 != v19);
          v12 = -v19;
        }
        else {
          v12 = 0;
        }
        if (v11 != 0) {
          v22 = (_WORD*)(a1 + 38 * v12 + 10852);
          v23 = (__int16*)(a1 + 44 * v12 + 10394);
          do {
            --v11;
            *(v22 - 2) = *(v23 - 2);
            *(v22 - 1) = *(v23 - 1);
            v24 = *v23;
            v23 += 22;
            *v22 = v24;
            v22 += 19;
          } while (v11 != 0);
        }
      }
    }
    ++*(_DWORD*)(a1 + 5604);
    goto LABEL_17;
  }
  v13 = *(_DWORD*)(a1 + 10716);
  v14 = *(_QWORD*)(a1 + 5696);
  v15 = (float)*(int*)(a1 + 10780);
  *(_DWORD*)(a1 + 10780) = 0;
  *(_DWORD*)(a1 + 10784) = v13;
  *(float*)(a1 + 10776) = v15;
  memset(v14, 0, 0x10000, a4, a5, a6);
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 5664) + 176LL))(
           *(_QWORD*)(a1 + 5664)) &
       1) == 0) {
    snd_Fade_Fade_10c830(v37);
    (*(void (**)(__int64, _BYTE*))(*(_QWORD*)a1 + 1312LL))(a1, v37);
    snd_Fade_Destroy_Fade(v37);
  }
  return result;
}

void WavePlayer_188660(__int64 a1, _WORD* a2, _WORD* a3)
{
  *a2 = a3[19];
  a2[1] = a3[20];
  a2[2] = a3[21];
}

#pragma GCC visibility pop
