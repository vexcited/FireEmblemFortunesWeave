#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_CProgramConfig_Read_plt(__int64, __int64, unsigned int);
__int64 nn_codec_FDK_get32_plt(__int64);
__int64 nn_codec_FDK_getValidBits_plt(__int64);
__int64 nn_codec_FDK_get_plt(__int64, unsigned int);
__int64 nn_codec_FDK_pushBack_plt(__int64, unsigned int, unsigned __int8);
__int64 nn_codec_FDK_pushForward_plt(__int64, unsigned int, unsigned __int8);
__int64 nn_codec_FDK_put_plt(_QWORD, _QWORD, _QWORD);
extern void (*SdkData_e87a50[778])();
unsigned int* nn_codec_FDKpushBiDirectional(unsigned int* result, unsigned int);
__int64 fdk_aac_libAACenc_src_388420(unsigned int* a1, _BYTE* a2, __int64 a3,
                                     __int64 a4, __int16 a5);
__int64 fdk_aac_libAACenc_src_39a0c0(__int64 a1, __int64 a2, unsigned int* a3);

__int64 fdk_aac_libAACenc_src_388420(unsigned int* a1, _BYTE* a2, __int64 a3,
                                     __int64 a4, __int16 a5)
{
  unsigned int v5;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  __int64 v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  unsigned int v17;
  void(__attribute__((noreturn)) * v18)();
  unsigned int v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  int v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;
  unsigned int v32;
  int v33;
  unsigned int v34;
  unsigned int v35;
  unsigned int v36;
  unsigned int v37;
  unsigned int v38;
  int v39;
  unsigned int v40;
  int v41;
  int v42;
  int v43;
  unsigned __int64 v44;
  unsigned int v45;
  unsigned int v47;
  unsigned int v48;
  unsigned int v49;
  unsigned int v50;
  unsigned int v51;
  int v52;
  unsigned int v53;
  unsigned int v54;
  _BYTE* v55;
  unsigned int v56;
  unsigned int v57;
  unsigned int v58;
  unsigned int v59;
  int v60;
  unsigned int v61;
  unsigned int v62;
  unsigned int v63;
  unsigned int v64;

  {
    v5 = *(unsigned __int8*)(a4 + 12);
    __asm__ volatile("" ::"r"(v5));
  }
  *a2 = 0;
  {
    v10 = a1[1];
    __asm__ volatile("" ::"r"(v10));
  }
  if (v10 != 0) {
    {
      v11 = *a1;
      __asm__ volatile("" ::"r"(v11));
    }
    a1[1] = v10 - 1;
    v12 = v11 >> (v10 - 1);
    *a2 = v12 & 1;
    if ((v12 & 1) == 0) {
      return 0;
    }
  }
  else {
    v13 = a4;
    v14 = nn_codec_FDK_getValidBits_plt((__int64)(a1 + 2));
    if (v14 < 0x20) {
      v16 = v14;
      if (v14 == 0) {
        *a2 = 0;
        return 0;
      }
      v15 = nn_codec_FDK_get_plt((__int64)(a1 + 2), v14);
    }
    else {
      v15 = nn_codec_FDK_get32_plt((__int64)(a1 + 2));
      v16 = 32;
    }
    a4 = v13;
    *a1 = v15;
    a1[1] = v16 - 1;
    v17 = v15 >> (v16 - 1);
    *a2 = v17 & 1;
    if ((v17 & 1) == 0) {
      return 0;
    }
  }
  if (*(_BYTE*)(a4 + 11) == 2) {
    return 16388;
  }
  v18 = SdkData_e87a50[0];
  {
    v19 = a1[1];
    __asm__ volatile("" ::"r"(v19));
  }
  {
    v20 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                     (unsigned __int64)((__int64*)0x4LL) + 4);
    __asm__ volatile("" ::"r"(v20));
  }
  if (v19 >= 3) {
    {
      v21 = *a1;
      __asm__ volatile("" ::"r"(v21));
    }
    goto LABEL_23;
  }
  v22 = nn_codec_FDK_getValidBits_plt((__int64)(a1 + 2));
  if (31 - a1[1] >= v22) {
    v23 = v22;
  }
  else {
    v23 = 31 - a1[1];
    __asm__ volatile("" ::"r"(v23));
  }
  {
    v24 = *a1 << v23;
    __asm__ volatile("" ::"r"(v24));
  }
  v25 = nn_codec_FDK_get_plt((__int64)(a1 + 2), v23);
  {
    v26 = a1[1];
    __asm__ volatile("" ::"r"(v26));
  }
  v21 = v24 | v25;
  *a1 = v24 | v25;
  v19 = v26 + v23;
  if (v19 > 1) {
  LABEL_23:
    v38 = v19 - 2;
    a1[1] = v38;
    v39 = (v21 >> v38) & v20;
    {
      v28 = *(_DWORD*)((char*)(*(void*(*)[1])0x18LL) + (_QWORD)v18);
      __asm__ volatile("" ::"r"(v28));
    }
    a2[1] = v39;
    {
      v29 = a1[1];
      __asm__ volatile("" ::"r"(v29));
    }
    if (v29 >= 7) {
      goto LABEL_24;
    }
    goto LABEL_17;
  }
  v27 = v21 << (2 - v19);
  *a1 = v27;
  a1[1] = 0;
  LOBYTE(v27) = v27 & v20;
  {
    v28 = *(_DWORD*)((char*)(*(void*(*)[1])0x18LL) + (_QWORD)v18);
    __asm__ volatile("" ::"r"(v28));
  }
  a2[1] = v27;
  {
    v29 = a1[1];
    __asm__ volatile("" ::"r"(v29));
  }
  if (v29 >= 7) {
  LABEL_24:
    {
      v35 = *a1;
      __asm__ volatile("" ::"r"(v35));
    }
    goto LABEL_25;
  }
