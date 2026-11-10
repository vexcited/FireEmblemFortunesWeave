#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BaseNx_14a240(_QWORD, _QWORD);
__int64 Crc32List_119b10(__int64);
__int64 GameRoutine_190020(_QWORD, _QWORD);
__int64 GameRoutine_190200(_QWORD, _QWORD);
__int64 GameRoutine_1905a40(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f7060(_QWORD);
__int64 Obj_1261b0(__int64, __int64, __int64, __int64, __int64, __int64);
__int64 VoiceBase_Destructor(_QWORD);
__int64 Voice_145920_alt1(_QWORD) __asm__("Voice_145920");
__int64 Voice_145f60(_QWORD, _QWORD, _QWORD, double);
__int64 nn_os_InitializeMutex(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 snd_Fade_CtrlTypeAHDSR_setState(_QWORD, _QWORD);
__int64 snd_Fade_Fade_10c910(_QWORD, _QWORD);
__int64 snd_HandlePtr_registerHandle(_QWORD);
__int64 snd_Obj_Obj(void);
__int64 snd_Param_isEnvelopeEnded(_QWORD);
__int64 snd_Param_isEnvelopeFading(_QWORD);
__int64 snd_Param_isEnvelopeReleased(_QWORD);
__int64 snd_Param_update(_QWORD, float);
__int64 snd_fnd_WeakHandle_get(_QWORD, float);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 snd_fnd_WeakHandle_reset(_QWORD, long double);
__int64 snd_fnd_WeakHandle_set(_QWORD, _QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
__n128 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64 (*GameData_1f5ba50[])();
extern __int64 (*GameData_1f5bd78[])();
extern __int64 (*GameData_1f5c1e0[])();
extern __int64 snd_g_memory;
extern __int64 snd_g_proxy_ptr[2];
extern __int64* GameData_2134248[3];
extern __int64* GameData_21346b8[4];
extern __int64* GameData_21346c0[3];
extern __int64* GameData_21346c8[2];
extern __int64* snd_g_memory_ptr[2];
extern __int64* snd_s_target_ptr;
extern char GameData_1a9f09e;
long double Crc32List_11ec20(_QWORD, _QWORD, _QWORD);
void GameRoutine_651250(void*, unsigned __int64);
__int64 Voice_1434a0(__int64 a1, __int64 a2, __int64 a3, char a4, int a5,
                     __int64 a6);
__n128 Voice_144910(_BYTE* a1, __n128 result);
__int64 Voice_1449c0(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                     __int64 a5);
__int64 Voice_Destructor(__int64 a1);
char** Voice_145920(char** result);
void Voice_DeletingDestructor(__int64 a1);
void Voice_145e20(__int64 a1, float a2);
void Voice_1460e0(__int64 a1);
__int64 Voice_149b20(__int64 a1, _QWORD* a2);
__int64 Voice_Unknown98(__int64 result);

__int64 Voice_1434a0(__int64 a1, __int64 a2, __int64 a3, char a4, int a5,
                     __int64 a6)
{
  _BYTE* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;
  __int64* v19;
  __int64 result;

  v10 = (_BYTE*)(a1 + 4096);
  snd_Obj_Obj();
  Obj_1261b0(a1 + 40, v11, v12, v13, v14, v15);
  v16 = GameData_2134248[0];
  *(_DWORD*)(a1 + 5600) = 0x2000;
  *(_QWORD*)(a1 + 5592) = v16 + 2;
  snd_HandlePtr_registerHandle(a1 + 5592);
  v17 = GameData_21346b8[0];
  *(_QWORD*)(a1 + 5608) = 0;
  *(_QWORD*)(a1 + 5616) = 0;
  *(_QWORD*)(a1 + 5624) = 0;
  *(_QWORD*)(a1 + 5632) = 0;
  *(_QWORD*)(a1 + 5640) = 0;
  *(_QWORD*)(a1 + 5648) = 0;
  *(_QWORD*)(a1 + 5656) = 0;
  *(_QWORD*)(a1 + 5664) = 0;
  *(_QWORD*)(a1 + 5672) = 0;
  *(_QWORD*)a1 = v17 + 2;
  *(_QWORD*)(a1 + 5592) = v17 + 154;
  *(_QWORD*)(a1 + 40) = v17 + 13;
  GameRoutine_190020(a1 + 5680, &GameData_1a9f09e);
  *(_QWORD*)(a1 + 5704) = 0;
  GameRoutine_190020(a1 + 5712, &GameData_1a9f09e);
  GameRoutine_190020(a1 + 5736, &GameData_1a9f09e);
  *(_QWORD*)(a1 + 5760) = 0;
  *(_QWORD*)(a1 + 5776) = 0;
  *(_QWORD*)(a1 + 5768) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 5784) = 0xFFFFFFFFLL;
  if (a6 != 0) {
    v18 = a6 + 5592;
  }
  else {
    v18 = 0;
  }
  *(_DWORD*)(a1 + 5792) = 0;
  *(_QWORD*)(a1 + 5800) = 0;
  *(_DWORD*)(a1 + 5808) = 0x2000;
  *(_QWORD*)(a1 + 5816) = 0;
  *(_DWORD*)(a1 + 5824) = 0x2000;
  *(_QWORD*)(a1 + 5832) = 0;
  *(_DWORD*)(a1 + 5840) = 0x2000;
  *(_QWORD*)(a1 + 5848) = 0;
  *(_DWORD*)(a1 + 5856) = 0x2000;
  *(_QWORD*)(a1 + 5864) = 0;
  *(_DWORD*)(a1 + 5872) = 0x2000;
  snd_fnd_WeakHandle_set(a1 + 5864, v18);
  v10[1788] = a4;
  *(_DWORD*)(a1 + 5880) = 0;
  *(_DWORD*)(a1 + 5924) = a5;
  *(_QWORD*)(a1 + 5948) = 0;
  *(_QWORD*)(a1 + 5960) = 0;
  *(_DWORD*)(a1 + 5968) = 0;
  *(_QWORD*)(a1 + 5928) = 0;
  *(_QWORD*)(a1 + 5936) = 0;
  *(_WORD*)(a1 + 5944) = 0;
  *(_QWORD*)(a1 + 5885) = 0;
  *(_QWORD*)(a1 + 5893) = 0;
  *(_QWORD*)(a1 + 5901) = 0;
  *(_QWORD*)(a1 + 5909) = 0;
  *(_QWORD*)(a1 + 5916) = 0;
  nn_os_InitializeMutex(a1 + 5944, 1, 0);
  *(_QWORD*)(a1 + 5984) = 0;
  *(_QWORD*)(a1 + 5976) = 0;
  *(_DWORD*)(a1 + 5992) = 0x2000;
  v10[1904] = 0;
  *(_QWORD*)(a1 + 6008) = 0;
  *(_QWORD*)(a1 + 6016) = 0;
  *(_QWORD*)(a1 + 6024) = 0;
  *(_QWORD*)(a1 + 6032) = 0;
  *(_QWORD*)(a1 + 6040) = 0;
  *(_QWORD*)(a1 + 6048) = 0;
  *(_QWORD*)(a1 + 6056) = 0;
  *(_BYTE*)(a1 + 6064) = 0;
  *(_QWORD*)(a1 + 5648) = Crc32List_119b10(*(_QWORD*)(a1 + 32) + 2840LL);
  v10[1792] = snd_fnd_WeakHandle_isValid(a1 + 5864) & 1;
  GameRoutine_190200(a1 + 5680, &GameData_1a9f09e);
  GameRoutine_190200(a1 + 5712, &GameData_1a9f09e);
  *(_QWORD*)(a1 + 6036) = -1;
  *(_QWORD*)(a1 + 6044) = -1;
  *(_QWORD*)(a1 + 6052) = -1;
  v19 = snd_s_target_ptr;
  *(_QWORD*)(a1 + 5664) = (*(__int64 (**)(_QWORD))(*(_QWORD*)*snd_s_target_ptr +
                                                   424LL))(*snd_s_target_ptr);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)*v19 + 408LL))(*v19);
  *(_QWORD*)(a1 + 5760) = result;
  return result;
}

