#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_FDK_getValidBits_plt(__int64);
__int64 nn_codec_FDK_getValidBits_plt_alt1(_QWORD) __asm__(
    "nn_codec_FDK_getValidBits_plt");
__int64 nn_codec_FDK_get_plt(__int64, unsigned int);
__int64 nn_codec_FDK_get_plt_alt1(_QWORD,
                                  _QWORD) __asm__("nn_codec_FDK_get_plt");
__int64 nn_codec_FDK_pushBack_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDK_pushForward_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDK_put_plt(_QWORD, _QWORD);
__int64 nn_codec_FDKcrcReset_plt(__int64);
__int64 nn_codec_FDKcrcStartReg_plt(__int64, __int64, int);
__int64 nn_codec_FDKmemcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_transportDec_readHeader(unsigned int*, unsigned int*, int,
                                         unsigned int, int*, int*, int*, int*,
                                         _DWORD*);
extern _DWORD SdkData_c33d08[16];
extern void (*SdkData_e87a50[778])();
unsigned int* nn_codec_FDKpushBiDirectional(unsigned int* result, unsigned int);
__int64 fdk_aac_libMpegTPDec_src_3a1220(__int64 a1, int* a2, int a3);
__int64 fdk_aac_libMpegTPDec_src_3a3650(int* a1);
__int64 fdk_aac_libMpegTPDec_src_3a3e60(__int64 a1, unsigned int* a2);

__int64 fdk_aac_libMpegTPDec_src_3a1220(__int64 a1, int* a2, int a3)
{
  unsigned int v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  int v12;
  int v13;
  unsigned int v14;
  unsigned int v15;

  nn_codec_FDKcrcReset_plt(a1);
  v6 = a2[1];
  v7 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                  (unsigned __int64)(*(_BYTE**)0x20LL));
  if (v6 >= 9) {
    v8 = *a2;
  LABEL_8:
    v15 = v6 - 8;
    a2[1] = v15;
    v14 = v8 >> v15;
    goto LABEL_9;
  }
  v9 = nn_codec_FDK_getValidBits_plt((__int64)(a2 + 2));
  if (31 - a2[1] >= v9) {
    v10 = v9;
  }
  else {
    v10 = 31 - a2[1];
  }
  v11 = *a2 << v10;
  v12 = nn_codec_FDK_get_plt((__int64)(a2 + 2), v10);
  v13 = a2[1];
  v8 = v11 | v12;
  *a2 = v11 | v12;
  v6 = v13 + v10;
  if (v6 > 7) {
    goto LABEL_8;
  }
  v14 = v8 << (8 - v6);
  *(_QWORD*)a2 = v14;
LABEL_9:
  *(_WORD*)(a1 + 80) = v14 & v7;
  return nn_codec_FDKcrcStartReg_plt(a1, (__int64)a2, a3);
}

