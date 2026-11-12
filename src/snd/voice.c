#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

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
__n128 Voice_144910_alt1(_BYTE* a1, __n128 result) __asm__("Voice_144910");
__int64 Voice_1449c0(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                     __int64 a5);
__int64 Voice_Destructor(__int64 a1);
char** Voice_145920(char** result);
void Voice_DeletingDestructor(__int64 a1);
void Voice_145e20(__int64 a1, float a2);
void Voice_1460e0_alt1(__int64 a1) __asm__("Voice_1460e0");
__int64 Voice_149b20(__int64 a1, _QWORD* a2);
__int64 Voice_Unknown98(__int64 result);
_BYTE* snd_fnd_calcCrc32Reverse(_BYTE* result, int);
_QWORD* GameRoutine_a3a3a0(_QWORD*, __int64, unsigned __int64);
__int64* GameRoutine_a3a260(__int64*, __int64, unsigned __int64);
__int64 Archive_106980(__int64, int*);
__int64 GameRoutine_118fd0(_QWORD);
__int64 GameRoutine_119010(_QWORD);
__int64 GameRoutine_190200_alt1(__int64, char*) __asm__("GameRoutine_190200");
__int64 GameRoutine_190240(__int64);
__int64 GameRoutine_190260(unsigned __int8*, unsigned __int8*,
                           unsigned __int64);
__int64
GameRoutine_1905a40_alt1(__int64*, __int64,
                         unsigned __int64) __asm__("GameRoutine_1905a40");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_fnd_WeakHandle_get_alt1(__int64) __asm__("snd_fnd_WeakHandle_get");
bool snd_Param_isEnvelopeEnded_alt1(__int64) __asm__(
    "snd_Param_isEnvelopeEnded");
bool snd_Param_isEnvelopeFading_alt1(__int64) __asm__(
    "snd_Param_isEnvelopeFading");
bool snd_Param_isEnvelopeReleased_alt1(__int64) __asm__(
    "snd_Param_isEnvelopeReleased");
double snd_Fade_getValue(__int64);
extern __int64 snd_s_target;
float SeqVoice_12e0c0(__int64, __int64);
float snd_Param_calcVolume_126a10(float*);
unsigned __int64 GameRoutine_190020_alt1(__int64*,
                                         char*) __asm__("GameRoutine_190020");
unsigned __int8* snd_fnd_calcCrc32(unsigned __int8* result, int);
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
__int64 Voice_143700(__int64 a1, __int64 a2);
_BYTE* Voice_143ad0(__int64 a1);
double Voice_1446e0(__int64 a1);
float Voice_1482c0(__int64 a1);
float Voice_148950(__int64 a1);
float Voice_148cc0(__int64 a1);
float Voice_149830(__int64 a1);
float Voice_1498c0(__int64 a1);
float Voice_149930(__int64 a1);
float Voice_1499b0(__int64 a1);
__int64 Voice_149b60(int* a1, int a2, float a3, float a4);
__int64 Voice_143b80(__int64 result, const char* a2);
__int64 Obj_1261b0_alt1(__int64) __asm__("Obj_1261b0");
__int64 nn_os_InitializeMutex_alt1(__int64, bool,
                                   int) __asm__("nn_os_InitializeMutex");
__int64 snd_Fade_CtrlTypeAHDSR_setState_alt1(__int64 result, int) __asm__(
    "snd_Fade_CtrlTypeAHDSR_setState");
__int64 snd_HandlePtr_registerHandle_alt1(__int64) __asm__(
    "snd_HandlePtr_registerHandle");
__int64 snd_Obj_Obj_alt1(_QWORD*, __int64, __int64) __asm__("snd_Obj_Obj");
__int64
snd_fnd_WeakHandle_isValid_alt1(__int64*) __asm__("snd_fnd_WeakHandle_isValid");
__int64
snd_fnd_WeakHandle_reset_alt1(__int64) __asm__("snd_fnd_WeakHandle_reset");
__int64 snd_fnd_WeakHandle_set_alt1(__int64,
                                    __int64) __asm__("snd_fnd_WeakHandle_set");
unsigned __int64
GameRoutine_190020_alt2(__int64*, const char*) __asm__("GameRoutine_190020");
void snd_Fade_Fade_10c910_alt1(__int64, int) __asm__("snd_Fade_Fade_10c910");
_BYTE* Voice_144910(_BYTE* result);
__int64 Voice_1460e0(__int64 result);
__attribute__((swiftcall)) void Manager_1181f0(PSEUDO_X8, __int64 result, int);
__attribute__((swiftcall)) void Manager_11e880(PSEUDO_X8, __int64 result,
                                               __int64, unsigned int);
__attribute__((swiftcall)) void
Manager_11ea40(PSEUDO_X8, __int64 result, __int64, unsigned int, unsigned int);
__int64 Archive_106680(__int64, unsigned __int8*);
__int64 Crc32List_1212c0(__int64, unsigned __int8*);
__int64 GameRoutine_112180(__int64, __int64);
__int64 GameRoutine_145cc0(__int64, __int64);
__int64 GameRoutine_f1b80(__int64 result, unsigned __int8*);
__int64 GameRoutine_f5740(int*, _QWORD*);
__int64 Voice_144910_alt2(__int64 result) __asm__("Voice_144910");
__int64 snd_(__int64);
__int64 snd_120f10(__int64, __int64);
__int64 snd_data_f0230(__int64, __int64, unsigned __int8*);
const char* GameRoutine_f4760(_DWORD*);
const char*
snd_fnd_calcCrc32Reverse_alt1(const char* result,
                              int) __asm__("snd_fnd_calcCrc32Reverse");
extern __int64 snd_g_proxy;
float snd_fnd_calcDistance_fec30(float, float, float, float, float, float);
int rand();
void GameRoutine_f05f0();
void Voice_143d90(_QWORD*, __int64);
__int64 Voice_1447d0(_QWORD* a1, char a2);
__int64 Voice_144a10(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                     unsigned __int8* a5, __int64 a6, __int64 a7, __int64 a8);
__int64 Voice_144f50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9);
__int64 Voice_145090(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                     unsigned __int8* a5, __int64 a6, __int64 a7, float a8,
                     float a9, float a10);
__int64 Voice_1453c0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int* a5,
                     __int64 a6, __int64 a7, __int64 a8, float a9, float a10,
                     float a11);
__int64 Voice_Unknown96(__int64 a1, char a2);
__int64 Voice_146ce0(__int64 a1);
__int64 Voice_149440(__int64 a1);
__int64 Voice_1494e0(__int64 a1);
__int64 Voice_149580(__int64 a1);
__int64 Actor_101c40(__int64 result, float);
__int64 Crc32List_11ed40(__int64, int*);
__int64 snd_FadeRandom_start(__int64 result, double, float, float, float);
extern __int64 snd_g_frameCount_ptr;

__int64 Voice_1434a0(__int64 a1, __int64 a2, __int64 a3, char a4, int a5,
                     __int64 a6)
{
  _BYTE* v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64* v14;
  __int64 result;

  v10 = (_BYTE*)(a1 + 4096);
  snd_Obj_Obj_alt1((_QWORD*)a1, a2, a3);
  Obj_1261b0_alt1(a1 + 40);
  v11 = GameData_2134248[0];
  *(_DWORD*)(a1 + 5600) = 0x2000;
  *(_QWORD*)(a1 + 5592) = v11 + 2;
  snd_HandlePtr_registerHandle_alt1(a1 + 5592);
  v12 = GameData_21346b8[0];
  *(_QWORD*)(a1 + 5608) = 0;
  *(_QWORD*)(a1 + 5616) = 0;
  *(_QWORD*)(a1 + 5624) = 0;
  *(_QWORD*)(a1 + 5632) = 0;
  *(_QWORD*)(a1 + 5640) = 0;
  *(_QWORD*)(a1 + 5648) = 0;
  *(_QWORD*)(a1 + 5656) = 0;
  *(_QWORD*)(a1 + 5664) = 0;
  *(_QWORD*)(a1 + 5672) = 0;
  *(_QWORD*)a1 = v12 + 2;
  *(_QWORD*)(a1 + 5592) = v12 + 154;
  *(_QWORD*)(a1 + 40) = v12 + 13;
  GameRoutine_190020_alt2((__int64*)(a1 + 5680), &GameData_1a9f09e);
  *(_QWORD*)(a1 + 5704) = 0;
  GameRoutine_190020_alt2((__int64*)(a1 + 5712), &GameData_1a9f09e);
  GameRoutine_190020_alt2((__int64*)(a1 + 5736), &GameData_1a9f09e);
  *(_QWORD*)(a1 + 5760) = 0;
  *(_QWORD*)(a1 + 5776) = 0;
  *(_QWORD*)(a1 + 5768) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 5784) = 0xFFFFFFFFLL;
  if (a6 != 0) {
    v13 = a6 + 5592;
  }
  else {
    v13 = 0;
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
  snd_fnd_WeakHandle_set_alt1(a1 + 5864, v13);
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
  nn_os_InitializeMutex_alt1(a1 + 5944, true, 0);
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
  v10[1792] = snd_fnd_WeakHandle_isValid_alt1((__int64*)(a1 + 5864)) & 1;
  GameRoutine_190200_alt1(a1 + 5680, &GameData_1a9f09e);
  GameRoutine_190200_alt1(a1 + 5712, &GameData_1a9f09e);
  *(_QWORD*)(a1 + 6036) = -1;
  *(_QWORD*)(a1 + 6044) = -1;
  *(_QWORD*)(a1 + 6052) = -1;
  v14 = snd_s_target_ptr;
  *(_QWORD*)(a1 + 5664) = (*(__int64 (**)(_QWORD))(*(_QWORD*)*snd_s_target_ptr +
                                                   424LL))(*snd_s_target_ptr);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)*v14 + 408LL))(*v14);
  *(_QWORD*)(a1 + 5760) = result;
  return result;
}

__int64 Voice_143700(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64* v5;
  _QWORD* v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64* v17;
  __int64 v18;
  unsigned __int64 v19;
  _BYTE* v20;
  unsigned __int64 v21;
  __int64 v22;
  bool v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  _QWORD* v28;
  __int64* v29;
  __int64* v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int8* v35;
  unsigned int v36;
  _BYTE* v37;
  unsigned int v38;
  char v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  _QWORD* v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  __int64 v49;
  __int64* v50;
  int v51;
  const char* v52;
  __int64 v53;
  unsigned int v54;
  char* v55;
  __int64 result;
  __int64 v57;
  __int64 v58[3];
  __int64 v59[3];
  struct {
    __int64 v60[2];
    __int64 v61;
  } v60_;

  v2 = a1 + 4096;
  v5 = (__int64*)(a1 + 5736);
  *(_DWORD*)(*(_QWORD*)(a1 + 5664) + 28LL) = 0;
  v6 = *(_QWORD**)(a1 + 5648);
  v7 = v6 + 4;
  if ((_QWORD*)(a1 + 5736) == v6 + 4) {
    goto LABEL_13;
  }
  v8 = *(unsigned __int8*)v7;
  if ((*(_BYTE*)v5 & 1) != 0) {
    v13 = (__int64)v6 + 33;
    v16 = v6 + 5;
    v14 = v6[5];
    v15 = v16[1];
    v17 = (__int64*)(a1 + 5736);
    if ((v8 & 1) != 0) {
      v18 = v15;
    }
    else {
      v18 = v13;
    }
    if ((v8 & 1) != 0) {
      v19 = v14;
    }
    else {
      v19 = v8 >> 1;
    }
    GameRoutine_a3a260(v17, v18, v19);
  LABEL_13:
    v12 = *(char**)(a2 + 232);
    if (v12 != nullptr) {
      goto LABEL_14;
    }
    goto LABEL_27;
  }
  if ((v8 & 1) != 0) {
    GameRoutine_a3a3a0((_QWORD*)(a1 + 5736), v6[6], v6[5]);
    v12 = *(char**)(a2 + 232);
    if (v12 != nullptr) {
      goto LABEL_14;
    }
  LABEL_27:
    v28 = *(_QWORD**)(a1 + 5648);
    v29 = (__int64*)(v2 + 1584);
    v30 = v28 + 10;
    if ((_QWORD*)(v2 + 1584) != v28 + 10) {
      v31 = *(unsigned __int8*)v30;
      if ((*(_BYTE*)v29 & 1) != 0) {
        v40 = (__int64)v28 + 81;
        v43 = v28 + 11;
        v41 = v28[11];
        v42 = v43[1];
        if ((v31 & 1) != 0) {
          v44 = v42;
        }
        else {
          v44 = v40;
        }
        if ((v31 & 1) != 0) {
          v45 = v41;
        }
        else {
          v45 = v31 >> 1;
        }
        GameRoutine_a3a260(v29, v44, v45);
      }
      else if ((v31 & 1) != 0) {
        GameRoutine_a3a3a0(v29, v28[12], v28[11]);
      }
      else {
        v32 = *v30;
        v33 = v30[1];
        v34 = v30[2];
        *(_QWORD*)(v2 + 1592) = v33;
        *(_QWORD*)(v2 + 1600) = v34;
        *v29 = v32;
      }
    }
    v46 = *(_QWORD*)(a1 + 5648);
    *(_DWORD*)(a1 + 5704) = *(_DWORD*)(v46 + 104);
    *(_DWORD*)(a1 + 5708) = *(_DWORD*)(v46 + 108);
    goto LABEL_44;
  }
  v9 = *v7;
  v10 = v7[1];
  v11 = v7[2];
  *(_QWORD*)(a1 + 5744) = v10;
  *(_QWORD*)(a1 + 5752) = v11;
  *v5 = v9;
  v12 = *(char**)(a2 + 232);
  if (v12 == nullptr) {
    goto LABEL_27;
  }
LABEL_14:
  v20 = (_BYTE*)(v2 + 1584);
  GameRoutine_190200_alt1(v2 + 1584, v12);
  v21 = *(unsigned __int8*)(v2 + 1584);
  if ((*(_BYTE*)(v2 + 1640) & 1) != 0) {
    v23 = (v21 & 1) == 0;
    v24 = v21 >> 1;
    if (v23) {
      v25 = a1 + 5681;
    }
    else {
      v25 = *(_QWORD*)(a1 + 5696);
    }
    if (v23) {
      v26 = v24;
    }
    else {
      v26 = *(_QWORD*)(a1 + 5688);
    }
    GameRoutine_a3a260(v5, v25, v26);
    if ((*v20 & 1) != 0) {
      goto LABEL_32;
    }
    goto LABEL_25;
  }
  if ((v21 & 1) == 0) {
    v22 = *(_QWORD*)(v2 + 1592);
    *v5 = *(_QWORD*)v20;
    v5[1] = v22;
    v5[2] = *(_QWORD*)(v2 + 1600);
    if ((*v20 & 1) != 0) {
      goto LABEL_32;
    }
  LABEL_25:
    v27 = *(_QWORD*)(v2 + 1592);
    v60_.v60[0] = *(_QWORD*)v20;
    v60_.v60[1] = v27;
    v60_.v61 = *(_QWORD*)(v2 + 1600);
    goto LABEL_33;
  }
  GameRoutine_a3a3a0(v5, *(_QWORD*)(a1 + 5696), *(_QWORD*)(a1 + 5688));
  if ((*v20 & 1) == 0) {
    goto LABEL_25;
  }
LABEL_32:
  GameRoutine_1905a40_alt1(v60_.v60, *(_QWORD*)(a1 + 5696),
                           *(_QWORD*)(a1 + 5688));
LABEL_33:
  v35 = (unsigned __int8*)GameRoutine_190240((__int64)v60_.v60);
  v36 = (unsigned int)snd_fnd_calcCrc32(v35, 0);
  v37 = (_BYTE*)GameRoutine_190240((__int64)v60_.v60);
  v38 = (unsigned int)snd_fnd_calcCrc32Reverse(v37, 0);
  v39 = v60_.v60[0];
  *(_DWORD*)(a1 + 5704) = v36;
  *(_DWORD*)(a1 + 5708) = v38;
  if ((v39 & 1) != 0) {
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        *snd_g_memory_ptr[0], v60_.v61);
  }
