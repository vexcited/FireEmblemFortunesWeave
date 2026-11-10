#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_10e800(_QWORD);
__int64 GameRoutine_10eb50(_QWORD, _QWORD);
__int64 GameRoutine_17ca30(_QWORD);
__int64 GameRoutine_1889a0(void);
__int64 GameRoutine_18b5b0(_QWORD);
__int64 GameRoutine_18c820(_QWORD);
__int64 GameRoutine_190200(_QWORD, _QWORD);
__int64 WaveReader_188ee0(__int64);
__int64 WaveReader_Destructor(__int64);
__int64 WaveReader_Unknown3(__int64 result);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
extern __int64 snd_g_proxy_ptr[2];
extern __int64* GameData_2134c80[3];
extern __int64* snd_g_memory_ptr[2];
__int64 WaveStreamReader_Destructor(_QWORD* a1);
__int64 WaveStreamReader_Unknown2(__int64 a1);
__int64 WaveStreamReader_Unknown3(__int64 a1);
__int64 WaveStreamReader_Unknown5(__int64 a1);
__int64 WaveStreamReader_18b6d0(__int64 a1);
__int64 WaveStreamReader_Unknown6(__int64 a1, __int64 a2, char a3, char a4,
                                  char a5);
__int64 WaveStreamReader_Unknown8(__int64 a1, int a2, int a3);
__int64 WaveStreamReader_Unknown9(__int64 a1, __int64 a2, int a3, __int64 a4,
                                  __int64 a5, __int64 a6);
bool WaveStreamReader_Unknown11(__int64 a1, int a2);
__int64 WaveStreamReader_Unknown13(__int64 a1);
__int64 WaveStreamReader_Unknown14(__int64 a1, int a2);
bool WaveStreamReader_GetSubTypeCount(__int64 a1, int a2, int a3, int a4);
__int64 WaveStreamReader_18d1e0(__int64 a1);
__int64 WaveStreamReader_Unknown10(__int64 a1, __int64 a2, int a3, __int64 a4,
                                   __int64 a5, __int64 a6);
__attribute__((swiftcall)) void FileManager_10df70(PSEUDO_X8, __int64, __int64,
                                                   unsigned int);
__int64 Crc32List_1163b0();
__int64 GameRoutine_10ede0(_QWORD*, char*);
__int64 GameRoutine_112180(__int64, __int64);
__int64 GameRoutine_118ff0(_QWORD);
__int64 GameRoutine_190240(__int64);
__int64 WaveReader_10e800();
__int64 snd_fnd_WeakHandle_get_alt1(__int64) __asm__("snd_fnd_WeakHandle_get");
__int64
snd_fnd_WeakHandle_isValid_alt1(__int64*) __asm__("snd_fnd_WeakHandle_isValid");
__n128 nn_os_UnlockMutex_alt1(_QWORD) __asm__("nn_os_UnlockMutex");
__int64 WaveStreamReader_18b5b0(__int64 a1);
void WaveStreamReader_18c820(__int64 a1);

__int64 WaveStreamReader_Destructor(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64* v4;
  void (***v5)(_QWORD);
  void (***v6)(_QWORD);
  void (***v7)(_QWORD);
  __int64 v8;
  __int64 v9;

  v2 = GameData_2134c80[0];
  v3 = a1[21];
  a1[21] = 0;
  *a1 = v2 + 2;
  v4 = snd_g_memory_ptr[0];
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
      *snd_g_memory_ptr[0], v3);
  v5 = (void (***)(_QWORD))a1[53];
  a1[53] = 0;
  (**v5)(v5);
  (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v4 + 24LL))(*v4, v5);
  v6 = (void (***)(_QWORD))a1[54];
  a1[54] = 0;
  (**v6)(v6);
  (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v4 + 24LL))(*v4, v6);
  v7 = (void (***)(_QWORD))a1[55];
  a1[55] = 0;
  (**v7)(v7);
  (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v4 + 24LL))(*v4, v7);
  if (a1[57] != 0) {
    v8 = *v4;
    a1[57] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v8 + 24LL))(v8);
  }
  if (a1[58] != 0) {
    v9 = *v4;
    a1[58] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v9 + 24LL))(v9);
  }
  return WaveReader_Destructor((__int64)a1);
}

__int64 WaveStreamReader_Unknown2(__int64 a1)
{
  __int64 v2;
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
  __int64 v16;
  __int64 result;

  GameRoutine_1889a0();
  v2 = *(_QWORD*)(a1 + 424);
  v3 = *(_QWORD*)(v2 + 32);
  *(_DWORD*)(v2 + 24) = 0;
  *(_QWORD*)(v2 + 8) = 0;
  *(_QWORD*)(v2 + 16) = 0;
  memset(v3, 0, 0x20000, v4, v5, v6);
  *(_BYTE*)(v2 + 40) = 0;
  v7 = *(_QWORD*)(a1 + 432);
  v8 = *(_QWORD*)(v7 + 32);
  *(_QWORD*)(v7 + 8) = 0;
  *(_QWORD*)(v7 + 16) = 0;
  *(_DWORD*)(v7 + 24) = 0;
  memset(v8, 0, 0x20000, v9, v10, v11);
  *(_BYTE*)(v7 + 40) = 0;
  v12 = *(_QWORD*)(a1 + 440);
  v13 = *(_QWORD*)(v12 + 32);
  *(_QWORD*)(v12 + 8) = 0;
  *(_QWORD*)(v12 + 16) = 0;
  *(_DWORD*)(v12 + 24) = 0;
  result = memset(v13, 0, 0x20000, v14, v15, v16);
  *(_BYTE*)(v12 + 40) = 0;
  *(_DWORD*)(a1 + 448) = 0;
  return result;
}

__int64 WaveStreamReader_Unknown3(__int64 a1)
{
  nn_os_LockMutex(a1 + 120);
  WaveReader_Unknown3(a1);
  *(_DWORD*)(a1 + 272) = 0;
  *(_DWORD*)(a1 + 72) = 0;
  return nn_os_UnlockMutex(a1 + 120);
}

__int64 WaveStreamReader_Unknown5(__int64 a1)
{
  int v2;
  char v3;

  nn_os_LockMutex(a1 + 88);
  v2 = *(_DWORD*)(a1 + 72);
  switch (v2) {
  case 6:
    if ((WaveReader_188ee0(a1) & 1) != 0) {
      GameRoutine_18c820(a1);
    }
    else {
      WaveStreamReader_18d1e0(a1);
    }
    goto LABEL_10;
  case 5:
    v3 = WaveStreamReader_18b6d0(a1);
    break;
  case 4:
    GameRoutine_18b5b0(a1);
  LABEL_10:
    v3 = 1;
    break;
  default:
    v3 = 0;
    break;
  }
  nn_os_UnlockMutex(a1 + 88);
  return v3 & 1;
}

