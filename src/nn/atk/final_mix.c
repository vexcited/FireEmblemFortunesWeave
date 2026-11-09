#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2a0820(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a0de0(_QWORD, _QWORD);
__int64 GameRoutine_2a0e80(_QWORD, _QWORD);
__int64 GameRoutine_2a0eb0(_QWORD, _QWORD);
__int64 GameRoutine_2a1860(void);
__int64 GameRoutine_2af400(__int64, __int64, __int64, __int64 (***)(_QWORD));
__int64 GameRoutine_2af520(__int64, __int64);
__int64 GameRoutine_2af880(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2af890(__int64 result);
__int64 GameRoutine_2afc50(__int64 result);
__int64 GameRoutine_2afdd0(_QWORD);
__int64 SoundVoiceNX_14e360(_QWORD);
__int64 nn_detail_UnexpectedDefaultImpl(_QWORD, _QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
__int64 nn_os_InitializeMutex(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN GameData_1f80740;
extern __int64* GameData_2134b60;
void GameRoutine_651250(void*, unsigned __int64);
__int64 FinalMix_DeletingDestructor(__int64 a1);
__int64 FinalMix_Unknown3(__int64 result, unsigned int a2);
__int64 FinalMix_Unknown5(__int64 a1);
__int64 FinalMix_Unknown6(__int64 a1, int a2);
__int64 FinalMix_Unknown7(__int64 a1);
__int64 FinalMix_Unknown8(__int64 a1, int a2, int a3);
__int64 FinalMix_Unknown9(__int64 a1, int a2);
__int64 FinalMix_Unknown11(_QWORD* a1);
void FinalMix_Unknown12(_QWORD* a1);
_QWORD* FinalMix_2b4fd0(_QWORD* result, __int64 a2, __int64 a3);
__int64 FinalMix_2b4fe0(_QWORD* a1, __int64 a2, __int64 a3);
__int64 FinalMix_2b5040(__int64* a1, __int64 a2, __int64 a3, int a4);
__int64 FinalMix_2b5190(__int64 a1);
__int64 FinalMix_2b51f0(int a1, char a2);
bool FinalMix_2b55d0(__int64 a1, int a2);
__int64 FinalMix_2b5680(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5);
__int64 FinalMix_2b5730(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5);
__int64 FinalMix_2b57c0(__int64 a1, __int64 a2, int a3);
__int64 FinalMix_2b5850(__int64 a1, __int64 a2, int a3);
__int64 FinalMix_2b58e0(__int64 a1, int a2);
__int64 FinalMix_2b5960(_QWORD* a1);
__int64 FinalMix_2b5a60(_QWORD* a1);
__int64 FinalMix_Unknown13(_QWORD* a1, _QWORD* a2, unsigned int a3, __int64 a4,
                           __int64 a5);
__int64 FinalMix_Unknown14(__int64 a1, _QWORD* a2, unsigned int a3, __int64 a4,
                           __int64 a5);

__int64 FinalMix_DeletingDestructor(__int64 a1)
{
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 48LL))(a1, 0);
}

__int64 FinalMix_Unknown3(__int64 result, unsigned int a2)
{
  atomic_fetch_add((atomic_uint* volatile)(result + 80), a2);
  return result;
}

__int64 FinalMix_Unknown5(__int64 a1)
{
  unsigned int v1;

  if (*(_DWORD*)(a1 + 92) != 0) {
    v1 = 2;
  }
  else {
    v1 = 0;
  }
  if (*(_DWORD*)(a1 + 88) != 0) {
    return 6;
  }
  else {
    return v1;
  }
}

__int64 FinalMix_Unknown6(__int64 a1, int a2)
{
  int v2;
  unsigned int v3;

  v2 = *(_DWORD*)(a1 + 88);
  if (a2 - v2 >= *(_DWORD*)(a1 + 92)) {
    v3 = 0;
  }
  else {
    v3 = 2;
  }
  if (a2 >= v2) {
    return v3;
  }
  else {
    return 6;
  }
}

__int64 FinalMix_Unknown7(__int64 a1)
{
  return (unsigned int)(6 * *(_DWORD*)(a1 + 88) + 2 * *(_DWORD*)(a1 + 92));
}

__int64 FinalMix_Unknown8(__int64 a1, int a2, int a3)
{
  int v3;
  int v4;

  v3 = *(_DWORD*)(a1 + 88);
  if (a2 < v3) {
    v4 = 6 * a2;
  }
  else {
    v4 = 6 * v3 + 2 * (a2 - v3);
  }
  return (unsigned int)(v4 + a3);
}

__int64 FinalMix_Unknown9(__int64 a1, int a2)
{
  int v2;
  bool v3;
  unsigned int v4;

  v2 = *(_DWORD*)(a1 + 88);
  v3 = a2 < 6 * v2;
  v4 = v2 + ((unsigned int)(a2 - 6 * v2) >> 1);
  if (v3) {
    return (unsigned int)(a2 / 6);
  }
  else {
    return v4;
  }
}

__int64 FinalMix_Unknown11(_QWORD* a1)
{
  *a1 = &GameData_1f80740;
  return nn_os_FinalizeMutex(a1 + 1);
}

void FinalMix_Unknown12(_QWORD* a1)
{
  *a1 = GameData_2134b60 + 2;
  nn_os_FinalizeMutex(a1 + 1);
  GameRoutine_651250(a1, 0x68u);
}

_QWORD* FinalMix_2b4fd0(_QWORD* result, __int64 a2, __int64 a3)
{
  *result = a2;
  result[1] = 0;
  result[2] = a3;
  return result;
}

__int64 FinalMix_2b4fe0(_QWORD* a1, __int64 a2, __int64 a3)
{
  __int64 v3;

  if (a2 == 0) {
    return 0;
  }
  v3 = (a3 + *a1 + a1[1] - 1) & -a3;
  if ((unsigned __int64)(v3 + a2) > a1[2] + *a1) {
    return 0;
  }
  a1[1] = v3 + a2 - *a1;
  return v3;
}

__int64 FinalMix_2b5040(__int64* a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v13;
  unsigned int v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  bool v19;
  bool v20;

  if (a2 != 0 && (v4 = (a3 + *a1 + a1[1] - 1) & -a3) + a2 <=
                     (unsigned __int64)(a1[2] + *a1)) {
    a1[1] = v4 + a2 - *a1;
    v5 = a4 - 2;
    if (a4 < 2) {
      return v4;
    }
  }
  else {
    v4 = 0;
    v5 = a4 - 2;
    if (a4 < 2) {
      return v4;
    }
  }
  if (a2 != 0) {
    v6 = *a1;
    v7 = a1[1];
    v8 = -a3;
    v9 = (a4 - 1) & 3;
    v10 = a1[2] + *a1;
    v11 = a3 + *a1 - 1;
    if (v5 >= 3) {
      v14 = (a4 - 1) & 0xFFFFFFFC;
      do {
        v15 = ((v11 + v7) & v8) + a2;
        if (v15 <= v10) {
          v7 = v15 - v6;
        }
        v16 = ((v11 + v7) & v8) + a2;
        if (v16 <= v10) {
          v7 = v16 - v6;
        }
        v17 = ((v11 + v7) & v8) + a2;
        if (v17 <= v10) {
          v7 = v17 - v6;
        }
        v18 = ((v11 + v7) & v8) + a2;
        if (v18 <= v10) {
          v7 = v18 - v6;
        }
        if (v15 <= v10 || (v16 > v10 ? (v19 = v17 > v10) : (v19 = false),
                           v19 ? (v20 = v18 > v10) : (v20 = false), !v20)) {
          a1[1] = v7;
        }
        v14 -= 4;
      } while (v14 != 0);
    }
    for (; v9 != 0; --v9) {
      v13 = ((v11 + v7) & v8) + a2;
      if (v13 <= v10) {
        v7 = v13 - v6;
        a1[1] = v13 - v6;
      }
    }
  }
  return v4;
}

__int64 FinalMix_2b5190(__int64 a1)
{
  __int64* v2;
  __int64 result;

  v2 = GameData_2134b60;
  *(_QWORD*)(a1 + 12) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_DWORD*)(a1 + 32) = 0;
  *(_QWORD*)a1 = v2 + 2;
  *(_WORD*)(a1 + 8) = 0;
  result = nn_os_InitializeMutex(a1 + 8, 1, 0);
  *(_BYTE*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  return result;
}

__int64 FinalMix_2b51f0(int a1, char a2)
{
  if ((a2 & 1) != 0) {
    return 48LL * a1;
  }
  else {
    return 0;
  }
}

bool FinalMix_2b55d0(__int64 a1, int a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BOOL4 v7;

  if (*(_BYTE*)(a1 + 64) != 1) {
    return false;
  }
  nn_os_LockMutex(a1 + 8);
  v4 = *(_QWORD*)(a1 + 40) + 16LL * a2;
  v7 = true;
  if (*(_QWORD*)(v4 + 8) == v4) {
    v5 = *(_QWORD*)(a1 + 48) + 16LL * a2;
    if (*(_QWORD*)(v5 + 8) == v5) {
      v6 = *(_QWORD*)(a1 + 56) + 16LL * a2;
      if (*(_QWORD*)(v6 + 8) == v6) {
        v7 = false;
      }
    }
  }
  nn_os_UnlockMutex(a1 + 8);
  return v7;
}

__int64 FinalMix_2b5680(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v10 = GameRoutine_2afdd0(a2);
  if ((unsigned int)v10 >= 2) {
    nn_detail_UnexpectedDefaultImpl(v10, v11);
    __udf(0);
  }
  v12 = GameRoutine_2a1860();
  v13 = GameRoutine_2a0820(v12, 64, 8, 1);
  *(_DWORD*)(v13 + 24) = a3;
  *(_QWORD*)(v13 + 32) = a2;
  *(_QWORD*)(v13 + 40) = a4;
  *(_QWORD*)(v13 + 48) = a5;
  *(_QWORD*)(v13 + 56) = a1;
  *(_DWORD*)(v13 + 8) = 70;
  GameRoutine_2a0e80(v12, v13);
  (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 24LL))(a1, 1);
  return 1;
}