LABEL_44:
  v47 = (_QWORD*)snd_g_proxy_ptr[0];
  v48 = *(_QWORD*)snd_g_proxy_ptr[0];
  v49 = GameRoutine_190240(a1 + 5680);
  if (((*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v48 + 424LL))(
           v48, a1, v49) &
       1) != 0) {
    Voice_143ad0(a1);
  }
  v50 = snd_s_target_ptr;
  v51 = (*(__int64 (**)(_QWORD, __int64, __int64, __int64))(
      *(_QWORD*)*snd_s_target_ptr + 176LL))(*snd_s_target_ptr, a1 + 5704,
                                            a1 + 5772, a1 + 5776);
  *(_DWORD*)(a1 + 5768) = v51;
  if (v51 == -1 && *(_DWORD*)(*(_QWORD*)(a1 + 5648) + 120LL) == 0) {
    v52 = (const char*)GameRoutine_190240(a1 + 5680);
    (*(void (**)(_QWORD, const char*, ...))(*(_QWORD*)*v47 + 392LL))(
        *v47, "#SoundLibrary error : InvalidSoundId : %s\n", v52);
    *(_BYTE*)(v2 + 1799) = 1;
  }
  *(_DWORD*)(*(_QWORD*)(a1 + 5664) + 8LL) = *(_DWORD*)(a1 + 5772);
  *(_QWORD*)(*(_QWORD*)(a1 + 5664) + 16LL) = *(_QWORD*)(a1 + 5776);
  *(_DWORD*)(*(_QWORD*)(a1 + 5664) + 24LL) = *(_DWORD*)(a1 + 5768);
  v53 = GameRoutine_118fd0(*(_QWORD*)(a1 + 32));
  v54 = Archive_106980(v53, (int*)(a1 + 5704));
  v55 = (char*)(*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*v50 + 184LL))(*v50, v54, *(unsigned int*)(a1 + 5772),
                               *(_QWORD*)(a1 + 5776));
  GameRoutine_190020_alt1(v59, v55);
  GameRoutine_190020_alt1(v58, "_lp");
  result = GameRoutine_190260((unsigned __int8*)v59, (unsigned __int8*)v58, 0);
  v57 = result;
  if ((v58[0] & 1) != 0) {
    result = (*(__int64 (**)(_QWORD, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 24LL))(*snd_g_memory_ptr[0], v58[2]);
  }
  if (v57 != -1) {
    *(_BYTE*)(v2 + 1803) = 1;
  }
  if ((v59[0] & 1) != 0) {
    result = (*(__int64 (**)(_QWORD, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 24LL))(*snd_g_memory_ptr[0], v59[2]);
  }
  *(_BYTE*)(v2 + 1821) = *(_BYTE*)(a2 + 226);
  return result;
}

_BYTE* Voice_143ad0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  unsigned __int8* v4;
  unsigned int v5;
  _BYTE* v6;
  _BYTE* result;
  char v8;
  struct {
    __int64 v9[2];
    __int64 v10;
  } v9_;

  if ((*(_BYTE*)(a1 + 5680) & 1) != 0) {
    GameRoutine_1905a40_alt1(v9_.v9, *(_QWORD*)(a1 + 5696),
                             *(_QWORD*)(a1 + 5688));
  }
  else {
    v2 = *(_QWORD*)(a1 + 5688);
    v3 = *(_QWORD*)(a1 + 5696);
    v9_.v9[0] = *(_QWORD*)(a1 + 5680);
    v9_.v9[1] = v2;
    v9_.v10 = v3;
  }
  v4 = (unsigned __int8*)GameRoutine_190240((__int64)v9_.v9);
  v5 = (unsigned int)snd_fnd_calcCrc32(v4, 0);
  v6 = (_BYTE*)GameRoutine_190240((__int64)v9_.v9);
  result = snd_fnd_calcCrc32Reverse(v6, 0);
  v8 = v9_.v9[0];
  *(_DWORD*)(a1 + 5704) = v5;
  *(_DWORD*)(a1 + 5708) = (_DWORD)result;
  if ((v8 & 1) != 0) {
    return (*(_BYTE * (**)(_QWORD, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 24LL))(*snd_g_memory_ptr[0], v9_.v10);
  }
  return result;
}

__int64 Voice_143b80(__int64 result, const char* a2)
{
  const char* v3;
  __int64 v4;
  int v5;

  switch ((int)result) {
  case 0:
    return result;
  case 1:
    v3 = "#SoundLibrary error : LowPriority : %s\n";
    return (*(__int64 (**)(_QWORD, const char*, const char*))(
        **(_QWORD**)snd_g_proxy_ptr[0] + 392LL))(*(_QWORD*)snd_g_proxy_ptr[0],
                                                 v3, a2);
  case 2:
    v3 = "#SoundLibrary error : InvalidLabelString : %s\n";
    return (*(__int64 (**)(_QWORD, const char*, const char*))(
        **(_QWORD**)snd_g_proxy_ptr[0] + 392LL))(*(_QWORD*)snd_g_proxy_ptr[0],
                                                 v3, a2);
  case 3:
    v3 = "#SoundLibrary error : InvalidSoundId : %s\n";
    return (*(__int64 (**)(_QWORD, const char*, const char*))(
        **(_QWORD**)snd_g_proxy_ptr[0] + 392LL))(*(_QWORD*)snd_g_proxy_ptr[0],
                                                 v3, a2);
  case 4:
  case 5:
  case 11:
  case 12:
  case 13:
  case 14:
  case 18:
  case 23:
  case 24:
  case 25:
  case 26:
  case 27:
  case 28:
  case 29:
  case 30:
  case 31:
  case 32:
  case 33:
  case 34:
  case 35:
  case 36:
  case 37:
  case 38:
  case 39:
  case 40:
  case 41:
  case 42:
  case 43:
  case 44:
  case 45:
  case 46:
  case 47:
  case 48:
  case 49:
  case 50:
  case 51:
  case 52:
  case 53:
  case 54:
  case 55:
  case 56:
  case 57:
  case 58:
  case 59:
  case 60:
  case 61:
  case 62:
  case 63:
  case 64:
  case 65:
  case 66:
  case 67:
  case 68:
  case 69:
  case 70:
  case 71:
  case 72:
  case 73:
  case 74:
  case 75:
  case 76:
  case 77:
  case 78:
  case 79:
  case 80:
  case 81:
  case 82:
  case 83:
  case 84:
  case 85:
  case 86:
  case 87:
  case 88:
  case 89:
  case 90:
  case 91:
  case 92:
  case 93:
  case 94:
  case 95:
  case 96:
  case 97:
  case 98:
  case 99:
  case 100:
  case 101:
  case 102:
  case 103:
  case 104:
  case 105:
  case 106:
  case 107:
  case 108:
  case 109:
  case 110:
  case 111:
  case 112:
  case 113:
  case 114:
  case 115:
  case 116:
  case 117:
  case 118:
  case 119:
  case 120:
  case 121:
  case 122:
  case 123:
  case 124:
  case 125:
  case 126:
  case 127:
    return (*(__int64 (**)(_QWORD, const char*, ...))(
        **(_QWORD**)snd_g_proxy_ptr[0] + 392LL))(
        *(_QWORD*)snd_g_proxy_ptr[0],
        "#SoundLibrary error : ErrorCode[%d] : %s\n", result, a2);
  case 6:
    v3 = "#SoundLibrary error : NotSequenceLoaded : %s\n";
    return (*(__int64 (**)(_QWORD, const char*, const char*))(
        **(_QWORD**)snd_g_proxy_ptr[0] + 392LL))(*(_QWORD*)snd_g_proxy_ptr[0],
                                                 v3, a2);
  case 7:
    v3 = "#SoundLibrary error : NotBankLoaded : %s\n";
    return (*(__int64 (**)(_QWORD, const char*, const char*))(
        **(_QWORD**)snd_g_proxy_ptr[0] + 392LL))(*(_QWORD*)snd_g_proxy_ptr[0],
                                                 v3, a2);
  case 8:
    v3 = "#SoundLibrary error : NotWsdLoaded : %s\n";
    return (*(__int64 (**)(_QWORD, const char*, const char*))(
        **(_QWORD**)snd_g_proxy_ptr[0] + 392LL))(*(_QWORD*)snd_g_proxy_ptr[0],
                                                 v3, a2);
  case 9:
    v3 = "#SoundLibrary error : NotWarcLoaded : %s\n";
    return (*(__int64 (**)(_QWORD, const char*, const char*))(
        **(_QWORD**)snd_g_proxy_ptr[0] + 392LL))(*(_QWORD*)snd_g_proxy_ptr[0],
                                                 v3, a2);
  case 10:
    v3 = "#SoundLibrary error : NotEnoughPlayerHeap : %s\n";
    return (*(__int64 (**)(_QWORD, const char*, const char*))(
        **(_QWORD**)snd_g_proxy_ptr[0] + 392LL))(*(_QWORD*)snd_g_proxy_ptr[0],
                                                 v3, a2);
  case 15:
    v3 = "#SoundLibrary error : InvalidParameter : %s\n";
    return (*(__int64 (**)(_QWORD, const char*, const char*))(
        **(_QWORD**)snd_g_proxy_ptr[0] + 392LL))(*(_QWORD*)snd_g_proxy_ptr[0],
                                                 v3, a2);
  case 16:
    v3 = "#SoundLibrary error : InvalidSequenceStartLocationLabel : %s\n";
    return (*(__int64 (**)(_QWORD, const char*, const char*))(
        **(_QWORD**)snd_g_proxy_ptr[0] + 392LL))(*(_QWORD*)snd_g_proxy_ptr[0],
                                                 v3, a2);
  case 17:
    v3 = "#SoundLibrary error : ActorNotInitialized : %s\n";
    return (*(__int64 (**)(_QWORD, const char*, const char*))(
        **(_QWORD**)snd_g_proxy_ptr[0] + 392LL))(*(_QWORD*)snd_g_proxy_ptr[0],
                                                 v3, a2);
  case 19:
    v3 = "#SoundLibrary error : InvalidBankData : %s\n";
    return (*(__int64 (**)(_QWORD, const char*, const char*))(
        **(_QWORD**)snd_g_proxy_ptr[0] + 392LL))(*(_QWORD*)snd_g_proxy_ptr[0],
                                                 v3, a2);
  case 20:
    v3 = "#SoundLibrary error : InvalidStreamFileId : %s\n";
    return (*(__int64 (**)(_QWORD, const char*, const char*))(
        **(_QWORD**)snd_g_proxy_ptr[0] + 392LL))(*(_QWORD*)snd_g_proxy_ptr[0],
                                                 v3, a2);
  case 21:
    v3 = "#SoundLibrary error : InvalidStreamFilePath : %s\n";
    return (*(__int64 (**)(_QWORD, const char*, const char*))(
        **(_QWORD**)snd_g_proxy_ptr[0] + 392LL))(*(_QWORD*)snd_g_proxy_ptr[0],
                                                 v3, a2);
  case 22:
    v3 = "#SoundLibrary error : CannotLoop : %s\n";
    return (*(__int64 (**)(_QWORD, const char*, const char*))(
        **(_QWORD**)snd_g_proxy_ptr[0] + 392LL))(*(_QWORD*)snd_g_proxy_ptr[0],
                                                 v3, a2);
  case 128:
    v4 = *(_QWORD*)snd_g_proxy_ptr[0];
    v5 = (*(__int64 (**)(_QWORD))(**(_QWORD**)snd_g_proxy_ptr[0] + 168LL))(
        *(_QWORD*)snd_g_proxy_ptr[0]);
    return (*(__int64 (**)(__int64, const char*, ...))(*(_QWORD*)v4 + 392LL))(
        v4, "#SoundLibrary error : PlayLimitOver(%d) : %s\n", v5, a2);
  case 129:
    v3 = "#SoundLibrary error : NotFoundStreamFile : %s\n";
    return (*(__int64 (**)(_QWORD, const char*, const char*))(
        **(_QWORD**)snd_g_proxy_ptr[0] + 392LL))(*(_QWORD*)snd_g_proxy_ptr[0],
                                                 v3, a2);
  case 130:
    v3 = "#SoundLibrary error : CanNotPlayMultiChStreamFile : %s\n";
    return (*(__int64 (**)(_QWORD, const char*, const char*))(
        **(_QWORD**)snd_g_proxy_ptr[0] + 392LL))(*(_QWORD*)snd_g_proxy_ptr[0],
                                                 v3, a2);
  default:
    if ((_DWORD)result != 255) {
      return (*(__int64 (**)(_QWORD, const char*, ...))(
          **(_QWORD**)snd_g_proxy_ptr[0] + 392LL))(
          *(_QWORD*)snd_g_proxy_ptr[0],
          "#SoundLibrary error : ErrorCode[%d] : %s\n", result, a2);
    }
    v3 = "#SoundLibrary error : Unknown : %s\n";
    return (*(__int64 (**)(_QWORD, const char*, const char*))(
        **(_QWORD**)snd_g_proxy_ptr[0] + 392LL))(*(_QWORD*)snd_g_proxy_ptr[0],
                                                 v3, a2);
  }
}

void Voice_143d90(_QWORD* a1, __int64 a2)
{

#pragma clang fp contract(off)
  _QWORD* v2;
  long double v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __n128 v10;
  __int64 v11;
  __int64 v12;
  double v13;
  __int64 v14;
  double v15;
  float v16;
  float v17;
  float v18;
  long double v19;
  long double v20;
  long double v21;
  long double v22;
  long double v23;
  _DWORD* v24;
  __int64 v25;
  __int64 v26;
  int v27;
  int v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;
  __int64 v32;
  int* v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int* v41;
  int v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  int v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned int v51;
  __int64 v52;
  float v53;
  int v54;
  int v55;
  _DWORD* v56;
  int v57;
  bool v58;
  int* v59;
  int* v60;
  int v61;
  int v62;
  int* v63;
  int v64;
  unsigned int v65;
  int* v66;
  int v67;
  int v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  struct {
    __int64 v75;
    int v76;
  } v75_;

  v2 = a1 + 512;
  if (*((_BYTE*)a1 + 5884) == 1 && *((_DWORD*)a1 + 1442) != -1 &&
      (*((_BYTE*)a1 + 5895) & 1) == 0 && a1[722] == 0) {
    (*(void (**)(__int64))(*(_QWORD*)snd_s_target + 320LL))(snd_s_target);
  }
  LODWORD(v5) = 0;
  if ((*((_BYTE*)v2 + 1799) & 1) == 0) {
    v6 = a1[706];
    if (*(float*)(v6 + 428) >= 0x0.0p+0f &&
        (*(_DWORD*)(v6 + 424) & 0x80000000) == 0) {
      v5 = ((long double (*)(_QWORD, float)) *
            (_QWORD*)(*(_QWORD*)*snd_s_target_ptr + 536LL))(
          *snd_s_target_ptr, *(float*)(v6 + 428));
    }
  }
  v8 = a1 + 5;
  v7 = a1[5];
  v9 = a1[706];
  *((_DWORD*)a1 + 1447) = LODWORD(v5);
  (*(void (**)(_QWORD*, float, float))(v7 + 360))(a1 + 5, *(float*)(v9 + 280),
                                                  *(float*)(v9 + 284));
  (*(void (**)(_QWORD*, float, float))(a1[5] + 368LL))(
      a1 + 5, *(float*)(a1[706] + 296LL), *(float*)(a1[706] + 300LL));
  (*(void (**)(_QWORD*, float, float))(a1[5] + 376LL))(
      a1 + 5, *(float*)(a1[706] + 304LL), *(float*)(a1[706] + 308LL));
  (*(void (**)(_QWORD*, float, float))(a1[5] + 384LL))(
      a1 + 5, *(float*)(a1[706] + 288LL), *(float*)(a1[706] + 292LL));
  v10 = ((__n128 (*)(_QWORD*, float, float)) * (_QWORD*)(a1[5] + 392LL))(
      a1 + 5, *(float*)(a1[706] + 312LL), *(float*)(a1[706] + 316LL));
  v11 = a1[706];
  PSEUDO_LOW_LANE128(v10, n128_u32, *(_DWORD*)(v11 + 320));
  snd_FadeRandom_start((__int64)(a1 + 368), LANES128(v10).n128_f64[0],
                       *(float*)(v11 + 324), *(float*)(v11 + 328),
                       *(float*)(v11 + 332));
  v12 = a1[706];
  LODWORD(v13) = *(_DWORD*)(v12 + 336);
  snd_FadeRandom_start((__int64)(a1 + 395), v13, *(float*)(v12 + 340),
                       *(float*)(v12 + 344), *(float*)(v12 + 348));
  v14 = a1[706];
  LODWORD(v15) = *(_DWORD*)(v14 + 352);
  snd_FadeRandom_start((__int64)(a1 + 422), v15, *(float*)(v14 + 356),
                       *(float*)(v14 + 360), *(float*)(v14 + 364));
  snd_Fade_Fade_10c830_alt1((__int64)&v75_.v75, 0x0.0p+0f);
  (*(void (**)(_QWORD*, __int64*, double))(a1[5] + 160LL))(a1 + 5, &v75_.v75,
                                                           0x0.0p+0);
  snd_Fade_Destroy_Fade_alt1(&v75_.v75);
  (*(void (**)(_QWORD*, float))(a1[5] + 48LL))(a1 + 5, *(float*)(a2 + 204) +
                                                           *((float*)a1 + 731));
  (*(void (**)(_QWORD*, __int64, float))(a1[5] + 160LL))(a1 + 5, a2,
                                                         0x1.0000000000000p+0f);
  v16 = *((float*)a1 + 732);
  snd_Fade_Fade_10c830_alt1((__int64)&v75_.v75, 0x0.0p+0f);
  (*(void (**)(_QWORD*, __int64*, float))(a1[5] + 224LL))(a1 + 5, &v75_.v75,
                                                          v16);
  snd_Fade_Destroy_Fade_alt1(&v75_.v75);
  v17 = *((float*)a1 + 733);
  snd_Fade_Fade_10c830_alt1((__int64)&v75_.v75, 0x0.0p+0f);
  (*(void (**)(_QWORD*, __int64*, float))(a1[5] + 240LL))(a1 + 5, &v75_.v75,
                                                          v17);
  snd_Fade_Destroy_Fade_alt1(&v75_.v75);
  v18 = *((float*)a1 + 734);
  snd_Fade_Fade_10c830_alt1((__int64)&v75_.v75, 0x0.0p+0f);
  (*(void (**)(_QWORD*, __int64*, float))(a1[5] + 256LL))(a1 + 5, &v75_.v75,
                                                          v18);
  snd_Fade_Destroy_Fade_alt1(&v75_.v75);
  (*(void (**)(_QWORD*, float))(a1[5] + 336LL))(
      a1 + 5, (float)(*(float*)(a2 + 200) + *(float*)(a1[706] + 244LL)) +
                  *((float*)a1 + 735));
  (*(void (**)(_QWORD*, _QWORD))(a1[5] + 352LL))(
      a1 + 5, *(unsigned int*)(a1[706] + 188LL));
  v24 = (_DWORD*)a1[706];
  if ((int)v24[157] <= 0) {
    v25 = 0;
  }
  else {
    v25 = 2;
  }
  LODWORD(v19) = v24[65];
  LODWORD(v20) = v24[66];
  LODWORD(v21) = v24[67];
  LODWORD(v22) = v24[68];
  LODWORD(v23) = v24[69];
  (*(void (**)(_QWORD*, __int64, long double, long double, long double,
               long double, long double))(*v8 + 408LL))(a1 + 5, v25, v19, v20,
                                                        v21, v22, v23);
  v26 = a1[706];
  v27 = *(_DWORD*)(v26 + 540);
  if (v27 < 1) {
    goto LABEL_26;
  }
  if (v27 <= 2) {
    if (v27 == 1) {
      *((_BYTE*)v2 + 1811) = 1;
      v28 = *(_DWORD*)(v26 + 544);
      if (v28 < 1) {
        goto LABEL_29;
      }
    }
    else {
      *((_BYTE*)v2 + 1812) = 1;
      v28 = *(_DWORD*)(v26 + 544);
      if (v28 < 1) {
        goto LABEL_29;
      }
    }
  }
  else {
    if (v27 != 3) {
      if (v27 == 4) {
        *((_BYTE*)v2 + 1816) = 1;
      }
      else if (v27 == 5) {
        *((_BYTE*)v2 + 1818) = 1;
        v28 = *(_DWORD*)(v26 + 544);
        if (v28 < 1) {
          goto LABEL_29;
        }
        goto LABEL_27;
      }
    LABEL_26:
      v28 = *(_DWORD*)(v26 + 544);
      if (v28 < 1) {
        goto LABEL_29;
      }
      goto LABEL_27;
    }
    *((_BYTE*)v2 + 1814) = 1;
    v28 = *(_DWORD*)(v26 + 544);
    if (v28 < 1) {
      goto LABEL_29;
    }
  }
LABEL_27:
  v29 = v28 - 2;
  if (v29 <= 3) {
    *((_BYTE*)a1 + 2 * v29 + 5909) = 1;
  }
LABEL_29:
  v30 = (*(__int64 (**)(_QWORD*))(*a1 + 640LL))(a1);
  v31 = (*(__int64 (**)(_QWORD))(**(_QWORD**)snd_g_proxy_ptr[0] + 272LL))(
      *(_QWORD*)snd_g_proxy_ptr[0]);
  (*(void (**)(_QWORD*, _QWORD))(*a1 + 632LL))(a1, v31);
  (*(void (**)(_QWORD*, _QWORD))(*a1 + 648LL))(a1, v30);
  if ((snd_fnd_WeakHandle_isValid_alt1(a1 + 725) & 1) == 0) {
    v32 = a1[706];
    v34 = *(_DWORD*)(v32 + 64);
    v33 = (int*)(v32 + 64);
    if (v34 != 0) {
      v35 = Crc32List_11ed40(a1[4], v33);
      v75_.v75 = 0;
      v75_.v76 = 0x2000;
      if (v35 != 0) {
        v36 = v35 + 5592;
      }
      else {
        v36 = 0;
      }
      snd_fnd_WeakHandle_set_alt1((__int64)&v75_.v75, v36);
      GameRoutine_112180((__int64)(a1 + 725), (__int64)&v75_.v75);
    }
  }
  if ((snd_fnd_WeakHandle_isValid_alt1(a1 + 725) & 1) == 0) {
    v37 = a1[4];
    v75_.v75 = 0;
    v75_.v76 = 0x2000;
    GameRoutine_112180((__int64)&v75_.v75, v37 + 3112);
    GameRoutine_112180((__int64)(a1 + 725), (__int64)&v75_.v75);
  }
  v38 = a1[706];
  if (*(_DWORD*)(v38 + 68) != 0) {
    v39 = Crc32List_11ed40(a1[4], (int*)(v38 + 68));
    v75_.v75 = 0;
    v75_.v76 = 0x2000;
    if (v39 != 0) {
      v40 = v39 + 5592;
    }
    else {
      v40 = 0;
    }
    snd_fnd_WeakHandle_set_alt1((__int64)&v75_.v75, v40);
    GameRoutine_112180((__int64)(a1 + 727), (__int64)&v75_.v75);
    v38 = a1[706];
  }
  v42 = *(_DWORD*)(v38 + 72);
  v41 = (int*)(v38 + 72);
  if (v42 != 0) {
    v43 = Crc32List_11ed40(a1[4], v41);
    v75_.v75 = 0;
    v75_.v76 = 0x2000;
    if (v43 != 0) {
      v44 = v43 + 5592;
    }
    else {
      v44 = 0;
    }
    snd_fnd_WeakHandle_set_alt1((__int64)&v75_.v75, v44);
    GameRoutine_112180((__int64)(a1 + 729), (__int64)&v75_.v75);
  }
  if ((*((_BYTE*)v2 + 1790) & 1) == 0) {
    v45 = snd_fnd_WeakHandle_get_alt1((__int64)(a1 + 731));
    if (v45 != 0) {
      v46 = *((_DWORD*)a1 + 1443);
      if (v46 != (*(unsigned int (**)(_QWORD))(**(_QWORD**)(v45 + 32) + 32LL))(
                     *(_QWORD*)(v45 + 32))) {
        Manager_11ea40((void*)((__int64)&v75_.v75), a1[4], 0,
                       *((_DWORD*)a1 + 1443), 0xFFFFFFFF);
        v47 = snd_fnd_WeakHandle_get_alt1((__int64)&v75_.v75);
        if (v47 != 0) {
          v48 = v47;
          GameRoutine_112180(v47 + 48, (__int64)(a1 + 731));
          v75_.v75 = 0;
          v75_.v76 = 0x2000;
          snd_fnd_WeakHandle_set_alt1((__int64)&v75_.v75, v48);
          GameRoutine_112180((__int64)(a1 + 731), (__int64)&v75_.v75);
          *((_WORD*)v2 + 895) = 257;
        }
      }
    }
  }
  v49 = snd_fnd_WeakHandle_get_alt1((__int64)(a1 + 731));
  if (v49 != 0) {
    v50 = v49;
    v51 =
        (*(__int64 (**)(__int64))(*(_QWORD*)(v49 - 5592) + 128LL))(v49 - 5592);
    (*(void (**)(_QWORD*, _QWORD))(*a1 + 632LL))(a1, v51);
    *(_DWORD*)(v50 + 132) = *(_DWORD*)(a1[706] + 436LL);
    *(_DWORD*)(v50 + 136) = *(_DWORD*)(a1[706] + 440LL);
    if (*((_BYTE*)v2 + 1790) == 1) {
      (*(void (**)(__int64))(*(_QWORD*)(v50 - 5592) + 48LL))(v50 - 5592);
      Actor_101c40(v50 - 5592, 0x1.0aac080000000p+4f);
    }
  }
  v52 = a1[706];
  v53 = *(float*)(v52 + 228);
  if (v53 <= 0x1.0000000000000p+0f) {
    goto LABEL_75;
  }
  v54 = *(_DWORD*)(v52 + 224);
  v55 = (int)v53;
  switch (v54) {
  case 1:
    v64 = v55 - 1;
    v65 = rand();
    v66 = (int*)a1[707];
    v67 = *v66;
    if ((int)(float)((float)((float)v64 + 0x1.cccccc0000000p-1f) *
                     vcvts_n_f32_s32(v65, 0x1Fu)) == 0 &&
        v67 >= 1) {
      *v66 = 0;
      goto LABEL_75;
    }
    *v66 = v67 + 1;
    goto LABEL_74;
  case 2:
    v60 = (int*)a1[707];
    v61 = *v60;
    v62 = v60[1];
    ++*v60;
    v58 = v61 != v62;
    v63 = (int*)a1[707];
    if (*v63 >= v55) {
      *v63 = 0;
      v68 = v55 - 1;
      *(_DWORD*)(a1[707] + 4LL) =
          (int)(float)((float)((float)(v55 - 1) + 0x1.cccccc0000000p-1f) *
                       vcvts_n_f32_s32(rand(), 0x1Fu));
      if (v61 != v62) {
        goto LABEL_74;
      }
      v69 = a1[707];
      if (*(_DWORD*)(v69 + 4) == 0) {
        *(_DWORD*)(v69 + 4) = v68;
      }
      goto LABEL_75;
    }
    break;
  case 3:
    v56 = (_DWORD*)a1[707];
    v57 = (*v56)++;
    v58 = v57 > 0;
    v59 = (int*)a1[707];
    if (*v59 >= v55) {
      *v59 = 0;
      if (v57 <= 0) {
        goto LABEL_75;
      }
    LABEL_74:
      *(_DWORD*)(a1[706] + 120LL) = 1;
      *(_DWORD*)(a1[706] + 124LL) = 0;
      goto LABEL_75;
    }
    break;
  default:
    goto LABEL_75;
  }
  if (v58) {
    goto LABEL_74;
  }
LABEL_75:
  v70 = *(_QWORD*)snd_g_frameCount_ptr + 1LL;
  *(_QWORD*)snd_g_frameCount_ptr = v70;
  a1[701] = v70;
  v71 = snd_fnd_WeakHandle_get_alt1((__int64)(a1 + 731));
  if ((*((_BYTE*)v2 + 1820) & 1) != 0) {
    if (v71 != 0) {
      if (*((_BYTE*)v2 + 1790) == 1 && *(_BYTE*)(v71 + 68) != 1) {
        v73 = *(_QWORD*)(v71 - 5592);
        v74 = v71 - 5592;
      }
      else {
        v72 = v71;
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
            *(_QWORD*)(v71 - 5592) + 96LL))((void*)(&v75_.v75), v71 - 5592);
        (*(void (**)(_QWORD*, __int64*))(*v8 + 1040LL))(a1 + 5, &v75_.v75);
        v73 = *(_QWORD*)(v72 - 5592);
        v74 = v72 - 5592;
      }
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(v73 + 112))(
          (void*)(&v75_.v75), v74);
    }
    else {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
          *v8 + 1048LL))((void*)(&v75_.v75), a1 + 5);
    }
    (*(void (**)(_QWORD*, __int64*))(*v8 + 1072LL))(a1 + 5, &v75_.v75);
    snd_120f10(a1[4], (__int64)a1);
  LABEL_91:
    if ((*(float (**)(_QWORD*))(*v8 + 328LL))(a1 + 5) > 0x0.0p+0f) {
      return;
    }
    goto LABEL_92;
  }
  if (v71 == 0) {
    goto LABEL_91;
  }
  if (*((_BYTE*)v2 + 1790) != 1 || (*((_BYTE*)v2 + 1791) & 1) != 0 ||
      (*(_BYTE*)(v71 + 68) & 1) != 0) {
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
        *(_QWORD*)(v71 - 5592) + 96LL))((void*)(&v75_.v75), v71 - 5592);
    (*(void (**)(_QWORD*, __int64*))(*v8 + 1040LL))(a1 + 5, &v75_.v75);
  }
  else {
    (*(void (**)(__int64, _QWORD*))(*(_QWORD*)(v71 - 5592) + 80LL))(v71 - 5592,
                                                                    a1 + 358);
  }
  if ((*(float (**)(_QWORD*))(*v8 + 328LL))(a1 + 5) <= 0x0.0p+0f) {
  LABEL_92:
    if (*(int*)(a1[706] + 564LL) >= 1 && (Voice_1447d0(a1, 1) & 1) != 0) {
      Voice_144910_alt2((__int64)a1);
    }
  }
}