__int64 WaveStreamReader_18b5b0(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _BYTE v10[16];

  if (*(_BYTE*)(a1 + 40) == 1) {
    v2 = (_QWORD*)WaveReader_10e800();
    v3 = (char*)GameRoutine_190240(a1 + 16);
    result = GameRoutine_10ede0(v2, v3);
    *(_QWORD*)(a1 + 48) = result;
    if (result != 0) {
      *(_DWORD*)(a1 + 72) = 5;
      return result;
    }
  }
  else {
    v5 = Crc32List_1163b0();
    v6 = GameRoutine_118ff0(v5);
    v7 = GameRoutine_190240(a1 + 16);
    FileManager_10df70((void*)((__int64)v10), v6, v7, 0x40u);
    GameRoutine_112180(a1 + 56, (__int64)v10);
    result = snd_fnd_WeakHandle_isValid_alt1((__int64*)(a1 + 56));
    if ((result & 1) != 0) {
      v8 = snd_fnd_WeakHandle_get_alt1(a1 + 56);
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 88LL))(v8);
      if ((result & 1) != 0) {
        **(_DWORD**)(a1 + 168) = 0;
        *(_DWORD*)(*(_QWORD*)(a1 + 168) + 4LL) = 0x8000;
        v9 = snd_fnd_WeakHandle_get_alt1(a1 + 56);
        result = (*(__int64 (**)(__int64, __int64, _QWORD, __int64))(
            *(_QWORD*)v9 + 96LL))(v9, *(_QWORD*)(a1 + 168) + 12LL, 0, 0x8000);
        *(_DWORD*)(a1 + 72) = 3;
        return result;
      }
    }
  }
  *(_DWORD*)(a1 + 72) = 7;
  return result;
}

__int64 WaveStreamReader_18b6d0(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;

  if (*(_BYTE*)(a1 + 40) != 1) {
    return 1;
  }
  v1 = *(_QWORD*)(a1 + 48);
  if (v1 == 0 || (snd_fnd_WeakHandle_isValid(v1 + 24) & 1) == 0) {
    return 1;
  }
  v3 = snd_fnd_WeakHandle_get(*(_QWORD*)(a1 + 48) + 24LL);
  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 64LL))(v3);
  if ((v4 & 1) != 0) {
    *(_DWORD*)(a1 + 72) = 7;
    return 0;
  }
  v6 = GameRoutine_10e800(v4);
  if ((GameRoutine_10eb50(v6, *(_QWORD*)(a1 + 48)) & 1) == 0) {
    return 1;
  }
  **(_DWORD**)(a1 + 168) = 0;
  *(_DWORD*)(*(_QWORD*)(a1 + 168) + 4LL) = 0x8000;
  v7 = snd_fnd_WeakHandle_get(*(_QWORD*)(a1 + 48) + 24LL);
  (*(void (**)(__int64, __int64, _QWORD, __int64))(*(_QWORD*)v7 + 96LL))(
      v7, *(_QWORD*)(a1 + 168) + 12LL, 0, 0x8000);
  *(_DWORD*)(a1 + 72) = 3;
  return 0;
}

__int64 WaveStreamReader_Unknown6(__int64 a1, __int64 a2, char a3, char a4,
                                  char a5)
{
  __int64 v10;

  nn_os_LockMutex(a1 + 120);
  GameRoutine_190200(a1 + 16, a2);
  *(_BYTE*)(a1 + 40) = a3;
  *(_BYTE*)(a1 + 41) = a4;
  *(_BYTE*)(a1 + 43) = a5;
  if ((a3 & 1) == 0 && (a5 & 1) != 0) {
    (*(void (**)(_QWORD, const char*))(**(_QWORD**)snd_g_proxy_ptr[0] + 392LL))(
        *(_QWORD*)snd_g_proxy_ptr[0],
        "#SoundLibrary : scrub play needed on memory option.\n");
    *(_BYTE*)(a1 + 40) = 1;
  }
  v10 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(a1 + 72) = 4;
  GameRoutine_17ca30(v10);
  return nn_os_UnlockMutex(a1 + 120);
}

__int64 WaveStreamReader_Unknown8(__int64 a1, int a2, int a3)
{
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  if (a3 == 1) {
    v5 = *(_QWORD*)(a1 + 48);
    v6 = a1 + 56;
    if (v5 != 0) {
      v8 = v5 + 24;
    }
    else {
      v8 = a1 + 56;
    }
    v9 = snd_fnd_WeakHandle_get(v8);
    v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 80LL))(v9);
    v4 = (v10 + a2) & ~((v10 + a2) >> 31);
    v11 = *(_QWORD*)(a1 + 48);
  }
  else {
    if (a3 != 0) {
      v4 = (*(_DWORD*)(a1 + 76) + a2) & ~((*(_DWORD*)(a1 + 76) + a2) >> 31);
    }
    else {
      v4 = a2 & ~(a2 >> 31);
    }
    v11 = *(_QWORD*)(a1 + 48);
    v6 = a1 + 56;
  }
  *(_DWORD*)(a1 + 76) = v4;
  if (v11 != 0) {
    v12 = v11 + 24;
  }
  else {
    v12 = v6;
  }
  v13 = snd_fnd_WeakHandle_get(v12);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 80LL))(v13);
  if (v4 > (int)result) {
    v15 = *(_QWORD*)(a1 + 48);
    if (v15 != 0) {
      v16 = v15 + 24;
    }
    else {
      v16 = v6;
    }
    v17 = snd_fnd_WeakHandle_get(v16);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 80LL))(v17);
    *(_DWORD*)(a1 + 76) = result;
  }
  return result;
}

__int64 WaveStreamReader_Unknown9(__int64 a1, __int64 a2, int a3, __int64 a4,
                                  __int64 a5, __int64 a6)
{
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  _DWORD* v18;
  int v19;
  int v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;

  if (*(_DWORD*)(a1 + 72) == 7) {
    memset(a2, 0, a3, a4, a5, a6);
    v8 = (*(_DWORD*)(a1 + 76) + a3) & ~((*(_DWORD*)(a1 + 76) + a3) >> 31);
    v9 = *(_QWORD*)(a1 + 48);
    *(_DWORD*)(a1 + 76) = v8;
    if (v9 != 0) {
      v10 = v9 + 24;
    }
    else {
      v10 = a1 + 56;
    }
    v11 = snd_fnd_WeakHandle_get(v10);
    v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 80LL))(v11);
    result = 0;
    if (v8 > v12) {
      v14 = *(_QWORD*)(a1 + 48);
      if (v14 != 0) {
        v15 = v14 + 24;
      }
      else {
        v15 = a1 + 56;
      }
      v16 = snd_fnd_WeakHandle_get(v15);
      v17 = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 80LL))(v16);
      result = 0;
      *(_DWORD*)(a1 + 76) = v17;
    }
  }
  else {
    v18 = *(_DWORD**)(a1 + 168);
    v19 = *(_DWORD*)(a1 + 76) - *v18;
    if (v19 >= 0 && (v20 = v18[1], v19 + a3 <= v20)) {
      v21 = (__int64)v18 + (unsigned int)v19 + 12;
      if (v19 >= v20) {
        v21 = 0;
      }
      memcpy(a2, v21, a3);
      v22 = (*(_DWORD*)(a1 + 76) + a3) & ~((*(_DWORD*)(a1 + 76) + a3) >> 31);
      v23 = *(_QWORD*)(a1 + 48);
      *(_DWORD*)(a1 + 76) = v22;
      if (v23 != 0) {
        v24 = v23 + 24;
      }
      else {
        v24 = a1 + 56;
      }
      v25 = snd_fnd_WeakHandle_get(v24);
      if (v22 > (*(int (**)(__int64))(*(_QWORD*)v25 + 80LL))(v25)) {
        v26 = *(_QWORD*)(a1 + 48);
        if (v26 != 0) {
          v27 = v26 + 24;
        }
        else {
          v27 = a1 + 56;
        }
        v28 = snd_fnd_WeakHandle_get(v27);
        *(_DWORD*)(a1 + 76) =
            (*(__int64 (**)(__int64))(*(_QWORD*)v28 + 80LL))(v28);
      }
      return 1;
    }
    else {
      *(_DWORD*)(a1 + 72) = 7;
      return 0;
    }
  }
  return result;
}

