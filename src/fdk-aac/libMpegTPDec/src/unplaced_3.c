#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_AudioSpecificConfig_Parse_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDK_getValidBits_plt(__int64);
__int64 nn_codec_FDK_get_plt(__int64, unsigned int);
__int64 nn_codec_FDK_pushBack_plt(__int64, unsigned int, unsigned __int8);
__int64 nn_codec_FDK_pushForward_plt(__int64, unsigned int, unsigned __int8);
__int64 nn_codec_FDK_put_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDKmemcpy_plt(__int64, __int64, unsigned int);
__int64 tpdec_latm_3a20e0(int*);
extern void (*SdkData_e87a50[778])();
__int64 fdk_aac_libMpegTPDec_src_3a0840(unsigned int* a1);
__int64 fdk_aac_libMpegTPDec_src_3a1560(int* a1, __int64 a2, __int64 a3,
                                        __int64 a4, _DWORD* a5);

__int64 fdk_aac_libMpegTPDec_src_3a0840(unsigned int* a1)
{
  void(__attribute__((noreturn)) * v2)();
  unsigned int v3;
  int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  __int64 result;
  unsigned int v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;

  v2 = SdkData_e87a50[0];
  {
    v3 = a1[1];
    __asm__ volatile("" ::"r"(v3));
  }
  {
    v4 =
        *(_DWORD*)((char*)SdkData_e87a50[0] + (unsigned __int64)((int*)0x14LL));
    __asm__ volatile("" ::"r"(v4));
  }
  if (v3 < 6) {
    v6 = nn_codec_FDK_getValidBits_plt((__int64)(a1 + 2));
    if (31 - a1[1] >= v6) {
      v7 = v6;
    }
    else {
      v7 = 31 - a1[1];
      __asm__ volatile("" ::"r"(v7));
    }
    {
      v8 = *a1 << v7;
      __asm__ volatile("" ::"r"(v8));
    }
    v9 = nn_codec_FDK_get_plt((__int64)(a1 + 2), v7);
    {
      v10 = a1[1];
      __asm__ volatile("" ::"r"(v10));
    }
    v5 = v8 | v9;
    *a1 = v8 | v9;
    v3 = v10 + v7;
    if (v3 < 5) {
      v11 = v5 << (5 - v3);
      *(_QWORD*)a1 = v11;
      return v11 & v4;
    }
  }
  else {
    {
      v5 = *a1;
      __asm__ volatile("" ::"r"(v5));
    }
  }
  v13 = v3 - 5;
  a1[1] = v13;
  result = (v5 >> v13) & v4;
  if ((_DWORD)result == 31) {
    {
      v14 = *(_DWORD*)((char*)(*(void*(*)[1])0x18LL) + (_QWORD)v2);
      __asm__ volatile("" ::"r"(v14));
    }
    if (v13 > 6) {
      goto LABEL_16;
    }
    v15 = nn_codec_FDK_getValidBits_plt((__int64)(a1 + 2));
    {
      v16 = 31 - a1[1] >= v15 ? v15 : 31 - a1[1];
      __asm__ volatile("" ::"r"(v16));
    }
    {
      v17 = *a1 << v16;
      __asm__ volatile("" ::"r"(v17));
    }
    v18 = nn_codec_FDK_get_plt((__int64)(a1 + 2), v16);
    {
      v19 = a1[1];
      __asm__ volatile("" ::"r"(v19));
    }
    v5 = v17 | v18;
    *a1 = v17 | v18;
    v13 = v19 + v16;
    if (v13 > 5) {
    LABEL_16:
      v21 = v13 - 6;
      v20 = v5 >> v21;
      a1[1] = v21;
    }
    else {
      v20 = v5 << (6 - v13);
      *(_QWORD*)a1 = v20;
    }
    return (v20 & v14) + 32;
  }
  return result;
}

