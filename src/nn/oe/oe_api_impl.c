#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 fw_rtld_RegisterCrtDestructor();
__int64 nn_am_GetApplicationFunctions_plt(_QWORD);
__int64 nn_am_GetCommonStateGetter_plt(_QWORD);
__int64 nn_applet_SetWirelessPriorityMode_plt(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_os_AttachReadableHandleToSystemEvent_plt(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 nn_os_ClearSystemEvent_plt(_QWORD);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_DestroySystemEvent_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_TryWaitSystemEvent_plt(_QWORD);
extern _UNKNOWN SdkData_f65770;
extern _UNKNOWN SdkData_f65780;
extern _UNKNOWN SdkData_f657c4;
extern _UNKNOWN SdkData_f657c8;
extern _UNKNOWN SdkData_f657d8;
extern _UNKNOWN SdkData_f65810;
extern char SdkData_f657a8;
extern char SdkData_f657b8;
extern char SdkData_f657b9;
extern char SdkData_f657bc;
extern char SdkData_f657c0;
extern char SdkData_f657d0;
extern char SdkData_f65800;
extern char SdkData_f65808;
extern char SdkData_f65838;
extern int SdkData_f65778;
extern int SdkData_f657b0;
__int64 oe_api_596ee4();
__int64 nn_oe_GetOperationMode(void* this_);
__int64 oe_api_597f10(__int64 a1);
__int64 oe_api_597fe0(__int64 result);
void* nn_oe_GetHealthWarningDisappearedSystemEvent(void* this_);
__int64 nn_oe_IsApplicationLicenseLimited(void* this_);
__int64 oe_api_5984b0(__int64 result);
__int64 nn_oe_GetLimitedApplicationLicenseType(void* this_);
__int64 nn_oe_TryUpgradeLimitedApplicationLicense(void* this_);
void* nn_oe_GetLimitedApplicationLicenseUpgradableEvent(void* this_);
__int64 oe_api_5989b0();
__int64 oe_api_596ee4() { return nn_applet_SetWirelessPriorityMode_plt(1); }

__int64 nn_oe_GetOperationMode(void* this_)
{
  __int64 v1;
  __int64 v2;
  unsigned int v3;
  __int64 v5;
  int v6;
  unsigned __int8 v7;

  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f65770,
                            memory_order_acquire) &
       1) == 0) {
    v5 = __cxa_guard_acquire_plt(&SdkData_f65770);
    if ((_DWORD)v5 != 0) {
      oe_api_597f10(v5);
      fw_rtld_RegisterCrtDestructor();
      __cxa_guard_release_plt(&SdkData_f65770);
    }
  }
  nn_os_SdkMutexType_Lock_plt(&SdkData_f65778);
  if ((nn_os_TryWaitSystemEvent_plt(&SdkData_f65780) & 1) != 0) {
    v1 = nn_os_ClearSystemEvent_plt(&SdkData_f65780);
    v7 = 0;
    v2 = nn_am_GetCommonStateGetter_plt(v1);
    v6 = (*(__int64 (**)(__int64, unsigned __int8*))(*(_QWORD*)v2 + 72LL))(v2,
                                                                           &v7);
    if (v6 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v6);
    }
    v3 = v7;
    SdkData_f657b0 = v7;
  }
  else {
    v3 = SdkData_f657b0;
  }
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f65778);
  return v3;
}

__int64 oe_api_597f10(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  int v7;
  _BYTE v8[4];

  v6 = 0;
  SdkData_f65778 = 0;
  SdkData_f657a8 = 0;
  v1 = nn_am_GetApplicationFunctions_plt(a1);
  v2 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v1 + 512LL))(v1, &v6);
  v7 = v2;
  if ((_DWORD)v2 != 0) {
    v2 = nn_diag_detail_AbortImpl_plt_858db0(&v7);
  }
  else if (SdkData_f657a8 == 0) {
    v3 = nn_os_AttachReadableHandleToSystemEvent_plt(
        &SdkData_f65780, (unsigned int)v6, BYTE4(v6), 0);
    BYTE4(v6) = 0;
    LODWORD(v6) = 0;
    v8[0] = 0;
    v4 = nn_am_GetCommonStateGetter_plt(v3);
    result = (*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 72LL))(v4, v8);
    v7 = result;
    if ((_DWORD)result != 0) {
      goto LABEL_9;
    }
    SdkData_f657b0 = v8[0];
    if (BYTE4(v6) == 1) {
      return nn_os_CloseNativeHandle_plt((unsigned int)v6);
    }
    return result;
  }
  nn_diag_detail_AbortImpl_plt_856170(v2);
