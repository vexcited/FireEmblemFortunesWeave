#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_CLatmDemux_ReadPayloadLengthInfo_plt(_QWORD, _QWORD);
__int64 nn_codec_CLatmDemux_ReadStreamMuxConfig_plt(_QWORD, _QWORD, _QWORD,
                                                    _QWORD, _QWORD);
__int64 nn_codec_FDK_getValidBits_plt(_QWORD);
__int64 nn_codec_FDK_get_plt(_QWORD, _QWORD);
__int64 nn_codec_FDK_pushBack_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDK_put_plt(_QWORD, _QWORD);
extern void (*SdkData_e87a50[778])();
__int64 nn_codec_CLatmDemux_Read(unsigned int* a1, __int64 a2, int a3,
                                 __int64 a4, __int64 a5, _DWORD* a6, int a7);
__int64 tpdec_latm_3a20e0(int* a1);

__int64 nn_codec_CLatmDemux_Read(unsigned int* a1, __int64 a2, int a3,
                                 __int64 a4, __int64 a5, _DWORD* a6, int a7)
{
  int v14;
  __int64 result;
  unsigned int v16;
  int v17;
  unsigned int v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  int v27;
  unsigned int v28;
  int v29;
  unsigned int v30;
  int v31;

  if (a1[12] != 0) {
    nn_codec_FDK_put_plt(a1 + 2, *a1);
    *(_QWORD*)a1 = 0;
    v14 = nn_codec_FDK_getValidBits_plt(a1 + 2);
    if (v14 < 9) {
      return 257;
    }
  }
  else {
    nn_codec_FDK_pushBack_plt(a1 + 2, a1[1], 0);
    *(_QWORD*)a1 = 0;
    v14 = nn_codec_FDK_getValidBits_plt(a1 + 2);
    if (v14 < 9) {
      return 257;
    }
  }
  if (a3 == 7) {
    goto LABEL_18;
  }
  v16 = a1[1];
  v17 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                   (unsigned __int64)((__int64*)0x4LL));
  if (v16 < 2) {
    v19 = v14;
    v20 = nn_codec_FDK_getValidBits_plt(a1 + 2);
    if (31 - a1[1] >= v20) {
      v21 = v20;
    }
    else {
      v21 = 31 - a1[1];
    }
    v22 = *a1 << v21;
    v23 = nn_codec_FDK_get_plt(a1 + 2, v21);
    v24 = a1[1];
    v18 = v22 | v23;
    *a1 = v22 | v23;
    v16 = v24 + v21;
    if (v16 == 0) {
      v29 = 2 * v18;
      v14 = v19;
      *a1 = v29;
      a1[1] = 0;
      LOBYTE(v29) = v29 & v17;
      *(_BYTE*)(a2 + 44) = v29;
      if ((_BYTE)v29 != 0) {
        goto LABEL_18;
      }
      goto LABEL_15;
    }
    v14 = v19;
  }
  else {
    v18 = *a1;
  }
  v25 = v16 - 1;
  a1[1] = v25;
  v26 = (v18 >> v25) & v17;
  *(_BYTE*)(a2 + 44) = v26;
  if ((_BYTE)v26 == 0) {
  LABEL_15:
    v27 = v14;
    v28 = nn_codec_CLatmDemux_ReadStreamMuxConfig_plt(a1, a2, a4, a5, a6);
    v14 = v27;
    if (v28 != 0) {
      return v28;
    }
  }
LABEL_18:
  if (*a6 == 0) {
    return 258;
  }
  if (*(_BYTE*)(a2 + 46) != 0) {
    return 1026;
  }
  v30 = v14;
  result = nn_codec_CLatmDemux_ReadPayloadLengthInfo_plt(a1, a2);
  if ((_DWORD)result == 0) {
    if (a7 != 0) {
      return 0;
    }
    v31 = *(_DWORD*)(a2 + 4);
    if (v31 == 255 || *(_BYTE*)(a2 + 55) != 0) {
      return 0;
    }
    if (v30 >= ((32 * v31 * *(char*)(a5 + 524)) | 0x18u)) {
      *(_BYTE*)(a2 + 55) = 1;
      return 0;
    }
    return 257;
  }
  return result;
}

__int64 tpdec_latm_3a20e0(int* a1)
{
  void(__attribute__((noreturn)) * v2)();
  unsigned int v3;
  int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  int v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  int v14;
  unsigned int v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  int v19;
  int v20;
  int v21;

  v2 = SdkData_e87a50[0];
  v3 = a1[1];
  v4 = *((unsigned __int8*)SdkData_e87a50[0] +
         (unsigned __int64)((__int64*)0x4LL) + 4);
  if (v3 >= 3) {
    v5 = *a1;
  LABEL_8:
    v11 = v3 - 2;
    a1[1] = v3 - 2;
    v12 = v5 >> (v3 - 2);
    goto LABEL_9;
  }
  v6 = nn_codec_FDK_getValidBits_plt(a1 + 2);
  if (31 - a1[1] >= v6) {
    v7 = v6;
  }
  else {
    v7 = 31 - a1[1];
  }
  v8 = *a1 << v7;
  v9 = nn_codec_FDK_get_plt(a1 + 2, v7);
  v10 = a1[1];
  v5 = v8 | v9;
  *a1 = v8 | v9;
  v3 = v10 + v7;
  if (v10 + v7 > 1) {
    goto LABEL_8;
  }
  v11 = 0;
  v5 <<= 2 - v3;
  *(_QWORD*)a1 = v5;
  v12 = v5;
LABEL_9:
  v13 = v4 & v12;
  v14 = (unsigned __int8)(*(_BYTE(*)[4])0x20LL)[(_QWORD)v2];
  v15 = 0;
  v16 = v13 + 1;
  do {
    while (1) {
      if (v11 <= 8) {
        v17 = nn_codec_FDK_getValidBits_plt(a1 + 2);
        v18 = 31 - a1[1] >= v17 ? v17 : 31 - a1[1];
        v19 = *a1 << v18;
        v20 = nn_codec_FDK_get_plt(a1 + 2, v18);
        v21 = a1[1];
        v5 = v19 | v20;
        *a1 = v19 | v20;
        v11 = v21 + v18;
        if (v11 <= 7) {
          break;
        }
      }
      v11 -= 8;
      a1[1] = v11;
      --v16;
      v15 = v14 & (v5 >> v11) | (v15 << 8);
      if (v16 == 0) {
        return v15;
      }
    }
    v5 <<= 8 - v11;
    v11 = 0;
    *(_QWORD*)a1 = v5;
    --v16;
    v15 = v14 & v5 | (v15 << 8);
  } while (v16 != 0);
  return v15;
}

#pragma GCC visibility pop
