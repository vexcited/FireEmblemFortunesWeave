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
__int64 SeqVoice_12b0e0(__int64 result, float a2);
__int64 SeqVoice_12dce0(_QWORD* a1, __int64 a2);
__int64 SeqVoice_Unknown16(__int64 a1);
__int64 SeqVoice_Unknown19(__int64 result);
__int64 SeqVoice_Unknown20(__int64 result);
bool SeqVoice_1471b0(__int64 a1);
unsigned __int64* GameRoutine_f33e0(unsigned __int64* result);
unsigned __int64* SeqVoice_f3540(__int64 a1);
__int64 GameRoutine_12e0c0(_QWORD, _QWORD);
__int64 SeqVoice_Unknown93(__int64 a1);

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

__int64 SeqVoice_Destructor(__int64 a1)
{
  __int64* v2;
  __n128 v3;
  _QWORD* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  long double v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int16 v16;
  _BYTE v18[200];

  v2 = GameData_2134670[0];
  *(_QWORD*)a1 = GameData_2134670[0] + 2;
  *(_QWORD*)(a1 + 40) = v2 + 103;
  *(_QWORD*)(a1 + 5592) = v2 + 244;
  snd_Fade_Fade_10c830(v18, 0.0);
  SeqVoice_128ab0(a1, v18, 1, 0.0);
  v3 = snd_Fade_Destroy_Fade(v18);
  v4 = *(_QWORD**)(a1 + 6104);
  if (v4 != nullptr) {
    v5 = snd_g_memory_ptr[0];
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
      if (v4[6] != 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)*v5 + 24LL))(
            *v5, *(long double*)&v3);
      }
      if (v4[3] == 0) {
        goto LABEL_14;
      }
      goto LABEL_13;
    case 7:
    case 0xA:
      *(_QWORD*)(a1 + 6104) = 0;
      goto LABEL_14;
    case 9:
      *(_QWORD*)(a1 + 6104) = 0;
      v7 = v4[3];
      if (v7 != 0) {
        v4[4] = v7;
      LABEL_13:
        (*(void (**)(__int64, long double))(*(_QWORD*)*v5 + 24LL))(
            *v5, *(long double*)&v3);
      }
    LABEL_14:
      if (*v4 != 0) {
        v4[1] = *v4;
      LABEL_16:
        (*(void (**)(__int64, long double))(*(_QWORD*)*v5 + 24LL))(
            *v5, *(long double*)&v3);
      }
    LABEL_17:
      (*(void (**)(__int64, _QWORD*, long double))(*(_QWORD*)*v5 + 24LL))(
          *v5, v4, *(long double*)&v3);
      break;
    case 0xB:
      *(_QWORD*)(a1 + 6104) = 0;
      v6 = v4[2];
      if (v6 == 0) {
        goto LABEL_17;
      }
      v4[3] = v6;
      goto LABEL_16;
    default:
      break;
    }
  }
  if (*(_BYTE*)(a1 + 5886) == 1 &&
      (snd_fnd_WeakHandle_isValid(a1 + 5848) & 1) != 0) {
    v8 = Crc32List_11ec20(*(_QWORD*)(a1 + 32), a1 + 5848, 0);
    snd_fnd_WeakHandle_reset(a1 + 5848, v8);
  }
  if (*(_QWORD*)(a1 + 6088) != 0) {
    GameRoutine_f3540();
    v9 = *(_QWORD*)(a1 + 6088);
    *(_QWORD*)(a1 + 6088) = 0;
    v10 = *(_QWORD*)(a1 + 32);
    v11 = *(_QWORD*)(v9 + 680);
    if (v11 != 0) {
      v12 = *(_QWORD*)(v9 + 688);
      v13 = *(_QWORD*)(v9 + 680);
      if (v11 != v12) {
        do {
          v12 -= 664;
          GameRoutine_f7060(v12);
        } while (v12 != v11);
        v13 = *(_QWORD*)(v9 + 680);
      }
      *(_QWORD*)(v9 + 688) = v11;
      (*(void (**)(__int64, __int64))(*(_QWORD*)snd_g_memory + 24LL))(
          snd_g_memory, v13);
    }
    GameRoutine_f7060(v9 + 16);
    nn_os_LockMutex(v10 + 2960);
    v14 = *(_QWORD*)(v10 + 2944);
    v15 = (v9 - *(_QWORD*)(v10 + 2936)) / 0x2C8uLL;
    v16 = *(_WORD*)(v10 + 2952) - 1;
    *(_WORD*)(v10 + 2952) = v16;
    *(_WORD*)(v14 + 2LL * v16) = v15;
    v3 = nn_os_UnlockMutex(v10 + 2960);
  }
  return GameRoutine_145700(a1, *(long double*)&v3);
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

