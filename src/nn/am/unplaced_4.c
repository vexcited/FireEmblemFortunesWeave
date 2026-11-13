#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_1c96e4(__int64);
__int64 SdkRoutine_1c9760(__int64, __int64);
__int64 SdkRoutine_1c9854(__int64, int);
__int64 SdkRoutine_1d3d5c(__int64);
__int64 SdkRoutine_1d3d98(_DWORD*);
__int64 am_service_proxy_1d67c0();
__int64 nn_diag_detail_AbortImpl_plt_858db0(__int64);
__int64 nn_os_CloseNativeHandle_plt(unsigned int);
__int64 nn_os_GetCurrentProcessHandle_plt(__int64);
__int64 nn_os_SdkMutexType_Lock_plt(__int64);
__int64 nn_os_SdkMutexType_Unlock_plt(__int64);
__int64 nn_os_SleepThread_plt(_QWORD);
__int64 nn_sf_hipc_ConnectToHipcService_plt(__int64, const char*);
__int64 nn_sf_hipc_FinalizeHipcServiceResolution_plt(_QWORD);
__int64 nn_sf_hipc_InitializeHipcServiceResolution_plt(__int64);
__int64 nn_sf_hipc_client_HipcClientSessionManager_ConvertToDomainImpl_plt(
    __int64, __int64, unsigned int);
extern _UNKNOWN SdkData_efd240;
extern _UNKNOWN SdkData_efd260;
extern _UNKNOWN SdkData_efd280;
extern _UNKNOWN SdkData_efed60;
extern _UNKNOWN SdkData_efeea8;
extern __int64 (*nn_sf_hipc_client_AddDomainProxyReference_ptr[])();
extern __int64 (*nn_sf_hipc_client_GetDomainProxyOwner_ptr)();
extern __int64 SdkData_e86d80;
extern __int64 SdkData_efd248;
extern __int64 SdkData_efd250;
extern __int64 SdkData_efd268;
extern __int64 SdkData_efd270;
extern __int64 SdkData_efd288;
extern __int64 SdkData_efd290;
extern __int64 SdkData_efd3a0[822];
extern __int64 SdkData_efed50;
extern __int64 SdkData_efeea0;
extern __int64 SdkData_efeeb0;
extern __int64 SdkData_efeeb8;
extern __int64 nn_am_detail_g_AppletResourceUserId;
extern __int64 nn_am_detail_g_ChatFunctions;
extern __int64 nn_am_detail_g_ChatProxy;
extern __int64 nn_am_detail_g_SystemProcessCommonFunctions;
extern int SdkData_efd244;
extern int SdkData_efd264;
extern int SdkData_efd284;
extern int SdkData_efed8c;
extern int SdkData_efeeac;
__int64 nn_am_1c85ec(void* this_);

