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