__n128 Voice_144910(_BYTE* a1, __n128 result)
{
  long double v3;
  long double v4;
  long double v5;
  _BYTE v6[200];

  if ((a1[5885] & 1) == 0) {
    snd_fnd_WeakHandle_reset(a1 + 5864, *(long double*)&result);
    snd_fnd_WeakHandle_reset(a1 + 5984, v3);
    snd_fnd_WeakHandle_reset(a1 + 5864, v4);
    snd_fnd_WeakHandle_reset(a1 + 5984, v5);
    a1[5885] = 1;
    (*(void (**)(_BYTE*))(*(_QWORD*)a1 + 784LL))(a1);
    snd_Fade_CtrlTypeAHDSR_setState(a1 + 3600, 7);
    snd_Fade_Fade_10c910(v6, 0);
    (*(void (**)(_BYTE*, _BYTE*))(*(_QWORD*)a1 + 776LL))(a1, v6);
    return snd_Fade_Destroy_Fade(v6);
  }
  return result;
}

__int64 Voice_1449c0(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result;

  result = Voice_1434a0((__int64)a1, a2, a3, *(_BYTE*)(a4 + 220),
                        *(_DWORD*)(a4 + 212), a5);
  *a1 = GameData_1f5ba50;
  a1[5] = GameData_1f5bd78;
  a1[699] = GameData_1f5c1e0;
  return result;
}

