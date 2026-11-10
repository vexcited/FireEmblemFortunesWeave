#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_27cc40(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a1b90(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
extern __int64 (*snd_target_SoundActorNX_vtable[])();
extern __int64 snd_g_proxy_ptr[2];
extern __int64 snd_target_s_platform;
extern __int64* snd_g_memory_ptr[2];
_QWORD* SoundActorNX_Destructor(_QWORD* result);
__int64 SoundActorNX_Unknown5(__int64 a1, __int64 a2, __int64 a3);
__n128 SoundActorNX_Unknown9(_DWORD* a1, _DWORD* a2);
extern __int64 (*snd_fnd_Vec3_vtable[])();
__attribute__((swiftcall)) void SoundActorNX_Unknown10(PSEUDO_X8 x8_,
                                                       __int64 a1);
__attribute__((swiftcall)) void SoundActorNX_Unknown7(PSEUDO_X8 x8_);

_QWORD* SoundActorNX_Destructor(_QWORD* result)
{
  void (***v1)(_QWORD);
  _QWORD* v2;
  __int64* v3;
  void (***v4)(_QWORD);

  v1 = (void (***)(_QWORD))result[6];
  result[6] = 0;
  *result = snd_target_SoundActorNX_vtable;
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

__int64 SoundActorNX_Unknown5(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;

  v6 = GameRoutine_2a1b90(a1);
  nn_os_LockMutex(v6 + 840);
  v7 = snd_target_s_platform;
  v8 = (*(__int64 (**)(__int64))(*(_QWORD*)snd_target_s_platform + 1200LL))(
      snd_target_s_platform);
  if (v8 < (*(int (**)(_QWORD))(**(_QWORD**)snd_g_proxy_ptr[0] + 168LL))(
               *(_QWORD*)snd_g_proxy_ptr[0]) ||
      ((v9 = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)v7 + 232LL))(v7, *(unsigned int*)(a2 + 24),
                                   *(unsigned int*)(a2 + 8),
                                   *(_QWORD*)(a2 + 16))) &
       1) != 0) {
    v9 = GameRoutine_27cc40(*(_QWORD*)(a1 + 48), a2 + 32,
                            *(unsigned int*)(a2 + 24), *(_QWORD*)(a2 + 16),
                            a3 + 8);
    v10 = v9;
  }
  else {
    v10 = 128;
  }
  v11 = GameRoutine_2a1b90(v9);
  nn_os_UnlockMutex(v11 + 840);
  return v10;
}

__n128 SoundActorNX_Unknown9(_DWORD* a1, _DWORD* a2)
{
  __int64 v4;
  int v5;
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  int v11;
  int v12;
  int v13;

  v4 = GameRoutine_2a1b90(a1);
  nn_os_LockMutex(v4 + 840);
  v5 = a2[2];
  a1[6] = v5;
  v13 = v5;
  v6 = a2[3];
  a1[7] = v6;
  v7 = a2[4];
  a1[8] = v7;
  v11 = v7;
  v12 = v6;
  v8 = (*(__int64 (**)(_QWORD, int*, int*, int*))(
      **(_QWORD**)snd_g_proxy_ptr[0] + 360LL))(*(_QWORD*)snd_g_proxy_ptr[0],
                                               &v13, &v12, &v11);
  if ((v8 & 1) != 0) {
    a1[10] = v13;
  }
  v9 = GameRoutine_2a1b90(v8);
  return nn_os_UnlockMutex(v9 + 840);
}

__attribute__((swiftcall)) void SoundActorNX_Unknown10(PSEUDO_X8 x8_,
                                                       __int64 a1)
{

#pragma clang fp contract(off)
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  float result;
  __int64 v3;

  result = *(float*)(a1 + 32);
  v3 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)a2 = snd_fnd_Vec3_vtable;
  *(_QWORD*)(a2 + 8) = v3;
  *(float*)(a2 + 16) = result;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void SoundActorNX_Unknown7(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  a1[2] = 0;
  *a1 = snd_fnd_Vec3_vtable;
  a1[1] = 0;
}

#pragma GCC visibility pop
