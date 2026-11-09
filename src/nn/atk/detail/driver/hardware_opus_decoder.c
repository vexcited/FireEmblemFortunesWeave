#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 OpusDecoderImpl_2b9fa0(_QWORD);
__int64 OpusDecoderImpl_Destructor(_QWORD);
extern __int64 GameData_2135530[3];
__int64 HardwareOpusDecoder_Destructor(_QWORD* a1);

__int64 HardwareOpusDecoder_Destructor(_QWORD* a1)
{
  *a1 = GameData_2135530[0] + 16;
  OpusDecoderImpl_2b9fa0(a1 + 10);
  a1[1] = 0;
  return OpusDecoderImpl_Destructor(a1 + 10);
}

#pragma GCC visibility pop