__int64 fdk_aac_libMpegTPDec_src_3a3650(int* a1)
{
  int v1;
  unsigned int* v2;
  int v4;
  int v5;
  char v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  unsigned int v13;
  int v14;
  unsigned int v15;
  int v16;
  int v17;
  signed int v18;
  unsigned int v20;
  unsigned int v21;
  int v22;
  int v23;
  int v24;
  unsigned int v25;
  unsigned int v26;
  int v27;
  int v28;
  int v29;

  v2 = (unsigned int*)(a1 + 14);
  v1 = *a1;
  if ((unsigned int)(*a1 - 6) < 2) {
    goto LABEL_4;
  }
  if (v1 == 2) {
    if (*((_BYTE*)a1 + 178) == 0) {
      v7 = a1[343];
      v8 = 8 * *((unsigned __int16*)a1 + *((unsigned __int8*)a1 + 192) -
                 a1[347] + 141);
      if (a1[26] != 0) {
        nn_codec_FDK_put_plt(a1 + 16, (unsigned int)a1[14]);
      }
      else {
        nn_codec_FDK_pushBack_plt(a1 + 16, (unsigned int)a1[15], 0);
      }
      *((_QWORD*)a1 + 7) = 0;
      v12 = nn_codec_FDK_getValidBits_plt_alt1(a1 + 16);
      nn_codec_FDKpushBiDirectional(v2, v8 - v7 + v12 -
                                            *((unsigned __int8*)a1 + 193) - 16);
    }
    if (*((_BYTE*)a1 + 192) == 0 || *((_BYTE*)a1 + 178) != 0) {
      goto LABEL_33;
    }
    v13 = a1[15];
    v14 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                     (unsigned __int64)((char*)0x40LL));
    if (v13 < 0x11) {
      v20 = nn_codec_FDK_getValidBits_plt_alt1(a1 + 16);
      if (31 - a1[15] >= v20) {
        v21 = v20;
      }
      else {
        v21 = 31 - a1[15];
      }
      v22 = a1[14] << v21;
      v23 = nn_codec_FDK_get_plt_alt1(a1 + 16, v21);
      v24 = a1[15];
      v15 = v22 | v23;
      a1[14] = v22 | v23;
      v13 = v24 + v21;
      if (v13 <= 0xF) {
        v25 = v15 << (16 - v13);
        *((_QWORD*)a1 + 7) = v25;
      LABEL_32:
        *((_WORD*)a1 + 140) = v25 & v14;
      LABEL_33:
        if (a1[347] == 0 && *((_BYTE*)a1 + 178) == 0) {
          v27 = 8 * *((unsigned __int16*)a1 + 94) - 12;
          if (a1[26] != 0) {
            nn_codec_FDK_put_plt(a1 + 16, (unsigned int)a1[14]);
          }
          else {
            nn_codec_FDK_pushBack_plt(a1 + 16, (unsigned int)a1[15], 0);
          }
          *((_QWORD*)a1 + 7) = 0;
          v28 = nn_codec_FDK_getValidBits_plt_alt1(a1 + 16);
          v29 = a1[342];
          if (v27 + v28 != v29) {
            nn_codec_FDKpushBiDirectional(v2, v27 + v28 - v29);
          }
        }
        return 0;
      }
    }
    else {
      v15 = *v2;
    }
    v26 = v13 - 16;
    a1[15] = v26;
    v25 = v15 >> v26;
    goto LABEL_32;
  }
  if (v1 != 10) {
    return 0;
  }
LABEL_4:
  if (a1[347] != 0) {
    return 0;
  }
  v4 = a1[342];
  if (a1[26] != 0) {
    nn_codec_FDK_put_plt(a1 + 16, (unsigned int)a1[14]);
    v5 = a1[26];
    *((_QWORD*)a1 + 7) = 0;
    v6 = nn_codec_FDK_getValidBits_plt_alt1(a1 + 16);
    if (v5 != 0) {
      goto LABEL_7;
    }
  LABEL_13:
    nn_codec_FDK_pushForward_plt(a1 + 16, (v6 - (_BYTE)v4) & 7,
                                 (unsigned int)a1[26]);
    if (*a1 != 10) {
      return 0;
    }
    goto LABEL_14;
  }
  nn_codec_FDK_pushBack_plt(a1 + 16, (unsigned int)a1[15], 0);
  v9 = a1[26];
  *((_QWORD*)a1 + 7) = 0;
  v6 = nn_codec_FDK_getValidBits_plt_alt1(a1 + 16);
  if (v9 == 0) {
    goto LABEL_13;
  }
LABEL_7:
  nn_codec_FDK_put_plt(a1 + 16, 0);
  if (*a1 != 10) {
    return 0;
  }
LABEL_14:
  v10 = a1[54];
  if (v10 != 0) {
    v11 = 8 * v10;
    if (a1[26] != 0) {
      nn_codec_FDK_put_plt(a1 + 16, (unsigned int)a1[14]);
    }
    else {
      nn_codec_FDK_pushBack_plt(a1 + 16, (unsigned int)a1[15], 0);
    }
    *((_QWORD*)a1 + 7) = 0;
    v16 = nn_codec_FDK_getValidBits_plt_alt1(a1 + 16);
    v17 = a1[342];
    v18 = v16 + v11 - v17;
    if (v16 + v11 != v17) {
      nn_codec_FDKpushBiDirectional(v2, v18);
      return (v18 >> 31) & 0x401;
    }
  }
  return 0;
}

