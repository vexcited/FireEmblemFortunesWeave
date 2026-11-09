#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ConstructSet(_QWORD);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_17c140(_QWORD*);
__int64 GameRoutine_17edc0(_QWORD);
__int64 GameRoutine_180060(_QWORD);
__int64 GameRoutine_186740(__int64, int, int*, _DWORD*);
__int64 WavePlayer_184430(_QWORD);
__int64 WaveReader_188ee0(__int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_codec_DecodeAdpcm(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_codec_GetAdpcmSampleCount(_QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Fade_10c830(_QWORD);
__int64 snd_WavePlayer_registry(_QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 snd_fnd_WeakHandle_reset(_QWORD);
__int64 snd_fnd_WeakHandle_set(_QWORD, _QWORD);
extern _UNKNOWN* GameData_2134c18;
extern __int16 GameData_2199b90;
extern __int16* GameData_2134be8;
extern __int64 snd_g_memory;
extern __int64 snd_g_proxy_ptr[2];
extern __int64* GameData_2134c10;
extern __int64* GameData_2134c20;
extern __int64* snd_g_memory_ptr[2];
float snd_Fade_getTime(_QWORD);
void WavePlayer_186800(__int64, __int64, __int64*);
void WavePlayer_188660(__int64, _WORD*, _WORD*);
void __attribute__((noreturn)) GameRoutine_180bf0(void);
__int64 WaveMultiStreamPlayer_Destructor(__int64** a1);
void WaveMultiStreamPlayer_Unknown142(__int64 a1);
__int64 WaveMultiStreamPlayer_Unknown155(__int64 a1, __int64 a2, char a3,
                                         char a4, char a5);
__int64 WaveMultiStreamPlayer_17fce0(__int64* a1, __int64 a2);
__int64 WaveMultiStreamPlayer_1804a0(__int64 a1);
__int64 WaveMultiStreamPlayer_180660(__int64 a1, int a2, unsigned int a3);
__int64 WaveMultiStreamPlayer_180720(__int64 a1, int a2, int a3, __int64 a4,
                                     __int64 a5, unsigned int a6);
_QWORD* WaveMultiStreamPlayer_180a30(_QWORD* result, int a2, __int64 a3);
__int64 WaveMultiStreamPlayer_180a90(__int64 a1, int a2);
_QWORD* WaveMultiStreamPlayer_180ae0(_QWORD* result, int a2, unsigned int a3,
                                     unsigned int a4, __int64 a5);
__int64 WaveMultiStreamPlayer_18a4e0(__int64 a1, int a2);
__int64 WaveMultiStreamPlayer_18a920(__int64 a1);
__int64 WaveMultiStreamPlayer_Unknown201(__int64 a1);
__int64 WaveMultiStreamPlayer_Unknown202(__int64 a1);

__int64 WaveMultiStreamPlayer_180950(__int64 a1)
{
  return *(unsigned __int8*)(a1 + 11504);
}

__int64 WaveMultiStreamPlayer_Destructor(__int64** a1)
{
  __int64* v2;
  __int64* v3;

  v2 = GameData_2134c10 + 2;
  a1[694] = GameData_2134c10 + 207;
  *a1 = v2;
  nn_os_FinalizeMutex(a1 + 1439);
  v3 = a1[1395];
  if (v3 != nullptr) {
    a1[1396] = v3;
    (*(void (**)(__int64))(*(_QWORD*)snd_g_memory + 24LL))(snd_g_memory);
  }
  return ConstructSet(a1);
}

void WaveMultiStreamPlayer_Unknown142(__int64 a1)
{
  int v1;
  atomic_uchar* v3;
  __int64* v4;
  _BYTE* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  bool v10;
  int v11;
  int v12;
  __int64* v13;

  v1 = *(_DWORD*)(a1 + 11112);
  v3 = (atomic_uchar*)GameData_2134c18;
  v4 = GameData_2134c20;
  v5 = (_BYTE*)(a1 + 11117);
  do {
    if (v1 > 6) {
      if (v1 == 7) {
        (*(void (**)(__int64))(*(_QWORD*)a1 + 104LL))(a1);
        if (*v5 == 1) {
          goto LABEL_31;
        }
        if (v5[4] != 1) {
          goto LABEL_3;
        }
        v5[4] = 0;
      LABEL_35:
        v12 = 5;
      LABEL_36:
        *(_DWORD*)(a1 + 11112) = v12;
        goto LABEL_3;
      }
      if (v1 == 9) {
        v6 = *(_QWORD*)(a1 + 11160);
        if (*(_QWORD*)(a1 + 11168) == v6) {
        LABEL_32:
          v5[5] = 1;
        }
        else {
          v7 = 0;
          while (1) {
            if (snd_fnd_WeakHandle_get(v6 + 16 * v7) != 0) {
              v8 = snd_fnd_WeakHandle_get(v6 + 16 * v7);
              v9 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)(v8 - 5552) +
                                                       1112LL))(v8 - 5552);
              if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0) {
                v13 = v9;
                v11 = __cxa_guard_acquire(v3);
                v9 = v13;
                if (v11 != 0) {
                  *v4 = snd_WavePlayer_registry(v13);
                  __cxa_guard_release(v3);
                  v9 = v13;
                }
              }
              if (v9 == v4) {
                goto LABEL_16;
              }
              do {
                v9 = (__int64*)*v9;
                v10 = v9 == v4 || v9 == nullptr;
              } while (!v10);
              if (v9 != nullptr) {
              LABEL_16:
                if (snd_fnd_WeakHandle_get(v6 + 16 * v7) != 0) {
                  break;
                }
              }
            }
            snd_fnd_WeakHandle_reset(*(_QWORD*)(a1 + 11160) + 16 * v7);
            v6 = *(_QWORD*)(a1 + 11160);
            if (++v7 >=
                (unsigned __int64)((*(_QWORD*)(a1 + 11168) - v6) >> 4)) {
              goto LABEL_32;
            }
          }
        }
      }
    }
    else {
      if (v1 == 5) {
        WavePlayer_184430(a1);
        goto LABEL_3;
      }
      if (v1 == 6) {
        if ((*(float (**)(__int64))(*(_QWORD*)a1 + 80LL))(a1) < 0.001) {
          *(_BYTE*)(a1 + 5608) = 1;
        }
        if (*v5 != 1) {
          if (v5[3] != 1) {
            goto LABEL_3;
          }
          v5[3] = 0;
          *(_BYTE*)(a1 + 5608) = 0;
          goto LABEL_35;
        }
      LABEL_31:
        *v5 = 0;
        v12 = 9;
        goto LABEL_36;
      }
    }
  LABEL_3:
    v10 = v1 == *(_DWORD*)(a1 + 11112);
    v1 = *(_DWORD*)(a1 + 11112);
  } while (!v10);
}

