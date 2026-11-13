#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
    nn_streamplay_detail_GetUserService_plt(PSEUDO_X8, _QWORD);
__int64 nn_audio_IsDeviceOutputVolumeAutoTuneModeEnabled_plt(_QWORD);
__int64
nn_audio_SetCallbackFuncForSetAudioDeviceOutputVolume_plt(__int64,
                                                          unsigned __int64);
__int64 nn_audio_SetCallbackFuncForSetDeviceOutputVolumeAutoTuneModeEnabled_plt(
    __int64, unsigned __int64);
__int64 nn_diag_detail_AbortImpl_plt_858db0(__int64);
__int64 nn_diag_detail_NotNullImpl_plt(unsigned __int64);
__int64 nn_os_AttachReadableHandleToSystemEvent_plt(__int64, __int64, __int64,
                                                    unsigned int);
__int64 nn_os_CloseNativeHandle_plt(unsigned int);
__int64 nn_os_DestroySystemEvent_plt(__int64);
__int64 nn_os_SdkMutexType_Lock_plt(__int64);
__int64 nn_os_SdkMutexType_Unlock_plt(__int64);
__int64 nn_streamplay_767ae0();
__int64 nn_streamplay_767c00();
__int64
nn_streamplay_detail_CalculateGuestCountFromMemorySize_plt(int, unsigned __int8,
                                                           unsigned __int8);
extern __int64 SdkData_10556d8;
extern __int64 SdkData_10556e0;
extern __int64 SdkData_e89230;
extern char SdkData_10556e8;
extern void (*SdkData_e89238[13])();
extern void (*SdkData_e89240[12])();
extern void (*SdkData_e89248[11])();
extern void (*SdkData_e89250[10])();
float nn_audio_GetAudioDeviceOutputVolume_plt(__int64);
int nn_streamplay_detail_IsAbortNeeded_plt(bool);
void nn_diag_detail_AbortImpl_plt_856170();
__int64 nn_streamplay_764aa0(unsigned int a1, unsigned int a2,
                             unsigned __int64 a3, __int64 a4);

__int64 nn_streamplay_764aa0(unsigned int a1, unsigned int a2,
                             unsigned __int64 a3, __int64 a4)
{
  __int64 v8;
  void(__attribute__((noreturn)) * v9)();
  __int64 v10;
  unsigned int v11;
  unsigned int v12;
  __int64 v13;
  void(__attribute__((noreturn)) * v14)();
  __int64 v15;
  __int64 v16;
  __int64 v18;
  struct {
    __int64 v19;
    char gap16_[28];
    int v20;
  } v19_;

  if ((nn_diag_detail_NotNullImpl_plt(a3) & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170();
  }
  if ((a3 & 0xFFF) != 0) {
    nn_diag_detail_AbortImpl_plt_856170();
  }
  v8 = nn_os_SdkMutexType_Lock_plt(SdkData_e89230);
  v9 = SdkData_e89238[0];
  if (*(_BYTE*)SdkData_e89238[0] == 1) {
    nn_diag_detail_AbortImpl_plt_856170();
  }
  *(_QWORD*)SdkData_e89240[0] = a3;
  *(_QWORD*)SdkData_e89248[0] = a4;
  nn_streamplay_detail_GetUserService_plt((void*)(&v19_.v19), v8);
  v10 = v19_.v19;
  v11 = nn_streamplay_detail_CalculateGuestCountFromMemorySize_plt(a4, a1, a2);
  v12 = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)v10 + 40LL))(v10, 0, a1, a2, v11);
  if (v19_.v19 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19_.v19 + 8LL))(v19_.v19);
  }
  v13 = nn_streamplay_detail_IsAbortNeeded_plt(v12);
  if ((v13 & 1) != 0) {
    LODWORD(v19_.v19) = v12;
    if (v12 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0((__int64)&v19_.v19);
    }
  }
  else if (v12 != 0) {
    goto LABEL_23;
  }
  v14 = SdkData_e89250[0];
  if (*((_BYTE*)SdkData_e89250[0] + (unsigned __int64)((__int64*)0x30LL)) ==
          1 &&
      *((_BYTE*)SdkData_e89250[0] + (unsigned __int64)((__int64*)0x28LL)) !=
          0) {
    v13 = nn_os_DestroySystemEvent_plt((__int64)SdkData_e89250[0]);
  }
  *((_BYTE*)((__int64*)0x28LL) + (_QWORD)v14) = 0;
  v18 = 0;
  *((_BYTE*)((__int64*)0x30LL) + (_QWORD)v14) = 1;
  nn_streamplay_detail_GetUserService_plt((void*)(&v19_.v19), v13);
  v19_.v20 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v19_.v19 + 80LL))(
      v19_.v19, &v18);
  if (v19_.v20 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0((__int64)&v19_.v20);
  }
  if (v19_.v19 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19_.v19 + 8LL))(v19_.v19);
  }
  if (*((_BYTE*)((__int64*)0x28LL) + (_QWORD)v14) != 0) {
    nn_diag_detail_AbortImpl_plt_856170();
  }
  v15 = nn_os_AttachReadableHandleToSystemEvent_plt(
      (__int64)SdkData_e89250[0], (unsigned int)v18, BYTE4(v18), 0);
  BYTE4(v18) = 0;
  LODWORD(v18) = 0;
  SdkData_10556d8 = 0;
  SdkData_10556e0 = 0;
  SdkData_10556e8 = 1;
  LOBYTE(SdkData_10556d8) =
      nn_audio_IsDeviceOutputVolumeAutoTuneModeEnabled_plt(v15) & 1;
  HIDWORD(SdkData_10556d8) = nn_audio_GetAudioDeviceOutputVolume_plt(
      (__int64)"AudioBuiltInSpeakerOutput");
  LODWORD(SdkData_10556e0) =
      nn_audio_GetAudioDeviceOutputVolume_plt((__int64)"AudioTvOutput");
  HIDWORD(SdkData_10556e0) =
      nn_audio_GetAudioDeviceOutputVolume_plt((__int64)"AudioExternalOutput");
  nn_audio_SetCallbackFuncForSetAudioDeviceOutputVolume_plt(
      (__int64)nn_streamplay_767ae0, 0);
  v16 = nn_audio_SetCallbackFuncForSetDeviceOutputVolumeAutoTuneModeEnabled_plt(
      (__int64)nn_streamplay_767c00, 0);
  nn_streamplay_detail_GetUserService_plt((void*)(&v19_.v19), v16);
  v19_.v20 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v19_.v19 + 400LL))(
      v19_.v19, &SdkData_10556d8);
  if (v19_.v20 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0((__int64)&v19_.v20);
  }
  if (v19_.v19 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19_.v19 + 8LL))(v19_.v19);
  }
  *(_BYTE*)v9 = 1;
  if (BYTE4(v18) == 1) {
    nn_os_CloseNativeHandle_plt(v18);
  }
  v12 = 0;
LABEL_23:
  nn_os_SdkMutexType_Unlock_plt(SdkData_e89230);
  return v12;
}

#pragma GCC visibility pop
