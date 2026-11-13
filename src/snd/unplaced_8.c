#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameHr_18b120(_QWORD*, __int64);
__int64 GameRoutine_112180(__int64, __int64);
__int64 GameRoutine_17ea40(__int64, __int64);
__int64 GameRoutine_188860(_QWORD*, __int64);
__int64 GameRoutine_189e50(_QWORD*, __int64);
__int64 GameRoutine_190200(__int64, char*);
__int64 WavePlayer_183910(__int64, __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 nn_os_InitializeMutex(__int64, bool, int);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 snd_fnd_WeakHandle_isValid(__int64*);
extern __int16* GameData_2134528[3];
extern __int16 GameData_2178e70;
extern __int16 GameData_2199b70;
extern __int16 GameData_2199b90;
extern __int16 GameData_2199bb0;
extern __int64 (*GameData_1f547e8[])();
extern __int64 (*GameData_1f54818[])();
extern __int64* snd_g_memory_ptr[2];
extern __int64* snd_s_target_ptr;
extern __int64 snd_g_memory;
extern char GameData_1a9f09e;
int memcmp(__int64, __int64, unsigned __int64);
unsigned __int64 GameRoutine_190020(__int64*, const char*);
unsigned __int64 strlen(const char*);
void __attribute__((noreturn)) GameRoutine_1072a0();
void __attribute__((noreturn)) GameRoutine_10fb80();
void __attribute__((noreturn)) GameRoutine_10fd50();
void __attribute__((noreturn)) GameRoutine_17cb10();
void __attribute__((noreturn)) GameRoutine_17cb30();
void __attribute__((noreturn)) snd_a36650();
__int64 snd_106040(__int64 a1, _QWORD* a2);
__int64 snd_10ec00(_QWORD* a1, _DWORD* a2);
__int64 snd_10ede0(_QWORD* a1, char* a2);
__int64 snd_10fba0(__int64 result, __int64* a2, __int64* a3,
                   unsigned __int64 a4);
__int64 snd_17bf40(_QWORD* a1);
_QWORD* snd_17c140(_QWORD* a1);
__int64 snd_17c340(_QWORD* a1);
_QWORD* snd_17c540(_QWORD* a1);
_QWORD* snd_17c740(_QWORD* a1);

__int64 snd_106040(__int64 a1, _QWORD* a2)
{
  __int64* v2;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  char* v21;
  char* v22;
  _QWORD* v23;
  _QWORD* v24;
  __int64 v25;

  v2 = (__int64*)a2[1];
  v4 = a2[2] - (_QWORD)v2;
  if (v4 != 0) {
    v5 = v4 >> 3;
    while (1) {
      v7 = *v2++;
      result = v7;
      if (*(_DWORD*)(v7 + 144) == 0) {
        break;
      }
      if (--v5 == 0) {
        goto LABEL_5;
      }
    }
  }
  else {
  LABEL_5:
    v8 = snd_g_memory_ptr[0];
    v9 = (*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 272, 32);
    memset(v9, 0, 0x110u);
    GameRoutine_190020((__int64*)v9, &GameData_1a9f09e);
    GameRoutine_190020((__int64*)(v9 + 24), &GameData_1a9f09e);
    GameRoutine_190020((__int64*)(v9 + 48), &GameData_1a9f09e);
    GameRoutine_190020((__int64*)(v9 + 72), &GameData_1a9f09e);
    *(_DWORD*)(v9 + 104) = 0x2000;
    *(_DWORD*)(v9 + 120) = 0x2000;
    *(_DWORD*)(v9 + 136) = 0x2000;
    *(_QWORD*)(v9 + 144) = 0;
    *(_QWORD*)(v9 + 152) = GameData_1f547e8;
    *(_WORD*)(v9 + 192) = 0;
    *(_QWORD*)(v9 + 96) = 0;
    *(_QWORD*)(v9 + 112) = 0;
    *(_QWORD*)(v9 + 128) = 0;
    *(_QWORD*)(v9 + 196) = 0;
    *(_QWORD*)(v9 + 208) = 0;
    *(_DWORD*)(v9 + 216) = 0;
    *(_QWORD*)(v9 + 176) = 0;
    *(_QWORD*)(v9 + 184) = 0;
    *(_QWORD*)(v9 + 160) = GameData_1f54818;
    *(_QWORD*)(v9 + 168) = 0;
    nn_os_InitializeMutex(v9 + 192, true, 0);
    *(_BYTE*)(v9 + 224) = 0;
    *(_QWORD*)(v9 + 232) = 0;
    *(_QWORD*)(v9 + 240) = 0;
    *(_QWORD*)(v9 + 248) = 0;
    *(_QWORD*)(v9 + 256) = 0;
    *(_BYTE*)(v9 + 264) = 0;
    v11 = (__int64*)a2[2];
    v10 = a2[3];
    if ((unsigned __int64)v11 >= v10) {
      v13 = a2[1];
      v14 = (__int64)v11 - v13;
      v15 = (v14 >> 3) + 1;
      if (v15 >> 61 != 0) {
        GameRoutine_1072a0();
      }
      v16 = v10 - v13;
      v17 = v16 >> 2;
      if (v16 >> 2 <= v15) {
        v17 = (v14 >> 3) + 1;
      }
      if ((unsigned __int64)v16 >= 0x7FFFFFFFFFFFFFF8LL) {
        v18 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v18 = v17;
      }
      v19 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v8 + 16LL))(
          *v8, 8 * v18, 32);
      v20 = (__int64*)(v19 + v14);
      *v20 = v9;
      v12 = v19 + v14 + 8;
      v21 = (char*)a2[1];
      v22 = (char*)a2[2];
      v23 = (__int64*)((char*)v20 + ((char*)v21 - (char*)v22));
      if (v22 != v21) {
        v24 = v23;
        do {
          v25 = *(_QWORD*)v21;
          v21 += 8;
          *v24++ = v25;
        } while (v21 != v22);
        v21 = (char*)a2[1];
      }
      a2[1] = v23;
      a2[2] = v12;
      a2[3] = v19 + 8 * v18;
      if (v21 != nullptr) {
        (*(void (**)(__int64))(*(_QWORD*)*v8 + 24LL))(*v8);
      }
    }
    else {
      *v11 = v9;
      v12 = (__int64)(v11 + 1);
    }
    a2[2] = v12;
    return *(_QWORD*)(v12 - 8);
  }
  return result;
}

