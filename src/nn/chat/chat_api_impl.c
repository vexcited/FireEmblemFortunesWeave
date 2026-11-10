#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
    nn_chat_gsv_MakeImagePreference_plt(PSEUDO_X8, _QWORD, _QWORD, _QWORD);
__int64 nn_chat_gsv_CalculateRequiredBufferMemory_plt(_QWORD, _QWORD, _QWORD,
                                                      _QWORD);
__int64 nn_chat_gsv_CreateImagePool_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                        _QWORD);
__int64 nn_chat_gsv_CreateMetadataPool_plt(_QWORD, _QWORD);
__int64 nn_chat_gsv_DestroyImagePool_plt(_QWORD);
__int64 nn_chat_gsv_DestroyMetadataPool_plt(_QWORD);
__int64 nn_chat_gsv_RequestReceiveImage_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                            _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_diag_detail_NotNullImpl_plt(_QWORD);
__int64 nn_gs_TryWaitNativeSync_plt(_QWORD);
__int64 nn_gs_WaitNativeSync_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_SdkRecursiveMutexType_Lock_plt(void* this_);
extern _UNKNOWN SdkData_1046578;
extern __int64 SdkData_1046588;
extern __int64 SdkData_1046598;
extern __int64 SdkData_10465a8;
extern __int64 SdkData_10465b8;
extern __int64 SdkData_e88fe8;
extern __int64 SdkData_e89010;
extern __int64 SdkData_e89018;
extern char SdkData_1046580;
extern char SdkData_1046590;
extern char SdkData_10465a0;
extern char SdkData_10465b0;
extern void (*SdkData_e88ff8[85])();
extern void (*SdkData_e89000[84])();
__int64 nn_chat_CalculateLocalCameraVideoBufferSize(void* this_,
                                                    unsigned int a2,
                                                    unsigned int a3);
__int64 nn_chat_RequestNextLocalCameraImage(_QWORD* a1, __int64 a2,
                                            unsigned int a3, __int64 a4,
                                            __int64 a5);
__int64 chat_api_6b4850(_QWORD* a1, char a2);
__int64 chat_api_6b49b0(__int64* a1, char a2);
__int64 nn_chat_CalculateRemoteCameraVideoBufferSize(void* this_,
                                                     unsigned int a2,
                                                     unsigned int a3);
__int64 nn_chat_InitializeRemoteCameraVideoStorage(_QWORD* a1, unsigned int a2,
                                                   unsigned int a3,
                                                   unsigned int a4, __int64 a5,
                                                   __int64 a6);
__int64 nn_chat_FinalizeRemoteCameraVideoStorage(__int64 a1);
__int64 nn_chat_RequestNextRemoteCameraImage(_QWORD* a1, __int64 a2,
                                             unsigned int a3, __int64 a4,
                                             __int64 a5, __int64* a6);

__int64 nn_chat_CalculateLocalCameraVideoBufferSize(void* this_,
                                                    unsigned int a2,
                                                    unsigned int a3)
{
  unsigned int v3;
  __int64 v6;
  __int64 v7;
  _QWORD v9[8];
  int v10;
  __int64 v11;
  __int64 v12;

  v3 = (unsigned int)this_;
  v6 = nn_os_SdkRecursiveMutexType_Lock_plt((void*)SdkData_e88fe8);
  if (*(int*)SdkData_e89000[0] <= 0) {
    nn_diag_detail_AbortImpl_plt_856170(v6);
  }
  if (v3 - 32 >= 0x761) {
    nn_diag_detail_AbortImpl_plt_856170(v6);
  }
  if (a2 - 32 >= 0x419) {
    nn_diag_detail_AbortImpl_plt_856170(v6);
  }
  if (a3 - 1 >= 4) {
    nn_diag_detail_AbortImpl_plt_856170(v6);
  }
  v12 = 0;
  v11 = 0;
  nn_chat_gsv_MakeImagePreference_plt((void*)(v9), v3, a2, 0);
  v10 = nn_chat_gsv_CalculateRequiredBufferMemory_plt(&v12, &v11, v9, a3);
  if (v10 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v10);
  }
  v7 = (int)v12;
  _runlock_0_0((void*)SdkData_e88fe8);
  return v7;
}

