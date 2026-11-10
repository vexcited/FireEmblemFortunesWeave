#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_1db500();
__int64 am_interface_accessors_1c6580(__int64);
__int64 am_interface_accessors_1c6b88_alt1(_QWORD) __asm__(
    "am_interface_accessors_1c6b88");
__int64 am_service_proxy_1d6804(__int64, __int64*, __int64, __int64);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_GetCurrentProcessHandle_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_SleepThread_plt(_QWORD);
extern _UNKNOWN SdkData_efd020;
extern _UNKNOWN SdkData_efd040;
extern _UNKNOWN SdkData_efd060;
extern _UNKNOWN SdkData_efd080;
extern __int64 SdkData_efd028;
extern __int64 SdkData_efd030;
extern __int64 SdkData_efd038;
extern __int64 SdkData_efd048;
extern __int64 SdkData_efd050;
extern __int64 SdkData_efd068;
extern __int64 SdkData_efd070;
extern __int64 SdkData_efd088;
extern __int64 SdkData_efd090;
extern __int64 SdkData_efd2d8;
extern __int64 SdkData_efd2f8;
extern __int64 SdkData_efd358;
extern __int64 SdkData_efd3a0[];
extern __int64 SdkData_efeea0;
extern __int64 SdkData_efeed0;
extern __int64 SdkData_efeed0_alt1[] __asm__("SdkData_efeed0");
extern __int64 nn_am_detail_g_ApplicationProxy;
extern __int64 nn_am_detail_g_AudioController;
extern __int64 nn_am_detail_g_DebugFunctions;
extern __int64 nn_am_detail_g_DisplayController;
extern __int64 nn_am_detail_g_GraphicsScalingParametersFunctions;
extern __int64 nn_am_detail_g_LibraryAppletCreator;
extern __int64 nn_am_detail_g_PerformanceFunctions;
extern int SdkData_efd024;
extern int SdkData_efd044;
extern int SdkData_efd064;
extern int SdkData_efd084;
__int64 am_interface_accessors_1c6b2c();
__int64 am_interface_accessors_1c6b88(_QWORD* a1);
__int64 nn_am_InvokeWithSelfLibraryCreatorEnabled(void* this_, void (*a2)());
__int64 am_interface_accessors_1c6cd0(__int64 a1, __int64* a2);
bool nn_am_InitializeApplicationInterfaces();
__int64 nn_am_FinalizeApplicationInterfaces();
__int64 nn_am_FinalizeSystemApplicationInterfaces();

__int64 am_interface_accessors_1c6b2c()
{
  am_interface_accessors_1c6b88_alt1(&nn_am_detail_g_DebugFunctions);
  am_interface_accessors_1c6b88_alt1(&SdkData_efd358);
  am_interface_accessors_1c6b88_alt1(&nn_am_detail_g_DisplayController);
  am_interface_accessors_1c6b88_alt1(&nn_am_detail_g_AudioController);
  am_interface_accessors_1c6b88_alt1(&SdkData_efd2f8);
  am_interface_accessors_1c6b88_alt1(&SdkData_efd2d8);
  return am_interface_accessors_1c6b88_alt1(
      &nn_am_detail_g_LibraryAppletCreator);
}

__int64 am_interface_accessors_1c6b88(_QWORD* a1)
{
  int v2;
  void (*v3)(_QWORD);

  nn_os_SdkMutexType_Lock_plt(a1 + 1);
  v2 = *((_DWORD*)a1 + 3) - 1;
  *((_DWORD*)a1 + 3) = v2;
  if (v2 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)*a1 + 8LL))(*a1);
    v3 = (void (*)(_QWORD))a1[2];
    *a1 = 0;
    if (v3 != nullptr) {
      v3(a1[3]);
    }
    a1[2] = 0;
    a1[3] = 0;
  }
  return nn_os_SdkMutexType_Unlock_plt(a1 + 1);
}