__int64 Voice_Destructor(__int64 a1)
{
  __int64* v2;
  long double v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  long double v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int16 v14;
  __int64 v15;
  void (***v16)(_QWORD, long double);
  void (***v17)(_QWORD, long double);
  void (***v18)(_QWORD, long double);
  void (***v19)(_QWORD, long double);
  void (**v20)(_QWORD, long double);
  bool v21;

  v2 = GameData_21346c0[0];
  *(_QWORD*)a1 = GameData_21346c0[0] + 2;
  *(_QWORD*)(a1 + 40) = v2 + 103;
  *(_QWORD*)(a1 + 5592) = v2 + 244;
  if ((snd_fnd_WeakHandle_isValid(a1 + 5848) & 1) != 0) {
    v4 = snd_fnd_WeakHandle_get(a1 + 5848, *(float*)&v3);
    (*(void (**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(v4 + 32) + 48LL))(
        *(_QWORD*)(v4 + 32), *(_QWORD*)(a1 + 5760), a1);
  }
  v5 = snd_s_target_ptr;
  if (*(_QWORD*)(a1 + 5760) != 0) {
    v6 = *snd_s_target_ptr;
    *(_QWORD*)(a1 + 5760) = 0;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 416LL))(v6);
  }
  v7 = *(_QWORD*)(a1 + 5664);
  if (v7 != 0 &&
      ((*(__int64 (**)(__int64))(*(_QWORD*)v7 + 24LL))(v7) & 1) != 0) {
    (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 5664) + 64LL))(
        *(_QWORD*)(a1 + 5664), 0);
    (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 5664) + 16LL))(
        *(_QWORD*)(a1 + 5664));
  }
  v8 = *(_QWORD*)(a1 + 5672);
  if (v8 != 0) {
    *(_BYTE*)(v8 + 16) = 1;
    *(_QWORD*)(a1 + 5672) = 0;
  }
  if (*(_BYTE*)(a1 + 5886) == 1 &&
      (snd_fnd_WeakHandle_isValid(a1 + 5848) & 1) != 0) {
    v9 = Crc32List_11ec20(*(_QWORD*)(a1 + 32), a1 + 5848, 0);
    snd_fnd_WeakHandle_reset(a1 + 5848, v9);
  }
  v10 = *(_QWORD*)(a1 + 5648);
  if (v10 != 0) {
    v11 = *(_QWORD*)(a1 + 32);
    *(_QWORD*)(a1 + 5648) = 0;
    GameRoutine_f7060(v10);
    nn_os_LockMutex(v11 + 2880);
    v12 = *(_QWORD*)(v11 + 2864);
    v13 = (v10 - *(_QWORD*)(v11 + 2856)) / 0x298uLL;
    v14 = *(_WORD*)(v11 + 2872) - 1;
    *(_WORD*)(v11 + 2872) = v14;
    *(_WORD*)(v12 + 2LL * v14) = v13;
    *(__n128*)&v3 = nn_os_UnlockMutex(v11 + 2880);
  }
  if (*(_QWORD*)(a1 + 5664) != 0) {
    v15 = *v5;
    *(_QWORD*)(a1 + 5664) = 0;
    (*(void (**)(__int64, long double))(*(_QWORD*)v15 + 432LL))(v15, v3);
  }
  v16 = *(void (****)(_QWORD, long double))(a1 + 6016);
  v17 = *(void (****)(_QWORD, long double))(a1 + 6008);
  if (v17 != v16) {
    v18 = v16 - 5;
    v19 = v16 - 5;
    do {
      v20 = *v19;
      v19 -= 5;
      (*v20)(v18, v3);
      v21 = v18 == v17;
      v18 = v19;
    } while (!v21);
  }
  *(_QWORD*)(a1 + 6016) = v17;
  Voice_145920_alt1(a1 + 6008);
  if (*(_QWORD*)(a1 + 5976) != 0) {
    *(_QWORD*)(a1 + 5976) = 0;
    (*(void (**)(__int64))(*(_QWORD*)snd_g_memory + 24LL))(snd_g_memory);
  }
  return VoiceBase_Destructor(a1);
}

