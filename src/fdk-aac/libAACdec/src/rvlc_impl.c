#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memset_plt(void* this_, void*, int);
__int64 nn_codec_BidirectionalEstimation_UseLowerScfOfCurrentFrame_plt(_QWORD);
__int64
    nn_codec_BidirectionalEstimation_UseScfOfPrevFrameAsReference_plt(_QWORD,
                                                                      _QWORD);
__int64 nn_codec_CarryBitToBranchValue_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDK_getBitCnt_plt(_QWORD);
__int64 nn_codec_FDK_getValidBits_plt(_QWORD);
__int64 nn_codec_FDK_get_plt(_QWORD, _QWORD);
__int64 nn_codec_FDK_pushBack_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDK_pushForward_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDK_put_plt(_QWORD, _QWORD);
__int64 nn_codec_PredictiveInterpolation_plt(_QWORD, _QWORD);
__int64 nn_codec_StatisticalEstimation_plt(_QWORD);
__int64 nn_codec_decodeRVLCodeword_plt(_QWORD, _QWORD);
__int64 nn_codec_rvlcReadBitFromBitstream_plt(_QWORD, _QWORD, _QWORD);
extern __int64 SdkData_e87c28;
extern __int64 SdkData_e87c30;
extern void (*SdkData_e87a50[778])();
unsigned int* nn_codec_FDKpushBiDirectional(unsigned int* result, unsigned int);
__int64 nn_codec_CRvlc_Read(__int64 result, int* a2);
unsigned int* nn_codec_CRvlc_Decode(__int64 a1, __int64 a2, unsigned int* a3);

__int64 nn_codec_CRvlc_Read(__int64 result, int* a2)
{
  __int64 v2;
  __int64 v4;
  char v5;
  void(__attribute__((noreturn)) * v6)();
  unsigned int v7;
  int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  int v13;
  unsigned int v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  unsigned int v19;
  unsigned int v20;
  int v21;
  int v22;
  int v23;
  unsigned int v24;
  int v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  int v30;
  int v31;
  char v32;
  unsigned int v33;
  unsigned int v34;
  unsigned int v35;
  int v36;
  int v37;
  int v38;
  unsigned int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int8* v46;
  int v47;
  int v48;
  unsigned int v49;
  unsigned int v50;
  unsigned int v51;
  unsigned int v52;
  int v53;
  int v54;
  unsigned int v55;
  unsigned int v56;
  unsigned int v57;
  unsigned int v58;
  unsigned int v59;
  unsigned int v60;
  int v61;
  int v62;
  unsigned int v63;
  int v64;
  unsigned int v65;
  unsigned int v66;
  unsigned int v67;
  unsigned int v68;
  int v69;
  int v70;
  unsigned int v71;
  unsigned int v72;
  int v73;
  unsigned int v74;
  unsigned int v75;
  __int16 v76;
  unsigned int v77;
  unsigned int v78;
  int v79;
  int v80;
  unsigned int v81;
  unsigned int v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  unsigned __int8* v89;
  int v90;
  __int64 v91;
  unsigned __int8* v92;
  int v93;
  __int64 v94;
  unsigned __int8* v95;
  int v96;
  __int64 v97;
  unsigned __int8* v98;
  unsigned int v99;
  int v100;
  int v101;

  v2 = *(_QWORD*)(result + 224);
  v4 = result;
  *(_BYTE*)(v2 + 14248) = *(_BYTE*)(result + 32);
  v5 = *(_BYTE*)(result + 36);
  *(_BYTE*)(v2 + 14283) = 0;
  *(_DWORD*)(v2 + 14204) = 0;
  *(_DWORD*)(v2 + 14216) = 0;
  *(_BYTE*)(v2 + 14249) = v5;
  *(_WORD*)(v2 + 14212) = -1;
  v6 = SdkData_e87a50[0];
  v7 = a2[1];
  v8 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                  (unsigned __int64)((__int64*)0x4LL));
  if (v7 < 2) {
    v10 = nn_codec_FDK_getValidBits_plt(a2 + 2);
    if (31 - a2[1] >= v10) {
      v11 = v10;
    }
    else {
      v11 = 31 - a2[1];
    }
    v12 = *a2 << v11;
    result = nn_codec_FDK_get_plt(a2 + 2, v11);
    v13 = a2[1];
    v9 = v12 | result;
    *a2 = v12 | result;
    v7 = v13 + v11;
    if (v7 == 0) {
      v18 = 2 * v9;
      *a2 = v18;
      a2[1] = 0;
      v15 = *(_DWORD*)&(*(_BYTE(*)[4])0x20LL)[(_QWORD)v6];
      *(_DWORD*)(v2 + 14192) = v18 & v8;
      v16 = a2[1];
      if (v16 >= 9) {
        goto LABEL_8;
      }
      goto LABEL_10;
    }
  }
  else {
    v9 = *a2;
  }
  v14 = v7 - 1;
  a2[1] = v14;
  v15 = *(_DWORD*)&(*(_BYTE(*)[4])0x20LL)[(_QWORD)v6];
  *(_DWORD*)(v2 + 14192) = (v9 >> v14) & v8;
  v16 = a2[1];
  if (v16 >= 9) {
  LABEL_8:
    v17 = *a2;
    goto LABEL_17;
  }
LABEL_10:
  v19 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (31 - a2[1] >= v19) {
    v20 = v19;
  }
  else {
    v20 = 31 - a2[1];
  }
  v21 = *a2 << v20;
  result = nn_codec_FDK_get_plt(a2 + 2, v20);
  v22 = a2[1];
  v17 = v21 | result;
  *a2 = v21 | result;
  v16 = v22 + v20;
  if (v16 <= 7) {
    v23 = v17 << (8 - v16);
    *a2 = v23;
    a2[1] = 0;
    *(_DWORD*)(v2 + 14196) = v23 & v15;
    v24 = a2[1];
    if (*(_BYTE*)(v4 + 35) == 2) {
      goto LABEL_18;
    }
  LABEL_15:
    v25 = *(int*)((char*)((int*)0x24LL) + (_QWORD)v6);
    if (v24 < 0xA) {
      v28 = nn_codec_FDK_getValidBits_plt(a2 + 2);
      if (31 - a2[1] >= v28) {
        v29 = v28;
      }
      else {
        v29 = 31 - a2[1];
      }
      v30 = *a2 << v29;
      result = nn_codec_FDK_get_plt(a2 + 2, v29);
      v31 = a2[1];
      v26 = v30 | result;
      *a2 = v30 | result;
      v24 = v31 + v29;
      if (v24 <= 8) {
        v32 = 9;
        goto LABEL_31;
      }
    }
    else {
      v26 = *a2;
    }
    v33 = v24 - 9;
    goto LABEL_34;
  }
LABEL_17:
  v27 = v16 - 8;
  a2[1] = v27;
  *(_DWORD*)(v2 + 14196) = (v17 >> v27) & v15;
  v24 = a2[1];
  if (*(_BYTE*)(v4 + 35) != 2) {
    goto LABEL_15;
  }
