#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_FDK_getValidBits_plt(_QWORD);
__int64 nn_codec_FDK_get_plt(_QWORD, _QWORD);
__int64 nn_codec_FDK_pushBack_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDK_put_plt(_QWORD, _QWORD);
extern void (*SdkData_e87a50[778])();
bool nn_codec_SbrCrcCheck(unsigned int* a1, signed int a2);

bool nn_codec_SbrCrcCheck(unsigned int* a1, signed int a2)
{
  unsigned int v2;
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  int v15;
  unsigned int v16;
  int v17;
  unsigned int v18;
  void(__attribute__((noreturn)) * v19)();
  unsigned int v20;
  int v21;
  __int64 v22;
  int v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  __int16 v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  __int16 v45;
  int v46;
  int v47;
  int v48;
  int v49;
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
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  char v72;
  int v73;
  int v74;
  unsigned int v75;
  unsigned int v76;
  unsigned int v77;
  unsigned int v78;
  int v79;
  unsigned int v80;
  unsigned int v81;
  unsigned int v82;
  unsigned int v83;
  int v84;
  unsigned int v85;
  unsigned int v86;
  unsigned int v87;
  int v88;
  int v89;
  __int64 v90;
  unsigned int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  bool v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  unsigned int v109;
  unsigned int v110;
  unsigned int v111;
  __int64 v112;
  __int64 v113;
  unsigned int v114;

  v2 = a1[1];
  if (v2 < 0xB) {
    v6 = nn_codec_FDK_getValidBits_plt(a1 + 2);
    if (31 - a1[1] >= v6) {
      v7 = v6;
    }
    else {
      v7 = 31 - a1[1];
    }
    v8 = *a1 << v7;
    v9 = nn_codec_FDK_get_plt(a1 + 2, v7);
    v10 = a1[1];
    v5 = v8 | v9;
    *a1 = v5;
    v2 = v10 + v7;
    if (v2 <= 9) {
      v11 = 0;
      v5 = (unsigned int)((_DWORD)v5 << (10 - v2));
      *(_QWORD*)a1 = (unsigned int)v5;
      v12 = v5;
      if (a1[12] != 0) {
        goto LABEL_11;
      }
    LABEL_8:
      nn_codec_FDK_pushBack_plt(a1 + 2, v11, 0);
      *(_QWORD*)a1 = 0;
      v13 = nn_codec_FDK_getValidBits_plt(a1 + 2);
      if (v13 >= 1) {
        goto LABEL_12;
      }
      return false;
    }
  }
  else {
    v5 = *a1;
  }
  v11 = v2 - 10;
  a1[1] = v2 - 10;
  v12 = (unsigned int)v5 >> (v2 - 10);
  if (a1[12] == 0) {
    goto LABEL_8;
  }
LABEL_11:
  nn_codec_FDK_put_plt(a1 + 2, v5);
  *(_QWORD*)a1 = 0;
  v13 = nn_codec_FDK_getValidBits_plt(a1 + 2);
  if (v13 < 1) {
    return false;
  }
LABEL_12:
  v114 = v12;
  v15 = v13;
  if (a2 >= v13) {
    v16 = v13;
  }
  else {
    v16 = a2;
  }
  if (v16 >= 0x10) {
    v23 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                     (unsigned __int64)((char*)0x40LL));
    v24 = v16 >> 4;
    v17 = 0;
    while (1) {
      v75 = a1[1];
      if (v75 >= 0x11) {
        v25 = *a1;
      }
      else {
        v76 = nn_codec_FDK_getValidBits_plt(a1 + 2);
        if (31 - a1[1] >= v76) {
          v77 = v76;
        }
        else {
          v77 = 31 - a1[1];
        }
        v78 = *a1 << v77;
        v79 = nn_codec_FDK_get_plt(a1 + 2, v77);
        v80 = a1[1];
        v25 = v78 | v79;
        *a1 = v78 | v79;
        v75 = v80 + v77;
        if (v75 <= 0xF) {
          v27 = v25 << (16 - v75);
          *(_QWORD*)a1 = v27;
          goto LABEL_22;
        }
      }
      v26 = v75 - 16;
      a1[1] = v26;
      v27 = v25 >> v26;
    LABEL_22:
      v28 = v27 & v23;
      if (((v17 & 0x200) != 0) != v28 < 0) {
        v29 = (2 * v17) ^ 0x233;
      }
      else {
        v29 = 2 * v17;
      }
      v30 = ((v28 & 0x4000) != 0) ^ ((v29 & 0x200) != 0);
      v31 = 2 * v29;
      v32 = (2 * v29) ^ 0x233;
      if (v30 == 0) {
        v32 = v31;
      }
      v33 = ((v28 & 0x2000) != 0) ^ ((v32 & 0x200) != 0);
      v34 = 2 * v32;
      v35 = (2 * v32) ^ 0x233;
      if (v33 == 0) {
        v35 = v34;
      }
      v36 = ((v28 & 0x1000) != 0) ^ ((v35 & 0x200) != 0);
      v37 = 2 * v35;
      v38 = (2 * v35) ^ 0x233;
      if (v36 == 0) {
        v38 = v37;
      }
      v39 = ((v28 & 0x800) != 0) ^ ((v38 & 0x200) != 0);
      v40 = 2 * v38;
      v41 = (2 * v38) ^ 0x233;
      if (v39 == 0) {
        v41 = v40;
      }
      v42 = ((v28 & 0x400) != 0) ^ ((v41 & 0x200) != 0);
      v43 = 2 * v41;
      v44 = (2 * v41) ^ 0x233;
      if (v42 == 0) {
        v44 = v43;
      }
      v45 = v28 ^ v44;
      v46 = 2 * v44;
      v47 = (2 * v44) ^ 0x233;
      if ((v45 & 0x200) == 0) {
        v47 = v46;
      }
      v48 = ((v28 & 0x100) != 0) ^ ((v47 & 0x200) != 0);
      v49 = 2 * v47;
      v50 = (2 * v47) ^ 0x233;
      if (v48 == 0) {
        v50 = v49;
      }
      v51 = ((v28 & 0x80) != 0) ^ ((v50 & 0x200) != 0);
      v52 = 2 * v50;
      v53 = (2 * v50) ^ 0x233;
      if (v51 == 0) {
        v53 = v52;
      }
      v54 = ((v28 & 0x40) != 0) ^ ((v53 & 0x200) != 0);
      v55 = 2 * v53;
      v56 = (2 * v53) ^ 0x233;
      if (v54 == 0) {
        v56 = v55;
      }
      v57 = ((v28 & 0x20) != 0) ^ ((v56 & 0x200) != 0);
      v58 = 2 * v56;
      v59 = (2 * v56) ^ 0x233;
      if (v57 == 0) {
        v59 = v58;
      }
      v60 = ((v28 & 0x10) != 0) ^ ((v59 & 0x200) != 0);
      v61 = 2 * v59;
      v62 = (2 * v59) ^ 0x233;
      if (v60 == 0) {
        v62 = v61;
      }
      v63 = ((v28 & 8) != 0) ^ ((v62 & 0x200) != 0);
      v64 = 2 * v62;
      v65 = (2 * v62) ^ 0x233;
      if (v63 == 0) {
        v65 = v64;
      }
      v66 = ((v28 & 4) != 0) ^ ((v65 & 0x200) != 0);
      v67 = 2 * v65;
      v68 = (2 * v65) ^ 0x233;
      if (v66 == 0) {
        v68 = v67;
      }
      v69 = ((v28 & 2) != 0) ^ ((v68 & 0x200) != 0);
      v70 = 2 * v68;
      v71 = (2 * v68) ^ 0x233;
      if (v69 == 0) {
        v71 = v70;
      }
      v72 = v28 ^ ((v71 & 0x200) != 0);
      v73 = 2 * v71;
      v74 = (2 * v71) ^ 0x233;
      if ((v72 & 1) != 0) {
        v17 = v74;
      }
      else {
        v17 = v73;
      }
      if (--v24 == 0) {
        goto LABEL_17;
      }
    }
  }
  v17 = 0;