double Voice_1446e0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;

  if ((*(_BYTE*)(a1 + 5895) & 1) != 0) {
    return 0x0.0p+0;
  }
  v1 = *(_QWORD*)(a1 + 5648);
  if (*(float*)(v1 + 428) < 0x0.0p+0f ||
      (*(_DWORD*)(v1 + 424) & 0x80000000) != 0) {
    return 0x0.0p+0;
  }
  else {
    return (*(double (**)(__int64))(*(_QWORD*)snd_s_target + 536LL))(
        snd_s_target);
  }
}

__int64 Voice_1447d0(_QWORD* a1, char a2)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  float v10;
  float v11;
  __int64 v12;
  const char* v13;
  _BYTE v14[16];
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;

  result = snd_fnd_WeakHandle_get_alt1((__int64)(a1 + 731));
  if (result != 0) {
    v5 = result;
    (*(void (**)(__int64, float*, float*, float*))(
        *(_QWORD*)(result - 5592) + 104LL))(result - 5592, &v20, &v19, &v18);
    v6 = a1[4];
    v7 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v5 + 32) + 16LL))(
        *(_QWORD*)(v5 + 32));
    Manager_1181f0((void*)((__int64)v14), v6, v7);
    v8 = snd_fnd_WeakHandle_get_alt1((__int64)v14);
    if (v8 != 0) {
      v9 = v8 - 5592;
    }
    else {
      v9 = 0;
    }
    (*(void (**)(__int64, float*, float*, float*))(
        *(_QWORD*)(v9 + 40) + 1032LL))(v9 + 40, &v17, &v16, &v15);
    v10 = snd_fnd_calcDistance_fec30(v20, v19, v18, v17, v16, v15);
    v11 = (*(float (**)(_QWORD*))(*a1 + 112LL))(a1);
    result = v10 > v11;
    if (v10 > v11 && (a2 & 1) != 0) {
      v12 = snd_g_proxy;
      v13 = (const char*)GameRoutine_190240((__int64)(a1 + 710));
      (*(void (**)(__int64, const char*, ...))(*(_QWORD*)v12 + 384LL))(
          v12, "#SoundLibrary warning : Voice AutoStop Out of range : %s\n",
          v13);
      Voice_144910_alt2((__int64)a1);
      return 1;
    }
  }
  return result;
}