__int64 fdk_aac_libMpegTPDec_src_3a3e60(__int64 a1, unsigned int* a2)
{
  int v2;
  _BOOL4 v5;
  int v6;
  unsigned int v7;
  unsigned int v8;
  int v9;
  unsigned int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  unsigned int v17;
  int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  int v22;
  int v23;
  int v24;
  unsigned int v25;
  int v26;
  unsigned int v27;
  unsigned int v28;
  int v29;
  int v30;
  int v31;
  unsigned int v32;
  int v33;
  int v34;
  int v35;
  unsigned int v36;
  unsigned int v37;
  int v38;
  __int64 v39;
  int v40;
  int v41;
  unsigned int v42;
  int v43;
  __int64 v44;
  int v45;
  unsigned int v46;
  int v47;
  __int64 v48;
  unsigned int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  __int64 v62;
  unsigned int v63;
  int v64;
  __int64 v65;
  __int64 v66;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned int* v71;
  int v72;
  int v73;
  int v74;
  unsigned int v75;
  int v76;
  unsigned int v77;
  unsigned int v78;
  _QWORD v79[15];
  int v80;
  _BOOL4 v81;
  unsigned int v82;
  int v83[4];

  v2 = *(_DWORD*)(a1 + 1416);
  *(_QWORD*)v83 = 0;
  v82 = 0;
  v80 = v2 & 0x20;
  if (*(_DWORD*)(a1 + 104) != 0) {
    nn_codec_FDK_put_plt(a1 + 64, *(unsigned int*)(a1 + 56));
  }
  else {
    nn_codec_FDK_pushBack_plt(a1 + 64, *(unsigned int*)(a1 + 60), 0);
  }
  memset(v79, 0, sizeof(v79));
  *(_QWORD*)(a1 + 56) = 0;
  if ((int)nn_codec_FDK_getValidBits_plt_alt1(a1 + 64) <= 0) {
    v8 = 0;
    *(_DWORD*)(a1 + 1380) = 0;
    goto LABEL_12;
  }
  v71 = a2;
  v75 = v2 & 0x15;
  v5 = (*(_DWORD*)(a1 + 1416) & 0xA) != 0 && (*(_DWORD*)(a1 + 1416) & 1) == 0;
  v81 = v5;
  if (*(_DWORD*)a1 == 2) {
    v6 = 4095;
    v7 = 12;
  }
  else if (*(_DWORD*)a1 == 10) {
    v6 = 695;
    v7 = 11;
  }
  else {
    v7 = 0;
    v6 = 0;
  }
  v76 = 0;
  v69 = 0;
  v70 = 0;
  v9 = v7 + 8;
  v8 = 0;
  v10 = 0;
  v72 = 0;
  v73 = -1;
  v11 = ~(-1 << v7);
  v12 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                   (unsigned __int64)(*(_BYTE**)0x20LL));
  while (1) {
    v77 = v8;
    if (*(_DWORD*)(a1 + 104) == 0) {
      break;
    }
    nn_codec_FDK_put_plt(a1 + 64, *(unsigned int*)(a1 + 56));
    *(_QWORD*)(a1 + 56) = 0;
    v13 = nn_codec_FDK_getValidBits_plt_alt1(a1 + 64);
    v14 = *(_DWORD*)(a1 + 1388);
    v15 = v13;
    if (v14 == 0) {
      goto LABEL_23;
    }
  LABEL_19:
    v8 = 0;
    v82 = 0;
    v78 = v83[0];
    if (v10 != 0) {
      if (v10 == 258) {
        goto LABEL_54;
      }
    LABEL_46:
      if (v10 == 257) {
        goto LABEL_92;
      }
      v33 = 0;
      if (!v81) {
        goto LABEL_58;
      }
      goto LABEL_48;
    }
  LABEL_44:
    v32 = nn_codec_transportDec_readHeader(
        (unsigned int*)a1, (unsigned int*)(a1 + 56), v7, v75, v83, (int*)&v81,
        &v83[1], &v80, &v82);
    v8 = v82;
    v76 = v83[1];
    if (v32 != 0) {
      v10 = v32;
      if (v32 == 258) {
        goto LABEL_54;
      }
      goto LABEL_46;
    }
    if ((int)(v83[1] + v82) > 65529) {
    LABEL_54:
      *(_DWORD*)(a1 + 1388) = 0;
      if (v15 <= 0) {
        v35 = -(-v15 & 7);
      }
      else {
        v35 = v15 & 7;
      }
      nn_codec_FDKpushBiDirectional((unsigned int*)(a1 + 56), v35 - v8 + 8);
      v10 = 258;
      v33 = 1;
      v8 = 0;
      v82 = 0;
      if (!v81) {
        goto LABEL_58;
      }
      goto LABEL_48;
    }
    if ((int)(v15 - v82) < v83[1]) {
      v10 = 257;
      v41 = v72;
      v40 = v73;
      a2 = v71;
      if (v73 == -1) {
        goto LABEL_107;
      }
      goto LABEL_93;
    }
    v33 = 0;
    v10 = 0;
    if (v81) {
    LABEL_48:
      if ((*(_DWORD*)(a1 + 1416) & 0xA) == 8) {
        if (v10 != 0) {
          v34 = v73;
        }
        else {
          v34 = v73;
          if (v73 == -1) {
            if (*(_DWORD*)(a1 + 104) != 0) {
              nn_codec_FDK_put_plt(a1 + 64, *(unsigned int*)(a1 + 56));
            }
            else {
              nn_codec_FDK_pushBack_plt(a1 + 64, *(unsigned int*)(a1 + 60), 0);
            }
            *(_QWORD*)(a1 + 56) = 0;
            v74 = nn_codec_FDK_getValidBits_plt_alt1(a1 + 64);
            LODWORD(v70) = *(_DWORD*)(a1 + 1368);
            HIDWORD(v70) = *(_DWORD*)(a1 + 1388);
            HIDWORD(v69) = v83[0];
            nn_codec_FDKmemcpy_plt(v79, a1 + 176, 120);
            v34 = v74;
            LODWORD(v69) = v8;
          }
        }
        v73 = v34;
        if (v34 != -1) {
          if ((v80 | v10) != 0) {
            if (v33 != 0) {
              a2 = v71;
              v41 = 0;
              v80 = 0;
              goto LABEL_107;
            }
            v8 = v69;
            a2 = v71;
            v40 = v34;
            if (*(_DWORD*)(a1 + 104) == 0) {
              goto LABEL_105;
            }
          LABEL_95:
            nn_codec_FDK_put_plt(a1 + 64, *(unsigned int*)(a1 + 56));
            goto LABEL_106;
          }
          v75 = 1;
          goto LABEL_70;
        }
        v73 = -1;
        v75 = 1;
        if (v10 == 0) {
        LABEL_71:
          v36 = v83[0];
          v37 = *(_DWORD*)(a1 + 60);
          v38 = *(_DWORD*)(a1 + 104);
          if (v37 <= v83[0]) {
            if (v38 == 0) {
              nn_codec_FDK_pushBack_plt(a1 + 64, v37, 0);
              goto LABEL_79;
            }
          }
          else if (v38 == 0) {
            *(_DWORD*)(a1 + 60) = v37 - v83[0];
            goto LABEL_80;
          }
          nn_codec_FDK_put_plt(a1 + 64, *(unsigned int*)(a1 + 56));
        LABEL_79:
          v39 = *(unsigned int*)(a1 + 104);
          *(_QWORD*)(a1 + 56) = 0;
          nn_codec_FDK_pushForward_plt(a1 + 64, v36, v39);
        LABEL_80:
          ++v72;
          fdk_aac_libMpegTPDec_src_3a3650((int*)a1);
        }
      }
      else {
      LABEL_70:
        if (v10 == 0) {
          goto LABEL_71;
        }
      }
    }
    else {
    LABEL_58:
      if (v10 != 258) {
        goto LABEL_92;
      }
      if ((*(_BYTE*)(a1 + 1416) & 1) != 0) {
        v10 = 258;
        v41 = v72;
        v40 = v73;
        a2 = v71;
        if (v73 == -1) {
          goto LABEL_107;
        }
        goto LABEL_93;
      }
    }
  }
  nn_codec_FDK_pushBack_plt(a1 + 64, *(unsigned int*)(a1 + 60), 0);
  *(_QWORD*)(a1 + 56) = 0;
  v16 = nn_codec_FDK_getValidBits_plt_alt1(a1 + 64);
  v14 = *(_DWORD*)(a1 + 1388);
  v15 = v16;
  if (v14 != 0) {
    goto LABEL_19;
  }
