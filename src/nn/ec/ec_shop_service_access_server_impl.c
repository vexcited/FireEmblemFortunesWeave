#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_ec_detail_ShopServiceAccessServer_Proxy_CreateServerInterface_plt(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_lmem_CreateUnitHeap_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                   _QWORD);
__int64 nn_os_InitializeMutex_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 nn_sf_hipc_ConnectToHipcService_plt(_QWORD, _QWORD);
__int64 nn_sf_hipc_FinalizeHipcServiceResolution_plt(_QWORD);
__int64 nn_sf_hipc_InitializeHipcServiceResolution_plt(_QWORD);
extern __int64 SdkData_e87068;
extern __int64 SdkData_e88058;
extern __int64 SdkData_e88060;
__int64 nn_ec_detail_ShopServiceAccessServer_ToResult(__int64 result);
__int64 nn_ec_detail_ShopServiceAccessServer_Proxy_Initialize(
    __int64 a1, __int64* a2, __int64 a3, __int64 a4, unsigned int a5);
__int64
nn_ec_detail_ShopServiceAccessServer_SpecialClientRegister_SpecialClientRegister(
    void* this_);
__int64 nn_ec_detail_ShopServiceAccessServer_SpecialClientRegister_Register(
    __int64 a1, __int64 a2, unsigned int a3);

__int64 nn_ec_detail_ShopServiceAccessServer_ToResult(__int64 result)
{
  unsigned int v1;
  __int64 v2;
  unsigned int v3;
  __int64 v4;

  if ((_DWORD)result == 0) {
    return result;
  }
  v1 = result;
  v2 = result & 0x3FFFFF;
  result = 104612;
  if ((unsigned __int64)v2 > 0xB5888) {
    switch (v2) {
    case 743561LL:
      return 104100;
    case 744585LL:
      return 105636;
    case 745097LL:
      return 106148;
    default:
      break;
    }
  }
  else if (v2 <= 20616) {
    if (v2 == 5257) {
      return result;
    }
    if (v2 == 137) {
      nn_diag_detail_AbortImpl_plt_856170(104612);
      __udf(0);
    }
  }
  else {
    if (v2 == 20617) {
      return 103076;
    }
    if (v2 == 743049) {
      return 103588;
    }
  }
  if ((v1 & 0x1FF) == 0xA && ((v1 >> 9) & 0x1FFE) - 10 < 0xA) {
    return result;
  }
  if (v2 <= 123016) {
    if (v2 != 35977) {
      if (v2 == 46217) {
        return 112292;
      }
      goto LABEL_26;
    }
    return 102564;
  }
  if (v2 == 123017) {
    return 105124;
  }
  if (v2 == 742537) {
    return 102564;
  }
LABEL_26:
  if ((v1 & 0x1FF) != 0x89) {
    return v1;
  }
  result = v1;
  if (((v1 >> 9) & 0x1FF8) - 7000 <= 0x257) {
    v3 = v1;
    v4 = v1 & 0x3FFFFF;
    if ((*(_QWORD*)&v3 & 0x3FFFFFuLL) > 0x39E088) {
      if ((*(_QWORD*)&v3 & 0x3FFFFFuLL) <= 0x39F088) {
        if ((*(_QWORD*)&v3 & 0x3FFFFFuLL) > 0x39E888) {
          if ((*(_QWORD*)&v3 & 0x3FFFFFuLL) > 0x39EC88) {
            if (v4 == 3796105) {
              return 3796132;
            }
            if (v4 == 3796617) {
              return 3796644;
            }
          }
          else {
            if (v4 == 3795081) {
              return 3795108;
            }
            if (v4 == 3795593) {
              return 3795620;
            }
          }
        }
        else if ((*(_QWORD*)&v3 & 0x3FFFFFuLL) > 0x39E488) {
          if (v4 == 3794057) {
            return 3794084;
          }
          if (v4 == 3794569) {
            return 3794596;
          }
        }
        else {
          if (v4 == 3793033) {
            return 3793060;
          }
          if (v4 == 3793545) {
            return 3793572;
          }
        }
      }
      else if ((*(_QWORD*)&v3 & 0x3FFFFFuLL) <= 0x3A9C88) {
        if ((*(_QWORD*)&v3 & 0x3FFFFFuLL) > 0x3A9888) {
          if (v4 == 3840137) {
            return 3840164;
          }
          if (v4 == 3840649) {
            return 3840676;
          }
        }
        else {
          if (v4 == 3797129) {
            return 3797156;
          }
          if (v4 == 3797641) {
            return 3797668;
          }
        }
      }
      else if ((*(_QWORD*)&v3 & 0x3FFFFFuLL) <= 0x3AA088) {
        if (v4 == 3841161) {
          return 3841188;
        }
        if (v4 == 3841673) {
          return 3841700;
        }
      }
      else {
        switch (v4) {
        case 3842185LL:
          return 3842212;
        case 3842697LL:
          return 3842724;
        case 3844745LL:
          return 3844772;
        default:
          break;
        }
      }
      return 3584164;
    }
    result = 3737764;
    if (v4 > 3741832) {
      if (v4 > 3790984) {
        if (v4 > 3792008) {
          if (v4 == 3792009) {
            return 3792036;
          }
          if (v4 == 3792521) {
            return 3792548;
          }
        }
        else {
          if (v4 == 3790985) {
            return 3791012;
          }
          if (v4 == 3791497) {
            return 3791524;
          }
        }
      }
      else if (v4 > 3789448) {
        if (v4 == 3789449) {
          return 3789476;
        }
        if (v4 == 3790473) {
          return 3790500;
        }
      }
      else {
        if (v4 == 3741833) {
          return 3741860;
        }
        if (v4 == 3788937) {
          return 3788964;
        }
      }
      return 3584164;
    }
    if (v4 > 3739784) {
      if (v4 > 3740808) {
        if (v4 == 3740809) {
          return 3740836;
        }
        if (v4 == 3741321) {
          return 3741348;
        }
      }
      else {
        if (v4 == 3739785) {
          return 3739812;
        }
        if (v4 == 3740297) {
          return 3740324;
        }
      }
      return 3584164;
    }
    if (v4 > 3738760) {
      if (v4 == 3738761) {
        return 3738788;
      }
      if (v4 == 3739273) {
        return 3739300;
      }
      return 3584164;
    }
    if (v4 != 3737737) {
      if (v4 == 3738249) {
        return 3738276;
      }
      return 3584164;
    }
  }
  return result;
}