LABEL_18:
  v25 = *(_DWORD*)((char*)((__int64*)0x28LL) + (_QWORD)v6 + 4);
  if (v24 < 0xC) {
    v34 = nn_codec_FDK_getValidBits_plt(a2 + 2);
    if (31 - a2[1] >= v34) {
      v35 = v34;
    }
    else {
      v35 = 31 - a2[1];
    }
    v36 = *a2 << v35;
    result = nn_codec_FDK_get_plt(a2 + 2, v35);
    v37 = a2[1];
    v26 = v36 | result;
    *a2 = v36 | result;
    v24 = v37 + v35;
    if (v24 > 0xA) {
      goto LABEL_33;
    }
    v32 = 11;
  LABEL_31:
    v38 = v26 << (v32 - v24);
    *a2 = v38;
    a2[1] = 0;
    v39 = *(unsigned __int8*)(v2 + 14248);
    *(_WORD*)(v2 + 14200) = v38 & v25;
    if (v39 == 0) {
      goto LABEL_46;
    }
    goto LABEL_35;
  }
  v26 = *a2;
LABEL_33:
  v33 = v24 - 11;
LABEL_34:
  a2[1] = v33;
  v39 = *(unsigned __int8*)(v2 + 14248);
  *(_WORD*)(v2 + 14200) = (v26 >> v33) & v25;
  if (v39 == 0) {
    goto LABEL_46;
  }
LABEL_35:
  v40 = *(unsigned __int8*)(v2 + 14249);
  if (*(_BYTE*)(v2 + 14249) != 0) {
    v41 = v39 & 3;
    if (v39 >= 4) {
      v83 = (unsigned __int8)v39 & 0xFC;
      v84 = 512;
      v85 = 528;
      v86 = 544;
      v42 = 0;
      v87 = 560;
      do {
        v88 = v40;
        v89 = (unsigned __int8*)(*(_QWORD*)(v4 + 216) + v84);
        while (1) {
          v90 = *v89++;
          if (v90 == 13) {
            break;
          }
          if (--v88 == 0) {
            goto LABEL_92;
          }
        }
        *(_BYTE*)(v2 + 14283) = 1;
      LABEL_92:
        v91 = v40;
        v92 = (unsigned __int8*)(*(_QWORD*)(v4 + 216) + v85);
        while (1) {
          v93 = *v92++;
          if (v93 == 13) {
            break;
          }
          if (--v91 == 0) {
            goto LABEL_97;
          }
        }
        *(_BYTE*)(v2 + 14283) = 1;
      LABEL_97:
        v94 = v40;
        v95 = (unsigned __int8*)(*(_QWORD*)(v4 + 216) + v86);
        while (1) {
          v96 = *v95++;
          if (v96 == 13) {
            break;
          }
          if (--v94 == 0) {
            goto LABEL_102;
          }
        }
        *(_BYTE*)(v2 + 14283) = 1;
      LABEL_102:
        v97 = v40;
        v98 = (unsigned __int8*)(*(_QWORD*)(v4 + 216) + v87);
        while (1) {
          v99 = *v98++;
          result = v99;
          if (v99 == 13) {
            break;
          }
          if (--v97 == 0) {
            goto LABEL_86;
          }
        }
        *(_BYTE*)(v2 + 14283) = 1;
      LABEL_86:
        v42 += 4;
        v84 += 64;
        v85 += 64;
        v86 += 64;
        v87 += 64;
      } while (v42 != v83);
    }
    else {
      v42 = 0;
    }
    if (v41 != 0) {
      v43 = 0;
      v44 = 16 * v42 + 512;
      do {
        v45 = v40;
        v46 = (unsigned __int8*)(*(_QWORD*)(v4 + 216) + v44);
        while (1) {
          v47 = *v46++;
          if (v47 == 13) {
            break;
          }
          if (--v45 == 0) {
            goto LABEL_41;
          }
        }
        *(_BYTE*)(v2 + 14283) = 1;
      LABEL_41:
        ++v43;
        v44 += 16;
      } while (v43 != v41);
    }
  }
LABEL_46:
  if (*(_BYTE*)(v2 + 14283) == 0) {
    goto LABEL_56;
  }
  v48 = *(int*)((char*)((int*)0x24LL) + (_QWORD)v6);
  v49 = a2[1];
  if (v49 >= 0xA) {
    v50 = *a2;
  LABEL_54:
    v56 = v49 - 9;
    a2[1] = v56;
    v55 = v50 >> v56;
    goto LABEL_55;
  }
  v51 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (31 - a2[1] >= v51) {
    v52 = v51;
  }
  else {
    v52 = 31 - a2[1];
  }
  v53 = *a2 << v52;
  result = nn_codec_FDK_get_plt(a2 + 2, v52);
  v54 = a2[1];
  v50 = v53 | result;
  *a2 = v53 | result;
  v49 = v54 + v52;
  if (v49 > 8) {
    goto LABEL_54;
  }
  v55 = v50 << (9 - v49);
  *(_QWORD*)a2 = v55;
LABEL_55:
  *(_DWORD*)(v2 + 14204) = v55 & v48;
LABEL_56:
  v57 = a2[1];
  if (v57 >= 2) {
    v58 = *a2;
    goto LABEL_62;
  }
  v59 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (31 - a2[1] >= v59) {
    v60 = v59;
  }
  else {
    v60 = 31 - a2[1];
  }
  v61 = *a2 << v60;
  result = nn_codec_FDK_get_plt(a2 + 2, v60);
  v62 = a2[1];
  v58 = v61 | result;
  *a2 = v61 | result;
  v57 = v62 + v60;
  if (v57 != 0) {
  LABEL_62:
    v63 = v57 - 1;
    a2[1] = v63;
    v64 = (v58 >> v63) & v8;
    *(_DWORD*)(v2 + 14208) = v64;
    if (v64 == 0) {
      goto LABEL_72;
    }
  LABEL_63:
    v65 = a2[1];
    if (v65 < 9) {
      v67 = nn_codec_FDK_getValidBits_plt(a2 + 2);
      if (31 - a2[1] >= v67) {
        v68 = v67;
      }
      else {
        v68 = 31 - a2[1];
      }
      v69 = *a2 << v68;
      result = nn_codec_FDK_get_plt(a2 + 2, v68);
      v70 = a2[1];
      v66 = v69 | result;
      *a2 = v69 | result;
      v65 = v70 + v68;
      if (v65 <= 7) {
        v71 = v66 << (8 - v65);
        *(_QWORD*)a2 = v71;
      LABEL_71:
        *(_WORD*)(v2 + 14212) = v71 & v15;
        goto LABEL_72;
      }
    }
    else {
      v66 = *a2;
    }
    v72 = v65 - 8;
    a2[1] = v72;
    v71 = v66 >> v72;
    goto LABEL_71;
  }
  v100 = 2 * v58;
  *a2 = v100;
  a2[1] = 0;
  v101 = v100 & v8;
  *(_DWORD*)(v2 + 14208) = v101;
  if (v101 != 0) {
    goto LABEL_63;
  }
