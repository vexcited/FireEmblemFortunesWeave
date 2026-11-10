#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
float GameRoutine_178710(_QWORD, _QWORD, _QWORD);
float FxSpeakerNX_unknown24(__int64 a1, unsigned int a2, unsigned int a3);
float FxSpeakerNx_178710(__int64 a1, int a2, int a3);

float FxSpeakerNX_unknown24(__int64 a1, unsigned int a2, unsigned int a3)
{
  float v6;

  nn_os_LockMutex(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL) + 6304LL);
  v6 = GameRoutine_178710(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL), a2, a3);
  nn_os_UnlockMutex(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL) + 6304LL);
  return v6;
}

float FxSpeakerNx_178710(__int64 a1, int a2, int a3)
{
  float v6;

  nn_os_LockMutex(a1 + 6304);
  v6 = *(float*)(a1 + 3096LL * a3 + 1032LL * a2 + 1140);
  nn_os_UnlockMutex(a1 + 6304);
  return v6;
}

#pragma GCC visibility pop
