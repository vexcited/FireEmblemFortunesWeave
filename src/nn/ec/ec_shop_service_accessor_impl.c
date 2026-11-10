#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_ec_ShopServiceAccessor_AsyncResponse_Detach_plt(void* this_);
__int64 nn_ec_detail_ShopServiceAccessServer_ToResult_plt(_QWORD);
__int64 nn_nifm_GetClientId_plt(void);
__int64 nn_nifm_IsAnyInternetRequestAccepted_plt(_QWORD);
__int64 nn_os_AttachReadableHandleToSystemEvent_plt(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 strlen_plt(_QWORD);
__int64 nn_ec_ShopServiceAccessor_Request(__int64 a1, void* a2, __int64* a3,
                                          char a4, unsigned __int8* a5,
                                          _QWORD* a6, __int64 a7);

__int64 nn_ec_ShopServiceAccessor_Request(__int64 a1, void* a2, __int64* a3,
                                          char a4, unsigned __int8* a5,
                                          _QWORD* a6, __int64 a7)
{
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  unsigned __int8* v17;
  __int64 v18;
  int v19;
  unsigned int v22;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned int v28;
  unsigned int v29;
  __int64 v30;
  unsigned int v31;
  unsigned int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned int v36;
  _QWORD v38[2];
  _QWORD v39[2];
  __int64 v40;
  __int64 v41;
  struct {
    _QWORD v42[3];
    char v43;
    char v44;
    __int16 v45;
    int v46;
  } v42_;

  v14 = nn_nifm_GetClientId_plt();
  if ((nn_nifm_IsAnyInternetRequestAccepted_plt(v14) & 1) == 0) {
    return 28836;
  }
  v15 = strlen_plt(a5);
  v16 = v15;
  v17 = a5;
  if (v15 != 0) {
    v18 = v15;
    v17 = a5;
    while (1) {
      v19 = *v17;
      if ((unsigned int)(v19 - 48) >= 0xA && (v19 & 0xFFFFFFDF) - 65 >= 0x1A &&
          ((unsigned int)(v19 - 33) > 0x3E ||
           ((1LL << ((unsigned __int8)v19 - 33)) & 0x40000000D6007FF9LL) ==
               0)) {
        v22 = v19 - 123;
        if (v22 > 3 || v22 == 1) {
          break;
        }
      }
      ++v17;
      if (--v18 == 0) {
        goto LABEL_21;
      }
    }
  }
  if (&a5[v15] != v17) {
    return 104100;
  }
LABEL_21:
  nn_os_LockMutex_plt(a1 + 24);
  v24 = *(_QWORD*)(a1 + 16);
  v42_.v43 = a4;
  v42_.v44 = 0;
  v42_.v45 = 0;
  v42_.v46 = 0;
  v40 = 0;
  v41 = 0;
  v25 = 2147483647000000000LL;
  if ((unsigned __int64)(a7 / 1000000000) >> 31 == 0) {
    v25 = a7;
  }
  if (a7 < 1000000000) {
    v25 = 60000000000LL;
  }
  v26 = *a3;
  v27 = a3[1];
  v42_.v42[2] = v25;
  v39[0] = &v40;
  v42_.v42[0] = v26;
  v42_.v42[1] = v27;
  v28 = (*(__int64 (**)(__int64, __int64*, _QWORD*, _QWORD*))(
      *(_QWORD*)v24 + 32LL))(v24, &v41, v39, v42_.v42);
  v29 = nn_ec_detail_ShopServiceAccessServer_ToResult_plt(v28);
  if (v29 == 0) {
    if (*a6 != 0 && (v30 = a6[1]) != 0) {
      v39[0] = *a6;
      v39[1] = v30;
    }
    else {
      v39[0] = 0;
      v39[1] = 0;
    }
    v38[0] = a5;
    v38[1] = v16;
    v31 = (*(__int64 (**)(__int64, _QWORD*, _QWORD*))(*(_QWORD*)v40 + 72LL))(
        v40, v38, v39);
    v29 = nn_ec_detail_ShopServiceAccessServer_ToResult_plt(v31);
    if (v29 == 0) {
      v32 = (*(__int64 (**)(__int64))(*(_QWORD*)v40 + 64LL))(v40);
      v29 = nn_ec_detail_ShopServiceAccessServer_ToResult_plt(v32);
      if (v29 == 0) {
        v33 = v40;
        v40 = 0;
        v34 = nn_ec_ShopServiceAccessor_AsyncResponse_Detach_plt(a2);
        if (*((_BYTE*)a2 + 72) != 0) {
          nn_diag_detail_AbortImpl_plt_856170(v34);
        }
        nn_os_AttachReadableHandleToSystemEvent_plt(
            (char*)a2 + 32, (unsigned int)v41, BYTE4(v41), 0);
        *((_QWORD*)a2 + 3) = v33;
        nn_os_LockMutex_plt(a1 + 24);
        v35 = *(_QWORD*)a2;
        *(_QWORD*)a2 = *(_QWORD*)(a1 + 56);
        *(_QWORD*)(v35 + 8) = a1 + 56;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8LL) = a2;
        *(_QWORD*)(a1 + 56) = v35;
        nn_os_UnlockMutex_plt(a1 + 24);
        v29 = 0;
        *((_QWORD*)a2 + 2) = a1;
        BYTE4(v41) = 0;
        LODWORD(v41) = 0;
      }
    }
  }
  v36 = v29;
  if (v40 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v40 + 8LL))(v40);
  }
  if (BYTE4(v41) == 1) {
    nn_os_CloseNativeHandle_plt((unsigned int)v41);
  }
  nn_os_UnlockMutex_plt(a1 + 24);
  return v36;
}

#pragma GCC visibility pop