__int64 WaveMultiStreamPlayer_Unknown155(__int64 a1, __int64 a2, char a3,
                                         char a4, char a5)
{
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v18;
  int v19;

  nn_os_LockMutex(GameData_2134be8);
  v10 = *(_QWORD*)(a1 + 11160);
  if (*(_QWORD*)(a1 + 11168) == v10) {
  LABEL_10:
    v16 = GameRoutine_17c140(*(_QWORD**)(a1 + 5568));
    if (v16 != 0) {
      v12 = v16;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v16 + 1208LL))(v16, 1);
      (*(void (**)(unsigned __int64, __int64))(*(_QWORD*)v12 + 1216LL))(v12, 1);
      (*(void (**)(unsigned __int64, __int64, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)v12 + 1240LL))(v12, a2, a3 & 1, a4 & 1, a5 & 1);
      v18 = 0;
      v19 = 0x2000;
      snd_fnd_WeakHandle_set(&v18, v12 + 5552);
      WaveMultiStreamPlayer_17fce0(a1 + 11160, &v18);
      LODWORD(v12) =
          ((*(_QWORD*)(a1 + 11168) - *(_QWORD*)(a1 + 11160)) >> 4) - 1;
    }
    else {
      LODWORD(v12) = -1;
    }
  }
  else {
    v11 = 0;
    v12 = 0;
    while (1) {
      if ((snd_fnd_WeakHandle_isValid(v10 + v11) & 1) == 0) {
        v13 = GameRoutine_17c140(*(_QWORD**)(a1 + 5568));
        v14 = v13;
        v18 = 0;
        v19 = 0x2000;
        v15 = v13 != 0 ? v13 + 5552 : 0LL;
        snd_fnd_WeakHandle_set(&v18, v15);
        GameRoutine_112180(*(_QWORD*)(a1 + 11160) + v11, &v18);
        if (v14 != 0) {
          break;
        }
      }
      v10 = *(_QWORD*)(a1 + 11160);
      ++v12;
      v11 += 16;
      if (v12 >= (*(_QWORD*)(a1 + 11168) - v10) >> 4) {
        goto LABEL_10;
      }
    }
    (*(void (**)(__int64, __int64))(*(_QWORD*)v14 + 1208LL))(v14, 1);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v14 + 1216LL))(v14, 1);
    (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)v14 + 1240LL))(v14, a2, a3 & 1, a4 & 1, a5 & 1);
  }
  nn_os_UnlockMutex(&GameData_2199b90);
  return (unsigned int)v12;
}

