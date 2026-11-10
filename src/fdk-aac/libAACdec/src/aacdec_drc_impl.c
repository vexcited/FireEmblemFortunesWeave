#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_CAacDecoder_AncDataParse(__int64 result, unsigned int*, int);
__int64 nn_codec_CAacDecoder_SyncQmfMode_plt(_QWORD);
__int64 nn_codec_FDK_getValidBits_plt(_QWORD);
__int64 nn_codec_FDK_get_plt(_QWORD, _QWORD);
__int64 nn_codec_FDK_pushBack_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDK_pushForward_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDK_put_plt(_QWORD, _QWORD);
__int64 nn_codec_FDKpushBack(unsigned int*, unsigned int);
__int64 nn_codec_aacDecoder_drcMarkPayload_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_f2Pow_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_fLdPow_plt_8666f0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_codec_fPowInt_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_codec_sbrDecoder_InitElement_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                            _QWORD, _QWORD, _QWORD);
__int64 nn_codec_sbrDecoder_Parse_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                      _QWORD, _QWORD, _QWORD);
__int64 nn_codec_sbrDecoder_drcDisable_plt(_QWORD, _QWORD);
__int64 nn_codec_sbrDecoder_drcFeedChannel_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD);
extern void (*SdkData_e87a50[778])();
unsigned int* nn_codec_FDKpushBiDirectional(unsigned int* result, unsigned int);
__int64 nn_codec_FDKreadBits(int* a1, unsigned int a2);
__int64 aacdec_drc_33a720(__int64 a1, unsigned int* a2, unsigned int* a3,
                          unsigned int a4, unsigned int a5, int a6);
__int64 nn_codec_aacDecoder_drcMarkPayload(__int64 a1, unsigned int* a2,
                                           int a3);
unsigned __int64 nn_codec_aacDecoder_drcApply(unsigned __int64 result,
                                              __int64 a2, __int64* a3,
                                              __int64 a4, int* a5,
                                              unsigned int a6, int a7, int a8);

__int64 nn_codec_FDKreadBits(int* a1, unsigned int a2)
{
  unsigned int v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  int v13;

  v4 = a1[1];
  v5 = *((_DWORD*)SdkData_e87a50[0] + a2);
  if (v4 > a2) {
    v6 = *a1;
  LABEL_8:
    v13 = v4 - a2;
    a1[1] = v13;
    v12 = v6 >> v13;
    return v12 & v5;
  }
  v7 = nn_codec_FDK_getValidBits_plt(a1 + 2);
  if (31 - a1[1] >= v7) {
    v8 = v7;
  }
  else {
    v8 = 31 - a1[1];
  }
  v9 = *a1 << v8;
  v10 = nn_codec_FDK_get_plt(a1 + 2, v8);
  v11 = a1[1];
  v6 = v9 | v10;
  *a1 = v9 | v10;
  v4 = v11 + v8;
  if (a2 <= v4) {
    goto LABEL_8;
  }
  v12 = v6 << (a2 - v4);
  *(_QWORD*)a1 = v12;
  return v12 & v5;
}

__int64 aacdec_drc_33a720(__int64 a1, unsigned int* a2, unsigned int* a3,
                          unsigned int a4, unsigned int a5, int a6)
{
  int v6;
  __int64 result;
  void(__attribute__((noreturn)) * v14)();
  unsigned int v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  int v24;
  unsigned int v25;
  signed int v26;
  int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;
  unsigned int v35;
  unsigned int v36;
  unsigned int v37;
  unsigned int v38;
  int v39;
  unsigned int v40;
  unsigned int v41;
  unsigned int v42;
  int v43;
  int v44;
  int v45;
  bool v46;
  unsigned int v47;
  unsigned int v48;
  unsigned int v49;
  int v50;
  unsigned int v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  int v55;
  unsigned int v56;
  unsigned int v57;
  unsigned int v58;
  int v59;
  int v60;
  unsigned int v61;
  unsigned int v62;
  unsigned int v63;
  int v64;
  unsigned int v65;
  unsigned int v66;
  unsigned int v67;
  unsigned int v68;
  int v69;
  unsigned int v70;
  __int64 v71;
  int v72;
  int v73;
  int v74;
  int v75;

  v6 = *a3;
  if ((int)*a3 < 4) {
    return 16386;
  }
  if (a2[12] != 0) {
    nn_codec_FDK_put_plt(a2 + 2, *a2);
    *(_QWORD*)a2 = 0;
    if ((int)nn_codec_FDK_getValidBits_plt(a2 + 2) < (int)*a3) {
      return 16388;
    }
  }
  else {
    nn_codec_FDK_pushBack_plt(a2 + 2, a2[1], 0);
    *(_QWORD*)a2 = 0;
    if ((int)nn_codec_FDK_getValidBits_plt(a2 + 2) < (int)*a3) {
      return 16388;
    }
  }
  v14 = SdkData_e87a50[0];
  v15 = a2[1];
  v16 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                   (unsigned __int64)((__int64*)0xCLL) + 4);
  if (v15 < 5) {
    v18 = nn_codec_FDK_getValidBits_plt(a2 + 2);
    if (31 - a2[1] >= v18) {
      v19 = v18;
    }
    else {
      v19 = 31 - a2[1];
    }
    v20 = *a2 << v19;
    v21 = nn_codec_FDK_get_plt(a2 + 2, v19);
    v22 = a2[1];
    v17 = v20 | v21;
    *a2 = v20 | v21;
    v15 = v22 + v19;
    if (v15 <= 3) {
      v23 = v17 << (4 - v15);
      *a2 = v23;
      a2[1] = 0;
      v14 = SdkData_e87a50[0];
      v24 = v23 & v16;
      v25 = *a3 - 4;
      *a3 = v25;
      if (v24 <= 10) {
        goto LABEL_22;
      }
    LABEL_14:
      switch (v24) {
      case 14:
        v31 = 1;
        break;
      case 13:
        v31 = 0;
        break;
      case 11:
        v26 = nn_codec_aacDecoder_drcMarkPayload_plt(*(_QWORD*)(a1 + 16104), a2,
                                                     1);
        v27 = *a3 - v26;
        if ((int)*a3 >= v26) {
          result = 0;
        }
        else {
          result = 16386;
        }
        goto LABEL_88;
      default:
        goto LABEL_27;
      }
      result = 16386;
      if (a4 <= 3 && a4 != 2) {
        nn_codec_CAacDecoder_SyncQmfMode_plt(a1);
        if ((unsigned int)nn_codec_sbrDecoder_InitElement_plt(
                *(_QWORD*)(a1 + 16080), *(unsigned int*)(a1 + 672),
                *(unsigned int*)(a1 + 704), *(unsigned int*)(a1 + 692),
                *(unsigned int*)(a1 + 680), a4, a5) != 0) {
          *(_BYTE*)(a1 + 16088) = 0;
          if (a6 != 0) {
            goto LABEL_91;
          }
        }
        else {
          result = nn_codec_sbrDecoder_Parse_plt(*(_QWORD*)(a1 + 16080), a2, a3,
                                                 *a3, v31, a4, a5,
                                                 *(_DWORD*)(a1 + 68) & 0x40000);
          if ((result & 0xFFFFFFFB) == 0) {
            *(_BYTE*)(a1 + 16088) = 1;
          }
          if (a6 != 0) {
            goto LABEL_91;
          }
          if ((_DWORD)result == 0) {
            return result;
          }
        }
        *(_BYTE*)(a1 + 64) = 0;
        return 0;
      }
    LABEL_89:
      if (a6 == 0 || (_DWORD)result == 0) {
        return result;
      }
    LABEL_91:
      nn_codec_FDKpushBiDirectional(a2, *a3);
      goto LABEL_92;
    }
    v14 = SdkData_e87a50[0];
  }
  else {
    v17 = *a2;
  }
  v28 = v15 - 4;
  a2[1] = v28;
  v24 = (v17 >> v28) & v16;
  v25 = *a3 - 4;
  *a3 = v25;
  if (v24 > 10) {
    goto LABEL_14;
  }