__int64 WaveStreamReader_Unknown10(__int64 a1, __int64 a2, int a3, __int64 a4,
                                   __int64 a5, __int64 a6)
{
  __int64 v7;

  if (*(_DWORD*)(a1 + 72) == 7) {
    memset(a2, 0, a3, a4, a5, a6);
    return 0;
  }
  else {
    v7 = *(_QWORD*)(a1 + 168);
    if (a3 <= *(_DWORD*)(v7 + 4)) {
      memcpy(a2, v7 + 12, a3);
      return 1;
    }
    else {
      *(_DWORD*)(a1 + 72) = 7;
      return 0;
    }
  }
}

bool WaveStreamReader_Unknown11(__int64 a1, int a2)
{
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  bool v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  _DWORD* v22;
  int v23;
  int v24;
  int v25;
  int v26;
  _DWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  char v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  int v35;
  int v36;
  int v37;
  _DWORD* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned int v44;
  int v45;
  __int64 v46;

  nn_os_LockMutex(a1 + 120);
  v4 = *(int*)(a1 + 448);
  v5 = *(_QWORD*)(a1 + 8 * v4 + 424);
  v6 = *(_DWORD*)(v5 + 12);
  if (v6 != 0) {
    v7 = *(_DWORD*)(v5 + 8);
    v8 = *(_DWORD*)(a1 + 76);
    v12 = v7 <= v8;
    v9 = v7 + v6;
    v10 = v8 + a2;
    v11 = v7 + 0x20000;
    v12 = !v12 || v9 < v10;
    if (!v12) {
      v32 = *(_QWORD*)(a1 + 48);
      if (v32 != 0) {
        v33 = v32 + 24;
      }
      else {
        v33 = a1 + 56;
      }
      v34 = snd_fnd_WeakHandle_get(v33);
      v35 = (*(__int64 (**)(__int64))(*(_QWORD*)v34 + 80LL))(v34);
      v17 = *(_DWORD*)(a1 + 80);
      if (v11 < v35) {
        v17 = v11;
      }
      v18 = (*(int*)(a1 + 448) + 1LL) % 3uLL;
      v19 = *(_DWORD*)(a1 + 412);
      if (v19 >= 1) {
        v36 = *(_DWORD*)(a1 + 416);
        v37 = *(_DWORD*)(a1 + 412);
        do {
          v38 = (_DWORD*)(a1 + 284 + 16LL * v36);
          if (*v38 == v17 && v38[1] == 0x20000 && v38[3] == v18) {
            goto LABEL_43;
          }
          --v37;
          v36 = ((_BYTE)v36 + 1) & 7;
        } while (v37 != 0);
      }
    LABEL_40:
      if ((unsigned int)v19 <= 7) {
        v39 = *(int*)(a1 + 420);
        *(_DWORD*)(a1 + 412) = v19 + 1;
        v40 = a1 + 284 + 16 * v39;
        *(_DWORD*)v40 = v17;
        *(_QWORD*)(v40 + 4) = 0x20000;
        v41 = *(int*)(a1 + 420);
        v42 = a1 + 284 + 16 * v41;
        v31 = v41 + 1;
        *(_DWORD*)(v42 + 12) = v18;
        goto LABEL_42;
      }
      goto LABEL_45;
    }
    v13 = *(_QWORD*)(a1 + 48);
    if (v13 != 0) {
      v14 = v13 + 24;
    }
    else {
      v14 = a1 + 56;
    }
    v15 = snd_fnd_WeakHandle_get(v14);
    v16 = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 80LL))(v15);
    v17 = *(_DWORD*)(a1 + 80);
    if (v11 < v16) {
      v17 = v11;
    }
    v18 = (*(int*)(a1 + 448) + 1LL) % 3uLL;
    v19 = *(_DWORD*)(a1 + 412);
    if (v19 < 1) {
      goto LABEL_40;
    }
    v20 = *(_DWORD*)(a1 + 416);
    v21 = *(_DWORD*)(a1 + 412);
    while (1) {
      v22 = (_DWORD*)(a1 + 284 + 16LL * v20);
      if (*v22 == v17 && v22[1] == 0x20000 && v22[3] == v18) {
        break;
      }
      --v21;
      v20 = ((_BYTE)v20 + 1) & 7;
      if (v21 == 0) {
        goto LABEL_40;
      }
    }
  }
  else {
    v23 = *(_DWORD*)(a1 + 76);
    v24 = *(_DWORD*)(a1 + 412);
    if (v24 < 1) {
    LABEL_26:
      if ((unsigned int)v24 <= 7) {
        v28 = *(int*)(a1 + 420);
        *(_DWORD*)(a1 + 412) = v24 + 1;
        v29 = a1 + 284 + 16 * v28;
        *(_DWORD*)v29 = v23;
        *(_QWORD*)(v29 + 4) = 0x20000;
        v30 = *(int*)(a1 + 420);
        *(_DWORD*)(a1 + 284 + 16 * v30 + 12) = v4;
        v31 = v30 + 1;
      LABEL_42:
        v43 = *(_QWORD*)(a1 + 8);
        *(_DWORD*)(a1 + 420) = v31 & 7;
        *(_DWORD*)(a1 + 72) = 6;
        GameRoutine_17ca30(v43);
        goto LABEL_43;
      }
    LABEL_45:
      (*(void (**)(_QWORD, const char*))(**(_QWORD**)snd_g_proxy_ptr[0] +
                                         392LL))(
          *(_QWORD*)snd_g_proxy_ptr[0],
          "#SoundLibrary : WaveStreamReader request Q overflow !!\n");
      v44 = *(_DWORD*)(a1 + 272);
      if (v44 < 8) {
        goto LABEL_44;
      }
    LABEL_46:
      (*(void (**)(_QWORD, const char*))(**(_QWORD**)snd_g_proxy_ptr[0] +
                                         392LL))(
          *(_QWORD*)snd_g_proxy_ptr[0],
          "#SoundLibrary : WaveStreamReader request buffer overflow !!\n");
      goto LABEL_47;
    }
    v25 = *(_DWORD*)(a1 + 416);
    v26 = *(_DWORD*)(a1 + 412);
    while (1) {
      v27 = (_DWORD*)(a1 + 284 + 16LL * v25);
      if (*v27 == v23 && v27[1] == 0x20000 && v27[3] == (_DWORD)v4) {
        break;
      }
      --v26;
      v25 = ((_BYTE)v25 + 1) & 7;
      if (v26 == 0) {
        goto LABEL_26;
      }
    }
  }

