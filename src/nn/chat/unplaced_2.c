#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
    nn_chat_gsv_MakeImagePreference_plt(PSEUDO_X8, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6b7560(unsigned __int64*, __int64, __int64, __int64,
                          unsigned __int64*);
__int64 fw_rtld_RegisterCrtDestructor();
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 nn_chat_detail_ShowAppletForCameraConfiguration_plt(_QWORD);
__int64 nn_chat_gsv_CreateImagePool_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                        _QWORD);
__int64 nn_chat_gsv_CreateMetadataPool_plt(__int64, unsigned __int64);
__int64 nn_chat_gsv_DestroyImagePool_plt(__int64);
__int64 nn_chat_gsv_DestroyMetadataPool_plt(__int64);
__int64 nn_diag_detail_AbortImpl_plt_858db0(__int64);
__int64 nn_diag_detail_NotNullImpl_plt(unsigned __int64);
__int64 nn_gs_WaitNativeSync_plt(__int64);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_SdkRecursiveMutexType_Lock_plt(__int64);
__int64 nn_vi2_5e65a0(__int64, unsigned int);
extern _DWORD SdkData_c773a8[3];
extern _UNKNOWN nn_chat_gsv_detail_g_DisplaySession;
extern __int64 SdkData_1046668;
extern __int64 SdkData_1046670;
extern __int64 SdkData_1046678;
extern __int64 SdkData_1046680;
extern __int64 SdkData_1046688;
extern __int64 SdkData_1046690;
extern __int64 SdkData_1046698;
extern __int64 SdkData_10466a0;
extern __int64 SdkData_10466a8;
extern __int64 SdkData_10466b0;
extern __int64 SdkData_10466b8;
extern __int64 SdkData_10466c0;
extern __int64 SdkData_10466c8;
extern __int64 SdkData_10466d0;
extern __int64 SdkData_10466d8;
extern __int64 SdkData_10466e0;
extern __int64 SdkData_10466e8;
extern __int64 SdkData_10466f0;
extern __int64 SdkData_10466f8;
extern __int64 SdkData_1046700;
extern __int64 SdkData_1046708;
extern __int64 SdkData_1046710;
extern __int64 SdkData_1046718;
extern __int64 SdkData_1046720;
extern __int64 SdkData_1046728;
extern __int64 SdkData_1046730;
extern __int64 SdkData_1046738;
extern __int64 SdkData_1046740;
extern __int64 SdkData_1046748;
extern __int64 SdkData_1046750;
extern __int64 SdkData_1046758;
extern __int64 SdkData_1046760;
extern __int64 SdkData_1046768;
extern __int64 SdkData_1046770;
extern __int64 SdkData_1046778;
extern __int64 SdkData_1046780;
extern __int64 SdkData_1046788;
extern __int64 SdkData_1046790;
extern __int64 SdkData_1046798;
extern __int64 SdkData_10467a0;
extern __int64 SdkData_10467a8;
extern __int64 SdkData_10467b0;
extern __int64 SdkData_10467b8;
extern __int64 SdkData_10467c0;
extern __int64 SdkData_10467c8;
extern __int64 SdkData_10467d0;
extern __int64 SdkData_10467d8;
extern __int64 SdkData_10467e0;
extern __int64 SdkData_10467e8;
extern __int64 SdkData_10467f0;
extern __int64 SdkData_1046800;
extern __int64 SdkData_1046808;
extern __int64 SdkData_e88fe8;
extern __int64 nn_chat_gsv_detail_g_ImageSession;
extern int SdkData_10465e8;
extern int SdkData_10465ec;
extern int SdkData_10465f0;
extern int SdkData_10465f4;
extern int SdkData_10465f8;
extern int SdkData_10465fc;
extern int SdkData_1046600;
extern int SdkData_1046604;
extern int SdkData_1046608;
extern int SdkData_104660c;
extern int SdkData_1046610;
extern int SdkData_1046614;
extern int SdkData_1046618;
extern int SdkData_104661c;
extern int SdkData_1046620;
extern int SdkData_1046624;
extern int SdkData_1046628;
extern int SdkData_104662c;
extern int SdkData_1046630;
extern int SdkData_1046634;
extern int SdkData_1046638;
extern int SdkData_104663c;
extern int SdkData_1046640;
extern int SdkData_1046644;
extern int SdkData_1046648;
extern int SdkData_104664c;
extern int SdkData_1046650;
extern int SdkData_1046654;
extern int SdkData_1046658;
extern int SdkData_104665c;
extern int SdkData_1046660;
extern int SdkData_1046664;
extern void (*SdkData_e88fe0[88])();
extern void (*SdkData_e89000[84])();
void nn_detail_UnexpectedDefaultImpl_plt_857150();
void nn_diag_detail_AbortImpl_plt_856170();
__int64 nn_chat_6b3bf0(unsigned int a1, int a2);
__int64 nn_chat_6b43c0(_QWORD* a1, unsigned int a2, unsigned int a3,
                       unsigned int a4, unsigned __int64 a5, __int64 a6);