__int64 fdk_aac_libMpegTPDec_src_3a1560(int* a1, __int64 a2, __int64 a3,
                                        __int64 a4, _DWORD* a5)
{
  void(__attribute__((noreturn)) * v9)();
  unsigned int v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  int v19;
  unsigned int v20;
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
  unsigned int v33;
  int v34;
  unsigned int v35;
  unsigned int v36;
  int v37;
  unsigned int v38;
  unsigned int v39;
  int v40;
  int v41;
  int v42;
  unsigned int v43;
  unsigned int v44;
  unsigned int v45;
  int v46;
  unsigned int v47;
  unsigned int v48;
  unsigned int v49;
  char v50;
  int v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;
  unsigned int v56;
  int v57;
  unsigned int v58;
  int v59;
  unsigned int v60;
  __int64 result;
  unsigned __int64 v62;
  unsigned int v63;
  unsigned int v64;
  unsigned int v65;
  unsigned int v66;
  unsigned int v67;
  int v68;
  unsigned int v69;
  unsigned int v70;
  unsigned int v71;
  unsigned __int8 v72;
  __int64 v73;
  _DWORD* v74;
  unsigned __int64 v75;
  unsigned int v76;
  unsigned int v77;
  unsigned int v78;
  unsigned int v79;
  unsigned int v80;
  int v81;
  unsigned int v82;
  unsigned int v83;
  int v84;
  unsigned int v85;
  unsigned int v86;
  unsigned int v87;
  unsigned int v88;
  int v89;
  unsigned int v90;
  unsigned int v91;
  unsigned int v92;
  int v93;
  unsigned int v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  unsigned int v101;
  unsigned int v102;
  unsigned int v103;
  int v104;
  unsigned int v105;
  unsigned int v106;
  unsigned int v107;
  unsigned int v108;
  unsigned int v109;
  int v110;
  unsigned int v111;
  unsigned int v112;
  unsigned int v113;
  int v114;
  unsigned int v115;
  unsigned int v116;
  void(__attribute__((noreturn)) * v117)();
  unsigned int v118;
  int v119;
  unsigned int v120;
  unsigned int v121;
  int v122;
  int v123;
  int v124;
  unsigned int v125;
  unsigned int v126;
  unsigned int v127;
  unsigned int v128;
  unsigned int v129;
  unsigned int v130;
  int v131;
  unsigned int v132;
  unsigned int v133;
  int v134;
  unsigned int v135;
  unsigned int v136;
  unsigned int v137;
  int v138;
  unsigned int v139;
  unsigned int v140;
  int v141;
  unsigned int v142;
  unsigned int v143;
  unsigned int v144;
  unsigned int v145;
  unsigned int v146;
  int v147;
  unsigned int v148;
  unsigned int v149;
  int v150;
  int v151;
  unsigned int v152;
  unsigned int v153;
  unsigned int v154;
  unsigned int v155;
  unsigned int v156;
  int v157;
  unsigned int v158;
  unsigned int v159;
  unsigned int v160;
  int v161;
  __int64 v162;
  _DWORD* v163;
  __int64 v164;
  int v165;
  __int64 v167;
  struct {
    __int64 v168;
    __int64 v169;
    __int64 v170;
    __int64 v171;
    __int64 v172;
    __int64 v173;
  } v168_;

  v9 = SdkData_e87a50[0];
  {
    v10 = a1[1];
    __asm__ volatile("" ::"r"(v10));
  }
  {
    v11 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                     (unsigned __int64)((__int64*)0x4LL));
    __asm__ volatile("" ::"r"(v11));
  }
  if (v10 >= 2) {
    {
      v12 = *a1;
      __asm__ volatile("" ::"r"(v12));
    }
    goto LABEL_7;
  }
  v13 = nn_codec_FDK_getValidBits_plt((__int64)(a1 + 2));
  if (31 - a1[1] >= v13) {
    v14 = v13;
  }
  else {
    v14 = 31 - a1[1];
    __asm__ volatile("" ::"r"(v14));
  }
  {
    v15 = *a1 << v14;
    __asm__ volatile("" ::"r"(v15));
  }
  v16 = nn_codec_FDK_get_plt((__int64)(a1 + 2), v14);
  {
    v17 = a1[1];
    __asm__ volatile("" ::"r"(v17));
  }
  v12 = v15 | v16;
  *a1 = v15 | v16;
  v10 = v17 + v14;
  if (v10 != 0) {
  LABEL_7:
    v18 = v10 - 1;
    a1[1] = v18;
    v19 = (v12 >> v18) & v11;
    *(_BYTE*)(a2 + 45) = v19;
    if ((_BYTE)v19 != 0) {
      goto LABEL_8;
    }
    goto LABEL_26;
  }
  v40 = 2 * v12;
  *a1 = v40;
  a1[1] = 0;
  LOBYTE(v40) = v40 & v11;
  *(_BYTE*)(a2 + 45) = v40;
  if ((_BYTE)v40 != 0) {
  LABEL_8:
    {
      v20 = a1[1];
      __asm__ volatile("" ::"r"(v20));
    }
    if (v20 < 2) {
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
      v20 = v26 + v23;
      if (v20 == 0) {
        v41 = 2 * v21;
        *a1 = v41;
        a1[1] = 0;
        LOBYTE(v41) = v41 & v11;
        *(_BYTE*)(a2 + 46) = v41;
        if ((_BYTE)v41 != 0) {
          return 1026;
        }
        goto LABEL_15;
      }
    }
    else {
      {
        v21 = *a1;
        __asm__ volatile("" ::"r"(v21));
      }
    }
    v27 = v20 - 1;
    a1[1] = v27;
    v28 = (v21 >> v27) & v11;
    *(_BYTE*)(a2 + 46) = v28;
    if ((_BYTE)v28 != 0) {
      return 1026;
    }
  LABEL_15:
    if (*(_BYTE*)(a2 + 45) != 1) {
      goto LABEL_17;
    }
    goto LABEL_16;
  }
