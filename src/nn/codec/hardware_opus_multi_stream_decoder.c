#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_183910(__int64, __int64);
__int64 nn_codec_InitializeHardwareOpusMultiStreamDecoder(_QWORD);
extern __int64 (*ConstructSet_ptr)(_QWORD*);
extern __int64 (*GameData_1f72960[])();
__int64 GameHr_189e50(_QWORD* a1, __int64 a2);

__int64 HardwareOpusMultiStreamDecoder_Unknown4(__int64 a1)
{
  return nn_codec_InitializeHardwareOpusMultiStreamDecoder(a1 + 8);
}

__int64 GameHr_189e50(_QWORD* a1, __int64 a2)
{
  __int64 result;

  result = GameRoutine_183910((__int64)a1, a2);
  *a1 = &ConstructSet_ptr;
  a1[694] = GameData_1f72960;
  return result;
}

#pragma GCC visibility pop
