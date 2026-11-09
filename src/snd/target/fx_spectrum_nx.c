#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 FxSpectrum_Destructor_16f0e0(_QWORD);
__int64 GameRoutine_16f2b0(void);
__int64 GameRoutine_16f2e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16f420(_QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_atk_EffectAux_IsEnabled(_QWORD);
__int64 nn_audio_detail_FftProcessInternalImplFloat32Complex(_QWORD, _QWORD,
                                                             _QWORD, _QWORD,
                                                             _QWORD, _QWORD,
                                                             _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
extern __int64 snd_target_s_platform;
extern __int64* GameData_21348c0[12];
extern __int64* snd_g_memory_ptr[2];
void GameRoutine_651250(void*, unsigned __int64);
__int64 FxSpectrumNX_Destructor(_QWORD* a1);
void FxSpectrumNX_153d20(__int64 a1);
__int64 FxSpectrumNX_Unknown9(_QWORD* a1);
__int64 FxSpectrumNX_Unknown25(__int64 a1, int a2);
float log10f(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, float);
void FxSpectrumNx_16f420(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6);

__int64 FxSpectrumNX_Destructor(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v2 = GameData_21348c0[0];
  v3 = a1[703];
  *a1 = GameData_21348c0[0] + 2;
  a1[5] = v2 + 33;
  a1[699] = v2 + 174;
  v4 = snd_g_memory_ptr[0];
  if (v3 != 0) {
    a1[703] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
    (*(void (**)(__int64, __int64))(*(_QWORD*)*v4 + 24LL))(*v4, v3);
  }
  if (a1[708] != 0) {
    a1[708] = 0;
    (*(void (**)(__int64))(*(_QWORD*)snd_target_s_platform + 360LL))(
        snd_target_s_platform);
  }
  v5 = a1[835];
  a1[835] = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v6 = a1[838];
  a1[838] = 0;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v7 = a1[837];
  a1[837] = 0;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  if (a1[836] != 0) {
    v8 = *v4;
    a1[836] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v8 + 24LL))(v8);
  }
  v9 = a1[838];
  a1[838] = 0;
  if (v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v10 = a1[837];
  a1[837] = 0;
  if (v10 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v11 = a1[835];
  a1[835] = 0;
  if (v11 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  return FxSpectrum_Destructor_16f0e0(a1);
}

void FxSpectrumNX_153d20(__int64 a1)
{
  FxSpectrumNX_Destructor(a1 - 5592);
  GameRoutine_651250((void*)(a1 - 5592), 0x1A40u);
}

__int64 FxSpectrumNX_Unknown9(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  long double v4;

  result = nn_atk_EffectAux_IsEnabled(*(_QWORD*)(a1[703] + 16LL));
  if ((result & 1) != 0) {
    v3 = *(_QWORD*)(a1[703] + 16LL);
    if (*(int*)(v3 + 32872) >= 1) {
      nn_os_LockMutex(v3 + 32888);
      GameRoutine_16f2e0(a1, v3 + 104, *(int*)(v3 + 32872));
      *(_DWORD*)(v3 + 32872) = 0;
      *(__n128*)&v4 = nn_os_UnlockMutex(v3 + 32888);
      (*(void (**)(_QWORD*, __int64, long double))(*a1 + 200LL))(a1, 1, v4);
      return GameRoutine_16f420(a1);
    }
  }
  return result;
}

__int64 FxSpectrumNX_Unknown25(__int64 a1, int a2)
{
  int v2;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  float v18;
  unsigned int v19;
  unsigned __int64 v20;
  float v21;
  float v22;
  unsigned int v23;
  float v24;
  float v25;
  unsigned __int64 v26;
  __int64 v27;
  float* v28;
  unsigned __int64 v29;
  float v30;
  float v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  float v34;
  float v35;
  unsigned __int64 v36;
  float v37;
  int v38;
  unsigned int v39;
  bool v40;
  unsigned int v41;
  unsigned __int64 v42;

  v2 = *(_DWORD*)(a1 + 6664);
  result = GameRoutine_16f2b0();
  v9 = *(unsigned int*)(a1 + 6604);
  if ((unsigned int)result < (unsigned int)v9) {
    return result;
  }
  v10 = *(_QWORD*)(a1 + 6624);
  v11 = *(_QWORD*)(a1 + 6648);
  v12 = *(_QWORD*)(a1 + 6616);
  v13 = result;
  v14 = *(_QWORD*)(a1 + 6632);
  v15 = *(_QWORD*)(a1 + 6696);
  v16 = *(_QWORD*)(a1 + 6704);
  result = memset(v10, 0, 4 * v9, v6, v7, v8);
  LODWORD(v17) = *(_DWORD*)(a1 + 6604);
  v18 = 0.0;
  if (v13 >= (unsigned int)v17) {
    if ((_DWORD)v17 != 0) {
      v19 = 1;
      v20 = 0;
      do {
        v21 = *(float*)(v12 + 4LL * v2);
        v22 = *(float*)(v16 + 4 * v20);
        v23 = v19 - 1;
        ++v20;
        if ((unsigned int)(v2 + 1) >> 14 != 0) {
          v2 = 0;
        }
        else {
          ++v2;
        }
        v24 = v21 * v22;
        v25 = *(float*)(a1 + 6712);
        *(_DWORD*)(v15 + 4LL * v19) = 0;
        v19 += 2;
        *(float*)(v15 + 4LL * v23) = v24 / v25;
        v26 = *(unsigned int*)(a1 + 6604);
      } while (v20 < v26);
      v27 = (unsigned int)(2 * v26);
    }
    else {
      v27 = 0;
    }
    result = nn_audio_detail_FftProcessInternalImplFloat32Complex(
        v15, v27, v15, (unsigned int)v27, *(_QWORD*)(a1 + 6680) + 8LL, 1, 1);
    LODWORD(v17) = *(_DWORD*)(a1 + 6604);
    if ((unsigned int)v17 >= 2) {
      v28 = (float*)(v15 + 4);
      v29 = 0;
      do {
        v30 = *(v28 - 1);
        v31 = *v28;
        v28 += 2;
        *(float*)(v11 + 4 * v29++) =
            sqrtf((float)(v31 * v31) + (float)(v30 * v30)) /
            (float)((unsigned int)v17 >> 1);
        v17 = *(unsigned int*)(a1 + 6604);
      } while (v29 < v17 >> 1);
    }
    if (a2 == 1) {
      if ((unsigned int)v17 < 2) {
        goto LABEL_27;
      }
      v32 = 0;
      do {
        v34 = *(float*)(v11 + 4 * v32);
        if (*(float*)(v10 + 4 * v32) < v34) {
          *(float*)(v10 + 4 * v32) = v34;
          v35 = *(float*)(v11 + 4 * v32);
          if (*(float*)(v14 + 4 * v32) < v35) {
            *(float*)(v14 + 4 * v32) = v35;
          }
        }
        v33 = *(unsigned int*)(a1 + 6604);
        ++v32;
      } while (v32 < v33 >> 1);
    }
    else {
      if ((unsigned int)v17 < 2) {
        goto LABEL_27;
      }
      v36 = 0;
      do {
        *(float*)(v10 + 4 * v36) =
            *(float*)(v11 + 4 * v36) + *(float*)(v10 + 4 * v36);
        v37 = *(float*)(v11 + 4 * v36);
        if (*(float*)(v14 + 4 * v36) < v37) {
          *(float*)(v14 + 4 * v36) = v37;
        }
        v33 = *(unsigned int*)(a1 + 6604);
        ++v36;
      } while (v36 < v33 >> 1);
    }
    LODWORD(v17) = v33;
  LABEL_27:
    v18 = 1.0;
    if ((unsigned int)v17 >= 0x400) {
      v38 = 1024;
    }
    else {
      v38 = v17;
    }
    v39 = *(_DWORD*)(a1 + 6664) + v38;
    *(_DWORD*)(a1 + 6664) = v39;
    v40 = v39 >= 0x4000;
    v41 = v39 - 0x4000;
    if (v40) {
      *(_DWORD*)(a1 + 6664) = v41;
    }
  }
  if (a2 != 1 && (unsigned int)v17 >= 2) {
    v42 = 0;
    do {
      *(float*)(v10 + 4 * v42) = *(float*)(v10 + 4 * v42) / v18;
      ++v42;
    } while (v42 < (unsigned __int64)*(unsigned int*)(a1 + 6604) >> 1);
  }
  return result;
}

void FxSpectrumNx_16f420(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6)
{
  int v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  float v14;
  int v15;
  int v16;
  __int64 v17;
  int i;
  float v19;
  float v20;
  __int64 v21;
  int v22;
  float* v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;

  v6 = *(_DWORD*)(a1 + 5684);
  v8 = 0;
  v9 = a1 + 5684;
  v10 = a1 + 6144;
  do {
    while (1) {
      v11 = *(_QWORD*)(a1 + 6624);
      v12 = v8 + 1;
      v13 = *(_DWORD*)(v9 + 4 * (v8 + 1));
      v14 = *(float*)(v11 + 4LL * v6);
      if (v6 + 1 < v13) {
        v15 = v6;
        v16 = v6 - v13;
        v17 = v6 + 1LL;
        for (i = ~v16 & 7; i != 0; --i) {
          v19 = *(float*)(v11 + 4 * v17++);
          if (v14 < v19) {
            v14 = v19;
          }
        }
        if ((unsigned int)(v13 - v15 - 2) >= 7) {
          v21 = v11 + 4 * v17;
          v22 = v13 - v17;
          v23 = (float*)(v21 + 16);
          do {
            v24 = *(v23 - 4);
            if (v14 >= v24) {
              v24 = v14;
              v25 = *(v23 - 3);
              if (v24 < v25) {
              LABEL_18:
                v26 = *(v23 - 2);
                if (v25 < v26) {
                  goto LABEL_19;
                }
                goto LABEL_27;
              }
            }
            else {
              v25 = *(v23 - 3);
              if (v24 < v25) {
                goto LABEL_18;
              }
            }
            v25 = v24;
            v26 = *(v23 - 2);
            if (v25 < v26) {
            LABEL_19:
              v27 = *(v23 - 1);
              if (v26 < v27) {
                goto LABEL_20;
              }
              goto LABEL_28;
            }
          LABEL_27:
            v26 = v25;
            v27 = *(v23 - 1);
            if (v26 < v27) {
            LABEL_20:
              v28 = *v23;
              if (v27 < *v23) {
                goto LABEL_21;
              }
              goto LABEL_29;
            }
          LABEL_28:
            v27 = v26;
            v28 = *v23;
            if (v27 < *v23) {
            LABEL_21:
              v29 = v23[1];
              if (v28 < v29) {
                goto LABEL_22;
              }
              goto LABEL_30;
            }
          LABEL_29:
            v28 = v27;
            v29 = v23[1];
            if (v28 < v29) {
            LABEL_22:
              v30 = v23[2];
              if (v29 < v30) {
                goto LABEL_23;
              }
              goto LABEL_31;
            }
          LABEL_30:
            v29 = v28;
            v30 = v23[2];
            if (v29 < v30) {
            LABEL_23:
              v14 = v23[3];
              if (v30 >= v14) {
                goto LABEL_32;
              }
              goto LABEL_15;
            }
          LABEL_31:
            v30 = v29;
            v14 = v23[3];
            if (v30 >= v14) {
            LABEL_32:
              v14 = v30;
            }
          LABEL_15:
            v22 -= 8;
            v23 += 8;
          } while (v22 != 0);
        }
      }
      if (v14 > 0.0) {
        break;
      }
      v6 = *(_DWORD*)(v9 + 4 * (v8 + 1));
      *(_DWORD*)(v10 + 4 * v8++) = (int)(float)*(int*)(a1 + 6676);
      if (v12 == 114) {
        return;
      }
    }
    v20 = log10f(a1, a2, a3, a4, a5, a6, v14) * 20.0;
    if (v20 < (float)*(int*)(a1 + 6676)) {
      v20 = (float)*(int*)(a1 + 6676);
    }
    v6 = v13;
    *(_DWORD*)(v10 + 4 * v8++) = (int)v20;
  } while (v12 != 114);
}

#pragma GCC visibility pop
