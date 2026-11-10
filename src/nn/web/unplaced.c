#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_applet_GetStorageSize_plt(_QWORD);
__int64 nn_applet_ReadFromStorage_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_web_GetSharePageReturnValueFromStorage(__int64 a1, _QWORD* a2);

__int64 nn_web_GetSharePageReturnValueFromStorage(__int64 a1, _QWORD* a2)
{
  __int64 v4;
  __int64 result;
  int v6;

  v4 = nn_applet_GetStorageSize_plt(*a2);
  if (v4 != 0x2000) {
    nn_diag_detail_AbortImpl_plt_856170(v4);
  }
  result = nn_applet_ReadFromStorage_plt(*a2, 0, a1, 0x2000);
  v6 = result;
  if ((_DWORD)result != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v6);
  }
  return result;
}

#pragma GCC visibility pop
