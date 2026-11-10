#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_85e320(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);
__int64 SdkRoutine_85e350(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_85e360(_QWORD, _QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_sf_cmif_server_CmifServerDomainManager_CmifServerDomainManager_plt(
    _QWORD);
__int64 nn_sf_cmif_server_CmifServerDomainManager_CreateDomain_plt(_QWORD);
__int64 nn_sf_hipc_AttachWaitHolderForReceive_plt(_QWORD, _QWORD);
__int64 nn_sf_hipc_CreateSession_plt(_QWORD, _QWORD);
__int64
    nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_DoRegisterServerSessionToWait_plt(
        _QWORD, _QWORD);
extern __int64 SdkData_e86ff0;
extern __int64 SdkData_e87010;
extern __int64 SdkData_e87018;
extern __int64 SdkData_e87020;
extern __int64 SdkData_e87028;
__int64
nn_sf_hipc_server_v1_HipcServerSessionManagerWithDomain_Process2ManagerInvoke(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6);
__int64
nn_sf_hipc_server_v1_HipcServerSessionManagerWithDomain_HipcManagerImpl_CloneCurrentObjectImpl(
    __int64 a1, unsigned int* a2, __int64 a3);
_QWORD*
nn_sf_hipc_server_v1_HipcServerSessionManagerWithDomain_HipcManagerImpl_HipcManagerImpl(
    _QWORD* result, __int64 a2, __int64 a3);
__int64
nn_sf_hipc_server_v1_HipcServerSessionManagerWithDomain_HipcManagerImpl_ConvertCurrentObjectToDomain(
    _QWORD* a1, unsigned int* a2);
__int64
nn_sf_hipc_server_v1_HipcServerSessionManagerWithDomain_HipcManagerImpl_CopyFromCurrentDomain(
    _QWORD* a1, unsigned int* a2, unsigned int a3);
__int64
nn_sf_hipc_server_v1_HipcServerSessionManagerWithDomain_HipcManagerImpl_QueryPointerBufferSize(
    __int64 a1, _WORD* a2);
__int64
nn_sf_hipc_server_v1_HipcServerSessionManagerWithDomain_HipcManagerImpl_CloneCurrentObjectEx(
    _QWORD* a1, __int64 a2, unsigned int a3);
__int64
nn_sf_hipc_server_v1_HipcServerSessionManagerWithDomain_HipcServerSessionManagerWithDomain(
    _QWORD* a1);
__int64

nn_sf_hipc_server_v1_HipcServerSessionManagerWithDomain_Process2ManagerInvoke(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result;
  unsigned int v13;
  _QWORD* v14[2];
  __int64 v15;
  _QWORD v16[2];

  v16[1] = 0;
  v16[0] = 0;
  SdkRoutine_85e350(v16, a1, a2, 0);
  v15 = SdkData_e87010 + 16;
  v14[0] = &v15;
  v14[1] = (_QWORD*)SdkData_e87018;
  result = SdkRoutine_85e320(a1, v14, a2, a3, a4, a5, a6);
  if (v14[0] != nullptr) {
    v13 = result;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
        *v14[0] + 8LL))((void*)v14[0], v14[0]);
    return v13;
  }
  return result;
}

__int64

nn_sf_hipc_server_v1_HipcServerSessionManagerWithDomain_HipcManagerImpl_CloneCurrentObjectImpl(
    __int64 a1, unsigned int* a2, __int64 a3)
{
  __int64 v3;
  void (***v5)(_QWORD);
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 result;
  int v15;
  _QWORD v16[2];
  __int64 v17;

  v3 = *(_QWORD*)(a1 + 8);
  v5 = *(void (****)(_QWORD))(v3 + 112);
  v16[0] = v5;
  if (v5 == nullptr) {
    return 251915;
  }
  (**v5)(v5);
  v8 = *(_QWORD*)(v3 + 120);
  v17 = 0;
  v16[1] = v8;
  v15 = nn_sf_hipc_CreateSession_plt((char*)&v17 + 4, &v17);
  if (v15 != 0) {
  LABEL_11:
    nn_diag_detail_AbortImpl_plt_858db0(&v15);
    __udf(0);
  }
  v9 = HIDWORD(v17);
  v10 = (*(__int64 (**)(__int64, _QWORD*, __int64))(*(_QWORD*)a3 + 8LL))(
      a3, v16, *(_QWORD*)(a1 + 8) + 128LL);
  if (v10 == 0) {
    v15 = 52235;
    nn_diag_detail_AbortImpl_plt_858db0(&v15);
    goto LABEL_11;
  }
  v11 = v10;
  nn_sf_hipc_AttachWaitHolderForReceive_plt(v10, v9);
  *(_BYTE*)(v11 + 68) = 0;
  *(_DWORD*)(v11 + 72) = v9;
  *(_DWORD*)(v11 + 64) = 1;
  nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_DoRegisterServerSessionToWait_plt(
      a3, v11);
  v12 = *a2;
  *a2 = v17;
  v13 = *((unsigned __int8*)a2 + 4);
  *((_BYTE*)a2 + 4) = 1;
  if (v13 == 1) {
    nn_os_CloseNativeHandle_plt(v12);
  }
  result = v16[0];
  if (v16[0] != 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v16[0] + 8LL))(v16[0]);
    return 0;
  }
  return result;
}

_QWORD*

