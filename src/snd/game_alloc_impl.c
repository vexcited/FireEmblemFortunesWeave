#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_126000(_QWORD);
__int64 GameRoutine_190020(_QWORD, _QWORD);
__int64 GameRoutine_a1efd0(__int64);
__int64 GameRoutine_e0b20(__int64, __int64, __int64, __int64);
__int64 GameRoutine_e1c50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);
__int64 GameRoutine_e59d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_1a0a590(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_Wind_getListenerPosition(_QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD, float);
__int64 strlen(_QWORD);
extern __int64 GameData_212e2d8;
extern __int64 GameData_2134098[13];
extern __int64 GameData_21340e0[4];
extern __int64* snd_g_memory_ptr[2];
extern char GameData_1a9f09e;
float snd_fnd_calcDistanceTo(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_a36650(void);
__int64 GameAlloc_e1ba0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                        __int64 a5, __int64 a6);
_QWORD* GameAlloc_e22b0(__int64 a1);
__int64 GameAlloc_e2400(__int64 a1, __int64 a2, __int64 a3);
void GameAlloc_e2920(__int64 a1, __int64 a2);
__int64 GameAlloc_e5920(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                        __int64 a5, __int64 a6);
__int64 GameAlloc_e5eb0(__int64 a1);
__int64 Env_e0b20(__int64, __int64, __int64, __int64);
float snd_fnd_calcDistanceTo_alt1(float*,
                                  float*) __asm__("snd_fnd_calcDistanceTo");

__int64 GameAlloc_e1ba0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                        __int64 a5, __int64 a6)
{
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64* i;
  __int64 v17;

  v12 = nn_os_LockMutex(a1 + 416);
  v13 = *(_QWORD*)(a1 + 8);
  v14 = *(_QWORD*)(a1 + 16);
  while (v13 != v14) {
    v15 = *(__int64**)(*(_QWORD*)v13 + 32LL);
    for (i = *(__int64**)(*(_QWORD*)v13 + 40LL); v15 != i;
         v12 = GameRoutine_e1c50(v12, v17, a2, a3, a4, a5, a6)) {
      v17 = *v15++;
    }
    v13 += 8;
  }
  return nn_os_UnlockMutex(a1 + 416);
}

_QWORD* GameAlloc_e22b0(__int64 a1)
{
  unsigned int v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;

  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v2 = *(unsigned __int16*)(a1 + 32);
  v3 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v2 >= v3) {
    v11 = GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590(v11);
    __udf(0);
  }
  v4 = *(unsigned __int16*)(a1 + 32);
  v5 = *(_QWORD*)(a1 + 24);
  v6 = *(unsigned __int16*)(v5 + 2 * v4);
  *(_WORD*)(a1 + 32) = v4 + 1;
  *(_WORD*)(v5 + 2 * v4) = -1;
  v7 = (_QWORD*)(*(_QWORD*)(a1 + 16) + 216LL * v6);
  nn_os_UnlockMutex(a1 + 40);
  v7[25] = 0;
  v7[26] = 0;
  v7[23] = 0;
  v7[24] = 0;
  v7[21] = 0;
  v7[22] = 0;
  v7[19] = 0;
  v7[20] = 0;
  v7[17] = 0;
  v7[18] = 0;
  v7[15] = 0;
  v7[16] = 0;
  v7[13] = 0;
  v7[14] = 0;
  v7[11] = 0;
  v7[12] = 0;
  v7[8] = 0;
  v7[9] = 0;
  v7[6] = 0;
  v7[7] = 0;
  v7[4] = 0;
  v7[5] = 0;
  v7[2] = 0;
  v7[3] = 0;
  *v7 = 0;
  v7[1] = 0;
  v7[10] = 0;
  GameRoutine_126000(v7);
  v8 = GameData_2134098[0];
  *((_DWORD*)v7 + 8) = 0;
  v7[5] = 0;
  *((_DWORD*)v7 + 12) = 0x2000;
  v7[7] = 0;
  v7[8] = 0;
  v7[9] = 0;
  *v7 = v8 + 16;
  GameRoutine_190020(v7 + 10, &GameData_1a9f09e);
  v7[13] = 0;
  v10 = GameData_212e2d8;
  *((_DWORD*)v7 + 28) = 0x2000;
  v7[17] = 0;
  v7[18] = 0;
  v7[19] = 0;
  v7[20] = 0;
  v10 += 16;
  v7[21] = 0x3F8000003F800000LL;
  v7[22] = 1065353216;
  *((_DWORD*)v7 + 46) = 0;
  v7[25] = 0;
  v7[26] = 0;
  v7[15] = v10;
  v7[16] = 0;
  v7[24] = v10;
  return v7;
}

