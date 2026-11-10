#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_86b360(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 fw_rtld_RegisterCrtDestructor();
__int64 lm_api_4a1b50_alt1() __asm__("lm_api_4a1b50");
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_diag_detail_GetProcessNamePointer_plt(_QWORD, _QWORD);
__int64
    nn_lm_detail_LogPacketTransmitterBase_Destroy_LogPacketTransmitterBase_plt(
        _QWORD);
__int64 nn_lm_detail_LogPacketTransmitter_LogPacketTransmitter_plt(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD);
__int64 nn_lm_detail_LogPacketTransmitter_PushFileName_plt(_QWORD, _QWORD,
                                                           _QWORD);
__int64 nn_lm_detail_LogPacketTransmitter_PushFunctionName_plt(_QWORD, _QWORD,
                                                               _QWORD);
__int64 nn_lm_detail_LogPacketTransmitter_PushLineNumber_plt(_QWORD, _QWORD);
__int64 nn_lm_detail_LogPacketTransmitter_PushModuleName_plt(_QWORD, _QWORD,
                                                             _QWORD);
__int64 nn_lm_detail_LogPacketTransmitter_PushProcessName_plt(_QWORD, _QWORD,
                                                              _QWORD);
__int64 nn_lm_detail_LogPacketTransmitter_PushTextLog_plt(_QWORD, _QWORD,
                                                          _QWORD);
__int64 nn_lm_detail_LogPacketTransmitter_PushThreadName_plt(_QWORD, _QWORD,
                                                             _QWORD);
__int64 nn_lm_detail_LogPacketTransmitter_PushUserSystemClock_plt(_QWORD,
                                                                  _QWORD);
__int64 nn_lm_detail_ShimLibraryGlobal_ShimLibraryGlobal(__int64*);
__int64 nn_lm_impl_SharedQueue_Producer_AttachPopEventReadableHandle_plt(
    _QWORD, _QWORD, _QWORD);
__int64 nn_lm_impl_SharedQueue_Producer_AttachPushEventWritableHandle_plt(
    _QWORD, _QWORD, _QWORD);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_ConvertToTimeSpan_plt(_QWORD);
__int64 nn_os_DestroySharedMemory_plt(_QWORD);
__int64 nn_os_DestroySystemEvent_plt(_QWORD);
__int64 nn_os_GetCurrentThread_plt(_QWORD);
__int64 nn_os_GetSystemTick_plt(_QWORD);
__int64 nn_os_GetThreadNamePointer_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_util_IsValidUtf8String_plt(_QWORD, _QWORD);
__int64 strlen_plt(_QWORD);
extern _UNKNOWN SdkData_f435d8;
extern _UNKNOWN SdkData_f436c0;
extern __int64 SdkData_e88160;
extern void (*SdkData_e88168[551])();
__int64 lm_api_4a1290(unsigned int* a1, __int64 a2);
__int64 lm_api_4a19d0(__int64 a1);
__int64 lm_api_4a1b50(__int64 a1, __int64 a2);
__int64 nn_lm_HashedLogger_HashedLogger(void* this_);

