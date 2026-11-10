#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
    nn_audio_CreateAudioSnoopManagerByHipc_plt(PSEUDO_X8);
__attribute__((swiftcall)) void
    nn_audio_CreateUserClientSessionByHipc_plt(PSEUDO_X8);
__attribute__((swiftcall)) void
    nn_audio_sysdev_server_CreateSessionManagerByHipc_plt(PSEUDO_X8);
__int64 (***SdkRoutine_1e6c20_alt1(_QWORD*))(_QWORD) __asm__(
    "SdkRoutine_1e6c20");
__int64 SdkRoutine_1e6c20(_QWORD);
__int64 SdkRoutine_1ec370(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_1ecc10(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_1ed830(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_857220(_QWORD, _QWORD);
__int64 SdkRoutine_b8c00(__int64, unsigned int*);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 cos_plt(void* this_, double);
__int64 fw_rtld_RegisterCrtDestructor();
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int);
__int64 nn_applet_GetAppletResourceUserId_plt(void* this_);
__int64 nn_audio_1f36e0_alt1(_QWORD, _QWORD, _QWORD, _QWORD,
                             _QWORD) __asm__("nn_audio_1f36e0");
__int64 nn_audio_234e50(_QWORD);
__int64 nn_audio_234f00(_QWORD);
__int64 nn_audio_CreateAudioRendererManager_plt(_QWORD);
__int64 nn_audio_OpenAudioRenderer_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_audio_capture_StartSystemAudioCaptureServer_plt(_QWORD);
__int64 nn_audio_detail_AcquireResourceExclusionChecker_plt(void);
__int64 nn_audio_detail_FftInPlaceProcessComplexDoubleCommon_plt(_QWORD, _QWORD,
                                                                 _QWORD,
                                                                 long double,
                                                                 long double);
__int64 nn_audio_dpm_detail_CreateProcess_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                              _QWORD);
__int64 nn_audio_dpm_detail_TerminateProcess_plt(_QWORD);
__int64 nn_audio_dpm_detail_WaitProcess_plt(_QWORD);
__int64 nn_audio_server_AudioRendererManagerImpl_AudioRendererManagerImpl_plt(
    _QWORD);
__int64
    nn_audio_server_AudioRendererManagerImpl_Destroy_AudioRendererManagerImpl_plt(
        _QWORD);
__int64
    nn_audio_server_AudioRendererManagerImpl_GetAudioDeviceServiceWithRevisionInfo_plt(
        _QWORD, _QWORD, _QWORD);
__int64 nn_audio_server_AudioRendererManagerImpl_GetAudioDeviceService_plt(
    _QWORD, _QWORD, _QWORD);
__int64
    nn_audio_server_AudioRendererManagerImpl_OpenAudioRendererForManualExecution_plt(
        _QWORD, _QWORD);
__int64 nn_audio_server_AudioRendererManagerImpl_OpenAudioRenderer_plt(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_detail_UnexpectedDefaultImpl_plt_857150(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_diag_detail_NotNullImpl_plt(_QWORD);
__int64 nn_lmem_DestroyUnitHeap_plt(_QWORD);
__int64 nn_lmem_FreeToExpHeap_plt(_QWORD, _QWORD);
__int64 nn_os_AttachReadableHandleToSystemEvent_plt(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_ConvertToTimeSpan_plt(_QWORD);
__int64 nn_os_CreateSystemEvent_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_CreateTransferMemory_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_os_DestroyTransferMemory_plt(_QWORD);
__int64 nn_os_DetachTransferMemory_plt(_QWORD);
__int64 nn_os_FlushDataCache_plt(void* this_, const void*, unsigned __int64);
__int64 nn_os_GetCurrentProcessHandle_plt(_QWORD);
__int64 nn_os_GetSystemTickFrequency_plt(void);
__int64 nn_os_GetSystemTick_plt(_QWORD);
__int64 nn_os_InitializeSemaphore_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_ReleaseSemaphore_plt_85ca90(_QWORD);
__int64 nn_os_SdkConditionVariableType_Initialize_plt(_QWORD);
__int64 nn_os_SdkConditionVariableType_Signal_plt(_QWORD);
__int64 nn_os_SdkConditionVariableType_TimedWait_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_SdkConditionVariableType_Wait_plt(_QWORD, _QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_TryAcquireSemaphore_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 nn_result_detail_ConvertInvalidImpl_plt(_QWORD);
__int64 nn_sf_cmif_GetInlineContext_plt(_QWORD);
__int64 nn_sf_hipc_CloseClientSessionHandle_plt(_QWORD);
__int64 nn_sf_hipc_GetMessageBufferOnTls_plt(_QWORD);
__int64 nn_sf_hipc_SendSyncRequest_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_sf_hipc_detail_HandleHipcErrorOnClient_plt(_QWORD);
__int64 nn_sf_hipc_detail_SetBuffers(_QWORD*, int, __int64, __int64,
                                     unsigned __int64, __int64);
__int64 nn_sf_impl_detail_ServiceObjectImplBase2_ReleaseImpl_plt(_QWORD);
__int64 sin_plt(void* this_, double);
extern _QWORD SdkData_f28470_alt1 __asm__("SdkData_f28470");
extern _UNKNOWN SdkData_f05dd4;
extern _UNKNOWN SdkData_f09e78;
extern _UNKNOWN SdkData_f17e98;
extern _UNKNOWN SdkData_f26ee0;
extern _UNKNOWN SdkData_f26f10;
extern _UNKNOWN SdkData_f26f38;
extern _UNKNOWN SdkData_f28470;
extern _UNKNOWN SdkData_f2847c;
extern __int64 (*SdkData_e5f940[])();
extern __int64 SdkData_e873c0;
extern __int64 SdkData_e873c8;
extern __int64 SdkData_e873d8;
extern __int64 SdkData_e873e0;
extern __int64 SdkData_f05d90;
extern __int64 SdkData_f05da0;
extern __int64 SdkData_f05db0;
extern __int64 SdkData_f05dc0;
extern __int64 SdkData_f09e70;
extern __int64 SdkData_f17e90;
extern __int64 SdkData_f26ed8;
extern __int64 SdkData_f26f00;
extern __int64 SdkData_f26f08;
extern __int64 SdkData_f26f28;
extern __int64 SdkData_f26f30;
extern __int64 SdkData_f28460;
extern __int64 SdkData_f28468;
extern __int64 SdkData_f28480;
extern char SdkData_f26f18;
extern char SdkData_f26f20;
extern char nn_audio_karaoke_g_IsKaraokeInputDevicesInitialized;
extern int SdkData_f05dd0;
extern int SdkData_f28474;
extern int nn_audio_g_SpatialDownmixOutputMode;
extern void (*SdkData_e873d0[125])();
__int64 nn_audio_ListAudioIns(__int64 a1, int a2);
__int64 nn_audio_OpenAudioIn_1e6d20(__int64 a1, __int64 a2, __int64* a3);
__int64 nn_audio_GetDspStatistics(__int64 a1);
__int64 nn_audio_SetDspStatisticsParameter(__int64 a1);
__int64 nn_audio_GetDspStatisticsParameter(__int64 a1);
__int64 nn_audio_GetAppletStateSummaries(__int64 a1, int a2);
__int64 nn_audio_1ee110(__int64 a1, _QWORD* a2, __int64* a3);
__int64 nn_audio_1ee2e0(_DWORD* a1);
__int64 nn_audio_1f12e0();
__int64 nn_audio_detail_InitializeFftWorkBufferCommon(__int64 result);
__int64 nn_audio_detail_FftInPlaceProcessComplexDoubleCommon(__int64 result,
                                                             __int64 a2,
                                                             __int64 a3,
                                                             unsigned int a4);
__int64 nn_audio_1f36e0(__int64 result, double* a2, unsigned __int64 a3,
                        unsigned __int64 a4, int a5);
__int64 nn_audio_detail_FftInPlaceProcessRealDoubleCommon(
    __int64 a1, double* a2, unsigned int* a3, int a4, long double a5,
    long double a6);
__int64 nn_audio_GetAudioRendererWorkBufferSize(unsigned int* a1);
__int64 nn_audio_OpenAudioRenderer_22f880(__int64* a1, int* a2, __int64 a3,
                                          __int64 a4);
__int64 nn_audio_OpenAudioRenderer_22fbf0(__int64* a1, __int64 a2, __int64 a3,
                                          __int64 a4, __int64 a5);
__int64 nn_audio_2302f0();
__int64 nn_audio_2313c0(__int64 result);
__int64 nn_audio_2346d0(__int64 a1, __int64* a2, __int64 a3, unsigned int* a4,
                        unsigned int* a5);
__int64 nn_audio_2347a0(__int64 a1, __int64* a2, __int64 a3);
__int64 nn_audio_2347e0(__int64 a1, __int64* a2);
__int64 nn_audio_234810(__int64 a1, __int64* a2, __int64 a3);
__int64 nn_audio_234850(__int64 a1);
__int64 nn_audio_2348a0(__int64 a1);
__int64 nn_audio_2348d0();
__int64 nn_audio_234ad0(__int64 a1);
__int64 nn_audio_234b60(__int64 a1, __int64* a2, __int64 a3, __int64 a4,
                        __int64 a5, __int64 a6, __int64 a7);
__int64 nn_audio_234c30(__int64 a1, __int64* a2, __int64 a3);
__int64 nn_audio_234cd0(__int64 a1, __int64* a2, __int64 a3, __int64 a4,
                        __int64 a5, __int64 a6, __int64 a7);
__int64 nn_audio_SetSpatialDownmixOutputMode(void* a1);
__int64 nn_audio_27aef0();
__int64 nn_audio_27b9d0();
__int64 nn_audio_27ba40(__int64 a1);
__int64 nn_audio_27bf20(__int64 a1);
__int64 nn_audio_27c340(__int64 a1);
__int64 nn_audio_27c760(unsigned int* a1);
__int64 nn_audio_27c7c0(__int64 a1, __int64 a2, __int64 a3);
__int64 nn_audio_27ca60(__int64 a1, __int64 a2);
__int64 nn_audio_27ce60(__int64 a1);
bool nn_audio_27ced0(__int64 a1);
bool nn_audio_27cef0(__int64 a1);
__int64 nn_audio_27cf20(__int64 a1, __int64 a2);
__int64 nn_audio_dpm_CreateProcess_2ae2b0(__int64 a1, __int64 a2,
                                          unsigned __int64 a3, __int64 a4,
                                          unsigned __int64 a5);
__int64 nn_audio_dpm_WaitProcess(__int64 a1);
__int64 nn_audio_dpm_TerminateProcess(__int64 a1);
__int64 nn_audio_dpm_detail_Initialize(void* this_);
__int64 nn_audio_dpm_detail_Finalize(void* this_);
__int64 nn_audio_dpm_detail_CreateProcess(__int64 a1, void* this_, void* a3,
                                          __int64 a4, __int64 a5);
__int64 nn_audio_dpm_detail_WaitProcess(unsigned int* a1);
__int64 nn_audio_dpm_detail_TerminateProcess(unsigned int* a1);
__int64 nn_audio_2ae800();
__int64 nn_audio_karaoke_InitializeKaraokeInputDevicesImpl(void* this_);
__int64 nn_audio_karaoke_FinalizeKaraokeInputDevicesImpl(void* this_);
__int64 nn_audio_karaoke_ListActiveVirtualKaraokeInputDevicesImpl(__int64 a1,
                                                                  int a2);
__int64 nn_audio_karaoke_GetKaraokeInputDeviceStatusImpl(_QWORD* a1,
                                                         __int64 a2);
__int64 nn_audio_karaoke_SetKaraokeInputDeviceGainImpl(__int64 a1, float a2);
float nn_audio_karaoke_GetKaraokeInputDeviceGainImpl(__int64 a1);
__int64 nn_audio_2af670();

__int64 nn_audio_ListAudioIns(__int64 a1, int a2)
{
  __int64 v2;
  unsigned int v3;
  __int64 v5;
  _QWORD v6[2];
  unsigned int v7;

  v7 = 0;
  if (a2 >= 1) {
    v5 = 0;
    v6[0] = a1;
    v6[1] = (unsigned __int64)(unsigned int)a2 << 8;
    SdkRoutine_1e6c20(&v5);
    v2 = v5;
    v3 = (*(__int64 (**)(__int64, _QWORD*, unsigned int*))(*(_QWORD*)v5 +
                                                           64LL))(v5, v6, &v7);
    if (v3 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
      return v7;
    }
    nn_result_detail_ConvertInvalidImpl_plt(v3);
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  return 0;
}

__int64 nn_audio_OpenAudioIn_1e6d20(__int64 a1, __int64 a2, __int64* a3)
{
  __int64* v3;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  void* v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  int v17;
  __int64 v18;
  unsigned __int8* v19;
  __int64 v20;
  int v21;
  __int64 v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  unsigned int v27;
  __int64 v28;
  __int64 v29;
  struct {
    unsigned int v31;
    char v32;
  } v31_;
  __int64 v33;
  _QWORD v34[2];
  _QWORD v35[32];
  _QWORD v36[2];
  __int64 v37;
  __int128 v38;
  __int64* v39;

  v3 = &SdkData_f05d90;
  nn_os_SdkMutexType_Lock_plt(&SdkData_f05dd4);
  if (SdkData_f05d90 == a1) {
    v7 = &SdkData_f05d90;
  }
  else {
    v7 = &SdkData_f05da0;
    if (SdkData_f05da0 != a1) {
      v7 = &SdkData_f05db0;
      if (SdkData_f05db0 != a1) {
        v7 = &SdkData_f05dc0;
        if (SdkData_f05dc0 != a1) {
          v8 = nn_os_SdkMutexType_Unlock_plt(&SdkData_f05dd4);
          goto LABEL_8;
        }
      }
    }
  }
  v9 = v7[1];
  v8 = nn_os_SdkMutexType_Unlock_plt(&SdkData_f05dd4);
  if (v9 != 0) {
    return 4761;
  }
LABEL_8:
  v38 = (__typeof__(v38)){0};
  v36[0] = a2;
  v36[1] = 256;
  v37 = 0;
  memset(v35, 0, sizeof(v35));
  v34[0] = v35;
  v34[1] = 256;
  v10 = (void*)nn_os_GetCurrentProcessHandle_plt(v8);
  if ((_DWORD)v10 == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v10);
  }
  v11 = (unsigned int)v10;
  v12 = nn_applet_GetAppletResourceUserId_plt(v10);
  v33 = 0;
  SdkRoutine_1e6c20_alt1(&v33);
  v13 = v33;
  v31_.v31 = v11;
  v31_.v32 = 0;
  v14 = *a3;
  v39 = &v37;
  v15 = (*(__int64 (**)(__int64, __int64, __int64**, _QWORD*, __int64,
                        unsigned int*, __int128*, _QWORD*, __int64))(
      *(_QWORD*)v33 + 72LL))(v33, 1, &v39, v36, v14, &v31_.v31, &v38, v34, v12);
  if (v31_.v32 == 1) {
    nn_os_CloseNativeHandle_plt(v31_.v31);
  }
  v16 = v37;
  v37 = 0;
  if (v15 != 0) {
    if (v16 != 0) {
      *(_DWORD*)(a1 + 12) = 1;
      (*(void (**)(__int64))(*(_QWORD*)v16 + 8LL))(v16);
    }
  LABEL_35:
    (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
    v27 = v15;
  }
  else {
    nn_os_SdkMutexType_Lock_plt(&SdkData_f05dd4);
    if (SdkData_f05d90 == 0 || (v3 = &SdkData_f05da0, SdkData_f05da0 == 0) ||
        (v3 = &SdkData_f05db0, SdkData_f05db0 == 0) ||
        (v3 = &SdkData_f05dc0, SdkData_f05dc0 == 0)) {
      *v3 = a1;
      v3[1] = v16;
      ++SdkData_f05dd0;
    }
    nn_os_SdkMutexType_Unlock_plt(&SdkData_f05dd4);
    v17 = v38;
    v18 = 0;
    *(_QWORD*)(a1 + 360) = 0;
    *(_DWORD*)a1 = v17;
    *(_QWORD*)(a1 + 4) = *(_QWORD*)((char*)&v38 + 4);
    *(_DWORD*)(a1 + 12) = HIDWORD(v38);
    while (1) {
      v19 = (unsigned __int8*)v35 + v18;
      v20 = a1 + v18;
      if (*((_BYTE*)v35 + v18) == 0) {
        v13 = v33;
        v15 = 0;
        v27 = 0;
        *(_BYTE*)(v20 + 16) = 0;
        if (v13 != 0) {
          goto LABEL_35;
        }
        goto LABEL_36;
      }
      v21 = v19[1];
      *(_BYTE*)(v20 + 16) = *((_BYTE*)v35 + v18);
      if (v21 == 0) {
        v28 = a1 + v18;
        v13 = v33;
        v15 = 0;
        v27 = 0;
        *(_BYTE*)(v28 + 17) = 0;
        if (v13 != 0) {
          goto LABEL_35;
        }
        goto LABEL_36;
      }
      *(_BYTE*)(v20 + 17) = v21;
      v22 = a1 + v18;
      if (v19[2] == 0) {
        v13 = v33;
        v15 = 0;
        v27 = 0;
        *(_BYTE*)(v22 + 18) = 0;
        if (v13 != 0) {
          goto LABEL_35;
        }
        goto LABEL_36;
      }
      v23 = v19[3];
      *(_BYTE*)(v22 + 18) = v19[2];
      if (v23 == 0) {
        v29 = a1 + v18;
        v13 = v33;
        v15 = 0;
        v27 = 0;
        *(_BYTE*)(v29 + 19) = 0;
        if (v13 == 0) {
          goto LABEL_36;
        }
        goto LABEL_35;
      }
      v24 = v19[4];
      v25 = a1 + v18;
      *(_BYTE*)(v22 + 19) = v23;
      if (v24 == 0) {
        break;
      }
      v18 += 5;
      *(_BYTE*)(v25 + 20) = v24;
      if ((_DWORD)v18 == 255) {
        v26 = a1 + v18;
        v13 = v33;
        v15 = 0;
        v27 = 0;
        *(_BYTE*)(v26 + 16) = 0;
        if (v13 != 0) {
          goto LABEL_35;
        }
        goto LABEL_36;
      }
    }
    v13 = v33;
    v15 = 0;
    v27 = 0;
    *(_BYTE*)(v25 + 20) = 0;
    if (v13 != 0) {
      goto LABEL_35;
    }
  }
LABEL_36:
  if (v37 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v37 + 8LL))(v37);
  }
  return v27;
}

__int64 nn_audio_GetDspStatistics(__int64 a1)
{
  __int64 v2;
  int v4;

  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f09e78,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&SdkData_f09e78) != 0) {
    nn_audio_CreateAudioSnoopManagerByHipc_plt((void*)(&SdkData_f09e70));
    fw_rtld_RegisterCrtDestructor();
    __cxa_guard_release_plt(&SdkData_f09e78);
  }
  v2 = SdkData_f09e70;
  if (SdkData_f09e70 != 0) {
    (**(void (***)(__int64))SdkData_f09e70)(SdkData_f09e70);
  }
  v4 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v2 + 32LL))(v2, a1);
  if (v4 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v4);
  }
  (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  return 0;
}

__int64 nn_audio_SetDspStatisticsParameter(__int64 a1)
{
  __int64 v2;
  int v4;

  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f09e78,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&SdkData_f09e78) != 0) {
    nn_audio_CreateAudioSnoopManagerByHipc_plt((void*)(&SdkData_f09e70));
    fw_rtld_RegisterCrtDestructor();
    __cxa_guard_release_plt(&SdkData_f09e78);
  }
  v2 = SdkData_f09e70;
  if (SdkData_f09e70 != 0) {
    (**(void (***)(__int64))SdkData_f09e70)(SdkData_f09e70);
  }
  v4 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v2 + 48LL))(v2, a1);
  if (v4 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v4);
  }
  (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  return 0;
}

__int64 nn_audio_GetDspStatisticsParameter(__int64 a1)
{
  __int64 v2;
  int v4;

  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f09e78,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&SdkData_f09e78) != 0) {
    nn_audio_CreateAudioSnoopManagerByHipc_plt((void*)(&SdkData_f09e70));
    fw_rtld_RegisterCrtDestructor();
    __cxa_guard_release_plt(&SdkData_f09e78);
  }
  v2 = SdkData_f09e70;
  if (SdkData_f09e70 != 0) {
    (**(void (***)(__int64))SdkData_f09e70)(SdkData_f09e70);
  }
  v4 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v2 + 56LL))(v2, a1);
  if (v4 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v4);
  }
  (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  return 0;
}

__int64 nn_audio_GetAppletStateSummaries(__int64 a1, int a2)
{
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  unsigned int v6;
  _QWORD v7[2];

  v7[0] = a1;
  v7[1] = 3232LL * a2;
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f09e78,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&SdkData_f09e78) != 0) {
    nn_audio_CreateAudioSnoopManagerByHipc_plt((void*)(&SdkData_f09e70));
    fw_rtld_RegisterCrtDestructor();
    __cxa_guard_release_plt(&SdkData_f09e78);
  }
  v2 = SdkData_f09e70;
  if (SdkData_f09e70 != 0) {
    (**(void (***)(__int64))SdkData_f09e70)(SdkData_f09e70);
  }
  v3 = *(_QWORD*)v2;
  v6 = 0;
  if ((*(unsigned int (**)(__int64, unsigned int*, _QWORD*))(v3 + 40))(
          v2, &v6, v7) != 0) {
    v4 = 0;
  }
  else {
    v4 = v6;
  }
  (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  return v4;
}