LABEL_43:
  v44 = *(_DWORD*)(a1 + 272);
  if (v44 >= 8) {
    goto LABEL_46;
  }

LABEL_44:
  v45 = *(_DWORD*)(a1 + 280);
  v46 = a1 + 12LL * v45;
  *(_DWORD*)(v46 + 176) = *(_DWORD*)(a1 + 76);
  *(_DWORD*)(v46 + 180) = a2;
  *(_DWORD*)(a1 + 280) = ((_BYTE)v45 + 1) & 7;
  ++*(_DWORD*)(a1 + 272);

LABEL_47:
  nn_os_UnlockMutex(a1 + 120);
  return v44 < 8;
}

__int64 WaveStreamReader_Unknown13(__int64 a1)
{
  __int64 v2;
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
  __int64 v16;
  __int64 v17;

  nn_os_LockMutex(a1 + 88);
  nn_os_LockMutex(a1 + 120);
  v2 = *(_QWORD*)(a1 + 424);
  *(_DWORD*)(a1 + 420) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_DWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 412) = 0;
  v3 = *(_QWORD*)(v2 + 32);
  *(_QWORD*)(v2 + 8) = 0;
  *(_QWORD*)(v2 + 16) = 0;
  *(_DWORD*)(v2 + 24) = 0;
  memset(v3, 0, 0x20000, v4, v5, v6);
  *(_BYTE*)(v2 + 40) = 0;
  v7 = *(_QWORD*)(a1 + 432);
  v8 = *(_QWORD*)(v7 + 32);
  *(_QWORD*)(v7 + 8) = 0;
  *(_QWORD*)(v7 + 16) = 0;
  *(_DWORD*)(v7 + 24) = 0;
  memset(v8, 0, 0x20000, v9, v10, v11);
  *(_BYTE*)(v7 + 40) = 0;
  v12 = *(_QWORD*)(a1 + 440);
  v13 = *(_QWORD*)(v12 + 32);
  *(_QWORD*)(v12 + 8) = 0;
  *(_QWORD*)(v12 + 16) = 0;
  *(_DWORD*)(v12 + 24) = 0;
  memset(v13, 0, 0x20000, v14, v15, v16);
  *(_BYTE*)(v12 + 40) = 0;
  *(_DWORD*)(a1 + 448) = 0;
  v17 = *(_QWORD*)(a1 + 160);
  *(_DWORD*)(a1 + 76) = 0;
  if (v17 != 0) {
    *(_DWORD*)(v17 + 68) = 0;
  }
  *(_DWORD*)(a1 + 72) = 0;
  nn_os_UnlockMutex(a1 + 120);
  return nn_os_UnlockMutex(a1 + 88);
}

__int64 WaveStreamReader_Unknown14(__int64 a1, int a2)
{
  int v4;
  int v5;
  int v6;
  int v7;
  _DWORD* v8;
  int v9;
  __int64 v10;
  _DWORD* v11;
  __int64 v12;
  __int64 v13;

  nn_os_LockMutex(a1 + 120);
  v4 = *(_DWORD*)(a1 + 448);
  v5 = *(_DWORD*)(a1 + 412);
  if (v5 < 1) {
  LABEL_11:
    if ((unsigned int)v5 > 7) {
      (*(void (**)(_QWORD, const char*))(**(_QWORD**)snd_g_proxy_ptr[0] +
                                         392LL))(
          *(_QWORD*)snd_g_proxy_ptr[0],
          "#SoundLibrary : WaveStreamReader request Q overflow !!\n");
    }
    else {
      v10 = *(int*)(a1 + 420);
      *(_DWORD*)(a1 + 412) = v5 + 1;
      v11 = (_DWORD*)(a1 + 284 + 16 * v10);
      v11[2] = a2;
      *v11 = 0;
      v11[1] = 0x4000;
      v12 = *(int*)(a1 + 420);
      *(_DWORD*)(a1 + 284 + 16 * v12 + 12) = v4;
      v13 = *(_QWORD*)(a1 + 8);
      *(_DWORD*)(a1 + 420) = ((_BYTE)v12 + 1) & 7;
      *(_DWORD*)(a1 + 72) = 6;
      GameRoutine_17ca30(v13);
    }
  }
  else {
    v6 = *(_DWORD*)(a1 + 416);
    v7 = *(_DWORD*)(a1 + 412);
    while (1) {
      v8 = (_DWORD*)(a1 + 284 + 16LL * v6);
      if (*v8 == 0) {
        v9 = v8[1];
        if (v9 != 0 &&
            (v9 == 0x4000 && v8[2] == a2 && v8[3] == v4 || v8[2] != 0)) {
          break;
        }
      }
      --v7;
      v6 = ((_BYTE)v6 + 1) & 7;
      if (v7 == 0) {
        goto LABEL_11;
      }
    }
  }
  return nn_os_UnlockMutex(a1 + 120);
}

