#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_FDK_getBitCnt_plt(_QWORD);
__int64 nn_codec_FDK_getValidBits_plt(_QWORD);
__int64 nn_codec_FDK_get_plt(_QWORD, _QWORD);
__int64 nn_codec_FDK_pushBack_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDK_put_plt(_QWORD, _QWORD);
extern void (*SdkData_e87a50[778])();
unsigned int* nn_codec_FDKpushBiDirectional(unsigned int* result, unsigned int);
__int64 nn_codec_rvlcReadBitFromBitstream(unsigned int* a1, _WORD* a2, char a3);

__int64 nn_codec_rvlcReadBitFromBitstream(unsigned int* a1, _WORD* a2, char a3)
{
  int v3;
  int v7;
  unsigned int v8;
  int v9;
  unsigned int v10;
  __int64 v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  unsigned int v27;
  unsigned int v28;
  int v29;
  __int16 v30;
  unsigned int v31;
  __int64 v32;

  v3 = (unsigned __int16)*a2;
  if (a1[12] != 0) {
    nn_codec_FDK_put_plt(a1 + 2, *a1);
    *(_QWORD*)a1 = 0;
    v7 = nn_codec_FDK_getBitCnt_plt(a1 + 2);
    v8 = v3 - v7;
    if (v3 == v7) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  nn_codec_FDK_pushBack_plt(a1 + 2, a1[1], 0);
  *(_QWORD*)a1 = 0;
  v12 = nn_codec_FDK_getBitCnt_plt(a1 + 2);
  v8 = v3 - v12;
  if (v3 != v12) {
  LABEL_3:
    nn_codec_FDKpushBiDirectional(a1, v8);
  }
LABEL_4:
  v9 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                  (unsigned __int64)((__int64*)0x4LL));
  v10 = a1[1];
  if (a3 != 0) {
    if (v10 < 2) {
      v14 = nn_codec_FDK_getValidBits_plt(a1 + 2);
      if (31 - a1[1] >= v14) {
        v15 = v14;
      }
      else {
        v15 = 31 - a1[1];
      }
      v16 = *a1 << v15;
      v17 = nn_codec_FDK_get_plt(a1 + 2, v15);
      v18 = a1[1];
      v11 = v16 | v17;
      *a1 = v11;
      v10 = v18 + v15;
      if (v10 == 0) {
        v31 = a1[12];
        v21 = v9 & (2 * v11);
        *(_QWORD*)a1 = (unsigned int)(2 * v11);
        if (v31 == 0) {
          v20 = 2;
        LABEL_32:
          a1[1] = v20;
          nn_codec_FDK_pushBack_plt(a1 + 2, v20, 0);
          *(_QWORD*)a1 = 0;
          goto LABEL_33;
        }
        v11 = (unsigned int)(2 * v11);
        goto LABEL_28;
      }
    }
    else {
      v11 = *a1;
    }
    v19 = v10 - 1;
    v20 = v10 + 1;
    a1[1] = v19;
    v21 = ((unsigned int)v11 >> v19) & v9;
    v22 = a1[12];
    if (v20 > 0x1F) {
      if (v22 == 0) {
        nn_codec_FDK_pushBack_plt(a1 + 2, v19, 0);
      LABEL_29:
        v32 = a1[12];
        *(_QWORD*)a1 = 0;
        nn_codec_FDK_pushBack_plt(a1 + 2, 2, v32);
      LABEL_33:
        v30 = -1;
        goto LABEL_34;
      }
    }
    else if (v22 == 0) {
      goto LABEL_32;
    }
  LABEL_28:
    nn_codec_FDK_put_plt(a1 + 2, v11);
    goto LABEL_29;
  }
  if (v10 < 2) {
    v23 = nn_codec_FDK_getValidBits_plt(a1 + 2);
    if (31 - a1[1] >= v23) {
      v24 = v23;
    }
    else {
      v24 = 31 - a1[1];
    }
    v25 = *a1 << v24;
    v26 = nn_codec_FDK_get_plt(a1 + 2, v24);
    v27 = a1[1];
    v13 = v25 | v26;
    *a1 = v25 | v26;
    v10 = v27 + v24;
    if (v10 == 0) {
      v29 = 2 * v13;
      *(_QWORD*)a1 = 2 * v13;
      goto LABEL_25;
    }
  }
  else {
    v13 = *a1;
  }
  v28 = v10 - 1;
  a1[1] = v28;
  v29 = v13 >> v28;
LABEL_25:
  v21 = v29 & v9;
  v30 = 1;
LABEL_34:
  *a2 += v30;
  return v21;
}

#pragma GCC visibility pop
