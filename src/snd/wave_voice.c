#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Crc32List_11ec20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_145700(_QWORD);
__int64 GameRoutine_f7060(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Fade_10c830(_QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 snd_fnd_WeakHandle_reset(_QWORD);
extern __int64* GameData_2134c90;
__int64 WaveVoice_Destructor(__int64 a1);
__attribute__((swiftcall)) void
Manager_11ea40(PSEUDO_X8, __int64 result, __int64, unsigned int, unsigned int);
__int64 Actor_101c40(__int64 result, float);
__int64 Crc32List_11ed40(__int64, int*);
__int64 Crc32List_18d540(_QWORD, _QWORD);
__int64 GameRoutine_112180(__int64, __int64);
__int64 GameRoutine_112180_alt1(_QWORD, _QWORD) __asm__("GameRoutine_112180");
__int64 Voice_1449c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 rand(_QWORD);
__int64 snd_FadeRandom_start(__int64 result, float, float, float, float);
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_Voice_getFeature0(__int64);
__int64 snd_Voice_getFeature1(__int64);
__int64 snd_fnd_WeakHandle_get_alt1(__int64) __asm__("snd_fnd_WeakHandle_get");
__int64
snd_fnd_WeakHandle_isValid_alt1(__int64*) __asm__("snd_fnd_WeakHandle_isValid");
__int64 snd_fnd_WeakHandle_set(__int64, __int64);
__int64 snd_fnd_WeakHandle_set_alt1(_QWORD,
                                    _QWORD) __asm__("snd_fnd_WeakHandle_set");
bool snd_Voice_hasFeature0(__int64);
bool snd_Voice_hasFeature1(__int64);
bool snd_Voice_hasFeature22(__int64);
double Voice_1446e0(__int64);
extern __int64 snd_g_frameCount;
extern __int64 snd_g_proxy_ptr[2];
void GameRoutine_f05f0();
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
__int64 WaveVoice_18d880(__int64 a1, __int64 a2);
__int64 WaveVoice_18e630(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                         __int64 a9);
__int64 GameHr_18d540(__int64, __int64);
__int64 Voice_1449c0_alt1(_QWORD*, __int64, __int64, __int64,
                          __int64) __asm__("Voice_1449c0");
int rand_alt1() __asm__("rand");

__int64 WaveVoice_18d880(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  double v4;
  __int64 v5;
  float v6;
  float v7;
  float v8;
  int v9;
  bool v10;
  long double v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  int v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  __int64 v27;
  int* v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int* v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;
  __int64 v42;
  __int64 v43;
  __int64 result;
  __int64 v45;
  unsigned int v46;
  __int64 v47;
  float v48;
  int v49;
  int v50;
  _DWORD* v51;
  int v52;
  bool v53;
  int* v54;
  int* v55;
  int v56;
  int v57;
  int* v58;
  int v59;
  int* v60;
  int v61;
  int v62;
  __int64 v63;
  __int64 v64;
  struct {
    __int64 v65;
    int v66;
  } v65_;

  v4 = Voice_1446e0(a1);
  v5 = *(_QWORD*)(a1 + 5648);
  *(_DWORD*)(a1 + 5788) = LODWORD(v4);
  (*(void (**)(__int64, float, float))(*(_QWORD*)(a1 + 40) + 360LL))(
      a1 + 40, *(float*)(v5 + 280), *(float*)(v5 + 284));
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
  snd_Fade_Fade_10c830_alt1((__int64)&v65_.v65, 0x0.0p+0f);
  (*(void (**)(__int64, __int64*, double))(*(_QWORD*)(a1 + 40) + 160LL))(
      a1 + 40, &v65_.v65, 0x0.0p+0);
  snd_Fade_Destroy_Fade_alt1(&v65_.v65);
  (*(void (**)(__int64, float))(*(_QWORD*)(a1 + 40) + 48LL))(
      a1 + 40, *(float*)(a2 + 204) + *(float*)(a1 + 2924));
  (*(void (**)(__int64, __int64, float))(*(_QWORD*)(a1 + 40) + 160LL))(
      a1 + 40, a2, 0x1.0000000000000p+0f);
  v6 = *(float*)(a1 + 2928);
  snd_Fade_Fade_10c830_alt1((__int64)&v65_.v65, 0x0.0p+0f);
  (*(void (**)(__int64, __int64*, float))(*(_QWORD*)(a1 + 40) + 224LL))(
      a1 + 40, &v65_.v65, v6);
  snd_Fade_Destroy_Fade_alt1(&v65_.v65);
  v7 = *(float*)(a1 + 2932);
  snd_Fade_Fade_10c830_alt1((__int64)&v65_.v65, 0x0.0p+0f);
  (*(void (**)(__int64, __int64*, float))(*(_QWORD*)(a1 + 40) + 240LL))(
      a1 + 40, &v65_.v65, v7);
  snd_Fade_Destroy_Fade_alt1(&v65_.v65);
  v8 = *(float*)(a1 + 2936);
  snd_Fade_Fade_10c830_alt1((__int64)&v65_.v65, 0x0.0p+0f);
  (*(void (**)(__int64, __int64*, float))(*(_QWORD*)(a1 + 40) + 256LL))(
      a1 + 40, &v65_.v65, v8);
  snd_Fade_Destroy_Fade_alt1(&v65_.v65);
  (*(void (**)(__int64, float))(*(_QWORD*)(a1 + 40) + 336LL))(
      a1 + 40,
      (float)(*(float*)(a2 + 200) + *(float*)(*(_QWORD*)(a1 + 5648) + 244LL)) +
          *(float*)(a1 + 2940));
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)(a1 + 40) + 352LL))(
      a1 + 40, *(unsigned int*)(*(_QWORD*)(a1 + 5648) + 188LL));
  (*(void (**)(__int64, float, float, float, float, float))(
      *(_QWORD*)(a1 + 40) + 400LL))(a1 + 40,
                                    *(float*)(*(_QWORD*)(a1 + 5648) + 260LL),
                                    *(float*)(*(_QWORD*)(a1 + 5648) + 264LL),
                                    *(float*)(*(_QWORD*)(a1 + 5648) + 268LL),
                                    *(float*)(*(_QWORD*)(a1 + 5648) + 272LL),
                                    *(float*)(*(_QWORD*)(a1 + 5648) + 276LL));
  v9 = *(_DWORD*)(*(_QWORD*)(a1 + 5648) + 260LL);
  v10 = !snd_Voice_hasFeature22(a1);
  LODWORD(v11) = v9;
  if (v10) {
    v12 = 0;
  }
  else {
    v12 = 2;
  }
  (*(void (**)(__int64, __int64, long double, float, float, float, float))(
      *(_QWORD*)(a1 + 40) + 408LL))(a1 + 40, v12, v11,
                                    *(float*)(*(_QWORD*)(a1 + 5648) + 264LL),
                                    *(float*)(*(_QWORD*)(a1 + 5648) + 268LL),
                                    *(float*)(*(_QWORD*)(a1 + 5648) + 272LL),
                                    *(float*)(*(_QWORD*)(a1 + 5648) + 276LL));
  v13 = snd_fnd_WeakHandle_get_alt1(a1 + 6072);
  if (v13 != 0) {
    v14 = v13;
    v15 = (*(float (**)(__int64))(*(_QWORD*)a1 + 536LL))(a1);
    v16 = (*(float (**)(__int64))(*(_QWORD*)a1 + 544LL))(a1);
    v17 = (*(float (**)(__int64))(*(_QWORD*)a1 + 552LL))(a1);
    v18 = (*(float (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1);
    v19 = (*(float (**)(__int64))(*(_QWORD*)a1 + 584LL))(a1);
    v20 = (*(float (**)(__int64))(*(_QWORD*)a1 + 592LL))(a1);
    v21 = (*(float (**)(__int64))(*(_QWORD*)a1 + 600LL))(a1);
    v22 = (*(float (**)(__int64))(*(_QWORD*)a1 + 568LL))(a1);
    (*(void (**)(__int64, float))(*(_QWORD*)(v14 - 5552) + 1520LL))(v14 - 5552,
                                                                    v15);
    (*(void (**)(__int64, float))(*(_QWORD*)(v14 - 5552) + 1528LL))(v14 - 5552,
                                                                    v16);
    (*(void (**)(__int64, float))(*(_QWORD*)(v14 - 5552) + 1536LL))(v14 - 5552,
                                                                    v17);
    (*(void (**)(__int64, float))(*(_QWORD*)(v14 - 5552) + 1544LL))(v14 - 5552,
                                                                    v18);
    (*(void (**)(__int64, float))(*(_QWORD*)(v14 - 5552) + 1552LL))(v14 - 5552,
                                                                    v19);
    (*(void (**)(__int64, float))(*(_QWORD*)(v14 - 5552) + 1560LL))(v14 - 5552,
                                                                    v20);
    (*(void (**)(__int64, float))(*(_QWORD*)(v14 - 5552) + 1568LL))(v14 - 5552,
                                                                    v21);
    (*(void (**)(__int64, float))(*(_QWORD*)(v14 - 5552) + 1576LL))(v14 - 5552,
                                                                    v22);
  }
  if (!snd_Voice_hasFeature0(a1)) {
    goto LABEL_20;
  }
  v23 = snd_Voice_getFeature0(a1);
  if (v23 <= 2) {
    if (v23 == 1) {
      *(_BYTE*)(a1 + 5907) = 1;
      if (!snd_Voice_hasFeature1(a1)) {
        goto LABEL_23;
      }
    }
    else {
      if (v23 != 2) {
        goto LABEL_20;
      }
      *(_BYTE*)(a1 + 5908) = 1;
      if (!snd_Voice_hasFeature1(a1)) {
        goto LABEL_23;
      }
    }
  }
  else {
    if (v23 != 3) {
      if (v23 == 4) {
        *(_BYTE*)(a1 + 5912) = 1;
      }
      else if (v23 == 5) {
        *(_BYTE*)(a1 + 5914) = 1;
        if (!snd_Voice_hasFeature1(a1)) {
          goto LABEL_23;
        }
        goto LABEL_21;
      }
    LABEL_20:
      if (!snd_Voice_hasFeature1(a1)) {
        goto LABEL_23;
      }
      goto LABEL_21;
    }
    *(_BYTE*)(a1 + 5910) = 1;
    if (!snd_Voice_hasFeature1(a1)) {
      goto LABEL_23;
    }
  }
LABEL_21:
  v24 = snd_Voice_getFeature1(a1) - 2;
  if (v24 <= 3) {
    *(_BYTE*)(a1 + 2 * v24 + 5909) = 1;
  }
LABEL_23:
  v25 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 640LL))(a1);
  v26 = (*(__int64 (**)(_QWORD))(**(_QWORD**)snd_g_proxy_ptr[0] + 272LL))(
      *(_QWORD*)snd_g_proxy_ptr[0]);
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)a1 + 632LL))(a1, v26);
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)a1 + 648LL))(a1, v25);
  if ((snd_fnd_WeakHandle_isValid_alt1((__int64*)(a1 + 5800)) & 1) == 0) {
    v27 = *(_QWORD*)(a1 + 5648);
    v29 = *(_DWORD*)(v27 + 64);
    v28 = (int*)(v27 + 64);
    if (v29 != 0) {
      v30 = Crc32List_11ed40(*(_QWORD*)(a1 + 32), v28);
      v65_.v65 = 0;
      v65_.v66 = 0x2000;
      if (v30 != 0) {
        v31 = v30 + 5592;
      }
      else {
        v31 = 0;
      }
      snd_fnd_WeakHandle_set((__int64)&v65_.v65, v31);
      GameRoutine_112180(a1 + 5800, (__int64)&v65_.v65);
    }
  }
  if ((snd_fnd_WeakHandle_isValid_alt1((__int64*)(a1 + 5800)) & 1) == 0) {
    v32 = *(_QWORD*)(a1 + 32);
    v65_.v65 = 0;
    v65_.v66 = 0x2000;
    GameRoutine_112180((__int64)&v65_.v65, v32 + 3112);
    GameRoutine_112180(a1 + 5800, (__int64)&v65_.v65);
  }
  v33 = *(_QWORD*)(a1 + 5648);
  if (*(_DWORD*)(v33 + 68) != 0) {
    v34 = Crc32List_11ed40(*(_QWORD*)(a1 + 32), (int*)(v33 + 68));
    v65_.v65 = 0;
    v65_.v66 = 0x2000;
    if (v34 != 0) {
      v35 = v34 + 5592;
    }
    else {
      v35 = 0;
    }
    snd_fnd_WeakHandle_set((__int64)&v65_.v65, v35);
    GameRoutine_112180(a1 + 5816, (__int64)&v65_.v65);
    v33 = *(_QWORD*)(a1 + 5648);
  }
  v37 = *(_DWORD*)(v33 + 72);
  v36 = (int*)(v33 + 72);
  if (v37 != 0) {
    v38 = Crc32List_11ed40(*(_QWORD*)(a1 + 32), v36);
    v65_.v65 = 0;
    v65_.v66 = 0x2000;
    if (v38 != 0) {
      v39 = v38 + 5592;
    }
    else {
      v39 = 0;
    }
    snd_fnd_WeakHandle_set((__int64)&v65_.v65, v39);
    GameRoutine_112180(a1 + 5832, (__int64)&v65_.v65);
  }
  if ((*(_BYTE*)(a1 + 5886) & 1) == 0) {
    v40 = snd_fnd_WeakHandle_get_alt1(a1 + 5848);
    if (v40 != 0) {
      v41 = *(_DWORD*)(a1 + 5772);
      if (v41 != (*(unsigned int (**)(_QWORD))(**(_QWORD**)(v40 + 32) + 32LL))(
                     *(_QWORD*)(v40 + 32))) {
        Manager_11ea40((void*)((__int64)&v65_.v65), *(_QWORD*)(a1 + 32), 0,
                       *(_DWORD*)(a1 + 5772), 0xFFFFFFFF);
        v42 = snd_fnd_WeakHandle_get_alt1((__int64)&v65_.v65);
        if (v42 != 0) {
          v43 = v42;
          GameRoutine_112180(v42 + 48, a1 + 5848);
          v65_.v65 = 0;
          v65_.v66 = 0x2000;
          snd_fnd_WeakHandle_set((__int64)&v65_.v65, v43);
          GameRoutine_112180(a1 + 5848, (__int64)&v65_.v65);
          *(_WORD*)(a1 + 5886) = 257;
        }
      }
    }
  }
  result = snd_fnd_WeakHandle_get_alt1(a1 + 5848);
  if (result != 0) {
    v45 = result;
    v46 = (*(__int64 (**)(__int64))(*(_QWORD*)(result - 5592) + 128LL))(result -
                                                                        5592);
    result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 632LL))(a1, v46);
    *(_DWORD*)(v45 + 132) = *(_DWORD*)(*(_QWORD*)(a1 + 5648) + 436LL);
    *(_DWORD*)(v45 + 136) = *(_DWORD*)(*(_QWORD*)(a1 + 5648) + 440LL);
    if (*(_BYTE*)(a1 + 5886) == 1) {
      (*(void (**)(__int64))(*(_QWORD*)(v45 - 5592) + 48LL))(v45 - 5592);
      result = Actor_101c40(v45 - 5592, 0x1.0aac080000000p+4f);
    }
  }
  v47 = *(_QWORD*)(a1 + 5648);
  v48 = *(float*)(v47 + 228);
  if (v48 <= 0x1.0000000000000p+0f) {
    goto LABEL_69;
  }
  v49 = *(_DWORD*)(v47 + 224);
  v50 = (int)v48;
  switch (v49) {
  case 1:
    v59 = v50 - 1;
    result = rand_alt1();
    v60 = *(int**)(a1 + 5656);
    v61 = *v60;
    if ((int)(float)((float)((float)v59 + 0x1.cccccc0000000p-1f) *
                     vcvts_n_f32_s32(result, 0x1Fu)) == 0 &&
        v61 >= 1) {
      *v60 = 0;
      break;
    }
    *v60 = v61 + 1;
    goto LABEL_68;
  case 2:
    v55 = *(int**)(a1 + 5656);
    v56 = *v55;
    v57 = v55[1];
    ++*v55;
    v53 = v56 != v57;
    v58 = *(int**)(a1 + 5656);
    if (*v58 < v50) {
    LABEL_57:
      if (!v53) {
        break;
      }
      goto LABEL_68;
    }
    *v58 = 0;
    v62 = v50 - 1;
    result = rand_alt1();
    *(_DWORD*)(*(_QWORD*)(a1 + 5656) + 4LL) =
        (int)(float)((float)((float)v62 + 0x1.cccccc0000000p-1f) *
                     vcvts_n_f32_s32(result, 0x1Fu));
    if (v56 == v57) {
      v63 = *(_QWORD*)(a1 + 5656);
      if (*(_DWORD*)(v63 + 4) == 0) {
        *(_DWORD*)(v63 + 4) = v62;
      }
      break;
    }
  LABEL_68:
    *(_DWORD*)(*(_QWORD*)(a1 + 5648) + 120LL) = 1;
    *(_DWORD*)(*(_QWORD*)(a1 + 5648) + 124LL) = 0;
    break;
  case 3:
    v51 = *(_DWORD**)(a1 + 5656);
    v52 = (*v51)++;
    v53 = v52 > 0;
    v54 = *(int**)(a1 + 5656);
    if (*v54 >= v50) {
      *v54 = 0;
      if (v52 <= 0) {
        break;
      }
      goto LABEL_68;
    }
    goto LABEL_57;
  default:
    break;
  }
