#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_fs_462860(void);
__int64 nn_fs_detail_IsAbortNeeded_plt(_QWORD);
__int64 nn_fs_detail_LogResultErrorMessage_plt(_QWORD, _QWORD);
__int64 nn_fs_EnsureApplicationBcatDeliveryCacheStorage(__int64 a1);

__int64 nn_fs_EnsureApplicationBcatDeliveryCacheStorage(__int64 a1)
{
  __int64 v1;
  unsigned int v2;
  unsigned int v4;
  int v5;

  if (a1 == 0) {
    v2 = 3072514;
    if ((nn_fs_detail_IsAbortNeeded_plt(3072514) & 1) == 0) {
      return v2;
    }
    nn_fs_detail_LogResultErrorMessage_plt(
        3072514, "EnsureApplicationBcatDeliveryCacheStorage");
    v5 = 3072514;
    nn_diag_detail_AbortImpl_plt_858db0(&v5);
    goto LABEL_7;
  }
  v2 = nn_fs_462860();
  v1 = v2;
  if ((nn_fs_detail_IsAbortNeeded_plt(v2) & 1) != 0) {
  LABEL_7:
    nn_fs_detail_LogResultErrorMessage_plt(
        v1, "EnsureApplicationBcatDeliveryCacheStorage");
    v4 = v2;
    if (v2 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v4);
      __udf(0);
    }
    return 0;
  }
  if (v2 != 0) {
    return v2;
  }
  return 0;
}

#pragma GCC visibility pop
