#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_6e6c60(_QWORD, _QWORD, _QWORD);
__int64 nn_hid_system_detail_SetButtonConfigStorage_plt_878910(_QWORD, _QWORD,
                                                               _QWORD);
__int64 nn_hid_system_detail_SetButtonConfigStorage_plt_878920(_QWORD, _QWORD,
                                                               _QWORD);
__int64 nn_hid_system_detail_SetButtonConfigStorage_plt_878930(_QWORD, _QWORD,
                                                               _QWORD);
__int64 nn_util_CopyUtf8String_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_hidconfig_system_SetButtonConfigStoragesFull(__int64 result);
__int64 nn_hidconfig_system_SetButtonConfigStoragesLeft(__int64 result);
__int64 nn_hidconfig_system_SetButtonConfigStoragesRight(__int64 result);

__int64 nn_hidconfig_system_SetButtonConfigStoragesFull(__int64 result)
{
  unsigned __int64 v1;
  __int64 v2;
  __int64* v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD v9[16];
  char v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int128 v19;
  __int64 v20;
  __int64 v21;

  v1 = *(_QWORD*)(result + 8);
  v2 = 5;
  if (v1 < 5) {
    v2 = *(_QWORD*)(result + 8);
  }
  if (v1 != 0) {
    v3 = (__int64*)result;
    v4 = 0;
    v5 = 0;
    v6 = 1448 * v2;
    do {
      v7 = *v3;
      v20 = 0;
      v21 = 0;
      v19 = 0u;
      v17 = 0;
      v18 = 0;
      v15 = 0;
      v16 = 0;
      v13 = 0;
      v14 = 0;
      v11 = 0;
      v12 = 0;
      v10 = 0;
      memset(v9, 0, sizeof(v9));
      if ((*(_BYTE*)(v7 + v5) & 1) != 0) {
        v8 = v7 + v5;
        SdkRoutine_6e6c60(&v11, *(_QWORD*)(v7 + v5 + 456),
                          *(unsigned int*)(v7 + v5 + 464));
        SdkRoutine_6e6c60((char*)&v11 + 4, *(_QWORD*)(v8 + 496),
                          *(unsigned int*)(v8 + 504));
        SdkRoutine_6e6c60(&v12, *(_QWORD*)(v8 + 536),
                          *(unsigned int*)(v8 + 544));
        SdkRoutine_6e6c60((char*)&v12 + 4, *(_QWORD*)(v8 + 576),
                          *(unsigned int*)(v8 + 584));
        SdkRoutine_6e6c60(&v13, *(_QWORD*)(v8 + 616),
                          *(unsigned int*)(v8 + 624));
        SdkRoutine_6e6c60((char*)&v13 + 4, *(_QWORD*)(v8 + 656),
                          *(unsigned int*)(v8 + 664));
        SdkRoutine_6e6c60(&v14, *(_QWORD*)(v8 + 696),
                          *(unsigned int*)(v8 + 704));
        SdkRoutine_6e6c60((char*)&v14 + 4, *(_QWORD*)(v8 + 736),
                          *(unsigned int*)(v8 + 744));
        SdkRoutine_6e6c60(&v15, *(_QWORD*)(v8 + 776),
                          *(unsigned int*)(v8 + 784));
        SdkRoutine_6e6c60((char*)&v15 + 4, *(_QWORD*)(v8 + 816),
                          *(unsigned int*)(v8 + 824));
        SdkRoutine_6e6c60(&v16, *(_QWORD*)(v8 + 856),
                          *(unsigned int*)(v8 + 864));
        SdkRoutine_6e6c60((char*)&v16 + 4, *(_QWORD*)(v8 + 896),
                          *(unsigned int*)(v8 + 904));
        SdkRoutine_6e6c60(&v17, *(_QWORD*)(v8 + 936),
                          *(unsigned int*)(v8 + 944));
        SdkRoutine_6e6c60((char*)&v17 + 4, *(_QWORD*)(v8 + 976),
                          *(unsigned int*)(v8 + 984));
        SdkRoutine_6e6c60(&v18, *(_QWORD*)(v8 + 1176),
                          *(unsigned int*)(v8 + 1184));
        SdkRoutine_6e6c60((char*)&v18 + 4, *(_QWORD*)(v8 + 1216),
                          *(unsigned int*)(v8 + 1224));
        SdkRoutine_6e6c60(&v19, *(_QWORD*)(v8 + 1256),
                          *(unsigned int*)(v8 + 1264));
        *(_QWORD*)((char*)&v19 + 4) = 0x1700000016LL;
        HIDWORD(v19) = 23;
        LODWORD(v20) = *(_DWORD*)(v8 + 1296);
        BYTE4(v20) = *(_BYTE*)(v8 + 1300) & 1;
        LODWORD(v21) = *(_DWORD*)(v8 + 1372);
        BYTE4(v21) = *(_BYTE*)(v8 + 1376) & 1;
        nn_util_CopyUtf8String_plt(v9, 129, v8 + 8, 129, 128);
        result = nn_hid_system_detail_SetButtonConfigStorage_plt_878910(&v11,
                                                                        v9, v4);
      }
      v5 += 1448;
      ++v4;
    } while (v6 != v5);
  }
  return result;
}