LABEL_23:
  if (v15 >= v9) {
    v17 = *(_DWORD*)(a1 + 60);
    v18 = *((_DWORD*)SdkData_e87a50[0] + v7);
    if (v17 <= v7) {
      v20 = nn_codec_FDK_getValidBits_plt_alt1(a1 + 64);
      if (31 - *(_DWORD*)(a1 + 60) >= v20) {
        v21 = v20;
      }
      else {
        v21 = 31 - *(_DWORD*)(a1 + 60);
      }
      v22 = *(_DWORD*)(a1 + 56) << v21;
      v23 = nn_codec_FDK_get_plt_alt1(a1 + 64, v21);
      v24 = *(_DWORD*)(a1 + 60);
      v19 = v22 | v23;
      *(_DWORD*)(a1 + 56) = v22 | v23;
      v17 = v24 + v21;
      if (v7 <= v17) {
        goto LABEL_32;
      }
      v19 <<= v7 - v17;
      v25 = 0;
      *(_QWORD*)(a1 + 56) = v19;
      v26 = v19 & v18;
      if ((*(_BYTE*)(a1 + 1416) & 1) == 0) {
        goto LABEL_33;
      }
    }
    else {
      v19 = *(_DWORD*)(a1 + 56);
    LABEL_32:
      v25 = v17 - v7;
      *(_DWORD*)(a1 + 60) = v25;
      v26 = (v19 >> v25) & v18;
      if ((*(_BYTE*)(a1 + 1416) & 1) == 0) {
      LABEL_33:
        if (v26 != v6) {
          while (1) {
            if (v25 > 8) {
              goto LABEL_35;
            }
            v27 = nn_codec_FDK_getValidBits_plt_alt1(a1 + 64);
            v28 = 31 - *(_DWORD*)(a1 + 60) >= v27 ? v27
                                                  : 31 - *(_DWORD*)(a1 + 60);
            v29 = *(_DWORD*)(a1 + 56) << v28;
            v30 = nn_codec_FDK_get_plt_alt1(a1 + 64, v28);
            v31 = *(_DWORD*)(a1 + 60);
            v19 = v29 | v30;
            *(_DWORD*)(a1 + 56) = v29 | v30;
            v25 = v31 + v28;
            if (v25 > 7) {
            LABEL_35:
              v25 -= 8;
              *(_DWORD*)(a1 + 60) = v25;
              v15 -= 8;
              v26 = (v19 >> v25) & v12 | v11 & (v26 << 8);
              if (v15 < v9) {
                goto LABEL_43;
              }
            }
            else {
              v19 <<= 8 - v25;
              v25 = 0;
              *(_QWORD*)(a1 + 56) = v19;
              v15 -= 8;
              v26 = v19 & v12 | v11 & (v26 << 8);
              if (v15 < v9) {
                goto LABEL_43;
              }
            }
            if (v26 == v6) {
              goto LABEL_43;
            }
          }
        }
        v14 = *(_DWORD*)(a1 + 1388);
        v82 = v7;
        v78 = v83[0];
        goto LABEL_44;
      }
    }
  LABEL_43:
    v14 = *(_DWORD*)(a1 + 1388);
    v82 = v7;
    v8 = v7;
    v78 = v83[0];
    if (v26 != v6) {
      goto LABEL_54;
    }
    goto LABEL_44;
  }
  v8 = 0;
  v14 = 0;
  v10 = 257;
  v78 = v83[0];
