#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_5a3c40(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD);
__int64 SdkRoutine_5a3f20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_5a4200(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);
__int64 SdkRoutine_5a4410(_QWORD);
__int64 nn_lmem_CreateExpHeap_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_lmem_FreeToExpHeap_plt(_QWORD, _QWORD);
__int64 nn_os_InitializeMutex_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 nn_sf_cmif_client_5a4050(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD, _QWORD, _QWORD, _DWORD);
__int64 nn_sf_hipc_CloseClientSessionHandle_plt(_QWORD);
__int64 nn_sf_hipc_GetMessageBufferOnTls_plt(_QWORD);
__int64 nn_sf_hipc_SendSyncRequest_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_sf_impl_detail_ServiceObjectImplBase2_ReleaseImpl_plt(_QWORD);
extern _UNKNOWN SdkData_f662b8;
extern _UNKNOWN SdkData_f662e0;
extern __int64 SdkData_f662b0;
__int64 cmif_client_struct_message_5a3820();
__int64 cmif_client_struct_message_5a3870(__int64 a1);
__int64 cmif_client_struct_message_5a3930(__int64 a1, __int64 a2, __int64 a3,
                                          _QWORD* a4, _QWORD* a5, _QWORD* a6,
                                          __int64 a7, __int64 a8);
__int64 cmif_client_struct_message_5a3990(__int64 a1, __int64 a2, __int64 a3,
                                          _QWORD* a4, _QWORD* a5, _QWORD* a6,
                                          __int64 a7, __int64 a8);
__int64 cmif_client_struct_message_5a3a00(__int64 a1, __int64 a2, __int64 a3,
                                          unsigned __int8 a4, char a5);
__int64 cmif_client_struct_message_5a3a20(__int64 a1, __int64 a2, __int64 a3,
                                          _QWORD* a4, _QWORD* a5, __int64 a6,
                                          char a7);
__int64 cmif_client_struct_message_5a3a70(__int64 a1, __int64* a2,
                                          unsigned __int8 a3, __int64 a4,
                                          unsigned int a5);

__int64 cmif_client_struct_message_5a3820()
{
  SdkData_f662b0 = nn_lmem_CreateExpHeap_plt(&SdkData_f662e0, 1024, 0);
  return nn_os_InitializeMutex_plt(&SdkData_f662b8, 0, 0);
}

__int64 cmif_client_struct_message_5a3870(__int64 a1)
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
    nn_os_LockMutex_plt(&SdkData_f662b8);
    nn_lmem_FreeToExpHeap_plt(SdkData_f662b0, a1);
    return nn_os_UnlockMutex_plt(&SdkData_f662b8);
  }
  return result;
}

__int64 cmif_client_struct_message_5a3930(__int64 a1, __int64 a2, __int64 a3,
                                          _QWORD* a4, _QWORD* a5, _QWORD* a6,
                                          __int64 a7, __int64 a8)
{
  return SdkRoutine_5a3c40(a1 + 8, a2, a3, *a4, 4LL * a4[1], *a5, 4LL * a5[1],
                           a8, *a6, 4LL * a6[1], a7, 5);
}

__int64 cmif_client_struct_message_5a3990(__int64 a1, __int64 a2, __int64 a3,
                                          _QWORD* a4, _QWORD* a5, _QWORD* a6,
                                          __int64 a7, __int64 a8)
{
  return SdkRoutine_5a3c40(a1 + 8, a2, a3, *a4, 4LL * a4[1], *a5, 4LL * a5[1],
                           a8, *a6, 4LL * a6[1], a7, 6);
}

__int64 cmif_client_struct_message_5a3a00(__int64 a1, __int64 a2, __int64 a3,
                                          unsigned __int8 a4, char a5)
{
  return SdkRoutine_5a3f20(a1 + 8, a2, a3, a4, a5 & 1, 2010);
}

__int64 cmif_client_struct_message_5a3a20(__int64 a1, __int64 a2, __int64 a3,
                                          _QWORD* a4, _QWORD* a5, __int64 a6,
                                          char a7)
{
  return nn_sf_cmif_client_5a4050(a1 + 8, a2, a3, *a4, 12LL * a4[1], *a5, a5[1],
                                  a6, a7 & 1, 2020);
}

__int64 cmif_client_struct_message_5a3a70(__int64 a1, __int64* a2,
                                          unsigned __int8 a3, __int64 a4,
                                          unsigned int a5)
{
  unsigned int v10;
  __int64 v11;
  __int64 v13;
  __int64* v14;
  __int64 v15;

  v15 = 0;
  v13 = 0;
  v14 = &v15;
  SdkRoutine_5a4410(&v13);
  if (v14 == nullptr) {
    v10 = 5642;
    v11 = v15;
    if (v15 == 0) {
      return v10;
    }
    goto LABEL_3;
  }
  v13 = *a2;
  v10 = SdkRoutine_5a4200(a1 + 8, &v13, a3, a4, a5, 2100, &v15);
  v11 = v15;
  if (v15 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
  }
  return v10;
}

#pragma GCC visibility pop
