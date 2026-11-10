#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_FDK_getBitCnt_plt(_QWORD);
__int64 nn_codec_FDK_getValidBits_plt(_QWORD);
__int64 nn_codec_FDK_get_plt(_QWORD, _QWORD);
__int64 nn_codec_FDK_pushBack_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDK_put_plt(_QWORD, _QWORD);
extern void (*SdkData_e87a50[778])();
unsigned int* nn_codec_FDKpushBiDirectional(unsigned int* result, unsigned int);
__int64 nn_codec_HcrGetABitFromBitstream(unsigned int* a1, unsigned __int16* a2,
                                         unsigned __int16* a3, char a4);

__int64 nn_codec_HcrGetABitFromBitstream(unsigned int* a1, unsigned __int16* a2,
                                         unsigned __int16* a3, char a4)
{
  unsigned int v4;
  int v6;
  int v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  __int64 v12;
  int v13;
  _WORD* v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  int v29;
  unsigned int v30;
  unsigned int v31;
  unsigned int v32;
  int v33;
  unsigned int v34;
  unsigned int v35;
  unsigned int v36;
  __int16 v37;
  int v38;
  unsigned int v39;
  __int64 v40;

  v4 = a1[12];
  if (a4 != 0) {
    v6 = *a3;
    if (v4 != 0) {
      nn_codec_FDK_put_plt(a1 + 2, *a1);
      *(_QWORD*)a1 = 0;
      v8 = nn_codec_FDK_getBitCnt_plt(a1 + 2);
      v9 = v6 - v8;
      if (v6 == v8) {
        goto LABEL_5;
      }
    }
    else {
      nn_codec_FDK_pushBack_plt(a1 + 2, a1[1], 0);
      *(_QWORD*)a1 = 0;
      v29 = nn_codec_FDK_getBitCnt_plt(a1 + 2);
      v9 = v6 - v29;
      if (v6 == v29) {
      LABEL_5:
        v10 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                         (unsigned __int64)((__int64*)0x4LL));
        v11 = a1[1];
        if (v11 < 2) {
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
          v12 = v22 | v23;
          *a1 = v12;
          v11 = v24 + v21;
          if (v11 == 0) {
            v39 = a1[12];
            v27 = v10 & (2 * v12);
            *(_QWORD*)a1 = (unsigned int)(2 * v12);
            if (v39 == 0) {
              v26 = 2;
            LABEL_37:
              a1[1] = v26;
              nn_codec_FDK_pushBack_plt(a1 + 2, v26, 0);
              *(_QWORD*)a1 = 0;
              goto LABEL_38;
            }
            v12 = (unsigned int)(2 * v12);
            goto LABEL_33;
          }
        }
        else {
          v12 = *a1;
        }
        v25 = v11 - 1;
        v26 = v11 + 1;
        a1[1] = v25;
        v27 = ((unsigned int)v12 >> v25) & v10;
        v28 = a1[12];
        if (v26 > 0x1F) {
          if (v28 == 0) {
            nn_codec_FDK_pushBack_plt(a1 + 2, v25, 0);
          LABEL_34:
            v40 = a1[12];
            *(_QWORD*)a1 = 0;
            nn_codec_FDK_pushBack_plt(a1 + 2, 2, v40);
          LABEL_38:
            v37 = -1;
            v14 = a3;
            goto LABEL_39;
          }
        }
        else if (v28 == 0) {
          goto LABEL_37;
        }
      LABEL_33:
        nn_codec_FDK_put_plt(a1 + 2, v12);
        goto LABEL_34;
      }
    }
    nn_codec_FDKpushBiDirectional(a1, v9);
    goto LABEL_5;
  }
  v13 = *a2;
  v14 = a2;
  if (v4 != 0) {
    nn_codec_FDK_put_plt(a1 + 2, *a1);
    *(_QWORD*)a1 = 0;
    v15 = nn_codec_FDK_getBitCnt_plt(a1 + 2);
    v16 = v13 - v15;
    if (v13 == v15) {
      goto LABEL_10;
    }
    goto LABEL_9;
  }
  nn_codec_FDK_pushBack_plt(a1 + 2, a1[1], 0);
  *(_QWORD*)a1 = 0;
  v38 = nn_codec_FDK_getBitCnt_plt(a1 + 2);
  v16 = v13 - v38;
  if (v13 != v38) {
  LABEL_9:
    nn_codec_FDKpushBiDirectional(a1, v16);
  }
LABEL_10:
  v17 = a1[1];
  v18 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                   (unsigned __int64)((__int64*)0x4LL));
  if (v17 < 2) {
    v30 = nn_codec_FDK_getValidBits_plt(a1 + 2);
    if (31 - a1[1] >= v30) {
      v31 = v30;
    }
    else {
      v31 = 31 - a1[1];
    }
    v32 = *a1 << v31;
    v33 = nn_codec_FDK_get_plt(a1 + 2, v31);
    v34 = a1[1];
    v19 = v32 | v33;
    *a1 = v32 | v33;
    v17 = v34 + v31;
    if (v17 == 0) {
      v36 = 2 * v19;
      *(_QWORD*)a1 = v36;
      goto LABEL_28;
    }
  }
  else {
    v19 = *a1;
  }
  v35 = v17 - 1;
  a1[1] = v35;
  v36 = v19 >> v35;
LABEL_28:
  v27 = v36 & v18;
  v37 = 1;
LABEL_39:
  *v14 += v37;
  return v27;
}

#pragma GCC visibility pop
