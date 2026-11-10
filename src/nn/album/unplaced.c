#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_rtld_RegisterCrtDestructor();
__int64 nn_album_ConvertCapsrvResult_plt(_QWORD);
__int64 nn_album__1c2650(__int64, __int64, char);
__int64 nn_am_GetApplicationFunctions_plt(_QWORD);
__int64 nn_capsrv_GetShimLibraryVersion_plt(void);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_CreateTransferMemory_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_os_DestroyTransferMemory_plt(_QWORD);
__int64 nn_os_DetachTransferMemory_plt(_QWORD);
__int64 nn_os_SdkRecursiveMutexType_Lock_plt(void* this_);
__int64 nn_os_SleepThread_plt(_QWORD);
__int64 std___1___throw_system_error_plt(_QWORD, _QWORD);
extern _UNKNOWN SdkData_ebc100;
extern __int64 SdkData_ebc0f8;
extern char SdkData_ea1b88;
__int64 nn_album_1c3300(__int64* a1);
__int64 nn_album_1c35c0(__int64 a1);
__int64 nn_album_1c3840();
__int64 nn_album_1c4930();

__int64 nn_album_1c3300(__int64* a1)
{
  unsigned int v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  char v17;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD v22[8];
  struct {
    void* v23;
    __int64 v24;
  } v23_;
  __int64* v25;

  do {
    v23_.v23 = (void*)&SdkData_ebc100;
    v23_.v24 = 1;
    nn_os_SdkRecursiveMutexType_Lock_plt((void*)&SdkData_ebc100);
    v3 = *a1;
    v4 = a1[1];
    memset(v22, 0, sizeof(v22));
    v5 = nn_os_CreateTransferMemory_plt(v22, v3, v4, 0);
    LODWORD(v25) = v5;
    if ((_DWORD)v5 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v25);
    }
    v21 = 0;
    v6 = nn_am_GetApplicationFunctions_plt(v5);
    LODWORD(v20) = nn_os_DetachTransferMemory_plt(v22);
    BYTE4(v20) = 1;
    v7 = a1[1];
    v25 = &v21;
    v8 = (*(__int64 (**)(__int64, __int64**, __int64*, __int64))(
        *(_QWORD*)v6 + 584LL))(v6, &v25, &v20, v7);
    if (BYTE4(v20) == 1) {
      nn_os_CloseNativeHandle_plt((unsigned int)v20);
    }
    if (v8 == 0) {
      v19 = 0;
      v20 = 0;
      v25 = &v20;
      v9 = (*(__int64 (**)(__int64, __int64**))(*(_QWORD*)v21 + 32LL))(v21,
                                                                       &v25);
      v1 = v9;
      if (SdkData_ea1b88 == 1) {
        v1 = nn_album_ConvertCapsrvResult_plt(v9);
      }
      if (v1 == 0) {
        v10 = v20;
        v11 = nn_capsrv_GetShimLibraryVersion_plt();
        v12 =
            (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v10 + 40LL))(v10, v11);
        v1 = v12;
        if (SdkData_ea1b88 == 1) {
          v1 = nn_album_ConvertCapsrvResult_plt(v12);
        }
        if (v1 == 0) {
          v13 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v21 + 40LL))(
              v21, &v19);
          v1 = v13;
          if (SdkData_ea1b88 == 1) {
            v1 = nn_album_ConvertCapsrvResult_plt(v13);
          }
          if (v1 == 0) {
            v14 = nn_album__1c2650((__int64)&v20, v19, 1);
            v1 = v14;
            if (SdkData_ea1b88 == 1) {
              v1 = nn_album_ConvertCapsrvResult_plt(v14);
            }
            if (v1 == 0) {
              v15 = v21;
              if (v21 != 0) {
                (**(void (***)(__int64))v21)(v21);
              }
              v16 = SdkData_ebc0f8;
              SdkData_ebc0f8 = v15;
              if (v16 != 0) {
                (*(void (**)(__int64))(*(_QWORD*)v16 + 8LL))(v16);
              }
              v1 = 0;
            }
          }
        }
      }
      if (v20 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 8LL))(v20);
      }
      goto LABEL_26;
    }
    if ((v8 & 0x3FFFFFLL) == 0x8D4) {
      nn_album_1c35c0((__int64)&v23_.v23);
      nn_os_SleepThread_plt(100000000);
      v17 = 1;
    }
    else {
      if (SdkData_ea1b88 == 1) {
        v1 = ((__int64 (*)(void))nn_album_ConvertCapsrvResult_plt)();
      LABEL_26:
        v17 = 0;
        goto LABEL_27;
      }
      v17 = 0;
      v1 = v8;
    }
  LABEL_27:
    if (v21 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v21 + 8LL))(v21);
    }
    if (LOBYTE(v22[0]) != 0) {
      nn_os_DestroyTransferMemory_plt(v22);
    }
    if ((unsigned __int8)v23_.v24 == 1) {
      _runlock_0_0(v23_.v23);
    }
  } while ((v17 & 1) != 0);
  return v1;
}

__int64 nn_album_1c35c0(__int64 a1)
{
  __int64 result;

  if ((*(_BYTE*)(a1 + 8) & 1) == 0) {
    std___1___throw_system_error_plt(1, "unique_lock::unlock: not locked");
    __udf(0);
  }
  result = _runlock_0_0(*(void**)a1);
  *(_BYTE*)(a1 + 8) = 0;
  return result;
}

__int64 nn_album_1c3840() { return fw_rtld_RegisterCrtDestructor(); }

__int64 nn_album_1c4930() { return fw_rtld_RegisterCrtDestructor(); }

#pragma GCC visibility pop
