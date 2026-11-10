#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_856120(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_8561d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_856310(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_b20(_QWORD);
__int64 nn_crypto_3bc0_alt1(_QWORD, _QWORD, _QWORD) __asm__("nn_crypto_3bc0");
__int64 nn_crypto_detail_ClearMemoryImpl_plt(_QWORD, _QWORD);
__int64 nn_crypto_detail_GhashImpl_GetGhash_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_crypto_detail_GhashImpl_InitializeHashKey_plt(_QWORD, _QWORD);
__int64 nn_crypto_detail_GhashImpl_ProcessPadding_plt(_QWORD);
__int64 nn_crypto_detail_GhashImpl_Reset_plt(_QWORD);
__int64 nn_crypto_detail_GhashImpl_SwitchMessageSizeDigit_plt(_QWORD);
__int64 nn_crypto_detail_GhashImpl_Update_plt(_QWORD, _QWORD, _QWORD);
__int64 nncryptoAes128GcmEncryptorInitialize(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5);
__int64 nn_crypto_3bc0(__int64* a1, __int64* a2, __int64 a3);
__int64 nn_crypto_3c90(__int64 result, _QWORD* a2);
__int64 nn_crypto_3e10(__int64* a1, __int64* a2, __int64 a3);

__int64 nncryptoAes128GcmEncryptorInitialize(__int64 a1, __int64 a2, __int64 a3,
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
  return nn_crypto_3bc0_alt1(a1 + 176, a4, a5);
}

__int64 nn_crypto_3bc0(__int64* a1, __int64* a2, __int64 a3)
{
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;

  nn_crypto_detail_GhashImpl_Reset_plt(a1 + 3);
  *a1 = 0;
  a1[1] = 0;
  if (a3 == 12) {
    v6 = *((_DWORD*)a2 + 2);
    *a1 = *a2;
    *((_DWORD*)a1 + 2) = v6;
    *((_BYTE*)a1 + 15) = 1;
  }
  else {
    nn_crypto_detail_GhashImpl_Update_plt(a1 + 3, a2, a3);
    nn_crypto_detail_GhashImpl_GetGhash_plt(a1 + 3, a1, 16);
    nn_crypto_detail_GhashImpl_Reset_plt(a1 + 3);
  }
  v8 = a1[1];
  v7 = a1[2];
  a1[48] = 0;
  *((_DWORD*)a1 + 98) = 1;
  v9 = *a1;
  a1[45] = v8;
  a1[43] = v7;
  a1[44] = v9;
  SdkRoutine_8561d0(v7, a1, 16, a1, 16);
  result = SdkRoutine_b20(a1 + 43);
  *((_DWORD*)a1 + 100) = 2;
  return result;
}

