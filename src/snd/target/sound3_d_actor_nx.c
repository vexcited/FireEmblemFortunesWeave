#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14b560(_QWORD*, __int64*, int, __int64);
__int64 GameRoutine_276b50(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_277160(_QWORD, _QWORD);
__int64 GameRoutine_277190(_QWORD);
__int64 GameRoutine_2771b0(_QWORD, _QWORD);
__int64 GameRoutine_278be0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_27cc40(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a1b90(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
extern __int64 (*snd_target_Sound3DActorNX_vtable[])();
extern __int64 snd_g_proxy_ptr[2];
extern __int64 snd_target_s_platform;
extern __int64* snd_g_memory_ptr[2];
_QWORD* Sound3DActorNX_Destructor(_QWORD* result);
__int64 Sound3DActorNX_Unknown5(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4);
__int64 Sound3DActorNX_14dc10(__int64 a1, int a2);
__n128 Sound3DActorNX_Unknown6(__int64 a1, __int64 a2);
__n128 Sound3DActorNX_Unknown8(__int64 a1, __int64 a2);
__n128 Sound3DActorNX_Unknown9(__int64 a1, __int64 a2);
__n128 Sound3DActorNX_Unknown11(__int64 a1);
__n128 Sound3DActorNX_Unknown12(__int64 a1, int a2);
__n128 Sound3DActorNX_Unknown14(__int64 a1);
void __attribute__((noreturn)) GameRoutine_164010(void);
__int64 Sound3DActorNx_14b560(_QWORD* a1, __int64* a2, int a3, __int64 a4);
__int64 Sound3DActorNx_277190(__int64 result);
__int64 Sound3DActorNx_2771b0(__int64 result, _QWORD* a2);

__int64 Sound3DActorNx_14b560(_QWORD* a1, __int64* a2, int a3, __int64 a4)
{
  unsigned __int64 v4;
  __int64 v5;
  __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  __int64 result;
  unsigned __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char* v24;
  char* v25;
  _QWORD* v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  int v35;

  v5 = a1[5];
  v4 = a1[6];
  v7 = v4 - v5;
  v8 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v4 - v5) >> 3);
  if (v4 == v5) {
  LABEL_5:
    v34 = *a2;
    v35 = *((_DWORD*)a2 + 2);
    v11 = a1[7];
    if (v4 >= v11) {
      v15 = v8 + 1;
      v16 = 0xAAAAAAAAAAAAAAALL;
      if (v15 > 0xAAAAAAAAAAAAAAALL) {
        GameRoutine_164010();
      }
      v19 = snd_g_memory_ptr[0];
      v20 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v11 - v5) >> 3);
      if (2 * v20 > v15) {
        v15 = 2 * v20;
      }
      if (v20 < 0x555555555555555LL) {
        v16 = v15;
      }
      v21 = 3 * v16;
      v22 = (*(__int64 (**)(_QWORD, __int64, __int64))(
          **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0],
                                                   24 * v16, 32);
      v23 = v22 + v7;
      *(_QWORD*)(v23 + 16) = a4;
      v14 = v22 + v7 + 24;
      *(_QWORD*)v23 = v34;
      *(_DWORD*)(v23 + 8) = v35;
      *(_DWORD*)(v23 + 12) = a3;
      v24 = (char*)a1[5];
      v25 = (char*)a1[6];
      v26 = (_QWORD*)(v23 + v24 - v25);
      if (v24 != v25) {
        v27 = v26;
        do {
          v28 = *(_QWORD*)v24;
          v29 = *((_QWORD*)v24 + 1);
          v30 = *((_QWORD*)v24 + 2);
          v24 += 24;
          v27[1] = v29;
          v27[2] = v30;
          *v27 = v28;
          v27 += 3;
        } while (v24 != v25);
        v24 = (char*)a1[5];
      }
      a1[5] = v26;
      a1[6] = v14;
      a1[7] = v22 + 8 * v21;
      if (v24 != nullptr) {
        (*(void (**)(__int64))(*(_QWORD*)*v19 + 24LL))(*v19);
      }
    }
    else {
      v12 = *a2;
      v13 = *((_DWORD*)a2 + 2);
      *(_QWORD*)(v4 + 16) = a4;
      v14 = v4 + 24;
      *(_QWORD*)v4 = v12;
      *(_DWORD*)(v4 + 8) = v13;
      *(_DWORD*)(v4 + 12) = a3;
    }
    v31 = a1[5];
    a1[6] = v14;
    return -1 - 1431655765 * (unsigned int)((unsigned __int64)(v14 - v31) >> 3);
  }
  else {
    v9 = (_QWORD*)(v5 + 16);
    result = 0;
    while (*v9 != 0) {
      ++result;
      v9 += 3;
      if (v8 == result) {
        goto LABEL_5;
      }
    }
    v32 = *a2;
    v33 = *((_DWORD*)a2 + 2);
    *v9 = a4;
    *(v9 - 2) = v32;
    *((_DWORD*)v9 - 2) = v33;
    *((_DWORD*)v9 - 1) = a3;
  }
  return result;
}

