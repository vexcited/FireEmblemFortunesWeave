#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_FDK_InitBitBuffer_plt(__int64, __int64, unsigned int,
                                       unsigned int);
__int64 nn_codec_FDK_getValidBits_plt(__int64);
__int64 nn_codec_FDK_get_plt(__int64, unsigned int);
__int64 nn_codec_FDK_pushBack_plt(__int64, unsigned int, unsigned __int8);
__int64 nn_codec_FDK_put_plt(_QWORD, _QWORD, _QWORD);
extern void (*SdkData_e87a50[778])();
unsigned int* nn_codec_FDKpushBiDirectional(unsigned int* result, unsigned int);
__int64 fdk_aac_libFDK_src_369e40(__int64 a1, unsigned int* a2, int a3);

__int64 fdk_aac_libFDK_src_369e40(__int64 a1, unsigned int* a2, int a3)
{
  unsigned int v3;
  __int64 v4;
  __int64 v7;
  int v8;
  __int64 v9;
  int v10;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  int v24;
  int v25;
  __int64 v26;
  int v27;
  void(__attribute__((noreturn)) * v28)();
  int v29;
  int v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;
  int v35;
  unsigned int v36;
  unsigned int v37;
  __int64 v38;
  int v39;
  int v40;
  unsigned int v41;
  int v42;
  unsigned int v43;
  unsigned int v44;
  unsigned int v45;
  unsigned int v46;
  int v47;
  unsigned int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;
  int v56;
  unsigned int v57;
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
  unsigned int v70;
  int v71;
  unsigned int v72;
  unsigned int v73;
  unsigned int v74;
  unsigned int v75;
  int v76;
  unsigned int v77;
  unsigned int v78;
  unsigned int v79;
  unsigned int v80;
  int v81;
  unsigned int v82;
  unsigned int v83;
  unsigned int v84;
  unsigned int v85;
  int v86;
  unsigned int v87;
  int v88;
  __int64 v89;
  int v90;
  int v91;
  __int16 v92;
  __int16 v93;
  __int16 v94;
  __int16 v95;
  __int16 v96;
  __int16 v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  int v113;
  __int64 v114;
  __int64 v115;
  int v116;
  __int64 v117;
  struct {
    __int64 v118;
    __int64 v119;
    __int64 v120;
    __int64 v121;
    __int64 v122;
    __int64 v123;
  } v118_;

  v3 = a2[12];
  v4 = a1 + 16LL * a3;
  v7 = a1;
  if (v3 == 1) {
    nn_codec_FDK_put_plt(a2 + 2, *a2, a2[1]);
    *(_QWORD*)a2 = 0;
    v8 = nn_codec_FDK_getValidBits_plt((__int64)(a2 + 2)) - *(int*)(v4 + 12);
    v9 = v7 + 16LL * a3;
    v10 = *(_DWORD*)(v9 + 4);
    *(_DWORD*)(v9 + 8) = v8;
    if (v10 != 0) {
      goto LABEL_9;
    }
  }
  else {
    v11 = a3;
    v12 = *(_DWORD*)(v4 + 12);
    if (v3 != 0) {
      nn_codec_FDK_put_plt(a2 + 2, *a2, a2[1]);
    }
    else {
      nn_codec_FDK_pushBack_plt((__int64)(a2 + 2), a2[1], 0);
    }
    *(_QWORD*)a2 = 0;
    v8 = v12 - nn_codec_FDK_getValidBits_plt((__int64)(a2 + 2));
    v9 = v7 + 16 * v11;
    v13 = *(_DWORD*)(v9 + 4);
    *(_DWORD*)(v9 + 8) = v8;
    if (v13 != 0) {
      goto LABEL_9;
    }
  }
  *(_DWORD*)(v9 + 4) = v8;
LABEL_9:
  v14 = *(unsigned __int16*)(v7 + 72);
  v15 = a2[12];
  v118_.v122 = 0;
  v118_.v123 = 0;
  v118_.v120 = 0;
  v118_.v121 = 0;
  v118_.v118 = 0;
  v118_.v119 = 0;
  v117 = 0;
  if (v15 != 0) {
    nn_codec_FDK_InitBitBuffer_plt((__int64)&v118_.v118, *((_QWORD*)a2 + 4),
                                   a2[10], a2[2]);
    v16 = *(_DWORD*)(v9 + 12);
    v117 = 0;
    LODWORD(v118_.v123) = 0;
  }
  else {
    v17 = *((_QWORD*)a2 + 5);
    v18 = *(_DWORD*)(v9 + 12);
    v118_.v121 = *((_QWORD*)a2 + 4);
    v118_.v122 = v17;
    v19 = *((_QWORD*)a2 + 1);
    v20 = *((_QWORD*)a2 + 6);
    v117 = *(_QWORD*)a2;
    v118_.v118 = v19;
    v22 = *((_QWORD*)a2 + 2);
    v21 = *((_QWORD*)a2 + 3);
    v118_.v123 = v20;
    v118_.v119 = v22;
    v118_.v120 = v21;
    if ((_DWORD)v20 != 0) {
      nn_codec_FDK_put_plt(&v118_.v118, (unsigned int)v117, HIDWORD(v117));
    }
    else {
      nn_codec_FDK_pushBack_plt((__int64)&v118_.v118, HIDWORD(v117), 0);
    }
    v117 = 0;
    v16 = nn_codec_FDK_getValidBits_plt((__int64)&v118_.v118) - v18;
  }
  nn_codec_FDKpushBiDirectional((unsigned int*)&v117, v16);
  v23 = *(_DWORD*)(v9 + 4);
  if (v23 >= 0) {
    v24 = *(_DWORD*)(v9 + 4);
  }
  else {
    v24 = -v23;
  }
  if (v23 < 1 || (int)((v25 = *(_DWORD*)(v9 + 8)) & 0xFFFFFFF8) >= v23) {
    v25 = v24;
  }
  v26 = *(_QWORD*)(v7 + 48);
  v27 = v25 & 7;
  v28 = SdkData_e87a50[0];
  v116 = v27;
  if (v26 == 0) {
    v37 = v25 & 0xFFFFFFF8;
    if (v25 < 8) {
      goto LABEL_47;
    }
    v38 = v7;
    v39 = *(unsigned __int16*)(v7 + 58);
    v114 = v9;
    v115 = v38;
    v40 = *(unsigned __int16*)(v38 + 56);
    v41 = v37;
    v42 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                     (unsigned __int64)((__int64*)0x4LL));
    v43 = HIDWORD(v117);
    v113 = v24;
    while (1) {
      if (v43 >= 2) {
        v44 = v117;
      }
      else {
        v46 = nn_codec_FDK_getValidBits_plt((__int64)&v118_.v118);
        v47 = v117;
        if (31 - HIDWORD(v117) >= v46) {
          v48 = v46;
        }
        else {
          v48 = 31 - HIDWORD(v117);
        }
        v44 = (v47 << v48) | nn_codec_FDK_get_plt((__int64)&v118_.v118, v48);
        LODWORD(v117) = v44;
        v43 = HIDWORD(v117) + v48;
        if (HIDWORD(v117) + v48 == 0) {
          v45 = 2 * v44;
          v117 = v45;
          goto LABEL_39;
        }
      }
      HIDWORD(v117) = --v43;
      v45 = v44 >> v43;
    LABEL_39:
      --v41;
      v14 = (v40 * (v45 & v42 ^ ((v14 & v39) != 0))) ^ (2 * v14);
      if (v41 == 0) {
      LABEL_34:
        v9 = v114;
        v7 = v115;
        v27 = v116;
        v24 = v113;
        v28 = SdkData_e87a50[0];
        goto LABEL_47;
      }
    }
  }
  v29 = v25 >> 3;
  if (v25 >> 3 >= 1) {
    v114 = v9;
    v115 = v7;
    v30 = *((unsigned __int8*)SdkData_e87a50[0] +
            (unsigned __int64)(*(_BYTE(*)[4])0x20LL));
    v31 = HIDWORD(v117);
    v113 = v24;
    while (v31 < 9) {
      v34 = nn_codec_FDK_getValidBits_plt((__int64)&v118_.v118);
      v35 = v117;
      if (31 - HIDWORD(v117) >= v34) {
        v36 = v34;
      }
      else {
        v36 = 31 - HIDWORD(v117);
      }
      v33 = (v35 << v36) | nn_codec_FDK_get_plt((__int64)&v118_.v118, v36);
      LODWORD(v117) = v33;
      v31 = HIDWORD(v117) + v36;
      if (HIDWORD(v117) + v36 > 7) {
        goto LABEL_32;
      }
      v32 = v33 << (8 - v31);
      v31 = 0;
      v117 = v32;
    LABEL_25:
      --v29;
      v14 = *(unsigned __int16*)(v26 + 2LL * (v30 & v32 ^ BYTE1(v14))) ^
            (v14 << 8);
      if (v29 == 0) {
        v37 = v25 & 0xFFFFFFF8;
        goto LABEL_34;
      }
    }
    v33 = v117;
  LABEL_32:
    v31 -= 8;
    HIDWORD(v117) = v31;
    v32 = v33 >> v31;
    goto LABEL_25;
  }
  v37 = 0;