LABEL_17:
  v18 = v16 & 0xF;
  v19 = SdkData_e87a50[0];
  v20 = a1[1];
  v21 = *((_DWORD*)SdkData_e87a50[0] + (v16 & 0xF));
  if (v20 <= v18) {
    v81 = nn_codec_FDK_getValidBits_plt(a1 + 2);
    if (31 - a1[1] >= v81) {
      v82 = v81;
    }
    else {
      v82 = 31 - a1[1];
    }
    v83 = *a1 << v82;
    v84 = nn_codec_FDK_get_plt(a1 + 2, v82);
    v85 = a1[1];
    v22 = v83 | v84;
    *a1 = v22;
    v20 = v85 + v82;
    if (v18 > v20) {
      v22 = (unsigned int)((_DWORD)v22 << (v18 - v20));
      v86 = 0;
      *(_QWORD*)a1 = (unsigned int)v22;
      v87 = v22;
      goto LABEL_70;
    }
  }
  else {
    v22 = *a1;
  }
  v86 = v20 - v18;
  a1[1] = v20 - v18;
  if ((v16 & 0xF) != 0) {
    v87 = (unsigned int)v22 >> v86;
  LABEL_70:
    v88 = v87 & v21;
    v89 = v16 & 3;
    v90 = 1LL << ((unsigned __int8)v18 - 1);
    if (v18 - 1 >= 3) {
      v91 = v114;
      v92 = v16 & 0xC;
      do {
        if (((v88 & (unsigned int)v90) != 0) != ((v17 & 0x200) != 0)) {
          v93 = (2 * v17) ^ 0x233;
        }
        else {
          v93 = 2 * v17;
        }
        v94 = ((v88 & ((unsigned int)v90 >> 1)) != 0) ^ ((v93 & 0x200) != 0);
        v95 = 2 * v93;
        v96 = (2 * v93) ^ 0x233;
        if (v94 == 0) {
          v96 = v95;
        }
        v97 = ((v88 & ((unsigned int)v90 >> 2)) != 0) ^ ((v96 & 0x200) != 0);
        v98 = 2 * v96;
        v99 = (2 * v96) ^ 0x233;
        if (v97 == 0) {
          v99 = v98;
        }
        v100 = (v88 & ((unsigned int)v90 >> 3)) == 0;
        LODWORD(v90) = (unsigned int)v90 >> 4;
        v101 = !v100;
        v102 = v101 ^ ((v99 & 0x200) != 0);
        v103 = 2 * v99;
        v104 = (2 * v99) ^ 0x233;
        if (v102 != 0) {
          v17 = v104;
        }
        else {
          v17 = v103;
        }
        v92 -= 4;
      } while (v92 != 0);
    }
    else {
      v91 = v114;
    }
    if ((v16 & 3) != 0) {
      do {
        v100 = (v88 & (unsigned int)v90) == 0;
        LODWORD(v90) = (unsigned int)v90 >> 1;
        v105 = !v100;
        if (v105 != ((v17 & 0x200) != 0)) {
          v17 = (2 * v17) ^ 0x233;
        }
        else {
          v17 *= 2;
        }
        --v89;
      } while (v89 != 0);
    }
    v106 = *(_DWORD*)((char*)((__int64*)0x28LL) + (_QWORD)v19);
    if (a1[12] != 0) {
      goto LABEL_96;
    }
    goto LABEL_98;
  }
  v91 = v114;
  v106 = *(_DWORD*)((char*)((__int64*)0x28LL) + (_QWORD)v19);
  if (a1[12] != 0) {
  LABEL_96:
    nn_codec_FDK_put_plt(a1 + 2, v22);
    goto LABEL_99;
  }
LABEL_98:
  nn_codec_FDK_pushBack_plt(a1 + 2, v86, 0);
LABEL_99:
  v107 = v91 & v106;
  *(_QWORD*)a1 = 0;
  v108 = nn_codec_FDK_getValidBits_plt(a1 + 2);
  v109 = a1[1];
  v110 = a1[12];
  v111 = v15 - v108;
  v112 = v109 + v111;
  if ((unsigned int)v112 > 0x1F) {
    if (v110 == 0) {
      nn_codec_FDK_pushBack_plt(a1 + 2, v109, 0);
      goto LABEL_105;
    }
  LABEL_103:
    nn_codec_FDK_put_plt(a1 + 2, *a1);
  LABEL_105:
    v113 = a1[12];
    *(_QWORD*)a1 = 0;
    nn_codec_FDK_pushBack_plt(a1 + 2, v111, v113);
    return v107 == (v17 & 0x3FF);
  }
  if (v110 != 0) {
    goto LABEL_103;
  }
  a1[1] = v112;
  nn_codec_FDK_pushBack_plt(a1 + 2, v112, 0);
  *(_QWORD*)a1 = 0;
  return v107 == (v17 & 0x3FF);
}

#pragma GCC visibility pop
