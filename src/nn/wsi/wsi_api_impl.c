#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void nn_gpu_sdk_MakeRgbaBlockImagePreference_plt(
    PSEUDO_X8, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__attribute__((swiftcall)) void
    nn_gsv_shim_MakeInterModuleBlockUserImagePreference_plt(PSEUDO_X8, _QWORD,
                                                            _QWORD, _QWORD,
                                                            _QWORD, _QWORD,
                                                            _QWORD, _QWORD);
__attribute__((swiftcall)) void
    nn_wsi_ounce_native_NativeWindow_CalculateRequirement_plt(PSEUDO_X8,
                                                              _QWORD);
__int64 NvOsDrvGpuGetGpukDevice_plt(_QWORD);
__int64 memset_plt(void* this_, void*, int);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_gpu_sdk_CalculateNativeImageSize_plt(_QWORD, _QWORD);
__int64 nn_gpu_sdk_CreateNativeImage_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                         _QWORD, _QWORD);
__int64 nn_gpu_sdk_CreateVprNativeImage_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                            _QWORD, _QWORD);
__int64 nn_gpu_sdk_DestroyGpuNativeImage_plt(_QWORD);
__int64 nn_gpu_sdk_GetGpuNativeImageHandle_plt(_QWORD);
__int64 nn_gs_WaitNativeSync_plt(_QWORD);
__int64 nn_gs_external_CloseNvRmMemHandle_plt(_QWORD);
__int64 nn_gs_external_CreateFromFd_plt(_QWORD, _QWORD);
__int64 nn_gs_external_GetNativeSyncHandleFromNvRmFence_plt(_QWORD);
__int64 nn_gs_external_GetNvRmFenceFromNativeSyncHandle_plt(_QWORD);
__int64 nn_gs_external_GetNvRmMemGpuMemoryHandle_plt(_QWORD);
__int64 nn_gs_external_GetNvRmMemVprMemoryHandle_plt(_QWORD);
__int64 nn_gs_external_MapNvRmMem_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_gs_sdk_AcquireNativeWindowBuffer_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_gs_sdk_ConnectNativeWindow_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_gs_sdk_CreateNativeWindowAliasImagePool_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_gs_sdk_DestroyNativeWindowAliasImagePool_plt(_QWORD, _QWORD);
__int64 nn_gs_sdk_DisconnectNativeWindow_plt(_QWORD);
__int64 nn_gs_sdk_ForceAcquireNativeWindowBuffer_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_gs_sdk_GetNativeWindowLinearUnitLuminance_plt(_QWORD);
__int64 nn_gs_sdk_PresentNativeWindowBuffer_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_gs_sdk_RegisterNativeWindowAliasBuffer_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_gs_sdk_SetNativeWindowColorSpace_plt(_QWORD, _QWORD);
__int64 nn_gs_sdk_SetNativeWindowLinearUnitLuminance_plt(_QWORD, _QWORD);
__int64 nn_gs_sdk_SetNativeWindowNextOrigin_plt(_QWORD, _QWORD);
__int64 nn_gs_sdk_UnregisterNativeWindowAliasBuffer_plt(_QWORD, _QWORD);
__int64 nn_gsv_shim_CalculateRequirements_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_os_GetSystemTick_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_wsi_nv_GetGraphicsApi_plt(_QWORD);
__int64 nn_wsi_ounce_native_NativeWindow_Acquire_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_wsi_ounce_native_NativeWindow_Finalize_plt(_QWORD);
__int64 nn_wsi_ounce_native_NativeWindow_GetIndex_plt(_QWORD);
__int64 nn_wsi_ounce_native_NativeWindow_InitializeImpl_plt(_QWORD, _QWORD,
                                                            _QWORD);
__int64 nn_wsi_ounce_native_NativeWindow_InitializeImpl_plt_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD,
    _QWORD) __asm__("nn_wsi_ounce_native_NativeWindow_InitializeImpl_plt");
__int64 nn_wsi_ounce_native_NativeWindow_Initialize_plt_875940(_QWORD, _QWORD,
                                                               _QWORD, _QWORD,
                                                               _QWORD);
__int64 nn_wsi_ounce_native_NativeWindow_Initialize_plt_875960(_QWORD, _QWORD,
                                                               _QWORD, _QWORD,
                                                               _QWORD);
__int64 nn_wsi_ounce_native_NativeWindow_InsertTextureImpl_plt(_QWORD, _QWORD,
                                                               _QWORD, _QWORD);
__int64 nn_wsi_ounce_native_NativeWindow_Present_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_wsi_ounce_native_NativeWindow_UpdateActiveTextureCount_plt(_QWORD,
                                                                      _QWORD);
__int64 nn_wsi_ounce_native_NativeWindow_UpdateCrop_plt(_QWORD, _QWORD);
__int64 nn_wsi_ounce_native_NativeWindow_UpdatePresentInterval_plt(_QWORD,
                                                                   _QWORD);
__int64 std___1___libcpp_verbose_abort_plt(_QWORD);
extern _QWORD SdkData_c64750[3];
extern _UNKNOWN SdkData_c64768;
extern _UNKNOWN SdkData_c64780;
extern _UNKNOWN SdkData_f714d0;
extern __int64 (*SdkData_e71958[6])();
extern __int64 SdkData_f714d8;
extern __int64 SdkData_f71608;
extern __int64 SdkData_f71738;
extern __int64 SdkData_f71868;
extern __int64 SdkData_f71998;
extern __int64 SdkData_f71ac8;
extern __int64 SdkData_f71bf8;
extern __int64 SdkData_f71d28;
__int64 nn_wsi_nv_OnWindowInitialize_5ec0b0(__int64* a1, __int64 a2,
                                            unsigned int a3, __int64 a4);
__int64 nn_wsi_nv_OnWindowInitialize_5ec2c0(__int64* a1, __int64 a2,
                                            unsigned int a3, __int64 a4);
__int64 nn_wsi_nv_OnWindowFinalize(__int64* a1);
unsigned __int64 nn_wsi_nv_OnAcquireTexture(__int64* a1, int* a2, _DWORD* a3);
__int64 nn_wsi_nv_OnPresentTexture_5ec7d0(__int64* a1, int* a2);
__int64 nn_wsi_nv_OnPresentTexture_5ec940(__int64* a1, int* a2,
                                          unsigned int a3);
__int64 nn_wsi_nv_OnSetActiveTextureCount(__int64* a1, unsigned int a2);
__int64 wsi_api_5ecbd0(__int64 a1, __int64 a2);
__attribute__((swiftcall)) void
nn_wsi_ounce_native_NativeWindow_CalculateRequirement(PSEUDO_X8 x8_,
                                                      __int64 a1);
__int64 nn_wsi_ounce_native_NativeWindow_Initialize_5ece60(__int64 a1,
                                                           __int64 a2,
                                                           __int64 a3, int a4);
__int64 nn_wsi_ounce_native_NativeWindow_InitializeImpl(__int64* a1,
                                                        __int64* a2, __int64 a3,
                                                        unsigned int a4,
                                                        __int64 a5);
