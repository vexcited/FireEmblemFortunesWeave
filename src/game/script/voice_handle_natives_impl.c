#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 VoiceHandle_Construct(__int64 result);
__int64 VoiceHandle_ConstructFrom(__int64 a1, __int64 a2);

__int64 VoiceHandle_Construct(__int64 result)
{
  *(_QWORD*)result = 0;
  *(_DWORD*)(result + 8) = 0x2000;
  return result;
}

__int64 VoiceHandle_ConstructFrom(__int64 a1, __int64 a2)
{
  *(_QWORD*)a2 = 0;
  *(_DWORD*)(a2 + 8) = 0x2000;
  return GameRoutine_112180(a2, a1);
}

#pragma GCC visibility pop
