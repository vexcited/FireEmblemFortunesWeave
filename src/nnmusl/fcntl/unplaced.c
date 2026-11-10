#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_b4680(_QWORD);
__int64 __errno_location_plt(_QWORD, _QWORD);
__int64 __nnmusl_ftruncate(void);
__int64 __nnmusl_open_file(_QWORD, _QWORD);
__int64 __nnmusl_path_kind(void);
__int64 nn_detail_UnexpectedDefaultImpl_plt_857150(_QWORD);
__int64 nnmusl_fcntl_b5b00(__int64 a1);

__int64 nnmusl_fcntl_b5b00(__int64 a1)
{
  __int64 result;
  __int64 v3;
  int* v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;

  result = __nnmusl_path_kind();
  if ((int)result <= 0) {
    if ((_DWORD)result == -1) {
      return result;
    }
    if ((_DWORD)result == 0) {
      v4 = (int*)__errno_location_plt(result, v3);
      v5 = 21;
    LABEL_8:
      *v4 = v5;
      return 0xFFFFFFFFLL;
    }
    goto LABEL_16;
  }
  if ((_DWORD)result != 1) {
    if ((_DWORD)result == 2) {
      v4 = (int*)__errno_location_plt(result, v3);
      v5 = 2;
      goto LABEL_8;
    }
  LABEL_16:
    nn_detail_UnexpectedDefaultImpl_plt_857150(result);
    __udf(0);
  }
  v6 = __nnmusl_open_file(a1, 1);
  if ((v6 & 0x80000000) != 0) {
    return 0xFFFFFFFFLL;
  }
  v7 = v6;
  v8 = __nnmusl_ftruncate();
  if ((int)SdkRoutine_b4680(v7) <= -1) {
    return 0xFFFFFFFFLL;
  }
  else {
    return v8;
  }
}

#pragma GCC visibility pop
