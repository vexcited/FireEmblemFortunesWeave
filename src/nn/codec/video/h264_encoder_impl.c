#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_gs_sdk_CalculateNativeImageHandle_plt(_QWORD, _QWORD);
__int64 nn_codec_RegisterH264EncoderBuffer(__int64 a1, unsigned int a2,
                                           __int64 a3, unsigned int a4);

__int64 nn_codec_RegisterH264EncoderBuffer(__int64 a1, unsigned int a2,
                                           __int64 a3, unsigned int a4)
{
  __int64 v5;
  __int64 result;
  __int64 v8;
  __int64 v9;
  char v10;
  int v11;
  char v12;

  v5 = a4;
  result =
      nn_gs_sdk_CalculateNativeImageHandle_plt(*(unsigned int*)(a3 + 4), 0);
  v8 = a1 + 12LL * a2;
  v10 = *(_BYTE*)(v8 + 56);
  v9 = v8 + 56;
  if ((v10 & 1) == 0) {
    *(_BYTE*)v9 = 1;
  }
  *(_QWORD*)(v9 + 4) = (unsigned int)result | (unsigned __int64)(v5 << 32);
  v11 = *(_DWORD*)(a1 + 188);
  if (v11 == 8) {
    nn_diag_detail_AbortImpl_plt_856170(result);
    __udf(0);
  }
  v12 = *(_DWORD*)(a1 + 184) + v11;
  *(_DWORD*)(a1 + 188) = v11 + 1;
  *(_DWORD*)(a1 + 4LL * (v12 & 7) + 152) = a2;
  return result;
}

#pragma GCC visibility pop