LABEL_26:
  *(_BYTE*)(a2 + 46) = 0;
  if (*(_BYTE*)(a2 + 45) == 1) {
  LABEL_16:
    *(_DWORD*)(a2 + 32) = tpdec_latm_3a20e0(a1);
  }
LABEL_17:
  {
    v29 = a1[1];
    __asm__ volatile("" ::"r"(v29));
  }
  if (v29 < 2) {
    v31 = nn_codec_FDK_getValidBits_plt((__int64)(a1 + 2));
    if (31 - a1[1] >= v31) {
      v32 = v31;
    }
    else {
      v32 = 31 - a1[1];
      __asm__ volatile("" ::"r"(v32));
    }
    {
      v33 = *a1 << v32;
      __asm__ volatile("" ::"r"(v33));
    }
    v34 = nn_codec_FDK_get_plt((__int64)(a1 + 2), v32);
    {
      v35 = a1[1];
      __asm__ volatile("" ::"r"(v35));
    }
    v30 = v33 | v34;
    *a1 = v33 | v34;
    v29 = v35 + v32;
    if (v29 == 0) {
      v42 = 2 * v30;
      *a1 = v42;
      a1[1] = 0;
      {
        v37 = *(_DWORD*)((char*)(*(void*(*)[1])0x18LL) + (_QWORD)v9);
        __asm__ volatile("" ::"r"(v37));
      }
      *(_BYTE*)(a2 + 47) = v42 & v11;
      {
        v38 = a1[1];
        __asm__ volatile("" ::"r"(v38));
      }
      if (v38 >= 7) {
        goto LABEL_24;
      }
      goto LABEL_31;
    }
  }
  else {
    {
      v30 = *a1;
      __asm__ volatile("" ::"r"(v30));
    }
  }
  v36 = v29 - 1;
  a1[1] = v36;
  {
    v37 = *(_DWORD*)((char*)(*(void*(*)[1])0x18LL) + (_QWORD)v9);
    __asm__ volatile("" ::"r"(v37));
  }
  *(_BYTE*)(a2 + 47) = (v30 >> v36) & v11;
  {
    v38 = a1[1];
    __asm__ volatile("" ::"r"(v38));
  }
  if (v38 >= 7) {
  LABEL_24:
    {
      v39 = *a1;
      __asm__ volatile("" ::"r"(v39));
    }
    goto LABEL_36;
  }
LABEL_31:
  v43 = nn_codec_FDK_getValidBits_plt((__int64)(a1 + 2));
  if (31 - a1[1] >= v43) {
    v44 = v43;
  }
  else {
    v44 = 31 - a1[1];
    __asm__ volatile("" ::"r"(v44));
  }
  {
    v45 = *a1 << v44;
    __asm__ volatile("" ::"r"(v45));
  }
  v46 = nn_codec_FDK_get_plt((__int64)(a1 + 2), v44);
  {
    v47 = a1[1];
    __asm__ volatile("" ::"r"(v47));
  }
  v39 = v45 | v46;
  *a1 = v45 | v46;
  v38 = v47 + v44;
  if (v38 <= 5) {
    v48 = v39 << (6 - v38);
    *(_QWORD*)a1 = v48;
    goto LABEL_37;
  }