LABEL_92:
  v41 = v72;
  v40 = v73;
  a2 = v71;
  if (v73 == -1) {
    goto LABEL_107;
  }
LABEL_93:
  if ((v80 | v10) == 0) {
    v10 = 0;
    goto LABEL_107;
  }
  v8 = v69;
  if (*(_DWORD*)(a1 + 104) != 0) {
    goto LABEL_95;
  }
LABEL_105:
  nn_codec_FDK_pushBack_plt(a1 + 64, *(unsigned int*)(a1 + 60), 0);
LABEL_106:
  *(_QWORD*)(a1 + 56) = 0;
  v45 = nn_codec_FDK_getValidBits_plt_alt1(a1 + 64);
  nn_codec_FDKpushBiDirectional((unsigned int*)(a1 + 56), v45 - v40);
  nn_codec_FDKmemcpy_plt(a1 + 176, v79, 120);
  v41 = 0;
  v10 = 0;
  *(_DWORD*)(a1 + 1368) = v70;
  *(_DWORD*)(a1 + 1388) = HIDWORD(v70);
  v83[0] = HIDWORD(v69);
LABEL_107:
  if ((*(_DWORD*)(a1 + 1416) & 0x15 | v10) != 0) {
    if (v10 == 257) {
      v46 = *(_DWORD*)(a1 + 60);
      v47 = *(_DWORD*)(a1 + 104);
      v48 = v46 + v8;
      if ((unsigned int)v48 <= 0x1F) {
        goto LABEL_110;
      }
    LABEL_136:
      if (v47 != 0) {
        goto LABEL_137;
      }
      nn_codec_FDK_pushBack_plt(a1 + 64, v46, 0);
    LABEL_139:
      v62 = *(unsigned int*)(a1 + 104);
      *(_QWORD*)(a1 + 56) = 0;
      nn_codec_FDK_pushBack_plt(a1 + 64, v8, v62);
      v8 = 0;
      v10 = 257;
      if (v41 == 0) {
        goto LABEL_140;
      }
    LABEL_148:
      v63 = *(_DWORD*)(a1 + 60);
      v64 = *(_DWORD*)(a1 + 104);
      v65 = v63 + v78;
      if ((unsigned int)v65 <= 0x1F) {
        if (v64 == 0) {
          *(_DWORD*)(a1 + 60) = v65;
          nn_codec_FDK_pushBack_plt(a1 + 64, v65, 0);
          *(_QWORD*)(a1 + 56) = 0;
          if (v10 == 0) {
            goto LABEL_155;
          }
        LABEL_154:
          v8 = v77;
          *(_DWORD*)(a1 + 1388) = v14;
          goto LABEL_155;
        }
      LABEL_153:
        nn_codec_FDK_put_plt(a1 + 64, *(unsigned int*)(a1 + 56));
        v66 = *(unsigned int*)(a1 + 104);
        *(_QWORD*)(a1 + 56) = 0;
        nn_codec_FDK_pushBack_plt(a1 + 64, v78, v66);
        if (v10 == 0) {
          goto LABEL_155;
        }
        goto LABEL_154;
      }
      if (v64 != 0) {
        goto LABEL_153;
      }
      nn_codec_FDK_pushBack_plt(a1 + 64, v63, 0);
      v68 = *(unsigned int*)(a1 + 104);
      *(_QWORD*)(a1 + 56) = 0;
      nn_codec_FDK_pushBack_plt(a1 + 64, v78, v68);
      if (v10 != 0) {
        goto LABEL_154;
      }
    LABEL_155:
      *(_DWORD*)(a1 + 1380) = v83[0];
    LABEL_156:
      v10 = 0;
      *(_DWORD*)(a1 + 1416) |= 1u;
      goto LABEL_157;
    }
  LABEL_147:
    *(_DWORD*)(a1 + 1412) = 0;
    if (v41 == 0) {
      goto LABEL_140;
    }
    goto LABEL_148;
  }
  v49 = *(_DWORD*)a1;
  if ((unsigned int)(*(_DWORD*)a1 - 6) < 2 || v49 == 10) {
    v50 = v76;
    if (*(_DWORD*)(a1 + 180) == 255) {
      v52 = -1;
    }
    else {
      v52 = *(_DWORD*)(a1 + 180);
    }
    if (*(_DWORD*)(a1 + 104) != 0) {
      goto LABEL_124;
    }
  LABEL_118:
    nn_codec_FDK_pushBack_plt(a1 + 64, *(unsigned int*)(a1 + 60), 0);
    *(_QWORD*)(a1 + 56) = 0;
    v53 = nn_codec_FDK_getValidBits_plt_alt1(a1 + 64);
    v54 = *(_DWORD*)(a1 + 1392);
    if (v54 != 0) {
      goto LABEL_125;
    }
  LABEL_146:
    v10 = 0;
    goto LABEL_147;
  }
  v50 = v76;
  if (v49 == 2) {
    v51 = *(unsigned __int16*)(a1 + 190);
    if (v51 != 2047) {
      v52 = 32 * v51 * SdkData_c33d08[*(unsigned __int8*)(a1 + 182)] +
            8 * *(unsigned __int16*)(a1 + 188);
      if (*(_DWORD*)(a1 + 104) != 0) {
        goto LABEL_124;
      }
      goto LABEL_118;
    }
  }
  v52 = -1;
  if (*(_DWORD*)(a1 + 104) == 0) {
    goto LABEL_118;
  }
