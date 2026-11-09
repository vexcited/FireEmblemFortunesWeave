#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
extern __int64 snd_g_memory;
__int64 Group_1100a0(__int64 result);

__int64 Group_1100a0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;

  if (*(_BYTE*)(result + 68) == 1) {
    v1 = result;
    nn_os_LockMutex(result + 96);
    while (*(_QWORD*)(v1 + 88) != 0) {
      v2 = *(_QWORD*)(v1 + 80);
      v3 = *(_QWORD*)(v2 + 16);
      *(_QWORD*)(v2 + 16) = 0;
      if (v3 != 0) {
        if ((*(_BYTE*)(v3 + 16) & 1) != 0) {
          (*(void (**)(__int64, _QWORD))(*(_QWORD*)snd_g_memory + 24LL))(
              snd_g_memory, *(_QWORD*)(v3 + 32));
        }
        (*(void (**)(__int64, __int64))(*(_QWORD*)snd_g_memory + 24LL))(
            snd_g_memory, v3);
      }
      v4 = *(_QWORD**)(v1 + 80);
      v5 = (_QWORD*)v4[1];
      *(_QWORD*)(*v4 + 8LL) = v5;
      *v5 = *v4;
      --*(_QWORD*)(v1 + 88);
      v6 = v4[2];
      v4[2] = 0;
      if (v6 != 0) {
        if ((*(_BYTE*)(v6 + 16) & 1) != 0) {
          (*(void (**)(__int64, _QWORD))(*(_QWORD*)snd_g_memory + 24LL))(
              snd_g_memory, *(_QWORD*)(v6 + 32));
        }
        (*(void (**)(__int64, __int64))(*(_QWORD*)snd_g_memory + 24LL))(
            snd_g_memory, v6);
      }
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)snd_g_memory + 24LL))(
          snd_g_memory, v4);
    }
    result = nn_os_UnlockMutex(v1 + 96);
    *(_BYTE*)(v1 + 68) = 0;
  }
  return result;
}

#pragma GCC visibility pop