bool WaveStreamReader_GetSubTypeCount(__int64 a1, int a2, int a3, int a4)
{
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  _DWORD* v11;
  int v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  int v17;
  int v18;
  int v20;
  int v21;
  int v22;
  _DWORD* v23;
  int v24;
  int v25;
  int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v33;
  int v34;
  _DWORD* v35;
  __int64 v36;
  int* v37;
  __int64 v38;
  unsigned int v39;
  _DWORD* v40;

  nn_os_LockMutex(a1 + 120);
  v8 = *(int*)(a1 + 448);
  v9 = *(_QWORD*)(a1 + 8 * v8 + 424);
  if (*(_DWORD*)(v9 + 12) != 0) {
    if (*(_BYTE*)(v9 + 40) != 1) {
      goto LABEL_58;
    }
    v10 = v8 + 1;
    v11 = *(_DWORD**)(a1 + 160);
    v13 = *(_DWORD*)(v9 + 20);
    v12 = *(_DWORD*)(v9 + 24);
    v14 = v11[22];
    v15 = v13 > a2 || v12 < a2;
    v16 = v10 % 3;
    v17 = *(_DWORD*)(v9 + 16) + *(_DWORD*)(v9 + 8);
    v18 = v12 + 1;
    if (!v15) {
      if (v13 <= v14 && v12 >= v14) {
        v18 = v11[23];
        v17 = v11[24];
      }
      v20 = *(_DWORD*)(a1 + 412);
      if (v20 >= 1) {
        v33 = *(_DWORD*)(a1 + 416);
        v34 = *(_DWORD*)(a1 + 412);
        do {
          v35 = (_DWORD*)(a1 + 284 + 16LL * v33);
          if (*v35 == v17 && v35[1] == 0x4000 && v35[2] == v18 &&
              v35[3] == v16) {
            goto LABEL_58;
          }
          if (*v35 == 0 && v35[1] != 0 && v35[2] != 0) {
            goto LABEL_58;
          }
          --v34;
          v33 = ((_BYTE)v33 + 1) & 7;
        } while (v34 != 0);
      }
    LABEL_55:
      if ((unsigned int)v20 <= 7) {
        v36 = *(int*)(a1 + 420);
        *(_DWORD*)(a1 + 412) = v20 + 1;
        v37 = (int*)(a1 + 284 + 16 * v36);
        v37[2] = v18;
        *v37 = v17;
        v37[1] = 0x4000;
        v31 = *(int*)(a1 + 420);
        *(_DWORD*)(a1 + 284 + 16 * v31 + 12) = v16;
        goto LABEL_57;
      }
      goto LABEL_60;
    }
    if (v13 <= v14 && v12 >= v14) {
      v18 = v11[23];
      v17 = v11[24];
    }
    v20 = *(_DWORD*)(a1 + 412);
    if (v20 < 1) {
      goto LABEL_55;
    }
    v21 = *(_DWORD*)(a1 + 416);
    v22 = *(_DWORD*)(a1 + 412);
    while (1) {
      v23 = (_DWORD*)(a1 + 284 + 16LL * v21);
      if (*v23 == v17 && v23[1] == 0x4000 && v23[2] == v18 && v23[3] == v16) {
        break;
      }
      if (*v23 == 0 && v23[1] != 0 && v23[2] != 0) {
        break;
      }
      --v22;
      v21 = ((_BYTE)v21 + 1) & 7;
      if (v22 == 0) {
        goto LABEL_55;
      }
    }
  }
  else {
    v24 = *(_DWORD*)(a1 + 412);
    v25 = *(_DWORD*)(*(_QWORD*)(a1 + 160) + 64LL);
    if (v24 < 1) {
    LABEL_36:
      if ((unsigned int)v24 <= 7) {
        v29 = *(int*)(a1 + 420);
        *(_DWORD*)(a1 + 412) = v24 + 1;
        v30 = a1 + 284 + 16 * v29;
        *(_DWORD*)v30 = v25;
        *(_QWORD*)(v30 + 4) = 0x4000;
        v31 = *(int*)(a1 + 420);
        *(_DWORD*)(a1 + 284 + 16 * v31 + 12) = v8;
      LABEL_57:
        v38 = *(_QWORD*)(a1 + 8);
        *(_DWORD*)(a1 + 420) = ((_BYTE)v31 + 1) & 7;
        *(_DWORD*)(a1 + 72) = 6;
        GameRoutine_17ca30(v38);
        goto LABEL_58;
      }
    LABEL_60:
      (*(void (**)(_QWORD, const char*))(**(_QWORD**)snd_g_proxy_ptr[0] +
                                         392LL))(
          *(_QWORD*)snd_g_proxy_ptr[0],
          "#SoundLibrary : WaveStreamReader request Q overflow !!\n");
      v39 = *(_DWORD*)(a1 + 272);
      if (v39 < 8) {
        goto LABEL_59;
      }
    LABEL_61:
      (*(void (**)(_QWORD, const char*))(**(_QWORD**)snd_g_proxy_ptr[0] +
                                         392LL))(
          *(_QWORD*)snd_g_proxy_ptr[0],
          "#SoundLibrary : WaveStreamReader request buffer overflow !!\n");
      goto LABEL_62;
    }
    v26 = *(_DWORD*)(a1 + 416);
    v27 = *(_DWORD*)(a1 + 412);
    while (1) {
      v28 = a1 + 284 + 16LL * v26;
      if (*(_DWORD*)v28 == v25 && *(_DWORD*)(v28 + 4) == 0x4000 &&
          *(_QWORD*)(v28 + 8) == __PAIR64__(v8, 0)) {
        break;
      }
      if (*(_DWORD*)v28 == 0 && *(_DWORD*)(v28 + 4) != 0 &&
          *(_DWORD*)(v28 + 8) != 0) {
        break;
      }
      --v27;
      v26 = ((_BYTE)v26 + 1) & 7;
      if (v27 == 0) {
        goto LABEL_36;
      }
    }
  }

LABEL_58:
  v39 = *(_DWORD*)(a1 + 272);
  if (v39 >= 8) {
    goto LABEL_61;
  }

LABEL_59:
  v40 = (_DWORD*)(a1 + 12LL * *(int*)(a1 + 280));
  v40[46] = a2;
  v40[44] = a4;
  v40[45] = a3;
  *(_DWORD*)(a1 + 280) = ((unsigned __int8)*(_DWORD*)(a1 + 280) + 1) & 7;
  ++*(_DWORD*)(a1 + 272);

LABEL_62:
  nn_os_UnlockMutex(a1 + 120);
  return v39 < 8;
}