__int64 nn_chat_RequestNextLocalCameraImage(_QWORD* a1, __int64 a2,
                                            unsigned int a3, __int64 a4,
                                            __int64 a5)
{
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char* v14;
  int v15;
  __int64 v16;
  char v17;
  __int64 v18;
  __int64 v19;
  int v21;
  struct {
    __int64 v22;
    __int64 v23;
  } v22_;

  v10 = nn_os_SdkRecursiveMutexType_Lock_plt((void*)SdkData_e88fe8);
  if (*(int*)SdkData_e89000[0] <= 0) {
    nn_diag_detail_AbortImpl_plt_856170(v10);
  }
  v11 = nn_diag_detail_NotNullImpl_plt(a1);
  if ((v11 & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v11);
  }
  v12 = nn_diag_detail_NotNullImpl_plt(a2);
  if ((v12 & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v12);
  }
  if ((a3 & 0x80000000) != 0) {
    nn_diag_detail_AbortImpl_plt_856170(v12);
  }
  if (a3 >= 4) {
    nn_diag_detail_AbortImpl_plt_856170(v12);
  }
  v13 = a2 + 24LL * a3;
  v15 = *(unsigned __int8*)(v13 + 128);
  v14 = (char*)(v13 + 128);
  if (v15 == 1) {
    v16 = nn_gs_TryWaitNativeSync_plt(v14 + 8);
    if ((v16 & 1) == 0) {
      nn_diag_detail_AbortImpl_plt_856170(v16);
    }
  }
  v22_.v22 = 0;
  v22_.v23 = 0;
  v21 = nn_chat_gsv_RequestReceiveImage_plt(&v22_.v22, SdkData_e89010, a2, a3,
                                            a2 + 64, a3, a4, a5);
  if (v21 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v21);
  }
  v17 = *v14;
  v18 = v22_.v23;
  *((_QWORD*)v14 + 1) = v22_.v22;
  *((_QWORD*)v14 + 2) = v18;
  if ((v17 & 1) == 0) {
    *v14 = 1;
  }
  v19 = v22_.v23;
  *a1 = v22_.v22;
  a1[1] = v19;
  return _runlock_0_0((void*)SdkData_e88fe8);
}

__int64 chat_api_6b4850(_QWORD* a1, char a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char* v7;
  unsigned int v8;
  __int64 v10;
  struct {
    int v12;
    unsigned int v13;
  } v12_;

  v4 = nn_os_SdkRecursiveMutexType_Lock_plt((void*)SdkData_e88fe8);
  if (*(int*)SdkData_e89000[0] <= 0) {
    nn_diag_detail_AbortImpl_plt_856170(v4);
  }
  v12_.v13 = 0;
  v5 = 112;
  if ((a2 & 1) != 0) {
    v5 = 128;
  }
  v6 = (*(__int64 (**)(void*))(**(_QWORD**)SdkData_e88ff8[0] + v5))(
      (void*)*(_QWORD**)SdkData_e88ff8[0]);
  if ((_DWORD)v6 != 0) {
    v8 = 1250;
    v10 = __ROR8__((v6 & 0x3FFFFF) - 738, 9);
    if (v10 > 2) {
      if (v10 == 9) {
        goto LABEL_7;
      }
      if (v10 == 3) {
        nn_diag_detail_AbortImpl_plt_856170(v6);
      }
      if (v10 == 4) {
        nn_diag_detail_AbortImpl_plt_856170(v6);
      }
    }
    else if (v10 == 0 || v10 == 2) {
      goto LABEL_7;
    }
    v12_.v12 = v6;
    nn_diag_detail_AbortImpl_plt_858db0(&v12_.v12);
  }
  if (v12_.v13 >= 4) {
    nn_diag_detail_AbortImpl_plt_856170(v6);
  }
  nn_os_SdkMutexType_Lock_plt(&SdkData_1046578);
  v7 = (char*)&SdkData_1046578 + 16 * v12_.v13;
  v7[8] = 0;
  *((_QWORD*)v7 + 2) = *a1;
  v7[8] = 1;
  nn_os_SdkMutexType_Unlock_plt(&SdkData_1046578);
  v8 = 0;
LABEL_7:
  _runlock_0_0((void*)SdkData_e88fe8);
  return v8;
}

