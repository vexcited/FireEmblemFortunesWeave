#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_nifm_GetClientId_plt(void);
__int64 nn_ntc_detail_shim_GetStaticServiceSharedPointer_plt(_QWORD);
__int64 nn_os_AttachReadableHandleToSystemEvent_plt(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64
nn_ntc_detail_shim_EnsureNetworkClockAvailabilityClientImpl_EnsureNetworkClockAvailabilityClientImpl(
    __int64* a1, unsigned int a2, unsigned int a3);
__int64

nn_ntc_detail_shim_EnsureNetworkClockAvailabilityClientImpl_EnsureNetworkClockAvailabilityClientImpl(
    __int64* a1, unsigned int a2, unsigned int a3)
{
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  int v11;
  __int64 v12;
  __int64* v13;

  *a1 = 0;
  *((_BYTE*)a1 + 48) = 0;
  v12 = 0;
  LODWORD(v13) = nn_ntc_detail_shim_GetStaticServiceSharedPointer_plt(&v12);
  if ((_DWORD)v13 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v13);
  }
  v6 = v12;
  v7 = nn_nifm_GetClientId_plt();
  v13 = a1;
  LODWORD(v13) = (*(__int64 (**)(__int64, __int64**, _QWORD, _QWORD))(
      *(_QWORD*)v6 + 32LL))(v6, &v13, a3, v7);
  if ((_DWORD)v13 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v13);
  }
  v8 = *a1;
  v13 = nullptr;
  v9 = (*(__int64 (**)(__int64, __int64**))(*(_QWORD*)v8 + 40LL))(v8, &v13);
  v11 = v9;
  if ((_DWORD)v9 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v11);
  }
  if (*((_BYTE*)a1 + 48) != 0) {
    nn_diag_detail_AbortImpl_plt_856170(v9);
  }
  nn_os_AttachReadableHandleToSystemEvent_plt(a1 + 1, (unsigned int)v13,
                                              BYTE4(v13), a2);
  result = v12;
  if (v12 != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
  }
  return result;
}

#pragma GCC visibility pop