__int64 nn_wsi_ounce_native_NativeWindow_Initialize_5ed380(
    __int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5);
__int64 nn_wsi_ounce_native_NativeWindow_InsertTextureImpl(_QWORD* a1,
                                                           unsigned int a2,
                                                           unsigned int* a3,
                                                           __int64 a4);
__int64 nn_wsi_ounce_native_NativeWindow_Finalize(void* this_);
__int64 nn_wsi_ounce_native_NativeWindow_RemoveTextureImpl(_QWORD* a1,
                                                           unsigned int a2,
                                                           __int64 a3);
_QWORD* nn_wsi_ounce_native_NativeWindow_UpdateActiveTextureCount(_QWORD* this_,
                                                                  int a2);
__int64 nn_wsi_ounce_native_NativeWindow_Acquire(__int64 result, _DWORD* a2,
                                                 _QWORD* a3);
__int64 nn_wsi_ounce_native_NativeWindow_Present(_QWORD* a1, unsigned int a2,
                                                 __int64 a3);
void __attribute__((noreturn)) wsi_api_5eda50();
__int64 wsi_api_5eda80(_QWORD** a1, __int64 a2);
__int64 wsi_api_5edb10(_QWORD** a1, __int64 a2);

__int64 nn_wsi_nv_OnWindowInitialize_5ec0b0(__int64* a1, __int64 a2,
                                            unsigned int a3, __int64 a4)
{
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v12;
  __int64* v14;

  if ((wsi_api_5ecbd0((__int64)&SdkData_f714d0, *a1) & 1) != 0) {
    v8 = *a1;
    nn_os_SdkMutexType_Lock_plt(&SdkData_f714d0);
    v9 = &SdkData_f714d8;
    if (SdkData_f714d8 == v8 || (v9 = &SdkData_f71608, SdkData_f71608 == v8) ||
        (v9 = &SdkData_f71738, SdkData_f71738 == v8) ||
        (v9 = &SdkData_f71868, SdkData_f71868 == v8) ||
        (v9 = &SdkData_f71998, SdkData_f71998 == v8) ||
        (v9 = &SdkData_f71ac8, SdkData_f71ac8 == v8) ||
        (v9 = &SdkData_f71bf8, SdkData_f71bf8 == v8) ||
        (v9 = &SdkData_f71d28, SdkData_f71d28 == v8)) {
      v10 = v9 + 1;
    }
    else {
      v10 = nullptr;
    }
    nn_os_SdkMutexType_Unlock_plt(&SdkData_f714d0);
    if ((nn_wsi_ounce_native_NativeWindow_Initialize_plt_875940(v10, a1, a2, a3,
                                                                a4) &
         1) != 0) {
      return 1;
    }
    v12 = *a1;
    nn_os_SdkMutexType_Lock_plt(&SdkData_f714d0);
    v14 = &SdkData_f714d8;
    if (SdkData_f714d8 == v12 ||
        (v14 = &SdkData_f71608, SdkData_f71608 == v12) ||
        (v14 = &SdkData_f71738, SdkData_f71738 == v12) ||
        (v14 = &SdkData_f71868, SdkData_f71868 == v12) ||
        (v14 = &SdkData_f71998, SdkData_f71998 == v12) ||
        (v14 = &SdkData_f71ac8, SdkData_f71ac8 == v12) ||
        (v14 = &SdkData_f71bf8, SdkData_f71bf8 == v12) ||
        (v14 = &SdkData_f71d28, SdkData_f71d28 == v12)) {
      memset_plt((void*)v14, nullptr, 304);
    }
    nn_os_SdkMutexType_Unlock_plt(&SdkData_f714d0);
  }
  return 0;
}

__int64 nn_wsi_nv_OnWindowInitialize_5ec2c0(__int64* a1, __int64 a2,
                                            unsigned int a3, __int64 a4)
{
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v12;
  __int64* v14;

  if ((wsi_api_5ecbd0((__int64)&SdkData_f714d0, *a1) & 1) != 0) {
    v8 = *a1;
    nn_os_SdkMutexType_Lock_plt(&SdkData_f714d0);
    v9 = &SdkData_f714d8;
    if (SdkData_f714d8 == v8 || (v9 = &SdkData_f71608, SdkData_f71608 == v8) ||
        (v9 = &SdkData_f71738, SdkData_f71738 == v8) ||
        (v9 = &SdkData_f71868, SdkData_f71868 == v8) ||
        (v9 = &SdkData_f71998, SdkData_f71998 == v8) ||
        (v9 = &SdkData_f71ac8, SdkData_f71ac8 == v8) ||
        (v9 = &SdkData_f71bf8, SdkData_f71bf8 == v8) ||
        (v9 = &SdkData_f71d28, SdkData_f71d28 == v8)) {
      v10 = v9 + 1;
    }
    else {
      v10 = nullptr;
    }
    nn_os_SdkMutexType_Unlock_plt(&SdkData_f714d0);
    if ((nn_wsi_ounce_native_NativeWindow_Initialize_plt_875960(v10, a1, a2, a3,
                                                                a4) &
         1) != 0) {
      return 1;
    }
    v12 = *a1;
    nn_os_SdkMutexType_Lock_plt(&SdkData_f714d0);
    v14 = &SdkData_f714d8;
    if (SdkData_f714d8 == v12 ||
        (v14 = &SdkData_f71608, SdkData_f71608 == v12) ||
        (v14 = &SdkData_f71738, SdkData_f71738 == v12) ||
        (v14 = &SdkData_f71868, SdkData_f71868 == v12) ||
        (v14 = &SdkData_f71998, SdkData_f71998 == v12) ||
        (v14 = &SdkData_f71ac8, SdkData_f71ac8 == v12) ||
        (v14 = &SdkData_f71bf8, SdkData_f71bf8 == v12) ||
        (v14 = &SdkData_f71d28, SdkData_f71d28 == v12)) {
      memset_plt((void*)v14, nullptr, 304);
    }
    nn_os_SdkMutexType_Unlock_plt(&SdkData_f714d0);
  }
  return 0;
}

