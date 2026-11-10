#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_settings_detail_AdvanceSettingsItemKeyIterator_plt(void);
__int64 nn_settings_fwdbg_AdvanceSettingsItemKeyIterator();

__int64 nn_settings_fwdbg_AdvanceSettingsItemKeyIterator()
{
  __int64 result;
  int v1;

  result = nn_settings_detail_AdvanceSettingsItemKeyIterator_plt();
  if ((result & 0x3FFFFF) != 0x2A69) {
    v1 = result;
    if ((_DWORD)result != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v1);
    }
  }
  return result;
}

#pragma GCC visibility pop