__int64 FinalMix_2b5730(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v10;
  __int64 v11;

  v10 = GameRoutine_2a1860();
  v11 = GameRoutine_2a0820(v10, 64, 8, 1);
  *(_DWORD*)(v11 + 24) = a3;
  *(_QWORD*)(v11 + 32) = a2;
  *(_QWORD*)(v11 + 40) = a4;
  *(_QWORD*)(v11 + 48) = a5;
  *(_QWORD*)(v11 + 56) = a1;
  *(_DWORD*)(v11 + 8) = 71;
  GameRoutine_2a0e80(v10, v11);
  (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 24LL))(a1, 1);
  return 1;
}

__int64 FinalMix_2b57c0(__int64 a1, __int64 a2, int a3)
{
  __int64 v6;
  __int64 v7;
  unsigned int v8;

  v6 = GameRoutine_2a1860();
  v7 = GameRoutine_2a0820(v6, 64, 8, 1);
  *(_QWORD*)(v7 + 32) = a2;
  *(_DWORD*)(v7 + 24) = a3;
  *(_QWORD*)(v7 + 56) = a1;
  *(_DWORD*)(v7 + 8) = 73;
  GameRoutine_2a0e80(v6, v7);
  v8 = GameRoutine_2a0eb0(v6, 1);
  GameRoutine_2a0de0(v6, v8);
  return 1;
}