__int64 snd_10ec00(_QWORD* a1, _DWORD* a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  _QWORD* v10;
  _QWORD* v11;
  unsigned __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  char* v23;
  char* v24;
  _QWORD* v25;
  _QWORD* v26;
  __int64 v27;
  __int64* v28;
  unsigned int v29;
  char* v30;
  struct {
    __int64 v32;
    char gap8_[4];
    unsigned int v33;
  } v32_;

  nn_os_LockMutex((__int64)GameData_2134528[0]);
  v4 = (__int64*)a1[4];
  v5 = a1[5] - (_QWORD)v4;
  if (v5 != 0) {
    v6 = v5 >> 3;
    while (1) {
      v8 = *v4++;
      v7 = v8;
      if (*(_DWORD*)(v8 + 8) == 0) {
        break;
      }
      if (--v6 == 0) {
        goto LABEL_5;
      }
    }
  }
  else {
  LABEL_5:
    v9 = snd_g_memory_ptr[0];
    v10 = (_QWORD*)(*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 24, 32);
    *v10 = 0;
    v10[1] = 0;
    v10[2] = 0;
    v11 = v10;
    v13 = (_QWORD*)a1[5];
    v12 = a1[6];
    if ((unsigned __int64)v13 >= v12) {
      v15 = a1[4];
      v16 = (__int64)v13 - v15;
      v17 = (v16 >> 3) + 1;
      if (v17 >> 61 != 0) {
        GameRoutine_10fd50();
      }
      v18 = v12 - v15;
      v19 = v18 >> 2;
      if (v18 >> 2 <= v17) {
        v19 = (v16 >> 3) + 1;
      }
      if ((unsigned __int64)v18 >= 0x7FFFFFFFFFFFFFF8LL) {
        v20 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v20 = v19;
      }
      v21 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v9 + 16LL))(
          *v9, 8 * v20, 32);
      v22 = (_QWORD*)(v21 + v16);
      *v22 = v11;
      v14 = v21 + v16 + 8;
      v23 = (char*)a1[4];
      v24 = (char*)a1[5];
      v25 = (_QWORD*)((char*)v22 + ((char*)v23 - (char*)v24));
      if (v24 != v23) {
        v26 = v25;
        do {
          v27 = *(_QWORD*)v23;
          v23 += 8;
          *v26++ = v27;
        } while (v23 != v24);
        v23 = (char*)a1[4];
      }
      a1[4] = v25;
      a1[5] = v14;
      a1[6] = v21 + 8 * v20;
      if (v23 != nullptr) {
        (*(void (**)(__int64))(*(_QWORD*)*v9 + 24LL))(*v9);
      }
    }
    else {
      *v13 = v10;
      v14 = (__int64)(v13 + 1);
    }
    a1[5] = v14;
    v7 = *(_QWORD*)(v14 - 8);
  }
  *(_DWORD*)(v7 + 8) = *(_DWORD*)a2;
  *(_DWORD*)(v7 + 12) = a2[1];
  v28 = snd_s_target_ptr;
  v29 = (*(__int64 (**)(_QWORD, _DWORD*, unsigned int*, __int64*))(
      *(_QWORD*)*snd_s_target_ptr + 176LL))(*snd_s_target_ptr, a2, &v32_.v33,
                                            &v32_.v32);
  v30 = (char*)(*(__int64 (**)(__int64, _QWORD, _QWORD, __int64))(
      *(_QWORD*)*v28 + 192LL))(*v28, v29, v32_.v33, v32_.v32);
  *(_QWORD*)v7 = snd_10ede0(a1, v30);
  nn_os_UnlockMutex((__int64)&GameData_2178e70);
  return v7;
}