__int64 WaveMultiStreamPlayer_17fce0(__int64* a1, __int64 a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v3 = a1[1];
  v2 = a1[2];
  if (v3 >= v2) {
    v6 = v3 - *a1;
    v7 = (v6 >> 4) + 1;
    if (v7 >> 60 != 0) {
      GameRoutine_180bf0();
    }
    v8 = v2 - *a1;
    v10 = snd_g_memory_ptr[0];
    v11 = v8 >> 3;
    if (v8 >> 3 <= v7) {
      v11 = (v6 >> 4) + 1;
    }
    if ((unsigned __int64)v8 >= 0x7FFFFFFFFFFFFFF0LL) {
      v12 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v12 = v11;
    }
    v13 = (*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 16 * v12,
                                                 32);
    v14 = v13 + v6;
    v15 = v13 + 16 * v12;
    *(_QWORD*)v14 = 0;
    *(_DWORD*)(v14 + 8) = 0x2000;
    GameRoutine_112180(v14, a2);
    v16 = *a1;
    v17 = a1[1];
    v5 = v14 + 16;
    v18 = *a1 - v17;
    v19 = v14 + v18;
    if (v17 != *a1) {
      v20 = v14 + v18;
      do {
        *(_QWORD*)v20 = 0;
        *(_DWORD*)(v20 + 8) = 0x2000;
        GameRoutine_112180(v20, v16);
        v16 += 16;
        v20 += 16;
      } while (v16 != v17);
      v16 = *a1;
    }
    *a1 = v19;
    a1[1] = v5;
    a1[2] = v15;
    if (v16 != 0) {
      (*(void (**)(__int64, __int64))(*(_QWORD*)*v10 + 24LL))(*v10, v16);
    }
  }
  else {
    *(_QWORD*)v3 = 0;
    *(_DWORD*)(v3 + 8) = 0x2000;
    GameRoutine_112180(v3, a2);
    v5 = v3 + 16;
  }
  a1[1] = v5;
  return v5 - 16;
}

__int64 WaveMultiStreamPlayer_1804a0(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(a1 + 11160);
  if (*(_QWORD*)(a1 + 11168) == v1) {
    return 0xFFFFFFFFLL;
  }
  v3 = 0;
  v4 = 0;
  while (1) {
    v5 = GameRoutine_180060(v1 + v3);
    if (v5 != 0) {
      v6 = v5;
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 1272LL))(v5) & 1) != 0 &&
          ((*(__int64 (**)(__int64))(*(_QWORD*)v6 + 1280LL))(v6) & 1) == 0) {
        break;
      }
    }
    v1 = *(_QWORD*)(a1 + 11160);
    ++v4;
    v3 += 16;
    if (v4 >= (*(_QWORD*)(a1 + 11168) - v1) >> 4) {
      return 0xFFFFFFFFLL;
    }
  }
  return (unsigned int)v4;
}

__int64 WaveMultiStreamPlayer_180660(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3;
  __int64 v5;

  v3 = *(_QWORD*)(a1 + 11160);
  if (a2 < (unsigned __int64)((*(_QWORD*)(a1 + 11168) - v3) >> 4) &&
      (v5 = GameRoutine_180060(v3 + 16LL * a2)) != 0) {
    return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v5 + 1424LL))(v5, a3);
  }
  else {
    return 0xFFFFFFFFLL;
  }
}