void WaveStreamReader_18c820(__int64 a1)
{

#pragma clang fp contract(off)
  int v2;
  __int64 v3;
  __int64 v4;
  int* v5;
  int v6;
  signed int v7;
  int v8;
  __int64 v9;
  long double v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  signed int v25;
  signed int v26;
  __int64 v27;
  int v28;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  signed int v42;
  int v43;
  signed int v44;
  int v45;
  int v46;
  __int64 v47;
  int v48;
  int v49;
  unsigned int v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  _QWORD** v55;
  __int64 v56;
  __int64 v57;
  __int64 (*v58)(void);
  int v59;
  int v60;
  __int64 v61;
  int v62;
  __int64 v63;
  __int16* v64;
  __int64 v65;
  __int16* v66;
  __int16 v67;
  __int64 v68;
  __int64 v69;
  int v70;
  signed int v71;
  __int16* v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  __int64 v81;
  __int16* v82;
  __int16 v83;
  __int64 v84;
  __int64 v85;
  __int64 i;
  __int16 v87;
  __int64 v88;
  __int64 v89;
  __int64 j;
  __int16 v91;
  __int64 v92;
  __int64 v93;
  __int64 k;
  __int16 v95;
  __int64 v96;
  __int64 v97;
  __int64 m;
  __int16 v99;
  __int64 v100;
  __int64 v101;
  __int64 n;
  __int16 v103;
  __int64 v104;
  __int64 v105;
  __int64 ii;
  __int16 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int16 v111;
  __int64 v112;
  int v113;
  unsigned __int64 v114;
  _DWORD* v115;
  int v116;
  int v117;
  int v119;
  int v120;
  int* v121;
  __int64 v122;
  __int64 v123;
  int v124;
  int v125;
  _BYTE* v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  int v130;
  int v131;
  int v132;
  __int16* v133;
  int v134;
  int v135;

  nn_os_LockMutex(a1 + 120);
  v2 = *(_DWORD*)(a1 + 412);
  if (v2 <= 0) {
    (*(void (**)(_QWORD, const char*))(**(_QWORD**)snd_g_proxy_ptr[0] + 392LL))(
        *(_QWORD*)snd_g_proxy_ptr[0],
        "#SoundLibrary : WaveStreamReader request Q count error !!\n");
    nn_os_LockMutex(a1 + 120);
    *(_DWORD*)(a1 + 72) = 3;
    nn_os_UnlockMutex_alt1(a1 + 120);
    nn_os_UnlockMutex_alt1(a1 + 120);
    return;
  }
  v3 = a1 + 284;
  *(_DWORD*)(a1 + 412) = v2 - 1;
  v4 = *(int*)(a1 + 416);
  v5 = (int*)(a1 + 284 + 16 * v4);
  v6 = *v5;
  v7 = v5[1];
  v8 = v5[2];
  v9 = v5[3];
  *(_DWORD*)(a1 + 416) = ((_BYTE)v4 + 1) & 7;
  *(__n128*)&v10 = nn_os_UnlockMutex_alt1(a1 + 120);
  v11 = a1 + 424;
  v12 = *(_QWORD*)(a1 + 424 + 8 * v9);
  v13 = *(_DWORD*)(v12 + 8);
  if (v13 != v6) {
    if (v6 != 0) {
    LABEL_8:
      if ((*(_BYTE*)(v12 + 40) & 1) != 0) {
      LABEL_9:
        (*(void (**)(_QWORD, const char*, long double))(
            **(_QWORD**)snd_g_proxy_ptr[0] + 392LL))(
            *(_QWORD*)snd_g_proxy_ptr[0],
            "#SoundLibrary : WaveStreamReader cache already using !!\n", v10);
        goto LABEL_10;
      }
      v126 = (_BYTE*)(v12 + 40);
      if (v6 != 0) {
      LABEL_45:
        v33 = *(_QWORD*)(a1 + 48);
        if (v33 != 0) {
          v34 = v33 + 24;
        }
        else {
          v34 = a1 + 56;
        }
        v35 = snd_fnd_WeakHandle_get_alt1(v34);
        v130 = (*(__int64 (**)(__int64))(*(_QWORD*)v35 + 80LL))(v35);
        v131 = v6 + v7;
        if (v6 + v7 >= v130) {
          v36 = *(_QWORD*)(a1 + 48);
          if (v36 != 0) {
            v37 = v36 + 24;
          }
          else {
            v37 = a1 + 56;
          }
          v38 = snd_fnd_WeakHandle_get_alt1(v37);
          v7 = (*(__int64 (**)(__int64))(*(_QWORD*)v38 + 80LL))(v38)-v6;
        }
        v39 = *(_QWORD*)(a1 + 48);
        v129 = v11;
        v127 = v9;
        if (v39 != 0) {
          v40 = v39 + 24;
        }
        else {
          v40 = a1 + 56;
        }
        v41 = snd_fnd_WeakHandle_get_alt1(v40);
        (*(void (**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v41 + 96LL))(
            v41, *(_QWORD*)(a1 + 456), v6, v7);
        *(_DWORD*)(v12 + 8) = v6;
        *(_DWORD*)(v12 + 12) = v7;
        *(_DWORD*)(v12 + 20) = v8;
        *(_DWORD*)(*(_QWORD*)(a1 + 160) + 68LL) = v6;
        v42 = bswap32(**(_DWORD**)(a1 + 456)) + 8;
        if (v42 <= *(_DWORD*)(v12 + 12)) {
          v47 = *(_QWORD*)(v12 + 32);
          v48 = 0;
          v49 = 0;
          v50 = v42;
          v133 = *(__int16**)(a1 + 464);
          v51 = *(unsigned int*)(*(_QWORD*)(a1 + 160) + 32LL);
          v52 = v51 & 7;
          v53 = v51 & 0x7FFFFFF8;
          v54 = 2 * v51;
          v132 = 0x20000uLL / (2LL * (int)v51) - 960;
          while (1) {
            v55 = *(_QWORD***)(a1 + 160);
            v134 = v48;
            v43 = v49;
            v56 = v12;
            v57 = v51;
            if (*(_BYTE*)(a1 + 42) == 1) {
              v58 = *(__int64 (**)(void))(*v55[1] + 88LL);
            }
            else {
              v58 = *(__int64 (**)(void))(**v55 + 72LL);
            }
            v59 = v58();
            if (v59 != 0) {
              (*(void (**)(_QWORD, const char*, ...))(
                  **(_QWORD**)snd_g_proxy_ptr[0] + 392LL))(
                  *(_QWORD*)snd_g_proxy_ptr[0],
                  "#Sound Library : opus decode failed.[%d]", v59);
              return;
            }
            v60 = v135;
            v51 = v57;
            if ((int)v57 < 1) {
              v62 = v135;
              v12 = v56;
            }
            else {
              v12 = v56;
              if (v135 < 1) {
                v62 = v135;
              }
              else {
                if ((unsigned int)v51 >= 8) {
                  v72 = v133;
                  v73 = 1;
                  v74 = 2;
                  v75 = 3;
                  v76 = 4;
                  v61 = 0;
                  v77 = v135;
                  v78 = 5;
                  v79 = 6;
                  v80 = 7;
                  do {
                    v81 = 0;
                    v82 = v72;
                    do {
                      v83 = *v82;
                      v82 = (__int16*)((char*)v82 + v54);
                      v84 = v81 + (int)v61 * v77;
                      ++v81;
                      *(_WORD*)(v47 + 2 * v84) = v83;
                      v77 = v135;
                    } while (v81 < v135);
                    v85 = 2;
                    for (i = 0; i < v135; ++i) {
                      v87 = *(__int16*)((char*)v72 + v85);
                      v85 += v54;
                      v88 = i + v73 * v77;
                      *(_WORD*)(v47 + 2 * v88) = v87;
                      v77 = v135;
                    }
                    v89 = 4;
                    for (j = 0; j < v135; ++j) {
                      v91 = *(__int16*)((char*)v72 + v89);
                      v89 += v54;
                      v92 = j + v74 * v77;
                      *(_WORD*)(v47 + 2 * v92) = v91;
                      v77 = v135;
                    }
                    v93 = 6;
                    for (k = 0; k < v135; ++k) {
                      v95 = *(__int16*)((char*)v72 + v93);
                      v93 += v54;
                      v96 = k + v75 * v77;
                      *(_WORD*)(v47 + 2 * v96) = v95;
                      v77 = v135;
                    }
                    v97 = 8;
                    for (m = 0; m < v135; ++m) {
                      v99 = *(__int16*)((char*)v72 + v97);
                      v97 += v54;
                      v100 = m + v76 * v77;
                      *(_WORD*)(v47 + 2 * v100) = v99;
                      v77 = v135;
                    }
                    v101 = 10;
                    for (n = 0; n < v135; ++n) {
                      v103 = *(__int16*)((char*)v72 + v101);
                      v101 += v54;
                      v104 = n + v78 * v77;
                      *(_WORD*)(v47 + 2 * v104) = v103;
                      v77 = v135;
                    }
                    v105 = 12;
                    for (ii = 0; ii < v135; ++ii) {
                      v107 = *(__int16*)((char*)v72 + v105);
                      v105 += v54;
                      v108 = ii + v79 * v77;
                      *(_WORD*)(v47 + 2 * v108) = v107;
                      v77 = v135;
                    }
                    v109 = 14;
                    v110 = 0;
                    v60 = v135;
                    do {
                      v111 = *(__int16*)((char*)v72 + v109);
                      v109 += v54;
                      v112 = v110 + v80 * v60;
                      ++v110;
                      *(_WORD*)(v47 + 2 * v112) = v111;
                      v60 = v135;
                    } while (v110 < v135);
                    v61 += 8;
                    v72 += 8;
                    v73 += 8;
                    v74 += 8;
                    v77 = v135;
                    v75 += 8;
                    v76 += 8;
                    v78 += 8;
                    v79 += 8;
                    v80 += 8;
                  } while (v61 != v53);
                }
                else {
                  v61 = 0;
                }
                v62 = v60;
                if (v52 != 0) {
                  v63 = 0;
                  v64 = &v133[v61];
                  v62 = v60;
                  do {
                    if (v62 >= 1) {
                      v65 = 0;
                      v66 = v64;
                      do {
                        v67 = *v66;
                        v66 = (__int16*)((char*)v66 + v54);
                        v68 = v65 + (int)v61 * v62;
                        ++v65;
                        *(_WORD*)(v47 + 2 * v68) = v67;
                        v62 = v135;
                      } while (v65 < v135);
                    }
                    ++v63;
                    LODWORD(v61) = v61 + 1;
                    ++v64;
                  } while (v63 != v52);
                }
              }
            }
            *(_DWORD*)(*(_QWORD*)(a1 + 160) + 68LL) += v50;
            v69 = *(_QWORD*)(a1 + 160);
            if ((*(_BYTE*)(v69 + 100) & 1) == 0 && v131 >= v130 &&
                v42 >= *(_DWORD*)(v12 + 12)) {
              break;
            }
            v70 = *(_DWORD*)(v69 + 92);
            if (v70 >= 1 && *(_DWORD*)(v12 + 20) + v43 + 1 == v70) {
              *(_DWORD*)(v69 + 96) = *(_DWORD*)(v12 + 8) + v42;
            }
            v48 = v62 + v134;
            if (v62 + v134 > v132 ||
                (v71 = *(_DWORD*)(v12 + 12), v42 + 8 >= v71)) {
              v113 = *(_DWORD*)(v12 + 20);
              *(_DWORD*)(v12 + 16) = v42;
              v46 = v113 + v43;
              goto LABEL_107;
            }
            v49 = v43 + 1;
            v47 += 2LL * v62 * (int)v51;
            v50 = bswap32(*(_DWORD*)(*(_QWORD*)(a1 + 456) + v42)) + 8;
            v44 = v42;
            v42 += v50;
            if (v42 > v71) {
              goto LABEL_58;
            }
          }
          v124 = *(_DWORD*)(v12 + 20);
          *(_DWORD*)(v12 + 16) = v42;
          v125 = v124 + v43;
          *(_DWORD*)(v12 + 24) = v125;
          *(_DWORD*)(*(_QWORD*)(a1 + 160) + 88LL) = v125;
        }
        else {
          v43 = -1;
          v44 = 0;
        LABEL_58:
          v45 = *(_DWORD*)(v12 + 20);
          *(_DWORD*)(v12 + 16) = v44;
          v46 = v43 + v45;
        LABEL_107:
          *(_DWORD*)(v12 + 24) = v46;
        }
        nn_os_LockMutex(a1 + 120);
        *v126 = 1;
        nn_os_UnlockMutex_alt1(a1 + 120);
        v9 = v127;
        v3 = a1 + 284;
        v11 = v129;
        nn_os_LockMutex(a1 + 120);
        if (*(_DWORD*)(a1 + 412) != 0) {
          goto LABEL_117;
        }
        goto LABEL_109;
      }
      v128 = a1 + 424;
      v6 = *(_DWORD*)(*(_QWORD*)(a1 + 160) + 64LL);
    LABEL_17:
      v14 = 0;
      do {
        v15 = *(_QWORD*)(a1 + 48);
        v16 = v14;
        if (v15 != 0) {
          v17 = v15 + 24;
        }
        else {
          v17 = a1 + 56;
        }
        v18 = snd_fnd_WeakHandle_get_alt1(v17);
        if (v6 + v7 > (*(int (**)(__int64))(*(_QWORD*)v18 + 80LL))(v18)) {
          v19 = *(_QWORD*)(a1 + 48);
          if (v19 != 0) {
            v20 = v19 + 24;
          }
          else {
            v20 = a1 + 56;
          }
          v21 = snd_fnd_WeakHandle_get_alt1(v20);
          v7 = (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 80LL))(v21)-v6;
        }
        v22 = *(_QWORD*)(a1 + 48);
        if (v22 != 0) {
          v23 = v22 + 24;
        }
        else {
          v23 = a1 + 56;
        }
        v24 = snd_fnd_WeakHandle_get_alt1(v23);
        (*(void (**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v24 + 96LL))(
            v24, *(_QWORD*)(a1 + 456), v6, v7);
        *(_DWORD*)(*(_QWORD*)(a1 + 160) + 68LL) = v6;
        if (v14 == v8) {
          break;
        }
        v25 = 0;
        while (1) {
          v26 = v25 + bswap32(*(_DWORD*)(*(_QWORD*)(a1 + 456) + v25)) + 8;
          if (v26 >= v7) {
            break;
          }
          v27 = *(_QWORD*)(a1 + 160);
          ++v14;
          v28 = *(_DWORD*)(v27 + 92);
          if (v28 >= 1 && v14 == v28) {
            *(_DWORD*)(v27 + 96) = v26 + v6;
          }
          v25 = v26;
          if (v8 == v14) {
            goto LABEL_44;
          }
        }
        v6 += v25;
        if (v8 == v14) {
          break;
        }
        v30 = *(_QWORD*)(a1 + 48);
        v31 = v30 != 0 ? v30 + 24 : a1 + 56;
        v32 = snd_fnd_WeakHandle_get_alt1(v31);
      } while (v6 < (*(int (**)(__int64))(*(_QWORD*)v32 + 80LL))(v32));
    LABEL_44:
      v8 = v16;
      v11 = v128;
      goto LABEL_45;
    }
    if (v13 != *(_DWORD*)(*(_QWORD*)(a1 + 160) + 64LL)) {
      if (*(_BYTE*)(v12 + 40) == 1) {
        goto LABEL_9;
      }
      v126 = (_BYTE*)(v12 + 40);
      v128 = a1 + 424;
      v6 = *(_DWORD*)(*(_QWORD*)(a1 + 160) + 64LL);
      goto LABEL_17;
    }
  }
  if (*(_DWORD*)(v12 + 20) != v8 || (*(_BYTE*)(v12 + 40) & 1) == 0) {
    goto LABEL_8;
  }
LABEL_10:
  nn_os_LockMutex(a1 + 120);
  if (*(_DWORD*)(a1 + 412) == 0) {
  LABEL_109:
    *(_DWORD*)(a1 + 72) = 3;
    v114 = (v9 + 1) % 3uLL;
    if (*(_DWORD*)(*(_QWORD*)(v11 + 8 * v114) + 12LL) == 0) {
      v115 = *(_DWORD**)(a1 + 160);
      v116 = *(_DWORD*)(v12 + 24);
      v117 = v115[22];
      if (*(_DWORD*)(v12 + 20) > v117 || v116 < v117) {
        v120 = v116 + 1;
        v119 = *(_DWORD*)(v12 + 16) + *(_DWORD*)(v12 + 8);
      }
      else {
        v120 = v115[23];
        v119 = v115[24];
      }
      *(_DWORD*)(a1 + 412) = 1;
      v121 = (int*)(v3 + 16LL * *(int*)(a1 + 420));
      v121[2] = v120;
      *v121 = v119;
      v121[1] = 0x4000;
      v122 = *(int*)(a1 + 420);
      *(_DWORD*)(v3 + 16 * v122 + 12) = v114;
      v123 = *(_QWORD*)(a1 + 8);
      *(_DWORD*)(a1 + 420) = ((_BYTE)v122 + 1) & 7;
      *(_DWORD*)(a1 + 72) = 6;
      GameRoutine_17ca30(v123);
    }
  }
LABEL_117:
  nn_os_UnlockMutex_alt1(a1 + 120);
}

__int64 WaveStreamReader_18d1e0(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  int* v5;
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  _DWORD* v29;
  const char* v30;
  __int64 v32;
  __int64 v33;
  __int64 v34;

  nn_os_LockMutex(a1 + 120);
  v2 = *(_DWORD*)(a1 + 412);
  if (v2 <= 0) {
    v30 = "#SoundLibrary : WaveStreamReader request Q count error !!\n";
  LABEL_31:
    (*(void (**)(_QWORD, const char*))(**(_QWORD**)snd_g_proxy_ptr[0] + 392LL))(
        *(_QWORD*)snd_g_proxy_ptr[0], v30);
    return nn_os_UnlockMutex(a1 + 120);
  }
  v3 = a1 + 284;
  *(_DWORD*)(a1 + 412) = v2 - 1;
  v4 = *(int*)(a1 + 416);
  v5 = (int*)(a1 + 284 + 16 * v4);
  v6 = *v5;
  v7 = v5[1];
  v8 = v5[3];
  *(_DWORD*)(a1 + 416) = ((_BYTE)v4 + 1) & 7;
  nn_os_UnlockMutex(a1 + 120);
  v9 = *(_QWORD*)(a1 + 424 + 8 * v8);
  if (*(_DWORD*)(v9 + 8) != v6 || *(_DWORD*)(v9 + 12) != v7) {
    v10 = *(_QWORD*)(a1 + 48);
    if (v10 != 0) {
      v11 = v10 + 24;
    }
    else {
      v11 = a1 + 56;
    }
    v12 = snd_fnd_WeakHandle_get(v11);
    if (v7 + v6 > (*(int (**)(__int64))(*(_QWORD*)v12 + 80LL))(v12)) {
      v13 = *(_QWORD*)(a1 + 48);
      if (v13 != 0) {
        v14 = v13 + 24;
      }
      else {
        v14 = a1 + 56;
      }
      v15 = snd_fnd_WeakHandle_get(v14);
      v7 = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 80LL))(v15)-v6;
    }
    v16 = *(_QWORD*)(a1 + 48);
    if (v16 != 0) {
      v17 = v16 + 24;
    }
    else {
      v17 = a1 + 56;
    }
    v18 = snd_fnd_WeakHandle_get(v17);
    (*(void (**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v18 + 96LL))(
        v18, *(_QWORD*)(v9 + 32), v6, v7);
    *(_DWORD*)(v9 + 8) = v6;
    *(_DWORD*)(v9 + 12) = 0x20000;
  }
  nn_os_LockMutex(a1 + 120);
  if (*(_DWORD*)(a1 + 412) != 0) {
    return nn_os_UnlockMutex(a1 + 120);
  }
  *(_DWORD*)(a1 + 72) = 3;
  v19 = (v8 + 1) % 3uLL;
  if (*(_DWORD*)(*(_QWORD*)(a1 + 424 + 8 * v19) + 12LL) != 0) {
    return nn_os_UnlockMutex(a1 + 120);
  }
  v20 = *(_DWORD*)(v9 + 8) + 0x20000;
  v21 = *(_QWORD*)(a1 + 48);
  if (v21 != 0) {
    v22 = v21 + 24;
  }
  else {
    v22 = a1 + 56;
  }
  v23 = snd_fnd_WeakHandle_get(v22);
  v24 = (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 80LL))(v23);
  v25 = *(_DWORD*)(a1 + 80);
  v26 = *(_DWORD*)(a1 + 412);
  if (v20 < v24) {
    v25 = v20;
  }
  if (v26 < 1) {
  LABEL_33:
    if ((unsigned int)v26 <= 7) {
      *(_DWORD*)(a1 + 412) = v26 + 1;
      v32 = v3 + 16LL * *(int*)(a1 + 420);
      *(_DWORD*)v32 = v25;
      *(_QWORD*)(v32 + 4) = 0x20000;
      v33 = *(int*)(a1 + 420);
      *(_DWORD*)(v3 + 16 * v33 + 12) = v19;
      v34 = *(_QWORD*)(a1 + 8);
      *(_DWORD*)(a1 + 420) = ((_BYTE)v33 + 1) & 7;
      *(_DWORD*)(a1 + 72) = 6;
      GameRoutine_17ca30(v34);
      return nn_os_UnlockMutex(a1 + 120);
    }
    v30 = "#SoundLibrary : WaveStreamReader request Q overflow !!\n";
    goto LABEL_31;
  }
  v27 = *(_DWORD*)(a1 + 416);
  v28 = *(_DWORD*)(a1 + 412);
  while (1) {
    v29 = (_DWORD*)(v3 + 16LL * v27);
    if (*v29 == v25 && v29[1] == 0x20000 && v29[3] == (_DWORD)v19) {
      return nn_os_UnlockMutex(a1 + 120);
    }
    --v28;
    v27 = ((_BYTE)v27 + 1) & 7;
    if (v28 == 0) {
      goto LABEL_33;
    }
  }
}

#pragma GCC visibility pop