__int64 snd_10ede0(_QWORD* a1, char* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  char* v27;
  char* v28;
  _QWORD* v29;
  _QWORD* v30;
  __int64 v31;
  struct {
    __int64 v33;
    int v34;
  } v33_;

  nn_os_LockMutex((__int64)GameData_2134528[0]);
  v5 = a1[1];
  v4 = a1[2];
  if (v4 == v5) {
  LABEL_20:
    v14 = snd_g_memory_ptr[0];
    v15 = (*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 48, 32);
    *(_QWORD*)v15 = 0;
    *(_QWORD*)(v15 + 8) = 0;
    *(_QWORD*)(v15 + 16) = 0;
    *(_QWORD*)(v15 + 32) = 0;
    *(_QWORD*)(v15 + 40) = 0;
    *(_QWORD*)(v15 + 24) = 0;
    GameRoutine_190020((__int64*)v15, &GameData_1a9f09e);
    *(_QWORD*)(v15 + 24) = 0;
    *(_DWORD*)(v15 + 40) = 0;
    *(_BYTE*)(v15 + 44) = 0;
    *(_DWORD*)(v15 + 32) = 0x2000;
    GameRoutine_190200(v15, &GameData_1a9f09e);
    v33_.v33 = 0;
    v33_.v34 = 0x2000;
    GameRoutine_112180(v15 + 24, (__int64)&v33_.v33);
    *(_DWORD*)(v15 + 40) = 0;
    *(_BYTE*)(v15 + 44) = 0;
    v17 = (__int64*)a1[2];
    v16 = a1[3];
    if ((unsigned __int64)v17 >= v16) {
      v19 = a1[1];
      v20 = (__int64)v17 - v19;
      v21 = (v20 >> 3) + 1;
      if (v21 >> 61 != 0) {
        GameRoutine_10fb80();
      }
      v22 = v16 - v19;
      v23 = v22 >> 2;
      if (v22 >> 2 <= v21) {
        v23 = (v20 >> 3) + 1;
      }
      if ((unsigned __int64)v22 >= 0x7FFFFFFFFFFFFFF8LL) {
        v24 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v24 = v23;
      }
      v25 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v14 + 16LL))(
          *v14, 8 * v24, 32);
      v26 = (__int64*)(v25 + v20);
      *v26 = v15;
      v18 = v25 + v20 + 8;
      v27 = (char*)a1[1];
      v28 = (char*)a1[2];
      v29 = (__int64*)((char*)v26 + ((char*)v27 - (char*)v28));
      if (v28 != v27) {
        v30 = v29;
        do {
          v31 = *(_QWORD*)v27;
          v27 += 8;
          *v30++ = v31;
        } while (v27 != v28);
        v27 = (char*)a1[1];
      }
      a1[1] = v29;
      a1[2] = v18;
      a1[3] = v25 + 8 * v24;
      if (v27 != nullptr) {
        (*(void (**)(__int64))(*(_QWORD*)*v14 + 24LL))(*v14);
      }
    }
    else {
      *v17 = v15;
      v18 = (__int64)(v17 + 1);
    }
    a1[2] = v18;
    v7 = *(_QWORD*)(v18 - 8);
  LABEL_35:
    GameRoutine_190200(v7, a2);
    *(_DWORD*)(v7 + 40) = 1;
    *(_BYTE*)(v7 + 44) = 1;
  }
  else {
    v6 = 0;
    while (1) {
      v7 = *(_QWORD*)(v5 + 8 * v6);
      v8 = *(_DWORD*)(v7 + 40);
      if (v8 != 0) {
        v9 = strlen(a2);
        v10 = *(_BYTE*)v7 >> 1;
        if ((*(_BYTE*)v7 & 1) != 0) {
          v10 = *(_QWORD*)(v7 + 8);
        }
        if (v9 == v10) {
          v11 = v9;
          if (v9 == -1) {
            snd_a36650();
          }
          v12 = (*(_BYTE*)v7 & 1) != 0 ? *(_QWORD*)(v7 + 16) : v7 + 1;
          if (memcmp(v12, (__int64)a2, v11) == 0) {
            break;
          }
        }
      }
      if ((v4 - v5) >> 3 == ++v6) {
        v13 = 0;
        while (1) {
          v7 = *(_QWORD*)(v5 + 8 * v13);
          if (*(_DWORD*)(v7 + 40) == 0) {
            if ((snd_fnd_WeakHandle_isValid((__int64*)(v7 + 24)) & 1) == 0) {
              goto LABEL_35;
            }
            v5 = a1[1];
            v4 = a1[2];
          }
          if (++v13 >= (unsigned __int64)((v4 - v5) >> 3)) {
            goto LABEL_20;
          }
        }
      }
    }
    *(_DWORD*)(v7 + 40) = v8 + 1;
  }
  nn_os_UnlockMutex((__int64)&GameData_2178e70);
  return v7;
}

