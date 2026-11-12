#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_856460(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_crypto_detail_ClearMemoryImpl_plt(_QWORD, _QWORD);
__int64 nn_crypto_detail_DigitsFromOctetString_plt(_QWORD, _QWORD, _QWORD,
                                                   _QWORD);
__int64 nn_crypto_detail_Sha256Impl_Destroy_Sha256Impl_plt(_QWORD);
__int64 nn_crypto_detail_Sha256Impl_GetHash_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_crypto_detail_Sha256Impl_Initialize_plt(_QWORD);
__int64 nn_crypto_detail_Sha256Impl_Update_plt(_QWORD, _QWORD, _QWORD);
bool nn_ec_400d50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                  __int64 a6, __int64 a7);

bool nn_ec_400d50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                  __int64 a6, __int64 a7)
{
  unsigned __int8 v11;
  int v12;
  _QWORD v14[4];
  _QWORD v15[15];
  _QWORD v16[4];
  _QWORD v17[4];
  _QWORD v18[4];
  int v19;
  _BYTE v20[4];
  _QWORD v21[4];
  _QWORD v22[4];

  v19 = 0;
  memset(v18, 0, sizeof(v18));
  memset(v17, 0, sizeof(v17));
  memset(v16, 0, sizeof(v16));
  if (a5 != 0) {
    nn_crypto_detail_DigitsFromOctetString_plt(v16, 8, a4, 32);
    nn_crypto_detail_DigitsFromOctetString_plt(v17, 8, a4 + 32, 32);
    v11 = 1;
  }
  else {
    v11 = 0;
  }
  LOWORD(v19) = v11;
  memset(v15, 0, sizeof(v15));
  memset(v14, 0, sizeof(v14));
  nn_crypto_detail_Sha256Impl_Initialize_plt(v15);
  nn_crypto_detail_Sha256Impl_Update_plt(v15, a6, a7);
  nn_crypto_detail_Sha256Impl_GetHash_plt(v15, v14, 32);
  memset(v22, 0, sizeof(v22));
  memset(v21, 0, sizeof(v21));
  nn_crypto_detail_DigitsFromOctetString_plt(v21, 8, a2, 32);
  nn_crypto_detail_DigitsFromOctetString_plt(v22, 8, a2 + 32, 32);
  v20[0] = 0;
  v12 = SdkRoutine_856460(v20, v21, v14, 32, v16);
  nn_crypto_detail_Sha256Impl_Destroy_Sha256Impl_plt(v15);
  if (BYTE1(v19) == 1) {
    nn_crypto_detail_ClearMemoryImpl_plt(v18, 32);
  }
  return v12 == 0;
}

#pragma GCC visibility pop