LABEL_69:
  v64 = snd_g_frameCount + 1;
  *(_QWORD*)(a1 + 5608) = snd_g_frameCount + 1;
  snd_g_frameCount = v64;
  return result;
}

__int64 WaveVoice_18e630(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                         __int64 a9)
{
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  struct {
    __int64 v21;
    int v22;
  } v21_;

  v15 = a1 + 4096;
  Voice_1449c0_alt1((_QWORD*)a1, a2, a4, a8, a9);
  *(_QWORD*)(a1 + 6072) = 0;
  v16 = GameData_2134c90;
  *(_BYTE*)(v15 + 1992) = 0;
  *(_DWORD*)(a1 + 6080) = 0x2000;
  v21_.v21 = 0;
  v21_.v22 = 0x2000;
  *(_QWORD*)a1 = v16 + 2;
  *(_QWORD*)(a1 + 5592) = v16 + 245;
  *(_QWORD*)(a1 + 40) = v16 + 104;
  *(_BYTE*)(v15 + 1795) = 1;
  *(_DWORD*)(a1 + 5792) = 1;
  if (a3 != 0) {
    v17 = a3 + 5592;
  }
  else {
    v17 = 0;
  }
  snd_fnd_WeakHandle_set((__int64)&v21_.v21, v17);
  GameRoutine_112180(a1 + 5800, (__int64)&v21_.v21);
  v21_.v21 = 0;
  v21_.v22 = 0x2000;
  if (a7 != 0) {
    v18 = a7 + 5592;
  }
  else {
    v18 = 0;
  }
  snd_fnd_WeakHandle_set((__int64)&v21_.v21, v18);
  GameRoutine_112180(a1 + 5848, (__int64)&v21_.v21);
  v19 = *(_QWORD*)(a1 + 5648);
  *(_DWORD*)(a1 + 5920) = *(_DWORD*)(a8 + 208);
  ((void (*)(__int64, __int64))GameRoutine_f05f0)(v19, a5);
  *(_QWORD*)(a1 + 5656) = a6;
  GameHr_18d540(a1, a8);
  WaveVoice_18d880(a1, a8);
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 784LL))(a1);
}

__int64 WaveVoice_Destructor(__int64 a1)
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

  v2 = GameData_2134c90;
  *(_QWORD*)a1 = GameData_2134c90 + 2;
  *(_QWORD*)(a1 + 5592) = v2 + 245;
  *(_QWORD*)(a1 + 40) = v2 + 104;
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

#pragma GCC visibility pop
