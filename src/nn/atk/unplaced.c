#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BaseNx_278690(__int64);
__int64 BaseNx_278b50(__int64, unsigned int, __int64);
__int64 BaseNx_2888d0(__int64 result, __int64, char);
__int64 BaseNx_288b50(__int64, unsigned int);
__int64 BaseNx_2ae880(__int64*);
__int64 GameRoutine_27ba20(__int64);
__int64 GameRoutine_2adfb0(__int64);
__int64 SoundArchivePlayer_2a5660(__int64, unsigned int, __int64, __int64);
__int64 WaveSound_2ac1a0(__int64, __int64, __int64, __int64*, char);
__int64 WaveSound_2ac2d0(__int64, _QWORD*, __int64);
__int64 WaveSound_2ac400(__int64, char, char);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_SleepThread(_QWORD);
__int64 strcmp(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
__n128 SoundThread_2a1f40(__int64, __int64);
__n128 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN* GameData_2135068;
extern char* GameData_2135070;
extern char* GameData_2135290[2];
void* BaseNx_2a1b90();
float32x4_t nn_atk_277c50(float32x4_t* a1, float32x4_t* a2);
__int64 nn_atk_2784e0(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5);
__int64 nn_atk_278700(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7, __int64 a8);
__n128 nn_atk_2ae7a0(__int64* a1);
__int64 nn_atk_2aed70(__int64 a1, __int64 a2, __int64 a3, unsigned int a4,
                      __int64 a5, __int64 a6, int* a7);
__n128 nn_atk_2b8e00(__int64 a1, __int64* a2);

float32x4_t nn_atk_277c50(float32x4_t* a1, float32x4_t* a2)
{
  float32x4_t v2;
  float v3;
  float32x4_t result;
  float32x4_t v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;

  v2 = a2[3];
  v3 = COERCE_FLOAT(LANES128(a2[3]).n128_u64[1]);
  result = a1[4];
  LANES128(v5).n128_f32[0] =
      -(float)((float)(LANES128_OF(vmulq_f32(*a2, v2)).n128_f32[1] +
                       (float)(COERCE_FLOAT(*a2) * LANES128(v2).n128_f32[0])) +
               (float)(COERCE_FLOAT(LANES128(*(a2)).n128_u64[1]) * v3));
  LANES128(v5).n128_f32[1] =
      -(float)((float)(LANES128_OF(vmulq_f32(a2[1], v2)).n128_f32[1] +
                       (float)(COERCE_FLOAT(*(_OWORD*)&a2[1]) *
                               LANES128(v2).n128_f32[0])) +
               (float)(COERCE_FLOAT(LANES128(a2[1]).n128_u64[1]) * v3));
  LANES128(v5).n128_u64[1] = COERCE_UNSIGNED_INT(
      -(float)((float)(LANES128_OF(vmulq_f32(a2[2], v2)).n128_f32[1] +
                       (float)(COERCE_FLOAT(*(_OWORD*)&a2[2]) *
                               LANES128(v2).n128_f32[0])) +
               (float)(COERCE_FLOAT(LANES128(a2[2]).n128_u64[1]) * v3)));
  a1[4] = v5;
  v6 = LANES128(a2[1]).n128_u64[1];
  v8 = LANES128(*(a2)).n128_u64[0];
  v7 = LANES128(*(a2)).n128_u64[1];
  LANES128(a1[1]).n128_u64[0] = LANES128(a2[1]).n128_u64[0];
  LANES128(a1[1]).n128_u64[1] = v6;
  LANES128(*(a1)).n128_u64[0] = v8;
  LANES128(*(a1)).n128_u64[1] = v7;
  v9 = LANES128(a2[3]).n128_u64[1];
  v11 = LANES128(a2[2]).n128_u64[0];
  v10 = LANES128(a2[2]).n128_u64[1];
  LANES128(a1[3]).n128_u64[0] = LANES128(a2[3]).n128_u64[0];
  LANES128(a1[3]).n128_u64[1] = v9;
  LODWORD(v9) = LANES128(a1[8]).n128_u8[0];
  LANES128(a1[2]).n128_u64[0] = v11;
  LANES128(a1[2]).n128_u64[1] = v10;
  if ((_DWORD)v9 == 1) {
    LANES128(a1[8]).n128_u8[0] = 0;
  }
  else {
    result = vsubq_f32(v5, result);
    a1[5] = result;
  }
  return result;
}

__int64 nn_atk_2784e0(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5)
{
  __int64 v5;

  v5 = *a1;
  if (a5 != 0) {
    return (*(__int64 (**)(__int64))(v5 + 48))((__int64)a1);
  }
  else {
    return (*(__int64 (**)(__int64))(v5 + 40))((__int64)a1);
  }
}

__int64 nn_atk_278700(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  unsigned int v12;
  int* v14;
  int v15;
  _DWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  int v22;
  __int64 v23;
  unsigned __int64 v24;
  _DWORD* v25;

  v8 = *(_QWORD**)(a1 + 16);
  if (v8 != nullptr && *((_BYTE*)v8 + 8) == 1) {
    v9 = a1;
    v10 = a2;
    v11 = (unsigned int)X8CALL_X0(
        _QWORD*, (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
                     *v8 + 32LL))((void*)v8, v8));
    a2 = v10;
    v12 = v11;
    a1 = v9;
    if (v12 != -1) {
      return v12;
    }
  }
  v23 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 56LL);
  if (v23 == 0) {
    return 0xFFFFFFFFLL;
  }
  v21 = a2;
  v14 = (int*)(v23 + *(int*)(v23 + 12));
  v15 = *v14;
  if (*v14 >= (unsigned int)v14[1]) {
    return 0xFFFFFFFFLL;
  }
  v16 = v14 + 2;
  v17 = (__int64)&v14[5 * v15 + 2];
  if ((*(_WORD*)v17 & 1) == 0) {
    v18 = v23;
    v19 = a2;
    v20 = strlen(a2);
    v21 = v19;
    v22 = v20;
    v23 = v18;
    do {
      while (1) {
        v24 = *(unsigned __int16*)(v17 + 2);
        if ((int)(v24 >> 3) < v22 &&
            ((*(unsigned __int8*)(v19 + (v24 >> 3)) >> (~(_BYTE)v24 & 7)) &
             1) != 0) {
          break;
        }
        v15 = *(_DWORD*)(v17 + 4);
        v17 = (__int64)&v16[5 * v15];
        if ((*(_WORD*)v17 & 1) != 0) {
          goto LABEL_13;
        }
      }
      v15 = *(_DWORD*)(v17 + 8);
      v17 = (__int64)&v16[5 * v15];
    } while ((*(_WORD*)v17 & 1) == 0);
  }