LABEL_22:
  if (v24 == 1) {
    v32 = a2[1];
    if (v32 < 5) {
      v36 = nn_codec_FDK_getValidBits_plt(a2 + 2);
      if (31 - a2[1] >= v36) {
        v37 = v36;
      }
      else {
        v37 = 31 - a2[1];
      }
      v38 = *a2 << v37;
      v39 = nn_codec_FDK_get_plt(a2 + 2, v37);
      v40 = a2[1];
      v33 = v38 | v39;
      *a2 = v38 | v39;
      v32 = v40 + v37;
      if (v40 + v37 <= 3) {
        v41 = 0;
        v33 <<= 4 - v32;
        *(_QWORD*)a2 = v33;
        v42 = v33;
      LABEL_54:
        if ((v42 & v16) != 0) {
        LABEL_72:
          result = 16386;
          goto LABEL_89;
        }
        v43 = *(_DWORD*)&(*(_BYTE(*)[4])0x20LL)[(_QWORD)v14];
        v44 = (v6 >> 3) - 1;
        v45 = v44 & (v44 >> 31);
        while (1) {
          v46 = __OFSUB__(v44--, 1);
          if (v44 < 0 != v46) {
            break;
          }
          if (v41 > 8) {
            goto LABEL_56;
          }
          v47 = nn_codec_FDK_getValidBits_plt(a2 + 2);
          v48 = 31 - a2[1] >= v47 ? v47 : 31 - a2[1];
          v49 = *a2 << v48;
          v50 = nn_codec_FDK_get_plt(a2 + 2, v48);
          v51 = a2[1];
          v33 = v49 | v50;
          *a2 = v49 | v50;
          v41 = v51 + v48;
          if (v41 > 7) {
          LABEL_56:
            v41 -= 8;
            a2[1] = v41;
            if (((v33 >> v41) & v43) != 0xA5) {
              goto LABEL_64;
            }
          }
          else {
            v33 <<= 8 - v41;
            v41 = 0;
            *(_QWORD*)a2 = v33;
            if ((v33 & v43) != 0xA5) {
            LABEL_64:
              result = 16386;
              v45 = v44;
              goto LABEL_87;
            }
          }
        }
        result = 0;
      LABEL_87:
        v27 = 8 * v45;
      LABEL_88:
        *a3 = v27;
        goto LABEL_89;
      }
    }
    else {
      v33 = *a2;
    }
    v41 = v32 - 4;
    a2[1] = v32 - 4;
    v42 = v33 >> (v32 - 4);
    goto LABEL_54;
  }
  if (v24 == 2) {
    v34 = a2[1];
    if (v34 < 5) {
      v52 = nn_codec_FDK_getValidBits_plt(a2 + 2);
      if (31 - a2[1] >= v52) {
        v53 = v52;
      }
      else {
        v53 = 31 - a2[1];
      }
      v54 = *a2 << v53;
      v55 = nn_codec_FDK_get_plt(a2 + 2, v53);
      v56 = a2[1];
      v35 = v54 | v55;
      *a2 = v54 | v55;
      v34 = v56 + v53;
      if (v34 <= 3) {
        v57 = v35 << (4 - v34);
        *(_QWORD*)a2 = v57;
      LABEL_71:
        *a3 -= 4;
        if ((v57 & v16) != 0) {
          goto LABEL_72;
        }
        v59 = *(_DWORD*)&(*(_BYTE(*)[4])0x20LL)[(_QWORD)v14];
        v60 = 0;
        while (1) {
          v65 = a2[1];
          if (v65 >= 9) {
            v61 = *a2;
          }
          else {
            v66 = nn_codec_FDK_getValidBits_plt(a2 + 2);
            if (31 - a2[1] >= v66) {
              v67 = v66;
            }
            else {
              v67 = 31 - a2[1];
            }
            v68 = *a2 << v67;
            v69 = nn_codec_FDK_get_plt(a2 + 2, v67);
            v70 = a2[1];
            v61 = v68 | v69;
            *a2 = v68 | v69;
            v65 = v70 + v67;
            if (v65 <= 7) {
              v63 = v61 << (8 - v65);
              *(_QWORD*)a2 = v63;
              goto LABEL_76;
            }
          }
          v62 = v65 - 8;
          a2[1] = v62;
          v63 = v61 >> v62;
        LABEL_76:
          v64 = v63 & v59;
          v60 += v64;
          *a3 -= 8;
          if (v64 != 255) {
            nn_codec_CAacDecoder_AncDataParse(a1 + 16112, a2, v60);
            *a3 -= 8 * v60;
            return 0;
          }
        }
      }
    }
    else {
      v35 = *a2;
    }
    v58 = v34 - 4;
    a2[1] = v58;
    v57 = v35 >> v58;
    goto LABEL_71;
  }
  if (v24 != 3 || a6 != 0 || (*(_BYTE*)(a1 + 68) & 0x40) == 0) {
  LABEL_27:
    v29 = a2[1];
    v30 = a2[12];
    if (v29 <= v25) {
      if (v30 == 0) {
        nn_codec_FDK_pushBack_plt(a2 + 2, v29, 0);
        goto LABEL_85;
      }
    }
    else if (v30 == 0) {
      a2[1] = v29 - v25;
    LABEL_92:
      result = 0;
      *a3 = 0;
      return result;
    }
    nn_codec_FDK_put_plt(a2 + 2, *a2);
  LABEL_85:
    v71 = a2[12];
    *(_QWORD*)a2 = 0;
    nn_codec_FDK_pushForward_plt(a2 + 2, v25, v71);
    goto LABEL_92;
  }
  v72 = nn_codec_FDKreadBits((int*)a2, 4u);
  *a3 -= 4;
  if (v72 == 15) {
    v73 = nn_codec_FDKreadBits((int*)a2, 8u);
    v72 = v73 + 15;
    *a3 -= 8;
    if (v73 == 255) {
      v72 += nn_codec_FDKreadBits((int*)a2, 0x10u);
      *a3 -= 16;
    }
  }
  v74 = 8 * v72;
  v75 = 8 * v72;
  if ((unsigned int)nn_codec_FDKreadBits((int*)a2, 4u) == 3) {
    return 16386;
  }
  nn_codec_FDKpushBack(a2, 4u);
  result = aacdec_drc_33a720(a1, a2, (unsigned int*)&v75, a4, a5, 0);
  *a3 += v75 - v74;
  return result;
}