LABEL_36:
  v49 = v38 - 6;
  a1[1] = v49;
  v48 = v39 >> v49;
LABEL_37:
  v50 = v48 & v37;
  {
    v51 = *(_DWORD*)((char*)((__int64*)0xCLL) + (_QWORD)v9 + 4);
    __asm__ volatile("" ::"r"(v51));
  }
  *(_BYTE*)(a2 + 48) = v50 + 1;
  {
    v52 = a1[1];
    __asm__ volatile("" ::"r"(v52));
  }
  if (v52 >= 5) {
    {
      v53 = *a1;
      __asm__ volatile("" ::"r"(v53));
    }
    goto LABEL_45;
  }
  v54 = nn_codec_FDK_getValidBits_plt((__int64)(a1 + 2));
  if (31 - a1[1] >= v54) {
    v55 = v54;
  }
  else {
    v55 = 31 - a1[1];
    __asm__ volatile("" ::"r"(v55));
  }
  {
    v56 = *a1 << v55;
    __asm__ volatile("" ::"r"(v56));
  }
  v57 = nn_codec_FDK_get_plt((__int64)(a1 + 2), v55);
  {
    v58 = a1[1];
    __asm__ volatile("" ::"r"(v58));
  }
  v53 = v56 | v57;
  *a1 = v56 | v57;
  v52 = v58 + v55;
  if (v52 > 3) {
  LABEL_45:
    v60 = v52 - 4;
    a1[1] = v60;
    v59 = ((v53 >> v60) & v51) + 1;
    *(_BYTE*)(a2 + 49) = v59;
    if ((unsigned __int8)v59 > 1u) {
      return 1026;
    }
    goto LABEL_48;
  }
  v59 = v53 << (4 - v52);
  *a1 = v59;
  a1[1] = 0;
  LOBYTE(v59) = (v59 & v51) + 1;
  *(_BYTE*)(a2 + 49) = v59;
  if ((unsigned __int8)v59 > 1u) {
    return 1026;
  }