__int64 GameAlloc_e2400(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  float v10;
  char v11;
  __int64 v12;
  __int64 v13;
  char* v14;
  _BOOL4 v15;
  __int64 v16;
  __int64 v18;
  __int64 v19;
  _QWORD v20[2];
  char* v21;

  nn_os_LockMutex(a1 + 416);
  v6 = *(_QWORD*)(a1 + 8);
  v18 = a1;
  v19 = *(_QWORD*)(a1 + 16);
  if (v6 == v19) {
    return nn_os_UnlockMutex(v18 + 416);
  }
  while (2) {
    v8 = *(_QWORD*)(*(_QWORD*)v6 + 32LL);
    v7 = *(_QWORD*)(*(_QWORD*)v6 + 40LL);
    while (v8 != v7) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, void*))(
          **(_QWORD**)v8 + 32LL))((void*)v20, (void*)*(_QWORD**)v8);
      v9 = strlen(a2);
      v11 = v20[0];
      v12 = LOBYTE(v20[0]) >> 1;
      if ((v20[0] & 1) != 0) {
        v12 = v20[1];
      }
      if (v9 == v12) {
        v13 = v9;
        if (v9 == -1) {
          GameRoutine_a36650();
        }
        if ((v20[0] & 1) != 0) {
          v14 = v21;
        }
        else {
          v14 = (char*)v20 + 1;
        }
        v15 = memcmp(v14, a2, v13) == 0;
        if ((v11 & 1) == 0) {
        LABEL_18:
          if (!v15) {
            goto LABEL_5;
          }
          goto LABEL_19;
        }
      }
      else {
        v15 = false;
        if ((v20[0] & 1) == 0) {
          goto LABEL_18;
        }
      }
      (*(void (**)(_QWORD, char*))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
          *snd_g_memory_ptr[0], v21);
      if (v15) {
      LABEL_19:
        *(_BYTE*)(*(_QWORD*)v8 + 149LL) = 1;
        *(_BYTE*)(*(_QWORD*)v8 + 148LL) = 1;
        v16 = snd_fnd_WeakHandle_get(*(_QWORD*)v8 + 40LL, v10);
        if (v16 != 0) {
          (*(void (**)(__int64, __int64, __int64, double))(
              *(_QWORD*)(v16 - 5592) + 248LL))(v16 - 5592, a3, 1, 0.0);
        }
      }
    LABEL_5:
      v8 += 8;
    }
    v6 += 8;
    if (v6 != v19) {
      continue;
    }
    return nn_os_UnlockMutex(v18 + 416);
  }
}

void GameAlloc_e2920(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v7;
  __int64 v8;
  __int64* v10;
  __int64* v11;
  float v12;
  int v13;
  float v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char v19;
  float v20;
  float v21;
  float v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  struct {
    _QWORD v26[2];
    int v27;
  } v26_;

  v7 = *(_QWORD*)(a1 + 16);
  if (v7 != *(_QWORD*)(a1 + 8)) {
    v8 = *(_QWORD*)(v7 - 8);
    v10 = *(__int64**)(v8 + 32);
    v11 = *(__int64**)(v8 + 40);
    if (v10 == v11) {
      v15 = 0x0.0p+0f;
      v12 = 0x0.0p+0f;
      v13 = -1;
    }
    else {
      v12 = 0x0.0p+0f;
      v13 = -1;
      v15 = 0x0.0p+0f;
      v16 = GameData_212e2d8 + 16;
      do {
        v18 = *v10;
        if (*(_DWORD*)(*v10 + 32) == 11) {
          v26_.v26[0] = v16;
          v26_.v26[1] = 0;
          v26_.v27 = 0;
          v19 = Env_e0b20(a1, v18, (__int64)v26_.v26, a2);
          HIDWORD(v26_.v26[1]) = *(_DWORD*)(a2 + 12);
          v20 =
              snd_fnd_calcDistanceTo_alt1((float*)(a1 + 392), (float*)v26_.v26);
          v17 = *v10;
          v21 = 0x0.0p+0f;
          v22 = *(float*)(*v10 + 180);
          if ((v19 & 1) != 0 || (v21 = v20, v20 <= v22)) {
            v13 = *(_DWORD*)(v17 + 156);
            if ((float)(0x1.0000000000000p+0f - (float)(v21 / v22)) <=
                0x1.0000000000000p+0f) {
              v15 = 0x1.0000000000000p+0f - (float)(v21 / v22);
            }
            else {
              v15 = 0x1.0000000000000p+0f;
            }
            if (*(_BYTE*)(v17 + 148) == 1) {
              v23 = *(__int64**)(v8 + 32);
              v24 = *(__int64**)(v8 + 40);
              if (v23 != v24) {
                do {
                  v25 = *v23;
                  if (*(_DWORD*)(*v23 + 32) == 11 &&
                      (*(_BYTE*)(v25 + 148) & 1) == 0) {
                    *(_BYTE*)(v25 + 148) = 1;
                  }
                  ++v23;
                } while (v23 != v24);
                v17 = *v10;
              }
              *(_BYTE*)(v17 + 148) = 0;
            }
            v12 = v21;
          }
        }
        ++v10;
      } while (v10 != v11);
    }
    *(float*)(a1 + 380) = v12;
    *(float*)(a1 + 384) = v15;
    *(_DWORD*)(a1 + 376) = v13;
  }
}