__int64 nn_codec_aacDecoder_drcMarkPayload(__int64 a1, unsigned int* a2, int a3)
{
  int v6;
  void(__attribute__((noreturn)) * v7)();
  unsigned int v8;
  int v9;
  __int64 v10;
  unsigned int v11;
  int v13;
  void(__attribute__((noreturn)) * v14)();
  unsigned int v15;
  int v16;
  __int64 v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  int v34;
  unsigned int v35;
  unsigned int v36;
  unsigned int v37;
  unsigned int v38;
  unsigned int v39;
  int v40;
  unsigned int v41;
  int v42;
  unsigned int v43;
  unsigned int v44;
  unsigned int v45;
  unsigned int v46;
  int v47;
  unsigned int v48;
  unsigned int v49;
  unsigned int v50;
  unsigned int v51;
  unsigned int v52;
  unsigned int v53;
  int v54;
  unsigned int v55;
  unsigned int v56;
  unsigned int v57;
  unsigned int v58;
  int v59;
  unsigned int v60;
  unsigned int v61;
  unsigned int v62;
  unsigned int v63;
  unsigned int v64;
  int v65;
  unsigned int v66;
  unsigned int v67;
  unsigned int v68;
  unsigned int v69;
  unsigned int v70;
  unsigned int v71;
  int v72;
  unsigned int v73;
  unsigned int v74;
  unsigned int v75;
  unsigned int v76;
  unsigned int v77;
  unsigned int v78;
  int v79;
  unsigned int v80;
  unsigned int v81;
  unsigned int v82;
  unsigned int v83;
  unsigned int v84;
  unsigned int v85;
  int v86;
  unsigned int v87;
  char v88;
  unsigned int v89;
  unsigned int v90;
  unsigned int v91;
  int v92;
  unsigned int v93;
  char v94;
  unsigned int v95;
  unsigned int v96;
  unsigned int v97;
  int v98;
  unsigned int v99;
  char v100;
  unsigned int v101;
  unsigned int v102;
  unsigned int v103;
  int v104;
  unsigned int v105;
  char v106;
  unsigned int v107;
  unsigned int v108;
  unsigned int v109;
  int v110;
  unsigned int v111;
  unsigned int v112;
  unsigned int v113;
  unsigned int v114;
  unsigned int v115;
  int v116;
  unsigned int v117;
  unsigned int v118;
  unsigned int v119;
  unsigned int v120;
  unsigned int v121;
  int v122;
  unsigned int v123;
  unsigned int v124;
  unsigned int v125;
  unsigned int v126;
  int v127;
  unsigned int v128;
  unsigned int v129;
  unsigned int v130;
  unsigned int v131;
  int v132;
  unsigned int v133;
  unsigned int v134;
  int v135;
  int v136;
  unsigned int v137;
  unsigned int v138;
  unsigned int v139;
  int v140;
  unsigned int v141;
  unsigned int v142;
  unsigned int v143;
  unsigned int v144;
  unsigned int v145;
  unsigned int v146;
  int v147;
  unsigned int v148;
  int i;
  unsigned int v150;
  unsigned int v151;
  unsigned int v152;
  int v153;
  unsigned int v154;
  char v155;
  unsigned int v156;
  unsigned int v157;
  unsigned int v158;
  int v159;
  unsigned int v160;
  unsigned int v161;
  unsigned int v162;
  unsigned int v163;
  unsigned int v164;
  int v165;
  unsigned int v166;
  char v167;
  int j;
  unsigned int v169;
  unsigned int v170;
  unsigned int v171;
  int v172;
  unsigned int v173;
  char v174;
  __int64 v175;
  int v176;

  if (a1 == 0) {
    return 0;
  }
  if (a2[12] != 0) {
    nn_codec_FDK_put_plt(a2 + 2, *a2);
    *(_QWORD*)a2 = 0;
    v6 = nn_codec_FDK_getValidBits_plt(a2 + 2);
    if (a3 != 2) {
      goto LABEL_4;
    }
  LABEL_10:
    v13 = v6;
    v14 = SdkData_e87a50[0];
    v15 = a2[1];
    v16 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                     (unsigned __int64)(*(_BYTE**)0x20LL));
    if (v15 < 9) {
      v24 = nn_codec_FDK_getValidBits_plt(a2 + 2);
      if (31 - a2[1] >= v24) {
        v25 = v24;
      }
      else {
        v25 = 31 - a2[1];
      }
      v26 = *a2 << v25;
      v27 = nn_codec_FDK_get_plt(a2 + 2, v25);
      v28 = a2[1];
      v17 = v26 | v27;
      *a2 = v17;
      v15 = v28 + v25;
      if (v15 < 8) {
        v11 = 8;
        v29 = (_DWORD)v17 << (8 - v15);
        *a2 = v29;
        a2[1] = 0;
        if ((v29 & v16) != 0xBC) {
          return v11;
        }
      LABEL_27:
        v31 = nn_codec_FDK_getValidBits_plt(a2 + 2);
        if (31 - a2[1] >= v31) {
          v32 = v31;
        }
        else {
          v32 = 31 - a2[1];
        }
        v33 = *a2 << v32;
        v34 = nn_codec_FDK_get_plt(a2 + 2, v32);
        v35 = a2[1];
        v17 = v33 | v34;
        *a2 = v17;
        v30 = v35 + v32;
        if (v30 <= 7) {
          *(_QWORD*)a2 = (unsigned int)((_DWORD)v17 << (8 - v30));
        LABEL_34:
          v37 = nn_codec_FDK_getValidBits_plt(a2 + 2);
          if (31 - a2[1] >= v37) {
            v38 = v37;
          }
          else {
            v38 = 31 - a2[1];
          }
          v39 = *a2 << v38;
          v40 = nn_codec_FDK_get_plt(a2 + 2, v38);
          v41 = a2[1];
          v17 = v39 | v40;
          *a2 = v17;
          v36 = v41 + v38;
          if (v36 <= 2) {
            v42 = *(_DWORD*)((char*)((__int64*)0x4LL) + (_QWORD)v14);
            *(_QWORD*)a2 = (unsigned int)((_DWORD)v17 << (3 - v36));
          LABEL_40:
            v44 = nn_codec_FDK_getValidBits_plt(a2 + 2);
            if (31 - a2[1] >= v44) {
              v45 = v44;
            }
            else {
              v45 = 31 - a2[1];
            }
            v46 = *a2 << v45;
            v47 = nn_codec_FDK_get_plt(a2 + 2, v45);
            v48 = a2[1];
            v17 = v46 | v47;
            *a2 = v17;
            v43 = v48 + v45;
            if (v43 == 0) {
              v50 = v42 & (2 * v17);
              *(_QWORD*)a2 = (unsigned int)(2 * v17);
            LABEL_57:
              v56 = nn_codec_FDK_getValidBits_plt(a2 + 2);
              if (31 - a2[1] >= v56) {
                v57 = v56;
              }
              else {
                v57 = 31 - a2[1];
              }
              v58 = *a2 << v57;
              v59 = nn_codec_FDK_get_plt(a2 + 2, v57);
              v60 = a2[1];
              v17 = v58 | v59;
              *a2 = v17;
              v49 = v60 + v57;
              if (v49 == 0) {
                *(_QWORD*)a2 = (unsigned int)(2 * v17);
              LABEL_64:
                v62 = nn_codec_FDK_getValidBits_plt(a2 + 2);
                if (31 - a2[1] >= v62) {
                  v63 = v62;
                }
                else {
                  v63 = 31 - a2[1];
                }
                v64 = *a2 << v63;
                v65 = nn_codec_FDK_get_plt(a2 + 2, v63);
                v66 = a2[1];
                v17 = v64 | v65;
                *a2 = v17;
                v61 = v66 + v63;
                if (v61 == 0) {
                  v68 = v42 & (2 * v17);
                  *(_QWORD*)a2 = (unsigned int)(2 * v17);
                LABEL_71:
                  v69 = nn_codec_FDK_getValidBits_plt(a2 + 2);
                  if (31 - a2[1] >= v69) {
                    v70 = v69;
                  }
                  else {
                    v70 = 31 - a2[1];
                  }
                  v71 = *a2 << v70;
                  v72 = nn_codec_FDK_get_plt(a2 + 2, v70);
                  v73 = a2[1];
                  v17 = v71 | v72;
                  *a2 = v17;
                  v67 = v73 + v70;
                  if (v67 == 0) {
                    v75 = v42 & (2 * v17);
                    *(_QWORD*)a2 = (unsigned int)(2 * v17);
                  LABEL_78:
                    v76 = nn_codec_FDK_getValidBits_plt(a2 + 2);
                    if (31 - a2[1] >= v76) {
                      v77 = v76;
                    }
                    else {
                      v77 = 31 - a2[1];
                    }
                    v78 = *a2 << v77;
                    v79 = nn_codec_FDK_get_plt(a2 + 2, v77);
                    v80 = a2[1];
                    v17 = v78 | v79;
                    *a2 = v17;
                    v74 = v80 + v77;
                    if (v74 == 0) {
                      v82 = v42 & (2 * v17);
                      *(_QWORD*)a2 = (unsigned int)(2 * v17);
                      if (v50 == 0) {
                        v81 = 0;
                        v11 = 24;
                        v17 = (unsigned int)(2 * v17);
                        if (v68 == 0) {
                          goto LABEL_103;
                        }
                        goto LABEL_95;
                      }
                      goto LABEL_88;
                    }
                  LABEL_82:
                    v81 = v74 - 1;
                    a2[1] = v74 - 1;
                    v82 = ((unsigned int)v17 >> (v74 - 1)) & v42;
                    if (v50 == 0) {
                      v11 = 24;
                      if (v68 != 0) {
                        goto LABEL_95;
                      }
                      goto LABEL_103;
                    }
                    if (v81 > 8) {
                    LABEL_94:
                      v81 -= 8;
                      v11 = 32;
                      a2[1] = v81;
                      if (v68 != 0) {
                        goto LABEL_95;
                      }
                    LABEL_103:
                      if (v75 != 0) {
                        if (v81 > 0x10) {
                          goto LABEL_110;
                        }
                        v95 = nn_codec_FDK_getValidBits_plt(a2 + 2);
                        v96 = 31 - a2[1] >= v95 ? v95 : 31 - a2[1];
                        v97 = *a2 << v96;
                        v98 = nn_codec_FDK_get_plt(a2 + 2, v96);
                        v99 = a2[1];
                        v17 = v97 | v98;
                        *a2 = v17;
                        v81 = v99 + v96;
                        if (v99 + v96 > 0xF) {
                        LABEL_110:
                          v81 -= 16;
                        }
                        else {
                          v100 = 16 - v81;
                          v81 = 0;
                          v17 = (unsigned int)((_DWORD)v17 << v100);
                          *a2 = v17;
                        }
                        v11 += 16;
                        a2[1] = v81;
                      }
                      if (v82 != 0) {
                        if (v81 > 0x10) {
                          goto LABEL_119;
                        }
                        v101 = nn_codec_FDK_getValidBits_plt(a2 + 2);
                        v102 = 31 - a2[1] >= v101 ? v101 : 31 - a2[1];
                        v103 = *a2 << v102;
                        v104 = nn_codec_FDK_get_plt(a2 + 2, v102);
                        v105 = a2[1];
                        v17 = v103 | v104;
                        *a2 = v17;
                        v81 = v105 + v102;
                        if (v105 + v102 > 0xF) {
                        LABEL_119:
                          v81 -= 16;
                        }
                        else {
                          v106 = 16 - v81;
                          v81 = 0;
                          v17 = (unsigned int)((_DWORD)v17 << v106);
                          *a2 = v17;
                        }
                        v11 += 16;
                        a2[1] = v81;
                      }
                      if (*(_BYTE*)(a1 + 37) == 0) {
                        if (a2[12] != 0) {
                          nn_codec_FDK_put_plt(a2 + 2, v17);
                        }
                        else {
                          nn_codec_FDK_pushBack_plt(a2 + 2, v81, 0);
                        }
                        *(_QWORD*)a2 = 0;
                        if ((nn_codec_FDK_getValidBits_plt(a2 + 2) &
                             0x80000000) == 0) {
                          *(_DWORD*)(a1 + 40) = v13;
                          *(_BYTE*)(a1 + 37) = 1;
                        }
                      }
                      return v11;
                    }
                  LABEL_88:
                    v83 = nn_codec_FDK_getValidBits_plt(a2 + 2);
                    if (31 - a2[1] >= v83) {
                      v84 = v83;
                    }
                    else {
                      v84 = 31 - a2[1];
                    }
                    v85 = *a2 << v84;
                    v86 = nn_codec_FDK_get_plt(a2 + 2, v84);
                    v87 = a2[1];
                    v17 = v85 | v86;
                    *a2 = v17;
                    v81 = v87 + v84;
                    if (v87 + v84 <= 7) {
                      v88 = 8 - v81;
                      v81 = 0;
                      v17 = (unsigned int)((_DWORD)v17 << v88);
                      *(_QWORD*)a2 = (unsigned int)v17;
                      v11 = 32;
                      if (v68 == 0) {
                        goto LABEL_103;
                      }
                    LABEL_95:
                      if (v81 > 0x10) {
                        goto LABEL_101;
                      }
                      v89 = nn_codec_FDK_getValidBits_plt(a2 + 2);
                      v90 = 31 - a2[1] >= v89 ? v89 : 31 - a2[1];
                      v91 = *a2 << v90;
                      v92 = nn_codec_FDK_get_plt(a2 + 2, v90);
                      v93 = a2[1];
                      v17 = v91 | v92;
                      *a2 = v17;
                      v81 = v93 + v90;
                      if (v93 + v90 > 0xF) {
                      LABEL_101:
                        v81 -= 16;
                      }
                      else {
                        v94 = 16 - v81;
                        v81 = 0;
                        v17 = (unsigned int)((_DWORD)v17 << v94);
                        *a2 = v17;
                      }
                      v11 += 16;
                      a2[1] = v81;
                      goto LABEL_103;
                    }
                    goto LABEL_94;
                  }
                LABEL_75:
                  v74 = v67 - 1;
                  a2[1] = v74;
                  v75 = ((unsigned int)v17 >> v74) & v42;
                  if (v74 > 1) {
                    goto LABEL_82;
                  }
                  goto LABEL_78;
                }
              LABEL_68:
                v67 = v61 - 1;
                a2[1] = v67;
                v68 = ((unsigned int)v17 >> v67) & v42;
                if (v67 > 1) {
                  goto LABEL_75;
                }
                goto LABEL_71;
              }
            LABEL_61:
              v61 = v49 - 1;
              a2[1] = v61;
              if (v61 > 1) {
                goto LABEL_68;
              }
              goto LABEL_64;
            }
          LABEL_44:
            v49 = v43 - 1;
            a2[1] = v49;
            v50 = ((unsigned int)v17 >> v49) & v42;
            if (v49 > 1) {
              goto LABEL_61;
            }
            goto LABEL_57;
          }
        LABEL_39:
          v42 = *(_DWORD*)((char*)((__int64*)0x4LL) + (_QWORD)v14);
          v43 = v36 - 3;
          a2[1] = v43;
          if (v43 > 1) {
            goto LABEL_44;
          }
          goto LABEL_40;
        }
      LABEL_33:
        v36 = v30 - 8;
        a2[1] = v36;
        if (v36 > 3) {
          goto LABEL_39;
        }
        goto LABEL_34;
      }
    }
    else {
      v17 = *a2;
    }
    v30 = v15 - 8;
    a2[1] = v30;
    if ((((unsigned int)v17 >> v30) & v16) != 0xBC) {
      return 8;
    }
    if (v30 > 8) {
      goto LABEL_33;
    }
    goto LABEL_27;
  }
  nn_codec_FDK_pushBack_plt(a2 + 2, a2[1], 0);
  *(_QWORD*)a2 = 0;
  v6 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (a3 == 2) {
    goto LABEL_10;
  }
