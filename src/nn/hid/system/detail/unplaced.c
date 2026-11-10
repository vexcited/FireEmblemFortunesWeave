#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_rtld_RegisterCrtDestructor();
__int64
    nn_hid_detail_NmouseTransferMemoryAccessor_NmouseTransferMemoryAccessor_plt(
        _QWORD);
__int64 nn_hid_detail_SharedMemoryAccessor_Activate_plt(_QWORD);
__int64 nn_hid_detail_SharedMemoryAccessor_Deactivate_plt(_QWORD);
__int64 nn_hid_detail_SharedMemoryAccessor_SetAppletResourceUserId_plt(_QWORD,
                                                                       _QWORD);
__int64
    nn_hid_detail_SharedMemoryAccessor_SetResultActivationUpperLimitOver_plt(
        _QWORD, _QWORD);
__int64
    nn_hid_detail_SharedMemoryAccessor_SetResultDeactivationLowerLimitOver_plt(
        _QWORD, _QWORD);
__int64 nn_hid_detail_SharedMemoryAccessor_SharedMemoryAccessor_plt(_QWORD);
__int64 nn_hid_server_CreateHidDebugServerProxy_plt(_QWORD);
__int64 nn_hid_server_CreateHidServerProxy_plt(_QWORD);
__int64 nn_hid_server_CreateHidSystemServerProxy_plt(_QWORD);
__int64 nn_hid_utility_GetAppletResourceUserIdOfCallerApplet_plt(_QWORD);
__int64 nn_hid_utility_GetAppletResourceUserId_plt(void);
__int64 nn_hid_utility_GetAppletResourceUserId_plt_alt1(_QWORD) __asm__(
    "nn_hid_utility_GetAppletResourceUserId_plt");
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
extern _UNKNOWN SdkData_1046f9c;
extern _UNKNOWN SdkData_1046fc0;
extern _UNKNOWN SdkData_e7a968;
extern __int64 SdkData_1046fa0;
extern __int64 SdkData_1046fb8;
extern char SdkData_1046f98;
__int64 nn_hid_system_detail_6d9530(__int64 a1, __int64 a2);
__int64 nn_hid_system_detail_6d95c0(__int64 a1);
__int64 nn_hid_system_detail_GetNpadSystemExtStyle(_BYTE* a1, _DWORD* a2,
                                                   unsigned int* a3);
__int64 nn_hid_system_detail_GetNpadCaptureButtonAssignmentOfCaller(_DWORD* a1,
                                                                    __int64 a2,
                                                                    int a3);
__int64 nn_hid_system_detail_6e9ea0(__int64 a1, __int64 a2);
__int64 nn_hid_system_detail_6e9f20(__int64 a1);
__int64 nn_hid_system_detail_6ea660(__int64 a1, __int64 a2);
__int64 nn_hid_system_detail_6ea6e0(__int64 a1);
__int64 nn_hid_system_detail_InitializeMainUnitFunctionPolicy(void* this_);
__int64 nn_hid_system_detail_FinalizeMainUnitFunctionPolicy(void* this_);
__int64 nn_hid_system_detail_FetchSelectorUiPresentationPolicy(_BYTE* a1);
__int64 nn_hid_system_detail_6eb930();
__int64 nn_hid_system_detail_6ebf20(__int64 a1, __int64 a2);
__int64 nn_hid_system_detail_6ebfb0(__int64 a1);
__int64 nn_hid_system_detail_6ed360(__int64 a1, __int64 a2);
__int64 nn_hid_system_detail_6ed3f0(__int64 a1);

__int64 nn_hid_system_detail_6d9530(__int64 a1, __int64 a2)
{
  __int64 result;
  _QWORD* v5;
  __int64 v6;
  unsigned int v7;
  _QWORD* v8;

  v8 = nullptr;
  result = nn_hid_server_CreateHidServerProxy_plt(&v8);
  if ((_DWORD)result == 0) {
    v5 = v8;
    v6 = nn_hid_utility_GetAppletResourceUserId_plt();
    result =
        (*(__int64 (**)(_QWORD*, __int64, __int64))(*v5 + 392LL))(v5, v6, 1);
    if ((_DWORD)result == 0) {
      atomic_store(a2 + 244224, (unsigned __int64*)(a1 + 24));
    }
  }
  if (v8 != nullptr) {
    v7 = result;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v8 + 8LL))(
        (void*)v8, v8);
    return v7;
  }
  return result;
}