__int64 GameAlloc_e5920(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                        __int64 a5, __int64 a6)
{
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64* i;
  __int64 v17;

  v12 = nn_os_LockMutex(a1 + 320);
  v13 = *(_QWORD*)(a1 + 8);
  v14 = *(_QWORD*)(a1 + 16);
  while (v13 != v14) {
    v15 = *(__int64**)(*(_QWORD*)v13 + 32LL);
    for (i = *(__int64**)(*(_QWORD*)v13 + 40LL); v15 != i;
         v12 = GameRoutine_e59d0(v12, v17, a2, a3, a4, a5, a6)) {
      v17 = *v15++;
    }
    v13 += 8;
  }
  return nn_os_UnlockMutex(a1 + 320);
}

__int64 GameAlloc_e5eb0(__int64 a1)
{
  unsigned int v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v2 = *(unsigned __int16*)(a1 + 32);
  v3 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v2 >= v3) {
    v11 = GameRoutine_a1efd0(a1 + 40);
    v12 = nn_diag_detail_AbortImpl_1a0a590(v11);
    return snd_Wind_getListenerPosition(v12);
  }
  else {
    v4 = *(unsigned __int16*)(a1 + 32);
    v5 = *(_QWORD*)(a1 + 24);
    v6 = *(unsigned __int16*)(v5 + 2 * v4);
    *(_WORD*)(a1 + 32) = v4 + 1;
    *(_WORD*)(v5 + 2 * v4) = -1;
    v7 = *(_QWORD*)(a1 + 16) + 176LL * v6;
    nn_os_UnlockMutex(a1 + 40);
    *(_QWORD*)(v7 + 160) = 0;
    *(_QWORD*)(v7 + 168) = 0;
    *(_QWORD*)(v7 + 144) = 0;
    *(_QWORD*)(v7 + 152) = 0;
    *(_QWORD*)(v7 + 128) = 0;
    *(_QWORD*)(v7 + 136) = 0;
    *(_QWORD*)(v7 + 112) = 0;
    *(_QWORD*)(v7 + 120) = 0;
    *(_QWORD*)(v7 + 96) = 0;
    *(_QWORD*)(v7 + 104) = 0;
    *(_QWORD*)(v7 + 88) = 0;
    *(_QWORD*)(v7 + 64) = 0;
    *(_QWORD*)(v7 + 72) = 0;
    *(_QWORD*)(v7 + 48) = 0;
    *(_QWORD*)(v7 + 56) = 0;
    *(_QWORD*)(v7 + 32) = 0;
    *(_QWORD*)(v7 + 40) = 0;
    *(_QWORD*)(v7 + 16) = 0;
    *(_QWORD*)(v7 + 24) = 0;
    *(_QWORD*)v7 = 0;
    *(_QWORD*)(v7 + 8) = 0;
    *(_QWORD*)(v7 + 80) = 0;
    GameRoutine_126000(v7);
    v8 = GameData_21340e0[0];
    *(_QWORD*)(v7 + 40) = 0;
    *(_DWORD*)(v7 + 48) = 0x2000;
    *(_QWORD*)(v7 + 56) = 0;
    *(_QWORD*)(v7 + 64) = 0;
    *(_QWORD*)(v7 + 72) = 0;
    *(_QWORD*)v7 = v8 + 16;
    *(_DWORD*)(v7 + 32) = 1;
    GameRoutine_190020(v7 + 80, &GameData_1a9f09e);
    *(_QWORD*)(v7 + 104) = 0;
    *(_DWORD*)(v7 + 112) = 0x2000;
    *(_DWORD*)(v7 + 120) = 0;
    *(_BYTE*)(v7 + 124) = 0;
    v10 = GameData_212e2d8 + 16;
    *(_QWORD*)(v7 + 144) = 0;
    *(_DWORD*)(v7 + 152) = 0;
    *(_QWORD*)(v7 + 128) = 0;
    *(_QWORD*)(v7 + 136) = v10;
    *(_QWORD*)(v7 + 160) = 0x3F8000003F800000LL;
    *(_QWORD*)(v7 + 168) = 1065353216;
    return v7;
  }
}

#pragma GCC visibility pop