__int64 nn_am_1c85ec(void* this_)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 i;
  int v14;
  int v15;
  int v16;
  __int64 v17;
  __int64 result;
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;

  nn_os_SdkMutexType_Lock_plt((__int64)&SdkData_efeea8);
  if (SdkData_efeeac != 0) {
    if (SdkData_efeeb0 == 0) {
      SdkData_efeeb0 = (__int64)am_service_proxy_1d67c0;
      SdkData_efeeb8 = (__int64)SdkData_efd3a0;
    }
    ++SdkData_efeeac;
  }
  else {
    SdkRoutine_1c96e4((__int64)SdkData_efd3a0);
    v1 = SdkData_efd3a0[0];
    v2 = SdkRoutine_1c9760((__int64)&SdkData_efed50, (__int64)&SdkData_efed50);
    nn_sf_hipc_InitializeHipcServiceResolution_plt(v2);
    LODWORD(v22) = 0;
    v3 = nn_sf_hipc_ConnectToHipcService_plt((__int64)&v22, "appletAE");
    if ((_DWORD)v3 != 0 ||
        (v4 = v22, LODWORD(v23) = 0,
         (_DWORD)(v3 =
                      nn_sf_hipc_client_HipcClientSessionManager_ConvertToDomainImpl_plt(
                          (__int64)&SdkData_efed50, (__int64)&v23, v22)) !=
             0)) {
      v19 = v3;
      nn_sf_hipc_FinalizeHipcServiceResolution_plt(v3);
      SdkData_efed50 = SdkData_e86d80 + 16;
      SdkRoutine_1d3d5c((__int64)&SdkData_efed50);
      SdkRoutine_1d3d98(SdkData_efd3a0);
      nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efeea8);
      LODWORD(v23) = v19;
      nn_diag_detail_AbortImpl_plt_858db0((__int64)&v23);
    }
    v5 = v1 + 144;
    v6 = (int)v23;
    v7 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)(v1 + 144) +
                                                     16LL))(v1 + 144, 56, 8);
    v8 = v7;
    if (v7 != 0) {
      *(_QWORD*)(v7 + 16) = &SdkData_efed50;
      *(_DWORD*)(v7 + 24) = v6;
      *(_DWORD*)(v7 + 28) = 0;
      *(_QWORD*)(v7 + 48) = v5;
      *(_DWORD*)(v7 + 40) = 1;
      *(_BYTE*)(v7 + 8) = 1;
      *(_QWORD*)v7 = nn_sf_hipc_client_AddDomainProxyReference_ptr;
      *(_QWORD*)(v7 + 32) = &nn_sf_hipc_client_GetDomainProxyOwner_ptr;
    }
    v9 = SdkRoutine_1c9854((__int64)&SdkData_efed60, v4);
    ++SdkData_efed8c;
    nn_sf_hipc_FinalizeHipcServiceResolution_plt(v9);
    SdkData_efeeac = 1;
    SdkData_efeea0 = v8;
    SdkData_efeeb0 = (__int64)am_service_proxy_1d67c0;
    SdkData_efeeb8 = (__int64)SdkData_efd3a0;
  }
  nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efeea8);
  v10 = nn_os_SdkMutexType_Lock_plt((__int64)&SdkData_efd240);
  if (SdkData_efd244 != 0) {
    if (SdkData_efd248 == 0) {
      SdkData_efd248 = 0;
      SdkData_efd250 = 0;
    }
    ++SdkData_efd244;
  }
  else {
    v21 = 0;
    while (1) {
      v11 = SdkData_efeea0;
      LODWORD(v22) = nn_os_GetCurrentProcessHandle_plt(v10);
      BYTE4(v22) = 0;
      v23 = &v21;
      v12 = (*(__int64 (**)(__int64, __int64**, _QWORD, __int64*))(
          *(_QWORD*)v11 + 120LL))(v11, &v23, 0, &v22);
      if (BYTE4(v22) == 1) {
        nn_os_CloseNativeHandle_plt(v22);
      }
      if ((v12 & 0x3FFFFF) != 0x19280) {
        break;
      }
      v10 = nn_os_SleepThread_plt(10000000);
    }
    if (v12 != 0) {
      if (v21 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 8LL))(v21);
      }
      nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efd240);
      LODWORD(v23) = v12;
      nn_diag_detail_AbortImpl_plt_858db0((__int64)&v23);
    }
    SdkData_efd244 = 1;
    SdkData_efd248 = 0;
    SdkData_efd250 = 0;
    nn_am_detail_g_ChatProxy = v21;
  }
  nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efd240);
  nn_os_SdkMutexType_Lock_plt((__int64)&SdkData_efd280);
  if (SdkData_efd284 != 0) {
    if (SdkData_efd288 == 0) {
      SdkData_efd288 = 0;
      SdkData_efd290 = 0;
    }
    ++SdkData_efd284;
  }
  else {
    v22 = 0;
    for (i = SdkData_efeea0;; i = SdkData_efeea0) {
      v23 = &v22;
      v14 = (*(__int64 (**)(__int64, __int64**))(*(_QWORD*)i + 104LL))(i, &v23);
      if ((v14 & 0x3FFFFF) != 0x19280) {
        break;
      }
      nn_os_SleepThread_plt(10000000);
    }
    v15 = v14;
    if (v14 != 0) {
      if (v22 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v22 + 8LL))(v22);
      }
      nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efd280);
      LODWORD(v23) = v15;
      nn_diag_detail_AbortImpl_plt_858db0((__int64)&v23);
    }
    SdkData_efd284 = 1;
    SdkData_efd288 = 0;
    SdkData_efd290 = 0;
    nn_am_detail_g_SystemProcessCommonFunctions = v22;
  }
  nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efd280);
  nn_os_SdkMutexType_Lock_plt((__int64)&SdkData_efd260);
  if (SdkData_efd264 != 0) {
    if (SdkData_efd268 == 0) {
      SdkData_efd268 = 0;
      SdkData_efd270 = 0;
    }
    ++SdkData_efd264;
  }
  else {
    v22 = 0;
    v23 = &v22;
    v16 = (*(__int64 (**)(__int64, __int64**))(
        *(_QWORD*)nn_am_detail_g_ChatProxy + 96LL))(nn_am_detail_g_ChatProxy,
                                                    &v23);
    if (v16 != 0) {
      v20 = v16;
      if (v22 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v22 + 8LL))(v22);
      }
      nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efd260);
      LODWORD(v23) = v20;
      nn_diag_detail_AbortImpl_plt_858db0((__int64)&v23);
    }
    *(_OWORD*)&SdkData_efd268 = (__typeof__(*(_OWORD*)&SdkData_efd268)){0};
    SdkData_efd264 = 1;
    nn_am_detail_g_ChatFunctions = v22;
  }
  nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efd260);
  v17 = nn_am_detail_g_ChatFunctions;
  if (nn_am_detail_g_ChatFunctions != 0) {
    (**(void (***)(__int64))nn_am_detail_g_ChatFunctions)(
        nn_am_detail_g_ChatFunctions);
    (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
  }
  result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v17 + 32LL))(
      v17, &nn_am_detail_g_AppletResourceUserId);
  LODWORD(v23) = result;
  if ((_DWORD)result != 0) {
    nn_diag_detail_AbortImpl_plt_858db0((__int64)&v23);
  }
  return result;
}

#pragma GCC visibility pop