__int64 nn_ec_detail_ShopServiceAccessServer_Proxy_Initialize(
    __int64 a1, __int64* a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  _BYTE v26[4];
  __int64 v27;
  int v28;

  nn_os_LockMutex_plt(a1);
  if (*(_BYTE*)(a1 + 120) == 1) {
    LODWORD(v27) = 106660;
    nn_diag_detail_AbortImpl_plt_858db0(&v27);
    __udf(0);
  }
  v10 = (*(__int64 (**)(__int64*, __int64))(*a2 + 16))(a2, 1);
  v28 = 0;
  nn_sf_hipc_InitializeHipcServiceResolution_plt(v10);
  v11 = nn_sf_hipc_ConnectToHipcService_plt(&v28, "nim:eca");
  v12 = v11;
  nn_sf_hipc_FinalizeHipcServiceResolution_plt(v11);
  if (v12 == 0) {
    v13 = v28;
    v14 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v10 + 16LL))(
        v10, 40, 8);
    v15 = v14;
    if (v14 != 0) {
      *(_DWORD*)(v14 + 24) = 1;
      *(_DWORD*)(v14 + 8) = 1;
      *(_DWORD*)(v14 + 12) = v13;
      v16 = SdkData_e88058;
      *(_QWORD*)(v14 + 32) = v10;
      *(_QWORD*)v14 = v16 + 16;
      *(_QWORD*)(v14 + 16) = v16 + 120;
    }
    v17 = *a2;
    v27 = v14;
    if (((*(__int64 (**)(__int64*, __int64))(v17 + 24))(a2, 2) & 1) != 0) {
      v18 = *(_QWORD*)v15;
      v26[0] = 0;
      v19 = (*(__int64 (**)(__int64, _BYTE*, _QWORD))(v18 + 64))(v15, v26, 0);
      if (v19 != 0) {
        v12 = v19;
        if (v15 == 0) {
          goto LABEL_16;
        }
        goto LABEL_15;
      }
      if (v26[0] == 1) {
        v27 = 0;
        (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
        v20 = (*(__int64 (**)(__int64*, __int64))(*a2 + 16))(a2, 2);
        v28 = 0;
        nn_sf_hipc_InitializeHipcServiceResolution_plt(v20);
        v21 = nn_sf_hipc_ConnectToHipcService_plt(&v28, "nim:eca");
        v12 = v21;
        nn_sf_hipc_FinalizeHipcServiceResolution_plt(v21);
        if (v12 != 0) {
          goto LABEL_16;
        }
        v22 = v28;
        v23 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v20 +
                                                          16LL))(v20, 40, 8);
        v15 = v23;
        if (v23 != 0) {
          *(_DWORD*)(v23 + 24) = 1;
          *(_DWORD*)(v23 + 8) = 1;
          *(_DWORD*)(v23 + 12) = v22;
          v24 = SdkData_e88058;
          *(_QWORD*)(v23 + 32) = v20;
          *(_QWORD*)v23 = v24 + 16;
          *(_QWORD*)(v23 + 16) = v24 + 120;
        }
        v27 = v23;
      }
    }
    v12 = nn_ec_detail_ShopServiceAccessServer_Proxy_CreateServerInterface_plt(
        a1, &v27, a3, a4, a5);
    if (v12 == 0) {
      *(_BYTE*)(a1 + 120) = 1;
    }
    if (v15 != 0) {
    LABEL_15:
      (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
    }
  }
