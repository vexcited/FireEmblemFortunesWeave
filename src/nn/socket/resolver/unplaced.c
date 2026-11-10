#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_1a3030(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_1a31a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_1a34e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _DWORD);
__int64 nn_lmem_FreeToExpHeap_plt(_QWORD, _QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 nn_sf_cmif_client_1a3310(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _DWORD);
__int64 nn_sf_hipc_CloseClientSessionHandle_plt(_QWORD);
__int64 nn_sf_hipc_GetMessageBufferOnTls_plt(_QWORD);
__int64 nn_sf_hipc_SendSyncRequest_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_sf_impl_detail_ServiceObjectImplBase2_ReleaseImpl_plt(_QWORD);
extern _UNKNOWN SdkData_eb9f68;
extern __int64 nn_socket_resolver_g_ResolverProxyHeap;
__int64 nn_socket_resolver_1a2b00(__int64 a1);
__int64 nn_socket_resolver_1a2b90(__int64 a1, _QWORD* a2, unsigned int a3);
__int64 nn_socket_resolver_1a2bb0(__int64 a1, unsigned int a2, _QWORD* a3);
__int64 nn_socket_resolver_1a2bd0(__int64 a1, unsigned int a2, __int64 a3,
                                  char a4, _QWORD* a5, __int64 a6, __int64 a7,
                                  _QWORD* a8, __int64 a9);
__int64 nn_socket_resolver_1a2c30(__int64 a1, unsigned int a2, __int64 a3,
                                  _QWORD* a4, unsigned int a5, unsigned int a6,
                                  __int64 a7, __int64 a8, _QWORD* a9,
                                  __int64 a10);

__int64 nn_socket_resolver_1a2b00(__int64 a1)
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
    nn_os_LockMutex_plt(&SdkData_eb9f68);
    nn_lmem_FreeToExpHeap_plt(nn_socket_resolver_g_ResolverProxyHeap, a1);
    return nn_os_UnlockMutex_plt(&SdkData_eb9f68);
  }
  return result;
}

__int64 nn_socket_resolver_1a2b90(__int64 a1, _QWORD* a2, unsigned int a3)
{
  return SdkRoutine_1a3030(a1 + 8, *a2, a2[1], a3, 0);
}

__int64 nn_socket_resolver_1a2bb0(__int64 a1, unsigned int a2, _QWORD* a3)
{
  return SdkRoutine_1a31a0(a1 + 8, a2, *a3, a3[1], 1);
}

__int64 nn_socket_resolver_1a2bd0(__int64 a1, unsigned int a2, __int64 a3,
                                  char a4, _QWORD* a5, __int64 a6, __int64 a7,
                                  _QWORD* a8, __int64 a9)
{
  return nn_sf_cmif_client_1a3310(a1 + 8, a2, a3, a4 & 1, *a5, a5[1], a6, a7,
                                  *a8, a8[1], a9, 2);
}

__int64 nn_socket_resolver_1a2c30(__int64 a1, unsigned int a2, __int64 a3,
                                  _QWORD* a4, unsigned int a5, unsigned int a6,
                                  __int64 a7, __int64 a8, _QWORD* a9,
                                  __int64 a10)
{
  return SdkRoutine_1a34e0(a1 + 8, a2, a3, *a4, a4[1], a5, a6, a7, a8, *a9,
                           a9[1], a10, 3);
}

#pragma GCC visibility pop