__int64 nn_crypto_3c90(__int64 result, _QWORD* a2)
{
  int v2;
  __int64 v4;
  char v5;
  char v6;
  char v7;
  char v8;
  char v9;
  char v10;
  char v11;
  char v12;
  char v13;
  char v14;
  char v15;
  char v16;
  char v17;
  char v18;
  char v19;
  char v20;
  char v21;
  char v22;
  char v23;
  char v24;
  char v25;
  char v26;
  char v27;
  char v28;
  char v29;
  char v30;
  char v31;
  char v32;
  char v33;
  char v34;
  char v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;

  v2 = *(_DWORD*)(result + 400);
  v4 = result;
  if (v2 != 4) {
    if (v2 == 2) {
      nn_crypto_detail_GhashImpl_ProcessPadding_plt(result + 24);
      nn_crypto_detail_GhashImpl_SwitchMessageSizeDigit_plt(v4 + 24);
    }
    v37 = 0;
    v38 = 0;
    nn_crypto_detail_GhashImpl_GetGhash_plt(v4 + 24, &v37, 16);
    v5 = BYTE3(v37);
    v6 = *(_BYTE*)(v4 + 3);
    v7 = *(_BYTE*)(v4 + 1) ^ BYTE1(v37);
    v8 = BYTE4(v37);
    v9 = *(_BYTE*)(v4 + 2) ^ BYTE2(v37);
    v10 = *(_BYTE*)(v4 + 4);
    *(_BYTE*)v4 ^= v37;
    v11 = BYTE6(v37);
    *(_BYTE*)(v4 + 1) = v7;
    v12 = *(_BYTE*)(v4 + 15);
    *(_BYTE*)(v4 + 2) = v9;
    v13 = v6 ^ v5;
    v14 = BYTE5(v37);
    v15 = v10 ^ v8;
    v16 = *(_BYTE*)(v4 + 5);
    *(_BYTE*)(v4 + 3) = v13;
    v17 = *(_BYTE*)(v4 + 6);
    *(_BYTE*)(v4 + 4) = v15;
    v18 = v17 ^ v11;
    v19 = *(_BYTE*)(v4 + 7);
    *(_BYTE*)(v4 + 5) = v16 ^ v14;
    *(_BYTE*)(v4 + 6) = v18;
    v20 = v19 ^ HIBYTE(v37);
    v21 = *(_BYTE*)(v4 + 8);
    *(_BYTE*)(v4 + 7) = v20;
    v22 = v21 ^ v38;
    v23 = *(_BYTE*)(v4 + 9);
    *(_BYTE*)(v4 + 8) = v22;
    v24 = v23 ^ BYTE1(v38);
    v25 = *(_BYTE*)(v4 + 10);
    *(_BYTE*)(v4 + 9) = v24;
    v26 = v25 ^ BYTE2(v38);
    v27 = *(_BYTE*)(v4 + 11);
    *(_BYTE*)(v4 + 10) = v26;
    v28 = v27 ^ BYTE3(v38);
    v29 = *(_BYTE*)(v4 + 12);
    *(_BYTE*)(v4 + 11) = v28;
    v30 = v29 ^ BYTE4(v38);
    v31 = *(_BYTE*)(v4 + 13);
    *(_BYTE*)(v4 + 12) = v30;
    v32 = v31 ^ BYTE5(v38);
    v33 = *(_BYTE*)(v4 + 14);
    *(_BYTE*)(v4 + 13) = v32;
    v34 = v33 ^ BYTE6(v38);
    v35 = HIBYTE(v38);
    *(_BYTE*)(v4 + 14) = v34;
    *(_BYTE*)(v4 + 15) = v12 ^ v35;
    result = nn_crypto_detail_ClearMemoryImpl_plt(&v37, 16);
    *(_DWORD*)(v4 + 400) = 4;
  }
  v36 = *(_QWORD*)(v4 + 8);
  *a2 = *(_QWORD*)v4;
  a2[1] = v36;
  return result;
}

__int64 nn_crypto_3e10(__int64* a1, __int64* a2, __int64 a3)
{
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;

  nn_crypto_detail_GhashImpl_Reset_plt(a1 + 3);
  *a1 = 0;
  a1[1] = 0;
  if (a3 == 12) {
    v6 = *((_DWORD*)a2 + 2);
    *a1 = *a2;
    *((_DWORD*)a1 + 2) = v6;
    *((_BYTE*)a1 + 15) = 1;
  }
  else {
    nn_crypto_detail_GhashImpl_Update_plt(a1 + 3, a2, a3);
    nn_crypto_detail_GhashImpl_GetGhash_plt(a1 + 3, a1, 16);
    nn_crypto_detail_GhashImpl_Reset_plt(a1 + 3);
  }
  v8 = a1[1];
  v7 = a1[2];
  a1[48] = 0;
  *((_DWORD*)a1 + 98) = 1;
  v9 = *a1;
  a1[45] = v8;
  a1[43] = v7;
  a1[44] = v9;
  SdkRoutine_856310(v7, a1, 16, a1, 16);
  result = SdkRoutine_b20(a1 + 43);
  *((_DWORD*)a1 + 100) = 2;
  return result;
}

#pragma GCC visibility pop
