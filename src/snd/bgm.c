#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_112180(__int64, __int64);
__int64 snd_BGM_getBeat(__int64, __int64, int);
__int64 snd_BGM_resumeMuteAll(__int64 result, __int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_Name_Destroy_Name(__int64 result);
__int64 snd_fnd_WeakHandle_get(__int64);
__int64 snd_fnd_WeakHandle_isValid(__int64*);
__int64 snd_getListenerPosition_100870();
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
void snd_Fade_Fade_10c830(__int64, float);
void snd_Fade_Fade_10c910(__int64, int);
__int64 BGM_d5640(__int64 a1);
__int64 snd_BGM_replaceEntry(_QWORD*, _QWORD*, __int64, unsigned int, int,
                             float, float);
__int64 snd_BGM_resumePauseAll(__int64 result, __int64);
__int64 snd_BGM_resumeSystemMuteAll(__int64 result, __int64);
__int64 snd_BGM_resumeSystemPauseAll(__int64 result, __int64);
__int64 snd_BGM_startEntry(__int64*, _QWORD*, __int64, unsigned int, int, float,
                           float);
extern __int64* snd_g_memory_ptr[2];
extern char GameData_1a9f09e;
int memcmp(__int64, __int64, unsigned __int64);
unsigned __int64 strlen(const char*);
void __attribute__((noreturn)) snd_a36650();
__int64 BGM_d7320(__int64* a1, __int64 a2, __int64 a3, unsigned int a4, char a5,
                  float a6, float a7);

__int64 BGM_d5640(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 i;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  float v39;
  int v40;
  int v41;
  unsigned int v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  int v46;
  __int64 v47;
  __int64 v48;
  int v49;
  bool v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  int v56;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  int v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  struct {
    __int64 v66;
    int v67;
  } v66_;
  struct {
    _QWORD v68[25];
    char gap232_[12];
    float v69;
  } v68_;

  result = snd_getListenerPosition_100870();
  if (v68_.v69 <= -0x1.86a0000000000p+16f) {
    return result;
  }
  v3 = *(_QWORD*)(a1 + 16);
  if (v3 == *(_QWORD*)(a1 + 8)) {
    return result;
  }
  if (*(_BYTE*)(v3 - 80) == 1) {
    v4 = snd_fnd_WeakHandle_get(v3 - 384);
    if (v4 == 0 || ((result = (*(__int64 (**)(__int64))(*(_QWORD*)(v4 - 5592) +
                                                        184LL))(v4 - 5592)) &
                    1) != 0) {
      v5 = snd_fnd_WeakHandle_get(v3 - 328);
      if (v5 == 0 || ((result = (*(__int64 (**)(__int64))(
                           *(_QWORD*)(v5 - 5592) + 184LL))(v5 - 5592)) &
                      1) != 0) {
        v6 = snd_fnd_WeakHandle_get(v3 - 272);
        if (v6 == 0 || ((result = (*(__int64 (**)(__int64))(
                             *(_QWORD*)(v6 - 5592) + 184LL))(v6 - 5592)) &
                        1) != 0) {
          v7 = snd_fnd_WeakHandle_get(v3 - 216);
          if (v7 == 0 || ((result = (*(__int64 (**)(__int64))(
                               *(_QWORD*)(v7 - 5592) + 184LL))(v7 - 5592)) &
                          1) != 0) {
            v8 = snd_fnd_WeakHandle_get(v3 - 160);
            if (v8 == 0 || ((result = (*(__int64 (**)(__int64))(
                                 *(_QWORD*)(v8 - 5592) + 184LL))(v8 - 5592)) &
                            1) != 0) {
              v9 = snd_fnd_WeakHandle_get(v3 - 104);
              if (v9 == 0 || ((result = (*(__int64 (**)(__int64))(
                                   *(_QWORD*)(v9 - 5592) + 184LL))(v9 - 5592)) &
                              1) != 0) {
                *(_BYTE*)(v3 - 80) = 0;
                v10 = snd_fnd_WeakHandle_get(v3 - 384);
                if (v10 != 0) {
                  (*(void (**)(__int64))(*(_QWORD*)(v10 - 5592) + 208LL))(v10 -
                                                                          5592);
                }
                v11 = snd_fnd_WeakHandle_get(v3 - 328);
                if (v11 != 0) {
                  (*(void (**)(__int64))(*(_QWORD*)(v11 - 5592) + 208LL))(v11 -
                                                                          5592);
                }
                v12 = snd_fnd_WeakHandle_get(v3 - 272);
                if (v12 != 0) {
                  (*(void (**)(__int64))(*(_QWORD*)(v12 - 5592) + 208LL))(v12 -
                                                                          5592);
                }
                v13 = snd_fnd_WeakHandle_get(v3 - 216);
                if (v13 != 0) {
                  (*(void (**)(__int64))(*(_QWORD*)(v13 - 5592) + 208LL))(v13 -
                                                                          5592);
                }
                v14 = snd_fnd_WeakHandle_get(v3 - 160);
                if (v14 != 0) {
                  (*(void (**)(__int64))(*(_QWORD*)(v14 - 5592) + 208LL))(v14 -
                                                                          5592);
                }
                result = snd_fnd_WeakHandle_get(v3 - 104);
                if (result != 0) {
                  result = (*(__int64 (**)(__int64))(*(_QWORD*)(result - 5592) +
                                                     208LL))(result - 5592);
                }
              }
            }
          }
        }
      }
    }
  }
  v15 = *(_QWORD*)(v3 - 72);
  if (v15 == 0 || *(_BYTE*)(v3 - 74) == 1) {
    for (i = *(_QWORD*)(a1 + 16); i != *(_QWORD*)(a1 + 8);
         i = *(_QWORD*)(a1 + 16)) {
      v17 = snd_fnd_WeakHandle_get(i - 384);
      if (v17 != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)(v17 - 5592) + 376LL))(
            v17 - 5592);
        if ((result & 1) != 0) {
          break;
        }
      }
      v18 = snd_fnd_WeakHandle_get(i - 328);
      if (v18 != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)(v18 - 5592) + 376LL))(
            v18 - 5592);
        if ((result & 1) != 0) {
          break;
        }
      }
      v19 = snd_fnd_WeakHandle_get(i - 272);
      if (v19 != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)(v19 - 5592) + 376LL))(
            v19 - 5592);
        if ((result & 1) != 0) {
          break;
        }
      }
      v20 = snd_fnd_WeakHandle_get(i - 216);
      if (v20 != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)(v20 - 5592) + 376LL))(
            v20 - 5592);
        if ((result & 1) != 0) {
          break;
        }
      }
      v21 = snd_fnd_WeakHandle_get(i - 160);
      if (v21 != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)(v21 - 5592) + 376LL))(
            v21 - 5592);
        if ((result & 1) != 0) {
          break;
        }
      }
      v22 = snd_fnd_WeakHandle_get(i - 104);
      if (v22 != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)(v22 - 5592) + 376LL))(
            v22 - 5592);
        if ((result & 1) != 0) {
          break;
        }
      }
      v23 = *(_QWORD*)(a1 + 16);
      v24 = *(unsigned __int8*)(i - 75);
      snd_Name_Destroy_Name(v23 - 136);
      snd_Name_Destroy_Name(v23 - 192);
      snd_Name_Destroy_Name(v23 - 248);
      snd_Name_Destroy_Name(v23 - 304);
      snd_Name_Destroy_Name(v23 - 360);
      result = snd_Name_Destroy_Name(v23 - 416);
      *(_QWORD*)(a1 + 16) = v23 - 416;
      if (v24 == 1) {
        snd_Fade_Fade_10c910((__int64)v68_.v68, 1000);
        snd_BGM_resumeMuteAll(a1, (__int64)v68_.v68);
        result = snd_Fade_Destroy_Fade(v68_.v68);
      }
    }
    return result;
  }
  v25 = *(_DWORD*)(a1 + 36);
  v26 = v3 - 416;
  if (v25 != 4) {
    if (v25 != 3) {
      if (v25 != 1) {
        return result;
      }
      if ((snd_fnd_WeakHandle_isValid((__int64*)(v3 - 384)) & 1) != 0) {
        v27 = snd_fnd_WeakHandle_get(v3 - 384);
        result = (*(__int64 (**)(__int64))(*(_QWORD*)(v27 - 5592) + 184LL))(
            v27 - 5592);
        if ((result & 1) == 0) {
          return result;
        }
      }
      if ((snd_fnd_WeakHandle_isValid((__int64*)(v3 - 328)) & 1) != 0) {
        v28 = snd_fnd_WeakHandle_get(v3 - 328);
        result = (*(__int64 (**)(__int64))(*(_QWORD*)(v28 - 5592) + 184LL))(
            v28 - 5592);
        if ((result & 1) == 0) {
          return result;
        }
      }
      if ((snd_fnd_WeakHandle_isValid((__int64*)(v3 - 272)) & 1) != 0) {
        v29 = snd_fnd_WeakHandle_get(v3 - 272);
        result = (*(__int64 (**)(__int64))(*(_QWORD*)(v29 - 5592) + 184LL))(
            v29 - 5592);
        if ((result & 1) == 0) {
          return result;
        }
      }
      if ((snd_fnd_WeakHandle_isValid((__int64*)(v3 - 216)) & 1) != 0) {
        v30 = snd_fnd_WeakHandle_get(v3 - 216);
        result = (*(__int64 (**)(__int64))(*(_QWORD*)(v30 - 5592) + 184LL))(
            v30 - 5592);
        if ((result & 1) == 0) {
          return result;
        }
      }
      if ((snd_fnd_WeakHandle_isValid((__int64*)(v3 - 160)) & 1) != 0) {
        v31 = snd_fnd_WeakHandle_get(v3 - 160);
        result = (*(__int64 (**)(__int64))(*(_QWORD*)(v31 - 5592) + 184LL))(
            v31 - 5592);
        if ((result & 1) == 0) {
          return result;
        }
      }
      if ((snd_fnd_WeakHandle_isValid((__int64*)(v3 - 104)) & 1) != 0) {
        v32 = snd_fnd_WeakHandle_get(v3 - 104);
        result = (*(__int64 (**)(__int64))(*(_QWORD*)(v32 - 5592) + 184LL))(
            v32 - 5592);
        if ((result & 1) == 0) {
          return result;
        }
      }
      v33 = v26 + 56LL * *(unsigned int*)(v3 - 64);
      result = snd_fnd_WeakHandle_isValid((__int64*)(v33 + 32));
      if ((result & 1) != 0) {
        v34 = snd_fnd_WeakHandle_get(v33 + 32);
        (*(void (**)(__int64))(*(_QWORD*)(v34 - 5592) + 208LL))(v34 - 5592);
        v35 = snd_fnd_WeakHandle_get(v33 + 32);
        if (v35 != 0) {
          v36 = v35 - 5592;
        }
        else {
          v36 = 0;
        }
        snd_Fade_Fade_10c830((__int64)v68_.v68, 0x0.0p+0f);
        (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v36 + 40) + 72LL))(
            v36 + 40, v68_.v68, 0x1.0000000000000p+0f);
        result = snd_Fade_Destroy_Fade(v68_.v68);
      }
      *(_BYTE*)(v3 - 80) = 0;
      goto LABEL_92;
    }
    v37 = v26 + 56LL * *(unsigned int*)(v3 - 64);
    result = snd_BGM_getBeat(result, v37 + 32, *(_DWORD*)(v15 + 8));
    if ((result & 0x80000000) == 0) {
      v38 = *(int*)(v3 - 64);
      v39 = *(float*)(v3 - 36) + 0x1.0000000000000p+0f;
      *(float*)(v3 - 36) = v39;
      if (v39 < 0x1.2c00000000000p+9f) {
        v40 = *(_DWORD*)(*(_QWORD*)(v3 - 72) + 4 * v38 + 184);
        switch (v40) {
        case 0:
          if ((_DWORD)result == 3 || *(_DWORD*)(v3 - 52) != 3) {
            return result;
          }
          break;
        case 2:
          v41 = *(_DWORD*)(v3 - 52);
          if ((v41 | 2) != 3) {
            return result;
          }
        LABEL_95:
          if (v41 == (_DWORD)result) {
            return result;
          }
          break;
        case 1:
          v41 = *(_DWORD*)(v3 - 52);
          goto LABEL_95;
        default:
          break;
        }
      }
    }
    if ((*(_BYTE*)(v3 - 32) & 1) == 0) {
      v66_.v66 = 0;
      v66_.v67 = 0x2000;
      v58 = *(int*)(v3 - 64);
      v59 = *(_QWORD*)(*(_QWORD*)(v3 - 72) + 8 * v58 + 64);
      if (v59 != 0) {
        snd_Fade_Fade_10c830((__int64)v68_.v68, 0x0.0p+0f);
        snd_play_ff2d0((__int64)"BGM_Bridge", v59, (__int64)v68_.v68, 0,
                       0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
        GameRoutine_112180((__int64)&v66_.v66, (__int64)&v65);
        snd_Fade_Destroy_Fade(v68_.v68);
      }
      result = snd_fnd_WeakHandle_isValid(&v66_.v66);
      if ((result & 1) != 0) {
        v60 = snd_fnd_WeakHandle_get((__int64)&v66_.v66);
        result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)(v60 - 5592) +
                                                    632LL))(v60 - 5592, 1);
      }
      v61 = *(_QWORD*)(v3 - 72) + 4 * v58;
      v62 = *(_DWORD*)(v61 + 136);
      *(_DWORD*)(v3 - 44) = v62;
      *(_DWORD*)(v3 - 40) = *(_DWORD*)(v61 + 112);
      if (v62 == 0) {
        v63 = snd_fnd_WeakHandle_get(v37 + 32);
        if (v63 != 0) {
          v64 = v63 - 5592;
        }
        else {
          v64 = 0;
        }
        snd_Fade_Fade_10c830(
            (__int64)v68_.v68,
            (float)*(int*)(*(_QWORD*)(v3 - 72) + 4 * v58 + 160));
        (*(void (**)(__int64, _QWORD*, double))(*(_QWORD*)(v64 + 40) + 72LL))(
            v64 + 40, v68_.v68, 0x0.0p+0);
        result = snd_Fade_Destroy_Fade(v68_.v68);
      }
    }
    v56 = 4;
    goto LABEL_113;
  }
  v42 = *(_DWORD*)(v3 - 64);
  v43 = v26 + 56LL * *(unsigned int*)(v3 - 60);
  v44 = snd_fnd_WeakHandle_isValid((__int64*)(v43 + 32));
  if ((v44 & 1) == 0) {
    snd_Fade_Fade_10c830((__int64)v68_.v68, 0x0.0p+0f);
    (*(void (**)(__int64, _QWORD*, _QWORD))(*(_QWORD*)a1 + 48LL))(a1, v68_.v68,
                                                                  0);
    return snd_Fade_Destroy_Fade(v68_.v68);
  }
  v45 = v26 + 56LL * v42;
  if ((*(_BYTE*)(v3 - 32) & 1) == 0) {
    result =
        snd_BGM_getBeat(v44, v45 + 32, *(_DWORD*)(*(_QWORD*)(v3 - 72) + 8LL));
    if ((result & 0x80000000) == 0) {
      if (*(_DWORD*)(v3 - 52) == (_DWORD)result) {
        return result;
      }
      v46 = *(_DWORD*)(v3 - 44) - 1;
      *(_DWORD*)(v3 - 44) = v46;
      if (v46 == 0) {
        v47 = snd_fnd_WeakHandle_get(v45 + 32);
        if (v47 != 0) {
          v48 = v47 - 5592;
        }
        else {
          v48 = 0;
        }
        snd_Fade_Fade_10c830(
            (__int64)v68_.v68,
            (float)*(int*)(*(_QWORD*)(v3 - 72) + 4LL * (int)v42 + 160));
        (*(void (**)(__int64, _QWORD*, double))(*(_QWORD*)(v48 + 40) + 72LL))(
            v48 + 40, v68_.v68, 0x0.0p+0);
        result = snd_Fade_Destroy_Fade(v68_.v68);
      }
      v49 = *(_DWORD*)(v3 - 40);
      v50 = __OFSUB__(v49--, 1);
      *(_DWORD*)(v3 - 40) = v49;
      if (!((v49 < 0) ^ v50 | (v49 == 0))) {
        return result;
      }
    }
  }
  v51 = snd_fnd_WeakHandle_get(v45 + 32);
  if (v51 != 0) {
    v52 = v51 - 5592;
  }
  else {
    v52 = 0;
  }
  snd_Fade_Fade_10c830((__int64)v68_.v68, (float)*(int*)(*(_QWORD*)(v3 - 72) +
                                                         4LL * (int)v42 + 160));
  (*(void (**)(__int64, _QWORD*, double))(*(_QWORD*)(v52 + 40) + 72LL))(
      v52 + 40, v68_.v68, 0x0.0p+0);
  snd_Fade_Destroy_Fade(v68_.v68);
  v53 = snd_fnd_WeakHandle_get(v43 + 32);
  (*(void (**)(__int64))(*(_QWORD*)(v53 - 5592) + 208LL))(v53 - 5592);
  v54 = snd_fnd_WeakHandle_get(v43 + 32);
  if (v54 != 0) {
    v55 = v54 - 5592;
  }
  else {
    v55 = 0;
  }
  snd_Fade_Fade_10c830((__int64)v68_.v68, 0x0.0p+0f);
  (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v55 + 40) + 72LL))(
      v55 + 40, v68_.v68, 0x1.0000000000000p+0f);
  result = snd_Fade_Destroy_Fade(v68_.v68);
  *(_DWORD*)(v3 - 64) = *(_DWORD*)(v3 - 60);