LABEL_47:
  v49 = v24 - v37;
  if (v27 == 0) {
    goto LABEL_117;
  }
  v50 = *(unsigned __int16*)(v7 + 58);
  v51 = *(unsigned __int16*)(v7 + 56);
  v52 = *(_DWORD*)((char*)((__int64*)0x4LL) + (_QWORD)v28);
  v53 = HIDWORD(v117);
  if (HIDWORD(v117) >= 2) {
    v54 = v117;
  LABEL_55:
    v58 = v54 >> --v53;
    HIDWORD(v117) = v53;
    goto LABEL_56;
  }
  v55 = nn_codec_FDK_getValidBits_plt((__int64)&v118_.v118);
  v56 = v117;
  if (31 - HIDWORD(v117) >= v55) {
    v57 = v55;
  }
  else {
    v57 = 31 - HIDWORD(v117);
  }
  v54 = (v56 << v57) | nn_codec_FDK_get_plt((__int64)&v118_.v118, v57);
  LODWORD(v117) = v54;
  v53 = HIDWORD(v117) + v57;
  if (HIDWORD(v117) + v57 != 0) {
    v27 = v116;
    goto LABEL_55;
  }
  v27 = v116;
  v58 = 2 * v54;
  v117 = v58;
LABEL_56:
  v14 = (v51 * (v58 & v52 ^ ((v14 & v50) != 0))) ^ (2 * v14);
  if (v27 == 1) {
    goto LABEL_116;
  }
  if (v53 > 1) {
    v59 = v117;
  LABEL_64:
    v63 = v59 >> --v53;
    HIDWORD(v117) = v53;
    goto LABEL_65;
  }
  v60 = nn_codec_FDK_getValidBits_plt((__int64)&v118_.v118);
  v61 = v117;
  if (31 - HIDWORD(v117) >= v60) {
    v62 = v60;
  }
  else {
    v62 = 31 - HIDWORD(v117);
  }
  v59 = (v61 << v62) | nn_codec_FDK_get_plt((__int64)&v118_.v118, v62);
  LODWORD(v117) = v59;
  v53 = HIDWORD(v117) + v62;
  if (HIDWORD(v117) + v62 != 0) {
    v27 = v116;
    goto LABEL_64;
  }
  v27 = v116;
  v63 = 2 * v59;
  v117 = v63;