__int64 snd_10fba0(__int64 result, __int64* a2, __int64* a3,
                   unsigned __int64 a4)
{
  __int64 v5;
  char* v6;
  _QWORD* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  char* v14;
  __int64* v15;
  __int64 v16;
  char* v17;
  char* v18;
  __int64 v19;
  __int64 v20;

  v5 = *(_QWORD*)(result + 16);
  v6 = *(char**)result;
  v8 = (_QWORD*)result;
  if (a4 <= (v5 - *(_QWORD*)result) >> 3) {
    v14 = *(char**)(result + 8);
    if (a4 <= (v14 - v6) >> 3) {
      while (a2 != a3) {
        v20 = *a2++;
        *(_QWORD*)v6 = v20;
        v6 += 8;
      }
      *(_QWORD*)(result + 8) = v6;
    }
    else {
      v15 = (__int64*)((char*)a2 + ((char*)v14 - (char*)v6));
      if (v14 != v6) {
        do {
          v16 = *a2++;
          *(_QWORD*)v6 = v16;
          v6 += 8;
        } while (a2 != v15);
        v14 = *(char**)(result + 8);
      }
      v17 = v14;
      if (v15 != a3) {
        v17 = v14;
        v18 = v14;
        do {
          v19 = *v15++;
          v17 += 8;
          *(_QWORD*)v18 = v19;
          v18 += 8;
        } while (v15 != a3);
      }
      *(_QWORD*)(result + 8) = v17;
    }
  }
  else {
    if (v6 != nullptr) {
      v9 = snd_g_memory;
      v8[1] = v6;
      v10 = a4;
      (*(void (**)(__int64))(*(_QWORD*)v9 + 24LL))(v9);
      a4 = v10;
      v5 = 0;
      v8[1] = 0;
      v8[2] = 0;
      *v8 = 0;
    }
    if (a4 >> 61 != 0) {
      goto LABEL_25;
    }
    v11 = v5 >> 2;
    if (v5 >> 2 <= a4) {
      v11 = a4;
    }
    v12 = (unsigned __int64)v5 >= 0x7FFFFFFFFFFFFFF8LL ? 0x1FFFFFFFFFFFFFFFLL
                                                       : v11;
    if (v12 >> 61 != 0) {
    LABEL_25:
      GameRoutine_10fb80();
    }
    result = (*(__int64 (**)(__int64, unsigned __int64, __int64))(
        *(_QWORD*)snd_g_memory + 16LL))(snd_g_memory, 8 * v12, 32);
    *v8 = result;
    v8[1] = result;
    for (v8[2] = result + 8 * v12; a2 != a3; result += 8) {
      v13 = *a2++;
      *(_QWORD*)result = v13;
    }
    v8[1] = result;
  }
  return result;
}

