#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_856120(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_8561b0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_8561d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_8562d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_8562e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_856310(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_crypto_3bc0(_QWORD, _QWORD, _QWORD);
__int64 nn_crypto_3e10(_QWORD, _QWORD, _QWORD);
__int64 nn_crypto_detail_GhashImpl_InitializeHashKey_plt(_QWORD, _QWORD);
__int64 nn_crypto_detail_GhashImpl_ProcessPadding_plt(_QWORD);
__int64 nn_crypto_detail_GhashImpl_SwitchMessageSizeDigit_plt(_QWORD);
__int64 nn_crypto_detail_GhashImpl_Update_plt(_QWORD, _QWORD, _QWORD);
__int64 nncryptoAes128GcmEncryptorUpdate(__int64 a1, __int64 a2, __int64 a3,
                                         __int64 a4, __int64 a5);
__int64 nncryptoAes128GcmDecryptorInitialize(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5);
__int64 nncryptoAes128GcmDecryptorUpdate(__int64 a1, __int64 a2, __int64 a3,
                                         __int64 a4, __int64 a5);
__int64 nncryptoAes256GcmEncryptorInitialize(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5);
__int64 nncryptoAes256GcmEncryptorUpdate(__int64 a1, __int64 a2, __int64 a3,
                                         __int64 a4, __int64 a5);
__int64 nncryptoAes256GcmDecryptorInitialize(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5);
__int64 nncryptoAes256GcmDecryptorUpdate(__int64 a1, __int64 a2, __int64 a3,
                                         __int64 a4, __int64 a5);

__int64 nncryptoAes128GcmEncryptorUpdate(__int64 a1, __int64 a2, __int64 a3,
                                         __int64 a4, __int64 a5)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;

  if (*(_DWORD*)(a1 + 576) == 2) {
    v8 = a4;
    v9 = a3;
    nn_crypto_detail_GhashImpl_ProcessPadding_plt(a1 + 200);
    nn_crypto_detail_GhashImpl_SwitchMessageSizeDigit_plt(a1 + 200);
    a3 = v9;
    a4 = v8;
    *(_DWORD*)(a1 + 576) = 3;
  }
  v10 = SdkRoutine_8561b0(a1 + 520, a2, a3, a4, a5);
  nn_crypto_detail_GhashImpl_Update_plt(a1 + 200, a2, a5);
  return v10;
}

__int64 nncryptoAes128GcmDecryptorInitialize(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5)
{
  SdkRoutine_856120(a1, a2, a3, 1);
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 192) = a1;
  *(_QWORD*)(a1 + 224) = 0;
  SdkRoutine_8561d0(a1, a1 + 216, 16, a1 + 216, 16);
  nn_crypto_detail_GhashImpl_InitializeHashKey_plt(a1 + 200, a1 + 216);
  *(_DWORD*)(a1 + 512) = 1;
  *(_DWORD*)(a1 + 576) = 1;
  return nn_crypto_3bc0(a1 + 176, a4, a5);
}

__int64 nncryptoAes128GcmDecryptorUpdate(__int64 a1, __int64 a2, __int64 a3,
                                         __int64 a4, __int64 a5)
{
  if (*(_DWORD*)(a1 + 576) == 2) {
    nn_crypto_detail_GhashImpl_ProcessPadding_plt(a1 + 200);
    nn_crypto_detail_GhashImpl_SwitchMessageSizeDigit_plt(a1 + 200);
    *(_DWORD*)(a1 + 576) = 3;
  }
  nn_crypto_detail_GhashImpl_Update_plt(a1 + 200, a4, a5);
  return SdkRoutine_8561b0(a1 + 520, a2, a3, a4, a5);
}

__int64 nncryptoAes256GcmEncryptorInitialize(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5)
{
  SdkRoutine_8562d0(a1, a2, a3, 1);
  *(_QWORD*)(a1 + 256) = a1;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  SdkRoutine_856310(a1, a1 + 280, 16, a1 + 280, 16);
  nn_crypto_detail_GhashImpl_InitializeHashKey_plt(a1 + 264, a1 + 280);
  *(_DWORD*)(a1 + 576) = 1;
  *(_DWORD*)(a1 + 640) = 1;
  return nn_crypto_3e10(a1 + 240, a4, a5);
}

__int64 nncryptoAes256GcmEncryptorUpdate(__int64 a1, __int64 a2, __int64 a3,
                                         __int64 a4, __int64 a5)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;

  if (*(_DWORD*)(a1 + 640) == 2) {
    v8 = a4;
    v9 = a3;
    nn_crypto_detail_GhashImpl_ProcessPadding_plt(a1 + 264);
    nn_crypto_detail_GhashImpl_SwitchMessageSizeDigit_plt(a1 + 264);
    a3 = v9;
    a4 = v8;
    *(_DWORD*)(a1 + 640) = 3;
  }
  v10 = SdkRoutine_8562e0(a1 + 584, a2, a3, a4, a5);
  nn_crypto_detail_GhashImpl_Update_plt(a1 + 264, a2, a5);
  return v10;
}

__int64 nncryptoAes256GcmDecryptorInitialize(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5)
{
  SdkRoutine_8562d0(a1, a2, a3, 1);
  *(_QWORD*)(a1 + 256) = a1;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  SdkRoutine_856310(a1, a1 + 280, 16, a1 + 280, 16);
  nn_crypto_detail_GhashImpl_InitializeHashKey_plt(a1 + 264, a1 + 280);
  *(_DWORD*)(a1 + 576) = 1;
  *(_DWORD*)(a1 + 640) = 1;
  return nn_crypto_3e10(a1 + 240, a4, a5);
}

__int64 nncryptoAes256GcmDecryptorUpdate(__int64 a1, __int64 a2, __int64 a3,
                                         __int64 a4, __int64 a5)
{
  if (*(_DWORD*)(a1 + 640) == 2) {
    nn_crypto_detail_GhashImpl_ProcessPadding_plt(a1 + 264);
    nn_crypto_detail_GhashImpl_SwitchMessageSizeDigit_plt(a1 + 264);
    *(_DWORD*)(a1 + 640) = 3;
  }
  nn_crypto_detail_GhashImpl_Update_plt(a1 + 264, a4, a5);
  return SdkRoutine_8562e0(a1 + 584, a2, a3, a4, a5);
}

#pragma GCC visibility pop
