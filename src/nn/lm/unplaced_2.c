#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_4a32b0(__int64*, _QWORD**);
__int64 SdkRoutine_4a3c40(__int64*, _QWORD**);
__int64 SdkRoutine_4a4540();
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_lm_4a3a30();
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
extern void (*SdkData_e88180[548])();
extern void (*SdkData_e88188[547])();
__int64 nn_lm_4a31c0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4);
__int64 nn_lm_4a3b50(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4);

__int64 nn_lm_4a31c0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v5;
  int v6;
  int v7;
  int v9;
  __int64 v10[3];
  _QWORD* v11;

  memset_plt((void*)a1, nullptr, 736, a4);
  v10[2] = 0;
  v5 = *(_QWORD*)SdkData_e88188[0];
  v10[0] = a1;
  v10[1] = v5;
  nn_os_SdkMutexType_Lock_plt(a1 + 712);
  v6 = *(_DWORD*)(a1 + 716);
  if (v6 != 0) {
    if (*(_QWORD*)(a1 + 720) == 0) {
      *(_QWORD*)(a1 + 728) = a1;
      *(_QWORD*)(a1 + 720) = nn_lm_4a3a30;
    }
    *(_DWORD*)(a1 + 716) = v6 + 1;
  }
  else {
    v11 = nullptr;
    v7 = SdkRoutine_4a32b0(v10, &v11);
    if (v7 != 0) {
      v9 = v7;
      if (v11 != nullptr) {
        (*(void (**)(_QWORD*))(*v11 + 8LL))(v11);
      }
      nn_os_SdkMutexType_Unlock_plt(a1 + 712);
      LODWORD(v10[0]) = v9;
      nn_diag_detail_AbortImpl_plt_858db0(v10);
    }
    *(_QWORD*)(a1 + 728) = a1;
    *(_DWORD*)(a1 + 716) = 1;
    *(_QWORD*)(a1 + 704) = v11;
    *(_QWORD*)(a1 + 720) = nn_lm_4a3a30;
  }
  return nn_os_SdkMutexType_Unlock_plt(a1 + 712);
}

__int64 nn_lm_4a3b50(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v5;
  int v6;
  int v7;
  int v9;
  __int64 v10[3];
  _QWORD* v11;

  memset_plt((void*)a1, nullptr, 736, a4);
  v10[2] = 0;
  v5 = *(_QWORD*)SdkData_e88180[0];
  v10[0] = a1;
  v10[1] = v5;
  nn_os_SdkMutexType_Lock_plt(a1 + 712);
  v6 = *(_DWORD*)(a1 + 716);
  if (v6 != 0) {
    if (*(_QWORD*)(a1 + 720) == 0) {
      *(_QWORD*)(a1 + 728) = a1;
      *(_QWORD*)(a1 + 720) = SdkRoutine_4a4540;
    }
    *(_DWORD*)(a1 + 716) = v6 + 1;
  }
  else {
    v11 = nullptr;
    v7 = SdkRoutine_4a3c40(v10, &v11);
    if (v7 != 0) {
      v9 = v7;
      if (v11 != nullptr) {
        (*(void (**)(_QWORD*))(*v11 + 8LL))(v11);
      }
      nn_os_SdkMutexType_Unlock_plt(a1 + 712);
      LODWORD(v10[0]) = v9;
      nn_diag_detail_AbortImpl_plt_858db0(v10);
    }
    *(_QWORD*)(a1 + 728) = a1;
    *(_DWORD*)(a1 + 716) = 1;
    *(_QWORD*)(a1 + 704) = v11;
    *(_QWORD*)(a1 + 720) = SdkRoutine_4a4540;
  }
  return nn_os_SdkMutexType_Unlock_plt(a1 + 712);
}

#pragma GCC visibility pop