LABEL_9:
  nn_diag_detail_AbortImpl_plt_858db0(&v7);
  __udf(0);
}

__int64 oe_api_597fe0(__int64 result)
{
  if (*(_BYTE*)(result + 48) != 0) {
    return nn_os_DestroySystemEvent_plt(result + 8);
  }
  return result;
}

void* nn_oe_GetHealthWarningDisappearedSystemEvent(void* this_)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v5;
  __int64 v6;

  v1 = nn_os_SdkMutexType_Lock_plt(&SdkData_f657c4);
  if ((SdkData_f657d0 & 1) == 0) {
    v6 = 0;
    SdkData_f65800 = 0;
    SdkData_f657d0 = 1;
    v2 = nn_am_GetApplicationFunctions_plt(v1);
    v3 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v2 + 464LL))(v2, &v6);
    v5 = v3;
    if ((_DWORD)v3 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v5);
    }
    if (SdkData_f65800 != 0) {
      nn_diag_detail_AbortImpl_plt_856170(v3);
    }
    nn_os_AttachReadableHandleToSystemEvent_plt(&SdkData_f657d8,
                                                (unsigned int)v6, BYTE4(v6), 0);
  }
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f657c4);
  return &SdkData_f657d8;
}

__int64 nn_oe_IsApplicationLicenseLimited(void* this_)
{
  __int64 v1;
  unsigned int v2;

  v1 = nn_os_SdkMutexType_Lock_plt(&SdkData_f657c8);
  oe_api_5984b0(v1);
  v2 = (unsigned __int8)SdkData_f657bc;
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f657c8);
  return v2;
}

__int64 oe_api_5984b0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  int v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  __int64 v10;
  int v11;

  if ((SdkData_f657b9 & 1) == 0) {
    LOBYTE(v10) = 0;
    v1 = nn_am_GetApplicationFunctions_plt(result);
    v2 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v1 + 208LL))(v1, &v10);
    if ((_DWORD)v2 != 0) {
      v8 = v2 & 0x3FFFFF;
      if ((v2 & 0x3FFFFF) != 0x1080) {
      LABEL_33:
        if (v8 == 1152016) {
        LABEL_39:
          LODWORD(v2) = 256118;
        }
        else if (v8 == 1153040) {
          LODWORD(v10) = 257142;
          v7 = nn_diag_detail_AbortImpl_plt_858db0(&v10);
        LABEL_36:
          if (v9 == 1152016) {
          LABEL_41:
            v7 = 256118;
          LABEL_42:
            v11 = v7;
            nn_diag_detail_AbortImpl_plt_858db0(&v11);
            __udf(0);
          }
          if (v9 != 1153040) {
            goto LABEL_42;
          }
          v11 = 257142;
          nn_diag_detail_AbortImpl_plt_858db0(&v11);
          goto LABEL_39;
        }
        LODWORD(v10) = v2;
        nn_diag_detail_AbortImpl_plt_858db0(&v10);
        goto LABEL_41;
      }
      SdkData_f657bc = 0;
    }
    else {
      SdkData_f657bc = 1;
      SdkData_f657c0 = v10;
    }
    if (SdkData_f65808 == 1 && SdkData_f65838 != 0) {
      v2 = nn_os_DestroySystemEvent_plt(&SdkData_f65810);
    }
    SdkData_f65838 = 0;
    v10 = 0;
    SdkData_f65808 = 1;
    v4 = nn_am_GetApplicationFunctions_plt(v2);
    result =
        (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v4 + 216LL))(v4, &v10);
    if ((_DWORD)result != 0) {
      v5 = result;
      if ((result & 0x3FFFFF) == 0x119410) {
        v5 = 256118;
      }
      else if ((result & 0x3FFFFF) == 0x119610) {
        SdkData_f657b8 = 0;
        if (SdkData_f65808 == 1 && SdkData_f65838 != 0) {
          result = nn_os_DestroySystemEvent_plt(&SdkData_f65810);
        }
        v5 = 0;
        SdkData_f65808 = 0;
      }
    }
    else {
      SdkData_f657b8 = 1;
      if (SdkData_f65838 != 0) {
      LABEL_32:
        LODWORD(v2) = nn_diag_detail_AbortImpl_plt_856170(result);
        goto LABEL_33;
      }
      nn_os_AttachReadableHandleToSystemEvent_plt(
          &SdkData_f65810, (unsigned int)v10, BYTE4(v10), 0);
      BYTE4(v10) = 0;
      LODWORD(v10) = 0;
      result = nn_os_TryWaitSystemEvent_plt(&SdkData_f65810);
      v5 = 0;
      if ((result & 1) != 0) {
        LOBYTE(v11) = 0;
        v6 = nn_am_GetApplicationFunctions_plt(result);
        v7 = (*(__int64 (**)(__int64, int*))(*(_QWORD*)v6 + 208LL))(v6, &v11);
        if (v7 != 0) {
          v9 = v7 & 0x3FFFFF;
          if ((v7 & 0x3FFFFF) != 0x1080) {
            goto LABEL_36;
          }
          SdkData_f657bc = 0;
        }
        else {
          SdkData_f657bc = 1;
          SdkData_f657c0 = v11;
        }
        result = nn_os_ClearSystemEvent_plt(&SdkData_f65810);
        v5 = 0;
      }
    }
    if (BYTE4(v10) == 1) {
      result = nn_os_CloseNativeHandle_plt((unsigned int)v10);
    }
    LODWORD(v10) = v5;
    if (v5 == 0) {
      SdkData_f657b9 = 1;
      return result;
    }
    result = nn_diag_detail_AbortImpl_plt_858db0(&v10);
    goto LABEL_32;
  }
  return result;
}