__int64 nn_wsi_nv_OnWindowFinalize(__int64* a1)
{
  __int64 v1;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64* v7;

  v1 = *a1;
  nn_os_SdkMutexType_Lock_plt(&SdkData_f714d0);
  v3 = &SdkData_f714d8;
  if (SdkData_f714d8 != v1) {
    if (SdkData_f71608 == v1) {
      v3 = &SdkData_f71608;
    }
    else {
      v3 = &SdkData_f71738;
      if (SdkData_f71738 != v1) {
        v3 = &SdkData_f71868;
        if (SdkData_f71868 != v1) {
          v3 = &SdkData_f71998;
          if (SdkData_f71998 != v1) {
            v3 = &SdkData_f71ac8;
            if (SdkData_f71ac8 != v1) {
              v3 = &SdkData_f71bf8;
              if (SdkData_f71bf8 != v1) {
                v3 = &SdkData_f71d28;
                if (SdkData_f71d28 != v1) {
                  v4 = nullptr;
                  goto LABEL_12;
                }
              }
            }
          }
        }
      }
    }
  }
  v4 = v3 + 1;
LABEL_12:
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f714d0);
  nn_wsi_ounce_native_NativeWindow_Finalize_plt(v4);
  v5 = *a1;
  nn_os_SdkMutexType_Lock_plt(&SdkData_f714d0);
  v7 = &SdkData_f714d8;
  if (SdkData_f714d8 == v5) {
  LABEL_22:
    memset_plt((void*)v7, nullptr, 304);
    return nn_os_SdkMutexType_Unlock_plt(&SdkData_f714d0);
  }
  if (SdkData_f71608 == v5) {
    v7 = &SdkData_f71608;
    goto LABEL_22;
  }
  v7 = &SdkData_f71738;
  if (SdkData_f71738 == v5) {
    goto LABEL_22;
  }
  v7 = &SdkData_f71868;
  if (SdkData_f71868 == v5) {
    goto LABEL_22;
  }
  v7 = &SdkData_f71998;
  if (SdkData_f71998 == v5) {
    goto LABEL_22;
  }
  v7 = &SdkData_f71ac8;
  if (SdkData_f71ac8 == v5) {
    goto LABEL_22;
  }
  v7 = &SdkData_f71bf8;
  if (SdkData_f71bf8 == v5) {
    goto LABEL_22;
  }
  v7 = &SdkData_f71d28;
  if (SdkData_f71d28 == v5) {
    goto LABEL_22;
  }
  return nn_os_SdkMutexType_Unlock_plt(&SdkData_f714d0);
}

unsigned __int64 nn_wsi_nv_OnAcquireTexture(__int64* a1, int* a2, _DWORD* a3)
{
  __int64 v3;
  __int64* v6;
  __int64* v7;
  unsigned __int64 result;
  unsigned __int64 v9;
  int v10;
  int v11;
  _QWORD v12[2];
  int v13;

  v3 = *a1;
  nn_os_SdkMutexType_Lock_plt(&SdkData_f714d0);
  v6 = &SdkData_f714d8;
  if (SdkData_f714d8 == v3 || (v6 = &SdkData_f71608, SdkData_f71608 == v3) ||
      (v6 = &SdkData_f71738, SdkData_f71738 == v3) ||
      (v6 = &SdkData_f71868, SdkData_f71868 == v3) ||
      (v6 = &SdkData_f71998, SdkData_f71998 == v3) ||
      (v6 = &SdkData_f71ac8, SdkData_f71ac8 == v3) ||
      (v6 = &SdkData_f71bf8, SdkData_f71bf8 == v3) ||
      (v6 = &SdkData_f71d28, SdkData_f71d28 == v3)) {
    v7 = v6 + 1;
  }
  else {
    v7 = nullptr;
  }
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f714d0);
  v13 = 0;
  v12[0] = 0;
  v12[1] = 0;
  nn_wsi_ounce_native_NativeWindow_Acquire_plt(v7, &v13, v12);
  *a3 = v13;
  result = nn_gs_external_GetNvRmFenceFromNativeSyncHandle_plt(v12);
  v9 = HIDWORD(result);
  if ((_DWORD)result == -1) {
    v10 = 0;
  }
  else {
    v10 = 2;
  }
  if ((_DWORD)result == -1) {
    v11 = 0;
  }
  else {
    v11 = result;
  }
  if ((_DWORD)result == -1) {
    LODWORD(v9) = 0;
  }
  *a2 = v10;
  a2[1] = 0;
  a2[2] = v11;
  a2[3] = v9;
  return result;
}

__int64 nn_wsi_nv_OnPresentTexture_5ec7d0(__int64* a1, int* a2)
{
  __int64 v2;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  unsigned int v11;
  _DWORD v13[2];
  _QWORD v14[2];

  v2 = *a1;
  nn_os_SdkMutexType_Lock_plt(&SdkData_f714d0);
  v5 = &SdkData_f714d8;
  if (SdkData_f714d8 == v2 || (v5 = &SdkData_f71608, SdkData_f71608 == v2) ||
      (v5 = &SdkData_f71738, SdkData_f71738 == v2) ||
      (v5 = &SdkData_f71868, SdkData_f71868 == v2) ||
      (v5 = &SdkData_f71998, SdkData_f71998 == v2) ||
      (v5 = &SdkData_f71ac8, SdkData_f71ac8 == v2) ||
      (v5 = &SdkData_f71bf8, SdkData_f71bf8 == v2) ||
      (v5 = &SdkData_f71d28, SdkData_f71d28 == v2)) {
    v6 = v5 + 1;
    v7 = nn_os_SdkMutexType_Unlock_plt(&SdkData_f714d0);
    v8 = *a2;
    v14[0] = 0;
    v14[1] = 0;
    if (v8 == 0) {
      goto LABEL_14;
    }
  }
  else {
    v6 = nullptr;
    v7 = nn_os_SdkMutexType_Unlock_plt(&SdkData_f714d0);
    v8 = *a2;
    v14[0] = 0;
    v14[1] = 0;
    if (v8 == 0) {
      goto LABEL_14;
    }
  }
  if (v8 != 2) {
    nn_diag_detail_AbortImpl_plt_856170(v7);
    __udf(0);
  }
  v9 = a2[3];
  v13[0] = a2[2];
  v13[1] = v9;
  v14[0] = nn_gs_external_GetNativeSyncHandleFromNvRmFence_plt(v13);
  v14[1] = v10;
LABEL_14:
  nn_wsi_ounce_native_NativeWindow_UpdateCrop_plt(v6, a1);
  nn_wsi_ounce_native_NativeWindow_UpdatePresentInterval_plt(
      v6, *((unsigned int*)a1 + 7));
  v11 = nn_wsi_ounce_native_NativeWindow_GetIndex_plt(v6);
  return nn_wsi_ounce_native_NativeWindow_Present_plt(v6, v11, v14);
}