__int64 chat_api_6b49b0(__int64* a1, char a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char v7;
  int v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int v14;

  v4 = nn_os_SdkRecursiveMutexType_Lock_plt((void*)SdkData_e88fe8);
  if (*(int*)SdkData_e89000[0] <= 0) {
    nn_diag_detail_AbortImpl_plt_856170(v4);
  }
  v5 = nn_os_SdkMutexType_Lock_plt(&SdkData_1046578);
  v6 = *a1;
  if (SdkData_1046588 == *a1) {
    v7 = SdkData_1046580;
  }
  else {
    v7 = 0;
  }
  v8 = (unsigned __int8)SdkData_10465a0;
  if (SdkData_1046598 == v6) {
    v9 = (unsigned __int8)SdkData_1046590;
  }
  else {
    v9 = 0;
  }
  if (SdkData_10465a8 != v6) {
    v8 = 0;
  }
  if (SdkData_10465b8 == v6) {
    v10 = (unsigned __int8)SdkData_10465b0;
  }
  else {
    v10 = 0;
  }
  if ((v10 & 1) == 0 && (v8 & 1) == 0 && (v9 & 1) == 0 && (v7 & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v5);
  }
  if (v8 != 0) {
    v9 = 2;
  }
  if (v10 != 0) {
    v11 = 3;
  }
  else {
    v11 = v9;
  }
  v12 = 120;
  if ((a2 & 1) != 0) {
    v12 = 136;
  }
  *((_BYTE*)&SdkData_1046578 + 16 * v11 + 8) = 0;
  v14 = (*(__int64 (**)(void*))(**(_QWORD**)SdkData_e88ff8[0] + v12))(
      (void*)*(_QWORD**)SdkData_e88ff8[0]);
  if (v14 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v14);
  }
  nn_os_SdkMutexType_Unlock_plt(&SdkData_1046578);
  return _runlock_0_0((void*)SdkData_e88fe8);
}

__int64 nn_chat_CalculateRemoteCameraVideoBufferSize(void* this_,
                                                     unsigned int a2,
                                                     unsigned int a3)
{
  unsigned int v3;
  __int64 v6;
  __int64 v7;
  _QWORD v9[8];
  int v10;
  __int64 v11;
  __int64 v12;

  v3 = (unsigned int)this_;
  v6 = nn_os_SdkRecursiveMutexType_Lock_plt((void*)SdkData_e88fe8);
  if (*(int*)SdkData_e89000[0] <= 0) {
    nn_diag_detail_AbortImpl_plt_856170(v6);
  }
  if (v3 - 32 >= 0x761) {
    nn_diag_detail_AbortImpl_plt_856170(v6);
  }
  if (a2 - 32 >= 0x419) {
    nn_diag_detail_AbortImpl_plt_856170(v6);
  }
  if (a3 - 1 >= 4) {
    nn_diag_detail_AbortImpl_plt_856170(v6);
  }
  v12 = 0;
  v11 = 0;
  nn_chat_gsv_MakeImagePreference_plt((void*)(v9), v3, a2, 0);
  v10 = nn_chat_gsv_CalculateRequiredBufferMemory_plt(&v12, &v11, v9, a3);
  if (v10 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v10);
  }
  v7 = (int)v12;
  _runlock_0_0((void*)SdkData_e88fe8);
  return v7;
}

