#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_audio_common_2358c4(__int64 result, int a2);
__int64 nn_audio_common_2358f4(__int64 result, int a2);

__int64 nn_audio_common_2358c4(__int64 result, int a2)
{
  int v2;

  v2 = a2 >> 6;
  *(_QWORD*)(*(_QWORD*)(result + 8) + 8LL * v2) |= 1LL << a2;
  *(_QWORD*)(*(_QWORD*)(result + 24) + 8LL * v2) &= ~(1LL << a2);
  return result;
}

__int64 nn_audio_common_2358f4(__int64 result, int a2)
{
  int v2;

  v2 = a2 >> 6;
  *(_QWORD*)(*(_QWORD*)(result + 8) + 8LL * v2) &= ~(1LL << a2);
  *(_QWORD*)(*(_QWORD*)(result + 24) + 8LL * v2) |= 1LL << a2;
  return result;
}

#pragma GCC visibility pop