__int64 nn_audio_1ee110(__int64 a1, _QWORD* a2, __int64* a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int* v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  struct {
    __int64 v17;
    __int64 v18;
    __int64 v19;
    __int64 v20;
    __int64 v21;
  } v17_;
  int v22;
  _QWORD v23[2];
  struct {
    __int64* v24;
    unsigned int* v25;
  } v24_;

  v5 = a3[1];
  v6 = a1 + 8;
  v7 = *a3;
  v8 = *(unsigned int*)(v6 + 4);
  v9 = v5;
  v10 = v7;
  v12 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v6);
  LODWORD(v17_.v20) = 851968;
  v17_.v17 = 0x10000000000001LL;
  v17_.v18 = 8;
  v17_.v19 = 0x500000200000000LL;
  v24_.v24 = &v17_.v17;
  v24_.v25 = v12;
  *(_QWORD*)v12 = 0x800100006LL;
  v23[0] = v10;
  v23[1] = v9;
  v22 = 5;
  v13 = nn_sf_hipc_detail_SetBuffers(&v24_.v24, 1, (__int64)v23, (__int64)&v22,
                                     0, 32);
  if ((_DWORD)v13 != 0 ||
      (v14 = ((unsigned __int64)&v24_
                  .v25[*((unsigned __int8*)v24_.v24 + 23) + 3] +
              3) &
             0xFFFFFFFFFFFFFFF0LL,
       *(_QWORD*)v14 = 0x149434653LL, *(_QWORD*)(v14 + 8) = 300,
       *(_DWORD*)(v14 + 12) = nn_sf_cmif_GetInlineContext_plt(v13),
       LODWORD(v13) = nn_sf_hipc_SendSyncRequest_plt(v8, v12, 256),
       (_DWORD)v13 != 0)) {
    LODWORD(v15) = v13;
  }
  else {
    v17_.v20 = 0;
    v17_.v21 = 0;
    v17_.v18 = 0;
    v17_.v19 = 0;
    v17_.v17 = 0;
    SdkRoutine_b8c00((__int64)&v17_.v17, v12);
    if (*(_DWORD*)((v17_.v17 + 4LL * BYTE1(v17_.v21) + 15) &
                   0xFFFFFFFFFFFFFFF0LL) == 1329808979) {
      v15 = *(__int64*)((char*)((__int64*)0x4LL) +
                        ((v17_.v17 + 4LL * BYTE1(v17_.v21) + 15) &
                         0xFFFFFFFFFFFFFFF0LL) +
                        4);
      if ((_DWORD)v15 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v15);
      }
      else {
        *a2 = *(__int64*)((char*)((__int64*)0xCLL) +
                          ((v17_.v17 + 4LL * BYTE1(v17_.v21) + 15) &
                           0xFFFFFFFFFFFFFFF0LL) +
                          4);
      }
    }
    else {
      LODWORD(v15) = 108554;
    }
  }
  return (unsigned int)v15;
}

__int64 nn_audio_1ee2e0(_DWORD* a1)
{
  int v2;

  nn_os_SdkMutexType_Lock_plt(a1 + 2);
  v2 = a1[3] - 1;
  a1[3] = v2;
  if (v2 == 0) {
    nn_lmem_DestroyUnitHeap_plt(*(_QWORD*)(*(_QWORD*)a1 + 152LL));
    *(_QWORD*)a1 = 0;
  }
  return nn_os_SdkMutexType_Unlock_plt(a1 + 2);
}

__int64 nn_audio_1f12e0() { return fw_rtld_RegisterCrtDestructor(); }