__int64 FinalMix_2b5850(__int64 a1, __int64 a2, int a3)
{
  __int64 v6;
  __int64 v7;
  unsigned int v8;

  v6 = GameRoutine_2a1860();
  v7 = GameRoutine_2a0820(v6, 64, 8, 1);
  *(_QWORD*)(v7 + 32) = a2;
  *(_DWORD*)(v7 + 24) = a3;
  *(_QWORD*)(v7 + 56) = a1;
  *(_DWORD*)(v7 + 8) = 74;
  GameRoutine_2a0e80(v6, v7);
  v8 = GameRoutine_2a0eb0(v6, 1);
  GameRoutine_2a0de0(v6, v8);
  return 1;
}

__int64 FinalMix_2b58e0(__int64 a1, int a2)
{
  __int64 v4;
  __int64 v5;
  unsigned int v6;

  v4 = GameRoutine_2a1860();
  v5 = GameRoutine_2a0820(v4, 64, 8, 1);
  *(_DWORD*)(v5 + 24) = a2;
  *(_QWORD*)(v5 + 56) = a1;
  *(_DWORD*)(v5 + 8) = 76;
  GameRoutine_2a0e80(v4, v5);
  v6 = GameRoutine_2a0eb0(v4, 1);
  GameRoutine_2a0de0(v4, v6);
  return 1;
}