LABEL_4:
  if (a3 != 1) {
    return 0;
  }
  v176 = v6;
  v7 = SdkData_e87a50[0];
  v8 = a2[1];
  v9 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                  (unsigned __int64)((__int64*)0x4LL));
  if (v8 >= 2) {
    v10 = *a2;
  LABEL_16:
    v23 = v8 - 1;
    a2[1] = v23;
    if ((((unsigned int)v10 >> v23) & v9) == 0) {
      v11 = 4;
      if (v23 > 1) {
        goto LABEL_129;
      }
      goto LABEL_125;
    }
    if (v23 > 8) {
      goto LABEL_54;
    }
    goto LABEL_49;
  }
  v18 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (31 - a2[1] >= v18) {
    v19 = v18;
  }
  else {
    v19 = 31 - a2[1];
  }
  v20 = *a2 << v19;
  v21 = nn_codec_FDK_get_plt(a2 + 2, v19);
  v22 = a2[1];
  v10 = v20 | v21;
  *a2 = v10;
  v8 = v22 + v19;
  if (v8 != 0) {
    goto LABEL_16;
  }
  *(_QWORD*)a2 = (unsigned int)(2 * v10);
  if ((v9 & (2 * (_DWORD)v10)) == 0) {
    v11 = 4;
    goto LABEL_125;
  }
LABEL_49:
  v51 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (31 - a2[1] >= v51) {
    v52 = v51;
  }
  else {
    v52 = 31 - a2[1];
  }
  v53 = *a2 << v52;
  v54 = nn_codec_FDK_get_plt(a2 + 2, v52);
  v55 = a2[1];
  v10 = v53 | v54;
  *a2 = v10;
  v23 = v55 + v52;
  if (v23 > 7) {
  LABEL_54:
    v23 -= 8;
    v11 = 12;
    a2[1] = v23;
    if (v23 > 1) {
      goto LABEL_129;
    }
    goto LABEL_125;
  }
  v11 = 12;
  *(_QWORD*)a2 = (unsigned int)((_DWORD)v10 << (8 - v23));