__int64 SeqVoice_12b0e0(__int64 result, float a2)
{
  int v2;
  __int64 v3;
  unsigned __int8** v4;
  __int64 v5;
  __int64* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  bool v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  bool v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  bool v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  long double v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  __int64 v38;
  _QWORD v39[2];
  _QWORD v40[2];
  __int64 v41;
  int v42;
  int v43;
  _QWORD v44[2];
  __int64 v45;
  int v46;
  int v47;
  _QWORD v48[2];
  __int64 v49;
  int v50;
  int v51;
  int v52;
  char v53;
  __int64 v54;
  char v55;
  __int64 v56;
  char v57;
  __int64 v58;
  char v59;
  __int64 v60;
  float v61;

  v2 = *(_DWORD*)(result + 5792);
  v3 = result;
  if (v2 == 8) {
    v10 = snd_fnd_WeakHandle_get(*(_QWORD*)(result + 6104), a2);
    if (v10 == 0 || ((result = (*(__int64 (**)(__int64))(
                          *(_QWORD*)(v10 - 5592) + 376LL))(v10 - 5592)) &
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
      v11 = 10;
      goto LABEL_75;
    }
    return result;
  }
  if (v2 != 7) {
    if (v2 != 6) {
      return result;
    }
    if ((snd_Param_isEnvelopeReleased(result + 40) & 1) != 0 ||
        (snd_Param_isEnvelopeFading(v3 + 40) & 1) != 0 ||
        (snd_Param_isEnvelopeEnded(v3 + 40) & 1) != 0) {
      goto LABEL_68;
    }
    v4 = *(unsigned __int8***)(v3 + 6096);
    *(_DWORD*)(v3 + 5788) = 0;
    v5 = *(_QWORD*)(*(_QWORD*)(v3 + 6088) + 680LL) + 664LL * **v4;
    GameRoutine_f7640(v40);
    GameRoutine_f05e0(v40, v5);
    GameRoutine_f1b80((__int64)v40, *(unsigned __int8**)(v3 + 5648));
    v6 = (__int64*)(v5 + 80);
    v52 = 1065353216;
    if (v44 != (_QWORD*)(v5 + 80)) {
      v7 = *(unsigned __int8*)v6;
      if ((v44[0] & 1) != 0) {
        v12 = (v7 & 1) == 0;
        v13 = v7 >> 1;
        if (v12) {
          v14 = v5 + 81;
        }
        else {
          v14 = *(_QWORD*)(v5 + 96);
        }
        if (v12) {
          v15 = v13;
        }
        else {
          v15 = *(_QWORD*)(v5 + 88);
        }
        GameRoutine_a3a260(v44, v14, v15);
      }
      else if ((v7 & 1) != 0) {
        GameRoutine_a3a3a0(v44, *(_QWORD*)(v5 + 96), *(_QWORD*)(v5 + 88));
      }
      else {
        v8 = *v6;
        v9 = *(_QWORD*)(v5 + 96);
        v44[1] = *(_QWORD*)(v5 + 88);
        v45 = v9;
        v44[0] = v8;
      }
    }
    v46 = *(_DWORD*)(v5 + 104);
    v47 = *(_DWORD*)(v5 + 108);
    if (v40 != v6) {
      v16 = *(unsigned __int8*)v6;
      if ((v40[0] & 1) != 0) {
        v19 = (v16 & 1) == 0;
        v20 = v16 >> 1;
        if (v19) {
          v21 = v5 + 81;
        }
        else {
          v21 = *(_QWORD*)(v5 + 96);
        }
        if (v19) {
          v22 = v20;
        }
        else {
          v22 = *(_QWORD*)(v5 + 88);
        }
        GameRoutine_a3a260(v40, v21, v22);
      }
      else if ((v16 & 1) != 0) {
        GameRoutine_a3a3a0(v40, *(_QWORD*)(v5 + 96), *(_QWORD*)(v5 + 88));
      }
      else {
        v17 = *v6;
        v18 = *(_QWORD*)(v5 + 96);
        v40[1] = *(_QWORD*)(v5 + 88);
        v41 = v18;
        v40[0] = v17;
      }
    }
    v42 = *(_DWORD*)(v5 + 104);
    v43 = *(_DWORD*)(v5 + 108);
    if (v40 != (_QWORD*)v5) {
      v23 = *(unsigned __int8*)v6;
      if ((v48[0] & 1) != 0) {
        v26 = (v23 & 1) == 0;
        v27 = v23 >> 1;
        if (v26) {
          v28 = v5 + 81;
        }
        else {
          v28 = *(_QWORD*)(v5 + 96);
        }
        if (v26) {
          v29 = v27;
        }
        else {
          v29 = *(_QWORD*)(v5 + 88);
        }
        GameRoutine_a3a260(v48, v28, v29);
      }
      else if ((v23 & 1) != 0) {
        GameRoutine_a3a3a0(v48, *(_QWORD*)(v5 + 96), *(_QWORD*)(v5 + 88));
      }
      else {
        v24 = *v6;
        v25 = *(_QWORD*)(v5 + 96);
        v48[1] = *(_QWORD*)(v5 + 88);
        v49 = v25;
        v48[0] = v24;
      }
    }
    v50 = *(_DWORD*)(v5 + 104);
    v51 = *(_DWORD*)(v5 + 108);
    *(struct PseudoSret*)(v39) =
        GameRoutine_130790(v3, 0, v40,
                           *(_QWORD*)(*(_QWORD*)(v3 + 6096) + 48LL) +
                               104LL * ***(unsigned __int8***)(v3 + 6096),
                           &v61, 1);
    GameRoutine_112180(*(_QWORD*)(v3 + 6104), v39);
    v30 = GameManager_a223a0(*(_QWORD*)(v3 + 6104));
    if (v30 != 0) {
      v32 = v30;
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v30 + 376LL))(v30) & 1) != 0) {
        v33 = *(_QWORD*)(v3 + 6096);
        LODWORD(v34) = *(_DWORD*)(v33 + 24);
        if ((int)v34 > 1) {
          v35 = 1;
          do {
            WaveMultiVoice_182ed0(
                v32, *(_QWORD*)(*(_QWORD*)(v3 + 6088) + 680LL) +
                         664LL * *(unsigned __int8*)(*(_QWORD*)v33 + v35) +
                         104);
            v33 = *(_QWORD*)(v3 + 6096);
            ++v35;
            v34 = *(int*)(v33 + 24);
          } while (v35 < v34);
        }
        if ((int)v34 >= 1) {
          v36 = 0;
          do {
            WaveMultiVoice_183280(
                v32, (unsigned int)v36,
                *(_QWORD*)(*(_QWORD*)(v3 + 6088) + 680LL) +
                    664LL * *(unsigned __int8*)(*(_QWORD*)v33 + v36));
            v33 = *(_QWORD*)(v3 + 6096);
            ++v36;
          } while (v36 < *(int*)(v33 + 24));
        }
      }
    }
    *(float*)&v31 = v61;
    if (v61 > *(float*)(v3 + 5788)) {
      *(float*)(v3 + 5788) = v61;
      v37 = snd_g_memory_ptr[0];
      if ((v59 & 1) == 0) {
      LABEL_61:
        if ((v57 & 1) == 0) {
          goto LABEL_62;
        }
        goto LABEL_79;
      }
    }
    else {
      v37 = snd_g_memory_ptr[0];
      if ((v59 & 1) == 0) {
        goto LABEL_61;
      }
    }
    (*(void (**)(__int64, __int64, long double))(*(_QWORD*)*v37 + 24LL))(
        *v37, v60, v31);
    if ((v57 & 1) == 0) {
    LABEL_62:
      if ((v55 & 1) == 0) {
        goto LABEL_63;
      }
      goto LABEL_80;
    }
  LABEL_79:
    (*(void (**)(__int64, __int64, long double))(*(_QWORD*)*v37 + 24LL))(
        *v37, v58, v31);
    if ((v55 & 1) == 0) {
    LABEL_63:
      if ((v53 & 1) == 0) {
        goto LABEL_64;
      }
      goto LABEL_81;
    }
  LABEL_80:
    (*(void (**)(__int64, __int64, long double))(*(_QWORD*)*v37 + 24LL))(
        *v37, v56, v31);
    if ((v53 & 1) == 0) {
    LABEL_64:
      if ((v48[0] & 1) == 0) {
        goto LABEL_65;
      }
      goto LABEL_82;
    }
  LABEL_81:
    (*(void (**)(__int64, __int64, long double))(*(_QWORD*)*v37 + 24LL))(
        *v37, v54, v31);
    if ((v48[0] & 1) == 0) {
    LABEL_65:
      if ((v44[0] & 1) == 0) {
        goto LABEL_66;
      }
      goto LABEL_83;
    }
  LABEL_82:
    (*(void (**)(__int64, __int64, long double))(*(_QWORD*)*v37 + 24LL))(
        *v37, v49, v31);
    if ((v44[0] & 1) == 0) {
    LABEL_66:
      if ((v40[0] & 1) == 0) {
      LABEL_68:
        *(_DWORD*)(v3 + 5792) = 7;
        goto LABEL_69;
      }
    LABEL_67:
      (*(void (**)(__int64, __int64, long double))(*(_QWORD*)*v37 + 24LL))(
          *v37, v41, v31);
      goto LABEL_68;
    }
  LABEL_83:
    (*(void (**)(__int64, __int64, long double))(*(_QWORD*)*v37 + 24LL))(
        *v37, v45, v31);
    if ((v40[0] & 1) == 0) {
      goto LABEL_68;
    }
    goto LABEL_67;
  }

