#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_ec_detail_AppIdToString_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_ec_detail_GeneratePath_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                      _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_ec_detail_NsUidToString_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_ec_detail_ShopPageReturnValue_GetLastUrlSize_plt(_QWORD);
__int64 nn_ec_detail_ShopPageReturnValue_GetLastUrl_plt(_QWORD);
__int64 nn_ec_detail_ShopPageReturnValue_GetShopExitReason_plt(_QWORD);
__int64 nn_ec_detail_ShowShopPageArg_SetCallbackUrl_plt(_QWORD, _QWORD);
__int64 nn_ec_detail_ShowShopPageArg_SetUid_plt(_QWORD, _QWORD);
__int64 nn_ec_detail_ShowShopPageArg_ShowShopPageArg_plt(_QWORD, _QWORD);
__int64 nn_ec_detail_ShowShopPage_plt(_QWORD, _QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 strncmp_plt(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN nn_ec_detail_g_ShopPageReturnValue;
extern __int64 SdkData_e88048;
extern __int64 SdkData_e88050;
extern char* SdkData_e63428[4];
extern char SdkData_bbbd5c;
__int64 nn_ec_detail_LaunchEShopImpl(int a1, __int64 a2, __int64 a3);
__int64 nn_ec_detail_ShowShopApplicationInformationImpl_3fc630(
    int a1, unsigned __int8* a2, __int64 a3, __int64 a4, __int64 a5,
    __int64 a6);
__int64 nn_ec_detail_ShowShopApplicationInformationImpl_3fc8f0(int a1,
                                                               __int64 a2,
                                                               __int64 a3,
                                                               __int64 a4);
__int64 nn_ec_detail_ShowShopApplicationInformationForUpgradeImpl_3fca30(
    int a1, unsigned __int8* a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7);
__int64 nn_ec_detail_ShowShopApplicationInformationForUpgradeImpl_3fcd10(
    int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5);
__int64 nn_ec_detail_ShowShopSubscriptionDetailsImpl(int a1,
                                                     unsigned __int8* a2,
                                                     __int64 a3, __int64 a4,
                                                     __int64 a5, __int64 a6);
__int64 nn_ec_detail_ShowShopConsumableItemDetailImpl(int a1,
                                                      unsigned __int8* a2,
                                                      __int64 a3, __int64 a4,
                                                      __int64 a5, __int64 a6);
__int64 nn_ec_detail_ShowShopMembershipServiceInformationImpl(
    int a1, __int64 a2, unsigned __int8* a3, unsigned __int8* a4, __int64 a5);

__int64 nn_ec_detail_LaunchEShopImpl(int a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  int v7;
  int v9;

  nn_os_LockMutex_plt(SdkData_e88048);
  v6 = SdkData_e88050;
  nn_ec_detail_ShowShopPageArg_ShowShopPageArg_plt(SdkData_e88050,
                                                   &SdkData_bbbd5c);
  nn_ec_detail_GeneratePath_plt(v6, &SdkData_bbbd5c, a3, 0, "scene", "top",
                                "mode", SdkData_e63428[a1], 0, 0);
  nn_ec_detail_ShowShopPageArg_SetUid_plt(v6, a2);
  nn_ec_detail_ShowShopPageArg_SetCallbackUrl_plt(v6, "eshop://");
  v7 = nn_ec_detail_ShowShopPage_plt(&nn_ec_detail_g_ShopPageReturnValue, v6);
  if ((v7 & 0x3FFFFF) != 0x690) {
    v9 = v7;
    if (v7 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v9);
    }
  }
  return nn_os_UnlockMutex_plt(SdkData_e88048);
}

__int64 nn_ec_detail_ShowShopApplicationInformationImpl_3fc630(
    int a1, unsigned __int8* a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v10;
  _QWORD* v11;
  __int64 v12;
  int v13;
  struct {
    _QWORD v15[2];
    char v16;
  } v15_;

  nn_os_LockMutex_plt(SdkData_e88048);
  nn_ec_detail_ShowShopPageArg_ShowShopPageArg_plt(SdkData_e88050,
                                                   &SdkData_bbbd5c);
  v10 = *a2;
  v11 = nullptr;
  v15_.v16 = 0;
  v15_.v15[0] = 0;
  v15_.v15[1] = 0;
  if (v10 == 1) {
    nn_ec_detail_AppIdToString_plt(v15_.v15, 17, *((_QWORD*)a2 + 1));
    if (*a2 != 0) {
      v11 = v15_.v15;
    }
    else {
      v11 = nullptr;
    }
  }
  v12 = SdkData_e88050;
  nn_ec_detail_GeneratePath_plt(SdkData_e88050, &SdkData_bbbd5c, a6, 0, "scene",
                                "product_detail", "mode", SdkData_e63428[a1],
                                "dst_app_id", v11);
  nn_ec_detail_ShowShopPageArg_SetUid_plt(v12, a3);
  nn_ec_detail_ShowShopPageArg_SetCallbackUrl_plt(v12, "eshop://");
  v13 = nn_ec_detail_ShowShopPage_plt(&nn_ec_detail_g_ShopPageReturnValue, v12);
  if ((v13 & 0x3FFFFF) != 0x690) {
    LODWORD(v15_.v15[0]) = v13;
    if (v13 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(v15_.v15);
    }
  }
  return nn_os_UnlockMutex_plt(SdkData_e88048);
}

__int64 nn_ec_detail_ShowShopApplicationInformationImpl_3fc8f0(int a1,
                                                               __int64 a2,
                                                               __int64 a3,
                                                               __int64 a4)
{
  __int64 v8;
  int v9;
  _QWORD v11[3];

  nn_os_LockMutex_plt(SdkData_e88048);
  v8 = SdkData_e88050;
  nn_ec_detail_ShowShopPageArg_ShowShopPageArg_plt(SdkData_e88050,
                                                   &SdkData_bbbd5c);
  memset(v11, 0, 21);
  nn_ec_detail_NsUidToString_plt(v11, 21, a2);
  nn_ec_detail_GeneratePath_plt(v8, &SdkData_bbbd5c, a4, 0, "scene",
                                "product_detail", "mode", SdkData_e63428[a1],
                                "dst_nsuid", v11);
  nn_ec_detail_ShowShopPageArg_SetUid_plt(v8, a3);
  nn_ec_detail_ShowShopPageArg_SetCallbackUrl_plt(v8, "eshop://");
  v9 = nn_ec_detail_ShowShopPage_plt(&nn_ec_detail_g_ShopPageReturnValue, v8);
  if ((v9 & 0x3FFFFF) != 0x690) {
    LODWORD(v11[0]) = v9;
    if (v9 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(v11);
    }
  }
  return nn_os_UnlockMutex_plt(SdkData_e88048);
}

__int64 nn_ec_detail_ShowShopApplicationInformationForUpgradeImpl_3fca30(
    int a1, unsigned __int8* a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7)
{
  int v11;
  _QWORD* v12;
  __int64 v13;
  int v14;
  struct {
    _QWORD v16[2];
    char v17;
  } v16_;

  nn_os_LockMutex_plt(SdkData_e88048);
  nn_ec_detail_ShowShopPageArg_ShowShopPageArg_plt(SdkData_e88050,
                                                   &SdkData_bbbd5c);
  v11 = *a2;
  v12 = nullptr;
  v16_.v17 = 0;
  v16_.v16[0] = 0;
  v16_.v16[1] = 0;
  if (v11 == 1) {
    nn_ec_detail_AppIdToString_plt(v16_.v16, 17, *((_QWORD*)a2 + 1));
    if (*a2 != 0) {
      v12 = v16_.v16;
    }
    else {
      v12 = nullptr;
    }
  }
  v13 = SdkData_e88050;
  nn_ec_detail_GeneratePath_plt(SdkData_e88050, &SdkData_bbbd5c, a7, 0, "scene",
                                "product_detail", "mode", SdkData_e63428[a1],
                                "dst_app_id", v12);
  nn_ec_detail_ShowShopPageArg_SetUid_plt(v13, a3);
  nn_ec_detail_ShowShopPageArg_SetCallbackUrl_plt(v13, "eshop://");
  v14 = nn_ec_detail_ShowShopPage_plt(&nn_ec_detail_g_ShopPageReturnValue, v13);
  if ((v14 & 0x3FFFFF) != 0x690) {
    LODWORD(v16_.v16[0]) = v14;
    if (v14 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(v16_.v16);
    }
  }
  return nn_os_UnlockMutex_plt(SdkData_e88048);
}

__int64 nn_ec_detail_ShowShopApplicationInformationForUpgradeImpl_3fcd10(
    int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9;
  int v10;
  _QWORD v12[3];

  nn_os_LockMutex_plt(SdkData_e88048);
  v9 = SdkData_e88050;
  nn_ec_detail_ShowShopPageArg_ShowShopPageArg_plt(SdkData_e88050,
                                                   &SdkData_bbbd5c);
  memset(v12, 0, 21);
  nn_ec_detail_NsUidToString_plt(v12, 21, a2);
  nn_ec_detail_GeneratePath_plt(v9, &SdkData_bbbd5c, a5, 0, "scene",
                                "product_detail", "mode", SdkData_e63428[a1],
                                "dst_nsuid", v12);
  nn_ec_detail_ShowShopPageArg_SetUid_plt(v9, a3);
  nn_ec_detail_ShowShopPageArg_SetCallbackUrl_plt(v9, "eshop://");
  v10 = nn_ec_detail_ShowShopPage_plt(&nn_ec_detail_g_ShopPageReturnValue, v9);
  if ((v10 & 0x3FFFFF) != 0x690) {
    LODWORD(v12[0]) = v10;
    if (v10 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(v12);
    }
  }
  return nn_os_UnlockMutex_plt(SdkData_e88048);
}

__int64 nn_ec_detail_ShowShopSubscriptionDetailsImpl(int a1,
                                                     unsigned __int8* a2,
                                                     __int64 a3, __int64 a4,
                                                     __int64 a5, __int64 a6)
{
  int v11;
  int v12;
  __int64 v13;
  bool v14;
  _QWORD* v15;
  int v16;
  _QWORD v18[3];
  struct {
    _QWORD v19[2];
    char v20;
  } v19_;

  nn_os_LockMutex_plt(SdkData_e88048);
  nn_ec_detail_ShowShopPageArg_ShowShopPageArg_plt(SdkData_e88050,
                                                   &SdkData_bbbd5c);
  v11 = *a2;
  v19_.v20 = 0;
  v19_.v19[0] = 0;
  v19_.v19[1] = 0;
  if (v11 == 1) {
    nn_ec_detail_AppIdToString_plt(v19_.v19, 17, *((_QWORD*)a2 + 1));
  }
  memset(v18, 0, 21);
  nn_ec_detail_NsUidToString_plt(v18, 21, a4);
  v12 = *a2;
  v13 = SdkData_e88050;
  v14 = v12 == 0;
  v15 = v19_.v19;
  if (v14) {
    v15 = nullptr;
  }
  nn_ec_detail_GeneratePath_plt(SdkData_e88050, &SdkData_bbbd5c, a6, 0, "scene",
                                "subscriptions", "mode", SdkData_e63428[a1],
                                "dst_app_id", v15);
  nn_ec_detail_ShowShopPageArg_SetUid_plt(v13, a5);
  nn_ec_detail_ShowShopPageArg_SetCallbackUrl_plt(v13, "eshop://");
  v16 = nn_ec_detail_ShowShopPage_plt(&nn_ec_detail_g_ShopPageReturnValue, v13);
  if ((v16 & 0x3FFFFF) != 0x690) {
    LODWORD(v18[0]) = v16;
    if (v16 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(v18);
    }
  }
  return nn_os_UnlockMutex_plt(SdkData_e88048);
}

__int64 nn_ec_detail_ShowShopConsumableItemDetailImpl(int a1,
                                                      unsigned __int8* a2,
                                                      __int64 a3, __int64 a4,
                                                      __int64 a5, __int64 a6)
{
  int v11;
  int v12;
  __int64 v13;
  bool v14;
  _QWORD* v15;
  int v16;
  _QWORD v18[3];
  struct {
    _QWORD v19[2];
    char v20;
  } v19_;

  nn_os_LockMutex_plt(SdkData_e88048);
  nn_ec_detail_ShowShopPageArg_ShowShopPageArg_plt(SdkData_e88050,
                                                   &SdkData_bbbd5c);
  v11 = *a2;
  v19_.v20 = 0;
  v19_.v19[0] = 0;
  v19_.v19[1] = 0;
  if (v11 == 1) {
    nn_ec_detail_AppIdToString_plt(v19_.v19, 17, *((_QWORD*)a2 + 1));
  }
  memset(v18, 0, 21);
  nn_ec_detail_NsUidToString_plt(v18, 21, a4);
  v12 = *a2;
  v13 = SdkData_e88050;
  v14 = v12 == 0;
  v15 = v19_.v19;
  if (v14) {
    v15 = nullptr;
  }
  nn_ec_detail_GeneratePath_plt(SdkData_e88050, &SdkData_bbbd5c, a6, 0, "scene",
                                "consumption_item", "mode", SdkData_e63428[a1],
                                "dst_app_id", v15);
  nn_ec_detail_ShowShopPageArg_SetUid_plt(v13, a5);
  nn_ec_detail_ShowShopPageArg_SetCallbackUrl_plt(v13, "eshop://");
  v16 = nn_ec_detail_ShowShopPage_plt(&nn_ec_detail_g_ShopPageReturnValue, v13);
  if ((v16 & 0x3FFFFF) != 0x690) {
    LODWORD(v18[0]) = v16;
    if (v16 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(v18);
    }
  }
  return nn_os_UnlockMutex_plt(SdkData_e88048);
}

__int64 nn_ec_detail_ShowShopMembershipServiceInformationImpl(
    int a1, __int64 a2, unsigned __int8* a3, unsigned __int8* a4, __int64 a5)
{
  int v10;
  int v11;
  __int64* v12;
  int v13;
  __int64 v14;
  bool v15;
  _QWORD* v16;
  int v17;
  unsigned int v18;
  __int64 v19;
  __int64 v21;
  char v22;
  struct {
    _QWORD v23[2];
    char v24;
  } v23_;

  nn_os_LockMutex_plt(SdkData_e88048);
  nn_ec_detail_ShowShopPageArg_ShowShopPageArg_plt(SdkData_e88050,
                                                   &SdkData_bbbd5c);
  v10 = *a3;
  v23_.v24 = 0;
  v23_.v23[0] = 0;
  v23_.v23[1] = 0;
  if (v10 == 1) {
    nn_ec_detail_AppIdToString_plt(v23_.v23, 17, *((_QWORD*)a3 + 1));
  }
  v11 = *a4;
  v22 = 0;
  v21 = 0;
  if (v11 == 1) {
    v12 = &v21;
    if (a4[1] != 0) {
      LOBYTE(v21) = a4[1];
      if (a4[2] != 0) {
        BYTE1(v21) = a4[2];
        if (a4[3] != 0) {
          BYTE2(v21) = a4[3];
          if (a4[4] != 0) {
            BYTE3(v21) = a4[4];
            if (a4[5] != 0) {
              BYTE4(v21) = a4[5];
              if (a4[6] != 0) {
                BYTE5(v21) = a4[6];
                if (a4[7] != 0) {
                  BYTE6(v21) = a4[7];
                  if (a4[8] != 0) {
                    v12 = (__int64*)&v22;
                    HIBYTE(v21) = a4[8];
                  }
                  else {
                    v12 = (__int64*)((char*)&v21 + 7);
                  }
                }
                else {
                  v12 = (__int64*)((char*)&v21 + 6);
                }
              }
              else {
                v12 = (__int64*)((char*)&v21 + 5);
              }
            }
            else {
              v12 = (__int64*)((char*)&v21 + 4);
            }
          }
          else {
            v12 = (__int64*)((char*)&v21 + 3);
          }
        }
        else {
          v12 = (__int64*)((char*)&v21 + 2);
        }
      }
      else {
        v12 = (__int64*)((char*)&v21 + 1);
      }
    }
    *(_BYTE*)v12 = 0;
  }
  v13 = *a3;
  v14 = SdkData_e88050;
  v15 = v13 == 0;
  v16 = v23_.v23;
  if (v15) {
    v16 = nullptr;
  }
  nn_ec_detail_GeneratePath_plt(SdkData_e88050, &SdkData_bbbd5c, a5, 0, "scene",
                                "membership_service", "mode",
                                SdkData_e63428[a1], "pwl_app_id", v16);
  nn_ec_detail_ShowShopPageArg_SetUid_plt(v14, a2);
  nn_ec_detail_ShowShopPageArg_SetCallbackUrl_plt(v14, "eshop://");
  v17 = nn_ec_detail_ShowShopPage_plt(&nn_ec_detail_g_ShopPageReturnValue, v14);
  if ((v17 & 0x3FFFFF) == 0x690) {
    goto LABEL_31;
  }
  LODWORD(v23_.v23[0]) = v17;
  if (v17 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v23_.v23);
  }
  if ((unsigned int)nn_ec_detail_ShopPageReturnValue_GetShopExitReason_plt(
          &nn_ec_detail_g_ShopPageReturnValue) != 3) {
  LABEL_31:
    v18 = 51876;
  }
  else {
    v18 = 51876;
    if (nn_ec_detail_ShopPageReturnValue_GetLastUrlSize_plt(
            &nn_ec_detail_g_ShopPageReturnValue) == 16) {
      v19 = nn_ec_detail_ShopPageReturnValue_GetLastUrl_plt(
          &nn_ec_detail_g_ShopPageReturnValue);
      if ((unsigned int)strncmp_plt(v19, "eshop://success", 16) != 0) {
        v18 = 51876;
      }
      else {
        v18 = 0;
      }
    }
  }
  nn_os_UnlockMutex_plt(SdkData_e88048);
  return v18;
}

#pragma GCC visibility pop