LABEL_125:
  v107 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (31 - a2[1] >= v107) {
    v108 = v107;
  }
  else {
    v108 = 31 - a2[1];
  }
  v109 = *a2 << v108;
  v110 = nn_codec_FDK_get_plt(a2 + 2, v108);
  v111 = a2[1];
  v10 = v109 | v110;
  *a2 = v10;
  v23 = v111 + v108;
  if (v23 == 0) {
    *(_QWORD*)a2 = (unsigned int)(2 * v10);
    if ((v9 & (2 * (_DWORD)v10)) != 0) {
    LABEL_133:
      v113 = nn_codec_FDK_getValidBits_plt(a2 + 2);
      if (31 - a2[1] >= v113) {
        v114 = v113;
      }
      else {
        v114 = 31 - a2[1];
      }
      v115 = *a2 << v114;
      v116 = nn_codec_FDK_get_plt(a2 + 2, v114);
      v117 = a2[1];
      v10 = v115 | v116;
      *a2 = v10;
      v112 = v117 + v114;
      if (v112 <= 6) {
        *(_QWORD*)a2 = (unsigned int)((_DWORD)v10 << (7 - v112));
        v11 += 8;
        goto LABEL_146;
      }
    LABEL_138:
      v118 = v112 - 7;
      v11 += 8;
      a2[1] = v112 - 7;
      if (v112 - 7 <= 1) {
        goto LABEL_146;
      }
      while (1) {
      LABEL_153:
        v112 = v118 - 1;
        a2[1] = v118 - 1;
        if ((((unsigned int)v10 >> (v118 - 1)) & v9) == 0) {
          goto LABEL_154;
        }
        if (v112 > 7) {
          goto LABEL_152;
        }
        while (1) {
          v119 = nn_codec_FDK_getValidBits_plt(a2 + 2);
          if (31 - a2[1] >= v119) {
            v120 = v119;
          }
          else {
            v120 = 31 - a2[1];
          }
          v121 = *a2 << v120;
          v122 = nn_codec_FDK_get_plt(a2 + 2, v120);
          v123 = a2[1];
          v10 = v121 | v122;
          *a2 = v10;
          v112 = v123 + v120;
          if (v112 <= 6) {
            v11 += 8;
            *(_QWORD*)a2 = (unsigned int)((_DWORD)v10 << (7 - v112));
            goto LABEL_146;
          }
        LABEL_152:
          v118 = v112 - 7;
          v11 += 8;
          a2[1] = v112 - 7;
          if (v112 - 7 > 1) {
            break;
          }
        LABEL_146:
          v124 = nn_codec_FDK_getValidBits_plt(a2 + 2);
          if (31 - a2[1] >= v124) {
            v125 = v124;
          }
          else {
            v125 = 31 - a2[1];
          }
          v126 = *a2 << v125;
          v127 = nn_codec_FDK_get_plt(a2 + 2, v125);
          v128 = a2[1];
          v10 = v126 | v127;
          *a2 = v10;
          v118 = v128 + v125;
          if (v128 + v125 != 0) {
            goto LABEL_153;
          }
          *(_QWORD*)a2 = (unsigned int)(2 * v10);
          if ((v9 & (2 * (_DWORD)v10)) == 0) {
            goto LABEL_155;
          }
        }
      }
    }
    goto LABEL_155;
  }
LABEL_129:
  v112 = v23 - 1;
  a2[1] = v112;
  if ((((unsigned int)v10 >> v112) & v9) != 0) {
    if (v112 > 7) {
      goto LABEL_138;
    }
    goto LABEL_133;
  }
LABEL_154:
  if (v112 > 1) {
    goto LABEL_159;
  }
LABEL_155:
  v129 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (31 - a2[1] >= v129) {
    v130 = v129;
  }
  else {
    v130 = 31 - a2[1];
  }
  v131 = *a2 << v130;
  v132 = nn_codec_FDK_get_plt(a2 + 2, v130);
  v133 = a2[1];
  v10 = v131 | v132;
  *a2 = v10;
  v112 = v133 + v130;
  if (v112 != 0) {
  LABEL_159:
    v134 = v112 - 1;
    a2[1] = v134;
    if ((((unsigned int)v10 >> v134) & v9) != 0) {
      v135 = *(_DWORD*)((char*)((__int64*)0xCLL) + (_QWORD)v7 + 4);
      if (v134 > 4) {
        goto LABEL_171;
      }
      goto LABEL_166;
    }
    v136 = 1;
    if (v134 > 1) {
      goto LABEL_195;
    }
    goto LABEL_191;
  }
  *(_QWORD*)a2 = (unsigned int)(2 * v10);
  if ((v9 & (2 * (_DWORD)v10)) != 0) {
    v135 = *(_DWORD*)((char*)((__int64*)0xCLL) + (_QWORD)v7 + 4);
  LABEL_166:
    v137 = nn_codec_FDK_getValidBits_plt(a2 + 2);
    if (31 - a2[1] >= v137) {
      v138 = v137;
    }
    else {
      v138 = 31 - a2[1];
    }
    v139 = *a2 << v138;
    v140 = nn_codec_FDK_get_plt(a2 + 2, v138);
    v141 = a2[1];
    v10 = v139 | v140;
    *a2 = v10;
    v134 = v141 + v138;
    if (v134 <= 3) {
      v142 = (_DWORD)v10 << (4 - v134);
      *a2 = v142;
      a2[1] = 0;
      v136 = v142 & v135 | 1;
    LABEL_172:
      v144 = nn_codec_FDK_getValidBits_plt(a2 + 2);
      if (31 - a2[1] >= v144) {
        v145 = v144;
      }
      else {
        v145 = 31 - a2[1];
      }
      v146 = *a2 << v145;
      v147 = nn_codec_FDK_get_plt(a2 + 2, v145);
      v148 = a2[1];
      v10 = v146 | v147;
      *a2 = v10;
      v143 = v148 + v145;
      if (v148 + v145 <= 3) {
        v134 = 0;
        v10 = (unsigned int)((_DWORD)v10 << (4 - v143));
        *(_QWORD*)a2 = (unsigned int)v10;
        if (v136 < 1) {
          goto LABEL_177;
        }
        goto LABEL_180;
      }
    LABEL_179:
      v134 = v143 - 4;
      a2[1] = v143 - 4;
      if (v136 < 1) {
      LABEL_177:
        v11 += 8;
        if (v134 > 1) {
          goto LABEL_195;
        }
        goto LABEL_191;
      }
    LABEL_180:
      for (i = v136; i != 0; --i) {
        while (1) {
          if (v134 <= 8) {
            v150 = nn_codec_FDK_getValidBits_plt(a2 + 2);
            v151 = 31 - a2[1] >= v150 ? v150 : 31 - a2[1];
            v152 = *a2 << v151;
            v153 = nn_codec_FDK_get_plt(a2 + 2, v151);
            v154 = a2[1];
            v10 = v152 | v153;
            *a2 = v10;
            v134 = v154 + v151;
            if (v134 <= 7) {
              break;
            }
          }
          v134 -= 8;
          --i;
          a2[1] = v134;
          if (i == 0) {
            goto LABEL_188;
          }
        }
        v155 = 8 - v134;
        v134 = 0;
        v10 = (unsigned int)((_DWORD)v10 << v155);
        *(_QWORD*)a2 = (unsigned int)v10;
      }
    LABEL_188:
      v11 += 8 * v136 + 8;
      if (v134 > 1) {
        goto LABEL_195;
      }
      goto LABEL_191;
    }
  LABEL_171:
    v143 = v134 - 4;
    a2[1] = v134 - 4;
    v136 = (((unsigned int)v10 >> (v134 - 4)) & v135) + 1;
    if (v134 - 4 > 4) {
      goto LABEL_179;
    }
    goto LABEL_172;
  }
  v136 = 1;