__int64 WaveMultiStreamPlayer_180720(__int64 a1, int a2, int a3, __int64 a4,
                                     __int64 a5, unsigned int a6)
{
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  __int64 v23;

  nn_os_LockMutex(a1 + 11512);
  v12 = GameRoutine_17edc0(*(_QWORD*)(a1 + 11160) + 16LL * a2);
  if (v12 == 0) {
    goto LABEL_31;
  }
  if (*(_BYTE*)(a1 + 11504) == 1) {
    if (*(_DWORD*)(a1 + 11280) == 1) {
      *(_DWORD*)(a1 + 11280) = 2;
    }
    *(_BYTE*)(a1 + 11504) = 0;
  }
  v13 = *(_QWORD*)(a1 + 11160);
  if (*(_QWORD*)(a1 + 11168) == v13) {
    goto LABEL_31;
  }
  v23 = a4;
  v14 = v12;
  v15 = 0;
  v16 = 0;
  while (1) {
    v17 = GameRoutine_17edc0(v13 + v15);
    if (v17 != 0) {
      v18 = v17;
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v17 + 1272LL))(v17) & 1) != 0 &&
          ((*(__int64 (**)(__int64))(*(_QWORD*)v18 + 1280LL))(v18) & 1) == 0) {
        break;
      }
    }
    v13 = *(_QWORD*)(a1 + 11160);
    ++v16;
    v15 += 16;
    if (v16 >= (*(_QWORD*)(a1 + 11168) - v13) >> 4) {
      goto LABEL_31;
    }
  }
  if (a2 == v16) {
    goto LABEL_31;
  }
  if (*(_DWORD*)(a1 + 11280) == 2) {
    v19 = 11280;
  }
  else if (*(_DWORD*)(a1 + 11308) == 2) {
    v19 = 11308;
  }
  else if (*(_DWORD*)(a1 + 11336) == 2) {
    v19 = 11336;
  }
  else if (*(_DWORD*)(a1 + 11364) == 2) {
    v19 = 11364;
  }
  else if (*(_DWORD*)(a1 + 11392) == 2) {
    v19 = 11392;
  }
  else if (*(_DWORD*)(a1 + 11420) == 2) {
    v19 = 11420;
  }
  else if (*(_DWORD*)(a1 + 11448) == 2) {
    v19 = 11448;
  }
  else {
    if (*(_DWORD*)(a1 + 11476) != 2) {
    LABEL_31:
      v21 = 0;
      goto LABEL_32;
    }
    v19 = 11476;
  }
  v20 = a1 + v19;
  if (((*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v14 + 1368LL))(v14, a6) &
       1) == 0) {
    goto LABEL_31;
  }
  v21 = 1;
  *(_DWORD*)(v20 + 8) = a2;
  *(_DWORD*)(v20 + 12) = a3;
  *(_DWORD*)v20 = 1;
  *(_DWORD*)(v20 + 4) = v16;
  *(float*)(v20 + 20) = snd_Fade_getTime(a5);
  *(float*)(v20 + 16) = snd_Fade_getTime(v23);
  *(_DWORD*)(v20 + 24) =
      (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 1472LL))(v18);
  *(_BYTE*)(a1 + 11504) = 1;

LABEL_32:
  nn_os_UnlockMutex(a1 + 11512);
  return v21;
}

_QWORD* WaveMultiStreamPlayer_180a30(_QWORD* result, int a2, __int64 a3)
{
  __int64 v3;

  v3 = result[1395];
  if (a2 < (unsigned __int64)((result[1396] - v3) >> 4)) {
    result = (_QWORD*)GameRoutine_17edc0(v3 + 16LL * a2);
    if (result != nullptr) {
      return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + 1488LL))(
          result, a3);
    }
  }
  return result;
}

__int64 WaveMultiStreamPlayer_180a90(__int64 a1, int a2)
{
  __int64 v2;
  __int64 v3;

  v2 = *(_QWORD*)(a1 + 11160);
  if (a2 < (unsigned __int64)((*(_QWORD*)(a1 + 11168) - v2) >> 4) &&
      (v3 = GameRoutine_180060(v2 + 16LL * a2)) != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 1496LL))(v3);
  }
  else {
    return 0;
  }
}

_QWORD* WaveMultiStreamPlayer_180ae0(_QWORD* result, int a2, unsigned int a3,
                                     unsigned int a4, __int64 a5)
{
  __int64 v5;

  v5 = result[1395];
  if (a2 < (unsigned __int64)((result[1396] - v5) >> 4)) {
    result = (_QWORD*)GameRoutine_17edc0(v5 + 16LL * a2);
    if (result != nullptr) {
      return (_QWORD*)(*(__int64 (**)(_QWORD*, _QWORD, _QWORD, __int64))(
          *result + 1232LL))(result, a3, a4, a5);
    }
  }
  return result;
}