LABEL_13:
  v25 = &v16[5 * v15];
  if ((unsigned int)strcmp(
          v21,
          v23 + *(int*)(v23 + 4) +
              *(int*)(v23 + *(int*)(v23 + 4) + 12LL * (int)v25[3] + 8),
          v21, a4, a5, a6, a7, a8) != 0) {
    return 0xFFFFFFFFLL;
  }
  else {
    return (unsigned int)v25[4];
  }
}

__n128 nn_atk_2ae7a0(__int64* a1)
{
  unsigned __int64 v2;
  __int64 v3;
  __int64* i;
  __int64* v5;
  __int64 v6;
  void* v7;

  BaseNx_2ae880(a1);
  while ((__int64*)a1[16] != a1 + 15) {
    nn_os_SleepThread(5000000);
  }
  v2 = (unsigned __int64)a1[12] >> 10;
  if ((int)v2 >= 1) {
    v3 = a1[11];
    do {
      GameRoutine_2adfb0(v3);
      v3 += 1024;
      LODWORD(v2) = v2 - 1;
    } while ((_DWORD)v2 != 0);
  }
  for (i = (__int64*)a1[14]; i != a1 + 13; i = (__int64*)a1[14]) {
    v5 = (__int64*)i[1];
    v6 = *v5;
    *(_QWORD*)(*i + 8) = v5;
    *v5 = *i;
    *(_QWORD*)(v6 + 8) = i;
    *i = v6;
  }
  v7 = BaseNx_2a1b90();
  return SoundThread_2a1f40((__int64)v7, (__int64)(a1 + 8));
}