__int64 nn_hid_system_detail_6d95c0(__int64 a1)
{
  __int64 result;
  unsigned int v3;
  _QWORD* v4;

  v4 = nullptr;
  result = nn_hid_server_CreateHidDebugServerProxy_plt(&v4);
  if ((_DWORD)result == 0) {
    result = (*(__int64 (**)(_QWORD*))(*v4 + 232LL))(v4);
    if ((_DWORD)result == 0) {
      atomic_store(0, (unsigned __int64*)(a1 + 24));
    }
  }
  if (v4 != nullptr) {
    v3 = result;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v4 + 8LL))(
        (void*)v4, v4);
    return v3;
  }
  return result;
}

__int64 nn_hid_system_detail_GetNpadSystemExtStyle(_BYTE* a1, _DWORD* a2,
                                                   unsigned int* a3)
{
  __int64 result;
  int v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;

  v11 = nullptr;
  nn_hid_server_CreateHidSystemServerProxy_plt(&v11);
  v9 = 0;
  v10 = 0;
  result = (*(__int64 (**)(_QWORD*, __int64*, __int64*, _QWORD))(*v11 + 424LL))(
      v11, &v10, &v9, *a3);
  if ((_DWORD)result == 0) {
    v7 = v9;
    *a1 = v10;
    *a2 = v7;
  }
  if (v11 != nullptr) {
    v8 = result;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v11 + 8LL))(
        (void*)v11, v11);
    return v8;
  }
  return result;
}

__int64 nn_hid_system_detail_GetNpadCaptureButtonAssignmentOfCaller(_DWORD* a1,
                                                                    __int64 a2,
                                                                    int a3)
{
  __int64 result;
  unsigned int v7;
  _QWORD v8[2];
  _QWORD* v9;
  __int64 v10;
  __int64 v11;

  v11 = 0;
  v10 = 0;
  result = nn_hid_utility_GetAppletResourceUserIdOfCallerApplet_plt(&v10);
  if ((_DWORD)result == 0) {
    goto LABEL_2;
  }
  if ((result & 0x3FFFFF) == 0x7883) {
    *a1 = 0;
    return 0;
  }
  if ((result & 0x3FFFFF) == 0x7A83) {
    v10 = 0;
  LABEL_2:
    v9 = nullptr;
    nn_hid_server_CreateHidSystemServerProxy_plt(&v9);
    v8[0] = a2;
    v8[1] = a3;
    result = (*(__int64 (**)(_QWORD*, __int64*, _QWORD*, __int64))(
        *v9 + 472LL))(v9, &v11, v8, v10);
    if ((_DWORD)result == 0) {
      *a1 = v11;
    }
    if (v9 != nullptr) {
      v7 = result;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v9 + 8LL))(
          (void*)v9, v9);
      return v7;
    }
  }
  return result;
}

__int64 nn_hid_system_detail_6e9ea0(__int64 a1, __int64 a2)
{
  __int64 result;
  unsigned int v5;
  _QWORD* v6;

  v6 = nullptr;
  result = nn_hid_server_CreateHidSystemServerProxy_plt(&v6);
  if ((_DWORD)result == 0) {
    result = (*(__int64 (**)(_QWORD*, _QWORD))(*v6 + 96LL))(v6, 0);
    if ((_DWORD)result == 0) {
      atomic_store(a2 + 20480, (unsigned __int64*)(a1 + 24));
    }
  }
  if (v6 != nullptr) {
    v5 = result;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v6 + 8LL))(
        (void*)v6, v6);
    return v5;
  }
  return result;
}