_QWORD* Sound3DActorNX_Destructor(_QWORD* result)
{
  void (***v1)(_QWORD);
  _QWORD* v2;
  __int64* v3;
  void (***v4)(_QWORD);

  v1 = (void (***)(_QWORD))result[6];
  result[6] = 0;
  *result = snd_target_Sound3DActorNX_vtable;
  if (v1 != nullptr) {
    v2 = result;
    (**v1)(v1);
    v3 = snd_g_memory_ptr[0];
    result = (_QWORD*)(*(__int64 (**)(_QWORD, void (***)(_QWORD)))(
        **(_QWORD**)snd_g_memory_ptr[0] + 24LL))(*snd_g_memory_ptr[0], v1);
    v4 = (void (***)(_QWORD))v2[6];
    v2[6] = 0;
    if (v4 != nullptr) {
      (**v4)(v4);
      return (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
          *(_QWORD*)*v3 + 24LL))(*v3, v4);
    }
  }
  return result;
}

__int64 Sound3DActorNX_Unknown5(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8;
  __int64 v9;
  int v10;
  long double v11;
  __int64 v12;
  _DWORD* v13;
  int v14;
  char v15;
  int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  int v25;
  unsigned int v26;
  int v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  unsigned int v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v38;
  char v39;
  char v40;
  __int64 v41;

  v8 = GameRoutine_2a1b90(a1);
  nn_os_LockMutex(v8 + 840);
  v9 = snd_target_s_platform;
  v10 = (*(__int64 (**)(__int64))(*(_QWORD*)snd_target_s_platform + 1200LL))(
      snd_target_s_platform);
  if (v10 < (*(int (**)(_QWORD))(**(_QWORD**)snd_g_proxy_ptr[0] + 168LL))(
                *(_QWORD*)snd_g_proxy_ptr[0]) ||
      ((v12 = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)v9 + 232LL))(v9, *(unsigned int*)(a2 + 24),
                                   *(unsigned int*)(a2 + 8),
                                   *(_QWORD*)(a2 + 16))) &
       1) != 0) {
    v13 = *(_DWORD**)(a4 + 5648);
    LODWORD(v11) = v13[107];
    v14 = v13[104];
    if (v13[106] == 1) {
      v15 = 1;
    }
    else {
      v15 = 2;
    }
    HIDWORD(v38) = v13[107];
    v39 = v15;
    v40 = v13[108];
    v16 = v13[101] != 0;
    LODWORD(v38) = v16;
    if (v14 != 0) {
      v16 |= 2u;
      LODWORD(v38) = v16;
    }
    if (v13[102] != 0) {
      v16 |= 4u;
      LODWORD(v38) = v16;
    }
    if (v13[103] != 0) {
      v16 |= 8u;
      LODWORD(v38) = v16;
    }
    if (v13[105] != 0) {
      LODWORD(v38) = v16 | 0x10;
    }
    v17 = (*(__int64 (**)(_QWORD*, long double))(*a1 + 32LL))(a1, v11);
    v18 = v9 + 56;
    v19 = v9 + 56 + 4088LL * v17;
    if (*(_BYTE*)(v19 + 4081) != 0) {
      v20 = v9 + 56 + 4088LL * v17;
    }
    else {
      v20 = 0;
    }
    *(_DWORD*)(v20 + 4048) = *(_DWORD*)(a2 + 24);
    v21 = *(_QWORD*)(v20 + 4000);
    v22 = *(_QWORD*)(v20 + 3992);
    *(_QWORD*)(v20 + 4040) = &v38;
    if (v21 != v22) {
      v23 = 0;
      do {
        v24 = *(_QWORD*)(v22 + 8 * v23);
        if (*(_BYTE*)(v24 + 1440) == 1) {
          v25 = *(_DWORD*)(a2 + 24);
          *(_QWORD*)(v24 + 1400) = &v38;
          *(_DWORD*)(v24 + 1408) = v25;
          v21 = *(_QWORD*)(v20 + 4000);
          v22 = *(_QWORD*)(v20 + 3992);
        }
        ++v23;
      } while (v23 < (v21 - v22) >> 3);
    }
    v26 = GameRoutine_27cc40(a1[6], a2 + 32, *(unsigned int*)(a2 + 24),
                             *(_QWORD*)(a2 + 16), a3 + 8);
    v27 = *(_DWORD*)(a2 + 8);
    v41 = 0;
    v28 = v26;
    v29 = v18 + 4088LL * v27;
    if (*(_BYTE*)(v29 + 4080) != 0) {
      v30 = 1584;
    }
    else {
      v30 = 32;
    }
    v31 = (*(__int64 (**)(__int64))(*(_QWORD*)a3 + 72LL))(a3);
    v12 = GameRoutine_278be0(v29 + v30, &v41, v31);
    if (HIDWORD(v41) != 0 && *(_QWORD*)(a2 + 32) != 0) {
      v12 = GameRoutine_14b560((_QWORD*)(v19 + 4016), &v38, *(_DWORD*)(a2 + 24),
                               a3);
      *(_DWORD*)(*(_QWORD*)(a2 + 32) + 132LL) = v12 + 1;
    }
    v32 = *(_QWORD*)(v20 + 4000);
    v33 = *(_QWORD*)(v20 + 3992);
    *(_QWORD*)(v20 + 4040) = 0;
    *(_DWORD*)(v20 + 4048) = -1;
    if (v32 != v33) {
      v34 = 0;
      do {
        v35 = *(_QWORD*)(v33 + 8 * v34);
        if (*(_BYTE*)(v35 + 1440) == 1) {
          *(_QWORD*)(v35 + 1400) = 0;
          *(_DWORD*)(v35 + 1408) = -1;
          v32 = *(_QWORD*)(v20 + 4000);
          v33 = *(_QWORD*)(v20 + 3992);
        }
        ++v34;
      } while (v34 < (v32 - v33) >> 3);
    }
  }
  else {
    v28 = 128;
  }
  v36 = GameRoutine_2a1b90(v12);
  nn_os_UnlockMutex(v36 + 840);
  return v28;
}