__int64 nn_hidconfig_system_SetButtonConfigStoragesLeft(__int64 result)
{
  unsigned __int64 v1;
  __int64 v2;
  __int64* v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD v9[16];
  char v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;

  v1 = *(_QWORD*)(result + 8);
  v2 = 5;
  if (v1 < 5) {
    v2 = *(_QWORD*)(result + 8);
  }
  if (v1 != 0) {
    v3 = (__int64*)result;
    v4 = 0;
    v5 = 0;
    v6 = 1448 * v2;
    do {
      v7 = *v3;
      v17 = 0;
      v15 = 0;
      v16 = 0;
      v13 = 0;
      v14 = 0;
      v11 = 0;
      v12 = 0;
      v10 = 0;
      memset(v9, 0, sizeof(v9));
      if ((*(_BYTE*)(v7 + v5) & 1) != 0) {
        v8 = v7 + v5;
        SdkRoutine_6e6c60(&v11, *(_QWORD*)(v7 + v5 + 456),
                          *(unsigned int*)(v7 + v5 + 464));
        SdkRoutine_6e6c60((char*)&v11 + 4, *(_QWORD*)(v8 + 496),
                          *(unsigned int*)(v8 + 504));
        SdkRoutine_6e6c60(&v12, *(_QWORD*)(v8 + 536),
                          *(unsigned int*)(v8 + 544));
        SdkRoutine_6e6c60((char*)&v12 + 4, *(_QWORD*)(v8 + 576),
                          *(unsigned int*)(v8 + 584));
        SdkRoutine_6e6c60(&v13, *(_QWORD*)(v8 + 776),
                          *(unsigned int*)(v8 + 784));
        SdkRoutine_6e6c60((char*)&v13 + 4, *(_QWORD*)(v8 + 856),
                          *(unsigned int*)(v8 + 864));
        SdkRoutine_6e6c60(&v14, *(_QWORD*)(v8 + 936),
                          *(unsigned int*)(v8 + 944));
        SdkRoutine_6e6c60(&v15, *(_QWORD*)(v8 + 1016),
                          *(unsigned int*)(v8 + 1024));
        SdkRoutine_6e6c60((char*)&v15 + 4, *(_QWORD*)(v8 + 1056),
                          *(unsigned int*)(v8 + 1064));
        SdkRoutine_6e6c60((char*)&v14 + 4, *(_QWORD*)(v8 + 1176),
                          *(unsigned int*)(v8 + 1184));
        SdkRoutine_6e6c60(&v16, *(_QWORD*)(v8 + 1256),
                          *(unsigned int*)(v8 + 1264));
        HIDWORD(v16) = *(_DWORD*)(v8 + 1296);
        LOBYTE(v17) = *(_BYTE*)(v8 + 1300) & 1;
        nn_util_CopyUtf8String_plt(v9, 129, v8 + 8, 129, 128);
        result = nn_hid_system_detail_SetButtonConfigStorage_plt_878920(&v11,
                                                                        v9, v4);
      }
      v5 += 1448;
      ++v4;
    } while (v6 != v5);
  }
  return result;
}

__int64 nn_hidconfig_system_SetButtonConfigStoragesRight(__int64 result)
{
  unsigned __int64 v1;
  __int64 v2;
  __int64* v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD v9[16];
  char v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD v15[2];
  int v16;

  v1 = *(_QWORD*)(result + 8);
  v2 = 5;
  if (v1 < 5) {
    v2 = *(_QWORD*)(result + 8);
  }
  if (v1 != 0) {
    v3 = (__int64*)result;
    v4 = 0;
    v5 = 0;
    v6 = 1448 * v2;
    do {
      v7 = *v3;
      v16 = 0;
      v15[0] = 0;
      v15[1] = 0;
      v13 = 0;
      v14 = 0;
      v11 = 0;
      v12 = 0;
      v10 = 0;
      memset(v9, 0, sizeof(v9));
      if ((*(_BYTE*)(v7 + v5) & 1) != 0) {
        v8 = v7 + v5;
        SdkRoutine_6e6c60(&v11, *(_QWORD*)(v7 + v5 + 616),
                          *(unsigned int*)(v7 + v5 + 624));
        SdkRoutine_6e6c60((char*)&v11 + 4, *(_QWORD*)(v8 + 656),
                          *(unsigned int*)(v8 + 664));
        SdkRoutine_6e6c60(&v12, *(_QWORD*)(v8 + 696),
                          *(unsigned int*)(v8 + 704));
        SdkRoutine_6e6c60((char*)&v12 + 4, *(_QWORD*)(v8 + 736),
                          *(unsigned int*)(v8 + 744));
        SdkRoutine_6e6c60(&v13, *(_QWORD*)(v8 + 816),
                          *(unsigned int*)(v8 + 824));
        SdkRoutine_6e6c60((char*)&v13 + 4, *(_QWORD*)(v8 + 896),
                          *(unsigned int*)(v8 + 904));
        SdkRoutine_6e6c60(&v14, *(_QWORD*)(v8 + 976),
                          *(unsigned int*)(v8 + 984));
        SdkRoutine_6e6c60(v15, *(_QWORD*)(v8 + 1096),
                          *(unsigned int*)(v8 + 1104));
        SdkRoutine_6e6c60((char*)v15 + 4, *(_QWORD*)(v8 + 1136),
                          *(unsigned int*)(v8 + 1144));
        SdkRoutine_6e6c60((char*)&v14 + 4, *(_QWORD*)(v8 + 1216),
                          *(unsigned int*)(v8 + 1224));
        LODWORD(v15[1]) = 22;
        HIDWORD(v15[1]) = *(_DWORD*)(v8 + 1372);
        LOBYTE(v16) = *(_BYTE*)(v8 + 1376) & 1;
        nn_util_CopyUtf8String_plt(v9, 129, v8 + 8, 129, 128);
        result = nn_hid_system_detail_SetButtonConfigStorage_plt_878930(&v11,
                                                                        v9, v4);
      }
      v5 += 1448;
      ++v4;
    } while (v6 != v5);
  }
  return result;
}

#pragma GCC visibility pop