__int64 nn_hid_system_detail_6e9f20(__int64 a1)
{
  __int64 result;
  unsigned int v3;
  _QWORD* v4;

  v4 = nullptr;
  result = nn_hid_server_CreateHidDebugServerProxy_plt(&v4);
  if ((_DWORD)result == 0) {
    result = (*(__int64 (**)(_QWORD*))(*v4 + 288LL))(v4);
    if ((_DWORD)result == 0) {
      atomic_store(0, (unsigned __int64*)(a1 + 24));
    }
  }
  if (v4 != nullptr) {
    v3 = result;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v4 + 8LL))(
        (void*)v4, v4);
    return v3;
  }
  return result;
}

__int64 nn_hid_system_detail_6ea660(__int64 a1, __int64 a2)
{
  __int64 result;
  unsigned int v5;
  _QWORD* v6;

  v6 = nullptr;
  result = nn_hid_server_CreateHidSystemServerProxy_plt(&v6);
  if ((_DWORD)result == 0) {
    result = (*(__int64 (**)(_QWORD*, _QWORD))(*v6 + 120LL))(v6, 0);
    if ((_DWORD)result == 0) {
      atomic_store(a2 + 253952, (unsigned __int64*)(a1 + 24));
    }
  }
  if (v6 != nullptr) {
    v5 = result;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v6 + 8LL))(
        (void*)v6, v6);
    return v5;
  }
  return result;
}

__int64 nn_hid_system_detail_6ea6e0(__int64 a1)
{
  __int64 result;
  unsigned int v3;
  _QWORD* v4;

  v4 = nullptr;
  result = nn_hid_server_CreateHidDebugServerProxy_plt(&v4);
  if ((_DWORD)result == 0) {
    result = (*(__int64 (**)(_QWORD*))(*v4 + 456LL))(v4);
    if ((_DWORD)result == 0) {
      atomic_store(0, (unsigned __int64*)(a1 + 24));
    }
  }
  if (v4 != nullptr) {
    v3 = result;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v4 + 8LL))(
        (void*)v4, v4);
    return v3;
  }
  return result;
}

__int64 nn_hid_system_detail_InitializeMainUnitFunctionPolicy(void* this_)
{
  __int64 v1;
  __int64 result;
  _QWORD* v3;
  __int64 v4;
  unsigned int v5;
  _QWORD* v6;

  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_1046f98,
                            memory_order_acquire) &
       1) == 0) {
    nn_os_SdkMutexType_Lock_plt(&SdkData_1046f9c);
    if ((SdkData_1046f98 & 1) == 0) {
      nn_hid_detail_SharedMemoryAccessor_SharedMemoryAccessor_plt(
          &SdkData_1046fa0);
      SdkData_1046fb8 = 0;
      SdkData_1046fa0 = (__int64)&SdkData_e7a968;
      nn_hid_detail_SharedMemoryAccessor_SetResultActivationUpperLimitOver_plt(
          &SdkData_1046fa0, 2678986);
      nn_hid_detail_SharedMemoryAccessor_SetResultDeactivationLowerLimitOver_plt(
          &SdkData_1046fa0, 2679498);
      atomic_store(1u, (unsigned __int8*)&SdkData_1046f98);
    }
    this_ = (void*)nn_os_SdkMutexType_Unlock_plt(&SdkData_1046f9c);
  }
  v1 = nn_hid_utility_GetAppletResourceUserId_plt_alt1(this_);
  result = nn_hid_detail_SharedMemoryAccessor_SetAppletResourceUserId_plt(
      &SdkData_1046fa0, v1);
  if ((_DWORD)result == 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_1046f98,
                              memory_order_acquire) &
         1) == 0) {
      nn_os_SdkMutexType_Lock_plt(&SdkData_1046f9c);
      if ((SdkData_1046f98 & 1) == 0) {
        nn_hid_detail_SharedMemoryAccessor_SharedMemoryAccessor_plt(
            &SdkData_1046fa0);
        SdkData_1046fb8 = 0;
        SdkData_1046fa0 = (__int64)&SdkData_e7a968;
        nn_hid_detail_SharedMemoryAccessor_SetResultActivationUpperLimitOver_plt(
            &SdkData_1046fa0, 2678986);
        nn_hid_detail_SharedMemoryAccessor_SetResultDeactivationLowerLimitOver_plt(
            &SdkData_1046fa0, 2679498);
        atomic_store(1u, (unsigned __int8*)&SdkData_1046f98);
      }
      nn_os_SdkMutexType_Unlock_plt(&SdkData_1046f9c);
    }
    result = nn_hid_detail_SharedMemoryAccessor_Activate_plt(&SdkData_1046fa0);
    if ((_DWORD)result == 0) {
      v6 = nullptr;
      result = nn_hid_server_CreateHidSystemServerProxy_plt(&v6);
      if ((_DWORD)result == 0) {
        v3 = v6;
        v4 = nn_hid_utility_GetAppletResourceUserId_plt_alt1(result);
        result = (*(__int64 (**)(_QWORD*, __int64))(*v3 + 2392LL))(v3, v4);
      }
      if (v6 != nullptr) {
        v5 = result;
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
            *v6 + 8LL))((void*)(v6), v6);
        return v5;
      }
    }
  }
  return result;
}