__int64 WaveMultiStreamPlayer_18a4e0(__int64 a1, int a2)
{
  int i;
  int v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  unsigned int v11;
  int v12;
  int v13;
  int v14;
  int v16;
  int v17;

  nn_os_LockMutex(a1 + 11128);
  if ((*(_DWORD*)(a1 + 11112) & 0xFFFFFFFB) != 0) {
    (*(void (**)(_QWORD, const char*))(**(_QWORD**)snd_g_proxy_ptr[0] + 392LL))(
        *(_QWORD*)snd_g_proxy_ptr[0], "#SoundLibrary : WaveStreamPlayer can "
                                      "not seeking !! (state error !!)\n");
    v11 = 0;
  }
  else {
    for (i = *(_DWORD*)(a1 + 10744) +
             *(_DWORD*)(a1 + 10716) * *(_DWORD*)(a1 + 10736);
         a2 > i; a2 += *(_DWORD*)(a1 + 10732) - i) {
      ;
    }
    GameRoutine_186740(a1, a2, &v17, &v16);
    v5 = v16;
    v6 = v17;
    v7 = *(_QWORD*)(a1 + 5664);
    *(_DWORD*)(a1 + 10776) = 0;
    *(_DWORD*)(a1 + 10768) = v6;
    *(_DWORD*)(a1 + 10772) = v6;
    *(_DWORD*)(a1 + 10780) = v5;
    (*(void (**)(__int64))(*(_QWORD*)v7 + 104LL))(v7);
    if (*(_DWORD*)(a1 + 10700) == 2) {
      if (*(int*)(a1 + 10696) >= 1) {
        v8 = 0;
        v9 = a1 + 10848;
        v10 = (__int64*)(a1 + 10352);
        do {
          WavePlayer_186800(a1, v9, v10);
          ++v8;
          v10 = (__int64*)((char*)v10 + 44);
          v9 += 38;
        } while (v8 < *(int*)(a1 + 10696));
      }
    }
    else if ((WaveReader_188ee0(*(_QWORD*)(a1 + 5664)) & 1) != 0) {
      (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 5664) + 112LL))(
          *(_QWORD*)(a1 + 5664), *(unsigned int*)(a1 + 10772));
    }
    v12 = *(_DWORD*)(a1 + 10716);
    v13 = *(_DWORD*)(a1 + 10768);
    v11 = 1;
    v14 = (int)*(float*)(a1 + 10776);
    *(_QWORD*)(a1 + 5584) = 0;
    *(_DWORD*)(a1 + 5596) = 0;
    *(_QWORD*)(a1 + 5600) = 0;
    *(_DWORD*)(a1 + 5592) = v14 + v13 * v12 + *(_DWORD*)(a1 + 10780);
    *(_DWORD*)(a1 + 11112) = 2;
  }
  nn_os_UnlockMutex(a1 + 11128);
  return v11;
}

__int64 WaveMultiStreamPlayer_18a920(__int64 a1)
{
  char v2;
  __int64 v3;
  int v4;
  __int64 v5;
  unsigned int v6;

  v2 = WaveReader_188ee0(*(_QWORD*)(a1 + 5664));
  nn_os_LockMutex(a1 + 11128);
  v3 = *(unsigned int*)(a1 + 10772);
  v4 = *(_DWORD*)(a1 + 10736);
  if ((v2 & 1) == 0) {
    if ((int)v3 > v4) {
      if (*(_BYTE*)(a1 + 10728) != 1) {
        return nn_os_UnlockMutex(a1 + 11128);
      }
      LODWORD(v3) = *(_DWORD*)(a1 + 10748);
      *(_DWORD*)(a1 + 10772) = v3;
    }
    v6 = *(_DWORD*)(a1 + 10696) * *(_DWORD*)(a1 + 10720);
    (*(void (**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 5664) + 64LL))(
        *(_QWORD*)(a1 + 5664), *(_DWORD*)(a1 + 10708) + v6 * (unsigned int)v3,
        0);
    if (((*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 5664) + 88LL))(
             *(_QWORD*)(a1 + 5664), v6) &
         1) == 0) {
      return nn_os_UnlockMutex(a1 + 11128);
    }
    goto LABEL_12;
  }
  if ((int)v3 <= v4) {
  LABEL_5:
    v5 = (unsigned int)(*(_DWORD*)(a1 + 10696) * *(_DWORD*)(a1 + 10720));
    if (((*(__int64 (**)(_QWORD, __int64, __int64, _QWORD))(
             **(_QWORD**)(a1 + 5664) + 120LL))(
             *(_QWORD*)(a1 + 5664), v3, v5,
             (unsigned int)(*(_DWORD*)(a1 + 10708) + v5 * v3)) &
         1) == 0) {
      return nn_os_UnlockMutex(a1 + 11128);
    }
  LABEL_12:
    ++*(_DWORD*)(a1 + 10772);
    return nn_os_UnlockMutex(a1 + 11128);
  }
  if (*(_BYTE*)(a1 + 10728) == 1) {
    v3 = *(unsigned int*)(a1 + 10748);
    *(_DWORD*)(a1 + 10772) = v3;
    goto LABEL_5;
  }
  return nn_os_UnlockMutex(a1 + 11128);
}