LABEL_124:
  nn_codec_FDK_put_plt(a1 + 64, *(unsigned int*)(a1 + 56));
  *(_QWORD*)(a1 + 56) = 0;
  v53 = nn_codec_FDK_getValidBits_plt_alt1(a1 + 64);
  v54 = *(_DWORD*)(a1 + 1392);
  if (v54 == 0) {
    goto LABEL_146;
  }
LABEL_125:
  v55 = *(_DWORD*)(a1 + 1408);
  if (v55 == 0) {
    goto LABEL_146;
  }
  v56 = *(_DWORD*)(a1 + 804);
  if (v56 != 0 && (v57 = *(_DWORD*)(a1 + 800)) != 0) {
    v58 = (v57 + v54 * v56 - 1) / v57;
    v59 = (1000 * v56 + v55 * v57 - 1) / (1000 * v56);
    v60 = *(_DWORD*)(a1 + 1412);
    if (*(_DWORD*)a1 <= 0xAu && ((1 << *(_DWORD*)a1) & 0x4C6) != 0) {
      v52 += 31;
    }
    v61 = v52 + (v59 + ~v60) * v58;
    if (v61 > 65529) {
      v10 = 258;
      *(_DWORD*)(a1 + 1412) = 0;
      if (v41 == 0) {
        goto LABEL_140;
      }
      goto LABEL_148;
    }
    if (v53 - v50 >= v61) {
      goto LABEL_146;
    }
  }
  else {
    v60 = *(_DWORD*)(a1 + 1412);
  }
  *(_DWORD*)(a1 + 1412) = v60 + 1;
  v46 = *(_DWORD*)(a1 + 60);
  v47 = *(_DWORD*)(a1 + 104);
  v48 = v46 + v8;
  if ((unsigned int)v48 > 0x1F) {
    goto LABEL_136;
  }