LABEL_191:
  v156 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (31 - a2[1] >= v156) {
    v157 = v156;
  }
  else {
    v157 = 31 - a2[1];
  }
  v158 = *a2 << v157;
  v159 = nn_codec_FDK_get_plt(a2 + 2, v157);
  v160 = a2[1];
  v10 = v158 | v159;
  *a2 = v10;
  v134 = v160 + v157;
  if (v134 == 0) {
    *(_QWORD*)a2 = (unsigned int)(2 * v10);
    if ((v9 & (2 * (_DWORD)v10)) == 0) {
      v161 = 0;
      v10 = (unsigned int)(2 * v10);
      if (v136 < 1) {
        goto LABEL_216;
      }
      goto LABEL_207;
    }
    goto LABEL_199;
  }
LABEL_195:
  v161 = v134 - 1;
  a2[1] = v134 - 1;
  if ((((unsigned int)v10 >> (v134 - 1)) & v9) == 0) {
    goto LABEL_206;
  }
  if (v161 > 8) {
    goto LABEL_204;
  }
LABEL_199:
  v162 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (31 - a2[1] >= v162) {
    v163 = v162;
  }
  else {
    v163 = 31 - a2[1];
  }
  v164 = *a2 << v163;
  v165 = nn_codec_FDK_get_plt(a2 + 2, v163);
  v166 = a2[1];
  v10 = v164 | v165;
  *a2 = v10;
  v161 = v166 + v163;
  if (v166 + v163 > 7) {
  LABEL_204:
    v161 -= 8;
    goto LABEL_205;
  }
  v167 = 8 - v161;
  v161 = 0;
  v10 = (unsigned int)((_DWORD)v10 << v167);
  *a2 = v10;
LABEL_205:
  v11 += 8;
  a2[1] = v161;
LABEL_206:
  if (v136 < 1) {
    goto LABEL_216;
  }
LABEL_207:
  for (j = v136; j != 0; --j) {
    while (1) {
      if (v161 <= 8) {
        v169 = nn_codec_FDK_getValidBits_plt(a2 + 2);
        v170 = 31 - a2[1] >= v169 ? v169 : 31 - a2[1];
        v171 = *a2 << v170;
        v172 = nn_codec_FDK_get_plt(a2 + 2, v170);
        v173 = a2[1];
        v10 = v171 | v172;
        *a2 = v10;
        v161 = v173 + v170;
        if (v173 + v170 <= 7) {
          break;
        }
      }
      v161 -= 8;
      --j;
      a2[1] = v161;
      if (j == 0) {
        goto LABEL_215;
      }
    }
    v174 = 8 - v161;
    v161 = 0;
    v10 = (unsigned int)((_DWORD)v10 << v174);
    *(_QWORD*)a2 = (unsigned int)v10;
  }
LABEL_215:
  v11 += 8 * v136;
LABEL_216:
  if (*(unsigned __int16*)(a1 + 26) <= 2u) {
    if (a2[12] != 0) {
      nn_codec_FDK_put_plt(a2 + 2, v10);
      *(_QWORD*)a2 = 0;
      if ((nn_codec_FDK_getValidBits_plt(a2 + 2) & 0x80000000) != 0) {
        return v11;
      }
      goto LABEL_221;
    }
    nn_codec_FDK_pushBack_plt(a2 + 2, v161, 0);
    *(_QWORD*)a2 = 0;
    if ((nn_codec_FDK_getValidBits_plt(a2 + 2) & 0x80000000) == 0) {
    LABEL_221:
      v175 = *(unsigned __int16*)(a1 + 26);
      *(_WORD*)(a1 + 26) = v175 + 1;
      *(_DWORD*)(a1 + 4 * v175 + 44) = v176;
    }
  }
  return v11;
}