__int64 snd_17bf40(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  char* v19;
  char* v20;
  _QWORD* v21;
  _QWORD* v22;
  __int64 v23;

  nn_os_LockMutex((__int64)&GameData_2199b70);
  nn_os_LockMutex((__int64)&GameData_2199b90);
  nn_os_LockMutex((__int64)&GameData_2199bb0);
  v2 = a1[4];
  v3 = a1[5] - v2;
  if (v3 != 0) {
    v4 = v3 >> 3;
    v5 = 0;
    while (*(_QWORD*)(v2 + 8 * v5) != 0) {
      if (v4 == ++v5) {
        goto LABEL_5;
      }
    }
    v7 = (*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 11160,
                                                 32);
    WavePlayer_183910(v7, (__int64)a1);
    (*(void (**)(__int64))(*(_QWORD*)v7 + 1120LL))(v7);
    *(_QWORD*)(a1[4] + 8 * v5) = v7;
  }
  else {
  LABEL_5:
    v6 = snd_g_memory_ptr[0];
    v7 = (*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 11160,
                                                 32);
    WavePlayer_183910(v7, (__int64)a1);
    (*(void (**)(__int64))(*(_QWORD*)v7 + 1120LL))(v7);
    v9 = (__int64*)a1[5];
    v8 = a1[6];
    if ((unsigned __int64)v9 >= v8) {
      v11 = a1[4];
      v12 = (__int64)v9 - v11;
      v13 = (v12 >> 3) + 1;
      if (v13 >> 61 != 0) {
        GameRoutine_17cb10();
      }
      v14 = v8 - v11;
      v15 = v14 >> 2;
      if (v14 >> 2 <= v13) {
        v15 = (v12 >> 3) + 1;
      }
      if ((unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFF8LL) {
        v16 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v16 = v15;
      }
      v17 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v6 + 16LL))(
          *v6, 8 * v16, 32);
      v18 = (__int64*)(v17 + v12);
      *v18 = v7;
      v10 = v17 + v12 + 8;
      v19 = (char*)a1[4];
      v20 = (char*)a1[5];
      v21 = (__int64*)((char*)v18 + ((char*)v19 - (char*)v20));
      if (v20 != v19) {
        v22 = v21;
        do {
          v23 = *(_QWORD*)v19;
          v19 += 8;
          *v22++ = v23;
        } while (v19 != v20);
        v19 = (char*)a1[4];
      }
      a1[4] = v21;
      a1[5] = v10;
      a1[6] = v17 + 8 * v16;
      if (v19 != nullptr) {
        (*(void (**)(__int64))(*(_QWORD*)*v6 + 24LL))(*v6);
      }
    }
    else {
      *v9 = v7;
      v10 = (__int64)(v9 + 1);
    }
    a1[5] = v10;
  }
  nn_os_UnlockMutex((__int64)&GameData_2199bb0);
  nn_os_UnlockMutex((__int64)&GameData_2199b90);
  nn_os_UnlockMutex((__int64)&GameData_2199b70);
  return v7;
}