__int64 WaveMultiStreamPlayer_Unknown201(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  int v6;
  int v7;
  __int64 v8;
  _WORD* v9;
  _WORD* v10;
  signed int v11;
  int v12;
  int v13;
  int v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  unsigned int AdpcmSampleCountEm;
  int v26;
  int v27;
  int v28;
  int v29;
  _BYTE v31[200];

  nn_os_LockMutex(a1 + 11128);
  v5 = *(_DWORD*)(a1 + 10768);
  v6 = *(_DWORD*)(a1 + 10736);
  if (v5 > v6) {
    if (*(_BYTE*)(a1 + 10728) != 1) {
      v22 = *(_DWORD*)(a1 + 10716);
      v23 = *(_QWORD*)(a1 + 5696);
      *(_DWORD*)(a1 + 10776) = 0;
      *(_DWORD*)(a1 + 10784) = v22;
      memset(v23, 0, 0x10000, v2, v3, v4);
      if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 5664) + 176LL))(
               *(_QWORD*)(a1 + 5664)) &
           1) == 0) {
        snd_Fade_Fade_10c830(v31);
        (*(void (**)(__int64, _BYTE*))(*(_QWORD*)a1 + 1312LL))(a1, v31);
        snd_Fade_Destroy_Fade(v31);
      }
      return nn_os_UnlockMutex(a1 + 11128);
    }
    v5 = *(_DWORD*)(a1 + 10748);
    v7 = *(_DWORD*)(a1 + 10716);
    *(_DWORD*)(a1 + 5600) = 0;
    *(_DWORD*)(a1 + 10768) = v5;
    *(_DWORD*)(a1 + 5592) = v7 * v5;
    if (*(_DWORD*)(a1 + 10700) == 2 && *(int*)(a1 + 10696) >= 1) {
      v8 = 0;
      v9 = (_WORD*)(a1 + 10848);
      v10 = (_WORD*)(a1 + 10352);
      do {
        WavePlayer_188660(a1, v9, v10);
        ++v8;
        v10 += 22;
        v9 += 19;
      } while (v8 < *(int*)(a1 + 10696));
      v5 = *(_DWORD*)(a1 + 10768);
      v6 = *(_DWORD*)(a1 + 10736);
    }
    ++*(_DWORD*)(a1 + 5604);
  }
  v11 = *(_DWORD*)(a1 + 10720);
  v12 = *(_DWORD*)(a1 + 10696);
  v13 = *(_DWORD*)(a1 + 10708);
  v14 = v12 * v11;
  *(_DWORD*)(a1 + 10784) = *(_DWORD*)(a1 + 10716);
  if (v5 >= v6) {
    *(_DWORD*)(a1 + 10784) = *(_DWORD*)(a1 + 10744);
    v11 = (*(_DWORD*)(a1 + 10740) + 7) & 0xFFFFFFF8;
    v15 = v11 * v12;
    if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 5664) + 96LL))(
             *(_QWORD*)(a1 + 5664)) &
         1) == 0) {
    LABEL_11:
      v19 = *(_DWORD*)(a1 + 10716);
      v20 = *(_QWORD*)(a1 + 5696);
      *(_QWORD*)(a1 + 10776) = 0;
      *(_DWORD*)(a1 + 10784) = v19;
      memset(v20, 0, 0x10000, v16, v17, v18);
      if ((*(unsigned int (**)(_QWORD))(**(_QWORD**)(a1 + 5664) + 136LL))(
              *(_QWORD*)(a1 + 5664)) > 6) {
        return nn_os_UnlockMutex(a1 + 11128);
      }
      goto LABEL_21;
    }
  }
  else {
    v15 = v12 * v11;
    if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 5664) + 96LL))(
             *(_QWORD*)(a1 + 5664)) &
         1) == 0) {
      goto LABEL_11;
    }
  }
  (*(void (**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 5664) + 64LL))(
      *(_QWORD*)(a1 + 5664), (unsigned int)(v13 + v14 * v5), 0);
  v21 = *(_DWORD*)(a1 + 10700);
  if (v21 == 2) {
    (*(void (**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 5664) + 72LL))(
        *(_QWORD*)(a1 + 5664), *(_QWORD*)(a1 + 5688), v15);
    v24 = v11;
    AdpcmSampleCountEm = nn_codec_GetAdpcmSampleCount(v11);
    v26 = *(_DWORD*)(a1 + 10716);
    v27 = *(_DWORD*)(a1 + 10704);
    nn_codec_DecodeAdpcm(*(_QWORD*)(a1 + 5696), a1 + 10848, a1 + 10854,
                         *(_QWORD*)(a1 + 5688), v24, AdpcmSampleCountEm);
    nn_codec_DecodeAdpcm(*(_QWORD*)(a1 + 5696) + v27 * (__int64)v26, a1 + 10886,
                         a1 + 10892, *(_QWORD*)(a1 + 5688) + v24, v24,
                         AdpcmSampleCountEm);
  }
  else if (v21 == 1) {
    (*(void (**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 5664) + 72LL))(
        *(_QWORD*)(a1 + 5664), *(_QWORD*)(a1 + 5696), v15);
  }
  v28 = *(_DWORD*)(a1 + 10780);
  v29 = *(_DWORD*)(a1 + 10768);
  *(_DWORD*)(a1 + 10780) = 0;
  *(_DWORD*)(a1 + 10768) = v29 + 1;
  *(float*)(a1 + 10776) = (float)v28;
  if ((*(unsigned int (**)(_QWORD))(**(_QWORD**)(a1 + 5664) + 136LL))(
          *(_QWORD*)(a1 + 5664)) <= 6) {
  LABEL_21:
    WaveMultiStreamPlayer_18a920(a1);
    if ((*(unsigned int (**)(_QWORD))(**(_QWORD**)(a1 + 5664) + 136LL))(
            *(_QWORD*)(a1 + 5664)) <= 6) {
      WaveMultiStreamPlayer_18a920(a1);
      if ((*(unsigned int (**)(_QWORD))(**(_QWORD**)(a1 + 5664) + 136LL))(
              *(_QWORD*)(a1 + 5664)) <= 6) {
        WaveMultiStreamPlayer_18a920(a1);
        if ((*(unsigned int (**)(_QWORD))(**(_QWORD**)(a1 + 5664) + 136LL))(
                *(_QWORD*)(a1 + 5664)) <= 6) {
          WaveMultiStreamPlayer_18a920(a1);
          if ((*(unsigned int (**)(_QWORD))(**(_QWORD**)(a1 + 5664) + 136LL))(
                  *(_QWORD*)(a1 + 5664)) <= 6) {
            WaveMultiStreamPlayer_18a920(a1);
            if ((*(unsigned int (**)(_QWORD))(**(_QWORD**)(a1 + 5664) + 136LL))(
                    *(_QWORD*)(a1 + 5664)) <= 6) {
              WaveMultiStreamPlayer_18a920(a1);
              if ((*(unsigned int (**)(_QWORD))(**(_QWORD**)(a1 + 5664) +
                                                136LL))(
                      *(_QWORD*)(a1 + 5664)) <= 6) {
                WaveMultiStreamPlayer_18a920(a1);
              }
            }
          }
        }
      }
    }
  }
  return nn_os_UnlockMutex(a1 + 11128);
}