__int64 nn_atk_2aed70(__int64 a1, __int64 a2, __int64 a3, unsigned int a4,
                      __int64 a5, __int64 a6, int* a7)
{
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  _BYTE* v17;
  __int64 v18;
  _BYTE* v19;
  __int64 v20;
  __int64 v22;
  int v23;
  __int64 v24;
  int v25;
  char v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  int v30;
  __int64 v32;
  int v33;
  int v34;
  int* v35;
  int v36;
  __int64 v37;
  unsigned int v38;
  __int64 v39;
  char v40;
  _QWORD v41[4];
  struct {
    unsigned __int64 v42;
    unsigned __int64 v43;
    unsigned __int64 v44;
    __int64 v45;
    int v46;
    char v47;
  } v42_;
  struct {
    char gap76_[1];
    _BYTE v48[11];
    int v49;
  } v48_;
  struct {
    __int64 v50;
    __int64 v51;
  } v50_;
  struct {
    __int64 v52;
    int v53;
  } v52_;

  v52_.v53 = 0;
  v52_.v52 = 0;
  if ((BaseNx_278b50(a2, a4, (__int64)&v52_.v52) & 1) == 0) {
    return 3;
  }
  v12 = *(_QWORD*)(a5 + 32);
  v13 = *((_QWORD*)a7 + 8);
  v50_.v50 = 0;
  v50_.v51 = 0;
  v14 = *(_DWORD*)(v12 + 72);
  if (*(_QWORD*)(a1 + 136) != 0) {
    v15 = BaseNx_278690(a2);
    if (v15 != 0) {
      v16 = v15;
      v17 = *(_BYTE**)(a1 + 136);
      if (v17[8] == 1) {
        v18 = (*(__int64 (**)(_BYTE*, __int64, void*, char*, _QWORD))(
            *(_QWORD*)v17 + 48LL))(v17, v16, GameData_2135068, GameData_2135070,
                                   0);
        v19 = *(_BYTE**)(a1 + 136);
        if (v19[8] == 1) {
          v20 = (*(__int64 (**)(_BYTE*, __int64, void*, char*, _QWORD))(
              *(_QWORD*)v19 + 48LL))(v19, v16, GameData_2135068,
                                     GameData_2135290[0], 0);
          if (v18 != 0 && v20 != 0) {
            v42_.v44 = 0;
            v42_.v45 = 0;
            v42_.v42 = 0;
            v42_.v43 = 0;
            BaseNx_2888d0((__int64)&v42_.v42, v20, 0);
            v22 = BaseNx_288b50((__int64)&v42_.v42, v52_.v52);
            if (v22 != 0) {
              v23 = *(_DWORD*)(a5 + 280);
              v24 = v22;
              v25 = 0;
              v26 = 0;
              v27 = 0;
              v50_.v51 = v18;
              v28 = 127;
              LODWORD(v50_.v50) = v23;
              v30 = *a7;
              v29 = a7[1];
              if (*a7 == 0) {
                goto LABEL_21;
              }
            LABEL_32:
              if (v30 == 2) {
                v34 = 0;
                v35 = *((int**)a7 + 9);
                if (v35 == nullptr) {
                  goto LABEL_22;
                }
              }
              else {
                v34 = 0;
                v29 = 0;
                v35 = *((int**)a7 + 9);
                if (v35 == nullptr) {
                  goto LABEL_22;
                }
              }
            LABEL_34:
              v36 = *v35;
              LOBYTE(v35) = *((_BYTE*)v35 + 4);
              goto LABEL_35;
            }
          }
        }
      }
    }
  }
  v32 = GameRoutine_27ba20(a3);
  v33 = *(_DWORD*)(a5 + 280);
  v50_.v51 = v32;
  LODWORD(v50_.v50) = v33;
  if (v32 != 0) {
    v28 = 127;
    v18 = v32;
    if (v13 != 0) {
      v27 = *(_DWORD*)(v13 + 12);
      v24 = *(_QWORD*)v13;
      v26 = *(_BYTE*)(v13 + 20);
      if ((*(_DWORD*)(v13 + 16) & ~(*(int*)(v13 + 16) >> 31)) >= 127) {
        v28 = 127;
      }
      else {
        v28 = *(_DWORD*)(v13 + 16) & ~(*(int*)(v13 + 16) >> 31);
      }
      if (v24 != 0) {
        v25 = 0;
        v30 = *a7;
        v29 = a7[1];
        if (*a7 == 0) {
          goto LABEL_21;
        }
        goto LABEL_32;
      }
    }
    else {
      v27 = 0;
      v26 = 0;
    }
    v37 = SoundArchivePlayer_2a5660(v32, v52_.v52, a2, a3 + 24);
    if (v37 != 0) {
      v24 = v37;
      v25 = 0;
      v30 = *a7;
      v29 = a7[1];
      if (*a7 != 0) {
        goto LABEL_32;
      }
    }
    else {
      if (v14 == 0) {
        return 9;
      }
      v24 = 0;
      v25 = 1;
      v30 = *a7;
      v29 = a7[1];
      if (*a7 != 0) {
        goto LABEL_32;
      }
    }
  }
  else {
    if (v14 == 0) {
      return 8;
    }
    v18 = 0;
    v24 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 127;
    v25 = 1;
    v30 = *a7;
    v29 = a7[1];
    if (*a7 != 0) {
      goto LABEL_32;
    }
  }
LABEL_21:
  v34 = 1;
  v35 = *((int**)a7 + 9);
  if (v35 != nullptr) {
    goto LABEL_34;
  }
LABEL_22:
  v36 = 0;
LABEL_35:
  v42_.v45 = v28;
  v42_.v46 = v36;
  v42_.v47 = (char)v35;
  memset(v48_.v48, 0, sizeof(v48_.v48));
  v42_.v42 = __PAIR64__(v34, v52_.v52);
  v38 = a7[3];
  v42_.v43 = __PAIR64__(a7[2], v29);
  v42_.v44 = __PAIR64__(v27, v38);
  HIDWORD(v42_.v45) = v26 & 1;
  v48_.v49 = a7[4];
  if (v25 != 0) {
    v39 = *(_QWORD*)(a5 + 32);
    v41[0] = a2;
    v41[1] = a3;
    v41[2] = &v50_.v50;
    v41[3] = v39;
    WaveSound_2ac2d0(a5, v41, (__int64)&v42_.v42);
  }
  else {
    if (v13 != 0 && *(_QWORD*)v13 != 0) {
      v40 = *(_BYTE*)(v13 + 8);
    }
    else {
      v40 = 0;
    }
    WaveSound_2ac1a0(a5, v18, v24, (__int64*)&v42_.v42, v40);
  }
  WaveSound_2ac400(a5, v52_.v53, SBYTE1(v52_.v53));
  return 0;
}