_BYTE* Voice_144910(_BYTE* result)
{
  _BYTE* v1;
  _QWORD v2[25];

  if ((result[5885] & 1) == 0) {
    v1 = result;
    snd_fnd_WeakHandle_reset_alt1((__int64)(result + 5864));
    snd_fnd_WeakHandle_reset_alt1((__int64)(v1 + 5984));
    snd_fnd_WeakHandle_reset_alt1((__int64)(v1 + 5864));
    snd_fnd_WeakHandle_reset_alt1((__int64)(v1 + 5984));
    v1[5885] = 1;
    (*(void (**)(_BYTE*))(*(_QWORD*)v1 + 784LL))(v1);
    snd_Fade_CtrlTypeAHDSR_setState_alt1((__int64)(v1 + 3600), 7);
    snd_Fade_Fade_10c910_alt1((__int64)v2, 0);
    (*(void (**)(_BYTE*, _QWORD*))(*(_QWORD*)v1 + 776LL))(v1, v2);
    return (_BYTE*)snd_Fade_Destroy_Fade_alt1(v2);
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

__int64 Voice_144a10(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                     unsigned __int8* a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int8* v24;
  __int64 v25;
  unsigned __int8* v26;
  int v27;
  int v28;
  __int64 v29;
  struct {
    __int64 v31;
    int v32;
  } v31_;
  int v33[2];

  Voice_1434a0(a1, a2, a4, *(_BYTE*)(a7 + 220), *(_DWORD*)(a7 + 212), a8);
  v31_.v31 = 0;
  v31_.v32 = 0x2000;
  v13 = GameData_21346c0[0] + 2;
  v14 = GameData_21346c0[0] + 103;
  *(_QWORD*)(a1 + 5592) = GameData_21346c0[0] + 244;
  *(_QWORD*)a1 = v13;
  *(_QWORD*)(a1 + 40) = v14;
  *(_DWORD*)(a1 + 5792) = 1;
  if (a3 != 0) {
    v15 = a3 + 5592;
  }
  else {
    v15 = 0;
  }
  snd_fnd_WeakHandle_set_alt1((__int64)&v31_.v31, v15);
  GameRoutine_112180(a1 + 5800, (__int64)&v31_.v31);
  v31_.v31 = 0;
  v31_.v32 = 0x2000;
  if (a6 != 0) {
    v16 = a6 + 5592;
  }
  else {
    v16 = 0;
  }
  snd_fnd_WeakHandle_set_alt1((__int64)&v31_.v31, v16);
  GameRoutine_112180(a1 + 5848, (__int64)&v31_.v31);
  *(_DWORD*)(a1 + 5920) = *(_DWORD*)(a7 + 208);
  LODWORD(v31_.v31) = (unsigned int)snd_fnd_calcCrc32(a5, 0);
  HIDWORD(v31_.v31) =
      (unsigned int)snd_fnd_calcCrc32Reverse_alt1((const char*)a5, 0);
  v17 = GameRoutine_f5740((int*)&v31_.v31, (_QWORD*)(a1 + 5656));
  if (v17 != 0) {
    goto LABEL_8;
  }
  GameRoutine_190200_alt1(a1 + 5680, (char*)a5);
  v20 = (__int64*)snd_g_proxy_ptr[0];
  v21 = *(_QWORD*)snd_g_proxy_ptr[0];
  v22 = GameRoutine_190240(a1 + 5680);
  (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v21 + 416LL))(v21, a1,
                                                                   v22);
  v23 = GameRoutine_118fd0(*(_QWORD*)(a1 + 32));
  v24 = (unsigned __int8*)GameRoutine_190240(a1 + 5680);
  if (Archive_106680(v23, v24) == 0) {
    goto LABEL_13;
  }
  v25 = *v20;
  *(_QWORD*)(a7 + 232) = a5;
  v26 =
      (unsigned __int8*)(*(__int64 (**)(__int64))(*(_QWORD*)v25 + 176LL))(v25);
  a5 = v26;
  if (v26 != nullptr &&
      (v33[0] = (unsigned int)snd_fnd_calcCrc32(v26, 0),
       v33[1] = (unsigned int)snd_fnd_calcCrc32Reverse_alt1((const char*)a5, 0),
       (v17 = GameRoutine_f5740(v33, (_QWORD*)(a1 + 5656))) != 0)) {
  LABEL_8:
    v18 = v17;
    snd_data_f0230(*(_QWORD*)(a1 + 5648), v17, a5);
    GameRoutine_190200_alt1(*(_QWORD*)(a1 + 5648) + 32LL, (char*)a5);
    v19 = *(char**)(v18 + 24);
    if (v19 != nullptr) {
      GameRoutine_190200_alt1(*(_QWORD*)(a1 + 5648) + 80LL, v19);
    }
  }
  else {
  LABEL_13:
    v27 = v31_.v31;
    v28 = HIDWORD(v31_.v31);
    *(_QWORD*)(*(_QWORD*)(a1 + 5648) + 56LL) = v31_.v31;
    v29 = *(_QWORD*)(a1 + 5648);
    *(_DWORD*)(v29 + 104) = v27;
    *(_DWORD*)(v29 + 108) = v28;
    GameRoutine_190200_alt1(*(_QWORD*)(a1 + 5648) + 32LL, (char*)a5);
    GameRoutine_190200_alt1(*(_QWORD*)(a1 + 5648) + 80LL, (char*)a5);
    *(_BYTE*)(a1 + 5895) = 1;
  }
  GameRoutine_190200_alt1(*(_QWORD*)(a1 + 5648), (char*)a5);
  *(_QWORD*)(*(_QWORD*)(a1 + 5648) + 24LL) = v31_.v31;
  Voice_143700(a1, a7);
  Voice_143d90((_QWORD*)a1, a7);
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 784LL))(a1);
}

