#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Crc32List_1212c0(__int64, unsigned __int8*);
__int64 Voice_1447d0(_QWORD*, char);
__int64 Voice_144910(__int64 result);
__int64 snd_120f10(__int64, __int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_fnd_WeakHandle_get(__int64);
__int64 snd_fnd_WeakHandle_isValid(__int64*);
bool snd_(__int64);
bool snd_Param_isEnvelopeEnded(__int64);
bool snd_Voice_hasFeature6(__int64);
bool snd_Voice_hasFeature8(__int64);
extern __int64 snd_g_proxy_ptr[2];
void snd_Fade_Fade_10c830(__int64, float);
__int64 asCScriptEngine_RegisterGlobalFunction_181f90(__int64 a1, char a2);
bool GameRoutine_2606c0(__int64, __int64, __int64, __int64, __int64, __int64,
                        __int64, __int64);
void GameRoutine_1cf860();
__int64 asCScriptEngine_1d1000(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                               __int64* a5, __int64 a6, __int64 a7, __int64 a8);

__int64 asCScriptEngine_RegisterGlobalFunction_181f90(__int64 a1, char a2)
{

#pragma clang fp contract(off)
  _BYTE* v2;
  char v4;
  __int64 result;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  char v10;
  __int64 v11;
  _QWORD* v12;
  int v13;
  __int64 v14;
  _QWORD v15[25];

  if (*(_QWORD*)(a1 + 32) == 0) {
    return 0;
  }
  v2 = (_BYTE*)(a1 + 4096);
  v4 = *(_BYTE*)(a1 + 5919);
  *(_BYTE*)(a1 + 5919) = 1;
  if ((*(_BYTE*)(a1 + 5885) & 1) != 0) {
    return 0;
  }
  if (*(_BYTE*)(a1 + 5895) == 1 ||
      *(_BYTE*)(a1 + 5888) == 1 &&
          (snd_fnd_WeakHandle_isValid((__int64*)(a1 + 5864)) & 1) == 0) {
    goto LABEL_4;
  }
  v7 = snd_fnd_WeakHandle_get(a1 + 5848);
  if ((v2[1820] & 1) != 0) {
    if (v7 != 0) {
      if (v2[1790] == 1 && *(_BYTE*)(v7 + 68) != 1) {
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
            *(_QWORD*)(v7 - 5592) + 112LL))((void*)(v15), v7 - 5592);
        v12 = (_QWORD*)(a1 + 40);
        v11 = *(_QWORD*)(a1 + 40);
        goto LABEL_22;
      }
      v8 = v7;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
          *(_QWORD*)(v7 - 5592) + 96LL))((void*)(v15), v7 - 5592);
      v9 = (_QWORD*)(a1 + 40);
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)(a1 + 40) + 1040LL))(a1 + 40,
                                                                     v15);
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
          *(_QWORD*)(v8 - 5592) + 112LL))((void*)(v15), v8 - 5592);
    }
    else {
      v9 = (_QWORD*)(a1 + 40);
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
          *(_QWORD*)(a1 + 40) + 1048LL))((void*)(v15), a1 + 40);
    }
    v11 = *v9;
    v12 = v9;
  LABEL_22:
    (*(void (**)(_QWORD*, _QWORD*))(v11 + 1072))(v12, v15);
    snd_120f10(*(_QWORD*)(a1 + 32), a1);
  LABEL_23:
    v10 = a2;
    goto LABEL_24;
  }
  v10 = a2;
  if (v7 != 0) {
    if (v2[1790] != 1 || (v2[1791] & 1) != 0 || (*(_BYTE*)(v7 + 68) & 1) != 0) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
          *(_QWORD*)(v7 - 5592) + 96LL))((void*)(v15), v7 - 5592);
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)(a1 + 40) + 1040LL))(a1 + 40,
                                                                     v15);
    }
    else {
      (*(void (**)(__int64, __int64))(*(_QWORD*)(v7 - 5592) + 80LL))(v7 - 5592,
                                                                     a1 + 2864);
    }
    goto LABEL_23;
  }
LABEL_24:
  if (((v10 & 1) != 0 || (v4 & 1) == 0) &&
      (*(float (**)(__int64))(*(_QWORD*)(a1 + 40) + 328LL))(a1 + 40) <=
          0x0.0p+0f) {
    if (snd_Voice_hasFeature6(a1) && (Voice_1447d0((_QWORD*)a1, 1) & 1) != 0) {
      return 0;
    }
    if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 728LL))(a1) & 1) == 0) {
      goto LABEL_4;
    }
  }
  v13 = *(_DWORD*)(a1 + 5792);
  if (v13 != 2) {
    if (v13 != 1) {
      goto LABEL_36;
    }
    (*(void (**)(__int64))(*(_QWORD*)a1 + 128LL))(a1);
    *(_DWORD*)(a1 + 5792) = 2;
  }
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 144LL))(a1) & 1) != 0) {
    *(_DWORD*)(a1 + 5792) = 3;
    goto LABEL_38;
  }
  v13 = *(_DWORD*)(a1 + 5792);
