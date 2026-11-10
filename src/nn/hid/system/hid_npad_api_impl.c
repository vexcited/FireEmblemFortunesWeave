#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_hid_system_detail_RegisterAppletResourceUserId_plt(void);
__int64 nn_hid_system_RegisterAppletResourceUserId();

__int64 nn_hid_system_RegisterAppletResourceUserId()
{
  __int64 result;
  int v1;

  result = nn_hid_system_detail_RegisterAppletResourceUserId_plt();
  v1 = result;
  if ((_DWORD)result != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v1);
  }
  return result;
}

#pragma GCC visibility pop