__int64 Voice_144f50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9)
{
  __int64* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  struct {
    __int64 v21;
    int v22;
  } v21_;

  Voice_1434a0(a1, a2, a4, *(_BYTE*)(a8 + 220), *(_DWORD*)(a8 + 212), a9);
  v21_.v21 = 0;
  v21_.v22 = 0x2000;
  v15 = GameData_21346c0[0] + 2;
  v16 = GameData_21346c0[0] + 103;
  *(_QWORD*)(a1 + 5592) = GameData_21346c0[0] + 244;
  *(_QWORD*)a1 = v15;
  *(_QWORD*)(a1 + 40) = v16;
  *(_DWORD*)(a1 + 5792) = 1;
  if (a3 != 0) {
    v17 = a3 + 5592;
  }
  else {
    v17 = 0;
  }
  snd_fnd_WeakHandle_set_alt1((__int64)&v21_.v21, v17);
  GameRoutine_112180(a1 + 5800, (__int64)&v21_.v21);
  v21_.v21 = 0;
  v21_.v22 = 0x2000;
  if (a7 != 0) {
    v18 = a7 + 5592;
  }
  else {
    v18 = 0;
  }
  snd_fnd_WeakHandle_set_alt1((__int64)&v21_.v21, v18);
  GameRoutine_112180(a1 + 5848, (__int64)&v21_.v21);
  v19 = *(_QWORD*)(a1 + 5648);
  *(_DWORD*)(a1 + 5920) = *(_DWORD*)(a8 + 208);
  ((void (*)(__int64, __int64))GameRoutine_f05f0)(v19, a5);
  *(_QWORD*)(a1 + 5656) = a6;
  Voice_143700(a1, a8);
  Voice_143d90((_QWORD*)a1, a8);
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 784LL))(a1);
}

__int64 Voice_145090(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                     unsigned __int8* a5, __int64 a6, __int64 a7, float a8,
                     float a9, float a10)
{

#pragma clang fp contract(off)
  __int64 v16;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int8* v27;
  __int64 v28;
  unsigned __int8* v29;
  __int64 v30;
  unsigned int v31;
  unsigned int v32;
  __int64 v33;
  __int64 v34;
  unsigned int v35;
  __int64 v36;
  struct {
    unsigned int v38;
    unsigned int v39;
  } v38_;
  struct {
    __int64 v40;
    int v41;
  } v40_;

  v16 = a1 + 4096;
  Voice_1434a0(a1, a2, a4, *(_BYTE*)(a6 + 220), *(_DWORD*)(a6 + 212), a7);
  v18 = GameData_21346c0[0];
  v40_.v40 = 0;
  *(_QWORD*)(a1 + 40) = GameData_21346c0[0] + 103;
  *(_QWORD*)(a1 + 5592) = v18 + 244;
  *(_QWORD*)a1 = v18 + 2;
  *(_DWORD*)(a1 + 5792) = 1;
  v40_.v41 = 0x2000;
  if (a3 != 0) {
    v19 = a3 + 5592;
  }
  else {
    v19 = 0;
  }
  snd_fnd_WeakHandle_set_alt1((__int64)&v40_.v40, v19);
  GameRoutine_112180(a1 + 5800, (__int64)&v40_.v40);
  *(_DWORD*)(a1 + 5920) = *(_DWORD*)(a6 + 208);
  v38_.v38 = (unsigned int)snd_fnd_calcCrc32(a5, 0);
  v38_.v39 = (unsigned int)snd_fnd_calcCrc32Reverse_alt1((const char*)a5, 0);
  v20 = GameRoutine_f5740((int*)&v38_.v38, (_QWORD*)(a1 + 5656));
  if (v20 != 0) {
    goto LABEL_5;
  }
  GameRoutine_190200_alt1(a1 + 5680, (char*)a5);
  v23 = (__int64*)snd_g_proxy_ptr[0];
  v24 = *(_QWORD*)snd_g_proxy_ptr[0];
  v25 = GameRoutine_190240(a1 + 5680);
  (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v24 + 416LL))(v24, a1,
                                                                   v25);
  v26 = GameRoutine_118fd0(*(_QWORD*)(a1 + 32));
  v27 = (unsigned __int8*)GameRoutine_190240(a1 + 5680);
  if (Archive_106680(v26, v27) == 0) {
    goto LABEL_10;
  }
  v28 = *v23;
  *(_QWORD*)(a6 + 232) = a5;
  v29 =
      (unsigned __int8*)(*(__int64 (**)(__int64))(*(_QWORD*)v28 + 176LL))(v28);
  a5 = v29;
  if (v29 != nullptr &&
      (LODWORD(v40_.v40) = (unsigned int)snd_fnd_calcCrc32(v29, 0),
       HIDWORD(v40_.v40) =
           (unsigned int)snd_fnd_calcCrc32Reverse_alt1((const char*)a5, 0),
       (v20 = GameRoutine_f5740((int*)&v40_.v40, (_QWORD*)(a1 + 5656))) != 0)) {
  LABEL_5:
    v21 = v20;
    snd_data_f0230(*(_QWORD*)(a1 + 5648), v20, a5);
    GameRoutine_190200_alt1(*(_QWORD*)(a1 + 5648) + 32LL, (char*)a5);
    v22 = *(char**)(v21 + 24);
    if (v22 != nullptr) {
      GameRoutine_190200_alt1(*(_QWORD*)(a1 + 5648) + 80LL, v22);
    }
  }
  else {
  LABEL_10:
    v30 = *(_QWORD*)(a1 + 5648);
    v31 = v38_.v38;
    v32 = v38_.v39;
    *(_DWORD*)(v30 + 56) = v38_.v38;
    *(_DWORD*)(v30 + 60) = v32;
    v33 = *(_QWORD*)(a1 + 5648);
    *(_DWORD*)(v33 + 104) = v31;
    *(_DWORD*)(v33 + 108) = v32;
    GameRoutine_190200_alt1(*(_QWORD*)(a1 + 5648) + 32LL, (char*)a5);
    GameRoutine_190200_alt1(*(_QWORD*)(a1 + 5648) + 80LL, (char*)a5);
    *(_BYTE*)(v16 + 1799) = 1;
  }
  GameRoutine_190200_alt1(*(_QWORD*)(a1 + 5648), (char*)a5);
  v34 = *(_QWORD*)(a1 + 5648);
  v35 = v38_.v39;
  *(_DWORD*)(v34 + 24) = v38_.v38;
  *(_DWORD*)(v34 + 28) = v35;
  Voice_143700(a1, a6);
  (*(void (**)(__int64, float, float, float))(*(_QWORD*)(a1 + 40) + 1024LL))(
      a1 + 40, a8, a9, a10);
  if (*(_BYTE*)(a6 + 224) == 1) {
    Manager_11e880((void*)((__int64)&v40_.v40), *(_QWORD*)(a1 + 32), 0,
                   *(_DWORD*)(a1 + 5772));
  }
  else {
    Manager_11ea40((void*)((__int64)&v40_.v40), *(_QWORD*)(a1 + 32), 0,
                   *(_DWORD*)(a1 + 5772), 0xFFFFFFFF);
  }
  GameRoutine_112180(a1 + 5848, (__int64)&v40_.v40);
  v36 = snd_fnd_WeakHandle_get_alt1(a1 + 5848);
  if (v36 != 0) {
    (*(void (**)(__int64, float, float, float))(*(_QWORD*)(v36 - 5592) + 72LL))(
        v36 - 5592, a8, a9, a10);
    *(_BYTE*)(v16 + 1790) = 1;
  }
  Voice_143d90((_QWORD*)a1, a6);
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 784LL))(a1);
}

__int64 Voice_1453c0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int* a5,
                     __int64 a6, __int64 a7, __int64 a8, float a9, float a10,
                     float a11)
{

#pragma clang fp contract(off)
  __int64 v18;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char* v24;
  __int64 v25;
  __int64 v26;
  unsigned __int8* v27;
  __int64* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  bool v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  bool v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  struct {
    __int64 v46;
    int v47;
  } v46_;

  v18 = a1 + 4096;
  Voice_1434a0(a1, a2, a4, *(_BYTE*)(a7 + 220), *(_DWORD*)(a7 + 212), a8);
  v20 = GameData_21346c0[0];
  v46_.v46 = 0;
  *(_QWORD*)(a1 + 40) = GameData_21346c0[0] + 103;
  *(_QWORD*)(a1 + 5592) = v20 + 244;
  *(_QWORD*)a1 = v20 + 2;
  *(_DWORD*)(a1 + 5792) = 1;
  v46_.v47 = 0x2000;
  if (a3 != 0) {
    v21 = a3 + 5592;
  }
  else {
    v21 = 0;
  }
  snd_fnd_WeakHandle_set_alt1((__int64)&v46_.v46, v21);
  GameRoutine_112180(a1 + 5800, (__int64)&v46_.v46);
  *(_DWORD*)(a1 + 5920) = *(_DWORD*)(a7 + 208);
  v22 = GameRoutine_f5740(a5, (_QWORD*)(a1 + 5656));
  v23 = *(_QWORD*)(a1 + 5648);
  if (v22 != 0) {
    snd_data_f0230(v23, v22, nullptr);
    v24 = *(char**)(v22 + 24);
    if (v24 != nullptr) {
      GameRoutine_190200_alt1(*(_QWORD*)(a1 + 5648) + 80LL, v24);
    }
    v25 = *(_QWORD*)(a1 + 5648);
    if (a6 != 0) {
      goto LABEL_8;
    }
    goto LABEL_37;
  }
  *(_DWORD*)(v23 + 56) = *a5;
  *(_DWORD*)(v23 + 60) = a5[1];
  v26 = *(_QWORD*)(a1 + 5648);
  *(_DWORD*)(v26 + 104) = *a5;
  *(_DWORD*)(v26 + 108) = a5[1];
  if (a6 != 0) {
    v27 = (unsigned __int8*)(a6 + 80);
    v28 = (__int64*)(*(_QWORD*)(a1 + 5648) + 32LL);
    if (v28 != (__int64*)(a6 + 80)) {
      v29 = *v27;
      if ((*(_BYTE*)v28 & 1) == 0) {
        if ((v29 & 1) != 0) {
          GameRoutine_a3a3a0(v28, *(_QWORD*)(a6 + 96), *(_QWORD*)(a6 + 88));
          v32 = *(__int64**)(a1 + 5648);
          if (v32 == (__int64*)a6) {
            goto LABEL_36;
          }
        }
        else {
          v30 = *(_QWORD*)v27;
          v31 = *(_QWORD*)(a6 + 96);
          *(_QWORD*)(*(_QWORD*)(a1 + 5648) + 40LL) = *(_QWORD*)(a6 + 88);
          v28[2] = v31;
          *v28 = v30;
          v32 = *(__int64**)(a1 + 5648);
          if (v32 == (__int64*)a6) {
            goto LABEL_36;
          }
        }
        goto LABEL_23;
      }
      v33 = (v29 & 1) == 0;
      v34 = v29 >> 1;
      if (v33) {
        v35 = a6 + 81;
      }
      else {
        v35 = *(_QWORD*)(a6 + 96);
      }
      if (v33) {
        v36 = v34;
      }
      else {
        v36 = *(_QWORD*)(a6 + 88);
      }
      GameRoutine_a3a260(v28, v35, v36);
    }
    v32 = *(__int64**)(a1 + 5648);
    if (v32 == (__int64*)a6) {
      goto LABEL_36;
    }
  LABEL_23:
    v37 = *v27;
    if ((v32[10] & 1) != 0) {
      v40 = (v37 & 1) == 0;
      v41 = v37 >> 1;
      if (v40) {
        v42 = a6 + 81;
      }
      else {
        v42 = *(_QWORD*)(a6 + 96);
      }
      if (v40) {
        v43 = v41;
      }
      else {
        v43 = *(_QWORD*)(a6 + 88);
      }
      GameRoutine_a3a260(v32 + 10, v42, v43);
    }
    else if ((v37 & 1) != 0) {
      GameRoutine_a3a3a0(v32 + 10, *(_QWORD*)(a6 + 96), *(_QWORD*)(a6 + 88));
    }
    else {
      v38 = *(_QWORD*)v27;
      v39 = *(_QWORD*)(a6 + 96);
      v32[11] = *(_QWORD*)(a6 + 88);
      v32[12] = v39;
      v32[10] = v38;
    }
  }
LABEL_36:
  *(_BYTE*)(v18 + 1799) = 1;
  v25 = *(_QWORD*)(a1 + 5648);
  if (a6 != 0) {
  LABEL_8:
    GameRoutine_f1b80(v25, (unsigned __int8*)a6);
    goto LABEL_38;
  }
LABEL_37:
  *(_DWORD*)(v25 + 24) = *a5;
  *(_DWORD*)(v25 + 28) = a5[1];
LABEL_38:
  Voice_143700(a1, a7);
  (*(void (**)(__int64, float, float, float))(*(_QWORD*)(a1 + 40) + 1024LL))(
      a1 + 40, a9, a10, a11);
  if (*(_BYTE*)(a7 + 224) == 1) {
    Manager_11e880((void*)((__int64)&v46_.v46), *(_QWORD*)(a1 + 32), 0,
                   *(_DWORD*)(a1 + 5772));
  }
  else {
    Manager_11ea40((void*)((__int64)&v46_.v46), *(_QWORD*)(a1 + 32), 0,
                   *(_DWORD*)(a1 + 5772), 0xFFFFFFFF);
  }
  GameRoutine_112180(a1 + 5848, (__int64)&v46_.v46);
  v44 = snd_fnd_WeakHandle_get_alt1(a1 + 5848);
  if (v44 != 0) {
    (*(void (**)(__int64, float, float, float))(*(_QWORD*)(v44 - 5592) + 72LL))(
        v44 - 5592, a9, a10, a11);
    *(_BYTE*)(v18 + 1790) = 1;
  }
  Voice_143d90((_QWORD*)a1, a7);
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 784LL))(a1);
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