LABEL_36:
  if (v13 != 4) {
    if (v13 != 3) {
      goto LABEL_42;
    }
  LABEL_38:
    (*(void (**)(__int64))(*(_QWORD*)a1 + 168LL))(a1);
    *(_DWORD*)(a1 + 5792) = 4;
  }
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 184LL))(a1) & 1) != 0 &&
      ((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 216LL))(a1) & 1) == 0) {
    *(_DWORD*)(a1 + 5792) = 5;
    if ((*(float (**)(__int64))(*(_QWORD*)(a1 + 40) + 328LL))(a1 + 40) >
        0x0.0p+0f) {
      goto LABEL_44;
    }
    goto LABEL_56;
  }
  v13 = *(_DWORD*)(a1 + 5792);
LABEL_42:
  if (v13 != 5 || (*(float (**)(__int64))(*(_QWORD*)(a1 + 40) + 328LL))(
                      a1 + 40) > 0x0.0p+0f) {
  LABEL_44:
    (*(void (**)(__int64))(*(_QWORD*)a1 + 784LL))(a1);
    result = 1;
    if ((a2 & 1) != 0) {
      return result;
    }
    goto LABEL_45;
  }
LABEL_56:
  if (snd_Voice_hasFeature6(a1) && (Voice_1447d0((_QWORD*)a1, 1) & 1) != 0) {
    return 0;
  }
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 728LL))(a1) & 1) == 0) {
    goto LABEL_4;
  }
  if (!snd_Voice_hasFeature8(a1)) {
    Crc32List_1212c0(*(_QWORD*)(a1 + 32), (unsigned __int8*)a1);
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)snd_g_proxy_ptr[0] + 440LL))(
      *(_QWORD*)snd_g_proxy_ptr[0], a1);
  (*(void (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  *(_DWORD*)(a1 + 5792) = 6;
  (*(void (**)(__int64))(*(_QWORD*)a1 + 784LL))(a1);
  result = 1;
  if ((a2 & 1) == 0) {
  LABEL_45:
    if (*(_DWORD*)(a1 + 5792) == 6) {
      (*(void (**)(_QWORD, __int64))(**(_QWORD**)snd_g_proxy_ptr[0] + 448LL))(
          *(_QWORD*)snd_g_proxy_ptr[0], a1);
      v14 = *(_QWORD*)(a1 + 5648);
      if (*(float*)(v14 + 256) < 0x0.0p+0f) {
        goto LABEL_49;
      }
      if (snd_(a1 + 40)) {
        v14 = *(_QWORD*)(a1 + 5648);
      LABEL_49:
        if (*(_DWORD*)(v14 + 120) != 0 && *(_DWORD*)(v14 + 124) != 0 &&
                !snd_(a1 + 40) ||
            !snd_Param_isEnvelopeEnded(a1 + 40) &&
                (snd_fnd_WeakHandle_isValid((__int64*)(a1 + 6072)) & 1) != 0) {
        LABEL_64:
          if (!snd_Voice_hasFeature6(a1) || snd_(a1 + 40) ||
              (Voice_1447d0((_QWORD*)a1, 1) & 1) == 0) {
            if (v2[1904] != 1 ||
                (snd_fnd_WeakHandle_isValid((__int64*)(a1 + 5984)) & 1) != 0) {
              return 1;
            }
            v2[1904] = 0;
            snd_Fade_Fade_10c830((__int64)v15, 0x0.0p+0f);
            (*(void (**)(__int64, _QWORD*, _QWORD, double))(
                *(_QWORD*)a1 + 248LL))(a1, v15, 0, 0x0.0p+0);
            snd_Fade_Destroy_Fade(v15);
          }
          return 0;
        }
        goto LABEL_4;
      }
      if (v2[1801] != 1) {
        goto LABEL_64;
      }
    LABEL_4:
      Voice_144910(a1);
      return 0;
    }
  }
  return result;
}

__int64 asCScriptEngine_1d1000(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                               __int64* a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 result;
  char v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  char v20;
  __int64 v21;

  if (a5 == nullptr) {
    return 4294967291LL;
  }
  result = 4294967291LL;
  *a5 = 0;
  if (a3 != 0 && a4 != 0) {
    if (a2 != 0) {
      if (a3 == a4) {
        *a5 = a2;
        return 0;
      }
      if (*(_DWORD*)(a3 + 168) != 0) {
        v13 = a6;
        v14 = 0;
        v15 = 0;
        if ((a6 & 1) != 0) {
          while (1) {
            v16 = *(_QWORD*)(a1[241] +
                             8LL * *(unsigned int*)(*(_QWORD*)(a3 + 160) +
                                                    4 * v14));
            if (GameRoutine_2606c0(v16 + 72, (__int64)"opImplCast", a3, a4,
                                   (__int64)a5, a6, a7, a8)) {
              v15 = v16;
              if (*(_QWORD*)(v16 + 104) == a4) {
                break;
              }
            }
            if (++v14 >= (unsigned __int64)*(unsigned int*)(a3 + 168)) {
            LABEL_21:
              LOBYTE(a6) = v13;
              if (v15 == 0) {
                goto LABEL_23;
              }
              v18 = (*(__int64 (**)(_QWORD*))(*a1 + 544LL))(a1);
              (*(void (**)(__int64, __int64))(*(_QWORD*)v18 + 24LL))(v18, v15);
              (*(void (**)(__int64, __int64))(*(_QWORD*)v18 + 96LL))(v18, a2);
              v19 = (*(__int64 (**)(__int64))(*(_QWORD*)a4 + 104LL))(a4);
              (*(void (**)(__int64, _QWORD, __int64*, _QWORD))(
                  *(_QWORD*)v18 + 168LL))(v18, 0, a5, v19 | 0x40000000u);
              (*(void (**)(__int64))(*(_QWORD*)v18 + 40LL))(v18);
              (*(void (**)(_QWORD*, __int64))(*a1 + 552LL))(a1, v18);
              return 0;
            }
          }
        }
        else {
          while (1) {
            v16 = *(_QWORD*)(a1[241] +
                             8LL * *(unsigned int*)(*(_QWORD*)(a3 + 160) +
                                                    4 * v14));
            if (GameRoutine_2606c0(v16 + 72, (__int64)"opImplCast", a3, a4,
                                   (__int64)a5, a6, a7, a8) ||
                GameRoutine_2606c0(v16 + 72, (__int64)"opCast", a3, a4,
                                   (__int64)a5, a6, a7, a8)) {
              v15 = v16;
              if (*(_QWORD*)(v16 + 104) == a4) {
                break;
              }
            }
            if (++v14 >= (unsigned __int64)*(unsigned int*)(a3 + 168)) {
              goto LABEL_21;
            }
          }
        }
        v17 = ((__int64 (*)(_QWORD*, __int64, _QWORD))GameRoutine_1cf860)(
            a1, a2, *(unsigned int*)(v16 + 272));
        *a5 = v17;
        if (*(_BYTE*)(*(_QWORD*)(v16 + 344) + 64LL) == 1) {
          (*(void (**)(_QWORD*, __int64, __int64))(*a1 + 520LL))(a1, v17, a4);
        }
      }
      else {
      LABEL_23:
        v20 = a6;
        if (((*(__int64 (**)(__int64))(*(_QWORD*)a3 + 88LL))(a3) & 0x200000) !=
                0 &&
            ((*(__int64 (**)(__int64))(*(_QWORD*)a4 + 88LL))(a4) & 0x200000) !=
                0) {
          if (((*(__int64 (**)(__int64, __int64))(*(_QWORD*)a3 + 72LL))(a3,
                                                                        a4) &
               1) != 0 ||
              ((*(__int64 (**)(__int64, __int64))(*(_QWORD*)a3 + 152LL))(a3,
                                                                         a4) &
               1) != 0 ||
              ((*(__int64 (**)(__int64, __int64))(*(_QWORD*)a3 + 80LL))(a3,
                                                                        a4) &
               1) != 0 ||
              ((*(__int64 (**)(__int64, __int64))(*(_QWORD*)a3 + 160LL))(a3,
                                                                         a4) &
               1) != 0 ||
              (v20 & 1) == 0 &&
                  (((*(__int64 (**)(__int64, __int64))(*(_QWORD*)a4 + 152LL))(
                        a4, a3) &
                    1) != 0 ||
                   ((*(__int64 (**)(__int64, __int64))(*(_QWORD*)a4 + 72LL))(
                        a4, a3) &
                    1) != 0 ||
                   (v21 = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 32LL))(a2),
                    ((*(__int64 (**)(__int64, __int64))(*(_QWORD*)v21 + 72LL))(
                         v21, a4) &
                     1) != 0) ||
                   ((*(__int64 (**)(__int64, __int64))(*(_QWORD*)v21 + 152LL))(
                        v21, a4) &
                    1) != 0)) {
            *a5 = a2;
            (**(void (***)(__int64))a2)(a2);
          }
        }
      }
    }
    return 0;
  }
  return result;
}

#pragma GCC visibility pop