_QWORD* snd_17c140(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  unsigned __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  char* v19;
  char* v20;
  _QWORD* v21;
  _QWORD* v22;
  __int64 v23;

  nn_os_LockMutex((__int64)&GameData_2199b70);
  nn_os_LockMutex((__int64)&GameData_2199b90);
  nn_os_LockMutex((__int64)&GameData_2199bb0);
  v2 = a1[4];
  v3 = a1[5] - v2;
  if (v3 != 0) {
    v4 = v3 >> 3;
    v5 = 0;
    while (*(_QWORD*)(v2 + 8 * v5) != 0) {
      if (v4 == ++v5) {
        goto LABEL_5;
      }
    }
    v7 = (_QWORD*)(*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 11160,
                                                 32);
    GameRoutine_189e50(v7, (__int64)a1);
    (*(void (**)(_QWORD*))(*v7 + 1120LL))(v7);
    *(_QWORD*)(a1[4] + 8 * v5) = v7;
  }
  else {
  LABEL_5:
    v6 = snd_g_memory_ptr[0];
    v7 = (_QWORD*)(*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 11160,
                                                 32);
    GameRoutine_189e50(v7, (__int64)a1);
    (*(void (**)(_QWORD*))(*v7 + 1120LL))(v7);
    v9 = (_QWORD*)a1[5];
    v8 = a1[6];
    if ((unsigned __int64)v9 >= v8) {
      v11 = a1[4];
      v12 = (__int64)v9 - v11;
      v13 = (v12 >> 3) + 1;
      if (v13 >> 61 != 0) {
        GameRoutine_17cb10();
      }
      v14 = v8 - v11;
      v15 = v14 >> 2;
      if (v14 >> 2 <= v13) {
        v15 = (v12 >> 3) + 1;
      }
      if ((unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFF8LL) {
        v16 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v16 = v15;
      }
      v17 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v6 + 16LL))(
          *v6, 8 * v16, 32);
      v18 = (_QWORD*)(v17 + v12);
      *v18 = v7;
      v10 = v17 + v12 + 8;
      v19 = (char*)a1[4];
      v20 = (char*)a1[5];
      v21 = (_QWORD*)((char*)v18 + ((char*)v19 - (char*)v20));
      if (v20 != v19) {
        v22 = v21;
        do {
          v23 = *(_QWORD*)v19;
          v19 += 8;
          *v22++ = v23;
        } while (v19 != v20);
        v19 = (char*)a1[4];
      }
      a1[4] = v21;
      a1[5] = v10;
      a1[6] = v17 + 8 * v16;
      if (v19 != nullptr) {
        (*(void (**)(__int64))(*(_QWORD*)*v6 + 24LL))(*v6);
      }
    }
    else {
      *v9 = v7;
      v10 = (__int64)(v9 + 1);
    }
    a1[5] = v10;
  }
  nn_os_UnlockMutex((__int64)&GameData_2199bb0);
  nn_os_UnlockMutex((__int64)&GameData_2199b90);
  nn_os_UnlockMutex((__int64)&GameData_2199b70);
  return v7;
}