__int64 Voice_1460e0(__int64 result)
{

#pragma clang fp contract(off)
  _QWORD* v4;
  float v5;
  __int64 v6;
  float v7;
  _QWORD v8[25];
  float v9;
  float v10;

  if ((*(_BYTE*)(result + 5885) & 1) == 0 && *(_DWORD*)(result + 5792) != 1 &&
      (*(_BYTE*)(result + 5893) & 1) == 0 && *(_BYTE*)(result + 5903) == 1 &&
      *(int*)(*(_QWORD*)(result + 5648) + 592LL) >= 1) {
    v4 = (_QWORD*)result;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD, __int64, float*,
                                            float*))(
        **(_QWORD**)snd_g_proxy_ptr[0] + 464LL))(
        (void*)(*(_QWORD**)snd_g_proxy_ptr[0]), *(_QWORD*)snd_g_proxy_ptr[0],
        result, &v10, &v9);
    v5 = v10;
    snd_Fade_Fade_10c910_alt1((__int64)v8, 300);
    v6 = v4[5];
    v4 += 5;
    (*(void (**)(_QWORD*, _QWORD*, float))(v6 + 208))(v4, v8, v5);
    snd_Fade_Destroy_Fade_alt1(v8);
    v7 = v9;
    snd_Fade_Fade_10c910_alt1((__int64)v8, 300);
    (*(void (**)(_QWORD*, _QWORD*, float))(*v4 + 512LL))(v4, v8, v7);
    return snd_Fade_Destroy_Fade_alt1(v8);
  }
  return result;
}

__int64 Voice_Unknown96(__int64 a1, char a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  char v4;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  char v10;
  __int64 v11;
  _QWORD* v12;
  int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  char v17;
  __int64 v18;
  __int64 v19;
  _QWORD v20[25];

  if (*(_QWORD*)(a1 + 32) == 0) {
    return 0;
  }
  v2 = a1 + 4096;
  v4 = *(_BYTE*)(a1 + 5919);
  *(_BYTE*)(a1 + 5919) = 1;
  if ((*(_BYTE*)(a1 + 5885) & 1) != 0) {
    return 0;
  }
  if (*(_BYTE*)(a1 + 5895) == 1 ||
      *(_BYTE*)(a1 + 5888) == 1 &&
          (snd_fnd_WeakHandle_isValid_alt1((__int64*)(a1 + 5864)) & 1) == 0) {
    goto LABEL_6;
  }
  v7 = snd_fnd_WeakHandle_get_alt1(a1 + 5848);
  v8 = v7;
  if ((*(_BYTE*)(v2 + 1820) & 1) != 0) {
    if (v7 != 0) {
      if (*(_BYTE*)(v2 + 1790) == 1 && *(_BYTE*)(v7 + 68) != 1) {
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
            *(_QWORD*)(v7 - 5592) + 112LL))((void*)(v20), v7 - 5592);
        v12 = (_QWORD*)(a1 + 40);
        v11 = *(_QWORD*)(a1 + 40);
        goto LABEL_21;
      }
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
          *(_QWORD*)(v7 - 5592) + 96LL))((void*)(v20), v7 - 5592);
      v9 = (_QWORD*)(a1 + 40);
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)(a1 + 40) + 1040LL))(a1 + 40,
                                                                     v20);
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
          *(_QWORD*)(v8 - 5592) + 112LL))((void*)(v20), v8 - 5592);
    }
    else {
      v9 = (_QWORD*)(a1 + 40);
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
          *(_QWORD*)(a1 + 40) + 1048LL))((void*)(v20), a1 + 40);
    }
    v11 = *v9;
    v12 = v9;
  LABEL_21:
    (*(void (**)(_QWORD*, _QWORD*))(v11 + 1072))(v12, v20);
    snd_120f10(*(_QWORD*)(a1 + 32), a1);
    goto LABEL_22;
  }
  v10 = a2;
  if (v7 != 0) {
    if (*(_BYTE*)(v2 + 1790) != 1 || (*(_BYTE*)(v2 + 1791) & 1) != 0 ||
        (*(_BYTE*)(v7 + 68) & 1) != 0) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
          *(_QWORD*)(v7 - 5592) + 96LL))((void*)(v20), v7 - 5592);
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)(a1 + 40) + 1040LL))(a1 + 40,
                                                                     v20);
    }
    else {
      (*(void (**)(__int64, __int64))(*(_QWORD*)(v7 - 5592) + 80LL))(v7 - 5592,
                                                                     a1 + 2864);
    }
  LABEL_22:
    v10 = a2;
  }
  if (((v10 & 1) != 0 || (v4 & 1) == 0) &&
      (*(float (**)(__int64))(*(_QWORD*)(a1 + 40) + 328LL))(a1 + 40) <=
          0x0.0p+0f &&
      (*(int*)(*(_QWORD*)(a1 + 5648) + 564LL) >= 1 &&
           (Voice_1447d0((_QWORD*)a1, 1) & 1) != 0 ||
       ((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 728LL))(a1) & 1) == 0)) {
    goto LABEL_6;
  }
  v13 = *(_DWORD*)(a1 + 5792);
  if (v13 != 2) {
    if (v13 != 1) {
      goto LABEL_34;
    }
    (*(void (**)(__int64))(*(_QWORD*)a1 + 128LL))(a1);
    *(_DWORD*)(a1 + 5792) = 2;
  }
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 144LL))(a1) & 1) != 0) {
    *(_DWORD*)(a1 + 5792) = 3;
  }
LABEL_34:
  (*(void (**)(__int64))(*(_QWORD*)a1 + 784LL))(a1);
  if ((a2 & 1) != 0) {
    return 1;
  }
  v14 = *(_DWORD*)(a1 + 5792);
  if (v14 != 4) {
    if (v14 != 3) {
      goto LABEL_41;
    }
    (*(void (**)(__int64))(*(_QWORD*)a1 + 168LL))(a1);
    *(_DWORD*)(a1 + 5792) = 4;
  }
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 184LL))(a1) & 1) != 0 &&
      ((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 216LL))(a1) & 1) == 0) {
    *(_DWORD*)(a1 + 5792) = 5;
    if ((*(float (**)(__int64))(*(_QWORD*)(a1 + 40) + 328LL))(a1 + 40) >
        0x0.0p+0f) {
      goto LABEL_43;
    }
    goto LABEL_49;
  }
  v14 = *(_DWORD*)(a1 + 5792);
LABEL_41:
  if (v14 != 5) {
    goto LABEL_44;
  }
  if ((*(float (**)(__int64))(*(_QWORD*)(a1 + 40) + 328LL))(a1 + 40) >
      0x0.0p+0f) {
  LABEL_43:
    v14 = *(_DWORD*)(a1 + 5792);
  LABEL_44:
    if (v14 != 6) {
      return 1;
    }
    goto LABEL_60;
  }
LABEL_49:
  if (*(int*)(*(_QWORD*)(a1 + 5648) + 564LL) >= 1 &&
      (Voice_1447d0((_QWORD*)a1, 1) & 1) != 0) {
    return 0;
  }
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 728LL))(a1) & 1) == 0) {
    goto LABEL_6;
  }
  if (*(int*)(*(_QWORD*)(a1 + 5648) + 572LL) <= 0) {
    Crc32List_1212c0(*(_QWORD*)(a1 + 32), (unsigned __int8*)a1);
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)snd_g_proxy_ptr[0] + 440LL))(
      *(_QWORD*)snd_g_proxy_ptr[0], a1);
  if (v8 != 0 &&
      *(float*)(*(_QWORD*)(a1 + 5648) + 152LL) != 0x1.0000000000000p+0f) {
    GameRoutine_145cc0(a1, v8 - 5592);
  }
  (*(void (**)(_QWORD, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*snd_s_target_ptr + 592LL))(*snd_s_target_ptr, a1,
                                            *(_QWORD*)(a1 + 5664), 0);
  (*(void (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v15 = *(_QWORD*)(a1 + 5664);
  if (v15 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 160LL))(v15);
  }
  *(_DWORD*)(a1 + 5792) = 6;
LABEL_60:
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)snd_g_proxy_ptr[0] + 448LL))(
      *(_QWORD*)snd_g_proxy_ptr[0], a1);
  v16 = *(_QWORD*)(a1 + 5648);
  if (*(float*)(v16 + 256) < 0x0.0p+0f) {
    goto LABEL_63;
  }
  if ((snd_(a1 + 40) & 1) != 0) {
    v16 = *(_QWORD*)(a1 + 5648);
  LABEL_63:
    if (*(_DWORD*)(v16 + 120) != 0 && *(_DWORD*)(v16 + 124) != 0 &&
            (snd_(a1 + 40) & 1) == 0 ||
        !snd_Param_isEnvelopeEnded_alt1(a1 + 40) &&
            (((*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 5664) + 24LL))(
                  *(_QWORD*)(a1 + 5664)) &
              1) != 0 ||
             ((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 704LL))(a1) & 1) != 0)) {
      goto LABEL_71;
    }
  LABEL_6:
    Voice_144910_alt2(a1);
    return 0;
  }
  if (*(_BYTE*)(v2 + 1801) == 1) {
    goto LABEL_6;
  }