LABEL_92:
  v56 = 2;
LABEL_113:
  *(_DWORD*)(a1 + 36) = v56;
  return result;
}

__int64 BGM_d7320(__int64* a1, __int64 a2, __int64 a3, unsigned int a4, char a5,
                  float a6, float a7)
{

#pragma clang fp contract(off)
  __int64 v7;
  __int64 result;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  const char* v20;
  unsigned __int64 v21;
  char v22;
  __int64 v23;
  unsigned __int64 v24;
  char* v25;
  bool v26;
  unsigned __int64 v27;
  const char* v28;
  unsigned __int64 v29;
  char v30;
  __int64 v31;
  unsigned __int64 v32;
  char* v33;
  _BOOL4 v34;
  unsigned __int64 v35;
  __int64* v36;
  __int64 v37;
  const char* v38;
  unsigned __int64 v39;
  char v40;
  __int64 v41;
  unsigned __int64 v42;
  char* v43;
  _BOOL4 v44;
  __int64 v45;
  __int64* v46;
  __int64 v48;
  struct {
    __int64 v49;
    __int64 v50;
    char* v51;
  } v49_;

  v7 = a1[2];
  if (v7 == a1[1]) {
    goto LABEL_47;
  }
  if ((*(_BYTE*)(v7 - 75) & 1) != 0) {
    return 0;
  }
  v15 = v7 - 416;
  if ((*(_BYTE*)(v7 - 79) & 1) != 0) {
    if ((a5 & 1) != 0) {
      snd_Fade_Fade_10c830((__int64)&v49_.v49, 0x1.f400000000000p+10f);
      snd_BGM_resumePauseAll((__int64)a1, (__int64)&v49_.v49);
      snd_Fade_Destroy_Fade(&v49_.v49);
      if ((*(_BYTE*)(v7 - 78) & 1) == 0) {
      LABEL_8:
        if (*(_BYTE*)(v7 - 77) == 1) {
          snd_Fade_Fade_10c830((__int64)&v49_.v49, 0x1.f400000000000p+10f);
          snd_BGM_resumeMuteAll((__int64)a1, (__int64)&v49_.v49);
          snd_Fade_Destroy_Fade(&v49_.v49);
        }
        if (*(_BYTE*)(v7 - 76) == 1) {
          snd_Fade_Fade_10c830((__int64)&v49_.v49, 0x1.f400000000000p+10f);
          snd_BGM_resumeSystemMuteAll((__int64)a1, (__int64)&v49_.v49);
          snd_Fade_Destroy_Fade(&v49_.v49);
        }
        goto LABEL_48;
      }
    LABEL_7:
      snd_Fade_Fade_10c830((__int64)&v49_.v49, 0x1.f400000000000p+10f);
      snd_BGM_resumeSystemPauseAll((__int64)a1, (__int64)&v49_.v49);
      snd_Fade_Destroy_Fade(&v49_.v49);
      goto LABEL_8;
    }
    goto LABEL_18;
  }
  if ((*(_BYTE*)(v7 - 78) & 1) != 0 || (*(_BYTE*)(v7 - 77) & 1) != 0 ||
      (*(_BYTE*)(v7 - 76) & 1) != 0) {
    if ((a5 & 1) != 0) {
      if (*(_BYTE*)(v7 - 78) == 0) {
        goto LABEL_8;
      }
      goto LABEL_7;
    }
  LABEL_18:
    if (*(_DWORD*)(a2 + 56) != 0) {
      v16 = 0;
      v17 = snd_g_memory_ptr[0];
      while (1) {
        v18 = v15;
        v19 = *(_QWORD*)v15;
        v15 += 56;
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(v19 + 32))(
            (void*)(&v49_.v49), v18);
        v20 = *(const char**)(a2 + 8 * v16);
        v21 = strlen(v20);
        v22 = v49_.v49;
        v23 = (unsigned __int8)v49_.v49 >> 1;
        if ((v49_.v49 & 1) != 0) {
          v23 = v49_.v50;
        }
        if (v21 == v23) {
          break;
        }
        v26 = false;
        if ((v49_.v49 & 1) != 0) {
          goto LABEL_30;
        }
      LABEL_31:
        if (!v26) {
          goto LABEL_47;
        }
        if (++v16 >= (unsigned __int64)*(unsigned int*)(a2 + 56)) {
          return 1;
        }
      }
      v24 = v21;
      if (v21 == -1) {
        goto LABEL_72;
      }
      if ((v49_.v49 & 1) != 0) {
        v25 = v49_.v51;
      }
      else {
        v25 = (char*)&v49_.v49 + 1;
      }
      v26 = memcmp((__int64)v25, (__int64)v20, v24) == 0;
      if ((v22 & 1) == 0) {
        goto LABEL_31;
      }
    LABEL_30:
      (*(void (**)(__int64, char*))(*(_QWORD*)*v17 + 24LL))(*v17, v49_.v51);
      goto LABEL_31;
    }
    return 1;
  }
  LODWORD(v27) = *(_DWORD*)(a2 + 56);
  if ((_DWORD)v27 != 0) {
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
        *(_QWORD*)v15 + 32LL))((void*)(&v49_.v49), v7 - 416);
    v28 = *(const char**)a2;
    v29 = strlen(*(const char**)a2);
    v30 = v49_.v49;
    v31 = (unsigned __int8)v49_.v49 >> 1;
    if ((v49_.v49 & 1) != 0) {
      v31 = v49_.v50;
    }
    if (v29 == v31) {
      v32 = v29;
      if (v29 == -1) {
      LABEL_72:
        snd_a36650();
      }
      if ((v49_.v49 & 1) != 0) {
        v33 = v49_.v51;
      }
      else {
        v33 = (char*)&v49_.v49 + 1;
      }
      v34 = memcmp((__int64)v33, (__int64)v28, v32) == 0;
    }
    else {
      v34 = false;
    }
    if ((v30 & 1) != 0) {
      (*(void (**)(_QWORD, char*))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
          *snd_g_memory_ptr[0], v49_.v51);
      if (!v34) {
        goto LABEL_46;
      }
    }
    else if (!v34) {
    LABEL_46:
      snd_Fade_Fade_10c910((__int64)&v49_.v49, 500);
      (*(void (**)(__int64*, __int64*, _QWORD))(*a1 + 48))(a1, &v49_.v49, 0);
      snd_Fade_Destroy_Fade(&v49_.v49);
    LABEL_47:
      snd_BGM_startEntry(a1, (_QWORD*)a2, a3, a4, -1, a6, a7);
    LABEL_48:
      result = 0;
      *(_BYTE*)(a1[2] - 80) = 1;
      return result;
    }
    LODWORD(v27) = *(_DWORD*)(a2 + 56);
    if ((unsigned int)v27 >= 2) {
      v35 = 1;
      v36 = (__int64*)(v7 - 360);
      do {
        v37 = *v36;
        v36 += 7;
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8))(v37 + 32))(
            (void*)(&v49_.v49));
        v38 = *(const char**)(a2 + 8 * v35);
        v39 = strlen(v38);
        v40 = v49_.v49;
        v41 = (unsigned __int8)v49_.v49 >> 1;
        if ((v49_.v49 & 1) != 0) {
          v41 = v49_.v50;
        }
        if (v39 == v41) {
          v42 = v39;
          if (v39 == -1) {
            goto LABEL_72;
          }
          if ((v49_.v49 & 1) != 0) {
            v43 = v49_.v51;
          }
          else {
            v43 = (char*)&v49_.v49 + 1;
          }
          v44 = memcmp((__int64)v43, (__int64)v38, v42) == 0;
        }
        else {
          v44 = false;
        }
        if ((v40 & 1) != 0) {
          (*(void (**)(_QWORD, char*))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
              *snd_g_memory_ptr[0], v49_.v51);
          if (!v44) {
          LABEL_66:
            snd_BGM_replaceEntry(a1, (_QWORD*)a2, a3, a4, -1, a6, a7);
            goto LABEL_48;
          }
        }
        else if (!v44) {
          goto LABEL_66;
        }
        v27 = *(unsigned int*)(a2 + 56);
        ++v35;
      } while (v35 < v27);
      if ((unsigned int)v27 > 5) {
        return 1;
      }
    }
  }
  v45 = (unsigned int)v27 + 1LL;
  v46 = (__int64*)(v7 + 56LL * (unsigned int)v27 - 416);
  do {
    if ((snd_fnd_WeakHandle_isValid(v46 + 4) & 1) != 0) {
      v48 = snd_fnd_WeakHandle_get((__int64)(v46 + 4));
      snd_Fade_Fade_10c910((__int64)&v49_.v49, 500);
      (*(void (**)(__int64, __int64*, _QWORD, double))(
          *(_QWORD*)(v48 - 5592) + 248LL))(v48 - 5592, &v49_.v49, 0, 0x0.0p+0);
      snd_Fade_Destroy_Fade(&v49_.v49);
    }
    (*(void (**)(__int64*, char*))(*v46 + 16))(v46, &GameData_1a9f09e);
    result = 1;
    v46 += 7;
  } while ((_DWORD)v45++ != 6);
  return result;
}

#pragma GCC visibility pop