__int64 nn_chat_InitializeRemoteCameraVideoStorage(_QWORD* a1, unsigned int a2,
                                                   unsigned int a3,
                                                   unsigned int a4, __int64 a5,
                                                   __int64 a6)
{
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD v16[8];
  int v17;

  v12 = nn_os_SdkRecursiveMutexType_Lock_plt((void*)SdkData_e88fe8);
  if (*(int*)SdkData_e89000[0] <= 0) {
    nn_diag_detail_AbortImpl_plt_856170(v12);
  }
  v13 = nn_diag_detail_NotNullImpl_plt(a1);
  if ((v13 & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v13);
  }
  if (a2 - 32 >= 0x761) {
    nn_diag_detail_AbortImpl_plt_856170(v13);
  }
  if (a3 - 32 >= 0x419) {
    nn_diag_detail_AbortImpl_plt_856170(v13);
  }
  if (a4 - 1 >= 4) {
    nn_diag_detail_AbortImpl_plt_856170(v13);
  }
  v14 = nn_diag_detail_NotNullImpl_plt(a5);
  if ((v14 & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v14);
  }
  if ((a5 & 0xFFF) != 0) {
    nn_diag_detail_AbortImpl_plt_856170(v14);
  }
  if ((a6 & 0xFFF) != 0) {
    nn_diag_detail_AbortImpl_plt_856170(v14);
  }
  a1[26] = 0;
  a1[27] = 0;
  a1[24] = 0;
  a1[25] = 0;
  a1[22] = 0;
  a1[23] = 0;
  a1[20] = 0;
  a1[21] = 0;
  a1[18] = 0;
  a1[19] = 0;
  a1[16] = 0;
  a1[17] = 0;
  a1[14] = 0;
  a1[15] = 0;
  a1[12] = 0;
  a1[13] = 0;
  a1[10] = 0;
  a1[11] = 0;
  a1[8] = 0;
  a1[9] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[2] = 0;
  a1[3] = 0;
  *a1 = 0;
  a1[1] = 0;
  nn_chat_gsv_MakeImagePreference_plt((void*)(v16), a2, a3, 0);
  v17 = nn_chat_gsv_CreateImagePool_plt(a1, v16, a4, a5, a6, 0);
  if (v17 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v17);
  }
  LODWORD(v16[0]) = nn_chat_gsv_CreateMetadataPool_plt(a1 + 8, a4);
  if (LODWORD(v16[0]) != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v16);
  }
  *((_BYTE*)a1 + 128) = 0;
  *((_BYTE*)a1 + 152) = 0;
  *((_BYTE*)a1 + 176) = 0;
  *((_BYTE*)a1 + 200) = 0;
  return _runlock_0_0((void*)SdkData_e88fe8);
}

__int64 nn_chat_FinalizeRemoteCameraVideoStorage(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD v9[2];

  v2 = nn_os_SdkRecursiveMutexType_Lock_plt((void*)SdkData_e88fe8);
  if (*(int*)SdkData_e89000[0] < 1) {
    nn_diag_detail_AbortImpl_plt_856170(v2);
  }
  if ((*(_BYTE*)(a1 + 128) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 144);
    v9[0] = *(_QWORD*)(a1 + 136);
    v9[1] = v3;
    nn_gs_WaitNativeSync_plt(v9);
    if (*(_BYTE*)(a1 + 152) != 1) {
      goto LABEL_4;
    }
  }
  else {
    v9[0] = 0;
    v9[1] = 0;
    nn_gs_WaitNativeSync_plt(v9);
    if (*(_BYTE*)(a1 + 152) != 1) {
    LABEL_4:
      v9[0] = 0;
      v9[1] = 0;
      nn_gs_WaitNativeSync_plt(v9);
      if (*(_BYTE*)(a1 + 176) != 1) {
        goto LABEL_5;
      }
    LABEL_9:
      v7 = *(_QWORD*)(a1 + 192);
      v9[0] = *(_QWORD*)(a1 + 184);
      v9[1] = v7;
      nn_gs_WaitNativeSync_plt(v9);
      if (*(_BYTE*)(a1 + 200) != 1) {
        goto LABEL_6;
      }
    LABEL_10:
      v5 = *(_QWORD*)(a1 + 208);
      v4 = *(_QWORD*)(a1 + 216);
      goto LABEL_11;
    }
  }
  v6 = *(_QWORD*)(a1 + 168);
  v9[0] = *(_QWORD*)(a1 + 160);
  v9[1] = v6;
  nn_gs_WaitNativeSync_plt(v9);
  if (*(_BYTE*)(a1 + 176) == 1) {
    goto LABEL_9;
  }
LABEL_5:
  v9[0] = 0;
  v9[1] = 0;
  nn_gs_WaitNativeSync_plt(v9);
  if (*(_BYTE*)(a1 + 200) == 1) {
    goto LABEL_10;
  }
LABEL_6:
  v4 = 0;
  v5 = 0;
LABEL_11:
  v9[0] = v5;
  v9[1] = v4;
  nn_gs_WaitNativeSync_plt(v9);
  nn_chat_gsv_DestroyMetadataPool_plt(a1 + 64);
  nn_chat_gsv_DestroyImagePool_plt(a1);
  return _runlock_0_0((void*)SdkData_e88fe8);
}