__int64 FinalMix_2b5960(_QWORD* a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  nn_os_LockMutex(a1 + 1);
  v2 = (*(__int64 (**)(_QWORD*))(*a1 + 16LL))(a1);
  if (v2 >= 1) {
    v3 = 0;
    v4 = (unsigned int)v2;
    v5 = a1[6];
    v6 = *(_QWORD*)(v5 + 8);
    if (v6 != v5) {
      goto LABEL_6;
    }
    while (1) {
      v8 = a1[7] + 16 * v3;
      v9 = *(_QWORD*)(v8 + 8);
      if (v9 != v8) {
        do {
          GameRoutine_2afc50(v9 - 8);
          v9 = *(_QWORD*)(v9 + 8);
        } while (v9 != a1[7] + 16 * v3);
      }
      if (++v3 == v4) {
        break;
      }
      v7 = a1[6] + 16 * v3;
      v6 = *(_QWORD*)(v7 + 8);
      if (v6 != v7) {
        do {
        LABEL_6:
          GameRoutine_2af890(v6 - 8);
          v6 = *(_QWORD*)(v6 + 8);
        } while (v6 != a1[6] + 16 * v3);
      }
    }
  }
  return nn_os_UnlockMutex(a1 + 1);
}

__int64 FinalMix_2b5a60(_QWORD* a1)
{
  int v2;
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

  nn_os_LockMutex(a1 + 1);
  v2 = (*(__int64 (**)(_QWORD*))(*a1 + 16LL))(a1);
  if (v2 >= 1) {
    v3 = 0;
    v4 = (unsigned int)v2;
    v5 = a1[6];
    v6 = *(_QWORD*)(v5 + 8);
    if (v6 != v5) {
      goto LABEL_6;
    }
    while (1) {
      v10 = a1[7] + 16 * v3;
      v11 = *(_QWORD*)(v10 + 8);
      if (v11 != v10) {
        do {
          v13 = *(_QWORD*)(v11 - 8);
          v12 = v11 - 8;
          (*(void (**)(__int64))(v13 + 32))(v12);
          v11 = *(_QWORD*)(v12 + 16);
        } while (v11 != a1[7] + 16 * v3);
      }
      if (++v3 == v4) {
        break;
      }
      v7 = a1[6] + 16 * v3;
      v6 = *(_QWORD*)(v7 + 8);
      if (v6 != v7) {
        do {
        LABEL_6:
          v9 = *(_QWORD*)(v6 - 8);
          v8 = v6 - 8;
          (*(void (**)(__int64))(v9 + 32))(v8);
          v6 = *(_QWORD*)(v8 + 16);
        } while (v6 != a1[6] + 16 * v3);
      }
    }
  }
  return nn_os_UnlockMutex(a1 + 1);
}

