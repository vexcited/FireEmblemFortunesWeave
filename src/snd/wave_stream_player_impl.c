#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ConstructSet(__int64);
__int64 GameRoutine_17c740(_QWORD*);
__int64 GameRoutine_186740(__int64, int, int*, _DWORD*);
__int64 GameRoutine_187a80(__int64);
__int64 WaveMultiStreamPlayer_18a920(_QWORD);
__int64 WavePlayer_1843e0(__int64 result);
__int64 WavePlayer_184430(__int64 result);
__int64 WavePlayer_184510(_DWORD*);
__int64 WavePlayer_184f20(_QWORD*);
__int64 WavePlayer_186880(__int64, int);
__int64 WaveReader_188ee0(__int64);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Fade_10c830(_QWORD);
void GameRoutine_651250(void*, unsigned __int64);
void WavePlayer_184480(__int64);
void WavePlayer_186800(__int64, __int64, __int64*);
void WaveStreamPlayer_189ee0(__int64 a1);
__int64 WaveStreamPlayer_189f20(__int64 result);
void WaveStreamPlayer_189fe0(__int64 a1);
void WaveStreamPlayer_18a260(_BYTE* a1);
__int64 WaveStreamPlayer_18a450(__int64 a1);
__int64 WaveStreamPlayer_18a490(_BYTE* a1);

void WaveStreamPlayer_189ee0(__int64 a1)
{
  ConstructSet(a1 - 5552);
  GameRoutine_651250((void*)(a1 - 5552), 0x2B98u);
}

__int64 WaveStreamPlayer_189f20(__int64 result)
{
  __int64 v1;

  if ((*(_BYTE*)(result + 5576) & 1) == 0) {
    v1 = result;
    result = GameRoutine_17c740(*(_QWORD**)(result + 5568));
    *(_QWORD*)(v1 + 10848) = 0;
    *(_QWORD*)(v1 + 10856) = 0;
    *(_QWORD*)(v1 + 10864) = 0;
    *(_QWORD*)(v1 + 5664) = result;
    *(_QWORD*)(v1 + 10872) = 0;
    *(_QWORD*)(v1 + 10880) = 0;
    *(_QWORD*)(v1 + 10888) = 0;
    *(_QWORD*)(v1 + 10896) = 0;
    *(_QWORD*)(v1 + 10904) = 0;
    *(_QWORD*)(v1 + 10912) = 0;
    *(_QWORD*)(v1 + 10920) = 0;
    *(_QWORD*)(v1 + 10928) = 0;
    *(_QWORD*)(v1 + 10936) = 0;
    *(_QWORD*)(v1 + 10944) = 0;
    *(_QWORD*)(v1 + 10952) = 0;
    *(_QWORD*)(v1 + 10960) = 0;
    *(_QWORD*)(v1 + 10968) = 0;
    *(_QWORD*)(v1 + 10976) = 0;
    *(_QWORD*)(v1 + 10984) = 0;
    *(_QWORD*)(v1 + 10992) = 0;
    *(_QWORD*)(v1 + 11000) = 0;
    *(_QWORD*)(v1 + 11008) = 0;
    *(_QWORD*)(v1 + 11016) = 0;
    *(_QWORD*)(v1 + 11024) = 0;
    *(_QWORD*)(v1 + 11032) = 0;
    *(_QWORD*)(v1 + 11040) = 0;
    *(_QWORD*)(v1 + 11048) = 0;
    *(_QWORD*)(v1 + 11056) = 0;
    *(_QWORD*)(v1 + 11064) = 0;
    *(_DWORD*)(v1 + 11072) = 0;
    *(_BYTE*)(v1 + 5576) = 1;
  }
  return result;
}