LABEL_69:
  result = GameManager_a223a0(*(_QWORD*)(v3 + 6104));
  if (result == 0) {
  LABEL_74:
    v11 = 8;
  LABEL_75:
    *(_DWORD*)(v3 + 5792) = v11;
    return result;
  }
  v38 = result;
  result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 376LL))(result);
  if ((result & 1) != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v38 + 184LL))(v38);
    if ((result & 1) != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 216LL))(v3);
      if ((result & 1) == 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v38 + 208LL))(v38);
        goto LABEL_74;
      }
    }
  }
  return result;
}

__int64 SeqVoice_12dce0(_QWORD* a1, __int64 a2)
{
  float v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _BYTE* v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _BYTE* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _BYTE* v25;
  __int64 v26;
  __int64 v27;
  _BYTE* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _BYTE* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int8 v41;
  _BYTE v42[7];
  __int64 v43;
  _BYTE* v44;

  GameRoutine_190020(&v41, a2);
  switch (*(_DWORD*)(a1[761] + 8LL)) {
  case 1:
  case 2:
  case 3:
  case 5:
  case 6:
  case 8:
  case 0xB:
  case 0xC:
    v4 = snd_fnd_WeakHandle_get(a1[763], v3);
    if (v4 == 0) {
      goto LABEL_55;
    }
    v5 = GameRoutine_190240(v4 + 144);
    v6 = strlen(v5);
    v8 = v41 >> 1;
    if ((v41 & 1) != 0) {
      v8 = v43;
    }
    if (v6 != v8) {
      goto LABEL_55;
    }
    v9 = v6;
    if (v6 == -1) {
      goto LABEL_70;
    }
    if ((v41 & 1) != 0) {
      v10 = v44;
    }
    else {
      v10 = v42;
    }
    v11 = memcmp(v10, v5, v9) == 0;
    goto LABEL_56;
  case 4:
    if (*(int*)(a1[762] + 24LL) < 1) {
      goto LABEL_55;
    }
    v19 = 0;
    v20 = 0;
    v11 = 0;
    while (1) {
      v21 = snd_fnd_WeakHandle_get(*(_QWORD*)a1[763] + v19, v3);
      if (v21 != 0) {
        v22 = GameRoutine_190240(v21 + 144);
        v6 = strlen(v22);
        v23 = v41 >> 1;
        if ((v41 & 1) != 0) {
          v23 = v43;
        }
        if (v6 == v23) {
          v24 = v6;
          if (v6 == -1) {
            goto LABEL_70;
          }
          if ((v41 & 1) != 0) {
            v25 = v44;
          }
          else {
            v25 = v42;
          }
          if ((unsigned int)memcmp(v25, v22, v24) == 0) {
            ++v11;
          }
        }
      }
      ++v20;
      v19 += 16;
      if (v20 >= *(int*)(a1[762] + 24LL)) {
        goto LABEL_56;
      }
    }
  case 7:
    if (*(int*)(a1[762] + 24LL) < 1) {
      goto LABEL_55;
    }
    v26 = 0;
    v27 = 0;
    v11 = 0;
    while (1) {
      v29 = snd_fnd_WeakHandle_get(*(_QWORD*)a1[763] + v26, v3);
      if (v29 != 0) {
        v30 = GameRoutine_190240(v29 + 144);
        v6 = strlen(v30);
        v31 = v41 >> 1;
        if ((v41 & 1) != 0) {
          v31 = v43;
        }
        if (v6 == v31) {
          v32 = v6;
          if (v6 == -1) {
            goto LABEL_70;
          }
          if ((v41 & 1) != 0) {
            v28 = v44;
          }
          else {
            v28 = v42;
          }
          if ((unsigned int)memcmp(v28, v30, v32) == 0) {
            ++v11;
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
    v33 = 0;
    v34 = 0;
    v11 = 0;
    while (1) {
      v37 = snd_fnd_WeakHandle_get(*(_QWORD*)a1[763] + v33, v3);
      if (v37 != 0) {
        v38 = GameRoutine_190240(v37 + 144);
        v6 = strlen(v38);
        v39 = v41 >> 1;
        if ((v41 & 1) != 0) {
          v39 = v43;
        }
        if (v6 == v39) {
          v40 = v6;
          if (v6 == -1) {
            goto LABEL_70;
          }
          if ((v41 & 1) != 0) {
            v36 = v44;
          }
          else {
            v36 = v42;
          }
          if ((unsigned int)memcmp(v36, v38, v40) == 0) {
            ++v11;
          }
        }
      }
      ++v34;
      v33 += 16;
      if (v34 >= *(int*)(a1[762] + 24LL)) {
        goto LABEL_56;
      }
    }
  case 0xA:
    if (*(int*)(a1[762] + 24LL) < 1) {
      goto LABEL_55;
    }
    v12 = 0;
    v13 = 0;
    v11 = 0;
    do {
      v14 = snd_fnd_WeakHandle_get(*(_QWORD*)a1[763] + v12, v3);
      if (v14 != 0) {
        v15 = GameRoutine_190240(v14 + 144);
        v6 = strlen(v15);
        v16 = v41 >> 1;
        if ((v41 & 1) != 0) {
          v16 = v43;
        }
        if (v6 == v16) {
          v17 = v6;
          if (v6 == -1) {
          LABEL_70:
            GameRoutine_a36650(v6, v7);
          }
          if ((v41 & 1) != 0) {
            v18 = v44;
          }
          else {
            v18 = v42;
          }
          if ((unsigned int)memcmp(v18, v15, v17) == 0) {
            ++v11;
          }
        }
      }
      ++v13;
      v12 += 16;
    } while (v13 < *(int*)(a1[762] + 24LL));
  LABEL_56:
    if ((v41 & 1) != 0) {
      (*(void (**)(_QWORD, _BYTE*))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
          *snd_g_memory_ptr[0], v44);
    }
    return v11;
  default:
  LABEL_55:
    v11 = 0;
    goto LABEL_56;
  }
}

__int64 SeqVoice_Unknown93(__int64 a1)
{
  return GameRoutine_12e0c0(a1 - 40, 0);
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
