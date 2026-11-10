#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 snd_fnd_WeakHandle_get(_QWORD, float);
extern __int64 (*snd_target_StartInfoNX_vtable[])();
extern __int64 snd_target_s_platform;
extern __int64* snd_g_memory_ptr[2];
void GameRoutine_651250(void*, unsigned __int64);
__int64 StartInfoNX_Unknown3(__int64 result, int a2);
__int64 StartInfoNX_Unknown4(__int64 result);
__int64 StartInfoNX_Unknown8(__int64 a1);
__int64 StartInfoNX_Unknown14(__int64 result);
__int64 StartInfoNX_Unknown11(__int64 a1, __int64 a2);
__int64 StartInfoNX_14bbe0(_DWORD* a1, _DWORD* a2);
__int64 StartInfoNX_Unknown15(__int64 a1, __int64 a2);
__int64 StartInfoNX_Destructor(__int64 result);
void StartInfoNX_DeletingDestructor(_QWORD* a1);
__int64 StartInfoNX_Unknown14(__int64 result);

__int64 StartInfoNX_Unknown3(__int64 result, int a2)
{
  *(_DWORD*)(result + 8) |= a2;
  return result;
}

__int64 StartInfoNX_Unknown4(__int64 result)
{
  *(_DWORD*)(result + 308) = 2;
  *(_BYTE*)(result + 316) = 1;
  return result;
}

__int64 StartInfoNX_Unknown8(__int64 a1)
{
  __int64 result;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)snd_target_s_platform + 160LL))(
      snd_target_s_platform);
  if ((_DWORD)result != -1) {
    *(_DWORD*)(a1 + 20) = result;
  }
  return result;
}

__int64 StartInfoNX_14b920() { return snd_target_s_platform; }

__int64 StartInfoNX_Unknown11(__int64 a1, __int64 a2)
{
  __int64 result;

  result = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)snd_target_s_platform + 232LL))(
      snd_target_s_platform, *(unsigned int*)(*(_QWORD*)(a2 + 5664) + 24LL),
      *(unsigned int*)(*(_QWORD*)(a2 + 5664) + 8LL),
      *(_QWORD*)(*(_QWORD*)(a2 + 5664) + 16LL));
  if ((result & 1) != 0) {
    *(_QWORD*)(a1 + 96) = StartInfoNX_14bbe0;
    *(_QWORD*)(a1 + 104) = a2;
  }
  return result;
}

__int64 StartInfoNX_14bbe0(_DWORD* a1, _DWORD* a2)
{
  int v2;

  v2 = a2[1483];
  if (v2 < 0) {
    return 0;
  }
  *a1 = v2;
  a2[1482] = v2;
  (*(void (**)(_DWORD*, __int64))(*(_QWORD*)a2 + 720LL))(a2, 0xFFFFFFFFLL);
  return 1;
}

__int64 StartInfoNX_Unknown14(__int64 result)
{
  *(_BYTE*)(result + 324) = 0;
  *(_DWORD*)(result + 320) = 1;
  return result;
}

__int64 StartInfoNX_Unknown15(__int64 a1, __int64 a2)
{
  __int64 result;
  float v5;
  _QWORD* v6;
  __int64 v7;
  float v8;
  __int64 v9;

  result = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)snd_target_s_platform + 232LL))(
      snd_target_s_platform, *(unsigned int*)(a2 + 5768),
      *(unsigned int*)(a2 + 5772), *(_QWORD*)(a2 + 5776));
  if ((result & 1) != 0) {
    v6 = *(_QWORD**)(a2 + 5672);
    v7 = snd_fnd_WeakHandle_get(*v6 + 24LL, v5);
    *(_QWORD*)(a1 + 72) = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 72LL))(v7);
    v9 = snd_fnd_WeakHandle_get(*v6 + 24LL, v8);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 80LL))(v9);
    *(_QWORD*)(a1 + 88) = (unsigned int)result;
  }
  return result;
}

__int64 StartInfoNX_Destructor(__int64 result)
{
  *(_QWORD*)result = snd_target_StartInfoNX_vtable;
  if ((*(_BYTE*)(result + 376) & 1) != 0) {
    return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)snd_g_memory_ptr[0] +
                                            24LL))(*snd_g_memory_ptr[0],
                                                   *(_QWORD*)(result + 392));
  }
  return result;
}

void StartInfoNX_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v1;

  *a1 = snd_target_StartInfoNX_vtable;
  if ((a1[47] & 1) != 0) {
    v1 = a1;
    (*(void (**)(_QWORD* __return_ptr, _QWORD, _QWORD))(
        **(_QWORD**)snd_g_memory_ptr[0] + 24LL))(*(_QWORD**)snd_g_memory_ptr[0],
                                                 *snd_g_memory_ptr[0], a1[49]);
    a1 = v1;
  }
  GameRoutine_651250(a1, 0x190u);
}

#pragma GCC visibility pop