__int64 nn_chat_RequestNextRemoteCameraImage(_QWORD* a1, __int64 a2,
                                             unsigned int a3, __int64 a4,
                                             __int64 a5, __int64* a6)
{
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char v26;
  __int64 v27;
  struct {
    __int64 v29;
    __int64 v30;
  } v29_;
  int v31;

  v12 = nn_os_SdkRecursiveMutexType_Lock_plt((void*)SdkData_e88fe8);
  if (*(int*)SdkData_e89000[0] <= 0) {
    nn_diag_detail_AbortImpl_plt_856170(v12);
  }
  v13 = nn_diag_detail_NotNullImpl_plt(a1);
  if ((v13 & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v13);
  }
  v14 = nn_diag_detail_NotNullImpl_plt(a2);
  if ((v14 & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v14);
  }
  if ((a3 & 0x80000000) != 0) {
    nn_diag_detail_AbortImpl_plt_856170(v14);
  }
  v15 = nn_os_SdkMutexType_Lock_plt(&SdkData_1046578);
  v16 = *a6;
  if (SdkData_1046588 == *a6) {
    v17 = (unsigned __int8)SdkData_1046580;
  }
  else {
    v17 = 0;
  }
  if (SdkData_1046598 == v16) {
    v18 = (unsigned __int8)SdkData_1046590;
  }
  else {
    v18 = 0;
  }
  v19 = v17 + v18;
  if (SdkData_10465a8 == v16) {
    v20 = (unsigned __int8)SdkData_10465a0;
  }
  else {
    v20 = 0;
  }
  v21 = v19 + v20;
  if (SdkData_10465b8 == v16) {
    v22 = (unsigned __int8)SdkData_10465b0;
  }
  else {
    v22 = 0;
  }
  if ((v21 | v22) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v15);
  }
  v29_.v29 = 0;
  v29_.v30 = 0;
  if ((_DWORD)v20 != 0) {
    v18 = 2;
  }
  if ((_DWORD)v22 != 0) {
    v18 = 3;
  }
  v31 = nn_chat_gsv_RequestReceiveImage_plt(
      &v29_.v29, SdkData_e89018 + (v18 << 9), a2, a3, a2 + 64, a3, a4, a5);
  if (v31 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v31);
  }
  v23 = v29_.v30;
  v24 = a2 + 24LL * a3;
  v26 = *(_BYTE*)(v24 + 128);
  v25 = v24 + 128;
  *(_QWORD*)(v25 + 8) = v29_.v29;
  *(_QWORD*)(v25 + 16) = v23;
  if ((v26 & 1) == 0) {
    *(_BYTE*)v25 = 1;
  }
  v27 = v29_.v30;
  *a1 = v29_.v29;
  a1[1] = v27;
  nn_os_SdkMutexType_Unlock_plt(&SdkData_1046578);
  return _runlock_0_0((void*)SdkData_e88fe8);
}

#pragma GCC visibility pop
