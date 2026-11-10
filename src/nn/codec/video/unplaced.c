#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_rtld_RegisterCrtDestructor();
unsigned int* nn_sm_detail_CloseSession(unsigned int* result);
unsigned int* nn_codec_video_336a90(unsigned __int8* a1);
__int64 nn_codec_video_3376e0();

unsigned int* nn_codec_video_336a90(unsigned __int8* a1)
{
  unsigned int* result;
  int v2;

  v2 = *a1;
  result = (unsigned int*)(a1 + 4);
  if (v2 == 1) {
    return nn_sm_detail_CloseSession(result);
  }
  return result;
}

__int64 nn_codec_video_3376e0()
{
  fw_rtld_RegisterCrtDestructor();
  return fw_rtld_RegisterCrtDestructor();
}

#pragma GCC visibility pop