LABEL_48:
  if ((_BYTE)v59 == 0) {
    goto LABEL_120;
  }
  v62 = 0;
  v164 = *(unsigned int*)((char*)SdkData_e87a50[0] +
                          (unsigned __int64)(*(_BYTE(*)[4])0x20LL));
  {
    v165 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                      (unsigned __int64)((__int64*)0xCLL));
    __asm__ volatile("" ::"r"(v165));
  }
  v163 = (_DWORD*)(a2 + 8);
  do {
    {
      v63 = a1[1];
      __asm__ volatile("" ::"r"(v63));
    }
    if (v63 >= 4) {
      {
        v64 = *a1;
        __asm__ volatile("" ::"r"(v64));
      }
    LABEL_57:
      v71 = v63 - 3;
      a1[1] = v71;
      v70 = v64 >> v71;
      goto LABEL_58;
    }
    v65 = nn_codec_FDK_getValidBits_plt((__int64)(a1 + 2));
    if (31 - a1[1] >= v65) {
      v66 = v65;
    }
    else {
      v66 = 31 - a1[1];
      __asm__ volatile("" ::"r"(v66));
    }
    {
      v67 = *a1 << v66;
      __asm__ volatile("" ::"r"(v67));
    }
    v68 = nn_codec_FDK_get_plt((__int64)(a1 + 2), v66);
    {
      v69 = a1[1];
      __asm__ volatile("" ::"r"(v69));
    }
    v64 = v67 | v68;
    *a1 = v67 | v68;
    v63 = v69 + v66;
    if (v63 > 2) {
      goto LABEL_57;
    }
    v70 = v64 << (3 - v63);
    *(_QWORD*)a1 = v70;
  LABEL_58:
    v72 = (v70 & v165) + 1;
    *(_BYTE*)(a2 + 50) = v72;
    if (v72 > 2u) {
      return 1026;
    }
    if (v72 == 0) {
      goto LABEL_119;
    }
    v73 = a4;
    v74 = v163;
    v75 = 0;
    v162 = v73;
    do {
      *(_DWORD*)v74 = HIDWORD(v164) + v75;
      v74[1] = 0;
      if (((unsigned int)v75 | (unsigned int)v62) == 0) {
        *(_BYTE*)(a2 + 51) = 0;
        goto LABEL_79;
      }
      {
        v76 = a1[1];
        __asm__ volatile("" ::"r"(v76));
      }
      if (v76 >= 2) {
        {
          v77 = *a1;
          __asm__ volatile("" ::"r"(v77));
        }
      LABEL_70:
        v83 = v76 - 1;
        a1[1] = v83;
        v84 = (v77 >> v83) & v11;
        *(_BYTE*)(a2 + 51) = v84;
        if ((_BYTE)v84 != 0) {
          goto LABEL_71;
        }
        goto LABEL_79;
      }
      v78 = nn_codec_FDK_getValidBits_plt((__int64)(a1 + 2));
      if (31 - a1[1] >= v78) {
        v79 = v78;
      }
      else {
        v79 = 31 - a1[1];
        __asm__ volatile("" ::"r"(v79));
      }
      {
        v80 = *a1 << v79;
        __asm__ volatile("" ::"r"(v80));
      }
      v81 = nn_codec_FDK_get_plt((__int64)(a1 + 2), v79);
      {
        v82 = a1[1];
        __asm__ volatile("" ::"r"(v82));
      }
      v77 = v80 | v81;
      *a1 = v80 | v81;
      v76 = v82 + v79;
      if (v76 != 0) {
        goto LABEL_70;
      }
      v93 = 2 * v77;
      *a1 = v93;
      a1[1] = 0;
      LOBYTE(v93) = v93 & v11;
      *(_BYTE*)(a2 + 51) = v93;
      if ((_BYTE)v93 != 0) {
      LABEL_71:
        if (v75 < 2) {
          return 1025;
        }
        nn_codec_FDKmemcpy_plt(v73, v73 - 536, 0x218u);
        {
          v85 = a1[1];
          __asm__ volatile("" ::"r"(v85));
        }
        if (v85 >= 4) {
          goto LABEL_102;
        }
        goto LABEL_73;
      }
    LABEL_79:
      if (*(_BYTE*)(a2 + 45) == 1) {
        v168_.v172 = 0;
        v168_.v173 = 0;
        v168_.v170 = 0;
        v168_.v171 = 0;
        v168_.v168 = 0;
        v168_.v169 = 0;
        v167 = 0;
        v94 = tpdec_latm_3a20e0(a1);
        if (a1[12] != 0) {
          nn_codec_FDK_put_plt(a1 + 2, (unsigned int)*a1, (unsigned int)a1[1]);
        }
        else {
          nn_codec_FDK_pushBack_plt((__int64)(a1 + 2), a1[1], 0);
        }
        *(_QWORD*)a1 = 0;
        nn_codec_FDK_getValidBits_plt((__int64)(a1 + 2));
        {
          v96 = *((_QWORD*)a1 + 6);
          __asm__ volatile("" ::"r"(v96));
        }
        {
          v97 = *((_QWORD*)a1 + 4);
          __asm__ volatile("" ::"r"(v97));
        }
        v168_.v172 = *((_QWORD*)a1 + 5);
        v168_.v173 = v96;
        {
          v98 = *((_QWORD*)a1 + 1);
          __asm__ volatile("" ::"r"(v98));
        }
        {
          v167 = *(_QWORD*)a1;
          __asm__ volatile("" ::"r"(v167));
        }
        v168_.v168 = v98;
        {
          v99 = *((_QWORD*)a1 + 2);
          __asm__ volatile("" ::"r"(v99));
        }
        v168_.v170 = *((_QWORD*)a1 + 3);
        v168_.v171 = v97;
        v168_.v169 = v99;
        if ((_DWORD)v96 != 0) {
          nn_codec_FDK_put_plt(&v168_.v168, (unsigned int)v167, HIDWORD(v167));
        }
        else {
          nn_codec_FDK_pushBack_plt((__int64)&v168_.v168, HIDWORD(v167), 0);
        }
        v167 = 0;
        LODWORD(v168_.v168) = v94;
        result = nn_codec_AudioSpecificConfig_Parse_plt(v73, &v167, 1, a3);
        if ((_DWORD)result != 0) {
          return result;
        }
        *(_DWORD*)a5 = 1;
        if ((_DWORD)v168_.v173 != 0) {
          nn_codec_FDK_put_plt(&v168_.v168, (unsigned int)v167, HIDWORD(v167));
          v167 = 0;
          if ((nn_codec_FDK_getValidBits_plt((__int64)&v168_.v168) &
               0x80000000) != 0) {
            return 1025;
          }
        }
        else {
          nn_codec_FDK_pushBack_plt((__int64)&v168_.v168, HIDWORD(v167), 0);
          v167 = 0;
          if ((nn_codec_FDK_getValidBits_plt((__int64)&v168_.v168) &
               0x80000000) != 0) {
            return 1025;
          }
        }
        {
          v100 = (unsigned int)a1[1];
          __asm__ volatile("" ::"r"(v100));
        }
        {
          v101 = a1[12];
          __asm__ volatile("" ::"r"(v101));
        }
        if ((unsigned int)v100 <= v94) {
          if (v101 == 0) {
            nn_codec_FDK_pushBack_plt((__int64)(a1 + 2), v100, 0);
            goto LABEL_99;
          }
        }
        else if (v101 == 0) {
          v95 = a3;
          a1[1] = v100 - v94;
          goto LABEL_100;
        }
        nn_codec_FDK_put_plt(a1 + 2, (unsigned int)*a1, v100);
      LABEL_99:
        {
          v102 = a1[12];
          __asm__ volatile("" ::"r"(v102));
        }
        *(_QWORD*)a1 = 0;
        nn_codec_FDK_pushForward_plt((__int64)(a1 + 2), v94, v102);
        v95 = a3;
        goto LABEL_100;
      }
      v95 = a3;
      result = nn_codec_AudioSpecificConfig_Parse_plt(v73, a1, 0, a3);
      if ((_DWORD)result != 0) {
        return result;
      }
    LABEL_100:
      if ((*(unsigned int (**)(_QWORD, __int64))v95)(*(_QWORD*)(v95 + 8),
                                                     v73) != 0) {
        return 513;
      }
      *(_DWORD*)a5 = 1;
      {
        v85 = a1[1];
        __asm__ volatile("" ::"r"(v85));
      }
      if (v85 >= 4) {
      LABEL_102:
        {
          v91 = *a1;
          __asm__ volatile("" ::"r"(v91));
        }
        goto LABEL_103;
      }
    LABEL_73:
      v86 = nn_codec_FDK_getValidBits_plt((__int64)(a1 + 2));
      if (31 - a1[1] >= v86) {
        v87 = v86;
      }
      else {
        v87 = 31 - a1[1];
        __asm__ volatile("" ::"r"(v87));
      }
      {
        v88 = *a1 << v87;
        __asm__ volatile("" ::"r"(v88));
      }
      v89 = nn_codec_FDK_get_plt((__int64)(a1 + 2), v87);
      {
        v90 = a1[1];
        __asm__ volatile("" ::"r"(v90));
      }
      v91 = v88 | v89;
      *a1 = v88 | v89;
      v85 = v90 + v87;
      if (v85 <= 2) {
        v92 = v91 << (3 - v85);
        *(_QWORD*)a1 = v92;
        goto LABEL_104;
      }
    LABEL_103:
      v103 = v85 - 3;
      a1[1] = v103;
      v92 = v91 >> v103;
    LABEL_104:
      v104 = v92 & v165;
      *(v74 - 2) = v104;
      if (v104 != 0) {
        return 1025;
      }
      {
        v105 = a1[1];
        __asm__ volatile("" ::"r"(v105));
      }
      if (v105 < 9) {
        v107 = nn_codec_FDK_getValidBits_plt((__int64)(a1 + 2));
        if (31 - a1[1] >= v107) {
          v108 = v107;
        }
        else {
          v108 = 31 - a1[1];
          __asm__ volatile("" ::"r"(v108));
        }
        {
          v109 = *a1 << v108;
          __asm__ volatile("" ::"r"(v109));
        }
        v110 = nn_codec_FDK_get_plt((__int64)(a1 + 2), v108);
        {
          v111 = a1[1];
          __asm__ volatile("" ::"r"(v111));
        }
        v106 = v109 | v110;
        *a1 = v109 | v110;
        v105 = v111 + v108;
        if (v105 <= 7) {
          v112 = v106 << (8 - v105);
          *a1 = v112;
          a1[1] = 0;
          *(v74 - 1) = v112 & v164;
          if (v75 == 0) {
            goto LABEL_61;
          }
          goto LABEL_114;
        }
      }
      else {
        {
          v106 = *a1;
          __asm__ volatile("" ::"r"(v106));
        }
      }
      v113 = v105 - 8;
      a1[1] = v113;
      *(v74 - 1) = (v106 >> v113) & v164;
      if (v75 != 0) {
      LABEL_114:
        if (*(_BYTE*)(a2 + 47) == 0) {
          {
            v114 = *(_DWORD*)(v73 + 500);
            __asm__ volatile("" ::"r"(v114));
          }
          result = 1026;
          if (v114 == 6 || v114 == 20) {
            return result;
          }
        }
      }
    LABEL_61:
      ++v75;
      v73 += 536;
      v74 += 4;
    } while (v75 < *(unsigned __int8*)(a2 + 50));
    a4 = v162;
    HIDWORD(v164) += v75;
  LABEL_119:
    ++v62;
    a4 += 1072;
    v163 += 8;
  } while (v62 < *(unsigned __int8*)(a2 + 49));
