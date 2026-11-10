#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_1e5620(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD,
                          _QWORD);
__int64 SdkRoutine_1e58c0(_QWORD);
__int64 nn_audio_detail_1e90c0(_QWORD);
__int64 nn_lmem_CreateExpHeap_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_lmem_FreeToExpHeap_plt(_QWORD, _QWORD);
__int64 nn_os_InitializeMutex_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 nn_sf_cmif_client_1e6580(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD,
                                 _QWORD);
__int64 nn_sf_hipc_CloseClientSessionHandle_plt(_QWORD);
__int64 nn_sf_hipc_GetMessageBufferOnTls_plt(_QWORD);
__int64 nn_sf_hipc_SendSyncRequest_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_sf_impl_detail_ServiceObjectImplBase2_ReleaseImpl_plt(_QWORD);
extern _UNKNOWN SdkData_f01d68;
extern _UNKNOWN SdkData_f05e48;
extern _UNKNOWN SdkData_f05e70;
extern _UNKNOWN SdkData_f0dee8;
extern __int64 nn_audio_detail_g_AudioInManagerProxyHeap;
extern __int64 nn_audio_detail_g_AudioOutManagerProxyHeap;
extern __int64 nn_audio_detail_g_AudioSystemManagerForAppletProxyHeap;
__int64 nn_audio_detail_1e50f0(__int64 a1);
__int64 nn_audio_detail_1e51a0(__int64 a1, __int64* a2, __int64* a3, __int64 a4,
                               __int64 a5, __int64 a6, _QWORD* a7, __int64 a8);
__int64 nn_audio_detail_1e8e50(__int64 a1);
__int64 nn_audio_detail_1e8ee0(__int64 a1, __int64* a2, __int64* a3, __int64 a4,
                               __int64 a5, __int64 a6, _QWORD* a7, __int64 a8);
__int64 nn_audio_detail_1e8fd0(__int64 a1, __int64* a2, __int64* a3, __int64 a4,
                               __int64 a5, __int64 a6, _QWORD* a7, __int64 a8);
__int64 nn_audio_detail_1e91e0();
__int64 nn_audio_detail_1ea580(__int64 a1);

__int64 nn_audio_detail_1e50f0(__int64 a1)
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
    nn_os_LockMutex_plt(&SdkData_f01d68);
    nn_lmem_FreeToExpHeap_plt(nn_audio_detail_g_AudioInManagerProxyHeap, a1);
    return nn_os_UnlockMutex_plt(&SdkData_f01d68);
  }
  return result;
}

__int64 nn_audio_detail_1e51a0(__int64 a1, __int64* a2, __int64* a3, __int64 a4,
                               __int64 a5, __int64 a6, _QWORD* a7, __int64 a8)
{
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  __int64 v22;
  __int64* v23;
  __int64 v24;

  v24 = 0;
  v22 = 0;
  v23 = &v24;
  SdkRoutine_1e58c0(&v22);
  if (v23 == nullptr) {
    v19 = 5642;
    v20 = v24;
    if (v24 == 0) {
      return v19;
    }
    goto LABEL_3;
  }
  v17 = *a3;
  v18 = a3[1];
  v22 = *a2;
  v19 = SdkRoutine_1e5620(a1 + 8, &v22, v17, v18, a4, a5, a6, v16, *a7, a7[1],
                          a8, 1, &v24);
  v20 = v24;
  if (v24 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v20 + 8LL))(v20);
  }
  return v19;
}

__int64 nn_audio_detail_1e8e50(__int64 a1)
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
    nn_os_LockMutex_plt(&SdkData_f05e48);
    nn_lmem_FreeToExpHeap_plt(nn_audio_detail_g_AudioOutManagerProxyHeap, a1);
    return nn_os_UnlockMutex_plt(&SdkData_f05e48);
  }
  return result;
}

__int64 nn_audio_detail_1e8ee0(__int64 a1, __int64* a2, __int64* a3, __int64 a4,
                               __int64 a5, __int64 a6, _QWORD* a7, __int64 a8)
{
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  __int64 v22;
  __int64* v23;
  __int64 v24;

  v24 = 0;
  v22 = 0;
  v23 = &v24;
  nn_audio_detail_1e90c0(&v22);
  if (v23 == nullptr) {
    v19 = 5642;
    v20 = v24;
    if (v24 == 0) {
      return v19;
    }
    goto LABEL_3;
  }
  v17 = *a3;
  v18 = a3[1];
  v22 = *a2;
  v19 = SdkRoutine_1e5620(a1 + 8, &v22, v17, v18, a4, a5, a6, v16, *a7, a7[1],
                          a8, 1, &v24);
  v20 = v24;
  if (v24 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v20 + 8LL))(v20);
  }
  return v19;
}

__int64 nn_audio_detail_1e8fd0(__int64 a1, __int64* a2, __int64* a3, __int64 a4,
                               __int64 a5, __int64 a6, _QWORD* a7, __int64 a8)
{
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  __int64 v22;
  __int64* v23;
  __int64 v24;

  v24 = 0;
  v22 = 0;
  v23 = &v24;
  nn_audio_detail_1e90c0(&v22);
  if (v23 == nullptr) {
    v19 = 5642;
    v20 = v24;
    if (v24 == 0) {
      return v19;
    }
    goto LABEL_3;
  }
  v17 = *a3;
  v18 = a3[1];
  v22 = *a2;
  v19 = nn_sf_cmif_client_1e6580(a1 + 8, &v22, v17, v18, a4, a5, a6, v16, *a7,
                                 a7[1], a8, 3, &v24);
  v20 = v24;
  if (v24 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v20 + 8LL))(v20);
  }
  return v19;
}

__int64 nn_audio_detail_1e91e0()
{
  nn_audio_detail_g_AudioOutManagerProxyHeap =
      nn_lmem_CreateExpHeap_plt(&SdkData_f05e70, 0x4000, 0);
  return nn_os_InitializeMutex_plt(&SdkData_f05e48, 0, 0);
}

__int64 nn_audio_detail_1ea580(__int64 a1)
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
    nn_os_LockMutex_plt(&SdkData_f0dee8);
    nn_lmem_FreeToExpHeap_plt(
        nn_audio_detail_g_AudioSystemManagerForAppletProxyHeap, a1);
    return nn_os_UnlockMutex_plt(&SdkData_f0dee8);
  }
  return result;
}

#pragma GCC visibility pop