__int64 Sound3DActorNX_14dc10(__int64 a1, int a2)
{
  if (*(_BYTE*)(a1 + 4088LL * a2 + 4137) != 0) {
    return a1 + 4088LL * a2 + 56;
  }
  else {
    return 0;
  }
}

__n128 Sound3DActorNX_Unknown6(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  unsigned __int64 v12;
  __int64 v13;
  __n128 result;

  if (a2 != 0) {
    v4 = GameRoutine_2a1b90(a1);
    nn_os_LockMutex(v4 + 840);
    v5 = snd_target_s_platform;
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1);
    v7 = v5 + 4088LL * (int)v6;
    v8 = *(_QWORD*)(v7 + 4120);
    v9 = *(_QWORD*)(v7 + 4112);
    v10 = v8 - v9;
    if (v10 != 0) {
      v11 = (_QWORD*)(v9 + 16);
      v12 = 0xAAAAAAAAAAAAAAABLL * (v10 >> 3);
      while (*v11 != a2) {
        --v12;
        v11 += 3;
        if (v12 == 0) {
          goto LABEL_9;
        }
      }
      *v11 = 0;
      *((_DWORD*)v11 - 1) = -1;
    }
  LABEL_9:
    v13 = GameRoutine_2a1b90(v6);
    return nn_os_UnlockMutex(v13 + 840);
  }
  return result;
}