LABEL_120:
  {
    v115 = a1[1];
    __asm__ volatile("" ::"r"(v115));
  }
  if (v115 >= 2) {
    {
      v116 = *a1;
      __asm__ volatile("" ::"r"(v116));
    }
    v117 = SdkData_e87a50[0];
    goto LABEL_127;
  }
  v118 = nn_codec_FDK_getValidBits_plt((__int64)(a1 + 2));
  if (31 - a1[1] >= v118) {
    v120 = v118;
  }
  else {
    v120 = 31 - a1[1];
    __asm__ volatile("" ::"r"(v120));
  }
  {
    v119 = *a1;
    __asm__ volatile("" ::"r"(v119));
  }
  v116 = (v119 << v120) | nn_codec_FDK_get_plt((__int64)(a1 + 2), v120);
  *a1 = v116;
  v117 = SdkData_e87a50[0];
  {
    v115 = a1[1] + v120;
    __asm__ volatile("" ::"r"(v115));
  }
  if (v115 == 0) {
    v141 = 2 * v116;
    *a1 = v141;
    a1[1] = 0;
    LOBYTE(v141) = v141 & v11;
    *(_DWORD*)(a2 + 36) = 0;
    *(_BYTE*)(a2 + 52) = v141;
    if ((_BYTE)v141 == 0) {
      goto LABEL_147;
    }
  LABEL_128:
    v123 = *(_DWORD*)&(*(_BYTE(*)[4])0x20LL)[(_QWORD)v117];
    v124 = 0;
    while (1) {
      *(_DWORD*)(a2 + 36) = v124 << 8;
      {
        v126 = a1[1];
        __asm__ volatile("" ::"r"(v126));
      }
      if (v126 < 2) {
        v128 = nn_codec_FDK_getValidBits_plt((__int64)(a1 + 2));
        if (31 - a1[1] >= v128) {
          v129 = v128;
        }
        else {
          v129 = 31 - a1[1];
          __asm__ volatile("" ::"r"(v129));
        }
        {
          v130 = *a1 << v129;
          __asm__ volatile("" ::"r"(v130));
        }
        v131 = nn_codec_FDK_get_plt((__int64)(a1 + 2), v129);
        {
          v132 = a1[1];
          __asm__ volatile("" ::"r"(v132));
        }
        v127 = v130 | v131;
        *a1 = v130 | v131;
        v126 = v132 + v129;
        if (v126 == 0) {
          v134 = v11 & (2 * v127);
          *(_QWORD*)a1 = 2 * v127;
          goto LABEL_139;
        }
      }
      else {
        {
          v127 = *a1;
          __asm__ volatile("" ::"r"(v127));
        }
      }
      v133 = v126 - 1;
      a1[1] = v133;
      v134 = (v127 >> v133) & v11;
      if (v133 > 8) {
      LABEL_129:
        v125 = v133 - 8;
        a1[1] = v125;
        {
          v124 = *(int*)(a2 + 36) + ((v127 >> v125) & v123);
          __asm__ volatile("" ::"r"(v124));
        }
        *(_DWORD*)(a2 + 36) = v124;
        if (v134 == 0) {
          goto LABEL_147;
        }
      }
      else {
      LABEL_139:
        v135 = nn_codec_FDK_getValidBits_plt((__int64)(a1 + 2));
        if (31 - a1[1] >= v135) {
          v136 = v135;
        }
        else {
          v136 = 31 - a1[1];
          __asm__ volatile("" ::"r"(v136));
        }
        {
          v137 = *a1 << v136;
          __asm__ volatile("" ::"r"(v137));
        }
        v138 = nn_codec_FDK_get_plt((__int64)(a1 + 2), v136);
        {
          v139 = a1[1];
          __asm__ volatile("" ::"r"(v139));
        }
        v127 = v137 | v138;
        *a1 = v137 | v138;
        v133 = v139 + v136;
        if (v133 > 7) {
          goto LABEL_129;
        }
        v140 = v127 << (8 - v133);
        *a1 = v140;
        a1[1] = 0;
        {
          v124 = *(int*)(a2 + 36) + (v140 & v123);
          __asm__ volatile("" ::"r"(v124));
        }
        *(_DWORD*)(a2 + 36) = v124;
        if (v134 == 0) {
          goto LABEL_147;
        }
      }
    }
  }