LABEL_65:
  v14 = (v51 * (v63 & v52 ^ ((v14 & v50) != 0))) ^ (2 * v14);
  if (v27 == 2) {
    goto LABEL_116;
  }
  if (v53 > 1) {
    v64 = v117;
  LABEL_74:
    v68 = v64 >> --v53;
    HIDWORD(v117) = v53;
    goto LABEL_75;
  }
  v65 = nn_codec_FDK_getValidBits_plt((__int64)&v118_.v118);
  v66 = v117;
  if (31 - HIDWORD(v117) >= v65) {
    v67 = v65;
  }
  else {
    v67 = 31 - HIDWORD(v117);
  }
  v64 = (v66 << v67) | nn_codec_FDK_get_plt((__int64)&v118_.v118, v67);
  LODWORD(v117) = v64;
  v53 = HIDWORD(v117) + v67;
  if (HIDWORD(v117) + v67 != 0) {
    v27 = v116;
    goto LABEL_74;
  }
  v27 = v116;
  v68 = 2 * v64;
  v117 = v68;
LABEL_75:
  v14 = (v51 * (v68 & v52 ^ ((v14 & v50) != 0))) ^ (2 * v14);
  if (v27 == 3) {
    goto LABEL_116;
  }
  if (v53 > 1) {
    v69 = v117;
  LABEL_84:
    v73 = v69 >> --v53;
    HIDWORD(v117) = v53;
    goto LABEL_85;
  }
  v70 = nn_codec_FDK_getValidBits_plt((__int64)&v118_.v118);
  v71 = v117;
  if (31 - HIDWORD(v117) >= v70) {
    v72 = v70;
  }
  else {
    v72 = 31 - HIDWORD(v117);
  }
  v69 = (v71 << v72) | nn_codec_FDK_get_plt((__int64)&v118_.v118, v72);
  LODWORD(v117) = v69;
  v53 = HIDWORD(v117) + v72;
  if (HIDWORD(v117) + v72 != 0) {
    v27 = v116;
    goto LABEL_84;
  }
  v27 = v116;
  v73 = 2 * v69;
  v117 = v73;
