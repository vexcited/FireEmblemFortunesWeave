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
__int64
Sound3DActorNX_Unknown5_alt1(_QWORD* a1, __int64 a2, __int64 a3,
                             __int64 a4) __asm__("Sound3DActorNX_Unknown5");
__int64 Sound3DActorNX_14dc10(__int64 a1, int a2);
__n128
Sound3DActorNX_Unknown6_alt1(__int64 a1,
                             __int64 a2) __asm__("Sound3DActorNX_Unknown6");
__n128 Sound3DActorNX_Unknown8(__int64 a1, __int64 a2);
__n128 Sound3DActorNX_Unknown9(__int64 a1, __int64 a2);
__n128 Sound3DActorNX_Unknown11(__int64 a1);
__n128 Sound3DActorNX_Unknown12(__int64 a1, int a2);
__n128 Sound3DActorNX_Unknown14(__int64 a1);
void __attribute__((noreturn)) GameRoutine_164010(void);
__int64 Sound3DActorNx_14b560(_QWORD* a1, __int64* a2, int a3, __int64 a4);
__int64 Sound3DActorNx_277190(__int64 result);
__int64 Sound3DActorNx_2771b0(__int64 result, _QWORD* a2);
__int64 BaseNx_2a1b90(_QWORD);
extern __int64 (*snd_fnd_Vec3_vtable[])();
__attribute__((swiftcall)) void Sound3DActorNX_Unknown7(PSEUDO_X8 x8_,
                                                        __int64 a1);
__attribute__((swiftcall)) void Sound3DActorNX_Unknown10(PSEUDO_X8 x8_,
                                                         __int64 a1);
__int64 BaseNx_27cc40(__int64, __int64, __int64, __int64, __int64);
__int64 GameRoutine_278be0_alt1(__int64, __int64,
                                unsigned int) __asm__("GameRoutine_278be0");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
void* BaseNx_2a1b90_alt1() __asm__("BaseNx_2a1b90");
__int64 Sound3DActorNX_Unknown5(__int64* a1, __int64 a2, __int64 a3,
                                __int64 a4);
__int64 Sound3DActorNX_Unknown6(__int64 result, __int64 a2);

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

__int64 Sound3DActorNX_Unknown5(__int64* a1, __int64 a2, __int64 a3, __int64 a4)
{

#pragma clang fp contract(off)
  void* v8;
  __int64 v9;
  int v10;
  long double v11;
  _DWORD* v12;
  int v13;
  char v14;
  int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  int v24;
  unsigned int v25;
  int v26;
  unsigned int v27;
  __int64 v28;
  __int64 v29;
  unsigned int v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  void* v35;
  __int64 v37;
  char v38;
  char v39;
  __int64 v40;

  v8 = BaseNx_2a1b90_alt1();
  nn_os_LockMutex_alt1((__int64)v8 + 840);
  v9 = snd_target_s_platform;
  v10 = (*(__int64 (**)(__int64))(*(_QWORD*)snd_target_s_platform + 1200LL))(
      snd_target_s_platform);
  if (v10 < (*(int (**)(_QWORD))(**(_QWORD**)snd_g_proxy_ptr[0] + 168LL))(
                *(_QWORD*)snd_g_proxy_ptr[0]) ||
      ((*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v9 + 232LL))(
           v9, *(unsigned int*)(a2 + 24), *(unsigned int*)(a2 + 8),
           *(_QWORD*)(a2 + 16)) &
       1) != 0) {
    v12 = *(_DWORD**)(a4 + 5648);
    LODWORD(v11) = v12[107];
    v13 = v12[104];
    if (v12[106] == 1) {
      v14 = 1;
    }
    else {
      v14 = 2;
    }
    HIDWORD(v37) = v12[107];
    v38 = v14;
    v39 = v12[108];
    v15 = v12[101] != 0;
    LODWORD(v37) = v15;
    if (v13 != 0) {
      v15 |= 2u;
      LODWORD(v37) = v15;
    }
    if (v12[102] != 0) {
      v15 |= 4u;
      LODWORD(v37) = v15;
    }
    if (v12[103] != 0) {
      v15 |= 8u;
      LODWORD(v37) = v15;
    }
    if (v12[105] != 0) {
      LODWORD(v37) = v15 | 0x10;
    }
    v16 = (*(__int64 (**)(__int64*, long double))(*a1 + 32))(a1, v11);
    v17 = v9 + 56;
    v18 = v9 + 56 + 4088LL * v16;
    if (*(_BYTE*)(v18 + 4081) != 0) {
      v19 = v9 + 56 + 4088LL * v16;
    }
    else {
      v19 = 0;
    }
    *(_DWORD*)(v19 + 4048) = *(_DWORD*)(a2 + 24);
    v20 = *(_QWORD*)(v19 + 4000);
    v21 = *(_QWORD*)(v19 + 3992);
    *(_QWORD*)(v19 + 4040) = &v37;
    if (v20 != v21) {
      v22 = 0;
      do {
        v23 = *(_QWORD*)(v21 + 8 * v22);
        if (*(_BYTE*)(v23 + 1440) == 1) {
          v24 = *(_DWORD*)(a2 + 24);
          *(_QWORD*)(v23 + 1400) = &v37;
          *(_DWORD*)(v23 + 1408) = v24;
          v20 = *(_QWORD*)(v19 + 4000);
          v21 = *(_QWORD*)(v19 + 3992);
        }
        ++v22;
      } while (v22 < (v20 - v21) >> 3);
    }
    v25 = BaseNx_27cc40(a1[6], a2 + 32, *(unsigned int*)(a2 + 24),
                        *(_QWORD*)(a2 + 16), a3 + 8);
    v26 = *(_DWORD*)(a2 + 8);
    v40 = 0;
    v27 = v25;
    v28 = v17 + 4088LL * v26;
    if (*(_BYTE*)(v28 + 4080) != 0) {
      v29 = 1584;
    }
    else {
      v29 = 32;
    }
    v30 = (*(__int64 (**)(__int64))(*(_QWORD*)a3 + 72LL))(a3);
    GameRoutine_278be0_alt1(v28 + v29, (__int64)&v40, v30);
    if (HIDWORD(v40) != 0 && *(_QWORD*)(a2 + 32) != 0) {
      *(_DWORD*)(*(_QWORD*)(a2 + 32) + 132LL) =
          Sound3DActorNx_14b560((_QWORD*)(v18 + 4016), &v37,
                                *(_DWORD*)(a2 + 24), a3) +
          1;
    }
    v31 = *(_QWORD*)(v19 + 4000);
    v32 = *(_QWORD*)(v19 + 3992);
    *(_QWORD*)(v19 + 4040) = 0;
    *(_DWORD*)(v19 + 4048) = -1;
    if (v31 != v32) {
      v33 = 0;
      do {
        v34 = *(_QWORD*)(v32 + 8 * v33);
        if (*(_BYTE*)(v34 + 1440) == 1) {
          *(_QWORD*)(v34 + 1400) = 0;
          *(_DWORD*)(v34 + 1408) = -1;
          v31 = *(_QWORD*)(v19 + 4000);
          v32 = *(_QWORD*)(v19 + 3992);
        }
        ++v33;
      } while (v33 < (v31 - v32) >> 3);
    }
  }
  else {
    v27 = 128;
  }
  v35 = BaseNx_2a1b90_alt1();
  nn_os_UnlockMutex_alt1((__int64)v35 + 840);
  return v27;
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