__int64 nn_wsi_nv_OnPresentTexture_5ec940(__int64* a1, int* a2, unsigned int a3)
{
  __int64 v3;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v14;
  unsigned int v15;
  unsigned int v16;
  __int64* v17;
  __int64* v18;
  _QWORD v19[2];
  _DWORD v20[2];

  v3 = *a1;
  nn_os_SdkMutexType_Lock_plt(&SdkData_f714d0);
  v7 = &SdkData_f714d8;
  if (SdkData_f714d8 == v3 || (v7 = &SdkData_f71608, SdkData_f71608 == v3) ||
      (v7 = &SdkData_f71738, SdkData_f71738 == v3) ||
      (v7 = &SdkData_f71868, SdkData_f71868 == v3) ||
      (v7 = &SdkData_f71998, SdkData_f71998 == v3) ||
      (v7 = &SdkData_f71ac8, SdkData_f71ac8 == v3) ||
      (v7 = &SdkData_f71bf8, SdkData_f71bf8 == v3) ||
      (v7 = &SdkData_f71d28, SdkData_f71d28 == v3)) {
    v8 = v7 + 1;
    v9 = nn_os_SdkMutexType_Unlock_plt(&SdkData_f714d0);
    v10 = *a2;
    v19[0] = 0;
    v19[1] = 0;
    if (v10 == 0) {
    LABEL_14:
      nn_wsi_ounce_native_NativeWindow_UpdateCrop_plt(v8, a1);
      nn_wsi_ounce_native_NativeWindow_UpdatePresentInterval_plt(
          v8, *((unsigned int*)a1 + 7));
      return nn_wsi_ounce_native_NativeWindow_Present_plt(v8, a3, v19);
    }
  }
  else {
    v8 = nullptr;
    v9 = nn_os_SdkMutexType_Unlock_plt(&SdkData_f714d0);
    v10 = *a2;
    v19[0] = 0;
    v19[1] = 0;
    if (v10 == 0) {
      goto LABEL_14;
    }
  }
  if (v10 == 2) {
    v11 = a2[3];
    v20[0] = a2[2];
    v20[1] = v11;
    v19[0] = nn_gs_external_GetNativeSyncHandleFromNvRmFence_plt(v20);
    v19[1] = v12;
    goto LABEL_14;
  }
  v14 = *(_QWORD*)nn_diag_detail_AbortImpl_plt_856170(v9);
  v16 = v15;
  nn_os_SdkMutexType_Lock_plt(&SdkData_f714d0);
  v17 = &SdkData_f714d8;
  if (SdkData_f714d8 == v14 || (v17 = &SdkData_f71608, SdkData_f71608 == v14) ||
      (v17 = &SdkData_f71738, SdkData_f71738 == v14) ||
      (v17 = &SdkData_f71868, SdkData_f71868 == v14) ||
      (v17 = &SdkData_f71998, SdkData_f71998 == v14) ||
      (v17 = &SdkData_f71ac8, SdkData_f71ac8 == v14) ||
      (v17 = &SdkData_f71bf8, SdkData_f71bf8 == v14) ||
      (v17 = &SdkData_f71d28, SdkData_f71d28 == v14)) {
    v18 = v17 + 1;
  }
  else {
    v18 = nullptr;
  }
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f714d0);
  return nn_wsi_ounce_native_NativeWindow_UpdateActiveTextureCount_plt(v18,
                                                                       v16);
}

__int64 nn_wsi_nv_OnSetActiveTextureCount(__int64* a1, unsigned int a2)
{
  __int64 v2;
  __int64* v4;
  __int64* v5;

  v2 = *a1;
  nn_os_SdkMutexType_Lock_plt(&SdkData_f714d0);
  v4 = &SdkData_f714d8;
  if (SdkData_f714d8 == v2 || (v4 = &SdkData_f71608, SdkData_f71608 == v2) ||
      (v4 = &SdkData_f71738, SdkData_f71738 == v2) ||
      (v4 = &SdkData_f71868, SdkData_f71868 == v2) ||
      (v4 = &SdkData_f71998, SdkData_f71998 == v2) ||
      (v4 = &SdkData_f71ac8, SdkData_f71ac8 == v2) ||
      (v4 = &SdkData_f71bf8, SdkData_f71bf8 == v2) ||
      (v4 = &SdkData_f71d28, SdkData_f71d28 == v2)) {
    v5 = v4 + 1;
  }
  else {
    v5 = nullptr;
  }
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f714d0);
  return nn_wsi_ounce_native_NativeWindow_UpdateActiveTextureCount_plt(v5, a2);
}

__int64 wsi_api_5ecbd0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;

  v4 = nn_os_SdkMutexType_Lock_plt(a1);
  v5 = a1 + 8;
  if (*(_QWORD*)(a1 + 8) == a2 || *(_QWORD*)(a1 + 312) == a2 ||
      *(_QWORD*)(a1 + 616) == a2 || *(_QWORD*)(a1 + 920) == a2 ||
      *(_QWORD*)(a1 + 1224) == a2 || *(_QWORD*)(a1 + 1528) == a2 ||
      *(_QWORD*)(a1 + 1832) == a2 || *(_QWORD*)(a1 + 2136) == a2) {
    nn_diag_detail_AbortImpl_plt_856170(v4);
    __udf(0);
  }
  if (*(_BYTE*)(a1 + 304) == 1) {
    if (*(_BYTE*)(a1 + 608) == 1) {
      if (*(_BYTE*)(a1 + 912) == 1) {
        if (*(_BYTE*)(a1 + 1216) == 1) {
          if (*(_BYTE*)(a1 + 1520) == 1) {
            if (*(_BYTE*)(a1 + 1824) == 1) {
              if (*(_BYTE*)(a1 + 2128) == 1) {
                if ((*(_BYTE*)(a1 + 2432) & 1) != 0) {
                  nn_os_SdkMutexType_Unlock_plt(a1);
                  return 0;
                }
                v5 = a1 + 2136;
              }
              else {
                v5 = a1 + 1832;
              }
            }
            else {
              v5 = a1 + 1528;
            }
          }
          else {
            v5 = a1 + 1224;
          }
        }
        else {
          v5 = a1 + 920;
        }
      }
      else {
        v5 = a1 + 616;
      }
    }
    else {
      v5 = a1 + 312;
    }
  }
  *(_QWORD*)(v5 + 160) = 0;
  *(_QWORD*)(v5 + 168) = 0;
  *(_QWORD*)(v5 + 176) = 0;
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)(v5 + 192) = 0;
  *(_QWORD*)(v5 + 200) = 0;
  *(_QWORD*)(v5 + 208) = 0;
  *(_QWORD*)(v5 + 216) = 0;
  *(_QWORD*)(v5 + 224) = 0;
  *(_QWORD*)(v5 + 232) = 0;
  *(_QWORD*)(v5 + 240) = 0;
  *(_QWORD*)(v5 + 248) = 0;
  *(_QWORD*)(v5 + 256) = 0;
  *(_QWORD*)(v5 + 264) = 0;
  *(_QWORD*)(v5 + 272) = 0;
  *(_QWORD*)(v5 + 280) = 0;
  *(_QWORD*)(v5 + 288) = 0;
  *(_DWORD*)(v5 + 176) = 0;
  *(_DWORD*)(v5 + 297) = 0;
  *(_BYTE*)(v5 + 296) = 1;
  *(_DWORD*)(v5 + 300) = 0;
  *(_DWORD*)(v5 + 200) = 0;
  *(_DWORD*)(v5 + 224) = 0;
  *(_DWORD*)(v5 + 248) = 0;
  *(_QWORD*)v5 = a2;
  *(_QWORD*)(v5 + 8) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 24) = 0;
  *(_QWORD*)(v5 + 32) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_QWORD*)(v5 + 136) = 0;
  *(_QWORD*)(v5 + 144) = 0;
  *(_QWORD*)(v5 + 152) = 0;
  *(_DWORD*)(v5 + 288) = 0;
  *(_QWORD*)(v5 + 272) = 0;
  *(_QWORD*)(v5 + 280) = 0;
  *(_QWORD*)(v5 + 256) = 0;
  *(_QWORD*)(v5 + 264) = 0;
  nn_os_SdkMutexType_Unlock_plt(a1);
  return 1;
}

