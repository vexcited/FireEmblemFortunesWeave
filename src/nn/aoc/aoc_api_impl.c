#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_aoc_detail_GetObjectHolder_plt(void);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_err_ShowError_plt_8608f0(_QWORD);
__int64 nn_os_AttachReadableHandleToSystemEvent_plt(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 nn_aoc_GetAddOnContentListChangedEventLegacy(__int64 a1);
__int64 nn_aoc_GetAddOnContentListChangedEvent(__int64 a1);
__int64 nn_aoc_ShowAddOnContentLostError(void* this_, const int* a2);

__int64 nn_aoc_GetAddOnContentListChangedEventLegacy(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  int v5;
  __int64 v6;

  v6 = 0;
  v2 = (_QWORD*)nn_aoc_detail_GetObjectHolder_plt();
  v3 = (*(__int64 (**)(_QWORD, __int64*))(*(_QWORD*)*v2 + 64LL))(*v2, &v6);
  v5 = v3;
  if ((_DWORD)v3 != 0) {
    v3 = nn_diag_detail_AbortImpl_plt_858db0(&v5);
  LABEL_5:
    nn_diag_detail_AbortImpl_plt_856170(v3);
    __udf(0);
  }
  if (*(_BYTE*)(a1 + 40) != 0) {
    goto LABEL_5;
  }
  return nn_os_AttachReadableHandleToSystemEvent_plt(a1, (unsigned int)v6,
                                                     BYTE4(v6), 1);
}

__int64 nn_aoc_GetAddOnContentListChangedEvent(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  int v5;
  __int64 v6;

  v6 = 0;
  v2 = (_QWORD*)nn_aoc_detail_GetObjectHolder_plt();
  v3 = (*(__int64 (**)(_QWORD, __int64*, _QWORD))(*(_QWORD*)*v2 + 80LL))(
      *v2, &v6, 0);
  v5 = v3;
  if ((_DWORD)v3 != 0) {
    v3 = nn_diag_detail_AbortImpl_plt_858db0(&v5);
  LABEL_5:
    nn_diag_detail_AbortImpl_plt_856170(v3);
    __udf(0);
  }
  if (*(_BYTE*)(a1 + 40) != 0) {
    goto LABEL_5;
  }
  return nn_os_AttachReadableHandleToSystemEvent_plt(a1, (unsigned int)v6,
                                                     BYTE4(v6), 1);
}

__int64 nn_aoc_ShowAddOnContentLostError(void* this_, const int* a2)
{
  __int64 v3;
  __int64 v4;
  _QWORD v6[2];
  int v7;
  __int64 v8;

  v3 = (int)a2;
  v8 = 0;
  v4 = *(_QWORD*)nn_aoc_detail_GetObjectHolder_plt();
  v6[0] = this_;
  v6[1] = v3;
  v7 = (*(__int64 (**)(__int64, __int64*, _QWORD*, _QWORD))(
      *(_QWORD*)v4 + 72LL))(v4, &v8, v6, 0);
  if (v7 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v7);
  }
  return nn_err_ShowError_plt_8608f0(v8);
}

#pragma GCC visibility pop
