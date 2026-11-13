#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_FDK_ResetBitBuffer_plt(__int64);
__int64 nn_codec_FDK_getValidBits_plt(__int64);
__int64 nn_codec_FDK_get_plt(__int64, unsigned int);
__int64 nn_codec_FDK_pushBack_plt(__int64, unsigned int, unsigned __int8);
__int64 nn_codec_FDK_put_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDKcrcEndReg_plt(__int64, __int64, int);
__int64 nn_codec_FDKcrcGetCRC_plt(__int64);
extern void (*SdkData_e87a50[778])();
__int64 fdk_aac_libSBRenc_src_3d1aa0(__int64 result, __int64 a2, int a3,
                                     unsigned int a4);

__int64 fdk_aac_libSBRenc_src_3d1aa0(__int64 result, __int64 a2, int a3,
                                     unsigned int a4)
{
  __int64 v4;
  int v6;
  __int64 v7;
  int v8;
  __int64 v9;
  int v10;
  char v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  int v24;
  int v25;
  __int64 v26;
  int v27;
  __int64 v28;
  struct {
    _QWORD v29[5];
    __int64 v30;
  } v29_;

  if (result != 0) {
    v4 = result;
    *(_DWORD*)(result + 8) = 0;
    if ((a4 & 8) != 0) {
      nn_codec_FDKcrcEndReg_plt(a2, result + 16, a3);
      v6 = (unsigned __int16)nn_codec_FDKcrcGetCRC_plt(a2) ^ 0xFF;
      v7 = *(unsigned int*)(v4 + 76);
      v8 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                      (unsigned __int64)(*(_BYTE(*)[4])0x20LL));
      if ((unsigned int)(v7 + 8) > 0x1F) {
        nn_codec_FDK_put_plt(v4 + 80, *(unsigned int*)(v4 + 72), v7);
        *(_DWORD*)(v4 + 72) = v8 & v6;
        *(_DWORD*)(v4 + 76) = 8;
        if (*(_DWORD*)(v4 + 120) != 0) {
          goto LABEL_6;
        }
      }
      else {
        *(_DWORD*)(v4 + 72) = v8 & v6 | (*(_DWORD*)(v4 + 72) << 8);
        *(_DWORD*)(v4 + 76) = v7 + 8;
        if (*(_DWORD*)(v4 + 120) != 0) {
          goto LABEL_6;
        }
      }
      goto LABEL_34;
    }
    if ((a4 & 1) != 0) {
      if ((a4 & 4) == 0) {
        goto LABEL_5;
      }
      goto LABEL_16;
    }
    v9 = *(unsigned int*)(result + 20);
    v10 = (4 - *(_BYTE*)(result + 4) -
           (((a4 >> 1) & 2) + (unsigned __int8)*(_DWORD*)result)) &
          7;
    *(_DWORD*)(result + 8) = v10;
    if ((unsigned int)(v10 + v9) > 0x1F) {
      v11 = a4;
      nn_codec_FDK_put_plt(result + 24, *(unsigned int*)(result + 16), v9);
      *(_DWORD*)(v4 + 16) = 0;
      *(_DWORD*)(v4 + 20) = v10;
      if ((v11 & 4) != 0) {
      LABEL_16:
        v12 = *(_QWORD*)(v4 + 56);
        v29_.v29[3] = *(_QWORD*)(v4 + 48);
        v29_.v29[4] = v12;
        v29_.v30 = *(_QWORD*)(v4 + 64);
        v29_.v29[0] = *(_QWORD*)(v4 + 24);
        v13 = *(_QWORD*)(v4 + 40);
        v29_.v29[1] = *(_QWORD*)(v4 + 32);
        v29_.v29[2] = v13;
        nn_codec_FDK_ResetBitBuffer_plt((__int64)v29_.v29);
        v28 = 0;
        v14 = *(int*)(v4 + 4) + *(int*)v4;
        v15 = *(_DWORD*)(v4 + 8);
        LODWORD(v29_.v30) = 0;
        v16 = v14 + v15;
        if (v14 + v15 < 1) {
          v25 = 0;
        LABEL_30:
          v26 = *(unsigned int*)(v4 + 76);
          v27 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                           (unsigned __int64)((__int64*)0x28LL));
          if ((unsigned int)(v26 + 10) > 0x1F) {
            nn_codec_FDK_put_plt(v4 + 80, *(unsigned int*)(v4 + 72), v26);
            *(_DWORD*)(v4 + 72) = v27 & v25;
            *(_DWORD*)(v4 + 76) = 10;
            if (*(_DWORD*)(v4 + 120) != 0) {
              goto LABEL_6;
            }
          }
          else {
            *(_DWORD*)(v4 + 72) = v27 & v25 | (*(_DWORD*)(v4 + 72) << 10);
            *(_DWORD*)(v4 + 76) = v26 + 10;
            if (*(_DWORD*)(v4 + 120) != 0) {
              goto LABEL_6;
            }
          }
          goto LABEL_34;
        }
        v17 = 0;
        v18 = 0;
        v19 = 0;
        v20 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                         (unsigned __int64)((__int64*)0x4LL));
        while (1) {
          if (v18 <= 1) {
            v21 = nn_codec_FDK_getValidBits_plt((__int64)v29_.v29);
            v22 = 31 - HIDWORD(v28) >= v21 ? v21 : 31 - HIDWORD(v28);
            v17 = ((_DWORD)v28 << v22) |
                  nn_codec_FDK_get_plt((__int64)v29_.v29, v22);
            LODWORD(v28) = v17;
            v18 = HIDWORD(v28) + v22;
            if (HIDWORD(v28) + v22 == 0) {
              break;
            }
          }
          HIDWORD(v28) = --v18;
          v23 = (v17 >> v18) & v20 ^ (v19 >> 9);
          v19 *= 2;
          if ((v23 & 1) != 0) {
            goto LABEL_25;
          }
        LABEL_18:
          if (--v16 == 0) {
            v25 = v19 & 0x3FF;
            goto LABEL_30;
          }
        }
        v17 *= 2;
        v28 = v17;
        v24 = v17 & v20 ^ (v19 >> 9);
        v19 *= 2;
        if ((v24 & 1) == 0) {
          goto LABEL_18;
        }
      LABEL_25:
        v19 ^= 0x233u;
        goto LABEL_18;
      }
    }
    else {
      *(_DWORD*)(result + 16) <<= v10;
      *(_DWORD*)(result + 20) = v10 + v9;
      if ((a4 & 4) != 0) {
        goto LABEL_16;
      }
    }
  LABEL_5:
    if (*(_DWORD*)(v4 + 120) != 0) {
    LABEL_6:
      result = nn_codec_FDK_put_plt(v4 + 80, *(unsigned int*)(v4 + 72),
                                    *(unsigned int*)(v4 + 76));
    LABEL_35:
      *(_QWORD*)(v4 + 72) = 0;
      return result;
    }
  LABEL_34:
    result = nn_codec_FDK_pushBack_plt(v4 + 80, *(_DWORD*)(v4 + 76), 0);
    goto LABEL_35;
  }
  return result;
}

#pragma GCC visibility pop