__int64 nn_hid_system_detail_FinalizeMainUnitFunctionPolicy(void* this_)
{
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_1046f98,
                            memory_order_acquire) &
       1) == 0) {
    nn_os_SdkMutexType_Lock_plt(&SdkData_1046f9c);
    if ((SdkData_1046f98 & 1) == 0) {
      nn_hid_detail_SharedMemoryAccessor_SharedMemoryAccessor_plt(
          &SdkData_1046fa0);
      SdkData_1046fb8 = 0;
      SdkData_1046fa0 = (__int64)&SdkData_e7a968;
      nn_hid_detail_SharedMemoryAccessor_SetResultActivationUpperLimitOver_plt(
          &SdkData_1046fa0, 2678986);
      nn_hid_detail_SharedMemoryAccessor_SetResultDeactivationLowerLimitOver_plt(
          &SdkData_1046fa0, 2679498);
      atomic_store(1u, (unsigned __int8*)&SdkData_1046f98);
    }
    nn_os_SdkMutexType_Unlock_plt(&SdkData_1046f9c);
  }
  nn_hid_detail_SharedMemoryAccessor_Deactivate_plt(&SdkData_1046fa0);
  return 0;
}

__int64 nn_hid_system_detail_FetchSelectorUiPresentationPolicy(_BYTE* a1)
{
  __int64 result;
  _BOOL4 v3;
  _QWORD* v4;
  __int64 v5;
  unsigned int v6;
  _BYTE v7[4];
  _QWORD* v8;

  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_1046f98,
                            memory_order_acquire) &
       1) == 0) {
    nn_os_SdkMutexType_Lock_plt(&SdkData_1046f9c);
    if ((SdkData_1046f98 & 1) == 0) {
      nn_hid_detail_SharedMemoryAccessor_SharedMemoryAccessor_plt(
          &SdkData_1046fa0);
      SdkData_1046fb8 = 0;
      SdkData_1046fa0 = (__int64)&SdkData_e7a968;
      nn_hid_detail_SharedMemoryAccessor_SetResultActivationUpperLimitOver_plt(
          &SdkData_1046fa0, 2678986);
      nn_hid_detail_SharedMemoryAccessor_SetResultDeactivationLowerLimitOver_plt(
          &SdkData_1046fa0, 2679498);
      atomic_store(1u, (unsigned __int8*)&SdkData_1046f98);
    }
    nn_os_SdkMutexType_Unlock_plt(&SdkData_1046f9c);
  }
  if (SdkData_1046fb8 != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_1046f98,
                              memory_order_acquire) &
         1) == 0) {
      nn_os_SdkMutexType_Lock_plt(&SdkData_1046f9c);
      if ((SdkData_1046f98 & 1) == 0) {
        nn_hid_detail_SharedMemoryAccessor_SharedMemoryAccessor_plt(
            &SdkData_1046fa0);
        SdkData_1046fb8 = 0;
        SdkData_1046fa0 = (__int64)&SdkData_e7a968;
        nn_hid_detail_SharedMemoryAccessor_SetResultActivationUpperLimitOver_plt(
            &SdkData_1046fa0, 2678986);
        nn_hid_detail_SharedMemoryAccessor_SetResultDeactivationLowerLimitOver_plt(
            &SdkData_1046fa0, 2679498);
        atomic_store(1u, (unsigned __int8*)&SdkData_1046f98);
      }
      nn_os_SdkMutexType_Unlock_plt(&SdkData_1046f9c);
    }
    *a1 = *(_BYTE*)SdkData_1046fb8;
    return 0;
  }
  v8 = nullptr;
  result = nn_hid_server_CreateHidSystemServerProxy_plt(&v8);
  if ((_DWORD)result != 0) {
    v3 = false;
  }
  else {
    v4 = v8;
    v7[0] = 0;
    v5 = nn_hid_utility_GetAppletResourceUserId_plt_alt1(result);
    result =
        (*(__int64 (**)(_QWORD*, _BYTE*, __int64))(*v4 + 2376LL))(v4, v7, v5);
    v3 = result == 0;
    if ((_DWORD)result == 0) {
      *a1 = v7[0];
    }
  }
  if (v8 != nullptr) {
    v6 = result;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v8 + 8LL))(
        (void*)v8, v8);
    result = v6;
  }
  if (v3) {
    return 0;
  }
  return result;
}