__int64 lm_api_4a1290(unsigned int* a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  const char* v15;
  __int64 v16;
  const char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  const char* v23;
  __int64 v24;
  __int64 v26;
  __int64 v27;
  _QWORD v28[7];

  nn_os_SdkMutexType_Lock_plt(&SdkData_f435d8);
  v4 = a1[8];
  v5 = a1[9];
  v6 = *(_BYTE*)(a2 + 17);
  v7 = *(unsigned __int8*)(a2 + 16);
  memset(v28, 0, sizeof(v28));
  v8 = nn_lm_detail_LogPacketTransmitter_LogPacketTransmitter_plt(
      v28, &SdkData_f436c0, 1024, lm_api_4a1b50_alt1, v4, v5, 0, v7, v6);
  if (*(_BYTE*)(a2 + 16) != 1) {
    goto LABEL_19;
  }
  v9 = nn_os_GetSystemTick_plt(v8);
  v10 = nn_os_ConvertToTimeSpan_plt(v9);
  nn_lm_detail_LogPacketTransmitter_PushUserSystemClock_plt(v28,
                                                            v10 / 1000000000);
  nn_lm_detail_LogPacketTransmitter_PushLineNumber_plt(v28, *a1);
  v11 = *((_QWORD*)a1 + 1);
  v12 = strlen_plt(v11);
  if (v12 != 0 && (nn_util_IsValidUtf8String_plt(v11, v12) & 1) == 0) {
    nn_lm_detail_LogPacketTransmitter_PushFileName_plt(
        v28, "(Invalid UTF8 string)", 21);
    v13 = *((_QWORD*)a1 + 2);
    v14 = strlen_plt(v13);
    if (v14 == 0) {
      goto LABEL_8;
    }
  }
  else {
    nn_lm_detail_LogPacketTransmitter_PushFileName_plt(v28, v11, v12);
    v13 = *((_QWORD*)a1 + 2);
    v14 = strlen_plt(v13);
    if (v14 == 0) {
    LABEL_8:
      nn_lm_detail_LogPacketTransmitter_PushFunctionName_plt(v28, v13, v14);
      v15 = *((const char**)a1 + 3);
      v16 = strlen_plt(v15);
      if (v16 == 0) {
        goto LABEL_12;
      }
      goto LABEL_11;
    }
  }
  if ((nn_util_IsValidUtf8String_plt(v13, v14) & 1) != 0) {
    goto LABEL_8;
  }
  nn_lm_detail_LogPacketTransmitter_PushFunctionName_plt(
      v28, "(Invalid UTF8 string)", 21);
  v15 = *((const char**)a1 + 3);
  v16 = strlen_plt(v15);
  if (v16 == 0) {
  LABEL_12:
    v17 = v15;
    v18 = v16;
    goto LABEL_14;
  }
LABEL_11:
  if ((nn_util_IsValidUtf8String_plt(v15, v16) & 1) != 0) {
    goto LABEL_12;
  }
  v17 = "(Invalid UTF8 string)";
  v18 = 21;
LABEL_14:
  v19 = nn_lm_detail_LogPacketTransmitter_PushModuleName_plt(v28, v17, v18);
  v20 = nn_os_GetCurrentThread_plt(v19);
  v21 = nn_os_GetThreadNamePointer_plt(v20);
  v22 = strlen_plt(v21);
  if (v22 != 0 && (nn_util_IsValidUtf8String_plt(v21, v22) & 1) == 0) {
    v23 = "(Invalid UTF8 string)";
    v24 = 21;
  }
  else {
    v23 = (const char*)v21;
    v24 = v22;
  }
  nn_lm_detail_LogPacketTransmitter_PushThreadName_plt(v28, v23, v24);
  v26 = 0;
  v27 = 0;
  nn_diag_detail_GetProcessNamePointer_plt(&v27, &v26);
  nn_lm_detail_LogPacketTransmitter_PushProcessName_plt(v28, v27, v26);
LABEL_19:
  nn_lm_detail_LogPacketTransmitter_PushTextLog_plt(v28, *(_QWORD*)a2,
                                                    *(_QWORD*)(a2 + 8));
  nn_lm_detail_LogPacketTransmitterBase_Destroy_LogPacketTransmitterBase_plt(
      v28);
  return nn_os_SdkMutexType_Unlock_plt(&SdkData_f435d8);
}

__int64 lm_api_4a19d0(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 result;

  v3 = *(unsigned __int8*)(a1 + 144);
  v2 = a1 + 144;
  if (v3 != 0) {
    nn_os_DestroySharedMemory_plt(v2);
  }
  if (*(_BYTE*)(a1 + 136) != 0) {
    nn_os_DestroySystemEvent_plt(a1 + 96);
  }
  if (*(_BYTE*)(a1 + 88) != 0) {
    nn_os_DestroySystemEvent_plt(a1 + 48);
  }
  result = *(_QWORD*)a1;
  if (*(_QWORD*)a1 != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

__int64 lm_api_4a1b50(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  int v5;
  int v6;
  _QWORD v7[2];

  if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e88160,
                            memory_order_acquire) &
       1) == 0) {
    v3 = a1;
    v4 = a2;
    v5 = __cxa_guard_acquire_plt(SdkData_e88160);
    a2 = v4;
    v6 = v5;
    a1 = v3;
    if (v6 != 0) {
      nn_lm_detail_ShimLibraryGlobal_ShimLibraryGlobal(
          (__int64*)SdkData_e88168[0]);
      fw_rtld_RegisterCrtDestructor();
      __cxa_guard_release_plt(SdkData_e88160);
      a1 = v3;
      a2 = v4;
    }
  }
  v7[0] = a1;
  v7[1] = a2;
  LODWORD(v7[0]) = (unsigned int)X8CALL_X0(
      _QWORD*,
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD, _QWORD*))(
          **(_QWORD**)((char*)SdkData_e88168[0] +
                       (unsigned __int64)((__int64*)0x4LL) + 4) +
          32LL))((void*)*(_QWORD**)((char*)SdkData_e88168[0] +
                                    (unsigned __int64)((__int64*)0x4LL) + 4),
                 *(_QWORD*)((char*)SdkData_e88168[0] +
                            (unsigned __int64)((__int64*)0x4LL) + 4),
                 v7));
  if (LODWORD(v7[0]) != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v7);
  }
  return 1;
}