__int64 snd_17c340(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  char* v19;
  char* v20;
  _QWORD* v21;
  _QWORD* v22;
  __int64 v23;

  nn_os_LockMutex((__int64)&GameData_2199b70);
  nn_os_LockMutex((__int64)&GameData_2199b90);
  nn_os_LockMutex((__int64)&GameData_2199bb0);
  v2 = a1[4];
  v3 = a1[5] - v2;
  if (v3 != 0) {
    v4 = v3 >> 3;
    v5 = 0;
    while (*(_QWORD*)(v2 + 8 * v5) != 0) {
      if (v4 == ++v5) {
        goto LABEL_5;
      }
    }
    v7 = (*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 11552,
                                                 32);
    GameRoutine_17ea40(v7, (__int64)a1);
    (*(void (**)(__int64))(*(_QWORD*)v7 + 1120LL))(v7);
    *(_QWORD*)(a1[4] + 8 * v5) = v7;
  }
  else {
  LABEL_5:
    v6 = snd_g_memory_ptr[0];
    v7 = (*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 11552,
                                                 32);
    GameRoutine_17ea40(v7, (__int64)a1);
    (*(void (**)(__int64))(*(_QWORD*)v7 + 1120LL))(v7);
    v9 = (__int64*)a1[5];
    v8 = a1[6];
    if ((unsigned __int64)v9 >= v8) {
      v11 = a1[4];
      v12 = (__int64)v9 - v11;
      v13 = (v12 >> 3) + 1;
      if (v13 >> 61 != 0) {
        GameRoutine_17cb10();
      }
      v14 = v8 - v11;
      v15 = v14 >> 2;
      if (v14 >> 2 <= v13) {
        v15 = (v12 >> 3) + 1;
      }
      if ((unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFF8LL) {
        v16 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v16 = v15;
      }
      v17 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v6 + 16LL))(
          *v6, 8 * v16, 32);
      v18 = (__int64*)(v17 + v12);
      *v18 = v7;
      v10 = v17 + v12 + 8;
      v19 = (char*)a1[4];
      v20 = (char*)a1[5];
      v21 = (__int64*)((char*)v18 + ((char*)v19 - (char*)v20));
      if (v20 != v19) {
        v22 = v21;
        do {
          v23 = *(_QWORD*)v19;
          v19 += 8;
          *v22++ = v23;
        } while (v19 != v20);
        v19 = (char*)a1[4];
      }
      a1[4] = v21;
      a1[5] = v10;
      a1[6] = v17 + 8 * v16;
      if (v19 != nullptr) {
        (*(void (**)(__int64))(*(_QWORD*)*v6 + 24LL))(*v6);
      }
    }
    else {
      *v9 = v7;
      v10 = (__int64)(v9 + 1);
    }
    a1[5] = v10;
  }
  nn_os_UnlockMutex((__int64)&GameData_2199bb0);
  nn_os_UnlockMutex((__int64)&GameData_2199b90);
  nn_os_UnlockMutex((__int64)&GameData_2199b70);
  return v7;
}

_QWORD* snd_17c540(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  unsigned __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  char* v19;
  char* v20;
  _QWORD* v21;
  _QWORD* v22;
  __int64 v23;

  nn_os_LockMutex((__int64)&GameData_2199b70);
  nn_os_LockMutex((__int64)&GameData_2199b90);
  nn_os_LockMutex((__int64)&GameData_2199bb0);
  v2 = a1[8];
  v3 = a1[9] - v2;
  if (v3 != 0) {
    v4 = v3 >> 3;
    v5 = 0;
    while (*(_QWORD*)(v2 + 8 * v5) != 0) {
      if (v4 == ++v5) {
        goto LABEL_5;
      }
    }
    v7 = (_QWORD*)(*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 168, 32);
    GameRoutine_188860(v7, (__int64)a1);
    (*(void (**)(_QWORD*))(*v7 + 16LL))(v7);
    *(_QWORD*)(a1[8] + 8 * v5) = v7;
  }
  else {
  LABEL_5:
    v6 = snd_g_memory_ptr[0];
    v7 = (_QWORD*)(*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 168, 32);
    GameRoutine_188860(v7, (__int64)a1);
    (*(void (**)(_QWORD*))(*v7 + 16LL))(v7);
    v9 = (_QWORD*)a1[9];
    v8 = a1[10];
    if ((unsigned __int64)v9 >= v8) {
      v11 = a1[8];
      v12 = (__int64)v9 - v11;
      v13 = (v12 >> 3) + 1;
      if (v13 >> 61 != 0) {
        GameRoutine_17cb30();
      }
      v14 = v8 - v11;
      v15 = v14 >> 2;
      if (v14 >> 2 <= v13) {
        v15 = (v12 >> 3) + 1;
      }
      if ((unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFF8LL) {
        v16 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v16 = v15;
      }
      v17 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v6 + 16LL))(
          *v6, 8 * v16, 32);
      v18 = (_QWORD*)(v17 + v12);
      *v18 = v7;
      v10 = v17 + v12 + 8;
      v19 = (char*)a1[8];
      v20 = (char*)a1[9];
      v21 = (_QWORD*)((char*)v18 + ((char*)v19 - (char*)v20));
      if (v20 != v19) {
        v22 = v21;
        do {
          v23 = *(_QWORD*)v19;
          v19 += 8;
          *v22++ = v23;
        } while (v19 != v20);
        v19 = (char*)a1[8];
      }
      a1[8] = v21;
      a1[9] = v10;
      a1[10] = v17 + 8 * v16;
      if (v19 != nullptr) {
        (*(void (**)(__int64))(*(_QWORD*)*v6 + 24LL))(*v6);
      }
    }
    else {
      *v9 = v7;
      v10 = (__int64)(v9 + 1);
    }
    a1[9] = v10;
  }
  nn_os_UnlockMutex((__int64)&GameData_2199bb0);
  nn_os_UnlockMutex((__int64)&GameData_2199b90);
  nn_os_UnlockMutex((__int64)&GameData_2199b70);
  return v7;
}

