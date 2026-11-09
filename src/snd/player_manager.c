#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_os_FinalizeLightEvent(_QWORD);
extern __int64 snd_g_memory;
extern __int64* GameData_2134bb8;
__int64 PlayerManager_Destructor(_QWORD* a1);

__int64 PlayerManager_Destructor(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *a1 = GameData_2134bb8 + 2;
  result = nn_os_FinalizeLightEvent(a1 + 30);
  v3 = a1[29];
  a1[29] = 0;
  if (v3 != 0) {
    result =
        (*(__int64 (**)(__int64))(*(_QWORD*)snd_g_memory + 24LL))(snd_g_memory);
  }
  v4 = a1[26];
  a1[26] = 0;
  if (v4 != 0) {
    result =
        (*(__int64 (**)(__int64))(*(_QWORD*)snd_g_memory + 24LL))(snd_g_memory);
  }
  v5 = a1[8];
  if (v5 != 0) {
    v6 = snd_g_memory;
    a1[9] = v5;
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6);
  }
  v7 = a1[4];
  if (v7 != 0) {
    v8 = snd_g_memory;
    a1[5] = v7;
    return (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 24LL))(v8);
  }
  return result;
}

#pragma GCC visibility pop