__int64 nn_chat_6b4550(unsigned __int64 a1);
__int64 nn_chat_6b73c0(__int64 a1, unsigned int a2);
__int64 nn_chat_6b7850(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4);

__int64 nn_chat_6b3bf0(unsigned int a1, int a2)
{
  int v4;
  int v5;
  _DWORD v7[3];
  _BYTE v8[4];

  nn_os_SdkRecursiveMutexType_Lock_plt(SdkData_e88fe8);
  v8[0] = 0;
  v7[0] = (*(__int64 (**)(_QWORD, _BYTE*, _QWORD))(
      **(_QWORD**)SdkData_e88fe0[0] + 224LL))(*(_QWORD*)SdkData_e88fe0[0], v8,
                                              a1);
  if (v7[0] != 0) {
    nn_diag_detail_AbortImpl_plt_858db0((__int64)v7);
  }
  v4 = v8[0];
  _runlock_0_0((void*)SdkData_e88fe8);
  if (v4 != 1) {
    return 0;
  }
  if ((unsigned __int8)a1 >= 3u) {
    nn_detail_UnexpectedDefaultImpl_plt_857150();
  }
  v7[2] = a2;
  v5 = SdkData_c773a8[(unsigned __int8)a1];
  v7[0] = 7;
  v7[1] = v5;
  return nn_chat_detail_ShowAppletForCameraConfiguration_plt(v7);
}

