#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_2c1dd0(__int64*, _QWORD**);
__int64 nn_bcat_detail_2c3b10();
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_sf_hipc_client_ResizeSessions(__int64, int);
extern _UNKNOWN* SdkData_f28e18;
extern _UNKNOWN SdkData_f28e00;
extern _UNKNOWN SdkData_f28e10;
extern _UNKNOWN SdkData_f28e30;
extern _UNKNOWN SdkData_f296a0;
extern _UNKNOWN SdkData_f296e0;
extern __int64 SdkData_f28e08;
extern __int64 SdkData_f28e20;
extern int SdkData_f28e14;
extern int SdkData_f296d8;
__int64 nn_bcat_ipc_Initialize(void* this_);

__int64 nn_bcat_ipc_Initialize(void* this_)
{
  int v1;
  __int64 v2;
  int v3;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  __int64 v10;
  struct {
    __int64 v11[2];
    __int64 v12;
  } v11_;
  _QWORD* v13;

  nn_os_SdkMutexType_Lock_plt(&SdkData_f28e00);
  v11_.v12 = 0;
  v11_.v11[0] = (__int64)&SdkData_f28e30;
  v11_.v11[1] = (__int64)"bcat:u";
  nn_os_SdkMutexType_Lock_plt(&SdkData_f28e10);
  v1 = SdkData_f28e14;
  if (SdkData_f28e14 != 0) {
    goto LABEL_2;
  }
  v13 = nullptr;
  v5 = SdkRoutine_2c1dd0(v11_.v11, &v13);
  if (v5 == 0) {
    goto LABEL_24;
  }
  v6 = v5;
  if (v13 != nullptr) {
    (*(void (**)(_QWORD*))(*v13 + 8LL))(v13);
  }
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f28e10);
  if ((v6 & 0x3FFFFF) != 0x1015) {
    goto LABEL_31;
  }
  v11_.v12 = 0;
  v11_.v11[0] = (__int64)&SdkData_f28e30;
  v11_.v11[1] = (__int64)"bcat:s";
  nn_os_SdkMutexType_Lock_plt(&SdkData_f28e10);
  v1 = SdkData_f28e14;
  if (SdkData_f28e14 == 0) {
    v13 = nullptr;
    v7 = SdkRoutine_2c1dd0(v11_.v11, &v13);
    if (v7 != 0) {
      v6 = v7;
      if (v13 != nullptr) {
        (*(void (**)(_QWORD*))(*v13 + 8LL))(v13);
      }
      nn_os_SdkMutexType_Unlock_plt(&SdkData_f28e10);
      if ((v6 & 0x3FFFFF) != 0x1015) {
        goto LABEL_31;
      }
      v11_.v12 = 0;
      v11_.v11[0] = (__int64)&SdkData_f28e30;
      v11_.v11[1] = (__int64)"bcat:m";
      nn_os_SdkMutexType_Lock_plt(&SdkData_f28e10);
      v1 = SdkData_f28e14;
      if (SdkData_f28e14 != 0) {
        goto LABEL_2;
      }
      v13 = nullptr;
      v8 = SdkRoutine_2c1dd0(v11_.v11, &v13);
      if (v8 != 0) {
        v6 = v8;
        if (v13 != nullptr) {
          (*(void (**)(_QWORD*))(*v13 + 8LL))(v13);
        }
        nn_os_SdkMutexType_Unlock_plt(&SdkData_f28e10);
        if ((v6 & 0x3FFFFF) != 0x1015) {
          goto LABEL_31;
        }
        v11_.v12 = 0;
        v11_.v11[0] = (__int64)&SdkData_f28e30;
        v11_.v11[1] = (__int64)"bcat:a";
        nn_os_SdkMutexType_Lock_plt(&SdkData_f28e10);
        v1 = SdkData_f28e14;
        if (SdkData_f28e14 == 0) {
          v13 = nullptr;
          v9 = SdkRoutine_2c1dd0(v11_.v11, &v13);
          if (v9 == 0) {
            goto LABEL_24;
          }
          v6 = v9;
          if (v13 != nullptr) {
            (*(void (**)(_QWORD*))(*v13 + 8LL))(v13);
          }
          v10 = nn_os_SdkMutexType_Unlock_plt(&SdkData_f28e10);
          if ((v6 & 0x3FFFFF) == 0x1015) {
            nn_diag_detail_AbortImpl_plt_856170(v10);
          }
        LABEL_31:
          LODWORD(v11_.v11[0]) = v6;
          nn_diag_detail_AbortImpl_plt_858db0(v11_.v11);
        }
        goto LABEL_2;
      }
    }
  LABEL_24:
    SdkData_f28e14 = 1;
    SdkData_f28e08 = (__int64)v13;
    SdkData_f28e18 = nn_bcat_detail_2c3b10;
    SdkData_f28e20 = (__int64)&SdkData_f28e30;
    goto LABEL_5;
  }
LABEL_2:
  if (SdkData_f28e18 == nullptr) {
    SdkData_f28e18 = nn_bcat_detail_2c3b10;
    SdkData_f28e20 = (__int64)&SdkData_f28e30;
  }
  SdkData_f28e14 = v1 + 1;
LABEL_5:
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f28e10);
  v2 = nn_os_SdkMutexType_Lock_plt(&SdkData_f296e0);
  if (SdkData_f296d8 < 2) {
    nn_diag_detail_AbortImpl_plt_856170(v2);
  }
  v3 = nn_sf_hipc_client_ResizeSessions((__int64)&SdkData_f296a0, 2);
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f296e0);
  LODWORD(v11_.v11[0]) = v3;
  if (v3 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v11_.v11);
  }
  return nn_os_SdkMutexType_Unlock_plt(&SdkData_f28e00);
}

#pragma GCC visibility pop