__int64 FinalMix_Unknown13(_QWORD* a1, _QWORD* a2, unsigned int a3, __int64 a4,
                           __int64 a5)
{
  __int64 result;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  char v19;
  char* v20;
  char v21;
  char* v22;
  int v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  int v28;
  __int16 v29;

  result = SoundVoiceNX_14e360(a1);
  v11 = *(_DWORD*)(result + 1552);
  if (v11 != 32000) {
  LABEL_4:
    if (v11 != 48000) {
      return result;
    }
    result = GameRoutine_2afdd0(a2);
    if ((_DWORD)result != 1) {
      return result;
    }
    goto LABEL_6;
  }
  v12 = result;
  result = GameRoutine_2afdd0(a2);
  if ((_DWORD)result != 0) {
    v11 = *(_DWORD*)(v12 + 1552);
    goto LABEL_4;
  }

LABEL_6:
  v13 = (*(__int64 (**)(_QWORD*, __int64, __int64))(*a2 + 88LL))(a2, a4, a5);
  v14 = SoundVoiceNX_14e360(v13);
  result = (*(__int64 (**)(_QWORD*, __int64, _QWORD*))(*a2 + 24LL))(
      a2, v14 + 24, a1);
  if ((result & 1) != 0) {
    v15 = (*(__int64 (**)(_QWORD*, _QWORD))(*a1 + 48LL))(a1, a3);
    v16 = (*(__int64 (**)(_QWORD*, _QWORD, _QWORD))(*a1 + 64LL))(a1, a3, 0);
    v29 = 0;
    v28 = 0;
    if ((int)v15 >= 1) {
      v17 = v15 & 7;
      if (v15 >= 8) {
        v18 = 0;
        do {
          v19 = v16 + v18;
          v20 = (char*)&v28 + v18 + 3;
          v21 = v16 + v18 + 1;
          *((_BYTE*)&v28 + v18) = v16 + v18;
          v18 += 8;
          *(v20 - 2) = v21;
          *(v20 - 1) = v19 + 2;
          *v20 = v19 + 3;
          v20[1] = v19 + 4;
          v20[2] = v19 + 5;
          v20[3] = v19 + 6;
          v20[4] = v19 + 7;
        } while ((v15 & 0x7FFFFFF8) != v18);
      }
      else {
        v18 = 0;
      }
      if ((v15 & 7) != 0) {
        v22 = (char*)&v28 + v18;
        v23 = v16 + v18;
        do {
          *v22++ = v23++;
          --v17;
        } while (v17 != 0);
      }
    }
    (*(void (**)(_QWORD*, int*, int*, _QWORD, _QWORD))(*a2 + 32LL))(
        a2, &v28, &v28, v15, v15);
    nn_os_LockMutex(a1 + 1);
    v24 = a1[5];
    v25 = 16LL * (int)a3;
    v27 = a2[1];
    v26 = a2 + 1;
    *v26 = *(_QWORD*)(v24 + v25);
    *(_QWORD*)(v27 + 8) = v24 + v25;
    *(_QWORD*)(*(_QWORD*)(v24 + v25) + 8LL) = v26;
    *(_QWORD*)(v24 + v25) = v27;
    return nn_os_UnlockMutex(a1 + 1);
  }
  return result;
}

__int64 FinalMix_Unknown14(__int64 a1, _QWORD* a2, unsigned int a3, __int64 a4,
                           __int64 a5)
{
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  char v18;
  char* v19;
  char v20;
  char* v21;
  int v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  int v27;
  __int16 v28;

  result = (*(__int64 (**)(_QWORD*))(*a2 + 16LL))(a2);
  if ((result & 1) != 0) {
    v11 = GameRoutine_2af880(a2, a4, a5);
    v12 = SoundVoiceNX_14e360(v11);
    v13 = SoundVoiceNX_14e360(v12);
    result = GameRoutine_2af400((__int64)a2, v12 + 24, v13 + 1552,
                                (__int64 (***)(_QWORD))a1);
    if ((result & 1) != 0) {
      v14 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 48LL))(a1, a3);
      v15 = (*(__int64 (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 64LL))(
          a1, a3, 0);
      v28 = 0;
      v27 = 0;
      if (v14 >= 1) {
        v16 = v14 & 7;
        if ((unsigned int)v14 >= 8) {
          v17 = 0;
          do {
            v18 = v15 + v17;
            v19 = (char*)&v27 + v17 + 3;
            v20 = v15 + v17 + 1;
            *((_BYTE*)&v27 + v17) = v15 + v17;
            v17 += 8;
            *(v19 - 2) = v20;
            *(v19 - 1) = v18 + 2;
            *v19 = v18 + 3;
            v19[1] = v18 + 4;
            v19[2] = v18 + 5;
            v19[3] = v18 + 6;
            v19[4] = v18 + 7;
          } while ((v14 & 0x7FFFFFF8) != v17);
        }
        else {
          v17 = 0;
        }
        if ((v14 & 7) != 0) {
          v21 = (char*)&v27 + v17;
          v22 = v15 + v17;
          do {
            *v21++ = v22++;
            --v16;
          } while (v16 != 0);
        }
      }
      GameRoutine_2af520((__int64)a2, (__int64)&v27);
      nn_os_LockMutex(a1 + 8);
      v23 = *(_QWORD*)(a1 + 48);
      v24 = 16LL * (int)a3;
      v26 = a2[1];
      v25 = a2 + 1;
      *v25 = *(_QWORD*)(v23 + v24);
      *(_QWORD*)(v26 + 8) = v23 + v24;
      *(_QWORD*)(*(_QWORD*)(v23 + v24) + 8LL) = v25;
      *(_QWORD*)(v23 + v24) = v26;
      return nn_os_UnlockMutex(a1 + 8);
    }
  }
  return result;
}

#pragma GCC visibility pop