__attribute__((swiftcall)) void

nn_wsi_ounce_native_NativeWindow_CalculateRequirement(PSEUDO_X8 x8_, __int64 a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  unsigned int v3;
  __int64 v4;
  int v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  int v13;
  __int64 v14;
  _QWORD v15[8];
  __int64 v16;

  v3 = *(unsigned __int8*)(a1 + 16);
  v4 = *(unsigned int*)(a1 + 20);
  v5 = *(_DWORD*)(a1 + 24);
  v7 = *(_DWORD*)(a1 + 8);
  v6 = *(unsigned int*)(a1 + 12);
  memset(v15, 0, sizeof(v15));
  if (v3 >= 7) {
    v8 = 0;
  }
  else {
    v8 = (unsigned int)(0x6050402010100uLL >> (8 * (unsigned __int8)v3));
  }
  if (*(_BYTE*)(a1 + 17) != 0) {
    v9 = *(unsigned __int8*)(a1 + 17) == 1;
  }
  else {
    v9 = 2;
  }
  if (v3 - 5 >= 2) {
    v10 = 0;
  }
  else {
    v10 = 80;
  }
  nn_gsv_shim_MakeInterModuleBlockUserImagePreference_plt(
      (void*)(v15), v7, v6, (unsigned int)(v5 + 3), v4, v8, v9, v10);
  v16 = 0;
  v14 = 0;
  result = nn_gsv_shim_CalculateRequirements_plt(&v16, &v14, v15, 1);
  v13 = result;
  if ((_DWORD)result != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v13);
  }
  v12 = v16;
  *a2 = 0;
  a2[1] = v12;
  a2[2] = v14;
  {
    result;
    return;
  }
}

__int64 nn_wsi_ounce_native_NativeWindow_Initialize_5ece60(__int64 a1,
                                                           __int64 a2,
                                                           __int64 a3, int a4)
{
  __int64 v4;
  int* v5;
  __int64 v6;
  _DWORD* v7;
  char v8;
  char v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;
  char v14;
  int v15;
  int v16;
  char v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int* v24;
  int v25;
  int v26;
  int v27;
  char v28;
  char v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  int v33;
  _QWORD v35[20];

  memset(v35, 0, sizeof(v35));
  if (a4 == 0) {
    return nn_wsi_ounce_native_NativeWindow_InitializeImpl_plt(a1, a2, v35) & 1;
  }
  if (a4 == 1) {
    v4 = 0;
    goto LABEL_44;
  }
  v5 = (int*)(a3 + 48);
  v6 = 0;
  v7 = (_DWORD*)&v35[9] + 1;
  do {
    v13 = *(v5 - 10);
    if (v13 <= 60) {
      if (v13 > 54) {
        if (v13 == 55) {
          goto LABEL_24;
        }
        if (v13 == 56) {
        LABEL_21:
          v14 = 1;
          goto LABEL_28;
        }
      }
      else {
        if (v13 == 37) {
          goto LABEL_21;
        }
        if (v13 == 41) {
          v14 = 5;
          goto LABEL_28;
        }
      }
    LABEL_27:
      v14 = 0;
      goto LABEL_28;
    }
    if (v13 <= 112) {
      if (v13 == 61) {
        v14 = 4;
        goto LABEL_28;
      }
      if (v13 == 109) {
      LABEL_24:
        v14 = 2;
        goto LABEL_28;
      }
      goto LABEL_27;
    }
    if (v13 == 113) {
      v14 = 6;
      goto LABEL_28;
    }
    v14 = 3;
    if (v13 != 154 && v13 != 156) {
      goto LABEL_27;
    }
  LABEL_28:
    v15 = *(v5 - 12);
    v16 = *(v5 - 11);
    v17 = *((_BYTE*)v5 - 4);
    v18 = *(_QWORD*)(v5 - 3);
    v19 = *((_QWORD*)v5 - 3);
    v20 = *(v5 - 4);
    *((_BYTE*)v7 - 60) = v14;
    *(_QWORD*)(v7 - 19) = 0;
    *(v7 - 17) = v15;
    *(v7 - 16) = v16;
    *((_BYTE*)v7 - 59) = v17;
    v21 = *v5;
    v22 = v5[1];
    v23 = v5[2];
    *((_QWORD*)v7 - 7) = v18;
    *((_QWORD*)v7 - 6) = v19;
    *(v7 - 10) = v20;
    if (v23 <= 60) {
      if (v23 > 54) {
        if (v23 == 55) {
          goto LABEL_40;
        }
        if (v23 == 56) {
          goto LABEL_7;
        }
      }
      else {
        if (v23 == 37) {
        LABEL_7:
          v8 = 1;
          goto LABEL_8;
        }
        if (v23 == 41) {
          v8 = 5;
          goto LABEL_8;
        }
      }
      goto LABEL_42;
    }
    if (v23 <= 112) {
      if (v23 == 61) {
        v8 = 4;
        goto LABEL_8;
      }
      if (v23 == 109) {
      LABEL_40:
        v8 = 2;
        goto LABEL_8;
      }
      goto LABEL_42;
    }
    v8 = 3;
    if (v23 != 156 && v23 != 154) {
      if (v23 == 113) {
        v8 = 6;
        goto LABEL_8;
      }
    LABEL_42:
      v8 = 0;
    }
  LABEL_8:
    v9 = *((_BYTE*)v5 + 44);
    v10 = *(_QWORD*)(v5 + 9);
    v11 = *((_QWORD*)v5 + 3);
    v6 -= 2;
    *(v7 - 7) = v21;
    *(v7 - 6) = v22;
    v12 = v5[8];
    v5 += 24;
    *(_QWORD*)(v7 - 9) = 0;
    *((_BYTE*)v7 - 20) = v8;
    *((_BYTE*)v7 - 19) = v9;
    *((_QWORD*)v7 - 2) = v10;
    *((_QWORD*)v7 - 1) = v11;
    *v7 = v12;
    v7 += 20;
  } while (-(__int64)(a4 & 0xFFFFFFFE) != v6);
  v4 = -v6;
  if ((a4 & 1) == 0) {
    return nn_wsi_ounce_native_NativeWindow_InitializeImpl_plt(a1, a2, v35) & 1;
  }
LABEL_44:
  v24 = (int*)(a3 + 48 * v4);
  v25 = *v24;
  v26 = v24[1];
  v27 = v24[2];
  if (v27 <= 60) {
    if (v27 > 54) {
      if (v27 == 55) {
        goto LABEL_59;
      }
      if (v27 != 56) {
        goto LABEL_61;
      }
    }
    else if (v27 != 37) {
      if (v27 != 41) {
        goto LABEL_61;
      }
      v28 = 5;
      goto LABEL_62;
    }
    v28 = 1;
    goto LABEL_62;
  }
  if (v27 <= 112) {
    if (v27 == 61) {
      v28 = 4;
      goto LABEL_62;
    }
    if (v27 != 109) {
      goto LABEL_61;
    }
  LABEL_59:
    v28 = 2;
    goto LABEL_62;
  }
  v28 = 3;
  if (v27 != 156 && v27 != 154) {
    if (v27 == 113) {
      v28 = 6;
      goto LABEL_62;
    }
  LABEL_61:
    v28 = 0;
  }
LABEL_62:
  v29 = *((_BYTE*)v24 + 44);
  v30 = *(_QWORD*)(v24 + 9);
  v31 = *((_QWORD*)v24 + 3);
  v32 = &v35[5 * v4];
  v33 = v24[8];
  *v32 = 0;
  *((_DWORD*)v32 + 2) = v25;
  *((_DWORD*)v32 + 3) = v26;
  *((_BYTE*)v32 + 16) = v28;
  *((_BYTE*)v32 + 17) = v29;
  *(_QWORD*)((char*)v32 + 20) = v30;
  *(_QWORD*)((char*)v32 + 28) = v31;
  *((_DWORD*)v32 + 9) = v33;
  return nn_wsi_ounce_native_NativeWindow_InitializeImpl_plt(a1, a2, v35) & 1;
}

