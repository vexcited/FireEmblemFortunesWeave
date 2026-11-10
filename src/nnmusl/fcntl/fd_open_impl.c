#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __errno_location_plt(_QWORD, _QWORD);
__int64 __nnmusl_fd_install(_QWORD, _QWORD);
__int64 __nnmusl_slot_close(_QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_detail_UnexpectedDefaultImpl_plt_857150(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
extern _DWORD SdkData_ea1028[516];
extern _UNKNOWN SdkData_eaa42c;
extern _UNKNOWN* SdkData_e4cf60;
__int64 fd_open_b17e0(__int64 a1, unsigned int* a2);

__int64 fd_open_b17e0(__int64 a1, unsigned int* a2)
{
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  unsigned __int64 v7;
  int v8;
  unsigned int v9;
  unsigned int* v10;
  __int64 v11;
  __int64 v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  _QWORD v17[2];
  __int16 v18;
  int v19;
  __int16 v20;

  v4 = nn_os_SdkMutexType_Lock_plt(&SdkData_eaa42c);
  v6 = *a2;
  v7 = (unsigned __int64)*(&SdkData_e4cf60 + 2 * (*a2 & 3LL) + 1);
  v8 = (65537 * (int)v7) >> 16;
  if (v8 <= (__int16)v7) {
    goto LABEL_10;
  }
  v9 = (unsigned int)*(&SdkData_e4cf60 + 2 * (*a2 & 3LL) + 1);
  while ((SdkData_ea1028[(__int16)v9] & 0xFFC) != 0) {
    if (v8 <= (__int16)++v9) {
      goto LABEL_10;
    }
  }
  if ((v9 & 0x8000) != 0) {
  LABEL_10:
    v15 = -1;
    *(_DWORD*)__errno_location_plt(v4, v5) = 23;
  LABEL_11:
    nn_os_SdkMutexType_Unlock_plt(&SdkData_eaa42c);
    return v15;
  }
  v10 = &SdkData_ea1028[(unsigned __int16)v9];
  *v10 = v6;
  v11 = (__int64)*(&SdkData_e4cf60 + 2 * (v6 & 3));
  v12 = memcpy_plt(v11 + ((int)(v7 >> 16) >> 16) * (__int64)(__int16)(v9 - v7),
                   a1, (__int64)(v7 << 16) >> 48);
  v13 = *v10 & 3;
  *v10 = ((((*v10 & 0xFFC) + 4) & 0x1000 | *v10 & 0x3FF000) + 4096) |
         ((*v10 & 0xFFC) + 4) & 0xFFF | *v10 & 0xFFC00003;
  if (v13 > 1) {
    if (v13 != 2) {
      nn_detail_UnexpectedDefaultImpl_plt_857150(v12);
      __udf(0);
    }
    v14 = 3;
  }
  else {
    v14 = 1;
    if (v13 != 0) {
      v14 = 2;
    }
  }
  nn_os_SdkMutexType_Unlock_plt(&SdkData_eaa42c);
  v15 = __nnmusl_fd_install(v14, v9);
  if ((v15 & 0x80000000) != 0) {
    nn_os_SdkMutexType_Lock_plt(&SdkData_eaa42c);
    v17[0] = &SdkData_ea1028[(unsigned __int16)v9];
    v17[1] = v11 + ((int)(v7 >> 16) >> 16) * (__int16)(v9 - v7);
    v18 = (2 * v9) | 1;
    v19 = 0;
    v20 = 0;
    __nnmusl_slot_close(v17);
    goto LABEL_11;
  }
  return v15;
}

#pragma GCC visibility pop