__int64 nn_am_InvokeWithSelfLibraryCreatorEnabled(void* this_, void (*a2)())
{
  int v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64* v7;

  v6 = 0;
  v7 = &v6;
  v3 = (*(__int64 (**)(__int64, __int64**, _QWORD))(
      *(_QWORD*)SdkData_efeea0 + 88LL))(SdkData_efeea0, &v7, 0);
  if (v3 != 0) {
    if ((v3 & 0x3FFFFF) != 0x19C80) {
      LODWORD(v7) = v3;
      nn_diag_detail_AbortImpl_plt_858db0(&v7);
    }
  }
  else {
    v5 = v6;
    if (v6 != 0) {
      (**(void (***)(__int64))v6)(v6);
    }
    am_interface_accessors_1c6cd0((__int64)&nn_am_detail_g_LibraryAppletCreator,
                                  &v5);
    if (v5 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
    }
    ((void (*)(void))this_)();
    am_interface_accessors_1c6b88(&nn_am_detail_g_LibraryAppletCreator);
  }
  result = v6;
  if (v6 != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  return result;
}

__int64 am_interface_accessors_1c6cd0(__int64 a1, __int64* a2)
{
  int v4;
  __int64 v5;

  nn_os_SdkMutexType_Lock_plt(a1 + 8);
  v4 = *(_DWORD*)(a1 + 12);
  if (v4 == 0) {
    v5 = *a2;
    *a2 = 0;
    *(_QWORD*)a1 = v5;
    v4 = *(_DWORD*)(a1 + 12);
  }
  *(_DWORD*)(a1 + 12) = v4 + 1;
  return nn_os_SdkMutexType_Unlock_plt(a1 + 8);
}

bool nn_am_InitializeApplicationInterfaces()
{
  int v0;
  __int64 v1;
  __int64 v2;
  int v3;
  int v4;
  int v5;
  int v6;
  __int64 v7;
  int v9;
  int v10;
  int v11;
  __int64 v12[3];
  __int64 v13;
  __int64 v14;

  v12[2] = 0;
  v12[0] = (__int64)SdkData_efd3a0;
  v12[1] = (__int64)"appletOE";
  v0 = am_service_proxy_1d6804((__int64)&SdkData_efeed0, v12,
                               (__int64)SdkRoutine_1db500,
                               (__int64)SdkData_efd3a0);
  if (v0 == 0) {
    v1 = nn_os_SdkMutexType_Lock_plt(&SdkData_efd020);
    if (SdkData_efd024 != 0) {
      if (SdkData_efd028 == 0) {
        SdkData_efd028 = 0;
        SdkData_efd030 = 0;
      }
      ++SdkData_efd024;
    }
    else {
      v13 = 0;
      while (1) {
        v2 = SdkData_efeed0;
        LODWORD(v14) = nn_os_GetCurrentProcessHandle_plt(v1);
        BYTE4(v14) = 0;
        v12[0] = (__int64)&v13;
        v3 = (*(__int64 (**)(__int64, __int64*, _QWORD, __int64*, _QWORD))(
            *(_QWORD*)v2 + 48LL))(v2, v12, 0, &v14, 0);
        if (BYTE4(v14) == 1) {
          nn_os_CloseNativeHandle_plt((unsigned int)v14);
        }
        if ((v3 & 0x3FFFFF) != 0x19280) {
          break;
        }
        v1 = nn_os_SleepThread_plt(10000000);
      }
      if (v3 != 0) {
        if (v13 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
        }
        nn_os_SdkMutexType_Unlock_plt(&SdkData_efd020);
        LODWORD(v12[0]) = v3;
        nn_diag_detail_AbortImpl_plt_858db0(v12);
      }
      *(_OWORD*)&SdkData_efd028 = (__typeof__(*(_OWORD*)&SdkData_efd028)){0};
      SdkData_efd024 = 1;
      nn_am_detail_g_ApplicationProxy = v13;
    }
    nn_os_SdkMutexType_Unlock_plt(&SdkData_efd020);
    nn_os_SdkMutexType_Lock_plt(&SdkData_efd040);
    if (SdkData_efd044 != 0) {
      if (SdkData_efd048 == 0) {
        SdkData_efd048 = 0;
        SdkData_efd050 = 0;
      }
      ++SdkData_efd044;
    }
    else {
      v14 = 0;
      v12[0] = (__int64)&v14;
      v4 = (*(__int64 (**)(__int64, __int64*))(
          *(_QWORD*)nn_am_detail_g_ApplicationProxy + 96LL))(
          nn_am_detail_g_ApplicationProxy, v12);
      if (v4 != 0) {
        v9 = v4;
        if (v14 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v14 + 8LL))(v14);
        }
        nn_os_SdkMutexType_Unlock_plt(&SdkData_efd040);
        LODWORD(v12[0]) = v9;
        nn_diag_detail_AbortImpl_plt_858db0(v12);
      }
      SdkData_efd044 = 1;
      SdkData_efd048 = 0;
      SdkData_efd050 = 0;
      SdkData_efd038 = v14;
    }
    nn_os_SdkMutexType_Unlock_plt(&SdkData_efd040);
    nn_os_SdkMutexType_Lock_plt(&SdkData_efd060);
    if (SdkData_efd064 != 0) {
      if (SdkData_efd068 == 0) {
        SdkData_efd068 = 0;
        SdkData_efd070 = 0;
      }
      ++SdkData_efd064;
    }
    else {
      v14 = 0;
      v12[0] = (__int64)&v14;
      v5 = (*(__int64 (**)(__int64, __int64*))(
          *(_QWORD*)nn_am_detail_g_ApplicationProxy + 112LL))(
          nn_am_detail_g_ApplicationProxy, v12);
      if (v5 != 0) {
        v10 = v5;
        if (v14 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v14 + 8LL))(v14);
        }
        nn_os_SdkMutexType_Unlock_plt(&SdkData_efd060);
        LODWORD(v12[0]) = v10;
        nn_diag_detail_AbortImpl_plt_858db0(v12);
      }
      SdkData_efd064 = 1;
      SdkData_efd068 = 0;
      SdkData_efd070 = 0;
      nn_am_detail_g_GraphicsScalingParametersFunctions = v14;
    }
    nn_os_SdkMutexType_Unlock_plt(&SdkData_efd060);
    nn_os_SdkMutexType_Lock_plt(&SdkData_efd080);
    if (SdkData_efd084 != 0) {
      if (SdkData_efd088 == 0) {
        SdkData_efd088 = 0;
        SdkData_efd090 = 0;
      }
      ++SdkData_efd084;
    }
    else {
      v14 = 0;
      v12[0] = (__int64)&v14;
      v6 = (*(__int64 (**)(__int64, __int64*))(
          *(_QWORD*)nn_am_detail_g_ApplicationProxy + 104LL))(
          nn_am_detail_g_ApplicationProxy, v12);
      if (v6 != 0) {
        v11 = v6;
        if (v14 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v14 + 8LL))(v14);
        }
        nn_os_SdkMutexType_Unlock_plt(&SdkData_efd080);
        LODWORD(v12[0]) = v11;
        nn_diag_detail_AbortImpl_plt_858db0(v12);
      }
      SdkData_efd084 = 1;
      SdkData_efd088 = 0;
      SdkData_efd090 = 0;
      nn_am_detail_g_PerformanceFunctions = v14;
    }
    nn_os_SdkMutexType_Unlock_plt(&SdkData_efd080);
    v7 = nn_am_detail_g_ApplicationProxy;
    if (nn_am_detail_g_ApplicationProxy != 0) {
      (**(void (***)(__int64))nn_am_detail_g_ApplicationProxy)(
          nn_am_detail_g_ApplicationProxy);
      (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
    }
    am_interface_accessors_1c6580(v7);
  }
  return v0 == 0;
}

__int64 nn_am_FinalizeApplicationInterfaces()
{
  am_interface_accessors_1c6b2c();
  am_interface_accessors_1c6b88(&nn_am_detail_g_ApplicationProxy);
  return am_interface_accessors_1c6b88(SdkData_efeed0_alt1);
}

__int64 nn_am_FinalizeSystemApplicationInterfaces()
{
  am_interface_accessors_1c6b2c();
  am_interface_accessors_1c6b88(&nn_am_detail_g_ApplicationProxy);
  return am_interface_accessors_1c6b88(&SdkData_efeea0);
}

#pragma GCC visibility pop