_QWORD* snd_17c740(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  unsigned __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  char* v19;
  char* v20;
  _QWORD* v21;
  _QWORD* v22;
  __int64 v23;

  nn_os_LockMutex((__int64)&GameData_2199b70);
  nn_os_LockMutex((__int64)&GameData_2199b90);
  nn_os_LockMutex((__int64)&GameData_2199bb0);
  v2 = a1[8];
  v3 = a1[9] - v2;
  if (v3 != 0) {
    v4 = v3 >> 3;
    v5 = 0;
    while (*(_QWORD*)(v2 + 8 * v5) != 0) {
      if (v4 == ++v5) {
        goto LABEL_5;
      }
    }
    v7 = (_QWORD*)(*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 472, 32);
    GameHr_18b120(v7, (__int64)a1);
    (*(void (**)(_QWORD*))(*v7 + 16LL))(v7);
    *(_QWORD*)(a1[8] + 8 * v5) = v7;
  }
  else {
  LABEL_5:
    v6 = snd_g_memory_ptr[0];
    v7 = (_QWORD*)(*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 472, 32);
    GameHr_18b120(v7, (__int64)a1);
    (*(void (**)(_QWORD*))(*v7 + 16LL))(v7);
    v9 = (_QWORD*)a1[9];
    v8 = a1[10];
    if ((unsigned __int64)v9 >= v8) {
      v11 = a1[8];
      v12 = (__int64)v9 - v11;
      v13 = (v12 >> 3) + 1;
      if (v13 >> 61 != 0) {
        GameRoutine_17cb30();
      }
      v14 = v8 - v11;
      v15 = v14 >> 2;
      if (v14 >> 2 <= v13) {
        v15 = (v12 >> 3) + 1;
      }
      if ((unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFF8LL) {
        v16 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v16 = v15;
      }
      v17 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v6 + 16LL))(
          *v6, 8 * v16, 32);
      v18 = (_QWORD*)(v17 + v12);
      *v18 = v7;
      v10 = v17 + v12 + 8;
      v19 = (char*)a1[8];
      v20 = (char*)a1[9];
      v21 = (_QWORD*)((char*)v18 + ((char*)v19 - (char*)v20));
      if (v20 != v19) {
        v22 = v21;
        do {
          v23 = *(_QWORD*)v19;
          v19 += 8;
          *v22++ = v23;
        } while (v19 != v20);
        v19 = (char*)a1[8];
      }
      a1[8] = v21;
      a1[9] = v10;
      a1[10] = v17 + 8 * v16;
      if (v19 != nullptr) {
        (*(void (**)(__int64))(*(_QWORD*)*v6 + 24LL))(*v6);
      }
    }
    else {
      *v9 = v7;
      v10 = (__int64)(v9 + 1);
    }
    a1[9] = v10;
  }
  nn_os_UnlockMutex((__int64)&GameData_2199bb0);
  nn_os_UnlockMutex((__int64)&GameData_2199b90);
  nn_os_UnlockMutex((__int64)&GameData_2199b70);
  return v7;
}

#pragma GCC visibility pop
