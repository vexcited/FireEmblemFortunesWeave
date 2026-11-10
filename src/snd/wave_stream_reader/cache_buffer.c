#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*snd_WaveStreamReader_CacheBuffer_vtable[])();
extern __int64 snd_g_memory;
extern __int64* snd_g_memory_ptr[2];
void GameRoutine_651250(void*, unsigned __int64);
_QWORD* CacheBuffer_Destructor(_QWORD* result);
void CacheBuffer_DeletingDestructor(_QWORD* a1);

_QWORD* CacheBuffer_Destructor(_QWORD* result)
{
  __int64 v1;

  v1 = result[4];
  *result = snd_WaveStreamReader_CacheBuffer_vtable;
  if (v1 != 0) {
    result[4] = 0;
    return (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)snd_g_memory + 24LL))(
        snd_g_memory);
  }
  return result;
}

void CacheBuffer_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  _QWORD* v2;

  v1 = a1[4];
  *a1 = snd_WaveStreamReader_CacheBuffer_vtable;
  if (v1 != 0) {
    a1[4] = 0;
    v2 = a1;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(
        **(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        (void*)*(_QWORD**)snd_g_memory_ptr[0], *snd_g_memory_ptr[0]);
    a1 = v2;
  }
  GameRoutine_651250(a1, 0x30u);
}

#pragma GCC visibility pop