__int64 nn_wsi_ounce_native_NativeWindow_InitializeImpl(__int64* a1,
                                                        __int64* a2, __int64 a3,
                                                        unsigned int a4,
                                                        __int64 a5)
{
  __int64 v5;
  __int64 v7;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  unsigned int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  int v27;
  __int64 v28;
  __int64 v29;
  unsigned int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  _DWORD* i;
  int v41;
  int v42;
  int v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  int v48;
  int v49;
  __int64 v50;
  __int64 v51;
  __int64* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64* v58;
  __int64* v59;
  _QWORD v60[8];
  __int64 vars0;

  v5 = *a2;
  v7 = a4;
  *a1 = *a2;
  v11 = nn_wsi_nv_GetGraphicsApi_plt(a5);
  if ((unsigned int)v11 >= 3) {
    nn_diag_detail_AbortImpl_plt_856170(v11);
  }
  else {
    LODWORD(v60[0]) = nn_gs_sdk_ConnectNativeWindow_plt(
        v5, a5, SdkData_c64750[(unsigned int)v11]);
    if (LODWORD(v60[0]) == 0) {
      v12 = *(unsigned __int8*)(a3 + 16) - 1;
      if (v12 > 5) {
        nn_gs_sdk_DisconnectNativeWindow_plt(*a1);
        return (unsigned __int8)v12 < 6u;
      }
      v13 = 4LL * (unsigned __int8)(*(_BYTE*)(a3 + 16) - 1);
      v14 = *(_DWORD*)((char*)&SdkData_c64768 + v13);
      nn_gs_sdk_SetNativeWindowColorSpace_plt(
          *a1, *(unsigned int*)((char*)&SdkData_c64780 + v13));
      if ((unsigned int)*(unsigned __int8*)(a3 + 16) - 5 >= 2) {
        v15 = 0;
      }
      else {
        v15 = 80;
      }
      nn_gs_sdk_SetNativeWindowLinearUnitLuminance_plt(*a1, v15);
      v16 = nn_gs_sdk_GetNativeWindowLinearUnitLuminance_plt(*a1);
      v17 = *(unsigned __int8*)(a3 + 17);
      v18 = *(unsigned int*)(a3 + 20);
      v19 = v16;
      v20 = *(unsigned int*)(a3 + 8);
      v21 = *(unsigned int*)(a3 + 12);
      v22 = (unsigned int)(*(_DWORD*)(a3 + 24) + 3);
      memset(v60, 0, sizeof(v60));
      if (v17 != 0) {
        v23 = v17 == 1;
      }
      else {
        v23 = 2;
      }
      nn_gpu_sdk_MakeRgbaBlockImagePreference_plt((void*)v60, v20, v21, v22,
                                                  v18, v14, v19, v23);
      if ((_DWORD)v7 != 0) {
        v24 = 0;
        do {
          nn_wsi_ounce_native_NativeWindow_InsertTextureImpl_plt(
              a1, (unsigned int)v24++, a3, v60);
          a3 += 40;
        } while ((unsigned int)v7 != v24);
        nn_gs_sdk_SetNativeWindowNextOrigin_plt(*a1, *((unsigned int*)a2 + 6));
        v25 = *((_DWORD*)a1 + 42);
        a1[32] = (unsigned int)v7;
        a1[33] = (unsigned int)v7;
        if (v25 == 0) {
          goto LABEL_15;
        }
      }
      else {
        nn_gs_sdk_SetNativeWindowNextOrigin_plt(*a1, *((unsigned int*)a2 + 6));
        v27 = *((_DWORD*)a1 + 42);
        a1[32] = 0;
        a1[33] = 0;
        if (v27 == 0) {
          goto LABEL_15;
        }
      }
      *((_DWORD*)a1 + 42) = 0;
    LABEL_15:
      if (*((_DWORD*)a1 + 48) != 0) {
        *((_DWORD*)a1 + 48) = 0;
      }
      if (*((_DWORD*)a1 + 54) != 0) {
        *((_DWORD*)a1 + 54) = 0;
      }
      if (*((_DWORD*)a1 + 60) != 0) {
        *((_DWORD*)a1 + 60) = 0;
      }
      a1[31] = 0;
      return (unsigned __int8)v12 < 6u;
    }
  }
  v28 = nn_diag_detail_AbortImpl_plt_858db0(v60);
  v52 = &vars0;
  v53 = v31;
  v54 = v5;
  v55 = a5;
  v56 = v7;
  v57 = a3;
  v58 = a2;
  v59 = a1;
  v33 = v32;
  v34 = v30;
  v35 = v29;
  v37 = v36;
  v38 = v28;
  if (v30 == 0) {
    return nn_wsi_ounce_native_NativeWindow_InitializeImpl_plt_alt1(
        v38, v37, v35, v34, v33);
  }
  v39 = v30;
  for (i = (_DWORD*)(v29 + 20);; i += 10) {
    v41 = *(i - 3);
    v42 = *(i - 2);
    v47 = 0;
    v50 = 0;
    v51 = 0;
    v45 = 0;
    v46 = 0;
    v44 = 0;
    v48 = v41;
    v49 = v42;
    LOWORD(v50) = *((_WORD*)i - 2);
    v43 = i[1];
    HIDWORD(v50) = *i;
    LODWORD(v51) = v43;
    nn_wsi_ounce_native_NativeWindow_CalculateRequirement_plt((void*)&v44,
                                                              &v47);
    if (v45 > (unsigned int)i[3] || (((_DWORD)v46 - 1) & i[4]) != 0) {
      break;
    }
    if (--v39 == 0) {
      return nn_wsi_ounce_native_NativeWindow_InitializeImpl_plt_alt1(
          v38, v37, v35, v34, v33);
    }
  }
  return 0;
}

