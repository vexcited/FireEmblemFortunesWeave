#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_InitializeHardwareOpusMultiStreamDecoder(_QWORD);
extern __int64 (*ConstructSet_ptr)(_QWORD*);

__int64 HardwareOpusMultiStreamDecoder_Unknown4(__int64 a1)
{
  return nn_codec_InitializeHardwareOpusMultiStreamDecoder(a1 + 8);
}

#pragma GCC visibility pop