LABEL_85:
  v14 = (v51 * (v73 & v52 ^ ((v14 & v50) != 0))) ^ (2 * v14);
  if (v27 == 4) {
    goto LABEL_116;
  }
  if (v53 > 1) {
    v74 = v117;
  LABEL_94:
    v78 = v74 >> --v53;
    HIDWORD(v117) = v53;
    goto LABEL_95;
  }
  v75 = nn_codec_FDK_getValidBits_plt((__int64)&v118_.v118);
  v76 = v117;
  if (31 - HIDWORD(v117) >= v75) {
    v77 = v75;
  }
  else {
    v77 = 31 - HIDWORD(v117);
  }
  v74 = (v76 << v77) | nn_codec_FDK_get_plt((__int64)&v118_.v118, v77);
  LODWORD(v117) = v74;
  v53 = HIDWORD(v117) + v77;
  if (HIDWORD(v117) + v77 != 0) {
    v27 = v116;
    goto LABEL_94;
  }
  v27 = v116;
  v78 = 2 * v74;
  v117 = v78;
LABEL_95:
  v14 = (v51 * (v78 & v52 ^ ((v14 & v50) != 0))) ^ (2 * v14);
  if (v27 == 5) {
    goto LABEL_116;
  }
  if (v53 > 1) {
    v79 = v117;
  LABEL_104:
    v83 = v79 >> --v53;
    HIDWORD(v117) = v53;
    goto LABEL_105;
  }
  v80 = nn_codec_FDK_getValidBits_plt((__int64)&v118_.v118);
  v81 = v117;
  if (31 - HIDWORD(v117) >= v80) {
    v82 = v80;
  }
  else {
    v82 = 31 - HIDWORD(v117);
  }
  v79 = (v81 << v82) | nn_codec_FDK_get_plt((__int64)&v118_.v118, v82);
  LODWORD(v117) = v79;
  v53 = HIDWORD(v117) + v82;
  if (HIDWORD(v117) + v82 != 0) {
    v27 = v116;
    goto LABEL_104;
  }
  v27 = v116;
  v83 = 2 * v79;
  v117 = v83;
LABEL_105:
  v14 = (v51 * (v83 & v52 ^ ((v14 & v50) != 0))) ^ (2 * v14);
  if (v27 != 6) {
    if (v53 <= 1) {
      v85 = nn_codec_FDK_getValidBits_plt((__int64)&v118_.v118);
      v86 = v117;
      if (31 - HIDWORD(v117) >= v85) {
        v87 = v85;
      }
      else {
        v87 = 31 - HIDWORD(v117);
      }
      v84 = (v86 << v87) | nn_codec_FDK_get_plt((__int64)&v118_.v118, v87);
      LODWORD(v117) = v84;
      v53 = HIDWORD(v117) + v87;
      if (HIDWORD(v117) + v87 == 0) {
        v27 = v116;
        v88 = 2 * v84;
        v117 = 2 * v84;
        goto LABEL_115;
      }
      v27 = v116;
    }
    else {
      v84 = v117;
    }
    HIDWORD(v117) = v53 - 1;
    v88 = v84 >> (v53 - 1);
  LABEL_115:
    v14 = (v51 * (v88 & v52 ^ ((v14 & v50) != 0))) ^ (2 * v14);
  }
LABEL_116:
  v49 -= v27;
