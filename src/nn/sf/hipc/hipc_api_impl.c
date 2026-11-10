#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_os_166450(_QWORD*, unsigned int, __int64);
__int64 nn_os_InitializeMultiWaitHolder_plt_85d610(_QWORD);
__int64 nn_sf_hipc_ReplyAndReceive(char* a1, _QWORD* a2, unsigned int a3,
                                   __int64 a4);

__int64 nn_sf_hipc_ReplyAndReceive(char* a1, _QWORD* a2, unsigned int a3,
                                   __int64 a4)
{
  int v6;
  int v7;
  __int64 v8;
  char v9;
  __int64 v11;
  int v12;
  __int64 v13;

  v13 = 0;
  v6 = nn_os_166450(&v13, a3, a4);
  if (v6 == 0) {
    v9 = 1;
  LABEL_9:
    *a1 = v9;
    v8 = v13;
    goto LABEL_10;
  }
  v7 = v6 & 0x3FFFFF;
  if ((v6 & 0x3FFFFF) == 0x3FC03) {
    v9 = 2;
    goto LABEL_9;
  }
  if (v7 == 262147) {
    v9 = 3;
    goto LABEL_9;
  }
  if (v7 == 261635) {
    v8 = 0;
    *a1 = 0;
  LABEL_10:
    *a2 = v8;
    return 0;
  }
  v12 = v6;
  v11 = nn_diag_detail_AbortImpl_plt_858db0(&v12);
  return nn_os_InitializeMultiWaitHolder_plt_85d610(v11);
}

#pragma GCC visibility pop