LABEL_72:
  if (*(_BYTE*)(v2 + 14283) != 0) {
    v73 = *(int*)((char*)((int*)0x24LL) + (_QWORD)v6);
    v74 = a2[1];
    if (v74 < 0xA) {
      v77 = nn_codec_FDK_getValidBits_plt(a2 + 2);
      if (31 - a2[1] >= v77) {
        v78 = v77;
      }
      else {
        v78 = 31 - a2[1];
      }
      v79 = *a2 << v78;
      result = nn_codec_FDK_get_plt(a2 + 2, v78);
      v80 = a2[1];
      v75 = v79 | result;
      *a2 = v79 | result;
      v74 = v80 + v78;
      if (v74 <= 8) {
        v81 = v75 << (9 - v74);
        *(_QWORD*)a2 = v81;
      LABEL_82:
        *(_DWORD*)(v2 + 14216) = v81 & v73;
        v76 = *(_WORD*)(v2 + 14200) - 9;
        *(_WORD*)(v2 + 14200) = v76;
        goto LABEL_83;
      }
    }
    else {
      v75 = *a2;
    }
    v82 = v74 - 9;
    a2[1] = v82;
    v81 = v75 >> v82;
    goto LABEL_82;
  }
  v76 = *(_WORD*)(v2 + 14200);
LABEL_83:
  *(_WORD*)(v2 + 14224) = v76;
  *(_WORD*)(v2 + 14226) = v76;
  return result;
}

