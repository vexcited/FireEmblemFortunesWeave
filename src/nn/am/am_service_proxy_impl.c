#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_1c96e4(__int64);
__int64 SdkRoutine_1c9760(__int64, __int64);
__int64 SdkRoutine_1c9854(__int64, int);
__int64 SdkRoutine_1cbac8(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_1d3d5c(__int64);
__int64 SdkRoutine_1d3d98(_DWORD*);
__int64 SdkRoutine_1d554c(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_1d9ae4(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _DWORD);
__int64 SdkRoutine_e3b70(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_e6aa0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_ea6b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_eb790(_QWORD);
__int64 SdkRoutine_eb9e0(_QWORD);
__int64 am_service_proxy_1d5b50_alt1(_QWORD) __asm__("am_service_proxy_1d5b50");
__int64 am_service_proxy_1d652c_alt1(_QWORD) __asm__("am_service_proxy_1d652c");
__int64 am_service_proxy_1d6910_alt1(_QWORD, _QWORD, _QWORD,
                                     _QWORD) __asm__("am_service_proxy_1d6910");
__int64 am_service_proxy_1d6988_alt1(_QWORD, _QWORD, _QWORD,
                                     _QWORD) __asm__("am_service_proxy_1d6988");
__int64 am_service_proxy_1d69e0_alt1(_QWORD, _QWORD, _QWORD,
                                     _QWORD) __asm__("am_service_proxy_1d69e0");
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_sf_cmif_client_1d9058(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_sf_cmif_client_1da4b4(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_sf_hipc_ConnectToHipcService_plt(_QWORD, _QWORD);
__int64 nn_sf_hipc_FinalizeHipcServiceResolution_plt(_QWORD);
__int64 nn_sf_hipc_InitializeHipcServiceResolution_plt(_QWORD);
__int64 nn_sf_hipc_client_HipcClientSessionManager_ConvertToDomainImpl_plt(
    _QWORD, _QWORD, _QWORD);
extern __int64 SdkData_e86d80;
extern __int64 SdkData_e87290;
extern __int64 SdkData_e872b0;
extern __int64 SdkData_e872c0;
__int64 am_service_proxy_eb570(__int64 a1, _QWORD* a2);
__int64 am_service_proxy_eb590(__int64 a1, __int64* a2);
__int64 am_service_proxy_eb620(__int64 a1, __int64* a2, unsigned int a3);
__int64 am_service_proxy_eb6d0(__int64 a1, _QWORD* a2);
__int64 am_service_proxy_1d2044(__int64 a1, _QWORD* a2);
__int64 am_service_proxy_1d5a68(__int64 a1);
__int64 am_service_proxy_1d5aac(__int64 a1, __int64* a2, __int64 a3,
                                __int64 a4);
_QWORD* am_service_proxy_1d5b50(_QWORD* result);
__int64 am_service_proxy_1d6444(__int64 a1);
__int64 am_service_proxy_1d6488(__int64 a1, __int64* a2, __int64 a3,
                                __int64 a4);
_QWORD* am_service_proxy_1d652c(_QWORD* result);
__int64 am_service_proxy_1d67c0(__int64 a1);
__int64 am_service_proxy_1d6804(__int64 a1, __int64* a2, __int64 a3,
                                __int64 a4);
__int64 am_service_proxy_1d6910(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 am_service_proxy_1d6988(__int64 a1, __int64 a2, __int64 a3,
                                unsigned int a4);
__int64 am_service_proxy_1d69e0(__int64 a1, __int64* a2, __int64 a3,
                                unsigned int a4);
__int64 am_service_proxy_1d88cc(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 am_service_proxy_1d8a20(__int64 a1, _QWORD* a2, unsigned int a3,
                                unsigned int a4, unsigned int a5,
                                unsigned int a6, unsigned int a7);
__int64 am_service_proxy_1d8bf8(__int64 a1, __int64 a2, __int64 a3, __int64 a4);

__int64 am_service_proxy_eb570(__int64 a1, _QWORD* a2)
{
  return SdkRoutine_ea6b0(a1 + 8, *a2, a2[1], 1);
}

__int64 am_service_proxy_eb590(__int64 a1, __int64* a2)
{
  unsigned int v4;
  __int64 v5;
  __int64 v7;
  __int64* v8;
  __int64 v9;

  v9 = 0;
  v7 = 0;
  v8 = &v9;
  SdkRoutine_eb790(&v7);
  if (v8 == nullptr) {
    v4 = 5642;
    v5 = v9;
    if (v9 == 0) {
      return v4;
    }
    goto LABEL_3;
  }
  v7 = *a2;
  v4 = SdkRoutine_e3b70(a1 + 8, &v7, 16, &v9);
  v5 = v9;
  if (v9 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  return v4;
}

__int64 am_service_proxy_eb620(__int64 a1, __int64* a2, unsigned int a3)
{
  unsigned int v6;
  __int64 v7;
  __int64 v9;
  __int64* v10;
  __int64 v11;

  v11 = 0;
  v9 = 0;
  v10 = &v11;
  SdkRoutine_eb9e0(&v9);
  if (v10 == nullptr) {
    v6 = 5642;
    v7 = v11;
    if (v11 == 0) {
      return v6;
    }
    goto LABEL_3;
  }
  v9 = *a2;
  v6 = SdkRoutine_e6aa0(a1 + 8, &v9, a3, 48, &v11);
  v7 = v11;
  if (v11 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  return v6;
}

__int64 am_service_proxy_eb6d0(__int64 a1, _QWORD* a2)
{
  return SdkRoutine_ea6b0(a1 + 8, *a2, a2[1], 67);
}

__int64 am_service_proxy_1d2044(__int64 a1, _QWORD* a2)
{
  return SdkRoutine_1cbac8(a1 + 8, *a2, 12LL * a2[1], 131);
}

__int64 am_service_proxy_1d5a68(__int64 a1)
{
  *(_QWORD*)(a1 + 6576) = SdkData_e86d80 + 16;
  SdkRoutine_1d3d5c(a1 + 6576);
  return SdkRoutine_1d3d98((_DWORD*)a1);
}

__int64 am_service_proxy_1d5aac(__int64 a1, __int64* a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  unsigned int v9;
  __int64 v11;
  __int64* v12;
  __int64 v13;

  v4 = *(_QWORD*)(a1 + 48);
  v13 = 0;
  v11 = v4;
  v12 = &v13;
  am_service_proxy_1d5b50_alt1(&v11);
  if (v12 != nullptr) {
    v11 = *a2;
    v9 = SdkRoutine_1d554c(a1 + 8, &v11, a3, a4, 310, &v13);
  }
  else {
    v9 = 5642;
  }
  if (v13 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
  }
  return v9;
}

_QWORD* am_service_proxy_1d5b50(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  _QWORD** v4;
  _QWORD* v5;

  if (result[1] != 0) {
    v1 = *result;
    v2 = result;
    result = (_QWORD*)(*(__int64 (**)(_QWORD, __int64, __int64))(
        *(_QWORD*)*result + 16LL))(*result, 56, 8);
    if (result != nullptr) {
      result[2] = 0;
      result[3] = 0;
      *((_DWORD*)result + 10) = 1;
      v3 = SdkData_e87290;
      result[6] = v1;
      *result = v3 + 16;
      result[1] = 0;
      result[4] = v3 + 168;
      v4 = (_QWORD**)v2[1];
      v5 = *v4;
      *v4 = result;
      if (v5 != nullptr) {
        return X8CALL_X0(_QWORD*,
                         (*(__attribute__((swiftcall)) void (**)(
                             PSEUDO_X8, _QWORD*))(*v5 + 8LL))((void*)v5, v5));
      }
    }
    else {
      v2[1] = 0;
    }
  }
  return result;
}

__int64 am_service_proxy_1d6444(__int64 a1)
{
  *(_QWORD*)(a1 + 6576) = SdkData_e86d80 + 16;
  SdkRoutine_1d3d5c(a1 + 6576);
  return SdkRoutine_1d3d98((_DWORD*)a1);
}

__int64 am_service_proxy_1d6488(__int64 a1, __int64* a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  unsigned int v9;
  __int64 v11;
  __int64* v12;
  __int64 v13;

  v4 = *(_QWORD*)(a1 + 48);
  v13 = 0;
  v11 = v4;
  v12 = &v13;
  am_service_proxy_1d652c_alt1(&v11);
  if (v12 != nullptr) {
    v11 = *a2;
    v9 = SdkRoutine_1d554c(a1 + 8, &v11, a3, a4, 500, &v13);
  }
  else {
    v9 = 5642;
  }
  if (v13 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
  }
  return v9;
}

_QWORD* am_service_proxy_1d652c(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  _QWORD** v4;
  _QWORD* v5;

  if (result[1] != 0) {
    v1 = *result;
    v2 = result;
    result = (_QWORD*)(*(__int64 (**)(_QWORD, __int64, __int64))(
        *(_QWORD*)*result + 16LL))(*result, 56, 8);
    if (result != nullptr) {
      result[2] = 0;
      result[3] = 0;
      *((_DWORD*)result + 10) = 1;
      v3 = SdkData_e872b0;
      result[6] = v1;
      *result = v3 + 16;
      result[1] = 0;
      result[4] = v3 + 144;
      v4 = (_QWORD**)v2[1];
      v5 = *v4;
      *v4 = result;
      if (v5 != nullptr) {
        return X8CALL_X0(_QWORD*,
                         (*(__attribute__((swiftcall)) void (**)(
                             PSEUDO_X8, _QWORD*))(*v5 + 8LL))((void*)v5, v5));
      }
    }
    else {
      v2[1] = 0;
    }
  }
  return result;
}

__int64 am_service_proxy_1d67c0(__int64 a1)
{
  *(_QWORD*)(a1 + 6576) = SdkData_e86d80 + 16;
  SdkRoutine_1d3d5c(a1 + 6576);
  return SdkRoutine_1d3d98((_DWORD*)a1);
}

__int64 am_service_proxy_1d6804(__int64 a1, __int64* a2, __int64 a3, __int64 a4)
{
  int v8;
  int v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v15;

  nn_os_SdkMutexType_Lock_plt(a1 + 8);
  v8 = *(_DWORD*)(a1 + 12);
  if (v8 != 0) {
    if (*(_QWORD*)(a1 + 16) == 0) {
      *(_QWORD*)(a1 + 16) = a3;
      *(_QWORD*)(a1 + 24) = a4;
    }
    v9 = v8 + 1;
    v10 = 0;
    goto LABEL_5;
  }
  v11 = *a2;
  SdkRoutine_1c96e4(*a2);
  if (a2[2] == 0) {
    a2[2] = *(_QWORD*)v11 + 144LL;
  }
  SdkRoutine_1c9760(v11 + 6576, v11 + 6576);
  v13 = a2[1];
  v12 = a2[2];
  v15 = 0;
  v10 = am_service_proxy_1d6910_alt1(v11 + 6576, &v15, v12, v13);
  if (v10 == 0) {
    v9 = 1;
    *(_QWORD*)a1 = v15;
    *(_QWORD*)(a1 + 16) = a3;
    *(_QWORD*)(a1 + 24) = a4;
  LABEL_5:
    *(_DWORD*)(a1 + 12) = v9;
    goto LABEL_12;
  }
  if (v15 != 0) {
    (*(void (**)(void*))(*(_QWORD*)v15 + 8))((void*)v15);
  }
  *(_QWORD*)(v11 + 6576) = SdkData_e86d80 + 16;
  SdkRoutine_1d3d5c(v11 + 6576);
  SdkRoutine_1d3d98((_DWORD*)v11);
LABEL_12:
  nn_os_SdkMutexType_Unlock_plt(a1 + 8);
  return v10;
}

__int64 am_service_proxy_1d6910(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8;
  unsigned int v9;
  unsigned int v11;

  nn_sf_hipc_InitializeHipcServiceResolution_plt(a1);
  v11 = 0;
  v8 = nn_sf_hipc_ConnectToHipcService_plt(&v11, a4);
  v9 = v8;
  if ((_DWORD)v8 == 0) {
    v8 = am_service_proxy_1d6988_alt1(a1, a2, a3, v11);
    v9 = v8;
  }
  nn_sf_hipc_FinalizeHipcServiceResolution_plt(v8);
  return v9;
}

__int64 am_service_proxy_1d6988(__int64 a1, __int64 a2, __int64 a3,
                                unsigned int a4)
{
  unsigned int v6;

  v6 = am_service_proxy_1d69e0_alt1(a1, a2, a3, a4);
  if (v6 == 0) {
    SdkRoutine_1c9854(a1 + 16, a4);
    ++*(_DWORD*)(a1 + 60);
  }
  return v6;
}

__int64 am_service_proxy_1d69e0(__int64 a1, __int64* a2, __int64 a3,
                                unsigned int a4)
{
  unsigned int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  int v13;

  v13 = 0;
  v7 = nn_sf_hipc_client_HipcClientSessionManager_ConvertToDomainImpl_plt(
      a1, &v13, a4);
  if (v7 == 0) {
    v8 = v13;
    v9 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)a3 + 16LL))(
        a3, 56, 8);
    if (v9 != 0) {
      *(_QWORD*)(v9 + 16) = a1;
      *(_DWORD*)(v9 + 24) = v8;
      *(_DWORD*)(v9 + 28) = 0;
      *(_DWORD*)(v9 + 40) = 1;
      *(_BYTE*)(v9 + 8) = 1;
      v10 = SdkData_e872c0;
      *(_QWORD*)(v9 + 48) = a3;
      *(_QWORD*)v9 = v10 + 16;
      *(_QWORD*)(v9 + 32) = v10 + 96;
    }
    v11 = (_QWORD*)*a2;
    *a2 = v9;
    if (v11 != nullptr) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v11 + 8LL))(
          (void*)v11, v11);
    }
  }
  return v7;
}

__int64 am_service_proxy_1d88cc(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5;

  v5 = a2;
  return nn_sf_cmif_client_1d9058(0, a1 + 8, &v5, a3, a4);
}

__int64 am_service_proxy_1d8a20(__int64 a1, _QWORD* a2, unsigned int a3,
                                unsigned int a4, unsigned int a5,
                                unsigned int a6, unsigned int a7)
{
  return SdkRoutine_1d9ae4(a1 + 8, *a2, a2[1], a3, a4, a5, a6, a7, 101);
}

__int64 am_service_proxy_1d8bf8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v6;

  v4 = *(_QWORD*)(a1 + 48);
  v6 = a4;
  return nn_sf_cmif_client_1da4b4(v4, a1 + 8, a2, a3, &v6);
}

#pragma GCC visibility pop
