#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_detail_UnexpectedDefaultImpl_plt_857150(_QWORD);
extern unsigned int SdkData_bb0590[8];
__int64 aac_encoder_362b40(__int64 result);
__int64 aac_encoder_362ba0(int a1);

__int64 aac_encoder_362b40(__int64 result)
{
  if ((int)result <= 63) {
    if ((unsigned int)(result - 32) >= 4) {
      if ((_DWORD)result != 0) {
        goto LABEL_11;
      }
      return result;
    }
    return 96;
  }
  if ((unsigned int)(result - 64) < 5) {
    return 64;
  }
  if ((_DWORD)result == 96) {
    return 96;
  }
  if ((_DWORD)result != 128) {
  LABEL_11:
    nn_detail_UnexpectedDefaultImpl_plt_857150(result);
    __udf(0);
  }
  return result;
}

__int64 aac_encoder_362ba0(int a1)
{
  if ((unsigned int)(a1 - 1) > 7) {
    return 0xFFFFFFFFLL;
  }
  else {
    return SdkData_bb0590[a1 - 1];
  }
}

#pragma GCC visibility pop