__int64 nn_hid_system_detail_6eb930()
{
  nn_hid_detail_NmouseTransferMemoryAccessor_NmouseTransferMemoryAccessor_plt(
      &SdkData_1046fc0);
  return fw_rtld_RegisterCrtDestructor();
}

__int64 nn_hid_system_detail_6ebf20(__int64 a1, __int64 a2)
{
  __int64 result;
  unsigned int v5;
  _QWORD* v6;

  v6 = nullptr;
  result = nn_hid_server_CreateHidSystemServerProxy_plt(&v6);
  if ((_DWORD)result == 0) {
    result = (*(__int64 (**)(_QWORD*, _QWORD))(*v6 + 64LL))(v6, 0);
    if ((_DWORD)result == 0) {
      atomic_store(a2 + 19456, (unsigned __int64*)(a1 + 24));
    }
  }
  if (v6 != nullptr) {
    v5 = result;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v6 + 8LL))(
        (void*)v6, v6);
    return v5;
  }
  return result;
}

__int64 nn_hid_system_detail_6ebfb0(__int64 a1)
{
  __int64 result;
  unsigned int v3;
  _QWORD* v4;

  v4 = nullptr;
  result = nn_hid_server_CreateHidDebugServerProxy_plt(&v4);
  if ((_DWORD)result == 0) {
    result = (*(__int64 (**)(_QWORD*))(*v4 + 240LL))(v4);
    if ((_DWORD)result == 0) {
      atomic_store(0, (unsigned __int64*)(a1 + 24));
    }
  }
  if (v4 != nullptr) {
    v3 = result;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v4 + 8LL))(
        (void*)v4, v4);
    return v3;
  }
  return result;
}

__int64 nn_hid_system_detail_6ed360(__int64 a1, __int64 a2)
{
  __int64 result;
  unsigned int v5;
  _QWORD* v6;

  v6 = nullptr;
  result = nn_hid_server_CreateHidSystemServerProxy_plt(&v6);
  if ((_DWORD)result == 0) {
    result = (*(__int64 (**)(_QWORD*, _QWORD))(*v6 + 80LL))(v6, 0);
    if ((_DWORD)result == 0) {
      atomic_store(a2 + 19968, (unsigned __int64*)(a1 + 24));
    }
  }
  if (v6 != nullptr) {
    v5 = result;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v6 + 8LL))(
        (void*)v6, v6);
    return v5;
  }
  return result;
}

__int64 nn_hid_system_detail_6ed3f0(__int64 a1)
{
  __int64 result;
  unsigned int v3;
  _QWORD* v4;

  v4 = nullptr;
  result = nn_hid_server_CreateHidDebugServerProxy_plt(&v4);
  if ((_DWORD)result == 0) {
    result = (*(__int64 (**)(_QWORD*))(*v4 + 264LL))(v4);
    if ((_DWORD)result == 0) {
      atomic_store(0, (unsigned __int64*)(a1 + 24));
    }
  }
  if (v4 != nullptr) {
    v3 = result;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v4 + 8LL))(
        (void*)v4, v4);
    return v3;
  }
  return result;
}

#pragma GCC visibility pop