__int64 Sound3DActorNX_Unknown6(__int64 result, __int64 a2)
{
  __int64 v3;
  void* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  unsigned __int64 v11;
  void* v12;

  if (a2 != 0) {
    v3 = result;
    v4 = BaseNx_2a1b90_alt1();
    nn_os_LockMutex_alt1((__int64)v4 + 840);
    v5 = snd_target_s_platform;
    v6 = v5 + 4088LL * (*(int (**)(__int64))(*(_QWORD*)v3 + 32LL))(v3);
    v7 = *(_QWORD*)(v6 + 4120);
    v8 = *(_QWORD*)(v6 + 4112);
    v9 = v7 - v8;
    if (v9 != 0) {
      v10 = (_QWORD*)(v8 + 16);
      v11 = 0xAAAAAAAAAAAAAAABLL * (v9 >> 3);
      while (*v10 != a2) {
        --v11;
        v10 += 3;
        if (v11 == 0) {
          goto LABEL_9;
        }
      }
      *v10 = 0;
      *((_DWORD*)v10 - 1) = -1;
    }
  LABEL_9:
    v12 = BaseNx_2a1b90_alt1();
    return nn_os_UnlockMutex_alt1((__int64)v12 + 840);
  }
  return result;
}

__attribute__((swiftcall)) void Sound3DActorNX_Unknown7(PSEUDO_X8 x8_,
                                                        __int64 a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v5;
  __int128 v6;
  __int64 v7;

  v4 = BaseNx_2a1b90(a1);
  v5 = nn_os_LockMutex(v4 + 840);
  v6 = *(_OWORD*)(*(_QWORD*)(a1 + 48) + 256LL);
  *(_QWORD*)(a2 + 8) = v6;
  *(_QWORD*)a2 = snd_fnd_Vec3_vtable;
  *(_DWORD*)(a2 + 16) = DWORD2(v6);
  v7 = BaseNx_2a1b90(v5);
  {
    nn_os_UnlockMutex(v7 + 840);
    return;
  }
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

__attribute__((swiftcall)) void Sound3DActorNX_Unknown10(PSEUDO_X8 x8_,
                                                         __int64 a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v5;
  __int128 v6;
  __int64 v7;

  v4 = BaseNx_2a1b90(a1);
  v5 = nn_os_LockMutex(v4 + 840);
  v6 = *(_OWORD*)(*(_QWORD*)(a1 + 48) + 240LL);
  *(_QWORD*)(a2 + 8) = v6;
  *(_QWORD*)a2 = snd_fnd_Vec3_vtable;
  *(_DWORD*)(a2 + 16) = DWORD2(v6);
  v7 = BaseNx_2a1b90(v5);
  {
    nn_os_UnlockMutex(v7 + 840);
    return;
  }
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
