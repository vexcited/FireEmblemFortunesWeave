#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 fw_rtld_RegisterCrtDestructor();
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 nn_ec_3fbd90(__int64);
__int64 nn_ec_detail_ShopServiceAccessServer_ProxyStore_GetInstance_plt(void);
__int64 nn_ec_detail_ShopServiceAccessServer_ProxyStore_Initialize_plt(_QWORD,
                                                                       _QWORD);
__int64 nn_ec_detail_ShopServiceAccessServer_Proxy_Initialize_plt(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_ec_detail_ShopServiceAccessServer_Proxy_Proxy_plt(_QWORD);
__int64
    nn_ec_detail_ShopServiceAccessServer_SpecialClientRegister_Destroy_SpecialClientRegister_plt(
        _QWORD);
__int64 nn_ec_detail_ShopServiceAccessServer_SpecialClientRegister_Register_plt(
    _QWORD, _QWORD, _QWORD);
__int64
    nn_ec_detail_ShopServiceAccessServer_SpecialClientRegister_SpecialClientRegister_plt(
        _QWORD);
__int64 nn_ec_detail_ShopServiceAccessServer_ToResult_plt(_QWORD);
extern _UNKNOWN SdkData_f2a7c0;
extern _UNKNOWN SdkData_f2a7c8;
extern _UNKNOWN SdkData_f2a7d0;
extern __int64 SdkData_f2a850;
__int64 nn_ec_InitializeShopServiceAccessorForApplet(__int64 a1, __int64 a2,
                                                     __int64 a3,
                                                     unsigned __int64 a4);

__int64 nn_ec_InitializeShopServiceAccessorForApplet(__int64 a1, __int64 a2,
                                                     __int64 a3,
                                                     unsigned __int64 a4)
{
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  __int64 v10;
  __int64 v12;
  _BYTE v16[288];

  memset_plt((void*)v16, nullptr, 288, a4);
  nn_ec_detail_ShopServiceAccessServer_SpecialClientRegister_SpecialClientRegister_plt(
      v16);
  v7 = nn_ec_detail_ShopServiceAccessServer_SpecialClientRegister_Register_plt(
      v16, a3, 1);
  if (v7 != 0) {
    v8 = v7;
  }
  else {
    if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f2a7c0,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(&SdkData_f2a7c0) != 0) {
      nn_ec_detail_ShopServiceAccessServer_Proxy_Proxy_plt(&SdkData_f2a7d0);
      fw_rtld_RegisterCrtDestructor();
      __cxa_guard_release_plt(&SdkData_f2a7c0);
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f2a7c8,
                              memory_order_acquire) &
         1) == 0) {
      v12 = __cxa_guard_acquire_plt(&SdkData_f2a7c8);
      if ((_DWORD)v12 != 0) {
        nn_ec_3fbd90(v12);
        fw_rtld_RegisterCrtDestructor();
        __cxa_guard_release_plt(&SdkData_f2a7c8);
      }
    }
    v9 = nn_ec_detail_ShopServiceAccessServer_Proxy_Initialize_plt(
        &SdkData_f2a7d0, &SdkData_f2a850, a1, a2, 0);
    v8 = nn_ec_detail_ShopServiceAccessServer_ToResult_plt(v9);
    if (v8 == 0) {
      v10 = nn_ec_detail_ShopServiceAccessServer_ProxyStore_GetInstance_plt();
      nn_ec_detail_ShopServiceAccessServer_ProxyStore_Initialize_plt(
          v10, &SdkData_f2a7d0);
    }
  }
  nn_ec_detail_ShopServiceAccessServer_SpecialClientRegister_Destroy_SpecialClientRegister_plt(
      v16);
  return v8;
}

#pragma GCC visibility pop
