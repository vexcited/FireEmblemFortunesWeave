#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __errno_location_plt(_QWORD, _QWORD);
__int64 __nnmusl_fd_lookup(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_os_AcquireReadLock_plt(_QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_ReleaseReadLock_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 nn_socket_detail__18f1a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_socket_detail__18f3e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD);
extern _UNKNOWN SdkData_eb86a8;
extern __int16 SdkData_eb86d8;
extern __int64 SdkData_eb8780;
__int64 nn_socket_detail_Ioctl(unsigned int a1, unsigned int a2, __int64 a3,
                               unsigned __int64 a4);

__int64 nn_socket_detail_Ioctl(unsigned int a1, unsigned int a2, __int64 a3,
                               unsigned __int64 a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int* v13;
  int v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  int v30;
  int v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  bool v36;
  char v37;
  _QWORD v38[2];
  _QWORD v39[2];
  _QWORD v40[2];
  _QWORD v41[2];
  _QWORD v42[2];
  _QWORD v43[2];
  _QWORD v44[2];
  _QWORD v45[2];
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned int v55;

  nn_os_LockMutex_plt(&SdkData_eb86d8);
  v8 = SdkData_eb8780;
  v9 = nn_os_UnlockMutex_plt(&SdkData_eb86d8);
  if (v8 == 0) {
    goto LABEL_42;
  }
  v54 = 0;
  v52 = 0;
  v53 = 0;
  v51 = 0;
  v48 = 0;
  v49 = 0;
  v47 = 0;
  if (a3 != 0) {
    if (HIDWORD(a4) != 0) {
      nn_os_LockMutex_plt(&SdkData_eb86d8);
      v10 = SdkData_eb8780;
      v11 = nn_os_UnlockMutex_plt(&SdkData_eb86d8);
      if (v10 != 0) {
        v13 = (int*)__errno_location_plt(v11, v12);
        v14 = 14;
      LABEL_9:
        *v13 = v14;
        return 0xFFFFFFFFLL;
      }
      return 0xFFFFFFFFLL;
    }
    v15 = nn_socket_detail__18f1a0(a2, a3, a4, &v50, &v46);
    if (v15 - 5 > 0xFFFFFFFB) {
      v20 = v50;
      v21 = v51;
      v22 = v46;
      v23 = v47;
      v24 = v15;
      v45[0] = v50;
      v45[1] = v46;
      v44[0] = v51;
      v44[1] = v47;
      v43[0] = v52;
      v43[1] = v48;
      v42[0] = v53;
      v42[1] = v49;
      v41[0] = v50;
      v41[1] = v46;
      v40[0] = v51;
      v40[1] = v47;
      v39[0] = v52;
      v39[1] = v48;
      v38[0] = v53;
      v38[1] = v49;
      nn_os_AcquireReadLock_plt(&SdkData_eb86a8);
      v25 = __nnmusl_fd_lookup(a1);
      if ((_WORD)v25 == 0) {
        v31 = 9;
      LABEL_23:
        LODWORD(v54) = v31;
        nn_os_ReleaseReadLock_plt(&SdkData_eb86a8);
        goto LABEL_24;
      }
      if ((unsigned __int16)v25 != 4) {
        v31 = 88;
        goto LABEL_23;
      }
      v26 = HIWORD(v25);
      nn_os_ReleaseReadLock_plt(&SdkData_eb86a8);
      v27 = (*(__int64 (**)(__int64, char*, __int64*, _QWORD, _QWORD, _QWORD*,
                            _QWORD*, _QWORD*, _QWORD*, _QWORD*, _QWORD*,
                            _QWORD*, _QWORD*, unsigned int))(
          *(_QWORD*)SdkData_eb8780 + 184LL))(SdkData_eb8780, (char*)&v54 + 4,
                                             &v54, v26, a2, v45, v44, v43, v42,
                                             v41, v40, v39, v38, v24);
      if (v27 != 0) {
        v28 = v27 & 0x3FFFFF;
        if ((v27 & 0x3FFFFF) == 0xD401 || v28 == 132609) {
          v30 = 14;
        LABEL_20:
          LODWORD(v54) = v30;
        LABEL_24:
          HIDWORD(v54) = -1;
          goto LABEL_25;
        }
        if ((v27 & 0x1FF) == 0xB && ((v27 >> 9) & 0x1FFE) - 300 < 0x32) {
          v30 = 46;
          goto LABEL_20;
        }
        v36 = (v27 & 0x1FF) != 0xB || ((v27 >> 9) & 0x1FFC) - 100 >= 0xC8;
        v30 = 11;
        v37 = !v36;
        if (v28 == 52737 || (v37 & 1) != 0) {
          goto LABEL_20;
        }
        v55 = v27;
        v9 = nn_diag_detail_AbortImpl_plt_858db0(&v55);
      LABEL_42:
        nn_diag_detail_AbortImpl_plt_856170(v9);
        __udf(0);
      }
    LABEL_25:
      nn_socket_detail__18f3e0(a2, v20, v21, v22, v23, v24);
      if (v54 < 0) {
        v32 = v54;
        nn_os_LockMutex_plt(&SdkData_eb86d8);
        v33 = SdkData_eb8780;
        v34 = nn_os_UnlockMutex_plt(&SdkData_eb86d8);
        if (v33 != 0) {
          *(_DWORD*)__errno_location_plt(v34, v35) = v32;
        }
      }
      return HIDWORD(v54);
    }
  }
  nn_os_LockMutex_plt(&SdkData_eb86d8);
  v16 = SdkData_eb8780;
  v17 = nn_os_UnlockMutex_plt(&SdkData_eb86d8);
  if (v16 != 0) {
    v13 = (int*)__errno_location_plt(v17, v18);
    v14 = 22;
    goto LABEL_9;
  }
  return 0xFFFFFFFFLL;
}

#pragma GCC visibility pop