__int64 nn_lm_HashedLogger_HashedLogger(void* this_)
{
  char* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;

  *((_QWORD*)this_ + 1) = 0;
  v1 = (char*)this_ + 8;
  *((_QWORD*)this_ + 3) = 0;
  *((_QWORD*)this_ + 4) = 0;
  *((_QWORD*)this_ + 2) = 0;
  *(_QWORD*)this_ = 0;
  *((_DWORD*)this_ + 11) = 0;
  *((_BYTE*)this_ + 88) = 0;
  *((_BYTE*)this_ + 136) = 0;
  *((_BYTE*)this_ + 144) = 0;
  *((_BYTE*)this_ + 40) = 1;
  *((_DWORD*)this_ + 52) = 0;
  v10 = 0;
  v11 = 0;
  v8 = 0;
  v9 = 0;
  v7 = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e88160,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88160) != 0) {
    nn_lm_detail_ShimLibraryGlobal_ShimLibraryGlobal(
        (__int64*)SdkData_e88168[0]);
    fw_rtld_RegisterCrtDestructor();
    __cxa_guard_release_plt(SdkData_e88160);
  }
  v3 = *(_QWORD*)((char*)SdkData_e88168[0] +
                  (unsigned __int64)((__int64*)0x4LL) + 4);
  v12 = &v11;
  LODWORD(v12) =
      (*(__int64 (**)(__int64, __int64**))(*(_QWORD*)v3 + 64LL))(v3, &v12);
  if ((_DWORD)v12 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v12);
  }
  v4 = v11;
  if (v11 == 0) {
    if (BYTE4(v7) == 1) {
      nn_os_CloseNativeHandle_plt((unsigned int)v7);
      if (BYTE4(v8) == 1) {
        goto LABEL_19;
      }
    }
    else if (BYTE4(v8) == 1) {
      goto LABEL_19;
    }
  LABEL_14:
    if (BYTE4(v10) == 1) {
      goto LABEL_20;
    }
  LABEL_15:
    result = v11;
    if (v11 == 0) {
      return result;
    }
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  (**(void (***)(__int64))v11)(v11);
  v5 = *(_QWORD*)this_;
  *(_QWORD*)this_ = v4;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  LODWORD(v12) =
      (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v11 + 40LL))(v11, &v10);
  if ((_DWORD)v12 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v12);
  }
  LODWORD(v12) =
      (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v11 + 32LL))(v11, &v9);
  if ((_DWORD)v12 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v12);
  }
  SdkRoutine_86b360(v1, v9, (unsigned int)v10, 0);
  BYTE4(v10) = 0;
  LODWORD(v10) = 0;
  LODWORD(v12) =
      (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v11 + 48LL))(v11, &v8);
  if ((_DWORD)v12 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v12);
  }
  nn_lm_impl_SharedQueue_Producer_AttachPushEventWritableHandle_plt(
      v1, (unsigned int)v8, 0);
  BYTE4(v8) = 0;
  LODWORD(v8) = 0;
  LODWORD(v12) =
      (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v11 + 56LL))(v11, &v7);
  if ((_DWORD)v12 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v12);
  }
  nn_lm_impl_SharedQueue_Producer_AttachPopEventReadableHandle_plt(
      v1, (unsigned int)v7, 0);
  if (BYTE4(v8) != 1) {
    goto LABEL_14;
  }
LABEL_19:
  nn_os_CloseNativeHandle_plt((unsigned int)v8);
  if (BYTE4(v10) != 1) {
    goto LABEL_15;
  }
LABEL_20:
  nn_os_CloseNativeHandle_plt((unsigned int)v10);
  result = v11;
  if (v11 != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

#pragma GCC visibility pop