unsigned __int64 nn_codec_aacDecoder_drcApply(unsigned __int64 result,
                                              __int64 a2, __int64* a3,
                                              __int64 a4, int* a5,
                                              unsigned int a6, int a7, int a8)
{
  __int64 v8;
  unsigned int v9;
  _WORD* v13;
  unsigned __int64 v14;
  unsigned int v15;
  int v16;
  _WORD* v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;
  unsigned int v22;
  int v23;
  bool v24;
  char v25;
  int v26;
  int v27;
  int v28;
  int v29;
  __int64 v30;
  unsigned __int8* v31;
  int* v32;
  __int64* v33;
  int v34;
  int v35;
  int v36;
  unsigned int v37;
  unsigned int v38;
  int v40;
  __int64 v41;
  __int64 v42;
  signed int v43;
  __int64 v44;
  int v45;
  __int64 v46;
  int* v47;
  signed int* v48;
  int v49;
  signed int v50;
  signed int v51;
  int v52;
  int v53;
  int* v54;
  signed int* v55;
  signed int v56;
  signed int v57;
  unsigned int v58;
  int v59;
  signed int v60;
  __int64 v61;
  __int64 v62;
  bool v63;
  __int64 v64;
  _DWORD* v65;
  _DWORD* v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  _DWORD* v75;
  _DWORD* v76;
  __int64 v77;
  __int64 v78;
  int v79;
  __int64 v80;
  __int64* v81;
  int* v82;
  int v83;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int* v99;
  int* v100;
  int v101;
  int v102;
  char v103;
  int v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  int v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  int* v113;
  int v114;
  int v115;
  int v116;
  unsigned __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  int* v121;
  int v122;
  int v123;
  int v124;
  int v125;
  __int64 v126;
  unsigned int v127;
  _WORD* v128;
  int v132;
  __int64 v133;
  __int64 v134;
  _QWORD v135[6];
  __int64 v136;
  __int64 v137;
  _QWORD v138[6];
  int v139[3];

  v8 = *a3;
  v9 = *((unsigned __int8*)a3 + 35);
  v13 = a3;
  v14 = result;
  v139[0] = 1;
  if (*(_DWORD*)(result + 16) != 0) {
    v15 = *(_DWORD*)a4 + 1;
    *(_DWORD*)a4 = v15;
    if (v15 > *(_DWORD*)(result + 16)) {
      *(_BYTE*)(a4 + 42) = 0;
      *(_WORD*)(a4 + 40) = 0;
      *(_BYTE*)(a4 + 58) = 0;
      *(_QWORD*)a4 = 0x100000000LL;
      *(_WORD*)(a4 + 8) = 255;
    }
  }
  if (*(_BYTE*)(result + 24) == 0) {
    result = nn_codec_sbrDecoder_drcDisable_plt(a2, a6);
    if (a5 != nullptr) {
      v21 = *a5;
      if ((unsigned int)*a5 <= 0x20) {
        if (v21 != 0) {
          v22 = 0x40000000u >> (v21 - 1);
        }
        else {
          v22 = 0x80000000;
        }
        *a5 = v22;
      }
    }
    return result;
  }
  v17 = (_WORD*)(a4 + 8);
  v16 = *(unsigned __int16*)(a4 + 8);
  v18 = *(unsigned int*)(a4 + 4);
  memset(v138, 0, sizeof(v138));
  v136 = 0;
  v137 = 0;
  v133 = 0;
  v134 = 0;
  memset(v135, 0, sizeof(v135));
  if (v16 >= (a7 >> 2) - 1) {
    LOWORD(v16) = (a7 >> 2) - 1;
  }
  *v17 = v16;
  v19 = *(char*)(result + 20);
  if (v19 < 0) {
    v20 = 0x40000000;
    if (a5 == nullptr) {
      goto LABEL_21;
    }
  }
  else {
    result = nn_codec_fLdPow_plt_8666f0(
        0x80000000LL, 0,
        (unsigned int)(11184810 * (v19 - *(char*)(result + 30))), 3, v139);
    v20 = result;
    if (a5 == nullptr) {
      goto LABEL_21;
    }
  }
  v23 = *a5;
  if ((unsigned int)*a5 <= 0x20) {
    v24 = __OFSUB__(v139[0], v23);
    v26 = v139[0] - v23;
    v25 = (v26 < 0) ^ v24 | (v26 == 0);
    v27 = v20 << v26;
    v28 = v20 >> -(char)v26;
    if (!v25) {
      v28 = v27;
    }
    *a5 = v28;
  }
LABEL_21:
  if (*(_BYTE*)(v14 + 22) == 0) {
    v20 = 0x40000000;
    v139[0] = 1;
    v29 = v18 - 1;
    if ((int)v18 >= 1) {
      goto LABEL_23;
    }
  LABEL_42:
    v45 = a8;
    v44 = 0;
    v43 = 0;
    goto LABEL_86;
  }
  v29 = v18 - 1;
  if ((int)v18 < 1) {
    goto LABEL_42;
  }
LABEL_23:
  v128 = v13;
  v30 = v18;
  v31 = (unsigned __int8*)(a4 + 42);
  v32 = (int*)&v133;
  v33 = &v136;
  v127 = v9;
  v126 = v30;
  do {
    v35 = *(unsigned __int8*)(v14 + 23);
    v36 = *(unsigned __int8*)(a4 + 58);
    v38 = *v31++;
    v37 = v38;
    *v32 = 1;
    if (v35 != 0 && v36 == 2) {
      v132 = 0;
      if (v37 == 127) {
        goto LABEL_24;
      }
      result = ((unsigned __int64)(2147285867LL *
                                   (int)nn_codec_fPowInt_plt(
                                       2050500434, 0, v37 & 0xF, &v132)) >>
                31) &
               0xFFFFFFFE;
      v34 = v132 - (v37 >> 4) + 8;
    }
    else {
      if (v36 != 1 || (v37 & 0x7F) == 0) {
      LABEL_24:
        result = 0x40000000;
        v34 = 1;
        goto LABEL_25;
      }
      if ((v37 & 0x80) != 0) {
        v40 = -*(_DWORD*)v14;
      }
      else {
        v40 = *(_DWORD*)(v14 + 8);
      }
      result = nn_codec_f2Pow_plt(
          (((unsigned __int64)(11184811LL * v40) >> 31) & 0xFFFFFFFE) *
              (v37 & 0x7F),
          4, v32);
      v34 = *v32;
    }
  LABEL_25:
    --v30;
    *(_DWORD*)v33 =
        ((unsigned __int64)(v20 * (__int64)(int)result) >> 31) & 0xFFFFFFFE;
    v33 = (__int64*)((char*)v33 + 4);
    *v32++ = v34 + v139[0];
  } while (v30 != 0);
  v18 = v126;
  v41 = v126 & 7;
  if ((unsigned int)v126 >= 8) {
    v13 = v128;
    v9 = v127;
    v17 = (_WORD*)(a4 + 8);
    v46 = 0;
    v43 = 0;
    LODWORD(v44) = 0;
    v45 = a8;
    v47 = (int*)v135;
    v48 = (signed int*)v138;
    do {
      v46 -= 8;
      if (v43 <= *(v48 - 4)) {
        v43 = *(v48 - 4);
      }
      v49 = *(v47 - 4);
      if ((int)v44 > v49) {
        v49 = v44;
      }
      if (v43 <= *(v48 - 3)) {
        v43 = *(v48 - 3);
      }
      if (v49 <= *(v47 - 3)) {
        v49 = *(v47 - 3);
      }
      if (v43 <= *(v48 - 2)) {
        v43 = *(v48 - 2);
      }
      if (v49 <= *(v47 - 2)) {
        v49 = *(v47 - 2);
      }
      if (v43 <= *(v48 - 1)) {
        v43 = *(v48 - 1);
      }
      if (v49 <= *(v47 - 1)) {
        v49 = *(v47 - 1);
      }
      if (v43 <= *v48) {
        v43 = *v48;
      }
      if (v49 <= *v47) {
        v49 = *v47;
      }
      if (v43 <= v48[1]) {
        v43 = v48[1];
      }
      v50 = v48[2];
      v51 = v48[3];
      v48 += 8;
      if (v49 <= v47[1]) {
        v49 = v47[1];
      }
      if (v43 <= v50) {
        v43 = v50;
      }
      v52 = v47[2];
      v53 = v47[3];
      v47 += 8;
      if (v49 <= v52) {
        v49 = v52;
      }
      if (v43 <= v51) {
        v43 = v51;
      }
      if (v49 <= v53) {
        v44 = (unsigned int)v53;
      }
      else {
        v44 = (unsigned int)v49;
      }
    } while (-(v126 & 0x7FFFFFF8) != v46);
    v42 = -v46;
    if ((v126 & 7) != 0) {
      goto LABEL_79;
    }
  }
  else {
    v13 = v128;
    v9 = v127;
    v17 = (_WORD*)(a4 + 8);
    v42 = 0;
    v43 = 0;
    v44 = 0;
    v45 = a8;
    if ((v126 & 7) == 0) {
      goto LABEL_86;
    }
  LABEL_79:
    v54 = (int*)&v133 + v42;
    v55 = (signed int*)&v136 + v42;
    do {
      v57 = *v55++;
      v56 = v57;
      if (v43 <= v57) {
        v43 = v56;
      }
      v59 = *v54++;
      v58 = v59;
      if ((int)v44 <= v59) {
        v44 = v58;
      }
      else {
        v44 = (unsigned int)v44;
      }
      --v41;
    } while (v41 != 0);
  }
LABEL_86:
  v60 = __clz(v43) - 1;
  if (4 * (unsigned __int16)v17[v29] + 4 < a7) {
    v60 = 0;
  }
  if (v60 < 1) {
    if ((int)v18 > 0) {
      goto LABEL_106;
    }
  LABEL_96:
    v63 = true;
    if (v45 != 0) {
      return nn_codec_sbrDecoder_drcFeedChannel_plt(
          a2, a6, *(unsigned int*)(a4 + 4), &v136, v44,
          *(unsigned __int16*)(a4 + 40), v9, v17);
    }
    goto LABEL_97;
  }
  if (v60 >= (int)v44) {
    v60 = v44;
  }
  v44 = (unsigned int)(v44 - v60);
  if ((int)v18 < 1) {
    goto LABEL_96;
  }
  v61 = v18 & 7;
  if ((unsigned int)v18 >= 8) {
    v64 = 0;
    v65 = v135;
    v66 = v138;
    do {
      v64 -= 8;
      v67 = *(v66 - 3) << v60;
      *(v66 - 4) <<= v60;
      *(v66 - 3) = v67;
      v68 = *(v65 - 3) - v60;
      *(v65 - 4) -= v60;
      *(v65 - 3) = v68;
      v69 = *(v66 - 1) << v60;
      *(v66 - 2) <<= v60;
      *(v66 - 1) = v69;
      v70 = *(v65 - 1) - v60;
      *(v65 - 2) -= v60;
      *(v65 - 1) = v70;
      v71 = v66[1] << v60;
      *v66 <<= v60;
      v66[1] = v71;
      v72 = v65[1] - v60;
      *v65 -= v60;
      v65[1] = v72;
      v73 = v65[3] - v60;
      v65[2] -= v60;
      v65[3] = v73;
      v65 += 8;
      v74 = v66[3] << v60;
      v66[2] <<= v60;
      v66[3] = v74;
      v66 += 8;
    } while (-(v18 & 0x7FFFFFF8) != v64);
    v62 = -v64;
    if ((v18 & 7) != 0) {
      goto LABEL_104;
    }
  }
  else {
    v62 = 0;
    if ((v18 & 7) == 0) {
      goto LABEL_106;
    }
  LABEL_104:
    v75 = (_DWORD*)&v133 + v62;
    v76 = (_DWORD*)&v136 + v62;
    do {
      --v61;
      *v76++ <<= v60;
      *v75++ -= v60;
    } while (v61 != 0);
  }
LABEL_106:
  v77 = v18 & 3;
  if ((unsigned int)(v18 - 1) >= 3) {
    v80 = 0;
    v79 = 0;
    v81 = &v134;
    v82 = (int*)&v137;
    while (1) {
      v87 = *((_DWORD*)v81 - 2);
      v24 = __OFSUB__((_DWORD)v44, v87);
      v88 = v44 - v87;
      if ((v88 < 0) ^ v24 | (v88 == 0)) {
        v89 = *(v82 - 2);
        v97 = *((_DWORD*)v81 - 1);
        v24 = __OFSUB__((_DWORD)v44, v97);
        v91 = v44 - v97;
        if ((v91 < 0) ^ v24 | (v91 == 0)) {
        LABEL_126:
          v92 = *(v82 - 1);
          v93 = v44 - *(_DWORD*)v81;
          if ((int)v44 <= (signed __int32)*(_DWORD*)v81) {
            goto LABEL_127;
          }
          goto LABEL_132;
        }
      }
      else {
        v89 = *(v82 - 2) >> v88;
        *(v82 - 2) = v89;
        v90 = *((_DWORD*)v81 - 1);
        v24 = __OFSUB__((_DWORD)v44, v90);
        v91 = v44 - v90;
        if ((v91 < 0) ^ v24 | (v91 == 0)) {
          goto LABEL_126;
        }
      }
      v92 = *(v82 - 1) >> v91;
      *(v82 - 1) = v92;
      v93 = v44 - *(_DWORD*)v81;
      if ((int)v44 <= (signed __int32)*(_DWORD*)v81) {
      LABEL_127:
        v94 = *v82;
        v95 = *((_DWORD*)v81 + 1);
        v24 = __OFSUB__((_DWORD)v44, v95);
        v96 = v44 - v95;
        if ((v96 < 0) ^ v24 | (v96 == 0)) {
          goto LABEL_134;
        }
        goto LABEL_110;
      }
    LABEL_132:
      v94 = *v82 >> v93;
      *v82 = v94;
      v98 = *((_DWORD*)v81 + 1);
      v24 = __OFSUB__((_DWORD)v44, v98);
      v96 = v44 - v98;
      if ((v96 < 0) ^ v24 | (v96 == 0)) {
      LABEL_134:
        v83 = v82[1];
        goto LABEL_111;
      }
    LABEL_110:
      result = (unsigned int)v82[1];
      v83 = (int)result >> v96;
      v82[1] = v83;
    LABEL_111:
      v80 -= 4;
      v81 += 2;
      v82 += 4;
      if (v89 != 0x40000000 || v92 != 0x40000000 || v94 != 0x40000000 ||
          v83 != 0x40000000) {
        v79 = 1;
      }
      if (-(__int64)((unsigned int)v18 & 0xFFFFFFFC) == v80) {
        v78 = -v80;
        if ((v18 & 3) != 0) {
          goto LABEL_136;
        }
        goto LABEL_144;
      }
    }
  }
  v78 = 0;
  v79 = 0;
  if ((v18 & 3) != 0) {
  LABEL_136:
    v99 = (int*)&v136 + v78;
    v100 = (int*)&v133 + v78;
    do {
      while (1) {
        v102 = *v100++;
        v103 = v44 - v102;
        if ((int)v44 > v102) {
          break;
        }
        v104 = *v99++;
        if (v104 != 0x40000000) {
          v79 = 1;
        }
        if (--v77 == 0) {
          goto LABEL_144;
        }
      }
      v101 = *v99 >> v103;
      *v99++ = v101;
      if (v101 != 0x40000000) {
        v79 = 1;
      }
      --v77;
    } while (v77 != 0);
  }
LABEL_144:
  v63 = v79 == 0;
  if (v45 != 0) {
    return nn_codec_sbrDecoder_drcFeedChannel_plt(
        a2, a6, *(unsigned int*)(a4 + 4), &v136, v44,
        *(unsigned __int16*)(a4 + 40), v9, v17);
  }
LABEL_97:
  if ((_DWORD)v44 == 1 && v63) {
    LOWORD(v44) = 0;
    goto LABEL_99;
  }
  if ((int)v18 >= 1) {
    v105 = 0;
    LODWORD(v106) = 0;
    while (1) {
      LODWORD(v107) = 4 * (unsigned __int16)v17[v105] + 4;
      if ((int)v107 >= a7) {
        LODWORD(v107) = a7;
      }
      if ((int)v106 < (int)v107) {
        v108 = *((_DWORD*)&v136 + v105);
        v109 = (int)v106;
        v110 = ((int)v107 - (int)v106) & 7LL;
        if (v110 != 0) {
          break;
        }
        v106 = (int)v106;
        v111 = (int)v107;
        if ((unsigned __int64)((int)v106 - (__int64)(int)v107) <=
            0xFFFFFFFFFFFFFFF8LL) {
          goto LABEL_159;
        }
      }
    LABEL_149:
      ++v105;
      LODWORD(v106) = v107;
      if (v105 == v18) {
        goto LABEL_163;
      }
    }
    v106 = (int)v106;
    do {
      --v110;
      *(_DWORD*)(v8 + 4 * v106) =
          ((unsigned __int64)(v108 * (__int64)*(int*)(v8 + 4 * v106)) >> 31) &
          0xFFFFFFFE;
      ++v106;
    } while (v110 != 0);
    v111 = (int)v107;
    if ((unsigned __int64)(v109 - (int)v107) > 0xFFFFFFFFFFFFFFF8LL) {
      goto LABEL_149;
    }
  LABEL_159:
    v112 = v111 - v106;
    v113 = (int*)(v8 + 16 + 4 * v106);
    do {
      v112 -= 8;
      v114 =
          ((unsigned __int64)(v108 * (__int64)*(v113 - 3)) >> 31) & 0xFFFFFFFE;
      *(v113 - 4) =
          ((unsigned __int64)(v108 * (__int64)*(v113 - 4)) >> 31) & 0xFFFFFFFE;
      *(v113 - 3) = v114;
      v115 =
          ((unsigned __int64)(v108 * (__int64)*(v113 - 1)) >> 31) & 0xFFFFFFFE;
      *(v113 - 2) =
          ((unsigned __int64)(v108 * (__int64)*(v113 - 2)) >> 31) & 0xFFFFFFFE;
      *(v113 - 1) = v115;
      v116 = ((unsigned __int64)(v108 * (__int64)v113[1]) >> 31) & 0xFFFFFFFE;
      *v113 = ((unsigned __int64)(v108 * (__int64)*v113) >> 31) & 0xFFFFFFFE;
      v113[1] = v116;
      v117 = ((unsigned __int64)(v108 * (__int64)v113[3]) >> 31) & 0xFFFFFFFE;
      v113[2] =
          ((unsigned __int64)(v108 * (__int64)v113[2]) >> 31) & 0xFFFFFFFE;
      v113[3] = v117;
      v113 += 8;
    } while (v112 != 0);
    goto LABEL_149;
  }
  LODWORD(v107) = 0;
LABEL_163:
  if ((int)v44 >= 1 && (int)v107 < a7) {
    v118 = (int)v107;
    v119 = (a7 - (int)v107) & 7LL;
    if (v119 != 0) {
      v107 = (int)v107;
      do {
        --v119;
        *(int*)(v8 + 4 * v107++) >>= v44;
      } while (v119 != 0);
      if ((unsigned __int64)(v118 - a7) <= 0xFFFFFFFFFFFFFFF8LL) {
        goto LABEL_171;
      }
    }
    else {
      v107 = (int)v107;
      if ((unsigned __int64)((int)v107 - (__int64)a7) > 0xFFFFFFFFFFFFFFF8LL) {
        goto LABEL_99;
      }
    LABEL_171:
      v120 = a7 - v107;
      v121 = (int*)(v8 + 4 * v107 + 16);
      do {
        v120 -= 8;
        v122 = *(v121 - 3) >> v44;
        *(v121 - 4) >>= v44;
        *(v121 - 3) = v122;
        v123 = *(v121 - 1) >> v44;
        *(v121 - 2) >>= v44;
        *(v121 - 1) = v123;
        v124 = v121[1] >> v44;
        *v121 >>= v44;
        v121[1] = v124;
        v125 = v121[3] >> v44;
        v121[2] >>= v44;
        v121[3] = v125;
        v121 += 8;
      } while (v120 != 0);
    }
  }
LABEL_99:
  v13[4] += v44;
  if (v9 == 2) {
    v13[5] += v44;
    v13[6] += v44;
    v13[7] += v44;
    v13[8] += v44;
    v13[9] += v44;
    v13[10] += v44;
    v13[11] += v44;
  }
  return result;
}

#pragma GCC visibility pop