__int64 nn_oe_GetLimitedApplicationLicenseType(void* this_)
{
  __int64 v1;
  unsigned int v2;

  v1 = nn_os_SdkMutexType_Lock_plt(&SdkData_f657c8);
  oe_api_5984b0(v1);
  v2 = (unsigned __int8)SdkData_f657c0;
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f657c8);
  return v2;
}

__int64 nn_oe_TryUpgradeLimitedApplicationLicense(void* this_)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  char v5;
  int v7;
  int v8;
  char v9[4];
  int v10;

  v1 = nn_os_SdkMutexType_Lock_plt(&SdkData_f657c8);
  oe_api_5984b0(v1);
  if ((SdkData_f657b8 & 1) == 0) {
    v8 = 256630;
    nn_diag_detail_AbortImpl_plt_858db0(&v8);
  }
  v2 = nn_os_TryWaitSystemEvent_plt(&SdkData_f65810);
  if ((v2 & 1) != 0) {
    v9[0] = 0;
    v3 = nn_am_GetApplicationFunctions_plt(v2);
    v4 = (*(__int64 (**)(__int64, char*))(*(_QWORD*)v3 + 208LL))(v3, v9);
    if (v4 != 0) {
      v7 = v4 & 0x3FFFFF;
      if ((v4 & 0x3FFFFF) != 0x1080) {
        if (v7 == 1152016) {
          v4 = 256118;
        }
        else if (v7 == 1153040) {
          v10 = 257142;
          nn_diag_detail_AbortImpl_plt_858db0(&v10);
        }
        v10 = v4;
        nn_diag_detail_AbortImpl_plt_858db0(&v10);
      }
      SdkData_f657bc = 0;
    }
    else {
      SdkData_f657bc = 1;
      SdkData_f657c0 = v9[0];
    }
    nn_os_ClearSystemEvent_plt(&SdkData_f65810);
    v5 = SdkData_f657bc ^ 1;
  }
  else {
    v5 = 0;
  }
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f657c8);
  return v5 & 1;
}

void* nn_oe_GetLimitedApplicationLicenseUpgradableEvent(void* this_)
{
  __int64 v1;
  int v3;

  v1 = nn_os_SdkMutexType_Lock_plt(&SdkData_f657c8);
  oe_api_5984b0(v1);
  if ((SdkData_f657b8 & 1) == 0) {
    v3 = 256630;
    nn_diag_detail_AbortImpl_plt_858db0(&v3);
  }
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f657c8);
  return &SdkData_f65810;
}

__int64 oe_api_5989b0()
{
  fw_rtld_RegisterCrtDestructor();
  return fw_rtld_RegisterCrtDestructor();
}

#pragma GCC visibility pop