LABEL_110:
  if (v47 != 0) {
  LABEL_137:
    nn_codec_FDK_put_plt(a1 + 64, *(unsigned int*)(a1 + 56));
    goto LABEL_139;
  }
  *(_DWORD*)(a1 + 60) = v48;
  nn_codec_FDK_pushBack_plt(a1 + 64, v48, 0);
  v8 = 0;
  *(_QWORD*)(a1 + 56) = 0;
  v10 = 257;
  if (v41 != 0) {
    goto LABEL_148;
  }
LABEL_140:
  *(_DWORD*)(a1 + 1380) = v83[0];
  if (v10 == 0) {
    goto LABEL_156;
  }
  if (v10 == 257) {
  LABEL_12:
    if (*(_DWORD*)(a1 + 104) != 0) {
      nn_codec_FDK_put_plt(a1 + 64, *(unsigned int*)(a1 + 56));
    }
    else {
      nn_codec_FDK_pushBack_plt(a1 + 64, *(unsigned int*)(a1 + 60), 0);
    }
    *(_QWORD*)(a1 + 56) = 0;
    if ((unsigned int)nn_codec_FDK_getValidBits_plt_alt1(a1 + 64) <
        65529 - *(_DWORD*)(a1 + 1408) * *(_DWORD*)(a1 + 1392) / 0x3E8u) {
      v10 = 257;
      goto LABEL_157;
    }
    v42 = *(_DWORD*)(a1 + 60);
    v43 = *(_DWORD*)(a1 + 104);
    if (v42 < 9) {
      if (v43 == 0) {
        nn_codec_FDK_pushBack_plt(a1 + 64, v42, 0);
        goto LABEL_98;
      }
    }
    else if (v43 == 0) {
      *(_DWORD*)(a1 + 60) = v42 - 8;
    LABEL_99:
      v10 = 258;
      goto LABEL_157;
    }
    nn_codec_FDK_put_plt(a1 + 64, *(unsigned int*)(a1 + 56));
  LABEL_98:
    v44 = *(unsigned int*)(a1 + 104);
    *(_QWORD*)(a1 + 56) = 0;
    nn_codec_FDK_pushForward_plt(a1 + 64, 8, v44);
    goto LABEL_99;
  }
LABEL_157:
  if (v80 != 0) {
    *(_DWORD*)(a1 + 1416) |= 0x20u;
  }
  *a2 = v8;
  if (v10 == 258) {
    *(_DWORD*)(a1 + 1416) &= ~1u;
  }
  return v10;
}

#pragma GCC visibility pop
