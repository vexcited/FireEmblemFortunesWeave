#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_detail_UnexpectedDefaultImpl_plt_857150(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_util_SNPrintf_plt(_QWORD, _QWORD, const char*, ...);
extern char SdkData_bbbd5c;
__int64 nn_http_json_Node_Print(void* this_, char* a2, __int64 a3,
                                const char* a4);

__int64 nn_http_json_Node_Print(void* this_, char* a2, __int64 a3,
                                const char* a4)
{
  unsigned int v4;
  __int64 result;
  int v6;

  v4 = *(unsigned __int8*)this_;
  if (v4 <= 1) {
    if (*(_BYTE*)this_ == 0) {
      return nn_util_SNPrintf_plt(a2, a3, "$", a4);
    }
    return nn_util_SNPrintf_plt(a2, a3, &SdkData_bbbd5c, a4);
  }
  if (v4 == 2) {
    v6 = *((_DWORD*)this_ + 1);
    if (v6 != 0) {
      return nn_util_SNPrintf_plt(a2, a3, "[%u]", v6 - 1);
    }
    return nn_util_SNPrintf_plt(a2, a3, &SdkData_bbbd5c, a4);
  }
  if (v4 != 3) {
    nn_detail_UnexpectedDefaultImpl_plt_857150(this_);
  }
  result = nn_util_SNPrintf_plt(a2, a3, ".%s", a4);
  if ((int)result >= 0x8000) {
    nn_diag_detail_AbortImpl_plt_856170(result);
  }
  return result;
}

#pragma GCC visibility pop
