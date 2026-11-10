#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _QWORD SdkData_c2d1c0[8];
__int64 nn_codec_aac_362420(__int64 a1);
__int64 nn_codec_aac_36267c();
__int64 nn_codec_aac_362688(__int64 a1, int a2);
__int64 nn_codec_aac_3626d8(int a1);

__int64 nn_codec_aac_362420(__int64 a1)
{
  unsigned int v1;

  v1 = *(_DWORD*)(a1 + 56);
  if (v1 == 10000) {
    return 29;
  }
  else {
    return v1;
  }
}

__int64 nn_codec_aac_36267c() { return 253624; }

__int64 nn_codec_aac_362688(__int64 a1, int a2)
{
  return SdkData_c2d1c0[a2 - 1];
}

__int64 nn_codec_aac_3626d8(int a1) { return 2LL * (a1 << 10); }

#pragma GCC visibility pop
