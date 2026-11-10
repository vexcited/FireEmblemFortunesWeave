#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_am_GetCommonStateGetter_plt(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_applet_SetVrPositionForDebug(__int64 a1, unsigned int a2,
                                        unsigned int a3, unsigned int a4);

__int64 nn_applet_SetVrPositionForDebug(__int64 a1, unsigned int a2,
                                        unsigned int a3, unsigned int a4)
{
  unsigned int v7;
  __int64 v8;
  __int64 result;
  int v10;

  v7 = a1;
  v8 = nn_am_GetCommonStateGetter_plt(a1);
  result = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)v8 + 248LL))(v8, v7, a2, a3, a4);
  v10 = result;
  if ((_DWORD)result != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v10);
  }
  return result;
}

#pragma GCC visibility pop