char** Voice_145920(char** result)
{
  char* v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  char** v4;
  __int64* v5;
  char** v6;
  char* v7;
  char* v8;
  char* v9;
  __int64 v10;
  __int64* v11;
  __int64 (**v12)(_QWORD);
  __int64 (**v13)(_QWORD);
  char* v14;
  char* v15;
  char* v16;
  char* v17;
  __int64 (**v18)(char*);

  v1 = *result;
  v2 = result[2] - *result;
  v3 = result[1] - *result;
  if (v2 > v3) {
    v4 = result;
    v5 = snd_g_memory_ptr[0];
    if (0xCCCCCCCCCCCCCCCDLL * ((__int64)v3 >> 3) - 0x666666666666667LL >=
        0xF99999999999999ALL) {
      result = (char**)(*(__int64 (**)(_QWORD, unsigned __int64, __int64))(
          **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], v3,
                                                   32);
      v1 = *v4;
      v6 = result;
      if (v3 >= v4[2] - *v4) {
      LABEL_4:
        if (v6 == nullptr) {
          return result;
        }
        return (char**)(*(__int64 (**)(__int64))(*(_QWORD*)*v5 + 24LL))(*v5);
      }
    }
    else {
      v6 = nullptr;
      if (v3 >= v2) {
        goto LABEL_4;
      }
    }
    v7 = v4[1];
    v8 = (char*)v6 + v3;
    v9 = &v8[v1 - v7];
    if (v1 != v7) {
      v10 = 0;
      v11 = GameData_21346c8[0] + 2;
      do {
        v15 = &v9[v10];
        *(_QWORD*)&v9[v10] = v11;
        v16 = &v9[v10 + 8];
        if ((v1[v10 + 8] & 1) != 0) {
          GameRoutine_1905a40(v16, *(_QWORD*)&v1[v10 + 24],
                              *(_QWORD*)&v1[v10 + 16]);
        }
        else {
          v12 = *(__int64 (***)(_QWORD))&v1[v10 + 8];
          v13 = *(__int64 (***)(_QWORD))&v1[v10 + 24];
          *(_QWORD*)&v9[v10 + 16] = *(_QWORD*)&v1[v10 + 16];
          *(_QWORD*)&v9[v10 + 24] = v13;
          *(_QWORD*)v16 = v12;
        }
        v14 = &v1[v10];
        v10 += 40;
        *((_DWORD*)v15 + 8) = *((_DWORD*)v14 + 8);
      } while (&v1[v10] != v7);
      v17 = v1;
      do {
        v18 = *(__int64 (***)(char*))v17;
        v17 += 40;
        result = (char**)(*v18)(v1);
        v1 = v17;
      } while (v17 != v7);
      v1 = *v4;
    }
    *v4 = v9;
    v4[1] = v8;
    v4[2] = v8;
    if (v1 != nullptr) {
      return (char**)(*(__int64 (**)(__int64))(*(_QWORD*)*v5 + 24LL))(*v5);
    }
  }
  return result;
}

void Voice_DeletingDestructor(__int64 a1)
{
  Voice_Destructor(a1 - 5592);
  GameRoutine_651250((void*)(a1 - 5592), 0x17B8u);
}

void Voice_145e20(__int64 a1, float a2)
{
  __int64 v2;
  char v5;
  __int64 v6;
  char v7;
  char v8;
  float v9;
  __int64 v10;
  __int64 v11;
  _BYTE v12[200];

  v2 = a1 + 4096;
  if ((*(_BYTE*)(a1 + 5885) & 1) == 0 && *(_DWORD*)(a1 + 5792) != 1 &&
      (*(_BYTE*)(a1 + 5893) & 1) == 0 && *(_BYTE*)(a1 + 5903) == 1) {
    v5 = snd_Param_isEnvelopeReleased(a1 + 40);
    v6 = a1;
    if ((v5 & 1) != 0 ||
        (v7 = snd_Param_isEnvelopeFading(a1 + 40), v6 = a1, (v7 & 1) != 0) ||
        (v8 = snd_Param_isEnvelopeEnded(a1 + 40), v6 = a1, (v8 & 1) != 0) ||
        *(float*)(*(_QWORD*)(a1 + 5648) + 256LL) < 0.0f ||
        (v9 = (*(float (**)(__int64))(*(_QWORD*)(a1 + 40) + 1088LL))(a1 + 40),
         v6 = a1,
         v9 < (float)(*(float*)(*(_QWORD*)(a1 + 5648) + 256LL) / 16.667f))) {
      v10 = v6;
      snd_Param_update(v6 + 40, a2);
      v11 = *(_QWORD*)(v10 + 5664);
      if (v11 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 168LL))(v11);
      }
    }
    else {
      *(_BYTE*)(v2 + 1801) = 1;
      snd_Fade_Fade_10c830(v12, 0.0f);
      Voice_145f60(a1, v12, 0, 0.0f);
      snd_Fade_Destroy_Fade(v12);
    }
  }
}