unsigned int* nn_codec_CRvlc_Decode(__int64 a1, __int64 a2, unsigned int* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v7;
  _WORD* v8;
  _WORD* v9;
  __int64 v10;
  unsigned int v11;
  unsigned int v12;
  __int16 v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  _DWORD* v17;
  __int64 v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  __int64 v25;
  char v27;
  unsigned int* v28;
  int v29;
  unsigned int* v30;
  unsigned int v31;
  __int64 v32;
  char v33;
  __int16 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  unsigned int v38;
  _WORD* v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  char* v45;
  char v46;
  __int64 v47;
  int v48;
  __int64 v49;
  unsigned __int64 v50;
  __int16 v51;
  _WORD* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int16 v56;
  int v57;
  char v58;
  int v59;
  int v60;
  int v61;
  char v62;
  int v63;
  int v64;
  int v65;
  int v66;
  char v67;
  int v68;
  int v69;
  int v70;
  int v71;
  __int64 v72;
  __int16 v73;
  int v74;
  int v75;
  __int16 v76;
  int v77;
  char v78;
  __int16 v79;
  int v80;
  unsigned int v81;
  __int16 v82;
  __int16 v83;
  __int16 v84;
  __int64 v85;
  int v86;
  __int64 v87;
  __int16 v88;
  __int64 v89;
  int v90;
  char v91;
  __int16 v92;
  __int16 v93;
  __int16 v94;
  int v95;
  char v96;
  __int16 v97;
  __int16 v98;
  __int16 v99;
  __int16 v100;
  char v101;
  __int16 v102;
  __int16 v103;
  __int16 v104;
  __int16 v105;
  __int16 v106;
  __int16 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  unsigned __int64 v112;
  char* v113;
  char v114;
  unsigned __int64 v115;
  char* v116;
  char v117;
  unsigned __int64 v118;
  char* v119;
  char v120;
  unsigned __int64 v121;
  char* v122;
  char v123;
  int v124;
  __int64 v125;
  __int64 v126;
  _BOOL4 v127;
  _BOOL4 v128;
  _BOOL4 v129;
  _BOOL4 v130;
  _BOOL4 v131;
  _BOOL4 v132;
  _BOOL4 v133;
  int v134;
  int v135;
  _BOOL4 v136;
  int v137;
  _BOOL4 v138;
  int v139;
  int v140;
  int v141;
  int v142;
  int v143;
  int v144;
  int v145;
  int v146;
  int v147;
  int v148;
  int v149;
  __int64 v150;
  char v151;
  int v152;
  unsigned int v153;
  unsigned int v154;
  unsigned __int64 v155;
  __int64 v156;
  unsigned __int64 i;
  unsigned __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  unsigned __int64 v162;
  __int64 v163;
  unsigned __int64 v164;
  char v165;
  int v166;
  _BOOL4 v167;
  _BOOL4 v168;
  _BOOL4 v169;
  unsigned int v170;
  unsigned __int64 v171;
  __int64 v172;
  unsigned __int64 v173;
  unsigned __int64 v174;
  unsigned int* result;
  unsigned int v176;
  char v177;
  __int16 v178;
  __int16 v179;
  unsigned __int64 v181;
  _WORD* v182;
  int v183;
  __int64 v184;
  __int16 v185;
  int v186;
  __int64 v187;
  __int16 v188;
  int v189;
  _BOOL4 v190;
  int v191;
  __int16 v192;
  _BOOL4 v193;
  int v194;
  __int16* v195;
  _BOOL4 v196;
  __int64 v197;
  unsigned __int16* v198;
  __int64 v199;
  _BOOL4 v200;
  _BOOL4 v201;
  __int64 v202;

  v3 = *(_QWORD*)(a1 + 216);
  v4 = *(_QWORD*)(a1 + 224);
  *(_BYTE*)(v3 + 2037) = 0;
  *(_QWORD*)(v4 + 14300) = 0x51FFAE100000000LL;
  v7 = v4 + 12288;
  v8 = (_WORD*)(v4 + 14312);
  *(_BYTE*)(v4 + 14282) = 0;
  *(_WORD*)(v4 + 14280) = 0;
  *(_BYTE*)(v4 + 14284) = 0;
  *(_DWORD*)(v4 + 14308) = 85981921;
  *(_QWORD*)(v4 + 14272) = SdkData_e87c28;
  *(_QWORD*)(v4 + 14264) = SdkData_e87c30;
  v9 = (_WORD*)(v3 + 8);
  v10 = 128;
  do {
    v8[128] = 0;
    v8[256] = 0;
    v10 -= 8;
    *v8 = 0;
    *(v9 - 4) = 0;
    v8[129] = 0;
    v8[257] = 0;
    v8[1] = 0;
    *(v9 - 3) = 0;
    v8[130] = 0;
    v8[258] = 0;
    v8[2] = 0;
    *(v9 - 2) = 0;
    v8[131] = 0;
    v8[259] = 0;
    v8[3] = 0;
    *(v9 - 1) = 0;
    v8[132] = 0;
    v8[260] = 0;
    v8[4] = 0;
    *v9 = 0;
    v8[133] = 0;
    v8[261] = 0;
    v8[5] = 0;
    v9[1] = 0;
    v8[134] = 0;
    v8[262] = 0;
    v8[6] = 0;
    v9[2] = 0;
    v8[135] = 0;
    v8[263] = 0;
    v8[7] = 0;
    v8 += 8;
    v9[3] = 0;
    v9 += 8;
  } while (v10 != 0);
  v184 = a2 + 4096;
  if (a3[12] != 0) {
    nn_codec_FDK_put_plt(a3 + 2, *a3);
    v11 = a3[12];
    *(_QWORD*)a3 = 0;
    if (v11 != 0) {
      goto LABEL_5;
    }
  LABEL_8:
    nn_codec_FDK_pushBack_plt(a3 + 2, 0, 0);
    *(_QWORD*)a3 = 0;
    *(_WORD*)(v4 + 14254) = nn_codec_FDK_getBitCnt_plt(a3 + 2);
    if (a3[12] != 0) {
      goto LABEL_6;
    }
    goto LABEL_9;
  }
  nn_codec_FDK_pushBack_plt(a3 + 2, a3[1], 0);
  v12 = a3[12];
  *(_QWORD*)a3 = 0;
  if (v12 == 0) {
    goto LABEL_8;
  }
LABEL_5:
  nn_codec_FDK_put_plt(a3 + 2, 0);
  *(_QWORD*)a3 = 0;
  *(_WORD*)(v4 + 14254) = nn_codec_FDK_getBitCnt_plt(a3 + 2);
  if (a3[12] != 0) {
  LABEL_6:
    nn_codec_FDK_put_plt(a3 + 2, *a3);
    goto LABEL_10;
  }
LABEL_9:
  nn_codec_FDK_pushBack_plt(a3 + 2, a3[1], 0);
LABEL_10:
  *(_QWORD*)a3 = 0;
  v13 = nn_codec_FDK_getBitCnt_plt(a3 + 2);
  v14 = *(__int16*)(v4 + 14200);
  *(_WORD*)(v4 + 14256) = v13 + *(_WORD*)(v4 + 14200) - 1;
  v15 = a3[1];
  v16 = a3[12];
  if (v15 > v14) {
    if (v16 == 0) {
      a3[1] = v15 - v14;
      v17 = (_DWORD*)(v4 + 14208);
      if (*(_DWORD*)(v4 + 14208) == 0) {
        goto LABEL_32;
      }
      goto LABEL_21;
    }
  }
  else if (v16 == 0) {
    nn_codec_FDK_pushBack_plt(a3 + 2, v15, 0);
  LABEL_17:
    v18 = a3[12];
    *(_QWORD*)a3 = 0;
    nn_codec_FDK_pushForward_plt(a3 + 2, v14, v18);
    v19 = a3[12];
    v17 = (_DWORD*)(v4 + 14208);
    if (*(_DWORD*)(v4 + 14208) == 0) {
      goto LABEL_30;
    }
    if (v19 == 0) {
    LABEL_21:
      nn_codec_FDK_pushBack_plt(a3 + 2, a3[1], 0);
      v21 = a3[12];
      *(_QWORD*)a3 = 0;
      if (v21 == 0) {
        goto LABEL_22;
      }
    LABEL_20:
      nn_codec_FDK_put_plt(a3 + 2, 0);
      goto LABEL_23;
    }
    nn_codec_FDK_put_plt(a3 + 2, *a3);
    v20 = a3[12];
    *(_QWORD*)a3 = 0;
    if (v20 != 0) {
      goto LABEL_20;
    }
  LABEL_22:
    nn_codec_FDK_pushBack_plt(a3 + 2, 0, 0);
  LABEL_23:
    *(_QWORD*)a3 = 0;
    *(_WORD*)(v4 + 14258) = nn_codec_FDK_getBitCnt_plt(a3 + 2);
    v22 = *(__int16*)(v4 + 14212);
    v23 = a3[1];
    v24 = a3[12];
    if (v23 <= v22) {
      if (v24 == 0) {
        nn_codec_FDK_pushBack_plt(a3 + 2, v23, 0);
        goto LABEL_29;
      }
    }
    else if (v24 == 0) {
      a3[1] = v23 - v22;
      goto LABEL_32;
    }
    nn_codec_FDK_put_plt(a3 + 2, *a3);
  LABEL_29:
    v25 = a3[12];
    *(_QWORD*)a3 = 0;
    nn_codec_FDK_pushForward_plt(a3 + 2, v22, v25);
    v19 = a3[12];
  LABEL_30:
    if (v19 != 0) {
      nn_codec_FDK_put_plt(a3 + 2, *a3);
      goto LABEL_33;
    }
  LABEL_32:
    nn_codec_FDK_pushBack_plt(a3 + 2, a3[1], 0);
  LABEL_33:
    *(_QWORD*)a3 = 0;
    v186 = nn_codec_FDK_getBitCnt_plt(a3 + 2);
    if (*v17 != 0) {
      if (*(__int16*)(v4 + 14212) < 1) {
        v27 = 0;
      }
      else {
        v27 = 0;
        v197 = *(_QWORD*)(a1 + 224) + 14312LL;
        while (2) {
          v28 = *(unsigned int**)(v4 + 14272);
          v29 = 19;
          v202 = 0;
          v30 = v28;
          while (1) {
            v31 = *v30;
            v32 = nn_codec_rvlcReadBitFromBitstream_plt(a3, v4 + 14258, 0);
            nn_codec_CarryBitToBranchValue_plt(v32, v31, (char*)&v202 + 4,
                                               &v202);
            v33 = v202;
            if ((v202 & 0x400) != 0) {
              break;
            }
            --v29;
            v30 = &v28[HIDWORD(v202)];
            if (v29 == -1) {
              goto LABEL_44;
            }
          }
          v34 = v29 + *(_WORD*)(v4 + 14212) - 20;
          *(_WORD*)(v4 + 14212) = v34;
          if (v34 < 0 || v33 < 0) {
          LABEL_44:
            *(_DWORD*)(v4 + 14300) |= 0x80000000;
            break;
          }
          v35 = v27++;
          *(_WORD*)(v197 + 2 * v35) = v33 & 0x7F;
          if (*(__int16*)(v4 + 14212) > 0) {
            continue;
          }
          break;
        }
      }
      *(_BYTE*)(v4 + 14282) = v27;
    }
    v36 = *(_QWORD*)(a1 + 224);
    v37 = *(unsigned __int8*)(*(_QWORD*)(a1 + 216) + 1251LL);
    *(_QWORD*)(v4 + 14240) = v4 + 14254;
    *(_BYTE*)(v4 + 14280) = 0;
    *(_BYTE*)(v4 + 14252) = 0;
    *(_BYTE*)(v4 + 14285) = 0;
    *(_WORD*)(v4 + 14288) = 0;
    *(_WORD*)(v4 + 14292) = 0;
    *(_WORD*)(v4 + 14296) = 0;
    *(_QWORD*)(v4 + 14232) = v4 + 14224;
    *(_WORD*)(v4 + 14283) = 0;
    v38 = *(unsigned __int8*)(v4 + 14248);
    if (*(_BYTE*)(v4 + 14248) == 0) {
      goto LABEL_100;
    }
    v191 = v37 - 100;
    v194 = v37 - 446;
    v39 = (_WORD*)(v36 + 14568);
    v198 = (unsigned __int16*)(v36 + 14312);
    v40 = *(unsigned __int8*)(v4 + 14249);
    if (*(_BYTE*)(v4 + 14249) != 0) {
      if (v38 >= 4) {
        v108 = 512;
        v109 = 528;
        v110 = 544;
        v41 = 0;
        v111 = 560;
        do {
          v112 = v40;
          v113 = (char*)(*(_QWORD*)(a1 + 216) + v108);
          while (1) {
            v114 = *v113++;
            if ((v114 & 0xFE) == 0xE) {
              break;
            }
            if (--v112 == 0) {
              goto LABEL_164;
            }
          }
          *(_BYTE*)(v4 + 14284) = 1;
        LABEL_164:
          v115 = v40;
          v116 = (char*)(*(_QWORD*)(a1 + 216) + v109);
          while (1) {
            v117 = *v116++;
            if ((v117 & 0xFE) == 0xE) {
              break;
            }
            if (--v115 == 0) {
              goto LABEL_169;
            }
          }
          *(_BYTE*)(v4 + 14284) = 1;
        LABEL_169:
          v118 = v40;
          v119 = (char*)(*(_QWORD*)(a1 + 216) + v110);
          while (1) {
            v120 = *v119++;
            if ((v120 & 0xFE) == 0xE) {
              break;
            }
            if (--v118 == 0) {
              goto LABEL_174;
            }
          }
          *(_BYTE*)(v4 + 14284) = 1;
        LABEL_174:
          v121 = v40;
          v122 = (char*)(*(_QWORD*)(a1 + 216) + v111);
          while (1) {
            v123 = *v122++;
            if ((v123 & 0xFE) == 0xE) {
              break;
            }
            if (--v121 == 0) {
              goto LABEL_158;
            }
          }
          *(_BYTE*)(v4 + 14284) = 1;
        LABEL_158:
          v41 += 4;
          v108 += 64;
          v109 += 64;
          v110 += 64;
          v111 += 64;
        } while (v41 != (v38 & 0xFC));
      }
      else {
        v41 = 0;
      }
      if ((v38 & 3) != 0) {
        v42 = 0;
        v43 = 16 * v41 + 512;
        do {
          v44 = v40;
          v45 = (char*)(*(_QWORD*)(a1 + 216) + v43);
          while (1) {
            v46 = *v45++;
            if ((v46 & 0xFE) == 0xE) {
              break;
            }
            if (--v44 == 0) {
              goto LABEL_54;
            }
          }
          *(_BYTE*)(v4 + 14284) = 1;
        LABEL_54:
          ++v42;
          v43 += 16;
        } while (v42 != (v38 & 3));
      }
    }
    v47 = a1 + 64;
    v48 = 65436;
    v49 = 0;
    v50 = 0;
    v51 = 0;
    do {
      if ((_DWORD)v40 != 0) {
        v181 = v50;
        v182 = v39;
        v52 = v39;
        v187 = v47 + v49;
        v53 = -1;
        while (1) {
          v54 = v53;
          v55 = v49 + v53;
          v56 = v55 + 1;
          v57 = *(unsigned __int8*)(v55 + *(_QWORD*)(a1 + 216) + 513);
          if ((unsigned int)(v57 - 14) < 2) {
            v58 = nn_codec_decodeRVLCodeword_plt(a3, v4 + 14192);
            if (v58 < 0) {
              goto LABEL_99;
            }
            v59 = v58 - 7;
            if (v58 == 0 || v58 == 14) {
              if (*(_WORD*)(v4 + 14212) != 0) {
                goto LABEL_99;
              }
              v60 = *v198;
              ++*(_BYTE*)(v4 + 14280);
              ++v198;
              v61 = -7 - v60;
              v59 += v60;
              if (v58 == 0) {
                v59 = v61;
              }
              if (*(_WORD*)(v4 + 14310) == 1311) {
                *(_WORD*)(v4 + 14310) = v56;
              }
            }
            v48 += v59;
            *v52 = v48;
            *(_WORD*)(v4 + 14296) = v48;
          }
          else if (v57 == 13) {
            if (*(_BYTE*)(v4 + 14283) != 0) {
              v62 = nn_codec_decodeRVLCodeword_plt(a3, v4 + 14192);
              if (v62 < 0) {
                goto LABEL_99;
              }
              v63 = v62 - 7;
              if (v62 == 0 || v62 == 14) {
                if (*(_WORD*)(v4 + 14212) != 0) {
                  goto LABEL_99;
                }
                v64 = *v198;
                ++*(_BYTE*)(v4 + 14280);
                ++v198;
                v65 = -7 - v64;
                v63 += v64;
                if (v62 == 0) {
                  v63 = v65;
                }
                if (*(_WORD*)(v4 + 14310) == 1311) {
                  *(_WORD*)(v4 + 14310) = v56;
                }
              }
              v66 = v63 + v194;
            }
            else {
              *(_BYTE*)(v4 + 14251) = v56;
              v71 = *(unsigned __int16*)(v4 + 14204);
              *(_BYTE*)(v4 + 14283) = 1;
              v66 = v194 + v71;
            }
            v194 = v66;
            *v52 = v66 + 100;
            *(_WORD*)(v4 + 14292) = v66;
            *(_BYTE*)(v187 + v54 + 1) = 1;
          }
          else if (v57 != 0) {
            *(_BYTE*)(v4 + 14285) = 1;
            v67 = nn_codec_decodeRVLCodeword_plt(a3, v4 + 14192);
            if (v67 < 0) {
              goto LABEL_99;
            }
            v68 = v67 - 7;
            if (v67 == 0 || v67 == 14) {
              if (*(_WORD*)(v4 + 14212) != 0) {
              LABEL_99:
                *(_WORD*)(v4 + 14306) = v49 + v54 + 1;
                goto LABEL_100;
              }
              v69 = *v198;
              ++*(_BYTE*)(v4 + 14280);
              ++v198;
              v70 = -7 - v69;
              v68 += v69;
              if (v67 == 0) {
                v68 = v70;
              }
              if (*(_WORD*)(v4 + 14310) == 1311) {
                *(_WORD*)(v4 + 14310) = v56;
              }
            }
            *v52 = v68 + v191;
            v191 += v68;
            *(_WORD*)(v4 + 14288) = v191;
          }
          else {
            *v52 = 0;
          }
          v40 = *(unsigned __int8*)(v4 + 14249);
          v53 = v54 + 1;
          ++v52;
          if (v54 + 2 >= v40) {
            v51 = v49 + v53;
            v38 = *(unsigned __int8*)(v4 + 14248);
            v50 = v181;
            v39 = v182;
            v47 = a1 + 64;
            break;
          }
        }
      }
      ++v50;
      v49 += 16;
      v39 += 16;
    } while (v50 < v38);
    if (*(_BYTE*)(v4 + 14284) != 0) {
      v177 = nn_codec_decodeRVLCodeword_plt(a3, v4 + 14192);
      if ((v177 & 0x80) == 0) {
        v178 = v177 - 7;
        if (v177 != 0 && v177 != 14) {
        LABEL_298:
          *(_DWORD*)(v4 + 14220) = v178;
          goto LABEL_100;
        }
        if (*(_WORD*)(v4 + 14212) == 0) {
          v179 = *v198;
          ++*(_BYTE*)(v4 + 14280);
          v178 += v179;
          if (v177 == 0) {
            v178 = -7 - v179;
          }
          if (*(_WORD*)(v4 + 14310) == 1311) {
            *(_WORD*)(v4 + 14310) = v51;
          }
          goto LABEL_298;
        }
      }
      *(_WORD*)(v4 + 14306) = v51;
    }
  LABEL_100:
    v72 = *(_QWORD*)(a1 + 224);
    v73 = *(unsigned __int8*)(v4 + 14249);
    v74 = *(_DWORD*)(v4 + 14196);
    v75 = *(_DWORD*)(v4 + 14216);
    *(_BYTE*)(v4 + 14281) = 0;
    *(_WORD*)(v4 + 14286) = 0;
    *(_WORD*)(v4 + 14290) = 0;
    *(_WORD*)(v4 + 14294) = 0;
    v76 = *(_WORD*)(v4 + 14220);
    *(_QWORD*)(v4 + 14232) = v4 + 14226;
    *(_QWORD*)(v4 + 14240) = v4 + 14256;
    *(_BYTE*)(v4 + 14252) = 1;
    v195 = (__int16*)(v72 + 2LL * *(unsigned __int8*)(v4 + 14282) + 14310);
    if (*(_BYTE*)(v4 + 14284) != 0) {
      LOWORD(v77) = v73 - 1;
      v78 = nn_codec_decodeRVLCodeword_plt(a3, v4 + 14192);
      if (v78 < 0) {
        *(_DWORD*)(v4 + 14220) = 0;
      }
      else {
        v79 = v78 - 7;
        if (v78 != 0 && v78 != 14) {
        LABEL_104:
          *(_DWORD*)(v4 + 14220) = v79;
          goto LABEL_105;
        }
        if (*(_WORD*)(v4 + 14212) == 0) {
          v106 = *v195;
          ++*(_BYTE*)(v4 + 14281);
          --v195;
          v107 = -7 - v106;
          v79 += v106;
          if (v78 == 0) {
            v79 = v107;
          }
          if (*(__int16*)(v4 + 14308) == -1311) {
            *(_WORD*)(v4 + 14308) = v77;
          }
          goto LABEL_104;
        }
      }
    LABEL_182:
      *(_WORD*)(v4 + 14304) = v77;
      goto LABEL_183;
    }
  LABEL_105:
    v80 = *(unsigned __int8*)(v4 + 14248);
    if (*(_BYTE*)(v4 + 14248) != 0) {
      v81 = *(unsigned __int8*)(v4 + 14249);
      if (*(_BYTE*)(v4 + 14249) != 0) {
        v82 = v76 - 100;
        v192 = v74 - 100;
        v188 = v75 + v74 - 446;
        v199 = v72 + 14824;
        v83 = v80 - 1;
        v185 = *(unsigned __int8*)(v4 + 14248);
        v183 = v80 - 1;
      LABEL_108:
        v84 = 16 * v83;
        v85 = v81 - 1LL;
        do {
          if (v85 != 0 || *(_BYTE*)(v4 + 14248) == 1) {
            v86 = 1;
          }
          else {
            v86 = 17 - *(unsigned __int8*)(v4 + 14249);
          }
          v87 = *(_QWORD*)(a1 + 216);
          v88 = v84 + v85;
          v89 = (__int16)(v84 + v85);
          v90 = *(unsigned __int8*)(v87 + v89 + 512);
          if ((unsigned int)(v90 - 14) < 2) {
            v91 = nn_codec_decodeRVLCodeword_plt(a3, v4 + 14192);
            if (v91 < 0) {
              goto LABEL_178;
            }
            v92 = v91 - 7;
            if (v91 == 0 || v91 == 14) {
              if (*(_WORD*)(v4 + 14212) != 0) {
              LABEL_178:
                *(_WORD*)(v199 + 2 * v89) = v82;
              LABEL_180:
                v124 = v88 - v86;
              LABEL_181:
                v77 = v124 & ~(v124 >> 31);
                goto LABEL_182;
              }
              v93 = *v195;
              ++*(_BYTE*)(v4 + 14281);
              --v195;
              v94 = -7 - v93;
              v92 += v93;
              if (v91 == 0) {
                v92 = v94;
              }
              if (*(__int16*)(v4 + 14308) == -1311) {
                *(_WORD*)(v4 + 14308) =
                    (v88 - v86) & ~(unsigned __int16)((v88 - v86) >> 31);
              }
            }
            *(_WORD*)(v199 + 2 * v89) = v82;
            v82 -= v92;
            *(_WORD*)(v4 + 14294) = v82;
          }
          else if (v90 == 13) {
            if (v88 == *(unsigned __int8*)(v4 + 14251)) {
              v95 = *(_DWORD*)(v4 + 14204) + *(unsigned __int8*)(v87 + 1251) -
                    446;
              *(_WORD*)(v199 + 2 * v89) = v95;
              *(_WORD*)(v4 + 14290) = v95;
            }
            else {
              v101 = nn_codec_decodeRVLCodeword_plt(a3, v4 + 14192);
              if (v101 < 0) {
                goto LABEL_299;
              }
              v102 = v101 - 7;
              if (v101 == 0 || v101 == 14) {
                if (*(_WORD*)(v4 + 14212) != 0) {
                LABEL_299:
                  *(_WORD*)(v199 + 2 * v89) = v188;
                  v124 = v88 - v86;
                  goto LABEL_181;
                }
                v103 = *v195;
                ++*(_BYTE*)(v4 + 14281);
                --v195;
                v104 = -7 - v103;
                v102 += v103;
                if (v101 == 0) {
                  v102 = v104;
                }
                if (*(__int16*)(v4 + 14308) == -1311) {
                  *(_WORD*)(v4 + 14308) =
                      (v88 - v86) & ~(unsigned __int16)((v88 - v86) >> 31);
                }
              }
              v105 = v188;
              *(_WORD*)(v199 + 2 * v89) = v188;
              v188 -= v102;
              *(_WORD*)(v4 + 14290) = v105 - v102;
            }
          }
          else if (*(_BYTE*)(v87 + v89 + 512) != 0) {
            v96 = nn_codec_decodeRVLCodeword_plt(a3, v4 + 14192);
            if (v96 < 0) {
              goto LABEL_179;
            }
            v97 = v96 - 7;
            if (v96 == 0 || v96 == 14) {
              if (*(_WORD*)(v4 + 14212) != 0) {
              LABEL_179:
                *(_WORD*)(v199 + 2 * v89) = v192;
                goto LABEL_180;
              }
              v98 = *v195;
              ++*(_BYTE*)(v4 + 14281);
              --v195;
              v99 = -7 - v98;
              v97 += v98;
              if (v96 == 0) {
                v97 = v99;
              }
              if (*(__int16*)(v4 + 14308) == -1311) {
                *(_WORD*)(v4 + 14308) =
                    (v88 - v86) & ~(unsigned __int16)((v88 - v86) >> 31);
              }
            }
            v100 = v192;
            *(_WORD*)(v199 + 2 * v89) = v192;
            v192 -= v97;
            *(_WORD*)(v4 + 14286) = v100 - v97;
          }
          else {
            *(_WORD*)(v199 + 2 * v89) = 0;
          }
          --v85;
        } while (v85 != -1);
        while (v185 >= 2) {
          v81 = *(unsigned __int8*)(v4 + 14249);
          v83 = v183 - 1;
          v185 = v183--;
          if (*(_BYTE*)(v4 + 14249) != 0) {
            goto LABEL_108;
          }
        }
      }
    }
  LABEL_183:
    v125 = *(_QWORD*)(a1 + 224);
    *(_BYTE*)(*(_QWORD*)(a1 + 216) + 2036LL) = 1;
    v126 = v125 + 12288;
    if (*(_DWORD*)(v125 + 14208) != 0) {
      v127 = *(_WORD*)(v125 + 14212) != 0;
      if (*(_BYTE*)(v125 + 14285) != 0) {
        goto LABEL_185;
      }
    }
    else {
      v127 = false;
      if (*(_BYTE*)(v125 + 14285) != 0) {
      LABEL_185:
        v128 = *(unsigned __int8*)(*(_QWORD*)(a1 + 216) + 1251LL) - 100 !=
               *(__int16*)(v125 + 14286);
        v129 = *(_DWORD*)(v125 + 14196) - 100 != *(__int16*)(v125 + 14288);
        if (*(_BYTE*)(v125 + 14283) != 0) {
          goto LABEL_186;
        }
        goto LABEL_193;
      }
    }
    v128 = false;
    v129 = false;
    if (*(_BYTE*)(v125 + 14283) != 0) {
    LABEL_186:
      v130 = *(unsigned __int8*)(*(_QWORD*)(a1 + 216) + 1251LL) +
                 *(_DWORD*)(v125 + 14204) - 446 !=
             *(__int16*)(v125 + 14290);
      v131 = *(_DWORD*)(v125 + 14196) + *(_DWORD*)(v125 + 14216) - 446 !=
             *(__int16*)(v125 + 14292);
      if (*(_BYTE*)(v125 + 14284) != 0) {
        goto LABEL_187;
      }
      goto LABEL_194;
    }
  LABEL_193:
    v130 = false;
    v131 = false;
    if (*(_BYTE*)(v125 + 14284) != 0) {
    LABEL_187:
      v132 = *(__int16*)(v125 + 14294) != -100;
      v133 = *(_DWORD*)(v125 + 14220) - 100 != *(__int16*)(v125 + 14296);
      v134 = *(unsigned __int8*)(v125 + 14280);
      v135 = *(unsigned __int8*)(v125 + 14282);
      if (v134 == v135) {
        goto LABEL_188;
      }
      goto LABEL_195;
    }
  LABEL_194:
    v132 = false;
    v133 = false;
    v134 = *(unsigned __int8*)(v125 + 14280);
    v135 = *(unsigned __int8*)(v125 + 14282);
    if (v134 == v135) {
    LABEL_188:
      v136 = false;
      v137 = *(unsigned __int8*)(v125 + 14281);
      if (v137 != v135) {
        goto LABEL_189;
      }
      goto LABEL_196;
    }
  LABEL_195:
    v136 = *(unsigned __int16*)(v125 + 14306) == 1311;
    v137 = *(unsigned __int8*)(v125 + 14281);
    if (v137 != v135) {
    LABEL_189:
      v138 = *(__int16*)(v125 + 14304) == -1311;
      v139 = *(_DWORD*)(v125 + 14300);
      v140 = *(unsigned __int16*)(v125 + 14224);
      v141 = *(unsigned __int16*)(v125 + 14226);
      v142 = *(unsigned __int16*)(v125 + 14306);
      if (v127) {
        goto LABEL_206;
      }
      goto LABEL_197;
    }
  LABEL_196:
    v138 = false;
    v139 = *(_DWORD*)(v125 + 14300);
    v140 = *(unsigned __int16*)(v125 + 14224);
    v141 = *(unsigned __int16*)(v125 + 14226);
    v142 = *(unsigned __int16*)(v125 + 14306);
    if (v127) {
      goto LABEL_206;
    }
  LABEL_197:
    if (v142 == 1311 &&
        ((v129 || v131 || v133) && v134 != v135 && v137 != v135 &&
             *(unsigned __int16*)(v125 + 14304) == 64225 &&
             (v130 || v128 || v132) ||
         *(_DWORD*)(v125 + 14196) - *(__int16*)(v125 + 14288) - 100 < -15)) {
      goto LABEL_208;
    }
    v143 = *(unsigned __int16*)(v125 + 14304);
    if (v143 != 64225) {
      goto LABEL_216;
    }
    if (*(unsigned __int8*)(*(_QWORD*)(a1 + 216) + 1251LL) -
            *(__int16*)(v125 + 14286) - 100 <=
        -16) {
    LABEL_206:
      if (v142 != 1311) {
        v143 = *(unsigned __int16*)(v125 + 14304);
        if (v143 != 64225) {
          if ((__int16)v142 >= *(__int16*)(v125 + 14310)) {
            LOWORD(v142) = *(_WORD*)(v125 + 14310);
          }
          v147 = *(__int16*)(v125 + 14308);
          *(_WORD*)(v125 + 14306) = v142;
          if ((__int16)v143 <= v147) {
            LOWORD(v143) = v147;
          }
          goto LABEL_215;
        }
      }
    LABEL_208:
      v144 = *(unsigned __int8*)(v125 + 14248);
      v145 = *(unsigned __int8*)(v125 + 14249);
      LOWORD(v142) = 0;
      *(_WORD*)(v125 + 14306) = 0;
      v143 = v145 + 16 * v144;
      v146 = v143 - 16;
      LOWORD(v143) = v143 - 17;
      if (v146 < 1) {
        LOWORD(v143) = 0;
      }
    LABEL_215:
      *(_WORD*)(v125 + 14304) = v143;
      goto LABEL_216;
    }
    LOWORD(v143) = -1311;
  LABEL_216:
    v148 = v127 || v132 || v133 || v130 || v131 || v129 || v128 || v138;
    if ((v139 & 0xC000000 | v141 | v140) != 0) {
      v136 = true;
    }
    if (((v148 | v136) & 1) != 0) {
      v149 = *(unsigned __int8*)(a1 + 35);
      if ((unsigned __int16)v143 == 64225 && (unsigned __int16)v142 == 1311) {
        v150 = v184;
        v151 = 0;
        LOWORD(v142) = 1311;
        v152 = 1;
        LOWORD(v143) = -1311;
      }
      else {
        v150 = v184;
        if ((__int16)v143 <= (__int16)v142 &&
            *(_BYTE*)(v184 + 541) == (v149 != 2) &&
            *(_BYTE*)(v184 + 540) != 0 && *(_DWORD*)(v125 + 14192) != 0) {
          v189 = v139;
          v200 = v133;
          v196 = v128;
          nn_codec_BidirectionalEstimation_UseScfOfPrevFrameAsReference_plt(a1,
                                                                            a2);
          v139 = v189;
          v133 = v200;
          v128 = v196;
          v151 = 1;
          v152 = 0;
          v150 = v184;
          LOWORD(v143) = *(_WORD*)(v125 + 14304);
          LOWORD(v142) = *(_WORD*)(v125 + 14306);
          if ((__int16)v143 > (__int16)v142) {
            goto LABEL_261;
          }
        }
        else {
          v151 = 0;
          v152 = 1;
          if ((__int16)v143 > (__int16)v142) {
            goto LABEL_261;
          }
        }
      }
      if ((unsigned __int16)v143 == 64225 && (unsigned __int16)v142 == 1311) {
        LOWORD(v142) = 1311;
        LOWORD(v143) = -1311;
        goto LABEL_262;
      }
      if (*(_BYTE*)(v150 + 540) == 0 || *(_DWORD*)(v125 + 14192) == 0) {
        if ((v151 & 1) != 0) {
          v152 = 0;
          goto LABEL_261;
        }
        goto LABEL_260;
      }
      if (*(_BYTE*)(v150 + 541) == (v149 != 2)) {
        v165 = 0;
      }
      else {
        v165 = v152;
      }
      if ((v165 & 1) != 0) {
      LABEL_260:
        v201 = v133;
        v193 = v131;
        v166 = v139;
        v190 = v130;
        v167 = v129;
        v168 = v128;
        nn_codec_BidirectionalEstimation_UseLowerScfOfCurrentFrame_plt(a1);
        v139 = v166;
        v133 = v201;
        v128 = v168;
        v129 = v167;
        v130 = v190;
        v131 = v193;
        v152 = 0;
        v150 = v184;
        LOWORD(v143) = *(_WORD*)(v125 + 14304);
        LOWORD(v142) = *(_WORD*)(v125 + 14306);
      }
    LABEL_261:
      if ((__int16)v143 > (__int16)v142) {
        goto LABEL_272;
      }
    LABEL_262:
      if (v129 && v128 || v131 && v130) {
        if ((v139 & 0x8000000) != 0) {
          goto LABEL_272;
        }
      }
      else if ((v139 & 0x8000000) != 0 || !v133 || !v132) {
      LABEL_272:
        if ((__int16)v143 <= (__int16)v142 && *(_BYTE*)(v150 + 540) != 0 &&
            *(_DWORD*)(v125 + 14192) != 0 && v152 != 0 &&
            *(_BYTE*)(v150 + 541) == (v149 != 2)) {
          nn_codec_PredictiveInterpolation_plt(a1, a2);
        }
        else if (v152 != 0) {
          v170 = *(unsigned __int8*)(v125 + 14248);
          if (*(_BYTE*)(v125 + 14248) != 0) {
            LODWORD(v171) = *(unsigned __int8*)(v125 + 14249);
            v172 = 0;
            v173 = 0;
            do {
              if ((_DWORD)v171 != 0) {
                v174 = 0;
                do {
                  *(_WORD*)(*(_QWORD*)(a1 + 216) + v172 + 2 * v174++) = 0;
                  v171 = *(unsigned __int8*)(v125 + 14249);
                } while (v174 < v171);
                v170 = *(unsigned __int8*)(v125 + 14248);
              }
              ++v173;
              v172 += 32;
            } while (v173 < v170);
          }
          *(_BYTE*)(*(_QWORD*)(a1 + 216) + 2036LL) = 0;
        }
        goto LABEL_287;
      }
      v169 = (v139 & 0x4000000) != 0;
      if (v152 == 0) {
        v169 = true;
      }
      if (!v127 && !v169) {
        nn_codec_StatisticalEstimation_plt(a1);
        v150 = v184;
        LOWORD(v143) = *(_WORD*)(v125 + 14304);
        LOWORD(v142) = *(_WORD*)(v125 + 14306);
        v152 = 0;
      }
      goto LABEL_272;
    }
    v153 = *(unsigned __int8*)(v125 + 14248);
    if (v153 <= 1) {
      v154 = 64;
    }
    else {
      v154 = 16;
    }
    if (v153 != 0) {
      LODWORD(v155) = *(unsigned __int8*)(v126 + 1961);
      v156 = 0;
      for (i = 0; i < v153; ++i) {
        if ((_DWORD)v155 != 0) {
          v158 = 0;
          do {
            v159 = 2 * v158;
            v160 = *(_QWORD*)(a1 + 224) + v156 + 2 * v158++;
            LOWORD(v160) = *(_WORD*)(v160 + 14568);
            *(_WORD*)(a2 + 4252 + v156 + v159) = v160;
            *(_WORD*)(*(_QWORD*)(a1 + 216) + v156 + v159) = v160;
            v155 = *(unsigned __int8*)(v126 + 1961);
          } while (v158 < v155);
          v153 = *(unsigned __int8*)(v126 + 1960);
        }
        v156 += 32;
      }
      if (v153 != 0) {
        v161 = 512;
        v162 = 0;
        v163 = a2 + 4508;
        do {
          LODWORD(v164) = *(unsigned __int8*)(v126 + 1961);
          if (*(_BYTE*)(v126 + 1961) == 0) {
            goto LABEL_234;
          }
          v164 = 0;
          do {
            *(_BYTE*)(v163 + v164) =
                *(_BYTE*)(*(_QWORD*)(a1 + 216) + v161 + v164);
            ++v164;
          } while (v164 < *(unsigned __int8*)(v126 + 1961));
          if (v154 > (unsigned int)v164) {
          LABEL_234:
            memset_plt((void*)(a2 + 4508 + (unsigned int)(v164 + 16 * v162)),
                       nullptr, v154 + ~(_DWORD)v164 + 1);
          }
          ++v162;
          v163 += 16;
          v161 += 16;
        } while (v162 < *(unsigned __int8*)(v126 + 1960));
      }
    }
  LABEL_287:
    *(_BYTE*)(*(_QWORD*)(a1 + 216) + 2037LL) = *(_BYTE*)(v7 + 1996);
    *(_BYTE*)(a1 + 196) = *(_BYTE*)(v7 + 1995);
    if (a3[12] != 0) {
      nn_codec_FDK_put_plt(a3 + 2, *a3);
      *(_QWORD*)a3 = 0;
      result = (unsigned int*)nn_codec_FDK_getBitCnt_plt(a3 + 2);
      v176 = v186 - (_DWORD)result;
      if (v186 == (_DWORD)result) {
        return result;
      }
      return nn_codec_FDKpushBiDirectional(a3, v176);
    }
    nn_codec_FDK_pushBack_plt(a3 + 2, a3[1], 0);
    *(_QWORD*)a3 = 0;
    result = (unsigned int*)nn_codec_FDK_getBitCnt_plt(a3 + 2);
    v176 = v186 - (_DWORD)result;
    if (v186 != (_DWORD)result) {
      return nn_codec_FDKpushBiDirectional(a3, v176);
    }
    return result;
  }
  nn_codec_FDK_put_plt(a3 + 2, *a3);
  goto LABEL_17;
}

#pragma GCC visibility pop
