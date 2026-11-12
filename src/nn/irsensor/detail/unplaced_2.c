#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 HeartRateCaptureState_HeartRateCaptureState_plt(_QWORD);
__int64 HeartRateDriver_GetCaptureState_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int);
__int64 nn_irsensor_GetTeraPluginProcessorStates_plt(_QWORD);
__int64 nn_irsensor_detail_GetIrCameraHandlePlayerNumber_plt(_QWORD);
__int64 nn_lmem_FreeToExpHeap_plt(_QWORD, _QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 nn_sf_hipc_CloseClientSessionHandle_plt(_QWORD);
__int64 nn_sf_hipc_GetMessageBufferOnTls_plt(_QWORD);
__int64 nn_sf_hipc_SendSyncRequest_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_sf_impl_detail_ServiceObjectImplBase2_ReleaseImpl_plt(_QWORD);
extern _QWORD SdkData_10492f0[9];
extern void (*SdkData_e89210[18])();
__int64 nn_irsensor_detail_742ec0(__int64 a1, __int64 a2);
__int64 nn_irsensor_detail_743f90(__int64 a1);

__int64 nn_irsensor_detail_742ec0(__int64 a1, __int64 a2)
{
  unsigned int v3;
  _QWORD* v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  int* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  _QWORD* v21;
  int v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  int v27;
  struct {
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
  } v29_;
  _QWORD v34[23];
  __int64 v35;
  _QWORD v36[282];
  struct {
    int v37;
    char gap2688_[2860];
    int v38;
  } v37_;

  v3 = 82125;
  v37_.v38 = 0;
  v4 = (_QWORD*)SdkData_10492f0[(
      int)nn_irsensor_detail_GetIrCameraHandlePlayerNumber_plt(a2)];
  memset_plt((void*)v36, nullptr, 5120);
  nn_irsensor_GetTeraPluginProcessorStates_plt(v36);
  v7 = v37_.v38;
  if (v37_.v38 == 0) {
    return v3;
  }
  memset_plt((void*)v34, nullptr, 384);
  if ((unsigned int)v7 < 8) {
    v9 = 0;
    if ((v7 & 7) == 0) {
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  v10 = &v35;
  v11 = 0;
  v12 = &v37_.v37;
  do {
    *(v10 - 1) = (__int64)v12;
    *v10 = 300;
    v13 = *(_QWORD*)(v12 - 565);
    v14 = *(_QWORD*)(v12 - 485);
    *(v10 - 19) = (__int64)(v12 - 480);
    *(v10 - 18) = 300;
    v11 -= 8;
    *(v10 - 23) = v13;
    *(v10 - 22) = (__int64)(v12 - 560);
    *(v10 - 21) = 300;
    *(v10 - 20) = v14;
    v15 = *(_QWORD*)(v12 - 405);
    *(v10 - 13) = (__int64)(v12 - 320);
    *(v10 - 12) = 300;
    *(v10 - 17) = v15;
    *(v10 - 16) = (__int64)(v12 - 400);
    v16 = *(_QWORD*)(v12 - 325);
    v17 = *(_QWORD*)(v12 - 245);
    *(v10 - 15) = 300;
    *(v10 - 14) = v16;
    *(v10 - 11) = v17;
    *(v10 - 10) = (__int64)(v12 - 240);
    v18 = *(_QWORD*)(v12 - 165);
    *(v10 - 9) = 300;
    *(v10 - 8) = v18;
    *(v10 - 7) = (__int64)(v12 - 160);
    *(v10 - 6) = 300;
    *(v10 - 5) = *(_QWORD*)(v12 - 85);
    *(v10 - 4) = (__int64)(v12 - 80);
    v8 = *(_QWORD*)(v12 - 5);
    v12 += 640;
    *(v10 - 3) = 300;
    *(v10 - 2) = v8;
    v10 += 24;
  } while (-(__int64)(v7 & 0xFFFFFFFFFFFFFFF8LL) != v11);
  v9 = -v11;
  if ((v7 & 7) != 0) {
  LABEL_8:
    v19 = v7 & 7;
    v20 = (char*)&v36[40 * v9 + 2] + 4;
    v21 = &v34[3 * v9 + 1];
    do {
      v8 = *(_QWORD*)(v20 - 20);
      v21[1] = 300;
      --v19;
      *(v21 - 1) = v8;
      *v21 = v20;
      v20 += 320;
      v21 += 3;
    } while (v19 != 0);
  }
LABEL_10:
  *(_QWORD*)(a1 + 8) = v8;
  v29_.v32 = 0;
  v29_.v33 = 0;
  v29_.v30 = 0;
  v29_.v31 = 0;
  v29_.v29 = 0;
  HeartRateCaptureState_HeartRateCaptureState_plt(&v29_.v29);
  if ((HeartRateDriver_GetCaptureState_plt(*v4, &v29_.v29, v34, v37_.v38) &
       1) != 0) {
    v22 = v29_.v32;
    v3 = 0;
    *(_QWORD*)(a1 + 28) = v29_.v31;
    v24 = v29_.v29;
    v23 = HIDWORD(v29_.v29);
    *(_DWORD*)(a1 + 36) = v22;
    v25 = v29_.v30;
    *(_DWORD*)(a1 + 16) = v23;
    v26 = v29_.v33;
    *(_QWORD*)(a1 + 20) = v25;
    *(_QWORD*)(a1 + 48) = v26;
    *(_DWORD*)(a1 + 40) = HIDWORD(v29_.v32);
    if ((unsigned int)(v24 - 1) >= 5) {
      v27 = 0;
    }
    else {
      v27 = v24;
    }
    *(_DWORD*)a1 = v27;
  }
  return v3;
}

__int64 nn_irsensor_detail_743f90(__int64 a1)
{
  __int64 result;
  __int64 v3;
  _QWORD* v4;
  void(__attribute__((noreturn)) * v5)();

  result = nn_sf_impl_detail_ServiceObjectImplBase2_ReleaseImpl_plt(a1 + 24);
  if ((result & 1) != 0) {
    if (*(_BYTE*)(a1 + 8) == 1) {
      v3 = *(unsigned int*)(a1 + 12);
      v4 = (_QWORD*)nn_sf_hipc_GetMessageBufferOnTls_plt(result);
      *v4 = 2;
      nn_sf_hipc_SendSyncRequest_plt(v3, v4, 256);
      nn_sf_hipc_CloseClientSessionHandle_plt(v3);
    }
    v5 = SdkData_e89210[0];
    nn_os_LockMutex_plt((char*)SdkData_e89210[0] + 8);
    nn_lmem_FreeToExpHeap_plt(*(_QWORD*)v5, a1);
    return nn_os_UnlockMutex_plt((char*)v5 + 8);
  }
  return result;
}

#pragma GCC visibility pop
