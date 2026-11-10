#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_detail_Abort_plt(_QWORD);
__int64 nn_diag_detail_InvokeAbortObserver_plt(_QWORD);
__int64 nn_os_SdkMutexType_IsLockedByCurrentThread_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
extern _UNKNOWN SdkData_eae2f0;
extern char SdkData_bbbd5c;
void __attribute__((noreturn))
nn_detail_UnexpectedDefaultImpl_ba140(void* this_, const char* a2,
                                      const char* a3);
void __attribute__((noreturn))

nn_detail_UnexpectedDefaultImpl_ba140(void* this_, const char* a2,
                                      const char* a3)
{
  int v4;
  struct {
    _QWORD v6[5];
    int v7;
    int v8;
  } v6_;
  _QWORD v9[2];
  _QWORD v10[4];

  v4 = (int)a3;
  if ((nn_os_SdkMutexType_IsLockedByCurrentThread_plt(&SdkData_eae2f0) & 1) !=
      0) {
    nn_diag_detail_Abort_plt(0);
  }
  nn_os_SdkMutexType_Lock_plt(&SdkData_eae2f0);
  memset(v10, 0, sizeof(v10));
  v6_.v6[4] = a2;
  v6_.v8 = 0;
  v6_.v7 = v4;
  v9[0] = &SdkData_bbbd5c;
  v9[1] = v10;
  v6_.v6[1] = v9;
  v6_.v6[2] = &SdkData_bbbd5c;
  v6_.v6[3] = this_;
  v6_.v6[0] = 4;
  nn_diag_detail_InvokeAbortObserver_plt(v6_.v6);
  nn_diag_detail_Abort_plt(0);
  __udf(0);
}

#pragma GCC visibility pop