__int64 nn_wsi_ounce_native_NativeWindow_Initialize_5ed380(
    __int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v10;
  _DWORD* i;
  int v12;
  int v13;
  int v14;
  struct {
    __int64 v16;
    unsigned __int64 v17;
    __int64 v18;
  } v16_;
  struct {
    __int64 v19;
    int v20;
    int v21;
    __int64 v22;
    __int64 v23;
  } v19_;

  if (a4 == 0) {
    return nn_wsi_ounce_native_NativeWindow_InitializeImpl_plt_alt1(a1, a2, a3,
                                                                    a4, a5);
  }
  v10 = a4;
  for (i = (_DWORD*)(a3 + 20);; i += 10) {
    v12 = *(i - 3);
    v13 = *(i - 2);
    v19_.v19 = 0;
    v19_.v22 = 0;
    v19_.v23 = 0;
    v16_.v17 = 0;
    v16_.v18 = 0;
    v16_.v16 = 0;
    v19_.v20 = v12;
    v19_.v21 = v13;
    LOWORD(v19_.v22) = *((_WORD*)i - 2);
    v14 = i[1];
    HIDWORD(v19_.v22) = *i;
    LODWORD(v19_.v23) = v14;
    nn_wsi_ounce_native_NativeWindow_CalculateRequirement_plt(
        (void*)(&v16_.v16), &v19_.v19);
    if (v16_.v17 > (unsigned int)i[3] || (((_DWORD)v16_.v18 - 1) & i[4]) != 0) {
      break;
    }
    if (--v10 == 0) {
      return nn_wsi_ounce_native_NativeWindow_InitializeImpl_plt_alt1(
          a1, a2, a3, a4, a5);
    }
  }
  return 0;
}

__int64 nn_wsi_ounce_native_NativeWindow_InsertTextureImpl(_QWORD* a1,
                                                           unsigned int a2,
                                                           unsigned int* a3,
                                                           __int64 a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  __int64 result;
  unsigned int v20;
  __int64 v21;
  int v22;
  __int64 v23;

  v5 = a3[8];
  v4 = a3[9];
  v21 = 0;
  LODWORD(v23) = nn_gpu_sdk_CalculateNativeImageSize_plt(&v21, a4);
  if ((_DWORD)v23 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v23);
    goto LABEL_12;
  }
  v10 = a3[7];
  v20 = 0;
  LODWORD(v23) = nn_gs_external_CreateFromFd_plt(&v20, v10);
  if ((_DWORD)v23 != 0) {
  LABEL_12:
    nn_diag_detail_AbortImpl_plt_858db0(&v23);
    goto LABEL_13;
  }
  v11 = nn_gs_external_GetNvRmMemVprMemoryHandle_plt(v20);
  if ((_DWORD)v11 != 0) {
    v5 = v21;
    v12 = v11;
    v13 = a2;
    v14 = ((__int64 (*)(void))NvOsDrvGpuGetGpukDevice_plt)();
    LODWORD(v23) = nn_gpu_sdk_CreateVprNativeImage_plt(&a1[4 * a2 + 1], v14,
                                                       v12, v4, v5, a4);
    if ((_DWORD)v23 == 0) {
      goto LABEL_8;
    }
    v11 = nn_diag_detail_AbortImpl_plt_858db0(&v23);
  }
  v15 = v21;
  v16 = NvOsDrvGpuGetGpukDevice_plt(v11);
  v23 = 0;
  v22 = nn_gs_external_MapNvRmMem_plt(&v23, v20, 0, v5);
  if (v22 != 0) {
  LABEL_15:
    nn_diag_detail_AbortImpl_plt_858db0(&v22);
  LABEL_16:
    nn_diag_detail_AbortImpl_plt_858db0(&v22);
    __udf(0);
  }
  v13 = a2;
  v17 = nn_gs_external_GetNvRmMemGpuMemoryHandle_plt(v20);
  v22 = nn_gpu_sdk_CreateNativeImage_plt(&a1[4 * a2 + 1], v16, v23 + v4, v15,
                                         v17, v4, a4);
  if (v22 != 0) {
    goto LABEL_16;
  }
LABEL_8:
  v18 = nn_gpu_sdk_GetGpuNativeImageHandle_plt(&a1[4 * v13 + 1]);
  LODWORD(v23) = nn_gs_sdk_CreateNativeWindowAliasImagePool_plt(*a1, v18, 1);
  if ((_DWORD)v23 != 0) {
  LABEL_13:
    nn_diag_detail_AbortImpl_plt_858db0(&v23);
    goto LABEL_14;
  }
  result = nn_gs_sdk_RegisterNativeWindowAliasBuffer_plt(*a1, a2, v18);
  LODWORD(v23) = result;
  if ((_DWORD)result != 0) {
  LABEL_14:
    nn_diag_detail_AbortImpl_plt_858db0(&v23);
    goto LABEL_15;
  }
  *((_DWORD*)a1 + v13 + 34) = v20;
  return result;
}

__int64 nn_wsi_ounce_native_NativeWindow_Finalize(void* this_)
{
  char* v1;
  unsigned int v3;
  __int64 v4;
  __int64 (*v5)();
  char* v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  _QWORD v14[2];
  unsigned int v15;
  _QWORD* v16;

  v1 = (char*)this_ + 152;
  v3 = 0;
  v15 = 0;
  do {
    v14[0] = this_;
    v14[1] = &v15;
    v4 = *(unsigned int*)&v1[24 * v3 + 16];
    if ((_DWORD)v4 == -1) {
      wsi_api_5eda50();
    }
    v5 = SdkData_e71958[v4];
    v16 = v14;
    ((void (*)(_QWORD**))v5)(&v16);
    v3 = v15 + 1;
    v15 = v3;
  } while (v3 < 4);
  if (*((_QWORD*)this_ + 32) != 0) {
    v6 = (char*)this_ + 8;
    v7 = (char*)this_ + 136;
    do {
      v8 = *(_QWORD*)this_;
      LODWORD(v16) = 0;
      v14[0] = 0;
      v14[1] = 0;
      nn_gs_sdk_ForceAcquireNativeWindowBuffer_plt(&v16, v14, v8);
      v9 = (unsigned int)v16;
      v10 = nn_gpu_sdk_GetGpuNativeImageHandle_plt(&v6[32 * (unsigned int)v16]);
      nn_gs_WaitNativeSync_plt(v14);
      nn_gs_sdk_UnregisterNativeWindowAliasBuffer_plt(*(_QWORD*)this_,
                                                      (unsigned int)v9);
      nn_gs_sdk_DestroyNativeWindowAliasImagePool_plt(*(_QWORD*)this_, v10);
      nn_gpu_sdk_DestroyGpuNativeImage_plt(&v6[32 * v9]);
      nn_gs_external_CloseNvRmMemHandle_plt(*(unsigned int*)&v7[4 * v9]);
      *(_DWORD*)&v7[4 * v9] = 0;
      v11 = *((_QWORD*)this_ + 32) - 1LL;
      *((_QWORD*)this_ + 32) = v11;
    } while (v11 != 0);
  }
  v12 = *(_QWORD*)this_;
  *((_DWORD*)this_ + 70) = 0;
  result = nn_gs_sdk_DisconnectNativeWindow_plt(v12);
  *(_QWORD*)this_ = 0;
  return result;
}