__int64 nn_chat_6b43c0(_QWORD* a1, unsigned int a2, unsigned int a3,
                       unsigned int a4, unsigned __int64 a5, __int64 a6)
{
  _QWORD v13[8];
  int v14;

  nn_os_SdkRecursiveMutexType_Lock_plt(SdkData_e88fe8);
  if (*(int*)SdkData_e89000[0] <= 0) {
    nn_diag_detail_AbortImpl_plt_856170();
  }
  if ((nn_diag_detail_NotNullImpl_plt((unsigned __int64)a1) & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170();
  }
  if (a2 - 32 >= 0x761) {
    nn_diag_detail_AbortImpl_plt_856170();
  }
  if (a3 - 32 >= 0x419) {
    nn_diag_detail_AbortImpl_plt_856170();
  }
  if (a4 - 1 >= 4) {
    nn_diag_detail_AbortImpl_plt_856170();
  }
  if ((nn_diag_detail_NotNullImpl_plt(a5) & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170();
  }
  if ((a5 & 0xFFF) != 0) {
    nn_diag_detail_AbortImpl_plt_856170();
  }
  if ((a6 & 0xFFF) != 0) {
    nn_diag_detail_AbortImpl_plt_856170();
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
  nn_chat_gsv_MakeImagePreference_plt((void*)(v13), a2, a3, 0);
  v14 = nn_chat_gsv_CreateImagePool_plt(a1, v13, a4, a5, a6, 0);
  if (v14 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0((__int64)&v14);
  }
  LODWORD(v13[0]) = nn_chat_gsv_CreateMetadataPool_plt((__int64)(a1 + 8), a4);
  if (LODWORD(v13[0]) != 0) {
    nn_diag_detail_AbortImpl_plt_858db0((__int64)v13);
  }
  *((_BYTE*)a1 + 128) = 0;
  *((_BYTE*)a1 + 152) = 0;
  *((_BYTE*)a1 + 176) = 0;
  *((_BYTE*)a1 + 200) = 0;
  return _runlock_0_0((void*)SdkData_e88fe8);
}

__int64 nn_chat_6b4550(unsigned __int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD v8[2];

  nn_os_SdkRecursiveMutexType_Lock_plt(SdkData_e88fe8);
  if (*(int*)SdkData_e89000[0] <= 0) {
    nn_diag_detail_AbortImpl_plt_856170();
  }
  if ((nn_diag_detail_NotNullImpl_plt(a1) & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170();
  }
  if ((*(_BYTE*)(a1 + 128) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 144);
    v8[0] = *(_QWORD*)(a1 + 136);
    v8[1] = v2;
    nn_gs_WaitNativeSync_plt((__int64)v8);
    if (*(_BYTE*)(a1 + 152) != 1) {
      goto LABEL_5;
    }
  }
  else {
    v8[0] = 0;
    v8[1] = 0;
    nn_gs_WaitNativeSync_plt((__int64)v8);
    if (*(_BYTE*)(a1 + 152) != 1) {
    LABEL_5:
      v8[0] = 0;
      v8[1] = 0;
      nn_gs_WaitNativeSync_plt((__int64)v8);
      if (*(_BYTE*)(a1 + 176) != 1) {
        goto LABEL_6;
      }
    LABEL_10:
      v6 = *(_QWORD*)(a1 + 192);
      v8[0] = *(_QWORD*)(a1 + 184);
      v8[1] = v6;
      nn_gs_WaitNativeSync_plt((__int64)v8);
      if (*(_BYTE*)(a1 + 200) != 1) {
        goto LABEL_7;
      }
    LABEL_11:
      v4 = *(_QWORD*)(a1 + 208);
      v3 = *(_QWORD*)(a1 + 216);
      goto LABEL_12;
    }
  }
  v5 = *(_QWORD*)(a1 + 168);
  v8[0] = *(_QWORD*)(a1 + 160);
  v8[1] = v5;
  nn_gs_WaitNativeSync_plt((__int64)v8);
  if (*(_BYTE*)(a1 + 176) == 1) {
    goto LABEL_10;
  }
LABEL_6:
  v8[0] = 0;
  v8[1] = 0;
  nn_gs_WaitNativeSync_plt((__int64)v8);
  if (*(_BYTE*)(a1 + 200) == 1) {
    goto LABEL_11;
  }
LABEL_7:
  v3 = 0;
  v4 = 0;
LABEL_12:
  v8[0] = v4;
  v8[1] = v3;
  nn_gs_WaitNativeSync_plt((__int64)v8);
  nn_chat_gsv_DestroyMetadataPool_plt(a1 + 64);
  nn_chat_gsv_DestroyImagePool_plt(a1);
  return _runlock_0_0((void*)SdkData_e88fe8);
}

__int64 nn_chat_6b73c0(__int64 a1, unsigned int a2)
{
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 (*v7)(__int64*, __int64);
  unsigned __int64 i;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 (*v11)(__int64*, __int64);
  __int64 v12;

  nn_os_SdkMutexType_Lock_plt(a1 + 520);
  v4 = *(_QWORD*)(a1 + 528);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 64), 1u,
                              memory_order_relaxed);
    nn_os_SdkMutexType_Unlock_plt(a1 + 520);
    v11 = (__int64 (*)(__int64*, __int64))(((char*)0x0LL) + 1);
    v12 = a2;
    v10 = 0;
    for (result = SdkRoutine_6b7560(&v10, v4, a1 + 136, a1 + 152,
                                    (unsigned __int64*)&v11);
         (result & 1) != 0;
         result = SdkRoutine_6b7560(&v10, v4, a1 + 136, a1 + 152,
                                    (unsigned __int64*)&v11)) {
      nn_vi2_5e65a0(a1 + 152, a2);
      v11 = (__int64 (*)(__int64*, __int64))(((char*)0x0LL) + 1);
      v12 = a2;
      v10 = 0;
    }
    if (atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 64),
                                  0xFFFFFFFFFFFFFFFFLL,
                                  memory_order_release) == 1) {
      __builtin_arm_dmb(9u);
      v6 = *(_QWORD*)(v4 + 56);
      v11 = *(__int64 (**)(__int64*, __int64))(v4 + 48);
      v12 = v6;
      return v11(&v12, v4);
    }
  }
  else {
    nn_os_SdkMutexType_Unlock_plt(a1 + 520);
  LABEL_7:
    v11 = (__int64 (*)(__int64*, __int64))(((char*)0x0LL) + 1);
    v12 = a2;
    v10 = 0;
    nn_os_SdkMutexType_Lock_plt(a1 + 152);
    v7 = (__int64 (*)(__int64*, __int64))(((char*)0x0LL) + 1);
    for (i = 0; i < (unsigned __int64)v7; ++i) {
      v9 = *((unsigned int*)&v11 + i + 2);
      if ((_DWORD)v9 != 0) {
        if (((atomic_load_explicit(
                  (atomic_uint* volatile)(a1 + 160 + ((v9 >> 3) & 0x1FFFFFFC)),
                  memory_order_acquire) >>
              v9) &
             1) != 0) {
          nn_os_SdkMutexType_Unlock_plt(a1 + 152);
          nn_vi2_5e65a0(a1 + 152, a2);
          goto LABEL_7;
        }
        v7 = v11;
      }
    }
    return nn_os_SdkMutexType_Unlock_plt(a1 + 152);
  }
  return result;
}