LABEL_17:
  v30 = nn_codec_FDK_getValidBits_plt((__int64)(a1 + 2));
  if (31 - a1[1] >= v30) {
    v31 = v30;
  }
  else {
    v31 = 31 - a1[1];
    __asm__ volatile("" ::"r"(v31));
  }
  {
    v32 = *a1 << v31;
    __asm__ volatile("" ::"r"(v32));
  }
  v33 = nn_codec_FDK_get_plt((__int64)(a1 + 2), v31);
  {
    v34 = a1[1];
    __asm__ volatile("" ::"r"(v34));
  }
  v35 = v32 | v33;
  *a1 = v32 | v33;
  v29 = v34 + v31;
  if (v29 <= 5) {
    v36 = v35 << (6 - v29);
    *a1 = v36;
    a1[1] = 0;
    LOBYTE(v37) = v36 & v28;
    a2[2] = v37;
    v37 = (unsigned __int8)v37;
    if ((unsigned __int8)v37 >= v5) {
      return 16388;
    }
    goto LABEL_26;
  }
LABEL_25:
  v40 = v29 - 6;
  a1[1] = v40;
  LOBYTE(v37) = (v35 >> v40) & v28;
  a2[2] = v37;
  v37 = (unsigned __int8)v37;
  if ((unsigned __int8)v37 >= v5) {
    return 16388;
  }