LABEL_117:
  if (v49 == 0) {
    goto LABEL_153;
  }
  if (v49 < 9 || (v89 = *(_QWORD*)(v7 + 48)) == 0) {
    if (v49 < 1) {
      goto LABEL_153;
    }
    goto LABEL_128;
  }
  v90 = ((unsigned int)v49 >> 3) & 7;
  if (((unsigned int)v49 >> 3) - 1 >= 7) {
    v91 = ((unsigned int)v49 >> 3) & 0xFFFFFF8;
    do {
      v91 -= 8;
      v92 = *(_WORD*)(v89 + 2LL * BYTE1(v14));
      v93 =
          *(_WORD*)(v89 +
                    2LL * (unsigned __int8)((unsigned __int16)(v92 ^ ((_WORD)v14
                                                                      << 8)) >>
                                            8));
      v94 = *(_WORD*)(v89 +
                      2LL * (unsigned __int8)((unsigned __int16)(v93 ^
                                                                 (v92 << 8)) >>
                                              8));
      v95 = *(_WORD*)(v89 +
                      2LL * (unsigned __int8)((unsigned __int16)(v94 ^
                                                                 (v93 << 8)) >>
                                              8));
      v96 = *(_WORD*)(v89 +
                      2LL * (unsigned __int8)((unsigned __int16)(v95 ^
                                                                 (v94 << 8)) >>
                                              8));
      v97 = *(_WORD*)(v89 +
                      2LL * (unsigned __int8)((unsigned __int16)(v96 ^
                                                                 (v95 << 8)) >>
                                              8));
      v98 = *(
          unsigned __int16*)(v89 +
                             2LL *
                                 (unsigned __int8)((unsigned __int16)(v97 ^
                                                                      (v96
                                                                       << 8)) >>
                                                   8));
      v14 =
          *(unsigned __int16*)(v89 +
                               2LL *
                                   (unsigned __int8)((unsigned __int16)(v98 ^
                                                                        (v97
                                                                         << 8)) >>
                                                     8)) ^
          (v98 << 8);
    } while (v91 != 0);
  }
  for (; v90 != 0;
       v14 = *(unsigned __int16*)(v89 + 2LL * BYTE1(v14)) ^ (v14 << 8)) {
    --v90;
  }
  v49 &= 7u;
  if (v49 != 0) {
  LABEL_128:
    v99 = *(unsigned __int16*)(v7 + 58);
    v100 = *(unsigned __int16*)(v7 + 56);
    v101 = v49 & 7;
    if ((unsigned int)v49 < 8) {
    LABEL_148:
      if ((v49 & 7) != 0) {
        do {
          if ((v14 & v99) != 0) {
            v110 = *(unsigned __int16*)(v7 + 56);
          }
          else {
            v110 = 0;
          }
          --v101;
          v14 = v110 ^ (2 * v14);
        } while (v101 != 0);
      }
      goto LABEL_153;
    }
    v102 = v49 & 0x7FFFFFF8;
    while (1) {
      if ((v14 & v99) != 0) {
        v103 = v100 ^ (2 * v14);
        if ((v103 & v99) != 0) {
          goto LABEL_133;
        }
      LABEL_141:
        v104 = 2 * v103;
        if ((v104 & v99) == 0) {
          goto LABEL_142;
        }
      LABEL_134:
        v105 = v100 ^ (2 * v104);
        if ((v105 & v99) != 0) {
          goto LABEL_135;
        }
      LABEL_143:
        v106 = 2 * v105;
        if ((v106 & v99) == 0) {
          goto LABEL_144;
        }
      LABEL_136:
        v107 = v100 ^ (2 * v106);
        if ((v107 & v99) != 0) {
          goto LABEL_137;
        }
      LABEL_145:
        v108 = 2 * v107;
        if ((v108 & v99) == 0) {
          goto LABEL_146;
        }
      LABEL_138:
        v109 = v100 ^ (2 * v108);
        if ((v109 & v99) == 0) {
          goto LABEL_130;
        }
      LABEL_147:
        v14 = v100 ^ (2 * v109);
        v102 -= 8;
        if (v102 == 0) {
          goto LABEL_148;
        }
      }
      else {
        v103 = 2 * v14;
        if (((2 * v14) & v99) == 0) {
          goto LABEL_141;
        }
      LABEL_133:
        v104 = v100 ^ (2 * v103);
        if ((v104 & v99) != 0) {
          goto LABEL_134;
        }
      LABEL_142:
        v105 = 2 * v104;
        if ((v105 & v99) == 0) {
          goto LABEL_143;
        }
      LABEL_135:
        v106 = v100 ^ (2 * v105);
        if ((v106 & v99) != 0) {
          goto LABEL_136;
        }
      LABEL_144:
        v107 = 2 * v106;
        if ((v107 & v99) == 0) {
          goto LABEL_145;
        }
      LABEL_137:
        v108 = v100 ^ (2 * v107);
        if ((v108 & v99) != 0) {
          goto LABEL_138;
        }
      LABEL_146:
        v109 = 2 * v108;
        if ((v109 & v99) != 0) {
          goto LABEL_147;
        }
      LABEL_130:
        v14 = 2 * v109;
        v102 -= 8;
        if (v102 == 0) {
          goto LABEL_148;
        }
      }
    }
  }
LABEL_153:
  v111 = *(_DWORD*)(v7 + 68);
  *(_WORD*)(v7 + 72) = v14;
  *(_BYTE*)v9 = 0;
  *(_DWORD*)(v7 + 68) = (v111 + 1) % 3u;
  return 0;
}

#pragma GCC visibility pop