__int64 nn_audio_detail_InitializeFftWorkBufferCommon(__int64 result)
{
  int v1;
  unsigned __int64 v2;
  char v3;
  __int64 v4;
  int v5;
  unsigned int* v6;
  int v7;
  int v8;
  unsigned __int8* v9;
  int v10;
  int v11;
  unsigned __int64 v12;
  int v13;
  unsigned int v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  _BOOL4 v17;
  _BOOL4 v18;
  bool v19;
  char v20;
  unsigned __int64 v21;
  bool v22;
  unsigned __int8* v23;
  unsigned __int8* v24;
  unsigned __int8 v25;
  __int64 v26;
  char* v27;
  unsigned __int64 v28;
  __int64 v29;
  _DWORD* v30;
  int v31;
  int v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  char* v43;
  char* v44;
  __int64 v45;
  char* v46;
  char* v47;
  int* v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  char* v53;
  char* v54;
  int* v55;
  int* v56;
  __int64 v57;
  __int64 v58;
  int* v59;
  int* v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  char* v69;
  int* v70;
  unsigned __int64 v71;
  int v72;
  __int64 v73;
  double v74;
  char* v75;
  _DWORD* v76;
  unsigned __int64 v77;
  _DWORD* v78;
  double v79;
  void* v80;
  double v81;
  void* v82;
  double v83;
  void* v84;
  double v85;
  double v86;
  unsigned __int64 v87;
  unsigned __int64 v88;
  _WORD* v89;
  __int64 v90;
  unsigned __int64 i;
  double v92;
  void* v93;
  double v94;
  void* v95;
  double v96;
  void* v97;
  double v98;
  _WORD* v99;
  double v100;
  char* v101;
  _QWORD* v102;
  char* v103;
  double v104;
  void* v105;
  __int64 v106;
  void* v107;
  __int64 v108;
  void* v109;
  __int64 v110;
  void* v111;
  __int64 v112;
  double v113;
  void* v114;
  __int64 v115;
  void* v116;
  __int64 v117;
  void* v118;
  __int64 v119;
  __int64 v120;
  double v121;
  void* v122;
  char* v123;
  __int64 v124;
  void* v125;
  char* v126;
  __int64 v127;
  void* v128;
  __int64 v129;
  __int64 v130;
  char* v131;
  _DWORD* v132;
  char* v133;
  double v134;
  void* v135;
  double v136;
  void* v137;
  double v138;
  void* v139;
  double v140;
  void* v141;
  double v142;
  double v143;
  void* v144;
  double v145;
  void* v146;
  double v147;
  void* v148;
  double v149;
  double v150;
  double v151;
  void* v152;
  double v153;
  char* v154;
  void* v155;
  double v156;
  _DWORD* v157;
  void* v158;
  double v159;
  double v160;
  unsigned int* v161;
  __int64 v162;
  unsigned int* v163;
  char* v164;
  unsigned __int64 v165;
  unsigned int* v166;
  __int64 v167;
  unsigned int* v168;
  unsigned __int64 v169;
  void* v170;
  double v171;
  void* v172;
  double v173;
  double v174;
  double v175;
  void* v176;
  double v177;
  void* v178;
  __int64 v179;
  void* v180;
  __int64 v181;
  __int64 v182;
  float v183;
  void* v184;
  double v185;
  void* v186;
  double v187;
  double v188;
  void* v189;
  double v190;
  void* v191;
  double v192;
  double v193;
  unsigned __int64 v194;
  unsigned __int64 v195;
  int v196;
  unsigned int* v197;
  int v198;
  __int64 v199;
  char* v200;
  unsigned __int64 v201;
  __int64 v202;
  unsigned __int8* v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  char* v207;
  unsigned __int64 v208;
  __int64 v209;
  unsigned __int64 v210;

  v100 = COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
  v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
  v108 = COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
  v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
  v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
  v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
  v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
  v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
  v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
  v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
  v130 = COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
  v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
  v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
  v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
  v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
  v145 = COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
  v147 = COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
  v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
  v150 = COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
  v153 = COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
  v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
  v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
  v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
  v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
  v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
  v174 = COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
  v177 = COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
  v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
  v181 = COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
  v182 = COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
  v185 = COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
  v187 = COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
  v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
  v190 = COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
  v192 = COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
  v193 = COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
  v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
  v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
  v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
  v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
  v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
  v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
  v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
  v1 = *(_DWORD*)(result + 36);
  v2 = *(int*)(result + 32);
  v3 = 1;
  v194 = v2 >> 1;
  v195 = v2;
  v4 = *(_QWORD*)(result + 8) + *(_QWORD*)result;
  v5 = *(_DWORD*)(result + 16);
  v196 = v1;
  v6 = (unsigned int*)((*(_QWORD*)result + 7LL) & 0xFFFFFFFFFFFFFFF8LL);
  if (v1 != 0) {
    v7 = (v2 >> 1) + 1;
  }
  else {
    v7 = v2;
  }
  if (v1 == 0) {
    v3 = 2;
  }
  *(_QWORD*)result = v6;
  *(_QWORD*)(result + 8) = v4 - (_QWORD)v6;
  v8 = *(_DWORD*)(result + 24);
  *((_BYTE*)v6 + 32) = 0;
  v9 = (unsigned __int8*)(v6 + 8);
  v198 = v5;
  if (v1 != 0) {
    v10 = v2 >> 1;
  }
  else {
    v10 = v2;
  }
  v11 = 4 * v10;
  if (v1 == 1) {
    v12 = v2 >> 1;
  }
  else {
    v12 = v2;
  }
  v13 = v11 + 64;
  v14 = v13 + 2 * v8 * v7;
  *(_QWORD*)v6 = 0x4000000020LL;
  v6[2] = v13;
  v6[3] = v14;
  v6[4] = v14 + (v8 << v3) * v2;
  if (v12 >= 2) {
    v15 = 0;
    v16 = v12;
    do {
      v17 = v16 != 4;
      v18 = (v16 & 0x5555555555555550LL) == 0;
      v19 = !v17 || !v18;
      if (v17 && v18) {
        v20 = 2;
      }
      else {
        v20 = 4;
      }
      *++v9 = v20;
      if (v19) {
        v21 = 4;
      }
      else {
        v21 = 2;
      }
      v16 >>= __clz(__rbit64(v21));
      v22 = v16 < 2 || v15++ >= 0x1D;
    } while (!v22);
  }
  v9[1] = 0;
  v23 = (unsigned __int8*)v6 + *v6 + 1;
  if (v23 < v9) {
    v24 = v9 - 1;
    do {
      v25 = *v23;
      *v23++ = v24[1];
      v24[1] = v25;
      v22 = v23 >= v24--;
    } while (!v22);
  }
  v26 = v6[1];
  v27 = (char*)v6 + v26;
  if (v12 != 0) {
    v28 = v12 & 7;
    if (v12 >= 8) {
      v29 = 0;
      v30 = (unsigned int*)((char*)v6 + v26 + 16);
      do {
        *(v30 - 4) = v29;
        *(v30 - 3) = v29 + 1;
        *(v30 - 2) = v29 + 2;
        *(v30 - 1) = v29 + 3;
        *v30 = v29 + 4;
        v30[1] = v29 + 5;
        v31 = v29 + 6;
        v32 = v29 + 7;
        v29 += 8;
        v30[2] = v31;
        v30[3] = v32;
        v30 += 8;
      } while (v29 != (v12 & 0xFFFFFFFFFFFFFFF8LL));
    }
    else {
      v29 = 0;
    }
    if ((v12 & 7) != 0) {
      do {
        *(_DWORD*)&v27[4 * v29] = v29;
        ++v29;
        --v28;
      } while (v28 != 0);
    }
  }
  v197 = v6;
  if (v12 > *v9) {
    v201 = v12;
    v33 = v12;
    v199 = (__int64)v6 + v26 + 16;
    v200 = (char*)v6 + v26;
    do {
      v34 = 0;
      v207 = v27;
      v203 = v9;
      v208 = v33;
      v202 = 4 * v33;
      v206 = v199;
      do {
        v35 = *v9;
        v204 = v34;
        v210 = (unsigned int)v35 * (unsigned __int64)(unsigned int)v35;
        if (v210 <= v33 && v35 != 1) {
          v36 = 1;
          v205 = 4 * v35;
          while (v36 == 0) {
          LABEL_44:
            v36 *= v35;
            v210 *= v35;
            if (v210 > v33) {
              goto LABEL_40;
            }
          }
          v37 = 4 * v36;
          v38 = 0;
          v39 = v205 * v36;
          v209 = 4 * v210;
          v40 = v206 + 4 * v36;
          v41 = v206 + v205 * v36;
          v42 = (4 * v35 + 4) * v36;
          v43 = &v207[v205 * v36];
          v44 = &v207[4 * v36];
        LABEL_48:
          v45 = 0;
          v46 = v44;
          v47 = v43;
          v48 = (int*)v40;
          result = v41;
          v49 = v35 - 1;
          while (1) {
            v50 = v49 - 1;
            ++v45;
            v51 = v49 <= 1 ? 1LL : v49;
            if (v45 != v35) {
              break;
            }
          LABEL_49:
            result += v42;
            v48 = (int*)((char*)v48 + v42);
            v47 += v42;
            v46 += v42;
            v49 = v50;
            if (v45 == v35 - 1) {
              v38 += v210;
              v33 = v208;
              v41 += v209;
              v40 += v209;
              v43 += v209;
              v44 += v209;
              if (v38 >= v208) {
                goto LABEL_44;
              }
              goto LABEL_48;
            }
          }
          v52 = 0;
          v53 = v46;
          v54 = v47;
          v55 = v48;
          v56 = (int*)result;
          while (2) {
            if (v36 >= 8) {
              v58 = 0;
              v59 = v55;
              v60 = v56;
              do {
                v61 = *(v59 - 4);
                v58 -= 8;
                *(v59 - 4) = *(v60 - 4);
                *(v60 - 4) = v61;
                v62 = *(v59 - 3);
                *(v59 - 3) = *(v60 - 3);
                *(v60 - 3) = v62;
                v63 = *(v59 - 2);
                *(v59 - 2) = *(v60 - 2);
                *(v60 - 2) = v63;
                v64 = *(v59 - 1);
                *(v59 - 1) = *(v60 - 1);
                *(v60 - 1) = v64;
                v65 = *v59;
                *v59 = *v60;
                *v60 = v65;
                v66 = v59[1];
                v59[1] = v60[1];
                v60[1] = v66;
                v67 = v59[2];
                v59[2] = v60[2];
                v60[2] = v67;
                v68 = v59[3];
                v59[3] = v60[3];
                v60[3] = v68;
                v60 += 8;
                v59 += 8;
              } while (-(__int64)(v36 & 0xFFFFFFFFFFFFFFF8LL) != v58);
              v57 = -v58;
              if ((v36 & 7) != 0) {
                goto LABEL_62;
              }
            }
            else {
              v57 = 0;
              if ((v36 & 7) == 0) {
                goto LABEL_55;
              }
            LABEL_62:
              v69 = &v54[4 * v57];
              v70 = (int*)&v53[4 * v57];
              v71 = v36 & 7;
              do {
                v72 = *v70;
                --v71;
                *v70++ = *(_DWORD*)v69;
                *(_DWORD*)v69 = v72;
                v69 += 4;
              } while (v71 != 0);
            }
          LABEL_55:
            ++v52;
            v56 = (int*)((char*)v56 + v39);
            v55 = (int*)((char*)v55 + v37);
            v54 += v39;
            v53 += v37;
            if (v52 == v51) {
              goto LABEL_49;
            }
            continue;
          }
        }
      LABEL_40:
        v12 = v201;
        v9 = v203;
        v34 = v204 + v33;
        v206 += v202;
        v207 += v202;
      } while (v204 + v33 < v201);
      v27 = v200;
      v33 /= *v203;
      v9 = v203 - 1;
    } while (v33 > *(v203 - 1));
  }
  if (v12 != 0) {
    if ((unsigned int)(v198 - 1) > 3) {
      nn_detail_UnexpectedDefaultImpl_plt_857150(result),
          v100 =
              COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
          v112 =
              COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
          v130 =
              COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
          v138 =
              COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
          v140 =
              COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
          v145 =
              COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
          v147 =
              COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
          v150 =
              COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
          v160 =
              COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
          v171 =
              COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
          v174 =
              COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
          v177 =
              COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
          v182 =
              COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
          v185 =
              COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
          v188 =
              COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
          v192 =
              COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
    }
    v73 = v197[3];
    v74 = (double)v12;
    v75 = (char*)v197 + v73;
    if (v198 == 1) {
      if (v12 == 1) {
        v87 = 0;
      }
      else {
        v87 = 0;
        v101 = (char*)v197 + v73;
        v102 = v101 + 24;
        v103 = &v101[16 * v12 + 16];
        do {
          v104 = (double)v87;
          v105 = (void*)cos_plt((void*)result, (double)v87 *
                                                   -0x1.0000000000000p+1 *
                                                   0x1.921fb54442d18p+1 / v74),
          v100 =
              COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
          v112 =
              COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
          v130 =
              COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
          v138 =
              COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
          v140 =
              COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
          v145 =
              COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
          v147 =
              COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
          v150 =
              COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
          v160 =
              COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
          v171 =
              COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
          v174 =
              COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
          v177 =
              COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
          v182 =
              COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
          v185 =
              COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
          v188 =
              COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
          v192 =
              COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
          *(v102 - 3) = v106;
          v107 = (void*)sin_plt(v105, (double)v87 * -0x1.0000000000000p+1 *
                                          0x1.921fb54442d18p+1 / v74),
          v100 =
              COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
          v112 =
              COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
          v130 =
              COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
          v138 =
              COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
          v140 =
              COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
          v145 =
              COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
          v147 =
              COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
          v150 =
              COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
          v160 =
              COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
          v171 =
              COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
          v174 =
              COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
          v177 =
              COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
          v182 =
              COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
          v185 =
              COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
          v188 =
              COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
          v192 =
              COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
          *(v102 - 2) = v108;
          v109 =
              (void*)cos_plt(v107, (v104 + v104) * 0x1.921fb54442d18p+1 / v74),
          v100 =
              COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
          v112 =
              COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
          v130 =
              COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
          v138 =
              COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
          v140 =
              COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
          v145 =
              COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
          v147 =
              COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
          v150 =
              COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
          v160 =
              COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
          v171 =
              COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
          v174 =
              COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
          v177 =
              COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
          v182 =
              COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
          v185 =
              COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
          v188 =
              COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
          v192 =
              COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
          *((_QWORD*)v103 - 2) = v110;
          v111 =
              (void*)sin_plt(v109, (v104 + v104) * 0x1.921fb54442d18p+1 / v74),
          v100 =
              COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
          v112 =
              COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
          v130 =
              COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
          v138 =
              COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
          v140 =
              COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
          v145 =
              COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
          v147 =
              COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
          v150 =
              COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
          v160 =
              COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
          v171 =
              COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
          v174 =
              COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
          v177 =
              COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
          v182 =
              COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
          v185 =
              COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
          v188 =
              COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
          v192 =
              COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
          *((_QWORD*)v103 - 1) = v112;
          v113 = (double)(v87 + 1);
          v114 = (void*)cos_plt(v111, v113 * -0x1.0000000000000p+1 *
                                          0x1.921fb54442d18p+1 / v74),
          v100 =
              COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
          v112 =
              COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
          v130 =
              COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
          v138 =
              COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
          v140 =
              COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
          v145 =
              COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
          v147 =
              COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
          v150 =
              COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
          v160 =
              COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
          v171 =
              COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
          v174 =
              COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
          v177 =
              COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
          v182 =
              COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
          v185 =
              COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
          v188 =
              COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
          v192 =
              COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
          *(v102 - 1) = v115;
          v116 = (void*)sin_plt(v114, v113 * -0x1.0000000000000p+1 *
                                          0x1.921fb54442d18p+1 / v74),
          v100 =
              COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
          v112 =
              COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
          v130 =
              COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
          v138 =
              COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
          v140 =
              COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
          v145 =
              COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
          v147 =
              COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
          v150 =
              COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
          v160 =
              COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
          v171 =
              COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
          v174 =
              COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
          v177 =
              COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
          v182 =
              COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
          v185 =
              COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
          v188 =
              COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
          v192 =
              COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
          *v102 = v117;
          v102 += 4;
          v118 =
              (void*)cos_plt(v116, (v113 + v113) * 0x1.921fb54442d18p+1 / v74),
          v100 =
              COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
          v112 =
              COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
          v130 =
              COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
          v138 =
              COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
          v140 =
              COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
          v145 =
              COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
          v147 =
              COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
          v150 =
              COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
          v160 =
              COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
          v171 =
              COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
          v174 =
              COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
          v177 =
              COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
          v182 =
              COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
          v185 =
              COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
          v188 =
              COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
          v192 =
              COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
          *(_QWORD*)v103 = v119;
          result = sin_plt(v118, (v113 + v113) * 0x1.921fb54442d18p+1 / v74),
          v100 =
              COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
          v112 =
              COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
          v130 =
              COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
          v138 =
              COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
          v140 =
              COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
          v145 =
              COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
          v147 =
              COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
          v150 =
              COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
          v160 =
              COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
          v171 =
              COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
          v174 =
              COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
          v177 =
              COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
          v182 =
              COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
          v185 =
              COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
          v188 =
              COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
          v192 =
              COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
          *((_QWORD*)v103 + 1) = v120;
          v87 += 2LL;
          v103 += 32;
        } while (v87 != (v12 & 0xFFFFFFFFFFFFFFFELL));
      }
      if ((v12 & 1) != 0) {
        v121 = (double)v87;
        v122 =
            (void*)cos_plt((void*)result, (double)v87 * -0x1.0000000000000p+1 *
                                              0x1.921fb54442d18p+1 / v74),
        v100 = COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
        v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
        v108 = COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
        v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
        v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
        v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
        v130 = COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
        v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
        v145 = COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
        v147 = COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
        v150 = COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
        v153 = COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
        v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
        v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
        v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
        v174 = COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
        v177 = COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
        v181 = COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
        v182 = COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
        v185 = COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
        v187 = COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
        v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
        v190 = COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
        v192 = COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
        v193 = COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
        v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
        v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
        v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
        v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
        v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
        v123 = &v75[16 * v87];
        *(_QWORD*)v123 = v124;
        v125 = (void*)sin_plt(v122, (double)v87 * -0x1.0000000000000p+1 *
                                        0x1.921fb54442d18p+1 / v74),
        v100 = COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
        v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
        v108 = COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
        v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
        v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
        v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
        v130 = COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
        v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
        v145 = COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
        v147 = COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
        v150 = COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
        v153 = COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
        v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
        v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
        v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
        v174 = COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
        v177 = COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
        v181 = COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
        v182 = COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
        v185 = COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
        v187 = COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
        v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
        v190 = COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
        v192 = COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
        v193 = COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
        v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
        v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
        v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
        v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
        v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
        v126 = &v75[16 * v87 + 8];
        *(_QWORD*)v126 = v127;
        v128 = (void*)cos_plt(v125, (v121 + v121) * 0x1.921fb54442d18p+1 / v74),
        v100 = COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
        v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
        v108 = COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
        v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
        v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
        v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
        v130 = COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
        v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
        v145 = COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
        v147 = COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
        v150 = COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
        v153 = COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
        v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
        v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
        v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
        v174 = COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
        v177 = COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
        v181 = COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
        v182 = COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
        v185 = COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
        v187 = COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
        v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
        v190 = COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
        v192 = COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
        v193 = COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
        v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
        v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
        v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
        v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
        v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
        *(_QWORD*)&v123[16 * v12] = v129;
        result = sin_plt(v128, (v121 + v121) * 0x1.921fb54442d18p+1 / v74),
        v100 = COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
        v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
        v108 = COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
        v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
        v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
        v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
        v130 = COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
        v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
        v145 = COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
        v147 = COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
        v150 = COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
        v153 = COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
        v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
        v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
        v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
        v174 = COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
        v177 = COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
        v181 = COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
        v182 = COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
        v185 = COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
        v187 = COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
        v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
        v190 = COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
        v192 = COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
        v193 = COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
        v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
        v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
        v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
        v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
        v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
        *(_QWORD*)&v126[16 * v12] = v130;
      }
    }
    else {
      v76 = v75 + 4;
      if (v198 == 2) {
        if (v12 == 1) {
          v88 = 0;
        }
        else {
          v88 = 0;
          v131 = (char*)v197 + v73;
          v132 = v131 + 12;
          v133 = &v131[8 * v12 + 8];
          do {
            v134 = (double)v88;
            v135 = (void*)cos_plt((void*)result,
                                  (double)v88 * -0x1.0000000000000p+1 *
                                      0x1.921fb54442d18p+1 / v74),
            v100 = COERCE_AS(__typeof__(v100),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v106 = COERCE_AS(__typeof__(v106),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v108 = COERCE_AS(__typeof__(v108),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v110 = COERCE_AS(__typeof__(v110),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v112 = COERCE_AS(__typeof__(v112),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v115 = COERCE_AS(__typeof__(v115),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v117 = COERCE_AS(__typeof__(v117),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v119 = COERCE_AS(__typeof__(v119),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v124 = COERCE_AS(__typeof__(v124),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v127 = COERCE_AS(__typeof__(v127),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v129 = COERCE_AS(__typeof__(v129),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v130 = COERCE_AS(__typeof__(v130),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v136 = COERCE_AS(__typeof__(v136),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v138 = COERCE_AS(__typeof__(v138),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v140 = COERCE_AS(__typeof__(v140),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v142 = COERCE_AS(__typeof__(v142),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v145 = COERCE_AS(__typeof__(v145),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v147 = COERCE_AS(__typeof__(v147),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v150 = COERCE_AS(__typeof__(v150),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v153 = COERCE_AS(__typeof__(v153),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v156 = COERCE_AS(__typeof__(v156),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v159 = COERCE_AS(__typeof__(v159),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v160 = COERCE_AS(__typeof__(v160),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v171 = COERCE_AS(__typeof__(v171),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v173 = COERCE_AS(__typeof__(v173),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v174 = COERCE_AS(__typeof__(v174),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v177 = COERCE_AS(__typeof__(v177),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v179 = COERCE_AS(__typeof__(v179),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v181 = COERCE_AS(__typeof__(v181),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v182 = COERCE_AS(__typeof__(v182),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v185 = COERCE_AS(__typeof__(v185),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v187 = COERCE_AS(__typeof__(v187),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v188 = COERCE_AS(__typeof__(v188),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v190 = COERCE_AS(__typeof__(v190),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v192 = COERCE_AS(__typeof__(v192),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v193 = COERCE_AS(__typeof__(v193),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v81 =
                COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
            v83 =
                COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
            v85 =
                COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
            v94 =
                COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
            v96 =
                COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
            v98 =
                COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
            *(float*)&v136 = v136;
            *(v132 - 3) = LODWORD(v136);
            v137 = (void*)sin_plt(v135, (double)v88 * -0x1.0000000000000p+1 *
                                            0x1.921fb54442d18p+1 / v74),
            v100 = COERCE_AS(__typeof__(v100),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v106 = COERCE_AS(__typeof__(v106),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v108 = COERCE_AS(__typeof__(v108),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v110 = COERCE_AS(__typeof__(v110),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v112 = COERCE_AS(__typeof__(v112),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v115 = COERCE_AS(__typeof__(v115),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v117 = COERCE_AS(__typeof__(v117),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v119 = COERCE_AS(__typeof__(v119),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v124 = COERCE_AS(__typeof__(v124),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v127 = COERCE_AS(__typeof__(v127),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v129 = COERCE_AS(__typeof__(v129),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v130 = COERCE_AS(__typeof__(v130),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v136 = COERCE_AS(__typeof__(v136),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v138 = COERCE_AS(__typeof__(v138),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v140 = COERCE_AS(__typeof__(v140),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v142 = COERCE_AS(__typeof__(v142),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v145 = COERCE_AS(__typeof__(v145),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v147 = COERCE_AS(__typeof__(v147),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v150 = COERCE_AS(__typeof__(v150),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v153 = COERCE_AS(__typeof__(v153),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v156 = COERCE_AS(__typeof__(v156),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v159 = COERCE_AS(__typeof__(v159),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v160 = COERCE_AS(__typeof__(v160),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v171 = COERCE_AS(__typeof__(v171),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v173 = COERCE_AS(__typeof__(v173),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v174 = COERCE_AS(__typeof__(v174),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v177 = COERCE_AS(__typeof__(v177),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v179 = COERCE_AS(__typeof__(v179),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v181 = COERCE_AS(__typeof__(v181),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v182 = COERCE_AS(__typeof__(v182),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v185 = COERCE_AS(__typeof__(v185),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v187 = COERCE_AS(__typeof__(v187),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v188 = COERCE_AS(__typeof__(v188),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v190 = COERCE_AS(__typeof__(v190),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v192 = COERCE_AS(__typeof__(v192),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v193 = COERCE_AS(__typeof__(v193),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v81 =
                COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
            v83 =
                COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
            v85 =
                COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
            v94 =
                COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
            v96 =
                COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
            v98 =
                COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
            *(float*)&v138 = v138;
            *(v132 - 2) = LODWORD(v138);
            v139 = (void*)cos_plt(v137,
                                  (v134 + v134) * 0x1.921fb54442d18p+1 / v74),
            v100 = COERCE_AS(__typeof__(v100),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v106 = COERCE_AS(__typeof__(v106),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v108 = COERCE_AS(__typeof__(v108),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v110 = COERCE_AS(__typeof__(v110),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v112 = COERCE_AS(__typeof__(v112),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v115 = COERCE_AS(__typeof__(v115),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v117 = COERCE_AS(__typeof__(v117),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v119 = COERCE_AS(__typeof__(v119),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v124 = COERCE_AS(__typeof__(v124),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v127 = COERCE_AS(__typeof__(v127),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v129 = COERCE_AS(__typeof__(v129),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v130 = COERCE_AS(__typeof__(v130),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v136 = COERCE_AS(__typeof__(v136),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v138 = COERCE_AS(__typeof__(v138),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v140 = COERCE_AS(__typeof__(v140),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v142 = COERCE_AS(__typeof__(v142),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v145 = COERCE_AS(__typeof__(v145),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v147 = COERCE_AS(__typeof__(v147),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v150 = COERCE_AS(__typeof__(v150),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v153 = COERCE_AS(__typeof__(v153),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v156 = COERCE_AS(__typeof__(v156),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v159 = COERCE_AS(__typeof__(v159),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v160 = COERCE_AS(__typeof__(v160),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v171 = COERCE_AS(__typeof__(v171),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v173 = COERCE_AS(__typeof__(v173),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v174 = COERCE_AS(__typeof__(v174),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v177 = COERCE_AS(__typeof__(v177),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v179 = COERCE_AS(__typeof__(v179),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v181 = COERCE_AS(__typeof__(v181),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v182 = COERCE_AS(__typeof__(v182),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v185 = COERCE_AS(__typeof__(v185),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v187 = COERCE_AS(__typeof__(v187),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v188 = COERCE_AS(__typeof__(v188),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v190 = COERCE_AS(__typeof__(v190),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v192 = COERCE_AS(__typeof__(v192),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v193 = COERCE_AS(__typeof__(v193),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v81 =
                COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
            v83 =
                COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
            v85 =
                COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
            v94 =
                COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
            v96 =
                COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
            v98 =
                COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
            *(float*)&v140 = v140;
            *((_DWORD*)v133 - 2) = LODWORD(v140);
            v141 = (void*)sin_plt(v139,
                                  (v134 + v134) * 0x1.921fb54442d18p+1 / v74),
            v100 = COERCE_AS(__typeof__(v100),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v106 = COERCE_AS(__typeof__(v106),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v108 = COERCE_AS(__typeof__(v108),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v110 = COERCE_AS(__typeof__(v110),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v112 = COERCE_AS(__typeof__(v112),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v115 = COERCE_AS(__typeof__(v115),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v117 = COERCE_AS(__typeof__(v117),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v119 = COERCE_AS(__typeof__(v119),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v124 = COERCE_AS(__typeof__(v124),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v127 = COERCE_AS(__typeof__(v127),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v129 = COERCE_AS(__typeof__(v129),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v130 = COERCE_AS(__typeof__(v130),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v136 = COERCE_AS(__typeof__(v136),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v138 = COERCE_AS(__typeof__(v138),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v140 = COERCE_AS(__typeof__(v140),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v142 = COERCE_AS(__typeof__(v142),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v145 = COERCE_AS(__typeof__(v145),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v147 = COERCE_AS(__typeof__(v147),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v150 = COERCE_AS(__typeof__(v150),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v153 = COERCE_AS(__typeof__(v153),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v156 = COERCE_AS(__typeof__(v156),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v159 = COERCE_AS(__typeof__(v159),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v160 = COERCE_AS(__typeof__(v160),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v171 = COERCE_AS(__typeof__(v171),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v173 = COERCE_AS(__typeof__(v173),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v174 = COERCE_AS(__typeof__(v174),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v177 = COERCE_AS(__typeof__(v177),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v179 = COERCE_AS(__typeof__(v179),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v181 = COERCE_AS(__typeof__(v181),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v182 = COERCE_AS(__typeof__(v182),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v185 = COERCE_AS(__typeof__(v185),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v187 = COERCE_AS(__typeof__(v187),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v188 = COERCE_AS(__typeof__(v188),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v190 = COERCE_AS(__typeof__(v190),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v192 = COERCE_AS(__typeof__(v192),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v193 = COERCE_AS(__typeof__(v193),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v81 =
                COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
            v83 =
                COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
            v85 =
                COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
            v94 =
                COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
            v96 =
                COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
            v98 =
                COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
            *(float*)&v142 = v142;
            v143 = (double)(v88 + 1);
            *((_DWORD*)v133 - 1) = LODWORD(v142);
            v144 = (void*)cos_plt(v141, v143 * -0x1.0000000000000p+1 *
                                            0x1.921fb54442d18p+1 / v74),
            v100 = COERCE_AS(__typeof__(v100),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v106 = COERCE_AS(__typeof__(v106),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v108 = COERCE_AS(__typeof__(v108),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v110 = COERCE_AS(__typeof__(v110),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v112 = COERCE_AS(__typeof__(v112),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v115 = COERCE_AS(__typeof__(v115),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v117 = COERCE_AS(__typeof__(v117),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v119 = COERCE_AS(__typeof__(v119),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v124 = COERCE_AS(__typeof__(v124),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v127 = COERCE_AS(__typeof__(v127),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v129 = COERCE_AS(__typeof__(v129),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v130 = COERCE_AS(__typeof__(v130),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v136 = COERCE_AS(__typeof__(v136),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v138 = COERCE_AS(__typeof__(v138),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v140 = COERCE_AS(__typeof__(v140),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v142 = COERCE_AS(__typeof__(v142),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v145 = COERCE_AS(__typeof__(v145),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v147 = COERCE_AS(__typeof__(v147),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v150 = COERCE_AS(__typeof__(v150),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v153 = COERCE_AS(__typeof__(v153),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v156 = COERCE_AS(__typeof__(v156),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v159 = COERCE_AS(__typeof__(v159),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v160 = COERCE_AS(__typeof__(v160),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v171 = COERCE_AS(__typeof__(v171),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v173 = COERCE_AS(__typeof__(v173),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v174 = COERCE_AS(__typeof__(v174),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v177 = COERCE_AS(__typeof__(v177),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v179 = COERCE_AS(__typeof__(v179),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v181 = COERCE_AS(__typeof__(v181),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v182 = COERCE_AS(__typeof__(v182),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v185 = COERCE_AS(__typeof__(v185),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v187 = COERCE_AS(__typeof__(v187),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v188 = COERCE_AS(__typeof__(v188),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v190 = COERCE_AS(__typeof__(v190),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v192 = COERCE_AS(__typeof__(v192),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v193 = COERCE_AS(__typeof__(v193),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v81 =
                COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
            v83 =
                COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
            v85 =
                COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
            v94 =
                COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
            v96 =
                COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
            v98 =
                COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
            *(float*)&v145 = v145;
            *(v132 - 1) = LODWORD(v145);
            v146 = (void*)sin_plt(v144, v143 * -0x1.0000000000000p+1 *
                                            0x1.921fb54442d18p+1 / v74),
            v100 = COERCE_AS(__typeof__(v100),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v106 = COERCE_AS(__typeof__(v106),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v108 = COERCE_AS(__typeof__(v108),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v110 = COERCE_AS(__typeof__(v110),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v112 = COERCE_AS(__typeof__(v112),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v115 = COERCE_AS(__typeof__(v115),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v117 = COERCE_AS(__typeof__(v117),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v119 = COERCE_AS(__typeof__(v119),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v124 = COERCE_AS(__typeof__(v124),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v127 = COERCE_AS(__typeof__(v127),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v129 = COERCE_AS(__typeof__(v129),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v130 = COERCE_AS(__typeof__(v130),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v136 = COERCE_AS(__typeof__(v136),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v138 = COERCE_AS(__typeof__(v138),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v140 = COERCE_AS(__typeof__(v140),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v142 = COERCE_AS(__typeof__(v142),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v145 = COERCE_AS(__typeof__(v145),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v147 = COERCE_AS(__typeof__(v147),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v150 = COERCE_AS(__typeof__(v150),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v153 = COERCE_AS(__typeof__(v153),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v156 = COERCE_AS(__typeof__(v156),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v159 = COERCE_AS(__typeof__(v159),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v160 = COERCE_AS(__typeof__(v160),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v171 = COERCE_AS(__typeof__(v171),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v173 = COERCE_AS(__typeof__(v173),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v174 = COERCE_AS(__typeof__(v174),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v177 = COERCE_AS(__typeof__(v177),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v179 = COERCE_AS(__typeof__(v179),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v181 = COERCE_AS(__typeof__(v181),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v182 = COERCE_AS(__typeof__(v182),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v185 = COERCE_AS(__typeof__(v185),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v187 = COERCE_AS(__typeof__(v187),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v188 = COERCE_AS(__typeof__(v188),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v190 = COERCE_AS(__typeof__(v190),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v192 = COERCE_AS(__typeof__(v192),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v193 = COERCE_AS(__typeof__(v193),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v81 =
                COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
            v83 =
                COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
            v85 =
                COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
            v94 =
                COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
            v96 =
                COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
            v98 =
                COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
            *(float*)&v147 = v147;
            *v132 = LODWORD(v147);
            v132 += 4;
            v148 = (void*)cos_plt(v146,
                                  (v143 + v143) * 0x1.921fb54442d18p+1 / v74),
            v100 = COERCE_AS(__typeof__(v100),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v106 = COERCE_AS(__typeof__(v106),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v108 = COERCE_AS(__typeof__(v108),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v110 = COERCE_AS(__typeof__(v110),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v112 = COERCE_AS(__typeof__(v112),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v115 = COERCE_AS(__typeof__(v115),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v117 = COERCE_AS(__typeof__(v117),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v119 = COERCE_AS(__typeof__(v119),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v124 = COERCE_AS(__typeof__(v124),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v127 = COERCE_AS(__typeof__(v127),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v129 = COERCE_AS(__typeof__(v129),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v130 = COERCE_AS(__typeof__(v130),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v136 = COERCE_AS(__typeof__(v136),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v138 = COERCE_AS(__typeof__(v138),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v140 = COERCE_AS(__typeof__(v140),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v142 = COERCE_AS(__typeof__(v142),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v145 = COERCE_AS(__typeof__(v145),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v147 = COERCE_AS(__typeof__(v147),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v150 = COERCE_AS(__typeof__(v150),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v153 = COERCE_AS(__typeof__(v153),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v156 = COERCE_AS(__typeof__(v156),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v159 = COERCE_AS(__typeof__(v159),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v160 = COERCE_AS(__typeof__(v160),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v171 = COERCE_AS(__typeof__(v171),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v173 = COERCE_AS(__typeof__(v173),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v174 = COERCE_AS(__typeof__(v174),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v177 = COERCE_AS(__typeof__(v177),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v179 = COERCE_AS(__typeof__(v179),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v181 = COERCE_AS(__typeof__(v181),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v182 = COERCE_AS(__typeof__(v182),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v185 = COERCE_AS(__typeof__(v185),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v187 = COERCE_AS(__typeof__(v187),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v188 = COERCE_AS(__typeof__(v188),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v190 = COERCE_AS(__typeof__(v190),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v192 = COERCE_AS(__typeof__(v192),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v193 = COERCE_AS(__typeof__(v193),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v81 =
                COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
            v83 =
                COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
            v85 =
                COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
            v94 =
                COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
            v96 =
                COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
            v98 =
                COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
            *(float*)&v149 = v149;
            *(_DWORD*)v133 = LODWORD(v149);
            result = sin_plt(v148, (v143 + v143) * 0x1.921fb54442d18p+1 / v74),
            v100 = COERCE_AS(__typeof__(v100),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v106 = COERCE_AS(__typeof__(v106),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v108 = COERCE_AS(__typeof__(v108),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v110 = COERCE_AS(__typeof__(v110),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v112 = COERCE_AS(__typeof__(v112),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v115 = COERCE_AS(__typeof__(v115),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v117 = COERCE_AS(__typeof__(v117),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v119 = COERCE_AS(__typeof__(v119),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v124 = COERCE_AS(__typeof__(v124),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v127 = COERCE_AS(__typeof__(v127),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v129 = COERCE_AS(__typeof__(v129),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v130 = COERCE_AS(__typeof__(v130),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v136 = COERCE_AS(__typeof__(v136),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v138 = COERCE_AS(__typeof__(v138),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v140 = COERCE_AS(__typeof__(v140),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v142 = COERCE_AS(__typeof__(v142),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v145 = COERCE_AS(__typeof__(v145),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v147 = COERCE_AS(__typeof__(v147),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v150 = COERCE_AS(__typeof__(v150),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v153 = COERCE_AS(__typeof__(v153),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v156 = COERCE_AS(__typeof__(v156),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v159 = COERCE_AS(__typeof__(v159),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v160 = COERCE_AS(__typeof__(v160),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v171 = COERCE_AS(__typeof__(v171),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v173 = COERCE_AS(__typeof__(v173),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v174 = COERCE_AS(__typeof__(v174),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v177 = COERCE_AS(__typeof__(v177),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v179 = COERCE_AS(__typeof__(v179),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v181 = COERCE_AS(__typeof__(v181),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v182 = COERCE_AS(__typeof__(v182),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v185 = COERCE_AS(__typeof__(v185),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v187 = COERCE_AS(__typeof__(v187),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v188 = COERCE_AS(__typeof__(v188),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v190 = COERCE_AS(__typeof__(v190),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v192 = COERCE_AS(__typeof__(v192),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v193 = COERCE_AS(__typeof__(v193),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v81 =
                COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
            v83 =
                COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
            v85 =
                COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
            v94 =
                COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
            v96 =
                COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
            v98 =
                COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
            *(float*)&v150 = v150;
            v88 += 2LL;
            *((_DWORD*)v133 + 1) = LODWORD(v150);
            v133 += 16;
          } while (v88 != (v12 & 0xFFFFFFFFFFFFFFFELL));
        }
        if ((v12 & 1) != 0) {
          v151 = (double)v88;
          v152 = (void*)cos_plt((void*)result, (double)v88 *
                                                   -0x1.0000000000000p+1 *
                                                   0x1.921fb54442d18p+1 / v74),
          v100 =
              COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
          v112 =
              COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
          v130 =
              COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
          v138 =
              COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
          v140 =
              COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
          v145 =
              COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
          v147 =
              COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
          v150 =
              COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
          v160 =
              COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
          v171 =
              COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
          v174 =
              COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
          v177 =
              COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
          v182 =
              COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
          v185 =
              COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
          v188 =
              COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
          v192 =
              COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
          *(float*)&v153 = v153;
          v154 = &v75[8 * v88];
          *(_DWORD*)v154 = LODWORD(v153);
          v155 = (void*)sin_plt(v152, (double)v88 * -0x1.0000000000000p+1 *
                                          0x1.921fb54442d18p+1 / v74),
          v100 =
              COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
          v112 =
              COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
          v130 =
              COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
          v138 =
              COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
          v140 =
              COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
          v145 =
              COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
          v147 =
              COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
          v150 =
              COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
          v160 =
              COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
          v171 =
              COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
          v174 =
              COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
          v177 =
              COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
          v182 =
              COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
          v185 =
              COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
          v188 =
              COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
          v192 =
              COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
          *(float*)&v156 = v156;
          v157 = &v76[2 * v88];
          *v157 = LODWORD(v156);
          v158 =
              (void*)cos_plt(v155, (v151 + v151) * 0x1.921fb54442d18p+1 / v74),
          v100 =
              COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
          v112 =
              COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
          v130 =
              COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
          v138 =
              COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
          v140 =
              COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
          v145 =
              COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
          v147 =
              COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
          v150 =
              COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
          v160 =
              COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
          v171 =
              COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
          v174 =
              COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
          v177 =
              COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
          v182 =
              COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
          v185 =
              COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
          v188 =
              COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
          v192 =
              COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
          *(float*)&v159 = v159;
          *(_DWORD*)&v154[8 * v12] = LODWORD(v159);
          result = sin_plt(v158, (v151 + v151) * 0x1.921fb54442d18p+1 / v74),
          v100 =
              COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
          v112 =
              COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
          v130 =
              COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
          v138 =
              COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
          v140 =
              COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
          v145 =
              COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
          v147 =
              COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
          v150 =
              COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
          v160 =
              COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
          v171 =
              COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
          v174 =
              COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
          v177 =
              COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
          v182 =
              COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
          v185 =
              COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
          v188 =
              COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
          v192 =
              COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
          *(float*)&v160 = v160;
          v157[2 * v12] = LODWORD(v160);
        }
      }
      else if (v198 == 3) {
        v77 = 0;
        v78 = (unsigned int*)((char*)&v197[2 * v12 + 1] + v73);
        do {
          v79 = (double)v77;
          v80 = (void*)cos_plt((void*)result, (double)v77 *
                                                  -0x1.0000000000000p+1 *
                                                  0x1.921fb54442d18p+1 / v74),
          v100 =
              COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
          v112 =
              COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
          v130 =
              COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
          v138 =
              COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
          v140 =
              COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
          v145 =
              COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
          v147 =
              COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
          v150 =
              COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
          v160 =
              COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
          v171 =
              COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
          v174 =
              COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
          v177 =
              COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
          v182 =
              COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
          v185 =
              COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
          v188 =
              COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
          v192 =
              COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
          *(v76 - 1) = vcvtmd_s32_f64(v81 * 0x1.fffffffc00000p+30 +
                                      0x1.0000000000000p-1);
          v82 = (void*)sin_plt(v80, (double)v77 * -0x1.0000000000000p+1 *
                                        0x1.921fb54442d18p+1 / v74),
          v100 =
              COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
          v112 =
              COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
          v130 =
              COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
          v138 =
              COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
          v140 =
              COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
          v145 =
              COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
          v147 =
              COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
          v150 =
              COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
          v160 =
              COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
          v171 =
              COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
          v174 =
              COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
          v177 =
              COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
          v182 =
              COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
          v185 =
              COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
          v188 =
              COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
          v192 =
              COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
          *v76 = vcvtmd_s32_f64(v83 * 0x1.fffffffc00000p+30 +
                                0x1.0000000000000p-1);
          v76 += 2;
          v84 = (void*)cos_plt(v82, (v79 + v79) * 0x1.921fb54442d18p+1 / v74),
          v100 =
              COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
          v112 =
              COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
          v130 =
              COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
          v138 =
              COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
          v140 =
              COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
          v145 =
              COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
          v147 =
              COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
          v150 =
              COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
          v160 =
              COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
          v171 =
              COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
          v174 =
              COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
          v177 =
              COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
          v182 =
              COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
          v185 =
              COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
          v188 =
              COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
          v192 =
              COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
          *(v78 - 1) = vcvtmd_s32_f64(v85 * 0x1.fffffffc00000p+30 +
                                      0x1.0000000000000p-1);
          result = sin_plt(v84, (v79 + v79) * 0x1.921fb54442d18p+1 / v74),
          v100 =
              COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
          v112 =
              COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
          v130 =
              COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
          v138 =
              COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
          v140 =
              COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
          v145 =
              COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
          v147 =
              COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
          v150 =
              COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
          v160 =
              COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
          v171 =
              COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
          v174 =
              COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
          v177 =
              COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
          v182 =
              COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
          v185 =
              COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
          v188 =
              COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
          v192 =
              COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
          ++v77;
          *v78 = vcvtmd_s32_f64(v86 * 0x1.fffffffc00000p+30 +
                                0x1.0000000000000p-1);
          v78 += 2;
        } while (v12 != v77);
      }
      else {
        v89 = v75 + 2;
        v90 = 2 * v12;
        for (i = 0; i != v12; ++i) {
          v92 = (double)i;
          v93 =
              (void*)cos_plt((void*)result, (double)i * -0x1.0000000000000p+1 *
                                                0x1.921fb54442d18p+1 / v74),
          v100 =
              COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
          v112 =
              COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
          v130 =
              COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
          v138 =
              COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
          v140 =
              COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
          v145 =
              COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
          v147 =
              COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
          v150 =
              COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
          v160 =
              COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
          v171 =
              COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
          v174 =
              COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
          v177 =
              COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
          v182 =
              COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
          v185 =
              COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
          v188 =
              COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
          v192 =
              COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
          *(v89 - 1) = vcvtmd_s32_f64(v94 * 0x1.fffc000000000p+14 +
                                      0x1.0000000000000p-1);
          v95 = (void*)sin_plt(v93, (double)i * -0x1.0000000000000p+1 *
                                        0x1.921fb54442d18p+1 / v74),
          v100 =
              COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
          v112 =
              COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
          v130 =
              COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
          v138 =
              COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
          v140 =
              COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
          v145 =
              COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
          v147 =
              COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
          v150 =
              COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
          v160 =
              COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
          v171 =
              COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
          v174 =
              COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
          v177 =
              COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
          v182 =
              COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
          v185 =
              COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
          v188 =
              COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
          v192 =
              COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
          *v89 = vcvtmd_s32_f64(v96 * 0x1.fffc000000000p+14 +
                                0x1.0000000000000p-1);
          v97 = (void*)cos_plt(v95, (v92 + v92) * 0x1.921fb54442d18p+1 / v74),
          v100 =
              COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
          v112 =
              COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
          v130 =
              COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
          v138 =
              COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
          v140 =
              COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
          v145 =
              COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
          v147 =
              COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
          v150 =
              COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
          v160 =
              COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
          v171 =
              COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
          v174 =
              COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
          v177 =
              COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
          v182 =
              COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
          v185 =
              COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
          v188 =
              COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
          v192 =
              COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
          v99 = &v89[v90];
          v89[v90 - 1] = vcvtmd_s32_f64(v98 * 0x1.fffc000000000p+14 +
                                        0x1.0000000000000p-1);
          result = sin_plt(v97, (v92 + v92) * 0x1.921fb54442d18p+1 / v74),
          v100 =
              COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
          v112 =
              COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
          v130 =
              COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
          v138 =
              COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
          v140 =
              COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
          v145 =
              COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
          v147 =
              COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
          v150 =
              COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
          v160 =
              COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
          v171 =
              COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
          v174 =
              COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
          v177 =
              COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
          v182 =
              COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
          v185 =
              COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
          v188 =
              COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
          v192 =
              COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
          v89 += 2;
          *v99 = vcvtmd_s32_f64(v100 * 0x1.fffc000000000p+14 +
                                0x1.0000000000000p-1);
        }
      }
    }
    v161 = v197;
    if (v196 == 1 && (unsigned int)v195 >= 4) {
      v162 = v197[4];
      v163 = v197 + 2;
      v164 = (char*)v197 + 2 * v12;
      v165 = 1;
      v166 = v197;
      v167 = (__int64)&v197[2 * v12 + 2];
      v168 = &v197[v12];
      v169 = v195 >> 2;
      do {
        v175 = (double)v165 / (double)v194 + 0x1.0000000000000p-1;
        v176 = (void*)cos_plt((void*)result, v175 * -0x1.921fb54442d18p+1),
        v100 = COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
        v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
        v108 = COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
        v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
        v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
        v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
        v130 = COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
        v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
        v145 = COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
        v147 = COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
        v150 = COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
        v153 = COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
        v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
        v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
        v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
        v174 = COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
        v177 = COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
        v181 = COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
        v182 = COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
        v185 = COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
        v187 = COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
        v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
        v190 = COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
        v192 = COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
        v193 = COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
        v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
        v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
        v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
        v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
        v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
        switch (v198) {
        case 3:
          *(unsigned int*)((char*)v161 + v162) = vcvtmd_s32_f64(
              v177 * 0x1.fffffffc00000p+30 + 0x1.0000000000000p-1);
          v170 = (void*)sin_plt(v176, v175 * -0x1.921fb54442d18p+1),
          v100 =
              COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
          v112 =
              COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
          v130 =
              COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
          v138 =
              COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
          v140 =
              COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
          v145 =
              COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
          v147 =
              COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
          v150 =
              COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
          v160 =
              COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
          v171 =
              COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
          v174 =
              COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
          v177 =
              COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
          v182 =
              COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
          v185 =
              COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
          v188 =
              COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
          v192 =
              COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
          *(unsigned int*)((char*)v161 + v162 + 4) = vcvtmd_s32_f64(
              v171 * 0x1.fffffffc00000p+30 + 0x1.0000000000000p-1);
          v172 = (void*)cos_plt(v170, v175 * 0x1.921fb54442d18p+1),
          v100 =
              COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
          v112 =
              COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
          v130 =
              COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
          v138 =
              COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
          v140 =
              COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
          v145 =
              COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
          v147 =
              COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
          v150 =
              COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
          v160 =
              COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
          v171 =
              COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
          v174 =
              COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
          v177 =
              COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
          v182 =
              COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
          v185 =
              COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
          v188 =
              COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
          v192 =
              COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
          *(unsigned int*)((char*)v168 + v162) = vcvtmd_s32_f64(
              v173 * 0x1.fffffffc00000p+30 + 0x1.0000000000000p-1);
          result = sin_plt(v172, v175 * 0x1.921fb54442d18p+1),
          v100 =
              COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
          v112 =
              COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
          v130 =
              COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
          v138 =
              COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
          v140 =
              COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
          v145 =
              COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
          v147 =
              COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
          v150 =
              COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
          v160 =
              COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
          v171 =
              COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
          v174 =
              COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
          v177 =
              COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
          v182 =
              COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
          v185 =
              COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
          v188 =
              COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
          v192 =
              COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
          *(unsigned int*)((char*)v168 + v162 + 4) = vcvtmd_s32_f64(
              v174 * 0x1.fffffffc00000p+30 + 0x1.0000000000000p-1);
          break;
        case 2:
          v183 = v177;
          *(float*)((char*)v161 + v162) = v183;
          v184 = (void*)sin_plt(v176, v175 * -0x1.921fb54442d18p+1),
          v100 =
              COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
          v112 =
              COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
          v130 =
              COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
          v138 =
              COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
          v140 =
              COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
          v145 =
              COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
          v147 =
              COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
          v150 =
              COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
          v160 =
              COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
          v171 =
              COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
          v174 =
              COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
          v177 =
              COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
          v182 =
              COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
          v185 =
              COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
          v188 =
              COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
          v192 =
              COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
          *(float*)&v185 = v185;
          *(unsigned int*)((char*)v161 + v162 + 4) = LODWORD(v185);
          v186 = (void*)cos_plt(v184, v175 * 0x1.921fb54442d18p+1),
          v100 =
              COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
          v112 =
              COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
          v130 =
              COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
          v138 =
              COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
          v140 =
              COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
          v145 =
              COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
          v147 =
              COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
          v150 =
              COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
          v160 =
              COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
          v171 =
              COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
          v174 =
              COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
          v177 =
              COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
          v182 =
              COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
          v185 =
              COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
          v188 =
              COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
          v192 =
              COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
          *(float*)&v187 = v187;
          *(unsigned int*)((char*)v168 + v162) = LODWORD(v187);
          result = sin_plt(v186, v175 * 0x1.921fb54442d18p+1),
          v100 =
              COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
          v112 =
              COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
          v130 =
              COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
          v138 =
              COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
          v140 =
              COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
          v145 =
              COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
          v147 =
              COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
          v150 =
              COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
          v160 =
              COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
          v171 =
              COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
          v174 =
              COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
          v177 =
              COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
          v182 =
              COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
          v185 =
              COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
          v188 =
              COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
          v192 =
              COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
          *(float*)&v188 = v188;
          *(unsigned int*)((char*)v168 + v162 + 4) = LODWORD(v188);
          break;
        case 1:
          *(double*)((char*)v163 + v162 - 8) = v177;
          v178 = (void*)sin_plt(v176, v175 * -0x1.921fb54442d18p+1),
          v100 =
              COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
          v112 =
              COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
          v130 =
              COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
          v138 =
              COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
          v140 =
              COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
          v145 =
              COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
          v147 =
              COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
          v150 =
              COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
          v160 =
              COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
          v171 =
              COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
          v174 =
              COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
          v177 =
              COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
          v182 =
              COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
          v185 =
              COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
          v188 =
              COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
          v192 =
              COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
          *(_QWORD*)((char*)v163 + v162) = v179;
          v180 = (void*)cos_plt(v178, v175 * 0x1.921fb54442d18p+1),
          v100 =
              COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
          v112 =
              COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
          v130 =
              COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
          v138 =
              COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
          v140 =
              COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
          v145 =
              COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
          v147 =
              COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
          v150 =
              COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
          v160 =
              COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
          v171 =
              COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
          v174 =
              COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
          v177 =
              COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
          v182 =
              COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
          v185 =
              COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
          v188 =
              COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
          v192 =
              COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
          *(_QWORD*)(v167 + v162 - 8) = v181;
          result = sin_plt(v180, v175 * 0x1.921fb54442d18p+1),
          v100 =
              COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
          v112 =
              COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
          v130 =
              COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
          v138 =
              COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
          v140 =
              COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
          v145 =
              COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
          v147 =
              COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
          v150 =
              COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
          v160 =
              COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
          v171 =
              COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
          v174 =
              COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
          v177 =
              COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
          v182 =
              COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
          v185 =
              COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
          v188 =
              COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
          v192 =
              COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
          *(_QWORD*)(v167 + v162) = v182;
          break;
        default:
          *(_WORD*)((char*)v166 + v162) = vcvtmd_s32_f64(
              v177 * 0x1.fffc000000000p+14 + 0x1.0000000000000p-1);
          v189 = (void*)sin_plt(v176, v175 * -0x1.921fb54442d18p+1),
          v100 =
              COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
          v112 =
              COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
          v130 =
              COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
          v138 =
              COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
          v140 =
              COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
          v145 =
              COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
          v147 =
              COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
          v150 =
              COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
          v160 =
              COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
          v171 =
              COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
          v174 =
              COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
          v177 =
              COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
          v182 =
              COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
          v185 =
              COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
          v188 =
              COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
          v192 =
              COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
          *(_WORD*)((char*)v166 + v162 + 2) = vcvtmd_s32_f64(
              v190 * 0x1.fffc000000000p+14 + 0x1.0000000000000p-1);
          v191 = (void*)cos_plt(v189, v175 * 0x1.921fb54442d18p+1),
          v100 =
              COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
          v112 =
              COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
          v130 =
              COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
          v138 =
              COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
          v140 =
              COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
          v145 =
              COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
          v147 =
              COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
          v150 =
              COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
          v160 =
              COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
          v171 =
              COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
          v174 =
              COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
          v177 =
              COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
          v182 =
              COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
          v185 =
              COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
          v188 =
              COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
          v192 =
              COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
          *(_WORD*)&v164[v162] = vcvtmd_s32_f64(v192 * 0x1.fffc000000000p+14 +
                                                0x1.0000000000000p-1);
          result = sin_plt(v191, v175 * 0x1.921fb54442d18p+1),
          v100 =
              COERCE_AS(__typeof__(v100), PSEUDO_REGISTER(double, "d0", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(double, "d0", "=w")),
          v108 =
              COERCE_AS(__typeof__(v108), PSEUDO_REGISTER(double, "d0", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
          v112 =
              COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(double, "d0", "=w")),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(double, "d0", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(double, "d0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(double, "d0", "=w")),
          v130 =
              COERCE_AS(__typeof__(v130), PSEUDO_REGISTER(double, "d0", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(double, "d0", "=w")),
          v138 =
              COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
          v140 =
              COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(double, "d0", "=w")),
          v145 =
              COERCE_AS(__typeof__(v145), PSEUDO_REGISTER(double, "d0", "=w")),
          v147 =
              COERCE_AS(__typeof__(v147), PSEUDO_REGISTER(double, "d0", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
          v150 =
              COERCE_AS(__typeof__(v150), PSEUDO_REGISTER(double, "d0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(double, "d0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(double, "d0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
          v160 =
              COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(double, "d0", "=w")),
          v171 =
              COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
          v174 =
              COERCE_AS(__typeof__(v174), PSEUDO_REGISTER(double, "d0", "=w")),
          v177 =
              COERCE_AS(__typeof__(v177), PSEUDO_REGISTER(double, "d0", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(double, "d0", "=w")),
          v182 =
              COERCE_AS(__typeof__(v182), PSEUDO_REGISTER(double, "d0", "=w")),
          v185 =
              COERCE_AS(__typeof__(v185), PSEUDO_REGISTER(double, "d0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(double, "d0", "=w")),
          v188 =
              COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(double, "d0", "=w")),
          v192 =
              COERCE_AS(__typeof__(v192), PSEUDO_REGISTER(double, "d0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(double, "d0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(double, "d0", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(double, "d0", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(double, "d0", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(double, "d0", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(double, "d0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(double, "d0", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(double, "d0", "=w"));
          *(_WORD*)&v164[v162 + 2] = vcvtmd_s32_f64(
              v193 * 0x1.fffc000000000p+14 + 0x1.0000000000000p-1);
          break;
        }
        --v169;
        ++v165;
        v167 += 16;
        v163 += 4;
        v164 += 4;
        ++v166;
        v161 += 2;
        v168 += 2;
      } while (v169 != 0);
    }
  }
  return result;
}

__int64 nn_audio_detail_FftInPlaceProcessComplexDoubleCommon(__int64 result,
                                                             __int64 a2,
                                                             __int64 a3,
                                                             unsigned int a4)
{
  unsigned int* v4;
  int v5;
  __int64 v7;
  char* v8;
  int v9;
  int v10;
  __int64 v11;
  char* v12;
  __int64 i;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  int v22;
  unsigned __int64 v23;
  _BYTE* v24;
  __int64 v25;
  unsigned int v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  double* v31;
  __int64 v32;
  double* v33;
  double* v34;
  double v35;
  double v36;
  double v37;
  double v38;
  double v39;
  double v40;
  double v41;
  double v42;
  double* v43;
  unsigned __int64 v44;
  double v45;
  double v46;
  double v47;
  double* v48;
  double v49;
  double v50;
  double v51;
  double v52;
  double v53;
  double v54;
  double v55;
  double* v56;
  double v57;
  double v58;
  double v59;
  double v60;
  double v61;
  double v62;
  double v63;
  double* v64;
  double v65;
  double v66;
  double v67;
  double v68;
  double v69;
  double v70;
  double v71;
  double v72;
  double v73;
  double v74;
  unsigned __int8* v75;
  unsigned int v76;
  int v77;
  __int64 v78;
  double v79;
  __int64 v80;
  double* v81;
  __int64 v82;
  __int64 v83;
  double v84;
  double v85;
  double v86;
  double v87;
  double* v88;

  v4 = *(unsigned int**)a3;
  v5 = *(_DWORD*)(a3 + 32);
  v7 = result;
  v8 = (char*)result;
  if (a2 == result) {
    v8 = (char*)v4 + v4[2];
  }
  v9 = 2 * v5;
  if (v5 < 1) {
    goto LABEL_14;
  }
  if (v9 <= 1) {
    v10 = 1;
  }
  else {
    v10 = 2 * v5;
  }
  v11 = v10 & 3;
  v12 = (char*)v4 + v4[1];
  if (v9 < 4) {
    i = 0;
    if ((v10 & 3) == 0) {
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  v14 = v8 + 16;
  v15 = 0;
  v16 = 0;
  v17 = -(__int64)(v10 & 0xFFFFFFFC);
  do {
    v16 -= 4;
    *(v14 - 2) = *(
        _QWORD*)(a2 +
                 8LL * (unsigned int)(2 *
                                      *(_DWORD*)&v12[4 * (v15 & 0x7FFFFFFE)]));
    v18 = *(_QWORD*)(a2 +
                     8LL * ((2 * *(_DWORD*)&v12[4 * (v15 & 0x7FFFFFFE)]) | 1u));
    v19 = v15 + 1;
    v15 += 2;
    v20 = v19 & 0x7FFFFFFF;
    *(v14 - 1) = v18;
    *v14 = *(_QWORD*)(a2 + 8LL * (unsigned int)(2 * *(_DWORD*)&v12[4 * v20]));
    v14[1] = *(_QWORD*)(a2 + 8LL * ((2 * *(_DWORD*)&v12[4 * v20]) | 1u));
    v14 += 4;
  } while (v17 != v16);
  for (i = -v16; v11 != 0; ++i) {
  LABEL_13:
    --v11;
    *(_QWORD*)&v8[8 * i] = *(
        _QWORD*)(a2 +
                 8 * (i & 1 |
                      (unsigned int)(2 * *(_DWORD*)&v12[4 * ((unsigned int)i >>
                                                             1)])));
  }
LABEL_14:
  v21 = *v4;
  if (a4 == -1) {
    v22 = 2 * v5;
  }
  else {
    v22 = 0;
  }
  v24 = (char*)v4 + v21 + 1;
  v23 = (unsigned __int8)*v24;
  v25 = (__int64)&v4[2 * v22] + v4[3];
  if (v5 != 0) {
    LOBYTE(v4) = *v24;
    while (1) {
      LODWORD(v4) = (unsigned __int8)v4;
      if ((unsigned __int8)v4 == 2) {
        break;
      }
      if ((unsigned __int8)v4 != 4) {
        goto LABEL_38;
      }
      result = nn_audio_1f36e0_alt1(v8, v25, v23, v5, a4);
    LABEL_19:
      v26 = (unsigned __int8)*++v24;
      LOBYTE(v4) = v26;
      v23 *= v26;
    }
    v27 = 0;
    v28 = (v23 >> 1) - 1;
    v29 = 2 * (v23 >> 1);
    v30 = 2 * (v5 / v23);
    while (1) {
      v31 = (double*)&v8[16 * v27];
      if (((v23 >> 1) & 3) != 0) {
        break;
      }
      v33 = (double*)v25;
      v44 = v23 >> 1;
      v43 = (double*)&v8[16 * v27 + 16 * (v23 >> 1)];
      if (v28 >= 3) {
        goto LABEL_31;
      }
    LABEL_24:
      v27 += v23;
      if (v27 >= v5) {
        goto LABEL_19;
      }
    }
    v32 = (v23 >> 1) & 3;
    v33 = (double*)v25;
    do {
      v34 = &v31[v29];
      v35 = *v33;
      v36 = v33[1];
      v33 = (double*)((char*)v33 + v30 * 8);
      --v32;
      v37 = v31[v29];
      v38 = v31[v29 + 1];
      v39 = v37 * v35 - v36 * v38;
      v40 = v35 * v38 + v37 * v36;
      v41 = v31[1] - v40;
      *v34 = *v31 - v39;
      v34[1] = v41;
      v42 = v40 + v31[1];
      *v31 = v39 + *v31;
      v31[1] = v42;
      v31 += 2;
    } while (v32 != 0);
    v43 = &v31[v29];
    v44 = (v23 >> 1) & 0x7FFFFFFFFFFFFFFCLL;
    if (v28 < 3) {
      goto LABEL_24;
    }
    do {
    LABEL_31:
      v45 = v43[1];
      v46 = *v33;
      v47 = v33[1];
      v48 = &v33[v30];
      v44 -= 4LL;
      v49 = *v43 * v46 - v47 * v45;
      v50 = v46 * v45 + *v43 * v47;
      *v43 = *v31 - v49;
      v43[1] = v31[1] - v50;
      v51 = v50 + v31[1];
      *v31 = v49 + *v31;
      v31[1] = v51;
      v52 = v43[2];
      v53 = v43[3];
      v54 = *v48;
      v55 = v48[1];
      v56 = &v48[v30];
      v57 = v52 * v54 - v55 * v53;
      v58 = v54 * v53 + v52 * v55;
      v43[2] = v31[2] - v57;
      v43[3] = v31[3] - v58;
      v59 = v58 + v31[3];
      v31[2] = v57 + v31[2];
      v31[3] = v59;
      v60 = v43[4];
      v61 = v43[5];
      v62 = *v56;
      v63 = v56[1];
      v64 = &v56[v30];
      v65 = v60 * v62 - v63 * v61;
      v66 = v62 * v61 + v60 * v63;
      v43[4] = v31[4] - v65;
      v43[5] = v31[5] - v66;
      v67 = v66 + v31[5];
      v31[4] = v65 + v31[4];
      v31[5] = v67;
      v68 = v43[6];
      v69 = v43[7];
      v70 = *v64;
      v71 = v64[1];
      v33 = &v64[v30];
      v72 = v68 * v70 - v71 * v69;
      v73 = v70 * v69 + v68 * v71;
      v43[6] = v31[6] - v72;
      v43[7] = v31[7] - v73;
      v43 += 8;
      v74 = v73 + v31[7];
      v31[6] = v72 + v31[6];
      v31[7] = v74;
      v31 += 8;
    } while (v44 != 0);
    goto LABEL_24;
  }
  v75 = (unsigned __int8*)v4 + v21 + 2;
  LOBYTE(v4) = v23;
  while (1) {
    LODWORD(v4) = (unsigned __int8)v4;
    if ((unsigned __int8)v4 != 2) {
      if ((unsigned __int8)v4 != 4) {
        break;
      }
      result = nn_audio_1f36e0_alt1(v8, v25, v23, 0, a4);
    }
    v76 = *v75++;
    LOBYTE(v4) = v76;
    v23 *= v76;
  }
LABEL_38:
  if ((_DWORD)v4 != 0) {
    nn_detail_UnexpectedDefaultImpl_plt_857150(result);
    __udf(0);
  }
  if (a4 == -1 && v5 >= 1) {
    if (v9 <= 1) {
      v77 = 1;
    }
    else {
      v77 = 2 * v5;
    }
    v78 = v77 & 7;
    v79 = 1.0 / (double)v5;
    if (v9 >= 8) {
      v81 = (double*)(v8 + 32);
      v82 = 0;
      v83 = -(__int64)(v77 & 0xFFFFFFF8);
      do {
        v82 -= 8;
        v84 = v79 * *(v81 - 3);
        *(v81 - 4) = v79 * *(v81 - 4);
        *(v81 - 3) = v84;
        v85 = v79 * *(v81 - 1);
        *(v81 - 2) = v79 * *(v81 - 2);
        *(v81 - 1) = v85;
        v86 = v79 * v81[1];
        *v81 = v79 * *v81;
        v81[1] = v86;
        v87 = v79 * v81[3];
        v81[2] = v79 * v81[2];
        v81[3] = v87;
        v81 += 8;
      } while (v83 != v82);
      v80 = -v82;
      if (v78 == 0) {
        goto LABEL_40;
      }
    }
    else {
      v80 = 0;
      if ((v77 & 7) == 0) {
        goto LABEL_40;
      }
    }
    v88 = (double*)&v8[8 * v80];
    do {
      --v78;
      *v88 = v79 * *v88;
      ++v88;
    } while (v78 != 0);
  }
LABEL_40:
  if (v8 != (char*)v7) {
    return memcpy_plt(v7, v8, 16LL * v5);
  }
  return result;
}

__int64 nn_audio_1f36e0(__int64 result, double* a2, unsigned __int64 a3,
                        unsigned __int64 a4, int a5)
{
  unsigned __int64 v5;
  double v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  double* v13;
  double* v14;
  double* v15;
  double* v16;
  __int64 v17;
  double* v18;
  double v19;
  double* v20;
  double* v21;
  double v22;
  double v23;
  double v24;
  double v25;
  double v26;
  double v27;
  double v28;
  double v29;
  double v30;
  double v31;
  double v32;
  double v33;
  double v34;
  double v35;
  double v36;
  double v37;
  double v38;
  double v39;
  double v40;
  double v41;
  double v42;
  double v43;
  double* v44;
  double* v45;
  double* v46;
  double* v47;
  double v48;
  double v49;
  double v50;
  double v51;
  double v52;
  double v53;
  double* v54;
  double v55;
  double v56;
  double v57;
  double v58;
  double v59;
  double v60;
  double v61;
  double v62;
  double* v63;
  double* v64;
  double v65;
  double v66;
  double v67;
  double v68;
  double v69;
  double v70;
  double v71;
  double v72;
  double v73;
  double v74;
  double v75;
  double v76;
  double v77;
  double v78;
  double v79;
  double v80;
  double v81;
  double v82;
  double v83;
  double v84;
  double v85;
  double v86;
  double v87;
  double v88;
  double v89;
  double v90;
  double v91;
  double v92;
  double v93;
  double v94;
  double v95;
  double v96;
  double v97;
  double v98;
  double v99;
  double v100;
  double v101;
  double v102;
  double v103;
  double v104;
  double v105;
  double v106;
  double v107;
  double v108;
  double v109;
  double v110;
  double v111;
  double v112;
  double v113;
  double v114;
  double v115;
  double v116;
  double v117;

  if (a4 != 0) {
    v5 = a3 >> 2;
    v6 = (double)a5;
    v7 = 0;
    v8 = 2 * (a3 >> 2);
    v9 = 6 * (a3 >> 2);
    v10 = 4 * (a4 / a3);
    v11 = 2 * (a4 / a3);
    v12 = 6 * (a4 / a3);
    do {
      v13 = (double*)(result + 16 * v7);
      if ((a3 & 4) != 0) {
        v18 = &v13[a3 & 0xFFFFFFFFFFFFFFFCLL];
        v19 = a2[1];
        v20 = &v13[v8];
        v21 = &v13[v9];
        v14 = &a2[v12];
        v15 = &a2[v10];
        v16 = &a2[v11];
        v22 = v18[1];
        v23 = v13[v8];
        v24 = v13[v8 + 1];
        v25 = v13[v9];
        v26 = v13[v9 + 1];
        v27 = *v18 * *a2 - v19 * v22;
        v28 = v23 * *a2 - v19 * v24;
        v29 = v25 * *a2 - v19 * v26;
        v30 = *a2 * v22 + *v18 * v19;
        v31 = *v13;
        v32 = v13[1];
        v33 = *a2 * v24 + v23 * v19;
        v34 = *a2 * v26 + v25 * v19;
        v35 = v27 + *v13;
        v36 = v30 + v32;
        v37 = v32 - v30;
        *v13 = v35;
        v13[1] = v36;
        v38 = v33 + v34;
        v39 = v33 - v34;
        *v18 = v35 - (v28 + v29);
        v40 = v28 + v29 + *v13;
        v18[1] = v13[1] - v38;
        v41 = v31 - v27;
        v42 = v28 - v29;
        v43 = v13[1];
        *v13 = v40;
        v13[1] = v38 + v43;
        v13 += 2;
        *v20 = v41 + v39 * v6;
        v20[1] = v37 - v42 * v6;
        v17 = (a3 >> 2) - 1;
        *v21 = v41 - v39 * v6;
        v21[1] = v37 + v42 * v6;
        if (v5 != 1) {
        LABEL_8:
          v44 = &v13[v9 + 2];
          v45 = &v13[v8 + 2];
          v46 = v13 + 2;
          v47 = (double*)((char*)v13 + ((32 * (a3 >> 2)) | 0x10));
          do {
            v48 = *(v45 - 2);
            v49 = *(v45 - 1);
            v50 = *v16;
            v51 = v16[1];
            v52 = *(v47 - 2);
            v53 = *(v47 - 1);
            v54 = &v16[v11];
            v17 -= 2;
            v55 = -(v51 * v49);
            v56 = *v15;
            v57 = v15[1];
            v58 = v50 * v49;
            v59 = *(v44 - 2);
            v60 = *(v44 - 1);
            v61 = *v14;
            v62 = v14[1];
            v63 = &v15[v10];
            v64 = &v14[v12];
            v65 = v55 + v48 * v50;
            v66 = -(v57 * v53);
            v67 = v56 * v53;
            v68 = v66 + v52 * v56;
            v69 = v59 * v61 - v62 * v60;
            v70 = v58 + v48 * v51;
            v71 = v67 + v52 * v57;
            v72 = *(v46 - 2);
            v73 = *(v46 - 1);
            v74 = v61 * v60 + v59 * v62;
            v75 = v65 + v69;
            v76 = v65 - v69;
            v77 = v68 + v72;
            v78 = v71 + v73;
            v79 = v72 - v68;
            v80 = v73 - v71;
            *(v46 - 2) = v77;
            *(v46 - 1) = v78;
            v81 = v70 + v74;
            v82 = v70 - v74;
            *(v47 - 2) = v77 - v75;
            *(v47 - 1) = *(v46 - 1) - v81;
            v83 = v75 + *(v46 - 2);
            v84 = v81 + *(v46 - 1);
            *(v46 - 2) = v83;
            *(v46 - 1) = v84;
            *(v45 - 2) = v79 + v82 * v6;
            *(v45 - 1) = v80 - v76 * v6;
            *(v44 - 2) = v79 - v82 * v6;
            *(v44 - 1) = v80 + v76 * v6;
            v85 = v45[1];
            v86 = *v54;
            v87 = v54[1];
            v16 = &v54[v11];
            v88 = v47[1];
            v89 = *v63;
            v90 = v63[1];
            v91 = v44[1];
            v92 = *v64;
            v93 = v64[1];
            v15 = &v63[v10];
            v14 = &v64[v12];
            v94 = -(v87 * v85);
            v95 = v86 * v85;
            v96 = v94 + *v45 * v86;
            v97 = -(v90 * v88);
            v98 = v89 * v88;
            v99 = v97 + *v47 * v89;
            v100 = -(v93 * v91);
            v101 = v92 * v91;
            v102 = v100 + *v44 * v92;
            v103 = v95 + *v45 * v87;
            v104 = v98 + *v47 * v90;
            v105 = *v46;
            v106 = v46[1];
            v107 = v101 + *v44 * v93;
            v108 = v96 + v102;
            v109 = v96 - v102;
            v110 = v99 + *v46;
            v111 = v104 + v106;
            v112 = v106 - v104;
            *v46 = v110;
            v46[1] = v111;
            v113 = v103 + v107;
            v114 = v103 - v107;
            *v47 = v110 - v108;
            v47[1] = v46[1] - v113;
            v47 += 4;
            v115 = v105 - v99 + v114 * v6;
            v116 = v105 - v99 - v114 * v6;
            v117 = v113 + v46[1];
            *v46 = v108 + *v46;
            v46[1] = v117;
            v46 += 4;
            *v45 = v115;
            v45[1] = v112 - v109 * v6;
            v45 += 4;
            *v44 = v116;
            v44[1] = v112 + v109 * v6;
            v44 += 4;
          } while (v17 != 0);
        }
      }
      else {
        v14 = a2;
        v15 = a2;
        v16 = a2;
        v17 = a3 >> 2;
        if (v5 != 1) {
          goto LABEL_8;
        }
      }
      v7 += a3;
    } while (v7 < a4);
  }
  return result;
}

__int64 nn_audio_detail_FftInPlaceProcessRealDoubleCommon(
    __int64 a1, double* a2, unsigned int* a3, int a4, long double a5,
    long double a6)
{
  __int64 v6;
  unsigned __int64 v7;
  __int64 v9;
  signed int v10;
  double* v11;
  __int64 v13;
  __int64 result;
  __int64 v15;
  unsigned __int64 v16;
  double* v17;
  double* v18;
  double* v19;
  double* v20;
  double* v21;
  double v22;
  double v23;
  double v24;
  double v25;
  double v26;
  double v27;
  double v28;
  double v29;
  double v30;
  double v31;
  double v32;
  double v33;
  double* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  double* v38;
  double* v39;
  double* v40;
  double* v41;
  double v42;
  double v43;
  double v44;
  double v45;
  double v46;
  double v47;
  double v48;
  double v49;
  double v50;
  double v51;
  double v52;
  double v53;

  v6 = *(_QWORD*)a3;
  v7 = a3[8];
  v9 = *(unsigned int*)(*(_QWORD*)a3 + 8LL);
  v10 = a3[8];
  v11 = (double*)(*(_QWORD*)a3 + v9);
  if (a4 == 1) {
    v13 = *(_QWORD*)a3 + v9;
    a3[8] = v10 / 2;
    result = nn_audio_detail_FftInPlaceProcessComplexDoubleCommon_plt(
        v13, a2, a3, a5, a6);
    a3[8] *= 2;
    v15 = a1 + 8LL * (int)v7;
    *(double*)a1 = *v11 + v11[1];
    *(double*)v15 = *v11 - v11[1];
    *(_QWORD*)(a1 + 8) = 0;
    *(_QWORD*)(v15 + 8) = 0;
    if ((int)v7 >= 4) {
      v16 = v7 >> 2;
      v17 = (double*)(a1 + 24);
      v18 = (double*)(v9 + v6 + 24);
      v19 = (double*)(a1 + 16LL * (unsigned int)(v10 / 2) - 8);
      v20 = (double*)(v9 + v6 + 8LL * (int)v7 - 8);
      v21 = (double*)(*(unsigned int*)(v6 + 16) + v6 + 8);
      do {
        v22 = *(v18 - 1);
        v23 = *v18;
        v24 = *(v20 - 1);
        v25 = *v20;
        --v16;
        v20 -= 2;
        v18 += 2;
        v26 = v22 + v24;
        v27 = v23 - v25;
        v28 = v22 - v24;
        v29 = v23 + v25;
        v30 = *(v21 - 1);
        v31 = *v21;
        v21 += 2;
        v32 = v28 * v30 - v31 * v29;
        v33 = v29 * v30 + v28 * v31;
        *(v17 - 1) = (v26 + v32) * 0.5;
        *v17 = (v27 + v33) * 0.5;
        v17 += 2;
        *(v19 - 1) = (v26 - v32) * 0.5;
        *v19 = (v33 - v27) * 0.5;
        v19 -= 2;
      } while (v16 != 0);
    }
  }
  else {
    *(_QWORD*)&a5 = 0.5;
    *v11 = (*a2 + a2[(int)v7]) * 0.5;
    *(double*)&a6 = (*a2 - a2[(int)v7]) * 0.5;
    v11[1] = *(double*)&a6;
    if ((int)v7 >= 4) {
      *(_QWORD*)&a6 = -0.5;
      v34 = &a2[(int)v7 - 1];
      v35 = (__int64)(int)(v7 + ((unsigned int)v7 >> 31)) >> 1;
      v36 = (unsigned int)v7 >> 2;
      v37 = *(unsigned int*)(v6 + 16) + 8 * v35;
      v38 = (double*)(v9 + v6 + 16 * v35 - 8);
      v39 = (double*)(v9 + v6 + 24);
      v40 = a2 + 3;
      v41 = (double*)(v37 + v6 + 8);
      do {
        v42 = *(v40 - 1);
        v43 = *v40;
        v44 = *(v34 - 1);
        v45 = *v34;
        --v36;
        v34 -= 2;
        v40 += 2;
        v46 = v42 + v44;
        v47 = v43 - v45;
        v48 = v42 - v44;
        v49 = v43 + v45;
        v50 = *(v41 - 1);
        v51 = *v41;
        v41 += 2;
        v52 = v48 * v50 - v51 * v49;
        v53 = v49 * v50 + v48 * v51;
        *(v39 - 1) = (v46 + v52) * 0.5;
        *v39 = (v47 + v53) * 0.5;
        v39 += 2;
        *(v38 - 1) = (v46 - v52) * 0.5;
        *v38 = (v47 - v53) * -0.5;
        v38 -= 2;
      } while (v36 != 0);
    }
    a3[8] = (int)a3[8] / 2;
    result = nn_audio_detail_FftInPlaceProcessComplexDoubleCommon_plt(
        a1, v11, a3, a5, a6);
    a3[8] *= 2;
  }
  return result;
}

__int64 nn_audio_GetAudioRendererWorkBufferSize(unsigned int* a1)
{
  unsigned int v1;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  _QWORD v10[2];
  unsigned int v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  int v17;
  __int64 v18;
  __int64 v19;

  v1 = a1[11];
  v19 = 0;
  nn_audio_CreateAudioRendererManager_plt(v1 == 1);
  v3 = *a1;
  v4 = a1[1];
  v14 = 0;
  v15 = 0;
  v18 = 0;
  v10[0] = __PAIR64__(v4, v3);
  v10[1] = *((_QWORD*)a1 + 1);
  v11 = a1[4];
  v12 = *(_QWORD*)(a1 + 5);
  v13 = a1[7];
  LOBYTE(v14) = *((_BYTE*)a1 + 32);
  v5 = a1[10];
  HIDWORD(v14) = a1[9];
  LODWORD(v15) = v5;
  v6 = a1[12];
  BYTE2(v14) = a1[11];
  v7 = a1[13];
  BYTE3(v14) = v6;
  v16 = v7;
  v17 = (*(__int64 (**)(__int64, __int64*, _QWORD*))(*(_QWORD*)v19 + 40LL))(
      v19, &v18, v10);
  if (v17 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v17);
    __udf(0);
  }
  v8 = v18;
  if (v19 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 8LL))(v19);
  }
  return v8 + 4096;
}

__int64 nn_audio_OpenAudioRenderer_22f880(__int64* a1, int* a2, __int64 a3,
                                          __int64 a4)
{
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v13;
  unsigned int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  int v20;
  int v21;
  void* v22;
  __int64 v23;
  unsigned int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned int v34;
  int v35;
  __int64 v36;
  int v37;
  __int64 v38;
  int v39;
  int v40;
  void* v41;
  __int64 v42;
  __int64 v43;
  struct {
    unsigned int v44;
    char v45;
  } v44_;
  unsigned int v46;
  int v47;
  __int64 v48;
  int v49;
  __int64 v50;
  int v51;
  __int64 v52;
  __int64 v53;
  int v54;
  struct {
    __int64 v55;
    __int64 v56;
  } v55_;
  __int64* v57;

  if ((nn_os_TryAcquireSemaphore_plt(SdkData_e873c0) & 1) == 0) {
    return 2713;
  }
  v9 = a2[11];
  v8 = a2[12];
  v43 = 0;
  v10 = a4 - 4096;
  v55_.v56 = 0;
  v11 = nn_audio_CreateAudioRendererManager_plt(v9 == 1);
  if (v8 == 1 && v9 == 1) {
    v34 = *a2;
    v35 = a2[1];
    v52 = 0;
    v53 = 0;
    v36 = *((_QWORD*)a2 + 1);
    v46 = v34;
    v47 = v35;
    v37 = a2[4];
    v38 = *(_QWORD*)(a2 + 5);
    v48 = v36;
    v49 = v37;
    v39 = a2[7];
    v50 = v38;
    LOBYTE(v38) = *((_BYTE*)a2 + 32);
    v51 = v39;
    LOBYTE(v52) = v38;
    LODWORD(v38) = a2[10];
    HIDWORD(v52) = a2[9];
    LODWORD(v53) = v38;
    LODWORD(v38) = a2[12];
    BYTE2(v52) = a2[11];
    v40 = a2[13];
    BYTE3(v52) = v38;
    v54 = v40;
    v41 = (void*)nn_os_GetCurrentProcessHandle_plt(v11);
    if ((_DWORD)v41 == 0) {
      nn_diag_detail_AbortImpl_plt_856170(v41);
    }
    LODWORD(v55_.v55) = (_DWORD)v41;
    BYTE4(v55_.v55) = 0;
    v42 = nn_applet_GetAppletResourceUserId_plt(v41);
    if (v42 == 0) {
      nn_diag_detail_AbortImpl_plt_856170(0);
    }
    v57 = &v43;
    v24 = (*(__int64 (**)(__int64, __int64**, unsigned int*, __int64, __int64*,
                          __int64, __int64))(*(_QWORD*)v55_.v56 + 56LL))(
        v55_.v56, &v57, &v46, a3, &v55_.v55, v10, v42);
    if (BYTE4(v55_.v55) == 1) {
      goto LABEL_28;
    }
  LABEL_13:
    v25 = v55_.v56;
    if (v55_.v56 == 0) {
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  v55_.v55 = 0x100000000LL;
  LODWORD(v57) = nn_os_CreateTransferMemory_plt(&v46, a3, v10, 0);
  if ((_DWORD)v57 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v57);
  }
  v13 = nn_os_DetachTransferMemory_plt(&v46);
  LODWORD(v55_.v55) = v13;
  if ((_BYTE)v46 != 0) {
    v13 = nn_os_DestroyTransferMemory_plt(&v46);
  }
  v14 = *a2;
  v15 = a2[1];
  v52 = 0;
  v53 = 0;
  v16 = *((_QWORD*)a2 + 1);
  v17 = v55_.v56;
  v46 = v14;
  v47 = v15;
  v18 = a2[4];
  v19 = *(_QWORD*)(a2 + 5);
  v48 = v16;
  v49 = v18;
  v20 = a2[7];
  v50 = v19;
  LOBYTE(v19) = *((_BYTE*)a2 + 32);
  v51 = v20;
  LOBYTE(v52) = v19;
  LODWORD(v19) = a2[10];
  HIDWORD(v52) = a2[9];
  LODWORD(v53) = v19;
  LODWORD(v19) = a2[12];
  BYTE2(v52) = a2[11];
  v21 = a2[13];
  BYTE3(v52) = v19;
  v54 = v21;
  v22 = (void*)nn_os_GetCurrentProcessHandle_plt(v13);
  if ((_DWORD)v22 == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v22);
  }
  v44_.v44 = (unsigned int)v22;
  v44_.v45 = 0;
  v23 = nn_applet_GetAppletResourceUserId_plt(v22);
  if (v23 == 0) {
    nn_diag_detail_AbortImpl_plt_856170(0);
  }
  v57 = &v43;
  v24 = (*(__int64 (**)(__int64, __int64**, unsigned int*, __int64*,
                        unsigned int*, __int64, __int64))(
      *(_QWORD*)v17 + 32LL))(v17, &v57, &v46, &v55_.v55, &v44_.v44, v10, v23);
  if (v44_.v45 == 1) {
    nn_os_CloseNativeHandle_plt(v44_.v44);
    if (BYTE4(v55_.v55) == 1) {
      goto LABEL_28;
    }
    goto LABEL_13;
  }
  if (BYTE4(v55_.v55) != 1) {
    goto LABEL_13;
  }
LABEL_28:
  nn_os_CloseNativeHandle_plt((unsigned int)v55_.v55);
  v25 = v55_.v56;
  if (v55_.v56 != 0) {
  LABEL_14:
    (*(void (**)(__int64))(*(_QWORD*)v25 + 8LL))(v25);
  }
LABEL_15:
  if (v24 != 0) {
    if ((v24 & 0x3FFFFFLL) != 0x40099 && (v24 & 0x3FFDFF) != 0x899) {
      v46 = v24;
      nn_diag_detail_AbortImpl_plt_858db0(&v46);
    }
    nn_os_ReleaseSemaphore_plt_85ca90(SdkData_e873c0);
    v32 = v43;
    if (v43 != 0) {
      goto LABEL_21;
    }
  }
  else {
    v26 = v43;
    v43 = 0;
    *a1 = v26;
    v27 = a3 + v10;
    *(_QWORD*)(v27 + 40) = 0;
    *(_QWORD*)(v27 + 48) = 0;
    *(_QWORD*)(v27 + 24) = 0;
    *(_QWORD*)(v27 + 32) = 0;
    *(_QWORD*)(v27 + 8) = 0;
    *(_QWORD*)(v27 + 16) = 0;
    *(_QWORD*)v27 = 0;
    a1[1] = a3 + v10;
    *(_DWORD*)(v27 + 8) = *a2;
    *(_DWORD*)(v27 + 12) = a2[1];
    *(_DWORD*)(v27 + 16) = a2[2];
    *(_DWORD*)(v27 + 28) = a2[11];
    v28 = a2[12];
    *(_QWORD*)v27 = 0;
    *(_DWORD*)(v27 + 32) = v28;
    *(_DWORD*)(v27 + 36) = 1065353216;
    *(_QWORD*)(v27 + 20) = 0x6400000001LL;
    v29 = nn_audio_detail_AcquireResourceExclusionChecker_plt();
    if (v29 != 0) {
      v30 = *a1;
      v31 = *(_QWORD*)(v29 + 8);
      if (v31 == 0 || v31 == v30) {
        *(_QWORD*)(v29 + 8) = v30;
      }
    }
    nn_audio_capture_StartSystemAudioCaptureServer_plt(v29);
    v32 = v43;
    if (v43 != 0) {
    LABEL_21:
      (*(void (**)(__int64))(*(_QWORD*)v32 + 8LL))(v32);
    }
  }
  return v24;
}

__int64 nn_audio_OpenAudioRenderer_22fbf0(__int64* a1, __int64 a2, __int64 a3,
                                          __int64 a4, __int64 a5)
{
  __int64 result;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;

  result = nn_audio_OpenAudioRenderer_plt(a1, a3, a4, a5);
  if ((_DWORD)result == 0) {
    if (*(_DWORD*)(a3 + 48) == 1 && *(_DWORD*)(a3 + 44) == 1) {
      LODWORD(v13) = nn_os_CreateSystemEvent_plt(a2, 1, 0);
      if ((_DWORD)v13 == 0) {
        *(_QWORD*)a1[1] = a2;
        return 0;
      }
    }
    else {
      v10 = *a1;
      v13 = 0;
      v11 =
          (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v10 + 88LL))(v10, &v13);
      v12 = v11;
      if ((_DWORD)v11 == 0) {
        *(_QWORD*)a1[1] = 0;
        if (*(_BYTE*)(a2 + 40) == 0) {
          nn_os_AttachReadableHandleToSystemEvent_plt(a2, (unsigned int)v13,
                                                      BYTE4(v13), 1);
          return 0;
        }
      LABEL_14:
        nn_diag_detail_AbortImpl_plt_856170(v11);
        __udf(0);
      }
      nn_diag_detail_AbortImpl_plt_858db0(&v12);
    }
    v11 = nn_diag_detail_AbortImpl_plt_858db0(&v13);
    goto LABEL_14;
  }
  return result;
}

__int64 nn_audio_2302f0()
{
  nn_os_InitializeSemaphore_plt(SdkData_e873c0, 2, 2);
  return fw_rtld_RegisterCrtDestructor();
}

__int64 nn_audio_2313c0(__int64 result)
{
  __int64 v1;

  v1 = SdkData_e873c8;
  *(_DWORD*)(result + 16) = 0;
  *(_QWORD*)result = v1 + 16;
  *(_QWORD*)(result + 8) = 0;
  return result;
}

__int64 nn_audio_2346d0(__int64 a1, __int64* a2, __int64 a3, unsigned int* a4,
                        unsigned int* a5)
{
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v9;
  char v10;
  unsigned int v11;
  char v12;
  __int64 v13;

  v13 = *a2;
  v5 = *a4;
  *a4 = 0;
  v11 = v5;
  LOBYTE(v5) = *((_BYTE*)a4 + 4);
  *((_BYTE*)a4 + 4) = 0;
  v12 = v5;
  v6 = *a5;
  *a5 = 0;
  v9 = v6;
  LOBYTE(v6) = *((_BYTE*)a5 + 4);
  *((_BYTE*)a5 + 4) = 0;
  v10 = v6;
  v7 = nn_audio_server_AudioRendererManagerImpl_OpenAudioRenderer_plt(
      a1 + 16, &v13, a3, &v11, &v9);
  if (v10 == 1) {
    nn_os_CloseNativeHandle_plt(v9);
    if (v12 != 1) {
      return v7;
    }
  }
  else if (v12 != 1) {
    return v7;
  }
  nn_os_CloseNativeHandle_plt(v11);
  return v7;
}

__int64 nn_audio_2347a0(__int64 a1, __int64* a2, __int64 a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;

  v3 = *a2;
  v5 = a3;
  v6 = v3;
  return nn_audio_server_AudioRendererManagerImpl_GetAudioDeviceService_plt(
      a1 + 16, &v6, &v5);
}

__int64 nn_audio_2347e0(__int64 a1, __int64* a2)
{
  __int64 v3;

  v3 = *a2;
  return nn_audio_server_AudioRendererManagerImpl_OpenAudioRendererForManualExecution_plt(
      a1 + 16, &v3);
}

__int64 nn_audio_234810(__int64 a1, __int64* a2, __int64 a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;

  v3 = *a2;
  v5 = a3;
  v6 = v3;
  return nn_audio_server_AudioRendererManagerImpl_GetAudioDeviceServiceWithRevisionInfo_plt(
      a1 + 16, &v6, &v5);
}

__int64 nn_audio_234850(__int64 a1)
{
  nn_audio_server_AudioRendererManagerImpl_Destroy_AudioRendererManagerImpl_plt(
      a1 + 16);
  return SdkRoutine_857220(a1, 6720);
}

__int64 nn_audio_2348a0(__int64 a1)
{
  __int64 v1;

  v1 = a1 - 16;
  nn_audio_server_AudioRendererManagerImpl_Destroy_AudioRendererManagerImpl_plt(
      a1);
  return SdkRoutine_857220(v1, 6720);
}

__int64 nn_audio_2348d0()
{
  void(__attribute__((noreturn)) * v0)();
  char* v1;
  __int64 v2;

  v0 = SdkData_e873d0[0];
  v1 = (char*)SdkData_e873d0[0] + 16;
  *(_QWORD*)SdkData_e873d0[0] = SdkData_e873d8 + 16;
  nn_audio_server_AudioRendererManagerImpl_AudioRendererManagerImpl_plt(v1);
  v2 = SdkData_e873e0 + 120;
  *(_QWORD*)v0 = SdkData_e873e0 + 16;
  *(__int64*)((char*)((__int64*)0xCLL) + (_QWORD)v0 + 4) = v2;
  return fw_rtld_RegisterCrtDestructor();
}

__int64 nn_audio_234ad0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  _QWORD* v4;

  result = nn_sf_impl_detail_ServiceObjectImplBase2_ReleaseImpl_plt(a1 + 24);
  if ((result & 1) != 0) {
    if (*(_BYTE*)(a1 + 8) == 1) {
      v3 = *(unsigned int*)(a1 + 12);
      v4 = (_QWORD*)nn_sf_hipc_GetMessageBufferOnTls_plt(result);
      *v4 = 2;
      nn_sf_hipc_SendSyncRequest_plt(v3, v4, 256);
      nn_sf_hipc_CloseClientSessionHandle_plt(v3);
    }
    nn_os_LockMutex_plt(&SdkData_f17e98);
    nn_lmem_FreeToExpHeap_plt(SdkData_f17e90, a1);
    return nn_os_UnlockMutex_plt(&SdkData_f17e98);
  }
  return result;
}

__int64 nn_audio_234b60(__int64 a1, __int64* a2, __int64 a3, __int64 a4,
                        __int64 a5, __int64 a6, __int64 a7)
{
  unsigned int v14;
  __int64 v15;
  __int64 v17;
  __int64* v18;
  __int64 v19;

  v19 = 0;
  v17 = 0;
  v18 = &v19;
  nn_audio_234e50(&v17);
  if (v18 == nullptr) {
    v14 = 5642;
    v15 = v19;
    if (v19 == 0) {
      return v14;
    }
    goto LABEL_3;
  }
  v17 = *a2;
  v14 = ((__int64 (*)(__int64, __int64*, __int64, __int64, __int64, __int64,
                      __int64, _QWORD, __int64*))SdkRoutine_1ec370)(
      a1 + 8, &v17, a3, a4, a5, a6, a7, 0, &v19);
  v15 = v19;
  if (v19 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
  }
  return v14;
}

__int64 nn_audio_234c30(__int64 a1, __int64* a2, __int64 a3)
{
  unsigned int v6;
  __int64 v7;
  __int64 v9;
  __int64* v10;
  __int64 v11;

  v11 = 0;
  v9 = 0;
  v10 = &v11;
  nn_audio_234f00(&v9);
  if (v10 == nullptr) {
    v6 = 5642;
    v7 = v11;
    if (v11 == 0) {
      return v6;
    }
    goto LABEL_3;
  }
  v9 = *a2;
  v6 = SdkRoutine_1ecc10(a1 + 8, &v9, a3, 2, &v11);
  v7 = v11;
  if (v11 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  return v6;
}

__int64 nn_audio_234cd0(__int64 a1, __int64* a2, __int64 a3, __int64 a4,
                        __int64 a5, __int64 a6, __int64 a7)
{
  unsigned int v14;
  __int64 v15;
  __int64 v17;
  __int64* v18;
  __int64 v19;

  v19 = 0;
  v17 = 0;
  v18 = &v19;
  nn_audio_234e50(&v17);
  if (v18 == nullptr) {
    v14 = 5642;
    v15 = v19;
    if (v19 == 0) {
      return v14;
    }
    goto LABEL_3;
  }
  v17 = *a2;
  v14 = ((__int64 (*)(__int64, __int64*, __int64, __int64, __int64, __int64,
                      __int64, __int64, __int64*))SdkRoutine_1ed830)(
      a1 + 8, &v17, a3, a4, a5, a6, a7, 3, &v19);
  v15 = v19;
  if (v19 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
  }
  return v14;
}

__int64 nn_audio_SetSpatialDownmixOutputMode(void* a1)
{
  unsigned int v1;
  __int64 v2;
  __int64 v3;
  __int64 result;

  v1 = (unsigned int)a1;
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f26ee0,
                            memory_order_acquire) &
       1) == 0) {
    a1 = (void*)__cxa_guard_acquire_plt(&SdkData_f26ee0);
    if ((_DWORD)a1 != 0) {
      nn_audio_27aef0();
      fw_rtld_RegisterCrtDestructor();
      a1 = (void*)__cxa_guard_release_plt(&SdkData_f26ee0);
    }
  }
  v2 = SdkData_f26ed8;
  if (SdkData_f26ed8 != 0) {
    a1 = (void*)(**(__int64 (***)(__int64))SdkData_f26ed8)(SdkData_f26ed8);
  }
  v3 = nn_applet_GetAppletResourceUserId_plt(a1);
  (*(void (**)(__int64, _QWORD, __int64))(*(_QWORD*)v2 + 32LL))(v2, v1, v3);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  nn_audio_g_SpatialDownmixOutputMode = v1;
  return result;
}

__int64 nn_audio_27aef0()
{
  __int64 result;
  __int64 v1;
  __int64* v2;

  SdkData_f26ed8 = 0;
  nn_audio_CreateUserClientSessionByHipc_plt((void*)&v1);
  v2 = &SdkData_f26ed8;
  LODWORD(v2) =
      (*(__int64 (**)(__int64, __int64**))(*(_QWORD*)v1 + 56LL))(v1, &v2);
  if ((_DWORD)v2 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v2);
    __udf(0);
  }
  result = v1;
  if (v1 != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 8LL))(v1);
  }
  return result;
}

__int64 nn_audio_27b9d0()
{

  SdkData_f26f00 = (__int64)SdkData_e5f940;
  SdkData_f26f08 = 1;
  nn_os_SdkConditionVariableType_Initialize_plt(&SdkData_f26f10);
  SdkData_f26f18 = 0;
  SdkData_f26f20 = 0;
  SdkData_f26f28 = (__int64)&SdkData_f26f28;
  SdkData_f26f30 = (__int64)&SdkData_f26f28;
  return memset_plt((void*)&SdkData_f26f38, nullptr, 4000);
}

__int64 nn_audio_27ba40(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;

  v2 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
  if ((v2 & 1) != 0) {
  LABEL_107:
    nn_diag_detail_AbortImpl_plt_856170(v2);
    __udf(0);
  }
  atomic_store(0, (unsigned int*)(a1 + 8));
  nn_os_SdkMutexType_Lock_plt(a1 + 12);
  v3 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
  if ((v3 & 1) != 0) {
    v4 = a1 + 40;
    do {
      while (2) {
        v5 = nn_os_GetSystemTick_plt(v3);
        v6 = nn_os_ConvertToTimeSpan_plt(v5);
        if (*(_BYTE*)(a1 + 32) == 1) {
          *(_BYTE*)(a1 + 32) = 0;
        }
        v7 = 56;
        v8 = 16;
        v9 = 0;
        do {
          v10 = a1 + v7;
          if (*(_BYTE*)(a1 + v7) == 1) {
            v11 = *(_QWORD*)(v10 + 24);
            v12 = v11 <= v6;
            v13 = v11 - v6;
            if (v12) {
              v14 =
                  (***(__int64 (****)(_QWORD))(v10 + 32))(*(_QWORD*)(v10 + 32));
              v15 = *(_QWORD*)(a1 + 48);
              if (v15 == v4) {
              LABEL_106:
                v2 = nn_diag_detail_AbortImpl_plt_856170(v14);
                goto LABEL_107;
              }
              v16 = a1 + 8 + v7;
              while (v15 != v16) {
                v15 = *(_QWORD*)(v15 + 8);
                if (v15 == v4) {
                  goto LABEL_106;
                }
              }
              v17 = *(__int64**)(v10 + 16);
              v18 = 0;
              v19 = *v17;
              *(_QWORD*)(*(_QWORD*)v16 + 8LL) = v17;
              *v17 = *(_QWORD*)v16;
              *(_QWORD*)(v19 + 8) = v16;
              *(_QWORD*)v16 = v19;
              while (1) {
                v20 = a1 + v18;
                if (v9 == v18 && (*(_BYTE*)(v20 + 56) & 1) != 0) {
                  break;
                }
                if (v9 - 40 == v18 && (*(_BYTE*)(v20 + 96) & 1) != 0) {
                  if (v18 == 3960) {
                    goto LABEL_10;
                  }
                  break;
                }
                v21 = a1 + v18;
                if (v9 - 80 == v18 && (*(_BYTE*)(v21 + 136) & 1) != 0) {
                  if (v18 == 3920) {
                    goto LABEL_10;
                  }
                  break;
                }
                if (v9 - 120 == v18 && (*(_BYTE*)(v21 + 176) & 1) != 0) {
                  if (v18 == 3880) {
                    goto LABEL_10;
                  }
                  break;
                }
                v22 = a1 + v18;
                if (v9 - 160 == v18 && (*(_BYTE*)(v22 + 216) & 1) != 0) {
                  if (v18 == 3840) {
                    goto LABEL_10;
                  }
                  break;
                }
                if (v9 - 200 == v18 && (*(_BYTE*)(v22 + 256) & 1) != 0) {
                  if (v18 == 3800) {
                    goto LABEL_10;
                  }
                  break;
                }
                v23 = a1 + v18;
                if (v9 - 240 == v18 && (*(_BYTE*)(v23 + 296) & 1) != 0) {
                  if (v18 == 3760) {
                    goto LABEL_10;
                  }
                  break;
                }
                if (v9 - 280 == v18 && (*(_BYTE*)(v23 + 336) & 1) != 0) {
                  if (v18 == 3720) {
                    goto LABEL_10;
                  }
                  break;
                }
                v24 = a1 + v18;
                if (v9 - 320 == v18 && (*(_BYTE*)(v24 + 376) & 1) != 0) {
                  if (v18 == 3680) {
                    goto LABEL_10;
                  }
                  break;
                }
                if (v9 - 360 == v18 && (*(_BYTE*)(v24 + 416) & 1) != 0) {
                  if (v18 == 3640) {
                    goto LABEL_10;
                  }
                  break;
                }
                v25 = a1 + v18;
                if (v9 - 400 == v18 && (*(_BYTE*)(v25 + 456) & 1) != 0) {
                  if (v18 == 3600) {
                    goto LABEL_10;
                  }
                  break;
                }
                if (v9 - 440 == v18 && (*(_BYTE*)(v25 + 496) & 1) != 0) {
                  if (v18 == 3560) {
                    goto LABEL_10;
                  }
                  break;
                }
                v26 = a1 + v18;
                if (v9 - 480 == v18 && (*(_BYTE*)(v26 + 536) & 1) != 0) {
                  if (v18 == 3520) {
                    goto LABEL_10;
                  }
                  break;
                }
                if (v9 - 520 == v18 && (*(_BYTE*)(v26 + 576) & 1) != 0) {
                  if (v18 == 3480) {
                    goto LABEL_10;
                  }
                  break;
                }
                v27 = a1 + v18;
                if (v9 - 560 == v18 && (*(_BYTE*)(v27 + 616) & 1) != 0) {
                  if (v18 == 3440) {
                    goto LABEL_10;
                  }
                  break;
                }
                if (v9 - 600 == v18 && (*(_BYTE*)(v27 + 656) & 1) != 0) {
                  if (v18 == 3400) {
                    goto LABEL_10;
                  }
                  break;
                }
                v28 = a1 + v18;
                if (v9 - 640 == v18 && (*(_BYTE*)(v28 + 696) & 1) != 0) {
                  if (v18 == 3360) {
                    goto LABEL_10;
                  }
                  break;
                }
                if (v9 - 680 == v18 && (*(_BYTE*)(v28 + 736) & 1) != 0) {
                  if (v18 == 3320) {
                    goto LABEL_10;
                  }
                  break;
                }
                v29 = a1 + v18;
                if (v9 - 720 == v18 && (*(_BYTE*)(v29 + 776) & 1) != 0) {
                  if (v18 == 3280) {
                    goto LABEL_10;
                  }
                  break;
                }
                if (v9 - 760 == v18 && (*(_BYTE*)(v29 + 816) & 1) != 0) {
                  if (v18 == 3240) {
                    goto LABEL_10;
                  }
                  break;
                }
                v18 += 800;
                if (v18 == 4000) {
                  goto LABEL_10;
                }
              }
              *(_BYTE*)v10 = 0;
            }
            else {
              if (*(_BYTE*)(a1 + 32) != 1) {
                *(_BYTE*)(a1 + 32) = 1;
              LABEL_9:
                *(_QWORD*)(a1 + 24) = v13;
                goto LABEL_10;
              }
              if (v13 < *(_QWORD*)(a1 + 24)) {
                goto LABEL_9;
              }
            }
          }
        LABEL_10:
          v7 = v8 + 80;
          v8 += 40;
          v9 += 40;
        } while (v8 != 4016);
        if (*(_BYTE*)(a1 + 32) == 1) {
          nn_os_SdkConditionVariableType_TimedWait_plt(a1 + 16, a1 + 12,
                                                       *(_QWORD*)(a1 + 24));
          v3 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
          if ((v3 & 1) == 0) {
            return nn_os_SdkMutexType_Unlock_plt(a1 + 12);
          }
          continue;
        }
        break;
      }
      nn_os_SdkConditionVariableType_Wait_plt(a1 + 16, a1 + 12);
      v3 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
    } while ((v3 & 1) != 0);
  }
  return nn_os_SdkMutexType_Unlock_plt(a1 + 12);
}

__int64 nn_audio_27bf20(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  nn_os_SdkMutexType_Lock_plt(a1 + 12);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1) & 1) != 0) {
    v2 = a1 + 40;
    v3 = 16;
    v4 = 0;
    atomic_store(1u, (unsigned int*)(a1 + 8));
    v5 = 56;
    do {
      v6 = a1 + v5;
      if (*(_BYTE*)(a1 + v5) == 1) {
        v7 = (***(__int64 (****)(_QWORD))(v6 + 32))(*(_QWORD*)(v6 + 32));
        v8 = *(_QWORD*)(a1 + 48);
        if (v8 == v2) {
        LABEL_94:
          nn_diag_detail_AbortImpl_plt_856170(v7);
          __udf(0);
        }
        v9 = a1 + 8 + v5;
        while (v8 != v9) {
          v8 = *(_QWORD*)(v8 + 8);
          if (v8 == v2) {
            goto LABEL_94;
          }
        }
        v10 = *(__int64**)(v6 + 16);
        v11 = 0;
        v12 = *v10;
        *(_QWORD*)(*(_QWORD*)v9 + 8LL) = v10;
        *v10 = *(_QWORD*)v9;
        *(_QWORD*)(v12 + 8) = v9;
        *(_QWORD*)v9 = v12;
        while (1) {
          v13 = a1 + v11;
          if (v4 == v11 && (*(_BYTE*)(v13 + 56) & 1) != 0) {
            break;
          }
          if (v4 - 40 == v11 && (*(_BYTE*)(v13 + 96) & 1) != 0) {
            if (v11 == 3960) {
              goto LABEL_3;
            }
            break;
          }
          v14 = a1 + v11;
          if (v4 - 80 == v11 && (*(_BYTE*)(v14 + 136) & 1) != 0) {
            if (v11 == 3920) {
              goto LABEL_3;
            }
            break;
          }
          if (v4 - 120 == v11 && (*(_BYTE*)(v14 + 176) & 1) != 0) {
            if (v11 == 3880) {
              goto LABEL_3;
            }
            break;
          }
          v15 = a1 + v11;
          if (v4 - 160 == v11 && (*(_BYTE*)(v15 + 216) & 1) != 0) {
            if (v11 == 3840) {
              goto LABEL_3;
            }
            break;
          }
          if (v4 - 200 == v11 && (*(_BYTE*)(v15 + 256) & 1) != 0) {
            if (v11 == 3800) {
              goto LABEL_3;
            }
            break;
          }
          v16 = a1 + v11;
          if (v4 - 240 == v11 && (*(_BYTE*)(v16 + 296) & 1) != 0) {
            if (v11 == 3760) {
              goto LABEL_3;
            }
            break;
          }
          if (v4 - 280 == v11 && (*(_BYTE*)(v16 + 336) & 1) != 0) {
            if (v11 == 3720) {
              goto LABEL_3;
            }
            break;
          }
          v17 = a1 + v11;
          if (v4 - 320 == v11 && (*(_BYTE*)(v17 + 376) & 1) != 0) {
            if (v11 == 3680) {
              goto LABEL_3;
            }
            break;
          }
          if (v4 - 360 == v11 && (*(_BYTE*)(v17 + 416) & 1) != 0) {
            if (v11 == 3640) {
              goto LABEL_3;
            }
            break;
          }
          v18 = a1 + v11;
          if (v4 - 400 == v11 && (*(_BYTE*)(v18 + 456) & 1) != 0) {
            if (v11 == 3600) {
              goto LABEL_3;
            }
            break;
          }
          if (v4 - 440 == v11 && (*(_BYTE*)(v18 + 496) & 1) != 0) {
            if (v11 == 3560) {
              goto LABEL_3;
            }
            break;
          }
          v19 = a1 + v11;
          if (v4 - 480 == v11 && (*(_BYTE*)(v19 + 536) & 1) != 0) {
            if (v11 == 3520) {
              goto LABEL_3;
            }
            break;
          }
          if (v4 - 520 == v11 && (*(_BYTE*)(v19 + 576) & 1) != 0) {
            if (v11 == 3480) {
              goto LABEL_3;
            }
            break;
          }
          v20 = a1 + v11;
          if (v4 - 560 == v11 && (*(_BYTE*)(v20 + 616) & 1) != 0) {
            if (v11 == 3440) {
              goto LABEL_3;
            }
            break;
          }
          if (v4 - 600 == v11 && (*(_BYTE*)(v20 + 656) & 1) != 0) {
            if (v11 == 3400) {
              goto LABEL_3;
            }
            break;
          }
          v21 = a1 + v11;
          if (v4 - 640 == v11 && (*(_BYTE*)(v21 + 696) & 1) != 0) {
            if (v11 == 3360) {
              goto LABEL_3;
            }
            break;
          }
          if (v4 - 680 == v11 && (*(_BYTE*)(v21 + 736) & 1) != 0) {
            if (v11 == 3320) {
              goto LABEL_3;
            }
            break;
          }
          v22 = a1 + v11;
          if (v4 - 720 == v11 && (*(_BYTE*)(v22 + 776) & 1) != 0) {
            if (v11 == 3280) {
              goto LABEL_3;
            }
            break;
          }
          if (v4 - 760 == v11 && (*(_BYTE*)(v22 + 816) & 1) != 0) {
            if (v11 == 3240) {
              goto LABEL_3;
            }
            break;
          }
          v11 += 800;
          if (v11 == 4000) {
            goto LABEL_3;
          }
        }
        *(_BYTE*)v6 = 0;
      }
    LABEL_3:
      v5 = v3 + 80;
      v3 += 40;
      v4 += 40;
    } while (v3 != 4016);
    nn_os_SdkConditionVariableType_Signal_plt(a1 + 16);
  }
  return nn_os_SdkMutexType_Unlock_plt(a1 + 12);
}

__int64 nn_audio_27c340(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  nn_os_SdkMutexType_Lock_plt(a1 + 12);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1) & 1) == 0) {
    v2 = a1 + 40;
    v3 = 16;
    v4 = 0;
    atomic_store(2u, (unsigned int*)(a1 + 8));
    v5 = 56;
    do {
      v6 = a1 + v5;
      if (*(_BYTE*)(a1 + v5) == 1) {
        v7 = (***(__int64 (****)(_QWORD))(v6 + 32))(*(_QWORD*)(v6 + 32));
        v8 = *(_QWORD*)(a1 + 48);
        if (v8 == v2) {
        LABEL_94:
          nn_diag_detail_AbortImpl_plt_856170(v7);
          __udf(0);
        }
        v9 = a1 + 8 + v5;
        while (v8 != v9) {
          v8 = *(_QWORD*)(v8 + 8);
          if (v8 == v2) {
            goto LABEL_94;
          }
        }
        v10 = *(__int64**)(v6 + 16);
        v11 = 0;
        v12 = *v10;
        *(_QWORD*)(*(_QWORD*)v9 + 8LL) = v10;
        *v10 = *(_QWORD*)v9;
        *(_QWORD*)(v12 + 8) = v9;
        *(_QWORD*)v9 = v12;
        while (1) {
          v13 = a1 + v11;
          if (v4 == v11 && (*(_BYTE*)(v13 + 56) & 1) != 0) {
            break;
          }
          if (v4 - 40 == v11 && (*(_BYTE*)(v13 + 96) & 1) != 0) {
            if (v11 == 3960) {
              goto LABEL_3;
            }
            break;
          }
          v14 = a1 + v11;
          if (v4 - 80 == v11 && (*(_BYTE*)(v14 + 136) & 1) != 0) {
            if (v11 == 3920) {
              goto LABEL_3;
            }
            break;
          }
          if (v4 - 120 == v11 && (*(_BYTE*)(v14 + 176) & 1) != 0) {
            if (v11 == 3880) {
              goto LABEL_3;
            }
            break;
          }
          v15 = a1 + v11;
          if (v4 - 160 == v11 && (*(_BYTE*)(v15 + 216) & 1) != 0) {
            if (v11 == 3840) {
              goto LABEL_3;
            }
            break;
          }
          if (v4 - 200 == v11 && (*(_BYTE*)(v15 + 256) & 1) != 0) {
            if (v11 == 3800) {
              goto LABEL_3;
            }
            break;
          }
          v16 = a1 + v11;
          if (v4 - 240 == v11 && (*(_BYTE*)(v16 + 296) & 1) != 0) {
            if (v11 == 3760) {
              goto LABEL_3;
            }
            break;
          }
          if (v4 - 280 == v11 && (*(_BYTE*)(v16 + 336) & 1) != 0) {
            if (v11 == 3720) {
              goto LABEL_3;
            }
            break;
          }
          v17 = a1 + v11;
          if (v4 - 320 == v11 && (*(_BYTE*)(v17 + 376) & 1) != 0) {
            if (v11 == 3680) {
              goto LABEL_3;
            }
            break;
          }
          if (v4 - 360 == v11 && (*(_BYTE*)(v17 + 416) & 1) != 0) {
            if (v11 == 3640) {
              goto LABEL_3;
            }
            break;
          }
          v18 = a1 + v11;
          if (v4 - 400 == v11 && (*(_BYTE*)(v18 + 456) & 1) != 0) {
            if (v11 == 3600) {
              goto LABEL_3;
            }
            break;
          }
          if (v4 - 440 == v11 && (*(_BYTE*)(v18 + 496) & 1) != 0) {
            if (v11 == 3560) {
              goto LABEL_3;
            }
            break;
          }
          v19 = a1 + v11;
          if (v4 - 480 == v11 && (*(_BYTE*)(v19 + 536) & 1) != 0) {
            if (v11 == 3520) {
              goto LABEL_3;
            }
            break;
          }
          if (v4 - 520 == v11 && (*(_BYTE*)(v19 + 576) & 1) != 0) {
            if (v11 == 3480) {
              goto LABEL_3;
            }
            break;
          }
          v20 = a1 + v11;
          if (v4 - 560 == v11 && (*(_BYTE*)(v20 + 616) & 1) != 0) {
            if (v11 == 3440) {
              goto LABEL_3;
            }
            break;
          }
          if (v4 - 600 == v11 && (*(_BYTE*)(v20 + 656) & 1) != 0) {
            if (v11 == 3400) {
              goto LABEL_3;
            }
            break;
          }
          v21 = a1 + v11;
          if (v4 - 640 == v11 && (*(_BYTE*)(v21 + 696) & 1) != 0) {
            if (v11 == 3360) {
              goto LABEL_3;
            }
            break;
          }
          if (v4 - 680 == v11 && (*(_BYTE*)(v21 + 736) & 1) != 0) {
            if (v11 == 3320) {
              goto LABEL_3;
            }
            break;
          }
          v22 = a1 + v11;
          if (v4 - 720 == v11 && (*(_BYTE*)(v22 + 776) & 1) != 0) {
            if (v11 == 3280) {
              goto LABEL_3;
            }
            break;
          }
          if (v4 - 760 == v11 && (*(_BYTE*)(v22 + 816) & 1) != 0) {
            if (v11 == 3240) {
              goto LABEL_3;
            }
            break;
          }
          v11 += 800;
          if (v11 == 4000) {
            goto LABEL_3;
          }
        }
        *(_BYTE*)v6 = 0;
      }
    LABEL_3:
      v5 = v3 + 80;
      v3 += 40;
      v4 += 40;
    } while (v3 != 4016);
    nn_os_SdkConditionVariableType_Signal_plt(a1 + 16);
  }
  return nn_os_SdkMutexType_Unlock_plt(a1 + 12);
}

__int64 nn_audio_27c760(unsigned int* a1)
{
  nn_os_SdkMutexType_Lock_plt(a1 + 3);
  if (((*(__int64 (**)(unsigned int*))(*(_QWORD*)a1 + 64LL))(a1) & 1) != 0) {
    atomic_store(0, a1 + 2);
    nn_os_SdkConditionVariableType_Signal_plt(a1 + 4);
  }
  return nn_os_SdkMutexType_Unlock_plt(a1 + 3);
}

__int64 nn_audio_27c7c0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  nn_os_SdkMutexType_Lock_plt(a1 + 12);
  v6 = nn_diag_detail_NotNullImpl_plt(a3);
  if ((v6 & 1) == 0) {
    v6 = nn_diag_detail_AbortImpl_plt_856170(v6);
    goto LABEL_50;
  }
  v7 = *(_QWORD*)(a1 + 48);
  v8 = a1 + 40;
  if (v7 != a1 + 40) {
    v9 = 100;
    do {
      v7 = *(_QWORD*)(v7 + 8);
      --v9;
    } while (v7 != v8);
    if (v9 == 0) {
    LABEL_50:
      nn_diag_detail_AbortImpl_plt_856170(v6);
      __udf(0);
    }
  }
  v10 = a1 + 56;
  v11 = 0;
  while (*(_BYTE*)(a1 + v11 + 56) == 1) {
    if (*(_BYTE*)(a1 + v11 + 96) != 1) {
      v11 += 40;
      break;
    }
    if (*(_BYTE*)(a1 + v11 + 136) != 1) {
      v11 += 80;
      break;
    }
    if (*(_BYTE*)(a1 + v11 + 176) != 1) {
      v11 += 120;
      break;
    }
    if (*(_BYTE*)(a1 + v11 + 216) != 1) {
      v11 += 160;
      break;
    }
    if (*(_BYTE*)(a1 + v11 + 256) != 1) {
      v11 += 200;
      break;
    }
    if (*(_BYTE*)(a1 + v11 + 296) != 1) {
      v11 += 240;
      break;
    }
    if (*(_BYTE*)(a1 + v11 + 336) != 1) {
      v11 += 280;
      break;
    }
    if (*(_BYTE*)(a1 + v11 + 376) != 1) {
      v11 += 320;
      break;
    }
    if (*(_BYTE*)(a1 + v11 + 416) != 1) {
      v11 += 360;
      break;
    }
    if (*(_BYTE*)(a1 + v11 + 456) != 1) {
      v11 += 400;
      break;
    }
    if (*(_BYTE*)(a1 + v11 + 496) != 1) {
      v11 += 440;
      break;
    }
    if (*(_BYTE*)(a1 + v11 + 536) != 1) {
      v11 += 480;
      break;
    }
    if (*(_BYTE*)(a1 + v11 + 576) != 1) {
      v11 += 520;
      break;
    }
    if (*(_BYTE*)(a1 + v11 + 616) != 1) {
      v11 += 560;
      break;
    }
    if (*(_BYTE*)(a1 + v11 + 656) != 1) {
      v11 += 600;
      break;
    }
    if (*(_BYTE*)(a1 + v11 + 696) != 1) {
      v11 += 640;
      break;
    }
    if (*(_BYTE*)(a1 + v11 + 736) != 1) {
      v11 += 680;
      break;
    }
    if (*(_BYTE*)(a1 + v11 + 776) != 1) {
      v11 += 720;
      break;
    }
    if (*(_BYTE*)(a1 + v11 + 816) != 1) {
      v11 += 760;
      break;
    }
    v11 += 800;
    if (v11 == 4000) {
      break;
    }
  }
  v12 = v10 + v11;
  v13 = v10 + v11 + 8;
  *(_BYTE*)v12 = 0;
  *(_QWORD*)(v12 + 8) = v13;
  *(_QWORD*)(v12 + 16) = v13;
  v14 = nn_os_GetSystemTick_plt(v6);
  v15 = nn_os_ConvertToTimeSpan_plt(v14);
  v16 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(v12 + 24) = v15 + a2;
  *(_QWORD*)(v12 + 32) = a3;
  *(_BYTE*)v12 = 1;
  v17 = *(_QWORD*)(v12 + 8);
  *(_QWORD*)(v12 + 8) = v16;
  *(_QWORD*)(v17 + 8) = v8;
  *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8LL) = v13;
  *(_QWORD*)(a1 + 40) = v17;
  nn_os_SdkConditionVariableType_Signal_plt(a1 + 16);
  return nn_os_SdkMutexType_Unlock_plt(a1 + 12);
}

__int64 nn_audio_27ca60(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  v4 = nn_os_SdkMutexType_Lock_plt(a1 + 12);
  v5 = a1 + 40;
  v6 = 16;
  v7 = 56;
  v8 = 0;
  do {
    v9 = a1 + v7;
    if (*(_BYTE*)(a1 + v7) == 1 && *(_QWORD*)(v9 + 32) == a2) {
      v10 = *(_QWORD*)(a1 + 48);
      if (v10 == v5) {
      LABEL_93:
        nn_diag_detail_AbortImpl_plt_856170(v4);
        __udf(0);
      }
      v11 = a1 + 8 + v7;
      while (v10 != v11) {
        v10 = *(_QWORD*)(v10 + 8);
        if (v10 == v5) {
          goto LABEL_93;
        }
      }
      v12 = *(__int64**)(v9 + 16);
      v13 = 0;
      v14 = *v12;
      *(_QWORD*)(*(_QWORD*)v11 + 8LL) = v12;
      v4 = v8 - 600;
      *v12 = *(_QWORD*)v11;
      *(_QWORD*)(v14 + 8) = v11;
      *(_QWORD*)v11 = v14;
      while (1) {
        v15 = a1 + v13;
        if (v8 == v13 && (*(_BYTE*)(v15 + 56) & 1) != 0) {
          break;
        }
        if (v8 - 40 == v13 && (*(_BYTE*)(v15 + 96) & 1) != 0) {
          if (v13 == 3960) {
            goto LABEL_2;
          }
          break;
        }
        v16 = a1 + v13;
        if (v8 - 80 == v13 && (*(_BYTE*)(v16 + 136) & 1) != 0) {
          if (v13 == 3920) {
            goto LABEL_2;
          }
          break;
        }
        if (v8 - 120 == v13 && (*(_BYTE*)(v16 + 176) & 1) != 0) {
          if (v13 == 3880) {
            goto LABEL_2;
          }
          break;
        }
        v17 = a1 + v13;
        if (v8 - 160 == v13 && (*(_BYTE*)(v17 + 216) & 1) != 0) {
          if (v13 == 3840) {
            goto LABEL_2;
          }
          break;
        }
        if (v8 - 200 == v13 && (*(_BYTE*)(v17 + 256) & 1) != 0) {
          if (v13 == 3800) {
            goto LABEL_2;
          }
          break;
        }
        v18 = a1 + v13;
        if (v8 - 240 == v13 && (*(_BYTE*)(v18 + 296) & 1) != 0) {
          if (v13 == 3760) {
            goto LABEL_2;
          }
          break;
        }
        if (v8 - 280 == v13 && (*(_BYTE*)(v18 + 336) & 1) != 0) {
          if (v13 == 3720) {
            goto LABEL_2;
          }
          break;
        }
        v19 = a1 + v13;
        if (v8 - 320 == v13 && (*(_BYTE*)(v19 + 376) & 1) != 0) {
          if (v13 == 3680) {
            goto LABEL_2;
          }
          break;
        }
        if (v8 - 360 == v13 && (*(_BYTE*)(v19 + 416) & 1) != 0) {
          if (v13 == 3640) {
            goto LABEL_2;
          }
          break;
        }
        v20 = a1 + v13;
        if (v8 - 400 == v13 && (*(_BYTE*)(v20 + 456) & 1) != 0) {
          if (v13 == 3600) {
            goto LABEL_2;
          }
          break;
        }
        if (v8 - 440 == v13 && (*(_BYTE*)(v20 + 496) & 1) != 0) {
          if (v13 == 3560) {
            goto LABEL_2;
          }
          break;
        }
        v21 = a1 + v13;
        if (v8 - 480 == v13 && (*(_BYTE*)(v21 + 536) & 1) != 0) {
          if (v13 == 3520) {
            goto LABEL_2;
          }
          break;
        }
        if (v8 - 520 == v13 && (*(_BYTE*)(v21 + 576) & 1) != 0) {
          if (v13 == 3480) {
            goto LABEL_2;
          }
          break;
        }
        v22 = a1 + v13;
        if (v8 - 560 == v13 && (*(_BYTE*)(v22 + 616) & 1) != 0) {
          if (v13 == 3440) {
            goto LABEL_2;
          }
          break;
        }
        if (v4 == v13 && (*(_BYTE*)(v22 + 656) & 1) != 0) {
          if (v13 == 3400) {
            goto LABEL_2;
          }
          break;
        }
        v23 = a1 + v13;
        if (v8 - 640 == v13 && (*(_BYTE*)(v23 + 696) & 1) != 0) {
          if (v13 == 3360) {
            goto LABEL_2;
          }
          break;
        }
        if (v8 - 680 == v13 && (*(_BYTE*)(v23 + 736) & 1) != 0) {
          if (v13 == 3320) {
            goto LABEL_2;
          }
          break;
        }
        v24 = a1 + v13;
        if (v8 - 720 == v13 && (*(_BYTE*)(v24 + 776) & 1) != 0) {
          if (v13 == 3280) {
            goto LABEL_2;
          }
          break;
        }
        if (v8 - 760 == v13 && (*(_BYTE*)(v24 + 816) & 1) != 0) {
          if (v13 == 3240) {
            goto LABEL_2;
          }
          break;
        }
        v13 += 800;
        if (v13 == 4000) {
          goto LABEL_2;
        }
      }
      *(_BYTE*)v9 = 0;
    }
  LABEL_2:
    v7 = v6 + 80;
    v6 += 40;
    v8 += 40;
  } while (v6 != 4016);
  nn_os_SdkConditionVariableType_Signal_plt(a1 + 16);
  return nn_os_SdkMutexType_Unlock_plt(a1 + 12);
}

__int64 nn_audio_27ce60(__int64 a1)
{
  __int64 v2;
  unsigned int v3;

  nn_os_SdkMutexType_Lock_plt(a1 + 12);
  v2 = *(_QWORD*)(a1 + 48);
  if (v2 == a1 + 40) {
    v3 = 0;
  }
  else {
    v3 = 0;
    do {
      v2 = *(_QWORD*)(v2 + 8);
      ++v3;
    } while (v2 != a1 + 40);
  }
  nn_os_SdkMutexType_Unlock_plt(a1 + 12);
  return v3;
}

bool nn_audio_27ced0(__int64 a1)
{
  unsigned int v1;

  v1 = atomic_load((unsigned int*)(a1 + 8));
  return v1 != 1;
}

bool nn_audio_27cef0(__int64 a1)
{
  unsigned int v1;

  v1 = atomic_load((unsigned int*)(a1 + 8));
  return v1 == 2;
}

__int64 nn_audio_27cf20(__int64 a1, __int64 a2)
{
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;

  v4 = nn_os_SdkMutexType_Lock_plt(a1 + 12);
  v5 = *(_QWORD**)(a1 + 48);
  if (v5 == (_QWORD*)(a1 + 40)) {
  LABEL_4:
    v6 = 0;
  }
  else {
    while (v5[3] != a2) {
      v5 = (_QWORD*)v5[1];
      if (v5 == (_QWORD*)(a1 + 40)) {
        goto LABEL_4;
      }
    }
    v7 = nn_os_GetSystemTick_plt(v4);
    v6 = v5[2] - nn_os_ConvertToTimeSpan_plt(v7);
  }
  nn_os_SdkMutexType_Unlock_plt(a1 + 12);
  return v6;
}

__int64 nn_audio_dpm_CreateProcess_2ae2b0(__int64 a1, __int64 a2,
                                          unsigned __int64 a3, __int64 a4,
                                          unsigned __int64 a5)
{
  __int64 v10;
  __int64 v11;

  v10 = nn_diag_detail_NotNullImpl_plt(a1);
  if ((v10 & 1) == 0) {
    v11 = nn_diag_detail_AbortImpl_plt_856170(v10);
    goto LABEL_9;
  }
  v11 = nn_diag_detail_NotNullImpl_plt(a2);
  if ((v11 & 1) == 0) {
  LABEL_9:
    v11 = nn_diag_detail_AbortImpl_plt_856170(v11);
  }
  else if ((a2 & 0xFFF) == 0) {
    if (a3 <= 0xFFF) {
    LABEL_11:
      v11 = nn_diag_detail_AbortImpl_plt_856170(v11);
    }
    else if ((a3 & 0xFFF) == 0) {
      if (a5 >= 0x101) {
        goto LABEL_13;
      }
      return nn_audio_dpm_detail_CreateProcess_plt(a1, a2, a3, a4, a5);
    }
    v11 = nn_diag_detail_AbortImpl_plt_856170(v11);
  LABEL_13:
    nn_diag_detail_AbortImpl_plt_856170(v11);
    __udf(0);
  }
  v11 = nn_diag_detail_AbortImpl_plt_856170(v11);
  goto LABEL_11;
}

__int64 nn_audio_dpm_WaitProcess(__int64 a1)
{
  __int64 v2;

  v2 = nn_diag_detail_NotNullImpl_plt(a1);
  if ((v2 & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v2);
  }
  if (*(_BYTE*)(a1 + 2) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v2);
  }
  return nn_audio_dpm_detail_WaitProcess_plt(a1);
}

__int64 nn_audio_dpm_TerminateProcess(__int64 a1)
{
  __int64 v2;

  v2 = nn_diag_detail_NotNullImpl_plt(a1);
  if ((v2 & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v2);
  }
  if (*(_BYTE*)(a1 + 2) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v2);
  }
  return nn_audio_dpm_detail_TerminateProcess_plt(a1);
}

__int64 nn_audio_dpm_detail_Initialize(void* this_)
{
  int v1;
  __int64 v3;
  int v4;
  __int64* v5;

  nn_os_SdkMutexType_Lock_plt(&SdkData_f28470);
  v1 = SdkData_f28474++;
  if (v1 == 0) {
    nn_audio_sysdev_server_CreateSessionManagerByHipc_plt((void*)(&v3));
    v5 = &SdkData_f28460;
    v4 = (*(__int64 (**)(__int64, __int64**))(*(_QWORD*)v3 + 40LL))(v3, &v5);
    if (v4 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v4);
    }
    if (v3 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
    }
    v5 = &SdkData_f28468;
    LODWORD(v5) = (*(__int64 (**)(__int64, __int64**))(
        *(_QWORD*)SdkData_f28460 + 32LL))(SdkData_f28460, &v5);
    if ((_DWORD)v5 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v5);
    }
  }
  return nn_os_SdkMutexType_Unlock_plt(&SdkData_f28470);
}

__int64 nn_audio_dpm_detail_Finalize(void* this_)
{
  __int64 v1;
  __int64 v2;

  nn_os_SdkMutexType_Lock_plt(&SdkData_f28470);
  if (--SdkData_f28474 != 0) {
    return nn_os_SdkMutexType_Unlock_plt(&SdkData_f28470);
  }
  v1 = SdkData_f28468;
  SdkData_f28468 = 0;
  if (v1 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 8LL))(v1);
  }
  v2 = SdkData_f28460;
  SdkData_f28460 = 0;
  if (v2 == 0) {
    return nn_os_SdkMutexType_Unlock_plt(&SdkData_f28470);
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    return nn_os_SdkMutexType_Unlock_plt(&SdkData_f28470);
  }
}

__int64 nn_audio_dpm_detail_CreateProcess(__int64 a1, void* this_, void* a3,
                                          __int64 a4, __int64 a5)
{
  __int64 v10;
  unsigned int v11;
  _QWORD v13[2];
  _QWORD v14[8];
  struct {
    unsigned int v15;
    char v16;
  } v15_;

  nn_os_FlushDataCache_plt(this_, a3, (unsigned __int64)a3);
  memset(v14, 0, sizeof(v14));
  LODWORD(v13[0]) = nn_os_CreateTransferMemory_plt(v14, this_, a3, 0);
  if (LODWORD(v13[0]) != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v13);
  }
  v13[0] = a4;
  v13[1] = a5;
  v10 = SdkData_f28468;
  if (SdkData_f28468 != 0) {
    (**(void (***)(__int64))SdkData_f28468)(SdkData_f28468);
  }
  v15_.v15 = nn_os_DetachTransferMemory_plt(v14);
  v15_.v16 = 1;
  v11 = (*(__int64 (**)(__int64, __int64, unsigned int*, _QWORD, _QWORD*))(
      *(_QWORD*)v10 + 32LL))(v10, a1, &v15_.v15, (unsigned int)a3, v13);
  if (v15_.v16 == 1) {
    nn_os_CloseNativeHandle_plt(v15_.v15);
  }
  (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
  if (LOBYTE(v14[0]) != 0) {
    nn_os_DestroyTransferMemory_plt(v14);
  }
  return v11;
}

__int64 nn_audio_dpm_detail_WaitProcess(unsigned int* a1)
{
  __int64 v2;
  int v4;

  v2 = SdkData_f28468;
  if (SdkData_f28468 != 0) {
    (**(void (***)(__int64))SdkData_f28468)(SdkData_f28468);
  }
  v4 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v2 + 40LL))(v2, *a1);
  if (v4 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v4);
    __udf(0);
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
}

__int64 nn_audio_dpm_detail_TerminateProcess(unsigned int* a1)
{
  __int64 v2;
  __int64 result;
  int v4;

  v2 = SdkData_f28468;
  if (SdkData_f28468 != 0) {
    (**(void (***)(__int64))SdkData_f28468)(SdkData_f28468);
  }
  v4 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v2 + 48LL))(v2, *a1);
  if (v4 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v4);
    __udf(0);
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  *((_BYTE*)a1 + 2) = 0;
  return result;
}

__int64 nn_audio_2ae800()
{
  SdkData_f28468 = 0;
  SdkData_f28470_alt1 = 0;
  SdkData_f28460 = 0;
  return fw_rtld_RegisterCrtDestructor();
}

__int64 nn_audio_karaoke_InitializeKaraokeInputDevicesImpl(void* this_)
{
  void* v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64* v6;

  nn_os_SdkMutexType_Lock_plt(&SdkData_f2847c);
  v5 = 0;
  nn_audio_CreateUserClientSessionByHipc_plt((void*)(&v5));
  v4 = 0;
  v6 = &v4;
  v1 = (void*)(*(__int64 (**)(__int64, __int64**))(*(_QWORD*)v5 + 64LL))(v5,
                                                                         &v6);
  LODWORD(v6) = (_DWORD)v1;
  if ((_DWORD)v1 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v6);
  }
  v2 = nn_applet_GetAppletResourceUserId_plt(v1);
  v6 = &SdkData_f28480;
  LODWORD(v6) = (*(__int64 (**)(__int64, __int64**, __int64, __int64))(
      *(_QWORD*)v4 + 32LL))(v4, &v6, v2, 1);
  if ((_DWORD)v6 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v6);
  }
  LODWORD(v6) = (*(__int64 (**)(__int64))(*(_QWORD*)SdkData_f28480 + 32LL))(
      SdkData_f28480);
  if ((_DWORD)v6 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v6);
  }
  nn_audio_karaoke_g_IsKaraokeInputDevicesInitialized = 1;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  return nn_os_SdkMutexType_Unlock_plt(&SdkData_f2847c);
}

__int64 nn_audio_karaoke_FinalizeKaraokeInputDevicesImpl(void* this_)
{
  __int64 v1;
  int v3;

  nn_os_SdkMutexType_Lock_plt(&SdkData_f2847c);
  v3 = (*(__int64 (**)(__int64))(*(_QWORD*)SdkData_f28480 + 40LL))(
      SdkData_f28480);
  if (v3 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v3);
  }
  v1 = SdkData_f28480;
  SdkData_f28480 = 0;
  if (v1 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 8LL))(v1);
  }
  nn_audio_karaoke_g_IsKaraokeInputDevicesInitialized = 0;
  return nn_os_SdkMutexType_Unlock_plt(&SdkData_f2847c);
}

__int64 nn_audio_karaoke_ListActiveVirtualKaraokeInputDevicesImpl(__int64 a1,
                                                                  int a2)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD v15[2];
  _BYTE v16[512];
  int v17;
  int v18;

  nn_os_SdkMutexType_Lock_plt(&SdkData_f2847c);
  memset_plt((void*)v16, nullptr, 512);
  v15[0] = v16;
  v15[1] = 512;
  v18 = 0;
  v17 = (*(__int64 (**)(__int64, int*, _QWORD*))(
      *(_QWORD*)SdkData_f28480 + 48LL))(SdkData_f28480, &v18, v15);
  if (v17 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v17);
  }
  if (a2 >= v18) {
    a2 = v18;
  }
  if (a2 >= 1) {
    v5 = v15[0];
    v6 = a2 & 7;
    if ((unsigned int)a2 < 8) {
      v7 = 0;
      if ((a2 & 7) == 0) {
        goto LABEL_13;
      }
      goto LABEL_11;
    }
    v8 = 0;
    v9 = a1;
    v10 = v15[0];
    do {
      memcpy_plt(v9, v10, 256);
      memcpy_plt(v9 + 256, v10 + 256, 256);
      memcpy_plt(v9 + 512, v10 + 512, 256);
      memcpy_plt(v9 + 768, v10 + 768, 256);
      memcpy_plt(v9 + 1024, v10 + 1024, 256);
      memcpy_plt(v9 + 1280, v10 + 1280, 256);
      memcpy_plt(v9 + 1536, v10 + 1536, 256);
      memcpy_plt(v9 + 1792, v10 + 1792, 256);
      v8 -= 8;
      v10 += 2048;
      v9 += 2048;
    } while (-(__int64)(a2 & 0x7FFFFFF8) != v8);
    v7 = -v8;
    if ((a2 & 7) != 0) {
    LABEL_11:
      v11 = v7 << 8;
      v12 = a1 + v11;
      v13 = v5 + v11;
      do {
        memcpy_plt(v12, v13, 256);
        v12 += 256;
        v13 += 256;
        --v6;
      } while (v6 != 0);
    }
  }
LABEL_13:
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f2847c);
  return (unsigned int)a2;
}

__int64 nn_audio_karaoke_GetKaraokeInputDeviceStatusImpl(_QWORD* a1, __int64 a2)
{
  _QWORD v5[2];
  int v6;
  __int64 v7;

  nn_os_SdkMutexType_Lock_plt(&SdkData_f2847c);
  v7 = 0;
  v5[0] = a2;
  v5[1] = 256;
  v6 = (*(__int64 (**)(__int64, __int64*, _QWORD*))(
      *(_QWORD*)SdkData_f28480 + 56LL))(SdkData_f28480, &v7, v5);
  if (v6 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v6);
  }
  *a1 = v7;
  return nn_os_SdkMutexType_Unlock_plt(&SdkData_f2847c);
}

__int64 nn_audio_karaoke_SetKaraokeInputDeviceGainImpl(__int64 a1, float a2)
{

#pragma clang fp contract(off)
  _QWORD v5[2];
  int v6;

  nn_os_SdkMutexType_Lock_plt(&SdkData_f2847c);
  v5[0] = a1;
  v5[1] = 256;
  v6 = (*(__int64 (**)(__int64, _QWORD*, float))(*(_QWORD*)SdkData_f28480 +
                                                 64LL))(SdkData_f28480, v5, a2);
  if (v6 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v6);
  }
  return nn_os_SdkMutexType_Unlock_plt(&SdkData_f2847c);
}

float nn_audio_karaoke_GetKaraokeInputDeviceGainImpl(__int64 a1)
{

#pragma clang fp contract(off)
  float v2;
  _QWORD v4[2];
  int v5;
  float v6;

  nn_os_SdkMutexType_Lock_plt(&SdkData_f2847c);
  v6 = 0x0.0p+0f;
  v4[0] = a1;
  v4[1] = 256;
  v5 = (*(__int64 (**)(__int64, float*, _QWORD*))(
      *(_QWORD*)SdkData_f28480 + 72LL))(SdkData_f28480, &v6, v4);
  if (v5 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v5);
  }
  v2 = v6;
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f2847c);
  return v2;
}

__int64 nn_audio_2af670()
{
  __int64 result;

  result = nn_os_GetSystemTickFrequency_plt();
  if (result != 31250000) {
    nn_diag_detail_AbortImpl_plt_856170(result);
    __udf(0);
  }
  return result;
}

#pragma GCC visibility pop