__int64 WaveMultiStreamPlayer_Unknown202(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  __int64 v10;
  float v11;
  int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  int v19;
  __int64 v20;
  _BYTE v22[200];

  nn_os_LockMutex(a1 + 11128);
  if ((*(_BYTE*)(a1 + 10728) & 1) != 0) {
    v5 = *(_DWORD*)(a1 + 10768);
    v6 = *(_DWORD*)(a1 + 10736);
    if (v5 > v6) {
      v7 = *(_DWORD*)(a1 + 10756);
      v5 = *(_DWORD*)(a1 + 10748);
      v8 = v7 + *(_DWORD*)(a1 + 10752);
      *(_DWORD*)(a1 + 10768) = v5;
      *(_DWORD*)(a1 + 5600) = 0;
      *(_DWORD*)(a1 + 5592) = v8;
      *(_DWORD*)(a1 + 10780) += v7;
      ++*(_DWORD*)(a1 + 5604);
    }
  }
  else {
    v6 = *(_DWORD*)(a1 + 10736);
    if (v6 == 99999) {
      v6 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 5664) + 160LL) + 88LL);
      *(_DWORD*)(a1 + 10736) = v6;
    }
    v5 = *(_DWORD*)(a1 + 10768);
    if (v5 > v6) {
      v9 = *(_DWORD*)(a1 + 10716);
      v10 = *(_QWORD*)(a1 + 5696);
      v11 = (float)*(int*)(a1 + 10780);
      *(_DWORD*)(a1 + 10780) = 0;
      *(_DWORD*)(a1 + 10784) = v9;
      *(float*)(a1 + 10776) = v11;
      memset(v10, 0, 0x10000, v2, v3, v4);
      if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 5664) + 176LL))(
               *(_QWORD*)(a1 + 5664)) &
           1) == 0) {
        snd_Fade_Fade_10c830(v22);
        (*(void (**)(__int64, _BYTE*))(*(_QWORD*)a1 + 1312LL))(a1, v22);
        snd_Fade_Destroy_Fade(v22);
      }
      return nn_os_UnlockMutex(a1 + 11128);
    }
  }
  v12 = *(_DWORD*)(a1 + 10720);
  v13 = *(_DWORD*)(a1 + 10696);
  *(_DWORD*)(a1 + 10784) = *(_DWORD*)(a1 + 10716);
  if (v5 >= v6) {
    *(_DWORD*)(a1 + 10784) = *(_DWORD*)(a1 + 10744);
  }
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 5664) + 128LL))(
           *(_QWORD*)(a1 + 5664)) &
       1) != 0) {
    (*(void (**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 5664) + 80LL))(
        *(_QWORD*)(a1 + 5664), *(_QWORD*)(a1 + 5696),
        (unsigned int)(v13 * v12));
    v17 = *(_DWORD*)(a1 + 10780);
    v18 = *(_DWORD*)(a1 + 10768);
    *(_DWORD*)(a1 + 10780) = 0;
    *(_DWORD*)(a1 + 10768) = v18 + 1;
    *(float*)(a1 + 10776) = (float)v17;
    if ((*(unsigned int (**)(_QWORD))(**(_QWORD**)(a1 + 5664) + 136LL))(
            *(_QWORD*)(a1 + 5664)) > 6) {
      return nn_os_UnlockMutex(a1 + 11128);
    }
  }
  else {
    v19 = *(_DWORD*)(a1 + 10716);
    v20 = *(_QWORD*)(a1 + 5696);
    *(_QWORD*)(a1 + 10776) = 0;
    *(_DWORD*)(a1 + 10784) = v19;
    memset(v20, 0, 0x10000, v14, v15, v16);
    if ((*(unsigned int (**)(_QWORD))(**(_QWORD**)(a1 + 5664) + 136LL))(
            *(_QWORD*)(a1 + 5664)) > 6) {
      return nn_os_UnlockMutex(a1 + 11128);
    }
  }
  WaveMultiStreamPlayer_18a920(a1);
  if ((*(unsigned int (**)(_QWORD))(**(_QWORD**)(a1 + 5664) + 136LL))(
          *(_QWORD*)(a1 + 5664)) <= 6) {
    WaveMultiStreamPlayer_18a920(a1);
    if ((*(unsigned int (**)(_QWORD))(**(_QWORD**)(a1 + 5664) + 136LL))(
            *(_QWORD*)(a1 + 5664)) <= 6) {
      WaveMultiStreamPlayer_18a920(a1);
      if ((*(unsigned int (**)(_QWORD))(**(_QWORD**)(a1 + 5664) + 136LL))(
              *(_QWORD*)(a1 + 5664)) <= 6) {
        WaveMultiStreamPlayer_18a920(a1);
        if ((*(unsigned int (**)(_QWORD))(**(_QWORD**)(a1 + 5664) + 136LL))(
                *(_QWORD*)(a1 + 5664)) <= 6) {
          WaveMultiStreamPlayer_18a920(a1);
          if ((*(unsigned int (**)(_QWORD))(**(_QWORD**)(a1 + 5664) + 136LL))(
                  *(_QWORD*)(a1 + 5664)) <= 6) {
            WaveMultiStreamPlayer_18a920(a1);
            if ((*(unsigned int (**)(_QWORD))(**(_QWORD**)(a1 + 5664) + 136LL))(
                    *(_QWORD*)(a1 + 5664)) <= 6) {
              WaveMultiStreamPlayer_18a920(a1);
            }
          }
        }
      }
    }
  }
  return nn_os_UnlockMutex(a1 + 11128);
}

#pragma GCC visibility pop