nn_sf_hipc_server_v1_HipcServerSessionManagerWithDomain_HipcManagerImpl_HipcManagerImpl(
    _QWORD* result, __int64 a2, __int64 a3)
{
  *result = a2;
  result[1] = a3;
  return result;
}

__int64

nn_sf_hipc_server_v1_HipcServerSessionManagerWithDomain_HipcManagerImpl_ConvertCurrentObjectToDomain(
    _QWORD* a1, unsigned int* a2)
{
  __int64 v4;
  __int64 (**v5)(__int64, unsigned int*, __int64);
  __int64 v6;
  _QWORD* v7;
  unsigned int v8;
  unsigned int v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;

  v4 = nn_sf_cmif_server_CmifServerDomainManager_CreateDomain_plt(*a1 + 16LL);
  if (v4 == 0) {
    return 102411;
  }
  v6 = v4 + 8;
  v5 = *(__int64 (***)(__int64, unsigned int*, __int64))(v4 + 8);
  v7 = (_QWORD*)v4;
  v14 = 0;
  v8 = (*v5)(v4 + 8, &v14, 1);
  if (v8 != 0) {
    v9 = v8;
    (*(void (**)(_QWORD*))(*v7 + 8LL))(v7);
    return v9;
  }
  else {
    (*(void (**)(__int64, _QWORD, __int64))(v7[1] + 16LL))(v6, v14,
                                                           a1[1] + 112LL);
    v11 = a1[1];
    v12 = *(_QWORD*)(v11 + 112);
    v13 = SdkData_e87020;
    *(_QWORD*)(v11 + 112) = v7;
    *(_QWORD*)(v11 + 120) = v13;
    if (v12 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
    }
    *a2 = v14;
    return 0;
  }
}

__int64

nn_sf_hipc_server_v1_HipcServerSessionManagerWithDomain_HipcManagerImpl_CopyFromCurrentDomain(
    _QWORD* a1, unsigned int* a2, unsigned int a3)
{
  __int64 v3;
  unsigned int v5;
  __int64 v6;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v16;
  _QWORD v17[2];
  __int64 v18;

  v3 = a1[1];
  v5 = 251403;
  v6 = *(_QWORD*)(v3 + 112);
  if (*(_QWORD*)(v3 + 120) != SdkData_e87020 || v6 == 0) {
    return v5;
  }
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, _QWORD))(
      *(_QWORD*)(v6 + 8) + 32LL))((void*)v17, v6 + 8, a3);
  if (v17[0] == 0) {
    return 251915;
  }
  v18 = 0;
  v16 = nn_sf_hipc_CreateSession_plt((char*)&v18 + 4, &v18);
  if (v16 != 0) {
  LABEL_16:
    nn_diag_detail_AbortImpl_plt_858db0(&v16);
    __udf(0);
  }
  v9 = *a1;
  v10 = HIDWORD(v18);
  v11 = (*(__int64 (**)(_QWORD, _QWORD*, __int64))(*(_QWORD*)*a1 + 8LL))(
      *a1, v17, a1[1] + 128LL);
  if (v11 == 0) {
    v16 = 52235;
    nn_diag_detail_AbortImpl_plt_858db0(&v16);
    goto LABEL_16;
  }
  v12 = v11;
  nn_sf_hipc_AttachWaitHolderForReceive_plt(v11, v10);
  *(_BYTE*)(v12 + 68) = 0;
  *(_DWORD*)(v12 + 72) = v10;
  *(_DWORD*)(v12 + 64) = 1;
  nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_DoRegisterServerSessionToWait_plt(
      v9, v12);
  v13 = *a2;
  *a2 = v18;
  v14 = *((unsigned __int8*)a2 + 4);
  *((_BYTE*)a2 + 4) = 1;
  if (v14 == 1) {
    nn_os_CloseNativeHandle_plt(v13);
  }
  if (v17[0] != 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v17[0] + 8LL))(v17[0]);
  }
  return 0;
}

__int64

nn_sf_hipc_server_v1_HipcServerSessionManagerWithDomain_HipcManagerImpl_QueryPointerBufferSize(
    __int64 a1, _WORD* a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(a1 + 8);
  *a2 = *(_QWORD*)(v2 + 88);
  return 0;
}

__int64

nn_sf_hipc_server_v1_HipcServerSessionManagerWithDomain_HipcManagerImpl_CloneCurrentObjectEx(
    _QWORD* a1, __int64 a2, unsigned int a3)
{
  __int64 v5;

  v5 = (*(__int64 (**)(_QWORD, _QWORD))(*(_QWORD*)*a1 + 40LL))(*a1, a3);
  if (v5 != 0) {
    return SdkRoutine_85e360(a1, a2, v5);
  }
  else {
    return 522;
  }
}

__int64

nn_sf_hipc_server_v1_HipcServerSessionManagerWithDomain_HipcServerSessionManagerWithDomain(
    _QWORD* a1)
{
  __int64 result;
  __int64 v3;

  *a1 = SdkData_e86ff0 + 16;
  a1[1] = 0;
  result =
      nn_sf_cmif_server_CmifServerDomainManager_CmifServerDomainManager_plt(a1 +
                                                                            2);
  v3 = SdkData_e87028 + 80;
  *a1 = SdkData_e87028 + 16;
  a1[2] = v3;
  return result;
}

#pragma GCC visibility pop
