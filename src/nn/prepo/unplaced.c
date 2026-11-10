#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_os_GenerateRandomBytes_plt(_QWORD, _QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_prepo_PlayReport_Add_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_prepo_detail_ShimLibraryGlobal_GetSession_plt(_QWORD);
extern _UNKNOWN SdkData_f667d0;
extern __int64 SdkData_e88e58;
extern __int64 SdkData_f667d8;
extern __int64 SdkData_f667e0;
__int64 nn_prepo_AddSessionId(void* this_, void* a2, const char* a3);

__int64 nn_prepo_AddSessionId(void* this_, void* a2, const char* a3)
{
  __int64 v5;
  unsigned int v6;
  __int64 v8;
  __int64 v9;

  v5 = nn_prepo_detail_ShimLibraryGlobal_GetSession_plt(SdkData_e88e58);
  v9 = 0;
  LODWORD(v8) =
      (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v5 + 112LL))(v5, &v9);
  if ((_DWORD)v8 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v8);
  }
  nn_os_SdkMutexType_Lock_plt(&SdkData_f667d0);
  if (SdkData_f667e0 != v9) {
    nn_os_GenerateRandomBytes_plt(&SdkData_f667d8, 8);
    SdkData_f667e0 = v9;
  }
  v8 = SdkData_f667d8;
  v6 = nn_prepo_PlayReport_Add_plt(this_, a2, &v8);
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f667d0);
  return v6;
}

#pragma GCC visibility pop
