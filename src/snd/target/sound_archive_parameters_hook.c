#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*snd_target_SoundArchiveParametersHook_vtable[])();
extern __int64 snd_g_memory;
extern __int64* snd_g_memory_ptr[2];
void GameRoutine_651250(void*, unsigned __int64);
__int64 SoundArchiveParametersHook_Unknown14(__int64 a1, int a2, __int64 a3);
_QWORD* SoundArchiveParametersHook_Destructor(_QWORD* result);
void SoundArchiveParametersHook_DeletingDestructor(_QWORD* a1);
__int64 GameHr_17e300(__int64 result);
__int64 SoundArchiveParametersHook_Unknown20(__int64 a1, __int64 a2,
                                             unsigned int a3)
{
  return a3;
}

__int64 SoundArchiveParametersHook_Unknown14(__int64 a1, int a2, __int64 a3)
{
  __int64* v3;
  bool v4;
  __int64 result;
  __int64 v6;

  v3 = *(__int64**)(a1 + 24);
  v4 = v3 != nullptr && a2 == *(_DWORD*)(a1 + 32);
  result = v4;
  if (v4) {
    v6 = *v3;
    *(_DWORD*)(a3 + 8) = *((_DWORD*)v3 + 2);
    *(_QWORD*)a3 = v6;
  }
  return result;
}

_QWORD* SoundArchiveParametersHook_Destructor(_QWORD* result)
{
  __int64 v1;

  v1 = result[5];
  *result = snd_target_SoundArchiveParametersHook_vtable;
  if (v1 != 0) {
    result[6] = v1;
    return (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)snd_g_memory + 24LL))(
        snd_g_memory);
  }
  return result;
}

void SoundArchiveParametersHook_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  _QWORD* v2;

  v1 = a1[5];
  *a1 = snd_target_SoundArchiveParametersHook_vtable;
  if (v1 != 0) {
    a1[6] = v1;
    v2 = a1;
    (*(void (**)(_QWORD* __return_ptr, _QWORD))(
        **(_QWORD**)snd_g_memory_ptr[0] + 24LL))(*(_QWORD**)snd_g_memory_ptr[0],
                                                 *snd_g_memory_ptr[0]);
    a1 = v2;
  }
  GameRoutine_651250(a1, 0x40u);
}

__int64 GameHr_17e300(__int64 result)
{
  int v1;
  int v2;

  v1 = *(_DWORD*)(result + 5728);
  if (v1 <= 1) {
    v2 = v1 + 1;
  }
  else {
    v2 = 0;
  }
  *(_DWORD*)(result + 5728) = v2;
  return result;
}

#pragma GCC visibility pop