LABEL_71:
  if (*(int*)(*(_QWORD*)(a1 + 5648) + 564LL) >= 1 && (snd_(a1 + 40) & 1) == 0 &&
      (Voice_1447d0((_QWORD*)a1, 1) & 1) != 0) {
    return 0;
  }
  if (*(_BYTE*)(v2 + 1904) == 1 &&
      (snd_fnd_WeakHandle_isValid_alt1((__int64*)(a1 + 5984)) & 1) == 0) {
    *(_BYTE*)(v2 + 1904) = 0;
    snd_Fade_Fade_10c830_alt1((__int64)v20, 0x0.0p+0f);
    (*(void (**)(__int64, _QWORD*, _QWORD, double))(*(_QWORD*)a1 + 248LL))(
        a1, v20, 0, 0x0.0p+0);
    snd_Fade_Destroy_Fade_alt1(v20);
    return 0;
  }
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 704LL))(a1) & 1) != 0) {
    v17 = Voice_1447d0((_QWORD*)a1, 0);
    v18 = *(_QWORD*)(a1 + 5664);
    if ((v17 & 1) != 0) {
      if (v18 != 0 &&
          ((*(__int64 (**)(__int64))(*(_QWORD*)v18 + 24LL))(v18) & 1) != 0) {
        (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 5664) + 64LL))(
            *(_QWORD*)(a1 + 5664), 0);
        (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 5664) + 16LL))(
            *(_QWORD*)(a1 + 5664));
      }
    }
    else if (v18 != 0 &&
             ((*(__int64 (**)(__int64))(*(_QWORD*)v18 + 24LL))(v18) & 1) == 0) {
      *(_DWORD*)(*(_QWORD*)(a1 + 5648) + 252LL) = 0;
      (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 5760) + 48LL))(
          *(_QWORD*)(a1 + 5760), 0);
      snd_Fade_Fade_10c830_alt1((__int64)v20, 0x0.0p+0f);
      (*(void (**)(__int64, _QWORD*, double))(*(_QWORD*)(a1 + 40) + 160LL))(
          a1 + 40, v20, 0x0.0p+0);
      snd_Fade_Destroy_Fade_alt1(v20);
      snd_Fade_Fade_10c830_alt1((__int64)v20, 0x1.f400000000000p+8f);
      (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(a1 + 40) + 160LL))(
          a1 + 40, v20, 0x1.0000000000000p+0f);
      snd_Fade_Destroy_Fade_alt1(v20);
      v19 = *(_QWORD*)a1;
      *(_WORD*)(v2 + 1806) = 0;
      (*(void (**)(__int64))(v19 + 168))(a1);
      *(_DWORD*)(a1 + 5792) = 4;
    }
  }
  return 1;
}

__int64 Voice_146ce0(__int64 a1)
{

#pragma clang fp contract(off)
  _BYTE* v1;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  unsigned __int8* v7;
  __int64* v8;
  __int64 v9;
  unsigned int v10;
  unsigned int v11;
  const char* v12;
  __int64 v13;
  unsigned int v14;
  __int64 result;
  __int64 v16;
  int v17;
  float v18;
  float v19;
  unsigned int v20;
  _DWORD v21[2];

  v1 = (_BYTE*)(a1 + 4096);
  if (*(_DWORD*)(*(_QWORD*)(a1 + 5648) + 120LL) != 0) {
    goto LABEL_30;
  }
  (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 5760) + 40LL))(
      *(_QWORD*)(a1 + 5760), 0);
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 5760) + 24LL))(
      *(_QWORD*)(a1 + 5760), 64);
  (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 5760) + 32LL))(*(_QWORD*)(a1 + 5760));
  v3 = *(_QWORD*)(a1 + 5648);
  if (*(float*)(v3 + 248) <= 0x0.0p+0f) {
    if (*(float*)(v3 + 252) <= 0x0.0p+0f) {
      goto LABEL_4;
    }
  LABEL_35:
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 5760) + 24LL))(
        *(_QWORD*)(a1 + 5760), 1);
    v16 = *(_QWORD*)(a1 + 5760);
    v17 = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 56LL))(v16);
    v18 = *(float*)(*(_QWORD*)(a1 + 5648) + 252LL);
    v19 = v18 - (float)(*(int (**)(_QWORD))(**(_QWORD**)(a1 + 5760) + 56LL))(
                    *(_QWORD*)(a1 + 5760));
    v20 = rand();
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v16 + 48LL))(
        v16,
        (unsigned int)(v17 + (int)(float)(vcvts_n_f32_s32(v20, 0x1Fu) *
                                          (float)((float)(int)v19 +
                                                  0x1.cccccc0000000p-1f))));
    if (*(int*)(a1 + 5920) < 1) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 5760) + 24LL))(
      *(_QWORD*)(a1 + 5760), 1);
  (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 5760) + 48LL))(
      *(_QWORD*)(a1 + 5760),
      (unsigned int)(int)*(float*)(*(_QWORD*)(a1 + 5648) + 248LL));
  if (*(float*)(*(_QWORD*)(a1 + 5648) + 252LL) > 0x0.0p+0f) {
    goto LABEL_35;
  }
LABEL_4:
  if (*(int*)(a1 + 5920) >= 1) {
  LABEL_5:
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 5760) + 24LL))(
        *(_QWORD*)(a1 + 5760), 1);
    v4 = *(_QWORD*)(a1 + 5760);
    v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 56LL))(v4);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v4 + 48LL))(
        v4, (unsigned int)(*(_DWORD*)(a1 + 5920) + v5));
  }
LABEL_6:
  if (*(_DWORD*)(*(_QWORD*)(a1 + 5648) + 76LL) != 0) {
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 5760) + 24LL))(
        *(_QWORD*)(a1 + 5760), 2);
    v6 = *(_QWORD*)(a1 + 5760);
    v7 = (unsigned __int8*)GameRoutine_f4760(
        (_DWORD*)(*(_QWORD*)(a1 + 5648) + 76LL));
    v21[0] = (unsigned int)snd_fnd_calcCrc32(v7, 0);
    v21[1] = (unsigned int)snd_fnd_calcCrc32Reverse_alt1((const char*)v7, 0);
    (*(void (**)(__int64, _DWORD*))(*(_QWORD*)v6 + 64LL))(v6, v21);
  }
  if ((snd_fnd_WeakHandle_isValid_alt1((__int64*)(a1 + 5848)) & 1) != 0) {
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 5760) + 24LL))(
        *(_QWORD*)(a1 + 5760), 8);
    (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 5760) + 96LL))(
        *(_QWORD*)(a1 + 5760), 0);
  }
  if (*(int*)(*(_QWORD*)(a1 + 5648) + 556LL) >= 1 &&
      (*(int (**)(__int64))(*(_QWORD*)snd_g_proxy + 312LL))(snd_g_proxy) >= 1) {
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 5760) + 24LL))(
        *(_QWORD*)(a1 + 5760), 1024);
    (*(void (**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 5760) + 80LL))(
        *(_QWORD*)(a1 + 5760), a1, 1);
  }
  if (*(int*)(*(_QWORD*)(a1 + 5648) + 560LL) >= 1) {
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 5760) + 24LL))(
        *(_QWORD*)(a1 + 5760), 32);
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 5760) + 88LL))(
        *(_QWORD*)(a1 + 5760), a1);
  }
  if (*(_QWORD*)(a1 + 5672) != 0) {
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 5760) + 24LL))(
        *(_QWORD*)(a1 + 5760), 32);
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 5760) + 120LL))(
        *(_QWORD*)(a1 + 5760), a1);
  }
  if (*(int*)(*(_QWORD*)(a1 + 5648) + 576LL) >= 1) {
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 5760) + 24LL))(
        *(_QWORD*)(a1 + 5760), 0x20000);
    (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 5760) + 112LL))(
        *(_QWORD*)(a1 + 5760));
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 5760) + 128LL))(
      *(_QWORD*)(a1 + 5760), a1);
  if (*(_DWORD*)(a1 + 5768) != -1) {
    if ((v1[1820] & 1) == 0 &&
        (((*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 400LL))(
              snd_g_proxy) &
          1) != 0 &&
             (snd_fnd_WeakHandle_isValid_alt1((__int64*)(a1 + 5848)) & 1) !=
                 0 ||
         *(int*)(*(_QWORD*)(a1 + 5648) + 548LL) <= 0) &&
        (snd_fnd_WeakHandle_isValid_alt1((__int64*)(a1 + 5848)) & 1) != 0) {
      v8 = (__int64*)(snd_fnd_WeakHandle_get_alt1(a1 + 5848) + 32);
      v9 = 40;
    }
    else {
      v9 = 584;
      v8 = snd_s_target_ptr;
    }
    v10 = (*(__int64 (**)(void*))(*(_QWORD*)*v8 + v9))((void*)*v8);
    *(_DWORD*)(a1 + 5784) = v10;
    if (v10 != 0) {
      v11 = v10;
      v12 = (const char*)GameRoutine_190240(a1 + 5680);
      Voice_143b80(v11, v12);
      v1[1799] = 1;
    }
    v13 = *(_QWORD*)(a1 + 5664);
    v14 = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 40) + 344LL))(a1 + 40);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v13 + 152LL))(v13, v14);
  }
LABEL_30:
  (*(void (**)(__int64, double))(*(_QWORD*)(a1 + 40) + 32LL))(a1 + 40,
                                                              0x0.0p+0);
  result = *(_QWORD*)(a1 + 5664);
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 24LL))(result);
    if ((result & 1) != 0) {
      result = (*(__int64 (**)(_QWORD, __int64, _QWORD, _QWORD))(
          *(_QWORD*)*snd_s_target_ptr + 592LL))(*snd_s_target_ptr, a1,
                                                *(_QWORD*)(a1 + 5664), 0);
    }
  }
  v1[1806] = 1;
  return result;
}

float Voice_1482c0(__int64 a1)
{

#pragma clang fp contract(off)
  float v2;
  __int64 v3;
  __int64 v4;
  float v5;
  __int64 v6;
  float v7;
  float v8;
  _QWORD* v9;
  int v10;
  float v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;

  v2 = 0x0.0p+0f;
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 216LL))(a1) & 1) == 0) {
    nn_os_LockMutex(a1 + 5944);
    v3 = snd_fnd_WeakHandle_get_alt1(a1 + 5848);
    v4 = v3;
    if (v3 != 0 && *(_BYTE*)(v3 + 120) != 1 ||
        (*(_BYTE*)(a1 + 5895) & 1) != 0) {
    LABEL_35:
      nn_os_UnlockMutex(a1 + 5944);
      return v2;
    }
    v5 = snd_Param_calcVolume_126a10((float*)(a1 + 40));
    v6 = *(_QWORD*)(a1 + 5648);
    v7 = v5;
    if (*(int*)(v6 + 592) >= 1) {
      v8 = (*(float (**)(__int64))(*(_QWORD*)(a1 + 40) + 200LL))(a1 + 40);
      v6 = *(_QWORD*)(a1 + 5648);
      v7 = v7 * v8;
    }
    v9 = (_QWORD*)snd_g_proxy_ptr[0];
    v2 = v7 * *(float*)(v6 + 128);
    if (((*(__int64 (**)(_QWORD))(**(_QWORD**)snd_g_proxy_ptr[0] + 280LL))(
             *(_QWORD*)snd_g_proxy_ptr[0]) &
         1) == 0) {
      v10 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v9 + 264LL))(*v9);
      if (v10 == 2) {
        v11 = *(float*)(*(_QWORD*)(a1 + 5648) + 136LL);
      }
      else {
        if (v10 != 1) {
          goto LABEL_13;
        }
        v11 = *(float*)(*(_QWORD*)(a1 + 5648) + 132LL);
      }
      v2 = v2 * v11;
    }
  LABEL_13:
    v12 = snd_fnd_WeakHandle_get_alt1(a1 + 5800);
    if (v12 != 0) {
      v13 = v12 - 5592;
    }
    else {
      v13 = 0;
    }
    if (v12 != 0) {
      v2 = v2 *
           (*(float (**)(__int64))(*(_QWORD*)(v12 - 5592) + 72LL))(v12 - 5592);
    }
    v14 = snd_fnd_WeakHandle_get_alt1(a1 + 5816);
    if (v14 != 0) {
      v2 = v2 *
           (*(float (**)(__int64))(*(_QWORD*)(v14 - 5592) + 72LL))(v14 - 5592);
    }
    v15 = snd_fnd_WeakHandle_get_alt1(a1 + 5832);
    if (v15 != 0) {
      v2 = v2 *
           (*(float (**)(__int64))(*(_QWORD*)(v15 - 5592) + 72LL))(v15 - 5592);
    }
    if (v4 != 0) {
      v2 = v2 *
           (*(float (**)(__int64))(*(_QWORD*)(v4 - 5592) + 160LL))(v4 - 5592);
      if (*(int*)(*(_QWORD*)(a1 + 5648) + 592LL) >= 1) {
        v2 = v2 *
             (*(float (**)(__int64))(*(_QWORD*)(v4 - 5552) + 200LL))(v4 - 5552);
      }
    }
    v16 = snd_fnd_WeakHandle_get_alt1(a1 + 5864);
    if (v16 != 0) {
      v17 = v16;
      v2 = v2 * SeqVoice_12e0c0(v16 - 5592, v13);
      if (*(int*)(*(_QWORD*)(a1 + 5648) + 568LL) >= 1 &&
          *(int*)(*(_QWORD*)(v17 + 56) + 568LL) <= 0) {
        v2 = v2 * 0x1.0000000000000p-1f;
      }
      v18 = snd_fnd_WeakHandle_get_alt1(a1 + 5984);
      if (v18 == 0) {
        goto LABEL_31;
      }
    }
    else {
      if (*(int*)(*(_QWORD*)(a1 + 5648) + 568LL) > 0) {
        v2 = v2 * 0x1.0000000000000p-1f;
      }
      v18 = snd_fnd_WeakHandle_get_alt1(a1 + 5984);
      if (v18 == 0) {
        goto LABEL_31;
      }
    }
    v2 = v2 *
         (*(float (**)(__int64))(*(_QWORD*)(v18 - 5592) + 536LL))(v18 - 5592);
  LABEL_31:
    v19 = 0;
    if (v2 >= 0x0.0p+0f) {
      v19 = LODWORD(v2);
      if (v2 > 0x1.0000000000000p+7f) {
        v19 = 1124073472;
      }
    }
    *(_DWORD*)(a1 + 5520) = v19;
    goto LABEL_35;
  }
  return v2;
}

