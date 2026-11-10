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

#pragma GCC visibility pop
