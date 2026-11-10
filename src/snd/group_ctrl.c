#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_190020(_QWORD, _QWORD);
__int64 GameRoutine_1905a40(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
extern __int16* snd_g_groupMutex_ptr[12];
extern __int64 snd_GroupCtrl_s_instance;
extern char GameData_1a9f09e;
__attribute__((swiftcall)) void GroupCtrl_ecb80(PSEUDO_X8 x8_);

__attribute__((swiftcall)) void GroupCtrl_ecb80(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  int v3;
  __int64 v4;
  __int64* v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = snd_GroupCtrl_s_instance;
  nn_os_LockMutex(snd_g_groupMutex_ptr[0]);
  v3 = *(_DWORD*)(v2 + 80);
  if (v3 > 1) {
    v4 = *(_QWORD*)(v2 + 56) + 48LL * (unsigned int)v3;
    v6 = *(_BYTE*)(v4 + 24);
    v5 = (__int64*)(v4 + 24);
    if ((v6 & 1) != 0) {
      GameRoutine_1905a40(a1, v5[2], v5[1]);
    }
    else {
      v7 = *v5;
      v8 = v5[1];
      v9 = v5[2];
      a1[1] = v8;
      a1[2] = v9;
      *a1 = v7;
    }
    {
      nn_os_UnlockMutex(snd_g_groupMutex_ptr[0]);
      return;
    }
  }
  else {
    GameRoutine_190020(a1, &GameData_1a9f09e);
    {
      nn_os_UnlockMutex(snd_g_groupMutex_ptr[0]);
      return;
    }
  }
}

#pragma GCC visibility pop