void Voice_1460e0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  float v5;
  __int64 v6;
  float v7;
  _BYTE v8[200];
  float v9;
  float v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  if ((*(_BYTE*)(a1 + 5885) & 1) == 0 && *(_DWORD*)(a1 + 5792) != 1 &&
      (*(_BYTE*)(a1 + 5893) & 1) == 0 && *(_BYTE*)(a1 + 5903) == 1 &&
      *(int*)(*(_QWORD*)(a1 + 5648) + 592LL) >= 1) {
    v11 = v3;
    v12 = v1;
    v13 = v2;
    v4 = (_QWORD*)a1;
    (*(void (**)(_QWORD* __return_ptr, _QWORD, __int64, float*, float*))(
        **(_QWORD**)snd_g_proxy_ptr[0] + 464LL))(*(_QWORD**)snd_g_proxy_ptr[0],
                                                 *(_QWORD*)snd_g_proxy_ptr[0],
                                                 a1, &v10, &v9);
    v5 = v10;
    snd_Fade_Fade_10c910(v8, 300);
    v6 = v4[5];
    v4 += 5;
    (*(void (**)(_QWORD*, _BYTE*, float))(v6 + 208))(v4, v8, v5);
    snd_Fade_Destroy_Fade(v8);
    v7 = v9;
    snd_Fade_Fade_10c910(v8, 300);
    (*(void (**)(_QWORD*, _BYTE*, float))(*v4 + 512LL))(v4, v8, v7);
    snd_Fade_Destroy_Fade(v8);
  }
}

__int64 Voice_149b20(__int64 a1, _QWORD* a2)
{
  __int64 result;

  result = a1 + 6008;
  if ((_QWORD*)result != a2) {
    return BaseNx_14a240(result, *a2);
  }
  return result;
}

__int64 Voice_Unknown98(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  char v4;
  char v5;
  char v6;
  __int64 v7;
  __int64 v8;

  v1 = result + 4096;
  if ((*(_BYTE*)(result + 5885) & 1) != 0) {
    LOBYTE(v2) = 0;
  LABEL_3:
    *(_BYTE*)(v1 + 1800) = (unsigned __int8)v2 & 1;
    return result;
  }
  if ((*(_BYTE*)(result + 5895) & 1) != 0) {
    goto LABEL_5;
  }
  if (*(float*)(*(_QWORD*)(result + 5648) + 256LL) < 0.0 ||
      (v3 = result, v4 = snd_Param_isEnvelopeReleased(result + 40), result = v3,
       (v4 & 1) != 0) ||
      (v5 = snd_Param_isEnvelopeFading(v3 + 40), result = v3, (v5 & 1) != 0) ||
      (v6 = snd_Param_isEnvelopeEnded(v3 + 40), result = v3, (v6 & 1) != 0)) {
    if ((unsigned int)(*(_DWORD*)(result + 5792) - 1) >= 5) {
      v7 = *(_QWORD*)(result + 5648);
      if (*(_DWORD*)(v7 + 120) == 0 || *(_DWORD*)(v7 + 124) == 0) {
        v2 = *(_QWORD**)(result + 5664);
        if (v2 == nullptr) {
          goto LABEL_3;
        }
        v8 = result;
        result = (__int64)(*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD))(
            *v2 + 24LL))(v2, *(_QWORD*)(result + 5664));
        if ((result & 1) == 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 704LL))(v8);
          if ((result & 1) == 0) {
          LABEL_5:
            *(_BYTE*)(v1 + 1800) = 0;
            return result;
          }
        }
      }
    }
    *(_BYTE*)(v1 + 1800) = 1;
  }
  else {
    *(_BYTE*)(v1 + 1800) = (*(_BYTE*)(v1 + 1801) ^ 1) & 1;
  }
  return result;
}

#pragma GCC visibility pop