__n128 nn_atk_2b8e00(__int64 a1, __int64* a2)
{
  __int64 i;
  signed int v5;
  int v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  nn_os_LockMutex(a1 + 16);
  for (i = *(_QWORD*)(a1 + 8); i != a1; i = *(_QWORD*)(i + 8)) {
    v5 = atomic_load((unsigned int*)(i + 44));
    if (v5 < *(_DWORD*)(i + 32)) {
      v6 = *(_DWORD*)(i + 36);
      v7 = (_QWORD*)(*(_QWORD*)(i + 24) + 88LL * v6);
      *(_DWORD*)(i + 36) = v6 + 1;
      v8 = a2[3];
      v9 = a2[4];
      v10 = a2[6];
      v7[5] = a2[5];
      v7[6] = v10;
      v7[3] = v8;
      v7[4] = v9;
      v11 = a2[2];
      v12 = *a2;
      v7[1] = a2[1];
      v7[2] = v11;
      *v7 = v12;
      v13 = a2[7];
      v14 = a2[8];
      v15 = a2[10];
      v7[9] = a2[9];
      v7[10] = v15;
      v7[7] = v13;
      v7[8] = v14;
      if (*(_DWORD*)(i + 36) == *(_DWORD*)(i + 32)) {
        *(_DWORD*)(i + 36) = 0;
      }
      atomic_fetch_add((atomic_uint* volatile)(i + 44), 1u);
    }
  }
  return nn_os_UnlockMutex(a1 + 16);
}

#pragma GCC visibility pop