LABEL_16:
  nn_os_UnlockMutex_plt(a1);
  return v12;
}

__int64

nn_ec_detail_ShopServiceAccessServer_SpecialClientRegister_SpecialClientRegister(
    void* this_)
{
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;

  *(_WORD*)this_ = 0;
  *(_QWORD*)((char*)this_ + 4) = 0;
  *((_QWORD*)this_ + 2) = 0;
  *((_DWORD*)this_ + 6) = 0;
  nn_os_InitializeMutex_plt(this_, 0, 0);
  *((_QWORD*)this_ + 7) = 0;
  *((_QWORD*)this_ + 4) = 0;
  *((_QWORD*)this_ + 6) = 0;
  *((_QWORD*)this_ + 8) = 0;
  *((_QWORD*)this_ + 9) = 0;
  *((_QWORD*)this_ + 10) = 0;
  *((_QWORD*)this_ + 11) = 0;
  *((_QWORD*)this_ + 12) = 0;
  *((_QWORD*)this_ + 13) = 0;
  *((_QWORD*)this_ + 14) = 0;
  *((_QWORD*)this_ + 15) = 0;
  *((_QWORD*)this_ + 16) = 0;
  *((_QWORD*)this_ + 17) = 0;
  *((_QWORD*)this_ + 18) = 0;
  *((_QWORD*)this_ + 19) = 0;
  *((_QWORD*)this_ + 20) = 0;
  *((_QWORD*)this_ + 21) = 0;
  *((_QWORD*)this_ + 22) = 0;
  *((_QWORD*)this_ + 23) = 0;
  *((_QWORD*)this_ + 24) = 0;
  *((_QWORD*)this_ + 25) = 0;
  *((_QWORD*)this_ + 26) = 0;
  *((_QWORD*)this_ + 27) = 0;
  *((_QWORD*)this_ + 28) = 0;
  *((_QWORD*)this_ + 29) = 0;
  *((_QWORD*)this_ + 30) = 0;
  *((_QWORD*)this_ + 31) = 0;
  *((_QWORD*)this_ + 32) = 0;
  *((_QWORD*)this_ + 33) = 0;
  *((_QWORD*)this_ + 34) = 0;
  *((_QWORD*)this_ + 35) = 0;
  nn_os_SdkMutexType_Lock_plt((char*)this_ + 56);
  v2 = *((_DWORD*)this_ + 15);
  if (v2 != 0) {
    v3 = v2 + 1;
  }
  else {
    v4 = nn_lmem_CreateUnitHeap_plt((char*)this_ + 224, 64, 64, 4, 16,
                                    (char*)this_ + 64);
    v5 = SdkData_e87068;
    *((_QWORD*)this_ + 6) = (char*)this_ + 64;
    *((_QWORD*)this_ + 26) = v5 + 16;
    *((_QWORD*)this_ + 27) = v4;
    v3 = 1;
  }
  *((_DWORD*)this_ + 15) = v3;
  return nn_os_SdkMutexType_Unlock_plt((char*)this_ + 56);
}

__int64 nn_ec_detail_ShopServiceAccessServer_SpecialClientRegister_Register(
    __int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  int v16;

  v6 = nn_os_LockMutex_plt(a1);
  v7 = *(_QWORD*)(a1 + 48);
  v16 = 0;
  nn_sf_hipc_InitializeHipcServiceResolution_plt(v6);
  v8 = nn_sf_hipc_ConnectToHipcService_plt(&v16, "nim:ecas");
  v9 = v8;
  nn_sf_hipc_FinalizeHipcServiceResolution_plt(v8);
  if (v9 == 0) {
    v10 = v7 + 144;
    v11 = v16;
    v12 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v10 + 16LL))(
        v10, 40, 8);
    if (v12 != 0) {
      *(_DWORD*)(v12 + 24) = 1;
      *(_DWORD*)(v12 + 8) = 1;
      *(_DWORD*)(v12 + 12) = v11;
      v13 = SdkData_e88060;
      *(_QWORD*)(v12 + 32) = v10;
      *(_QWORD*)v12 = v13 + 16;
      *(_QWORD*)(v12 + 16) = v13 + 88;
    }
    v14 = *(_QWORD**)(a1 + 32);
    *(_QWORD*)(a1 + 32) = v12;
    if (v14 != nullptr) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v14 + 8LL))(
          (void*)v14, v14);
      v12 = *(_QWORD*)(a1 + 32);
    }
    v9 = (*(__int64 (**)(__int64, _QWORD, __int64, _QWORD))(
        *(_QWORD*)v12 + 32LL))(v12, 0, a2, a3);
  }
  nn_os_UnlockMutex_plt(a1);
  return v9;
}

#pragma GCC visibility pop
