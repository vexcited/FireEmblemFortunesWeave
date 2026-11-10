#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_FDK_getValidBits_plt(_QWORD);
__int64 nn_codec_FDK_get_plt(_QWORD, _QWORD);
extern void (*SdkData_e87a50[778])();
__int64 nn_codec_CPns_Read(__int64 result, unsigned int* a2, __int64* a3,
                           __int64 a4, unsigned __int8 a5, int a6, int a7);

__int64 nn_codec_CPns_Read(__int64 result, unsigned int* a2, __int64* a3,
                           __int64 a4, unsigned __int8 a5, int a6, int a7)
{
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  int v20;
  int v21;
  int v22;
  unsigned int v23;
  int v24;
  unsigned int v25;
  int v26;
  int v27;
  unsigned __int8 v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;
  __int64 v35;
  int v36;
  int v37;
  int v38;

  v9 = result;
  if (*(_BYTE*)(result + 140) == 0) {
    v23 = a2[1];
    v24 =
        *(_DWORD*)((char*)SdkData_e87a50[0] + (unsigned __int64)((int*)0x24LL));
    if (v23 < 0xA) {
      v26 = a6;
      v27 = a7;
      v28 = a5;
      v29 = nn_codec_FDK_getValidBits_plt(a2 + 2);
      if (31 - a2[1] >= v29) {
        v30 = v29;
      }
      else {
        v30 = 31 - a2[1];
      }
      v31 = *a2 << v30;
      result = nn_codec_FDK_get_plt(a2 + 2, v30);
      v32 = a2[1];
      v25 = v31 | result;
      *a2 = v31 | result;
      v23 = v32 + v30;
      if (v23 <= 8) {
        a5 = v28;
        a7 = v27;
        a6 = v26;
        v33 = v25 << (9 - v23);
        *(_QWORD*)a2 = v33;
      LABEL_23:
        *(_BYTE*)(v9 + 140) = 1;
        v22 = (v33 & v24) - 256;
        v21 = a5 - 90;
        goto LABEL_24;
      }
      a5 = v28;
      a7 = v27;
      a6 = v26;
    }
    else {
      v25 = *a2;
    }
    v34 = v23 - 9;
    v33 = v25 >> v34;
    a2[1] = v34;
    goto LABEL_23;
  }
  v37 = a6;
  v38 = a7;
  v10 = *a3;
  v11 = 0;
  v12 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                   (unsigned __int64)((__int64*)0x4LL) + 4);
  v13 = a2[1];
  do {
    while (v13 >= 3) {
      v14 = *a2;
    LABEL_4:
      v13 -= 2;
      a2[1] = v13;
      v15 = *(unsigned __int16*)(v10 + 8LL * v11 + 2LL * ((v14 >> v13) & v12));
      v11 = v15 >> 2;
      if ((v15 & 1) != 0) {
        goto LABEL_11;
      }
    }
    v16 = nn_codec_FDK_getValidBits_plt(a2 + 2);
    if (31 - a2[1] >= v16) {
      v17 = v16;
    }
    else {
      v17 = 31 - a2[1];
    }
    v18 = *a2 << v17;
    result = nn_codec_FDK_get_plt(a2 + 2, v17);
    v19 = a2[1];
    v14 = v18 | result;
    *a2 = v18 | result;
    v13 = v19 + v17;
    if (v13 > 1) {
      goto LABEL_4;
    }
    v20 = v14 << (2 - v13);
    v13 = 0;
    *a2 = v20;
    a2[1] = 0;
    v15 = *(unsigned __int16*)(v10 + 8LL * v11 + 2LL * (v20 & v12));
    v11 = v15 >> 2;
  } while ((v15 & 1) == 0);
LABEL_11:
  if ((v15 & 2) != 0) {
    a2[1] = v13 + 1;
  }
  v21 = *(_DWORD*)(v9 + 136);
  a7 = v38;
  a6 = v37;
  v22 = v11 - 60;
LABEL_24:
  v35 = (unsigned int)(a6 + 16 * a7);
  v36 = v21 + v22;
  *(_DWORD*)(v9 + 136) = v36;
  *(_WORD*)(a4 + 2LL * (unsigned int)v35) = v36;
  *(_BYTE*)(v9 + v35 + 8) = 1;
  return result;
}

#pragma GCC visibility pop
