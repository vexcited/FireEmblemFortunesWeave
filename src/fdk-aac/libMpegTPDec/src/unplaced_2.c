#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_FDK_getValidBits_plt(__int64);
__int64 nn_codec_FDK_get_plt(__int64, unsigned int);
extern void (*SdkData_e87a50[778])();
__int64 fdk_aac_libMpegTPDec_src_3a2440(int* a1);

__int64 fdk_aac_libMpegTPDec_src_3a2440(int* a1)
{
  int v2;
  int v3;
  unsigned int v4;
  unsigned int v5;
  int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v2 = 0;
  v3 = *((unsigned __int8*)SdkData_e87a50[0] +
         (unsigned __int64)(*(_BYTE(*)[4])0x20LL));
  v4 = a1[1];
  do {
    while (1) {
      if (v4 >= 9) {
        v7 = *a1;
        break;
      }
      v8 = nn_codec_FDK_getValidBits_plt((__int64)(a1 + 2));
      v9 = 31 - a1[1] >= v8 ? v8 : 31 - a1[1];
      v10 = *a1 << v9;
      v11 = nn_codec_FDK_get_plt((__int64)(a1 + 2), v9);
      v12 = a1[1];
      v7 = v10 | v11;
      *a1 = v10 | v11;
      v4 = v12 + v9;
      if (v4 > 7) {
        break;
      }
      v5 = v7 << (8 - v4);
      v4 = 0;
      *a1 = v5;
      a1[1] = 0;
      v6 = v3 & v5;
      v2 += v6;
      if (v6 != 255) {
        return (unsigned int)(8 * v2);
      }
    }
    v4 -= 8;
    a1[1] = v4;
    v13 = v3 & (v7 >> v4);
    v2 += v13;
  } while (v13 == 255);
  return (unsigned int)(8 * v2);
}

#pragma GCC visibility pop
