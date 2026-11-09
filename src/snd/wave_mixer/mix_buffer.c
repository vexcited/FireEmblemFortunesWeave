#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64* GameData_2134c08[2];
extern __int64* snd_g_memory_ptr[2];
void GameRoutine_651250(void*, unsigned __int64);
_QWORD* MixBuffer_Destructor(_QWORD* result);
void MixBuffer_DeletingDestructor(_QWORD* a1);

_QWORD* MixBuffer_Destructor(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = result;
  v2 = result[1];
  *result = GameData_2134c08[0] + 2;
  v3 = snd_g_memory_ptr[0];
  if (v2 != 0) {
    v4 = *snd_g_memory_ptr[0];
    v1[1] = 0;
    result = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v4 + 24LL))(v4);
  }
  if (v1[2] != 0) {
    v5 = *v3;
    v1[2] = 0;
    result = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v5 + 24LL))(v5);
  }
  if (v1[3] != 0) {
    v6 = *v3;
    v1[3] = 0;
    result = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6);
  }
  if (v1[4] != 0) {
    v7 = *v3;
    v1[4] = 0;
    return (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v7 + 24LL))(v7);
  }
  return result;
}

void MixBuffer_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v2 = a1[1];
  *a1 = GameData_2134c08[0] + 2;
  v3 = snd_g_memory_ptr[0];
  if (v2 != 0) {
    v4 = *snd_g_memory_ptr[0];
    a1[1] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 24LL))(v4);
  }
  if (a1[2] != 0) {
    v5 = *v3;
    a1[2] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 24LL))(v5);
  }
  if (a1[3] != 0) {
    v6 = *v3;
    a1[3] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6);
  }
  if (a1[4] != 0) {
    v7 = *v3;
    a1[4] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v7 + 24LL))(v7);
  }
  GameRoutine_651250(a1, 0x38u);
}

#pragma GCC visibility pop