__int64 nn_chat_6b7850(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  memset_plt((void*)&nn_chat_gsv_detail_g_DisplaySession, nullptr, 560, a4);
  atomic_store(1u, (unsigned int*)&SdkData_10465e8);
  atomic_store(0, (unsigned int*)&SdkData_10465ec);
  atomic_store(0, (unsigned int*)&SdkData_10465f0);
  atomic_store(0, (unsigned int*)&SdkData_10465f4);
  atomic_store(0, (unsigned int*)&SdkData_10465f8);
  atomic_store(0, (unsigned int*)&SdkData_10465fc);
  atomic_store(0, (unsigned int*)&SdkData_1046600);
  atomic_store(0, (unsigned int*)&SdkData_1046604);
  atomic_store(0, (unsigned int*)&SdkData_1046608);
  atomic_store(0, (unsigned int*)&SdkData_104660c);
  atomic_store(0, (unsigned int*)&SdkData_1046610);
  atomic_store(0, (unsigned int*)&SdkData_1046614);
  atomic_store(0, (unsigned int*)&SdkData_1046618);
  atomic_store(0, (unsigned int*)&SdkData_104661c);
  atomic_store(0, (unsigned int*)&SdkData_1046620);
  atomic_store(0, (unsigned int*)&SdkData_1046624);
  atomic_store(0, (unsigned int*)&SdkData_1046628);
  atomic_store(0, (unsigned int*)&SdkData_104662c);
  atomic_store(0, (unsigned int*)&SdkData_1046630);
  atomic_store(0, (unsigned int*)&SdkData_1046634);
  atomic_store(0, (unsigned int*)&SdkData_1046638);
  atomic_store(0, (unsigned int*)&SdkData_104663c);
  atomic_store(0, (unsigned int*)&SdkData_1046640);
  atomic_store(0, (unsigned int*)&SdkData_1046644);
  atomic_store(0, (unsigned int*)&SdkData_1046648);
  atomic_store(0, (unsigned int*)&SdkData_104664c);
  atomic_store(0, (unsigned int*)&SdkData_1046650);
  atomic_store(0, (unsigned int*)&SdkData_1046654);
  atomic_store(0, (unsigned int*)&SdkData_1046658);
  atomic_store(0, (unsigned int*)&SdkData_104665c);
  atomic_store(0, (unsigned int*)&SdkData_1046660);
  atomic_store(0, (unsigned int*)&SdkData_1046664);
  SdkData_10466e8 = 0;
  SdkData_10466f0 = 0;
  SdkData_10466d8 = 0;
  SdkData_10466e0 = 0;
  SdkData_10466c8 = 0;
  SdkData_10466d0 = 0;
  SdkData_10466b8 = 0;
  SdkData_10466c0 = 0;
  SdkData_10466a8 = 0;
  SdkData_10466b0 = 0;
  SdkData_1046698 = 0;
  SdkData_10466a0 = 0;
  SdkData_1046688 = 0;
  SdkData_1046690 = 0;
  SdkData_1046678 = 0;
  SdkData_1046680 = 0;
  SdkData_1046668 = 0;
  SdkData_1046670 = 0;
  SdkData_1046718 = 0;
  SdkData_1046720 = 0;
  SdkData_1046728 = 0;
  SdkData_1046730 = 0;
  SdkData_1046738 = 0;
  SdkData_1046740 = 0;
  SdkData_1046748 = 0;
  SdkData_1046750 = 0;
  SdkData_1046758 = 0;
  SdkData_1046760 = 0;
  SdkData_1046768 = 0;
  SdkData_1046770 = 0;
  SdkData_1046778 = 0;
  SdkData_1046780 = 0;
  SdkData_1046788 = 0;
  SdkData_1046790 = 0;
  SdkData_1046798 = 0;
  SdkData_10467a0 = 0;
  SdkData_10467a8 = 0;
  SdkData_10467b0 = 0;
  SdkData_10467b8 = 0;
  SdkData_10467c0 = 0;
  SdkData_10467c8 = 0;
  SdkData_10467d0 = 0;
  SdkData_10467d8 = 0;
  SdkData_10467e0 = 0;
  SdkData_10467e8 = 0;
  SdkData_10467f0 = 0;
  nn_chat_gsv_detail_g_ImageSession = 0;
  SdkData_1046800 = 0;
  SdkData_1046808 = 0;
  SdkData_10466f8 = 0;
  SdkData_1046700 = (__int64)&SdkData_1046700;
  SdkData_1046708 = (__int64)&SdkData_1046700;
  SdkData_1046710 = 0;
  return fw_rtld_RegisterCrtDestructor();
}

#pragma GCC visibility pop
