#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memset_plt(void* this_, void*, int);
__int64 nn_codec_FDK_getValidBits_plt(_QWORD);
__int64 nn_codec_FDK_get_plt(_QWORD, _QWORD);
__int64 nn_codec_FDKmemclear_plt(_QWORD, _QWORD);
extern void (*SdkData_e87a50[778])();
__int64 nn_codec_CJointStereo_Read(unsigned int* a1, unsigned __int8* a2,
                                   int a3, int a4);

__int64 nn_codec_CJointStereo_Read(unsigned int* a1, unsigned __int8* a2,
                                   int a3, int a4)
{
  void(__attribute__((noreturn)) * v7)();
  unsigned int v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned __int8* v18;
  int v20;
  int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  unsigned __int8* v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;
  unsigned int v32;
  int v33;
  unsigned int v34;

  v7 = SdkData_e87a50[0];
  v8 = a1[1];
  v9 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                  (unsigned __int64)((__int64*)0x4LL) + 4);
  if (v8 < 3) {
    v11 = nn_codec_FDK_getValidBits_plt(a1 + 2);
    if (31 - a1[1] >= v11) {
      v12 = v11;
    }
    else {
      v12 = 31 - a1[1];
    }
    v13 = *a1 << v12;
    v14 = nn_codec_FDK_get_plt(a1 + 2, v12);
    v15 = a1[1];
    v10 = v13 | v14;
    *a1 = v13 | v14;
    v8 = v15 + v12;
    if (v8 <= 1) {
      v16 = v10 << (2 - v8);
      *(_QWORD*)a1 = v16;
      goto LABEL_9;
    }
  }
  else {
    v10 = *a1;
  }
  v17 = v8 - 2;
  a1[1] = v17;
  v16 = v10 >> v17;
LABEL_9:
  v18 = a2 + 1;
  *a2 = v16 & v9;
  nn_codec_FDKmemclear_plt(a2 + 1, (unsigned int)a4);
  v20 = *a2;
  if (v20 == 2) {
    if (a4 >= 1) {
      memset_plt((void*)(a2 + 1), (char*)((_UNKNOWN*)0xFCLL) + 3, a4);
    }
  }
  else if (v20 == 1 && a3 >= 1 && a4 >= 1) {
    v21 = *(_DWORD*)((char*)((__int64*)0x4LL) + (_QWORD)v7);
    v22 = 0;
    v23 = (unsigned int)a4;
    do {
      v24 = v23;
      v25 = v18;
      do {
        v29 = a1[1];
        if (v29 > 1) {
          v26 = *a1;
        LABEL_17:
          v27 = v29 - 1;
          v28 = v26 >> v27;
          a1[1] = v27;
          goto LABEL_18;
        }
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
        v26 = v32 | v33;
        *a1 = v32 | v33;
        v29 = v34 + v31;
        if (v29 != 0) {
          goto LABEL_17;
        }
        v28 = 2 * v26;
        *(_QWORD*)a1 = v28;
      LABEL_18:
        --v24;
        *v25++ |= ((unsigned __int8)v28 & (unsigned __int8)v21) << v22;
      } while (v24 != 0);
      ++v22;
    } while (v22 != a3);
  }
  return 0;
}

#pragma GCC visibility pop
