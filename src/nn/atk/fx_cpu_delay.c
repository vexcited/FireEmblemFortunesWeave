#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_168ad0(_QWORD);
__int64 nn_audio_ProcessAuxDelay(_QWORD, _QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_1a0a590(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
void* SoundVoiceNX_14e360();
void FxCpuDelay_Unknown5_alt1(__int64 a1, __int64 a2,
                              _DWORD* a3) __asm__("FxCpuDelay_Unknown5");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
void nn_diag_detail_AbortImpl_1a0a590_alt1() __asm__(
    "nn_diag_detail_AbortImpl_1a0a590");
__int64 FxCpuDelay_Unknown5(__int64 result, __int64 a2, _DWORD* a3);

__int64 FxCpuDelay_Unknown5(__int64 result, __int64 a2, _DWORD* a3)
{
  int v3;
  int v5;
  int v6;
  __int64 v8;
  void* v9;
  int i;
  __int64 v11;
  void* v12;

  if (*(_QWORD*)(result + 160) != 0) {
    v3 = a3[4];
    v5 = a3[3] * *a3;
    v6 = v3 / v5;
    if (v3 % v5 != 0) {
      nn_diag_detail_AbortImpl_1a0a590_alt1();
    }
    if (v6 > (signed __int32)a3[2]) {
      nn_diag_detail_AbortImpl_1a0a590_alt1();
    }
    v8 = result;
    v9 = SoundVoiceNX_14e360();
    nn_os_LockMutex_alt1((__int64)v9 + 1720);
    if (v6 >= 1) {
      for (i = 0; i != v6; ++i) {
        v11 = a2 + 4LL * *a3 * i * a3[3];
        nn_audio_ProcessAuxDelay(v8 + 104, v11, v11);
      }
    }
    v12 = SoundVoiceNX_14e360();
    return nn_os_UnlockMutex_alt1((__int64)v12 + 1720);
  }
  return result;
}

#pragma GCC visibility pop