void WaveStreamPlayer_189fe0(__int64 a1)
{
  int v1;
  _BYTE* v3;
  _QWORD* v4;
  __int64* v5;
  bool v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  _BYTE v12[208];

  v1 = *(_DWORD*)(a1 + 11112);
  v3 = (_BYTE*)(a1 + 11117);
  v4 = (_QWORD*)(a1 + 10768);
  v11 = a1 + 10848;
  v5 = (__int64*)(a1 + 10352);
  do {
    switch (v1) {
    case 0:
      if (*v3 == 1) {
        *v3 = 0;
        goto LABEL_13;
      }
      break;
    case 1:
      if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 5664) + 56LL))(
               *(_QWORD*)(a1 + 5664)) &
           1) != 0) {
        GameRoutine_187a80(a1);
        v7 = *(_QWORD*)(a1 + 5664);
        *(_DWORD*)(a1 + 5604) = 0;
        *v4 = 0;
        v4[1] = 0;
        (*(void (**)(__int64))(*(_QWORD*)v7 + 104LL))(v7);
        WaveMultiStreamPlayer_18a920(a1);
        if (*(_DWORD*)(a1 + 10700) == 2 && *(int*)(a1 + 10696) >= 1) {
          v8 = v11;
          v9 = 0;
          v10 = v5;
          do {
            WavePlayer_186800(a1, v8, v10);
            ++v9;
            v10 = (__int64*)((char*)v10 + 44);
            v8 += 38;
          } while (v9 < *(int*)(a1 + 10696));
        }
        *(_DWORD*)(a1 + 11112) = 3;
      }
      break;
    case 2:
    case 3:
      if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 5664) + 56LL))(
               *(_QWORD*)(a1 + 5664)) &
           1) != 0 &&
          (*(int (**)(_QWORD))(**(_QWORD**)(a1 + 5664) + 144LL))(
              *(_QWORD*)(a1 + 5664)) <= 0) {
        WaveMultiStreamPlayer_18a920(a1);
        WavePlayer_184f20((_QWORD*)a1);
        *(_DWORD*)(a1 + 11112) = 4;
      }
      break;
    case 4:
      WavePlayer_1843e0(a1);
      break;
    case 5:
      WavePlayer_184430(a1);
      break;
    case 6:
      WavePlayer_184480(a1);
      break;
    case 7:
      WavePlayer_184510((_DWORD*)a1);
      break;
    case 8:
      WaveStreamPlayer_18a260(a1);
      break;
    case 9:
      if ((*(float (**)(__int64))(*(_QWORD*)a1 + 104LL))(a1) < 0.001) {
        if (*(_BYTE*)(a1 + 5610) == 1) {
          (*(void (**)(__int64))(*(_QWORD*)a1 + 1200LL))(a1);
          snd_Fade_Fade_10c830(v12);
          (*(void (**)(__int64, _BYTE*, float))(*(_QWORD*)a1 + 112LL))(a1, v12,
                                                                       1.0);
          snd_Fade_Destroy_Fade(v12);
        }
        else {
        LABEL_13:
          v3[5] = 1;
        }
      }
      break;
    default:
      break;
    }
    v6 = v1 == *(_DWORD*)(a1 + 11112);
    v1 = *(_DWORD*)(a1 + 11112);
  } while (!v6);
}

void WaveStreamPlayer_18a260(_BYTE* a1)
{
  _BYTE* v2;
  int v3;
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  int v10;
  int v11;
  int v12;
  int v13;
  _BYTE v14[200];
  int v15;
  int v16;

  v2 = a1 + 11117;
  if (a1[11117] == 1) {
    *v2 = 0;
    *((_DWORD*)a1 + 2778) = 9;
  }
  else if ((*(float (**)(_BYTE*))(*(_QWORD*)a1 + 104LL))(a1) < 0.001) {
    nn_os_LockMutex(a1 + 11128);
    v3 = WavePlayer_186880((__int64)a1,
                           (int)(float)(*((float*)a1 + 2781) * 1000.0));
    GameRoutine_186740((__int64)a1, v3, &v16, &v15);
    v4 = v15;
    v5 = v16;
    v6 = *((_QWORD*)a1 + 708);
    *((_DWORD*)a1 + 2694) = 0;
    *((_DWORD*)a1 + 2692) = v5;
    *((_DWORD*)a1 + 2693) = v5;
    *((_DWORD*)a1 + 2695) = v4;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 104LL))(v6);
    if (*((_DWORD*)a1 + 2675) == 2) {
      if (*((int*)a1 + 2674) >= 1) {
        v7 = 0;
        v8 = (__int64)(a1 + 10848);
        v9 = (__int64*)(a1 + 10352);
        do {
          WavePlayer_186800((__int64)a1, v8, v9);
          ++v7;
          v9 = (__int64*)((char*)v9 + 44);
          v8 += 38;
        } while (v7 < *((int*)a1 + 2674));
      }
    }
    else if ((WaveReader_188ee0(*((_QWORD*)a1 + 708)) & 1) != 0) {
      (*(void (**)(_QWORD, _QWORD))(**((_QWORD**)a1 + 708) + 112LL))(
          *((_QWORD*)a1 + 708), *((unsigned int*)a1 + 2693));
    }
    WaveMultiStreamPlayer_18a920(a1);
    v10 = *((_DWORD*)a1 + 2679);
    v11 = *((_DWORD*)a1 + 2692);
    v12 = (int)*((float*)a1 + 2694);
    *((_QWORD*)a1 + 698) = 0;
    v13 = v12 + v11 * v10 + *((_DWORD*)a1 + 2695);
    *(_QWORD*)(a1 + 5596) = 0;
    *((_DWORD*)a1 + 1398) = v13;
    snd_Fade_Fade_10c830(v14);
    (*(void (**)(_BYTE*, _BYTE*, float))(*(_QWORD*)a1 + 112LL))(a1, v14, 1.0);
    snd_Fade_Destroy_Fade(v14);
    *((_DWORD*)a1 + 2778) = 5;
    if (v2[3] == 1) {
      v2[3] = 0;
      a1[5608] = 0;
    }
    nn_os_UnlockMutex(a1 + 11128);
  }
}

__int64 WaveStreamPlayer_18a450(__int64 a1)
{
  (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 5664) + 48LL))(*(_QWORD*)(a1 + 5664));
  *(_DWORD*)(a1 + 11112) = 1;
  return 0;
}

__int64 WaveStreamPlayer_18a490(_BYTE* a1)
{
  __int64 result;

  result = (*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 1264LL))(a1);
  if ((result & 1) != 0) {
    a1[11116] = 1;
  }
  return result;
}

#pragma GCC visibility pop