LABEL_26:
  {
    v41 = *(__int16*)(a3 + 2LL * v37);
    __asm__ volatile("" ::"r"(v41));
  }
  {
    v43 = *(_DWORD*)((char*)((__int64*)0xCLL) + (_QWORD)v18 + 4);
    __asm__ volatile("" ::"r"(v43));
  }
  {
    v42 = *(_DWORD*)((char*)((__int64*)0xCLL) + (_QWORD)v18 + 8);
    __asm__ volatile("" ::"r"(v42));
  }
  v44 = 0;
  do {
    {
      v47 = a1[1];
      __asm__ volatile("" ::"r"(v47));
    }
    if (v47 < 6) {
      v49 = nn_codec_FDK_getValidBits_plt((__int64)(a1 + 2));
      if (31 - a1[1] >= v49) {
        v50 = v49;
      }
      else {
        v50 = 31 - a1[1];
        __asm__ volatile("" ::"r"(v50));
      }
      {
        v51 = *a1 << v50;
        __asm__ volatile("" ::"r"(v51));
      }
      v52 = nn_codec_FDK_get_plt((__int64)(a1 + 2), v50);
      {
        v53 = a1[1];
        __asm__ volatile("" ::"r"(v53));
      }
      v48 = v51 | v52;
      *a1 = v51 | v52;
      v47 = v53 + v50;
      if (v47 <= 4) {
        v54 = v48 << (5 - v47);
        *a1 = v54;
        a1[1] = 0;
        {
          v55 = &a2[v44];
          __asm__ volatile("" ::"r"(v55));
        }
        a2[v44 + 3] = v54 & v42;
        {
          v56 = a1[1];
          __asm__ volatile("" ::"r"(v56));
        }
        if (v56 >= 5) {
          goto LABEL_42;
        }
        goto LABEL_36;
      }
    }
    else {
      {
        v48 = *a1;
        __asm__ volatile("" ::"r"(v48));
      }
    }
    v63 = v47 - 5;
    a1[1] = v63;
    {
      v55 = &a2[v44];
      __asm__ volatile("" ::"r"(v55));
    }
    a2[v44 + 3] = (v48 >> v63) & v42;
    {
      v56 = a1[1];
      __asm__ volatile("" ::"r"(v56));
    }
    if (v56 >= 5) {
    LABEL_42:
      {
        v62 = *a1;
        __asm__ volatile("" ::"r"(v62));
      }
      goto LABEL_43;
    }
  LABEL_36:
    v57 = nn_codec_FDK_getValidBits_plt((__int64)(a1 + 2));
    if (31 - a1[1] >= v57) {
      v58 = v57;
    }
    else {
      v58 = 31 - a1[1];
      __asm__ volatile("" ::"r"(v58));
    }
    {
      v59 = *a1 << v58;
      __asm__ volatile("" ::"r"(v59));
    }
    v60 = nn_codec_FDK_get_plt((__int64)(a1 + 2), v58);
    {
      v61 = a1[1];
      __asm__ volatile("" ::"r"(v61));
    }
    v62 = v59 | v60;
    *a1 = v59 | v60;
    v56 = v61 + v58;
    if (v56 <= 3) {
      v45 = v62 << (4 - v56);
      *(_QWORD*)a1 = v45;
      goto LABEL_28;
    }
  LABEL_43:
    v64 = v56 - 4;
    a1[1] = v64;
    v45 = v62 >> v64;
  LABEL_28:
    a2[v44 + 7] = v45 & v43;
    v41 += (unsigned __int8)v55[3];
  } while (v44++ < (unsigned __int8)a2[1]);
  if (v41 >= a5) {
    return 16388;
  }
  return 0;
}