__int64 nn_wsi_ounce_native_NativeWindow_RemoveTextureImpl(_QWORD* a1,
                                                           unsigned int a2,
                                                           __int64 a3)
{
  _QWORD* v3;
  unsigned int v7;
  char* v8;
  __int64 result;

  v3 = &a1[4 * a2];
  v7 = nn_gpu_sdk_GetGpuNativeImageHandle_plt(v3 + 1);
  nn_gs_WaitNativeSync_plt(a3);
  nn_gs_sdk_UnregisterNativeWindowAliasBuffer_plt(*a1, a2);
  nn_gs_sdk_DestroyNativeWindowAliasImagePool_plt(*a1, v7);
  nn_gpu_sdk_DestroyGpuNativeImage_plt(v3 + 1);
  v8 = (char*)a1 + 4 * a2;
  result = nn_gs_external_CloseNvRmMemHandle_plt(*((unsigned int*)v8 + 34));
  *((_DWORD*)v8 + 34) = 0;
  return result;
}

_QWORD* nn_wsi_ounce_native_NativeWindow_UpdateActiveTextureCount(_QWORD* this_,
                                                                  int a2)
{
  if (a2 >= 5) {
    nn_diag_detail_AbortImpl_plt_856170(this_);
  }
  if (*(this_ + 32) < (unsigned __int64)a2) {
    nn_diag_detail_AbortImpl_plt_856170(this_);
  }
  if (*(this_ + 31) != 0) {
    nn_diag_detail_AbortImpl_plt_856170(this_);
  }
  *(this_ + 33) = a2;
  return this_;
}

__int64 nn_wsi_ounce_native_NativeWindow_Acquire(__int64 result, _DWORD* a2,
                                                 _QWORD* a3)
{
  unsigned __int64 v3;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  _DWORD v22[5];

  v3 = *(_QWORD*)(result + 264);
  v6 = result;
  if (v3 != 0) {
    v7 = 0;
    LODWORD(v8) = 0;
    while (1) {
      v9 = result + 152 + 24 * v7;
      if (*(_DWORD*)(v9 + 16) == 1) {
        break;
      }
      LODWORD(v8) = v8 + 1;
      v7 = (unsigned int)v8;
      if (v3 <= (unsigned int)v8) {
        goto LABEL_5;
      }
    }
    v16 = *(_QWORD*)v9;
    v15 = *(_QWORD*)(v9 + 8);
    *(_DWORD*)(v9 + 16) = 2;
    v17 = v16;
    v18 = v15;
    ++*(_QWORD*)(result + 248);
  }
  else {
  LABEL_5:
    v22[0] = 0;
    v20 = 0;
    v21 = 0;
    do {
      result = nn_gs_sdk_AcquireNativeWindowBuffer_plt(v22, &v20, *(_QWORD*)v6);
      v19 = result;
      if ((_DWORD)result != 0) {
        nn_diag_detail_AbortImpl_plt_858db0(&v19);
        __udf(0);
      }
      v8 = v22[0];
      v10 = v21;
      v11 = v6 + 152 + 24LL * v22[0];
      v12 = *(_DWORD*)(v11 + 16);
      *(_QWORD*)v11 = v20;
      *(_QWORD*)(v11 + 8) = v10;
      if (v12 != 1) {
        *(_DWORD*)(v11 + 16) = 1;
      }
    } while (*(_QWORD*)(v6 + 264) <= v8);
    v13 = v20;
    v14 = v21;
    *(_DWORD*)(v11 + 16) = 2;
    *(_QWORD*)v11 = v13;
    *(_QWORD*)(v11 + 8) = v14;
    v17 = v13;
    v18 = v14;
    ++*(_QWORD*)(v6 + 248);
  }
  *(_DWORD*)(v6 + 280) = v8;
  *a2 = v8;
  *a3 = v17;
  a3[1] = v18;
  return result;
}

__int64 nn_wsi_ounce_native_NativeWindow_Present(_QWORD* a1, unsigned int a2,
                                                 __int64 a3)
{
  __int64 v6;
  __int64 result;

  v6 = nn_os_GetSystemTick_plt(a1);
  result = nn_gs_sdk_PresentNativeWindowBuffer_plt(*a1, a2, a3);
  a1[34] = v6;
  if (LODWORD(a1[3 * a2 + 21]) != 0) {
    LODWORD(a1[3 * a2 + 21]) = 0;
  }
  --a1[31];
  return result;
}

void __attribute__((noreturn)) wsi_api_5eda50()
{
  std___1___libcpp_verbose_abort_plt(
      "bad_variant_access was thrown in -fno-exceptions mode");
  __udf(0);
}

__int64 wsi_api_5eda80(_QWORD** a1, __int64 a2)
{
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  unsigned int v6;
  char* v7;
  __int64 result;

  v3 = (_QWORD*)**a1;
  v4 = *(unsigned int*)(*a1)[1];
  v5 = &v3[4 * v4];
  v6 = nn_gpu_sdk_GetGpuNativeImageHandle_plt(v5 + 1);
  nn_gs_WaitNativeSync_plt(a2);
  nn_gs_sdk_UnregisterNativeWindowAliasBuffer_plt(*v3, (unsigned int)v4);
  nn_gs_sdk_DestroyNativeWindowAliasImagePool_plt(*v3, v6);
  nn_gpu_sdk_DestroyGpuNativeImage_plt(v5 + 1);
  v7 = (char*)v3 + 4 * v4;
  result = nn_gs_external_CloseNvRmMemHandle_plt(*((unsigned int*)v7 + 34));
  *((_DWORD*)v7 + 34) = 0;
  --v3[32];
  return result;
}

__int64 wsi_api_5edb10(_QWORD** a1, __int64 a2)
{
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  unsigned int v6;
  char* v7;
  __int64 result;

  v3 = (_QWORD*)**a1;
  v4 = *(unsigned int*)(*a1)[1];
  v5 = &v3[4 * v4];
  v6 = nn_gpu_sdk_GetGpuNativeImageHandle_plt(v5 + 1);
  nn_gs_WaitNativeSync_plt(a2);
  nn_gs_sdk_UnregisterNativeWindowAliasBuffer_plt(*v3, (unsigned int)v4);
  nn_gs_sdk_DestroyNativeWindowAliasImagePool_plt(*v3, v6);
  nn_gpu_sdk_DestroyGpuNativeImage_plt(v5 + 1);
  v7 = (char*)v3 + 4 * v4;
  result = nn_gs_external_CloseNvRmMemHandle_plt(*((unsigned int*)v7 + 34));
  *((_DWORD*)v7 + 34) = 0;
  --v3[32];
  return result;
}

#pragma GCC visibility pop
