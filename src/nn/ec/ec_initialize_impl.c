#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_3fc0d0(__int64, __int64, unsigned int);
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64
    nn_ec_detail_ShopServiceAccessServer_SpecialClientRegister_Destroy_SpecialClientRegister_plt(
        _QWORD);
__int64 nn_ec_detail_ShopServiceAccessServer_SpecialClientRegister_Register_plt(
    _QWORD, _QWORD, _QWORD);
__int64
    nn_ec_detail_ShopServiceAccessServer_SpecialClientRegister_SpecialClientRegister_plt(
        _QWORD);
__int64 nn_ec_InitializeForShopServiceAccessors_3fbfa0(__int64 a1, __int64 a2,
                                                       __int64 a3,
                                                       unsigned __int64 a4);
__int64 nn_ec_InitializeForShopServiceAccessorsWithSmallWorkMemorySize_3fc030(
    __int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4);

__int64 nn_ec_InitializeForShopServiceAccessors_3fbfa0(__int64 a1, __int64 a2,
                                                       __int64 a3,
                                                       unsigned __int64 a4)
{
  unsigned int v7;
  _BYTE v9[288];

  memset_plt((void*)v9, nullptr, 288, a4);
  nn_ec_detail_ShopServiceAccessServer_SpecialClientRegister_SpecialClientRegister_plt(
      v9);
  v7 = nn_ec_detail_ShopServiceAccessServer_SpecialClientRegister_Register_plt(
      v9, a3, 0);
  if (v7 == 0) {
    v7 = SdkRoutine_3fc0d0(a1, a2, 0);
  }
  nn_ec_detail_ShopServiceAccessServer_SpecialClientRegister_Destroy_SpecialClientRegister_plt(
      v9);
  return v7;
}

__int64 nn_ec_InitializeForShopServiceAccessorsWithSmallWorkMemorySize_3fc030(
    __int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v7;
  _BYTE v9[288];

  memset_plt((void*)v9, nullptr, 288, a4);
  nn_ec_detail_ShopServiceAccessServer_SpecialClientRegister_SpecialClientRegister_plt(
      v9);
  v7 = nn_ec_detail_ShopServiceAccessServer_SpecialClientRegister_Register_plt(
      v9, a3, 0);
  if (v7 == 0) {
    v7 = SdkRoutine_3fc0d0(a1, a2, 0);
  }
  nn_ec_detail_ShopServiceAccessServer_SpecialClientRegister_Destroy_SpecialClientRegister_plt(
      v9);
  return v7;
}

#pragma GCC visibility pop