__int64 fdk_aac_libAACenc_src_39a0c0(__int64 a1, __int64 a2, unsigned int* a3)
{
  int v6;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  void(__attribute__((noreturn)) * v17)();
  int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  int v34;
  unsigned int v35;
  unsigned int v36;
  int v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;
  int v42;
  unsigned int v43;
  unsigned int v44;
  unsigned int v45;
  char v46;
  unsigned int v47;
  unsigned int v48;
  unsigned int v49;
  unsigned int v50;
  unsigned int v51;
  int v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;
  unsigned int v56;
  int v57;
  unsigned int v58;
  unsigned int v59;
  unsigned int v60;
  int v61;
  unsigned int v62;
  unsigned int v63;
  unsigned int v64;
  unsigned int v65;
  int v66;
  unsigned int v67;
  unsigned int v68;
  unsigned int v69;
  int v70;
  unsigned int v71;
  unsigned int v72;
  int v73;
  int v74;
  unsigned int v75;
  unsigned int v76;
  int v77;
  unsigned int v78;
  unsigned int v79;
  unsigned int v80;
  int v81;
  unsigned int v82;
  unsigned int v83;
  unsigned int v84;
  int v85;
  int v86;
  unsigned int v87;
  unsigned int v88;
  unsigned int v89;
  unsigned int v90;
  unsigned int v91;
  int v92;
  unsigned int v93;
  unsigned int v94;
  unsigned int v95;
  int v96;
  unsigned int v97;
  unsigned int v98;
  unsigned int v99;
  unsigned int v100;
  unsigned int v101;
  int v102;
  unsigned int v103;
  unsigned int v104;
  unsigned int v105;
  int v106;
  int v107;
  int v108;
  unsigned int v109;
  char v110;

  if (a3[12] != 0) {
    nn_codec_FDK_put_plt(a3 + 2, *a3, a3[1]);
    *(_QWORD*)a3 = 0;
    v6 = nn_codec_FDK_getValidBits_plt((__int64)(a3 + 2));
    if (v6 < 63) {
      return 257;
    }
  }
  else {
    nn_codec_FDK_pushBack_plt((__int64)(a3 + 2), a3[1], 0);
    *(_QWORD*)a3 = 0;
    v6 = nn_codec_FDK_getValidBits_plt((__int64)(a3 + 2));
    if (v6 < 63) {
      return 257;
    }
  }
  {
    v8 = a3[1];
    __asm__ volatile("" ::"r"(v8));
  }
  v9 = v6;
  if (v8 < 9) {
    v11 = nn_codec_FDK_getValidBits_plt((__int64)(a3 + 2));
    if (31 - a3[1] >= v11) {
      v12 = v11;
    }
    else {
      v12 = 31 - a3[1];
      __asm__ volatile("" ::"r"(v12));
    }
    {
      v13 = *a3 << v12;
      __asm__ volatile("" ::"r"(v13));
    }
    v14 = nn_codec_FDK_get_plt((__int64)(a3 + 2), v12);
    {
      v15 = a3[1];
      __asm__ volatile("" ::"r"(v15));
    }
    v10 = v13 | v14;
    *a3 = v13 | v14;
    v8 = v15 + v12;
    if (v8 < 8) {
      goto LABEL_11;
    }
  }
  else {
    {
      v10 = *a3;
      __asm__ volatile("" ::"r"(v10));
    }
  }
  v16 = v8 - 8;
  v17 = SdkData_e87a50[0];
  a3[1] = v16;
  v18 = *(_DWORD*)&(*(_BYTE(*)[4])0x20LL)[(_QWORD)v17];
  if (((v10 >> v16) & v18) != 0x41) {
    return 258;
  }
  if (v16 <= 8) {
    v19 = nn_codec_FDK_getValidBits_plt((__int64)(a3 + 2));
    {
      v20 = 31 - a3[1] >= v19 ? v19 : 31 - a3[1];
      __asm__ volatile("" ::"r"(v20));
    }
    {
      v21 = *a3 << v20;
      __asm__ volatile("" ::"r"(v21));
    }
    v22 = nn_codec_FDK_get_plt((__int64)(a3 + 2), v20);
    {
      v23 = a3[1];
      __asm__ volatile("" ::"r"(v23));
    }
    v10 = v21 | v22;
    *a3 = v21 | v22;
    v16 = v23 + v20;
    if (v16 < 8) {
      v24 = v10 << (8 - v16);
      *a3 = v24;
      a3[1] = 0;
      if ((v24 & v18) != 0x44) {
        return 258;
      }
      goto LABEL_22;
    }
  }
  v8 = v16 - 8;
  a3[1] = v8;
  if (((v10 >> v8) & v18) != 0x44) {
    return 258;
  }
  if (v8 <= 8) {
  LABEL_22:
    v25 = nn_codec_FDK_getValidBits_plt((__int64)(a3 + 2));
    if (31 - a3[1] >= v25) {
      v26 = v25;
    }
    else {
      v26 = 31 - a3[1];
      __asm__ volatile("" ::"r"(v26));
    }
    {
      v27 = *a3 << v26;
      __asm__ volatile("" ::"r"(v27));
    }
    v28 = nn_codec_FDK_get_plt((__int64)(a3 + 2), v26);
    {
      v29 = a3[1];
      __asm__ volatile("" ::"r"(v29));
    }
    v10 = v27 | v28;
    *a3 = v27 | v28;
    v8 = v29 + v26;
    if (v8 >= 8) {
      goto LABEL_26;
    }
  LABEL_11:
    *(_QWORD*)a3 = v10 << (8 - v8);
    return 258;
  }
LABEL_26:
  v30 = v8 - 8;
  a3[1] = v30;
  if (((v10 >> v30) & v18) != 0x49) {
    return 258;
  }
  if (v30 <= 8) {
    v31 = nn_codec_FDK_getValidBits_plt((__int64)(a3 + 2));
    {
      v32 = 31 - a3[1] >= v31 ? v31 : 31 - a3[1];
      __asm__ volatile("" ::"r"(v32));
    }
    {
      v33 = *a3 << v32;
      __asm__ volatile("" ::"r"(v33));
    }
    v34 = nn_codec_FDK_get_plt((__int64)(a3 + 2), v32);
    {
      v35 = a3[1];
      __asm__ volatile("" ::"r"(v35));
    }
    v10 = v33 | v34;
    *a3 = v33 | v34;
    v30 = v35 + v32;
    if (v30 < 8) {
      v36 = v10 << (8 - v30);
      *a3 = v36;
      a3[1] = 0;
      if ((v36 & v18) == 0x46) {
        {
          v37 = *(_DWORD*)((char*)((__int64*)0x4LL) + (_QWORD)v17);
          __asm__ volatile("" ::"r"(v37));
        }
        goto LABEL_36;
      }
      return 258;
    }
  }
  v38 = v30 - 8;
  a3[1] = v38;
  if (((v10 >> v38) & v18) != 0x46) {
    return 258;
  }
  {
    v37 = *(_DWORD*)((char*)((__int64*)0x4LL) + (_QWORD)v17);
    __asm__ volatile("" ::"r"(v37));
  }
  if (v38 > 1) {
  LABEL_40:
    v44 = v38 - 1;
    v45 = v10 >> v44;
    a3[1] = v44;
    goto LABEL_44;
  }
LABEL_36:
  v39 = nn_codec_FDK_getValidBits_plt((__int64)(a3 + 2));
  if (31 - a3[1] >= v39) {
    v40 = v39;
  }
  else {
    v40 = 31 - a3[1];
    __asm__ volatile("" ::"r"(v40));
  }
  {
    v41 = *a3 << v40;
    __asm__ volatile("" ::"r"(v41));
  }
  v42 = nn_codec_FDK_get_plt((__int64)(a3 + 2), v40);
  {
    v43 = a3[1];
    __asm__ volatile("" ::"r"(v43));
  }
  v10 = v41 | v42;
  *a3 = v41 | v42;
  v38 = v43 + v40;
  if (v38 != 0) {
    goto LABEL_40;
  }
  v45 = 2 * v10;
  *(_QWORD*)a3 = v45;
LABEL_44:
  v46 = v45 & v37;
  *(_BYTE*)(a1 + 8) = v46;
  if (v46 != 0) {
    nn_codec_FDKpushBiDirectional(a3, 0x48u);
  }
  {
    v47 = a3[1];
    __asm__ volatile("" ::"r"(v47));
  }
  if (v47 < 2) {
    v49 = nn_codec_FDK_getValidBits_plt((__int64)(a3 + 2));
    if (31 - a3[1] >= v49) {
      v50 = v49;
    }
    else {
      v50 = 31 - a3[1];
      __asm__ volatile("" ::"r"(v50));
    }
    {
      v51 = *a3 << v50;
      __asm__ volatile("" ::"r"(v51));
    }
    v52 = nn_codec_FDK_get_plt((__int64)(a3 + 2), v50);
    {
      v53 = a3[1];
      __asm__ volatile("" ::"r"(v53));
    }
    v48 = v51 | v52;
    *a3 = v51 | v52;
    v47 = v53 + v50;
    if (v47 == 0) {
      v57 = 2 * v48;
      *a3 = v57;
      a3[1] = 0;
      *(_BYTE*)(a1 + 9) = v57 & v37;
      {
        v55 = a3[1];
        __asm__ volatile("" ::"r"(v55));
      }
      if (v55 >= 2) {
        goto LABEL_53;
      }
      goto LABEL_55;
    }
  }
  else {
    {
      v48 = *a3;
      __asm__ volatile("" ::"r"(v48));
    }
  }
  v54 = v47 - 1;
  a3[1] = v54;
  *(_BYTE*)(a1 + 9) = (v48 >> v54) & v37;
  {
    v55 = a3[1];
    __asm__ volatile("" ::"r"(v55));
  }
  if (v55 >= 2) {
  LABEL_53:
    {
      v56 = *a3;
      __asm__ volatile("" ::"r"(v56));
    }
    goto LABEL_59;
  }
LABEL_55:
  v58 = nn_codec_FDK_getValidBits_plt((__int64)(a3 + 2));
  if (31 - a3[1] >= v58) {
    v59 = v58;
  }
  else {
    v59 = 31 - a3[1];
    __asm__ volatile("" ::"r"(v59));
  }
  {
    v60 = *a3 << v59;
    __asm__ volatile("" ::"r"(v60));
  }
  v61 = nn_codec_FDK_get_plt((__int64)(a3 + 2), v59);
  {
    v62 = a3[1];
    __asm__ volatile("" ::"r"(v62));
  }
  v56 = v60 | v61;
  *a3 = v60 | v61;
  v55 = v62 + v59;
  if (v55 == 0) {
    v66 = 2 * v56;
    *a3 = v66;
    a3[1] = 0;
    *(_BYTE*)(a1 + 10) = v66 & v37;
    {
      v64 = a3[1];
      __asm__ volatile("" ::"r"(v64));
    }
    if (v64 >= 2) {
      goto LABEL_60;
    }
    goto LABEL_62;
  }
LABEL_59:
  v63 = v55 - 1;
  a3[1] = v63;
  *(_BYTE*)(a1 + 10) = (v56 >> v63) & v37;
  {
    v64 = a3[1];
    __asm__ volatile("" ::"r"(v64));
  }
  if (v64 >= 2) {
  LABEL_60:
    {
      v65 = *a3;
      __asm__ volatile("" ::"r"(v65));
    }
    goto LABEL_66;
  }
LABEL_62:
  v67 = nn_codec_FDK_getValidBits_plt((__int64)(a3 + 2));
  if (31 - a3[1] >= v67) {
    v68 = v67;
  }
  else {
    v68 = 31 - a3[1];
    __asm__ volatile("" ::"r"(v68));
  }
  {
    v69 = *a3 << v68;
    __asm__ volatile("" ::"r"(v69));
  }
  v70 = nn_codec_FDK_get_plt((__int64)(a3 + 2), v68);
  {
    v71 = a3[1];
    __asm__ volatile("" ::"r"(v71));
  }
  v65 = v69 | v70;
  *a3 = v69 | v70;
  v64 = v71 + v68;
  if (v64 == 0) {
    v77 = 2 * v65;
    *a3 = v77;
    a3[1] = 0;
    LOBYTE(v77) = v77 & v37;
    {
      v74 = *(_DWORD*)((char*)((char*)0x40LL) + (_QWORD)v17);
      __asm__ volatile("" ::"r"(v74));
    }
    *(_BYTE*)(a1 + 11) = v77;
    {
      v75 = a3[1];
      __asm__ volatile("" ::"r"(v75));
    }
    if (v75 >= 0x11) {
      goto LABEL_67;
    }
    goto LABEL_69;
  }
LABEL_66:
  v72 = v64 - 1;
  a3[1] = v72;
  v73 = (v65 >> v72) & v37;
  {
    v74 = *(_DWORD*)((char*)((char*)0x40LL) + (_QWORD)v17);
    __asm__ volatile("" ::"r"(v74));
  }
  *(_BYTE*)(a1 + 11) = v73;
  {
    v75 = a3[1];
    __asm__ volatile("" ::"r"(v75));
  }
  if (v75 >= 0x11) {
  LABEL_67:
    {
      v76 = *a3;
      __asm__ volatile("" ::"r"(v76));
    }
    goto LABEL_74;
  }
LABEL_69:
  v78 = nn_codec_FDK_getValidBits_plt((__int64)(a3 + 2));
  if (31 - a3[1] >= v78) {
    v79 = v78;
  }
  else {
    v79 = 31 - a3[1];
    __asm__ volatile("" ::"r"(v79));
  }
  {
    v80 = *a3 << v79;
    __asm__ volatile("" ::"r"(v80));
  }
  v81 = nn_codec_FDK_get_plt((__int64)(a3 + 2), v79);
  {
    v82 = a3[1];
    __asm__ volatile("" ::"r"(v82));
  }
  v76 = v80 | v81;
  *a3 = v80 | v81;
  v75 = v82 + v79;
  if (v75 <= 0xF) {
    v83 = v76 << (16 - v75);
    *(_QWORD*)a3 = v83;
    goto LABEL_75;
  }
LABEL_74:
  v84 = v75 - 16;
  a3[1] = v84;
  v83 = v76 >> v84;
LABEL_75:
  v85 = v83 & v74;
  {
    v86 = *(_DWORD*)((char*)(*(void*(*)[5])0x18LL) + (_QWORD)v17 + 4);
    __asm__ volatile("" ::"r"(v86));
  }
  *(_DWORD*)(a1 + 4) = v85 << 7;
  {
    v87 = a3[1];
    __asm__ volatile("" ::"r"(v87));
  }
  if (v87 < 8) {
    v89 = nn_codec_FDK_getValidBits_plt((__int64)(a3 + 2));
    if (31 - a3[1] >= v89) {
      v90 = v89;
    }
    else {
      v90 = 31 - a3[1];
      __asm__ volatile("" ::"r"(v90));
    }
    {
      v91 = *a3 << v90;
      __asm__ volatile("" ::"r"(v91));
    }
    v92 = nn_codec_FDK_get_plt((__int64)(a3 + 2), v90);
    {
      v93 = a3[1];
      __asm__ volatile("" ::"r"(v93));
    }
    v88 = v91 | v92;
    *a3 = v91 | v92;
    v87 = v93 + v90;
    if (v87 <= 6) {
      v94 = v88 << (7 - v87);
      *(_QWORD*)a3 = v94;
      goto LABEL_83;
    }
  }
  else {
    {
      v88 = *a3;
      __asm__ volatile("" ::"r"(v88));
    }
  }
  v95 = v87 - 7;
  a3[1] = v95;
  v94 = v88 >> v95;
LABEL_83:
  {
    v96 = *(_DWORD*)((char*)((__int64*)0xCLL) + (_QWORD)v17 + 4);
    __asm__ volatile("" ::"r"(v96));
  }
  *(_DWORD*)(a1 + 4) |= v94 & v86;
  {
    v97 = a3[1];
    __asm__ volatile("" ::"r"(v97));
  }
  if (v97 >= 5) {
    {
      v98 = *a3;
      __asm__ volatile("" ::"r"(v98));
    }
  LABEL_90:
    v105 = v97 - 4;
    a3[1] = v105;
    v104 = v98 >> v105;
    goto LABEL_91;
  }
  v99 = nn_codec_FDK_getValidBits_plt((__int64)(a3 + 2));
  if (31 - a3[1] >= v99) {
    v100 = v99;
  }
  else {
    v100 = 31 - a3[1];
    __asm__ volatile("" ::"r"(v100));
  }
  {
    v101 = *a3 << v100;
    __asm__ volatile("" ::"r"(v101));
  }
  v102 = nn_codec_FDK_get_plt((__int64)(a3 + 2), v100);
  {
    v103 = a3[1];
    __asm__ volatile("" ::"r"(v103));
  }
  v98 = v101 | v102;
  *a3 = v101 | v102;
  v97 = v103 + v100;
  if (v97 > 3) {
    goto LABEL_90;
  }
  v104 = v98 << (4 - v97);
  *(_QWORD*)a3 = v104;
LABEL_91:
  {
    v106 = *(unsigned __int8*)(a1 + 11);
    __asm__ volatile("" ::"r"(v106));
  }
  v107 = (v104 & v96) + 1;
  *(_DWORD*)a1 = v107;
  if (v106 == 0) {
    nn_codec_FDKpushBiDirectional(a3, 0x14u);
    {
      v107 = *(_DWORD*)a1;
      __asm__ volatile("" ::"r"(v107));
    }
  }
  if (v107 >= 1) {
    v108 = 0;
    do {
      nn_codec_CProgramConfig_Read_plt(a2, (__int64)a3, v9);
      ++v108;
    } while (v108 < (signed __int32)*(_DWORD*)a1);
  }
  if (a3[12] != 0) {
    nn_codec_FDK_put_plt(a3 + 2, *a3, a3[1]);
  }
  else {
    nn_codec_FDK_pushBack_plt((__int64)(a3 + 2), a3[1], 0);
  }
  {
    v109 = a3[12];
    __asm__ volatile("" ::"r"(v109));
  }
  *(_QWORD*)a3 = 0;
  v110 = nn_codec_FDK_getValidBits_plt((__int64)(a3 + 2));
  if (v109 != 0) {
    nn_codec_FDK_put_plt(a3 + 2, 0, ((_BYTE)v9 - v110) & 7);
  }
  else {
    nn_codec_FDK_pushForward_plt((__int64)(a3 + 2), (v110 - (_BYTE)v9) & 7,
                                 a3[12]);
  }
  return 0;
}

#pragma GCC visibility pop