LABEL_127:
  v121 = v115 - 1;
  a1[1] = v121;
  v122 = (v116 >> v121) & v11;
  *(_DWORD*)(a2 + 36) = 0;
  *(_BYTE*)(a2 + 52) = v122;
  if ((_BYTE)v122 != 0) {
    goto LABEL_128;
  }
LABEL_147:
  {
    v142 = a1[1];
    __asm__ volatile("" ::"r"(v142));
  }
  if (v142 >= 2) {
    {
      v143 = *a1;
      __asm__ volatile("" ::"r"(v143));
    }
    goto LABEL_153;
  }
  v144 = nn_codec_FDK_getValidBits_plt((__int64)(a1 + 2));
  if (31 - a1[1] >= v144) {
    v145 = v144;
  }
  else {
    v145 = 31 - a1[1];
    __asm__ volatile("" ::"r"(v145));
  }
  {
    v146 = *a1 << v145;
    __asm__ volatile("" ::"r"(v146));
  }
  v147 = nn_codec_FDK_get_plt((__int64)(a1 + 2), v145);
  {
    v148 = a1[1];
    __asm__ volatile("" ::"r"(v148));
  }
  v143 = v146 | v147;
  *a1 = v146 | v147;
  v142 = v148 + v145;
  if (v142 == 0) {
    v161 = 2 * v143;
    *a1 = v161;
    a1[1] = 0;
    LOBYTE(v161) = v161 & v11;
    *(_WORD*)(a2 + 53) = (unsigned __int8)v161;
    if ((_BYTE)v161 == 0) {
      return 0;
    }
  LABEL_154:
    v151 = *(_DWORD*)&(*(_BYTE(*)[4])0x20LL)[(_QWORD)v117];
    {
      v152 = a1[1];
      __asm__ volatile("" ::"r"(v152));
    }
    if (v152 < 9) {
      v154 = nn_codec_FDK_getValidBits_plt((__int64)(a1 + 2));
      if (31 - a1[1] >= v154) {
        v155 = v154;
      }
      else {
        v155 = 31 - a1[1];
        __asm__ volatile("" ::"r"(v155));
      }
      {
        v156 = *a1 << v155;
        __asm__ volatile("" ::"r"(v156));
      }
      v157 = nn_codec_FDK_get_plt((__int64)(a1 + 2), v155);
      {
        v158 = a1[1];
        __asm__ volatile("" ::"r"(v158));
      }
      v153 = v156 | v157;
      *a1 = v156 | v157;
      v152 = v158 + v155;
      if (v152 <= 7) {
        v159 = v153 << (8 - v152);
        *(_QWORD*)a1 = v159;
      LABEL_162:
        *(_BYTE*)(a2 + 54) = v159 & v151;
        return 0;
      }
    }
    else {
      {
        v153 = *a1;
        __asm__ volatile("" ::"r"(v153));
      }
    }
    v160 = v152 - 8;
    a1[1] = v160;
    v159 = v153 >> v160;
    goto LABEL_162;
  }
LABEL_153:
  v149 = v142 - 1;
  a1[1] = v149;
  v150 = (v143 >> v149) & v11;
  *(_WORD*)(a2 + 53) = (unsigned __int8)v150;
  if ((_BYTE)v150 != 0) {
    goto LABEL_154;
  }
  return 0;
}

#pragma GCC visibility pop
