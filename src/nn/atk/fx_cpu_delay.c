#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_168ad0(_QWORD);
__int64 nn_audio_ProcessAuxDelay(_QWORD, _QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_1a0a590(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
void* SoundVoiceNX_14e360();
void FxCpuDelay_Unknown5(__int64 a1, __int64 a2, _DWORD* a3);

void FxCpuDelay_Unknown5(__int64 a1, __int64 a2, _DWORD* a3)
{
  int v3;
  int v5;
  int v6;
  __int64 v8;
  char* v9;
  int i;
  __int64 v11;
  char* v12;
  __int64 v13;

  if (*(_QWORD*)(a1 + 160) == 0) {
    return;
  }
  v3 = a3[4];
  v5 = a3[3] * *a3;
  v6 = v3 / v5;
  if (v3 % v5 != 0) {
    a1 = nn_diag_detail_AbortImpl_1a0a590(a1);
    goto LABEL_10;
  }
  if (v6 > a3[2]) {
  LABEL_10:
    v13 = nn_diag_detail_AbortImpl_1a0a590(a1);
    GameRoutine_168ad0(v13);
    return;
  }
  v8 = a1;
  v9 = (char*)SoundVoiceNX_14e360();
  nn_os_LockMutex(v9 + 1720);
  if (v6 >= 1) {
    for (i = 0; i != v6; ++i) {
      v11 = a2 + 4LL * *a3 * i * a3[3];
      nn_audio_ProcessAuxDelay(v8 + 104, v11, v11);
    }
  }
  v12 = (char*)SoundVoiceNX_14e360();
  nn_os_UnlockMutex(v12 + 1720);
}

#pragma GCC visibility pop