__n128 Sound3DActorNX_Unknown8(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int128 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int128 v10;

  v4 = GameRoutine_2a1b90(a1);
  nn_os_LockMutex(v4 + 840);
  *(_QWORD*)&v5 = *(_QWORD*)(a2 + 8);
  v6 = *(_QWORD*)(a1 + 48);
  *((_QWORD*)&v5 + 1) = *(unsigned int*)(a2 + 16);
  v10 = v5;
  v7 = GameRoutine_2771b0(v6, &v10);
  v8 = GameRoutine_2a1b90(v7);
  return nn_os_UnlockMutex(v8 + 840);
}

__n128 Sound3DActorNX_Unknown9(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int128 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int128 v10;

  v4 = GameRoutine_2a1b90(a1);
  nn_os_LockMutex(v4 + 840);
  *(_QWORD*)&v5 = *(_QWORD*)(a2 + 8);
  v6 = *(_QWORD*)(a1 + 48);
  *((_QWORD*)&v5 + 1) = *(unsigned int*)(a2 + 16);
  v10 = v5;
  v7 = GameRoutine_277160(v6, &v10);
  v8 = GameRoutine_2a1b90(v7);
  return nn_os_UnlockMutex(v8 + 840);
}

__n128 Sound3DActorNX_Unknown11(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v2 = GameRoutine_2a1b90(a1);
  nn_os_LockMutex(v2 + 840);
  v3 = GameRoutine_277190(*(_QWORD*)(a1 + 48));
  v4 = GameRoutine_2a1b90(v3);
  return nn_os_UnlockMutex(v4 + 840);
}

__n128 Sound3DActorNX_Unknown12(__int64 a1, int a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v4 = GameRoutine_2a1b90(a1);
  v5 = nn_os_LockMutex(v4 + 840);
  *(_DWORD*)(*(_QWORD*)(a1 + 48) + 232LL) = a2;
  v6 = GameRoutine_2a1b90(v5);
  return nn_os_UnlockMutex(v6 + 840);
}

__n128 Sound3DActorNX_Unknown14(__int64 a1)
{
  void (***v1)(_QWORD);
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  void (***v10)(_QWORD);
  __int64 v11;

  v1 = *(void (****)(_QWORD))(a1 + 48);
  *(_QWORD*)(a1 + 48) = 0;
  v2 = a1;
  v3 = snd_g_memory_ptr[0];
  if (v1 != nullptr) {
    (**v1)(v1);
    a1 = (*(__int64 (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v3 + 24LL))(
        *v3, v1);
  }
  v4 = snd_target_s_platform;
  v5 = GameRoutine_2a1b90(a1);
  nn_os_LockMutex(v5 + 840);
  v6 = v4 + 4088LL * *(int*)(v2 + 8);
  v7 = v6 + 96LL * *(int*)(v2 + 44);
  v8 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v3 + 16LL))(
      *v3, 288, 32);
  v9 = GameRoutine_276b50(v8, v6 + 2392, v7 + 3784);
  v10 = *(void (****)(_QWORD))(v2 + 48);
  *(_QWORD*)(v2 + 48) = v8;
  if (v10 != nullptr) {
    (**v10)(v10);
    v9 = (*(__int64 (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v3 + 24LL))(
        *v3, v10);
  }
  v11 = GameRoutine_2a1b90(v9);
  return nn_os_UnlockMutex(v11 + 840);
}

__int64 Sound3DActorNx_277190(__int64 result)
{
  *(_QWORD*)(result + 240) = 0;
  *(_QWORD*)(result + 248) = 0;
  *(_QWORD*)(result + 256) = 0;
  *(_QWORD*)(result + 264) = 0;
  *(_BYTE*)(result + 272) = 1;
  return result;
}

__int64 Sound3DActorNx_2771b0(__int64 result, _QWORD* a2)
{
  *(_QWORD*)(result + 264) = a2[1];
  *(_QWORD*)(result + 256) = *a2;
  return result;
}

#pragma GCC visibility pop