float Voice_148950(__int64 a1)
{

#pragma clang fp contract(off)
  double v2;
  float v3;
  double v4;
  __int64 v5;
  float v6;
  float v7;
  float v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  float v16;
  float v17;

  nn_os_LockMutex(a1 + 5944);
  v2 = snd_Fade_getValue(a1 + 3928);
  v3 = *(float*)&v2;
  v4 = snd_Fade_getValue(a1 + 4128);
  v5 = *(_QWORD*)(a1 + 5648);
  v6 = (float)(v3 + *(float*)&v4) + *(float*)(a1 + 3724);
  if (*(int*)(v5 + 592) >= 1) {
    v7 = (*(float (**)(__int64))(*(_QWORD*)(a1 + 40) + 504LL))(a1 + 40);
    v5 = *(_QWORD*)(a1 + 5648);
    v6 = v6 + v7;
  }
  v8 = v6 + *(float*)(v5 + 368);
  if (snd_fnd_WeakHandle_get_alt1(a1 + 5800) != 0) {
    v9 = snd_fnd_WeakHandle_get_alt1(a1 + 5800);
    v8 =
        v8 + (*(float (**)(__int64))(*(_QWORD*)(v9 - 5592) + 112LL))(v9 - 5592);
  }
  v10 = snd_fnd_WeakHandle_get_alt1(a1 + 5816);
  if (v10 != 0) {
    v8 = v8 +
         (*(float (**)(__int64))(*(_QWORD*)(v10 - 5592) + 112LL))(v10 - 5592);
  }
  v11 = snd_fnd_WeakHandle_get_alt1(a1 + 5832);
  if (v11 != 0) {
    v8 = v8 +
         (*(float (**)(__int64))(*(_QWORD*)(v11 - 5592) + 112LL))(v11 - 5592);
  }
  v12 = snd_fnd_WeakHandle_get_alt1(a1 + 5864);
  if (v12 != 0) {
    v8 = v8 +
         (*(float (**)(__int64))(*(_QWORD*)(v12 - 5592) + 568LL))(v12 - 5592);
  }
  v13 = snd_fnd_WeakHandle_get_alt1(a1 + 5848);
  if (v13 != 0) {
    v14 = v13;
    v8 = v8 +
         (*(float (**)(__int64))(*(_QWORD*)(v13 - 5592) + 200LL))(v13 - 5592);
    if (*(int*)(*(_QWORD*)(a1 + 5648) + 592LL) >= 1) {
      v8 = v8 +
           (*(float (**)(__int64))(*(_QWORD*)(v14 - 5552) + 504LL))(v14 - 5552);
    }
  }
  v15 = snd_fnd_WeakHandle_get_alt1(a1 + 5984);
  if (v15 != 0) {
    v8 = v8 +
         (*(float (**)(__int64))(*(_QWORD*)(v15 - 5592) + 568LL))(v15 - 5592);
  }
  v16 =
      v8 +
      (*(float (**)(_QWORD, __int64))(**(_QWORD**)snd_g_proxy_ptr[0] + 456LL))(
          *(_QWORD*)snd_g_proxy_ptr[0], a1);
  v17 = 0x0.0p+0f;
  if (v16 >= 0x0.0p+0f) {
    v17 = v16;
    if (v16 > 0x1.0000000000000p+0f) {
      v17 = 0x1.0000000000000p+0f;
    }
  }
  *(float*)(a1 + 5536) = v17;
  nn_os_UnlockMutex(a1 + 5944);
  return v16;
}

float Voice_148cc0(__int64 a1)
{

#pragma clang fp contract(off)
  double v2;
  __int64 v3;
  float v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  float v10;

  nn_os_LockMutex(a1 + 5944);
  v2 = snd_Fade_getValue(a1 + 4528);
  v3 = *(_QWORD*)(a1 + 5648);
  v4 = *(float*)&v2 + *(float*)(v3 + 384);
  if (*(int*)(v3 + 580) <= 0) {
    v4 = v4 + *(float*)(GameRoutine_119010(*(_QWORD*)(a1 + 32)) + 1456);
  }
  v5 = snd_fnd_WeakHandle_get_alt1(a1 + 5800);
  if (v5 != 0) {
    v4 =
        v4 + (*(float (**)(__int64))(*(_QWORD*)(v5 - 5592) + 128LL))(v5 - 5592);
  }
  v6 = snd_fnd_WeakHandle_get_alt1(a1 + 5816);
  if (v6 != 0) {
    v4 =
        v4 + (*(float (**)(__int64))(*(_QWORD*)(v6 - 5592) + 128LL))(v6 - 5592);
  }
  v7 = snd_fnd_WeakHandle_get_alt1(a1 + 5832);
  if (v7 != 0) {
    v4 =
        v4 + (*(float (**)(__int64))(*(_QWORD*)(v7 - 5592) + 128LL))(v7 - 5592);
  }
  v8 = snd_fnd_WeakHandle_get_alt1(a1 + 5864);
  if (v8 != 0) {
    v4 =
        v4 + (*(float (**)(__int64))(*(_QWORD*)(v8 - 5592) + 584LL))(v8 - 5592);
  }
  v9 = snd_fnd_WeakHandle_get_alt1(a1 + 5984);
  if (v9 != 0) {
    v4 =
        v4 + (*(float (**)(__int64))(*(_QWORD*)(v9 - 5592) + 584LL))(v9 - 5592);
  }
  v10 = 0x0.0p+0f;
  if (v4 >= 0x0.0p+0f) {
    v10 = v4;
    if (v4 > 0x1.0000000000000p+0f) {
      v10 = 0x1.0000000000000p+0f;
    }
  }
  *(float*)(a1 + 5544) = v10;
  nn_os_UnlockMutex(a1 + 5944);
  return v4;
}

__int64 Voice_149440(__int64 a1)
{
  __int64 v2;
  __int64 v4;

  v2 = snd_fnd_WeakHandle_get_alt1(a1 + 5864);
  if (v2 != 0 && (Voice_149440(v2 - 5592) & 1) != 0) {
    return 1;
  }
  v4 = snd_fnd_WeakHandle_get_alt1(a1 + 5984);
  if (v4 != 0 && (Voice_149440(v4 - 5592) & 1) != 0) {
    return 1;
  }
  else {
    return *(_BYTE*)(a1 + 5911) & 1;
  }
}

__int64 Voice_1494e0(__int64 a1)
{
  __int64 v2;
  __int64 v4;

  v2 = snd_fnd_WeakHandle_get_alt1(a1 + 5864);
  if (v2 != 0 && (Voice_1494e0(v2 - 5592) & 1) != 0) {
    return 1;
  }
  v4 = snd_fnd_WeakHandle_get_alt1(a1 + 5984);
  if (v4 != 0 && (Voice_1494e0(v4 - 5592) & 1) != 0) {
    return 1;
  }
  else {
    return *(_BYTE*)(a1 + 5913) & 1;
  }
}

__int64 Voice_149580(__int64 a1)
{
  __int64 v2;
  __int64 v4;

  v2 = snd_fnd_WeakHandle_get_alt1(a1 + 5864);
  if (v2 != 0 && (Voice_149580(v2 - 5592) & 1) != 0) {
    return 1;
  }
  v4 = snd_fnd_WeakHandle_get_alt1(a1 + 5984);
  if (v4 != 0 && (Voice_149580(v4 - 5592) & 1) != 0) {
    return 1;
  }
  else {
    return *(_BYTE*)(a1 + 5915) & 1;
  }
}

float Voice_149830(__int64 a1)
{

#pragma clang fp contract(off)
  float v2;
  __int64 v3;
  __int64 v4;

  v2 = *(float*)(*(_QWORD*)(a1 + 5648) + 144LL);
  v3 = snd_fnd_WeakHandle_get_alt1(a1 + 5864);
  if (v3 != 0) {
    v2 = v2 * Voice_149830(v3 - 5592);
  }
  v4 = snd_fnd_WeakHandle_get_alt1(a1 + 5984);
  if (v4 != 0) {
    return v2 * Voice_149830(v4 - 5592);
  }
  return v2;
}

float Voice_1498c0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;

  do {
    v3 = snd_fnd_WeakHandle_get_alt1(a1 + 5864);
    if (v3 != 0) {
      Voice_1498c0(v3 - 5592);
    }
    v2 = snd_fnd_WeakHandle_get_alt1(a1 + 5984);
    a1 = v2 - 5592;
  } while (v2 != 0);
  return 0x1.0000000000000p+0f;
}

float Voice_149930(__int64 a1)
{

#pragma clang fp contract(off)
  float v2;
  __int64 v3;
  __int64 v4;

  v2 = *(float*)(*(_QWORD*)(a1 + 5648) + 148LL);
  v3 = snd_fnd_WeakHandle_get_alt1(a1 + 5864);
  if (v3 != 0) {
    v2 = v2 * Voice_149930(v3 - 5592);
  }
  v4 = snd_fnd_WeakHandle_get_alt1(a1 + 5984);
  if (v4 != 0) {
    return v2 * Voice_149930(v4 - 5592);
  }
  return v2;
}

float Voice_1499b0(__int64 a1)
{

#pragma clang fp contract(off)
  float v2;
  __int64 v3;
  __int64 v4;

  v2 = *(float*)(*(_QWORD*)(a1 + 5648) + 380LL);
  v3 = snd_fnd_WeakHandle_get_alt1(a1 + 5864);
  if (v3 != 0) {
    v2 = v2 * Voice_1499b0(v3 - 5592);
  }
  v4 = snd_fnd_WeakHandle_get_alt1(a1 + 5984);
  if (v4 != 0) {
    return v2 * Voice_1499b0(v4 - 5592);
  }
  return v2;
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

__int64 Voice_149b60(int* a1, int a2, float a3, float a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v9;
  __int64 v14;
  __int64* v15;
  char v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  _QWORD v20[29];

  if (a1[1448] < 6) {
    return 0;
  }
  v20[25] = v7;
  v20[26] = v6;
  v20[27] = v4;
  v20[28] = v5;
  v9 = (__int64*)(a1 + 1024);
  if ((*((_BYTE*)a1 + 5885) & 1) != 0 ||
      snd_Param_isEnvelopeReleased_alt1((__int64)(a1 + 10)) ||
      snd_Param_isEnvelopeFading_alt1((__int64)(a1 + 10)) ||
      snd_Param_isEnvelopeEnded_alt1((__int64)(a1 + 10)) ||
      (*((_BYTE*)v9 + 1793) & 1) != 0 || (*((_BYTE*)v9 + 1794) & 1) != 0 ||
      (*((_BYTE*)v9 + 1795) & 1) != 0 || (*((_BYTE*)v9 + 1796) & 1) != 0) {
    return 0;
  }
  v14 = *((_QWORD*)a1 + 708);
  v15 = (__int64*)a1;
  if (v14 != 0) {
    v16 = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 24LL))(v14);
    v15 = (__int64*)a1;
    if ((v16 & 1) != 0) {
      (*(void (**)(__int64, _QWORD))(**((_QWORD**)a1 + 708) + 64LL))(
          *((_QWORD*)a1 + 708),
          (unsigned int)(int)(float)(a3 / 0x1.0aac080000000p+4f));
      (*(void (**)(__int64))(**((_QWORD**)a1 + 708) + 16LL))(
          *((_QWORD*)a1 + 708));
      v15 = (__int64*)a1;
    }
  }
  v17 = v15[706];
  *((_DWORD*)v15 + 1480) = a2;
  v18 = v15;
  *(_DWORD*)(v17 + 252) = 0;
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v15[720] + 48LL))(v15[720], 0);
  snd_Fade_Fade_10c830_alt1((__int64)v20, 0x0.0p+0f);
  (*(void (**)(__int64*, _QWORD*, double))(v18[5] + 160))(v18 + 5, v20,
                                                          0x0.0p+0);
  snd_Fade_Destroy_Fade_alt1(v20);
  snd_Fade_Fade_10c830_alt1((__int64)v20, a4);
  (*(void (**)(__int64*, _QWORD*, float))(v18[5] + 160))(v18 + 5, v20,
                                                         0x1.0000000000000p+0f);
  snd_Fade_Destroy_Fade_alt1(v20);
  v19 = *v18;
  *((_WORD*)v9 + 903) = 0;
  (*(void (**)(__int64*))(v19 + 168))(v18);
  *((_DWORD*)v18 + 1448) = 4;
  return 1;
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
        result = (__int64)X8CALL_X0(
            _QWORD*,
            (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(
                *v2 + 24LL))((void*)v2, *(_QWORD*)(result + 5664)));
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
