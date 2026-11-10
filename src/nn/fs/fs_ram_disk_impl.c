#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_crypto_GenerateSha256Hash_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_fs_RamDiskFileSystem_FormatAndMount_plt(_QWORD);
__int64 nn_fs_RamDiskFileSystem_GetBufferSize_plt(_QWORD, _QWORD);
__int64 nn_fs_RamDiskFileSystem_RamDiskFileSystem_plt(_QWORD, _QWORD);
__int64 nn_fs_detail_Allocate_plt(_QWORD);
__int64 nn_fs_detail_CheckMountName_plt(_QWORD);
__int64 nn_fs_detail_Deallocate_plt(_QWORD, _QWORD);
__int64 nn_fs_detail_IsAbortNeeded_plt(_QWORD);
__int64 nn_fs_detail_LogResultErrorMessage_plt(_QWORD, _QWORD);
__int64 nn_fs_fsa_Register_plt_85a8a0(_QWORD, _QWORD);
__int64 nn_os_GetSystemTick_plt(_QWORD);
extern __int64 (*SdkData_e50b98[])();
__int64 fs_ram_disk_101120(__int64* a1);
__int64 fs_ram_disk_101300(_QWORD* a1);
__int64 fs_ram_disk_1013a0(_QWORD* a1);

__int64 fs_ram_disk_101120(__int64* a1)
{
  unsigned int v1;
  unsigned int v3;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  unsigned int v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64* v18;
  _QWORD v19[4];
  __int64 v20;

  v1 = 3103746;
  if (*a1 == 0) {
    return 3104258;
  }
  v19[0] = 0;
  v3 = nn_fs_RamDiskFileSystem_GetBufferSize_plt(v19, 0);
  if (v3 != 0) {
    return v3;
  }
  if (v19[0] < 0xFFFFFFFFFFFFFFF0LL) {
    if (a1[1] < (unsigned __int64)(v19[0] + 16LL)) {
      return v1;
    }
    v19[0] = 0;
    v3 = nn_fs_RamDiskFileSystem_GetBufferSize_plt(v19, 4194304000LL);
    if (v3 != 0) {
      return v3;
    }
    if (v19[0] < 0xFFFFFFFFFFFFFFF0LL) {
      if (a1[1] > (unsigned __int64)(v19[0] + 16LL)) {
        return v1;
      }
      v3 = nn_fs_detail_CheckMountName_plt(a1[2]);
      if (v3 != 0) {
        return v3;
      }
      v1 = 1751042;
      v5 = (__int64*)nn_fs_detail_Allocate_plt(48);
      if (v5 != nullptr) {
        v6 = *a1;
        v7 = a1[1];
        v8 = v5;
        *v5 = (__int64)SdkData_e50b98;
        v5[1] = v6;
        v5[2] = v6 + 8;
        v5[3] = v7;
        v5[4] = v7 - 16;
        v20 = nn_os_GetSystemTick_plt(v5);
        memset(v19, 0, sizeof(v19));
        nn_crypto_GenerateSha256Hash_plt(v19, 32, &v20, 8);
        v9 = v19[0];
        v10 = (_QWORD*)v8[1];
        v8[5] = v19[0];
        *v10 = v9;
        *(_QWORD*)(v8[1] + v8[3] - 8) = v8[5];
        v11 = nn_fs_detail_Allocate_plt(696);
        if (v11 != 0) {
          v12 = (__int64*)v11;
          v18 = v8;
          nn_fs_RamDiskFileSystem_RamDiskFileSystem_plt(v11, &v18);
          v13 = v18;
          v18 = nullptr;
          if (v13 != nullptr) {
            (*(void (**)(__int64*))(*v13 + 8))(v13);
          }
          v14 = nn_fs_RamDiskFileSystem_FormatAndMount_plt(v12);
          if (v14 != 0) {
            v17 = *v12;
            v1 = v14;
            v16 = v12;
          }
          else {
            v15 = a1[2];
            v18 = v12;
            v1 = nn_fs_fsa_Register_plt_85a8a0(v15, &v18);
            v16 = v18;
            v18 = nullptr;
            if (v16 == nullptr) {
              return v1;
            }
            v17 = *v16;
          }
        }
        else {
          v17 = *v8;
          v16 = v8;
        }
        (*(void (**)(__int64*))(v17 + 8))(v16);
      }
      return v1;
    }
  }
  return 3103746;
}

__int64 fs_ram_disk_101300(_QWORD* a1)
{
  __int64 v1;
  _QWORD* v2;
  unsigned int v3;
  __int64 result;
  unsigned int v5;

  v1 = a1[5];
  *a1 = SdkData_e50b98;
  v2 = (_QWORD*)a1[1];
  v3 = 3635714;
  if (*v2 == v1 && *(_QWORD*)((char*)v2 + a1[3] - 8) == a1[5]) {
    v3 = 0;
  }
  nn_fs_detail_IsAbortNeeded_plt(v3);
  result = nn_fs_detail_LogResultErrorMessage_plt(v3, "~VerifiedMemoryStorage");
  v5 = v3;
  if (v3 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v5);
    __udf(0);
  }
  return result;
}

__int64 fs_ram_disk_1013a0(_QWORD* a1)
{
  __int64 v1;
  _QWORD* v3;
  unsigned int v4;
  unsigned int v6;

  v1 = a1[5];
  *a1 = SdkData_e50b98;
  v3 = (_QWORD*)a1[1];
  v4 = 3635714;
  if (*v3 == v1 && *(_QWORD*)((char*)v3 + a1[3] - 8) == a1[5]) {
    v4 = 0;
  }
  nn_fs_detail_IsAbortNeeded_plt(v4);
  nn_fs_detail_LogResultErrorMessage_plt(v4, "~VerifiedMemoryStorage");
  v6 = v4;
  if (v4 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v6);
    __udf(0);
  }
  return nn_fs_detail_Deallocate_plt(a1, 48);
}

#pragma GCC visibility pop
