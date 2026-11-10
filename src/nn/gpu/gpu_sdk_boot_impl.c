#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_gpu_impl_user_JobEventPool_Initialize(_QWORD, _QWORD);
__int64 nn_gpu_impl_user_UserBootFunction_InitializeGsvSession(_QWORD);
__int64 nn_gpu_impl_user_UserBootFunction_InitializeWorkerSession(_QWORD,
                                                                  _QWORD,
                                                                  _QWORD);
__int64 nn_gsv_UserSession_OpenGpuDeviceSession_46af10(_QWORD, _QWORD, _QWORD);
__int64 nn_os_AttachReadableHandleToSystemEvent_plt(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_ConvertToTimeSpan_plt(_QWORD);
__int64 nn_os_GetSystemTickOrdered_plt(_QWORD);
__int64 nn_os_SdkConditionVariableType_TimedWait_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
extern __int64 SdkData_e88138;
__int64 gpu_sdk_boot_46ac60(__int64 a1, _DWORD* a2, __int64 a3);
__int64 gpu_sdk_boot_46ae40(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, char a6);

__int64 gpu_sdk_boot_46ac60(__int64 a1, _DWORD* a2, __int64 a3)
{
  __int64 v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 (*v14)(__int64, unsigned int*, _QWORD);
  int v15;
  __int64 v16;
  __int64 v17;
  unsigned int v20;

  v3 = a1 + 40;
  v6 = nn_os_SdkMutexType_Lock_plt(a1 + 16);
  v7 = *(_QWORD*)(a1 + 24);
  if (v7 != -1) {
    goto LABEL_5;
  }
LABEL_8:
  while (1) {
    v10 = a3 - nn_os_GetSystemTickOrdered_plt(v6);
    if (v10 < 1) {
      break;
    }
    v11 = nn_os_ConvertToTimeSpan_plt(v10);
    v6 = nn_os_SdkConditionVariableType_TimedWait_plt(a1 + 20, a1 + 16, v11);
    v7 = *(_QWORD*)(a1 + 24);
    if (v7 != -1) {
    LABEL_5:
      while (1) {
        v8 = v7;
        while (1) {
          v9 = __clz(__rbit64(~v7));
          atomic_compare_exchange_strong_explicit(
              (atomic_ullong* volatile)(a1 + 24), (unsigned __int64*)&v8,
              (1LL << v9) | v7, memory_order_acquire, memory_order_acquire);
          if (v8 == v7) {
            break;
          }
          v7 = v8;
          if (v8 == -1) {
            goto LABEL_8;
          }
        }
        nn_os_SdkMutexType_Unlock_plt(a1 + 16);
        if (v9 == 63) {
          break;
        }
        v12 = ~(-2LL << v9);
        if (v9 != 0) {
          goto LABEL_14;
        }
        v13 = 1;
        if ((*(_QWORD*)(a1 + 32) & v12) != 0) {
        LABEL_21:
          *a2 = v9;
          return 1;
        }
      LABEL_15:
        v14 = *(__int64 (**)(__int64, unsigned int*, _QWORD))a1;
        v20 = 0;
        v15 = v14(a1 + 8, &v20, (unsigned int)v9);
        if (v15 == 0) {
          v17 = v20;
          v20 = 0;
          nn_os_AttachReadableHandleToSystemEvent_plt(
              v3 + 48LL * (unsigned int)v9, v17, 1, 0);
          atomic_fetch_or_explicit((atomic_ullong* volatile)(a1 + 32), v13,
                                   memory_order_release);
          v16 = v20;
          if (v20 == 0) {
            goto LABEL_3;
          }
        LABEL_19:
          nn_os_CloseNativeHandle_plt(v16);
          goto LABEL_3;
        }
        v16 = v20;
        if (v20 != 0) {
          goto LABEL_19;
        }
      LABEL_3:
        if (v15 == 0) {
          goto LABEL_21;
        }
        v6 = nn_os_SdkMutexType_Lock_plt(a1 + 16);
        v7 = *(_QWORD*)(a1 + 24);
        if (v7 == -1) {
          goto LABEL_8;
        }
      }
      v12 = -1;
    LABEL_14:
      v13 = ~(-1LL << v9) ^ v12;
      if ((*(_QWORD*)(a1 + 32) & v13) != 0) {
        goto LABEL_21;
      }
      goto LABEL_15;
    }
  }
  nn_os_SdkMutexType_Unlock_plt(a1 + 16);
  return 0;
}

__int64 gpu_sdk_boot_46ae40(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, char a6)
{
  __int64 v11;
  __int64 result;
  int* v13;
  int v14;
  int v15;

  if (a6 != 1) {
    nn_diag_detail_AbortImpl_plt_856170(a1);
  LABEL_7:
    nn_diag_detail_AbortImpl_plt_858db0(&v14);
    __udf(0);
  }
  v15 = 0;
  v13 = &v15;
  v14 =
      nn_gsv_UserSession_OpenGpuDeviceSession_46af10(a5, &v13, SdkData_e88138);
  if (v14 != 0) {
    goto LABEL_7;
  }
  v11 = *(unsigned int*)(a1 + 4);
  *(_DWORD*)(a1 + 4) = v15;
  v15 = v11;
  if ((_DWORD)v11 != 0) {
    nn_os_CloseNativeHandle_plt(v11);
  }
  nn_gpu_impl_user_UserBootFunction_InitializeGsvSession(a5);
  nn_gpu_impl_user_JobEventPool_Initialize(a2, a1);
  result =
      nn_gpu_impl_user_UserBootFunction_InitializeWorkerSession(a3, a1, a2);
  *(_QWORD*)(a4 + 8) = a1;
  return result;
}

#pragma GCC visibility pop
